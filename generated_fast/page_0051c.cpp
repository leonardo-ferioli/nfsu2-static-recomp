#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_519(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x51c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x51c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_51c(u8* __restrict R,Cpu& c);
u32 page_51c(Cpu& c){return body_51c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_51c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x51c001:goto L51c001;
case 0x51c002:c.instructions+=26;goto B51c002;
case 0x51c006:c.instructions+=25;goto B51c006;
case 0x51c00a:c.instructions+=24;goto B51c00a;
case 0x51c00e:c.instructions+=23;goto B51c00e;
case 0x51c011:c.instructions+=22;goto B51c011;
case 0x51c013:c.instructions+=21;goto B51c013;
case 0x51c017:c.instructions+=20;goto B51c017;
case 0x51c019:c.instructions+=19;goto B51c019;
case 0x51c01d:c.instructions+=18;goto B51c01d;
case 0x51c021:c.instructions+=17;goto B51c021;
case 0x51c025:c.instructions+=16;goto B51c025;
case 0x51c029:c.instructions+=15;goto B51c029;
case 0x51c02d:c.instructions+=14;goto B51c02d;
case 0x51c031:c.instructions+=13;goto B51c031;
case 0x51c033:c.instructions+=12;goto B51c033;
case 0x51c037:c.instructions+=11;goto B51c037;
case 0x51c038:c.instructions+=10;goto B51c038;
case 0x51c03c:c.instructions+=9;goto B51c03c;
case 0x51c040:c.instructions+=8;goto B51c040;
case 0x51c042:c.instructions+=7;goto B51c042;
case 0x51c046:c.instructions+=6;goto B51c046;
case 0x51c048:c.instructions+=5;goto B51c048;
case 0x51c04c:c.instructions+=4;goto B51c04c;
case 0x51c052:c.instructions+=3;goto B51c052;
case 0x51c054:c.instructions+=2;goto B51c054;
case 0x51c057:c.instructions+=1;goto B51c057;
case 0x51c059:goto L51c059;
case 0x51c05b:c.instructions+=1;goto B51c05b;
case 0x51c061:goto L51c061;
case 0x51c065:c.instructions+=21;goto B51c065;
case 0x51c069:c.instructions+=20;goto B51c069;
case 0x51c06d:c.instructions+=19;goto B51c06d;
case 0x51c071:c.instructions+=18;goto B51c071;
case 0x51c073:c.instructions+=17;goto B51c073;
case 0x51c077:c.instructions+=16;goto B51c077;
case 0x51c07b:c.instructions+=15;goto B51c07b;
case 0x51c07f:c.instructions+=14;goto B51c07f;
case 0x51c083:c.instructions+=13;goto B51c083;
case 0x51c085:c.instructions+=12;goto B51c085;
case 0x51c089:c.instructions+=11;goto B51c089;
case 0x51c08b:c.instructions+=10;goto B51c08b;
case 0x51c08f:c.instructions+=9;goto B51c08f;
case 0x51c097:c.instructions+=8;goto B51c097;
case 0x51c09a:c.instructions+=7;goto B51c09a;
case 0x51c09e:c.instructions+=6;goto B51c09e;
case 0x51c0a2:c.instructions+=5;goto B51c0a2;
case 0x51c0a6:c.instructions+=4;goto B51c0a6;
case 0x51c0aa:c.instructions+=3;goto B51c0aa;
case 0x51c0ae:c.instructions+=2;goto B51c0ae;
case 0x51c0b2:c.instructions+=1;goto B51c0b2;
case 0x51c0b4:goto L51c0b4;
case 0x51c0b7:c.instructions+=3;goto B51c0b7;
case 0x51c0ba:c.instructions+=2;goto B51c0ba;
case 0x51c0bd:c.instructions+=1;goto B51c0bd;
case 0x51c0c1:goto L51c0c1;
case 0x51c0c5:c.instructions+=23;goto B51c0c5;
case 0x51c0c6:c.instructions+=22;goto B51c0c6;
case 0x51c0ca:c.instructions+=21;goto B51c0ca;
case 0x51c0cb:c.instructions+=20;goto B51c0cb;
case 0x51c0cf:c.instructions+=19;goto B51c0cf;
case 0x51c0d0:c.instructions+=18;goto B51c0d0;
case 0x51c0d4:c.instructions+=17;goto B51c0d4;
case 0x51c0d5:c.instructions+=16;goto B51c0d5;
case 0x51c0d9:c.instructions+=15;goto B51c0d9;
case 0x51c0da:c.instructions+=14;goto B51c0da;
case 0x51c0de:c.instructions+=13;goto B51c0de;
case 0x51c0df:c.instructions+=12;goto B51c0df;
case 0x51c0e3:c.instructions+=11;goto B51c0e3;
case 0x51c0e4:c.instructions+=10;goto B51c0e4;
case 0x51c0e8:c.instructions+=9;goto B51c0e8;
case 0x51c0e9:c.instructions+=8;goto B51c0e9;
case 0x51c0ed:c.instructions+=7;goto B51c0ed;
case 0x51c0ee:c.instructions+=6;goto B51c0ee;
case 0x51c0f2:c.instructions+=5;goto B51c0f2;
case 0x51c0f3:c.instructions+=4;goto B51c0f3;
case 0x51c0f7:c.instructions+=3;goto B51c0f7;
case 0x51c0f8:c.instructions+=2;goto B51c0f8;
case 0x51c0f9:c.instructions+=1;goto B51c0f9;
case 0x51c0fe:goto L51c0fe;
case 0x51c101:c.instructions+=1;goto B51c101;
case 0x51c110:goto L51c110;
case 0x51c113:c.instructions+=12;goto B51c113;
case 0x51c114:c.instructions+=11;goto B51c114;
case 0x51c115:c.instructions+=10;goto B51c115;
case 0x51c116:c.instructions+=9;goto B51c116;
case 0x51c11a:c.instructions+=8;goto B51c11a;
case 0x51c11d:c.instructions+=7;goto B51c11d;
case 0x51c120:c.instructions+=6;goto B51c120;
case 0x51c121:c.instructions+=5;goto B51c121;
case 0x51c123:c.instructions+=4;goto B51c123;
case 0x51c126:c.instructions+=3;goto B51c126;
case 0x51c12a:c.instructions+=2;goto B51c12a;
case 0x51c12e:c.instructions+=1;goto B51c12e;
case 0x51c133:goto L51c133;
case 0x51c136:c.instructions+=5;goto B51c136;
case 0x51c139:c.instructions+=4;goto B51c139;
case 0x51c13d:c.instructions+=3;goto B51c13d;
case 0x51c141:c.instructions+=2;goto B51c141;
case 0x51c145:c.instructions+=1;goto B51c145;
case 0x51c147:goto L51c147;
case 0x51c14a:c.instructions+=5;goto B51c14a;
case 0x51c14b:c.instructions+=4;goto B51c14b;
case 0x51c14c:c.instructions+=3;goto B51c14c;
case 0x51c14d:c.instructions+=2;goto B51c14d;
case 0x51c14f:c.instructions+=1;goto B51c14f;
case 0x51c154:goto L51c154;
case 0x51c158:c.instructions+=6;goto B51c158;
case 0x51c15c:c.instructions+=5;goto B51c15c;
case 0x51c15f:c.instructions+=4;goto B51c15f;
case 0x51c162:c.instructions+=3;goto B51c162;
case 0x51c165:c.instructions+=2;goto B51c165;
case 0x51c167:c.instructions+=1;goto B51c167;
case 0x51c169:goto L51c169;
case 0x51c16a:c.instructions+=3;goto B51c16a;
case 0x51c16b:c.instructions+=2;goto B51c16b;
case 0x51c16d:c.instructions+=1;goto B51c16d;
case 0x51c172:goto L51c172;
case 0x51c175:c.instructions+=1;goto B51c175;
case 0x51c177:goto L51c177;
case 0x51c17d:c.instructions+=2;goto B51c17d;
case 0x51c181:c.instructions+=1;goto B51c181;
case 0x51c183:goto L51c183;
case 0x51c186:c.instructions+=1;goto B51c186;
case 0x51c188:goto L51c188;
case 0x51c18a:c.instructions+=2;goto B51c18a;
case 0x51c18e:c.instructions+=1;goto B51c18e;
case 0x51c190:goto L51c190;
case 0x51c192:c.instructions+=1;goto B51c192;
case 0x51c19a:goto L51c19a;
case 0x51c19d:c.instructions+=7;goto B51c19d;
case 0x51c1a1:c.instructions+=6;goto B51c1a1;
case 0x51c1a3:c.instructions+=5;goto B51c1a3;
case 0x51c1a4:c.instructions+=4;goto B51c1a4;
case 0x51c1a5:c.instructions+=3;goto B51c1a5;
case 0x51c1a6:c.instructions+=2;goto B51c1a6;
case 0x51c1a8:c.instructions+=1;goto B51c1a8;
case 0x51c1ad:goto L51c1ad;
case 0x51c1af:c.instructions+=3;goto B51c1af;
case 0x51c1b2:c.instructions+=2;goto B51c1b2;
case 0x51c1b6:c.instructions+=1;goto B51c1b6;
case 0x51c1b8:goto L51c1b8;
case 0x51c1be:c.instructions+=1;goto B51c1be;
case 0x51c1c0:goto L51c1c0;
case 0x51c1c3:c.instructions+=1;goto B51c1c3;
case 0x51c1c5:goto L51c1c5;
case 0x51c1c7:c.instructions+=1;goto B51c1c7;
case 0x51c1c9:goto L51c1c9;
case 0x51c1cb:c.instructions+=1;goto B51c1cb;
case 0x51c1d1:goto L51c1d1;
case 0x51c1d5:c.instructions+=35;goto B51c1d5;
case 0x51c1d9:c.instructions+=34;goto B51c1d9;
case 0x51c1db:c.instructions+=33;goto B51c1db;
case 0x51c1df:c.instructions+=32;goto B51c1df;
case 0x51c1e2:c.instructions+=31;goto B51c1e2;
case 0x51c1e5:c.instructions+=30;goto B51c1e5;
case 0x51c1e8:c.instructions+=29;goto B51c1e8;
case 0x51c1ec:c.instructions+=28;goto B51c1ec;
case 0x51c1ed:c.instructions+=27;goto B51c1ed;
case 0x51c1ef:c.instructions+=26;goto B51c1ef;
case 0x51c1f1:c.instructions+=25;goto B51c1f1;
case 0x51c1f3:c.instructions+=24;goto B51c1f3;
case 0x51c1f5:c.instructions+=23;goto B51c1f5;
case 0x51c1f9:c.instructions+=22;goto B51c1f9;
case 0x51c1fa:c.instructions+=21;goto B51c1fa;
case 0x51c1fc:c.instructions+=20;goto B51c1fc;
case 0x51c1fe:c.instructions+=19;goto B51c1fe;
case 0x51c201:c.instructions+=18;goto B51c201;
case 0x51c203:c.instructions+=17;goto B51c203;
case 0x51c206:c.instructions+=16;goto B51c206;
case 0x51c208:c.instructions+=15;goto B51c208;
case 0x51c20c:c.instructions+=14;goto B51c20c;
case 0x51c20d:c.instructions+=13;goto B51c20d;
case 0x51c20f:c.instructions+=12;goto B51c20f;
case 0x51c212:c.instructions+=11;goto B51c212;
case 0x51c214:c.instructions+=10;goto B51c214;
case 0x51c216:c.instructions+=9;goto B51c216;
case 0x51c219:c.instructions+=8;goto B51c219;
case 0x51c21d:c.instructions+=7;goto B51c21d;
case 0x51c221:c.instructions+=6;goto B51c221;
case 0x51c225:c.instructions+=5;goto B51c225;
case 0x51c229:c.instructions+=4;goto B51c229;
case 0x51c22c:c.instructions+=3;goto B51c22c;
case 0x51c22e:c.instructions+=2;goto B51c22e;
case 0x51c232:c.instructions+=1;goto B51c232;
case 0x51c238:goto L51c238;
case 0x51c23c:c.instructions+=4;goto B51c23c;
case 0x51c240:c.instructions+=3;goto B51c240;
case 0x51c244:c.instructions+=2;goto B51c244;
case 0x51c247:c.instructions+=1;goto B51c247;
case 0x51c24c:goto L51c24c;
case 0x51c24e:goto L51c24e;
case 0x51c252:c.instructions+=7;goto B51c252;
case 0x51c253:c.instructions+=6;goto B51c253;
case 0x51c254:c.instructions+=5;goto B51c254;
case 0x51c255:c.instructions+=4;goto B51c255;
case 0x51c256:c.instructions+=3;goto B51c256;
case 0x51c258:c.instructions+=2;goto B51c258;
case 0x51c25d:c.instructions+=1;goto B51c25d;
case 0x51c262:goto L51c262;
case 0x51c266:c.instructions+=5;goto B51c266;
case 0x51c269:c.instructions+=4;goto B51c269;
case 0x51c26d:c.instructions+=3;goto B51c26d;
case 0x51c272:c.instructions+=2;goto B51c272;
case 0x51c27a:c.instructions+=1;goto B51c27a;
case 0x51c280:goto L51c280;
case 0x51c284:c.instructions+=4;goto B51c284;
case 0x51c286:c.instructions+=3;goto B51c286;
case 0x51c289:c.instructions+=2;goto B51c289;
case 0x51c28d:c.instructions+=1;goto B51c28d;
case 0x51c28f:goto L51c28f;
case 0x51c293:goto L51c293;
case 0x51c297:c.instructions+=2;goto B51c297;
case 0x51c299:c.instructions+=1;goto B51c299;
case 0x51c29b:goto L51c29b;
case 0x51c2a3:c.instructions+=1;goto B51c2a3;
case 0x51c2a8:goto L51c2a8;
case 0x51c2aa:c.instructions+=1;goto B51c2aa;
case 0x51c2b0:goto L51c2b0;
case 0x51c2b4:c.instructions+=1;goto B51c2b4;
case 0x51c2b6:goto L51c2b6;
case 0x51c2ba:c.instructions+=1;goto B51c2ba;
case 0x51c2bc:goto L51c2bc;
case 0x51c2bf:c.instructions+=2;goto B51c2bf;
case 0x51c2c4:c.instructions+=1;goto B51c2c4;
case 0x51c2ca:goto L51c2ca;
case 0x51c2ce:c.instructions+=7;goto B51c2ce;
case 0x51c2d2:c.instructions+=6;goto B51c2d2;
case 0x51c2d3:c.instructions+=5;goto B51c2d3;
case 0x51c2d4:c.instructions+=4;goto B51c2d4;
case 0x51c2d5:c.instructions+=3;goto B51c2d5;
case 0x51c2d6:c.instructions+=2;goto B51c2d6;
case 0x51c2d8:c.instructions+=1;goto B51c2d8;
case 0x51c2dd:goto L51c2dd;
case 0x51c2e1:c.instructions+=3;goto B51c2e1;
case 0x51c2e5:c.instructions+=2;goto B51c2e5;
case 0x51c2e7:c.instructions+=1;goto B51c2e7;
case 0x51c2e9:goto L51c2e9;
case 0x51c2ed:c.instructions+=5;goto B51c2ed;
case 0x51c2f3:c.instructions+=4;goto B51c2f3;
case 0x51c2f7:c.instructions+=3;goto B51c2f7;
case 0x51c2fb:c.instructions+=2;goto B51c2fb;
case 0x51c2ff:c.instructions+=1;goto B51c2ff;
case 0x51c304:goto L51c304;
case 0x51c309:c.instructions+=1;goto B51c309;
case 0x51c30b:goto L51c30b;
case 0x51c30f:c.instructions+=5;goto B51c30f;
case 0x51c311:c.instructions+=4;goto B51c311;
case 0x51c315:c.instructions+=3;goto B51c315;
case 0x51c319:c.instructions+=2;goto B51c319;
case 0x51c31d:c.instructions+=1;goto B51c31d;
case 0x51c322:goto L51c322;
case 0x51c32a:c.instructions+=3;goto B51c32a;
case 0x51c32e:c.instructions+=2;goto B51c32e;
case 0x51c332:c.instructions+=1;goto B51c332;
case 0x51c337:goto L51c337;
case 0x51c33c:c.instructions+=1;goto B51c33c;
case 0x51c33e:goto L51c33e;
case 0x51c342:c.instructions+=1;goto B51c342;
case 0x51c344:goto L51c344;
case 0x51c348:c.instructions+=4;goto B51c348;
case 0x51c34b:c.instructions+=3;goto B51c34b;
case 0x51c34d:c.instructions+=2;goto B51c34d;
case 0x51c350:c.instructions+=1;goto B51c350;
case 0x51c352:goto L51c352;
case 0x51c356:c.instructions+=1;goto B51c356;
case 0x51c358:goto L51c358;
case 0x51c35c:c.instructions+=4;goto B51c35c;
case 0x51c35f:c.instructions+=3;goto B51c35f;
case 0x51c360:c.instructions+=2;goto B51c360;
case 0x51c363:c.instructions+=1;goto B51c363;
case 0x51c365:goto L51c365;
case 0x51c367:c.instructions+=3;goto B51c367;
case 0x51c36a:c.instructions+=2;goto B51c36a;
case 0x51c36c:c.instructions+=1;goto B51c36c;
case 0x51c36e:goto L51c36e;
case 0x51c372:c.instructions+=3;goto B51c372;
case 0x51c373:c.instructions+=2;goto B51c373;
case 0x51c374:c.instructions+=1;goto B51c374;
case 0x51c379:goto L51c379;
case 0x51c37c:c.instructions+=3;goto B51c37c;
case 0x51c37e:c.instructions+=2;goto B51c37e;
case 0x51c383:c.instructions+=1;goto B51c383;
case 0x51c388:goto L51c388;
case 0x51c38c:goto L51c38c;
case 0x51c38e:c.instructions+=2;goto B51c38e;
case 0x51c393:c.instructions+=1;goto B51c393;
case 0x51c395:goto L51c395;
case 0x51c39a:c.instructions+=1;goto B51c39a;
case 0x51c39c:goto L51c39c;
case 0x51c3a1:c.instructions+=2;goto B51c3a1;
case 0x51c3a6:c.instructions+=1;goto B51c3a6;
case 0x51c3a8:goto L51c3a8;
case 0x51c3ad:c.instructions+=1;goto B51c3ad;
case 0x51c3af:goto L51c3af;
case 0x51c3b5:goto L51c3b5;
case 0x51c3ba:c.instructions+=1;goto B51c3ba;
case 0x51c3bc:goto L51c3bc;
case 0x51c3c1:c.instructions+=1;goto B51c3c1;
case 0x51c3c3:goto L51c3c3;
case 0x51c3c8:c.instructions+=1;goto B51c3c8;
case 0x51c3ca:goto L51c3ca;
case 0x51c3cf:goto L51c3cf;
case 0x51c3d2:c.instructions+=13;goto B51c3d2;
case 0x51c3d5:c.instructions+=12;goto B51c3d5;
case 0x51c3d8:c.instructions+=11;goto B51c3d8;
case 0x51c3dc:c.instructions+=10;goto B51c3dc;
case 0x51c3e1:c.instructions+=9;goto B51c3e1;
case 0x51c3e3:c.instructions+=8;goto B51c3e3;
case 0x51c3e5:c.instructions+=7;goto B51c3e5;
case 0x51c3e7:c.instructions+=6;goto B51c3e7;
case 0x51c3ea:c.instructions+=5;goto B51c3ea;
case 0x51c3ed:c.instructions+=4;goto B51c3ed;
case 0x51c3f0:c.instructions+=3;goto B51c3f0;
case 0x51c3f3:c.instructions+=2;goto B51c3f3;
case 0x51c3f5:c.instructions+=1;goto B51c3f5;
case 0x51c3f7:goto L51c3f7;
case 0x51c3fa:c.instructions+=3;goto B51c3fa;
case 0x51c3fc:c.instructions+=2;goto B51c3fc;
case 0x51c3ff:c.instructions+=1;goto B51c3ff;
case 0x51c401:goto L51c401;
case 0x51c403:c.instructions+=1;goto B51c403;
case 0x51c405:goto L51c405;
case 0x51c406:c.instructions+=4;goto B51c406;
case 0x51c407:c.instructions+=3;goto B51c407;
case 0x51c408:c.instructions+=2;goto B51c408;
case 0x51c409:c.instructions+=1;goto B51c409;
case 0x51c40e:goto L51c40e;
case 0x51c411:c.instructions+=1;goto B51c411;
case 0x51c413:goto L51c413;
case 0x51c415:c.instructions+=1;goto B51c415;
case 0x51c417:goto L51c417;
case 0x51c41b:c.instructions+=2;goto B51c41b;
case 0x51c41d:c.instructions+=1;goto B51c41d;
case 0x51c41f:goto L51c41f;
case 0x51c423:c.instructions+=2;goto B51c423;
case 0x51c425:c.instructions+=1;goto B51c425;
case 0x51c427:goto L51c427;
case 0x51c42a:c.instructions+=5;goto B51c42a;
case 0x51c42c:c.instructions+=4;goto B51c42c;
case 0x51c430:c.instructions+=3;goto B51c430;
case 0x51c431:c.instructions+=2;goto B51c431;
case 0x51c432:c.instructions+=1;goto B51c432;
case 0x51c437:goto L51c437;
case 0x51c43b:c.instructions+=3;goto B51c43b;
case 0x51c43f:c.instructions+=2;goto B51c43f;
case 0x51c443:c.instructions+=1;goto B51c443;
case 0x51c447:goto L51c447;
case 0x51c44b:c.instructions+=16;goto B51c44b;
case 0x51c44f:c.instructions+=15;goto B51c44f;
case 0x51c453:c.instructions+=14;goto B51c453;
case 0x51c456:c.instructions+=13;goto B51c456;
case 0x51c45b:c.instructions+=12;goto B51c45b;
case 0x51c45c:c.instructions+=11;goto B51c45c;
case 0x51c45d:c.instructions+=10;goto B51c45d;
case 0x51c461:c.instructions+=9;goto B51c461;
case 0x51c462:c.instructions+=8;goto B51c462;
case 0x51c466:c.instructions+=7;goto B51c466;
case 0x51c46a:c.instructions+=6;goto B51c46a;
case 0x51c46b:c.instructions+=5;goto B51c46b;
case 0x51c46c:c.instructions+=4;goto B51c46c;
case 0x51c46d:c.instructions+=3;goto B51c46d;
case 0x51c46e:c.instructions+=2;goto B51c46e;
case 0x51c470:c.instructions+=1;goto B51c470;
case 0x51c475:goto L51c475;
case 0x51c479:c.instructions+=4;goto B51c479;
case 0x51c47d:c.instructions+=3;goto B51c47d;
case 0x51c481:c.instructions+=2;goto B51c481;
case 0x51c485:c.instructions+=1;goto B51c485;
case 0x51c489:goto L51c489;
case 0x51c48d:c.instructions+=1;goto B51c48d;
case 0x51c490:goto L51c490;
case 0x51c494:c.instructions+=3;goto B51c494;
case 0x51c498:c.instructions+=2;goto B51c498;
case 0x51c49a:c.instructions+=1;goto B51c49a;
case 0x51c49c:goto L51c49c;
case 0x51c4a2:goto L51c4a2;
case 0x51c4a8:c.instructions+=3;goto B51c4a8;
case 0x51c4aa:c.instructions+=2;goto B51c4aa;
case 0x51c4ad:c.instructions+=1;goto B51c4ad;
case 0x51c4b3:goto L51c4b3;
case 0x51c4b7:c.instructions+=2;goto B51c4b7;
case 0x51c4b9:c.instructions+=1;goto B51c4b9;
case 0x51c4bf:goto L51c4bf;
case 0x51c4c3:c.instructions+=5;goto B51c4c3;
case 0x51c4c7:c.instructions+=4;goto B51c4c7;
case 0x51c4cb:c.instructions+=3;goto B51c4cb;
case 0x51c4cd:c.instructions+=2;goto B51c4cd;
case 0x51c4d0:c.instructions+=1;goto B51c4d0;
case 0x51c4d6:goto L51c4d6;
case 0x51c4db:c.instructions+=1;goto B51c4db;
case 0x51c4dd:goto L51c4dd;
case 0x51c4e0:goto L51c4e0;
case 0x51c4e3:c.instructions+=2;goto B51c4e3;
case 0x51c4e8:c.instructions+=1;goto B51c4e8;
case 0x51c4ea:goto L51c4ea;
case 0x51c4ee:c.instructions+=8;goto B51c4ee;
case 0x51c4f2:c.instructions+=7;goto B51c4f2;
case 0x51c4f6:c.instructions+=6;goto B51c4f6;
case 0x51c4f7:c.instructions+=5;goto B51c4f7;
case 0x51c4f8:c.instructions+=4;goto B51c4f8;
case 0x51c4f9:c.instructions+=3;goto B51c4f9;
case 0x51c4fa:c.instructions+=2;goto B51c4fa;
case 0x51c4fc:c.instructions+=1;goto B51c4fc;
case 0x51c501:goto L51c501;
case 0x51c505:c.instructions+=3;goto B51c505;
case 0x51c509:c.instructions+=2;goto B51c509;
case 0x51c50b:c.instructions+=1;goto B51c50b;
case 0x51c50d:goto L51c50d;
case 0x51c511:c.instructions+=3;goto B51c511;
case 0x51c517:c.instructions+=2;goto B51c517;
case 0x51c51b:c.instructions+=1;goto B51c51b;
case 0x51c51d:goto L51c51d;
case 0x51c522:c.instructions+=1;goto B51c522;
case 0x51c524:goto L51c524;
case 0x51c528:c.instructions+=3;goto B51c528;
case 0x51c52a:c.instructions+=2;goto B51c52a;
case 0x51c52e:c.instructions+=1;goto B51c52e;
case 0x51c530:goto L51c530;
case 0x51c538:goto L51c538;
case 0x51c53c:c.instructions+=1;goto B51c53c;
case 0x51c540:goto L51c540;
case 0x51c544:c.instructions+=3;goto B51c544;
case 0x51c547:c.instructions+=2;goto B51c547;
case 0x51c54b:c.instructions+=1;goto B51c54b;
case 0x51c54f:goto L51c54f;
case 0x51c553:c.instructions+=5;goto B51c553;
case 0x51c557:c.instructions+=4;goto B51c557;
case 0x51c558:c.instructions+=3;goto B51c558;
case 0x51c55b:c.instructions+=2;goto B51c55b;
case 0x51c55f:c.instructions+=1;goto B51c55f;
case 0x51c565:goto L51c565;
case 0x51c569:c.instructions+=1;goto B51c569;
case 0x51c56e:goto L51c56e;
case 0x51c56f:c.instructions+=5;goto B51c56f;
case 0x51c570:c.instructions+=4;goto B51c570;
case 0x51c571:c.instructions+=3;goto B51c571;
case 0x51c572:c.instructions+=2;goto B51c572;
case 0x51c575:c.instructions+=1;goto B51c575;
case 0x51c580:goto L51c580;
case 0x51c581:c.instructions+=7;goto B51c581;
case 0x51c582:c.instructions+=6;goto B51c582;
case 0x51c583:c.instructions+=5;goto B51c583;
case 0x51c589:c.instructions+=4;goto B51c589;
case 0x51c58a:c.instructions+=3;goto B51c58a;
case 0x51c58f:c.instructions+=2;goto B51c58f;
case 0x51c591:c.instructions+=1;goto B51c591;
case 0x51c596:goto L51c596;
case 0x51c598:c.instructions+=2;goto B51c598;
case 0x51c59a:c.instructions+=1;goto B51c59a;
case 0x51c59c:goto L51c59c;
case 0x51c5a0:goto L51c5a0;
case 0x51c5a3:c.instructions+=3;goto B51c5a3;
case 0x51c5a4:c.instructions+=2;goto B51c5a4;
case 0x51c5a5:c.instructions+=1;goto B51c5a5;
case 0x51c5aa:goto L51c5aa;
case 0x51c5ad:c.instructions+=2;goto B51c5ad;
case 0x51c5af:c.instructions+=1;goto B51c5af;
case 0x51c5b1:goto L51c5b1;
case 0x51c5b3:c.instructions+=3;goto B51c5b3;
case 0x51c5b4:c.instructions+=2;goto B51c5b4;
case 0x51c5b6:c.instructions+=1;goto B51c5b6;
case 0x51c5b8:goto L51c5b8;
case 0x51c5b9:c.instructions+=5;goto B51c5b9;
case 0x51c5ba:c.instructions+=4;goto B51c5ba;
case 0x51c5bb:c.instructions+=3;goto B51c5bb;
case 0x51c5be:c.instructions+=2;goto B51c5be;
case 0x51c5bf:c.instructions+=1;goto B51c5bf;
case 0x51c5c0:goto L51c5c0;
case 0x51c5c1:c.instructions+=5;goto B51c5c1;
case 0x51c5c2:c.instructions+=4;goto B51c5c2;
case 0x51c5c3:c.instructions+=3;goto B51c5c3;
case 0x51c5c5:c.instructions+=2;goto B51c5c5;
case 0x51c5c6:c.instructions+=1;goto B51c5c6;
case 0x51c5d0:goto L51c5d0;
case 0x51c5d1:c.instructions+=5;goto B51c5d1;
case 0x51c5d7:c.instructions+=4;goto B51c5d7;
case 0x51c5d8:c.instructions+=3;goto B51c5d8;
case 0x51c5dd:c.instructions+=2;goto B51c5dd;
case 0x51c5df:c.instructions+=1;goto B51c5df;
case 0x51c5e4:goto L51c5e4;
case 0x51c5e6:c.instructions+=1;goto B51c5e6;
case 0x51c5e8:goto L51c5e8;
case 0x51c5ec:c.instructions+=1;goto B51c5ec;
case 0x51c5f0:goto L51c5f0;
case 0x51c5f2:c.instructions+=2;goto B51c5f2;
case 0x51c5f5:c.instructions+=1;goto B51c5f5;
case 0x51c5f7:goto L51c5f7;
case 0x51c5f9:c.instructions+=3;goto B51c5f9;
case 0x51c5fa:c.instructions+=2;goto B51c5fa;
case 0x51c5fc:c.instructions+=1;goto B51c5fc;
case 0x51c5fe:goto L51c5fe;
case 0x51c5ff:c.instructions+=3;goto B51c5ff;
case 0x51c601:c.instructions+=2;goto B51c601;
case 0x51c602:c.instructions+=1;goto B51c602;
case 0x51c603:goto L51c603;
case 0x51c606:c.instructions+=3;goto B51c606;
case 0x51c607:c.instructions+=2;goto B51c607;
case 0x51c608:c.instructions+=1;goto B51c608;
case 0x51c610:goto L51c610;
case 0x51c614:c.instructions+=2;goto B51c614;
case 0x51c61a:c.instructions+=1;goto B51c61a;
case 0x51c61c:goto L51c61c;
case 0x51c61d:c.instructions+=6;goto B51c61d;
case 0x51c623:c.instructions+=5;goto B51c623;
case 0x51c624:c.instructions+=4;goto B51c624;
case 0x51c627:c.instructions+=3;goto B51c627;
case 0x51c62c:c.instructions+=2;goto B51c62c;
case 0x51c62f:c.instructions+=1;goto B51c62f;
case 0x51c634:goto L51c634;
case 0x51c636:c.instructions+=1;goto B51c636;
case 0x51c638:goto L51c638;
case 0x51c63b:c.instructions+=1;goto B51c63b;
case 0x51c63d:goto L51c63d;
case 0x51c63f:c.instructions+=2;goto B51c63f;
case 0x51c641:c.instructions+=1;goto B51c641;
case 0x51c643:goto L51c643;
case 0x51c644:c.instructions+=3;goto B51c644;
case 0x51c649:c.instructions+=2;goto B51c649;
case 0x51c64a:c.instructions+=1;goto B51c64a;
case 0x51c64b:goto L51c64b;
case 0x51c64d:c.instructions+=3;goto B51c64d;
case 0x51c650:c.instructions+=2;goto B51c650;
case 0x51c652:c.instructions+=1;goto B51c652;
case 0x51c655:goto L51c655;
case 0x51c656:c.instructions+=3;goto B51c656;
case 0x51c65b:c.instructions+=2;goto B51c65b;
case 0x51c65c:c.instructions+=1;goto B51c65c;
case 0x51c65d:goto L51c65d;
case 0x51c65f:c.instructions+=1;goto B51c65f;
case 0x51c660:goto L51c660;
case 0x51c663:c.instructions+=1;goto B51c663;
case 0x51c670:goto L51c670;
case 0x51c674:c.instructions+=2;goto B51c674;
case 0x51c678:c.instructions+=1;goto B51c678;
case 0x51c67a:goto L51c67a;
case 0x51c67d:c.instructions+=2;goto B51c67d;
case 0x51c67f:c.instructions+=1;goto B51c67f;
case 0x51c681:goto L51c681;
case 0x51c684:c.instructions+=2;goto B51c684;
case 0x51c688:c.instructions+=1;goto B51c688;
case 0x51c68d:goto L51c68d;
case 0x51c690:goto L51c690;
case 0x51c691:c.instructions+=9;goto B51c691;
case 0x51c692:c.instructions+=8;goto B51c692;
case 0x51c694:c.instructions+=7;goto B51c694;
case 0x51c698:c.instructions+=6;goto B51c698;
case 0x51c69d:c.instructions+=5;goto B51c69d;
case 0x51c69f:c.instructions+=4;goto B51c69f;
case 0x51c6a1:c.instructions+=3;goto B51c6a1;
case 0x51c6a2:c.instructions+=2;goto B51c6a2;
case 0x51c6a6:c.instructions+=1;goto B51c6a6;
case 0x51c6a8:goto L51c6a8;
case 0x51c6af:c.instructions+=1;goto B51c6af;
case 0x51c6b1:goto L51c6b1;
case 0x51c6b4:goto L51c6b4;
case 0x51c6b9:c.instructions+=2;goto B51c6b9;
case 0x51c6bb:c.instructions+=1;goto B51c6bb;
case 0x51c6bd:goto L51c6bd;
case 0x51c6be:c.instructions+=1;goto B51c6be;
case 0x51c6c3:goto L51c6c3;
case 0x51c6c6:c.instructions+=3;goto B51c6c6;
case 0x51c6c9:c.instructions+=2;goto B51c6c9;
case 0x51c6cb:c.instructions+=1;goto B51c6cb;
case 0x51c6cd:goto L51c6cd;
case 0x51c6d0:goto L51c6d0;
case 0x51c6d3:c.instructions+=2;goto B51c6d3;
case 0x51c6d5:c.instructions+=1;goto B51c6d5;
case 0x51c6d7:goto L51c6d7;
case 0x51c6db:c.instructions+=2;goto B51c6db;
case 0x51c6de:c.instructions+=1;goto B51c6de;
case 0x51c6e0:goto L51c6e0;
case 0x51c6e3:c.instructions+=3;goto B51c6e3;
case 0x51c6e4:c.instructions+=2;goto B51c6e4;
case 0x51c6e9:c.instructions+=1;goto B51c6e9;
case 0x51c6ee:goto L51c6ee;
case 0x51c6f0:c.instructions+=1;goto B51c6f0;
case 0x51c6f2:goto L51c6f2;
case 0x51c6f6:c.instructions+=2;goto B51c6f6;
case 0x51c6f9:c.instructions+=1;goto B51c6f9;
case 0x51c6fb:goto L51c6fb;
case 0x51c6fd:goto L51c6fd;
case 0x51c6ff:c.instructions+=1;goto B51c6ff;
case 0x51c701:goto L51c701;
case 0x51c704:goto L51c704;
case 0x51c708:c.instructions+=1;goto B51c708;
case 0x51c70a:goto L51c70a;
case 0x51c70f:c.instructions+=1;goto B51c70f;
case 0x51c714:goto L51c714;
case 0x51c717:c.instructions+=3;goto B51c717;
case 0x51c71a:c.instructions+=2;goto B51c71a;
case 0x51c71c:c.instructions+=1;goto B51c71c;
case 0x51c71e:goto L51c71e;
case 0x51c721:goto L51c721;
case 0x51c724:c.instructions+=3;goto B51c724;
case 0x51c729:c.instructions+=2;goto B51c729;
case 0x51c72e:c.instructions+=1;goto B51c72e;
case 0x51c730:goto L51c730;
case 0x51c732:c.instructions+=3;goto B51c732;
case 0x51c737:c.instructions+=2;goto B51c737;
case 0x51c738:c.instructions+=1;goto B51c738;
case 0x51c73a:goto L51c73a;
case 0x51c73b:c.instructions+=3;goto B51c73b;
case 0x51c73c:c.instructions+=2;goto B51c73c;
case 0x51c73d:c.instructions+=1;goto B51c73d;
case 0x51c740:goto L51c740;
case 0x51c741:c.instructions+=4;goto B51c741;
case 0x51c745:c.instructions+=3;goto B51c745;
case 0x51c74a:c.instructions+=2;goto B51c74a;
case 0x51c74b:c.instructions+=1;goto B51c74b;
case 0x51c750:goto L51c750;
case 0x51c753:c.instructions+=2;goto B51c753;
case 0x51c755:c.instructions+=1;goto B51c755;
case 0x51c75b:goto L51c75b;
case 0x51c760:c.instructions+=2;goto B51c760;
case 0x51c761:c.instructions+=1;goto B51c761;
case 0x51c766:goto L51c766;
case 0x51c769:c.instructions+=2;goto B51c769;
case 0x51c76b:c.instructions+=1;goto B51c76b;
case 0x51c771:goto L51c771;
case 0x51c776:c.instructions+=2;goto B51c776;
case 0x51c777:c.instructions+=1;goto B51c777;
case 0x51c77c:goto L51c77c;
case 0x51c77f:c.instructions+=2;goto B51c77f;
case 0x51c781:c.instructions+=1;goto B51c781;
case 0x51c787:goto L51c787;
case 0x51c78c:c.instructions+=2;goto B51c78c;
case 0x51c78d:c.instructions+=1;goto B51c78d;
case 0x51c792:goto L51c792;
case 0x51c795:c.instructions+=2;goto B51c795;
case 0x51c797:c.instructions+=1;goto B51c797;
case 0x51c79d:goto L51c79d;
case 0x51c7a2:c.instructions+=2;goto B51c7a2;
case 0x51c7a3:c.instructions+=1;goto B51c7a3;
case 0x51c7a8:goto L51c7a8;
case 0x51c7ab:c.instructions+=2;goto B51c7ab;
case 0x51c7ad:c.instructions+=1;goto B51c7ad;
case 0x51c7b3:goto L51c7b3;
case 0x51c7b8:c.instructions+=2;goto B51c7b8;
case 0x51c7b9:c.instructions+=1;goto B51c7b9;
case 0x51c7be:goto L51c7be;
case 0x51c7c1:c.instructions+=2;goto B51c7c1;
case 0x51c7c3:c.instructions+=1;goto B51c7c3;
case 0x51c7c5:goto L51c7c5;
case 0x51c7ca:c.instructions+=2;goto B51c7ca;
case 0x51c7cb:c.instructions+=1;goto B51c7cb;
case 0x51c7d0:goto L51c7d0;
case 0x51c7d3:c.instructions+=2;goto B51c7d3;
case 0x51c7d5:c.instructions+=1;goto B51c7d5;
case 0x51c7d7:goto L51c7d7;
case 0x51c7dc:c.instructions+=2;goto B51c7dc;
case 0x51c7dd:c.instructions+=1;goto B51c7dd;
case 0x51c7e2:goto L51c7e2;
case 0x51c7e5:c.instructions+=2;goto B51c7e5;
case 0x51c7e7:c.instructions+=1;goto B51c7e7;
case 0x51c7e9:goto L51c7e9;
case 0x51c7ed:c.instructions+=6;goto B51c7ed;
case 0x51c7f2:c.instructions+=5;goto B51c7f2;
case 0x51c7f3:c.instructions+=4;goto B51c7f3;
case 0x51c7f8:c.instructions+=3;goto B51c7f8;
case 0x51c7fd:c.instructions+=2;goto B51c7fd;
case 0x51c7fe:c.instructions+=1;goto B51c7fe;
case 0x51c800:goto L51c800;
case 0x51c805:c.instructions+=2;goto B51c805;
case 0x51c806:c.instructions+=1;goto B51c806;
case 0x51c80b:goto L51c80b;
case 0x51c80f:c.instructions+=8;goto B51c80f;
case 0x51c814:c.instructions+=7;goto B51c814;
case 0x51c815:c.instructions+=6;goto B51c815;
case 0x51c819:c.instructions+=5;goto B51c819;
case 0x51c81e:c.instructions+=4;goto B51c81e;
case 0x51c823:c.instructions+=3;goto B51c823;
case 0x51c824:c.instructions+=2;goto B51c824;
case 0x51c825:c.instructions+=1;goto B51c825;
case 0x51c82a:goto L51c82a;
case 0x51c82b:c.instructions+=1;goto B51c82b;
case 0x51c830:goto L51c830;
case 0x51c833:c.instructions+=2;goto B51c833;
case 0x51c834:c.instructions+=1;goto B51c834;
case 0x51c835:goto L51c835;
case 0x51c839:c.instructions+=5;goto B51c839;
case 0x51c83e:c.instructions+=4;goto B51c83e;
case 0x51c83f:c.instructions+=3;goto B51c83f;
case 0x51c844:c.instructions+=2;goto B51c844;
case 0x51c849:c.instructions+=1;goto B51c849;
case 0x51c84a:goto L51c84a;
case 0x51c84e:c.instructions+=2;goto B51c84e;
case 0x51c84f:c.instructions+=1;goto B51c84f;
case 0x51c854:goto L51c854;
case 0x51c855:c.instructions+=1;goto B51c855;
case 0x51c85a:goto L51c85a;
case 0x51c85d:c.instructions+=2;goto B51c85d;
case 0x51c85e:c.instructions+=1;goto B51c85e;
case 0x51c860:goto L51c860;
case 0x51c864:c.instructions+=2;goto B51c864;
case 0x51c868:c.instructions+=1;goto B51c868;
case 0x51c86a:goto L51c86a;
case 0x51c86b:c.instructions+=1;goto B51c86b;
case 0x51c870:goto L51c870;
case 0x51c873:c.instructions+=3;goto B51c873;
case 0x51c876:c.instructions+=2;goto B51c876;
case 0x51c87b:c.instructions+=1;goto B51c87b;
case 0x51c87d:goto L51c87d;
case 0x51c882:c.instructions+=1;goto B51c882;
case 0x51c885:goto L51c885;
case 0x51c88c:goto L51c88c;
case 0x51c88e:c.instructions+=1;goto B51c88e;
case 0x51c8a0:goto L51c8a0;
case 0x51c8a4:c.instructions+=2;goto B51c8a4;
case 0x51c8a8:c.instructions+=1;goto B51c8a8;
case 0x51c8aa:goto L51c8aa;
case 0x51c8af:goto L51c8af;
case 0x51c8b1:c.instructions+=1;goto B51c8b1;
case 0x51c8b4:goto L51c8b4;
case 0x51c8b6:c.instructions+=1;goto B51c8b6;
case 0x51c8c0:goto L51c8c0;
case 0x51c8c2:c.instructions+=15;goto B51c8c2;
case 0x51c8c7:c.instructions+=14;goto B51c8c7;
case 0x51c8cd:c.instructions+=13;goto B51c8cd;
case 0x51c8ce:c.instructions+=12;goto B51c8ce;
case 0x51c8d5:c.instructions+=11;goto B51c8d5;
case 0x51c8d8:c.instructions+=10;goto B51c8d8;
case 0x51c8d9:c.instructions+=9;goto B51c8d9;
case 0x51c8da:c.instructions+=8;goto B51c8da;
case 0x51c8dc:c.instructions+=7;goto B51c8dc;
case 0x51c8e4:c.instructions+=6;goto B51c8e4;
case 0x51c8e8:c.instructions+=5;goto B51c8e8;
case 0x51c8ec:c.instructions+=4;goto B51c8ec;
case 0x51c8ed:c.instructions+=3;goto B51c8ed;
case 0x51c8ef:c.instructions+=2;goto B51c8ef;
case 0x51c8f7:c.instructions+=1;goto B51c8f7;
case 0x51c8fc:goto L51c8fc;
case 0x51c904:c.instructions+=6;goto B51c904;
case 0x51c907:c.instructions+=5;goto B51c907;
case 0x51c909:c.instructions+=4;goto B51c909;
case 0x51c90c:c.instructions+=3;goto B51c90c;
case 0x51c911:c.instructions+=2;goto B51c911;
case 0x51c915:c.instructions+=1;goto B51c915;
case 0x51c917:goto L51c917;
case 0x51c91a:c.instructions+=1;goto B51c91a;
case 0x51c91c:goto L51c91c;
case 0x51c91e:goto L51c91e;
case 0x51c921:c.instructions+=4;goto B51c921;
case 0x51c922:c.instructions+=3;goto B51c922;
case 0x51c927:c.instructions+=2;goto B51c927;
case 0x51c92b:c.instructions+=1;goto B51c92b;
case 0x51c930:goto L51c930;
case 0x51c933:c.instructions+=4;goto B51c933;
case 0x51c937:c.instructions+=3;goto B51c937;
case 0x51c938:c.instructions+=2;goto B51c938;
case 0x51c93a:c.instructions+=1;goto B51c93a;
case 0x51c93f:goto L51c93f;
case 0x51c942:c.instructions+=3;goto B51c942;
case 0x51c943:c.instructions+=2;goto B51c943;
case 0x51c948:c.instructions+=1;goto B51c948;
case 0x51c94d:goto L51c94d;
case 0x51c950:c.instructions+=4;goto B51c950;
case 0x51c953:c.instructions+=3;goto B51c953;
case 0x51c954:c.instructions+=2;goto B51c954;
case 0x51c959:c.instructions+=1;goto B51c959;
case 0x51c95e:goto L51c95e;
case 0x51c960:c.instructions+=1;goto B51c960;
case 0x51c962:goto L51c962;
case 0x51c964:c.instructions+=1;goto B51c964;
case 0x51c969:goto L51c969;
case 0x51c96c:c.instructions+=3;goto B51c96c;
case 0x51c96d:c.instructions+=2;goto B51c96d;
case 0x51c972:c.instructions+=1;goto B51c972;
case 0x51c977:goto L51c977;
case 0x51c97b:c.instructions+=7;goto B51c97b;
case 0x51c97e:c.instructions+=6;goto B51c97e;
case 0x51c97f:c.instructions+=5;goto B51c97f;
case 0x51c981:c.instructions+=4;goto B51c981;
case 0x51c982:c.instructions+=3;goto B51c982;
case 0x51c989:c.instructions+=2;goto B51c989;
case 0x51c98c:c.instructions+=1;goto B51c98c;
case 0x51c990:goto L51c990;
case 0x51c994:c.instructions+=5;goto B51c994;
case 0x51c998:c.instructions+=4;goto B51c998;
case 0x51c999:c.instructions+=3;goto B51c999;
case 0x51c99e:c.instructions+=2;goto B51c99e;
case 0x51c9a1:c.instructions+=1;goto B51c9a1;
case 0x51c9a6:goto L51c9a6;
case 0x51c9b0:goto L51c9b0;
case 0x51c9b4:c.instructions+=5;goto B51c9b4;
case 0x51c9b7:c.instructions+=4;goto B51c9b7;
case 0x51c9ba:c.instructions+=3;goto B51c9ba;
case 0x51c9bd:c.instructions+=2;goto B51c9bd;
case 0x51c9bf:c.instructions+=1;goto B51c9bf;
case 0x51c9c1:goto L51c9c1;
case 0x51c9c4:c.instructions+=19;goto B51c9c4;
case 0x51c9c7:c.instructions+=18;goto B51c9c7;
case 0x51c9ca:c.instructions+=17;goto B51c9ca;
case 0x51c9ce:c.instructions+=16;goto B51c9ce;
case 0x51c9d2:c.instructions+=15;goto B51c9d2;
case 0x51c9d4:c.instructions+=14;goto B51c9d4;
case 0x51c9d7:c.instructions+=13;goto B51c9d7;
case 0x51c9df:c.instructions+=12;goto B51c9df;
case 0x51c9e3:c.instructions+=11;goto B51c9e3;
case 0x51c9e6:c.instructions+=10;goto B51c9e6;
case 0x51c9ea:c.instructions+=9;goto B51c9ea;
case 0x51c9ee:c.instructions+=8;goto B51c9ee;
case 0x51c9f1:c.instructions+=7;goto B51c9f1;
case 0x51c9f5:c.instructions+=6;goto B51c9f5;
case 0x51c9f6:c.instructions+=5;goto B51c9f6;
case 0x51c9f7:c.instructions+=4;goto B51c9f7;
case 0x51c9fb:c.instructions+=3;goto B51c9fb;
case 0x51c9ff:c.instructions+=2;goto B51c9ff;
case 0x51ca00:c.instructions+=1;goto B51ca00;
case 0x51ca05:goto L51ca05;
case 0x51ca09:c.instructions+=7;goto B51ca09;
case 0x51ca0f:c.instructions+=6;goto B51ca0f;
case 0x51ca14:c.instructions+=5;goto B51ca14;
case 0x51ca17:c.instructions+=4;goto B51ca17;
case 0x51ca1b:c.instructions+=3;goto B51ca1b;
case 0x51ca1d:c.instructions+=2;goto B51ca1d;
case 0x51ca20:c.instructions+=1;goto B51ca20;
case 0x51ca22:goto L51ca22;
case 0x51ca26:c.instructions+=8;goto B51ca26;
case 0x51ca2a:c.instructions+=7;goto B51ca2a;
case 0x51ca2e:c.instructions+=6;goto B51ca2e;
case 0x51ca30:c.instructions+=5;goto B51ca30;
case 0x51ca34:c.instructions+=4;goto B51ca34;
case 0x51ca36:c.instructions+=3;goto B51ca36;
case 0x51ca3a:c.instructions+=2;goto B51ca3a;
case 0x51ca3e:c.instructions+=1;goto B51ca3e;
case 0x51ca40:goto L51ca40;
case 0x51ca43:c.instructions+=1;goto B51ca43;
case 0x51ca50:goto L51ca50;
case 0x51ca55:c.instructions+=1;goto B51ca55;
case 0x51ca5a:goto L51ca5a;
case 0x51ca5b:c.instructions+=9;goto B51ca5b;
case 0x51ca5c:c.instructions+=8;goto B51ca5c;
case 0x51ca5d:c.instructions+=7;goto B51ca5d;
case 0x51ca5f:c.instructions+=6;goto B51ca5f;
case 0x51ca61:c.instructions+=5;goto B51ca61;
case 0x51ca62:c.instructions+=4;goto B51ca62;
case 0x51ca66:c.instructions+=3;goto B51ca66;
case 0x51ca67:c.instructions+=2;goto B51ca67;
case 0x51ca69:c.instructions+=1;goto B51ca69;
case 0x51ca6c:goto L51ca6c;
case 0x51ca73:c.instructions+=9;goto B51ca73;
case 0x51ca7a:c.instructions+=8;goto B51ca7a;
case 0x51ca7e:c.instructions+=7;goto B51ca7e;
case 0x51ca7f:c.instructions+=6;goto B51ca7f;
case 0x51ca85:c.instructions+=5;goto B51ca85;
case 0x51ca8f:c.instructions+=4;goto B51ca8f;
case 0x51ca91:c.instructions+=3;goto B51ca91;
case 0x51ca92:c.instructions+=2;goto B51ca92;
case 0x51ca94:c.instructions+=1;goto B51ca94;
case 0x51ca97:goto L51ca97;
case 0x51ca9a:c.instructions+=5;goto B51ca9a;
case 0x51caa0:c.instructions+=4;goto B51caa0;
case 0x51caa6:c.instructions+=3;goto B51caa6;
case 0x51caa9:c.instructions+=2;goto B51caa9;
case 0x51caab:c.instructions+=1;goto B51caab;
case 0x51caad:goto L51caad;
case 0x51cab0:goto L51cab0;
case 0x51cab4:c.instructions+=1;goto B51cab4;
case 0x51cab6:goto L51cab6;
case 0x51cab7:c.instructions+=6;goto B51cab7;
case 0x51cab9:c.instructions+=5;goto B51cab9;
case 0x51cabd:c.instructions+=4;goto B51cabd;
case 0x51cabe:c.instructions+=3;goto B51cabe;
case 0x51cabf:c.instructions+=2;goto B51cabf;
case 0x51cac1:c.instructions+=1;goto B51cac1;
case 0x51cac6:goto L51cac6;
case 0x51cac9:c.instructions+=2;goto B51cac9;
case 0x51cacb:c.instructions+=1;goto B51cacb;
case 0x51cacd:goto L51cacd;
case 0x51cacf:c.instructions+=1;goto B51cacf;
case 0x51cad4:goto L51cad4;
case 0x51cad6:c.instructions+=6;goto B51cad6;
case 0x51cad8:c.instructions+=5;goto B51cad8;
case 0x51cad9:c.instructions+=4;goto B51cad9;
case 0x51cadc:c.instructions+=3;goto B51cadc;
case 0x51cadd:c.instructions+=2;goto B51cadd;
case 0x51cadf:c.instructions+=1;goto B51cadf;
case 0x51cae2:goto L51cae2;
case 0x51cae4:c.instructions+=3;goto B51cae4;
case 0x51cae5:c.instructions+=2;goto B51cae5;
case 0x51cae7:c.instructions+=1;goto B51cae7;
case 0x51caea:goto L51caea;
case 0x51caef:c.instructions+=7;goto B51caef;
case 0x51caf5:c.instructions+=6;goto B51caf5;
case 0x51caf7:c.instructions+=5;goto B51caf7;
case 0x51caf8:c.instructions+=4;goto B51caf8;
case 0x51caf9:c.instructions+=3;goto B51caf9;
case 0x51cafa:c.instructions+=2;goto B51cafa;
case 0x51cafb:c.instructions+=1;goto B51cafb;
case 0x51cafd:goto L51cafd;
case 0x51caff:goto L51caff;
case 0x51cb04:c.instructions+=6;goto B51cb04;
case 0x51cb06:c.instructions+=5;goto B51cb06;
case 0x51cb0b:c.instructions+=4;goto B51cb0b;
case 0x51cb10:c.instructions+=3;goto B51cb10;
case 0x51cb15:c.instructions+=2;goto B51cb15;
case 0x51cb1b:c.instructions+=1;goto B51cb1b;
case 0x51cb20:goto L51cb20;
case 0x51cb24:c.instructions+=4;goto B51cb24;
case 0x51cb26:c.instructions+=3;goto B51cb26;
case 0x51cb27:c.instructions+=2;goto B51cb27;
case 0x51cb29:c.instructions+=1;goto B51cb29;
case 0x51cb2b:goto L51cb2b;
case 0x51cb2c:c.instructions+=2;goto B51cb2c;
case 0x51cb31:c.instructions+=1;goto B51cb31;
case 0x51cb36:goto L51cb36;
case 0x51cb38:c.instructions+=1;goto B51cb38;
case 0x51cb3a:goto L51cb3a;
case 0x51cb3d:c.instructions+=1;goto B51cb3d;
case 0x51cb3f:goto L51cb3f;
case 0x51cb41:goto L51cb41;
case 0x51cb45:c.instructions+=6;goto B51cb45;
case 0x51cb49:c.instructions+=5;goto B51cb49;
case 0x51cb4a:c.instructions+=4;goto B51cb4a;
case 0x51cb4d:c.instructions+=3;goto B51cb4d;
case 0x51cb4e:c.instructions+=2;goto B51cb4e;
case 0x51cb4f:c.instructions+=1;goto B51cb4f;
case 0x51cb54:goto L51cb54;
case 0x51cb55:c.instructions+=1;goto B51cb55;
case 0x51cb60:goto L51cb60;
case 0x51cb64:c.instructions+=4;goto B51cb64;
case 0x51cb66:c.instructions+=3;goto B51cb66;
case 0x51cb67:c.instructions+=2;goto B51cb67;
case 0x51cb69:c.instructions+=1;goto B51cb69;
case 0x51cb6b:goto L51cb6b;
case 0x51cb6c:c.instructions+=2;goto B51cb6c;
case 0x51cb71:c.instructions+=1;goto B51cb71;
case 0x51cb76:goto L51cb76;
case 0x51cb78:c.instructions+=1;goto B51cb78;
case 0x51cb7a:goto L51cb7a;
case 0x51cb7d:c.instructions+=1;goto B51cb7d;
case 0x51cb7f:goto L51cb7f;
case 0x51cb81:goto L51cb81;
case 0x51cb85:c.instructions+=6;goto B51cb85;
case 0x51cb89:c.instructions+=5;goto B51cb89;
case 0x51cb8a:c.instructions+=4;goto B51cb8a;
case 0x51cb8d:c.instructions+=3;goto B51cb8d;
case 0x51cb8e:c.instructions+=2;goto B51cb8e;
case 0x51cb8f:c.instructions+=1;goto B51cb8f;
case 0x51cb94:goto L51cb94;
case 0x51cb95:c.instructions+=1;goto B51cb95;
case 0x51cba0:goto L51cba0;
case 0x51cba1:c.instructions+=6;goto B51cba1;
case 0x51cba2:c.instructions+=5;goto B51cba2;
case 0x51cba6:c.instructions+=4;goto B51cba6;
case 0x51cba8:c.instructions+=3;goto B51cba8;
case 0x51cba9:c.instructions+=2;goto B51cba9;
case 0x51cbae:c.instructions+=1;goto B51cbae;
case 0x51cbb3:goto L51cbb3;
case 0x51cbb5:c.instructions+=1;goto B51cbb5;
case 0x51cbb7:goto L51cbb7;
case 0x51cbb8:c.instructions+=3;goto B51cbb8;
case 0x51cbbb:c.instructions+=2;goto B51cbbb;
case 0x51cbbd:c.instructions+=1;goto B51cbbd;
case 0x51cbbf:goto L51cbbf;
case 0x51cbc4:c.instructions+=3;goto B51cbc4;
case 0x51cbc5:c.instructions+=2;goto B51cbc5;
case 0x51cbca:c.instructions+=1;goto B51cbca;
case 0x51cbcf:goto L51cbcf;
case 0x51cbd3:c.instructions+=4;goto B51cbd3;
case 0x51cbd4:c.instructions+=3;goto B51cbd4;
case 0x51cbd5:c.instructions+=2;goto B51cbd5;
case 0x51cbda:c.instructions+=1;goto B51cbda;
case 0x51cbdf:goto L51cbdf;
case 0x51cbe2:c.instructions+=4;goto B51cbe2;
case 0x51cbe3:c.instructions+=3;goto B51cbe3;
case 0x51cbe4:c.instructions+=2;goto B51cbe4;
case 0x51cbe7:c.instructions+=1;goto B51cbe7;
case 0x51cbec:goto L51cbec;
case 0x51cbed:goto L51cbed;
case 0x51cbee:c.instructions+=2;goto B51cbee;
case 0x51cbef:c.instructions+=1;goto B51cbef;
case 0x51cc00:goto L51cc00;
case 0x51cc01:c.instructions+=7;goto B51cc01;
case 0x51cc02:c.instructions+=6;goto B51cc02;
case 0x51cc06:c.instructions+=5;goto B51cc06;
case 0x51cc07:c.instructions+=4;goto B51cc07;
case 0x51cc09:c.instructions+=3;goto B51cc09;
case 0x51cc0a:c.instructions+=2;goto B51cc0a;
case 0x51cc0f:c.instructions+=1;goto B51cc0f;
case 0x51cc14:goto L51cc14;
case 0x51cc16:c.instructions+=1;goto B51cc16;
case 0x51cc18:goto L51cc18;
case 0x51cc1b:c.instructions+=2;goto B51cc1b;
case 0x51cc1d:c.instructions+=1;goto B51cc1d;
case 0x51cc1f:goto L51cc1f;
case 0x51cc24:c.instructions+=3;goto B51cc24;
case 0x51cc25:c.instructions+=2;goto B51cc25;
case 0x51cc2a:c.instructions+=1;goto B51cc2a;
case 0x51cc2f:goto L51cc2f;
case 0x51cc30:c.instructions+=2;goto B51cc30;
case 0x51cc35:c.instructions+=1;goto B51cc35;
case 0x51cc3a:goto L51cc3a;
case 0x51cc3d:c.instructions+=3;goto B51cc3d;
case 0x51cc40:c.instructions+=2;goto B51cc40;
case 0x51cc41:c.instructions+=1;goto B51cc41;
case 0x51cc46:goto L51cc46;
case 0x51cc47:c.instructions+=3;goto B51cc47;
case 0x51cc48:c.instructions+=2;goto B51cc48;
case 0x51cc49:c.instructions+=1;goto B51cc49;
case 0x51cc4c:goto L51cc4c;
case 0x51cc4f:c.instructions+=2;goto B51cc4f;
case 0x51cc50:c.instructions+=1;goto B51cc50;
case 0x51cc55:goto L51cc55;
case 0x51cc56:c.instructions+=3;goto B51cc56;
case 0x51cc57:c.instructions+=2;goto B51cc57;
case 0x51cc58:c.instructions+=1;goto B51cc58;
case 0x51cc60:goto L51cc60;
case 0x51cc64:c.instructions+=3;goto B51cc64;
case 0x51cc65:c.instructions+=2;goto B51cc65;
case 0x51cc6a:c.instructions+=1;goto B51cc6a;
case 0x51cc6f:goto L51cc6f;
case 0x51cc71:c.instructions+=1;goto B51cc71;
case 0x51cc73:goto L51cc73;
case 0x51cc76:c.instructions+=2;goto B51cc76;
case 0x51cc78:c.instructions+=1;goto B51cc78;
case 0x51cc7a:goto L51cc7a;
case 0x51cc80:c.instructions+=4;goto B51cc80;
case 0x51cc81:c.instructions+=3;goto B51cc81;
case 0x51cc83:c.instructions+=2;goto B51cc83;
case 0x51cc85:c.instructions+=1;goto B51cc85;
case 0x51cc87:goto L51cc87;
case 0x51cc8d:c.instructions+=2;goto B51cc8d;
case 0x51cc8e:c.instructions+=1;goto B51cc8e;
case 0x51cc92:goto L51cc92;
case 0x51cc94:c.instructions+=2;goto B51cc94;
case 0x51cc97:c.instructions+=1;goto B51cc97;
case 0x51cc99:goto L51cc99;
case 0x51cc9b:goto L51cc9b;
case 0x51cc9e:c.instructions+=2;goto B51cc9e;
case 0x51cc9f:c.instructions+=1;goto B51cc9f;
case 0x51cca1:goto L51cca1;
case 0x51cca3:c.instructions+=2;goto B51cca3;
case 0x51cca4:c.instructions+=1;goto B51cca4;
case 0x51cca6:goto L51cca6;
case 0x51ccab:c.instructions+=2;goto B51ccab;
case 0x51ccae:c.instructions+=1;goto B51ccae;
case 0x51ccb0:goto L51ccb0;
case 0x51ccb5:c.instructions+=3;goto B51ccb5;
case 0x51ccb8:c.instructions+=2;goto B51ccb8;
case 0x51ccb9:c.instructions+=1;goto B51ccb9;
case 0x51ccbc:goto L51ccbc;
case 0x51ccc1:c.instructions+=1;goto B51ccc1;
case 0x51ccc4:goto L51ccc4;
case 0x51ccc5:goto L51ccc5;
case 0x51ccd0:goto L51ccd0;
case 0x51ccd1:c.instructions+=6;goto B51ccd1;
case 0x51ccd2:c.instructions+=5;goto B51ccd2;
case 0x51ccd5:c.instructions+=4;goto B51ccd5;
case 0x51ccd6:c.instructions+=3;goto B51ccd6;
case 0x51ccd9:c.instructions+=2;goto B51ccd9;
case 0x51ccdb:c.instructions+=1;goto B51ccdb;
case 0x51ccdd:goto L51ccdd;
case 0x51cce1:goto L51cce1;
case 0x51cce4:c.instructions+=3;goto B51cce4;
case 0x51cce5:c.instructions+=2;goto B51cce5;
case 0x51cce6:c.instructions+=1;goto B51cce6;
case 0x51cceb:goto L51cceb;
case 0x51ccee:c.instructions+=2;goto B51ccee;
case 0x51ccf0:c.instructions+=1;goto B51ccf0;
case 0x51ccf2:goto L51ccf2;
case 0x51ccf4:c.instructions+=2;goto B51ccf4;
case 0x51ccf6:c.instructions+=1;goto B51ccf6;
case 0x51ccf8:goto L51ccf8;
case 0x51ccf9:c.instructions+=4;goto B51ccf9;
case 0x51ccfa:c.instructions+=3;goto B51ccfa;
case 0x51ccfc:c.instructions+=2;goto B51ccfc;
case 0x51ccfd:c.instructions+=1;goto B51ccfd;
case 0x51cd00:goto L51cd00;
case 0x51cd01:c.instructions+=4;goto B51cd01;
case 0x51cd03:c.instructions+=3;goto B51cd03;
case 0x51cd04:c.instructions+=2;goto B51cd04;
case 0x51cd05:c.instructions+=1;goto B51cd05;
case 0x51cd10:goto L51cd10;
case 0x51cd15:c.instructions+=2;goto B51cd15;
case 0x51cd17:c.instructions+=1;goto B51cd17;
case 0x51cd19:goto L51cd19;
case 0x51cd1d:c.instructions+=3;goto B51cd1d;
case 0x51cd1e:c.instructions+=2;goto B51cd1e;
case 0x51cd23:c.instructions+=1;goto B51cd23;
case 0x51cd28:goto L51cd28;
case 0x51cd2a:c.instructions+=1;goto B51cd2a;
case 0x51cd2c:goto L51cd2c;
case 0x51cd2f:c.instructions+=2;goto B51cd2f;
case 0x51cd31:c.instructions+=1;goto B51cd31;
case 0x51cd33:goto L51cd33;
case 0x51cd37:c.instructions+=1;goto B51cd37;
case 0x51cd3a:goto L51cd3a;
case 0x51cd40:goto L51cd40;
case 0x51cd44:c.instructions+=3;goto B51cd44;
case 0x51cd45:c.instructions+=2;goto B51cd45;
case 0x51cd4a:c.instructions+=1;goto B51cd4a;
case 0x51cd4f:goto L51cd4f;
case 0x51cd51:c.instructions+=1;goto B51cd51;
case 0x51cd53:goto L51cd53;
case 0x51cd58:c.instructions+=1;goto B51cd58;
case 0x51cd5c:goto L51cd5c;
case 0x51cd60:goto L51cd60;
case 0x51cd65:c.instructions+=2;goto B51cd65;
case 0x51cd67:c.instructions+=1;goto B51cd67;
case 0x51cd69:goto L51cd69;
case 0x51cd6d:c.instructions+=3;goto B51cd6d;
case 0x51cd6e:c.instructions+=2;goto B51cd6e;
case 0x51cd73:c.instructions+=1;goto B51cd73;
case 0x51cd78:goto L51cd78;
case 0x51cd7a:c.instructions+=1;goto B51cd7a;
case 0x51cd7c:goto L51cd7c;
case 0x51cd7f:c.instructions+=1;goto B51cd7f;
case 0x51cd81:goto L51cd81;
case 0x51cd83:goto L51cd83;
case 0x51cd85:c.instructions+=2;goto B51cd85;
case 0x51cd87:c.instructions+=1;goto B51cd87;
case 0x51cd89:goto L51cd89;
case 0x51cd8f:c.instructions+=1;goto B51cd8f;
case 0x51cd90:goto L51cd90;
case 0x51cd92:goto L51cd92;
case 0x51cda0:goto L51cda0;
case 0x51cda6:c.instructions+=2;goto B51cda6;
case 0x51cda8:c.instructions+=1;goto B51cda8;
case 0x51cdaa:goto L51cdaa;
case 0x51cdae:c.instructions+=6;goto B51cdae;
case 0x51cdb2:c.instructions+=5;goto B51cdb2;
case 0x51cdb3:c.instructions+=4;goto B51cdb3;
case 0x51cdb7:c.instructions+=3;goto B51cdb7;
case 0x51cdb8:c.instructions+=2;goto B51cdb8;
case 0x51cdb9:c.instructions+=1;goto B51cdb9;
case 0x51cdbe:goto L51cdbe;
case 0x51cdc0:goto L51cdc0;
case 0x51cdc5:c.instructions+=2;goto B51cdc5;
case 0x51cdc7:c.instructions+=1;goto B51cdc7;
case 0x51cdc9:goto L51cdc9;
case 0x51cdcc:c.instructions+=2;goto B51cdcc;
case 0x51cdce:c.instructions+=1;goto B51cdce;
case 0x51cdd0:goto L51cdd0;
case 0x51cdd4:c.instructions+=9;goto B51cdd4;
case 0x51cdd8:c.instructions+=8;goto B51cdd8;
case 0x51cdda:c.instructions+=7;goto B51cdda;
case 0x51cddb:c.instructions+=6;goto B51cddb;
case 0x51cddf:c.instructions+=5;goto B51cddf;
case 0x51cde0:c.instructions+=4;goto B51cde0;
case 0x51cde4:c.instructions+=3;goto B51cde4;
case 0x51cde5:c.instructions+=2;goto B51cde5;
case 0x51cde6:c.instructions+=1;goto B51cde6;
case 0x51cdeb:goto L51cdeb;
case 0x51cdf0:goto L51cdf0;
case 0x51cdf4:c.instructions+=6;goto B51cdf4;
case 0x51cdf5:c.instructions+=5;goto B51cdf5;
case 0x51cdf9:c.instructions+=4;goto B51cdf9;
case 0x51cdfa:c.instructions+=3;goto B51cdfa;
case 0x51cdfb:c.instructions+=2;goto B51cdfb;
case 0x51ce00:c.instructions+=1;goto B51ce00;
case 0x51ce05:goto L51ce05;
case 0x51ce0a:c.instructions+=3;goto B51ce0a;
case 0x51ce0d:c.instructions+=2;goto B51ce0d;
case 0x51ce0f:c.instructions+=1;goto B51ce0f;
case 0x51ce11:goto L51ce11;
case 0x51ce12:c.instructions+=3;goto B51ce12;
case 0x51ce15:c.instructions+=2;goto B51ce15;
case 0x51ce17:c.instructions+=1;goto B51ce17;
case 0x51ce19:goto L51ce19;
case 0x51ce1a:c.instructions+=2;goto B51ce1a;
case 0x51ce1f:c.instructions+=1;goto B51ce1f;
case 0x51ce24:goto L51ce24;
case 0x51ce26:c.instructions+=1;goto B51ce26;
case 0x51ce28:goto L51ce28;
case 0x51ce2b:c.instructions+=2;goto B51ce2b;
case 0x51ce2d:c.instructions+=1;goto B51ce2d;
case 0x51ce2f:goto L51ce2f;
case 0x51ce34:c.instructions+=1;goto B51ce34;
case 0x51ce39:goto L51ce39;
case 0x51ce3d:c.instructions+=8;goto B51ce3d;
case 0x51ce40:c.instructions+=7;goto B51ce40;
case 0x51ce41:c.instructions+=6;goto B51ce41;
case 0x51ce43:c.instructions+=5;goto B51ce43;
case 0x51ce44:c.instructions+=4;goto B51ce44;
case 0x51ce46:c.instructions+=3;goto B51ce46;
case 0x51ce47:c.instructions+=2;goto B51ce47;
case 0x51ce49:c.instructions+=1;goto B51ce49;
case 0x51ce4e:goto L51ce4e;
case 0x51ce4f:goto L51ce4f;
case 0x51ce50:c.instructions+=1;goto B51ce50;
case 0x51ce60:goto L51ce60;
case 0x51ce64:c.instructions+=5;goto B51ce64;
case 0x51ce68:c.instructions+=4;goto B51ce68;
case 0x51ce6a:c.instructions+=3;goto B51ce6a;
case 0x51ce6b:c.instructions+=2;goto B51ce6b;
case 0x51ce6c:c.instructions+=1;goto B51ce6c;
case 0x51ce71:goto L51ce71;
case 0x51ce74:c.instructions+=1;goto B51ce74;
case 0x51ce80:goto L51ce80;
case 0x51ce84:c.instructions+=3;goto B51ce84;
case 0x51ce85:c.instructions+=2;goto B51ce85;
case 0x51ce8a:c.instructions+=1;goto B51ce8a;
case 0x51ce8f:goto L51ce8f;
case 0x51ce91:c.instructions+=1;goto B51ce91;
case 0x51ce93:goto L51ce93;
case 0x51ce99:c.instructions+=1;goto B51ce99;
case 0x51ce9d:goto L51ce9d;
case 0x51cea0:goto L51cea0;
case 0x51cea3:c.instructions+=2;goto B51cea3;
case 0x51cea5:c.instructions+=1;goto B51cea5;
case 0x51cea7:goto L51cea7;
case 0x51ceab:c.instructions+=2;goto B51ceab;
case 0x51ceac:c.instructions+=1;goto B51ceac;
case 0x51ceb1:goto L51ceb1;
case 0x51ceb4:c.instructions+=2;goto B51ceb4;
case 0x51ceb6:c.instructions+=1;goto B51ceb6;
case 0x51ceb9:goto L51ceb9;
case 0x51cebd:c.instructions+=2;goto B51cebd;
case 0x51cebe:c.instructions+=1;goto B51cebe;
case 0x51cec3:goto L51cec3;
case 0x51cec6:c.instructions+=2;goto B51cec6;
case 0x51cec8:c.instructions+=1;goto B51cec8;
case 0x51ced0:goto L51ced0;
case 0x51ced1:c.instructions+=7;goto B51ced1;
case 0x51ced3:c.instructions+=6;goto B51ced3;
case 0x51ced6:c.instructions+=5;goto B51ced6;
case 0x51ced9:c.instructions+=4;goto B51ced9;
case 0x51ceda:c.instructions+=3;goto B51ceda;
case 0x51cedd:c.instructions+=2;goto B51cedd;
case 0x51cedf:c.instructions+=1;goto B51cedf;
case 0x51cee5:goto L51cee5;
case 0x51cee8:c.instructions+=5;goto B51cee8;
case 0x51ceec:c.instructions+=4;goto B51ceec;
case 0x51cef2:c.instructions+=3;goto B51cef2;
case 0x51cef3:c.instructions+=2;goto B51cef3;
case 0x51cef7:c.instructions+=1;goto B51cef7;
case 0x51cefc:goto L51cefc;
case 0x51cf00:c.instructions+=3;goto B51cf00;
case 0x51cf06:c.instructions+=2;goto B51cf06;
case 0x51cf09:c.instructions+=1;goto B51cf09;
case 0x51cf0e:goto L51cf0e;
case 0x51cf12:c.instructions+=4;goto B51cf12;
case 0x51cf16:c.instructions+=3;goto B51cf16;
case 0x51cf17:c.instructions+=2;goto B51cf17;
case 0x51cf1b:c.instructions+=1;goto B51cf1b;
case 0x51cf20:goto L51cf20;
case 0x51cf24:c.instructions+=7;goto B51cf24;
case 0x51cf28:c.instructions+=6;goto B51cf28;
case 0x51cf2a:c.instructions+=5;goto B51cf2a;
case 0x51cf2b:c.instructions+=4;goto B51cf2b;
case 0x51cf2f:c.instructions+=3;goto B51cf2f;
case 0x51cf33:c.instructions+=2;goto B51cf33;
case 0x51cf34:c.instructions+=1;goto B51cf34;
case 0x51cf39:goto L51cf39;
case 0x51cf3d:c.instructions+=13;goto B51cf3d;
case 0x51cf41:c.instructions+=12;goto B51cf41;
case 0x51cf45:c.instructions+=11;goto B51cf45;
case 0x51cf48:c.instructions+=10;goto B51cf48;
case 0x51cf4c:c.instructions+=9;goto B51cf4c;
case 0x51cf50:c.instructions+=8;goto B51cf50;
case 0x51cf54:c.instructions+=7;goto B51cf54;
case 0x51cf56:c.instructions+=6;goto B51cf56;
case 0x51cf5a:c.instructions+=5;goto B51cf5a;
case 0x51cf5e:c.instructions+=4;goto B51cf5e;
case 0x51cf5f:c.instructions+=3;goto B51cf5f;
case 0x51cf61:c.instructions+=2;goto B51cf61;
case 0x51cf65:c.instructions+=1;goto B51cf65;
case 0x51cf6a:goto L51cf6a;
case 0x51cf6b:c.instructions+=3;goto B51cf6b;
case 0x51cf6d:c.instructions+=2;goto B51cf6d;
case 0x51cf6e:c.instructions+=1;goto B51cf6e;
case 0x51cf70:goto L51cf70;
case 0x51cf71:c.instructions+=3;goto B51cf71;
case 0x51cf75:c.instructions+=2;goto B51cf75;
case 0x51cf77:c.instructions+=1;goto B51cf77;
case 0x51cf79:goto L51cf79;
case 0x51cf7a:c.instructions+=4;goto B51cf7a;
case 0x51cf7b:c.instructions+=3;goto B51cf7b;
case 0x51cf7e:c.instructions+=2;goto B51cf7e;
case 0x51cf80:c.instructions+=1;goto B51cf80;
case 0x51cf82:goto L51cf82;
case 0x51cf86:goto L51cf86;
case 0x51cf87:c.instructions+=1;goto B51cf87;
case 0x51cf8c:goto L51cf8c;
case 0x51cf8f:c.instructions+=3;goto B51cf8f;
case 0x51cf92:c.instructions+=2;goto B51cf92;
case 0x51cf94:c.instructions+=1;goto B51cf94;
case 0x51cf96:goto L51cf96;
case 0x51cf99:c.instructions+=2;goto B51cf99;
case 0x51cf9b:c.instructions+=1;goto B51cf9b;
case 0x51cf9d:goto L51cf9d;
case 0x51cf9e:c.instructions+=3;goto B51cf9e;
case 0x51cf9f:c.instructions+=2;goto B51cf9f;
case 0x51cfa0:c.instructions+=1;goto B51cfa0;
case 0x51cfa1:goto L51cfa1;
case 0x51cfa3:c.instructions+=1;goto B51cfa3;
case 0x51cfa5:goto L51cfa5;
case 0x51cfa8:c.instructions+=1;goto B51cfa8;
case 0x51cfaa:goto L51cfaa;
case 0x51cfac:c.instructions+=2;goto B51cfac;
case 0x51cfaf:c.instructions+=1;goto B51cfaf;
case 0x51cfb4:goto L51cfb4;
case 0x51cfb7:c.instructions+=1;goto B51cfb7;
case 0x51cfbe:goto L51cfbe;
case 0x51cfc2:c.instructions+=2;goto B51cfc2;
case 0x51cfc4:c.instructions+=1;goto B51cfc4;
case 0x51cfc6:goto L51cfc6;
case 0x51cfcd:goto L51cfcd;
case 0x51cfce:c.instructions+=1;goto B51cfce;
case 0x51cfcf:goto L51cfcf;
case 0x51cfd0:c.instructions+=1;goto B51cfd0;
case 0x51cfe0:goto L51cfe0;
case 0x51cfe1:c.instructions+=3;goto B51cfe1;
case 0x51cfe5:c.instructions+=2;goto B51cfe5;
case 0x51cfe7:c.instructions+=1;goto B51cfe7;
case 0x51cfe9:goto L51cfe9;
case 0x51cfea:c.instructions+=3;goto B51cfea;
case 0x51cfed:c.instructions+=2;goto B51cfed;
case 0x51cfef:c.instructions+=1;goto B51cfef;
case 0x51cff1:goto L51cff1;
case 0x51cff5:goto L51cff5;
case 0x51cff8:c.instructions+=1;goto B51cff8;
case 0x51cffa:goto L51cffa;
case 0x51cffd:c.instructions+=2;goto B51cffd;
case 0x51cfff:c.instructions+=1;goto B51cfff;
default:missing_instruction(c.pc);}
B51c001:L51c001:{c.instructions+=27;NFSU2_TR(0x51c001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51c002:{NFSU2_TR(0x51c002);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c006:{NFSU2_TR(0x51c006);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c00a:{NFSU2_TR(0x51c00a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c00e:{NFSU2_TR(0x51c00e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c011:{NFSU2_TR(0x51c011);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B51c013:{NFSU2_TR(0x51c013);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c017:{NFSU2_TR(0x51c017);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51c019:{NFSU2_TR(0x51c019);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c01d:{NFSU2_TR(0x51c01d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c021:{NFSU2_TR(0x51c021);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c025:{NFSU2_TR(0x51c025);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B51c029:{NFSU2_TR(0x51c029);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B51c02d:{NFSU2_TR(0x51c02d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c031:{NFSU2_TR(0x51c031);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B51c033:{NFSU2_TR(0x51c033);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c037:{NFSU2_TR(0x51c037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c038:{NFSU2_TR(0x51c038);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c03c:{NFSU2_TR(0x51c03c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c040:{NFSU2_TR(0x51c040);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B51c042:{NFSU2_TR(0x51c042);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c046:{NFSU2_TR(0x51c046);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51c048:{NFSU2_TR(0x51c048);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c04c:{NFSU2_TR(0x51c04c);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B51c052:{NFSU2_TR(0x51c052);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51c054:{NFSU2_TR(0x51c054);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51c057:{NFSU2_TR(0x51c057);
if(r1(R+514)){{goto L51c061;}}
}
B51c059:L51c059:{c.instructions+=2;NFSU2_TR(0x51c059);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51c05b:{NFSU2_TR(0x51c05b);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51c061:L51c061:{c.instructions+=22;NFSU2_TR(0x51c061);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B51c065:{NFSU2_TR(0x51c065);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B51c069:{NFSU2_TR(0x51c069);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c06d:{NFSU2_TR(0x51c06d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c071:{NFSU2_TR(0x51c071);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51c073:{NFSU2_TR(0x51c073);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c077:{NFSU2_TR(0x51c077);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c07b:{NFSU2_TR(0x51c07b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c07f:{NFSU2_TR(0x51c07f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51c083:{NFSU2_TR(0x51c083);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B51c085:{NFSU2_TR(0x51c085);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c089:{NFSU2_TR(0x51c089);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51c08b:{NFSU2_TR(0x51c08b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c08f:{NFSU2_TR(0x51c08f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51c097:{NFSU2_TR(0x51c097);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c09a:{NFSU2_TR(0x51c09a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c09e:{NFSU2_TR(0x51c09e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c0a2:{NFSU2_TR(0x51c0a2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c0a6:{NFSU2_TR(0x51c0a6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c0aa:{NFSU2_TR(0x51c0aa);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c0ae:{NFSU2_TR(0x51c0ae);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c0b2:{NFSU2_TR(0x51c0b2);
if(r1(R+518)){{goto L51c0c1;}}
}
B51c0b4:L51c0b4:{c.instructions+=4;NFSU2_TR(0x51c0b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c0b7:{NFSU2_TR(0x51c0b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c0ba:{NFSU2_TR(0x51c0ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c0bd:{NFSU2_TR(0x51c0bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c0c1:L51c0c1:{c.instructions+=24;NFSU2_TR(0x51c0c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c0c5:{NFSU2_TR(0x51c0c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c0c6:{NFSU2_TR(0x51c0c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c0ca:{NFSU2_TR(0x51c0ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c0cb:{NFSU2_TR(0x51c0cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c0cf:{NFSU2_TR(0x51c0cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c0d0:{NFSU2_TR(0x51c0d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c0d4:{NFSU2_TR(0x51c0d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c0d5:{NFSU2_TR(0x51c0d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c0d9:{NFSU2_TR(0x51c0d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c0da:{NFSU2_TR(0x51c0da);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c0de:{NFSU2_TR(0x51c0de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c0df:{NFSU2_TR(0x51c0df);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c0e3:{NFSU2_TR(0x51c0e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c0e4:{NFSU2_TR(0x51c0e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c0e8:{NFSU2_TR(0x51c0e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c0e9:{NFSU2_TR(0x51c0e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c0ed:{NFSU2_TR(0x51c0ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c0ee:{NFSU2_TR(0x51c0ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c0f2:{NFSU2_TR(0x51c0f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c0f3:{NFSU2_TR(0x51c0f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c0f7:{NFSU2_TR(0x51c0f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c0f8:{NFSU2_TR(0x51c0f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c0f9:{NFSU2_TR(0x51c0f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c0feull));
TAIL_STATIC(0x519fc0u,519);
}
B51c0fe:L51c0fe:{c.instructions+=2;NFSU2_TR(0x51c0fe);
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
B51c101:{NFSU2_TR(0x51c101);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c110:L51c110:{c.instructions+=13;NFSU2_TR(0x51c110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B51c113:{NFSU2_TR(0x51c113);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c114:{NFSU2_TR(0x51c114);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c115:{NFSU2_TR(0x51c115);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c116:{NFSU2_TR(0x51c116);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51c11a:{NFSU2_TR(0x51c11a);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c11d:{NFSU2_TR(0x51c11d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51c120:{NFSU2_TR(0x51c120);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c121:{NFSU2_TR(0x51c121);
__builtin_memmove((R+28),(R+4),4);
}
B51c123:{NFSU2_TR(0x51c123);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51c126:{NFSU2_TR(0x51c126);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c12a:{NFSU2_TR(0x51c12a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c12e:{NFSU2_TR(0x51c12e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c133ull));
TAIL_STATIC(0x75bed4u,75b);
}
B51c133:L51c133:{c.instructions+=6;NFSU2_TR(0x51c133);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x5ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51c136:{NFSU2_TR(0x51c136);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c139:{NFSU2_TR(0x51c139);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51c13d:{NFSU2_TR(0x51c13d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c141:{NFSU2_TR(0x51c141);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c145:{NFSU2_TR(0x51c145);
if(r1(R+518)){{goto L51c169;}}
}
B51c147:L51c147:{c.instructions+=6;NFSU2_TR(0x51c147);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c14a:{NFSU2_TR(0x51c14a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c14b:{NFSU2_TR(0x51c14b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c14c:{NFSU2_TR(0x51c14c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c14d:{NFSU2_TR(0x51c14d);
__builtin_memmove((R+4),(R+28),4);
}
B51c14f:{NFSU2_TR(0x51c14f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c154ull));
TAIL_STATIC(0x50c080u,50c);
}
B51c154:L51c154:{c.instructions+=7;NFSU2_TR(0x51c154);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c158:{NFSU2_TR(0x51c158);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c15c:{NFSU2_TR(0x51c15c);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c15f:{NFSU2_TR(0x51c15f);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51c162:{NFSU2_TR(0x51c162);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c165:{NFSU2_TR(0x51c165);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B51c167:{NFSU2_TR(0x51c167);
{goto L51c172;}
}
B51c169:L51c169:{c.instructions+=4;NFSU2_TR(0x51c169);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c16a:{NFSU2_TR(0x51c16a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c16b:{NFSU2_TR(0x51c16b);
__builtin_memmove((R+4),(R+28),4);
}
B51c16d:{NFSU2_TR(0x51c16d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c172ull));
TAIL_STATIC(0x50bf40u,50b);
}
B51c172:L51c172:{c.instructions+=2;NFSU2_TR(0x51c172);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51c175:{NFSU2_TR(0x51c175);
if(r1(R+518)){{goto L51c183;}}
}
B51c177:L51c177:{c.instructions+=3;NFSU2_TR(0x51c177);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51c17d:{NFSU2_TR(0x51c17d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c181:{NFSU2_TR(0x51c181);
{goto L51c19a;}
}
B51c183:L51c183:{c.instructions+=2;NFSU2_TR(0x51c183);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51c186:{NFSU2_TR(0x51c186);
if(r1(R+518)){{goto L51c190;}}
}
B51c188:L51c188:{c.instructions+=3;NFSU2_TR(0x51c188);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B51c18a:{NFSU2_TR(0x51c18a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c18e:{NFSU2_TR(0x51c18e);
{goto L51c19a;}
}
B51c190:L51c190:{c.instructions+=2;NFSU2_TR(0x51c190);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51c192:{NFSU2_TR(0x51c192);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51c19a:L51c19a:{c.instructions+=8;NFSU2_TR(0x51c19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c19d:{NFSU2_TR(0x51c19d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c1a1:{NFSU2_TR(0x51c1a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c1a3:{NFSU2_TR(0x51c1a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c1a4:{NFSU2_TR(0x51c1a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c1a5:{NFSU2_TR(0x51c1a5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c1a6:{NFSU2_TR(0x51c1a6);
__builtin_memmove((R+4),(R+28),4);
}
B51c1a8:{NFSU2_TR(0x51c1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c1adull));
TAIL_STATIC(0x50bce0u,50b);
}
B51c1ad:L51c1ad:{c.instructions+=4;NFSU2_TR(0x51c1ad);
__builtin_memmove((R+0),(R+12),4);
}
B51c1af:{NFSU2_TR(0x51c1af);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B51c1b2:{NFSU2_TR(0x51c1b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c1b6:{NFSU2_TR(0x51c1b6);
if(r1(R+518)){{goto L51c1c0;}}
}
B51c1b8:L51c1b8:{c.instructions+=2;NFSU2_TR(0x51c1b8);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51c1be:{NFSU2_TR(0x51c1be);
{goto L51c1d1;}
}
B51c1c0:L51c1c0:{c.instructions+=2;NFSU2_TR(0x51c1c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51c1c3:{NFSU2_TR(0x51c1c3);
if(r1(R+518)){{goto L51c1c9;}}
}
B51c1c5:L51c1c5:{c.instructions+=2;NFSU2_TR(0x51c1c5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B51c1c7:{NFSU2_TR(0x51c1c7);
{goto L51c1d1;}
}
B51c1c9:L51c1c9:{c.instructions+=2;NFSU2_TR(0x51c1c9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51c1cb:{NFSU2_TR(0x51c1cb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51c1d1:L51c1d1:{c.instructions+=36;NFSU2_TR(0x51c1d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c1d5:{NFSU2_TR(0x51c1d5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51c1d9:{NFSU2_TR(0x51c1d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51c1db:{NFSU2_TR(0x51c1db);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c1df:{NFSU2_TR(0x51c1df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51c1e2:{NFSU2_TR(0x51c1e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c1e5:{NFSU2_TR(0x51c1e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51c1e8:{NFSU2_TR(0x51c1e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c1ec:{NFSU2_TR(0x51c1ec);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51c1ed:{NFSU2_TR(0x51c1ed);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B51c1ef:{NFSU2_TR(0x51c1ef);
__builtin_memmove((R+4),(R+0),4);
}
B51c1f1:{NFSU2_TR(0x51c1f1);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B51c1f3:{NFSU2_TR(0x51c1f3);
__builtin_memmove((R+0),(R+12),4);
}
B51c1f5:{NFSU2_TR(0x51c1f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51c1f9:{NFSU2_TR(0x51c1f9);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51c1fa:{NFSU2_TR(0x51c1fa);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B51c1fc:{NFSU2_TR(0x51c1fc);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B51c1fe:{NFSU2_TR(0x51c1fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B51c201:{NFSU2_TR(0x51c201);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B51c203:{NFSU2_TR(0x51c203);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B51c206:{NFSU2_TR(0x51c206);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B51c208:{NFSU2_TR(0x51c208);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c20c:{NFSU2_TR(0x51c20c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51c20d:{NFSU2_TR(0x51c20d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B51c20f:{NFSU2_TR(0x51c20f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B51c212:{NFSU2_TR(0x51c212);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B51c214:{NFSU2_TR(0x51c214);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B51c216:{NFSU2_TR(0x51c216);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c219:{NFSU2_TR(0x51c219);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c21d:{NFSU2_TR(0x51c21d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c221:{NFSU2_TR(0x51c221);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c225:{NFSU2_TR(0x51c225);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c229:{NFSU2_TR(0x51c229);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c22c:{NFSU2_TR(0x51c22c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c22e:{NFSU2_TR(0x51c22e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c232:{NFSU2_TR(0x51c232);
if(r1(R+518)){{goto L51c56e;}}
}
B51c238:L51c238:{c.instructions+=5;NFSU2_TR(0x51c238);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51c23c:{NFSU2_TR(0x51c23c);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51c240:{NFSU2_TR(0x51c240);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c244:{NFSU2_TR(0x51c244);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B51c247:{NFSU2_TR(0x51c247);
w4(R+4,u32(0x10ull));
}
B51c24c:L51c24c:{c.instructions+=1;NFSU2_TR(0x51c24c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L51c24e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51c24cu);}goto L51c24c;}
}
B51c24e:L51c24e:{c.instructions+=8;NFSU2_TR(0x51c24e);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51c252:{NFSU2_TR(0x51c252);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c253:{NFSU2_TR(0x51c253);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c254:{NFSU2_TR(0x51c254);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c255:{NFSU2_TR(0x51c255);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c256:{NFSU2_TR(0x51c256);
__builtin_memmove((R+4),(R+12),4);
}
B51c258:{NFSU2_TR(0x51c258);
u8 U[5];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51c25d:{NFSU2_TR(0x51c25d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c262ull));
TAIL_STATIC(0x50bce0u,50b);
}
B51c262:L51c262:{c.instructions+=6;NFSU2_TR(0x51c262);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
__builtin_memmove((R+24),(U+0),2);
}
B51c266:{NFSU2_TR(0x51c266);
u8 U[2];
w2(U+0,u16(u32(r2(R+24))&u32(r2(R+24))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B51c269:{NFSU2_TR(0x51c269);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c26d:{NFSU2_TR(0x51c26d);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51c272:{NFSU2_TR(0x51c272);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51c27a:{NFSU2_TR(0x51c27a);
if(r1(R+518)){{goto L51c565;}}
}
B51c280:L51c280:{c.instructions+=5;NFSU2_TR(0x51c280);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c284:{NFSU2_TR(0x51c284);
__builtin_memmove((R+28),(R+0),4);
}
B51c286:{NFSU2_TR(0x51c286);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x20ull))));
}
B51c289:{NFSU2_TR(0x51c289);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c28d:{NFSU2_TR(0x51c28d);
{goto L51c293;}
}
B51c28f:L51c28f:{c.instructions+=1;NFSU2_TR(0x51c28f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c293:L51c293:{c.instructions+=3;NFSU2_TR(0x51c293);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51c297:{NFSU2_TR(0x51c297);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51c299:{NFSU2_TR(0x51c299);
if(r1(R+518)){{goto L51c2a8;}}
}
B51c29b:L51c29b:{c.instructions+=2;NFSU2_TR(0x51c29b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51c2a3:{NFSU2_TR(0x51c2a3);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51c2a8:L51c2a8:{c.instructions+=2;NFSU2_TR(0x51c2a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c2aa:{NFSU2_TR(0x51c2aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c337;}}
}
B51c2b0:L51c2b0:{c.instructions+=2;NFSU2_TR(0x51c2b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xaull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B51c2b4:{NFSU2_TR(0x51c2b4);
if(r1(R+518)){{goto L51c2bc;}}
}
B51c2b6:L51c2b6:{c.instructions+=2;NFSU2_TR(0x51c2b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x5eull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B51c2ba:{NFSU2_TR(0x51c2ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c337;}}
}
B51c2bc:L51c2bc:{c.instructions+=3;NFSU2_TR(0x51c2bc);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x2ull))));
}
B51c2bf:{NFSU2_TR(0x51c2bf);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B51c2c4:{NFSU2_TR(0x51c2c4);
if(r1(R+518)){{goto L51c565;}}
}
B51c2ca:L51c2ca:{c.instructions+=8;NFSU2_TR(0x51c2ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c2ce:{NFSU2_TR(0x51c2ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51c2d2:{NFSU2_TR(0x51c2d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c2d3:{NFSU2_TR(0x51c2d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c2d4:{NFSU2_TR(0x51c2d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c2d5:{NFSU2_TR(0x51c2d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c2d6:{NFSU2_TR(0x51c2d6);
__builtin_memmove((R+4),(R+12),4);
}
B51c2d8:{NFSU2_TR(0x51c2d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c2ddull));
TAIL_STATIC(0x50bce0u,50b);
}
B51c2dd:L51c2dd:{c.instructions+=4;NFSU2_TR(0x51c2dd);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c2e1:{NFSU2_TR(0x51c2e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c2e5:{NFSU2_TR(0x51c2e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c2e7:{NFSU2_TR(0x51c2e7);
if(r1(R+518)){{goto L51c304;}}
}
B51c2e9:L51c2e9:{c.instructions+=6;NFSU2_TR(0x51c2e9);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51c2ed:{NFSU2_TR(0x51c2ed);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51c2f3:{NFSU2_TR(0x51c2f3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c2f7:{NFSU2_TR(0x51c2f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c2fb:{NFSU2_TR(0x51c2fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c2ff:{NFSU2_TR(0x51c2ff);
{goto L51c540;}
}
B51c304:L51c304:{c.instructions+=2;NFSU2_TR(0x51c304);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B51c309:{NFSU2_TR(0x51c309);
if(r1(R+518)){{goto L51c322;}}
}
B51c30b:L51c30b:{c.instructions+=6;NFSU2_TR(0x51c30b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51c30f:{NFSU2_TR(0x51c30f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B51c311:{NFSU2_TR(0x51c311);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c315:{NFSU2_TR(0x51c315);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c319:{NFSU2_TR(0x51c319);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c31d:{NFSU2_TR(0x51c31d);
{goto L51c540;}
}
B51c322:L51c322:{c.instructions+=4;NFSU2_TR(0x51c322);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51c32a:{NFSU2_TR(0x51c32a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c32e:{NFSU2_TR(0x51c32e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c332:{NFSU2_TR(0x51c332);
{goto L51c540;}
}
B51c337:L51c337:{c.instructions+=2;NFSU2_TR(0x51c337);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x820ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c33c:{NFSU2_TR(0x51c33c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c38c;}}
}
B51c33e:L51c33e:{c.instructions+=2;NFSU2_TR(0x51c33e);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x24ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B51c342:{NFSU2_TR(0x51c342);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c38c;}}
}
B51c344:L51c344:{c.instructions+=5;NFSU2_TR(0x51c344);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B51c348:{NFSU2_TR(0x51c348);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51c34b:{NFSU2_TR(0x51c34b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51c34d:{NFSU2_TR(0x51c34d);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B51c350:{NFSU2_TR(0x51c350);
if(r1(R+518)){{goto L51c365;}}
}
B51c352:L51c352:{c.instructions+=2;NFSU2_TR(0x51c352);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x24ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B51c356:{NFSU2_TR(0x51c356);
if(r1(R+518)){{goto L51c365;}}
}
B51c358:L51c358:{c.instructions+=5;NFSU2_TR(0x51c358);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B51c35c:{NFSU2_TR(0x51c35c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B51c35f:{NFSU2_TR(0x51c35f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B51c360:{NFSU2_TR(0x51c360);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B51c363:{NFSU2_TR(0x51c363);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51c352u);}goto L51c352;}}
}
B51c365:L51c365:{c.instructions+=4;NFSU2_TR(0x51c365);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c367:{NFSU2_TR(0x51c367);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B51c36a:{NFSU2_TR(0x51c36a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51c36c:{NFSU2_TR(0x51c36c);
if(r1(R+518)){{goto L51c388;}}
}
B51c36e:L51c36e:{c.instructions+=4;NFSU2_TR(0x51c36e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c372:{NFSU2_TR(0x51c372);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c373:{NFSU2_TR(0x51c373);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c374:{NFSU2_TR(0x51c374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c379ull));
TAIL_STATIC(0x50bac0u,50b);
}
B51c379:L51c379:{c.instructions+=4;NFSU2_TR(0x51c379);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c37c:{NFSU2_TR(0x51c37c);
__builtin_memmove((R+20),(R+0),4);
}
B51c37e:{NFSU2_TR(0x51c37e);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51c383:{NFSU2_TR(0x51c383);
{goto L51c490;}
}
B51c388:L51c388:{c.instructions+=1;NFSU2_TR(0x51c388);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c38c:L51c38c:{c.instructions+=3;NFSU2_TR(0x51c38c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B51c38e:{NFSU2_TR(0x51c38e);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51c393:{NFSU2_TR(0x51c393);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L51c3a8;}}
}
B51c395:L51c395:{c.instructions+=2;NFSU2_TR(0x51c395);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xa0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B51c39a:{NFSU2_TR(0x51c39a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c3a8;}}
}
B51c39c:L51c39c:{c.instructions+=3;NFSU2_TR(0x51c39c);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51c3a1:{NFSU2_TR(0x51c3a1);
w4(R+24,u32(0x20ull));
}
B51c3a6:{NFSU2_TR(0x51c3a6);
{goto L51c3cf;}
}
B51c3a8:L51c3a8:{c.instructions+=2;NFSU2_TR(0x51c3a8);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(U+0))<(u16(0xff80ull))));
}
B51c3ad:{NFSU2_TR(0x51c3ad);
if(r1(R+512)){{goto L51c3b5;}}
}
B51c3af:L51c3af:{c.instructions+=1;NFSU2_TR(0x51c3af);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
}
B51c3b5:L51c3b5:{c.instructions+=2;NFSU2_TR(0x51c3b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x99ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B51c3ba:{NFSU2_TR(0x51c3ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c3c3;}}
}
B51c3bc:L51c3bc:{c.instructions+=2;NFSU2_TR(0x51c3bc);
w4(R+24,u32(0x2122ull));
}
B51c3c1:{NFSU2_TR(0x51c3c1);
{goto L51c3cf;}
}
B51c3c3:L51c3c3:{c.instructions+=2;NFSU2_TR(0x51c3c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x9cull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B51c3c8:{NFSU2_TR(0x51c3c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c3cf;}}
}
B51c3ca:L51c3ca:{c.instructions+=1;NFSU2_TR(0x51c3ca);
w4(R+24,u32(0x153ull));
}
B51c3cf:L51c3cf:{c.instructions+=14;NFSU2_TR(0x51c3cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c3d2:{NFSU2_TR(0x51c3d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c3d5:{NFSU2_TR(0x51c3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c3d8:{NFSU2_TR(0x51c3d8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B51c3dc:{NFSU2_TR(0x51c3dc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x40000ull))));
}
B51c3e1:{NFSU2_TR(0x51c3e1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B51c3e3:{NFSU2_TR(0x51c3e3);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B51c3e5:{NFSU2_TR(0x51c3e5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B51c3e7:{NFSU2_TR(0x51c3e7);
w4(R+4,u32(r2(R+24)));
}
B51c3ea:{NFSU2_TR(0x51c3ea);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B51c3ed:{NFSU2_TR(0x51c3ed);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffffe0ull))));
}
B51c3f0:{NFSU2_TR(0x51c3f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B51c3f3:{NFSU2_TR(0x51c3f3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51c3f5:{NFSU2_TR(0x51c3f5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L51c405;}}
}
B51c3f7:L51c3f7:{c.instructions+=4;NFSU2_TR(0x51c3f7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B51c3fa:{NFSU2_TR(0x51c3fa);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B51c3fc:{NFSU2_TR(0x51c3fc);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+24))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B51c3ff:{NFSU2_TR(0x51c3ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c405;}}
}
B51c401:L51c401:{c.instructions+=2;NFSU2_TR(0x51c401);
__builtin_memmove((R+24),(R+4),4);
}
B51c403:{NFSU2_TR(0x51c403);
{goto L51c413;}
}
B51c405:L51c405:{c.instructions+=5;NFSU2_TR(0x51c405);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c406:{NFSU2_TR(0x51c406);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c407:{NFSU2_TR(0x51c407);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c408:{NFSU2_TR(0x51c408);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c409:{NFSU2_TR(0x51c409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c40eull));
TAIL_STATIC(0x6f45b0u,6f4);
}
B51c40e:L51c40e:{c.instructions+=2;NFSU2_TR(0x51c40e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B51c411:{NFSU2_TR(0x51c411);
__builtin_memmove((R+24),(R+0),4);
}
B51c413:L51c413:{c.instructions+=2;NFSU2_TR(0x51c413);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c415:{NFSU2_TR(0x51c415);
if(r1(R+518)){{goto L51c489;}}
}
B51c417:L51c417:{c.instructions+=3;NFSU2_TR(0x51c417);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c41b:{NFSU2_TR(0x51c41b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c41d:{NFSU2_TR(0x51c41d);
if(r1(R+518)){{goto L51c447;}}
}
B51c41f:L51c41f:{c.instructions+=3;NFSU2_TR(0x51c41f);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51c423:{NFSU2_TR(0x51c423);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51c425:{NFSU2_TR(0x51c425);
if(r1(R+518)){{goto L51c447;}}
}
B51c427:L51c427:{c.instructions+=6;NFSU2_TR(0x51c427);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c42a:{NFSU2_TR(0x51c42a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51c42c:{NFSU2_TR(0x51c42c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B51c430:{NFSU2_TR(0x51c430);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c431:{NFSU2_TR(0x51c431);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c432:{NFSU2_TR(0x51c432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c437ull));
TAIL_STATIC(0x6f45f0u,6f4);
}
B51c437:L51c437:{c.instructions+=4;NFSU2_TR(0x51c437);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c43b:{NFSU2_TR(0x51c43b);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c43f:{NFSU2_TR(0x51c43f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c443:{NFSU2_TR(0x51c443);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c447:L51c447:{c.instructions+=17;NFSU2_TR(0x51c447);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c44b:{NFSU2_TR(0x51c44b);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c44f:{NFSU2_TR(0x51c44f);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c453:{NFSU2_TR(0x51c453);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B51c456:{NFSU2_TR(0x51c456);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff01ull))));
}
B51c45b:{NFSU2_TR(0x51c45b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c45c:{NFSU2_TR(0x51c45c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c45d:{NFSU2_TR(0x51c45d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c461:{NFSU2_TR(0x51c461);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c462:{NFSU2_TR(0x51c462);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c466:{NFSU2_TR(0x51c466);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51c46a:{NFSU2_TR(0x51c46a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c46b:{NFSU2_TR(0x51c46b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c46c:{NFSU2_TR(0x51c46c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c46d:{NFSU2_TR(0x51c46d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c46e:{NFSU2_TR(0x51c46e);
__builtin_memmove((R+4),(R+12),4);
}
B51c470:{NFSU2_TR(0x51c470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c475ull));
TAIL_STATIC(0x51bfc0u,51b);
}
B51c475:L51c475:{c.instructions+=5;NFSU2_TR(0x51c475);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B51c479:{NFSU2_TR(0x51c479);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c47d:{NFSU2_TR(0x51c47d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c481:{NFSU2_TR(0x51c481);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c485:{NFSU2_TR(0x51c485);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c489:L51c489:{c.instructions+=2;NFSU2_TR(0x51c489);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51c48d:{NFSU2_TR(0x51c48d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x2ull))));
}
B51c490:L51c490:{c.instructions+=4;NFSU2_TR(0x51c490);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c494:{NFSU2_TR(0x51c494);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c498:{NFSU2_TR(0x51c498);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B51c49a:{NFSU2_TR(0x51c49a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L51c4a2;}}
}
B51c49c:L51c49c:{c.instructions+=1;NFSU2_TR(0x51c49c);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c4a2:L51c4a2:{c.instructions+=4;NFSU2_TR(0x51c4a2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51c4a8:{NFSU2_TR(0x51c4a8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51c4aa:{NFSU2_TR(0x51c4aa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51c4ad:{NFSU2_TR(0x51c4ad);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51c54f;}}
}
B51c4b3:L51c4b3:{c.instructions+=3;NFSU2_TR(0x51c4b3);
u8 U[5];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51c4b7:{NFSU2_TR(0x51c4b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51c4b9:{NFSU2_TR(0x51c4b9);
if(r1(R+518)){{goto L51c54f;}}
}
B51c4bf:L51c4bf:{c.instructions+=6;NFSU2_TR(0x51c4bf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51c4c3:{NFSU2_TR(0x51c4c3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B51c4c7:{NFSU2_TR(0x51c4c7);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51c4cb:{NFSU2_TR(0x51c4cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51c4cd:{NFSU2_TR(0x51c4cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51c4d0:{NFSU2_TR(0x51c4d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c54f;}}
}
B51c4d6:L51c4d6:{c.instructions+=2;NFSU2_TR(0x51c4d6);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x20ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B51c4db:{NFSU2_TR(0x51c4db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c4ea;}}
}
B51c4dd:L51c4dd:{c.instructions+=1;NFSU2_TR(0x51c4dd);
__builtin_memmove((R+4),(R+4),4);
}
B51c4e0:L51c4e0:{c.instructions+=3;NFSU2_TR(0x51c4e0);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x2ull))));
}
B51c4e3:{NFSU2_TR(0x51c4e3);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x20ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B51c4e8:{NFSU2_TR(0x51c4e8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51c4e0u);}goto L51c4e0;}}
}
B51c4ea:L51c4ea:{c.instructions+=9;NFSU2_TR(0x51c4ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c4ee:{NFSU2_TR(0x51c4ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c4f2:{NFSU2_TR(0x51c4f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51c4f6:{NFSU2_TR(0x51c4f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c4f7:{NFSU2_TR(0x51c4f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c4f8:{NFSU2_TR(0x51c4f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c4f9:{NFSU2_TR(0x51c4f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c4fa:{NFSU2_TR(0x51c4fa);
__builtin_memmove((R+4),(R+12),4);
}
B51c4fc:{NFSU2_TR(0x51c4fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c501ull));
TAIL_STATIC(0x50bce0u,50b);
}
B51c501:L51c501:{c.instructions+=4;NFSU2_TR(0x51c501);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c505:{NFSU2_TR(0x51c505);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c509:{NFSU2_TR(0x51c509);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c50b:{NFSU2_TR(0x51c50b);
if(r1(R+518)){{goto L51c51d;}}
}
B51c50d:L51c50d:{c.instructions+=4;NFSU2_TR(0x51c50d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51c511:{NFSU2_TR(0x51c511);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51c517:{NFSU2_TR(0x51c517);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c51b:{NFSU2_TR(0x51c51b);
{goto L51c538;}
}
B51c51d:L51c51d:{c.instructions+=2;NFSU2_TR(0x51c51d);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B51c522:{NFSU2_TR(0x51c522);
if(r1(R+518)){{goto L51c530;}}
}
B51c524:L51c524:{c.instructions+=4;NFSU2_TR(0x51c524);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51c528:{NFSU2_TR(0x51c528);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B51c52a:{NFSU2_TR(0x51c52a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c52e:{NFSU2_TR(0x51c52e);
{goto L51c538;}
}
B51c530:L51c530:{c.instructions+=1;NFSU2_TR(0x51c530);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51c538:L51c538:{c.instructions+=2;NFSU2_TR(0x51c538);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c53c:{NFSU2_TR(0x51c53c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c540:L51c540:{c.instructions+=4;NFSU2_TR(0x51c540);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51c544:{NFSU2_TR(0x51c544);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c547:{NFSU2_TR(0x51c547);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c54b:{NFSU2_TR(0x51c54b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c54f:L51c54f:{c.instructions+=6;NFSU2_TR(0x51c54f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c553:{NFSU2_TR(0x51c553);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
__builtin_memmove((R+24),(U+0),2);
}
B51c557:{NFSU2_TR(0x51c557);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B51c558:{NFSU2_TR(0x51c558);
u8 U[2];
w2(U+0,u16(u32(r2(R+24))&u32(r2(R+24))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B51c55b:{NFSU2_TR(0x51c55b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c55f:{NFSU2_TR(0x51c55f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51c28fu);}goto L51c28f;}}
}
B51c565:L51c565:{c.instructions+=2;NFSU2_TR(0x51c565);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c569:{NFSU2_TR(0x51c569);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c56eull));
TAIL_STATIC(0x51a5d0u,51a);
}
B51c56e:L51c56e:{c.instructions+=6;NFSU2_TR(0x51c56e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51c56f:{NFSU2_TR(0x51c56f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c570:{NFSU2_TR(0x51c570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51c571:{NFSU2_TR(0x51c571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51c572:{NFSU2_TR(0x51c572);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51c575:{NFSU2_TR(0x51c575);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c580:L51c580:{c.instructions+=8;NFSU2_TR(0x51c580);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c581:{NFSU2_TR(0x51c581);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c582:{NFSU2_TR(0x51c582);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c583:{NFSU2_TR(0x51c583);
__builtin_memmove((R+24),gp(0x8637bc),4);
}
B51c589:{NFSU2_TR(0x51c589);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c58a:{NFSU2_TR(0x51c58a);
w4(R+4,u32(0x8637bcull));
}
B51c58f:{NFSU2_TR(0x51c58f);
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
B51c591:{NFSU2_TR(0x51c591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c596ull));
TAIL_STATIC(0x502fd0u,502);
}
B51c596:L51c596:{c.instructions+=3;NFSU2_TR(0x51c596);
__builtin_memmove((R+28),(R+0),4);
}
B51c598:{NFSU2_TR(0x51c598);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51c59a:{NFSU2_TR(0x51c59a);
if(r1(R+518)){{goto L51c5b8;}}
}
B51c59c:L51c59c:{c.instructions+=1;NFSU2_TR(0x51c59c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51c5a0:L51c5a0:{c.instructions+=4;NFSU2_TR(0x51c5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c5a3:{NFSU2_TR(0x51c5a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c5a4:{NFSU2_TR(0x51c5a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c5a5:{NFSU2_TR(0x51c5a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c5aaull));
TAIL_STATIC(0x43dcc0u,43d);
}
B51c5aa:L51c5aa:{c.instructions+=3;NFSU2_TR(0x51c5aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c5ad:{NFSU2_TR(0x51c5ad);
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
B51c5af:{NFSU2_TR(0x51c5af);
if(r1(R+518)){{goto L51c5c0;}}
}
B51c5b1:L51c5b1:{c.instructions+=4;NFSU2_TR(0x51c5b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B51c5b3:{NFSU2_TR(0x51c5b3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B51c5b4:{NFSU2_TR(0x51c5b4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51c5b6:{NFSU2_TR(0x51c5b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51c5a0u);}goto L51c5a0;}}
}
B51c5b8:L51c5b8:{c.instructions+=6;NFSU2_TR(0x51c5b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51c5b9:{NFSU2_TR(0x51c5b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c5ba:{NFSU2_TR(0x51c5ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51c5bb:{NFSU2_TR(0x51c5bb);
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
B51c5be:{NFSU2_TR(0x51c5be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51c5bf:{NFSU2_TR(0x51c5bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c5c0:L51c5c0:{c.instructions+=6;NFSU2_TR(0x51c5c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51c5c1:{NFSU2_TR(0x51c5c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c5c2:{NFSU2_TR(0x51c5c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51c5c3:{NFSU2_TR(0x51c5c3);
__builtin_memmove((R+0),(R+12),4);
}
B51c5c5:{NFSU2_TR(0x51c5c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51c5c6:{NFSU2_TR(0x51c5c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c5d0:L51c5d0:{c.instructions+=6;NFSU2_TR(0x51c5d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c5d1:{NFSU2_TR(0x51c5d1);
__builtin_memmove((R+24),gp(0x8637bc),4);
}
B51c5d7:{NFSU2_TR(0x51c5d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c5d8:{NFSU2_TR(0x51c5d8);
w4(R+4,u32(0x8637bcull));
}
B51c5dd:{NFSU2_TR(0x51c5dd);
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
B51c5df:{NFSU2_TR(0x51c5df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c5e4ull));
TAIL_STATIC(0x502fd0u,502);
}
B51c5e4:L51c5e4:{c.instructions+=2;NFSU2_TR(0x51c5e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51c5e6:{NFSU2_TR(0x51c5e6);
if(r1(R+518)){{goto L51c5fe;}}
}
B51c5e8:L51c5e8:{c.instructions+=2;NFSU2_TR(0x51c5e8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c5ec:{NFSU2_TR(0x51c5ec);
__builtin_memmove((R+16),(R+16),4);
}
B51c5f0:L51c5f0:{c.instructions+=3;NFSU2_TR(0x51c5f0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B51c5f2:{NFSU2_TR(0x51c5f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c5f5:{NFSU2_TR(0x51c5f5);
if(r1(R+518)){{goto L51c603;}}
}
B51c5f7:L51c5f7:{c.instructions+=4;NFSU2_TR(0x51c5f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B51c5f9:{NFSU2_TR(0x51c5f9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B51c5fa:{NFSU2_TR(0x51c5fa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51c5fc:{NFSU2_TR(0x51c5fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51c5f0u);}goto L51c5f0;}}
}
B51c5fe:L51c5fe:{c.instructions+=4;NFSU2_TR(0x51c5fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51c5ff:{NFSU2_TR(0x51c5ff);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))|u32(u8(0xffull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51c601:{NFSU2_TR(0x51c601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c602:{NFSU2_TR(0x51c602);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c603:L51c603:{c.instructions+=4;NFSU2_TR(0x51c603);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51c606:{NFSU2_TR(0x51c606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51c607:{NFSU2_TR(0x51c607);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c608:{NFSU2_TR(0x51c608);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c610:L51c610:{c.instructions+=3;NFSU2_TR(0x51c610);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c614:{NFSU2_TR(0x51c614);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x39020ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B51c61a:{NFSU2_TR(0x51c61a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c65d;}}
}
B51c61c:L51c61c:{c.instructions+=7;NFSU2_TR(0x51c61c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c61d:{NFSU2_TR(0x51c61d);
__builtin_memmove((R+24),gp(0x8637bc),4);
}
B51c623:{NFSU2_TR(0x51c623);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c624:{NFSU2_TR(0x51c624);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51c627:{NFSU2_TR(0x51c627);
w4(R+4,u32(0x8637bcull));
}
B51c62c:{NFSU2_TR(0x51c62c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51c62f:{NFSU2_TR(0x51c62f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c634ull));
TAIL_STATIC(0x502fd0u,502);
}
B51c634:L51c634:{c.instructions+=2;NFSU2_TR(0x51c634);
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
B51c636:{NFSU2_TR(0x51c636);
if(r1(R+518)){{goto L51c655;}}
}
B51c638:L51c638:{c.instructions+=2;NFSU2_TR(0x51c638);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B51c63b:{NFSU2_TR(0x51c63b);
if(r1(R+518)){{goto L51c64b;}}
}
B51c63d:L51c63d:{c.instructions+=3;NFSU2_TR(0x51c63d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B51c63f:{NFSU2_TR(0x51c63f);
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
B51c641:{NFSU2_TR(0x51c641);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51c638u);}goto L51c638;}}
}
B51c643:L51c643:{c.instructions+=4;NFSU2_TR(0x51c643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51c644:{NFSU2_TR(0x51c644);
w4(R+0,u32(0x1ull));
}
B51c649:{NFSU2_TR(0x51c649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c64a:{NFSU2_TR(0x51c64a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c64b:L51c64b:{c.instructions+=4;NFSU2_TR(0x51c64b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51c64d:{NFSU2_TR(0x51c64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51c650:{NFSU2_TR(0x51c650);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B51c652:{NFSU2_TR(0x51c652);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c655:L51c655:{c.instructions+=4;NFSU2_TR(0x51c655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51c656:{NFSU2_TR(0x51c656);
w4(R+0,u32(0x1ull));
}
B51c65b:{NFSU2_TR(0x51c65b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c65c:{NFSU2_TR(0x51c65c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c65d:L51c65d:{c.instructions+=2;NFSU2_TR(0x51c65d);
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
B51c65f:{NFSU2_TR(0x51c65f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c660:L51c660:{c.instructions+=2;NFSU2_TR(0x51c660);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c663:{NFSU2_TR(0x51c663);
TAIL_STATIC(0x51b7f0u,51b);
}
B51c670:L51c670:{c.instructions+=3;NFSU2_TR(0x51c670);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c674:{NFSU2_TR(0x51c674);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
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
B51c678:{NFSU2_TR(0x51c678);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c68d;}}
}
B51c67a:L51c67a:{c.instructions+=3;NFSU2_TR(0x51c67a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B51c67d:{NFSU2_TR(0x51c67d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51c67f:{NFSU2_TR(0x51c67f);
if(r1(R+518)){{goto L51c68d;}}
}
B51c681:L51c681:{c.instructions+=3;NFSU2_TR(0x51c681);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c684:{NFSU2_TR(0x51c684);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c688:{NFSU2_TR(0x51c688);
TAIL_STATIC(0x51b850u,51b);
}
B51c68d:L51c68d:{c.instructions+=1;NFSU2_TR(0x51c68d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c690:L51c690:{c.instructions+=10;NFSU2_TR(0x51c690);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c691:{NFSU2_TR(0x51c691);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c692:{NFSU2_TR(0x51c692);
__builtin_memmove((R+24),(R+4),4);
}
B51c694:{NFSU2_TR(0x51c694);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51c698:{NFSU2_TR(0x51c698);
__builtin_memmove((R+0),gp(0x864f2c),4);
}
B51c69d:{NFSU2_TR(0x51c69d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B51c69f:{NFSU2_TR(0x51c69f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51c6a1:{NFSU2_TR(0x51c6a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c6a2:{NFSU2_TR(0x51c6a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51c6a6:{NFSU2_TR(0x51c6a6);
if(r1(R+518)){{goto L51c6b4;}}
}
B51c6a8:L51c6a8:{c.instructions+=2;NFSU2_TR(0x51c6a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x942c98b5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51c6af:{NFSU2_TR(0x51c6af);
if(r1(R+518)){{goto L51c6b4;}}
}
B51c6b1:L51c6b1:{c.instructions+=1;NFSU2_TR(0x51c6b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51c6b4:L51c6b4:{c.instructions+=3;NFSU2_TR(0x51c6b4);
__builtin_memmove((R+0),gp(0x8384b4),4);
}
B51c6b9:{NFSU2_TR(0x51c6b9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51c6bb:{NFSU2_TR(0x51c6bb);
if(r1(R+518)){{goto L51c6d0;}}
}
B51c6bd:L51c6bd:{c.instructions+=2;NFSU2_TR(0x51c6bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c6be:{NFSU2_TR(0x51c6be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c6c3ull));
TAIL_STATIC(0x505450u,505);
}
B51c6c3:L51c6c3:{c.instructions+=4;NFSU2_TR(0x51c6c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c6c6:{NFSU2_TR(0x51c6c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51c6c9:{NFSU2_TR(0x51c6c9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51c6cb:{NFSU2_TR(0x51c6cb);
if(r1(R+518)){{goto L51c6d0;}}
}
B51c6cd:L51c6cd:{c.instructions+=1;NFSU2_TR(0x51c6cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51c6d0:L51c6d0:{c.instructions+=3;NFSU2_TR(0x51c6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c6d3:{NFSU2_TR(0x51c6d3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51c6d5:{NFSU2_TR(0x51c6d5);
if(r1(R+518)){{goto L51c6e0;}}
}
B51c6d7:L51c6d7:{c.instructions+=3;NFSU2_TR(0x51c6d7);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B51c6db:{NFSU2_TR(0x51c6db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B51c6de:{NFSU2_TR(0x51c6de);
{goto L51c6fd;}
}
B51c6e0:L51c6e0:{c.instructions+=4;NFSU2_TR(0x51c6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c6e3:{NFSU2_TR(0x51c6e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c6e4:{NFSU2_TR(0x51c6e4);
w4(R+4,u32(0x8637b0ull));
}
B51c6e9:{NFSU2_TR(0x51c6e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c6eeull));
TAIL_STATIC(0x51bb70u,51b);
}
B51c6ee:L51c6ee:{c.instructions+=2;NFSU2_TR(0x51c6ee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51c6f0:{NFSU2_TR(0x51c6f0);
if(r1(R+518)){{goto L51c6fb;}}
}
B51c6f2:L51c6f2:{c.instructions+=3;NFSU2_TR(0x51c6f2);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B51c6f6:{NFSU2_TR(0x51c6f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B51c6f9:{NFSU2_TR(0x51c6f9);
{goto L51c6fd;}
}
B51c6fb:L51c6fb:{c.instructions+=1;NFSU2_TR(0x51c6fb);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B51c6fd:L51c6fd:{c.instructions+=2;NFSU2_TR(0x51c6fd);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B51c6ff:{NFSU2_TR(0x51c6ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c704;}}
}
B51c701:L51c701:{c.instructions+=1;NFSU2_TR(0x51c701);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51c704:L51c704:{c.instructions+=2;NFSU2_TR(0x51c704);
u8 U[7];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B51c708:{NFSU2_TR(0x51c708);
if(r1(R+518)){{goto L51c721;}}
}
B51c70a:L51c70a:{c.instructions+=2;NFSU2_TR(0x51c70a);
u8 U[4];
w4(U+0,u32(0x79b1b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c70f:{NFSU2_TR(0x51c70f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c714ull));
TAIL_STATIC(0x43db50u,43d);
}
B51c714:L51c714:{c.instructions+=4;NFSU2_TR(0x51c714);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c717:{NFSU2_TR(0x51c717);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51c71a:{NFSU2_TR(0x51c71a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51c71c:{NFSU2_TR(0x51c71c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c721;}}
}
B51c71e:L51c71e:{c.instructions+=1;NFSU2_TR(0x51c71e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51c721:L51c721:{c.instructions+=4;NFSU2_TR(0x51c721);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c724:{NFSU2_TR(0x51c724);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
}
B51c729:{NFSU2_TR(0x51c729);
w4(R+4,u32(0x40ull));
}
B51c72e:{NFSU2_TR(0x51c72e);
__builtin_memmove((R+28),(R+28),4);
}
B51c730:L51c730:{c.instructions+=4;NFSU2_TR(0x51c730);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B51c732:{NFSU2_TR(0x51c732);
w1(R+512,carry<u32>(r4(R+0),u32(0xd0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
}
B51c737:{NFSU2_TR(0x51c737);
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
B51c738:{NFSU2_TR(0x51c738);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51c730u);}goto L51c730;}}
}
B51c73a:L51c73a:{c.instructions+=4;NFSU2_TR(0x51c73a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51c73b:{NFSU2_TR(0x51c73b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c73c:{NFSU2_TR(0x51c73c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51c73d:{NFSU2_TR(0x51c73d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c740:L51c740:{c.instructions+=5;NFSU2_TR(0x51c740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c741:{NFSU2_TR(0x51c741);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51c745:{NFSU2_TR(0x51c745);
u8 U[4];
w4(U+0,u32(0x7907e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c74a:{NFSU2_TR(0x51c74a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c74b:{NFSU2_TR(0x51c74b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c750ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B51c750:L51c750:{c.instructions+=3;NFSU2_TR(0x51c750);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c753:{NFSU2_TR(0x51c753);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c755:{NFSU2_TR(0x51c755);
if(r1(R+518)){{goto L51c835;}}
}
B51c75b:L51c75b:{c.instructions+=3;NFSU2_TR(0x51c75b);
u8 U[4];
w4(U+0,u32(0x79b214ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c760:{NFSU2_TR(0x51c760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c761:{NFSU2_TR(0x51c761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c766ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B51c766:L51c766:{c.instructions+=3;NFSU2_TR(0x51c766);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c769:{NFSU2_TR(0x51c769);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c76b:{NFSU2_TR(0x51c76b);
if(r1(R+518)){{goto L51c835;}}
}
B51c771:L51c771:{c.instructions+=3;NFSU2_TR(0x51c771);
u8 U[4];
w4(U+0,u32(0x79b208ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c776:{NFSU2_TR(0x51c776);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c777:{NFSU2_TR(0x51c777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c77cull));
TAIL_STATIC(0x43dcc0u,43d);
}
B51c77c:L51c77c:{c.instructions+=3;NFSU2_TR(0x51c77c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c77f:{NFSU2_TR(0x51c77f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c781:{NFSU2_TR(0x51c781);
if(r1(R+518)){{goto L51c835;}}
}
B51c787:L51c787:{c.instructions+=3;NFSU2_TR(0x51c787);
u8 U[4];
w4(U+0,u32(0x79b1fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c78c:{NFSU2_TR(0x51c78c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c78d:{NFSU2_TR(0x51c78d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c792ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B51c792:L51c792:{c.instructions+=3;NFSU2_TR(0x51c792);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c795:{NFSU2_TR(0x51c795);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c797:{NFSU2_TR(0x51c797);
if(r1(R+518)){{goto L51c835;}}
}
B51c79d:L51c79d:{c.instructions+=3;NFSU2_TR(0x51c79d);
u8 U[4];
w4(U+0,u32(0x79b1f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7a2:{NFSU2_TR(0x51c7a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7a3:{NFSU2_TR(0x51c7a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c7a8ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B51c7a8:L51c7a8:{c.instructions+=3;NFSU2_TR(0x51c7a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c7ab:{NFSU2_TR(0x51c7ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c7ad:{NFSU2_TR(0x51c7ad);
if(r1(R+518)){{goto L51c835;}}
}
B51c7b3:L51c7b3:{c.instructions+=3;NFSU2_TR(0x51c7b3);
u8 U[4];
w4(U+0,u32(0x790878ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7b8:{NFSU2_TR(0x51c7b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7b9:{NFSU2_TR(0x51c7b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c7beull));
TAIL_STATIC(0x43dcc0u,43d);
}
B51c7be:L51c7be:{c.instructions+=3;NFSU2_TR(0x51c7be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c7c1:{NFSU2_TR(0x51c7c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c7c3:{NFSU2_TR(0x51c7c3);
if(r1(R+518)){{goto L51c835;}}
}
B51c7c5:L51c7c5:{c.instructions+=3;NFSU2_TR(0x51c7c5);
u8 U[4];
w4(U+0,u32(0x79b1e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7ca:{NFSU2_TR(0x51c7ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7cb:{NFSU2_TR(0x51c7cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c7d0ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B51c7d0:L51c7d0:{c.instructions+=3;NFSU2_TR(0x51c7d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c7d3:{NFSU2_TR(0x51c7d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c7d5:{NFSU2_TR(0x51c7d5);
if(r1(R+518)){{goto L51c835;}}
}
B51c7d7:L51c7d7:{c.instructions+=3;NFSU2_TR(0x51c7d7);
u8 U[4];
w4(U+0,u32(0x790804ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7dc:{NFSU2_TR(0x51c7dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7dd:{NFSU2_TR(0x51c7dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c7e2ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B51c7e2:L51c7e2:{c.instructions+=3;NFSU2_TR(0x51c7e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c7e5:{NFSU2_TR(0x51c7e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c7e7:{NFSU2_TR(0x51c7e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c800;}}
}
B51c7e9:L51c7e9:{c.instructions+=7;NFSU2_TR(0x51c7e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c7ed:{NFSU2_TR(0x51c7ed);
u8 U[4];
w4(U+0,u32(0x79b1dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7f2:{NFSU2_TR(0x51c7f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7f3:{NFSU2_TR(0x51c7f3);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7f8:{NFSU2_TR(0x51c7f8);
u8 U[4];
w4(U+0,u32(0x79b1ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7fd:{NFSU2_TR(0x51c7fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c7fe:{NFSU2_TR(0x51c7fe);
{goto L51c84a;}
}
B51c800:L51c800:{c.instructions+=3;NFSU2_TR(0x51c800);
u8 U[4];
w4(U+0,u32(0x79082cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c805:{NFSU2_TR(0x51c805);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c806:{NFSU2_TR(0x51c806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c80bull));
TAIL_STATIC(0x43dcc0u,43d);
}
B51c80b:L51c80b:{c.instructions+=9;NFSU2_TR(0x51c80b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c80f:{NFSU2_TR(0x51c80f);
u8 U[4];
w4(U+0,u32(0x79b1dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c814:{NFSU2_TR(0x51c814);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c815:{NFSU2_TR(0x51c815);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51c819:{NFSU2_TR(0x51c819);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c81e:{NFSU2_TR(0x51c81e);
u8 U[4];
w4(U+0,u32(0x79b1ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c823:{NFSU2_TR(0x51c823);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c824:{NFSU2_TR(0x51c824);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c825:{NFSU2_TR(0x51c825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c82aull));
TAIL_STATIC(0x50c960u,50c);
}
B51c82a:L51c82a:{c.instructions+=2;NFSU2_TR(0x51c82a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c82b:{NFSU2_TR(0x51c82b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c830ull));
TAIL_STATIC(0x50c4a0u,50c);
}
B51c830:L51c830:{c.instructions+=3;NFSU2_TR(0x51c830);
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
B51c833:{NFSU2_TR(0x51c833);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c834:{NFSU2_TR(0x51c834);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c835:L51c835:{c.instructions+=6;NFSU2_TR(0x51c835);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c839:{NFSU2_TR(0x51c839);
u8 U[4];
w4(U+0,u32(0x79b1dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c83e:{NFSU2_TR(0x51c83e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c83f:{NFSU2_TR(0x51c83f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c844:{NFSU2_TR(0x51c844);
u8 U[4];
w4(U+0,u32(0x79b1ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c849:{NFSU2_TR(0x51c849);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c84a:L51c84a:{c.instructions+=3;NFSU2_TR(0x51c84a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51c84e:{NFSU2_TR(0x51c84e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c84f:{NFSU2_TR(0x51c84f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c854ull));
TAIL_STATIC(0x50c960u,50c);
}
B51c854:L51c854:{c.instructions+=2;NFSU2_TR(0x51c854);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c855:{NFSU2_TR(0x51c855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c85aull));
TAIL_STATIC(0x50c4a0u,50c);
}
B51c85a:L51c85a:{c.instructions+=3;NFSU2_TR(0x51c85a);
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
B51c85d:{NFSU2_TR(0x51c85d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c85e:{NFSU2_TR(0x51c85e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c860:L51c860:{c.instructions+=3;NFSU2_TR(0x51c860);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c864:{NFSU2_TR(0x51c864);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B51c868:{NFSU2_TR(0x51c868);
if(r1(R+518)){{goto L51c88c;}}
}
B51c86a:L51c86a:{c.instructions+=2;NFSU2_TR(0x51c86a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c86b:{NFSU2_TR(0x51c86b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c870ull));
TAIL_STATIC(0x50ca00u,50c);
}
B51c870:L51c870:{c.instructions+=4;NFSU2_TR(0x51c870);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c873:{NFSU2_TR(0x51c873);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51c876:{NFSU2_TR(0x51c876);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c87b:{NFSU2_TR(0x51c87b);
if(r1(R+518)){{goto L51c885;}}
}
B51c87d:L51c87d:{c.instructions+=2;NFSU2_TR(0x51c87d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xefffffffull))));
}
B51c882:{NFSU2_TR(0x51c882);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c885:L51c885:{c.instructions+=1;NFSU2_TR(0x51c885);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
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
B51c88c:L51c88c:{c.instructions+=2;NFSU2_TR(0x51c88c);
w1(R+0,u8(0x1ull));
}
B51c88e:{NFSU2_TR(0x51c88e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c8a0:L51c8a0:{c.instructions+=3;NFSU2_TR(0x51c8a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c8a4:{NFSU2_TR(0x51c8a4);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x7ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51c8a8:{NFSU2_TR(0x51c8a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51c8b4;}}
}
B51c8aa:L51c8aa:{c.instructions+=1;NFSU2_TR(0x51c8aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c8afull));
TAIL_STATIC(0x511bc0u,511);
}
B51c8af:L51c8af:{c.instructions+=2;NFSU2_TR(0x51c8af);
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
B51c8b1:{NFSU2_TR(0x51c8b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c8b4:L51c8b4:{c.instructions+=2;NFSU2_TR(0x51c8b4);
w1(R+0,u8(0x1ull));
}
B51c8b6:{NFSU2_TR(0x51c8b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c8c0:L51c8c0:{c.instructions+=16;NFSU2_TR(0x51c8c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c8c2:{NFSU2_TR(0x51c8c2);
u8 U[4];
w4(U+0,u32(0x777150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c8c7:{NFSU2_TR(0x51c8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c8cd:{NFSU2_TR(0x51c8cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c8ce:{NFSU2_TR(0x51c8ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c8d5:{NFSU2_TR(0x51c8d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B51c8d8:{NFSU2_TR(0x51c8d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c8d9:{NFSU2_TR(0x51c8d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c8da:{NFSU2_TR(0x51c8da);
__builtin_memmove((R+28),(R+4),4);
}
B51c8dc:{NFSU2_TR(0x51c8dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x79ab94ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51c8e4:{NFSU2_TR(0x51c8e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51c8e8:{NFSU2_TR(0x51c8e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51c8ec:{NFSU2_TR(0x51c8ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c8ed:{NFSU2_TR(0x51c8ed);
__builtin_memmove((R+4),(R+24),4);
}
B51c8ef:{NFSU2_TR(0x51c8ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51c8f7:{NFSU2_TR(0x51c8f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c8fcull));
TAIL_STATIC(0x504880u,504);
}
B51c8fc:L51c8fc:{c.instructions+=7;NFSU2_TR(0x51c8fc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x79ab9cull));
s4(u32(r4(U+0)),r4(U+4));
}
B51c904:{NFSU2_TR(0x51c904);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c907:{NFSU2_TR(0x51c907);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c909:{NFSU2_TR(0x51c909);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c90c:{NFSU2_TR(0x51c90c);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51c911:{NFSU2_TR(0x51c911);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c915:{NFSU2_TR(0x51c915);
if(r1(R+518)){{goto L51c91c;}}
}
B51c917:L51c917:{c.instructions+=2;NFSU2_TR(0x51c917);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B51c91a:{NFSU2_TR(0x51c91a);
{goto L51c91e;}
}
B51c91c:L51c91c:{c.instructions+=1;NFSU2_TR(0x51c91c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51c91e:L51c91e:{c.instructions+=5;NFSU2_TR(0x51c91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c921:{NFSU2_TR(0x51c921);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c922:{NFSU2_TR(0x51c922);
u8 U[4];
w4(U+0,u32(0x79b23cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c927:{NFSU2_TR(0x51c927);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c92b:{NFSU2_TR(0x51c92b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c930ull));
TAIL_STATIC(0x50d510u,50d);
}
B51c930:L51c930:{c.instructions+=5;NFSU2_TR(0x51c930);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c933:{NFSU2_TR(0x51c933);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51c937:{NFSU2_TR(0x51c937);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c938:{NFSU2_TR(0x51c938);
__builtin_memmove((R+4),(R+24),4);
}
B51c93a:{NFSU2_TR(0x51c93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c93full));
TAIL_STATIC(0x504880u,504);
}
B51c93f:L51c93f:{c.instructions+=4;NFSU2_TR(0x51c93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c942:{NFSU2_TR(0x51c942);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c943:{NFSU2_TR(0x51c943);
u8 U[4];
w4(U+0,u32(0x79b190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c948:{NFSU2_TR(0x51c948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c94dull));
TAIL_STATIC(0x50d510u,50d);
}
B51c94d:L51c94d:{c.instructions+=5;NFSU2_TR(0x51c94d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c950:{NFSU2_TR(0x51c950);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c953:{NFSU2_TR(0x51c953);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c954:{NFSU2_TR(0x51c954);
w4(R+4,u32(0x8637b0ull));
}
B51c959:{NFSU2_TR(0x51c959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c95eull));
TAIL_STATIC(0x51bb70u,51b);
}
B51c95e:L51c95e:{c.instructions+=2;NFSU2_TR(0x51c95e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51c960:{NFSU2_TR(0x51c960);
if(r1(R+518)){{goto L51c969;}}
}
B51c962:L51c962:{c.instructions+=2;NFSU2_TR(0x51c962);
__builtin_memmove((R+4),(R+0),4);
}
B51c964:{NFSU2_TR(0x51c964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c969ull));
TAIL_STATIC(0x51ba60u,51b);
}
B51c969:L51c969:{c.instructions+=4;NFSU2_TR(0x51c969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c96c:{NFSU2_TR(0x51c96c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c96d:{NFSU2_TR(0x51c96d);
u8 U[4];
w4(U+0,u32(0x79b220ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c972:{NFSU2_TR(0x51c972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c977ull));
TAIL_STATIC(0x50d510u,50d);
}
B51c977:L51c977:{c.instructions+=8;NFSU2_TR(0x51c977);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c97b:{NFSU2_TR(0x51c97b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51c97e:{NFSU2_TR(0x51c97e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51c97f:{NFSU2_TR(0x51c97f);
w1(R+0,u8(0x1ull));
}
B51c981:{NFSU2_TR(0x51c981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51c982:{NFSU2_TR(0x51c982);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c989:{NFSU2_TR(0x51c989);
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
B51c98c:{NFSU2_TR(0x51c98c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c990:L51c990:{c.instructions+=6;NFSU2_TR(0x51c990);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c994:{NFSU2_TR(0x51c994);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c998:{NFSU2_TR(0x51c998);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c999:{NFSU2_TR(0x51c999);
w4(R+4,u32(0x8637b0ull));
}
B51c99e:{NFSU2_TR(0x51c99e);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B51c9a1:{NFSU2_TR(0x51c9a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51c9a6ull));
TAIL_STATIC(0x51bc40u,51b);
}
B51c9a6:L51c9a6:{c.instructions+=1;NFSU2_TR(0x51c9a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51c9b0:L51c9b0:{c.instructions+=6;NFSU2_TR(0x51c9b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51c9b4:{NFSU2_TR(0x51c9b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51c9b7:{NFSU2_TR(0x51c9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c9ba:{NFSU2_TR(0x51c9ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B51c9bd:{NFSU2_TR(0x51c9bd);
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
B51c9bf:{NFSU2_TR(0x51c9bf);
if(r1(R+518)){{goto L51ca40;}}
}
B51c9c1:L51c9c1:{c.instructions+=20;NFSU2_TR(0x51c9c1);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51c9c4:{NFSU2_TR(0x51c9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c9c7:{NFSU2_TR(0x51c9c7);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51c9ca:{NFSU2_TR(0x51c9ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51c9ce:{NFSU2_TR(0x51c9ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51c9d2:{NFSU2_TR(0x51c9d2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B51c9d4:{NFSU2_TR(0x51c9d4);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c9d7:{NFSU2_TR(0x51c9d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51c9df:{NFSU2_TR(0x51c9df);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c9e3:{NFSU2_TR(0x51c9e3);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c9e6:{NFSU2_TR(0x51c9e6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c9ea:{NFSU2_TR(0x51c9ea);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51c9ee:{NFSU2_TR(0x51c9ee);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51c9f1:{NFSU2_TR(0x51c9f1);
__builtin_memmove((R+0),(R+16),4);
}
B51c9f5:{NFSU2_TR(0x51c9f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c9f6:{NFSU2_TR(0x51c9f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51c9f7:{NFSU2_TR(0x51c9f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51c9fb:{NFSU2_TR(0x51c9fb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51c9ff:{NFSU2_TR(0x51c9ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ca00:{NFSU2_TR(0x51ca00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ca05ull));
TAIL_STATIC(0x504b50u,504);
}
B51ca05:L51ca05:{c.instructions+=8;NFSU2_TR(0x51ca05);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51ca09:{NFSU2_TR(0x51ca09);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51ca0f:{NFSU2_TR(0x51ca0f);
u8 U[6];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B51ca14:{NFSU2_TR(0x51ca14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51ca17:{NFSU2_TR(0x51ca17);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B51ca1b:{NFSU2_TR(0x51ca1b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51ca1d:{NFSU2_TR(0x51ca1d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51ca20:{NFSU2_TR(0x51ca20);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51ca40;}}
}
B51ca22:L51ca22:{c.instructions+=9;NFSU2_TR(0x51ca22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ca26:{NFSU2_TR(0x51ca26);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ca2a:{NFSU2_TR(0x51ca2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ca2e:{NFSU2_TR(0x51ca2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51ca30:{NFSU2_TR(0x51ca30);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B51ca34:{NFSU2_TR(0x51ca34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51ca36:{NFSU2_TR(0x51ca36);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ca3a:{NFSU2_TR(0x51ca3a);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B51ca3e:{NFSU2_TR(0x51ca3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B51ca40:L51ca40:{c.instructions+=2;NFSU2_TR(0x51ca40);
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
B51ca43:{NFSU2_TR(0x51ca43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ca50:L51ca50:{c.instructions+=2;NFSU2_TR(0x51ca50);
w4(R+0,u32(0x10a0ull));
}
B51ca55:{NFSU2_TR(0x51ca55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ca5aull));
TAIL_STATIC(0x75c4d0u,75c);
}
B51ca5a:L51ca5a:{c.instructions+=10;NFSU2_TR(0x51ca5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ca5b:{NFSU2_TR(0x51ca5b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ca5c:{NFSU2_TR(0x51ca5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ca5d:{NFSU2_TR(0x51ca5d);
__builtin_memmove((R+24),(R+4),4);
}
B51ca5f:{NFSU2_TR(0x51ca5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51ca61:{NFSU2_TR(0x51ca61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ca62:{NFSU2_TR(0x51ca62);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51ca66:{NFSU2_TR(0x51ca66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ca67:{NFSU2_TR(0x51ca67);
__builtin_memmove((R+4),(R+24),4);
}
B51ca69:{NFSU2_TR(0x51ca69);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ca6cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51ca6c:L51ca6c:{c.instructions+=10;NFSU2_TR(0x51ca6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ca73:{NFSU2_TR(0x51ca73);
u8 U[8];
w4(U+0,u32(u32(u32(0x10b4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51ca7a:{NFSU2_TR(0x51ca7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51ca7e:{NFSU2_TR(0x51ca7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ca7f:{NFSU2_TR(0x51ca7f);
__builtin_memmove(gp(0x838494),(R+8),4);
}
B51ca85:{NFSU2_TR(0x51ca85);
s4(0x83848c,u32(0x20cull));
}
B51ca8f:{NFSU2_TR(0x51ca8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51ca91:{NFSU2_TR(0x51ca91);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ca92:{NFSU2_TR(0x51ca92);
__builtin_memmove((R+4),(R+24),4);
}
B51ca94:{NFSU2_TR(0x51ca94);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ca97ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51ca97:L51ca97:{c.instructions+=6;NFSU2_TR(0x51ca97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51ca9a:{NFSU2_TR(0x51ca9a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x110ull))));
}
B51caa0:{NFSU2_TR(0x51caa0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B51caa6:{NFSU2_TR(0x51caa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51caa9:{NFSU2_TR(0x51caa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51caab:{NFSU2_TR(0x51caab);
if(r1(R+518)){{goto L51cacd;}}
}
B51caad:L51caad:{c.instructions+=1;NFSU2_TR(0x51caad);
__builtin_memmove((R+4),(R+4),4);
}
B51cab0:L51cab0:{c.instructions+=2;NFSU2_TR(0x51cab0);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51cab4:{NFSU2_TR(0x51cab4);
if(r1(R+518)){{goto L51cac6;}}
}
B51cab6:L51cab6:{c.instructions+=7;NFSU2_TR(0x51cab6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cab7:{NFSU2_TR(0x51cab7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cab9:{NFSU2_TR(0x51cab9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51cabd:{NFSU2_TR(0x51cabd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cabe:{NFSU2_TR(0x51cabe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cabf:{NFSU2_TR(0x51cabf);
__builtin_memmove((R+4),(R+24),4);
}
B51cac1:{NFSU2_TR(0x51cac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cac6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51c9b0u);}goto L51c9b0;}
}
B51cac6:L51cac6:{c.instructions+=3;NFSU2_TR(0x51cac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51cac9:{NFSU2_TR(0x51cac9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51cacb:{NFSU2_TR(0x51cacb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51cab0u);}goto L51cab0;}}
}
B51cacd:L51cacd:{c.instructions+=2;NFSU2_TR(0x51cacd);
__builtin_memmove((R+4),(R+12),4);
}
B51cacf:{NFSU2_TR(0x51cacf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cad4ull));
TAIL_STATIC(0x5114f0u,511);
}
B51cad4:L51cad4:{c.instructions+=7;NFSU2_TR(0x51cad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51cad6:{NFSU2_TR(0x51cad6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51cad8:{NFSU2_TR(0x51cad8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cad9:{NFSU2_TR(0x51cad9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x4ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51cadc:{NFSU2_TR(0x51cadc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cadd:{NFSU2_TR(0x51cadd);
__builtin_memmove((R+4),(R+24),4);
}
B51cadf:{NFSU2_TR(0x51cadf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cae2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51cae2:L51cae2:{c.instructions+=4;NFSU2_TR(0x51cae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51cae4:{NFSU2_TR(0x51cae4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cae5:{NFSU2_TR(0x51cae5);
__builtin_memmove((R+4),(R+24),4);
}
B51cae7:{NFSU2_TR(0x51cae7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51caeaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51caea:L51caea:{c.instructions+=8;NFSU2_TR(0x51caea);
__builtin_memmove((R+0),gp(0x838490),4);
}
B51caef:{NFSU2_TR(0x51caef);
__builtin_memmove((R+4),gp(0x838488),4);
}
B51caf5:{NFSU2_TR(0x51caf5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51caf7:{NFSU2_TR(0x51caf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51caf8:{NFSU2_TR(0x51caf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51caf9:{NFSU2_TR(0x51caf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51cafa:{NFSU2_TR(0x51cafa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51cafb:{NFSU2_TR(0x51cafb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L51caff;}}
}
B51cafd:L51cafd:{c.instructions+=1;NFSU2_TR(0x51cafd);
__builtin_memmove((R+0),(R+4),4);
}
B51caff:L51caff:{c.instructions+=7;NFSU2_TR(0x51caff);
__builtin_memmove(gp(0x838490),(R+0),4);
}
B51cb04:{NFSU2_TR(0x51cb04);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51cb06:{NFSU2_TR(0x51cb06);
__builtin_memmove(gp(0x838494),(R+0),4);
}
B51cb0b:{NFSU2_TR(0x51cb0b);
__builtin_memmove(gp(0x83848c),(R+0),4);
}
B51cb10:{NFSU2_TR(0x51cb10);
__builtin_memmove(gp(0x838488),(R+0),4);
}
B51cb15:{NFSU2_TR(0x51cb15);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10a0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10a0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10a0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51cb1b:{NFSU2_TR(0x51cb1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cb20:L51cb20:{c.instructions+=5;NFSU2_TR(0x51cb20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cb24:{NFSU2_TR(0x51cb24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51cb26:{NFSU2_TR(0x51cb26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cb27:{NFSU2_TR(0x51cb27);
__builtin_memmove((R+24),(R+4),4);
}
B51cb29:{NFSU2_TR(0x51cb29);
if(r1(R+518)){{goto L51cb3f;}}
}
B51cb2b:L51cb2b:{c.instructions+=3;NFSU2_TR(0x51cb2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cb2c:{NFSU2_TR(0x51cb2c);
w4(R+4,u32(0x8637b0ull));
}
B51cb31:{NFSU2_TR(0x51cb31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cb36ull));
TAIL_STATIC(0x51bb70u,51b);
}
B51cb36:L51cb36:{c.instructions+=2;NFSU2_TR(0x51cb36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51cb38:{NFSU2_TR(0x51cb38);
if(r1(R+518)){{goto L51cb3f;}}
}
B51cb3a:L51cb3a:{c.instructions+=2;NFSU2_TR(0x51cb3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cb3d:{NFSU2_TR(0x51cb3d);
{goto L51cb41;}
}
B51cb3f:L51cb3f:{c.instructions+=1;NFSU2_TR(0x51cb3f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51cb41:L51cb41:{c.instructions+=7;NFSU2_TR(0x51cb41);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cb45:{NFSU2_TR(0x51cb45);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51cb49:{NFSU2_TR(0x51cb49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cb4a:{NFSU2_TR(0x51cb4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cb4d:{NFSU2_TR(0x51cb4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cb4e:{NFSU2_TR(0x51cb4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cb4f:{NFSU2_TR(0x51cb4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cb54ull));
TAIL_STATIC(0x51ac10u,51a);
}
B51cb54:L51cb54:{c.instructions+=2;NFSU2_TR(0x51cb54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51cb55:{NFSU2_TR(0x51cb55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cb60:L51cb60:{c.instructions+=5;NFSU2_TR(0x51cb60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cb64:{NFSU2_TR(0x51cb64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51cb66:{NFSU2_TR(0x51cb66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cb67:{NFSU2_TR(0x51cb67);
__builtin_memmove((R+24),(R+4),4);
}
B51cb69:{NFSU2_TR(0x51cb69);
if(r1(R+518)){{goto L51cb7f;}}
}
B51cb6b:L51cb6b:{c.instructions+=3;NFSU2_TR(0x51cb6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cb6c:{NFSU2_TR(0x51cb6c);
w4(R+4,u32(0x8637b0ull));
}
B51cb71:{NFSU2_TR(0x51cb71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cb76ull));
TAIL_STATIC(0x51bb70u,51b);
}
B51cb76:L51cb76:{c.instructions+=2;NFSU2_TR(0x51cb76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51cb78:{NFSU2_TR(0x51cb78);
if(r1(R+518)){{goto L51cb7f;}}
}
B51cb7a:L51cb7a:{c.instructions+=2;NFSU2_TR(0x51cb7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cb7d:{NFSU2_TR(0x51cb7d);
{goto L51cb81;}
}
B51cb7f:L51cb7f:{c.instructions+=1;NFSU2_TR(0x51cb7f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51cb81:L51cb81:{c.instructions+=7;NFSU2_TR(0x51cb81);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cb85:{NFSU2_TR(0x51cb85);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51cb89:{NFSU2_TR(0x51cb89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cb8a:{NFSU2_TR(0x51cb8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cb8d:{NFSU2_TR(0x51cb8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cb8e:{NFSU2_TR(0x51cb8e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cb8f:{NFSU2_TR(0x51cb8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cb94ull));
TAIL_STATIC(0x51ace0u,51a);
}
B51cb94:L51cb94:{c.instructions+=2;NFSU2_TR(0x51cb94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51cb95:{NFSU2_TR(0x51cb95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cba0:L51cba0:{c.instructions+=7;NFSU2_TR(0x51cba0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cba1:{NFSU2_TR(0x51cba1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cba2:{NFSU2_TR(0x51cba2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51cba6:{NFSU2_TR(0x51cba6);
__builtin_memmove((R+12),(R+4),4);
}
B51cba8:{NFSU2_TR(0x51cba8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cba9:{NFSU2_TR(0x51cba9);
w4(R+4,u32(0x8637b0ull));
}
B51cbae:{NFSU2_TR(0x51cbae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cbb3ull));
TAIL_STATIC(0x51bb70u,51b);
}
B51cbb3:L51cbb3:{c.instructions+=2;NFSU2_TR(0x51cbb3);
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
B51cbb5:{NFSU2_TR(0x51cbb5);
if(r1(R+518)){{goto L51cbed;}}
}
B51cbb7:L51cbb7:{c.instructions+=4;NFSU2_TR(0x51cbb7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cbb8:{NFSU2_TR(0x51cbb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51cbbb:{NFSU2_TR(0x51cbbb);
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
B51cbbd:{NFSU2_TR(0x51cbbd);
if(r1(R+518)){{goto L51cbec;}}
}
B51cbbf:L51cbbf:{c.instructions+=4;NFSU2_TR(0x51cbbf);
u8 U[4];
w4(U+0,u32(0x5eca113dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cbc4:{NFSU2_TR(0x51cbc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cbc5:{NFSU2_TR(0x51cbc5);
w4(R+4,u32(0x8637b0ull));
}
B51cbca:{NFSU2_TR(0x51cbca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cbcfull));
TAIL_STATIC(0x55dc20u,55d);
}
B51cbcf:L51cbcf:{c.instructions+=5;NFSU2_TR(0x51cbcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cbd3:{NFSU2_TR(0x51cbd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cbd4:{NFSU2_TR(0x51cbd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cbd5:{NFSU2_TR(0x51cbd5);
u8 U[4];
w4(U+0,u32(0x79b26cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cbda:{NFSU2_TR(0x51cbda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cbdfull));
TAIL_STATIC(0x50d510u,50d);
}
B51cbdf:L51cbdf:{c.instructions+=5;NFSU2_TR(0x51cbdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51cbe2:{NFSU2_TR(0x51cbe2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cbe3:{NFSU2_TR(0x51cbe3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cbe4:{NFSU2_TR(0x51cbe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cbe7:{NFSU2_TR(0x51cbe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cbecull));
TAIL_STATIC(0x51ab20u,51a);
}
B51cbec:L51cbec:{c.instructions+=1;NFSU2_TR(0x51cbec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51cbed:L51cbed:{c.instructions+=3;NFSU2_TR(0x51cbed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51cbee:{NFSU2_TR(0x51cbee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51cbef:{NFSU2_TR(0x51cbef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cc00:L51cc00:{c.instructions+=8;NFSU2_TR(0x51cc00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc01:{NFSU2_TR(0x51cc01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc02:{NFSU2_TR(0x51cc02);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51cc06:{NFSU2_TR(0x51cc06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc07:{NFSU2_TR(0x51cc07);
__builtin_memmove((R+12),(R+4),4);
}
B51cc09:{NFSU2_TR(0x51cc09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc0a:{NFSU2_TR(0x51cc0a);
w4(R+4,u32(0x8637b0ull));
}
B51cc0f:{NFSU2_TR(0x51cc0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cc14ull));
TAIL_STATIC(0x51bb70u,51b);
}
B51cc14:L51cc14:{c.instructions+=2;NFSU2_TR(0x51cc14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51cc16:{NFSU2_TR(0x51cc16);
if(r1(R+518)){{goto L51cc4c;}}
}
B51cc18:L51cc18:{c.instructions+=3;NFSU2_TR(0x51cc18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51cc1b:{NFSU2_TR(0x51cc1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51cc1d:{NFSU2_TR(0x51cc1d);
if(r1(R+518)){{goto L51cc4c;}}
}
B51cc1f:L51cc1f:{c.instructions+=4;NFSU2_TR(0x51cc1f);
u8 U[4];
w4(U+0,u32(0x90ca113dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc24:{NFSU2_TR(0x51cc24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc25:{NFSU2_TR(0x51cc25);
w4(R+4,u32(0x8637b0ull));
}
B51cc2a:{NFSU2_TR(0x51cc2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cc2full));
TAIL_STATIC(0x55dc20u,55d);
}
B51cc2f:L51cc2f:{c.instructions+=3;NFSU2_TR(0x51cc2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc30:{NFSU2_TR(0x51cc30);
u8 U[4];
w4(U+0,u32(0x79b290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc35:{NFSU2_TR(0x51cc35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cc3aull));
TAIL_STATIC(0x50d510u,50d);
}
B51cc3a:L51cc3a:{c.instructions+=4;NFSU2_TR(0x51cc3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cc3d:{NFSU2_TR(0x51cc3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51cc40:{NFSU2_TR(0x51cc40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc41:{NFSU2_TR(0x51cc41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cc46ull));
TAIL_STATIC(0x51adb0u,51a);
}
B51cc46:L51cc46:{c.instructions+=4;NFSU2_TR(0x51cc46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51cc47:{NFSU2_TR(0x51cc47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51cc48:{NFSU2_TR(0x51cc48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51cc49:{NFSU2_TR(0x51cc49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cc4c:L51cc4c:{c.instructions+=3;NFSU2_TR(0x51cc4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cc4f:{NFSU2_TR(0x51cc4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc50:{NFSU2_TR(0x51cc50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cc55ull));
TAIL_STATIC(0x51ae80u,51a);
}
B51cc55:L51cc55:{c.instructions+=4;NFSU2_TR(0x51cc55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51cc56:{NFSU2_TR(0x51cc56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51cc57:{NFSU2_TR(0x51cc57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51cc58:{NFSU2_TR(0x51cc58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cc60:L51cc60:{c.instructions+=4;NFSU2_TR(0x51cc60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cc64:{NFSU2_TR(0x51cc64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc65:{NFSU2_TR(0x51cc65);
w4(R+4,u32(0x8637b0ull));
}
B51cc6a:{NFSU2_TR(0x51cc6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cc6full));
TAIL_STATIC(0x51bb70u,51b);
}
B51cc6f:L51cc6f:{c.instructions+=2;NFSU2_TR(0x51cc6f);
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
B51cc71:{NFSU2_TR(0x51cc71);
if(r1(R+518)){{goto L51ccc5;}}
}
B51cc73:L51cc73:{c.instructions+=3;NFSU2_TR(0x51cc73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cc76:{NFSU2_TR(0x51cc76);
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
B51cc78:{NFSU2_TR(0x51cc78);
if(r1(R+518)){{goto L51ccc5;}}
}
B51cc7a:L51cc7a:{c.instructions+=5;NFSU2_TR(0x51cc7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51cc80:{NFSU2_TR(0x51cc80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc81:{NFSU2_TR(0x51cc81);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51cc83:{NFSU2_TR(0x51cc83);
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
B51cc85:{NFSU2_TR(0x51cc85);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51ccc4;}}
}
B51cc87:L51cc87:{c.instructions+=3;NFSU2_TR(0x51cc87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cc8d:{NFSU2_TR(0x51cc8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cc8e:{NFSU2_TR(0x51cc8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51cc92:L51cc92:{c.instructions+=3;NFSU2_TR(0x51cc92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51cc94:{NFSU2_TR(0x51cc94);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51cc97:{NFSU2_TR(0x51cc97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51cc9b;}}
}
B51cc99:L51cc99:{c.instructions+=1;NFSU2_TR(0x51cc99);
__builtin_memmove((R+24),(R+0),4);
}
B51cc9b:L51cc9b:{c.instructions+=3;NFSU2_TR(0x51cc9b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B51cc9e:{NFSU2_TR(0x51cc9e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B51cc9f:{NFSU2_TR(0x51cc9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51cc92u);}goto L51cc92;}}
}
B51cca1:L51cca1:{c.instructions+=3;NFSU2_TR(0x51cca1);
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
B51cca3:{NFSU2_TR(0x51cca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51cca4:{NFSU2_TR(0x51cca4);
if(r1(R+518)){{goto L51ccc4;}}
}
B51cca6:L51cca6:{c.instructions+=3;NFSU2_TR(0x51cca6);
u8 U[7];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B51ccab:{NFSU2_TR(0x51ccab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ccae:{NFSU2_TR(0x51ccae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51ccbc;}}
}
B51ccb0:L51ccb0:{c.instructions+=4;NFSU2_TR(0x51ccb0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfbffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51ccb5:{NFSU2_TR(0x51ccb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ccb8:{NFSU2_TR(0x51ccb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ccb9:{NFSU2_TR(0x51ccb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ccbc:L51ccbc:{c.instructions+=2;NFSU2_TR(0x51ccbc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4000000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51ccc1:{NFSU2_TR(0x51ccc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ccc4:L51ccc4:{c.instructions+=1;NFSU2_TR(0x51ccc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ccc5:L51ccc5:{c.instructions+=1;NFSU2_TR(0x51ccc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ccd0:L51ccd0:{c.instructions+=7;NFSU2_TR(0x51ccd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ccd1:{NFSU2_TR(0x51ccd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ccd2:{NFSU2_TR(0x51ccd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51ccd5:{NFSU2_TR(0x51ccd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ccd6:{NFSU2_TR(0x51ccd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ccd9:{NFSU2_TR(0x51ccd9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ccdb:{NFSU2_TR(0x51ccdb);
if(r1(R+518)){{goto L51ccf8;}}
}
B51ccdd:L51ccdd:{c.instructions+=1;NFSU2_TR(0x51ccdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51cce1:L51cce1:{c.instructions+=4;NFSU2_TR(0x51cce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cce4:{NFSU2_TR(0x51cce4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cce5:{NFSU2_TR(0x51cce5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cce6:{NFSU2_TR(0x51cce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ccebull));
TAIL_STATIC(0x43dcc0u,43d);
}
B51cceb:L51cceb:{c.instructions+=3;NFSU2_TR(0x51cceb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51ccee:{NFSU2_TR(0x51ccee);
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
B51ccf0:{NFSU2_TR(0x51ccf0);
if(r1(R+518)){{goto L51cd00;}}
}
B51ccf2:L51ccf2:{c.instructions+=3;NFSU2_TR(0x51ccf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B51ccf4:{NFSU2_TR(0x51ccf4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ccf6:{NFSU2_TR(0x51ccf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51cce1u);}goto L51cce1;}}
}
B51ccf8:L51ccf8:{c.instructions+=5;NFSU2_TR(0x51ccf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ccf9:{NFSU2_TR(0x51ccf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ccfa:{NFSU2_TR(0x51ccfa);
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
B51ccfc:{NFSU2_TR(0x51ccfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ccfd:{NFSU2_TR(0x51ccfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cd00:L51cd00:{c.instructions+=5;NFSU2_TR(0x51cd00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51cd01:{NFSU2_TR(0x51cd01);
__builtin_memmove((R+0),(R+24),4);
}
B51cd03:{NFSU2_TR(0x51cd03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51cd04:{NFSU2_TR(0x51cd04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51cd05:{NFSU2_TR(0x51cd05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cd10:L51cd10:{c.instructions+=3;NFSU2_TR(0x51cd10);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B51cd15:{NFSU2_TR(0x51cd15);
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
B51cd17:{NFSU2_TR(0x51cd17);
if(r1(R+518)){{goto L51cd3a;}}
}
B51cd19:L51cd19:{c.instructions+=4;NFSU2_TR(0x51cd19);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cd1d:{NFSU2_TR(0x51cd1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cd1e:{NFSU2_TR(0x51cd1e);
w4(R+4,u32(0x8637b0ull));
}
B51cd23:{NFSU2_TR(0x51cd23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cd28ull));
TAIL_STATIC(0x51bb70u,51b);
}
B51cd28:L51cd28:{c.instructions+=2;NFSU2_TR(0x51cd28);
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
B51cd2a:{NFSU2_TR(0x51cd2a);
if(r1(R+518)){{goto L51cd3a;}}
}
B51cd2c:L51cd2c:{c.instructions+=3;NFSU2_TR(0x51cd2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cd2f:{NFSU2_TR(0x51cd2f);
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
B51cd31:{NFSU2_TR(0x51cd31);
if(r1(R+518)){{goto L51cd3a;}}
}
B51cd33:L51cd33:{c.instructions+=2;NFSU2_TR(0x51cd33);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51cd37:{NFSU2_TR(0x51cd37);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51cd3a:L51cd3a:{c.instructions+=1;NFSU2_TR(0x51cd3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cd40:L51cd40:{c.instructions+=4;NFSU2_TR(0x51cd40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cd44:{NFSU2_TR(0x51cd44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cd45:{NFSU2_TR(0x51cd45);
w4(R+4,u32(0x8637b0ull));
}
B51cd4a:{NFSU2_TR(0x51cd4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cd4full));
TAIL_STATIC(0x51bb70u,51b);
}
B51cd4f:L51cd4f:{c.instructions+=2;NFSU2_TR(0x51cd4f);
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
B51cd51:{NFSU2_TR(0x51cd51);
if(r1(R+518)){{goto L51cd5c;}}
}
B51cd53:L51cd53:{c.instructions+=2;NFSU2_TR(0x51cd53);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B51cd58:{NFSU2_TR(0x51cd58);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B51cd5c:L51cd5c:{c.instructions+=1;NFSU2_TR(0x51cd5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cd60:L51cd60:{c.instructions+=3;NFSU2_TR(0x51cd60);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B51cd65:{NFSU2_TR(0x51cd65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51cd67:{NFSU2_TR(0x51cd67);
if(r1(R+518)){{goto L51cd90;}}
}
B51cd69:L51cd69:{c.instructions+=4;NFSU2_TR(0x51cd69);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cd6d:{NFSU2_TR(0x51cd6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cd6e:{NFSU2_TR(0x51cd6e);
w4(R+4,u32(0x8637b0ull));
}
B51cd73:{NFSU2_TR(0x51cd73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cd78ull));
TAIL_STATIC(0x51bb70u,51b);
}
B51cd78:L51cd78:{c.instructions+=2;NFSU2_TR(0x51cd78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51cd7a:{NFSU2_TR(0x51cd7a);
if(r1(R+518)){{goto L51cd81;}}
}
B51cd7c:L51cd7c:{c.instructions+=2;NFSU2_TR(0x51cd7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cd7f:{NFSU2_TR(0x51cd7f);
{goto L51cd83;}
}
B51cd81:L51cd81:{c.instructions+=1;NFSU2_TR(0x51cd81);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51cd83:L51cd83:{c.instructions+=3;NFSU2_TR(0x51cd83);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51cd85:{NFSU2_TR(0x51cd85);
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
B51cd87:{NFSU2_TR(0x51cd87);
if(r1(R+518)){{goto L51cd92;}}
}
B51cd89:L51cd89:{c.instructions+=2;NFSU2_TR(0x51cd89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cd8f:{NFSU2_TR(0x51cd8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cd90:L51cd90:{c.instructions+=1;NFSU2_TR(0x51cd90);
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
B51cd92:L51cd92:{c.instructions+=1;NFSU2_TR(0x51cd92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cda0:L51cda0:{c.instructions+=3;NFSU2_TR(0x51cda0);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B51cda6:{NFSU2_TR(0x51cda6);
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
B51cda8:{NFSU2_TR(0x51cda8);
if(r1(R+518)){{goto L51cdbe;}}
}
B51cdaa:L51cdaa:{c.instructions+=7;NFSU2_TR(0x51cdaa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cdae:{NFSU2_TR(0x51cdae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51cdb2:{NFSU2_TR(0x51cdb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cdb3:{NFSU2_TR(0x51cdb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cdb7:{NFSU2_TR(0x51cdb7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cdb8:{NFSU2_TR(0x51cdb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cdb9:{NFSU2_TR(0x51cdb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cdbeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51cc60u);}goto L51cc60;}
}
B51cdbe:L51cdbe:{c.instructions+=1;NFSU2_TR(0x51cdbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cdc0:L51cdc0:{c.instructions+=3;NFSU2_TR(0x51cdc0);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B51cdc5:{NFSU2_TR(0x51cdc5);
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
B51cdc7:{NFSU2_TR(0x51cdc7);
if(r1(R+518)){{goto L51cdeb;}}
}
B51cdc9:L51cdc9:{c.instructions+=3;NFSU2_TR(0x51cdc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cdcc:{NFSU2_TR(0x51cdcc);
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
B51cdce:{NFSU2_TR(0x51cdce);
if(r1(R+518)){{goto L51cdeb;}}
}
B51cdd0:L51cdd0:{c.instructions+=10;NFSU2_TR(0x51cdd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cdd4:{NFSU2_TR(0x51cdd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51cdd8:{NFSU2_TR(0x51cdd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cdda:{NFSU2_TR(0x51cdda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cddb:{NFSU2_TR(0x51cddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cddf:{NFSU2_TR(0x51cddf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cde0:{NFSU2_TR(0x51cde0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51cde4:{NFSU2_TR(0x51cde4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cde5:{NFSU2_TR(0x51cde5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cde6:{NFSU2_TR(0x51cde6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cdebull));
TAIL_STATIC(0x51aa20u,51a);
}
B51cdeb:L51cdeb:{c.instructions+=1;NFSU2_TR(0x51cdeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cdf0:L51cdf0:{c.instructions+=7;NFSU2_TR(0x51cdf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cdf4:{NFSU2_TR(0x51cdf4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cdf5:{NFSU2_TR(0x51cdf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51cdf9:{NFSU2_TR(0x51cdf9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cdfa:{NFSU2_TR(0x51cdfa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cdfb:{NFSU2_TR(0x51cdfb);
u8 U[4];
w4(U+0,u32(0x79b2b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce00:{NFSU2_TR(0x51ce00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ce05ull));
TAIL_STATIC(0x50d510u,50d);
}
B51ce05:L51ce05:{c.instructions+=4;NFSU2_TR(0x51ce05);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B51ce0a:{NFSU2_TR(0x51ce0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51ce0d:{NFSU2_TR(0x51ce0d);
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
B51ce0f:{NFSU2_TR(0x51ce0f);
if(r1(R+518)){{goto L51ce4f;}}
}
B51ce11:L51ce11:{c.instructions+=4;NFSU2_TR(0x51ce11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce12:{NFSU2_TR(0x51ce12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51ce15:{NFSU2_TR(0x51ce15);
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
B51ce17:{NFSU2_TR(0x51ce17);
if(r1(R+518)){{goto L51ce4e;}}
}
B51ce19:L51ce19:{c.instructions+=3;NFSU2_TR(0x51ce19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce1a:{NFSU2_TR(0x51ce1a);
w4(R+4,u32(0x8637b0ull));
}
B51ce1f:{NFSU2_TR(0x51ce1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ce24ull));
TAIL_STATIC(0x51bb70u,51b);
}
B51ce24:L51ce24:{c.instructions+=2;NFSU2_TR(0x51ce24);
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
B51ce26:{NFSU2_TR(0x51ce26);
if(r1(R+518)){{goto L51ce4e;}}
}
B51ce28:L51ce28:{c.instructions+=3;NFSU2_TR(0x51ce28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ce2b:{NFSU2_TR(0x51ce2b);
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
B51ce2d:{NFSU2_TR(0x51ce2d);
if(r1(R+518)){{goto L51ce4e;}}
}
B51ce2f:L51ce2f:{c.instructions+=2;NFSU2_TR(0x51ce2f);
u8 U[4];
w4(U+0,u32(0x79b2a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce34:{NFSU2_TR(0x51ce34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ce39ull));
TAIL_STATIC(0x50d510u,50d);
}
B51ce39:L51ce39:{c.instructions+=9;NFSU2_TR(0x51ce39);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ce3d:{NFSU2_TR(0x51ce3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51ce40:{NFSU2_TR(0x51ce40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce41:{NFSU2_TR(0x51ce41);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce43:{NFSU2_TR(0x51ce43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce44:{NFSU2_TR(0x51ce44);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce46:{NFSU2_TR(0x51ce46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce47:{NFSU2_TR(0x51ce47);
__builtin_memmove((R+4),(R+24),4);
}
B51ce49:{NFSU2_TR(0x51ce49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ce4eull));
TAIL_STATIC(0x51aa20u,51a);
}
B51ce4e:L51ce4e:{c.instructions+=1;NFSU2_TR(0x51ce4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ce4f:L51ce4f:{c.instructions+=2;NFSU2_TR(0x51ce4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ce50:{NFSU2_TR(0x51ce50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ce60:L51ce60:{c.instructions+=6;NFSU2_TR(0x51ce60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ce64:{NFSU2_TR(0x51ce64);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ce68:{NFSU2_TR(0x51ce68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce6a:{NFSU2_TR(0x51ce6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce6b:{NFSU2_TR(0x51ce6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce6c:{NFSU2_TR(0x51ce6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ce71ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51cdf0u);}goto L51cdf0;}
}
B51ce71:L51ce71:{c.instructions+=2;NFSU2_TR(0x51ce71);
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
B51ce74:{NFSU2_TR(0x51ce74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ce80:L51ce80:{c.instructions+=4;NFSU2_TR(0x51ce80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ce84:{NFSU2_TR(0x51ce84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ce85:{NFSU2_TR(0x51ce85);
w4(R+4,u32(0x8637b0ull));
}
B51ce8a:{NFSU2_TR(0x51ce8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ce8full));
TAIL_STATIC(0x51bb70u,51b);
}
B51ce8f:L51ce8f:{c.instructions+=2;NFSU2_TR(0x51ce8f);
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
B51ce91:{NFSU2_TR(0x51ce91);
if(r1(R+518)){{goto L51ce9d;}}
}
B51ce93:L51ce93:{c.instructions+=2;NFSU2_TR(0x51ce93);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(r1(U+4)));
}
B51ce99:{NFSU2_TR(0x51ce99);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B51ce9d:L51ce9d:{c.instructions+=1;NFSU2_TR(0x51ce9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cea0:L51cea0:{c.instructions+=3;NFSU2_TR(0x51cea0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51cea3:{NFSU2_TR(0x51cea3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51cea5:{NFSU2_TR(0x51cea5);
if(r1(R+518)){{goto L51ceb9;}}
}
B51cea7:L51cea7:{c.instructions+=3;NFSU2_TR(0x51cea7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ceab:{NFSU2_TR(0x51ceab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ceac:{NFSU2_TR(0x51ceac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ceb1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B51ceb1:L51ceb1:{c.instructions+=3;NFSU2_TR(0x51ceb1);
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
B51ceb4:{NFSU2_TR(0x51ceb4);
w1(R+0,u8(0x1ull));
}
B51ceb6:{NFSU2_TR(0x51ceb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ceb9:L51ceb9:{c.instructions+=3;NFSU2_TR(0x51ceb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cebd:{NFSU2_TR(0x51cebd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cebe:{NFSU2_TR(0x51cebe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cec3ull));
TAIL_STATIC(0x50ca00u,50c);
}
B51cec3:L51cec3:{c.instructions+=3;NFSU2_TR(0x51cec3);
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
B51cec6:{NFSU2_TR(0x51cec6);
w1(R+0,u8(0x1ull));
}
B51cec8:{NFSU2_TR(0x51cec8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ced0:L51ced0:{c.instructions+=8;NFSU2_TR(0x51ced0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ced1:{NFSU2_TR(0x51ced1);
__builtin_memmove((R+20),(R+16),4);
}
B51ced3:{NFSU2_TR(0x51ced3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B51ced6:{NFSU2_TR(0x51ced6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x6cull))));
}
B51ced9:{NFSU2_TR(0x51ced9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ceda:{NFSU2_TR(0x51ceda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51cedd:{NFSU2_TR(0x51cedd);
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
B51cedf:{NFSU2_TR(0x51cedf);
if(r1(R+518)){{goto L51cf6a;}}
}
B51cee5:L51cee5:{c.instructions+=6;NFSU2_TR(0x51cee5);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51cee8:{NFSU2_TR(0x51cee8);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51ceec:{NFSU2_TR(0x51ceec);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51cef2:{NFSU2_TR(0x51cef2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cef3:{NFSU2_TR(0x51cef3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51cef7:{NFSU2_TR(0x51cef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cefcull));
TAIL_STATIC(0x43c780u,43c);
}
B51cefc:L51cefc:{c.instructions+=4;NFSU2_TR(0x51cefc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51cf00:{NFSU2_TR(0x51cf00);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51cf06:{NFSU2_TR(0x51cf06);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51cf09:{NFSU2_TR(0x51cf09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cf0eull));
TAIL_STATIC(0x43c350u,43c);
}
B51cf0e:L51cf0e:{c.instructions+=5;NFSU2_TR(0x51cf0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cf12:{NFSU2_TR(0x51cf12);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51cf16:{NFSU2_TR(0x51cf16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cf17:{NFSU2_TR(0x51cf17);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51cf1b:{NFSU2_TR(0x51cf1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cf20ull));
TAIL_STATIC(0x43c350u,43c);
}
B51cf20:L51cf20:{c.instructions+=8;NFSU2_TR(0x51cf20);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51cf24:{NFSU2_TR(0x51cf24);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51cf28:{NFSU2_TR(0x51cf28);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B51cf2a:{NFSU2_TR(0x51cf2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cf2b:{NFSU2_TR(0x51cf2b);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51cf2f:{NFSU2_TR(0x51cf2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51cf33:{NFSU2_TR(0x51cf33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cf34:{NFSU2_TR(0x51cf34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cf39ull));
TAIL_STATIC(0x43cbd0u,43c);
}
B51cf39:L51cf39:{c.instructions+=14;NFSU2_TR(0x51cf39);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cf3d:{NFSU2_TR(0x51cf3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51cf41:{NFSU2_TR(0x51cf41);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cf45:{NFSU2_TR(0x51cf45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B51cf48:{NFSU2_TR(0x51cf48);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51cf4c:{NFSU2_TR(0x51cf4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cf50:{NFSU2_TR(0x51cf50);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51cf54:{NFSU2_TR(0x51cf54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cf56:{NFSU2_TR(0x51cf56);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51cf5a:{NFSU2_TR(0x51cf5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51cf5e:{NFSU2_TR(0x51cf5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cf5f:{NFSU2_TR(0x51cf5f);
__builtin_memmove((R+4),(R+24),4);
}
B51cf61:{NFSU2_TR(0x51cf61);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51cf65:{NFSU2_TR(0x51cf65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cf6aull));
TAIL_STATIC(0x517c80u,517);
}
B51cf6a:L51cf6a:{c.instructions+=4;NFSU2_TR(0x51cf6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51cf6b:{NFSU2_TR(0x51cf6b);
__builtin_memmove((R+16),(R+20),4);
}
B51cf6d:{NFSU2_TR(0x51cf6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51cf6e:{NFSU2_TR(0x51cf6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cf70:L51cf70:{c.instructions+=4;NFSU2_TR(0x51cf70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cf71:{NFSU2_TR(0x51cf71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51cf75:{NFSU2_TR(0x51cf75);
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
B51cf77:{NFSU2_TR(0x51cf77);
if(r1(R+518)){{goto L51cfcf;}}
}
B51cf79:L51cf79:{c.instructions+=5;NFSU2_TR(0x51cf79);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cf7a:{NFSU2_TR(0x51cf7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cf7b:{NFSU2_TR(0x51cf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51cf7e:{NFSU2_TR(0x51cf7e);
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
B51cf80:{NFSU2_TR(0x51cf80);
if(r1(R+518)){{goto L51cfcd;}}
}
B51cf82:L51cf82:{c.instructions+=1;NFSU2_TR(0x51cf82);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51cf86:L51cf86:{c.instructions+=2;NFSU2_TR(0x51cf86);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cf87:{NFSU2_TR(0x51cf87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cf8cull));
TAIL_STATIC(0x505450u,505);
}
B51cf8c:L51cf8c:{c.instructions+=4;NFSU2_TR(0x51cf8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51cf8f:{NFSU2_TR(0x51cf8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51cf92:{NFSU2_TR(0x51cf92);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51cf94:{NFSU2_TR(0x51cf94);
if(r1(R+518)){{goto L51cfa1;}}
}
B51cf96:L51cf96:{c.instructions+=3;NFSU2_TR(0x51cf96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51cf99:{NFSU2_TR(0x51cf99);
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
B51cf9b:{NFSU2_TR(0x51cf9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51cf86u);}goto L51cf86;}}
}
B51cf9d:L51cf9d:{c.instructions+=4;NFSU2_TR(0x51cf9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51cf9e:{NFSU2_TR(0x51cf9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51cf9f:{NFSU2_TR(0x51cf9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51cfa0:{NFSU2_TR(0x51cfa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cfa1:L51cfa1:{c.instructions+=2;NFSU2_TR(0x51cfa1);
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
B51cfa3:{NFSU2_TR(0x51cfa3);
if(r1(R+518)){{goto L51cfcd;}}
}
B51cfa5:L51cfa5:{c.instructions+=2;NFSU2_TR(0x51cfa5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51cfa8:{NFSU2_TR(0x51cfa8);
if(r1(R+518)){{goto L51cfbe;}}
}
B51cfaa:L51cfaa:{c.instructions+=3;NFSU2_TR(0x51cfaa);
__builtin_memmove((R+4),(R+28),4);
}
B51cfac:{NFSU2_TR(0x51cfac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51cfaf:{NFSU2_TR(0x51cfaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51cfb4ull));
TAIL_STATIC(0x517720u,517);
}
B51cfb4:L51cfb4:{c.instructions+=2;NFSU2_TR(0x51cfb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cfb7:{NFSU2_TR(0x51cfb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51cfbe:L51cfbe:{c.instructions+=3;NFSU2_TR(0x51cfbe);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51cfc2:{NFSU2_TR(0x51cfc2);
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
B51cfc4:{NFSU2_TR(0x51cfc4);
if(r1(R+518)){{goto L51cfcd;}}
}
B51cfc6:L51cfc6:{c.instructions+=1;NFSU2_TR(0x51cfc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51cfcd:L51cfcd:{c.instructions+=2;NFSU2_TR(0x51cfcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51cfce:{NFSU2_TR(0x51cfce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51cfcf:L51cfcf:{c.instructions+=2;NFSU2_TR(0x51cfcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51cfd0:{NFSU2_TR(0x51cfd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51cfe0:L51cfe0:{c.instructions+=4;NFSU2_TR(0x51cfe0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cfe1:{NFSU2_TR(0x51cfe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51cfe5:{NFSU2_TR(0x51cfe5);
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
B51cfe7:{NFSU2_TR(0x51cfe7);
if(r1(R+518)){TAIL_STATIC(0x51d031u,51d);}
}
B51cfe9:L51cfe9:{c.instructions+=4;NFSU2_TR(0x51cfe9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51cfea:{NFSU2_TR(0x51cfea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51cfed:{NFSU2_TR(0x51cfed);
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
B51cfef:{NFSU2_TR(0x51cfef);
if(r1(R+518)){TAIL_STATIC(0x51d030u,51d);}
}
B51cff1:L51cff1:{c.instructions+=1;NFSU2_TR(0x51cff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51cff5:L51cff5:{c.instructions+=2;NFSU2_TR(0x51cff5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51cff8:{NFSU2_TR(0x51cff8);
if(r1(R+518)){TAIL_STATIC(0x51d004u,51d);}
}
B51cffa:L51cffa:{c.instructions+=3;NFSU2_TR(0x51cffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51cffd:{NFSU2_TR(0x51cffd);
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
B51cfff:{NFSU2_TR(0x51cfff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51cff5u);}goto L51cff5;}}
TAIL_STATIC(0x51d001u,51d);
}
XIT:NFSU2_TR_EXIT(0x51c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
