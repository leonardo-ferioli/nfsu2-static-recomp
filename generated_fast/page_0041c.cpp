#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41b(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x41c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x41c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_41c(u8* __restrict R,Cpu& c);
u32 page_41c(Cpu& c){return body_41c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_41c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x41c002:goto L41c002;
case 0x41c005:c.instructions+=6;goto B41c005;
case 0x41c006:c.instructions+=5;goto B41c006;
case 0x41c009:c.instructions+=4;goto B41c009;
case 0x41c00d:c.instructions+=3;goto B41c00d;
case 0x41c013:c.instructions+=2;goto B41c013;
case 0x41c014:c.instructions+=1;goto B41c014;
case 0x41c019:goto L41c019;
case 0x41c01f:c.instructions+=3;goto B41c01f;
case 0x41c020:c.instructions+=2;goto B41c020;
case 0x41c024:c.instructions+=1;goto B41c024;
case 0x41c029:goto L41c029;
case 0x41c02a:c.instructions+=3;goto B41c02a;
case 0x41c02e:c.instructions+=2;goto B41c02e;
case 0x41c030:c.instructions+=1;goto B41c030;
case 0x41c035:goto L41c035;
case 0x41c039:c.instructions+=8;goto B41c039;
case 0x41c03c:c.instructions+=7;goto B41c03c;
case 0x41c03f:c.instructions+=6;goto B41c03f;
case 0x41c042:c.instructions+=5;goto B41c042;
case 0x41c044:c.instructions+=4;goto B41c044;
case 0x41c047:c.instructions+=3;goto B41c047;
case 0x41c04a:c.instructions+=2;goto B41c04a;
case 0x41c04e:c.instructions+=1;goto B41c04e;
case 0x41c050:goto L41c050;
case 0x41c056:c.instructions+=1;goto B41c056;
case 0x41c058:goto L41c058;
case 0x41c05d:c.instructions+=2;goto B41c05d;
case 0x41c05f:c.instructions+=1;goto B41c05f;
case 0x41c061:goto L41c061;
case 0x41c066:c.instructions+=2;goto B41c066;
case 0x41c068:c.instructions+=1;goto B41c068;
case 0x41c06a:goto L41c06a;
case 0x41c070:c.instructions+=1;goto B41c070;
case 0x41c072:goto L41c072;
case 0x41c077:c.instructions+=2;goto B41c077;
case 0x41c079:c.instructions+=1;goto B41c079;
case 0x41c07b:goto L41c07b;
case 0x41c080:c.instructions+=2;goto B41c080;
case 0x41c082:c.instructions+=1;goto B41c082;
case 0x41c084:goto L41c084;
case 0x41c08a:c.instructions+=1;goto B41c08a;
case 0x41c08c:goto L41c08c;
case 0x41c092:goto L41c092;
case 0x41c094:c.instructions+=5;goto B41c094;
case 0x41c096:c.instructions+=4;goto B41c096;
case 0x41c098:c.instructions+=3;goto B41c098;
case 0x41c09a:c.instructions+=2;goto B41c09a;
case 0x41c09d:c.instructions+=1;goto B41c09d;
case 0x41c09f:goto L41c09f;
case 0x41c0a1:c.instructions+=4;goto B41c0a1;
case 0x41c0a3:c.instructions+=3;goto B41c0a3;
case 0x41c0a5:c.instructions+=2;goto B41c0a5;
case 0x41c0a8:c.instructions+=1;goto B41c0a8;
case 0x41c0aa:goto L41c0aa;
case 0x41c0ac:goto L41c0ac;
case 0x41c0b2:c.instructions+=6;goto B41c0b2;
case 0x41c0b4:c.instructions+=5;goto B41c0b4;
case 0x41c0b5:c.instructions+=4;goto B41c0b5;
case 0x41c0b6:c.instructions+=3;goto B41c0b6;
case 0x41c0b7:c.instructions+=2;goto B41c0b7;
case 0x41c0b8:c.instructions+=1;goto B41c0b8;
case 0x41c0ba:goto L41c0ba;
case 0x41c0bc:c.instructions+=1;goto B41c0bc;
case 0x41c0be:goto L41c0be;
case 0x41c0c0:c.instructions+=2;goto B41c0c0;
case 0x41c0c3:c.instructions+=1;goto B41c0c3;
case 0x41c0c6:goto L41c0c6;
case 0x41c0c8:c.instructions+=1;goto B41c0c8;
case 0x41c0ca:goto L41c0ca;
case 0x41c0ce:c.instructions+=7;goto B41c0ce;
case 0x41c0d1:c.instructions+=6;goto B41c0d1;
case 0x41c0d7:c.instructions+=5;goto B41c0d7;
case 0x41c0d9:c.instructions+=4;goto B41c0d9;
case 0x41c0df:c.instructions+=3;goto B41c0df;
case 0x41c0e1:c.instructions+=2;goto B41c0e1;
case 0x41c0e4:c.instructions+=1;goto B41c0e4;
case 0x41c0e6:goto L41c0e6;
case 0x41c0e9:c.instructions+=1;goto B41c0e9;
case 0x41c0eb:goto L41c0eb;
case 0x41c0ed:c.instructions+=1;goto B41c0ed;
case 0x41c0ef:goto L41c0ef;
case 0x41c0f4:c.instructions+=2;goto B41c0f4;
case 0x41c0f7:c.instructions+=1;goto B41c0f7;
case 0x41c100:goto L41c100;
case 0x41c103:c.instructions+=11;goto B41c103;
case 0x41c104:c.instructions+=10;goto B41c104;
case 0x41c108:c.instructions+=9;goto B41c108;
case 0x41c109:c.instructions+=8;goto B41c109;
case 0x41c10a:c.instructions+=7;goto B41c10a;
case 0x41c10c:c.instructions+=6;goto B41c10c;
case 0x41c112:c.instructions+=5;goto B41c112;
case 0x41c113:c.instructions+=4;goto B41c113;
case 0x41c115:c.instructions+=3;goto B41c115;
case 0x41c118:c.instructions+=2;goto B41c118;
case 0x41c11d:c.instructions+=1;goto B41c11d;
case 0x41c123:goto L41c123;
case 0x41c129:c.instructions+=3;goto B41c129;
case 0x41c12c:c.instructions+=2;goto B41c12c;
case 0x41c12e:c.instructions+=1;goto B41c12e;
case 0x41c130:goto L41c130;
case 0x41c131:c.instructions+=1;goto B41c131;
case 0x41c136:goto L41c136;
case 0x41c138:c.instructions+=2;goto B41c138;
case 0x41c13a:c.instructions+=1;goto B41c13a;
case 0x41c13c:goto L41c13c;
case 0x41c142:c.instructions+=2;goto B41c142;
case 0x41c143:c.instructions+=1;goto B41c143;
case 0x41c148:goto L41c148;
case 0x41c14a:c.instructions+=5;goto B41c14a;
case 0x41c150:c.instructions+=4;goto B41c150;
case 0x41c154:c.instructions+=3;goto B41c154;
case 0x41c155:c.instructions+=2;goto B41c155;
case 0x41c156:c.instructions+=1;goto B41c156;
case 0x41c15b:goto L41c15b;
case 0x41c15d:c.instructions+=2;goto B41c15d;
case 0x41c162:c.instructions+=1;goto B41c162;
case 0x41c167:goto L41c167;
case 0x41c16d:c.instructions+=3;goto B41c16d;
case 0x41c170:c.instructions+=2;goto B41c170;
case 0x41c172:c.instructions+=1;goto B41c172;
case 0x41c178:goto L41c178;
case 0x41c179:c.instructions+=11;goto B41c179;
case 0x41c17d:c.instructions+=10;goto B41c17d;
case 0x41c17e:c.instructions+=9;goto B41c17e;
case 0x41c181:c.instructions+=8;goto B41c181;
case 0x41c185:c.instructions+=7;goto B41c185;
case 0x41c186:c.instructions+=6;goto B41c186;
case 0x41c187:c.instructions+=5;goto B41c187;
case 0x41c18f:c.instructions+=4;goto B41c18f;
case 0x41c197:c.instructions+=3;goto B41c197;
case 0x41c19f:c.instructions+=2;goto B41c19f;
case 0x41c1a7:c.instructions+=1;goto B41c1a7;
case 0x41c1ac:goto L41c1ac;
case 0x41c1ad:c.instructions+=7;goto B41c1ad;
case 0x41c1b1:c.instructions+=6;goto B41c1b1;
case 0x41c1b2:c.instructions+=5;goto B41c1b2;
case 0x41c1b6:c.instructions+=4;goto B41c1b6;
case 0x41c1b7:c.instructions+=3;goto B41c1b7;
case 0x41c1bd:c.instructions+=2;goto B41c1bd;
case 0x41c1be:c.instructions+=1;goto B41c1be;
case 0x41c1c3:goto L41c1c3;
case 0x41c1c9:c.instructions+=3;goto B41c1c9;
case 0x41c1cc:c.instructions+=2;goto B41c1cc;
case 0x41c1ce:c.instructions+=1;goto B41c1ce;
case 0x41c1d0:goto L41c1d0;
case 0x41c1d4:c.instructions+=2;goto B41c1d4;
case 0x41c1d7:c.instructions+=1;goto B41c1d7;
case 0x41c1d9:goto L41c1d9;
case 0x41c1df:goto L41c1df;
case 0x41c1e2:c.instructions+=3;goto B41c1e2;
case 0x41c1e6:c.instructions+=2;goto B41c1e6;
case 0x41c1e8:c.instructions+=1;goto B41c1e8;
case 0x41c1ea:goto L41c1ea;
case 0x41c1ed:c.instructions+=2;goto B41c1ed;
case 0x41c1f0:c.instructions+=1;goto B41c1f0;
case 0x41c1f2:goto L41c1f2;
case 0x41c1f8:goto L41c1f8;
case 0x41c1fc:c.instructions+=7;goto B41c1fc;
case 0x41c200:c.instructions+=6;goto B41c200;
case 0x41c204:c.instructions+=5;goto B41c204;
case 0x41c208:c.instructions+=4;goto B41c208;
case 0x41c209:c.instructions+=3;goto B41c209;
case 0x41c20a:c.instructions+=2;goto B41c20a;
case 0x41c20b:c.instructions+=1;goto B41c20b;
case 0x41c210:goto L41c210;
case 0x41c214:c.instructions+=4;goto B41c214;
case 0x41c217:c.instructions+=3;goto B41c217;
case 0x41c219:c.instructions+=2;goto B41c219;
case 0x41c21c:c.instructions+=1;goto B41c21c;
case 0x41c21e:goto L41c21e;
case 0x41c222:c.instructions+=4;goto B41c222;
case 0x41c223:c.instructions+=3;goto B41c223;
case 0x41c224:c.instructions+=2;goto B41c224;
case 0x41c225:c.instructions+=1;goto B41c225;
case 0x41c22a:goto L41c22a;
case 0x41c22e:c.instructions+=4;goto B41c22e;
case 0x41c231:c.instructions+=3;goto B41c231;
case 0x41c233:c.instructions+=2;goto B41c233;
case 0x41c236:c.instructions+=1;goto B41c236;
case 0x41c238:goto L41c238;
case 0x41c23c:c.instructions+=6;goto B41c23c;
case 0x41c241:c.instructions+=5;goto B41c241;
case 0x41c245:c.instructions+=4;goto B41c245;
case 0x41c249:c.instructions+=3;goto B41c249;
case 0x41c24d:c.instructions+=2;goto B41c24d;
case 0x41c251:c.instructions+=1;goto B41c251;
case 0x41c253:goto L41c253;
case 0x41c256:c.instructions+=4;goto B41c256;
case 0x41c257:c.instructions+=3;goto B41c257;
case 0x41c258:c.instructions+=2;goto B41c258;
case 0x41c25d:c.instructions+=1;goto B41c25d;
case 0x41c262:goto L41c262;
case 0x41c266:c.instructions+=1;goto B41c266;
case 0x41c26c:goto L41c26c;
case 0x41c270:c.instructions+=11;goto B41c270;
case 0x41c274:c.instructions+=10;goto B41c274;
case 0x41c278:c.instructions+=9;goto B41c278;
case 0x41c27a:c.instructions+=8;goto B41c27a;
case 0x41c27e:c.instructions+=7;goto B41c27e;
case 0x41c27f:c.instructions+=6;goto B41c27f;
case 0x41c281:c.instructions+=5;goto B41c281;
case 0x41c282:c.instructions+=4;goto B41c282;
case 0x41c283:c.instructions+=3;goto B41c283;
case 0x41c284:c.instructions+=2;goto B41c284;
case 0x41c287:c.instructions+=1;goto B41c287;
case 0x41c290:goto L41c290;
case 0x41c292:c.instructions+=18;goto B41c292;
case 0x41c297:c.instructions+=17;goto B41c297;
case 0x41c29d:c.instructions+=16;goto B41c29d;
case 0x41c29e:c.instructions+=15;goto B41c29e;
case 0x41c2a5:c.instructions+=14;goto B41c2a5;
case 0x41c2a6:c.instructions+=13;goto B41c2a6;
case 0x41c2a7:c.instructions+=12;goto B41c2a7;
case 0x41c2a8:c.instructions+=11;goto B41c2a8;
case 0x41c2a9:c.instructions+=10;goto B41c2a9;
case 0x41c2aa:c.instructions+=9;goto B41c2aa;
case 0x41c2af:c.instructions+=8;goto B41c2af;
case 0x41c2b4:c.instructions+=7;goto B41c2b4;
case 0x41c2b6:c.instructions+=6;goto B41c2b6;
case 0x41c2b8:c.instructions+=5;goto B41c2b8;
case 0x41c2ba:c.instructions+=4;goto B41c2ba;
case 0x41c2bd:c.instructions+=3;goto B41c2bd;
case 0x41c2be:c.instructions+=2;goto B41c2be;
case 0x41c2c2:c.instructions+=1;goto B41c2c2;
case 0x41c2c7:goto L41c2c7;
case 0x41c2cb:c.instructions+=14;goto B41c2cb;
case 0x41c2cd:c.instructions+=13;goto B41c2cd;
case 0x41c2cf:c.instructions+=12;goto B41c2cf;
case 0x41c2d2:c.instructions+=11;goto B41c2d2;
case 0x41c2d9:c.instructions+=10;goto B41c2d9;
case 0x41c2df:c.instructions+=9;goto B41c2df;
case 0x41c2e5:c.instructions+=8;goto B41c2e5;
case 0x41c2ef:c.instructions+=7;goto B41c2ef;
case 0x41c2f5:c.instructions+=6;goto B41c2f5;
case 0x41c2fb:c.instructions+=5;goto B41c2fb;
case 0x41c301:c.instructions+=4;goto B41c301;
case 0x41c303:c.instructions+=3;goto B41c303;
case 0x41c30a:c.instructions+=2;goto B41c30a;
case 0x41c30f:c.instructions+=1;goto B41c30f;
case 0x41c311:goto L41c311;
case 0x41c313:goto L41c313;
case 0x41c315:c.instructions+=4;goto B41c315;
case 0x41c319:c.instructions+=3;goto B41c319;
case 0x41c31f:c.instructions+=2;goto B41c31f;
case 0x41c325:c.instructions+=1;goto B41c325;
case 0x41c32a:goto L41c32a;
case 0x41c32c:c.instructions+=4;goto B41c32c;
case 0x41c331:c.instructions+=3;goto B41c331;
case 0x41c334:c.instructions+=2;goto B41c334;
case 0x41c33b:c.instructions+=1;goto B41c33b;
case 0x41c340:goto L41c340;
case 0x41c344:c.instructions+=12;goto B41c344;
case 0x41c345:c.instructions+=11;goto B41c345;
case 0x41c34b:c.instructions+=10;goto B41c34b;
case 0x41c351:c.instructions+=9;goto B41c351;
case 0x41c357:c.instructions+=8;goto B41c357;
case 0x41c361:c.instructions+=7;goto B41c361;
case 0x41c363:c.instructions+=6;goto B41c363;
case 0x41c364:c.instructions+=5;goto B41c364;
case 0x41c365:c.instructions+=4;goto B41c365;
case 0x41c366:c.instructions+=3;goto B41c366;
case 0x41c36d:c.instructions+=2;goto B41c36d;
case 0x41c370:c.instructions+=1;goto B41c370;
case 0x41c380:goto L41c380;
case 0x41c383:c.instructions+=14;goto B41c383;
case 0x41c384:c.instructions+=13;goto B41c384;
case 0x41c385:c.instructions+=12;goto B41c385;
case 0x41c386:c.instructions+=11;goto B41c386;
case 0x41c38a:c.instructions+=10;goto B41c38a;
case 0x41c38b:c.instructions+=9;goto B41c38b;
case 0x41c38d:c.instructions+=8;goto B41c38d;
case 0x41c390:c.instructions+=7;goto B41c390;
case 0x41c396:c.instructions+=6;goto B41c396;
case 0x41c399:c.instructions+=5;goto B41c399;
case 0x41c39d:c.instructions+=4;goto B41c39d;
case 0x41c39f:c.instructions+=3;goto B41c39f;
case 0x41c3a5:c.instructions+=2;goto B41c3a5;
case 0x41c3a9:c.instructions+=1;goto B41c3a9;
case 0x41c3ac:goto L41c3ac;
case 0x41c3b0:c.instructions+=6;goto B41c3b0;
case 0x41c3b6:c.instructions+=5;goto B41c3b6;
case 0x41c3bc:c.instructions+=4;goto B41c3bc;
case 0x41c3c2:c.instructions+=3;goto B41c3c2;
case 0x41c3c4:c.instructions+=2;goto B41c3c4;
case 0x41c3c7:c.instructions+=1;goto B41c3c7;
case 0x41c3c9:goto L41c3c9;
case 0x41c3cd:c.instructions+=1;goto B41c3cd;
case 0x41c3cf:goto L41c3cf;
case 0x41c3d4:c.instructions+=2;goto B41c3d4;
case 0x41c3d6:c.instructions+=1;goto B41c3d6;
case 0x41c3da:goto L41c3da;
case 0x41c3dd:c.instructions+=5;goto B41c3dd;
case 0x41c3df:c.instructions+=4;goto B41c3df;
case 0x41c3e7:c.instructions+=3;goto B41c3e7;
case 0x41c3ef:c.instructions+=2;goto B41c3ef;
case 0x41c3f7:c.instructions+=1;goto B41c3f7;
case 0x41c3f9:goto L41c3f9;
case 0x41c400:c.instructions+=10;goto B41c400;
case 0x41c403:c.instructions+=9;goto B41c403;
case 0x41c406:c.instructions+=8;goto B41c406;
case 0x41c40a:c.instructions+=7;goto B41c40a;
case 0x41c40e:c.instructions+=6;goto B41c40e;
case 0x41c412:c.instructions+=5;goto B41c412;
case 0x41c416:c.instructions+=4;goto B41c416;
case 0x41c41c:c.instructions+=3;goto B41c41c;
case 0x41c41d:c.instructions+=2;goto B41c41d;
case 0x41c421:c.instructions+=1;goto B41c421;
case 0x41c426:goto L41c426;
case 0x41c428:c.instructions+=1;goto B41c428;
case 0x41c42a:goto L41c42a;
case 0x41c42d:c.instructions+=2;goto B41c42d;
case 0x41c42f:c.instructions+=1;goto B41c42f;
case 0x41c431:goto L41c431;
case 0x41c437:c.instructions+=8;goto B41c437;
case 0x41c438:c.instructions+=7;goto B41c438;
case 0x41c43c:c.instructions+=6;goto B41c43c;
case 0x41c43d:c.instructions+=5;goto B41c43d;
case 0x41c441:c.instructions+=4;goto B41c441;
case 0x41c442:c.instructions+=3;goto B41c442;
case 0x41c443:c.instructions+=2;goto B41c443;
case 0x41c445:c.instructions+=1;goto B41c445;
case 0x41c44a:goto L41c44a;
case 0x41c44e:goto L41c44e;
case 0x41c452:c.instructions+=7;goto B41c452;
case 0x41c456:c.instructions+=6;goto B41c456;
case 0x41c45a:c.instructions+=5;goto B41c45a;
case 0x41c45b:c.instructions+=4;goto B41c45b;
case 0x41c45c:c.instructions+=3;goto B41c45c;
case 0x41c45d:c.instructions+=2;goto B41c45d;
case 0x41c45f:c.instructions+=1;goto B41c45f;
case 0x41c464:goto L41c464;
case 0x41c46a:c.instructions+=3;goto B41c46a;
case 0x41c46c:c.instructions+=2;goto B41c46c;
case 0x41c46f:c.instructions+=1;goto B41c46f;
case 0x41c471:goto L41c471;
case 0x41c475:c.instructions+=5;goto B41c475;
case 0x41c476:c.instructions+=4;goto B41c476;
case 0x41c47a:c.instructions+=3;goto B41c47a;
case 0x41c47b:c.instructions+=2;goto B41c47b;
case 0x41c480:c.instructions+=1;goto B41c480;
case 0x41c485:goto L41c485;
case 0x41c489:c.instructions+=6;goto B41c489;
case 0x41c48f:c.instructions+=5;goto B41c48f;
case 0x41c495:c.instructions+=4;goto B41c495;
case 0x41c499:c.instructions+=3;goto B41c499;
case 0x41c49b:c.instructions+=2;goto B41c49b;
case 0x41c4a1:c.instructions+=1;goto B41c4a1;
case 0x41c4a5:goto L41c4a5;
case 0x41c4ab:c.instructions+=6;goto B41c4ab;
case 0x41c4b1:c.instructions+=5;goto B41c4b1;
case 0x41c4b7:c.instructions+=4;goto B41c4b7;
case 0x41c4b9:c.instructions+=3;goto B41c4b9;
case 0x41c4bb:c.instructions+=2;goto B41c4bb;
case 0x41c4be:c.instructions+=1;goto B41c4be;
case 0x41c4c0:goto L41c4c0;
case 0x41c4c6:c.instructions+=3;goto B41c4c6;
case 0x41c4c8:c.instructions+=2;goto B41c4c8;
case 0x41c4cc:c.instructions+=1;goto B41c4cc;
case 0x41c4ce:goto L41c4ce;
case 0x41c4d2:goto L41c4d2;
case 0x41c4d6:c.instructions+=6;goto B41c4d6;
case 0x41c4dc:c.instructions+=5;goto B41c4dc;
case 0x41c4dd:c.instructions+=4;goto B41c4dd;
case 0x41c4de:c.instructions+=3;goto B41c4de;
case 0x41c4df:c.instructions+=2;goto B41c4df;
case 0x41c4e1:c.instructions+=1;goto B41c4e1;
case 0x41c4e6:goto L41c4e6;
case 0x41c4ea:c.instructions+=9;goto B41c4ea;
case 0x41c4ee:c.instructions+=8;goto B41c4ee;
case 0x41c4f4:c.instructions+=7;goto B41c4f4;
case 0x41c4f8:c.instructions+=6;goto B41c4f8;
case 0x41c4f9:c.instructions+=5;goto B41c4f9;
case 0x41c4fa:c.instructions+=4;goto B41c4fa;
case 0x41c4fc:c.instructions+=3;goto B41c4fc;
case 0x41c4ff:c.instructions+=2;goto B41c4ff;
case 0x41c500:c.instructions+=1;goto B41c500;
case 0x41c505:goto L41c505;
case 0x41c509:c.instructions+=5;goto B41c509;
case 0x41c50d:c.instructions+=4;goto B41c50d;
case 0x41c511:c.instructions+=3;goto B41c511;
case 0x41c513:c.instructions+=2;goto B41c513;
case 0x41c516:c.instructions+=1;goto B41c516;
case 0x41c518:goto L41c518;
case 0x41c51c:c.instructions+=1;goto B41c51c;
case 0x41c51e:goto L41c51e;
case 0x41c522:goto L41c522;
case 0x41c526:c.instructions+=3;goto B41c526;
case 0x41c528:c.instructions+=2;goto B41c528;
case 0x41c52b:c.instructions+=1;goto B41c52b;
case 0x41c52d:goto L41c52d;
case 0x41c52f:c.instructions+=1;goto B41c52f;
case 0x41c533:goto L41c533;
case 0x41c539:c.instructions+=2;goto B41c539;
case 0x41c53b:c.instructions+=1;goto B41c53b;
case 0x41c53d:goto L41c53d;
case 0x41c53f:c.instructions+=1;goto B41c53f;
case 0x41c545:goto L41c545;
case 0x41c549:c.instructions+=3;goto B41c549;
case 0x41c54f:c.instructions+=2;goto B41c54f;
case 0x41c551:c.instructions+=1;goto B41c551;
case 0x41c553:goto L41c553;
case 0x41c555:c.instructions+=3;goto B41c555;
case 0x41c55d:c.instructions+=2;goto B41c55d;
case 0x41c565:c.instructions+=1;goto B41c565;
case 0x41c567:goto L41c567;
case 0x41c56d:c.instructions+=4;goto B41c56d;
case 0x41c573:c.instructions+=3;goto B41c573;
case 0x41c579:c.instructions+=2;goto B41c579;
case 0x41c57d:c.instructions+=1;goto B41c57d;
case 0x41c581:goto L41c581;
case 0x41c585:c.instructions+=4;goto B41c585;
case 0x41c587:c.instructions+=3;goto B41c587;
case 0x41c589:c.instructions+=2;goto B41c589;
case 0x41c58c:c.instructions+=1;goto B41c58c;
case 0x41c58e:goto L41c58e;
case 0x41c592:c.instructions+=1;goto B41c592;
case 0x41c594:goto L41c594;
case 0x41c596:goto L41c596;
case 0x41c59a:c.instructions+=3;goto B41c59a;
case 0x41c59c:c.instructions+=2;goto B41c59c;
case 0x41c59d:c.instructions+=1;goto B41c59d;
case 0x41c5a0:goto L41c5a0;
case 0x41c5a4:c.instructions+=3;goto B41c5a4;
case 0x41c5a6:c.instructions+=2;goto B41c5a6;
case 0x41c5a9:c.instructions+=1;goto B41c5a9;
case 0x41c5ab:goto L41c5ab;
case 0x41c5af:c.instructions+=1;goto B41c5af;
case 0x41c5b1:goto L41c5b1;
case 0x41c5b3:goto L41c5b3;
case 0x41c5b7:c.instructions+=12;goto B41c5b7;
case 0x41c5ba:c.instructions+=11;goto B41c5ba;
case 0x41c5bd:c.instructions+=10;goto B41c5bd;
case 0x41c5bf:c.instructions+=9;goto B41c5bf;
case 0x41c5c5:c.instructions+=8;goto B41c5c5;
case 0x41c5c6:c.instructions+=7;goto B41c5c6;
case 0x41c5ca:c.instructions+=6;goto B41c5ca;
case 0x41c5cb:c.instructions+=5;goto B41c5cb;
case 0x41c5cf:c.instructions+=4;goto B41c5cf;
case 0x41c5d0:c.instructions+=3;goto B41c5d0;
case 0x41c5d1:c.instructions+=2;goto B41c5d1;
case 0x41c5d3:c.instructions+=1;goto B41c5d3;
case 0x41c5d6:goto L41c5d6;
case 0x41c5d7:c.instructions+=5;goto B41c5d7;
case 0x41c5d8:c.instructions+=4;goto B41c5d8;
case 0x41c5d9:c.instructions+=3;goto B41c5d9;
case 0x41c5da:c.instructions+=2;goto B41c5da;
case 0x41c5dd:c.instructions+=1;goto B41c5dd;
case 0x41c5e0:goto L41c5e0;
case 0x41c5e1:c.instructions+=20;goto B41c5e1;
case 0x41c5e3:c.instructions+=19;goto B41c5e3;
case 0x41c5e6:c.instructions+=18;goto B41c5e6;
case 0x41c5ec:c.instructions+=17;goto B41c5ec;
case 0x41c5ed:c.instructions+=16;goto B41c5ed;
case 0x41c5f0:c.instructions+=15;goto B41c5f0;
case 0x41c5f3:c.instructions+=14;goto B41c5f3;
case 0x41c5f5:c.instructions+=13;goto B41c5f5;
case 0x41c5f6:c.instructions+=12;goto B41c5f6;
case 0x41c5f9:c.instructions+=11;goto B41c5f9;
case 0x41c5fa:c.instructions+=10;goto B41c5fa;
case 0x41c5fd:c.instructions+=9;goto B41c5fd;
case 0x41c5ff:c.instructions+=8;goto B41c5ff;
case 0x41c602:c.instructions+=7;goto B41c602;
case 0x41c608:c.instructions+=6;goto B41c608;
case 0x41c60b:c.instructions+=5;goto B41c60b;
case 0x41c60f:c.instructions+=4;goto B41c60f;
case 0x41c615:c.instructions+=3;goto B41c615;
case 0x41c618:c.instructions+=2;goto B41c618;
case 0x41c61f:c.instructions+=1;goto B41c61f;
case 0x41c625:goto L41c625;
case 0x41c62a:c.instructions+=2;goto B41c62a;
case 0x41c62c:c.instructions+=1;goto B41c62c;
case 0x41c632:goto L41c632;
case 0x41c637:c.instructions+=2;goto B41c637;
case 0x41c639:c.instructions+=1;goto B41c639;
case 0x41c63f:goto L41c63f;
case 0x41c641:c.instructions+=3;goto B41c641;
case 0x41c643:c.instructions+=2;goto B41c643;
case 0x41c645:c.instructions+=1;goto B41c645;
case 0x41c648:goto L41c648;
case 0x41c64a:c.instructions+=3;goto B41c64a;
case 0x41c650:c.instructions+=2;goto B41c650;
case 0x41c653:c.instructions+=1;goto B41c653;
case 0x41c655:goto L41c655;
case 0x41c65b:c.instructions+=5;goto B41c65b;
case 0x41c65e:c.instructions+=4;goto B41c65e;
case 0x41c660:c.instructions+=3;goto B41c660;
case 0x41c662:c.instructions+=2;goto B41c662;
case 0x41c664:c.instructions+=1;goto B41c664;
case 0x41c666:goto L41c666;
case 0x41c668:c.instructions+=1;goto B41c668;
case 0x41c66d:goto L41c66d;
case 0x41c670:c.instructions+=5;goto B41c670;
case 0x41c676:c.instructions+=4;goto B41c676;
case 0x41c678:c.instructions+=3;goto B41c678;
case 0x41c679:c.instructions+=2;goto B41c679;
case 0x41c67b:c.instructions+=1;goto B41c67b;
case 0x41c680:goto L41c680;
case 0x41c683:c.instructions+=8;goto B41c683;
case 0x41c686:c.instructions+=7;goto B41c686;
case 0x41c68c:c.instructions+=6;goto B41c68c;
case 0x41c68e:c.instructions+=5;goto B41c68e;
case 0x41c68f:c.instructions+=4;goto B41c68f;
case 0x41c692:c.instructions+=3;goto B41c692;
case 0x41c693:c.instructions+=2;goto B41c693;
case 0x41c698:c.instructions+=1;goto B41c698;
case 0x41c69d:goto L41c69d;
case 0x41c69f:c.instructions+=2;goto B41c69f;
case 0x41c6a2:c.instructions+=1;goto B41c6a2;
case 0x41c6a7:goto L41c6a7;
case 0x41c6a9:c.instructions+=1;goto B41c6a9;
case 0x41c6ae:goto L41c6ae;
case 0x41c6b0:c.instructions+=1;goto B41c6b0;
case 0x41c6b2:goto L41c6b2;
case 0x41c6b8:c.instructions+=1;goto B41c6b8;
case 0x41c6bd:goto L41c6bd;
case 0x41c6c2:c.instructions+=1;goto B41c6c2;
case 0x41c6c7:goto L41c6c7;
case 0x41c6c9:c.instructions+=1;goto B41c6c9;
case 0x41c6cb:goto L41c6cb;
case 0x41c6ce:c.instructions+=3;goto B41c6ce;
case 0x41c6d1:c.instructions+=2;goto B41c6d1;
case 0x41c6d3:c.instructions+=1;goto B41c6d3;
case 0x41c6d5:goto L41c6d5;
case 0x41c6db:c.instructions+=1;goto B41c6db;
case 0x41c6e0:goto L41c6e0;
case 0x41c6e2:c.instructions+=1;goto B41c6e2;
case 0x41c6e4:goto L41c6e4;
case 0x41c6e7:c.instructions+=1;goto B41c6e7;
case 0x41c6e9:goto L41c6e9;
case 0x41c6eb:c.instructions+=1;goto B41c6eb;
case 0x41c6f0:goto L41c6f0;
case 0x41c6f6:c.instructions+=4;goto B41c6f6;
case 0x41c6fc:c.instructions+=3;goto B41c6fc;
case 0x41c6fe:c.instructions+=2;goto B41c6fe;
case 0x41c701:c.instructions+=1;goto B41c701;
case 0x41c703:goto L41c703;
case 0x41c705:c.instructions+=8;goto B41c705;
case 0x41c708:c.instructions+=7;goto B41c708;
case 0x41c709:c.instructions+=6;goto B41c709;
case 0x41c710:c.instructions+=5;goto B41c710;
case 0x41c716:c.instructions+=4;goto B41c716;
case 0x41c719:c.instructions+=3;goto B41c719;
case 0x41c71b:c.instructions+=2;goto B41c71b;
case 0x41c71e:c.instructions+=1;goto B41c71e;
case 0x41c723:goto L41c723;
case 0x41c726:c.instructions+=3;goto B41c726;
case 0x41c72c:c.instructions+=2;goto B41c72c;
case 0x41c731:c.instructions+=1;goto B41c731;
case 0x41c737:goto L41c737;
case 0x41c73a:c.instructions+=5;goto B41c73a;
case 0x41c73d:c.instructions+=4;goto B41c73d;
case 0x41c73f:c.instructions+=3;goto B41c73f;
case 0x41c746:c.instructions+=2;goto B41c746;
case 0x41c74d:c.instructions+=1;goto B41c74d;
case 0x41c74f:goto L41c74f;
case 0x41c756:c.instructions+=5;goto B41c756;
case 0x41c759:c.instructions+=4;goto B41c759;
case 0x41c75c:c.instructions+=3;goto B41c75c;
case 0x41c760:c.instructions+=2;goto B41c760;
case 0x41c763:c.instructions+=1;goto B41c763;
case 0x41c765:goto L41c765;
case 0x41c76b:c.instructions+=3;goto B41c76b;
case 0x41c76d:c.instructions+=2;goto B41c76d;
case 0x41c773:c.instructions+=1;goto B41c773;
case 0x41c775:goto L41c775;
case 0x41c77b:c.instructions+=8;goto B41c77b;
case 0x41c77c:c.instructions+=7;goto B41c77c;
case 0x41c77f:c.instructions+=6;goto B41c77f;
case 0x41c780:c.instructions+=5;goto B41c780;
case 0x41c783:c.instructions+=4;goto B41c783;
case 0x41c786:c.instructions+=3;goto B41c786;
case 0x41c787:c.instructions+=2;goto B41c787;
case 0x41c788:c.instructions+=1;goto B41c788;
case 0x41c78d:goto L41c78d;
case 0x41c790:c.instructions+=5;goto B41c790;
case 0x41c793:c.instructions+=4;goto B41c793;
case 0x41c796:c.instructions+=3;goto B41c796;
case 0x41c799:c.instructions+=2;goto B41c799;
case 0x41c79d:c.instructions+=1;goto B41c79d;
case 0x41c79f:goto L41c79f;
case 0x41c7a2:c.instructions+=3;goto B41c7a2;
case 0x41c7a8:c.instructions+=2;goto B41c7a8;
case 0x41c7aa:c.instructions+=1;goto B41c7aa;
case 0x41c7ac:goto L41c7ac;
case 0x41c7b2:c.instructions+=2;goto B41c7b2;
case 0x41c7b5:c.instructions+=1;goto B41c7b5;
case 0x41c7ba:goto L41c7ba;
case 0x41c7bf:c.instructions+=1;goto B41c7bf;
case 0x41c7c4:goto L41c7c4;
case 0x41c7c6:c.instructions+=1;goto B41c7c6;
case 0x41c7c8:goto L41c7c8;
case 0x41c7ce:c.instructions+=8;goto B41c7ce;
case 0x41c7d0:c.instructions+=7;goto B41c7d0;
case 0x41c7d2:c.instructions+=6;goto B41c7d2;
case 0x41c7d5:c.instructions+=5;goto B41c7d5;
case 0x41c7d6:c.instructions+=4;goto B41c7d6;
case 0x41c7d8:c.instructions+=3;goto B41c7d8;
case 0x41c7db:c.instructions+=2;goto B41c7db;
case 0x41c7e2:c.instructions+=1;goto B41c7e2;
case 0x41c7e4:goto L41c7e4;
case 0x41c7eb:c.instructions+=1;goto B41c7eb;
case 0x41c7ed:goto L41c7ed;
case 0x41c7f2:c.instructions+=2;goto B41c7f2;
case 0x41c7f4:c.instructions+=1;goto B41c7f4;
case 0x41c7f9:goto L41c7f9;
case 0x41c7fb:c.instructions+=1;goto B41c7fb;
case 0x41c7fd:goto L41c7fd;
case 0x41c802:c.instructions+=2;goto B41c802;
case 0x41c804:c.instructions+=1;goto B41c804;
case 0x41c806:goto L41c806;
case 0x41c808:c.instructions+=1;goto B41c808;
case 0x41c80a:goto L41c80a;
case 0x41c80d:c.instructions+=1;goto B41c80d;
case 0x41c80f:goto L41c80f;
case 0x41c814:goto L41c814;
case 0x41c816:goto L41c816;
case 0x41c819:c.instructions+=3;goto B41c819;
case 0x41c81c:c.instructions+=2;goto B41c81c;
case 0x41c820:c.instructions+=1;goto B41c820;
case 0x41c822:goto L41c822;
case 0x41c829:c.instructions+=1;goto B41c829;
case 0x41c82b:goto L41c82b;
case 0x41c832:c.instructions+=1;goto B41c832;
case 0x41c834:goto L41c834;
case 0x41c839:c.instructions+=2;goto B41c839;
case 0x41c83b:c.instructions+=1;goto B41c83b;
case 0x41c83d:goto L41c83d;
case 0x41c843:c.instructions+=10;goto B41c843;
case 0x41c849:c.instructions+=9;goto B41c849;
case 0x41c84b:c.instructions+=8;goto B41c84b;
case 0x41c84d:c.instructions+=7;goto B41c84d;
case 0x41c850:c.instructions+=6;goto B41c850;
case 0x41c853:c.instructions+=5;goto B41c853;
case 0x41c856:c.instructions+=4;goto B41c856;
case 0x41c857:c.instructions+=3;goto B41c857;
case 0x41c859:c.instructions+=2;goto B41c859;
case 0x41c85c:c.instructions+=1;goto B41c85c;
case 0x41c863:goto L41c863;
case 0x41c866:goto L41c866;
case 0x41c869:c.instructions+=7;goto B41c869;
case 0x41c86c:c.instructions+=6;goto B41c86c;
case 0x41c872:c.instructions+=5;goto B41c872;
case 0x41c873:c.instructions+=4;goto B41c873;
case 0x41c874:c.instructions+=3;goto B41c874;
case 0x41c875:c.instructions+=2;goto B41c875;
case 0x41c87b:c.instructions+=1;goto B41c87b;
case 0x41c880:goto L41c880;
case 0x41c883:c.instructions+=5;goto B41c883;
case 0x41c886:c.instructions+=4;goto B41c886;
case 0x41c88b:c.instructions+=3;goto B41c88b;
case 0x41c88d:c.instructions+=2;goto B41c88d;
case 0x41c88e:c.instructions+=1;goto B41c88e;
case 0x41c893:goto L41c893;
case 0x41c896:c.instructions+=2;goto B41c896;
case 0x41c898:c.instructions+=1;goto B41c898;
case 0x41c89a:goto L41c89a;
case 0x41c8a0:c.instructions+=1;goto B41c8a0;
case 0x41c8a2:goto L41c8a2;
case 0x41c8a5:goto L41c8a5;
case 0x41c8a8:goto L41c8a8;
case 0x41c8ae:c.instructions+=7;goto B41c8ae;
case 0x41c8b1:c.instructions+=6;goto B41c8b1;
case 0x41c8b7:c.instructions+=5;goto B41c8b7;
case 0x41c8b9:c.instructions+=4;goto B41c8b9;
case 0x41c8bb:c.instructions+=3;goto B41c8bb;
case 0x41c8be:c.instructions+=2;goto B41c8be;
case 0x41c8c0:c.instructions+=1;goto B41c8c0;
case 0x41c8c2:goto L41c8c2;
case 0x41c8c5:c.instructions+=3;goto B41c8c5;
case 0x41c8c8:c.instructions+=2;goto B41c8c8;
case 0x41c8cf:c.instructions+=1;goto B41c8cf;
case 0x41c8d1:goto L41c8d1;
case 0x41c8d7:c.instructions+=3;goto B41c8d7;
case 0x41c8dd:c.instructions+=2;goto B41c8dd;
case 0x41c8e0:c.instructions+=1;goto B41c8e0;
case 0x41c8e3:goto L41c8e3;
case 0x41c8e9:c.instructions+=5;goto B41c8e9;
case 0x41c8ef:c.instructions+=4;goto B41c8ef;
case 0x41c8f2:c.instructions+=3;goto B41c8f2;
case 0x41c8f5:c.instructions+=2;goto B41c8f5;
case 0x41c8f8:c.instructions+=1;goto B41c8f8;
case 0x41c8fa:goto L41c8fa;
case 0x41c8fd:c.instructions+=5;goto B41c8fd;
case 0x41c8ff:c.instructions+=4;goto B41c8ff;
case 0x41c901:c.instructions+=3;goto B41c901;
case 0x41c904:c.instructions+=2;goto B41c904;
case 0x41c905:c.instructions+=1;goto B41c905;
case 0x41c90a:goto L41c90a;
case 0x41c90f:c.instructions+=6;goto B41c90f;
case 0x41c912:c.instructions+=5;goto B41c912;
case 0x41c915:c.instructions+=4;goto B41c915;
case 0x41c918:c.instructions+=3;goto B41c918;
case 0x41c91e:c.instructions+=2;goto B41c91e;
case 0x41c921:c.instructions+=1;goto B41c921;
case 0x41c923:goto L41c923;
case 0x41c929:c.instructions+=3;goto B41c929;
case 0x41c930:c.instructions+=2;goto B41c930;
case 0x41c933:c.instructions+=1;goto B41c933;
case 0x41c935:goto L41c935;
case 0x41c938:goto L41c938;
case 0x41c93b:goto L41c93b;
case 0x41c93e:c.instructions+=3;goto B41c93e;
case 0x41c940:c.instructions+=2;goto B41c940;
case 0x41c941:c.instructions+=1;goto B41c941;
case 0x41c944:goto L41c944;
case 0x41c947:c.instructions+=3;goto B41c947;
case 0x41c949:c.instructions+=2;goto B41c949;
case 0x41c94c:c.instructions+=1;goto B41c94c;
case 0x41c94e:goto L41c94e;
case 0x41c951:c.instructions+=1;goto B41c951;
case 0x41c953:goto L41c953;
case 0x41c955:goto L41c955;
case 0x41c958:c.instructions+=4;goto B41c958;
case 0x41c95b:c.instructions+=3;goto B41c95b;
case 0x41c95d:c.instructions+=2;goto B41c95d;
case 0x41c960:c.instructions+=1;goto B41c960;
case 0x41c962:goto L41c962;
case 0x41c965:c.instructions+=1;goto B41c965;
case 0x41c968:goto L41c968;
case 0x41c96b:c.instructions+=10;goto B41c96b;
case 0x41c96e:c.instructions+=9;goto B41c96e;
case 0x41c970:c.instructions+=8;goto B41c970;
case 0x41c971:c.instructions+=7;goto B41c971;
case 0x41c974:c.instructions+=6;goto B41c974;
case 0x41c975:c.instructions+=5;goto B41c975;
case 0x41c978:c.instructions+=4;goto B41c978;
case 0x41c979:c.instructions+=3;goto B41c979;
case 0x41c97c:c.instructions+=2;goto B41c97c;
case 0x41c97d:c.instructions+=1;goto B41c97d;
case 0x41c980:goto L41c980;
case 0x41c981:c.instructions+=5;goto B41c981;
case 0x41c982:c.instructions+=4;goto B41c982;
case 0x41c983:c.instructions+=3;goto B41c983;
case 0x41c985:c.instructions+=2;goto B41c985;
case 0x41c986:c.instructions+=1;goto B41c986;
case 0x41c990:goto L41c990;
case 0x41c993:c.instructions+=17;goto B41c993;
case 0x41c994:c.instructions+=16;goto B41c994;
case 0x41c995:c.instructions+=15;goto B41c995;
case 0x41c996:c.instructions+=14;goto B41c996;
case 0x41c997:c.instructions+=13;goto B41c997;
case 0x41c99b:c.instructions+=12;goto B41c99b;
case 0x41c99d:c.instructions+=11;goto B41c99d;
case 0x41c9a0:c.instructions+=10;goto B41c9a0;
case 0x41c9a6:c.instructions+=9;goto B41c9a6;
case 0x41c9a9:c.instructions+=8;goto B41c9a9;
case 0x41c9ab:c.instructions+=7;goto B41c9ab;
case 0x41c9af:c.instructions+=6;goto B41c9af;
case 0x41c9b1:c.instructions+=5;goto B41c9b1;
case 0x41c9b9:c.instructions+=4;goto B41c9b9;
case 0x41c9be:c.instructions+=3;goto B41c9be;
case 0x41c9c2:c.instructions+=2;goto B41c9c2;
case 0x41c9c6:c.instructions+=1;goto B41c9c6;
case 0x41c9c9:goto L41c9c9;
case 0x41c9cb:c.instructions+=4;goto B41c9cb;
case 0x41c9d1:c.instructions+=3;goto B41c9d1;
case 0x41c9d4:c.instructions+=2;goto B41c9d4;
case 0x41c9d8:c.instructions+=1;goto B41c9d8;
case 0x41c9da:goto L41c9da;
case 0x41c9e0:c.instructions+=5;goto B41c9e0;
case 0x41c9e3:c.instructions+=4;goto B41c9e3;
case 0x41c9e5:c.instructions+=3;goto B41c9e5;
case 0x41c9e7:c.instructions+=2;goto B41c9e7;
case 0x41c9e9:c.instructions+=1;goto B41c9e9;
case 0x41c9eb:goto L41c9eb;
case 0x41c9ed:c.instructions+=1;goto B41c9ed;
case 0x41c9f2:goto L41c9f2;
case 0x41c9f8:c.instructions+=13;goto B41c9f8;
case 0x41c9fd:c.instructions+=12;goto B41c9fd;
case 0x41ca00:c.instructions+=11;goto B41ca00;
case 0x41ca03:c.instructions+=10;goto B41ca03;
case 0x41ca07:c.instructions+=9;goto B41ca07;
case 0x41ca08:c.instructions+=8;goto B41ca08;
case 0x41ca0c:c.instructions+=7;goto B41ca0c;
case 0x41ca11:c.instructions+=6;goto B41ca11;
case 0x41ca17:c.instructions+=5;goto B41ca17;
case 0x41ca1b:c.instructions+=4;goto B41ca1b;
case 0x41ca21:c.instructions+=3;goto B41ca21;
case 0x41ca24:c.instructions+=2;goto B41ca24;
case 0x41ca25:c.instructions+=1;goto B41ca25;
case 0x41ca2a:goto L41ca2a;
case 0x41ca2c:c.instructions+=3;goto B41ca2c;
case 0x41ca30:c.instructions+=2;goto B41ca30;
case 0x41ca34:c.instructions+=1;goto B41ca34;
case 0x41ca39:goto L41ca39;
case 0x41ca3d:goto L41ca3d;
case 0x41ca43:c.instructions+=2;goto B41ca43;
case 0x41ca45:c.instructions+=1;goto B41ca45;
case 0x41ca47:goto L41ca47;
case 0x41ca4c:c.instructions+=1;goto B41ca4c;
case 0x41ca4e:goto L41ca4e;
case 0x41ca54:c.instructions+=1;goto B41ca54;
case 0x41ca59:goto L41ca59;
case 0x41ca5b:c.instructions+=1;goto B41ca5b;
case 0x41ca5d:goto L41ca5d;
case 0x41ca60:c.instructions+=1;goto B41ca60;
case 0x41ca62:goto L41ca62;
case 0x41ca68:c.instructions+=10;goto B41ca68;
case 0x41ca6e:c.instructions+=9;goto B41ca6e;
case 0x41ca70:c.instructions+=8;goto B41ca70;
case 0x41ca74:c.instructions+=7;goto B41ca74;
case 0x41ca78:c.instructions+=6;goto B41ca78;
case 0x41ca7e:c.instructions+=5;goto B41ca7e;
case 0x41ca84:c.instructions+=4;goto B41ca84;
case 0x41ca8a:c.instructions+=3;goto B41ca8a;
case 0x41ca8c:c.instructions+=2;goto B41ca8c;
case 0x41ca8f:c.instructions+=1;goto B41ca8f;
case 0x41ca91:goto L41ca91;
case 0x41ca94:c.instructions+=7;goto B41ca94;
case 0x41ca95:c.instructions+=6;goto B41ca95;
case 0x41ca9c:c.instructions+=5;goto B41ca9c;
case 0x41caa2:c.instructions+=4;goto B41caa2;
case 0x41caa6:c.instructions+=3;goto B41caa6;
case 0x41caa8:c.instructions+=2;goto B41caa8;
case 0x41caab:c.instructions+=1;goto B41caab;
case 0x41cab0:goto L41cab0;
case 0x41cab4:c.instructions+=3;goto B41cab4;
case 0x41caba:c.instructions+=2;goto B41caba;
case 0x41cabf:c.instructions+=1;goto B41cabf;
case 0x41cac5:goto L41cac5;
case 0x41cac8:c.instructions+=3;goto B41cac8;
case 0x41caca:c.instructions+=2;goto B41caca;
case 0x41cad2:c.instructions+=1;goto B41cad2;
case 0x41cad4:goto L41cad4;
case 0x41cadb:c.instructions+=5;goto B41cadb;
case 0x41cade:c.instructions+=4;goto B41cade;
case 0x41cae1:c.instructions+=3;goto B41cae1;
case 0x41cae5:c.instructions+=2;goto B41cae5;
case 0x41cae9:c.instructions+=1;goto B41cae9;
case 0x41caeb:goto L41caeb;
case 0x41caf1:c.instructions+=3;goto B41caf1;
case 0x41caf3:c.instructions+=2;goto B41caf3;
case 0x41caf9:c.instructions+=1;goto B41caf9;
case 0x41cafb:goto L41cafb;
case 0x41cb01:c.instructions+=7;goto B41cb01;
case 0x41cb02:c.instructions+=6;goto B41cb02;
case 0x41cb06:c.instructions+=5;goto B41cb06;
case 0x41cb07:c.instructions+=4;goto B41cb07;
case 0x41cb0b:c.instructions+=3;goto B41cb0b;
case 0x41cb0c:c.instructions+=2;goto B41cb0c;
case 0x41cb0d:c.instructions+=1;goto B41cb0d;
case 0x41cb12:goto L41cb12;
case 0x41cb18:c.instructions+=8;goto B41cb18;
case 0x41cb1e:c.instructions+=7;goto B41cb1e;
case 0x41cb1f:c.instructions+=6;goto B41cb1f;
case 0x41cb23:c.instructions+=5;goto B41cb23;
case 0x41cb24:c.instructions+=4;goto B41cb24;
case 0x41cb2a:c.instructions+=3;goto B41cb2a;
case 0x41cb2d:c.instructions+=2;goto B41cb2d;
case 0x41cb2e:c.instructions+=1;goto B41cb2e;
case 0x41cb33:goto L41cb33;
case 0x41cb35:c.instructions+=5;goto B41cb35;
case 0x41cb37:c.instructions+=4;goto B41cb37;
case 0x41cb3d:c.instructions+=3;goto B41cb3d;
case 0x41cb3f:c.instructions+=2;goto B41cb3f;
case 0x41cb42:c.instructions+=1;goto B41cb42;
case 0x41cb44:goto L41cb44;
case 0x41cb46:c.instructions+=1;goto B41cb46;
case 0x41cb4c:goto L41cb4c;
case 0x41cb51:c.instructions+=2;goto B41cb51;
case 0x41cb53:c.instructions+=1;goto B41cb53;
case 0x41cb55:goto L41cb55;
case 0x41cb5a:goto L41cb5a;
case 0x41cb5e:c.instructions+=2;goto B41cb5e;
case 0x41cb60:c.instructions+=1;goto B41cb60;
case 0x41cb62:goto L41cb62;
case 0x41cb64:goto L41cb64;
case 0x41cb66:goto L41cb66;
case 0x41cb6c:c.instructions+=2;goto B41cb6c;
case 0x41cb6f:c.instructions+=1;goto B41cb6f;
case 0x41cb76:goto L41cb76;
case 0x41cb7c:c.instructions+=6;goto B41cb7c;
case 0x41cb80:c.instructions+=5;goto B41cb80;
case 0x41cb82:c.instructions+=4;goto B41cb82;
case 0x41cb84:c.instructions+=3;goto B41cb84;
case 0x41cb88:c.instructions+=2;goto B41cb88;
case 0x41cb8a:c.instructions+=1;goto B41cb8a;
case 0x41cb8c:goto L41cb8c;
case 0x41cb92:c.instructions+=2;goto B41cb92;
case 0x41cb94:c.instructions+=1;goto B41cb94;
case 0x41cb96:goto L41cb96;
case 0x41cb9a:c.instructions+=3;goto B41cb9a;
case 0x41cb9e:c.instructions+=2;goto B41cb9e;
case 0x41cba6:c.instructions+=1;goto B41cba6;
case 0x41cba8:goto L41cba8;
case 0x41cbae:c.instructions+=3;goto B41cbae;
case 0x41cbb4:c.instructions+=2;goto B41cbb4;
case 0x41cbb8:c.instructions+=1;goto B41cbb8;
case 0x41cbbc:goto L41cbbc;
case 0x41cbc2:c.instructions+=4;goto B41cbc2;
case 0x41cbc8:c.instructions+=3;goto B41cbc8;
case 0x41cbcc:c.instructions+=2;goto B41cbcc;
case 0x41cbd0:c.instructions+=1;goto B41cbd0;
case 0x41cbd2:goto L41cbd2;
case 0x41cbda:c.instructions+=1;goto B41cbda;
case 0x41cbe2:goto L41cbe2;
case 0x41cbe6:c.instructions+=3;goto B41cbe6;
case 0x41cbe8:c.instructions+=2;goto B41cbe8;
case 0x41cbe9:c.instructions+=1;goto B41cbe9;
case 0x41cbec:goto L41cbec;
case 0x41cbf0:c.instructions+=3;goto B41cbf0;
case 0x41cbf2:c.instructions+=2;goto B41cbf2;
case 0x41cbf5:c.instructions+=1;goto B41cbf5;
case 0x41cbf7:goto L41cbf7;
case 0x41cbfb:c.instructions+=1;goto B41cbfb;
case 0x41cbfd:goto L41cbfd;
case 0x41cbff:goto L41cbff;
case 0x41cc03:c.instructions+=4;goto B41cc03;
case 0x41cc07:c.instructions+=3;goto B41cc07;
case 0x41cc09:c.instructions+=2;goto B41cc09;
case 0x41cc0c:c.instructions+=1;goto B41cc0c;
case 0x41cc0e:goto L41cc0e;
case 0x41cc12:c.instructions+=1;goto B41cc12;
case 0x41cc16:goto L41cc16;
case 0x41cc1a:c.instructions+=10;goto B41cc1a;
case 0x41cc1d:c.instructions+=9;goto B41cc1d;
case 0x41cc1f:c.instructions+=8;goto B41cc1f;
case 0x41cc20:c.instructions+=7;goto B41cc20;
case 0x41cc24:c.instructions+=6;goto B41cc24;
case 0x41cc25:c.instructions+=5;goto B41cc25;
case 0x41cc29:c.instructions+=4;goto B41cc29;
case 0x41cc2a:c.instructions+=3;goto B41cc2a;
case 0x41cc2e:c.instructions+=2;goto B41cc2e;
case 0x41cc2f:c.instructions+=1;goto B41cc2f;
case 0x41cc32:goto L41cc32;
case 0x41cc33:c.instructions+=5;goto B41cc33;
case 0x41cc34:c.instructions+=4;goto B41cc34;
case 0x41cc35:c.instructions+=3;goto B41cc35;
case 0x41cc36:c.instructions+=2;goto B41cc36;
case 0x41cc39:c.instructions+=1;goto B41cc39;
case 0x41cc40:goto L41cc40;
case 0x41cc41:c.instructions+=10;goto B41cc41;
case 0x41cc42:c.instructions+=9;goto B41cc42;
case 0x41cc43:c.instructions+=8;goto B41cc43;
case 0x41cc47:c.instructions+=7;goto B41cc47;
case 0x41cc49:c.instructions+=6;goto B41cc49;
case 0x41cc4d:c.instructions+=5;goto B41cc4d;
case 0x41cc4e:c.instructions+=4;goto B41cc4e;
case 0x41cc50:c.instructions+=3;goto B41cc50;
case 0x41cc51:c.instructions+=2;goto B41cc51;
case 0x41cc55:c.instructions+=1;goto B41cc55;
case 0x41cc5a:goto L41cc5a;
case 0x41cc5d:c.instructions+=2;goto B41cc5d;
case 0x41cc60:c.instructions+=1;goto B41cc60;
case 0x41cc62:goto L41cc62;
case 0x41cc66:c.instructions+=2;goto B41cc66;
case 0x41cc6c:c.instructions+=1;goto B41cc6c;
case 0x41cc6e:goto L41cc6e;
case 0x41cc6f:c.instructions+=2;goto B41cc6f;
case 0x41cc75:c.instructions+=1;goto B41cc75;
case 0x41cc7a:goto L41cc7a;
case 0x41cc7b:c.instructions+=4;goto B41cc7b;
case 0x41cc7d:c.instructions+=3;goto B41cc7d;
case 0x41cc7e:c.instructions+=2;goto B41cc7e;
case 0x41cc7f:c.instructions+=1;goto B41cc7f;
case 0x41cc82:goto L41cc82;
case 0x41cc83:c.instructions+=4;goto B41cc83;
case 0x41cc85:c.instructions+=3;goto B41cc85;
case 0x41cc86:c.instructions+=2;goto B41cc86;
case 0x41cc87:c.instructions+=1;goto B41cc87;
case 0x41cc90:goto L41cc90;
case 0x41cc94:c.instructions+=7;goto B41cc94;
case 0x41cc95:c.instructions+=6;goto B41cc95;
case 0x41cc96:c.instructions+=5;goto B41cc96;
case 0x41cc98:c.instructions+=4;goto B41cc98;
case 0x41cc9d:c.instructions+=3;goto B41cc9d;
case 0x41cc9e:c.instructions+=2;goto B41cc9e;
case 0x41cca0:c.instructions+=1;goto B41cca0;
case 0x41cca5:goto L41cca5;
case 0x41cca8:c.instructions+=4;goto B41cca8;
case 0x41ccaa:c.instructions+=3;goto B41ccaa;
case 0x41ccad:c.instructions+=2;goto B41ccad;
case 0x41ccaf:c.instructions+=1;goto B41ccaf;
case 0x41ccb1:goto L41ccb1;
case 0x41ccb5:c.instructions+=6;goto B41ccb5;
case 0x41ccbb:c.instructions+=5;goto B41ccbb;
case 0x41ccc1:c.instructions+=4;goto B41ccc1;
case 0x41ccc3:c.instructions+=3;goto B41ccc3;
case 0x41ccc4:c.instructions+=2;goto B41ccc4;
case 0x41cccb:c.instructions+=1;goto B41cccb;
case 0x41cccd:goto L41cccd;
case 0x41cccf:c.instructions+=1;goto B41cccf;
case 0x41ccd4:goto L41ccd4;
case 0x41ccd6:c.instructions+=3;goto B41ccd6;
case 0x41ccd9:c.instructions+=2;goto B41ccd9;
case 0x41ccdb:c.instructions+=1;goto B41ccdb;
case 0x41ccde:goto L41ccde;
case 0x41cce1:c.instructions+=3;goto B41cce1;
case 0x41cce3:c.instructions+=2;goto B41cce3;
case 0x41cce4:c.instructions+=1;goto B41cce4;
case 0x41cce6:goto L41cce6;
case 0x41cce8:c.instructions+=1;goto B41cce8;
case 0x41cced:goto L41cced;
case 0x41ccf0:c.instructions+=4;goto B41ccf0;
case 0x41ccf2:c.instructions+=3;goto B41ccf2;
case 0x41ccf5:c.instructions+=2;goto B41ccf5;
case 0x41ccf8:c.instructions+=1;goto B41ccf8;
case 0x41ccfa:goto L41ccfa;
case 0x41ccfb:c.instructions+=3;goto B41ccfb;
case 0x41ccfd:c.instructions+=2;goto B41ccfd;
case 0x41ccfe:c.instructions+=1;goto B41ccfe;
case 0x41cd10:goto L41cd10;
case 0x41cd11:c.instructions+=12;goto B41cd11;
case 0x41cd12:c.instructions+=11;goto B41cd12;
case 0x41cd13:c.instructions+=10;goto B41cd13;
case 0x41cd14:c.instructions+=9;goto B41cd14;
case 0x41cd18:c.instructions+=8;goto B41cd18;
case 0x41cd19:c.instructions+=7;goto B41cd19;
case 0x41cd1b:c.instructions+=6;goto B41cd1b;
case 0x41cd21:c.instructions+=5;goto B41cd21;
case 0x41cd22:c.instructions+=4;goto B41cd22;
case 0x41cd24:c.instructions+=3;goto B41cd24;
case 0x41cd26:c.instructions+=2;goto B41cd26;
case 0x41cd2e:c.instructions+=1;goto B41cd2e;
case 0x41cd33:goto L41cd33;
case 0x41cd35:c.instructions+=3;goto B41cd35;
case 0x41cd3b:c.instructions+=2;goto B41cd3b;
case 0x41cd3d:c.instructions+=1;goto B41cd3d;
case 0x41cd43:goto L41cd43;
case 0x41cd45:c.instructions+=1;goto B41cd45;
case 0x41cd4b:goto L41cd4b;
case 0x41cd4c:c.instructions+=2;goto B41cd4c;
case 0x41cd4e:c.instructions+=1;goto B41cd4e;
case 0x41cd53:goto L41cd53;
case 0x41cd59:c.instructions+=3;goto B41cd59;
case 0x41cd5b:c.instructions+=2;goto B41cd5b;
case 0x41cd5e:c.instructions+=1;goto B41cd5e;
case 0x41cd60:goto L41cd60;
case 0x41cd63:c.instructions+=4;goto B41cd63;
case 0x41cd69:c.instructions+=3;goto B41cd69;
case 0x41cd6b:c.instructions+=2;goto B41cd6b;
case 0x41cd6e:c.instructions+=1;goto B41cd6e;
case 0x41cd74:goto L41cd74;
case 0x41cd7b:c.instructions+=6;goto B41cd7b;
case 0x41cd81:c.instructions+=5;goto B41cd81;
case 0x41cd84:c.instructions+=4;goto B41cd84;
case 0x41cd87:c.instructions+=3;goto B41cd87;
case 0x41cd88:c.instructions+=2;goto B41cd88;
case 0x41cd8c:c.instructions+=1;goto B41cd8c;
case 0x41cd91:goto L41cd91;
case 0x41cd97:c.instructions+=11;goto B41cd97;
case 0x41cd9b:c.instructions+=10;goto B41cd9b;
case 0x41cd9f:c.instructions+=9;goto B41cd9f;
case 0x41cda0:c.instructions+=8;goto B41cda0;
case 0x41cda4:c.instructions+=7;goto B41cda4;
case 0x41cda8:c.instructions+=6;goto B41cda8;
case 0x41cda9:c.instructions+=5;goto B41cda9;
case 0x41cdaa:c.instructions+=4;goto B41cdaa;
case 0x41cdab:c.instructions+=3;goto B41cdab;
case 0x41cdac:c.instructions+=2;goto B41cdac;
case 0x41cdad:c.instructions+=1;goto B41cdad;
case 0x41cdb2:goto L41cdb2;
case 0x41cdb4:c.instructions+=3;goto B41cdb4;
case 0x41cdb7:c.instructions+=2;goto B41cdb7;
case 0x41cdb9:c.instructions+=1;goto B41cdb9;
case 0x41cdbb:goto L41cdbb;
case 0x41cdbf:c.instructions+=4;goto B41cdbf;
case 0x41cdc5:c.instructions+=3;goto B41cdc5;
case 0x41cdc7:c.instructions+=2;goto B41cdc7;
case 0x41cdca:c.instructions+=1;goto B41cdca;
case 0x41cdcc:goto L41cdcc;
case 0x41cdcd:c.instructions+=2;goto B41cdcd;
case 0x41cdce:c.instructions+=1;goto B41cdce;
case 0x41cdd3:goto L41cdd3;
case 0x41cdd6:c.instructions+=5;goto B41cdd6;
case 0x41cdd8:c.instructions+=4;goto B41cdd8;
case 0x41cdda:c.instructions+=3;goto B41cdda;
case 0x41cddc:c.instructions+=2;goto B41cddc;
case 0x41cdde:c.instructions+=1;goto B41cdde;
case 0x41cde0:goto L41cde0;
case 0x41cde6:c.instructions+=2;goto B41cde6;
case 0x41cde7:c.instructions+=1;goto B41cde7;
case 0x41cdec:goto L41cdec;
case 0x41cdee:c.instructions+=1;goto B41cdee;
case 0x41cdf0:goto L41cdf0;
case 0x41cdf1:c.instructions+=2;goto B41cdf1;
case 0x41cdf7:c.instructions+=1;goto B41cdf7;
case 0x41cdfc:goto L41cdfc;
case 0x41ce02:c.instructions+=3;goto B41ce02;
case 0x41ce06:c.instructions+=2;goto B41ce06;
case 0x41ce0c:c.instructions+=1;goto B41ce0c;
case 0x41ce12:goto L41ce12;
case 0x41ce13:c.instructions+=6;goto B41ce13;
case 0x41ce14:c.instructions+=5;goto B41ce14;
case 0x41ce15:c.instructions+=4;goto B41ce15;
case 0x41ce17:c.instructions+=3;goto B41ce17;
case 0x41ce18:c.instructions+=2;goto B41ce18;
case 0x41ce19:c.instructions+=1;goto B41ce19;
case 0x41ce1c:goto L41ce1c;
case 0x41ce1d:c.instructions+=6;goto B41ce1d;
case 0x41ce1e:c.instructions+=5;goto B41ce1e;
case 0x41ce1f:c.instructions+=4;goto B41ce1f;
case 0x41ce21:c.instructions+=3;goto B41ce21;
case 0x41ce22:c.instructions+=2;goto B41ce22;
case 0x41ce23:c.instructions+=1;goto B41ce23;
case 0x41ce30:goto L41ce30;
case 0x41ce31:c.instructions+=8;goto B41ce31;
case 0x41ce32:c.instructions+=7;goto B41ce32;
case 0x41ce33:c.instructions+=6;goto B41ce33;
case 0x41ce37:c.instructions+=5;goto B41ce37;
case 0x41ce3d:c.instructions+=4;goto B41ce3d;
case 0x41ce3f:c.instructions+=3;goto B41ce3f;
case 0x41ce42:c.instructions+=2;goto B41ce42;
case 0x41ce44:c.instructions+=1;goto B41ce44;
case 0x41ce46:goto L41ce46;
case 0x41ce4d:c.instructions+=2;goto B41ce4d;
case 0x41ce4f:c.instructions+=1;goto B41ce4f;
case 0x41ce51:goto L41ce51;
case 0x41ce53:c.instructions+=1;goto B41ce53;
case 0x41ce58:goto L41ce58;
case 0x41ce5e:c.instructions+=1;goto B41ce5e;
case 0x41ce60:goto L41ce60;
case 0x41ce61:c.instructions+=3;goto B41ce61;
case 0x41ce67:c.instructions+=2;goto B41ce67;
case 0x41ce6d:c.instructions+=1;goto B41ce6d;
case 0x41ce72:goto L41ce72;
case 0x41ce75:c.instructions+=1;goto B41ce75;
case 0x41ce7b:goto L41ce7b;
case 0x41ce7c:c.instructions+=4;goto B41ce7c;
case 0x41ce7d:c.instructions+=3;goto B41ce7d;
case 0x41ce7f:c.instructions+=2;goto B41ce7f;
case 0x41ce80:c.instructions+=1;goto B41ce80;
case 0x41ce83:goto L41ce83;
case 0x41ce84:c.instructions+=4;goto B41ce84;
case 0x41ce85:c.instructions+=3;goto B41ce85;
case 0x41ce87:c.instructions+=2;goto B41ce87;
case 0x41ce88:c.instructions+=1;goto B41ce88;
case 0x41ce90:goto L41ce90;
case 0x41ce91:c.instructions+=10;goto B41ce91;
case 0x41ce93:c.instructions+=9;goto B41ce93;
case 0x41ce96:c.instructions+=8;goto B41ce96;
case 0x41ce99:c.instructions+=7;goto B41ce99;
case 0x41ce9a:c.instructions+=6;goto B41ce9a;
case 0x41ce9b:c.instructions+=5;goto B41ce9b;
case 0x41ce9e:c.instructions+=4;goto B41ce9e;
case 0x41cea1:c.instructions+=3;goto B41cea1;
case 0x41cea2:c.instructions+=2;goto B41cea2;
case 0x41cea5:c.instructions+=1;goto B41cea5;
case 0x41cea7:goto L41cea7;
case 0x41ceaa:c.instructions+=7;goto B41ceaa;
case 0x41ceac:c.instructions+=6;goto B41ceac;
case 0x41ceae:c.instructions+=5;goto B41ceae;
case 0x41ceb0:c.instructions+=4;goto B41ceb0;
case 0x41ceb2:c.instructions+=3;goto B41ceb2;
case 0x41ceb3:c.instructions+=2;goto B41ceb3;
case 0x41ceb5:c.instructions+=1;goto B41ceb5;
case 0x41ceba:goto L41ceba;
case 0x41cebc:goto L41cebc;
case 0x41cebf:c.instructions+=2;goto B41cebf;
case 0x41cec2:c.instructions+=1;goto B41cec2;
case 0x41cec4:goto L41cec4;
case 0x41cec7:c.instructions+=7;goto B41cec7;
case 0x41cec9:c.instructions+=6;goto B41cec9;
case 0x41cecb:c.instructions+=5;goto B41cecb;
case 0x41cecd:c.instructions+=4;goto B41cecd;
case 0x41cecf:c.instructions+=3;goto B41cecf;
case 0x41ced0:c.instructions+=2;goto B41ced0;
case 0x41ced2:c.instructions+=1;goto B41ced2;
case 0x41ced7:goto L41ced7;
case 0x41ceda:goto L41ceda;
case 0x41cedd:c.instructions+=1;goto B41cedd;
case 0x41cee3:goto L41cee3;
case 0x41cee6:c.instructions+=1;goto B41cee6;
case 0x41ceec:goto L41ceec;
case 0x41ceee:c.instructions+=1;goto B41ceee;
case 0x41cef4:goto L41cef4;
case 0x41cef6:c.instructions+=2;goto B41cef6;
case 0x41cefa:c.instructions+=1;goto B41cefa;
case 0x41cf00:goto L41cf00;
case 0x41cf02:c.instructions+=11;goto B41cf02;
case 0x41cf05:c.instructions+=10;goto B41cf05;
case 0x41cf08:c.instructions+=9;goto B41cf08;
case 0x41cf0a:c.instructions+=8;goto B41cf0a;
case 0x41cf0c:c.instructions+=7;goto B41cf0c;
case 0x41cf0d:c.instructions+=6;goto B41cf0d;
case 0x41cf11:c.instructions+=5;goto B41cf11;
case 0x41cf12:c.instructions+=4;goto B41cf12;
case 0x41cf16:c.instructions+=3;goto B41cf16;
case 0x41cf17:c.instructions+=2;goto B41cf17;
case 0x41cf19:c.instructions+=1;goto B41cf19;
case 0x41cf1e:goto L41cf1e;
case 0x41cf21:c.instructions+=14;goto B41cf21;
case 0x41cf25:c.instructions+=13;goto B41cf25;
case 0x41cf29:c.instructions+=12;goto B41cf29;
case 0x41cf2b:c.instructions+=11;goto B41cf2b;
case 0x41cf2f:c.instructions+=10;goto B41cf2f;
case 0x41cf31:c.instructions+=9;goto B41cf31;
case 0x41cf35:c.instructions+=8;goto B41cf35;
case 0x41cf38:c.instructions+=7;goto B41cf38;
case 0x41cf39:c.instructions+=6;goto B41cf39;
case 0x41cf3d:c.instructions+=5;goto B41cf3d;
case 0x41cf3e:c.instructions+=4;goto B41cf3e;
case 0x41cf42:c.instructions+=3;goto B41cf42;
case 0x41cf43:c.instructions+=2;goto B41cf43;
case 0x41cf45:c.instructions+=1;goto B41cf45;
case 0x41cf4a:goto L41cf4a;
case 0x41cf4e:c.instructions+=13;goto B41cf4e;
case 0x41cf51:c.instructions+=12;goto B41cf51;
case 0x41cf55:c.instructions+=11;goto B41cf55;
case 0x41cf57:c.instructions+=10;goto B41cf57;
case 0x41cf58:c.instructions+=9;goto B41cf58;
case 0x41cf5c:c.instructions+=8;goto B41cf5c;
case 0x41cf5f:c.instructions+=7;goto B41cf5f;
case 0x41cf63:c.instructions+=6;goto B41cf63;
case 0x41cf64:c.instructions+=5;goto B41cf64;
case 0x41cf68:c.instructions+=4;goto B41cf68;
case 0x41cf69:c.instructions+=3;goto B41cf69;
case 0x41cf6d:c.instructions+=2;goto B41cf6d;
case 0x41cf6e:c.instructions+=1;goto B41cf6e;
case 0x41cf73:goto L41cf73;
case 0x41cf76:c.instructions+=2;goto B41cf76;
case 0x41cf78:c.instructions+=1;goto B41cf78;
case 0x41cf7a:goto L41cf7a;
case 0x41cf7d:c.instructions+=4;goto B41cf7d;
case 0x41cf7e:c.instructions+=3;goto B41cf7e;
case 0x41cf81:c.instructions+=2;goto B41cf81;
case 0x41cf83:c.instructions+=1;goto B41cf83;
case 0x41cf89:goto L41cf89;
case 0x41cf8b:c.instructions+=6;goto B41cf8b;
case 0x41cf8c:c.instructions+=5;goto B41cf8c;
case 0x41cf8d:c.instructions+=4;goto B41cf8d;
case 0x41cf8e:c.instructions+=3;goto B41cf8e;
case 0x41cf90:c.instructions+=2;goto B41cf90;
case 0x41cf91:c.instructions+=1;goto B41cf91;
case 0x41cf92:goto L41cf92;
case 0x41cf93:c.instructions+=6;goto B41cf93;
case 0x41cf94:c.instructions+=5;goto B41cf94;
case 0x41cf96:c.instructions+=4;goto B41cf96;
case 0x41cf97:c.instructions+=3;goto B41cf97;
case 0x41cf99:c.instructions+=2;goto B41cf99;
case 0x41cf9a:c.instructions+=1;goto B41cf9a;
case 0x41cfa0:goto L41cfa0;
case 0x41cfa6:c.instructions+=19;goto B41cfa6;
case 0x41cfa7:c.instructions+=18;goto B41cfa7;
case 0x41cfa8:c.instructions+=17;goto B41cfa8;
case 0x41cfac:c.instructions+=16;goto B41cfac;
case 0x41cfae:c.instructions+=15;goto B41cfae;
case 0x41cfb0:c.instructions+=14;goto B41cfb0;
case 0x41cfb3:c.instructions+=13;goto B41cfb3;
case 0x41cfb4:c.instructions+=12;goto B41cfb4;
case 0x41cfb5:c.instructions+=11;goto B41cfb5;
case 0x41cfb8:c.instructions+=10;goto B41cfb8;
case 0x41cfbb:c.instructions+=9;goto B41cfbb;
case 0x41cfbd:c.instructions+=8;goto B41cfbd;
case 0x41cfc0:c.instructions+=7;goto B41cfc0;
case 0x41cfc2:c.instructions+=6;goto B41cfc2;
case 0x41cfc6:c.instructions+=5;goto B41cfc6;
case 0x41cfc9:c.instructions+=4;goto B41cfc9;
case 0x41cfcb:c.instructions+=3;goto B41cfcb;
case 0x41cfce:c.instructions+=2;goto B41cfce;
case 0x41cfd0:c.instructions+=1;goto B41cfd0;
case 0x41cfd2:goto L41cfd2;
case 0x41cfd4:c.instructions+=2;goto B41cfd4;
case 0x41cfd6:c.instructions+=1;goto B41cfd6;
case 0x41cfd8:goto L41cfd8;
case 0x41cfd9:c.instructions+=5;goto B41cfd9;
case 0x41cfda:c.instructions+=4;goto B41cfda;
case 0x41cfdb:c.instructions+=3;goto B41cfdb;
case 0x41cfdd:c.instructions+=2;goto B41cfdd;
case 0x41cfde:c.instructions+=1;goto B41cfde;
case 0x41cfe1:goto L41cfe1;
case 0x41cfe5:c.instructions+=2;goto B41cfe5;
case 0x41cfe7:c.instructions+=1;goto B41cfe7;
case 0x41cfe9:goto L41cfe9;
case 0x41cfeb:c.instructions+=4;goto B41cfeb;
case 0x41cfec:c.instructions+=3;goto B41cfec;
case 0x41cfed:c.instructions+=2;goto B41cfed;
case 0x41cfef:c.instructions+=1;goto B41cfef;
case 0x41cff2:goto L41cff2;
case 0x41cff3:c.instructions+=4;goto B41cff3;
case 0x41cff4:c.instructions+=3;goto B41cff4;
case 0x41cff5:c.instructions+=2;goto B41cff5;
case 0x41cff6:c.instructions+=1;goto B41cff6;
case 0x41cff9:goto L41cff9;
case 0x41cffb:c.instructions+=3;goto B41cffb;
case 0x41cffc:c.instructions+=2;goto B41cffc;
case 0x41cffe:c.instructions+=1;goto B41cffe;
default:missing_instruction(c.pc);}
B41c002:L41c002:{c.instructions+=7;NFSU2_TR(0x41c002);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41c005:{NFSU2_TR(0x41c005);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c006:{NFSU2_TR(0x41c006);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B41c009:{NFSU2_TR(0x41c009);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B41c00d:{NFSU2_TR(0x41c00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c013:{NFSU2_TR(0x41c013);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c014:{NFSU2_TR(0x41c014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c019ull));
TAIL_STATIC(0x419c60u,419);
}
B41c019:L41c019:{c.instructions+=4;NFSU2_TR(0x41c019);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c01f:{NFSU2_TR(0x41c01f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c020:{NFSU2_TR(0x41c020);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c024:{NFSU2_TR(0x41c024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c029ull));
TAIL_STATIC(0x419cc0u,419);
}
B41c029:L41c029:{c.instructions+=4;NFSU2_TR(0x41c029);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c02a:{NFSU2_TR(0x41c02a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c02e:{NFSU2_TR(0x41c02e);
__builtin_memmove((R+4),(R+20),4);
}
B41c030:{NFSU2_TR(0x41c030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c035ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B41c035:L41c035:{c.instructions+=9;NFSU2_TR(0x41c035);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41c039:{NFSU2_TR(0x41c039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c03c:{NFSU2_TR(0x41c03c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c03f:{NFSU2_TR(0x41c03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c042:{NFSU2_TR(0x41c042);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41c044:{NFSU2_TR(0x41c044);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41c047:{NFSU2_TR(0x41c047);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c04a:{NFSU2_TR(0x41c04a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B41c04e:{NFSU2_TR(0x41c04e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c058;}}
}
B41c050:L41c050:{c.instructions+=2;NFSU2_TR(0x41c050);
{u32 ea_=u32(u32(7877960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c056:{NFSU2_TR(0x41c056);
{goto L41c092;}
}
B41c058:L41c058:{c.instructions+=3;NFSU2_TR(0x41c058);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B41c05d:{NFSU2_TR(0x41c05d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c05f:{NFSU2_TR(0x41c05f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c06a;}}
}
B41c061:L41c061:{c.instructions+=3;NFSU2_TR(0x41c061);
__builtin_memmove((R+0),gp(0x890104),4);
}
B41c066:{NFSU2_TR(0x41c066);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c068:{NFSU2_TR(0x41c068);
if(r1(R+518)){{goto L41c072;}}
}
B41c06a:L41c06a:{c.instructions+=2;NFSU2_TR(0x41c06a);
{u32 ea_=u32(u32(7877956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c070:{NFSU2_TR(0x41c070);
{goto L41c092;}
}
B41c072:L41c072:{c.instructions+=3;NFSU2_TR(0x41c072);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B41c077:{NFSU2_TR(0x41c077);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c079:{NFSU2_TR(0x41c079);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c084;}}
}
B41c07b:L41c07b:{c.instructions+=3;NFSU2_TR(0x41c07b);
__builtin_memmove((R+0),gp(0x890108),4);
}
B41c080:{NFSU2_TR(0x41c080);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c082:{NFSU2_TR(0x41c082);
if(r1(R+518)){{goto L41c08c;}}
}
B41c084:L41c084:{c.instructions+=2;NFSU2_TR(0x41c084);
{u32 ea_=u32(u32(7877952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c08a:{NFSU2_TR(0x41c08a);
{goto L41c092;}
}
B41c08c:L41c08c:{c.instructions+=1;NFSU2_TR(0x41c08c);
{u32 ea_=u32(u32(8293780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c092:L41c092:{c.instructions+=6;NFSU2_TR(0x41c092);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B41c094:{NFSU2_TR(0x41c094);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41c096:{NFSU2_TR(0x41c096);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c098:{NFSU2_TR(0x41c098);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c09a:{NFSU2_TR(0x41c09a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c09d:{NFSU2_TR(0x41c09d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c0c6;}}
}
B41c09f:L41c09f:{c.instructions+=5;NFSU2_TR(0x41c09f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41c0a1:{NFSU2_TR(0x41c0a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c0a3:{NFSU2_TR(0x41c0a3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c0a5:{NFSU2_TR(0x41c0a5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41c0a8:{NFSU2_TR(0x41c0a8);
if(r1(R+514)){{goto L41c0ca;}}
}
B41c0aa:L41c0aa:{c.instructions+=1;NFSU2_TR(0x41c0aa);
w1(R+0,u8(0x1ull));
}
B41c0ac:L41c0ac:{c.instructions+=7;NFSU2_TR(0x41c0ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x774ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41c0b2:{NFSU2_TR(0x41c0b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c0b4:{NFSU2_TR(0x41c0b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41c0b5:{NFSU2_TR(0x41c0b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41c0b6:{NFSU2_TR(0x41c0b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41c0b7:{NFSU2_TR(0x41c0b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41c0b8:{NFSU2_TR(0x41c0b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c0ef;}}
}
B41c0ba:L41c0ba:{c.instructions+=2;NFSU2_TR(0x41c0ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c0bc:{NFSU2_TR(0x41c0bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c0ef;}}
}
B41c0be:L41c0be:{c.instructions+=3;NFSU2_TR(0x41c0be);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41c0c0:{NFSU2_TR(0x41c0c0);
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
B41c0c3:{NFSU2_TR(0x41c0c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41c0c6:L41c0c6:{c.instructions+=2;NFSU2_TR(0x41c0c6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c0c8:{NFSU2_TR(0x41c0c8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c0ca:L41c0ca:{c.instructions+=8;NFSU2_TR(0x41c0ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c0ce:{NFSU2_TR(0x41c0ce);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c0d1:{NFSU2_TR(0x41c0d1);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41c0d7:{NFSU2_TR(0x41c0d7);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41c0d9:{NFSU2_TR(0x41c0d9);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41c0df:{NFSU2_TR(0x41c0df);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c0e1:{NFSU2_TR(0x41c0e1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41c0e4:{NFSU2_TR(0x41c0e4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41c0aau);}goto L41c0aa;}}
}
B41c0e6:L41c0e6:{c.instructions+=2;NFSU2_TR(0x41c0e6);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B41c0e9:{NFSU2_TR(0x41c0e9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41c0aau);}goto L41c0aa;}}
}
B41c0eb:L41c0eb:{c.instructions+=2;NFSU2_TR(0x41c0eb);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B41c0ed:{NFSU2_TR(0x41c0ed);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41c0acu);}goto L41c0ac;}
}
B41c0ef:L41c0ef:{c.instructions+=3;NFSU2_TR(0x41c0ef);
w4(R+0,u32(0x1ull));
}
B41c0f4:{NFSU2_TR(0x41c0f4);
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
B41c0f7:{NFSU2_TR(0x41c0f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41c100:L41c100:{c.instructions+=12;NFSU2_TR(0x41c100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B41c103:{NFSU2_TR(0x41c103);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c104:{NFSU2_TR(0x41c104);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41c108:{NFSU2_TR(0x41c108);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c109:{NFSU2_TR(0x41c109);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c10a:{NFSU2_TR(0x41c10a);
__builtin_memmove((R+24),(R+4),4);
}
B41c10c:{NFSU2_TR(0x41c10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c112:{NFSU2_TR(0x41c112);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c113:{NFSU2_TR(0x41c113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B41c115:{NFSU2_TR(0x41c115);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41c118:{NFSU2_TR(0x41c118);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41c11d:{NFSU2_TR(0x41c11d);
if(r1(R+518)){{goto L41c253;}}
}
B41c123:L41c123:{c.instructions+=4;NFSU2_TR(0x41c123);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c129:{NFSU2_TR(0x41c129);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c12c:{NFSU2_TR(0x41c12c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c12e:{NFSU2_TR(0x41c12e);
if(r1(R+518)){{goto L41c167;}}
}
B41c130:L41c130:{c.instructions+=2;NFSU2_TR(0x41c130);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c131:{NFSU2_TR(0x41c131);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c136ull));
TAIL_STATIC(0x60c0f0u,60c);
}
B41c136:L41c136:{c.instructions+=3;NFSU2_TR(0x41c136);
__builtin_memmove((R+20),(R+0),4);
}
B41c138:{NFSU2_TR(0x41c138);
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
B41c13a:{NFSU2_TR(0x41c13a);
if(r1(R+518)){{goto L41c167;}}
}
B41c13c:L41c13c:{c.instructions+=3;NFSU2_TR(0x41c13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c142:{NFSU2_TR(0x41c142);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c143:{NFSU2_TR(0x41c143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c148ull));
TAIL_STATIC(0x60bff0u,60b);
}
B41c148:L41c148:{c.instructions+=6;NFSU2_TR(0x41c148);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41c14a:{NFSU2_TR(0x41c14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c150:{NFSU2_TR(0x41c150);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c154:{NFSU2_TR(0x41c154);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c155:{NFSU2_TR(0x41c155);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c156:{NFSU2_TR(0x41c156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c15bull));
TAIL_STATIC(0x60c010u,60c);
}
B41c15b:L41c15b:{c.instructions+=3;NFSU2_TR(0x41c15b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41c15d:{NFSU2_TR(0x41c15d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41c162:{NFSU2_TR(0x41c162);
{goto L41c26c;}
}
B41c167:L41c167:{c.instructions+=4;NFSU2_TR(0x41c167);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c16d:{NFSU2_TR(0x41c16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c170:{NFSU2_TR(0x41c170);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c172:{NFSU2_TR(0x41c172);
if(r1(R+518)){{goto L41c253;}}
}
B41c178:L41c178:{c.instructions+=12;NFSU2_TR(0x41c178);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c179:{NFSU2_TR(0x41c179);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41c17d:{NFSU2_TR(0x41c17d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c17e:{NFSU2_TR(0x41c17e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c181:{NFSU2_TR(0x41c181);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41c185:{NFSU2_TR(0x41c185);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c186:{NFSU2_TR(0x41c186);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c187:{NFSU2_TR(0x41c187);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c18f:{NFSU2_TR(0x41c18f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c197:{NFSU2_TR(0x41c197);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c19f:{NFSU2_TR(0x41c19f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c1a7:{NFSU2_TR(0x41c1a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c1acull));
TAIL_STATIC(0x419bc0u,419);
}
B41c1ac:L41c1ac:{c.instructions+=8;NFSU2_TR(0x41c1ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c1ad:{NFSU2_TR(0x41c1ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41c1b1:{NFSU2_TR(0x41c1b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c1b2:{NFSU2_TR(0x41c1b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41c1b6:{NFSU2_TR(0x41c1b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c1b7:{NFSU2_TR(0x41c1b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c1bd:{NFSU2_TR(0x41c1bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c1be:{NFSU2_TR(0x41c1be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c1c3ull));
TAIL_STATIC(0x419bc0u,419);
}
B41c1c3:L41c1c3:{c.instructions+=4;NFSU2_TR(0x41c1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c1c9:{NFSU2_TR(0x41c1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c1cc:{NFSU2_TR(0x41c1cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c1ce:{NFSU2_TR(0x41c1ce);
if(r1(R+518)){{goto L41c1d9;}}
}
B41c1d0:L41c1d0:{c.instructions+=3;NFSU2_TR(0x41c1d0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B41c1d4:{NFSU2_TR(0x41c1d4);
{u32 ea_=u32(r4(R+8)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c1d7:{NFSU2_TR(0x41c1d7);
{goto L41c1df;}
}
B41c1d9:L41c1d9:{c.instructions+=1;NFSU2_TR(0x41c1d9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c1df:L41c1df:{c.instructions+=4;NFSU2_TR(0x41c1df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c1e2:{NFSU2_TR(0x41c1e2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c1e6:{NFSU2_TR(0x41c1e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c1e8:{NFSU2_TR(0x41c1e8);
if(r1(R+518)){{goto L41c1f2;}}
}
B41c1ea:L41c1ea:{c.instructions+=3;NFSU2_TR(0x41c1ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c1ed:{NFSU2_TR(0x41c1ed);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c1f0:{NFSU2_TR(0x41c1f0);
{goto L41c1f8;}
}
B41c1f2:L41c1f2:{c.instructions+=1;NFSU2_TR(0x41c1f2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c1f8:L41c1f8:{c.instructions+=8;NFSU2_TR(0x41c1f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41c1fc:{NFSU2_TR(0x41c1fc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c200:{NFSU2_TR(0x41c200);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41c204:{NFSU2_TR(0x41c204);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c208:{NFSU2_TR(0x41c208);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c209:{NFSU2_TR(0x41c209);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c20a:{NFSU2_TR(0x41c20a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c20b:{NFSU2_TR(0x41c20b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c210ull));
TAIL_STATIC(0x401090u,401);
}
B41c210:L41c210:{c.instructions+=5;NFSU2_TR(0x41c210);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41c214:{NFSU2_TR(0x41c214);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41c217:{NFSU2_TR(0x41c217);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c219:{NFSU2_TR(0x41c219);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41c21c:{NFSU2_TR(0x41c21c);
if(r1(R+514)){{goto L41c253;}}
}
B41c21e:L41c21e:{c.instructions+=5;NFSU2_TR(0x41c21e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c222:{NFSU2_TR(0x41c222);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c223:{NFSU2_TR(0x41c223);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c224:{NFSU2_TR(0x41c224);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c225:{NFSU2_TR(0x41c225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c22aull));
TAIL_STATIC(0x401090u,401);
}
B41c22a:L41c22a:{c.instructions+=5;NFSU2_TR(0x41c22a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41c22e:{NFSU2_TR(0x41c22e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41c231:{NFSU2_TR(0x41c231);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c233:{NFSU2_TR(0x41c233);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41c236:{NFSU2_TR(0x41c236);
if(r1(R+514)){{goto L41c253;}}
}
B41c238:L41c238:{c.instructions+=7;NFSU2_TR(0x41c238);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c23c:{NFSU2_TR(0x41c23c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41c241:{NFSU2_TR(0x41c241);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41c245:{NFSU2_TR(0x41c245);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c249:{NFSU2_TR(0x41c249);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c24d:{NFSU2_TR(0x41c24d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41c251:{NFSU2_TR(0x41c251);
{goto L41c26c;}
}
B41c253:L41c253:{c.instructions+=5;NFSU2_TR(0x41c253);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c256:{NFSU2_TR(0x41c256);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c257:{NFSU2_TR(0x41c257);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c258:{NFSU2_TR(0x41c258);
w4(R+4,u32(0x88f298ull));
}
B41c25d:{NFSU2_TR(0x41c25d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c262ull));
TAIL_STATIC(0x5d5d50u,5d5);
}
B41c262:L41c262:{c.instructions+=2;NFSU2_TR(0x41c262);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c266:{NFSU2_TR(0x41c266);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c26c:L41c26c:{c.instructions+=12;NFSU2_TR(0x41c26c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c270:{NFSU2_TR(0x41c270);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c274:{NFSU2_TR(0x41c274);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c278:{NFSU2_TR(0x41c278);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c27a:{NFSU2_TR(0x41c27a);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41c27e:{NFSU2_TR(0x41c27e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41c27f:{NFSU2_TR(0x41c27f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c281:{NFSU2_TR(0x41c281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41c282:{NFSU2_TR(0x41c282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41c283:{NFSU2_TR(0x41c283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41c284:{NFSU2_TR(0x41c284);
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
B41c287:{NFSU2_TR(0x41c287);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41c290:L41c290:{c.instructions+=19;NFSU2_TR(0x41c290);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c292:{NFSU2_TR(0x41c292);
u8 U[4];
w4(U+0,u32(0x7715e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c297:{NFSU2_TR(0x41c297);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c29d:{NFSU2_TR(0x41c29d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c29e:{NFSU2_TR(0x41c29e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c2a5:{NFSU2_TR(0x41c2a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c2a6:{NFSU2_TR(0x41c2a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c2a7:{NFSU2_TR(0x41c2a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c2a8:{NFSU2_TR(0x41c2a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c2a9:{NFSU2_TR(0x41c2a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c2aa:{NFSU2_TR(0x41c2aa);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c2af:{NFSU2_TR(0x41c2af);
u8 U[4];
w4(U+0,u32(0x401f90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c2b4:{NFSU2_TR(0x41c2b4);
__builtin_memmove((R+24),(R+4),4);
}
B41c2b6:{NFSU2_TR(0x41c2b6);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c2b8:{NFSU2_TR(0x41c2b8);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c2ba:{NFSU2_TR(0x41c2ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41c2bd:{NFSU2_TR(0x41c2bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c2be:{NFSU2_TR(0x41c2be);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c2c2:{NFSU2_TR(0x41c2c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c2c7ull));
TAIL_STATIC(0x75c461u,75c);
}
B41c2c7:L41c2c7:{c.instructions+=15;NFSU2_TR(0x41c2c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c2cb:{NFSU2_TR(0x41c2cb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41c2cd:{NFSU2_TR(0x41c2cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B41c2cf:{NFSU2_TR(0x41c2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c2d2:{NFSU2_TR(0x41c2d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B41c2d9:{NFSU2_TR(0x41c2d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c2df:{NFSU2_TR(0x41c2df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+20),(U+0),4);
}
B41c2e5:{NFSU2_TR(0x41c2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c2ef:{NFSU2_TR(0x41c2ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c2f5:{NFSU2_TR(0x41c2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c2fb:{NFSU2_TR(0x41c2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c301:{NFSU2_TR(0x41c301);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41c303:{NFSU2_TR(0x41c303);
u8 U[4];
w4(U+0,u32(0x785064ull));
s4(u32(r4(R+20)),r4(U+0));
}
B41c30a:{NFSU2_TR(0x41c30a);
w4(R+4,u32(0xdcull));
}
B41c30f:{NFSU2_TR(0x41c30f);
__builtin_memmove((R+28),(R+20),4);
}
B41c311:L41c311:{c.instructions+=1;NFSU2_TR(0x41c311);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L41c313;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41c311u);}goto L41c311;}
}
B41c313:L41c313:{c.instructions+=5;NFSU2_TR(0x41c313);
__builtin_memmove((R+4),(R+20),4);
}
B41c315:{NFSU2_TR(0x41c315);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c319:{NFSU2_TR(0x41c319);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c31f:{NFSU2_TR(0x41c31f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41c325:{NFSU2_TR(0x41c325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c32aull));
TAIL_STATIC(0x411be0u,411);
}
B41c32a:L41c32a:{c.instructions+=5;NFSU2_TR(0x41c32a);
__builtin_memmove((R+4),(R+20),4);
}
B41c32c:{NFSU2_TR(0x41c32c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41c331:{NFSU2_TR(0x41c331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c334:{NFSU2_TR(0x41c334);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B41c33b:{NFSU2_TR(0x41c33b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c340ull));
TAIL_STATIC(0x411be0u,411);
}
B41c340:L41c340:{c.instructions+=13;NFSU2_TR(0x41c340);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c344:{NFSU2_TR(0x41c344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41c345:{NFSU2_TR(0x41c345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c34b:{NFSU2_TR(0x41c34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c351:{NFSU2_TR(0x41c351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c357:{NFSU2_TR(0x41c357);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c361:{NFSU2_TR(0x41c361);
__builtin_memmove((R+0),(R+24),4);
}
B41c363:{NFSU2_TR(0x41c363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41c364:{NFSU2_TR(0x41c364);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41c365:{NFSU2_TR(0x41c365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41c366:{NFSU2_TR(0x41c366);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c36d:{NFSU2_TR(0x41c36d);
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
B41c370:{NFSU2_TR(0x41c370);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41c380:L41c380:{c.instructions+=15;NFSU2_TR(0x41c380);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41c383:{NFSU2_TR(0x41c383);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c384:{NFSU2_TR(0x41c384);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c385:{NFSU2_TR(0x41c385);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c386:{NFSU2_TR(0x41c386);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41c38a:{NFSU2_TR(0x41c38a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c38b:{NFSU2_TR(0x41c38b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B41c38d:{NFSU2_TR(0x41c38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41c390:{NFSU2_TR(0x41c390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c396:{NFSU2_TR(0x41c396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41c399:{NFSU2_TR(0x41c399);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c39d:{NFSU2_TR(0x41c39d);
__builtin_memmove((R+4),(R+20),4);
}
B41c39f:{NFSU2_TR(0x41c39f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+12),(U+0),4);
}
B41c3a5:{NFSU2_TR(0x41c3a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c3a9:{NFSU2_TR(0x41c3a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c3acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41c3ac:L41c3ac:{c.instructions+=7;NFSU2_TR(0x41c3ac);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c3b0:{NFSU2_TR(0x41c3b0);
{u32 ea_=u32(u32(7877988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c3b6:{NFSU2_TR(0x41c3b6);
{u32 ea_=u32(r4(R+28)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41c3bc:{NFSU2_TR(0x41c3bc);
{u32 ea_=u32(u32(7877992u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41c3c2:{NFSU2_TR(0x41c3c2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c3c4:{NFSU2_TR(0x41c3c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c3c7:{NFSU2_TR(0x41c3c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c3cf;}}
}
B41c3c9:L41c3c9:{c.instructions+=2;NFSU2_TR(0x41c3c9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c3cd:{NFSU2_TR(0x41c3cd);
{goto L41c3da;}
}
B41c3cf:L41c3cf:{c.instructions+=3;NFSU2_TR(0x41c3cf);
__builtin_memmove((R+0),gp(0x783568),4);
}
B41c3d4:{NFSU2_TR(0x41c3d4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c3d6:{NFSU2_TR(0x41c3d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c3da:L41c3da:{c.instructions+=6;NFSU2_TR(0x41c3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c3dd:{NFSU2_TR(0x41c3dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c3df:{NFSU2_TR(0x41c3df);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c3e7:{NFSU2_TR(0x41c3e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c3ef:{NFSU2_TR(0x41c3ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c3f7:{NFSU2_TR(0x41c3f7);
if(r1(R+518)){{goto L41c42a;}}
}
B41c3f9:L41c3f9:{c.instructions+=11;NFSU2_TR(0x41c3f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B41c400:{NFSU2_TR(0x41c400);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B41c403:{NFSU2_TR(0x41c403);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41c406:{NFSU2_TR(0x41c406);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B41c40a:{NFSU2_TR(0x41c40a);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B41c40e:{NFSU2_TR(0x41c40e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41c412:{NFSU2_TR(0x41c412);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c416:{NFSU2_TR(0x41c416);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c41c:{NFSU2_TR(0x41c41c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c41d:{NFSU2_TR(0x41c41d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c421:{NFSU2_TR(0x41c421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c426ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B41c426:L41c426:{c.instructions+=2;NFSU2_TR(0x41c426);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c428:{NFSU2_TR(0x41c428);
{goto L41c44e;}
}
B41c42a:L41c42a:{c.instructions+=3;NFSU2_TR(0x41c42a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c42d:{NFSU2_TR(0x41c42d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c42f:{NFSU2_TR(0x41c42f);
if(r1(R+518)){{goto L41c44e;}}
}
B41c431:L41c431:{c.instructions+=9;NFSU2_TR(0x41c431);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c437:{NFSU2_TR(0x41c437);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c438:{NFSU2_TR(0x41c438);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41c43c:{NFSU2_TR(0x41c43c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c43d:{NFSU2_TR(0x41c43d);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41c441:{NFSU2_TR(0x41c441);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c442:{NFSU2_TR(0x41c442);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c443:{NFSU2_TR(0x41c443);
__builtin_memmove((R+4),(R+12),4);
}
B41c445:{NFSU2_TR(0x41c445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c44aull));
TAIL_STATIC(0x419bc0u,419);
}
B41c44a:L41c44a:{c.instructions+=1;NFSU2_TR(0x41c44a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c44e:L41c44e:{c.instructions+=8;NFSU2_TR(0x41c44e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c452:{NFSU2_TR(0x41c452);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c456:{NFSU2_TR(0x41c456);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41c45a:{NFSU2_TR(0x41c45a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c45b:{NFSU2_TR(0x41c45b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c45c:{NFSU2_TR(0x41c45c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c45d:{NFSU2_TR(0x41c45d);
__builtin_memmove((R+4),(R+12),4);
}
B41c45f:{NFSU2_TR(0x41c45f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c464ull));
TAIL_STATIC(0x411fa0u,411);
}
B41c464:L41c464:{c.instructions+=4;NFSU2_TR(0x41c464);
{u32 ea_=u32(u32(7877996u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41c46a:{NFSU2_TR(0x41c46a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c46c:{NFSU2_TR(0x41c46c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41c46f:{NFSU2_TR(0x41c46f);
if(r1(R+514)){{goto L41c4a5;}}
}
B41c471:L41c471:{c.instructions+=6;NFSU2_TR(0x41c471);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c475:{NFSU2_TR(0x41c475);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c476:{NFSU2_TR(0x41c476);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41c47a:{NFSU2_TR(0x41c47a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c47b:{NFSU2_TR(0x41c47b);
w4(R+4,u32(0x7e9bc0ull));
}
B41c480:{NFSU2_TR(0x41c480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c485ull));
TAIL_STATIC(0x40c840u,40c);
}
B41c485:L41c485:{c.instructions+=7;NFSU2_TR(0x41c485);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c489:{NFSU2_TR(0x41c489);
{u32 ea_=u32(u32(7878000u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41c48f:{NFSU2_TR(0x41c48f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c495:{NFSU2_TR(0x41c495);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41c499:{NFSU2_TR(0x41c499);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B41c49b:{NFSU2_TR(0x41c49b);
{u32 ea_=u32(u32(7878000u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41c4a1:{NFSU2_TR(0x41c4a1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c4a5:L41c4a5:{c.instructions+=7;NFSU2_TR(0x41c4a5);
{u32 ea_=u32(u32(7877980u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c4ab:{NFSU2_TR(0x41c4ab);
{u32 ea_=u32(r4(R+28)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41c4b1:{NFSU2_TR(0x41c4b1);
{u32 ea_=u32(u32(7877984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c4b7:{NFSU2_TR(0x41c4b7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41c4b9:{NFSU2_TR(0x41c4b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c4bb:{NFSU2_TR(0x41c4bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c4be:{NFSU2_TR(0x41c4be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c4ce;}}
}
B41c4c0:L41c4c0:{c.instructions+=4;NFSU2_TR(0x41c4c0);
__builtin_memmove((R+4),gp(0x783560),4);
}
B41c4c6:{NFSU2_TR(0x41c4c6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c4c8:{NFSU2_TR(0x41c4c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c4cc:{NFSU2_TR(0x41c4cc);
{goto L41c4d2;}
}
B41c4ce:L41c4ce:{c.instructions+=1;NFSU2_TR(0x41c4ce);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c4d2:L41c4d2:{c.instructions+=7;NFSU2_TR(0x41c4d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c4d6:{NFSU2_TR(0x41c4d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c4dc:{NFSU2_TR(0x41c4dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c4dd:{NFSU2_TR(0x41c4dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c4de:{NFSU2_TR(0x41c4de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c4df:{NFSU2_TR(0x41c4df);
__builtin_memmove((R+4),(R+12),4);
}
B41c4e1:{NFSU2_TR(0x41c4e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c4e6ull));
TAIL_STATIC(0x411dd0u,411);
}
B41c4e6:L41c4e6:{c.instructions+=10;NFSU2_TR(0x41c4e6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c4ea:{NFSU2_TR(0x41c4ea);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c4ee:{NFSU2_TR(0x41c4ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c4f4:{NFSU2_TR(0x41c4f4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41c4f8:{NFSU2_TR(0x41c4f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c4f9:{NFSU2_TR(0x41c4f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c4fa:{NFSU2_TR(0x41c4fa);
__builtin_memmove((R+4),(R+12),4);
}
B41c4fc:{NFSU2_TR(0x41c4fc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c4ff:{NFSU2_TR(0x41c4ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c500:{NFSU2_TR(0x41c500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c505ull));
TAIL_STATIC(0x411dd0u,411);
}
B41c505:L41c505:{c.instructions+=6;NFSU2_TR(0x41c505);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c509:{NFSU2_TR(0x41c509);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c50d:{NFSU2_TR(0x41c50d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41c511:{NFSU2_TR(0x41c511);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c513:{NFSU2_TR(0x41c513);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41c516:{NFSU2_TR(0x41c516);
if(r1(R+514)){{goto L41c51e;}}
}
B41c518:L41c518:{c.instructions+=2;NFSU2_TR(0x41c518);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c51c:{NFSU2_TR(0x41c51c);
{goto L41c522;}
}
B41c51e:L41c51e:{c.instructions+=1;NFSU2_TR(0x41c51e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c522:L41c522:{c.instructions+=4;NFSU2_TR(0x41c522);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41c526:{NFSU2_TR(0x41c526);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c528:{NFSU2_TR(0x41c528);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41c52b:{NFSU2_TR(0x41c52b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41c533;}}
}
B41c52d:L41c52d:{c.instructions+=2;NFSU2_TR(0x41c52d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c52f:{NFSU2_TR(0x41c52f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c533:L41c533:{c.instructions+=3;NFSU2_TR(0x41c533);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x77cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41c539:{NFSU2_TR(0x41c539);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c53b:{NFSU2_TR(0x41c53b);
if(r1(R+518)){{goto L41c545;}}
}
B41c53d:L41c53d:{c.instructions+=2;NFSU2_TR(0x41c53d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c53f:{NFSU2_TR(0x41c53f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c545:L41c545:{c.instructions+=4;NFSU2_TR(0x41c545);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41c549:{NFSU2_TR(0x41c549);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41c54f:{NFSU2_TR(0x41c54f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c551:{NFSU2_TR(0x41c551);
if(r1(R+518)){{goto L41c567;}}
}
B41c553:L41c553:{c.instructions+=4;NFSU2_TR(0x41c553);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B41c555:{NFSU2_TR(0x41c555);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c55d:{NFSU2_TR(0x41c55d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c565:{NFSU2_TR(0x41c565);
{goto L41c581;}
}
B41c567:L41c567:{c.instructions+=5;NFSU2_TR(0x41c567);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c56d:{NFSU2_TR(0x41c56d);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c573:{NFSU2_TR(0x41c573);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c579:{NFSU2_TR(0x41c579);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c57d:{NFSU2_TR(0x41c57d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c581:L41c581:{c.instructions+=5;NFSU2_TR(0x41c581);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41c585:{NFSU2_TR(0x41c585);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41c587:{NFSU2_TR(0x41c587);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c589:{NFSU2_TR(0x41c589);
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
B41c58c:{NFSU2_TR(0x41c58c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41c594;}}
}
B41c58e:L41c58e:{c.instructions+=2;NFSU2_TR(0x41c58e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c592:{NFSU2_TR(0x41c592);
{goto L41c596;}
}
B41c594:L41c594:{c.instructions+=1;NFSU2_TR(0x41c594);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c596:L41c596:{c.instructions+=4;NFSU2_TR(0x41c596);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c59a:{NFSU2_TR(0x41c59a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41c59c:{NFSU2_TR(0x41c59c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c59d:{NFSU2_TR(0x41c59d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c5a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41c5a0:L41c5a0:{c.instructions+=4;NFSU2_TR(0x41c5a0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41c5a4:{NFSU2_TR(0x41c5a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c5a6:{NFSU2_TR(0x41c5a6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41c5a9:{NFSU2_TR(0x41c5a9);
if(r1(R+514)){{goto L41c5b1;}}
}
B41c5ab:L41c5ab:{c.instructions+=2;NFSU2_TR(0x41c5ab);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c5af:{NFSU2_TR(0x41c5af);
{goto L41c5b3;}
}
B41c5b1:L41c5b1:{c.instructions+=1;NFSU2_TR(0x41c5b1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c5b3:L41c5b3:{c.instructions+=13;NFSU2_TR(0x41c5b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c5b7:{NFSU2_TR(0x41c5b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41c5ba:{NFSU2_TR(0x41c5ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41c5bd:{NFSU2_TR(0x41c5bd);
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
B41c5bf:{NFSU2_TR(0x41c5bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41c5c5:{NFSU2_TR(0x41c5c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c5c6:{NFSU2_TR(0x41c5c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c5ca:{NFSU2_TR(0x41c5ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c5cb:{NFSU2_TR(0x41c5cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c5cf:{NFSU2_TR(0x41c5cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c5d0:{NFSU2_TR(0x41c5d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c5d1:{NFSU2_TR(0x41c5d1);
__builtin_memmove((R+4),(R+20),4);
}
B41c5d3:{NFSU2_TR(0x41c5d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c5d6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41c5d6:L41c5d6:{c.instructions+=6;NFSU2_TR(0x41c5d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41c5d7:{NFSU2_TR(0x41c5d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41c5d8:{NFSU2_TR(0x41c5d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41c5d9:{NFSU2_TR(0x41c5d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41c5da:{NFSU2_TR(0x41c5da);
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
B41c5dd:{NFSU2_TR(0x41c5dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41c5e0:L41c5e0:{c.instructions+=21;NFSU2_TR(0x41c5e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c5e1:{NFSU2_TR(0x41c5e1);
__builtin_memmove((R+20),(R+16),4);
}
B41c5e3:{NFSU2_TR(0x41c5e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B41c5e6:{NFSU2_TR(0x41c5e6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c5ec:{NFSU2_TR(0x41c5ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c5ed:{NFSU2_TR(0x41c5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41c5f0:{NFSU2_TR(0x41c5f0);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41c5f3:{NFSU2_TR(0x41c5f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41c5f5:{NFSU2_TR(0x41c5f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c5f6:{NFSU2_TR(0x41c5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41c5f9:{NFSU2_TR(0x41c5f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c5fa:{NFSU2_TR(0x41c5fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41c5fd:{NFSU2_TR(0x41c5fd);
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
B41c5ff:{NFSU2_TR(0x41c5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c602:{NFSU2_TR(0x41c602);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c608:{NFSU2_TR(0x41c608);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c60b:{NFSU2_TR(0x41c60b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41c60f:{NFSU2_TR(0x41c60f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B41c615:{NFSU2_TR(0x41c615);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c618:{NFSU2_TR(0x41c618);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c61f:{NFSU2_TR(0x41c61f);
if(r1(R+518)){{goto L41c935;}}
}
B41c625:L41c625:{c.instructions+=3;NFSU2_TR(0x41c625);
__builtin_memmove((R+0),gp(0x81cb74),4);
}
B41c62a:{NFSU2_TR(0x41c62a);
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
B41c62c:{NFSU2_TR(0x41c62c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c923;}}
}
B41c632:L41c632:{c.instructions+=3;NFSU2_TR(0x41c632);
__builtin_memmove((R+0),gp(0x81cb88),4);
}
B41c637:{NFSU2_TR(0x41c637);
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
B41c639:{NFSU2_TR(0x41c639);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c8fa;}}
}
B41c63f:L41c63f:{c.instructions+=4;NFSU2_TR(0x41c63f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41c641:{NFSU2_TR(0x41c641);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c643:{NFSU2_TR(0x41c643);
__builtin_memmove((R+4),(R+24),4);
}
B41c645:{NFSU2_TR(0x41c645);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c648ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41c648:L41c648:{c.instructions+=4;NFSU2_TR(0x41c648);
__builtin_memmove((R+12),(R+0),4);
}
B41c64a:{NFSU2_TR(0x41c64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x750ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c650:{NFSU2_TR(0x41c650);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41c653:{NFSU2_TR(0x41c653);
if(r1(R+518)){{goto L41c6a7;}}
}
B41c655:L41c655:{c.instructions+=6;NFSU2_TR(0x41c655);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B41c65b:{NFSU2_TR(0x41c65b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B41c65e:{NFSU2_TR(0x41c65e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B41c660:{NFSU2_TR(0x41c660);
__builtin_memmove((R+28),(R+0),4);
}
B41c662:{NFSU2_TR(0x41c662);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c664:{NFSU2_TR(0x41c664);
if(r1(R+518)){{goto L41c6a7;}}
}
B41c666:L41c666:{c.instructions+=2;NFSU2_TR(0x41c666);
__builtin_memmove((R+4),(R+28),4);
}
B41c668:{NFSU2_TR(0x41c668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c66dull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B41c66d:L41c66d:{c.instructions+=6;NFSU2_TR(0x41c66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c670:{NFSU2_TR(0x41c670);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x30cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x30cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41c676:{NFSU2_TR(0x41c676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41c678:{NFSU2_TR(0x41c678);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c679:{NFSU2_TR(0x41c679);
__builtin_memmove((R+4),(R+0),4);
}
B41c67b:{NFSU2_TR(0x41c67b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c680ull));
TAIL_STATIC(0x401ca0u,401);
}
B41c680:L41c680:{c.instructions+=9;NFSU2_TR(0x41c680);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c683:{NFSU2_TR(0x41c683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c686:{NFSU2_TR(0x41c686);
{u32 ea_=u32(r4(R+8)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c68c:{NFSU2_TR(0x41c68c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41c68e:{NFSU2_TR(0x41c68e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c68f:{NFSU2_TR(0x41c68f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c692:{NFSU2_TR(0x41c692);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c693:{NFSU2_TR(0x41c693);
w4(R+4,u32(0x88f298ull));
}
B41c698:{NFSU2_TR(0x41c698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c69dull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B41c69d:L41c69d:{c.instructions+=3;NFSU2_TR(0x41c69d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c69f:{NFSU2_TR(0x41c69f);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c6a2:{NFSU2_TR(0x41c6a2);
{goto L41c8a8;}
}
B41c6a7:L41c6a7:{c.instructions+=2;NFSU2_TR(0x41c6a7);
__builtin_memmove((R+4),(R+24),4);
}
B41c6a9:{NFSU2_TR(0x41c6a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c6aeull));
TAIL_STATIC(0x401fa0u,401);
}
B41c6ae:L41c6ae:{c.instructions+=2;NFSU2_TR(0x41c6ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c6b0:{NFSU2_TR(0x41c6b0);
if(r1(R+518)){{goto L41c6bd;}}
}
B41c6b2:L41c6b2:{c.instructions+=2;NFSU2_TR(0x41c6b2);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c6b8:{NFSU2_TR(0x41c6b8);
{goto L41c8a8;}
}
B41c6bd:L41c6bd:{c.instructions+=2;NFSU2_TR(0x41c6bd);
w4(R+4,u32(0x89e7a0ull));
}
B41c6c2:{NFSU2_TR(0x41c6c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c6c7ull));
TAIL_STATIC(0x4018f0u,401);
}
B41c6c7:L41c6c7:{c.instructions+=2;NFSU2_TR(0x41c6c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c6c9:{NFSU2_TR(0x41c6c9);
if(r1(R+518)){{goto L41c6e0;}}
}
B41c6cb:L41c6cb:{c.instructions+=4;NFSU2_TR(0x41c6cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c6ce:{NFSU2_TR(0x41c6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c6d1:{NFSU2_TR(0x41c6d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c6d3:{NFSU2_TR(0x41c6d3);
if(r1(R+518)){{goto L41c6e0;}}
}
B41c6d5:L41c6d5:{c.instructions+=2;NFSU2_TR(0x41c6d5);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c6db:{NFSU2_TR(0x41c6db);
{goto L41c8a8;}
}
B41c6e0:L41c6e0:{c.instructions+=2;NFSU2_TR(0x41c6e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41c6e2:{NFSU2_TR(0x41c6e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41c737;}}
}
B41c6e4:L41c6e4:{c.instructions+=2;NFSU2_TR(0x41c6e4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41c6e7:{NFSU2_TR(0x41c6e7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41c737;}}
}
B41c6e9:L41c6e9:{c.instructions+=2;NFSU2_TR(0x41c6e9);
__builtin_memmove((R+4),(R+24),4);
}
B41c6eb:{NFSU2_TR(0x41c6eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c6f0ull));
TAIL_STATIC(0x4026e0u,402);
}
B41c6f0:L41c6f0:{c.instructions+=5;NFSU2_TR(0x41c6f0);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B41c6f6:{NFSU2_TR(0x41c6f6);
{u32 ea_=u32(r4(R+4)+u32(2772u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41c6fc:{NFSU2_TR(0x41c6fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c6fe:{NFSU2_TR(0x41c6fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c701:{NFSU2_TR(0x41c701);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c737;}}
}
B41c703:L41c703:{c.instructions+=9;NFSU2_TR(0x41c703);
__builtin_memmove((R+8),(R+12),4);
}
B41c705:{NFSU2_TR(0x41c705);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B41c708:{NFSU2_TR(0x41c708);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c709:{NFSU2_TR(0x41c709);
{u32 ea_=u32(r4(R+4)+r4(R+8)+u32(1412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c710:{NFSU2_TR(0x41c710);
__builtin_memmove((R+4),gp(0x890080),4);
}
B41c716:{NFSU2_TR(0x41c716);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41c719:{NFSU2_TR(0x41c719);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B41c71b:{NFSU2_TR(0x41c71b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c71e:{NFSU2_TR(0x41c71e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c723ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B41c723:L41c723:{c.instructions+=4;NFSU2_TR(0x41c723);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41c726:{NFSU2_TR(0x41c726);
{u32 ea_=u32(r4(R+24)+u32(1796u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c72c:{NFSU2_TR(0x41c72c);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B41c731:{NFSU2_TR(0x41c731);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x700ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c737:L41c737:{c.instructions+=6;NFSU2_TR(0x41c737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41c73a:{NFSU2_TR(0x41c73a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c73d:{NFSU2_TR(0x41c73d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c73f:{NFSU2_TR(0x41c73f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c746:{NFSU2_TR(0x41c746);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c74d:{NFSU2_TR(0x41c74d);
if(r1(R+518)){{goto L41c765;}}
}
B41c74f:L41c74f:{c.instructions+=6;NFSU2_TR(0x41c74f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B41c756:{NFSU2_TR(0x41c756);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B41c759:{NFSU2_TR(0x41c759);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41c75c:{NFSU2_TR(0x41c75c);
{u32 ea_=u32(r4(R+28)+r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c760:{NFSU2_TR(0x41c760);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c763:{NFSU2_TR(0x41c763);
{goto L41c78d;}
}
B41c765:L41c765:{c.instructions+=4;NFSU2_TR(0x41c765);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c76b:{NFSU2_TR(0x41c76b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c76d:{NFSU2_TR(0x41c76d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B41c773:{NFSU2_TR(0x41c773);
if(r1(R+518)){{goto L41c78d;}}
}
B41c775:L41c775:{c.instructions+=9;NFSU2_TR(0x41c775);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c77b:{NFSU2_TR(0x41c77b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c77c:{NFSU2_TR(0x41c77c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B41c77f:{NFSU2_TR(0x41c77f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c780:{NFSU2_TR(0x41c780);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c783:{NFSU2_TR(0x41c783);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B41c786:{NFSU2_TR(0x41c786);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c787:{NFSU2_TR(0x41c787);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c788:{NFSU2_TR(0x41c788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c78dull));
TAIL_STATIC(0x419bc0u,419);
}
B41c78d:L41c78d:{c.instructions+=6;NFSU2_TR(0x41c78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c790:{NFSU2_TR(0x41c790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c793:{NFSU2_TR(0x41c793);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c796:{NFSU2_TR(0x41c796);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c799:{NFSU2_TR(0x41c799);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B41c79d:{NFSU2_TR(0x41c79d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c7ba;}}
}
B41c79f:L41c79f:{c.instructions+=4;NFSU2_TR(0x41c79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c7a2:{NFSU2_TR(0x41c7a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41c7a8:{NFSU2_TR(0x41c7a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c7aa:{NFSU2_TR(0x41c7aa);
if(r1(R+518)){{goto L41c7ba;}}
}
B41c7ac:L41c7ac:{c.instructions+=3;NFSU2_TR(0x41c7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x790ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c7b2:{NFSU2_TR(0x41c7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c7b5:{NFSU2_TR(0x41c7b5);
{goto L41c866;}
}
B41c7ba:L41c7ba:{c.instructions+=2;NFSU2_TR(0x41c7ba);
w4(R+4,u32(0x89e7a0ull));
}
B41c7bf:{NFSU2_TR(0x41c7bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c7c4ull));
TAIL_STATIC(0x401930u,401);
}
B41c7c4:L41c7c4:{c.instructions+=2;NFSU2_TR(0x41c7c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c7c6:{NFSU2_TR(0x41c7c6);
if(r1(R+518)){{goto L41c7e4;}}
}
B41c7c8:L41c7c8:{c.instructions+=9;NFSU2_TR(0x41c7c8);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B41c7ce:{NFSU2_TR(0x41c7ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41c7d0:{NFSU2_TR(0x41c7d0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c7d2:{NFSU2_TR(0x41c7d2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B41c7d5:{NFSU2_TR(0x41c7d5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B41c7d6:{NFSU2_TR(0x41c7d6);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B41c7d8:{NFSU2_TR(0x41c7d8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B41c7db:{NFSU2_TR(0x41c7db);
{u32 ea_=u32(r4(R+8)+r4(R+0)+u32(1344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c7e2:{NFSU2_TR(0x41c7e2);
{goto L41c863;}
}
B41c7e4:L41c7e4:{c.instructions+=2;NFSU2_TR(0x41c7e4);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41c7eb:{NFSU2_TR(0x41c7eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c834;}}
}
B41c7ed:L41c7ed:{c.instructions+=3;NFSU2_TR(0x41c7ed);
w4(R+4,u32(0x85ad40ull));
}
B41c7f2:{NFSU2_TR(0x41c7f2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41c7f4:{NFSU2_TR(0x41c7f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c7f9ull));
TAIL_STATIC(0x500b60u,500);
}
B41c7f9:L41c7f9:{c.instructions+=2;NFSU2_TR(0x41c7f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c7fb:{NFSU2_TR(0x41c7fb);
if(r1(R+518)){{goto L41c816;}}
}
B41c7fd:L41c7fd:{c.instructions+=3;NFSU2_TR(0x41c7fd);
__builtin_memmove((R+0),gp(0x862838),4);
}
B41c802:{NFSU2_TR(0x41c802);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c804:{NFSU2_TR(0x41c804);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L41c80a;}}
}
B41c806:L41c806:{c.instructions+=2;NFSU2_TR(0x41c806);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41c808:{NFSU2_TR(0x41c808);
{goto L41c814;}
}
B41c80a:L41c80a:{c.instructions+=2;NFSU2_TR(0x41c80a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41c80d:{NFSU2_TR(0x41c80d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41c814;}}
}
B41c80f:L41c80f:{c.instructions+=1;NFSU2_TR(0x41c80f);
w4(R+0,u32(0x6ull));
}
B41c814:L41c814:{c.instructions+=1;NFSU2_TR(0x41c814);
__builtin_memmove((R+12),(R+0),4);
}
B41c816:L41c816:{c.instructions+=4;NFSU2_TR(0x41c816);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c819:{NFSU2_TR(0x41c819);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c81c:{NFSU2_TR(0x41c81c);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B41c820:{NFSU2_TR(0x41c820);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c82b;}}
}
B41c822:L41c822:{c.instructions+=2;NFSU2_TR(0x41c822);
{u32 ea_=u32((r4(R+12)*4u)+u32(7878012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c829:{NFSU2_TR(0x41c829);
{goto L41c863;}
}
B41c82b:L41c82b:{c.instructions+=2;NFSU2_TR(0x41c82b);
{u32 ea_=u32((r4(R+12)*4u)+u32(7878040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c832:{NFSU2_TR(0x41c832);
{goto L41c863;}
}
B41c834:L41c834:{c.instructions+=3;NFSU2_TR(0x41c834);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B41c839:{NFSU2_TR(0x41c839);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c83b:{NFSU2_TR(0x41c83b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41c866;}}
}
B41c83d:L41c83d:{c.instructions+=11;NFSU2_TR(0x41c83d);
{u32 ea_=u32(r4(R+24)+u32(1796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c843:{NFSU2_TR(0x41c843);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B41c849:{NFSU2_TR(0x41c849);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41c84b:{NFSU2_TR(0x41c84b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c84d:{NFSU2_TR(0x41c84d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B41c850:{NFSU2_TR(0x41c850);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41c853:{NFSU2_TR(0x41c853);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c856:{NFSU2_TR(0x41c856);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B41c857:{NFSU2_TR(0x41c857);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B41c859:{NFSU2_TR(0x41c859);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B41c85c:{NFSU2_TR(0x41c85c);
{u32 ea_=u32(r4(R+8)+r4(R+0)+u32(1336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c863:L41c863:{c.instructions+=1;NFSU2_TR(0x41c863);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c866:L41c866:{c.instructions+=8;NFSU2_TR(0x41c866);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c869:{NFSU2_TR(0x41c869);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c86c:{NFSU2_TR(0x41c86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c872:{NFSU2_TR(0x41c872);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c873:{NFSU2_TR(0x41c873);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c874:{NFSU2_TR(0x41c874);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c875:{NFSU2_TR(0x41c875);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B41c87b:{NFSU2_TR(0x41c87b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c880ull));
TAIL_STATIC(0x411dd0u,411);
}
B41c880:L41c880:{c.instructions+=6;NFSU2_TR(0x41c880);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c883:{NFSU2_TR(0x41c883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c886:{NFSU2_TR(0x41c886);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c88b:{NFSU2_TR(0x41c88b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c88d:{NFSU2_TR(0x41c88d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c88e:{NFSU2_TR(0x41c88e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c893ull));
TAIL_STATIC(0x4010c0u,401);
}
B41c893:L41c893:{c.instructions+=3;NFSU2_TR(0x41c893);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41c896:{NFSU2_TR(0x41c896);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c898:{NFSU2_TR(0x41c898);
if(r1(R+518)){{goto L41c8a2;}}
}
B41c89a:L41c89a:{c.instructions+=2;NFSU2_TR(0x41c89a);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c8a0:{NFSU2_TR(0x41c8a0);
{goto L41c8a5;}
}
B41c8a2:L41c8a2:{c.instructions+=1;NFSU2_TR(0x41c8a2);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c8a5:L41c8a5:{c.instructions+=1;NFSU2_TR(0x41c8a5);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41c8a8:L41c8a8:{c.instructions+=8;NFSU2_TR(0x41c8a8);
{u32 ea_=u32(r4(R+24)+u32(1904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c8ae:{NFSU2_TR(0x41c8ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c8b1:{NFSU2_TR(0x41c8b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41c8b7:{NFSU2_TR(0x41c8b7);
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
B41c8b9:{NFSU2_TR(0x41c8b9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41c8bb:{NFSU2_TR(0x41c8bb);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c8be:{NFSU2_TR(0x41c8be);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c8c0:{NFSU2_TR(0x41c8c0);
if(r1(R+518)){{goto L41c8d1;}}
}
B41c8c2:L41c8c2:{c.instructions+=4;NFSU2_TR(0x41c8c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c8c5:{NFSU2_TR(0x41c8c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c8c8:{NFSU2_TR(0x41c8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c8cf:{NFSU2_TR(0x41c8cf);
{goto L41c8e3;}
}
B41c8d1:L41c8d1:{c.instructions+=4;NFSU2_TR(0x41c8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41c8d7:{NFSU2_TR(0x41c8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c8dd:{NFSU2_TR(0x41c8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c8e0:{NFSU2_TR(0x41c8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c8e3:L41c8e3:{c.instructions+=6;NFSU2_TR(0x41c8e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1fdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B41c8e9:{NFSU2_TR(0x41c8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c8ef:{NFSU2_TR(0x41c8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41c8f2:{NFSU2_TR(0x41c8f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41c8f5:{NFSU2_TR(0x41c8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c8f8:{NFSU2_TR(0x41c8f8);
{goto L41c93b;}
}
B41c8fa:L41c8fa:{c.instructions+=6;NFSU2_TR(0x41c8fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41c8fd:{NFSU2_TR(0x41c8fd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B41c8ff:{NFSU2_TR(0x41c8ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41c901:{NFSU2_TR(0x41c901);
__builtin_memmove((R+8),(R+518),1);
}
B41c904:{NFSU2_TR(0x41c904);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c905:{NFSU2_TR(0x41c905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c90aull));
TAIL_STATIC(0x405460u,405);
}
B41c90a:L41c90a:{c.instructions+=7;NFSU2_TR(0x41c90a);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B41c90f:{NFSU2_TR(0x41c90f);
u8 U[45];
w4(U+37,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B41c912:{NFSU2_TR(0x41c912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c915:{NFSU2_TR(0x41c915);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41c918:{NFSU2_TR(0x41c918);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41c91e:{NFSU2_TR(0x41c91e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c921:{NFSU2_TR(0x41c921);
{goto L41c938;}
}
B41c923:L41c923:{c.instructions+=4;NFSU2_TR(0x41c923);
__builtin_memmove((R+4),gp(0x783578),4);
}
B41c929:{NFSU2_TR(0x41c929);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x41700000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c930:{NFSU2_TR(0x41c930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c933:{NFSU2_TR(0x41c933);
{goto L41c938;}
}
B41c935:L41c935:{c.instructions+=1;NFSU2_TR(0x41c935);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41c938:L41c938:{c.instructions+=1;NFSU2_TR(0x41c938);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c93b:L41c93b:{c.instructions+=4;NFSU2_TR(0x41c93b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c93e:{NFSU2_TR(0x41c93e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41c940:{NFSU2_TR(0x41c940);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c941:{NFSU2_TR(0x41c941);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c944ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41c944:L41c944:{c.instructions+=4;NFSU2_TR(0x41c944);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41c947:{NFSU2_TR(0x41c947);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c949:{NFSU2_TR(0x41c949);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41c94c:{NFSU2_TR(0x41c94c);
if(r1(R+514)){{goto L41c953;}}
}
B41c94e:L41c94e:{c.instructions+=2;NFSU2_TR(0x41c94e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41c951:{NFSU2_TR(0x41c951);
{goto L41c955;}
}
B41c953:L41c953:{c.instructions+=1;NFSU2_TR(0x41c953);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41c955:L41c955:{c.instructions+=5;NFSU2_TR(0x41c955);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41c958:{NFSU2_TR(0x41c958);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41c95b:{NFSU2_TR(0x41c95b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41c95d:{NFSU2_TR(0x41c95d);
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
B41c960:{NFSU2_TR(0x41c960);
if(r1(R+514)){{goto L41c968;}}
}
B41c962:L41c962:{c.instructions+=2;NFSU2_TR(0x41c962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c965:{NFSU2_TR(0x41c965);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c968:L41c968:{c.instructions+=11;NFSU2_TR(0x41c968);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c96b:{NFSU2_TR(0x41c96b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c96e:{NFSU2_TR(0x41c96e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41c970:{NFSU2_TR(0x41c970);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c971:{NFSU2_TR(0x41c971);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c974:{NFSU2_TR(0x41c974);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c975:{NFSU2_TR(0x41c975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c978:{NFSU2_TR(0x41c978);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c979:{NFSU2_TR(0x41c979);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c97c:{NFSU2_TR(0x41c97c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c97d:{NFSU2_TR(0x41c97d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c980ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41c980:L41c980:{c.instructions+=6;NFSU2_TR(0x41c980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41c981:{NFSU2_TR(0x41c981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41c982:{NFSU2_TR(0x41c982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41c983:{NFSU2_TR(0x41c983);
__builtin_memmove((R+16),(R+20),4);
}
B41c985:{NFSU2_TR(0x41c985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41c986:{NFSU2_TR(0x41c986);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41c990:L41c990:{c.instructions+=18;NFSU2_TR(0x41c990);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41c993:{NFSU2_TR(0x41c993);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c994:{NFSU2_TR(0x41c994);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c995:{NFSU2_TR(0x41c995);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c996:{NFSU2_TR(0x41c996);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41c997:{NFSU2_TR(0x41c997);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41c99b:{NFSU2_TR(0x41c99b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B41c99d:{NFSU2_TR(0x41c99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41c9a0:{NFSU2_TR(0x41c9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41c9a6:{NFSU2_TR(0x41c9a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c9a9:{NFSU2_TR(0x41c9a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41c9ab:{NFSU2_TR(0x41c9ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c9af:{NFSU2_TR(0x41c9af);
__builtin_memmove((R+4),(R+24),4);
}
B41c9b1:{NFSU2_TR(0x41c9b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41c9b9:{NFSU2_TR(0x41c9b9);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41c9be:{NFSU2_TR(0x41c9be);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c9c2:{NFSU2_TR(0x41c9c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c9c6:{NFSU2_TR(0x41c9c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c9c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41c9c9:L41c9c9:{c.instructions+=5;NFSU2_TR(0x41c9c9);
__builtin_memmove((R+4),(R+0),4);
}
B41c9cb:{NFSU2_TR(0x41c9cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x750ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41c9d1:{NFSU2_TR(0x41c9d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41c9d4:{NFSU2_TR(0x41c9d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41c9d8:{NFSU2_TR(0x41c9d8);
if(r1(R+518)){{goto L41ca3d;}}
}
B41c9da:L41c9da:{c.instructions+=6;NFSU2_TR(0x41c9da);
__builtin_memmove((R+8),gp(0x883db0),4);
}
B41c9e0:{NFSU2_TR(0x41c9e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B41c9e3:{NFSU2_TR(0x41c9e3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B41c9e5:{NFSU2_TR(0x41c9e5);
__builtin_memmove((R+20),(R+0),4);
}
B41c9e7:{NFSU2_TR(0x41c9e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41c9e9:{NFSU2_TR(0x41c9e9);
if(r1(R+518)){{goto L41ca39;}}
}
B41c9eb:L41c9eb:{c.instructions+=2;NFSU2_TR(0x41c9eb);
__builtin_memmove((R+4),(R+20),4);
}
B41c9ed:{NFSU2_TR(0x41c9ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41c9f2ull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B41c9f2:L41c9f2:{c.instructions+=14;NFSU2_TR(0x41c9f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41c9f8:{NFSU2_TR(0x41c9f8);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B41c9fd:{NFSU2_TR(0x41c9fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41ca00:{NFSU2_TR(0x41ca00);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B41ca03:{NFSU2_TR(0x41ca03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ca07:{NFSU2_TR(0x41ca07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ca08:{NFSU2_TR(0x41ca08);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41ca0c:{NFSU2_TR(0x41ca0c);
w4(R+4,u32(0x88f298ull));
}
B41ca11:{NFSU2_TR(0x41ca11);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41ca17:{NFSU2_TR(0x41ca17);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ca1b:{NFSU2_TR(0x41ca1b);
{u32 ea_=u32(r4(R+12)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ca21:{NFSU2_TR(0x41ca21);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ca24:{NFSU2_TR(0x41ca24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ca25:{NFSU2_TR(0x41ca25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ca2aull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B41ca2a:L41ca2a:{c.instructions+=4;NFSU2_TR(0x41ca2a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41ca2c:{NFSU2_TR(0x41ca2c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ca30:{NFSU2_TR(0x41ca30);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41ca34:{NFSU2_TR(0x41ca34);
{goto L41cb76;}
}
B41ca39:L41ca39:{c.instructions+=1;NFSU2_TR(0x41ca39);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41ca3d:L41ca3d:{c.instructions+=3;NFSU2_TR(0x41ca3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x754ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ca43:{NFSU2_TR(0x41ca43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41ca45:{NFSU2_TR(0x41ca45);
if(r1(R+518)){{goto L41ca59;}}
}
B41ca47:L41ca47:{c.instructions+=2;NFSU2_TR(0x41ca47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41ca4c:{NFSU2_TR(0x41ca4c);
if(r1(R+518)){{goto L41ca59;}}
}
B41ca4e:L41ca4e:{c.instructions+=2;NFSU2_TR(0x41ca4e);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ca54:{NFSU2_TR(0x41ca54);
{goto L41cb76;}
}
B41ca59:L41ca59:{c.instructions+=2;NFSU2_TR(0x41ca59);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41ca5b:{NFSU2_TR(0x41ca5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41cac5;}}
}
B41ca5d:L41ca5d:{c.instructions+=2;NFSU2_TR(0x41ca5d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41ca60:{NFSU2_TR(0x41ca60);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41cac5;}}
}
B41ca62:L41ca62:{c.instructions+=11;NFSU2_TR(0x41ca62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x700ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ca68:{NFSU2_TR(0x41ca68);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B41ca6e:{NFSU2_TR(0x41ca6e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B41ca70:{NFSU2_TR(0x41ca70);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ca74:{NFSU2_TR(0x41ca74);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41ca78:{NFSU2_TR(0x41ca78);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B41ca7e:{NFSU2_TR(0x41ca7e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41ca84:{NFSU2_TR(0x41ca84);
{u32 ea_=u32(r4(R+8)+u32(2772u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41ca8a:{NFSU2_TR(0x41ca8a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41ca8c:{NFSU2_TR(0x41ca8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ca8f:{NFSU2_TR(0x41ca8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41cac5;}}
}
B41ca91:L41ca91:{c.instructions+=8;NFSU2_TR(0x41ca91);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41ca94:{NFSU2_TR(0x41ca94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ca95:{NFSU2_TR(0x41ca95);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(1412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ca9c:{NFSU2_TR(0x41ca9c);
__builtin_memmove((R+4),gp(0x890080),4);
}
B41caa2:{NFSU2_TR(0x41caa2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41caa6:{NFSU2_TR(0x41caa6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B41caa8:{NFSU2_TR(0x41caa8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41caab:{NFSU2_TR(0x41caab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cab0ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B41cab0:L41cab0:{c.instructions+=4;NFSU2_TR(0x41cab0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41cab4:{NFSU2_TR(0x41cab4);
{u32 ea_=u32(r4(R+24)+u32(1796u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41caba:{NFSU2_TR(0x41caba);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B41cabf:{NFSU2_TR(0x41cabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x700ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cac5:L41cac5:{c.instructions+=4;NFSU2_TR(0x41cac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cac8:{NFSU2_TR(0x41cac8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41caca:{NFSU2_TR(0x41caca);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41cad2:{NFSU2_TR(0x41cad2);
if(r1(R+518)){{goto L41caeb;}}
}
B41cad4:L41cad4:{c.instructions+=6;NFSU2_TR(0x41cad4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B41cadb:{NFSU2_TR(0x41cadb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B41cade:{NFSU2_TR(0x41cade);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41cae1:{NFSU2_TR(0x41cae1);
{u32 ea_=u32(r4(R+28)+r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41cae5:{NFSU2_TR(0x41cae5);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41cae9:{NFSU2_TR(0x41cae9);
{goto L41cb12;}
}
B41caeb:L41caeb:{c.instructions+=4;NFSU2_TR(0x41caeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41caf1:{NFSU2_TR(0x41caf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41caf3:{NFSU2_TR(0x41caf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B41caf9:{NFSU2_TR(0x41caf9);
if(r1(R+518)){{goto L41cb12;}}
}
B41cafb:L41cafb:{c.instructions+=8;NFSU2_TR(0x41cafb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41cb01:{NFSU2_TR(0x41cb01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cb02:{NFSU2_TR(0x41cb02);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41cb06:{NFSU2_TR(0x41cb06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cb07:{NFSU2_TR(0x41cb07);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41cb0b:{NFSU2_TR(0x41cb0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cb0c:{NFSU2_TR(0x41cb0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cb0d:{NFSU2_TR(0x41cb0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cb12ull));
TAIL_STATIC(0x419bc0u,419);
}
B41cb12:L41cb12:{c.instructions+=9;NFSU2_TR(0x41cb12);
{u32 ea_=u32(r4(R+24)+u32(1796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41cb18:{NFSU2_TR(0x41cb18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cb1e:{NFSU2_TR(0x41cb1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cb1f:{NFSU2_TR(0x41cb1f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41cb23:{NFSU2_TR(0x41cb23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cb24:{NFSU2_TR(0x41cb24);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B41cb2a:{NFSU2_TR(0x41cb2a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41cb2d:{NFSU2_TR(0x41cb2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cb2e:{NFSU2_TR(0x41cb2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cb33ull));
TAIL_STATIC(0x411dd0u,411);
}
B41cb33:L41cb33:{c.instructions+=6;NFSU2_TR(0x41cb33);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B41cb35:{NFSU2_TR(0x41cb35);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41cb37:{NFSU2_TR(0x41cb37);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41cb3d:{NFSU2_TR(0x41cb3d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41cb3f:{NFSU2_TR(0x41cb3f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41cb42:{NFSU2_TR(0x41cb42);
if(r1(R+514)){{goto L41cb4c;}}
}
B41cb44:L41cb44:{c.instructions+=2;NFSU2_TR(0x41cb44);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41cb46:{NFSU2_TR(0x41cb46);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41cb4c:L41cb4c:{c.instructions+=3;NFSU2_TR(0x41cb4c);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B41cb51:{NFSU2_TR(0x41cb51);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41cb53:{NFSU2_TR(0x41cb53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41cb5a;}}
}
B41cb55:L41cb55:{c.instructions+=1;NFSU2_TR(0x41cb55);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B41cb5a:L41cb5a:{c.instructions+=3;NFSU2_TR(0x41cb5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cb5e:{NFSU2_TR(0x41cb5e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41cb60:{NFSU2_TR(0x41cb60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41cb64;}}
}
B41cb62:L41cb62:{c.instructions+=1;NFSU2_TR(0x41cb62);
{goto L41cb66;}
}
B41cb64:L41cb64:{c.instructions+=1;NFSU2_TR(0x41cb64);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41cb66:L41cb66:{c.instructions+=3;NFSU2_TR(0x41cb66);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B41cb6c:{NFSU2_TR(0x41cb6c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B41cb6f:{NFSU2_TR(0x41cb6f);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(1336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41cb76:L41cb76:{c.instructions+=7;NFSU2_TR(0x41cb76);
{u32 ea_=u32(r4(R+24)+u32(1904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41cb7c:{NFSU2_TR(0x41cb7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cb80:{NFSU2_TR(0x41cb80);
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
B41cb82:{NFSU2_TR(0x41cb82);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41cb84:{NFSU2_TR(0x41cb84);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41cb88:{NFSU2_TR(0x41cb88);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41cb8a:{NFSU2_TR(0x41cb8a);
if(r1(R+518)){{goto L41cbd2;}}
}
B41cb8c:L41cb8c:{c.instructions+=3;NFSU2_TR(0x41cb8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41cb92:{NFSU2_TR(0x41cb92);
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
B41cb94:{NFSU2_TR(0x41cb94);
if(r1(R+518)){{goto L41cba8;}}
}
B41cb96:L41cb96:{c.instructions+=4;NFSU2_TR(0x41cb96);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41cb9a:{NFSU2_TR(0x41cb9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cb9e:{NFSU2_TR(0x41cb9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41cba6:{NFSU2_TR(0x41cba6);
{goto L41cbbc;}
}
B41cba8:L41cba8:{c.instructions+=4;NFSU2_TR(0x41cba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cbae:{NFSU2_TR(0x41cbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41cbb4:{NFSU2_TR(0x41cbb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cbb8:{NFSU2_TR(0x41cbb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cbbc:L41cbbc:{c.instructions+=5;NFSU2_TR(0x41cbbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1fdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B41cbc2:{NFSU2_TR(0x41cbc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cbc8:{NFSU2_TR(0x41cbc8);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41cbcc:{NFSU2_TR(0x41cbcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cbd0:{NFSU2_TR(0x41cbd0);
{goto L41cbe2;}
}
B41cbd2:L41cbd2:{c.instructions+=2;NFSU2_TR(0x41cbd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41cbda:{NFSU2_TR(0x41cbda);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41cbe2:L41cbe2:{c.instructions+=4;NFSU2_TR(0x41cbe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41cbe6:{NFSU2_TR(0x41cbe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41cbe8:{NFSU2_TR(0x41cbe8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cbe9:{NFSU2_TR(0x41cbe9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cbecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41cbec:L41cbec:{c.instructions+=4;NFSU2_TR(0x41cbec);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41cbf0:{NFSU2_TR(0x41cbf0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41cbf2:{NFSU2_TR(0x41cbf2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41cbf5:{NFSU2_TR(0x41cbf5);
if(r1(R+514)){{goto L41cbfd;}}
}
B41cbf7:L41cbf7:{c.instructions+=2;NFSU2_TR(0x41cbf7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41cbfb:{NFSU2_TR(0x41cbfb);
{goto L41cbff;}
}
B41cbfd:L41cbfd:{c.instructions+=1;NFSU2_TR(0x41cbfd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41cbff:L41cbff:{c.instructions+=5;NFSU2_TR(0x41cbff);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41cc03:{NFSU2_TR(0x41cc03);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41cc07:{NFSU2_TR(0x41cc07);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41cc09:{NFSU2_TR(0x41cc09);
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
B41cc0c:{NFSU2_TR(0x41cc0c);
if(r1(R+514)){{goto L41cc16;}}
}
B41cc0e:L41cc0e:{c.instructions+=2;NFSU2_TR(0x41cc0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cc12:{NFSU2_TR(0x41cc12);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cc16:L41cc16:{c.instructions+=11;NFSU2_TR(0x41cc16);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cc1a:{NFSU2_TR(0x41cc1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41cc1d:{NFSU2_TR(0x41cc1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41cc1f:{NFSU2_TR(0x41cc1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc20:{NFSU2_TR(0x41cc20);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cc24:{NFSU2_TR(0x41cc24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc25:{NFSU2_TR(0x41cc25);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cc29:{NFSU2_TR(0x41cc29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc2a:{NFSU2_TR(0x41cc2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cc2e:{NFSU2_TR(0x41cc2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc2f:{NFSU2_TR(0x41cc2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cc32ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41cc32:L41cc32:{c.instructions+=6;NFSU2_TR(0x41cc32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41cc33:{NFSU2_TR(0x41cc33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41cc34:{NFSU2_TR(0x41cc34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41cc35:{NFSU2_TR(0x41cc35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41cc36:{NFSU2_TR(0x41cc36);
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
B41cc39:{NFSU2_TR(0x41cc39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41cc40:L41cc40:{c.instructions+=11;NFSU2_TR(0x41cc40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc41:{NFSU2_TR(0x41cc41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc42:{NFSU2_TR(0x41cc42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc43:{NFSU2_TR(0x41cc43);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41cc47:{NFSU2_TR(0x41cc47);
__builtin_memmove((R+24),(R+4),4);
}
B41cc49:{NFSU2_TR(0x41cc49);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41cc4d:{NFSU2_TR(0x41cc4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc4e:{NFSU2_TR(0x41cc4e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41cc50:{NFSU2_TR(0x41cc50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc51:{NFSU2_TR(0x41cc51);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cc55:{NFSU2_TR(0x41cc55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cc5aull));
TAIL_STATIC(0x414130u,414);
}
B41cc5a:L41cc5a:{c.instructions+=3;NFSU2_TR(0x41cc5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B41cc5d:{NFSU2_TR(0x41cc5d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41cc60:{NFSU2_TR(0x41cc60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41cc82;}}
}
B41cc62:L41cc62:{c.instructions+=3;NFSU2_TR(0x41cc62);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cc66:{NFSU2_TR(0x41cc66);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B41cc6c:{NFSU2_TR(0x41cc6c);
if(r1(R+518)){{goto L41cc7a;}}
}
B41cc6e:L41cc6e:{c.instructions+=3;NFSU2_TR(0x41cc6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc6f:{NFSU2_TR(0x41cc6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41cc75:{NFSU2_TR(0x41cc75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cc7aull));
TAIL_STATIC(0x41bc60u,41b);
}
B41cc7a:L41cc7a:{c.instructions+=5;NFSU2_TR(0x41cc7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41cc7b:{NFSU2_TR(0x41cc7b);
__builtin_memmove((R+0),(R+12),1);
}
B41cc7d:{NFSU2_TR(0x41cc7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41cc7e:{NFSU2_TR(0x41cc7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41cc7f:{NFSU2_TR(0x41cc7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41cc82:L41cc82:{c.instructions+=5;NFSU2_TR(0x41cc82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41cc83:{NFSU2_TR(0x41cc83);
w1(R+0,u8(0x1ull));
}
B41cc85:{NFSU2_TR(0x41cc85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41cc86:{NFSU2_TR(0x41cc86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41cc87:{NFSU2_TR(0x41cc87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41cc90:L41cc90:{c.instructions+=8;NFSU2_TR(0x41cc90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cc94:{NFSU2_TR(0x41cc94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc95:{NFSU2_TR(0x41cc95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc96:{NFSU2_TR(0x41cc96);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc98:{NFSU2_TR(0x41cc98);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc9d:{NFSU2_TR(0x41cc9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cc9e:{NFSU2_TR(0x41cc9e);
__builtin_memmove((R+24),(R+4),4);
}
B41cca0:{NFSU2_TR(0x41cca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cca5ull));
TAIL_STATIC(0x402ae0u,402);
}
B41cca5:L41cca5:{c.instructions+=5;NFSU2_TR(0x41cca5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41cca8:{NFSU2_TR(0x41cca8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41ccaa:{NFSU2_TR(0x41ccaa);
__builtin_memmove((R+12),(R+518),1);
}
B41ccad:{NFSU2_TR(0x41ccad);
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
B41ccaf:{NFSU2_TR(0x41ccaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ccfa;}}
}
B41ccb1:L41ccb1:{c.instructions+=7;NFSU2_TR(0x41ccb1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B41ccb5:{NFSU2_TR(0x41ccb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ccbb:{NFSU2_TR(0x41ccbb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x210ull))));
}
B41ccc1:{NFSU2_TR(0x41ccc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41ccc3:{NFSU2_TR(0x41ccc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ccc4:{NFSU2_TR(0x41ccc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B41cccb:{NFSU2_TR(0x41cccb);
if(r1(R+518)){{goto L41ccde;}}
}
B41cccd:L41cccd:{c.instructions+=2;NFSU2_TR(0x41cccd);
__builtin_memmove((R+4),(R+24),4);
}
B41cccf:{NFSU2_TR(0x41cccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ccd4ull));
TAIL_STATIC(0x614810u,614);
}
B41ccd4:L41ccd4:{c.instructions+=4;NFSU2_TR(0x41ccd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41ccd6:{NFSU2_TR(0x41ccd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ccd9:{NFSU2_TR(0x41ccd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B41ccdb:{NFSU2_TR(0x41ccdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ccde:L41ccde:{c.instructions+=4;NFSU2_TR(0x41ccde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cce1:{NFSU2_TR(0x41cce1);
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
B41cce3:{NFSU2_TR(0x41cce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41cce4:{NFSU2_TR(0x41cce4);
if(r1(R+518)){{goto L41ccfa;}}
}
B41cce6:L41cce6:{c.instructions+=2;NFSU2_TR(0x41cce6);
__builtin_memmove((R+4),(R+24),4);
}
B41cce8:{NFSU2_TR(0x41cce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ccedull));
TAIL_STATIC(0x614810u,614);
}
B41cced:L41cced:{c.instructions+=5;NFSU2_TR(0x41cced);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ccf0:{NFSU2_TR(0x41ccf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B41ccf2:{NFSU2_TR(0x41ccf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ccf5:{NFSU2_TR(0x41ccf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ccf8:{NFSU2_TR(0x41ccf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B41ccfa:L41ccfa:{c.instructions+=4;NFSU2_TR(0x41ccfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ccfb:{NFSU2_TR(0x41ccfb);
__builtin_memmove((R+0),(R+12),1);
}
B41ccfd:{NFSU2_TR(0x41ccfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ccfe:{NFSU2_TR(0x41ccfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41cd10:L41cd10:{c.instructions+=13;NFSU2_TR(0x41cd10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cd11:{NFSU2_TR(0x41cd11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cd12:{NFSU2_TR(0x41cd12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cd13:{NFSU2_TR(0x41cd13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cd14:{NFSU2_TR(0x41cd14);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41cd18:{NFSU2_TR(0x41cd18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cd19:{NFSU2_TR(0x41cd19);
__builtin_memmove((R+28),(R+4),4);
}
B41cd1b:{NFSU2_TR(0x41cd1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cd21:{NFSU2_TR(0x41cd21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cd22:{NFSU2_TR(0x41cd22);
__builtin_memmove((R+4),(R+24),4);
}
B41cd24:{NFSU2_TR(0x41cd24);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B41cd26:{NFSU2_TR(0x41cd26);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41cd2e:{NFSU2_TR(0x41cd2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cd33ull));
TAIL_STATIC(0x60c120u,60c);
}
B41cd33:L41cd33:{c.instructions+=4;NFSU2_TR(0x41cd33);
__builtin_memmove((R+20),(R+0),4);
}
B41cd35:{NFSU2_TR(0x41cd35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cd3b:{NFSU2_TR(0x41cd3b);
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
B41cd3d:{NFSU2_TR(0x41cd3d);
if(r1(R+518)){{goto L41ce1c;}}
}
B41cd43:L41cd43:{c.instructions+=2;NFSU2_TR(0x41cd43);
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
B41cd45:{NFSU2_TR(0x41cd45);
if(r1(R+518)){{goto L41ce1c;}}
}
B41cd4b:L41cd4b:{c.instructions+=3;NFSU2_TR(0x41cd4b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cd4c:{NFSU2_TR(0x41cd4c);
__builtin_memmove((R+4),(R+24),4);
}
B41cd4e:{NFSU2_TR(0x41cd4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cd53ull));
TAIL_STATIC(0x60bff0u,60b);
}
B41cd53:L41cd53:{c.instructions+=4;NFSU2_TR(0x41cd53);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41cd59:{NFSU2_TR(0x41cd59);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41cd5b:{NFSU2_TR(0x41cd5b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41cd5e:{NFSU2_TR(0x41cd5e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41cd74;}}
}
B41cd60:L41cd60:{c.instructions+=5;NFSU2_TR(0x41cd60);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41cd63:{NFSU2_TR(0x41cd63);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41cd69:{NFSU2_TR(0x41cd69);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41cd6b:{NFSU2_TR(0x41cd6b);
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
B41cd6e:{NFSU2_TR(0x41cd6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ce12;}}
}
B41cd74:L41cd74:{c.instructions+=7;NFSU2_TR(0x41cd74);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B41cd7b:{NFSU2_TR(0x41cd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41cd81:{NFSU2_TR(0x41cd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B41cd84:{NFSU2_TR(0x41cd84);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B41cd87:{NFSU2_TR(0x41cd87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cd88:{NFSU2_TR(0x41cd88);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41cd8c:{NFSU2_TR(0x41cd8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cd91ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B41cd91:L41cd91:{c.instructions+=12;NFSU2_TR(0x41cd91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cd97:{NFSU2_TR(0x41cd97);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41cd9b:{NFSU2_TR(0x41cd9b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41cd9f:{NFSU2_TR(0x41cd9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cda0:{NFSU2_TR(0x41cda0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41cda4:{NFSU2_TR(0x41cda4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41cda8:{NFSU2_TR(0x41cda8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cda9:{NFSU2_TR(0x41cda9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cdaa:{NFSU2_TR(0x41cdaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cdab:{NFSU2_TR(0x41cdab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cdac:{NFSU2_TR(0x41cdac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cdad:{NFSU2_TR(0x41cdad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cdb2ull));
TAIL_STATIC(0x402ed0u,402);
}
B41cdb2:L41cdb2:{c.instructions+=4;NFSU2_TR(0x41cdb2);
__builtin_memmove((R+20),(R+0),4);
}
B41cdb4:{NFSU2_TR(0x41cdb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B41cdb7:{NFSU2_TR(0x41cdb7);
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
B41cdb9:{NFSU2_TR(0x41cdb9);
if(r1(R+518)){{goto L41ce1c;}}
}
B41cdbb:L41cdbb:{c.instructions+=5;NFSU2_TR(0x41cdbb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41cdbf:{NFSU2_TR(0x41cdbf);
{u32 ea_=u32(u32(7878464u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41cdc5:{NFSU2_TR(0x41cdc5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41cdc7:{NFSU2_TR(0x41cdc7);
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
B41cdca:{NFSU2_TR(0x41cdca);
if(r1(R+514)){{goto L41ce1c;}}
}
B41cdcc:L41cdcc:{c.instructions+=3;NFSU2_TR(0x41cdcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cdcd:{NFSU2_TR(0x41cdcd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cdce:{NFSU2_TR(0x41cdce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cdd3ull));
TAIL_STATIC(0x4140e0u,414);
}
B41cdd3:L41cdd3:{c.instructions+=6;NFSU2_TR(0x41cdd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B41cdd6:{NFSU2_TR(0x41cdd6);
__builtin_memmove((R+12),(R+0),1);
}
B41cdd8:{NFSU2_TR(0x41cdd8);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B41cdda:{NFSU2_TR(0x41cdda);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+12))<(r1(R+12))));
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B41cddc:{NFSU2_TR(0x41cddc);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+12),u8(0x1ull)));
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41cdde:{NFSU2_TR(0x41cdde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ce12;}}
}
B41cde0:L41cde0:{c.instructions+=3;NFSU2_TR(0x41cde0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41cde6:{NFSU2_TR(0x41cde6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cde7:{NFSU2_TR(0x41cde7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cdecull));
TAIL_STATIC(0x60be90u,60b);
}
B41cdec:L41cdec:{c.instructions+=2;NFSU2_TR(0x41cdec);
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
B41cdee:{NFSU2_TR(0x41cdee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ce12;}}
}
B41cdf0:L41cdf0:{c.instructions+=3;NFSU2_TR(0x41cdf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cdf1:{NFSU2_TR(0x41cdf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41cdf7:{NFSU2_TR(0x41cdf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cdfcull));
TAIL_STATIC(0x41bc60u,41b);
}
B41cdfc:L41cdfc:{c.instructions+=4;NFSU2_TR(0x41cdfc);
__builtin_memmove((R+8),gp(0x783748),4);
}
B41ce02:{NFSU2_TR(0x41ce02);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ce06:{NFSU2_TR(0x41ce06);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ce0c:{NFSU2_TR(0x41ce0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ce12:L41ce12:{c.instructions+=7;NFSU2_TR(0x41ce12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41ce13:{NFSU2_TR(0x41ce13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ce14:{NFSU2_TR(0x41ce14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41ce15:{NFSU2_TR(0x41ce15);
__builtin_memmove((R+0),(R+12),1);
}
B41ce17:{NFSU2_TR(0x41ce17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ce18:{NFSU2_TR(0x41ce18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41ce19:{NFSU2_TR(0x41ce19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ce1c:L41ce1c:{c.instructions+=7;NFSU2_TR(0x41ce1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41ce1d:{NFSU2_TR(0x41ce1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ce1e:{NFSU2_TR(0x41ce1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41ce1f:{NFSU2_TR(0x41ce1f);
w1(R+0,u8(0x1ull));
}
B41ce21:{NFSU2_TR(0x41ce21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ce22:{NFSU2_TR(0x41ce22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41ce23:{NFSU2_TR(0x41ce23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ce30:L41ce30:{c.instructions+=9;NFSU2_TR(0x41ce30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ce31:{NFSU2_TR(0x41ce31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ce32:{NFSU2_TR(0x41ce32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ce33:{NFSU2_TR(0x41ce33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41ce37:{NFSU2_TR(0x41ce37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ce3d:{NFSU2_TR(0x41ce3d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41ce3f:{NFSU2_TR(0x41ce3f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41ce42:{NFSU2_TR(0x41ce42);
__builtin_memmove((R+24),(R+4),4);
}
B41ce44:{NFSU2_TR(0x41ce44);
if(r1(R+518)){{goto L41ce83;}}
}
B41ce46:L41ce46:{c.instructions+=3;NFSU2_TR(0x41ce46);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B41ce4d:{NFSU2_TR(0x41ce4d);
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
B41ce4f:{NFSU2_TR(0x41ce4f);
if(r1(R+518)){{goto L41ce83;}}
}
B41ce51:L41ce51:{c.instructions+=2;NFSU2_TR(0x41ce51);
__builtin_memmove((R+4),(R+0),4);
}
B41ce53:{NFSU2_TR(0x41ce53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ce58ull));
TAIL_STATIC(0x401f20u,401);
}
B41ce58:L41ce58:{c.instructions+=2;NFSU2_TR(0x41ce58);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B41ce5e:{NFSU2_TR(0x41ce5e);
if(r1(R+518)){{goto L41ce7b;}}
}
B41ce60:L41ce60:{c.instructions+=4;NFSU2_TR(0x41ce60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ce61:{NFSU2_TR(0x41ce61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ce67:{NFSU2_TR(0x41ce67);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41ce6d:{NFSU2_TR(0x41ce6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ce72ull));
TAIL_STATIC(0x414930u,414);
}
B41ce72:L41ce72:{c.instructions+=2;NFSU2_TR(0x41ce72);
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
B41ce75:{NFSU2_TR(0x41ce75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ce7b:L41ce7b:{c.instructions+=5;NFSU2_TR(0x41ce7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41ce7c:{NFSU2_TR(0x41ce7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ce7d:{NFSU2_TR(0x41ce7d);
__builtin_memmove((R+0),(R+12),1);
}
B41ce7f:{NFSU2_TR(0x41ce7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ce80:{NFSU2_TR(0x41ce80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ce83:L41ce83:{c.instructions+=5;NFSU2_TR(0x41ce83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41ce84:{NFSU2_TR(0x41ce84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ce85:{NFSU2_TR(0x41ce85);
w1(R+0,u8(0x1ull));
}
B41ce87:{NFSU2_TR(0x41ce87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ce88:{NFSU2_TR(0x41ce88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ce90:L41ce90:{c.instructions+=11;NFSU2_TR(0x41ce90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ce91:{NFSU2_TR(0x41ce91);
__builtin_memmove((R+20),(R+16),4);
}
B41ce93:{NFSU2_TR(0x41ce93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B41ce96:{NFSU2_TR(0x41ce96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B41ce99:{NFSU2_TR(0x41ce99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ce9a:{NFSU2_TR(0x41ce9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ce9b:{NFSU2_TR(0x41ce9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41ce9e:{NFSU2_TR(0x41ce9e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41cea1:{NFSU2_TR(0x41cea1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cea2:{NFSU2_TR(0x41cea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41cea5:{NFSU2_TR(0x41cea5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41cebc;}}
}
B41cea7:L41cea7:{c.instructions+=8;NFSU2_TR(0x41cea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ceaa:{NFSU2_TR(0x41ceaa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ceac:{NFSU2_TR(0x41ceac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ceae:{NFSU2_TR(0x41ceae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ceb0:{NFSU2_TR(0x41ceb0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ceb2:{NFSU2_TR(0x41ceb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ceb3:{NFSU2_TR(0x41ceb3);
__builtin_memmove((R+4),(R+28),4);
}
B41ceb5:{NFSU2_TR(0x41ceb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cebaull));
TAIL_STATIC(0x4198c0u,419);
}
B41ceba:L41ceba:{c.instructions+=1;NFSU2_TR(0x41ceba);
__builtin_memmove((R+24),(R+0),4);
}
B41cebc:L41cebc:{c.instructions+=3;NFSU2_TR(0x41cebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cebf:{NFSU2_TR(0x41cebf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41cec2:{NFSU2_TR(0x41cec2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ceda;}}
}
B41cec4:L41cec4:{c.instructions+=8;NFSU2_TR(0x41cec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41cec7:{NFSU2_TR(0x41cec7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cec9:{NFSU2_TR(0x41cec9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cecb:{NFSU2_TR(0x41cecb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cecd:{NFSU2_TR(0x41cecd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cecf:{NFSU2_TR(0x41cecf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ced0:{NFSU2_TR(0x41ced0);
__builtin_memmove((R+4),(R+28),4);
}
B41ced2:{NFSU2_TR(0x41ced2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ced7ull));
TAIL_STATIC(0x4198c0u,419);
}
B41ced7:L41ced7:{c.instructions+=1;NFSU2_TR(0x41ced7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ceda:L41ceda:{c.instructions+=2;NFSU2_TR(0x41ceda);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41cedd:{NFSU2_TR(0x41cedd);
if(r1(R+518)){{goto L41cf92;}}
}
B41cee3:L41cee3:{c.instructions+=2;NFSU2_TR(0x41cee3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41cee6:{NFSU2_TR(0x41cee6);
if(r1(R+518)){{goto L41cf92;}}
}
B41ceec:L41ceec:{c.instructions+=2;NFSU2_TR(0x41ceec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41ceee:{NFSU2_TR(0x41ceee);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L41cf92;}}
}
B41cef4:L41cef4:{c.instructions+=3;NFSU2_TR(0x41cef4);
__builtin_memmove((R+12),(R+24),4);
}
B41cef6:{NFSU2_TR(0x41cef6);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B41cefa:{NFSU2_TR(0x41cefa);
__builtin_memmove((R+12),(R+12),4);
}
B41cf00:L41cf00:{c.instructions+=12;NFSU2_TR(0x41cf00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41cf02:{NFSU2_TR(0x41cf02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41cf05:{NFSU2_TR(0x41cf05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41cf08:{NFSU2_TR(0x41cf08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf0a:{NFSU2_TR(0x41cf0a);
__builtin_memmove((R+0),(R+8),4);
}
B41cf0c:{NFSU2_TR(0x41cf0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf0d:{NFSU2_TR(0x41cf0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cf11:{NFSU2_TR(0x41cf11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf12:{NFSU2_TR(0x41cf12);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41cf16:{NFSU2_TR(0x41cf16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf17:{NFSU2_TR(0x41cf17);
__builtin_memmove((R+4),(R+24),4);
}
B41cf19:{NFSU2_TR(0x41cf19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cf1eull));
TAIL_STATIC(0x4122c0u,412);
}
B41cf1e:L41cf1e:{c.instructions+=15;NFSU2_TR(0x41cf1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41cf21:{NFSU2_TR(0x41cf21);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cf25:{NFSU2_TR(0x41cf25);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41cf29:{NFSU2_TR(0x41cf29);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf2b:{NFSU2_TR(0x41cf2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cf2f:{NFSU2_TR(0x41cf2f);
__builtin_memmove((R+0),(R+8),4);
}
B41cf31:{NFSU2_TR(0x41cf31);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cf35:{NFSU2_TR(0x41cf35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41cf38:{NFSU2_TR(0x41cf38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf39:{NFSU2_TR(0x41cf39);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cf3d:{NFSU2_TR(0x41cf3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf3e:{NFSU2_TR(0x41cf3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41cf42:{NFSU2_TR(0x41cf42);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf43:{NFSU2_TR(0x41cf43);
__builtin_memmove((R+4),(R+24),4);
}
B41cf45:{NFSU2_TR(0x41cf45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cf4aull));
TAIL_STATIC(0x4122c0u,412);
}
B41cf4a:L41cf4a:{c.instructions+=14;NFSU2_TR(0x41cf4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cf4e:{NFSU2_TR(0x41cf4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41cf51:{NFSU2_TR(0x41cf51);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41cf55:{NFSU2_TR(0x41cf55);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf57:{NFSU2_TR(0x41cf57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf58:{NFSU2_TR(0x41cf58);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cf5c:{NFSU2_TR(0x41cf5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cf5f:{NFSU2_TR(0x41cf5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41cf63:{NFSU2_TR(0x41cf63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf64:{NFSU2_TR(0x41cf64);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41cf68:{NFSU2_TR(0x41cf68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf69:{NFSU2_TR(0x41cf69);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41cf6d:{NFSU2_TR(0x41cf6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cf6e:{NFSU2_TR(0x41cf6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cf73ull));
TAIL_STATIC(0x403df0u,403);
}
B41cf73:L41cf73:{c.instructions+=3;NFSU2_TR(0x41cf73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B41cf76:{NFSU2_TR(0x41cf76);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41cf78:{NFSU2_TR(0x41cf78);
if(r1(R+518)){{goto L41cf92;}}
}
B41cf7a:L41cf7a:{c.instructions+=5;NFSU2_TR(0x41cf7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cf7d:{NFSU2_TR(0x41cf7d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B41cf7e:{NFSU2_TR(0x41cf7e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B41cf81:{NFSU2_TR(0x41cf81);
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
B41cf83:{NFSU2_TR(0x41cf83);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41cf00u);}goto L41cf00;}}
}
B41cf89:L41cf89:{c.instructions+=7;NFSU2_TR(0x41cf89);
w1(R+0,u8(0x1ull));
}
B41cf8b:{NFSU2_TR(0x41cf8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41cf8c:{NFSU2_TR(0x41cf8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41cf8d:{NFSU2_TR(0x41cf8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41cf8e:{NFSU2_TR(0x41cf8e);
__builtin_memmove((R+16),(R+20),4);
}
B41cf90:{NFSU2_TR(0x41cf90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41cf91:{NFSU2_TR(0x41cf91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41cf92:L41cf92:{c.instructions+=7;NFSU2_TR(0x41cf92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41cf93:{NFSU2_TR(0x41cf93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41cf94:{NFSU2_TR(0x41cf94);
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
B41cf96:{NFSU2_TR(0x41cf96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41cf97:{NFSU2_TR(0x41cf97);
__builtin_memmove((R+16),(R+20),4);
}
B41cf99:{NFSU2_TR(0x41cf99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41cf9a:{NFSU2_TR(0x41cf9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41cfa0:L41cfa0:{c.instructions+=20;NFSU2_TR(0x41cfa0);
__builtin_memmove((R+8),gp(0x883db0),4);
}
B41cfa6:{NFSU2_TR(0x41cfa6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cfa7:{NFSU2_TR(0x41cfa7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cfa8:{NFSU2_TR(0x41cfa8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41cfac:{NFSU2_TR(0x41cfac);
__builtin_memmove((R+0),(R+20),4);
}
B41cfae:{NFSU2_TR(0x41cfae);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B41cfb0:{NFSU2_TR(0x41cfb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B41cfb3:{NFSU2_TR(0x41cfb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cfb4:{NFSU2_TR(0x41cfb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cfb5:{NFSU2_TR(0x41cfb5);
w4(R+28,u32(r2(R+0)));
}
B41cfb8:{NFSU2_TR(0x41cfb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41cfbb:{NFSU2_TR(0x41cfbb);
__builtin_memmove((R+8),(R+0),4);
}
B41cfbd:{NFSU2_TR(0x41cfbd);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B41cfc0:{NFSU2_TR(0x41cfc0);
__builtin_memmove((R+24),(R+4),4);
}
B41cfc2:{NFSU2_TR(0x41cfc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41cfc6:{NFSU2_TR(0x41cfc6);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B41cfc9:{NFSU2_TR(0x41cfc9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41cfcb:{NFSU2_TR(0x41cfcb);
__builtin_memmove((R+12),(R+518),1);
}
B41cfce:{NFSU2_TR(0x41cfce);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41cfd0:{NFSU2_TR(0x41cfd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41cfd8;}}
}
B41cfd2:L41cfd2:{c.instructions+=3;NFSU2_TR(0x41cfd2);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B41cfd4:{NFSU2_TR(0x41cfd4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41cfd6:{NFSU2_TR(0x41cfd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41cfe1;}}
}
B41cfd8:L41cfd8:{c.instructions+=6;NFSU2_TR(0x41cfd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41cfd9:{NFSU2_TR(0x41cfd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41cfda:{NFSU2_TR(0x41cfda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41cfdb:{NFSU2_TR(0x41cfdb);
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
B41cfdd:{NFSU2_TR(0x41cfdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41cfde:{NFSU2_TR(0x41cfde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41cfe1:L41cfe1:{c.instructions+=3;NFSU2_TR(0x41cfe1);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41cfe5:{NFSU2_TR(0x41cfe5);
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
B41cfe7:{NFSU2_TR(0x41cfe7);
if(r1(R+518)){{goto L41cff9;}}
}
B41cfe9:L41cfe9:{c.instructions+=5;NFSU2_TR(0x41cfe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41cfeb:{NFSU2_TR(0x41cfeb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cfec:{NFSU2_TR(0x41cfec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cfed:{NFSU2_TR(0x41cfed);
__builtin_memmove((R+4),(R+24),4);
}
B41cfef:{NFSU2_TR(0x41cfef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41cff2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41cff2:L41cff2:{c.instructions+=5;NFSU2_TR(0x41cff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41cff3:{NFSU2_TR(0x41cff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41cff4:{NFSU2_TR(0x41cff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41cff5:{NFSU2_TR(0x41cff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41cff6:{NFSU2_TR(0x41cff6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41cff9:L41cff9:{c.instructions+=4;NFSU2_TR(0x41cff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41cffb:{NFSU2_TR(0x41cffb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41cffc:{NFSU2_TR(0x41cffc);
__builtin_memmove((R+4),(R+24),4);
}
B41cffe:{NFSU2_TR(0x41cffe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d001ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x41c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
