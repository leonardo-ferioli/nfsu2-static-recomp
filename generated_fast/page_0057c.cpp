#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_60a(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x57c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x57c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_57c(u8* __restrict R,Cpu& c);
u32 page_57c(Cpu& c){return body_57c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_57c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x57c001:goto L57c001;
case 0x57c003:goto L57c003;
case 0x57c004:c.instructions+=2;goto B57c004;
case 0x57c006:c.instructions+=1;goto B57c006;
case 0x57c00b:goto L57c00b;
case 0x57c015:c.instructions+=3;goto B57c015;
case 0x57c016:c.instructions+=2;goto B57c016;
case 0x57c017:c.instructions+=1;goto B57c017;
case 0x57c01a:goto L57c01a;
case 0x57c01f:goto L57c01f;
case 0x57c020:c.instructions+=2;goto B57c020;
case 0x57c025:c.instructions+=1;goto B57c025;
case 0x57c02a:goto L57c02a;
case 0x57c02d:c.instructions+=2;goto B57c02d;
case 0x57c02f:c.instructions+=1;goto B57c02f;
case 0x57c031:goto L57c031;
case 0x57c034:c.instructions+=2;goto B57c034;
case 0x57c036:c.instructions+=1;goto B57c036;
case 0x57c038:goto L57c038;
case 0x57c03e:c.instructions+=2;goto B57c03e;
case 0x57c041:c.instructions+=1;goto B57c041;
case 0x57c043:goto L57c043;
case 0x57c045:c.instructions+=1;goto B57c045;
case 0x57c047:goto L57c047;
case 0x57c049:goto L57c049;
case 0x57c04f:c.instructions+=2;goto B57c04f;
case 0x57c050:c.instructions+=1;goto B57c050;
case 0x57c055:goto L57c055;
case 0x57c05b:c.instructions+=2;goto B57c05b;
case 0x57c05c:c.instructions+=1;goto B57c05c;
case 0x57c061:goto L57c061;
case 0x57c062:c.instructions+=1;goto B57c062;
case 0x57c067:goto L57c067;
case 0x57c06a:c.instructions+=4;goto B57c06a;
case 0x57c074:c.instructions+=3;goto B57c074;
case 0x57c075:c.instructions+=2;goto B57c075;
case 0x57c076:c.instructions+=1;goto B57c076;
case 0x57c080:goto L57c080;
case 0x57c081:c.instructions+=4;goto B57c081;
case 0x57c083:c.instructions+=3;goto B57c083;
case 0x57c086:c.instructions+=2;goto B57c086;
case 0x57c088:c.instructions+=1;goto B57c088;
case 0x57c08a:goto L57c08a;
case 0x57c08c:c.instructions+=2;goto B57c08c;
case 0x57c08d:c.instructions+=1;goto B57c08d;
case 0x57c090:goto L57c090;
case 0x57c091:c.instructions+=2;goto B57c091;
case 0x57c092:c.instructions+=1;goto B57c092;
case 0x57c097:goto L57c097;
case 0x57c09d:c.instructions+=3;goto B57c09d;
case 0x57c0a3:c.instructions+=2;goto B57c0a3;
case 0x57c0a5:c.instructions+=1;goto B57c0a5;
case 0x57c0a7:goto L57c0a7;
case 0x57c0a9:c.instructions+=2;goto B57c0a9;
case 0x57c0ab:c.instructions+=1;goto B57c0ab;
case 0x57c0b0:goto L57c0b0;
case 0x57c0b3:c.instructions+=14;goto B57c0b3;
case 0x57c0b5:c.instructions+=13;goto B57c0b5;
case 0x57c0b8:c.instructions+=12;goto B57c0b8;
case 0x57c0ba:c.instructions+=11;goto B57c0ba;
case 0x57c0bd:c.instructions+=10;goto B57c0bd;
case 0x57c0c3:c.instructions+=9;goto B57c0c3;
case 0x57c0c9:c.instructions+=8;goto B57c0c9;
case 0x57c0cb:c.instructions+=7;goto B57c0cb;
case 0x57c0ce:c.instructions+=6;goto B57c0ce;
case 0x57c0d0:c.instructions+=5;goto B57c0d0;
case 0x57c0d4:c.instructions+=4;goto B57c0d4;
case 0x57c0d7:c.instructions+=3;goto B57c0d7;
case 0x57c0d8:c.instructions+=2;goto B57c0d8;
case 0x57c0da:c.instructions+=1;goto B57c0da;
case 0x57c0df:goto L57c0df;
case 0x57c0e4:c.instructions+=2;goto B57c0e4;
case 0x57c0e7:c.instructions+=1;goto B57c0e7;
case 0x57c0e9:goto L57c0e9;
case 0x57c0ef:c.instructions+=2;goto B57c0ef;
case 0x57c0f5:c.instructions+=1;goto B57c0f5;
case 0x57c0f7:goto L57c0f7;
case 0x57c0fe:c.instructions+=2;goto B57c0fe;
case 0x57c104:c.instructions+=1;goto B57c104;
case 0x57c109:goto L57c109;
case 0x57c10f:c.instructions+=5;goto B57c10f;
case 0x57c110:c.instructions+=4;goto B57c110;
case 0x57c112:c.instructions+=3;goto B57c112;
case 0x57c11c:c.instructions+=2;goto B57c11c;
case 0x57c120:c.instructions+=1;goto B57c120;
case 0x57c125:goto L57c125;
case 0x57c12b:c.instructions+=5;goto B57c12b;
case 0x57c131:c.instructions+=4;goto B57c131;
case 0x57c135:c.instructions+=3;goto B57c135;
case 0x57c13b:c.instructions+=2;goto B57c13b;
case 0x57c13d:c.instructions+=1;goto B57c13d;
case 0x57c13f:goto L57c13f;
case 0x57c141:goto L57c141;
case 0x57c147:c.instructions+=3;goto B57c147;
case 0x57c14d:c.instructions+=2;goto B57c14d;
case 0x57c153:c.instructions+=1;goto B57c153;
case 0x57c155:goto L57c155;
case 0x57c157:c.instructions+=13;goto B57c157;
case 0x57c15a:c.instructions+=12;goto B57c15a;
case 0x57c15c:c.instructions+=11;goto B57c15c;
case 0x57c15f:c.instructions+=10;goto B57c15f;
case 0x57c162:c.instructions+=9;goto B57c162;
case 0x57c164:c.instructions+=8;goto B57c164;
case 0x57c167:c.instructions+=7;goto B57c167;
case 0x57c16a:c.instructions+=6;goto B57c16a;
case 0x57c16c:c.instructions+=5;goto B57c16c;
case 0x57c16d:c.instructions+=4;goto B57c16d;
case 0x57c16e:c.instructions+=3;goto B57c16e;
case 0x57c170:c.instructions+=2;goto B57c170;
case 0x57c171:c.instructions+=1;goto B57c171;
case 0x57c174:goto L57c174;
case 0x57c176:c.instructions+=4;goto B57c176;
case 0x57c177:c.instructions+=3;goto B57c177;
case 0x57c178:c.instructions+=2;goto B57c178;
case 0x57c179:c.instructions+=1;goto B57c179;
case 0x57c180:goto L57c180;
case 0x57c186:c.instructions+=4;goto B57c186;
case 0x57c187:c.instructions+=3;goto B57c187;
case 0x57c189:c.instructions+=2;goto B57c189;
case 0x57c18d:c.instructions+=1;goto B57c18d;
case 0x57c192:goto L57c192;
case 0x57c197:c.instructions+=2;goto B57c197;
case 0x57c19b:c.instructions+=1;goto B57c19b;
case 0x57c1a0:goto L57c1a0;
case 0x57c1a5:c.instructions+=7;goto B57c1a5;
case 0x57c1a9:c.instructions+=6;goto B57c1a9;
case 0x57c1aa:c.instructions+=5;goto B57c1aa;
case 0x57c1ac:c.instructions+=4;goto B57c1ac;
case 0x57c1b2:c.instructions+=3;goto B57c1b2;
case 0x57c1bd:c.instructions+=2;goto B57c1bd;
case 0x57c1c2:c.instructions+=1;goto B57c1c2;
case 0x57c1c7:goto L57c1c7;
case 0x57c1c8:c.instructions+=2;goto B57c1c8;
case 0x57c1ce:c.instructions+=1;goto B57c1ce;
case 0x57c1d0:goto L57c1d0;
case 0x57c1d1:c.instructions+=9;goto B57c1d1;
case 0x57c1d2:c.instructions+=8;goto B57c1d2;
case 0x57c1d3:c.instructions+=7;goto B57c1d3;
case 0x57c1d7:c.instructions+=6;goto B57c1d7;
case 0x57c1d9:c.instructions+=5;goto B57c1d9;
case 0x57c1da:c.instructions+=4;goto B57c1da;
case 0x57c1dc:c.instructions+=3;goto B57c1dc;
case 0x57c1e2:c.instructions+=2;goto B57c1e2;
case 0x57c1e6:c.instructions+=1;goto B57c1e6;
case 0x57c1eb:goto L57c1eb;
case 0x57c1ee:c.instructions+=12;goto B57c1ee;
case 0x57c1f3:c.instructions+=11;goto B57c1f3;
case 0x57c1f9:c.instructions+=10;goto B57c1f9;
case 0x57c1fc:c.instructions+=9;goto B57c1fc;
case 0x57c201:c.instructions+=8;goto B57c201;
case 0x57c203:c.instructions+=7;goto B57c203;
case 0x57c209:c.instructions+=6;goto B57c209;
case 0x57c20f:c.instructions+=5;goto B57c20f;
case 0x57c211:c.instructions+=4;goto B57c211;
case 0x57c213:c.instructions+=3;goto B57c213;
case 0x57c219:c.instructions+=2;goto B57c219;
case 0x57c21f:c.instructions+=1;goto B57c21f;
case 0x57c221:goto L57c221;
case 0x57c228:c.instructions+=1;goto B57c228;
case 0x57c22d:goto L57c22d;
case 0x57c232:c.instructions+=3;goto B57c232;
case 0x57c233:c.instructions+=2;goto B57c233;
case 0x57c235:c.instructions+=1;goto B57c235;
case 0x57c237:goto L57c237;
case 0x57c238:c.instructions+=3;goto B57c238;
case 0x57c239:c.instructions+=2;goto B57c239;
case 0x57c23a:c.instructions+=1;goto B57c23a;
case 0x57c240:goto L57c240;
case 0x57c242:c.instructions+=18;goto B57c242;
case 0x57c247:c.instructions+=17;goto B57c247;
case 0x57c24d:c.instructions+=16;goto B57c24d;
case 0x57c24e:c.instructions+=15;goto B57c24e;
case 0x57c255:c.instructions+=14;goto B57c255;
case 0x57c258:c.instructions+=13;goto B57c258;
case 0x57c259:c.instructions+=12;goto B57c259;
case 0x57c25a:c.instructions+=11;goto B57c25a;
case 0x57c25c:c.instructions+=10;goto B57c25c;
case 0x57c25d:c.instructions+=9;goto B57c25d;
case 0x57c25e:c.instructions+=8;goto B57c25e;
case 0x57c262:c.instructions+=7;goto B57c262;
case 0x57c265:c.instructions+=6;goto B57c265;
case 0x57c268:c.instructions+=5;goto B57c268;
case 0x57c26b:c.instructions+=4;goto B57c26b;
case 0x57c273:c.instructions+=3;goto B57c273;
case 0x57c276:c.instructions+=2;goto B57c276;
case 0x57c27e:c.instructions+=1;goto B57c27e;
case 0x57c283:goto L57c283;
case 0x57c288:c.instructions+=4;goto B57c288;
case 0x57c28a:c.instructions+=3;goto B57c28a;
case 0x57c28c:c.instructions+=2;goto B57c28c;
case 0x57c28d:c.instructions+=1;goto B57c28d;
case 0x57c292:goto L57c292;
case 0x57c295:c.instructions+=17;goto B57c295;
case 0x57c29c:c.instructions+=16;goto B57c29c;
case 0x57c2a2:c.instructions+=15;goto B57c2a2;
case 0x57c2a9:c.instructions+=14;goto B57c2a9;
case 0x57c2ac:c.instructions+=13;goto B57c2ac;
case 0x57c2ae:c.instructions+=12;goto B57c2ae;
case 0x57c2b1:c.instructions+=11;goto B57c2b1;
case 0x57c2b4:c.instructions+=10;goto B57c2b4;
case 0x57c2b9:c.instructions+=9;goto B57c2b9;
case 0x57c2bc:c.instructions+=8;goto B57c2bc;
case 0x57c2bf:c.instructions+=7;goto B57c2bf;
case 0x57c2c3:c.instructions+=6;goto B57c2c3;
case 0x57c2c7:c.instructions+=5;goto B57c2c7;
case 0x57c2ca:c.instructions+=4;goto B57c2ca;
case 0x57c2cd:c.instructions+=3;goto B57c2cd;
case 0x57c2ce:c.instructions+=2;goto B57c2ce;
case 0x57c2d2:c.instructions+=1;goto B57c2d2;
case 0x57c2d4:goto L57c2d4;
case 0x57c2d7:c.instructions+=7;goto B57c2d7;
case 0x57c2dd:c.instructions+=6;goto B57c2dd;
case 0x57c2e3:c.instructions+=5;goto B57c2e3;
case 0x57c2e5:c.instructions+=4;goto B57c2e5;
case 0x57c2eb:c.instructions+=3;goto B57c2eb;
case 0x57c2f1:c.instructions+=2;goto B57c2f1;
case 0x57c2f7:c.instructions+=1;goto B57c2f7;
case 0x57c2fc:goto L57c2fc;
case 0x57c2fe:goto L57c2fe;
case 0x57c302:c.instructions+=9;goto B57c302;
case 0x57c303:c.instructions+=8;goto B57c303;
case 0x57c304:c.instructions+=7;goto B57c304;
case 0x57c305:c.instructions+=6;goto B57c305;
case 0x57c307:c.instructions+=5;goto B57c307;
case 0x57c308:c.instructions+=4;goto B57c308;
case 0x57c309:c.instructions+=3;goto B57c309;
case 0x57c310:c.instructions+=2;goto B57c310;
case 0x57c313:c.instructions+=1;goto B57c313;
case 0x57c320:goto L57c320;
case 0x57c330:goto L57c330;
case 0x57c334:c.instructions+=11;goto B57c334;
case 0x57c335:c.instructions+=10;goto B57c335;
case 0x57c339:c.instructions+=9;goto B57c339;
case 0x57c33a:c.instructions+=8;goto B57c33a;
case 0x57c33b:c.instructions+=7;goto B57c33b;
case 0x57c33d:c.instructions+=6;goto B57c33d;
case 0x57c343:c.instructions+=5;goto B57c343;
case 0x57c344:c.instructions+=4;goto B57c344;
case 0x57c345:c.instructions+=3;goto B57c345;
case 0x57c34a:c.instructions+=2;goto B57c34a;
case 0x57c350:c.instructions+=1;goto B57c350;
case 0x57c355:goto L57c355;
case 0x57c357:c.instructions+=2;goto B57c357;
case 0x57c359:c.instructions+=1;goto B57c359;
case 0x57c35e:goto L57c35e;
case 0x57c360:c.instructions+=1;goto B57c360;
case 0x57c362:goto L57c362;
case 0x57c365:c.instructions+=1;goto B57c365;
case 0x57c367:goto L57c367;
case 0x57c369:c.instructions+=2;goto B57c369;
case 0x57c36b:c.instructions+=1;goto B57c36b;
case 0x57c36d:goto L57c36d;
case 0x57c36e:c.instructions+=3;goto B57c36e;
case 0x57c36f:c.instructions+=2;goto B57c36f;
case 0x57c370:c.instructions+=1;goto B57c370;
case 0x57c371:goto L57c371;
case 0x57c373:c.instructions+=7;goto B57c373;
case 0x57c376:c.instructions+=6;goto B57c376;
case 0x57c378:c.instructions+=5;goto B57c378;
case 0x57c37b:c.instructions+=4;goto B57c37b;
case 0x57c380:c.instructions+=3;goto B57c380;
case 0x57c381:c.instructions+=2;goto B57c381;
case 0x57c382:c.instructions+=1;goto B57c382;
case 0x57c387:goto L57c387;
case 0x57c38a:goto L57c38a;
case 0x57c38b:c.instructions+=3;goto B57c38b;
case 0x57c38c:c.instructions+=2;goto B57c38c;
case 0x57c38d:c.instructions+=1;goto B57c38d;
case 0x57c390:goto L57c390;
case 0x57c391:c.instructions+=1;goto B57c391;
case 0x57c393:goto L57c393;
case 0x57c395:c.instructions+=2;goto B57c395;
case 0x57c396:c.instructions+=1;goto B57c396;
case 0x57c39b:goto L57c39b;
case 0x57c39d:c.instructions+=4;goto B57c39d;
case 0x57c3a2:c.instructions+=3;goto B57c3a2;
case 0x57c3a4:c.instructions+=2;goto B57c3a4;
case 0x57c3a5:c.instructions+=1;goto B57c3a5;
case 0x57c3aa:goto L57c3aa;
case 0x57c3ad:c.instructions+=3;goto B57c3ad;
case 0x57c3ae:c.instructions+=2;goto B57c3ae;
case 0x57c3b1:c.instructions+=1;goto B57c3b1;
case 0x57c3b3:goto L57c3b3;
case 0x57c3b4:c.instructions+=1;goto B57c3b4;
case 0x57c3c0:goto L57c3c0;
case 0x57c3c1:c.instructions+=1;goto B57c3c1;
case 0x57c3c3:goto L57c3c3;
case 0x57c3c5:c.instructions+=3;goto B57c3c5;
case 0x57c3c6:c.instructions+=2;goto B57c3c6;
case 0x57c3cd:c.instructions+=1;goto B57c3cd;
case 0x57c3d2:goto L57c3d2;
case 0x57c3d5:c.instructions+=3;goto B57c3d5;
case 0x57c3d6:c.instructions+=2;goto B57c3d6;
case 0x57c3d9:c.instructions+=1;goto B57c3d9;
case 0x57c3db:goto L57c3db;
case 0x57c3e2:c.instructions+=2;goto B57c3e2;
case 0x57c3e3:c.instructions+=1;goto B57c3e3;
case 0x57c3f0:goto L57c3f0;
case 0x57c3f3:c.instructions+=6;goto B57c3f3;
case 0x57c3f4:c.instructions+=5;goto B57c3f4;
case 0x57c3f6:c.instructions+=4;goto B57c3f6;
case 0x57c3f9:c.instructions+=3;goto B57c3f9;
case 0x57c3fb:c.instructions+=2;goto B57c3fb;
case 0x57c403:c.instructions+=1;goto B57c403;
case 0x57c409:goto L57c409;
case 0x57c40a:c.instructions+=4;goto B57c40a;
case 0x57c40d:c.instructions+=3;goto B57c40d;
case 0x57c40e:c.instructions+=2;goto B57c40e;
case 0x57c412:c.instructions+=1;goto B57c412;
case 0x57c413:goto L57c413;
case 0x57c417:c.instructions+=10;goto B57c417;
case 0x57c419:c.instructions+=9;goto B57c419;
case 0x57c41c:c.instructions+=8;goto B57c41c;
case 0x57c41f:c.instructions+=7;goto B57c41f;
case 0x57c422:c.instructions+=6;goto B57c422;
case 0x57c425:c.instructions+=5;goto B57c425;
case 0x57c427:c.instructions+=4;goto B57c427;
case 0x57c42a:c.instructions+=3;goto B57c42a;
case 0x57c42c:c.instructions+=2;goto B57c42c;
case 0x57c42e:c.instructions+=1;goto B57c42e;
case 0x57c431:goto L57c431;
case 0x57c433:goto L57c433;
case 0x57c435:c.instructions+=1;goto B57c435;
case 0x57c438:goto L57c438;
case 0x57c43a:goto L57c43a;
case 0x57c43d:c.instructions+=2;goto B57c43d;
case 0x57c43f:c.instructions+=1;goto B57c43f;
case 0x57c441:goto L57c441;
case 0x57c444:c.instructions+=3;goto B57c444;
case 0x57c446:c.instructions+=2;goto B57c446;
case 0x57c44a:c.instructions+=1;goto B57c44a;
case 0x57c44c:goto L57c44c;
case 0x57c44f:c.instructions+=5;goto B57c44f;
case 0x57c450:c.instructions+=4;goto B57c450;
case 0x57c453:c.instructions+=3;goto B57c453;
case 0x57c454:c.instructions+=2;goto B57c454;
case 0x57c455:c.instructions+=1;goto B57c455;
case 0x57c457:goto L57c457;
case 0x57c45a:c.instructions+=1;goto B57c45a;
case 0x57c45c:goto L57c45c;
case 0x57c45f:c.instructions+=3;goto B57c45f;
case 0x57c460:c.instructions+=2;goto B57c460;
case 0x57c461:c.instructions+=1;goto B57c461;
case 0x57c463:goto L57c463;
case 0x57c466:goto L57c466;
case 0x57c46c:c.instructions+=3;goto B57c46c;
case 0x57c46d:c.instructions+=2;goto B57c46d;
case 0x57c46e:c.instructions+=1;goto B57c46e;
case 0x57c473:goto L57c473;
case 0x57c477:c.instructions+=9;goto B57c477;
case 0x57c47b:c.instructions+=8;goto B57c47b;
case 0x57c47e:c.instructions+=7;goto B57c47e;
case 0x57c481:c.instructions+=6;goto B57c481;
case 0x57c482:c.instructions+=5;goto B57c482;
case 0x57c485:c.instructions+=4;goto B57c485;
case 0x57c487:c.instructions+=3;goto B57c487;
case 0x57c48b:c.instructions+=2;goto B57c48b;
case 0x57c48f:c.instructions+=1;goto B57c48f;
case 0x57c491:goto L57c491;
case 0x57c492:c.instructions+=2;goto B57c492;
case 0x57c493:c.instructions+=1;goto B57c493;
case 0x57c494:goto L57c494;
case 0x57c495:c.instructions+=2;goto B57c495;
case 0x57c498:c.instructions+=1;goto B57c498;
case 0x57c4a0:goto L57c4a0;
case 0x57c4a2:c.instructions+=6;goto B57c4a2;
case 0x57c4a7:c.instructions+=5;goto B57c4a7;
case 0x57c4ad:c.instructions+=4;goto B57c4ad;
case 0x57c4ae:c.instructions+=3;goto B57c4ae;
case 0x57c4b5:c.instructions+=2;goto B57c4b5;
case 0x57c4b6:c.instructions+=1;goto B57c4b6;
case 0x57c4b7:goto L57c4b7;
case 0x57c4be:c.instructions+=1;goto B57c4be;
case 0x57c4c0:goto L57c4c0;
case 0x57c4c6:c.instructions+=2;goto B57c4c6;
case 0x57c4cb:c.instructions+=1;goto B57c4cb;
case 0x57c4d0:goto L57c4d0;
case 0x57c4d2:c.instructions+=1;goto B57c4d2;
case 0x57c4d4:goto L57c4d4;
case 0x57c4d7:c.instructions+=2;goto B57c4d7;
case 0x57c4d9:c.instructions+=1;goto B57c4d9;
case 0x57c4db:goto L57c4db;
case 0x57c4dd:c.instructions+=2;goto B57c4dd;
case 0x57c4df:c.instructions+=1;goto B57c4df;
case 0x57c4e1:goto L57c4e1;
case 0x57c4e7:c.instructions+=2;goto B57c4e7;
case 0x57c4e8:c.instructions+=1;goto B57c4e8;
case 0x57c4ed:goto L57c4ed;
case 0x57c4ef:c.instructions+=5;goto B57c4ef;
case 0x57c4f2:c.instructions+=4;goto B57c4f2;
case 0x57c4f6:c.instructions+=3;goto B57c4f6;
case 0x57c4f8:c.instructions+=2;goto B57c4f8;
case 0x57c500:c.instructions+=1;goto B57c500;
case 0x57c502:goto L57c502;
case 0x57c508:c.instructions+=12;goto B57c508;
case 0x57c50c:c.instructions+=11;goto B57c50c;
case 0x57c510:c.instructions+=10;goto B57c510;
case 0x57c511:c.instructions+=9;goto B57c511;
case 0x57c517:c.instructions+=8;goto B57c517;
case 0x57c51b:c.instructions+=7;goto B57c51b;
case 0x57c51e:c.instructions+=6;goto B57c51e;
case 0x57c51f:c.instructions+=5;goto B57c51f;
case 0x57c522:c.instructions+=4;goto B57c522;
case 0x57c523:c.instructions+=3;goto B57c523;
case 0x57c52a:c.instructions+=2;goto B57c52a;
case 0x57c52d:c.instructions+=1;goto B57c52d;
case 0x57c532:goto L57c532;
case 0x57c535:c.instructions+=2;goto B57c535;
case 0x57c537:c.instructions+=1;goto B57c537;
case 0x57c539:goto L57c539;
case 0x57c53b:c.instructions+=11;goto B57c53b;
case 0x57c53e:c.instructions+=10;goto B57c53e;
case 0x57c540:c.instructions+=9;goto B57c540;
case 0x57c543:c.instructions+=8;goto B57c543;
case 0x57c549:c.instructions+=7;goto B57c549;
case 0x57c54a:c.instructions+=6;goto B57c54a;
case 0x57c54c:c.instructions+=5;goto B57c54c;
case 0x57c552:c.instructions+=4;goto B57c552;
case 0x57c555:c.instructions+=3;goto B57c555;
case 0x57c557:c.instructions+=2;goto B57c557;
case 0x57c558:c.instructions+=1;goto B57c558;
case 0x57c55d:goto L57c55d;
case 0x57c562:c.instructions+=2;goto B57c562;
case 0x57c563:c.instructions+=1;goto B57c563;
case 0x57c568:goto L57c568;
case 0x57c56e:c.instructions+=3;goto B57c56e;
case 0x57c56f:c.instructions+=2;goto B57c56f;
case 0x57c570:c.instructions+=1;goto B57c570;
case 0x57c575:goto L57c575;
case 0x57c578:c.instructions+=1;goto B57c578;
case 0x57c57d:goto L57c57d;
case 0x57c57f:goto L57c57f;
case 0x57c585:c.instructions+=9;goto B57c585;
case 0x57c587:c.instructions+=8;goto B57c587;
case 0x57c58c:c.instructions+=7;goto B57c58c;
case 0x57c58f:c.instructions+=6;goto B57c58f;
case 0x57c593:c.instructions+=5;goto B57c593;
case 0x57c599:c.instructions+=4;goto B57c599;
case 0x57c59a:c.instructions+=3;goto B57c59a;
case 0x57c5a1:c.instructions+=2;goto B57c5a1;
case 0x57c5a4:c.instructions+=1;goto B57c5a4;
case 0x57c5b0:goto L57c5b0;
case 0x57c5b6:c.instructions+=10;goto B57c5b6;
case 0x57c5b7:c.instructions+=9;goto B57c5b7;
case 0x57c5b8:c.instructions+=8;goto B57c5b8;
case 0x57c5bf:c.instructions+=7;goto B57c5bf;
case 0x57c5c0:c.instructions+=6;goto B57c5c0;
case 0x57c5c1:c.instructions+=5;goto B57c5c1;
case 0x57c5c3:c.instructions+=4;goto B57c5c3;
case 0x57c5c6:c.instructions+=3;goto B57c5c6;
case 0x57c5c7:c.instructions+=2;goto B57c5c7;
case 0x57c5c8:c.instructions+=1;goto B57c5c8;
case 0x57c5cd:goto L57c5cd;
case 0x57c5d4:c.instructions+=10;goto B57c5d4;
case 0x57c5d6:c.instructions+=9;goto B57c5d6;
case 0x57c5d9:c.instructions+=8;goto B57c5d9;
case 0x57c5db:c.instructions+=7;goto B57c5db;
case 0x57c5dd:c.instructions+=6;goto B57c5dd;
case 0x57c5e4:c.instructions+=5;goto B57c5e4;
case 0x57c5e7:c.instructions+=4;goto B57c5e7;
case 0x57c5ea:c.instructions+=3;goto B57c5ea;
case 0x57c5ed:c.instructions+=2;goto B57c5ed;
case 0x57c5f0:c.instructions+=1;goto B57c5f0;
case 0x57c5f2:goto L57c5f2;
case 0x57c5f3:c.instructions+=1;goto B57c5f3;
case 0x57c5f8:goto L57c5f8;
case 0x57c5ff:c.instructions+=1;goto B57c5ff;
case 0x57c602:goto L57c602;
case 0x57c605:c.instructions+=1;goto B57c605;
case 0x57c607:goto L57c607;
case 0x57c609:c.instructions+=3;goto B57c609;
case 0x57c60b:c.instructions+=2;goto B57c60b;
case 0x57c60c:c.instructions+=1;goto B57c60c;
case 0x57c611:goto L57c611;
case 0x57c614:c.instructions+=2;goto B57c614;
case 0x57c616:c.instructions+=1;goto B57c616;
case 0x57c618:goto L57c618;
case 0x57c61a:c.instructions+=3;goto B57c61a;
case 0x57c61b:c.instructions+=2;goto B57c61b;
case 0x57c622:c.instructions+=1;goto B57c622;
case 0x57c627:goto L57c627;
case 0x57c62a:goto L57c62a;
case 0x57c62b:c.instructions+=1;goto B57c62b;
case 0x57c630:goto L57c630;
case 0x57c633:c.instructions+=3;goto B57c633;
case 0x57c635:c.instructions+=2;goto B57c635;
case 0x57c63c:c.instructions+=1;goto B57c63c;
case 0x57c63e:goto L57c63e;
case 0x57c641:c.instructions+=1;goto B57c641;
case 0x57c643:goto L57c643;
case 0x57c646:c.instructions+=5;goto B57c646;
case 0x57c649:c.instructions+=4;goto B57c649;
case 0x57c64c:c.instructions+=3;goto B57c64c;
case 0x57c64f:c.instructions+=2;goto B57c64f;
case 0x57c652:c.instructions+=1;goto B57c652;
case 0x57c657:goto L57c657;
case 0x57c658:c.instructions+=1;goto B57c658;
case 0x57c65d:goto L57c65d;
case 0x57c660:c.instructions+=2;goto B57c660;
case 0x57c662:c.instructions+=1;goto B57c662;
case 0x57c664:goto L57c664;
case 0x57c665:c.instructions+=1;goto B57c665;
case 0x57c66a:goto L57c66a;
case 0x57c66d:c.instructions+=3;goto B57c66d;
case 0x57c670:c.instructions+=2;goto B57c670;
case 0x57c673:c.instructions+=1;goto B57c673;
case 0x57c678:goto L57c678;
case 0x57c67b:c.instructions+=1;goto B57c67b;
case 0x57c67d:goto L57c67d;
case 0x57c681:c.instructions+=6;goto B57c681;
case 0x57c682:c.instructions+=5;goto B57c682;
case 0x57c686:c.instructions+=4;goto B57c686;
case 0x57c687:c.instructions+=3;goto B57c687;
case 0x57c688:c.instructions+=2;goto B57c688;
case 0x57c689:c.instructions+=1;goto B57c689;
case 0x57c68e:goto L57c68e;
case 0x57c691:c.instructions+=2;goto B57c691;
case 0x57c693:c.instructions+=1;goto B57c693;
case 0x57c695:goto L57c695;
case 0x57c699:c.instructions+=1;goto B57c699;
case 0x57c69c:goto L57c69c;
case 0x57c69f:c.instructions+=2;goto B57c69f;
case 0x57c6a1:c.instructions+=1;goto B57c6a1;
case 0x57c6a3:goto L57c6a3;
case 0x57c6a8:c.instructions+=2;goto B57c6a8;
case 0x57c6aa:c.instructions+=1;goto B57c6aa;
case 0x57c6ac:goto L57c6ac;
case 0x57c6ad:c.instructions+=9;goto B57c6ad;
case 0x57c6b1:c.instructions+=8;goto B57c6b1;
case 0x57c6b2:c.instructions+=7;goto B57c6b2;
case 0x57c6b6:c.instructions+=6;goto B57c6b6;
case 0x57c6b7:c.instructions+=5;goto B57c6b7;
case 0x57c6bb:c.instructions+=4;goto B57c6bb;
case 0x57c6c0:c.instructions+=3;goto B57c6c0;
case 0x57c6c5:c.instructions+=2;goto B57c6c5;
case 0x57c6ca:c.instructions+=1;goto B57c6ca;
case 0x57c6cf:goto L57c6cf;
case 0x57c6d1:c.instructions+=5;goto B57c6d1;
case 0x57c6d3:c.instructions+=4;goto B57c6d3;
case 0x57c6d7:c.instructions+=3;goto B57c6d7;
case 0x57c6d9:c.instructions+=2;goto B57c6d9;
case 0x57c6da:c.instructions+=1;goto B57c6da;
case 0x57c6df:goto L57c6df;
case 0x57c6e1:c.instructions+=2;goto B57c6e1;
case 0x57c6e2:c.instructions+=1;goto B57c6e2;
case 0x57c6e7:goto L57c6e7;
case 0x57c6e8:c.instructions+=2;goto B57c6e8;
case 0x57c6ea:c.instructions+=1;goto B57c6ea;
case 0x57c6ef:goto L57c6ef;
case 0x57c6f2:c.instructions+=1;goto B57c6f2;
case 0x57c6f4:goto L57c6f4;
case 0x57c6f9:goto L57c6f9;
case 0x57c6fb:c.instructions+=4;goto B57c6fb;
case 0x57c6fd:c.instructions+=3;goto B57c6fd;
case 0x57c6fe:c.instructions+=2;goto B57c6fe;
case 0x57c6ff:c.instructions+=1;goto B57c6ff;
case 0x57c704:goto L57c704;
case 0x57c706:c.instructions+=2;goto B57c706;
case 0x57c707:c.instructions+=1;goto B57c707;
case 0x57c70c:goto L57c70c;
case 0x57c70d:c.instructions+=2;goto B57c70d;
case 0x57c70f:c.instructions+=1;goto B57c70f;
case 0x57c714:goto L57c714;
case 0x57c717:goto L57c717;
case 0x57c71a:c.instructions+=1;goto B57c71a;
case 0x57c71c:goto L57c71c;
case 0x57c71f:goto L57c71f;
case 0x57c722:c.instructions+=2;goto B57c722;
case 0x57c724:c.instructions+=1;goto B57c724;
case 0x57c726:goto L57c726;
case 0x57c72b:goto L57c72b;
case 0x57c72e:c.instructions+=4;goto B57c72e;
case 0x57c730:c.instructions+=3;goto B57c730;
case 0x57c732:c.instructions+=2;goto B57c732;
case 0x57c733:c.instructions+=1;goto B57c733;
case 0x57c738:goto L57c738;
case 0x57c73a:c.instructions+=2;goto B57c73a;
case 0x57c73b:c.instructions+=1;goto B57c73b;
case 0x57c740:goto L57c740;
case 0x57c741:c.instructions+=2;goto B57c741;
case 0x57c743:c.instructions+=1;goto B57c743;
case 0x57c748:goto L57c748;
case 0x57c74b:c.instructions+=2;goto B57c74b;
case 0x57c74e:c.instructions+=1;goto B57c74e;
case 0x57c750:goto L57c750;
case 0x57c757:c.instructions+=2;goto B57c757;
case 0x57c75a:c.instructions+=1;goto B57c75a;
case 0x57c75c:goto L57c75c;
case 0x57c75f:c.instructions+=4;goto B57c75f;
case 0x57c760:c.instructions+=3;goto B57c760;
case 0x57c761:c.instructions+=2;goto B57c761;
case 0x57c762:c.instructions+=1;goto B57c762;
case 0x57c767:goto L57c767;
case 0x57c76a:c.instructions+=3;goto B57c76a;
case 0x57c76d:c.instructions+=2;goto B57c76d;
case 0x57c76e:c.instructions+=1;goto B57c76e;
case 0x57c771:goto L57c771;
case 0x57c774:goto L57c774;
case 0x57c777:c.instructions+=2;goto B57c777;
case 0x57c779:c.instructions+=1;goto B57c779;
case 0x57c77b:goto L57c77b;
case 0x57c783:c.instructions+=1;goto B57c783;
case 0x57c785:goto L57c785;
case 0x57c788:goto L57c788;
case 0x57c789:c.instructions+=6;goto B57c789;
case 0x57c78b:c.instructions+=5;goto B57c78b;
case 0x57c78c:c.instructions+=4;goto B57c78c;
case 0x57c78d:c.instructions+=3;goto B57c78d;
case 0x57c78e:c.instructions+=2;goto B57c78e;
case 0x57c794:c.instructions+=1;goto B57c794;
case 0x57c7a0:goto L57c7a0;
case 0x57c7a1:c.instructions+=5;goto B57c7a1;
case 0x57c7a2:c.instructions+=4;goto B57c7a2;
case 0x57c7a3:c.instructions+=3;goto B57c7a3;
case 0x57c7a4:c.instructions+=2;goto B57c7a4;
case 0x57c7a6:c.instructions+=1;goto B57c7a6;
case 0x57c7ab:goto L57c7ab;
case 0x57c7ae:c.instructions+=5;goto B57c7ae;
case 0x57c7b2:c.instructions+=4;goto B57c7b2;
case 0x57c7b5:c.instructions+=3;goto B57c7b5;
case 0x57c7b8:c.instructions+=2;goto B57c7b8;
case 0x57c7ba:c.instructions+=1;goto B57c7ba;
case 0x57c7bc:goto L57c7bc;
case 0x57c7be:c.instructions+=1;goto B57c7be;
case 0x57c7c0:goto L57c7c0;
case 0x57c7c3:c.instructions+=2;goto B57c7c3;
case 0x57c7c4:c.instructions+=1;goto B57c7c4;
case 0x57c7c9:goto L57c7c9;
case 0x57c7cc:c.instructions+=2;goto B57c7cc;
case 0x57c7ce:c.instructions+=1;goto B57c7ce;
case 0x57c7d0:goto L57c7d0;
case 0x57c7d3:c.instructions+=6;goto B57c7d3;
case 0x57c7d6:c.instructions+=5;goto B57c7d6;
case 0x57c7d8:c.instructions+=4;goto B57c7d8;
case 0x57c7da:c.instructions+=3;goto B57c7da;
case 0x57c7dc:c.instructions+=2;goto B57c7dc;
case 0x57c7e0:c.instructions+=1;goto B57c7e0;
case 0x57c7e3:goto L57c7e3;
case 0x57c7e5:goto L57c7e5;
case 0x57c7e7:c.instructions+=2;goto B57c7e7;
case 0x57c7eb:c.instructions+=1;goto B57c7eb;
case 0x57c7ee:goto L57c7ee;
case 0x57c7f0:goto L57c7f0;
case 0x57c7f3:c.instructions+=4;goto B57c7f3;
case 0x57c7f5:c.instructions+=3;goto B57c7f5;
case 0x57c7f7:c.instructions+=2;goto B57c7f7;
case 0x57c7fa:c.instructions+=1;goto B57c7fa;
case 0x57c800:goto L57c800;
case 0x57c804:c.instructions+=3;goto B57c804;
case 0x57c805:c.instructions+=2;goto B57c805;
case 0x57c806:c.instructions+=1;goto B57c806;
case 0x57c808:goto L57c808;
case 0x57c80b:c.instructions+=5;goto B57c80b;
case 0x57c80c:c.instructions+=4;goto B57c80c;
case 0x57c80d:c.instructions+=3;goto B57c80d;
case 0x57c80e:c.instructions+=2;goto B57c80e;
case 0x57c80f:c.instructions+=1;goto B57c80f;
case 0x57c812:goto L57c812;
case 0x57c817:c.instructions+=1;goto B57c817;
case 0x57c81c:goto L57c81c;
case 0x57c822:c.instructions+=2;goto B57c822;
case 0x57c823:c.instructions+=1;goto B57c823;
case 0x57c828:goto L57c828;
case 0x57c82c:c.instructions+=4;goto B57c82c;
case 0x57c82e:c.instructions+=3;goto B57c82e;
case 0x57c831:c.instructions+=2;goto B57c831;
case 0x57c833:c.instructions+=1;goto B57c833;
case 0x57c835:goto L57c835;
case 0x57c838:c.instructions+=12;goto B57c838;
case 0x57c83b:c.instructions+=11;goto B57c83b;
case 0x57c83f:c.instructions+=10;goto B57c83f;
case 0x57c842:c.instructions+=9;goto B57c842;
case 0x57c846:c.instructions+=8;goto B57c846;
case 0x57c849:c.instructions+=7;goto B57c849;
case 0x57c84c:c.instructions+=6;goto B57c84c;
case 0x57c84f:c.instructions+=5;goto B57c84f;
case 0x57c852:c.instructions+=4;goto B57c852;
case 0x57c855:c.instructions+=3;goto B57c855;
case 0x57c858:c.instructions+=2;goto B57c858;
case 0x57c85a:c.instructions+=1;goto B57c85a;
case 0x57c85c:goto L57c85c;
case 0x57c85e:goto L57c85e;
case 0x57c863:c.instructions+=11;goto B57c863;
case 0x57c865:c.instructions+=10;goto B57c865;
case 0x57c86b:c.instructions+=9;goto B57c86b;
case 0x57c86e:c.instructions+=8;goto B57c86e;
case 0x57c874:c.instructions+=7;goto B57c874;
case 0x57c87a:c.instructions+=6;goto B57c87a;
case 0x57c87d:c.instructions+=5;goto B57c87d;
case 0x57c880:c.instructions+=4;goto B57c880;
case 0x57c882:c.instructions+=3;goto B57c882;
case 0x57c883:c.instructions+=2;goto B57c883;
case 0x57c885:c.instructions+=1;goto B57c885;
case 0x57c887:goto L57c887;
case 0x57c889:c.instructions+=4;goto B57c889;
case 0x57c88a:c.instructions+=3;goto B57c88a;
case 0x57c88d:c.instructions+=2;goto B57c88d;
case 0x57c88e:c.instructions+=1;goto B57c88e;
case 0x57c893:goto L57c893;
case 0x57c896:c.instructions+=1;goto B57c896;
case 0x57c898:goto L57c898;
case 0x57c89b:c.instructions+=5;goto B57c89b;
case 0x57c89c:c.instructions+=4;goto B57c89c;
case 0x57c89d:c.instructions+=3;goto B57c89d;
case 0x57c89e:c.instructions+=2;goto B57c89e;
case 0x57c89f:c.instructions+=1;goto B57c89f;
case 0x57c8a4:goto L57c8a4;
case 0x57c8a7:goto L57c8a7;
case 0x57c8a9:c.instructions+=4;goto B57c8a9;
case 0x57c8ac:c.instructions+=3;goto B57c8ac;
case 0x57c8af:c.instructions+=2;goto B57c8af;
case 0x57c8b4:c.instructions+=1;goto B57c8b4;
case 0x57c8b9:goto L57c8b9;
case 0x57c8bc:c.instructions+=2;goto B57c8bc;
case 0x57c8be:c.instructions+=1;goto B57c8be;
case 0x57c8c0:goto L57c8c0;
case 0x57c8c5:c.instructions+=2;goto B57c8c5;
case 0x57c8c6:c.instructions+=1;goto B57c8c6;
case 0x57c8cb:goto L57c8cb;
case 0x57c8ce:c.instructions+=3;goto B57c8ce;
case 0x57c8d1:c.instructions+=2;goto B57c8d1;
case 0x57c8d3:c.instructions+=1;goto B57c8d3;
case 0x57c8d5:goto L57c8d5;
case 0x57c8d8:c.instructions+=2;goto B57c8d8;
case 0x57c8da:c.instructions+=1;goto B57c8da;
case 0x57c8dc:goto L57c8dc;
case 0x57c8df:c.instructions+=1;goto B57c8df;
case 0x57c8e1:goto L57c8e1;
case 0x57c8e4:c.instructions+=5;goto B57c8e4;
case 0x57c8e5:c.instructions+=4;goto B57c8e5;
case 0x57c8e6:c.instructions+=3;goto B57c8e6;
case 0x57c8e9:c.instructions+=2;goto B57c8e9;
case 0x57c8ea:c.instructions+=1;goto B57c8ea;
case 0x57c8ef:goto L57c8ef;
case 0x57c8f2:c.instructions+=9;goto B57c8f2;
case 0x57c8f5:c.instructions+=8;goto B57c8f5;
case 0x57c8f6:c.instructions+=7;goto B57c8f6;
case 0x57c8f7:c.instructions+=6;goto B57c8f7;
case 0x57c8f8:c.instructions+=5;goto B57c8f8;
case 0x57c8fb:c.instructions+=4;goto B57c8fb;
case 0x57c8fc:c.instructions+=3;goto B57c8fc;
case 0x57c8ff:c.instructions+=2;goto B57c8ff;
case 0x57c900:c.instructions+=1;goto B57c900;
case 0x57c903:goto L57c903;
case 0x57c908:c.instructions+=2;goto B57c908;
case 0x57c909:c.instructions+=1;goto B57c909;
case 0x57c90e:goto L57c90e;
case 0x57c911:goto L57c911;
case 0x57c912:c.instructions+=4;goto B57c912;
case 0x57c913:c.instructions+=3;goto B57c913;
case 0x57c914:c.instructions+=2;goto B57c914;
case 0x57c915:c.instructions+=1;goto B57c915;
case 0x57c920:goto L57c920;
case 0x57c925:c.instructions+=1;goto B57c925;
case 0x57c92a:goto L57c92a;
case 0x57c92f:c.instructions+=2;goto B57c92f;
case 0x57c934:c.instructions+=1;goto B57c934;
case 0x57c93a:goto L57c93a;
case 0x57c93b:c.instructions+=3;goto B57c93b;
case 0x57c93c:c.instructions+=2;goto B57c93c;
case 0x57c93d:c.instructions+=1;goto B57c93d;
case 0x57c940:goto L57c940;
case 0x57c942:c.instructions+=11;goto B57c942;
case 0x57c944:c.instructions+=10;goto B57c944;
case 0x57c947:c.instructions+=9;goto B57c947;
case 0x57c949:c.instructions+=8;goto B57c949;
case 0x57c94c:c.instructions+=7;goto B57c94c;
case 0x57c94f:c.instructions+=6;goto B57c94f;
case 0x57c952:c.instructions+=5;goto B57c952;
case 0x57c958:c.instructions+=4;goto B57c958;
case 0x57c95b:c.instructions+=3;goto B57c95b;
case 0x57c95d:c.instructions+=2;goto B57c95d;
case 0x57c95f:c.instructions+=1;goto B57c95f;
case 0x57c961:goto L57c961;
case 0x57c964:c.instructions+=2;goto B57c964;
case 0x57c966:c.instructions+=1;goto B57c966;
case 0x57c968:goto L57c968;
case 0x57c96a:goto L57c96a;
case 0x57c96d:c.instructions+=2;goto B57c96d;
case 0x57c96f:c.instructions+=1;goto B57c96f;
case 0x57c971:goto L57c971;
case 0x57c976:c.instructions+=1;goto B57c976;
case 0x57c97b:goto L57c97b;
case 0x57c97e:c.instructions+=3;goto B57c97e;
case 0x57c97f:c.instructions+=2;goto B57c97f;
case 0x57c980:c.instructions+=1;goto B57c980;
case 0x57c983:goto L57c983;
case 0x57c986:c.instructions+=2;goto B57c986;
case 0x57c98b:c.instructions+=1;goto B57c98b;
case 0x57c990:goto L57c990;
case 0x57c996:c.instructions+=3;goto B57c996;
case 0x57c997:c.instructions+=2;goto B57c997;
case 0x57c998:c.instructions+=1;goto B57c998;
case 0x57c99d:goto L57c99d;
case 0x57c9a0:c.instructions+=2;goto B57c9a0;
case 0x57c9a2:c.instructions+=1;goto B57c9a2;
case 0x57c9a4:goto L57c9a4;
case 0x57c9a7:c.instructions+=2;goto B57c9a7;
case 0x57c9a9:c.instructions+=1;goto B57c9a9;
case 0x57c9ab:goto L57c9ab;
case 0x57c9ae:c.instructions+=2;goto B57c9ae;
case 0x57c9b0:c.instructions+=1;goto B57c9b0;
case 0x57c9b2:goto L57c9b2;
case 0x57c9b5:c.instructions+=1;goto B57c9b5;
case 0x57c9b7:goto L57c9b7;
case 0x57c9ba:c.instructions+=2;goto B57c9ba;
case 0x57c9bc:c.instructions+=1;goto B57c9bc;
case 0x57c9be:goto L57c9be;
case 0x57c9c0:c.instructions+=3;goto B57c9c0;
case 0x57c9c2:c.instructions+=2;goto B57c9c2;
case 0x57c9c3:c.instructions+=1;goto B57c9c3;
case 0x57c9c8:goto L57c9c8;
case 0x57c9cd:c.instructions+=2;goto B57c9cd;
case 0x57c9ce:c.instructions+=1;goto B57c9ce;
case 0x57c9d3:goto L57c9d3;
case 0x57c9d6:goto L57c9d6;
case 0x57c9dd:goto L57c9dd;
case 0x57c9e3:c.instructions+=3;goto B57c9e3;
case 0x57c9e4:c.instructions+=2;goto B57c9e4;
case 0x57c9e5:c.instructions+=1;goto B57c9e5;
case 0x57c9ea:goto L57c9ea;
case 0x57c9ed:goto L57c9ed;
case 0x57c9f2:c.instructions+=2;goto B57c9f2;
case 0x57c9f7:c.instructions+=1;goto B57c9f7;
case 0x57c9fd:goto L57c9fd;
case 0x57c9fe:c.instructions+=2;goto B57c9fe;
case 0x57c9ff:c.instructions+=1;goto B57c9ff;
case 0x57ca00:goto L57ca00;
case 0x57ca05:c.instructions+=1;goto B57ca05;
case 0x57ca10:goto L57ca10;
case 0x57ca12:c.instructions+=9;goto B57ca12;
case 0x57ca17:c.instructions+=8;goto B57ca17;
case 0x57ca1d:c.instructions+=7;goto B57ca1d;
case 0x57ca1e:c.instructions+=6;goto B57ca1e;
case 0x57ca25:c.instructions+=5;goto B57ca25;
case 0x57ca26:c.instructions+=4;goto B57ca26;
case 0x57ca27:c.instructions+=3;goto B57ca27;
case 0x57ca2b:c.instructions+=2;goto B57ca2b;
case 0x57ca2c:c.instructions+=1;goto B57ca2c;
case 0x57ca31:goto L57ca31;
case 0x57ca34:c.instructions+=2;goto B57ca34;
case 0x57ca39:c.instructions+=1;goto B57ca39;
case 0x57ca3b:goto L57ca3b;
case 0x57ca40:c.instructions+=2;goto B57ca40;
case 0x57ca42:c.instructions+=1;goto B57ca42;
case 0x57ca44:goto L57ca44;
case 0x57ca49:c.instructions+=1;goto B57ca49;
case 0x57ca4e:goto L57ca4e;
case 0x57ca50:c.instructions+=4;goto B57ca50;
case 0x57ca55:c.instructions+=3;goto B57ca55;
case 0x57ca57:c.instructions+=2;goto B57ca57;
case 0x57ca5c:c.instructions+=1;goto B57ca5c;
case 0x57ca61:goto L57ca61;
case 0x57ca64:c.instructions+=1;goto B57ca64;
case 0x57ca69:goto L57ca69;
case 0x57ca6a:c.instructions+=1;goto B57ca6a;
case 0x57ca6f:goto L57ca6f;
case 0x57ca72:c.instructions+=4;goto B57ca72;
case 0x57ca76:c.instructions+=3;goto B57ca76;
case 0x57ca78:c.instructions+=2;goto B57ca78;
case 0x57ca80:c.instructions+=1;goto B57ca80;
case 0x57ca82:goto L57ca82;
case 0x57ca86:c.instructions+=4;goto B57ca86;
case 0x57ca87:c.instructions+=3;goto B57ca87;
case 0x57ca88:c.instructions+=2;goto B57ca88;
case 0x57ca8a:c.instructions+=1;goto B57ca8a;
case 0x57ca8f:goto L57ca8f;
case 0x57ca91:goto L57ca91;
case 0x57ca93:goto L57ca93;
case 0x57ca96:c.instructions+=3;goto B57ca96;
case 0x57ca98:c.instructions+=2;goto B57ca98;
case 0x57caa0:c.instructions+=1;goto B57caa0;
case 0x57caa2:goto L57caa2;
case 0x57caa4:c.instructions+=2;goto B57caa4;
case 0x57caa6:c.instructions+=1;goto B57caa6;
case 0x57caab:goto L57caab;
case 0x57caad:goto L57caad;
case 0x57cab1:c.instructions+=4;goto B57cab1;
case 0x57cab2:c.instructions+=3;goto B57cab2;
case 0x57cab9:c.instructions+=2;goto B57cab9;
case 0x57cabc:c.instructions+=1;goto B57cabc;
case 0x57cac0:goto L57cac0;
case 0x57cac4:c.instructions+=4;goto B57cac4;
case 0x57cac6:c.instructions+=3;goto B57cac6;
case 0x57cac8:c.instructions+=2;goto B57cac8;
case 0x57cac9:c.instructions+=1;goto B57cac9;
case 0x57cace:goto L57cace;
case 0x57cad1:c.instructions+=2;goto B57cad1;
case 0x57cad3:c.instructions+=1;goto B57cad3;
case 0x57cad5:goto L57cad5;
case 0x57cad8:c.instructions+=4;goto B57cad8;
case 0x57cada:c.instructions+=3;goto B57cada;
case 0x57cadb:c.instructions+=2;goto B57cadb;
case 0x57cade:c.instructions+=1;goto B57cade;
case 0x57cae0:goto L57cae0;
case 0x57cae7:c.instructions+=3;goto B57cae7;
case 0x57caea:c.instructions+=2;goto B57caea;
case 0x57caeb:c.instructions+=1;goto B57caeb;
case 0x57caec:goto L57caec;
case 0x57caee:c.instructions+=2;goto B57caee;
case 0x57caf0:c.instructions+=1;goto B57caf0;
case 0x57caf5:goto L57caf5;
case 0x57caf8:c.instructions+=2;goto B57caf8;
case 0x57caf9:c.instructions+=1;goto B57caf9;
case 0x57cafa:goto L57cafa;
case 0x57cafc:c.instructions+=1;goto B57cafc;
case 0x57cb00:goto L57cb00;
case 0x57cb04:c.instructions+=5;goto B57cb04;
case 0x57cb05:c.instructions+=4;goto B57cb05;
case 0x57cb07:c.instructions+=3;goto B57cb07;
case 0x57cb09:c.instructions+=2;goto B57cb09;
case 0x57cb0a:c.instructions+=1;goto B57cb0a;
case 0x57cb0f:goto L57cb0f;
case 0x57cb11:c.instructions+=3;goto B57cb11;
case 0x57cb14:c.instructions+=2;goto B57cb14;
case 0x57cb16:c.instructions+=1;goto B57cb16;
case 0x57cb18:goto L57cb18;
case 0x57cb1c:c.instructions+=10;goto B57cb1c;
case 0x57cb1f:c.instructions+=9;goto B57cb1f;
case 0x57cb22:c.instructions+=8;goto B57cb22;
case 0x57cb23:c.instructions+=7;goto B57cb23;
case 0x57cb27:c.instructions+=6;goto B57cb27;
case 0x57cb29:c.instructions+=5;goto B57cb29;
case 0x57cb2a:c.instructions+=4;goto B57cb2a;
case 0x57cb2b:c.instructions+=3;goto B57cb2b;
case 0x57cb2c:c.instructions+=2;goto B57cb2c;
case 0x57cb2d:c.instructions+=1;goto B57cb2d;
case 0x57cb32:goto L57cb32;
case 0x57cb35:c.instructions+=8;goto B57cb35;
case 0x57cb38:c.instructions+=7;goto B57cb38;
case 0x57cb3a:c.instructions+=6;goto B57cb3a;
case 0x57cb3d:c.instructions+=5;goto B57cb3d;
case 0x57cb3f:c.instructions+=4;goto B57cb3f;
case 0x57cb41:c.instructions+=3;goto B57cb41;
case 0x57cb44:c.instructions+=2;goto B57cb44;
case 0x57cb45:c.instructions+=1;goto B57cb45;
case 0x57cb47:goto L57cb47;
case 0x57cb4a:goto L57cb4a;
case 0x57cb4d:c.instructions+=2;goto B57cb4d;
case 0x57cb4f:c.instructions+=1;goto B57cb4f;
case 0x57cb51:goto L57cb51;
case 0x57cb58:c.instructions+=2;goto B57cb58;
case 0x57cb59:c.instructions+=1;goto B57cb59;
case 0x57cb5a:goto L57cb5a;
case 0x57cb5c:c.instructions+=2;goto B57cb5c;
case 0x57cb5e:c.instructions+=1;goto B57cb5e;
case 0x57cb63:goto L57cb63;
case 0x57cb64:c.instructions+=1;goto B57cb64;
case 0x57cb70:goto L57cb70;
case 0x57cb74:c.instructions+=5;goto B57cb74;
case 0x57cb75:c.instructions+=4;goto B57cb75;
case 0x57cb77:c.instructions+=3;goto B57cb77;
case 0x57cb79:c.instructions+=2;goto B57cb79;
case 0x57cb7a:c.instructions+=1;goto B57cb7a;
case 0x57cb7f:goto L57cb7f;
case 0x57cb81:c.instructions+=3;goto B57cb81;
case 0x57cb84:c.instructions+=2;goto B57cb84;
case 0x57cb86:c.instructions+=1;goto B57cb86;
case 0x57cb88:goto L57cb88;
case 0x57cb8c:c.instructions+=10;goto B57cb8c;
case 0x57cb8f:c.instructions+=9;goto B57cb8f;
case 0x57cb92:c.instructions+=8;goto B57cb92;
case 0x57cb93:c.instructions+=7;goto B57cb93;
case 0x57cb97:c.instructions+=6;goto B57cb97;
case 0x57cb99:c.instructions+=5;goto B57cb99;
case 0x57cb9a:c.instructions+=4;goto B57cb9a;
case 0x57cb9b:c.instructions+=3;goto B57cb9b;
case 0x57cb9c:c.instructions+=2;goto B57cb9c;
case 0x57cb9d:c.instructions+=1;goto B57cb9d;
case 0x57cba2:goto L57cba2;
case 0x57cba5:c.instructions+=8;goto B57cba5;
case 0x57cba8:c.instructions+=7;goto B57cba8;
case 0x57cbaa:c.instructions+=6;goto B57cbaa;
case 0x57cbad:c.instructions+=5;goto B57cbad;
case 0x57cbaf:c.instructions+=4;goto B57cbaf;
case 0x57cbb1:c.instructions+=3;goto B57cbb1;
case 0x57cbb4:c.instructions+=2;goto B57cbb4;
case 0x57cbb5:c.instructions+=1;goto B57cbb5;
case 0x57cbb7:goto L57cbb7;
case 0x57cbba:goto L57cbba;
case 0x57cbbd:c.instructions+=2;goto B57cbbd;
case 0x57cbbf:c.instructions+=1;goto B57cbbf;
case 0x57cbc1:goto L57cbc1;
case 0x57cbc8:c.instructions+=2;goto B57cbc8;
case 0x57cbc9:c.instructions+=1;goto B57cbc9;
case 0x57cbca:goto L57cbca;
case 0x57cbcc:c.instructions+=2;goto B57cbcc;
case 0x57cbce:c.instructions+=1;goto B57cbce;
case 0x57cbd3:goto L57cbd3;
case 0x57cbd4:c.instructions+=1;goto B57cbd4;
case 0x57cbe0:goto L57cbe0;
case 0x57cbe1:c.instructions+=7;goto B57cbe1;
case 0x57cbe2:c.instructions+=6;goto B57cbe2;
case 0x57cbe6:c.instructions+=5;goto B57cbe6;
case 0x57cbeb:c.instructions+=4;goto B57cbeb;
case 0x57cbed:c.instructions+=3;goto B57cbed;
case 0x57cbef:c.instructions+=2;goto B57cbef;
case 0x57cbf1:c.instructions+=1;goto B57cbf1;
case 0x57cbf6:goto L57cbf6;
case 0x57cbf9:c.instructions+=3;goto B57cbf9;
case 0x57cbfb:c.instructions+=2;goto B57cbfb;
case 0x57cbfe:c.instructions+=1;goto B57cbfe;
case 0x57cc00:goto L57cc00;
case 0x57cc06:c.instructions+=5;goto B57cc06;
case 0x57cc0c:c.instructions+=4;goto B57cc0c;
case 0x57cc0d:c.instructions+=3;goto B57cc0d;
case 0x57cc10:c.instructions+=2;goto B57cc10;
case 0x57cc12:c.instructions+=1;goto B57cc12;
case 0x57cc14:goto L57cc14;
case 0x57cc16:c.instructions+=7;goto B57cc16;
case 0x57cc1d:c.instructions+=6;goto B57cc1d;
case 0x57cc20:c.instructions+=5;goto B57cc20;
case 0x57cc27:c.instructions+=4;goto B57cc27;
case 0x57cc2a:c.instructions+=3;goto B57cc2a;
case 0x57cc31:c.instructions+=2;goto B57cc31;
case 0x57cc34:c.instructions+=1;goto B57cc34;
case 0x57cc3b:goto L57cc3b;
case 0x57cc41:c.instructions+=2;goto B57cc41;
case 0x57cc42:c.instructions+=1;goto B57cc42;
case 0x57cc44:goto L57cc44;
case 0x57cc47:c.instructions+=2;goto B57cc47;
case 0x57cc49:c.instructions+=1;goto B57cc49;
case 0x57cc4b:goto L57cc4b;
case 0x57cc4d:c.instructions+=5;goto B57cc4d;
case 0x57cc4f:c.instructions+=4;goto B57cc4f;
case 0x57cc51:c.instructions+=3;goto B57cc51;
case 0x57cc52:c.instructions+=2;goto B57cc52;
case 0x57cc54:c.instructions+=1;goto B57cc54;
case 0x57cc59:goto L57cc59;
case 0x57cc5b:goto L57cc5b;
case 0x57cc5e:c.instructions+=2;goto B57cc5e;
case 0x57cc60:c.instructions+=1;goto B57cc60;
case 0x57cc62:goto L57cc62;
case 0x57cc65:c.instructions+=18;goto B57cc65;
case 0x57cc69:c.instructions+=17;goto B57cc69;
case 0x57cc6c:c.instructions+=16;goto B57cc6c;
case 0x57cc6f:c.instructions+=15;goto B57cc6f;
case 0x57cc71:c.instructions+=14;goto B57cc71;
case 0x57cc75:c.instructions+=13;goto B57cc75;
case 0x57cc78:c.instructions+=12;goto B57cc78;
case 0x57cc7c:c.instructions+=11;goto B57cc7c;
case 0x57cc7e:c.instructions+=10;goto B57cc7e;
case 0x57cc81:c.instructions+=9;goto B57cc81;
case 0x57cc83:c.instructions+=8;goto B57cc83;
case 0x57cc85:c.instructions+=7;goto B57cc85;
case 0x57cc87:c.instructions+=6;goto B57cc87;
case 0x57cc89:c.instructions+=5;goto B57cc89;
case 0x57cc8d:c.instructions+=4;goto B57cc8d;
case 0x57cc8e:c.instructions+=3;goto B57cc8e;
case 0x57cc90:c.instructions+=2;goto B57cc90;
case 0x57cc94:c.instructions+=1;goto B57cc94;
case 0x57cc99:goto L57cc99;
case 0x57cc9d:c.instructions+=5;goto B57cc9d;
case 0x57cca0:c.instructions+=4;goto B57cca0;
case 0x57cca3:c.instructions+=3;goto B57cca3;
case 0x57cca6:c.instructions+=2;goto B57cca6;
case 0x57cca8:c.instructions+=1;goto B57cca8;
case 0x57ccaa:goto L57ccaa;
case 0x57ccac:c.instructions+=4;goto B57ccac;
case 0x57ccad:c.instructions+=3;goto B57ccad;
case 0x57ccae:c.instructions+=2;goto B57ccae;
case 0x57ccaf:c.instructions+=1;goto B57ccaf;
case 0x57ccb1:goto L57ccb1;
case 0x57ccb4:c.instructions+=2;goto B57ccb4;
case 0x57ccb6:c.instructions+=1;goto B57ccb6;
case 0x57ccb8:goto L57ccb8;
case 0x57ccba:c.instructions+=5;goto B57ccba;
case 0x57ccbb:c.instructions+=4;goto B57ccbb;
case 0x57ccbc:c.instructions+=3;goto B57ccbc;
case 0x57ccbd:c.instructions+=2;goto B57ccbd;
case 0x57ccbf:c.instructions+=1;goto B57ccbf;
case 0x57ccc4:goto L57ccc4;
case 0x57ccc6:goto L57ccc6;
case 0x57ccc9:c.instructions+=2;goto B57ccc9;
case 0x57cccb:c.instructions+=1;goto B57cccb;
case 0x57cccd:goto L57cccd;
case 0x57ccce:c.instructions+=4;goto B57ccce;
case 0x57cccf:c.instructions+=3;goto B57cccf;
case 0x57ccd0:c.instructions+=2;goto B57ccd0;
case 0x57ccd2:c.instructions+=1;goto B57ccd2;
case 0x57ccd7:goto L57ccd7;
case 0x57ccd9:c.instructions+=5;goto B57ccd9;
case 0x57ccdb:c.instructions+=4;goto B57ccdb;
case 0x57ccdd:c.instructions+=3;goto B57ccdd;
case 0x57cce1:c.instructions+=2;goto B57cce1;
case 0x57cce5:c.instructions+=1;goto B57cce5;
case 0x57cce6:goto L57cce6;
case 0x57cce8:c.instructions+=1;goto B57cce8;
case 0x57cced:goto L57cced;
case 0x57ccf0:c.instructions+=4;goto B57ccf0;
case 0x57ccf1:c.instructions+=3;goto B57ccf1;
case 0x57ccf2:c.instructions+=2;goto B57ccf2;
case 0x57ccf4:c.instructions+=1;goto B57ccf4;
case 0x57ccf9:goto L57ccf9;
case 0x57ccfb:c.instructions+=1;goto B57ccfb;
case 0x57cd00:goto L57cd00;
case 0x57cd01:c.instructions+=2;goto B57cd01;
case 0x57cd02:c.instructions+=1;goto B57cd02;
case 0x57cd10:goto L57cd10;
case 0x57cd11:c.instructions+=7;goto B57cd11;
case 0x57cd15:c.instructions+=6;goto B57cd15;
case 0x57cd16:c.instructions+=5;goto B57cd16;
case 0x57cd1b:c.instructions+=4;goto B57cd1b;
case 0x57cd1d:c.instructions+=3;goto B57cd1d;
case 0x57cd1f:c.instructions+=2;goto B57cd1f;
case 0x57cd21:c.instructions+=1;goto B57cd21;
case 0x57cd26:goto L57cd26;
case 0x57cd27:c.instructions+=2;goto B57cd27;
case 0x57cd29:c.instructions+=1;goto B57cd29;
case 0x57cd2e:goto L57cd2e;
case 0x57cd2f:c.instructions+=2;goto B57cd2f;
case 0x57cd32:c.instructions+=1;goto B57cd32;
case 0x57cd37:goto L57cd37;
case 0x57cd38:c.instructions+=2;goto B57cd38;
case 0x57cd3b:c.instructions+=1;goto B57cd3b;
case 0x57cd40:goto L57cd40;
case 0x57cd43:c.instructions+=3;goto B57cd43;
case 0x57cd44:c.instructions+=2;goto B57cd44;
case 0x57cd46:c.instructions+=1;goto B57cd46;
case 0x57cd4b:goto L57cd4b;
case 0x57cd4e:c.instructions+=3;goto B57cd4e;
case 0x57cd4f:c.instructions+=2;goto B57cd4f;
case 0x57cd51:c.instructions+=1;goto B57cd51;
case 0x57cd56:goto L57cd56;
case 0x57cd5c:c.instructions+=3;goto B57cd5c;
case 0x57cd5d:c.instructions+=2;goto B57cd5d;
case 0x57cd5f:c.instructions+=1;goto B57cd5f;
case 0x57cd64:goto L57cd64;
case 0x57cd66:c.instructions+=1;goto B57cd66;
case 0x57cd6b:goto L57cd6b;
case 0x57cd6c:c.instructions+=2;goto B57cd6c;
case 0x57cd6d:c.instructions+=1;goto B57cd6d;
case 0x57cd70:goto L57cd70;
case 0x57cd72:c.instructions+=3;goto B57cd72;
case 0x57cd74:c.instructions+=2;goto B57cd74;
case 0x57cd79:c.instructions+=1;goto B57cd79;
case 0x57cd7e:goto L57cd7e;
case 0x57cd81:c.instructions+=2;goto B57cd81;
case 0x57cd83:c.instructions+=1;goto B57cd83;
case 0x57cd85:goto L57cd85;
case 0x57cd88:c.instructions+=4;goto B57cd88;
case 0x57cd8a:c.instructions+=3;goto B57cd8a;
case 0x57cd8b:c.instructions+=2;goto B57cd8b;
case 0x57cd8e:c.instructions+=1;goto B57cd8e;
case 0x57cd90:goto L57cd90;
case 0x57cd97:c.instructions+=1;goto B57cd97;
case 0x57cd99:goto L57cd99;
case 0x57cd9b:c.instructions+=2;goto B57cd9b;
case 0x57cd9d:c.instructions+=1;goto B57cd9d;
case 0x57cda2:goto L57cda2;
case 0x57cda5:c.instructions+=3;goto B57cda5;
case 0x57cda7:c.instructions+=2;goto B57cda7;
case 0x57cda8:c.instructions+=1;goto B57cda8;
case 0x57cdaa:goto L57cdaa;
case 0x57cdaf:c.instructions+=2;goto B57cdaf;
case 0x57cdb4:c.instructions+=1;goto B57cdb4;
case 0x57cdb9:goto L57cdb9;
case 0x57cdbc:c.instructions+=2;goto B57cdbc;
case 0x57cdbe:c.instructions+=1;goto B57cdbe;
case 0x57cdc0:goto L57cdc0;
case 0x57cdc1:c.instructions+=1;goto B57cdc1;
case 0x57cdc6:goto L57cdc6;
case 0x57cdc8:c.instructions+=2;goto B57cdc8;
case 0x57cdcd:c.instructions+=1;goto B57cdcd;
case 0x57cdd2:goto L57cdd2;
case 0x57cdd5:goto L57cdd5;
case 0x57cde0:goto L57cde0;
case 0x57cde4:c.instructions+=18;goto B57cde4;
case 0x57cde8:c.instructions+=17;goto B57cde8;
case 0x57cde9:c.instructions+=16;goto B57cde9;
case 0x57cdea:c.instructions+=15;goto B57cdea;
case 0x57cdeb:c.instructions+=14;goto B57cdeb;
case 0x57cded:c.instructions+=13;goto B57cded;
case 0x57cdf1:c.instructions+=12;goto B57cdf1;
case 0x57cdf4:c.instructions+=11;goto B57cdf4;
case 0x57cdf8:c.instructions+=10;goto B57cdf8;
case 0x57cdf9:c.instructions+=9;goto B57cdf9;
case 0x57cdfc:c.instructions+=8;goto B57cdfc;
case 0x57ce00:c.instructions+=7;goto B57ce00;
case 0x57ce01:c.instructions+=6;goto B57ce01;
case 0x57ce04:c.instructions+=5;goto B57ce04;
case 0x57ce05:c.instructions+=4;goto B57ce05;
case 0x57ce09:c.instructions+=3;goto B57ce09;
case 0x57ce0c:c.instructions+=2;goto B57ce0c;
case 0x57ce0f:c.instructions+=1;goto B57ce0f;
case 0x57ce14:goto L57ce14;
case 0x57ce16:c.instructions+=14;goto B57ce16;
case 0x57ce1c:c.instructions+=13;goto B57ce1c;
case 0x57ce1e:c.instructions+=12;goto B57ce1e;
case 0x57ce20:c.instructions+=11;goto B57ce20;
case 0x57ce23:c.instructions+=10;goto B57ce23;
case 0x57ce29:c.instructions+=9;goto B57ce29;
case 0x57ce2f:c.instructions+=8;goto B57ce2f;
case 0x57ce35:c.instructions+=7;goto B57ce35;
case 0x57ce3b:c.instructions+=6;goto B57ce3b;
case 0x57ce41:c.instructions+=5;goto B57ce41;
case 0x57ce47:c.instructions+=4;goto B57ce47;
case 0x57ce4d:c.instructions+=3;goto B57ce4d;
case 0x57ce53:c.instructions+=2;goto B57ce53;
case 0x57ce5d:c.instructions+=1;goto B57ce5d;
case 0x57ce62:goto L57ce62;
case 0x57ce64:goto L57ce64;
case 0x57ce68:c.instructions+=4;goto B57ce68;
case 0x57ce6a:c.instructions+=3;goto B57ce6a;
case 0x57ce6b:c.instructions+=2;goto B57ce6b;
case 0x57ce6c:c.instructions+=1;goto B57ce6c;
case 0x57ce71:goto L57ce71;
case 0x57ce73:c.instructions+=4;goto B57ce73;
case 0x57ce75:c.instructions+=3;goto B57ce75;
case 0x57ce76:c.instructions+=2;goto B57ce76;
case 0x57ce79:c.instructions+=1;goto B57ce79;
case 0x57ce7e:goto L57ce7e;
case 0x57ce81:c.instructions+=2;goto B57ce81;
case 0x57ce83:c.instructions+=1;goto B57ce83;
case 0x57ce85:goto L57ce85;
case 0x57ce88:c.instructions+=7;goto B57ce88;
case 0x57ce8a:c.instructions+=6;goto B57ce8a;
case 0x57ce8c:c.instructions+=5;goto B57ce8c;
case 0x57ce8f:c.instructions+=4;goto B57ce8f;
case 0x57ce90:c.instructions+=3;goto B57ce90;
case 0x57ce92:c.instructions+=2;goto B57ce92;
case 0x57ce95:c.instructions+=1;goto B57ce95;
case 0x57ce97:goto L57ce97;
case 0x57ce9e:c.instructions+=2;goto B57ce9e;
case 0x57cea0:c.instructions+=1;goto B57cea0;
case 0x57cea2:goto L57cea2;
case 0x57cea4:c.instructions+=2;goto B57cea4;
case 0x57cea6:c.instructions+=1;goto B57cea6;
case 0x57ceab:goto L57ceab;
case 0x57cead:c.instructions+=1;goto B57cead;
case 0x57ceaf:goto L57ceaf;
case 0x57ceb2:goto L57ceb2;
case 0x57ceb4:c.instructions+=2;goto B57ceb4;
case 0x57ceba:c.instructions+=1;goto B57ceba;
case 0x57cebc:goto L57cebc;
case 0x57cec2:goto L57cec2;
case 0x57cec8:c.instructions+=2;goto B57cec8;
case 0x57cece:c.instructions+=1;goto B57cece;
case 0x57ced0:goto L57ced0;
case 0x57ced3:c.instructions+=2;goto B57ced3;
case 0x57ced5:c.instructions+=1;goto B57ced5;
case 0x57ced7:goto L57ced7;
case 0x57cedd:goto L57cedd;
case 0x57cede:c.instructions+=5;goto B57cede;
case 0x57cee0:c.instructions+=4;goto B57cee0;
case 0x57cee1:c.instructions+=3;goto B57cee1;
case 0x57cee2:c.instructions+=2;goto B57cee2;
case 0x57cee3:c.instructions+=1;goto B57cee3;
case 0x57cef0:goto L57cef0;
case 0x57cef2:c.instructions+=8;goto B57cef2;
case 0x57cef7:c.instructions+=7;goto B57cef7;
case 0x57cefd:c.instructions+=6;goto B57cefd;
case 0x57cefe:c.instructions+=5;goto B57cefe;
case 0x57cf05:c.instructions+=4;goto B57cf05;
case 0x57cf06:c.instructions+=3;goto B57cf06;
case 0x57cf0b:c.instructions+=2;goto B57cf0b;
case 0x57cf0c:c.instructions+=1;goto B57cf0c;
case 0x57cf11:goto L57cf11;
case 0x57cf14:c.instructions+=4;goto B57cf14;
case 0x57cf18:c.instructions+=3;goto B57cf18;
case 0x57cf1a:c.instructions+=2;goto B57cf1a;
case 0x57cf22:c.instructions+=1;goto B57cf22;
case 0x57cf24:goto L57cf24;
case 0x57cf28:c.instructions+=11;goto B57cf28;
case 0x57cf2c:c.instructions+=10;goto B57cf2c;
case 0x57cf2d:c.instructions+=9;goto B57cf2d;
case 0x57cf31:c.instructions+=8;goto B57cf31;
case 0x57cf32:c.instructions+=7;goto B57cf32;
case 0x57cf36:c.instructions+=6;goto B57cf36;
case 0x57cf37:c.instructions+=5;goto B57cf37;
case 0x57cf3b:c.instructions+=4;goto B57cf3b;
case 0x57cf3c:c.instructions+=3;goto B57cf3c;
case 0x57cf3d:c.instructions+=2;goto B57cf3d;
case 0x57cf3f:c.instructions+=1;goto B57cf3f;
case 0x57cf44:goto L57cf44;
case 0x57cf46:goto L57cf46;
case 0x57cf48:goto L57cf48;
case 0x57cf4e:c.instructions+=8;goto B57cf4e;
case 0x57cf50:c.instructions+=7;goto B57cf50;
case 0x57cf55:c.instructions+=6;goto B57cf55;
case 0x57cf58:c.instructions+=5;goto B57cf58;
case 0x57cf5c:c.instructions+=4;goto B57cf5c;
case 0x57cf62:c.instructions+=3;goto B57cf62;
case 0x57cf69:c.instructions+=2;goto B57cf69;
case 0x57cf6c:c.instructions+=1;goto B57cf6c;
case 0x57cf70:goto L57cf70;
case 0x57cf74:c.instructions+=11;goto B57cf74;
case 0x57cf78:c.instructions+=10;goto B57cf78;
case 0x57cf7c:c.instructions+=9;goto B57cf7c;
case 0x57cf7d:c.instructions+=8;goto B57cf7d;
case 0x57cf7e:c.instructions+=7;goto B57cf7e;
case 0x57cf82:c.instructions+=6;goto B57cf82;
case 0x57cf83:c.instructions+=5;goto B57cf83;
case 0x57cf87:c.instructions+=4;goto B57cf87;
case 0x57cf88:c.instructions+=3;goto B57cf88;
case 0x57cf89:c.instructions+=2;goto B57cf89;
case 0x57cf8a:c.instructions+=1;goto B57cf8a;
case 0x57cf8f:goto L57cf8f;
case 0x57cf93:c.instructions+=7;goto B57cf93;
case 0x57cf96:c.instructions+=6;goto B57cf96;
case 0x57cf98:c.instructions+=5;goto B57cf98;
case 0x57cf9c:c.instructions+=4;goto B57cf9c;
case 0x57cf9d:c.instructions+=3;goto B57cf9d;
case 0x57cf9e:c.instructions+=2;goto B57cf9e;
case 0x57cfa0:c.instructions+=1;goto B57cfa0;
case 0x57cfa5:goto L57cfa5;
case 0x57cfa7:c.instructions+=2;goto B57cfa7;
case 0x57cfa8:c.instructions+=1;goto B57cfa8;
case 0x57cfb0:goto L57cfb0;
case 0x57cfb4:c.instructions+=3;goto B57cfb4;
case 0x57cfb6:c.instructions+=2;goto B57cfb6;
case 0x57cfb8:c.instructions+=1;goto B57cfb8;
case 0x57cfba:goto L57cfba;
case 0x57cfbf:goto L57cfbf;
case 0x57cfc3:c.instructions+=2;goto B57cfc3;
case 0x57cfc5:c.instructions+=1;goto B57cfc5;
case 0x57cfc7:goto L57cfc7;
case 0x57cfca:goto L57cfca;
case 0x57cfce:c.instructions+=8;goto B57cfce;
case 0x57cfcf:c.instructions+=7;goto B57cfcf;
case 0x57cfd1:c.instructions+=6;goto B57cfd1;
case 0x57cfd3:c.instructions+=5;goto B57cfd3;
case 0x57cfd4:c.instructions+=4;goto B57cfd4;
case 0x57cfd8:c.instructions+=3;goto B57cfd8;
case 0x57cfd9:c.instructions+=2;goto B57cfd9;
case 0x57cfda:c.instructions+=1;goto B57cfda;
case 0x57cfdf:goto L57cfdf;
case 0x57cfe3:c.instructions+=7;goto B57cfe3;
case 0x57cfe6:c.instructions+=6;goto B57cfe6;
case 0x57cfe8:c.instructions+=5;goto B57cfe8;
case 0x57cfec:c.instructions+=4;goto B57cfec;
case 0x57cfed:c.instructions+=3;goto B57cfed;
case 0x57cfee:c.instructions+=2;goto B57cfee;
case 0x57cff0:c.instructions+=1;goto B57cff0;
case 0x57cff5:goto L57cff5;
case 0x57cff7:c.instructions+=2;goto B57cff7;
case 0x57cff8:c.instructions+=1;goto B57cff8;
default:missing_instruction(c.pc);}
B57c001:L57c001:{c.instructions+=1;NFSU2_TR(0x57c001);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c01a;}}
}
B57c003:L57c003:{c.instructions+=3;NFSU2_TR(0x57c003);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c004:{NFSU2_TR(0x57c004);
__builtin_memmove((R+4),(R+28),4);
}
B57c006:{NFSU2_TR(0x57c006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c00bull));
TAIL_STATIC(0x57ad80u,57a);
}
B57c00b:L57c00b:{c.instructions+=4;NFSU2_TR(0x57c00b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c015:{NFSU2_TR(0x57c015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c016:{NFSU2_TR(0x57c016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c017:{NFSU2_TR(0x57c017);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c01a:L57c01a:{c.instructions+=1;NFSU2_TR(0x57c01a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c01full));
TAIL_STATIC(0x43bdf0u,43b);
}
B57c01f:L57c01f:{c.instructions+=3;NFSU2_TR(0x57c01f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c020:{NFSU2_TR(0x57c020);
w4(R+4,u32(0x89e7a0ull));
}
B57c025:{NFSU2_TR(0x57c025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c02aull));
TAIL_STATIC(0x5ed6b0u,5ed);
}
B57c02a:L57c02a:{c.instructions+=3;NFSU2_TR(0x57c02a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57c02d:{NFSU2_TR(0x57c02d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57c02f:{NFSU2_TR(0x57c02f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c038;}}
}
B57c031:L57c031:{c.instructions+=3;NFSU2_TR(0x57c031);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57c034:{NFSU2_TR(0x57c034);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57c036:{NFSU2_TR(0x57c036);
if(r1(R+518)){{goto L57c047;}}
}
B57c038:L57c038:{c.instructions+=3;NFSU2_TR(0x57c038);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B57c03e:{NFSU2_TR(0x57c03e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57c041:{NFSU2_TR(0x57c041);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c047;}}
}
B57c043:L57c043:{c.instructions+=2;NFSU2_TR(0x57c043);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c045:{NFSU2_TR(0x57c045);
{goto L57c049;}
}
B57c047:L57c047:{c.instructions+=1;NFSU2_TR(0x57c047);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c049:L57c049:{c.instructions+=3;NFSU2_TR(0x57c049);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c04f:{NFSU2_TR(0x57c04f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c050:{NFSU2_TR(0x57c050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c055ull));
TAIL_STATIC(0x57a780u,57a);
}
B57c055:L57c055:{c.instructions+=3;NFSU2_TR(0x57c055);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B57c05b:{NFSU2_TR(0x57c05b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c05c:{NFSU2_TR(0x57c05c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c061ull));
TAIL_STATIC(0x60a610u,60a);
}
B57c061:L57c061:{c.instructions+=2;NFSU2_TR(0x57c061);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c062:{NFSU2_TR(0x57c062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c067ull));
TAIL_STATIC(0x57b240u,57b);
}
B57c067:L57c067:{c.instructions+=5;NFSU2_TR(0x57c067);
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
B57c06a:{NFSU2_TR(0x57c06a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c074:{NFSU2_TR(0x57c074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c075:{NFSU2_TR(0x57c075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c076:{NFSU2_TR(0x57c076);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c080:L57c080:{c.instructions+=5;NFSU2_TR(0x57c080);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c081:{NFSU2_TR(0x57c081);
__builtin_memmove((R+28),(R+4),4);
}
B57c083:{NFSU2_TR(0x57c083);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c086:{NFSU2_TR(0x57c086);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57c088:{NFSU2_TR(0x57c088);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57c090;}}
}
B57c08a:L57c08a:{c.instructions+=3;NFSU2_TR(0x57c08a);
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
B57c08c:{NFSU2_TR(0x57c08c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c08d:{NFSU2_TR(0x57c08d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c090:L57c090:{c.instructions+=3;NFSU2_TR(0x57c090);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c091:{NFSU2_TR(0x57c091);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c092:{NFSU2_TR(0x57c092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c097ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B57c097:L57c097:{c.instructions+=4;NFSU2_TR(0x57c097);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c09d:{NFSU2_TR(0x57c09d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57c0a3:{NFSU2_TR(0x57c0a3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57c0a5:{NFSU2_TR(0x57c0a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c0b0;}}
}
B57c0a7:L57c0a7:{c.instructions+=3;NFSU2_TR(0x57c0a7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c0a9:{NFSU2_TR(0x57c0a9);
__builtin_memmove((R+4),(R+28),4);
}
B57c0ab:{NFSU2_TR(0x57c0ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c0b0ull));
TAIL_STATIC(0x579080u,579);
}
B57c0b0:L57c0b0:{c.instructions+=15;NFSU2_TR(0x57c0b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57c0b3:{NFSU2_TR(0x57c0b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57c0b5:{NFSU2_TR(0x57c0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c0b8:{NFSU2_TR(0x57c0b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57c0ba:{NFSU2_TR(0x57c0ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c0bd:{NFSU2_TR(0x57c0bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c0c3:{NFSU2_TR(0x57c0c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57c0c9:{NFSU2_TR(0x57c0c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57c0cb:{NFSU2_TR(0x57c0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c0ce:{NFSU2_TR(0x57c0ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57c0d0:{NFSU2_TR(0x57c0d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c0d4:{NFSU2_TR(0x57c0d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c0d7:{NFSU2_TR(0x57c0d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c0d8:{NFSU2_TR(0x57c0d8);
__builtin_memmove((R+4),(R+24),4);
}
B57c0da:{NFSU2_TR(0x57c0da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c0dfull));
TAIL_STATIC(0x5714a0u,571);
}
B57c0df:L57c0df:{c.instructions+=3;NFSU2_TR(0x57c0df);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B57c0e4:{NFSU2_TR(0x57c0e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57c0e7:{NFSU2_TR(0x57c0e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c109;}}
}
B57c0e9:L57c0e9:{c.instructions+=3;NFSU2_TR(0x57c0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c0ef:{NFSU2_TR(0x57c0ef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57c0f5:{NFSU2_TR(0x57c0f5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57c109;}}
}
B57c0f7:L57c0f7:{c.instructions+=3;NFSU2_TR(0x57c0f7);
u8 U[16];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B57c0fe:{NFSU2_TR(0x57c0fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B57c104:{NFSU2_TR(0x57c104);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B57c109:L57c109:{c.instructions+=6;NFSU2_TR(0x57c109);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c10f:{NFSU2_TR(0x57c10f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c110:{NFSU2_TR(0x57c110);
__builtin_memmove((R+4),(R+28),4);
}
B57c112:{NFSU2_TR(0x57c112);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c11c:{NFSU2_TR(0x57c11c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57c120:{NFSU2_TR(0x57c120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c125ull));
TAIL_STATIC(0x57bfe0u,57b);
}
B57c125:L57c125:{c.instructions+=6;NFSU2_TR(0x57c125);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c12b:{NFSU2_TR(0x57c12b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c131:{NFSU2_TR(0x57c131);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57c135:{NFSU2_TR(0x57c135);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c13b:{NFSU2_TR(0x57c13b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57c13d:{NFSU2_TR(0x57c13d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57c141;}}
}
B57c13f:L57c13f:{c.instructions+=1;NFSU2_TR(0x57c13f);
__builtin_memmove((R+0),(R+4),4);
}
B57c141:L57c141:{c.instructions+=4;NFSU2_TR(0x57c141);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c147:{NFSU2_TR(0x57c147);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c14d:{NFSU2_TR(0x57c14d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B57c153:{NFSU2_TR(0x57c153);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57c174;}}
}
B57c155:L57c155:{c.instructions+=14;NFSU2_TR(0x57c155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57c157:{NFSU2_TR(0x57c157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c15a:{NFSU2_TR(0x57c15a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57c15c:{NFSU2_TR(0x57c15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c15f:{NFSU2_TR(0x57c15f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c162:{NFSU2_TR(0x57c162);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57c164:{NFSU2_TR(0x57c164);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c167:{NFSU2_TR(0x57c167);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c16a:{NFSU2_TR(0x57c16a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57c16c:{NFSU2_TR(0x57c16c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c16d:{NFSU2_TR(0x57c16d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57c16e:{NFSU2_TR(0x57c16e);
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
B57c170:{NFSU2_TR(0x57c170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c171:{NFSU2_TR(0x57c171);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c174:L57c174:{c.instructions+=5;NFSU2_TR(0x57c174);
__builtin_memmove((R+0),(R+24),4);
}
B57c176:{NFSU2_TR(0x57c176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c177:{NFSU2_TR(0x57c177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57c178:{NFSU2_TR(0x57c178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c179:{NFSU2_TR(0x57c179);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c180:L57c180:{c.instructions+=5;NFSU2_TR(0x57c180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x9e8ull))));
}
B57c186:{NFSU2_TR(0x57c186);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c187:{NFSU2_TR(0x57c187);
__builtin_memmove((R+24),(R+4),4);
}
B57c189:{NFSU2_TR(0x57c189);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57c18d:{NFSU2_TR(0x57c18d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c192ull));
TAIL_STATIC(0x577480u,577);
}
B57c192:L57c192:{c.instructions+=3;NFSU2_TR(0x57c192);
u8 U[4];
w4(U+0,u32(0x7a03e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c197:{NFSU2_TR(0x57c197);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57c19b:{NFSU2_TR(0x57c19b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c1a0ull));
TAIL_STATIC(0x5714a0u,571);
}
B57c1a0:L57c1a0:{c.instructions+=8;NFSU2_TR(0x57c1a0);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B57c1a5:{NFSU2_TR(0x57c1a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57c1a9:{NFSU2_TR(0x57c1a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c1aa:{NFSU2_TR(0x57c1aa);
__builtin_memmove((R+4),(R+24),4);
}
B57c1ac:{NFSU2_TR(0x57c1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c1b2:{NFSU2_TR(0x57c1b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c1bd:{NFSU2_TR(0x57c1bd);
u8 U[5];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57c1c2:{NFSU2_TR(0x57c1c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c1c7ull));
TAIL_STATIC(0x57bfe0u,57b);
}
B57c1c7:L57c1c7:{c.instructions+=3;NFSU2_TR(0x57c1c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c1c8:{NFSU2_TR(0x57c1c8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x9e8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x9e8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x9e8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57c1ce:{NFSU2_TR(0x57c1ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c1d0:L57c1d0:{c.instructions+=10;NFSU2_TR(0x57c1d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c1d1:{NFSU2_TR(0x57c1d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c1d2:{NFSU2_TR(0x57c1d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c1d3:{NFSU2_TR(0x57c1d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57c1d7:{NFSU2_TR(0x57c1d7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57c1d9:{NFSU2_TR(0x57c1d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c1da:{NFSU2_TR(0x57c1da);
__builtin_memmove((R+24),(R+4),4);
}
B57c1dc:{NFSU2_TR(0x57c1dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c1e2:{NFSU2_TR(0x57c1e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57c1e6:{NFSU2_TR(0x57c1e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c1ebull));
TAIL_STATIC(0x57bfe0u,57b);
}
B57c1eb:L57c1eb:{c.instructions+=13;NFSU2_TR(0x57c1eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57c1ee:{NFSU2_TR(0x57c1ee);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B57c1f3:{NFSU2_TR(0x57c1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c1f9:{NFSU2_TR(0x57c1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c1fc:{NFSU2_TR(0x57c1fc);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B57c201:{NFSU2_TR(0x57c201);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57c203:{NFSU2_TR(0x57c203);
__builtin_memmove(gp(0x828774),(R+4),4);
}
B57c209:{NFSU2_TR(0x57c209);
__builtin_memmove(gp(0x828778),(R+4),4);
}
B57c20f:{NFSU2_TR(0x57c20f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57c211:{NFSU2_TR(0x57c211);
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
B57c213:{NFSU2_TR(0x57c213);
__builtin_memmove(gp(0x828770),(R+12),4);
}
B57c219:{NFSU2_TR(0x57c219);
__builtin_memmove(gp(0x82877c),(R+4),4);
}
B57c21f:{NFSU2_TR(0x57c21f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57c237;}}
}
B57c221:L57c221:{c.instructions+=2;NFSU2_TR(0x57c221);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B57c228:{NFSU2_TR(0x57c228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c22dull));
TAIL_STATIC(0x5faf80u,5fa);
}
B57c22d:L57c22d:{c.instructions+=4;NFSU2_TR(0x57c22d);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B57c232:{NFSU2_TR(0x57c232);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57c233:{NFSU2_TR(0x57c233);
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
B57c235:{NFSU2_TR(0x57c235);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c221u);}goto L57c221;}}
}
B57c237:L57c237:{c.instructions+=4;NFSU2_TR(0x57c237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c238:{NFSU2_TR(0x57c238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c239:{NFSU2_TR(0x57c239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57c23a:{NFSU2_TR(0x57c23a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c240:L57c240:{c.instructions+=19;NFSU2_TR(0x57c240);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c242:{NFSU2_TR(0x57c242);
u8 U[4];
w4(U+0,u32(0x778878ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c247:{NFSU2_TR(0x57c247);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c24d:{NFSU2_TR(0x57c24d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c24e:{NFSU2_TR(0x57c24e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c255:{NFSU2_TR(0x57c255);
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B57c258:{NFSU2_TR(0x57c258);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c259:{NFSU2_TR(0x57c259);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c25a:{NFSU2_TR(0x57c25a);
__builtin_memmove((R+20),(R+4),4);
}
B57c25c:{NFSU2_TR(0x57c25c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c25d:{NFSU2_TR(0x57c25d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c25e:{NFSU2_TR(0x57c25e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c262:{NFSU2_TR(0x57c262);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+20)),r4(U+0));
}
B57c265:{NFSU2_TR(0x57c265);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c268:{NFSU2_TR(0x57c268);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c26b:{NFSU2_TR(0x57c26b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c273:{NFSU2_TR(0x57c273);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c276:{NFSU2_TR(0x57c276);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c27e:{NFSU2_TR(0x57c27e);
w4(R+12,u32(0x43000000ull));
}
B57c283:L57c283:{c.instructions+=5;NFSU2_TR(0x57c283);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c288:{NFSU2_TR(0x57c288);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c28a:{NFSU2_TR(0x57c28a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c28c:{NFSU2_TR(0x57c28c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c28d:{NFSU2_TR(0x57c28d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c292ull));
TAIL_STATIC(0x401650u,401);
}
B57c292:L57c292:{c.instructions+=18;NFSU2_TR(0x57c292);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c295:{NFSU2_TR(0x57c295);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c29c:{NFSU2_TR(0x57c29c);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B57c2a2:{NFSU2_TR(0x57c2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c2a9:{NFSU2_TR(0x57c2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c2ac:{NFSU2_TR(0x57c2ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57c2ae:{NFSU2_TR(0x57c2ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c2b1:{NFSU2_TR(0x57c2b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c2b4:{NFSU2_TR(0x57c2b4);
w4(R+0,u32(0x437f0000ull));
}
B57c2b9:{NFSU2_TR(0x57c2b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c2bc:{NFSU2_TR(0x57c2bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c2bf:{NFSU2_TR(0x57c2bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c2c3:{NFSU2_TR(0x57c2c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57c2c7:{NFSU2_TR(0x57c2c7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2cull))));
}
B57c2ca:{NFSU2_TR(0x57c2ca);
w1(R+512,carry<u32>(r4(R+24),u32(0x2cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2cull))));
}
B57c2cd:{NFSU2_TR(0x57c2cd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B57c2ce:{NFSU2_TR(0x57c2ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c2d2:{NFSU2_TR(0x57c2d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c283u);}goto L57c283;}}
}
B57c2d4:L57c2d4:{c.instructions+=8;NFSU2_TR(0x57c2d4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B57c2d7:{NFSU2_TR(0x57c2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c2dd:{NFSU2_TR(0x57c2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c2e3:{NFSU2_TR(0x57c2e3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57c2e5:{NFSU2_TR(0x57c2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c2eb:{NFSU2_TR(0x57c2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c2f1:{NFSU2_TR(0x57c2f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c2f7:{NFSU2_TR(0x57c2f7);
w4(R+4,u32(0x3eull));
}
B57c2fc:L57c2fc:{c.instructions+=1;NFSU2_TR(0x57c2fc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L57c2fe;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c2fcu);}goto L57c2fc;}
}
B57c2fe:L57c2fe:{c.instructions+=10;NFSU2_TR(0x57c2fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c302:{NFSU2_TR(0x57c302);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B57c303:{NFSU2_TR(0x57c303);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c304:{NFSU2_TR(0x57c304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c305:{NFSU2_TR(0x57c305);
__builtin_memmove((R+0),(R+20),4);
}
B57c307:{NFSU2_TR(0x57c307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57c308:{NFSU2_TR(0x57c308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57c309:{NFSU2_TR(0x57c309);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c310:{NFSU2_TR(0x57c310);
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
B57c313:{NFSU2_TR(0x57c313);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c320:L57c320:{c.instructions+=1;NFSU2_TR(0x57c320);
TAIL_STATIC(0x57bc10u,57b);
}
B57c330:L57c330:{c.instructions+=12;NFSU2_TR(0x57c330);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c334:{NFSU2_TR(0x57c334);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c335:{NFSU2_TR(0x57c335);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57c339:{NFSU2_TR(0x57c339);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c33a:{NFSU2_TR(0x57c33a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c33b:{NFSU2_TR(0x57c33b);
__builtin_memmove((R+28),(R+0),4);
}
B57c33d:{NFSU2_TR(0x57c33d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x1c8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B57c343:{NFSU2_TR(0x57c343);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c344:{NFSU2_TR(0x57c344);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c345:{NFSU2_TR(0x57c345);
w4(R+4,u32(0x865980ull));
}
B57c34a:{NFSU2_TR(0x57c34a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8655a0ull))));
}
B57c350:{NFSU2_TR(0x57c350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c355ull));
TAIL_STATIC(0x5719c0u,571);
}
B57c355:L57c355:{c.instructions+=3;NFSU2_TR(0x57c355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57c357:{NFSU2_TR(0x57c357);
__builtin_memmove((R+4),(R+28),4);
}
B57c359:{NFSU2_TR(0x57c359);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c35eull));
TAIL_STATIC(0x502fd0u,502);
}
B57c35e:L57c35e:{c.instructions+=2;NFSU2_TR(0x57c35e);
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
B57c360:{NFSU2_TR(0x57c360);
if(r1(R+518)){{goto L57c38a;}}
}
B57c362:L57c362:{c.instructions+=2;NFSU2_TR(0x57c362);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57c365:{NFSU2_TR(0x57c365);
if(r1(R+518)){{goto L57c371;}}
}
B57c367:L57c367:{c.instructions+=3;NFSU2_TR(0x57c367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57c369:{NFSU2_TR(0x57c369);
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
B57c36b:{NFSU2_TR(0x57c36b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c362u);}goto L57c362;}}
}
B57c36d:L57c36d:{c.instructions+=4;NFSU2_TR(0x57c36d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c36e:{NFSU2_TR(0x57c36e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c36f:{NFSU2_TR(0x57c36f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57c370:{NFSU2_TR(0x57c370);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c371:L57c371:{c.instructions+=8;NFSU2_TR(0x57c371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57c373:{NFSU2_TR(0x57c373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c376:{NFSU2_TR(0x57c376);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57c378:{NFSU2_TR(0x57c378);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c37b:{NFSU2_TR(0x57c37b);
__builtin_memmove((R+0),gp(0x8650bc),4);
}
B57c380:{NFSU2_TR(0x57c380);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c381:{NFSU2_TR(0x57c381);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c382:{NFSU2_TR(0x57c382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c387ull));
TAIL_STATIC(0x43f920u,43f);
}
B57c387:L57c387:{c.instructions+=1;NFSU2_TR(0x57c387);
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
B57c38a:L57c38a:{c.instructions+=4;NFSU2_TR(0x57c38a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c38b:{NFSU2_TR(0x57c38b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c38c:{NFSU2_TR(0x57c38c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57c38d:{NFSU2_TR(0x57c38d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c390:L57c390:{c.instructions+=2;NFSU2_TR(0x57c390);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c391:{NFSU2_TR(0x57c391);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57c393:L57c393:{c.instructions+=3;NFSU2_TR(0x57c393);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c395:{NFSU2_TR(0x57c395);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c396:{NFSU2_TR(0x57c396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c39bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c330u);}goto L57c330;}
}
B57c39b:L57c39b:{c.instructions+=5;NFSU2_TR(0x57c39b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c39d:{NFSU2_TR(0x57c39d);
u8 U[4];
w4(U+0,u32(0x571a20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c3a2:{NFSU2_TR(0x57c3a2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c3a4:{NFSU2_TR(0x57c3a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c3a5:{NFSU2_TR(0x57c3a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c3aaull));
TAIL_STATIC(0x579410u,579);
}
B57c3aa:L57c3aa:{c.instructions+=4;NFSU2_TR(0x57c3aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B57c3ad:{NFSU2_TR(0x57c3ad);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57c3ae:{NFSU2_TR(0x57c3ae);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B57c3b1:{NFSU2_TR(0x57c3b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c393u);}goto L57c393;}}
}
B57c3b3:L57c3b3:{c.instructions+=2;NFSU2_TR(0x57c3b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c3b4:{NFSU2_TR(0x57c3b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c3c0:L57c3c0:{c.instructions+=2;NFSU2_TR(0x57c3c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c3c1:{NFSU2_TR(0x57c3c1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57c3c3:L57c3c3:{c.instructions+=4;NFSU2_TR(0x57c3c3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c3c5:{NFSU2_TR(0x57c3c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c3c6:{NFSU2_TR(0x57c3c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8647a0ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B57c3cd:{NFSU2_TR(0x57c3cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c3d2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c330u);}goto L57c330;}
}
B57c3d2:L57c3d2:{c.instructions+=4;NFSU2_TR(0x57c3d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57c3d5:{NFSU2_TR(0x57c3d5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57c3d6:{NFSU2_TR(0x57c3d6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B57c3d9:{NFSU2_TR(0x57c3d9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c3c3u);}goto L57c3c3;}}
}
B57c3db:L57c3db:{c.instructions+=3;NFSU2_TR(0x57c3db);
s1(0x8650c0,u8(0x0ull));
}
B57c3e2:{NFSU2_TR(0x57c3e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c3e3:{NFSU2_TR(0x57c3e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c3f0:L57c3f0:{c.instructions+=7;NFSU2_TR(0x57c3f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B57c3f3:{NFSU2_TR(0x57c3f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c3f4:{NFSU2_TR(0x57c3f4);
__builtin_memmove((R+20),(R+4),4);
}
B57c3f6:{NFSU2_TR(0x57c3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c3f9:{NFSU2_TR(0x57c3f9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c3fb:{NFSU2_TR(0x57c3fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c403:{NFSU2_TR(0x57c403);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57c494;}}
}
B57c409:L57c409:{c.instructions+=5;NFSU2_TR(0x57c409);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c40a:{NFSU2_TR(0x57c40a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57c40d:{NFSU2_TR(0x57c40d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c40e:{NFSU2_TR(0x57c40e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c412:{NFSU2_TR(0x57c412);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c413:L57c413:{c.instructions+=11;NFSU2_TR(0x57c413);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c417:{NFSU2_TR(0x57c417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B57c419:{NFSU2_TR(0x57c419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57c41c:{NFSU2_TR(0x57c41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57c41f:{NFSU2_TR(0x57c41f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57c422:{NFSU2_TR(0x57c422);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c425:{NFSU2_TR(0x57c425);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B57c427:{NFSU2_TR(0x57c427);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57c42a:{NFSU2_TR(0x57c42a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B57c42c:{NFSU2_TR(0x57c42c);
__builtin_memmove((R+8),(R+4),4);
}
B57c42e:{NFSU2_TR(0x57c42e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B57c431:L57c431:{c.instructions+=1;NFSU2_TR(0x57c431);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L57c433;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c431u);}goto L57c431;}
}
B57c433:L57c433:{c.instructions+=2;NFSU2_TR(0x57c433);
__builtin_memmove((R+4),(R+8),4);
}
B57c435:{NFSU2_TR(0x57c435);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B57c438:L57c438:{c.instructions+=1;NFSU2_TR(0x57c438);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L57c43a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c438u);}goto L57c438;}
}
B57c43a:L57c43a:{c.instructions+=3;NFSU2_TR(0x57c43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c43d:{NFSU2_TR(0x57c43d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c43f:{NFSU2_TR(0x57c43f);
if(r1(R+518)){{goto L57c466;}}
}
B57c441:L57c441:{c.instructions+=4;NFSU2_TR(0x57c441);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c444:{NFSU2_TR(0x57c444);
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
B57c446:{NFSU2_TR(0x57c446);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57c44a:{NFSU2_TR(0x57c44a);
if(r1(R+518)){{goto L57c45c;}}
}
B57c44c:L57c44c:{c.instructions+=6;NFSU2_TR(0x57c44c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c44f:{NFSU2_TR(0x57c44f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c450:{NFSU2_TR(0x57c450);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c453:{NFSU2_TR(0x57c453);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c454:{NFSU2_TR(0x57c454);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c455:{NFSU2_TR(0x57c455);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c457ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B57c457:L57c457:{c.instructions+=2;NFSU2_TR(0x57c457);
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57c45a:{NFSU2_TR(0x57c45a);
{goto L57c466;}
}
B57c45c:L57c45c:{c.instructions+=4;NFSU2_TR(0x57c45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c45f:{NFSU2_TR(0x57c45f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c460:{NFSU2_TR(0x57c460);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c461:{NFSU2_TR(0x57c461);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c463ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B57c463:L57c463:{c.instructions+=1;NFSU2_TR(0x57c463);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57c466:L57c466:{c.instructions+=4;NFSU2_TR(0x57c466);
__builtin_memmove((R+8),gp(0x8650f0),4);
}
B57c46c:{NFSU2_TR(0x57c46c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c46d:{NFSU2_TR(0x57c46d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c46e:{NFSU2_TR(0x57c46e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c473ull));
TAIL_STATIC(0x43f920u,43f);
}
B57c473:L57c473:{c.instructions+=10;NFSU2_TR(0x57c473);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c477:{NFSU2_TR(0x57c477);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57c47b:{NFSU2_TR(0x57c47b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c47e:{NFSU2_TR(0x57c47e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57c481:{NFSU2_TR(0x57c481);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57c482:{NFSU2_TR(0x57c482);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B57c485:{NFSU2_TR(0x57c485);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57c487:{NFSU2_TR(0x57c487);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c48b:{NFSU2_TR(0x57c48b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c48f:{NFSU2_TR(0x57c48f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c413u);}goto L57c413;}}
}
B57c491:L57c491:{c.instructions+=3;NFSU2_TR(0x57c491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c492:{NFSU2_TR(0x57c492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c493:{NFSU2_TR(0x57c493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57c494:L57c494:{c.instructions+=3;NFSU2_TR(0x57c494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57c495:{NFSU2_TR(0x57c495);
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
B57c498:{NFSU2_TR(0x57c498);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c4a0:L57c4a0:{c.instructions+=7;NFSU2_TR(0x57c4a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c4a2:{NFSU2_TR(0x57c4a2);
u8 U[4];
w4(U+0,u32(0x77889bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c4a7:{NFSU2_TR(0x57c4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c4ad:{NFSU2_TR(0x57c4ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c4ae:{NFSU2_TR(0x57c4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c4b5:{NFSU2_TR(0x57c4b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c4b6:{NFSU2_TR(0x57c4b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c4b7:L57c4b7:{c.instructions+=2;NFSU2_TR(0x57c4b7);
u8 U[14];
__builtin_memmove((U+6),gp(0x865108),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57c4be:{NFSU2_TR(0x57c4be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57c4e1;}}
}
B57c4c0:L57c4c0:{c.instructions+=3;NFSU2_TR(0x57c4c0);
__builtin_memmove((R+24),gp(0x866584),4);
}
B57c4c6:{NFSU2_TR(0x57c4c6);
w4(R+4,u32(0x866584ull));
}
B57c4cb:{NFSU2_TR(0x57c4cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c4d0ull));
TAIL_STATIC(0x502fd0u,502);
}
B57c4d0:L57c4d0:{c.instructions+=2;NFSU2_TR(0x57c4d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57c4d2:{NFSU2_TR(0x57c4d2);
if(r1(R+518)){{goto L57c4e1;}}
}
B57c4d4:L57c4d4:{c.instructions+=3;NFSU2_TR(0x57c4d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c4d7:{NFSU2_TR(0x57c4d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c4d9:{NFSU2_TR(0x57c4d9);
if(r1(R+518)){{goto L57c539;}}
}
B57c4db:L57c4db:{c.instructions+=3;NFSU2_TR(0x57c4db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57c4dd:{NFSU2_TR(0x57c4dd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57c4df:{NFSU2_TR(0x57c4df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c4d4u);}goto L57c4d4;}}
}
B57c4e1:L57c4e1:{c.instructions+=3;NFSU2_TR(0x57c4e1);
__builtin_memmove((R+8),gp(0x865104),4);
}
B57c4e7:{NFSU2_TR(0x57c4e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c4e8:{NFSU2_TR(0x57c4e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c4edull));
TAIL_STATIC(0x440e50u,440);
}
B57c4ed:L57c4ed:{c.instructions+=6;NFSU2_TR(0x57c4ed);
__builtin_memmove((R+24),(R+0),4);
}
B57c4ef:{NFSU2_TR(0x57c4ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57c4f2:{NFSU2_TR(0x57c4f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c4f6:{NFSU2_TR(0x57c4f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c4f8:{NFSU2_TR(0x57c4f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c500:{NFSU2_TR(0x57c500);
if(r1(R+518)){{goto L57c57d;}}
}
B57c502:L57c502:{c.instructions+=13;NFSU2_TR(0x57c502);
__builtin_memmove((R+4),gp(0x865108),4);
}
B57c508:{NFSU2_TR(0x57c508);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c50c:{NFSU2_TR(0x57c50c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57c510:{NFSU2_TR(0x57c510);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57c511:{NFSU2_TR(0x57c511);
__builtin_memmove(gp(0x865108),(R+4),4);
}
B57c517:{NFSU2_TR(0x57c517);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c51b:{NFSU2_TR(0x57c51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c51e:{NFSU2_TR(0x57c51e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c51f:{NFSU2_TR(0x57c51f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57c522:{NFSU2_TR(0x57c522);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c523:{NFSU2_TR(0x57c523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c52a:{NFSU2_TR(0x57c52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c52d:{NFSU2_TR(0x57c52d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c532ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B57c532:L57c532:{c.instructions+=3;NFSU2_TR(0x57c532);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57c535:{NFSU2_TR(0x57c535);
__builtin_memmove((R+0),(R+24),4);
}
B57c537:{NFSU2_TR(0x57c537);
{goto L57c57f;}
}
B57c539:L57c539:{c.instructions+=12;NFSU2_TR(0x57c539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57c53b:{NFSU2_TR(0x57c53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c53e:{NFSU2_TR(0x57c53e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57c540:{NFSU2_TR(0x57c540);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c543:{NFSU2_TR(0x57c543);
__builtin_memmove((R+4),gp(0x865108),4);
}
B57c549:{NFSU2_TR(0x57c549);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B57c54a:{NFSU2_TR(0x57c54a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c54c:{NFSU2_TR(0x57c54c);
__builtin_memmove(gp(0x865108),(R+4),4);
}
B57c552:{NFSU2_TR(0x57c552);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c555:{NFSU2_TR(0x57c555);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c557:{NFSU2_TR(0x57c557);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c558:{NFSU2_TR(0x57c558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c55dull));
TAIL_STATIC(0x6f7790u,6f7);
}
B57c55d:L57c55d:{c.instructions+=3;NFSU2_TR(0x57c55d);
u8 U[4];
w4(U+0,u32(0x5755d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c562:{NFSU2_TR(0x57c562);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c563:{NFSU2_TR(0x57c563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c568ull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B57c568:L57c568:{c.instructions+=4;NFSU2_TR(0x57c568);
__builtin_memmove((R+4),gp(0x865104),4);
}
B57c56e:{NFSU2_TR(0x57c56e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c56f:{NFSU2_TR(0x57c56f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c570:{NFSU2_TR(0x57c570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c575ull));
TAIL_STATIC(0x43f920u,43f);
}
B57c575:L57c575:{c.instructions+=2;NFSU2_TR(0x57c575);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B57c578:{NFSU2_TR(0x57c578);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c4b7u);}goto L57c4b7;}
}
B57c57d:L57c57d:{c.instructions+=1;NFSU2_TR(0x57c57d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57c57f:L57c57f:{c.instructions+=10;NFSU2_TR(0x57c57f);
__builtin_memmove((R+4),gp(0x866588),4);
}
B57c585:{NFSU2_TR(0x57c585);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57c587:{NFSU2_TR(0x57c587);
__builtin_memmove(gp(0x866588),(R+0),4);
}
B57c58c:{NFSU2_TR(0x57c58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c58f:{NFSU2_TR(0x57c58f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c593:{NFSU2_TR(0x57c593);
u8 U[4];
w4(U+0,u32(0x866584ull));
s4(u32(r4(R+0)),r4(U+0));
}
B57c599:{NFSU2_TR(0x57c599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c59a:{NFSU2_TR(0x57c59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c5a1:{NFSU2_TR(0x57c5a1);
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
B57c5a4:{NFSU2_TR(0x57c5a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c5b0:L57c5b0:{c.instructions+=11;NFSU2_TR(0x57c5b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd8ull))));
}
B57c5b6:{NFSU2_TR(0x57c5b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c5b7:{NFSU2_TR(0x57c5b7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c5b8:{NFSU2_TR(0x57c5b8);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57c5bf:{NFSU2_TR(0x57c5bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c5c0:{NFSU2_TR(0x57c5c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c5c1:{NFSU2_TR(0x57c5c1);
__builtin_memmove((R+24),(R+4),4);
}
B57c5c3:{NFSU2_TR(0x57c5c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c5c6:{NFSU2_TR(0x57c5c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c5c7:{NFSU2_TR(0x57c5c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c5c8:{NFSU2_TR(0x57c5c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c5cdull));
TAIL_STATIC(0x43dbd0u,43d);
}
B57c5cd:L57c5cd:{c.instructions+=11;NFSU2_TR(0x57c5cd);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c5d4:{NFSU2_TR(0x57c5d4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57c5d6:{NFSU2_TR(0x57c5d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57c5d9:{NFSU2_TR(0x57c5d9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x6ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57c5db:{NFSU2_TR(0x57c5db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57c5dd:{NFSU2_TR(0x57c5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c5e4:{NFSU2_TR(0x57c5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c5e7:{NFSU2_TR(0x57c5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c5ea:{NFSU2_TR(0x57c5ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c5ed:{NFSU2_TR(0x57c5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c5f0:{NFSU2_TR(0x57c5f0);
if(r1(R+518)){{goto L57c602;}}
}
B57c5f2:L57c5f2:{c.instructions+=2;NFSU2_TR(0x57c5f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c5f3:{NFSU2_TR(0x57c5f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c5f8ull));
TAIL_STATIC(0x57b5d0u,57b);
}
B57c5f8:L57c5f8:{c.instructions+=2;NFSU2_TR(0x57c5f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c5ff:{NFSU2_TR(0x57c5ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57c602:L57c602:{c.instructions+=2;NFSU2_TR(0x57c602);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B57c605:{NFSU2_TR(0x57c605);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c62a;}}
}
B57c607:L57c607:{c.instructions+=4;NFSU2_TR(0x57c607);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c609:{NFSU2_TR(0x57c609);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c60b:{NFSU2_TR(0x57c60b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c60c:{NFSU2_TR(0x57c60c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c611ull));
TAIL_STATIC(0x6f8710u,6f8);
}
B57c611:L57c611:{c.instructions+=3;NFSU2_TR(0x57c611);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57c614:{NFSU2_TR(0x57c614);
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
B57c616:{NFSU2_TR(0x57c616);
if(r1(R+518)){{goto L57c62a;}}
}
B57c618:L57c618:{c.instructions+=4;NFSU2_TR(0x57c618);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c61a:{NFSU2_TR(0x57c61a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c61b:{NFSU2_TR(0x57c61b);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c622:{NFSU2_TR(0x57c622);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c627ull));
TAIL_STATIC(0x6f879au,6f8);
}
B57c627:L57c627:{c.instructions+=1;NFSU2_TR(0x57c627);
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
B57c62a:L57c62a:{c.instructions+=2;NFSU2_TR(0x57c62a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c62b:{NFSU2_TR(0x57c62b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c630ull));
TAIL_STATIC(0x5798f0u,579);
}
B57c630:L57c630:{c.instructions+=4;NFSU2_TR(0x57c630);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57c633:{NFSU2_TR(0x57c633);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57c635:{NFSU2_TR(0x57c635);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57c63c:{NFSU2_TR(0x57c63c);
if(r1(R+518)){{goto L57c657;}}
}
B57c63e:L57c63e:{c.instructions+=2;NFSU2_TR(0x57c63e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57c641:{NFSU2_TR(0x57c641);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c657;}}
}
B57c643:L57c643:{c.instructions+=6;NFSU2_TR(0x57c643);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B57c646:{NFSU2_TR(0x57c646);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c649:{NFSU2_TR(0x57c649);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c64c:{NFSU2_TR(0x57c64c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57c64f:{NFSU2_TR(0x57c64f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c652:{NFSU2_TR(0x57c652);
{goto L57c771;}
}
B57c657:L57c657:{c.instructions+=2;NFSU2_TR(0x57c657);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c658:{NFSU2_TR(0x57c658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c65dull));
TAIL_STATIC(0x579870u,579);
}
B57c65d:L57c65d:{c.instructions+=3;NFSU2_TR(0x57c65d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57c660:{NFSU2_TR(0x57c660);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c662:{NFSU2_TR(0x57c662);
if(r1(R+518)){{goto L57c678;}}
}
B57c664:L57c664:{c.instructions+=2;NFSU2_TR(0x57c664);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c665:{NFSU2_TR(0x57c665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c66aull));
TAIL_STATIC(0x579870u,579);
}
B57c66a:L57c66a:{c.instructions+=4;NFSU2_TR(0x57c66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c66d:{NFSU2_TR(0x57c66d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57c670:{NFSU2_TR(0x57c670);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c673:{NFSU2_TR(0x57c673);
{goto L57c774;}
}
B57c678:L57c678:{c.instructions+=2;NFSU2_TR(0x57c678);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57c67b:{NFSU2_TR(0x57c67b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c6f4;}}
}
B57c67d:L57c67d:{c.instructions+=7;NFSU2_TR(0x57c67d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57c681:{NFSU2_TR(0x57c681);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c682:{NFSU2_TR(0x57c682);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57c686:{NFSU2_TR(0x57c686);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c687:{NFSU2_TR(0x57c687);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c688:{NFSU2_TR(0x57c688);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c689:{NFSU2_TR(0x57c689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c68eull));
TAIL_STATIC(0x6f7c54u,6f7);
}
B57c68e:L57c68e:{c.instructions+=3;NFSU2_TR(0x57c68e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57c691:{NFSU2_TR(0x57c691);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57c693:{NFSU2_TR(0x57c693);
if(r1(R+518)){{goto L57c69c;}}
}
B57c695:L57c695:{c.instructions+=2;NFSU2_TR(0x57c695);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c699:{NFSU2_TR(0x57c699);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c69c:L57c69c:{c.instructions+=3;NFSU2_TR(0x57c69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c69f:{NFSU2_TR(0x57c69f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57c6a1:{NFSU2_TR(0x57c6a1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57c71f;}}
}
B57c6a3:L57c6a3:{c.instructions+=3;NFSU2_TR(0x57c6a3);
__builtin_memmove((R+0),gp(0x80057f),1);
}
B57c6a8:{NFSU2_TR(0x57c6a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57c6aa:{NFSU2_TR(0x57c6aa);
if(r1(R+518)){{goto L57c71f;}}
}
B57c6ac:L57c6ac:{c.instructions+=10;NFSU2_TR(0x57c6ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6ad:{NFSU2_TR(0x57c6ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57c6b1:{NFSU2_TR(0x57c6b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6b2:{NFSU2_TR(0x57c6b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57c6b6:{NFSU2_TR(0x57c6b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6b7:{NFSU2_TR(0x57c6b7);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57c6bb:{NFSU2_TR(0x57c6bb);
u8 U[5];
w4(U+0,u32(u32(u32(0x2dull))+u32(r4(R+16))));
w1(U+4,u8(0x3aull));
s1(u32(r4(U+0)),r1(U+4));
}
B57c6c0:{NFSU2_TR(0x57c6c0);
u8 U[5];
w4(U+0,u32(u32(u32(0x2eull))+u32(r4(R+16))));
w1(U+4,u8(0x5cull));
s1(u32(r4(U+0)),r1(U+4));
}
B57c6c5:{NFSU2_TR(0x57c6c5);
u8 U[5];
w4(U+0,u32(u32(u32(0x2full))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57c6ca:{NFSU2_TR(0x57c6ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c6cfull));
TAIL_STATIC(0x43dda0u,43d);
}
B57c6cf:L57c6cf:{c.instructions+=6;NFSU2_TR(0x57c6cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6d1:{NFSU2_TR(0x57c6d1);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6d3:{NFSU2_TR(0x57c6d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57c6d7:{NFSU2_TR(0x57c6d7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6d9:{NFSU2_TR(0x57c6d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6da:{NFSU2_TR(0x57c6da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c6dfull));
TAIL_STATIC(0x6f7c1bu,6f7);
}
B57c6df:L57c6df:{c.instructions+=3;NFSU2_TR(0x57c6df);
__builtin_memmove((R+28),(R+0),4);
}
B57c6e1:{NFSU2_TR(0x57c6e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6e2:{NFSU2_TR(0x57c6e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c6e7ull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B57c6e7:L57c6e7:{c.instructions+=3;NFSU2_TR(0x57c6e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6e8:{NFSU2_TR(0x57c6e8);
__builtin_memmove((R+12),(R+0),4);
}
B57c6ea:{NFSU2_TR(0x57c6ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c6efull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B57c6ef:L57c6ef:{c.instructions+=2;NFSU2_TR(0x57c6ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B57c6f2:{NFSU2_TR(0x57c6f2);
{goto L57c717;}
}
B57c6f4:L57c6f4:{c.instructions+=1;NFSU2_TR(0x57c6f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c6f9ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B57c6f9:L57c6f9:{c.instructions+=5;NFSU2_TR(0x57c6f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6fb:{NFSU2_TR(0x57c6fb);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6fd:{NFSU2_TR(0x57c6fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6fe:{NFSU2_TR(0x57c6fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c6ff:{NFSU2_TR(0x57c6ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c704ull));
TAIL_STATIC(0x6f7c1bu,6f7);
}
B57c704:L57c704:{c.instructions+=3;NFSU2_TR(0x57c704);
__builtin_memmove((R+28),(R+0),4);
}
B57c706:{NFSU2_TR(0x57c706);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c707:{NFSU2_TR(0x57c707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c70cull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B57c70c:L57c70c:{c.instructions+=3;NFSU2_TR(0x57c70c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c70d:{NFSU2_TR(0x57c70d);
__builtin_memmove((R+12),(R+0),4);
}
B57c70f:{NFSU2_TR(0x57c70f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c714ull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B57c714:L57c714:{c.instructions+=1;NFSU2_TR(0x57c714);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B57c717:L57c717:{c.instructions+=2;NFSU2_TR(0x57c717);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57c71a:{NFSU2_TR(0x57c71a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c71f;}}
}
B57c71c:L57c71c:{c.instructions+=1;NFSU2_TR(0x57c71c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c71f:L57c71f:{c.instructions+=3;NFSU2_TR(0x57c71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c722:{NFSU2_TR(0x57c722);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c724:{NFSU2_TR(0x57c724);
if(r1(R+518)){{goto L57c774;}}
}
B57c726:L57c726:{c.instructions+=1;NFSU2_TR(0x57c726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c72bull));
TAIL_STATIC(0x43bdf0u,43b);
}
B57c72b:L57c72b:{c.instructions+=5;NFSU2_TR(0x57c72b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c72e:{NFSU2_TR(0x57c72e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c730:{NFSU2_TR(0x57c730);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c732:{NFSU2_TR(0x57c732);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c733:{NFSU2_TR(0x57c733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c738ull));
TAIL_STATIC(0x6f7861u,6f7);
}
B57c738:L57c738:{c.instructions+=3;NFSU2_TR(0x57c738);
__builtin_memmove((R+28),(R+0),4);
}
B57c73a:{NFSU2_TR(0x57c73a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c73b:{NFSU2_TR(0x57c73b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c740ull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B57c740:L57c740:{c.instructions+=3;NFSU2_TR(0x57c740);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c741:{NFSU2_TR(0x57c741);
__builtin_memmove((R+12),(R+0),4);
}
B57c743:{NFSU2_TR(0x57c743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c748ull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B57c748:L57c748:{c.instructions+=3;NFSU2_TR(0x57c748);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57c74b:{NFSU2_TR(0x57c74b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57c74e:{NFSU2_TR(0x57c74e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c774;}}
}
B57c750:L57c750:{c.instructions+=3;NFSU2_TR(0x57c750);
u8 U[16];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57c757:{NFSU2_TR(0x57c757);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c75a:{NFSU2_TR(0x57c75a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c774;}}
}
B57c75c:L57c75c:{c.instructions+=5;NFSU2_TR(0x57c75c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57c75f:{NFSU2_TR(0x57c75f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c760:{NFSU2_TR(0x57c760);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c761:{NFSU2_TR(0x57c761);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c762:{NFSU2_TR(0x57c762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c767ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c4a0u);}goto L57c4a0;}
}
B57c767:L57c767:{c.instructions+=4;NFSU2_TR(0x57c767);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c76a:{NFSU2_TR(0x57c76a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57c76d:{NFSU2_TR(0x57c76d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57c76e:{NFSU2_TR(0x57c76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c771:L57c771:{c.instructions+=1;NFSU2_TR(0x57c771);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c774:L57c774:{c.instructions+=3;NFSU2_TR(0x57c774);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c777:{NFSU2_TR(0x57c777);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57c779:{NFSU2_TR(0x57c779);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57c788;}}
}
B57c77b:L57c77b:{c.instructions+=2;NFSU2_TR(0x57c77b);
u8 U[6];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x5ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B57c783:{NFSU2_TR(0x57c783);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c788;}}
}
B57c785:L57c785:{c.instructions+=1;NFSU2_TR(0x57c785);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c788:L57c788:{c.instructions+=7;NFSU2_TR(0x57c788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c789:{NFSU2_TR(0x57c789);
__builtin_memmove((R+0),(R+24),4);
}
B57c78b:{NFSU2_TR(0x57c78b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c78c:{NFSU2_TR(0x57c78c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57c78d:{NFSU2_TR(0x57c78d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57c78e:{NFSU2_TR(0x57c78e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xd8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xd8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xd8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57c794:{NFSU2_TR(0x57c794);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c7a0:L57c7a0:{c.instructions+=6;NFSU2_TR(0x57c7a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c7a1:{NFSU2_TR(0x57c7a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c7a2:{NFSU2_TR(0x57c7a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c7a3:{NFSU2_TR(0x57c7a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c7a4:{NFSU2_TR(0x57c7a4);
__builtin_memmove((R+12),(R+4),4);
}
B57c7a6:{NFSU2_TR(0x57c7a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c7abull));
TAIL_STATIC(0x43bdf0u,43b);
}
B57c7ab:L57c7ab:{c.instructions+=6;NFSU2_TR(0x57c7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c7ae:{NFSU2_TR(0x57c7ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57c7b2:{NFSU2_TR(0x57c7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c7b5:{NFSU2_TR(0x57c7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B57c7b8:{NFSU2_TR(0x57c7b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57c7ba:{NFSU2_TR(0x57c7ba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57c7c0;}}
}
B57c7bc:L57c7bc:{c.instructions+=2;NFSU2_TR(0x57c7bc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B57c7be:{NFSU2_TR(0x57c7be);
__builtin_memmove((R+20),(R+0),4);
}
B57c7c0:L57c7c0:{c.instructions+=3;NFSU2_TR(0x57c7c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B57c7c3:{NFSU2_TR(0x57c7c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c7c4:{NFSU2_TR(0x57c7c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c7c9ull));
TAIL_STATIC(0x579870u,579);
}
B57c7c9:L57c7c9:{c.instructions+=3;NFSU2_TR(0x57c7c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57c7cc:{NFSU2_TR(0x57c7cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c7ce:{NFSU2_TR(0x57c7ce);
if(r1(R+518)){{goto L57c812;}}
}
B57c7d0:L57c7d0:{c.instructions+=7;NFSU2_TR(0x57c7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57c7d3:{NFSU2_TR(0x57c7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57c7d6:{NFSU2_TR(0x57c7d6);
__builtin_memmove((R+4),(R+20),4);
}
B57c7d8:{NFSU2_TR(0x57c7d8);
__builtin_memmove((R+0),(R+4),4);
}
B57c7da:{NFSU2_TR(0x57c7da);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B57c7dc:{NFSU2_TR(0x57c7dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57c7e0:{NFSU2_TR(0x57c7e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B57c7e3:L57c7e3:{c.instructions+=1;NFSU2_TR(0x57c7e3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L57c7e5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c7e3u);}goto L57c7e3;}
}
B57c7e5:L57c7e5:{c.instructions+=3;NFSU2_TR(0x57c7e5);
__builtin_memmove((R+4),(R+0),4);
}
B57c7e7:{NFSU2_TR(0x57c7e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c7eb:{NFSU2_TR(0x57c7eb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B57c7ee:L57c7ee:{c.instructions+=1;NFSU2_TR(0x57c7ee);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L57c7f0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c7eeu);}goto L57c7ee;}
}
B57c7f0:L57c7f0:{c.instructions+=5;NFSU2_TR(0x57c7f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57c7f3:{NFSU2_TR(0x57c7f3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B57c7f5:{NFSU2_TR(0x57c7f5);
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
B57c7f7:{NFSU2_TR(0x57c7f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c7fa:{NFSU2_TR(0x57c7fa);
if(r1(R+518)){{goto L57c911;}}
}
B57c800:L57c800:{c.instructions+=4;NFSU2_TR(0x57c800);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c804:{NFSU2_TR(0x57c804);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c805:{NFSU2_TR(0x57c805);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c806:{NFSU2_TR(0x57c806);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c808ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B57c808:L57c808:{c.instructions+=6;NFSU2_TR(0x57c808);
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
B57c80b:{NFSU2_TR(0x57c80b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c80c:{NFSU2_TR(0x57c80c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c80d:{NFSU2_TR(0x57c80d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57c80e:{NFSU2_TR(0x57c80e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57c80f:{NFSU2_TR(0x57c80f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c812:L57c812:{c.instructions+=2;NFSU2_TR(0x57c812);
w4(R+4,u32(0x864efcull));
}
B57c817:{NFSU2_TR(0x57c817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c81cull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B57c81c:L57c81c:{c.instructions+=3;NFSU2_TR(0x57c81c);
__builtin_memmove((R+8),gp(0x865104),4);
}
B57c822:{NFSU2_TR(0x57c822);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c823:{NFSU2_TR(0x57c823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c828ull));
TAIL_STATIC(0x440e50u,440);
}
B57c828:L57c828:{c.instructions+=5;NFSU2_TR(0x57c828);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57c82c:{NFSU2_TR(0x57c82c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B57c82e:{NFSU2_TR(0x57c82e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57c831:{NFSU2_TR(0x57c831);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57c833:{NFSU2_TR(0x57c833);
if(r1(R+518)){{goto L57c85c;}}
}
B57c835:L57c835:{c.instructions+=13;NFSU2_TR(0x57c835);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c838:{NFSU2_TR(0x57c838);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c83b:{NFSU2_TR(0x57c83b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c83f:{NFSU2_TR(0x57c83f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c842:{NFSU2_TR(0x57c842);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c846:{NFSU2_TR(0x57c846);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c849:{NFSU2_TR(0x57c849);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c84c:{NFSU2_TR(0x57c84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c84f:{NFSU2_TR(0x57c84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c852:{NFSU2_TR(0x57c852);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c855:{NFSU2_TR(0x57c855);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c858:{NFSU2_TR(0x57c858);
__builtin_memmove((R+24),(R+0),4);
}
B57c85a:{NFSU2_TR(0x57c85a);
{goto L57c85e;}
}
B57c85c:L57c85c:{c.instructions+=1;NFSU2_TR(0x57c85c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57c85e:L57c85e:{c.instructions+=12;NFSU2_TR(0x57c85e);
__builtin_memmove((R+0),gp(0x8652f4),4);
}
B57c863:{NFSU2_TR(0x57c863);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57c865:{NFSU2_TR(0x57c865);
__builtin_memmove(gp(0x8652f4),(R+24),4);
}
B57c86b:{NFSU2_TR(0x57c86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c86e:{NFSU2_TR(0x57c86e);
u8 U[4];
w4(U+0,u32(0x8652f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B57c874:{NFSU2_TR(0x57c874);
s4(0x865110,u32(u32(m4(0x865110))+u32(u32(0x1ull))));
}
B57c87a:{NFSU2_TR(0x57c87a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B57c87d:{NFSU2_TR(0x57c87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c880:{NFSU2_TR(0x57c880);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57c882:{NFSU2_TR(0x57c882);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c883:{NFSU2_TR(0x57c883);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c885:{NFSU2_TR(0x57c885);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c898;}}
}
B57c887:L57c887:{c.instructions+=5;NFSU2_TR(0x57c887);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57c889:{NFSU2_TR(0x57c889);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c88a:{NFSU2_TR(0x57c88a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B57c88d:{NFSU2_TR(0x57c88d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c88e:{NFSU2_TR(0x57c88e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c893ull));
TAIL_STATIC(0x6f7c1bu,6f7);
}
B57c893:L57c893:{c.instructions+=2;NFSU2_TR(0x57c893);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57c896:{NFSU2_TR(0x57c896);
{goto L57c8a7;}
}
B57c898:L57c898:{c.instructions+=6;NFSU2_TR(0x57c898);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c89b:{NFSU2_TR(0x57c89b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c89c:{NFSU2_TR(0x57c89c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c89d:{NFSU2_TR(0x57c89d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c89e:{NFSU2_TR(0x57c89e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c89f:{NFSU2_TR(0x57c89f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c8a4ull));
TAIL_STATIC(0x6f77bcu,6f7);
}
B57c8a4:L57c8a4:{c.instructions+=1;NFSU2_TR(0x57c8a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B57c8a7:L57c8a7:{c.instructions+=5;NFSU2_TR(0x57c8a7);
__builtin_memmove((R+28),(R+0),4);
}
B57c8a9:{NFSU2_TR(0x57c8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c8ac:{NFSU2_TR(0x57c8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+20))));
s4(u32(r4(U+0)),r4(U+4));
}
B57c8af:{NFSU2_TR(0x57c8af);
w4(R+4,u32(0x864efcull));
}
B57c8b4:{NFSU2_TR(0x57c8b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c8b9ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B57c8b9:L57c8b9:{c.instructions+=3;NFSU2_TR(0x57c8b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c8bc:{NFSU2_TR(0x57c8bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c8be:{NFSU2_TR(0x57c8be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c903;}}
}
B57c8c0:L57c8c0:{c.instructions+=3;NFSU2_TR(0x57c8c0);
u8 U[4];
w4(U+0,u32(0x57b800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c8c5:{NFSU2_TR(0x57c8c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c8c6:{NFSU2_TR(0x57c8c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c8cbull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B57c8cb:L57c8cb:{c.instructions+=4;NFSU2_TR(0x57c8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c8ce:{NFSU2_TR(0x57c8ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57c8d1:{NFSU2_TR(0x57c8d1);
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
B57c8d3:{NFSU2_TR(0x57c8d3);
if(r1(R+518)){{goto L57c911;}}
}
B57c8d5:L57c8d5:{c.instructions+=3;NFSU2_TR(0x57c8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c8d8:{NFSU2_TR(0x57c8d8);
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
B57c8da:{NFSU2_TR(0x57c8da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c911;}}
}
B57c8dc:L57c8dc:{c.instructions+=2;NFSU2_TR(0x57c8dc);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x1ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B57c8df:{NFSU2_TR(0x57c8df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c911;}}
}
B57c8e1:L57c8e1:{c.instructions+=6;NFSU2_TR(0x57c8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57c8e4:{NFSU2_TR(0x57c8e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c8e5:{NFSU2_TR(0x57c8e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c8e6:{NFSU2_TR(0x57c8e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B57c8e9:{NFSU2_TR(0x57c8e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c8ea:{NFSU2_TR(0x57c8ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c8efull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c4a0u);}goto L57c4a0;}
}
B57c8ef:L57c8ef:{c.instructions+=10;NFSU2_TR(0x57c8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57c8f2:{NFSU2_TR(0x57c8f2);
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57c8f5:{NFSU2_TR(0x57c8f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c8f6:{NFSU2_TR(0x57c8f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c8f7:{NFSU2_TR(0x57c8f7);
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
B57c8f8:{NFSU2_TR(0x57c8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c8fb:{NFSU2_TR(0x57c8fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57c8fc:{NFSU2_TR(0x57c8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c8ff:{NFSU2_TR(0x57c8ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57c900:{NFSU2_TR(0x57c900);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c903:L57c903:{c.instructions+=3;NFSU2_TR(0x57c903);
u8 U[4];
w4(U+0,u32(0x579b20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c908:{NFSU2_TR(0x57c908);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c909:{NFSU2_TR(0x57c909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c90eull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B57c90e:L57c90e:{c.instructions+=1;NFSU2_TR(0x57c90e);
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
B57c911:L57c911:{c.instructions+=5;NFSU2_TR(0x57c911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c912:{NFSU2_TR(0x57c912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c913:{NFSU2_TR(0x57c913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57c914:{NFSU2_TR(0x57c914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57c915:{NFSU2_TR(0x57c915);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57c920:L57c920:{c.instructions+=2;NFSU2_TR(0x57c920);
w4(R+4,u32(0x864efcull));
}
B57c925:{NFSU2_TR(0x57c925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c92aull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B57c92a:L57c92a:{c.instructions+=3;NFSU2_TR(0x57c92a);
__builtin_memmove((R+0),gp(0x865190),4);
}
B57c92f:{NFSU2_TR(0x57c92f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x865190ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c934:{NFSU2_TR(0x57c934);
if(r1(R+518)){{goto L57ca00;}}
}
B57c93a:L57c93a:{c.instructions+=4;NFSU2_TR(0x57c93a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c93b:{NFSU2_TR(0x57c93b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c93c:{NFSU2_TR(0x57c93c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c93d:{NFSU2_TR(0x57c93d);
__builtin_memmove((R+4),(R+4),4);
}
B57c940:L57c940:{c.instructions+=12;NFSU2_TR(0x57c940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57c942:{NFSU2_TR(0x57c942);
__builtin_memmove((R+28),(R+0),4);
}
B57c944:{NFSU2_TR(0x57c944);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c947:{NFSU2_TR(0x57c947);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57c949:{NFSU2_TR(0x57c949);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57c94c:{NFSU2_TR(0x57c94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57c94f:{NFSU2_TR(0x57c94f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B57c952:{NFSU2_TR(0x57c952);
s4(0x865110,u32(u32(m4(0x865110))-u32(u32(0x1ull))));
}
B57c958:{NFSU2_TR(0x57c958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c95b:{NFSU2_TR(0x57c95b);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B57c95d:{NFSU2_TR(0x57c95d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c95f:{NFSU2_TR(0x57c95f);
if(r1(R+518)){{goto L57c96a;}}
}
B57c961:L57c961:{c.instructions+=3;NFSU2_TR(0x57c961);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c964:{NFSU2_TR(0x57c964);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c966:{NFSU2_TR(0x57c966);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57c96a;}}
}
B57c968:L57c968:{c.instructions+=1;NFSU2_TR(0x57c968);
w1(R+12,u8(0x1ull));
}
B57c96a:L57c96a:{c.instructions+=3;NFSU2_TR(0x57c96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c96d:{NFSU2_TR(0x57c96d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c96f:{NFSU2_TR(0x57c96f);
if(r1(R+518)){{goto L57c990;}}
}
B57c971:L57c971:{c.instructions+=2;NFSU2_TR(0x57c971);
w4(R+4,u32(0x864efcull));
}
B57c976:{NFSU2_TR(0x57c976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c97bull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B57c97b:L57c97b:{c.instructions+=4;NFSU2_TR(0x57c97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c97e:{NFSU2_TR(0x57c97e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c97f:{NFSU2_TR(0x57c97f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c980:{NFSU2_TR(0x57c980);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c983ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B57c983:L57c983:{c.instructions+=3;NFSU2_TR(0x57c983);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57c986:{NFSU2_TR(0x57c986);
w4(R+4,u32(0x864efcull));
}
B57c98b:{NFSU2_TR(0x57c98b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c990ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B57c990:L57c990:{c.instructions+=4;NFSU2_TR(0x57c990);
__builtin_memmove((R+4),gp(0x865104),4);
}
B57c996:{NFSU2_TR(0x57c996);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c997:{NFSU2_TR(0x57c997);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c998:{NFSU2_TR(0x57c998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c99dull));
TAIL_STATIC(0x43f920u,43f);
}
B57c99d:L57c99d:{c.instructions+=3;NFSU2_TR(0x57c99d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57c9a0:{NFSU2_TR(0x57c9a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57c9a2:{NFSU2_TR(0x57c9a2);
if(r1(R+518)){{goto L57c9ed;}}
}
B57c9a4:L57c9a4:{c.instructions+=3;NFSU2_TR(0x57c9a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c9a7:{NFSU2_TR(0x57c9a7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57c9a9:{NFSU2_TR(0x57c9a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57c9dd;}}
}
B57c9ab:L57c9ab:{c.instructions+=3;NFSU2_TR(0x57c9ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c9ae:{NFSU2_TR(0x57c9ae);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c9b0:{NFSU2_TR(0x57c9b0);
if(r1(R+518)){{goto L57c9b7;}}
}
B57c9b2:L57c9b2:{c.instructions+=2;NFSU2_TR(0x57c9b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B57c9b5:{NFSU2_TR(0x57c9b5);
{goto L57c9d6;}
}
B57c9b7:L57c9b7:{c.instructions+=3;NFSU2_TR(0x57c9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57c9ba:{NFSU2_TR(0x57c9ba);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c9bc:{NFSU2_TR(0x57c9bc);
if(r1(R+518)){{goto L57c9d6;}}
}
B57c9be:L57c9be:{c.instructions+=4;NFSU2_TR(0x57c9be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c9c0:{NFSU2_TR(0x57c9c0);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c9c2:{NFSU2_TR(0x57c9c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c9c3:{NFSU2_TR(0x57c9c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c9c8ull));
TAIL_STATIC(0x6f7790u,6f7);
}
B57c9c8:L57c9c8:{c.instructions+=3;NFSU2_TR(0x57c9c8);
u8 U[4];
w4(U+0,u32(0x5755d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c9cd:{NFSU2_TR(0x57c9cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c9ce:{NFSU2_TR(0x57c9ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c9d3ull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B57c9d3:L57c9d3:{c.instructions+=1;NFSU2_TR(0x57c9d3);
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57c9d6:L57c9d6:{c.instructions+=1;NFSU2_TR(0x57c9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57c9dd:L57c9dd:{c.instructions+=4;NFSU2_TR(0x57c9dd);
__builtin_memmove((R+8),gp(0x865104),4);
}
B57c9e3:{NFSU2_TR(0x57c9e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c9e4:{NFSU2_TR(0x57c9e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57c9e5:{NFSU2_TR(0x57c9e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57c9eaull));
TAIL_STATIC(0x43f920u,43f);
}
B57c9ea:L57c9ea:{c.instructions+=1;NFSU2_TR(0x57c9ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57c9ed:L57c9ed:{c.instructions+=3;NFSU2_TR(0x57c9ed);
__builtin_memmove((R+0),gp(0x865190),4);
}
B57c9f2:{NFSU2_TR(0x57c9f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x865190ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57c9f7:{NFSU2_TR(0x57c9f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c940u);}goto L57c940;}}
}
B57c9fd:L57c9fd:{c.instructions+=3;NFSU2_TR(0x57c9fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57c9fe:{NFSU2_TR(0x57c9fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57c9ff:{NFSU2_TR(0x57c9ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57ca00:L57ca00:{c.instructions+=2;NFSU2_TR(0x57ca00);
w4(R+4,u32(0x864efcull));
}
B57ca05:{NFSU2_TR(0x57ca05);
TAIL_STATIC(0x6f55e8u,6f5);
}
B57ca10:L57ca10:{c.instructions+=10;NFSU2_TR(0x57ca10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca12:{NFSU2_TR(0x57ca12);
u8 U[4];
w4(U+0,u32(0x77889bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca17:{NFSU2_TR(0x57ca17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ca1d:{NFSU2_TR(0x57ca1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca1e:{NFSU2_TR(0x57ca1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ca25:{NFSU2_TR(0x57ca25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca26:{NFSU2_TR(0x57ca26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca27:{NFSU2_TR(0x57ca27);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57ca2b:{NFSU2_TR(0x57ca2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca2c:{NFSU2_TR(0x57ca2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ca31ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B57ca31:L57ca31:{c.instructions+=3;NFSU2_TR(0x57ca31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57ca34:{NFSU2_TR(0x57ca34);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57ca39:{NFSU2_TR(0x57ca39);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57caab;}}
}
B57ca3b:L57ca3b:{c.instructions+=3;NFSU2_TR(0x57ca3b);
__builtin_memmove((R+0),gp(0x865104),4);
}
B57ca40:{NFSU2_TR(0x57ca40);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ca42:{NFSU2_TR(0x57ca42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57ca69;}}
}
B57ca44:L57ca44:{c.instructions+=2;NFSU2_TR(0x57ca44);
w4(R+4,u32(0x864efcull));
}
B57ca49:{NFSU2_TR(0x57ca49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ca4eull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B57ca4e:L57ca4e:{c.instructions+=5;NFSU2_TR(0x57ca4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca50:{NFSU2_TR(0x57ca50);
u8 U[4];
w4(U+0,u32(0x7a0468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca55:{NFSU2_TR(0x57ca55);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca57:{NFSU2_TR(0x57ca57);
u8 U[4];
w4(U+0,u32(0xf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca5c:{NFSU2_TR(0x57ca5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ca61ull));
TAIL_STATIC(0x440df0u,440);
}
B57ca61:L57ca61:{c.instructions+=2;NFSU2_TR(0x57ca61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57ca64:{NFSU2_TR(0x57ca64);
__builtin_memmove(gp(0x865104),(R+0),4);
}
B57ca69:L57ca69:{c.instructions+=2;NFSU2_TR(0x57ca69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca6a:{NFSU2_TR(0x57ca6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ca6full));
TAIL_STATIC(0x440e50u,440);
}
B57ca6f:L57ca6f:{c.instructions+=5;NFSU2_TR(0x57ca6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57ca72:{NFSU2_TR(0x57ca72);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ca76:{NFSU2_TR(0x57ca76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ca78:{NFSU2_TR(0x57ca78);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57ca80:{NFSU2_TR(0x57ca80);
if(r1(R+518)){{goto L57ca91;}}
}
B57ca82:L57ca82:{c.instructions+=5;NFSU2_TR(0x57ca82);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57ca86:{NFSU2_TR(0x57ca86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca87:{NFSU2_TR(0x57ca87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ca88:{NFSU2_TR(0x57ca88);
__builtin_memmove((R+4),(R+0),4);
}
B57ca8a:{NFSU2_TR(0x57ca8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ca8full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57c5b0u);}goto L57c5b0;}
}
B57ca8f:L57ca8f:{c.instructions+=1;NFSU2_TR(0x57ca8f);
{goto L57ca93;}
}
B57ca91:L57ca91:{c.instructions+=1;NFSU2_TR(0x57ca91);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57ca93:L57ca93:{c.instructions+=4;NFSU2_TR(0x57ca93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57ca96:{NFSU2_TR(0x57ca96);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57ca98:{NFSU2_TR(0x57ca98);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57caa0:{NFSU2_TR(0x57caa0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57caad;}}
}
B57caa2:L57caa2:{c.instructions+=3;NFSU2_TR(0x57caa2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57caa4:{NFSU2_TR(0x57caa4);
__builtin_memmove((R+4),(R+0),4);
}
B57caa6:{NFSU2_TR(0x57caa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57caabull));
TAIL_STATIC(0x579b90u,579);
}
B57caab:L57caab:{c.instructions+=1;NFSU2_TR(0x57caab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57caad:L57caad:{c.instructions+=5;NFSU2_TR(0x57caad);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cab1:{NFSU2_TR(0x57cab1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57cab2:{NFSU2_TR(0x57cab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cab9:{NFSU2_TR(0x57cab9);
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
B57cabc:{NFSU2_TR(0x57cabc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cac0:L57cac0:{c.instructions+=5;NFSU2_TR(0x57cac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cac4:{NFSU2_TR(0x57cac4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cac6:{NFSU2_TR(0x57cac6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cac8:{NFSU2_TR(0x57cac8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cac9:{NFSU2_TR(0x57cac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57caceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ca10u);}goto L57ca10;}
}
B57cace:L57cace:{c.instructions+=3;NFSU2_TR(0x57cace);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57cad1:{NFSU2_TR(0x57cad1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57cad3:{NFSU2_TR(0x57cad3);
if(r1(R+518)){{goto L57cafa;}}
}
B57cad5:L57cad5:{c.instructions+=5;NFSU2_TR(0x57cad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cad8:{NFSU2_TR(0x57cad8);
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
B57cada:{NFSU2_TR(0x57cada);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cadb:{NFSU2_TR(0x57cadb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57cade:{NFSU2_TR(0x57cade);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57caec;}}
}
B57cae0:L57cae0:{c.instructions+=4;NFSU2_TR(0x57cae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57cae7:{NFSU2_TR(0x57cae7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57caea:{NFSU2_TR(0x57caea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57caeb:{NFSU2_TR(0x57caeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57caec:L57caec:{c.instructions+=3;NFSU2_TR(0x57caec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57caee:{NFSU2_TR(0x57caee);
__builtin_memmove((R+4),(R+0),4);
}
B57caf0:{NFSU2_TR(0x57caf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57caf5ull));
TAIL_STATIC(0x579b90u,579);
}
B57caf5:L57caf5:{c.instructions+=3;NFSU2_TR(0x57caf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57caf8:{NFSU2_TR(0x57caf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57caf9:{NFSU2_TR(0x57caf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cafa:L57cafa:{c.instructions+=2;NFSU2_TR(0x57cafa);
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
B57cafc:{NFSU2_TR(0x57cafc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cb00:L57cb00:{c.instructions+=6;NFSU2_TR(0x57cb00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cb04:{NFSU2_TR(0x57cb04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb05:{NFSU2_TR(0x57cb05);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb07:{NFSU2_TR(0x57cb07);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb09:{NFSU2_TR(0x57cb09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb0a:{NFSU2_TR(0x57cb0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cb0full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ca10u);}goto L57ca10;}
}
B57cb0f:L57cb0f:{c.instructions+=4;NFSU2_TR(0x57cb0f);
__builtin_memmove((R+24),(R+0),4);
}
B57cb11:{NFSU2_TR(0x57cb11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57cb14:{NFSU2_TR(0x57cb14);
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
B57cb16:{NFSU2_TR(0x57cb16);
if(r1(R+518)){{goto L57cb63;}}
}
B57cb18:L57cb18:{c.instructions+=11;NFSU2_TR(0x57cb18);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cb1c:{NFSU2_TR(0x57cb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57cb1f:{NFSU2_TR(0x57cb1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cb22:{NFSU2_TR(0x57cb22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb23:{NFSU2_TR(0x57cb23);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57cb27:{NFSU2_TR(0x57cb27);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb29:{NFSU2_TR(0x57cb29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb2a:{NFSU2_TR(0x57cb2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb2b:{NFSU2_TR(0x57cb2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb2c:{NFSU2_TR(0x57cb2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb2d:{NFSU2_TR(0x57cb2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cb32ull));
TAIL_STATIC(0x6f876cu,6f8);
}
B57cb32:L57cb32:{c.instructions+=9;NFSU2_TR(0x57cb32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57cb35:{NFSU2_TR(0x57cb35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cb38:{NFSU2_TR(0x57cb38);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B57cb3a:{NFSU2_TR(0x57cb3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57cb3d:{NFSU2_TR(0x57cb3d);
__builtin_memmove((R+0),(R+8),4);
}
B57cb3f:{NFSU2_TR(0x57cb3f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57cb41:{NFSU2_TR(0x57cb41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cb44:{NFSU2_TR(0x57cb44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57cb45:{NFSU2_TR(0x57cb45);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57cb4a;}}
}
B57cb47:L57cb47:{c.instructions+=1;NFSU2_TR(0x57cb47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cb4a:L57cb4a:{c.instructions+=3;NFSU2_TR(0x57cb4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cb4d:{NFSU2_TR(0x57cb4d);
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
B57cb4f:{NFSU2_TR(0x57cb4f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57cb5a;}}
}
B57cb51:L57cb51:{c.instructions+=3;NFSU2_TR(0x57cb51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57cb58:{NFSU2_TR(0x57cb58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57cb59:{NFSU2_TR(0x57cb59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cb5a:L57cb5a:{c.instructions+=3;NFSU2_TR(0x57cb5a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb5c:{NFSU2_TR(0x57cb5c);
__builtin_memmove((R+4),(R+24),4);
}
B57cb5e:{NFSU2_TR(0x57cb5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cb63ull));
TAIL_STATIC(0x579b90u,579);
}
B57cb63:L57cb63:{c.instructions+=2;NFSU2_TR(0x57cb63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57cb64:{NFSU2_TR(0x57cb64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cb70:L57cb70:{c.instructions+=6;NFSU2_TR(0x57cb70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cb74:{NFSU2_TR(0x57cb74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb75:{NFSU2_TR(0x57cb75);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb77:{NFSU2_TR(0x57cb77);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb79:{NFSU2_TR(0x57cb79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb7a:{NFSU2_TR(0x57cb7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cb7full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ca10u);}goto L57ca10;}
}
B57cb7f:L57cb7f:{c.instructions+=4;NFSU2_TR(0x57cb7f);
__builtin_memmove((R+24),(R+0),4);
}
B57cb81:{NFSU2_TR(0x57cb81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57cb84:{NFSU2_TR(0x57cb84);
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
B57cb86:{NFSU2_TR(0x57cb86);
if(r1(R+518)){{goto L57cbd3;}}
}
B57cb88:L57cb88:{c.instructions+=11;NFSU2_TR(0x57cb88);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cb8c:{NFSU2_TR(0x57cb8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57cb8f:{NFSU2_TR(0x57cb8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cb92:{NFSU2_TR(0x57cb92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb93:{NFSU2_TR(0x57cb93);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57cb97:{NFSU2_TR(0x57cb97);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb99:{NFSU2_TR(0x57cb99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb9a:{NFSU2_TR(0x57cb9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb9b:{NFSU2_TR(0x57cb9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb9c:{NFSU2_TR(0x57cb9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cb9d:{NFSU2_TR(0x57cb9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cba2ull));
TAIL_STATIC(0x6f876cu,6f8);
}
B57cba2:L57cba2:{c.instructions+=9;NFSU2_TR(0x57cba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57cba5:{NFSU2_TR(0x57cba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cba8:{NFSU2_TR(0x57cba8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B57cbaa:{NFSU2_TR(0x57cbaa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57cbad:{NFSU2_TR(0x57cbad);
__builtin_memmove((R+0),(R+8),4);
}
B57cbaf:{NFSU2_TR(0x57cbaf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57cbb1:{NFSU2_TR(0x57cbb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cbb4:{NFSU2_TR(0x57cbb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57cbb5:{NFSU2_TR(0x57cbb5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57cbba;}}
}
B57cbb7:L57cbb7:{c.instructions+=1;NFSU2_TR(0x57cbb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cbba:L57cbba:{c.instructions+=3;NFSU2_TR(0x57cbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cbbd:{NFSU2_TR(0x57cbbd);
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
B57cbbf:{NFSU2_TR(0x57cbbf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57cbca;}}
}
B57cbc1:L57cbc1:{c.instructions+=3;NFSU2_TR(0x57cbc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57cbc8:{NFSU2_TR(0x57cbc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57cbc9:{NFSU2_TR(0x57cbc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cbca:L57cbca:{c.instructions+=3;NFSU2_TR(0x57cbca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cbcc:{NFSU2_TR(0x57cbcc);
__builtin_memmove((R+4),(R+24),4);
}
B57cbce:{NFSU2_TR(0x57cbce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cbd3ull));
TAIL_STATIC(0x579b90u,579);
}
B57cbd3:L57cbd3:{c.instructions+=2;NFSU2_TR(0x57cbd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57cbd4:{NFSU2_TR(0x57cbd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cbe0:L57cbe0:{c.instructions+=8;NFSU2_TR(0x57cbe0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cbe1:{NFSU2_TR(0x57cbe1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cbe2:{NFSU2_TR(0x57cbe2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57cbe6:{NFSU2_TR(0x57cbe6);
u8 U[4];
w4(U+0,u32(0x7845d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cbeb:{NFSU2_TR(0x57cbeb);
__builtin_memmove((R+20),(R+4),4);
}
B57cbed:{NFSU2_TR(0x57cbed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cbef:{NFSU2_TR(0x57cbef);
__builtin_memmove((R+4),(R+24),4);
}
B57cbf1:{NFSU2_TR(0x57cbf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cbf6ull));
TAIL_STATIC(0x578ce0u,578);
}
B57cbf6:L57cbf6:{c.instructions+=4;NFSU2_TR(0x57cbf6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57cbf9:{NFSU2_TR(0x57cbf9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57cbfb:{NFSU2_TR(0x57cbfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B57cbfe:{NFSU2_TR(0x57cbfe);
if(r1(R+518)){{goto L57cc44;}}
}
B57cc00:L57cc00:{c.instructions+=6;NFSU2_TR(0x57cc00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cc06:{NFSU2_TR(0x57cc06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57cc0c:{NFSU2_TR(0x57cc0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cc0d:{NFSU2_TR(0x57cc0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57cc10:{NFSU2_TR(0x57cc10);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57cc12:{NFSU2_TR(0x57cc12);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57cc3b;}}
}
B57cc14:L57cc14:{c.instructions+=8;NFSU2_TR(0x57cc14);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B57cc16:{NFSU2_TR(0x57cc16);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57cc1d:{NFSU2_TR(0x57cc1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57cc20:{NFSU2_TR(0x57cc20);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57cc27:{NFSU2_TR(0x57cc27);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57cc2a:{NFSU2_TR(0x57cc2a);
u8 U[13];
w4(U+0,u32(u32(u32(0x1eaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57cc31:{NFSU2_TR(0x57cc31);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57cc34:{NFSU2_TR(0x57cc34);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ebull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57cc3b:L57cc3b:{c.instructions+=3;NFSU2_TR(0x57cc3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cc41:{NFSU2_TR(0x57cc41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57cc42:{NFSU2_TR(0x57cc42);
{goto L57cc99;}
}
B57cc44:L57cc44:{c.instructions+=3;NFSU2_TR(0x57cc44);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57cc47:{NFSU2_TR(0x57cc47);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57cc49:{NFSU2_TR(0x57cc49);
if(r1(R+518)){{goto L57cc5b;}}
}
B57cc4b:L57cc4b:{c.instructions+=6;NFSU2_TR(0x57cc4b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cc4d:{NFSU2_TR(0x57cc4d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cc4f:{NFSU2_TR(0x57cc4f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cc51:{NFSU2_TR(0x57cc51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cc52:{NFSU2_TR(0x57cc52);
__builtin_memmove((R+4),(R+24),4);
}
B57cc54:{NFSU2_TR(0x57cc54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cc59ull));
TAIL_STATIC(0x5715b0u,571);
}
B57cc59:L57cc59:{c.instructions+=1;NFSU2_TR(0x57cc59);
{goto L57cc99;}
}
B57cc5b:L57cc5b:{c.instructions+=3;NFSU2_TR(0x57cc5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57cc5e:{NFSU2_TR(0x57cc5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57cc60:{NFSU2_TR(0x57cc60);
if(r1(R+518)){{goto L57cc99;}}
}
B57cc62:L57cc62:{c.instructions+=19;NFSU2_TR(0x57cc62);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B57cc65:{NFSU2_TR(0x57cc65);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B57cc69:{NFSU2_TR(0x57cc69);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x21ull))));
}
B57cc6c:{NFSU2_TR(0x57cc6c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B57cc6f:{NFSU2_TR(0x57cc6f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B57cc71:{NFSU2_TR(0x57cc71);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B57cc75:{NFSU2_TR(0x57cc75);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B57cc78:{NFSU2_TR(0x57cc78);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B57cc7c:{NFSU2_TR(0x57cc7c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B57cc7e:{NFSU2_TR(0x57cc7e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B57cc81:{NFSU2_TR(0x57cc81);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cc83:{NFSU2_TR(0x57cc83);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B57cc85:{NFSU2_TR(0x57cc85);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cc87:{NFSU2_TR(0x57cc87);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cc89:{NFSU2_TR(0x57cc89);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57cc8d:{NFSU2_TR(0x57cc8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cc8e:{NFSU2_TR(0x57cc8e);
__builtin_memmove((R+4),(R+24),4);
}
B57cc90:{NFSU2_TR(0x57cc90);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cc94:{NFSU2_TR(0x57cc94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cc99ull));
TAIL_STATIC(0x571550u,571);
}
B57cc99:L57cc99:{c.instructions+=6;NFSU2_TR(0x57cc99);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B57cc9d:{NFSU2_TR(0x57cc9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57cca0:{NFSU2_TR(0x57cca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cca3:{NFSU2_TR(0x57cca3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B57cca6:{NFSU2_TR(0x57cca6);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57cca8:{NFSU2_TR(0x57cca8);
if(r1(R+518)){{goto L57ccb1;}}
}
B57ccaa:L57ccaa:{c.instructions+=5;NFSU2_TR(0x57ccaa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccac:{NFSU2_TR(0x57ccac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccad:{NFSU2_TR(0x57ccad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccae:{NFSU2_TR(0x57ccae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccaf:{NFSU2_TR(0x57ccaf);
{goto L57cce6;}
}
B57ccb1:L57ccb1:{c.instructions+=3;NFSU2_TR(0x57ccb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57ccb4:{NFSU2_TR(0x57ccb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57ccb6:{NFSU2_TR(0x57ccb6);
if(r1(R+518)){{goto L57ccc6;}}
}
B57ccb8:L57ccb8:{c.instructions+=6;NFSU2_TR(0x57ccb8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccba:{NFSU2_TR(0x57ccba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccbb:{NFSU2_TR(0x57ccbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccbc:{NFSU2_TR(0x57ccbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccbd:{NFSU2_TR(0x57ccbd);
__builtin_memmove((R+4),(R+24),4);
}
B57ccbf:{NFSU2_TR(0x57ccbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ccc4ull));
TAIL_STATIC(0x5715b0u,571);
}
B57ccc4:L57ccc4:{c.instructions+=1;NFSU2_TR(0x57ccc4);
{goto L57cced;}
}
B57ccc6:L57ccc6:{c.instructions+=3;NFSU2_TR(0x57ccc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57ccc9:{NFSU2_TR(0x57ccc9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57cccb:{NFSU2_TR(0x57cccb);
if(r1(R+518)){{goto L57cced;}}
}
B57cccd:L57cccd:{c.instructions+=5;NFSU2_TR(0x57cccd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccce:{NFSU2_TR(0x57ccce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cccf:{NFSU2_TR(0x57cccf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccd0:{NFSU2_TR(0x57ccd0);
__builtin_memmove((R+4),(R+24),4);
}
B57ccd2:{NFSU2_TR(0x57ccd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ccd7ull));
TAIL_STATIC(0x571520u,571);
}
B57ccd7:L57ccd7:{c.instructions+=6;NFSU2_TR(0x57ccd7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccd9:{NFSU2_TR(0x57ccd9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccdb:{NFSU2_TR(0x57ccdb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccdd:{NFSU2_TR(0x57ccdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57cce1:{NFSU2_TR(0x57cce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cce5:{NFSU2_TR(0x57cce5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cce6:L57cce6:{c.instructions+=2;NFSU2_TR(0x57cce6);
__builtin_memmove((R+4),(R+24),4);
}
B57cce8:{NFSU2_TR(0x57cce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ccedull));
TAIL_STATIC(0x571550u,571);
}
B57cced:L57cced:{c.instructions+=5;NFSU2_TR(0x57cced);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ccf0:{NFSU2_TR(0x57ccf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccf1:{NFSU2_TR(0x57ccf1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ccf2:{NFSU2_TR(0x57ccf2);
__builtin_memmove((R+4),(R+20),4);
}
B57ccf4:{NFSU2_TR(0x57ccf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ccf9ull));
TAIL_STATIC(0x57b980u,57b);
}
B57ccf9:L57ccf9:{c.instructions+=2;NFSU2_TR(0x57ccf9);
__builtin_memmove((R+4),(R+24),4);
}
B57ccfb:{NFSU2_TR(0x57ccfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cd00ull));
TAIL_STATIC(0x578d90u,578);
}
B57cd00:L57cd00:{c.instructions+=3;NFSU2_TR(0x57cd00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57cd01:{NFSU2_TR(0x57cd01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57cd02:{NFSU2_TR(0x57cd02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cd10:L57cd10:{c.instructions+=8;NFSU2_TR(0x57cd10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd11:{NFSU2_TR(0x57cd11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57cd15:{NFSU2_TR(0x57cd15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd16:{NFSU2_TR(0x57cd16);
u8 U[4];
w4(U+0,u32(0x7a0940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd1b:{NFSU2_TR(0x57cd1b);
__builtin_memmove((R+28),(R+4),4);
}
B57cd1d:{NFSU2_TR(0x57cd1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd1f:{NFSU2_TR(0x57cd1f);
__builtin_memmove((R+4),(R+24),4);
}
B57cd21:{NFSU2_TR(0x57cd21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cd26ull));
TAIL_STATIC(0x578ce0u,578);
}
B57cd26:L57cd26:{c.instructions+=3;NFSU2_TR(0x57cd26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd27:{NFSU2_TR(0x57cd27);
__builtin_memmove((R+4),(R+28),4);
}
B57cd29:{NFSU2_TR(0x57cd29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cd2eull));
TAIL_STATIC(0x57b9f0u,57b);
}
B57cd2e:L57cd2e:{c.instructions+=3;NFSU2_TR(0x57cd2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd2f:{NFSU2_TR(0x57cd2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57cd32:{NFSU2_TR(0x57cd32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cd37ull));
TAIL_STATIC(0x57b9f0u,57b);
}
B57cd37:L57cd37:{c.instructions+=3;NFSU2_TR(0x57cd37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd38:{NFSU2_TR(0x57cd38);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57cd3b:{NFSU2_TR(0x57cd3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cd40ull));
TAIL_STATIC(0x57b9f0u,57b);
}
B57cd40:L57cd40:{c.instructions+=4;NFSU2_TR(0x57cd40);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57cd43:{NFSU2_TR(0x57cd43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd44:{NFSU2_TR(0x57cd44);
__builtin_memmove((R+4),(R+24),4);
}
B57cd46:{NFSU2_TR(0x57cd46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cd4bull));
TAIL_STATIC(0x571770u,571);
}
B57cd4b:L57cd4b:{c.instructions+=4;NFSU2_TR(0x57cd4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B57cd4e:{NFSU2_TR(0x57cd4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd4f:{NFSU2_TR(0x57cd4f);
__builtin_memmove((R+4),(R+24),4);
}
B57cd51:{NFSU2_TR(0x57cd51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cd56ull));
TAIL_STATIC(0x571770u,571);
}
B57cd56:L57cd56:{c.instructions+=4;NFSU2_TR(0x57cd56);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x80ull))));
}
B57cd5c:{NFSU2_TR(0x57cd5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd5d:{NFSU2_TR(0x57cd5d);
__builtin_memmove((R+4),(R+24),4);
}
B57cd5f:{NFSU2_TR(0x57cd5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cd64ull));
TAIL_STATIC(0x571770u,571);
}
B57cd64:L57cd64:{c.instructions+=2;NFSU2_TR(0x57cd64);
__builtin_memmove((R+4),(R+24),4);
}
B57cd66:{NFSU2_TR(0x57cd66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cd6bull));
TAIL_STATIC(0x578d90u,578);
}
B57cd6b:L57cd6b:{c.instructions+=3;NFSU2_TR(0x57cd6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57cd6c:{NFSU2_TR(0x57cd6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57cd6d:{NFSU2_TR(0x57cd6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cd70:L57cd70:{c.instructions+=4;NFSU2_TR(0x57cd70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd72:{NFSU2_TR(0x57cd72);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd74:{NFSU2_TR(0x57cd74);
u8 U[4];
w4(U+0,u32(0x7a0968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd79:{NFSU2_TR(0x57cd79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cd7eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ca10u);}goto L57ca10;}
}
B57cd7e:L57cd7e:{c.instructions+=3;NFSU2_TR(0x57cd7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57cd81:{NFSU2_TR(0x57cd81);
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
B57cd83:{NFSU2_TR(0x57cd83);
if(r1(R+518)){{goto L57cdd5;}}
}
B57cd85:L57cd85:{c.instructions+=5;NFSU2_TR(0x57cd85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cd88:{NFSU2_TR(0x57cd88);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57cd8a:{NFSU2_TR(0x57cd8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd8b:{NFSU2_TR(0x57cd8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57cd8e:{NFSU2_TR(0x57cd8e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57cd99;}}
}
B57cd90:L57cd90:{c.instructions+=2;NFSU2_TR(0x57cd90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57cd97:{NFSU2_TR(0x57cd97);
{goto L57cda2;}
}
B57cd99:L57cd99:{c.instructions+=3;NFSU2_TR(0x57cd99);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cd9b:{NFSU2_TR(0x57cd9b);
__builtin_memmove((R+4),(R+0),4);
}
B57cd9d:{NFSU2_TR(0x57cd9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cda2ull));
TAIL_STATIC(0x579b90u,579);
}
B57cda2:L57cda2:{c.instructions+=4;NFSU2_TR(0x57cda2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57cda5:{NFSU2_TR(0x57cda5);
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
B57cda7:{NFSU2_TR(0x57cda7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57cda8:{NFSU2_TR(0x57cda8);
if(r1(R+518)){{goto L57cdd5;}}
}
B57cdaa:L57cdaa:{c.instructions+=3;NFSU2_TR(0x57cdaa);
u8 U[4];
w4(U+0,u32(0x7a0958ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cdaf:{NFSU2_TR(0x57cdaf);
u8 U[4];
w4(U+0,u32(0x7a0968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cdb4:{NFSU2_TR(0x57cdb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cdb9ull));
TAIL_STATIC(0x57b640u,57b);
}
B57cdb9:L57cdb9:{c.instructions+=3;NFSU2_TR(0x57cdb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57cdbc:{NFSU2_TR(0x57cdbc);
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
B57cdbe:{NFSU2_TR(0x57cdbe);
if(r1(R+518)){{goto L57cdd5;}}
}
B57cdc0:L57cdc0:{c.instructions+=2;NFSU2_TR(0x57cdc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cdc1:{NFSU2_TR(0x57cdc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cdc6ull));
TAIL_STATIC(0x6f7266u,6f7);
}
B57cdc6:L57cdc6:{c.instructions+=3;NFSU2_TR(0x57cdc6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cdc8:{NFSU2_TR(0x57cdc8);
u8 U[4];
w4(U+0,u32(0x7a0460ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cdcd:{NFSU2_TR(0x57cdcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cdd2ull));
TAIL_STATIC(0x6f6e7au,6f6);
}
B57cdd2:L57cdd2:{c.instructions+=1;NFSU2_TR(0x57cdd2);
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
B57cdd5:L57cdd5:{c.instructions+=1;NFSU2_TR(0x57cdd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cde0:L57cde0:{c.instructions+=19;NFSU2_TR(0x57cde0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cde4:{NFSU2_TR(0x57cde4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57cde8:{NFSU2_TR(0x57cde8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cde9:{NFSU2_TR(0x57cde9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cdea:{NFSU2_TR(0x57cdea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cdeb:{NFSU2_TR(0x57cdeb);
__builtin_memmove((R+24),(R+4),4);
}
B57cded:{NFSU2_TR(0x57cded);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cdf1:{NFSU2_TR(0x57cdf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cdf4:{NFSU2_TR(0x57cdf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cdf8:{NFSU2_TR(0x57cdf8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cdf9:{NFSU2_TR(0x57cdf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cdfc:{NFSU2_TR(0x57cdfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ce00:{NFSU2_TR(0x57ce00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ce01:{NFSU2_TR(0x57ce01);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+20),(U+0),4);
}
B57ce04:{NFSU2_TR(0x57ce04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ce05:{NFSU2_TR(0x57ce05);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57ce09:{NFSU2_TR(0x57ce09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ce0c:{NFSU2_TR(0x57ce0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ce0f:{NFSU2_TR(0x57ce0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ce14ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B57ce14:L57ce14:{c.instructions+=15;NFSU2_TR(0x57ce14);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57ce16:{NFSU2_TR(0x57ce16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+8),(U+0),4);
}
B57ce1c:{NFSU2_TR(0x57ce1c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57ce1e:{NFSU2_TR(0x57ce1e);
__builtin_memmove((R+28),(R+8),4);
}
B57ce20:{NFSU2_TR(0x57ce20);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57ce23:{NFSU2_TR(0x57ce23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ce29:{NFSU2_TR(0x57ce29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ce2f:{NFSU2_TR(0x57ce2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ce35:{NFSU2_TR(0x57ce35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ce3b:{NFSU2_TR(0x57ce3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ce41:{NFSU2_TR(0x57ce41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ce47:{NFSU2_TR(0x57ce47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ce4d:{NFSU2_TR(0x57ce4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ce53:{NFSU2_TR(0x57ce53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57ce5d:{NFSU2_TR(0x57ce5d);
w4(R+4,u32(0xcull));
}
B57ce62:L57ce62:{c.instructions+=1;NFSU2_TR(0x57ce62);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L57ce64;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ce62u);}goto L57ce62;}
}
B57ce64:L57ce64:{c.instructions+=5;NFSU2_TR(0x57ce64);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ce68:{NFSU2_TR(0x57ce68);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ce6a:{NFSU2_TR(0x57ce6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ce6b:{NFSU2_TR(0x57ce6b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ce6c:{NFSU2_TR(0x57ce6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ce71ull));
TAIL_STATIC(0x43dc00u,43d);
}
B57ce71:L57ce71:{c.instructions+=5;NFSU2_TR(0x57ce71);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ce73:{NFSU2_TR(0x57ce73);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ce75:{NFSU2_TR(0x57ce75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ce76:{NFSU2_TR(0x57ce76);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57ce79:{NFSU2_TR(0x57ce79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ce7eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ca10u);}goto L57ca10;}
}
B57ce7e:L57ce7e:{c.instructions+=3;NFSU2_TR(0x57ce7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B57ce81:{NFSU2_TR(0x57ce81);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57ce83:{NFSU2_TR(0x57ce83);
if(r1(R+518)){{goto L57ceaf;}}
}
B57ce85:L57ce85:{c.instructions+=8;NFSU2_TR(0x57ce85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57ce88:{NFSU2_TR(0x57ce88);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57ce8a:{NFSU2_TR(0x57ce8a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57ce8c:{NFSU2_TR(0x57ce8c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B57ce8f:{NFSU2_TR(0x57ce8f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B57ce90:{NFSU2_TR(0x57ce90);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B57ce92:{NFSU2_TR(0x57ce92);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57ce95:{NFSU2_TR(0x57ce95);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57cea2;}}
}
B57ce97:L57ce97:{c.instructions+=3;NFSU2_TR(0x57ce97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57ce9e:{NFSU2_TR(0x57ce9e);
__builtin_memmove((R+0),(R+28),4);
}
B57cea0:{NFSU2_TR(0x57cea0);
{goto L57ceb2;}
}
B57cea2:L57cea2:{c.instructions+=3;NFSU2_TR(0x57cea2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cea4:{NFSU2_TR(0x57cea4);
__builtin_memmove((R+4),(R+0),4);
}
B57cea6:{NFSU2_TR(0x57cea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ceabull));
TAIL_STATIC(0x579b90u,579);
}
B57ceab:L57ceab:{c.instructions+=2;NFSU2_TR(0x57ceab);
__builtin_memmove((R+0),(R+28),4);
}
B57cead:{NFSU2_TR(0x57cead);
{goto L57ceb2;}
}
B57ceaf:L57ceaf:{c.instructions+=1;NFSU2_TR(0x57ceaf);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B57ceb2:L57ceb2:{c.instructions+=3;NFSU2_TR(0x57ceb2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57ceb4:{NFSU2_TR(0x57ceb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ceba:{NFSU2_TR(0x57ceba);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57cec2;}}
}
B57cebc:L57cebc:{c.instructions+=1;NFSU2_TR(0x57cebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cec2:L57cec2:{c.instructions+=3;NFSU2_TR(0x57cec2);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B57cec8:{NFSU2_TR(0x57cec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cece:{NFSU2_TR(0x57cece);
if(r1(R+518)){{goto L57cedd;}}
}
B57ced0:L57ced0:{c.instructions+=3;NFSU2_TR(0x57ced0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ced3:{NFSU2_TR(0x57ced3);
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
B57ced5:{NFSU2_TR(0x57ced5);
if(r1(R+518)){{goto L57cedd;}}
}
B57ced7:L57ced7:{c.instructions+=1;NFSU2_TR(0x57ced7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cedd:L57cedd:{c.instructions+=6;NFSU2_TR(0x57cedd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57cede:{NFSU2_TR(0x57cede);
__builtin_memmove((R+0),(R+24),4);
}
B57cee0:{NFSU2_TR(0x57cee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57cee1:{NFSU2_TR(0x57cee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57cee2:{NFSU2_TR(0x57cee2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57cee3:{NFSU2_TR(0x57cee3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cef0:L57cef0:{c.instructions+=9;NFSU2_TR(0x57cef0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cef2:{NFSU2_TR(0x57cef2);
u8 U[4];
w4(U+0,u32(0x7788bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cef7:{NFSU2_TR(0x57cef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cefd:{NFSU2_TR(0x57cefd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cefe:{NFSU2_TR(0x57cefe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cf05:{NFSU2_TR(0x57cf05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf06:{NFSU2_TR(0x57cf06);
__builtin_memmove((R+0),gp(0x864f78),4);
}
B57cf0b:{NFSU2_TR(0x57cf0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf0c:{NFSU2_TR(0x57cf0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cf11ull));
TAIL_STATIC(0x440e50u,440);
}
B57cf11:L57cf11:{c.instructions+=5;NFSU2_TR(0x57cf11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57cf14:{NFSU2_TR(0x57cf14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B57cf18:{NFSU2_TR(0x57cf18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57cf1a:{NFSU2_TR(0x57cf1a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57cf22:{NFSU2_TR(0x57cf22);
if(r1(R+518)){{goto L57cf46;}}
}
B57cf24:L57cf24:{c.instructions+=12;NFSU2_TR(0x57cf24);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cf28:{NFSU2_TR(0x57cf28);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57cf2c:{NFSU2_TR(0x57cf2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf2d:{NFSU2_TR(0x57cf2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cf31:{NFSU2_TR(0x57cf31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf32:{NFSU2_TR(0x57cf32);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57cf36:{NFSU2_TR(0x57cf36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf37:{NFSU2_TR(0x57cf37);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cf3b:{NFSU2_TR(0x57cf3b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf3c:{NFSU2_TR(0x57cf3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf3d:{NFSU2_TR(0x57cf3d);
__builtin_memmove((R+4),(R+0),4);
}
B57cf3f:{NFSU2_TR(0x57cf3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cf44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57cde0u);}goto L57cde0;}
}
B57cf44:L57cf44:{c.instructions+=1;NFSU2_TR(0x57cf44);
{goto L57cf48;}
}
B57cf46:L57cf46:{c.instructions+=1;NFSU2_TR(0x57cf46);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57cf48:L57cf48:{c.instructions+=9;NFSU2_TR(0x57cf48);
__builtin_memmove((R+4),gp(0x8651a8),4);
}
B57cf4e:{NFSU2_TR(0x57cf4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57cf50:{NFSU2_TR(0x57cf50);
__builtin_memmove(gp(0x8651a8),(R+0),4);
}
B57cf55:{NFSU2_TR(0x57cf55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cf58:{NFSU2_TR(0x57cf58);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cf5c:{NFSU2_TR(0x57cf5c);
u8 U[4];
w4(U+0,u32(0x8651a4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B57cf62:{NFSU2_TR(0x57cf62);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57cf69:{NFSU2_TR(0x57cf69);
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
B57cf6c:{NFSU2_TR(0x57cf6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cf70:L57cf70:{c.instructions+=12;NFSU2_TR(0x57cf70);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cf74:{NFSU2_TR(0x57cf74);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cf78:{NFSU2_TR(0x57cf78);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57cf7c:{NFSU2_TR(0x57cf7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf7d:{NFSU2_TR(0x57cf7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf7e:{NFSU2_TR(0x57cf7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cf82:{NFSU2_TR(0x57cf82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf83:{NFSU2_TR(0x57cf83);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cf87:{NFSU2_TR(0x57cf87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf88:{NFSU2_TR(0x57cf88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf89:{NFSU2_TR(0x57cf89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf8a:{NFSU2_TR(0x57cf8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cf8full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57cef0u);}goto L57cef0;}
}
B57cf8f:L57cf8f:{c.instructions+=8;NFSU2_TR(0x57cf8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57cf93:{NFSU2_TR(0x57cf93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57cf96:{NFSU2_TR(0x57cf96);
__builtin_memmove((R+24),(R+0),4);
}
B57cf98:{NFSU2_TR(0x57cf98);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cf9c:{NFSU2_TR(0x57cf9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf9d:{NFSU2_TR(0x57cf9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cf9e:{NFSU2_TR(0x57cf9e);
__builtin_memmove((R+4),(R+24),4);
}
B57cfa0:{NFSU2_TR(0x57cfa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cfa5ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57cfa5:L57cfa5:{c.instructions+=3;NFSU2_TR(0x57cfa5);
__builtin_memmove((R+0),(R+24),4);
}
B57cfa7:{NFSU2_TR(0x57cfa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57cfa8:{NFSU2_TR(0x57cfa8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57cfb0:L57cfb0:{c.instructions+=4;NFSU2_TR(0x57cfb0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cfb4:{NFSU2_TR(0x57cfb4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57cfb6:{NFSU2_TR(0x57cfb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57cfb8:{NFSU2_TR(0x57cfb8);
if(r1(R+518)){{goto L57cfbf;}}
}
B57cfba:L57cfba:{c.instructions+=1;NFSU2_TR(0x57cfba);
w4(R+0,u32(0x1ull));
}
B57cfbf:L57cfbf:{c.instructions+=3;NFSU2_TR(0x57cfbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cfc3:{NFSU2_TR(0x57cfc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57cfc5:{NFSU2_TR(0x57cfc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57cfca;}}
}
B57cfc7:L57cfc7:{c.instructions+=1;NFSU2_TR(0x57cfc7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x6ull))));
}
B57cfca:L57cfca:{c.instructions+=9;NFSU2_TR(0x57cfca);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57cfce:{NFSU2_TR(0x57cfce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cfcf:{NFSU2_TR(0x57cfcf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cfd1:{NFSU2_TR(0x57cfd1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cfd3:{NFSU2_TR(0x57cfd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cfd4:{NFSU2_TR(0x57cfd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cfd8:{NFSU2_TR(0x57cfd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cfd9:{NFSU2_TR(0x57cfd9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cfda:{NFSU2_TR(0x57cfda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cfdfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57cef0u);}goto L57cef0;}
}
B57cfdf:L57cfdf:{c.instructions+=8;NFSU2_TR(0x57cfdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57cfe3:{NFSU2_TR(0x57cfe3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57cfe6:{NFSU2_TR(0x57cfe6);
__builtin_memmove((R+24),(R+0),4);
}
B57cfe8:{NFSU2_TR(0x57cfe8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57cfec:{NFSU2_TR(0x57cfec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cfed:{NFSU2_TR(0x57cfed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57cfee:{NFSU2_TR(0x57cfee);
__builtin_memmove((R+4),(R+24),4);
}
B57cff0:{NFSU2_TR(0x57cff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57cff5ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57cff5:L57cff5:{c.instructions+=3;NFSU2_TR(0x57cff5);
__builtin_memmove((R+0),(R+24),4);
}
B57cff7:{NFSU2_TR(0x57cff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57cff8:{NFSU2_TR(0x57cff8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x57c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
