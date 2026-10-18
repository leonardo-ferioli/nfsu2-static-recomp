#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_65a(u8* __restrict R,Cpu& c);
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_65c(u8* __restrict R,Cpu& c);
u32 body_65d(u8* __restrict R,Cpu& c);
u32 body_660(u8* __restrict R,Cpu& c);
u32 body_661(u8* __restrict R,Cpu& c);
u32 body_662(u8* __restrict R,Cpu& c);
u32 body_666(u8* __restrict R,Cpu& c);
u32 body_66a(u8* __restrict R,Cpu& c);
u32 body_66b(u8* __restrict R,Cpu& c);
u32 body_66d(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_688(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x66c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x66c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_66c(u8* __restrict R,Cpu& c);
u32 page_66c(Cpu& c){return body_66c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_66c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x66c001:goto L66c001;
case 0x66c007:goto L66c007;
case 0x66c00b:c.instructions+=4;goto B66c00b;
case 0x66c00d:c.instructions+=3;goto B66c00d;
case 0x66c010:c.instructions+=2;goto B66c010;
case 0x66c012:c.instructions+=1;goto B66c012;
case 0x66c017:goto L66c017;
case 0x66c019:c.instructions+=2;goto B66c019;
case 0x66c01c:c.instructions+=1;goto B66c01c;
case 0x66c022:goto L66c022;
case 0x66c026:c.instructions+=2;goto B66c026;
case 0x66c029:c.instructions+=1;goto B66c029;
case 0x66c02f:goto L66c02f;
case 0x66c033:c.instructions+=1;goto B66c033;
case 0x66c035:goto L66c035;
case 0x66c03b:c.instructions+=4;goto B66c03b;
case 0x66c03e:c.instructions+=3;goto B66c03e;
case 0x66c044:c.instructions+=2;goto B66c044;
case 0x66c049:c.instructions+=1;goto B66c049;
case 0x66c04b:goto L66c04b;
case 0x66c04f:goto L66c04f;
case 0x66c053:c.instructions+=7;goto B66c053;
case 0x66c059:c.instructions+=6;goto B66c059;
case 0x66c05c:c.instructions+=5;goto B66c05c;
case 0x66c062:c.instructions+=4;goto B66c062;
case 0x66c066:c.instructions+=3;goto B66c066;
case 0x66c069:c.instructions+=2;goto B66c069;
case 0x66c06d:c.instructions+=1;goto B66c06d;
case 0x66c06f:goto L66c06f;
case 0x66c073:c.instructions+=2;goto B66c073;
case 0x66c075:c.instructions+=1;goto B66c075;
case 0x66c077:goto L66c077;
case 0x66c07a:c.instructions+=1;goto B66c07a;
case 0x66c07c:goto L66c07c;
case 0x66c07e:goto L66c07e;
case 0x66c082:c.instructions+=5;goto B66c082;
case 0x66c084:c.instructions+=4;goto B66c084;
case 0x66c085:c.instructions+=3;goto B66c085;
case 0x66c086:c.instructions+=2;goto B66c086;
case 0x66c088:c.instructions+=1;goto B66c088;
case 0x66c08d:goto L66c08d;
case 0x66c091:c.instructions+=6;goto B66c091;
case 0x66c097:c.instructions+=5;goto B66c097;
case 0x66c09d:c.instructions+=4;goto B66c09d;
case 0x66c0a1:c.instructions+=3;goto B66c0a1;
case 0x66c0a2:c.instructions+=2;goto B66c0a2;
case 0x66c0a6:c.instructions+=1;goto B66c0a6;
case 0x66c0a8:goto L66c0a8;
case 0x66c0ae:c.instructions+=7;goto B66c0ae;
case 0x66c0b1:c.instructions+=6;goto B66c0b1;
case 0x66c0b7:c.instructions+=5;goto B66c0b7;
case 0x66c0bb:c.instructions+=4;goto B66c0bb;
case 0x66c0bd:c.instructions+=3;goto B66c0bd;
case 0x66c0bf:c.instructions+=2;goto B66c0bf;
case 0x66c0c3:c.instructions+=1;goto B66c0c3;
case 0x66c0c5:goto L66c0c5;
case 0x66c0c9:c.instructions+=7;goto B66c0c9;
case 0x66c0cf:c.instructions+=6;goto B66c0cf;
case 0x66c0d2:c.instructions+=5;goto B66c0d2;
case 0x66c0d8:c.instructions+=4;goto B66c0d8;
case 0x66c0dc:c.instructions+=3;goto B66c0dc;
case 0x66c0de:c.instructions+=2;goto B66c0de;
case 0x66c0e2:c.instructions+=1;goto B66c0e2;
case 0x66c0e4:goto L66c0e4;
case 0x66c0e8:c.instructions+=2;goto B66c0e8;
case 0x66c0ea:c.instructions+=1;goto B66c0ea;
case 0x66c0ec:goto L66c0ec;
case 0x66c0ee:c.instructions+=2;goto B66c0ee;
case 0x66c0ef:c.instructions+=1;goto B66c0ef;
case 0x66c0f1:goto L66c0f1;
case 0x66c0f3:goto L66c0f3;
case 0x66c0f7:c.instructions+=5;goto B66c0f7;
case 0x66c0f9:c.instructions+=4;goto B66c0f9;
case 0x66c0fa:c.instructions+=3;goto B66c0fa;
case 0x66c0fb:c.instructions+=2;goto B66c0fb;
case 0x66c0fd:c.instructions+=1;goto B66c0fd;
case 0x66c102:goto L66c102;
case 0x66c106:c.instructions+=6;goto B66c106;
case 0x66c10c:c.instructions+=5;goto B66c10c;
case 0x66c112:c.instructions+=4;goto B66c112;
case 0x66c113:c.instructions+=3;goto B66c113;
case 0x66c116:c.instructions+=2;goto B66c116;
case 0x66c11a:c.instructions+=1;goto B66c11a;
case 0x66c11c:goto L66c11c;
case 0x66c123:goto L66c123;
case 0x66c129:c.instructions+=2;goto B66c129;
case 0x66c12b:c.instructions+=1;goto B66c12b;
case 0x66c131:goto L66c131;
case 0x66c137:c.instructions+=8;goto B66c137;
case 0x66c13c:c.instructions+=7;goto B66c13c;
case 0x66c142:c.instructions+=6;goto B66c142;
case 0x66c146:c.instructions+=5;goto B66c146;
case 0x66c14c:c.instructions+=4;goto B66c14c;
case 0x66c14e:c.instructions+=3;goto B66c14e;
case 0x66c150:c.instructions+=2;goto B66c150;
case 0x66c154:c.instructions+=1;goto B66c154;
case 0x66c156:goto L66c156;
case 0x66c15a:c.instructions+=7;goto B66c15a;
case 0x66c160:c.instructions+=6;goto B66c160;
case 0x66c163:c.instructions+=5;goto B66c163;
case 0x66c169:c.instructions+=4;goto B66c169;
case 0x66c16d:c.instructions+=3;goto B66c16d;
case 0x66c16f:c.instructions+=2;goto B66c16f;
case 0x66c173:c.instructions+=1;goto B66c173;
case 0x66c175:goto L66c175;
case 0x66c179:c.instructions+=2;goto B66c179;
case 0x66c17b:c.instructions+=1;goto B66c17b;
case 0x66c17d:goto L66c17d;
case 0x66c17f:c.instructions+=2;goto B66c17f;
case 0x66c180:c.instructions+=1;goto B66c180;
case 0x66c182:goto L66c182;
case 0x66c184:goto L66c184;
case 0x66c188:c.instructions+=4;goto B66c188;
case 0x66c189:c.instructions+=3;goto B66c189;
case 0x66c18a:c.instructions+=2;goto B66c18a;
case 0x66c18c:c.instructions+=1;goto B66c18c;
case 0x66c191:goto L66c191;
case 0x66c195:c.instructions+=6;goto B66c195;
case 0x66c19b:c.instructions+=5;goto B66c19b;
case 0x66c1a1:c.instructions+=4;goto B66c1a1;
case 0x66c1a2:c.instructions+=3;goto B66c1a2;
case 0x66c1a5:c.instructions+=2;goto B66c1a5;
case 0x66c1a9:c.instructions+=1;goto B66c1a9;
case 0x66c1ab:goto L66c1ab;
case 0x66c1b4:goto L66c1b4;
case 0x66c1bb:c.instructions+=1;goto B66c1bb;
case 0x66c1bd:goto L66c1bd;
case 0x66c1c2:c.instructions+=2;goto B66c1c2;
case 0x66c1c8:c.instructions+=1;goto B66c1c8;
case 0x66c1cd:goto L66c1cd;
case 0x66c1d4:c.instructions+=2;goto B66c1d4;
case 0x66c1d5:c.instructions+=1;goto B66c1d5;
case 0x66c1d6:goto L66c1d6;
case 0x66c1d9:c.instructions+=3;goto B66c1d9;
case 0x66c1dc:c.instructions+=2;goto B66c1dc;
case 0x66c1de:c.instructions+=1;goto B66c1de;
case 0x66c1e0:goto L66c1e0;
case 0x66c1e3:c.instructions+=1;goto B66c1e3;
case 0x66c1e6:goto L66c1e6;
case 0x66c1e9:c.instructions+=4;goto B66c1e9;
case 0x66c1ed:c.instructions+=3;goto B66c1ed;
case 0x66c1f0:c.instructions+=2;goto B66c1f0;
case 0x66c1f6:c.instructions+=1;goto B66c1f6;
case 0x66c1f8:goto L66c1f8;
case 0x66c1fb:c.instructions+=1;goto B66c1fb;
case 0x66c1fd:goto L66c1fd;
case 0x66c1ff:goto L66c1ff;
case 0x66c200:c.instructions+=4;goto B66c200;
case 0x66c201:c.instructions+=3;goto B66c201;
case 0x66c202:c.instructions+=2;goto B66c202;
case 0x66c203:c.instructions+=1;goto B66c203;
case 0x66c206:goto L66c206;
case 0x66c208:c.instructions+=2;goto B66c208;
case 0x66c209:c.instructions+=1;goto B66c209;
case 0x66c20b:goto L66c20b;
case 0x66c20d:c.instructions+=8;goto B66c20d;
case 0x66c20e:c.instructions+=7;goto B66c20e;
case 0x66c210:c.instructions+=6;goto B66c210;
case 0x66c211:c.instructions+=5;goto B66c211;
case 0x66c215:c.instructions+=4;goto B66c215;
case 0x66c216:c.instructions+=3;goto B66c216;
case 0x66c219:c.instructions+=2;goto B66c219;
case 0x66c21b:c.instructions+=1;goto B66c21b;
case 0x66c21d:goto L66c21d;
case 0x66c224:c.instructions+=1;goto B66c224;
case 0x66c229:goto L66c229;
case 0x66c22c:c.instructions+=2;goto B66c22c;
case 0x66c22e:c.instructions+=1;goto B66c22e;
case 0x66c230:goto L66c230;
case 0x66c232:c.instructions+=1;goto B66c232;
case 0x66c234:goto L66c234;
case 0x66c237:c.instructions+=4;goto B66c237;
case 0x66c239:c.instructions+=3;goto B66c239;
case 0x66c23b:c.instructions+=2;goto B66c23b;
case 0x66c23c:c.instructions+=1;goto B66c23c;
case 0x66c241:goto L66c241;
case 0x66c243:c.instructions+=2;goto B66c243;
case 0x66c245:c.instructions+=1;goto B66c245;
case 0x66c247:goto L66c247;
case 0x66c24a:c.instructions+=11;goto B66c24a;
case 0x66c250:c.instructions+=10;goto B66c250;
case 0x66c253:c.instructions+=9;goto B66c253;
case 0x66c256:c.instructions+=8;goto B66c256;
case 0x66c257:c.instructions+=7;goto B66c257;
case 0x66c25a:c.instructions+=6;goto B66c25a;
case 0x66c25b:c.instructions+=5;goto B66c25b;
case 0x66c25e:c.instructions+=4;goto B66c25e;
case 0x66c260:c.instructions+=3;goto B66c260;
case 0x66c262:c.instructions+=2;goto B66c262;
case 0x66c263:c.instructions+=1;goto B66c263;
case 0x66c265:goto L66c265;
case 0x66c267:goto L66c267;
case 0x66c26a:c.instructions+=5;goto B66c26a;
case 0x66c26d:c.instructions+=4;goto B66c26d;
case 0x66c273:c.instructions+=3;goto B66c273;
case 0x66c276:c.instructions+=2;goto B66c276;
case 0x66c27d:c.instructions+=1;goto B66c27d;
case 0x66c27f:goto L66c27f;
case 0x66c285:c.instructions+=2;goto B66c285;
case 0x66c287:c.instructions+=1;goto B66c287;
case 0x66c289:goto L66c289;
case 0x66c28c:c.instructions+=4;goto B66c28c;
case 0x66c292:c.instructions+=3;goto B66c292;
case 0x66c294:c.instructions+=2;goto B66c294;
case 0x66c297:c.instructions+=1;goto B66c297;
case 0x66c299:goto L66c299;
case 0x66c29c:goto L66c29c;
case 0x66c2a0:c.instructions+=1;goto B66c2a0;
case 0x66c2a2:goto L66c2a2;
case 0x66c2a5:c.instructions+=1;goto B66c2a5;
case 0x66c2a7:goto L66c2a7;
case 0x66c2aa:c.instructions+=1;goto B66c2aa;
case 0x66c2ad:goto L66c2ad;
case 0x66c2b0:c.instructions+=6;goto B66c2b0;
case 0x66c2b3:c.instructions+=5;goto B66c2b3;
case 0x66c2b5:c.instructions+=4;goto B66c2b5;
case 0x66c2b8:c.instructions+=3;goto B66c2b8;
case 0x66c2ba:c.instructions+=2;goto B66c2ba;
case 0x66c2be:c.instructions+=1;goto B66c2be;
case 0x66c2c0:goto L66c2c0;
case 0x66c2c3:c.instructions+=1;goto B66c2c3;
case 0x66c2c5:goto L66c2c5;
case 0x66c2c7:goto L66c2c7;
case 0x66c2ca:c.instructions+=4;goto B66c2ca;
case 0x66c2cd:c.instructions+=3;goto B66c2cd;
case 0x66c2cf:c.instructions+=2;goto B66c2cf;
case 0x66c2d1:c.instructions+=1;goto B66c2d1;
case 0x66c2d3:goto L66c2d3;
case 0x66c2d5:c.instructions+=1;goto B66c2d5;
case 0x66c2d7:goto L66c2d7;
case 0x66c2da:goto L66c2da;
case 0x66c2dc:c.instructions+=4;goto B66c2dc;
case 0x66c2df:c.instructions+=3;goto B66c2df;
case 0x66c2e1:c.instructions+=2;goto B66c2e1;
case 0x66c2e3:c.instructions+=1;goto B66c2e3;
case 0x66c2e5:goto L66c2e5;
case 0x66c2e7:c.instructions+=1;goto B66c2e7;
case 0x66c2e9:goto L66c2e9;
case 0x66c2ec:goto L66c2ec;
case 0x66c2ef:c.instructions+=7;goto B66c2ef;
case 0x66c2f2:c.instructions+=6;goto B66c2f2;
case 0x66c2f5:c.instructions+=5;goto B66c2f5;
case 0x66c2f8:c.instructions+=4;goto B66c2f8;
case 0x66c2fb:c.instructions+=3;goto B66c2fb;
case 0x66c2fe:c.instructions+=2;goto B66c2fe;
case 0x66c301:c.instructions+=1;goto B66c301;
case 0x66c303:goto L66c303;
case 0x66c306:c.instructions+=1;goto B66c306;
case 0x66c308:goto L66c308;
case 0x66c30c:c.instructions+=1;goto B66c30c;
case 0x66c30e:goto L66c30e;
case 0x66c311:c.instructions+=2;goto B66c311;
case 0x66c314:c.instructions+=1;goto B66c314;
case 0x66c316:goto L66c316;
case 0x66c319:goto L66c319;
case 0x66c31c:c.instructions+=2;goto B66c31c;
case 0x66c31d:c.instructions+=1;goto B66c31d;
case 0x66c31f:goto L66c31f;
case 0x66c322:c.instructions+=1;goto B66c322;
case 0x66c324:goto L66c324;
case 0x66c325:c.instructions+=1;goto B66c325;
case 0x66c327:goto L66c327;
case 0x66c32a:c.instructions+=4;goto B66c32a;
case 0x66c32d:c.instructions+=3;goto B66c32d;
case 0x66c330:c.instructions+=2;goto B66c330;
case 0x66c333:c.instructions+=1;goto B66c333;
case 0x66c335:goto L66c335;
case 0x66c338:c.instructions+=1;goto B66c338;
case 0x66c33b:goto L66c33b;
case 0x66c33e:c.instructions+=2;goto B66c33e;
case 0x66c341:c.instructions+=1;goto B66c341;
case 0x66c343:goto L66c343;
case 0x66c346:c.instructions+=1;goto B66c346;
case 0x66c348:goto L66c348;
case 0x66c34b:c.instructions+=3;goto B66c34b;
case 0x66c34e:c.instructions+=2;goto B66c34e;
case 0x66c351:c.instructions+=1;goto B66c351;
case 0x66c354:goto L66c354;
case 0x66c357:goto L66c357;
case 0x66c358:c.instructions+=1;goto B66c358;
case 0x66c359:goto L66c359;
case 0x66c35c:c.instructions+=3;goto B66c35c;
case 0x66c35d:c.instructions+=2;goto B66c35d;
case 0x66c35e:c.instructions+=1;goto B66c35e;
case 0x66c361:goto L66c361;
case 0x66c363:c.instructions+=6;goto B66c363;
case 0x66c364:c.instructions+=5;goto B66c364;
case 0x66c366:c.instructions+=4;goto B66c366;
case 0x66c369:c.instructions+=3;goto B66c369;
case 0x66c36c:c.instructions+=2;goto B66c36c;
case 0x66c36f:c.instructions+=1;goto B66c36f;
case 0x66c371:goto L66c371;
case 0x66c373:c.instructions+=1;goto B66c373;
case 0x66c378:goto L66c378;
case 0x66c37a:goto L66c37a;
case 0x66c37b:c.instructions+=1;goto B66c37b;
case 0x66c37e:goto L66c37e;
case 0x66c380:c.instructions+=17;goto B66c380;
case 0x66c381:c.instructions+=16;goto B66c381;
case 0x66c383:c.instructions+=15;goto B66c383;
case 0x66c386:c.instructions+=14;goto B66c386;
case 0x66c389:c.instructions+=13;goto B66c389;
case 0x66c38c:c.instructions+=12;goto B66c38c;
case 0x66c38f:c.instructions+=11;goto B66c38f;
case 0x66c390:c.instructions+=10;goto B66c390;
case 0x66c393:c.instructions+=9;goto B66c393;
case 0x66c396:c.instructions+=8;goto B66c396;
case 0x66c399:c.instructions+=7;goto B66c399;
case 0x66c39c:c.instructions+=6;goto B66c39c;
case 0x66c3a0:c.instructions+=5;goto B66c3a0;
case 0x66c3a3:c.instructions+=4;goto B66c3a3;
case 0x66c3a9:c.instructions+=3;goto B66c3a9;
case 0x66c3ac:c.instructions+=2;goto B66c3ac;
case 0x66c3af:c.instructions+=1;goto B66c3af;
case 0x66c3b1:goto L66c3b1;
case 0x66c3b4:c.instructions+=1;goto B66c3b4;
case 0x66c3b6:goto L66c3b6;
case 0x66c3b9:c.instructions+=1;goto B66c3b9;
case 0x66c3bb:goto L66c3bb;
case 0x66c3be:c.instructions+=1;goto B66c3be;
case 0x66c3c0:goto L66c3c0;
case 0x66c3c7:c.instructions+=1;goto B66c3c7;
case 0x66c3cc:goto L66c3cc;
case 0x66c3cd:c.instructions+=4;goto B66c3cd;
case 0x66c3ce:c.instructions+=3;goto B66c3ce;
case 0x66c3d1:c.instructions+=2;goto B66c3d1;
case 0x66c3d3:c.instructions+=1;goto B66c3d3;
case 0x66c3d5:goto L66c3d5;
case 0x66c3d7:c.instructions+=2;goto B66c3d7;
case 0x66c3d8:c.instructions+=1;goto B66c3d8;
case 0x66c3db:goto L66c3db;
case 0x66c3de:c.instructions+=4;goto B66c3de;
case 0x66c3e0:c.instructions+=3;goto B66c3e0;
case 0x66c3e1:c.instructions+=2;goto B66c3e1;
case 0x66c3e3:c.instructions+=1;goto B66c3e3;
case 0x66c3e5:goto L66c3e5;
case 0x66c3e7:c.instructions+=2;goto B66c3e7;
case 0x66c3e8:c.instructions+=1;goto B66c3e8;
case 0x66c3eb:goto L66c3eb;
case 0x66c3ed:c.instructions+=3;goto B66c3ed;
case 0x66c3f0:c.instructions+=2;goto B66c3f0;
case 0x66c3f3:c.instructions+=1;goto B66c3f3;
case 0x66c3f5:goto L66c3f5;
case 0x66c3f8:goto L66c3f8;
case 0x66c3fa:c.instructions+=2;goto B66c3fa;
case 0x66c3fc:c.instructions+=1;goto B66c3fc;
case 0x66c3fe:goto L66c3fe;
case 0x66c400:c.instructions+=2;goto B66c400;
case 0x66c401:c.instructions+=1;goto B66c401;
case 0x66c404:goto L66c404;
case 0x66c406:c.instructions+=1;goto B66c406;
case 0x66c408:goto L66c408;
case 0x66c40c:c.instructions+=1;goto B66c40c;
case 0x66c40e:goto L66c40e;
case 0x66c415:c.instructions+=1;goto B66c415;
case 0x66c41a:goto L66c41a;
case 0x66c41d:c.instructions+=1;goto B66c41d;
case 0x66c422:goto L66c422;
case 0x66c424:c.instructions+=3;goto B66c424;
case 0x66c425:c.instructions+=2;goto B66c425;
case 0x66c428:c.instructions+=1;goto B66c428;
case 0x66c42a:goto L66c42a;
case 0x66c431:c.instructions+=1;goto B66c431;
case 0x66c436:goto L66c436;
case 0x66c43a:c.instructions+=1;goto B66c43a;
case 0x66c43c:goto L66c43c;
case 0x66c43f:c.instructions+=11;goto B66c43f;
case 0x66c442:c.instructions+=10;goto B66c442;
case 0x66c445:c.instructions+=9;goto B66c445;
case 0x66c447:c.instructions+=8;goto B66c447;
case 0x66c448:c.instructions+=7;goto B66c448;
case 0x66c44a:c.instructions+=6;goto B66c44a;
case 0x66c44c:c.instructions+=5;goto B66c44c;
case 0x66c44f:c.instructions+=4;goto B66c44f;
case 0x66c451:c.instructions+=3;goto B66c451;
case 0x66c454:c.instructions+=2;goto B66c454;
case 0x66c456:c.instructions+=1;goto B66c456;
case 0x66c459:goto L66c459;
case 0x66c45b:c.instructions+=3;goto B66c45b;
case 0x66c45e:c.instructions+=2;goto B66c45e;
case 0x66c460:c.instructions+=1;goto B66c460;
case 0x66c462:goto L66c462;
case 0x66c464:c.instructions+=2;goto B66c464;
case 0x66c465:c.instructions+=1;goto B66c465;
case 0x66c468:goto L66c468;
case 0x66c46a:c.instructions+=5;goto B66c46a;
case 0x66c46d:c.instructions+=4;goto B66c46d;
case 0x66c470:c.instructions+=3;goto B66c470;
case 0x66c473:c.instructions+=2;goto B66c473;
case 0x66c475:c.instructions+=1;goto B66c475;
case 0x66c478:goto L66c478;
case 0x66c47a:goto L66c47a;
case 0x66c47c:c.instructions+=1;goto B66c47c;
case 0x66c47f:goto L66c47f;
case 0x66c481:goto L66c481;
case 0x66c484:c.instructions+=1;goto B66c484;
case 0x66c487:goto L66c487;
case 0x66c48a:c.instructions+=1;goto B66c48a;
case 0x66c48c:goto L66c48c;
case 0x66c48e:c.instructions+=2;goto B66c48e;
case 0x66c48f:c.instructions+=1;goto B66c48f;
case 0x66c492:goto L66c492;
case 0x66c494:c.instructions+=1;goto B66c494;
case 0x66c49a:goto L66c49a;
case 0x66c49d:c.instructions+=5;goto B66c49d;
case 0x66c4a0:c.instructions+=4;goto B66c4a0;
case 0x66c4a2:c.instructions+=3;goto B66c4a2;
case 0x66c4a7:c.instructions+=2;goto B66c4a7;
case 0x66c4aa:c.instructions+=1;goto B66c4aa;
case 0x66c4ac:goto L66c4ac;
case 0x66c4af:c.instructions+=5;goto B66c4af;
case 0x66c4b0:c.instructions+=4;goto B66c4b0;
case 0x66c4b2:c.instructions+=3;goto B66c4b2;
case 0x66c4b3:c.instructions+=2;goto B66c4b3;
case 0x66c4b5:c.instructions+=1;goto B66c4b5;
case 0x66c4ba:goto L66c4ba;
case 0x66c4bc:c.instructions+=2;goto B66c4bc;
case 0x66c4bf:c.instructions+=1;goto B66c4bf;
case 0x66c4c1:goto L66c4c1;
case 0x66c4c4:c.instructions+=4;goto B66c4c4;
case 0x66c4ca:c.instructions+=3;goto B66c4ca;
case 0x66c4cd:c.instructions+=2;goto B66c4cd;
case 0x66c4d0:c.instructions+=1;goto B66c4d0;
case 0x66c4d2:goto L66c4d2;
case 0x66c4d5:c.instructions+=1;goto B66c4d5;
case 0x66c4d7:goto L66c4d7;
case 0x66c4da:c.instructions+=1;goto B66c4da;
case 0x66c4dd:goto L66c4dd;
case 0x66c4e0:c.instructions+=8;goto B66c4e0;
case 0x66c4e3:c.instructions+=7;goto B66c4e3;
case 0x66c4e6:c.instructions+=6;goto B66c4e6;
case 0x66c4ea:c.instructions+=5;goto B66c4ea;
case 0x66c4ee:c.instructions+=4;goto B66c4ee;
case 0x66c4f1:c.instructions+=3;goto B66c4f1;
case 0x66c4f7:c.instructions+=2;goto B66c4f7;
case 0x66c4fa:c.instructions+=1;goto B66c4fa;
case 0x66c500:goto L66c500;
case 0x66c503:c.instructions+=1;goto B66c503;
case 0x66c505:goto L66c505;
case 0x66c508:c.instructions+=1;goto B66c508;
case 0x66c50e:goto L66c50e;
case 0x66c511:c.instructions+=1;goto B66c511;
case 0x66c517:goto L66c517;
case 0x66c519:c.instructions+=1;goto B66c519;
case 0x66c51b:goto L66c51b;
case 0x66c522:c.instructions+=1;goto B66c522;
case 0x66c527:goto L66c527;
case 0x66c529:c.instructions+=4;goto B66c529;
case 0x66c52b:c.instructions+=3;goto B66c52b;
case 0x66c52d:c.instructions+=2;goto B66c52d;
case 0x66c530:c.instructions+=1;goto B66c530;
case 0x66c531:goto L66c531;
case 0x66c533:goto L66c533;
case 0x66c539:c.instructions+=17;goto B66c539;
case 0x66c53c:c.instructions+=16;goto B66c53c;
case 0x66c53f:c.instructions+=15;goto B66c53f;
case 0x66c541:c.instructions+=14;goto B66c541;
case 0x66c544:c.instructions+=13;goto B66c544;
case 0x66c54a:c.instructions+=12;goto B66c54a;
case 0x66c551:c.instructions+=11;goto B66c551;
case 0x66c557:c.instructions+=10;goto B66c557;
case 0x66c55a:c.instructions+=9;goto B66c55a;
case 0x66c55e:c.instructions+=8;goto B66c55e;
case 0x66c560:c.instructions+=7;goto B66c560;
case 0x66c563:c.instructions+=6;goto B66c563;
case 0x66c566:c.instructions+=5;goto B66c566;
case 0x66c569:c.instructions+=4;goto B66c569;
case 0x66c56c:c.instructions+=3;goto B66c56c;
case 0x66c56f:c.instructions+=2;goto B66c56f;
case 0x66c573:c.instructions+=1;goto B66c573;
case 0x66c578:goto L66c578;
case 0x66c57b:c.instructions+=1;goto B66c57b;
case 0x66c57d:goto L66c57d;
case 0x66c580:c.instructions+=1;goto B66c580;
case 0x66c582:goto L66c582;
case 0x66c585:c.instructions+=1;goto B66c585;
case 0x66c587:goto L66c587;
case 0x66c58a:c.instructions+=1;goto B66c58a;
case 0x66c58c:goto L66c58c;
case 0x66c58f:c.instructions+=1;goto B66c58f;
case 0x66c591:goto L66c591;
case 0x66c598:goto L66c598;
case 0x66c59a:c.instructions+=1;goto B66c59a;
case 0x66c59c:goto L66c59c;
case 0x66c59f:c.instructions+=1;goto B66c59f;
case 0x66c5a1:goto L66c5a1;
case 0x66c5a4:c.instructions+=1;goto B66c5a4;
case 0x66c5a6:goto L66c5a6;
case 0x66c5a9:c.instructions+=1;goto B66c5a9;
case 0x66c5ab:goto L66c5ab;
case 0x66c5ae:c.instructions+=1;goto B66c5ae;
case 0x66c5b0:goto L66c5b0;
case 0x66c5b3:c.instructions+=1;goto B66c5b3;
case 0x66c5b5:goto L66c5b5;
case 0x66c5bc:goto L66c5bc;
case 0x66c5c2:goto L66c5c2;
case 0x66c5c5:c.instructions+=1;goto B66c5c5;
case 0x66c5c7:goto L66c5c7;
case 0x66c5c9:c.instructions+=3;goto B66c5c9;
case 0x66c5ca:c.instructions+=2;goto B66c5ca;
case 0x66c5cc:c.instructions+=1;goto B66c5cc;
case 0x66c5cf:goto L66c5cf;
case 0x66c5d1:goto L66c5d1;
case 0x66c5d3:c.instructions+=4;goto B66c5d3;
case 0x66c5d5:c.instructions+=3;goto B66c5d5;
case 0x66c5d8:c.instructions+=2;goto B66c5d8;
case 0x66c5db:c.instructions+=1;goto B66c5db;
case 0x66c5e0:goto L66c5e0;
case 0x66c5e2:c.instructions+=2;goto B66c5e2;
case 0x66c5e3:c.instructions+=1;goto B66c5e3;
case 0x66c5e5:goto L66c5e5;
case 0x66c5e7:c.instructions+=8;goto B66c5e7;
case 0x66c5ec:c.instructions+=7;goto B66c5ec;
case 0x66c5ed:c.instructions+=6;goto B66c5ed;
case 0x66c5ee:c.instructions+=5;goto B66c5ee;
case 0x66c5f1:c.instructions+=4;goto B66c5f1;
case 0x66c5f3:c.instructions+=3;goto B66c5f3;
case 0x66c5f4:c.instructions+=2;goto B66c5f4;
case 0x66c5f6:c.instructions+=1;goto B66c5f6;
case 0x66c5fb:goto L66c5fb;
case 0x66c5fd:goto L66c5fd;
case 0x66c5ff:goto L66c5ff;
case 0x66c601:c.instructions+=2;goto B66c601;
case 0x66c604:c.instructions+=1;goto B66c604;
case 0x66c60a:goto L66c60a;
case 0x66c60d:c.instructions+=8;goto B66c60d;
case 0x66c60e:c.instructions+=7;goto B66c60e;
case 0x66c611:c.instructions+=6;goto B66c611;
case 0x66c617:c.instructions+=5;goto B66c617;
case 0x66c618:c.instructions+=4;goto B66c618;
case 0x66c61b:c.instructions+=3;goto B66c61b;
case 0x66c621:c.instructions+=2;goto B66c621;
case 0x66c624:c.instructions+=1;goto B66c624;
case 0x66c629:goto L66c629;
case 0x66c62c:goto L66c62c;
case 0x66c630:c.instructions+=1;goto B66c630;
case 0x66c632:goto L66c632;
case 0x66c635:c.instructions+=1;goto B66c635;
case 0x66c63a:goto L66c63a;
case 0x66c63b:goto L66c63b;
case 0x66c63c:c.instructions+=1;goto B66c63c;
case 0x66c63d:goto L66c63d;
case 0x66c640:c.instructions+=3;goto B66c640;
case 0x66c641:c.instructions+=2;goto B66c641;
case 0x66c642:c.instructions+=1;goto B66c642;
case 0x66c645:goto L66c645;
case 0x66c647:c.instructions+=17;goto B66c647;
case 0x66c648:c.instructions+=16;goto B66c648;
case 0x66c64a:c.instructions+=15;goto B66c64a;
case 0x66c64d:c.instructions+=14;goto B66c64d;
case 0x66c650:c.instructions+=13;goto B66c650;
case 0x66c651:c.instructions+=12;goto B66c651;
case 0x66c654:c.instructions+=11;goto B66c654;
case 0x66c657:c.instructions+=10;goto B66c657;
case 0x66c65a:c.instructions+=9;goto B66c65a;
case 0x66c65d:c.instructions+=8;goto B66c65d;
case 0x66c660:c.instructions+=7;goto B66c660;
case 0x66c661:c.instructions+=6;goto B66c661;
case 0x66c662:c.instructions+=5;goto B66c662;
case 0x66c665:c.instructions+=4;goto B66c665;
case 0x66c667:c.instructions+=3;goto B66c667;
case 0x66c66a:c.instructions+=2;goto B66c66a;
case 0x66c66d:c.instructions+=1;goto B66c66d;
case 0x66c66f:goto L66c66f;
case 0x66c671:c.instructions+=2;goto B66c671;
case 0x66c672:c.instructions+=1;goto B66c672;
case 0x66c675:goto L66c675;
case 0x66c678:c.instructions+=4;goto B66c678;
case 0x66c67a:c.instructions+=3;goto B66c67a;
case 0x66c67b:c.instructions+=2;goto B66c67b;
case 0x66c67d:c.instructions+=1;goto B66c67d;
case 0x66c67f:goto L66c67f;
case 0x66c681:c.instructions+=2;goto B66c681;
case 0x66c682:c.instructions+=1;goto B66c682;
case 0x66c685:goto L66c685;
case 0x66c687:c.instructions+=3;goto B66c687;
case 0x66c68a:c.instructions+=2;goto B66c68a;
case 0x66c68d:c.instructions+=1;goto B66c68d;
case 0x66c68f:goto L66c68f;
case 0x66c692:goto L66c692;
case 0x66c694:c.instructions+=2;goto B66c694;
case 0x66c696:c.instructions+=1;goto B66c696;
case 0x66c698:goto L66c698;
case 0x66c69a:c.instructions+=2;goto B66c69a;
case 0x66c69b:c.instructions+=1;goto B66c69b;
case 0x66c69e:goto L66c69e;
case 0x66c6a0:c.instructions+=3;goto B66c6a0;
case 0x66c6a1:c.instructions+=2;goto B66c6a1;
case 0x66c6a3:c.instructions+=1;goto B66c6a3;
case 0x66c6a5:goto L66c6a5;
case 0x66c6a7:c.instructions+=2;goto B66c6a7;
case 0x66c6a8:c.instructions+=1;goto B66c6a8;
case 0x66c6ab:goto L66c6ab;
case 0x66c6ad:c.instructions+=2;goto B66c6ad;
case 0x66c6b0:c.instructions+=1;goto B66c6b0;
case 0x66c6b3:goto L66c6b3;
case 0x66c6b5:c.instructions+=2;goto B66c6b5;
case 0x66c6b7:c.instructions+=1;goto B66c6b7;
case 0x66c6b9:goto L66c6b9;
case 0x66c6bb:c.instructions+=2;goto B66c6bb;
case 0x66c6bc:c.instructions+=1;goto B66c6bc;
case 0x66c6bf:goto L66c6bf;
case 0x66c6c1:c.instructions+=1;goto B66c6c1;
case 0x66c6c3:goto L66c6c3;
case 0x66c6c7:c.instructions+=1;goto B66c6c7;
case 0x66c6c9:goto L66c6c9;
case 0x66c6d0:c.instructions+=1;goto B66c6d0;
case 0x66c6d5:goto L66c6d5;
case 0x66c6d8:c.instructions+=1;goto B66c6d8;
case 0x66c6dd:goto L66c6dd;
case 0x66c6df:c.instructions+=3;goto B66c6df;
case 0x66c6e0:c.instructions+=2;goto B66c6e0;
case 0x66c6e3:c.instructions+=1;goto B66c6e3;
case 0x66c6e5:goto L66c6e5;
case 0x66c6ec:c.instructions+=1;goto B66c6ec;
case 0x66c6f1:goto L66c6f1;
case 0x66c6f5:c.instructions+=1;goto B66c6f5;
case 0x66c6f7:goto L66c6f7;
case 0x66c6fa:c.instructions+=11;goto B66c6fa;
case 0x66c6fd:c.instructions+=10;goto B66c6fd;
case 0x66c700:c.instructions+=9;goto B66c700;
case 0x66c702:c.instructions+=8;goto B66c702;
case 0x66c703:c.instructions+=7;goto B66c703;
case 0x66c705:c.instructions+=6;goto B66c705;
case 0x66c707:c.instructions+=5;goto B66c707;
case 0x66c70a:c.instructions+=4;goto B66c70a;
case 0x66c70c:c.instructions+=3;goto B66c70c;
case 0x66c70f:c.instructions+=2;goto B66c70f;
case 0x66c711:c.instructions+=1;goto B66c711;
case 0x66c714:goto L66c714;
case 0x66c716:c.instructions+=3;goto B66c716;
case 0x66c719:c.instructions+=2;goto B66c719;
case 0x66c71b:c.instructions+=1;goto B66c71b;
case 0x66c71d:goto L66c71d;
case 0x66c71f:c.instructions+=2;goto B66c71f;
case 0x66c720:c.instructions+=1;goto B66c720;
case 0x66c723:goto L66c723;
case 0x66c725:c.instructions+=5;goto B66c725;
case 0x66c728:c.instructions+=4;goto B66c728;
case 0x66c72b:c.instructions+=3;goto B66c72b;
case 0x66c72e:c.instructions+=2;goto B66c72e;
case 0x66c730:c.instructions+=1;goto B66c730;
case 0x66c733:goto L66c733;
case 0x66c735:goto L66c735;
case 0x66c737:c.instructions+=1;goto B66c737;
case 0x66c73a:goto L66c73a;
case 0x66c73c:goto L66c73c;
case 0x66c73f:c.instructions+=1;goto B66c73f;
case 0x66c742:goto L66c742;
case 0x66c745:c.instructions+=1;goto B66c745;
case 0x66c747:goto L66c747;
case 0x66c749:c.instructions+=2;goto B66c749;
case 0x66c74a:c.instructions+=1;goto B66c74a;
case 0x66c74d:goto L66c74d;
case 0x66c74f:c.instructions+=1;goto B66c74f;
case 0x66c755:goto L66c755;
case 0x66c758:c.instructions+=3;goto B66c758;
case 0x66c75b:c.instructions+=2;goto B66c75b;
case 0x66c760:c.instructions+=1;goto B66c760;
case 0x66c766:goto L66c766;
case 0x66c769:c.instructions+=4;goto B66c769;
case 0x66c76b:c.instructions+=3;goto B66c76b;
case 0x66c76d:c.instructions+=2;goto B66c76d;
case 0x66c76e:c.instructions+=1;goto B66c76e;
case 0x66c773:goto L66c773;
case 0x66c775:c.instructions+=1;goto B66c775;
case 0x66c77b:goto L66c77b;
case 0x66c77d:c.instructions+=6;goto B66c77d;
case 0x66c77f:c.instructions+=5;goto B66c77f;
case 0x66c781:c.instructions+=4;goto B66c781;
case 0x66c782:c.instructions+=3;goto B66c782;
case 0x66c783:c.instructions+=2;goto B66c783;
case 0x66c785:c.instructions+=1;goto B66c785;
case 0x66c788:goto L66c788;
case 0x66c78a:goto L66c78a;
case 0x66c78e:c.instructions+=18;goto B66c78e;
case 0x66c792:c.instructions+=17;goto B66c792;
case 0x66c798:c.instructions+=16;goto B66c798;
case 0x66c79c:c.instructions+=15;goto B66c79c;
case 0x66c79f:c.instructions+=14;goto B66c79f;
case 0x66c7a3:c.instructions+=13;goto B66c7a3;
case 0x66c7a5:c.instructions+=12;goto B66c7a5;
case 0x66c7a6:c.instructions+=11;goto B66c7a6;
case 0x66c7a9:c.instructions+=10;goto B66c7a9;
case 0x66c7ac:c.instructions+=9;goto B66c7ac;
case 0x66c7af:c.instructions+=8;goto B66c7af;
case 0x66c7b2:c.instructions+=7;goto B66c7b2;
case 0x66c7b3:c.instructions+=6;goto B66c7b3;
case 0x66c7b6:c.instructions+=5;goto B66c7b6;
case 0x66c7bc:c.instructions+=4;goto B66c7bc;
case 0x66c7c3:c.instructions+=3;goto B66c7c3;
case 0x66c7c7:c.instructions+=2;goto B66c7c7;
case 0x66c7c8:c.instructions+=1;goto B66c7c8;
case 0x66c7cd:goto L66c7cd;
case 0x66c7cf:c.instructions+=2;goto B66c7cf;
case 0x66c7d2:c.instructions+=1;goto B66c7d2;
case 0x66c7d8:goto L66c7d8;
case 0x66c7da:c.instructions+=3;goto B66c7da;
case 0x66c7dc:c.instructions+=2;goto B66c7dc;
case 0x66c7dd:c.instructions+=1;goto B66c7dd;
case 0x66c7e0:goto L66c7e0;
case 0x66c7e2:c.instructions+=24;goto B66c7e2;
case 0x66c7e6:c.instructions+=23;goto B66c7e6;
case 0x66c7ec:c.instructions+=22;goto B66c7ec;
case 0x66c7ee:c.instructions+=21;goto B66c7ee;
case 0x66c7ef:c.instructions+=20;goto B66c7ef;
case 0x66c7f2:c.instructions+=19;goto B66c7f2;
case 0x66c7f5:c.instructions+=18;goto B66c7f5;
case 0x66c7f7:c.instructions+=17;goto B66c7f7;
case 0x66c7fa:c.instructions+=16;goto B66c7fa;
case 0x66c7fd:c.instructions+=15;goto B66c7fd;
case 0x66c800:c.instructions+=14;goto B66c800;
case 0x66c803:c.instructions+=13;goto B66c803;
case 0x66c806:c.instructions+=12;goto B66c806;
case 0x66c809:c.instructions+=11;goto B66c809;
case 0x66c80c:c.instructions+=10;goto B66c80c;
case 0x66c80e:c.instructions+=9;goto B66c80e;
case 0x66c811:c.instructions+=8;goto B66c811;
case 0x66c813:c.instructions+=7;goto B66c813;
case 0x66c816:c.instructions+=6;goto B66c816;
case 0x66c819:c.instructions+=5;goto B66c819;
case 0x66c81c:c.instructions+=4;goto B66c81c;
case 0x66c820:c.instructions+=3;goto B66c820;
case 0x66c824:c.instructions+=2;goto B66c824;
case 0x66c827:c.instructions+=1;goto B66c827;
case 0x66c82d:goto L66c82d;
case 0x66c830:c.instructions+=12;goto B66c830;
case 0x66c832:c.instructions+=11;goto B66c832;
case 0x66c835:c.instructions+=10;goto B66c835;
case 0x66c837:c.instructions+=9;goto B66c837;
case 0x66c839:c.instructions+=8;goto B66c839;
case 0x66c83b:c.instructions+=7;goto B66c83b;
case 0x66c83e:c.instructions+=6;goto B66c83e;
case 0x66c840:c.instructions+=5;goto B66c840;
case 0x66c843:c.instructions+=4;goto B66c843;
case 0x66c846:c.instructions+=3;goto B66c846;
case 0x66c848:c.instructions+=2;goto B66c848;
case 0x66c849:c.instructions+=1;goto B66c849;
case 0x66c84c:goto L66c84c;
case 0x66c84f:c.instructions+=4;goto B66c84f;
case 0x66c851:c.instructions+=3;goto B66c851;
case 0x66c854:c.instructions+=2;goto B66c854;
case 0x66c856:c.instructions+=1;goto B66c856;
case 0x66c858:goto L66c858;
case 0x66c85b:c.instructions+=3;goto B66c85b;
case 0x66c85d:c.instructions+=2;goto B66c85d;
case 0x66c85e:c.instructions+=1;goto B66c85e;
case 0x66c861:goto L66c861;
case 0x66c863:c.instructions+=5;goto B66c863;
case 0x66c866:c.instructions+=4;goto B66c866;
case 0x66c869:c.instructions+=3;goto B66c869;
case 0x66c86b:c.instructions+=2;goto B66c86b;
case 0x66c86e:c.instructions+=1;goto B66c86e;
case 0x66c871:goto L66c871;
case 0x66c873:goto L66c873;
case 0x66c875:c.instructions+=1;goto B66c875;
case 0x66c878:goto L66c878;
case 0x66c87a:goto L66c87a;
case 0x66c87d:c.instructions+=1;goto B66c87d;
case 0x66c880:goto L66c880;
case 0x66c883:c.instructions+=9;goto B66c883;
case 0x66c885:c.instructions+=8;goto B66c885;
case 0x66c888:c.instructions+=7;goto B66c888;
case 0x66c889:c.instructions+=6;goto B66c889;
case 0x66c88c:c.instructions+=5;goto B66c88c;
case 0x66c88f:c.instructions+=4;goto B66c88f;
case 0x66c890:c.instructions+=3;goto B66c890;
case 0x66c891:c.instructions+=2;goto B66c891;
case 0x66c894:c.instructions+=1;goto B66c894;
case 0x66c899:goto L66c899;
case 0x66c89b:c.instructions+=2;goto B66c89b;
case 0x66c89e:c.instructions+=1;goto B66c89e;
case 0x66c8a0:goto L66c8a0;
case 0x66c8a3:c.instructions+=3;goto B66c8a3;
case 0x66c8a5:c.instructions+=2;goto B66c8a5;
case 0x66c8a6:c.instructions+=1;goto B66c8a6;
case 0x66c8a9:goto L66c8a9;
case 0x66c8ab:c.instructions+=1;goto B66c8ab;
case 0x66c8ad:goto L66c8ad;
case 0x66c8b4:c.instructions+=1;goto B66c8b4;
case 0x66c8b6:goto L66c8b6;
case 0x66c8b9:c.instructions+=4;goto B66c8b9;
case 0x66c8bc:c.instructions+=3;goto B66c8bc;
case 0x66c8bd:c.instructions+=2;goto B66c8bd;
case 0x66c8be:c.instructions+=1;goto B66c8be;
case 0x66c8c3:goto L66c8c3;
case 0x66c8c5:c.instructions+=2;goto B66c8c5;
case 0x66c8c8:c.instructions+=1;goto B66c8c8;
case 0x66c8ca:goto L66c8ca;
case 0x66c8cd:c.instructions+=4;goto B66c8cd;
case 0x66c8ce:c.instructions+=3;goto B66c8ce;
case 0x66c8d1:c.instructions+=2;goto B66c8d1;
case 0x66c8d4:c.instructions+=1;goto B66c8d4;
case 0x66c8d9:goto L66c8d9;
case 0x66c8dc:goto L66c8dc;
case 0x66c8e0:c.instructions+=1;goto B66c8e0;
case 0x66c8e2:goto L66c8e2;
case 0x66c8e5:c.instructions+=1;goto B66c8e5;
case 0x66c8ea:goto L66c8ea;
case 0x66c8eb:goto L66c8eb;
case 0x66c8ee:c.instructions+=5;goto B66c8ee;
case 0x66c8ef:c.instructions+=4;goto B66c8ef;
case 0x66c8f0:c.instructions+=3;goto B66c8f0;
case 0x66c8f1:c.instructions+=2;goto B66c8f1;
case 0x66c8f2:c.instructions+=1;goto B66c8f2;
case 0x66c8f5:goto L66c8f5;
case 0x66c8f7:c.instructions+=8;goto B66c8f7;
case 0x66c8f8:c.instructions+=7;goto B66c8f8;
case 0x66c8fa:c.instructions+=6;goto B66c8fa;
case 0x66c8fb:c.instructions+=5;goto B66c8fb;
case 0x66c8fe:c.instructions+=4;goto B66c8fe;
case 0x66c900:c.instructions+=3;goto B66c900;
case 0x66c901:c.instructions+=2;goto B66c901;
case 0x66c904:c.instructions+=1;goto B66c904;
case 0x66c906:goto L66c906;
case 0x66c908:c.instructions+=1;goto B66c908;
case 0x66c90a:goto L66c90a;
case 0x66c90c:c.instructions+=4;goto B66c90c;
case 0x66c90e:c.instructions+=3;goto B66c90e;
case 0x66c90f:c.instructions+=2;goto B66c90f;
case 0x66c911:c.instructions+=1;goto B66c911;
case 0x66c916:goto L66c916;
case 0x66c918:c.instructions+=2;goto B66c918;
case 0x66c91a:c.instructions+=1;goto B66c91a;
case 0x66c91c:goto L66c91c;
case 0x66c91f:c.instructions+=2;goto B66c91f;
case 0x66c922:c.instructions+=1;goto B66c922;
case 0x66c924:goto L66c924;
case 0x66c927:c.instructions+=1;goto B66c927;
case 0x66c929:goto L66c929;
case 0x66c92e:c.instructions+=1;goto B66c92e;
case 0x66c930:goto L66c930;
case 0x66c934:c.instructions+=2;goto B66c934;
case 0x66c936:c.instructions+=1;goto B66c936;
case 0x66c938:goto L66c938;
case 0x66c939:c.instructions+=4;goto B66c939;
case 0x66c93c:c.instructions+=3;goto B66c93c;
case 0x66c93e:c.instructions+=2;goto B66c93e;
case 0x66c93f:c.instructions+=1;goto B66c93f;
case 0x66c944:goto L66c944;
case 0x66c946:goto L66c946;
case 0x66c949:c.instructions+=2;goto B66c949;
case 0x66c94a:c.instructions+=1;goto B66c94a;
case 0x66c94f:goto L66c94f;
case 0x66c951:c.instructions+=1;goto B66c951;
case 0x66c953:goto L66c953;
case 0x66c954:c.instructions+=2;goto B66c954;
case 0x66c956:c.instructions+=1;goto B66c956;
case 0x66c95b:goto L66c95b;
case 0x66c95c:c.instructions+=3;goto B66c95c;
case 0x66c95d:c.instructions+=2;goto B66c95d;
case 0x66c95e:c.instructions+=1;goto B66c95e;
case 0x66c961:goto L66c961;
case 0x66c963:c.instructions+=9;goto B66c963;
case 0x66c964:c.instructions+=8;goto B66c964;
case 0x66c966:c.instructions+=7;goto B66c966;
case 0x66c967:c.instructions+=6;goto B66c967;
case 0x66c96a:c.instructions+=5;goto B66c96a;
case 0x66c96c:c.instructions+=4;goto B66c96c;
case 0x66c96e:c.instructions+=3;goto B66c96e;
case 0x66c971:c.instructions+=2;goto B66c971;
case 0x66c973:c.instructions+=1;goto B66c973;
case 0x66c978:goto L66c978;
case 0x66c97a:c.instructions+=1;goto B66c97a;
case 0x66c97c:goto L66c97c;
case 0x66c981:c.instructions+=1;goto B66c981;
case 0x66c983:goto L66c983;
case 0x66c986:c.instructions+=2;goto B66c986;
case 0x66c989:c.instructions+=1;goto B66c989;
case 0x66c98b:goto L66c98b;
case 0x66c98e:c.instructions+=1;goto B66c98e;
case 0x66c990:goto L66c990;
case 0x66c996:c.instructions+=12;goto B66c996;
case 0x66c998:c.instructions+=11;goto B66c998;
case 0x66c99c:c.instructions+=10;goto B66c99c;
case 0x66c99f:c.instructions+=9;goto B66c99f;
case 0x66c9a0:c.instructions+=8;goto B66c9a0;
case 0x66c9a3:c.instructions+=7;goto B66c9a3;
case 0x66c9a6:c.instructions+=6;goto B66c9a6;
case 0x66c9a9:c.instructions+=5;goto B66c9a9;
case 0x66c9ab:c.instructions+=4;goto B66c9ab;
case 0x66c9ae:c.instructions+=3;goto B66c9ae;
case 0x66c9b0:c.instructions+=2;goto B66c9b0;
case 0x66c9b3:c.instructions+=1;goto B66c9b3;
case 0x66c9b8:goto L66c9b8;
case 0x66c9b9:c.instructions+=2;goto B66c9b9;
case 0x66c9ba:c.instructions+=1;goto B66c9ba;
case 0x66c9bd:goto L66c9bd;
case 0x66c9bf:c.instructions+=7;goto B66c9bf;
case 0x66c9c0:c.instructions+=6;goto B66c9c0;
case 0x66c9c2:c.instructions+=5;goto B66c9c2;
case 0x66c9c5:c.instructions+=4;goto B66c9c5;
case 0x66c9c7:c.instructions+=3;goto B66c9c7;
case 0x66c9c8:c.instructions+=2;goto B66c9c8;
case 0x66c9cb:c.instructions+=1;goto B66c9cb;
case 0x66c9cd:goto L66c9cd;
case 0x66c9cf:goto L66c9cf;
case 0x66c9d2:c.instructions+=5;goto B66c9d2;
case 0x66c9d5:c.instructions+=4;goto B66c9d5;
case 0x66c9d6:c.instructions+=3;goto B66c9d6;
case 0x66c9d9:c.instructions+=2;goto B66c9d9;
case 0x66c9db:c.instructions+=1;goto B66c9db;
case 0x66c9dd:goto L66c9dd;
case 0x66c9e2:c.instructions+=1;goto B66c9e2;
case 0x66c9e4:goto L66c9e4;
case 0x66c9e6:c.instructions+=4;goto B66c9e6;
case 0x66c9e8:c.instructions+=3;goto B66c9e8;
case 0x66c9e9:c.instructions+=2;goto B66c9e9;
case 0x66c9eb:c.instructions+=1;goto B66c9eb;
case 0x66c9f0:goto L66c9f0;
case 0x66c9f2:c.instructions+=1;goto B66c9f2;
case 0x66c9f4:goto L66c9f4;
case 0x66c9f9:c.instructions+=1;goto B66c9f9;
case 0x66c9fb:goto L66c9fb;
case 0x66c9fe:c.instructions+=2;goto B66c9fe;
case 0x66ca00:c.instructions+=1;goto B66ca00;
case 0x66ca02:goto L66ca02;
case 0x66ca08:c.instructions+=11;goto B66ca08;
case 0x66ca0b:c.instructions+=10;goto B66ca0b;
case 0x66ca0c:c.instructions+=9;goto B66ca0c;
case 0x66ca0e:c.instructions+=8;goto B66ca0e;
case 0x66ca11:c.instructions+=7;goto B66ca11;
case 0x66ca14:c.instructions+=6;goto B66ca14;
case 0x66ca17:c.instructions+=5;goto B66ca17;
case 0x66ca19:c.instructions+=4;goto B66ca19;
case 0x66ca1c:c.instructions+=3;goto B66ca1c;
case 0x66ca1f:c.instructions+=2;goto B66ca1f;
case 0x66ca21:c.instructions+=1;goto B66ca21;
case 0x66ca22:goto L66ca22;
case 0x66ca23:goto L66ca23;
case 0x66ca24:c.instructions+=2;goto B66ca24;
case 0x66ca25:c.instructions+=1;goto B66ca25;
case 0x66ca28:goto L66ca28;
case 0x66ca2a:c.instructions+=13;goto B66ca2a;
case 0x66ca2b:c.instructions+=12;goto B66ca2b;
case 0x66ca2d:c.instructions+=11;goto B66ca2d;
case 0x66ca30:c.instructions+=10;goto B66ca30;
case 0x66ca33:c.instructions+=9;goto B66ca33;
case 0x66ca34:c.instructions+=8;goto B66ca34;
case 0x66ca37:c.instructions+=7;goto B66ca37;
case 0x66ca38:c.instructions+=6;goto B66ca38;
case 0x66ca3b:c.instructions+=5;goto B66ca3b;
case 0x66ca3c:c.instructions+=4;goto B66ca3c;
case 0x66ca3e:c.instructions+=3;goto B66ca3e;
case 0x66ca3f:c.instructions+=2;goto B66ca3f;
case 0x66ca41:c.instructions+=1;goto B66ca41;
case 0x66ca43:goto L66ca43;
case 0x66ca45:c.instructions+=3;goto B66ca45;
case 0x66ca47:c.instructions+=2;goto B66ca47;
case 0x66ca4a:c.instructions+=1;goto B66ca4a;
case 0x66ca4c:goto L66ca4c;
case 0x66ca52:c.instructions+=15;goto B66ca52;
case 0x66ca54:c.instructions+=14;goto B66ca54;
case 0x66ca57:c.instructions+=13;goto B66ca57;
case 0x66ca59:c.instructions+=12;goto B66ca59;
case 0x66ca5f:c.instructions+=11;goto B66ca5f;
case 0x66ca61:c.instructions+=10;goto B66ca61;
case 0x66ca64:c.instructions+=9;goto B66ca64;
case 0x66ca66:c.instructions+=8;goto B66ca66;
case 0x66ca67:c.instructions+=7;goto B66ca67;
case 0x66ca6e:c.instructions+=6;goto B66ca6e;
case 0x66ca70:c.instructions+=5;goto B66ca70;
case 0x66ca71:c.instructions+=4;goto B66ca71;
case 0x66ca72:c.instructions+=3;goto B66ca72;
case 0x66ca74:c.instructions+=2;goto B66ca74;
case 0x66ca77:c.instructions+=1;goto B66ca77;
case 0x66ca7c:goto L66ca7c;
case 0x66ca7e:c.instructions+=2;goto B66ca7e;
case 0x66ca81:c.instructions+=1;goto B66ca81;
case 0x66ca87:goto L66ca87;
case 0x66ca89:goto L66ca89;
case 0x66ca8c:c.instructions+=3;goto B66ca8c;
case 0x66ca8f:c.instructions+=2;goto B66ca8f;
case 0x66ca91:c.instructions+=1;goto B66ca91;
case 0x66ca97:goto L66ca97;
case 0x66ca9b:c.instructions+=1;goto B66ca9b;
case 0x66caa1:goto L66caa1;
case 0x66caa3:c.instructions+=1;goto B66caa3;
case 0x66caa9:goto L66caa9;
case 0x66caad:c.instructions+=1;goto B66caad;
case 0x66caaf:goto L66caaf;
case 0x66cab0:c.instructions+=5;goto B66cab0;
case 0x66cab3:c.instructions+=4;goto B66cab3;
case 0x66cab5:c.instructions+=3;goto B66cab5;
case 0x66cab6:c.instructions+=2;goto B66cab6;
case 0x66cab8:c.instructions+=1;goto B66cab8;
case 0x66cabd:goto L66cabd;
case 0x66cac2:goto L66cac2;
case 0x66cac5:c.instructions+=2;goto B66cac5;
case 0x66cac6:c.instructions+=1;goto B66cac6;
case 0x66cacc:goto L66cacc;
case 0x66cace:c.instructions+=5;goto B66cace;
case 0x66cad1:c.instructions+=4;goto B66cad1;
case 0x66cad4:c.instructions+=3;goto B66cad4;
case 0x66cad6:c.instructions+=2;goto B66cad6;
case 0x66cadd:c.instructions+=1;goto B66cadd;
case 0x66cadf:goto L66cadf;
case 0x66cae2:goto L66cae2;
case 0x66cae3:c.instructions+=1;goto B66cae3;
case 0x66cae9:goto L66cae9;
case 0x66caea:c.instructions+=1;goto B66caea;
case 0x66caec:goto L66caec;
case 0x66caed:c.instructions+=1;goto B66caed;
case 0x66caf3:goto L66caf3;
case 0x66caf6:c.instructions+=1;goto B66caf6;
case 0x66caf8:goto L66caf8;
case 0x66cafa:c.instructions+=5;goto B66cafa;
case 0x66cafd:c.instructions+=4;goto B66cafd;
case 0x66cb00:c.instructions+=3;goto B66cb00;
case 0x66cb02:c.instructions+=2;goto B66cb02;
case 0x66cb05:c.instructions+=1;goto B66cb05;
case 0x66cb07:goto L66cb07;
case 0x66cb09:goto L66cb09;
case 0x66cb0b:c.instructions+=1;goto B66cb0b;
case 0x66cb0e:goto L66cb0e;
case 0x66cb10:goto L66cb10;
case 0x66cb15:goto L66cb15;
case 0x66cb17:c.instructions+=1;goto B66cb17;
case 0x66cb1d:goto L66cb1d;
case 0x66cb1f:c.instructions+=1;goto B66cb1f;
case 0x66cb22:goto L66cb22;
case 0x66cb25:c.instructions+=2;goto B66cb25;
case 0x66cb27:c.instructions+=1;goto B66cb27;
case 0x66cb29:goto L66cb29;
case 0x66cb2c:c.instructions+=2;goto B66cb2c;
case 0x66cb2e:c.instructions+=1;goto B66cb2e;
case 0x66cb30:goto L66cb30;
case 0x66cb33:c.instructions+=4;goto B66cb33;
case 0x66cb35:c.instructions+=3;goto B66cb35;
case 0x66cb38:c.instructions+=2;goto B66cb38;
case 0x66cb39:c.instructions+=1;goto B66cb39;
case 0x66cb3b:goto L66cb3b;
case 0x66cb3f:c.instructions+=3;goto B66cb3f;
case 0x66cb41:c.instructions+=2;goto B66cb41;
case 0x66cb42:c.instructions+=1;goto B66cb42;
case 0x66cb44:goto L66cb44;
case 0x66cb49:goto L66cb49;
case 0x66cb4b:c.instructions+=1;goto B66cb4b;
case 0x66cb51:goto L66cb51;
case 0x66cb54:c.instructions+=2;goto B66cb54;
case 0x66cb57:c.instructions+=1;goto B66cb57;
case 0x66cb5a:goto L66cb5a;
case 0x66cb5d:c.instructions+=2;goto B66cb5d;
case 0x66cb5f:c.instructions+=1;goto B66cb5f;
case 0x66cb61:goto L66cb61;
case 0x66cb64:c.instructions+=3;goto B66cb64;
case 0x66cb66:c.instructions+=2;goto B66cb66;
case 0x66cb68:c.instructions+=1;goto B66cb68;
case 0x66cb6b:goto L66cb6b;
case 0x66cb6e:c.instructions+=1;goto B66cb6e;
case 0x66cb73:goto L66cb73;
case 0x66cb75:c.instructions+=3;goto B66cb75;
case 0x66cb78:c.instructions+=2;goto B66cb78;
case 0x66cb7b:c.instructions+=1;goto B66cb7b;
case 0x66cb7d:goto L66cb7d;
case 0x66cb80:c.instructions+=3;goto B66cb80;
case 0x66cb84:c.instructions+=2;goto B66cb84;
case 0x66cb87:c.instructions+=1;goto B66cb87;
case 0x66cb89:goto L66cb89;
case 0x66cb8b:goto L66cb8b;
case 0x66cb8d:c.instructions+=1;goto B66cb8d;
case 0x66cb8f:goto L66cb8f;
case 0x66cb92:c.instructions+=2;goto B66cb92;
case 0x66cb95:c.instructions+=1;goto B66cb95;
case 0x66cb98:goto L66cb98;
case 0x66cb9b:c.instructions+=2;goto B66cb9b;
case 0x66cb9d:c.instructions+=1;goto B66cb9d;
case 0x66cb9f:goto L66cb9f;
case 0x66cba2:c.instructions+=2;goto B66cba2;
case 0x66cba4:c.instructions+=1;goto B66cba4;
case 0x66cba6:goto L66cba6;
case 0x66cba9:c.instructions+=5;goto B66cba9;
case 0x66cbaf:c.instructions+=4;goto B66cbaf;
case 0x66cbb1:c.instructions+=3;goto B66cbb1;
case 0x66cbb3:c.instructions+=2;goto B66cbb3;
case 0x66cbb6:c.instructions+=1;goto B66cbb6;
case 0x66cbb8:goto L66cbb8;
case 0x66cbba:c.instructions+=1;goto B66cbba;
case 0x66cbbc:goto L66cbbc;
case 0x66cbbe:goto L66cbbe;
case 0x66cbc0:c.instructions+=3;goto B66cbc0;
case 0x66cbc3:c.instructions+=2;goto B66cbc3;
case 0x66cbc4:c.instructions+=1;goto B66cbc4;
case 0x66cbc6:goto L66cbc6;
case 0x66cbc9:c.instructions+=3;goto B66cbc9;
case 0x66cbcd:c.instructions+=2;goto B66cbcd;
case 0x66cbd0:c.instructions+=1;goto B66cbd0;
case 0x66cbd2:goto L66cbd2;
case 0x66cbd5:c.instructions+=2;goto B66cbd5;
case 0x66cbd8:c.instructions+=1;goto B66cbd8;
case 0x66cbdd:goto L66cbdd;
case 0x66cbdf:goto L66cbdf;
case 0x66cbe4:goto L66cbe4;
case 0x66cbe5:c.instructions+=4;goto B66cbe5;
case 0x66cbe6:c.instructions+=3;goto B66cbe6;
case 0x66cbe7:c.instructions+=2;goto B66cbe7;
case 0x66cbe8:c.instructions+=1;goto B66cbe8;
case 0x66cbeb:goto L66cbeb;
case 0x66cbed:c.instructions+=9;goto B66cbed;
case 0x66cbee:c.instructions+=8;goto B66cbee;
case 0x66cbf0:c.instructions+=7;goto B66cbf0;
case 0x66cbf1:c.instructions+=6;goto B66cbf1;
case 0x66cbf2:c.instructions+=5;goto B66cbf2;
case 0x66cbf3:c.instructions+=4;goto B66cbf3;
case 0x66cbf5:c.instructions+=3;goto B66cbf5;
case 0x66cbf8:c.instructions+=2;goto B66cbf8;
case 0x66cbfb:c.instructions+=1;goto B66cbfb;
case 0x66cc01:goto L66cc01;
case 0x66cc02:c.instructions+=3;goto B66cc02;
case 0x66cc05:c.instructions+=2;goto B66cc05;
case 0x66cc07:c.instructions+=1;goto B66cc07;
case 0x66cc0d:goto L66cc0d;
case 0x66cc10:c.instructions+=4;goto B66cc10;
case 0x66cc11:c.instructions+=3;goto B66cc11;
case 0x66cc13:c.instructions+=2;goto B66cc13;
case 0x66cc16:c.instructions+=1;goto B66cc16;
case 0x66cc1b:goto L66cc1b;
case 0x66cc1d:c.instructions+=1;goto B66cc1d;
case 0x66cc23:goto L66cc23;
case 0x66cc26:c.instructions+=3;goto B66cc26;
case 0x66cc29:c.instructions+=2;goto B66cc29;
case 0x66cc2b:c.instructions+=1;goto B66cc2b;
case 0x66cc31:goto L66cc31;
case 0x66cc35:c.instructions+=1;goto B66cc35;
case 0x66cc3b:goto L66cc3b;
case 0x66cc3e:c.instructions+=1;goto B66cc3e;
case 0x66cc44:goto L66cc44;
case 0x66cc47:c.instructions+=2;goto B66cc47;
case 0x66cc48:c.instructions+=1;goto B66cc48;
case 0x66cc4e:goto L66cc4e;
case 0x66cc50:c.instructions+=8;goto B66cc50;
case 0x66cc53:c.instructions+=7;goto B66cc53;
case 0x66cc55:c.instructions+=6;goto B66cc55;
case 0x66cc57:c.instructions+=5;goto B66cc57;
case 0x66cc5a:c.instructions+=4;goto B66cc5a;
case 0x66cc5b:c.instructions+=3;goto B66cc5b;
case 0x66cc5d:c.instructions+=2;goto B66cc5d;
case 0x66cc60:c.instructions+=1;goto B66cc60;
case 0x66cc62:goto L66cc62;
case 0x66cc65:goto L66cc65;
case 0x66cc68:c.instructions+=4;goto B66cc68;
case 0x66cc6b:c.instructions+=3;goto B66cc6b;
case 0x66cc6d:c.instructions+=2;goto B66cc6d;
case 0x66cc70:c.instructions+=1;goto B66cc70;
case 0x66cc72:goto L66cc72;
case 0x66cc74:goto L66cc74;
case 0x66cc76:c.instructions+=2;goto B66cc76;
case 0x66cc79:c.instructions+=1;goto B66cc79;
case 0x66cc7a:goto L66cc7a;
case 0x66cc7c:goto L66cc7c;
case 0x66cc7e:goto L66cc7e;
case 0x66cc7f:c.instructions+=1;goto B66cc7f;
case 0x66cc81:goto L66cc81;
case 0x66cc82:c.instructions+=1;goto B66cc82;
case 0x66cc88:goto L66cc88;
case 0x66cc8b:c.instructions+=2;goto B66cc8b;
case 0x66cc8d:c.instructions+=1;goto B66cc8d;
case 0x66cc90:goto L66cc90;
case 0x66cc93:c.instructions+=2;goto B66cc93;
case 0x66cc95:c.instructions+=1;goto B66cc95;
case 0x66cc97:goto L66cc97;
case 0x66cc9a:c.instructions+=2;goto B66cc9a;
case 0x66cc9d:c.instructions+=1;goto B66cc9d;
case 0x66cc9f:goto L66cc9f;
case 0x66cca2:c.instructions+=4;goto B66cca2;
case 0x66cca4:c.instructions+=3;goto B66cca4;
case 0x66cca7:c.instructions+=2;goto B66cca7;
case 0x66cca8:c.instructions+=1;goto B66cca8;
case 0x66ccaa:goto L66ccaa;
case 0x66ccad:c.instructions+=3;goto B66ccad;
case 0x66ccb1:c.instructions+=2;goto B66ccb1;
case 0x66ccb2:c.instructions+=1;goto B66ccb2;
case 0x66ccb4:goto L66ccb4;
case 0x66ccb6:goto L66ccb6;
case 0x66ccb9:c.instructions+=2;goto B66ccb9;
case 0x66ccbb:c.instructions+=1;goto B66ccbb;
case 0x66ccbe:goto L66ccbe;
case 0x66ccc1:c.instructions+=2;goto B66ccc1;
case 0x66ccc3:c.instructions+=1;goto B66ccc3;
case 0x66ccc5:goto L66ccc5;
case 0x66ccc8:c.instructions+=2;goto B66ccc8;
case 0x66cccb:c.instructions+=1;goto B66cccb;
case 0x66cccd:goto L66cccd;
case 0x66ccd0:c.instructions+=4;goto B66ccd0;
case 0x66ccd2:c.instructions+=3;goto B66ccd2;
case 0x66ccd5:c.instructions+=2;goto B66ccd5;
case 0x66ccd6:c.instructions+=1;goto B66ccd6;
case 0x66ccd8:goto L66ccd8;
case 0x66ccdb:c.instructions+=3;goto B66ccdb;
case 0x66ccdf:c.instructions+=2;goto B66ccdf;
case 0x66cce0:c.instructions+=1;goto B66cce0;
case 0x66cce2:goto L66cce2;
case 0x66cce4:goto L66cce4;
case 0x66cce6:c.instructions+=2;goto B66cce6;
case 0x66cce9:c.instructions+=1;goto B66cce9;
case 0x66ccec:goto L66ccec;
case 0x66ccef:c.instructions+=2;goto B66ccef;
case 0x66ccf1:c.instructions+=1;goto B66ccf1;
case 0x66ccf3:goto L66ccf3;
case 0x66ccf6:c.instructions+=2;goto B66ccf6;
case 0x66ccf9:c.instructions+=1;goto B66ccf9;
case 0x66ccfb:goto L66ccfb;
case 0x66ccfd:c.instructions+=8;goto B66ccfd;
case 0x66cd00:c.instructions+=7;goto B66cd00;
case 0x66cd03:c.instructions+=6;goto B66cd03;
case 0x66cd06:c.instructions+=5;goto B66cd06;
case 0x66cd09:c.instructions+=4;goto B66cd09;
case 0x66cd0b:c.instructions+=3;goto B66cd0b;
case 0x66cd0e:c.instructions+=2;goto B66cd0e;
case 0x66cd0f:c.instructions+=1;goto B66cd0f;
case 0x66cd11:goto L66cd11;
case 0x66cd14:c.instructions+=3;goto B66cd14;
case 0x66cd18:c.instructions+=2;goto B66cd18;
case 0x66cd19:c.instructions+=1;goto B66cd19;
case 0x66cd1b:goto L66cd1b;
case 0x66cd1d:goto L66cd1d;
case 0x66cd24:goto L66cd24;
case 0x66cd25:goto L66cd25;
case 0x66cd28:c.instructions+=4;goto B66cd28;
case 0x66cd29:c.instructions+=3;goto B66cd29;
case 0x66cd2a:c.instructions+=2;goto B66cd2a;
case 0x66cd2b:c.instructions+=1;goto B66cd2b;
case 0x66cd2e:goto L66cd2e;
case 0x66cd30:c.instructions+=10;goto B66cd30;
case 0x66cd31:c.instructions+=9;goto B66cd31;
case 0x66cd33:c.instructions+=8;goto B66cd33;
case 0x66cd34:c.instructions+=7;goto B66cd34;
case 0x66cd37:c.instructions+=6;goto B66cd37;
case 0x66cd38:c.instructions+=5;goto B66cd38;
case 0x66cd3b:c.instructions+=4;goto B66cd3b;
case 0x66cd3d:c.instructions+=3;goto B66cd3d;
case 0x66cd3e:c.instructions+=2;goto B66cd3e;
case 0x66cd41:c.instructions+=1;goto B66cd41;
case 0x66cd43:goto L66cd43;
case 0x66cd45:c.instructions+=1;goto B66cd45;
case 0x66cd47:goto L66cd47;
case 0x66cd4d:c.instructions+=17;goto B66cd4d;
case 0x66cd4f:c.instructions+=16;goto B66cd4f;
case 0x66cd56:c.instructions+=15;goto B66cd56;
case 0x66cd58:c.instructions+=14;goto B66cd58;
case 0x66cd5e:c.instructions+=13;goto B66cd5e;
case 0x66cd60:c.instructions+=12;goto B66cd60;
case 0x66cd63:c.instructions+=11;goto B66cd63;
case 0x66cd65:c.instructions+=10;goto B66cd65;
case 0x66cd67:c.instructions+=9;goto B66cd67;
case 0x66cd68:c.instructions+=8;goto B66cd68;
case 0x66cd6b:c.instructions+=7;goto B66cd6b;
case 0x66cd6d:c.instructions+=6;goto B66cd6d;
case 0x66cd6f:c.instructions+=5;goto B66cd6f;
case 0x66cd71:c.instructions+=4;goto B66cd71;
case 0x66cd74:c.instructions+=3;goto B66cd74;
case 0x66cd75:c.instructions+=2;goto B66cd75;
case 0x66cd77:c.instructions+=1;goto B66cd77;
case 0x66cd7c:goto L66cd7c;
case 0x66cd7e:c.instructions+=2;goto B66cd7e;
case 0x66cd80:c.instructions+=1;goto B66cd80;
case 0x66cd82:goto L66cd82;
case 0x66cd85:c.instructions+=2;goto B66cd85;
case 0x66cd89:c.instructions+=1;goto B66cd89;
case 0x66cd8b:goto L66cd8b;
case 0x66cd8e:c.instructions+=1;goto B66cd8e;
case 0x66cd90:goto L66cd90;
case 0x66cd94:c.instructions+=1;goto B66cd94;
case 0x66cd96:goto L66cd96;
case 0x66cd9a:c.instructions+=4;goto B66cd9a;
case 0x66cd9b:c.instructions+=3;goto B66cd9b;
case 0x66cd9e:c.instructions+=2;goto B66cd9e;
case 0x66cda0:c.instructions+=1;goto B66cda0;
case 0x66cda2:goto L66cda2;
case 0x66cda4:c.instructions+=2;goto B66cda4;
case 0x66cda5:c.instructions+=1;goto B66cda5;
case 0x66cdaa:goto L66cdaa;
case 0x66cdac:goto L66cdac;
case 0x66cdae:c.instructions+=2;goto B66cdae;
case 0x66cdaf:c.instructions+=1;goto B66cdaf;
case 0x66cdb4:goto L66cdb4;
case 0x66cdb6:c.instructions+=1;goto B66cdb6;
case 0x66cdb8:goto L66cdb8;
case 0x66cdb9:c.instructions+=2;goto B66cdb9;
case 0x66cdbb:c.instructions+=1;goto B66cdbb;
case 0x66cdc0:goto L66cdc0;
case 0x66cdc2:goto L66cdc2;
case 0x66cdc7:goto L66cdc7;
case 0x66cdc8:c.instructions+=4;goto B66cdc8;
case 0x66cdc9:c.instructions+=3;goto B66cdc9;
case 0x66cdca:c.instructions+=2;goto B66cdca;
case 0x66cdcb:c.instructions+=1;goto B66cdcb;
case 0x66cdce:goto L66cdce;
case 0x66cdd0:c.instructions+=4;goto B66cdd0;
case 0x66cdd1:c.instructions+=3;goto B66cdd1;
case 0x66cdd3:c.instructions+=2;goto B66cdd3;
case 0x66cdd7:c.instructions+=1;goto B66cdd7;
case 0x66cdd9:goto L66cdd9;
case 0x66cddb:c.instructions+=1;goto B66cddb;
case 0x66cddd:goto L66cddd;
case 0x66cde1:c.instructions+=1;goto B66cde1;
case 0x66cde3:goto L66cde3;
case 0x66cde6:c.instructions+=4;goto B66cde6;
case 0x66cde8:c.instructions+=3;goto B66cde8;
case 0x66cdea:c.instructions+=2;goto B66cdea;
case 0x66cded:c.instructions+=1;goto B66cded;
case 0x66cdf2:goto L66cdf2;
case 0x66cdf4:c.instructions+=1;goto B66cdf4;
case 0x66cdf6:goto L66cdf6;
case 0x66cdf9:c.instructions+=3;goto B66cdf9;
case 0x66cdfc:c.instructions+=2;goto B66cdfc;
case 0x66cdfe:c.instructions+=1;goto B66cdfe;
case 0x66ce00:goto L66ce00;
case 0x66ce04:c.instructions+=1;goto B66ce04;
case 0x66ce06:goto L66ce06;
case 0x66ce09:c.instructions+=1;goto B66ce09;
case 0x66ce0b:goto L66ce0b;
case 0x66ce0f:c.instructions+=1;goto B66ce0f;
case 0x66ce11:goto L66ce11;
case 0x66ce14:c.instructions+=5;goto B66ce14;
case 0x66ce17:c.instructions+=4;goto B66ce17;
case 0x66ce19:c.instructions+=3;goto B66ce19;
case 0x66ce1a:c.instructions+=2;goto B66ce1a;
case 0x66ce1d:c.instructions+=1;goto B66ce1d;
case 0x66ce22:goto L66ce22;
case 0x66ce24:goto L66ce24;
case 0x66ce29:goto L66ce29;
case 0x66ce2a:c.instructions+=1;goto B66ce2a;
case 0x66ce2d:goto L66ce2d;
case 0x66ce2f:c.instructions+=10;goto B66ce2f;
case 0x66ce30:c.instructions+=9;goto B66ce30;
case 0x66ce32:c.instructions+=8;goto B66ce32;
case 0x66ce33:c.instructions+=7;goto B66ce33;
case 0x66ce36:c.instructions+=6;goto B66ce36;
case 0x66ce37:c.instructions+=5;goto B66ce37;
case 0x66ce3a:c.instructions+=4;goto B66ce3a;
case 0x66ce3c:c.instructions+=3;goto B66ce3c;
case 0x66ce3d:c.instructions+=2;goto B66ce3d;
case 0x66ce40:c.instructions+=1;goto B66ce40;
case 0x66ce42:goto L66ce42;
case 0x66ce44:c.instructions+=1;goto B66ce44;
case 0x66ce46:goto L66ce46;
case 0x66ce4c:c.instructions+=17;goto B66ce4c;
case 0x66ce4e:c.instructions+=16;goto B66ce4e;
case 0x66ce55:c.instructions+=15;goto B66ce55;
case 0x66ce57:c.instructions+=14;goto B66ce57;
case 0x66ce5d:c.instructions+=13;goto B66ce5d;
case 0x66ce5f:c.instructions+=12;goto B66ce5f;
case 0x66ce62:c.instructions+=11;goto B66ce62;
case 0x66ce64:c.instructions+=10;goto B66ce64;
case 0x66ce66:c.instructions+=9;goto B66ce66;
case 0x66ce67:c.instructions+=8;goto B66ce67;
case 0x66ce6a:c.instructions+=7;goto B66ce6a;
case 0x66ce6c:c.instructions+=6;goto B66ce6c;
case 0x66ce6e:c.instructions+=5;goto B66ce6e;
case 0x66ce70:c.instructions+=4;goto B66ce70;
case 0x66ce73:c.instructions+=3;goto B66ce73;
case 0x66ce74:c.instructions+=2;goto B66ce74;
case 0x66ce76:c.instructions+=1;goto B66ce76;
case 0x66ce7b:goto L66ce7b;
case 0x66ce7d:c.instructions+=2;goto B66ce7d;
case 0x66ce7f:c.instructions+=1;goto B66ce7f;
case 0x66ce81:goto L66ce81;
case 0x66ce84:c.instructions+=2;goto B66ce84;
case 0x66ce88:c.instructions+=1;goto B66ce88;
case 0x66ce8a:goto L66ce8a;
case 0x66ce8d:c.instructions+=1;goto B66ce8d;
case 0x66ce8f:goto L66ce8f;
case 0x66ce93:c.instructions+=1;goto B66ce93;
case 0x66ce95:goto L66ce95;
case 0x66ce99:c.instructions+=4;goto B66ce99;
case 0x66ce9a:c.instructions+=3;goto B66ce9a;
case 0x66ce9d:c.instructions+=2;goto B66ce9d;
case 0x66ce9f:c.instructions+=1;goto B66ce9f;
case 0x66cea1:goto L66cea1;
case 0x66cea3:c.instructions+=2;goto B66cea3;
case 0x66cea4:c.instructions+=1;goto B66cea4;
case 0x66cea9:goto L66cea9;
case 0x66ceab:goto L66ceab;
case 0x66cead:c.instructions+=2;goto B66cead;
case 0x66ceae:c.instructions+=1;goto B66ceae;
case 0x66ceb3:goto L66ceb3;
case 0x66ceb5:c.instructions+=1;goto B66ceb5;
case 0x66ceb7:goto L66ceb7;
case 0x66ceb8:c.instructions+=2;goto B66ceb8;
case 0x66ceba:c.instructions+=1;goto B66ceba;
case 0x66cebf:goto L66cebf;
case 0x66cec1:goto L66cec1;
case 0x66cec6:goto L66cec6;
case 0x66cec7:c.instructions+=4;goto B66cec7;
case 0x66cec8:c.instructions+=3;goto B66cec8;
case 0x66cec9:c.instructions+=2;goto B66cec9;
case 0x66ceca:c.instructions+=1;goto B66ceca;
case 0x66cecd:goto L66cecd;
case 0x66cecf:c.instructions+=4;goto B66cecf;
case 0x66ced0:c.instructions+=3;goto B66ced0;
case 0x66ced2:c.instructions+=2;goto B66ced2;
case 0x66ced6:c.instructions+=1;goto B66ced6;
case 0x66ced8:goto L66ced8;
case 0x66ceda:c.instructions+=1;goto B66ceda;
case 0x66cedc:goto L66cedc;
case 0x66cee0:c.instructions+=1;goto B66cee0;
case 0x66cee2:goto L66cee2;
case 0x66cee5:c.instructions+=4;goto B66cee5;
case 0x66cee7:c.instructions+=3;goto B66cee7;
case 0x66cee9:c.instructions+=2;goto B66cee9;
case 0x66ceec:c.instructions+=1;goto B66ceec;
case 0x66cef1:goto L66cef1;
case 0x66cef3:c.instructions+=1;goto B66cef3;
case 0x66cef5:goto L66cef5;
case 0x66cef8:c.instructions+=3;goto B66cef8;
case 0x66cefb:c.instructions+=2;goto B66cefb;
case 0x66cefd:c.instructions+=1;goto B66cefd;
case 0x66ceff:goto L66ceff;
case 0x66cf03:c.instructions+=1;goto B66cf03;
case 0x66cf05:goto L66cf05;
case 0x66cf08:c.instructions+=1;goto B66cf08;
case 0x66cf0a:goto L66cf0a;
case 0x66cf0e:c.instructions+=1;goto B66cf0e;
case 0x66cf10:goto L66cf10;
case 0x66cf13:c.instructions+=5;goto B66cf13;
case 0x66cf16:c.instructions+=4;goto B66cf16;
case 0x66cf18:c.instructions+=3;goto B66cf18;
case 0x66cf19:c.instructions+=2;goto B66cf19;
case 0x66cf1c:c.instructions+=1;goto B66cf1c;
case 0x66cf21:goto L66cf21;
case 0x66cf23:goto L66cf23;
case 0x66cf28:goto L66cf28;
case 0x66cf29:c.instructions+=1;goto B66cf29;
case 0x66cf2c:goto L66cf2c;
case 0x66cf2e:c.instructions+=10;goto B66cf2e;
case 0x66cf2f:c.instructions+=9;goto B66cf2f;
case 0x66cf31:c.instructions+=8;goto B66cf31;
case 0x66cf32:c.instructions+=7;goto B66cf32;
case 0x66cf35:c.instructions+=6;goto B66cf35;
case 0x66cf36:c.instructions+=5;goto B66cf36;
case 0x66cf39:c.instructions+=4;goto B66cf39;
case 0x66cf3b:c.instructions+=3;goto B66cf3b;
case 0x66cf3c:c.instructions+=2;goto B66cf3c;
case 0x66cf3f:c.instructions+=1;goto B66cf3f;
case 0x66cf41:goto L66cf41;
case 0x66cf43:c.instructions+=1;goto B66cf43;
case 0x66cf45:goto L66cf45;
case 0x66cf4b:c.instructions+=17;goto B66cf4b;
case 0x66cf4d:c.instructions+=16;goto B66cf4d;
case 0x66cf54:c.instructions+=15;goto B66cf54;
case 0x66cf56:c.instructions+=14;goto B66cf56;
case 0x66cf5c:c.instructions+=13;goto B66cf5c;
case 0x66cf5e:c.instructions+=12;goto B66cf5e;
case 0x66cf61:c.instructions+=11;goto B66cf61;
case 0x66cf63:c.instructions+=10;goto B66cf63;
case 0x66cf65:c.instructions+=9;goto B66cf65;
case 0x66cf66:c.instructions+=8;goto B66cf66;
case 0x66cf69:c.instructions+=7;goto B66cf69;
case 0x66cf6b:c.instructions+=6;goto B66cf6b;
case 0x66cf6d:c.instructions+=5;goto B66cf6d;
case 0x66cf6f:c.instructions+=4;goto B66cf6f;
case 0x66cf72:c.instructions+=3;goto B66cf72;
case 0x66cf73:c.instructions+=2;goto B66cf73;
case 0x66cf75:c.instructions+=1;goto B66cf75;
case 0x66cf7a:goto L66cf7a;
case 0x66cf7c:c.instructions+=2;goto B66cf7c;
case 0x66cf7e:c.instructions+=1;goto B66cf7e;
case 0x66cf80:goto L66cf80;
case 0x66cf83:c.instructions+=2;goto B66cf83;
case 0x66cf87:c.instructions+=1;goto B66cf87;
case 0x66cf89:goto L66cf89;
case 0x66cf8c:c.instructions+=1;goto B66cf8c;
case 0x66cf8e:goto L66cf8e;
case 0x66cf92:c.instructions+=1;goto B66cf92;
case 0x66cf94:goto L66cf94;
case 0x66cf98:c.instructions+=4;goto B66cf98;
case 0x66cf99:c.instructions+=3;goto B66cf99;
case 0x66cf9c:c.instructions+=2;goto B66cf9c;
case 0x66cf9e:c.instructions+=1;goto B66cf9e;
case 0x66cfa0:goto L66cfa0;
case 0x66cfa2:c.instructions+=2;goto B66cfa2;
case 0x66cfa3:c.instructions+=1;goto B66cfa3;
case 0x66cfa8:goto L66cfa8;
case 0x66cfaa:goto L66cfaa;
case 0x66cfac:c.instructions+=2;goto B66cfac;
case 0x66cfad:c.instructions+=1;goto B66cfad;
case 0x66cfb2:goto L66cfb2;
case 0x66cfb4:c.instructions+=1;goto B66cfb4;
case 0x66cfb6:goto L66cfb6;
case 0x66cfb7:c.instructions+=2;goto B66cfb7;
case 0x66cfb9:c.instructions+=1;goto B66cfb9;
case 0x66cfbe:goto L66cfbe;
case 0x66cfc0:goto L66cfc0;
case 0x66cfc5:goto L66cfc5;
case 0x66cfc6:c.instructions+=4;goto B66cfc6;
case 0x66cfc7:c.instructions+=3;goto B66cfc7;
case 0x66cfc8:c.instructions+=2;goto B66cfc8;
case 0x66cfc9:c.instructions+=1;goto B66cfc9;
case 0x66cfcc:goto L66cfcc;
case 0x66cfce:c.instructions+=4;goto B66cfce;
case 0x66cfcf:c.instructions+=3;goto B66cfcf;
case 0x66cfd1:c.instructions+=2;goto B66cfd1;
case 0x66cfd5:c.instructions+=1;goto B66cfd5;
case 0x66cfd7:goto L66cfd7;
case 0x66cfd9:c.instructions+=1;goto B66cfd9;
case 0x66cfdb:goto L66cfdb;
case 0x66cfdf:c.instructions+=1;goto B66cfdf;
case 0x66cfe1:goto L66cfe1;
case 0x66cfe4:c.instructions+=4;goto B66cfe4;
case 0x66cfe6:c.instructions+=3;goto B66cfe6;
case 0x66cfe8:c.instructions+=2;goto B66cfe8;
case 0x66cfeb:c.instructions+=1;goto B66cfeb;
case 0x66cff0:goto L66cff0;
case 0x66cff2:c.instructions+=1;goto B66cff2;
case 0x66cff4:goto L66cff4;
case 0x66cff7:c.instructions+=3;goto B66cff7;
case 0x66cffa:c.instructions+=2;goto B66cffa;
case 0x66cffc:c.instructions+=1;goto B66cffc;
case 0x66cffe:goto L66cffe;
default:missing_instruction(c.pc);}
B66c001:L66c001:{c.instructions+=1;NFSU2_TR(0x66c001);
if(r1(R+518)){{goto L66c1fd;}}
}
B66c007:L66c007:{c.instructions+=5;NFSU2_TR(0x66c007);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B66c00b:{NFSU2_TR(0x66c00b);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c00d:{NFSU2_TR(0x66c00d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c010:{NFSU2_TR(0x66c010);
__builtin_memmove((R+4),(R+24),4);
}
B66c012:{NFSU2_TR(0x66c012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c017ull));
TAIL_STATIC(0x65be0du,65b);
}
B66c017:L66c017:{c.instructions+=3;NFSU2_TR(0x66c017);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c019:{NFSU2_TR(0x66c019);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c01c:{NFSU2_TR(0x66c01c);
if(r1(R+518)){{goto L66c1fd;}}
}
B66c022:L66c022:{c.instructions+=3;NFSU2_TR(0x66c022);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66c026:{NFSU2_TR(0x66c026);
u8 U[4];
__builtin_memmove((U+0),(R+0),2);
w2(U+2,u16(u32(r2(R+12))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B66c029:{NFSU2_TR(0x66c029);
if(r1(R+518)){{goto L66c123;}}
}
B66c02f:L66c02f:{c.instructions+=2;NFSU2_TR(0x66c02f);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B66c033:{NFSU2_TR(0x66c033);
if(r1(R+518)){{goto L66c0a8;}}
}
B66c035:L66c035:{c.instructions+=5;NFSU2_TR(0x66c035);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c03b:{NFSU2_TR(0x66c03b);
w4(R+0,u32(r2(R+0)));
}
B66c03e:{NFSU2_TR(0x66c03e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66c044:{NFSU2_TR(0x66c044);
u8 U[24];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(u32(0x0ull))));
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B66c049:{NFSU2_TR(0x66c049);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66c0a8;}}
}
B66c04b:L66c04b:{c.instructions+=1;NFSU2_TR(0x66c04b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c04f:L66c04f:{c.instructions+=8;NFSU2_TR(0x66c04f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66c053:{NFSU2_TR(0x66c053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66c059:{NFSU2_TR(0x66c059);
w4(R+0,u32(r2(R+4)));
}
B66c05c:{NFSU2_TR(0x66c05c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66c062:{NFSU2_TR(0x66c062);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B66c066:{NFSU2_TR(0x66c066);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66c069:{NFSU2_TR(0x66c069);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66c06d:{NFSU2_TR(0x66c06d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c07c;}}
}
B66c06f:L66c06f:{c.instructions+=3;NFSU2_TR(0x66c06f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66c073:{NFSU2_TR(0x66c073);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c075:{NFSU2_TR(0x66c075);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c07c;}}
}
B66c077:L66c077:{c.instructions+=2;NFSU2_TR(0x66c077);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B66c07a:{NFSU2_TR(0x66c07a);
{goto L66c07e;}
}
B66c07c:L66c07c:{c.instructions+=1;NFSU2_TR(0x66c07c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66c07e:L66c07e:{c.instructions+=6;NFSU2_TR(0x66c07e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66c082:{NFSU2_TR(0x66c082);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c084:{NFSU2_TR(0x66c084);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c085:{NFSU2_TR(0x66c085);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c086:{NFSU2_TR(0x66c086);
__builtin_memmove((R+4),(R+24),4);
}
B66c088:{NFSU2_TR(0x66c088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c08dull));
TAIL_STATIC(0x65ae25u,65a);
}
B66c08d:L66c08d:{c.instructions+=7;NFSU2_TR(0x66c08d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66c091:{NFSU2_TR(0x66c091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c097:{NFSU2_TR(0x66c097);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66c09d:{NFSU2_TR(0x66c09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x38ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c0a1:{NFSU2_TR(0x66c0a1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66c0a2:{NFSU2_TR(0x66c0a2);
u8 U[20];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+16))));
}
B66c0a6:{NFSU2_TR(0x66c0a6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c04fu);}goto L66c04f;}}
}
B66c0a8:L66c0a8:{c.instructions+=8;NFSU2_TR(0x66c0a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c0ae:{NFSU2_TR(0x66c0ae);
w4(R+0,u32(r2(R+12)));
}
B66c0b1:{NFSU2_TR(0x66c0b1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66c0b7:{NFSU2_TR(0x66c0b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66c0bb:{NFSU2_TR(0x66c0bb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66c0bd:{NFSU2_TR(0x66c0bd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66c0bf:{NFSU2_TR(0x66c0bf);
u8 U[24];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(r4(R+12))));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+12))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B66c0c3:{NFSU2_TR(0x66c0c3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66c11c;}}
}
B66c0c5:L66c0c5:{c.instructions+=8;NFSU2_TR(0x66c0c5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66c0c9:{NFSU2_TR(0x66c0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66c0cf:{NFSU2_TR(0x66c0cf);
w4(R+0,u32(r2(R+4)));
}
B66c0d2:{NFSU2_TR(0x66c0d2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66c0d8:{NFSU2_TR(0x66c0d8);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B66c0dc:{NFSU2_TR(0x66c0dc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B66c0de:{NFSU2_TR(0x66c0de);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66c0e2:{NFSU2_TR(0x66c0e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c0f1;}}
}
B66c0e4:L66c0e4:{c.instructions+=3;NFSU2_TR(0x66c0e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66c0e8:{NFSU2_TR(0x66c0e8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c0ea:{NFSU2_TR(0x66c0ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c0f1;}}
}
B66c0ec:L66c0ec:{c.instructions+=3;NFSU2_TR(0x66c0ec);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66c0ee:{NFSU2_TR(0x66c0ee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66c0ef:{NFSU2_TR(0x66c0ef);
{goto L66c0f3;}
}
B66c0f1:L66c0f1:{c.instructions+=1;NFSU2_TR(0x66c0f1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66c0f3:L66c0f3:{c.instructions+=6;NFSU2_TR(0x66c0f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66c0f7:{NFSU2_TR(0x66c0f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c0f9:{NFSU2_TR(0x66c0f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c0fa:{NFSU2_TR(0x66c0fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c0fb:{NFSU2_TR(0x66c0fb);
__builtin_memmove((R+4),(R+24),4);
}
B66c0fd:{NFSU2_TR(0x66c0fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c102ull));
TAIL_STATIC(0x65ae25u,65a);
}
B66c102:L66c102:{c.instructions+=7;NFSU2_TR(0x66c102);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66c106:{NFSU2_TR(0x66c106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c10c:{NFSU2_TR(0x66c10c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66c112:{NFSU2_TR(0x66c112);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66c113:{NFSU2_TR(0x66c113);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x38ull))));
}
B66c116:{NFSU2_TR(0x66c116);
u8 U[20];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+16))));
}
B66c11a:{NFSU2_TR(0x66c11a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c0c5u);}goto L66c0c5;}}
}
B66c11c:L66c11c:{c.instructions+=1;NFSU2_TR(0x66c11c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c123:L66c123:{c.instructions+=3;NFSU2_TR(0x66c123);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c129:{NFSU2_TR(0x66c129);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66c12b:{NFSU2_TR(0x66c12b);
if(r1(R+518)){{goto L66c1b4;}}
}
B66c131:L66c131:{c.instructions+=9;NFSU2_TR(0x66c131);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c137:{NFSU2_TR(0x66c137);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x800ull))));
}
B66c13c:{NFSU2_TR(0x66c13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c142:{NFSU2_TR(0x66c142);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66c146:{NFSU2_TR(0x66c146);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66c14c:{NFSU2_TR(0x66c14c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66c14e:{NFSU2_TR(0x66c14e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66c150:{NFSU2_TR(0x66c150);
u8 U[24];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(r4(R+12))));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+12))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B66c154:{NFSU2_TR(0x66c154);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66c1ab;}}
}
B66c156:L66c156:{c.instructions+=8;NFSU2_TR(0x66c156);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66c15a:{NFSU2_TR(0x66c15a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66c160:{NFSU2_TR(0x66c160);
w4(R+0,u32(r2(R+4)));
}
B66c163:{NFSU2_TR(0x66c163);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66c169:{NFSU2_TR(0x66c169);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B66c16d:{NFSU2_TR(0x66c16d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B66c16f:{NFSU2_TR(0x66c16f);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66c173:{NFSU2_TR(0x66c173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c182;}}
}
B66c175:L66c175:{c.instructions+=3;NFSU2_TR(0x66c175);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66c179:{NFSU2_TR(0x66c179);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c17b:{NFSU2_TR(0x66c17b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c182;}}
}
B66c17d:L66c17d:{c.instructions+=3;NFSU2_TR(0x66c17d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66c17f:{NFSU2_TR(0x66c17f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66c180:{NFSU2_TR(0x66c180);
{goto L66c184;}
}
B66c182:L66c182:{c.instructions+=1;NFSU2_TR(0x66c182);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66c184:L66c184:{c.instructions+=5;NFSU2_TR(0x66c184);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66c188:{NFSU2_TR(0x66c188);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c189:{NFSU2_TR(0x66c189);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c18a:{NFSU2_TR(0x66c18a);
__builtin_memmove((R+4),(R+24),4);
}
B66c18c:{NFSU2_TR(0x66c18c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c191ull));
TAIL_STATIC(0x66aa2fu,66a);
}
B66c191:L66c191:{c.instructions+=7;NFSU2_TR(0x66c191);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66c195:{NFSU2_TR(0x66c195);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c19b:{NFSU2_TR(0x66c19b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66c1a1:{NFSU2_TR(0x66c1a1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66c1a2:{NFSU2_TR(0x66c1a2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x38ull))));
}
B66c1a5:{NFSU2_TR(0x66c1a5);
u8 U[20];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+16))));
}
B66c1a9:{NFSU2_TR(0x66c1a9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c156u);}goto L66c156;}}
}
B66c1ab:L66c1ab:{c.instructions+=1;NFSU2_TR(0x66c1ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0xf7bfull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66c1b4:L66c1b4:{c.instructions+=2;NFSU2_TR(0x66c1b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B66c1bb:{NFSU2_TR(0x66c1bb);
if(r1(R+518)){{goto L66c1d6;}}
}
B66c1bd:L66c1bd:{c.instructions+=3;NFSU2_TR(0x66c1bd);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c1c2:{NFSU2_TR(0x66c1c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c1c8:{NFSU2_TR(0x66c1c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c1cdull));
TAIL_STATIC(0x75db6au,75d);
}
B66c1cd:L66c1cd:{c.instructions+=3;NFSU2_TR(0x66c1cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c1d4:{NFSU2_TR(0x66c1d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c1d5:{NFSU2_TR(0x66c1d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c1d6:L66c1d6:{c.instructions+=4;NFSU2_TR(0x66c1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c1d9:{NFSU2_TR(0x66c1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c1dc:{NFSU2_TR(0x66c1dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66c1de:{NFSU2_TR(0x66c1de);
if(r1(R+518)){{goto L66c1fd;}}
}
B66c1e0:L66c1e0:{c.instructions+=2;NFSU2_TR(0x66c1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c1e3:{NFSU2_TR(0x66c1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c1e6:L66c1e6:{c.instructions+=5;NFSU2_TR(0x66c1e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c1e9:{NFSU2_TR(0x66c1e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B66c1ed:{NFSU2_TR(0x66c1ed);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B66c1f0:{NFSU2_TR(0x66c1f0);
u8 U[18];
w4(U+0,u32(u32(u32(0x3aull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w1(R+512,u8((r2(U+14))<(u16(0x0ull))));
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B66c1f6:{NFSU2_TR(0x66c1f6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66c206;}}
}
B66c1f8:L66c1f8:{c.instructions+=2;NFSU2_TR(0x66c1f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66c1fb:{NFSU2_TR(0x66c1fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c1e6u);}goto L66c1e6;}}
}
B66c1fd:L66c1fd:{c.instructions+=1;NFSU2_TR(0x66c1fd);
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
B66c1ff:L66c1ff:{c.instructions+=5;NFSU2_TR(0x66c1ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66c200:{NFSU2_TR(0x66c200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66c201:{NFSU2_TR(0x66c201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66c202:{NFSU2_TR(0x66c202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66c203:{NFSU2_TR(0x66c203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66c206:L66c206:{c.instructions+=3;NFSU2_TR(0x66c206);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66c208:{NFSU2_TR(0x66c208);
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
B66c209:{NFSU2_TR(0x66c209);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c1ffu);}goto L66c1ff;}
}
B66c20b:L66c20b:{c.instructions+=9;NFSU2_TR(0x66c20b);
__builtin_memmove((R+28),(R+28),4);
}
B66c20d:{NFSU2_TR(0x66c20d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c20e:{NFSU2_TR(0x66c20e);
__builtin_memmove((R+20),(R+16),4);
}
B66c210:{NFSU2_TR(0x66c210);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c211:{NFSU2_TR(0x66c211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c215:{NFSU2_TR(0x66c215);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c216:{NFSU2_TR(0x66c216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c219:{NFSU2_TR(0x66c219);
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
B66c21b:{NFSU2_TR(0x66c21b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c229;}}
}
B66c21d:L66c21d:{c.instructions+=2;NFSU2_TR(0x66c21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66c224:{NFSU2_TR(0x66c224);
{goto L66c359;}
}
B66c229:L66c229:{c.instructions+=3;NFSU2_TR(0x66c229);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66c22c:{NFSU2_TR(0x66c22c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66c22e:{NFSU2_TR(0x66c22e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66c234;}}
}
B66c230:L66c230:{c.instructions+=2;NFSU2_TR(0x66c230);
w4(R+8,u32(~u32(r4(R+8))));
}
B66c232:{NFSU2_TR(0x66c232);
{goto L66c247;}
}
B66c234:L66c234:{c.instructions+=5;NFSU2_TR(0x66c234);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c237:{NFSU2_TR(0x66c237);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c239:{NFSU2_TR(0x66c239);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c23b:{NFSU2_TR(0x66c23b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c23c:{NFSU2_TR(0x66c23c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c241ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66c241:L66c241:{c.instructions+=3;NFSU2_TR(0x66c241);
__builtin_memmove((R+8),(R+0),4);
}
B66c243:{NFSU2_TR(0x66c243);
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
B66c245:{NFSU2_TR(0x66c245);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c21du);}goto L66c21d;}}
}
B66c247:L66c247:{c.instructions+=12;NFSU2_TR(0x66c247);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c24a:{NFSU2_TR(0x66c24a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c250:{NFSU2_TR(0x66c250);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c253:{NFSU2_TR(0x66c253);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66c256:{NFSU2_TR(0x66c256);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c257:{NFSU2_TR(0x66c257);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66c25a:{NFSU2_TR(0x66c25a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c25b:{NFSU2_TR(0x66c25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c25e:{NFSU2_TR(0x66c25e);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c260:{NFSU2_TR(0x66c260);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66c262:{NFSU2_TR(0x66c262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c263:{NFSU2_TR(0x66c263);
__builtin_memmove((R+28),(R+24),4);
}
B66c265:L66c265:{c.instructions+=1;NFSU2_TR(0x66c265);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L66c267;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c265u);}goto L66c265;}
}
B66c267:L66c267:{c.instructions+=6;NFSU2_TR(0x66c267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c26a:{NFSU2_TR(0x66c26a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c26d:{NFSU2_TR(0x66c26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c273:{NFSU2_TR(0x66c273);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66c276:{NFSU2_TR(0x66c276);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66c27d:{NFSU2_TR(0x66c27d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c29c;}}
}
B66c27f:L66c27f:{c.instructions+=3;NFSU2_TR(0x66c27f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c285:{NFSU2_TR(0x66c285);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B66c287:{NFSU2_TR(0x66c287);
if(r1(R+512)){{goto L66c299;}}
}
B66c289:L66c289:{c.instructions+=5;NFSU2_TR(0x66c289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c28c:{NFSU2_TR(0x66c28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c292:{NFSU2_TR(0x66c292);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B66c294:{NFSU2_TR(0x66c294);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66c297:{NFSU2_TR(0x66c297);
{goto L66c2ad;}
}
B66c299:L66c299:{c.instructions+=1;NFSU2_TR(0x66c299);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c29c:L66c29c:{c.instructions+=2;NFSU2_TR(0x66c29c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66c2a0:{NFSU2_TR(0x66c2a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c2a7;}}
}
B66c2a2:L66c2a2:{c.instructions+=2;NFSU2_TR(0x66c2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c2a5:{NFSU2_TR(0x66c2a5);
{goto L66c2ad;}
}
B66c2a7:L66c2a7:{c.instructions+=2;NFSU2_TR(0x66c2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c2aa:{NFSU2_TR(0x66c2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c2ad:L66c2ad:{c.instructions+=7;NFSU2_TR(0x66c2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c2b0:{NFSU2_TR(0x66c2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c2b3:{NFSU2_TR(0x66c2b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c2b5:{NFSU2_TR(0x66c2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c2b8:{NFSU2_TR(0x66c2b8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66c2ba:{NFSU2_TR(0x66c2ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66c2be:{NFSU2_TR(0x66c2be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c2c5;}}
}
B66c2c0:L66c2c0:{c.instructions+=2;NFSU2_TR(0x66c2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c2c3:{NFSU2_TR(0x66c2c3);
{goto L66c2c7;}
}
B66c2c5:L66c2c5:{c.instructions+=1;NFSU2_TR(0x66c2c5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66c2c7:L66c2c7:{c.instructions+=5;NFSU2_TR(0x66c2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c2ca:{NFSU2_TR(0x66c2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c2cd:{NFSU2_TR(0x66c2cd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66c2cf:{NFSU2_TR(0x66c2cf);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66c2d1:{NFSU2_TR(0x66c2d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c2d7;}}
}
B66c2d3:L66c2d3:{c.instructions+=2;NFSU2_TR(0x66c2d3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66c2d5:{NFSU2_TR(0x66c2d5);
{goto L66c2da;}
}
B66c2d7:L66c2d7:{c.instructions+=1;NFSU2_TR(0x66c2d7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66c2da:L66c2da:{c.instructions+=5;NFSU2_TR(0x66c2da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B66c2dc:{NFSU2_TR(0x66c2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c2df:{NFSU2_TR(0x66c2df);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B66c2e1:{NFSU2_TR(0x66c2e1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66c2e3:{NFSU2_TR(0x66c2e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c2e9;}}
}
B66c2e5:L66c2e5:{c.instructions+=2;NFSU2_TR(0x66c2e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66c2e7:{NFSU2_TR(0x66c2e7);
{goto L66c2ec;}
}
B66c2e9:L66c2e9:{c.instructions+=1;NFSU2_TR(0x66c2e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66c2ec:L66c2ec:{c.instructions+=8;NFSU2_TR(0x66c2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c2ef:{NFSU2_TR(0x66c2ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c2f2:{NFSU2_TR(0x66c2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c2f5:{NFSU2_TR(0x66c2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c2f8:{NFSU2_TR(0x66c2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c2fb:{NFSU2_TR(0x66c2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c2fe:{NFSU2_TR(0x66c2fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66c301:{NFSU2_TR(0x66c301);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c316;}}
}
B66c303:L66c303:{c.instructions+=2;NFSU2_TR(0x66c303);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66c306:{NFSU2_TR(0x66c306);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c316;}}
}
B66c308:L66c308:{c.instructions+=2;NFSU2_TR(0x66c308);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66c30c:{NFSU2_TR(0x66c30c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c316;}}
}
B66c30e:L66c30e:{c.instructions+=3;NFSU2_TR(0x66c30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c311:{NFSU2_TR(0x66c311);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c314:{NFSU2_TR(0x66c314);
{goto L66c319;}
}
B66c316:L66c316:{c.instructions+=1;NFSU2_TR(0x66c316);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c319:L66c319:{c.instructions+=3;NFSU2_TR(0x66c319);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c31c:{NFSU2_TR(0x66c31c);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66c31d:{NFSU2_TR(0x66c31d);
if(r1(R+518)){{goto L66c348;}}
}
B66c31f:L66c31f:{c.instructions+=2;NFSU2_TR(0x66c31f);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66c322:{NFSU2_TR(0x66c322);
if(r1(R+518)){{goto L66c343;}}
}
B66c324:L66c324:{c.instructions+=2;NFSU2_TR(0x66c324);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66c325:{NFSU2_TR(0x66c325);
if(r1(R+518)){{goto L66c335;}}
}
B66c327:L66c327:{c.instructions+=5;NFSU2_TR(0x66c327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c32a:{NFSU2_TR(0x66c32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c32d:{NFSU2_TR(0x66c32d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c330:{NFSU2_TR(0x66c330);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c333:{NFSU2_TR(0x66c333);
{goto L66c354;}
}
B66c335:L66c335:{c.instructions+=2;NFSU2_TR(0x66c335);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c338:{NFSU2_TR(0x66c338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c33b:L66c33b:{c.instructions+=3;NFSU2_TR(0x66c33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c33e:{NFSU2_TR(0x66c33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c341:{NFSU2_TR(0x66c341);
{goto L66c357;}
}
B66c343:L66c343:{c.instructions+=2;NFSU2_TR(0x66c343);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c346:{NFSU2_TR(0x66c346);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c33bu);}goto L66c33b;}
}
B66c348:L66c348:{c.instructions+=4;NFSU2_TR(0x66c348);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c34b:{NFSU2_TR(0x66c34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c34e:{NFSU2_TR(0x66c34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c351:{NFSU2_TR(0x66c351);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c354:L66c354:{c.instructions+=1;NFSU2_TR(0x66c354);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c357:L66c357:{c.instructions+=2;NFSU2_TR(0x66c357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66c358:{NFSU2_TR(0x66c358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66c359:L66c359:{c.instructions+=4;NFSU2_TR(0x66c359);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c35c:{NFSU2_TR(0x66c35c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66c35d:{NFSU2_TR(0x66c35d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66c35e:{NFSU2_TR(0x66c35e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66c361:L66c361:{c.instructions+=7;NFSU2_TR(0x66c361);
__builtin_memmove((R+28),(R+28),4);
}
B66c363:{NFSU2_TR(0x66c363);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c364:{NFSU2_TR(0x66c364);
__builtin_memmove((R+20),(R+16),4);
}
B66c366:{NFSU2_TR(0x66c366);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c369:{NFSU2_TR(0x66c369);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
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
B66c36c:{NFSU2_TR(0x66c36c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c36f:{NFSU2_TR(0x66c36f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c37a;}}
}
B66c371:L66c371:{c.instructions+=2;NFSU2_TR(0x66c371);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c373:{NFSU2_TR(0x66c373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c378ull));
TAIL_STATIC(0x66afc5u,66a);
}
B66c378:L66c378:{c.instructions+=1;NFSU2_TR(0x66c378);
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
B66c37a:L66c37a:{c.instructions+=2;NFSU2_TR(0x66c37a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66c37b:{NFSU2_TR(0x66c37b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66c37e:L66c37e:{c.instructions+=18;NFSU2_TR(0x66c37e);
__builtin_memmove((R+28),(R+28),4);
}
B66c380:{NFSU2_TR(0x66c380);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c381:{NFSU2_TR(0x66c381);
__builtin_memmove((R+20),(R+16),4);
}
B66c383:{NFSU2_TR(0x66c383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B66c386:{NFSU2_TR(0x66c386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c389:{NFSU2_TR(0x66c389);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66c38c:{NFSU2_TR(0x66c38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66c38f:{NFSU2_TR(0x66c38f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c390:{NFSU2_TR(0x66c390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66c393:{NFSU2_TR(0x66c393);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B66c396:{NFSU2_TR(0x66c396);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B66c399:{NFSU2_TR(0x66c399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c39c:{NFSU2_TR(0x66c39c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66c3a0:{NFSU2_TR(0x66c3a0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66c3a3:{NFSU2_TR(0x66c3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b582cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c3a9:{NFSU2_TR(0x66c3a9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c3ac:{NFSU2_TR(0x66c3ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c3af:{NFSU2_TR(0x66c3af);
if(r1(R+518)){{goto L66c3cc;}}
}
B66c3b1:L66c3b1:{c.instructions+=2;NFSU2_TR(0x66c3b1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c3b4:{NFSU2_TR(0x66c3b4);
if(r1(R+518)){{goto L66c3cc;}}
}
B66c3b6:L66c3b6:{c.instructions+=2;NFSU2_TR(0x66c3b6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c3b9:{NFSU2_TR(0x66c3b9);
if(r1(R+518)){{goto L66c3cc;}}
}
B66c3bb:L66c3bb:{c.instructions+=2;NFSU2_TR(0x66c3bb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66c3be:{NFSU2_TR(0x66c3be);
if(r1(R+518)){{goto L66c3cc;}}
}
B66c3c0:L66c3c0:{c.instructions+=2;NFSU2_TR(0x66c3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66c3c7:{NFSU2_TR(0x66c3c7);
{goto L66c63d;}
}
B66c3cc:L66c3cc:{c.instructions+=5;NFSU2_TR(0x66c3cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c3cd:{NFSU2_TR(0x66c3cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c3ce:{NFSU2_TR(0x66c3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c3d1:{NFSU2_TR(0x66c3d1);
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
B66c3d3:{NFSU2_TR(0x66c3d3);
if(r1(R+518)){{goto L66c3f5;}}
}
B66c3d5:L66c3d5:{c.instructions+=3;NFSU2_TR(0x66c3d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c3d7:{NFSU2_TR(0x66c3d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c3d8:{NFSU2_TR(0x66c3d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c3dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c3db:L66c3db:{c.instructions+=5;NFSU2_TR(0x66c3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c3de:{NFSU2_TR(0x66c3de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c3e0:{NFSU2_TR(0x66c3e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66c3e1:{NFSU2_TR(0x66c3e1);
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
B66c3e3:{NFSU2_TR(0x66c3e3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66c3f8;}}
}
B66c3e5:L66c3e5:{c.instructions+=3;NFSU2_TR(0x66c3e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c3e7:{NFSU2_TR(0x66c3e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c3e8:{NFSU2_TR(0x66c3e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c3ebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c3eb:L66c3eb:{c.instructions+=4;NFSU2_TR(0x66c3eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c3ed:{NFSU2_TR(0x66c3ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66c3f0:{NFSU2_TR(0x66c3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c3f3:{NFSU2_TR(0x66c3f3);
{goto L66c3f8;}
}
B66c3f5:L66c3f5:{c.instructions+=1;NFSU2_TR(0x66c3f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c3f8:L66c3f8:{c.instructions+=3;NFSU2_TR(0x66c3f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B66c3fa:{NFSU2_TR(0x66c3fa);
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
B66c3fc:{NFSU2_TR(0x66c3fc);
if(r1(R+518)){{goto L66c40e;}}
}
B66c3fe:L66c3fe:{c.instructions+=3;NFSU2_TR(0x66c3fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c400:{NFSU2_TR(0x66c400);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c401:{NFSU2_TR(0x66c401);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c404ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c404:L66c404:{c.instructions+=2;NFSU2_TR(0x66c404);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66c406:{NFSU2_TR(0x66c406);
if(r1(R+512)){{goto L66c40e;}}
}
B66c408:L66c408:{c.instructions+=2;NFSU2_TR(0x66c408);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B66c40c:{NFSU2_TR(0x66c40c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66c41a;}}
}
B66c40e:L66c40e:{c.instructions+=2;NFSU2_TR(0x66c40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66c415:{NFSU2_TR(0x66c415);
{goto L66c63b;}
}
B66c41a:L66c41a:{c.instructions+=2;NFSU2_TR(0x66c41a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c41d:{NFSU2_TR(0x66c41d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c422ull));
TAIL_STATIC(0x575620u,575);
}
B66c422:L66c422:{c.instructions+=4;NFSU2_TR(0x66c422);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66c424:{NFSU2_TR(0x66c424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c425:{NFSU2_TR(0x66c425);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c428:{NFSU2_TR(0x66c428);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c436;}}
}
B66c42a:L66c42a:{c.instructions+=2;NFSU2_TR(0x66c42a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66c431:{NFSU2_TR(0x66c431);
{goto L66c62c;}
}
B66c436:L66c436:{c.instructions+=2;NFSU2_TR(0x66c436);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66c43a:{NFSU2_TR(0x66c43a);
if(r1(R+518)){{goto L66c48c;}}
}
B66c43c:L66c43c:{c.instructions+=12;NFSU2_TR(0x66c43c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c43f:{NFSU2_TR(0x66c43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c442:{NFSU2_TR(0x66c442);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B66c445:{NFSU2_TR(0x66c445);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B66c447:{NFSU2_TR(0x66c447);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c448:{NFSU2_TR(0x66c448);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B66c44a:{NFSU2_TR(0x66c44a);
w4(R+0,u32(0-u32(r4(R+0))));
}
B66c44c:{NFSU2_TR(0x66c44c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66c44f:{NFSU2_TR(0x66c44f);
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
B66c451:{NFSU2_TR(0x66c451);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c454:{NFSU2_TR(0x66c454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c456:{NFSU2_TR(0x66c456);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c459ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c459:L66c459:{c.instructions+=4;NFSU2_TR(0x66c459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c45b:{NFSU2_TR(0x66c45b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B66c45e:{NFSU2_TR(0x66c45e);
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
B66c460:{NFSU2_TR(0x66c460);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66c487;}}
}
B66c462:L66c462:{c.instructions+=3;NFSU2_TR(0x66c462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c464:{NFSU2_TR(0x66c464);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c465:{NFSU2_TR(0x66c465);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c468ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c468:L66c468:{c.instructions+=6;NFSU2_TR(0x66c468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c46a:{NFSU2_TR(0x66c46a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c46d:{NFSU2_TR(0x66c46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66c470:{NFSU2_TR(0x66c470);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c473:{NFSU2_TR(0x66c473);
__builtin_memmove((R+0),(R+4),4);
}
B66c475:{NFSU2_TR(0x66c475);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66c478:L66c478:{c.instructions+=1;NFSU2_TR(0x66c478);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66c47a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c478u);}goto L66c478;}
}
B66c47a:L66c47a:{c.instructions+=2;NFSU2_TR(0x66c47a);
__builtin_memmove((R+4),(R+0),4);
}
B66c47c:{NFSU2_TR(0x66c47c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66c47f:L66c47f:{c.instructions+=1;NFSU2_TR(0x66c47f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L66c481;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c47fu);}goto L66c47f;}
}
B66c481:L66c481:{c.instructions+=2;NFSU2_TR(0x66c481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c484:{NFSU2_TR(0x66c484);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c487:L66c487:{c.instructions+=2;NFSU2_TR(0x66c487);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c48a:{NFSU2_TR(0x66c48a);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66c48c:L66c48c:{c.instructions+=3;NFSU2_TR(0x66c48c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c48e:{NFSU2_TR(0x66c48e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c48f:{NFSU2_TR(0x66c48f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c492ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c492:L66c492:{c.instructions+=2;NFSU2_TR(0x66c492);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
}
B66c494:{NFSU2_TR(0x66c494);
if(r1(R+512)){{goto L66c51b;}}
}
B66c49a:L66c49a:{c.instructions+=6;NFSU2_TR(0x66c49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c49d:{NFSU2_TR(0x66c49d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c4a0:{NFSU2_TR(0x66c4a0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66c4a2:{NFSU2_TR(0x66c4a2);
u8 U[15];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B66c4a7:{NFSU2_TR(0x66c4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c4aa:{NFSU2_TR(0x66c4aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c51b;}}
}
B66c4ac:L66c4ac:{c.instructions+=6;NFSU2_TR(0x66c4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c4af:{NFSU2_TR(0x66c4af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c4b0:{NFSU2_TR(0x66c4b0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c4b2:{NFSU2_TR(0x66c4b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c4b3:{NFSU2_TR(0x66c4b3);
__builtin_memmove((R+4),(R+28),4);
}
B66c4b5:{NFSU2_TR(0x66c4b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c4baull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66c4ba:L66c4ba:{c.instructions+=3;NFSU2_TR(0x66c4ba);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c4bc:{NFSU2_TR(0x66c4bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c4bf:{NFSU2_TR(0x66c4bf);
if(r1(R+518)){{goto L66c51b;}}
}
B66c4c1:L66c4c1:{c.instructions+=5;NFSU2_TR(0x66c4c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c4c4:{NFSU2_TR(0x66c4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66c4ca:{NFSU2_TR(0x66c4ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66c4cd:{NFSU2_TR(0x66c4cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66c4d0:{NFSU2_TR(0x66c4d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c4d7;}}
}
B66c4d2:L66c4d2:{c.instructions+=2;NFSU2_TR(0x66c4d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66c4d5:{NFSU2_TR(0x66c4d5);
{goto L66c4dd;}
}
B66c4d7:L66c4d7:{c.instructions+=2;NFSU2_TR(0x66c4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66c4da:{NFSU2_TR(0x66c4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66c4dd:L66c4dd:{c.instructions+=9;NFSU2_TR(0x66c4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c4e0:{NFSU2_TR(0x66c4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B66c4e3:{NFSU2_TR(0x66c4e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B66c4e6:{NFSU2_TR(0x66c4e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66c4ea:{NFSU2_TR(0x66c4ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c4ee:{NFSU2_TR(0x66c4ee);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66c4f1:{NFSU2_TR(0x66c4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b582cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c4f7:{NFSU2_TR(0x66c4f7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c4fa:{NFSU2_TR(0x66c4fa);
if(r1(R+518)){{goto L66c59c;}}
}
B66c500:L66c500:{c.instructions+=2;NFSU2_TR(0x66c500);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c503:{NFSU2_TR(0x66c503);
if(r1(R+518)){{goto L66c578;}}
}
B66c505:L66c505:{c.instructions+=2;NFSU2_TR(0x66c505);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c508:{NFSU2_TR(0x66c508);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L66c5c7;}}
}
B66c50e:L66c50e:{c.instructions+=2;NFSU2_TR(0x66c50e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c511:{NFSU2_TR(0x66c511);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L66c5c7;}}
}
B66c517:L66c517:{c.instructions+=2;NFSU2_TR(0x66c517);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c519:{NFSU2_TR(0x66c519);
if(r1(R+518)){{goto L66c527;}}
}
B66c51b:L66c51b:{c.instructions+=2;NFSU2_TR(0x66c51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66c522:{NFSU2_TR(0x66c522);
{goto L66c62c;}
}
B66c527:L66c527:{c.instructions+=5;NFSU2_TR(0x66c527);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c529:{NFSU2_TR(0x66c529);
__builtin_memmove((R+24),(R+0),4);
}
B66c52b:{NFSU2_TR(0x66c52b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66c52d:{NFSU2_TR(0x66c52d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66c530:{NFSU2_TR(0x66c530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c531:L66c531:{c.instructions+=1;NFSU2_TR(0x66c531);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66c533;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c531u);}goto L66c531;}
}
B66c533:L66c533:{c.instructions+=18;NFSU2_TR(0x66c533);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66c539:{NFSU2_TR(0x66c539);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c53c:{NFSU2_TR(0x66c53c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c53f:{NFSU2_TR(0x66c53f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66c541:{NFSU2_TR(0x66c541);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c544:{NFSU2_TR(0x66c544);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
w2(U+4,u16(0xb3ull));
s2(u32(r4(U+0)),r2(U+4));
}
B66c54a:{NFSU2_TR(0x66c54a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
w4(U+4,u32(0xe000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66c551:{NFSU2_TR(0x66c551);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B66c557:{NFSU2_TR(0x66c557);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c55a:{NFSU2_TR(0x66c55a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66c55e:{NFSU2_TR(0x66c55e);
__builtin_memmove((R+8),(R+4),4);
}
B66c560:{NFSU2_TR(0x66c560);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B66c563:{NFSU2_TR(0x66c563);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66c566:{NFSU2_TR(0x66c566);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66c569:{NFSU2_TR(0x66c569);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c56c:{NFSU2_TR(0x66c56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c56f:{NFSU2_TR(0x66c56f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c573:{NFSU2_TR(0x66c573);
{goto L66c62c;}
}
B66c578:L66c578:{c.instructions+=2;NFSU2_TR(0x66c578);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c57b:{NFSU2_TR(0x66c57b);
if(r1(R+518)){{goto L66c598;}}
}
B66c57d:L66c57d:{c.instructions+=2;NFSU2_TR(0x66c57d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c580:{NFSU2_TR(0x66c580);
if(r1(R+518)){{goto L66c598;}}
}
B66c582:L66c582:{c.instructions+=2;NFSU2_TR(0x66c582);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c585:{NFSU2_TR(0x66c585);
if(r1(R+518)){{goto L66c598;}}
}
B66c587:L66c587:{c.instructions+=2;NFSU2_TR(0x66c587);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c58a:{NFSU2_TR(0x66c58a);
if(r1(R+518)){{goto L66c598;}}
}
B66c58c:L66c58c:{c.instructions+=2;NFSU2_TR(0x66c58c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c58f:{NFSU2_TR(0x66c58f);
if(r1(R+518)){{goto L66c598;}}
}
B66c591:L66c591:{c.instructions+=1;NFSU2_TR(0x66c591);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66c598:L66c598:{c.instructions+=2;NFSU2_TR(0x66c598);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66c59a:{NFSU2_TR(0x66c59a);
{goto L66c5c2;}
}
B66c59c:L66c59c:{c.instructions+=2;NFSU2_TR(0x66c59c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c59f:{NFSU2_TR(0x66c59f);
if(r1(R+518)){{goto L66c5bc;}}
}
B66c5a1:L66c5a1:{c.instructions+=2;NFSU2_TR(0x66c5a1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c5a4:{NFSU2_TR(0x66c5a4);
if(r1(R+518)){{goto L66c5bc;}}
}
B66c5a6:L66c5a6:{c.instructions+=2;NFSU2_TR(0x66c5a6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c5a9:{NFSU2_TR(0x66c5a9);
if(r1(R+518)){{goto L66c5bc;}}
}
B66c5ab:L66c5ab:{c.instructions+=2;NFSU2_TR(0x66c5ab);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c5ae:{NFSU2_TR(0x66c5ae);
if(r1(R+518)){{goto L66c5bc;}}
}
B66c5b0:L66c5b0:{c.instructions+=2;NFSU2_TR(0x66c5b0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c5b3:{NFSU2_TR(0x66c5b3);
if(r1(R+518)){{goto L66c5bc;}}
}
B66c5b5:L66c5b5:{c.instructions+=1;NFSU2_TR(0x66c5b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66c5bc:L66c5bc:{c.instructions+=1;NFSU2_TR(0x66c5bc);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+12)),r4(U+0));
}
B66c5c2:L66c5c2:{c.instructions+=2;NFSU2_TR(0x66c5c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B66c5c5:{NFSU2_TR(0x66c5c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66c62c;}}
}
B66c5c7:L66c5c7:{c.instructions+=4;NFSU2_TR(0x66c5c7);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c5c9:{NFSU2_TR(0x66c5c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c5ca:{NFSU2_TR(0x66c5ca);
__builtin_memmove((R+24),(R+0),4);
}
B66c5cc:{NFSU2_TR(0x66c5cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66c5cf:L66c5cf:{c.instructions+=1;NFSU2_TR(0x66c5cf);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66c5d1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c5cfu);}goto L66c5cf;}
}
B66c5d1:L66c5d1:{c.instructions+=5;NFSU2_TR(0x66c5d1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66c5d3:{NFSU2_TR(0x66c5d3);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c5d5:{NFSU2_TR(0x66c5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c5d8:{NFSU2_TR(0x66c5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c5db:{NFSU2_TR(0x66c5db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c5e0ull));
TAIL_STATIC(0x575620u,575);
}
B66c5e0:L66c5e0:{c.instructions+=3;NFSU2_TR(0x66c5e0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c5e2:{NFSU2_TR(0x66c5e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c5e3:{NFSU2_TR(0x66c5e3);
if(r1(R+518)){{goto L66c5fd;}}
}
B66c5e5:L66c5e5:{c.instructions+=9;NFSU2_TR(0x66c5e5);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66c5e7:{NFSU2_TR(0x66c5e7);
u8 U[4];
w4(U+0,u32(0x65b680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c5ec:{NFSU2_TR(0x66c5ec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66c5ed:{NFSU2_TR(0x66c5ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c5ee:{NFSU2_TR(0x66c5ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66c5f1:{NFSU2_TR(0x66c5f1);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c5f3:{NFSU2_TR(0x66c5f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c5f4:{NFSU2_TR(0x66c5f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66c5f6:{NFSU2_TR(0x66c5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c5fbull));
TAIL_STATIC(0x401650u,401);
}
B66c5fb:L66c5fb:{c.instructions+=1;NFSU2_TR(0x66c5fb);
{goto L66c5ff;}
}
B66c5fd:L66c5fd:{c.instructions+=1;NFSU2_TR(0x66c5fd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66c5ff:L66c5ff:{c.instructions+=3;NFSU2_TR(0x66c5ff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c601:{NFSU2_TR(0x66c601);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c604:{NFSU2_TR(0x66c604);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c42au);}goto L66c42a;}}
}
B66c60a:L66c60a:{c.instructions+=9;NFSU2_TR(0x66c60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c60d:{NFSU2_TR(0x66c60d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c60e:{NFSU2_TR(0x66c60e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c611:{NFSU2_TR(0x66c611);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B66c617:{NFSU2_TR(0x66c617);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c618:{NFSU2_TR(0x66c618);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c61b:{NFSU2_TR(0x66c61b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B66c621:{NFSU2_TR(0x66c621);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c624:{NFSU2_TR(0x66c624);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c629ull));
TAIL_STATIC(0x65bd1eu,65b);
}
B66c629:L66c629:{c.instructions+=1;NFSU2_TR(0x66c629);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c62c:L66c62c:{c.instructions+=2;NFSU2_TR(0x66c62c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66c630:{NFSU2_TR(0x66c630);
if(r1(R+518)){{goto L66c63b;}}
}
B66c632:L66c632:{c.instructions+=2;NFSU2_TR(0x66c632);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c635:{NFSU2_TR(0x66c635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c63aull));
TAIL_STATIC(0x575630u,575);
}
B66c63a:L66c63a:{c.instructions+=1;NFSU2_TR(0x66c63a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c63b:L66c63b:{c.instructions+=2;NFSU2_TR(0x66c63b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66c63c:{NFSU2_TR(0x66c63c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66c63d:L66c63d:{c.instructions+=4;NFSU2_TR(0x66c63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c640:{NFSU2_TR(0x66c640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66c641:{NFSU2_TR(0x66c641);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66c642:{NFSU2_TR(0x66c642);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66c645:L66c645:{c.instructions+=18;NFSU2_TR(0x66c645);
__builtin_memmove((R+28),(R+28),4);
}
B66c647:{NFSU2_TR(0x66c647);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c648:{NFSU2_TR(0x66c648);
__builtin_memmove((R+20),(R+16),4);
}
B66c64a:{NFSU2_TR(0x66c64a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B66c64d:{NFSU2_TR(0x66c64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c650:{NFSU2_TR(0x66c650);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c651:{NFSU2_TR(0x66c651);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66c654:{NFSU2_TR(0x66c654);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66c657:{NFSU2_TR(0x66c657);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66c65a:{NFSU2_TR(0x66c65a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B66c65d:{NFSU2_TR(0x66c65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B66c660:{NFSU2_TR(0x66c660);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c661:{NFSU2_TR(0x66c661);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c662:{NFSU2_TR(0x66c662);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c665:{NFSU2_TR(0x66c665);
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
B66c667:{NFSU2_TR(0x66c667);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c66a:{NFSU2_TR(0x66c66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c66d:{NFSU2_TR(0x66c66d);
if(r1(R+518)){{goto L66c68f;}}
}
B66c66f:L66c66f:{c.instructions+=3;NFSU2_TR(0x66c66f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c671:{NFSU2_TR(0x66c671);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c672:{NFSU2_TR(0x66c672);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c675ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c675:L66c675:{c.instructions+=5;NFSU2_TR(0x66c675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c678:{NFSU2_TR(0x66c678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c67a:{NFSU2_TR(0x66c67a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66c67b:{NFSU2_TR(0x66c67b);
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
B66c67d:{NFSU2_TR(0x66c67d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66c692;}}
}
B66c67f:L66c67f:{c.instructions+=3;NFSU2_TR(0x66c67f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c681:{NFSU2_TR(0x66c681);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c682:{NFSU2_TR(0x66c682);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c685ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c685:L66c685:{c.instructions+=4;NFSU2_TR(0x66c685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c687:{NFSU2_TR(0x66c687);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66c68a:{NFSU2_TR(0x66c68a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c68d:{NFSU2_TR(0x66c68d);
{goto L66c692;}
}
B66c68f:L66c68f:{c.instructions+=1;NFSU2_TR(0x66c68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c692:L66c692:{c.instructions+=3;NFSU2_TR(0x66c692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B66c694:{NFSU2_TR(0x66c694);
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
B66c696:{NFSU2_TR(0x66c696);
if(r1(R+518)){{goto L66c6b3;}}
}
B66c698:L66c698:{c.instructions+=3;NFSU2_TR(0x66c698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c69a:{NFSU2_TR(0x66c69a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c69b:{NFSU2_TR(0x66c69b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c69eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c69e:L66c69e:{c.instructions+=4;NFSU2_TR(0x66c69e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c6a0:{NFSU2_TR(0x66c6a0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66c6a1:{NFSU2_TR(0x66c6a1);
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
B66c6a3:{NFSU2_TR(0x66c6a3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66c6b3;}}
}
B66c6a5:L66c6a5:{c.instructions+=3;NFSU2_TR(0x66c6a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c6a7:{NFSU2_TR(0x66c6a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c6a8:{NFSU2_TR(0x66c6a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c6abull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c6ab:L66c6ab:{c.instructions+=3;NFSU2_TR(0x66c6ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c6ad:{NFSU2_TR(0x66c6ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66c6b0:{NFSU2_TR(0x66c6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c6b3:L66c6b3:{c.instructions+=3;NFSU2_TR(0x66c6b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B66c6b5:{NFSU2_TR(0x66c6b5);
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
B66c6b7:{NFSU2_TR(0x66c6b7);
if(r1(R+518)){{goto L66c6c9;}}
}
B66c6b9:L66c6b9:{c.instructions+=3;NFSU2_TR(0x66c6b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c6bb:{NFSU2_TR(0x66c6bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c6bc:{NFSU2_TR(0x66c6bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c6bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c6bf:L66c6bf:{c.instructions+=2;NFSU2_TR(0x66c6bf);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66c6c1:{NFSU2_TR(0x66c6c1);
if(r1(R+512)){{goto L66c6c9;}}
}
B66c6c3:L66c6c3:{c.instructions+=2;NFSU2_TR(0x66c6c3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B66c6c7:{NFSU2_TR(0x66c6c7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66c6d5;}}
}
B66c6c9:L66c6c9:{c.instructions+=2;NFSU2_TR(0x66c6c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66c6d0:{NFSU2_TR(0x66c6d0);
{goto L66c8eb;}
}
B66c6d5:L66c6d5:{c.instructions+=2;NFSU2_TR(0x66c6d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c6d8:{NFSU2_TR(0x66c6d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c6ddull));
TAIL_STATIC(0x575620u,575);
}
B66c6dd:L66c6dd:{c.instructions+=4;NFSU2_TR(0x66c6dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66c6df:{NFSU2_TR(0x66c6df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c6e0:{NFSU2_TR(0x66c6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c6e3:{NFSU2_TR(0x66c6e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c6f1;}}
}
B66c6e5:L66c6e5:{c.instructions+=2;NFSU2_TR(0x66c6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66c6ec:{NFSU2_TR(0x66c6ec);
{goto L66c8dc;}
}
B66c6f1:L66c6f1:{c.instructions+=2;NFSU2_TR(0x66c6f1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66c6f5:{NFSU2_TR(0x66c6f5);
if(r1(R+518)){{goto L66c747;}}
}
B66c6f7:L66c6f7:{c.instructions+=12;NFSU2_TR(0x66c6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c6fa:{NFSU2_TR(0x66c6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c6fd:{NFSU2_TR(0x66c6fd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B66c700:{NFSU2_TR(0x66c700);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B66c702:{NFSU2_TR(0x66c702);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c703:{NFSU2_TR(0x66c703);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B66c705:{NFSU2_TR(0x66c705);
w4(R+0,u32(0-u32(r4(R+0))));
}
B66c707:{NFSU2_TR(0x66c707);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66c70a:{NFSU2_TR(0x66c70a);
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
B66c70c:{NFSU2_TR(0x66c70c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c70f:{NFSU2_TR(0x66c70f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c711:{NFSU2_TR(0x66c711);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c714ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c714:L66c714:{c.instructions+=4;NFSU2_TR(0x66c714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c716:{NFSU2_TR(0x66c716);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B66c719:{NFSU2_TR(0x66c719);
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
B66c71b:{NFSU2_TR(0x66c71b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66c742;}}
}
B66c71d:L66c71d:{c.instructions+=3;NFSU2_TR(0x66c71d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c71f:{NFSU2_TR(0x66c71f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c720:{NFSU2_TR(0x66c720);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c723ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c723:L66c723:{c.instructions+=6;NFSU2_TR(0x66c723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c725:{NFSU2_TR(0x66c725);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c728:{NFSU2_TR(0x66c728);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66c72b:{NFSU2_TR(0x66c72b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c72e:{NFSU2_TR(0x66c72e);
__builtin_memmove((R+0),(R+4),4);
}
B66c730:{NFSU2_TR(0x66c730);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66c733:L66c733:{c.instructions+=1;NFSU2_TR(0x66c733);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66c735;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c733u);}goto L66c733;}
}
B66c735:L66c735:{c.instructions+=2;NFSU2_TR(0x66c735);
__builtin_memmove((R+4),(R+0),4);
}
B66c737:{NFSU2_TR(0x66c737);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66c73a:L66c73a:{c.instructions+=1;NFSU2_TR(0x66c73a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L66c73c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c73au);}goto L66c73a;}
}
B66c73c:L66c73c:{c.instructions+=2;NFSU2_TR(0x66c73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c73f:{NFSU2_TR(0x66c73f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c742:L66c742:{c.instructions+=2;NFSU2_TR(0x66c742);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c745:{NFSU2_TR(0x66c745);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66c747:L66c747:{c.instructions+=3;NFSU2_TR(0x66c747);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c749:{NFSU2_TR(0x66c749);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c74a:{NFSU2_TR(0x66c74a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c74dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c74d:L66c74d:{c.instructions+=2;NFSU2_TR(0x66c74d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
}
B66c74f:{NFSU2_TR(0x66c74f);
if(r1(R+512)){{goto L66c8ad;}}
}
B66c755:L66c755:{c.instructions+=4;NFSU2_TR(0x66c755);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c758:{NFSU2_TR(0x66c758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c75b:{NFSU2_TR(0x66c75b);
u8 U[15];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B66c760:{NFSU2_TR(0x66c760);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c8ad;}}
}
B66c766:L66c766:{c.instructions+=5;NFSU2_TR(0x66c766);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c769:{NFSU2_TR(0x66c769);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c76b:{NFSU2_TR(0x66c76b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c76d:{NFSU2_TR(0x66c76d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c76e:{NFSU2_TR(0x66c76e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c773ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66c773:L66c773:{c.instructions+=2;NFSU2_TR(0x66c773);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66c775:{NFSU2_TR(0x66c775);
if(r1(R+518)){{goto L66c8ad;}}
}
B66c77b:L66c77b:{c.instructions+=7;NFSU2_TR(0x66c77b);
__builtin_memmove((R+24),(R+0),4);
}
B66c77d:{NFSU2_TR(0x66c77d);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c77f:{NFSU2_TR(0x66c77f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66c781:{NFSU2_TR(0x66c781);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66c782:{NFSU2_TR(0x66c782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c783:{NFSU2_TR(0x66c783);
u8 U[4];
w4(U+0,u32(0xfffffffcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c785:{NFSU2_TR(0x66c785);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66c788:L66c788:{c.instructions+=1;NFSU2_TR(0x66c788);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66c78a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c788u);}goto L66c788;}
}
B66c78a:L66c78a:{c.instructions+=19;NFSU2_TR(0x66c78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c78e:{NFSU2_TR(0x66c78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c792:{NFSU2_TR(0x66c792);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66c798:{NFSU2_TR(0x66c798);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c79c:{NFSU2_TR(0x66c79c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c79f:{NFSU2_TR(0x66c79f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66c7a3:{NFSU2_TR(0x66c7a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66c7a5:{NFSU2_TR(0x66c7a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66c7a6:{NFSU2_TR(0x66c7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B66c7a9:{NFSU2_TR(0x66c7a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66c7ac:{NFSU2_TR(0x66c7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c7af:{NFSU2_TR(0x66c7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c7b2:{NFSU2_TR(0x66c7b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c7b3:{NFSU2_TR(0x66c7b3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B66c7b6:{NFSU2_TR(0x66c7b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
w2(U+4,u16(0xb3ull));
s2(u32(r4(U+0)),r2(U+4));
}
B66c7bc:{NFSU2_TR(0x66c7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
w4(U+4,u32(0xe000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66c7c3:{NFSU2_TR(0x66c7c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66c7c7:{NFSU2_TR(0x66c7c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c7c8:{NFSU2_TR(0x66c7c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c7cdull));
TAIL_STATIC(0x670f08u,670);
}
B66c7cd:L66c7cd:{c.instructions+=3;NFSU2_TR(0x66c7cd);
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
B66c7cf:{NFSU2_TR(0x66c7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c7d2:{NFSU2_TR(0x66c7d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66c8dc;}}
}
B66c7d8:L66c7d8:{c.instructions+=4;NFSU2_TR(0x66c7d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66c7da:{NFSU2_TR(0x66c7da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c7dc:{NFSU2_TR(0x66c7dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c7dd:{NFSU2_TR(0x66c7dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c7e0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c7e0:L66c7e0:{c.instructions+=25;NFSU2_TR(0x66c7e0);
__builtin_memmove((R+28),(R+0),4);
}
B66c7e2:{NFSU2_TR(0x66c7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c7e6:{NFSU2_TR(0x66c7e6);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+28)),r4(U+0));
}
B66c7ec:{NFSU2_TR(0x66c7ec);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c7ee:{NFSU2_TR(0x66c7ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c7ef:{NFSU2_TR(0x66c7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c7f2:{NFSU2_TR(0x66c7f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c7f5:{NFSU2_TR(0x66c7f5);
__builtin_memmove((R+8),(R+0),4);
}
B66c7f7:{NFSU2_TR(0x66c7f7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B66c7fa:{NFSU2_TR(0x66c7fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B66c7fd:{NFSU2_TR(0x66c7fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66c800:{NFSU2_TR(0x66c800);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c803:{NFSU2_TR(0x66c803);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c806:{NFSU2_TR(0x66c806);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c809:{NFSU2_TR(0x66c809);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B66c80c:{NFSU2_TR(0x66c80c);
__builtin_memmove((R+8),(R+0),4);
}
B66c80e:{NFSU2_TR(0x66c80e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B66c811:{NFSU2_TR(0x66c811);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B66c813:{NFSU2_TR(0x66c813);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66c816:{NFSU2_TR(0x66c816);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c819:{NFSU2_TR(0x66c819);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c81c:{NFSU2_TR(0x66c81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66c820:{NFSU2_TR(0x66c820);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66c824:{NFSU2_TR(0x66c824);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c827:{NFSU2_TR(0x66c827);
if(r1(R+518)){{goto L66c8dc;}}
}
B66c82d:L66c82d:{c.instructions+=13;NFSU2_TR(0x66c82d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c830:{NFSU2_TR(0x66c830);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B66c832:{NFSU2_TR(0x66c832);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c835:{NFSU2_TR(0x66c835);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B66c837:{NFSU2_TR(0x66c837);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B66c839:{NFSU2_TR(0x66c839);
w4(R+0,u32(0-u32(r4(R+0))));
}
B66c83b:{NFSU2_TR(0x66c83b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66c83e:{NFSU2_TR(0x66c83e);
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
B66c840:{NFSU2_TR(0x66c840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c843:{NFSU2_TR(0x66c843);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c846:{NFSU2_TR(0x66c846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c848:{NFSU2_TR(0x66c848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c849:{NFSU2_TR(0x66c849);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c84cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c84c:L66c84c:{c.instructions+=5;NFSU2_TR(0x66c84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c84f:{NFSU2_TR(0x66c84f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c851:{NFSU2_TR(0x66c851);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B66c854:{NFSU2_TR(0x66c854);
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
B66c856:{NFSU2_TR(0x66c856);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66c880;}}
}
B66c858:L66c858:{c.instructions+=4;NFSU2_TR(0x66c858);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c85b:{NFSU2_TR(0x66c85b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c85d:{NFSU2_TR(0x66c85d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c85e:{NFSU2_TR(0x66c85e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c861ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c861:L66c861:{c.instructions+=6;NFSU2_TR(0x66c861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c863:{NFSU2_TR(0x66c863);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66c866:{NFSU2_TR(0x66c866);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c869:{NFSU2_TR(0x66c869);
__builtin_memmove((R+0),(R+4),4);
}
B66c86b:{NFSU2_TR(0x66c86b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B66c86e:{NFSU2_TR(0x66c86e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66c871:L66c871:{c.instructions+=1;NFSU2_TR(0x66c871);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66c873;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c871u);}goto L66c871;}
}
B66c873:L66c873:{c.instructions+=2;NFSU2_TR(0x66c873);
__builtin_memmove((R+4),(R+0),4);
}
B66c875:{NFSU2_TR(0x66c875);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66c878:L66c878:{c.instructions+=1;NFSU2_TR(0x66c878);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L66c87a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c878u);}goto L66c878;}
}
B66c87a:L66c87a:{c.instructions+=2;NFSU2_TR(0x66c87a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c87d:{NFSU2_TR(0x66c87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c880:L66c880:{c.instructions+=10;NFSU2_TR(0x66c880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c883:{NFSU2_TR(0x66c883);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B66c885:{NFSU2_TR(0x66c885);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66c888:{NFSU2_TR(0x66c888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c889:{NFSU2_TR(0x66c889);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B66c88c:{NFSU2_TR(0x66c88c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c88f:{NFSU2_TR(0x66c88f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c890:{NFSU2_TR(0x66c890);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c891:{NFSU2_TR(0x66c891);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c894:{NFSU2_TR(0x66c894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c899ull));
TAIL_STATIC(0x688dc9u,688);
}
B66c899:L66c899:{c.instructions+=3;NFSU2_TR(0x66c899);
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
B66c89b:{NFSU2_TR(0x66c89b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c89e:{NFSU2_TR(0x66c89e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66c8dc;}}
}
B66c8a0:L66c8a0:{c.instructions+=4;NFSU2_TR(0x66c8a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c8a3:{NFSU2_TR(0x66c8a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66c8a5:{NFSU2_TR(0x66c8a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c8a6:{NFSU2_TR(0x66c8a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c8a9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66c8a9:L66c8a9:{c.instructions+=2;NFSU2_TR(0x66c8a9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
}
B66c8ab:{NFSU2_TR(0x66c8ab);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66c8b6;}}
}
B66c8ad:L66c8ad:{c.instructions+=2;NFSU2_TR(0x66c8ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66c8b4:{NFSU2_TR(0x66c8b4);
{goto L66c8dc;}
}
B66c8b6:L66c8b6:{c.instructions+=5;NFSU2_TR(0x66c8b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c8b9:{NFSU2_TR(0x66c8b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66c8bc:{NFSU2_TR(0x66c8bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c8bd:{NFSU2_TR(0x66c8bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c8be:{NFSU2_TR(0x66c8be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c8c3ull));
TAIL_STATIC(0x688dc9u,688);
}
B66c8c3:L66c8c3:{c.instructions+=3;NFSU2_TR(0x66c8c3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66c8c5:{NFSU2_TR(0x66c8c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c8c8:{NFSU2_TR(0x66c8c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66c8dc;}}
}
B66c8ca:L66c8ca:{c.instructions+=5;NFSU2_TR(0x66c8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c8cd:{NFSU2_TR(0x66c8cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c8ce:{NFSU2_TR(0x66c8ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c8d1:{NFSU2_TR(0x66c8d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c8d4:{NFSU2_TR(0x66c8d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c8d9ull));
TAIL_STATIC(0x660d4eu,660);
}
B66c8d9:L66c8d9:{c.instructions+=1;NFSU2_TR(0x66c8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66c8dc:L66c8dc:{c.instructions+=2;NFSU2_TR(0x66c8dc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66c8e0:{NFSU2_TR(0x66c8e0);
if(r1(R+518)){{goto L66c8eb;}}
}
B66c8e2:L66c8e2:{c.instructions+=2;NFSU2_TR(0x66c8e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c8e5:{NFSU2_TR(0x66c8e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c8eaull));
TAIL_STATIC(0x575630u,575);
}
B66c8ea:L66c8ea:{c.instructions+=1;NFSU2_TR(0x66c8ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66c8eb:L66c8eb:{c.instructions+=6;NFSU2_TR(0x66c8eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c8ee:{NFSU2_TR(0x66c8ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66c8ef:{NFSU2_TR(0x66c8ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66c8f0:{NFSU2_TR(0x66c8f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66c8f1:{NFSU2_TR(0x66c8f1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66c8f2:{NFSU2_TR(0x66c8f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66c8f5:L66c8f5:{c.instructions+=9;NFSU2_TR(0x66c8f5);
__builtin_memmove((R+28),(R+28),4);
}
B66c8f7:{NFSU2_TR(0x66c8f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c8f8:{NFSU2_TR(0x66c8f8);
__builtin_memmove((R+20),(R+16),4);
}
B66c8fa:{NFSU2_TR(0x66c8fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c8fb:{NFSU2_TR(0x66c8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c8fe:{NFSU2_TR(0x66c8fe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66c900:{NFSU2_TR(0x66c900);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c901:{NFSU2_TR(0x66c901);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c904:{NFSU2_TR(0x66c904);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66c90a;}}
}
B66c906:L66c906:{c.instructions+=2;NFSU2_TR(0x66c906);
w4(R+24,u32(~u32(r4(R+24))));
}
B66c908:{NFSU2_TR(0x66c908);
{goto L66c91c;}
}
B66c90a:L66c90a:{c.instructions+=5;NFSU2_TR(0x66c90a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c90c:{NFSU2_TR(0x66c90c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c90e:{NFSU2_TR(0x66c90e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c90f:{NFSU2_TR(0x66c90f);
__builtin_memmove((R+4),(R+28),4);
}
B66c911:{NFSU2_TR(0x66c911);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c916ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66c916:L66c916:{c.instructions+=3;NFSU2_TR(0x66c916);
__builtin_memmove((R+24),(R+0),4);
}
B66c918:{NFSU2_TR(0x66c918);
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
B66c91a:{NFSU2_TR(0x66c91a);
if(r1(R+518)){{goto L66c929;}}
}
B66c91c:L66c91c:{c.instructions+=3;NFSU2_TR(0x66c91c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c91f:{NFSU2_TR(0x66c91f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c922:{NFSU2_TR(0x66c922);
if(r1(R+518)){{goto L66c930;}}
}
B66c924:L66c924:{c.instructions+=2;NFSU2_TR(0x66c924);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B66c927:{NFSU2_TR(0x66c927);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66c930;}}
}
B66c929:L66c929:{c.instructions+=2;NFSU2_TR(0x66c929);
w4(R+0,u32(0x8876086cull));
}
B66c92e:{NFSU2_TR(0x66c92e);
{goto L66c95b;}
}
B66c930:L66c930:{c.instructions+=3;NFSU2_TR(0x66c930);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66c934:{NFSU2_TR(0x66c934);
__builtin_memmove((R+4),(R+28),4);
}
B66c936:{NFSU2_TR(0x66c936);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c946;}}
}
B66c938:L66c938:{c.instructions+=5;NFSU2_TR(0x66c938);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c939:{NFSU2_TR(0x66c939);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c93c:{NFSU2_TR(0x66c93c);
w4(R+24,u32(~u32(r4(R+24))));
}
B66c93e:{NFSU2_TR(0x66c93e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c93f:{NFSU2_TR(0x66c93f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c944ull));
TAIL_STATIC(0x666c81u,666);
}
B66c944:L66c944:{c.instructions+=1;NFSU2_TR(0x66c944);
{goto L66c95b;}
}
B66c946:L66c946:{c.instructions+=3;NFSU2_TR(0x66c946);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c949:{NFSU2_TR(0x66c949);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c94a:{NFSU2_TR(0x66c94a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c94full));
TAIL_STATIC(0x661fc6u,661);
}
B66c94f:L66c94f:{c.instructions+=2;NFSU2_TR(0x66c94f);
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
B66c951:{NFSU2_TR(0x66c951);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66c95b;}}
}
B66c953:L66c953:{c.instructions+=3;NFSU2_TR(0x66c953);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c954:{NFSU2_TR(0x66c954);
__builtin_memmove((R+4),(R+28),4);
}
B66c956:{NFSU2_TR(0x66c956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c95bull));
TAIL_STATIC(0x66055cu,660);
}
B66c95b:L66c95b:{c.instructions+=4;NFSU2_TR(0x66c95b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66c95c:{NFSU2_TR(0x66c95c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66c95d:{NFSU2_TR(0x66c95d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66c95e:{NFSU2_TR(0x66c95e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66c961:L66c961:{c.instructions+=10;NFSU2_TR(0x66c961);
__builtin_memmove((R+28),(R+28),4);
}
B66c963:{NFSU2_TR(0x66c963);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c964:{NFSU2_TR(0x66c964);
__builtin_memmove((R+20),(R+16),4);
}
B66c966:{NFSU2_TR(0x66c966);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c967:{NFSU2_TR(0x66c967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c96a:{NFSU2_TR(0x66c96a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c96c:{NFSU2_TR(0x66c96c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c96e:{NFSU2_TR(0x66c96e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c971:{NFSU2_TR(0x66c971);
__builtin_memmove((R+4),(R+24),4);
}
B66c973:{NFSU2_TR(0x66c973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c978ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66c978:L66c978:{c.instructions+=2;NFSU2_TR(0x66c978);
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
B66c97a:{NFSU2_TR(0x66c97a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66c983;}}
}
B66c97c:L66c97c:{c.instructions+=2;NFSU2_TR(0x66c97c);
w4(R+0,u32(0x8876086cull));
}
B66c981:{NFSU2_TR(0x66c981);
{goto L66c9b8;}
}
B66c983:L66c983:{c.instructions+=3;NFSU2_TR(0x66c983);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c986:{NFSU2_TR(0x66c986);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66c989:{NFSU2_TR(0x66c989);
if(r1(R+518)){{goto L66c990;}}
}
B66c98b:L66c98b:{c.instructions+=2;NFSU2_TR(0x66c98b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B66c98e:{NFSU2_TR(0x66c98e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c97cu);}goto L66c97c;}}
}
B66c990:L66c990:{c.instructions+=13;NFSU2_TR(0x66c990);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66c996:{NFSU2_TR(0x66c996);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66c998:{NFSU2_TR(0x66c998);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66c99c:{NFSU2_TR(0x66c99c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B66c99f:{NFSU2_TR(0x66c99f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c9a0:{NFSU2_TR(0x66c9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c9a3:{NFSU2_TR(0x66c9a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66c9a6:{NFSU2_TR(0x66c9a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c9a9:{NFSU2_TR(0x66c9a9);
__builtin_memmove((R+4),(R+24),4);
}
B66c9ab:{NFSU2_TR(0x66c9ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c9ae:{NFSU2_TR(0x66c9ae);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66c9b0:{NFSU2_TR(0x66c9b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66c9b3:{NFSU2_TR(0x66c9b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c9b8ull));
TAIL_STATIC(0x662331u,662);
}
B66c9b8:L66c9b8:{c.instructions+=3;NFSU2_TR(0x66c9b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66c9b9:{NFSU2_TR(0x66c9b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66c9ba:{NFSU2_TR(0x66c9ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66c9bd:L66c9bd:{c.instructions+=8;NFSU2_TR(0x66c9bd);
__builtin_memmove((R+28),(R+28),4);
}
B66c9bf:{NFSU2_TR(0x66c9bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c9c0:{NFSU2_TR(0x66c9c0);
__builtin_memmove((R+20),(R+16),4);
}
B66c9c2:{NFSU2_TR(0x66c9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66c9c5:{NFSU2_TR(0x66c9c5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66c9c7:{NFSU2_TR(0x66c9c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c9c8:{NFSU2_TR(0x66c9c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66c9cb:{NFSU2_TR(0x66c9cb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66c9e4;}}
}
B66c9cd:L66c9cd:{c.instructions+=1;NFSU2_TR(0x66c9cd);
w4(R+0,u32(~u32(r4(R+0))));
}
B66c9cf:L66c9cf:{c.instructions+=6;NFSU2_TR(0x66c9cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c9d2:{NFSU2_TR(0x66c9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66c9d5:{NFSU2_TR(0x66c9d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c9d6:{NFSU2_TR(0x66c9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66c9d9:{NFSU2_TR(0x66c9d9);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B66c9db:{NFSU2_TR(0x66c9db);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66c9fb;}}
}
B66c9dd:L66c9dd:{c.instructions+=2;NFSU2_TR(0x66c9dd);
w4(R+0,u32(0x8876086cull));
}
B66c9e2:{NFSU2_TR(0x66c9e2);
{goto L66ca22;}
}
B66c9e4:L66c9e4:{c.instructions+=5;NFSU2_TR(0x66c9e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c9e6:{NFSU2_TR(0x66c9e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c9e8:{NFSU2_TR(0x66c9e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66c9e9:{NFSU2_TR(0x66c9e9);
__builtin_memmove((R+4),(R+28),4);
}
B66c9eb:{NFSU2_TR(0x66c9eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66c9f0ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66c9f0:L66c9f0:{c.instructions+=2;NFSU2_TR(0x66c9f0);
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
B66c9f2:{NFSU2_TR(0x66c9f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c9cfu);}goto L66c9cf;}}
}
B66c9f4:L66c9f4:{c.instructions+=2;NFSU2_TR(0x66c9f4);
w4(R+0,u32(0x8876086cull));
}
B66c9f9:{NFSU2_TR(0x66c9f9);
{goto L66ca23;}
}
B66c9fb:L66c9fb:{c.instructions+=3;NFSU2_TR(0x66c9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66c9fe:{NFSU2_TR(0x66c9fe);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B66ca00:{NFSU2_TR(0x66ca00);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66c9ddu);}goto L66c9dd;}}
}
B66ca02:L66ca02:{c.instructions+=12;NFSU2_TR(0x66ca02);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66ca08:{NFSU2_TR(0x66ca08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66ca0b:{NFSU2_TR(0x66ca0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ca0c:{NFSU2_TR(0x66ca0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B66ca0e:{NFSU2_TR(0x66ca0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B66ca11:{NFSU2_TR(0x66ca11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ca14:{NFSU2_TR(0x66ca14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ca17:{NFSU2_TR(0x66ca17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66ca19:{NFSU2_TR(0x66ca19);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66ca1c:{NFSU2_TR(0x66ca1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ca1f:{NFSU2_TR(0x66ca1f);
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
B66ca21:{NFSU2_TR(0x66ca21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66ca22:L66ca22:{c.instructions+=1;NFSU2_TR(0x66ca22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66ca23:L66ca23:{c.instructions+=3;NFSU2_TR(0x66ca23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66ca24:{NFSU2_TR(0x66ca24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66ca25:{NFSU2_TR(0x66ca25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66ca28:L66ca28:{c.instructions+=14;NFSU2_TR(0x66ca28);
__builtin_memmove((R+28),(R+28),4);
}
B66ca2a:{NFSU2_TR(0x66ca2a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ca2b:{NFSU2_TR(0x66ca2b);
__builtin_memmove((R+20),(R+16),4);
}
B66ca2d:{NFSU2_TR(0x66ca2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B66ca30:{NFSU2_TR(0x66ca30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ca33:{NFSU2_TR(0x66ca33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ca34:{NFSU2_TR(0x66ca34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66ca37:{NFSU2_TR(0x66ca37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ca38:{NFSU2_TR(0x66ca38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66ca3b:{NFSU2_TR(0x66ca3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ca3c:{NFSU2_TR(0x66ca3c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66ca3e:{NFSU2_TR(0x66ca3e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66ca3f:{NFSU2_TR(0x66ca3f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66ca41:{NFSU2_TR(0x66ca41);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66ca4c;}}
}
B66ca43:L66ca43:{c.instructions+=4;NFSU2_TR(0x66ca43);
w4(R+4,u32(~u32(r4(R+4))));
}
B66ca45:{NFSU2_TR(0x66ca45);
__builtin_memmove((R+8),(R+4),4);
}
B66ca47:{NFSU2_TR(0x66ca47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ca4a:{NFSU2_TR(0x66ca4a);
{goto L66ca89;}
}
B66ca4c:L66ca4c:{c.instructions+=16;NFSU2_TR(0x66ca4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66ca52:{NFSU2_TR(0x66ca52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66ca54:{NFSU2_TR(0x66ca54);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ca57:{NFSU2_TR(0x66ca57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66ca59:{NFSU2_TR(0x66ca59);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+8)),r4(U+0));
}
B66ca5f:{NFSU2_TR(0x66ca5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66ca61:{NFSU2_TR(0x66ca61);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ca64:{NFSU2_TR(0x66ca64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66ca66:{NFSU2_TR(0x66ca66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ca67:{NFSU2_TR(0x66ca67);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66ca6e:{NFSU2_TR(0x66ca6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66ca70:{NFSU2_TR(0x66ca70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ca71:{NFSU2_TR(0x66ca71);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ca72:{NFSU2_TR(0x66ca72);
__builtin_memmove((R+4),(R+12),4);
}
B66ca74:{NFSU2_TR(0x66ca74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ca77:{NFSU2_TR(0x66ca77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ca7cull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66ca7c:L66ca7c:{c.instructions+=3;NFSU2_TR(0x66ca7c);
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
B66ca7e:{NFSU2_TR(0x66ca7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ca81:{NFSU2_TR(0x66ca81);
if(r1(R+518)){{goto L66cbdf;}}
}
B66ca87:L66ca87:{c.instructions+=1;NFSU2_TR(0x66ca87);
__builtin_memmove((R+8),(R+0),4);
}
B66ca89:L66ca89:{c.instructions+=4;NFSU2_TR(0x66ca89);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ca8c:{NFSU2_TR(0x66ca8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ca8f:{NFSU2_TR(0x66ca8f);
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
B66ca91:{NFSU2_TR(0x66ca91);
if(r1(R+518)){{goto L66cbdf;}}
}
B66ca97:L66ca97:{c.instructions+=2;NFSU2_TR(0x66ca97);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66ca9b:{NFSU2_TR(0x66ca9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cbdf;}}
}
B66caa1:L66caa1:{c.instructions+=2;NFSU2_TR(0x66caa1);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B66caa3:{NFSU2_TR(0x66caa3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66cbdf;}}
}
B66caa9:L66caa9:{c.instructions+=2;NFSU2_TR(0x66caa9);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66caad:{NFSU2_TR(0x66caad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cac2;}}
}
B66caaf:L66caaf:{c.instructions+=6;NFSU2_TR(0x66caaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cab0:{NFSU2_TR(0x66cab0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66cab3:{NFSU2_TR(0x66cab3);
w4(R+8,u32(~u32(r4(R+8))));
}
B66cab5:{NFSU2_TR(0x66cab5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cab6:{NFSU2_TR(0x66cab6);
__builtin_memmove((R+4),(R+12),4);
}
B66cab8:{NFSU2_TR(0x66cab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cabdull));
TAIL_STATIC(0x666486u,666);
}
B66cabd:L66cabd:{c.instructions+=1;NFSU2_TR(0x66cabd);
{goto L66cbe4;}
}
B66cac2:L66cac2:{c.instructions+=3;NFSU2_TR(0x66cac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cac5:{NFSU2_TR(0x66cac5);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66cac6:{NFSU2_TR(0x66cac6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cbdf;}}
}
B66cacc:L66cacc:{c.instructions+=6;NFSU2_TR(0x66cacc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66cace:{NFSU2_TR(0x66cace);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66cad1:{NFSU2_TR(0x66cad1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66cad4:{NFSU2_TR(0x66cad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B66cad6:{NFSU2_TR(0x66cad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66cadd:{NFSU2_TR(0x66cadd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66cae2;}}
}
B66cadf:L66cadf:{c.instructions+=1;NFSU2_TR(0x66cadf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cae2:L66cae2:{c.instructions+=2;NFSU2_TR(0x66cae2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66cae3:{NFSU2_TR(0x66cae3);
if(r1(R+518)){{goto L66cb8b;}}
}
B66cae9:L66cae9:{c.instructions+=2;NFSU2_TR(0x66cae9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66caea:{NFSU2_TR(0x66caea);
if(r1(R+518)){{goto L66cb49;}}
}
B66caec:L66caec:{c.instructions+=2;NFSU2_TR(0x66caec);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66caed:{NFSU2_TR(0x66caed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cbdf;}}
}
B66caf3:L66caf3:{c.instructions+=2;NFSU2_TR(0x66caf3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66caf6:{NFSU2_TR(0x66caf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cb15;}}
}
B66caf8:L66caf8:{c.instructions+=6;NFSU2_TR(0x66caf8);
__builtin_memmove((R+4),(R+24),4);
}
B66cafa:{NFSU2_TR(0x66cafa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66cafd:{NFSU2_TR(0x66cafd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66cb00:{NFSU2_TR(0x66cb00);
__builtin_memmove((R+0),(R+4),4);
}
B66cb02:{NFSU2_TR(0x66cb02);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66cb05:{NFSU2_TR(0x66cb05);
__builtin_memmove((R+28),(R+12),4);
}
B66cb07:L66cb07:{c.instructions+=1;NFSU2_TR(0x66cb07);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66cb09;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cb07u);}goto L66cb07;}
}
B66cb09:L66cb09:{c.instructions+=2;NFSU2_TR(0x66cb09);
__builtin_memmove((R+4),(R+0),4);
}
B66cb0b:{NFSU2_TR(0x66cb0b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66cb0e:L66cb0e:{c.instructions+=1;NFSU2_TR(0x66cb0e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L66cb10;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cb0eu);}goto L66cb0e;}
}
B66cb10:L66cb10:{c.instructions+=1;NFSU2_TR(0x66cb10);
{goto L66cbd2;}
}
B66cb15:L66cb15:{c.instructions+=2;NFSU2_TR(0x66cb15);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66cb17:{NFSU2_TR(0x66cb17);
if(r1(R+518)){{goto L66cbd2;}}
}
B66cb1d:L66cb1d:{c.instructions+=2;NFSU2_TR(0x66cb1d);
__builtin_memmove((R+28),(R+0),4);
}
B66cb1f:{NFSU2_TR(0x66cb1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B66cb22:L66cb22:{c.instructions+=3;NFSU2_TR(0x66cb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66cb25:{NFSU2_TR(0x66cb25);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66cb27:{NFSU2_TR(0x66cb27);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66cb3b;}}
}
B66cb29:L66cb29:{c.instructions+=3;NFSU2_TR(0x66cb29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cb2c:{NFSU2_TR(0x66cb2c);
__builtin_memmove((R+0),(R+12),4);
}
B66cb2e:{NFSU2_TR(0x66cb2e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B66cb30:L66cb30:{c.instructions+=5;NFSU2_TR(0x66cb30);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66cb33:{NFSU2_TR(0x66cb33);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66cb35:{NFSU2_TR(0x66cb35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66cb38:{NFSU2_TR(0x66cb38);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66cb39:{NFSU2_TR(0x66cb39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cb30u);}goto L66cb30;}}
}
B66cb3b:L66cb3b:{c.instructions+=4;NFSU2_TR(0x66cb3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66cb3f:{NFSU2_TR(0x66cb3f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B66cb41:{NFSU2_TR(0x66cb41);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B66cb42:{NFSU2_TR(0x66cb42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cb22u);}goto L66cb22;}}
}
B66cb44:L66cb44:{c.instructions+=1;NFSU2_TR(0x66cb44);
{goto L66cbd2;}
}
B66cb49:L66cb49:{c.instructions+=2;NFSU2_TR(0x66cb49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66cb4b:{NFSU2_TR(0x66cb4b);
if(r1(R+518)){{goto L66cbd2;}}
}
B66cb51:L66cb51:{c.instructions+=3;NFSU2_TR(0x66cb51);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66cb54:{NFSU2_TR(0x66cb54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cb57:{NFSU2_TR(0x66cb57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cb5a:L66cb5a:{c.instructions+=3;NFSU2_TR(0x66cb5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66cb5d:{NFSU2_TR(0x66cb5d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66cb5f:{NFSU2_TR(0x66cb5f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66cb7d;}}
}
B66cb61:L66cb61:{c.instructions+=4;NFSU2_TR(0x66cb61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66cb64:{NFSU2_TR(0x66cb64);
__builtin_memmove((R+24),(R+12),4);
}
B66cb66:{NFSU2_TR(0x66cb66);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B66cb68:{NFSU2_TR(0x66cb68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cb6b:L66cb6b:{c.instructions+=2;NFSU2_TR(0x66cb6b);
{u32 ea_=u32(r4(R+28)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66cb6e:{NFSU2_TR(0x66cb6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cb73ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66cb73:L66cb73:{c.instructions+=4;NFSU2_TR(0x66cb73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B66cb75:{NFSU2_TR(0x66cb75);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66cb78:{NFSU2_TR(0x66cb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66cb7b:{NFSU2_TR(0x66cb7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cb6bu);}goto L66cb6b;}}
}
B66cb7d:L66cb7d:{c.instructions+=4;NFSU2_TR(0x66cb7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B66cb80:{NFSU2_TR(0x66cb80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66cb84:{NFSU2_TR(0x66cb84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66cb87:{NFSU2_TR(0x66cb87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cb5au);}goto L66cb5a;}}
}
B66cb89:L66cb89:{c.instructions+=1;NFSU2_TR(0x66cb89);
{goto L66cbd2;}
}
B66cb8b:L66cb8b:{c.instructions+=2;NFSU2_TR(0x66cb8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66cb8d:{NFSU2_TR(0x66cb8d);
if(r1(R+518)){{goto L66cbd2;}}
}
B66cb8f:L66cb8f:{c.instructions+=3;NFSU2_TR(0x66cb8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66cb92:{NFSU2_TR(0x66cb92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cb95:{NFSU2_TR(0x66cb95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cb98:L66cb98:{c.instructions+=3;NFSU2_TR(0x66cb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66cb9b:{NFSU2_TR(0x66cb9b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66cb9d:{NFSU2_TR(0x66cb9d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66cbc6;}}
}
B66cb9f:L66cb9f:{c.instructions+=3;NFSU2_TR(0x66cb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66cba2:{NFSU2_TR(0x66cba2);
__builtin_memmove((R+4),(R+12),4);
}
B66cba4:{NFSU2_TR(0x66cba4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B66cba6:L66cba6:{c.instructions+=6;NFSU2_TR(0x66cba6);
{u32 ea_=u32(r4(R+24)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66cba9:{NFSU2_TR(0x66cba9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66cbaf:{NFSU2_TR(0x66cbaf);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B66cbb1:{NFSU2_TR(0x66cbb1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66cbb3:{NFSU2_TR(0x66cbb3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66cbb6:{NFSU2_TR(0x66cbb6);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L66cbbc;}}
}
B66cbb8:L66cbb8:{c.instructions+=2;NFSU2_TR(0x66cbb8);
__builtin_memmove((R+0),(R+28),4);
}
B66cbba:{NFSU2_TR(0x66cbba);
{goto L66cbbe;}
}
B66cbbc:L66cbbc:{c.instructions+=1;NFSU2_TR(0x66cbbc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66cbbe:L66cbbe:{c.instructions+=4;NFSU2_TR(0x66cbbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66cbc0:{NFSU2_TR(0x66cbc0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66cbc3:{NFSU2_TR(0x66cbc3);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66cbc4:{NFSU2_TR(0x66cbc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cba6u);}goto L66cba6;}}
}
B66cbc6:L66cbc6:{c.instructions+=4;NFSU2_TR(0x66cbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B66cbc9:{NFSU2_TR(0x66cbc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66cbcd:{NFSU2_TR(0x66cbcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66cbd0:{NFSU2_TR(0x66cbd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cb98u);}goto L66cb98;}}
}
B66cbd2:L66cbd2:{c.instructions+=3;NFSU2_TR(0x66cbd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66cbd5:{NFSU2_TR(0x66cbd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cbd8:{NFSU2_TR(0x66cbd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cbddull));
TAIL_STATIC(0x66055cu,660);
}
B66cbdd:L66cbdd:{c.instructions+=1;NFSU2_TR(0x66cbdd);
{goto L66cbe4;}
}
B66cbdf:L66cbdf:{c.instructions+=1;NFSU2_TR(0x66cbdf);
w4(R+0,u32(0x8876086cull));
}
B66cbe4:L66cbe4:{c.instructions+=5;NFSU2_TR(0x66cbe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66cbe5:{NFSU2_TR(0x66cbe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66cbe6:{NFSU2_TR(0x66cbe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66cbe7:{NFSU2_TR(0x66cbe7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66cbe8:{NFSU2_TR(0x66cbe8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66cbeb:L66cbeb:{c.instructions+=10;NFSU2_TR(0x66cbeb);
__builtin_memmove((R+28),(R+28),4);
}
B66cbed:{NFSU2_TR(0x66cbed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cbee:{NFSU2_TR(0x66cbee);
__builtin_memmove((R+20),(R+16),4);
}
B66cbf0:{NFSU2_TR(0x66cbf0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cbf1:{NFSU2_TR(0x66cbf1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cbf2:{NFSU2_TR(0x66cbf2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cbf3:{NFSU2_TR(0x66cbf3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66cbf5:{NFSU2_TR(0x66cbf5);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66cbf8:{NFSU2_TR(0x66cbf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cbfb:{NFSU2_TR(0x66cbfb);
if(r1(R+518)){{goto L66cd25;}}
}
B66cc01:L66cc01:{c.instructions+=4;NFSU2_TR(0x66cc01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cc02:{NFSU2_TR(0x66cc02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66cc05:{NFSU2_TR(0x66cc05);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B66cc07:{NFSU2_TR(0x66cc07);
if(r1(R+518)){{goto L66cd1d;}}
}
B66cc0d:L66cc0d:{c.instructions+=5;NFSU2_TR(0x66cc0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cc10:{NFSU2_TR(0x66cc10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cc11:{NFSU2_TR(0x66cc11);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cc13:{NFSU2_TR(0x66cc13);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66cc16:{NFSU2_TR(0x66cc16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cc1bull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66cc1b:L66cc1b:{c.instructions+=2;NFSU2_TR(0x66cc1b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B66cc1d:{NFSU2_TR(0x66cc1d);
if(r1(R+518)){{goto L66cd1d;}}
}
B66cc23:L66cc23:{c.instructions+=4;NFSU2_TR(0x66cc23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cc26:{NFSU2_TR(0x66cc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66cc29:{NFSU2_TR(0x66cc29);
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
B66cc2b:{NFSU2_TR(0x66cc2b);
if(r1(R+518)){{goto L66cd1d;}}
}
B66cc31:L66cc31:{c.instructions+=2;NFSU2_TR(0x66cc31);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66cc35:{NFSU2_TR(0x66cc35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cd1d;}}
}
B66cc3b:L66cc3b:{c.instructions+=2;NFSU2_TR(0x66cc3b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66cc3e:{NFSU2_TR(0x66cc3e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66cd1d;}}
}
B66cc44:L66cc44:{c.instructions+=3;NFSU2_TR(0x66cc44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66cc47:{NFSU2_TR(0x66cc47);
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
B66cc48:{NFSU2_TR(0x66cc48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cd1d;}}
}
B66cc4e:L66cc4e:{c.instructions+=9;NFSU2_TR(0x66cc4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66cc50:{NFSU2_TR(0x66cc50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66cc53:{NFSU2_TR(0x66cc53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66cc55:{NFSU2_TR(0x66cc55);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cc57:{NFSU2_TR(0x66cc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cc5a:{NFSU2_TR(0x66cc5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66cc5b:{NFSU2_TR(0x66cc5b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66cc5d:{NFSU2_TR(0x66cc5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cc60:{NFSU2_TR(0x66cc60);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66cc65;}}
}
B66cc62:L66cc62:{c.instructions+=1;NFSU2_TR(0x66cc62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cc65:L66cc65:{c.instructions+=5;NFSU2_TR(0x66cc65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cc68:{NFSU2_TR(0x66cc68);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66cc6b:{NFSU2_TR(0x66cc6b);
__builtin_memmove((R+12),(R+4),4);
}
B66cc6d:{NFSU2_TR(0x66cc6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66cc70:{NFSU2_TR(0x66cc70);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66cc72:L66cc72:{c.instructions+=1;NFSU2_TR(0x66cc72);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L66cc74;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cc72u);}goto L66cc72;}
}
B66cc74:L66cc74:{c.instructions+=3;NFSU2_TR(0x66cc74);
__builtin_memmove((R+4),(R+12),4);
}
B66cc76:{NFSU2_TR(0x66cc76);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66cc79:{NFSU2_TR(0x66cc79);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B66cc7a:L66cc7a:{c.instructions+=1;NFSU2_TR(0x66cc7a);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L66cc7c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cc7au);}goto L66cc7a;}
}
B66cc7c:L66cc7c:{c.instructions+=1;NFSU2_TR(0x66cc7c);
if(r1(R+518)){{goto L66cce4;}}
}
B66cc7e:L66cc7e:{c.instructions+=2;NFSU2_TR(0x66cc7e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B66cc7f:{NFSU2_TR(0x66cc7f);
if(r1(R+518)){{goto L66ccb6;}}
}
B66cc81:L66cc81:{c.instructions+=2;NFSU2_TR(0x66cc81);
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
B66cc82:{NFSU2_TR(0x66cc82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cd1d;}}
}
B66cc88:L66cc88:{c.instructions+=3;NFSU2_TR(0x66cc88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66cc8b:{NFSU2_TR(0x66cc8b);
__builtin_memmove((R+24),(R+8),4);
}
B66cc8d:{NFSU2_TR(0x66cc8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B66cc90:L66cc90:{c.instructions+=3;NFSU2_TR(0x66cc90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66cc93:{NFSU2_TR(0x66cc93);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66cc95:{NFSU2_TR(0x66cc95);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ccaa;}}
}
B66cc97:L66cc97:{c.instructions+=3;NFSU2_TR(0x66cc97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66cc9a:{NFSU2_TR(0x66cc9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cc9d:{NFSU2_TR(0x66cc9d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B66cc9f:L66cc9f:{c.instructions+=5;NFSU2_TR(0x66cc9f);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66cca2:{NFSU2_TR(0x66cca2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66cca4:{NFSU2_TR(0x66cca4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66cca7:{NFSU2_TR(0x66cca7);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66cca8:{NFSU2_TR(0x66cca8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cc9fu);}goto L66cc9f;}}
}
B66ccaa:L66ccaa:{c.instructions+=4;NFSU2_TR(0x66ccaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ccad:{NFSU2_TR(0x66ccad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x10ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ccb1:{NFSU2_TR(0x66ccb1);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66ccb2:{NFSU2_TR(0x66ccb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cc90u);}goto L66cc90;}}
}
B66ccb4:L66ccb4:{c.instructions+=1;NFSU2_TR(0x66ccb4);
{goto L66cd24;}
}
B66ccb6:L66ccb6:{c.instructions+=3;NFSU2_TR(0x66ccb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66ccb9:{NFSU2_TR(0x66ccb9);
__builtin_memmove((R+24),(R+8),4);
}
B66ccbb:{NFSU2_TR(0x66ccbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B66ccbe:L66ccbe:{c.instructions+=3;NFSU2_TR(0x66ccbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ccc1:{NFSU2_TR(0x66ccc1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ccc3:{NFSU2_TR(0x66ccc3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ccd8;}}
}
B66ccc5:L66ccc5:{c.instructions+=3;NFSU2_TR(0x66ccc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ccc8:{NFSU2_TR(0x66ccc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cccb:{NFSU2_TR(0x66cccb);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B66cccd:L66cccd:{c.instructions+=5;NFSU2_TR(0x66cccd);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66ccd0:{NFSU2_TR(0x66ccd0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66ccd2:{NFSU2_TR(0x66ccd2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66ccd5:{NFSU2_TR(0x66ccd5);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66ccd6:{NFSU2_TR(0x66ccd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66cccdu);}goto L66cccd;}}
}
B66ccd8:L66ccd8:{c.instructions+=4;NFSU2_TR(0x66ccd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ccdb:{NFSU2_TR(0x66ccdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x10ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ccdf:{NFSU2_TR(0x66ccdf);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66cce0:{NFSU2_TR(0x66cce0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ccbeu);}goto L66ccbe;}}
}
B66cce2:L66cce2:{c.instructions+=1;NFSU2_TR(0x66cce2);
{goto L66cd24;}
}
B66cce4:L66cce4:{c.instructions+=3;NFSU2_TR(0x66cce4);
__builtin_memmove((R+28),(R+8),4);
}
B66cce6:{NFSU2_TR(0x66cce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66cce9:{NFSU2_TR(0x66cce9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B66ccec:L66ccec:{c.instructions+=3;NFSU2_TR(0x66ccec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66ccef:{NFSU2_TR(0x66ccef);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ccf1:{NFSU2_TR(0x66ccf1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66cd11;}}
}
B66ccf3:L66ccf3:{c.instructions+=3;NFSU2_TR(0x66ccf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ccf6:{NFSU2_TR(0x66ccf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ccf9:{NFSU2_TR(0x66ccf9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B66ccfb:L66ccfb:{c.instructions+=9;NFSU2_TR(0x66ccfb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66ccfd:{NFSU2_TR(0x66ccfd);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B66cd00:{NFSU2_TR(0x66cd00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B66cd03:{NFSU2_TR(0x66cd03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cd06:{NFSU2_TR(0x66cd06);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66cd09:{NFSU2_TR(0x66cd09);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66cd0b:{NFSU2_TR(0x66cd0b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66cd0e:{NFSU2_TR(0x66cd0e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B66cd0f:{NFSU2_TR(0x66cd0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ccfbu);}goto L66ccfb;}}
}
B66cd11:L66cd11:{c.instructions+=4;NFSU2_TR(0x66cd11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B66cd14:{NFSU2_TR(0x66cd14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x10ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66cd18:{NFSU2_TR(0x66cd18);
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
B66cd19:{NFSU2_TR(0x66cd19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ccecu);}goto L66ccec;}}
}
B66cd1b:L66cd1b:{c.instructions+=1;NFSU2_TR(0x66cd1b);
{goto L66cd24;}
}
B66cd1d:L66cd1d:{c.instructions+=1;NFSU2_TR(0x66cd1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66cd24:L66cd24:{c.instructions+=1;NFSU2_TR(0x66cd24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66cd25:L66cd25:{c.instructions+=5;NFSU2_TR(0x66cd25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66cd28:{NFSU2_TR(0x66cd28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66cd29:{NFSU2_TR(0x66cd29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66cd2a:{NFSU2_TR(0x66cd2a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66cd2b:{NFSU2_TR(0x66cd2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66cd2e:L66cd2e:{c.instructions+=11;NFSU2_TR(0x66cd2e);
__builtin_memmove((R+28),(R+28),4);
}
B66cd30:{NFSU2_TR(0x66cd30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cd31:{NFSU2_TR(0x66cd31);
__builtin_memmove((R+20),(R+16),4);
}
B66cd33:{NFSU2_TR(0x66cd33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cd34:{NFSU2_TR(0x66cd34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66cd37:{NFSU2_TR(0x66cd37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cd38:{NFSU2_TR(0x66cd38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66cd3b:{NFSU2_TR(0x66cd3b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66cd3d:{NFSU2_TR(0x66cd3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cd3e:{NFSU2_TR(0x66cd3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66cd41:{NFSU2_TR(0x66cd41);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66cd47;}}
}
B66cd43:L66cd43:{c.instructions+=2;NFSU2_TR(0x66cd43);
w4(R+24,u32(~u32(r4(R+24))));
}
B66cd45:{NFSU2_TR(0x66cd45);
{goto L66cd82;}
}
B66cd47:L66cd47:{c.instructions+=18;NFSU2_TR(0x66cd47);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66cd4d:{NFSU2_TR(0x66cd4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66cd4f:{NFSU2_TR(0x66cd4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66cd56:{NFSU2_TR(0x66cd56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66cd58:{NFSU2_TR(0x66cd58);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+4)),r4(U+0));
}
B66cd5e:{NFSU2_TR(0x66cd5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66cd60:{NFSU2_TR(0x66cd60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cd63:{NFSU2_TR(0x66cd63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66cd65:{NFSU2_TR(0x66cd65);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cd67:{NFSU2_TR(0x66cd67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66cd68:{NFSU2_TR(0x66cd68);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cd6b:{NFSU2_TR(0x66cd6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66cd6d:{NFSU2_TR(0x66cd6d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cd6f:{NFSU2_TR(0x66cd6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cd71:{NFSU2_TR(0x66cd71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cd74:{NFSU2_TR(0x66cd74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cd75:{NFSU2_TR(0x66cd75);
__builtin_memmove((R+4),(R+28),4);
}
B66cd77:{NFSU2_TR(0x66cd77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cd7cull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66cd7c:L66cd7c:{c.instructions+=3;NFSU2_TR(0x66cd7c);
__builtin_memmove((R+24),(R+0),4);
}
B66cd7e:{NFSU2_TR(0x66cd7e);
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
B66cd80:{NFSU2_TR(0x66cd80);
if(r1(R+518)){{goto L66cdc2;}}
}
B66cd82:L66cd82:{c.instructions+=3;NFSU2_TR(0x66cd82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66cd85:{NFSU2_TR(0x66cd85);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B66cd89:{NFSU2_TR(0x66cd89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cdc2;}}
}
B66cd8b:L66cd8b:{c.instructions+=2;NFSU2_TR(0x66cd8b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B66cd8e:{NFSU2_TR(0x66cd8e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66cdc2;}}
}
B66cd90:L66cd90:{c.instructions+=2;NFSU2_TR(0x66cd90);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66cd94:{NFSU2_TR(0x66cd94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cdc2;}}
}
B66cd96:L66cd96:{c.instructions+=5;NFSU2_TR(0x66cd96);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66cd9a:{NFSU2_TR(0x66cd9a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cd9b:{NFSU2_TR(0x66cd9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66cd9e:{NFSU2_TR(0x66cd9e);
__builtin_memmove((R+4),(R+28),4);
}
B66cda0:{NFSU2_TR(0x66cda0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cdac;}}
}
B66cda2:L66cda2:{c.instructions+=3;NFSU2_TR(0x66cda2);
w4(R+24,u32(~u32(r4(R+24))));
}
B66cda4:{NFSU2_TR(0x66cda4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cda5:{NFSU2_TR(0x66cda5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cdaaull));
TAIL_STATIC(0x6665cbu,666);
}
B66cdaa:L66cdaa:{c.instructions+=1;NFSU2_TR(0x66cdaa);
{goto L66cdc7;}
}
B66cdac:L66cdac:{c.instructions+=3;NFSU2_TR(0x66cdac);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66cdae:{NFSU2_TR(0x66cdae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cdaf:{NFSU2_TR(0x66cdaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cdb4ull));
TAIL_STATIC(0x65cff6u,65c);
}
B66cdb4:L66cdb4:{c.instructions+=2;NFSU2_TR(0x66cdb4);
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
B66cdb6:{NFSU2_TR(0x66cdb6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66cdc7;}}
}
B66cdb8:L66cdb8:{c.instructions+=3;NFSU2_TR(0x66cdb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cdb9:{NFSU2_TR(0x66cdb9);
__builtin_memmove((R+4),(R+28),4);
}
B66cdbb:{NFSU2_TR(0x66cdbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cdc0ull));
TAIL_STATIC(0x66055cu,660);
}
B66cdc0:L66cdc0:{c.instructions+=1;NFSU2_TR(0x66cdc0);
{goto L66cdc7;}
}
B66cdc2:L66cdc2:{c.instructions+=1;NFSU2_TR(0x66cdc2);
w4(R+0,u32(0x8876086cull));
}
B66cdc7:L66cdc7:{c.instructions+=5;NFSU2_TR(0x66cdc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66cdc8:{NFSU2_TR(0x66cdc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66cdc9:{NFSU2_TR(0x66cdc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66cdca:{NFSU2_TR(0x66cdca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66cdcb:{NFSU2_TR(0x66cdcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66cdce:L66cdce:{c.instructions+=5;NFSU2_TR(0x66cdce);
__builtin_memmove((R+28),(R+28),4);
}
B66cdd0:{NFSU2_TR(0x66cdd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cdd1:{NFSU2_TR(0x66cdd1);
__builtin_memmove((R+20),(R+16),4);
}
B66cdd3:{NFSU2_TR(0x66cdd3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66cdd7:{NFSU2_TR(0x66cdd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cddd;}}
}
B66cdd9:L66cdd9:{c.instructions+=2;NFSU2_TR(0x66cdd9);
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
B66cddb:{NFSU2_TR(0x66cddb);
{goto L66ce29;}
}
B66cddd:L66cddd:{c.instructions+=2;NFSU2_TR(0x66cddd);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66cde1:{NFSU2_TR(0x66cde1);
if(r1(R+518)){{goto L66ce24;}}
}
B66cde3:L66cde3:{c.instructions+=5;NFSU2_TR(0x66cde3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cde6:{NFSU2_TR(0x66cde6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cde8:{NFSU2_TR(0x66cde8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cdea:{NFSU2_TR(0x66cdea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66cded:{NFSU2_TR(0x66cded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cdf2ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66cdf2:L66cdf2:{c.instructions+=2;NFSU2_TR(0x66cdf2);
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
B66cdf4:{NFSU2_TR(0x66cdf4);
if(r1(R+518)){{goto L66ce24;}}
}
B66cdf6:L66cdf6:{c.instructions+=4;NFSU2_TR(0x66cdf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cdf9:{NFSU2_TR(0x66cdf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66cdfc:{NFSU2_TR(0x66cdfc);
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
B66cdfe:{NFSU2_TR(0x66cdfe);
if(r1(R+518)){{goto L66ce24;}}
}
B66ce00:L66ce00:{c.instructions+=2;NFSU2_TR(0x66ce00);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66ce04:{NFSU2_TR(0x66ce04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66ce24;}}
}
B66ce06:L66ce06:{c.instructions+=2;NFSU2_TR(0x66ce06);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66ce09:{NFSU2_TR(0x66ce09);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66ce24;}}
}
B66ce0b:L66ce0b:{c.instructions+=2;NFSU2_TR(0x66ce0b);
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
B66ce0f:{NFSU2_TR(0x66ce0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66ce24;}}
}
B66ce11:L66ce11:{c.instructions+=6;NFSU2_TR(0x66ce11);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66ce14:{NFSU2_TR(0x66ce14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66ce17:{NFSU2_TR(0x66ce17);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66ce19:{NFSU2_TR(0x66ce19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ce1a:{NFSU2_TR(0x66ce1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ce1d:{NFSU2_TR(0x66ce1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ce22ull));
TAIL_STATIC(0x65d28au,65d);
}
B66ce22:L66ce22:{c.instructions+=1;NFSU2_TR(0x66ce22);
{goto L66ce29;}
}
B66ce24:L66ce24:{c.instructions+=1;NFSU2_TR(0x66ce24);
w4(R+0,u32(0x8876086cull));
}
B66ce29:L66ce29:{c.instructions+=2;NFSU2_TR(0x66ce29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66ce2a:{NFSU2_TR(0x66ce2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66ce2d:L66ce2d:{c.instructions+=11;NFSU2_TR(0x66ce2d);
__builtin_memmove((R+28),(R+28),4);
}
B66ce2f:{NFSU2_TR(0x66ce2f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ce30:{NFSU2_TR(0x66ce30);
__builtin_memmove((R+20),(R+16),4);
}
B66ce32:{NFSU2_TR(0x66ce32);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ce33:{NFSU2_TR(0x66ce33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66ce36:{NFSU2_TR(0x66ce36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ce37:{NFSU2_TR(0x66ce37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66ce3a:{NFSU2_TR(0x66ce3a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66ce3c:{NFSU2_TR(0x66ce3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ce3d:{NFSU2_TR(0x66ce3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66ce40:{NFSU2_TR(0x66ce40);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66ce46;}}
}
B66ce42:L66ce42:{c.instructions+=2;NFSU2_TR(0x66ce42);
w4(R+24,u32(~u32(r4(R+24))));
}
B66ce44:{NFSU2_TR(0x66ce44);
{goto L66ce81;}
}
B66ce46:L66ce46:{c.instructions+=18;NFSU2_TR(0x66ce46);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66ce4c:{NFSU2_TR(0x66ce4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66ce4e:{NFSU2_TR(0x66ce4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66ce55:{NFSU2_TR(0x66ce55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66ce57:{NFSU2_TR(0x66ce57);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+4)),r4(U+0));
}
B66ce5d:{NFSU2_TR(0x66ce5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66ce5f:{NFSU2_TR(0x66ce5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ce62:{NFSU2_TR(0x66ce62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66ce64:{NFSU2_TR(0x66ce64);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ce66:{NFSU2_TR(0x66ce66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66ce67:{NFSU2_TR(0x66ce67);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ce6a:{NFSU2_TR(0x66ce6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66ce6c:{NFSU2_TR(0x66ce6c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ce6e:{NFSU2_TR(0x66ce6e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ce70:{NFSU2_TR(0x66ce70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ce73:{NFSU2_TR(0x66ce73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ce74:{NFSU2_TR(0x66ce74);
__builtin_memmove((R+4),(R+28),4);
}
B66ce76:{NFSU2_TR(0x66ce76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ce7bull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66ce7b:L66ce7b:{c.instructions+=3;NFSU2_TR(0x66ce7b);
__builtin_memmove((R+24),(R+0),4);
}
B66ce7d:{NFSU2_TR(0x66ce7d);
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
B66ce7f:{NFSU2_TR(0x66ce7f);
if(r1(R+518)){{goto L66cec1;}}
}
B66ce81:L66ce81:{c.instructions+=3;NFSU2_TR(0x66ce81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ce84:{NFSU2_TR(0x66ce84);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B66ce88:{NFSU2_TR(0x66ce88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cec1;}}
}
B66ce8a:L66ce8a:{c.instructions+=2;NFSU2_TR(0x66ce8a);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B66ce8d:{NFSU2_TR(0x66ce8d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66cec1;}}
}
B66ce8f:L66ce8f:{c.instructions+=2;NFSU2_TR(0x66ce8f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66ce93:{NFSU2_TR(0x66ce93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cec1;}}
}
B66ce95:L66ce95:{c.instructions+=5;NFSU2_TR(0x66ce95);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ce99:{NFSU2_TR(0x66ce99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ce9a:{NFSU2_TR(0x66ce9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66ce9d:{NFSU2_TR(0x66ce9d);
__builtin_memmove((R+4),(R+28),4);
}
B66ce9f:{NFSU2_TR(0x66ce9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66ceab;}}
}
B66cea1:L66cea1:{c.instructions+=3;NFSU2_TR(0x66cea1);
w4(R+24,u32(~u32(r4(R+24))));
}
B66cea3:{NFSU2_TR(0x66cea3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cea4:{NFSU2_TR(0x66cea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cea9ull));
TAIL_STATIC(0x666683u,666);
}
B66cea9:L66cea9:{c.instructions+=1;NFSU2_TR(0x66cea9);
{goto L66cec6;}
}
B66ceab:L66ceab:{c.instructions+=3;NFSU2_TR(0x66ceab);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66cead:{NFSU2_TR(0x66cead);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ceae:{NFSU2_TR(0x66ceae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ceb3ull));
TAIL_STATIC(0x65d51du,65d);
}
B66ceb3:L66ceb3:{c.instructions+=2;NFSU2_TR(0x66ceb3);
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
B66ceb5:{NFSU2_TR(0x66ceb5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66cec6;}}
}
B66ceb7:L66ceb7:{c.instructions+=3;NFSU2_TR(0x66ceb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ceb8:{NFSU2_TR(0x66ceb8);
__builtin_memmove((R+4),(R+28),4);
}
B66ceba:{NFSU2_TR(0x66ceba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cebfull));
TAIL_STATIC(0x66055cu,660);
}
B66cebf:L66cebf:{c.instructions+=1;NFSU2_TR(0x66cebf);
{goto L66cec6;}
}
B66cec1:L66cec1:{c.instructions+=1;NFSU2_TR(0x66cec1);
w4(R+0,u32(0x8876086cull));
}
B66cec6:L66cec6:{c.instructions+=5;NFSU2_TR(0x66cec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66cec7:{NFSU2_TR(0x66cec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66cec8:{NFSU2_TR(0x66cec8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66cec9:{NFSU2_TR(0x66cec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66ceca:{NFSU2_TR(0x66ceca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66cecd:L66cecd:{c.instructions+=5;NFSU2_TR(0x66cecd);
__builtin_memmove((R+28),(R+28),4);
}
B66cecf:{NFSU2_TR(0x66cecf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ced0:{NFSU2_TR(0x66ced0);
__builtin_memmove((R+20),(R+16),4);
}
B66ced2:{NFSU2_TR(0x66ced2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ced6:{NFSU2_TR(0x66ced6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cedc;}}
}
B66ced8:L66ced8:{c.instructions+=2;NFSU2_TR(0x66ced8);
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
B66ceda:{NFSU2_TR(0x66ceda);
{goto L66cf28;}
}
B66cedc:L66cedc:{c.instructions+=2;NFSU2_TR(0x66cedc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66cee0:{NFSU2_TR(0x66cee0);
if(r1(R+518)){{goto L66cf23;}}
}
B66cee2:L66cee2:{c.instructions+=5;NFSU2_TR(0x66cee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cee5:{NFSU2_TR(0x66cee5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cee7:{NFSU2_TR(0x66cee7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cee9:{NFSU2_TR(0x66cee9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66ceec:{NFSU2_TR(0x66ceec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cef1ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66cef1:L66cef1:{c.instructions+=2;NFSU2_TR(0x66cef1);
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
B66cef3:{NFSU2_TR(0x66cef3);
if(r1(R+518)){{goto L66cf23;}}
}
B66cef5:L66cef5:{c.instructions+=4;NFSU2_TR(0x66cef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cef8:{NFSU2_TR(0x66cef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66cefb:{NFSU2_TR(0x66cefb);
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
B66cefd:{NFSU2_TR(0x66cefd);
if(r1(R+518)){{goto L66cf23;}}
}
B66ceff:L66ceff:{c.instructions+=2;NFSU2_TR(0x66ceff);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66cf03:{NFSU2_TR(0x66cf03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cf23;}}
}
B66cf05:L66cf05:{c.instructions+=2;NFSU2_TR(0x66cf05);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66cf08:{NFSU2_TR(0x66cf08);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66cf23;}}
}
B66cf0a:L66cf0a:{c.instructions+=2;NFSU2_TR(0x66cf0a);
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
B66cf0e:{NFSU2_TR(0x66cf0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cf23;}}
}
B66cf10:L66cf10:{c.instructions+=6;NFSU2_TR(0x66cf10);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66cf13:{NFSU2_TR(0x66cf13);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66cf16:{NFSU2_TR(0x66cf16);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66cf18:{NFSU2_TR(0x66cf18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cf19:{NFSU2_TR(0x66cf19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cf1c:{NFSU2_TR(0x66cf1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cf21ull));
TAIL_STATIC(0x65d7aau,65d);
}
B66cf21:L66cf21:{c.instructions+=1;NFSU2_TR(0x66cf21);
{goto L66cf28;}
}
B66cf23:L66cf23:{c.instructions+=1;NFSU2_TR(0x66cf23);
w4(R+0,u32(0x8876086cull));
}
B66cf28:L66cf28:{c.instructions+=2;NFSU2_TR(0x66cf28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66cf29:{NFSU2_TR(0x66cf29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66cf2c:L66cf2c:{c.instructions+=11;NFSU2_TR(0x66cf2c);
__builtin_memmove((R+28),(R+28),4);
}
B66cf2e:{NFSU2_TR(0x66cf2e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cf2f:{NFSU2_TR(0x66cf2f);
__builtin_memmove((R+20),(R+16),4);
}
B66cf31:{NFSU2_TR(0x66cf31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cf32:{NFSU2_TR(0x66cf32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66cf35:{NFSU2_TR(0x66cf35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cf36:{NFSU2_TR(0x66cf36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66cf39:{NFSU2_TR(0x66cf39);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66cf3b:{NFSU2_TR(0x66cf3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cf3c:{NFSU2_TR(0x66cf3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66cf3f:{NFSU2_TR(0x66cf3f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66cf45;}}
}
B66cf41:L66cf41:{c.instructions+=2;NFSU2_TR(0x66cf41);
w4(R+24,u32(~u32(r4(R+24))));
}
B66cf43:{NFSU2_TR(0x66cf43);
{goto L66cf80;}
}
B66cf45:L66cf45:{c.instructions+=18;NFSU2_TR(0x66cf45);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66cf4b:{NFSU2_TR(0x66cf4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66cf4d:{NFSU2_TR(0x66cf4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66cf54:{NFSU2_TR(0x66cf54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66cf56:{NFSU2_TR(0x66cf56);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+4)),r4(U+0));
}
B66cf5c:{NFSU2_TR(0x66cf5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66cf5e:{NFSU2_TR(0x66cf5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cf61:{NFSU2_TR(0x66cf61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66cf63:{NFSU2_TR(0x66cf63);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cf65:{NFSU2_TR(0x66cf65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66cf66:{NFSU2_TR(0x66cf66);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cf69:{NFSU2_TR(0x66cf69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66cf6b:{NFSU2_TR(0x66cf6b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cf6d:{NFSU2_TR(0x66cf6d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cf6f:{NFSU2_TR(0x66cf6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66cf72:{NFSU2_TR(0x66cf72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cf73:{NFSU2_TR(0x66cf73);
__builtin_memmove((R+4),(R+28),4);
}
B66cf75:{NFSU2_TR(0x66cf75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cf7aull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66cf7a:L66cf7a:{c.instructions+=3;NFSU2_TR(0x66cf7a);
__builtin_memmove((R+24),(R+0),4);
}
B66cf7c:{NFSU2_TR(0x66cf7c);
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
B66cf7e:{NFSU2_TR(0x66cf7e);
if(r1(R+518)){{goto L66cfc0;}}
}
B66cf80:L66cf80:{c.instructions+=3;NFSU2_TR(0x66cf80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66cf83:{NFSU2_TR(0x66cf83);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B66cf87:{NFSU2_TR(0x66cf87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cfc0;}}
}
B66cf89:L66cf89:{c.instructions+=2;NFSU2_TR(0x66cf89);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B66cf8c:{NFSU2_TR(0x66cf8c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66cfc0;}}
}
B66cf8e:L66cf8e:{c.instructions+=2;NFSU2_TR(0x66cf8e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66cf92:{NFSU2_TR(0x66cf92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cfc0;}}
}
B66cf94:L66cf94:{c.instructions+=5;NFSU2_TR(0x66cf94);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66cf98:{NFSU2_TR(0x66cf98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cf99:{NFSU2_TR(0x66cf99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66cf9c:{NFSU2_TR(0x66cf9c);
__builtin_memmove((R+4),(R+28),4);
}
B66cf9e:{NFSU2_TR(0x66cf9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cfaa;}}
}
B66cfa0:L66cfa0:{c.instructions+=3;NFSU2_TR(0x66cfa0);
w4(R+24,u32(~u32(r4(R+24))));
}
B66cfa2:{NFSU2_TR(0x66cfa2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cfa3:{NFSU2_TR(0x66cfa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cfa8ull));
TAIL_STATIC(0x6667ccu,666);
}
B66cfa8:L66cfa8:{c.instructions+=1;NFSU2_TR(0x66cfa8);
{goto L66cfc5;}
}
B66cfaa:L66cfaa:{c.instructions+=3;NFSU2_TR(0x66cfaa);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66cfac:{NFSU2_TR(0x66cfac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cfad:{NFSU2_TR(0x66cfad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cfb2ull));
TAIL_STATIC(0x65ce9bu,65c);
}
B66cfb2:L66cfb2:{c.instructions+=2;NFSU2_TR(0x66cfb2);
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
B66cfb4:{NFSU2_TR(0x66cfb4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66cfc5;}}
}
B66cfb6:L66cfb6:{c.instructions+=3;NFSU2_TR(0x66cfb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cfb7:{NFSU2_TR(0x66cfb7);
__builtin_memmove((R+4),(R+28),4);
}
B66cfb9:{NFSU2_TR(0x66cfb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cfbeull));
TAIL_STATIC(0x66055cu,660);
}
B66cfbe:L66cfbe:{c.instructions+=1;NFSU2_TR(0x66cfbe);
{goto L66cfc5;}
}
B66cfc0:L66cfc0:{c.instructions+=1;NFSU2_TR(0x66cfc0);
w4(R+0,u32(0x8876086cull));
}
B66cfc5:L66cfc5:{c.instructions+=5;NFSU2_TR(0x66cfc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66cfc6:{NFSU2_TR(0x66cfc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66cfc7:{NFSU2_TR(0x66cfc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66cfc8:{NFSU2_TR(0x66cfc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66cfc9:{NFSU2_TR(0x66cfc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66cfcc:L66cfcc:{c.instructions+=5;NFSU2_TR(0x66cfcc);
__builtin_memmove((R+28),(R+28),4);
}
B66cfce:{NFSU2_TR(0x66cfce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cfcf:{NFSU2_TR(0x66cfcf);
__builtin_memmove((R+20),(R+16),4);
}
B66cfd1:{NFSU2_TR(0x66cfd1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66cfd5:{NFSU2_TR(0x66cfd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66cfdb;}}
}
B66cfd7:L66cfd7:{c.instructions+=2;NFSU2_TR(0x66cfd7);
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
B66cfd9:{NFSU2_TR(0x66cfd9);
TAIL_STATIC(0x66d027u,66d);
}
B66cfdb:L66cfdb:{c.instructions+=2;NFSU2_TR(0x66cfdb);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66cfdf:{NFSU2_TR(0x66cfdf);
if(r1(R+518)){TAIL_STATIC(0x66d022u,66d);}
}
B66cfe1:L66cfe1:{c.instructions+=5;NFSU2_TR(0x66cfe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cfe4:{NFSU2_TR(0x66cfe4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cfe6:{NFSU2_TR(0x66cfe6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66cfe8:{NFSU2_TR(0x66cfe8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66cfeb:{NFSU2_TR(0x66cfeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66cff0ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66cff0:L66cff0:{c.instructions+=2;NFSU2_TR(0x66cff0);
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
B66cff2:{NFSU2_TR(0x66cff2);
if(r1(R+518)){TAIL_STATIC(0x66d022u,66d);}
}
B66cff4:L66cff4:{c.instructions+=4;NFSU2_TR(0x66cff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66cff7:{NFSU2_TR(0x66cff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66cffa:{NFSU2_TR(0x66cffa);
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
B66cffc:{NFSU2_TR(0x66cffc);
if(r1(R+518)){TAIL_STATIC(0x66d022u,66d);}
}
B66cffe:L66cffe:{c.instructions+=1;NFSU2_TR(0x66cffe);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
TAIL_STATIC(0x66d002u,66d);
}
XIT:NFSU2_TR_EXIT(0x66c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
