#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4ab(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4c9(u8* __restrict R,Cpu& c);
u32 body_4ca(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4da(u8* __restrict R,Cpu& c);
u32 body_4dc(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4db,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4db,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4db(u8* __restrict R,Cpu& c);
u32 page_4db(Cpu& c){return body_4db(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4db(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4db001:goto L4db001;
case 0x4db006:goto L4db006;
case 0x4db008:c.instructions+=1;goto B4db008;
case 0x4db00a:goto L4db00a;
case 0x4db00d:c.instructions+=1;goto B4db00d;
case 0x4db00f:goto L4db00f;
case 0x4db011:goto L4db011;
case 0x4db014:c.instructions+=9;goto B4db014;
case 0x4db016:c.instructions+=8;goto B4db016;
case 0x4db019:c.instructions+=7;goto B4db019;
case 0x4db01c:c.instructions+=6;goto B4db01c;
case 0x4db01e:c.instructions+=5;goto B4db01e;
case 0x4db021:c.instructions+=4;goto B4db021;
case 0x4db024:c.instructions+=3;goto B4db024;
case 0x4db029:c.instructions+=2;goto B4db029;
case 0x4db02a:c.instructions+=1;goto B4db02a;
case 0x4db02f:goto L4db02f;
case 0x4db031:c.instructions+=3;goto B4db031;
case 0x4db034:c.instructions+=2;goto B4db034;
case 0x4db036:c.instructions+=1;goto B4db036;
case 0x4db038:goto L4db038;
case 0x4db03d:goto L4db03d;
case 0x4db03f:c.instructions+=1;goto B4db03f;
case 0x4db041:goto L4db041;
case 0x4db044:c.instructions+=1;goto B4db044;
case 0x4db046:goto L4db046;
case 0x4db048:goto L4db048;
case 0x4db04b:c.instructions+=4;goto B4db04b;
case 0x4db04d:c.instructions+=3;goto B4db04d;
case 0x4db050:c.instructions+=2;goto B4db050;
case 0x4db053:c.instructions+=1;goto B4db053;
case 0x4db055:goto L4db055;
case 0x4db05a:c.instructions+=3;goto B4db05a;
case 0x4db05b:c.instructions+=2;goto B4db05b;
case 0x4db05e:c.instructions+=1;goto B4db05e;
case 0x4db063:goto L4db063;
case 0x4db068:c.instructions+=6;goto B4db068;
case 0x4db06b:c.instructions+=5;goto B4db06b;
case 0x4db06d:c.instructions+=4;goto B4db06d;
case 0x4db072:c.instructions+=3;goto B4db072;
case 0x4db073:c.instructions+=2;goto B4db073;
case 0x4db078:c.instructions+=1;goto B4db078;
case 0x4db07d:goto L4db07d;
case 0x4db07f:c.instructions+=3;goto B4db07f;
case 0x4db082:c.instructions+=2;goto B4db082;
case 0x4db084:c.instructions+=1;goto B4db084;
case 0x4db086:goto L4db086;
case 0x4db08b:goto L4db08b;
case 0x4db08d:c.instructions+=1;goto B4db08d;
case 0x4db08f:goto L4db08f;
case 0x4db092:c.instructions+=1;goto B4db092;
case 0x4db094:goto L4db094;
case 0x4db096:goto L4db096;
case 0x4db099:c.instructions+=4;goto B4db099;
case 0x4db09b:c.instructions+=3;goto B4db09b;
case 0x4db09e:c.instructions+=2;goto B4db09e;
case 0x4db0a1:c.instructions+=1;goto B4db0a1;
case 0x4db0a3:goto L4db0a3;
case 0x4db0a6:c.instructions+=3;goto B4db0a6;
case 0x4db0ab:c.instructions+=2;goto B4db0ab;
case 0x4db0ac:c.instructions+=1;goto B4db0ac;
case 0x4db0b1:goto L4db0b1;
case 0x4db0b3:c.instructions+=3;goto B4db0b3;
case 0x4db0b6:c.instructions+=2;goto B4db0b6;
case 0x4db0b8:c.instructions+=1;goto B4db0b8;
case 0x4db0ba:goto L4db0ba;
case 0x4db0bf:goto L4db0bf;
case 0x4db0c1:c.instructions+=1;goto B4db0c1;
case 0x4db0c3:goto L4db0c3;
case 0x4db0c6:c.instructions+=1;goto B4db0c6;
case 0x4db0c8:goto L4db0c8;
case 0x4db0ca:goto L4db0ca;
case 0x4db0cd:c.instructions+=4;goto B4db0cd;
case 0x4db0cf:c.instructions+=3;goto B4db0cf;
case 0x4db0d2:c.instructions+=2;goto B4db0d2;
case 0x4db0d5:c.instructions+=1;goto B4db0d5;
case 0x4db0d7:goto L4db0d7;
case 0x4db0da:c.instructions+=3;goto B4db0da;
case 0x4db0df:c.instructions+=2;goto B4db0df;
case 0x4db0e0:c.instructions+=1;goto B4db0e0;
case 0x4db0e5:goto L4db0e5;
case 0x4db0e7:c.instructions+=3;goto B4db0e7;
case 0x4db0ea:c.instructions+=2;goto B4db0ea;
case 0x4db0ec:c.instructions+=1;goto B4db0ec;
case 0x4db0ee:goto L4db0ee;
case 0x4db0f3:goto L4db0f3;
case 0x4db0f5:c.instructions+=1;goto B4db0f5;
case 0x4db0f7:goto L4db0f7;
case 0x4db0fa:c.instructions+=1;goto B4db0fa;
case 0x4db0fc:goto L4db0fc;
case 0x4db0fe:goto L4db0fe;
case 0x4db101:c.instructions+=4;goto B4db101;
case 0x4db103:c.instructions+=3;goto B4db103;
case 0x4db106:c.instructions+=2;goto B4db106;
case 0x4db109:c.instructions+=1;goto B4db109;
case 0x4db10b:goto L4db10b;
case 0x4db10d:c.instructions+=1;goto B4db10d;
case 0x4db112:goto L4db112;
case 0x4db115:c.instructions+=2;goto B4db115;
case 0x4db117:c.instructions+=1;goto B4db117;
case 0x4db119:goto L4db119;
case 0x4db11c:c.instructions+=5;goto B4db11c;
case 0x4db11f:c.instructions+=4;goto B4db11f;
case 0x4db125:c.instructions+=3;goto B4db125;
case 0x4db128:c.instructions+=2;goto B4db128;
case 0x4db12b:c.instructions+=1;goto B4db12b;
case 0x4db12d:goto L4db12d;
case 0x4db12f:goto L4db12f;
case 0x4db133:c.instructions+=10;goto B4db133;
case 0x4db136:c.instructions+=9;goto B4db136;
case 0x4db139:c.instructions+=8;goto B4db139;
case 0x4db13b:c.instructions+=7;goto B4db13b;
case 0x4db13e:c.instructions+=6;goto B4db13e;
case 0x4db141:c.instructions+=5;goto B4db141;
case 0x4db143:c.instructions+=4;goto B4db143;
case 0x4db146:c.instructions+=3;goto B4db146;
case 0x4db14b:c.instructions+=2;goto B4db14b;
case 0x4db14c:c.instructions+=1;goto B4db14c;
case 0x4db151:goto L4db151;
case 0x4db153:c.instructions+=3;goto B4db153;
case 0x4db156:c.instructions+=2;goto B4db156;
case 0x4db158:c.instructions+=1;goto B4db158;
case 0x4db15a:goto L4db15a;
case 0x4db15f:goto L4db15f;
case 0x4db161:c.instructions+=1;goto B4db161;
case 0x4db163:goto L4db163;
case 0x4db166:c.instructions+=1;goto B4db166;
case 0x4db168:goto L4db168;
case 0x4db16a:goto L4db16a;
case 0x4db16d:c.instructions+=4;goto B4db16d;
case 0x4db16f:c.instructions+=3;goto B4db16f;
case 0x4db172:c.instructions+=2;goto B4db172;
case 0x4db175:c.instructions+=1;goto B4db175;
case 0x4db177:goto L4db177;
case 0x4db179:c.instructions+=8;goto B4db179;
case 0x4db17d:c.instructions+=7;goto B4db17d;
case 0x4db181:c.instructions+=6;goto B4db181;
case 0x4db185:c.instructions+=5;goto B4db185;
case 0x4db189:c.instructions+=4;goto B4db189;
case 0x4db18d:c.instructions+=3;goto B4db18d;
case 0x4db191:c.instructions+=2;goto B4db191;
case 0x4db193:c.instructions+=1;goto B4db193;
case 0x4db195:goto L4db195;
case 0x4db19a:c.instructions+=1;goto B4db19a;
case 0x4db19f:goto L4db19f;
case 0x4db1a0:c.instructions+=4;goto B4db1a0;
case 0x4db1a5:c.instructions+=3;goto B4db1a5;
case 0x4db1a9:c.instructions+=2;goto B4db1a9;
case 0x4db1aa:c.instructions+=1;goto B4db1aa;
case 0x4db1ac:goto L4db1ac;
case 0x4db1b1:c.instructions+=1;goto B4db1b1;
case 0x4db1b6:goto L4db1b6;
case 0x4db1b7:c.instructions+=3;goto B4db1b7;
case 0x4db1bc:c.instructions+=2;goto B4db1bc;
case 0x4db1c0:c.instructions+=1;goto B4db1c0;
case 0x4db1c1:goto L4db1c1;
case 0x4db1c6:goto L4db1c6;
case 0x4db1c9:c.instructions+=5;goto B4db1c9;
case 0x4db1cd:c.instructions+=4;goto B4db1cd;
case 0x4db1ce:c.instructions+=3;goto B4db1ce;
case 0x4db1d3:c.instructions+=2;goto B4db1d3;
case 0x4db1d4:c.instructions+=1;goto B4db1d4;
case 0x4db1d9:goto L4db1d9;
case 0x4db1dc:c.instructions+=3;goto B4db1dc;
case 0x4db1e1:c.instructions+=2;goto B4db1e1;
case 0x4db1e2:c.instructions+=1;goto B4db1e2;
case 0x4db1e7:goto L4db1e7;
case 0x4db1e9:c.instructions+=3;goto B4db1e9;
case 0x4db1ec:c.instructions+=2;goto B4db1ec;
case 0x4db1ee:c.instructions+=1;goto B4db1ee;
case 0x4db1f0:goto L4db1f0;
case 0x4db1f5:goto L4db1f5;
case 0x4db1f7:c.instructions+=1;goto B4db1f7;
case 0x4db1f9:goto L4db1f9;
case 0x4db1fc:c.instructions+=1;goto B4db1fc;
case 0x4db1fe:goto L4db1fe;
case 0x4db200:goto L4db200;
case 0x4db203:c.instructions+=4;goto B4db203;
case 0x4db205:c.instructions+=3;goto B4db205;
case 0x4db208:c.instructions+=2;goto B4db208;
case 0x4db20b:c.instructions+=1;goto B4db20b;
case 0x4db20d:goto L4db20d;
case 0x4db211:c.instructions+=4;goto B4db211;
case 0x4db214:c.instructions+=3;goto B4db214;
case 0x4db219:c.instructions+=2;goto B4db219;
case 0x4db21a:c.instructions+=1;goto B4db21a;
case 0x4db21f:goto L4db21f;
case 0x4db220:c.instructions+=1;goto B4db220;
case 0x4db225:goto L4db225;
case 0x4db227:c.instructions+=1;goto B4db227;
case 0x4db22c:goto L4db22c;
case 0x4db22f:c.instructions+=2;goto B4db22f;
case 0x4db231:c.instructions+=1;goto B4db231;
case 0x4db233:goto L4db233;
case 0x4db236:c.instructions+=4;goto B4db236;
case 0x4db239:c.instructions+=3;goto B4db239;
case 0x4db23f:c.instructions+=2;goto B4db23f;
case 0x4db242:c.instructions+=1;goto B4db242;
case 0x4db244:goto L4db244;
case 0x4db246:goto L4db246;
case 0x4db249:c.instructions+=8;goto B4db249;
case 0x4db24b:c.instructions+=7;goto B4db24b;
case 0x4db24e:c.instructions+=6;goto B4db24e;
case 0x4db251:c.instructions+=5;goto B4db251;
case 0x4db253:c.instructions+=4;goto B4db253;
case 0x4db256:c.instructions+=3;goto B4db256;
case 0x4db25b:c.instructions+=2;goto B4db25b;
case 0x4db25c:c.instructions+=1;goto B4db25c;
case 0x4db261:goto L4db261;
case 0x4db263:c.instructions+=3;goto B4db263;
case 0x4db266:c.instructions+=2;goto B4db266;
case 0x4db268:c.instructions+=1;goto B4db268;
case 0x4db26a:goto L4db26a;
case 0x4db26f:goto L4db26f;
case 0x4db271:c.instructions+=1;goto B4db271;
case 0x4db273:goto L4db273;
case 0x4db276:c.instructions+=1;goto B4db276;
case 0x4db278:goto L4db278;
case 0x4db27a:goto L4db27a;
case 0x4db27d:c.instructions+=4;goto B4db27d;
case 0x4db27f:c.instructions+=3;goto B4db27f;
case 0x4db282:c.instructions+=2;goto B4db282;
case 0x4db285:c.instructions+=1;goto B4db285;
case 0x4db287:goto L4db287;
case 0x4db28a:c.instructions+=3;goto B4db28a;
case 0x4db28f:c.instructions+=2;goto B4db28f;
case 0x4db290:c.instructions+=1;goto B4db290;
case 0x4db295:goto L4db295;
case 0x4db297:c.instructions+=3;goto B4db297;
case 0x4db29a:c.instructions+=2;goto B4db29a;
case 0x4db29c:c.instructions+=1;goto B4db29c;
case 0x4db29e:goto L4db29e;
case 0x4db2a3:goto L4db2a3;
case 0x4db2a5:c.instructions+=1;goto B4db2a5;
case 0x4db2a7:goto L4db2a7;
case 0x4db2aa:c.instructions+=1;goto B4db2aa;
case 0x4db2ac:goto L4db2ac;
case 0x4db2ae:goto L4db2ae;
case 0x4db2b1:c.instructions+=4;goto B4db2b1;
case 0x4db2b3:c.instructions+=3;goto B4db2b3;
case 0x4db2b6:c.instructions+=2;goto B4db2b6;
case 0x4db2b9:c.instructions+=1;goto B4db2b9;
case 0x4db2bb:goto L4db2bb;
case 0x4db2bf:c.instructions+=4;goto B4db2bf;
case 0x4db2c2:c.instructions+=3;goto B4db2c2;
case 0x4db2c7:c.instructions+=2;goto B4db2c7;
case 0x4db2c8:c.instructions+=1;goto B4db2c8;
case 0x4db2cd:goto L4db2cd;
case 0x4db2ce:c.instructions+=1;goto B4db2ce;
case 0x4db2d3:goto L4db2d3;
case 0x4db2d5:c.instructions+=1;goto B4db2d5;
case 0x4db2da:goto L4db2da;
case 0x4db2dd:c.instructions+=2;goto B4db2dd;
case 0x4db2df:c.instructions+=1;goto B4db2df;
case 0x4db2e5:goto L4db2e5;
case 0x4db2e8:c.instructions+=4;goto B4db2e8;
case 0x4db2eb:c.instructions+=3;goto B4db2eb;
case 0x4db2f1:c.instructions+=2;goto B4db2f1;
case 0x4db2f4:c.instructions+=1;goto B4db2f4;
case 0x4db2f9:goto L4db2f9;
case 0x4db2fe:c.instructions+=2;goto B4db2fe;
case 0x4db300:c.instructions+=1;goto B4db300;
case 0x4db302:goto L4db302;
case 0x4db307:c.instructions+=2;goto B4db307;
case 0x4db309:c.instructions+=1;goto B4db309;
case 0x4db30f:goto L4db30f;
case 0x4db314:c.instructions+=2;goto B4db314;
case 0x4db315:c.instructions+=1;goto B4db315;
case 0x4db31a:goto L4db31a;
case 0x4db31d:c.instructions+=3;goto B4db31d;
case 0x4db322:c.instructions+=2;goto B4db322;
case 0x4db323:c.instructions+=1;goto B4db323;
case 0x4db328:goto L4db328;
case 0x4db32a:c.instructions+=3;goto B4db32a;
case 0x4db32d:c.instructions+=2;goto B4db32d;
case 0x4db32f:c.instructions+=1;goto B4db32f;
case 0x4db331:goto L4db331;
case 0x4db336:goto L4db336;
case 0x4db338:c.instructions+=1;goto B4db338;
case 0x4db33a:goto L4db33a;
case 0x4db33d:c.instructions+=1;goto B4db33d;
case 0x4db33f:goto L4db33f;
case 0x4db341:goto L4db341;
case 0x4db344:c.instructions+=4;goto B4db344;
case 0x4db346:c.instructions+=3;goto B4db346;
case 0x4db349:c.instructions+=2;goto B4db349;
case 0x4db34c:c.instructions+=1;goto B4db34c;
case 0x4db34e:goto L4db34e;
case 0x4db351:c.instructions+=3;goto B4db351;
case 0x4db356:c.instructions+=2;goto B4db356;
case 0x4db357:c.instructions+=1;goto B4db357;
case 0x4db35c:goto L4db35c;
case 0x4db35e:c.instructions+=3;goto B4db35e;
case 0x4db361:c.instructions+=2;goto B4db361;
case 0x4db363:c.instructions+=1;goto B4db363;
case 0x4db365:goto L4db365;
case 0x4db36a:goto L4db36a;
case 0x4db36c:c.instructions+=1;goto B4db36c;
case 0x4db36e:goto L4db36e;
case 0x4db371:c.instructions+=1;goto B4db371;
case 0x4db373:goto L4db373;
case 0x4db375:goto L4db375;
case 0x4db378:c.instructions+=4;goto B4db378;
case 0x4db37a:c.instructions+=3;goto B4db37a;
case 0x4db37d:c.instructions+=2;goto B4db37d;
case 0x4db380:c.instructions+=1;goto B4db380;
case 0x4db382:goto L4db382;
case 0x4db384:c.instructions+=1;goto B4db384;
case 0x4db389:goto L4db389;
case 0x4db38c:c.instructions+=2;goto B4db38c;
case 0x4db38e:c.instructions+=1;goto B4db38e;
case 0x4db390:goto L4db390;
case 0x4db393:c.instructions+=4;goto B4db393;
case 0x4db396:c.instructions+=3;goto B4db396;
case 0x4db39c:c.instructions+=2;goto B4db39c;
case 0x4db39f:c.instructions+=1;goto B4db39f;
case 0x4db3a1:goto L4db3a1;
case 0x4db3a3:goto L4db3a3;
case 0x4db3a6:c.instructions+=9;goto B4db3a6;
case 0x4db3a9:c.instructions+=8;goto B4db3a9;
case 0x4db3ab:c.instructions+=7;goto B4db3ab;
case 0x4db3ae:c.instructions+=6;goto B4db3ae;
case 0x4db3b1:c.instructions+=5;goto B4db3b1;
case 0x4db3b3:c.instructions+=4;goto B4db3b3;
case 0x4db3b6:c.instructions+=3;goto B4db3b6;
case 0x4db3bb:c.instructions+=2;goto B4db3bb;
case 0x4db3bc:c.instructions+=1;goto B4db3bc;
case 0x4db3c1:goto L4db3c1;
case 0x4db3c3:c.instructions+=3;goto B4db3c3;
case 0x4db3c6:c.instructions+=2;goto B4db3c6;
case 0x4db3c8:c.instructions+=1;goto B4db3c8;
case 0x4db3ca:goto L4db3ca;
case 0x4db3cf:goto L4db3cf;
case 0x4db3d1:c.instructions+=1;goto B4db3d1;
case 0x4db3d3:goto L4db3d3;
case 0x4db3d6:c.instructions+=1;goto B4db3d6;
case 0x4db3d8:goto L4db3d8;
case 0x4db3da:goto L4db3da;
case 0x4db3dd:c.instructions+=4;goto B4db3dd;
case 0x4db3df:c.instructions+=3;goto B4db3df;
case 0x4db3e2:c.instructions+=2;goto B4db3e2;
case 0x4db3e5:c.instructions+=1;goto B4db3e5;
case 0x4db3e7:goto L4db3e7;
case 0x4db3ea:c.instructions+=3;goto B4db3ea;
case 0x4db3ef:c.instructions+=2;goto B4db3ef;
case 0x4db3f0:c.instructions+=1;goto B4db3f0;
case 0x4db3f5:goto L4db3f5;
case 0x4db3f7:c.instructions+=3;goto B4db3f7;
case 0x4db3fa:c.instructions+=2;goto B4db3fa;
case 0x4db3fc:c.instructions+=1;goto B4db3fc;
case 0x4db3fe:goto L4db3fe;
case 0x4db403:goto L4db403;
case 0x4db405:c.instructions+=1;goto B4db405;
case 0x4db407:goto L4db407;
case 0x4db40a:c.instructions+=1;goto B4db40a;
case 0x4db40c:goto L4db40c;
case 0x4db40e:goto L4db40e;
case 0x4db411:c.instructions+=4;goto B4db411;
case 0x4db413:c.instructions+=3;goto B4db413;
case 0x4db416:c.instructions+=2;goto B4db416;
case 0x4db419:c.instructions+=1;goto B4db419;
case 0x4db41b:goto L4db41b;
case 0x4db41d:c.instructions+=1;goto B4db41d;
case 0x4db422:goto L4db422;
case 0x4db425:c.instructions+=2;goto B4db425;
case 0x4db427:c.instructions+=1;goto B4db427;
case 0x4db429:goto L4db429;
case 0x4db42c:c.instructions+=4;goto B4db42c;
case 0x4db42f:c.instructions+=3;goto B4db42f;
case 0x4db435:c.instructions+=2;goto B4db435;
case 0x4db438:c.instructions+=1;goto B4db438;
case 0x4db43a:goto L4db43a;
case 0x4db43c:goto L4db43c;
case 0x4db43f:c.instructions+=8;goto B4db43f;
case 0x4db441:c.instructions+=7;goto B4db441;
case 0x4db444:c.instructions+=6;goto B4db444;
case 0x4db447:c.instructions+=5;goto B4db447;
case 0x4db449:c.instructions+=4;goto B4db449;
case 0x4db44c:c.instructions+=3;goto B4db44c;
case 0x4db451:c.instructions+=2;goto B4db451;
case 0x4db452:c.instructions+=1;goto B4db452;
case 0x4db457:goto L4db457;
case 0x4db459:c.instructions+=3;goto B4db459;
case 0x4db45c:c.instructions+=2;goto B4db45c;
case 0x4db45e:c.instructions+=1;goto B4db45e;
case 0x4db460:goto L4db460;
case 0x4db465:goto L4db465;
case 0x4db467:c.instructions+=1;goto B4db467;
case 0x4db469:goto L4db469;
case 0x4db46c:c.instructions+=1;goto B4db46c;
case 0x4db46e:goto L4db46e;
case 0x4db470:goto L4db470;
case 0x4db473:c.instructions+=4;goto B4db473;
case 0x4db475:c.instructions+=3;goto B4db475;
case 0x4db478:c.instructions+=2;goto B4db478;
case 0x4db47b:c.instructions+=1;goto B4db47b;
case 0x4db47d:goto L4db47d;
case 0x4db480:c.instructions+=3;goto B4db480;
case 0x4db485:c.instructions+=2;goto B4db485;
case 0x4db486:c.instructions+=1;goto B4db486;
case 0x4db48b:goto L4db48b;
case 0x4db48d:c.instructions+=3;goto B4db48d;
case 0x4db490:c.instructions+=2;goto B4db490;
case 0x4db492:c.instructions+=1;goto B4db492;
case 0x4db494:goto L4db494;
case 0x4db499:goto L4db499;
case 0x4db49b:c.instructions+=1;goto B4db49b;
case 0x4db49d:goto L4db49d;
case 0x4db4a0:c.instructions+=1;goto B4db4a0;
case 0x4db4a2:goto L4db4a2;
case 0x4db4a4:goto L4db4a4;
case 0x4db4a7:c.instructions+=4;goto B4db4a7;
case 0x4db4a9:c.instructions+=3;goto B4db4a9;
case 0x4db4ac:c.instructions+=2;goto B4db4ac;
case 0x4db4af:c.instructions+=1;goto B4db4af;
case 0x4db4b1:goto L4db4b1;
case 0x4db4b3:c.instructions+=1;goto B4db4b3;
case 0x4db4b8:goto L4db4b8;
case 0x4db4bb:c.instructions+=2;goto B4db4bb;
case 0x4db4bd:c.instructions+=1;goto B4db4bd;
case 0x4db4bf:goto L4db4bf;
case 0x4db4c2:c.instructions+=4;goto B4db4c2;
case 0x4db4c5:c.instructions+=3;goto B4db4c5;
case 0x4db4cb:c.instructions+=2;goto B4db4cb;
case 0x4db4ce:c.instructions+=1;goto B4db4ce;
case 0x4db4d0:goto L4db4d0;
case 0x4db4d2:goto L4db4d2;
case 0x4db4d5:c.instructions+=8;goto B4db4d5;
case 0x4db4d7:c.instructions+=7;goto B4db4d7;
case 0x4db4da:c.instructions+=6;goto B4db4da;
case 0x4db4dd:c.instructions+=5;goto B4db4dd;
case 0x4db4df:c.instructions+=4;goto B4db4df;
case 0x4db4e2:c.instructions+=3;goto B4db4e2;
case 0x4db4e7:c.instructions+=2;goto B4db4e7;
case 0x4db4e8:c.instructions+=1;goto B4db4e8;
case 0x4db4ed:goto L4db4ed;
case 0x4db4ef:c.instructions+=3;goto B4db4ef;
case 0x4db4f2:c.instructions+=2;goto B4db4f2;
case 0x4db4f4:c.instructions+=1;goto B4db4f4;
case 0x4db4f6:goto L4db4f6;
case 0x4db4fb:goto L4db4fb;
case 0x4db4fd:c.instructions+=1;goto B4db4fd;
case 0x4db4ff:goto L4db4ff;
case 0x4db502:c.instructions+=1;goto B4db502;
case 0x4db504:goto L4db504;
case 0x4db506:goto L4db506;
case 0x4db509:c.instructions+=4;goto B4db509;
case 0x4db50b:c.instructions+=3;goto B4db50b;
case 0x4db50e:c.instructions+=2;goto B4db50e;
case 0x4db511:c.instructions+=1;goto B4db511;
case 0x4db513:goto L4db513;
case 0x4db516:c.instructions+=3;goto B4db516;
case 0x4db51b:c.instructions+=2;goto B4db51b;
case 0x4db51c:c.instructions+=1;goto B4db51c;
case 0x4db521:goto L4db521;
case 0x4db523:c.instructions+=3;goto B4db523;
case 0x4db526:c.instructions+=2;goto B4db526;
case 0x4db528:c.instructions+=1;goto B4db528;
case 0x4db52a:goto L4db52a;
case 0x4db52f:goto L4db52f;
case 0x4db531:c.instructions+=1;goto B4db531;
case 0x4db533:goto L4db533;
case 0x4db536:c.instructions+=1;goto B4db536;
case 0x4db538:goto L4db538;
case 0x4db53a:goto L4db53a;
case 0x4db53d:c.instructions+=4;goto B4db53d;
case 0x4db53f:c.instructions+=3;goto B4db53f;
case 0x4db542:c.instructions+=2;goto B4db542;
case 0x4db545:c.instructions+=1;goto B4db545;
case 0x4db547:goto L4db547;
case 0x4db549:c.instructions+=1;goto B4db549;
case 0x4db54e:goto L4db54e;
case 0x4db551:c.instructions+=2;goto B4db551;
case 0x4db555:c.instructions+=1;goto B4db555;
case 0x4db55d:goto L4db55d;
case 0x4db55f:c.instructions+=1;goto B4db55f;
case 0x4db565:goto L4db565;
case 0x4db566:c.instructions+=3;goto B4db566;
case 0x4db567:c.instructions+=2;goto B4db567;
case 0x4db569:c.instructions+=1;goto B4db569;
case 0x4db56e:goto L4db56e;
case 0x4db570:c.instructions+=1;goto B4db570;
case 0x4db576:goto L4db576;
case 0x4db579:c.instructions+=1;goto B4db579;
case 0x4db57e:goto L4db57e;
case 0x4db580:c.instructions+=1;goto B4db580;
case 0x4db585:goto L4db585;
case 0x4db587:c.instructions+=1;goto B4db587;
case 0x4db589:goto L4db589;
case 0x4db58c:c.instructions+=1;goto B4db58c;
case 0x4db58e:goto L4db58e;
case 0x4db58f:c.instructions+=1;goto B4db58f;
case 0x4db591:goto L4db591;
case 0x4db596:c.instructions+=1;goto B4db596;
case 0x4db598:goto L4db598;
case 0x4db59d:c.instructions+=1;goto B4db59d;
case 0x4db59f:goto L4db59f;
case 0x4db5a4:goto L4db5a4;
case 0x4db5a5:c.instructions+=2;goto B4db5a5;
case 0x4db5a6:c.instructions+=1;goto B4db5a6;
case 0x4db5ab:goto L4db5ab;
case 0x4db5ae:c.instructions+=3;goto B4db5ae;
case 0x4db5b3:c.instructions+=2;goto B4db5b3;
case 0x4db5b4:c.instructions+=1;goto B4db5b4;
case 0x4db5b9:goto L4db5b9;
case 0x4db5bb:c.instructions+=3;goto B4db5bb;
case 0x4db5be:c.instructions+=2;goto B4db5be;
case 0x4db5c0:c.instructions+=1;goto B4db5c0;
case 0x4db5c2:goto L4db5c2;
case 0x4db5c7:goto L4db5c7;
case 0x4db5c9:c.instructions+=1;goto B4db5c9;
case 0x4db5cb:goto L4db5cb;
case 0x4db5ce:c.instructions+=1;goto B4db5ce;
case 0x4db5d0:goto L4db5d0;
case 0x4db5d2:goto L4db5d2;
case 0x4db5d5:c.instructions+=4;goto B4db5d5;
case 0x4db5d7:c.instructions+=3;goto B4db5d7;
case 0x4db5da:c.instructions+=2;goto B4db5da;
case 0x4db5dd:c.instructions+=1;goto B4db5dd;
case 0x4db5df:goto L4db5df;
case 0x4db5e2:c.instructions+=3;goto B4db5e2;
case 0x4db5e7:c.instructions+=2;goto B4db5e7;
case 0x4db5e8:c.instructions+=1;goto B4db5e8;
case 0x4db5ed:goto L4db5ed;
case 0x4db5ef:c.instructions+=3;goto B4db5ef;
case 0x4db5f2:c.instructions+=2;goto B4db5f2;
case 0x4db5f4:c.instructions+=1;goto B4db5f4;
case 0x4db5f6:goto L4db5f6;
case 0x4db5fb:goto L4db5fb;
case 0x4db5fd:c.instructions+=1;goto B4db5fd;
case 0x4db5ff:goto L4db5ff;
case 0x4db602:c.instructions+=1;goto B4db602;
case 0x4db604:goto L4db604;
case 0x4db606:goto L4db606;
case 0x4db609:c.instructions+=4;goto B4db609;
case 0x4db60b:c.instructions+=3;goto B4db60b;
case 0x4db60e:c.instructions+=2;goto B4db60e;
case 0x4db611:c.instructions+=1;goto B4db611;
case 0x4db613:goto L4db613;
case 0x4db615:c.instructions+=1;goto B4db615;
case 0x4db61a:goto L4db61a;
case 0x4db61d:c.instructions+=2;goto B4db61d;
case 0x4db61f:c.instructions+=1;goto B4db61f;
case 0x4db621:goto L4db621;
case 0x4db624:c.instructions+=4;goto B4db624;
case 0x4db627:c.instructions+=3;goto B4db627;
case 0x4db62d:c.instructions+=2;goto B4db62d;
case 0x4db630:c.instructions+=1;goto B4db630;
case 0x4db632:goto L4db632;
case 0x4db634:goto L4db634;
case 0x4db637:c.instructions+=9;goto B4db637;
case 0x4db63a:c.instructions+=8;goto B4db63a;
case 0x4db63c:c.instructions+=7;goto B4db63c;
case 0x4db63f:c.instructions+=6;goto B4db63f;
case 0x4db642:c.instructions+=5;goto B4db642;
case 0x4db644:c.instructions+=4;goto B4db644;
case 0x4db647:c.instructions+=3;goto B4db647;
case 0x4db64c:c.instructions+=2;goto B4db64c;
case 0x4db64d:c.instructions+=1;goto B4db64d;
case 0x4db652:goto L4db652;
case 0x4db654:c.instructions+=3;goto B4db654;
case 0x4db657:c.instructions+=2;goto B4db657;
case 0x4db659:c.instructions+=1;goto B4db659;
case 0x4db65b:goto L4db65b;
case 0x4db660:goto L4db660;
case 0x4db662:c.instructions+=1;goto B4db662;
case 0x4db664:goto L4db664;
case 0x4db667:c.instructions+=1;goto B4db667;
case 0x4db669:goto L4db669;
case 0x4db66b:goto L4db66b;
case 0x4db66e:c.instructions+=4;goto B4db66e;
case 0x4db670:c.instructions+=3;goto B4db670;
case 0x4db673:c.instructions+=2;goto B4db673;
case 0x4db676:c.instructions+=1;goto B4db676;
case 0x4db678:goto L4db678;
case 0x4db67b:c.instructions+=3;goto B4db67b;
case 0x4db680:c.instructions+=2;goto B4db680;
case 0x4db681:c.instructions+=1;goto B4db681;
case 0x4db686:goto L4db686;
case 0x4db688:c.instructions+=3;goto B4db688;
case 0x4db68b:c.instructions+=2;goto B4db68b;
case 0x4db68d:c.instructions+=1;goto B4db68d;
case 0x4db68f:goto L4db68f;
case 0x4db694:goto L4db694;
case 0x4db696:c.instructions+=1;goto B4db696;
case 0x4db698:goto L4db698;
case 0x4db69b:c.instructions+=1;goto B4db69b;
case 0x4db69d:goto L4db69d;
case 0x4db69f:goto L4db69f;
case 0x4db6a2:c.instructions+=4;goto B4db6a2;
case 0x4db6a4:c.instructions+=3;goto B4db6a4;
case 0x4db6a7:c.instructions+=2;goto B4db6a7;
case 0x4db6aa:c.instructions+=1;goto B4db6aa;
case 0x4db6ac:goto L4db6ac;
case 0x4db6ae:c.instructions+=1;goto B4db6ae;
case 0x4db6b3:goto L4db6b3;
case 0x4db6b6:c.instructions+=2;goto B4db6b6;
case 0x4db6b8:c.instructions+=1;goto B4db6b8;
case 0x4db6ba:goto L4db6ba;
case 0x4db6bd:c.instructions+=4;goto B4db6bd;
case 0x4db6c0:c.instructions+=3;goto B4db6c0;
case 0x4db6c6:c.instructions+=2;goto B4db6c6;
case 0x4db6c9:c.instructions+=1;goto B4db6c9;
case 0x4db6cb:goto L4db6cb;
case 0x4db6cd:goto L4db6cd;
case 0x4db6d0:c.instructions+=8;goto B4db6d0;
case 0x4db6d2:c.instructions+=7;goto B4db6d2;
case 0x4db6d5:c.instructions+=6;goto B4db6d5;
case 0x4db6d8:c.instructions+=5;goto B4db6d8;
case 0x4db6da:c.instructions+=4;goto B4db6da;
case 0x4db6dd:c.instructions+=3;goto B4db6dd;
case 0x4db6e2:c.instructions+=2;goto B4db6e2;
case 0x4db6e3:c.instructions+=1;goto B4db6e3;
case 0x4db6e8:goto L4db6e8;
case 0x4db6ea:c.instructions+=3;goto B4db6ea;
case 0x4db6ed:c.instructions+=2;goto B4db6ed;
case 0x4db6ef:c.instructions+=1;goto B4db6ef;
case 0x4db6f1:goto L4db6f1;
case 0x4db6f6:goto L4db6f6;
case 0x4db6f8:c.instructions+=1;goto B4db6f8;
case 0x4db6fa:goto L4db6fa;
case 0x4db6fd:c.instructions+=1;goto B4db6fd;
case 0x4db6ff:goto L4db6ff;
case 0x4db701:goto L4db701;
case 0x4db704:c.instructions+=4;goto B4db704;
case 0x4db706:c.instructions+=3;goto B4db706;
case 0x4db709:c.instructions+=2;goto B4db709;
case 0x4db70c:c.instructions+=1;goto B4db70c;
case 0x4db70e:goto L4db70e;
case 0x4db711:c.instructions+=3;goto B4db711;
case 0x4db716:c.instructions+=2;goto B4db716;
case 0x4db717:c.instructions+=1;goto B4db717;
case 0x4db71c:goto L4db71c;
case 0x4db71e:c.instructions+=3;goto B4db71e;
case 0x4db721:c.instructions+=2;goto B4db721;
case 0x4db723:c.instructions+=1;goto B4db723;
case 0x4db725:goto L4db725;
case 0x4db72a:goto L4db72a;
case 0x4db72c:c.instructions+=1;goto B4db72c;
case 0x4db72e:goto L4db72e;
case 0x4db731:c.instructions+=1;goto B4db731;
case 0x4db733:goto L4db733;
case 0x4db735:goto L4db735;
case 0x4db738:c.instructions+=4;goto B4db738;
case 0x4db73a:c.instructions+=3;goto B4db73a;
case 0x4db73d:c.instructions+=2;goto B4db73d;
case 0x4db740:c.instructions+=1;goto B4db740;
case 0x4db742:goto L4db742;
case 0x4db744:c.instructions+=1;goto B4db744;
case 0x4db749:goto L4db749;
case 0x4db74c:c.instructions+=2;goto B4db74c;
case 0x4db74e:c.instructions+=1;goto B4db74e;
case 0x4db750:goto L4db750;
case 0x4db753:c.instructions+=4;goto B4db753;
case 0x4db756:c.instructions+=3;goto B4db756;
case 0x4db75c:c.instructions+=2;goto B4db75c;
case 0x4db75f:c.instructions+=1;goto B4db75f;
case 0x4db761:goto L4db761;
case 0x4db763:goto L4db763;
case 0x4db766:c.instructions+=8;goto B4db766;
case 0x4db768:c.instructions+=7;goto B4db768;
case 0x4db76b:c.instructions+=6;goto B4db76b;
case 0x4db76e:c.instructions+=5;goto B4db76e;
case 0x4db770:c.instructions+=4;goto B4db770;
case 0x4db773:c.instructions+=3;goto B4db773;
case 0x4db778:c.instructions+=2;goto B4db778;
case 0x4db779:c.instructions+=1;goto B4db779;
case 0x4db77e:goto L4db77e;
case 0x4db780:c.instructions+=3;goto B4db780;
case 0x4db783:c.instructions+=2;goto B4db783;
case 0x4db785:c.instructions+=1;goto B4db785;
case 0x4db787:goto L4db787;
case 0x4db78c:goto L4db78c;
case 0x4db78e:c.instructions+=1;goto B4db78e;
case 0x4db790:goto L4db790;
case 0x4db793:c.instructions+=1;goto B4db793;
case 0x4db795:goto L4db795;
case 0x4db797:goto L4db797;
case 0x4db79a:c.instructions+=4;goto B4db79a;
case 0x4db79c:c.instructions+=3;goto B4db79c;
case 0x4db79f:c.instructions+=2;goto B4db79f;
case 0x4db7a2:c.instructions+=1;goto B4db7a2;
case 0x4db7a4:goto L4db7a4;
case 0x4db7a7:c.instructions+=3;goto B4db7a7;
case 0x4db7ac:c.instructions+=2;goto B4db7ac;
case 0x4db7ad:c.instructions+=1;goto B4db7ad;
case 0x4db7b2:goto L4db7b2;
case 0x4db7b4:c.instructions+=3;goto B4db7b4;
case 0x4db7b7:c.instructions+=2;goto B4db7b7;
case 0x4db7b9:c.instructions+=1;goto B4db7b9;
case 0x4db7bb:goto L4db7bb;
case 0x4db7c0:goto L4db7c0;
case 0x4db7c2:c.instructions+=1;goto B4db7c2;
case 0x4db7c4:goto L4db7c4;
case 0x4db7c7:c.instructions+=1;goto B4db7c7;
case 0x4db7c9:goto L4db7c9;
case 0x4db7cb:goto L4db7cb;
case 0x4db7ce:c.instructions+=4;goto B4db7ce;
case 0x4db7d0:c.instructions+=3;goto B4db7d0;
case 0x4db7d3:c.instructions+=2;goto B4db7d3;
case 0x4db7d6:c.instructions+=1;goto B4db7d6;
case 0x4db7d8:goto L4db7d8;
case 0x4db7da:c.instructions+=1;goto B4db7da;
case 0x4db7df:goto L4db7df;
case 0x4db7e2:c.instructions+=3;goto B4db7e2;
case 0x4db7e6:c.instructions+=2;goto B4db7e6;
case 0x4db7ee:c.instructions+=1;goto B4db7ee;
case 0x4db7f3:goto L4db7f3;
case 0x4db7f5:goto L4db7f5;
case 0x4db7f8:c.instructions+=12;goto B4db7f8;
case 0x4db7fa:c.instructions+=11;goto B4db7fa;
case 0x4db7fd:c.instructions+=10;goto B4db7fd;
case 0x4db800:c.instructions+=9;goto B4db800;
case 0x4db804:c.instructions+=8;goto B4db804;
case 0x4db806:c.instructions+=7;goto B4db806;
case 0x4db807:c.instructions+=6;goto B4db807;
case 0x4db808:c.instructions+=5;goto B4db808;
case 0x4db809:c.instructions+=4;goto B4db809;
case 0x4db80a:c.instructions+=3;goto B4db80a;
case 0x4db811:c.instructions+=2;goto B4db811;
case 0x4db814:c.instructions+=1;goto B4db814;
case 0x4db820:goto L4db820;
case 0x4db824:c.instructions+=3;goto B4db824;
case 0x4db826:c.instructions+=2;goto B4db826;
case 0x4db829:c.instructions+=1;goto B4db829;
case 0x4db82b:goto L4db82b;
case 0x4db82e:c.instructions+=2;goto B4db82e;
case 0x4db830:c.instructions+=1;goto B4db830;
case 0x4db832:goto L4db832;
case 0x4db837:goto L4db837;
case 0x4db83a:c.instructions+=2;goto B4db83a;
case 0x4db83e:c.instructions+=1;goto B4db83e;
case 0x4db843:goto L4db843;
case 0x4db846:c.instructions+=2;goto B4db846;
case 0x4db848:c.instructions+=1;goto B4db848;
case 0x4db84a:goto L4db84a;
case 0x4db84f:goto L4db84f;
case 0x4db852:c.instructions+=2;goto B4db852;
case 0x4db856:c.instructions+=1;goto B4db856;
case 0x4db85b:goto L4db85b;
case 0x4db85e:c.instructions+=2;goto B4db85e;
case 0x4db860:c.instructions+=1;goto B4db860;
case 0x4db862:goto L4db862;
case 0x4db865:c.instructions+=2;goto B4db865;
case 0x4db86d:c.instructions+=1;goto B4db86d;
case 0x4db872:goto L4db872;
case 0x4db875:c.instructions+=2;goto B4db875;
case 0x4db877:c.instructions+=1;goto B4db877;
case 0x4db879:goto L4db879;
case 0x4db87c:c.instructions+=2;goto B4db87c;
case 0x4db884:c.instructions+=1;goto B4db884;
case 0x4db889:goto L4db889;
case 0x4db890:goto L4db890;
case 0x4db893:c.instructions+=2;goto B4db893;
case 0x4db895:c.instructions+=1;goto B4db895;
case 0x4db897:goto L4db897;
case 0x4db89b:c.instructions+=2;goto B4db89b;
case 0x4db89d:c.instructions+=1;goto B4db89d;
case 0x4db89f:goto L4db89f;
case 0x4db8a1:c.instructions+=2;goto B4db8a1;
case 0x4db8a3:c.instructions+=1;goto B4db8a3;
case 0x4db8a8:goto L4db8a8;
case 0x4db8ab:goto L4db8ab;
case 0x4db8b3:c.instructions+=1;goto B4db8b3;
case 0x4db8c0:goto L4db8c0;
case 0x4db8c1:c.instructions+=4;goto B4db8c1;
case 0x4db8c3:c.instructions+=3;goto B4db8c3;
case 0x4db8c6:c.instructions+=2;goto B4db8c6;
case 0x4db8c8:c.instructions+=1;goto B4db8c8;
case 0x4db8ca:goto L4db8ca;
case 0x4db8cb:c.instructions+=3;goto B4db8cb;
case 0x4db8cd:c.instructions+=2;goto B4db8cd;
case 0x4db8d2:c.instructions+=1;goto B4db8d2;
case 0x4db8d7:goto L4db8d7;
case 0x4db8d9:c.instructions+=2;goto B4db8d9;
case 0x4db8db:c.instructions+=1;goto B4db8db;
case 0x4db8dd:goto L4db8dd;
case 0x4db8e0:c.instructions+=2;goto B4db8e0;
case 0x4db8e2:c.instructions+=1;goto B4db8e2;
case 0x4db8e7:goto L4db8e7;
case 0x4db8e9:c.instructions+=3;goto B4db8e9;
case 0x4db8ea:c.instructions+=2;goto B4db8ea;
case 0x4db8eb:c.instructions+=1;goto B4db8eb;
case 0x4db8ec:goto L4db8ec;
case 0x4db8ee:c.instructions+=1;goto B4db8ee;
case 0x4db8f0:goto L4db8f0;
case 0x4db8f3:c.instructions+=3;goto B4db8f3;
case 0x4db8f4:c.instructions+=2;goto B4db8f4;
case 0x4db8f6:c.instructions+=1;goto B4db8f6;
case 0x4db8fb:goto L4db8fb;
case 0x4db8fd:goto L4db8fd;
case 0x4db8fe:goto L4db8fe;
case 0x4db8ff:c.instructions+=1;goto B4db8ff;
case 0x4db900:goto L4db900;
case 0x4db901:c.instructions+=6;goto B4db901;
case 0x4db902:c.instructions+=5;goto B4db902;
case 0x4db906:c.instructions+=4;goto B4db906;
case 0x4db907:c.instructions+=3;goto B4db907;
case 0x4db908:c.instructions+=2;goto B4db908;
case 0x4db90a:c.instructions+=1;goto B4db90a;
case 0x4db910:goto L4db910;
case 0x4db912:goto L4db912;
case 0x4db918:c.instructions+=3;goto B4db918;
case 0x4db919:c.instructions+=2;goto B4db919;
case 0x4db91a:c.instructions+=1;goto B4db91a;
case 0x4db91f:goto L4db91f;
case 0x4db920:c.instructions+=2;goto B4db920;
case 0x4db921:c.instructions+=1;goto B4db921;
case 0x4db926:goto L4db926;
case 0x4db928:c.instructions+=3;goto B4db928;
case 0x4db92b:c.instructions+=2;goto B4db92b;
case 0x4db92d:c.instructions+=1;goto B4db92d;
case 0x4db92f:goto L4db92f;
case 0x4db935:c.instructions+=2;goto B4db935;
case 0x4db936:c.instructions+=1;goto B4db936;
case 0x4db93b:goto L4db93b;
case 0x4db93e:c.instructions+=2;goto B4db93e;
case 0x4db940:c.instructions+=1;goto B4db940;
case 0x4db942:goto L4db942;
case 0x4db948:c.instructions+=4;goto B4db948;
case 0x4db94a:c.instructions+=3;goto B4db94a;
case 0x4db94d:c.instructions+=2;goto B4db94d;
case 0x4db94f:c.instructions+=1;goto B4db94f;
case 0x4db951:goto L4db951;
case 0x4db953:goto L4db953;
case 0x4db958:goto L4db958;
case 0x4db95a:c.instructions+=1;goto B4db95a;
case 0x4db95c:goto L4db95c;
case 0x4db95f:c.instructions+=1;goto B4db95f;
case 0x4db961:goto L4db961;
case 0x4db963:goto L4db963;
case 0x4db969:c.instructions+=4;goto B4db969;
case 0x4db96b:c.instructions+=3;goto B4db96b;
case 0x4db970:c.instructions+=2;goto B4db970;
case 0x4db973:c.instructions+=1;goto B4db973;
case 0x4db979:goto L4db979;
case 0x4db97a:c.instructions+=2;goto B4db97a;
case 0x4db97d:c.instructions+=1;goto B4db97d;
case 0x4db97f:goto L4db97f;
case 0x4db982:c.instructions+=2;goto B4db982;
case 0x4db988:c.instructions+=1;goto B4db988;
case 0x4db98a:goto L4db98a;
case 0x4db98b:c.instructions+=4;goto B4db98b;
case 0x4db98c:c.instructions+=3;goto B4db98c;
case 0x4db98d:c.instructions+=2;goto B4db98d;
case 0x4db98e:c.instructions+=1;goto B4db98e;
case 0x4db990:goto L4db990;
case 0x4db991:c.instructions+=3;goto B4db991;
case 0x4db994:c.instructions+=2;goto B4db994;
case 0x4db996:c.instructions+=1;goto B4db996;
case 0x4db998:goto L4db998;
case 0x4db999:c.instructions+=1;goto B4db999;
case 0x4db99e:goto L4db99e;
case 0x4db9a1:c.instructions+=2;goto B4db9a1;
case 0x4db9a3:c.instructions+=1;goto B4db9a3;
case 0x4db9a5:goto L4db9a5;
case 0x4db9ab:c.instructions+=3;goto B4db9ab;
case 0x4db9ac:c.instructions+=2;goto B4db9ac;
case 0x4db9b1:c.instructions+=1;goto B4db9b1;
case 0x4db9b6:goto L4db9b6;
case 0x4db9b7:c.instructions+=1;goto B4db9b7;
case 0x4db9c0:goto L4db9c0;
case 0x4db9c8:c.instructions+=3;goto B4db9c8;
case 0x4db9c9:c.instructions+=2;goto B4db9c9;
case 0x4db9cb:c.instructions+=1;goto B4db9cb;
case 0x4db9cd:goto L4db9cd;
case 0x4db9d3:c.instructions+=10;goto B4db9d3;
case 0x4db9d6:c.instructions+=9;goto B4db9d6;
case 0x4db9d8:c.instructions+=8;goto B4db9d8;
case 0x4db9da:c.instructions+=7;goto B4db9da;
case 0x4db9de:c.instructions+=6;goto B4db9de;
case 0x4db9e2:c.instructions+=5;goto B4db9e2;
case 0x4db9e8:c.instructions+=4;goto B4db9e8;
case 0x4db9ee:c.instructions+=3;goto B4db9ee;
case 0x4db9f0:c.instructions+=2;goto B4db9f0;
case 0x4db9f3:c.instructions+=1;goto B4db9f3;
case 0x4db9f5:goto L4db9f5;
case 0x4db9f8:c.instructions+=2;goto B4db9f8;
case 0x4db9fa:c.instructions+=1;goto B4db9fa;
case 0x4db9fc:goto L4db9fc;
case 0x4db9fe:c.instructions+=1;goto B4db9fe;
case 0x4dba03:goto L4dba03;
case 0x4dba09:goto L4dba09;
case 0x4dba0e:c.instructions+=2;goto B4dba0e;
case 0x4dba10:c.instructions+=1;goto B4dba10;
case 0x4dba12:goto L4dba12;
case 0x4dba15:c.instructions+=8;goto B4dba15;
case 0x4dba19:c.instructions+=7;goto B4dba19;
case 0x4dba1d:c.instructions+=6;goto B4dba1d;
case 0x4dba23:c.instructions+=5;goto B4dba23;
case 0x4dba29:c.instructions+=4;goto B4dba29;
case 0x4dba2b:c.instructions+=3;goto B4dba2b;
case 0x4dba2d:c.instructions+=2;goto B4dba2d;
case 0x4dba30:c.instructions+=1;goto B4dba30;
case 0x4dba32:goto L4dba32;
case 0x4dba35:c.instructions+=2;goto B4dba35;
case 0x4dba37:c.instructions+=1;goto B4dba37;
case 0x4dba39:goto L4dba39;
case 0x4dba3b:c.instructions+=1;goto B4dba3b;
case 0x4dba40:goto L4dba40;
case 0x4dba4a:goto L4dba4a;
case 0x4dba4b:c.instructions+=1;goto B4dba4b;
case 0x4dba50:goto L4dba50;
case 0x4dba52:c.instructions+=14;goto B4dba52;
case 0x4dba57:c.instructions+=13;goto B4dba57;
case 0x4dba5d:c.instructions+=12;goto B4dba5d;
case 0x4dba5e:c.instructions+=11;goto B4dba5e;
case 0x4dba65:c.instructions+=10;goto B4dba65;
case 0x4dba66:c.instructions+=9;goto B4dba66;
case 0x4dba67:c.instructions+=8;goto B4dba67;
case 0x4dba68:c.instructions+=7;goto B4dba68;
case 0x4dba69:c.instructions+=6;goto B4dba69;
case 0x4dba6a:c.instructions+=5;goto B4dba6a;
case 0x4dba6c:c.instructions+=4;goto B4dba6c;
case 0x4dba72:c.instructions+=3;goto B4dba72;
case 0x4dba77:c.instructions+=2;goto B4dba77;
case 0x4dba78:c.instructions+=1;goto B4dba78;
case 0x4dba7d:goto L4dba7d;
case 0x4dba7f:c.instructions+=1;goto B4dba7f;
case 0x4dba84:goto L4dba84;
case 0x4dba86:c.instructions+=5;goto B4dba86;
case 0x4dba89:c.instructions+=4;goto B4dba89;
case 0x4dba8d:c.instructions+=3;goto B4dba8d;
case 0x4dba8f:c.instructions+=2;goto B4dba8f;
case 0x4dba97:c.instructions+=1;goto B4dba97;
case 0x4dba99:goto L4dba99;
case 0x4dba9b:c.instructions+=6;goto B4dba9b;
case 0x4dbaa1:c.instructions+=5;goto B4dbaa1;
case 0x4dbaa2:c.instructions+=4;goto B4dbaa2;
case 0x4dbaa8:c.instructions+=3;goto B4dbaa8;
case 0x4dbaa9:c.instructions+=2;goto B4dbaa9;
case 0x4dbaab:c.instructions+=1;goto B4dbaab;
case 0x4dbab0:goto L4dbab0;
case 0x4dbab6:c.instructions+=2;goto B4dbab6;
case 0x4dbab8:c.instructions+=1;goto B4dbab8;
case 0x4dbaba:goto L4dbaba;
case 0x4dbabc:goto L4dbabc;
case 0x4dbabe:c.instructions+=2;goto B4dbabe;
case 0x4dbac6:c.instructions+=1;goto B4dbac6;
case 0x4dbacb:goto L4dbacb;
case 0x4dbacd:c.instructions+=5;goto B4dbacd;
case 0x4dbad0:c.instructions+=4;goto B4dbad0;
case 0x4dbad4:c.instructions+=3;goto B4dbad4;
case 0x4dbad6:c.instructions+=2;goto B4dbad6;
case 0x4dbade:c.instructions+=1;goto B4dbade;
case 0x4dbae0:goto L4dbae0;
case 0x4dbae2:c.instructions+=6;goto B4dbae2;
case 0x4dbae8:c.instructions+=5;goto B4dbae8;
case 0x4dbae9:c.instructions+=4;goto B4dbae9;
case 0x4dbaef:c.instructions+=3;goto B4dbaef;
case 0x4dbaf0:c.instructions+=2;goto B4dbaf0;
case 0x4dbaf2:c.instructions+=1;goto B4dbaf2;
case 0x4dbaf7:goto L4dbaf7;
case 0x4dbafd:c.instructions+=1;goto B4dbafd;
case 0x4dbaff:goto L4dbaff;
case 0x4dbb01:goto L4dbb01;
case 0x4dbb03:c.instructions+=2;goto B4dbb03;
case 0x4dbb0b:c.instructions+=1;goto B4dbb0b;
case 0x4dbb10:goto L4dbb10;
case 0x4dbb12:c.instructions+=5;goto B4dbb12;
case 0x4dbb15:c.instructions+=4;goto B4dbb15;
case 0x4dbb19:c.instructions+=3;goto B4dbb19;
case 0x4dbb1b:c.instructions+=2;goto B4dbb1b;
case 0x4dbb23:c.instructions+=1;goto B4dbb23;
case 0x4dbb25:goto L4dbb25;
case 0x4dbb2b:c.instructions+=5;goto B4dbb2b;
case 0x4dbb2c:c.instructions+=4;goto B4dbb2c;
case 0x4dbb32:c.instructions+=3;goto B4dbb32;
case 0x4dbb33:c.instructions+=2;goto B4dbb33;
case 0x4dbb35:c.instructions+=1;goto B4dbb35;
case 0x4dbb3a:goto L4dbb3a;
case 0x4dbb40:c.instructions+=1;goto B4dbb40;
case 0x4dbb42:goto L4dbb42;
case 0x4dbb44:goto L4dbb44;
case 0x4dbb45:c.instructions+=5;goto B4dbb45;
case 0x4dbb46:c.instructions+=4;goto B4dbb46;
case 0x4dbb47:c.instructions+=3;goto B4dbb47;
case 0x4dbb49:c.instructions+=2;goto B4dbb49;
case 0x4dbb51:c.instructions+=1;goto B4dbb51;
case 0x4dbb56:goto L4dbb56;
case 0x4dbb58:c.instructions+=1;goto B4dbb58;
case 0x4dbb5d:goto L4dbb5d;
case 0x4dbb5f:c.instructions+=5;goto B4dbb5f;
case 0x4dbb62:c.instructions+=4;goto B4dbb62;
case 0x4dbb66:c.instructions+=3;goto B4dbb66;
case 0x4dbb68:c.instructions+=2;goto B4dbb68;
case 0x4dbb70:c.instructions+=1;goto B4dbb70;
case 0x4dbb72:goto L4dbb72;
case 0x4dbb74:c.instructions+=6;goto B4dbb74;
case 0x4dbb7a:c.instructions+=5;goto B4dbb7a;
case 0x4dbb7b:c.instructions+=4;goto B4dbb7b;
case 0x4dbb81:c.instructions+=3;goto B4dbb81;
case 0x4dbb82:c.instructions+=2;goto B4dbb82;
case 0x4dbb84:c.instructions+=1;goto B4dbb84;
case 0x4dbb89:goto L4dbb89;
case 0x4dbb8f:c.instructions+=2;goto B4dbb8f;
case 0x4dbb91:c.instructions+=1;goto B4dbb91;
case 0x4dbb93:goto L4dbb93;
case 0x4dbb95:goto L4dbb95;
case 0x4dbb97:c.instructions+=2;goto B4dbb97;
case 0x4dbb9f:c.instructions+=1;goto B4dbb9f;
case 0x4dbba4:goto L4dbba4;
case 0x4dbba6:c.instructions+=5;goto B4dbba6;
case 0x4dbba9:c.instructions+=4;goto B4dbba9;
case 0x4dbbad:c.instructions+=3;goto B4dbbad;
case 0x4dbbaf:c.instructions+=2;goto B4dbbaf;
case 0x4dbbb7:c.instructions+=1;goto B4dbbb7;
case 0x4dbbb9:goto L4dbbb9;
case 0x4dbbbb:c.instructions+=6;goto B4dbbbb;
case 0x4dbbc1:c.instructions+=5;goto B4dbbc1;
case 0x4dbbc2:c.instructions+=4;goto B4dbbc2;
case 0x4dbbc8:c.instructions+=3;goto B4dbbc8;
case 0x4dbbc9:c.instructions+=2;goto B4dbbc9;
case 0x4dbbcb:c.instructions+=1;goto B4dbbcb;
case 0x4dbbd0:goto L4dbbd0;
case 0x4dbbd6:c.instructions+=1;goto B4dbbd6;
case 0x4dbbd8:goto L4dbbd8;
case 0x4dbbda:goto L4dbbda;
case 0x4dbbdc:c.instructions+=2;goto B4dbbdc;
case 0x4dbbe4:c.instructions+=1;goto B4dbbe4;
case 0x4dbbe9:goto L4dbbe9;
case 0x4dbbeb:c.instructions+=5;goto B4dbbeb;
case 0x4dbbee:c.instructions+=4;goto B4dbbee;
case 0x4dbbf2:c.instructions+=3;goto B4dbbf2;
case 0x4dbbf4:c.instructions+=2;goto B4dbbf4;
case 0x4dbbfc:c.instructions+=1;goto B4dbbfc;
case 0x4dbbfe:goto L4dbbfe;
case 0x4dbc04:c.instructions+=5;goto B4dbc04;
case 0x4dbc05:c.instructions+=4;goto B4dbc05;
case 0x4dbc0b:c.instructions+=3;goto B4dbc0b;
case 0x4dbc0c:c.instructions+=2;goto B4dbc0c;
case 0x4dbc0e:c.instructions+=1;goto B4dbc0e;
case 0x4dbc13:goto L4dbc13;
case 0x4dbc19:c.instructions+=1;goto B4dbc19;
case 0x4dbc1b:goto L4dbc1b;
case 0x4dbc1d:goto L4dbc1d;
case 0x4dbc1e:c.instructions+=5;goto B4dbc1e;
case 0x4dbc1f:c.instructions+=4;goto B4dbc1f;
case 0x4dbc20:c.instructions+=3;goto B4dbc20;
case 0x4dbc22:c.instructions+=2;goto B4dbc22;
case 0x4dbc2a:c.instructions+=1;goto B4dbc2a;
case 0x4dbc2f:goto L4dbc2f;
case 0x4dbc31:c.instructions+=1;goto B4dbc31;
case 0x4dbc36:goto L4dbc36;
case 0x4dbc38:c.instructions+=5;goto B4dbc38;
case 0x4dbc3b:c.instructions+=4;goto B4dbc3b;
case 0x4dbc3f:c.instructions+=3;goto B4dbc3f;
case 0x4dbc41:c.instructions+=2;goto B4dbc41;
case 0x4dbc49:c.instructions+=1;goto B4dbc49;
case 0x4dbc4b:goto L4dbc4b;
case 0x4dbc4d:c.instructions+=6;goto B4dbc4d;
case 0x4dbc53:c.instructions+=5;goto B4dbc53;
case 0x4dbc54:c.instructions+=4;goto B4dbc54;
case 0x4dbc5a:c.instructions+=3;goto B4dbc5a;
case 0x4dbc5b:c.instructions+=2;goto B4dbc5b;
case 0x4dbc5d:c.instructions+=1;goto B4dbc5d;
case 0x4dbc62:goto L4dbc62;
case 0x4dbc68:c.instructions+=2;goto B4dbc68;
case 0x4dbc6a:c.instructions+=1;goto B4dbc6a;
case 0x4dbc6c:goto L4dbc6c;
case 0x4dbc6e:goto L4dbc6e;
case 0x4dbc70:c.instructions+=2;goto B4dbc70;
case 0x4dbc78:c.instructions+=1;goto B4dbc78;
case 0x4dbc7d:goto L4dbc7d;
case 0x4dbc7f:c.instructions+=5;goto B4dbc7f;
case 0x4dbc82:c.instructions+=4;goto B4dbc82;
case 0x4dbc86:c.instructions+=3;goto B4dbc86;
case 0x4dbc88:c.instructions+=2;goto B4dbc88;
case 0x4dbc90:c.instructions+=1;goto B4dbc90;
case 0x4dbc92:goto L4dbc92;
case 0x4dbc94:c.instructions+=6;goto B4dbc94;
case 0x4dbc9a:c.instructions+=5;goto B4dbc9a;
case 0x4dbc9b:c.instructions+=4;goto B4dbc9b;
case 0x4dbca1:c.instructions+=3;goto B4dbca1;
case 0x4dbca2:c.instructions+=2;goto B4dbca2;
case 0x4dbca4:c.instructions+=1;goto B4dbca4;
case 0x4dbca9:goto L4dbca9;
case 0x4dbcaf:c.instructions+=1;goto B4dbcaf;
case 0x4dbcb1:goto L4dbcb1;
case 0x4dbcb3:goto L4dbcb3;
case 0x4dbcb5:c.instructions+=2;goto B4dbcb5;
case 0x4dbcbd:c.instructions+=1;goto B4dbcbd;
case 0x4dbcc2:goto L4dbcc2;
case 0x4dbcc4:c.instructions+=5;goto B4dbcc4;
case 0x4dbcc7:c.instructions+=4;goto B4dbcc7;
case 0x4dbccb:c.instructions+=3;goto B4dbccb;
case 0x4dbccd:c.instructions+=2;goto B4dbccd;
case 0x4dbcd5:c.instructions+=1;goto B4dbcd5;
case 0x4dbcd7:goto L4dbcd7;
case 0x4dbcdd:c.instructions+=5;goto B4dbcdd;
case 0x4dbcde:c.instructions+=4;goto B4dbcde;
case 0x4dbce4:c.instructions+=3;goto B4dbce4;
case 0x4dbce5:c.instructions+=2;goto B4dbce5;
case 0x4dbce7:c.instructions+=1;goto B4dbce7;
case 0x4dbcec:goto L4dbcec;
case 0x4dbcf2:c.instructions+=1;goto B4dbcf2;
case 0x4dbcf4:goto L4dbcf4;
case 0x4dbcf6:goto L4dbcf6;
case 0x4dbcf7:c.instructions+=5;goto B4dbcf7;
case 0x4dbcf8:c.instructions+=4;goto B4dbcf8;
case 0x4dbcf9:c.instructions+=3;goto B4dbcf9;
case 0x4dbcfb:c.instructions+=2;goto B4dbcfb;
case 0x4dbd03:c.instructions+=1;goto B4dbd03;
case 0x4dbd08:goto L4dbd08;
case 0x4dbd0a:c.instructions+=1;goto B4dbd0a;
case 0x4dbd0f:goto L4dbd0f;
case 0x4dbd11:c.instructions+=5;goto B4dbd11;
case 0x4dbd14:c.instructions+=4;goto B4dbd14;
case 0x4dbd18:c.instructions+=3;goto B4dbd18;
case 0x4dbd1a:c.instructions+=2;goto B4dbd1a;
case 0x4dbd22:c.instructions+=1;goto B4dbd22;
case 0x4dbd24:goto L4dbd24;
case 0x4dbd26:c.instructions+=6;goto B4dbd26;
case 0x4dbd2c:c.instructions+=5;goto B4dbd2c;
case 0x4dbd2d:c.instructions+=4;goto B4dbd2d;
case 0x4dbd33:c.instructions+=3;goto B4dbd33;
case 0x4dbd34:c.instructions+=2;goto B4dbd34;
case 0x4dbd36:c.instructions+=1;goto B4dbd36;
case 0x4dbd3b:goto L4dbd3b;
case 0x4dbd41:c.instructions+=2;goto B4dbd41;
case 0x4dbd43:c.instructions+=1;goto B4dbd43;
case 0x4dbd45:goto L4dbd45;
case 0x4dbd47:goto L4dbd47;
case 0x4dbd49:c.instructions+=2;goto B4dbd49;
case 0x4dbd51:c.instructions+=1;goto B4dbd51;
case 0x4dbd56:goto L4dbd56;
case 0x4dbd58:c.instructions+=5;goto B4dbd58;
case 0x4dbd5b:c.instructions+=4;goto B4dbd5b;
case 0x4dbd5f:c.instructions+=3;goto B4dbd5f;
case 0x4dbd61:c.instructions+=2;goto B4dbd61;
case 0x4dbd69:c.instructions+=1;goto B4dbd69;
case 0x4dbd6b:goto L4dbd6b;
case 0x4dbd6d:c.instructions+=6;goto B4dbd6d;
case 0x4dbd73:c.instructions+=5;goto B4dbd73;
case 0x4dbd74:c.instructions+=4;goto B4dbd74;
case 0x4dbd7a:c.instructions+=3;goto B4dbd7a;
case 0x4dbd7b:c.instructions+=2;goto B4dbd7b;
case 0x4dbd7d:c.instructions+=1;goto B4dbd7d;
case 0x4dbd82:goto L4dbd82;
case 0x4dbd88:c.instructions+=1;goto B4dbd88;
case 0x4dbd8a:goto L4dbd8a;
case 0x4dbd8c:goto L4dbd8c;
case 0x4dbd8e:c.instructions+=2;goto B4dbd8e;
case 0x4dbd96:c.instructions+=1;goto B4dbd96;
case 0x4dbd9b:goto L4dbd9b;
case 0x4dbd9d:c.instructions+=5;goto B4dbd9d;
case 0x4dbda0:c.instructions+=4;goto B4dbda0;
case 0x4dbda4:c.instructions+=3;goto B4dbda4;
case 0x4dbda6:c.instructions+=2;goto B4dbda6;
case 0x4dbdae:c.instructions+=1;goto B4dbdae;
case 0x4dbdb0:goto L4dbdb0;
case 0x4dbdb6:c.instructions+=5;goto B4dbdb6;
case 0x4dbdb7:c.instructions+=4;goto B4dbdb7;
case 0x4dbdbd:c.instructions+=3;goto B4dbdbd;
case 0x4dbdbe:c.instructions+=2;goto B4dbdbe;
case 0x4dbdc0:c.instructions+=1;goto B4dbdc0;
case 0x4dbdc5:goto L4dbdc5;
case 0x4dbdcb:c.instructions+=1;goto B4dbdcb;
case 0x4dbdcd:goto L4dbdcd;
case 0x4dbdcf:goto L4dbdcf;
case 0x4dbdd0:c.instructions+=5;goto B4dbdd0;
case 0x4dbdd1:c.instructions+=4;goto B4dbdd1;
case 0x4dbdd2:c.instructions+=3;goto B4dbdd2;
case 0x4dbdd4:c.instructions+=2;goto B4dbdd4;
case 0x4dbddc:c.instructions+=1;goto B4dbddc;
case 0x4dbde1:goto L4dbde1;
case 0x4dbde3:c.instructions+=1;goto B4dbde3;
case 0x4dbde8:goto L4dbde8;
case 0x4dbdea:c.instructions+=5;goto B4dbdea;
case 0x4dbded:c.instructions+=4;goto B4dbded;
case 0x4dbdf1:c.instructions+=3;goto B4dbdf1;
case 0x4dbdf3:c.instructions+=2;goto B4dbdf3;
case 0x4dbdfb:c.instructions+=1;goto B4dbdfb;
case 0x4dbdfd:goto L4dbdfd;
case 0x4dbdff:c.instructions+=6;goto B4dbdff;
case 0x4dbe05:c.instructions+=5;goto B4dbe05;
case 0x4dbe06:c.instructions+=4;goto B4dbe06;
case 0x4dbe0c:c.instructions+=3;goto B4dbe0c;
case 0x4dbe0d:c.instructions+=2;goto B4dbe0d;
case 0x4dbe0f:c.instructions+=1;goto B4dbe0f;
case 0x4dbe14:goto L4dbe14;
case 0x4dbe1a:c.instructions+=2;goto B4dbe1a;
case 0x4dbe1c:c.instructions+=1;goto B4dbe1c;
case 0x4dbe1e:goto L4dbe1e;
case 0x4dbe20:goto L4dbe20;
case 0x4dbe22:c.instructions+=2;goto B4dbe22;
case 0x4dbe2a:c.instructions+=1;goto B4dbe2a;
case 0x4dbe2f:goto L4dbe2f;
case 0x4dbe31:c.instructions+=5;goto B4dbe31;
case 0x4dbe34:c.instructions+=4;goto B4dbe34;
case 0x4dbe38:c.instructions+=3;goto B4dbe38;
case 0x4dbe3a:c.instructions+=2;goto B4dbe3a;
case 0x4dbe42:c.instructions+=1;goto B4dbe42;
case 0x4dbe44:goto L4dbe44;
case 0x4dbe46:c.instructions+=6;goto B4dbe46;
case 0x4dbe4c:c.instructions+=5;goto B4dbe4c;
case 0x4dbe4d:c.instructions+=4;goto B4dbe4d;
case 0x4dbe53:c.instructions+=3;goto B4dbe53;
case 0x4dbe54:c.instructions+=2;goto B4dbe54;
case 0x4dbe56:c.instructions+=1;goto B4dbe56;
case 0x4dbe5b:goto L4dbe5b;
case 0x4dbe61:c.instructions+=1;goto B4dbe61;
case 0x4dbe63:goto L4dbe63;
case 0x4dbe65:goto L4dbe65;
case 0x4dbe67:c.instructions+=2;goto B4dbe67;
case 0x4dbe6f:c.instructions+=1;goto B4dbe6f;
case 0x4dbe74:goto L4dbe74;
case 0x4dbe76:c.instructions+=5;goto B4dbe76;
case 0x4dbe79:c.instructions+=4;goto B4dbe79;
case 0x4dbe7d:c.instructions+=3;goto B4dbe7d;
case 0x4dbe7f:c.instructions+=2;goto B4dbe7f;
case 0x4dbe87:c.instructions+=1;goto B4dbe87;
case 0x4dbe89:goto L4dbe89;
case 0x4dbe8f:c.instructions+=5;goto B4dbe8f;
case 0x4dbe90:c.instructions+=4;goto B4dbe90;
case 0x4dbe96:c.instructions+=3;goto B4dbe96;
case 0x4dbe97:c.instructions+=2;goto B4dbe97;
case 0x4dbe99:c.instructions+=1;goto B4dbe99;
case 0x4dbe9e:goto L4dbe9e;
case 0x4dbea4:c.instructions+=1;goto B4dbea4;
case 0x4dbea6:goto L4dbea6;
case 0x4dbea8:goto L4dbea8;
case 0x4dbea9:c.instructions+=5;goto B4dbea9;
case 0x4dbeaa:c.instructions+=4;goto B4dbeaa;
case 0x4dbeab:c.instructions+=3;goto B4dbeab;
case 0x4dbead:c.instructions+=2;goto B4dbead;
case 0x4dbeb5:c.instructions+=1;goto B4dbeb5;
case 0x4dbeba:goto L4dbeba;
case 0x4dbebc:c.instructions+=1;goto B4dbebc;
case 0x4dbec1:goto L4dbec1;
case 0x4dbec3:c.instructions+=5;goto B4dbec3;
case 0x4dbec6:c.instructions+=4;goto B4dbec6;
case 0x4dbeca:c.instructions+=3;goto B4dbeca;
case 0x4dbecc:c.instructions+=2;goto B4dbecc;
case 0x4dbed4:c.instructions+=1;goto B4dbed4;
case 0x4dbed6:goto L4dbed6;
case 0x4dbed8:c.instructions+=6;goto B4dbed8;
case 0x4dbede:c.instructions+=5;goto B4dbede;
case 0x4dbedf:c.instructions+=4;goto B4dbedf;
case 0x4dbee5:c.instructions+=3;goto B4dbee5;
case 0x4dbee6:c.instructions+=2;goto B4dbee6;
case 0x4dbee8:c.instructions+=1;goto B4dbee8;
case 0x4dbeed:goto L4dbeed;
case 0x4dbef3:c.instructions+=2;goto B4dbef3;
case 0x4dbef5:c.instructions+=1;goto B4dbef5;
case 0x4dbef7:goto L4dbef7;
case 0x4dbef9:goto L4dbef9;
case 0x4dbefb:c.instructions+=2;goto B4dbefb;
case 0x4dbf03:c.instructions+=1;goto B4dbf03;
case 0x4dbf08:goto L4dbf08;
case 0x4dbf0a:c.instructions+=5;goto B4dbf0a;
case 0x4dbf0d:c.instructions+=4;goto B4dbf0d;
case 0x4dbf11:c.instructions+=3;goto B4dbf11;
case 0x4dbf13:c.instructions+=2;goto B4dbf13;
case 0x4dbf1b:c.instructions+=1;goto B4dbf1b;
case 0x4dbf1d:goto L4dbf1d;
case 0x4dbf1f:c.instructions+=6;goto B4dbf1f;
case 0x4dbf25:c.instructions+=5;goto B4dbf25;
case 0x4dbf26:c.instructions+=4;goto B4dbf26;
case 0x4dbf2c:c.instructions+=3;goto B4dbf2c;
case 0x4dbf2d:c.instructions+=2;goto B4dbf2d;
case 0x4dbf2f:c.instructions+=1;goto B4dbf2f;
case 0x4dbf34:goto L4dbf34;
case 0x4dbf3a:c.instructions+=1;goto B4dbf3a;
case 0x4dbf3c:goto L4dbf3c;
case 0x4dbf3e:goto L4dbf3e;
case 0x4dbf40:c.instructions+=2;goto B4dbf40;
case 0x4dbf48:c.instructions+=1;goto B4dbf48;
case 0x4dbf4d:goto L4dbf4d;
case 0x4dbf4f:c.instructions+=5;goto B4dbf4f;
case 0x4dbf52:c.instructions+=4;goto B4dbf52;
case 0x4dbf56:c.instructions+=3;goto B4dbf56;
case 0x4dbf58:c.instructions+=2;goto B4dbf58;
case 0x4dbf60:c.instructions+=1;goto B4dbf60;
case 0x4dbf62:goto L4dbf62;
case 0x4dbf68:c.instructions+=5;goto B4dbf68;
case 0x4dbf69:c.instructions+=4;goto B4dbf69;
case 0x4dbf6f:c.instructions+=3;goto B4dbf6f;
case 0x4dbf70:c.instructions+=2;goto B4dbf70;
case 0x4dbf72:c.instructions+=1;goto B4dbf72;
case 0x4dbf77:goto L4dbf77;
case 0x4dbf7d:c.instructions+=1;goto B4dbf7d;
case 0x4dbf7f:goto L4dbf7f;
case 0x4dbf81:goto L4dbf81;
case 0x4dbf82:c.instructions+=5;goto B4dbf82;
case 0x4dbf83:c.instructions+=4;goto B4dbf83;
case 0x4dbf84:c.instructions+=3;goto B4dbf84;
case 0x4dbf86:c.instructions+=2;goto B4dbf86;
case 0x4dbf8e:c.instructions+=1;goto B4dbf8e;
case 0x4dbf93:goto L4dbf93;
case 0x4dbf95:c.instructions+=1;goto B4dbf95;
case 0x4dbf9a:goto L4dbf9a;
case 0x4dbf9c:c.instructions+=5;goto B4dbf9c;
case 0x4dbf9f:c.instructions+=4;goto B4dbf9f;
case 0x4dbfa3:c.instructions+=3;goto B4dbfa3;
case 0x4dbfa5:c.instructions+=2;goto B4dbfa5;
case 0x4dbfad:c.instructions+=1;goto B4dbfad;
case 0x4dbfaf:goto L4dbfaf;
case 0x4dbfb1:c.instructions+=6;goto B4dbfb1;
case 0x4dbfb7:c.instructions+=5;goto B4dbfb7;
case 0x4dbfb8:c.instructions+=4;goto B4dbfb8;
case 0x4dbfbe:c.instructions+=3;goto B4dbfbe;
case 0x4dbfbf:c.instructions+=2;goto B4dbfbf;
case 0x4dbfc1:c.instructions+=1;goto B4dbfc1;
case 0x4dbfc6:goto L4dbfc6;
case 0x4dbfcc:c.instructions+=2;goto B4dbfcc;
case 0x4dbfce:c.instructions+=1;goto B4dbfce;
case 0x4dbfd0:goto L4dbfd0;
case 0x4dbfd2:goto L4dbfd2;
case 0x4dbfd4:c.instructions+=2;goto B4dbfd4;
case 0x4dbfdc:c.instructions+=1;goto B4dbfdc;
case 0x4dbfe1:goto L4dbfe1;
case 0x4dbfe3:c.instructions+=5;goto B4dbfe3;
case 0x4dbfe6:c.instructions+=4;goto B4dbfe6;
case 0x4dbfea:c.instructions+=3;goto B4dbfea;
case 0x4dbfec:c.instructions+=2;goto B4dbfec;
case 0x4dbff4:c.instructions+=1;goto B4dbff4;
case 0x4dbff6:goto L4dbff6;
case 0x4dbff8:c.instructions+=3;goto B4dbff8;
case 0x4dbffe:c.instructions+=2;goto B4dbffe;
case 0x4dbfff:c.instructions+=1;goto B4dbfff;
default:missing_instruction(c.pc);}
B4db001:L4db001:{c.instructions+=1;NFSU2_TR(0x4db001);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db006ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db006:L4db006:{c.instructions+=2;NFSU2_TR(0x4db006);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db008:{NFSU2_TR(0x4db008);
if(r1(R+518)){{goto L4db00f;}}
}
B4db00a:L4db00a:{c.instructions+=2;NFSU2_TR(0x4db00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db00d:{NFSU2_TR(0x4db00d);
{goto L4db011;}
}
B4db00f:L4db00f:{c.instructions+=1;NFSU2_TR(0x4db00f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db011:L4db011:{c.instructions+=10;NFSU2_TR(0x4db011);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db014:{NFSU2_TR(0x4db014);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db016:{NFSU2_TR(0x4db016);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db019:{NFSU2_TR(0x4db019);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db01c:{NFSU2_TR(0x4db01c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db01e:{NFSU2_TR(0x4db01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db021:{NFSU2_TR(0x4db021);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db024:{NFSU2_TR(0x4db024);
u8 U[4];
w4(U+0,u32(0xd1b15e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db029:{NFSU2_TR(0x4db029);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db02a:{NFSU2_TR(0x4db02a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db02full));
TAIL_STATIC(0x537a10u,537);
}
B4db02f:L4db02f:{c.instructions+=4;NFSU2_TR(0x4db02f);
__builtin_memmove((R+28),(R+0),4);
}
B4db031:{NFSU2_TR(0x4db031);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db034:{NFSU2_TR(0x4db034);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db036:{NFSU2_TR(0x4db036);
if(r1(R+518)){{goto L4db055;}}
}
B4db038:L4db038:{c.instructions+=1;NFSU2_TR(0x4db038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db03dull));
TAIL_STATIC(0x440ec0u,440);
}
B4db03d:L4db03d:{c.instructions+=2;NFSU2_TR(0x4db03d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db03f:{NFSU2_TR(0x4db03f);
if(r1(R+518)){{goto L4db046;}}
}
B4db041:L4db041:{c.instructions+=2;NFSU2_TR(0x4db041);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db044:{NFSU2_TR(0x4db044);
{goto L4db048;}
}
B4db046:L4db046:{c.instructions+=1;NFSU2_TR(0x4db046);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db048:L4db048:{c.instructions+=5;NFSU2_TR(0x4db048);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db04b:{NFSU2_TR(0x4db04b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db04d:{NFSU2_TR(0x4db04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db050:{NFSU2_TR(0x4db050);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db053:{NFSU2_TR(0x4db053);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db055:L4db055:{c.instructions+=4;NFSU2_TR(0x4db055);
u8 U[4];
w4(U+0,u32(0x35102edfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db05a:{NFSU2_TR(0x4db05a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db05b:{NFSU2_TR(0x4db05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db05e:{NFSU2_TR(0x4db05e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db063ull));
TAIL_STATIC(0x50c900u,50c);
}
B4db063:L4db063:{c.instructions+=7;NFSU2_TR(0x4db063);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4db068:{NFSU2_TR(0x4db068);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4db06b:{NFSU2_TR(0x4db06b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4db06d:{NFSU2_TR(0x4db06d);
u8 U[4];
w4(U+0,u32(0xc8d50791ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db072:{NFSU2_TR(0x4db072);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db073:{NFSU2_TR(0x4db073);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4db078:{NFSU2_TR(0x4db078);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db07dull));
TAIL_STATIC(0x537a10u,537);
}
B4db07d:L4db07d:{c.instructions+=4;NFSU2_TR(0x4db07d);
__builtin_memmove((R+12),(R+0),4);
}
B4db07f:{NFSU2_TR(0x4db07f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4db082:{NFSU2_TR(0x4db082);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db084:{NFSU2_TR(0x4db084);
if(r1(R+518)){{goto L4db0a3;}}
}
B4db086:L4db086:{c.instructions+=1;NFSU2_TR(0x4db086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db08bull));
TAIL_STATIC(0x440ec0u,440);
}
B4db08b:L4db08b:{c.instructions+=2;NFSU2_TR(0x4db08b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db08d:{NFSU2_TR(0x4db08d);
if(r1(R+518)){{goto L4db094;}}
}
B4db08f:L4db08f:{c.instructions+=2;NFSU2_TR(0x4db08f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db092:{NFSU2_TR(0x4db092);
{goto L4db096;}
}
B4db094:L4db094:{c.instructions+=1;NFSU2_TR(0x4db094);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db096:L4db096:{c.instructions+=5;NFSU2_TR(0x4db096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db099:{NFSU2_TR(0x4db099);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db09b:{NFSU2_TR(0x4db09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db09e:{NFSU2_TR(0x4db09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db0a1:{NFSU2_TR(0x4db0a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db0a3:L4db0a3:{c.instructions+=4;NFSU2_TR(0x4db0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db0a6:{NFSU2_TR(0x4db0a6);
u8 U[4];
w4(U+0,u32(0xf3828848ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db0ab:{NFSU2_TR(0x4db0ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db0ac:{NFSU2_TR(0x4db0ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db0b1ull));
TAIL_STATIC(0x537a10u,537);
}
B4db0b1:L4db0b1:{c.instructions+=4;NFSU2_TR(0x4db0b1);
__builtin_memmove((R+20),(R+0),4);
}
B4db0b3:{NFSU2_TR(0x4db0b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db0b6:{NFSU2_TR(0x4db0b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db0b8:{NFSU2_TR(0x4db0b8);
if(r1(R+518)){{goto L4db0d7;}}
}
B4db0ba:L4db0ba:{c.instructions+=1;NFSU2_TR(0x4db0ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db0bfull));
TAIL_STATIC(0x440ec0u,440);
}
B4db0bf:L4db0bf:{c.instructions+=2;NFSU2_TR(0x4db0bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db0c1:{NFSU2_TR(0x4db0c1);
if(r1(R+518)){{goto L4db0c8;}}
}
B4db0c3:L4db0c3:{c.instructions+=2;NFSU2_TR(0x4db0c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db0c6:{NFSU2_TR(0x4db0c6);
{goto L4db0ca;}
}
B4db0c8:L4db0c8:{c.instructions+=1;NFSU2_TR(0x4db0c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db0ca:L4db0ca:{c.instructions+=5;NFSU2_TR(0x4db0ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db0cd:{NFSU2_TR(0x4db0cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db0cf:{NFSU2_TR(0x4db0cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db0d2:{NFSU2_TR(0x4db0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db0d5:{NFSU2_TR(0x4db0d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db0d7:L4db0d7:{c.instructions+=4;NFSU2_TR(0x4db0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db0da:{NFSU2_TR(0x4db0da);
u8 U[4];
w4(U+0,u32(0x32eee5fbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db0df:{NFSU2_TR(0x4db0df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db0e0:{NFSU2_TR(0x4db0e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db0e5ull));
TAIL_STATIC(0x537a10u,537);
}
B4db0e5:L4db0e5:{c.instructions+=4;NFSU2_TR(0x4db0e5);
__builtin_memmove((R+28),(R+0),4);
}
B4db0e7:{NFSU2_TR(0x4db0e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db0ea:{NFSU2_TR(0x4db0ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db0ec:{NFSU2_TR(0x4db0ec);
if(r1(R+518)){{goto L4db10b;}}
}
B4db0ee:L4db0ee:{c.instructions+=1;NFSU2_TR(0x4db0ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db0f3ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db0f3:L4db0f3:{c.instructions+=2;NFSU2_TR(0x4db0f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db0f5:{NFSU2_TR(0x4db0f5);
if(r1(R+518)){{goto L4db0fc;}}
}
B4db0f7:L4db0f7:{c.instructions+=2;NFSU2_TR(0x4db0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db0fa:{NFSU2_TR(0x4db0fa);
{goto L4db0fe;}
}
B4db0fc:L4db0fc:{c.instructions+=1;NFSU2_TR(0x4db0fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db0fe:L4db0fe:{c.instructions+=5;NFSU2_TR(0x4db0fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db101:{NFSU2_TR(0x4db101);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db103:{NFSU2_TR(0x4db103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db106:{NFSU2_TR(0x4db106);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db109:{NFSU2_TR(0x4db109);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db10b:L4db10b:{c.instructions+=2;NFSU2_TR(0x4db10b);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db10d:{NFSU2_TR(0x4db10d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db112ull));
TAIL_STATIC(0x575620u,575);
}
B4db112:L4db112:{c.instructions+=3;NFSU2_TR(0x4db112);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4db115:{NFSU2_TR(0x4db115);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db117:{NFSU2_TR(0x4db117);
if(r1(R+518)){{goto L4db12d;}}
}
B4db119:L4db119:{c.instructions+=6;NFSU2_TR(0x4db119);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db11c:{NFSU2_TR(0x4db11c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db11f:{NFSU2_TR(0x4db11f);
u8 U[4];
w4(U+0,u32(0x795b80ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4db125:{NFSU2_TR(0x4db125);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db128:{NFSU2_TR(0x4db128);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4db12b:{NFSU2_TR(0x4db12b);
{goto L4db12f;}
}
B4db12d:L4db12d:{c.instructions+=1;NFSU2_TR(0x4db12d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db12f:L4db12f:{c.instructions+=11;NFSU2_TR(0x4db12f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4db133:{NFSU2_TR(0x4db133);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db136:{NFSU2_TR(0x4db136);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B4db139:{NFSU2_TR(0x4db139);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db13b:{NFSU2_TR(0x4db13b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db13e:{NFSU2_TR(0x4db13e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db141:{NFSU2_TR(0x4db141);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db143:{NFSU2_TR(0x4db143);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4db146:{NFSU2_TR(0x4db146);
u8 U[4];
w4(U+0,u32(0xc8d50792ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db14b:{NFSU2_TR(0x4db14b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db14c:{NFSU2_TR(0x4db14c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db151ull));
TAIL_STATIC(0x537a10u,537);
}
B4db151:L4db151:{c.instructions+=4;NFSU2_TR(0x4db151);
__builtin_memmove((R+20),(R+0),4);
}
B4db153:{NFSU2_TR(0x4db153);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db156:{NFSU2_TR(0x4db156);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db158:{NFSU2_TR(0x4db158);
if(r1(R+518)){{goto L4db177;}}
}
B4db15a:L4db15a:{c.instructions+=1;NFSU2_TR(0x4db15a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db15full));
TAIL_STATIC(0x440ec0u,440);
}
B4db15f:L4db15f:{c.instructions+=2;NFSU2_TR(0x4db15f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db161:{NFSU2_TR(0x4db161);
if(r1(R+518)){{goto L4db168;}}
}
B4db163:L4db163:{c.instructions+=2;NFSU2_TR(0x4db163);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db166:{NFSU2_TR(0x4db166);
{goto L4db16a;}
}
B4db168:L4db168:{c.instructions+=1;NFSU2_TR(0x4db168);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db16a:L4db16a:{c.instructions+=5;NFSU2_TR(0x4db16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db16d:{NFSU2_TR(0x4db16d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db16f:{NFSU2_TR(0x4db16f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db172:{NFSU2_TR(0x4db172);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db175:{NFSU2_TR(0x4db175);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db177:L4db177:{c.instructions+=9;NFSU2_TR(0x4db177);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db179:{NFSU2_TR(0x4db179);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db17d:{NFSU2_TR(0x4db17d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db181:{NFSU2_TR(0x4db181);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db185:{NFSU2_TR(0x4db185);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db189:{NFSU2_TR(0x4db189);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db18d:{NFSU2_TR(0x4db18d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4db191:{NFSU2_TR(0x4db191);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4db193:{NFSU2_TR(0x4db193);
if(r1(R+518)){{goto L4db1ac;}}
}
B4db195:L4db195:{c.instructions+=2;NFSU2_TR(0x4db195);
u8 U[4];
w4(U+0,u32(0xb8cf16fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db19a:{NFSU2_TR(0x4db19a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db19full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4db19f:L4db19f:{c.instructions+=5;NFSU2_TR(0x4db19f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db1a0:{NFSU2_TR(0x4db1a0);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db1a5:{NFSU2_TR(0x4db1a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4db1a9:{NFSU2_TR(0x4db1a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db1aa:{NFSU2_TR(0x4db1aa);
{goto L4db1c1;}
}
B4db1ac:L4db1ac:{c.instructions+=2;NFSU2_TR(0x4db1ac);
u8 U[4];
w4(U+0,u32(0xccbc22b3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db1b1:{NFSU2_TR(0x4db1b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db1b6ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4db1b6:L4db1b6:{c.instructions+=4;NFSU2_TR(0x4db1b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db1b7:{NFSU2_TR(0x4db1b7);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db1bc:{NFSU2_TR(0x4db1bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4db1c0:{NFSU2_TR(0x4db1c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db1c1:L4db1c1:{c.instructions+=1;NFSU2_TR(0x4db1c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db1c6ull));
TAIL_STATIC(0x4400d0u,440);
}
B4db1c6:L4db1c6:{c.instructions+=6;NFSU2_TR(0x4db1c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4db1c9:{NFSU2_TR(0x4db1c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4db1cd:{NFSU2_TR(0x4db1cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db1ce:{NFSU2_TR(0x4db1ce);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db1d3:{NFSU2_TR(0x4db1d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db1d4:{NFSU2_TR(0x4db1d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db1d9ull));
TAIL_STATIC(0x537be0u,537);
}
B4db1d9:L4db1d9:{c.instructions+=4;NFSU2_TR(0x4db1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db1dc:{NFSU2_TR(0x4db1dc);
u8 U[4];
w4(U+0,u32(0xf3828849ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db1e1:{NFSU2_TR(0x4db1e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db1e2:{NFSU2_TR(0x4db1e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db1e7ull));
TAIL_STATIC(0x537a10u,537);
}
B4db1e7:L4db1e7:{c.instructions+=4;NFSU2_TR(0x4db1e7);
__builtin_memmove((R+12),(R+0),4);
}
B4db1e9:{NFSU2_TR(0x4db1e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4db1ec:{NFSU2_TR(0x4db1ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db1ee:{NFSU2_TR(0x4db1ee);
if(r1(R+518)){{goto L4db20d;}}
}
B4db1f0:L4db1f0:{c.instructions+=1;NFSU2_TR(0x4db1f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db1f5ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db1f5:L4db1f5:{c.instructions+=2;NFSU2_TR(0x4db1f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db1f7:{NFSU2_TR(0x4db1f7);
if(r1(R+518)){{goto L4db1fe;}}
}
B4db1f9:L4db1f9:{c.instructions+=2;NFSU2_TR(0x4db1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db1fc:{NFSU2_TR(0x4db1fc);
{goto L4db200;}
}
B4db1fe:L4db1fe:{c.instructions+=1;NFSU2_TR(0x4db1fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db200:L4db200:{c.instructions+=5;NFSU2_TR(0x4db200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db203:{NFSU2_TR(0x4db203);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db205:{NFSU2_TR(0x4db205);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db208:{NFSU2_TR(0x4db208);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db20b:{NFSU2_TR(0x4db20b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db20d:L4db20d:{c.instructions+=5;NFSU2_TR(0x4db20d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4db211:{NFSU2_TR(0x4db211);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db214:{NFSU2_TR(0x4db214);
u8 U[4];
w4(U+0,u32(0x32eee5fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db219:{NFSU2_TR(0x4db219);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db21a:{NFSU2_TR(0x4db21a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db21full));
TAIL_STATIC(0x5379c0u,537);
}
B4db21f:L4db21f:{c.instructions+=2;NFSU2_TR(0x4db21f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db220:{NFSU2_TR(0x4db220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db225ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4db225:L4db225:{c.instructions+=2;NFSU2_TR(0x4db225);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db227:{NFSU2_TR(0x4db227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db22cull));
TAIL_STATIC(0x575620u,575);
}
B4db22c:L4db22c:{c.instructions+=3;NFSU2_TR(0x4db22c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4db22f:{NFSU2_TR(0x4db22f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db231:{NFSU2_TR(0x4db231);
if(r1(R+518)){{goto L4db244;}}
}
B4db233:L4db233:{c.instructions+=5;NFSU2_TR(0x4db233);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db236:{NFSU2_TR(0x4db236);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db239:{NFSU2_TR(0x4db239);
u8 U[4];
w4(U+0,u32(0x795b70ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4db23f:{NFSU2_TR(0x4db23f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4db242:{NFSU2_TR(0x4db242);
{goto L4db246;}
}
B4db244:L4db244:{c.instructions+=1;NFSU2_TR(0x4db244);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db246:L4db246:{c.instructions+=9;NFSU2_TR(0x4db246);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db249:{NFSU2_TR(0x4db249);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db24b:{NFSU2_TR(0x4db24b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db24e:{NFSU2_TR(0x4db24e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db251:{NFSU2_TR(0x4db251);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db253:{NFSU2_TR(0x4db253);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db256:{NFSU2_TR(0x4db256);
u8 U[4];
w4(U+0,u32(0xc8d50793ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db25b:{NFSU2_TR(0x4db25b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db25c:{NFSU2_TR(0x4db25c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db261ull));
TAIL_STATIC(0x537a10u,537);
}
B4db261:L4db261:{c.instructions+=4;NFSU2_TR(0x4db261);
__builtin_memmove((R+20),(R+0),4);
}
B4db263:{NFSU2_TR(0x4db263);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db266:{NFSU2_TR(0x4db266);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db268:{NFSU2_TR(0x4db268);
if(r1(R+518)){{goto L4db287;}}
}
B4db26a:L4db26a:{c.instructions+=1;NFSU2_TR(0x4db26a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db26full));
TAIL_STATIC(0x440ec0u,440);
}
B4db26f:L4db26f:{c.instructions+=2;NFSU2_TR(0x4db26f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db271:{NFSU2_TR(0x4db271);
if(r1(R+518)){{goto L4db278;}}
}
B4db273:L4db273:{c.instructions+=2;NFSU2_TR(0x4db273);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db276:{NFSU2_TR(0x4db276);
{goto L4db27a;}
}
B4db278:L4db278:{c.instructions+=1;NFSU2_TR(0x4db278);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db27a:L4db27a:{c.instructions+=5;NFSU2_TR(0x4db27a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db27d:{NFSU2_TR(0x4db27d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db27f:{NFSU2_TR(0x4db27f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db282:{NFSU2_TR(0x4db282);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db285:{NFSU2_TR(0x4db285);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db287:L4db287:{c.instructions+=4;NFSU2_TR(0x4db287);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db28a:{NFSU2_TR(0x4db28a);
u8 U[4];
w4(U+0,u32(0xf382884aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db28f:{NFSU2_TR(0x4db28f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db290:{NFSU2_TR(0x4db290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db295ull));
TAIL_STATIC(0x537a10u,537);
}
B4db295:L4db295:{c.instructions+=4;NFSU2_TR(0x4db295);
__builtin_memmove((R+12),(R+0),4);
}
B4db297:{NFSU2_TR(0x4db297);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db29a:{NFSU2_TR(0x4db29a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db29c:{NFSU2_TR(0x4db29c);
if(r1(R+518)){{goto L4db2bb;}}
}
B4db29e:L4db29e:{c.instructions+=1;NFSU2_TR(0x4db29e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db2a3ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db2a3:L4db2a3:{c.instructions+=2;NFSU2_TR(0x4db2a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db2a5:{NFSU2_TR(0x4db2a5);
if(r1(R+518)){{goto L4db2ac;}}
}
B4db2a7:L4db2a7:{c.instructions+=2;NFSU2_TR(0x4db2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db2aa:{NFSU2_TR(0x4db2aa);
{goto L4db2ae;}
}
B4db2ac:L4db2ac:{c.instructions+=1;NFSU2_TR(0x4db2ac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db2ae:L4db2ae:{c.instructions+=5;NFSU2_TR(0x4db2ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db2b1:{NFSU2_TR(0x4db2b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db2b3:{NFSU2_TR(0x4db2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db2b6:{NFSU2_TR(0x4db2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db2b9:{NFSU2_TR(0x4db2b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db2bb:L4db2bb:{c.instructions+=5;NFSU2_TR(0x4db2bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4db2bf:{NFSU2_TR(0x4db2bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db2c2:{NFSU2_TR(0x4db2c2);
u8 U[4];
w4(U+0,u32(0x32eee5fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db2c7:{NFSU2_TR(0x4db2c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db2c8:{NFSU2_TR(0x4db2c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db2cdull));
TAIL_STATIC(0x5379c0u,537);
}
B4db2cd:L4db2cd:{c.instructions+=2;NFSU2_TR(0x4db2cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db2ce:{NFSU2_TR(0x4db2ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db2d3ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4db2d3:L4db2d3:{c.instructions+=2;NFSU2_TR(0x4db2d3);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db2d5:{NFSU2_TR(0x4db2d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db2daull));
TAIL_STATIC(0x575620u,575);
}
B4db2da:L4db2da:{c.instructions+=3;NFSU2_TR(0x4db2da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4db2dd:{NFSU2_TR(0x4db2dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db2df:{NFSU2_TR(0x4db2df);
if(r1(R+518)){{goto L4db7f3;}}
}
B4db2e5:L4db2e5:{c.instructions+=5;NFSU2_TR(0x4db2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db2e8:{NFSU2_TR(0x4db2e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db2eb:{NFSU2_TR(0x4db2eb);
u8 U[4];
w4(U+0,u32(0x795b78ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4db2f1:{NFSU2_TR(0x4db2f1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4db2f4:{NFSU2_TR(0x4db2f4);
{goto L4db7f5;}
}
B4db2f9:L4db2f9:{c.instructions+=3;NFSU2_TR(0x4db2f9);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4db2fe:{NFSU2_TR(0x4db2fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4db300:{NFSU2_TR(0x4db300);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4db30f;}}
}
B4db302:L4db302:{c.instructions+=3;NFSU2_TR(0x4db302);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4db307:{NFSU2_TR(0x4db307);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db309:{NFSU2_TR(0x4db309);
if(r1(R+518)){{goto L4db57e;}}
}
B4db30f:L4db30f:{c.instructions+=3;NFSU2_TR(0x4db30f);
u8 U[4];
w4(U+0,u32(0xd7162cfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db314:{NFSU2_TR(0x4db314);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db315:{NFSU2_TR(0x4db315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db31aull));
TAIL_STATIC(0x50c900u,50c);
}
B4db31a:L4db31a:{c.instructions+=4;NFSU2_TR(0x4db31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db31d:{NFSU2_TR(0x4db31d);
u8 U[4];
w4(U+0,u32(0xc8d50791ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db322:{NFSU2_TR(0x4db322);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db323:{NFSU2_TR(0x4db323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db328ull));
TAIL_STATIC(0x537a10u,537);
}
B4db328:L4db328:{c.instructions+=4;NFSU2_TR(0x4db328);
__builtin_memmove((R+12),(R+0),4);
}
B4db32a:{NFSU2_TR(0x4db32a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4db32d:{NFSU2_TR(0x4db32d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db32f:{NFSU2_TR(0x4db32f);
if(r1(R+518)){{goto L4db34e;}}
}
B4db331:L4db331:{c.instructions+=1;NFSU2_TR(0x4db331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db336ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db336:L4db336:{c.instructions+=2;NFSU2_TR(0x4db336);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db338:{NFSU2_TR(0x4db338);
if(r1(R+518)){{goto L4db33f;}}
}
B4db33a:L4db33a:{c.instructions+=2;NFSU2_TR(0x4db33a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db33d:{NFSU2_TR(0x4db33d);
{goto L4db341;}
}
B4db33f:L4db33f:{c.instructions+=1;NFSU2_TR(0x4db33f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db341:L4db341:{c.instructions+=5;NFSU2_TR(0x4db341);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db344:{NFSU2_TR(0x4db344);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db346:{NFSU2_TR(0x4db346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db349:{NFSU2_TR(0x4db349);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db34c:{NFSU2_TR(0x4db34c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db34e:L4db34e:{c.instructions+=4;NFSU2_TR(0x4db34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db351:{NFSU2_TR(0x4db351);
u8 U[4];
w4(U+0,u32(0xf3828848ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db356:{NFSU2_TR(0x4db356);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db357:{NFSU2_TR(0x4db357);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db35cull));
TAIL_STATIC(0x537a10u,537);
}
B4db35c:L4db35c:{c.instructions+=4;NFSU2_TR(0x4db35c);
__builtin_memmove((R+28),(R+0),4);
}
B4db35e:{NFSU2_TR(0x4db35e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db361:{NFSU2_TR(0x4db361);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db363:{NFSU2_TR(0x4db363);
if(r1(R+518)){{goto L4db382;}}
}
B4db365:L4db365:{c.instructions+=1;NFSU2_TR(0x4db365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db36aull));
TAIL_STATIC(0x440ec0u,440);
}
B4db36a:L4db36a:{c.instructions+=2;NFSU2_TR(0x4db36a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db36c:{NFSU2_TR(0x4db36c);
if(r1(R+518)){{goto L4db373;}}
}
B4db36e:L4db36e:{c.instructions+=2;NFSU2_TR(0x4db36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db371:{NFSU2_TR(0x4db371);
{goto L4db375;}
}
B4db373:L4db373:{c.instructions+=1;NFSU2_TR(0x4db373);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db375:L4db375:{c.instructions+=5;NFSU2_TR(0x4db375);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db378:{NFSU2_TR(0x4db378);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db37a:{NFSU2_TR(0x4db37a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db37d:{NFSU2_TR(0x4db37d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db380:{NFSU2_TR(0x4db380);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db382:L4db382:{c.instructions+=2;NFSU2_TR(0x4db382);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db384:{NFSU2_TR(0x4db384);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db389ull));
TAIL_STATIC(0x575620u,575);
}
B4db389:L4db389:{c.instructions+=3;NFSU2_TR(0x4db389);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4db38c:{NFSU2_TR(0x4db38c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db38e:{NFSU2_TR(0x4db38e);
if(r1(R+518)){{goto L4db3a1;}}
}
B4db390:L4db390:{c.instructions+=5;NFSU2_TR(0x4db390);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db393:{NFSU2_TR(0x4db393);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db396:{NFSU2_TR(0x4db396);
u8 U[4];
w4(U+0,u32(0x795b90ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4db39c:{NFSU2_TR(0x4db39c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4db39f:{NFSU2_TR(0x4db39f);
{goto L4db3a3;}
}
B4db3a1:L4db3a1:{c.instructions+=1;NFSU2_TR(0x4db3a1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db3a3:L4db3a3:{c.instructions+=10;NFSU2_TR(0x4db3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db3a6:{NFSU2_TR(0x4db3a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4db3a9:{NFSU2_TR(0x4db3a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db3ab:{NFSU2_TR(0x4db3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db3ae:{NFSU2_TR(0x4db3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db3b1:{NFSU2_TR(0x4db3b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db3b3:{NFSU2_TR(0x4db3b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4db3b6:{NFSU2_TR(0x4db3b6);
u8 U[4];
w4(U+0,u32(0xc8d50792ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db3bb:{NFSU2_TR(0x4db3bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db3bc:{NFSU2_TR(0x4db3bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db3c1ull));
TAIL_STATIC(0x537a10u,537);
}
B4db3c1:L4db3c1:{c.instructions+=4;NFSU2_TR(0x4db3c1);
__builtin_memmove((R+12),(R+0),4);
}
B4db3c3:{NFSU2_TR(0x4db3c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db3c6:{NFSU2_TR(0x4db3c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db3c8:{NFSU2_TR(0x4db3c8);
if(r1(R+518)){{goto L4db3e7;}}
}
B4db3ca:L4db3ca:{c.instructions+=1;NFSU2_TR(0x4db3ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db3cfull));
TAIL_STATIC(0x440ec0u,440);
}
B4db3cf:L4db3cf:{c.instructions+=2;NFSU2_TR(0x4db3cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db3d1:{NFSU2_TR(0x4db3d1);
if(r1(R+518)){{goto L4db3d8;}}
}
B4db3d3:L4db3d3:{c.instructions+=2;NFSU2_TR(0x4db3d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db3d6:{NFSU2_TR(0x4db3d6);
{goto L4db3da;}
}
B4db3d8:L4db3d8:{c.instructions+=1;NFSU2_TR(0x4db3d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db3da:L4db3da:{c.instructions+=5;NFSU2_TR(0x4db3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db3dd:{NFSU2_TR(0x4db3dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db3df:{NFSU2_TR(0x4db3df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db3e2:{NFSU2_TR(0x4db3e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db3e5:{NFSU2_TR(0x4db3e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db3e7:L4db3e7:{c.instructions+=4;NFSU2_TR(0x4db3e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db3ea:{NFSU2_TR(0x4db3ea);
u8 U[4];
w4(U+0,u32(0xf3828849ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db3ef:{NFSU2_TR(0x4db3ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db3f0:{NFSU2_TR(0x4db3f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db3f5ull));
TAIL_STATIC(0x537a10u,537);
}
B4db3f5:L4db3f5:{c.instructions+=4;NFSU2_TR(0x4db3f5);
__builtin_memmove((R+20),(R+0),4);
}
B4db3f7:{NFSU2_TR(0x4db3f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db3fa:{NFSU2_TR(0x4db3fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db3fc:{NFSU2_TR(0x4db3fc);
if(r1(R+518)){{goto L4db41b;}}
}
B4db3fe:L4db3fe:{c.instructions+=1;NFSU2_TR(0x4db3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db403ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db403:L4db403:{c.instructions+=2;NFSU2_TR(0x4db403);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db405:{NFSU2_TR(0x4db405);
if(r1(R+518)){{goto L4db40c;}}
}
B4db407:L4db407:{c.instructions+=2;NFSU2_TR(0x4db407);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db40a:{NFSU2_TR(0x4db40a);
{goto L4db40e;}
}
B4db40c:L4db40c:{c.instructions+=1;NFSU2_TR(0x4db40c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db40e:L4db40e:{c.instructions+=5;NFSU2_TR(0x4db40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db411:{NFSU2_TR(0x4db411);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db413:{NFSU2_TR(0x4db413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db416:{NFSU2_TR(0x4db416);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db419:{NFSU2_TR(0x4db419);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db41b:L4db41b:{c.instructions+=2;NFSU2_TR(0x4db41b);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db41d:{NFSU2_TR(0x4db41d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db422ull));
TAIL_STATIC(0x575620u,575);
}
B4db422:L4db422:{c.instructions+=3;NFSU2_TR(0x4db422);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4db425:{NFSU2_TR(0x4db425);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db427:{NFSU2_TR(0x4db427);
if(r1(R+518)){{goto L4db43a;}}
}
B4db429:L4db429:{c.instructions+=5;NFSU2_TR(0x4db429);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db42c:{NFSU2_TR(0x4db42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db42f:{NFSU2_TR(0x4db42f);
u8 U[4];
w4(U+0,u32(0x795b98ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4db435:{NFSU2_TR(0x4db435);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4db438:{NFSU2_TR(0x4db438);
{goto L4db43c;}
}
B4db43a:L4db43a:{c.instructions+=1;NFSU2_TR(0x4db43a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db43c:L4db43c:{c.instructions+=9;NFSU2_TR(0x4db43c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db43f:{NFSU2_TR(0x4db43f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db441:{NFSU2_TR(0x4db441);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db444:{NFSU2_TR(0x4db444);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db447:{NFSU2_TR(0x4db447);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db449:{NFSU2_TR(0x4db449);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db44c:{NFSU2_TR(0x4db44c);
u8 U[4];
w4(U+0,u32(0xc8d50793ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db451:{NFSU2_TR(0x4db451);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db452:{NFSU2_TR(0x4db452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db457ull));
TAIL_STATIC(0x537a10u,537);
}
B4db457:L4db457:{c.instructions+=4;NFSU2_TR(0x4db457);
__builtin_memmove((R+20),(R+0),4);
}
B4db459:{NFSU2_TR(0x4db459);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db45c:{NFSU2_TR(0x4db45c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db45e:{NFSU2_TR(0x4db45e);
if(r1(R+518)){{goto L4db47d;}}
}
B4db460:L4db460:{c.instructions+=1;NFSU2_TR(0x4db460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db465ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db465:L4db465:{c.instructions+=2;NFSU2_TR(0x4db465);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db467:{NFSU2_TR(0x4db467);
if(r1(R+518)){{goto L4db46e;}}
}
B4db469:L4db469:{c.instructions+=2;NFSU2_TR(0x4db469);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db46c:{NFSU2_TR(0x4db46c);
{goto L4db470;}
}
B4db46e:L4db46e:{c.instructions+=1;NFSU2_TR(0x4db46e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db470:L4db470:{c.instructions+=5;NFSU2_TR(0x4db470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db473:{NFSU2_TR(0x4db473);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db475:{NFSU2_TR(0x4db475);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db478:{NFSU2_TR(0x4db478);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db47b:{NFSU2_TR(0x4db47b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db47d:L4db47d:{c.instructions+=4;NFSU2_TR(0x4db47d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4db480:{NFSU2_TR(0x4db480);
u8 U[4];
w4(U+0,u32(0xf382884aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db485:{NFSU2_TR(0x4db485);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db486:{NFSU2_TR(0x4db486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db48bull));
TAIL_STATIC(0x537a10u,537);
}
B4db48b:L4db48b:{c.instructions+=4;NFSU2_TR(0x4db48b);
__builtin_memmove((R+12),(R+0),4);
}
B4db48d:{NFSU2_TR(0x4db48d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db490:{NFSU2_TR(0x4db490);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db492:{NFSU2_TR(0x4db492);
if(r1(R+518)){{goto L4db4b1;}}
}
B4db494:L4db494:{c.instructions+=1;NFSU2_TR(0x4db494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db499ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db499:L4db499:{c.instructions+=2;NFSU2_TR(0x4db499);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db49b:{NFSU2_TR(0x4db49b);
if(r1(R+518)){{goto L4db4a2;}}
}
B4db49d:L4db49d:{c.instructions+=2;NFSU2_TR(0x4db49d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db4a0:{NFSU2_TR(0x4db4a0);
{goto L4db4a4;}
}
B4db4a2:L4db4a2:{c.instructions+=1;NFSU2_TR(0x4db4a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db4a4:L4db4a4:{c.instructions+=5;NFSU2_TR(0x4db4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db4a7:{NFSU2_TR(0x4db4a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db4a9:{NFSU2_TR(0x4db4a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db4ac:{NFSU2_TR(0x4db4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db4af:{NFSU2_TR(0x4db4af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db4b1:L4db4b1:{c.instructions+=2;NFSU2_TR(0x4db4b1);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db4b3:{NFSU2_TR(0x4db4b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db4b8ull));
TAIL_STATIC(0x575620u,575);
}
B4db4b8:L4db4b8:{c.instructions+=3;NFSU2_TR(0x4db4b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4db4bb:{NFSU2_TR(0x4db4bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db4bd:{NFSU2_TR(0x4db4bd);
if(r1(R+518)){{goto L4db4d0;}}
}
B4db4bf:L4db4bf:{c.instructions+=5;NFSU2_TR(0x4db4bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db4c2:{NFSU2_TR(0x4db4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db4c5:{NFSU2_TR(0x4db4c5);
u8 U[4];
w4(U+0,u32(0x795ba0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4db4cb:{NFSU2_TR(0x4db4cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4db4ce:{NFSU2_TR(0x4db4ce);
{goto L4db4d2;}
}
B4db4d0:L4db4d0:{c.instructions+=1;NFSU2_TR(0x4db4d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db4d2:L4db4d2:{c.instructions+=9;NFSU2_TR(0x4db4d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db4d5:{NFSU2_TR(0x4db4d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db4d7:{NFSU2_TR(0x4db4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db4da:{NFSU2_TR(0x4db4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db4dd:{NFSU2_TR(0x4db4dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db4df:{NFSU2_TR(0x4db4df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db4e2:{NFSU2_TR(0x4db4e2);
u8 U[4];
w4(U+0,u32(0x4635ca2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db4e7:{NFSU2_TR(0x4db4e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db4e8:{NFSU2_TR(0x4db4e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db4edull));
TAIL_STATIC(0x537a10u,537);
}
B4db4ed:L4db4ed:{c.instructions+=4;NFSU2_TR(0x4db4ed);
__builtin_memmove((R+20),(R+0),4);
}
B4db4ef:{NFSU2_TR(0x4db4ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db4f2:{NFSU2_TR(0x4db4f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db4f4:{NFSU2_TR(0x4db4f4);
if(r1(R+518)){{goto L4db513;}}
}
B4db4f6:L4db4f6:{c.instructions+=1;NFSU2_TR(0x4db4f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db4fbull));
TAIL_STATIC(0x440ec0u,440);
}
B4db4fb:L4db4fb:{c.instructions+=2;NFSU2_TR(0x4db4fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db4fd:{NFSU2_TR(0x4db4fd);
if(r1(R+518)){{goto L4db504;}}
}
B4db4ff:L4db4ff:{c.instructions+=2;NFSU2_TR(0x4db4ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db502:{NFSU2_TR(0x4db502);
{goto L4db506;}
}
B4db504:L4db504:{c.instructions+=1;NFSU2_TR(0x4db504);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db506:L4db506:{c.instructions+=5;NFSU2_TR(0x4db506);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db509:{NFSU2_TR(0x4db509);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db50b:{NFSU2_TR(0x4db50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db50e:{NFSU2_TR(0x4db50e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db511:{NFSU2_TR(0x4db511);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db513:L4db513:{c.instructions+=4;NFSU2_TR(0x4db513);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db516:{NFSU2_TR(0x4db516);
u8 U[4];
w4(U+0,u32(0xe1fa0da7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db51b:{NFSU2_TR(0x4db51b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db51c:{NFSU2_TR(0x4db51c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db521ull));
TAIL_STATIC(0x537a10u,537);
}
B4db521:L4db521:{c.instructions+=4;NFSU2_TR(0x4db521);
__builtin_memmove((R+12),(R+0),4);
}
B4db523:{NFSU2_TR(0x4db523);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db526:{NFSU2_TR(0x4db526);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db528:{NFSU2_TR(0x4db528);
if(r1(R+518)){{goto L4db547;}}
}
B4db52a:L4db52a:{c.instructions+=1;NFSU2_TR(0x4db52a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db52full));
TAIL_STATIC(0x440ec0u,440);
}
B4db52f:L4db52f:{c.instructions+=2;NFSU2_TR(0x4db52f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db531:{NFSU2_TR(0x4db531);
if(r1(R+518)){{goto L4db538;}}
}
B4db533:L4db533:{c.instructions+=2;NFSU2_TR(0x4db533);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db536:{NFSU2_TR(0x4db536);
{goto L4db53a;}
}
B4db538:L4db538:{c.instructions+=1;NFSU2_TR(0x4db538);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db53a:L4db53a:{c.instructions+=5;NFSU2_TR(0x4db53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db53d:{NFSU2_TR(0x4db53d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db53f:{NFSU2_TR(0x4db53f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db542:{NFSU2_TR(0x4db542);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db545:{NFSU2_TR(0x4db545);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db547:L4db547:{c.instructions+=2;NFSU2_TR(0x4db547);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db549:{NFSU2_TR(0x4db549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db54eull));
TAIL_STATIC(0x575620u,575);
}
B4db54e:L4db54e:{c.instructions+=3;NFSU2_TR(0x4db54e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4db551:{NFSU2_TR(0x4db551);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db555:{NFSU2_TR(0x4db555);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4db55d:L4db55d:{c.instructions+=2;NFSU2_TR(0x4db55d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db55f:{NFSU2_TR(0x4db55f);
if(r1(R+518)){{goto L4db7f3;}}
}
B4db565:L4db565:{c.instructions+=4;NFSU2_TR(0x4db565);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db566:{NFSU2_TR(0x4db566);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db567:{NFSU2_TR(0x4db567);
__builtin_memmove((R+4),(R+0),4);
}
B4db569:{NFSU2_TR(0x4db569);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db56eull));
TAIL_STATIC(0x4c9970u,4c9);
}
B4db56e:L4db56e:{c.instructions+=2;NFSU2_TR(0x4db56e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db570:{NFSU2_TR(0x4db570);
if(r1(R+518)){{goto L4db7f3;}}
}
B4db576:L4db576:{c.instructions+=2;NFSU2_TR(0x4db576);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4db579:{NFSU2_TR(0x4db579);
{goto L4db7f5;}
}
B4db57e:L4db57e:{c.instructions+=2;NFSU2_TR(0x4db57e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4db580:{NFSU2_TR(0x4db580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db585ull));
TAIL_STATIC(0x5100a0u,510);
}
B4db585:L4db585:{c.instructions+=2;NFSU2_TR(0x4db585);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4db587:{NFSU2_TR(0x4db587);
if(r1(R+518)){{goto L4db59f;}}
}
B4db589:L4db589:{c.instructions+=2;NFSU2_TR(0x4db589);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4db58c:{NFSU2_TR(0x4db58c);
if(r1(R+518)){{goto L4db598;}}
}
B4db58e:L4db58e:{c.instructions+=2;NFSU2_TR(0x4db58e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4db58f:{NFSU2_TR(0x4db58f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4db5a4;}}
}
B4db591:L4db591:{c.instructions+=2;NFSU2_TR(0x4db591);
w4(R+28,u32(0x75f903f4ull));
}
B4db596:{NFSU2_TR(0x4db596);
{goto L4db5a4;}
}
B4db598:L4db598:{c.instructions+=2;NFSU2_TR(0x4db598);
w4(R+28,u32(0x30da61e1ull));
}
B4db59d:{NFSU2_TR(0x4db59d);
{goto L4db5a4;}
}
B4db59f:L4db59f:{c.instructions+=1;NFSU2_TR(0x4db59f);
w4(R+28,u32(0x93fdee74ull));
}
B4db5a4:L4db5a4:{c.instructions+=3;NFSU2_TR(0x4db5a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db5a5:{NFSU2_TR(0x4db5a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db5a6:{NFSU2_TR(0x4db5a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db5abull));
TAIL_STATIC(0x50c900u,50c);
}
B4db5ab:L4db5ab:{c.instructions+=4;NFSU2_TR(0x4db5ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4db5ae:{NFSU2_TR(0x4db5ae);
u8 U[4];
w4(U+0,u32(0xc8d50791ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db5b3:{NFSU2_TR(0x4db5b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db5b4:{NFSU2_TR(0x4db5b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db5b9ull));
TAIL_STATIC(0x537a10u,537);
}
B4db5b9:L4db5b9:{c.instructions+=4;NFSU2_TR(0x4db5b9);
__builtin_memmove((R+12),(R+0),4);
}
B4db5bb:{NFSU2_TR(0x4db5bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4db5be:{NFSU2_TR(0x4db5be);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db5c0:{NFSU2_TR(0x4db5c0);
if(r1(R+518)){{goto L4db5df;}}
}
B4db5c2:L4db5c2:{c.instructions+=1;NFSU2_TR(0x4db5c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db5c7ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db5c7:L4db5c7:{c.instructions+=2;NFSU2_TR(0x4db5c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db5c9:{NFSU2_TR(0x4db5c9);
if(r1(R+518)){{goto L4db5d0;}}
}
B4db5cb:L4db5cb:{c.instructions+=2;NFSU2_TR(0x4db5cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db5ce:{NFSU2_TR(0x4db5ce);
{goto L4db5d2;}
}
B4db5d0:L4db5d0:{c.instructions+=1;NFSU2_TR(0x4db5d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db5d2:L4db5d2:{c.instructions+=5;NFSU2_TR(0x4db5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db5d5:{NFSU2_TR(0x4db5d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db5d7:{NFSU2_TR(0x4db5d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db5da:{NFSU2_TR(0x4db5da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db5dd:{NFSU2_TR(0x4db5dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db5df:L4db5df:{c.instructions+=4;NFSU2_TR(0x4db5df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db5e2:{NFSU2_TR(0x4db5e2);
u8 U[4];
w4(U+0,u32(0xf3828848ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db5e7:{NFSU2_TR(0x4db5e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db5e8:{NFSU2_TR(0x4db5e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db5edull));
TAIL_STATIC(0x537a10u,537);
}
B4db5ed:L4db5ed:{c.instructions+=4;NFSU2_TR(0x4db5ed);
__builtin_memmove((R+28),(R+0),4);
}
B4db5ef:{NFSU2_TR(0x4db5ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db5f2:{NFSU2_TR(0x4db5f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db5f4:{NFSU2_TR(0x4db5f4);
if(r1(R+518)){{goto L4db613;}}
}
B4db5f6:L4db5f6:{c.instructions+=1;NFSU2_TR(0x4db5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db5fbull));
TAIL_STATIC(0x440ec0u,440);
}
B4db5fb:L4db5fb:{c.instructions+=2;NFSU2_TR(0x4db5fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db5fd:{NFSU2_TR(0x4db5fd);
if(r1(R+518)){{goto L4db604;}}
}
B4db5ff:L4db5ff:{c.instructions+=2;NFSU2_TR(0x4db5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db602:{NFSU2_TR(0x4db602);
{goto L4db606;}
}
B4db604:L4db604:{c.instructions+=1;NFSU2_TR(0x4db604);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db606:L4db606:{c.instructions+=5;NFSU2_TR(0x4db606);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db609:{NFSU2_TR(0x4db609);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db60b:{NFSU2_TR(0x4db60b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db60e:{NFSU2_TR(0x4db60e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db611:{NFSU2_TR(0x4db611);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db613:L4db613:{c.instructions+=2;NFSU2_TR(0x4db613);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db615:{NFSU2_TR(0x4db615);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db61aull));
TAIL_STATIC(0x575620u,575);
}
B4db61a:L4db61a:{c.instructions+=3;NFSU2_TR(0x4db61a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4db61d:{NFSU2_TR(0x4db61d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db61f:{NFSU2_TR(0x4db61f);
if(r1(R+518)){{goto L4db632;}}
}
B4db621:L4db621:{c.instructions+=5;NFSU2_TR(0x4db621);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db624:{NFSU2_TR(0x4db624);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db627:{NFSU2_TR(0x4db627);
u8 U[4];
w4(U+0,u32(0x795b60ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4db62d:{NFSU2_TR(0x4db62d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4db630:{NFSU2_TR(0x4db630);
{goto L4db634;}
}
B4db632:L4db632:{c.instructions+=1;NFSU2_TR(0x4db632);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db634:L4db634:{c.instructions+=10;NFSU2_TR(0x4db634);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db637:{NFSU2_TR(0x4db637);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4db63a:{NFSU2_TR(0x4db63a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db63c:{NFSU2_TR(0x4db63c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db63f:{NFSU2_TR(0x4db63f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db642:{NFSU2_TR(0x4db642);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db644:{NFSU2_TR(0x4db644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db647:{NFSU2_TR(0x4db647);
u8 U[4];
w4(U+0,u32(0xc8d50792ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db64c:{NFSU2_TR(0x4db64c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db64d:{NFSU2_TR(0x4db64d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db652ull));
TAIL_STATIC(0x537a10u,537);
}
B4db652:L4db652:{c.instructions+=4;NFSU2_TR(0x4db652);
__builtin_memmove((R+12),(R+0),4);
}
B4db654:{NFSU2_TR(0x4db654);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db657:{NFSU2_TR(0x4db657);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db659:{NFSU2_TR(0x4db659);
if(r1(R+518)){{goto L4db678;}}
}
B4db65b:L4db65b:{c.instructions+=1;NFSU2_TR(0x4db65b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db660ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db660:L4db660:{c.instructions+=2;NFSU2_TR(0x4db660);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db662:{NFSU2_TR(0x4db662);
if(r1(R+518)){{goto L4db669;}}
}
B4db664:L4db664:{c.instructions+=2;NFSU2_TR(0x4db664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db667:{NFSU2_TR(0x4db667);
{goto L4db66b;}
}
B4db669:L4db669:{c.instructions+=1;NFSU2_TR(0x4db669);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db66b:L4db66b:{c.instructions+=5;NFSU2_TR(0x4db66b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db66e:{NFSU2_TR(0x4db66e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db670:{NFSU2_TR(0x4db670);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db673:{NFSU2_TR(0x4db673);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db676:{NFSU2_TR(0x4db676);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db678:L4db678:{c.instructions+=4;NFSU2_TR(0x4db678);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4db67b:{NFSU2_TR(0x4db67b);
u8 U[4];
w4(U+0,u32(0xf3828849ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db680:{NFSU2_TR(0x4db680);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db681:{NFSU2_TR(0x4db681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db686ull));
TAIL_STATIC(0x537a10u,537);
}
B4db686:L4db686:{c.instructions+=4;NFSU2_TR(0x4db686);
__builtin_memmove((R+20),(R+0),4);
}
B4db688:{NFSU2_TR(0x4db688);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db68b:{NFSU2_TR(0x4db68b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db68d:{NFSU2_TR(0x4db68d);
if(r1(R+518)){{goto L4db6ac;}}
}
B4db68f:L4db68f:{c.instructions+=1;NFSU2_TR(0x4db68f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db694ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db694:L4db694:{c.instructions+=2;NFSU2_TR(0x4db694);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db696:{NFSU2_TR(0x4db696);
if(r1(R+518)){{goto L4db69d;}}
}
B4db698:L4db698:{c.instructions+=2;NFSU2_TR(0x4db698);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db69b:{NFSU2_TR(0x4db69b);
{goto L4db69f;}
}
B4db69d:L4db69d:{c.instructions+=1;NFSU2_TR(0x4db69d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db69f:L4db69f:{c.instructions+=5;NFSU2_TR(0x4db69f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db6a2:{NFSU2_TR(0x4db6a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db6a4:{NFSU2_TR(0x4db6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db6a7:{NFSU2_TR(0x4db6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db6aa:{NFSU2_TR(0x4db6aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db6ac:L4db6ac:{c.instructions+=2;NFSU2_TR(0x4db6ac);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db6ae:{NFSU2_TR(0x4db6ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db6b3ull));
TAIL_STATIC(0x575620u,575);
}
B4db6b3:L4db6b3:{c.instructions+=3;NFSU2_TR(0x4db6b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4db6b6:{NFSU2_TR(0x4db6b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db6b8:{NFSU2_TR(0x4db6b8);
if(r1(R+518)){{goto L4db6cb;}}
}
B4db6ba:L4db6ba:{c.instructions+=5;NFSU2_TR(0x4db6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db6bd:{NFSU2_TR(0x4db6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db6c0:{NFSU2_TR(0x4db6c0);
u8 U[4];
w4(U+0,u32(0x795b48ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4db6c6:{NFSU2_TR(0x4db6c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4db6c9:{NFSU2_TR(0x4db6c9);
{goto L4db6cd;}
}
B4db6cb:L4db6cb:{c.instructions+=1;NFSU2_TR(0x4db6cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db6cd:L4db6cd:{c.instructions+=9;NFSU2_TR(0x4db6cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db6d0:{NFSU2_TR(0x4db6d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db6d2:{NFSU2_TR(0x4db6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db6d5:{NFSU2_TR(0x4db6d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db6d8:{NFSU2_TR(0x4db6d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db6da:{NFSU2_TR(0x4db6da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db6dd:{NFSU2_TR(0x4db6dd);
u8 U[4];
w4(U+0,u32(0xc8d50793ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db6e2:{NFSU2_TR(0x4db6e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db6e3:{NFSU2_TR(0x4db6e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db6e8ull));
TAIL_STATIC(0x537a10u,537);
}
B4db6e8:L4db6e8:{c.instructions+=4;NFSU2_TR(0x4db6e8);
__builtin_memmove((R+20),(R+0),4);
}
B4db6ea:{NFSU2_TR(0x4db6ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db6ed:{NFSU2_TR(0x4db6ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db6ef:{NFSU2_TR(0x4db6ef);
if(r1(R+518)){{goto L4db70e;}}
}
B4db6f1:L4db6f1:{c.instructions+=1;NFSU2_TR(0x4db6f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db6f6ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db6f6:L4db6f6:{c.instructions+=2;NFSU2_TR(0x4db6f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db6f8:{NFSU2_TR(0x4db6f8);
if(r1(R+518)){{goto L4db6ff;}}
}
B4db6fa:L4db6fa:{c.instructions+=2;NFSU2_TR(0x4db6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db6fd:{NFSU2_TR(0x4db6fd);
{goto L4db701;}
}
B4db6ff:L4db6ff:{c.instructions+=1;NFSU2_TR(0x4db6ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db701:L4db701:{c.instructions+=5;NFSU2_TR(0x4db701);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db704:{NFSU2_TR(0x4db704);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db706:{NFSU2_TR(0x4db706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db709:{NFSU2_TR(0x4db709);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db70c:{NFSU2_TR(0x4db70c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db70e:L4db70e:{c.instructions+=4;NFSU2_TR(0x4db70e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db711:{NFSU2_TR(0x4db711);
u8 U[4];
w4(U+0,u32(0xf382884aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db716:{NFSU2_TR(0x4db716);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db717:{NFSU2_TR(0x4db717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db71cull));
TAIL_STATIC(0x537a10u,537);
}
B4db71c:L4db71c:{c.instructions+=4;NFSU2_TR(0x4db71c);
__builtin_memmove((R+12),(R+0),4);
}
B4db71e:{NFSU2_TR(0x4db71e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db721:{NFSU2_TR(0x4db721);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db723:{NFSU2_TR(0x4db723);
if(r1(R+518)){{goto L4db742;}}
}
B4db725:L4db725:{c.instructions+=1;NFSU2_TR(0x4db725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db72aull));
TAIL_STATIC(0x440ec0u,440);
}
B4db72a:L4db72a:{c.instructions+=2;NFSU2_TR(0x4db72a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db72c:{NFSU2_TR(0x4db72c);
if(r1(R+518)){{goto L4db733;}}
}
B4db72e:L4db72e:{c.instructions+=2;NFSU2_TR(0x4db72e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db731:{NFSU2_TR(0x4db731);
{goto L4db735;}
}
B4db733:L4db733:{c.instructions+=1;NFSU2_TR(0x4db733);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db735:L4db735:{c.instructions+=5;NFSU2_TR(0x4db735);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db738:{NFSU2_TR(0x4db738);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db73a:{NFSU2_TR(0x4db73a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db73d:{NFSU2_TR(0x4db73d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db740:{NFSU2_TR(0x4db740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db742:L4db742:{c.instructions+=2;NFSU2_TR(0x4db742);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db744:{NFSU2_TR(0x4db744);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db749ull));
TAIL_STATIC(0x575620u,575);
}
B4db749:L4db749:{c.instructions+=3;NFSU2_TR(0x4db749);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4db74c:{NFSU2_TR(0x4db74c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db74e:{NFSU2_TR(0x4db74e);
if(r1(R+518)){{goto L4db761;}}
}
B4db750:L4db750:{c.instructions+=5;NFSU2_TR(0x4db750);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db753:{NFSU2_TR(0x4db753);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db756:{NFSU2_TR(0x4db756);
u8 U[4];
w4(U+0,u32(0x795b58ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4db75c:{NFSU2_TR(0x4db75c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4db75f:{NFSU2_TR(0x4db75f);
{goto L4db763;}
}
B4db761:L4db761:{c.instructions+=1;NFSU2_TR(0x4db761);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db763:L4db763:{c.instructions+=9;NFSU2_TR(0x4db763);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db766:{NFSU2_TR(0x4db766);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db768:{NFSU2_TR(0x4db768);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db76b:{NFSU2_TR(0x4db76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db76e:{NFSU2_TR(0x4db76e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db770:{NFSU2_TR(0x4db770);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4db773:{NFSU2_TR(0x4db773);
u8 U[4];
w4(U+0,u32(0x4635ca2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db778:{NFSU2_TR(0x4db778);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db779:{NFSU2_TR(0x4db779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db77eull));
TAIL_STATIC(0x537a10u,537);
}
B4db77e:L4db77e:{c.instructions+=4;NFSU2_TR(0x4db77e);
__builtin_memmove((R+20),(R+0),4);
}
B4db780:{NFSU2_TR(0x4db780);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db783:{NFSU2_TR(0x4db783);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db785:{NFSU2_TR(0x4db785);
if(r1(R+518)){{goto L4db7a4;}}
}
B4db787:L4db787:{c.instructions+=1;NFSU2_TR(0x4db787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db78cull));
TAIL_STATIC(0x440ec0u,440);
}
B4db78c:L4db78c:{c.instructions+=2;NFSU2_TR(0x4db78c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db78e:{NFSU2_TR(0x4db78e);
if(r1(R+518)){{goto L4db795;}}
}
B4db790:L4db790:{c.instructions+=2;NFSU2_TR(0x4db790);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db793:{NFSU2_TR(0x4db793);
{goto L4db797;}
}
B4db795:L4db795:{c.instructions+=1;NFSU2_TR(0x4db795);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db797:L4db797:{c.instructions+=5;NFSU2_TR(0x4db797);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db79a:{NFSU2_TR(0x4db79a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db79c:{NFSU2_TR(0x4db79c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db79f:{NFSU2_TR(0x4db79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db7a2:{NFSU2_TR(0x4db7a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db7a4:L4db7a4:{c.instructions+=4;NFSU2_TR(0x4db7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db7a7:{NFSU2_TR(0x4db7a7);
u8 U[4];
w4(U+0,u32(0xe1fa0da7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db7ac:{NFSU2_TR(0x4db7ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db7ad:{NFSU2_TR(0x4db7ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db7b2ull));
TAIL_STATIC(0x537a10u,537);
}
B4db7b2:L4db7b2:{c.instructions+=4;NFSU2_TR(0x4db7b2);
__builtin_memmove((R+12),(R+0),4);
}
B4db7b4:{NFSU2_TR(0x4db7b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4db7b7:{NFSU2_TR(0x4db7b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db7b9:{NFSU2_TR(0x4db7b9);
if(r1(R+518)){{goto L4db7d8;}}
}
B4db7bb:L4db7bb:{c.instructions+=1;NFSU2_TR(0x4db7bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db7c0ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db7c0:L4db7c0:{c.instructions+=2;NFSU2_TR(0x4db7c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db7c2:{NFSU2_TR(0x4db7c2);
if(r1(R+518)){{goto L4db7c9;}}
}
B4db7c4:L4db7c4:{c.instructions+=2;NFSU2_TR(0x4db7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db7c7:{NFSU2_TR(0x4db7c7);
{goto L4db7cb;}
}
B4db7c9:L4db7c9:{c.instructions+=1;NFSU2_TR(0x4db7c9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db7cb:L4db7cb:{c.instructions+=5;NFSU2_TR(0x4db7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db7ce:{NFSU2_TR(0x4db7ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db7d0:{NFSU2_TR(0x4db7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db7d3:{NFSU2_TR(0x4db7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db7d6:{NFSU2_TR(0x4db7d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db7d8:L4db7d8:{c.instructions+=2;NFSU2_TR(0x4db7d8);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db7da:{NFSU2_TR(0x4db7da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db7dfull));
TAIL_STATIC(0x575620u,575);
}
B4db7df:L4db7df:{c.instructions+=4;NFSU2_TR(0x4db7df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4db7e2:{NFSU2_TR(0x4db7e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db7e6:{NFSU2_TR(0x4db7e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4db7ee:{NFSU2_TR(0x4db7ee);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4db55du);}goto L4db55d;}
}
B4db7f3:L4db7f3:{c.instructions+=1;NFSU2_TR(0x4db7f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db7f5:L4db7f5:{c.instructions+=13;NFSU2_TR(0x4db7f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db7f8:{NFSU2_TR(0x4db7f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db7fa:{NFSU2_TR(0x4db7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db7fd:{NFSU2_TR(0x4db7fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db800:{NFSU2_TR(0x4db800);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db804:{NFSU2_TR(0x4db804);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db806:{NFSU2_TR(0x4db806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4db807:{NFSU2_TR(0x4db807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4db808:{NFSU2_TR(0x4db808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4db809:{NFSU2_TR(0x4db809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4db80a:{NFSU2_TR(0x4db80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db811:{NFSU2_TR(0x4db811);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4db814:{NFSU2_TR(0x4db814);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4db820:L4db820:{c.instructions+=4;NFSU2_TR(0x4db820);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db824:{NFSU2_TR(0x4db824);
__builtin_memmove((R+8),(R+4),4);
}
B4db826:{NFSU2_TR(0x4db826);
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
B4db829:{NFSU2_TR(0x4db829);
if(r1(R+518)){{goto L4db889;}}
}
B4db82b:L4db82b:{c.instructions+=3;NFSU2_TR(0x4db82b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db82e:{NFSU2_TR(0x4db82e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db830:{NFSU2_TR(0x4db830);
if(r1(R+518)){{goto L4db843;}}
}
B4db832:L4db832:{c.instructions+=1;NFSU2_TR(0x4db832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db837ull));
TAIL_STATIC(0x4abfe0u,4ab);
}
B4db837:L4db837:{c.instructions+=3;NFSU2_TR(0x4db837);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db83a:{NFSU2_TR(0x4db83a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db83e:{NFSU2_TR(0x4db83e);
TAIL_STATIC(0x4dab80u,4da);
}
B4db843:L4db843:{c.instructions+=3;NFSU2_TR(0x4db843);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db846:{NFSU2_TR(0x4db846);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db848:{NFSU2_TR(0x4db848);
if(r1(R+518)){{goto L4db85b;}}
}
B4db84a:L4db84a:{c.instructions+=1;NFSU2_TR(0x4db84a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db84full));
TAIL_STATIC(0x4abf70u,4ab);
}
B4db84f:L4db84f:{c.instructions+=3;NFSU2_TR(0x4db84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db852:{NFSU2_TR(0x4db852);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db856:{NFSU2_TR(0x4db856);
TAIL_STATIC(0x4dab80u,4da);
}
B4db85b:L4db85b:{c.instructions+=3;NFSU2_TR(0x4db85b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db85e:{NFSU2_TR(0x4db85e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db860:{NFSU2_TR(0x4db860);
if(r1(R+518)){{goto L4db872;}}
}
B4db862:L4db862:{c.instructions+=3;NFSU2_TR(0x4db862);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db865:{NFSU2_TR(0x4db865);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4db86d:{NFSU2_TR(0x4db86d);
TAIL_STATIC(0x4dab80u,4da);
}
B4db872:L4db872:{c.instructions+=3;NFSU2_TR(0x4db872);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db875:{NFSU2_TR(0x4db875);
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
B4db877:{NFSU2_TR(0x4db877);
if(r1(R+518)){{goto L4db889;}}
}
B4db879:L4db879:{c.instructions+=3;NFSU2_TR(0x4db879);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db87c:{NFSU2_TR(0x4db87c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4db884:{NFSU2_TR(0x4db884);
TAIL_STATIC(0x4dab80u,4da);
}
B4db889:L4db889:{c.instructions+=1;NFSU2_TR(0x4db889);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4db890:L4db890:{c.instructions+=3;NFSU2_TR(0x4db890);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db893:{NFSU2_TR(0x4db893);
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
B4db895:{NFSU2_TR(0x4db895);
if(r1(R+518)){{goto L4db8a8;}}
}
B4db897:L4db897:{c.instructions+=3;NFSU2_TR(0x4db897);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db89b:{NFSU2_TR(0x4db89b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db89d:{NFSU2_TR(0x4db89d);
if(r1(R+518)){{goto L4db8ab;}}
}
B4db89f:L4db89f:{c.instructions+=3;NFSU2_TR(0x4db89f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db8a1:{NFSU2_TR(0x4db8a1);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db8a3:{NFSU2_TR(0x4db8a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db8a8ull));
TAIL_STATIC(0x4c9170u,4c9);
}
B4db8a8:L4db8a8:{c.instructions+=1;NFSU2_TR(0x4db8a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4db8ab:L4db8ab:{c.instructions+=2;NFSU2_TR(0x4db8ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4db8b3:{NFSU2_TR(0x4db8b3);
TAIL_STATIC(0x4dab80u,4da);
}
B4db8c0:L4db8c0:{c.instructions+=5;NFSU2_TR(0x4db8c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db8c1:{NFSU2_TR(0x4db8c1);
__builtin_memmove((R+24),(R+4),4);
}
B4db8c3:{NFSU2_TR(0x4db8c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db8c6:{NFSU2_TR(0x4db8c6);
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
B4db8c8:{NFSU2_TR(0x4db8c8);
if(r1(R+518)){{goto L4db8fe;}}
}
B4db8ca:L4db8ca:{c.instructions+=4;NFSU2_TR(0x4db8ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db8cb:{NFSU2_TR(0x4db8cb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db8cd:{NFSU2_TR(0x4db8cd);
w4(R+4,u32(0x860a60ull));
}
B4db8d2:{NFSU2_TR(0x4db8d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db8d7ull));
TAIL_STATIC(0x514d30u,514);
}
B4db8d7:L4db8d7:{c.instructions+=3;NFSU2_TR(0x4db8d7);
__builtin_memmove((R+28),(R+0),4);
}
B4db8d9:{NFSU2_TR(0x4db8d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db8db:{NFSU2_TR(0x4db8db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4db8ec;}}
}
B4db8dd:L4db8dd:{c.instructions+=3;NFSU2_TR(0x4db8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db8e0:{NFSU2_TR(0x4db8e0);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db8e2:{NFSU2_TR(0x4db8e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db8e7ull));
TAIL_STATIC(0x4dab80u,4da);
}
B4db8e7:L4db8e7:{c.instructions+=4;NFSU2_TR(0x4db8e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4db8e9:{NFSU2_TR(0x4db8e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4db8ea:{NFSU2_TR(0x4db8ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4db8eb:{NFSU2_TR(0x4db8eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4db8ec:L4db8ec:{c.instructions+=2;NFSU2_TR(0x4db8ec);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
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
B4db8ee:{NFSU2_TR(0x4db8ee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4db8fd;}}
}
B4db8f0:L4db8f0:{c.instructions+=4;NFSU2_TR(0x4db8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db8f3:{NFSU2_TR(0x4db8f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db8f4:{NFSU2_TR(0x4db8f4);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db8f6:{NFSU2_TR(0x4db8f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db8fbull));
TAIL_STATIC(0x4c9170u,4c9);
}
B4db8fb:L4db8fb:{c.instructions+=1;NFSU2_TR(0x4db8fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4db8fd:L4db8fd:{c.instructions+=1;NFSU2_TR(0x4db8fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4db8fe:L4db8fe:{c.instructions+=2;NFSU2_TR(0x4db8fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4db8ff:{NFSU2_TR(0x4db8ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4db900:L4db900:{c.instructions+=7;NFSU2_TR(0x4db900);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db901:{NFSU2_TR(0x4db901);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db902:{NFSU2_TR(0x4db902);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4db906:{NFSU2_TR(0x4db906);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db907:{NFSU2_TR(0x4db907);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db908:{NFSU2_TR(0x4db908);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4db90a:{NFSU2_TR(0x4db90a);
__builtin_memmove((R+12),(R+12),4);
}
B4db910:L4db910:{c.instructions+=1;NFSU2_TR(0x4db910);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4db912:L4db912:{c.instructions+=4;NFSU2_TR(0x4db912);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7f6828ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4db918:{NFSU2_TR(0x4db918);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db919:{NFSU2_TR(0x4db919);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db91a:{NFSU2_TR(0x4db91a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db91full));
TAIL_STATIC(0x50b990u,50b);
}
B4db91f:L4db91f:{c.instructions+=3;NFSU2_TR(0x4db91f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db920:{NFSU2_TR(0x4db920);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db921:{NFSU2_TR(0x4db921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db926ull));
TAIL_STATIC(0x5379c0u,537);
}
B4db926:L4db926:{c.instructions+=4;NFSU2_TR(0x4db926);
__builtin_memmove((R+24),(R+0),4);
}
B4db928:{NFSU2_TR(0x4db928);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4db92b:{NFSU2_TR(0x4db92b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db92d:{NFSU2_TR(0x4db92d);
if(r1(R+518)){{goto L4db979;}}
}
B4db92f:L4db92f:{c.instructions+=3;NFSU2_TR(0x4db92f);
__builtin_memmove((R+4),gp(0x8364b4),4);
}
B4db935:{NFSU2_TR(0x4db935);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db936:{NFSU2_TR(0x4db936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db93bull));
TAIL_STATIC(0x43f8f0u,43f);
}
B4db93b:L4db93b:{c.instructions+=3;NFSU2_TR(0x4db93b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4db93e:{NFSU2_TR(0x4db93e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db940:{NFSU2_TR(0x4db940);
if(r1(R+518)){{goto L4db951;}}
}
B4db942:L4db942:{c.instructions+=5;NFSU2_TR(0x4db942);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7f682cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4db948:{NFSU2_TR(0x4db948);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4db94a:{NFSU2_TR(0x4db94a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db94d:{NFSU2_TR(0x4db94d);
__builtin_memmove((R+24),(R+0),4);
}
B4db94f:{NFSU2_TR(0x4db94f);
{goto L4db953;}
}
B4db951:L4db951:{c.instructions+=1;NFSU2_TR(0x4db951);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4db953:L4db953:{c.instructions+=1;NFSU2_TR(0x4db953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db958ull));
TAIL_STATIC(0x440ec0u,440);
}
B4db958:L4db958:{c.instructions+=2;NFSU2_TR(0x4db958);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4db95a:{NFSU2_TR(0x4db95a);
if(r1(R+518)){{goto L4db961;}}
}
B4db95c:L4db95c:{c.instructions+=2;NFSU2_TR(0x4db95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db95f:{NFSU2_TR(0x4db95f);
{goto L4db963;}
}
B4db961:L4db961:{c.instructions+=1;NFSU2_TR(0x4db961);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4db963:L4db963:{c.instructions+=5;NFSU2_TR(0x4db963);
__builtin_memmove((R+4),gp(0x836564),4);
}
B4db969:{NFSU2_TR(0x4db969);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4db96b:{NFSU2_TR(0x4db96b);
__builtin_memmove(gp(0x836564),(R+0),4);
}
B4db970:{NFSU2_TR(0x4db970);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db973:{NFSU2_TR(0x4db973);
u8 U[4];
w4(U+0,u32(0x836560ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4db979:L4db979:{c.instructions+=3;NFSU2_TR(0x4db979);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4db97a:{NFSU2_TR(0x4db97a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4db97d:{NFSU2_TR(0x4db97d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4db912u);}goto L4db912;}}
}
B4db97f:L4db97f:{c.instructions+=3;NFSU2_TR(0x4db97f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B4db982:{NFSU2_TR(0x4db982);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x88ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x88ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x88ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4db988:{NFSU2_TR(0x4db988);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4db910u);}goto L4db910;}}
}
B4db98a:L4db98a:{c.instructions+=5;NFSU2_TR(0x4db98a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4db98b:{NFSU2_TR(0x4db98b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4db98c:{NFSU2_TR(0x4db98c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4db98d:{NFSU2_TR(0x4db98d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4db98e:{NFSU2_TR(0x4db98e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4db990:L4db990:{c.instructions+=4;NFSU2_TR(0x4db990);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db991:{NFSU2_TR(0x4db991);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4db994:{NFSU2_TR(0x4db994);
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
B4db996:{NFSU2_TR(0x4db996);
if(r1(R+518)){{goto L4db9b6;}}
}
B4db998:L4db998:{c.instructions+=2;NFSU2_TR(0x4db998);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db999:{NFSU2_TR(0x4db999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db99eull));
TAIL_STATIC(0x4ca690u,4ca);
}
B4db99e:L4db99e:{c.instructions+=3;NFSU2_TR(0x4db99e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4db9a1:{NFSU2_TR(0x4db9a1);
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
B4db9a3:{NFSU2_TR(0x4db9a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4db9b6;}}
}
B4db9a5:L4db9a5:{c.instructions+=4;NFSU2_TR(0x4db9a5);
s4(0x8364bc,u32(u32(m4(0x8364bc))-u32(u32(0x1ull))));
}
B4db9ab:{NFSU2_TR(0x4db9ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db9ac:{NFSU2_TR(0x4db9ac);
w4(R+4,u32(0x836560ull));
}
B4db9b1:{NFSU2_TR(0x4db9b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4db9b6ull));
TAIL_STATIC(0x4cbab0u,4cb);
}
B4db9b6:L4db9b6:{c.instructions+=2;NFSU2_TR(0x4db9b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4db9b7:{NFSU2_TR(0x4db9b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4db9c0:L4db9c0:{c.instructions+=4;NFSU2_TR(0x4db9c0);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc98356baull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4db9c8:{NFSU2_TR(0x4db9c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4db9c9:{NFSU2_TR(0x4db9c9);
__builtin_memmove((R+24),(R+4),4);
}
B4db9cb:{NFSU2_TR(0x4db9cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dba4a;}}
}
B4db9cd:L4db9cd:{c.instructions+=11;NFSU2_TR(0x4db9cd);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4db9d3:{NFSU2_TR(0x4db9d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4db9d6:{NFSU2_TR(0x4db9d6);
__builtin_memmove((R+0),(R+4),4);
}
B4db9d8:{NFSU2_TR(0x4db9d8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4db9da:{NFSU2_TR(0x4db9da);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4db9de:{NFSU2_TR(0x4db9de);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4db9e2:{NFSU2_TR(0x4db9e2);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4db9e8:{NFSU2_TR(0x4db9e8);
{u32 ea_=u32(u32(7921820u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4db9ee:{NFSU2_TR(0x4db9ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4db9f0:{NFSU2_TR(0x4db9f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4db9f3:{NFSU2_TR(0x4db9f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dba09;}}
}
B4db9f5:L4db9f5:{c.instructions+=3;NFSU2_TR(0x4db9f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4db9f8:{NFSU2_TR(0x4db9f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4db9fa:{NFSU2_TR(0x4db9fa);
if(r1(R+518)){{goto L4dba09;}}
}
B4db9fc:L4db9fc:{c.instructions+=2;NFSU2_TR(0x4db9fc);
__builtin_memmove((R+4),(R+24),4);
}
B4db9fe:{NFSU2_TR(0x4db9fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dba03ull));
TAIL_STATIC(0x4cb1d0u,4cb);
}
B4dba03:L4dba03:{c.instructions+=1;NFSU2_TR(0x4dba03);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4dba09:L4dba09:{c.instructions+=3;NFSU2_TR(0x4dba09);
__builtin_memmove((R+0),gp(0x8364dc),4);
}
B4dba0e:{NFSU2_TR(0x4dba0e);
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
B4dba10:{NFSU2_TR(0x4dba10);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4dba4a;}}
}
B4dba12:L4dba12:{c.instructions+=9;NFSU2_TR(0x4dba12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B4dba15:{NFSU2_TR(0x4dba15);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dba19:{NFSU2_TR(0x4dba19);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4dba1d:{NFSU2_TR(0x4dba1d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4dba23:{NFSU2_TR(0x4dba23);
{u32 ea_=u32(u32(8611036u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4dba29:{NFSU2_TR(0x4dba29);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4dba2b:{NFSU2_TR(0x4dba2b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4dba2d:{NFSU2_TR(0x4dba2d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4dba30:{NFSU2_TR(0x4dba30);
if(r1(R+514)){{goto L4dba4a;}}
}
B4dba32:L4dba32:{c.instructions+=3;NFSU2_TR(0x4dba32);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4dba35:{NFSU2_TR(0x4dba35);
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
B4dba37:{NFSU2_TR(0x4dba37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dba4a;}}
}
B4dba39:L4dba39:{c.instructions+=2;NFSU2_TR(0x4dba39);
__builtin_memmove((R+4),(R+24),4);
}
B4dba3b:{NFSU2_TR(0x4dba3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dba40ull));
TAIL_STATIC(0x4ac850u,4ac);
}
B4dba40:L4dba40:{c.instructions+=1;NFSU2_TR(0x4dba40);
s4(0x8364dc,u32(0x0ull));
}
B4dba4a:L4dba4a:{c.instructions+=2;NFSU2_TR(0x4dba4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dba4b:{NFSU2_TR(0x4dba4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dba50:L4dba50:{c.instructions+=15;NFSU2_TR(0x4dba50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dba52:{NFSU2_TR(0x4dba52);
u8 U[4];
w4(U+0,u32(0x775048ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dba57:{NFSU2_TR(0x4dba57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dba5d:{NFSU2_TR(0x4dba5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dba5e:{NFSU2_TR(0x4dba5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dba65:{NFSU2_TR(0x4dba65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dba66:{NFSU2_TR(0x4dba66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dba67:{NFSU2_TR(0x4dba67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dba68:{NFSU2_TR(0x4dba68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dba69:{NFSU2_TR(0x4dba69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dba6a:{NFSU2_TR(0x4dba6a);
__builtin_memmove((R+24),(R+4),4);
}
B4dba6c:{NFSU2_TR(0x4dba6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dba72:{NFSU2_TR(0x4dba72);
u8 U[4];
w4(U+0,u32(0x5cf08eb7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dba77:{NFSU2_TR(0x4dba77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dba78:{NFSU2_TR(0x4dba78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dba7dull));
TAIL_STATIC(0x50c900u,50c);
}
B4dba7d:L4dba7d:{c.instructions+=2;NFSU2_TR(0x4dba7d);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dba7f:{NFSU2_TR(0x4dba7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dba84ull));
TAIL_STATIC(0x575620u,575);
}
B4dba84:L4dba84:{c.instructions+=6;NFSU2_TR(0x4dba84);
__builtin_memmove((R+28),(R+0),4);
}
B4dba86:{NFSU2_TR(0x4dba86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4dba89:{NFSU2_TR(0x4dba89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dba8d:{NFSU2_TR(0x4dba8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dba8f:{NFSU2_TR(0x4dba8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dba97:{NFSU2_TR(0x4dba97);
if(r1(R+518)){{goto L4dbaba;}}
}
B4dba99:L4dba99:{c.instructions+=7;NFSU2_TR(0x4dba99);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dba9b:{NFSU2_TR(0x4dba9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbaa1:{NFSU2_TR(0x4dbaa1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbaa2:{NFSU2_TR(0x4dbaa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbaa8:{NFSU2_TR(0x4dbaa8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbaa9:{NFSU2_TR(0x4dbaa9);
__builtin_memmove((R+4),(R+28),4);
}
B4dbaab:{NFSU2_TR(0x4dbaab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbab0ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbab0:L4dbab0:{c.instructions+=3;NFSU2_TR(0x4dbab0);
u8 U[4];
w4(U+0,u32(0x7926e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbab6:{NFSU2_TR(0x4dbab6);
__builtin_memmove((R+20),(R+28),4);
}
B4dbab8:{NFSU2_TR(0x4dbab8);
{goto L4dbabc;}
}
B4dbaba:L4dbaba:{c.instructions+=1;NFSU2_TR(0x4dbaba);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dbabc:L4dbabc:{c.instructions+=3;NFSU2_TR(0x4dbabc);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbabe:{NFSU2_TR(0x4dbabe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbac6:{NFSU2_TR(0x4dbac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbacbull));
TAIL_STATIC(0x575620u,575);
}
B4dbacb:L4dbacb:{c.instructions+=6;NFSU2_TR(0x4dbacb);
__builtin_memmove((R+28),(R+0),4);
}
B4dbacd:{NFSU2_TR(0x4dbacd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbad0:{NFSU2_TR(0x4dbad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbad4:{NFSU2_TR(0x4dbad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbad6:{NFSU2_TR(0x4dbad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbade:{NFSU2_TR(0x4dbade);
if(r1(R+518)){{goto L4dbaff;}}
}
B4dbae0:L4dbae0:{c.instructions+=7;NFSU2_TR(0x4dbae0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbae2:{NFSU2_TR(0x4dbae2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbae8:{NFSU2_TR(0x4dbae8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbae9:{NFSU2_TR(0x4dbae9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbaef:{NFSU2_TR(0x4dbaef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbaf0:{NFSU2_TR(0x4dbaf0);
__builtin_memmove((R+4),(R+28),4);
}
B4dbaf2:{NFSU2_TR(0x4dbaf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbaf7ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbaf7:L4dbaf7:{c.instructions+=2;NFSU2_TR(0x4dbaf7);
u8 U[4];
w4(U+0,u32(0x7926a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbafd:{NFSU2_TR(0x4dbafd);
{goto L4dbb01;}
}
B4dbaff:L4dbaff:{c.instructions+=1;NFSU2_TR(0x4dbaff);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dbb01:L4dbb01:{c.instructions+=3;NFSU2_TR(0x4dbb01);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbb03:{NFSU2_TR(0x4dbb03);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbb0b:{NFSU2_TR(0x4dbb0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbb10ull));
TAIL_STATIC(0x575620u,575);
}
B4dbb10:L4dbb10:{c.instructions+=6;NFSU2_TR(0x4dbb10);
__builtin_memmove((R+12),(R+0),4);
}
B4dbb12:{NFSU2_TR(0x4dbb12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbb15:{NFSU2_TR(0x4dbb15);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbb19:{NFSU2_TR(0x4dbb19);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbb1b:{NFSU2_TR(0x4dbb1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbb23:{NFSU2_TR(0x4dbb23);
if(r1(R+518)){{goto L4dbb42;}}
}
B4dbb25:L4dbb25:{c.instructions+=6;NFSU2_TR(0x4dbb25);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbb2b:{NFSU2_TR(0x4dbb2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbb2c:{NFSU2_TR(0x4dbb2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbb32:{NFSU2_TR(0x4dbb32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbb33:{NFSU2_TR(0x4dbb33);
__builtin_memmove((R+4),(R+12),4);
}
B4dbb35:{NFSU2_TR(0x4dbb35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbb3aull));
TAIL_STATIC(0x51e090u,51e);
}
B4dbb3a:L4dbb3a:{c.instructions+=2;NFSU2_TR(0x4dbb3a);
u8 U[4];
w4(U+0,u32(0x7930e8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dbb40:{NFSU2_TR(0x4dbb40);
{goto L4dbb44;}
}
B4dbb42:L4dbb42:{c.instructions+=1;NFSU2_TR(0x4dbb42);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dbb44:L4dbb44:{c.instructions+=6;NFSU2_TR(0x4dbb44);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbb45:{NFSU2_TR(0x4dbb45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbb46:{NFSU2_TR(0x4dbb46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbb47:{NFSU2_TR(0x4dbb47);
__builtin_memmove((R+4),(R+24),4);
}
B4dbb49:{NFSU2_TR(0x4dbb49);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbb51:{NFSU2_TR(0x4dbb51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbb56ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dbb56:L4dbb56:{c.instructions+=2;NFSU2_TR(0x4dbb56);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbb58:{NFSU2_TR(0x4dbb58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbb5dull));
TAIL_STATIC(0x575620u,575);
}
B4dbb5d:L4dbb5d:{c.instructions+=6;NFSU2_TR(0x4dbb5d);
__builtin_memmove((R+28),(R+0),4);
}
B4dbb5f:{NFSU2_TR(0x4dbb5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbb62:{NFSU2_TR(0x4dbb62);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbb66:{NFSU2_TR(0x4dbb66);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbb68:{NFSU2_TR(0x4dbb68);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbb70:{NFSU2_TR(0x4dbb70);
if(r1(R+518)){{goto L4dbb93;}}
}
B4dbb72:L4dbb72:{c.instructions+=7;NFSU2_TR(0x4dbb72);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbb74:{NFSU2_TR(0x4dbb74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbb7a:{NFSU2_TR(0x4dbb7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbb7b:{NFSU2_TR(0x4dbb7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbb81:{NFSU2_TR(0x4dbb81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbb82:{NFSU2_TR(0x4dbb82);
__builtin_memmove((R+4),(R+28),4);
}
B4dbb84:{NFSU2_TR(0x4dbb84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbb89ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbb89:L4dbb89:{c.instructions+=3;NFSU2_TR(0x4dbb89);
u8 U[4];
w4(U+0,u32(0x7927a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbb8f:{NFSU2_TR(0x4dbb8f);
__builtin_memmove((R+20),(R+28),4);
}
B4dbb91:{NFSU2_TR(0x4dbb91);
{goto L4dbb95;}
}
B4dbb93:L4dbb93:{c.instructions+=1;NFSU2_TR(0x4dbb93);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dbb95:L4dbb95:{c.instructions+=3;NFSU2_TR(0x4dbb95);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbb97:{NFSU2_TR(0x4dbb97);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbb9f:{NFSU2_TR(0x4dbb9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbba4ull));
TAIL_STATIC(0x575620u,575);
}
B4dbba4:L4dbba4:{c.instructions+=6;NFSU2_TR(0x4dbba4);
__builtin_memmove((R+12),(R+0),4);
}
B4dbba6:{NFSU2_TR(0x4dbba6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbba9:{NFSU2_TR(0x4dbba9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbbad:{NFSU2_TR(0x4dbbad);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbbaf:{NFSU2_TR(0x4dbbaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbbb7:{NFSU2_TR(0x4dbbb7);
if(r1(R+518)){{goto L4dbbd8;}}
}
B4dbbb9:L4dbbb9:{c.instructions+=7;NFSU2_TR(0x4dbbb9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbbbb:{NFSU2_TR(0x4dbbbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbbc1:{NFSU2_TR(0x4dbbc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbbc2:{NFSU2_TR(0x4dbbc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbbc8:{NFSU2_TR(0x4dbbc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbbc9:{NFSU2_TR(0x4dbbc9);
__builtin_memmove((R+4),(R+12),4);
}
B4dbbcb:{NFSU2_TR(0x4dbbcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbbd0ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbbd0:L4dbbd0:{c.instructions+=2;NFSU2_TR(0x4dbbd0);
u8 U[4];
w4(U+0,u32(0x792768ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dbbd6:{NFSU2_TR(0x4dbbd6);
{goto L4dbbda;}
}
B4dbbd8:L4dbbd8:{c.instructions+=1;NFSU2_TR(0x4dbbd8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dbbda:L4dbbda:{c.instructions+=3;NFSU2_TR(0x4dbbda);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbbdc:{NFSU2_TR(0x4dbbdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbbe4:{NFSU2_TR(0x4dbbe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbbe9ull));
TAIL_STATIC(0x575620u,575);
}
B4dbbe9:L4dbbe9:{c.instructions+=6;NFSU2_TR(0x4dbbe9);
__builtin_memmove((R+28),(R+0),4);
}
B4dbbeb:{NFSU2_TR(0x4dbbeb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbbee:{NFSU2_TR(0x4dbbee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbbf2:{NFSU2_TR(0x4dbbf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbbf4:{NFSU2_TR(0x4dbbf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbbfc:{NFSU2_TR(0x4dbbfc);
if(r1(R+518)){{goto L4dbc1b;}}
}
B4dbbfe:L4dbbfe:{c.instructions+=6;NFSU2_TR(0x4dbbfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbc04:{NFSU2_TR(0x4dbc04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbc05:{NFSU2_TR(0x4dbc05);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbc0b:{NFSU2_TR(0x4dbc0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbc0c:{NFSU2_TR(0x4dbc0c);
__builtin_memmove((R+4),(R+28),4);
}
B4dbc0e:{NFSU2_TR(0x4dbc0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbc13ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dbc13:L4dbc13:{c.instructions+=2;NFSU2_TR(0x4dbc13);
u8 U[4];
w4(U+0,u32(0x792728ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbc19:{NFSU2_TR(0x4dbc19);
{goto L4dbc1d;}
}
B4dbc1b:L4dbc1b:{c.instructions+=1;NFSU2_TR(0x4dbc1b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dbc1d:L4dbc1d:{c.instructions+=6;NFSU2_TR(0x4dbc1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbc1e:{NFSU2_TR(0x4dbc1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbc1f:{NFSU2_TR(0x4dbc1f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbc20:{NFSU2_TR(0x4dbc20);
__builtin_memmove((R+4),(R+24),4);
}
B4dbc22:{NFSU2_TR(0x4dbc22);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbc2a:{NFSU2_TR(0x4dbc2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbc2full));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dbc2f:L4dbc2f:{c.instructions+=2;NFSU2_TR(0x4dbc2f);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbc31:{NFSU2_TR(0x4dbc31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbc36ull));
TAIL_STATIC(0x575620u,575);
}
B4dbc36:L4dbc36:{c.instructions+=6;NFSU2_TR(0x4dbc36);
__builtin_memmove((R+28),(R+0),4);
}
B4dbc38:{NFSU2_TR(0x4dbc38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbc3b:{NFSU2_TR(0x4dbc3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbc3f:{NFSU2_TR(0x4dbc3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbc41:{NFSU2_TR(0x4dbc41);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbc49:{NFSU2_TR(0x4dbc49);
if(r1(R+518)){{goto L4dbc6c;}}
}
B4dbc4b:L4dbc4b:{c.instructions+=7;NFSU2_TR(0x4dbc4b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbc4d:{NFSU2_TR(0x4dbc4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbc53:{NFSU2_TR(0x4dbc53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbc54:{NFSU2_TR(0x4dbc54);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbc5a:{NFSU2_TR(0x4dbc5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbc5b:{NFSU2_TR(0x4dbc5b);
__builtin_memmove((R+4),(R+28),4);
}
B4dbc5d:{NFSU2_TR(0x4dbc5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbc62ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbc62:L4dbc62:{c.instructions+=3;NFSU2_TR(0x4dbc62);
u8 U[4];
w4(U+0,u32(0x792868ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbc68:{NFSU2_TR(0x4dbc68);
__builtin_memmove((R+20),(R+28),4);
}
B4dbc6a:{NFSU2_TR(0x4dbc6a);
{goto L4dbc6e;}
}
B4dbc6c:L4dbc6c:{c.instructions+=1;NFSU2_TR(0x4dbc6c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dbc6e:L4dbc6e:{c.instructions+=3;NFSU2_TR(0x4dbc6e);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbc70:{NFSU2_TR(0x4dbc70);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbc78:{NFSU2_TR(0x4dbc78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbc7dull));
TAIL_STATIC(0x575620u,575);
}
B4dbc7d:L4dbc7d:{c.instructions+=6;NFSU2_TR(0x4dbc7d);
__builtin_memmove((R+12),(R+0),4);
}
B4dbc7f:{NFSU2_TR(0x4dbc7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbc82:{NFSU2_TR(0x4dbc82);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbc86:{NFSU2_TR(0x4dbc86);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbc88:{NFSU2_TR(0x4dbc88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbc90:{NFSU2_TR(0x4dbc90);
if(r1(R+518)){{goto L4dbcb1;}}
}
B4dbc92:L4dbc92:{c.instructions+=7;NFSU2_TR(0x4dbc92);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbc94:{NFSU2_TR(0x4dbc94);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbc9a:{NFSU2_TR(0x4dbc9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbc9b:{NFSU2_TR(0x4dbc9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbca1:{NFSU2_TR(0x4dbca1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbca2:{NFSU2_TR(0x4dbca2);
__builtin_memmove((R+4),(R+12),4);
}
B4dbca4:{NFSU2_TR(0x4dbca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbca9ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbca9:L4dbca9:{c.instructions+=2;NFSU2_TR(0x4dbca9);
u8 U[4];
w4(U+0,u32(0x792828ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dbcaf:{NFSU2_TR(0x4dbcaf);
{goto L4dbcb3;}
}
B4dbcb1:L4dbcb1:{c.instructions+=1;NFSU2_TR(0x4dbcb1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dbcb3:L4dbcb3:{c.instructions+=3;NFSU2_TR(0x4dbcb3);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbcb5:{NFSU2_TR(0x4dbcb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbcbd:{NFSU2_TR(0x4dbcbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbcc2ull));
TAIL_STATIC(0x575620u,575);
}
B4dbcc2:L4dbcc2:{c.instructions+=6;NFSU2_TR(0x4dbcc2);
__builtin_memmove((R+28),(R+0),4);
}
B4dbcc4:{NFSU2_TR(0x4dbcc4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbcc7:{NFSU2_TR(0x4dbcc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbccb:{NFSU2_TR(0x4dbccb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbccd:{NFSU2_TR(0x4dbccd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbcd5:{NFSU2_TR(0x4dbcd5);
if(r1(R+518)){{goto L4dbcf4;}}
}
B4dbcd7:L4dbcd7:{c.instructions+=6;NFSU2_TR(0x4dbcd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbcdd:{NFSU2_TR(0x4dbcdd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbcde:{NFSU2_TR(0x4dbcde);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbce4:{NFSU2_TR(0x4dbce4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbce5:{NFSU2_TR(0x4dbce5);
__builtin_memmove((R+4),(R+28),4);
}
B4dbce7:{NFSU2_TR(0x4dbce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbcecull));
TAIL_STATIC(0x51e090u,51e);
}
B4dbcec:L4dbcec:{c.instructions+=2;NFSU2_TR(0x4dbcec);
u8 U[4];
w4(U+0,u32(0x7927e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbcf2:{NFSU2_TR(0x4dbcf2);
{goto L4dbcf6;}
}
B4dbcf4:L4dbcf4:{c.instructions+=1;NFSU2_TR(0x4dbcf4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dbcf6:L4dbcf6:{c.instructions+=6;NFSU2_TR(0x4dbcf6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbcf7:{NFSU2_TR(0x4dbcf7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbcf8:{NFSU2_TR(0x4dbcf8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbcf9:{NFSU2_TR(0x4dbcf9);
__builtin_memmove((R+4),(R+24),4);
}
B4dbcfb:{NFSU2_TR(0x4dbcfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbd03:{NFSU2_TR(0x4dbd03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbd08ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dbd08:L4dbd08:{c.instructions+=2;NFSU2_TR(0x4dbd08);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbd0a:{NFSU2_TR(0x4dbd0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbd0full));
TAIL_STATIC(0x575620u,575);
}
B4dbd0f:L4dbd0f:{c.instructions+=6;NFSU2_TR(0x4dbd0f);
__builtin_memmove((R+28),(R+0),4);
}
B4dbd11:{NFSU2_TR(0x4dbd11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbd14:{NFSU2_TR(0x4dbd14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbd18:{NFSU2_TR(0x4dbd18);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbd1a:{NFSU2_TR(0x4dbd1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbd22:{NFSU2_TR(0x4dbd22);
if(r1(R+518)){{goto L4dbd45;}}
}
B4dbd24:L4dbd24:{c.instructions+=7;NFSU2_TR(0x4dbd24);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbd26:{NFSU2_TR(0x4dbd26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbd2c:{NFSU2_TR(0x4dbd2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbd2d:{NFSU2_TR(0x4dbd2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbd33:{NFSU2_TR(0x4dbd33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbd34:{NFSU2_TR(0x4dbd34);
__builtin_memmove((R+4),(R+28),4);
}
B4dbd36:{NFSU2_TR(0x4dbd36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbd3bull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbd3b:L4dbd3b:{c.instructions+=3;NFSU2_TR(0x4dbd3b);
u8 U[4];
w4(U+0,u32(0x792928ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbd41:{NFSU2_TR(0x4dbd41);
__builtin_memmove((R+20),(R+28),4);
}
B4dbd43:{NFSU2_TR(0x4dbd43);
{goto L4dbd47;}
}
B4dbd45:L4dbd45:{c.instructions+=1;NFSU2_TR(0x4dbd45);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dbd47:L4dbd47:{c.instructions+=3;NFSU2_TR(0x4dbd47);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbd49:{NFSU2_TR(0x4dbd49);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbd51:{NFSU2_TR(0x4dbd51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbd56ull));
TAIL_STATIC(0x575620u,575);
}
B4dbd56:L4dbd56:{c.instructions+=6;NFSU2_TR(0x4dbd56);
__builtin_memmove((R+12),(R+0),4);
}
B4dbd58:{NFSU2_TR(0x4dbd58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbd5b:{NFSU2_TR(0x4dbd5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbd5f:{NFSU2_TR(0x4dbd5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbd61:{NFSU2_TR(0x4dbd61);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbd69:{NFSU2_TR(0x4dbd69);
if(r1(R+518)){{goto L4dbd8a;}}
}
B4dbd6b:L4dbd6b:{c.instructions+=7;NFSU2_TR(0x4dbd6b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbd6d:{NFSU2_TR(0x4dbd6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbd73:{NFSU2_TR(0x4dbd73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbd74:{NFSU2_TR(0x4dbd74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbd7a:{NFSU2_TR(0x4dbd7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbd7b:{NFSU2_TR(0x4dbd7b);
__builtin_memmove((R+4),(R+12),4);
}
B4dbd7d:{NFSU2_TR(0x4dbd7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbd82ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbd82:L4dbd82:{c.instructions+=2;NFSU2_TR(0x4dbd82);
u8 U[4];
w4(U+0,u32(0x7928e8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dbd88:{NFSU2_TR(0x4dbd88);
{goto L4dbd8c;}
}
B4dbd8a:L4dbd8a:{c.instructions+=1;NFSU2_TR(0x4dbd8a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dbd8c:L4dbd8c:{c.instructions+=3;NFSU2_TR(0x4dbd8c);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbd8e:{NFSU2_TR(0x4dbd8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbd96:{NFSU2_TR(0x4dbd96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbd9bull));
TAIL_STATIC(0x575620u,575);
}
B4dbd9b:L4dbd9b:{c.instructions+=6;NFSU2_TR(0x4dbd9b);
__builtin_memmove((R+28),(R+0),4);
}
B4dbd9d:{NFSU2_TR(0x4dbd9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbda0:{NFSU2_TR(0x4dbda0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbda4:{NFSU2_TR(0x4dbda4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbda6:{NFSU2_TR(0x4dbda6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbdae:{NFSU2_TR(0x4dbdae);
if(r1(R+518)){{goto L4dbdcd;}}
}
B4dbdb0:L4dbdb0:{c.instructions+=6;NFSU2_TR(0x4dbdb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbdb6:{NFSU2_TR(0x4dbdb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbdb7:{NFSU2_TR(0x4dbdb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbdbd:{NFSU2_TR(0x4dbdbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbdbe:{NFSU2_TR(0x4dbdbe);
__builtin_memmove((R+4),(R+28),4);
}
B4dbdc0:{NFSU2_TR(0x4dbdc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbdc5ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dbdc5:L4dbdc5:{c.instructions+=2;NFSU2_TR(0x4dbdc5);
u8 U[4];
w4(U+0,u32(0x7928a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbdcb:{NFSU2_TR(0x4dbdcb);
{goto L4dbdcf;}
}
B4dbdcd:L4dbdcd:{c.instructions+=1;NFSU2_TR(0x4dbdcd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dbdcf:L4dbdcf:{c.instructions+=6;NFSU2_TR(0x4dbdcf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbdd0:{NFSU2_TR(0x4dbdd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbdd1:{NFSU2_TR(0x4dbdd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbdd2:{NFSU2_TR(0x4dbdd2);
__builtin_memmove((R+4),(R+24),4);
}
B4dbdd4:{NFSU2_TR(0x4dbdd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbddc:{NFSU2_TR(0x4dbddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbde1ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dbde1:L4dbde1:{c.instructions+=2;NFSU2_TR(0x4dbde1);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbde3:{NFSU2_TR(0x4dbde3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbde8ull));
TAIL_STATIC(0x575620u,575);
}
B4dbde8:L4dbde8:{c.instructions+=6;NFSU2_TR(0x4dbde8);
__builtin_memmove((R+28),(R+0),4);
}
B4dbdea:{NFSU2_TR(0x4dbdea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbded:{NFSU2_TR(0x4dbded);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbdf1:{NFSU2_TR(0x4dbdf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbdf3:{NFSU2_TR(0x4dbdf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbdfb:{NFSU2_TR(0x4dbdfb);
if(r1(R+518)){{goto L4dbe1e;}}
}
B4dbdfd:L4dbdfd:{c.instructions+=7;NFSU2_TR(0x4dbdfd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbdff:{NFSU2_TR(0x4dbdff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbe05:{NFSU2_TR(0x4dbe05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbe06:{NFSU2_TR(0x4dbe06);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbe0c:{NFSU2_TR(0x4dbe0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbe0d:{NFSU2_TR(0x4dbe0d);
__builtin_memmove((R+4),(R+28),4);
}
B4dbe0f:{NFSU2_TR(0x4dbe0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbe14ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbe14:L4dbe14:{c.instructions+=3;NFSU2_TR(0x4dbe14);
u8 U[4];
w4(U+0,u32(0x7929e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbe1a:{NFSU2_TR(0x4dbe1a);
__builtin_memmove((R+20),(R+28),4);
}
B4dbe1c:{NFSU2_TR(0x4dbe1c);
{goto L4dbe20;}
}
B4dbe1e:L4dbe1e:{c.instructions+=1;NFSU2_TR(0x4dbe1e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dbe20:L4dbe20:{c.instructions+=3;NFSU2_TR(0x4dbe20);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbe22:{NFSU2_TR(0x4dbe22);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbe2a:{NFSU2_TR(0x4dbe2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbe2full));
TAIL_STATIC(0x575620u,575);
}
B4dbe2f:L4dbe2f:{c.instructions+=6;NFSU2_TR(0x4dbe2f);
__builtin_memmove((R+12),(R+0),4);
}
B4dbe31:{NFSU2_TR(0x4dbe31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbe34:{NFSU2_TR(0x4dbe34);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbe38:{NFSU2_TR(0x4dbe38);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbe3a:{NFSU2_TR(0x4dbe3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbe42:{NFSU2_TR(0x4dbe42);
if(r1(R+518)){{goto L4dbe63;}}
}
B4dbe44:L4dbe44:{c.instructions+=7;NFSU2_TR(0x4dbe44);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbe46:{NFSU2_TR(0x4dbe46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbe4c:{NFSU2_TR(0x4dbe4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbe4d:{NFSU2_TR(0x4dbe4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbe53:{NFSU2_TR(0x4dbe53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbe54:{NFSU2_TR(0x4dbe54);
__builtin_memmove((R+4),(R+12),4);
}
B4dbe56:{NFSU2_TR(0x4dbe56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbe5bull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbe5b:L4dbe5b:{c.instructions+=2;NFSU2_TR(0x4dbe5b);
u8 U[4];
w4(U+0,u32(0x7929a8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dbe61:{NFSU2_TR(0x4dbe61);
{goto L4dbe65;}
}
B4dbe63:L4dbe63:{c.instructions+=1;NFSU2_TR(0x4dbe63);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dbe65:L4dbe65:{c.instructions+=3;NFSU2_TR(0x4dbe65);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbe67:{NFSU2_TR(0x4dbe67);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbe6f:{NFSU2_TR(0x4dbe6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbe74ull));
TAIL_STATIC(0x575620u,575);
}
B4dbe74:L4dbe74:{c.instructions+=6;NFSU2_TR(0x4dbe74);
__builtin_memmove((R+28),(R+0),4);
}
B4dbe76:{NFSU2_TR(0x4dbe76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbe79:{NFSU2_TR(0x4dbe79);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbe7d:{NFSU2_TR(0x4dbe7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbe7f:{NFSU2_TR(0x4dbe7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbe87:{NFSU2_TR(0x4dbe87);
if(r1(R+518)){{goto L4dbea6;}}
}
B4dbe89:L4dbe89:{c.instructions+=6;NFSU2_TR(0x4dbe89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbe8f:{NFSU2_TR(0x4dbe8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbe90:{NFSU2_TR(0x4dbe90);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbe96:{NFSU2_TR(0x4dbe96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbe97:{NFSU2_TR(0x4dbe97);
__builtin_memmove((R+4),(R+28),4);
}
B4dbe99:{NFSU2_TR(0x4dbe99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbe9eull));
TAIL_STATIC(0x51e090u,51e);
}
B4dbe9e:L4dbe9e:{c.instructions+=2;NFSU2_TR(0x4dbe9e);
u8 U[4];
w4(U+0,u32(0x792968ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbea4:{NFSU2_TR(0x4dbea4);
{goto L4dbea8;}
}
B4dbea6:L4dbea6:{c.instructions+=1;NFSU2_TR(0x4dbea6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dbea8:L4dbea8:{c.instructions+=6;NFSU2_TR(0x4dbea8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbea9:{NFSU2_TR(0x4dbea9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbeaa:{NFSU2_TR(0x4dbeaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbeab:{NFSU2_TR(0x4dbeab);
__builtin_memmove((R+4),(R+24),4);
}
B4dbead:{NFSU2_TR(0x4dbead);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbeb5:{NFSU2_TR(0x4dbeb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbebaull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dbeba:L4dbeba:{c.instructions+=2;NFSU2_TR(0x4dbeba);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbebc:{NFSU2_TR(0x4dbebc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbec1ull));
TAIL_STATIC(0x575620u,575);
}
B4dbec1:L4dbec1:{c.instructions+=6;NFSU2_TR(0x4dbec1);
__builtin_memmove((R+28),(R+0),4);
}
B4dbec3:{NFSU2_TR(0x4dbec3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbec6:{NFSU2_TR(0x4dbec6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbeca:{NFSU2_TR(0x4dbeca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbecc:{NFSU2_TR(0x4dbecc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbed4:{NFSU2_TR(0x4dbed4);
if(r1(R+518)){{goto L4dbef7;}}
}
B4dbed6:L4dbed6:{c.instructions+=7;NFSU2_TR(0x4dbed6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbed8:{NFSU2_TR(0x4dbed8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbede:{NFSU2_TR(0x4dbede);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbedf:{NFSU2_TR(0x4dbedf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbee5:{NFSU2_TR(0x4dbee5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbee6:{NFSU2_TR(0x4dbee6);
__builtin_memmove((R+4),(R+28),4);
}
B4dbee8:{NFSU2_TR(0x4dbee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbeedull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbeed:L4dbeed:{c.instructions+=3;NFSU2_TR(0x4dbeed);
u8 U[4];
w4(U+0,u32(0x792a68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbef3:{NFSU2_TR(0x4dbef3);
__builtin_memmove((R+20),(R+28),4);
}
B4dbef5:{NFSU2_TR(0x4dbef5);
{goto L4dbef9;}
}
B4dbef7:L4dbef7:{c.instructions+=1;NFSU2_TR(0x4dbef7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dbef9:L4dbef9:{c.instructions+=3;NFSU2_TR(0x4dbef9);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbefb:{NFSU2_TR(0x4dbefb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbf03:{NFSU2_TR(0x4dbf03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbf08ull));
TAIL_STATIC(0x575620u,575);
}
B4dbf08:L4dbf08:{c.instructions+=6;NFSU2_TR(0x4dbf08);
__builtin_memmove((R+12),(R+0),4);
}
B4dbf0a:{NFSU2_TR(0x4dbf0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbf0d:{NFSU2_TR(0x4dbf0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbf11:{NFSU2_TR(0x4dbf11);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbf13:{NFSU2_TR(0x4dbf13);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbf1b:{NFSU2_TR(0x4dbf1b);
if(r1(R+518)){{goto L4dbf3c;}}
}
B4dbf1d:L4dbf1d:{c.instructions+=7;NFSU2_TR(0x4dbf1d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbf1f:{NFSU2_TR(0x4dbf1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbf25:{NFSU2_TR(0x4dbf25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbf26:{NFSU2_TR(0x4dbf26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbf2c:{NFSU2_TR(0x4dbf2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbf2d:{NFSU2_TR(0x4dbf2d);
__builtin_memmove((R+4),(R+12),4);
}
B4dbf2f:{NFSU2_TR(0x4dbf2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbf34ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbf34:L4dbf34:{c.instructions+=2;NFSU2_TR(0x4dbf34);
u8 U[4];
w4(U+0,u32(0x792a28ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dbf3a:{NFSU2_TR(0x4dbf3a);
{goto L4dbf3e;}
}
B4dbf3c:L4dbf3c:{c.instructions+=1;NFSU2_TR(0x4dbf3c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dbf3e:L4dbf3e:{c.instructions+=3;NFSU2_TR(0x4dbf3e);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbf40:{NFSU2_TR(0x4dbf40);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbf48:{NFSU2_TR(0x4dbf48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbf4dull));
TAIL_STATIC(0x575620u,575);
}
B4dbf4d:L4dbf4d:{c.instructions+=6;NFSU2_TR(0x4dbf4d);
__builtin_memmove((R+28),(R+0),4);
}
B4dbf4f:{NFSU2_TR(0x4dbf4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbf52:{NFSU2_TR(0x4dbf52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbf56:{NFSU2_TR(0x4dbf56);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbf58:{NFSU2_TR(0x4dbf58);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbf60:{NFSU2_TR(0x4dbf60);
if(r1(R+518)){{goto L4dbf7f;}}
}
B4dbf62:L4dbf62:{c.instructions+=6;NFSU2_TR(0x4dbf62);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbf68:{NFSU2_TR(0x4dbf68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbf69:{NFSU2_TR(0x4dbf69);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbf6f:{NFSU2_TR(0x4dbf6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbf70:{NFSU2_TR(0x4dbf70);
__builtin_memmove((R+4),(R+28),4);
}
B4dbf72:{NFSU2_TR(0x4dbf72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbf77ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dbf77:L4dbf77:{c.instructions+=2;NFSU2_TR(0x4dbf77);
u8 U[4];
w4(U+0,u32(0x7933a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbf7d:{NFSU2_TR(0x4dbf7d);
{goto L4dbf81;}
}
B4dbf7f:L4dbf7f:{c.instructions+=1;NFSU2_TR(0x4dbf7f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dbf81:L4dbf81:{c.instructions+=6;NFSU2_TR(0x4dbf81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbf82:{NFSU2_TR(0x4dbf82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbf83:{NFSU2_TR(0x4dbf83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbf84:{NFSU2_TR(0x4dbf84);
__builtin_memmove((R+4),(R+24),4);
}
B4dbf86:{NFSU2_TR(0x4dbf86);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbf8e:{NFSU2_TR(0x4dbf8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbf93ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dbf93:L4dbf93:{c.instructions+=2;NFSU2_TR(0x4dbf93);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbf95:{NFSU2_TR(0x4dbf95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbf9aull));
TAIL_STATIC(0x575620u,575);
}
B4dbf9a:L4dbf9a:{c.instructions+=6;NFSU2_TR(0x4dbf9a);
__builtin_memmove((R+28),(R+0),4);
}
B4dbf9c:{NFSU2_TR(0x4dbf9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbf9f:{NFSU2_TR(0x4dbf9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbfa3:{NFSU2_TR(0x4dbfa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbfa5:{NFSU2_TR(0x4dbfa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbfad:{NFSU2_TR(0x4dbfad);
if(r1(R+518)){{goto L4dbfd0;}}
}
B4dbfaf:L4dbfaf:{c.instructions+=7;NFSU2_TR(0x4dbfaf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbfb1:{NFSU2_TR(0x4dbfb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dbfb7:{NFSU2_TR(0x4dbfb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbfb8:{NFSU2_TR(0x4dbfb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dbfbe:{NFSU2_TR(0x4dbfbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbfbf:{NFSU2_TR(0x4dbfbf);
__builtin_memmove((R+4),(R+28),4);
}
B4dbfc1:{NFSU2_TR(0x4dbfc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbfc6ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dbfc6:L4dbfc6:{c.instructions+=3;NFSU2_TR(0x4dbfc6);
u8 U[4];
w4(U+0,u32(0x792ae8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dbfcc:{NFSU2_TR(0x4dbfcc);
__builtin_memmove((R+20),(R+28),4);
}
B4dbfce:{NFSU2_TR(0x4dbfce);
{goto L4dbfd2;}
}
B4dbfd0:L4dbfd0:{c.instructions+=1;NFSU2_TR(0x4dbfd0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dbfd2:L4dbfd2:{c.instructions+=3;NFSU2_TR(0x4dbfd2);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbfd4:{NFSU2_TR(0x4dbfd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbfdc:{NFSU2_TR(0x4dbfdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dbfe1ull));
TAIL_STATIC(0x575620u,575);
}
B4dbfe1:L4dbfe1:{c.instructions+=6;NFSU2_TR(0x4dbfe1);
__builtin_memmove((R+12),(R+0),4);
}
B4dbfe3:{NFSU2_TR(0x4dbfe3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dbfe6:{NFSU2_TR(0x4dbfe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dbfea:{NFSU2_TR(0x4dbfea);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dbfec:{NFSU2_TR(0x4dbfec);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dbff4:{NFSU2_TR(0x4dbff4);
if(r1(R+518)){TAIL_STATIC(0x4dc015u,4dc);}
}
B4dbff6:L4dbff6:{c.instructions+=4;NFSU2_TR(0x4dbff6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbff8:{NFSU2_TR(0x4dbff8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dbffe:{NFSU2_TR(0x4dbffe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dbfff:{NFSU2_TR(0x4dbfff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
TAIL_STATIC(0x4dc005u,4dc);
}
XIT:NFSU2_TR_EXIT(0x4db,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
