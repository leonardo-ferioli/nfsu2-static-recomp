#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x43e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x43e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_43e(u8* __restrict R,Cpu& c);
u32 page_43e(Cpu& c){return body_43e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_43e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x43e000:goto L43e000;
case 0x43e004:c.instructions+=5;goto B43e004;
case 0x43e008:c.instructions+=4;goto B43e008;
case 0x43e00b:c.instructions+=3;goto B43e00b;
case 0x43e00f:c.instructions+=2;goto B43e00f;
case 0x43e012:c.instructions+=1;goto B43e012;
case 0x43e014:goto L43e014;
case 0x43e015:c.instructions+=1;goto B43e015;
case 0x43e017:goto L43e017;
case 0x43e01c:c.instructions+=5;goto B43e01c;
case 0x43e01d:c.instructions+=4;goto B43e01d;
case 0x43e020:c.instructions+=3;goto B43e020;
case 0x43e023:c.instructions+=2;goto B43e023;
case 0x43e026:c.instructions+=1;goto B43e026;
case 0x43e028:goto L43e028;
case 0x43e029:goto L43e029;
case 0x43e030:goto L43e030;
case 0x43e034:c.instructions+=4;goto B43e034;
case 0x43e035:c.instructions+=3;goto B43e035;
case 0x43e039:c.instructions+=2;goto B43e039;
case 0x43e03b:c.instructions+=1;goto B43e03b;
case 0x43e03d:goto L43e03d;
case 0x43e041:c.instructions+=2;goto B43e041;
case 0x43e042:c.instructions+=1;goto B43e042;
case 0x43e044:goto L43e044;
case 0x43e048:c.instructions+=4;goto B43e048;
case 0x43e049:c.instructions+=3;goto B43e049;
case 0x43e04c:c.instructions+=2;goto B43e04c;
case 0x43e04f:c.instructions+=1;goto B43e04f;
case 0x43e051:goto L43e051;
case 0x43e052:c.instructions+=3;goto B43e052;
case 0x43e055:c.instructions+=2;goto B43e055;
case 0x43e057:c.instructions+=1;goto B43e057;
case 0x43e059:goto L43e059;
case 0x43e05a:goto L43e05a;
case 0x43e05b:c.instructions+=1;goto B43e05b;
case 0x43e060:goto L43e060;
case 0x43e061:c.instructions+=6;goto B43e061;
case 0x43e063:c.instructions+=5;goto B43e063;
case 0x43e065:c.instructions+=4;goto B43e065;
case 0x43e066:c.instructions+=3;goto B43e066;
case 0x43e068:c.instructions+=2;goto B43e068;
case 0x43e06a:c.instructions+=1;goto B43e06a;
case 0x43e06c:goto L43e06c;
case 0x43e06d:c.instructions+=1;goto B43e06d;
case 0x43e070:goto L43e070;
case 0x43e072:c.instructions+=2;goto B43e072;
case 0x43e073:c.instructions+=1;goto B43e073;
case 0x43e078:goto L43e078;
case 0x43e07a:c.instructions+=5;goto B43e07a;
case 0x43e07d:c.instructions+=4;goto B43e07d;
case 0x43e07e:c.instructions+=3;goto B43e07e;
case 0x43e081:c.instructions+=2;goto B43e081;
case 0x43e083:c.instructions+=1;goto B43e083;
case 0x43e085:goto L43e085;
case 0x43e086:goto L43e086;
case 0x43e08c:c.instructions+=2;goto B43e08c;
case 0x43e08e:c.instructions+=1;goto B43e08e;
case 0x43e090:goto L43e090;
case 0x43e091:c.instructions+=1;goto B43e091;
case 0x43e096:goto L43e096;
case 0x43e099:goto L43e099;
case 0x43e09a:c.instructions+=2;goto B43e09a;
case 0x43e09b:c.instructions+=1;goto B43e09b;
case 0x43e0a0:goto L43e0a0;
case 0x43e0a1:c.instructions+=9;goto B43e0a1;
case 0x43e0a2:c.instructions+=8;goto B43e0a2;
case 0x43e0a3:c.instructions+=7;goto B43e0a3;
case 0x43e0a4:c.instructions+=6;goto B43e0a4;
case 0x43e0a8:c.instructions+=5;goto B43e0a8;
case 0x43e0ab:c.instructions+=4;goto B43e0ab;
case 0x43e0ae:c.instructions+=3;goto B43e0ae;
case 0x43e0af:c.instructions+=2;goto B43e0af;
case 0x43e0b1:c.instructions+=1;goto B43e0b1;
case 0x43e0b6:goto L43e0b6;
case 0x43e0bc:c.instructions+=4;goto B43e0bc;
case 0x43e0bf:c.instructions+=3;goto B43e0bf;
case 0x43e0c1:c.instructions+=2;goto B43e0c1;
case 0x43e0c3:c.instructions+=1;goto B43e0c3;
case 0x43e0c5:goto L43e0c5;
case 0x43e0cb:c.instructions+=5;goto B43e0cb;
case 0x43e0ce:c.instructions+=4;goto B43e0ce;
case 0x43e0d1:c.instructions+=3;goto B43e0d1;
case 0x43e0d3:c.instructions+=2;goto B43e0d3;
case 0x43e0d6:c.instructions+=1;goto B43e0d6;
case 0x43e0d8:goto L43e0d8;
case 0x43e0da:goto L43e0da;
case 0x43e0dc:c.instructions+=1;goto B43e0dc;
case 0x43e0df:goto L43e0df;
case 0x43e0e1:goto L43e0e1;
case 0x43e0e7:c.instructions+=2;goto B43e0e7;
case 0x43e0e8:c.instructions+=1;goto B43e0e8;
case 0x43e0ed:goto L43e0ed;
case 0x43e0f1:c.instructions+=8;goto B43e0f1;
case 0x43e0f4:c.instructions+=7;goto B43e0f4;
case 0x43e0f5:c.instructions+=6;goto B43e0f5;
case 0x43e0f6:c.instructions+=5;goto B43e0f6;
case 0x43e0fc:c.instructions+=4;goto B43e0fc;
case 0x43e0fd:c.instructions+=3;goto B43e0fd;
case 0x43e103:c.instructions+=2;goto B43e103;
case 0x43e104:c.instructions+=1;goto B43e104;
case 0x43e107:goto L43e107;
case 0x43e10d:c.instructions+=6;goto B43e10d;
case 0x43e10e:c.instructions+=5;goto B43e10e;
case 0x43e10f:c.instructions+=4;goto B43e10f;
case 0x43e115:c.instructions+=3;goto B43e115;
case 0x43e116:c.instructions+=2;goto B43e116;
case 0x43e117:c.instructions+=1;goto B43e117;
case 0x43e120:goto L43e120;
case 0x43e121:c.instructions+=8;goto B43e121;
case 0x43e125:c.instructions+=7;goto B43e125;
case 0x43e127:c.instructions+=6;goto B43e127;
case 0x43e128:c.instructions+=5;goto B43e128;
case 0x43e12c:c.instructions+=4;goto B43e12c;
case 0x43e12d:c.instructions+=3;goto B43e12d;
case 0x43e131:c.instructions+=2;goto B43e131;
case 0x43e132:c.instructions+=1;goto B43e132;
case 0x43e134:goto L43e134;
case 0x43e138:c.instructions+=2;goto B43e138;
case 0x43e13a:c.instructions+=1;goto B43e13a;
case 0x43e13c:goto L43e13c;
case 0x43e13f:c.instructions+=2;goto B43e13f;
case 0x43e141:c.instructions+=1;goto B43e141;
case 0x43e143:goto L43e143;
case 0x43e144:c.instructions+=2;goto B43e144;
case 0x43e146:c.instructions+=1;goto B43e146;
case 0x43e148:goto L43e148;
case 0x43e14b:goto L43e14b;
case 0x43e14d:c.instructions+=1;goto B43e14d;
case 0x43e14f:goto L43e14f;
case 0x43e151:c.instructions+=1;goto B43e151;
case 0x43e153:goto L43e153;
case 0x43e155:c.instructions+=5;goto B43e155;
case 0x43e156:c.instructions+=4;goto B43e156;
case 0x43e158:c.instructions+=3;goto B43e158;
case 0x43e15a:c.instructions+=2;goto B43e15a;
case 0x43e15b:c.instructions+=1;goto B43e15b;
case 0x43e15d:goto L43e15d;
case 0x43e15f:c.instructions+=1;goto B43e15f;
case 0x43e161:goto L43e161;
case 0x43e163:c.instructions+=1;goto B43e163;
case 0x43e165:goto L43e165;
case 0x43e16a:c.instructions+=1;goto B43e16a;
case 0x43e16c:goto L43e16c;
case 0x43e16e:c.instructions+=2;goto B43e16e;
case 0x43e16f:c.instructions+=1;goto B43e16f;
case 0x43e171:goto L43e171;
case 0x43e173:c.instructions+=1;goto B43e173;
case 0x43e175:goto L43e175;
case 0x43e177:c.instructions+=1;goto B43e177;
case 0x43e179:goto L43e179;
case 0x43e17b:c.instructions+=1;goto B43e17b;
case 0x43e17d:goto L43e17d;
case 0x43e17f:c.instructions+=1;goto B43e17f;
case 0x43e181:goto L43e181;
case 0x43e183:c.instructions+=1;goto B43e183;
case 0x43e185:goto L43e185;
case 0x43e186:c.instructions+=1;goto B43e186;
case 0x43e188:goto L43e188;
case 0x43e189:c.instructions+=6;goto B43e189;
case 0x43e18a:c.instructions+=5;goto B43e18a;
case 0x43e18b:c.instructions+=4;goto B43e18b;
case 0x43e18d:c.instructions+=3;goto B43e18d;
case 0x43e18f:c.instructions+=2;goto B43e18f;
case 0x43e190:c.instructions+=1;goto B43e190;
case 0x43e193:goto L43e193;
case 0x43e197:c.instructions+=4;goto B43e197;
case 0x43e199:c.instructions+=3;goto B43e199;
case 0x43e19b:c.instructions+=2;goto B43e19b;
case 0x43e19d:c.instructions+=1;goto B43e19d;
case 0x43e1a0:goto L43e1a0;
case 0x43e1a3:c.instructions+=2;goto B43e1a3;
case 0x43e1a5:c.instructions+=1;goto B43e1a5;
case 0x43e1a7:goto L43e1a7;
case 0x43e1a9:c.instructions+=1;goto B43e1a9;
case 0x43e1ab:goto L43e1ab;
case 0x43e1ad:c.instructions+=1;goto B43e1ad;
case 0x43e1af:goto L43e1af;
case 0x43e1b1:c.instructions+=1;goto B43e1b1;
case 0x43e1b3:goto L43e1b3;
case 0x43e1b5:c.instructions+=1;goto B43e1b5;
case 0x43e1b7:goto L43e1b7;
case 0x43e1b9:c.instructions+=1;goto B43e1b9;
case 0x43e1bb:goto L43e1bb;
case 0x43e1bd:c.instructions+=1;goto B43e1bd;
case 0x43e1bf:goto L43e1bf;
case 0x43e1c1:c.instructions+=1;goto B43e1c1;
case 0x43e1c3:goto L43e1c3;
case 0x43e1c5:c.instructions+=1;goto B43e1c5;
case 0x43e1c7:goto L43e1c7;
case 0x43e1c9:c.instructions+=1;goto B43e1c9;
case 0x43e1cb:goto L43e1cb;
case 0x43e1cf:c.instructions+=1;goto B43e1cf;
case 0x43e1d1:goto L43e1d1;
case 0x43e1d4:c.instructions+=3;goto B43e1d4;
case 0x43e1d5:c.instructions+=2;goto B43e1d5;
case 0x43e1d6:c.instructions+=1;goto B43e1d6;
case 0x43e1d8:goto L43e1d8;
case 0x43e1da:goto L43e1da;
case 0x43e1dd:c.instructions+=1;goto B43e1dd;
case 0x43e1df:goto L43e1df;
case 0x43e1e2:c.instructions+=1;goto B43e1e2;
case 0x43e1e3:goto L43e1e3;
case 0x43e1e7:c.instructions+=3;goto B43e1e7;
case 0x43e1e8:c.instructions+=2;goto B43e1e8;
case 0x43e1ea:c.instructions+=1;goto B43e1ea;
case 0x43e1ec:goto L43e1ec;
case 0x43e1f0:c.instructions+=8;goto B43e1f0;
case 0x43e1f4:c.instructions+=7;goto B43e1f4;
case 0x43e1f5:c.instructions+=6;goto B43e1f5;
case 0x43e1f6:c.instructions+=5;goto B43e1f6;
case 0x43e1f7:c.instructions+=4;goto B43e1f7;
case 0x43e1f9:c.instructions+=3;goto B43e1f9;
case 0x43e1fb:c.instructions+=2;goto B43e1fb;
case 0x43e1fc:c.instructions+=1;goto B43e1fc;
case 0x43e200:goto L43e200;
case 0x43e204:c.instructions+=13;goto B43e204;
case 0x43e207:c.instructions+=12;goto B43e207;
case 0x43e208:c.instructions+=11;goto B43e208;
case 0x43e209:c.instructions+=10;goto B43e209;
case 0x43e20a:c.instructions+=9;goto B43e20a;
case 0x43e20c:c.instructions+=8;goto B43e20c;
case 0x43e213:c.instructions+=7;goto B43e213;
case 0x43e219:c.instructions+=6;goto B43e219;
case 0x43e21b:c.instructions+=5;goto B43e21b;
case 0x43e21d:c.instructions+=4;goto B43e21d;
case 0x43e220:c.instructions+=3;goto B43e220;
case 0x43e221:c.instructions+=2;goto B43e221;
case 0x43e223:c.instructions+=1;goto B43e223;
case 0x43e225:goto L43e225;
case 0x43e227:goto L43e227;
case 0x43e22b:c.instructions+=4;goto B43e22b;
case 0x43e22c:c.instructions+=3;goto B43e22c;
case 0x43e22e:c.instructions+=2;goto B43e22e;
case 0x43e230:c.instructions+=1;goto B43e230;
case 0x43e232:goto L43e232;
case 0x43e236:c.instructions+=2;goto B43e236;
case 0x43e237:c.instructions+=1;goto B43e237;
case 0x43e23c:goto L43e23c;
case 0x43e23f:c.instructions+=14;goto B43e23f;
case 0x43e241:c.instructions+=13;goto B43e241;
case 0x43e242:c.instructions+=12;goto B43e242;
case 0x43e245:c.instructions+=11;goto B43e245;
case 0x43e247:c.instructions+=10;goto B43e247;
case 0x43e24a:c.instructions+=9;goto B43e24a;
case 0x43e24d:c.instructions+=8;goto B43e24d;
case 0x43e24f:c.instructions+=7;goto B43e24f;
case 0x43e252:c.instructions+=6;goto B43e252;
case 0x43e253:c.instructions+=5;goto B43e253;
case 0x43e255:c.instructions+=4;goto B43e255;
case 0x43e25b:c.instructions+=3;goto B43e25b;
case 0x43e261:c.instructions+=2;goto B43e261;
case 0x43e267:c.instructions+=1;goto B43e267;
case 0x43e26c:goto L43e26c;
case 0x43e270:c.instructions+=14;goto B43e270;
case 0x43e274:c.instructions+=13;goto B43e274;
case 0x43e275:c.instructions+=12;goto B43e275;
case 0x43e279:c.instructions+=11;goto B43e279;
case 0x43e27a:c.instructions+=10;goto B43e27a;
case 0x43e27b:c.instructions+=9;goto B43e27b;
case 0x43e281:c.instructions+=8;goto B43e281;
case 0x43e284:c.instructions+=7;goto B43e284;
case 0x43e285:c.instructions+=6;goto B43e285;
case 0x43e286:c.instructions+=5;goto B43e286;
case 0x43e288:c.instructions+=4;goto B43e288;
case 0x43e28c:c.instructions+=3;goto B43e28c;
case 0x43e28e:c.instructions+=2;goto B43e28e;
case 0x43e296:c.instructions+=1;goto B43e296;
case 0x43e29b:goto L43e29b;
case 0x43e29d:c.instructions+=1;goto B43e29d;
case 0x43e2a3:goto L43e2a3;
case 0x43e2a5:goto L43e2a5;
case 0x43e2a9:c.instructions+=1;goto B43e2a9;
case 0x43e2b0:goto L43e2b0;
case 0x43e2b3:c.instructions+=2;goto B43e2b3;
case 0x43e2b5:c.instructions+=1;goto B43e2b5;
case 0x43e2b7:goto L43e2b7;
case 0x43e2ba:c.instructions+=1;goto B43e2ba;
case 0x43e2bc:goto L43e2bc;
case 0x43e2c0:goto L43e2c0;
case 0x43e2c4:c.instructions+=3;goto B43e2c4;
case 0x43e2c5:c.instructions+=2;goto B43e2c5;
case 0x43e2c7:c.instructions+=1;goto B43e2c7;
case 0x43e2c9:goto L43e2c9;
case 0x43e2cf:c.instructions+=2;goto B43e2cf;
case 0x43e2d5:c.instructions+=1;goto B43e2d5;
case 0x43e2d7:goto L43e2d7;
case 0x43e2de:c.instructions+=8;goto B43e2de;
case 0x43e2e3:c.instructions+=7;goto B43e2e3;
case 0x43e2e5:c.instructions+=6;goto B43e2e5;
case 0x43e2e7:c.instructions+=5;goto B43e2e7;
case 0x43e2ea:c.instructions+=4;goto B43e2ea;
case 0x43e2ee:c.instructions+=3;goto B43e2ee;
case 0x43e2ef:c.instructions+=2;goto B43e2ef;
case 0x43e2f1:c.instructions+=1;goto B43e2f1;
case 0x43e2f6:goto L43e2f6;
case 0x43e2fc:c.instructions+=15;goto B43e2fc;
case 0x43e302:c.instructions+=14;goto B43e302;
case 0x43e305:c.instructions+=13;goto B43e305;
case 0x43e306:c.instructions+=12;goto B43e306;
case 0x43e30c:c.instructions+=11;goto B43e30c;
case 0x43e30f:c.instructions+=10;goto B43e30f;
case 0x43e311:c.instructions+=9;goto B43e311;
case 0x43e313:c.instructions+=8;goto B43e313;
case 0x43e315:c.instructions+=7;goto B43e315;
case 0x43e318:c.instructions+=6;goto B43e318;
case 0x43e31b:c.instructions+=5;goto B43e31b;
case 0x43e320:c.instructions+=4;goto B43e320;
case 0x43e324:c.instructions+=3;goto B43e324;
case 0x43e327:c.instructions+=2;goto B43e327;
case 0x43e32c:c.instructions+=1;goto B43e32c;
case 0x43e32e:goto L43e32e;
case 0x43e330:c.instructions+=3;goto B43e330;
case 0x43e332:c.instructions+=2;goto B43e332;
case 0x43e336:c.instructions+=1;goto B43e336;
case 0x43e338:goto L43e338;
case 0x43e33b:c.instructions+=2;goto B43e33b;
case 0x43e33e:c.instructions+=1;goto B43e33e;
case 0x43e340:goto L43e340;
case 0x43e343:c.instructions+=1;goto B43e343;
case 0x43e345:goto L43e345;
case 0x43e348:goto L43e348;
case 0x43e34b:c.instructions+=3;goto B43e34b;
case 0x43e34c:c.instructions+=2;goto B43e34c;
case 0x43e34e:c.instructions+=1;goto B43e34e;
case 0x43e350:goto L43e350;
case 0x43e357:c.instructions+=3;goto B43e357;
case 0x43e35b:c.instructions+=2;goto B43e35b;
case 0x43e35f:c.instructions+=1;goto B43e35f;
case 0x43e361:goto L43e361;
case 0x43e364:c.instructions+=2;goto B43e364;
case 0x43e366:c.instructions+=1;goto B43e366;
case 0x43e368:goto L43e368;
case 0x43e36b:c.instructions+=2;goto B43e36b;
case 0x43e36d:c.instructions+=1;goto B43e36d;
case 0x43e36f:goto L43e36f;
case 0x43e373:c.instructions+=7;goto B43e373;
case 0x43e376:c.instructions+=6;goto B43e376;
case 0x43e377:c.instructions+=5;goto B43e377;
case 0x43e37a:c.instructions+=4;goto B43e37a;
case 0x43e37d:c.instructions+=3;goto B43e37d;
case 0x43e382:c.instructions+=2;goto B43e382;
case 0x43e384:c.instructions+=1;goto B43e384;
case 0x43e386:goto L43e386;
case 0x43e389:c.instructions+=4;goto B43e389;
case 0x43e38b:c.instructions+=3;goto B43e38b;
case 0x43e38c:c.instructions+=2;goto B43e38c;
case 0x43e38e:c.instructions+=1;goto B43e38e;
case 0x43e390:goto L43e390;
case 0x43e392:c.instructions+=1;goto B43e392;
case 0x43e394:goto L43e394;
case 0x43e396:c.instructions+=1;goto B43e396;
case 0x43e398:goto L43e398;
case 0x43e39b:c.instructions+=3;goto B43e39b;
case 0x43e39e:c.instructions+=2;goto B43e39e;
case 0x43e3a0:c.instructions+=1;goto B43e3a0;
case 0x43e3a2:goto L43e3a2;
case 0x43e3a5:c.instructions+=8;goto B43e3a5;
case 0x43e3a8:c.instructions+=7;goto B43e3a8;
case 0x43e3a9:c.instructions+=6;goto B43e3a9;
case 0x43e3ac:c.instructions+=5;goto B43e3ac;
case 0x43e3af:c.instructions+=4;goto B43e3af;
case 0x43e3b1:c.instructions+=3;goto B43e3b1;
case 0x43e3b2:c.instructions+=2;goto B43e3b2;
case 0x43e3b4:c.instructions+=1;goto B43e3b4;
case 0x43e3b9:goto L43e3b9;
case 0x43e3bd:c.instructions+=13;goto B43e3bd;
case 0x43e3c1:c.instructions+=12;goto B43e3c1;
case 0x43e3c5:c.instructions+=11;goto B43e3c5;
case 0x43e3c6:c.instructions+=10;goto B43e3c6;
case 0x43e3ca:c.instructions+=9;goto B43e3ca;
case 0x43e3ce:c.instructions+=8;goto B43e3ce;
case 0x43e3cf:c.instructions+=7;goto B43e3cf;
case 0x43e3d2:c.instructions+=6;goto B43e3d2;
case 0x43e3d3:c.instructions+=5;goto B43e3d3;
case 0x43e3d4:c.instructions+=4;goto B43e3d4;
case 0x43e3d6:c.instructions+=3;goto B43e3d6;
case 0x43e3d7:c.instructions+=2;goto B43e3d7;
case 0x43e3d9:c.instructions+=1;goto B43e3d9;
case 0x43e3de:goto L43e3de;
case 0x43e3e0:c.instructions+=2;goto B43e3e0;
case 0x43e3e2:c.instructions+=1;goto B43e3e2;
case 0x43e3e8:goto L43e3e8;
case 0x43e3ee:c.instructions+=3;goto B43e3ee;
case 0x43e3f1:c.instructions+=2;goto B43e3f1;
case 0x43e3f3:c.instructions+=1;goto B43e3f3;
case 0x43e3f5:goto L43e3f5;
case 0x43e3fb:c.instructions+=1;goto B43e3fb;
case 0x43e400:goto L43e400;
case 0x43e403:c.instructions+=8;goto B43e403;
case 0x43e406:c.instructions+=7;goto B43e406;
case 0x43e408:c.instructions+=6;goto B43e408;
case 0x43e40a:c.instructions+=5;goto B43e40a;
case 0x43e40f:c.instructions+=4;goto B43e40f;
case 0x43e415:c.instructions+=3;goto B43e415;
case 0x43e419:c.instructions+=2;goto B43e419;
case 0x43e41b:c.instructions+=1;goto B43e41b;
case 0x43e41d:goto L43e41d;
case 0x43e41f:goto L43e41f;
case 0x43e420:c.instructions+=1;goto B43e420;
case 0x43e422:goto L43e422;
case 0x43e423:c.instructions+=5;goto B43e423;
case 0x43e424:c.instructions+=4;goto B43e424;
case 0x43e425:c.instructions+=3;goto B43e425;
case 0x43e426:c.instructions+=2;goto B43e426;
case 0x43e429:c.instructions+=1;goto B43e429;
case 0x43e430:goto L43e430;
case 0x43e436:c.instructions+=5;goto B43e436;
case 0x43e437:c.instructions+=4;goto B43e437;
case 0x43e438:c.instructions+=3;goto B43e438;
case 0x43e43e:c.instructions+=2;goto B43e43e;
case 0x43e440:c.instructions+=1;goto B43e440;
case 0x43e442:goto L43e442;
case 0x43e448:c.instructions+=4;goto B43e448;
case 0x43e44b:c.instructions+=3;goto B43e44b;
case 0x43e44e:c.instructions+=2;goto B43e44e;
case 0x43e450:c.instructions+=1;goto B43e450;
case 0x43e452:goto L43e452;
case 0x43e455:c.instructions+=2;goto B43e455;
case 0x43e457:c.instructions+=1;goto B43e457;
case 0x43e459:goto L43e459;
case 0x43e45d:c.instructions+=5;goto B43e45d;
case 0x43e463:c.instructions+=4;goto B43e463;
case 0x43e465:c.instructions+=3;goto B43e465;
case 0x43e467:c.instructions+=2;goto B43e467;
case 0x43e46d:c.instructions+=1;goto B43e46d;
case 0x43e46f:goto L43e46f;
case 0x43e472:c.instructions+=3;goto B43e472;
case 0x43e475:c.instructions+=2;goto B43e475;
case 0x43e477:c.instructions+=1;goto B43e477;
case 0x43e479:goto L43e479;
case 0x43e47a:c.instructions+=3;goto B43e47a;
case 0x43e47c:c.instructions+=2;goto B43e47c;
case 0x43e47d:c.instructions+=1;goto B43e47d;
case 0x43e47e:goto L43e47e;
case 0x43e484:c.instructions+=9;goto B43e484;
case 0x43e487:c.instructions+=8;goto B43e487;
case 0x43e488:c.instructions+=7;goto B43e488;
case 0x43e48b:c.instructions+=6;goto B43e48b;
case 0x43e48e:c.instructions+=5;goto B43e48e;
case 0x43e491:c.instructions+=4;goto B43e491;
case 0x43e492:c.instructions+=3;goto B43e492;
case 0x43e494:c.instructions+=2;goto B43e494;
case 0x43e495:c.instructions+=1;goto B43e495;
case 0x43e4a0:goto L43e4a0;
case 0x43e4a1:c.instructions+=6;goto B43e4a1;
case 0x43e4a2:c.instructions+=5;goto B43e4a2;
case 0x43e4a6:c.instructions+=4;goto B43e4a6;
case 0x43e4a7:c.instructions+=3;goto B43e4a7;
case 0x43e4a9:c.instructions+=2;goto B43e4a9;
case 0x43e4af:c.instructions+=1;goto B43e4af;
case 0x43e4b0:goto L43e4b0;
case 0x43e4b6:c.instructions+=2;goto B43e4b6;
case 0x43e4b8:c.instructions+=1;goto B43e4b8;
case 0x43e4ba:goto L43e4ba;
case 0x43e4c0:c.instructions+=4;goto B43e4c0;
case 0x43e4c3:c.instructions+=3;goto B43e4c3;
case 0x43e4c6:c.instructions+=2;goto B43e4c6;
case 0x43e4c8:c.instructions+=1;goto B43e4c8;
case 0x43e4ca:goto L43e4ca;
case 0x43e4cd:c.instructions+=2;goto B43e4cd;
case 0x43e4cf:c.instructions+=1;goto B43e4cf;
case 0x43e4d1:goto L43e4d1;
case 0x43e4d5:c.instructions+=6;goto B43e4d5;
case 0x43e4db:c.instructions+=5;goto B43e4db;
case 0x43e4dd:c.instructions+=4;goto B43e4dd;
case 0x43e4df:c.instructions+=3;goto B43e4df;
case 0x43e4e1:c.instructions+=2;goto B43e4e1;
case 0x43e4e7:c.instructions+=1;goto B43e4e7;
case 0x43e4e9:goto L43e4e9;
case 0x43e4ec:c.instructions+=3;goto B43e4ec;
case 0x43e4ef:c.instructions+=2;goto B43e4ef;
case 0x43e4f1:c.instructions+=1;goto B43e4f1;
case 0x43e4f3:goto L43e4f3;
case 0x43e4f9:c.instructions+=6;goto B43e4f9;
case 0x43e4fc:c.instructions+=5;goto B43e4fc;
case 0x43e4fd:c.instructions+=4;goto B43e4fd;
case 0x43e500:c.instructions+=3;goto B43e500;
case 0x43e503:c.instructions+=2;goto B43e503;
case 0x43e506:c.instructions+=1;goto B43e506;
case 0x43e508:goto L43e508;
case 0x43e509:c.instructions+=2;goto B43e509;
case 0x43e50a:c.instructions+=1;goto B43e50a;
case 0x43e50f:goto L43e50f;
case 0x43e512:c.instructions+=2;goto B43e512;
case 0x43e514:c.instructions+=1;goto B43e514;
case 0x43e516:goto L43e516;
case 0x43e518:c.instructions+=5;goto B43e518;
case 0x43e519:c.instructions+=4;goto B43e519;
case 0x43e51a:c.instructions+=3;goto B43e51a;
case 0x43e51b:c.instructions+=2;goto B43e51b;
case 0x43e51c:c.instructions+=1;goto B43e51c;
case 0x43e51f:goto L43e51f;
case 0x43e520:c.instructions+=5;goto B43e520;
case 0x43e521:c.instructions+=4;goto B43e521;
case 0x43e522:c.instructions+=3;goto B43e522;
case 0x43e524:c.instructions+=2;goto B43e524;
case 0x43e525:c.instructions+=1;goto B43e525;
case 0x43e530:goto L43e530;
case 0x43e536:c.instructions+=2;goto B43e536;
case 0x43e53c:c.instructions+=1;goto B43e53c;
case 0x43e53e:goto L43e53e;
case 0x43e544:c.instructions+=4;goto B43e544;
case 0x43e547:c.instructions+=3;goto B43e547;
case 0x43e54a:c.instructions+=2;goto B43e54a;
case 0x43e54c:c.instructions+=1;goto B43e54c;
case 0x43e54e:goto L43e54e;
case 0x43e551:c.instructions+=2;goto B43e551;
case 0x43e553:c.instructions+=1;goto B43e553;
case 0x43e555:goto L43e555;
case 0x43e55a:c.instructions+=1;goto B43e55a;
case 0x43e55b:goto L43e55b;
case 0x43e55d:c.instructions+=1;goto B43e55d;
case 0x43e560:goto L43e560;
case 0x43e566:c.instructions+=2;goto B43e566;
case 0x43e56c:c.instructions+=1;goto B43e56c;
case 0x43e56e:goto L43e56e;
case 0x43e56f:c.instructions+=6;goto B43e56f;
case 0x43e575:c.instructions+=5;goto B43e575;
case 0x43e578:c.instructions+=4;goto B43e578;
case 0x43e57b:c.instructions+=3;goto B43e57b;
case 0x43e57d:c.instructions+=2;goto B43e57d;
case 0x43e57e:c.instructions+=1;goto B43e57e;
case 0x43e580:goto L43e580;
case 0x43e581:c.instructions+=4;goto B43e581;
case 0x43e584:c.instructions+=3;goto B43e584;
case 0x43e586:c.instructions+=2;goto B43e586;
case 0x43e587:c.instructions+=1;goto B43e587;
case 0x43e589:goto L43e589;
case 0x43e58a:c.instructions+=7;goto B43e58a;
case 0x43e590:c.instructions+=6;goto B43e590;
case 0x43e593:c.instructions+=5;goto B43e593;
case 0x43e594:c.instructions+=4;goto B43e594;
case 0x43e597:c.instructions+=3;goto B43e597;
case 0x43e59a:c.instructions+=2;goto B43e59a;
case 0x43e59d:c.instructions+=1;goto B43e59d;
case 0x43e59e:goto L43e59e;
case 0x43e5a0:c.instructions+=1;goto B43e5a0;
case 0x43e5b0:goto L43e5b0;
case 0x43e5c0:goto L43e5c0;
case 0x43e5c3:c.instructions+=4;goto B43e5c3;
case 0x43e5c4:c.instructions+=3;goto B43e5c4;
case 0x43e5c8:c.instructions+=2;goto B43e5c8;
case 0x43e5c9:c.instructions+=1;goto B43e5c9;
case 0x43e5cf:goto L43e5cf;
case 0x43e5d5:c.instructions+=4;goto B43e5d5;
case 0x43e5d9:c.instructions+=3;goto B43e5d9;
case 0x43e5dd:c.instructions+=2;goto B43e5dd;
case 0x43e5df:c.instructions+=1;goto B43e5df;
case 0x43e5e4:goto L43e5e4;
case 0x43e5e8:c.instructions+=2;goto B43e5e8;
case 0x43e5ec:c.instructions+=1;goto B43e5ec;
case 0x43e5ee:goto L43e5ee;
case 0x43e5f6:goto L43e5f6;
case 0x43e5f8:c.instructions+=9;goto B43e5f8;
case 0x43e5fd:c.instructions+=8;goto B43e5fd;
case 0x43e5ff:c.instructions+=7;goto B43e5ff;
case 0x43e600:c.instructions+=6;goto B43e600;
case 0x43e604:c.instructions+=5;goto B43e604;
case 0x43e608:c.instructions+=4;goto B43e608;
case 0x43e60c:c.instructions+=3;goto B43e60c;
case 0x43e612:c.instructions+=2;goto B43e612;
case 0x43e615:c.instructions+=1;goto B43e615;
case 0x43e620:goto L43e620;
case 0x43e624:c.instructions+=4;goto B43e624;
case 0x43e626:c.instructions+=3;goto B43e626;
case 0x43e628:c.instructions+=2;goto B43e628;
case 0x43e62a:c.instructions+=1;goto B43e62a;
case 0x43e62c:goto L43e62c;
case 0x43e62d:c.instructions+=1;goto B43e62d;
case 0x43e630:goto L43e630;
case 0x43e633:c.instructions+=3;goto B43e633;
case 0x43e634:c.instructions+=2;goto B43e634;
case 0x43e636:c.instructions+=1;goto B43e636;
case 0x43e638:goto L43e638;
case 0x43e63a:c.instructions+=2;goto B43e63a;
case 0x43e63b:c.instructions+=1;goto B43e63b;
case 0x43e63d:goto L43e63d;
case 0x43e63f:c.instructions+=1;goto B43e63f;
case 0x43e640:goto L43e640;
case 0x43e643:c.instructions+=3;goto B43e643;
case 0x43e644:c.instructions+=2;goto B43e644;
case 0x43e646:c.instructions+=1;goto B43e646;
case 0x43e648:goto L43e648;
case 0x43e64a:c.instructions+=1;goto B43e64a;
case 0x43e650:goto L43e650;
case 0x43e651:c.instructions+=9;goto B43e651;
case 0x43e652:c.instructions+=8;goto B43e652;
case 0x43e653:c.instructions+=7;goto B43e653;
case 0x43e655:c.instructions+=6;goto B43e655;
case 0x43e656:c.instructions+=5;goto B43e656;
case 0x43e658:c.instructions+=4;goto B43e658;
case 0x43e65a:c.instructions+=3;goto B43e65a;
case 0x43e65c:c.instructions+=2;goto B43e65c;
case 0x43e65e:c.instructions+=1;goto B43e65e;
case 0x43e660:goto L43e660;
case 0x43e662:c.instructions+=1;goto B43e662;
case 0x43e664:goto L43e664;
case 0x43e665:c.instructions+=2;goto B43e665;
case 0x43e666:c.instructions+=1;goto B43e666;
case 0x43e66a:goto L43e66a;
case 0x43e66d:c.instructions+=2;goto B43e66d;
case 0x43e66f:c.instructions+=1;goto B43e66f;
case 0x43e671:goto L43e671;
case 0x43e673:c.instructions+=11;goto B43e673;
case 0x43e676:c.instructions+=10;goto B43e676;
case 0x43e678:c.instructions+=9;goto B43e678;
case 0x43e67b:c.instructions+=8;goto B43e67b;
case 0x43e67e:c.instructions+=7;goto B43e67e;
case 0x43e680:c.instructions+=6;goto B43e680;
case 0x43e683:c.instructions+=5;goto B43e683;
case 0x43e686:c.instructions+=4;goto B43e686;
case 0x43e688:c.instructions+=3;goto B43e688;
case 0x43e68a:c.instructions+=2;goto B43e68a;
case 0x43e68b:c.instructions+=1;goto B43e68b;
case 0x43e68d:goto L43e68d;
case 0x43e68f:c.instructions+=1;goto B43e68f;
case 0x43e691:goto L43e691;
case 0x43e693:c.instructions+=1;goto B43e693;
case 0x43e695:goto L43e695;
case 0x43e697:c.instructions+=1;goto B43e697;
case 0x43e699:goto L43e699;
case 0x43e69d:c.instructions+=3;goto B43e69d;
case 0x43e69e:c.instructions+=2;goto B43e69e;
case 0x43e6a0:c.instructions+=1;goto B43e6a0;
case 0x43e6a5:goto L43e6a5;
case 0x43e6a6:c.instructions+=4;goto B43e6a6;
case 0x43e6a7:c.instructions+=3;goto B43e6a7;
case 0x43e6a8:c.instructions+=2;goto B43e6a8;
case 0x43e6a9:c.instructions+=1;goto B43e6a9;
case 0x43e6b0:goto L43e6b0;
case 0x43e6b4:c.instructions+=11;goto B43e6b4;
case 0x43e6b9:c.instructions+=10;goto B43e6b9;
case 0x43e6bb:c.instructions+=9;goto B43e6bb;
case 0x43e6be:c.instructions+=8;goto B43e6be;
case 0x43e6c0:c.instructions+=7;goto B43e6c0;
case 0x43e6c2:c.instructions+=6;goto B43e6c2;
case 0x43e6c5:c.instructions+=5;goto B43e6c5;
case 0x43e6c7:c.instructions+=4;goto B43e6c7;
case 0x43e6c9:c.instructions+=3;goto B43e6c9;
case 0x43e6cd:c.instructions+=2;goto B43e6cd;
case 0x43e6cf:c.instructions+=1;goto B43e6cf;
case 0x43e6d0:goto L43e6d0;
case 0x43e6d4:c.instructions+=7;goto B43e6d4;
case 0x43e6d7:c.instructions+=6;goto B43e6d7;
case 0x43e6dd:c.instructions+=5;goto B43e6dd;
case 0x43e6de:c.instructions+=4;goto B43e6de;
case 0x43e6e0:c.instructions+=3;goto B43e6e0;
case 0x43e6e2:c.instructions+=2;goto B43e6e2;
case 0x43e6e5:c.instructions+=1;goto B43e6e5;
case 0x43e6e7:goto L43e6e7;
case 0x43e6ec:goto L43e6ec;
case 0x43e6f0:c.instructions+=4;goto B43e6f0;
case 0x43e6f6:c.instructions+=3;goto B43e6f6;
case 0x43e6f8:c.instructions+=2;goto B43e6f8;
case 0x43e6fb:c.instructions+=1;goto B43e6fb;
case 0x43e6fd:goto L43e6fd;
case 0x43e700:goto L43e700;
case 0x43e704:c.instructions+=19;goto B43e704;
case 0x43e70c:c.instructions+=18;goto B43e70c;
case 0x43e70e:c.instructions+=17;goto B43e70e;
case 0x43e712:c.instructions+=16;goto B43e712;
case 0x43e716:c.instructions+=15;goto B43e716;
case 0x43e718:c.instructions+=14;goto B43e718;
case 0x43e71c:c.instructions+=13;goto B43e71c;
case 0x43e720:c.instructions+=12;goto B43e720;
case 0x43e724:c.instructions+=11;goto B43e724;
case 0x43e728:c.instructions+=10;goto B43e728;
case 0x43e72c:c.instructions+=9;goto B43e72c;
case 0x43e730:c.instructions+=8;goto B43e730;
case 0x43e734:c.instructions+=7;goto B43e734;
case 0x43e736:c.instructions+=6;goto B43e736;
case 0x43e738:c.instructions+=5;goto B43e738;
case 0x43e73b:c.instructions+=4;goto B43e73b;
case 0x43e73f:c.instructions+=3;goto B43e73f;
case 0x43e745:c.instructions+=2;goto B43e745;
case 0x43e747:c.instructions+=1;goto B43e747;
case 0x43e749:goto L43e749;
case 0x43e74c:c.instructions+=1;goto B43e74c;
case 0x43e74e:goto L43e74e;
case 0x43e752:c.instructions+=4;goto B43e752;
case 0x43e758:c.instructions+=3;goto B43e758;
case 0x43e75a:c.instructions+=2;goto B43e75a;
case 0x43e75d:c.instructions+=1;goto B43e75d;
case 0x43e75f:goto L43e75f;
case 0x43e767:c.instructions+=1;goto B43e767;
case 0x43e769:goto L43e769;
case 0x43e76d:c.instructions+=3;goto B43e76d;
case 0x43e76f:c.instructions+=2;goto B43e76f;
case 0x43e773:c.instructions+=1;goto B43e773;
case 0x43e777:goto L43e777;
case 0x43e77b:c.instructions+=2;goto B43e77b;
case 0x43e77c:c.instructions+=1;goto B43e77c;
case 0x43e781:goto L43e781;
case 0x43e784:c.instructions+=2;goto B43e784;
case 0x43e788:c.instructions+=1;goto B43e788;
case 0x43e78a:goto L43e78a;
case 0x43e78d:c.instructions+=1;goto B43e78d;
case 0x43e78f:goto L43e78f;
case 0x43e793:c.instructions+=4;goto B43e793;
case 0x43e799:c.instructions+=3;goto B43e799;
case 0x43e79b:c.instructions+=2;goto B43e79b;
case 0x43e79e:c.instructions+=1;goto B43e79e;
case 0x43e7a0:goto L43e7a0;
case 0x43e7a8:c.instructions+=1;goto B43e7a8;
case 0x43e7aa:goto L43e7aa;
case 0x43e7ae:c.instructions+=3;goto B43e7ae;
case 0x43e7b0:c.instructions+=2;goto B43e7b0;
case 0x43e7b4:c.instructions+=1;goto B43e7b4;
case 0x43e7b8:goto L43e7b8;
case 0x43e7bc:c.instructions+=2;goto B43e7bc;
case 0x43e7bd:c.instructions+=1;goto B43e7bd;
case 0x43e7c2:goto L43e7c2;
case 0x43e7c7:c.instructions+=3;goto B43e7c7;
case 0x43e7ca:c.instructions+=2;goto B43e7ca;
case 0x43e7cc:c.instructions+=1;goto B43e7cc;
case 0x43e7d0:goto L43e7d0;
case 0x43e7d2:c.instructions+=1;goto B43e7d2;
case 0x43e7d4:goto L43e7d4;
case 0x43e7d9:c.instructions+=3;goto B43e7d9;
case 0x43e7da:c.instructions+=2;goto B43e7da;
case 0x43e7dd:c.instructions+=1;goto B43e7dd;
case 0x43e7de:goto L43e7de;
case 0x43e7e1:c.instructions+=1;goto B43e7e1;
case 0x43e7e3:goto L43e7e3;
case 0x43e7e7:c.instructions+=5;goto B43e7e7;
case 0x43e7ec:c.instructions+=4;goto B43e7ec;
case 0x43e7ee:c.instructions+=3;goto B43e7ee;
case 0x43e7ef:c.instructions+=2;goto B43e7ef;
case 0x43e7f2:c.instructions+=1;goto B43e7f2;
case 0x43e7f3:goto L43e7f3;
case 0x43e7f6:c.instructions+=1;goto B43e7f6;
case 0x43e7f8:goto L43e7f8;
case 0x43e7fc:c.instructions+=5;goto B43e7fc;
case 0x43e801:c.instructions+=4;goto B43e801;
case 0x43e803:c.instructions+=3;goto B43e803;
case 0x43e804:c.instructions+=2;goto B43e804;
case 0x43e807:c.instructions+=1;goto B43e807;
case 0x43e808:goto L43e808;
case 0x43e80c:c.instructions+=4;goto B43e80c;
case 0x43e811:c.instructions+=3;goto B43e811;
case 0x43e812:c.instructions+=2;goto B43e812;
case 0x43e815:c.instructions+=1;goto B43e815;
case 0x43e820:goto L43e820;
case 0x43e822:c.instructions+=3;goto B43e822;
case 0x43e828:c.instructions+=2;goto B43e828;
case 0x43e82f:c.instructions+=1;goto B43e82f;
case 0x43e830:goto L43e830;
case 0x43e831:c.instructions+=2;goto B43e831;
case 0x43e833:c.instructions+=1;goto B43e833;
case 0x43e838:goto L43e838;
case 0x43e83d:c.instructions+=1;goto B43e83d;
case 0x43e83f:goto L43e83f;
case 0x43e840:c.instructions+=1;goto B43e840;
case 0x43e845:goto L43e845;
case 0x43e848:goto L43e848;
case 0x43e84a:c.instructions+=2;goto B43e84a;
case 0x43e84b:c.instructions+=1;goto B43e84b;
case 0x43e850:goto L43e850;
case 0x43e853:c.instructions+=2;goto B43e853;
case 0x43e854:c.instructions+=1;goto B43e854;
case 0x43e859:goto L43e859;
case 0x43e85a:c.instructions+=1;goto B43e85a;
case 0x43e860:goto L43e860;
case 0x43e861:c.instructions+=6;goto B43e861;
case 0x43e862:c.instructions+=5;goto B43e862;
case 0x43e863:c.instructions+=4;goto B43e863;
case 0x43e865:c.instructions+=3;goto B43e865;
case 0x43e868:c.instructions+=2;goto B43e868;
case 0x43e86a:c.instructions+=1;goto B43e86a;
case 0x43e86f:goto L43e86f;
case 0x43e872:c.instructions+=4;goto B43e872;
case 0x43e875:c.instructions+=3;goto B43e875;
case 0x43e877:c.instructions+=2;goto B43e877;
case 0x43e879:c.instructions+=1;goto B43e879;
case 0x43e87b:goto L43e87b;
case 0x43e880:goto L43e880;
case 0x43e883:c.instructions+=4;goto B43e883;
case 0x43e885:c.instructions+=3;goto B43e885;
case 0x43e887:c.instructions+=2;goto B43e887;
case 0x43e889:c.instructions+=1;goto B43e889;
case 0x43e88b:goto L43e88b;
case 0x43e88d:c.instructions+=1;goto B43e88d;
case 0x43e892:goto L43e892;
case 0x43e893:c.instructions+=4;goto B43e893;
case 0x43e895:c.instructions+=3;goto B43e895;
case 0x43e896:c.instructions+=2;goto B43e896;
case 0x43e897:c.instructions+=1;goto B43e897;
case 0x43e8a0:goto L43e8a0;
case 0x43e8a1:c.instructions+=6;goto B43e8a1;
case 0x43e8a2:c.instructions+=5;goto B43e8a2;
case 0x43e8a3:c.instructions+=4;goto B43e8a3;
case 0x43e8a5:c.instructions+=3;goto B43e8a5;
case 0x43e8a8:c.instructions+=2;goto B43e8a8;
case 0x43e8aa:c.instructions+=1;goto B43e8aa;
case 0x43e8af:goto L43e8af;
case 0x43e8b2:c.instructions+=4;goto B43e8b2;
case 0x43e8b5:c.instructions+=3;goto B43e8b5;
case 0x43e8b7:c.instructions+=2;goto B43e8b7;
case 0x43e8b9:c.instructions+=1;goto B43e8b9;
case 0x43e8bb:goto L43e8bb;
case 0x43e8c0:goto L43e8c0;
case 0x43e8c3:c.instructions+=2;goto B43e8c3;
case 0x43e8c5:c.instructions+=1;goto B43e8c5;
case 0x43e8c7:goto L43e8c7;
case 0x43e8c9:goto L43e8c9;
case 0x43e8cb:c.instructions+=2;goto B43e8cb;
case 0x43e8cd:c.instructions+=1;goto B43e8cd;
case 0x43e8cf:goto L43e8cf;
case 0x43e8d1:c.instructions+=1;goto B43e8d1;
case 0x43e8d6:goto L43e8d6;
case 0x43e8d7:c.instructions+=4;goto B43e8d7;
case 0x43e8d9:c.instructions+=3;goto B43e8d9;
case 0x43e8da:c.instructions+=2;goto B43e8da;
case 0x43e8db:c.instructions+=1;goto B43e8db;
case 0x43e8e0:goto L43e8e0;
case 0x43e8e4:c.instructions+=3;goto B43e8e4;
case 0x43e8eb:c.instructions+=2;goto B43e8eb;
case 0x43e8ed:c.instructions+=1;goto B43e8ed;
case 0x43e8ef:goto L43e8ef;
case 0x43e8f6:c.instructions+=2;goto B43e8f6;
case 0x43e8f8:c.instructions+=1;goto B43e8f8;
case 0x43e8fa:goto L43e8fa;
case 0x43e8fc:c.instructions+=2;goto B43e8fc;
case 0x43e900:c.instructions+=1;goto B43e900;
case 0x43e903:goto L43e903;
case 0x43e905:c.instructions+=1;goto B43e905;
case 0x43e906:goto L43e906;
case 0x43e910:goto L43e910;
case 0x43e914:c.instructions+=3;goto B43e914;
case 0x43e91b:c.instructions+=2;goto B43e91b;
case 0x43e91d:c.instructions+=1;goto B43e91d;
case 0x43e91f:goto L43e91f;
case 0x43e926:c.instructions+=2;goto B43e926;
case 0x43e928:c.instructions+=1;goto B43e928;
case 0x43e92a:goto L43e92a;
case 0x43e92c:c.instructions+=2;goto B43e92c;
case 0x43e930:c.instructions+=1;goto B43e930;
case 0x43e933:goto L43e933;
case 0x43e935:c.instructions+=1;goto B43e935;
case 0x43e937:goto L43e937;
case 0x43e93c:c.instructions+=1;goto B43e93c;
case 0x43e93d:goto L43e93d;
case 0x43e942:goto L43e942;
case 0x43e947:c.instructions+=1;goto B43e947;
case 0x43e949:goto L43e949;
case 0x43e94b:goto L43e94b;
case 0x43e950:goto L43e950;
case 0x43e956:c.instructions+=18;goto B43e956;
case 0x43e957:c.instructions+=17;goto B43e957;
case 0x43e958:c.instructions+=16;goto B43e958;
case 0x43e95f:c.instructions+=15;goto B43e95f;
case 0x43e962:c.instructions+=14;goto B43e962;
case 0x43e964:c.instructions+=13;goto B43e964;
case 0x43e966:c.instructions+=12;goto B43e966;
case 0x43e967:c.instructions+=11;goto B43e967;
case 0x43e969:c.instructions+=10;goto B43e969;
case 0x43e96b:c.instructions+=9;goto B43e96b;
case 0x43e96d:c.instructions+=8;goto B43e96d;
case 0x43e971:c.instructions+=7;goto B43e971;
case 0x43e975:c.instructions+=6;goto B43e975;
case 0x43e979:c.instructions+=5;goto B43e979;
case 0x43e97d:c.instructions+=4;goto B43e97d;
case 0x43e981:c.instructions+=3;goto B43e981;
case 0x43e985:c.instructions+=2;goto B43e985;
case 0x43e989:c.instructions+=1;goto B43e989;
case 0x43e98b:goto L43e98b;
case 0x43e98e:c.instructions+=1;goto B43e98e;
case 0x43e993:goto L43e993;
case 0x43e99a:c.instructions+=3;goto B43e99a;
case 0x43e99c:c.instructions+=2;goto B43e99c;
case 0x43e99e:c.instructions+=1;goto B43e99e;
case 0x43e9a4:goto L43e9a4;
case 0x43e9a5:c.instructions+=1;goto B43e9a5;
case 0x43e9a7:goto L43e9a7;
case 0x43e9ab:c.instructions+=1;goto B43e9ab;
case 0x43e9b0:goto L43e9b0;
case 0x43e9b7:c.instructions+=4;goto B43e9b7;
case 0x43e9b8:c.instructions+=3;goto B43e9b8;
case 0x43e9ba:c.instructions+=2;goto B43e9ba;
case 0x43e9c1:c.instructions+=1;goto B43e9c1;
case 0x43e9c7:goto L43e9c7;
case 0x43e9c9:c.instructions+=1;goto B43e9c9;
case 0x43e9cb:goto L43e9cb;
case 0x43e9cd:c.instructions+=1;goto B43e9cd;
case 0x43e9cf:goto L43e9cf;
case 0x43e9d2:c.instructions+=3;goto B43e9d2;
case 0x43e9d9:c.instructions+=2;goto B43e9d9;
case 0x43e9dc:c.instructions+=1;goto B43e9dc;
case 0x43e9de:goto L43e9de;
case 0x43e9e0:goto L43e9e0;
case 0x43e9e8:c.instructions+=4;goto B43e9e8;
case 0x43e9eb:c.instructions+=3;goto B43e9eb;
case 0x43e9ee:c.instructions+=2;goto B43e9ee;
case 0x43e9f2:c.instructions+=1;goto B43e9f2;
case 0x43e9f8:goto L43e9f8;
case 0x43e9ff:goto L43e9ff;
case 0x43ea06:c.instructions+=3;goto B43ea06;
case 0x43ea09:c.instructions+=2;goto B43ea09;
case 0x43ea0b:c.instructions+=1;goto B43ea0b;
case 0x43ea0d:goto L43ea0d;
case 0x43ea13:c.instructions+=8;goto B43ea13;
case 0x43ea19:c.instructions+=7;goto B43ea19;
case 0x43ea1d:c.instructions+=6;goto B43ea1d;
case 0x43ea1e:c.instructions+=5;goto B43ea1e;
case 0x43ea21:c.instructions+=4;goto B43ea21;
case 0x43ea22:c.instructions+=3;goto B43ea22;
case 0x43ea28:c.instructions+=2;goto B43ea28;
case 0x43ea2c:c.instructions+=1;goto B43ea2c;
case 0x43ea31:goto L43ea31;
case 0x43ea33:c.instructions+=2;goto B43ea33;
case 0x43ea35:c.instructions+=1;goto B43ea35;
case 0x43ea37:goto L43ea37;
case 0x43ea39:c.instructions+=1;goto B43ea39;
case 0x43ea3b:goto L43ea3b;
case 0x43ea3f:c.instructions+=1;goto B43ea3f;
case 0x43ea44:goto L43ea44;
case 0x43ea46:c.instructions+=8;goto B43ea46;
case 0x43ea4a:c.instructions+=7;goto B43ea4a;
case 0x43ea4d:c.instructions+=6;goto B43ea4d;
case 0x43ea51:c.instructions+=5;goto B43ea51;
case 0x43ea55:c.instructions+=4;goto B43ea55;
case 0x43ea59:c.instructions+=3;goto B43ea59;
case 0x43ea5d:c.instructions+=2;goto B43ea5d;
case 0x43ea61:c.instructions+=1;goto B43ea61;
case 0x43ea66:goto L43ea66;
case 0x43ea69:c.instructions+=3;goto B43ea69;
case 0x43ea6c:c.instructions+=2;goto B43ea6c;
case 0x43ea6f:c.instructions+=1;goto B43ea6f;
case 0x43ea75:goto L43ea75;
case 0x43ea7c:c.instructions+=1;goto B43ea7c;
case 0x43ea83:goto L43ea83;
case 0x43ea86:c.instructions+=2;goto B43ea86;
case 0x43ea8a:c.instructions+=1;goto B43ea8a;
case 0x43ea8f:goto L43ea8f;
case 0x43ea92:c.instructions+=2;goto B43ea92;
case 0x43ea96:c.instructions+=1;goto B43ea96;
case 0x43ea9b:goto L43ea9b;
case 0x43ea9e:c.instructions+=2;goto B43ea9e;
case 0x43eaa2:c.instructions+=1;goto B43eaa2;
case 0x43eaa7:goto L43eaa7;
case 0x43eaad:c.instructions+=2;goto B43eaad;
case 0x43eab1:c.instructions+=1;goto B43eab1;
case 0x43eab6:goto L43eab6;
case 0x43eab9:c.instructions+=2;goto B43eab9;
case 0x43eabd:c.instructions+=1;goto B43eabd;
case 0x43eac2:goto L43eac2;
case 0x43eac8:c.instructions+=2;goto B43eac8;
case 0x43eacc:c.instructions+=1;goto B43eacc;
case 0x43ead1:goto L43ead1;
case 0x43ead3:c.instructions+=1;goto B43ead3;
case 0x43ead5:goto L43ead5;
case 0x43eadc:c.instructions+=6;goto B43eadc;
case 0x43eadf:c.instructions+=5;goto B43eadf;
case 0x43eae6:c.instructions+=4;goto B43eae6;
case 0x43eae9:c.instructions+=3;goto B43eae9;
case 0x43eaeb:c.instructions+=2;goto B43eaeb;
case 0x43eaef:c.instructions+=1;goto B43eaef;
case 0x43eaf5:goto L43eaf5;
case 0x43eaf8:c.instructions+=5;goto B43eaf8;
case 0x43eafa:c.instructions+=4;goto B43eafa;
case 0x43eafc:c.instructions+=3;goto B43eafc;
case 0x43eb00:c.instructions+=2;goto B43eb00;
case 0x43eb04:c.instructions+=1;goto B43eb04;
case 0x43eb09:goto L43eb09;
case 0x43eb0d:c.instructions+=5;goto B43eb0d;
case 0x43eb10:c.instructions+=4;goto B43eb10;
case 0x43eb13:c.instructions+=3;goto B43eb13;
case 0x43eb17:c.instructions+=2;goto B43eb17;
case 0x43eb1b:c.instructions+=1;goto B43eb1b;
case 0x43eb20:goto L43eb20;
case 0x43eb22:c.instructions+=2;goto B43eb22;
case 0x43eb26:c.instructions+=1;goto B43eb26;
case 0x43eb2b:goto L43eb2b;
case 0x43eb2d:c.instructions+=1;goto B43eb2d;
case 0x43eb2f:goto L43eb2f;
case 0x43eb36:c.instructions+=6;goto B43eb36;
case 0x43eb38:c.instructions+=5;goto B43eb38;
case 0x43eb3b:c.instructions+=4;goto B43eb3b;
case 0x43eb3d:c.instructions+=3;goto B43eb3d;
case 0x43eb44:c.instructions+=2;goto B43eb44;
case 0x43eb48:c.instructions+=1;goto B43eb48;
case 0x43eb4e:goto L43eb4e;
case 0x43eb51:c.instructions+=2;goto B43eb51;
case 0x43eb55:c.instructions+=1;goto B43eb55;
case 0x43eb5a:goto L43eb5a;
case 0x43eb5d:c.instructions+=4;goto B43eb5d;
case 0x43eb60:c.instructions+=3;goto B43eb60;
case 0x43eb64:c.instructions+=2;goto B43eb64;
case 0x43eb68:c.instructions+=1;goto B43eb68;
case 0x43eb6d:goto L43eb6d;
case 0x43eb6f:c.instructions+=1;goto B43eb6f;
case 0x43eb71:goto L43eb71;
case 0x43eb73:c.instructions+=1;goto B43eb73;
case 0x43eb79:goto L43eb79;
case 0x43eb7c:c.instructions+=2;goto B43eb7c;
case 0x43eb80:c.instructions+=1;goto B43eb80;
case 0x43eb85:goto L43eb85;
case 0x43eb88:c.instructions+=2;goto B43eb88;
case 0x43eb8c:c.instructions+=1;goto B43eb8c;
case 0x43eb91:goto L43eb91;
case 0x43eb94:c.instructions+=5;goto B43eb94;
case 0x43eb96:c.instructions+=4;goto B43eb96;
case 0x43eb99:c.instructions+=3;goto B43eb99;
case 0x43eb9c:c.instructions+=2;goto B43eb9c;
case 0x43eba0:c.instructions+=1;goto B43eba0;
case 0x43eba6:goto L43eba6;
case 0x43ebad:c.instructions+=1;goto B43ebad;
case 0x43ebb4:goto L43ebb4;
case 0x43ebbb:c.instructions+=6;goto B43ebbb;
case 0x43ebbe:c.instructions+=5;goto B43ebbe;
case 0x43ebc5:c.instructions+=4;goto B43ebc5;
case 0x43ebc8:c.instructions+=3;goto B43ebc8;
case 0x43ebcc:c.instructions+=2;goto B43ebcc;
case 0x43ebd4:c.instructions+=1;goto B43ebd4;
case 0x43ebd9:goto L43ebd9;
case 0x43ebde:c.instructions+=1;goto B43ebde;
case 0x43ebe0:goto L43ebe0;
case 0x43ebe5:c.instructions+=1;goto B43ebe5;
case 0x43ebea:goto L43ebea;
case 0x43ebec:c.instructions+=2;goto B43ebec;
case 0x43ebf0:c.instructions+=1;goto B43ebf0;
case 0x43ebf2:goto L43ebf2;
case 0x43ebf4:c.instructions+=3;goto B43ebf4;
case 0x43ebf9:c.instructions+=2;goto B43ebf9;
case 0x43ebfd:c.instructions+=1;goto B43ebfd;
case 0x43ec05:goto L43ec05;
case 0x43ec0a:c.instructions+=1;goto B43ec0a;
case 0x43ec0c:goto L43ec0c;
case 0x43ec11:c.instructions+=1;goto B43ec11;
case 0x43ec13:goto L43ec13;
case 0x43ec15:c.instructions+=2;goto B43ec15;
case 0x43ec1a:c.instructions+=1;goto B43ec1a;
case 0x43ec1c:goto L43ec1c;
case 0x43ec22:c.instructions+=1;goto B43ec22;
case 0x43ec24:goto L43ec24;
case 0x43ec29:c.instructions+=1;goto B43ec29;
case 0x43ec2b:goto L43ec2b;
case 0x43ec31:c.instructions+=1;goto B43ec31;
case 0x43ec36:goto L43ec36;
case 0x43ec3a:goto L43ec3a;
case 0x43ec41:c.instructions+=6;goto B43ec41;
case 0x43ec44:c.instructions+=5;goto B43ec44;
case 0x43ec47:c.instructions+=4;goto B43ec47;
case 0x43ec4e:c.instructions+=3;goto B43ec4e;
case 0x43ec50:c.instructions+=2;goto B43ec50;
case 0x43ec57:c.instructions+=1;goto B43ec57;
case 0x43ec59:goto L43ec59;
case 0x43ec5f:c.instructions+=1;goto B43ec5f;
case 0x43ec61:goto L43ec61;
case 0x43ec65:c.instructions+=1;goto B43ec65;
case 0x43ec67:goto L43ec67;
case 0x43ec6b:c.instructions+=1;goto B43ec6b;
case 0x43ec6d:goto L43ec6d;
case 0x43ec70:c.instructions+=1;goto B43ec70;
case 0x43ec76:goto L43ec76;
case 0x43ec78:c.instructions+=1;goto B43ec78;
case 0x43ec7a:goto L43ec7a;
case 0x43ec7c:c.instructions+=1;goto B43ec7c;
case 0x43ec7e:goto L43ec7e;
case 0x43ec80:c.instructions+=2;goto B43ec80;
case 0x43ec86:c.instructions+=1;goto B43ec86;
case 0x43ec8a:goto L43ec8a;
case 0x43ec8c:c.instructions+=1;goto B43ec8c;
case 0x43ec8e:goto L43ec8e;
case 0x43ec93:c.instructions+=1;goto B43ec93;
case 0x43ec95:goto L43ec95;
case 0x43ec98:c.instructions+=1;goto B43ec98;
case 0x43ec9c:goto L43ec9c;
case 0x43ec9e:c.instructions+=1;goto B43ec9e;
case 0x43eca0:goto L43eca0;
case 0x43eca4:goto L43eca4;
case 0x43eca6:c.instructions+=2;goto B43eca6;
case 0x43eca9:c.instructions+=1;goto B43eca9;
case 0x43ecab:goto L43ecab;
case 0x43ecb1:c.instructions+=2;goto B43ecb1;
case 0x43ecb3:c.instructions+=1;goto B43ecb3;
case 0x43ecb5:goto L43ecb5;
case 0x43ecb7:c.instructions+=1;goto B43ecb7;
case 0x43ecb9:goto L43ecb9;
case 0x43ecbb:c.instructions+=1;goto B43ecbb;
case 0x43ecc0:goto L43ecc0;
case 0x43ecc2:c.instructions+=4;goto B43ecc2;
case 0x43ecc3:c.instructions+=3;goto B43ecc3;
case 0x43ecc5:c.instructions+=2;goto B43ecc5;
case 0x43ecc9:c.instructions+=1;goto B43ecc9;
case 0x43eccb:goto L43eccb;
case 0x43eccd:c.instructions+=1;goto B43eccd;
case 0x43eccf:goto L43eccf;
case 0x43ecd1:c.instructions+=1;goto B43ecd1;
case 0x43ecd3:goto L43ecd3;
case 0x43ecda:c.instructions+=5;goto B43ecda;
case 0x43ecdd:c.instructions+=4;goto B43ecdd;
case 0x43ecde:c.instructions+=3;goto B43ecde;
case 0x43ece0:c.instructions+=2;goto B43ece0;
case 0x43ece4:c.instructions+=1;goto B43ece4;
case 0x43ece6:goto L43ece6;
case 0x43ece8:c.instructions+=2;goto B43ece8;
case 0x43ece9:c.instructions+=1;goto B43ece9;
case 0x43ecee:goto L43ecee;
case 0x43ecf0:c.instructions+=4;goto B43ecf0;
case 0x43ecf2:c.instructions+=3;goto B43ecf2;
case 0x43ecf5:c.instructions+=2;goto B43ecf5;
case 0x43ecf8:c.instructions+=1;goto B43ecf8;
case 0x43ecfa:goto L43ecfa;
case 0x43ecfe:c.instructions+=1;goto B43ecfe;
case 0x43ed02:goto L43ed02;
case 0x43ed04:c.instructions+=2;goto B43ed04;
case 0x43ed05:c.instructions+=1;goto B43ed05;
case 0x43ed07:goto L43ed07;
case 0x43ed0b:c.instructions+=5;goto B43ed0b;
case 0x43ed12:c.instructions+=4;goto B43ed12;
case 0x43ed14:c.instructions+=3;goto B43ed14;
case 0x43ed17:c.instructions+=2;goto B43ed17;
case 0x43ed1b:c.instructions+=1;goto B43ed1b;
case 0x43ed1d:goto L43ed1d;
case 0x43ed1f:c.instructions+=1;goto B43ed1f;
case 0x43ed21:goto L43ed21;
case 0x43ed25:c.instructions+=1;goto B43ed25;
case 0x43ed27:goto L43ed27;
case 0x43ed2a:c.instructions+=3;goto B43ed2a;
case 0x43ed2b:c.instructions+=2;goto B43ed2b;
case 0x43ed2c:c.instructions+=1;goto B43ed2c;
case 0x43ed30:goto L43ed30;
case 0x43ed31:c.instructions+=2;goto B43ed31;
case 0x43ed35:c.instructions+=1;goto B43ed35;
case 0x43ed3a:goto L43ed3a;
case 0x43ed3f:c.instructions+=1;goto B43ed3f;
case 0x43ed41:goto L43ed41;
case 0x43ed46:goto L43ed46;
case 0x43ed4c:c.instructions+=12;goto B43ed4c;
case 0x43ed53:c.instructions+=11;goto B43ed53;
case 0x43ed55:c.instructions+=10;goto B43ed55;
case 0x43ed58:c.instructions+=9;goto B43ed58;
case 0x43ed5c:c.instructions+=8;goto B43ed5c;
case 0x43ed63:c.instructions+=7;goto B43ed63;
case 0x43ed67:c.instructions+=6;goto B43ed67;
case 0x43ed69:c.instructions+=5;goto B43ed69;
case 0x43ed6f:c.instructions+=4;goto B43ed6f;
case 0x43ed75:c.instructions+=3;goto B43ed75;
case 0x43ed7b:c.instructions+=2;goto B43ed7b;
case 0x43ed7f:c.instructions+=1;goto B43ed7f;
case 0x43ed81:goto L43ed81;
case 0x43ed86:c.instructions+=1;goto B43ed86;
case 0x43ed88:goto L43ed88;
case 0x43ed8d:c.instructions+=1;goto B43ed8d;
case 0x43ed8f:goto L43ed8f;
case 0x43ed94:c.instructions+=1;goto B43ed94;
case 0x43ed96:goto L43ed96;
case 0x43ed9c:c.instructions+=2;goto B43ed9c;
case 0x43eda0:c.instructions+=1;goto B43eda0;
case 0x43eda2:goto L43eda2;
case 0x43eda7:goto L43eda7;
case 0x43edab:goto L43edab;
case 0x43edaf:c.instructions+=2;goto B43edaf;
case 0x43edb7:c.instructions+=1;goto B43edb7;
case 0x43edbd:goto L43edbd;
case 0x43edc0:c.instructions+=6;goto B43edc0;
case 0x43edc6:c.instructions+=5;goto B43edc6;
case 0x43edca:c.instructions+=4;goto B43edca;
case 0x43edcf:c.instructions+=3;goto B43edcf;
case 0x43edd3:c.instructions+=2;goto B43edd3;
case 0x43edd7:c.instructions+=1;goto B43edd7;
case 0x43edd9:goto L43edd9;
case 0x43eddb:c.instructions+=4;goto B43eddb;
case 0x43ede1:c.instructions+=3;goto B43ede1;
case 0x43ede3:c.instructions+=2;goto B43ede3;
case 0x43ede6:c.instructions+=1;goto B43ede6;
case 0x43ede8:goto L43ede8;
case 0x43edea:c.instructions+=4;goto B43edea;
case 0x43edf0:c.instructions+=3;goto B43edf0;
case 0x43edf2:c.instructions+=2;goto B43edf2;
case 0x43edf6:c.instructions+=1;goto B43edf6;
case 0x43edf8:goto L43edf8;
case 0x43edfb:c.instructions+=1;goto B43edfb;
case 0x43edfd:goto L43edfd;
case 0x43ee05:goto L43ee05;
case 0x43ee07:c.instructions+=4;goto B43ee07;
case 0x43ee09:c.instructions+=3;goto B43ee09;
case 0x43ee0e:c.instructions+=2;goto B43ee0e;
case 0x43ee12:c.instructions+=1;goto B43ee12;
case 0x43ee14:goto L43ee14;
case 0x43ee16:c.instructions+=4;goto B43ee16;
case 0x43ee1c:c.instructions+=3;goto B43ee1c;
case 0x43ee1e:c.instructions+=2;goto B43ee1e;
case 0x43ee21:c.instructions+=1;goto B43ee21;
case 0x43ee23:goto L43ee23;
case 0x43ee25:c.instructions+=4;goto B43ee25;
case 0x43ee2b:c.instructions+=3;goto B43ee2b;
case 0x43ee2d:c.instructions+=2;goto B43ee2d;
case 0x43ee30:c.instructions+=1;goto B43ee30;
case 0x43ee32:goto L43ee32;
case 0x43ee34:c.instructions+=8;goto B43ee34;
case 0x43ee35:c.instructions+=7;goto B43ee35;
case 0x43ee3b:c.instructions+=6;goto B43ee3b;
case 0x43ee3d:c.instructions+=5;goto B43ee3d;
case 0x43ee3f:c.instructions+=4;goto B43ee3f;
case 0x43ee45:c.instructions+=3;goto B43ee45;
case 0x43ee47:c.instructions+=2;goto B43ee47;
case 0x43ee4a:c.instructions+=1;goto B43ee4a;
case 0x43ee4c:goto L43ee4c;
case 0x43ee50:goto L43ee50;
case 0x43ee52:c.instructions+=8;goto B43ee52;
case 0x43ee53:c.instructions+=7;goto B43ee53;
case 0x43ee59:c.instructions+=6;goto B43ee59;
case 0x43ee5b:c.instructions+=5;goto B43ee5b;
case 0x43ee5d:c.instructions+=4;goto B43ee5d;
case 0x43ee63:c.instructions+=3;goto B43ee63;
case 0x43ee65:c.instructions+=2;goto B43ee65;
case 0x43ee68:c.instructions+=1;goto B43ee68;
case 0x43ee6a:goto L43ee6a;
case 0x43ee6c:goto L43ee6c;
case 0x43ee72:c.instructions+=4;goto B43ee72;
case 0x43ee74:c.instructions+=3;goto B43ee74;
case 0x43ee76:c.instructions+=2;goto B43ee76;
case 0x43ee79:c.instructions+=1;goto B43ee79;
case 0x43ee7b:goto L43ee7b;
case 0x43ee80:goto L43ee80;
case 0x43ee86:c.instructions+=5;goto B43ee86;
case 0x43ee87:c.instructions+=4;goto B43ee87;
case 0x43ee89:c.instructions+=3;goto B43ee89;
case 0x43ee8b:c.instructions+=2;goto B43ee8b;
case 0x43ee8e:c.instructions+=1;goto B43ee8e;
case 0x43ee90:goto L43ee90;
case 0x43ee92:c.instructions+=3;goto B43ee92;
case 0x43ee94:c.instructions+=2;goto B43ee94;
case 0x43ee97:c.instructions+=1;goto B43ee97;
case 0x43ee99:goto L43ee99;
case 0x43ee9f:c.instructions+=1;goto B43ee9f;
case 0x43eea0:goto L43eea0;
case 0x43eea4:c.instructions+=4;goto B43eea4;
case 0x43eea9:c.instructions+=3;goto B43eea9;
case 0x43eeac:c.instructions+=2;goto B43eeac;
case 0x43eeae:c.instructions+=1;goto B43eeae;
case 0x43eeb0:goto L43eeb0;
case 0x43eeb6:c.instructions+=3;goto B43eeb6;
case 0x43eeb8:c.instructions+=2;goto B43eeb8;
case 0x43eebd:c.instructions+=1;goto B43eebd;
case 0x43eebf:goto L43eebf;
case 0x43eec4:goto L43eec4;
case 0x43eec6:c.instructions+=1;goto B43eec6;
case 0x43eec8:goto L43eec8;
case 0x43eece:c.instructions+=2;goto B43eece;
case 0x43eed2:c.instructions+=1;goto B43eed2;
case 0x43eed4:goto L43eed4;
case 0x43eed9:goto L43eed9;
case 0x43eedf:c.instructions+=3;goto B43eedf;
case 0x43eee1:c.instructions+=2;goto B43eee1;
case 0x43eee4:c.instructions+=1;goto B43eee4;
case 0x43eee6:goto L43eee6;
case 0x43eeea:c.instructions+=2;goto B43eeea;
case 0x43eeec:c.instructions+=1;goto B43eeec;
case 0x43eeee:goto L43eeee;
case 0x43eef5:c.instructions+=5;goto B43eef5;
case 0x43eef7:c.instructions+=4;goto B43eef7;
case 0x43eef8:c.instructions+=3;goto B43eef8;
case 0x43eefa:c.instructions+=2;goto B43eefa;
case 0x43eefc:c.instructions+=1;goto B43eefc;
case 0x43eefe:goto L43eefe;
case 0x43ef00:c.instructions+=1;goto B43ef00;
case 0x43ef02:goto L43ef02;
case 0x43ef08:c.instructions+=2;goto B43ef08;
case 0x43ef0a:c.instructions+=1;goto B43ef0a;
case 0x43ef0b:goto L43ef0b;
case 0x43ef0c:goto L43ef0c;
case 0x43ef0e:c.instructions+=2;goto B43ef0e;
case 0x43ef10:c.instructions+=1;goto B43ef10;
case 0x43ef15:goto L43ef15;
case 0x43ef18:c.instructions+=12;goto B43ef18;
case 0x43ef1c:c.instructions+=11;goto B43ef1c;
case 0x43ef1e:c.instructions+=10;goto B43ef1e;
case 0x43ef22:c.instructions+=9;goto B43ef22;
case 0x43ef24:c.instructions+=8;goto B43ef24;
case 0x43ef25:c.instructions+=7;goto B43ef25;
case 0x43ef27:c.instructions+=6;goto B43ef27;
case 0x43ef29:c.instructions+=5;goto B43ef29;
case 0x43ef2f:c.instructions+=4;goto B43ef2f;
case 0x43ef35:c.instructions+=3;goto B43ef35;
case 0x43ef37:c.instructions+=2;goto B43ef37;
case 0x43ef3a:c.instructions+=1;goto B43ef3a;
case 0x43ef3c:goto L43ef3c;
case 0x43ef40:c.instructions+=3;goto B43ef40;
case 0x43ef42:c.instructions+=2;goto B43ef42;
case 0x43ef44:c.instructions+=1;goto B43ef44;
case 0x43ef46:goto L43ef46;
case 0x43ef48:goto L43ef48;
case 0x43ef4a:goto L43ef4a;
case 0x43ef4d:c.instructions+=1;goto B43ef4d;
case 0x43ef4e:goto L43ef4e;
case 0x43ef52:c.instructions+=2;goto B43ef52;
case 0x43ef54:c.instructions+=1;goto B43ef54;
case 0x43ef56:goto L43ef56;
case 0x43ef5a:c.instructions+=2;goto B43ef5a;
case 0x43ef5c:c.instructions+=1;goto B43ef5c;
case 0x43ef5e:goto L43ef5e;
case 0x43ef62:c.instructions+=4;goto B43ef62;
case 0x43ef64:c.instructions+=3;goto B43ef64;
case 0x43ef65:c.instructions+=2;goto B43ef65;
case 0x43ef67:c.instructions+=1;goto B43ef67;
case 0x43ef69:goto L43ef69;
case 0x43ef6b:c.instructions+=2;goto B43ef6b;
case 0x43ef6d:c.instructions+=1;goto B43ef6d;
case 0x43ef70:goto L43ef70;
case 0x43ef76:c.instructions+=2;goto B43ef76;
case 0x43ef78:c.instructions+=1;goto B43ef78;
case 0x43ef7d:goto L43ef7d;
case 0x43ef80:c.instructions+=8;goto B43ef80;
case 0x43ef82:c.instructions+=7;goto B43ef82;
case 0x43ef86:c.instructions+=6;goto B43ef86;
case 0x43ef88:c.instructions+=5;goto B43ef88;
case 0x43ef8c:c.instructions+=4;goto B43ef8c;
case 0x43ef8d:c.instructions+=3;goto B43ef8d;
case 0x43ef8e:c.instructions+=2;goto B43ef8e;
case 0x43ef90:c.instructions+=1;goto B43ef90;
case 0x43ef92:goto L43ef92;
case 0x43ef98:c.instructions+=8;goto B43ef98;
case 0x43ef99:c.instructions+=7;goto B43ef99;
case 0x43ef9b:c.instructions+=6;goto B43ef9b;
case 0x43ef9f:c.instructions+=5;goto B43ef9f;
case 0x43efa5:c.instructions+=4;goto B43efa5;
case 0x43efa7:c.instructions+=3;goto B43efa7;
case 0x43efa9:c.instructions+=2;goto B43efa9;
case 0x43efac:c.instructions+=1;goto B43efac;
case 0x43efae:goto L43efae;
case 0x43efb4:c.instructions+=1;goto B43efb4;
case 0x43efb7:goto L43efb7;
case 0x43efb9:c.instructions+=2;goto B43efb9;
case 0x43efbb:c.instructions+=1;goto B43efbb;
case 0x43efbd:goto L43efbd;
case 0x43efc0:c.instructions+=2;goto B43efc0;
case 0x43efc1:c.instructions+=1;goto B43efc1;
case 0x43efc3:goto L43efc3;
case 0x43efc7:c.instructions+=1;goto B43efc7;
case 0x43efc9:goto L43efc9;
case 0x43efcd:c.instructions+=2;goto B43efcd;
case 0x43efcf:c.instructions+=1;goto B43efcf;
case 0x43efd1:goto L43efd1;
case 0x43efd3:c.instructions+=1;goto B43efd3;
case 0x43efd5:goto L43efd5;
case 0x43efd6:c.instructions+=1;goto B43efd6;
case 0x43efd8:goto L43efd8;
case 0x43efda:c.instructions+=3;goto B43efda;
case 0x43efde:c.instructions+=2;goto B43efde;
case 0x43efe0:c.instructions+=1;goto B43efe0;
case 0x43efe2:goto L43efe2;
case 0x43efe6:c.instructions+=1;goto B43efe6;
case 0x43efea:goto L43efea;
case 0x43efee:c.instructions+=2;goto B43efee;
case 0x43eff0:c.instructions+=1;goto B43eff0;
case 0x43eff2:goto L43eff2;
case 0x43eff6:c.instructions+=4;goto B43eff6;
case 0x43eff8:c.instructions+=3;goto B43eff8;
case 0x43eff9:c.instructions+=2;goto B43eff9;
case 0x43effb:c.instructions+=1;goto B43effb;
case 0x43effd:goto L43effd;
case 0x43efff:c.instructions+=1;goto B43efff;
default:missing_instruction(c.pc);}
B43e000:L43e000:{c.instructions+=6;NFSU2_TR(0x43e000);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43e004:{NFSU2_TR(0x43e004);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w2(R+4,u16(s16(s8(r1(U+0)))));
}
B43e008:{NFSU2_TR(0x43e008);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B43e00b:{NFSU2_TR(0x43e00b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e00f:{NFSU2_TR(0x43e00f);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B43e012:{NFSU2_TR(0x43e012);
if(r1(R+518)){{goto L43e029;}}
}
B43e014:L43e014:{c.instructions+=2;NFSU2_TR(0x43e014);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e015:{NFSU2_TR(0x43e015);
__builtin_memmove((R+24),(R+0),4);
}
B43e017:L43e017:{c.instructions+=6;NFSU2_TR(0x43e017);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(s16(s8(r1(U+4)))));
}
B43e01c:{NFSU2_TR(0x43e01c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43e01d:{NFSU2_TR(0x43e01d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B43e020:{NFSU2_TR(0x43e020);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B43e023:{NFSU2_TR(0x43e023);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+24)),r2(U+0));
}
B43e026:{NFSU2_TR(0x43e026);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e017u);}goto L43e017;}}
}
B43e028:L43e028:{c.instructions+=1;NFSU2_TR(0x43e028);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e029:L43e029:{c.instructions+=1;NFSU2_TR(0x43e029);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e030:L43e030:{c.instructions+=5;NFSU2_TR(0x43e030);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e034:{NFSU2_TR(0x43e034);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e035:{NFSU2_TR(0x43e035);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e039:{NFSU2_TR(0x43e039);
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
B43e03b:{NFSU2_TR(0x43e03b);
if(r1(R+518)){{goto L43e05a;}}
}
B43e03d:L43e03d:{c.instructions+=3;NFSU2_TR(0x43e03d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43e041:{NFSU2_TR(0x43e041);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e042:{NFSU2_TR(0x43e042);
__builtin_memmove((R+24),(R+0),4);
}
B43e044:L43e044:{c.instructions+=5;NFSU2_TR(0x43e044);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w2(R+4,u16(s16(s8(r1(U+0)))));
}
B43e048:{NFSU2_TR(0x43e048);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B43e049:{NFSU2_TR(0x43e049);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B43e04c:{NFSU2_TR(0x43e04c);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+24)),r2(U+0));
}
B43e04f:{NFSU2_TR(0x43e04f);
if(r1(R+518)){{goto L43e059;}}
}
B43e051:L43e051:{c.instructions+=4;NFSU2_TR(0x43e051);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43e052:{NFSU2_TR(0x43e052);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B43e055:{NFSU2_TR(0x43e055);
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
B43e057:{NFSU2_TR(0x43e057);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e044u);}goto L43e044;}}
}
B43e059:L43e059:{c.instructions+=1;NFSU2_TR(0x43e059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e05a:L43e05a:{c.instructions+=2;NFSU2_TR(0x43e05a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e05b:{NFSU2_TR(0x43e05b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e060:L43e060:{c.instructions+=7;NFSU2_TR(0x43e060);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e061:{NFSU2_TR(0x43e061);
__builtin_memmove((R+24),(R+4),4);
}
B43e063:{NFSU2_TR(0x43e063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43e065:{NFSU2_TR(0x43e065);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e066:{NFSU2_TR(0x43e066);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43e068:{NFSU2_TR(0x43e068);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43e06a:{NFSU2_TR(0x43e06a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43e086;}}
}
B43e06c:L43e06c:{c.instructions+=2;NFSU2_TR(0x43e06c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e06d:{NFSU2_TR(0x43e06d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e070:L43e070:{c.instructions+=3;NFSU2_TR(0x43e070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43e072:{NFSU2_TR(0x43e072);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e073:{NFSU2_TR(0x43e073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e078ull));
TAIL_STATIC(0x575630u,575);
}
B43e078:L43e078:{c.instructions+=6;NFSU2_TR(0x43e078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43e07a:{NFSU2_TR(0x43e07a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43e07d:{NFSU2_TR(0x43e07d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B43e07e:{NFSU2_TR(0x43e07e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x54ull))));
}
B43e081:{NFSU2_TR(0x43e081);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43e083:{NFSU2_TR(0x43e083);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e070u);}goto L43e070;}}
}
B43e085:L43e085:{c.instructions+=1;NFSU2_TR(0x43e085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e086:L43e086:{c.instructions+=3;NFSU2_TR(0x43e086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43e08c:{NFSU2_TR(0x43e08c);
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
B43e08e:{NFSU2_TR(0x43e08e);
if(r1(R+518)){{goto L43e099;}}
}
B43e090:L43e090:{c.instructions+=2;NFSU2_TR(0x43e090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e091:{NFSU2_TR(0x43e091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e096ull));
TAIL_STATIC(0x575630u,575);
}
B43e096:L43e096:{c.instructions+=1;NFSU2_TR(0x43e096);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43e099:L43e099:{c.instructions+=3;NFSU2_TR(0x43e099);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e09a:{NFSU2_TR(0x43e09a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e09b:{NFSU2_TR(0x43e09b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e0a0:L43e0a0:{c.instructions+=10;NFSU2_TR(0x43e0a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e0a1:{NFSU2_TR(0x43e0a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e0a2:{NFSU2_TR(0x43e0a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e0a3:{NFSU2_TR(0x43e0a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e0a4:{NFSU2_TR(0x43e0a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e0a8:{NFSU2_TR(0x43e0a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43e0ab:{NFSU2_TR(0x43e0ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B43e0ae:{NFSU2_TR(0x43e0ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e0af:{NFSU2_TR(0x43e0af);
__builtin_memmove((R+12),(R+4),4);
}
B43e0b1:{NFSU2_TR(0x43e0b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e0b6ull));
TAIL_STATIC(0x575620u,575);
}
B43e0b6:L43e0b6:{c.instructions+=5;NFSU2_TR(0x43e0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43e0bc:{NFSU2_TR(0x43e0bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43e0bf:{NFSU2_TR(0x43e0bf);
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
B43e0c1:{NFSU2_TR(0x43e0c1);
__builtin_memmove((R+20),(R+0),4);
}
B43e0c3:{NFSU2_TR(0x43e0c3);
if(r1(R+518)){{goto L43e107;}}
}
B43e0c5:L43e0c5:{c.instructions+=6;NFSU2_TR(0x43e0c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e0cb:{NFSU2_TR(0x43e0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B43e0ce:{NFSU2_TR(0x43e0ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B43e0d1:{NFSU2_TR(0x43e0d1);
__builtin_memmove((R+8),(R+4),4);
}
B43e0d3:{NFSU2_TR(0x43e0d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B43e0d6:{NFSU2_TR(0x43e0d6);
__builtin_memmove((R+28),(R+20),4);
}
B43e0d8:L43e0d8:{c.instructions+=1;NFSU2_TR(0x43e0d8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L43e0da;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e0d8u);}goto L43e0d8;}
}
B43e0da:L43e0da:{c.instructions+=2;NFSU2_TR(0x43e0da);
__builtin_memmove((R+4),(R+8),4);
}
B43e0dc:{NFSU2_TR(0x43e0dc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B43e0df:L43e0df:{c.instructions+=1;NFSU2_TR(0x43e0df);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L43e0e1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e0dfu);}goto L43e0df;}
}
B43e0e1:L43e0e1:{c.instructions+=3;NFSU2_TR(0x43e0e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e0e7:{NFSU2_TR(0x43e0e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e0e8:{NFSU2_TR(0x43e0e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e0edull));
TAIL_STATIC(0x575630u,575);
}
B43e0ed:L43e0ed:{c.instructions+=9;NFSU2_TR(0x43e0ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43e0f1:{NFSU2_TR(0x43e0f1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43e0f4:{NFSU2_TR(0x43e0f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e0f5:{NFSU2_TR(0x43e0f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e0f6:{NFSU2_TR(0x43e0f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e0fc:{NFSU2_TR(0x43e0fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43e0fd:{NFSU2_TR(0x43e0fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e103:{NFSU2_TR(0x43e103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e104:{NFSU2_TR(0x43e104);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e107:L43e107:{c.instructions+=7;NFSU2_TR(0x43e107);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e10d:{NFSU2_TR(0x43e10d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e10e:{NFSU2_TR(0x43e10e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e10f:{NFSU2_TR(0x43e10f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e115:{NFSU2_TR(0x43e115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43e116:{NFSU2_TR(0x43e116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e117:{NFSU2_TR(0x43e117);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e120:L43e120:{c.instructions+=9;NFSU2_TR(0x43e120);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e121:{NFSU2_TR(0x43e121);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43e125:{NFSU2_TR(0x43e125);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43e127:{NFSU2_TR(0x43e127);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e128:{NFSU2_TR(0x43e128);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43e12c:{NFSU2_TR(0x43e12c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e12d:{NFSU2_TR(0x43e12d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43e131:{NFSU2_TR(0x43e131);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e132:{NFSU2_TR(0x43e132);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B43e134:L43e134:{c.instructions+=3;NFSU2_TR(0x43e134);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e138:{NFSU2_TR(0x43e138);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43e13a:{NFSU2_TR(0x43e13a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43e188;}}
}
B43e13c:L43e13c:{c.instructions+=3;NFSU2_TR(0x43e13c);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B43e13f:{NFSU2_TR(0x43e13f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e141:{NFSU2_TR(0x43e141);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e14b;}}
}
B43e143:L43e143:{c.instructions+=3;NFSU2_TR(0x43e143);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43e144:{NFSU2_TR(0x43e144);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43e146:{NFSU2_TR(0x43e146);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43e188;}}
}
B43e148:L43e148:{c.instructions+=1;NFSU2_TR(0x43e148);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B43e14b:L43e14b:{c.instructions+=2;NFSU2_TR(0x43e14b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e14d:{NFSU2_TR(0x43e14d);
if(r1(R+518)){{goto L43e188;}}
}
B43e14f:L43e14f:{c.instructions+=2;NFSU2_TR(0x43e14f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e151:{NFSU2_TR(0x43e151);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e15d;}}
}
B43e153:L43e153:{c.instructions+=6;NFSU2_TR(0x43e153);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43e155:{NFSU2_TR(0x43e155);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43e156:{NFSU2_TR(0x43e156);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B43e158:{NFSU2_TR(0x43e158);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B43e15a:{NFSU2_TR(0x43e15a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43e15b:{NFSU2_TR(0x43e15b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e134u);}goto L43e134;}
}
B43e15d:L43e15d:{c.instructions+=2;NFSU2_TR(0x43e15d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e15f:{NFSU2_TR(0x43e15f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e185;}}
}
B43e161:L43e161:{c.instructions+=2;NFSU2_TR(0x43e161);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e163:{NFSU2_TR(0x43e163);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e171;}}
}
B43e165:L43e165:{c.instructions+=2;NFSU2_TR(0x43e165);
u8 U[15];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B43e16a:{NFSU2_TR(0x43e16a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e193;}}
}
B43e16c:L43e16c:{c.instructions+=3;NFSU2_TR(0x43e16c);
w1(R+8,u8(0x1ull));
}
B43e16e:{NFSU2_TR(0x43e16e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43e16f:{NFSU2_TR(0x43e16f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e134u);}goto L43e134;}
}
B43e171:L43e171:{c.instructions+=2;NFSU2_TR(0x43e171);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e173:{NFSU2_TR(0x43e173);
if(r1(R+518)){{goto L43e185;}}
}
B43e175:L43e175:{c.instructions+=2;NFSU2_TR(0x43e175);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e177:{NFSU2_TR(0x43e177);
if(r1(R+518)){{goto L43e185;}}
}
B43e179:L43e179:{c.instructions+=2;NFSU2_TR(0x43e179);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e17b:{NFSU2_TR(0x43e17b);
if(r1(R+518)){{goto L43e185;}}
}
B43e17d:L43e17d:{c.instructions+=2;NFSU2_TR(0x43e17d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e17f:{NFSU2_TR(0x43e17f);
if(r1(R+518)){{goto L43e185;}}
}
B43e181:L43e181:{c.instructions+=2;NFSU2_TR(0x43e181);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e183:{NFSU2_TR(0x43e183);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e193;}}
}
B43e185:L43e185:{c.instructions+=2;NFSU2_TR(0x43e185);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43e186:{NFSU2_TR(0x43e186);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e134u);}goto L43e134;}
}
B43e188:L43e188:{c.instructions+=7;NFSU2_TR(0x43e188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e189:{NFSU2_TR(0x43e189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e18a:{NFSU2_TR(0x43e18a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43e18b:{NFSU2_TR(0x43e18b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B43e18d:{NFSU2_TR(0x43e18d);
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
B43e18f:{NFSU2_TR(0x43e18f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e190:{NFSU2_TR(0x43e190);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e193:L43e193:{c.instructions+=5;NFSU2_TR(0x43e193);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e197:{NFSU2_TR(0x43e197);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B43e199:{NFSU2_TR(0x43e199);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43e19b:{NFSU2_TR(0x43e19b);
w1(R+12,u8(0x22ull));
}
B43e19d:{NFSU2_TR(0x43e19d);
__builtin_memmove((R+4),(R+4),4);
}
B43e1a0:L43e1a0:{c.instructions+=3;NFSU2_TR(0x43e1a0);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B43e1a3:{NFSU2_TR(0x43e1a3);
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
B43e1a5:{NFSU2_TR(0x43e1a5);
if(r1(R+518)){{goto L43e1ec;}}
}
B43e1a7:L43e1a7:{c.instructions+=2;NFSU2_TR(0x43e1a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e1a9:{NFSU2_TR(0x43e1a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e1c3;}}
}
B43e1ab:L43e1ab:{c.instructions+=2;NFSU2_TR(0x43e1ab);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x20ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x20ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43e1ad:{NFSU2_TR(0x43e1ad);
if(r1(R+518)){{goto L43e1ec;}}
}
B43e1af:L43e1af:{c.instructions+=2;NFSU2_TR(0x43e1af);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0xaull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0xaull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0xaull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43e1b1:{NFSU2_TR(0x43e1b1);
if(r1(R+518)){{goto L43e1ec;}}
}
B43e1b3:L43e1b3:{c.instructions+=2;NFSU2_TR(0x43e1b3);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x9ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x9ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x9ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43e1b5:{NFSU2_TR(0x43e1b5);
if(r1(R+518)){{goto L43e1ec;}}
}
B43e1b7:L43e1b7:{c.instructions+=2;NFSU2_TR(0x43e1b7);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3dull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3dull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3dull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43e1b9:{NFSU2_TR(0x43e1b9);
if(r1(R+518)){{goto L43e1ec;}}
}
B43e1bb:L43e1bb:{c.instructions+=2;NFSU2_TR(0x43e1bb);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2cull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2cull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2cull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43e1bd:{NFSU2_TR(0x43e1bd);
if(r1(R+518)){{goto L43e1ec;}}
}
B43e1bf:L43e1bf:{c.instructions+=2;NFSU2_TR(0x43e1bf);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0xdull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0xdull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0xdull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43e1c1:{NFSU2_TR(0x43e1c1);
if(r1(R+518)){{goto L43e1ec;}}
}
B43e1c3:L43e1c3:{c.instructions+=2;NFSU2_TR(0x43e1c3);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43e1c5:{NFSU2_TR(0x43e1c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e1df;}}
}
B43e1c7:L43e1c7:{c.instructions+=2;NFSU2_TR(0x43e1c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e1c9:{NFSU2_TR(0x43e1c9);
if(r1(R+518)){{goto L43e1da;}}
}
B43e1cb:L43e1cb:{c.instructions+=2;NFSU2_TR(0x43e1cb);
u8 U[15];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(r1(R+12))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B43e1cf:{NFSU2_TR(0x43e1cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e1d8;}}
}
B43e1d1:L43e1d1:{c.instructions+=4;NFSU2_TR(0x43e1d1);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B43e1d4:{NFSU2_TR(0x43e1d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43e1d5:{NFSU2_TR(0x43e1d5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43e1d6:{NFSU2_TR(0x43e1d6);
{goto L43e1e3;}
}
B43e1d8:L43e1d8:{c.instructions+=1;NFSU2_TR(0x43e1d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e1da:L43e1da:{c.instructions+=2;NFSU2_TR(0x43e1da);
__builtin_memmove((R+8),(R+518),1);
}
B43e1dd:{NFSU2_TR(0x43e1dd);
{goto L43e1e3;}
}
B43e1df:L43e1df:{c.instructions+=2;NFSU2_TR(0x43e1df);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B43e1e2:{NFSU2_TR(0x43e1e2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43e1e3:L43e1e3:{c.instructions+=4;NFSU2_TR(0x43e1e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e1e7:{NFSU2_TR(0x43e1e7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43e1e8:{NFSU2_TR(0x43e1e8);
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
B43e1ea:{NFSU2_TR(0x43e1ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e1a0u);}goto L43e1a0;}}
}
B43e1ec:L43e1ec:{c.instructions+=9;NFSU2_TR(0x43e1ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e1f0:{NFSU2_TR(0x43e1f0);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B43e1f4:{NFSU2_TR(0x43e1f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e1f5:{NFSU2_TR(0x43e1f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e1f6:{NFSU2_TR(0x43e1f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43e1f7:{NFSU2_TR(0x43e1f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43e1f9:{NFSU2_TR(0x43e1f9);
w1(R+0,u8(0x1ull));
}
B43e1fb:{NFSU2_TR(0x43e1fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e1fc:{NFSU2_TR(0x43e1fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e200:L43e200:{c.instructions+=14;NFSU2_TR(0x43e200);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43e204:{NFSU2_TR(0x43e204);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B43e207:{NFSU2_TR(0x43e207);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e208:{NFSU2_TR(0x43e208);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e209:{NFSU2_TR(0x43e209);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e20a:{NFSU2_TR(0x43e20a);
__builtin_memmove((R+24),(R+4),4);
}
B43e20c:{NFSU2_TR(0x43e20c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43e213:{NFSU2_TR(0x43e213);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B43e219:{NFSU2_TR(0x43e219);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43e21b:{NFSU2_TR(0x43e21b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e21d:{NFSU2_TR(0x43e21d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43e220:{NFSU2_TR(0x43e220);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e221:{NFSU2_TR(0x43e221);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B43e223:{NFSU2_TR(0x43e223);
if(r1(R+518)){{goto L43e232;}}
}
B43e225:L43e225:{c.instructions+=1;NFSU2_TR(0x43e225);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B43e227:L43e227:{c.instructions+=5;NFSU2_TR(0x43e227);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B43e22b:{NFSU2_TR(0x43e22b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43e22c:{NFSU2_TR(0x43e22c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e22e:{NFSU2_TR(0x43e22e);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B43e230:{NFSU2_TR(0x43e230);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e227u);}goto L43e227;}}
}
B43e232:L43e232:{c.instructions+=3;NFSU2_TR(0x43e232);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e236:{NFSU2_TR(0x43e236);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e237:{NFSU2_TR(0x43e237);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e23cull));
TAIL_STATIC(0x575620u,575);
}
B43e23c:L43e23c:{c.instructions+=15;NFSU2_TR(0x43e23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e23f:{NFSU2_TR(0x43e23f);
__builtin_memmove((R+0),(R+28),4);
}
B43e241:{NFSU2_TR(0x43e241);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B43e242:{NFSU2_TR(0x43e242);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B43e245:{NFSU2_TR(0x43e245);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B43e247:{NFSU2_TR(0x43e247);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B43e24a:{NFSU2_TR(0x43e24a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43e24d:{NFSU2_TR(0x43e24d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B43e24f:{NFSU2_TR(0x43e24f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B43e252:{NFSU2_TR(0x43e252);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e253:{NFSU2_TR(0x43e253);
__builtin_memmove((R+4),(R+24),4);
}
B43e255:{NFSU2_TR(0x43e255);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e25b:{NFSU2_TR(0x43e25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e261:{NFSU2_TR(0x43e261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e267:{NFSU2_TR(0x43e267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e26cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e0a0u);}goto L43e0a0;}
}
B43e26c:L43e26c:{c.instructions+=15;NFSU2_TR(0x43e26c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43e270:{NFSU2_TR(0x43e270);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43e274:{NFSU2_TR(0x43e274);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e275:{NFSU2_TR(0x43e275);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43e279:{NFSU2_TR(0x43e279);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e27a:{NFSU2_TR(0x43e27a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e27b:{NFSU2_TR(0x43e27b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e281:{NFSU2_TR(0x43e281);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e284:{NFSU2_TR(0x43e284);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e285:{NFSU2_TR(0x43e285);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e286:{NFSU2_TR(0x43e286);
__builtin_memmove((R+4),(R+24),4);
}
B43e288:{NFSU2_TR(0x43e288);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e28c:{NFSU2_TR(0x43e28c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43e28e:{NFSU2_TR(0x43e28e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43e296:{NFSU2_TR(0x43e296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e29bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e120u);}goto L43e120;}
}
B43e29b:L43e29b:{c.instructions+=2;NFSU2_TR(0x43e29b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e29d:{NFSU2_TR(0x43e29d);
if(r1(R+518)){{goto L43e3e8;}}
}
B43e2a3:L43e2a3:{c.instructions+=1;NFSU2_TR(0x43e2a3);
{goto L43e2b0;}
}
B43e2a5:L43e2a5:{c.instructions+=2;NFSU2_TR(0x43e2a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43e2a9:{NFSU2_TR(0x43e2a9);
__builtin_memmove((R+16),(R+16),4);
}
B43e2b0:L43e2b0:{c.instructions+=3;NFSU2_TR(0x43e2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e2b3:{NFSU2_TR(0x43e2b3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B43e2b5:{NFSU2_TR(0x43e2b5);
if(r1(R+518)){{goto L43e2c9;}}
}
B43e2b7:L43e2b7:{c.instructions+=2;NFSU2_TR(0x43e2b7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B43e2ba:{NFSU2_TR(0x43e2ba);
if(r1(R+518)){{goto L43e2c9;}}
}
B43e2bc:L43e2bc:{c.instructions+=1;NFSU2_TR(0x43e2bc);
__builtin_memmove((R+16),(R+16),4);
}
B43e2c0:L43e2c0:{c.instructions+=4;NFSU2_TR(0x43e2c0);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B43e2c4:{NFSU2_TR(0x43e2c4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B43e2c5:{NFSU2_TR(0x43e2c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e2c7:{NFSU2_TR(0x43e2c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e2c0u);}goto L43e2c0;}}
}
B43e2c9:L43e2c9:{c.instructions+=3;NFSU2_TR(0x43e2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e2cf:{NFSU2_TR(0x43e2cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43e2d5:{NFSU2_TR(0x43e2d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e2f6;}}
}
B43e2d7:L43e2d7:{c.instructions+=9;NFSU2_TR(0x43e2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B43e2de:{NFSU2_TR(0x43e2de);
w4(R+0,u32(0x55555556ull));
}
B43e2e3:{NFSU2_TR(0x43e2e3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B43e2e5:{NFSU2_TR(0x43e2e5);
__builtin_memmove((R+4),(R+8),4);
}
B43e2e7:{NFSU2_TR(0x43e2e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B43e2ea:{NFSU2_TR(0x43e2ea);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B43e2ee:{NFSU2_TR(0x43e2ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e2ef:{NFSU2_TR(0x43e2ef);
__builtin_memmove((R+4),(R+24),4);
}
B43e2f1:{NFSU2_TR(0x43e2f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e2f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e0a0u);}goto L43e0a0;}
}
B43e2f6:L43e2f6:{c.instructions+=16;NFSU2_TR(0x43e2f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e2fc:{NFSU2_TR(0x43e2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43e302:{NFSU2_TR(0x43e302);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B43e305:{NFSU2_TR(0x43e305);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43e306:{NFSU2_TR(0x43e306);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e30c:{NFSU2_TR(0x43e30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B43e30f:{NFSU2_TR(0x43e30f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43e311:{NFSU2_TR(0x43e311);
__builtin_memmove((R+4),(R+8),4);
}
B43e313:{NFSU2_TR(0x43e313);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43e315:{NFSU2_TR(0x43e315);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e318:{NFSU2_TR(0x43e318);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e31b:{NFSU2_TR(0x43e31b);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B43e320:{NFSU2_TR(0x43e320);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B43e324:{NFSU2_TR(0x43e324);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e327:{NFSU2_TR(0x43e327);
u8 U[15];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B43e32c:{NFSU2_TR(0x43e32c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e350;}}
}
B43e32e:L43e32e:{c.instructions+=4;NFSU2_TR(0x43e32e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43e330:{NFSU2_TR(0x43e330);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43e332:{NFSU2_TR(0x43e332);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43e336:{NFSU2_TR(0x43e336);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43e350;}}
}
B43e338:L43e338:{c.instructions+=3;NFSU2_TR(0x43e338);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B43e33b:{NFSU2_TR(0x43e33b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B43e33e:{NFSU2_TR(0x43e33e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43e348;}}
}
B43e340:L43e340:{c.instructions+=2;NFSU2_TR(0x43e340);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43e343:{NFSU2_TR(0x43e343);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43e348;}}
}
B43e345:L43e345:{c.instructions+=1;NFSU2_TR(0x43e345);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x5full))));
}
B43e348:L43e348:{c.instructions+=4;NFSU2_TR(0x43e348);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B43e34b:{NFSU2_TR(0x43e34b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43e34c:{NFSU2_TR(0x43e34c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43e34e:{NFSU2_TR(0x43e34e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e338u);}goto L43e338;}}
}
B43e350:L43e350:{c.instructions+=4;NFSU2_TR(0x43e350);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B43e357:{NFSU2_TR(0x43e357);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B43e35b:{NFSU2_TR(0x43e35b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e35f:{NFSU2_TR(0x43e35f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43e3b9;}}
}
B43e361:L43e361:{c.instructions+=3;NFSU2_TR(0x43e361);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43e364:{NFSU2_TR(0x43e364);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e366:{NFSU2_TR(0x43e366);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e3b9;}}
}
B43e368:L43e368:{c.instructions+=3;NFSU2_TR(0x43e368);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43e36b:{NFSU2_TR(0x43e36b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e36d:{NFSU2_TR(0x43e36d);
if(r1(R+518)){{goto L43e3b9;}}
}
B43e36f:L43e36f:{c.instructions+=8;NFSU2_TR(0x43e36f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B43e373:{NFSU2_TR(0x43e373);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43e376:{NFSU2_TR(0x43e376);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43e377:{NFSU2_TR(0x43e377);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x54ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B43e37a:{NFSU2_TR(0x43e37a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B43e37d:{NFSU2_TR(0x43e37d);
w4(R+0,u32(0x786dd0ull));
}
B43e382:{NFSU2_TR(0x43e382);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B43e384:{NFSU2_TR(0x43e384);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B43e386:L43e386:{c.instructions+=5;NFSU2_TR(0x43e386);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B43e389:{NFSU2_TR(0x43e389);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B43e38b:{NFSU2_TR(0x43e38b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43e38c:{NFSU2_TR(0x43e38c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e38e:{NFSU2_TR(0x43e38e);
if(r1(R+518)){{goto L43e398;}}
}
B43e390:L43e390:{c.instructions+=2;NFSU2_TR(0x43e390);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e392:{NFSU2_TR(0x43e392);
if(r1(R+518)){{goto L43e398;}}
}
B43e394:L43e394:{c.instructions+=2;NFSU2_TR(0x43e394);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43e396:{NFSU2_TR(0x43e396);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e386u);}goto L43e386;}}
}
B43e398:L43e398:{c.instructions+=4;NFSU2_TR(0x43e398);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B43e39b:{NFSU2_TR(0x43e39b);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B43e39e:{NFSU2_TR(0x43e39e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B43e3a0:{NFSU2_TR(0x43e3a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e3b9;}}
}
B43e3a2:L43e3a2:{c.instructions+=9;NFSU2_TR(0x43e3a2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B43e3a5:{NFSU2_TR(0x43e3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e3a8:{NFSU2_TR(0x43e3a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43e3a9:{NFSU2_TR(0x43e3a9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x54ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B43e3ac:{NFSU2_TR(0x43e3ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B43e3af:{NFSU2_TR(0x43e3af);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B43e3b1:{NFSU2_TR(0x43e3b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e3b2:{NFSU2_TR(0x43e3b2);
__builtin_memmove((R+4),(R+24),4);
}
B43e3b4:{NFSU2_TR(0x43e3b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e3b9ull));
TAIL_STATIC(0x4408a0u,440);
}
B43e3b9:L43e3b9:{c.instructions+=14;NFSU2_TR(0x43e3b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43e3bd:{NFSU2_TR(0x43e3bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e3c1:{NFSU2_TR(0x43e3c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43e3c5:{NFSU2_TR(0x43e3c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e3c6:{NFSU2_TR(0x43e3c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43e3ca:{NFSU2_TR(0x43e3ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43e3ce:{NFSU2_TR(0x43e3ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e3cf:{NFSU2_TR(0x43e3cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e3d2:{NFSU2_TR(0x43e3d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e3d3:{NFSU2_TR(0x43e3d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e3d4:{NFSU2_TR(0x43e3d4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B43e3d6:{NFSU2_TR(0x43e3d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e3d7:{NFSU2_TR(0x43e3d7);
__builtin_memmove((R+4),(R+24),4);
}
B43e3d9:{NFSU2_TR(0x43e3d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e3deull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e120u);}goto L43e120;}
}
B43e3de:L43e3de:{c.instructions+=3;NFSU2_TR(0x43e3de);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B43e3e0:{NFSU2_TR(0x43e3e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e3e2:{NFSU2_TR(0x43e3e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e2a5u);}goto L43e2a5;}}
}
B43e3e8:L43e3e8:{c.instructions+=4;NFSU2_TR(0x43e3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e3ee:{NFSU2_TR(0x43e3ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B43e3f1:{NFSU2_TR(0x43e3f1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43e3f3:{NFSU2_TR(0x43e3f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43e422;}}
}
B43e3f5:L43e3f5:{c.instructions+=2;NFSU2_TR(0x43e3f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43e3fb:{NFSU2_TR(0x43e3fb);
{goto L43e400;}
}
B43e400:L43e400:{c.instructions+=9;NFSU2_TR(0x43e400);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43e403:{NFSU2_TR(0x43e403);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B43e406:{NFSU2_TR(0x43e406);
__builtin_memmove((R+12),(R+28),4);
}
B43e408:{NFSU2_TR(0x43e408);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B43e40a:{NFSU2_TR(0x43e40a);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),2);
s2(u32(r4(U+8)),r2(U+12));
}
B43e40f:{NFSU2_TR(0x43e40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43e415:{NFSU2_TR(0x43e415);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B43e419:{NFSU2_TR(0x43e419);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e41b:{NFSU2_TR(0x43e41b);
if(r1(R+518)){{goto L43e41f;}}
}
B43e41d:L43e41d:{c.instructions+=1;NFSU2_TR(0x43e41d);
__builtin_memmove((R+28),(R+4),4);
}
B43e41f:L43e41f:{c.instructions+=2;NFSU2_TR(0x43e41f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B43e420:{NFSU2_TR(0x43e420);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e400u);}goto L43e400;}}
}
B43e422:L43e422:{c.instructions+=6;NFSU2_TR(0x43e422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e423:{NFSU2_TR(0x43e423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e424:{NFSU2_TR(0x43e424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43e425:{NFSU2_TR(0x43e425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e426:{NFSU2_TR(0x43e426);
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
B43e429:{NFSU2_TR(0x43e429);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e430:L43e430:{c.instructions+=6;NFSU2_TR(0x43e430);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e436:{NFSU2_TR(0x43e436);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e437:{NFSU2_TR(0x43e437);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e438:{NFSU2_TR(0x43e438);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e43e:{NFSU2_TR(0x43e43e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43e440:{NFSU2_TR(0x43e440);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43e479;}}
}
B43e442:L43e442:{c.instructions+=5;NFSU2_TR(0x43e442);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43e448:{NFSU2_TR(0x43e448);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43e44b:{NFSU2_TR(0x43e44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B43e44e:{NFSU2_TR(0x43e44e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43e450:{NFSU2_TR(0x43e450);
if(r1(R+518)){{goto L43e479;}}
}
B43e452:L43e452:{c.instructions+=3;NFSU2_TR(0x43e452);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43e455:{NFSU2_TR(0x43e455);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e457:{NFSU2_TR(0x43e457);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e47e;}}
}
B43e459:L43e459:{c.instructions+=6;NFSU2_TR(0x43e459);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B43e45d:{NFSU2_TR(0x43e45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e463:{NFSU2_TR(0x43e463);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B43e465:{NFSU2_TR(0x43e465);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43e467:{NFSU2_TR(0x43e467);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e46d:{NFSU2_TR(0x43e46d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43e479;}}
}
B43e46f:L43e46f:{c.instructions+=4;NFSU2_TR(0x43e46f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43e472:{NFSU2_TR(0x43e472);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B43e475:{NFSU2_TR(0x43e475);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43e477:{NFSU2_TR(0x43e477);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e47e;}}
}
B43e479:L43e479:{c.instructions+=4;NFSU2_TR(0x43e479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e47a:{NFSU2_TR(0x43e47a);
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
B43e47c:{NFSU2_TR(0x43e47c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e47d:{NFSU2_TR(0x43e47d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e47e:L43e47e:{c.instructions+=10;NFSU2_TR(0x43e47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B43e484:{NFSU2_TR(0x43e484);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B43e487:{NFSU2_TR(0x43e487);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43e488:{NFSU2_TR(0x43e488);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x54ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B43e48b:{NFSU2_TR(0x43e48b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B43e48e:{NFSU2_TR(0x43e48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43e491:{NFSU2_TR(0x43e491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e492:{NFSU2_TR(0x43e492);
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
B43e494:{NFSU2_TR(0x43e494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e495:{NFSU2_TR(0x43e495);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e4a0:L43e4a0:{c.instructions+=7;NFSU2_TR(0x43e4a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e4a1:{NFSU2_TR(0x43e4a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e4a2:{NFSU2_TR(0x43e4a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43e4a6:{NFSU2_TR(0x43e4a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e4a7:{NFSU2_TR(0x43e4a7);
__builtin_memmove((R+24),(R+4),4);
}
B43e4a9:{NFSU2_TR(0x43e4a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43e4af:{NFSU2_TR(0x43e4af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e4b0:L43e4b0:{c.instructions+=3;NFSU2_TR(0x43e4b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e4b6:{NFSU2_TR(0x43e4b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43e4b8:{NFSU2_TR(0x43e4b8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43e51f;}}
}
B43e4ba:L43e4ba:{c.instructions+=5;NFSU2_TR(0x43e4ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43e4c0:{NFSU2_TR(0x43e4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43e4c3:{NFSU2_TR(0x43e4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43e4c6:{NFSU2_TR(0x43e4c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43e4c8:{NFSU2_TR(0x43e4c8);
if(r1(R+518)){{goto L43e51f;}}
}
B43e4ca:L43e4ca:{c.instructions+=3;NFSU2_TR(0x43e4ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B43e4cd:{NFSU2_TR(0x43e4cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e4cf:{NFSU2_TR(0x43e4cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e4f3;}}
}
B43e4d1:L43e4d1:{c.instructions+=7;NFSU2_TR(0x43e4d1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B43e4d5:{NFSU2_TR(0x43e4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e4db:{NFSU2_TR(0x43e4db);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B43e4dd:{NFSU2_TR(0x43e4dd);
__builtin_memmove((R+0),(R+28),4);
}
B43e4df:{NFSU2_TR(0x43e4df);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43e4e1:{NFSU2_TR(0x43e4e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e4e7:{NFSU2_TR(0x43e4e7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43e51f;}}
}
B43e4e9:L43e4e9:{c.instructions+=4;NFSU2_TR(0x43e4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43e4ec:{NFSU2_TR(0x43e4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43e4ef:{NFSU2_TR(0x43e4ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43e4f1:{NFSU2_TR(0x43e4f1);
if(r1(R+518)){{goto L43e51f;}}
}
B43e4f3:L43e4f3:{c.instructions+=7;NFSU2_TR(0x43e4f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B43e4f9:{NFSU2_TR(0x43e4f9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B43e4fc:{NFSU2_TR(0x43e4fc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43e4fd:{NFSU2_TR(0x43e4fd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x54ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B43e500:{NFSU2_TR(0x43e500);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B43e503:{NFSU2_TR(0x43e503);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B43e506:{NFSU2_TR(0x43e506);
if(r1(R+518)){{goto L43e51f;}}
}
B43e508:L43e508:{c.instructions+=3;NFSU2_TR(0x43e508);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e509:{NFSU2_TR(0x43e509);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e50a:{NFSU2_TR(0x43e50a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e50full));
TAIL_STATIC(0x43dcc0u,43d);
}
B43e50f:L43e50f:{c.instructions+=3;NFSU2_TR(0x43e50f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43e512:{NFSU2_TR(0x43e512);
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
B43e514:{NFSU2_TR(0x43e514);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e4b0u);}goto L43e4b0;}}
}
B43e516:L43e516:{c.instructions+=6;NFSU2_TR(0x43e516);
__builtin_memmove((R+0),(R+28),4);
}
B43e518:{NFSU2_TR(0x43e518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e519:{NFSU2_TR(0x43e519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e51a:{NFSU2_TR(0x43e51a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43e51b:{NFSU2_TR(0x43e51b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e51c:{NFSU2_TR(0x43e51c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e51f:L43e51f:{c.instructions+=6;NFSU2_TR(0x43e51f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e520:{NFSU2_TR(0x43e520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e521:{NFSU2_TR(0x43e521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43e522:{NFSU2_TR(0x43e522);
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
B43e524:{NFSU2_TR(0x43e524);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e525:{NFSU2_TR(0x43e525);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e530:L43e530:{c.instructions+=3;NFSU2_TR(0x43e530);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e536:{NFSU2_TR(0x43e536);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B43e53c:{NFSU2_TR(0x43e53c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43e55b;}}
}
B43e53e:L43e53e:{c.instructions+=5;NFSU2_TR(0x43e53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43e544:{NFSU2_TR(0x43e544);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43e547:{NFSU2_TR(0x43e547);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43e54a:{NFSU2_TR(0x43e54a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43e54c:{NFSU2_TR(0x43e54c);
if(r1(R+518)){{goto L43e55b;}}
}
B43e54e:L43e54e:{c.instructions+=3;NFSU2_TR(0x43e54e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43e551:{NFSU2_TR(0x43e551);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43e553:{NFSU2_TR(0x43e553);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e55b;}}
}
B43e555:L43e555:{c.instructions+=2;NFSU2_TR(0x43e555);
w4(R+0,u32(0x1ull));
}
B43e55a:{NFSU2_TR(0x43e55a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e55b:L43e55b:{c.instructions+=2;NFSU2_TR(0x43e55b);
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
B43e55d:{NFSU2_TR(0x43e55d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e560:L43e560:{c.instructions+=3;NFSU2_TR(0x43e560);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e566:{NFSU2_TR(0x43e566);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B43e56c:{NFSU2_TR(0x43e56c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43e59e;}}
}
B43e56e:L43e56e:{c.instructions+=7;NFSU2_TR(0x43e56e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e56f:{NFSU2_TR(0x43e56f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43e575:{NFSU2_TR(0x43e575);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B43e578:{NFSU2_TR(0x43e578);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B43e57b:{NFSU2_TR(0x43e57b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43e57d:{NFSU2_TR(0x43e57d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e57e:{NFSU2_TR(0x43e57e);
if(r1(R+518)){{goto L43e59e;}}
}
B43e580:L43e580:{c.instructions+=5;NFSU2_TR(0x43e580);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e581:{NFSU2_TR(0x43e581);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B43e584:{NFSU2_TR(0x43e584);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e586:{NFSU2_TR(0x43e586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e587:{NFSU2_TR(0x43e587);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e59e;}}
}
B43e589:L43e589:{c.instructions+=8;NFSU2_TR(0x43e589);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43e58a:{NFSU2_TR(0x43e58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e590:{NFSU2_TR(0x43e590);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B43e593:{NFSU2_TR(0x43e593);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43e594:{NFSU2_TR(0x43e594);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x54ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B43e597:{NFSU2_TR(0x43e597);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B43e59a:{NFSU2_TR(0x43e59a);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B43e59d:{NFSU2_TR(0x43e59d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e59e:L43e59e:{c.instructions+=2;NFSU2_TR(0x43e59e);
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
B43e5a0:{NFSU2_TR(0x43e5a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e5b0:L43e5b0:{c.instructions+=1;NFSU2_TR(0x43e5b0);
TAIL_STATIC(0x43bd90u,43b);
}
B43e5c0:L43e5c0:{c.instructions+=5;NFSU2_TR(0x43e5c0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43e5c3:{NFSU2_TR(0x43e5c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e5c4:{NFSU2_TR(0x43e5c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43e5c8:{NFSU2_TR(0x43e5c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e5c9:{NFSU2_TR(0x43e5c9);
u8 U[4];
__builtin_memmove((U+0),gp(0x78311c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e5cfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43e5cf:L43e5cf:{c.instructions+=5;NFSU2_TR(0x43e5cf);
__builtin_memmove((R+24),gp(0x8284e4),4);
}
B43e5d5:{NFSU2_TR(0x43e5d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e5d9:{NFSU2_TR(0x43e5d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43e5dd:{NFSU2_TR(0x43e5dd);
__builtin_memmove((R+4),(R+24),4);
}
B43e5df:{NFSU2_TR(0x43e5df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e5e4ull));
TAIL_STATIC(0x75c600u,75c);
}
B43e5e4:L43e5e4:{c.instructions+=3;NFSU2_TR(0x43e5e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B43e5e8:{NFSU2_TR(0x43e5e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e5ec:{NFSU2_TR(0x43e5ec);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L43e5f6;}}
}
B43e5ee:L43e5ee:{c.instructions+=1;NFSU2_TR(0x43e5ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43e5f6:L43e5f6:{c.instructions+=10;NFSU2_TR(0x43e5f6);
__builtin_memmove((R+4),(R+24),4);
}
B43e5f8:{NFSU2_TR(0x43e5f8);
w4(R+8,u32(0x1ull));
}
B43e5fd:{NFSU2_TR(0x43e5fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B43e5ff:{NFSU2_TR(0x43e5ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e600:{NFSU2_TR(0x43e600);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B43e604:{NFSU2_TR(0x43e604);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43e608:{NFSU2_TR(0x43e608);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B43e60c:{NFSU2_TR(0x43e60c);
{u32 ea_=u32(u32(8552488u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43e612:{NFSU2_TR(0x43e612);
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
B43e615:{NFSU2_TR(0x43e615);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e620:L43e620:{c.instructions+=5;NFSU2_TR(0x43e620);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43e624:{NFSU2_TR(0x43e624);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43e626:{NFSU2_TR(0x43e626);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e628:{NFSU2_TR(0x43e628);
__builtin_memmove((R+0),(R+8),4);
}
B43e62a:{NFSU2_TR(0x43e62a);
if(r1(R+518)){{goto L43e648;}}
}
B43e62c:L43e62c:{c.instructions+=2;NFSU2_TR(0x43e62c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e62d:{NFSU2_TR(0x43e62d);
__builtin_memmove((R+4),(R+4),4);
}
B43e630:L43e630:{c.instructions+=4;NFSU2_TR(0x43e630);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B43e633:{NFSU2_TR(0x43e633);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43e634:{NFSU2_TR(0x43e634);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e636:{NFSU2_TR(0x43e636);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e630u);}goto L43e630;}}
}
B43e638:L43e638:{c.instructions+=3;NFSU2_TR(0x43e638);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e63a:{NFSU2_TR(0x43e63a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e63b:{NFSU2_TR(0x43e63b);
if(r1(R+518)){{goto L43e648;}}
}
B43e63d:L43e63d:{c.instructions+=2;NFSU2_TR(0x43e63d);
__builtin_memmove((R+0),(R+8),4);
}
B43e63f:{NFSU2_TR(0x43e63f);
}
B43e640:L43e640:{c.instructions+=4;NFSU2_TR(0x43e640);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43e643:{NFSU2_TR(0x43e643);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43e644:{NFSU2_TR(0x43e644);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e646:{NFSU2_TR(0x43e646);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e640u);}goto L43e640;}}
}
B43e648:L43e648:{c.instructions+=2;NFSU2_TR(0x43e648);
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
B43e64a:{NFSU2_TR(0x43e64a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e650:L43e650:{c.instructions+=10;NFSU2_TR(0x43e650);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e651:{NFSU2_TR(0x43e651);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e652:{NFSU2_TR(0x43e652);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e653:{NFSU2_TR(0x43e653);
__builtin_memmove((R+12),(R+4),4);
}
B43e655:{NFSU2_TR(0x43e655);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e656:{NFSU2_TR(0x43e656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B43e658:{NFSU2_TR(0x43e658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43e65a:{NFSU2_TR(0x43e65a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B43e65c:{NFSU2_TR(0x43e65c);
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
B43e65e:{NFSU2_TR(0x43e65e);
if(r1(R+518)){{goto L43e6a5;}}
}
B43e660:L43e660:{c.instructions+=2;NFSU2_TR(0x43e660);
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
B43e662:{NFSU2_TR(0x43e662);
if(r1(R+518)){{goto L43e695;}}
}
B43e664:L43e664:{c.instructions+=3;NFSU2_TR(0x43e664);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e665:{NFSU2_TR(0x43e665);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e666:{NFSU2_TR(0x43e666);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e66aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43e66a:L43e66a:{c.instructions+=3;NFSU2_TR(0x43e66a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43e66d:{NFSU2_TR(0x43e66d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43e66f:{NFSU2_TR(0x43e66f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e68d;}}
}
B43e671:L43e671:{c.instructions+=12;NFSU2_TR(0x43e671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43e673:{NFSU2_TR(0x43e673);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43e676:{NFSU2_TR(0x43e676);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43e678:{NFSU2_TR(0x43e678);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e67b:{NFSU2_TR(0x43e67b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e67e:{NFSU2_TR(0x43e67e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43e680:{NFSU2_TR(0x43e680);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e683:{NFSU2_TR(0x43e683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e686:{NFSU2_TR(0x43e686);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B43e688:{NFSU2_TR(0x43e688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43e68a:{NFSU2_TR(0x43e68a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B43e68b:{NFSU2_TR(0x43e68b);
{goto L43e691;}
}
B43e68d:L43e68d:{c.instructions+=2;NFSU2_TR(0x43e68d);
__builtin_memmove((R+28),(R+24),4);
}
B43e68f:{NFSU2_TR(0x43e68f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43e691:L43e691:{c.instructions+=2;NFSU2_TR(0x43e691);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43e693:{NFSU2_TR(0x43e693);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e660u);}goto L43e660;}}
}
B43e695:L43e695:{c.instructions+=2;NFSU2_TR(0x43e695);
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
B43e697:{NFSU2_TR(0x43e697);
if(r1(R+518)){{goto L43e6a5;}}
}
B43e699:L43e699:{c.instructions+=4;NFSU2_TR(0x43e699);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e69d:{NFSU2_TR(0x43e69d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e69e:{NFSU2_TR(0x43e69e);
__builtin_memmove((R+4),(R+12),4);
}
B43e6a0:{NFSU2_TR(0x43e6a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e6a5ull));
TAIL_STATIC(0x43bf40u,43b);
}
B43e6a5:L43e6a5:{c.instructions+=5;NFSU2_TR(0x43e6a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e6a6:{NFSU2_TR(0x43e6a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e6a7:{NFSU2_TR(0x43e6a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43e6a8:{NFSU2_TR(0x43e6a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e6a9:{NFSU2_TR(0x43e6a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e6b0:L43e6b0:{c.instructions+=12;NFSU2_TR(0x43e6b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e6b4:{NFSU2_TR(0x43e6b4);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x1d872b41ull))));
}
B43e6b9:{NFSU2_TR(0x43e6b9);
__builtin_memmove((R+4),(R+0),4);
}
B43e6bb:{NFSU2_TR(0x43e6bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B43e6be:{NFSU2_TR(0x43e6be);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B43e6c0:{NFSU2_TR(0x43e6c0);
__builtin_memmove((R+8),(R+4),4);
}
B43e6c2:{NFSU2_TR(0x43e6c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B43e6c5:{NFSU2_TR(0x43e6c5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B43e6c7:{NFSU2_TR(0x43e6c7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43e6c9:{NFSU2_TR(0x43e6c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e6cd:{NFSU2_TR(0x43e6cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43e6cf:{NFSU2_TR(0x43e6cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e6d0:L43e6d0:{c.instructions+=8;NFSU2_TR(0x43e6d0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43e6d4:{NFSU2_TR(0x43e6d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B43e6d7:{NFSU2_TR(0x43e6d7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43e6dd:{NFSU2_TR(0x43e6dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e6de:{NFSU2_TR(0x43e6de);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43e6e0:{NFSU2_TR(0x43e6e0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43e6e2:{NFSU2_TR(0x43e6e2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43e6e5:{NFSU2_TR(0x43e6e5);
if(r1(R+514)){{goto L43e6ec;}}
}
B43e6e7:L43e6e7:{c.instructions+=1;NFSU2_TR(0x43e6e7);
w4(R+24,u32(0x1ull));
}
B43e6ec:L43e6ec:{c.instructions+=5;NFSU2_TR(0x43e6ec);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43e6f0:{NFSU2_TR(0x43e6f0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43e6f6:{NFSU2_TR(0x43e6f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43e6f8:{NFSU2_TR(0x43e6f8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43e6fb:{NFSU2_TR(0x43e6fb);
if(r1(R+514)){{goto L43e700;}}
}
B43e6fd:L43e6fd:{c.instructions+=1;NFSU2_TR(0x43e6fd);
w4(R+24,u32(u32(r4(R+24))^u32(u32(0x3ull))));
}
B43e700:L43e700:{c.instructions+=20;NFSU2_TR(0x43e700);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43e704:{NFSU2_TR(0x43e704);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43e70c:{NFSU2_TR(0x43e70c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B43e70e:{NFSU2_TR(0x43e70e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43e712:{NFSU2_TR(0x43e712);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43e716:{NFSU2_TR(0x43e716);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B43e718:{NFSU2_TR(0x43e718);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43e71c:{NFSU2_TR(0x43e71c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43e720:{NFSU2_TR(0x43e720);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43e724:{NFSU2_TR(0x43e724);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43e728:{NFSU2_TR(0x43e728);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43e72c:{NFSU2_TR(0x43e72c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43e730:{NFSU2_TR(0x43e730);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43e734:{NFSU2_TR(0x43e734);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43e736:{NFSU2_TR(0x43e736);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43e738:{NFSU2_TR(0x43e738);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43e73b:{NFSU2_TR(0x43e73b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43e73f:{NFSU2_TR(0x43e73f);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43e745:{NFSU2_TR(0x43e745);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43e747:{NFSU2_TR(0x43e747);
if(r1(R+514)){{goto L43e78a;}}
}
B43e749:L43e749:{c.instructions+=2;NFSU2_TR(0x43e749);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e74c:{NFSU2_TR(0x43e74c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e777;}}
}
B43e74e:L43e74e:{c.instructions+=5;NFSU2_TR(0x43e74e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43e752:{NFSU2_TR(0x43e752);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43e758:{NFSU2_TR(0x43e758);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43e75a:{NFSU2_TR(0x43e75a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43e75d:{NFSU2_TR(0x43e75d);
if(r1(R+514)){{goto L43e769;}}
}
B43e75f:L43e75f:{c.instructions+=2;NFSU2_TR(0x43e75f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43e767:{NFSU2_TR(0x43e767);
{goto L43e777;}
}
B43e769:L43e769:{c.instructions+=4;NFSU2_TR(0x43e769);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43e76d:{NFSU2_TR(0x43e76d);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B43e76f:{NFSU2_TR(0x43e76f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B43e773:{NFSU2_TR(0x43e773);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43e777:L43e777:{c.instructions+=3;NFSU2_TR(0x43e777);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e77b:{NFSU2_TR(0x43e77b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e77c:{NFSU2_TR(0x43e77c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e781ull));
TAIL_STATIC(0x43c490u,43c);
}
B43e781:L43e781:{c.instructions+=3;NFSU2_TR(0x43e781);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43e784:{NFSU2_TR(0x43e784);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e788:{NFSU2_TR(0x43e788);
{goto L43e7d0;}
}
B43e78a:L43e78a:{c.instructions+=2;NFSU2_TR(0x43e78a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e78d:{NFSU2_TR(0x43e78d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e7b8;}}
}
B43e78f:L43e78f:{c.instructions+=5;NFSU2_TR(0x43e78f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43e793:{NFSU2_TR(0x43e793);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43e799:{NFSU2_TR(0x43e799);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43e79b:{NFSU2_TR(0x43e79b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43e79e:{NFSU2_TR(0x43e79e);
if(r1(R+514)){{goto L43e7aa;}}
}
B43e7a0:L43e7a0:{c.instructions+=2;NFSU2_TR(0x43e7a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43e7a8:{NFSU2_TR(0x43e7a8);
{goto L43e7b8;}
}
B43e7aa:L43e7aa:{c.instructions+=4;NFSU2_TR(0x43e7aa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43e7ae:{NFSU2_TR(0x43e7ae);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B43e7b0:{NFSU2_TR(0x43e7b0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B43e7b4:{NFSU2_TR(0x43e7b4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43e7b8:L43e7b8:{c.instructions+=3;NFSU2_TR(0x43e7b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43e7bc:{NFSU2_TR(0x43e7bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e7bd:{NFSU2_TR(0x43e7bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e7c2ull));
TAIL_STATIC(0x43c490u,43c);
}
B43e7c2:L43e7c2:{c.instructions+=4;NFSU2_TR(0x43e7c2);
w4(R+8,u32(0x4000ull));
}
B43e7c7:{NFSU2_TR(0x43e7c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43e7ca:{NFSU2_TR(0x43e7ca);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B43e7cc:{NFSU2_TR(0x43e7cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e7d0:L43e7d0:{c.instructions+=2;NFSU2_TR(0x43e7d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43e7d2:{NFSU2_TR(0x43e7d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e7de;}}
}
B43e7d4:L43e7d4:{c.instructions+=4;NFSU2_TR(0x43e7d4);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B43e7d9:{NFSU2_TR(0x43e7d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e7da:{NFSU2_TR(0x43e7da);
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
B43e7dd:{NFSU2_TR(0x43e7dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e7de:L43e7de:{c.instructions+=2;NFSU2_TR(0x43e7de);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43e7e1:{NFSU2_TR(0x43e7e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e7f3;}}
}
B43e7e3:L43e7e3:{c.instructions+=6;NFSU2_TR(0x43e7e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43e7e7:{NFSU2_TR(0x43e7e7);
w4(R+0,u32(0x10000ull));
}
B43e7ec:{NFSU2_TR(0x43e7ec);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B43e7ee:{NFSU2_TR(0x43e7ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e7ef:{NFSU2_TR(0x43e7ef);
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
B43e7f2:{NFSU2_TR(0x43e7f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e7f3:L43e7f3:{c.instructions+=2;NFSU2_TR(0x43e7f3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43e7f6:{NFSU2_TR(0x43e7f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e808;}}
}
B43e7f8:L43e7f8:{c.instructions+=6;NFSU2_TR(0x43e7f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43e7fc:{NFSU2_TR(0x43e7fc);
w4(R+0,u32(0x8000ull));
}
B43e801:{NFSU2_TR(0x43e801);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B43e803:{NFSU2_TR(0x43e803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e804:{NFSU2_TR(0x43e804);
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
B43e807:{NFSU2_TR(0x43e807);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e808:L43e808:{c.instructions+=5;NFSU2_TR(0x43e808);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e80c:{NFSU2_TR(0x43e80c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8000ull))));
}
B43e811:{NFSU2_TR(0x43e811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e812:{NFSU2_TR(0x43e812);
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
B43e815:{NFSU2_TR(0x43e815);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e820:L43e820:{c.instructions+=4;NFSU2_TR(0x43e820);
__builtin_memmove((R+0),(R+4),4);
}
B43e822:{NFSU2_TR(0x43e822);
u8 U[4];
w4(U+0,u32(0x786de0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B43e828:{NFSU2_TR(0x43e828);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43e82f:{NFSU2_TR(0x43e82f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e830:L43e830:{c.instructions+=3;NFSU2_TR(0x43e830);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e831:{NFSU2_TR(0x43e831);
__builtin_memmove((R+24),(R+4),4);
}
B43e833:{NFSU2_TR(0x43e833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e838ull));
TAIL_STATIC(0x43cad0u,43c);
}
B43e838:L43e838:{c.instructions+=2;NFSU2_TR(0x43e838);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B43e83d:{NFSU2_TR(0x43e83d);
if(r1(R+518)){{goto L43e848;}}
}
B43e83f:L43e83f:{c.instructions+=2;NFSU2_TR(0x43e83f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e840:{NFSU2_TR(0x43e840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e845ull));
TAIL_STATIC(0x575630u,575);
}
B43e845:L43e845:{c.instructions+=1;NFSU2_TR(0x43e845);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43e848:L43e848:{c.instructions+=3;NFSU2_TR(0x43e848);
__builtin_memmove((R+0),(R+24),4);
}
B43e84a:{NFSU2_TR(0x43e84a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e84b:{NFSU2_TR(0x43e84b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e850:L43e850:{c.instructions+=3;NFSU2_TR(0x43e850);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e853:{NFSU2_TR(0x43e853);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e854:{NFSU2_TR(0x43e854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e859ull));
TAIL_STATIC(0x75c6dau,75c);
}
B43e859:L43e859:{c.instructions+=2;NFSU2_TR(0x43e859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43e85a:{NFSU2_TR(0x43e85a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e860:L43e860:{c.instructions+=7;NFSU2_TR(0x43e860);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e861:{NFSU2_TR(0x43e861);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e862:{NFSU2_TR(0x43e862);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e863:{NFSU2_TR(0x43e863);
__builtin_memmove((R+28),(R+4),4);
}
B43e865:{NFSU2_TR(0x43e865);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e868:{NFSU2_TR(0x43e868);
__builtin_memmove((R+4),(R+12),4);
}
B43e86a:{NFSU2_TR(0x43e86a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e86full));
TAIL_STATIC(0x6f55ddu,6f5);
}
B43e86f:L43e86f:{c.instructions+=5;NFSU2_TR(0x43e86f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e872:{NFSU2_TR(0x43e872);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43e875:{NFSU2_TR(0x43e875);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43e877:{NFSU2_TR(0x43e877);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43e879:{NFSU2_TR(0x43e879);
if(r1(R+518)){{goto L43e88b;}}
}
B43e87b:L43e87b:{c.instructions+=1;NFSU2_TR(0x43e87b);
{goto L43e880;}
}
B43e880:L43e880:{c.instructions+=5;NFSU2_TR(0x43e880);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e883:{NFSU2_TR(0x43e883);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43e885:{NFSU2_TR(0x43e885);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B43e887:{NFSU2_TR(0x43e887);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43e889:{NFSU2_TR(0x43e889);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e880u);}goto L43e880;}}
}
B43e88b:L43e88b:{c.instructions+=2;NFSU2_TR(0x43e88b);
__builtin_memmove((R+4),(R+12),4);
}
B43e88d:{NFSU2_TR(0x43e88d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e892ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B43e892:L43e892:{c.instructions+=5;NFSU2_TR(0x43e892);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e893:{NFSU2_TR(0x43e893);
__builtin_memmove((R+0),(R+24),4);
}
B43e895:{NFSU2_TR(0x43e895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e896:{NFSU2_TR(0x43e896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e897:{NFSU2_TR(0x43e897);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e8a0:L43e8a0:{c.instructions+=7;NFSU2_TR(0x43e8a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e8a1:{NFSU2_TR(0x43e8a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e8a2:{NFSU2_TR(0x43e8a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e8a3:{NFSU2_TR(0x43e8a3);
__builtin_memmove((R+28),(R+4),4);
}
B43e8a5:{NFSU2_TR(0x43e8a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e8a8:{NFSU2_TR(0x43e8a8);
__builtin_memmove((R+4),(R+12),4);
}
B43e8aa:{NFSU2_TR(0x43e8aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e8afull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B43e8af:L43e8af:{c.instructions+=5;NFSU2_TR(0x43e8af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e8b2:{NFSU2_TR(0x43e8b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B43e8b5:{NFSU2_TR(0x43e8b5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43e8b7:{NFSU2_TR(0x43e8b7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43e8b9:{NFSU2_TR(0x43e8b9);
if(r1(R+518)){{goto L43e8cf;}}
}
B43e8bb:L43e8bb:{c.instructions+=1;NFSU2_TR(0x43e8bb);
{goto L43e8c0;}
}
B43e8c0:L43e8c0:{c.instructions+=3;NFSU2_TR(0x43e8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43e8c3:{NFSU2_TR(0x43e8c3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43e8c5:{NFSU2_TR(0x43e8c5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43e8c9;}}
}
B43e8c7:L43e8c7:{c.instructions+=1;NFSU2_TR(0x43e8c7);
__builtin_memmove((R+24),(R+4),4);
}
B43e8c9:L43e8c9:{c.instructions+=3;NFSU2_TR(0x43e8c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43e8cb:{NFSU2_TR(0x43e8cb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43e8cd:{NFSU2_TR(0x43e8cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e8c0u);}goto L43e8c0;}}
}
B43e8cf:L43e8cf:{c.instructions+=2;NFSU2_TR(0x43e8cf);
__builtin_memmove((R+4),(R+12),4);
}
B43e8d1:{NFSU2_TR(0x43e8d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e8d6ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B43e8d6:L43e8d6:{c.instructions+=5;NFSU2_TR(0x43e8d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43e8d7:{NFSU2_TR(0x43e8d7);
__builtin_memmove((R+0),(R+24),4);
}
B43e8d9:{NFSU2_TR(0x43e8d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43e8da:{NFSU2_TR(0x43e8da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43e8db:{NFSU2_TR(0x43e8db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e8e0:L43e8e0:{c.instructions+=4;NFSU2_TR(0x43e8e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e8e4:{NFSU2_TR(0x43e8e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B43e8eb:{NFSU2_TR(0x43e8eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43e8ed:{NFSU2_TR(0x43e8ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e906;}}
}
B43e8ef:L43e8ef:{c.instructions+=3;NFSU2_TR(0x43e8ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82802cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B43e8f6:{NFSU2_TR(0x43e8f6);
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
B43e8f8:{NFSU2_TR(0x43e8f8);
if(r1(R+518)){{goto L43e903;}}
}
B43e8fa:L43e8fa:{c.instructions+=3;NFSU2_TR(0x43e8fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43e8fc:{NFSU2_TR(0x43e8fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e900:{NFSU2_TR(0x43e900);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B43e903:L43e903:{c.instructions+=2;NFSU2_TR(0x43e903);
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
B43e905:{NFSU2_TR(0x43e905);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e906:L43e906:{c.instructions+=1;NFSU2_TR(0x43e906);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e860u);}goto L43e860;}
}
B43e910:L43e910:{c.instructions+=4;NFSU2_TR(0x43e910);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e914:{NFSU2_TR(0x43e914);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B43e91b:{NFSU2_TR(0x43e91b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43e91d:{NFSU2_TR(0x43e91d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e933;}}
}
B43e91f:L43e91f:{c.instructions+=3;NFSU2_TR(0x43e91f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82802cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B43e926:{NFSU2_TR(0x43e926);
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
B43e928:{NFSU2_TR(0x43e928);
if(r1(R+518)){{goto L43e949;}}
}
B43e92a:L43e92a:{c.instructions+=3;NFSU2_TR(0x43e92a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43e92c:{NFSU2_TR(0x43e92c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e930:{NFSU2_TR(0x43e930);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B43e933:L43e933:{c.instructions+=2;NFSU2_TR(0x43e933);
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
B43e935:{NFSU2_TR(0x43e935);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43e93d;}}
}
B43e937:L43e937:{c.instructions+=2;NFSU2_TR(0x43e937);
w4(R+0,u32(0x6300000ull));
}
B43e93c:{NFSU2_TR(0x43e93c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e93d:L43e93d:{c.instructions+=1;NFSU2_TR(0x43e93d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43e942ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43e8a0u);}goto L43e8a0;}
}
B43e942:L43e942:{c.instructions+=2;NFSU2_TR(0x43e942);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0xdcull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xdcull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xdcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43e947:{NFSU2_TR(0x43e947);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L43e94b;}}
}
B43e949:L43e949:{c.instructions+=1;NFSU2_TR(0x43e949);
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
B43e94b:L43e94b:{c.instructions+=1;NFSU2_TR(0x43e94b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43e950:L43e950:{c.instructions+=19;NFSU2_TR(0x43e950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb4ull))));
}
B43e956:{NFSU2_TR(0x43e956);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e957:{NFSU2_TR(0x43e957);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e958:{NFSU2_TR(0x43e958);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43e95f:{NFSU2_TR(0x43e95f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43e962:{NFSU2_TR(0x43e962);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43e964:{NFSU2_TR(0x43e964);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43e966:{NFSU2_TR(0x43e966);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e967:{NFSU2_TR(0x43e967);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B43e969:{NFSU2_TR(0x43e969);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43e96b:{NFSU2_TR(0x43e96b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e96d:{NFSU2_TR(0x43e96d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e971:{NFSU2_TR(0x43e971);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e975:{NFSU2_TR(0x43e975);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e979:{NFSU2_TR(0x43e979);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e97d:{NFSU2_TR(0x43e97d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e981:{NFSU2_TR(0x43e981);
u8 U[5];
w4(U+0,u32(u32(u32(0x7full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43e985:{NFSU2_TR(0x43e985);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e989:{NFSU2_TR(0x43e989);
if(r1(R+518)){{goto L43e993;}}
}
B43e98b:L43e98b:{c.instructions+=2;NFSU2_TR(0x43e98b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43e98e:{NFSU2_TR(0x43e98e);
__builtin_memmove(gp(0x828150),(R+0),1);
}
B43e993:L43e993:{c.instructions+=4;NFSU2_TR(0x43e993);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43e99a:{NFSU2_TR(0x43e99a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B43e99c:{NFSU2_TR(0x43e99c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e99e:{NFSU2_TR(0x43e99e);
if(r1(R+518)){TAIL_STATIC(0x43f5b9u,43f);}
}
B43e9a4:L43e9a4:{c.instructions+=2;NFSU2_TR(0x43e9a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43e9a5:{NFSU2_TR(0x43e9a5);
{goto L43e9b0;}
}
B43e9a7:L43e9a7:{c.instructions+=2;NFSU2_TR(0x43e9a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43e9ab:{NFSU2_TR(0x43e9ab);
{goto L43e9b0;}
}
B43e9b0:L43e9b0:{c.instructions+=5;NFSU2_TR(0x43e9b0);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43e9b7:{NFSU2_TR(0x43e9b7);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B43e9b8:{NFSU2_TR(0x43e9b8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43e9ba:{NFSU2_TR(0x43e9ba);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e9c1:{NFSU2_TR(0x43e9c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x43f5b8u,43f);}
}
B43e9c7:L43e9c7:{c.instructions+=2;NFSU2_TR(0x43e9c7);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x20ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B43e9c9:{NFSU2_TR(0x43e9c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43e9de;}}
}
B43e9cb:L43e9cb:{c.instructions+=2;NFSU2_TR(0x43e9cb);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43e9cd:{NFSU2_TR(0x43e9cd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43e9de;}}
}
B43e9cf:L43e9cf:{c.instructions+=4;NFSU2_TR(0x43e9cf);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B43e9d2:{NFSU2_TR(0x43e9d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x786cd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B43e9d9:{NFSU2_TR(0x43e9d9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B43e9dc:{NFSU2_TR(0x43e9dc);
{goto L43e9e0;}
}
B43e9de:L43e9de:{c.instructions+=1;NFSU2_TR(0x43e9de);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43e9e0:L43e9e0:{c.instructions+=5;NFSU2_TR(0x43e9e0);
u8 U[13];
w4(U+0,u32(u32(u32(0x786cf0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(s32(s8(r1(U+12)))));
}
B43e9e8:{NFSU2_TR(0x43e9e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B43e9eb:{NFSU2_TR(0x43e9eb);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43e9ee:{NFSU2_TR(0x43e9ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43e9f2:{NFSU2_TR(0x43e9f2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x43f5a3u,43f);}
}
B43e9f8:L43e9f8:{c.instructions+=1;NFSU2_TR(0x43e9f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x43f5dcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43e9ff:L43e9ff:{c.instructions+=4;NFSU2_TR(0x43e9ff);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43ea06:{NFSU2_TR(0x43ea06);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43ea09:{NFSU2_TR(0x43ea09);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ea0b:{NFSU2_TR(0x43ea0b);
if(r1(R+518)){{goto L43ea31;}}
}
B43ea0d:L43ea0d:{c.instructions+=9;NFSU2_TR(0x43ea0d);
__builtin_memmove((R+4),gp(0x828514),4);
}
B43ea13:{NFSU2_TR(0x43ea13);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x828178ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43ea19:{NFSU2_TR(0x43ea19);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ea1d:{NFSU2_TR(0x43ea1d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43ea1e:{NFSU2_TR(0x43ea1e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7full))));
}
B43ea21:{NFSU2_TR(0x43ea21);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43ea22:{NFSU2_TR(0x43ea22);
__builtin_memmove(gp(0x828514),(R+4),4);
}
B43ea28:{NFSU2_TR(0x43ea28);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ea2c:{NFSU2_TR(0x43ea2c);
TAIL_STATIC(0x43f5a3u,43f);
}
B43ea31:L43ea31:{c.instructions+=3;NFSU2_TR(0x43ea31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43ea33:{NFSU2_TR(0x43ea33);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ea35:{NFSU2_TR(0x43ea35);
if(r1(R+518)){{goto L43ea3b;}}
}
B43ea37:L43ea37:{c.instructions+=2;NFSU2_TR(0x43ea37);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B43ea39:{NFSU2_TR(0x43ea39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B43ea3b:L43ea3b:{c.instructions+=2;NFSU2_TR(0x43ea3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B43ea3f:{NFSU2_TR(0x43ea3f);
TAIL_STATIC(0x43f5a3u,43f);
}
B43ea44:L43ea44:{c.instructions+=9;NFSU2_TR(0x43ea44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43ea46:{NFSU2_TR(0x43ea46);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43ea4a:{NFSU2_TR(0x43ea4a);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B43ea4d:{NFSU2_TR(0x43ea4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ea51:{NFSU2_TR(0x43ea51);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ea55:{NFSU2_TR(0x43ea55);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ea59:{NFSU2_TR(0x43ea59);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ea5d:{NFSU2_TR(0x43ea5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ea61:{NFSU2_TR(0x43ea61);
TAIL_STATIC(0x43f59fu,43f);
}
B43ea66:L43ea66:{c.instructions+=4;NFSU2_TR(0x43ea66);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B43ea69:{NFSU2_TR(0x43ea69);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
}
B43ea6c:{NFSU2_TR(0x43ea6c);
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
B43ea6f:{NFSU2_TR(0x43ea6f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x43f5a3u,43f);}
}
B43ea75:L43ea75:{c.instructions+=2;NFSU2_TR(0x43ea75);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x43f618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B43ea7c:{NFSU2_TR(0x43ea7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x43f5fcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43ea83:L43ea83:{c.instructions+=3;NFSU2_TR(0x43ea83);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4ull))));
}
B43ea86:{NFSU2_TR(0x43ea86);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ea8a:{NFSU2_TR(0x43ea8a);
TAIL_STATIC(0x43f5a3u,43f);
}
B43ea8f:L43ea8f:{c.instructions+=3;NFSU2_TR(0x43ea8f);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
}
B43ea92:{NFSU2_TR(0x43ea92);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ea96:{NFSU2_TR(0x43ea96);
TAIL_STATIC(0x43f5a3u,43f);
}
B43ea9b:L43ea9b:{c.instructions+=3;NFSU2_TR(0x43ea9b);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x2ull))));
}
B43ea9e:{NFSU2_TR(0x43ea9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eaa2:{NFSU2_TR(0x43eaa2);
TAIL_STATIC(0x43f5a3u,43f);
}
B43eaa7:L43eaa7:{c.instructions+=3;NFSU2_TR(0x43eaa7);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x80ull))));
}
B43eaad:{NFSU2_TR(0x43eaad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eab1:{NFSU2_TR(0x43eab1);
TAIL_STATIC(0x43f5a3u,43f);
}
B43eab6:L43eab6:{c.instructions+=3;NFSU2_TR(0x43eab6);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8ull))));
}
B43eab9:{NFSU2_TR(0x43eab9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eabd:{NFSU2_TR(0x43eabd);
TAIL_STATIC(0x43f5a3u,43f);
}
B43eac2:L43eac2:{c.instructions+=3;NFSU2_TR(0x43eac2);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x2000ull))));
}
B43eac8:{NFSU2_TR(0x43eac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eacc:{NFSU2_TR(0x43eacc);
TAIL_STATIC(0x43f5a3u,43f);
}
B43ead1:L43ead1:{c.instructions+=2;NFSU2_TR(0x43ead1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2aull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ead3:{NFSU2_TR(0x43ead3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43eb09;}}
}
B43ead5:L43ead5:{c.instructions+=7;NFSU2_TR(0x43ead5);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43eadc:{NFSU2_TR(0x43eadc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43eadf:{NFSU2_TR(0x43eadf);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eae6:{NFSU2_TR(0x43eae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43eae9:{NFSU2_TR(0x43eae9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43eaeb:{NFSU2_TR(0x43eaeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eaef:{NFSU2_TR(0x43eaef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x43f5a3u,43f);}
}
B43eaf5:L43eaf5:{c.instructions+=6;NFSU2_TR(0x43eaf5);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4ull))));
}
B43eaf8:{NFSU2_TR(0x43eaf8);
__builtin_memmove((R+4),(R+0),4);
}
B43eafa:{NFSU2_TR(0x43eafa);
w4(R+4,u32(0-u32(r4(R+4))));
}
B43eafc:{NFSU2_TR(0x43eafc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eb00:{NFSU2_TR(0x43eb00);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eb04:{NFSU2_TR(0x43eb04);
TAIL_STATIC(0x43f5a3u,43f);
}
B43eb09:L43eb09:{c.instructions+=6;NFSU2_TR(0x43eb09);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43eb0d:{NFSU2_TR(0x43eb0d);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B43eb10:{NFSU2_TR(0x43eb10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B43eb13:{NFSU2_TR(0x43eb13);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B43eb17:{NFSU2_TR(0x43eb17);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eb1b:{NFSU2_TR(0x43eb1b);
TAIL_STATIC(0x43f5a3u,43f);
}
B43eb20:L43eb20:{c.instructions+=3;NFSU2_TR(0x43eb20);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43eb22:{NFSU2_TR(0x43eb22);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eb26:{NFSU2_TR(0x43eb26);
TAIL_STATIC(0x43f5a3u,43f);
}
B43eb2b:L43eb2b:{c.instructions+=2;NFSU2_TR(0x43eb2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2aull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43eb2d:{NFSU2_TR(0x43eb2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43eb5a;}}
}
B43eb2f:L43eb2f:{c.instructions+=7;NFSU2_TR(0x43eb2f);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43eb36:{NFSU2_TR(0x43eb36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B43eb38:{NFSU2_TR(0x43eb38);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43eb3b:{NFSU2_TR(0x43eb3b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43eb3d:{NFSU2_TR(0x43eb3d);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eb44:{NFSU2_TR(0x43eb44);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eb48:{NFSU2_TR(0x43eb48);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x43f5a3u,43f);}
}
B43eb4e:L43eb4e:{c.instructions+=3;NFSU2_TR(0x43eb4e);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B43eb51:{NFSU2_TR(0x43eb51);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eb55:{NFSU2_TR(0x43eb55);
TAIL_STATIC(0x43f5a3u,43f);
}
B43eb5a:L43eb5a:{c.instructions+=5;NFSU2_TR(0x43eb5a);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B43eb5d:{NFSU2_TR(0x43eb5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B43eb60:{NFSU2_TR(0x43eb60);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B43eb64:{NFSU2_TR(0x43eb64);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eb68:{NFSU2_TR(0x43eb68);
TAIL_STATIC(0x43f5a3u,43f);
}
B43eb6d:L43eb6d:{c.instructions+=2;NFSU2_TR(0x43eb6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x68ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43eb6f:{NFSU2_TR(0x43eb6f);
if(r1(R+518)){{goto L43eb85;}}
}
B43eb71:L43eb71:{c.instructions+=2;NFSU2_TR(0x43eb71);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x6cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43eb73:{NFSU2_TR(0x43eb73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43f5a3u,43f);}
}
B43eb79:L43eb79:{c.instructions+=3;NFSU2_TR(0x43eb79);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10ull))));
}
B43eb7c:{NFSU2_TR(0x43eb7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eb80:{NFSU2_TR(0x43eb80);
TAIL_STATIC(0x43f5a3u,43f);
}
B43eb85:L43eb85:{c.instructions+=3;NFSU2_TR(0x43eb85);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x20ull))));
}
B43eb88:{NFSU2_TR(0x43eb88);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eb8c:{NFSU2_TR(0x43eb8c);
TAIL_STATIC(0x43f5a3u,43f);
}
B43eb91:L43eb91:{c.instructions+=6;NFSU2_TR(0x43eb91);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B43eb94:{NFSU2_TR(0x43eb94);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43eb96:{NFSU2_TR(0x43eb96);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffbbull))));
}
B43eb99:{NFSU2_TR(0x43eb99);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x35ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x35ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x35ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43eb9c:{NFSU2_TR(0x43eb9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eba0:{NFSU2_TR(0x43eba0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x43f36du,43f);}
}
B43eba6:L43eba6:{c.instructions+=2;NFSU2_TR(0x43eba6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x43f66cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B43ebad:{NFSU2_TR(0x43ebad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x43f62cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43ebb4:L43ebb4:{c.instructions+=7;NFSU2_TR(0x43ebb4);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ebbb:{NFSU2_TR(0x43ebbb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43ebbe:{NFSU2_TR(0x43ebbe);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ebc5:{NFSU2_TR(0x43ebc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43ebc8:{NFSU2_TR(0x43ebc8);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43ebcc:{NFSU2_TR(0x43ebcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43ebd4:{NFSU2_TR(0x43ebd4);
TAIL_STATIC(0x43f36du,43f);
}
B43ebd9:L43ebd9:{c.instructions+=2;NFSU2_TR(0x43ebd9);
w4(R+0,u32(0x27ull));
}
B43ebde:{NFSU2_TR(0x43ebde);
{goto L43ebea;}
}
B43ebe0:L43ebe0:{c.instructions+=2;NFSU2_TR(0x43ebe0);
w4(R+12,u32(0x8ull));
}
B43ebe5:{NFSU2_TR(0x43ebe5);
w4(R+0,u32(0x7ull));
}
B43ebea:L43ebea:{c.instructions+=3;NFSU2_TR(0x43ebea);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B43ebec:{NFSU2_TR(0x43ebec);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ebf0:{NFSU2_TR(0x43ebf0);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L43ec05;}}
}
B43ebf2:L43ebf2:{c.instructions+=4;NFSU2_TR(0x43ebf2);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x51ull))));
}
B43ebf4:{NFSU2_TR(0x43ebf4);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x30ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43ebf9:{NFSU2_TR(0x43ebf9);
u8 U[5];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43ebfd:{NFSU2_TR(0x43ebfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43ec05:L43ec05:{c.instructions+=2;NFSU2_TR(0x43ec05);
w4(R+20,u32(0x10ull));
}
B43ec0a:{NFSU2_TR(0x43ec0a);
{goto L43ec3a;}
}
B43ec0c:L43ec0c:{c.instructions+=2;NFSU2_TR(0x43ec0c);
w4(R+20,u32(0x2ull));
}
B43ec11:{NFSU2_TR(0x43ec11);
{goto L43ec3a;}
}
B43ec13:L43ec13:{c.instructions+=3;NFSU2_TR(0x43ec13);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B43ec15:{NFSU2_TR(0x43ec15);
w4(R+20,u32(0x8ull));
}
B43ec1a:{NFSU2_TR(0x43ec1a);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L43ec3a;}}
}
B43ec1c:L43ec1c:{c.instructions+=2;NFSU2_TR(0x43ec1c);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x200ull))));
}
B43ec22:{NFSU2_TR(0x43ec22);
{goto L43ec36;}
}
B43ec24:L43ec24:{c.instructions+=2;NFSU2_TR(0x43ec24);
w4(R+20,u32(0xaull));
}
B43ec29:{NFSU2_TR(0x43ec29);
{goto L43ec3a;}
}
B43ec2b:L43ec2b:{c.instructions+=2;NFSU2_TR(0x43ec2b);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x400ull))));
}
B43ec31:{NFSU2_TR(0x43ec31);
w4(R+20,u32(0xaull));
}
B43ec36:L43ec36:{c.instructions+=1;NFSU2_TR(0x43ec36);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ec3a:L43ec3a:{c.instructions+=7;NFSU2_TR(0x43ec3a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ec41:{NFSU2_TR(0x43ec41);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43ec44:{NFSU2_TR(0x43ec44);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ec47:{NFSU2_TR(0x43ec47);
u8 U[4];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B43ec4e:{NFSU2_TR(0x43ec4e);
__builtin_memmove((R+4),(R+8),4);
}
B43ec50:{NFSU2_TR(0x43ec50);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ec57:{NFSU2_TR(0x43ec57);
if(r1(R+518)){{goto L43ec6d;}}
}
B43ec59:L43ec59:{c.instructions+=2;NFSU2_TR(0x43ec59);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x400ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B43ec5f:{NFSU2_TR(0x43ec5f);
if(r1(R+518)){{goto L43ec67;}}
}
B43ec61:L43ec61:{c.instructions+=2;NFSU2_TR(0x43ec61);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B43ec65:{NFSU2_TR(0x43ec65);
{goto L43ec76;}
}
B43ec67:L43ec67:{c.instructions+=2;NFSU2_TR(0x43ec67);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B43ec6b:{NFSU2_TR(0x43ec6b);
{goto L43ec76;}
}
B43ec6d:L43ec6d:{c.instructions+=2;NFSU2_TR(0x43ec6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ec70:{NFSU2_TR(0x43ec70);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x400ull))));
}
B43ec76:L43ec76:{c.instructions+=2;NFSU2_TR(0x43ec76);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43ec78:{NFSU2_TR(0x43ec78);
if(r1(R+518)){{goto L43ec8a;}}
}
B43ec7a:L43ec7a:{c.instructions+=2;NFSU2_TR(0x43ec7a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43ec7c:{NFSU2_TR(0x43ec7c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43ec8a;}}
}
B43ec7e:L43ec7e:{c.instructions+=3;NFSU2_TR(0x43ec7e);
w4(R+0,u32(0-u32(r4(R+0))));
}
B43ec80:{NFSU2_TR(0x43ec80);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x100ull))));
}
B43ec86:{NFSU2_TR(0x43ec86);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ec8a:L43ec8a:{c.instructions+=2;NFSU2_TR(0x43ec8a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43ec8c:{NFSU2_TR(0x43ec8c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43ec95;}}
}
B43ec8e:L43ec8e:{c.instructions+=2;NFSU2_TR(0x43ec8e);
w4(R+12,u32(0x1ull));
}
B43ec93:{NFSU2_TR(0x43ec93);
{goto L43ec9c;}
}
B43ec95:L43ec95:{c.instructions+=2;NFSU2_TR(0x43ec95);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff7ull))));
}
B43ec98:{NFSU2_TR(0x43ec98);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ec9c:L43ec9c:{c.instructions+=2;NFSU2_TR(0x43ec9c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43ec9e:{NFSU2_TR(0x43ec9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43eca4;}}
}
B43eca0:L43eca0:{c.instructions+=1;NFSU2_TR(0x43eca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eca4:L43eca4:{c.instructions+=3;NFSU2_TR(0x43eca4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43eca6:{NFSU2_TR(0x43eca6);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43eca9:{NFSU2_TR(0x43eca9);
if(r1(R+518)){{goto L43ecb9;}}
}
B43ecab:L43ecab:{c.instructions+=3;NFSU2_TR(0x43ecab);
__builtin_memmove((R+4),gp(0x7eb3f2),1);
}
B43ecb1:{NFSU2_TR(0x43ecb1);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ecb3:{NFSU2_TR(0x43ecb3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43ecb9;}}
}
B43ecb5:L43ecb5:{c.instructions+=2;NFSU2_TR(0x43ecb5);
w1(R+4,u8(0x1ull));
}
B43ecb7:{NFSU2_TR(0x43ecb7);
{goto L43ecc0;}
}
B43ecb9:L43ecb9:{c.instructions+=2;NFSU2_TR(0x43ecb9);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B43ecbb:{NFSU2_TR(0x43ecbb);
{goto L43ecc0;}
}
B43ecc0:L43ecc0:{c.instructions+=5;NFSU2_TR(0x43ecc0);
__builtin_memmove((R+8),(R+12),4);
}
B43ecc2:{NFSU2_TR(0x43ecc2);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B43ecc3:{NFSU2_TR(0x43ecc3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ecc5:{NFSU2_TR(0x43ecc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ecc9:{NFSU2_TR(0x43ecc9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43eccf;}}
}
B43eccb:L43eccb:{c.instructions+=2;NFSU2_TR(0x43eccb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43eccd:{NFSU2_TR(0x43eccd);
if(r1(R+518)){{goto L43ed07;}}
}
B43eccf:L43eccf:{c.instructions+=2;NFSU2_TR(0x43eccf);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ecd1:{NFSU2_TR(0x43ecd1);
if(r1(R+518)){{goto L43ecee;}}
}
B43ecd3:L43ecd3:{c.instructions+=6;NFSU2_TR(0x43ecd3);
__builtin_memmove((R+8),gp(0x7eb3f1),2);
}
B43ecda:{NFSU2_TR(0x43ecda);
w4(R+12,u32(s32(s8(r1(R+9)))));
}
B43ecdd:{NFSU2_TR(0x43ecdd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43ecde:{NFSU2_TR(0x43ecde);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43ece0:{NFSU2_TR(0x43ece0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43ece4:{NFSU2_TR(0x43ece4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43ecee;}}
}
B43ece6:L43ece6:{c.instructions+=3;NFSU2_TR(0x43ece6);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+28)),r1(U+0));
}
B43ece8:{NFSU2_TR(0x43ece8);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B43ece9:{NFSU2_TR(0x43ece9);
w4(R+24,u32(0x1ull));
}
B43ecee:L43ecee:{c.instructions+=5;NFSU2_TR(0x43ecee);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B43ecf0:{NFSU2_TR(0x43ecf0);
u8 U[56];
w8(U+0,u64(r4(R+20)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43ecf0);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43ecf0);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B43ecf2:{NFSU2_TR(0x43ecf2);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B43ecf5:{NFSU2_TR(0x43ecf5);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43ecf8:{NFSU2_TR(0x43ecf8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43ed02;}}
}
B43ecfa:L43ecfa:{c.instructions+=2;NFSU2_TR(0x43ecfa);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))+u32(r1(U+4))));
}
B43ecfe:{NFSU2_TR(0x43ecfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43ed02:L43ed02:{c.instructions+=3;NFSU2_TR(0x43ed02);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+28)),r1(U+0));
}
B43ed04:{NFSU2_TR(0x43ed04);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B43ed05:{NFSU2_TR(0x43ed05);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ecc0u);}goto L43ecc0;}
}
B43ed07:L43ed07:{c.instructions+=6;NFSU2_TR(0x43ed07);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ed0b:{NFSU2_TR(0x43ed0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43ed12:{NFSU2_TR(0x43ed12);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B43ed14:{NFSU2_TR(0x43ed14);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ed17:{NFSU2_TR(0x43ed17);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ed1b:{NFSU2_TR(0x43ed1b);
if(r1(R+518)){{goto L43ed30;}}
}
B43ed1d:L43ed1d:{c.instructions+=2;NFSU2_TR(0x43ed1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ed1f:{NFSU2_TR(0x43ed1f);
if(r1(R+518)){{goto L43ed27;}}
}
B43ed21:L43ed21:{c.instructions+=2;NFSU2_TR(0x43ed21);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43ed25:{NFSU2_TR(0x43ed25);
if(r1(R+518)){{goto L43ed30;}}
}
B43ed27:L43ed27:{c.instructions+=4;NFSU2_TR(0x43ed27);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+28)),r1(U+0));
}
B43ed2a:{NFSU2_TR(0x43ed2a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B43ed2b:{NFSU2_TR(0x43ed2b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43ed2c:{NFSU2_TR(0x43ed2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ed30:L43ed30:{c.instructions+=3;NFSU2_TR(0x43ed30);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B43ed31:{NFSU2_TR(0x43ed31);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ed35:{NFSU2_TR(0x43ed35);
TAIL_STATIC(0x43f369u,43f);
}
B43ed3a:L43ed3a:{c.instructions+=2;NFSU2_TR(0x43ed3a);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x65ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43ed3f:{NFSU2_TR(0x43ed3f);
{goto L43ed46;}
}
B43ed41:L43ed41:{c.instructions+=1;NFSU2_TR(0x43ed41);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x45ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43ed46:L43ed46:{c.instructions+=13;NFSU2_TR(0x43ed46);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x800ull))));
}
B43ed4c:{NFSU2_TR(0x43ed4c);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ed53:{NFSU2_TR(0x43ed53);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B43ed55:{NFSU2_TR(0x43ed55);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B43ed58:{NFSU2_TR(0x43ed58);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B43ed5c:{NFSU2_TR(0x43ed5c);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ed63:{NFSU2_TR(0x43ed63);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ed67:{NFSU2_TR(0x43ed67);
__builtin_memmove((R+4),(R+0),4);
}
B43ed69:{NFSU2_TR(0x43ed69);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x400ull))));
}
B43ed6f:{NFSU2_TR(0x43ed6f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ff00000ull))));
}
B43ed75:{NFSU2_TR(0x43ed75);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ff00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43ed7b:{NFSU2_TR(0x43ed7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ed7f:{NFSU2_TR(0x43ed7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43edbd;}}
}
B43ed81:L43ed81:{c.instructions+=2;NFSU2_TR(0x43ed81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ed86:{NFSU2_TR(0x43ed86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ed8f;}}
}
B43ed88:L43ed88:{c.instructions+=2;NFSU2_TR(0x43ed88);
__builtin_memmove((R+0),gp(0x7eb3d8),4);
}
B43ed8d:{NFSU2_TR(0x43ed8d);
{goto L43eda7;}
}
B43ed8f:L43ed8f:{c.instructions+=2;NFSU2_TR(0x43ed8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ed94:{NFSU2_TR(0x43ed94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43eda2;}}
}
B43ed96:L43ed96:{c.instructions+=3;NFSU2_TR(0x43ed96);
__builtin_memmove((R+4),gp(0x7eb3dc),4);
}
B43ed9c:{NFSU2_TR(0x43ed9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43eda0:{NFSU2_TR(0x43eda0);
{goto L43edab;}
}
B43eda2:L43eda2:{c.instructions+=1;NFSU2_TR(0x43eda2);
__builtin_memmove((R+0),gp(0x7eb3e0),4);
}
B43eda7:L43eda7:{c.instructions+=1;NFSU2_TR(0x43eda7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43edab:L43edab:{c.instructions+=3;NFSU2_TR(0x43edab);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43edaf:{NFSU2_TR(0x43edaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43edb7:{NFSU2_TR(0x43edb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43f428u,43f);}
}
B43edbd:L43edbd:{c.instructions+=7;NFSU2_TR(0x43edbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43edc0:{NFSU2_TR(0x43edc0);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B43edc6:{NFSU2_TR(0x43edc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x45ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43edca:{NFSU2_TR(0x43edca);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w1(U+4,u8(0x30ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43edcf:{NFSU2_TR(0x43edcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43edd3:{NFSU2_TR(0x43edd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x45ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B43edd7:{NFSU2_TR(0x43edd7);
if(r1(R+518)){{goto L43edf8;}}
}
B43edd9:L43edd9:{c.instructions+=5;NFSU2_TR(0x43edd9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43eddb:{NFSU2_TR(0x43eddb);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B43ede1:{NFSU2_TR(0x43ede1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ede3:{NFSU2_TR(0x43ede3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43ede6:{NFSU2_TR(0x43ede6);
if(r1(R+514)){{goto L43edf8;}}
}
B43ede8:L43ede8:{c.instructions+=5;NFSU2_TR(0x43ede8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43edea:{NFSU2_TR(0x43edea);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x100ull))));
}
B43edf0:{NFSU2_TR(0x43edf0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43edf2:{NFSU2_TR(0x43edf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43edf6:{NFSU2_TR(0x43edf6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43edf8:L43edf8:{c.instructions+=2;NFSU2_TR(0x43edf8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43edfb:{NFSU2_TR(0x43edfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ee05;}}
}
B43edfd:L43edfd:{c.instructions+=1;NFSU2_TR(0x43edfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43ee05:L43ee05:{c.instructions+=5;NFSU2_TR(0x43ee05);
__builtin_memmove((R+0),(R+8),4);
}
B43ee07:{NFSU2_TR(0x43ee07);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43ee09:{NFSU2_TR(0x43ee09);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x800ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43ee0e:{NFSU2_TR(0x43ee0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ee12:{NFSU2_TR(0x43ee12);
if(r1(R+518)){{goto L43ee6c;}}
}
B43ee14:L43ee14:{c.instructions+=5;NFSU2_TR(0x43ee14);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43ee16:{NFSU2_TR(0x43ee16);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B43ee1c:{NFSU2_TR(0x43ee1c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ee1e:{NFSU2_TR(0x43ee1e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43ee21:{NFSU2_TR(0x43ee21);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43ee6c;}}
}
B43ee23:L43ee23:{c.instructions+=5;NFSU2_TR(0x43ee23);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43ee25:{NFSU2_TR(0x43ee25);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B43ee2b:{NFSU2_TR(0x43ee2b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ee2d:{NFSU2_TR(0x43ee2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ee30:{NFSU2_TR(0x43ee30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ee50;}}
}
B43ee32:L43ee32:{c.instructions+=9;NFSU2_TR(0x43ee32);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43ee34:{NFSU2_TR(0x43ee34);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B43ee35:{NFSU2_TR(0x43ee35);
{u32 ea_=u32(u32(7892568u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B43ee3b:{NFSU2_TR(0x43ee3b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43ee3d:{NFSU2_TR(0x43ee3d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43ee3f:{NFSU2_TR(0x43ee3f);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B43ee45:{NFSU2_TR(0x43ee45);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ee47:{NFSU2_TR(0x43ee47);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ee4a:{NFSU2_TR(0x43ee4a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ee32u);}goto L43ee32;}}
}
B43ee4c:L43ee4c:{c.instructions+=1;NFSU2_TR(0x43ee4c);
__builtin_memmove((R+16),(R+16),4);
}
B43ee50:L43ee50:{c.instructions+=9;NFSU2_TR(0x43ee50);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43ee52:{NFSU2_TR(0x43ee52);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B43ee53:{NFSU2_TR(0x43ee53);
{u32 ea_=u32(u32(7892560u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B43ee59:{NFSU2_TR(0x43ee59);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43ee5b:{NFSU2_TR(0x43ee5b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43ee5d:{NFSU2_TR(0x43ee5d);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B43ee63:{NFSU2_TR(0x43ee63);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ee65:{NFSU2_TR(0x43ee65);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43ee68:{NFSU2_TR(0x43ee68);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ee50u);}goto L43ee50;}}
}
B43ee6a:L43ee6a:{c.instructions+=1;NFSU2_TR(0x43ee6a);
{goto L43eea0;}
}
B43ee6c:L43ee6c:{c.instructions+=5;NFSU2_TR(0x43ee6c);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B43ee72:{NFSU2_TR(0x43ee72);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B43ee74:{NFSU2_TR(0x43ee74);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ee76:{NFSU2_TR(0x43ee76);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43ee79:{NFSU2_TR(0x43ee79);
if(r1(R+514)){{goto L43ee90;}}
}
B43ee7b:L43ee7b:{c.instructions+=1;NFSU2_TR(0x43ee7b);
{goto L43ee80;}
}
B43ee80:L43ee80:{c.instructions+=6;NFSU2_TR(0x43ee80);
{u32 ea_=u32(u32(7892560u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B43ee86:{NFSU2_TR(0x43ee86);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B43ee87:{NFSU2_TR(0x43ee87);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B43ee89:{NFSU2_TR(0x43ee89);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ee8b:{NFSU2_TR(0x43ee8b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43ee8e:{NFSU2_TR(0x43ee8e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ee80u);}goto L43ee80;}}
}
B43ee90:L43ee90:{c.instructions+=4;NFSU2_TR(0x43ee90);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B43ee92:{NFSU2_TR(0x43ee92);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ee94:{NFSU2_TR(0x43ee94);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ee97:{NFSU2_TR(0x43ee97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43eea0;}}
}
B43ee99:L43ee99:{c.instructions+=2;NFSU2_TR(0x43ee99);
{u32 ea_=u32(u32(7892568u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B43ee9f:{NFSU2_TR(0x43ee9f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B43eea0:L43eea0:{c.instructions+=5;NFSU2_TR(0x43eea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43eea4:{NFSU2_TR(0x43eea4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43eea9:{NFSU2_TR(0x43eea9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43eeac:{NFSU2_TR(0x43eeac);
__builtin_memmove((R+20),(R+12),4);
}
B43eeae:{NFSU2_TR(0x43eeae);
if(r1(R+518)){{goto L43eebf;}}
}
B43eeb0:L43eeb0:{c.instructions+=4;NFSU2_TR(0x43eeb0);
__builtin_memmove((R+4),gp(0x7eb3f2),1);
}
B43eeb6:{NFSU2_TR(0x43eeb6);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43eeb8:{NFSU2_TR(0x43eeb8);
u8 U[5];
w4(U+0,u32(u32(u32(0x2full))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43eebd:{NFSU2_TR(0x43eebd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43eec4;}}
}
B43eebf:L43eebf:{c.instructions+=1;NFSU2_TR(0x43eebf);
u8 U[5];
w4(U+0,u32(u32(u32(0x2full))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43eec4:L43eec4:{c.instructions+=2;NFSU2_TR(0x43eec4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43eec6:{NFSU2_TR(0x43eec6);
if(r1(R+518)){{goto L43eed4;}}
}
B43eec8:L43eec8:{c.instructions+=3;NFSU2_TR(0x43eec8);
__builtin_memmove((R+8),gp(0x7eb3f0),1);
}
B43eece:{NFSU2_TR(0x43eece);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43eed2:{NFSU2_TR(0x43eed2);
{goto L43eed9;}
}
B43eed4:L43eed4:{c.instructions+=1;NFSU2_TR(0x43eed4);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
w1(U+4,u8(0x2eull));
s1(u32(r4(U+0)),r1(U+4));
}
B43eed9:L43eed9:{c.instructions+=4;NFSU2_TR(0x43eed9);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B43eedf:{NFSU2_TR(0x43eedf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43eee1:{NFSU2_TR(0x43eee1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43eee4:{NFSU2_TR(0x43eee4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ef48;}}
}
B43eee6:L43eee6:{c.instructions+=3;NFSU2_TR(0x43eee6);
u8 U[5];
w4(U+0,u32(u32(u32(0x2full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43eeea:{NFSU2_TR(0x43eeea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43eeec:{NFSU2_TR(0x43eeec);
if(r1(R+518)){{goto L43ef0c;}}
}
B43eeee:L43eeee:{c.instructions+=6;NFSU2_TR(0x43eeee);
w4(R+4,u32(s32(s8(m1(0x7eb3f2)))));
}
B43eef5:{NFSU2_TR(0x43eef5);
__builtin_memmove((R+0),(R+20),4);
}
B43eef7:{NFSU2_TR(0x43eef7);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B43eef8:{NFSU2_TR(0x43eef8);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43eef8);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43eef8);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B43eefa:{NFSU2_TR(0x43eefa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43eefc:{NFSU2_TR(0x43eefc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ef0b;}}
}
B43eefe:L43eefe:{c.instructions+=2;NFSU2_TR(0x43eefe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43ef00:{NFSU2_TR(0x43ef00);
if(r1(R+518)){{goto L43ef0b;}}
}
B43ef02:L43ef02:{c.instructions+=3;NFSU2_TR(0x43ef02);
__builtin_memmove((R+8),gp(0x7eb3f1),1);
}
B43ef08:{NFSU2_TR(0x43ef08);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B43ef0a:{NFSU2_TR(0x43ef0a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43ef0b:L43ef0b:{c.instructions+=1;NFSU2_TR(0x43ef0b);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B43ef0c:L43ef0c:{c.instructions+=3;NFSU2_TR(0x43ef0c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43ef0e:{NFSU2_TR(0x43ef0e);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B43ef10:{NFSU2_TR(0x43ef10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ef15ull));
TAIL_STATIC(0x75bed4u,75b);
}
B43ef15:L43ef15:{c.instructions+=13;NFSU2_TR(0x43ef15);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B43ef18:{NFSU2_TR(0x43ef18);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ef1c:{NFSU2_TR(0x43ef1c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B43ef1e:{NFSU2_TR(0x43ef1e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43ef22:{NFSU2_TR(0x43ef22);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B43ef24:{NFSU2_TR(0x43ef24);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43ef25:{NFSU2_TR(0x43ef25);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43ef27:{NFSU2_TR(0x43ef27);
__asm__ volatile(".byte 0xde,0xea":::"memory");
}
B43ef29:{NFSU2_TR(0x43ef29);
{u32 ea_=u32(u32(7892568u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B43ef2f:{NFSU2_TR(0x43ef2f);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B43ef35:{NFSU2_TR(0x43ef35);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ef37:{NFSU2_TR(0x43ef37);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ef3a:{NFSU2_TR(0x43ef3a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43eee6u);}goto L43eee6;}}
}
B43ef3c:L43ef3c:{c.instructions+=4;NFSU2_TR(0x43ef3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x45ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43ef40:{NFSU2_TR(0x43ef40);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43ef42:{NFSU2_TR(0x43ef42);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43ef44:{NFSU2_TR(0x43ef44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ef4e;}}
}
B43ef46:L43ef46:{c.instructions+=1;NFSU2_TR(0x43ef46);
{goto L43ef4a;}
}
B43ef48:L43ef48:{c.instructions+=1;NFSU2_TR(0x43ef48);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43ef4a:L43ef4a:{c.instructions+=2;NFSU2_TR(0x43ef4a);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+24)),r1(U+0));
}
B43ef4d:{NFSU2_TR(0x43ef4d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43ef4e:L43ef4e:{c.instructions+=3;NFSU2_TR(0x43ef4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43ef52:{NFSU2_TR(0x43ef52);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ef54:{NFSU2_TR(0x43ef54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ef5e;}}
}
B43ef56:L43ef56:{c.instructions+=3;NFSU2_TR(0x43ef56);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43ef5a:{NFSU2_TR(0x43ef5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B43ef5c:{NFSU2_TR(0x43ef5c);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L43ef92;}}
}
B43ef5e:L43ef5e:{c.instructions+=5;NFSU2_TR(0x43ef5e);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43ef62:{NFSU2_TR(0x43ef62);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B43ef64:{NFSU2_TR(0x43ef64);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43ef65:{NFSU2_TR(0x43ef65);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ef67:{NFSU2_TR(0x43ef67);
if(r1(R+518)){{goto L43ef92;}}
}
B43ef69:L43ef69:{c.instructions+=3;NFSU2_TR(0x43ef69);
__builtin_memmove((R+20),(R+12),4);
}
B43ef6b:{NFSU2_TR(0x43ef6b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43ef6d:{NFSU2_TR(0x43ef6d);
__builtin_memmove((R+4),(R+4),4);
}
B43ef70:L43ef70:{c.instructions+=3;NFSU2_TR(0x43ef70);
{u32 ea_=u32(u32(7892560u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B43ef76:{NFSU2_TR(0x43ef76);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43ef78:{NFSU2_TR(0x43ef78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ef7dull));
TAIL_STATIC(0x75bed4u,75b);
}
B43ef7d:L43ef7d:{c.instructions+=9;NFSU2_TR(0x43ef7d);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B43ef80:{NFSU2_TR(0x43ef80);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B43ef82:{NFSU2_TR(0x43ef82);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ef86:{NFSU2_TR(0x43ef86);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B43ef88:{NFSU2_TR(0x43ef88);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43ef8c:{NFSU2_TR(0x43ef8c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43ef8d:{NFSU2_TR(0x43ef8d);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B43ef8e:{NFSU2_TR(0x43ef8e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43ef90:{NFSU2_TR(0x43ef90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ef70u);}goto L43ef70;}}
}
B43ef92:L43ef92:{c.instructions+=9;NFSU2_TR(0x43ef92);
{u32 ea_=u32(u32(7892560u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B43ef98:{NFSU2_TR(0x43ef98);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B43ef99:{NFSU2_TR(0x43ef99);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43ef9b:{NFSU2_TR(0x43ef9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ef9f:{NFSU2_TR(0x43ef9f);
{u32 ea_=u32(u32(7892552u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B43efa5:{NFSU2_TR(0x43efa5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43efa7:{NFSU2_TR(0x43efa7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43efa9:{NFSU2_TR(0x43efa9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43efac:{NFSU2_TR(0x43efac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43efea;}}
}
B43efae:L43efae:{c.instructions+=2;NFSU2_TR(0x43efae);
__builtin_memmove((R+8),gp(0x7eb3f1),1);
}
B43efb4:{NFSU2_TR(0x43efb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B43efb7:L43efb7:{c.instructions+=3;NFSU2_TR(0x43efb7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B43efb9:{NFSU2_TR(0x43efb9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43efbb:{NFSU2_TR(0x43efbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43efc3;}}
}
B43efbd:L43efbd:{c.instructions+=3;NFSU2_TR(0x43efbd);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+4)),r1(U+0));
}
B43efc0:{NFSU2_TR(0x43efc0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B43efc1:{NFSU2_TR(0x43efc1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43efb7u);}goto L43efb7;}
}
B43efc3:L43efc3:{c.instructions+=2;NFSU2_TR(0x43efc3);
u8 U[7];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43efc7:{NFSU2_TR(0x43efc7);
if(r1(R+518)){{goto L43efd5;}}
}
B43efc9:L43efc9:{c.instructions+=3;NFSU2_TR(0x43efc9);
u8 U[5];
w4(U+0,u32(u32(u32(0x2full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B43efcd:{NFSU2_TR(0x43efcd);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43efcf:{NFSU2_TR(0x43efcf);
if(r1(R+518)){{goto L43efd8;}}
}
B43efd1:L43efd1:{c.instructions+=2;NFSU2_TR(0x43efd1);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43efd3:{NFSU2_TR(0x43efd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43efd8;}}
}
B43efd5:L43efd5:{c.instructions+=2;NFSU2_TR(0x43efd5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B43efd6:{NFSU2_TR(0x43efd6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43efb7u);}goto L43efb7;}
}
B43efd8:L43efd8:{c.instructions+=4;NFSU2_TR(0x43efd8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+0,u8(u32(r1(U+0))+u32(u8(0x1ull))));
s1(u32(r4(R+4)),r1(U+0));
}
B43efda:{NFSU2_TR(0x43efda);
u8 U[4];
w4(U+0,u32(u32(u32(0x45ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43efde:{NFSU2_TR(0x43efde);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B43efe0:{NFSU2_TR(0x43efe0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L43efea;}}
}
B43efe2:L43efe2:{c.instructions+=2;NFSU2_TR(0x43efe2);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43efe6:{NFSU2_TR(0x43efe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43efea:L43efea:{c.instructions+=3;NFSU2_TR(0x43efea);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43efee:{NFSU2_TR(0x43efee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43eff0:{NFSU2_TR(0x43eff0);
if(r1(R+518)){TAIL_STATIC(0x43f064u,43f);}
}
B43eff2:L43eff2:{c.instructions+=5;NFSU2_TR(0x43eff2);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43eff6:{NFSU2_TR(0x43eff6);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B43eff8:{NFSU2_TR(0x43eff8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43eff9:{NFSU2_TR(0x43eff9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43effb:{NFSU2_TR(0x43effb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x43f004u,43f);}
}
B43effd:L43effd:{c.instructions+=2;NFSU2_TR(0x43effd);
w4(R+28,u32(0-u32(r4(R+28))));
}
B43efff:{NFSU2_TR(0x43efff);
u8 U[1];
w1(U+0,u8(0x2dull));
s1(u32(r4(R+24)),r1(U+0));
TAIL_STATIC(0x43f002u,43f);
}
XIT:NFSU2_TR_EXIT(0x43e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
