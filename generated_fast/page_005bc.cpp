#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5bc,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5bc,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 page_5bc(Cpu& c){return body_5bc(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5bc(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5bc000:goto L5bc000;
case 0x5bc004:c.instructions+=8;goto B5bc004;
case 0x5bc005:c.instructions+=7;goto B5bc005;
case 0x5bc00a:c.instructions+=6;goto B5bc00a;
case 0x5bc00f:c.instructions+=5;goto B5bc00f;
case 0x5bc011:c.instructions+=4;goto B5bc011;
case 0x5bc017:c.instructions+=3;goto B5bc017;
case 0x5bc019:c.instructions+=2;goto B5bc019;
case 0x5bc01a:c.instructions+=1;goto B5bc01a;
case 0x5bc01d:goto L5bc01d;
case 0x5bc022:c.instructions+=5;goto B5bc022;
case 0x5bc026:c.instructions+=4;goto B5bc026;
case 0x5bc028:c.instructions+=3;goto B5bc028;
case 0x5bc02a:c.instructions+=2;goto B5bc02a;
case 0x5bc02e:c.instructions+=1;goto B5bc02e;
case 0x5bc034:goto L5bc034;
case 0x5bc040:goto L5bc040;
case 0x5bc044:c.instructions+=7;goto B5bc044;
case 0x5bc04a:c.instructions+=6;goto B5bc04a;
case 0x5bc050:c.instructions+=5;goto B5bc050;
case 0x5bc052:c.instructions+=4;goto B5bc052;
case 0x5bc058:c.instructions+=3;goto B5bc058;
case 0x5bc05a:c.instructions+=2;goto B5bc05a;
case 0x5bc05d:c.instructions+=1;goto B5bc05d;
case 0x5bc05f:goto L5bc05f;
case 0x5bc065:c.instructions+=1;goto B5bc065;
case 0x5bc067:goto L5bc067;
case 0x5bc06d:c.instructions+=4;goto B5bc06d;
case 0x5bc073:c.instructions+=3;goto B5bc073;
case 0x5bc075:c.instructions+=2;goto B5bc075;
case 0x5bc078:c.instructions+=1;goto B5bc078;
case 0x5bc07a:goto L5bc07a;
case 0x5bc080:c.instructions+=6;goto B5bc080;
case 0x5bc086:c.instructions+=5;goto B5bc086;
case 0x5bc08c:c.instructions+=4;goto B5bc08c;
case 0x5bc08e:c.instructions+=3;goto B5bc08e;
case 0x5bc090:c.instructions+=2;goto B5bc090;
case 0x5bc096:c.instructions+=1;goto B5bc096;
case 0x5bc098:goto L5bc098;
case 0x5bc09a:c.instructions+=2;goto B5bc09a;
case 0x5bc0a0:c.instructions+=1;goto B5bc0a0;
case 0x5bc0a5:goto L5bc0a5;
case 0x5bc0ab:c.instructions+=8;goto B5bc0ab;
case 0x5bc0ae:c.instructions+=7;goto B5bc0ae;
case 0x5bc0b0:c.instructions+=6;goto B5bc0b0;
case 0x5bc0b3:c.instructions+=5;goto B5bc0b3;
case 0x5bc0b5:c.instructions+=4;goto B5bc0b5;
case 0x5bc0b8:c.instructions+=3;goto B5bc0b8;
case 0x5bc0ba:c.instructions+=2;goto B5bc0ba;
case 0x5bc0bd:c.instructions+=1;goto B5bc0bd;
case 0x5bc0c2:goto L5bc0c2;
case 0x5bc0c5:c.instructions+=7;goto B5bc0c5;
case 0x5bc0c7:c.instructions+=6;goto B5bc0c7;
case 0x5bc0ca:c.instructions+=5;goto B5bc0ca;
case 0x5bc0cf:c.instructions+=4;goto B5bc0cf;
case 0x5bc0d0:c.instructions+=3;goto B5bc0d0;
case 0x5bc0d2:c.instructions+=2;goto B5bc0d2;
case 0x5bc0d6:c.instructions+=1;goto B5bc0d6;
case 0x5bc0dc:goto L5bc0dc;
case 0x5bc0e1:c.instructions+=4;goto B5bc0e1;
case 0x5bc0e3:c.instructions+=3;goto B5bc0e3;
case 0x5bc0e5:c.instructions+=2;goto B5bc0e5;
case 0x5bc0e6:c.instructions+=1;goto B5bc0e6;
case 0x5bc0e9:goto L5bc0e9;
case 0x5bc0ef:c.instructions+=7;goto B5bc0ef;
case 0x5bc0f0:c.instructions+=6;goto B5bc0f0;
case 0x5bc0f1:c.instructions+=5;goto B5bc0f1;
case 0x5bc0f2:c.instructions+=4;goto B5bc0f2;
case 0x5bc0f8:c.instructions+=3;goto B5bc0f8;
case 0x5bc0f9:c.instructions+=2;goto B5bc0f9;
case 0x5bc0fc:c.instructions+=1;goto B5bc0fc;
case 0x5bc100:goto L5bc100;
case 0x5bc106:c.instructions+=14;goto B5bc106;
case 0x5bc10c:c.instructions+=13;goto B5bc10c;
case 0x5bc112:c.instructions+=12;goto B5bc112;
case 0x5bc117:c.instructions+=11;goto B5bc117;
case 0x5bc119:c.instructions+=10;goto B5bc119;
case 0x5bc11f:c.instructions+=9;goto B5bc11f;
case 0x5bc125:c.instructions+=8;goto B5bc125;
case 0x5bc129:c.instructions+=7;goto B5bc129;
case 0x5bc12d:c.instructions+=6;goto B5bc12d;
case 0x5bc12f:c.instructions+=5;goto B5bc12f;
case 0x5bc135:c.instructions+=4;goto B5bc135;
case 0x5bc139:c.instructions+=3;goto B5bc139;
case 0x5bc13f:c.instructions+=2;goto B5bc13f;
case 0x5bc145:c.instructions+=1;goto B5bc145;
case 0x5bc14a:goto L5bc14a;
case 0x5bc150:c.instructions+=7;goto B5bc150;
case 0x5bc155:c.instructions+=6;goto B5bc155;
case 0x5bc15b:c.instructions+=5;goto B5bc15b;
case 0x5bc15f:c.instructions+=4;goto B5bc15f;
case 0x5bc163:c.instructions+=3;goto B5bc163;
case 0x5bc169:c.instructions+=2;goto B5bc169;
case 0x5bc16f:c.instructions+=1;goto B5bc16f;
case 0x5bc174:goto L5bc174;
case 0x5bc179:c.instructions+=1;goto B5bc179;
case 0x5bc180:goto L5bc180;
case 0x5bc182:c.instructions+=1;goto B5bc182;
case 0x5bc187:goto L5bc187;
case 0x5bc18d:c.instructions+=5;goto B5bc18d;
case 0x5bc193:c.instructions+=4;goto B5bc193;
case 0x5bc196:c.instructions+=3;goto B5bc196;
case 0x5bc199:c.instructions+=2;goto B5bc199;
case 0x5bc19b:c.instructions+=1;goto B5bc19b;
case 0x5bc19d:goto L5bc19d;
case 0x5bc19f:c.instructions+=2;goto B5bc19f;
case 0x5bc1a5:c.instructions+=1;goto B5bc1a5;
case 0x5bc1a7:goto L5bc1a7;
case 0x5bc1ae:c.instructions+=1;goto B5bc1ae;
case 0x5bc1b0:goto L5bc1b0;
case 0x5bc1b2:c.instructions+=2;goto B5bc1b2;
case 0x5bc1b8:c.instructions+=1;goto B5bc1b8;
case 0x5bc1ba:goto L5bc1ba;
case 0x5bc1bd:c.instructions+=2;goto B5bc1bd;
case 0x5bc1bf:c.instructions+=1;goto B5bc1bf;
case 0x5bc1c1:goto L5bc1c1;
case 0x5bc1c3:c.instructions+=1;goto B5bc1c3;
case 0x5bc1c9:goto L5bc1c9;
case 0x5bc1cf:c.instructions+=7;goto B5bc1cf;
case 0x5bc1d0:c.instructions+=6;goto B5bc1d0;
case 0x5bc1d6:c.instructions+=5;goto B5bc1d6;
case 0x5bc1d8:c.instructions+=4;goto B5bc1d8;
case 0x5bc1de:c.instructions+=3;goto B5bc1de;
case 0x5bc1e1:c.instructions+=2;goto B5bc1e1;
case 0x5bc1e3:c.instructions+=1;goto B5bc1e3;
case 0x5bc1e8:goto L5bc1e8;
case 0x5bc1e9:c.instructions+=1;goto B5bc1e9;
case 0x5bc1f0:goto L5bc1f0;
case 0x5bc1f5:c.instructions+=1;goto B5bc1f5;
case 0x5bc200:goto L5bc200;
case 0x5bc205:c.instructions+=1;goto B5bc205;
case 0x5bc210:goto L5bc210;
case 0x5bc213:c.instructions+=22;goto B5bc213;
case 0x5bc217:c.instructions+=21;goto B5bc217;
case 0x5bc21a:c.instructions+=20;goto B5bc21a;
case 0x5bc21d:c.instructions+=19;goto B5bc21d;
case 0x5bc220:c.instructions+=18;goto B5bc220;
case 0x5bc223:c.instructions+=17;goto B5bc223;
case 0x5bc226:c.instructions+=16;goto B5bc226;
case 0x5bc227:c.instructions+=15;goto B5bc227;
case 0x5bc22b:c.instructions+=14;goto B5bc22b;
case 0x5bc22e:c.instructions+=13;goto B5bc22e;
case 0x5bc22f:c.instructions+=12;goto B5bc22f;
case 0x5bc233:c.instructions+=11;goto B5bc233;
case 0x5bc234:c.instructions+=10;goto B5bc234;
case 0x5bc238:c.instructions+=9;goto B5bc238;
case 0x5bc23c:c.instructions+=8;goto B5bc23c;
case 0x5bc240:c.instructions+=7;goto B5bc240;
case 0x5bc244:c.instructions+=6;goto B5bc244;
case 0x5bc246:c.instructions+=5;goto B5bc246;
case 0x5bc247:c.instructions+=4;goto B5bc247;
case 0x5bc249:c.instructions+=3;goto B5bc249;
case 0x5bc24c:c.instructions+=2;goto B5bc24c;
case 0x5bc24e:c.instructions+=1;goto B5bc24e;
case 0x5bc253:goto L5bc253;
case 0x5bc255:c.instructions+=8;goto B5bc255;
case 0x5bc258:c.instructions+=7;goto B5bc258;
case 0x5bc25b:c.instructions+=6;goto B5bc25b;
case 0x5bc25e:c.instructions+=5;goto B5bc25e;
case 0x5bc262:c.instructions+=4;goto B5bc262;
case 0x5bc266:c.instructions+=3;goto B5bc266;
case 0x5bc268:c.instructions+=2;goto B5bc268;
case 0x5bc26b:c.instructions+=1;goto B5bc26b;
case 0x5bc26d:goto L5bc26d;
case 0x5bc26f:c.instructions+=2;goto B5bc26f;
case 0x5bc273:c.instructions+=1;goto B5bc273;
case 0x5bc275:goto L5bc275;
case 0x5bc279:c.instructions+=2;goto B5bc279;
case 0x5bc27b:c.instructions+=1;goto B5bc27b;
case 0x5bc27d:goto L5bc27d;
case 0x5bc27f:c.instructions+=8;goto B5bc27f;
case 0x5bc282:c.instructions+=7;goto B5bc282;
case 0x5bc285:c.instructions+=6;goto B5bc285;
case 0x5bc288:c.instructions+=5;goto B5bc288;
case 0x5bc28c:c.instructions+=4;goto B5bc28c;
case 0x5bc290:c.instructions+=3;goto B5bc290;
case 0x5bc292:c.instructions+=2;goto B5bc292;
case 0x5bc295:c.instructions+=1;goto B5bc295;
case 0x5bc297:goto L5bc297;
case 0x5bc299:c.instructions+=2;goto B5bc299;
case 0x5bc29d:c.instructions+=1;goto B5bc29d;
case 0x5bc29f:goto L5bc29f;
case 0x5bc2a3:c.instructions+=1;goto B5bc2a3;
case 0x5bc2a5:goto L5bc2a5;
case 0x5bc2a7:c.instructions+=9;goto B5bc2a7;
case 0x5bc2a9:c.instructions+=8;goto B5bc2a9;
case 0x5bc2ab:c.instructions+=7;goto B5bc2ab;
case 0x5bc2ae:c.instructions+=6;goto B5bc2ae;
case 0x5bc2b0:c.instructions+=5;goto B5bc2b0;
case 0x5bc2b4:c.instructions+=4;goto B5bc2b4;
case 0x5bc2b8:c.instructions+=3;goto B5bc2b8;
case 0x5bc2ba:c.instructions+=2;goto B5bc2ba;
case 0x5bc2bd:c.instructions+=1;goto B5bc2bd;
case 0x5bc2bf:goto L5bc2bf;
case 0x5bc2c1:c.instructions+=2;goto B5bc2c1;
case 0x5bc2c5:c.instructions+=1;goto B5bc2c5;
case 0x5bc2c7:goto L5bc2c7;
case 0x5bc2cb:c.instructions+=1;goto B5bc2cb;
case 0x5bc2cd:goto L5bc2cd;
case 0x5bc2d0:c.instructions+=4;goto B5bc2d0;
case 0x5bc2d2:c.instructions+=3;goto B5bc2d2;
case 0x5bc2d5:c.instructions+=2;goto B5bc2d5;
case 0x5bc2d6:c.instructions+=1;goto B5bc2d6;
case 0x5bc2dc:goto L5bc2dc;
case 0x5bc2de:c.instructions+=15;goto B5bc2de;
case 0x5bc2df:c.instructions+=14;goto B5bc2df;
case 0x5bc2e1:c.instructions+=13;goto B5bc2e1;
case 0x5bc2e2:c.instructions+=12;goto B5bc2e2;
case 0x5bc2e4:c.instructions+=11;goto B5bc2e4;
case 0x5bc2e7:c.instructions+=10;goto B5bc2e7;
case 0x5bc2e9:c.instructions+=9;goto B5bc2e9;
case 0x5bc2ec:c.instructions+=8;goto B5bc2ec;
case 0x5bc2ee:c.instructions+=7;goto B5bc2ee;
case 0x5bc2f1:c.instructions+=6;goto B5bc2f1;
case 0x5bc2f4:c.instructions+=5;goto B5bc2f4;
case 0x5bc2f7:c.instructions+=4;goto B5bc2f7;
case 0x5bc2f8:c.instructions+=3;goto B5bc2f8;
case 0x5bc2f9:c.instructions+=2;goto B5bc2f9;
case 0x5bc2fc:c.instructions+=1;goto B5bc2fc;
case 0x5bc300:goto L5bc300;
case 0x5bc301:c.instructions+=22;goto B5bc301;
case 0x5bc303:c.instructions+=21;goto B5bc303;
case 0x5bc306:c.instructions+=20;goto B5bc306;
case 0x5bc309:c.instructions+=19;goto B5bc309;
case 0x5bc30c:c.instructions+=18;goto B5bc30c;
case 0x5bc30f:c.instructions+=17;goto B5bc30f;
case 0x5bc310:c.instructions+=16;goto B5bc310;
case 0x5bc314:c.instructions+=15;goto B5bc314;
case 0x5bc317:c.instructions+=14;goto B5bc317;
case 0x5bc319:c.instructions+=13;goto B5bc319;
case 0x5bc31b:c.instructions+=12;goto B5bc31b;
case 0x5bc31e:c.instructions+=11;goto B5bc31e;
case 0x5bc320:c.instructions+=10;goto B5bc320;
case 0x5bc324:c.instructions+=9;goto B5bc324;
case 0x5bc327:c.instructions+=8;goto B5bc327;
case 0x5bc32b:c.instructions+=7;goto B5bc32b;
case 0x5bc32f:c.instructions+=6;goto B5bc32f;
case 0x5bc332:c.instructions+=5;goto B5bc332;
case 0x5bc335:c.instructions+=4;goto B5bc335;
case 0x5bc337:c.instructions+=3;goto B5bc337;
case 0x5bc33b:c.instructions+=2;goto B5bc33b;
case 0x5bc33f:c.instructions+=1;goto B5bc33f;
case 0x5bc341:goto L5bc341;
case 0x5bc345:c.instructions+=5;goto B5bc345;
case 0x5bc346:c.instructions+=4;goto B5bc346;
case 0x5bc34a:c.instructions+=3;goto B5bc34a;
case 0x5bc34b:c.instructions+=2;goto B5bc34b;
case 0x5bc34c:c.instructions+=1;goto B5bc34c;
case 0x5bc351:goto L5bc351;
case 0x5bc354:goto L5bc354;
case 0x5bc358:c.instructions+=25;goto B5bc358;
case 0x5bc35a:c.instructions+=24;goto B5bc35a;
case 0x5bc35e:c.instructions+=23;goto B5bc35e;
case 0x5bc360:c.instructions+=22;goto B5bc360;
case 0x5bc365:c.instructions+=21;goto B5bc365;
case 0x5bc36b:c.instructions+=20;goto B5bc36b;
case 0x5bc371:c.instructions+=19;goto B5bc371;
case 0x5bc375:c.instructions+=18;goto B5bc375;
case 0x5bc379:c.instructions+=17;goto B5bc379;
case 0x5bc37d:c.instructions+=16;goto B5bc37d;
case 0x5bc383:c.instructions+=15;goto B5bc383;
case 0x5bc387:c.instructions+=14;goto B5bc387;
case 0x5bc38b:c.instructions+=13;goto B5bc38b;
case 0x5bc38f:c.instructions+=12;goto B5bc38f;
case 0x5bc395:c.instructions+=11;goto B5bc395;
case 0x5bc399:c.instructions+=10;goto B5bc399;
case 0x5bc39d:c.instructions+=9;goto B5bc39d;
case 0x5bc3a1:c.instructions+=8;goto B5bc3a1;
case 0x5bc3a5:c.instructions+=7;goto B5bc3a5;
case 0x5bc3a9:c.instructions+=6;goto B5bc3a9;
case 0x5bc3ad:c.instructions+=5;goto B5bc3ad;
case 0x5bc3b1:c.instructions+=4;goto B5bc3b1;
case 0x5bc3b5:c.instructions+=3;goto B5bc3b5;
case 0x5bc3b9:c.instructions+=2;goto B5bc3b9;
case 0x5bc3bd:c.instructions+=1;goto B5bc3bd;
case 0x5bc3c0:goto L5bc3c0;
case 0x5bc3c3:c.instructions+=25;goto B5bc3c3;
case 0x5bc3c5:c.instructions+=24;goto B5bc3c5;
case 0x5bc3c9:c.instructions+=23;goto B5bc3c9;
case 0x5bc3cc:c.instructions+=22;goto B5bc3cc;
case 0x5bc3ce:c.instructions+=21;goto B5bc3ce;
case 0x5bc3d2:c.instructions+=20;goto B5bc3d2;
case 0x5bc3d4:c.instructions+=19;goto B5bc3d4;
case 0x5bc3d6:c.instructions+=18;goto B5bc3d6;
case 0x5bc3d8:c.instructions+=17;goto B5bc3d8;
case 0x5bc3dc:c.instructions+=16;goto B5bc3dc;
case 0x5bc3de:c.instructions+=15;goto B5bc3de;
case 0x5bc3e2:c.instructions+=14;goto B5bc3e2;
case 0x5bc3e5:c.instructions+=13;goto B5bc3e5;
case 0x5bc3e9:c.instructions+=12;goto B5bc3e9;
case 0x5bc3ec:c.instructions+=11;goto B5bc3ec;
case 0x5bc3ee:c.instructions+=10;goto B5bc3ee;
case 0x5bc3f2:c.instructions+=9;goto B5bc3f2;
case 0x5bc3f4:c.instructions+=8;goto B5bc3f4;
case 0x5bc3f6:c.instructions+=7;goto B5bc3f6;
case 0x5bc3f9:c.instructions+=6;goto B5bc3f9;
case 0x5bc3fb:c.instructions+=5;goto B5bc3fb;
case 0x5bc3fd:c.instructions+=4;goto B5bc3fd;
case 0x5bc403:c.instructions+=3;goto B5bc403;
case 0x5bc405:c.instructions+=2;goto B5bc405;
case 0x5bc408:c.instructions+=1;goto B5bc408;
case 0x5bc40a:goto L5bc40a;
case 0x5bc40c:c.instructions+=5;goto B5bc40c;
case 0x5bc412:c.instructions+=4;goto B5bc412;
case 0x5bc414:c.instructions+=3;goto B5bc414;
case 0x5bc416:c.instructions+=2;goto B5bc416;
case 0x5bc419:c.instructions+=1;goto B5bc419;
case 0x5bc41b:goto L5bc41b;
case 0x5bc420:goto L5bc420;
case 0x5bc421:c.instructions+=3;goto B5bc421;
case 0x5bc424:c.instructions+=2;goto B5bc424;
case 0x5bc427:c.instructions+=1;goto B5bc427;
case 0x5bc429:goto L5bc429;
case 0x5bc42b:c.instructions+=7;goto B5bc42b;
case 0x5bc42d:c.instructions+=6;goto B5bc42d;
case 0x5bc430:c.instructions+=5;goto B5bc430;
case 0x5bc431:c.instructions+=4;goto B5bc431;
case 0x5bc432:c.instructions+=3;goto B5bc432;
case 0x5bc434:c.instructions+=2;goto B5bc434;
case 0x5bc435:c.instructions+=1;goto B5bc435;
case 0x5bc438:goto L5bc438;
case 0x5bc43a:c.instructions+=6;goto B5bc43a;
case 0x5bc43c:c.instructions+=5;goto B5bc43c;
case 0x5bc43e:c.instructions+=4;goto B5bc43e;
case 0x5bc43f:c.instructions+=3;goto B5bc43f;
case 0x5bc441:c.instructions+=2;goto B5bc441;
case 0x5bc442:c.instructions+=1;goto B5bc442;
case 0x5bc450:goto L5bc450;
case 0x5bc452:c.instructions+=5;goto B5bc452;
case 0x5bc453:c.instructions+=4;goto B5bc453;
case 0x5bc457:c.instructions+=3;goto B5bc457;
case 0x5bc459:c.instructions+=2;goto B5bc459;
case 0x5bc45f:c.instructions+=1;goto B5bc45f;
case 0x5bc460:goto L5bc460;
case 0x5bc463:c.instructions+=12;goto B5bc463;
case 0x5bc466:c.instructions+=11;goto B5bc466;
case 0x5bc469:c.instructions+=10;goto B5bc469;
case 0x5bc46b:c.instructions+=9;goto B5bc46b;
case 0x5bc46d:c.instructions+=8;goto B5bc46d;
case 0x5bc46f:c.instructions+=7;goto B5bc46f;
case 0x5bc472:c.instructions+=6;goto B5bc472;
case 0x5bc474:c.instructions+=5;goto B5bc474;
case 0x5bc477:c.instructions+=4;goto B5bc477;
case 0x5bc47d:c.instructions+=3;goto B5bc47d;
case 0x5bc47f:c.instructions+=2;goto B5bc47f;
case 0x5bc482:c.instructions+=1;goto B5bc482;
case 0x5bc484:goto L5bc484;
case 0x5bc485:c.instructions+=3;goto B5bc485;
case 0x5bc488:c.instructions+=2;goto B5bc488;
case 0x5bc48b:c.instructions+=1;goto B5bc48b;
case 0x5bc48d:goto L5bc48d;
case 0x5bc492:c.instructions+=2;goto B5bc492;
case 0x5bc493:c.instructions+=1;goto B5bc493;
case 0x5bc496:goto L5bc496;
case 0x5bc498:c.instructions+=2;goto B5bc498;
case 0x5bc499:c.instructions+=1;goto B5bc499;
case 0x5bc4a0:goto L5bc4a0;
case 0x5bc4a1:c.instructions+=79;goto B5bc4a1;
case 0x5bc4a3:c.instructions+=78;goto B5bc4a3;
case 0x5bc4a6:c.instructions+=77;goto B5bc4a6;
case 0x5bc4a9:c.instructions+=76;goto B5bc4a9;
case 0x5bc4ab:c.instructions+=75;goto B5bc4ab;
case 0x5bc4ae:c.instructions+=74;goto B5bc4ae;
case 0x5bc4b1:c.instructions+=73;goto B5bc4b1;
case 0x5bc4b3:c.instructions+=72;goto B5bc4b3;
case 0x5bc4b8:c.instructions+=71;goto B5bc4b8;
case 0x5bc4bc:c.instructions+=70;goto B5bc4bc;
case 0x5bc4bf:c.instructions+=69;goto B5bc4bf;
case 0x5bc4c3:c.instructions+=68;goto B5bc4c3;
case 0x5bc4c7:c.instructions+=67;goto B5bc4c7;
case 0x5bc4ca:c.instructions+=66;goto B5bc4ca;
case 0x5bc4ce:c.instructions+=65;goto B5bc4ce;
case 0x5bc4d1:c.instructions+=64;goto B5bc4d1;
case 0x5bc4d3:c.instructions+=63;goto B5bc4d3;
case 0x5bc4d7:c.instructions+=62;goto B5bc4d7;
case 0x5bc4d9:c.instructions+=61;goto B5bc4d9;
case 0x5bc4db:c.instructions+=60;goto B5bc4db;
case 0x5bc4de:c.instructions+=59;goto B5bc4de;
case 0x5bc4e2:c.instructions+=58;goto B5bc4e2;
case 0x5bc4e5:c.instructions+=57;goto B5bc4e5;
case 0x5bc4e9:c.instructions+=56;goto B5bc4e9;
case 0x5bc4ec:c.instructions+=55;goto B5bc4ec;
case 0x5bc4ee:c.instructions+=54;goto B5bc4ee;
case 0x5bc4f2:c.instructions+=53;goto B5bc4f2;
case 0x5bc4f5:c.instructions+=52;goto B5bc4f5;
case 0x5bc4f7:c.instructions+=51;goto B5bc4f7;
case 0x5bc4fa:c.instructions+=50;goto B5bc4fa;
case 0x5bc4fe:c.instructions+=49;goto B5bc4fe;
case 0x5bc501:c.instructions+=48;goto B5bc501;
case 0x5bc505:c.instructions+=47;goto B5bc505;
case 0x5bc508:c.instructions+=46;goto B5bc508;
case 0x5bc50a:c.instructions+=45;goto B5bc50a;
case 0x5bc50e:c.instructions+=44;goto B5bc50e;
case 0x5bc511:c.instructions+=43;goto B5bc511;
case 0x5bc513:c.instructions+=42;goto B5bc513;
case 0x5bc516:c.instructions+=41;goto B5bc516;
case 0x5bc51a:c.instructions+=40;goto B5bc51a;
case 0x5bc51e:c.instructions+=39;goto B5bc51e;
case 0x5bc521:c.instructions+=38;goto B5bc521;
case 0x5bc525:c.instructions+=37;goto B5bc525;
case 0x5bc528:c.instructions+=36;goto B5bc528;
case 0x5bc52a:c.instructions+=35;goto B5bc52a;
case 0x5bc52e:c.instructions+=34;goto B5bc52e;
case 0x5bc531:c.instructions+=33;goto B5bc531;
case 0x5bc533:c.instructions+=32;goto B5bc533;
case 0x5bc536:c.instructions+=31;goto B5bc536;
case 0x5bc53a:c.instructions+=30;goto B5bc53a;
case 0x5bc53e:c.instructions+=29;goto B5bc53e;
case 0x5bc541:c.instructions+=28;goto B5bc541;
case 0x5bc545:c.instructions+=27;goto B5bc545;
case 0x5bc547:c.instructions+=26;goto B5bc547;
case 0x5bc54b:c.instructions+=25;goto B5bc54b;
case 0x5bc54f:c.instructions+=24;goto B5bc54f;
case 0x5bc555:c.instructions+=23;goto B5bc555;
case 0x5bc557:c.instructions+=22;goto B5bc557;
case 0x5bc55b:c.instructions+=21;goto B5bc55b;
case 0x5bc55d:c.instructions+=20;goto B5bc55d;
case 0x5bc561:c.instructions+=19;goto B5bc561;
case 0x5bc565:c.instructions+=18;goto B5bc565;
case 0x5bc569:c.instructions+=17;goto B5bc569;
case 0x5bc56d:c.instructions+=16;goto B5bc56d;
case 0x5bc571:c.instructions+=15;goto B5bc571;
case 0x5bc575:c.instructions+=14;goto B5bc575;
case 0x5bc579:c.instructions+=13;goto B5bc579;
case 0x5bc57f:c.instructions+=12;goto B5bc57f;
case 0x5bc585:c.instructions+=11;goto B5bc585;
case 0x5bc58b:c.instructions+=10;goto B5bc58b;
case 0x5bc58d:c.instructions+=9;goto B5bc58d;
case 0x5bc58f:c.instructions+=8;goto B5bc58f;
case 0x5bc595:c.instructions+=7;goto B5bc595;
case 0x5bc59b:c.instructions+=6;goto B5bc59b;
case 0x5bc5a1:c.instructions+=5;goto B5bc5a1;
case 0x5bc5a4:c.instructions+=4;goto B5bc5a4;
case 0x5bc5a7:c.instructions+=3;goto B5bc5a7;
case 0x5bc5a9:c.instructions+=2;goto B5bc5a9;
case 0x5bc5aa:c.instructions+=1;goto B5bc5aa;
case 0x5bc5b0:goto L5bc5b0;
case 0x5bc5b1:c.instructions+=7;goto B5bc5b1;
case 0x5bc5b3:c.instructions+=6;goto B5bc5b3;
case 0x5bc5b6:c.instructions+=5;goto B5bc5b6;
case 0x5bc5b9:c.instructions+=4;goto B5bc5b9;
case 0x5bc5bc:c.instructions+=3;goto B5bc5bc;
case 0x5bc5c1:c.instructions+=2;goto B5bc5c1;
case 0x5bc5c2:c.instructions+=1;goto B5bc5c2;
case 0x5bc5d0:goto L5bc5d0;
case 0x5bc5d5:c.instructions+=12;goto B5bc5d5;
case 0x5bc5d7:c.instructions+=11;goto B5bc5d7;
case 0x5bc5da:c.instructions+=10;goto B5bc5da;
case 0x5bc5dc:c.instructions+=9;goto B5bc5dc;
case 0x5bc5e1:c.instructions+=8;goto B5bc5e1;
case 0x5bc5e3:c.instructions+=7;goto B5bc5e3;
case 0x5bc5e5:c.instructions+=6;goto B5bc5e5;
case 0x5bc5e7:c.instructions+=5;goto B5bc5e7;
case 0x5bc5e9:c.instructions+=4;goto B5bc5e9;
case 0x5bc5eb:c.instructions+=3;goto B5bc5eb;
case 0x5bc5ed:c.instructions+=2;goto B5bc5ed;
case 0x5bc5ee:c.instructions+=1;goto B5bc5ee;
case 0x5bc5f1:goto L5bc5f1;
case 0x5bc5f6:c.instructions+=8;goto B5bc5f6;
case 0x5bc5f8:c.instructions+=7;goto B5bc5f8;
case 0x5bc5fa:c.instructions+=6;goto B5bc5fa;
case 0x5bc5fc:c.instructions+=5;goto B5bc5fc;
case 0x5bc600:c.instructions+=4;goto B5bc600;
case 0x5bc601:c.instructions+=3;goto B5bc601;
case 0x5bc603:c.instructions+=2;goto B5bc603;
case 0x5bc604:c.instructions+=1;goto B5bc604;
case 0x5bc607:goto L5bc607;
case 0x5bc609:c.instructions+=1;goto B5bc609;
case 0x5bc610:goto L5bc610;
case 0x5bc614:c.instructions+=4;goto B5bc614;
case 0x5bc61b:c.instructions+=3;goto B5bc61b;
case 0x5bc61e:c.instructions+=2;goto B5bc61e;
case 0x5bc623:c.instructions+=1;goto B5bc623;
case 0x5bc625:goto L5bc625;
case 0x5bc626:c.instructions+=2;goto B5bc626;
case 0x5bc62b:c.instructions+=1;goto B5bc62b;
case 0x5bc630:goto L5bc630;
case 0x5bc633:c.instructions+=7;goto B5bc633;
case 0x5bc637:c.instructions+=6;goto B5bc637;
case 0x5bc63b:c.instructions+=5;goto B5bc63b;
case 0x5bc641:c.instructions+=4;goto B5bc641;
case 0x5bc647:c.instructions+=3;goto B5bc647;
case 0x5bc649:c.instructions+=2;goto B5bc649;
case 0x5bc64f:c.instructions+=1;goto B5bc64f;
case 0x5bc654:goto L5bc654;
case 0x5bc658:c.instructions+=11;goto B5bc658;
case 0x5bc65a:c.instructions+=10;goto B5bc65a;
case 0x5bc65d:c.instructions+=9;goto B5bc65d;
case 0x5bc65f:c.instructions+=8;goto B5bc65f;
case 0x5bc662:c.instructions+=7;goto B5bc662;
case 0x5bc664:c.instructions+=6;goto B5bc664;
case 0x5bc667:c.instructions+=5;goto B5bc667;
case 0x5bc669:c.instructions+=4;goto B5bc669;
case 0x5bc66c:c.instructions+=3;goto B5bc66c;
case 0x5bc66d:c.instructions+=2;goto B5bc66d;
case 0x5bc670:c.instructions+=1;goto B5bc670;
case 0x5bc672:goto L5bc672;
case 0x5bc677:c.instructions+=2;goto B5bc677;
case 0x5bc678:c.instructions+=1;goto B5bc678;
case 0x5bc680:goto L5bc680;
case 0x5bc684:c.instructions+=4;goto B5bc684;
case 0x5bc68b:c.instructions+=3;goto B5bc68b;
case 0x5bc68e:c.instructions+=2;goto B5bc68e;
case 0x5bc693:c.instructions+=1;goto B5bc693;
case 0x5bc695:goto L5bc695;
case 0x5bc69a:c.instructions+=4;goto B5bc69a;
case 0x5bc69c:c.instructions+=3;goto B5bc69c;
case 0x5bc69e:c.instructions+=2;goto B5bc69e;
case 0x5bc69f:c.instructions+=1;goto B5bc69f;
case 0x5bc6a2:goto L5bc6a2;
case 0x5bc6a5:c.instructions+=1;goto B5bc6a5;
case 0x5bc6b0:goto L5bc6b0;
case 0x5bc6b1:c.instructions+=4;goto B5bc6b1;
case 0x5bc6b5:c.instructions+=3;goto B5bc6b5;
case 0x5bc6b7:c.instructions+=2;goto B5bc6b7;
case 0x5bc6bc:c.instructions+=1;goto B5bc6bc;
case 0x5bc6c0:goto L5bc6c0;
case 0x5bc6c2:c.instructions+=2;goto B5bc6c2;
case 0x5bc6c4:c.instructions+=1;goto B5bc6c4;
case 0x5bc6c6:goto L5bc6c6;
case 0x5bc6c8:c.instructions+=1;goto B5bc6c8;
case 0x5bc6ca:goto L5bc6ca;
case 0x5bc6cd:c.instructions+=3;goto B5bc6cd;
case 0x5bc6ce:c.instructions+=2;goto B5bc6ce;
case 0x5bc6d3:c.instructions+=1;goto B5bc6d3;
case 0x5bc6d5:goto L5bc6d5;
case 0x5bc6d8:c.instructions+=2;goto B5bc6d8;
case 0x5bc6d9:c.instructions+=1;goto B5bc6d9;
case 0x5bc6da:goto L5bc6da;
case 0x5bc6dd:c.instructions+=3;goto B5bc6dd;
case 0x5bc6e4:c.instructions+=2;goto B5bc6e4;
case 0x5bc6e5:c.instructions+=1;goto B5bc6e5;
case 0x5bc6f0:goto L5bc6f0;
case 0x5bc6f1:c.instructions+=6;goto B5bc6f1;
case 0x5bc6f2:c.instructions+=5;goto B5bc6f2;
case 0x5bc6f4:c.instructions+=4;goto B5bc6f4;
case 0x5bc6f6:c.instructions+=3;goto B5bc6f6;
case 0x5bc6fb:c.instructions+=2;goto B5bc6fb;
case 0x5bc6fd:c.instructions+=1;goto B5bc6fd;
case 0x5bc702:goto L5bc702;
case 0x5bc705:c.instructions+=2;goto B5bc705;
case 0x5bc706:c.instructions+=1;goto B5bc706;
case 0x5bc70b:goto L5bc70b;
case 0x5bc711:c.instructions+=11;goto B5bc711;
case 0x5bc713:c.instructions+=10;goto B5bc713;
case 0x5bc716:c.instructions+=9;goto B5bc716;
case 0x5bc719:c.instructions+=8;goto B5bc719;
case 0x5bc71c:c.instructions+=7;goto B5bc71c;
case 0x5bc71e:c.instructions+=6;goto B5bc71e;
case 0x5bc721:c.instructions+=5;goto B5bc721;
case 0x5bc722:c.instructions+=4;goto B5bc722;
case 0x5bc728:c.instructions+=3;goto B5bc728;
case 0x5bc729:c.instructions+=2;goto B5bc729;
case 0x5bc72a:c.instructions+=1;goto B5bc72a;
case 0x5bc730:goto L5bc730;
case 0x5bc736:c.instructions+=9;goto B5bc736;
case 0x5bc739:c.instructions+=8;goto B5bc739;
case 0x5bc73f:c.instructions+=7;goto B5bc73f;
case 0x5bc742:c.instructions+=6;goto B5bc742;
case 0x5bc748:c.instructions+=5;goto B5bc748;
case 0x5bc74a:c.instructions+=4;goto B5bc74a;
case 0x5bc74b:c.instructions+=3;goto B5bc74b;
case 0x5bc74c:c.instructions+=2;goto B5bc74c;
case 0x5bc74d:c.instructions+=1;goto B5bc74d;
case 0x5bc753:goto L5bc753;
case 0x5bc756:c.instructions+=2;goto B5bc756;
case 0x5bc758:c.instructions+=1;goto B5bc758;
case 0x5bc75a:goto L5bc75a;
case 0x5bc760:c.instructions+=5;goto B5bc760;
case 0x5bc766:c.instructions+=4;goto B5bc766;
case 0x5bc76c:c.instructions+=3;goto B5bc76c;
case 0x5bc76e:c.instructions+=2;goto B5bc76e;
case 0x5bc76f:c.instructions+=1;goto B5bc76f;
case 0x5bc774:goto L5bc774;
case 0x5bc77a:c.instructions+=4;goto B5bc77a;
case 0x5bc780:c.instructions+=3;goto B5bc780;
case 0x5bc782:c.instructions+=2;goto B5bc782;
case 0x5bc785:c.instructions+=1;goto B5bc785;
case 0x5bc78a:goto L5bc78a;
case 0x5bc790:c.instructions+=4;goto B5bc790;
case 0x5bc796:c.instructions+=3;goto B5bc796;
case 0x5bc798:c.instructions+=2;goto B5bc798;
case 0x5bc79b:c.instructions+=1;goto B5bc79b;
case 0x5bc7a0:goto L5bc7a0;
case 0x5bc7a2:c.instructions+=4;goto B5bc7a2;
case 0x5bc7a3:c.instructions+=3;goto B5bc7a3;
case 0x5bc7a5:c.instructions+=2;goto B5bc7a5;
case 0x5bc7a6:c.instructions+=1;goto B5bc7a6;
case 0x5bc7ac:goto L5bc7ac;
case 0x5bc7ad:goto L5bc7ad;
case 0x5bc7ae:c.instructions+=2;goto B5bc7ae;
case 0x5bc7af:c.instructions+=1;goto B5bc7af;
case 0x5bc7b0:goto L5bc7b0;
case 0x5bc7b1:c.instructions+=16;goto B5bc7b1;
case 0x5bc7b3:c.instructions+=15;goto B5bc7b3;
case 0x5bc7b6:c.instructions+=14;goto B5bc7b6;
case 0x5bc7b9:c.instructions+=13;goto B5bc7b9;
case 0x5bc7ba:c.instructions+=12;goto B5bc7ba;
case 0x5bc7bc:c.instructions+=11;goto B5bc7bc;
case 0x5bc7c2:c.instructions+=10;goto B5bc7c2;
case 0x5bc7c5:c.instructions+=9;goto B5bc7c5;
case 0x5bc7c8:c.instructions+=8;goto B5bc7c8;
case 0x5bc7ce:c.instructions+=7;goto B5bc7ce;
case 0x5bc7d0:c.instructions+=6;goto B5bc7d0;
case 0x5bc7d1:c.instructions+=5;goto B5bc7d1;
case 0x5bc7d7:c.instructions+=4;goto B5bc7d7;
case 0x5bc7d8:c.instructions+=3;goto B5bc7d8;
case 0x5bc7d9:c.instructions+=2;goto B5bc7d9;
case 0x5bc7da:c.instructions+=1;goto B5bc7da;
case 0x5bc7e0:goto L5bc7e0;
case 0x5bc7e3:c.instructions+=2;goto B5bc7e3;
case 0x5bc7e5:c.instructions+=1;goto B5bc7e5;
case 0x5bc7eb:goto L5bc7eb;
case 0x5bc7ef:c.instructions+=2;goto B5bc7ef;
case 0x5bc7f0:c.instructions+=1;goto B5bc7f0;
case 0x5bc7f5:goto L5bc7f5;
case 0x5bc7fa:c.instructions+=7;goto B5bc7fa;
case 0x5bc802:c.instructions+=6;goto B5bc802;
case 0x5bc80a:c.instructions+=5;goto B5bc80a;
case 0x5bc812:c.instructions+=4;goto B5bc812;
case 0x5bc81a:c.instructions+=3;goto B5bc81a;
case 0x5bc81d:c.instructions+=2;goto B5bc81d;
case 0x5bc81e:c.instructions+=1;goto B5bc81e;
case 0x5bc823:goto L5bc823;
case 0x5bc826:c.instructions+=2;goto B5bc826;
case 0x5bc828:c.instructions+=1;goto B5bc828;
case 0x5bc82a:goto L5bc82a;
case 0x5bc82c:c.instructions+=7;goto B5bc82c;
case 0x5bc830:c.instructions+=6;goto B5bc830;
case 0x5bc831:c.instructions+=5;goto B5bc831;
case 0x5bc834:c.instructions+=4;goto B5bc834;
case 0x5bc835:c.instructions+=3;goto B5bc835;
case 0x5bc839:c.instructions+=2;goto B5bc839;
case 0x5bc83a:c.instructions+=1;goto B5bc83a;
case 0x5bc83f:goto L5bc83f;
case 0x5bc843:c.instructions+=17;goto B5bc843;
case 0x5bc847:c.instructions+=16;goto B5bc847;
case 0x5bc84b:c.instructions+=15;goto B5bc84b;
case 0x5bc84f:c.instructions+=14;goto B5bc84f;
case 0x5bc853:c.instructions+=13;goto B5bc853;
case 0x5bc857:c.instructions+=12;goto B5bc857;
case 0x5bc85d:c.instructions+=11;goto B5bc85d;
case 0x5bc861:c.instructions+=10;goto B5bc861;
case 0x5bc865:c.instructions+=9;goto B5bc865;
case 0x5bc868:c.instructions+=8;goto B5bc868;
case 0x5bc86b:c.instructions+=7;goto B5bc86b;
case 0x5bc871:c.instructions+=6;goto B5bc871;
case 0x5bc873:c.instructions+=5;goto B5bc873;
case 0x5bc877:c.instructions+=4;goto B5bc877;
case 0x5bc878:c.instructions+=3;goto B5bc878;
case 0x5bc879:c.instructions+=2;goto B5bc879;
case 0x5bc87a:c.instructions+=1;goto B5bc87a;
case 0x5bc880:goto L5bc880;
case 0x5bc881:c.instructions+=4;goto B5bc881;
case 0x5bc882:c.instructions+=3;goto B5bc882;
case 0x5bc884:c.instructions+=2;goto B5bc884;
case 0x5bc885:c.instructions+=1;goto B5bc885;
case 0x5bc890:goto L5bc890;
case 0x5bc891:c.instructions+=11;goto B5bc891;
case 0x5bc893:c.instructions+=10;goto B5bc893;
case 0x5bc896:c.instructions+=9;goto B5bc896;
case 0x5bc899:c.instructions+=8;goto B5bc899;
case 0x5bc89a:c.instructions+=7;goto B5bc89a;
case 0x5bc89b:c.instructions+=6;goto B5bc89b;
case 0x5bc89c:c.instructions+=5;goto B5bc89c;
case 0x5bc89e:c.instructions+=4;goto B5bc89e;
case 0x5bc8a0:c.instructions+=3;goto B5bc8a0;
case 0x5bc8a5:c.instructions+=2;goto B5bc8a5;
case 0x5bc8a7:c.instructions+=1;goto B5bc8a7;
case 0x5bc8ac:goto L5bc8ac;
case 0x5bc8af:c.instructions+=2;goto B5bc8af;
case 0x5bc8b0:c.instructions+=1;goto B5bc8b0;
case 0x5bc8b5:goto L5bc8b5;
case 0x5bc8bb:c.instructions+=11;goto B5bc8bb;
case 0x5bc8bd:c.instructions+=10;goto B5bc8bd;
case 0x5bc8c0:c.instructions+=9;goto B5bc8c0;
case 0x5bc8c3:c.instructions+=8;goto B5bc8c3;
case 0x5bc8c6:c.instructions+=7;goto B5bc8c6;
case 0x5bc8c8:c.instructions+=6;goto B5bc8c8;
case 0x5bc8cb:c.instructions+=5;goto B5bc8cb;
case 0x5bc8cc:c.instructions+=4;goto B5bc8cc;
case 0x5bc8d2:c.instructions+=3;goto B5bc8d2;
case 0x5bc8d3:c.instructions+=2;goto B5bc8d3;
case 0x5bc8d4:c.instructions+=1;goto B5bc8d4;
case 0x5bc8da:goto L5bc8da;
case 0x5bc8e0:c.instructions+=9;goto B5bc8e0;
case 0x5bc8e3:c.instructions+=8;goto B5bc8e3;
case 0x5bc8e9:c.instructions+=7;goto B5bc8e9;
case 0x5bc8ec:c.instructions+=6;goto B5bc8ec;
case 0x5bc8f2:c.instructions+=5;goto B5bc8f2;
case 0x5bc8f4:c.instructions+=4;goto B5bc8f4;
case 0x5bc8f5:c.instructions+=3;goto B5bc8f5;
case 0x5bc8f6:c.instructions+=2;goto B5bc8f6;
case 0x5bc8f7:c.instructions+=1;goto B5bc8f7;
case 0x5bc8fd:goto L5bc8fd;
case 0x5bc903:c.instructions+=9;goto B5bc903;
case 0x5bc906:c.instructions+=8;goto B5bc906;
case 0x5bc90c:c.instructions+=7;goto B5bc90c;
case 0x5bc90f:c.instructions+=6;goto B5bc90f;
case 0x5bc915:c.instructions+=5;goto B5bc915;
case 0x5bc917:c.instructions+=4;goto B5bc917;
case 0x5bc918:c.instructions+=3;goto B5bc918;
case 0x5bc919:c.instructions+=2;goto B5bc919;
case 0x5bc91a:c.instructions+=1;goto B5bc91a;
case 0x5bc920:goto L5bc920;
case 0x5bc923:c.instructions+=2;goto B5bc923;
case 0x5bc925:c.instructions+=1;goto B5bc925;
case 0x5bc92b:goto L5bc92b;
case 0x5bc92f:c.instructions+=2;goto B5bc92f;
case 0x5bc930:c.instructions+=1;goto B5bc930;
case 0x5bc935:goto L5bc935;
case 0x5bc93a:c.instructions+=7;goto B5bc93a;
case 0x5bc942:c.instructions+=6;goto B5bc942;
case 0x5bc94a:c.instructions+=5;goto B5bc94a;
case 0x5bc952:c.instructions+=4;goto B5bc952;
case 0x5bc95a:c.instructions+=3;goto B5bc95a;
case 0x5bc95d:c.instructions+=2;goto B5bc95d;
case 0x5bc95e:c.instructions+=1;goto B5bc95e;
case 0x5bc963:goto L5bc963;
case 0x5bc966:c.instructions+=2;goto B5bc966;
case 0x5bc968:c.instructions+=1;goto B5bc968;
case 0x5bc96a:goto L5bc96a;
case 0x5bc96c:c.instructions+=7;goto B5bc96c;
case 0x5bc970:c.instructions+=6;goto B5bc970;
case 0x5bc971:c.instructions+=5;goto B5bc971;
case 0x5bc974:c.instructions+=4;goto B5bc974;
case 0x5bc975:c.instructions+=3;goto B5bc975;
case 0x5bc979:c.instructions+=2;goto B5bc979;
case 0x5bc97a:c.instructions+=1;goto B5bc97a;
case 0x5bc97f:goto L5bc97f;
case 0x5bc983:c.instructions+=17;goto B5bc983;
case 0x5bc987:c.instructions+=16;goto B5bc987;
case 0x5bc98b:c.instructions+=15;goto B5bc98b;
case 0x5bc98f:c.instructions+=14;goto B5bc98f;
case 0x5bc993:c.instructions+=13;goto B5bc993;
case 0x5bc997:c.instructions+=12;goto B5bc997;
case 0x5bc99d:c.instructions+=11;goto B5bc99d;
case 0x5bc9a1:c.instructions+=10;goto B5bc9a1;
case 0x5bc9a5:c.instructions+=9;goto B5bc9a5;
case 0x5bc9a8:c.instructions+=8;goto B5bc9a8;
case 0x5bc9ab:c.instructions+=7;goto B5bc9ab;
case 0x5bc9b1:c.instructions+=6;goto B5bc9b1;
case 0x5bc9b3:c.instructions+=5;goto B5bc9b3;
case 0x5bc9b7:c.instructions+=4;goto B5bc9b7;
case 0x5bc9b8:c.instructions+=3;goto B5bc9b8;
case 0x5bc9b9:c.instructions+=2;goto B5bc9b9;
case 0x5bc9ba:c.instructions+=1;goto B5bc9ba;
case 0x5bc9c0:goto L5bc9c0;
case 0x5bc9c6:c.instructions+=4;goto B5bc9c6;
case 0x5bc9cc:c.instructions+=3;goto B5bc9cc;
case 0x5bc9d2:c.instructions+=2;goto B5bc9d2;
case 0x5bc9d4:c.instructions+=1;goto B5bc9d4;
case 0x5bc9d9:goto L5bc9d9;
case 0x5bc9df:c.instructions+=4;goto B5bc9df;
case 0x5bc9e5:c.instructions+=3;goto B5bc9e5;
case 0x5bc9e7:c.instructions+=2;goto B5bc9e7;
case 0x5bc9ea:c.instructions+=1;goto B5bc9ea;
case 0x5bc9ef:goto L5bc9ef;
case 0x5bc9f5:c.instructions+=4;goto B5bc9f5;
case 0x5bc9fb:c.instructions+=3;goto B5bc9fb;
case 0x5bc9fd:c.instructions+=2;goto B5bc9fd;
case 0x5bca00:c.instructions+=1;goto B5bca00;
case 0x5bca05:goto L5bca05;
case 0x5bca07:c.instructions+=4;goto B5bca07;
case 0x5bca08:c.instructions+=3;goto B5bca08;
case 0x5bca0a:c.instructions+=2;goto B5bca0a;
case 0x5bca0b:c.instructions+=1;goto B5bca0b;
case 0x5bca11:goto L5bca11;
case 0x5bca12:c.instructions+=5;goto B5bca12;
case 0x5bca13:c.instructions+=4;goto B5bca13;
case 0x5bca14:c.instructions+=3;goto B5bca14;
case 0x5bca16:c.instructions+=2;goto B5bca16;
case 0x5bca17:c.instructions+=1;goto B5bca17;
case 0x5bca18:goto L5bca18;
case 0x5bca1a:c.instructions+=3;goto B5bca1a;
case 0x5bca1c:c.instructions+=2;goto B5bca1c;
case 0x5bca21:c.instructions+=1;goto B5bca21;
case 0x5bca26:goto L5bca26;
case 0x5bca29:c.instructions+=2;goto B5bca29;
case 0x5bca2a:c.instructions+=1;goto B5bca2a;
case 0x5bca2f:goto L5bca2f;
case 0x5bca35:c.instructions+=11;goto B5bca35;
case 0x5bca37:c.instructions+=10;goto B5bca37;
case 0x5bca3a:c.instructions+=9;goto B5bca3a;
case 0x5bca3d:c.instructions+=8;goto B5bca3d;
case 0x5bca40:c.instructions+=7;goto B5bca40;
case 0x5bca42:c.instructions+=6;goto B5bca42;
case 0x5bca45:c.instructions+=5;goto B5bca45;
case 0x5bca46:c.instructions+=4;goto B5bca46;
case 0x5bca4c:c.instructions+=3;goto B5bca4c;
case 0x5bca4d:c.instructions+=2;goto B5bca4d;
case 0x5bca4e:c.instructions+=1;goto B5bca4e;
case 0x5bca54:goto L5bca54;
case 0x5bca5a:c.instructions+=9;goto B5bca5a;
case 0x5bca5d:c.instructions+=8;goto B5bca5d;
case 0x5bca63:c.instructions+=7;goto B5bca63;
case 0x5bca66:c.instructions+=6;goto B5bca66;
case 0x5bca6c:c.instructions+=5;goto B5bca6c;
case 0x5bca6e:c.instructions+=4;goto B5bca6e;
case 0x5bca6f:c.instructions+=3;goto B5bca6f;
case 0x5bca70:c.instructions+=2;goto B5bca70;
case 0x5bca71:c.instructions+=1;goto B5bca71;
case 0x5bca77:goto L5bca77;
case 0x5bca7d:c.instructions+=9;goto B5bca7d;
case 0x5bca80:c.instructions+=8;goto B5bca80;
case 0x5bca86:c.instructions+=7;goto B5bca86;
case 0x5bca89:c.instructions+=6;goto B5bca89;
case 0x5bca8f:c.instructions+=5;goto B5bca8f;
case 0x5bca91:c.instructions+=4;goto B5bca91;
case 0x5bca92:c.instructions+=3;goto B5bca92;
case 0x5bca93:c.instructions+=2;goto B5bca93;
case 0x5bca94:c.instructions+=1;goto B5bca94;
case 0x5bca9a:goto L5bca9a;
case 0x5bcaa0:c.instructions+=9;goto B5bcaa0;
case 0x5bcaa3:c.instructions+=8;goto B5bcaa3;
case 0x5bcaa9:c.instructions+=7;goto B5bcaa9;
case 0x5bcaac:c.instructions+=6;goto B5bcaac;
case 0x5bcab2:c.instructions+=5;goto B5bcab2;
case 0x5bcab4:c.instructions+=4;goto B5bcab4;
case 0x5bcab5:c.instructions+=3;goto B5bcab5;
case 0x5bcab6:c.instructions+=2;goto B5bcab6;
case 0x5bcab7:c.instructions+=1;goto B5bcab7;
case 0x5bcaba:goto L5bcaba;
case 0x5bcabb:c.instructions+=5;goto B5bcabb;
case 0x5bcabc:c.instructions+=4;goto B5bcabc;
case 0x5bcabd:c.instructions+=3;goto B5bcabd;
case 0x5bcabf:c.instructions+=2;goto B5bcabf;
case 0x5bcac0:c.instructions+=1;goto B5bcac0;
case 0x5bcad0:goto L5bcad0;
case 0x5bcad5:c.instructions+=9;goto B5bcad5;
case 0x5bcadb:c.instructions+=8;goto B5bcadb;
case 0x5bcade:c.instructions+=7;goto B5bcade;
case 0x5bcae1:c.instructions+=6;goto B5bcae1;
case 0x5bcae4:c.instructions+=5;goto B5bcae4;
case 0x5bcae6:c.instructions+=4;goto B5bcae6;
case 0x5bcaec:c.instructions+=3;goto B5bcaec;
case 0x5bcaed:c.instructions+=2;goto B5bcaed;
case 0x5bcaf3:c.instructions+=1;goto B5bcaf3;
case 0x5bcaf5:goto L5bcaf5;
case 0x5bcafb:goto L5bcafb;
case 0x5bcafc:c.instructions+=3;goto B5bcafc;
case 0x5bcafd:c.instructions+=2;goto B5bcafd;
case 0x5bcafe:c.instructions+=1;goto B5bcafe;
case 0x5bcb04:goto L5bcb04;
case 0x5bcb05:c.instructions+=1;goto B5bcb05;
case 0x5bcb10:goto L5bcb10;
case 0x5bcb15:c.instructions+=6;goto B5bcb15;
case 0x5bcb17:c.instructions+=5;goto B5bcb17;
case 0x5bcb19:c.instructions+=4;goto B5bcb19;
case 0x5bcb1b:c.instructions+=3;goto B5bcb1b;
case 0x5bcb1d:c.instructions+=2;goto B5bcb1d;
case 0x5bcb1e:c.instructions+=1;goto B5bcb1e;
case 0x5bcb24:goto L5bcb24;
case 0x5bcb29:c.instructions+=6;goto B5bcb29;
case 0x5bcb2b:c.instructions+=5;goto B5bcb2b;
case 0x5bcb2d:c.instructions+=4;goto B5bcb2d;
case 0x5bcb2f:c.instructions+=3;goto B5bcb2f;
case 0x5bcb31:c.instructions+=2;goto B5bcb31;
case 0x5bcb32:c.instructions+=1;goto B5bcb32;
case 0x5bcb38:goto L5bcb38;
case 0x5bcb3d:c.instructions+=6;goto B5bcb3d;
case 0x5bcb3f:c.instructions+=5;goto B5bcb3f;
case 0x5bcb41:c.instructions+=4;goto B5bcb41;
case 0x5bcb43:c.instructions+=3;goto B5bcb43;
case 0x5bcb45:c.instructions+=2;goto B5bcb45;
case 0x5bcb46:c.instructions+=1;goto B5bcb46;
case 0x5bcb4c:goto L5bcb4c;
case 0x5bcb51:c.instructions+=6;goto B5bcb51;
case 0x5bcb53:c.instructions+=5;goto B5bcb53;
case 0x5bcb55:c.instructions+=4;goto B5bcb55;
case 0x5bcb57:c.instructions+=3;goto B5bcb57;
case 0x5bcb59:c.instructions+=2;goto B5bcb59;
case 0x5bcb5a:c.instructions+=1;goto B5bcb5a;
case 0x5bcb60:goto L5bcb60;
case 0x5bcb70:goto L5bcb70;
case 0x5bcb75:c.instructions+=2;goto B5bcb75;
case 0x5bcb77:c.instructions+=1;goto B5bcb77;
case 0x5bcb79:goto L5bcb79;
case 0x5bcb7d:c.instructions+=6;goto B5bcb7d;
case 0x5bcb82:c.instructions+=5;goto B5bcb82;
case 0x5bcb84:c.instructions+=4;goto B5bcb84;
case 0x5bcb85:c.instructions+=3;goto B5bcb85;
case 0x5bcb87:c.instructions+=2;goto B5bcb87;
case 0x5bcb88:c.instructions+=1;goto B5bcb88;
case 0x5bcb8e:goto L5bcb8e;
case 0x5bcb92:c.instructions+=6;goto B5bcb92;
case 0x5bcb97:c.instructions+=5;goto B5bcb97;
case 0x5bcb99:c.instructions+=4;goto B5bcb99;
case 0x5bcb9a:c.instructions+=3;goto B5bcb9a;
case 0x5bcb9c:c.instructions+=2;goto B5bcb9c;
case 0x5bcb9d:c.instructions+=1;goto B5bcb9d;
case 0x5bcba3:goto L5bcba3;
case 0x5bcba4:goto L5bcba4;
case 0x5bcba8:c.instructions+=4;goto B5bcba8;
case 0x5bcbac:c.instructions+=3;goto B5bcbac;
case 0x5bcbb1:c.instructions+=2;goto B5bcbb1;
case 0x5bcbb7:c.instructions+=1;goto B5bcbb7;
case 0x5bcbc0:goto L5bcbc0;
case 0x5bcbc5:c.instructions+=2;goto B5bcbc5;
case 0x5bcbc7:c.instructions+=1;goto B5bcbc7;
case 0x5bcbc9:goto L5bcbc9;
case 0x5bcbcd:c.instructions+=6;goto B5bcbcd;
case 0x5bcbd2:c.instructions+=5;goto B5bcbd2;
case 0x5bcbd4:c.instructions+=4;goto B5bcbd4;
case 0x5bcbd5:c.instructions+=3;goto B5bcbd5;
case 0x5bcbd7:c.instructions+=2;goto B5bcbd7;
case 0x5bcbd8:c.instructions+=1;goto B5bcbd8;
case 0x5bcbde:goto L5bcbde;
case 0x5bcbe2:c.instructions+=6;goto B5bcbe2;
case 0x5bcbe7:c.instructions+=5;goto B5bcbe7;
case 0x5bcbe9:c.instructions+=4;goto B5bcbe9;
case 0x5bcbea:c.instructions+=3;goto B5bcbea;
case 0x5bcbec:c.instructions+=2;goto B5bcbec;
case 0x5bcbed:c.instructions+=1;goto B5bcbed;
case 0x5bcbf3:goto L5bcbf3;
case 0x5bcbf7:c.instructions+=6;goto B5bcbf7;
case 0x5bcbfc:c.instructions+=5;goto B5bcbfc;
case 0x5bcbfe:c.instructions+=4;goto B5bcbfe;
case 0x5bcbff:c.instructions+=3;goto B5bcbff;
case 0x5bcc01:c.instructions+=2;goto B5bcc01;
case 0x5bcc02:c.instructions+=1;goto B5bcc02;
case 0x5bcc08:goto L5bcc08;
case 0x5bcc09:goto L5bcc09;
case 0x5bcc0d:c.instructions+=6;goto B5bcc0d;
case 0x5bcc11:c.instructions+=5;goto B5bcc11;
case 0x5bcc15:c.instructions+=4;goto B5bcc15;
case 0x5bcc1a:c.instructions+=3;goto B5bcc1a;
case 0x5bcc20:c.instructions+=2;goto B5bcc20;
case 0x5bcc26:c.instructions+=1;goto B5bcc26;
case 0x5bcc30:goto L5bcc30;
case 0x5bcc31:c.instructions+=11;goto B5bcc31;
case 0x5bcc33:c.instructions+=10;goto B5bcc33;
case 0x5bcc36:c.instructions+=9;goto B5bcc36;
case 0x5bcc39:c.instructions+=8;goto B5bcc39;
case 0x5bcc3f:c.instructions+=7;goto B5bcc3f;
case 0x5bcc40:c.instructions+=6;goto B5bcc40;
case 0x5bcc43:c.instructions+=5;goto B5bcc43;
case 0x5bcc45:c.instructions+=4;goto B5bcc45;
case 0x5bcc47:c.instructions+=3;goto B5bcc47;
case 0x5bcc4d:c.instructions+=2;goto B5bcc4d;
case 0x5bcc4e:c.instructions+=1;goto B5bcc4e;
case 0x5bcc50:goto L5bcc50;
case 0x5bcc56:c.instructions+=1;goto B5bcc56;
case 0x5bcc5c:goto L5bcc5c;
case 0x5bcc62:c.instructions+=5;goto B5bcc62;
case 0x5bcc68:c.instructions+=4;goto B5bcc68;
case 0x5bcc6e:c.instructions+=3;goto B5bcc6e;
case 0x5bcc71:c.instructions+=2;goto B5bcc71;
case 0x5bcc73:c.instructions+=1;goto B5bcc73;
case 0x5bcc79:goto L5bcc79;
case 0x5bcc7b:c.instructions+=2;goto B5bcc7b;
case 0x5bcc7c:c.instructions+=1;goto B5bcc7c;
case 0x5bcc7e:goto L5bcc7e;
case 0x5bcc81:c.instructions+=6;goto B5bcc81;
case 0x5bcc84:c.instructions+=5;goto B5bcc84;
case 0x5bcc8a:c.instructions+=4;goto B5bcc8a;
case 0x5bcc8c:c.instructions+=3;goto B5bcc8c;
case 0x5bcc8d:c.instructions+=2;goto B5bcc8d;
case 0x5bcc8e:c.instructions+=1;goto B5bcc8e;
case 0x5bcc94:goto L5bcc94;
case 0x5bcc96:goto L5bcc96;
case 0x5bcc9c:c.instructions+=4;goto B5bcc9c;
case 0x5bcc9e:c.instructions+=3;goto B5bcc9e;
case 0x5bcca0:c.instructions+=2;goto B5bcca0;
case 0x5bcca1:c.instructions+=1;goto B5bcca1;
case 0x5bcca7:goto L5bcca7;
case 0x5bccab:c.instructions+=1;goto B5bccab;
case 0x5bccad:goto L5bccad;
case 0x5bccaf:c.instructions+=2;goto B5bccaf;
case 0x5bccb1:c.instructions+=1;goto B5bccb1;
case 0x5bccb3:goto L5bccb3;
case 0x5bccb5:c.instructions+=1;goto B5bccb5;
case 0x5bccb7:goto L5bccb7;
case 0x5bccbc:goto L5bccbc;
case 0x5bccbf:c.instructions+=3;goto B5bccbf;
case 0x5bccc2:c.instructions+=2;goto B5bccc2;
case 0x5bccc4:c.instructions+=1;goto B5bccc4;
case 0x5bccc6:goto L5bccc6;
case 0x5bccc8:c.instructions+=3;goto B5bccc8;
case 0x5bccca:c.instructions+=2;goto B5bccca;
case 0x5bcccc:c.instructions+=1;goto B5bcccc;
case 0x5bccce:goto L5bccce;
case 0x5bccd1:c.instructions+=5;goto B5bccd1;
case 0x5bccd6:c.instructions+=4;goto B5bccd6;
case 0x5bccd7:c.instructions+=3;goto B5bccd7;
case 0x5bccd9:c.instructions+=2;goto B5bccd9;
case 0x5bccde:c.instructions+=1;goto B5bccde;
case 0x5bcce0:goto L5bcce0;
case 0x5bcce7:goto L5bcce7;
case 0x5bccec:c.instructions+=2;goto B5bccec;
case 0x5bccf1:c.instructions+=1;goto B5bccf1;
case 0x5bccf3:goto L5bccf3;
case 0x5bccf8:c.instructions+=1;goto B5bccf8;
case 0x5bccfa:goto L5bccfa;
case 0x5bccff:c.instructions+=2;goto B5bccff;
case 0x5bcd04:c.instructions+=1;goto B5bcd04;
case 0x5bcd06:goto L5bcd06;
case 0x5bcd0b:goto L5bcd0b;
case 0x5bcd10:goto L5bcd10;
case 0x5bcd11:c.instructions+=2;goto B5bcd11;
case 0x5bcd12:c.instructions+=1;goto B5bcd12;
case 0x5bcd14:goto L5bcd14;
case 0x5bcd19:goto L5bcd19;
case 0x5bcd1c:c.instructions+=5;goto B5bcd1c;
case 0x5bcd1f:c.instructions+=4;goto B5bcd1f;
case 0x5bcd21:c.instructions+=3;goto B5bcd21;
case 0x5bcd26:c.instructions+=2;goto B5bcd26;
case 0x5bcd29:c.instructions+=1;goto B5bcd29;
case 0x5bcd2b:goto L5bcd2b;
case 0x5bcd2e:c.instructions+=1;goto B5bcd2e;
case 0x5bcd30:goto L5bcd30;
case 0x5bcd35:c.instructions+=5;goto B5bcd35;
case 0x5bcd37:c.instructions+=4;goto B5bcd37;
case 0x5bcd39:c.instructions+=3;goto B5bcd39;
case 0x5bcd3b:c.instructions+=2;goto B5bcd3b;
case 0x5bcd3c:c.instructions+=1;goto B5bcd3c;
case 0x5bcd42:goto L5bcd42;
case 0x5bcd47:c.instructions+=5;goto B5bcd47;
case 0x5bcd49:c.instructions+=4;goto B5bcd49;
case 0x5bcd4b:c.instructions+=3;goto B5bcd4b;
case 0x5bcd4d:c.instructions+=2;goto B5bcd4d;
case 0x5bcd4e:c.instructions+=1;goto B5bcd4e;
case 0x5bcd54:goto L5bcd54;
case 0x5bcd56:goto L5bcd56;
case 0x5bcd5b:c.instructions+=3;goto B5bcd5b;
case 0x5bcd5e:c.instructions+=2;goto B5bcd5e;
case 0x5bcd60:c.instructions+=1;goto B5bcd60;
case 0x5bcd62:goto L5bcd62;
case 0x5bcd64:c.instructions+=3;goto B5bcd64;
case 0x5bcd66:c.instructions+=2;goto B5bcd66;
case 0x5bcd67:c.instructions+=1;goto B5bcd67;
case 0x5bcd6d:goto L5bcd6d;
case 0x5bcd72:c.instructions+=5;goto B5bcd72;
case 0x5bcd74:c.instructions+=4;goto B5bcd74;
case 0x5bcd76:c.instructions+=3;goto B5bcd76;
case 0x5bcd78:c.instructions+=2;goto B5bcd78;
case 0x5bcd79:c.instructions+=1;goto B5bcd79;
case 0x5bcd7f:goto L5bcd7f;
case 0x5bcd81:goto L5bcd81;
case 0x5bcd83:c.instructions+=3;goto B5bcd83;
case 0x5bcd85:c.instructions+=2;goto B5bcd85;
case 0x5bcd86:c.instructions+=1;goto B5bcd86;
case 0x5bcd8c:goto L5bcd8c;
case 0x5bcd92:c.instructions+=9;goto B5bcd92;
case 0x5bcd95:c.instructions+=8;goto B5bcd95;
case 0x5bcd98:c.instructions+=7;goto B5bcd98;
case 0x5bcd9b:c.instructions+=6;goto B5bcd9b;
case 0x5bcd9d:c.instructions+=5;goto B5bcd9d;
case 0x5bcd9f:c.instructions+=4;goto B5bcd9f;
case 0x5bcda4:c.instructions+=3;goto B5bcda4;
case 0x5bcda5:c.instructions+=2;goto B5bcda5;
case 0x5bcda6:c.instructions+=1;goto B5bcda6;
case 0x5bcda9:goto L5bcda9;
case 0x5bcdae:c.instructions+=8;goto B5bcdae;
case 0x5bcdb6:c.instructions+=7;goto B5bcdb6;
case 0x5bcdbe:c.instructions+=6;goto B5bcdbe;
case 0x5bcdc6:c.instructions+=5;goto B5bcdc6;
case 0x5bcdce:c.instructions+=4;goto B5bcdce;
case 0x5bcdd1:c.instructions+=3;goto B5bcdd1;
case 0x5bcdd7:c.instructions+=2;goto B5bcdd7;
case 0x5bcdd9:c.instructions+=1;goto B5bcdd9;
case 0x5bcddf:goto L5bcddf;
case 0x5bcde4:c.instructions+=2;goto B5bcde4;
case 0x5bcde6:c.instructions+=1;goto B5bcde6;
case 0x5bcdec:goto L5bcdec;
case 0x5bcdf2:c.instructions+=5;goto B5bcdf2;
case 0x5bcdf5:c.instructions+=4;goto B5bcdf5;
case 0x5bcdf7:c.instructions+=3;goto B5bcdf7;
case 0x5bcdfd:c.instructions+=2;goto B5bcdfd;
case 0x5bce01:c.instructions+=1;goto B5bce01;
case 0x5bce03:goto L5bce03;
case 0x5bce07:c.instructions+=9;goto B5bce07;
case 0x5bce0b:c.instructions+=8;goto B5bce0b;
case 0x5bce0f:c.instructions+=7;goto B5bce0f;
case 0x5bce13:c.instructions+=6;goto B5bce13;
case 0x5bce17:c.instructions+=5;goto B5bce17;
case 0x5bce1d:c.instructions+=4;goto B5bce1d;
case 0x5bce21:c.instructions+=3;goto B5bce21;
case 0x5bce25:c.instructions+=2;goto B5bce25;
case 0x5bce2b:c.instructions+=1;goto B5bce2b;
case 0x5bce30:goto L5bce30;
case 0x5bce36:c.instructions+=4;goto B5bce36;
case 0x5bce3c:c.instructions+=3;goto B5bce3c;
case 0x5bce3e:c.instructions+=2;goto B5bce3e;
case 0x5bce41:c.instructions+=1;goto B5bce41;
case 0x5bce43:goto L5bce43;
case 0x5bce49:c.instructions+=4;goto B5bce49;
case 0x5bce4f:c.instructions+=3;goto B5bce4f;
case 0x5bce51:c.instructions+=2;goto B5bce51;
case 0x5bce54:c.instructions+=1;goto B5bce54;
case 0x5bce56:goto L5bce56;
case 0x5bce5a:c.instructions+=3;goto B5bce5a;
case 0x5bce5b:c.instructions+=2;goto B5bce5b;
case 0x5bce5d:c.instructions+=1;goto B5bce5d;
case 0x5bce62:goto L5bce62;
case 0x5bce66:c.instructions+=3;goto B5bce66;
case 0x5bce67:c.instructions+=2;goto B5bce67;
case 0x5bce69:c.instructions+=1;goto B5bce69;
case 0x5bce6e:goto L5bce6e;
case 0x5bce70:goto L5bce70;
case 0x5bce74:c.instructions+=19;goto B5bce74;
case 0x5bce78:c.instructions+=18;goto B5bce78;
case 0x5bce7c:c.instructions+=17;goto B5bce7c;
case 0x5bce80:c.instructions+=16;goto B5bce80;
case 0x5bce84:c.instructions+=15;goto B5bce84;
case 0x5bce8a:c.instructions+=14;goto B5bce8a;
case 0x5bce90:c.instructions+=13;goto B5bce90;
case 0x5bce96:c.instructions+=12;goto B5bce96;
case 0x5bce9a:c.instructions+=11;goto B5bce9a;
case 0x5bce9b:c.instructions+=10;goto B5bce9b;
case 0x5bce9c:c.instructions+=9;goto B5bce9c;
case 0x5bce9e:c.instructions+=8;goto B5bce9e;
case 0x5bcea2:c.instructions+=7;goto B5bcea2;
case 0x5bcea6:c.instructions+=6;goto B5bcea6;
case 0x5bceaa:c.instructions+=5;goto B5bceaa;
case 0x5bceab:c.instructions+=4;goto B5bceab;
case 0x5bceac:c.instructions+=3;goto B5bceac;
case 0x5bceb2:c.instructions+=2;goto B5bceb2;
case 0x5bceb6:c.instructions+=1;goto B5bceb6;
case 0x5bcebb:goto L5bcebb;
case 0x5bcebf:c.instructions+=9;goto B5bcebf;
case 0x5bcec5:c.instructions+=8;goto B5bcec5;
case 0x5bcecb:c.instructions+=7;goto B5bcecb;
case 0x5bcecf:c.instructions+=6;goto B5bcecf;
case 0x5bced0:c.instructions+=5;goto B5bced0;
case 0x5bced1:c.instructions+=4;goto B5bced1;
case 0x5bced2:c.instructions+=3;goto B5bced2;
case 0x5bced3:c.instructions+=2;goto B5bced3;
case 0x5bced5:c.instructions+=1;goto B5bced5;
case 0x5bceda:goto L5bceda;
case 0x5bcede:goto L5bcede;
case 0x5bcee3:c.instructions+=1;goto B5bcee3;
case 0x5bceed:goto L5bceed;
case 0x5bceef:c.instructions+=1;goto B5bceef;
case 0x5bcef1:goto L5bcef1;
case 0x5bcef7:c.instructions+=2;goto B5bcef7;
case 0x5bcef9:c.instructions+=1;goto B5bcef9;
case 0x5bcefb:goto L5bcefb;
case 0x5bcefe:c.instructions+=3;goto B5bcefe;
case 0x5bcf04:c.instructions+=2;goto B5bcf04;
case 0x5bcf06:c.instructions+=1;goto B5bcf06;
case 0x5bcf08:goto L5bcf08;
case 0x5bcf0c:c.instructions+=2;goto B5bcf0c;
case 0x5bcf0d:c.instructions+=1;goto B5bcf0d;
case 0x5bcf12:goto L5bcf12;
case 0x5bcf16:c.instructions+=14;goto B5bcf16;
case 0x5bcf1a:c.instructions+=13;goto B5bcf1a;
case 0x5bcf1e:c.instructions+=12;goto B5bcf1e;
case 0x5bcf24:c.instructions+=11;goto B5bcf24;
case 0x5bcf28:c.instructions+=10;goto B5bcf28;
case 0x5bcf2b:c.instructions+=9;goto B5bcf2b;
case 0x5bcf2e:c.instructions+=8;goto B5bcf2e;
case 0x5bcf34:c.instructions+=7;goto B5bcf34;
case 0x5bcf36:c.instructions+=6;goto B5bcf36;
case 0x5bcf39:c.instructions+=5;goto B5bcf39;
case 0x5bcf3d:c.instructions+=4;goto B5bcf3d;
case 0x5bcf3e:c.instructions+=3;goto B5bcf3e;
case 0x5bcf3f:c.instructions+=2;goto B5bcf3f;
case 0x5bcf40:c.instructions+=1;goto B5bcf40;
case 0x5bcf46:goto L5bcf46;
case 0x5bcf4c:c.instructions+=9;goto B5bcf4c;
case 0x5bcf4f:c.instructions+=8;goto B5bcf4f;
case 0x5bcf52:c.instructions+=7;goto B5bcf52;
case 0x5bcf58:c.instructions+=6;goto B5bcf58;
case 0x5bcf5a:c.instructions+=5;goto B5bcf5a;
case 0x5bcf5e:c.instructions+=4;goto B5bcf5e;
case 0x5bcf5f:c.instructions+=3;goto B5bcf5f;
case 0x5bcf60:c.instructions+=2;goto B5bcf60;
case 0x5bcf61:c.instructions+=1;goto B5bcf61;
case 0x5bcf67:goto L5bcf67;
case 0x5bcf6a:c.instructions+=2;goto B5bcf6a;
case 0x5bcf6c:c.instructions+=1;goto B5bcf6c;
case 0x5bcf6e:goto L5bcf6e;
case 0x5bcf78:goto L5bcf78;
case 0x5bcf79:c.instructions+=4;goto B5bcf79;
case 0x5bcf7a:c.instructions+=3;goto B5bcf7a;
case 0x5bcf7c:c.instructions+=2;goto B5bcf7c;
case 0x5bcf7d:c.instructions+=1;goto B5bcf7d;
case 0x5bcfa0:goto L5bcfa0;
case 0x5bcfa6:c.instructions+=4;goto B5bcfa6;
case 0x5bcfa7:c.instructions+=3;goto B5bcfa7;
case 0x5bcfac:c.instructions+=2;goto B5bcfac;
case 0x5bcfae:c.instructions+=1;goto B5bcfae;
case 0x5bcfb3:goto L5bcfb3;
case 0x5bcfb5:goto L5bcfb5;
case 0x5bcfbb:c.instructions+=2;goto B5bcfbb;
case 0x5bcfbc:c.instructions+=1;goto B5bcfbc;
case 0x5bcfc0:goto L5bcfc0;
case 0x5bcfc6:c.instructions+=1;goto B5bcfc6;
case 0x5bcfd0:goto L5bcfd0;
case 0x5bcfd6:c.instructions+=2;goto B5bcfd6;
case 0x5bcfd8:c.instructions+=1;goto B5bcfd8;
case 0x5bcfda:goto L5bcfda;
case 0x5bcfdf:c.instructions+=3;goto B5bcfdf;
case 0x5bcfe0:c.instructions+=2;goto B5bcfe0;
case 0x5bcfe2:c.instructions+=1;goto B5bcfe2;
case 0x5bcfe3:goto L5bcfe3;
case 0x5bcfe5:c.instructions+=1;goto B5bcfe5;
case 0x5bcff0:goto L5bcff0;
case 0x5bcff2:c.instructions+=4;goto B5bcff2;
case 0x5bcff7:c.instructions+=3;goto B5bcff7;
case 0x5bcffc:c.instructions+=2;goto B5bcffc;
case 0x5bcffe:c.instructions+=1;goto B5bcffe;
default:missing_instruction(c.pc);}
B5bc000:L5bc000:{c.instructions+=9;NFSU2_TR(0x5bc000);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bc004:{NFSU2_TR(0x5bc004);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc005:{NFSU2_TR(0x5bc005);
__builtin_memmove(gp(0x86eb18),(R+0),4);
}
B5bc00a:{NFSU2_TR(0x5bc00a);
__builtin_memmove((R+0),gp(0x86f8ac),4);
}
B5bc00f:{NFSU2_TR(0x5bc00f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc011:{NFSU2_TR(0x5bc011);
__builtin_memmove(gp(0x86eb1c),(R+4),4);
}
B5bc017:{NFSU2_TR(0x5bc017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bc019:{NFSU2_TR(0x5bc019);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc01a:{NFSU2_TR(0x5bc01a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc01dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc01d:L5bc01d:{c.instructions+=6;NFSU2_TR(0x5bc01d);
__builtin_memmove((R+0),gp(0x7ff7a0),4);
}
B5bc022:{NFSU2_TR(0x5bc022);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bc026:{NFSU2_TR(0x5bc026);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5bc028:{NFSU2_TR(0x5bc028);
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
B5bc02a:{NFSU2_TR(0x5bc02a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc02e:{NFSU2_TR(0x5bc02e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5bc0dc;}}
}
B5bc034:L5bc034:{c.instructions+=1;NFSU2_TR(0x5bc034);
{goto L5bc040;}
}
B5bc040:L5bc040:{c.instructions+=8;NFSU2_TR(0x5bc040);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bc044:{NFSU2_TR(0x5bc044);
{u32 ea_=u32(u32(8386464u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bc04a:{NFSU2_TR(0x5bc04a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bc050:{NFSU2_TR(0x5bc050);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5bc052:{NFSU2_TR(0x5bc052);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5bc058:{NFSU2_TR(0x5bc058);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bc05a:{NFSU2_TR(0x5bc05a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bc05d:{NFSU2_TR(0x5bc05d);
if(r1(R+514)){{goto L5bc067;}}
}
B5bc05f:L5bc05f:{c.instructions+=2;NFSU2_TR(0x5bc05f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc065:{NFSU2_TR(0x5bc065);
{goto L5bc098;}
}
B5bc067:L5bc067:{c.instructions+=5;NFSU2_TR(0x5bc067);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5bc06d:{NFSU2_TR(0x5bc06d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc073:{NFSU2_TR(0x5bc073);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bc075:{NFSU2_TR(0x5bc075);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bc078:{NFSU2_TR(0x5bc078);
if(r1(R+518)){{goto L5bc098;}}
}
B5bc07a:L5bc07a:{c.instructions+=7;NFSU2_TR(0x5bc07a);
{u32 ea_=u32(u32(8384908u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5bc080:{NFSU2_TR(0x5bc080);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bc086:{NFSU2_TR(0x5bc086);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc08c:{NFSU2_TR(0x5bc08c);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5bc08e:{NFSU2_TR(0x5bc08e);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5bc090:{NFSU2_TR(0x5bc090);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc096:{NFSU2_TR(0x5bc096);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B5bc098:L5bc098:{c.instructions+=3;NFSU2_TR(0x5bc098);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5bc09a:{NFSU2_TR(0x5bc09a);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc0a0:{NFSU2_TR(0x5bc0a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc0a5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bc0a5:L5bc0a5:{c.instructions+=9;NFSU2_TR(0x5bc0a5);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc0ab:{NFSU2_TR(0x5bc0ab);
w4(R+0,u32(r1(R+0)));
}
B5bc0ae:{NFSU2_TR(0x5bc0ae);
__builtin_memmove((R+12),(R+0),4);
}
B5bc0b0:{NFSU2_TR(0x5bc0b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bc0b3:{NFSU2_TR(0x5bc0b3);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B5bc0b5:{NFSU2_TR(0x5bc0b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bc0b8:{NFSU2_TR(0x5bc0b8);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B5bc0ba:{NFSU2_TR(0x5bc0ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bc0bd:{NFSU2_TR(0x5bc0bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc0c2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bc0c2:L5bc0c2:{c.instructions+=8;NFSU2_TR(0x5bc0c2);
w4(R+0,u32(r1(R+0)));
}
B5bc0c5:{NFSU2_TR(0x5bc0c5);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B5bc0c7:{NFSU2_TR(0x5bc0c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5bc0ca:{NFSU2_TR(0x5bc0ca);
__builtin_memmove((R+0),gp(0x7ff7a0),4);
}
B5bc0cf:{NFSU2_TR(0x5bc0cf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5bc0d0:{NFSU2_TR(0x5bc0d0);
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
B5bc0d2:{NFSU2_TR(0x5bc0d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc0d6:{NFSU2_TR(0x5bc0d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bc040u);}goto L5bc040;}}
}
B5bc0dc:L5bc0dc:{c.instructions+=5;NFSU2_TR(0x5bc0dc);
__builtin_memmove((R+0),gp(0x86f8ac),4);
}
B5bc0e1:{NFSU2_TR(0x5bc0e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bc0e3:{NFSU2_TR(0x5bc0e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc0e5:{NFSU2_TR(0x5bc0e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc0e6:{NFSU2_TR(0x5bc0e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc0e9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc0e9:L5bc0e9:{c.instructions+=8;NFSU2_TR(0x5bc0e9);
__builtin_memmove((R+8),gp(0x7ff18c),4);
}
B5bc0ef:{NFSU2_TR(0x5bc0ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bc0f0:{NFSU2_TR(0x5bc0f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc0f1:{NFSU2_TR(0x5bc0f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bc0f2:{NFSU2_TR(0x5bc0f2);
__builtin_memmove(gp(0x8708f0),(R+8),4);
}
B5bc0f8:{NFSU2_TR(0x5bc0f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bc0f9:{NFSU2_TR(0x5bc0f9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bc0fc:{NFSU2_TR(0x5bc0fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc100:L5bc100:{c.instructions+=15;NFSU2_TR(0x5bc100);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc106:{NFSU2_TR(0x5bc106);
__builtin_memmove((R+4),gp(0x7ff118),4);
}
B5bc10c:{NFSU2_TR(0x5bc10c);
{u32 ea_=u32(u32(8391568u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bc112:{NFSU2_TR(0x5bc112);
__builtin_memmove((R+0),gp(0x7ff11c),4);
}
B5bc117:{NFSU2_TR(0x5bc117);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B5bc119:{NFSU2_TR(0x5bc119);
{u32 ea_=u32(u32(8874056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc11f:{NFSU2_TR(0x5bc11f);
{u32 ea_=u32(u32(8391568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc125:{NFSU2_TR(0x5bc125);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc129:{NFSU2_TR(0x5bc129);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc12d:{NFSU2_TR(0x5bc12d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc12f:{NFSU2_TR(0x5bc12f);
{u32 ea_=u32(u32(8874056u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc135:{NFSU2_TR(0x5bc135);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bc139:{NFSU2_TR(0x5bc139);
{u32 ea_=u32(u32(8874056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc13f:{NFSU2_TR(0x5bc13f);
{u32 ea_=u32(u32(8384792u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B5bc145:{NFSU2_TR(0x5bc145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc14aull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bc14a:L5bc14a:{c.instructions+=8;NFSU2_TR(0x5bc14a);
__builtin_memmove((R+4),gp(0x7ff124),4);
}
B5bc150:{NFSU2_TR(0x5bc150);
__builtin_memmove(gp(0x7ff114),(R+0),4);
}
B5bc155:{NFSU2_TR(0x5bc155);
w4(R+4,u32(u32(r4(R+4))-u32(m4(0x7ff120))));
}
B5bc15b:{NFSU2_TR(0x5bc15b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc15f:{NFSU2_TR(0x5bc15f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bc163:{NFSU2_TR(0x5bc163);
{u32 ea_=u32(u32(8874056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc169:{NFSU2_TR(0x5bc169);
{u32 ea_=u32(u32(8384800u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B5bc16f:{NFSU2_TR(0x5bc16f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc174ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bc174:L5bc174:{c.instructions+=2;NFSU2_TR(0x5bc174);
__builtin_memmove(gp(0x7ff10c),(R+0),4);
}
B5bc179:{NFSU2_TR(0x5bc179);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc180:L5bc180:{c.instructions+=2;NFSU2_TR(0x5bc180);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc182:{NFSU2_TR(0x5bc182);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc187ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5bc187:L5bc187:{c.instructions+=6;NFSU2_TR(0x5bc187);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc18d:{NFSU2_TR(0x5bc18d);
__builtin_memmove((R+4),gp(0x870904),1);
}
B5bc193:{NFSU2_TR(0x5bc193);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc196:{NFSU2_TR(0x5bc196);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bc199:{NFSU2_TR(0x5bc199);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bc19b:{NFSU2_TR(0x5bc19b);
if(r1(R+518)){{goto L5bc1a7;}}
}
B5bc19d:L5bc19d:{c.instructions+=3;NFSU2_TR(0x5bc19d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bc19f:{NFSU2_TR(0x5bc19f);
{u32 ea_=u32(u32(8386504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc1a5:{NFSU2_TR(0x5bc1a5);
{goto L5bc1c9;}
}
B5bc1a7:L5bc1a7:{c.instructions+=2;NFSU2_TR(0x5bc1a7);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bc1ae:{NFSU2_TR(0x5bc1ae);
if(r1(R+518)){{goto L5bc1ba;}}
}
B5bc1b0:L5bc1b0:{c.instructions+=3;NFSU2_TR(0x5bc1b0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bc1b2:{NFSU2_TR(0x5bc1b2);
{u32 ea_=u32(u32(8003752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc1b8:{NFSU2_TR(0x5bc1b8);
{goto L5bc1c9;}
}
B5bc1ba:L5bc1ba:{c.instructions+=3;NFSU2_TR(0x5bc1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc1bd:{NFSU2_TR(0x5bc1bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bc1bf:{NFSU2_TR(0x5bc1bf);
if(r1(R+518)){{goto L5bc1c9;}}
}
B5bc1c1:L5bc1c1:{c.instructions+=2;NFSU2_TR(0x5bc1c1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bc1c3:{NFSU2_TR(0x5bc1c3);
{u32 ea_=u32(r4(R+0)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc1c9:L5bc1c9:{c.instructions+=8;NFSU2_TR(0x5bc1c9);
{u32 ea_=u32(u32(8384768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc1cf:{NFSU2_TR(0x5bc1cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc1d0:{NFSU2_TR(0x5bc1d0);
{u32 ea_=u32(u32(8384764u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bc1d6:{NFSU2_TR(0x5bc1d6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5bc1d8:{NFSU2_TR(0x5bc1d8);
{u32 ea_=u32(u32(8384764u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc1de:{NFSU2_TR(0x5bc1de);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc1e1:{NFSU2_TR(0x5bc1e1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bc1e3:{NFSU2_TR(0x5bc1e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc1e8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bc100u);}goto L5bc100;}
}
B5bc1e8:L5bc1e8:{c.instructions+=2;NFSU2_TR(0x5bc1e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bc1e9:{NFSU2_TR(0x5bc1e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc1f0:L5bc1f0:{c.instructions+=2;NFSU2_TR(0x5bc1f0);
__builtin_memmove((R+0),gp(0x870980),4);
}
B5bc1f5:{NFSU2_TR(0x5bc1f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc200:L5bc200:{c.instructions+=2;NFSU2_TR(0x5bc200);
__builtin_memmove((R+0),gp(0x870984),4);
}
B5bc205:{NFSU2_TR(0x5bc205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc210:L5bc210:{c.instructions+=23;NFSU2_TR(0x5bc210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5bc213:{NFSU2_TR(0x5bc213);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc217:{NFSU2_TR(0x5bc217);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc21a:{NFSU2_TR(0x5bc21a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bc21d:{NFSU2_TR(0x5bc21d);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc220:{NFSU2_TR(0x5bc220);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc223:{NFSU2_TR(0x5bc223);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc226:{NFSU2_TR(0x5bc226);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc227:{NFSU2_TR(0x5bc227);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5bc22b:{NFSU2_TR(0x5bc22b);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc22e:{NFSU2_TR(0x5bc22e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc22f:{NFSU2_TR(0x5bc22f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5bc233:{NFSU2_TR(0x5bc233);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc234:{NFSU2_TR(0x5bc234);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc238:{NFSU2_TR(0x5bc238);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc23c:{NFSU2_TR(0x5bc23c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc240:{NFSU2_TR(0x5bc240);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc244:{NFSU2_TR(0x5bc244);
__builtin_memmove((R+24),(R+20),4);
}
B5bc246:{NFSU2_TR(0x5bc246);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc247:{NFSU2_TR(0x5bc247);
__builtin_memmove((R+4),(R+12),4);
}
B5bc249:{NFSU2_TR(0x5bc249);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5bc24c:{NFSU2_TR(0x5bc24c);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B5bc24e:{NFSU2_TR(0x5bc24e);
w4(R+28,u32(0x3ull));
}
B5bc253:L5bc253:{c.instructions+=9;NFSU2_TR(0x5bc253);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc255:{NFSU2_TR(0x5bc255);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc258:{NFSU2_TR(0x5bc258);
{u32 ea_=u32(r4(R+4)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc25b:{NFSU2_TR(0x5bc25b);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc25e:{NFSU2_TR(0x5bc25e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc262:{NFSU2_TR(0x5bc262);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5bc266:{NFSU2_TR(0x5bc266);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bc268:{NFSU2_TR(0x5bc268);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bc26b:{NFSU2_TR(0x5bc26b);
if(r1(R+514)){{goto L5bc275;}}
}
B5bc26d:L5bc26d:{c.instructions+=3;NFSU2_TR(0x5bc26d);
__asm__ volatile(".byte 0xde,0xc6":::"memory");
}
B5bc26f:{NFSU2_TR(0x5bc26f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc273:{NFSU2_TR(0x5bc273);
{goto L5bc27d;}
}
B5bc275:L5bc275:{c.instructions+=3;NFSU2_TR(0x5bc275);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc279:{NFSU2_TR(0x5bc279);
__asm__ volatile(".byte 0xde,0xc7":::"memory");
}
B5bc27b:{NFSU2_TR(0x5bc27b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc27d:L5bc27d:{c.instructions+=9;NFSU2_TR(0x5bc27d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc27f:{NFSU2_TR(0x5bc27f);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc282:{NFSU2_TR(0x5bc282);
{u32 ea_=u32(r4(R+4)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc285:{NFSU2_TR(0x5bc285);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc288:{NFSU2_TR(0x5bc288);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc28c:{NFSU2_TR(0x5bc28c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5bc290:{NFSU2_TR(0x5bc290);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bc292:{NFSU2_TR(0x5bc292);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bc295:{NFSU2_TR(0x5bc295);
if(r1(R+514)){{goto L5bc29f;}}
}
B5bc297:L5bc297:{c.instructions+=3;NFSU2_TR(0x5bc297);
__asm__ volatile(".byte 0xde,0xc5":::"memory");
}
B5bc299:{NFSU2_TR(0x5bc299);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc29d:{NFSU2_TR(0x5bc29d);
{goto L5bc2a5;}
}
B5bc29f:L5bc29f:{c.instructions+=2;NFSU2_TR(0x5bc29f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc2a3:{NFSU2_TR(0x5bc2a3);
__asm__ volatile(".byte 0xde,0xc6":::"memory");
}
B5bc2a5:L5bc2a5:{c.instructions+=10;NFSU2_TR(0x5bc2a5);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5bc2a7:{NFSU2_TR(0x5bc2a7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc2a9:{NFSU2_TR(0x5bc2a9);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc2ab:{NFSU2_TR(0x5bc2ab);
{u32 ea_=u32(r4(R+4)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc2ae:{NFSU2_TR(0x5bc2ae);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc2b0:{NFSU2_TR(0x5bc2b0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc2b4:{NFSU2_TR(0x5bc2b4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5bc2b8:{NFSU2_TR(0x5bc2b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bc2ba:{NFSU2_TR(0x5bc2ba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bc2bd:{NFSU2_TR(0x5bc2bd);
if(r1(R+514)){{goto L5bc2c7;}}
}
B5bc2bf:L5bc2bf:{c.instructions+=3;NFSU2_TR(0x5bc2bf);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B5bc2c1:{NFSU2_TR(0x5bc2c1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc2c5:{NFSU2_TR(0x5bc2c5);
{goto L5bc2cd;}
}
B5bc2c7:L5bc2c7:{c.instructions+=2;NFSU2_TR(0x5bc2c7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc2cb:{NFSU2_TR(0x5bc2cb);
__asm__ volatile(".byte 0xde,0xc5":::"memory");
}
B5bc2cd:L5bc2cd:{c.instructions+=5;NFSU2_TR(0x5bc2cd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5bc2d0:{NFSU2_TR(0x5bc2d0);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B5bc2d2:{NFSU2_TR(0x5bc2d2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B5bc2d5:{NFSU2_TR(0x5bc2d5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5bc2d6:{NFSU2_TR(0x5bc2d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bc253u);}goto L5bc253;}}
}
B5bc2dc:L5bc2dc:{c.instructions+=16;NFSU2_TR(0x5bc2dc);
__asm__ volatile(".byte 0xd9,0xcd":::"memory");
}
B5bc2de:{NFSU2_TR(0x5bc2de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bc2df:{NFSU2_TR(0x5bc2df);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc2e1:{NFSU2_TR(0x5bc2e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc2e2:{NFSU2_TR(0x5bc2e2);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B5bc2e4:{NFSU2_TR(0x5bc2e4);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc2e7:{NFSU2_TR(0x5bc2e7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5bc2e9:{NFSU2_TR(0x5bc2e9);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc2ec:{NFSU2_TR(0x5bc2ec);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5bc2ee:{NFSU2_TR(0x5bc2ee);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc2f1:{NFSU2_TR(0x5bc2f1);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc2f4:{NFSU2_TR(0x5bc2f4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc2f7:{NFSU2_TR(0x5bc2f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bc2f8:{NFSU2_TR(0x5bc2f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bc2f9:{NFSU2_TR(0x5bc2f9);
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
B5bc2fc:{NFSU2_TR(0x5bc2fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc300:L5bc300:{c.instructions+=23;NFSU2_TR(0x5bc300);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc301:{NFSU2_TR(0x5bc301);
__builtin_memmove((R+20),(R+16),4);
}
B5bc303:{NFSU2_TR(0x5bc303);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bc306:{NFSU2_TR(0x5bc306);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B5bc309:{NFSU2_TR(0x5bc309);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc30c:{NFSU2_TR(0x5bc30c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc30f:{NFSU2_TR(0x5bc30f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc310:{NFSU2_TR(0x5bc310);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc314:{NFSU2_TR(0x5bc314);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc317:{NFSU2_TR(0x5bc317);
__builtin_memmove((R+24),(R+4),4);
}
B5bc319:{NFSU2_TR(0x5bc319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bc31b:{NFSU2_TR(0x5bc31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc31e:{NFSU2_TR(0x5bc31e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bc320:{NFSU2_TR(0x5bc320);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc324:{NFSU2_TR(0x5bc324);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc327:{NFSU2_TR(0x5bc327);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc32b:{NFSU2_TR(0x5bc32b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc32f:{NFSU2_TR(0x5bc32f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc332:{NFSU2_TR(0x5bc332);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc335:{NFSU2_TR(0x5bc335);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bc337:{NFSU2_TR(0x5bc337);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc33b:{NFSU2_TR(0x5bc33b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc33f:{NFSU2_TR(0x5bc33f);
if(r1(R+518)){{goto L5bc354;}}
}
B5bc341:L5bc341:{c.instructions+=6;NFSU2_TR(0x5bc341);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bc345:{NFSU2_TR(0x5bc345);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc346:{NFSU2_TR(0x5bc346);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bc34a:{NFSU2_TR(0x5bc34a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc34b:{NFSU2_TR(0x5bc34b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc34c:{NFSU2_TR(0x5bc34c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc351ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bc210u);}goto L5bc210;}
}
B5bc351:L5bc351:{c.instructions+=1;NFSU2_TR(0x5bc351);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5bc354:L5bc354:{c.instructions+=26;NFSU2_TR(0x5bc354);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc358:{NFSU2_TR(0x5bc358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bc35a:{NFSU2_TR(0x5bc35a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc35e:{NFSU2_TR(0x5bc35e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5bc360:{NFSU2_TR(0x5bc360);
w4(R+8,u32(0x1ull));
}
B5bc365:{NFSU2_TR(0x5bc365);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bc36b:{NFSU2_TR(0x5bc36b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc371:{NFSU2_TR(0x5bc371);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc375:{NFSU2_TR(0x5bc375);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc379:{NFSU2_TR(0x5bc379);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc37d:{NFSU2_TR(0x5bc37d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc383:{NFSU2_TR(0x5bc383);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc387:{NFSU2_TR(0x5bc387);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc38b:{NFSU2_TR(0x5bc38b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc38f:{NFSU2_TR(0x5bc38f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc395:{NFSU2_TR(0x5bc395);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc399:{NFSU2_TR(0x5bc399);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc39d:{NFSU2_TR(0x5bc39d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bc3a1:{NFSU2_TR(0x5bc3a1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc3a5:{NFSU2_TR(0x5bc3a5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc3a9:{NFSU2_TR(0x5bc3a9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bc3ad:{NFSU2_TR(0x5bc3ad);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc3b1:{NFSU2_TR(0x5bc3b1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc3b5:{NFSU2_TR(0x5bc3b5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bc3b9:{NFSU2_TR(0x5bc3b9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc3bd:{NFSU2_TR(0x5bc3bd);
__builtin_memmove((R+4),(R+4),4);
}
B5bc3c0:L5bc3c0:{c.instructions+=26;NFSU2_TR(0x5bc3c0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc3c3:{NFSU2_TR(0x5bc3c3);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5bc3c5:{NFSU2_TR(0x5bc3c5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc3c9:{NFSU2_TR(0x5bc3c9);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc3cc:{NFSU2_TR(0x5bc3cc);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5bc3ce:{NFSU2_TR(0x5bc3ce);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc3d2:{NFSU2_TR(0x5bc3d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc3d4:{NFSU2_TR(0x5bc3d4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc3d6:{NFSU2_TR(0x5bc3d6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5bc3d8:{NFSU2_TR(0x5bc3d8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc3dc:{NFSU2_TR(0x5bc3dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc3de:{NFSU2_TR(0x5bc3de);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc3e2:{NFSU2_TR(0x5bc3e2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc3e5:{NFSU2_TR(0x5bc3e5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc3e9:{NFSU2_TR(0x5bc3e9);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc3ec:{NFSU2_TR(0x5bc3ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc3ee:{NFSU2_TR(0x5bc3ee);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc3f2:{NFSU2_TR(0x5bc3f2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc3f4:{NFSU2_TR(0x5bc3f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc3f6:{NFSU2_TR(0x5bc3f6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc3f9:{NFSU2_TR(0x5bc3f9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5bc3fb:{NFSU2_TR(0x5bc3fb);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5bc3fd:{NFSU2_TR(0x5bc3fd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bc403:{NFSU2_TR(0x5bc403);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bc405:{NFSU2_TR(0x5bc405);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bc408:{NFSU2_TR(0x5bc408);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5bc438;}}
}
B5bc40a:L5bc40a:{c.instructions+=6;NFSU2_TR(0x5bc40a);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5bc40c:{NFSU2_TR(0x5bc40c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bc412:{NFSU2_TR(0x5bc412);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bc414:{NFSU2_TR(0x5bc414);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bc416:{NFSU2_TR(0x5bc416);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bc419:{NFSU2_TR(0x5bc419);
if(r1(R+514)){{goto L5bc420;}}
}
B5bc41b:L5bc41b:{c.instructions+=1;NFSU2_TR(0x5bc41b);
w4(R+24,u32(0x1ull));
}
B5bc420:L5bc420:{c.instructions+=4;NFSU2_TR(0x5bc420);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5bc421:{NFSU2_TR(0x5bc421);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5bc424:{NFSU2_TR(0x5bc424);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bc427:{NFSU2_TR(0x5bc427);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bc3c0u);}goto L5bc3c0;}}
}
B5bc429:L5bc429:{c.instructions+=8;NFSU2_TR(0x5bc429);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bc42b:{NFSU2_TR(0x5bc42b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bc42d:{NFSU2_TR(0x5bc42d);
__builtin_memmove((R+0),(R+518),1);
}
B5bc430:{NFSU2_TR(0x5bc430);
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
B5bc431:{NFSU2_TR(0x5bc431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc432:{NFSU2_TR(0x5bc432);
__builtin_memmove((R+16),(R+20),4);
}
B5bc434:{NFSU2_TR(0x5bc434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bc435:{NFSU2_TR(0x5bc435);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc438:L5bc438:{c.instructions+=7;NFSU2_TR(0x5bc438);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bc43a:{NFSU2_TR(0x5bc43a);
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
B5bc43c:{NFSU2_TR(0x5bc43c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bc43e:{NFSU2_TR(0x5bc43e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc43f:{NFSU2_TR(0x5bc43f);
__builtin_memmove((R+16),(R+20),4);
}
B5bc441:{NFSU2_TR(0x5bc441);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bc442:{NFSU2_TR(0x5bc442);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc450:L5bc450:{c.instructions+=6;NFSU2_TR(0x5bc450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bc452:{NFSU2_TR(0x5bc452);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc453:{NFSU2_TR(0x5bc453);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bc457:{NFSU2_TR(0x5bc457);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5bc459:{NFSU2_TR(0x5bc459);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
}
B5bc45f:{NFSU2_TR(0x5bc45f);
}
B5bc460:L5bc460:{c.instructions+=13;NFSU2_TR(0x5bc460);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc463:{NFSU2_TR(0x5bc463);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc466:{NFSU2_TR(0x5bc466);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc469:{NFSU2_TR(0x5bc469);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc46b:{NFSU2_TR(0x5bc46b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc46d:{NFSU2_TR(0x5bc46d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc46f:{NFSU2_TR(0x5bc46f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc472:{NFSU2_TR(0x5bc472);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc474:{NFSU2_TR(0x5bc474);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc477:{NFSU2_TR(0x5bc477);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bc47d:{NFSU2_TR(0x5bc47d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bc47f:{NFSU2_TR(0x5bc47f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bc482:{NFSU2_TR(0x5bc482);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bc496;}}
}
B5bc484:L5bc484:{c.instructions+=4;NFSU2_TR(0x5bc484);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5bc485:{NFSU2_TR(0x5bc485);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5bc488:{NFSU2_TR(0x5bc488);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bc48b:{NFSU2_TR(0x5bc48b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bc460u);}goto L5bc460;}}
}
B5bc48d:L5bc48d:{c.instructions+=3;NFSU2_TR(0x5bc48d);
w4(R+0,u32(0x2ull));
}
B5bc492:{NFSU2_TR(0x5bc492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc493:{NFSU2_TR(0x5bc493);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc496:L5bc496:{c.instructions+=3;NFSU2_TR(0x5bc496);
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
B5bc498:{NFSU2_TR(0x5bc498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc499:{NFSU2_TR(0x5bc499);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc4a0:L5bc4a0:{c.instructions+=80;NFSU2_TR(0x5bc4a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc4a1:{NFSU2_TR(0x5bc4a1);
__builtin_memmove((R+20),(R+16),4);
}
B5bc4a3:{NFSU2_TR(0x5bc4a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bc4a6:{NFSU2_TR(0x5bc4a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B5bc4a9:{NFSU2_TR(0x5bc4a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bc4ab:{NFSU2_TR(0x5bc4ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc4ae:{NFSU2_TR(0x5bc4ae);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc4b1:{NFSU2_TR(0x5bc4b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bc4b3:{NFSU2_TR(0x5bc4b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x80ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bc4b8:{NFSU2_TR(0x5bc4b8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc4bc:{NFSU2_TR(0x5bc4bc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc4bf:{NFSU2_TR(0x5bc4bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc4c3:{NFSU2_TR(0x5bc4c3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5bc4c7:{NFSU2_TR(0x5bc4c7);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc4ca:{NFSU2_TR(0x5bc4ca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc4ce:{NFSU2_TR(0x5bc4ce);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc4d1:{NFSU2_TR(0x5bc4d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc4d3:{NFSU2_TR(0x5bc4d3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc4d7:{NFSU2_TR(0x5bc4d7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc4d9:{NFSU2_TR(0x5bc4d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc4db:{NFSU2_TR(0x5bc4db);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc4de:{NFSU2_TR(0x5bc4de);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc4e2:{NFSU2_TR(0x5bc4e2);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc4e5:{NFSU2_TR(0x5bc4e5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc4e9:{NFSU2_TR(0x5bc4e9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc4ec:{NFSU2_TR(0x5bc4ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc4ee:{NFSU2_TR(0x5bc4ee);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc4f2:{NFSU2_TR(0x5bc4f2);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc4f5:{NFSU2_TR(0x5bc4f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc4f7:{NFSU2_TR(0x5bc4f7);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc4fa:{NFSU2_TR(0x5bc4fa);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc4fe:{NFSU2_TR(0x5bc4fe);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc501:{NFSU2_TR(0x5bc501);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc505:{NFSU2_TR(0x5bc505);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc508:{NFSU2_TR(0x5bc508);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc50a:{NFSU2_TR(0x5bc50a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc50e:{NFSU2_TR(0x5bc50e);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc511:{NFSU2_TR(0x5bc511);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc513:{NFSU2_TR(0x5bc513);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc516:{NFSU2_TR(0x5bc516);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc51a:{NFSU2_TR(0x5bc51a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc51e:{NFSU2_TR(0x5bc51e);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc521:{NFSU2_TR(0x5bc521);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc525:{NFSU2_TR(0x5bc525);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc528:{NFSU2_TR(0x5bc528);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc52a:{NFSU2_TR(0x5bc52a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc52e:{NFSU2_TR(0x5bc52e);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc531:{NFSU2_TR(0x5bc531);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bc533:{NFSU2_TR(0x5bc533);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc536:{NFSU2_TR(0x5bc536);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc53a:{NFSU2_TR(0x5bc53a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc53e:{NFSU2_TR(0x5bc53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc541:{NFSU2_TR(0x5bc541);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc545:{NFSU2_TR(0x5bc545);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5bc547:{NFSU2_TR(0x5bc547);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc54b:{NFSU2_TR(0x5bc54b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc54f:{NFSU2_TR(0x5bc54f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc555:{NFSU2_TR(0x5bc555);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5bc557:{NFSU2_TR(0x5bc557);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc55b:{NFSU2_TR(0x5bc55b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bc55d:{NFSU2_TR(0x5bc55d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc561:{NFSU2_TR(0x5bc561);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc565:{NFSU2_TR(0x5bc565);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc569:{NFSU2_TR(0x5bc569);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc56d:{NFSU2_TR(0x5bc56d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc571:{NFSU2_TR(0x5bc571);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc575:{NFSU2_TR(0x5bc575);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc579:{NFSU2_TR(0x5bc579);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bc57f:{NFSU2_TR(0x5bc57f);
{u32 ea_=u32(u32(8849792u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B5bc585:{NFSU2_TR(0x5bc585);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc58b:{NFSU2_TR(0x5bc58b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc58d:{NFSU2_TR(0x5bc58d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5bc58f:{NFSU2_TR(0x5bc58f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bc595:{NFSU2_TR(0x5bc595);
{u32 ea_=u32(u32(8849796u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B5bc59b:{NFSU2_TR(0x5bc59b);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc5a1:{NFSU2_TR(0x5bc5a1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc5a4:{NFSU2_TR(0x5bc5a4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bc5a7:{NFSU2_TR(0x5bc5a7);
__builtin_memmove((R+16),(R+20),4);
}
B5bc5a9:{NFSU2_TR(0x5bc5a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bc5aa:{NFSU2_TR(0x5bc5aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc5b0:L5bc5b0:{c.instructions+=8;NFSU2_TR(0x5bc5b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc5b1:{NFSU2_TR(0x5bc5b1);
__builtin_memmove((R+20),(R+16),4);
}
B5bc5b3:{NFSU2_TR(0x5bc5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc5b6:{NFSU2_TR(0x5bc5b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5bc5b9:{NFSU2_TR(0x5bc5b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5bc5bc:{NFSU2_TR(0x5bc5bc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x873380ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x873380ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x873380ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bc5c1:{NFSU2_TR(0x5bc5c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bc5c2:{NFSU2_TR(0x5bc5c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc5d0:L5bc5d0:{c.instructions+=13;NFSU2_TR(0x5bc5d0);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bc5d5:{NFSU2_TR(0x5bc5d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bc5d7:{NFSU2_TR(0x5bc5d7);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bc5da:{NFSU2_TR(0x5bc5da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc5dc:{NFSU2_TR(0x5bc5dc);
u8 U[4];
w4(U+0,u32(0x86bd18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc5e1:{NFSU2_TR(0x5bc5e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc5e3:{NFSU2_TR(0x5bc5e3);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc5e5:{NFSU2_TR(0x5bc5e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc5e7:{NFSU2_TR(0x5bc5e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc5e9:{NFSU2_TR(0x5bc5e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc5eb:{NFSU2_TR(0x5bc5eb);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc5ed:{NFSU2_TR(0x5bc5ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc5ee:{NFSU2_TR(0x5bc5ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc5f1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc5f1:L5bc5f1:{c.instructions+=9;NFSU2_TR(0x5bc5f1);
__builtin_memmove((R+0),gp(0x86bd18),4);
}
B5bc5f6:{NFSU2_TR(0x5bc5f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bc5f8:{NFSU2_TR(0x5bc5f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc5fa:{NFSU2_TR(0x5bc5fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc5fc:{NFSU2_TR(0x5bc5fc);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bc600:{NFSU2_TR(0x5bc600);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc601:{NFSU2_TR(0x5bc601);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc603:{NFSU2_TR(0x5bc603);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc604:{NFSU2_TR(0x5bc604);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc607ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc607:L5bc607:{c.instructions+=2;NFSU2_TR(0x5bc607);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bc609:{NFSU2_TR(0x5bc609);
__builtin_memmove((R+16),(R+16),4);
}
B5bc610:L5bc610:{c.instructions+=5;NFSU2_TR(0x5bc610);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bc614:{NFSU2_TR(0x5bc614);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B5bc61b:{NFSU2_TR(0x5bc61b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5bc61e:{NFSU2_TR(0x5bc61e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x84ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x84ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5bc623:{NFSU2_TR(0x5bc623);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bc610u);}goto L5bc610;}}
}
B5bc625:L5bc625:{c.instructions+=3;NFSU2_TR(0x5bc625);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc626:{NFSU2_TR(0x5bc626);
w4(R+24,u32(0x21ull));
}
B5bc62b:{NFSU2_TR(0x5bc62b);
{goto L5bc630;}
}
B5bc630:L5bc630:{c.instructions+=8;NFSU2_TR(0x5bc630);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffdfull))));
__builtin_memmove((R+0),(U+0),4);
}
B5bc633:{NFSU2_TR(0x5bc633);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc637:{NFSU2_TR(0x5bc637);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bc63b:{NFSU2_TR(0x5bc63b);
{u32 ea_=u32(u32(7881964u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc641:{NFSU2_TR(0x5bc641);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5bc647:{NFSU2_TR(0x5bc647);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5bc649:{NFSU2_TR(0x5bc649);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc64f:{NFSU2_TR(0x5bc64f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc654ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bc654:L5bc654:{c.instructions+=12;NFSU2_TR(0x5bc654);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bc658:{NFSU2_TR(0x5bc658);
__builtin_memmove((R+4),(R+0),4);
}
B5bc65a:{NFSU2_TR(0x5bc65a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5bc65d:{NFSU2_TR(0x5bc65d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B5bc65f:{NFSU2_TR(0x5bc65f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5bc662:{NFSU2_TR(0x5bc662);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B5bc664:{NFSU2_TR(0x5bc664);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5bc667:{NFSU2_TR(0x5bc667);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B5bc669:{NFSU2_TR(0x5bc669);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5bc66c:{NFSU2_TR(0x5bc66c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5bc66d:{NFSU2_TR(0x5bc66d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x30ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5bc670:{NFSU2_TR(0x5bc670);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bc630u);}goto L5bc630;}}
}
B5bc672:L5bc672:{c.instructions+=3;NFSU2_TR(0x5bc672);
w4(R+0,u32(0xc0ull));
}
B5bc677:{NFSU2_TR(0x5bc677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc678:{NFSU2_TR(0x5bc678);
{goto L5bc680;}
}
B5bc680:L5bc680:{c.instructions+=5;NFSU2_TR(0x5bc680);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc684:{NFSU2_TR(0x5bc684);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B5bc68b:{NFSU2_TR(0x5bc68b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5bc68e:{NFSU2_TR(0x5bc68e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bc693:{NFSU2_TR(0x5bc693);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bc680u);}goto L5bc680;}}
}
B5bc695:L5bc695:{c.instructions+=5;NFSU2_TR(0x5bc695);
__builtin_memmove((R+0),gp(0x86bd18),4);
}
B5bc69a:{NFSU2_TR(0x5bc69a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bc69c:{NFSU2_TR(0x5bc69c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc69e:{NFSU2_TR(0x5bc69e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc69f:{NFSU2_TR(0x5bc69f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc6a2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc6a2:L5bc6a2:{c.instructions+=2;NFSU2_TR(0x5bc6a2);
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
B5bc6a5:{NFSU2_TR(0x5bc6a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc6b0:L5bc6b0:{c.instructions+=5;NFSU2_TR(0x5bc6b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc6b1:{NFSU2_TR(0x5bc6b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bc6b5:{NFSU2_TR(0x5bc6b5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5bc6b7:{NFSU2_TR(0x5bc6b7);
w4(R+0,u32(0x800464ull));
}
B5bc6bc:{NFSU2_TR(0x5bc6bc);
__builtin_memmove((R+16),(R+16),4);
}
B5bc6c0:L5bc6c0:{c.instructions+=3;NFSU2_TR(0x5bc6c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bc6c2:{NFSU2_TR(0x5bc6c2);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bc6c4:{NFSU2_TR(0x5bc6c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bc6da;}}
}
B5bc6c6:L5bc6c6:{c.instructions+=2;NFSU2_TR(0x5bc6c6);
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
B5bc6c8:{NFSU2_TR(0x5bc6c8);
if(r1(R+518)){{goto L5bc6da;}}
}
B5bc6ca:L5bc6ca:{c.instructions+=4;NFSU2_TR(0x5bc6ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B5bc6cd:{NFSU2_TR(0x5bc6cd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5bc6ce:{NFSU2_TR(0x5bc6ce);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x800494ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x800494ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5bc6d3:{NFSU2_TR(0x5bc6d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bc6c0u);}goto L5bc6c0;}}
}
B5bc6d5:L5bc6d5:{c.instructions+=3;NFSU2_TR(0x5bc6d5);
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
B5bc6d8:{NFSU2_TR(0x5bc6d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc6d9:{NFSU2_TR(0x5bc6d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc6da:L5bc6da:{c.instructions+=4;NFSU2_TR(0x5bc6da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5bc6dd:{NFSU2_TR(0x5bc6dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x800468ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5bc6e4:{NFSU2_TR(0x5bc6e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc6e5:{NFSU2_TR(0x5bc6e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc6f0:L5bc6f0:{c.instructions+=7;NFSU2_TR(0x5bc6f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc6f1:{NFSU2_TR(0x5bc6f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc6f2:{NFSU2_TR(0x5bc6f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc6f4:{NFSU2_TR(0x5bc6f4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc6f6:{NFSU2_TR(0x5bc6f6);
u8 U[4];
w4(U+0,u32(0x7a3658ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc6fb:{NFSU2_TR(0x5bc6fb);
__builtin_memmove((R+24),(R+4),4);
}
B5bc6fd:{NFSU2_TR(0x5bc6fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc702ull));
TAIL_STATIC(0x43db50u,43d);
}
B5bc702:L5bc702:{c.instructions+=3;NFSU2_TR(0x5bc702);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bc705:{NFSU2_TR(0x5bc705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc706:{NFSU2_TR(0x5bc706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc70bull));
TAIL_STATIC(0x4901d0u,490);
}
B5bc70b:L5bc70b:{c.instructions+=12;NFSU2_TR(0x5bc70b);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5bc711:{NFSU2_TR(0x5bc711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bc713:{NFSU2_TR(0x5bc713);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc716:{NFSU2_TR(0x5bc716);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc719:{NFSU2_TR(0x5bc719);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bc71c:{NFSU2_TR(0x5bc71c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5bc71e:{NFSU2_TR(0x5bc71e);
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
B5bc721:{NFSU2_TR(0x5bc721);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc722:{NFSU2_TR(0x5bc722);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x59cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc728:{NFSU2_TR(0x5bc728);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc729:{NFSU2_TR(0x5bc729);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc72a:{NFSU2_TR(0x5bc72a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc730ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc730:L5bc730:{c.instructions+=10;NFSU2_TR(0x5bc730);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bc736:{NFSU2_TR(0x5bc736);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc739:{NFSU2_TR(0x5bc739);
__builtin_memmove((R+28),gp(0x86bd18),4);
}
B5bc73f:{NFSU2_TR(0x5bc73f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc742:{NFSU2_TR(0x5bc742);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc748:{NFSU2_TR(0x5bc748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bc74a:{NFSU2_TR(0x5bc74a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc74b:{NFSU2_TR(0x5bc74b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc74c:{NFSU2_TR(0x5bc74c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc74d:{NFSU2_TR(0x5bc74d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc753ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc753:L5bc753:{c.instructions+=3;NFSU2_TR(0x5bc753);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bc756:{NFSU2_TR(0x5bc756);
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
B5bc758:{NFSU2_TR(0x5bc758);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bc7ad;}}
}
B5bc75a:L5bc75a:{c.instructions+=6;NFSU2_TR(0x5bc75a);
{u32 ea_=u32(u32(8389920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc760:{NFSU2_TR(0x5bc760);
__builtin_memmove((R+24),gp(0x870974),4);
}
B5bc766:{NFSU2_TR(0x5bc766);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc76c:{NFSU2_TR(0x5bc76c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5bc76e:{NFSU2_TR(0x5bc76e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc76f:{NFSU2_TR(0x5bc76f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc774ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bc774:L5bc774:{c.instructions+=5;NFSU2_TR(0x5bc774);
{u32 ea_=u32(u32(8389924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc77a:{NFSU2_TR(0x5bc77a);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc780:{NFSU2_TR(0x5bc780);
__builtin_memmove((R+12),(R+0),4);
}
B5bc782:{NFSU2_TR(0x5bc782);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bc785:{NFSU2_TR(0x5bc785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc78aull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bc78a:L5bc78a:{c.instructions+=5;NFSU2_TR(0x5bc78a);
{u32 ea_=u32(u32(8389928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc790:{NFSU2_TR(0x5bc790);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc796:{NFSU2_TR(0x5bc796);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B5bc798:{NFSU2_TR(0x5bc798);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bc79b:{NFSU2_TR(0x5bc79b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc7a0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bc7a0:L5bc7a0:{c.instructions+=5;NFSU2_TR(0x5bc7a0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bc7a2:{NFSU2_TR(0x5bc7a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc7a3:{NFSU2_TR(0x5bc7a3);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc7a5:{NFSU2_TR(0x5bc7a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc7a6:{NFSU2_TR(0x5bc7a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc7acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc7ac:L5bc7ac:{c.instructions+=1;NFSU2_TR(0x5bc7ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bc7ad:L5bc7ad:{c.instructions+=3;NFSU2_TR(0x5bc7ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bc7ae:{NFSU2_TR(0x5bc7ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc7af:{NFSU2_TR(0x5bc7af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc7b0:L5bc7b0:{c.instructions+=17;NFSU2_TR(0x5bc7b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc7b1:{NFSU2_TR(0x5bc7b1);
__builtin_memmove((R+20),(R+16),4);
}
B5bc7b3:{NFSU2_TR(0x5bc7b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bc7b6:{NFSU2_TR(0x5bc7b6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x48ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bc7b9:{NFSU2_TR(0x5bc7b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc7ba:{NFSU2_TR(0x5bc7ba);
__builtin_memmove((R+24),(R+4),4);
}
B5bc7bc:{NFSU2_TR(0x5bc7bc);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bc7c2:{NFSU2_TR(0x5bc7c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc7c5:{NFSU2_TR(0x5bc7c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc7c8:{NFSU2_TR(0x5bc7c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x72cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc7ce:{NFSU2_TR(0x5bc7ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bc7d0:{NFSU2_TR(0x5bc7d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc7d1:{NFSU2_TR(0x5bc7d1);
__builtin_memmove((R+28),gp(0x870894),4);
}
B5bc7d7:{NFSU2_TR(0x5bc7d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc7d8:{NFSU2_TR(0x5bc7d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc7d9:{NFSU2_TR(0x5bc7d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc7da:{NFSU2_TR(0x5bc7da);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc7e0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc7e0:L5bc7e0:{c.instructions+=3;NFSU2_TR(0x5bc7e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bc7e3:{NFSU2_TR(0x5bc7e3);
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
B5bc7e5:{NFSU2_TR(0x5bc7e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bc880;}}
}
B5bc7eb:L5bc7eb:{c.instructions+=3;NFSU2_TR(0x5bc7eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bc7ef:{NFSU2_TR(0x5bc7ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc7f0:{NFSU2_TR(0x5bc7f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc7f5ull));
TAIL_STATIC(0x43c780u,43c);
}
B5bc7f5:L5bc7f5:{c.instructions+=8;NFSU2_TR(0x5bc7f5);
__builtin_memmove((R+0),gp(0x870848),4);
}
B5bc7fa:{NFSU2_TR(0x5bc7fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bc802:{NFSU2_TR(0x5bc802);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bc80a:{NFSU2_TR(0x5bc80a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bc812:{NFSU2_TR(0x5bc812);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bc81a:{NFSU2_TR(0x5bc81a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc81d:{NFSU2_TR(0x5bc81d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc81e:{NFSU2_TR(0x5bc81e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc823ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5bc823:L5bc823:{c.instructions+=3;NFSU2_TR(0x5bc823);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5bc826:{NFSU2_TR(0x5bc826);
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
B5bc828:{NFSU2_TR(0x5bc828);
if(r1(R+518)){{goto L5bc880;}}
}
B5bc82a:L5bc82a:{c.instructions+=8;NFSU2_TR(0x5bc82a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bc82c:{NFSU2_TR(0x5bc82c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bc830:{NFSU2_TR(0x5bc830);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc831:{NFSU2_TR(0x5bc831);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bc834:{NFSU2_TR(0x5bc834);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc835:{NFSU2_TR(0x5bc835);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bc839:{NFSU2_TR(0x5bc839);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc83a:{NFSU2_TR(0x5bc83a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc83full));
TAIL_STATIC(0x63cedbu,63c);
}
B5bc83f:L5bc83f:{c.instructions+=18;NFSU2_TR(0x5bc83f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bc843:{NFSU2_TR(0x5bc843);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc847:{NFSU2_TR(0x5bc847);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc84b:{NFSU2_TR(0x5bc84b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc84f:{NFSU2_TR(0x5bc84f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bc853:{NFSU2_TR(0x5bc853);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc857:{NFSU2_TR(0x5bc857);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bc85d:{NFSU2_TR(0x5bc85d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc861:{NFSU2_TR(0x5bc861);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc865:{NFSU2_TR(0x5bc865);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc868:{NFSU2_TR(0x5bc868);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc86b:{NFSU2_TR(0x5bc86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x704ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc871:{NFSU2_TR(0x5bc871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bc873:{NFSU2_TR(0x5bc873);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc877:{NFSU2_TR(0x5bc877);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc878:{NFSU2_TR(0x5bc878);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc879:{NFSU2_TR(0x5bc879);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc87a:{NFSU2_TR(0x5bc87a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc880ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc880:L5bc880:{c.instructions+=5;NFSU2_TR(0x5bc880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bc881:{NFSU2_TR(0x5bc881);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc882:{NFSU2_TR(0x5bc882);
__builtin_memmove((R+16),(R+20),4);
}
B5bc884:{NFSU2_TR(0x5bc884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bc885:{NFSU2_TR(0x5bc885);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bc890:L5bc890:{c.instructions+=12;NFSU2_TR(0x5bc890);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc891:{NFSU2_TR(0x5bc891);
__builtin_memmove((R+20),(R+16),4);
}
B5bc893:{NFSU2_TR(0x5bc893);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bc896:{NFSU2_TR(0x5bc896);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B5bc899:{NFSU2_TR(0x5bc899);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc89a:{NFSU2_TR(0x5bc89a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc89b:{NFSU2_TR(0x5bc89b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc89c:{NFSU2_TR(0x5bc89c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc89e:{NFSU2_TR(0x5bc89e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc8a0:{NFSU2_TR(0x5bc8a0);
u8 U[4];
w4(U+0,u32(0x7a3658ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc8a5:{NFSU2_TR(0x5bc8a5);
__builtin_memmove((R+24),(R+4),4);
}
B5bc8a7:{NFSU2_TR(0x5bc8a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc8acull));
TAIL_STATIC(0x43db50u,43d);
}
B5bc8ac:L5bc8ac:{c.instructions+=3;NFSU2_TR(0x5bc8ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bc8af:{NFSU2_TR(0x5bc8af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc8b0:{NFSU2_TR(0x5bc8b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc8b5ull));
TAIL_STATIC(0x4901d0u,490);
}
B5bc8b5:L5bc8b5:{c.instructions+=12;NFSU2_TR(0x5bc8b5);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5bc8bb:{NFSU2_TR(0x5bc8bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bc8bd:{NFSU2_TR(0x5bc8bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc8c0:{NFSU2_TR(0x5bc8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc8c3:{NFSU2_TR(0x5bc8c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bc8c6:{NFSU2_TR(0x5bc8c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5bc8c8:{NFSU2_TR(0x5bc8c8);
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
B5bc8cb:{NFSU2_TR(0x5bc8cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc8cc:{NFSU2_TR(0x5bc8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x59cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc8d2:{NFSU2_TR(0x5bc8d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc8d3:{NFSU2_TR(0x5bc8d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc8d4:{NFSU2_TR(0x5bc8d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc8daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc8da:L5bc8da:{c.instructions+=10;NFSU2_TR(0x5bc8da);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bc8e0:{NFSU2_TR(0x5bc8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc8e3:{NFSU2_TR(0x5bc8e3);
__builtin_memmove((R+28),gp(0x86bd18),4);
}
B5bc8e9:{NFSU2_TR(0x5bc8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc8ec:{NFSU2_TR(0x5bc8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc8f2:{NFSU2_TR(0x5bc8f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bc8f4:{NFSU2_TR(0x5bc8f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc8f5:{NFSU2_TR(0x5bc8f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc8f6:{NFSU2_TR(0x5bc8f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc8f7:{NFSU2_TR(0x5bc8f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc8fdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc8fd:L5bc8fd:{c.instructions+=10;NFSU2_TR(0x5bc8fd);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bc903:{NFSU2_TR(0x5bc903);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc906:{NFSU2_TR(0x5bc906);
__builtin_memmove((R+28),gp(0x870894),4);
}
B5bc90c:{NFSU2_TR(0x5bc90c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc90f:{NFSU2_TR(0x5bc90f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x72cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc915:{NFSU2_TR(0x5bc915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bc917:{NFSU2_TR(0x5bc917);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc918:{NFSU2_TR(0x5bc918);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc919:{NFSU2_TR(0x5bc919);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc91a:{NFSU2_TR(0x5bc91a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc920ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc920:L5bc920:{c.instructions+=3;NFSU2_TR(0x5bc920);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bc923:{NFSU2_TR(0x5bc923);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bc925:{NFSU2_TR(0x5bc925);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bca18;}}
}
B5bc92b:L5bc92b:{c.instructions+=3;NFSU2_TR(0x5bc92b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bc92f:{NFSU2_TR(0x5bc92f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc930:{NFSU2_TR(0x5bc930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc935ull));
TAIL_STATIC(0x43c780u,43c);
}
B5bc935:L5bc935:{c.instructions+=8;NFSU2_TR(0x5bc935);
__builtin_memmove((R+0),gp(0x870848),4);
}
B5bc93a:{NFSU2_TR(0x5bc93a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bc942:{NFSU2_TR(0x5bc942);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bc94a:{NFSU2_TR(0x5bc94a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bc952:{NFSU2_TR(0x5bc952);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bc95a:{NFSU2_TR(0x5bc95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc95d:{NFSU2_TR(0x5bc95d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc95e:{NFSU2_TR(0x5bc95e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc963ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5bc963:L5bc963:{c.instructions+=3;NFSU2_TR(0x5bc963);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5bc966:{NFSU2_TR(0x5bc966);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bc968:{NFSU2_TR(0x5bc968);
if(r1(R+518)){{goto L5bc9c0;}}
}
B5bc96a:L5bc96a:{c.instructions+=8;NFSU2_TR(0x5bc96a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bc96c:{NFSU2_TR(0x5bc96c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bc970:{NFSU2_TR(0x5bc970);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc971:{NFSU2_TR(0x5bc971);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bc974:{NFSU2_TR(0x5bc974);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc975:{NFSU2_TR(0x5bc975);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bc979:{NFSU2_TR(0x5bc979);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc97a:{NFSU2_TR(0x5bc97a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc97full));
TAIL_STATIC(0x63cedbu,63c);
}
B5bc97f:L5bc97f:{c.instructions+=18;NFSU2_TR(0x5bc97f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bc983:{NFSU2_TR(0x5bc983);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc987:{NFSU2_TR(0x5bc987);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc98b:{NFSU2_TR(0x5bc98b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc98f:{NFSU2_TR(0x5bc98f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bc993:{NFSU2_TR(0x5bc993);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc997:{NFSU2_TR(0x5bc997);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bc99d:{NFSU2_TR(0x5bc99d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc9a1:{NFSU2_TR(0x5bc9a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bc9a5:{NFSU2_TR(0x5bc9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bc9a8:{NFSU2_TR(0x5bc9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc9ab:{NFSU2_TR(0x5bc9ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x704ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bc9b1:{NFSU2_TR(0x5bc9b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bc9b3:{NFSU2_TR(0x5bc9b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5bc9b7:{NFSU2_TR(0x5bc9b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc9b8:{NFSU2_TR(0x5bc9b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc9b9:{NFSU2_TR(0x5bc9b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bc9ba:{NFSU2_TR(0x5bc9ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc9c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bc9c0:L5bc9c0:{c.instructions+=5;NFSU2_TR(0x5bc9c0);
{u32 ea_=u32(u32(8389920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc9c6:{NFSU2_TR(0x5bc9c6);
__builtin_memmove((R+24),gp(0x870974),4);
}
B5bc9cc:{NFSU2_TR(0x5bc9cc);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc9d2:{NFSU2_TR(0x5bc9d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5bc9d4:{NFSU2_TR(0x5bc9d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc9d9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bc9d9:L5bc9d9:{c.instructions+=5;NFSU2_TR(0x5bc9d9);
{u32 ea_=u32(u32(8389924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc9df:{NFSU2_TR(0x5bc9df);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc9e5:{NFSU2_TR(0x5bc9e5);
__builtin_memmove((R+12),(R+0),4);
}
B5bc9e7:{NFSU2_TR(0x5bc9e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bc9ea:{NFSU2_TR(0x5bc9ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bc9efull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bc9ef:L5bc9ef:{c.instructions+=5;NFSU2_TR(0x5bc9ef);
{u32 ea_=u32(u32(8389928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bc9f5:{NFSU2_TR(0x5bc9f5);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bc9fb:{NFSU2_TR(0x5bc9fb);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B5bc9fd:{NFSU2_TR(0x5bc9fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bca00:{NFSU2_TR(0x5bca00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bca05ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bca05:L5bca05:{c.instructions+=5;NFSU2_TR(0x5bca05);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bca07:{NFSU2_TR(0x5bca07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca08:{NFSU2_TR(0x5bca08);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca0a:{NFSU2_TR(0x5bca0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca0b:{NFSU2_TR(0x5bca0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bca11ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bca11:L5bca11:{c.instructions+=6;NFSU2_TR(0x5bca11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bca12:{NFSU2_TR(0x5bca12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bca13:{NFSU2_TR(0x5bca13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bca14:{NFSU2_TR(0x5bca14);
__builtin_memmove((R+16),(R+20),4);
}
B5bca16:{NFSU2_TR(0x5bca16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bca17:{NFSU2_TR(0x5bca17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bca18:L5bca18:{c.instructions+=4;NFSU2_TR(0x5bca18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca1a:{NFSU2_TR(0x5bca1a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca1c:{NFSU2_TR(0x5bca1c);
u8 U[4];
w4(U+0,u32(0x7a3658ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca21:{NFSU2_TR(0x5bca21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bca26ull));
TAIL_STATIC(0x43db50u,43d);
}
B5bca26:L5bca26:{c.instructions+=3;NFSU2_TR(0x5bca26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bca29:{NFSU2_TR(0x5bca29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca2a:{NFSU2_TR(0x5bca2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bca2full));
TAIL_STATIC(0x4901d0u,490);
}
B5bca2f:L5bca2f:{c.instructions+=12;NFSU2_TR(0x5bca2f);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5bca35:{NFSU2_TR(0x5bca35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bca37:{NFSU2_TR(0x5bca37);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bca3a:{NFSU2_TR(0x5bca3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bca3d:{NFSU2_TR(0x5bca3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bca40:{NFSU2_TR(0x5bca40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5bca42:{NFSU2_TR(0x5bca42);
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
B5bca45:{NFSU2_TR(0x5bca45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca46:{NFSU2_TR(0x5bca46);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x59cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bca4c:{NFSU2_TR(0x5bca4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca4d:{NFSU2_TR(0x5bca4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca4e:{NFSU2_TR(0x5bca4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bca54ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bca54:L5bca54:{c.instructions+=10;NFSU2_TR(0x5bca54);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bca5a:{NFSU2_TR(0x5bca5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bca5d:{NFSU2_TR(0x5bca5d);
__builtin_memmove((R+24),gp(0x86bd18),4);
}
B5bca63:{NFSU2_TR(0x5bca63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bca66:{NFSU2_TR(0x5bca66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bca6c:{NFSU2_TR(0x5bca6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bca6e:{NFSU2_TR(0x5bca6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca6f:{NFSU2_TR(0x5bca6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca70:{NFSU2_TR(0x5bca70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca71:{NFSU2_TR(0x5bca71);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bca77ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bca77:L5bca77:{c.instructions+=10;NFSU2_TR(0x5bca77);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bca7d:{NFSU2_TR(0x5bca7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bca80:{NFSU2_TR(0x5bca80);
__builtin_memmove((R+24),gp(0x870894),4);
}
B5bca86:{NFSU2_TR(0x5bca86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bca89:{NFSU2_TR(0x5bca89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x72cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bca8f:{NFSU2_TR(0x5bca8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bca91:{NFSU2_TR(0x5bca91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca92:{NFSU2_TR(0x5bca92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca93:{NFSU2_TR(0x5bca93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bca94:{NFSU2_TR(0x5bca94);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bca9aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bca9a:L5bca9a:{c.instructions+=10;NFSU2_TR(0x5bca9a);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bcaa0:{NFSU2_TR(0x5bcaa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bcaa3:{NFSU2_TR(0x5bcaa3);
__builtin_memmove((R+24),gp(0x7a27e4),4);
}
B5bcaa9:{NFSU2_TR(0x5bcaa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcaac:{NFSU2_TR(0x5bcaac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x754ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcab2:{NFSU2_TR(0x5bcab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bcab4:{NFSU2_TR(0x5bcab4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcab5:{NFSU2_TR(0x5bcab5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcab6:{NFSU2_TR(0x5bcab6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcab7:{NFSU2_TR(0x5bcab7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcabaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcaba:L5bcaba:{c.instructions+=6;NFSU2_TR(0x5bcaba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bcabb:{NFSU2_TR(0x5bcabb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bcabc:{NFSU2_TR(0x5bcabc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bcabd:{NFSU2_TR(0x5bcabd);
__builtin_memmove((R+16),(R+20),4);
}
B5bcabf:{NFSU2_TR(0x5bcabf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bcac0:{NFSU2_TR(0x5bcac0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bcad0:L5bcad0:{c.instructions+=10;NFSU2_TR(0x5bcad0);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B5bcad5:{NFSU2_TR(0x5bcad5);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bcadb:{NFSU2_TR(0x5bcadb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bcade:{NFSU2_TR(0x5bcade);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bcae1:{NFSU2_TR(0x5bcae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcae4:{NFSU2_TR(0x5bcae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bcae6:{NFSU2_TR(0x5bcae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcaec:{NFSU2_TR(0x5bcaec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcaed:{NFSU2_TR(0x5bcaed);
__builtin_memmove((R+24),gp(0x870858),4);
}
B5bcaf3:{NFSU2_TR(0x5bcaf3);
if(r1(R+518)){{goto L5bcafb;}}
}
B5bcaf5:L5bcaf5:{c.instructions+=1;NFSU2_TR(0x5bcaf5);
__builtin_memmove((R+24),gp(0x87088c),4);
}
B5bcafb:L5bcafb:{c.instructions+=4;NFSU2_TR(0x5bcafb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcafc:{NFSU2_TR(0x5bcafc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcafd:{NFSU2_TR(0x5bcafd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcafe:{NFSU2_TR(0x5bcafe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcb04ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcb04:L5bcb04:{c.instructions+=2;NFSU2_TR(0x5bcb04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bcb05:{NFSU2_TR(0x5bcb05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bcb10:L5bcb10:{c.instructions+=7;NFSU2_TR(0x5bcb10);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcb15:{NFSU2_TR(0x5bcb15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bcb17:{NFSU2_TR(0x5bcb17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb19:{NFSU2_TR(0x5bcb19);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb1b:{NFSU2_TR(0x5bcb1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb1d:{NFSU2_TR(0x5bcb1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb1e:{NFSU2_TR(0x5bcb1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcb24ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcb24:L5bcb24:{c.instructions+=7;NFSU2_TR(0x5bcb24);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcb29:{NFSU2_TR(0x5bcb29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bcb2b:{NFSU2_TR(0x5bcb2b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb2d:{NFSU2_TR(0x5bcb2d);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb2f:{NFSU2_TR(0x5bcb2f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb31:{NFSU2_TR(0x5bcb31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb32:{NFSU2_TR(0x5bcb32);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcb38ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcb38:L5bcb38:{c.instructions+=7;NFSU2_TR(0x5bcb38);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcb3d:{NFSU2_TR(0x5bcb3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bcb3f:{NFSU2_TR(0x5bcb3f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb41:{NFSU2_TR(0x5bcb41);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb43:{NFSU2_TR(0x5bcb43);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb45:{NFSU2_TR(0x5bcb45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb46:{NFSU2_TR(0x5bcb46);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcb4cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcb4c:L5bcb4c:{c.instructions+=7;NFSU2_TR(0x5bcb4c);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcb51:{NFSU2_TR(0x5bcb51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bcb53:{NFSU2_TR(0x5bcb53);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb55:{NFSU2_TR(0x5bcb55);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb57:{NFSU2_TR(0x5bcb57);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb59:{NFSU2_TR(0x5bcb59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb5a:{NFSU2_TR(0x5bcb5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcb60ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcb60:L5bcb60:{c.instructions+=1;NFSU2_TR(0x5bcb60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bcb70:L5bcb70:{c.instructions+=3;NFSU2_TR(0x5bcb70);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5bcb75:{NFSU2_TR(0x5bcb75);
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
B5bcb77:{NFSU2_TR(0x5bcb77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bcba4;}}
}
B5bcb79:L5bcb79:{c.instructions+=7;NFSU2_TR(0x5bcb79);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bcb7d:{NFSU2_TR(0x5bcb7d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcb82:{NFSU2_TR(0x5bcb82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bcb84:{NFSU2_TR(0x5bcb84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb85:{NFSU2_TR(0x5bcb85);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb87:{NFSU2_TR(0x5bcb87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb88:{NFSU2_TR(0x5bcb88);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcb8eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcb8e:L5bcb8e:{c.instructions+=7;NFSU2_TR(0x5bcb8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bcb92:{NFSU2_TR(0x5bcb92);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcb97:{NFSU2_TR(0x5bcb97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bcb99:{NFSU2_TR(0x5bcb99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb9a:{NFSU2_TR(0x5bcb9a);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb9c:{NFSU2_TR(0x5bcb9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcb9d:{NFSU2_TR(0x5bcb9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcba3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcba3:L5bcba3:{c.instructions+=1;NFSU2_TR(0x5bcba3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bcba4:L5bcba4:{c.instructions+=5;NFSU2_TR(0x5bcba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bcba8:{NFSU2_TR(0x5bcba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcbac:{NFSU2_TR(0x5bcbac);
__builtin_memmove(gp(0x86ead8),(R+0),4);
}
B5bcbb1:{NFSU2_TR(0x5bcbb1);
__builtin_memmove(gp(0x86eadc),(R+4),4);
}
B5bcbb7:{NFSU2_TR(0x5bcbb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bcbc0:L5bcbc0:{c.instructions+=3;NFSU2_TR(0x5bcbc0);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5bcbc5:{NFSU2_TR(0x5bcbc5);
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
B5bcbc7:{NFSU2_TR(0x5bcbc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bcc09;}}
}
B5bcbc9:L5bcbc9:{c.instructions+=7;NFSU2_TR(0x5bcbc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bcbcd:{NFSU2_TR(0x5bcbcd);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcbd2:{NFSU2_TR(0x5bcbd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bcbd4:{NFSU2_TR(0x5bcbd4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcbd5:{NFSU2_TR(0x5bcbd5);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcbd7:{NFSU2_TR(0x5bcbd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcbd8:{NFSU2_TR(0x5bcbd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcbdeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcbde:L5bcbde:{c.instructions+=7;NFSU2_TR(0x5bcbde);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bcbe2:{NFSU2_TR(0x5bcbe2);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcbe7:{NFSU2_TR(0x5bcbe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bcbe9:{NFSU2_TR(0x5bcbe9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcbea:{NFSU2_TR(0x5bcbea);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcbec:{NFSU2_TR(0x5bcbec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcbed:{NFSU2_TR(0x5bcbed);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcbf3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcbf3:L5bcbf3:{c.instructions+=7;NFSU2_TR(0x5bcbf3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bcbf7:{NFSU2_TR(0x5bcbf7);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcbfc:{NFSU2_TR(0x5bcbfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bcbfe:{NFSU2_TR(0x5bcbfe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcbff:{NFSU2_TR(0x5bcbff);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcc01:{NFSU2_TR(0x5bcc01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcc02:{NFSU2_TR(0x5bcc02);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcc08ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcc08:L5bcc08:{c.instructions+=1;NFSU2_TR(0x5bcc08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bcc09:L5bcc09:{c.instructions+=7;NFSU2_TR(0x5bcc09);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bcc0d:{NFSU2_TR(0x5bcc0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcc11:{NFSU2_TR(0x5bcc11);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bcc15:{NFSU2_TR(0x5bcc15);
__builtin_memmove(gp(0x86eae0),(R+0),4);
}
B5bcc1a:{NFSU2_TR(0x5bcc1a);
__builtin_memmove(gp(0x86eae4),(R+4),4);
}
B5bcc20:{NFSU2_TR(0x5bcc20);
__builtin_memmove(gp(0x86eae8),(R+8),4);
}
B5bcc26:{NFSU2_TR(0x5bcc26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bcc30:L5bcc30:{c.instructions+=12;NFSU2_TR(0x5bcc30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcc31:{NFSU2_TR(0x5bcc31);
__builtin_memmove((R+20),(R+16),4);
}
B5bcc33:{NFSU2_TR(0x5bcc33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bcc36:{NFSU2_TR(0x5bcc36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x68ull))));
}
B5bcc39:{NFSU2_TR(0x5bcc39);
__builtin_memmove((R+4),gp(0x870940),4);
}
B5bcc3f:{NFSU2_TR(0x5bcc3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcc40:{NFSU2_TR(0x5bcc40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bcc43:{NFSU2_TR(0x5bcc43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bcc45:{NFSU2_TR(0x5bcc45);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bcc47:{NFSU2_TR(0x5bcc47);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bcc4d:{NFSU2_TR(0x5bcc4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcc4e:{NFSU2_TR(0x5bcc4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bcc5c;}}
}
B5bcc50:L5bcc50:{c.instructions+=2;NFSU2_TR(0x5bcc50);
u8 U[14];
__builtin_memmove((U+6),gp(0x870944),4);
w1(R+512,u8((r4(U+6))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+4)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bcc56:{NFSU2_TR(0x5bcc56);
if(r1(R+518)){{goto L5bcf78;}}
}
B5bcc5c:L5bcc5c:{c.instructions+=6;NFSU2_TR(0x5bcc5c);
s4(0x872f10,u32(u32(m4(0x872f10))+u32(u32(0x1ull))));
}
B5bcc62:{NFSU2_TR(0x5bcc62);
__builtin_memmove(gp(0x870940),(R+24),4);
}
B5bcc68:{NFSU2_TR(0x5bcc68);
__builtin_memmove(gp(0x870944),(R+4),4);
}
B5bcc6e:{NFSU2_TR(0x5bcc6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bcc71:{NFSU2_TR(0x5bcc71);
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
B5bcc73:{NFSU2_TR(0x5bcc73);
if(r1(R+518)){{goto L5bcf78;}}
}
B5bcc79:L5bcc79:{c.instructions+=3;NFSU2_TR(0x5bcc79);
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
B5bcc7b:{NFSU2_TR(0x5bcc7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcc7c:{NFSU2_TR(0x5bcc7c);
if(r1(R+518)){{goto L5bcc96;}}
}
B5bcc7e:L5bcc7e:{c.instructions+=7;NFSU2_TR(0x5bcc7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bcc81:{NFSU2_TR(0x5bcc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bcc84:{NFSU2_TR(0x5bcc84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcc8a:{NFSU2_TR(0x5bcc8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5bcc8c:{NFSU2_TR(0x5bcc8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcc8d:{NFSU2_TR(0x5bcc8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcc8e:{NFSU2_TR(0x5bcc8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcc94ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcc94:L5bcc94:{c.instructions+=1;NFSU2_TR(0x5bcc94);
{goto L5bcca7;}
}
B5bcc96:L5bcc96:{c.instructions+=5;NFSU2_TR(0x5bcc96);
__builtin_memmove((R+4),gp(0x870974),4);
}
B5bcc9c:{NFSU2_TR(0x5bcc9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bcc9e:{NFSU2_TR(0x5bcc9e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcca0:{NFSU2_TR(0x5bcca0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcca1:{NFSU2_TR(0x5bcca1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcca7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcca7:L5bcca7:{c.instructions+=2;NFSU2_TR(0x5bcca7);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5bccab:{NFSU2_TR(0x5bccab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bccb3;}}
}
B5bccad:L5bccad:{c.instructions+=3;NFSU2_TR(0x5bccad);
u8 U[4];
w4(U+0,u32(0x5full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bccaf:{NFSU2_TR(0x5bccaf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bccb1:{NFSU2_TR(0x5bccb1);
{goto L5bccb7;}
}
B5bccb3:L5bccb3:{c.instructions+=2;NFSU2_TR(0x5bccb3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bccb5:{NFSU2_TR(0x5bccb5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bccb7:L5bccb7:{c.instructions+=1;NFSU2_TR(0x5bccb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bccbcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bcb70u);}goto L5bcb70;}
}
B5bccbc:L5bccbc:{c.instructions+=4;NFSU2_TR(0x5bccbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5bccbf:{NFSU2_TR(0x5bccbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5bccc2:{NFSU2_TR(0x5bccc2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bccc4:{NFSU2_TR(0x5bccc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bccce;}}
}
B5bccc6:L5bccc6:{c.instructions+=4;NFSU2_TR(0x5bccc6);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bccc8:{NFSU2_TR(0x5bccc8);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bccca:{NFSU2_TR(0x5bccca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcccc:{NFSU2_TR(0x5bcccc);
{goto L5bcd14;}
}
B5bccce:L5bccce:{c.instructions+=6;NFSU2_TR(0x5bccce);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B5bccd1:{NFSU2_TR(0x5bccd1);
w4(R+0,u32(0x5ull));
}
B5bccd6:{NFSU2_TR(0x5bccd6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5bccd7:{NFSU2_TR(0x5bccd7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5bccd9:{NFSU2_TR(0x5bccd9);
w4(R+4,u32(0x6ull));
}
B5bccde:{NFSU2_TR(0x5bccde);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5bcd10;}}
}
B5bcce0:L5bcce0:{c.instructions+=1;NFSU2_TR(0x5bcce0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5bcf80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcce7:L5bcce7:{c.instructions+=3;NFSU2_TR(0x5bcce7);
w4(R+0,u32(0x5ull));
}
B5bccec:{NFSU2_TR(0x5bccec);
w4(R+4,u32(0x6ull));
}
B5bccf1:{NFSU2_TR(0x5bccf1);
{goto L5bcd10;}
}
B5bccf3:L5bccf3:{c.instructions+=2;NFSU2_TR(0x5bccf3);
w4(R+0,u32(0x5ull));
}
B5bccf8:{NFSU2_TR(0x5bccf8);
{goto L5bcd0b;}
}
B5bccfa:L5bccfa:{c.instructions+=3;NFSU2_TR(0x5bccfa);
w4(R+0,u32(0x7ull));
}
B5bccff:{NFSU2_TR(0x5bccff);
w4(R+4,u32(0x8ull));
}
B5bcd04:{NFSU2_TR(0x5bcd04);
{goto L5bcd10;}
}
B5bcd06:L5bcd06:{c.instructions+=1;NFSU2_TR(0x5bcd06);
w4(R+0,u32(0x7ull));
}
B5bcd0b:L5bcd0b:{c.instructions+=1;NFSU2_TR(0x5bcd0b);
w4(R+4,u32(0x2ull));
}
B5bcd10:L5bcd10:{c.instructions+=3;NFSU2_TR(0x5bcd10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd11:{NFSU2_TR(0x5bcd11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd12:{NFSU2_TR(0x5bcd12);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd14:L5bcd14:{c.instructions+=1;NFSU2_TR(0x5bcd14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcd19ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bcbc0u);}goto L5bcbc0;}
}
B5bcd19:L5bcd19:{c.instructions+=6;NFSU2_TR(0x5bcd19);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bcd1c:{NFSU2_TR(0x5bcd1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5bcd1f:{NFSU2_TR(0x5bcd1f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bcd21:{NFSU2_TR(0x5bcd21);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5bcd26:{NFSU2_TR(0x5bcd26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcd29:{NFSU2_TR(0x5bcd29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bcd56;}}
}
B5bcd2b:L5bcd2b:{c.instructions+=2;NFSU2_TR(0x5bcd2b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bcd2e:{NFSU2_TR(0x5bcd2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bcd42;}}
}
B5bcd30:L5bcd30:{c.instructions+=6;NFSU2_TR(0x5bcd30);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcd35:{NFSU2_TR(0x5bcd35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bcd37:{NFSU2_TR(0x5bcd37);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd39:{NFSU2_TR(0x5bcd39);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd3b:{NFSU2_TR(0x5bcd3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd3c:{NFSU2_TR(0x5bcd3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcd42ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcd42:L5bcd42:{c.instructions+=6;NFSU2_TR(0x5bcd42);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcd47:{NFSU2_TR(0x5bcd47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bcd49:{NFSU2_TR(0x5bcd49);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd4b:{NFSU2_TR(0x5bcd4b);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd4d:{NFSU2_TR(0x5bcd4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd4e:{NFSU2_TR(0x5bcd4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcd54ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcd54:L5bcd54:{c.instructions+=1;NFSU2_TR(0x5bcd54);
{goto L5bcd8c;}
}
B5bcd56:L5bcd56:{c.instructions+=4;NFSU2_TR(0x5bcd56);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcd5b:{NFSU2_TR(0x5bcd5b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bcd5e:{NFSU2_TR(0x5bcd5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bcd60:{NFSU2_TR(0x5bcd60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bcd81;}}
}
B5bcd62:L5bcd62:{c.instructions+=4;NFSU2_TR(0x5bcd62);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd64:{NFSU2_TR(0x5bcd64);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd66:{NFSU2_TR(0x5bcd66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd67:{NFSU2_TR(0x5bcd67);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcd6dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcd6d:L5bcd6d:{c.instructions+=6;NFSU2_TR(0x5bcd6d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bcd72:{NFSU2_TR(0x5bcd72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bcd74:{NFSU2_TR(0x5bcd74);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd76:{NFSU2_TR(0x5bcd76);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd78:{NFSU2_TR(0x5bcd78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd79:{NFSU2_TR(0x5bcd79);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcd7full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcd7f:L5bcd7f:{c.instructions+=1;NFSU2_TR(0x5bcd7f);
{goto L5bcd8c;}
}
B5bcd81:L5bcd81:{c.instructions+=4;NFSU2_TR(0x5bcd81);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd83:{NFSU2_TR(0x5bcd83);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd85:{NFSU2_TR(0x5bcd85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd86:{NFSU2_TR(0x5bcd86);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcd8cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcd8c:L5bcd8c:{c.instructions+=10;NFSU2_TR(0x5bcd8c);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bcd92:{NFSU2_TR(0x5bcd92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bcd95:{NFSU2_TR(0x5bcd95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcd98:{NFSU2_TR(0x5bcd98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcd9b:{NFSU2_TR(0x5bcd9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bcd9d:{NFSU2_TR(0x5bcd9d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcd9f:{NFSU2_TR(0x5bcd9f);
u8 U[4];
w4(U+0,u32(0x86ead8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcda4:{NFSU2_TR(0x5bcda4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcda5:{NFSU2_TR(0x5bcda5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcda6:{NFSU2_TR(0x5bcda6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcda9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcda9:L5bcda9:{c.instructions+=9;NFSU2_TR(0x5bcda9);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5bcdae:{NFSU2_TR(0x5bcdae);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bcdb6:{NFSU2_TR(0x5bcdb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bcdbe:{NFSU2_TR(0x5bcdbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bcdc6:{NFSU2_TR(0x5bcdc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bcdce:{NFSU2_TR(0x5bcdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bcdd1:{NFSU2_TR(0x5bcdd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcdd7:{NFSU2_TR(0x5bcdd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bcdd9:{NFSU2_TR(0x5bcdd9);
if(r1(R+518)){{goto L5bceed;}}
}
B5bcddf:L5bcddf:{c.instructions+=3;NFSU2_TR(0x5bcddf);
__builtin_memmove((R+0),gp(0x870ce8),4);
}
B5bcde4:{NFSU2_TR(0x5bcde4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bcde6:{NFSU2_TR(0x5bcde6);
if(r1(R+518)){{goto L5bcede;}}
}
B5bcdec:L5bcdec:{c.instructions+=6;NFSU2_TR(0x5bcdec);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bcdf2:{NFSU2_TR(0x5bcdf2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bcdf5:{NFSU2_TR(0x5bcdf5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bcdf7:{NFSU2_TR(0x5bcdf7);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bcdfd:{NFSU2_TR(0x5bcdfd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bce01:{NFSU2_TR(0x5bce01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bce30;}}
}
B5bce03:L5bce03:{c.instructions+=10;NFSU2_TR(0x5bce03);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5bce07:{NFSU2_TR(0x5bce07);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5bce0b:{NFSU2_TR(0x5bce0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bce0f:{NFSU2_TR(0x5bce0f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bce13:{NFSU2_TR(0x5bce13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bce17:{NFSU2_TR(0x5bce17);
{u32 ea_=u32(u32(8009316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bce1d:{NFSU2_TR(0x5bce1d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bce21:{NFSU2_TR(0x5bce21);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bce25:{NFSU2_TR(0x5bce25);
{u32 ea_=u32(u32(8009316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bce2b:{NFSU2_TR(0x5bce2b);
{goto L5bceda;}
}
B5bce30:L5bce30:{c.instructions+=5;NFSU2_TR(0x5bce30);
{u32 ea_=u32(u32(8849700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bce36:{NFSU2_TR(0x5bce36);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bce3c:{NFSU2_TR(0x5bce3c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bce3e:{NFSU2_TR(0x5bce3e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bce41:{NFSU2_TR(0x5bce41);
if(r1(R+514)){{goto L5bce70;}}
}
B5bce43:L5bce43:{c.instructions+=5;NFSU2_TR(0x5bce43);
{u32 ea_=u32(u32(8849704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bce49:{NFSU2_TR(0x5bce49);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bce4f:{NFSU2_TR(0x5bce4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bce51:{NFSU2_TR(0x5bce51);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bce54:{NFSU2_TR(0x5bce54);
if(r1(R+514)){{goto L5bce70;}}
}
B5bce56:L5bce56:{c.instructions+=4;NFSU2_TR(0x5bce56);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bce5a:{NFSU2_TR(0x5bce5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bce5b:{NFSU2_TR(0x5bce5b);
__builtin_memmove((R+4),(R+24),4);
}
B5bce5d:{NFSU2_TR(0x5bce5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bce62ull));
TAIL_STATIC(0x5b7d40u,5b7);
}
B5bce62:L5bce62:{c.instructions+=4;NFSU2_TR(0x5bce62);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bce66:{NFSU2_TR(0x5bce66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bce67:{NFSU2_TR(0x5bce67);
__builtin_memmove((R+4),(R+24),4);
}
B5bce69:{NFSU2_TR(0x5bce69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bce6eull));
TAIL_STATIC(0x5b7d80u,5b7);
}
B5bce6e:L5bce6e:{c.instructions+=1;NFSU2_TR(0x5bce6e);
{goto L5bceda;}
}
B5bce70:L5bce70:{c.instructions+=20;NFSU2_TR(0x5bce70);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5bce74:{NFSU2_TR(0x5bce74);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bce78:{NFSU2_TR(0x5bce78);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5bce7c:{NFSU2_TR(0x5bce7c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bce80:{NFSU2_TR(0x5bce80);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bce84:{NFSU2_TR(0x5bce84);
__builtin_memmove((R+4),gp(0x800508),4);
}
B5bce8a:{NFSU2_TR(0x5bce8a);
{u32 ea_=u32(u32(8849700u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5bce90:{NFSU2_TR(0x5bce90);
__builtin_memmove((R+8),gp(0x800504),4);
}
B5bce96:{NFSU2_TR(0x5bce96);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bce9a:{NFSU2_TR(0x5bce9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bce9b:{NFSU2_TR(0x5bce9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bce9c:{NFSU2_TR(0x5bce9c);
__builtin_memmove((R+4),(R+24),4);
}
B5bce9e:{NFSU2_TR(0x5bce9e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bcea2:{NFSU2_TR(0x5bcea2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bcea6:{NFSU2_TR(0x5bcea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bceaa:{NFSU2_TR(0x5bceaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bceab:{NFSU2_TR(0x5bceab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bceac:{NFSU2_TR(0x5bceac);
{u32 ea_=u32(u32(8849704u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5bceb2:{NFSU2_TR(0x5bceb2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bceb6:{NFSU2_TR(0x5bceb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcebbull));
TAIL_STATIC(0x48b450u,48b);
}
B5bcebb:L5bcebb:{c.instructions+=10;NFSU2_TR(0x5bcebb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bcebf:{NFSU2_TR(0x5bcebf);
__builtin_memmove((R+4),gp(0x800508),4);
}
B5bcec5:{NFSU2_TR(0x5bcec5);
__builtin_memmove((R+8),gp(0x800504),4);
}
B5bcecb:{NFSU2_TR(0x5bcecb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bcecf:{NFSU2_TR(0x5bcecf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bced0:{NFSU2_TR(0x5bced0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bced1:{NFSU2_TR(0x5bced1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bced2:{NFSU2_TR(0x5bced2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bced3:{NFSU2_TR(0x5bced3);
__builtin_memmove((R+4),(R+24),4);
}
B5bced5:{NFSU2_TR(0x5bced5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcedaull));
TAIL_STATIC(0x48b450u,48b);
}
B5bceda:L5bceda:{c.instructions+=1;NFSU2_TR(0x5bceda);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bcede:L5bcede:{c.instructions+=2;NFSU2_TR(0x5bcede);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5bcee3:{NFSU2_TR(0x5bcee3);
s4(0x870948,u32(0x1ull));
}
B5bceed:L5bceed:{c.instructions+=2;NFSU2_TR(0x5bceed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bceef:{NFSU2_TR(0x5bceef);
if(r1(R+518)){{goto L5bcf67;}}
}
B5bcef1:L5bcef1:{c.instructions+=3;NFSU2_TR(0x5bcef1);
__builtin_memmove((R+4),gp(0x870948),4);
}
B5bcef7:{NFSU2_TR(0x5bcef7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bcef9:{NFSU2_TR(0x5bcef9);
if(r1(R+518)){{goto L5bcf67;}}
}
B5bcefb:L5bcefb:{c.instructions+=4;NFSU2_TR(0x5bcefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcefe:{NFSU2_TR(0x5bcefe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bcf04:{NFSU2_TR(0x5bcf04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bcf06:{NFSU2_TR(0x5bcf06);
if(r1(R+518)){{goto L5bcf67;}}
}
B5bcf08:L5bcf08:{c.instructions+=3;NFSU2_TR(0x5bcf08);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bcf0c:{NFSU2_TR(0x5bcf0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcf0d:{NFSU2_TR(0x5bcf0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcf12ull));
TAIL_STATIC(0x43c780u,43c);
}
B5bcf12:L5bcf12:{c.instructions+=15;NFSU2_TR(0x5bcf12);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcf16:{NFSU2_TR(0x5bcf16);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bcf1a:{NFSU2_TR(0x5bcf1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bcf1e:{NFSU2_TR(0x5bcf1e);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bcf24:{NFSU2_TR(0x5bcf24);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bcf28:{NFSU2_TR(0x5bcf28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bcf2b:{NFSU2_TR(0x5bcf2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcf2e:{NFSU2_TR(0x5bcf2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcf34:{NFSU2_TR(0x5bcf34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bcf36:{NFSU2_TR(0x5bcf36);
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
B5bcf39:{NFSU2_TR(0x5bcf39);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5bcf3d:{NFSU2_TR(0x5bcf3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcf3e:{NFSU2_TR(0x5bcf3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcf3f:{NFSU2_TR(0x5bcf3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcf40:{NFSU2_TR(0x5bcf40);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcf46ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcf46:L5bcf46:{c.instructions+=10;NFSU2_TR(0x5bcf46);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bcf4c:{NFSU2_TR(0x5bcf4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bcf4f:{NFSU2_TR(0x5bcf4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcf52:{NFSU2_TR(0x5bcf52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bcf58:{NFSU2_TR(0x5bcf58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bcf5a:{NFSU2_TR(0x5bcf5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5bcf5e:{NFSU2_TR(0x5bcf5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcf5f:{NFSU2_TR(0x5bcf5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcf60:{NFSU2_TR(0x5bcf60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcf61:{NFSU2_TR(0x5bcf61);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bcf67ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bcf67:L5bcf67:{c.instructions+=3;NFSU2_TR(0x5bcf67);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bcf6a:{NFSU2_TR(0x5bcf6a);
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
B5bcf6c:{NFSU2_TR(0x5bcf6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bcf78;}}
}
B5bcf6e:L5bcf6e:{c.instructions+=1;NFSU2_TR(0x5bcf6e);
s4(0x870948,u32(0x0ull));
}
B5bcf78:L5bcf78:{c.instructions+=5;NFSU2_TR(0x5bcf78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bcf79:{NFSU2_TR(0x5bcf79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bcf7a:{NFSU2_TR(0x5bcf7a);
__builtin_memmove((R+16),(R+20),4);
}
B5bcf7c:{NFSU2_TR(0x5bcf7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bcf7d:{NFSU2_TR(0x5bcf7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bcfa0:L5bcfa0:{c.instructions+=5;NFSU2_TR(0x5bcfa0);
__builtin_memmove((R+8),gp(0x872ee0),4);
}
B5bcfa6:{NFSU2_TR(0x5bcfa6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcfa7:{NFSU2_TR(0x5bcfa7);
w4(R+4,u32(0xfull));
}
B5bcfac:{NFSU2_TR(0x5bcfac);
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
B5bcfae:{NFSU2_TR(0x5bcfae);
w4(R+28,u32(0x872ed8ull));
}
B5bcfb3:L5bcfb3:{c.instructions+=1;NFSU2_TR(0x5bcfb3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5bcfb5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bcfb3u);}goto L5bcfb3;}
}
B5bcfb5:L5bcfb5:{c.instructions+=3;NFSU2_TR(0x5bcfb5);
__builtin_memmove(gp(0x872f0c),(R+8),4);
}
B5bcfbb:{NFSU2_TR(0x5bcfbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bcfbc:{NFSU2_TR(0x5bcfbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bcfc0:L5bcfc0:{c.instructions+=2;NFSU2_TR(0x5bcfc0);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x872f08),u32(0x1ull)));
s4(0x872f08,u32(u32(m4(0x872f08))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x872f08))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x872f08))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x872f08))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bcfc6:{NFSU2_TR(0x5bcfc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bcfd0:L5bcfd0:{c.instructions+=3;NFSU2_TR(0x5bcfd0);
__builtin_memmove((R+4),gp(0x872ed8),4);
}
B5bcfd6:{NFSU2_TR(0x5bcfd6);
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
B5bcfd8:{NFSU2_TR(0x5bcfd8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5bcfe3;}}
}
B5bcfda:L5bcfda:{c.instructions+=4;NFSU2_TR(0x5bcfda);
__builtin_memmove((R+0),gp(0x872ee0),4);
}
B5bcfdf:{NFSU2_TR(0x5bcfdf);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5bcfe0:{NFSU2_TR(0x5bcfe0);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5bcfe0);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5bcfe0);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5bcfe2:{NFSU2_TR(0x5bcfe2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bcfe3:L5bcfe3:{c.instructions+=2;NFSU2_TR(0x5bcfe3);
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
B5bcfe5:{NFSU2_TR(0x5bcfe5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bcff0:L5bcff0:{c.instructions+=5;NFSU2_TR(0x5bcff0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcff2:{NFSU2_TR(0x5bcff2);
u8 U[4];
w4(U+0,u32(0x7a3620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcff7:{NFSU2_TR(0x5bcff7);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcffc:{NFSU2_TR(0x5bcffc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bcffe:{NFSU2_TR(0x5bcffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd003ull));
TAIL_STATIC(0x440df0u,440);
}
XIT:NFSU2_TR_EXIT(0x5bc,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
