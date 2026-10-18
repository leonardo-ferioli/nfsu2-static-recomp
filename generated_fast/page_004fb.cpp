#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4be(u8* __restrict R,Cpu& c);
u32 body_4bf(u8* __restrict R,Cpu& c);
u32 body_4c5(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4e8(u8* __restrict R,Cpu& c);
u32 body_4ec(u8* __restrict R,Cpu& c);
u32 body_4f1(u8* __restrict R,Cpu& c);
u32 body_4f2(u8* __restrict R,Cpu& c);
u32 body_4f3(u8* __restrict R,Cpu& c);
u32 body_4f4(u8* __restrict R,Cpu& c);
u32 body_4f9(u8* __restrict R,Cpu& c);
u32 body_4fc(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_585(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4fb,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4fb,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4fb(u8* __restrict R,Cpu& c);
u32 page_4fb(Cpu& c){return body_4fb(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4fb(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4fb001:goto L4fb001;
case 0x4fb007:c.instructions+=4;goto B4fb007;
case 0x4fb00d:c.instructions+=3;goto B4fb00d;
case 0x4fb00f:c.instructions+=2;goto B4fb00f;
case 0x4fb012:c.instructions+=1;goto B4fb012;
case 0x4fb018:goto L4fb018;
case 0x4fb01a:c.instructions+=7;goto B4fb01a;
case 0x4fb01c:c.instructions+=6;goto B4fb01c;
case 0x4fb021:c.instructions+=5;goto B4fb021;
case 0x4fb026:c.instructions+=4;goto B4fb026;
case 0x4fb028:c.instructions+=3;goto B4fb028;
case 0x4fb02d:c.instructions+=2;goto B4fb02d;
case 0x4fb02f:c.instructions+=1;goto B4fb02f;
case 0x4fb034:goto L4fb034;
case 0x4fb037:c.instructions+=3;goto B4fb037;
case 0x4fb03c:c.instructions+=2;goto B4fb03c;
case 0x4fb03d:c.instructions+=1;goto B4fb03d;
case 0x4fb042:goto L4fb042;
case 0x4fb043:c.instructions+=1;goto B4fb043;
case 0x4fb048:goto L4fb048;
case 0x4fb04b:c.instructions+=2;goto B4fb04b;
case 0x4fb04d:c.instructions+=1;goto B4fb04d;
case 0x4fb04f:goto L4fb04f;
case 0x4fb054:c.instructions+=9;goto B4fb054;
case 0x4fb05a:c.instructions+=8;goto B4fb05a;
case 0x4fb05c:c.instructions+=7;goto B4fb05c;
case 0x4fb060:c.instructions+=6;goto B4fb060;
case 0x4fb064:c.instructions+=5;goto B4fb064;
case 0x4fb06a:c.instructions+=4;goto B4fb06a;
case 0x4fb070:c.instructions+=3;goto B4fb070;
case 0x4fb072:c.instructions+=2;goto B4fb072;
case 0x4fb075:c.instructions+=1;goto B4fb075;
case 0x4fb07b:goto L4fb07b;
case 0x4fb07d:c.instructions+=7;goto B4fb07d;
case 0x4fb07f:c.instructions+=6;goto B4fb07f;
case 0x4fb084:c.instructions+=5;goto B4fb084;
case 0x4fb089:c.instructions+=4;goto B4fb089;
case 0x4fb08b:c.instructions+=3;goto B4fb08b;
case 0x4fb090:c.instructions+=2;goto B4fb090;
case 0x4fb092:c.instructions+=1;goto B4fb092;
case 0x4fb097:goto L4fb097;
case 0x4fb09a:c.instructions+=3;goto B4fb09a;
case 0x4fb09f:c.instructions+=2;goto B4fb09f;
case 0x4fb0a0:c.instructions+=1;goto B4fb0a0;
case 0x4fb0a5:goto L4fb0a5;
case 0x4fb0a6:c.instructions+=1;goto B4fb0a6;
case 0x4fb0ab:goto L4fb0ab;
case 0x4fb0ae:c.instructions+=2;goto B4fb0ae;
case 0x4fb0b0:c.instructions+=1;goto B4fb0b0;
case 0x4fb0b2:goto L4fb0b2;
case 0x4fb0b7:c.instructions+=9;goto B4fb0b7;
case 0x4fb0bd:c.instructions+=8;goto B4fb0bd;
case 0x4fb0bf:c.instructions+=7;goto B4fb0bf;
case 0x4fb0c3:c.instructions+=6;goto B4fb0c3;
case 0x4fb0c7:c.instructions+=5;goto B4fb0c7;
case 0x4fb0cd:c.instructions+=4;goto B4fb0cd;
case 0x4fb0d3:c.instructions+=3;goto B4fb0d3;
case 0x4fb0d5:c.instructions+=2;goto B4fb0d5;
case 0x4fb0d8:c.instructions+=1;goto B4fb0d8;
case 0x4fb0de:goto L4fb0de;
case 0x4fb0e0:c.instructions+=7;goto B4fb0e0;
case 0x4fb0e2:c.instructions+=6;goto B4fb0e2;
case 0x4fb0e7:c.instructions+=5;goto B4fb0e7;
case 0x4fb0ec:c.instructions+=4;goto B4fb0ec;
case 0x4fb0ee:c.instructions+=3;goto B4fb0ee;
case 0x4fb0f3:c.instructions+=2;goto B4fb0f3;
case 0x4fb0f5:c.instructions+=1;goto B4fb0f5;
case 0x4fb0fa:goto L4fb0fa;
case 0x4fb100:c.instructions+=2;goto B4fb100;
case 0x4fb103:c.instructions+=1;goto B4fb103;
case 0x4fb105:goto L4fb105;
case 0x4fb108:c.instructions+=1;goto B4fb108;
case 0x4fb10a:goto L4fb10a;
case 0x4fb10d:c.instructions+=3;goto B4fb10d;
case 0x4fb10e:c.instructions+=2;goto B4fb10e;
case 0x4fb113:c.instructions+=1;goto B4fb113;
case 0x4fb115:goto L4fb115;
case 0x4fb118:c.instructions+=2;goto B4fb118;
case 0x4fb119:c.instructions+=1;goto B4fb119;
case 0x4fb11e:goto L4fb11e;
case 0x4fb123:goto L4fb123;
case 0x4fb126:goto L4fb126;
case 0x4fb12a:c.instructions+=2;goto B4fb12a;
case 0x4fb12b:c.instructions+=1;goto B4fb12b;
case 0x4fb130:goto L4fb130;
case 0x4fb134:c.instructions+=5;goto B4fb134;
case 0x4fb13a:c.instructions+=4;goto B4fb13a;
case 0x4fb13d:c.instructions+=3;goto B4fb13d;
case 0x4fb13f:c.instructions+=2;goto B4fb13f;
case 0x4fb142:c.instructions+=1;goto B4fb142;
case 0x4fb144:goto L4fb144;
case 0x4fb148:c.instructions+=4;goto B4fb148;
case 0x4fb14e:c.instructions+=3;goto B4fb14e;
case 0x4fb150:c.instructions+=2;goto B4fb150;
case 0x4fb153:c.instructions+=1;goto B4fb153;
case 0x4fb155:goto L4fb155;
case 0x4fb158:c.instructions+=3;goto B4fb158;
case 0x4fb159:c.instructions+=2;goto B4fb159;
case 0x4fb15e:c.instructions+=1;goto B4fb15e;
case 0x4fb163:goto L4fb163;
case 0x4fb166:c.instructions+=6;goto B4fb166;
case 0x4fb167:c.instructions+=5;goto B4fb167;
case 0x4fb168:c.instructions+=4;goto B4fb168;
case 0x4fb169:c.instructions+=3;goto B4fb169;
case 0x4fb16a:c.instructions+=2;goto B4fb16a;
case 0x4fb16d:c.instructions+=1;goto B4fb16d;
case 0x4fb16e:goto L4fb16e;
case 0x4fb172:c.instructions+=4;goto B4fb172;
case 0x4fb178:c.instructions+=3;goto B4fb178;
case 0x4fb17a:c.instructions+=2;goto B4fb17a;
case 0x4fb17d:c.instructions+=1;goto B4fb17d;
case 0x4fb17f:goto L4fb17f;
case 0x4fb182:c.instructions+=3;goto B4fb182;
case 0x4fb183:c.instructions+=2;goto B4fb183;
case 0x4fb188:c.instructions+=1;goto B4fb188;
case 0x4fb18d:goto L4fb18d;
case 0x4fb190:goto L4fb190;
case 0x4fb191:c.instructions+=5;goto B4fb191;
case 0x4fb192:c.instructions+=4;goto B4fb192;
case 0x4fb193:c.instructions+=3;goto B4fb193;
case 0x4fb194:c.instructions+=2;goto B4fb194;
case 0x4fb197:c.instructions+=1;goto B4fb197;
case 0x4fb1a0:goto L4fb1a0;
case 0x4fb1a2:c.instructions+=7;goto B4fb1a2;
case 0x4fb1a7:c.instructions+=6;goto B4fb1a7;
case 0x4fb1ad:c.instructions+=5;goto B4fb1ad;
case 0x4fb1ae:c.instructions+=4;goto B4fb1ae;
case 0x4fb1b5:c.instructions+=3;goto B4fb1b5;
case 0x4fb1b6:c.instructions+=2;goto B4fb1b6;
case 0x4fb1bb:c.instructions+=1;goto B4fb1bb;
case 0x4fb1c0:goto L4fb1c0;
case 0x4fb1c3:c.instructions+=4;goto B4fb1c3;
case 0x4fb1c7:c.instructions+=3;goto B4fb1c7;
case 0x4fb1c9:c.instructions+=2;goto B4fb1c9;
case 0x4fb1d1:c.instructions+=1;goto B4fb1d1;
case 0x4fb1d3:goto L4fb1d3;
case 0x4fb1d7:c.instructions+=3;goto B4fb1d7;
case 0x4fb1d8:c.instructions+=2;goto B4fb1d8;
case 0x4fb1da:c.instructions+=1;goto B4fb1da;
case 0x4fb1df:goto L4fb1df;
case 0x4fb1e3:c.instructions+=3;goto B4fb1e3;
case 0x4fb1ea:c.instructions+=2;goto B4fb1ea;
case 0x4fb1ed:c.instructions+=1;goto B4fb1ed;
case 0x4fb1ee:goto L4fb1ee;
case 0x4fb1f2:c.instructions+=4;goto B4fb1f2;
case 0x4fb1f4:c.instructions+=3;goto B4fb1f4;
case 0x4fb1fb:c.instructions+=2;goto B4fb1fb;
case 0x4fb1fe:c.instructions+=1;goto B4fb1fe;
case 0x4fb200:goto L4fb200;
case 0x4fb202:c.instructions+=7;goto B4fb202;
case 0x4fb207:c.instructions+=6;goto B4fb207;
case 0x4fb20d:c.instructions+=5;goto B4fb20d;
case 0x4fb20e:c.instructions+=4;goto B4fb20e;
case 0x4fb215:c.instructions+=3;goto B4fb215;
case 0x4fb216:c.instructions+=2;goto B4fb216;
case 0x4fb21b:c.instructions+=1;goto B4fb21b;
case 0x4fb220:goto L4fb220;
case 0x4fb223:c.instructions+=4;goto B4fb223;
case 0x4fb227:c.instructions+=3;goto B4fb227;
case 0x4fb229:c.instructions+=2;goto B4fb229;
case 0x4fb231:c.instructions+=1;goto B4fb231;
case 0x4fb233:goto L4fb233;
case 0x4fb237:c.instructions+=3;goto B4fb237;
case 0x4fb238:c.instructions+=2;goto B4fb238;
case 0x4fb23a:c.instructions+=1;goto B4fb23a;
case 0x4fb23f:goto L4fb23f;
case 0x4fb243:c.instructions+=3;goto B4fb243;
case 0x4fb24a:c.instructions+=2;goto B4fb24a;
case 0x4fb24d:c.instructions+=1;goto B4fb24d;
case 0x4fb24e:goto L4fb24e;
case 0x4fb252:c.instructions+=4;goto B4fb252;
case 0x4fb254:c.instructions+=3;goto B4fb254;
case 0x4fb25b:c.instructions+=2;goto B4fb25b;
case 0x4fb25e:c.instructions+=1;goto B4fb25e;
case 0x4fb260:goto L4fb260;
case 0x4fb262:c.instructions+=7;goto B4fb262;
case 0x4fb267:c.instructions+=6;goto B4fb267;
case 0x4fb26d:c.instructions+=5;goto B4fb26d;
case 0x4fb26e:c.instructions+=4;goto B4fb26e;
case 0x4fb275:c.instructions+=3;goto B4fb275;
case 0x4fb276:c.instructions+=2;goto B4fb276;
case 0x4fb27b:c.instructions+=1;goto B4fb27b;
case 0x4fb280:goto L4fb280;
case 0x4fb283:c.instructions+=4;goto B4fb283;
case 0x4fb287:c.instructions+=3;goto B4fb287;
case 0x4fb289:c.instructions+=2;goto B4fb289;
case 0x4fb291:c.instructions+=1;goto B4fb291;
case 0x4fb293:goto L4fb293;
case 0x4fb297:c.instructions+=3;goto B4fb297;
case 0x4fb298:c.instructions+=2;goto B4fb298;
case 0x4fb29a:c.instructions+=1;goto B4fb29a;
case 0x4fb29f:goto L4fb29f;
case 0x4fb2a3:c.instructions+=3;goto B4fb2a3;
case 0x4fb2aa:c.instructions+=2;goto B4fb2aa;
case 0x4fb2ad:c.instructions+=1;goto B4fb2ad;
case 0x4fb2ae:goto L4fb2ae;
case 0x4fb2b2:c.instructions+=4;goto B4fb2b2;
case 0x4fb2b4:c.instructions+=3;goto B4fb2b4;
case 0x4fb2bb:c.instructions+=2;goto B4fb2bb;
case 0x4fb2be:c.instructions+=1;goto B4fb2be;
case 0x4fb2c0:goto L4fb2c0;
case 0x4fb2c2:c.instructions+=7;goto B4fb2c2;
case 0x4fb2c7:c.instructions+=6;goto B4fb2c7;
case 0x4fb2cd:c.instructions+=5;goto B4fb2cd;
case 0x4fb2ce:c.instructions+=4;goto B4fb2ce;
case 0x4fb2d5:c.instructions+=3;goto B4fb2d5;
case 0x4fb2d6:c.instructions+=2;goto B4fb2d6;
case 0x4fb2db:c.instructions+=1;goto B4fb2db;
case 0x4fb2e0:goto L4fb2e0;
case 0x4fb2e3:c.instructions+=4;goto B4fb2e3;
case 0x4fb2e7:c.instructions+=3;goto B4fb2e7;
case 0x4fb2e9:c.instructions+=2;goto B4fb2e9;
case 0x4fb2f1:c.instructions+=1;goto B4fb2f1;
case 0x4fb2f3:goto L4fb2f3;
case 0x4fb2f7:c.instructions+=3;goto B4fb2f7;
case 0x4fb2f8:c.instructions+=2;goto B4fb2f8;
case 0x4fb2fa:c.instructions+=1;goto B4fb2fa;
case 0x4fb2ff:goto L4fb2ff;
case 0x4fb303:c.instructions+=3;goto B4fb303;
case 0x4fb30a:c.instructions+=2;goto B4fb30a;
case 0x4fb30d:c.instructions+=1;goto B4fb30d;
case 0x4fb30e:goto L4fb30e;
case 0x4fb312:c.instructions+=4;goto B4fb312;
case 0x4fb314:c.instructions+=3;goto B4fb314;
case 0x4fb31b:c.instructions+=2;goto B4fb31b;
case 0x4fb31e:c.instructions+=1;goto B4fb31e;
case 0x4fb320:goto L4fb320;
case 0x4fb322:c.instructions+=12;goto B4fb322;
case 0x4fb327:c.instructions+=11;goto B4fb327;
case 0x4fb32d:c.instructions+=10;goto B4fb32d;
case 0x4fb32e:c.instructions+=9;goto B4fb32e;
case 0x4fb335:c.instructions+=8;goto B4fb335;
case 0x4fb336:c.instructions+=7;goto B4fb336;
case 0x4fb33a:c.instructions+=6;goto B4fb33a;
case 0x4fb33b:c.instructions+=5;goto B4fb33b;
case 0x4fb33c:c.instructions+=4;goto B4fb33c;
case 0x4fb33e:c.instructions+=3;goto B4fb33e;
case 0x4fb33f:c.instructions+=2;goto B4fb33f;
case 0x4fb343:c.instructions+=1;goto B4fb343;
case 0x4fb348:goto L4fb348;
case 0x4fb34a:c.instructions+=7;goto B4fb34a;
case 0x4fb34e:c.instructions+=6;goto B4fb34e;
case 0x4fb354:c.instructions+=5;goto B4fb354;
case 0x4fb357:c.instructions+=4;goto B4fb357;
case 0x4fb35c:c.instructions+=3;goto B4fb35c;
case 0x4fb35d:c.instructions+=2;goto B4fb35d;
case 0x4fb363:c.instructions+=1;goto B4fb363;
case 0x4fb368:goto L4fb368;
case 0x4fb369:c.instructions+=1;goto B4fb369;
case 0x4fb36e:goto L4fb36e;
case 0x4fb374:c.instructions+=4;goto B4fb374;
case 0x4fb377:c.instructions+=3;goto B4fb377;
case 0x4fb378:c.instructions+=2;goto B4fb378;
case 0x4fb37a:c.instructions+=1;goto B4fb37a;
case 0x4fb37f:goto L4fb37f;
case 0x4fb382:c.instructions+=4;goto B4fb382;
case 0x4fb387:c.instructions+=3;goto B4fb387;
case 0x4fb38c:c.instructions+=2;goto B4fb38c;
case 0x4fb38d:c.instructions+=1;goto B4fb38d;
case 0x4fb392:goto L4fb392;
case 0x4fb395:c.instructions+=4;goto B4fb395;
case 0x4fb39a:c.instructions+=3;goto B4fb39a;
case 0x4fb39f:c.instructions+=2;goto B4fb39f;
case 0x4fb3a0:c.instructions+=1;goto B4fb3a0;
case 0x4fb3a5:goto L4fb3a5;
case 0x4fb3a8:c.instructions+=2;goto B4fb3a8;
case 0x4fb3ad:c.instructions+=1;goto B4fb3ad;
case 0x4fb3b2:goto L4fb3b2;
case 0x4fb3b3:c.instructions+=2;goto B4fb3b3;
case 0x4fb3b4:c.instructions+=1;goto B4fb3b4;
case 0x4fb3b9:goto L4fb3b9;
case 0x4fb3ba:c.instructions+=1;goto B4fb3ba;
case 0x4fb3bf:goto L4fb3bf;
case 0x4fb3c2:c.instructions+=2;goto B4fb3c2;
case 0x4fb3c7:c.instructions+=1;goto B4fb3c7;
case 0x4fb3cc:goto L4fb3cc;
case 0x4fb3cd:c.instructions+=2;goto B4fb3cd;
case 0x4fb3ce:c.instructions+=1;goto B4fb3ce;
case 0x4fb3d3:goto L4fb3d3;
case 0x4fb3d4:c.instructions+=1;goto B4fb3d4;
case 0x4fb3d9:goto L4fb3d9;
case 0x4fb3dc:c.instructions+=2;goto B4fb3dc;
case 0x4fb3e1:c.instructions+=1;goto B4fb3e1;
case 0x4fb3e6:goto L4fb3e6;
case 0x4fb3e7:c.instructions+=2;goto B4fb3e7;
case 0x4fb3e8:c.instructions+=1;goto B4fb3e8;
case 0x4fb3ed:goto L4fb3ed;
case 0x4fb3f0:c.instructions+=2;goto B4fb3f0;
case 0x4fb3f1:c.instructions+=1;goto B4fb3f1;
case 0x4fb3f6:goto L4fb3f6;
case 0x4fb3f9:c.instructions+=2;goto B4fb3f9;
case 0x4fb3fe:c.instructions+=1;goto B4fb3fe;
case 0x4fb403:goto L4fb403;
case 0x4fb404:c.instructions+=2;goto B4fb404;
case 0x4fb405:c.instructions+=1;goto B4fb405;
case 0x4fb40a:goto L4fb40a;
case 0x4fb40b:c.instructions+=1;goto B4fb40b;
case 0x4fb410:goto L4fb410;
case 0x4fb413:c.instructions+=4;goto B4fb413;
case 0x4fb416:c.instructions+=3;goto B4fb416;
case 0x4fb41b:c.instructions+=2;goto B4fb41b;
case 0x4fb420:c.instructions+=1;goto B4fb420;
case 0x4fb425:goto L4fb425;
case 0x4fb426:c.instructions+=2;goto B4fb426;
case 0x4fb427:c.instructions+=1;goto B4fb427;
case 0x4fb42c:goto L4fb42c;
case 0x4fb42f:c.instructions+=2;goto B4fb42f;
case 0x4fb430:c.instructions+=1;goto B4fb430;
case 0x4fb435:goto L4fb435;
case 0x4fb438:c.instructions+=4;goto B4fb438;
case 0x4fb43d:c.instructions+=3;goto B4fb43d;
case 0x4fb442:c.instructions+=2;goto B4fb442;
case 0x4fb443:c.instructions+=1;goto B4fb443;
case 0x4fb448:goto L4fb448;
case 0x4fb44b:c.instructions+=4;goto B4fb44b;
case 0x4fb44e:c.instructions+=3;goto B4fb44e;
case 0x4fb453:c.instructions+=2;goto B4fb453;
case 0x4fb458:c.instructions+=1;goto B4fb458;
case 0x4fb45d:goto L4fb45d;
case 0x4fb45e:c.instructions+=2;goto B4fb45e;
case 0x4fb45f:c.instructions+=1;goto B4fb45f;
case 0x4fb464:goto L4fb464;
case 0x4fb467:c.instructions+=2;goto B4fb467;
case 0x4fb468:c.instructions+=1;goto B4fb468;
case 0x4fb46d:goto L4fb46d;
case 0x4fb470:c.instructions+=4;goto B4fb470;
case 0x4fb475:c.instructions+=3;goto B4fb475;
case 0x4fb47a:c.instructions+=2;goto B4fb47a;
case 0x4fb47b:c.instructions+=1;goto B4fb47b;
case 0x4fb480:goto L4fb480;
case 0x4fb483:c.instructions+=4;goto B4fb483;
case 0x4fb488:c.instructions+=3;goto B4fb488;
case 0x4fb48d:c.instructions+=2;goto B4fb48d;
case 0x4fb48e:c.instructions+=1;goto B4fb48e;
case 0x4fb493:goto L4fb493;
case 0x4fb499:c.instructions+=9;goto B4fb499;
case 0x4fb49c:c.instructions+=8;goto B4fb49c;
case 0x4fb4a2:c.instructions+=7;goto B4fb4a2;
case 0x4fb4a6:c.instructions+=6;goto B4fb4a6;
case 0x4fb4a7:c.instructions+=5;goto B4fb4a7;
case 0x4fb4a9:c.instructions+=4;goto B4fb4a9;
case 0x4fb4aa:c.instructions+=3;goto B4fb4aa;
case 0x4fb4b1:c.instructions+=2;goto B4fb4b1;
case 0x4fb4b4:c.instructions+=1;goto B4fb4b4;
case 0x4fb4c0:goto L4fb4c0;
case 0x4fb4c2:c.instructions+=13;goto B4fb4c2;
case 0x4fb4c7:c.instructions+=12;goto B4fb4c7;
case 0x4fb4cd:c.instructions+=11;goto B4fb4cd;
case 0x4fb4ce:c.instructions+=10;goto B4fb4ce;
case 0x4fb4d5:c.instructions+=9;goto B4fb4d5;
case 0x4fb4d6:c.instructions+=8;goto B4fb4d6;
case 0x4fb4da:c.instructions+=7;goto B4fb4da;
case 0x4fb4db:c.instructions+=6;goto B4fb4db;
case 0x4fb4dc:c.instructions+=5;goto B4fb4dc;
case 0x4fb4dd:c.instructions+=4;goto B4fb4dd;
case 0x4fb4df:c.instructions+=3;goto B4fb4df;
case 0x4fb4e0:c.instructions+=2;goto B4fb4e0;
case 0x4fb4e4:c.instructions+=1;goto B4fb4e4;
case 0x4fb4e9:goto L4fb4e9;
case 0x4fb4ec:c.instructions+=12;goto B4fb4ec;
case 0x4fb4ee:c.instructions+=11;goto B4fb4ee;
case 0x4fb4f0:c.instructions+=10;goto B4fb4f0;
case 0x4fb4f1:c.instructions+=9;goto B4fb4f1;
case 0x4fb4f2:c.instructions+=8;goto B4fb4f2;
case 0x4fb4f4:c.instructions+=7;goto B4fb4f4;
case 0x4fb4f9:c.instructions+=6;goto B4fb4f9;
case 0x4fb4fe:c.instructions+=5;goto B4fb4fe;
case 0x4fb4ff:c.instructions+=4;goto B4fb4ff;
case 0x4fb502:c.instructions+=3;goto B4fb502;
case 0x4fb506:c.instructions+=2;goto B4fb506;
case 0x4fb50c:c.instructions+=1;goto B4fb50c;
case 0x4fb511:goto L4fb511;
case 0x4fb517:c.instructions+=5;goto B4fb517;
case 0x4fb51d:c.instructions+=4;goto B4fb51d;
case 0x4fb523:c.instructions+=3;goto B4fb523;
case 0x4fb529:c.instructions+=2;goto B4fb529;
case 0x4fb52f:c.instructions+=1;goto B4fb52f;
case 0x4fb534:goto L4fb534;
case 0x4fb53a:c.instructions+=11;goto B4fb53a;
case 0x4fb540:c.instructions+=10;goto B4fb540;
case 0x4fb546:c.instructions+=9;goto B4fb546;
case 0x4fb54c:c.instructions+=8;goto B4fb54c;
case 0x4fb552:c.instructions+=7;goto B4fb552;
case 0x4fb554:c.instructions+=6;goto B4fb554;
case 0x4fb557:c.instructions+=5;goto B4fb557;
case 0x4fb559:c.instructions+=4;goto B4fb559;
case 0x4fb55f:c.instructions+=3;goto B4fb55f;
case 0x4fb565:c.instructions+=2;goto B4fb565;
case 0x4fb56a:c.instructions+=1;goto B4fb56a;
case 0x4fb570:goto L4fb570;
case 0x4fb572:goto L4fb572;
case 0x4fb574:c.instructions+=2;goto B4fb574;
case 0x4fb579:c.instructions+=1;goto B4fb579;
case 0x4fb57e:goto L4fb57e;
case 0x4fb583:goto L4fb583;
case 0x4fb585:c.instructions+=1;goto B4fb585;
case 0x4fb587:goto L4fb587;
case 0x4fb58c:c.instructions+=3;goto B4fb58c;
case 0x4fb592:c.instructions+=2;goto B4fb592;
case 0x4fb593:c.instructions+=1;goto B4fb593;
case 0x4fb595:goto L4fb595;
case 0x4fb59a:c.instructions+=2;goto B4fb59a;
case 0x4fb5a0:c.instructions+=1;goto B4fb5a0;
case 0x4fb5a1:goto L4fb5a1;
case 0x4fb5a6:goto L4fb5a6;
case 0x4fb5a9:c.instructions+=1;goto B4fb5a9;
case 0x4fb5ae:goto L4fb5ae;
case 0x4fb5b0:c.instructions+=1;goto B4fb5b0;
case 0x4fb5b6:goto L4fb5b6;
case 0x4fb5b7:c.instructions+=3;goto B4fb5b7;
case 0x4fb5b8:c.instructions+=2;goto B4fb5b8;
case 0x4fb5bd:c.instructions+=1;goto B4fb5bd;
case 0x4fb5c2:goto L4fb5c2;
case 0x4fb5c5:c.instructions+=2;goto B4fb5c5;
case 0x4fb5c8:c.instructions+=1;goto B4fb5c8;
case 0x4fb5ca:goto L4fb5ca;
case 0x4fb5cf:goto L4fb5cf;
case 0x4fb5d1:c.instructions+=2;goto B4fb5d1;
case 0x4fb5d7:c.instructions+=1;goto B4fb5d7;
case 0x4fb5d9:goto L4fb5d9;
case 0x4fb5db:c.instructions+=2;goto B4fb5db;
case 0x4fb5e0:c.instructions+=1;goto B4fb5e0;
case 0x4fb5e5:goto L4fb5e5;
case 0x4fb5e8:c.instructions+=2;goto B4fb5e8;
case 0x4fb5ed:c.instructions+=1;goto B4fb5ed;
case 0x4fb5f2:goto L4fb5f2;
case 0x4fb5f3:c.instructions+=5;goto B4fb5f3;
case 0x4fb5f8:c.instructions+=4;goto B4fb5f8;
case 0x4fb5fd:c.instructions+=3;goto B4fb5fd;
case 0x4fb602:c.instructions+=2;goto B4fb602;
case 0x4fb603:c.instructions+=1;goto B4fb603;
case 0x4fb608:goto L4fb608;
case 0x4fb60e:c.instructions+=7;goto B4fb60e;
case 0x4fb614:c.instructions+=6;goto B4fb614;
case 0x4fb617:c.instructions+=5;goto B4fb617;
case 0x4fb61d:c.instructions+=4;goto B4fb61d;
case 0x4fb623:c.instructions+=3;goto B4fb623;
case 0x4fb629:c.instructions+=2;goto B4fb629;
case 0x4fb62f:c.instructions+=1;goto B4fb62f;
case 0x4fb634:goto L4fb634;
case 0x4fb63a:c.instructions+=1;goto B4fb63a;
case 0x4fb63c:goto L4fb63c;
case 0x4fb63f:c.instructions+=2;goto B4fb63f;
case 0x4fb644:c.instructions+=1;goto B4fb644;
case 0x4fb649:goto L4fb649;
case 0x4fb64a:c.instructions+=5;goto B4fb64a;
case 0x4fb64f:c.instructions+=4;goto B4fb64f;
case 0x4fb654:c.instructions+=3;goto B4fb654;
case 0x4fb659:c.instructions+=2;goto B4fb659;
case 0x4fb65a:c.instructions+=1;goto B4fb65a;
case 0x4fb65f:goto L4fb65f;
case 0x4fb662:goto L4fb662;
case 0x4fb666:c.instructions+=7;goto B4fb666;
case 0x4fb667:c.instructions+=6;goto B4fb667;
case 0x4fb669:c.instructions+=5;goto B4fb669;
case 0x4fb66a:c.instructions+=4;goto B4fb66a;
case 0x4fb66b:c.instructions+=3;goto B4fb66b;
case 0x4fb672:c.instructions+=2;goto B4fb672;
case 0x4fb675:c.instructions+=1;goto B4fb675;
case 0x4fb680:goto L4fb680;
case 0x4fb684:c.instructions+=5;goto B4fb684;
case 0x4fb689:c.instructions+=4;goto B4fb689;
case 0x4fb68a:c.instructions+=3;goto B4fb68a;
case 0x4fb68b:c.instructions+=2;goto B4fb68b;
case 0x4fb68d:c.instructions+=1;goto B4fb68d;
case 0x4fb693:goto L4fb693;
case 0x4fb699:goto L4fb699;
case 0x4fb69e:c.instructions+=1;goto B4fb69e;
case 0x4fb6a4:goto L4fb6a4;
case 0x4fb6a6:goto L4fb6a6;
case 0x4fb6ab:c.instructions+=1;goto B4fb6ab;
case 0x4fb6ad:goto L4fb6ad;
case 0x4fb6b2:c.instructions+=1;goto B4fb6b2;
case 0x4fb6b8:goto L4fb6b8;
case 0x4fb6bb:c.instructions+=2;goto B4fb6bb;
case 0x4fb6c0:c.instructions+=1;goto B4fb6c0;
case 0x4fb6c5:goto L4fb6c5;
case 0x4fb6c6:c.instructions+=2;goto B4fb6c6;
case 0x4fb6c7:c.instructions+=1;goto B4fb6c7;
case 0x4fb6cc:goto L4fb6cc;
case 0x4fb6cf:c.instructions+=3;goto B4fb6cf;
case 0x4fb6d0:c.instructions+=2;goto B4fb6d0;
case 0x4fb6d1:c.instructions+=1;goto B4fb6d1;
case 0x4fb6d4:goto L4fb6d4;
case 0x4fb6d7:c.instructions+=3;goto B4fb6d7;
case 0x4fb6d9:c.instructions+=2;goto B4fb6d9;
case 0x4fb6e0:c.instructions+=1;goto B4fb6e0;
case 0x4fb6e5:goto L4fb6e5;
case 0x4fb6e6:c.instructions+=2;goto B4fb6e6;
case 0x4fb6e8:c.instructions+=1;goto B4fb6e8;
case 0x4fb6ed:goto L4fb6ed;
case 0x4fb6ef:c.instructions+=2;goto B4fb6ef;
case 0x4fb6f1:c.instructions+=1;goto B4fb6f1;
case 0x4fb6f7:goto L4fb6f7;
case 0x4fb6fa:c.instructions+=2;goto B4fb6fa;
case 0x4fb6fc:c.instructions+=1;goto B4fb6fc;
case 0x4fb702:goto L4fb702;
case 0x4fb705:c.instructions+=3;goto B4fb705;
case 0x4fb708:c.instructions+=2;goto B4fb708;
case 0x4fb709:c.instructions+=1;goto B4fb709;
case 0x4fb70e:goto L4fb70e;
case 0x4fb70f:c.instructions+=2;goto B4fb70f;
case 0x4fb714:c.instructions+=1;goto B4fb714;
case 0x4fb719:goto L4fb719;
case 0x4fb71c:c.instructions+=7;goto B4fb71c;
case 0x4fb720:c.instructions+=6;goto B4fb720;
case 0x4fb722:c.instructions+=5;goto B4fb722;
case 0x4fb728:c.instructions+=4;goto B4fb728;
case 0x4fb72b:c.instructions+=3;goto B4fb72b;
case 0x4fb730:c.instructions+=2;goto B4fb730;
case 0x4fb731:c.instructions+=1;goto B4fb731;
case 0x4fb736:goto L4fb736;
case 0x4fb739:c.instructions+=3;goto B4fb739;
case 0x4fb73a:c.instructions+=2;goto B4fb73a;
case 0x4fb73b:c.instructions+=1;goto B4fb73b;
case 0x4fb73e:goto L4fb73e;
case 0x4fb743:c.instructions+=1;goto B4fb743;
case 0x4fb745:goto L4fb745;
case 0x4fb74a:c.instructions+=1;goto B4fb74a;
case 0x4fb750:goto L4fb750;
case 0x4fb752:c.instructions+=5;goto B4fb752;
case 0x4fb753:c.instructions+=4;goto B4fb753;
case 0x4fb759:c.instructions+=3;goto B4fb759;
case 0x4fb75f:c.instructions+=2;goto B4fb75f;
case 0x4fb760:c.instructions+=1;goto B4fb760;
case 0x4fb763:goto L4fb763;
case 0x4fb769:c.instructions+=2;goto B4fb769;
case 0x4fb76b:c.instructions+=1;goto B4fb76b;
case 0x4fb771:goto L4fb771;
case 0x4fb774:c.instructions+=1;goto B4fb774;
case 0x4fb779:goto L4fb779;
case 0x4fb77a:c.instructions+=2;goto B4fb77a;
case 0x4fb77b:c.instructions+=1;goto B4fb77b;
case 0x4fb77e:goto L4fb77e;
case 0x4fb780:c.instructions+=2;goto B4fb780;
case 0x4fb785:c.instructions+=1;goto B4fb785;
case 0x4fb78a:goto L4fb78a;
case 0x4fb78d:c.instructions+=4;goto B4fb78d;
case 0x4fb78f:c.instructions+=3;goto B4fb78f;
case 0x4fb794:c.instructions+=2;goto B4fb794;
case 0x4fb795:c.instructions+=1;goto B4fb795;
case 0x4fb79a:goto L4fb79a;
case 0x4fb79c:c.instructions+=1;goto B4fb79c;
case 0x4fb7a1:goto L4fb7a1;
case 0x4fb7a4:c.instructions+=3;goto B4fb7a4;
case 0x4fb7a5:c.instructions+=2;goto B4fb7a5;
case 0x4fb7a6:c.instructions+=1;goto B4fb7a6;
case 0x4fb7a9:goto L4fb7a9;
case 0x4fb7ae:c.instructions+=1;goto B4fb7ae;
case 0x4fb7b0:goto L4fb7b0;
case 0x4fb7b2:goto L4fb7b2;
case 0x4fb7b7:c.instructions+=1;goto B4fb7b7;
case 0x4fb7b9:goto L4fb7b9;
case 0x4fb7be:c.instructions+=1;goto B4fb7be;
case 0x4fb7c4:goto L4fb7c4;
case 0x4fb7c7:c.instructions+=1;goto B4fb7c7;
case 0x4fb7cc:goto L4fb7cc;
case 0x4fb7cd:c.instructions+=2;goto B4fb7cd;
case 0x4fb7ce:c.instructions+=1;goto B4fb7ce;
case 0x4fb7d1:goto L4fb7d1;
case 0x4fb7d7:c.instructions+=2;goto B4fb7d7;
case 0x4fb7d9:c.instructions+=1;goto B4fb7d9;
case 0x4fb7df:goto L4fb7df;
case 0x4fb7e2:c.instructions+=1;goto B4fb7e2;
case 0x4fb7e7:goto L4fb7e7;
case 0x4fb7e8:c.instructions+=2;goto B4fb7e8;
case 0x4fb7e9:c.instructions+=1;goto B4fb7e9;
case 0x4fb7ec:goto L4fb7ec;
case 0x4fb7ee:c.instructions+=1;goto B4fb7ee;
case 0x4fb7f3:goto L4fb7f3;
case 0x4fb7f5:c.instructions+=5;goto B4fb7f5;
case 0x4fb7fc:c.instructions+=4;goto B4fb7fc;
case 0x4fb7ff:c.instructions+=3;goto B4fb7ff;
case 0x4fb804:c.instructions+=2;goto B4fb804;
case 0x4fb805:c.instructions+=1;goto B4fb805;
case 0x4fb80a:goto L4fb80a;
case 0x4fb80d:c.instructions+=3;goto B4fb80d;
case 0x4fb80e:c.instructions+=2;goto B4fb80e;
case 0x4fb80f:c.instructions+=1;goto B4fb80f;
case 0x4fb812:goto L4fb812;
case 0x4fb817:c.instructions+=1;goto B4fb817;
case 0x4fb81d:goto L4fb81d;
case 0x4fb823:c.instructions+=2;goto B4fb823;
case 0x4fb825:c.instructions+=1;goto B4fb825;
case 0x4fb82b:goto L4fb82b;
case 0x4fb830:goto L4fb830;
case 0x4fb836:c.instructions+=3;goto B4fb836;
case 0x4fb838:c.instructions+=2;goto B4fb838;
case 0x4fb83e:c.instructions+=1;goto B4fb83e;
case 0x4fb840:goto L4fb840;
case 0x4fb845:c.instructions+=1;goto B4fb845;
case 0x4fb847:goto L4fb847;
case 0x4fb84d:c.instructions+=7;goto B4fb84d;
case 0x4fb853:c.instructions+=6;goto B4fb853;
case 0x4fb859:c.instructions+=5;goto B4fb859;
case 0x4fb85f:c.instructions+=4;goto B4fb85f;
case 0x4fb861:c.instructions+=3;goto B4fb861;
case 0x4fb863:c.instructions+=2;goto B4fb863;
case 0x4fb866:c.instructions+=1;goto B4fb866;
case 0x4fb868:goto L4fb868;
case 0x4fb86e:c.instructions+=5;goto B4fb86e;
case 0x4fb874:c.instructions+=4;goto B4fb874;
case 0x4fb87a:c.instructions+=3;goto B4fb87a;
case 0x4fb880:c.instructions+=2;goto B4fb880;
case 0x4fb886:c.instructions+=1;goto B4fb886;
case 0x4fb88b:goto L4fb88b;
case 0x4fb88d:c.instructions+=2;goto B4fb88d;
case 0x4fb893:c.instructions+=1;goto B4fb893;
case 0x4fb898:goto L4fb898;
case 0x4fb899:c.instructions+=3;goto B4fb899;
case 0x4fb89f:c.instructions+=2;goto B4fb89f;
case 0x4fb8a1:c.instructions+=1;goto B4fb8a1;
case 0x4fb8a3:goto L4fb8a3;
case 0x4fb8a5:c.instructions+=1;goto B4fb8a5;
case 0x4fb8aa:goto L4fb8aa;
case 0x4fb8ac:c.instructions+=1;goto B4fb8ac;
case 0x4fb8ae:goto L4fb8ae;
case 0x4fb8b0:c.instructions+=7;goto B4fb8b0;
case 0x4fb8b6:c.instructions+=6;goto B4fb8b6;
case 0x4fb8bc:c.instructions+=5;goto B4fb8bc;
case 0x4fb8c2:c.instructions+=4;goto B4fb8c2;
case 0x4fb8c4:c.instructions+=3;goto B4fb8c4;
case 0x4fb8c6:c.instructions+=2;goto B4fb8c6;
case 0x4fb8c9:c.instructions+=1;goto B4fb8c9;
case 0x4fb8cb:goto L4fb8cb;
case 0x4fb8cc:c.instructions+=1;goto B4fb8cc;
case 0x4fb8d1:goto L4fb8d1;
case 0x4fb8d4:c.instructions+=2;goto B4fb8d4;
case 0x4fb8de:c.instructions+=1;goto B4fb8de;
case 0x4fb8e4:goto L4fb8e4;
case 0x4fb8e5:goto L4fb8e5;
case 0x4fb8e6:c.instructions+=2;goto B4fb8e6;
case 0x4fb8e7:c.instructions+=1;goto B4fb8e7;
case 0x4fb8f0:goto L4fb8f0;
case 0x4fb8f1:c.instructions+=6;goto B4fb8f1;
case 0x4fb8f3:c.instructions+=5;goto B4fb8f3;
case 0x4fb8f9:c.instructions+=4;goto B4fb8f9;
case 0x4fb8fb:c.instructions+=3;goto B4fb8fb;
case 0x4fb900:c.instructions+=2;goto B4fb900;
case 0x4fb902:c.instructions+=1;goto B4fb902;
case 0x4fb904:goto L4fb904;
case 0x4fb908:c.instructions+=9;goto B4fb908;
case 0x4fb90c:c.instructions+=8;goto B4fb90c;
case 0x4fb910:c.instructions+=7;goto B4fb910;
case 0x4fb911:c.instructions+=6;goto B4fb911;
case 0x4fb915:c.instructions+=5;goto B4fb915;
case 0x4fb916:c.instructions+=4;goto B4fb916;
case 0x4fb917:c.instructions+=3;goto B4fb917;
case 0x4fb918:c.instructions+=2;goto B4fb918;
case 0x4fb91a:c.instructions+=1;goto B4fb91a;
case 0x4fb91f:goto L4fb91f;
case 0x4fb920:c.instructions+=1;goto B4fb920;
case 0x4fb923:goto L4fb923;
case 0x4fb924:c.instructions+=7;goto B4fb924;
case 0x4fb928:c.instructions+=6;goto B4fb928;
case 0x4fb929:c.instructions+=5;goto B4fb929;
case 0x4fb92d:c.instructions+=4;goto B4fb92d;
case 0x4fb92e:c.instructions+=3;goto B4fb92e;
case 0x4fb932:c.instructions+=2;goto B4fb932;
case 0x4fb938:c.instructions+=1;goto B4fb938;
case 0x4fb93a:goto L4fb93a;
case 0x4fb940:c.instructions+=3;goto B4fb940;
case 0x4fb943:c.instructions+=2;goto B4fb943;
case 0x4fb945:c.instructions+=1;goto B4fb945;
case 0x4fb947:goto L4fb947;
case 0x4fb94b:c.instructions+=6;goto B4fb94b;
case 0x4fb94c:c.instructions+=5;goto B4fb94c;
case 0x4fb94d:c.instructions+=4;goto B4fb94d;
case 0x4fb94e:c.instructions+=3;goto B4fb94e;
case 0x4fb94f:c.instructions+=2;goto B4fb94f;
case 0x4fb951:c.instructions+=1;goto B4fb951;
case 0x4fb956:goto L4fb956;
case 0x4fb95c:goto L4fb95c;
case 0x4fb962:c.instructions+=1;goto B4fb962;
case 0x4fb968:goto L4fb968;
case 0x4fb96a:goto L4fb96a;
case 0x4fb970:c.instructions+=1;goto B4fb970;
case 0x4fb972:goto L4fb972;
case 0x4fb974:goto L4fb974;
case 0x4fb97a:c.instructions+=1;goto B4fb97a;
case 0x4fb97c:goto L4fb97c;
case 0x4fb982:c.instructions+=1;goto B4fb982;
case 0x4fb988:goto L4fb988;
case 0x4fb98e:c.instructions+=3;goto B4fb98e;
case 0x4fb991:c.instructions+=2;goto B4fb991;
case 0x4fb992:c.instructions+=1;goto B4fb992;
case 0x4fb997:goto L4fb997;
case 0x4fb998:c.instructions+=4;goto B4fb998;
case 0x4fb999:c.instructions+=3;goto B4fb999;
case 0x4fb99a:c.instructions+=2;goto B4fb99a;
case 0x4fb99b:c.instructions+=1;goto B4fb99b;
case 0x4fb99e:goto L4fb99e;
case 0x4fb9a2:c.instructions+=7;goto B4fb9a2;
case 0x4fb9a3:c.instructions+=6;goto B4fb9a3;
case 0x4fb9a4:c.instructions+=5;goto B4fb9a4;
case 0x4fb9a5:c.instructions+=4;goto B4fb9a5;
case 0x4fb9aa:c.instructions+=3;goto B4fb9aa;
case 0x4fb9ac:c.instructions+=2;goto B4fb9ac;
case 0x4fb9b2:c.instructions+=1;goto B4fb9b2;
case 0x4fb9b7:goto L4fb9b7;
case 0x4fb9b8:c.instructions+=4;goto B4fb9b8;
case 0x4fb9b9:c.instructions+=3;goto B4fb9b9;
case 0x4fb9ba:c.instructions+=2;goto B4fb9ba;
case 0x4fb9bb:c.instructions+=1;goto B4fb9bb;
case 0x4fb9be:goto L4fb9be;
case 0x4fb9c4:c.instructions+=1;goto B4fb9c4;
case 0x4fb9ca:goto L4fb9ca;
case 0x4fb9cc:c.instructions+=1;goto B4fb9cc;
case 0x4fb9d1:goto L4fb9d1;
case 0x4fb9d2:c.instructions+=4;goto B4fb9d2;
case 0x4fb9d3:c.instructions+=3;goto B4fb9d3;
case 0x4fb9d4:c.instructions+=2;goto B4fb9d4;
case 0x4fb9d5:c.instructions+=1;goto B4fb9d5;
case 0x4fb9d8:goto L4fb9d8;
case 0x4fb9da:c.instructions+=3;goto B4fb9da;
case 0x4fb9df:c.instructions+=2;goto B4fb9df;
case 0x4fb9e2:c.instructions+=1;goto B4fb9e2;
case 0x4fb9e4:goto L4fb9e4;
case 0x4fb9e7:c.instructions+=1;goto B4fb9e7;
case 0x4fb9e9:goto L4fb9e9;
case 0x4fb9ec:c.instructions+=1;goto B4fb9ec;
case 0x4fb9ee:goto L4fb9ee;
case 0x4fb9f1:c.instructions+=1;goto B4fb9f1;
case 0x4fb9f7:goto L4fb9f7;
case 0x4fb9fd:c.instructions+=3;goto B4fb9fd;
case 0x4fba00:c.instructions+=2;goto B4fba00;
case 0x4fba02:c.instructions+=1;goto B4fba02;
case 0x4fba08:goto L4fba08;
case 0x4fba0d:c.instructions+=1;goto B4fba0d;
case 0x4fba13:goto L4fba13;
case 0x4fba16:c.instructions+=3;goto B4fba16;
case 0x4fba17:c.instructions+=2;goto B4fba17;
case 0x4fba1c:c.instructions+=1;goto B4fba1c;
case 0x4fba21:goto L4fba21;
case 0x4fba24:c.instructions+=6;goto B4fba24;
case 0x4fba25:c.instructions+=5;goto B4fba25;
case 0x4fba26:c.instructions+=4;goto B4fba26;
case 0x4fba2c:c.instructions+=3;goto B4fba2c;
case 0x4fba2d:c.instructions+=2;goto B4fba2d;
case 0x4fba2e:c.instructions+=1;goto B4fba2e;
case 0x4fba31:goto L4fba31;
case 0x4fba37:c.instructions+=1;goto B4fba37;
case 0x4fba3d:goto L4fba3d;
case 0x4fba43:goto L4fba43;
case 0x4fba49:c.instructions+=1;goto B4fba49;
case 0x4fba4b:goto L4fba4b;
case 0x4fba51:c.instructions+=1;goto B4fba51;
case 0x4fba57:goto L4fba57;
case 0x4fba5d:c.instructions+=1;goto B4fba5d;
case 0x4fba5f:goto L4fba5f;
case 0x4fba61:c.instructions+=2;goto B4fba61;
case 0x4fba63:c.instructions+=1;goto B4fba63;
case 0x4fba68:goto L4fba68;
case 0x4fba69:c.instructions+=4;goto B4fba69;
case 0x4fba6a:c.instructions+=3;goto B4fba6a;
case 0x4fba6b:c.instructions+=2;goto B4fba6b;
case 0x4fba6c:c.instructions+=1;goto B4fba6c;
case 0x4fba6f:goto L4fba6f;
case 0x4fba75:c.instructions+=1;goto B4fba75;
case 0x4fba77:goto L4fba77;
case 0x4fba7c:c.instructions+=1;goto B4fba7c;
case 0x4fba81:goto L4fba81;
case 0x4fba86:c.instructions+=2;goto B4fba86;
case 0x4fba87:c.instructions+=1;goto B4fba87;
case 0x4fba8c:goto L4fba8c;
case 0x4fba8f:c.instructions+=5;goto B4fba8f;
case 0x4fba90:c.instructions+=4;goto B4fba90;
case 0x4fba91:c.instructions+=3;goto B4fba91;
case 0x4fba92:c.instructions+=2;goto B4fba92;
case 0x4fba93:c.instructions+=1;goto B4fba93;
case 0x4fba96:goto L4fba96;
case 0x4fba99:c.instructions+=3;goto B4fba99;
case 0x4fba9e:c.instructions+=2;goto B4fba9e;
case 0x4fba9f:c.instructions+=1;goto B4fba9f;
case 0x4fbaa4:goto L4fbaa4;
case 0x4fbaa9:c.instructions+=8;goto B4fbaa9;
case 0x4fbaac:c.instructions+=7;goto B4fbaac;
case 0x4fbaad:c.instructions+=6;goto B4fbaad;
case 0x4fbaae:c.instructions+=5;goto B4fbaae;
case 0x4fbab3:c.instructions+=4;goto B4fbab3;
case 0x4fbab4:c.instructions+=3;goto B4fbab4;
case 0x4fbab9:c.instructions+=2;goto B4fbab9;
case 0x4fbaba:c.instructions+=1;goto B4fbaba;
case 0x4fbabd:goto L4fbabd;
case 0x4fbac3:c.instructions+=1;goto B4fbac3;
case 0x4fbac9:goto L4fbac9;
case 0x4fbacc:c.instructions+=3;goto B4fbacc;
case 0x4fbacd:c.instructions+=2;goto B4fbacd;
case 0x4fbad2:c.instructions+=1;goto B4fbad2;
case 0x4fbad7:goto L4fbad7;
case 0x4fbada:c.instructions+=5;goto B4fbada;
case 0x4fbadb:c.instructions+=4;goto B4fbadb;
case 0x4fbadc:c.instructions+=3;goto B4fbadc;
case 0x4fbadd:c.instructions+=2;goto B4fbadd;
case 0x4fbade:c.instructions+=1;goto B4fbade;
case 0x4fbae1:goto L4fbae1;
case 0x4fbae3:c.instructions+=2;goto B4fbae3;
case 0x4fbae6:c.instructions+=1;goto B4fbae6;
case 0x4fbaeb:goto L4fbaeb;
case 0x4fbaec:c.instructions+=2;goto B4fbaec;
case 0x4fbaed:c.instructions+=1;goto B4fbaed;
case 0x4fbaf2:goto L4fbaf2;
case 0x4fbaf5:c.instructions+=4;goto B4fbaf5;
case 0x4fbaf7:c.instructions+=3;goto B4fbaf7;
case 0x4fbaf8:c.instructions+=2;goto B4fbaf8;
case 0x4fbafd:c.instructions+=1;goto B4fbafd;
case 0x4fbb02:goto L4fbb02;
case 0x4fbb04:c.instructions+=2;goto B4fbb04;
case 0x4fbb06:c.instructions+=1;goto B4fbb06;
case 0x4fbb0b:goto L4fbb0b;
case 0x4fbb0c:c.instructions+=4;goto B4fbb0c;
case 0x4fbb0d:c.instructions+=3;goto B4fbb0d;
case 0x4fbb0e:c.instructions+=2;goto B4fbb0e;
case 0x4fbb0f:c.instructions+=1;goto B4fbb0f;
case 0x4fbb12:goto L4fbb12;
case 0x4fbb18:c.instructions+=1;goto B4fbb18;
case 0x4fbb1a:goto L4fbb1a;
case 0x4fbb1d:c.instructions+=10;goto B4fbb1d;
case 0x4fbb22:c.instructions+=9;goto B4fbb22;
case 0x4fbb24:c.instructions+=8;goto B4fbb24;
case 0x4fbb29:c.instructions+=7;goto B4fbb29;
case 0x4fbb2e:c.instructions+=6;goto B4fbb2e;
case 0x4fbb33:c.instructions+=5;goto B4fbb33;
case 0x4fbb38:c.instructions+=4;goto B4fbb38;
case 0x4fbb3d:c.instructions+=3;goto B4fbb3d;
case 0x4fbb42:c.instructions+=2;goto B4fbb42;
case 0x4fbb43:c.instructions+=1;goto B4fbb43;
case 0x4fbb48:goto L4fbb48;
case 0x4fbb4b:goto L4fbb4b;
case 0x4fbb4c:c.instructions+=4;goto B4fbb4c;
case 0x4fbb4d:c.instructions+=3;goto B4fbb4d;
case 0x4fbb4e:c.instructions+=2;goto B4fbb4e;
case 0x4fbb4f:c.instructions+=1;goto B4fbb4f;
case 0x4fbb60:goto L4fbb60;
case 0x4fbb62:c.instructions+=7;goto B4fbb62;
case 0x4fbb67:c.instructions+=6;goto B4fbb67;
case 0x4fbb6d:c.instructions+=5;goto B4fbb6d;
case 0x4fbb6e:c.instructions+=4;goto B4fbb6e;
case 0x4fbb75:c.instructions+=3;goto B4fbb75;
case 0x4fbb76:c.instructions+=2;goto B4fbb76;
case 0x4fbb78:c.instructions+=1;goto B4fbb78;
case 0x4fbb7d:goto L4fbb7d;
case 0x4fbb80:c.instructions+=4;goto B4fbb80;
case 0x4fbb84:c.instructions+=3;goto B4fbb84;
case 0x4fbb86:c.instructions+=2;goto B4fbb86;
case 0x4fbb8e:c.instructions+=1;goto B4fbb8e;
case 0x4fbb90:goto L4fbb90;
case 0x4fbb94:c.instructions+=3;goto B4fbb94;
case 0x4fbb95:c.instructions+=2;goto B4fbb95;
case 0x4fbb97:c.instructions+=1;goto B4fbb97;
case 0x4fbb9c:goto L4fbb9c;
case 0x4fbba0:c.instructions+=3;goto B4fbba0;
case 0x4fbba7:c.instructions+=2;goto B4fbba7;
case 0x4fbbaa:c.instructions+=1;goto B4fbbaa;
case 0x4fbbab:goto L4fbbab;
case 0x4fbbaf:c.instructions+=4;goto B4fbbaf;
case 0x4fbbb1:c.instructions+=3;goto B4fbbb1;
case 0x4fbbb8:c.instructions+=2;goto B4fbbb8;
case 0x4fbbbb:c.instructions+=1;goto B4fbbbb;
case 0x4fbbc0:goto L4fbbc0;
case 0x4fbbc2:c.instructions+=13;goto B4fbbc2;
case 0x4fbbc7:c.instructions+=12;goto B4fbbc7;
case 0x4fbbcd:c.instructions+=11;goto B4fbbcd;
case 0x4fbbce:c.instructions+=10;goto B4fbbce;
case 0x4fbbd5:c.instructions+=9;goto B4fbbd5;
case 0x4fbbd6:c.instructions+=8;goto B4fbbd6;
case 0x4fbbda:c.instructions+=7;goto B4fbbda;
case 0x4fbbdb:c.instructions+=6;goto B4fbbdb;
case 0x4fbbdc:c.instructions+=5;goto B4fbbdc;
case 0x4fbbdd:c.instructions+=4;goto B4fbbdd;
case 0x4fbbdf:c.instructions+=3;goto B4fbbdf;
case 0x4fbbe0:c.instructions+=2;goto B4fbbe0;
case 0x4fbbe4:c.instructions+=1;goto B4fbbe4;
case 0x4fbbe9:goto L4fbbe9;
case 0x4fbbeb:c.instructions+=24;goto B4fbbeb;
case 0x4fbbf1:c.instructions+=23;goto B4fbbf1;
case 0x4fbbf7:c.instructions+=22;goto B4fbbf7;
case 0x4fbbfd:c.instructions+=21;goto B4fbbfd;
case 0x4fbc03:c.instructions+=20;goto B4fbc03;
case 0x4fbc09:c.instructions+=19;goto B4fbc09;
case 0x4fbc0f:c.instructions+=18;goto B4fbc0f;
case 0x4fbc15:c.instructions+=17;goto B4fbc15;
case 0x4fbc1b:c.instructions+=16;goto B4fbc1b;
case 0x4fbc21:c.instructions+=15;goto B4fbc21;
case 0x4fbc27:c.instructions+=14;goto B4fbc27;
case 0x4fbc2d:c.instructions+=13;goto B4fbc2d;
case 0x4fbc33:c.instructions+=12;goto B4fbc33;
case 0x4fbc39:c.instructions+=11;goto B4fbc39;
case 0x4fbc3d:c.instructions+=10;goto B4fbc3d;
case 0x4fbc3f:c.instructions+=9;goto B4fbc3f;
case 0x4fbc42:c.instructions+=8;goto B4fbc42;
case 0x4fbc45:c.instructions+=7;goto B4fbc45;
case 0x4fbc46:c.instructions+=6;goto B4fbc46;
case 0x4fbc4b:c.instructions+=5;goto B4fbc4b;
case 0x4fbc55:c.instructions+=4;goto B4fbc55;
case 0x4fbc5b:c.instructions+=3;goto B4fbc5b;
case 0x4fbc61:c.instructions+=2;goto B4fbc61;
case 0x4fbc67:c.instructions+=1;goto B4fbc67;
case 0x4fbc6c:goto L4fbc6c;
case 0x4fbc72:c.instructions+=6;goto B4fbc72;
case 0x4fbc75:c.instructions+=5;goto B4fbc75;
case 0x4fbc77:c.instructions+=4;goto B4fbc77;
case 0x4fbc7a:c.instructions+=3;goto B4fbc7a;
case 0x4fbc7c:c.instructions+=2;goto B4fbc7c;
case 0x4fbc80:c.instructions+=1;goto B4fbc80;
case 0x4fbc86:goto L4fbc86;
case 0x4fbc87:c.instructions+=1;goto B4fbc87;
case 0x4fbc90:goto L4fbc90;
case 0x4fbc97:c.instructions+=2;goto B4fbc97;
case 0x4fbc9a:c.instructions+=1;goto B4fbc9a;
case 0x4fbca0:goto L4fbca0;
case 0x4fbca2:c.instructions+=1;goto B4fbca2;
case 0x4fbca4:goto L4fbca4;
case 0x4fbca6:c.instructions+=1;goto B4fbca6;
case 0x4fbcab:goto L4fbcab;
case 0x4fbcb0:c.instructions+=3;goto B4fbcb0;
case 0x4fbcb1:c.instructions+=2;goto B4fbcb1;
case 0x4fbcb3:c.instructions+=1;goto B4fbcb3;
case 0x4fbcb8:goto L4fbcb8;
case 0x4fbcbd:goto L4fbcbd;
case 0x4fbcbf:c.instructions+=2;goto B4fbcbf;
case 0x4fbcc1:c.instructions+=1;goto B4fbcc1;
case 0x4fbcc7:goto L4fbcc7;
case 0x4fbcd0:goto L4fbcd0;
case 0x4fbcd6:c.instructions+=7;goto B4fbcd6;
case 0x4fbcdc:c.instructions+=6;goto B4fbcdc;
case 0x4fbcdf:c.instructions+=5;goto B4fbcdf;
case 0x4fbce2:c.instructions+=4;goto B4fbce2;
case 0x4fbce3:c.instructions+=3;goto B4fbce3;
case 0x4fbce5:c.instructions+=2;goto B4fbce5;
case 0x4fbceb:c.instructions+=1;goto B4fbceb;
case 0x4fbced:goto L4fbced;
case 0x4fbcef:goto L4fbcef;
case 0x4fbcf1:c.instructions+=2;goto B4fbcf1;
case 0x4fbcf7:c.instructions+=1;goto B4fbcf7;
case 0x4fbcf9:goto L4fbcf9;
case 0x4fbcfc:c.instructions+=4;goto B4fbcfc;
case 0x4fbcfe:c.instructions+=3;goto B4fbcfe;
case 0x4fbd00:c.instructions+=2;goto B4fbd00;
case 0x4fbd05:c.instructions+=1;goto B4fbd05;
case 0x4fbd0a:goto L4fbd0a;
case 0x4fbd0b:c.instructions+=2;goto B4fbd0b;
case 0x4fbd0c:c.instructions+=1;goto B4fbd0c;
case 0x4fbd11:goto L4fbd11;
case 0x4fbd16:c.instructions+=6;goto B4fbd16;
case 0x4fbd19:c.instructions+=5;goto B4fbd19;
case 0x4fbd1b:c.instructions+=4;goto B4fbd1b;
case 0x4fbd21:c.instructions+=3;goto B4fbd21;
case 0x4fbd27:c.instructions+=2;goto B4fbd27;
case 0x4fbd2d:c.instructions+=1;goto B4fbd2d;
case 0x4fbd32:goto L4fbd32;
case 0x4fbd34:c.instructions+=1;goto B4fbd34;
case 0x4fbd39:goto L4fbd39;
case 0x4fbd3b:c.instructions+=2;goto B4fbd3b;
case 0x4fbd41:c.instructions+=1;goto B4fbd41;
case 0x4fbd46:goto L4fbd46;
case 0x4fbd4a:goto L4fbd4a;
case 0x4fbd50:c.instructions+=4;goto B4fbd50;
case 0x4fbd55:c.instructions+=3;goto B4fbd55;
case 0x4fbd56:c.instructions+=2;goto B4fbd56;
case 0x4fbd58:c.instructions+=1;goto B4fbd58;
case 0x4fbd5d:goto L4fbd5d;
case 0x4fbd5f:c.instructions+=2;goto B4fbd5f;
case 0x4fbd61:c.instructions+=1;goto B4fbd61;
case 0x4fbd67:goto L4fbd67;
case 0x4fbd6c:c.instructions+=5;goto B4fbd6c;
case 0x4fbd6f:c.instructions+=4;goto B4fbd6f;
case 0x4fbd70:c.instructions+=3;goto B4fbd70;
case 0x4fbd72:c.instructions+=2;goto B4fbd72;
case 0x4fbd76:c.instructions+=1;goto B4fbd76;
case 0x4fbd7c:goto L4fbd7c;
case 0x4fbd7d:goto L4fbd7d;
case 0x4fbd81:c.instructions+=7;goto B4fbd81;
case 0x4fbd83:c.instructions+=6;goto B4fbd83;
case 0x4fbd84:c.instructions+=5;goto B4fbd84;
case 0x4fbd85:c.instructions+=4;goto B4fbd85;
case 0x4fbd86:c.instructions+=3;goto B4fbd86;
case 0x4fbd8d:c.instructions+=2;goto B4fbd8d;
case 0x4fbd90:c.instructions+=1;goto B4fbd90;
case 0x4fbda0:goto L4fbda0;
case 0x4fbda1:c.instructions+=2;goto B4fbda1;
case 0x4fbda3:c.instructions+=1;goto B4fbda3;
case 0x4fbda8:goto L4fbda8;
case 0x4fbdad:c.instructions+=1;goto B4fbdad;
case 0x4fbdaf:goto L4fbdaf;
case 0x4fbdb0:c.instructions+=1;goto B4fbdb0;
case 0x4fbdb5:goto L4fbdb5;
case 0x4fbdb8:goto L4fbdb8;
case 0x4fbdba:c.instructions+=2;goto B4fbdba;
case 0x4fbdbb:c.instructions+=1;goto B4fbdbb;
case 0x4fbdc0:goto L4fbdc0;
case 0x4fbdc2:c.instructions+=12;goto B4fbdc2;
case 0x4fbdc7:c.instructions+=11;goto B4fbdc7;
case 0x4fbdcd:c.instructions+=10;goto B4fbdcd;
case 0x4fbdce:c.instructions+=9;goto B4fbdce;
case 0x4fbdd5:c.instructions+=8;goto B4fbdd5;
case 0x4fbdd6:c.instructions+=7;goto B4fbdd6;
case 0x4fbdd7:c.instructions+=6;goto B4fbdd7;
case 0x4fbdd9:c.instructions+=5;goto B4fbdd9;
case 0x4fbddd:c.instructions+=4;goto B4fbddd;
case 0x4fbde3:c.instructions+=3;goto B4fbde3;
case 0x4fbde9:c.instructions+=2;goto B4fbde9;
case 0x4fbdf1:c.instructions+=1;goto B4fbdf1;
case 0x4fbdf6:goto L4fbdf6;
case 0x4fbdf8:c.instructions+=2;goto B4fbdf8;
case 0x4fbe00:c.instructions+=1;goto B4fbe00;
case 0x4fbe05:goto L4fbe05;
case 0x4fbe09:c.instructions+=4;goto B4fbe09;
case 0x4fbe0a:c.instructions+=3;goto B4fbe0a;
case 0x4fbe11:c.instructions+=2;goto B4fbe11;
case 0x4fbe14:c.instructions+=1;goto B4fbe14;
case 0x4fbe20:goto L4fbe20;
case 0x4fbe24:c.instructions+=5;goto B4fbe24;
case 0x4fbe29:c.instructions+=4;goto B4fbe29;
case 0x4fbe2a:c.instructions+=3;goto B4fbe2a;
case 0x4fbe2b:c.instructions+=2;goto B4fbe2b;
case 0x4fbe2d:c.instructions+=1;goto B4fbe2d;
case 0x4fbe33:goto L4fbe33;
case 0x4fbe35:goto L4fbe35;
case 0x4fbe3a:c.instructions+=1;goto B4fbe3a;
case 0x4fbe3c:goto L4fbe3c;
case 0x4fbe41:c.instructions+=1;goto B4fbe41;
case 0x4fbe47:goto L4fbe47;
case 0x4fbe4c:c.instructions+=2;goto B4fbe4c;
case 0x4fbe4e:c.instructions+=1;goto B4fbe4e;
case 0x4fbe53:goto L4fbe53;
case 0x4fbe54:c.instructions+=2;goto B4fbe54;
case 0x4fbe55:c.instructions+=1;goto B4fbe55;
case 0x4fbe58:goto L4fbe58;
case 0x4fbe5d:c.instructions+=3;goto B4fbe5d;
case 0x4fbe5f:c.instructions+=2;goto B4fbe5f;
case 0x4fbe61:c.instructions+=1;goto B4fbe61;
case 0x4fbe63:goto L4fbe63;
case 0x4fbe66:c.instructions+=3;goto B4fbe66;
case 0x4fbe6b:c.instructions+=2;goto B4fbe6b;
case 0x4fbe6c:c.instructions+=1;goto B4fbe6c;
case 0x4fbe6e:goto L4fbe6e;
case 0x4fbe71:c.instructions+=2;goto B4fbe71;
case 0x4fbe76:c.instructions+=1;goto B4fbe76;
case 0x4fbe77:goto L4fbe77;
case 0x4fbe7c:goto L4fbe7c;
case 0x4fbe7f:c.instructions+=4;goto B4fbe7f;
case 0x4fbe82:c.instructions+=3;goto B4fbe82;
case 0x4fbe84:c.instructions+=2;goto B4fbe84;
case 0x4fbe85:c.instructions+=1;goto B4fbe85;
case 0x4fbe8a:goto L4fbe8a;
case 0x4fbe8d:c.instructions+=3;goto B4fbe8d;
case 0x4fbe8e:c.instructions+=2;goto B4fbe8e;
case 0x4fbe8f:c.instructions+=1;goto B4fbe8f;
case 0x4fbe92:goto L4fbe92;
case 0x4fbe95:c.instructions+=4;goto B4fbe95;
case 0x4fbe96:c.instructions+=3;goto B4fbe96;
case 0x4fbe9b:c.instructions+=2;goto B4fbe9b;
case 0x4fbe9c:c.instructions+=1;goto B4fbe9c;
case 0x4fbea1:goto L4fbea1;
case 0x4fbea3:c.instructions+=4;goto B4fbea3;
case 0x4fbea6:c.instructions+=3;goto B4fbea6;
case 0x4fbeab:c.instructions+=2;goto B4fbeab;
case 0x4fbeac:c.instructions+=1;goto B4fbeac;
case 0x4fbeb1:goto L4fbeb1;
case 0x4fbeb2:c.instructions+=2;goto B4fbeb2;
case 0x4fbeb4:c.instructions+=1;goto B4fbeb4;
case 0x4fbeb9:goto L4fbeb9;
case 0x4fbebc:c.instructions+=3;goto B4fbebc;
case 0x4fbebe:c.instructions+=2;goto B4fbebe;
case 0x4fbebf:c.instructions+=1;goto B4fbebf;
case 0x4fbec1:goto L4fbec1;
case 0x4fbec2:c.instructions+=1;goto B4fbec2;
case 0x4fbec7:goto L4fbec7;
case 0x4fbeca:c.instructions+=2;goto B4fbeca;
case 0x4fbecc:c.instructions+=1;goto B4fbecc;
case 0x4fbece:goto L4fbece;
case 0x4fbed3:c.instructions+=2;goto B4fbed3;
case 0x4fbed5:c.instructions+=1;goto B4fbed5;
case 0x4fbeda:goto L4fbeda;
case 0x4fbedb:c.instructions+=2;goto B4fbedb;
case 0x4fbedc:c.instructions+=1;goto B4fbedc;
case 0x4fbedf:goto L4fbedf;
case 0x4fbee4:c.instructions+=1;goto B4fbee4;
case 0x4fbee6:goto L4fbee6;
case 0x4fbee7:c.instructions+=2;goto B4fbee7;
case 0x4fbee9:c.instructions+=1;goto B4fbee9;
case 0x4fbeee:goto L4fbeee;
case 0x4fbeef:c.instructions+=2;goto B4fbeef;
case 0x4fbef0:c.instructions+=1;goto B4fbef0;
case 0x4fbf00:goto L4fbf00;
case 0x4fbf02:c.instructions+=7;goto B4fbf02;
case 0x4fbf07:c.instructions+=6;goto B4fbf07;
case 0x4fbf0d:c.instructions+=5;goto B4fbf0d;
case 0x4fbf0e:c.instructions+=4;goto B4fbf0e;
case 0x4fbf15:c.instructions+=3;goto B4fbf15;
case 0x4fbf16:c.instructions+=2;goto B4fbf16;
case 0x4fbf1b:c.instructions+=1;goto B4fbf1b;
case 0x4fbf20:goto L4fbf20;
case 0x4fbf23:c.instructions+=4;goto B4fbf23;
case 0x4fbf27:c.instructions+=3;goto B4fbf27;
case 0x4fbf29:c.instructions+=2;goto B4fbf29;
case 0x4fbf31:c.instructions+=1;goto B4fbf31;
case 0x4fbf33:goto L4fbf33;
case 0x4fbf37:c.instructions+=3;goto B4fbf37;
case 0x4fbf38:c.instructions+=2;goto B4fbf38;
case 0x4fbf3a:c.instructions+=1;goto B4fbf3a;
case 0x4fbf3f:goto L4fbf3f;
case 0x4fbf43:c.instructions+=3;goto B4fbf43;
case 0x4fbf4a:c.instructions+=2;goto B4fbf4a;
case 0x4fbf4d:c.instructions+=1;goto B4fbf4d;
case 0x4fbf4e:goto L4fbf4e;
case 0x4fbf52:c.instructions+=4;goto B4fbf52;
case 0x4fbf54:c.instructions+=3;goto B4fbf54;
case 0x4fbf5b:c.instructions+=2;goto B4fbf5b;
case 0x4fbf5e:c.instructions+=1;goto B4fbf5e;
case 0x4fbf60:goto L4fbf60;
case 0x4fbf62:c.instructions+=7;goto B4fbf62;
case 0x4fbf67:c.instructions+=6;goto B4fbf67;
case 0x4fbf6d:c.instructions+=5;goto B4fbf6d;
case 0x4fbf6e:c.instructions+=4;goto B4fbf6e;
case 0x4fbf75:c.instructions+=3;goto B4fbf75;
case 0x4fbf76:c.instructions+=2;goto B4fbf76;
case 0x4fbf7b:c.instructions+=1;goto B4fbf7b;
case 0x4fbf80:goto L4fbf80;
case 0x4fbf83:c.instructions+=4;goto B4fbf83;
case 0x4fbf87:c.instructions+=3;goto B4fbf87;
case 0x4fbf89:c.instructions+=2;goto B4fbf89;
case 0x4fbf91:c.instructions+=1;goto B4fbf91;
case 0x4fbf93:goto L4fbf93;
case 0x4fbf97:c.instructions+=3;goto B4fbf97;
case 0x4fbf98:c.instructions+=2;goto B4fbf98;
case 0x4fbf9a:c.instructions+=1;goto B4fbf9a;
case 0x4fbf9f:goto L4fbf9f;
case 0x4fbfa3:c.instructions+=3;goto B4fbfa3;
case 0x4fbfaa:c.instructions+=2;goto B4fbfaa;
case 0x4fbfad:c.instructions+=1;goto B4fbfad;
case 0x4fbfae:goto L4fbfae;
case 0x4fbfb2:c.instructions+=4;goto B4fbfb2;
case 0x4fbfb4:c.instructions+=3;goto B4fbfb4;
case 0x4fbfbb:c.instructions+=2;goto B4fbfbb;
case 0x4fbfbe:c.instructions+=1;goto B4fbfbe;
case 0x4fbfc0:goto L4fbfc0;
case 0x4fbfc2:c.instructions+=14;goto B4fbfc2;
case 0x4fbfc7:c.instructions+=13;goto B4fbfc7;
case 0x4fbfcd:c.instructions+=12;goto B4fbfcd;
case 0x4fbfce:c.instructions+=11;goto B4fbfce;
case 0x4fbfd5:c.instructions+=10;goto B4fbfd5;
case 0x4fbfd6:c.instructions+=9;goto B4fbfd6;
case 0x4fbfd7:c.instructions+=8;goto B4fbfd7;
case 0x4fbfd9:c.instructions+=7;goto B4fbfd9;
case 0x4fbfda:c.instructions+=6;goto B4fbfda;
case 0x4fbfde:c.instructions+=5;goto B4fbfde;
case 0x4fbfe4:c.instructions+=4;goto B4fbfe4;
case 0x4fbfe6:c.instructions+=3;goto B4fbfe6;
case 0x4fbfee:c.instructions+=2;goto B4fbfee;
case 0x4fbff0:c.instructions+=1;goto B4fbff0;
case 0x4fbff2:goto L4fbff2;
case 0x4fbff7:goto L4fbff7;
case 0x4fbff8:c.instructions+=1;goto B4fbff8;
case 0x4fbffd:goto L4fbffd;
default:missing_instruction(c.pc);}
B4fb001:L4fb001:{c.instructions+=5;NFSU2_TR(0x4fb001);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb007:{NFSU2_TR(0x4fb007);
{u32 ea_=u32(u32(8361004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fb00d:{NFSU2_TR(0x4fb00d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fb00f:{NFSU2_TR(0x4fb00f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fb012:{NFSU2_TR(0x4fb012);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4fb190;}}
}
B4fb018:L4fb018:{c.instructions+=8;NFSU2_TR(0x4fb018);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb01a:{NFSU2_TR(0x4fb01a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb01c:{NFSU2_TR(0x4fb01c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb021:{NFSU2_TR(0x4fb021);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb026:{NFSU2_TR(0x4fb026);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb028:{NFSU2_TR(0x4fb028);
u8 U[4];
w4(U+0,u32(0x28c0ab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb02d:{NFSU2_TR(0x4fb02d);
__builtin_memmove((R+4),(R+24),4);
}
B4fb02f:{NFSU2_TR(0x4fb02f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb034ull));
TAIL_STATIC(0x555f80u,555);
}
B4fb034:L4fb034:{c.instructions+=4;NFSU2_TR(0x4fb034);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb037:{NFSU2_TR(0x4fb037);
u8 U[4];
w4(U+0,u32(0xcb3b8831ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb03c:{NFSU2_TR(0x4fb03c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb03d:{NFSU2_TR(0x4fb03d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb042ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fb042:L4fb042:{c.instructions+=2;NFSU2_TR(0x4fb042);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb043:{NFSU2_TR(0x4fb043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb048ull));
TAIL_STATIC(0x52d100u,52d);
}
B4fb048:L4fb048:{c.instructions+=3;NFSU2_TR(0x4fb048);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fb04b:{NFSU2_TR(0x4fb04b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fb04d:{NFSU2_TR(0x4fb04d);
if(r1(R+518)){{goto L4fb097;}}
}
B4fb04f:L4fb04f:{c.instructions+=10;NFSU2_TR(0x4fb04f);
__builtin_memmove((R+0),gp(0x83a9c8),4);
}
B4fb054:{NFSU2_TR(0x4fb054);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4fb05a:{NFSU2_TR(0x4fb05a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B4fb05c:{NFSU2_TR(0x4fb05c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb060:{NFSU2_TR(0x4fb060);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4fb064:{NFSU2_TR(0x4fb064);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb06a:{NFSU2_TR(0x4fb06a);
{u32 ea_=u32(u32(8361004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fb070:{NFSU2_TR(0x4fb070);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fb072:{NFSU2_TR(0x4fb072);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fb075:{NFSU2_TR(0x4fb075);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4fb190;}}
}
B4fb07b:L4fb07b:{c.instructions+=8;NFSU2_TR(0x4fb07b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb07d:{NFSU2_TR(0x4fb07d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb07f:{NFSU2_TR(0x4fb07f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb084:{NFSU2_TR(0x4fb084);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb089:{NFSU2_TR(0x4fb089);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb08b:{NFSU2_TR(0x4fb08b);
u8 U[4];
w4(U+0,u32(0xcb3b8831ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb090:{NFSU2_TR(0x4fb090);
__builtin_memmove((R+4),(R+24),4);
}
B4fb092:{NFSU2_TR(0x4fb092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb097ull));
TAIL_STATIC(0x555f80u,555);
}
B4fb097:L4fb097:{c.instructions+=4;NFSU2_TR(0x4fb097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb09a:{NFSU2_TR(0x4fb09a);
u8 U[4];
w4(U+0,u32(0x3a0d5aa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb09f:{NFSU2_TR(0x4fb09f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb0a0:{NFSU2_TR(0x4fb0a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb0a5ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fb0a5:L4fb0a5:{c.instructions+=2;NFSU2_TR(0x4fb0a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb0a6:{NFSU2_TR(0x4fb0a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb0abull));
TAIL_STATIC(0x52d100u,52d);
}
B4fb0ab:L4fb0ab:{c.instructions+=3;NFSU2_TR(0x4fb0ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fb0ae:{NFSU2_TR(0x4fb0ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fb0b0:{NFSU2_TR(0x4fb0b0);
if(r1(R+518)){{goto L4fb0fa;}}
}
B4fb0b2:L4fb0b2:{c.instructions+=10;NFSU2_TR(0x4fb0b2);
__builtin_memmove((R+0),gp(0x83a9c8),4);
}
B4fb0b7:{NFSU2_TR(0x4fb0b7);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B4fb0bd:{NFSU2_TR(0x4fb0bd);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4fb0bf:{NFSU2_TR(0x4fb0bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb0c3:{NFSU2_TR(0x4fb0c3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4fb0c7:{NFSU2_TR(0x4fb0c7);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb0cd:{NFSU2_TR(0x4fb0cd);
{u32 ea_=u32(u32(8361004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fb0d3:{NFSU2_TR(0x4fb0d3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fb0d5:{NFSU2_TR(0x4fb0d5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fb0d8:{NFSU2_TR(0x4fb0d8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4fb190;}}
}
B4fb0de:L4fb0de:{c.instructions+=8;NFSU2_TR(0x4fb0de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb0e0:{NFSU2_TR(0x4fb0e0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb0e2:{NFSU2_TR(0x4fb0e2);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb0e7:{NFSU2_TR(0x4fb0e7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb0ec:{NFSU2_TR(0x4fb0ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb0ee:{NFSU2_TR(0x4fb0ee);
u8 U[4];
w4(U+0,u32(0x3a0d5aa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb0f3:{NFSU2_TR(0x4fb0f3);
__builtin_memmove((R+4),(R+24),4);
}
B4fb0f5:{NFSU2_TR(0x4fb0f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb0faull));
TAIL_STATIC(0x555f80u,555);
}
B4fb0fa:L4fb0fa:{c.instructions+=3;NFSU2_TR(0x4fb0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb100:{NFSU2_TR(0x4fb100);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fb103:{NFSU2_TR(0x4fb103);
if(r1(R+518)){{goto L4fb115;}}
}
B4fb105:L4fb105:{c.instructions+=2;NFSU2_TR(0x4fb105);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4fb108:{NFSU2_TR(0x4fb108);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb126;}}
}
B4fb10a:L4fb10a:{c.instructions+=4;NFSU2_TR(0x4fb10a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb10d:{NFSU2_TR(0x4fb10d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb10e:{NFSU2_TR(0x4fb10e);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb113:{NFSU2_TR(0x4fb113);
{goto L4fb11e;}
}
B4fb115:L4fb115:{c.instructions+=3;NFSU2_TR(0x4fb115);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb118:{NFSU2_TR(0x4fb118);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb119:{NFSU2_TR(0x4fb119);
u8 U[4];
w4(U+0,u32(0x72619778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb11e:L4fb11e:{c.instructions+=1;NFSU2_TR(0x4fb11e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb123ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4fb123:L4fb123:{c.instructions+=1;NFSU2_TR(0x4fb123);
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
B4fb126:L4fb126:{c.instructions+=3;NFSU2_TR(0x4fb126);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4fb12a:{NFSU2_TR(0x4fb12a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb12b:{NFSU2_TR(0x4fb12b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb130ull));
TAIL_STATIC(0x50cda0u,50c);
}
B4fb130:L4fb130:{c.instructions+=6;NFSU2_TR(0x4fb130);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fb134:{NFSU2_TR(0x4fb134);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fb13a:{NFSU2_TR(0x4fb13a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fb13d:{NFSU2_TR(0x4fb13d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fb13f:{NFSU2_TR(0x4fb13f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fb142:{NFSU2_TR(0x4fb142);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4fb190;}}
}
B4fb144:L4fb144:{c.instructions+=5;NFSU2_TR(0x4fb144);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fb148:{NFSU2_TR(0x4fb148);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fb14e:{NFSU2_TR(0x4fb14e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fb150:{NFSU2_TR(0x4fb150);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fb153:{NFSU2_TR(0x4fb153);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb16e;}}
}
B4fb155:L4fb155:{c.instructions+=4;NFSU2_TR(0x4fb155);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb158:{NFSU2_TR(0x4fb158);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb159:{NFSU2_TR(0x4fb159);
u8 U[4];
w4(U+0,u32(0x72619778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb15e:{NFSU2_TR(0x4fb15e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb163ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4fb163:L4fb163:{c.instructions+=7;NFSU2_TR(0x4fb163);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4fb166:{NFSU2_TR(0x4fb166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb167:{NFSU2_TR(0x4fb167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb168:{NFSU2_TR(0x4fb168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fb169:{NFSU2_TR(0x4fb169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fb16a:{NFSU2_TR(0x4fb16a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fb16d:{NFSU2_TR(0x4fb16d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb16e:L4fb16e:{c.instructions+=5;NFSU2_TR(0x4fb16e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fb172:{NFSU2_TR(0x4fb172);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fb178:{NFSU2_TR(0x4fb178);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fb17a:{NFSU2_TR(0x4fb17a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fb17d:{NFSU2_TR(0x4fb17d);
if(r1(R+514)){{goto L4fb190;}}
}
B4fb17f:L4fb17f:{c.instructions+=4;NFSU2_TR(0x4fb17f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb182:{NFSU2_TR(0x4fb182);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb183:{NFSU2_TR(0x4fb183);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb188:{NFSU2_TR(0x4fb188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb18dull));
TAIL_STATIC(0x55dda0u,55d);
}
B4fb18d:L4fb18d:{c.instructions+=1;NFSU2_TR(0x4fb18d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4fb190:L4fb190:{c.instructions+=6;NFSU2_TR(0x4fb190);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb191:{NFSU2_TR(0x4fb191);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb192:{NFSU2_TR(0x4fb192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fb193:{NFSU2_TR(0x4fb193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fb194:{NFSU2_TR(0x4fb194);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fb197:{NFSU2_TR(0x4fb197);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb1a0:L4fb1a0:{c.instructions+=8;NFSU2_TR(0x4fb1a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb1a2:{NFSU2_TR(0x4fb1a2);
u8 U[4];
w4(U+0,u32(0x776d54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb1a7:{NFSU2_TR(0x4fb1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb1ad:{NFSU2_TR(0x4fb1ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb1ae:{NFSU2_TR(0x4fb1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb1b5:{NFSU2_TR(0x4fb1b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb1b6:{NFSU2_TR(0x4fb1b6);
u8 U[4];
w4(U+0,u32(0x3c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb1bb:{NFSU2_TR(0x4fb1bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb1c0ull));
TAIL_STATIC(0x575620u,575);
}
B4fb1c0:L4fb1c0:{c.instructions+=5;NFSU2_TR(0x4fb1c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fb1c3:{NFSU2_TR(0x4fb1c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fb1c7:{NFSU2_TR(0x4fb1c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb1c9:{NFSU2_TR(0x4fb1c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fb1d1:{NFSU2_TR(0x4fb1d1);
if(r1(R+518)){{goto L4fb1ee;}}
}
B4fb1d3:L4fb1d3:{c.instructions+=4;NFSU2_TR(0x4fb1d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb1d7:{NFSU2_TR(0x4fb1d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb1d8:{NFSU2_TR(0x4fb1d8);
__builtin_memmove((R+4),(R+0),4);
}
B4fb1da:{NFSU2_TR(0x4fb1da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb1dfull));
TAIL_STATIC(0x4f1c20u,4f1);
}
B4fb1df:L4fb1df:{c.instructions+=4;NFSU2_TR(0x4fb1df);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb1e3:{NFSU2_TR(0x4fb1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb1ea:{NFSU2_TR(0x4fb1ea);
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
B4fb1ed:{NFSU2_TR(0x4fb1ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb1ee:L4fb1ee:{c.instructions+=5;NFSU2_TR(0x4fb1ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb1f2:{NFSU2_TR(0x4fb1f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fb1f4:{NFSU2_TR(0x4fb1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb1fb:{NFSU2_TR(0x4fb1fb);
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
B4fb1fe:{NFSU2_TR(0x4fb1fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb200:L4fb200:{c.instructions+=8;NFSU2_TR(0x4fb200);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb202:{NFSU2_TR(0x4fb202);
u8 U[4];
w4(U+0,u32(0x776d74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb207:{NFSU2_TR(0x4fb207);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb20d:{NFSU2_TR(0x4fb20d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb20e:{NFSU2_TR(0x4fb20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb215:{NFSU2_TR(0x4fb215);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb216:{NFSU2_TR(0x4fb216);
u8 U[4];
w4(U+0,u32(0x118ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb21b:{NFSU2_TR(0x4fb21b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb220ull));
TAIL_STATIC(0x575620u,575);
}
B4fb220:L4fb220:{c.instructions+=5;NFSU2_TR(0x4fb220);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fb223:{NFSU2_TR(0x4fb223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fb227:{NFSU2_TR(0x4fb227);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb229:{NFSU2_TR(0x4fb229);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fb231:{NFSU2_TR(0x4fb231);
if(r1(R+518)){{goto L4fb24e;}}
}
B4fb233:L4fb233:{c.instructions+=4;NFSU2_TR(0x4fb233);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb237:{NFSU2_TR(0x4fb237);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb238:{NFSU2_TR(0x4fb238);
__builtin_memmove((R+4),(R+0),4);
}
B4fb23a:{NFSU2_TR(0x4fb23a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb23full));
TAIL_STATIC(0x4f2350u,4f2);
}
B4fb23f:L4fb23f:{c.instructions+=4;NFSU2_TR(0x4fb23f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb243:{NFSU2_TR(0x4fb243);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb24a:{NFSU2_TR(0x4fb24a);
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
B4fb24d:{NFSU2_TR(0x4fb24d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb24e:L4fb24e:{c.instructions+=5;NFSU2_TR(0x4fb24e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb252:{NFSU2_TR(0x4fb252);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fb254:{NFSU2_TR(0x4fb254);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb25b:{NFSU2_TR(0x4fb25b);
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
B4fb25e:{NFSU2_TR(0x4fb25e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb260:L4fb260:{c.instructions+=8;NFSU2_TR(0x4fb260);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb262:{NFSU2_TR(0x4fb262);
u8 U[4];
w4(U+0,u32(0x776d94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb267:{NFSU2_TR(0x4fb267);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb26d:{NFSU2_TR(0x4fb26d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb26e:{NFSU2_TR(0x4fb26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb275:{NFSU2_TR(0x4fb275);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb276:{NFSU2_TR(0x4fb276);
u8 U[4];
w4(U+0,u32(0x12cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb27b:{NFSU2_TR(0x4fb27b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb280ull));
TAIL_STATIC(0x575620u,575);
}
B4fb280:L4fb280:{c.instructions+=5;NFSU2_TR(0x4fb280);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fb283:{NFSU2_TR(0x4fb283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fb287:{NFSU2_TR(0x4fb287);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb289:{NFSU2_TR(0x4fb289);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fb291:{NFSU2_TR(0x4fb291);
if(r1(R+518)){{goto L4fb2ae;}}
}
B4fb293:L4fb293:{c.instructions+=4;NFSU2_TR(0x4fb293);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb297:{NFSU2_TR(0x4fb297);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb298:{NFSU2_TR(0x4fb298);
__builtin_memmove((R+4),(R+0),4);
}
B4fb29a:{NFSU2_TR(0x4fb29a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb29full));
TAIL_STATIC(0x4f2600u,4f2);
}
B4fb29f:L4fb29f:{c.instructions+=4;NFSU2_TR(0x4fb29f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb2a3:{NFSU2_TR(0x4fb2a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb2aa:{NFSU2_TR(0x4fb2aa);
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
B4fb2ad:{NFSU2_TR(0x4fb2ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb2ae:L4fb2ae:{c.instructions+=5;NFSU2_TR(0x4fb2ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb2b2:{NFSU2_TR(0x4fb2b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fb2b4:{NFSU2_TR(0x4fb2b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb2bb:{NFSU2_TR(0x4fb2bb);
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
B4fb2be:{NFSU2_TR(0x4fb2be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb2c0:L4fb2c0:{c.instructions+=8;NFSU2_TR(0x4fb2c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb2c2:{NFSU2_TR(0x4fb2c2);
u8 U[4];
w4(U+0,u32(0x776db4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb2c7:{NFSU2_TR(0x4fb2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb2cd:{NFSU2_TR(0x4fb2cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb2ce:{NFSU2_TR(0x4fb2ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb2d5:{NFSU2_TR(0x4fb2d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb2d6:{NFSU2_TR(0x4fb2d6);
u8 U[4];
w4(U+0,u32(0x164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb2db:{NFSU2_TR(0x4fb2db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb2e0ull));
TAIL_STATIC(0x575620u,575);
}
B4fb2e0:L4fb2e0:{c.instructions+=5;NFSU2_TR(0x4fb2e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fb2e3:{NFSU2_TR(0x4fb2e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fb2e7:{NFSU2_TR(0x4fb2e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb2e9:{NFSU2_TR(0x4fb2e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fb2f1:{NFSU2_TR(0x4fb2f1);
if(r1(R+518)){{goto L4fb30e;}}
}
B4fb2f3:L4fb2f3:{c.instructions+=4;NFSU2_TR(0x4fb2f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb2f7:{NFSU2_TR(0x4fb2f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb2f8:{NFSU2_TR(0x4fb2f8);
__builtin_memmove((R+4),(R+0),4);
}
B4fb2fa:{NFSU2_TR(0x4fb2fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb2ffull));
TAIL_STATIC(0x4f26f0u,4f2);
}
B4fb2ff:L4fb2ff:{c.instructions+=4;NFSU2_TR(0x4fb2ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb303:{NFSU2_TR(0x4fb303);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb30a:{NFSU2_TR(0x4fb30a);
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
B4fb30d:{NFSU2_TR(0x4fb30d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb30e:L4fb30e:{c.instructions+=5;NFSU2_TR(0x4fb30e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb312:{NFSU2_TR(0x4fb312);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fb314:{NFSU2_TR(0x4fb314);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb31b:{NFSU2_TR(0x4fb31b);
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
B4fb31e:{NFSU2_TR(0x4fb31e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb320:L4fb320:{c.instructions+=13;NFSU2_TR(0x4fb320);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb322:{NFSU2_TR(0x4fb322);
u8 U[4];
w4(U+0,u32(0x776dc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb327:{NFSU2_TR(0x4fb327);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb32d:{NFSU2_TR(0x4fb32d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb32e:{NFSU2_TR(0x4fb32e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb335:{NFSU2_TR(0x4fb335);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb336:{NFSU2_TR(0x4fb336);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb33a:{NFSU2_TR(0x4fb33a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb33b:{NFSU2_TR(0x4fb33b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb33c:{NFSU2_TR(0x4fb33c);
__builtin_memmove((R+24),(R+4),4);
}
B4fb33e:{NFSU2_TR(0x4fb33e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb33f:{NFSU2_TR(0x4fb33f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb343:{NFSU2_TR(0x4fb343);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb348ull));
TAIL_STATIC(0x4f9d90u,4f9);
}
B4fb348:L4fb348:{c.instructions+=8;NFSU2_TR(0x4fb348);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fb34a:{NFSU2_TR(0x4fb34a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb34e:{NFSU2_TR(0x4fb34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb354:{NFSU2_TR(0x4fb354);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb357:{NFSU2_TR(0x4fb357);
u8 U[4];
w4(U+0,u32(0xf5a9d520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb35c:{NFSU2_TR(0x4fb35c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb35d:{NFSU2_TR(0x4fb35d);
u8 U[4];
w4(U+0,u32(0x797a30ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4fb363:{NFSU2_TR(0x4fb363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb368ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fb368:L4fb368:{c.instructions+=2;NFSU2_TR(0x4fb368);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb369:{NFSU2_TR(0x4fb369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb36eull));
TAIL_STATIC(0x50ca50u,50c);
}
B4fb36e:L4fb36e:{c.instructions+=5;NFSU2_TR(0x4fb36e);
__builtin_memmove((R+4),gp(0x836338),4);
}
B4fb374:{NFSU2_TR(0x4fb374);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fb377:{NFSU2_TR(0x4fb377);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb378:{NFSU2_TR(0x4fb378);
__builtin_memmove((R+4),(R+24),4);
}
B4fb37a:{NFSU2_TR(0x4fb37a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb37full));
TAIL_STATIC(0x497f20u,497);
}
B4fb37f:L4fb37f:{c.instructions+=5;NFSU2_TR(0x4fb37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fb382:{NFSU2_TR(0x4fb382);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb387:{NFSU2_TR(0x4fb387);
u8 U[4];
w4(U+0,u32(0x797ea0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb38c:{NFSU2_TR(0x4fb38c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb38d:{NFSU2_TR(0x4fb38d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb392ull));
TAIL_STATIC(0x542600u,542);
}
B4fb392:L4fb392:{c.instructions+=5;NFSU2_TR(0x4fb392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb395:{NFSU2_TR(0x4fb395);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb39a:{NFSU2_TR(0x4fb39a);
u8 U[4];
w4(U+0,u32(0x797e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb39f:{NFSU2_TR(0x4fb39f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3a0:{NFSU2_TR(0x4fb3a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb3a5ull));
TAIL_STATIC(0x542600u,542);
}
B4fb3a5:L4fb3a5:{c.instructions+=3;NFSU2_TR(0x4fb3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fb3a8:{NFSU2_TR(0x4fb3a8);
u8 U[4];
w4(U+0,u32(0x79907cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3ad:{NFSU2_TR(0x4fb3ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb3b2ull));
TAIL_STATIC(0x505450u,505);
}
B4fb3b2:L4fb3b2:{c.instructions+=3;NFSU2_TR(0x4fb3b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3b3:{NFSU2_TR(0x4fb3b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3b4:{NFSU2_TR(0x4fb3b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb3b9ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fb3b9:L4fb3b9:{c.instructions+=2;NFSU2_TR(0x4fb3b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3ba:{NFSU2_TR(0x4fb3ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb3bfull));
TAIL_STATIC(0x50ca00u,50c);
}
B4fb3bf:L4fb3bf:{c.instructions+=3;NFSU2_TR(0x4fb3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fb3c2:{NFSU2_TR(0x4fb3c2);
u8 U[4];
w4(U+0,u32(0x799070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3c7:{NFSU2_TR(0x4fb3c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb3ccull));
TAIL_STATIC(0x505450u,505);
}
B4fb3cc:L4fb3cc:{c.instructions+=3;NFSU2_TR(0x4fb3cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3cd:{NFSU2_TR(0x4fb3cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3ce:{NFSU2_TR(0x4fb3ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb3d3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fb3d3:L4fb3d3:{c.instructions+=2;NFSU2_TR(0x4fb3d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3d4:{NFSU2_TR(0x4fb3d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb3d9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4fb3d9:L4fb3d9:{c.instructions+=3;NFSU2_TR(0x4fb3d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fb3dc:{NFSU2_TR(0x4fb3dc);
u8 U[4];
w4(U+0,u32(0x797938ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3e1:{NFSU2_TR(0x4fb3e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb3e6ull));
TAIL_STATIC(0x505450u,505);
}
B4fb3e6:L4fb3e6:{c.instructions+=3;NFSU2_TR(0x4fb3e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3e7:{NFSU2_TR(0x4fb3e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3e8:{NFSU2_TR(0x4fb3e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb3edull));
TAIL_STATIC(0x5379c0u,537);
}
B4fb3ed:L4fb3ed:{c.instructions+=3;NFSU2_TR(0x4fb3ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B4fb3f0:{NFSU2_TR(0x4fb3f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3f1:{NFSU2_TR(0x4fb3f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb3f6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4fb3f6:L4fb3f6:{c.instructions+=3;NFSU2_TR(0x4fb3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fb3f9:{NFSU2_TR(0x4fb3f9);
u8 U[4];
w4(U+0,u32(0x797924ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb3fe:{NFSU2_TR(0x4fb3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb403ull));
TAIL_STATIC(0x505450u,505);
}
B4fb403:L4fb403:{c.instructions+=3;NFSU2_TR(0x4fb403);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb404:{NFSU2_TR(0x4fb404);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb405:{NFSU2_TR(0x4fb405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb40aull));
TAIL_STATIC(0x5379c0u,537);
}
B4fb40a:L4fb40a:{c.instructions+=2;NFSU2_TR(0x4fb40a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb40b:{NFSU2_TR(0x4fb40b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb410ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4fb410:L4fb410:{c.instructions+=5;NFSU2_TR(0x4fb410);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fb413:{NFSU2_TR(0x4fb413);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4fb416:{NFSU2_TR(0x4fb416);
u8 U[4];
w4(U+0,u32(0xe0f68e78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb41b:{NFSU2_TR(0x4fb41b);
u8 U[4];
w4(U+0,u32(0x797eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb420:{NFSU2_TR(0x4fb420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb425ull));
TAIL_STATIC(0x505450u,505);
}
B4fb425:L4fb425:{c.instructions+=3;NFSU2_TR(0x4fb425);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb426:{NFSU2_TR(0x4fb426);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb427:{NFSU2_TR(0x4fb427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb42cull));
TAIL_STATIC(0x537a10u,537);
}
B4fb42c:L4fb42c:{c.instructions+=3;NFSU2_TR(0x4fb42c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fb42f:{NFSU2_TR(0x4fb42f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb430:{NFSU2_TR(0x4fb430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb435ull));
TAIL_STATIC(0x50c900u,50c);
}
B4fb435:L4fb435:{c.instructions+=5;NFSU2_TR(0x4fb435);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb438:{NFSU2_TR(0x4fb438);
u8 U[4];
w4(U+0,u32(0x799058ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb43d:{NFSU2_TR(0x4fb43d);
u8 U[4];
w4(U+0,u32(0x799044ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb442:{NFSU2_TR(0x4fb442);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb443:{NFSU2_TR(0x4fb443);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb448ull));
TAIL_STATIC(0x542600u,542);
}
B4fb448:L4fb448:{c.instructions+=5;NFSU2_TR(0x4fb448);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fb44b:{NFSU2_TR(0x4fb44b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4fb44e:{NFSU2_TR(0x4fb44e);
u8 U[4];
w4(U+0,u32(0x87fea07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb453:{NFSU2_TR(0x4fb453);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb458:{NFSU2_TR(0x4fb458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb45dull));
TAIL_STATIC(0x505450u,505);
}
B4fb45d:L4fb45d:{c.instructions+=3;NFSU2_TR(0x4fb45d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb45e:{NFSU2_TR(0x4fb45e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb45f:{NFSU2_TR(0x4fb45f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb464ull));
TAIL_STATIC(0x537a10u,537);
}
B4fb464:L4fb464:{c.instructions+=3;NFSU2_TR(0x4fb464);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fb467:{NFSU2_TR(0x4fb467);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb468:{NFSU2_TR(0x4fb468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb46dull));
TAIL_STATIC(0x50c900u,50c);
}
B4fb46d:L4fb46d:{c.instructions+=5;NFSU2_TR(0x4fb46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fb470:{NFSU2_TR(0x4fb470);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb475:{NFSU2_TR(0x4fb475);
u8 U[4];
w4(U+0,u32(0x799034ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb47a:{NFSU2_TR(0x4fb47a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb47b:{NFSU2_TR(0x4fb47b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb480ull));
TAIL_STATIC(0x542600u,542);
}
B4fb480:L4fb480:{c.instructions+=5;NFSU2_TR(0x4fb480);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb483:{NFSU2_TR(0x4fb483);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb488:{NFSU2_TR(0x4fb488);
u8 U[4];
w4(U+0,u32(0x78f864ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb48d:{NFSU2_TR(0x4fb48d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb48e:{NFSU2_TR(0x4fb48e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb493ull));
TAIL_STATIC(0x542600u,542);
}
B4fb493:L4fb493:{c.instructions+=10;NFSU2_TR(0x4fb493);
__builtin_memmove((R+4),gp(0x836338),4);
}
B4fb499:{NFSU2_TR(0x4fb499);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4fb49c:{NFSU2_TR(0x4fb49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb4a2:{NFSU2_TR(0x4fb4a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb4a6:{NFSU2_TR(0x4fb4a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb4a7:{NFSU2_TR(0x4fb4a7);
__builtin_memmove((R+0),(R+24),4);
}
B4fb4a9:{NFSU2_TR(0x4fb4a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb4aa:{NFSU2_TR(0x4fb4aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb4b1:{NFSU2_TR(0x4fb4b1);
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
B4fb4b4:{NFSU2_TR(0x4fb4b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb4c0:L4fb4c0:{c.instructions+=14;NFSU2_TR(0x4fb4c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4c2:{NFSU2_TR(0x4fb4c2);
u8 U[4];
w4(U+0,u32(0x774a71ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4c7:{NFSU2_TR(0x4fb4c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb4cd:{NFSU2_TR(0x4fb4cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4ce:{NFSU2_TR(0x4fb4ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb4d5:{NFSU2_TR(0x4fb4d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4d6:{NFSU2_TR(0x4fb4d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb4da:{NFSU2_TR(0x4fb4da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4db:{NFSU2_TR(0x4fb4db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4dc:{NFSU2_TR(0x4fb4dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4dd:{NFSU2_TR(0x4fb4dd);
__builtin_memmove((R+24),(R+4),4);
}
B4fb4df:{NFSU2_TR(0x4fb4df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4e0:{NFSU2_TR(0x4fb4e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb4e4:{NFSU2_TR(0x4fb4e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb4e9ull));
TAIL_STATIC(0x551de0u,551);
}
B4fb4e9:L4fb4e9:{c.instructions+=13;NFSU2_TR(0x4fb4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb4ec:{NFSU2_TR(0x4fb4ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4ee:{NFSU2_TR(0x4fb4ee);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4fb4f0:{NFSU2_TR(0x4fb4f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4f1:{NFSU2_TR(0x4fb4f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4f2:{NFSU2_TR(0x4fb4f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4f4:{NFSU2_TR(0x4fb4f4);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4f9:{NFSU2_TR(0x4fb4f9);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4fe:{NFSU2_TR(0x4fb4fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb4ff:{NFSU2_TR(0x4fb4ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fb502:{NFSU2_TR(0x4fb502);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb506:{NFSU2_TR(0x4fb506);
u8 U[4];
w4(U+0,u32(0x796420ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4fb50c:{NFSU2_TR(0x4fb50c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb511ull));
TAIL_STATIC(0x542ca0u,542);
}
B4fb511:L4fb511:{c.instructions+=6;NFSU2_TR(0x4fb511);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4fb517:{NFSU2_TR(0x4fb517);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb51d:{NFSU2_TR(0x4fb51d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4fb523:{NFSU2_TR(0x4fb523);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb529:{NFSU2_TR(0x4fb529);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fb52f:{NFSU2_TR(0x4fb52f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb534ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4fb534:L4fb534:{c.instructions+=12;NFSU2_TR(0x4fb534);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb53a:{NFSU2_TR(0x4fb53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb540:{NFSU2_TR(0x4fb540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb546:{NFSU2_TR(0x4fb546);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x908ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4fb54c:{NFSU2_TR(0x4fb54c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb552:{NFSU2_TR(0x4fb552);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4fb554:{NFSU2_TR(0x4fb554);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb557:{NFSU2_TR(0x4fb557);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fb559:{NFSU2_TR(0x4fb559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb55f:{NFSU2_TR(0x4fb55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb565:{NFSU2_TR(0x4fb565);
w4(R+4,u32(0x200ull));
}
B4fb56a:{NFSU2_TR(0x4fb56a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb570:L4fb570:{c.instructions+=1;NFSU2_TR(0x4fb570);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4fb572;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fb570u);}goto L4fb570;}
}
B4fb572:L4fb572:{c.instructions+=3;NFSU2_TR(0x4fb572);
__builtin_memmove((R+4),(R+24),4);
}
B4fb574:{NFSU2_TR(0x4fb574);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fb579:{NFSU2_TR(0x4fb579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb57eull));
TAIL_STATIC(0x4f2ee0u,4f2);
}
B4fb57e:L4fb57e:{c.instructions+=1;NFSU2_TR(0x4fb57e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb583ull));
TAIL_STATIC(0x570a30u,570);
}
B4fb583:L4fb583:{c.instructions+=2;NFSU2_TR(0x4fb583);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb585:{NFSU2_TR(0x4fb585);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb595;}}
}
B4fb587:L4fb587:{c.instructions+=4;NFSU2_TR(0x4fb587);
u8 U[4];
w4(U+0,u32(0x799094ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb58c:{NFSU2_TR(0x4fb58c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fb592:{NFSU2_TR(0x4fb592);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb593:{NFSU2_TR(0x4fb593);
{goto L4fb5a1;}
}
B4fb595:L4fb595:{c.instructions+=3;NFSU2_TR(0x4fb595);
u8 U[4];
w4(U+0,u32(0x79908cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb59a:{NFSU2_TR(0x4fb59a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4fb5a0:{NFSU2_TR(0x4fb5a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb5a1:L4fb5a1:{c.instructions+=1;NFSU2_TR(0x4fb5a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb5a6ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4fb5a6:L4fb5a6:{c.instructions+=2;NFSU2_TR(0x4fb5a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4fb5a9:{NFSU2_TR(0x4fb5a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb5aeull));
TAIL_STATIC(0x585640u,585);
}
B4fb5ae:L4fb5ae:{c.instructions+=2;NFSU2_TR(0x4fb5ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fb5b0:{NFSU2_TR(0x4fb5b0);
if(r1(R+518)){{goto L4fb63c;}}
}
B4fb5b6:L4fb5b6:{c.instructions+=4;NFSU2_TR(0x4fb5b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb5b7:{NFSU2_TR(0x4fb5b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb5b8:{NFSU2_TR(0x4fb5b8);
u8 U[4];
w4(U+0,u32(0x6f70656eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb5bd:{NFSU2_TR(0x4fb5bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb5c2ull));
TAIL_STATIC(0x742b60u,742);
}
B4fb5c2:L4fb5c2:{c.instructions+=3;NFSU2_TR(0x4fb5c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fb5c5:{NFSU2_TR(0x4fb5c5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4fb5c8:{NFSU2_TR(0x4fb5c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb63c;}}
}
B4fb5ca:L4fb5ca:{c.instructions+=1;NFSU2_TR(0x4fb5ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb5cfull));
TAIL_STATIC(0x743af0u,743);
}
B4fb5cf:L4fb5cf:{c.instructions+=3;NFSU2_TR(0x4fb5cf);
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
B4fb5d1:{NFSU2_TR(0x4fb5d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb5d7:{NFSU2_TR(0x4fb5d7);
if(r1(R+518)){{goto L4fb63c;}}
}
B4fb5d9:L4fb5d9:{c.instructions+=3;NFSU2_TR(0x4fb5d9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb5db:{NFSU2_TR(0x4fb5db);
w4(R+4,u32(0x850080ull));
}
B4fb5e0:{NFSU2_TR(0x4fb5e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb5e5ull));
TAIL_STATIC(0x5031b0u,503);
}
B4fb5e5:L4fb5e5:{c.instructions+=3;NFSU2_TR(0x4fb5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fb5e8:{NFSU2_TR(0x4fb5e8);
u8 U[4];
w4(U+0,u32(0x43003b5bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb5ed:{NFSU2_TR(0x4fb5ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb5f2ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4fb5f2:L4fb5f2:{c.instructions+=6;NFSU2_TR(0x4fb5f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb5f3:{NFSU2_TR(0x4fb5f3);
u8 U[4];
w4(U+0,u32(0x7345710full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb5f8:{NFSU2_TR(0x4fb5f8);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb5fd:{NFSU2_TR(0x4fb5fd);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb602:{NFSU2_TR(0x4fb602);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb603:{NFSU2_TR(0x4fb603);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb608ull));
TAIL_STATIC(0x5585e0u,558);
}
B4fb608:L4fb608:{c.instructions+=8;NFSU2_TR(0x4fb608);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb60e:{NFSU2_TR(0x4fb60e);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4fb614:{NFSU2_TR(0x4fb614);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4fb617:{NFSU2_TR(0x4fb617);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb61d:{NFSU2_TR(0x4fb61d);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fb623:{NFSU2_TR(0x4fb623);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb629:{NFSU2_TR(0x4fb629);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fb62f:{NFSU2_TR(0x4fb62f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb634ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4fb634:L4fb634:{c.instructions+=2;NFSU2_TR(0x4fb634);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb63a:{NFSU2_TR(0x4fb63a);
{goto L4fb662;}
}
B4fb63c:L4fb63c:{c.instructions+=3;NFSU2_TR(0x4fb63c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fb63f:{NFSU2_TR(0x4fb63f);
u8 U[4];
w4(U+0,u32(0xa392d977ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb644:{NFSU2_TR(0x4fb644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb649ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4fb649:L4fb649:{c.instructions+=6;NFSU2_TR(0x4fb649);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb64a:{NFSU2_TR(0x4fb64a);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb64f:{NFSU2_TR(0x4fb64f);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb654:{NFSU2_TR(0x4fb654);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb659:{NFSU2_TR(0x4fb659);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb65a:{NFSU2_TR(0x4fb65a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb65full));
TAIL_STATIC(0x5585e0u,558);
}
B4fb65f:L4fb65f:{c.instructions+=1;NFSU2_TR(0x4fb65f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4fb662:L4fb662:{c.instructions+=8;NFSU2_TR(0x4fb662);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb666:{NFSU2_TR(0x4fb666);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb667:{NFSU2_TR(0x4fb667);
__builtin_memmove((R+0),(R+24),4);
}
B4fb669:{NFSU2_TR(0x4fb669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb66a:{NFSU2_TR(0x4fb66a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fb66b:{NFSU2_TR(0x4fb66b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb672:{NFSU2_TR(0x4fb672);
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
B4fb675:{NFSU2_TR(0x4fb675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb680:L4fb680:{c.instructions+=6;NFSU2_TR(0x4fb680);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb684:{NFSU2_TR(0x4fb684);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fb689:{NFSU2_TR(0x4fb689);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb68a:{NFSU2_TR(0x4fb68a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb68b:{NFSU2_TR(0x4fb68b);
__builtin_memmove((R+24),(R+4),4);
}
B4fb68d:{NFSU2_TR(0x4fb68d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fb7a9;}}
}
B4fb693:L4fb693:{c.instructions+=1;NFSU2_TR(0x4fb693);
if(r1(R+518)){{goto L4fb77e;}}
}
B4fb699:L4fb699:{c.instructions+=2;NFSU2_TR(0x4fb699);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb69e:{NFSU2_TR(0x4fb69e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fb73e;}}
}
B4fb6a4:L4fb6a4:{c.instructions+=1;NFSU2_TR(0x4fb6a4);
if(r1(R+518)){{goto L4fb6d4;}}
}
B4fb6a6:L4fb6a6:{c.instructions+=2;NFSU2_TR(0x4fb6a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb6ab:{NFSU2_TR(0x4fb6ab);
if(r1(R+518)){{goto L4fb6d4;}}
}
B4fb6ad:L4fb6ad:{c.instructions+=2;NFSU2_TR(0x4fb6ad);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35f8620bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fb6b2:{NFSU2_TR(0x4fb6b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb8e5;}}
}
B4fb6b8:L4fb6b8:{c.instructions+=3;NFSU2_TR(0x4fb6b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fb6bb:{NFSU2_TR(0x4fb6bb);
u8 U[4];
w4(U+0,u32(0x7990acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb6c0:{NFSU2_TR(0x4fb6c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb6c5ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4fb6c5:L4fb6c5:{c.instructions+=3;NFSU2_TR(0x4fb6c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb6c6:{NFSU2_TR(0x4fb6c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb6c7:{NFSU2_TR(0x4fb6c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb6ccull));
TAIL_STATIC(0x52cea0u,52c);
}
B4fb6cc:L4fb6cc:{c.instructions+=4;NFSU2_TR(0x4fb6cc);
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
B4fb6cf:{NFSU2_TR(0x4fb6cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb6d0:{NFSU2_TR(0x4fb6d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb6d1:{NFSU2_TR(0x4fb6d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb6d4:L4fb6d4:{c.instructions+=4;NFSU2_TR(0x4fb6d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb6d7:{NFSU2_TR(0x4fb6d7);
__builtin_memmove((R+4),(R+28),4);
}
B4fb6d9:{NFSU2_TR(0x4fb6d9);
s1(0x8500c7,u8(0x0ull));
}
B4fb6e0:{NFSU2_TR(0x4fb6e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb6e5ull));
TAIL_STATIC(0x51f530u,51f);
}
B4fb6e5:L4fb6e5:{c.instructions+=3;NFSU2_TR(0x4fb6e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb6e6:{NFSU2_TR(0x4fb6e6);
__builtin_memmove((R+4),(R+28),4);
}
B4fb6e8:{NFSU2_TR(0x4fb6e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb6edull));
TAIL_STATIC(0x51f350u,51f);
}
B4fb6ed:L4fb6ed:{c.instructions+=3;NFSU2_TR(0x4fb6ed);
__builtin_memmove((R+28),(R+0),4);
}
B4fb6ef:{NFSU2_TR(0x4fb6ef);
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
B4fb6f1:{NFSU2_TR(0x4fb6f1);
if(r1(R+518)){{goto L4fb8e5;}}
}
B4fb6f7:L4fb6f7:{c.instructions+=3;NFSU2_TR(0x4fb6f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fb6fa:{NFSU2_TR(0x4fb6fa);
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
B4fb6fc:{NFSU2_TR(0x4fb6fc);
if(r1(R+518)){{goto L4fb8e5;}}
}
B4fb702:L4fb702:{c.instructions+=4;NFSU2_TR(0x4fb702);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb705:{NFSU2_TR(0x4fb705);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb708:{NFSU2_TR(0x4fb708);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb709:{NFSU2_TR(0x4fb709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb70eull));
TAIL_STATIC(0x743140u,743);
}
B4fb70e:L4fb70e:{c.instructions+=3;NFSU2_TR(0x4fb70e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb70f:{NFSU2_TR(0x4fb70f);
u8 U[4];
w4(U+0,u32(0x7fbddcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb714:{NFSU2_TR(0x4fb714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb719ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4fb719:L4fb719:{c.instructions+=8;NFSU2_TR(0x4fb719);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fb71c:{NFSU2_TR(0x4fb71c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4fb720:{NFSU2_TR(0x4fb720);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb722:{NFSU2_TR(0x4fb722);
__builtin_memmove(gp(0x7fbe04),(R+0),2);
}
B4fb728:{NFSU2_TR(0x4fb728);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb72b:{NFSU2_TR(0x4fb72b);
u8 U[4];
w4(U+0,u32(0x79909cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb730:{NFSU2_TR(0x4fb730);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb731:{NFSU2_TR(0x4fb731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb736ull));
TAIL_STATIC(0x537980u,537);
}
B4fb736:L4fb736:{c.instructions+=4;NFSU2_TR(0x4fb736);
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
B4fb739:{NFSU2_TR(0x4fb739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb73a:{NFSU2_TR(0x4fb73a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb73b:{NFSU2_TR(0x4fb73b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb73e:L4fb73e:{c.instructions+=2;NFSU2_TR(0x4fb73e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb743:{NFSU2_TR(0x4fb743);
if(r1(R+518)){{goto L4fb763;}}
}
B4fb745:L4fb745:{c.instructions+=2;NFSU2_TR(0x4fb745);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7345710full))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7345710full)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7345710full))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fb74a:{NFSU2_TR(0x4fb74a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb8e5;}}
}
B4fb750:L4fb750:{c.instructions+=6;NFSU2_TR(0x4fb750);
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
B4fb752:{NFSU2_TR(0x4fb752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb753:{NFSU2_TR(0x4fb753);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb759:{NFSU2_TR(0x4fb759);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb75f:{NFSU2_TR(0x4fb75f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb760:{NFSU2_TR(0x4fb760);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb763:L4fb763:{c.instructions+=3;NFSU2_TR(0x4fb763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb769:{NFSU2_TR(0x4fb769);
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
B4fb76b:{NFSU2_TR(0x4fb76b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4fb8e5;}}
}
B4fb771:L4fb771:{c.instructions+=2;NFSU2_TR(0x4fb771);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fb774:{NFSU2_TR(0x4fb774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb779ull));
TAIL_STATIC(0x54eb60u,54e);
}
B4fb779:L4fb779:{c.instructions+=3;NFSU2_TR(0x4fb779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb77a:{NFSU2_TR(0x4fb77a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb77b:{NFSU2_TR(0x4fb77b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb77e:L4fb77e:{c.instructions+=3;NFSU2_TR(0x4fb77e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb780:{NFSU2_TR(0x4fb780);
w4(R+4,u32(0x850080ull));
}
B4fb785:{NFSU2_TR(0x4fb785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb78aull));
TAIL_STATIC(0x5031b0u,503);
}
B4fb78a:L4fb78a:{c.instructions+=5;NFSU2_TR(0x4fb78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fb78d:{NFSU2_TR(0x4fb78d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb78f:{NFSU2_TR(0x4fb78f);
u8 U[4];
w4(U+0,u32(0x78f530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb794:{NFSU2_TR(0x4fb794);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb795:{NFSU2_TR(0x4fb795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb79aull));
TAIL_STATIC(0x537980u,537);
}
B4fb79a:L4fb79a:{c.instructions+=2;NFSU2_TR(0x4fb79a);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb79c:{NFSU2_TR(0x4fb79c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb7a1ull));
TAIL_STATIC(0x50d180u,50d);
}
B4fb7a1:L4fb7a1:{c.instructions+=4;NFSU2_TR(0x4fb7a1);
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
B4fb7a4:{NFSU2_TR(0x4fb7a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb7a5:{NFSU2_TR(0x4fb7a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb7a6:{NFSU2_TR(0x4fb7a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb7a9:L4fb7a9:{c.instructions+=2;NFSU2_TR(0x4fb7a9);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc0ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb7ae:{NFSU2_TR(0x4fb7ae);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fb812;}}
}
B4fb7b0:L4fb7b0:{c.instructions+=1;NFSU2_TR(0x4fb7b0);
if(r1(R+518)){{goto L4fb7ec;}}
}
B4fb7b2:L4fb7b2:{c.instructions+=2;NFSU2_TR(0x4fb7b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb7b7:{NFSU2_TR(0x4fb7b7);
if(r1(R+518)){{goto L4fb7d1;}}
}
B4fb7b9:L4fb7b9:{c.instructions+=2;NFSU2_TR(0x4fb7b9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9803f6e2ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fb7be:{NFSU2_TR(0x4fb7be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb8e5;}}
}
B4fb7c4:L4fb7c4:{c.instructions+=2;NFSU2_TR(0x4fb7c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fb7c7:{NFSU2_TR(0x4fb7c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb7ccull));
TAIL_STATIC(0x54eb80u,54e);
}
B4fb7cc:L4fb7cc:{c.instructions+=3;NFSU2_TR(0x4fb7cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb7cd:{NFSU2_TR(0x4fb7cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb7ce:{NFSU2_TR(0x4fb7ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb7d1:L4fb7d1:{c.instructions+=3;NFSU2_TR(0x4fb7d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb7d7:{NFSU2_TR(0x4fb7d7);
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
B4fb7d9:{NFSU2_TR(0x4fb7d9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4fb8e5;}}
}
B4fb7df:L4fb7df:{c.instructions+=2;NFSU2_TR(0x4fb7df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fb7e2:{NFSU2_TR(0x4fb7e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb7e7ull));
TAIL_STATIC(0x54eb40u,54e);
}
B4fb7e7:L4fb7e7:{c.instructions+=3;NFSU2_TR(0x4fb7e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb7e8:{NFSU2_TR(0x4fb7e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb7e9:{NFSU2_TR(0x4fb7e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb7ec:L4fb7ec:{c.instructions+=2;NFSU2_TR(0x4fb7ec);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb7ee:{NFSU2_TR(0x4fb7ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb7f3ull));
TAIL_STATIC(0x50d180u,50d);
}
B4fb7f3:L4fb7f3:{c.instructions+=6;NFSU2_TR(0x4fb7f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb7f5:{NFSU2_TR(0x4fb7f5);
s1(0x8500c7,u8(0x1ull));
}
B4fb7fc:{NFSU2_TR(0x4fb7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb7ff:{NFSU2_TR(0x4fb7ff);
u8 U[4];
w4(U+0,u32(0x79909cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb804:{NFSU2_TR(0x4fb804);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb805:{NFSU2_TR(0x4fb805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb80aull));
TAIL_STATIC(0x537980u,537);
}
B4fb80a:L4fb80a:{c.instructions+=4;NFSU2_TR(0x4fb80a);
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
B4fb80d:{NFSU2_TR(0x4fb80d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb80e:{NFSU2_TR(0x4fb80e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb80f:{NFSU2_TR(0x4fb80f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb812:L4fb812:{c.instructions+=2;NFSU2_TR(0x4fb812);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fb817:{NFSU2_TR(0x4fb817);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb8e5;}}
}
B4fb81d:L4fb81d:{c.instructions+=3;NFSU2_TR(0x4fb81d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb823:{NFSU2_TR(0x4fb823);
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
B4fb825:{NFSU2_TR(0x4fb825);
if(r1(R+518)){{goto L4fb8e5;}}
}
B4fb82b:L4fb82b:{c.instructions+=1;NFSU2_TR(0x4fb82b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb830ull));
TAIL_STATIC(0x742db0u,742);
}
B4fb830:L4fb830:{c.instructions+=4;NFSU2_TR(0x4fb830);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb836:{NFSU2_TR(0x4fb836);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb838:{NFSU2_TR(0x4fb838);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb83e:{NFSU2_TR(0x4fb83e);
if(r1(R+518)){{goto L4fb847;}}
}
B4fb840:L4fb840:{c.instructions+=2;NFSU2_TR(0x4fb840);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb845:{NFSU2_TR(0x4fb845);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb868;}}
}
B4fb847:L4fb847:{c.instructions+=8;NFSU2_TR(0x4fb847);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4fb84d:{NFSU2_TR(0x4fb84d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb853:{NFSU2_TR(0x4fb853);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4fb859:{NFSU2_TR(0x4fb859);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb85f:{NFSU2_TR(0x4fb85f);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4fb861:{NFSU2_TR(0x4fb861);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fb863:{NFSU2_TR(0x4fb863);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fb866:{NFSU2_TR(0x4fb866);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb898;}}
}
B4fb868:L4fb868:{c.instructions+=6;NFSU2_TR(0x4fb868);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4fb86e:{NFSU2_TR(0x4fb86e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb874:{NFSU2_TR(0x4fb874);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fb87a:{NFSU2_TR(0x4fb87a);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb880:{NFSU2_TR(0x4fb880);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fb886:{NFSU2_TR(0x4fb886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb88bull));
TAIL_STATIC(0x75bed4u,75b);
}
B4fb88b:L4fb88b:{c.instructions+=3;NFSU2_TR(0x4fb88b);
__builtin_memmove((R+4),(R+24),4);
}
B4fb88d:{NFSU2_TR(0x4fb88d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fb893:{NFSU2_TR(0x4fb893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb898ull));
TAIL_STATIC(0x4f3040u,4f3);
}
B4fb898:L4fb898:{c.instructions+=4;NFSU2_TR(0x4fb898);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb899:{NFSU2_TR(0x4fb899);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fb89f:{NFSU2_TR(0x4fb89f);
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
B4fb8a1:{NFSU2_TR(0x4fb8a1);
if(r1(R+518)){{goto L4fb8e4;}}
}
B4fb8a3:L4fb8a3:{c.instructions+=2;NFSU2_TR(0x4fb8a3);
__builtin_memmove((R+4),(R+28),4);
}
B4fb8a5:{NFSU2_TR(0x4fb8a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb8aaull));
TAIL_STATIC(0x401820u,401);
}
B4fb8aa:L4fb8aa:{c.instructions+=2;NFSU2_TR(0x4fb8aa);
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
B4fb8ac:{NFSU2_TR(0x4fb8ac);
if(r1(R+518)){{goto L4fb8e4;}}
}
B4fb8ae:L4fb8ae:{c.instructions+=8;NFSU2_TR(0x4fb8ae);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4fb8b0:{NFSU2_TR(0x4fb8b0);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb8b6:{NFSU2_TR(0x4fb8b6);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4fb8bc:{NFSU2_TR(0x4fb8bc);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fb8c2:{NFSU2_TR(0x4fb8c2);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4fb8c4:{NFSU2_TR(0x4fb8c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fb8c6:{NFSU2_TR(0x4fb8c6);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fb8c9:{NFSU2_TR(0x4fb8c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb8e4;}}
}
B4fb8cb:L4fb8cb:{c.instructions+=2;NFSU2_TR(0x4fb8cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb8cc:{NFSU2_TR(0x4fb8cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb8d1ull));
TAIL_STATIC(0x540a60u,540);
}
B4fb8d1:L4fb8d1:{c.instructions+=3;NFSU2_TR(0x4fb8d1);
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
B4fb8d4:{NFSU2_TR(0x4fb8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fb8de:{NFSU2_TR(0x4fb8de);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4fb8e4:L4fb8e4:{c.instructions+=1;NFSU2_TR(0x4fb8e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fb8e5:L4fb8e5:{c.instructions+=3;NFSU2_TR(0x4fb8e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb8e6:{NFSU2_TR(0x4fb8e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb8e7:{NFSU2_TR(0x4fb8e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb8f0:L4fb8f0:{c.instructions+=7;NFSU2_TR(0x4fb8f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb8f1:{NFSU2_TR(0x4fb8f1);
__builtin_memmove((R+28),(R+4),4);
}
B4fb8f3:{NFSU2_TR(0x4fb8f3);
__builtin_memmove((R+4),gp(0x836514),4);
}
B4fb8f9:{NFSU2_TR(0x4fb8f9);
__builtin_memmove((R+0),(R+4),4);
}
B4fb8fb:{NFSU2_TR(0x4fb8fb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0ull))));
}
B4fb900:{NFSU2_TR(0x4fb900);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xd0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fb902:{NFSU2_TR(0x4fb902);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb923;}}
}
B4fb904:L4fb904:{c.instructions+=10;NFSU2_TR(0x4fb904);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb908:{NFSU2_TR(0x4fb908);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fb90c:{NFSU2_TR(0x4fb90c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb910:{NFSU2_TR(0x4fb910);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb911:{NFSU2_TR(0x4fb911);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb915:{NFSU2_TR(0x4fb915);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb916:{NFSU2_TR(0x4fb916);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb917:{NFSU2_TR(0x4fb917);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb918:{NFSU2_TR(0x4fb918);
__builtin_memmove((R+4),(R+28),4);
}
B4fb91a:{NFSU2_TR(0x4fb91a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb91full));
TAIL_STATIC(0x4beb60u,4be);
}
B4fb91f:L4fb91f:{c.instructions+=2;NFSU2_TR(0x4fb91f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb920:{NFSU2_TR(0x4fb920);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb923:L4fb923:{c.instructions+=8;NFSU2_TR(0x4fb923);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb924:{NFSU2_TR(0x4fb924);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fb928:{NFSU2_TR(0x4fb928);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb929:{NFSU2_TR(0x4fb929);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4fb92d:{NFSU2_TR(0x4fb92d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb92e:{NFSU2_TR(0x4fb92e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fb932:{NFSU2_TR(0x4fb932);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fb938:{NFSU2_TR(0x4fb938);
if(r1(R+518)){{goto L4fb95c;}}
}
B4fb93a:L4fb93a:{c.instructions+=4;NFSU2_TR(0x4fb93a);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4fb940:{NFSU2_TR(0x4fb940);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb943:{NFSU2_TR(0x4fb943);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fb945:{NFSU2_TR(0x4fb945);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb95c;}}
}
B4fb947:L4fb947:{c.instructions+=7;NFSU2_TR(0x4fb947);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fb94b:{NFSU2_TR(0x4fb94b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb94c:{NFSU2_TR(0x4fb94c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb94d:{NFSU2_TR(0x4fb94d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb94e:{NFSU2_TR(0x4fb94e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb94f:{NFSU2_TR(0x4fb94f);
__builtin_memmove((R+4),(R+28),4);
}
B4fb951:{NFSU2_TR(0x4fb951);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb956ull));
TAIL_STATIC(0x5446a0u,544);
}
B4fb956:L4fb956:{c.instructions+=1;NFSU2_TR(0x4fb956);
__builtin_memmove((R+4),gp(0x836514),4);
}
B4fb95c:L4fb95c:{c.instructions+=2;NFSU2_TR(0x4fb95c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fb962:{NFSU2_TR(0x4fb962);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fba31;}}
}
B4fb968:L4fb968:{c.instructions+=1;NFSU2_TR(0x4fb968);
if(r1(R+518)){{goto L4fb9d8;}}
}
B4fb96a:L4fb96a:{c.instructions+=2;NFSU2_TR(0x4fb96a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x35f8620bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fb970:{NFSU2_TR(0x4fb970);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fb9be;}}
}
B4fb972:L4fb972:{c.instructions+=1;NFSU2_TR(0x4fb972);
if(r1(R+518)){{goto L4fb9ca;}}
}
B4fb974:L4fb974:{c.instructions+=2;NFSU2_TR(0x4fb974);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fb97a:{NFSU2_TR(0x4fb97a);
if(r1(R+518)){{goto L4fb99e;}}
}
B4fb97c:L4fb97c:{c.instructions+=2;NFSU2_TR(0x4fb97c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34dc1becull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fb982:{NFSU2_TR(0x4fb982);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fbb4b;}}
}
B4fb988:L4fb988:{c.instructions+=4;NFSU2_TR(0x4fb988);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4fb98e:{NFSU2_TR(0x4fb98e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x6cull))));
}
B4fb991:{NFSU2_TR(0x4fb991);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb992:{NFSU2_TR(0x4fb992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb997ull));
TAIL_STATIC(0x4c5fd0u,4c5);
}
B4fb997:L4fb997:{c.instructions+=5;NFSU2_TR(0x4fb997);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb998:{NFSU2_TR(0x4fb998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fb999:{NFSU2_TR(0x4fb999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fb99a:{NFSU2_TR(0x4fb99a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb99b:{NFSU2_TR(0x4fb99b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb99e:L4fb99e:{c.instructions+=8;NFSU2_TR(0x4fb99e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fb9a2:{NFSU2_TR(0x4fb9a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb9a3:{NFSU2_TR(0x4fb9a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb9a4:{NFSU2_TR(0x4fb9a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb9a5:{NFSU2_TR(0x4fb9a5);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fb9aa:{NFSU2_TR(0x4fb9aa);
__builtin_memmove((R+4),(R+28),4);
}
B4fb9ac:{NFSU2_TR(0x4fb9ac);
__builtin_memmove(gp(0x836538),(R+12),4);
}
B4fb9b2:{NFSU2_TR(0x4fb9b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb9b7ull));
TAIL_STATIC(0x4f3780u,4f3);
}
B4fb9b7:L4fb9b7:{c.instructions+=5;NFSU2_TR(0x4fb9b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb9b8:{NFSU2_TR(0x4fb9b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fb9b9:{NFSU2_TR(0x4fb9b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fb9ba:{NFSU2_TR(0x4fb9ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb9bb:{NFSU2_TR(0x4fb9bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb9be:L4fb9be:{c.instructions+=2;NFSU2_TR(0x4fb9be);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x3a2be557ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3a2be557ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3a2be557ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fb9c4:{NFSU2_TR(0x4fb9c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fbb4b;}}
}
B4fb9ca:L4fb9ca:{c.instructions+=2;NFSU2_TR(0x4fb9ca);
__builtin_memmove((R+4),(R+28),4);
}
B4fb9cc:{NFSU2_TR(0x4fb9cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fb9d1ull));
TAIL_STATIC(0x4f3570u,4f3);
}
B4fb9d1:L4fb9d1:{c.instructions+=5;NFSU2_TR(0x4fb9d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fb9d2:{NFSU2_TR(0x4fb9d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fb9d3:{NFSU2_TR(0x4fb9d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fb9d4:{NFSU2_TR(0x4fb9d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fb9d5:{NFSU2_TR(0x4fb9d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fb9d8:L4fb9d8:{c.instructions+=4;NFSU2_TR(0x4fb9d8);
__builtin_memmove((R+0),(R+4),4);
}
B4fb9da:{NFSU2_TR(0x4fb9da);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0ull))));
}
B4fb9df:{NFSU2_TR(0x4fb9df);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fb9e2:{NFSU2_TR(0x4fb9e2);
if(r1(R+518)){{goto L4fb9ee;}}
}
B4fb9e4:L4fb9e4:{c.instructions+=2;NFSU2_TR(0x4fb9e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fb9e7:{NFSU2_TR(0x4fb9e7);
if(r1(R+518)){{goto L4fb9ee;}}
}
B4fb9e9:L4fb9e9:{c.instructions+=2;NFSU2_TR(0x4fb9e9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fb9ec:{NFSU2_TR(0x4fb9ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fb9f7;}}
}
B4fb9ee:L4fb9ee:{c.instructions+=2;NFSU2_TR(0x4fb9ee);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+5))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fb9f1:{NFSU2_TR(0x4fb9f1);
if(r1(R+518)){{goto L4fbb4b;}}
}
B4fb9f7:L4fb9f7:{c.instructions+=4;NFSU2_TR(0x4fb9f7);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4fb9fd:{NFSU2_TR(0x4fb9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fba00:{NFSU2_TR(0x4fba00);
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
B4fba02:{NFSU2_TR(0x4fba02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fbb4b;}}
}
B4fba08:L4fba08:{c.instructions+=2;NFSU2_TR(0x4fba08);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fba0d:{NFSU2_TR(0x4fba0d);
if(r1(R+518)){{goto L4fbb4b;}}
}
B4fba13:L4fba13:{c.instructions+=4;NFSU2_TR(0x4fba13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fba16:{NFSU2_TR(0x4fba16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fba17:{NFSU2_TR(0x4fba17);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fba1c:{NFSU2_TR(0x4fba1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fba21ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4fba21:L4fba21:{c.instructions+=7;NFSU2_TR(0x4fba21);
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
B4fba24:{NFSU2_TR(0x4fba24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fba25:{NFSU2_TR(0x4fba25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fba26:{NFSU2_TR(0x4fba26);
__builtin_memmove(gp(0x836538),(R+12),4);
}
B4fba2c:{NFSU2_TR(0x4fba2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fba2d:{NFSU2_TR(0x4fba2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fba2e:{NFSU2_TR(0x4fba2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fba31:L4fba31:{c.instructions+=2;NFSU2_TR(0x4fba31);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xda5b8712ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xda5b8712ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fba37:{NFSU2_TR(0x4fba37);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fbb12;}}
}
B4fba3d:L4fba3d:{c.instructions+=1;NFSU2_TR(0x4fba3d);
if(r1(R+518)){{goto L4fbae1;}}
}
B4fba43:L4fba43:{c.instructions+=2;NFSU2_TR(0x4fba43);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fba49:{NFSU2_TR(0x4fba49);
if(r1(R+518)){{goto L4fbabd;}}
}
B4fba4b:L4fba4b:{c.instructions+=2;NFSU2_TR(0x4fba4b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xc9d30688ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc9d30688ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc9d30688ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fba51:{NFSU2_TR(0x4fba51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fbb4b;}}
}
B4fba57:L4fba57:{c.instructions+=2;NFSU2_TR(0x4fba57);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fba5d:{NFSU2_TR(0x4fba5d);
if(r1(R+518)){{goto L4fba6f;}}
}
B4fba5f:L4fba5f:{c.instructions+=3;NFSU2_TR(0x4fba5f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fba61:{NFSU2_TR(0x4fba61);
__builtin_memmove((R+4),(R+28),4);
}
B4fba63:{NFSU2_TR(0x4fba63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fba68ull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4fba68:L4fba68:{c.instructions+=5;NFSU2_TR(0x4fba68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fba69:{NFSU2_TR(0x4fba69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fba6a:{NFSU2_TR(0x4fba6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fba6b:{NFSU2_TR(0x4fba6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fba6c:{NFSU2_TR(0x4fba6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fba6f:L4fba6f:{c.instructions+=2;NFSU2_TR(0x4fba6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fba75:{NFSU2_TR(0x4fba75);
if(r1(R+518)){{goto L4fba96;}}
}
B4fba77:L4fba77:{c.instructions+=2;NFSU2_TR(0x4fba77);
w4(R+4,u32(0x83a9d0ull));
}
B4fba7c:{NFSU2_TR(0x4fba7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fba81ull));
TAIL_STATIC(0x5347c0u,534);
}
B4fba81:L4fba81:{c.instructions+=3;NFSU2_TR(0x4fba81);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fba86:{NFSU2_TR(0x4fba86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fba87:{NFSU2_TR(0x4fba87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fba8cull));
TAIL_STATIC(0x4a31d0u,4a3);
}
B4fba8c:L4fba8c:{c.instructions+=6;NFSU2_TR(0x4fba8c);
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
B4fba8f:{NFSU2_TR(0x4fba8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fba90:{NFSU2_TR(0x4fba90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fba91:{NFSU2_TR(0x4fba91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fba92:{NFSU2_TR(0x4fba92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fba93:{NFSU2_TR(0x4fba93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fba96:L4fba96:{c.instructions+=4;NFSU2_TR(0x4fba96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fba99:{NFSU2_TR(0x4fba99);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fba9e:{NFSU2_TR(0x4fba9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fba9f:{NFSU2_TR(0x4fba9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbaa4ull));
TAIL_STATIC(0x537be0u,537);
}
B4fbaa4:L4fbaa4:{c.instructions+=9;NFSU2_TR(0x4fbaa4);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4fbaa9:{NFSU2_TR(0x4fbaa9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4fbaac:{NFSU2_TR(0x4fbaac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fbaad:{NFSU2_TR(0x4fbaad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fbaae:{NFSU2_TR(0x4fbaae);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fbab3:{NFSU2_TR(0x4fbab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fbab4:{NFSU2_TR(0x4fbab4);
__builtin_memmove(gp(0x836514),(R+0),4);
}
B4fbab9:{NFSU2_TR(0x4fbab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fbaba:{NFSU2_TR(0x4fbaba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbabd:L4fbabd:{c.instructions+=2;NFSU2_TR(0x4fbabd);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fbac3:{NFSU2_TR(0x4fbac3);
if(r1(R+518)){{goto L4fbb4b;}}
}
B4fbac9:L4fbac9:{c.instructions+=4;NFSU2_TR(0x4fbac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fbacc:{NFSU2_TR(0x4fbacc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbacd:{NFSU2_TR(0x4fbacd);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbad2:{NFSU2_TR(0x4fbad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbad7ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4fbad7:L4fbad7:{c.instructions+=6;NFSU2_TR(0x4fbad7);
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
B4fbada:{NFSU2_TR(0x4fbada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fbadb:{NFSU2_TR(0x4fbadb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fbadc:{NFSU2_TR(0x4fbadc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fbadd:{NFSU2_TR(0x4fbadd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fbade:{NFSU2_TR(0x4fbade);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbae1:L4fbae1:{c.instructions+=3;NFSU2_TR(0x4fbae1);
__builtin_memmove((R+4),(R+28),4);
}
B4fbae3:{NFSU2_TR(0x4fbae3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fbae6:{NFSU2_TR(0x4fbae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbaebull));
TAIL_STATIC(0x50ced0u,50c);
}
B4fbaeb:L4fbaeb:{c.instructions+=3;NFSU2_TR(0x4fbaeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbaec:{NFSU2_TR(0x4fbaec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbaed:{NFSU2_TR(0x4fbaed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbaf2ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4fbaf2:L4fbaf2:{c.instructions+=5;NFSU2_TR(0x4fbaf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4fbaf5:{NFSU2_TR(0x4fbaf5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbaf7:{NFSU2_TR(0x4fbaf7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbaf8:{NFSU2_TR(0x4fbaf8);
w4(R+4,u32(0x83a9e0ull));
}
B4fbafd:{NFSU2_TR(0x4fbafd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbb02ull));
TAIL_STATIC(0x502f40u,502);
}
B4fbb02:L4fbb02:{c.instructions+=3;NFSU2_TR(0x4fbb02);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb04:{NFSU2_TR(0x4fbb04);
__builtin_memmove((R+4),(R+28),4);
}
B4fbb06:{NFSU2_TR(0x4fbb06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbb0bull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4fbb0b:L4fbb0b:{c.instructions+=5;NFSU2_TR(0x4fbb0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fbb0c:{NFSU2_TR(0x4fbb0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fbb0d:{NFSU2_TR(0x4fbb0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fbb0e:{NFSU2_TR(0x4fbb0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fbb0f:{NFSU2_TR(0x4fbb0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbb12:L4fbb12:{c.instructions+=2;NFSU2_TR(0x4fbb12);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xf35d144eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xf35d144eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xf35d144eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fbb18:{NFSU2_TR(0x4fbb18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fbb4b;}}
}
B4fbb1a:L4fbb1a:{c.instructions+=11;NFSU2_TR(0x4fbb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbb1d:{NFSU2_TR(0x4fbb1d);
u8 U[4];
w4(U+0,u32(0x7990bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb22:{NFSU2_TR(0x4fbb22);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb24:{NFSU2_TR(0x4fbb24);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb29:{NFSU2_TR(0x4fbb29);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb2e:{NFSU2_TR(0x4fbb2e);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb33:{NFSU2_TR(0x4fbb33);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb38:{NFSU2_TR(0x4fbb38);
u8 U[4];
w4(U+0,u32(0x66516470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb3d:{NFSU2_TR(0x4fbb3d);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb42:{NFSU2_TR(0x4fbb42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb43:{NFSU2_TR(0x4fbb43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbb48ull));
TAIL_STATIC(0x558750u,558);
}
B4fbb48:L4fbb48:{c.instructions+=1;NFSU2_TR(0x4fbb48);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fbb4b:L4fbb4b:{c.instructions+=5;NFSU2_TR(0x4fbb4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fbb4c:{NFSU2_TR(0x4fbb4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fbb4d:{NFSU2_TR(0x4fbb4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fbb4e:{NFSU2_TR(0x4fbb4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fbb4f:{NFSU2_TR(0x4fbb4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbb60:L4fbb60:{c.instructions+=8;NFSU2_TR(0x4fbb60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb62:{NFSU2_TR(0x4fbb62);
u8 U[4];
w4(U+0,u32(0x776df4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb67:{NFSU2_TR(0x4fbb67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbb6d:{NFSU2_TR(0x4fbb6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb6e:{NFSU2_TR(0x4fbb6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbb75:{NFSU2_TR(0x4fbb75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb76:{NFSU2_TR(0x4fbb76);
u8 U[4];
w4(U+0,u32(0x78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb78:{NFSU2_TR(0x4fbb78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbb7dull));
TAIL_STATIC(0x575620u,575);
}
B4fbb7d:L4fbb7d:{c.instructions+=5;NFSU2_TR(0x4fbb7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fbb80:{NFSU2_TR(0x4fbb80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb84:{NFSU2_TR(0x4fbb84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fbb86:{NFSU2_TR(0x4fbb86);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fbb8e:{NFSU2_TR(0x4fbb8e);
if(r1(R+518)){{goto L4fbbab;}}
}
B4fbb90:L4fbb90:{c.instructions+=4;NFSU2_TR(0x4fbb90);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbb94:{NFSU2_TR(0x4fbb94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbb95:{NFSU2_TR(0x4fbb95);
__builtin_memmove((R+4),(R+0),4);
}
B4fbb97:{NFSU2_TR(0x4fbb97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbb9cull));
TAIL_STATIC(0x4f3be0u,4f3);
}
B4fbb9c:L4fbb9c:{c.instructions+=4;NFSU2_TR(0x4fbb9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbba0:{NFSU2_TR(0x4fbba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbba7:{NFSU2_TR(0x4fbba7);
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
B4fbbaa:{NFSU2_TR(0x4fbbaa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbbab:L4fbbab:{c.instructions+=5;NFSU2_TR(0x4fbbab);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbbaf:{NFSU2_TR(0x4fbbaf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fbbb1:{NFSU2_TR(0x4fbbb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbbb8:{NFSU2_TR(0x4fbbb8);
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
B4fbbbb:{NFSU2_TR(0x4fbbbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbbc0:L4fbbc0:{c.instructions+=14;NFSU2_TR(0x4fbbc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbbc2:{NFSU2_TR(0x4fbbc2);
u8 U[4];
w4(U+0,u32(0x776e16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbbc7:{NFSU2_TR(0x4fbbc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbbcd:{NFSU2_TR(0x4fbbcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbbce:{NFSU2_TR(0x4fbbce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbbd5:{NFSU2_TR(0x4fbbd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbbd6:{NFSU2_TR(0x4fbbd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbbda:{NFSU2_TR(0x4fbbda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbbdb:{NFSU2_TR(0x4fbbdb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbbdc:{NFSU2_TR(0x4fbbdc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbbdd:{NFSU2_TR(0x4fbbdd);
__builtin_memmove((R+24),(R+4),4);
}
B4fbbdf:{NFSU2_TR(0x4fbbdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbbe0:{NFSU2_TR(0x4fbbe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbbe4:{NFSU2_TR(0x4fbbe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbbe9ull));
TAIL_STATIC(0x552780u,552);
}
B4fbbe9:L4fbbe9:{c.instructions+=25;NFSU2_TR(0x4fbbe9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4fbbeb:{NFSU2_TR(0x4fbbeb);
u8 U[4];
w4(U+0,u32(0x799108ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4fbbf1:{NFSU2_TR(0x4fbbf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbbf7:{NFSU2_TR(0x4fbbf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbbfd:{NFSU2_TR(0x4fbbfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc03:{NFSU2_TR(0x4fbc03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc09:{NFSU2_TR(0x4fbc09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc0f:{NFSU2_TR(0x4fbc0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc15:{NFSU2_TR(0x4fbc15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc1b:{NFSU2_TR(0x4fbc1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc21:{NFSU2_TR(0x4fbc21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc27:{NFSU2_TR(0x4fbc27);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4fbc2d:{NFSU2_TR(0x4fbc2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc33:{NFSU2_TR(0x4fbc33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc39:{NFSU2_TR(0x4fbc39);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc3d:{NFSU2_TR(0x4fbc3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4fbc3f:{NFSU2_TR(0x4fbc3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc42:{NFSU2_TR(0x4fbc42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbc45:{NFSU2_TR(0x4fbc45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbc46:{NFSU2_TR(0x4fbc46);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fbc4b:{NFSU2_TR(0x4fbc4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc55:{NFSU2_TR(0x4fbc55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc5b:{NFSU2_TR(0x4fbc5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fbc61:{NFSU2_TR(0x4fbc61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc67:{NFSU2_TR(0x4fbc67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbc6cull));
TAIL_STATIC(0x4a3d50u,4a3);
}
B4fbc6c:L4fbc6c:{c.instructions+=7;NFSU2_TR(0x4fbc6c);
__builtin_memmove((R+8),gp(0x890118),4);
}
B4fbc72:{NFSU2_TR(0x4fbc72);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbc75:{NFSU2_TR(0x4fbc75);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4fbc77:{NFSU2_TR(0x4fbc77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fbc7a:{NFSU2_TR(0x4fbc7a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fbc7c:{NFSU2_TR(0x4fbc7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbc80:{NFSU2_TR(0x4fbc80);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fbd7d;}}
}
B4fbc86:L4fbc86:{c.instructions+=2;NFSU2_TR(0x4fbc86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbc87:{NFSU2_TR(0x4fbc87);
{goto L4fbc90;}
}
B4fbc90:L4fbc90:{c.instructions+=3;NFSU2_TR(0x4fbc90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x851044ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4fbc97:{NFSU2_TR(0x4fbc97);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4fbc9a:{NFSU2_TR(0x4fbc9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fbd67;}}
}
B4fbca0:L4fbca0:{c.instructions+=2;NFSU2_TR(0x4fbca0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fbca2:{NFSU2_TR(0x4fbca2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fbcbd;}}
}
B4fbca4:L4fbca4:{c.instructions+=2;NFSU2_TR(0x4fbca4);
__builtin_memmove((R+4),(R+24),4);
}
B4fbca6:{NFSU2_TR(0x4fbca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbcabull));
TAIL_STATIC(0x4f3ca0u,4f3);
}
B4fbcab:L4fbcab:{c.instructions+=4;NFSU2_TR(0x4fbcab);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbcb0:{NFSU2_TR(0x4fbcb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbcb1:{NFSU2_TR(0x4fbcb1);
__builtin_memmove((R+4),(R+24),4);
}
B4fbcb3:{NFSU2_TR(0x4fbcb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbcb8ull));
TAIL_STATIC(0x4a4480u,4a4);
}
B4fbcb8:L4fbcb8:{c.instructions+=1;NFSU2_TR(0x4fbcb8);
{goto L4fbd67;}
}
B4fbcbd:L4fbcbd:{c.instructions+=3;NFSU2_TR(0x4fbcbd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fbcbf:{NFSU2_TR(0x4fbcbf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fbcc1:{NFSU2_TR(0x4fbcc1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fbd67;}}
}
B4fbcc7:L4fbcc7:{c.instructions+=1;NFSU2_TR(0x4fbcc7);
{goto L4fbcd0;}
}
B4fbcd0:L4fbcd0:{c.instructions+=8;NFSU2_TR(0x4fbcd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbcd6:{NFSU2_TR(0x4fbcd6);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4fbcdc:{NFSU2_TR(0x4fbcdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbcdf:{NFSU2_TR(0x4fbcdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fbce2:{NFSU2_TR(0x4fbce2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4fbce3:{NFSU2_TR(0x4fbce3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fbce5:{NFSU2_TR(0x4fbce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbceb:{NFSU2_TR(0x4fbceb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4fbcef;}}
}
B4fbced:L4fbced:{c.instructions+=1;NFSU2_TR(0x4fbced);
__builtin_memmove((R+4),(R+28),4);
}
B4fbcef:L4fbcef:{c.instructions+=3;NFSU2_TR(0x4fbcef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fbcf1:{NFSU2_TR(0x4fbcf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbcf7:{NFSU2_TR(0x4fbcf7);
if(r1(R+518)){{goto L4fbd4a;}}
}
B4fbcf9:L4fbcf9:{c.instructions+=5;NFSU2_TR(0x4fbcf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4fbcfc:{NFSU2_TR(0x4fbcfc);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbcfe:{NFSU2_TR(0x4fbcfe);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbd00:{NFSU2_TR(0x4fbd00);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbd05:{NFSU2_TR(0x4fbd05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbd0aull));
TAIL_STATIC(0x50d260u,50d);
}
B4fbd0a:L4fbd0a:{c.instructions+=3;NFSU2_TR(0x4fbd0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbd0b:{NFSU2_TR(0x4fbd0b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbd0c:{NFSU2_TR(0x4fbd0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbd11ull));
TAIL_STATIC(0x51de60u,51d);
}
B4fbd11:L4fbd11:{c.instructions+=7;NFSU2_TR(0x4fbd11);
w4(R+0,u32(0x1ull));
}
B4fbd16:{NFSU2_TR(0x4fbd16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4fbd19:{NFSU2_TR(0x4fbd19);
__builtin_memmove((R+4),(R+24),4);
}
B4fbd1b:{NFSU2_TR(0x4fbd1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbd21:{NFSU2_TR(0x4fbd21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbd27:{NFSU2_TR(0x4fbd27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbd2d:{NFSU2_TR(0x4fbd2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbd32ull));
TAIL_STATIC(0x52fd40u,52f);
}
B4fbd32:L4fbd32:{c.instructions+=2;NFSU2_TR(0x4fbd32);
__builtin_memmove((R+4),(R+24),4);
}
B4fbd34:{NFSU2_TR(0x4fbd34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbd39ull));
TAIL_STATIC(0x4bff00u,4bf);
}
B4fbd39:L4fbd39:{c.instructions+=3;NFSU2_TR(0x4fbd39);
__builtin_memmove((R+4),(R+24),4);
}
B4fbd3b:{NFSU2_TR(0x4fbd3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fbd41:{NFSU2_TR(0x4fbd41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbd46ull));
TAIL_STATIC(0x4f3ca0u,4f3);
}
B4fbd46:L4fbd46:{c.instructions+=1;NFSU2_TR(0x4fbd46);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4fbd4a:L4fbd4a:{c.instructions+=5;NFSU2_TR(0x4fbd4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fbd50:{NFSU2_TR(0x4fbd50);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbd55:{NFSU2_TR(0x4fbd55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbd56:{NFSU2_TR(0x4fbd56);
__builtin_memmove((R+4),(R+24),4);
}
B4fbd58:{NFSU2_TR(0x4fbd58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbd5dull));
TAIL_STATIC(0x4a4480u,4a4);
}
B4fbd5d:L4fbd5d:{c.instructions+=3;NFSU2_TR(0x4fbd5d);
__builtin_memmove((R+0),(R+28),4);
}
B4fbd5f:{NFSU2_TR(0x4fbd5f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fbd61:{NFSU2_TR(0x4fbd61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fbcd0u);}goto L4fbcd0;}}
}
B4fbd67:L4fbd67:{c.instructions+=6;NFSU2_TR(0x4fbd67);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4fbd6c:{NFSU2_TR(0x4fbd6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbd6f:{NFSU2_TR(0x4fbd6f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4fbd70:{NFSU2_TR(0x4fbd70);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fbd72:{NFSU2_TR(0x4fbd72);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbd76:{NFSU2_TR(0x4fbd76);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fbc90u);}goto L4fbc90;}}
}
B4fbd7c:L4fbd7c:{c.instructions+=1;NFSU2_TR(0x4fbd7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fbd7d:L4fbd7d:{c.instructions+=8;NFSU2_TR(0x4fbd7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbd81:{NFSU2_TR(0x4fbd81);
__builtin_memmove((R+0),(R+24),4);
}
B4fbd83:{NFSU2_TR(0x4fbd83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fbd84:{NFSU2_TR(0x4fbd84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fbd85:{NFSU2_TR(0x4fbd85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fbd86:{NFSU2_TR(0x4fbd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbd8d:{NFSU2_TR(0x4fbd8d);
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
B4fbd90:{NFSU2_TR(0x4fbd90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbda0:L4fbda0:{c.instructions+=3;NFSU2_TR(0x4fbda0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbda1:{NFSU2_TR(0x4fbda1);
__builtin_memmove((R+24),(R+4),4);
}
B4fbda3:{NFSU2_TR(0x4fbda3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbda8ull));
{goto L4fbdc0;}
}
B4fbda8:L4fbda8:{c.instructions+=2;NFSU2_TR(0x4fbda8);
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
B4fbdad:{NFSU2_TR(0x4fbdad);
if(r1(R+518)){{goto L4fbdb8;}}
}
B4fbdaf:L4fbdaf:{c.instructions+=2;NFSU2_TR(0x4fbdaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbdb0:{NFSU2_TR(0x4fbdb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbdb5ull));
TAIL_STATIC(0x575630u,575);
}
B4fbdb5:L4fbdb5:{c.instructions+=1;NFSU2_TR(0x4fbdb5);
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
B4fbdb8:L4fbdb8:{c.instructions+=3;NFSU2_TR(0x4fbdb8);
__builtin_memmove((R+0),(R+24),4);
}
B4fbdba:{NFSU2_TR(0x4fbdba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fbdbb:{NFSU2_TR(0x4fbdbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbdc0:L4fbdc0:{c.instructions+=13;NFSU2_TR(0x4fbdc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbdc2:{NFSU2_TR(0x4fbdc2);
u8 U[4];
w4(U+0,u32(0x776e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbdc7:{NFSU2_TR(0x4fbdc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbdcd:{NFSU2_TR(0x4fbdcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbdce:{NFSU2_TR(0x4fbdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbdd5:{NFSU2_TR(0x4fbdd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbdd6:{NFSU2_TR(0x4fbdd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbdd7:{NFSU2_TR(0x4fbdd7);
__builtin_memmove((R+24),(R+4),4);
}
B4fbdd9:{NFSU2_TR(0x4fbdd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbddd:{NFSU2_TR(0x4fbddd);
u8 U[4];
w4(U+0,u32(0x799108ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4fbde3:{NFSU2_TR(0x4fbde3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fbde9:{NFSU2_TR(0x4fbde9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fbdf1:{NFSU2_TR(0x4fbdf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbdf6ull));
TAIL_STATIC(0x4358e0u,435);
}
B4fbdf6:L4fbdf6:{c.instructions+=3;NFSU2_TR(0x4fbdf6);
__builtin_memmove((R+4),(R+24),4);
}
B4fbdf8:{NFSU2_TR(0x4fbdf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fbe00:{NFSU2_TR(0x4fbe00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbe05ull));
TAIL_STATIC(0x4cbc30u,4cb);
}
B4fbe05:L4fbe05:{c.instructions+=5;NFSU2_TR(0x4fbe05);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbe09:{NFSU2_TR(0x4fbe09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fbe0a:{NFSU2_TR(0x4fbe0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbe11:{NFSU2_TR(0x4fbe11);
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
B4fbe14:{NFSU2_TR(0x4fbe14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbe20:L4fbe20:{c.instructions+=6;NFSU2_TR(0x4fbe20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbe24:{NFSU2_TR(0x4fbe24);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fbe29:{NFSU2_TR(0x4fbe29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe2a:{NFSU2_TR(0x4fbe2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe2b:{NFSU2_TR(0x4fbe2b);
__builtin_memmove((R+24),(R+4),4);
}
B4fbe2d:{NFSU2_TR(0x4fbe2d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fbedf;}}
}
B4fbe33:L4fbe33:{c.instructions+=1;NFSU2_TR(0x4fbe33);
if(r1(R+518)){{goto L4fbe92;}}
}
B4fbe35:L4fbe35:{c.instructions+=2;NFSU2_TR(0x4fbe35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fbe3a:{NFSU2_TR(0x4fbe3a);
if(r1(R+518)){{goto L4fbe58;}}
}
B4fbe3c:L4fbe3c:{c.instructions+=2;NFSU2_TR(0x4fbe3c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fbe41:{NFSU2_TR(0x4fbe41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fbeee;}}
}
B4fbe47:L4fbe47:{c.instructions+=3;NFSU2_TR(0x4fbe47);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe4c:{NFSU2_TR(0x4fbe4c);
__builtin_memmove((R+4),(R+24),4);
}
B4fbe4e:{NFSU2_TR(0x4fbe4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbe53ull));
TAIL_STATIC(0x4f3de0u,4f3);
}
B4fbe53:L4fbe53:{c.instructions+=3;NFSU2_TR(0x4fbe53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fbe54:{NFSU2_TR(0x4fbe54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fbe55:{NFSU2_TR(0x4fbe55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbe58:L4fbe58:{c.instructions+=4;NFSU2_TR(0x4fbe58);
__builtin_memmove((R+0),gp(0x7f45a1),1);
}
B4fbe5d:{NFSU2_TR(0x4fbe5d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fbe5f:{NFSU2_TR(0x4fbe5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe61:{NFSU2_TR(0x4fbe61);
if(r1(R+518)){{goto L4fbe6e;}}
}
B4fbe63:L4fbe63:{c.instructions+=4;NFSU2_TR(0x4fbe63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbe66:{NFSU2_TR(0x4fbe66);
u8 U[4];
w4(U+0,u32(0x78f098ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe6b:{NFSU2_TR(0x4fbe6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe6c:{NFSU2_TR(0x4fbe6c);
{goto L4fbe77;}
}
B4fbe6e:L4fbe6e:{c.instructions+=3;NFSU2_TR(0x4fbe6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbe71:{NFSU2_TR(0x4fbe71);
u8 U[4];
w4(U+0,u32(0x78f158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe76:{NFSU2_TR(0x4fbe76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe77:L4fbe77:{c.instructions+=1;NFSU2_TR(0x4fbe77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbe7cull));
TAIL_STATIC(0x537980u,537);
}
B4fbe7c:L4fbe7c:{c.instructions+=5;NFSU2_TR(0x4fbe7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fbe7f:{NFSU2_TR(0x4fbe7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fbe82:{NFSU2_TR(0x4fbe82);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe84:{NFSU2_TR(0x4fbe84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe85:{NFSU2_TR(0x4fbe85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbe8aull));
TAIL_STATIC(0x51de60u,51d);
}
B4fbe8a:L4fbe8a:{c.instructions+=4;NFSU2_TR(0x4fbe8a);
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
B4fbe8d:{NFSU2_TR(0x4fbe8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fbe8e:{NFSU2_TR(0x4fbe8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fbe8f:{NFSU2_TR(0x4fbe8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbe92:L4fbe92:{c.instructions+=5;NFSU2_TR(0x4fbe92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbe95:{NFSU2_TR(0x4fbe95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe96:{NFSU2_TR(0x4fbe96);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe9b:{NFSU2_TR(0x4fbe9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbe9c:{NFSU2_TR(0x4fbe9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbea1ull));
TAIL_STATIC(0x537a60u,537);
}
B4fbea1:L4fbea1:{c.instructions+=5;NFSU2_TR(0x4fbea1);
__builtin_memmove((R+28),(R+0),4);
}
B4fbea3:{NFSU2_TR(0x4fbea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbea6:{NFSU2_TR(0x4fbea6);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbeab:{NFSU2_TR(0x4fbeab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbeac:{NFSU2_TR(0x4fbeac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbeb1ull));
TAIL_STATIC(0x537a60u,537);
}
B4fbeb1:L4fbeb1:{c.instructions+=3;NFSU2_TR(0x4fbeb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbeb2:{NFSU2_TR(0x4fbeb2);
__builtin_memmove((R+12),(R+0),4);
}
B4fbeb4:{NFSU2_TR(0x4fbeb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbeb9ull));
TAIL_STATIC(0x52d100u,52d);
}
B4fbeb9:L4fbeb9:{c.instructions+=4;NFSU2_TR(0x4fbeb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4fbebc:{NFSU2_TR(0x4fbebc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fbebe:{NFSU2_TR(0x4fbebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fbebf:{NFSU2_TR(0x4fbebf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fbe47u);}goto L4fbe47;}}
}
B4fbec1:L4fbec1:{c.instructions+=2;NFSU2_TR(0x4fbec1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbec2:{NFSU2_TR(0x4fbec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbec7ull));
TAIL_STATIC(0x52d100u,52d);
}
B4fbec7:L4fbec7:{c.instructions+=3;NFSU2_TR(0x4fbec7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fbeca:{NFSU2_TR(0x4fbeca);
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
B4fbecc:{NFSU2_TR(0x4fbecc);
if(r1(R+518)){{goto L4fbeee;}}
}
B4fbece:L4fbece:{c.instructions+=3;NFSU2_TR(0x4fbece);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbed3:{NFSU2_TR(0x4fbed3);
__builtin_memmove((R+4),(R+24),4);
}
B4fbed5:{NFSU2_TR(0x4fbed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbedaull));
TAIL_STATIC(0x4f3de0u,4f3);
}
B4fbeda:L4fbeda:{c.instructions+=3;NFSU2_TR(0x4fbeda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fbedb:{NFSU2_TR(0x4fbedb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fbedc:{NFSU2_TR(0x4fbedc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbedf:L4fbedf:{c.instructions+=2;NFSU2_TR(0x4fbedf);
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
B4fbee4:{NFSU2_TR(0x4fbee4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fbeee;}}
}
B4fbee6:L4fbee6:{c.instructions+=3;NFSU2_TR(0x4fbee6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbee7:{NFSU2_TR(0x4fbee7);
__builtin_memmove((R+4),(R+24),4);
}
B4fbee9:{NFSU2_TR(0x4fbee9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbeeeull));
TAIL_STATIC(0x4f3de0u,4f3);
}
B4fbeee:L4fbeee:{c.instructions+=3;NFSU2_TR(0x4fbeee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fbeef:{NFSU2_TR(0x4fbeef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fbef0:{NFSU2_TR(0x4fbef0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbf00:L4fbf00:{c.instructions+=8;NFSU2_TR(0x4fbf00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf02:{NFSU2_TR(0x4fbf02);
u8 U[4];
w4(U+0,u32(0x776e54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf07:{NFSU2_TR(0x4fbf07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbf0d:{NFSU2_TR(0x4fbf0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf0e:{NFSU2_TR(0x4fbf0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbf15:{NFSU2_TR(0x4fbf15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf16:{NFSU2_TR(0x4fbf16);
u8 U[4];
w4(U+0,u32(0x8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf1b:{NFSU2_TR(0x4fbf1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbf20ull));
TAIL_STATIC(0x575620u,575);
}
B4fbf20:L4fbf20:{c.instructions+=5;NFSU2_TR(0x4fbf20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fbf23:{NFSU2_TR(0x4fbf23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf27:{NFSU2_TR(0x4fbf27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fbf29:{NFSU2_TR(0x4fbf29);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fbf31:{NFSU2_TR(0x4fbf31);
if(r1(R+518)){{goto L4fbf4e;}}
}
B4fbf33:L4fbf33:{c.instructions+=4;NFSU2_TR(0x4fbf33);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbf37:{NFSU2_TR(0x4fbf37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf38:{NFSU2_TR(0x4fbf38);
__builtin_memmove((R+4),(R+0),4);
}
B4fbf3a:{NFSU2_TR(0x4fbf3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbf3full));
TAIL_STATIC(0x4f41f0u,4f4);
}
B4fbf3f:L4fbf3f:{c.instructions+=4;NFSU2_TR(0x4fbf3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbf43:{NFSU2_TR(0x4fbf43);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbf4a:{NFSU2_TR(0x4fbf4a);
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
B4fbf4d:{NFSU2_TR(0x4fbf4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbf4e:L4fbf4e:{c.instructions+=5;NFSU2_TR(0x4fbf4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbf52:{NFSU2_TR(0x4fbf52);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fbf54:{NFSU2_TR(0x4fbf54);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbf5b:{NFSU2_TR(0x4fbf5b);
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
B4fbf5e:{NFSU2_TR(0x4fbf5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbf60:L4fbf60:{c.instructions+=8;NFSU2_TR(0x4fbf60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf62:{NFSU2_TR(0x4fbf62);
u8 U[4];
w4(U+0,u32(0x776e74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf67:{NFSU2_TR(0x4fbf67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbf6d:{NFSU2_TR(0x4fbf6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf6e:{NFSU2_TR(0x4fbf6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbf75:{NFSU2_TR(0x4fbf75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf76:{NFSU2_TR(0x4fbf76);
u8 U[4];
w4(U+0,u32(0x94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf7b:{NFSU2_TR(0x4fbf7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbf80ull));
TAIL_STATIC(0x575620u,575);
}
B4fbf80:L4fbf80:{c.instructions+=5;NFSU2_TR(0x4fbf80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fbf83:{NFSU2_TR(0x4fbf83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf87:{NFSU2_TR(0x4fbf87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fbf89:{NFSU2_TR(0x4fbf89);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fbf91:{NFSU2_TR(0x4fbf91);
if(r1(R+518)){{goto L4fbfae;}}
}
B4fbf93:L4fbf93:{c.instructions+=4;NFSU2_TR(0x4fbf93);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbf97:{NFSU2_TR(0x4fbf97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbf98:{NFSU2_TR(0x4fbf98);
__builtin_memmove((R+4),(R+0),4);
}
B4fbf9a:{NFSU2_TR(0x4fbf9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbf9full));
TAIL_STATIC(0x4f4610u,4f4);
}
B4fbf9f:L4fbf9f:{c.instructions+=4;NFSU2_TR(0x4fbf9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbfa3:{NFSU2_TR(0x4fbfa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbfaa:{NFSU2_TR(0x4fbfaa);
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
B4fbfad:{NFSU2_TR(0x4fbfad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbfae:L4fbfae:{c.instructions+=5;NFSU2_TR(0x4fbfae);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fbfb2:{NFSU2_TR(0x4fbfb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fbfb4:{NFSU2_TR(0x4fbfb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbfbb:{NFSU2_TR(0x4fbfbb);
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
B4fbfbe:{NFSU2_TR(0x4fbfbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fbfc0:L4fbfc0:{c.instructions+=15;NFSU2_TR(0x4fbfc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbfc2:{NFSU2_TR(0x4fbfc2);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbfc7:{NFSU2_TR(0x4fbfc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fbfcd:{NFSU2_TR(0x4fbfcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbfce:{NFSU2_TR(0x4fbfce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbfd5:{NFSU2_TR(0x4fbfd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbfd6:{NFSU2_TR(0x4fbfd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbfd7:{NFSU2_TR(0x4fbfd7);
__builtin_memmove((R+24),(R+4),4);
}
B4fbfd9:{NFSU2_TR(0x4fbfd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbfda:{NFSU2_TR(0x4fbfda);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fbfde:{NFSU2_TR(0x4fbfde);
__builtin_memmove((R+4),gp(0x8364d4),4);
}
B4fbfe4:{NFSU2_TR(0x4fbfe4);
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
B4fbfe6:{NFSU2_TR(0x4fbfe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fbfee:{NFSU2_TR(0x4fbfee);
__builtin_memmove((R+28),(R+4),4);
}
B4fbff0:{NFSU2_TR(0x4fbff0);
if(r1(R+518)){TAIL_STATIC(0x4fc000u,4fc);}
}
B4fbff2:L4fbff2:{c.instructions+=1;NFSU2_TR(0x4fbff2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbff7ull));
TAIL_STATIC(0x4ecb80u,4ec);
}
B4fbff7:L4fbff7:{c.instructions+=2;NFSU2_TR(0x4fbff7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fbff8:{NFSU2_TR(0x4fbff8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fbffdull));
TAIL_STATIC(0x575630u,575);
}
B4fbffd:L4fbffd:{c.instructions+=1;NFSU2_TR(0x4fbffd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
TAIL_STATIC(0x4fc000u,4fc);
}
XIT:NFSU2_TR_EXIT(0x4fb,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
