#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5db,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5db,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5db(u8* __restrict R,Cpu& c);
u32 page_5db(Cpu& c){return body_5db(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5db(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5db002:goto L5db002;
case 0x5db003:c.instructions+=2;goto B5db003;
case 0x5db006:c.instructions+=1;goto B5db006;
case 0x5db010:goto L5db010;
case 0x5db011:c.instructions+=6;goto B5db011;
case 0x5db012:c.instructions+=5;goto B5db012;
case 0x5db014:c.instructions+=4;goto B5db014;
case 0x5db016:c.instructions+=3;goto B5db016;
case 0x5db01c:c.instructions+=2;goto B5db01c;
case 0x5db022:c.instructions+=1;goto B5db022;
case 0x5db027:goto L5db027;
case 0x5db028:c.instructions+=1;goto B5db028;
case 0x5db02d:goto L5db02d;
case 0x5db02f:c.instructions+=1;goto B5db02f;
case 0x5db034:goto L5db034;
case 0x5db036:c.instructions+=1;goto B5db036;
case 0x5db03b:goto L5db03b;
case 0x5db03d:c.instructions+=1;goto B5db03d;
case 0x5db042:goto L5db042;
case 0x5db048:c.instructions+=5;goto B5db048;
case 0x5db04e:c.instructions+=4;goto B5db04e;
case 0x5db054:c.instructions+=3;goto B5db054;
case 0x5db057:c.instructions+=2;goto B5db057;
case 0x5db059:c.instructions+=1;goto B5db059;
case 0x5db05b:goto L5db05b;
case 0x5db061:c.instructions+=3;goto B5db061;
case 0x5db062:c.instructions+=2;goto B5db062;
case 0x5db063:c.instructions+=1;goto B5db063;
case 0x5db068:goto L5db068;
case 0x5db06b:c.instructions+=2;goto B5db06b;
case 0x5db071:c.instructions+=1;goto B5db071;
case 0x5db077:goto L5db077;
case 0x5db078:c.instructions+=2;goto B5db078;
case 0x5db079:c.instructions+=1;goto B5db079;
case 0x5db080:goto L5db080;
case 0x5db081:c.instructions+=5;goto B5db081;
case 0x5db082:c.instructions+=4;goto B5db082;
case 0x5db084:c.instructions+=3;goto B5db084;
case 0x5db087:c.instructions+=2;goto B5db087;
case 0x5db089:c.instructions+=1;goto B5db089;
case 0x5db08b:goto L5db08b;
case 0x5db090:goto L5db090;
case 0x5db095:goto L5db095;
case 0x5db098:c.instructions+=2;goto B5db098;
case 0x5db09a:c.instructions+=1;goto B5db09a;
case 0x5db09c:goto L5db09c;
case 0x5db09f:c.instructions+=3;goto B5db09f;
case 0x5db0a1:c.instructions+=2;goto B5db0a1;
case 0x5db0a3:c.instructions+=1;goto B5db0a3;
case 0x5db0a5:goto L5db0a5;
case 0x5db0a6:c.instructions+=1;goto B5db0a6;
case 0x5db0a8:goto L5db0a8;
case 0x5db0aa:c.instructions+=4;goto B5db0aa;
case 0x5db0ae:c.instructions+=3;goto B5db0ae;
case 0x5db0b0:c.instructions+=2;goto B5db0b0;
case 0x5db0b3:c.instructions+=1;goto B5db0b3;
case 0x5db0b5:goto L5db0b5;
case 0x5db0b8:c.instructions+=1;goto B5db0b8;
case 0x5db0ba:goto L5db0ba;
case 0x5db0bb:c.instructions+=2;goto B5db0bb;
case 0x5db0bd:c.instructions+=1;goto B5db0bd;
case 0x5db0c2:goto L5db0c2;
case 0x5db0c5:c.instructions+=4;goto B5db0c5;
case 0x5db0c6:c.instructions+=3;goto B5db0c6;
case 0x5db0c9:c.instructions+=2;goto B5db0c9;
case 0x5db0cb:c.instructions+=1;goto B5db0cb;
case 0x5db0cd:goto L5db0cd;
case 0x5db0ce:goto L5db0ce;
case 0x5db0d0:c.instructions+=1;goto B5db0d0;
case 0x5db0d5:goto L5db0d5;
case 0x5db0d7:c.instructions+=3;goto B5db0d7;
case 0x5db0d8:c.instructions+=2;goto B5db0d8;
case 0x5db0d9:c.instructions+=1;goto B5db0d9;
case 0x5db0e0:goto L5db0e0;
case 0x5db0e3:c.instructions+=3;goto B5db0e3;
case 0x5db0ea:c.instructions+=2;goto B5db0ea;
case 0x5db0ec:c.instructions+=1;goto B5db0ec;
case 0x5db0ee:goto L5db0ee;
case 0x5db0f1:c.instructions+=2;goto B5db0f1;
case 0x5db0f3:c.instructions+=1;goto B5db0f3;
case 0x5db0f5:goto L5db0f5;
case 0x5db0f9:c.instructions+=4;goto B5db0f9;
case 0x5db0fc:c.instructions+=3;goto B5db0fc;
case 0x5db100:c.instructions+=2;goto B5db100;
case 0x5db103:c.instructions+=1;goto B5db103;
case 0x5db108:goto L5db108;
case 0x5db110:goto L5db110;
case 0x5db111:c.instructions+=14;goto B5db111;
case 0x5db113:c.instructions+=13;goto B5db113;
case 0x5db116:c.instructions+=12;goto B5db116;
case 0x5db118:c.instructions+=11;goto B5db118;
case 0x5db11d:c.instructions+=10;goto B5db11d;
case 0x5db123:c.instructions+=9;goto B5db123;
case 0x5db124:c.instructions+=8;goto B5db124;
case 0x5db12b:c.instructions+=7;goto B5db12b;
case 0x5db131:c.instructions+=6;goto B5db131;
case 0x5db134:c.instructions+=5;goto B5db134;
case 0x5db136:c.instructions+=4;goto B5db136;
case 0x5db137:c.instructions+=3;goto B5db137;
case 0x5db138:c.instructions+=2;goto B5db138;
case 0x5db139:c.instructions+=1;goto B5db139;
case 0x5db13b:goto L5db13b;
case 0x5db140:c.instructions+=2;goto B5db140;
case 0x5db142:c.instructions+=1;goto B5db142;
case 0x5db147:goto L5db147;
case 0x5db149:goto L5db149;
case 0x5db14c:c.instructions+=4;goto B5db14c;
case 0x5db14e:c.instructions+=3;goto B5db14e;
case 0x5db14f:c.instructions+=2;goto B5db14f;
case 0x5db153:c.instructions+=1;goto B5db153;
case 0x5db158:goto L5db158;
case 0x5db15d:c.instructions+=3;goto B5db15d;
case 0x5db161:c.instructions+=2;goto B5db161;
case 0x5db16c:c.instructions+=1;goto B5db16c;
case 0x5db171:goto L5db171;
case 0x5db173:c.instructions+=1;goto B5db173;
case 0x5db179:goto L5db179;
case 0x5db180:goto L5db180;
case 0x5db184:c.instructions+=1;goto B5db184;
case 0x5db189:goto L5db189;
case 0x5db18f:c.instructions+=4;goto B5db18f;
case 0x5db192:c.instructions+=3;goto B5db192;
case 0x5db193:c.instructions+=2;goto B5db193;
case 0x5db194:c.instructions+=1;goto B5db194;
case 0x5db199:goto L5db199;
case 0x5db19c:c.instructions+=2;goto B5db19c;
case 0x5db19e:c.instructions+=1;goto B5db19e;
case 0x5db1a4:goto L5db1a4;
case 0x5db1a8:c.instructions+=1;goto B5db1a8;
case 0x5db1ad:goto L5db1ad;
case 0x5db1b1:c.instructions+=1;goto B5db1b1;
case 0x5db1b6:goto L5db1b6;
case 0x5db1b8:c.instructions+=3;goto B5db1b8;
case 0x5db1bd:c.instructions+=2;goto B5db1bd;
case 0x5db1be:c.instructions+=1;goto B5db1be;
case 0x5db1c3:goto L5db1c3;
case 0x5db1c5:c.instructions+=6;goto B5db1c5;
case 0x5db1c7:c.instructions+=5;goto B5db1c7;
case 0x5db1c9:c.instructions+=4;goto B5db1c9;
case 0x5db1ce:c.instructions+=3;goto B5db1ce;
case 0x5db1cf:c.instructions+=2;goto B5db1cf;
case 0x5db1d1:c.instructions+=1;goto B5db1d1;
case 0x5db1d6:goto L5db1d6;
case 0x5db1d9:c.instructions+=6;goto B5db1d9;
case 0x5db1db:c.instructions+=5;goto B5db1db;
case 0x5db1dd:c.instructions+=4;goto B5db1dd;
case 0x5db1df:c.instructions+=3;goto B5db1df;
case 0x5db1e3:c.instructions+=2;goto B5db1e3;
case 0x5db1e7:c.instructions+=1;goto B5db1e7;
case 0x5db1ec:goto L5db1ec;
case 0x5db1f0:c.instructions+=3;goto B5db1f0;
case 0x5db1f1:c.instructions+=2;goto B5db1f1;
case 0x5db1f5:c.instructions+=1;goto B5db1f5;
case 0x5db1fa:goto L5db1fa;
case 0x5db1fc:c.instructions+=1;goto B5db1fc;
case 0x5db1fe:goto L5db1fe;
case 0x5db202:c.instructions+=1;goto B5db202;
case 0x5db207:goto L5db207;
case 0x5db20b:c.instructions+=4;goto B5db20b;
case 0x5db20d:c.instructions+=3;goto B5db20d;
case 0x5db210:c.instructions+=2;goto B5db210;
case 0x5db213:c.instructions+=1;goto B5db213;
case 0x5db218:goto L5db218;
case 0x5db21b:c.instructions+=12;goto B5db21b;
case 0x5db21e:c.instructions+=11;goto B5db21e;
case 0x5db221:c.instructions+=10;goto B5db221;
case 0x5db223:c.instructions+=9;goto B5db223;
case 0x5db225:c.instructions+=8;goto B5db225;
case 0x5db227:c.instructions+=7;goto B5db227;
case 0x5db22a:c.instructions+=6;goto B5db22a;
case 0x5db22d:c.instructions+=5;goto B5db22d;
case 0x5db22f:c.instructions+=4;goto B5db22f;
case 0x5db235:c.instructions+=3;goto B5db235;
case 0x5db237:c.instructions+=2;goto B5db237;
case 0x5db239:c.instructions+=1;goto B5db239;
case 0x5db23b:goto L5db23b;
case 0x5db23f:c.instructions+=2;goto B5db23f;
case 0x5db241:c.instructions+=1;goto B5db241;
case 0x5db243:goto L5db243;
case 0x5db247:c.instructions+=1;goto B5db247;
case 0x5db24c:goto L5db24c;
case 0x5db250:c.instructions+=4;goto B5db250;
case 0x5db252:c.instructions+=3;goto B5db252;
case 0x5db255:c.instructions+=2;goto B5db255;
case 0x5db258:c.instructions+=1;goto B5db258;
case 0x5db25d:goto L5db25d;
case 0x5db260:c.instructions+=13;goto B5db260;
case 0x5db263:c.instructions+=12;goto B5db263;
case 0x5db266:c.instructions+=11;goto B5db266;
case 0x5db268:c.instructions+=10;goto B5db268;
case 0x5db26a:c.instructions+=9;goto B5db26a;
case 0x5db26c:c.instructions+=8;goto B5db26c;
case 0x5db26f:c.instructions+=7;goto B5db26f;
case 0x5db271:c.instructions+=6;goto B5db271;
case 0x5db273:c.instructions+=5;goto B5db273;
case 0x5db276:c.instructions+=4;goto B5db276;
case 0x5db27c:c.instructions+=3;goto B5db27c;
case 0x5db27f:c.instructions+=2;goto B5db27f;
case 0x5db281:c.instructions+=1;goto B5db281;
case 0x5db283:goto L5db283;
case 0x5db288:c.instructions+=2;goto B5db288;
case 0x5db28c:c.instructions+=1;goto B5db28c;
case 0x5db291:goto L5db291;
case 0x5db293:c.instructions+=1;goto B5db293;
case 0x5db299:goto L5db299;
case 0x5db29d:c.instructions+=2;goto B5db29d;
case 0x5db2a8:c.instructions+=1;goto B5db2a8;
case 0x5db2ad:goto L5db2ad;
case 0x5db2b4:c.instructions+=7;goto B5db2b4;
case 0x5db2b5:c.instructions+=6;goto B5db2b5;
case 0x5db2b6:c.instructions+=5;goto B5db2b6;
case 0x5db2bd:c.instructions+=4;goto B5db2bd;
case 0x5db2be:c.instructions+=3;goto B5db2be;
case 0x5db2c0:c.instructions+=2;goto B5db2c0;
case 0x5db2c1:c.instructions+=1;goto B5db2c1;
case 0x5db2d0:goto L5db2d0;
case 0x5db2d2:c.instructions+=2;goto B5db2d2;
case 0x5db2d7:c.instructions+=1;goto B5db2d7;
case 0x5db2dc:goto L5db2dc;
case 0x5db2df:c.instructions+=1;goto B5db2df;
case 0x5db2e0:goto L5db2e0;
case 0x5db2e1:c.instructions+=3;goto B5db2e1;
case 0x5db2e5:c.instructions+=2;goto B5db2e5;
case 0x5db2eb:c.instructions+=1;goto B5db2eb;
case 0x5db2ed:goto L5db2ed;
case 0x5db2ee:c.instructions+=4;goto B5db2ee;
case 0x5db2f1:c.instructions+=3;goto B5db2f1;
case 0x5db2f3:c.instructions+=2;goto B5db2f3;
case 0x5db2f5:c.instructions+=1;goto B5db2f5;
case 0x5db2f7:goto L5db2f7;
case 0x5db300:goto L5db300;
case 0x5db306:c.instructions+=11;goto B5db306;
case 0x5db30a:c.instructions+=10;goto B5db30a;
case 0x5db30c:c.instructions+=9;goto B5db30c;
case 0x5db311:c.instructions+=8;goto B5db311;
case 0x5db314:c.instructions+=7;goto B5db314;
case 0x5db31a:c.instructions+=6;goto B5db31a;
case 0x5db31d:c.instructions+=5;goto B5db31d;
case 0x5db321:c.instructions+=4;goto B5db321;
case 0x5db324:c.instructions+=3;goto B5db324;
case 0x5db326:c.instructions+=2;goto B5db326;
case 0x5db328:c.instructions+=1;goto B5db328;
case 0x5db32a:goto L5db32a;
case 0x5db32b:c.instructions+=3;goto B5db32b;
case 0x5db330:c.instructions+=2;goto B5db330;
case 0x5db331:c.instructions+=1;goto B5db331;
case 0x5db332:goto L5db332;
case 0x5db334:c.instructions+=2;goto B5db334;
case 0x5db335:c.instructions+=1;goto B5db335;
case 0x5db340:goto L5db340;
case 0x5db341:c.instructions+=3;goto B5db341;
case 0x5db347:c.instructions+=2;goto B5db347;
case 0x5db34c:c.instructions+=1;goto B5db34c;
case 0x5db351:goto L5db351;
case 0x5db353:c.instructions+=1;goto B5db353;
case 0x5db355:goto L5db355;
case 0x5db359:c.instructions+=1;goto B5db359;
case 0x5db360:goto L5db360;
case 0x5db363:c.instructions+=1;goto B5db363;
case 0x5db365:goto L5db365;
case 0x5db367:c.instructions+=2;goto B5db367;
case 0x5db369:c.instructions+=1;goto B5db369;
case 0x5db36b:goto L5db36b;
case 0x5db36d:c.instructions+=2;goto B5db36d;
case 0x5db36e:c.instructions+=1;goto B5db36e;
case 0x5db36f:goto L5db36f;
case 0x5db371:c.instructions+=2;goto B5db371;
case 0x5db372:c.instructions+=1;goto B5db372;
case 0x5db380:goto L5db380;
case 0x5db381:c.instructions+=5;goto B5db381;
case 0x5db382:c.instructions+=4;goto B5db382;
case 0x5db388:c.instructions+=3;goto B5db388;
case 0x5db389:c.instructions+=2;goto B5db389;
case 0x5db38e:c.instructions+=1;goto B5db38e;
case 0x5db393:goto L5db393;
case 0x5db395:c.instructions+=2;goto B5db395;
case 0x5db397:c.instructions+=1;goto B5db397;
case 0x5db399:goto L5db399;
case 0x5db39d:c.instructions+=1;goto B5db39d;
case 0x5db3a0:goto L5db3a0;
case 0x5db3a3:c.instructions+=3;goto B5db3a3;
case 0x5db3a5:c.instructions+=2;goto B5db3a5;
case 0x5db3a7:c.instructions+=1;goto B5db3a7;
case 0x5db3a9:goto L5db3a9;
case 0x5db3ac:c.instructions+=1;goto B5db3ac;
case 0x5db3b0:goto L5db3b0;
case 0x5db3b3:c.instructions+=1;goto B5db3b3;
case 0x5db3b5:goto L5db3b5;
case 0x5db3b6:c.instructions+=3;goto B5db3b6;
case 0x5db3b9:c.instructions+=2;goto B5db3b9;
case 0x5db3bb:c.instructions+=1;goto B5db3bb;
case 0x5db3bd:goto L5db3bd;
case 0x5db3bf:c.instructions+=2;goto B5db3bf;
case 0x5db3c1:c.instructions+=1;goto B5db3c1;
case 0x5db3c3:goto L5db3c3;
case 0x5db3c5:goto L5db3c5;
case 0x5db3c6:c.instructions+=3;goto B5db3c6;
case 0x5db3c7:c.instructions+=2;goto B5db3c7;
case 0x5db3c8:c.instructions+=1;goto B5db3c8;
case 0x5db3d0:goto L5db3d0;
case 0x5db3d1:c.instructions+=7;goto B5db3d1;
case 0x5db3d2:c.instructions+=6;goto B5db3d2;
case 0x5db3d3:c.instructions+=5;goto B5db3d3;
case 0x5db3d4:c.instructions+=4;goto B5db3d4;
case 0x5db3da:c.instructions+=3;goto B5db3da;
case 0x5db3db:c.instructions+=2;goto B5db3db;
case 0x5db3e0:c.instructions+=1;goto B5db3e0;
case 0x5db3e5:goto L5db3e5;
case 0x5db3e7:c.instructions+=2;goto B5db3e7;
case 0x5db3eb:c.instructions+=1;goto B5db3eb;
case 0x5db3ed:goto L5db3ed;
case 0x5db3f1:goto L5db3f1;
case 0x5db3f4:c.instructions+=3;goto B5db3f4;
case 0x5db3f6:c.instructions+=2;goto B5db3f6;
case 0x5db3f8:c.instructions+=1;goto B5db3f8;
case 0x5db3fa:goto L5db3fa;
case 0x5db3fd:c.instructions+=1;goto B5db3fd;
case 0x5db400:goto L5db400;
case 0x5db404:c.instructions+=3;goto B5db404;
case 0x5db407:c.instructions+=2;goto B5db407;
case 0x5db40b:c.instructions+=1;goto B5db40b;
case 0x5db40d:goto L5db40d;
case 0x5db40e:c.instructions+=3;goto B5db40e;
case 0x5db411:c.instructions+=2;goto B5db411;
case 0x5db413:c.instructions+=1;goto B5db413;
case 0x5db415:goto L5db415;
case 0x5db419:goto L5db419;
case 0x5db41b:c.instructions+=2;goto B5db41b;
case 0x5db41d:c.instructions+=1;goto B5db41d;
case 0x5db41f:goto L5db41f;
case 0x5db421:goto L5db421;
case 0x5db422:c.instructions+=5;goto B5db422;
case 0x5db423:c.instructions+=4;goto B5db423;
case 0x5db424:c.instructions+=3;goto B5db424;
case 0x5db425:c.instructions+=2;goto B5db425;
case 0x5db426:c.instructions+=1;goto B5db426;
case 0x5db430:goto L5db430;
case 0x5db431:c.instructions+=5;goto B5db431;
case 0x5db437:c.instructions+=4;goto B5db437;
case 0x5db439:c.instructions+=3;goto B5db439;
case 0x5db43a:c.instructions+=2;goto B5db43a;
case 0x5db43c:c.instructions+=1;goto B5db43c;
case 0x5db43e:goto L5db43e;
case 0x5db443:goto L5db443;
case 0x5db448:c.instructions+=3;goto B5db448;
case 0x5db449:c.instructions+=2;goto B5db449;
case 0x5db44a:c.instructions+=1;goto B5db44a;
case 0x5db44f:goto L5db44f;
case 0x5db452:goto L5db452;
case 0x5db457:c.instructions+=4;goto B5db457;
case 0x5db459:c.instructions+=3;goto B5db459;
case 0x5db463:c.instructions+=2;goto B5db463;
case 0x5db464:c.instructions+=1;goto B5db464;
case 0x5db466:goto L5db466;
case 0x5db468:c.instructions+=6;goto B5db468;
case 0x5db46c:c.instructions+=5;goto B5db46c;
case 0x5db46d:c.instructions+=4;goto B5db46d;
case 0x5db46f:c.instructions+=3;goto B5db46f;
case 0x5db474:c.instructions+=2;goto B5db474;
case 0x5db47c:c.instructions+=1;goto B5db47c;
case 0x5db481:goto L5db481;
case 0x5db483:c.instructions+=5;goto B5db483;
case 0x5db487:c.instructions+=4;goto B5db487;
case 0x5db488:c.instructions+=3;goto B5db488;
case 0x5db48a:c.instructions+=2;goto B5db48a;
case 0x5db48f:c.instructions+=1;goto B5db48f;
case 0x5db494:goto L5db494;
case 0x5db496:c.instructions+=5;goto B5db496;
case 0x5db49a:c.instructions+=4;goto B5db49a;
case 0x5db49b:c.instructions+=3;goto B5db49b;
case 0x5db49d:c.instructions+=2;goto B5db49d;
case 0x5db4a2:c.instructions+=1;goto B5db4a2;
case 0x5db4a7:goto L5db4a7;
case 0x5db4aa:goto L5db4aa;
case 0x5db4ab:c.instructions+=1;goto B5db4ab;
case 0x5db4b0:goto L5db4b0;
case 0x5db4b1:c.instructions+=14;goto B5db4b1;
case 0x5db4b3:c.instructions+=13;goto B5db4b3;
case 0x5db4b6:c.instructions+=12;goto B5db4b6;
case 0x5db4bc:c.instructions+=11;goto B5db4bc;
case 0x5db4bd:c.instructions+=10;goto B5db4bd;
case 0x5db4be:c.instructions+=9;goto B5db4be;
case 0x5db4c4:c.instructions+=8;goto B5db4c4;
case 0x5db4c6:c.instructions+=7;goto B5db4c6;
case 0x5db4c9:c.instructions+=6;goto B5db4c9;
case 0x5db4cc:c.instructions+=5;goto B5db4cc;
case 0x5db4cd:c.instructions+=4;goto B5db4cd;
case 0x5db4cf:c.instructions+=3;goto B5db4cf;
case 0x5db4d3:c.instructions+=2;goto B5db4d3;
case 0x5db4d5:c.instructions+=1;goto B5db4d5;
case 0x5db4db:goto L5db4db;
case 0x5db4de:c.instructions+=5;goto B5db4de;
case 0x5db4e1:c.instructions+=4;goto B5db4e1;
case 0x5db4e3:c.instructions+=3;goto B5db4e3;
case 0x5db4e5:c.instructions+=2;goto B5db4e5;
case 0x5db4e9:c.instructions+=1;goto B5db4e9;
case 0x5db4ef:goto L5db4ef;
case 0x5db4f0:goto L5db4f0;
case 0x5db4f3:c.instructions+=3;goto B5db4f3;
case 0x5db4f5:c.instructions+=2;goto B5db4f5;
case 0x5db4f9:c.instructions+=1;goto B5db4f9;
case 0x5db4fb:goto L5db4fb;
case 0x5db4ff:c.instructions+=3;goto B5db4ff;
case 0x5db500:c.instructions+=2;goto B5db500;
case 0x5db502:c.instructions+=1;goto B5db502;
case 0x5db507:goto L5db507;
case 0x5db50b:c.instructions+=6;goto B5db50b;
case 0x5db50c:c.instructions+=5;goto B5db50c;
case 0x5db514:c.instructions+=4;goto B5db514;
case 0x5db51c:c.instructions+=3;goto B5db51c;
case 0x5db524:c.instructions+=2;goto B5db524;
case 0x5db52c:c.instructions+=1;goto B5db52c;
case 0x5db531:goto L5db531;
case 0x5db535:c.instructions+=7;goto B5db535;
case 0x5db536:c.instructions+=6;goto B5db536;
case 0x5db53a:c.instructions+=5;goto B5db53a;
case 0x5db53b:c.instructions+=4;goto B5db53b;
case 0x5db53f:c.instructions+=3;goto B5db53f;
case 0x5db540:c.instructions+=2;goto B5db540;
case 0x5db548:c.instructions+=1;goto B5db548;
case 0x5db54d:goto L5db54d;
case 0x5db550:c.instructions+=11;goto B5db550;
case 0x5db553:c.instructions+=10;goto B5db553;
case 0x5db557:c.instructions+=9;goto B5db557;
case 0x5db55a:c.instructions+=8;goto B5db55a;
case 0x5db55d:c.instructions+=7;goto B5db55d;
case 0x5db561:c.instructions+=6;goto B5db561;
case 0x5db565:c.instructions+=5;goto B5db565;
case 0x5db569:c.instructions+=4;goto B5db569;
case 0x5db56a:c.instructions+=3;goto B5db56a;
case 0x5db56c:c.instructions+=2;goto B5db56c;
case 0x5db574:c.instructions+=1;goto B5db574;
case 0x5db579:goto L5db579;
case 0x5db57d:c.instructions+=6;goto B5db57d;
case 0x5db580:c.instructions+=5;goto B5db580;
case 0x5db581:c.instructions+=4;goto B5db581;
case 0x5db584:c.instructions+=3;goto B5db584;
case 0x5db586:c.instructions+=2;goto B5db586;
case 0x5db58a:c.instructions+=1;goto B5db58a;
case 0x5db590:goto L5db590;
case 0x5db591:c.instructions+=5;goto B5db591;
case 0x5db592:c.instructions+=4;goto B5db592;
case 0x5db593:c.instructions+=3;goto B5db593;
case 0x5db595:c.instructions+=2;goto B5db595;
case 0x5db596:c.instructions+=1;goto B5db596;
case 0x5db5a0:goto L5db5a0;
case 0x5db5a4:c.instructions+=2;goto B5db5a4;
case 0x5db5aa:c.instructions+=1;goto B5db5aa;
case 0x5db5ac:goto L5db5ac;
case 0x5db5b1:c.instructions+=17;goto B5db5b1;
case 0x5db5b6:c.instructions+=16;goto B5db5b6;
case 0x5db5bb:c.instructions+=15;goto B5db5bb;
case 0x5db5c0:c.instructions+=14;goto B5db5c0;
case 0x5db5c5:c.instructions+=13;goto B5db5c5;
case 0x5db5ca:c.instructions+=12;goto B5db5ca;
case 0x5db5cf:c.instructions+=11;goto B5db5cf;
case 0x5db5d4:c.instructions+=10;goto B5db5d4;
case 0x5db5d9:c.instructions+=9;goto B5db5d9;
case 0x5db5de:c.instructions+=8;goto B5db5de;
case 0x5db5e3:c.instructions+=7;goto B5db5e3;
case 0x5db5e8:c.instructions+=6;goto B5db5e8;
case 0x5db5ed:c.instructions+=5;goto B5db5ed;
case 0x5db5f2:c.instructions+=4;goto B5db5f2;
case 0x5db5f7:c.instructions+=3;goto B5db5f7;
case 0x5db601:c.instructions+=2;goto B5db601;
case 0x5db606:c.instructions+=1;goto B5db606;
case 0x5db607:goto L5db607;
case 0x5db609:c.instructions+=1;goto B5db609;
case 0x5db610:goto L5db610;
case 0x5db611:c.instructions+=11;goto B5db611;
case 0x5db612:c.instructions+=10;goto B5db612;
case 0x5db613:c.instructions+=9;goto B5db613;
case 0x5db617:c.instructions+=8;goto B5db617;
case 0x5db619:c.instructions+=7;goto B5db619;
case 0x5db61a:c.instructions+=6;goto B5db61a;
case 0x5db61f:c.instructions+=5;goto B5db61f;
case 0x5db621:c.instructions+=4;goto B5db621;
case 0x5db623:c.instructions+=3;goto B5db623;
case 0x5db625:c.instructions+=2;goto B5db625;
case 0x5db627:c.instructions+=1;goto B5db627;
case 0x5db629:goto L5db629;
case 0x5db62b:c.instructions+=1;goto B5db62b;
case 0x5db62d:goto L5db62d;
case 0x5db630:c.instructions+=3;goto B5db630;
case 0x5db632:c.instructions+=2;goto B5db632;
case 0x5db634:c.instructions+=1;goto B5db634;
case 0x5db636:goto L5db636;
case 0x5db63a:c.instructions+=1;goto B5db63a;
case 0x5db640:goto L5db640;
case 0x5db643:c.instructions+=1;goto B5db643;
case 0x5db645:goto L5db645;
case 0x5db647:c.instructions+=2;goto B5db647;
case 0x5db649:c.instructions+=1;goto B5db649;
case 0x5db64b:goto L5db64b;
case 0x5db64d:goto L5db64d;
case 0x5db64e:c.instructions+=3;goto B5db64e;
case 0x5db64f:c.instructions+=2;goto B5db64f;
case 0x5db650:c.instructions+=1;goto B5db650;
case 0x5db653:goto L5db653;
case 0x5db656:c.instructions+=4;goto B5db656;
case 0x5db658:c.instructions+=3;goto B5db658;
case 0x5db65a:c.instructions+=2;goto B5db65a;
case 0x5db65c:c.instructions+=1;goto B5db65c;
case 0x5db65e:goto L5db65e;
case 0x5db661:goto L5db661;
case 0x5db664:c.instructions+=2;goto B5db664;
case 0x5db666:c.instructions+=1;goto B5db666;
case 0x5db668:goto L5db668;
case 0x5db669:c.instructions+=3;goto B5db669;
case 0x5db66c:c.instructions+=2;goto B5db66c;
case 0x5db66e:c.instructions+=1;goto B5db66e;
case 0x5db670:goto L5db670;
case 0x5db671:c.instructions+=3;goto B5db671;
case 0x5db672:c.instructions+=2;goto B5db672;
case 0x5db673:c.instructions+=1;goto B5db673;
case 0x5db676:goto L5db676;
case 0x5db677:c.instructions+=4;goto B5db677;
case 0x5db678:c.instructions+=3;goto B5db678;
case 0x5db67a:c.instructions+=2;goto B5db67a;
case 0x5db67b:c.instructions+=1;goto B5db67b;
case 0x5db680:goto L5db680;
case 0x5db681:c.instructions+=6;goto B5db681;
case 0x5db685:c.instructions+=5;goto B5db685;
case 0x5db686:c.instructions+=4;goto B5db686;
case 0x5db688:c.instructions+=3;goto B5db688;
case 0x5db68c:c.instructions+=2;goto B5db68c;
case 0x5db68e:c.instructions+=1;goto B5db68e;
case 0x5db690:goto L5db690;
case 0x5db696:c.instructions+=11;goto B5db696;
case 0x5db69c:c.instructions+=10;goto B5db69c;
case 0x5db69d:c.instructions+=9;goto B5db69d;
case 0x5db6a3:c.instructions+=8;goto B5db6a3;
case 0x5db6a5:c.instructions+=7;goto B5db6a5;
case 0x5db6a8:c.instructions+=6;goto B5db6a8;
case 0x5db6aa:c.instructions+=5;goto B5db6aa;
case 0x5db6ad:c.instructions+=4;goto B5db6ad;
case 0x5db6ae:c.instructions+=3;goto B5db6ae;
case 0x5db6b0:c.instructions+=2;goto B5db6b0;
case 0x5db6b5:c.instructions+=1;goto B5db6b5;
case 0x5db6b7:goto L5db6b7;
case 0x5db6b9:goto L5db6b9;
case 0x5db6bd:c.instructions+=8;goto B5db6bd;
case 0x5db6bf:c.instructions+=7;goto B5db6bf;
case 0x5db6c0:c.instructions+=6;goto B5db6c0;
case 0x5db6c1:c.instructions+=5;goto B5db6c1;
case 0x5db6c2:c.instructions+=4;goto B5db6c2;
case 0x5db6c4:c.instructions+=3;goto B5db6c4;
case 0x5db6c6:c.instructions+=2;goto B5db6c6;
case 0x5db6c7:c.instructions+=1;goto B5db6c7;
case 0x5db6ca:goto L5db6ca;
case 0x5db6cc:c.instructions+=5;goto B5db6cc;
case 0x5db6cd:c.instructions+=4;goto B5db6cd;
case 0x5db6ce:c.instructions+=3;goto B5db6ce;
case 0x5db6d0:c.instructions+=2;goto B5db6d0;
case 0x5db6d1:c.instructions+=1;goto B5db6d1;
case 0x5db6e0:goto L5db6e0;
case 0x5db6e1:c.instructions+=4;goto B5db6e1;
case 0x5db6e5:c.instructions+=3;goto B5db6e5;
case 0x5db6e9:c.instructions+=2;goto B5db6e9;
case 0x5db6eb:c.instructions+=1;goto B5db6eb;
case 0x5db6ed:goto L5db6ed;
case 0x5db6ef:c.instructions+=1;goto B5db6ef;
case 0x5db6f1:goto L5db6f1;
case 0x5db6f7:c.instructions+=9;goto B5db6f7;
case 0x5db6fd:c.instructions+=8;goto B5db6fd;
case 0x5db6fe:c.instructions+=7;goto B5db6fe;
case 0x5db701:c.instructions+=6;goto B5db701;
case 0x5db703:c.instructions+=5;goto B5db703;
case 0x5db706:c.instructions+=4;goto B5db706;
case 0x5db709:c.instructions+=3;goto B5db709;
case 0x5db70b:c.instructions+=2;goto B5db70b;
case 0x5db713:c.instructions+=1;goto B5db713;
case 0x5db714:goto L5db714;
case 0x5db715:c.instructions+=1;goto B5db715;
case 0x5db720:goto L5db720;
case 0x5db721:c.instructions+=4;goto B5db721;
case 0x5db722:c.instructions+=3;goto B5db722;
case 0x5db724:c.instructions+=2;goto B5db724;
case 0x5db726:c.instructions+=1;goto B5db726;
case 0x5db72b:goto L5db72b;
case 0x5db72d:c.instructions+=2;goto B5db72d;
case 0x5db731:c.instructions+=1;goto B5db731;
case 0x5db733:goto L5db733;
case 0x5db737:c.instructions+=2;goto B5db737;
case 0x5db739:c.instructions+=1;goto B5db739;
case 0x5db73b:goto L5db73b;
case 0x5db73d:c.instructions+=2;goto B5db73d;
case 0x5db73f:c.instructions+=1;goto B5db73f;
case 0x5db741:goto L5db741;
case 0x5db744:c.instructions+=3;goto B5db744;
case 0x5db747:c.instructions+=2;goto B5db747;
case 0x5db749:c.instructions+=1;goto B5db749;
case 0x5db74b:goto L5db74b;
case 0x5db750:goto L5db750;
case 0x5db754:c.instructions+=2;goto B5db754;
case 0x5db756:c.instructions+=1;goto B5db756;
case 0x5db758:goto L5db758;
case 0x5db75a:c.instructions+=2;goto B5db75a;
case 0x5db75c:c.instructions+=1;goto B5db75c;
case 0x5db75e:goto L5db75e;
case 0x5db760:goto L5db760;
case 0x5db761:c.instructions+=2;goto B5db761;
case 0x5db762:c.instructions+=1;goto B5db762;
case 0x5db765:goto L5db765;
case 0x5db766:c.instructions+=3;goto B5db766;
case 0x5db768:c.instructions+=2;goto B5db768;
case 0x5db769:c.instructions+=1;goto B5db769;
case 0x5db770:goto L5db770;
case 0x5db773:c.instructions+=8;goto B5db773;
case 0x5db774:c.instructions+=7;goto B5db774;
case 0x5db775:c.instructions+=6;goto B5db775;
case 0x5db777:c.instructions+=5;goto B5db777;
case 0x5db77a:c.instructions+=4;goto B5db77a;
case 0x5db77b:c.instructions+=3;goto B5db77b;
case 0x5db77d:c.instructions+=2;goto B5db77d;
case 0x5db785:c.instructions+=1;goto B5db785;
case 0x5db78a:goto L5db78a;
case 0x5db78c:c.instructions+=2;goto B5db78c;
case 0x5db790:c.instructions+=1;goto B5db790;
case 0x5db796:goto L5db796;
case 0x5db797:c.instructions+=2;goto B5db797;
case 0x5db79b:c.instructions+=1;goto B5db79b;
case 0x5db7a0:goto L5db7a0;
case 0x5db7a2:c.instructions+=6;goto B5db7a2;
case 0x5db7a3:c.instructions+=5;goto B5db7a3;
case 0x5db7a6:c.instructions+=4;goto B5db7a6;
case 0x5db7a7:c.instructions+=3;goto B5db7a7;
case 0x5db7aa:c.instructions+=2;goto B5db7aa;
case 0x5db7ab:c.instructions+=1;goto B5db7ab;
case 0x5db7b0:goto L5db7b0;
case 0x5db7b3:c.instructions+=2;goto B5db7b3;
case 0x5db7b5:c.instructions+=1;goto B5db7b5;
case 0x5db7b7:goto L5db7b7;
case 0x5db7bb:c.instructions+=5;goto B5db7bb;
case 0x5db7bc:c.instructions+=4;goto B5db7bc;
case 0x5db7bf:c.instructions+=3;goto B5db7bf;
case 0x5db7c0:c.instructions+=2;goto B5db7c0;
case 0x5db7c2:c.instructions+=1;goto B5db7c2;
case 0x5db7c7:goto L5db7c7;
case 0x5db7ca:c.instructions+=2;goto B5db7ca;
case 0x5db7cc:c.instructions+=1;goto B5db7cc;
case 0x5db7ce:goto L5db7ce;
case 0x5db7d2:c.instructions+=4;goto B5db7d2;
case 0x5db7d3:c.instructions+=3;goto B5db7d3;
case 0x5db7d4:c.instructions+=2;goto B5db7d4;
case 0x5db7d6:c.instructions+=1;goto B5db7d6;
case 0x5db7db:goto L5db7db;
case 0x5db7dd:c.instructions+=1;goto B5db7dd;
case 0x5db7df:goto L5db7df;
case 0x5db7e3:c.instructions+=3;goto B5db7e3;
case 0x5db7e5:c.instructions+=2;goto B5db7e5;
case 0x5db7e8:c.instructions+=1;goto B5db7e8;
case 0x5db7ea:goto L5db7ea;
case 0x5db7ee:c.instructions+=3;goto B5db7ee;
case 0x5db7f0:c.instructions+=2;goto B5db7f0;
case 0x5db7f3:c.instructions+=1;goto B5db7f3;
case 0x5db7f5:goto L5db7f5;
case 0x5db7f9:c.instructions+=2;goto B5db7f9;
case 0x5db7fd:c.instructions+=1;goto B5db7fd;
case 0x5db7ff:goto L5db7ff;
case 0x5db803:c.instructions+=2;goto B5db803;
case 0x5db805:c.instructions+=1;goto B5db805;
case 0x5db807:goto L5db807;
case 0x5db809:goto L5db809;
case 0x5db80b:c.instructions+=2;goto B5db80b;
case 0x5db80f:c.instructions+=1;goto B5db80f;
case 0x5db811:goto L5db811;
case 0x5db813:goto L5db813;
case 0x5db815:c.instructions+=10;goto B5db815;
case 0x5db818:c.instructions+=9;goto B5db818;
case 0x5db81a:c.instructions+=8;goto B5db81a;
case 0x5db81d:c.instructions+=7;goto B5db81d;
case 0x5db820:c.instructions+=6;goto B5db820;
case 0x5db823:c.instructions+=5;goto B5db823;
case 0x5db826:c.instructions+=4;goto B5db826;
case 0x5db82e:c.instructions+=3;goto B5db82e;
case 0x5db830:c.instructions+=2;goto B5db830;
case 0x5db833:c.instructions+=1;goto B5db833;
case 0x5db835:goto L5db835;
case 0x5db836:goto L5db836;
case 0x5db83a:c.instructions+=2;goto B5db83a;
case 0x5db83c:c.instructions+=1;goto B5db83c;
case 0x5db83e:goto L5db83e;
case 0x5db842:c.instructions+=1;goto B5db842;
case 0x5db844:goto L5db844;
case 0x5db846:c.instructions+=5;goto B5db846;
case 0x5db847:c.instructions+=4;goto B5db847;
case 0x5db848:c.instructions+=3;goto B5db848;
case 0x5db849:c.instructions+=2;goto B5db849;
case 0x5db84c:c.instructions+=1;goto B5db84c;
case 0x5db850:goto L5db850;
case 0x5db851:c.instructions+=6;goto B5db851;
case 0x5db852:c.instructions+=5;goto B5db852;
case 0x5db853:c.instructions+=4;goto B5db853;
case 0x5db854:c.instructions+=3;goto B5db854;
case 0x5db856:c.instructions+=2;goto B5db856;
case 0x5db858:c.instructions+=1;goto B5db858;
case 0x5db85d:goto L5db85d;
case 0x5db861:c.instructions+=3;goto B5db861;
case 0x5db863:c.instructions+=2;goto B5db863;
case 0x5db865:c.instructions+=1;goto B5db865;
case 0x5db867:goto L5db867;
case 0x5db869:c.instructions+=6;goto B5db869;
case 0x5db86a:c.instructions+=5;goto B5db86a;
case 0x5db86d:c.instructions+=4;goto B5db86d;
case 0x5db86e:c.instructions+=3;goto B5db86e;
case 0x5db871:c.instructions+=2;goto B5db871;
case 0x5db872:c.instructions+=1;goto B5db872;
case 0x5db877:goto L5db877;
case 0x5db87a:c.instructions+=2;goto B5db87a;
case 0x5db87c:c.instructions+=1;goto B5db87c;
case 0x5db87e:goto L5db87e;
case 0x5db882:c.instructions+=5;goto B5db882;
case 0x5db883:c.instructions+=4;goto B5db883;
case 0x5db886:c.instructions+=3;goto B5db886;
case 0x5db887:c.instructions+=2;goto B5db887;
case 0x5db889:c.instructions+=1;goto B5db889;
case 0x5db88e:goto L5db88e;
case 0x5db891:c.instructions+=2;goto B5db891;
case 0x5db893:c.instructions+=1;goto B5db893;
case 0x5db895:goto L5db895;
case 0x5db897:c.instructions+=2;goto B5db897;
case 0x5db899:c.instructions+=1;goto B5db899;
case 0x5db89b:goto L5db89b;
case 0x5db89f:c.instructions+=4;goto B5db89f;
case 0x5db8a0:c.instructions+=3;goto B5db8a0;
case 0x5db8a1:c.instructions+=2;goto B5db8a1;
case 0x5db8a3:c.instructions+=1;goto B5db8a3;
case 0x5db8a8:goto L5db8a8;
case 0x5db8ac:c.instructions+=5;goto B5db8ac;
case 0x5db8b2:c.instructions+=4;goto B5db8b2;
case 0x5db8b4:c.instructions+=3;goto B5db8b4;
case 0x5db8b6:c.instructions+=2;goto B5db8b6;
case 0x5db8b9:c.instructions+=1;goto B5db8b9;
case 0x5db8bb:goto L5db8bb;
case 0x5db8bc:c.instructions+=5;goto B5db8bc;
case 0x5db8bd:c.instructions+=4;goto B5db8bd;
case 0x5db8be:c.instructions+=3;goto B5db8be;
case 0x5db8c0:c.instructions+=2;goto B5db8c0;
case 0x5db8c1:c.instructions+=1;goto B5db8c1;
case 0x5db8c4:goto L5db8c4;
case 0x5db8c6:c.instructions+=14;goto B5db8c6;
case 0x5db8c9:c.instructions+=13;goto B5db8c9;
case 0x5db8cb:c.instructions+=12;goto B5db8cb;
case 0x5db8ce:c.instructions+=11;goto B5db8ce;
case 0x5db8d0:c.instructions+=10;goto B5db8d0;
case 0x5db8d2:c.instructions+=9;goto B5db8d2;
case 0x5db8d5:c.instructions+=8;goto B5db8d5;
case 0x5db8d8:c.instructions+=7;goto B5db8d8;
case 0x5db8d9:c.instructions+=6;goto B5db8d9;
case 0x5db8db:c.instructions+=5;goto B5db8db;
case 0x5db8dd:c.instructions+=4;goto B5db8dd;
case 0x5db8de:c.instructions+=3;goto B5db8de;
case 0x5db8df:c.instructions+=2;goto B5db8df;
case 0x5db8e0:c.instructions+=1;goto B5db8e0;
case 0x5db8e3:goto L5db8e3;
case 0x5db8e4:c.instructions+=5;goto B5db8e4;
case 0x5db8e5:c.instructions+=4;goto B5db8e5;
case 0x5db8e6:c.instructions+=3;goto B5db8e6;
case 0x5db8e8:c.instructions+=2;goto B5db8e8;
case 0x5db8e9:c.instructions+=1;goto B5db8e9;
case 0x5db8f0:goto L5db8f0;
case 0x5db8f4:c.instructions+=5;goto B5db8f4;
case 0x5db8f6:c.instructions+=4;goto B5db8f6;
case 0x5db8f9:c.instructions+=3;goto B5db8f9;
case 0x5db8fb:c.instructions+=2;goto B5db8fb;
case 0x5db8fe:c.instructions+=1;goto B5db8fe;
case 0x5db900:goto L5db900;
case 0x5db901:c.instructions+=35;goto B5db901;
case 0x5db903:c.instructions+=34;goto B5db903;
case 0x5db906:c.instructions+=33;goto B5db906;
case 0x5db909:c.instructions+=32;goto B5db909;
case 0x5db90a:c.instructions+=31;goto B5db90a;
case 0x5db90b:c.instructions+=30;goto B5db90b;
case 0x5db90c:c.instructions+=29;goto B5db90c;
case 0x5db90f:c.instructions+=28;goto B5db90f;
case 0x5db912:c.instructions+=27;goto B5db912;
case 0x5db915:c.instructions+=26;goto B5db915;
case 0x5db918:c.instructions+=25;goto B5db918;
case 0x5db91b:c.instructions+=24;goto B5db91b;
case 0x5db91d:c.instructions+=23;goto B5db91d;
case 0x5db922:c.instructions+=22;goto B5db922;
case 0x5db924:c.instructions+=21;goto B5db924;
case 0x5db92a:c.instructions+=20;goto B5db92a;
case 0x5db92e:c.instructions+=19;goto B5db92e;
case 0x5db92f:c.instructions+=18;goto B5db92f;
case 0x5db935:c.instructions+=17;goto B5db935;
case 0x5db938:c.instructions+=16;goto B5db938;
case 0x5db93b:c.instructions+=15;goto B5db93b;
case 0x5db93e:c.instructions+=14;goto B5db93e;
case 0x5db941:c.instructions+=13;goto B5db941;
case 0x5db944:c.instructions+=12;goto B5db944;
case 0x5db948:c.instructions+=11;goto B5db948;
case 0x5db94b:c.instructions+=10;goto B5db94b;
case 0x5db94f:c.instructions+=9;goto B5db94f;
case 0x5db950:c.instructions+=8;goto B5db950;
case 0x5db954:c.instructions+=7;goto B5db954;
case 0x5db955:c.instructions+=6;goto B5db955;
case 0x5db959:c.instructions+=5;goto B5db959;
case 0x5db95a:c.instructions+=4;goto B5db95a;
case 0x5db962:c.instructions+=3;goto B5db962;
case 0x5db96a:c.instructions+=2;goto B5db96a;
case 0x5db972:c.instructions+=1;goto B5db972;
case 0x5db977:goto L5db977;
case 0x5db97a:c.instructions+=5;goto B5db97a;
case 0x5db97d:c.instructions+=4;goto B5db97d;
case 0x5db983:c.instructions+=3;goto B5db983;
case 0x5db986:c.instructions+=2;goto B5db986;
case 0x5db988:c.instructions+=1;goto B5db988;
case 0x5db98a:goto L5db98a;
case 0x5db98e:c.instructions+=7;goto B5db98e;
case 0x5db992:c.instructions+=6;goto B5db992;
case 0x5db997:c.instructions+=5;goto B5db997;
case 0x5db998:c.instructions+=4;goto B5db998;
case 0x5db99e:c.instructions+=3;goto B5db99e;
case 0x5db99f:c.instructions+=2;goto B5db99f;
case 0x5db9a1:c.instructions+=1;goto B5db9a1;
case 0x5db9a6:goto L5db9a6;
case 0x5db9a8:c.instructions+=2;goto B5db9a8;
case 0x5db9aa:c.instructions+=1;goto B5db9aa;
case 0x5db9af:goto L5db9af;
case 0x5db9b3:goto L5db9b3;
case 0x5db9b8:c.instructions+=2;goto B5db9b8;
case 0x5db9bd:c.instructions+=1;goto B5db9bd;
case 0x5db9c2:goto L5db9c2;
case 0x5db9c8:c.instructions+=2;goto B5db9c8;
case 0x5db9cd:c.instructions+=1;goto B5db9cd;
case 0x5db9d2:goto L5db9d2;
case 0x5db9d4:c.instructions+=2;goto B5db9d4;
case 0x5db9d6:c.instructions+=1;goto B5db9d6;
case 0x5db9dc:goto L5db9dc;
case 0x5db9e0:goto L5db9e0;
case 0x5db9e3:c.instructions+=30;goto B5db9e3;
case 0x5db9e6:c.instructions+=29;goto B5db9e6;
case 0x5db9ea:c.instructions+=28;goto B5db9ea;
case 0x5db9ee:c.instructions+=27;goto B5db9ee;
case 0x5db9f1:c.instructions+=26;goto B5db9f1;
case 0x5db9f5:c.instructions+=25;goto B5db9f5;
case 0x5db9f9:c.instructions+=24;goto B5db9f9;
case 0x5db9fd:c.instructions+=23;goto B5db9fd;
case 0x5dba00:c.instructions+=22;goto B5dba00;
case 0x5dba06:c.instructions+=21;goto B5dba06;
case 0x5dba0a:c.instructions+=20;goto B5dba0a;
case 0x5dba0b:c.instructions+=19;goto B5dba0b;
case 0x5dba0f:c.instructions+=18;goto B5dba0f;
case 0x5dba13:c.instructions+=17;goto B5dba13;
case 0x5dba17:c.instructions+=16;goto B5dba17;
case 0x5dba18:c.instructions+=15;goto B5dba18;
case 0x5dba1e:c.instructions+=14;goto B5dba1e;
case 0x5dba22:c.instructions+=13;goto B5dba22;
case 0x5dba26:c.instructions+=12;goto B5dba26;
case 0x5dba2c:c.instructions+=11;goto B5dba2c;
case 0x5dba30:c.instructions+=10;goto B5dba30;
case 0x5dba34:c.instructions+=9;goto B5dba34;
case 0x5dba38:c.instructions+=8;goto B5dba38;
case 0x5dba3c:c.instructions+=7;goto B5dba3c;
case 0x5dba3e:c.instructions+=6;goto B5dba3e;
case 0x5dba42:c.instructions+=5;goto B5dba42;
case 0x5dba46:c.instructions+=4;goto B5dba46;
case 0x5dba48:c.instructions+=3;goto B5dba48;
case 0x5dba4a:c.instructions+=2;goto B5dba4a;
case 0x5dba4e:c.instructions+=1;goto B5dba4e;
case 0x5dba53:goto L5dba53;
case 0x5dba56:c.instructions+=6;goto B5dba56;
case 0x5dba5a:c.instructions+=5;goto B5dba5a;
case 0x5dba5b:c.instructions+=4;goto B5dba5b;
case 0x5dba5f:c.instructions+=3;goto B5dba5f;
case 0x5dba60:c.instructions+=2;goto B5dba60;
case 0x5dba62:c.instructions+=1;goto B5dba62;
case 0x5dba67:goto L5dba67;
case 0x5dba6b:c.instructions+=16;goto B5dba6b;
case 0x5dba6f:c.instructions+=15;goto B5dba6f;
case 0x5dba73:c.instructions+=14;goto B5dba73;
case 0x5dba77:c.instructions+=13;goto B5dba77;
case 0x5dba7a:c.instructions+=12;goto B5dba7a;
case 0x5dba7e:c.instructions+=11;goto B5dba7e;
case 0x5dba82:c.instructions+=10;goto B5dba82;
case 0x5dba85:c.instructions+=9;goto B5dba85;
case 0x5dba87:c.instructions+=8;goto B5dba87;
case 0x5dba8b:c.instructions+=7;goto B5dba8b;
case 0x5dba8f:c.instructions+=6;goto B5dba8f;
case 0x5dba91:c.instructions+=5;goto B5dba91;
case 0x5dba94:c.instructions+=4;goto B5dba94;
case 0x5dba9a:c.instructions+=3;goto B5dba9a;
case 0x5dba9c:c.instructions+=2;goto B5dba9c;
case 0x5dba9f:c.instructions+=1;goto B5dba9f;
case 0x5dbaa1:goto L5dbaa1;
case 0x5dbaa5:c.instructions+=4;goto B5dbaa5;
case 0x5dbaa8:c.instructions+=3;goto B5dbaa8;
case 0x5dbaaa:c.instructions+=2;goto B5dbaaa;
case 0x5dbaad:c.instructions+=1;goto B5dbaad;
case 0x5dbaaf:goto L5dbaaf;
case 0x5dbab6:c.instructions+=1;goto B5dbab6;
case 0x5dbab8:goto L5dbab8;
case 0x5dbabc:c.instructions+=4;goto B5dbabc;
case 0x5dbabf:c.instructions+=3;goto B5dbabf;
case 0x5dbac1:c.instructions+=2;goto B5dbac1;
case 0x5dbac4:c.instructions+=1;goto B5dbac4;
case 0x5dbac6:goto L5dbac6;
case 0x5dbaca:c.instructions+=6;goto B5dbaca;
case 0x5dbacd:c.instructions+=5;goto B5dbacd;
case 0x5dbad0:c.instructions+=4;goto B5dbad0;
case 0x5dbad3:c.instructions+=3;goto B5dbad3;
case 0x5dbad5:c.instructions+=2;goto B5dbad5;
case 0x5dbad8:c.instructions+=1;goto B5dbad8;
case 0x5dbada:goto L5dbada;
case 0x5dbae1:goto L5dbae1;
case 0x5dbae3:c.instructions+=2;goto B5dbae3;
case 0x5dbae5:c.instructions+=1;goto B5dbae5;
case 0x5dbaeb:goto L5dbaeb;
case 0x5dbaec:c.instructions+=5;goto B5dbaec;
case 0x5dbaed:c.instructions+=4;goto B5dbaed;
case 0x5dbaee:c.instructions+=3;goto B5dbaee;
case 0x5dbaf0:c.instructions+=2;goto B5dbaf0;
case 0x5dbaf1:c.instructions+=1;goto B5dbaf1;
case 0x5dbb00:goto L5dbb00;
case 0x5dbb01:c.instructions+=8;goto B5dbb01;
case 0x5dbb03:c.instructions+=7;goto B5dbb03;
case 0x5dbb06:c.instructions+=6;goto B5dbb06;
case 0x5dbb09:c.instructions+=5;goto B5dbb09;
case 0x5dbb0a:c.instructions+=4;goto B5dbb0a;
case 0x5dbb0b:c.instructions+=3;goto B5dbb0b;
case 0x5dbb0c:c.instructions+=2;goto B5dbb0c;
case 0x5dbb14:c.instructions+=1;goto B5dbb14;
case 0x5dbb19:goto L5dbb19;
case 0x5dbb1c:c.instructions+=1;goto B5dbb1c;
case 0x5dbb1e:goto L5dbb1e;
case 0x5dbb21:c.instructions+=2;goto B5dbb21;
case 0x5dbb25:c.instructions+=1;goto B5dbb25;
case 0x5dbb27:goto L5dbb27;
case 0x5dbb2c:goto L5dbb2c;
case 0x5dbb2e:c.instructions+=3;goto B5dbb2e;
case 0x5dbb32:c.instructions+=2;goto B5dbb32;
case 0x5dbb36:c.instructions+=1;goto B5dbb36;
case 0x5dbb3a:goto L5dbb3a;
case 0x5dbb40:c.instructions+=6;goto B5dbb40;
case 0x5dbb45:c.instructions+=5;goto B5dbb45;
case 0x5dbb4d:c.instructions+=4;goto B5dbb4d;
case 0x5dbb55:c.instructions+=3;goto B5dbb55;
case 0x5dbb5d:c.instructions+=2;goto B5dbb5d;
case 0x5dbb65:c.instructions+=1;goto B5dbb65;
case 0x5dbb6a:goto L5dbb6a;
case 0x5dbb6e:c.instructions+=4;goto B5dbb6e;
case 0x5dbb70:c.instructions+=3;goto B5dbb70;
case 0x5dbb74:c.instructions+=2;goto B5dbb74;
case 0x5dbb78:c.instructions+=1;goto B5dbb78;
case 0x5dbb7e:goto L5dbb7e;
case 0x5dbb80:goto L5dbb80;
case 0x5dbb83:c.instructions+=4;goto B5dbb83;
case 0x5dbb89:c.instructions+=3;goto B5dbb89;
case 0x5dbb8b:c.instructions+=2;goto B5dbb8b;
case 0x5dbb8e:c.instructions+=1;goto B5dbb8e;
case 0x5dbb94:goto L5dbb94;
case 0x5dbb97:c.instructions+=1;goto B5dbb97;
case 0x5dbb9c:goto L5dbb9c;
case 0x5dbb9f:c.instructions+=2;goto B5dbb9f;
case 0x5dbba1:c.instructions+=1;goto B5dbba1;
case 0x5dbba3:goto L5dbba3;
case 0x5dbba5:goto L5dbba5;
case 0x5dbba8:c.instructions+=2;goto B5dbba8;
case 0x5dbbaa:c.instructions+=1;goto B5dbbaa;
case 0x5dbbaf:goto L5dbbaf;
case 0x5dbbb3:c.instructions+=2;goto B5dbbb3;
case 0x5dbbb5:c.instructions+=1;goto B5dbbb5;
case 0x5dbbba:goto L5dbbba;
case 0x5dbbbd:c.instructions+=3;goto B5dbbbd;
case 0x5dbbbf:c.instructions+=2;goto B5dbbbf;
case 0x5dbbc1:c.instructions+=1;goto B5dbbc1;
case 0x5dbbc3:goto L5dbbc3;
case 0x5dbbc5:goto L5dbbc5;
case 0x5dbbc7:c.instructions+=1;goto B5dbbc7;
case 0x5dbbc9:goto L5dbbc9;
case 0x5dbbcc:c.instructions+=3;goto B5dbbcc;
case 0x5dbbce:c.instructions+=2;goto B5dbbce;
case 0x5dbbd2:c.instructions+=1;goto B5dbbd2;
case 0x5dbbd4:goto L5dbbd4;
case 0x5dbbd7:c.instructions+=2;goto B5dbbd7;
case 0x5dbbd9:c.instructions+=1;goto B5dbbd9;
case 0x5dbbdd:goto L5dbbdd;
case 0x5dbbe1:c.instructions+=7;goto B5dbbe1;
case 0x5dbbe7:c.instructions+=6;goto B5dbbe7;
case 0x5dbbed:c.instructions+=5;goto B5dbbed;
case 0x5dbbf3:c.instructions+=4;goto B5dbbf3;
case 0x5dbbf9:c.instructions+=3;goto B5dbbf9;
case 0x5dbbfb:c.instructions+=2;goto B5dbbfb;
case 0x5dbbfe:c.instructions+=1;goto B5dbbfe;
case 0x5dbc00:goto L5dbc00;
case 0x5dbc06:c.instructions+=8;goto B5dbc06;
case 0x5dbc08:c.instructions+=7;goto B5dbc08;
case 0x5dbc0c:c.instructions+=6;goto B5dbc0c;
case 0x5dbc0f:c.instructions+=5;goto B5dbc0f;
case 0x5dbc13:c.instructions+=4;goto B5dbc13;
case 0x5dbc19:c.instructions+=3;goto B5dbc19;
case 0x5dbc1b:c.instructions+=2;goto B5dbc1b;
case 0x5dbc1e:c.instructions+=1;goto B5dbc1e;
case 0x5dbc20:goto L5dbc20;
case 0x5dbc23:c.instructions+=16;goto B5dbc23;
case 0x5dbc29:c.instructions+=15;goto B5dbc29;
case 0x5dbc2b:c.instructions+=14;goto B5dbc2b;
case 0x5dbc2f:c.instructions+=13;goto B5dbc2f;
case 0x5dbc33:c.instructions+=12;goto B5dbc33;
case 0x5dbc37:c.instructions+=11;goto B5dbc37;
case 0x5dbc3a:c.instructions+=10;goto B5dbc3a;
case 0x5dbc40:c.instructions+=9;goto B5dbc40;
case 0x5dbc42:c.instructions+=8;goto B5dbc42;
case 0x5dbc46:c.instructions+=7;goto B5dbc46;
case 0x5dbc4a:c.instructions+=6;goto B5dbc4a;
case 0x5dbc4e:c.instructions+=5;goto B5dbc4e;
case 0x5dbc51:c.instructions+=4;goto B5dbc51;
case 0x5dbc57:c.instructions+=3;goto B5dbc57;
case 0x5dbc59:c.instructions+=2;goto B5dbc59;
case 0x5dbc5d:c.instructions+=1;goto B5dbc5d;
case 0x5dbc5f:goto L5dbc5f;
case 0x5dbc61:c.instructions+=1;goto B5dbc61;
case 0x5dbc63:goto L5dbc63;
case 0x5dbc65:goto L5dbc65;
case 0x5dbc67:c.instructions+=2;goto B5dbc67;
case 0x5dbc6b:c.instructions+=1;goto B5dbc6b;
case 0x5dbc71:goto L5dbc71;
case 0x5dbc76:c.instructions+=8;goto B5dbc76;
case 0x5dbc7c:c.instructions+=7;goto B5dbc7c;
case 0x5dbc7f:c.instructions+=6;goto B5dbc7f;
case 0x5dbc85:c.instructions+=5;goto B5dbc85;
case 0x5dbc89:c.instructions+=4;goto B5dbc89;
case 0x5dbc8f:c.instructions+=3;goto B5dbc8f;
case 0x5dbc91:c.instructions+=2;goto B5dbc91;
case 0x5dbc94:c.instructions+=1;goto B5dbc94;
case 0x5dbc96:goto L5dbc96;
case 0x5dbc9a:c.instructions+=11;goto B5dbc9a;
case 0x5dbc9e:c.instructions+=10;goto B5dbc9e;
case 0x5dbca2:c.instructions+=9;goto B5dbca2;
case 0x5dbca6:c.instructions+=8;goto B5dbca6;
case 0x5dbcaa:c.instructions+=7;goto B5dbcaa;
case 0x5dbcae:c.instructions+=6;goto B5dbcae;
case 0x5dbcb2:c.instructions+=5;goto B5dbcb2;
case 0x5dbcb6:c.instructions+=4;goto B5dbcb6;
case 0x5dbcbc:c.instructions+=3;goto B5dbcbc;
case 0x5dbcbe:c.instructions+=2;goto B5dbcbe;
case 0x5dbcc1:c.instructions+=1;goto B5dbcc1;
case 0x5dbcc3:goto L5dbcc3;
case 0x5dbccb:goto L5dbccb;
case 0x5dbccf:c.instructions+=4;goto B5dbccf;
case 0x5dbcd5:c.instructions+=3;goto B5dbcd5;
case 0x5dbcd7:c.instructions+=2;goto B5dbcd7;
case 0x5dbcda:c.instructions+=1;goto B5dbcda;
case 0x5dbcdc:goto L5dbcdc;
case 0x5dbce4:goto L5dbce4;
case 0x5dbcea:c.instructions+=3;goto B5dbcea;
case 0x5dbcec:c.instructions+=2;goto B5dbcec;
case 0x5dbcef:c.instructions+=1;goto B5dbcef;
case 0x5dbcf1:goto L5dbcf1;
case 0x5dbcf3:c.instructions+=1;goto B5dbcf3;
case 0x5dbcf9:goto L5dbcf9;
case 0x5dbcfd:c.instructions+=1;goto B5dbcfd;
case 0x5dbd02:goto L5dbd02;
case 0x5dbd06:c.instructions+=3;goto B5dbd06;
case 0x5dbd09:c.instructions+=2;goto B5dbd09;
case 0x5dbd0b:c.instructions+=1;goto B5dbd0b;
case 0x5dbd10:goto L5dbd10;
case 0x5dbd12:c.instructions+=3;goto B5dbd12;
case 0x5dbd15:c.instructions+=2;goto B5dbd15;
case 0x5dbd17:c.instructions+=1;goto B5dbd17;
case 0x5dbd1c:goto L5dbd1c;
case 0x5dbd20:c.instructions+=8;goto B5dbd20;
case 0x5dbd23:c.instructions+=7;goto B5dbd23;
case 0x5dbd25:c.instructions+=6;goto B5dbd25;
case 0x5dbd29:c.instructions+=5;goto B5dbd29;
case 0x5dbd2f:c.instructions+=4;goto B5dbd2f;
case 0x5dbd35:c.instructions+=3;goto B5dbd35;
case 0x5dbd37:c.instructions+=2;goto B5dbd37;
case 0x5dbd3a:c.instructions+=1;goto B5dbd3a;
case 0x5dbd3c:goto L5dbd3c;
case 0x5dbd3e:c.instructions+=1;goto B5dbd3e;
case 0x5dbd44:goto L5dbd44;
case 0x5dbd47:c.instructions+=4;goto B5dbd47;
case 0x5dbd49:c.instructions+=3;goto B5dbd49;
case 0x5dbd4b:c.instructions+=2;goto B5dbd4b;
case 0x5dbd4d:c.instructions+=1;goto B5dbd4d;
case 0x5dbd4f:goto L5dbd4f;
case 0x5dbd55:goto L5dbd55;
case 0x5dbd57:c.instructions+=1;goto B5dbd57;
case 0x5dbd5c:goto L5dbd5c;
case 0x5dbd5e:c.instructions+=7;goto B5dbd5e;
case 0x5dbd5f:c.instructions+=6;goto B5dbd5f;
case 0x5dbd61:c.instructions+=5;goto B5dbd61;
case 0x5dbd62:c.instructions+=4;goto B5dbd62;
case 0x5dbd63:c.instructions+=3;goto B5dbd63;
case 0x5dbd65:c.instructions+=2;goto B5dbd65;
case 0x5dbd66:c.instructions+=1;goto B5dbd66;
case 0x5dbd70:goto L5dbd70;
case 0x5dbd74:c.instructions+=4;goto B5dbd74;
case 0x5dbd7a:c.instructions+=3;goto B5dbd7a;
case 0x5dbd7f:c.instructions+=2;goto B5dbd7f;
case 0x5dbd83:c.instructions+=1;goto B5dbd83;
case 0x5dbd90:goto L5dbd90;
case 0x5dbd94:c.instructions+=7;goto B5dbd94;
case 0x5dbd9a:c.instructions+=6;goto B5dbd9a;
case 0x5dbda0:c.instructions+=5;goto B5dbda0;
case 0x5dbda2:c.instructions+=4;goto B5dbda2;
case 0x5dbda3:c.instructions+=3;goto B5dbda3;
case 0x5dbda5:c.instructions+=2;goto B5dbda5;
case 0x5dbda7:c.instructions+=1;goto B5dbda7;
case 0x5dbda9:goto L5dbda9;
case 0x5dbdaa:c.instructions+=2;goto B5dbdaa;
case 0x5dbdad:c.instructions+=1;goto B5dbdad;
case 0x5dbdb0:goto L5dbdb0;
case 0x5dbdb2:c.instructions+=8;goto B5dbdb2;
case 0x5dbdb3:c.instructions+=7;goto B5dbdb3;
case 0x5dbdb6:c.instructions+=6;goto B5dbdb6;
case 0x5dbdbd:c.instructions+=5;goto B5dbdbd;
case 0x5dbdbf:c.instructions+=4;goto B5dbdbf;
case 0x5dbdc0:c.instructions+=3;goto B5dbdc0;
case 0x5dbdc3:c.instructions+=2;goto B5dbdc3;
case 0x5dbdc5:c.instructions+=1;goto B5dbdc5;
case 0x5dbdc7:goto L5dbdc7;
case 0x5dbdc8:goto L5dbdc8;
case 0x5dbdc9:c.instructions+=1;goto B5dbdc9;
case 0x5dbdd0:goto L5dbdd0;
case 0x5dbdd5:c.instructions+=23;goto B5dbdd5;
case 0x5dbdda:c.instructions+=22;goto B5dbdda;
case 0x5dbddf:c.instructions+=21;goto B5dbddf;
case 0x5dbde5:c.instructions+=20;goto B5dbde5;
case 0x5dbdea:c.instructions+=19;goto B5dbdea;
case 0x5dbdef:c.instructions+=18;goto B5dbdef;
case 0x5dbdf9:c.instructions+=17;goto B5dbdf9;
case 0x5dbe03:c.instructions+=16;goto B5dbe03;
case 0x5dbe09:c.instructions+=15;goto B5dbe09;
case 0x5dbe13:c.instructions+=14;goto B5dbe13;
case 0x5dbe1d:c.instructions+=13;goto B5dbe1d;
case 0x5dbe23:c.instructions+=12;goto B5dbe23;
case 0x5dbe2d:c.instructions+=11;goto B5dbe2d;
case 0x5dbe32:c.instructions+=10;goto B5dbe32;
case 0x5dbe3c:c.instructions+=9;goto B5dbe3c;
case 0x5dbe42:c.instructions+=8;goto B5dbe42;
case 0x5dbe4c:c.instructions+=7;goto B5dbe4c;
case 0x5dbe56:c.instructions+=6;goto B5dbe56;
case 0x5dbe5b:c.instructions+=5;goto B5dbe5b;
case 0x5dbe61:c.instructions+=4;goto B5dbe61;
case 0x5dbe67:c.instructions+=3;goto B5dbe67;
case 0x5dbe71:c.instructions+=2;goto B5dbe71;
case 0x5dbe7b:c.instructions+=1;goto B5dbe7b;
case 0x5dbe80:goto L5dbe80;
case 0x5dbe81:c.instructions+=5;goto B5dbe81;
case 0x5dbe82:c.instructions+=4;goto B5dbe82;
case 0x5dbe83:c.instructions+=3;goto B5dbe83;
case 0x5dbe84:c.instructions+=2;goto B5dbe84;
case 0x5dbe89:c.instructions+=1;goto B5dbe89;
case 0x5dbe90:goto L5dbe90;
case 0x5dbe91:c.instructions+=1;goto B5dbe91;
case 0x5dbe96:goto L5dbe96;
case 0x5dbe98:c.instructions+=4;goto B5dbe98;
case 0x5dbe9b:c.instructions+=3;goto B5dbe9b;
case 0x5dbe9e:c.instructions+=2;goto B5dbe9e;
case 0x5dbea0:c.instructions+=1;goto B5dbea0;
case 0x5dbea6:goto L5dbea6;
case 0x5dbea9:c.instructions+=2;goto B5dbea9;
case 0x5dbeae:c.instructions+=1;goto B5dbeae;
case 0x5dbeb3:goto L5dbeb3;
case 0x5dbeb8:c.instructions+=2;goto B5dbeb8;
case 0x5dbeba:c.instructions+=1;goto B5dbeba;
case 0x5dbebc:goto L5dbebc;
case 0x5dbec6:c.instructions+=3;goto B5dbec6;
case 0x5dbec9:c.instructions+=2;goto B5dbec9;
case 0x5dbece:c.instructions+=1;goto B5dbece;
case 0x5dbed3:goto L5dbed3;
case 0x5dbed6:c.instructions+=2;goto B5dbed6;
case 0x5dbedb:c.instructions+=1;goto B5dbedb;
case 0x5dbee0:goto L5dbee0;
case 0x5dbee2:c.instructions+=5;goto B5dbee2;
case 0x5dbee5:c.instructions+=4;goto B5dbee5;
case 0x5dbee8:c.instructions+=3;goto B5dbee8;
case 0x5dbeef:c.instructions+=2;goto B5dbeef;
case 0x5dbef1:c.instructions+=1;goto B5dbef1;
case 0x5dbef3:goto L5dbef3;
case 0x5dbef6:c.instructions+=2;goto B5dbef6;
case 0x5dbef8:c.instructions+=1;goto B5dbef8;
case 0x5dbefa:goto L5dbefa;
case 0x5dbefd:c.instructions+=1;goto B5dbefd;
case 0x5dbf02:goto L5dbf02;
case 0x5dbf04:c.instructions+=2;goto B5dbf04;
case 0x5dbf06:c.instructions+=1;goto B5dbf06;
case 0x5dbf08:goto L5dbf08;
case 0x5dbf0a:c.instructions+=1;goto B5dbf0a;
case 0x5dbf0f:goto L5dbf0f;
case 0x5dbf11:c.instructions+=1;goto B5dbf11;
case 0x5dbf13:goto L5dbf13;
case 0x5dbf15:c.instructions+=1;goto B5dbf15;
case 0x5dbf17:goto L5dbf17;
case 0x5dbf1a:c.instructions+=1;goto B5dbf1a;
case 0x5dbf1c:goto L5dbf1c;
case 0x5dbf22:c.instructions+=4;goto B5dbf22;
case 0x5dbf28:c.instructions+=3;goto B5dbf28;
case 0x5dbf2a:c.instructions+=2;goto B5dbf2a;
case 0x5dbf2d:c.instructions+=1;goto B5dbf2d;
case 0x5dbf2f:goto L5dbf2f;
case 0x5dbf32:c.instructions+=2;goto B5dbf32;
case 0x5dbf34:c.instructions+=1;goto B5dbf34;
case 0x5dbf39:goto L5dbf39;
case 0x5dbf3b:goto L5dbf3b;
case 0x5dbf3e:c.instructions+=2;goto B5dbf3e;
case 0x5dbf40:c.instructions+=1;goto B5dbf40;
case 0x5dbf45:goto L5dbf45;
case 0x5dbf46:c.instructions+=2;goto B5dbf46;
case 0x5dbf49:c.instructions+=1;goto B5dbf49;
case 0x5dbf4f:goto L5dbf4f;
case 0x5dbf50:c.instructions+=4;goto B5dbf50;
case 0x5dbf51:c.instructions+=3;goto B5dbf51;
case 0x5dbf52:c.instructions+=2;goto B5dbf52;
case 0x5dbf53:c.instructions+=1;goto B5dbf53;
case 0x5dbf60:goto L5dbf60;
case 0x5dbf64:c.instructions+=2;goto B5dbf64;
case 0x5dbf6a:c.instructions+=1;goto B5dbf6a;
case 0x5dbf6c:goto L5dbf6c;
case 0x5dbf6e:c.instructions+=1;goto B5dbf6e;
case 0x5dbf6f:goto L5dbf6f;
case 0x5dbf72:c.instructions+=8;goto B5dbf72;
case 0x5dbf73:c.instructions+=7;goto B5dbf73;
case 0x5dbf74:c.instructions+=6;goto B5dbf74;
case 0x5dbf75:c.instructions+=5;goto B5dbf75;
case 0x5dbf78:c.instructions+=4;goto B5dbf78;
case 0x5dbf7c:c.instructions+=3;goto B5dbf7c;
case 0x5dbf7e:c.instructions+=2;goto B5dbf7e;
case 0x5dbf80:c.instructions+=1;goto B5dbf80;
case 0x5dbf82:goto L5dbf82;
case 0x5dbf84:c.instructions+=2;goto B5dbf84;
case 0x5dbf89:c.instructions+=1;goto B5dbf89;
case 0x5dbf8b:goto L5dbf8b;
case 0x5dbf8c:c.instructions+=1;goto B5dbf8c;
case 0x5dbf8e:goto L5dbf8e;
case 0x5dbf8f:c.instructions+=1;goto B5dbf8f;
case 0x5dbf91:goto L5dbf91;
case 0x5dbf93:c.instructions+=1;goto B5dbf93;
case 0x5dbf95:goto L5dbf95;
case 0x5dbf98:c.instructions+=3;goto B5dbf98;
case 0x5dbf9b:c.instructions+=2;goto B5dbf9b;
case 0x5dbf9e:c.instructions+=1;goto B5dbf9e;
case 0x5dbfa0:goto L5dbfa0;
case 0x5dbfa2:c.instructions+=1;goto B5dbfa2;
case 0x5dbfa4:goto L5dbfa4;
case 0x5dbfa7:c.instructions+=7;goto B5dbfa7;
case 0x5dbfaa:c.instructions+=6;goto B5dbfaa;
case 0x5dbfad:c.instructions+=5;goto B5dbfad;
case 0x5dbfb0:c.instructions+=4;goto B5dbfb0;
case 0x5dbfb2:c.instructions+=3;goto B5dbfb2;
case 0x5dbfb5:c.instructions+=2;goto B5dbfb5;
case 0x5dbfb7:c.instructions+=1;goto B5dbfb7;
case 0x5dbfb9:goto L5dbfb9;
case 0x5dbfbc:c.instructions+=1;goto B5dbfbc;
case 0x5dbfc1:goto L5dbfc1;
case 0x5dbfc3:goto L5dbfc3;
case 0x5dbfc6:c.instructions+=3;goto B5dbfc6;
case 0x5dbfc9:c.instructions+=2;goto B5dbfc9;
case 0x5dbfcd:c.instructions+=1;goto B5dbfcd;
case 0x5dbfcf:goto L5dbfcf;
case 0x5dbfd2:c.instructions+=3;goto B5dbfd2;
case 0x5dbfd3:c.instructions+=2;goto B5dbfd3;
case 0x5dbfd8:c.instructions+=1;goto B5dbfd8;
case 0x5dbfdd:goto L5dbfdd;
case 0x5dbfe0:goto L5dbfe0;
case 0x5dbfe3:c.instructions+=3;goto B5dbfe3;
case 0x5dbfe7:c.instructions+=2;goto B5dbfe7;
case 0x5dbfe9:c.instructions+=1;goto B5dbfe9;
case 0x5dbfeb:goto L5dbfeb;
case 0x5dbfee:c.instructions+=3;goto B5dbfee;
case 0x5dbff0:c.instructions+=2;goto B5dbff0;
case 0x5dbff7:c.instructions+=1;goto B5dbff7;
case 0x5dbff9:goto L5dbff9;
case 0x5dbffc:c.instructions+=2;goto B5dbffc;
case 0x5dbffe:c.instructions+=1;goto B5dbffe;
default:missing_instruction(c.pc);}
B5db002:L5db002:{c.instructions+=3;NFSU2_TR(0x5db002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db003:{NFSU2_TR(0x5db003);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5db006:{NFSU2_TR(0x5db006);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db010:L5db010:{c.instructions+=7;NFSU2_TR(0x5db010);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db011:{NFSU2_TR(0x5db011);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db012:{NFSU2_TR(0x5db012);
__builtin_memmove((R+24),(R+4),4);
}
B5db014:{NFSU2_TR(0x5db014);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5db016:{NFSU2_TR(0x5db016);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db01c:{NFSU2_TR(0x5db01c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5db022:{NFSU2_TR(0x5db022);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db027ull));
TAIL_STATIC(0x60f700u,60f);
}
B5db027:L5db027:{c.instructions+=2;NFSU2_TR(0x5db027);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db028:{NFSU2_TR(0x5db028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db02dull));
TAIL_STATIC(0x571130u,571);
}
B5db02d:L5db02d:{c.instructions+=2;NFSU2_TR(0x5db02d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db02f:{NFSU2_TR(0x5db02f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db034ull));
TAIL_STATIC(0x571130u,571);
}
B5db034:L5db034:{c.instructions+=2;NFSU2_TR(0x5db034);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db036:{NFSU2_TR(0x5db036);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db03bull));
TAIL_STATIC(0x571130u,571);
}
B5db03b:L5db03b:{c.instructions+=2;NFSU2_TR(0x5db03b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db03d:{NFSU2_TR(0x5db03d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db042ull));
TAIL_STATIC(0x571130u,571);
}
B5db042:L5db042:{c.instructions+=6;NFSU2_TR(0x5db042);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db048:{NFSU2_TR(0x5db048);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db04e:{NFSU2_TR(0x5db04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db054:{NFSU2_TR(0x5db054);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5db057:{NFSU2_TR(0x5db057);
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
B5db059:{NFSU2_TR(0x5db059);
if(r1(R+518)){{goto L5db077;}}
}
B5db05b:L5db05b:{c.instructions+=4;NFSU2_TR(0x5db05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db061:{NFSU2_TR(0x5db061);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db062:{NFSU2_TR(0x5db062);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db063:{NFSU2_TR(0x5db063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db068ull));
TAIL_STATIC(0x571070u,571);
}
B5db068:L5db068:{c.instructions+=3;NFSU2_TR(0x5db068);
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
B5db06b:{NFSU2_TR(0x5db06b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db071:{NFSU2_TR(0x5db071);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db077:L5db077:{c.instructions+=3;NFSU2_TR(0x5db077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db078:{NFSU2_TR(0x5db078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db079:{NFSU2_TR(0x5db079);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db080:L5db080:{c.instructions+=6;NFSU2_TR(0x5db080);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db081:{NFSU2_TR(0x5db081);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db082:{NFSU2_TR(0x5db082);
__builtin_memmove((R+24),(R+4),4);
}
B5db084:{NFSU2_TR(0x5db084);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db087:{NFSU2_TR(0x5db087);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db089:{NFSU2_TR(0x5db089);
if(r1(R+518)){{goto L5db09c;}}
}
B5db08b:L5db08b:{c.instructions+=1;NFSU2_TR(0x5db08b);
{goto L5db090;}
}
B5db090:L5db090:{c.instructions+=1;NFSU2_TR(0x5db090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db095ull));
TAIL_STATIC(0x57ef60u,57e);
}
B5db095:L5db095:{c.instructions+=3;NFSU2_TR(0x5db095);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db098:{NFSU2_TR(0x5db098);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db09a:{NFSU2_TR(0x5db09a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db090u);}goto L5db090;}}
}
B5db09c:L5db09c:{c.instructions+=4;NFSU2_TR(0x5db09c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db09f:{NFSU2_TR(0x5db09f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5db0a1:{NFSU2_TR(0x5db0a1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db0a3:{NFSU2_TR(0x5db0a3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5db0ce;}}
}
B5db0a5:L5db0a5:{c.instructions+=2;NFSU2_TR(0x5db0a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db0a6:{NFSU2_TR(0x5db0a6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5db0a8:L5db0a8:{c.instructions+=5;NFSU2_TR(0x5db0a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5db0aa:{NFSU2_TR(0x5db0aa);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5db0ae:{NFSU2_TR(0x5db0ae);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5db0b0:{NFSU2_TR(0x5db0b0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db0b3:{NFSU2_TR(0x5db0b3);
if(r1(R+518)){{goto L5db0ba;}}
}
B5db0b5:L5db0b5:{c.instructions+=2;NFSU2_TR(0x5db0b5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db0b8:{NFSU2_TR(0x5db0b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5db0c2;}}
}
B5db0ba:L5db0ba:{c.instructions+=3;NFSU2_TR(0x5db0ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db0bb:{NFSU2_TR(0x5db0bb);
__builtin_memmove((R+4),(R+24),4);
}
B5db0bd:{NFSU2_TR(0x5db0bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db0c2ull));
TAIL_STATIC(0x5daac0u,5da);
}
B5db0c2:L5db0c2:{c.instructions+=5;NFSU2_TR(0x5db0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db0c5:{NFSU2_TR(0x5db0c5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5db0c6:{NFSU2_TR(0x5db0c6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x50ull))));
}
B5db0c9:{NFSU2_TR(0x5db0c9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5db0cb:{NFSU2_TR(0x5db0cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db0a8u);}goto L5db0a8;}}
}
B5db0cd:L5db0cd:{c.instructions+=1;NFSU2_TR(0x5db0cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db0ce:L5db0ce:{c.instructions+=2;NFSU2_TR(0x5db0ce);
__builtin_memmove((R+4),(R+24),4);
}
B5db0d0:{NFSU2_TR(0x5db0d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db0d5ull));
TAIL_STATIC(0x5d60e0u,5d6);
}
B5db0d5:L5db0d5:{c.instructions+=4;NFSU2_TR(0x5db0d5);
__builtin_memmove((R+4),(R+24),4);
}
B5db0d7:{NFSU2_TR(0x5db0d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db0d8:{NFSU2_TR(0x5db0d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db0d9:{NFSU2_TR(0x5db0d9);
TAIL_STATIC(0x5da890u,5da);
}
B5db0e0:L5db0e0:{c.instructions+=4;NFSU2_TR(0x5db0e0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B5db0e3:{NFSU2_TR(0x5db0e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5db0ea:{NFSU2_TR(0x5db0ea);
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
B5db0ec:{NFSU2_TR(0x5db0ec);
if(r1(R+518)){{goto L5db108;}}
}
B5db0ee:L5db0ee:{c.instructions+=3;NFSU2_TR(0x5db0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db0f1:{NFSU2_TR(0x5db0f1);
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
B5db0f3:{NFSU2_TR(0x5db0f3);
if(r1(R+518)){{goto L5db108;}}
}
B5db0f5:L5db0f5:{c.instructions+=5;NFSU2_TR(0x5db0f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5db0f9:{NFSU2_TR(0x5db0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db0fc:{NFSU2_TR(0x5db0fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5db100:{NFSU2_TR(0x5db100);
u8 U[45];
w4(U+37,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5db103:{NFSU2_TR(0x5db103);
u8 U[14];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5db108:L5db108:{c.instructions+=1;NFSU2_TR(0x5db108);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db110:L5db110:{c.instructions+=15;NFSU2_TR(0x5db110);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db111:{NFSU2_TR(0x5db111);
__builtin_memmove((R+20),(R+16),4);
}
B5db113:{NFSU2_TR(0x5db113);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5db116:{NFSU2_TR(0x5db116);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db118:{NFSU2_TR(0x5db118);
u8 U[4];
w4(U+0,u32(0x77935bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db11d:{NFSU2_TR(0x5db11d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db123:{NFSU2_TR(0x5db123);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db124:{NFSU2_TR(0x5db124);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db12b:{NFSU2_TR(0x5db12b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x288ull))));
}
B5db131:{NFSU2_TR(0x5db131);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5db134:{NFSU2_TR(0x5db134);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5db136:{NFSU2_TR(0x5db136);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db137:{NFSU2_TR(0x5db137);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db138:{NFSU2_TR(0x5db138);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db139:{NFSU2_TR(0x5db139);
if(r1(R+518)){{goto L5db149;}}
}
B5db13b:L5db13b:{c.instructions+=3;NFSU2_TR(0x5db13b);
w4(R+4,u32(0x200ull));
}
B5db140:{NFSU2_TR(0x5db140);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5db142:{NFSU2_TR(0x5db142);
w4(R+28,u32(0x8832c0ull));
}
B5db147:L5db147:{c.instructions+=1;NFSU2_TR(0x5db147);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5db149;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db147u);}goto L5db147;}
}
B5db149:L5db149:{c.instructions+=5;NFSU2_TR(0x5db149);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db14c:{NFSU2_TR(0x5db14c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db14e:{NFSU2_TR(0x5db14e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db14f:{NFSU2_TR(0x5db14f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5db153:{NFSU2_TR(0x5db153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db158ull));
TAIL_STATIC(0x440840u,440);
}
B5db158:L5db158:{c.instructions+=4;NFSU2_TR(0x5db158);
u8 U[4];
w4(U+0,u32(0x7a5248ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db15d:{NFSU2_TR(0x5db15d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5db161:{NFSU2_TR(0x5db161);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db16c:{NFSU2_TR(0x5db16c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db171ull));
TAIL_STATIC(0x43e4a0u,43e);
}
B5db171:L5db171:{c.instructions+=2;NFSU2_TR(0x5db171);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db173:{NFSU2_TR(0x5db173);
if(r1(R+518)){{goto L5db299;}}
}
B5db179:L5db179:{c.instructions+=1;NFSU2_TR(0x5db179);
__builtin_memmove((R+16),(R+16),4);
}
B5db180:L5db180:{c.instructions+=2;NFSU2_TR(0x5db180);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5db184:{NFSU2_TR(0x5db184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db189ull));
TAIL_STATIC(0x440160u,440);
}
B5db189:L5db189:{c.instructions+=5;NFSU2_TR(0x5db189);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B5db18f:{NFSU2_TR(0x5db18f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5db192:{NFSU2_TR(0x5db192);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db193:{NFSU2_TR(0x5db193);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db194:{NFSU2_TR(0x5db194);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db199ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B5db199:L5db199:{c.instructions+=3;NFSU2_TR(0x5db199);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5db19c:{NFSU2_TR(0x5db19c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db19e:{NFSU2_TR(0x5db19e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5db283;}}
}
B5db1a4:L5db1a4:{c.instructions+=2;NFSU2_TR(0x5db1a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5db1a8:{NFSU2_TR(0x5db1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db1adull));
TAIL_STATIC(0x440160u,440);
}
B5db1ad:L5db1ad:{c.instructions+=2;NFSU2_TR(0x5db1ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5db1b1:{NFSU2_TR(0x5db1b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db1b6ull));
TAIL_STATIC(0x440160u,440);
}
B5db1b6:L5db1b6:{c.instructions+=4;NFSU2_TR(0x5db1b6);
__builtin_memmove((R+24),(R+0),4);
}
B5db1b8:{NFSU2_TR(0x5db1b8);
u8 U[4];
w4(U+0,u32(0x7a5244ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db1bd:{NFSU2_TR(0x5db1bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db1be:{NFSU2_TR(0x5db1be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db1c3ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B5db1c3:L5db1c3:{c.instructions+=7;NFSU2_TR(0x5db1c3);
__builtin_memmove((R+12),(R+0),4);
}
B5db1c5:{NFSU2_TR(0x5db1c5);
w1(R+512,u8((r4(R+12))!=(u32(0x0ull))));
w4(R+12,u32(0-u32(r4(R+12))));
}
B5db1c7:{NFSU2_TR(0x5db1c7);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B5db1c9:{NFSU2_TR(0x5db1c9);
u8 U[4];
w4(U+0,u32(0x7a5240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db1ce:{NFSU2_TR(0x5db1ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db1cf:{NFSU2_TR(0x5db1cf);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B5db1d1:{NFSU2_TR(0x5db1d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db1d6ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B5db1d6:L5db1d6:{c.instructions+=7;NFSU2_TR(0x5db1d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5db1d9:{NFSU2_TR(0x5db1d9);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5db1db:{NFSU2_TR(0x5db1db);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B5db1dd:{NFSU2_TR(0x5db1dd);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B5db1df:{NFSU2_TR(0x5db1df);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5db1e3:{NFSU2_TR(0x5db1e3);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5db1e7:{NFSU2_TR(0x5db1e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db1ecull));
TAIL_STATIC(0x440160u,440);
}
B5db1ec:L5db1ec:{c.instructions+=4;NFSU2_TR(0x5db1ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5db1f0:{NFSU2_TR(0x5db1f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db1f1:{NFSU2_TR(0x5db1f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5db1f5:{NFSU2_TR(0x5db1f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db1faull));
TAIL_STATIC(0x440260u,440);
}
B5db1fa:L5db1fa:{c.instructions+=2;NFSU2_TR(0x5db1fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5db1fc:{NFSU2_TR(0x5db1fc);
if(r1(R+518)){{goto L5db23b;}}
}
B5db1fe:L5db1fe:{c.instructions+=2;NFSU2_TR(0x5db1fe);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db202:{NFSU2_TR(0x5db202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db207ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5db207:L5db207:{c.instructions+=5;NFSU2_TR(0x5db207);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db20b:{NFSU2_TR(0x5db20b);
__builtin_memmove((R+24),(R+0),4);
}
B5db20d:{NFSU2_TR(0x5db20d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B5db210:{NFSU2_TR(0x5db210);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7full))));
}
B5db213:{NFSU2_TR(0x5db213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db218ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5db218:L5db218:{c.instructions+=13;NFSU2_TR(0x5db218);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5db21b:{NFSU2_TR(0x5db21b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B5db21e:{NFSU2_TR(0x5db21e);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5db221:{NFSU2_TR(0x5db221);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5db223:{NFSU2_TR(0x5db223);
__builtin_memmove((R+4),(R+0),4);
}
B5db225:{NFSU2_TR(0x5db225);
__builtin_memmove((R+8),(R+0),4);
}
B5db227:{NFSU2_TR(0x5db227);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5db22a:{NFSU2_TR(0x5db22a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5db22d:{NFSU2_TR(0x5db22d);
w1(R+0,u8(0x1ull));
}
B5db22f:{NFSU2_TR(0x5db22f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8832c0ull))));
}
B5db235:{NFSU2_TR(0x5db235);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+0,shl<u8>(r1(R+0),u64(r1(U+0))));
}
B5db237:{NFSU2_TR(0x5db237);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+0,u8(u32(r1(U+0))|u32(r1(R+0))));
s1(u32(r4(R+8)),r1(U+0));
}
B5db239:{NFSU2_TR(0x5db239);
{goto L5db283;}
}
B5db23b:L5db23b:{c.instructions+=3;NFSU2_TR(0x5db23b);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5db23f:{NFSU2_TR(0x5db23f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5db241:{NFSU2_TR(0x5db241);
if(r1(R+518)){{goto L5db283;}}
}
B5db243:L5db243:{c.instructions+=2;NFSU2_TR(0x5db243);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db247:{NFSU2_TR(0x5db247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db24cull));
TAIL_STATIC(0x75bed4u,75b);
}
B5db24c:L5db24c:{c.instructions+=5;NFSU2_TR(0x5db24c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db250:{NFSU2_TR(0x5db250);
__builtin_memmove((R+24),(R+0),4);
}
B5db252:{NFSU2_TR(0x5db252);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B5db255:{NFSU2_TR(0x5db255);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7full))));
}
B5db258:{NFSU2_TR(0x5db258);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db25dull));
TAIL_STATIC(0x75bed4u,75b);
}
B5db25d:L5db25d:{c.instructions+=14;NFSU2_TR(0x5db25d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5db260:{NFSU2_TR(0x5db260);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B5db263:{NFSU2_TR(0x5db263);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5db266:{NFSU2_TR(0x5db266);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5db268:{NFSU2_TR(0x5db268);
__builtin_memmove((R+4),(R+0),4);
}
B5db26a:{NFSU2_TR(0x5db26a);
__builtin_memmove((R+8),(R+0),4);
}
B5db26c:{NFSU2_TR(0x5db26c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5db26f:{NFSU2_TR(0x5db26f);
w1(R+0,u8(0x1ull));
}
B5db271:{NFSU2_TR(0x5db271);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+0,shl<u8>(r1(R+0),u64(r1(U+0))));
}
B5db273:{NFSU2_TR(0x5db273);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5db276:{NFSU2_TR(0x5db276);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8832c0ull))));
}
B5db27c:{NFSU2_TR(0x5db27c);
w1(R+4,u8(u32(r1(R+4))|u32(u8(0xffull))));
}
B5db27f:{NFSU2_TR(0x5db27f);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+0))));
}
B5db281:{NFSU2_TR(0x5db281);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+0,u8(u32(r1(U+0))&u32(r1(R+4))));
s1(u32(r4(R+8)),r1(U+0));
}
B5db283:L5db283:{c.instructions+=3;NFSU2_TR(0x5db283);
u8 U[4];
w4(U+0,u32(0x7a5248ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db288:{NFSU2_TR(0x5db288);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5db28c:{NFSU2_TR(0x5db28c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db291ull));
TAIL_STATIC(0x43e4a0u,43e);
}
B5db291:L5db291:{c.instructions+=2;NFSU2_TR(0x5db291);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db293:{NFSU2_TR(0x5db293);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db180u);}goto L5db180;}}
}
B5db299:L5db299:{c.instructions+=3;NFSU2_TR(0x5db299);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5db29d:{NFSU2_TR(0x5db29d);
u8 U[8];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db2a8:{NFSU2_TR(0x5db2a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db2adull));
TAIL_STATIC(0x43e060u,43e);
}
B5db2ad:L5db2ad:{c.instructions+=8;NFSU2_TR(0x5db2ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x294ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db2b4:{NFSU2_TR(0x5db2b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db2b5:{NFSU2_TR(0x5db2b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db2b6:{NFSU2_TR(0x5db2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db2bd:{NFSU2_TR(0x5db2bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db2be:{NFSU2_TR(0x5db2be);
__builtin_memmove((R+16),(R+20),4);
}
B5db2c0:{NFSU2_TR(0x5db2c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5db2c1:{NFSU2_TR(0x5db2c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db2d0:L5db2d0:{c.instructions+=3;NFSU2_TR(0x5db2d0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db2d2:{NFSU2_TR(0x5db2d2);
u8 U[4];
w4(U+0,u32(0x7a5250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db2d7:{NFSU2_TR(0x5db2d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db2dcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db110u);}goto L5db110;}
}
B5db2dc:L5db2dc:{c.instructions+=2;NFSU2_TR(0x5db2dc);
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
B5db2df:{NFSU2_TR(0x5db2df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db2e0:L5db2e0:{c.instructions+=4;NFSU2_TR(0x5db2e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db2e1:{NFSU2_TR(0x5db2e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5db2e5:{NFSU2_TR(0x5db2e5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x34108ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5db2eb:{NFSU2_TR(0x5db2eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5db332;}}
}
B5db2ed:L5db2ed:{c.instructions+=5;NFSU2_TR(0x5db2ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db2ee:{NFSU2_TR(0x5db2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5db2f1:{NFSU2_TR(0x5db2f1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5db2f3:{NFSU2_TR(0x5db2f3);
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
B5db2f5:{NFSU2_TR(0x5db2f5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5db32a;}}
}
B5db2f7:L5db2f7:{c.instructions+=1;NFSU2_TR(0x5db2f7);
{goto L5db300;}
}
B5db300:L5db300:{c.instructions+=12;NFSU2_TR(0x5db300);
__builtin_memmove((R+8),gp(0x88f764),4);
}
B5db306:{NFSU2_TR(0x5db306);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5db30a:{NFSU2_TR(0x5db30a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5db30c:{NFSU2_TR(0x5db30c);
__builtin_memmove(gp(0x88f764),(R+0),4);
}
B5db311:{NFSU2_TR(0x5db311);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db314:{NFSU2_TR(0x5db314);
u8 U[4];
w4(U+0,u32(0x88f760ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5db31a:{NFSU2_TR(0x5db31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db31d:{NFSU2_TR(0x5db31d);
u8 U[12];
w4(U+0,u32(u32(u32(0x37ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5db321:{NFSU2_TR(0x5db321);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B5db324:{NFSU2_TR(0x5db324);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5db326:{NFSU2_TR(0x5db326);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5db328:{NFSU2_TR(0x5db328);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db300u);}goto L5db300;}}
}
B5db32a:L5db32a:{c.instructions+=4;NFSU2_TR(0x5db32a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db32b:{NFSU2_TR(0x5db32b);
w4(R+0,u32(0x1ull));
}
B5db330:{NFSU2_TR(0x5db330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db331:{NFSU2_TR(0x5db331);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db332:L5db332:{c.instructions+=3;NFSU2_TR(0x5db332);
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
B5db334:{NFSU2_TR(0x5db334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db335:{NFSU2_TR(0x5db335);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db340:L5db340:{c.instructions+=4;NFSU2_TR(0x5db340);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db341:{NFSU2_TR(0x5db341);
__builtin_memmove((R+24),gp(0x88f760),4);
}
B5db347:{NFSU2_TR(0x5db347);
w4(R+4,u32(0x88f760ull));
}
B5db34c:{NFSU2_TR(0x5db34c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db351ull));
TAIL_STATIC(0x502fd0u,502);
}
B5db351:L5db351:{c.instructions+=2;NFSU2_TR(0x5db351);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db353:{NFSU2_TR(0x5db353);
if(r1(R+518)){{goto L5db36b;}}
}
B5db355:L5db355:{c.instructions+=2;NFSU2_TR(0x5db355);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db359:{NFSU2_TR(0x5db359);
__builtin_memmove((R+16),(R+16),4);
}
B5db360:L5db360:{c.instructions+=2;NFSU2_TR(0x5db360);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5db363:{NFSU2_TR(0x5db363);
if(r1(R+518)){{goto L5db36f;}}
}
B5db365:L5db365:{c.instructions+=3;NFSU2_TR(0x5db365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5db367:{NFSU2_TR(0x5db367);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db369:{NFSU2_TR(0x5db369);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db360u);}goto L5db360;}}
}
B5db36b:L5db36b:{c.instructions+=3;NFSU2_TR(0x5db36b);
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
B5db36d:{NFSU2_TR(0x5db36d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db36e:{NFSU2_TR(0x5db36e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db36f:L5db36f:{c.instructions+=3;NFSU2_TR(0x5db36f);
__builtin_memmove((R+0),(R+24),4);
}
B5db371:{NFSU2_TR(0x5db371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db372:{NFSU2_TR(0x5db372);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db380:L5db380:{c.instructions+=6;NFSU2_TR(0x5db380);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db381:{NFSU2_TR(0x5db381);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db382:{NFSU2_TR(0x5db382);
__builtin_memmove((R+24),gp(0x88ead4),4);
}
B5db388:{NFSU2_TR(0x5db388);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db389:{NFSU2_TR(0x5db389);
w4(R+4,u32(0x88ead4ull));
}
B5db38e:{NFSU2_TR(0x5db38e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db393ull));
TAIL_STATIC(0x502fd0u,502);
}
B5db393:L5db393:{c.instructions+=3;NFSU2_TR(0x5db393);
__builtin_memmove((R+12),(R+0),4);
}
B5db395:{NFSU2_TR(0x5db395);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db397:{NFSU2_TR(0x5db397);
if(r1(R+518)){{goto L5db3c3;}}
}
B5db399:L5db399:{c.instructions+=2;NFSU2_TR(0x5db399);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5db39d:{NFSU2_TR(0x5db39d);
__builtin_memmove((R+4),(R+4),4);
}
B5db3a0:L5db3a0:{c.instructions+=4;NFSU2_TR(0x5db3a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5db3a3:{NFSU2_TR(0x5db3a3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5db3a5:{NFSU2_TR(0x5db3a5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db3a7:{NFSU2_TR(0x5db3a7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5db3bd;}}
}
B5db3a9:L5db3a9:{c.instructions+=2;NFSU2_TR(0x5db3a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db3ac:{NFSU2_TR(0x5db3ac);
__builtin_memmove((R+16),(R+16),4);
}
B5db3b0:L5db3b0:{c.instructions+=2;NFSU2_TR(0x5db3b0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5db3b3:{NFSU2_TR(0x5db3b3);
if(r1(R+518)){{goto L5db3c5;}}
}
B5db3b5:L5db3b5:{c.instructions+=4;NFSU2_TR(0x5db3b5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5db3b6:{NFSU2_TR(0x5db3b6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
}
B5db3b9:{NFSU2_TR(0x5db3b9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5db3bb:{NFSU2_TR(0x5db3bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db3b0u);}goto L5db3b0;}}
}
B5db3bd:L5db3bd:{c.instructions+=3;NFSU2_TR(0x5db3bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5db3bf:{NFSU2_TR(0x5db3bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db3c1:{NFSU2_TR(0x5db3c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db3a0u);}goto L5db3a0;}}
}
B5db3c3:L5db3c3:{c.instructions+=1;NFSU2_TR(0x5db3c3);
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
B5db3c5:L5db3c5:{c.instructions+=4;NFSU2_TR(0x5db3c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db3c6:{NFSU2_TR(0x5db3c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db3c7:{NFSU2_TR(0x5db3c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db3c8:{NFSU2_TR(0x5db3c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db3d0:L5db3d0:{c.instructions+=8;NFSU2_TR(0x5db3d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db3d1:{NFSU2_TR(0x5db3d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db3d2:{NFSU2_TR(0x5db3d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db3d3:{NFSU2_TR(0x5db3d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db3d4:{NFSU2_TR(0x5db3d4);
__builtin_memmove((R+24),gp(0x88ead4),4);
}
B5db3da:{NFSU2_TR(0x5db3da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db3db:{NFSU2_TR(0x5db3db);
w4(R+4,u32(0x88ead4ull));
}
B5db3e0:{NFSU2_TR(0x5db3e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db3e5ull));
TAIL_STATIC(0x502fd0u,502);
}
B5db3e5:L5db3e5:{c.instructions+=3;NFSU2_TR(0x5db3e5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db3e7:{NFSU2_TR(0x5db3e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db3eb:{NFSU2_TR(0x5db3eb);
if(r1(R+518)){{goto L5db41f;}}
}
B5db3ed:L5db3ed:{c.instructions+=1;NFSU2_TR(0x5db3ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5db3f1:L5db3f1:{c.instructions+=4;NFSU2_TR(0x5db3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5db3f4:{NFSU2_TR(0x5db3f4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5db3f6:{NFSU2_TR(0x5db3f6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db3f8:{NFSU2_TR(0x5db3f8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5db419;}}
}
B5db3fa:L5db3fa:{c.instructions+=2;NFSU2_TR(0x5db3fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5db3fd:{NFSU2_TR(0x5db3fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db400:L5db400:{c.instructions+=4;NFSU2_TR(0x5db400);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B5db404:{NFSU2_TR(0x5db404);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B5db407:{NFSU2_TR(0x5db407);
u8 U[30];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+22),r4(R+12)));
w4(U+26,u32(u32(r4(U+22))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B5db40b:{NFSU2_TR(0x5db40b);
if(r1(R+518)){{goto L5db421;}}
}
B5db40d:L5db40d:{c.instructions+=4;NFSU2_TR(0x5db40d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5db40e:{NFSU2_TR(0x5db40e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5db411:{NFSU2_TR(0x5db411);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5db413:{NFSU2_TR(0x5db413);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db400u);}goto L5db400;}}
}
B5db415:L5db415:{c.instructions+=1;NFSU2_TR(0x5db415);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db419:L5db419:{c.instructions+=3;NFSU2_TR(0x5db419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5db41b:{NFSU2_TR(0x5db41b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db41d:{NFSU2_TR(0x5db41d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db3f1u);}goto L5db3f1;}}
}
B5db41f:L5db41f:{c.instructions+=1;NFSU2_TR(0x5db41f);
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
B5db421:L5db421:{c.instructions+=6;NFSU2_TR(0x5db421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db422:{NFSU2_TR(0x5db422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db423:{NFSU2_TR(0x5db423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5db424:{NFSU2_TR(0x5db424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db425:{NFSU2_TR(0x5db425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5db426:{NFSU2_TR(0x5db426);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db430:L5db430:{c.instructions+=6;NFSU2_TR(0x5db430);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db431:{NFSU2_TR(0x5db431);
__builtin_memmove((R+4),gp(0x883df8),4);
}
B5db437:{NFSU2_TR(0x5db437);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db439:{NFSU2_TR(0x5db439);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db43a:{NFSU2_TR(0x5db43a);
__builtin_memmove((R+24),(R+4),4);
}
B5db43c:{NFSU2_TR(0x5db43c);
if(r1(R+518)){{goto L5db452;}}
}
B5db43e:L5db43e:{c.instructions+=1;NFSU2_TR(0x5db43e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db443ull));
TAIL_STATIC(0x4903b0u,490);
}
B5db443:L5db443:{c.instructions+=4;NFSU2_TR(0x5db443);
__builtin_memmove((R+0),gp(0x82da88),4);
}
B5db448:{NFSU2_TR(0x5db448);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db449:{NFSU2_TR(0x5db449);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db44a:{NFSU2_TR(0x5db44a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db44full));
TAIL_STATIC(0x43f920u,43f);
}
B5db44f:L5db44f:{c.instructions+=1;NFSU2_TR(0x5db44f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5db452:L5db452:{c.instructions+=5;NFSU2_TR(0x5db452);
__builtin_memmove((R+0),gp(0x883de0),4);
}
B5db457:{NFSU2_TR(0x5db457);
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
B5db459:{NFSU2_TR(0x5db459);
s4(0x883df8,u32(0x0ull));
}
B5db463:{NFSU2_TR(0x5db463);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db464:{NFSU2_TR(0x5db464);
if(r1(R+518)){{goto L5db4aa;}}
}
B5db466:L5db466:{c.instructions+=7;NFSU2_TR(0x5db466);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db468:{NFSU2_TR(0x5db468);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5db46c:{NFSU2_TR(0x5db46c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db46d:{NFSU2_TR(0x5db46d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db46f:{NFSU2_TR(0x5db46f);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db474:{NFSU2_TR(0x5db474);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db47c:{NFSU2_TR(0x5db47c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db481ull));
TAIL_STATIC(0x4022c0u,402);
}
B5db481:L5db481:{c.instructions+=6;NFSU2_TR(0x5db481);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db483:{NFSU2_TR(0x5db483);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5db487:{NFSU2_TR(0x5db487);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db488:{NFSU2_TR(0x5db488);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db48a:{NFSU2_TR(0x5db48a);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db48f:{NFSU2_TR(0x5db48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db494ull));
TAIL_STATIC(0x4022c0u,402);
}
B5db494:L5db494:{c.instructions+=6;NFSU2_TR(0x5db494);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db496:{NFSU2_TR(0x5db496);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5db49a:{NFSU2_TR(0x5db49a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db49b:{NFSU2_TR(0x5db49b);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db49d:{NFSU2_TR(0x5db49d);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db4a2:{NFSU2_TR(0x5db4a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db4a7ull));
TAIL_STATIC(0x4022c0u,402);
}
B5db4a7:L5db4a7:{c.instructions+=1;NFSU2_TR(0x5db4a7);
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
B5db4aa:L5db4aa:{c.instructions+=2;NFSU2_TR(0x5db4aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5db4ab:{NFSU2_TR(0x5db4ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db4b0:L5db4b0:{c.instructions+=15;NFSU2_TR(0x5db4b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db4b1:{NFSU2_TR(0x5db4b1);
__builtin_memmove((R+20),(R+16),4);
}
B5db4b3:{NFSU2_TR(0x5db4b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5db4b6:{NFSU2_TR(0x5db4b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B5db4bc:{NFSU2_TR(0x5db4bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db4bd:{NFSU2_TR(0x5db4bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db4be:{NFSU2_TR(0x5db4be);
__builtin_memmove((R+24),gp(0x89e7a4),4);
}
B5db4c4:{NFSU2_TR(0x5db4c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5db4c6:{NFSU2_TR(0x5db4c6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db4c9:{NFSU2_TR(0x5db4c9);
__builtin_memmove((R+0),(R+518),1);
}
B5db4cc:{NFSU2_TR(0x5db4cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db4cd:{NFSU2_TR(0x5db4cd);
__builtin_memmove((R+28),(R+4),4);
}
B5db4cf:{NFSU2_TR(0x5db4cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5db4d3:{NFSU2_TR(0x5db4d3);
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
B5db4d5:{NFSU2_TR(0x5db4d5);
if(r1(R+518)){{goto L5db590;}}
}
B5db4db:L5db4db:{c.instructions+=6;NFSU2_TR(0x5db4db);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5db4de:{NFSU2_TR(0x5db4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db4e1:{NFSU2_TR(0x5db4e1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5db4e3:{NFSU2_TR(0x5db4e3);
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
B5db4e5:{NFSU2_TR(0x5db4e5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db4e9:{NFSU2_TR(0x5db4e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5db590;}}
}
B5db4ef:L5db4ef:{c.instructions+=1;NFSU2_TR(0x5db4ef);
}
B5db4f0:L5db4f0:{c.instructions+=4;NFSU2_TR(0x5db4f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5db4f3:{NFSU2_TR(0x5db4f3);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5db4f5:{NFSU2_TR(0x5db4f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5db4f9:{NFSU2_TR(0x5db4f9);
if(r1(R+518)){{goto L5db579;}}
}
B5db4fb:L5db4fb:{c.instructions+=4;NFSU2_TR(0x5db4fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5db4ff:{NFSU2_TR(0x5db4ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db500:{NFSU2_TR(0x5db500);
__builtin_memmove((R+4),(R+24),4);
}
B5db502:{NFSU2_TR(0x5db502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db507ull));
TAIL_STATIC(0x5d6240u,5d6);
}
B5db507:L5db507:{c.instructions+=7;NFSU2_TR(0x5db507);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5db50b:{NFSU2_TR(0x5db50b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db50c:{NFSU2_TR(0x5db50c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db514:{NFSU2_TR(0x5db514);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db51c:{NFSU2_TR(0x5db51c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db524:{NFSU2_TR(0x5db524);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db52c:{NFSU2_TR(0x5db52c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db531ull));
TAIL_STATIC(0x43c780u,43c);
}
B5db531:L5db531:{c.instructions+=8;NFSU2_TR(0x5db531);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5db535:{NFSU2_TR(0x5db535);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db536:{NFSU2_TR(0x5db536);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5db53a:{NFSU2_TR(0x5db53a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db53b:{NFSU2_TR(0x5db53b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5db53f:{NFSU2_TR(0x5db53f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db540:{NFSU2_TR(0x5db540);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db548:{NFSU2_TR(0x5db548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db54dull));
TAIL_STATIC(0x43c990u,43c);
}
B5db54d:L5db54d:{c.instructions+=12;NFSU2_TR(0x5db54d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db550:{NFSU2_TR(0x5db550);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db553:{NFSU2_TR(0x5db553);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5db557:{NFSU2_TR(0x5db557);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db55a:{NFSU2_TR(0x5db55a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5db55d:{NFSU2_TR(0x5db55d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5db561:{NFSU2_TR(0x5db561);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db565:{NFSU2_TR(0x5db565);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5db569:{NFSU2_TR(0x5db569);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db56a:{NFSU2_TR(0x5db56a);
__builtin_memmove((R+4),(R+24),4);
}
B5db56c:{NFSU2_TR(0x5db56c);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db574:{NFSU2_TR(0x5db574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db579ull));
TAIL_STATIC(0x5d6320u,5d6);
}
B5db579:L5db579:{c.instructions+=7;NFSU2_TR(0x5db579);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db57d:{NFSU2_TR(0x5db57d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db580:{NFSU2_TR(0x5db580);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5db581:{NFSU2_TR(0x5db581);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B5db584:{NFSU2_TR(0x5db584);
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
B5db586:{NFSU2_TR(0x5db586);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db58a:{NFSU2_TR(0x5db58a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db4f0u);}goto L5db4f0;}}
}
B5db590:L5db590:{c.instructions+=6;NFSU2_TR(0x5db590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db591:{NFSU2_TR(0x5db591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db592:{NFSU2_TR(0x5db592);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db593:{NFSU2_TR(0x5db593);
__builtin_memmove((R+16),(R+20),4);
}
B5db595:{NFSU2_TR(0x5db595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5db596:{NFSU2_TR(0x5db596);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db5a0:L5db5a0:{c.instructions+=3;NFSU2_TR(0x5db5a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db5a4:{NFSU2_TR(0x5db5a4);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x80034150ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x80034150ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x80034150ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5db5aa:{NFSU2_TR(0x5db5aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5db607;}}
}
B5db5ac:L5db5ac:{c.instructions+=18;NFSU2_TR(0x5db5ac);
w4(R+0,u32(0x883e70ull));
}
B5db5b1:{NFSU2_TR(0x5db5b1);
__builtin_memmove(gp(0x883e70),(R+0),4);
}
B5db5b6:{NFSU2_TR(0x5db5b6);
__builtin_memmove(gp(0x883e74),(R+0),4);
}
B5db5bb:{NFSU2_TR(0x5db5bb);
w4(R+0,u32(0x883e78ull));
}
B5db5c0:{NFSU2_TR(0x5db5c0);
__builtin_memmove(gp(0x883e78),(R+0),4);
}
B5db5c5:{NFSU2_TR(0x5db5c5);
__builtin_memmove(gp(0x883e7c),(R+0),4);
}
B5db5ca:{NFSU2_TR(0x5db5ca);
w4(R+0,u32(0x883e80ull));
}
B5db5cf:{NFSU2_TR(0x5db5cf);
__builtin_memmove(gp(0x883e80),(R+0),4);
}
B5db5d4:{NFSU2_TR(0x5db5d4);
__builtin_memmove(gp(0x883e84),(R+0),4);
}
B5db5d9:{NFSU2_TR(0x5db5d9);
w4(R+0,u32(0x883e98ull));
}
B5db5de:{NFSU2_TR(0x5db5de);
__builtin_memmove(gp(0x883e98),(R+0),4);
}
B5db5e3:{NFSU2_TR(0x5db5e3);
__builtin_memmove(gp(0x883e9c),(R+0),4);
}
B5db5e8:{NFSU2_TR(0x5db5e8);
w4(R+0,u32(0x883e90ull));
}
B5db5ed:{NFSU2_TR(0x5db5ed);
__builtin_memmove(gp(0x883e90),(R+0),4);
}
B5db5f2:{NFSU2_TR(0x5db5f2);
__builtin_memmove(gp(0x883e94),(R+0),4);
}
B5db5f7:{NFSU2_TR(0x5db5f7);
s4(0x883ebc,u32(0x0ull));
}
B5db601:{NFSU2_TR(0x5db601);
w4(R+0,u32(0x1ull));
}
B5db606:{NFSU2_TR(0x5db606);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db607:L5db607:{c.instructions+=2;NFSU2_TR(0x5db607);
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
B5db609:{NFSU2_TR(0x5db609);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db610:L5db610:{c.instructions+=12;NFSU2_TR(0x5db610);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db611:{NFSU2_TR(0x5db611);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db612:{NFSU2_TR(0x5db612);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db613:{NFSU2_TR(0x5db613);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5db617:{NFSU2_TR(0x5db617);
__builtin_memmove((R+0),(R+28),4);
}
B5db619:{NFSU2_TR(0x5db619);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5db61a:{NFSU2_TR(0x5db61a);
w4(R+24,u32(0x64ull));
}
B5db61f:{NFSU2_TR(0x5db61f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5db61f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5db61f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5db621:{NFSU2_TR(0x5db621);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5db623:{NFSU2_TR(0x5db623);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5db625:{NFSU2_TR(0x5db625);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5aull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5aull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5db627:{NFSU2_TR(0x5db627);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5db64b;}}
}
B5db629:L5db629:{c.instructions+=2;NFSU2_TR(0x5db629);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5db62b:{NFSU2_TR(0x5db62b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5db64b;}}
}
B5db62d:L5db62d:{c.instructions+=4;NFSU2_TR(0x5db62d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5db630:{NFSU2_TR(0x5db630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5db632:{NFSU2_TR(0x5db632);
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
B5db634:{NFSU2_TR(0x5db634);
if(r1(R+518)){{goto L5db64b;}}
}
B5db636:L5db636:{c.instructions+=2;NFSU2_TR(0x5db636);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5db63a:{NFSU2_TR(0x5db63a);
__builtin_memmove((R+12),(R+12),4);
}
B5db640:L5db640:{c.instructions+=2;NFSU2_TR(0x5db640);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5db643:{NFSU2_TR(0x5db643);
if(r1(R+518)){{goto L5db653;}}
}
B5db645:L5db645:{c.instructions+=3;NFSU2_TR(0x5db645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5db647:{NFSU2_TR(0x5db647);
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
B5db649:{NFSU2_TR(0x5db649);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db640u);}goto L5db640;}}
}
B5db64b:L5db64b:{c.instructions+=1;NFSU2_TR(0x5db64b);
__builtin_memmove((R+0),(R+12),1);
}
B5db64d:L5db64d:{c.instructions+=4;NFSU2_TR(0x5db64d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db64e:{NFSU2_TR(0x5db64e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db64f:{NFSU2_TR(0x5db64f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db650:{NFSU2_TR(0x5db650);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db653:L5db653:{c.instructions+=5;NFSU2_TR(0x5db653);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5db656:{NFSU2_TR(0x5db656);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5db658:{NFSU2_TR(0x5db658);
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
B5db65a:{NFSU2_TR(0x5db65a);
w1(R+0,u8(0x1ull));
}
B5db65c:{NFSU2_TR(0x5db65c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db64du);}goto L5db64d;}}
}
B5db65e:L5db65e:{c.instructions+=1;NFSU2_TR(0x5db65e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5db661:L5db661:{c.instructions+=3;NFSU2_TR(0x5db661);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B5db664:{NFSU2_TR(0x5db664);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db666:{NFSU2_TR(0x5db666);
if(r1(R+518)){{goto L5db676;}}
}
B5db668:L5db668:{c.instructions+=4;NFSU2_TR(0x5db668);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5db669:{NFSU2_TR(0x5db669);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5db66c:{NFSU2_TR(0x5db66c);
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
B5db66e:{NFSU2_TR(0x5db66e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db661u);}goto L5db661;}}
}
B5db670:L5db670:{c.instructions+=4;NFSU2_TR(0x5db670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db671:{NFSU2_TR(0x5db671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db672:{NFSU2_TR(0x5db672);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db673:{NFSU2_TR(0x5db673);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db676:L5db676:{c.instructions+=5;NFSU2_TR(0x5db676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db677:{NFSU2_TR(0x5db677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db678:{NFSU2_TR(0x5db678);
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
B5db67a:{NFSU2_TR(0x5db67a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db67b:{NFSU2_TR(0x5db67b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db680:L5db680:{c.instructions+=7;NFSU2_TR(0x5db680);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db681:{NFSU2_TR(0x5db681);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5db685:{NFSU2_TR(0x5db685);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db686:{NFSU2_TR(0x5db686);
__builtin_memmove((R+24),(R+4),4);
}
B5db688:{NFSU2_TR(0x5db688);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5db68c:{NFSU2_TR(0x5db68c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db68e:{NFSU2_TR(0x5db68e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5db6ca;}}
}
B5db690:L5db690:{c.instructions+=12;NFSU2_TR(0x5db690);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db696:{NFSU2_TR(0x5db696);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6414ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5db69c:{NFSU2_TR(0x5db69c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5db69d:{NFSU2_TR(0x5db69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db6a3:{NFSU2_TR(0x5db6a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5db6a5:{NFSU2_TR(0x5db6a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db6a8:{NFSU2_TR(0x5db6a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5db6aa:{NFSU2_TR(0x5db6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db6ad:{NFSU2_TR(0x5db6ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db6ae:{NFSU2_TR(0x5db6ae);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5db6b0:{NFSU2_TR(0x5db6b0);
w4(R+4,u32(0x7ull));
}
B5db6b5:{NFSU2_TR(0x5db6b5);
__builtin_memmove((R+28),(R+8),4);
}
B5db6b7:L5db6b7:{c.instructions+=1;NFSU2_TR(0x5db6b7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5db6b9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db6b7u);}goto L5db6b7;}
}
B5db6b9:L5db6b9:{c.instructions+=9;NFSU2_TR(0x5db6b9);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5db6bd:{NFSU2_TR(0x5db6bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5db6bf:{NFSU2_TR(0x5db6bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db6c0:{NFSU2_TR(0x5db6c0);
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
B5db6c1:{NFSU2_TR(0x5db6c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db6c2:{NFSU2_TR(0x5db6c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5db6c4:{NFSU2_TR(0x5db6c4);
__builtin_memmove((R+0),(R+8),4);
}
B5db6c6:{NFSU2_TR(0x5db6c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db6c7:{NFSU2_TR(0x5db6c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db6ca:L5db6ca:{c.instructions+=6;NFSU2_TR(0x5db6ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5db6cc:{NFSU2_TR(0x5db6cc);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5db6cd:{NFSU2_TR(0x5db6cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db6ce:{NFSU2_TR(0x5db6ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5db6d0:{NFSU2_TR(0x5db6d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db6d1:{NFSU2_TR(0x5db6d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db6e0:L5db6e0:{c.instructions+=5;NFSU2_TR(0x5db6e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db6e1:{NFSU2_TR(0x5db6e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5db6e5:{NFSU2_TR(0x5db6e5);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5db6e9:{NFSU2_TR(0x5db6e9);
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
B5db6eb:{NFSU2_TR(0x5db6eb);
if(r1(R+518)){{goto L5db714;}}
}
B5db6ed:L5db6ed:{c.instructions+=2;NFSU2_TR(0x5db6ed);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
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
B5db6ef:{NFSU2_TR(0x5db6ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5db714;}}
}
B5db6f1:L5db6f1:{c.instructions+=10;NFSU2_TR(0x5db6f1);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B5db6f7:{NFSU2_TR(0x5db6f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6414ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5db6fd:{NFSU2_TR(0x5db6fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db6fe:{NFSU2_TR(0x5db6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5db701:{NFSU2_TR(0x5db701);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5db703:{NFSU2_TR(0x5db703);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db706:{NFSU2_TR(0x5db706);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db709:{NFSU2_TR(0x5db709);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5db70b:{NFSU2_TR(0x5db70b);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B5db713:{NFSU2_TR(0x5db713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db714:L5db714:{c.instructions+=2;NFSU2_TR(0x5db714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db715:{NFSU2_TR(0x5db715);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db720:L5db720:{c.instructions+=5;NFSU2_TR(0x5db720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db721:{NFSU2_TR(0x5db721);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db722:{NFSU2_TR(0x5db722);
__builtin_memmove((R+28),(R+4),4);
}
B5db724:{NFSU2_TR(0x5db724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5db726:{NFSU2_TR(0x5db726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db72bull));
TAIL_STATIC(0x502fd0u,502);
}
B5db72b:L5db72b:{c.instructions+=3;NFSU2_TR(0x5db72b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db72d:{NFSU2_TR(0x5db72d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5db731:{NFSU2_TR(0x5db731);
if(r1(R+518)){{goto L5db741;}}
}
B5db733:L5db733:{c.instructions+=3;NFSU2_TR(0x5db733);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5db737:{NFSU2_TR(0x5db737);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5db739:{NFSU2_TR(0x5db739);
if(r1(R+518)){{goto L5db765;}}
}
B5db73b:L5db73b:{c.instructions+=3;NFSU2_TR(0x5db73b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5db73d:{NFSU2_TR(0x5db73d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db73f:{NFSU2_TR(0x5db73f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db733u);}goto L5db733;}}
}
B5db741:L5db741:{c.instructions+=4;NFSU2_TR(0x5db741);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db744:{NFSU2_TR(0x5db744);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5db747:{NFSU2_TR(0x5db747);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db749:{NFSU2_TR(0x5db749);
if(r1(R+518)){{goto L5db75e;}}
}
B5db74b:L5db74b:{c.instructions+=1;NFSU2_TR(0x5db74b);
{goto L5db750;}
}
B5db750:L5db750:{c.instructions+=3;NFSU2_TR(0x5db750);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5db754:{NFSU2_TR(0x5db754);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5db756:{NFSU2_TR(0x5db756);
if(r1(R+518)){{goto L5db760;}}
}
B5db758:L5db758:{c.instructions+=3;NFSU2_TR(0x5db758);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5db75a:{NFSU2_TR(0x5db75a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db75c:{NFSU2_TR(0x5db75c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db750u);}goto L5db750;}}
}
B5db75e:L5db75e:{c.instructions+=1;NFSU2_TR(0x5db75e);
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
B5db760:L5db760:{c.instructions+=3;NFSU2_TR(0x5db760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db761:{NFSU2_TR(0x5db761);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db762:{NFSU2_TR(0x5db762);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db765:L5db765:{c.instructions+=4;NFSU2_TR(0x5db765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db766:{NFSU2_TR(0x5db766);
__builtin_memmove((R+0),(R+24),4);
}
B5db768:{NFSU2_TR(0x5db768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db769:{NFSU2_TR(0x5db769);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db770:L5db770:{c.instructions+=9;NFSU2_TR(0x5db770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5db773:{NFSU2_TR(0x5db773);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db774:{NFSU2_TR(0x5db774);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db775:{NFSU2_TR(0x5db775);
__builtin_memmove((R+20),(R+4),4);
}
B5db777:{NFSU2_TR(0x5db777);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5db77a:{NFSU2_TR(0x5db77a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db77b:{NFSU2_TR(0x5db77b);
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
B5db77d:{NFSU2_TR(0x5db77d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x4b18967full));
s4(u32(r4(U+0)),r4(U+4));
}
B5db785:{NFSU2_TR(0x5db785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db78aull));
TAIL_STATIC(0x502fd0u,502);
}
B5db78a:L5db78a:{c.instructions+=3;NFSU2_TR(0x5db78a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db78c:{NFSU2_TR(0x5db78c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db790:{NFSU2_TR(0x5db790);
if(r1(R+518)){{goto L5db836;}}
}
B5db796:L5db796:{c.instructions+=3;NFSU2_TR(0x5db796);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db797:{NFSU2_TR(0x5db797);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5db79b:{NFSU2_TR(0x5db79b);
{goto L5db7a0;}
}
B5db7a0:L5db7a0:{c.instructions+=7;NFSU2_TR(0x5db7a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db7a2:{NFSU2_TR(0x5db7a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db7a3:{NFSU2_TR(0x5db7a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5db7a6:{NFSU2_TR(0x5db7a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db7a7:{NFSU2_TR(0x5db7a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5db7aa:{NFSU2_TR(0x5db7aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db7ab:{NFSU2_TR(0x5db7ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db7b0ull));
TAIL_STATIC(0x43d410u,43d);
}
B5db7b0:L5db7b0:{c.instructions+=3;NFSU2_TR(0x5db7b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5db7b3:{NFSU2_TR(0x5db7b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db7b5:{NFSU2_TR(0x5db7b5);
if(r1(R+518)){{goto L5db7ce;}}
}
B5db7b7:L5db7b7:{c.instructions+=6;NFSU2_TR(0x5db7b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5db7bb:{NFSU2_TR(0x5db7bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db7bc:{NFSU2_TR(0x5db7bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5db7bf:{NFSU2_TR(0x5db7bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db7c0:{NFSU2_TR(0x5db7c0);
__builtin_memmove((R+0),(R+12),4);
}
B5db7c2:{NFSU2_TR(0x5db7c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db7c7ull));
TAIL_STATIC(0x5d6dd0u,5d6);
}
B5db7c7:L5db7c7:{c.instructions+=3;NFSU2_TR(0x5db7c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5db7ca:{NFSU2_TR(0x5db7ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5db7cc:{NFSU2_TR(0x5db7cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5db813;}}
}
B5db7ce:L5db7ce:{c.instructions+=5;NFSU2_TR(0x5db7ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db7d2:{NFSU2_TR(0x5db7d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db7d3:{NFSU2_TR(0x5db7d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db7d4:{NFSU2_TR(0x5db7d4);
__builtin_memmove((R+4),(R+24),4);
}
B5db7d6:{NFSU2_TR(0x5db7d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db7dbull));
TAIL_STATIC(0x5d70d0u,5d7);
}
B5db7db:L5db7db:{c.instructions+=2;NFSU2_TR(0x5db7db);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db7dd:{NFSU2_TR(0x5db7dd);
if(r1(R+518)){{goto L5db7ff;}}
}
B5db7df:L5db7df:{c.instructions+=4;NFSU2_TR(0x5db7df);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5db7e3:{NFSU2_TR(0x5db7e3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5db7e5:{NFSU2_TR(0x5db7e5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5db7e8:{NFSU2_TR(0x5db7e8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5db7ff;}}
}
B5db7ea:L5db7ea:{c.instructions+=4;NFSU2_TR(0x5db7ea);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5db7ee:{NFSU2_TR(0x5db7ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5db7f0:{NFSU2_TR(0x5db7f0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5db7f3:{NFSU2_TR(0x5db7f3);
if(r1(R+514)){{goto L5db807;}}
}
B5db7f5:L5db7f5:{c.instructions+=3;NFSU2_TR(0x5db7f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5db7f9:{NFSU2_TR(0x5db7f9);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(R+8),r2(U+6)));
w2(U+8,u16(u32(r2(R+8))-u32(r2(U+6))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
}
B5db7fd:{NFSU2_TR(0x5db7fd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5db807;}}
}
B5db7ff:L5db7ff:{c.instructions+=3;NFSU2_TR(0x5db7ff);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5db803:{NFSU2_TR(0x5db803);
__builtin_memmove((R+28),(R+24),4);
}
B5db805:{NFSU2_TR(0x5db805);
{goto L5db809;}
}
B5db807:L5db807:{c.instructions+=1;NFSU2_TR(0x5db807);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5db809:L5db809:{c.instructions+=3;NFSU2_TR(0x5db809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5db80b:{NFSU2_TR(0x5db80b);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5db80f:{NFSU2_TR(0x5db80f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db7a0u);}goto L5db7a0;}}
}
B5db811:L5db811:{c.instructions+=1;NFSU2_TR(0x5db811);
{goto L5db835;}
}
B5db813:L5db813:{c.instructions+=11;NFSU2_TR(0x5db813);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5db815:{NFSU2_TR(0x5db815);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db818:{NFSU2_TR(0x5db818);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5db81a:{NFSU2_TR(0x5db81a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db81d:{NFSU2_TR(0x5db81d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5db820:{NFSU2_TR(0x5db820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5db823:{NFSU2_TR(0x5db823);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db826:{NFSU2_TR(0x5db826);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db82e:{NFSU2_TR(0x5db82e);
__builtin_memmove((R+28),(R+24),4);
}
B5db830:{NFSU2_TR(0x5db830);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db833:{NFSU2_TR(0x5db833);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5db835:L5db835:{c.instructions+=1;NFSU2_TR(0x5db835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db836:L5db836:{c.instructions+=3;NFSU2_TR(0x5db836);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db83a:{NFSU2_TR(0x5db83a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db83c:{NFSU2_TR(0x5db83c);
if(r1(R+518)){{goto L5db844;}}
}
B5db83e:L5db83e:{c.instructions+=2;NFSU2_TR(0x5db83e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db842:{NFSU2_TR(0x5db842);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5db844:L5db844:{c.instructions+=6;NFSU2_TR(0x5db844);
__builtin_memmove((R+0),(R+28),4);
}
B5db846:{NFSU2_TR(0x5db846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db847:{NFSU2_TR(0x5db847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db848:{NFSU2_TR(0x5db848);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5db849:{NFSU2_TR(0x5db849);
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
B5db84c:{NFSU2_TR(0x5db84c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db850:L5db850:{c.instructions+=7;NFSU2_TR(0x5db850);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db851:{NFSU2_TR(0x5db851);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db852:{NFSU2_TR(0x5db852);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db853:{NFSU2_TR(0x5db853);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db854:{NFSU2_TR(0x5db854);
__builtin_memmove((R+28),(R+4),4);
}
B5db856:{NFSU2_TR(0x5db856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5db858:{NFSU2_TR(0x5db858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db85dull));
TAIL_STATIC(0x502fd0u,502);
}
B5db85d:L5db85d:{c.instructions+=4;NFSU2_TR(0x5db85d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5db861:{NFSU2_TR(0x5db861);
__builtin_memmove((R+20),(R+0),4);
}
B5db863:{NFSU2_TR(0x5db863);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db865:{NFSU2_TR(0x5db865);
if(r1(R+518)){{goto L5db89b;}}
}
B5db867:L5db867:{c.instructions+=7;NFSU2_TR(0x5db867);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db869:{NFSU2_TR(0x5db869);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db86a:{NFSU2_TR(0x5db86a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5db86d:{NFSU2_TR(0x5db86d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db86e:{NFSU2_TR(0x5db86e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5db871:{NFSU2_TR(0x5db871);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db872:{NFSU2_TR(0x5db872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db877ull));
TAIL_STATIC(0x43d410u,43d);
}
B5db877:L5db877:{c.instructions+=3;NFSU2_TR(0x5db877);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5db87a:{NFSU2_TR(0x5db87a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db87c:{NFSU2_TR(0x5db87c);
if(r1(R+518)){{goto L5db895;}}
}
B5db87e:L5db87e:{c.instructions+=6;NFSU2_TR(0x5db87e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5db882:{NFSU2_TR(0x5db882);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db883:{NFSU2_TR(0x5db883);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5db886:{NFSU2_TR(0x5db886);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db887:{NFSU2_TR(0x5db887);
__builtin_memmove((R+0),(R+12),4);
}
B5db889:{NFSU2_TR(0x5db889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db88eull));
TAIL_STATIC(0x5d6dd0u,5d6);
}
B5db88e:L5db88e:{c.instructions+=3;NFSU2_TR(0x5db88e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5db891:{NFSU2_TR(0x5db891);
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
B5db893:{NFSU2_TR(0x5db893);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5db8c4;}}
}
B5db895:L5db895:{c.instructions+=3;NFSU2_TR(0x5db895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5db897:{NFSU2_TR(0x5db897);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5db899:{NFSU2_TR(0x5db899);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db867u);}goto L5db867;}}
}
B5db89b:L5db89b:{c.instructions+=5;NFSU2_TR(0x5db89b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5db89f:{NFSU2_TR(0x5db89f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db8a0:{NFSU2_TR(0x5db8a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db8a1:{NFSU2_TR(0x5db8a1);
__builtin_memmove((R+4),(R+28),4);
}
B5db8a3:{NFSU2_TR(0x5db8a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db8a8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db770u);}goto L5db770;}
}
B5db8a8:L5db8a8:{c.instructions+=6;NFSU2_TR(0x5db8a8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db8ac:{NFSU2_TR(0x5db8ac);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5db8b2:{NFSU2_TR(0x5db8b2);
__builtin_memmove((R+4),(R+0),4);
}
B5db8b4:{NFSU2_TR(0x5db8b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5db8b6:{NFSU2_TR(0x5db8b6);
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
B5db8b9:{NFSU2_TR(0x5db8b9);
if(r1(R+514)){{goto L5db8e3;}}
}
B5db8bb:L5db8bb:{c.instructions+=6;NFSU2_TR(0x5db8bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db8bc:{NFSU2_TR(0x5db8bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db8bd:{NFSU2_TR(0x5db8bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5db8be:{NFSU2_TR(0x5db8be);
__builtin_memmove((R+0),(R+4),4);
}
B5db8c0:{NFSU2_TR(0x5db8c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db8c1:{NFSU2_TR(0x5db8c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db8c4:L5db8c4:{c.instructions+=15;NFSU2_TR(0x5db8c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5db8c6:{NFSU2_TR(0x5db8c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db8c9:{NFSU2_TR(0x5db8c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5db8cb:{NFSU2_TR(0x5db8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db8ce:{NFSU2_TR(0x5db8ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5db8d0:{NFSU2_TR(0x5db8d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5db8d2:{NFSU2_TR(0x5db8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db8d5:{NFSU2_TR(0x5db8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db8d8:{NFSU2_TR(0x5db8d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db8d9:{NFSU2_TR(0x5db8d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5db8db:{NFSU2_TR(0x5db8db);
__builtin_memmove((R+0),(R+24),4);
}
B5db8dd:{NFSU2_TR(0x5db8dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db8de:{NFSU2_TR(0x5db8de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5db8df:{NFSU2_TR(0x5db8df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db8e0:{NFSU2_TR(0x5db8e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db8e3:L5db8e3:{c.instructions+=6;NFSU2_TR(0x5db8e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5db8e4:{NFSU2_TR(0x5db8e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db8e5:{NFSU2_TR(0x5db8e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5db8e6:{NFSU2_TR(0x5db8e6);
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
B5db8e8:{NFSU2_TR(0x5db8e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5db8e9:{NFSU2_TR(0x5db8e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db8f0:L5db8f0:{c.instructions+=6;NFSU2_TR(0x5db8f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db8f4:{NFSU2_TR(0x5db8f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5db8f6:{NFSU2_TR(0x5db8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db8f9:{NFSU2_TR(0x5db8f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5db8fb:{NFSU2_TR(0x5db8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db8fe:{NFSU2_TR(0x5db8fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5db900:L5db900:{c.instructions+=36;NFSU2_TR(0x5db900);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db901:{NFSU2_TR(0x5db901);
__builtin_memmove((R+20),(R+16),4);
}
B5db903:{NFSU2_TR(0x5db903);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5db906:{NFSU2_TR(0x5db906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B5db909:{NFSU2_TR(0x5db909);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db90a:{NFSU2_TR(0x5db90a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db90b:{NFSU2_TR(0x5db90b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db90c:{NFSU2_TR(0x5db90c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5db90f:{NFSU2_TR(0x5db90f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db912:{NFSU2_TR(0x5db912);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db915:{NFSU2_TR(0x5db915);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5db918:{NFSU2_TR(0x5db918);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db91b:{NFSU2_TR(0x5db91b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5db91d:{NFSU2_TR(0x5db91d);
__builtin_memmove(gp(0x88eaf0),(R+0),4);
}
B5db922:{NFSU2_TR(0x5db922);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5db924:{NFSU2_TR(0x5db924);
{u32 ea_=u32(u32(8973044u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5db92a:{NFSU2_TR(0x5db92a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5db92e:{NFSU2_TR(0x5db92e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db92f:{NFSU2_TR(0x5db92f);
{u32 ea_=u32(u32(8973048u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5db935:{NFSU2_TR(0x5db935);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db938:{NFSU2_TR(0x5db938);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db93b:{NFSU2_TR(0x5db93b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db93e:{NFSU2_TR(0x5db93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5db941:{NFSU2_TR(0x5db941);
w1(R+512,carry<u32>(r4(R+0),u32(0x50ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B5db944:{NFSU2_TR(0x5db944);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5db948:{NFSU2_TR(0x5db948);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db94b:{NFSU2_TR(0x5db94b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5db94f:{NFSU2_TR(0x5db94f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db950:{NFSU2_TR(0x5db950);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5db954:{NFSU2_TR(0x5db954);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db955:{NFSU2_TR(0x5db955);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db959:{NFSU2_TR(0x5db959);
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
B5db95a:{NFSU2_TR(0x5db95a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db962:{NFSU2_TR(0x5db962);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db96a:{NFSU2_TR(0x5db96a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5db972:{NFSU2_TR(0x5db972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db977ull));
TAIL_STATIC(0x5f0c50u,5f0);
}
B5db977:L5db977:{c.instructions+=6;NFSU2_TR(0x5db977);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5db97a:{NFSU2_TR(0x5db97a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5db97d:{NFSU2_TR(0x5db97d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88a2ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db983:{NFSU2_TR(0x5db983);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5db986:{NFSU2_TR(0x5db986);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5db988:{NFSU2_TR(0x5db988);
if(r1(R+518)){{goto L5db9b3;}}
}
B5db98a:L5db98a:{c.instructions+=8;NFSU2_TR(0x5db98a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db98e:{NFSU2_TR(0x5db98e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5db992:{NFSU2_TR(0x5db992);
u8 U[4];
w4(U+0,u32(0x41a00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db997:{NFSU2_TR(0x5db997);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db998:{NFSU2_TR(0x5db998);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88a2c0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5db99e:{NFSU2_TR(0x5db99e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db99f:{NFSU2_TR(0x5db99f);
__builtin_memmove((R+4),(R+24),4);
}
B5db9a1:{NFSU2_TR(0x5db9a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db9a6ull));
TAIL_STATIC(0x5fa660u,5fa);
}
B5db9a6:L5db9a6:{c.instructions+=3;NFSU2_TR(0x5db9a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db9a8:{NFSU2_TR(0x5db9a8);
__builtin_memmove((R+4),(R+24),4);
}
B5db9aa:{NFSU2_TR(0x5db9aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db9afull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5db9af:L5db9af:{c.instructions+=1;NFSU2_TR(0x5db9af);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5db9b3:L5db9b3:{c.instructions+=3;NFSU2_TR(0x5db9b3);
u8 U[4];
w4(U+0,u32(0x5d74a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5db9b8:{NFSU2_TR(0x5db9b8);
w4(R+4,u32(0x88f1f8ull));
}
B5db9bd:{NFSU2_TR(0x5db9bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db9c2ull));
TAIL_STATIC(0x43e650u,43e);
}
B5db9c2:L5db9c2:{c.instructions+=3;NFSU2_TR(0x5db9c2);
__builtin_memmove((R+24),gp(0x88f1f8),4);
}
B5db9c8:{NFSU2_TR(0x5db9c8);
w4(R+4,u32(0x88f1f8ull));
}
B5db9cd:{NFSU2_TR(0x5db9cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5db9d2ull));
TAIL_STATIC(0x502fd0u,502);
}
B5db9d2:L5db9d2:{c.instructions+=3;NFSU2_TR(0x5db9d2);
__builtin_memmove((R+12),(R+0),4);
}
B5db9d4:{NFSU2_TR(0x5db9d4);
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
B5db9d6:{NFSU2_TR(0x5db9d6);
if(r1(R+518)){{goto L5dbaeb;}}
}
B5db9dc:L5db9dc:{c.instructions+=1;NFSU2_TR(0x5db9dc);
__builtin_memmove((R+16),(R+16),4);
}
B5db9e0:L5db9e0:{c.instructions+=31;NFSU2_TR(0x5db9e0);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db9e3:{NFSU2_TR(0x5db9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5db9e6:{NFSU2_TR(0x5db9e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5db9ea:{NFSU2_TR(0x5db9ea);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5db9ee:{NFSU2_TR(0x5db9ee);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db9f1:{NFSU2_TR(0x5db9f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5db9f5:{NFSU2_TR(0x5db9f5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5db9f9:{NFSU2_TR(0x5db9f9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5db9fd:{NFSU2_TR(0x5db9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dba00:{NFSU2_TR(0x5dba00);
{u32 ea_=u32(u32(8973040u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dba06:{NFSU2_TR(0x5dba06);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5dba0a:{NFSU2_TR(0x5dba0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dba0b:{NFSU2_TR(0x5dba0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5dba0f:{NFSU2_TR(0x5dba0f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dba13:{NFSU2_TR(0x5dba13);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dba17:{NFSU2_TR(0x5dba17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dba18:{NFSU2_TR(0x5dba18);
{u32 ea_=u32(u32(8973044u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dba1e:{NFSU2_TR(0x5dba1e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dba22:{NFSU2_TR(0x5dba22);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dba26:{NFSU2_TR(0x5dba26);
{u32 ea_=u32(u32(8973048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dba2c:{NFSU2_TR(0x5dba2c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5dba30:{NFSU2_TR(0x5dba30);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dba34:{NFSU2_TR(0x5dba34);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dba38:{NFSU2_TR(0x5dba38);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dba3c:{NFSU2_TR(0x5dba3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dba3e:{NFSU2_TR(0x5dba3e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dba42:{NFSU2_TR(0x5dba42);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dba46:{NFSU2_TR(0x5dba46);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dba48:{NFSU2_TR(0x5dba48);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5dba4a:{NFSU2_TR(0x5dba4a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dba4e:{NFSU2_TR(0x5dba4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dba53ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5dba53:L5dba53:{c.instructions+=7;NFSU2_TR(0x5dba53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dba56:{NFSU2_TR(0x5dba56);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dba5a:{NFSU2_TR(0x5dba5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dba5b:{NFSU2_TR(0x5dba5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5dba5f:{NFSU2_TR(0x5dba5f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dba60:{NFSU2_TR(0x5dba60);
__builtin_memmove((R+4),(R+28),4);
}
B5dba62:{NFSU2_TR(0x5dba62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dba67ull));
TAIL_STATIC(0x5bc4a0u,5bc);
}
B5dba67:L5dba67:{c.instructions+=17;NFSU2_TR(0x5dba67);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dba6b:{NFSU2_TR(0x5dba6b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dba6f:{NFSU2_TR(0x5dba6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dba73:{NFSU2_TR(0x5dba73);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dba77:{NFSU2_TR(0x5dba77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dba7a:{NFSU2_TR(0x5dba7a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dba7e:{NFSU2_TR(0x5dba7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dba82:{NFSU2_TR(0x5dba82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dba85:{NFSU2_TR(0x5dba85);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dba87:{NFSU2_TR(0x5dba87);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dba8b:{NFSU2_TR(0x5dba8b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dba8f:{NFSU2_TR(0x5dba8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dba91:{NFSU2_TR(0x5dba91);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5dba94:{NFSU2_TR(0x5dba94);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dba9a:{NFSU2_TR(0x5dba9a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dba9c:{NFSU2_TR(0x5dba9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dba9f:{NFSU2_TR(0x5dba9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbae1;}}
}
B5dbaa1:L5dbaa1:{c.instructions+=5;NFSU2_TR(0x5dbaa1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbaa5:{NFSU2_TR(0x5dbaa5);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dbaa8:{NFSU2_TR(0x5dbaa8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dbaaa:{NFSU2_TR(0x5dbaaa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dbaad:{NFSU2_TR(0x5dbaad);
if(r1(R+514)){{goto L5dbab8;}}
}
B5dbaaf:L5dbaaf:{c.instructions+=2;NFSU2_TR(0x5dbaaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dbab6:{NFSU2_TR(0x5dbab6);
{goto L5dbae1;}
}
B5dbab8:L5dbab8:{c.instructions+=5;NFSU2_TR(0x5dbab8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbabc:{NFSU2_TR(0x5dbabc);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dbabf:{NFSU2_TR(0x5dbabf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dbac1:{NFSU2_TR(0x5dbac1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dbac4:{NFSU2_TR(0x5dbac4);
if(r1(R+514)){{goto L5dbada;}}
}
B5dbac6:L5dbac6:{c.instructions+=7;NFSU2_TR(0x5dbac6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbaca:{NFSU2_TR(0x5dbaca);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dbacd:{NFSU2_TR(0x5dbacd);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbad0:{NFSU2_TR(0x5dbad0);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dbad3:{NFSU2_TR(0x5dbad3);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5dbad5:{NFSU2_TR(0x5dbad5);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dbad8:{NFSU2_TR(0x5dbad8);
{goto L5dbae1;}
}
B5dbada:L5dbada:{c.instructions+=1;NFSU2_TR(0x5dbada);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dbae1:L5dbae1:{c.instructions+=3;NFSU2_TR(0x5dbae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5dbae3:{NFSU2_TR(0x5dbae3);
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
B5dbae5:{NFSU2_TR(0x5dbae5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db9e0u);}goto L5db9e0;}}
}
B5dbaeb:L5dbaeb:{c.instructions+=6;NFSU2_TR(0x5dbaeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dbaec:{NFSU2_TR(0x5dbaec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dbaed:{NFSU2_TR(0x5dbaed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dbaee:{NFSU2_TR(0x5dbaee);
__builtin_memmove((R+16),(R+20),4);
}
B5dbaf0:{NFSU2_TR(0x5dbaf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dbaf1:{NFSU2_TR(0x5dbaf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dbb00:L5dbb00:{c.instructions+=9;NFSU2_TR(0x5dbb00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbb01:{NFSU2_TR(0x5dbb01);
__builtin_memmove((R+20),(R+16),4);
}
B5dbb03:{NFSU2_TR(0x5dbb03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5dbb06:{NFSU2_TR(0x5dbb06);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x24ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dbb09:{NFSU2_TR(0x5dbb09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbb0a:{NFSU2_TR(0x5dbb0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbb0b:{NFSU2_TR(0x5dbb0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbb0c:{NFSU2_TR(0x5dbb0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dbb14:{NFSU2_TR(0x5dbb14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbb19ull));
TAIL_STATIC(0x5b98a0u,5b9);
}
B5dbb19:L5dbb19:{c.instructions+=2;NFSU2_TR(0x5dbb19);
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
B5dbb1c:{NFSU2_TR(0x5dbb1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbb3a;}}
}
B5dbb1e:L5dbb1e:{c.instructions+=3;NFSU2_TR(0x5dbb1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dbb21:{NFSU2_TR(0x5dbb21);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5dbb25:{NFSU2_TR(0x5dbb25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbb3a;}}
}
B5dbb27:L5dbb27:{c.instructions+=1;NFSU2_TR(0x5dbb27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbb2cull));
TAIL_STATIC(0x5bc200u,5bc);
}
B5dbb2c:L5dbb2c:{c.instructions+=4;NFSU2_TR(0x5dbb2c);
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
B5dbb2e:{NFSU2_TR(0x5dbb2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dbb32:{NFSU2_TR(0x5dbb32);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dbb36:{NFSU2_TR(0x5dbb36);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dbb3a:L5dbb3a:{c.instructions+=7;NFSU2_TR(0x5dbb3a);
__builtin_memmove((R+24),gp(0x88f1f8),4);
}
B5dbb40:{NFSU2_TR(0x5dbb40);
w4(R+4,u32(0x88f1f8ull));
}
B5dbb45:{NFSU2_TR(0x5dbb45);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dbb4d:{NFSU2_TR(0x5dbb4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dbb55:{NFSU2_TR(0x5dbb55);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dbb5d:{NFSU2_TR(0x5dbb5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dbb65:{NFSU2_TR(0x5dbb65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbb6aull));
TAIL_STATIC(0x502fd0u,502);
}
B5dbb6a:L5dbb6a:{c.instructions+=5;NFSU2_TR(0x5dbb6a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbb6e:{NFSU2_TR(0x5dbb6e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dbb70:{NFSU2_TR(0x5dbb70);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbb74:{NFSU2_TR(0x5dbb74);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dbb78:{NFSU2_TR(0x5dbb78);
if(r1(R+518)){{goto L5dbc71;}}
}
B5dbb7e:L5dbb7e:{c.instructions+=1;NFSU2_TR(0x5dbb7e);
__builtin_memmove((R+28),(R+28),4);
}
B5dbb80:L5dbb80:{c.instructions+=5;NFSU2_TR(0x5dbb80);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbb83:{NFSU2_TR(0x5dbb83);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dbb89:{NFSU2_TR(0x5dbb89);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dbb8b:{NFSU2_TR(0x5dbb8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dbb8e:{NFSU2_TR(0x5dbb8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbc65;}}
}
B5dbb94:L5dbb94:{c.instructions+=2;NFSU2_TR(0x5dbb94);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbb97:{NFSU2_TR(0x5dbb97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbb9cull));
TAIL_STATIC(0x75bed4u,75b);
}
B5dbb9c:L5dbb9c:{c.instructions+=3;NFSU2_TR(0x5dbb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dbb9f:{NFSU2_TR(0x5dbb9f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B5dbba1:{NFSU2_TR(0x5dbba1);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5dbba5;}}
}
B5dbba3:L5dbba3:{c.instructions+=1;NFSU2_TR(0x5dbba3);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5dbba5:L5dbba5:{c.instructions+=3;NFSU2_TR(0x5dbba5);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbba8:{NFSU2_TR(0x5dbba8);
__builtin_memmove((R+28),(R+4),4);
}
B5dbbaa:{NFSU2_TR(0x5dbbaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbbafull));
TAIL_STATIC(0x75bed4u,75b);
}
B5dbbaf:L5dbbaf:{c.instructions+=3;NFSU2_TR(0x5dbbaf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbbb3:{NFSU2_TR(0x5dbbb3);
__builtin_memmove((R+12),(R+0),4);
}
B5dbbb5:{NFSU2_TR(0x5dbbb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbbbaull));
TAIL_STATIC(0x75bed4u,75b);
}
B5dbbba:L5dbbba:{c.instructions+=4;NFSU2_TR(0x5dbbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dbbbd:{NFSU2_TR(0x5dbbbd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B5dbbbf:{NFSU2_TR(0x5dbbbf);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5dbbc1:{NFSU2_TR(0x5dbbc1);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5dbbc5;}}
}
B5dbbc3:L5dbbc3:{c.instructions+=1;NFSU2_TR(0x5dbbc3);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5dbbc5:L5dbbc5:{c.instructions+=2;NFSU2_TR(0x5dbbc5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dbbc7:{NFSU2_TR(0x5dbbc7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dbbd4;}}
}
B5dbbc9:L5dbbc9:{c.instructions+=4;NFSU2_TR(0x5dbbc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5dbbcc:{NFSU2_TR(0x5dbbcc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5dbbce:{NFSU2_TR(0x5dbbce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dbbd2:{NFSU2_TR(0x5dbbd2);
{goto L5dbbdd;}
}
B5dbbd4:L5dbbd4:{c.instructions+=3;NFSU2_TR(0x5dbbd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B5dbbd7:{NFSU2_TR(0x5dbbd7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5dbbd9:{NFSU2_TR(0x5dbbd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dbbdd:L5dbbdd:{c.instructions+=8;NFSU2_TR(0x5dbbdd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dbbe1:{NFSU2_TR(0x5dbbe1);
{u32 ea_=u32(u32(8392272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbbe7:{NFSU2_TR(0x5dbbe7);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5dbbed:{NFSU2_TR(0x5dbbed);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbbf3:{NFSU2_TR(0x5dbbf3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5dbbf9:{NFSU2_TR(0x5dbbf9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dbbfb:{NFSU2_TR(0x5dbbfb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dbbfe:{NFSU2_TR(0x5dbbfe);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5dbc63;}}
}
B5dbc00:L5dbc00:{c.instructions+=9;NFSU2_TR(0x5dbc00);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbc06:{NFSU2_TR(0x5dbc06);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5dbc08:{NFSU2_TR(0x5dbc08);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dbc0c:{NFSU2_TR(0x5dbc0c);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbc0f:{NFSU2_TR(0x5dbc0f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbc13:{NFSU2_TR(0x5dbc13);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dbc19:{NFSU2_TR(0x5dbc19);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dbc1b:{NFSU2_TR(0x5dbc1b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dbc1e:{NFSU2_TR(0x5dbc1e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5dbc5f;}}
}
B5dbc20:L5dbc20:{c.instructions+=17;NFSU2_TR(0x5dbc20);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbc23:{NFSU2_TR(0x5dbc23);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbc29:{NFSU2_TR(0x5dbc29);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5dbc2b:{NFSU2_TR(0x5dbc2b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbc2f:{NFSU2_TR(0x5dbc2f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dbc33:{NFSU2_TR(0x5dbc33);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dbc37:{NFSU2_TR(0x5dbc37);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbc3a:{NFSU2_TR(0x5dbc3a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbc40:{NFSU2_TR(0x5dbc40);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5dbc42:{NFSU2_TR(0x5dbc42);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbc46:{NFSU2_TR(0x5dbc46);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dbc4a:{NFSU2_TR(0x5dbc4a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dbc4e:{NFSU2_TR(0x5dbc4e);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbc51:{NFSU2_TR(0x5dbc51);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbc57:{NFSU2_TR(0x5dbc57);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5dbc59:{NFSU2_TR(0x5dbc59);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbc5d:{NFSU2_TR(0x5dbc5d);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B5dbc5f:L5dbc5f:{c.instructions+=2;NFSU2_TR(0x5dbc5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dbc61:{NFSU2_TR(0x5dbc61);
{goto L5dbc65;}
}
B5dbc63:L5dbc63:{c.instructions+=1;NFSU2_TR(0x5dbc63);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5dbc65:L5dbc65:{c.instructions+=3;NFSU2_TR(0x5dbc65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5dbc67:{NFSU2_TR(0x5dbc67);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5dbc6b:{NFSU2_TR(0x5dbc6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dbb80u);}goto L5dbb80;}}
}
B5dbc71:L5dbc71:{c.instructions+=9;NFSU2_TR(0x5dbc71);
__builtin_memmove((R+0),gp(0x88f1f8),4);
}
B5dbc76:{NFSU2_TR(0x5dbc76);
{u32 ea_=u32(u32(8392268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbc7c:{NFSU2_TR(0x5dbc7c);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbc7f:{NFSU2_TR(0x5dbc7f);
{u32 ea_=u32(u32(8392268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbc85:{NFSU2_TR(0x5dbc85);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dbc89:{NFSU2_TR(0x5dbc89);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dbc8f:{NFSU2_TR(0x5dbc8f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dbc91:{NFSU2_TR(0x5dbc91);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dbc94:{NFSU2_TR(0x5dbc94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbcf9;}}
}
B5dbc96:L5dbc96:{c.instructions+=12;NFSU2_TR(0x5dbc96);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbc9a:{NFSU2_TR(0x5dbc9a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbc9e:{NFSU2_TR(0x5dbc9e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dbca2:{NFSU2_TR(0x5dbca2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbca6:{NFSU2_TR(0x5dbca6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbcaa:{NFSU2_TR(0x5dbcaa);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dbcae:{NFSU2_TR(0x5dbcae);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbcb2:{NFSU2_TR(0x5dbcb2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbcb6:{NFSU2_TR(0x5dbcb6);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dbcbc:{NFSU2_TR(0x5dbcbc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dbcbe:{NFSU2_TR(0x5dbcbe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dbcc1:{NFSU2_TR(0x5dbcc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbccb;}}
}
B5dbcc3:L5dbcc3:{c.instructions+=1;NFSU2_TR(0x5dbcc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dbccb:L5dbccb:{c.instructions+=5;NFSU2_TR(0x5dbccb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbccf:{NFSU2_TR(0x5dbccf);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dbcd5:{NFSU2_TR(0x5dbcd5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dbcd7:{NFSU2_TR(0x5dbcd7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dbcda:{NFSU2_TR(0x5dbcda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbce4;}}
}
B5dbcdc:L5dbcdc:{c.instructions+=1;NFSU2_TR(0x5dbcdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dbce4:L5dbce4:{c.instructions+=4;NFSU2_TR(0x5dbce4);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5dbcea:{NFSU2_TR(0x5dbcea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dbcec:{NFSU2_TR(0x5dbcec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dbcef:{NFSU2_TR(0x5dbcef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbcf9;}}
}
B5dbcf1:L5dbcf1:{c.instructions+=2;NFSU2_TR(0x5dbcf1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5dbcf3:{NFSU2_TR(0x5dbcf3);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbcf9:L5dbcf9:{c.instructions+=2;NFSU2_TR(0x5dbcf9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbcfd:{NFSU2_TR(0x5dbcfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbd02ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5dbd02:L5dbd02:{c.instructions+=4;NFSU2_TR(0x5dbd02);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbd06:{NFSU2_TR(0x5dbd06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dbd09:{NFSU2_TR(0x5dbd09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5dbd0b:{NFSU2_TR(0x5dbd0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbd10ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5dbd10:L5dbd10:{c.instructions+=4;NFSU2_TR(0x5dbd10);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5dbd12:{NFSU2_TR(0x5dbd12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dbd15:{NFSU2_TR(0x5dbd15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5dbd17:{NFSU2_TR(0x5dbd17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbd1cull));
TAIL_STATIC(0x75bed4u,75b);
}
B5dbd1c:L5dbd1c:{c.instructions+=9;NFSU2_TR(0x5dbd1c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dbd20:{NFSU2_TR(0x5dbd20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dbd23:{NFSU2_TR(0x5dbd23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5dbd25:{NFSU2_TR(0x5dbd25);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dbd29:{NFSU2_TR(0x5dbd29);
{u32 ea_=u32(u32(8016500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dbd2f:{NFSU2_TR(0x5dbd2f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5dbd35:{NFSU2_TR(0x5dbd35);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dbd37:{NFSU2_TR(0x5dbd37);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dbd3a:{NFSU2_TR(0x5dbd3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbd44;}}
}
B5dbd3c:L5dbd3c:{c.instructions+=2;NFSU2_TR(0x5dbd3c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5dbd3e:{NFSU2_TR(0x5dbd3e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbd44:L5dbd44:{c.instructions+=5;NFSU2_TR(0x5dbd44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dbd47:{NFSU2_TR(0x5dbd47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5dbd49:{NFSU2_TR(0x5dbd49);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dbd4b:{NFSU2_TR(0x5dbd4b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5dbd4d:{NFSU2_TR(0x5dbd4d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dbd55;}}
}
B5dbd4f:L5dbd4f:{c.instructions+=1;NFSU2_TR(0x5dbd4f);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dbd55:L5dbd55:{c.instructions+=2;NFSU2_TR(0x5dbd55);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5dbd57:{NFSU2_TR(0x5dbd57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbd5cull));
TAIL_STATIC(0x75bed4u,75b);
}
B5dbd5c:L5dbd5c:{c.instructions+=8;NFSU2_TR(0x5dbd5c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5dbd5e:{NFSU2_TR(0x5dbd5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dbd5f:{NFSU2_TR(0x5dbd5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5dbd61:{NFSU2_TR(0x5dbd61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dbd62:{NFSU2_TR(0x5dbd62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dbd63:{NFSU2_TR(0x5dbd63);
__builtin_memmove((R+16),(R+20),4);
}
B5dbd65:{NFSU2_TR(0x5dbd65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dbd66:{NFSU2_TR(0x5dbd66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dbd70:L5dbd70:{c.instructions+=5;NFSU2_TR(0x5dbd70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dbd74:{NFSU2_TR(0x5dbd74);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x124ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5dbd7a:{NFSU2_TR(0x5dbd7a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8768b8ull))));
}
B5dbd7f:{NFSU2_TR(0x5dbd7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dbd83:{NFSU2_TR(0x5dbd83);
TAIL_STATIC(0x5d7720u,5d7);
}
B5dbd90:L5dbd90:{c.instructions+=8;NFSU2_TR(0x5dbd90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dbd94:{NFSU2_TR(0x5dbd94);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x124ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5dbd9a:{NFSU2_TR(0x5dbd9a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8768b8ull))));
}
B5dbda0:{NFSU2_TR(0x5dbda0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dbda2:{NFSU2_TR(0x5dbda2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbda3:{NFSU2_TR(0x5dbda3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5dbda5:{NFSU2_TR(0x5dbda5);
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
B5dbda7:{NFSU2_TR(0x5dbda7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dbdc8;}}
}
B5dbda9:L5dbda9:{c.instructions+=3;NFSU2_TR(0x5dbda9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbdaa:{NFSU2_TR(0x5dbdaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dbdad:{NFSU2_TR(0x5dbdad);
__builtin_memmove((R+4),(R+4),4);
}
B5dbdb0:L5dbdb0:{c.instructions+=9;NFSU2_TR(0x5dbdb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dbdb2:{NFSU2_TR(0x5dbdb2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5dbdb3:{NFSU2_TR(0x5dbdb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5dbdb6:{NFSU2_TR(0x5dbdb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B5dbdbd:{NFSU2_TR(0x5dbdbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dbdbf:{NFSU2_TR(0x5dbdbf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5dbdc0:{NFSU2_TR(0x5dbdc0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5dbdc3:{NFSU2_TR(0x5dbdc3);
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
B5dbdc5:{NFSU2_TR(0x5dbdc5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dbdb0u);}goto L5dbdb0;}}
}
B5dbdc7:L5dbdc7:{c.instructions+=1;NFSU2_TR(0x5dbdc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dbdc8:L5dbdc8:{c.instructions+=2;NFSU2_TR(0x5dbdc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dbdc9:{NFSU2_TR(0x5dbdc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dbdd0:L5dbdd0:{c.instructions+=24;NFSU2_TR(0x5dbdd0);
w4(R+0,u32(0x1ull));
}
B5dbdd5:{NFSU2_TR(0x5dbdd5);
w4(R+8,u32(0x3ull));
}
B5dbdda:{NFSU2_TR(0x5dbdda);
w4(R+4,u32(0x2ull));
}
B5dbddf:{NFSU2_TR(0x5dbddf);
__builtin_memmove(gp(0x8768b8),(R+8),4);
}
B5dbde5:{NFSU2_TR(0x5dbde5);
__builtin_memmove(gp(0x8768bc),(R+0),4);
}
B5dbdea:{NFSU2_TR(0x5dbdea);
__builtin_memmove(gp(0x8769d0),(R+0),4);
}
B5dbdef:{NFSU2_TR(0x5dbdef);
s4(0x8768d8,u32(0x3f800000ull));
}
B5dbdf9:{NFSU2_TR(0x5dbdf9);
s4(0x8768c0,u32(0x4ull));
}
B5dbe03:{NFSU2_TR(0x5dbe03);
__builtin_memmove(gp(0x8769d4),(R+4),4);
}
B5dbe09:{NFSU2_TR(0x5dbe09);
s4(0x876934,u32(0x5d7770ull));
}
B5dbe13:{NFSU2_TR(0x5dbe13);
s4(0x8768c4,u32(0x5ull));
}
B5dbe1d:{NFSU2_TR(0x5dbe1d);
__builtin_memmove(gp(0x8769d8),(R+4),4);
}
B5dbe23:{NFSU2_TR(0x5dbe23);
s4(0x87698c,u32(0x5d7770ull));
}
B5dbe2d:{NFSU2_TR(0x5dbe2d);
__builtin_memmove(gp(0x8769dc),(R+0),4);
}
B5dbe32:{NFSU2_TR(0x5dbe32);
s4(0x8769e0,u32(0x0ull));
}
B5dbe3c:{NFSU2_TR(0x5dbe3c);
__builtin_memmove(gp(0x876af4),(R+8),4);
}
B5dbe42:{NFSU2_TR(0x5dbe42);
s4(0x876a04,u32(0x0ull));
}
B5dbe4c:{NFSU2_TR(0x5dbe4c);
s4(0x876a00,u32(0x5d7a60ull));
}
B5dbe56:{NFSU2_TR(0x5dbe56);
__builtin_memmove(gp(0x876b00),(R+0),4);
}
B5dbe5b:{NFSU2_TR(0x5dbe5b);
__builtin_memmove(gp(0x876b04),(R+8),4);
}
B5dbe61:{NFSU2_TR(0x5dbe61);
__builtin_memmove(gp(0x876c18),(R+4),4);
}
B5dbe67:{NFSU2_TR(0x5dbe67);
s4(0x876b24,u32(0x5d77f0ull));
}
B5dbe71:{NFSU2_TR(0x5dbe71);
s4(0x876b20,u32(0x3f000000ull));
}
B5dbe7b:{NFSU2_TR(0x5dbe7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dbe80:L5dbe80:{c.instructions+=6;NFSU2_TR(0x5dbe80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbe81:{NFSU2_TR(0x5dbe81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbe82:{NFSU2_TR(0x5dbe82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbe83:{NFSU2_TR(0x5dbe83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbe84:{NFSU2_TR(0x5dbe84);
w4(R+12,u32(0x1ull));
}
B5dbe89:{NFSU2_TR(0x5dbe89);
__builtin_memmove((R+16),(R+16),4);
}
B5dbe90:L5dbe90:{c.instructions+=2;NFSU2_TR(0x5dbe90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbe91:{NFSU2_TR(0x5dbe91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbe96ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5dbe96:L5dbe96:{c.instructions+=5;NFSU2_TR(0x5dbe96);
__builtin_memmove((R+24),(R+0),4);
}
B5dbe98:{NFSU2_TR(0x5dbe98);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dbe9b:{NFSU2_TR(0x5dbe9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5dbe9e:{NFSU2_TR(0x5dbe9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dbea0:{NFSU2_TR(0x5dbea0);
if(r1(R+518)){{goto L5dbf45;}}
}
B5dbea6:L5dbea6:{c.instructions+=3;NFSU2_TR(0x5dbea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dbea9:{NFSU2_TR(0x5dbea9);
u8 U[4];
w4(U+0,u32(0x3d088889ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbeae:{NFSU2_TR(0x5dbeae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbeb3ull));
TAIL_STATIC(0x5d7580u,5d7);
}
B5dbeb3:L5dbeb3:{c.instructions+=3;NFSU2_TR(0x5dbeb3);
__builtin_memmove((R+0),gp(0x883e30),4);
}
B5dbeb8:{NFSU2_TR(0x5dbeb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dbeba:{NFSU2_TR(0x5dbeba);
if(r1(R+518)){{goto L5dbed3;}}
}
B5dbebc:L5dbebc:{c.instructions+=4;NFSU2_TR(0x5dbebc);
s4(0x883e30,u32(0x0ull));
}
B5dbec6:{NFSU2_TR(0x5dbec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dbec9:{NFSU2_TR(0x5dbec9);
u8 U[4];
w4(U+0,u32(0x8769dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbece:{NFSU2_TR(0x5dbece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbed3ull));
TAIL_STATIC(0x5d7720u,5d7);
}
B5dbed3:L5dbed3:{c.instructions+=3;NFSU2_TR(0x5dbed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dbed6:{NFSU2_TR(0x5dbed6);
u8 U[4];
w4(U+0,u32(0x876b00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbedb:{NFSU2_TR(0x5dbedb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbee0ull));
TAIL_STATIC(0x5d7720u,5d7);
}
B5dbee0:L5dbee0:{c.instructions+=6;NFSU2_TR(0x5dbee0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dbee2:{NFSU2_TR(0x5dbee2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dbee5:{NFSU2_TR(0x5dbee5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5dbee8:{NFSU2_TR(0x5dbee8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5dbeef:{NFSU2_TR(0x5dbeef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dbef1:{NFSU2_TR(0x5dbef1);
if(r1(R+518)){{goto L5dbf45;}}
}
B5dbef3:L5dbef3:{c.instructions+=3;NFSU2_TR(0x5dbef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5dbef6:{NFSU2_TR(0x5dbef6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dbef8:{NFSU2_TR(0x5dbef8);
if(r1(R+518)){{goto L5dbf45;}}
}
B5dbefa:L5dbefa:{c.instructions+=2;NFSU2_TR(0x5dbefa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5dbefd:{NFSU2_TR(0x5dbefd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbf02ull));
TAIL_STATIC(0x59fa30u,59f);
}
B5dbf02:L5dbf02:{c.instructions+=3;NFSU2_TR(0x5dbf02);
__builtin_memmove((R+28),(R+0),4);
}
B5dbf04:{NFSU2_TR(0x5dbf04);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dbf06:{NFSU2_TR(0x5dbf06);
if(r1(R+518)){{goto L5dbf3b;}}
}
B5dbf08:L5dbf08:{c.instructions+=2;NFSU2_TR(0x5dbf08);
__builtin_memmove((R+4),(R+20),4);
}
B5dbf0a:{NFSU2_TR(0x5dbf0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbf0full));
TAIL_STATIC(0x5ecdb0u,5ec);
}
B5dbf0f:L5dbf0f:{c.instructions+=2;NFSU2_TR(0x5dbf0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dbf11:{NFSU2_TR(0x5dbf11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbf3b;}}
}
B5dbf13:L5dbf13:{c.instructions+=2;NFSU2_TR(0x5dbf13);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dbf15:{NFSU2_TR(0x5dbf15);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dbf45;}}
}
B5dbf17:L5dbf17:{c.instructions+=2;NFSU2_TR(0x5dbf17);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dbf1a:{NFSU2_TR(0x5dbf1a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5dbf45;}}
}
B5dbf1c:L5dbf1c:{c.instructions+=5;NFSU2_TR(0x5dbf1c);
{u32 ea_=u32(r4(R+20)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dbf22:{NFSU2_TR(0x5dbf22);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dbf28:{NFSU2_TR(0x5dbf28);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dbf2a:{NFSU2_TR(0x5dbf2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dbf2d:{NFSU2_TR(0x5dbf2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbf45;}}
}
B5dbf2f:L5dbf2f:{c.instructions+=3;NFSU2_TR(0x5dbf2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dbf32:{NFSU2_TR(0x5dbf32);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbf34:{NFSU2_TR(0x5dbf34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbf39ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dbd70u);}goto L5dbd70;}
}
B5dbf39:L5dbf39:{c.instructions+=1;NFSU2_TR(0x5dbf39);
{goto L5dbf45;}
}
B5dbf3b:L5dbf3b:{c.instructions+=3;NFSU2_TR(0x5dbf3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dbf3e:{NFSU2_TR(0x5dbf3e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbf40:{NFSU2_TR(0x5dbf40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbf45ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dbd90u);}goto L5dbd90;}
}
B5dbf45:L5dbf45:{c.instructions+=3;NFSU2_TR(0x5dbf45);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5dbf46:{NFSU2_TR(0x5dbf46);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dbf49:{NFSU2_TR(0x5dbf49);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dbe90u);}goto L5dbe90;}}
}
B5dbf4f:L5dbf4f:{c.instructions+=5;NFSU2_TR(0x5dbf4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dbf50:{NFSU2_TR(0x5dbf50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dbf51:{NFSU2_TR(0x5dbf51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dbf52:{NFSU2_TR(0x5dbf52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dbf53:{NFSU2_TR(0x5dbf53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dbf60:L5dbf60:{c.instructions+=3;NFSU2_TR(0x5dbf60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dbf64:{NFSU2_TR(0x5dbf64);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80036000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5dbf6a:{NFSU2_TR(0x5dbf6a);
if(r1(R+518)){{goto L5dbf6f;}}
}
B5dbf6c:L5dbf6c:{c.instructions+=2;NFSU2_TR(0x5dbf6c);
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
B5dbf6e:{NFSU2_TR(0x5dbf6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dbf6f:L5dbf6f:{c.instructions+=9;NFSU2_TR(0x5dbf6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dbf72:{NFSU2_TR(0x5dbf72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbf73:{NFSU2_TR(0x5dbf73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbf74:{NFSU2_TR(0x5dbf74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbf75:{NFSU2_TR(0x5dbf75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dbf78:{NFSU2_TR(0x5dbf78);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B5dbf7c:{NFSU2_TR(0x5dbf7c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5dbf7e:{NFSU2_TR(0x5dbf7e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dbf80:{NFSU2_TR(0x5dbf80);
if(r1(R+518)){{goto L5dbfeb;}}
}
B5dbf82:L5dbf82:{c.instructions+=3;NFSU2_TR(0x5dbf82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dbf84:{NFSU2_TR(0x5dbf84);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x36001ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5dbf89:{NFSU2_TR(0x5dbf89);
if(r1(R+518)){{goto L5dbfc3;}}
}
B5dbf8b:L5dbf8b:{c.instructions+=2;NFSU2_TR(0x5dbf8b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5dbf8c:{NFSU2_TR(0x5dbf8c);
if(r1(R+518)){{goto L5dbfa0;}}
}
B5dbf8e:L5dbf8e:{c.instructions+=2;NFSU2_TR(0x5dbf8e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5dbf8f:{NFSU2_TR(0x5dbf8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbfe0;}}
}
B5dbf91:L5dbf91:{c.instructions+=2;NFSU2_TR(0x5dbf91);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dbf93:{NFSU2_TR(0x5dbf93);
if(r1(R+518)){{goto L5dbfe0;}}
}
B5dbf95:L5dbf95:{c.instructions+=4;NFSU2_TR(0x5dbf95);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5dbf98:{NFSU2_TR(0x5dbf98);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff0ull))));
}
B5dbf9b:{NFSU2_TR(0x5dbf9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dbf9e:{NFSU2_TR(0x5dbf9e);
{goto L5dbfe0;}
}
B5dbfa0:L5dbfa0:{c.instructions+=2;NFSU2_TR(0x5dbfa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dbfa2:{NFSU2_TR(0x5dbfa2);
if(r1(R+518)){{goto L5dbfe0;}}
}
B5dbfa4:L5dbfa4:{c.instructions+=8;NFSU2_TR(0x5dbfa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dbfa7:{NFSU2_TR(0x5dbfa7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5dbfaa:{NFSU2_TR(0x5dbfaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5dbfad:{NFSU2_TR(0x5dbfad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dbfb0:{NFSU2_TR(0x5dbfb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5dbfb2:{NFSU2_TR(0x5dbfb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dbfb5:{NFSU2_TR(0x5dbfb5);
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
B5dbfb7:{NFSU2_TR(0x5dbfb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dbfe0;}}
}
B5dbfb9:L5dbfb9:{c.instructions+=2;NFSU2_TR(0x5dbfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dbfbc:{NFSU2_TR(0x5dbfbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbfc1ull));
TAIL_STATIC(0x4022c0u,402);
}
B5dbfc1:L5dbfc1:{c.instructions+=1;NFSU2_TR(0x5dbfc1);
{goto L5dbfe0;}
}
B5dbfc3:L5dbfc3:{c.instructions+=4;NFSU2_TR(0x5dbfc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dbfc6:{NFSU2_TR(0x5dbfc6);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B5dbfc9:{NFSU2_TR(0x5dbfc9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5dbfcd:{NFSU2_TR(0x5dbfcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5dc03cu,5dc);}
}
B5dbfcf:L5dbfcf:{c.instructions+=4;NFSU2_TR(0x5dbfcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dbfd2:{NFSU2_TR(0x5dbfd2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dbfd3:{NFSU2_TR(0x5dbfd3);
w4(R+4,u32(0x883e70ull));
}
B5dbfd8:{NFSU2_TR(0x5dbfd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dbfddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5db680u);}goto L5db680;}
}
B5dbfdd:L5dbfdd:{c.instructions+=1;NFSU2_TR(0x5dbfdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dbfe0:L5dbfe0:{c.instructions+=4;NFSU2_TR(0x5dbfe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dbfe3:{NFSU2_TR(0x5dbfe3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5dbfe7:{NFSU2_TR(0x5dbfe7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dbfe9:{NFSU2_TR(0x5dbfe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dbf82u);}goto L5dbf82;}}
}
B5dbfeb:L5dbfeb:{c.instructions+=4;NFSU2_TR(0x5dbfeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dbfee:{NFSU2_TR(0x5dbfee);
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
B5dbff0:{NFSU2_TR(0x5dbff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dbff7:{NFSU2_TR(0x5dbff7);
if(r1(R+518)){TAIL_STATIC(0x5dc026u,5dc);}
}
B5dbff9:L5dbff9:{c.instructions+=3;NFSU2_TR(0x5dbff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dbffc:{NFSU2_TR(0x5dbffc);
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
B5dbffe:{NFSU2_TR(0x5dbffe);
if(r1(R+518)){TAIL_STATIC(0x5dc026u,5dc);}
TAIL_STATIC(0x5dc000u,5dc);
}
XIT:NFSU2_TR_EXIT(0x5db,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
