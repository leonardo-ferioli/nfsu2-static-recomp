#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_74d(u8* __restrict R,Cpu& c);
u32 body_754(u8* __restrict R,Cpu& c);
u32 body_755(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x74c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x74c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_74c(u8* __restrict R,Cpu& c);
u32 page_74c(Cpu& c){return body_74c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_74c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x74c000:goto L74c000;
case 0x74c007:c.instructions+=2;goto B74c007;
case 0x74c008:c.instructions+=1;goto B74c008;
case 0x74c010:goto L74c010;
case 0x74c016:c.instructions+=22;goto B74c016;
case 0x74c01b:c.instructions+=21;goto B74c01b;
case 0x74c01c:c.instructions+=20;goto B74c01c;
case 0x74c023:c.instructions+=19;goto B74c023;
case 0x74c024:c.instructions+=18;goto B74c024;
case 0x74c025:c.instructions+=17;goto B74c025;
case 0x74c02c:c.instructions+=16;goto B74c02c;
case 0x74c02d:c.instructions+=15;goto B74c02d;
case 0x74c034:c.instructions+=14;goto B74c034;
case 0x74c037:c.instructions+=13;goto B74c037;
case 0x74c03c:c.instructions+=12;goto B74c03c;
case 0x74c03f:c.instructions+=11;goto B74c03f;
case 0x74c043:c.instructions+=10;goto B74c043;
case 0x74c045:c.instructions+=9;goto B74c045;
case 0x74c049:c.instructions+=8;goto B74c049;
case 0x74c04a:c.instructions+=7;goto B74c04a;
case 0x74c051:c.instructions+=6;goto B74c051;
case 0x74c058:c.instructions+=5;goto B74c058;
case 0x74c05c:c.instructions+=4;goto B74c05c;
case 0x74c05f:c.instructions+=3;goto B74c05f;
case 0x74c064:c.instructions+=2;goto B74c064;
case 0x74c065:c.instructions+=1;goto B74c065;
case 0x74c06a:goto L74c06a;
case 0x74c06d:c.instructions+=2;goto B74c06d;
case 0x74c06e:c.instructions+=1;goto B74c06e;
case 0x74c073:goto L74c073;
case 0x74c076:c.instructions+=3;goto B74c076;
case 0x74c078:c.instructions+=2;goto B74c078;
case 0x74c07c:c.instructions+=1;goto B74c07c;
case 0x74c080:goto L74c080;
case 0x74c087:c.instructions+=2;goto B74c087;
case 0x74c08b:c.instructions+=1;goto B74c08b;
case 0x74c090:goto L74c090;
case 0x74c092:c.instructions+=3;goto B74c092;
case 0x74c094:c.instructions+=2;goto B74c094;
case 0x74c096:c.instructions+=1;goto B74c096;
case 0x74c098:goto L74c098;
case 0x74c09a:c.instructions+=1;goto B74c09a;
case 0x74c09c:goto L74c09c;
case 0x74c09f:c.instructions+=3;goto B74c09f;
case 0x74c0a1:c.instructions+=2;goto B74c0a1;
case 0x74c0a4:c.instructions+=1;goto B74c0a4;
case 0x74c0a6:goto L74c0a6;
case 0x74c0a9:c.instructions+=3;goto B74c0a9;
case 0x74c0ac:c.instructions+=2;goto B74c0ac;
case 0x74c0ae:c.instructions+=1;goto B74c0ae;
case 0x74c0b0:goto L74c0b0;
case 0x74c0b2:c.instructions+=1;goto B74c0b2;
case 0x74c0b4:goto L74c0b4;
case 0x74c0b6:c.instructions+=1;goto B74c0b6;
case 0x74c0b9:goto L74c0b9;
case 0x74c0bb:c.instructions+=1;goto B74c0bb;
case 0x74c0bd:goto L74c0bd;
case 0x74c0c1:c.instructions+=4;goto B74c0c1;
case 0x74c0c2:c.instructions+=3;goto B74c0c2;
case 0x74c0c5:c.instructions+=2;goto B74c0c5;
case 0x74c0c9:c.instructions+=1;goto B74c0c9;
case 0x74c0cb:goto L74c0cb;
case 0x74c0cd:goto L74c0cd;
case 0x74c0d1:c.instructions+=1;goto B74c0d1;
case 0x74c0d7:goto L74c0d7;
case 0x74c0da:c.instructions+=4;goto B74c0da;
case 0x74c0dc:c.instructions+=3;goto B74c0dc;
case 0x74c0e1:c.instructions+=2;goto B74c0e1;
case 0x74c0e2:c.instructions+=1;goto B74c0e2;
case 0x74c0e7:goto L74c0e7;
case 0x74c0ea:c.instructions+=2;goto B74c0ea;
case 0x74c0eb:c.instructions+=1;goto B74c0eb;
case 0x74c0f0:goto L74c0f0;
case 0x74c0f3:c.instructions+=13;goto B74c0f3;
case 0x74c0f8:c.instructions+=12;goto B74c0f8;
case 0x74c0fa:c.instructions+=11;goto B74c0fa;
case 0x74c0fd:c.instructions+=10;goto B74c0fd;
case 0x74c0ff:c.instructions+=9;goto B74c0ff;
case 0x74c105:c.instructions+=8;goto B74c105;
case 0x74c107:c.instructions+=7;goto B74c107;
case 0x74c108:c.instructions+=6;goto B74c108;
case 0x74c10a:c.instructions+=5;goto B74c10a;
case 0x74c10f:c.instructions+=4;goto B74c10f;
case 0x74c110:c.instructions+=3;goto B74c110;
case 0x74c111:c.instructions+=2;goto B74c111;
case 0x74c115:c.instructions+=1;goto B74c115;
case 0x74c11a:goto L74c11a;
case 0x74c11d:c.instructions+=2;goto B74c11d;
case 0x74c11e:c.instructions+=1;goto B74c11e;
case 0x74c123:goto L74c123;
case 0x74c126:c.instructions+=3;goto B74c126;
case 0x74c12b:c.instructions+=2;goto B74c12b;
case 0x74c12c:c.instructions+=1;goto B74c12c;
case 0x74c131:goto L74c131;
case 0x74c133:c.instructions+=4;goto B74c133;
case 0x74c139:c.instructions+=3;goto B74c139;
case 0x74c13c:c.instructions+=2;goto B74c13c;
case 0x74c13e:c.instructions+=1;goto B74c13e;
case 0x74c140:goto L74c140;
case 0x74c145:c.instructions+=9;goto B74c145;
case 0x74c147:c.instructions+=8;goto B74c147;
case 0x74c14c:c.instructions+=7;goto B74c14c;
case 0x74c152:c.instructions+=6;goto B74c152;
case 0x74c153:c.instructions+=5;goto B74c153;
case 0x74c159:c.instructions+=4;goto B74c159;
case 0x74c15c:c.instructions+=3;goto B74c15c;
case 0x74c161:c.instructions+=2;goto B74c161;
case 0x74c162:c.instructions+=1;goto B74c162;
case 0x74c167:goto L74c167;
case 0x74c16a:c.instructions+=2;goto B74c16a;
case 0x74c16b:c.instructions+=1;goto B74c16b;
case 0x74c170:goto L74c170;
case 0x74c173:c.instructions+=1;goto B74c173;
case 0x74c175:goto L74c175;
case 0x74c17a:c.instructions+=2;goto B74c17a;
case 0x74c180:c.instructions+=1;goto B74c180;
case 0x74c187:goto L74c187;
case 0x74c18a:c.instructions+=7;goto B74c18a;
case 0x74c18f:c.instructions+=6;goto B74c18f;
case 0x74c194:c.instructions+=5;goto B74c194;
case 0x74c198:c.instructions+=4;goto B74c198;
case 0x74c199:c.instructions+=3;goto B74c199;
case 0x74c19e:c.instructions+=2;goto B74c19e;
case 0x74c19f:c.instructions+=1;goto B74c19f;
case 0x74c1a4:goto L74c1a4;
case 0x74c1a7:c.instructions+=2;goto B74c1a7;
case 0x74c1a8:c.instructions+=1;goto B74c1a8;
case 0x74c1ad:goto L74c1ad;
case 0x74c1b0:c.instructions+=5;goto B74c1b0;
case 0x74c1b2:c.instructions+=4;goto B74c1b2;
case 0x74c1b6:c.instructions+=3;goto B74c1b6;
case 0x74c1bb:c.instructions+=2;goto B74c1bb;
case 0x74c1bc:c.instructions+=1;goto B74c1bc;
case 0x74c1c1:goto L74c1c1;
case 0x74c1c4:c.instructions+=2;goto B74c1c4;
case 0x74c1c5:c.instructions+=1;goto B74c1c5;
case 0x74c1ca:goto L74c1ca;
case 0x74c1d0:c.instructions+=9;goto B74c1d0;
case 0x74c1d3:c.instructions+=8;goto B74c1d3;
case 0x74c1d9:c.instructions+=7;goto B74c1d9;
case 0x74c1db:c.instructions+=6;goto B74c1db;
case 0x74c1e1:c.instructions+=5;goto B74c1e1;
case 0x74c1e7:c.instructions+=4;goto B74c1e7;
case 0x74c1ea:c.instructions+=3;goto B74c1ea;
case 0x74c1ef:c.instructions+=2;goto B74c1ef;
case 0x74c1f0:c.instructions+=1;goto B74c1f0;
case 0x74c1f5:goto L74c1f5;
case 0x74c1f8:c.instructions+=2;goto B74c1f8;
case 0x74c1f9:c.instructions+=1;goto B74c1f9;
case 0x74c1fe:goto L74c1fe;
case 0x74c204:c.instructions+=10;goto B74c204;
case 0x74c209:c.instructions+=9;goto B74c209;
case 0x74c20c:c.instructions+=8;goto B74c20c;
case 0x74c20e:c.instructions+=7;goto B74c20e;
case 0x74c213:c.instructions+=6;goto B74c213;
case 0x74c219:c.instructions+=5;goto B74c219;
case 0x74c21d:c.instructions+=4;goto B74c21d;
case 0x74c21f:c.instructions+=3;goto B74c21f;
case 0x74c220:c.instructions+=2;goto B74c220;
case 0x74c221:c.instructions+=1;goto B74c221;
case 0x74c226:goto L74c226;
case 0x74c228:c.instructions+=3;goto B74c228;
case 0x74c22b:c.instructions+=2;goto B74c22b;
case 0x74c22d:c.instructions+=1;goto B74c22d;
case 0x74c22f:goto L74c22f;
case 0x74c236:c.instructions+=8;goto B74c236;
case 0x74c23c:c.instructions+=7;goto B74c23c;
case 0x74c23e:c.instructions+=6;goto B74c23e;
case 0x74c241:c.instructions+=5;goto B74c241;
case 0x74c242:c.instructions+=4;goto B74c242;
case 0x74c248:c.instructions+=3;goto B74c248;
case 0x74c249:c.instructions+=2;goto B74c249;
case 0x74c24e:c.instructions+=1;goto B74c24e;
case 0x74c253:goto L74c253;
case 0x74c256:c.instructions+=10;goto B74c256;
case 0x74c25a:c.instructions+=9;goto B74c25a;
case 0x74c25f:c.instructions+=8;goto B74c25f;
case 0x74c261:c.instructions+=7;goto B74c261;
case 0x74c267:c.instructions+=6;goto B74c267;
case 0x74c269:c.instructions+=5;goto B74c269;
case 0x74c26a:c.instructions+=4;goto B74c26a;
case 0x74c26b:c.instructions+=3;goto B74c26b;
case 0x74c271:c.instructions+=2;goto B74c271;
case 0x74c278:c.instructions+=1;goto B74c278;
case 0x74c27d:goto L74c27d;
case 0x74c281:c.instructions+=7;goto B74c281;
case 0x74c284:c.instructions+=6;goto B74c284;
case 0x74c285:c.instructions+=5;goto B74c285;
case 0x74c286:c.instructions+=4;goto B74c286;
case 0x74c287:c.instructions+=3;goto B74c287;
case 0x74c288:c.instructions+=2;goto B74c288;
case 0x74c28f:c.instructions+=1;goto B74c28f;
case 0x74c294:goto L74c294;
case 0x74c29a:c.instructions+=1;goto B74c29a;
case 0x74c29b:goto L74c29b;
case 0x74c29d:c.instructions+=4;goto B74c29d;
case 0x74c2a1:c.instructions+=3;goto B74c2a1;
case 0x74c2a6:c.instructions+=2;goto B74c2a6;
case 0x74c2a7:c.instructions+=1;goto B74c2a7;
case 0x74c2ac:goto L74c2ac;
case 0x74c2af:c.instructions+=2;goto B74c2af;
case 0x74c2b0:c.instructions+=1;goto B74c2b0;
case 0x74c2b5:goto L74c2b5;
case 0x74c2b9:c.instructions+=6;goto B74c2b9;
case 0x74c2c0:c.instructions+=5;goto B74c2c0;
case 0x74c2c6:c.instructions+=4;goto B74c2c6;
case 0x74c2c9:c.instructions+=3;goto B74c2c9;
case 0x74c2cb:c.instructions+=2;goto B74c2cb;
case 0x74c2cd:c.instructions+=1;goto B74c2cd;
case 0x74c2d3:goto L74c2d3;
case 0x74c2d9:c.instructions+=1;goto B74c2d9;
case 0x74c2e0:goto L74c2e0;
case 0x74c2e3:c.instructions+=9;goto B74c2e3;
case 0x74c2e5:c.instructions+=8;goto B74c2e5;
case 0x74c2e9:c.instructions+=7;goto B74c2e9;
case 0x74c2ed:c.instructions+=6;goto B74c2ed;
case 0x74c2ee:c.instructions+=5;goto B74c2ee;
case 0x74c2f2:c.instructions+=4;goto B74c2f2;
case 0x74c2f3:c.instructions+=3;goto B74c2f3;
case 0x74c2f7:c.instructions+=2;goto B74c2f7;
case 0x74c2fc:c.instructions+=1;goto B74c2fc;
case 0x74c301:goto L74c301;
case 0x74c304:c.instructions+=2;goto B74c304;
case 0x74c306:c.instructions+=1;goto B74c306;
case 0x74c308:goto L74c308;
case 0x74c30f:c.instructions+=5;goto B74c30f;
case 0x74c315:c.instructions+=4;goto B74c315;
case 0x74c316:c.instructions+=3;goto B74c316;
case 0x74c319:c.instructions+=2;goto B74c319;
case 0x74c31b:c.instructions+=1;goto B74c31b;
case 0x74c31d:goto L74c31d;
case 0x74c322:goto L74c322;
case 0x74c327:c.instructions+=4;goto B74c327;
case 0x74c329:c.instructions+=3;goto B74c329;
case 0x74c32a:c.instructions+=2;goto B74c32a;
case 0x74c32b:c.instructions+=1;goto B74c32b;
case 0x74c330:goto L74c330;
case 0x74c334:c.instructions+=14;goto B74c334;
case 0x74c338:c.instructions+=13;goto B74c338;
case 0x74c33a:c.instructions+=12;goto B74c33a;
case 0x74c33c:c.instructions+=11;goto B74c33c;
case 0x74c342:c.instructions+=10;goto B74c342;
case 0x74c346:c.instructions+=9;goto B74c346;
case 0x74c34c:c.instructions+=8;goto B74c34c;
case 0x74c353:c.instructions+=7;goto B74c353;
case 0x74c356:c.instructions+=6;goto B74c356;
case 0x74c358:c.instructions+=5;goto B74c358;
case 0x74c35a:c.instructions+=4;goto B74c35a;
case 0x74c35f:c.instructions+=3;goto B74c35f;
case 0x74c361:c.instructions+=2;goto B74c361;
case 0x74c365:c.instructions+=1;goto B74c365;
case 0x74c367:goto L74c367;
case 0x74c36c:c.instructions+=1;goto B74c36c;
case 0x74c370:goto L74c370;
case 0x74c374:c.instructions+=1;goto B74c374;
case 0x74c376:goto L74c376;
case 0x74c37a:c.instructions+=2;goto B74c37a;
case 0x74c37c:c.instructions+=1;goto B74c37c;
case 0x74c380:goto L74c380;
case 0x74c385:c.instructions+=1;goto B74c385;
case 0x74c387:goto L74c387;
case 0x74c388:c.instructions+=2;goto B74c388;
case 0x74c38b:c.instructions+=1;goto B74c38b;
case 0x74c38d:goto L74c38d;
case 0x74c390:c.instructions+=4;goto B74c390;
case 0x74c393:c.instructions+=3;goto B74c393;
case 0x74c394:c.instructions+=2;goto B74c394;
case 0x74c396:c.instructions+=1;goto B74c396;
case 0x74c398:goto L74c398;
case 0x74c39a:goto L74c39a;
case 0x74c39d:c.instructions+=6;goto B74c39d;
case 0x74c3a4:c.instructions+=5;goto B74c3a4;
case 0x74c3a5:c.instructions+=4;goto B74c3a5;
case 0x74c3a8:c.instructions+=3;goto B74c3a8;
case 0x74c3aa:c.instructions+=2;goto B74c3aa;
case 0x74c3ab:c.instructions+=1;goto B74c3ab;
case 0x74c3b0:goto L74c3b0;
case 0x74c3b3:goto L74c3b3;
case 0x74c3b7:goto L74c3b7;
case 0x74c3bd:c.instructions+=2;goto B74c3bd;
case 0x74c3bf:c.instructions+=1;goto B74c3bf;
case 0x74c3c1:goto L74c3c1;
case 0x74c3c5:c.instructions+=8;goto B74c3c5;
case 0x74c3c7:c.instructions+=7;goto B74c3c7;
case 0x74c3ca:c.instructions+=6;goto B74c3ca;
case 0x74c3cb:c.instructions+=5;goto B74c3cb;
case 0x74c3d2:c.instructions+=4;goto B74c3d2;
case 0x74c3d8:c.instructions+=3;goto B74c3d8;
case 0x74c3de:c.instructions+=2;goto B74c3de;
case 0x74c3df:c.instructions+=1;goto B74c3df;
case 0x74c3e4:goto L74c3e4;
case 0x74c3e7:c.instructions+=12;goto B74c3e7;
case 0x74c3e8:c.instructions+=11;goto B74c3e8;
case 0x74c3ee:c.instructions+=10;goto B74c3ee;
case 0x74c3f5:c.instructions+=9;goto B74c3f5;
case 0x74c3f7:c.instructions+=8;goto B74c3f7;
case 0x74c3fb:c.instructions+=7;goto B74c3fb;
case 0x74c3fe:c.instructions+=6;goto B74c3fe;
case 0x74c404:c.instructions+=5;goto B74c404;
case 0x74c405:c.instructions+=4;goto B74c405;
case 0x74c406:c.instructions+=3;goto B74c406;
case 0x74c407:c.instructions+=2;goto B74c407;
case 0x74c40e:c.instructions+=1;goto B74c40e;
case 0x74c413:goto L74c413;
case 0x74c419:c.instructions+=1;goto B74c419;
case 0x74c41a:goto L74c41a;
case 0x74c421:c.instructions+=6;goto B74c421;
case 0x74c423:c.instructions+=5;goto B74c423;
case 0x74c424:c.instructions+=4;goto B74c424;
case 0x74c425:c.instructions+=3;goto B74c425;
case 0x74c426:c.instructions+=2;goto B74c426;
case 0x74c427:c.instructions+=1;goto B74c427;
case 0x74c42c:goto L74c42c;
case 0x74c432:c.instructions+=1;goto B74c432;
case 0x74c440:goto L74c440;
case 0x74c446:c.instructions+=10;goto B74c446;
case 0x74c44b:c.instructions+=9;goto B74c44b;
case 0x74c44c:c.instructions+=8;goto B74c44c;
case 0x74c453:c.instructions+=7;goto B74c453;
case 0x74c459:c.instructions+=6;goto B74c459;
case 0x74c45a:c.instructions+=5;goto B74c45a;
case 0x74c45f:c.instructions+=4;goto B74c45f;
case 0x74c465:c.instructions+=3;goto B74c465;
case 0x74c46a:c.instructions+=2;goto B74c46a;
case 0x74c46b:c.instructions+=1;goto B74c46b;
case 0x74c470:goto L74c470;
case 0x74c476:c.instructions+=3;goto B74c476;
case 0x74c479:c.instructions+=2;goto B74c479;
case 0x74c47b:c.instructions+=1;goto B74c47b;
case 0x74c47d:goto L74c47d;
case 0x74c47e:c.instructions+=4;goto B74c47e;
case 0x74c483:c.instructions+=3;goto B74c483;
case 0x74c488:c.instructions+=2;goto B74c488;
case 0x74c489:c.instructions+=1;goto B74c489;
case 0x74c48e:goto L74c48e;
case 0x74c491:goto L74c491;
case 0x74c497:c.instructions+=5;goto B74c497;
case 0x74c498:c.instructions+=4;goto B74c498;
case 0x74c49c:c.instructions+=3;goto B74c49c;
case 0x74c4a1:c.instructions+=2;goto B74c4a1;
case 0x74c4a2:c.instructions+=1;goto B74c4a2;
case 0x74c4a7:goto L74c4a7;
case 0x74c4a9:c.instructions+=3;goto B74c4a9;
case 0x74c4ac:c.instructions+=2;goto B74c4ac;
case 0x74c4ae:c.instructions+=1;goto B74c4ae;
case 0x74c4b0:goto L74c4b0;
case 0x74c4b1:c.instructions+=5;goto B74c4b1;
case 0x74c4b6:c.instructions+=4;goto B74c4b6;
case 0x74c4ba:c.instructions+=3;goto B74c4ba;
case 0x74c4bf:c.instructions+=2;goto B74c4bf;
case 0x74c4c0:c.instructions+=1;goto B74c4c0;
case 0x74c4c5:goto L74c4c5;
case 0x74c4c8:goto L74c4c8;
case 0x74c4ce:c.instructions+=4;goto B74c4ce;
case 0x74c4d0:c.instructions+=3;goto B74c4d0;
case 0x74c4d6:c.instructions+=2;goto B74c4d6;
case 0x74c4d7:c.instructions+=1;goto B74c4d7;
case 0x74c4d9:goto L74c4d9;
case 0x74c4da:c.instructions+=5;goto B74c4da;
case 0x74c4df:c.instructions+=4;goto B74c4df;
case 0x74c4e3:c.instructions+=3;goto B74c4e3;
case 0x74c4e8:c.instructions+=2;goto B74c4e8;
case 0x74c4e9:c.instructions+=1;goto B74c4e9;
case 0x74c4ee:goto L74c4ee;
case 0x74c4f1:goto L74c4f1;
case 0x74c4f7:c.instructions+=3;goto B74c4f7;
case 0x74c4f9:c.instructions+=2;goto B74c4f9;
case 0x74c4ff:c.instructions+=1;goto B74c4ff;
case 0x74c501:goto L74c501;
case 0x74c502:c.instructions+=5;goto B74c502;
case 0x74c507:c.instructions+=4;goto B74c507;
case 0x74c50b:c.instructions+=3;goto B74c50b;
case 0x74c510:c.instructions+=2;goto B74c510;
case 0x74c511:c.instructions+=1;goto B74c511;
case 0x74c516:goto L74c516;
case 0x74c519:goto L74c519;
case 0x74c520:c.instructions+=1;goto B74c520;
case 0x74c522:goto L74c522;
case 0x74c527:c.instructions+=5;goto B74c527;
case 0x74c52c:c.instructions+=4;goto B74c52c;
case 0x74c530:c.instructions+=3;goto B74c530;
case 0x74c535:c.instructions+=2;goto B74c535;
case 0x74c536:c.instructions+=1;goto B74c536;
case 0x74c53b:goto L74c53b;
case 0x74c53e:goto L74c53e;
case 0x74c541:c.instructions+=7;goto B74c541;
case 0x74c543:c.instructions+=6;goto B74c543;
case 0x74c547:c.instructions+=5;goto B74c547;
case 0x74c548:c.instructions+=4;goto B74c548;
case 0x74c54a:c.instructions+=3;goto B74c54a;
case 0x74c54f:c.instructions+=2;goto B74c54f;
case 0x74c550:c.instructions+=1;goto B74c550;
case 0x74c555:goto L74c555;
case 0x74c55c:c.instructions+=2;goto B74c55c;
case 0x74c566:c.instructions+=1;goto B74c566;
case 0x74c56b:goto L74c56b;
case 0x74c571:c.instructions+=1;goto B74c571;
case 0x74c580:goto L74c580;
case 0x74c583:c.instructions+=3;goto B74c583;
case 0x74c586:c.instructions+=2;goto B74c586;
case 0x74c588:c.instructions+=1;goto B74c588;
case 0x74c58a:goto L74c58a;
case 0x74c590:c.instructions+=3;goto B74c590;
case 0x74c592:c.instructions+=2;goto B74c592;
case 0x74c595:c.instructions+=1;goto B74c595;
case 0x74c597:goto L74c597;
case 0x74c59a:c.instructions+=1;goto B74c59a;
case 0x74c59c:goto L74c59c;
case 0x74c5a0:c.instructions+=9;goto B74c5a0;
case 0x74c5a6:c.instructions+=8;goto B74c5a6;
case 0x74c5a7:c.instructions+=7;goto B74c5a7;
case 0x74c5ab:c.instructions+=6;goto B74c5ab;
case 0x74c5ac:c.instructions+=5;goto B74c5ac;
case 0x74c5ad:c.instructions+=4;goto B74c5ad;
case 0x74c5b5:c.instructions+=3;goto B74c5b5;
case 0x74c5bd:c.instructions+=2;goto B74c5bd;
case 0x74c5c5:c.instructions+=1;goto B74c5c5;
case 0x74c5c7:goto L74c5c7;
case 0x74c5ca:goto L74c5ca;
case 0x74c5cd:c.instructions+=1;goto B74c5cd;
case 0x74c5d0:goto L74c5d0;
case 0x74c5d1:c.instructions+=4;goto B74c5d1;
case 0x74c5d3:c.instructions+=3;goto B74c5d3;
case 0x74c5d5:c.instructions+=2;goto B74c5d5;
case 0x74c5d7:c.instructions+=1;goto B74c5d7;
case 0x74c5d9:goto L74c5d9;
case 0x74c5dc:c.instructions+=2;goto B74c5dc;
case 0x74c5dd:c.instructions+=1;goto B74c5dd;
case 0x74c5e2:goto L74c5e2;
case 0x74c5e8:c.instructions+=2;goto B74c5e8;
case 0x74c5eb:c.instructions+=1;goto B74c5eb;
case 0x74c5ed:goto L74c5ed;
case 0x74c5f4:c.instructions+=17;goto B74c5f4;
case 0x74c5fb:c.instructions+=16;goto B74c5fb;
case 0x74c5fe:c.instructions+=15;goto B74c5fe;
case 0x74c601:c.instructions+=14;goto B74c601;
case 0x74c602:c.instructions+=13;goto B74c602;
case 0x74c605:c.instructions+=12;goto B74c605;
case 0x74c607:c.instructions+=11;goto B74c607;
case 0x74c60a:c.instructions+=10;goto B74c60a;
case 0x74c60d:c.instructions+=9;goto B74c60d;
case 0x74c613:c.instructions+=8;goto B74c613;
case 0x74c617:c.instructions+=7;goto B74c617;
case 0x74c61d:c.instructions+=6;goto B74c61d;
case 0x74c621:c.instructions+=5;goto B74c621;
case 0x74c627:c.instructions+=4;goto B74c627;
case 0x74c62d:c.instructions+=3;goto B74c62d;
case 0x74c633:c.instructions+=2;goto B74c633;
case 0x74c634:c.instructions+=1;goto B74c634;
case 0x74c640:goto L74c640;
case 0x74c643:c.instructions+=10;goto B74c643;
case 0x74c648:c.instructions+=9;goto B74c648;
case 0x74c649:c.instructions+=8;goto B74c649;
case 0x74c64a:c.instructions+=7;goto B74c64a;
case 0x74c64e:c.instructions+=6;goto B74c64e;
case 0x74c652:c.instructions+=5;goto B74c652;
case 0x74c658:c.instructions+=4;goto B74c658;
case 0x74c65a:c.instructions+=3;goto B74c65a;
case 0x74c65b:c.instructions+=2;goto B74c65b;
case 0x74c65c:c.instructions+=1;goto B74c65c;
case 0x74c65e:goto L74c65e;
case 0x74c663:c.instructions+=2;goto B74c663;
case 0x74c668:c.instructions+=1;goto B74c668;
case 0x74c66d:goto L74c66d;
case 0x74c670:c.instructions+=1;goto B74c670;
case 0x74c676:goto L74c676;
case 0x74c67c:c.instructions+=2;goto B74c67c;
case 0x74c67e:c.instructions+=1;goto B74c67e;
case 0x74c680:goto L74c680;
case 0x74c682:c.instructions+=3;goto B74c682;
case 0x74c684:c.instructions+=2;goto B74c684;
case 0x74c686:c.instructions+=1;goto B74c686;
case 0x74c68b:goto L74c68b;
case 0x74c68e:c.instructions+=1;goto B74c68e;
case 0x74c694:goto L74c694;
case 0x74c698:c.instructions+=5;goto B74c698;
case 0x74c69a:c.instructions+=4;goto B74c69a;
case 0x74c69f:c.instructions+=3;goto B74c69f;
case 0x74c6a0:c.instructions+=2;goto B74c6a0;
case 0x74c6a8:c.instructions+=1;goto B74c6a8;
case 0x74c6ad:goto L74c6ad;
case 0x74c6b0:c.instructions+=2;goto B74c6b0;
case 0x74c6b1:c.instructions+=1;goto B74c6b1;
case 0x74c6b6:goto L74c6b6;
case 0x74c6b8:c.instructions+=4;goto B74c6b8;
case 0x74c6bb:c.instructions+=3;goto B74c6bb;
case 0x74c6be:c.instructions+=2;goto B74c6be;
case 0x74c6c2:c.instructions+=1;goto B74c6c2;
case 0x74c6c4:goto L74c6c4;
case 0x74c6cc:c.instructions+=1;goto B74c6cc;
case 0x74c6ce:goto L74c6ce;
case 0x74c6d1:c.instructions+=1;goto B74c6d1;
case 0x74c6d3:goto L74c6d3;
case 0x74c6db:goto L74c6db;
case 0x74c6e0:c.instructions+=6;goto B74c6e0;
case 0x74c6e2:c.instructions+=5;goto B74c6e2;
case 0x74c6e6:c.instructions+=4;goto B74c6e6;
case 0x74c6e7:c.instructions+=3;goto B74c6e7;
case 0x74c6ec:c.instructions+=2;goto B74c6ec;
case 0x74c6ed:c.instructions+=1;goto B74c6ed;
case 0x74c6f2:goto L74c6f2;
case 0x74c6f5:c.instructions+=2;goto B74c6f5;
case 0x74c6f6:c.instructions+=1;goto B74c6f6;
case 0x74c6fb:goto L74c6fb;
case 0x74c6ff:c.instructions+=3;goto B74c6ff;
case 0x74c701:c.instructions+=2;goto B74c701;
case 0x74c702:c.instructions+=1;goto B74c702;
case 0x74c707:goto L74c707;
case 0x74c70a:c.instructions+=2;goto B74c70a;
case 0x74c70c:c.instructions+=1;goto B74c70c;
case 0x74c70e:goto L74c70e;
case 0x74c711:goto L74c711;
case 0x74c715:c.instructions+=3;goto B74c715;
case 0x74c717:c.instructions+=2;goto B74c717;
case 0x74c718:c.instructions+=1;goto B74c718;
case 0x74c71d:goto L74c71d;
case 0x74c720:c.instructions+=2;goto B74c720;
case 0x74c722:c.instructions+=1;goto B74c722;
case 0x74c724:goto L74c724;
case 0x74c727:goto L74c727;
case 0x74c72b:c.instructions+=3;goto B74c72b;
case 0x74c72d:c.instructions+=2;goto B74c72d;
case 0x74c72e:c.instructions+=1;goto B74c72e;
case 0x74c733:goto L74c733;
case 0x74c736:c.instructions+=2;goto B74c736;
case 0x74c738:c.instructions+=1;goto B74c738;
case 0x74c73a:goto L74c73a;
case 0x74c73d:goto L74c73d;
case 0x74c741:c.instructions+=1;goto B74c741;
case 0x74c744:goto L74c744;
case 0x74c746:c.instructions+=3;goto B74c746;
case 0x74c747:c.instructions+=2;goto B74c747;
case 0x74c749:c.instructions+=1;goto B74c749;
case 0x74c74b:goto L74c74b;
case 0x74c74d:c.instructions+=2;goto B74c74d;
case 0x74c751:c.instructions+=1;goto B74c751;
case 0x74c757:goto L74c757;
case 0x74c75a:c.instructions+=2;goto B74c75a;
case 0x74c75c:c.instructions+=1;goto B74c75c;
case 0x74c75e:goto L74c75e;
case 0x74c762:c.instructions+=3;goto B74c762;
case 0x74c764:c.instructions+=2;goto B74c764;
case 0x74c765:c.instructions+=1;goto B74c765;
case 0x74c76a:goto L74c76a;
case 0x74c76d:c.instructions+=2;goto B74c76d;
case 0x74c76f:c.instructions+=1;goto B74c76f;
case 0x74c775:goto L74c775;
case 0x74c77b:c.instructions+=4;goto B74c77b;
case 0x74c77f:c.instructions+=3;goto B74c77f;
case 0x74c780:c.instructions+=2;goto B74c780;
case 0x74c781:c.instructions+=1;goto B74c781;
case 0x74c786:goto L74c786;
case 0x74c788:c.instructions+=3;goto B74c788;
case 0x74c78b:c.instructions+=2;goto B74c78b;
case 0x74c78d:c.instructions+=1;goto B74c78d;
case 0x74c78f:goto L74c78f;
case 0x74c793:c.instructions+=1;goto B74c793;
case 0x74c796:goto L74c796;
case 0x74c798:c.instructions+=3;goto B74c798;
case 0x74c799:c.instructions+=2;goto B74c799;
case 0x74c79b:c.instructions+=1;goto B74c79b;
case 0x74c79d:goto L74c79d;
case 0x74c79f:c.instructions+=2;goto B74c79f;
case 0x74c7a2:c.instructions+=1;goto B74c7a2;
case 0x74c7a8:goto L74c7a8;
case 0x74c7ad:c.instructions+=1;goto B74c7ad;
case 0x74c7b0:goto L74c7b0;
case 0x74c7b2:c.instructions+=3;goto B74c7b2;
case 0x74c7b4:c.instructions+=2;goto B74c7b4;
case 0x74c7b9:c.instructions+=1;goto B74c7b9;
case 0x74c7bb:goto L74c7bb;
case 0x74c7bd:goto L74c7bd;
case 0x74c7c1:c.instructions+=5;goto B74c7c1;
case 0x74c7c3:c.instructions+=4;goto B74c7c3;
case 0x74c7c5:c.instructions+=3;goto B74c7c5;
case 0x74c7c8:c.instructions+=2;goto B74c7c8;
case 0x74c7ca:c.instructions+=1;goto B74c7ca;
case 0x74c7d0:goto L74c7d0;
case 0x74c7d2:c.instructions+=4;goto B74c7d2;
case 0x74c7d5:c.instructions+=3;goto B74c7d5;
case 0x74c7d6:c.instructions+=2;goto B74c7d6;
case 0x74c7d8:c.instructions+=1;goto B74c7d8;
case 0x74c7da:goto L74c7da;
case 0x74c7e0:c.instructions+=3;goto B74c7e0;
case 0x74c7e1:c.instructions+=2;goto B74c7e1;
case 0x74c7e2:c.instructions+=1;goto B74c7e2;
case 0x74c7e7:goto L74c7e7;
case 0x74c7e9:c.instructions+=5;goto B74c7e9;
case 0x74c7ef:c.instructions+=4;goto B74c7ef;
case 0x74c7f0:c.instructions+=3;goto B74c7f0;
case 0x74c7f1:c.instructions+=2;goto B74c7f1;
case 0x74c7f2:c.instructions+=1;goto B74c7f2;
case 0x74c7f7:goto L74c7f7;
case 0x74c7fb:c.instructions+=3;goto B74c7fb;
case 0x74c7fe:c.instructions+=2;goto B74c7fe;
case 0x74c800:c.instructions+=1;goto B74c800;
case 0x74c806:goto L74c806;
case 0x74c80a:goto L74c80a;
case 0x74c810:c.instructions+=3;goto B74c810;
case 0x74c811:c.instructions+=2;goto B74c811;
case 0x74c812:c.instructions+=1;goto B74c812;
case 0x74c817:goto L74c817;
case 0x74c819:c.instructions+=3;goto B74c819;
case 0x74c81c:c.instructions+=2;goto B74c81c;
case 0x74c81e:c.instructions+=1;goto B74c81e;
case 0x74c820:goto L74c820;
case 0x74c824:c.instructions+=2;goto B74c824;
case 0x74c826:c.instructions+=1;goto B74c826;
case 0x74c828:goto L74c828;
case 0x74c82e:c.instructions+=3;goto B74c82e;
case 0x74c830:c.instructions+=2;goto B74c830;
case 0x74c836:c.instructions+=1;goto B74c836;
case 0x74c83c:goto L74c83c;
case 0x74c840:c.instructions+=14;goto B74c840;
case 0x74c844:c.instructions+=13;goto B74c844;
case 0x74c847:c.instructions+=12;goto B74c847;
case 0x74c849:c.instructions+=11;goto B74c849;
case 0x74c84b:c.instructions+=10;goto B74c84b;
case 0x74c84f:c.instructions+=9;goto B74c84f;
case 0x74c852:c.instructions+=8;goto B74c852;
case 0x74c856:c.instructions+=7;goto B74c856;
case 0x74c859:c.instructions+=6;goto B74c859;
case 0x74c85d:c.instructions+=5;goto B74c85d;
case 0x74c860:c.instructions+=4;goto B74c860;
case 0x74c863:c.instructions+=3;goto B74c863;
case 0x74c864:c.instructions+=2;goto B74c864;
case 0x74c867:c.instructions+=1;goto B74c867;
case 0x74c86c:goto L74c86c;
case 0x74c872:c.instructions+=6;goto B74c872;
case 0x74c874:c.instructions+=5;goto B74c874;
case 0x74c876:c.instructions+=4;goto B74c876;
case 0x74c879:c.instructions+=3;goto B74c879;
case 0x74c87e:c.instructions+=2;goto B74c87e;
case 0x74c884:c.instructions+=1;goto B74c884;
case 0x74c886:goto L74c886;
case 0x74c88b:c.instructions+=1;goto B74c88b;
case 0x74c88d:goto L74c88d;
case 0x74c890:c.instructions+=1;goto B74c890;
case 0x74c896:goto L74c896;
case 0x74c89a:c.instructions+=2;goto B74c89a;
case 0x74c89c:c.instructions+=1;goto B74c89c;
case 0x74c8a1:goto L74c8a1;
case 0x74c8a2:c.instructions+=5;goto B74c8a2;
case 0x74c8a3:c.instructions+=4;goto B74c8a3;
case 0x74c8a4:c.instructions+=3;goto B74c8a4;
case 0x74c8a5:c.instructions+=2;goto B74c8a5;
case 0x74c8a8:c.instructions+=1;goto B74c8a8;
case 0x74c8b0:goto L74c8b0;
case 0x74c8b1:c.instructions+=16;goto B74c8b1;
case 0x74c8b3:c.instructions+=15;goto B74c8b3;
case 0x74c8b6:c.instructions+=14;goto B74c8b6;
case 0x74c8bc:c.instructions+=13;goto B74c8bc;
case 0x74c8c1:c.instructions+=12;goto B74c8c1;
case 0x74c8c4:c.instructions+=11;goto B74c8c4;
case 0x74c8c5:c.instructions+=10;goto B74c8c5;
case 0x74c8c6:c.instructions+=9;goto B74c8c6;
case 0x74c8c7:c.instructions+=8;goto B74c8c7;
case 0x74c8cc:c.instructions+=7;goto B74c8cc;
case 0x74c8d3:c.instructions+=6;goto B74c8d3;
case 0x74c8d5:c.instructions+=5;goto B74c8d5;
case 0x74c8d9:c.instructions+=4;goto B74c8d9;
case 0x74c8da:c.instructions+=3;goto B74c8da;
case 0x74c8df:c.instructions+=2;goto B74c8df;
case 0x74c8e0:c.instructions+=1;goto B74c8e0;
case 0x74c8e5:goto L74c8e5;
case 0x74c8e8:c.instructions+=2;goto B74c8e8;
case 0x74c8e9:c.instructions+=1;goto B74c8e9;
case 0x74c8ee:goto L74c8ee;
case 0x74c8f2:c.instructions+=3;goto B74c8f2;
case 0x74c8f4:c.instructions+=2;goto B74c8f4;
case 0x74c8f5:c.instructions+=1;goto B74c8f5;
case 0x74c8fa:goto L74c8fa;
case 0x74c8fd:c.instructions+=2;goto B74c8fd;
case 0x74c8ff:c.instructions+=1;goto B74c8ff;
case 0x74c901:goto L74c901;
case 0x74c904:goto L74c904;
case 0x74c908:c.instructions+=3;goto B74c908;
case 0x74c90a:c.instructions+=2;goto B74c90a;
case 0x74c90b:c.instructions+=1;goto B74c90b;
case 0x74c910:goto L74c910;
case 0x74c913:c.instructions+=2;goto B74c913;
case 0x74c915:c.instructions+=1;goto B74c915;
case 0x74c917:goto L74c917;
case 0x74c91a:goto L74c91a;
case 0x74c91e:c.instructions+=3;goto B74c91e;
case 0x74c920:c.instructions+=2;goto B74c920;
case 0x74c921:c.instructions+=1;goto B74c921;
case 0x74c926:goto L74c926;
case 0x74c929:c.instructions+=2;goto B74c929;
case 0x74c92b:c.instructions+=1;goto B74c92b;
case 0x74c92d:goto L74c92d;
case 0x74c930:goto L74c930;
case 0x74c933:c.instructions+=5;goto B74c933;
case 0x74c939:c.instructions+=4;goto B74c939;
case 0x74c93d:c.instructions+=3;goto B74c93d;
case 0x74c93e:c.instructions+=2;goto B74c93e;
case 0x74c93f:c.instructions+=1;goto B74c93f;
case 0x74c944:goto L74c944;
case 0x74c947:c.instructions+=2;goto B74c947;
case 0x74c949:c.instructions+=1;goto B74c949;
case 0x74c94f:goto L74c94f;
case 0x74c955:c.instructions+=3;goto B74c955;
case 0x74c956:c.instructions+=2;goto B74c956;
case 0x74c957:c.instructions+=1;goto B74c957;
case 0x74c95c:goto L74c95c;
case 0x74c95d:c.instructions+=7;goto B74c95d;
case 0x74c960:c.instructions+=6;goto B74c960;
case 0x74c961:c.instructions+=5;goto B74c961;
case 0x74c963:c.instructions+=4;goto B74c963;
case 0x74c968:c.instructions+=3;goto B74c968;
case 0x74c96c:c.instructions+=2;goto B74c96c;
case 0x74c96d:c.instructions+=1;goto B74c96d;
case 0x74c971:goto L74c971;
case 0x74c973:goto L74c973;
case 0x74c978:goto L74c978;
case 0x74c97b:c.instructions+=2;goto B74c97b;
case 0x74c97e:c.instructions+=1;goto B74c97e;
case 0x74c980:goto L74c980;
case 0x74c988:c.instructions+=1;goto B74c988;
case 0x74c98a:goto L74c98a;
case 0x74c992:c.instructions+=1;goto B74c992;
case 0x74c996:goto L74c996;
case 0x74c99a:c.instructions+=4;goto B74c99a;
case 0x74c99f:c.instructions+=3;goto B74c99f;
case 0x74c9a1:c.instructions+=2;goto B74c9a1;
case 0x74c9a5:c.instructions+=1;goto B74c9a5;
case 0x74c9a7:goto L74c9a7;
case 0x74c9a9:goto L74c9a9;
case 0x74c9ab:goto L74c9ab;
case 0x74c9b1:c.instructions+=3;goto B74c9b1;
case 0x74c9b3:c.instructions+=2;goto B74c9b3;
case 0x74c9b4:c.instructions+=1;goto B74c9b4;
case 0x74c9b9:goto L74c9b9;
case 0x74c9bf:c.instructions+=3;goto B74c9bf;
case 0x74c9c2:c.instructions+=2;goto B74c9c2;
case 0x74c9c4:c.instructions+=1;goto B74c9c4;
case 0x74c9c6:goto L74c9c6;
case 0x74c9cc:c.instructions+=8;goto B74c9cc;
case 0x74c9d0:c.instructions+=7;goto B74c9d0;
case 0x74c9d1:c.instructions+=6;goto B74c9d1;
case 0x74c9d5:c.instructions+=5;goto B74c9d5;
case 0x74c9d6:c.instructions+=4;goto B74c9d6;
case 0x74c9db:c.instructions+=3;goto B74c9db;
case 0x74c9dc:c.instructions+=2;goto B74c9dc;
case 0x74c9dd:c.instructions+=1;goto B74c9dd;
case 0x74c9df:goto L74c9df;
case 0x74c9e2:goto L74c9e2;
case 0x74c9e6:goto L74c9e6;
case 0x74c9ec:c.instructions+=4;goto B74c9ec;
case 0x74c9ee:c.instructions+=3;goto B74c9ee;
case 0x74c9f4:c.instructions+=2;goto B74c9f4;
case 0x74c9f8:c.instructions+=1;goto B74c9f8;
case 0x74c9fa:goto L74c9fa;
case 0x74c9fe:c.instructions+=1;goto B74c9fe;
case 0x74ca00:goto L74ca00;
case 0x74ca02:c.instructions+=3;goto B74ca02;
case 0x74ca04:c.instructions+=2;goto B74ca04;
case 0x74ca06:c.instructions+=1;goto B74ca06;
case 0x74ca08:goto L74ca08;
case 0x74ca0a:c.instructions+=1;goto B74ca0a;
case 0x74ca0c:goto L74ca0c;
case 0x74ca0f:c.instructions+=3;goto B74ca0f;
case 0x74ca11:c.instructions+=2;goto B74ca11;
case 0x74ca14:c.instructions+=1;goto B74ca14;
case 0x74ca16:goto L74ca16;
case 0x74ca19:c.instructions+=3;goto B74ca19;
case 0x74ca1c:c.instructions+=2;goto B74ca1c;
case 0x74ca1e:c.instructions+=1;goto B74ca1e;
case 0x74ca20:goto L74ca20;
case 0x74ca22:c.instructions+=1;goto B74ca22;
case 0x74ca24:goto L74ca24;
case 0x74ca26:c.instructions+=1;goto B74ca26;
case 0x74ca29:goto L74ca29;
case 0x74ca2b:c.instructions+=1;goto B74ca2b;
case 0x74ca2d:goto L74ca2d;
case 0x74ca37:c.instructions+=3;goto B74ca37;
case 0x74ca3d:c.instructions+=2;goto B74ca3d;
case 0x74ca3f:c.instructions+=1;goto B74ca3f;
case 0x74ca41:goto L74ca41;
case 0x74ca47:c.instructions+=6;goto B74ca47;
case 0x74ca48:c.instructions+=5;goto B74ca48;
case 0x74ca4d:c.instructions+=4;goto B74ca4d;
case 0x74ca52:c.instructions+=3;goto B74ca52;
case 0x74ca53:c.instructions+=2;goto B74ca53;
case 0x74ca54:c.instructions+=1;goto B74ca54;
case 0x74ca56:goto L74ca56;
case 0x74ca59:goto L74ca59;
case 0x74ca5d:c.instructions+=1;goto B74ca5d;
case 0x74ca60:goto L74ca60;
case 0x74ca67:c.instructions+=1;goto B74ca67;
case 0x74ca6c:goto L74ca6c;
case 0x74ca6d:c.instructions+=5;goto B74ca6d;
case 0x74ca6e:c.instructions+=4;goto B74ca6e;
case 0x74ca6f:c.instructions+=3;goto B74ca6f;
case 0x74ca71:c.instructions+=2;goto B74ca71;
case 0x74ca72:c.instructions+=1;goto B74ca72;
case 0x74ca80:goto L74ca80;
case 0x74ca84:c.instructions+=8;goto B74ca84;
case 0x74ca85:c.instructions+=7;goto B74ca85;
case 0x74ca86:c.instructions+=6;goto B74ca86;
case 0x74ca8a:c.instructions+=5;goto B74ca8a;
case 0x74ca8d:c.instructions+=4;goto B74ca8d;
case 0x74ca90:c.instructions+=3;goto B74ca90;
case 0x74ca96:c.instructions+=2;goto B74ca96;
case 0x74ca98:c.instructions+=1;goto B74ca98;
case 0x74ca9a:goto L74ca9a;
case 0x74ca9e:c.instructions+=4;goto B74ca9e;
case 0x74caa0:c.instructions+=3;goto B74caa0;
case 0x74caa5:c.instructions+=2;goto B74caa5;
case 0x74caa6:c.instructions+=1;goto B74caa6;
case 0x74caab:goto L74caab;
case 0x74caae:c.instructions+=2;goto B74caae;
case 0x74caaf:c.instructions+=1;goto B74caaf;
case 0x74cab4:goto L74cab4;
case 0x74caba:c.instructions+=3;goto B74caba;
case 0x74cabd:c.instructions+=2;goto B74cabd;
case 0x74cabf:c.instructions+=1;goto B74cabf;
case 0x74cac1:goto L74cac1;
case 0x74cac7:c.instructions+=5;goto B74cac7;
case 0x74cac8:c.instructions+=4;goto B74cac8;
case 0x74cacc:c.instructions+=3;goto B74cacc;
case 0x74cacd:c.instructions+=2;goto B74cacd;
case 0x74cace:c.instructions+=1;goto B74cace;
case 0x74cad4:goto L74cad4;
case 0x74cad7:c.instructions+=2;goto B74cad7;
case 0x74cae1:c.instructions+=1;goto B74cae1;
case 0x74caeb:goto L74caeb;
case 0x74caec:c.instructions+=2;goto B74caec;
case 0x74caed:c.instructions+=1;goto B74caed;
case 0x74caf0:goto L74caf0;
case 0x74caf1:c.instructions+=7;goto B74caf1;
case 0x74caf5:c.instructions+=6;goto B74caf5;
case 0x74cafa:c.instructions+=5;goto B74cafa;
case 0x74cafc:c.instructions+=4;goto B74cafc;
case 0x74cafe:c.instructions+=3;goto B74cafe;
case 0x74cb03:c.instructions+=2;goto B74cb03;
case 0x74cb04:c.instructions+=1;goto B74cb04;
case 0x74cb09:goto L74cb09;
case 0x74cb0c:c.instructions+=2;goto B74cb0c;
case 0x74cb0d:c.instructions+=1;goto B74cb0d;
case 0x74cb12:goto L74cb12;
case 0x74cb15:c.instructions+=2;goto B74cb15;
case 0x74cb1a:c.instructions+=1;goto B74cb1a;
case 0x74cb1c:goto L74cb1c;
case 0x74cb21:c.instructions+=5;goto B74cb21;
case 0x74cb23:c.instructions+=4;goto B74cb23;
case 0x74cb25:c.instructions+=3;goto B74cb25;
case 0x74cb2a:c.instructions+=2;goto B74cb2a;
case 0x74cb2b:c.instructions+=1;goto B74cb2b;
case 0x74cb30:goto L74cb30;
case 0x74cb33:c.instructions+=2;goto B74cb33;
case 0x74cb34:c.instructions+=1;goto B74cb34;
case 0x74cb39:goto L74cb39;
case 0x74cb3c:c.instructions+=2;goto B74cb3c;
case 0x74cb3e:c.instructions+=1;goto B74cb3e;
case 0x74cb40:goto L74cb40;
case 0x74cb45:c.instructions+=2;goto B74cb45;
case 0x74cb46:c.instructions+=1;goto B74cb46;
case 0x74cb47:goto L74cb47;
case 0x74cb48:c.instructions+=6;goto B74cb48;
case 0x74cb4c:c.instructions+=5;goto B74cb4c;
case 0x74cb52:c.instructions+=4;goto B74cb52;
case 0x74cb53:c.instructions+=3;goto B74cb53;
case 0x74cb57:c.instructions+=2;goto B74cb57;
case 0x74cb58:c.instructions+=1;goto B74cb58;
case 0x74cb5a:goto L74cb5a;
case 0x74cb5e:c.instructions+=5;goto B74cb5e;
case 0x74cb62:c.instructions+=4;goto B74cb62;
case 0x74cb63:c.instructions+=3;goto B74cb63;
case 0x74cb64:c.instructions+=2;goto B74cb64;
case 0x74cb69:c.instructions+=1;goto B74cb69;
case 0x74cb6b:goto L74cb6b;
case 0x74cb71:c.instructions+=1;goto B74cb71;
case 0x74cb73:goto L74cb73;
case 0x74cb77:c.instructions+=4;goto B74cb77;
case 0x74cb7b:c.instructions+=3;goto B74cb7b;
case 0x74cb7c:c.instructions+=2;goto B74cb7c;
case 0x74cb7d:c.instructions+=1;goto B74cb7d;
case 0x74cb82:goto L74cb82;
case 0x74cb86:c.instructions+=1;goto B74cb86;
case 0x74cb8b:goto L74cb8b;
case 0x74cb8e:goto L74cb8e;
case 0x74cb91:c.instructions+=6;goto B74cb91;
case 0x74cb93:c.instructions+=5;goto B74cb93;
case 0x74cb94:c.instructions+=4;goto B74cb94;
case 0x74cb96:c.instructions+=3;goto B74cb96;
case 0x74cb97:c.instructions+=2;goto B74cb97;
case 0x74cb98:c.instructions+=1;goto B74cb98;
case 0x74cb9d:goto L74cb9d;
case 0x74cba0:c.instructions+=6;goto B74cba0;
case 0x74cba1:c.instructions+=5;goto B74cba1;
case 0x74cba2:c.instructions+=4;goto B74cba2;
case 0x74cba3:c.instructions+=3;goto B74cba3;
case 0x74cba5:c.instructions+=2;goto B74cba5;
case 0x74cba6:c.instructions+=1;goto B74cba6;
case 0x74cbb0:goto L74cbb0;
case 0x74cbb6:c.instructions+=13;goto B74cbb6;
case 0x74cbbb:c.instructions+=12;goto B74cbbb;
case 0x74cbbc:c.instructions+=11;goto B74cbbc;
case 0x74cbbd:c.instructions+=10;goto B74cbbd;
case 0x74cbc4:c.instructions+=9;goto B74cbc4;
case 0x74cbcb:c.instructions+=8;goto B74cbcb;
case 0x74cbd1:c.instructions+=7;goto B74cbd1;
case 0x74cbd2:c.instructions+=6;goto B74cbd2;
case 0x74cbd7:c.instructions+=5;goto B74cbd7;
case 0x74cbdb:c.instructions+=4;goto B74cbdb;
case 0x74cbe0:c.instructions+=3;goto B74cbe0;
case 0x74cbe1:c.instructions+=2;goto B74cbe1;
case 0x74cbe6:c.instructions+=1;goto B74cbe6;
case 0x74cbeb:goto L74cbeb;
case 0x74cbf2:c.instructions+=3;goto B74cbf2;
case 0x74cbf5:c.instructions+=2;goto B74cbf5;
case 0x74cbfb:c.instructions+=1;goto B74cbfb;
case 0x74cbfd:goto L74cbfd;
case 0x74cc03:c.instructions+=6;goto B74cc03;
case 0x74cc04:c.instructions+=5;goto B74cc04;
case 0x74cc09:c.instructions+=4;goto B74cc09;
case 0x74cc0d:c.instructions+=3;goto B74cc0d;
case 0x74cc12:c.instructions+=2;goto B74cc12;
case 0x74cc13:c.instructions+=1;goto B74cc13;
case 0x74cc18:goto L74cc18;
case 0x74cc1b:goto L74cc1b;
case 0x74cc22:c.instructions+=7;goto B74cc22;
case 0x74cc23:c.instructions+=6;goto B74cc23;
case 0x74cc24:c.instructions+=5;goto B74cc24;
case 0x74cc29:c.instructions+=4;goto B74cc29;
case 0x74cc2d:c.instructions+=3;goto B74cc2d;
case 0x74cc32:c.instructions+=2;goto B74cc32;
case 0x74cc33:c.instructions+=1;goto B74cc33;
case 0x74cc38:goto L74cc38;
case 0x74cc3f:c.instructions+=6;goto B74cc3f;
case 0x74cc40:c.instructions+=5;goto B74cc40;
case 0x74cc45:c.instructions+=4;goto B74cc45;
case 0x74cc49:c.instructions+=3;goto B74cc49;
case 0x74cc4e:c.instructions+=2;goto B74cc4e;
case 0x74cc4f:c.instructions+=1;goto B74cc4f;
case 0x74cc54:goto L74cc54;
case 0x74cc5b:c.instructions+=3;goto B74cc5b;
case 0x74cc5d:c.instructions+=2;goto B74cc5d;
case 0x74cc60:c.instructions+=1;goto B74cc60;
case 0x74cc63:goto L74cc63;
case 0x74cc65:c.instructions+=3;goto B74cc65;
case 0x74cc66:c.instructions+=2;goto B74cc66;
case 0x74cc68:c.instructions+=1;goto B74cc68;
case 0x74cc6a:goto L74cc6a;
case 0x74cc6c:c.instructions+=2;goto B74cc6c;
case 0x74cc70:c.instructions+=1;goto B74cc70;
case 0x74cc72:goto L74cc72;
case 0x74cc73:c.instructions+=5;goto B74cc73;
case 0x74cc78:c.instructions+=4;goto B74cc78;
case 0x74cc7c:c.instructions+=3;goto B74cc7c;
case 0x74cc81:c.instructions+=2;goto B74cc81;
case 0x74cc82:c.instructions+=1;goto B74cc82;
case 0x74cc87:goto L74cc87;
case 0x74cc8a:goto L74cc8a;
case 0x74cc92:c.instructions+=2;goto B74cc92;
case 0x74cc93:c.instructions+=1;goto B74cc93;
case 0x74cc95:goto L74cc95;
case 0x74cc9a:c.instructions+=5;goto B74cc9a;
case 0x74cc9f:c.instructions+=4;goto B74cc9f;
case 0x74cca3:c.instructions+=3;goto B74cca3;
case 0x74cca8:c.instructions+=2;goto B74cca8;
case 0x74cca9:c.instructions+=1;goto B74cca9;
case 0x74ccae:goto L74ccae;
case 0x74ccb1:goto L74ccb1;
case 0x74ccb4:c.instructions+=7;goto B74ccb4;
case 0x74ccb6:c.instructions+=6;goto B74ccb6;
case 0x74ccba:c.instructions+=5;goto B74ccba;
case 0x74ccbb:c.instructions+=4;goto B74ccbb;
case 0x74ccbd:c.instructions+=3;goto B74ccbd;
case 0x74ccbe:c.instructions+=2;goto B74ccbe;
case 0x74ccbf:c.instructions+=1;goto B74ccbf;
case 0x74ccc4:goto L74ccc4;
case 0x74cccb:c.instructions+=5;goto B74cccb;
case 0x74ccce:c.instructions+=4;goto B74ccce;
case 0x74cccf:c.instructions+=3;goto B74cccf;
case 0x74ccd1:c.instructions+=2;goto B74ccd1;
case 0x74ccd2:c.instructions+=1;goto B74ccd2;
case 0x74ccd7:goto L74ccd7;
case 0x74ccdd:c.instructions+=1;goto B74ccdd;
case 0x74cce0:goto L74cce0;
case 0x74cce1:c.instructions+=5;goto B74cce1;
case 0x74cce5:c.instructions+=4;goto B74cce5;
case 0x74cceb:c.instructions+=3;goto B74cceb;
case 0x74cced:c.instructions+=2;goto B74cced;
case 0x74ccef:c.instructions+=1;goto B74ccef;
case 0x74ccf1:goto L74ccf1;
case 0x74ccf7:c.instructions+=6;goto B74ccf7;
case 0x74ccf8:c.instructions+=5;goto B74ccf8;
case 0x74ccf9:c.instructions+=4;goto B74ccf9;
case 0x74ccfd:c.instructions+=3;goto B74ccfd;
case 0x74ccfe:c.instructions+=2;goto B74ccfe;
case 0x74ccff:c.instructions+=1;goto B74ccff;
case 0x74cd04:goto L74cd04;
case 0x74cd07:c.instructions+=2;goto B74cd07;
case 0x74cd09:c.instructions+=1;goto B74cd09;
case 0x74cd0b:goto L74cd0b;
case 0x74cd0c:c.instructions+=2;goto B74cd0c;
case 0x74cd11:c.instructions+=1;goto B74cd11;
case 0x74cd14:goto L74cd14;
case 0x74cd16:c.instructions+=2;goto B74cd16;
case 0x74cd1b:c.instructions+=1;goto B74cd1b;
case 0x74cd1d:goto L74cd1d;
case 0x74cd1f:goto L74cd1f;
case 0x74cd25:c.instructions+=3;goto B74cd25;
case 0x74cd26:c.instructions+=2;goto B74cd26;
case 0x74cd27:c.instructions+=1;goto B74cd27;
case 0x74cd2c:goto L74cd2c;
case 0x74cd32:c.instructions+=4;goto B74cd32;
case 0x74cd33:c.instructions+=3;goto B74cd33;
case 0x74cd34:c.instructions+=2;goto B74cd34;
case 0x74cd35:c.instructions+=1;goto B74cd35;
case 0x74cd3a:goto L74cd3a;
case 0x74cd3e:c.instructions+=3;goto B74cd3e;
case 0x74cd41:c.instructions+=2;goto B74cd41;
case 0x74cd42:c.instructions+=1;goto B74cd42;
case 0x74cd44:goto L74cd44;
case 0x74cd45:c.instructions+=3;goto B74cd45;
case 0x74cd4b:c.instructions+=2;goto B74cd4b;
case 0x74cd4c:c.instructions+=1;goto B74cd4c;
case 0x74cd51:goto L74cd51;
case 0x74cd54:c.instructions+=1;goto B74cd54;
case 0x74cd56:goto L74cd56;
case 0x74cd5c:c.instructions+=4;goto B74cd5c;
case 0x74cd62:c.instructions+=3;goto B74cd62;
case 0x74cd63:c.instructions+=2;goto B74cd63;
case 0x74cd65:c.instructions+=1;goto B74cd65;
case 0x74cd66:goto L74cd66;
case 0x74cd67:c.instructions+=1;goto B74cd67;
case 0x74cd70:goto L74cd70;
case 0x74cd71:c.instructions+=10;goto B74cd71;
case 0x74cd72:c.instructions+=9;goto B74cd72;
case 0x74cd76:c.instructions+=8;goto B74cd76;
case 0x74cd77:c.instructions+=7;goto B74cd77;
case 0x74cd7b:c.instructions+=6;goto B74cd7b;
case 0x74cd81:c.instructions+=5;goto B74cd81;
case 0x74cd82:c.instructions+=4;goto B74cd82;
case 0x74cd83:c.instructions+=3;goto B74cd83;
case 0x74cd84:c.instructions+=2;goto B74cd84;
case 0x74cd86:c.instructions+=1;goto B74cd86;
case 0x74cd8b:goto L74cd8b;
case 0x74cd8d:c.instructions+=3;goto B74cd8d;
case 0x74cd90:c.instructions+=2;goto B74cd90;
case 0x74cd92:c.instructions+=1;goto B74cd92;
case 0x74cd94:goto L74cd94;
case 0x74cd9a:c.instructions+=3;goto B74cd9a;
case 0x74cd9b:c.instructions+=2;goto B74cd9b;
case 0x74cd9c:c.instructions+=1;goto B74cd9c;
case 0x74cda1:goto L74cda1;
case 0x74cda7:c.instructions+=9;goto B74cda7;
case 0x74cdab:c.instructions+=8;goto B74cdab;
case 0x74cdb1:c.instructions+=7;goto B74cdb1;
case 0x74cdb3:c.instructions+=6;goto B74cdb3;
case 0x74cdb5:c.instructions+=5;goto B74cdb5;
case 0x74cdb7:c.instructions+=4;goto B74cdb7;
case 0x74cdba:c.instructions+=3;goto B74cdba;
case 0x74cdc0:c.instructions+=2;goto B74cdc0;
case 0x74cdc6:c.instructions+=1;goto B74cdc6;
case 0x74cdc8:goto L74cdc8;
case 0x74cdce:c.instructions+=3;goto B74cdce;
case 0x74cdcf:c.instructions+=2;goto B74cdcf;
case 0x74cdd0:c.instructions+=1;goto B74cdd0;
case 0x74cdd5:goto L74cdd5;
case 0x74cddb:c.instructions+=3;goto B74cddb;
case 0x74cddc:c.instructions+=2;goto B74cddc;
case 0x74cddd:c.instructions+=1;goto B74cddd;
case 0x74cde2:goto L74cde2;
case 0x74cde4:c.instructions+=4;goto B74cde4;
case 0x74cdea:c.instructions+=3;goto B74cdea;
case 0x74cded:c.instructions+=2;goto B74cded;
case 0x74cdef:c.instructions+=1;goto B74cdef;
case 0x74cdf1:goto L74cdf1;
case 0x74cdf7:c.instructions+=4;goto B74cdf7;
case 0x74cdf8:c.instructions+=3;goto B74cdf8;
case 0x74cdf9:c.instructions+=2;goto B74cdf9;
case 0x74cdfa:c.instructions+=1;goto B74cdfa;
case 0x74cdfc:goto L74cdfc;
case 0x74cdff:goto L74cdff;
case 0x74ce00:c.instructions+=1;goto B74ce00;
case 0x74ce03:goto L74ce03;
case 0x74ce06:goto L74ce06;
case 0x74ce07:c.instructions+=5;goto B74ce07;
case 0x74ce08:c.instructions+=4;goto B74ce08;
case 0x74ce09:c.instructions+=3;goto B74ce09;
case 0x74ce0b:c.instructions+=2;goto B74ce0b;
case 0x74ce0c:c.instructions+=1;goto B74ce0c;
case 0x74ce10:goto L74ce10;
case 0x74ce13:c.instructions+=10;goto B74ce13;
case 0x74ce18:c.instructions+=9;goto B74ce18;
case 0x74ce19:c.instructions+=8;goto B74ce19;
case 0x74ce1a:c.instructions+=7;goto B74ce1a;
case 0x74ce21:c.instructions+=6;goto B74ce21;
case 0x74ce23:c.instructions+=5;goto B74ce23;
case 0x74ce28:c.instructions+=4;goto B74ce28;
case 0x74ce29:c.instructions+=3;goto B74ce29;
case 0x74ce2d:c.instructions+=2;goto B74ce2d;
case 0x74ce30:c.instructions+=1;goto B74ce30;
case 0x74ce35:goto L74ce35;
case 0x74ce38:c.instructions+=2;goto B74ce38;
case 0x74ce39:c.instructions+=1;goto B74ce39;
case 0x74ce3e:goto L74ce3e;
case 0x74ce41:c.instructions+=2;goto B74ce41;
case 0x74ce44:c.instructions+=1;goto B74ce44;
case 0x74ce4a:goto L74ce4a;
case 0x74ce4b:c.instructions+=8;goto B74ce4b;
case 0x74ce50:c.instructions+=7;goto B74ce50;
case 0x74ce52:c.instructions+=6;goto B74ce52;
case 0x74ce56:c.instructions+=5;goto B74ce56;
case 0x74ce57:c.instructions+=4;goto B74ce57;
case 0x74ce5c:c.instructions+=3;goto B74ce5c;
case 0x74ce5d:c.instructions+=2;goto B74ce5d;
case 0x74ce5f:c.instructions+=1;goto B74ce5f;
case 0x74ce64:goto L74ce64;
case 0x74ce67:c.instructions+=2;goto B74ce67;
case 0x74ce68:c.instructions+=1;goto B74ce68;
case 0x74ce6d:goto L74ce6d;
case 0x74ce71:c.instructions+=3;goto B74ce71;
case 0x74ce73:c.instructions+=2;goto B74ce73;
case 0x74ce74:c.instructions+=1;goto B74ce74;
case 0x74ce79:goto L74ce79;
case 0x74ce7c:c.instructions+=2;goto B74ce7c;
case 0x74ce7e:c.instructions+=1;goto B74ce7e;
case 0x74ce80:goto L74ce80;
case 0x74ce83:goto L74ce83;
case 0x74ce87:c.instructions+=3;goto B74ce87;
case 0x74ce89:c.instructions+=2;goto B74ce89;
case 0x74ce8a:c.instructions+=1;goto B74ce8a;
case 0x74ce8f:goto L74ce8f;
case 0x74ce92:c.instructions+=2;goto B74ce92;
case 0x74ce94:c.instructions+=1;goto B74ce94;
case 0x74ce96:goto L74ce96;
case 0x74ce99:goto L74ce99;
case 0x74ce9d:c.instructions+=3;goto B74ce9d;
case 0x74ce9f:c.instructions+=2;goto B74ce9f;
case 0x74cea0:c.instructions+=1;goto B74cea0;
case 0x74cea5:goto L74cea5;
case 0x74cea8:c.instructions+=2;goto B74cea8;
case 0x74ceaa:c.instructions+=1;goto B74ceaa;
case 0x74ceac:goto L74ceac;
case 0x74ceaf:goto L74ceaf;
case 0x74ceb3:c.instructions+=4;goto B74ceb3;
case 0x74ceb5:c.instructions+=3;goto B74ceb5;
case 0x74cebb:c.instructions+=2;goto B74cebb;
case 0x74cebc:c.instructions+=1;goto B74cebc;
case 0x74cec0:goto L74cec0;
case 0x74cec3:c.instructions+=2;goto B74cec3;
case 0x74cec5:c.instructions+=1;goto B74cec5;
case 0x74cec7:goto L74cec7;
case 0x74ceca:c.instructions+=1;goto B74ceca;
case 0x74cecc:goto L74cecc;
case 0x74cecf:c.instructions+=2;goto B74cecf;
case 0x74ced1:c.instructions+=1;goto B74ced1;
case 0x74ced3:goto L74ced3;
case 0x74ced6:c.instructions+=3;goto B74ced6;
case 0x74ced9:c.instructions+=2;goto B74ced9;
case 0x74cedc:c.instructions+=1;goto B74cedc;
case 0x74cede:goto L74cede;
case 0x74cee0:goto L74cee0;
case 0x74cee1:c.instructions+=1;goto B74cee1;
case 0x74cee3:goto L74cee3;
case 0x74cee6:goto L74cee6;
case 0x74cee9:c.instructions+=1;goto B74cee9;
case 0x74ceeb:goto L74ceeb;
case 0x74ceee:c.instructions+=7;goto B74ceee;
case 0x74cef1:c.instructions+=6;goto B74cef1;
case 0x74cef3:c.instructions+=5;goto B74cef3;
case 0x74cef7:c.instructions+=4;goto B74cef7;
case 0x74cef8:c.instructions+=3;goto B74cef8;
case 0x74cefe:c.instructions+=2;goto B74cefe;
case 0x74ceff:c.instructions+=1;goto B74ceff;
case 0x74cf04:goto L74cf04;
case 0x74cf07:c.instructions+=7;goto B74cf07;
case 0x74cf0c:c.instructions+=6;goto B74cf0c;
case 0x74cf0e:c.instructions+=5;goto B74cf0e;
case 0x74cf12:c.instructions+=4;goto B74cf12;
case 0x74cf13:c.instructions+=3;goto B74cf13;
case 0x74cf18:c.instructions+=2;goto B74cf18;
case 0x74cf19:c.instructions+=1;goto B74cf19;
case 0x74cf1e:goto L74cf1e;
case 0x74cf21:c.instructions+=2;goto B74cf21;
case 0x74cf22:c.instructions+=1;goto B74cf22;
case 0x74cf27:goto L74cf27;
case 0x74cf29:c.instructions+=6;goto B74cf29;
case 0x74cf2d:c.instructions+=5;goto B74cf2d;
case 0x74cf2f:c.instructions+=4;goto B74cf2f;
case 0x74cf35:c.instructions+=3;goto B74cf35;
case 0x74cf3b:c.instructions+=2;goto B74cf3b;
case 0x74cf3c:c.instructions+=1;goto B74cf3c;
case 0x74cf41:goto L74cf41;
case 0x74cf44:goto L74cf44;
case 0x74cf45:c.instructions+=6;goto B74cf45;
case 0x74cf47:c.instructions+=5;goto B74cf47;
case 0x74cf48:c.instructions+=4;goto B74cf48;
case 0x74cf49:c.instructions+=3;goto B74cf49;
case 0x74cf4a:c.instructions+=2;goto B74cf4a;
case 0x74cf4e:c.instructions+=1;goto B74cf4e;
case 0x74cf53:goto L74cf53;
case 0x74cf56:c.instructions+=1;goto B74cf56;
case 0x74cf57:goto L74cf57;
case 0x74cf5b:c.instructions+=4;goto B74cf5b;
case 0x74cf5c:c.instructions+=3;goto B74cf5c;
case 0x74cf5e:c.instructions+=2;goto B74cf5e;
case 0x74cf5f:c.instructions+=1;goto B74cf5f;
case 0x74cf64:goto L74cf64;
case 0x74cf67:c.instructions+=1;goto B74cf67;
case 0x74cf70:goto L74cf70;
case 0x74cf71:c.instructions+=5;goto B74cf71;
case 0x74cf75:c.instructions+=4;goto B74cf75;
case 0x74cf77:c.instructions+=3;goto B74cf77;
case 0x74cf78:c.instructions+=2;goto B74cf78;
case 0x74cf79:c.instructions+=1;goto B74cf79;
case 0x74cf7b:goto L74cf7b;
case 0x74cf7f:c.instructions+=2;goto B74cf7f;
case 0x74cf81:c.instructions+=1;goto B74cf81;
case 0x74cf83:goto L74cf83;
case 0x74cf88:c.instructions+=1;goto B74cf88;
case 0x74cf8d:goto L74cf8d;
case 0x74cf92:c.instructions+=1;goto B74cf92;
case 0x74cf94:goto L74cf94;
case 0x74cf96:c.instructions+=3;goto B74cf96;
case 0x74cf99:c.instructions+=2;goto B74cf99;
case 0x74cf9b:c.instructions+=1;goto B74cf9b;
case 0x74cf9d:goto L74cf9d;
case 0x74cf9e:c.instructions+=3;goto B74cf9e;
case 0x74cfa0:c.instructions+=2;goto B74cfa0;
case 0x74cfa5:c.instructions+=1;goto B74cfa5;
case 0x74cfa7:goto L74cfa7;
case 0x74cfa9:goto L74cfa9;
case 0x74cfad:c.instructions+=7;goto B74cfad;
case 0x74cfae:c.instructions+=6;goto B74cfae;
case 0x74cfb4:c.instructions+=5;goto B74cfb4;
case 0x74cfb6:c.instructions+=4;goto B74cfb6;
case 0x74cfb7:c.instructions+=3;goto B74cfb7;
case 0x74cfb9:c.instructions+=2;goto B74cfb9;
case 0x74cfbc:c.instructions+=1;goto B74cfbc;
case 0x74cfc1:goto L74cfc1;
case 0x74cfc5:c.instructions+=5;goto B74cfc5;
case 0x74cfc6:c.instructions+=4;goto B74cfc6;
case 0x74cfcc:c.instructions+=3;goto B74cfcc;
case 0x74cfce:c.instructions+=2;goto B74cfce;
case 0x74cfcf:c.instructions+=1;goto B74cfcf;
case 0x74cfd4:goto L74cfd4;
case 0x74cfd9:c.instructions+=1;goto B74cfd9;
case 0x74cfde:goto L74cfde;
case 0x74cfe1:c.instructions+=4;goto B74cfe1;
case 0x74cfe3:c.instructions+=3;goto B74cfe3;
case 0x74cfe6:c.instructions+=2;goto B74cfe6;
case 0x74cfe7:c.instructions+=1;goto B74cfe7;
case 0x74cfe9:goto L74cfe9;
case 0x74cfeb:c.instructions+=2;goto B74cfeb;
case 0x74cfec:c.instructions+=1;goto B74cfec;
case 0x74cff1:goto L74cff1;
case 0x74cff4:goto L74cff4;
case 0x74cffa:c.instructions+=2;goto B74cffa;
case 0x74cfff:c.instructions+=1;goto B74cfff;
default:missing_instruction(c.pc);}
B74c000:L74c000:{c.instructions+=3;NFSU2_TR(0x74c000);
u8 U[4];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74c007:{NFSU2_TR(0x74c007);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c008:{NFSU2_TR(0x74c008);
TAIL_STATIC(0x74bf97u,74b);
}
B74c010:L74c010:{c.instructions+=23;NFSU2_TR(0x74c010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x154ull))));
}
B74c016:{NFSU2_TR(0x74c016);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74c01b:{NFSU2_TR(0x74c01b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c01c:{NFSU2_TR(0x74c01c);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74c023:{NFSU2_TR(0x74c023);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c024:{NFSU2_TR(0x74c024);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c025:{NFSU2_TR(0x74c025);
u8 U[8];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74c02c:{NFSU2_TR(0x74c02c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c02d:{NFSU2_TR(0x74c02d);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c034:{NFSU2_TR(0x74c034);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74c037:{NFSU2_TR(0x74c037);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c03c:{NFSU2_TR(0x74c03c);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74c03f:{NFSU2_TR(0x74c03f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c043:{NFSU2_TR(0x74c043);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c045:{NFSU2_TR(0x74c045);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c049:{NFSU2_TR(0x74c049);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c04a:{NFSU2_TR(0x74c04a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf7ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74c051:{NFSU2_TR(0x74c051);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74c058:{NFSU2_TR(0x74c058);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74c05c:{NFSU2_TR(0x74c05c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c05f:{NFSU2_TR(0x74c05f);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c064:{NFSU2_TR(0x74c064);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c065:{NFSU2_TR(0x74c065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c06aull));
TAIL_STATIC(0x7414a0u,741);
}
B74c06a:L74c06a:{c.instructions+=3;NFSU2_TR(0x74c06a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c06d:{NFSU2_TR(0x74c06d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c06e:{NFSU2_TR(0x74c06e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c073ull));
TAIL_STATIC(0x742360u,742);
}
B74c073:L74c073:{c.instructions+=4;NFSU2_TR(0x74c073);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74c076:{NFSU2_TR(0x74c076);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74c078:{NFSU2_TR(0x74c078);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c07c:{NFSU2_TR(0x74c07c);
__builtin_memmove((R+16),(R+16),4);
}
B74c080:L74c080:{c.instructions+=3;NFSU2_TR(0x74c080);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819be4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B74c087:{NFSU2_TR(0x74c087);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74c08b:{NFSU2_TR(0x74c08b);
{goto L74c090;}
}
B74c090:L74c090:{c.instructions+=4;NFSU2_TR(0x74c090);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B74c092:{NFSU2_TR(0x74c092);
__builtin_memmove((R+4),(R+8),1);
}
B74c094:{NFSU2_TR(0x74c094);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74c096:{NFSU2_TR(0x74c096);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c0b4;}}
}
B74c098:L74c098:{c.instructions+=2;NFSU2_TR(0x74c098);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74c09a:{NFSU2_TR(0x74c09a);
if(r1(R+518)){{goto L74c0b0;}}
}
B74c09c:L74c09c:{c.instructions+=4;NFSU2_TR(0x74c09c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74c09f:{NFSU2_TR(0x74c09f);
__builtin_memmove((R+4),(R+8),1);
}
B74c0a1:{NFSU2_TR(0x74c0a1);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74c0a4:{NFSU2_TR(0x74c0a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c0b4;}}
}
B74c0a6:L74c0a6:{c.instructions+=4;NFSU2_TR(0x74c0a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B74c0a9:{NFSU2_TR(0x74c0a9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B74c0ac:{NFSU2_TR(0x74c0ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74c0ae:{NFSU2_TR(0x74c0ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c090u);}goto L74c090;}}
}
B74c0b0:L74c0b0:{c.instructions+=2;NFSU2_TR(0x74c0b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74c0b2:{NFSU2_TR(0x74c0b2);
{goto L74c0b9;}
}
B74c0b4:L74c0b4:{c.instructions+=2;NFSU2_TR(0x74c0b4);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B74c0b6:{NFSU2_TR(0x74c0b6);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B74c0b9:L74c0b9:{c.instructions+=2;NFSU2_TR(0x74c0b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c0bb:{NFSU2_TR(0x74c0bb);
if(r1(R+518)){{goto L74c0cd;}}
}
B74c0bd:L74c0bd:{c.instructions+=5;NFSU2_TR(0x74c0bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c0c1:{NFSU2_TR(0x74c0c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74c0c2:{NFSU2_TR(0x74c0c2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74c0c5:{NFSU2_TR(0x74c0c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c0c9:{NFSU2_TR(0x74c0c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c080u);}goto L74c080;}}
}
B74c0cb:L74c0cb:{c.instructions+=1;NFSU2_TR(0x74c0cb);
{goto L74c0d7;}
}
B74c0cd:L74c0cd:{c.instructions+=2;NFSU2_TR(0x74c0cd);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74c0d1:{NFSU2_TR(0x74c0d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74c0d7:L74c0d7:{c.instructions+=5;NFSU2_TR(0x74c0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c0da:{NFSU2_TR(0x74c0da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c0dc:{NFSU2_TR(0x74c0dc);
u8 U[4];
w4(U+0,u32(0x7d2f4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c0e1:{NFSU2_TR(0x74c0e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c0e2:{NFSU2_TR(0x74c0e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c0e7ull));
TAIL_STATIC(0x7414a0u,741);
}
B74c0e7:L74c0e7:{c.instructions+=3;NFSU2_TR(0x74c0e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c0ea:{NFSU2_TR(0x74c0ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c0eb:{NFSU2_TR(0x74c0eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c0f0ull));
TAIL_STATIC(0x7420b0u,742);
}
B74c0f0:L74c0f0:{c.instructions+=14;NFSU2_TR(0x74c0f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c0f3:{NFSU2_TR(0x74c0f3);
u8 U[4];
w4(U+0,u32(0x7d2f34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c0f8:{NFSU2_TR(0x74c0f8);
__builtin_memmove((R+28),(R+0),4);
}
B74c0fa:{NFSU2_TR(0x74c0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c0fd:{NFSU2_TR(0x74c0fd);
u8 U[4];
w4(U+0,u32(0x29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c0ff:{NFSU2_TR(0x74c0ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x85ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74c105:{NFSU2_TR(0x74c105);
w1(R+512,u8((r4(R+28))!=(u32(0x0ull))));
w4(R+28,u32(0-u32(r4(R+28))));
}
B74c107:{NFSU2_TR(0x74c107);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c108:{NFSU2_TR(0x74c108);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(R+28))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B74c10a:{NFSU2_TR(0x74c10a);
u8 U[4];
w4(U+0,u32(0x7d2f2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c10f:{NFSU2_TR(0x74c10f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B74c110:{NFSU2_TR(0x74c110);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c111:{NFSU2_TR(0x74c111);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c115:{NFSU2_TR(0x74c115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c11aull));
TAIL_STATIC(0x7414a0u,741);
}
B74c11a:L74c11a:{c.instructions+=3;NFSU2_TR(0x74c11a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c11d:{NFSU2_TR(0x74c11d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c11e:{NFSU2_TR(0x74c11e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c123ull));
TAIL_STATIC(0x742360u,742);
}
B74c123:L74c123:{c.instructions+=4;NFSU2_TR(0x74c123);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c126:{NFSU2_TR(0x74c126);
u8 U[4];
w4(U+0,u32(0x7a14b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c12b:{NFSU2_TR(0x74c12b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c12c:{NFSU2_TR(0x74c12c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c131ull));
TAIL_STATIC(0x7414a0u,741);
}
B74c131:L74c131:{c.instructions+=5;NFSU2_TR(0x74c131);
__builtin_memmove((R+20),(R+0),4);
}
B74c133:{NFSU2_TR(0x74c133);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c139:{NFSU2_TR(0x74c139);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74c13c:{NFSU2_TR(0x74c13c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c13e:{NFSU2_TR(0x74c13e);
if(r1(R+518)){{goto L74c175;}}
}
B74c140:L74c140:{c.instructions+=10;NFSU2_TR(0x74c140);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c145:{NFSU2_TR(0x74c145);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c147:{NFSU2_TR(0x74c147);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2000ull))));
}
B74c14c:{NFSU2_TR(0x74c14c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaeull))));
__builtin_memmove((R+8),(U+0),4);
}
B74c152:{NFSU2_TR(0x74c152);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c153:{NFSU2_TR(0x74c153);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c159:{NFSU2_TR(0x74c159);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c15c:{NFSU2_TR(0x74c15c);
u8 U[4];
w4(U+0,u32(0x7d2f24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c161:{NFSU2_TR(0x74c161);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c162:{NFSU2_TR(0x74c162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c167ull));
TAIL_STATIC(0x7414a0u,741);
}
B74c167:L74c167:{c.instructions+=3;NFSU2_TR(0x74c167);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c16a:{NFSU2_TR(0x74c16a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c16b:{NFSU2_TR(0x74c16b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c170ull));
TAIL_STATIC(0x742360u,742);
}
B74c170:L74c170:{c.instructions+=2;NFSU2_TR(0x74c170);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74c173:{NFSU2_TR(0x74c173);
{goto L74c187;}
}
B74c175:L74c175:{c.instructions+=3;NFSU2_TR(0x74c175);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffdfffull))));
}
B74c17a:{NFSU2_TR(0x74c17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c180:{NFSU2_TR(0x74c180);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaeull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74c187:L74c187:{c.instructions+=8;NFSU2_TR(0x74c187);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c18a:{NFSU2_TR(0x74c18a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c18f:{NFSU2_TR(0x74c18f);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c194:{NFSU2_TR(0x74c194);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74c198:{NFSU2_TR(0x74c198);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c199:{NFSU2_TR(0x74c199);
u8 U[4];
w4(U+0,u32(0x7a1400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c19e:{NFSU2_TR(0x74c19e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c19f:{NFSU2_TR(0x74c19f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c1a4ull));
TAIL_STATIC(0x7414a0u,741);
}
B74c1a4:L74c1a4:{c.instructions+=3;NFSU2_TR(0x74c1a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c1a7:{NFSU2_TR(0x74c1a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c1a8:{NFSU2_TR(0x74c1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c1adull));
TAIL_STATIC(0x742360u,742);
}
B74c1ad:L74c1ad:{c.instructions+=6;NFSU2_TR(0x74c1ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74c1b0:{NFSU2_TR(0x74c1b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c1b2:{NFSU2_TR(0x74c1b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c1b6:{NFSU2_TR(0x74c1b6);
u8 U[4];
w4(U+0,u32(0x7d2f20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c1bb:{NFSU2_TR(0x74c1bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c1bc:{NFSU2_TR(0x74c1bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c1c1ull));
TAIL_STATIC(0x7414a0u,741);
}
B74c1c1:L74c1c1:{c.instructions+=3;NFSU2_TR(0x74c1c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c1c4:{NFSU2_TR(0x74c1c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c1c5:{NFSU2_TR(0x74c1c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c1caull));
TAIL_STATIC(0x7420b0u,742);
}
B74c1ca:L74c1ca:{c.instructions+=10;NFSU2_TR(0x74c1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c1d0:{NFSU2_TR(0x74c1d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c1d3:{NFSU2_TR(0x74c1d3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffefffull))));
}
B74c1d9:{NFSU2_TR(0x74c1d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c1db:{NFSU2_TR(0x74c1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c1e1:{NFSU2_TR(0x74c1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c1e7:{NFSU2_TR(0x74c1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c1ea:{NFSU2_TR(0x74c1ea);
u8 U[4];
w4(U+0,u32(0x7a1578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c1ef:{NFSU2_TR(0x74c1ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c1f0:{NFSU2_TR(0x74c1f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c1f5ull));
TAIL_STATIC(0x7414a0u,741);
}
B74c1f5:L74c1f5:{c.instructions+=3;NFSU2_TR(0x74c1f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c1f8:{NFSU2_TR(0x74c1f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c1f9:{NFSU2_TR(0x74c1f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c1feull));
TAIL_STATIC(0x742100u,742);
}
B74c1fe:L74c1fe:{c.instructions+=11;NFSU2_TR(0x74c1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74c204:{NFSU2_TR(0x74c204);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x400ull))));
}
B74c209:{NFSU2_TR(0x74c209);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74c20c:{NFSU2_TR(0x74c20c);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B74c20e:{NFSU2_TR(0x74c20e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c213:{NFSU2_TR(0x74c213);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c219:{NFSU2_TR(0x74c219);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74c21d:{NFSU2_TR(0x74c21d);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c21f:{NFSU2_TR(0x74c21f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c220:{NFSU2_TR(0x74c220);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c221:{NFSU2_TR(0x74c221);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c226ull));
TAIL_STATIC(0x742360u,742);
}
B74c226:L74c226:{c.instructions+=4;NFSU2_TR(0x74c226);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74c228:{NFSU2_TR(0x74c228);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74c22b:{NFSU2_TR(0x74c22b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74c22d:{NFSU2_TR(0x74c22d);
if(r1(R+518)){{goto L74c29b;}}
}
B74c22f:L74c22f:{c.instructions+=9;NFSU2_TR(0x74c22f);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c236:{NFSU2_TR(0x74c236);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c23c:{NFSU2_TR(0x74c23c);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c23e:{NFSU2_TR(0x74c23e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74c241:{NFSU2_TR(0x74c241);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c242:{NFSU2_TR(0x74c242);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52cull))));
__builtin_memmove((R+12),(U+0),4);
}
B74c248:{NFSU2_TR(0x74c248);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c249:{NFSU2_TR(0x74c249);
w4(R+28,u32(0x1ull));
}
B74c24e:{NFSU2_TR(0x74c24e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c253ull));
TAIL_STATIC(0x74bbe0u,74b);
}
B74c253:L74c253:{c.instructions+=11;NFSU2_TR(0x74c253);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74c256:{NFSU2_TR(0x74c256);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c25a:{NFSU2_TR(0x74c25a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c25f:{NFSU2_TR(0x74c25f);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c261:{NFSU2_TR(0x74c261);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74c267:{NFSU2_TR(0x74c267);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74c269:{NFSU2_TR(0x74c269);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c26a:{NFSU2_TR(0x74c26a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c26b:{NFSU2_TR(0x74c26b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74c271:{NFSU2_TR(0x74c271);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74c278:{NFSU2_TR(0x74c278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c27dull));
TAIL_STATIC(0x742360u,742);
}
B74c27d:L74c27d:{c.instructions+=8;NFSU2_TR(0x74c27d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c281:{NFSU2_TR(0x74c281);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B74c284:{NFSU2_TR(0x74c284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74c285:{NFSU2_TR(0x74c285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74c286:{NFSU2_TR(0x74c286);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74c287:{NFSU2_TR(0x74c287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74c288:{NFSU2_TR(0x74c288);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c28f:{NFSU2_TR(0x74c28f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c294ull));
TAIL_STATIC(0x76115eu,761);
}
B74c294:L74c294:{c.instructions+=2;NFSU2_TR(0x74c294);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x154ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x154ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x154ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74c29a:{NFSU2_TR(0x74c29a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74c29b:L74c29b:{c.instructions+=5;NFSU2_TR(0x74c29b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c29d:{NFSU2_TR(0x74c29d);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c2a1:{NFSU2_TR(0x74c2a1);
u8 U[4];
w4(U+0,u32(0x7d28e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c2a6:{NFSU2_TR(0x74c2a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c2a7:{NFSU2_TR(0x74c2a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c2acull));
TAIL_STATIC(0x7414a0u,741);
}
B74c2ac:L74c2ac:{c.instructions+=3;NFSU2_TR(0x74c2ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c2af:{NFSU2_TR(0x74c2af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c2b0:{NFSU2_TR(0x74c2b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c2b5ull));
TAIL_STATIC(0x742190u,742);
}
B74c2b5:L74c2b5:{c.instructions+=7;NFSU2_TR(0x74c2b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c2b9:{NFSU2_TR(0x74c2b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c2c0:{NFSU2_TR(0x74c2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x528ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c2c6:{NFSU2_TR(0x74c2c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c2c9:{NFSU2_TR(0x74c2c9);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B74c2cb:{NFSU2_TR(0x74c2cb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c2cd:{NFSU2_TR(0x74c2cd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74c3b7;}}
}
B74c2d3:L74c2d3:{c.instructions+=2;NFSU2_TR(0x74c2d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52cull))));
__builtin_memmove((R+28),(U+0),4);
}
B74c2d9:{NFSU2_TR(0x74c2d9);
__builtin_memmove((R+16),(R+16),4);
}
B74c2e0:L74c2e0:{c.instructions+=10;NFSU2_TR(0x74c2e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74c2e3:{NFSU2_TR(0x74c2e3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+8),(U+0),1);
}
B74c2e5:{NFSU2_TR(0x74c2e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c2e9:{NFSU2_TR(0x74c2e9);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74c2ed:{NFSU2_TR(0x74c2ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c2ee:{NFSU2_TR(0x74c2ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74c2f2:{NFSU2_TR(0x74c2f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c2f3:{NFSU2_TR(0x74c2f3);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74c2f7:{NFSU2_TR(0x74c2f7);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74c2fc:{NFSU2_TR(0x74c2fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c301ull));
TAIL_STATIC(0x7414a0u,741);
}
B74c301:L74c301:{c.instructions+=3;NFSU2_TR(0x74c301);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c304:{NFSU2_TR(0x74c304);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c306:{NFSU2_TR(0x74c306);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c322;}}
}
B74c308:L74c308:{c.instructions+=6;NFSU2_TR(0x74c308);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c30f:{NFSU2_TR(0x74c30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x528ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c315:{NFSU2_TR(0x74c315);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B74c316:{NFSU2_TR(0x74c316);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B74c319:{NFSU2_TR(0x74c319);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74c31b:{NFSU2_TR(0x74c31b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c2e0u);}goto L74c2e0;}}
}
B74c31d:L74c31d:{c.instructions+=1;NFSU2_TR(0x74c31d);
{goto L74c3b3;}
}
B74c322:L74c322:{c.instructions+=5;NFSU2_TR(0x74c322);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c327:{NFSU2_TR(0x74c327);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c329:{NFSU2_TR(0x74c329);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c32a:{NFSU2_TR(0x74c32a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c32b:{NFSU2_TR(0x74c32b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c330ull));
TAIL_STATIC(0x742360u,742);
}
B74c330:L74c330:{c.instructions+=15;NFSU2_TR(0x74c330);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74c334:{NFSU2_TR(0x74c334);
u8 U[5];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74c338:{NFSU2_TR(0x74c338);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74c33a:{NFSU2_TR(0x74c33a);
__builtin_memmove((R+9),(R+0),1);
}
B74c33c:{NFSU2_TR(0x74c33c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74c342:{NFSU2_TR(0x74c342);
w2(R+0,u16(s16(s8(r1(R+4)))));
}
B74c346:{NFSU2_TR(0x74c346);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74c34c:{NFSU2_TR(0x74c34c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74c353:{NFSU2_TR(0x74c353);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74c356:{NFSU2_TR(0x74c356);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B74c358:{NFSU2_TR(0x74c358);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B74c35a:{NFSU2_TR(0x74c35a);
__builtin_memmove((R+0),gp(0x8b7e18),4);
}
B74c35f:{NFSU2_TR(0x74c35f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c361:{NFSU2_TR(0x74c361);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c365:{NFSU2_TR(0x74c365);
if(r1(R+518)){{goto L74c3b3;}}
}
B74c367:L74c367:{c.instructions+=2;NFSU2_TR(0x74c367);
w4(R+4,u32(0x8b7e18ull));
}
B74c36c:{NFSU2_TR(0x74c36c);
__builtin_memmove((R+16),(R+16),4);
}
B74c370:L74c370:{c.instructions+=2;NFSU2_TR(0x74c370);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74c374:{NFSU2_TR(0x74c374);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c38d;}}
}
B74c376:L74c376:{c.instructions+=3;NFSU2_TR(0x74c376);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B74c37a:{NFSU2_TR(0x74c37a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74c37c:{NFSU2_TR(0x74c37c);
__builtin_memmove((R+16),(R+16),4);
}
B74c380:L74c380:{c.instructions+=2;NFSU2_TR(0x74c380);
u8 U[18];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w2(U+16,u16(u32(r2(U+14))-u32(r2(R+8))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B74c385:{NFSU2_TR(0x74c385);
if(r1(R+518)){{goto L74c39a;}}
}
B74c387:L74c387:{c.instructions+=3;NFSU2_TR(0x74c387);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74c388:{NFSU2_TR(0x74c388);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74c38b:{NFSU2_TR(0x74c38b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c380u);}goto L74c380;}}
}
B74c38d:L74c38d:{c.instructions+=5;NFSU2_TR(0x74c38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c390:{NFSU2_TR(0x74c390);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B74c393:{NFSU2_TR(0x74c393);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B74c394:{NFSU2_TR(0x74c394);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c396:{NFSU2_TR(0x74c396);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c370u);}goto L74c370;}}
}
B74c398:L74c398:{c.instructions+=1;NFSU2_TR(0x74c398);
{goto L74c3b3;}
}
B74c39a:L74c39a:{c.instructions+=7;NFSU2_TR(0x74c39a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B74c39d:{NFSU2_TR(0x74c39d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b7e20ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B74c3a4:{NFSU2_TR(0x74c3a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c3a5:{NFSU2_TR(0x74c3a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74c3a8:{NFSU2_TR(0x74c3a8);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c3aa:{NFSU2_TR(0x74c3aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c3ab:{NFSU2_TR(0x74c3ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c3b0ull));
TAIL_STATIC(0x741650u,741);
}
B74c3b0:L74c3b0:{c.instructions+=1;NFSU2_TR(0x74c3b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74c3b3:L74c3b3:{c.instructions+=1;NFSU2_TR(0x74c3b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74c3b7:L74c3b7:{c.instructions+=3;NFSU2_TR(0x74c3b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74c3bd:{NFSU2_TR(0x74c3bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74c3bf:{NFSU2_TR(0x74c3bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c41a;}}
}
B74c3c1:L74c3c1:{c.instructions+=9;NFSU2_TR(0x74c3c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c3c5:{NFSU2_TR(0x74c3c5);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c3c7:{NFSU2_TR(0x74c3c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74c3ca:{NFSU2_TR(0x74c3ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c3cb:{NFSU2_TR(0x74c3cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c3d2:{NFSU2_TR(0x74c3d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x528ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74c3d8:{NFSU2_TR(0x74c3d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52cull))));
__builtin_memmove((R+12),(U+0),4);
}
B74c3de:{NFSU2_TR(0x74c3de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c3df:{NFSU2_TR(0x74c3df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c3e4ull));
TAIL_STATIC(0x74bbe0u,74b);
}
B74c3e4:L74c3e4:{c.instructions+=13;NFSU2_TR(0x74c3e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74c3e7:{NFSU2_TR(0x74c3e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74c3e8:{NFSU2_TR(0x74c3e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74c3ee:{NFSU2_TR(0x74c3ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74c3f5:{NFSU2_TR(0x74c3f5);
__builtin_memmove((R+8),(R+0),4);
}
B74c3f7:{NFSU2_TR(0x74c3f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c3fb:{NFSU2_TR(0x74c3fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B74c3fe:{NFSU2_TR(0x74c3fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74c404:{NFSU2_TR(0x74c404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74c405:{NFSU2_TR(0x74c405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74c406:{NFSU2_TR(0x74c406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74c407:{NFSU2_TR(0x74c407);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c40e:{NFSU2_TR(0x74c40e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c413ull));
TAIL_STATIC(0x76115eu,761);
}
B74c413:L74c413:{c.instructions+=2;NFSU2_TR(0x74c413);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x154ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x154ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x154ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74c419:{NFSU2_TR(0x74c419);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74c41a:L74c41a:{c.instructions+=7;NFSU2_TR(0x74c41a);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c421:{NFSU2_TR(0x74c421);
__builtin_memmove((R+0),(R+28),4);
}
B74c423:{NFSU2_TR(0x74c423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74c424:{NFSU2_TR(0x74c424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74c425:{NFSU2_TR(0x74c425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74c426:{NFSU2_TR(0x74c426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74c427:{NFSU2_TR(0x74c427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c42cull));
TAIL_STATIC(0x76115eu,761);
}
B74c42c:L74c42c:{c.instructions+=2;NFSU2_TR(0x74c42c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x154ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x154ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x154ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74c432:{NFSU2_TR(0x74c432);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74c440:L74c440:{c.instructions+=11;NFSU2_TR(0x74c440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x204ull))));
}
B74c446:{NFSU2_TR(0x74c446);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74c44b:{NFSU2_TR(0x74c44b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c44c:{NFSU2_TR(0x74c44c);
u8 U[8];
w4(U+0,u32(u32(u32(0x204ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c453:{NFSU2_TR(0x74c453);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c459:{NFSU2_TR(0x74c459);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c45a:{NFSU2_TR(0x74c45a);
u8 U[4];
w4(U+0,u32(0x7d2f20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c45f:{NFSU2_TR(0x74c45f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74c465:{NFSU2_TR(0x74c465);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c46a:{NFSU2_TR(0x74c46a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c46b:{NFSU2_TR(0x74c46b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c470ull));
TAIL_STATIC(0x741690u,741);
}
B74c470:L74c470:{c.instructions+=4;NFSU2_TR(0x74c470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c476:{NFSU2_TR(0x74c476);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74c479:{NFSU2_TR(0x74c479);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c47b:{NFSU2_TR(0x74c47b);
if(r1(R+518)){{goto L74c491;}}
}
B74c47d:L74c47d:{c.instructions+=5;NFSU2_TR(0x74c47d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c47e:{NFSU2_TR(0x74c47e);
u8 U[4];
w4(U+0,u32(0x7d28e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c483:{NFSU2_TR(0x74c483);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c488:{NFSU2_TR(0x74c488);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c489:{NFSU2_TR(0x74c489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c48eull));
TAIL_STATIC(0x7419a0u,741);
}
B74c48e:L74c48e:{c.instructions+=1;NFSU2_TR(0x74c48e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74c491:L74c491:{c.instructions+=6;NFSU2_TR(0x74c491);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x454ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74c497:{NFSU2_TR(0x74c497);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c498:{NFSU2_TR(0x74c498);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74c49c:{NFSU2_TR(0x74c49c);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c4a1:{NFSU2_TR(0x74c4a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c4a2:{NFSU2_TR(0x74c4a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c4a7ull));
TAIL_STATIC(0x741650u,741);
}
B74c4a7:L74c4a7:{c.instructions+=4;NFSU2_TR(0x74c4a7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74c4a9:{NFSU2_TR(0x74c4a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74c4ac:{NFSU2_TR(0x74c4ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74c4ae:{NFSU2_TR(0x74c4ae);
if(r1(R+518)){{goto L74c4c8;}}
}
B74c4b0:L74c4b0:{c.instructions+=6;NFSU2_TR(0x74c4b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c4b1:{NFSU2_TR(0x74c4b1);
u8 U[4];
w4(U+0,u32(0x7a1400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c4b6:{NFSU2_TR(0x74c4b6);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c4ba:{NFSU2_TR(0x74c4ba);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c4bf:{NFSU2_TR(0x74c4bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c4c0:{NFSU2_TR(0x74c4c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c4c5ull));
TAIL_STATIC(0x741a50u,741);
}
B74c4c5:L74c4c5:{c.instructions+=1;NFSU2_TR(0x74c4c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74c4c8:L74c4c8:{c.instructions+=5;NFSU2_TR(0x74c4c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74c4ce:{NFSU2_TR(0x74c4ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74c4d0:{NFSU2_TR(0x74c4d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74c4d6:{NFSU2_TR(0x74c4d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74c4d7:{NFSU2_TR(0x74c4d7);
if(r1(R+518)){{goto L74c4f1;}}
}
B74c4d9:L74c4d9:{c.instructions+=6;NFSU2_TR(0x74c4d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c4da:{NFSU2_TR(0x74c4da);
u8 U[4];
w4(U+0,u32(0x7a14b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c4df:{NFSU2_TR(0x74c4df);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74c4e3:{NFSU2_TR(0x74c4e3);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c4e8:{NFSU2_TR(0x74c4e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c4e9:{NFSU2_TR(0x74c4e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c4eeull));
TAIL_STATIC(0x741a50u,741);
}
B74c4ee:L74c4ee:{c.instructions+=1;NFSU2_TR(0x74c4ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74c4f1:L74c4f1:{c.instructions+=4;NFSU2_TR(0x74c4f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74c4f7:{NFSU2_TR(0x74c4f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74c4f9:{NFSU2_TR(0x74c4f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3d4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74c4ff:{NFSU2_TR(0x74c4ff);
if(r1(R+518)){{goto L74c519;}}
}
B74c501:L74c501:{c.instructions+=6;NFSU2_TR(0x74c501);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c502:{NFSU2_TR(0x74c502);
u8 U[4];
w4(U+0,u32(0x7d2f24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c507:{NFSU2_TR(0x74c507);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74c50b:{NFSU2_TR(0x74c50b);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c510:{NFSU2_TR(0x74c510);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c511:{NFSU2_TR(0x74c511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c516ull));
TAIL_STATIC(0x741a50u,741);
}
B74c516:L74c516:{c.instructions+=1;NFSU2_TR(0x74c516);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74c519:L74c519:{c.instructions+=2;NFSU2_TR(0x74c519);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74c520:{NFSU2_TR(0x74c520);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c53e;}}
}
B74c522:L74c522:{c.instructions+=6;NFSU2_TR(0x74c522);
u8 U[4];
w4(U+0,u32(0x7d28e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c527:{NFSU2_TR(0x74c527);
u8 U[4];
w4(U+0,u32(0x7a1578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c52c:{NFSU2_TR(0x74c52c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c530:{NFSU2_TR(0x74c530);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c535:{NFSU2_TR(0x74c535);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c536:{NFSU2_TR(0x74c536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c53bull));
TAIL_STATIC(0x741a50u,741);
}
B74c53b:L74c53b:{c.instructions+=1;NFSU2_TR(0x74c53b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74c53e:L74c53e:{c.instructions+=8;NFSU2_TR(0x74c53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c541:{NFSU2_TR(0x74c541);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c543:{NFSU2_TR(0x74c543);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74c547:{NFSU2_TR(0x74c547);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c548:{NFSU2_TR(0x74c548);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c54a:{NFSU2_TR(0x74c54a);
u8 U[4];
w4(U+0,u32(0x50534554ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c54f:{NFSU2_TR(0x74c54f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c550:{NFSU2_TR(0x74c550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c555ull));
TAIL_STATIC(0x7549f0u,754);
}
B74c555:L74c555:{c.instructions+=3;NFSU2_TR(0x74c555);
u8 U[8];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c55c:{NFSU2_TR(0x74c55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74c566:{NFSU2_TR(0x74c566);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c56bull));
TAIL_STATIC(0x76115eu,761);
}
B74c56b:L74c56b:{c.instructions+=2;NFSU2_TR(0x74c56b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x218ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x218ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x218ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74c571:{NFSU2_TR(0x74c571);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74c580:L74c580:{c.instructions+=4;NFSU2_TR(0x74c580);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c583:{NFSU2_TR(0x74c583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74c586:{NFSU2_TR(0x74c586);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74c588:{NFSU2_TR(0x74c588);
if(r1(R+518)){{goto L74c5ca;}}
}
B74c58a:L74c58a:{c.instructions+=4;NFSU2_TR(0x74c58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c590:{NFSU2_TR(0x74c590);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c592:{NFSU2_TR(0x74c592);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c595:{NFSU2_TR(0x74c595);
if(r1(R+518)){{goto L74c5ca;}}
}
B74c597:L74c597:{c.instructions+=2;NFSU2_TR(0x74c597);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B74c59a:{NFSU2_TR(0x74c59a);
if(r1(R+518)){{goto L74c5ca;}}
}
B74c59c:L74c59c:{c.instructions+=10;NFSU2_TR(0x74c59c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c5a0:{NFSU2_TR(0x74c5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c5a6:{NFSU2_TR(0x74c5a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c5a7:{NFSU2_TR(0x74c5a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74c5ab:{NFSU2_TR(0x74c5ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c5ac:{NFSU2_TR(0x74c5ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c5ad:{NFSU2_TR(0x74c5ad);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x636f6e6eull));
s4(u32(r4(U+0)),r4(U+4));
}
B74c5b5:{NFSU2_TR(0x74c5b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74c5bd:{NFSU2_TR(0x74c5bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74c5c5:{NFSU2_TR(0x74c5c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c5c7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74c5c7:L74c5c7:{c.instructions+=1;NFSU2_TR(0x74c5c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74c5ca:L74c5ca:{c.instructions+=2;NFSU2_TR(0x74c5ca);
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
B74c5cd:{NFSU2_TR(0x74c5cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74c5d0:L74c5d0:{c.instructions+=5;NFSU2_TR(0x74c5d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c5d1:{NFSU2_TR(0x74c5d1);
__builtin_memmove((R+12),(R+0),4);
}
B74c5d3:{NFSU2_TR(0x74c5d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74c5d5:{NFSU2_TR(0x74c5d5);
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
B74c5d7:{NFSU2_TR(0x74c5d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74c5ed;}}
}
B74c5d9:L74c5d9:{c.instructions+=3;NFSU2_TR(0x74c5d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c5dc:{NFSU2_TR(0x74c5dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c5dd:{NFSU2_TR(0x74c5dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c5e2ull));
TAIL_STATIC(0x754c40u,754);
}
B74c5e2:L74c5e2:{c.instructions+=3;NFSU2_TR(0x74c5e2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B74c5e8:{NFSU2_TR(0x74c5e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74c5eb:{NFSU2_TR(0x74c5eb);
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B74c5ed:L74c5ed:{c.instructions+=18;NFSU2_TR(0x74c5ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819bd4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B74c5f4:{NFSU2_TR(0x74c5f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B74c5fb:{NFSU2_TR(0x74c5fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B74c5fe:{NFSU2_TR(0x74c5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c601:{NFSU2_TR(0x74c601);
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
B74c602:{NFSU2_TR(0x74c602);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c605:{NFSU2_TR(0x74c605);
__builtin_memmove((R+8),(R+4),4);
}
B74c607:{NFSU2_TR(0x74c607);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B74c60a:{NFSU2_TR(0x74c60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B74c60d:{NFSU2_TR(0x74c60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c613:{NFSU2_TR(0x74c613);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c617:{NFSU2_TR(0x74c617);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x91cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c61d:{NFSU2_TR(0x74c61d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c621:{NFSU2_TR(0x74c621);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c627:{NFSU2_TR(0x74c627);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c62d:{NFSU2_TR(0x74c62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x920ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c633:{NFSU2_TR(0x74c633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74c634:{NFSU2_TR(0x74c634);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74c640:L74c640:{c.instructions+=11;NFSU2_TR(0x74c640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B74c643:{NFSU2_TR(0x74c643);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74c648:{NFSU2_TR(0x74c648);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c649:{NFSU2_TR(0x74c649);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c64a:{NFSU2_TR(0x74c64a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74c64e:{NFSU2_TR(0x74c64e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c652:{NFSU2_TR(0x74c652);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c658:{NFSU2_TR(0x74c658);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c65a:{NFSU2_TR(0x74c65a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c65b:{NFSU2_TR(0x74c65b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c65c:{NFSU2_TR(0x74c65c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c676;}}
}
B74c65e:L74c65e:{c.instructions+=3;NFSU2_TR(0x74c65e);
u8 U[4];
w4(U+0,u32(0x7d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c663:{NFSU2_TR(0x74c663);
u8 U[4];
w4(U+0,u32(0x3e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c668:{NFSU2_TR(0x74c668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c66dull));
TAIL_STATIC(0x7551a0u,755);
}
B74c66d:L74c66d:{c.instructions+=2;NFSU2_TR(0x74c66d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c670:{NFSU2_TR(0x74c670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c676:L74c676:{c.instructions+=3;NFSU2_TR(0x74c676);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c67c:{NFSU2_TR(0x74c67c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c67e:{NFSU2_TR(0x74c67e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c694;}}
}
B74c680:L74c680:{c.instructions+=4;NFSU2_TR(0x74c680);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c682:{NFSU2_TR(0x74c682);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c684:{NFSU2_TR(0x74c684);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c686:{NFSU2_TR(0x74c686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c68bull));
TAIL_STATIC(0x73d6d0u,73d);
}
B74c68b:L74c68b:{c.instructions+=2;NFSU2_TR(0x74c68b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74c68e:{NFSU2_TR(0x74c68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c694:L74c694:{c.instructions+=6;NFSU2_TR(0x74c694);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74c698:{NFSU2_TR(0x74c698);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c69a:{NFSU2_TR(0x74c69a);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c69f:{NFSU2_TR(0x74c69f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c6a0:{NFSU2_TR(0x74c6a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74c6a8:{NFSU2_TR(0x74c6a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c6adull));
TAIL_STATIC(0x7414a0u,741);
}
B74c6ad:L74c6ad:{c.instructions+=3;NFSU2_TR(0x74c6ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c6b0:{NFSU2_TR(0x74c6b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c6b1:{NFSU2_TR(0x74c6b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c6b6ull));
TAIL_STATIC(0x7420b0u,742);
}
B74c6b6:L74c6b6:{c.instructions+=5;NFSU2_TR(0x74c6b6);
__builtin_memmove((R+12),(R+0),4);
}
B74c6b8:{NFSU2_TR(0x74c6b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c6bb:{NFSU2_TR(0x74c6bb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74c6be:{NFSU2_TR(0x74c6be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c6c2:{NFSU2_TR(0x74c6c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c6ce;}}
}
B74c6c4:L74c6c4:{c.instructions+=2;NFSU2_TR(0x74c6c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74c6cc:{NFSU2_TR(0x74c6cc);
{goto L74c6db;}
}
B74c6ce:L74c6ce:{c.instructions+=2;NFSU2_TR(0x74c6ce);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74c6d1:{NFSU2_TR(0x74c6d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c6db;}}
}
B74c6d3:L74c6d3:{c.instructions+=1;NFSU2_TR(0x74c6d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x200ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74c6db:L74c6db:{c.instructions+=7;NFSU2_TR(0x74c6db);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c6e0:{NFSU2_TR(0x74c6e0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c6e2:{NFSU2_TR(0x74c6e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c6e6:{NFSU2_TR(0x74c6e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c6e7:{NFSU2_TR(0x74c6e7);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c6ec:{NFSU2_TR(0x74c6ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c6ed:{NFSU2_TR(0x74c6ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c6f2ull));
TAIL_STATIC(0x7414a0u,741);
}
B74c6f2:L74c6f2:{c.instructions+=3;NFSU2_TR(0x74c6f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c6f5:{NFSU2_TR(0x74c6f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c6f6:{NFSU2_TR(0x74c6f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c6fbull));
TAIL_STATIC(0x742360u,742);
}
B74c6fb:L74c6fb:{c.instructions+=4;NFSU2_TR(0x74c6fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74c6ff:{NFSU2_TR(0x74c6ff);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c701:{NFSU2_TR(0x74c701);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c702:{NFSU2_TR(0x74c702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c707ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74c707:L74c707:{c.instructions+=3;NFSU2_TR(0x74c707);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74c70a:{NFSU2_TR(0x74c70a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c70c:{NFSU2_TR(0x74c70c);
if(r1(R+518)){{goto L74c711;}}
}
B74c70e:L74c70e:{c.instructions+=1;NFSU2_TR(0x74c70e);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74c711:L74c711:{c.instructions+=4;NFSU2_TR(0x74c711);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74c715:{NFSU2_TR(0x74c715);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c717:{NFSU2_TR(0x74c717);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c718:{NFSU2_TR(0x74c718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c71dull));
TAIL_STATIC(0x75cf10u,75c);
}
B74c71d:L74c71d:{c.instructions+=3;NFSU2_TR(0x74c71d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c720:{NFSU2_TR(0x74c720);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c722:{NFSU2_TR(0x74c722);
if(r1(R+518)){{goto L74c727;}}
}
B74c724:L74c724:{c.instructions+=1;NFSU2_TR(0x74c724);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74c727:L74c727:{c.instructions+=4;NFSU2_TR(0x74c727);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c72b:{NFSU2_TR(0x74c72b);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c72d:{NFSU2_TR(0x74c72d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c72e:{NFSU2_TR(0x74c72e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c733ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74c733:L74c733:{c.instructions+=3;NFSU2_TR(0x74c733);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c736:{NFSU2_TR(0x74c736);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c738:{NFSU2_TR(0x74c738);
if(r1(R+518)){{goto L74c73d;}}
}
B74c73a:L74c73a:{c.instructions+=1;NFSU2_TR(0x74c73a);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74c73d:L74c73d:{c.instructions+=2;NFSU2_TR(0x74c73d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c741:{NFSU2_TR(0x74c741);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74c744:L74c744:{c.instructions+=4;NFSU2_TR(0x74c744);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74c746:{NFSU2_TR(0x74c746);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74c747:{NFSU2_TR(0x74c747);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74c749:{NFSU2_TR(0x74c749);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c744u);}goto L74c744;}}
}
B74c74b:L74c74b:{c.instructions+=3;NFSU2_TR(0x74c74b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B74c74d:{NFSU2_TR(0x74c74d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c751:{NFSU2_TR(0x74c751);
if(r1(R+518)){{goto L74c896;}}
}
B74c757:L74c757:{c.instructions+=3;NFSU2_TR(0x74c757);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c75a:{NFSU2_TR(0x74c75a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c75c:{NFSU2_TR(0x74c75c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c775;}}
}
B74c75e:L74c75e:{c.instructions+=4;NFSU2_TR(0x74c75e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74c762:{NFSU2_TR(0x74c762);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c764:{NFSU2_TR(0x74c764);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c765:{NFSU2_TR(0x74c765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c76aull));
TAIL_STATIC(0x75cf10u,75c);
}
B74c76a:L74c76a:{c.instructions+=3;NFSU2_TR(0x74c76a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c76d:{NFSU2_TR(0x74c76d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c76f:{NFSU2_TR(0x74c76f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c896;}}
}
B74c775:L74c775:{c.instructions+=5;NFSU2_TR(0x74c775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c77b:{NFSU2_TR(0x74c77b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74c77f:{NFSU2_TR(0x74c77f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c780:{NFSU2_TR(0x74c780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c781:{NFSU2_TR(0x74c781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c786ull));
TAIL_STATIC(0x754f70u,754);
}
B74c786:L74c786:{c.instructions+=4;NFSU2_TR(0x74c786);
__builtin_memmove((R+24),(R+0),4);
}
B74c788:{NFSU2_TR(0x74c788);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c78b:{NFSU2_TR(0x74c78b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c78d:{NFSU2_TR(0x74c78d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c80a;}}
}
B74c78f:L74c78f:{c.instructions+=2;NFSU2_TR(0x74c78f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c793:{NFSU2_TR(0x74c793);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74c796:L74c796:{c.instructions+=4;NFSU2_TR(0x74c796);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74c798:{NFSU2_TR(0x74c798);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74c799:{NFSU2_TR(0x74c799);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74c79b:{NFSU2_TR(0x74c79b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c796u);}goto L74c796;}}
}
B74c79d:L74c79d:{c.instructions+=3;NFSU2_TR(0x74c79d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74c79f:{NFSU2_TR(0x74c79f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x21ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x21ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x21ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74c7a2:{NFSU2_TR(0x74c7a2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L74c896;}}
}
B74c7a8:L74c7a8:{c.instructions+=2;NFSU2_TR(0x74c7a8);
u8 U[4];
w4(U+0,u32(0x108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c7ad:{NFSU2_TR(0x74c7ad);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c7b0ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B74c7b0:L74c7b0:{c.instructions+=4;NFSU2_TR(0x74c7b0);
__builtin_memmove((R+12),(R+0),4);
}
B74c7b2:{NFSU2_TR(0x74c7b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74c7b4:{NFSU2_TR(0x74c7b4);
w4(R+4,u32(0x42ull));
}
B74c7b9:{NFSU2_TR(0x74c7b9);
__builtin_memmove((R+28),(R+12),4);
}
B74c7bb:L74c7bb:{c.instructions+=1;NFSU2_TR(0x74c7bb);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74c7bd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c7bbu);}goto L74c7bb;}
}
B74c7bd:L74c7bd:{c.instructions+=6;NFSU2_TR(0x74c7bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c7c1:{NFSU2_TR(0x74c7c1);
__builtin_memmove((R+8),(R+12),4);
}
B74c7c3:{NFSU2_TR(0x74c7c3);
__builtin_memmove((R+4),(R+0),4);
}
B74c7c5:{NFSU2_TR(0x74c7c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74c7c8:{NFSU2_TR(0x74c7c8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B74c7ca:{NFSU2_TR(0x74c7ca);
__builtin_memmove((R+12),(R+12),4);
}
B74c7d0:L74c7d0:{c.instructions+=5;NFSU2_TR(0x74c7d0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74c7d2:{NFSU2_TR(0x74c7d2);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74c7d5:{NFSU2_TR(0x74c7d5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74c7d6:{NFSU2_TR(0x74c7d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74c7d8:{NFSU2_TR(0x74c7d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c7d0u);}goto L74c7d0;}}
}
B74c7da:L74c7da:{c.instructions+=4;NFSU2_TR(0x74c7da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c7e0:{NFSU2_TR(0x74c7e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c7e1:{NFSU2_TR(0x74c7e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c7e2:{NFSU2_TR(0x74c7e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c7e7ull));
TAIL_STATIC(0x73d750u,73d);
}
B74c7e7:L74c7e7:{c.instructions+=6;NFSU2_TR(0x74c7e7);
__builtin_memmove((R+24),(R+0),4);
}
B74c7e9:{NFSU2_TR(0x74c7e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c7ef:{NFSU2_TR(0x74c7ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c7f0:{NFSU2_TR(0x74c7f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c7f1:{NFSU2_TR(0x74c7f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c7f2:{NFSU2_TR(0x74c7f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c7f7ull));
TAIL_STATIC(0x754f00u,754);
}
B74c7f7:L74c7f7:{c.instructions+=4;NFSU2_TR(0x74c7f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74c7fb:{NFSU2_TR(0x74c7fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74c7fe:{NFSU2_TR(0x74c7fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c800:{NFSU2_TR(0x74c800);
if(r1(R+518)){{goto L74c896;}}
}
B74c806:L74c806:{c.instructions+=1;NFSU2_TR(0x74c806);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74c80a:L74c80a:{c.instructions+=4;NFSU2_TR(0x74c80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c810:{NFSU2_TR(0x74c810);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c811:{NFSU2_TR(0x74c811);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c812:{NFSU2_TR(0x74c812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c817ull));
TAIL_STATIC(0x73d810u,73d);
}
B74c817:L74c817:{c.instructions+=4;NFSU2_TR(0x74c817);
__builtin_memmove((R+24),(R+0),4);
}
B74c819:{NFSU2_TR(0x74c819);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c81c:{NFSU2_TR(0x74c81c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c81e:{NFSU2_TR(0x74c81e);
if(r1(R+518)){{goto L74c896;}}
}
B74c820:L74c820:{c.instructions+=3;NFSU2_TR(0x74c820);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c824:{NFSU2_TR(0x74c824);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c826:{NFSU2_TR(0x74c826);
if(r1(R+518)){{goto L74c83c;}}
}
B74c828:L74c828:{c.instructions+=4;NFSU2_TR(0x74c828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c82e:{NFSU2_TR(0x74c82e);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B74c830:{NFSU2_TR(0x74c830);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffefffffull))));
}
B74c836:{NFSU2_TR(0x74c836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c83c:L74c83c:{c.instructions+=15;NFSU2_TR(0x74c83c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c840:{NFSU2_TR(0x74c840);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c844:{NFSU2_TR(0x74c844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74c847:{NFSU2_TR(0x74c847);
__builtin_memmove((R+0),(R+16),4);
}
B74c849:{NFSU2_TR(0x74c849);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B74c84b:{NFSU2_TR(0x74c84b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c84f:{NFSU2_TR(0x74c84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c852:{NFSU2_TR(0x74c852);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c856:{NFSU2_TR(0x74c856);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c859:{NFSU2_TR(0x74c859);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c85d:{NFSU2_TR(0x74c85d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c860:{NFSU2_TR(0x74c860);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c863:{NFSU2_TR(0x74c863);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c864:{NFSU2_TR(0x74c864);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c867:{NFSU2_TR(0x74c867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c86cull));
TAIL_STATIC(0x74bc50u,74b);
}
B74c86c:L74c86c:{c.instructions+=7;NFSU2_TR(0x74c86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c872:{NFSU2_TR(0x74c872);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B74c874:{NFSU2_TR(0x74c874);
__builtin_memmove((R+0),(R+8),4);
}
B74c876:{NFSU2_TR(0x74c876);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B74c879:{NFSU2_TR(0x74c879);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c87e:{NFSU2_TR(0x74c87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c884:{NFSU2_TR(0x74c884);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74c88d;}}
}
B74c886:L74c886:{c.instructions+=2;NFSU2_TR(0x74c886);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c88b:{NFSU2_TR(0x74c88b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74c896;}}
}
B74c88d:L74c88d:{c.instructions+=2;NFSU2_TR(0x74c88d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffbull))));
}
B74c890:{NFSU2_TR(0x74c890);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c896:L74c896:{c.instructions+=3;NFSU2_TR(0x74c896);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c89a:{NFSU2_TR(0x74c89a);
__builtin_memmove((R+0),(R+12),4);
}
B74c89c:{NFSU2_TR(0x74c89c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c8a1ull));
TAIL_STATIC(0x76115eu,761);
}
B74c8a1:L74c8a1:{c.instructions+=6;NFSU2_TR(0x74c8a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74c8a2:{NFSU2_TR(0x74c8a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74c8a3:{NFSU2_TR(0x74c8a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74c8a4:{NFSU2_TR(0x74c8a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74c8a5:{NFSU2_TR(0x74c8a5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74c8a8:{NFSU2_TR(0x74c8a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74c8b0:L74c8b0:{c.instructions+=17;NFSU2_TR(0x74c8b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c8b1:{NFSU2_TR(0x74c8b1);
__builtin_memmove((R+20),(R+16),4);
}
B74c8b3:{NFSU2_TR(0x74c8b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B74c8b6:{NFSU2_TR(0x74c8b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x13cull))));
}
B74c8bc:{NFSU2_TR(0x74c8bc);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74c8c1:{NFSU2_TR(0x74c8c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c8c4:{NFSU2_TR(0x74c8c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c8c5:{NFSU2_TR(0x74c8c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c8c6:{NFSU2_TR(0x74c8c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c8c7:{NFSU2_TR(0x74c8c7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c8cc:{NFSU2_TR(0x74c8cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c8d3:{NFSU2_TR(0x74c8d3);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c8d5:{NFSU2_TR(0x74c8d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c8d9:{NFSU2_TR(0x74c8d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c8da:{NFSU2_TR(0x74c8da);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c8df:{NFSU2_TR(0x74c8df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c8e0:{NFSU2_TR(0x74c8e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c8e5ull));
TAIL_STATIC(0x7414a0u,741);
}
B74c8e5:L74c8e5:{c.instructions+=3;NFSU2_TR(0x74c8e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c8e8:{NFSU2_TR(0x74c8e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c8e9:{NFSU2_TR(0x74c8e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c8eeull));
TAIL_STATIC(0x742360u,742);
}
B74c8ee:L74c8ee:{c.instructions+=4;NFSU2_TR(0x74c8ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74c8f2:{NFSU2_TR(0x74c8f2);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c8f4:{NFSU2_TR(0x74c8f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c8f5:{NFSU2_TR(0x74c8f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c8faull));
TAIL_STATIC(0x75cf10u,75c);
}
B74c8fa:L74c8fa:{c.instructions+=3;NFSU2_TR(0x74c8fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74c8fd:{NFSU2_TR(0x74c8fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c8ff:{NFSU2_TR(0x74c8ff);
if(r1(R+518)){{goto L74c904;}}
}
B74c901:L74c901:{c.instructions+=1;NFSU2_TR(0x74c901);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74c904:L74c904:{c.instructions+=4;NFSU2_TR(0x74c904);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74c908:{NFSU2_TR(0x74c908);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c90a:{NFSU2_TR(0x74c90a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c90b:{NFSU2_TR(0x74c90b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c910ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74c910:L74c910:{c.instructions+=3;NFSU2_TR(0x74c910);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c913:{NFSU2_TR(0x74c913);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c915:{NFSU2_TR(0x74c915);
if(r1(R+518)){{goto L74c91a;}}
}
B74c917:L74c917:{c.instructions+=1;NFSU2_TR(0x74c917);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74c91a:L74c91a:{c.instructions+=4;NFSU2_TR(0x74c91a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74c91e:{NFSU2_TR(0x74c91e);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c920:{NFSU2_TR(0x74c920);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c921:{NFSU2_TR(0x74c921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c926ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74c926:L74c926:{c.instructions+=3;NFSU2_TR(0x74c926);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c929:{NFSU2_TR(0x74c929);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c92b:{NFSU2_TR(0x74c92b);
if(r1(R+518)){{goto L74c930;}}
}
B74c92d:L74c92d:{c.instructions+=1;NFSU2_TR(0x74c92d);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74c930:L74c930:{c.instructions+=6;NFSU2_TR(0x74c930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74c933:{NFSU2_TR(0x74c933);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c939:{NFSU2_TR(0x74c939);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74c93d:{NFSU2_TR(0x74c93d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c93e:{NFSU2_TR(0x74c93e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c93f:{NFSU2_TR(0x74c93f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c944ull));
TAIL_STATIC(0x754f70u,754);
}
B74c944:L74c944:{c.instructions+=3;NFSU2_TR(0x74c944);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c947:{NFSU2_TR(0x74c947);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74c949:{NFSU2_TR(0x74c949);
if(r1(R+518)){{goto L74ca60;}}
}
B74c94f:L74c94f:{c.instructions+=4;NFSU2_TR(0x74c94f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c955:{NFSU2_TR(0x74c955);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c956:{NFSU2_TR(0x74c956);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c957:{NFSU2_TR(0x74c957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c95cull));
TAIL_STATIC(0x73d810u,73d);
}
B74c95c:L74c95c:{c.instructions+=8;NFSU2_TR(0x74c95c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c95d:{NFSU2_TR(0x74c95d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B74c960:{NFSU2_TR(0x74c960);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c961:{NFSU2_TR(0x74c961);
__builtin_memmove((R+24),(R+0),4);
}
B74c963:{NFSU2_TR(0x74c963);
w4(R+4,u32(0x42ull));
}
B74c968:{NFSU2_TR(0x74c968);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74c96c:{NFSU2_TR(0x74c96c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c96d:{NFSU2_TR(0x74c96d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c971:L74c971:{c.instructions+=1;NFSU2_TR(0x74c971);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74c973;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c971u);}goto L74c971;}
}
B74c973:L74c973:{c.instructions+=1;NFSU2_TR(0x74c973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c978ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c010u);}goto L74c010;}
}
B74c978:L74c978:{c.instructions+=3;NFSU2_TR(0x74c978);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74c97b:{NFSU2_TR(0x74c97b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74c97e:{NFSU2_TR(0x74c97e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74c98a;}}
}
B74c980:L74c980:{c.instructions+=2;NFSU2_TR(0x74c980);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B74c988:{NFSU2_TR(0x74c988);
{goto L74c996;}
}
B74c98a:L74c98a:{c.instructions+=2;NFSU2_TR(0x74c98a);
u8 U[5];
w4(U+0,u32(u32(u32(0x12full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B74c992:{NFSU2_TR(0x74c992);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c996:L74c996:{c.instructions+=5;NFSU2_TR(0x74c996);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c99a:{NFSU2_TR(0x74c99a);
w4(R+4,u32(0x42ull));
}
B74c99f:{NFSU2_TR(0x74c99f);
__builtin_memmove((R+28),(R+8),4);
}
B74c9a1:{NFSU2_TR(0x74c9a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B74c9a5:{NFSU2_TR(0x74c9a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B74c9a7:L74c9a7:{c.instructions+=1;NFSU2_TR(0x74c9a7);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74c9a9;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c9a7u);}goto L74c9a7;}}
}
B74c9a9:L74c9a9:{c.instructions+=1;NFSU2_TR(0x74c9a9);
if(r1(R+518)){{goto L74c9e6;}}
}
B74c9ab:L74c9ab:{c.instructions+=4;NFSU2_TR(0x74c9ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c9b1:{NFSU2_TR(0x74c9b1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c9b3:{NFSU2_TR(0x74c9b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c9b4:{NFSU2_TR(0x74c9b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c9b9ull));
TAIL_STATIC(0x73d990u,73d);
}
B74c9b9:L74c9b9:{c.instructions+=4;NFSU2_TR(0x74c9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74c9bf:{NFSU2_TR(0x74c9bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74c9c2:{NFSU2_TR(0x74c9c2);
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
B74c9c4:{NFSU2_TR(0x74c9c4);
if(r1(R+518)){{goto L74c9e2;}}
}
B74c9c6:L74c9c6:{c.instructions+=9;NFSU2_TR(0x74c9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c9cc:{NFSU2_TR(0x74c9cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74c9d0:{NFSU2_TR(0x74c9d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c9d1:{NFSU2_TR(0x74c9d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c9d5:{NFSU2_TR(0x74c9d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c9d6:{NFSU2_TR(0x74c9d6);
u8 U[4];
w4(U+0,u32(0x70676574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c9db:{NFSU2_TR(0x74c9db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c9dc:{NFSU2_TR(0x74c9dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74c9dd:{NFSU2_TR(0x74c9dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74c9dfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74c9df:L74c9df:{c.instructions+=1;NFSU2_TR(0x74c9df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74c9e2:L74c9e2:{c.instructions+=1;NFSU2_TR(0x74c9e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74c9e6:L74c9e6:{c.instructions+=5;NFSU2_TR(0x74c9e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74c9ec:{NFSU2_TR(0x74c9ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74c9ee:{NFSU2_TR(0x74c9ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8fcull))));
__builtin_memmove((R+24),(U+0),4);
}
B74c9f4:{NFSU2_TR(0x74c9f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74c9f8:{NFSU2_TR(0x74c9f8);
if(r1(R+518)){{goto L74ca60;}}
}
B74c9fa:L74c9fa:{c.instructions+=2;NFSU2_TR(0x74c9fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74c9fe:{NFSU2_TR(0x74c9fe);
__builtin_memmove((R+28),(R+28),4);
}
B74ca00:L74ca00:{c.instructions+=4;NFSU2_TR(0x74ca00);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74ca02:{NFSU2_TR(0x74ca02);
__builtin_memmove((R+0),(R+4),1);
}
B74ca04:{NFSU2_TR(0x74ca04);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+4))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74ca06:{NFSU2_TR(0x74ca06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ca24;}}
}
B74ca08:L74ca08:{c.instructions+=2;NFSU2_TR(0x74ca08);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74ca0a:{NFSU2_TR(0x74ca0a);
if(r1(R+518)){{goto L74ca20;}}
}
B74ca0c:L74ca0c:{c.instructions+=4;NFSU2_TR(0x74ca0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74ca0f:{NFSU2_TR(0x74ca0f);
__builtin_memmove((R+0),(R+4),1);
}
B74ca11:{NFSU2_TR(0x74ca11);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+4))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+4))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74ca14:{NFSU2_TR(0x74ca14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ca24;}}
}
B74ca16:L74ca16:{c.instructions+=4;NFSU2_TR(0x74ca16);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B74ca19:{NFSU2_TR(0x74ca19);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B74ca1c:{NFSU2_TR(0x74ca1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74ca1e:{NFSU2_TR(0x74ca1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ca00u);}goto L74ca00;}}
}
B74ca20:L74ca20:{c.instructions+=2;NFSU2_TR(0x74ca20);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74ca22:{NFSU2_TR(0x74ca22);
{goto L74ca29;}
}
B74ca24:L74ca24:{c.instructions+=2;NFSU2_TR(0x74ca24);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B74ca26:{NFSU2_TR(0x74ca26);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B74ca29:L74ca29:{c.instructions+=2;NFSU2_TR(0x74ca29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ca2b:{NFSU2_TR(0x74ca2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ca60;}}
}
B74ca2d:L74ca2d:{c.instructions+=4;NFSU2_TR(0x74ca2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x8000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B74ca37:{NFSU2_TR(0x74ca37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ca3d:{NFSU2_TR(0x74ca3d);
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
B74ca3f:{NFSU2_TR(0x74ca3f);
if(r1(R+518)){{goto L74ca59;}}
}
B74ca41:L74ca41:{c.instructions+=7;NFSU2_TR(0x74ca41);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ca47:{NFSU2_TR(0x74ca47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ca48:{NFSU2_TR(0x74ca48);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ca4d:{NFSU2_TR(0x74ca4d);
u8 U[4];
w4(U+0,u32(0x67696e76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ca52:{NFSU2_TR(0x74ca52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ca53:{NFSU2_TR(0x74ca53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ca54:{NFSU2_TR(0x74ca54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ca56ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74ca56:L74ca56:{c.instructions+=1;NFSU2_TR(0x74ca56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74ca59:L74ca59:{c.instructions+=2;NFSU2_TR(0x74ca59);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74ca5d:{NFSU2_TR(0x74ca5d);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+8)),r1(U+0));
}
B74ca60:L74ca60:{c.instructions+=2;NFSU2_TR(0x74ca60);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ca67:{NFSU2_TR(0x74ca67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ca6cull));
TAIL_STATIC(0x76115eu,761);
}
B74ca6c:L74ca6c:{c.instructions+=6;NFSU2_TR(0x74ca6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74ca6d:{NFSU2_TR(0x74ca6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74ca6e:{NFSU2_TR(0x74ca6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74ca6f:{NFSU2_TR(0x74ca6f);
__builtin_memmove((R+16),(R+20),4);
}
B74ca71:{NFSU2_TR(0x74ca71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74ca72:{NFSU2_TR(0x74ca72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74ca80:L74ca80:{c.instructions+=9;NFSU2_TR(0x74ca80);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ca84:{NFSU2_TR(0x74ca84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ca85:{NFSU2_TR(0x74ca85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ca86:{NFSU2_TR(0x74ca86);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74ca8a:{NFSU2_TR(0x74ca8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B74ca8d:{NFSU2_TR(0x74ca8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B74ca90:{NFSU2_TR(0x74ca90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ca96:{NFSU2_TR(0x74ca96);
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
B74ca98:{NFSU2_TR(0x74ca98);
if(r1(R+518)){{goto L74caeb;}}
}
B74ca9a:L74ca9a:{c.instructions+=5;NFSU2_TR(0x74ca9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ca9e:{NFSU2_TR(0x74ca9e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74caa0:{NFSU2_TR(0x74caa0);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74caa5:{NFSU2_TR(0x74caa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74caa6:{NFSU2_TR(0x74caa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74caabull));
TAIL_STATIC(0x7414a0u,741);
}
B74caab:L74caab:{c.instructions+=3;NFSU2_TR(0x74caab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74caae:{NFSU2_TR(0x74caae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74caaf:{NFSU2_TR(0x74caaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cab4ull));
TAIL_STATIC(0x7420b0u,742);
}
B74cab4:L74cab4:{c.instructions+=4;NFSU2_TR(0x74cab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74caba:{NFSU2_TR(0x74caba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74cabd:{NFSU2_TR(0x74cabd);
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
B74cabf:{NFSU2_TR(0x74cabf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74caeb;}}
}
B74cac1:L74cac1:{c.instructions+=6;NFSU2_TR(0x74cac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x91cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74cac7:{NFSU2_TR(0x74cac7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cac8:{NFSU2_TR(0x74cac8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74cacc:{NFSU2_TR(0x74cacc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cacd:{NFSU2_TR(0x74cacd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cace:{NFSU2_TR(0x74cace);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cad4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74cad4:L74cad4:{c.instructions+=3;NFSU2_TR(0x74cad4);
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
B74cad7:{NFSU2_TR(0x74cad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74cae1:{NFSU2_TR(0x74cae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74caeb:L74caeb:{c.instructions+=3;NFSU2_TR(0x74caeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74caec:{NFSU2_TR(0x74caec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74caed:{NFSU2_TR(0x74caed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74caf0:L74caf0:{c.instructions+=8;NFSU2_TR(0x74caf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74caf1:{NFSU2_TR(0x74caf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74caf5:{NFSU2_TR(0x74caf5);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cafa:{NFSU2_TR(0x74cafa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cafc:{NFSU2_TR(0x74cafc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cafe:{NFSU2_TR(0x74cafe);
u8 U[4];
w4(U+0,u32(0x796344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb03:{NFSU2_TR(0x74cb03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb04:{NFSU2_TR(0x74cb04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cb09ull));
TAIL_STATIC(0x7414a0u,741);
}
B74cb09:L74cb09:{c.instructions+=3;NFSU2_TR(0x74cb09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74cb0c:{NFSU2_TR(0x74cb0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb0d:{NFSU2_TR(0x74cb0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cb12ull));
TAIL_STATIC(0x742360u,742);
}
B74cb12:L74cb12:{c.instructions+=3;NFSU2_TR(0x74cb12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74cb15:{NFSU2_TR(0x74cb15);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74cb1a:{NFSU2_TR(0x74cb1a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74cb40;}}
}
B74cb1c:L74cb1c:{c.instructions+=6;NFSU2_TR(0x74cb1c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb21:{NFSU2_TR(0x74cb21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb23:{NFSU2_TR(0x74cb23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb25:{NFSU2_TR(0x74cb25);
u8 U[4];
w4(U+0,u32(0x7d2f54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb2a:{NFSU2_TR(0x74cb2a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb2b:{NFSU2_TR(0x74cb2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cb30ull));
TAIL_STATIC(0x7414a0u,741);
}
B74cb30:L74cb30:{c.instructions+=3;NFSU2_TR(0x74cb30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74cb33:{NFSU2_TR(0x74cb33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb34:{NFSU2_TR(0x74cb34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cb39ull));
TAIL_STATIC(0x742360u,742);
}
B74cb39:L74cb39:{c.instructions+=3;NFSU2_TR(0x74cb39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74cb3c:{NFSU2_TR(0x74cb3c);
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
B74cb3e:{NFSU2_TR(0x74cb3e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74cb47;}}
}
B74cb40:L74cb40:{c.instructions+=3;NFSU2_TR(0x74cb40);
w4(R+0,u32(0xfffffffdull));
}
B74cb45:{NFSU2_TR(0x74cb45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74cb46:{NFSU2_TR(0x74cb46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74cb47:L74cb47:{c.instructions+=7;NFSU2_TR(0x74cb47);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb48:{NFSU2_TR(0x74cb48);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74cb4c:{NFSU2_TR(0x74cb4c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x53454e44ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74cb52:{NFSU2_TR(0x74cb52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb53:{NFSU2_TR(0x74cb53);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74cb57:{NFSU2_TR(0x74cb57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb58:{NFSU2_TR(0x74cb58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74cb6b;}}
}
B74cb5a:L74cb5a:{c.instructions+=6;NFSU2_TR(0x74cb5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74cb5e:{NFSU2_TR(0x74cb5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74cb62:{NFSU2_TR(0x74cb62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb63:{NFSU2_TR(0x74cb63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb64:{NFSU2_TR(0x74cb64);
w4(R+28,u32(0x2ull));
}
B74cb69:{NFSU2_TR(0x74cb69);
{goto L74cb82;}
}
B74cb6b:L74cb6b:{c.instructions+=2;NFSU2_TR(0x74cb6b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x42524443ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74cb71:{NFSU2_TR(0x74cb71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74cb8e;}}
}
B74cb73:L74cb73:{c.instructions+=5;NFSU2_TR(0x74cb73);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74cb77:{NFSU2_TR(0x74cb77);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74cb7b:{NFSU2_TR(0x74cb7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb7c:{NFSU2_TR(0x74cb7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb7d:{NFSU2_TR(0x74cb7d);
w4(R+28,u32(0x4ull));
}
B74cb82:L74cb82:{c.instructions+=2;NFSU2_TR(0x74cb82);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74cb86:{NFSU2_TR(0x74cb86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cb8bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74c5d0u);}goto L74c5d0;}
}
B74cb8b:L74cb8b:{c.instructions+=1;NFSU2_TR(0x74cb8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74cb8e:L74cb8e:{c.instructions+=7;NFSU2_TR(0x74cb8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74cb91:{NFSU2_TR(0x74cb91);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb93:{NFSU2_TR(0x74cb93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb94:{NFSU2_TR(0x74cb94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb96:{NFSU2_TR(0x74cb96);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb97:{NFSU2_TR(0x74cb97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cb98:{NFSU2_TR(0x74cb98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cb9dull));
TAIL_STATIC(0x7549f0u,754);
}
B74cb9d:L74cb9d:{c.instructions+=7;NFSU2_TR(0x74cb9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74cba0:{NFSU2_TR(0x74cba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74cba1:{NFSU2_TR(0x74cba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74cba2:{NFSU2_TR(0x74cba2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74cba3:{NFSU2_TR(0x74cba3);
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
B74cba5:{NFSU2_TR(0x74cba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74cba6:{NFSU2_TR(0x74cba6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74cbb0:L74cbb0:{c.instructions+=14;NFSU2_TR(0x74cbb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B74cbb6:{NFSU2_TR(0x74cbb6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74cbbb:{NFSU2_TR(0x74cbbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cbbc:{NFSU2_TR(0x74cbbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cbbd:{NFSU2_TR(0x74cbbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74cbc4:{NFSU2_TR(0x74cbc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74cbcb:{NFSU2_TR(0x74cbcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6b4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74cbd1:{NFSU2_TR(0x74cbd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cbd2:{NFSU2_TR(0x74cbd2);
u8 U[4];
w4(U+0,u32(0x7d2f6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cbd7:{NFSU2_TR(0x74cbd7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74cbdb:{NFSU2_TR(0x74cbdb);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cbe0:{NFSU2_TR(0x74cbe0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cbe1:{NFSU2_TR(0x74cbe1);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74cbe6:{NFSU2_TR(0x74cbe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cbebull));
TAIL_STATIC(0x741a50u,741);
}
B74cbeb:L74cbeb:{c.instructions+=4;NFSU2_TR(0x74cbeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74cbf2:{NFSU2_TR(0x74cbf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74cbf5:{NFSU2_TR(0x74cbf5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x47525350ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74cbfb:{NFSU2_TR(0x74cbfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74cc1b;}}
}
B74cbfd:L74cbfd:{c.instructions+=7;NFSU2_TR(0x74cbfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x128ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74cc03:{NFSU2_TR(0x74cc03);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc04:{NFSU2_TR(0x74cc04);
u8 U[4];
w4(U+0,u32(0x7d2f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc09:{NFSU2_TR(0x74cc09);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74cc0d:{NFSU2_TR(0x74cc0d);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc12:{NFSU2_TR(0x74cc12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc13:{NFSU2_TR(0x74cc13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cc18ull));
TAIL_STATIC(0x741a50u,741);
}
B74cc18:L74cc18:{c.instructions+=1;NFSU2_TR(0x74cc18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74cc1b:L74cc1b:{c.instructions+=8;NFSU2_TR(0x74cc1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74cc22:{NFSU2_TR(0x74cc22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc23:{NFSU2_TR(0x74cc23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc24:{NFSU2_TR(0x74cc24);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc29:{NFSU2_TR(0x74cc29);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74cc2d:{NFSU2_TR(0x74cc2d);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc32:{NFSU2_TR(0x74cc32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc33:{NFSU2_TR(0x74cc33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cc38ull));
TAIL_STATIC(0x741690u,741);
}
B74cc38:L74cc38:{c.instructions+=7;NFSU2_TR(0x74cc38);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74cc3f:{NFSU2_TR(0x74cc3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc40:{NFSU2_TR(0x74cc40);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc45:{NFSU2_TR(0x74cc45);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74cc49:{NFSU2_TR(0x74cc49);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc4e:{NFSU2_TR(0x74cc4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc4f:{NFSU2_TR(0x74cc4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cc54ull));
TAIL_STATIC(0x741a50u,741);
}
B74cc54:L74cc54:{c.instructions+=4;NFSU2_TR(0x74cc54);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74cc5b:{NFSU2_TR(0x74cc5b);
__builtin_memmove((R+0),(R+24),4);
}
B74cc5d:{NFSU2_TR(0x74cc5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74cc60:{NFSU2_TR(0x74cc60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74cc63:L74cc63:{c.instructions+=4;NFSU2_TR(0x74cc63);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74cc65:{NFSU2_TR(0x74cc65);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74cc66:{NFSU2_TR(0x74cc66);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74cc68:{NFSU2_TR(0x74cc68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74cc63u);}goto L74cc63;}}
}
B74cc6a:L74cc6a:{c.instructions+=3;NFSU2_TR(0x74cc6a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B74cc6c:{NFSU2_TR(0x74cc6c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74cc70:{NFSU2_TR(0x74cc70);
if(r1(R+518)){{goto L74cc8a;}}
}
B74cc72:L74cc72:{c.instructions+=6;NFSU2_TR(0x74cc72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc73:{NFSU2_TR(0x74cc73);
u8 U[4];
w4(U+0,u32(0x7d2f64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc78:{NFSU2_TR(0x74cc78);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74cc7c:{NFSU2_TR(0x74cc7c);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc81:{NFSU2_TR(0x74cc81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc82:{NFSU2_TR(0x74cc82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cc87ull));
TAIL_STATIC(0x741a50u,741);
}
B74cc87:L74cc87:{c.instructions+=1;NFSU2_TR(0x74cc87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74cc8a:L74cc8a:{c.instructions+=3;NFSU2_TR(0x74cc8a);
u8 U[16];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74cc92:{NFSU2_TR(0x74cc92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74cc93:{NFSU2_TR(0x74cc93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ccb1;}}
}
B74cc95:L74cc95:{c.instructions+=6;NFSU2_TR(0x74cc95);
u8 U[4];
w4(U+0,u32(0x7c34dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc9a:{NFSU2_TR(0x74cc9a);
u8 U[4];
w4(U+0,u32(0x7d2f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cc9f:{NFSU2_TR(0x74cc9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74cca3:{NFSU2_TR(0x74cca3);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cca8:{NFSU2_TR(0x74cca8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cca9:{NFSU2_TR(0x74cca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ccaeull));
TAIL_STATIC(0x741a50u,741);
}
B74ccae:L74ccae:{c.instructions+=1;NFSU2_TR(0x74ccae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74ccb1:L74ccb1:{c.instructions+=8;NFSU2_TR(0x74ccb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74ccb4:{NFSU2_TR(0x74ccb4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ccb6:{NFSU2_TR(0x74ccb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74ccba:{NFSU2_TR(0x74ccba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ccbb:{NFSU2_TR(0x74ccbb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ccbd:{NFSU2_TR(0x74ccbd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ccbe:{NFSU2_TR(0x74ccbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ccbf:{NFSU2_TR(0x74ccbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ccc4ull));
TAIL_STATIC(0x7549f0u,754);
}
B74ccc4:L74ccc4:{c.instructions+=6;NFSU2_TR(0x74ccc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74cccb:{NFSU2_TR(0x74cccb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74ccce:{NFSU2_TR(0x74ccce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74cccf:{NFSU2_TR(0x74cccf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74ccd1:{NFSU2_TR(0x74ccd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74ccd2:{NFSU2_TR(0x74ccd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ccd7ull));
TAIL_STATIC(0x76115eu,761);
}
B74ccd7:L74ccd7:{c.instructions+=2;NFSU2_TR(0x74ccd7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ccdd:{NFSU2_TR(0x74ccdd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74cce0:L74cce0:{c.instructions+=6;NFSU2_TR(0x74cce0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cce1:{NFSU2_TR(0x74cce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74cce5:{NFSU2_TR(0x74cce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74cceb:{NFSU2_TR(0x74cceb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74cced:{NFSU2_TR(0x74cced);
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
B74ccef:{NFSU2_TR(0x74ccef);
if(r1(R+518)){{goto L74cd66;}}
}
B74ccf1:L74ccf1:{c.instructions+=7;NFSU2_TR(0x74ccf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ccf7:{NFSU2_TR(0x74ccf7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ccf8:{NFSU2_TR(0x74ccf8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ccf9:{NFSU2_TR(0x74ccf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74ccfd:{NFSU2_TR(0x74ccfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ccfe:{NFSU2_TR(0x74ccfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ccff:{NFSU2_TR(0x74ccff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cd04ull));
TAIL_STATIC(0x754f70u,754);
}
B74cd04:L74cd04:{c.instructions+=3;NFSU2_TR(0x74cd04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74cd07:{NFSU2_TR(0x74cd07);
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
B74cd09:{NFSU2_TR(0x74cd09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74cd44;}}
}
B74cd0b:L74cd0b:{c.instructions+=3;NFSU2_TR(0x74cd0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd0c:{NFSU2_TR(0x74cd0c);
u8 U[4];
w4(U+0,u32(0x108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd11:{NFSU2_TR(0x74cd11);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cd14ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B74cd14:L74cd14:{c.instructions+=3;NFSU2_TR(0x74cd14);
__builtin_memmove((R+12),(R+0),4);
}
B74cd16:{NFSU2_TR(0x74cd16);
w4(R+4,u32(0x42ull));
}
B74cd1b:{NFSU2_TR(0x74cd1b);
__builtin_memmove((R+28),(R+12),4);
}
B74cd1d:L74cd1d:{c.instructions+=1;NFSU2_TR(0x74cd1d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74cd1f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74cd1du);}goto L74cd1d;}
}
B74cd1f:L74cd1f:{c.instructions+=4;NFSU2_TR(0x74cd1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74cd25:{NFSU2_TR(0x74cd25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd26:{NFSU2_TR(0x74cd26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd27:{NFSU2_TR(0x74cd27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cd2cull));
TAIL_STATIC(0x73d750u,73d);
}
B74cd2c:L74cd2c:{c.instructions+=5;NFSU2_TR(0x74cd2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74cd32:{NFSU2_TR(0x74cd32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd33:{NFSU2_TR(0x74cd33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd34:{NFSU2_TR(0x74cd34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd35:{NFSU2_TR(0x74cd35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cd3aull));
TAIL_STATIC(0x754f00u,754);
}
B74cd3a:L74cd3a:{c.instructions+=4;NFSU2_TR(0x74cd3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74cd3e:{NFSU2_TR(0x74cd3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74cd41:{NFSU2_TR(0x74cd41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74cd42:{NFSU2_TR(0x74cd42);
{goto L74cd56;}
}
B74cd44:L74cd44:{c.instructions+=4;NFSU2_TR(0x74cd44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd45:{NFSU2_TR(0x74cd45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74cd4b:{NFSU2_TR(0x74cd4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd4c:{NFSU2_TR(0x74cd4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cd51ull));
TAIL_STATIC(0x73d810u,73d);
}
B74cd51:L74cd51:{c.instructions+=2;NFSU2_TR(0x74cd51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74cd54:{NFSU2_TR(0x74cd54);
__builtin_memmove((R+12),(R+0),4);
}
B74cd56:L74cd56:{c.instructions+=5;NFSU2_TR(0x74cd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74cd5c:{NFSU2_TR(0x74cd5c);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+4))));
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
B74cd62:{NFSU2_TR(0x74cd62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74cd63:{NFSU2_TR(0x74cd63);
__builtin_memmove((R+0),(R+12),4);
}
B74cd65:{NFSU2_TR(0x74cd65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74cd66:L74cd66:{c.instructions+=2;NFSU2_TR(0x74cd66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74cd67:{NFSU2_TR(0x74cd67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74cd70:L74cd70:{c.instructions+=11;NFSU2_TR(0x74cd70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd71:{NFSU2_TR(0x74cd71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd72:{NFSU2_TR(0x74cd72);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74cd76:{NFSU2_TR(0x74cd76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd77:{NFSU2_TR(0x74cd77);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74cd7b:{NFSU2_TR(0x74cd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74cd81:{NFSU2_TR(0x74cd81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd82:{NFSU2_TR(0x74cd82);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd83:{NFSU2_TR(0x74cd83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd84:{NFSU2_TR(0x74cd84);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B74cd86:{NFSU2_TR(0x74cd86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cd8bull));
TAIL_STATIC(0x754f70u,754);
}
B74cd8b:L74cd8b:{c.instructions+=4;NFSU2_TR(0x74cd8b);
__builtin_memmove((R+28),(R+0),4);
}
B74cd8d:{NFSU2_TR(0x74cd8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74cd90:{NFSU2_TR(0x74cd90);
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
B74cd92:{NFSU2_TR(0x74cd92);
if(r1(R+518)){{goto L74ce06;}}
}
B74cd94:L74cd94:{c.instructions+=4;NFSU2_TR(0x74cd94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74cd9a:{NFSU2_TR(0x74cd9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd9b:{NFSU2_TR(0x74cd9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cd9c:{NFSU2_TR(0x74cd9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cda1ull));
TAIL_STATIC(0x73d810u,73d);
}
B74cda1:L74cda1:{c.instructions+=10;NFSU2_TR(0x74cda1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74cda7:{NFSU2_TR(0x74cda7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74cdab:{NFSU2_TR(0x74cdab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74cdb1:{NFSU2_TR(0x74cdb1);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+4))));
}
B74cdb3:{NFSU2_TR(0x74cdb3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+12))));
}
B74cdb5:{NFSU2_TR(0x74cdb5);
__builtin_memmove((R+4),(R+8),4);
}
B74cdb7:{NFSU2_TR(0x74cdb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74cdba:{NFSU2_TR(0x74cdba);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x1c0204ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74cdc0:{NFSU2_TR(0x74cdc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74cdc6:{NFSU2_TR(0x74cdc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ce06;}}
}
B74cdc8:L74cdc8:{c.instructions+=4;NFSU2_TR(0x74cdc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74cdce:{NFSU2_TR(0x74cdce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cdcf:{NFSU2_TR(0x74cdcf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cdd0:{NFSU2_TR(0x74cdd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cdd5ull));
TAIL_STATIC(0x754fc0u,754);
}
B74cdd5:L74cdd5:{c.instructions+=4;NFSU2_TR(0x74cdd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74cddb:{NFSU2_TR(0x74cddb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cddc:{NFSU2_TR(0x74cddc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cddd:{NFSU2_TR(0x74cddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cde2ull));
TAIL_STATIC(0x73d890u,73d);
}
B74cde2:L74cde2:{c.instructions+=5;NFSU2_TR(0x74cde2);
__builtin_memmove((R+28),(R+0),4);
}
B74cde4:{NFSU2_TR(0x74cde4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74cdea:{NFSU2_TR(0x74cdea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74cded:{NFSU2_TR(0x74cded);
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
B74cdef:{NFSU2_TR(0x74cdef);
if(r1(R+518)){{goto L74cdff;}}
}
B74cdf1:L74cdf1:{c.instructions+=5;NFSU2_TR(0x74cdf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74cdf7:{NFSU2_TR(0x74cdf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cdf8:{NFSU2_TR(0x74cdf8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cdf9:{NFSU2_TR(0x74cdf9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cdfa:{NFSU2_TR(0x74cdfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cdfcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74cdfc:L74cdfc:{c.instructions+=1;NFSU2_TR(0x74cdfc);
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
B74cdff:L74cdff:{c.instructions+=2;NFSU2_TR(0x74cdff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce00:{NFSU2_TR(0x74ce00);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ce03ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74ce03:L74ce03:{c.instructions+=1;NFSU2_TR(0x74ce03);
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
B74ce06:L74ce06:{c.instructions+=6;NFSU2_TR(0x74ce06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74ce07:{NFSU2_TR(0x74ce07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74ce08:{NFSU2_TR(0x74ce08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74ce09:{NFSU2_TR(0x74ce09);
__builtin_memmove((R+0),(R+12),4);
}
B74ce0b:{NFSU2_TR(0x74ce0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74ce0c:{NFSU2_TR(0x74ce0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74ce10:L74ce10:{c.instructions+=11;NFSU2_TR(0x74ce10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x68ull))));
}
B74ce13:{NFSU2_TR(0x74ce13);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74ce18:{NFSU2_TR(0x74ce18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce19:{NFSU2_TR(0x74ce19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce1a:{NFSU2_TR(0x74ce1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74ce21:{NFSU2_TR(0x74ce21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce23:{NFSU2_TR(0x74ce23);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce28:{NFSU2_TR(0x74ce28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce29:{NFSU2_TR(0x74ce29);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ce2d:{NFSU2_TR(0x74ce2d);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B74ce30:{NFSU2_TR(0x74ce30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ce35ull));
TAIL_STATIC(0x7414a0u,741);
}
B74ce35:L74ce35:{c.instructions+=3;NFSU2_TR(0x74ce35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ce38:{NFSU2_TR(0x74ce38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce39:{NFSU2_TR(0x74ce39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ce3eull));
TAIL_STATIC(0x7420b0u,742);
}
B74ce3e:L74ce3e:{c.instructions+=3;NFSU2_TR(0x74ce3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ce41:{NFSU2_TR(0x74ce41);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ce44:{NFSU2_TR(0x74ce44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74cf57;}}
}
B74ce4a:L74ce4a:{c.instructions+=9;NFSU2_TR(0x74ce4a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce4b:{NFSU2_TR(0x74ce4b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce50:{NFSU2_TR(0x74ce50);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce52:{NFSU2_TR(0x74ce52);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74ce56:{NFSU2_TR(0x74ce56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce57:{NFSU2_TR(0x74ce57);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce5c:{NFSU2_TR(0x74ce5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce5d:{NFSU2_TR(0x74ce5d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B74ce5f:{NFSU2_TR(0x74ce5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ce64ull));
TAIL_STATIC(0x7414a0u,741);
}
B74ce64:L74ce64:{c.instructions+=3;NFSU2_TR(0x74ce64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ce67:{NFSU2_TR(0x74ce67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce68:{NFSU2_TR(0x74ce68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ce6dull));
TAIL_STATIC(0x742360u,742);
}
B74ce6d:L74ce6d:{c.instructions+=4;NFSU2_TR(0x74ce6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74ce71:{NFSU2_TR(0x74ce71);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce73:{NFSU2_TR(0x74ce73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce74:{NFSU2_TR(0x74ce74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ce79ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74ce79:L74ce79:{c.instructions+=3;NFSU2_TR(0x74ce79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74ce7c:{NFSU2_TR(0x74ce7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ce7e:{NFSU2_TR(0x74ce7e);
if(r1(R+518)){{goto L74ce83;}}
}
B74ce80:L74ce80:{c.instructions+=1;NFSU2_TR(0x74ce80);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74ce83:L74ce83:{c.instructions+=4;NFSU2_TR(0x74ce83);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74ce87:{NFSU2_TR(0x74ce87);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce89:{NFSU2_TR(0x74ce89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce8a:{NFSU2_TR(0x74ce8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ce8full));
TAIL_STATIC(0x75cf10u,75c);
}
B74ce8f:L74ce8f:{c.instructions+=3;NFSU2_TR(0x74ce8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ce92:{NFSU2_TR(0x74ce92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ce94:{NFSU2_TR(0x74ce94);
if(r1(R+518)){{goto L74ce99;}}
}
B74ce96:L74ce96:{c.instructions+=1;NFSU2_TR(0x74ce96);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74ce99:L74ce99:{c.instructions+=4;NFSU2_TR(0x74ce99);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74ce9d:{NFSU2_TR(0x74ce9d);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ce9f:{NFSU2_TR(0x74ce9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cea0:{NFSU2_TR(0x74cea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cea5ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74cea5:L74cea5:{c.instructions+=3;NFSU2_TR(0x74cea5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74cea8:{NFSU2_TR(0x74cea8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ceaa:{NFSU2_TR(0x74ceaa);
if(r1(R+518)){{goto L74ceaf;}}
}
B74ceac:L74ceac:{c.instructions+=1;NFSU2_TR(0x74ceac);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74ceaf:L74ceaf:{c.instructions+=5;NFSU2_TR(0x74ceaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74ceb3:{NFSU2_TR(0x74ceb3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74ceb5:{NFSU2_TR(0x74ceb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9f7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74cebb:{NFSU2_TR(0x74cebb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cebc:{NFSU2_TR(0x74cebc);
__builtin_memmove((R+16),(R+16),4);
}
B74cec0:L74cec0:{c.instructions+=3;NFSU2_TR(0x74cec0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffd9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B74cec3:{NFSU2_TR(0x74cec3);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74cec5:{NFSU2_TR(0x74cec5);
if(r1(R+518)){{goto L74cee6;}}
}
B74cec7:L74cec7:{c.instructions+=2;NFSU2_TR(0x74cec7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74ceca:{NFSU2_TR(0x74ceca);
if(r1(R+518)){{goto L74cee0;}}
}
B74cecc:L74cecc:{c.instructions+=3;NFSU2_TR(0x74cecc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x27ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B74cecf:{NFSU2_TR(0x74cecf);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74ced1:{NFSU2_TR(0x74ced1);
if(r1(R+518)){{goto L74cee3;}}
}
B74ced3:L74ced3:{c.instructions+=4;NFSU2_TR(0x74ced3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B74ced6:{NFSU2_TR(0x74ced6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x75ull))));
}
B74ced9:{NFSU2_TR(0x74ced9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74cedc:{NFSU2_TR(0x74cedc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74cec0u);}goto L74cec0;}}
}
B74cede:L74cede:{c.instructions+=1;NFSU2_TR(0x74cede);
{goto L74cee6;}
}
B74cee0:L74cee0:{c.instructions+=2;NFSU2_TR(0x74cee0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74cee1:{NFSU2_TR(0x74cee1);
{goto L74cee6;}
}
B74cee3:L74cee3:{c.instructions+=1;NFSU2_TR(0x74cee3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B74cee6:L74cee6:{c.instructions+=2;NFSU2_TR(0x74cee6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74cee9:{NFSU2_TR(0x74cee9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74cf44;}}
}
B74ceeb:L74ceeb:{c.instructions+=8;NFSU2_TR(0x74ceeb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x27ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B74ceee:{NFSU2_TR(0x74ceee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B74cef1:{NFSU2_TR(0x74cef1);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cef3:{NFSU2_TR(0x74cef3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74cef7:{NFSU2_TR(0x74cef7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cef8:{NFSU2_TR(0x74cef8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74cefe:{NFSU2_TR(0x74cefe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ceff:{NFSU2_TR(0x74ceff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cf04ull));
TAIL_STATIC(0x75c840u,75c);
}
B74cf04:L74cf04:{c.instructions+=8;NFSU2_TR(0x74cf04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74cf07:{NFSU2_TR(0x74cf07);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf0c:{NFSU2_TR(0x74cf0c);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf0e:{NFSU2_TR(0x74cf0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74cf12:{NFSU2_TR(0x74cf12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf13:{NFSU2_TR(0x74cf13);
u8 U[4];
w4(U+0,u32(0x7d2f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf18:{NFSU2_TR(0x74cf18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf19:{NFSU2_TR(0x74cf19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cf1eull));
TAIL_STATIC(0x7414a0u,741);
}
B74cf1e:L74cf1e:{c.instructions+=3;NFSU2_TR(0x74cf1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74cf21:{NFSU2_TR(0x74cf21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf22:{NFSU2_TR(0x74cf22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cf27ull));
TAIL_STATIC(0x742360u,742);
}
B74cf27:L74cf27:{c.instructions+=7;NFSU2_TR(0x74cf27);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf29:{NFSU2_TR(0x74cf29);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74cf2d:{NFSU2_TR(0x74cf2d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf2f:{NFSU2_TR(0x74cf2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9e6ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74cf35:{NFSU2_TR(0x74cf35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9e1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74cf3b:{NFSU2_TR(0x74cf3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf3c:{NFSU2_TR(0x74cf3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cf41ull));
TAIL_STATIC(0x74bdc0u,74b);
}
B74cf41:L74cf41:{c.instructions+=1;NFSU2_TR(0x74cf41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B74cf44:L74cf44:{c.instructions+=7;NFSU2_TR(0x74cf44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74cf45:{NFSU2_TR(0x74cf45);
__builtin_memmove((R+0),(R+20),4);
}
B74cf47:{NFSU2_TR(0x74cf47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74cf48:{NFSU2_TR(0x74cf48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74cf49:{NFSU2_TR(0x74cf49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74cf4a:{NFSU2_TR(0x74cf4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74cf4e:{NFSU2_TR(0x74cf4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cf53ull));
TAIL_STATIC(0x76115eu,761);
}
B74cf53:L74cf53:{c.instructions+=2;NFSU2_TR(0x74cf53);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x68ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x68ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74cf56:{NFSU2_TR(0x74cf56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74cf57:L74cf57:{c.instructions+=5;NFSU2_TR(0x74cf57);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74cf5b:{NFSU2_TR(0x74cf5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74cf5c:{NFSU2_TR(0x74cf5c);
__builtin_memmove((R+0),(R+24),4);
}
B74cf5e:{NFSU2_TR(0x74cf5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74cf5f:{NFSU2_TR(0x74cf5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cf64ull));
TAIL_STATIC(0x76115eu,761);
}
B74cf64:L74cf64:{c.instructions+=2;NFSU2_TR(0x74cf64);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x68ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x68ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74cf67:{NFSU2_TR(0x74cf67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74cf70:L74cf70:{c.instructions+=6;NFSU2_TR(0x74cf70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf71:{NFSU2_TR(0x74cf71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74cf75:{NFSU2_TR(0x74cf75);
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
B74cf77:{NFSU2_TR(0x74cf77);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf78:{NFSU2_TR(0x74cf78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf79:{NFSU2_TR(0x74cf79);
if(r1(R+518)){{goto L74cf83;}}
}
B74cf7b:L74cf7b:{c.instructions+=3;NFSU2_TR(0x74cf7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74cf7f:{NFSU2_TR(0x74cf7f);
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
B74cf81:{NFSU2_TR(0x74cf81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74cf8d;}}
}
B74cf83:L74cf83:{c.instructions+=2;NFSU2_TR(0x74cf83);
w4(R+12,u32(0x5836d0ull));
}
B74cf88:{NFSU2_TR(0x74cf88);
w4(R+20,u32(0x598ec0ull));
}
B74cf8d:L74cf8d:{c.instructions+=2;NFSU2_TR(0x74cf8d);
u8 U[4];
w4(U+0,u32(0xd6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf92:{NFSU2_TR(0x74cf92);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cf94ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74cf94:L74cf94:{c.instructions+=4;NFSU2_TR(0x74cf94);
__builtin_memmove((R+24),(R+0),4);
}
B74cf96:{NFSU2_TR(0x74cf96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74cf99:{NFSU2_TR(0x74cf99);
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
B74cf9b:{NFSU2_TR(0x74cf9b);
if(r1(R+518)){TAIL_STATIC(0x74d00cu,74d);}
}
B74cf9d:L74cf9d:{c.instructions+=4;NFSU2_TR(0x74cf9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cf9e:{NFSU2_TR(0x74cf9e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74cfa0:{NFSU2_TR(0x74cfa0);
w4(R+4,u32(0x35bull));
}
B74cfa5:{NFSU2_TR(0x74cfa5);
__builtin_memmove((R+28),(R+24),4);
}
B74cfa7:L74cfa7:{c.instructions+=1;NFSU2_TR(0x74cfa7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74cfa9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74cfa7u);}goto L74cfa7;}
}
B74cfa9:L74cfa9:{c.instructions+=8;NFSU2_TR(0x74cfa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74cfad:{NFSU2_TR(0x74cfad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cfae:{NFSU2_TR(0x74cfae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x534ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74cfb4:{NFSU2_TR(0x74cfb4);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cfb6:{NFSU2_TR(0x74cfb6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cfb7:{NFSU2_TR(0x74cfb7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B74cfb9:{NFSU2_TR(0x74cfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74cfbc:{NFSU2_TR(0x74cfbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cfc1ull));
TAIL_STATIC(0x741650u,741);
}
B74cfc1:L74cfc1:{c.instructions+=6;NFSU2_TR(0x74cfc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74cfc5:{NFSU2_TR(0x74cfc5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cfc6:{NFSU2_TR(0x74cfc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x574ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74cfcc:{NFSU2_TR(0x74cfcc);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cfce:{NFSU2_TR(0x74cfce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cfcf:{NFSU2_TR(0x74cfcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cfd4ull));
TAIL_STATIC(0x741650u,741);
}
B74cfd4:L74cfd4:{c.instructions+=2;NFSU2_TR(0x74cfd4);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cfd9:{NFSU2_TR(0x74cfd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cfdeull));
TAIL_STATIC(0x754230u,754);
}
B74cfde:L74cfde:{c.instructions+=5;NFSU2_TR(0x74cfde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B74cfe1:{NFSU2_TR(0x74cfe1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74cfe3:{NFSU2_TR(0x74cfe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74cfe6:{NFSU2_TR(0x74cfe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74cfe7:{NFSU2_TR(0x74cfe7);
if(r1(R+518)){{goto L74cff4;}}
}
B74cfe9:L74cfe9:{c.instructions+=3;NFSU2_TR(0x74cfe9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cfeb:{NFSU2_TR(0x74cfeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74cfec:{NFSU2_TR(0x74cfec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74cff1ull));
TAIL_STATIC(0x754410u,754);
}
B74cff1:L74cff1:{c.instructions+=1;NFSU2_TR(0x74cff1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74cff4:L74cff4:{c.instructions+=3;NFSU2_TR(0x74cff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74cffa:{NFSU2_TR(0x74cffa);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74cfff:{NFSU2_TR(0x74cfff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x64ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x74d006u,74d);
}
XIT:NFSU2_TR_EXIT(0x74c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
