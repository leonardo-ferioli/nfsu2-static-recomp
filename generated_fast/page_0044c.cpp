#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_44a(u8* __restrict R,Cpu& c);
u32 body_44d(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_573(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x44c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x44c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_44c(u8* __restrict R,Cpu& c);
u32 page_44c(Cpu& c){return body_44c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_44c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x44c003:goto L44c003;
case 0x44c005:goto L44c005;
case 0x44c008:c.instructions+=3;goto B44c008;
case 0x44c00e:c.instructions+=2;goto B44c00e;
case 0x44c014:c.instructions+=1;goto B44c014;
case 0x44c016:goto L44c016;
case 0x44c019:c.instructions+=1;goto B44c019;
case 0x44c01f:goto L44c01f;
case 0x44c025:c.instructions+=13;goto B44c025;
case 0x44c028:c.instructions+=12;goto B44c028;
case 0x44c02b:c.instructions+=11;goto B44c02b;
case 0x44c02e:c.instructions+=10;goto B44c02e;
case 0x44c031:c.instructions+=9;goto B44c031;
case 0x44c033:c.instructions+=8;goto B44c033;
case 0x44c036:c.instructions+=7;goto B44c036;
case 0x44c039:c.instructions+=6;goto B44c039;
case 0x44c03c:c.instructions+=5;goto B44c03c;
case 0x44c042:c.instructions+=4;goto B44c042;
case 0x44c048:c.instructions+=3;goto B44c048;
case 0x44c04a:c.instructions+=2;goto B44c04a;
case 0x44c04d:c.instructions+=1;goto B44c04d;
case 0x44c04f:goto L44c04f;
case 0x44c055:c.instructions+=4;goto B44c055;
case 0x44c05b:c.instructions+=3;goto B44c05b;
case 0x44c05d:c.instructions+=2;goto B44c05d;
case 0x44c060:c.instructions+=1;goto B44c060;
case 0x44c062:goto L44c062;
case 0x44c068:c.instructions+=4;goto B44c068;
case 0x44c06e:c.instructions+=3;goto B44c06e;
case 0x44c070:c.instructions+=2;goto B44c070;
case 0x44c073:c.instructions+=1;goto B44c073;
case 0x44c075:goto L44c075;
case 0x44c07b:c.instructions+=5;goto B44c07b;
case 0x44c081:c.instructions+=4;goto B44c081;
case 0x44c083:c.instructions+=3;goto B44c083;
case 0x44c086:c.instructions+=2;goto B44c086;
case 0x44c089:c.instructions+=1;goto B44c089;
case 0x44c08b:goto L44c08b;
case 0x44c091:c.instructions+=5;goto B44c091;
case 0x44c097:c.instructions+=4;goto B44c097;
case 0x44c09d:c.instructions+=3;goto B44c09d;
case 0x44c09f:c.instructions+=2;goto B44c09f;
case 0x44c0a2:c.instructions+=1;goto B44c0a2;
case 0x44c0a5:goto L44c0a5;
case 0x44c0ab:c.instructions+=8;goto B44c0ab;
case 0x44c0ae:c.instructions+=7;goto B44c0ae;
case 0x44c0b4:c.instructions+=6;goto B44c0b4;
case 0x44c0b7:c.instructions+=5;goto B44c0b7;
case 0x44c0ba:c.instructions+=4;goto B44c0ba;
case 0x44c0bd:c.instructions+=3;goto B44c0bd;
case 0x44c0bf:c.instructions+=2;goto B44c0bf;
case 0x44c0c2:c.instructions+=1;goto B44c0c2;
case 0x44c0c4:goto L44c0c4;
case 0x44c0c9:c.instructions+=2;goto B44c0c9;
case 0x44c0cc:c.instructions+=1;goto B44c0cc;
case 0x44c0ce:goto L44c0ce;
case 0x44c0d4:c.instructions+=1;goto B44c0d4;
case 0x44c0d7:goto L44c0d7;
case 0x44c0dd:c.instructions+=4;goto B44c0dd;
case 0x44c0e3:c.instructions+=3;goto B44c0e3;
case 0x44c0e5:c.instructions+=2;goto B44c0e5;
case 0x44c0e8:c.instructions+=1;goto B44c0e8;
case 0x44c0ea:goto L44c0ea;
case 0x44c0f0:c.instructions+=2;goto B44c0f0;
case 0x44c0f3:c.instructions+=1;goto B44c0f3;
case 0x44c0f5:goto L44c0f5;
case 0x44c0fb:c.instructions+=1;goto B44c0fb;
case 0x44c0fe:goto L44c0fe;
case 0x44c104:c.instructions+=31;goto B44c104;
case 0x44c107:c.instructions+=30;goto B44c107;
case 0x44c109:c.instructions+=29;goto B44c109;
case 0x44c10c:c.instructions+=28;goto B44c10c;
case 0x44c112:c.instructions+=27;goto B44c112;
case 0x44c114:c.instructions+=26;goto B44c114;
case 0x44c116:c.instructions+=25;goto B44c116;
case 0x44c11c:c.instructions+=24;goto B44c11c;
case 0x44c122:c.instructions+=23;goto B44c122;
case 0x44c128:c.instructions+=22;goto B44c128;
case 0x44c12e:c.instructions+=21;goto B44c12e;
case 0x44c131:c.instructions+=20;goto B44c131;
case 0x44c135:c.instructions+=19;goto B44c135;
case 0x44c139:c.instructions+=18;goto B44c139;
case 0x44c13d:c.instructions+=17;goto B44c13d;
case 0x44c141:c.instructions+=16;goto B44c141;
case 0x44c147:c.instructions+=15;goto B44c147;
case 0x44c149:c.instructions+=14;goto B44c149;
case 0x44c14f:c.instructions+=13;goto B44c14f;
case 0x44c155:c.instructions+=12;goto B44c155;
case 0x44c15b:c.instructions+=11;goto B44c15b;
case 0x44c15e:c.instructions+=10;goto B44c15e;
case 0x44c164:c.instructions+=9;goto B44c164;
case 0x44c16a:c.instructions+=8;goto B44c16a;
case 0x44c174:c.instructions+=7;goto B44c174;
case 0x44c17a:c.instructions+=6;goto B44c17a;
case 0x44c180:c.instructions+=5;goto B44c180;
case 0x44c183:c.instructions+=4;goto B44c183;
case 0x44c189:c.instructions+=3;goto B44c189;
case 0x44c18f:c.instructions+=2;goto B44c18f;
case 0x44c198:c.instructions+=1;goto B44c198;
case 0x44c19d:goto L44c19d;
case 0x44c19f:c.instructions+=4;goto B44c19f;
case 0x44c1a2:c.instructions+=3;goto B44c1a2;
case 0x44c1a4:c.instructions+=2;goto B44c1a4;
case 0x44c1a7:c.instructions+=1;goto B44c1a7;
case 0x44c1ac:goto L44c1ac;
case 0x44c1af:c.instructions+=2;goto B44c1af;
case 0x44c1b1:c.instructions+=1;goto B44c1b1;
case 0x44c1b3:goto L44c1b3;
case 0x44c1b5:c.instructions+=1;goto B44c1b5;
case 0x44c1b8:goto L44c1b8;
case 0x44c1bb:c.instructions+=5;goto B44c1bb;
case 0x44c1c1:c.instructions+=4;goto B44c1c1;
case 0x44c1c7:c.instructions+=3;goto B44c1c7;
case 0x44c1c9:c.instructions+=2;goto B44c1c9;
case 0x44c1cc:c.instructions+=1;goto B44c1cc;
case 0x44c1ce:goto L44c1ce;
case 0x44c1d7:goto L44c1d7;
case 0x44c1dd:c.instructions+=5;goto B44c1dd;
case 0x44c1e3:c.instructions+=4;goto B44c1e3;
case 0x44c1e9:c.instructions+=3;goto B44c1e9;
case 0x44c1eb:c.instructions+=2;goto B44c1eb;
case 0x44c1ee:c.instructions+=1;goto B44c1ee;
case 0x44c1f0:goto L44c1f0;
case 0x44c1f9:goto L44c1f9;
case 0x44c1ff:c.instructions+=1;goto B44c1ff;
case 0x44c201:goto L44c201;
case 0x44c207:c.instructions+=1;goto B44c207;
case 0x44c209:goto L44c209;
case 0x44c20c:c.instructions+=3;goto B44c20c;
case 0x44c212:c.instructions+=2;goto B44c212;
case 0x44c218:c.instructions+=1;goto B44c218;
case 0x44c21a:goto L44c21a;
case 0x44c21d:c.instructions+=1;goto B44c21d;
case 0x44c223:goto L44c223;
case 0x44c226:c.instructions+=8;goto B44c226;
case 0x44c227:c.instructions+=7;goto B44c227;
case 0x44c228:c.instructions+=6;goto B44c228;
case 0x44c22a:c.instructions+=5;goto B44c22a;
case 0x44c22b:c.instructions+=4;goto B44c22b;
case 0x44c232:c.instructions+=3;goto B44c232;
case 0x44c234:c.instructions+=2;goto B44c234;
case 0x44c235:c.instructions+=1;goto B44c235;
case 0x44c240:goto L44c240;
case 0x44c246:c.instructions+=1;goto B44c246;
case 0x44c250:goto L44c250;
case 0x44c252:c.instructions+=16;goto B44c252;
case 0x44c257:c.instructions+=15;goto B44c257;
case 0x44c25d:c.instructions+=14;goto B44c25d;
case 0x44c25e:c.instructions+=13;goto B44c25e;
case 0x44c265:c.instructions+=12;goto B44c265;
case 0x44c266:c.instructions+=11;goto B44c266;
case 0x44c267:c.instructions+=10;goto B44c267;
case 0x44c268:c.instructions+=9;goto B44c268;
case 0x44c26a:c.instructions+=8;goto B44c26a;
case 0x44c26e:c.instructions+=7;goto B44c26e;
case 0x44c274:c.instructions+=6;goto B44c274;
case 0x44c27a:c.instructions+=5;goto B44c27a;
case 0x44c27d:c.instructions+=4;goto B44c27d;
case 0x44c27f:c.instructions+=3;goto B44c27f;
case 0x44c281:c.instructions+=2;goto B44c281;
case 0x44c289:c.instructions+=1;goto B44c289;
case 0x44c28b:goto L44c28b;
case 0x44c291:goto L44c291;
case 0x44c297:c.instructions+=2;goto B44c297;
case 0x44c29a:c.instructions+=1;goto B44c29a;
case 0x44c29c:goto L44c29c;
case 0x44c2a2:goto L44c2a2;
case 0x44c2a5:c.instructions+=5;goto B44c2a5;
case 0x44c2ac:c.instructions+=4;goto B44c2ac;
case 0x44c2b2:c.instructions+=3;goto B44c2b2;
case 0x44c2b8:c.instructions+=2;goto B44c2b8;
case 0x44c2be:c.instructions+=1;goto B44c2be;
case 0x44c2c3:goto L44c2c3;
case 0x44c2c9:c.instructions+=2;goto B44c2c9;
case 0x44c2ce:c.instructions+=1;goto B44c2ce;
case 0x44c2d3:goto L44c2d3;
case 0x44c2d9:c.instructions+=2;goto B44c2d9;
case 0x44c2de:c.instructions+=1;goto B44c2de;
case 0x44c2e3:goto L44c2e3;
case 0x44c2e9:c.instructions+=2;goto B44c2e9;
case 0x44c2ed:c.instructions+=1;goto B44c2ed;
case 0x44c2f2:goto L44c2f2;
case 0x44c2f5:c.instructions+=3;goto B44c2f5;
case 0x44c2fd:c.instructions+=2;goto B44c2fd;
case 0x44c303:c.instructions+=1;goto B44c303;
case 0x44c305:goto L44c305;
case 0x44c308:c.instructions+=8;goto B44c308;
case 0x44c30b:c.instructions+=7;goto B44c30b;
case 0x44c30e:c.instructions+=6;goto B44c30e;
case 0x44c314:c.instructions+=5;goto B44c314;
case 0x44c317:c.instructions+=4;goto B44c317;
case 0x44c31d:c.instructions+=3;goto B44c31d;
case 0x44c31e:c.instructions+=2;goto B44c31e;
case 0x44c321:c.instructions+=1;goto B44c321;
case 0x44c326:goto L44c326;
case 0x44c32a:c.instructions+=3;goto B44c32a;
case 0x44c32b:c.instructions+=2;goto B44c32b;
case 0x44c32c:c.instructions+=1;goto B44c32c;
case 0x44c32e:goto L44c32e;
case 0x44c334:goto L44c334;
case 0x44c338:c.instructions+=3;goto B44c338;
case 0x44c33f:c.instructions+=2;goto B44c33f;
case 0x44c342:c.instructions+=1;goto B44c342;
case 0x44c350:goto L44c350;
case 0x44c351:c.instructions+=9;goto B44c351;
case 0x44c353:c.instructions+=8;goto B44c353;
case 0x44c356:c.instructions+=7;goto B44c356;
case 0x44c35c:c.instructions+=6;goto B44c35c;
case 0x44c35d:c.instructions+=5;goto B44c35d;
case 0x44c35e:c.instructions+=4;goto B44c35e;
case 0x44c360:c.instructions+=3;goto B44c360;
case 0x44c361:c.instructions+=2;goto B44c361;
case 0x44c366:c.instructions+=1;goto B44c366;
case 0x44c36b:goto L44c36b;
case 0x44c36d:c.instructions+=1;goto B44c36d;
case 0x44c373:goto L44c373;
case 0x44c379:c.instructions+=12;goto B44c379;
case 0x44c37f:c.instructions+=11;goto B44c37f;
case 0x44c383:c.instructions+=10;goto B44c383;
case 0x44c387:c.instructions+=9;goto B44c387;
case 0x44c38d:c.instructions+=8;goto B44c38d;
case 0x44c393:c.instructions+=7;goto B44c393;
case 0x44c399:c.instructions+=6;goto B44c399;
case 0x44c39b:c.instructions+=5;goto B44c39b;
case 0x44c39f:c.instructions+=4;goto B44c39f;
case 0x44c3a5:c.instructions+=3;goto B44c3a5;
case 0x44c3a7:c.instructions+=2;goto B44c3a7;
case 0x44c3aa:c.instructions+=1;goto B44c3aa;
case 0x44c3ac:goto L44c3ac;
case 0x44c3b0:c.instructions+=5;goto B44c3b0;
case 0x44c3b6:c.instructions+=4;goto B44c3b6;
case 0x44c3ba:c.instructions+=3;goto B44c3ba;
case 0x44c3bc:c.instructions+=2;goto B44c3bc;
case 0x44c3bf:c.instructions+=1;goto B44c3bf;
case 0x44c3c1:goto L44c3c1;
case 0x44c3c3:c.instructions+=2;goto B44c3c3;
case 0x44c3cb:c.instructions+=1;goto B44c3cb;
case 0x44c3cd:goto L44c3cd;
case 0x44c3d3:goto L44c3d3;
case 0x44c3d7:goto L44c3d7;
case 0x44c3dd:c.instructions+=7;goto B44c3dd;
case 0x44c3e8:c.instructions+=6;goto B44c3e8;
case 0x44c3ee:c.instructions+=5;goto B44c3ee;
case 0x44c3f9:c.instructions+=4;goto B44c3f9;
case 0x44c404:c.instructions+=3;goto B44c404;
case 0x44c406:c.instructions+=2;goto B44c406;
case 0x44c409:c.instructions+=1;goto B44c409;
case 0x44c40b:goto L44c40b;
case 0x44c411:c.instructions+=2;goto B44c411;
case 0x44c413:c.instructions+=1;goto B44c413;
case 0x44c415:goto L44c415;
case 0x44c41b:c.instructions+=5;goto B44c41b;
case 0x44c41c:c.instructions+=4;goto B44c41c;
case 0x44c420:c.instructions+=3;goto B44c420;
case 0x44c424:c.instructions+=2;goto B44c424;
case 0x44c428:c.instructions+=1;goto B44c428;
case 0x44c42a:goto L44c42a;
case 0x44c430:c.instructions+=3;goto B44c430;
case 0x44c433:c.instructions+=2;goto B44c433;
case 0x44c439:c.instructions+=1;goto B44c439;
case 0x44c43f:goto L44c43f;
case 0x44c445:c.instructions+=8;goto B44c445;
case 0x44c44b:c.instructions+=7;goto B44c44b;
case 0x44c44c:c.instructions+=6;goto B44c44c;
case 0x44c450:c.instructions+=5;goto B44c450;
case 0x44c454:c.instructions+=4;goto B44c454;
case 0x44c45a:c.instructions+=3;goto B44c45a;
case 0x44c45c:c.instructions+=2;goto B44c45c;
case 0x44c45f:c.instructions+=1;goto B44c45f;
case 0x44c461:goto L44c461;
case 0x44c467:c.instructions+=1;goto B44c467;
case 0x44c469:goto L44c469;
case 0x44c46b:goto L44c46b;
case 0x44c471:c.instructions+=5;goto B44c471;
case 0x44c472:c.instructions+=4;goto B44c472;
case 0x44c476:c.instructions+=3;goto B44c476;
case 0x44c477:c.instructions+=2;goto B44c477;
case 0x44c47d:c.instructions+=1;goto B44c47d;
case 0x44c482:goto L44c482;
case 0x44c487:goto L44c487;
case 0x44c48d:c.instructions+=2;goto B44c48d;
case 0x44c48f:c.instructions+=1;goto B44c48f;
case 0x44c495:goto L44c495;
case 0x44c49b:c.instructions+=36;goto B44c49b;
case 0x44c4a1:c.instructions+=35;goto B44c4a1;
case 0x44c4a5:c.instructions+=34;goto B44c4a5;
case 0x44c4ab:c.instructions+=33;goto B44c4ab;
case 0x44c4b1:c.instructions+=32;goto B44c4b1;
case 0x44c4b5:c.instructions+=31;goto B44c4b5;
case 0x44c4bb:c.instructions+=30;goto B44c4bb;
case 0x44c4c1:c.instructions+=29;goto B44c4c1;
case 0x44c4c5:c.instructions+=28;goto B44c4c5;
case 0x44c4c8:c.instructions+=27;goto B44c4c8;
case 0x44c4ce:c.instructions+=26;goto B44c4ce;
case 0x44c4d1:c.instructions+=25;goto B44c4d1;
case 0x44c4d7:c.instructions+=24;goto B44c4d7;
case 0x44c4da:c.instructions+=23;goto B44c4da;
case 0x44c4e0:c.instructions+=22;goto B44c4e0;
case 0x44c4e2:c.instructions+=21;goto B44c4e2;
case 0x44c4e6:c.instructions+=20;goto B44c4e6;
case 0x44c4e8:c.instructions+=19;goto B44c4e8;
case 0x44c4ec:c.instructions+=18;goto B44c4ec;
case 0x44c4ee:c.instructions+=17;goto B44c4ee;
case 0x44c4f0:c.instructions+=16;goto B44c4f0;
case 0x44c4f4:c.instructions+=15;goto B44c4f4;
case 0x44c4f6:c.instructions+=14;goto B44c4f6;
case 0x44c4fa:c.instructions+=13;goto B44c4fa;
case 0x44c4fe:c.instructions+=12;goto B44c4fe;
case 0x44c502:c.instructions+=11;goto B44c502;
case 0x44c506:c.instructions+=10;goto B44c506;
case 0x44c508:c.instructions+=9;goto B44c508;
case 0x44c50c:c.instructions+=8;goto B44c50c;
case 0x44c510:c.instructions+=7;goto B44c510;
case 0x44c512:c.instructions+=6;goto B44c512;
case 0x44c514:c.instructions+=5;goto B44c514;
case 0x44c516:c.instructions+=4;goto B44c516;
case 0x44c51c:c.instructions+=3;goto B44c51c;
case 0x44c51e:c.instructions+=2;goto B44c51e;
case 0x44c521:c.instructions+=1;goto B44c521;
case 0x44c523:goto L44c523;
case 0x44c525:c.instructions+=2;goto B44c525;
case 0x44c52b:c.instructions+=1;goto B44c52b;
case 0x44c52d:goto L44c52d;
case 0x44c533:c.instructions+=3;goto B44c533;
case 0x44c535:c.instructions+=2;goto B44c535;
case 0x44c538:c.instructions+=1;goto B44c538;
case 0x44c53a:goto L44c53a;
case 0x44c53c:c.instructions+=1;goto B44c53c;
case 0x44c542:goto L44c542;
case 0x44c546:c.instructions+=23;goto B44c546;
case 0x44c54c:c.instructions+=22;goto B44c54c;
case 0x44c54e:c.instructions+=21;goto B44c54e;
case 0x44c54f:c.instructions+=20;goto B44c54f;
case 0x44c553:c.instructions+=19;goto B44c553;
case 0x44c554:c.instructions+=18;goto B44c554;
case 0x44c558:c.instructions+=17;goto B44c558;
case 0x44c55c:c.instructions+=16;goto B44c55c;
case 0x44c560:c.instructions+=15;goto B44c560;
case 0x44c561:c.instructions+=14;goto B44c561;
case 0x44c563:c.instructions+=13;goto B44c563;
case 0x44c567:c.instructions+=12;goto B44c567;
case 0x44c56b:c.instructions+=11;goto B44c56b;
case 0x44c56f:c.instructions+=10;goto B44c56f;
case 0x44c575:c.instructions+=9;goto B44c575;
case 0x44c579:c.instructions+=8;goto B44c579;
case 0x44c57f:c.instructions+=7;goto B44c57f;
case 0x44c583:c.instructions+=6;goto B44c583;
case 0x44c587:c.instructions+=5;goto B44c587;
case 0x44c58d:c.instructions+=4;goto B44c58d;
case 0x44c58f:c.instructions+=3;goto B44c58f;
case 0x44c593:c.instructions+=2;goto B44c593;
case 0x44c595:c.instructions+=1;goto B44c595;
case 0x44c59a:goto L44c59a;
case 0x44c59e:c.instructions+=9;goto B44c59e;
case 0x44c5a1:c.instructions+=8;goto B44c5a1;
case 0x44c5a5:c.instructions+=7;goto B44c5a5;
case 0x44c5a9:c.instructions+=6;goto B44c5a9;
case 0x44c5ad:c.instructions+=5;goto B44c5ad;
case 0x44c5b1:c.instructions+=4;goto B44c5b1;
case 0x44c5b5:c.instructions+=3;goto B44c5b5;
case 0x44c5b9:c.instructions+=2;goto B44c5b9;
case 0x44c5bd:c.instructions+=1;goto B44c5bd;
case 0x44c5bf:goto L44c5bf;
case 0x44c5c2:c.instructions+=7;goto B44c5c2;
case 0x44c5c5:c.instructions+=6;goto B44c5c5;
case 0x44c5c8:c.instructions+=5;goto B44c5c8;
case 0x44c5cb:c.instructions+=4;goto B44c5cb;
case 0x44c5ce:c.instructions+=3;goto B44c5ce;
case 0x44c5d0:c.instructions+=2;goto B44c5d0;
case 0x44c5d4:c.instructions+=1;goto B44c5d4;
case 0x44c5d8:goto L44c5d8;
case 0x44c5de:c.instructions+=3;goto B44c5de;
case 0x44c5e2:c.instructions+=2;goto B44c5e2;
case 0x44c5e4:c.instructions+=1;goto B44c5e4;
case 0x44c5e6:goto L44c5e6;
case 0x44c5ec:c.instructions+=5;goto B44c5ec;
case 0x44c5f0:c.instructions+=4;goto B44c5f0;
case 0x44c5f1:c.instructions+=3;goto B44c5f1;
case 0x44c5f4:c.instructions+=2;goto B44c5f4;
case 0x44c5f5:c.instructions+=1;goto B44c5f5;
case 0x44c5fa:goto L44c5fa;
case 0x44c600:c.instructions+=4;goto B44c600;
case 0x44c603:c.instructions+=3;goto B44c603;
case 0x44c605:c.instructions+=2;goto B44c605;
case 0x44c608:c.instructions+=1;goto B44c608;
case 0x44c60a:goto L44c60a;
case 0x44c614:goto L44c614;
case 0x44c61a:goto L44c61a;
case 0x44c61e:c.instructions+=8;goto B44c61e;
case 0x44c621:c.instructions+=7;goto B44c621;
case 0x44c624:c.instructions+=6;goto B44c624;
case 0x44c627:c.instructions+=5;goto B44c627;
case 0x44c629:c.instructions+=4;goto B44c629;
case 0x44c62f:c.instructions+=3;goto B44c62f;
case 0x44c631:c.instructions+=2;goto B44c631;
case 0x44c634:c.instructions+=1;goto B44c634;
case 0x44c636:goto L44c636;
case 0x44c638:c.instructions+=2;goto B44c638;
case 0x44c63e:c.instructions+=1;goto B44c63e;
case 0x44c640:goto L44c640;
case 0x44c646:c.instructions+=3;goto B44c646;
case 0x44c648:c.instructions+=2;goto B44c648;
case 0x44c64b:c.instructions+=1;goto B44c64b;
case 0x44c64d:goto L44c64d;
case 0x44c64f:c.instructions+=1;goto B44c64f;
case 0x44c655:goto L44c655;
case 0x44c65b:c.instructions+=6;goto B44c65b;
case 0x44c65c:c.instructions+=5;goto B44c65c;
case 0x44c663:c.instructions+=4;goto B44c663;
case 0x44c669:c.instructions+=3;goto B44c669;
case 0x44c66c:c.instructions+=2;goto B44c66c;
case 0x44c66d:c.instructions+=1;goto B44c66d;
case 0x44c672:goto L44c672;
case 0x44c678:c.instructions+=27;goto B44c678;
case 0x44c67b:c.instructions+=26;goto B44c67b;
case 0x44c67e:c.instructions+=25;goto B44c67e;
case 0x44c682:c.instructions+=24;goto B44c682;
case 0x44c685:c.instructions+=23;goto B44c685;
case 0x44c689:c.instructions+=22;goto B44c689;
case 0x44c68d:c.instructions+=21;goto B44c68d;
case 0x44c68f:c.instructions+=20;goto B44c68f;
case 0x44c693:c.instructions+=19;goto B44c693;
case 0x44c695:c.instructions+=18;goto B44c695;
case 0x44c699:c.instructions+=17;goto B44c699;
case 0x44c69d:c.instructions+=16;goto B44c69d;
case 0x44c69f:c.instructions+=15;goto B44c69f;
case 0x44c6a1:c.instructions+=14;goto B44c6a1;
case 0x44c6a3:c.instructions+=13;goto B44c6a3;
case 0x44c6a5:c.instructions+=12;goto B44c6a5;
case 0x44c6a7:c.instructions+=11;goto B44c6a7;
case 0x44c6ab:c.instructions+=10;goto B44c6ab;
case 0x44c6af:c.instructions+=9;goto B44c6af;
case 0x44c6b1:c.instructions+=8;goto B44c6b1;
case 0x44c6b3:c.instructions+=7;goto B44c6b3;
case 0x44c6b5:c.instructions+=6;goto B44c6b5;
case 0x44c6b7:c.instructions+=5;goto B44c6b7;
case 0x44c6bb:c.instructions+=4;goto B44c6bb;
case 0x44c6c1:c.instructions+=3;goto B44c6c1;
case 0x44c6c3:c.instructions+=2;goto B44c6c3;
case 0x44c6c6:c.instructions+=1;goto B44c6c6;
case 0x44c6c8:goto L44c6c8;
case 0x44c6d0:goto L44c6d0;
case 0x44c6d3:c.instructions+=2;goto B44c6d3;
case 0x44c6d5:c.instructions+=1;goto B44c6d5;
case 0x44c6d7:goto L44c6d7;
case 0x44c6dd:c.instructions+=6;goto B44c6dd;
case 0x44c6e1:c.instructions+=5;goto B44c6e1;
case 0x44c6e8:c.instructions+=4;goto B44c6e8;
case 0x44c6e9:c.instructions+=3;goto B44c6e9;
case 0x44c6ec:c.instructions+=2;goto B44c6ec;
case 0x44c6ed:c.instructions+=1;goto B44c6ed;
case 0x44c6f2:goto L44c6f2;
case 0x44c6f4:c.instructions+=4;goto B44c6f4;
case 0x44c6f7:c.instructions+=3;goto B44c6f7;
case 0x44c6fa:c.instructions+=2;goto B44c6fa;
case 0x44c6fc:c.instructions+=1;goto B44c6fc;
case 0x44c6fe:goto L44c6fe;
case 0x44c705:c.instructions+=2;goto B44c705;
case 0x44c70b:c.instructions+=1;goto B44c70b;
case 0x44c710:goto L44c710;
case 0x44c712:goto L44c712;
case 0x44c717:c.instructions+=2;goto B44c717;
case 0x44c719:c.instructions+=1;goto B44c719;
case 0x44c71b:goto L44c71b;
case 0x44c71e:c.instructions+=1;goto B44c71e;
case 0x44c725:goto L44c725;
case 0x44c72b:c.instructions+=12;goto B44c72b;
case 0x44c731:c.instructions+=11;goto B44c731;
case 0x44c737:c.instructions+=10;goto B44c737;
case 0x44c738:c.instructions+=9;goto B44c738;
case 0x44c73c:c.instructions+=8;goto B44c73c;
case 0x44c742:c.instructions+=7;goto B44c742;
case 0x44c748:c.instructions+=6;goto B44c748;
case 0x44c74c:c.instructions+=5;goto B44c74c;
case 0x44c750:c.instructions+=4;goto B44c750;
case 0x44c754:c.instructions+=3;goto B44c754;
case 0x44c756:c.instructions+=2;goto B44c756;
case 0x44c759:c.instructions+=1;goto B44c759;
case 0x44c75b:goto L44c75b;
case 0x44c75f:c.instructions+=1;goto B44c75f;
case 0x44c765:goto L44c765;
case 0x44c76b:c.instructions+=5;goto B44c76b;
case 0x44c76c:c.instructions+=4;goto B44c76c;
case 0x44c773:c.instructions+=3;goto B44c773;
case 0x44c774:c.instructions+=2;goto B44c774;
case 0x44c77a:c.instructions+=1;goto B44c77a;
case 0x44c77f:goto L44c77f;
case 0x44c785:c.instructions+=16;goto B44c785;
case 0x44c788:c.instructions+=15;goto B44c788;
case 0x44c78b:c.instructions+=14;goto B44c78b;
case 0x44c78e:c.instructions+=13;goto B44c78e;
case 0x44c790:c.instructions+=12;goto B44c790;
case 0x44c793:c.instructions+=11;goto B44c793;
case 0x44c795:c.instructions+=10;goto B44c795;
case 0x44c798:c.instructions+=9;goto B44c798;
case 0x44c79b:c.instructions+=8;goto B44c79b;
case 0x44c79d:c.instructions+=7;goto B44c79d;
case 0x44c7a0:c.instructions+=6;goto B44c7a0;
case 0x44c7a6:c.instructions+=5;goto B44c7a6;
case 0x44c7ac:c.instructions+=4;goto B44c7ac;
case 0x44c7ad:c.instructions+=3;goto B44c7ad;
case 0x44c7af:c.instructions+=2;goto B44c7af;
case 0x44c7b2:c.instructions+=1;goto B44c7b2;
case 0x44c7b4:goto L44c7b4;
case 0x44c7b9:goto L44c7b9;
case 0x44c7bd:c.instructions+=2;goto B44c7bd;
case 0x44c7be:c.instructions+=1;goto B44c7be;
case 0x44c7c3:goto L44c7c3;
case 0x44c7c7:c.instructions+=2;goto B44c7c7;
case 0x44c7cd:c.instructions+=1;goto B44c7cd;
case 0x44c7cf:goto L44c7cf;
case 0x44c7d5:c.instructions+=2;goto B44c7d5;
case 0x44c7d7:c.instructions+=1;goto B44c7d7;
case 0x44c7d9:goto L44c7d9;
case 0x44c7df:c.instructions+=5;goto B44c7df;
case 0x44c7e5:c.instructions+=4;goto B44c7e5;
case 0x44c7e9:c.instructions+=3;goto B44c7e9;
case 0x44c7ef:c.instructions+=2;goto B44c7ef;
case 0x44c7f3:c.instructions+=1;goto B44c7f3;
case 0x44c7f8:goto L44c7f8;
case 0x44c7f9:c.instructions+=2;goto B44c7f9;
case 0x44c7fd:c.instructions+=1;goto B44c7fd;
case 0x44c802:goto L44c802;
case 0x44c806:c.instructions+=2;goto B44c806;
case 0x44c80a:c.instructions+=1;goto B44c80a;
case 0x44c80c:goto L44c80c;
case 0x44c811:goto L44c811;
case 0x44c815:c.instructions+=2;goto B44c815;
case 0x44c816:c.instructions+=1;goto B44c816;
case 0x44c81b:goto L44c81b;
case 0x44c81f:c.instructions+=1;goto B44c81f;
case 0x44c825:goto L44c825;
case 0x44c829:c.instructions+=10;goto B44c829;
case 0x44c82c:c.instructions+=9;goto B44c82c;
case 0x44c82d:c.instructions+=8;goto B44c82d;
case 0x44c834:c.instructions+=7;goto B44c834;
case 0x44c837:c.instructions+=6;goto B44c837;
case 0x44c83a:c.instructions+=5;goto B44c83a;
case 0x44c840:c.instructions+=4;goto B44c840;
case 0x44c846:c.instructions+=3;goto B44c846;
case 0x44c848:c.instructions+=2;goto B44c848;
case 0x44c84b:c.instructions+=1;goto B44c84b;
case 0x44c84d:goto L44c84d;
case 0x44c852:goto L44c852;
case 0x44c856:c.instructions+=2;goto B44c856;
case 0x44c857:c.instructions+=1;goto B44c857;
case 0x44c85c:goto L44c85c;
case 0x44c860:c.instructions+=2;goto B44c860;
case 0x44c866:c.instructions+=1;goto B44c866;
case 0x44c868:goto L44c868;
case 0x44c86e:c.instructions+=2;goto B44c86e;
case 0x44c870:c.instructions+=1;goto B44c870;
case 0x44c872:goto L44c872;
case 0x44c878:c.instructions+=5;goto B44c878;
case 0x44c87e:c.instructions+=4;goto B44c87e;
case 0x44c882:c.instructions+=3;goto B44c882;
case 0x44c888:c.instructions+=2;goto B44c888;
case 0x44c88c:c.instructions+=1;goto B44c88c;
case 0x44c891:goto L44c891;
case 0x44c892:c.instructions+=2;goto B44c892;
case 0x44c896:c.instructions+=1;goto B44c896;
case 0x44c89b:goto L44c89b;
case 0x44c89f:c.instructions+=2;goto B44c89f;
case 0x44c8a3:c.instructions+=1;goto B44c8a3;
case 0x44c8a5:goto L44c8a5;
case 0x44c8aa:goto L44c8aa;
case 0x44c8ae:c.instructions+=2;goto B44c8ae;
case 0x44c8af:c.instructions+=1;goto B44c8af;
case 0x44c8b4:goto L44c8b4;
case 0x44c8b8:c.instructions+=1;goto B44c8b8;
case 0x44c8be:goto L44c8be;
case 0x44c8c2:c.instructions+=21;goto B44c8c2;
case 0x44c8c5:c.instructions+=20;goto B44c8c5;
case 0x44c8cc:c.instructions+=19;goto B44c8cc;
case 0x44c8cd:c.instructions+=18;goto B44c8cd;
case 0x44c8d1:c.instructions+=17;goto B44c8d1;
case 0x44c8d5:c.instructions+=16;goto B44c8d5;
case 0x44c8db:c.instructions+=15;goto B44c8db;
case 0x44c8dc:c.instructions+=14;goto B44c8dc;
case 0x44c8e0:c.instructions+=13;goto B44c8e0;
case 0x44c8e4:c.instructions+=12;goto B44c8e4;
case 0x44c8e5:c.instructions+=11;goto B44c8e5;
case 0x44c8e9:c.instructions+=10;goto B44c8e9;
case 0x44c8eb:c.instructions+=9;goto B44c8eb;
case 0x44c8ef:c.instructions+=8;goto B44c8ef;
case 0x44c8f3:c.instructions+=7;goto B44c8f3;
case 0x44c8f5:c.instructions+=6;goto B44c8f5;
case 0x44c8f9:c.instructions+=5;goto B44c8f9;
case 0x44c8fd:c.instructions+=4;goto B44c8fd;
case 0x44c8ff:c.instructions+=3;goto B44c8ff;
case 0x44c903:c.instructions+=2;goto B44c903;
case 0x44c905:c.instructions+=1;goto B44c905;
case 0x44c90a:goto L44c90a;
case 0x44c911:c.instructions+=23;goto B44c911;
case 0x44c914:c.instructions+=22;goto B44c914;
case 0x44c918:c.instructions+=21;goto B44c918;
case 0x44c91c:c.instructions+=20;goto B44c91c;
case 0x44c91e:c.instructions+=19;goto B44c91e;
case 0x44c922:c.instructions+=18;goto B44c922;
case 0x44c926:c.instructions+=17;goto B44c926;
case 0x44c928:c.instructions+=16;goto B44c928;
case 0x44c92c:c.instructions+=15;goto B44c92c;
case 0x44c930:c.instructions+=14;goto B44c930;
case 0x44c932:c.instructions+=13;goto B44c932;
case 0x44c936:c.instructions+=12;goto B44c936;
case 0x44c938:c.instructions+=11;goto B44c938;
case 0x44c93c:c.instructions+=10;goto B44c93c;
case 0x44c93e:c.instructions+=9;goto B44c93e;
case 0x44c940:c.instructions+=8;goto B44c940;
case 0x44c944:c.instructions+=7;goto B44c944;
case 0x44c947:c.instructions+=6;goto B44c947;
case 0x44c94a:c.instructions+=5;goto B44c94a;
case 0x44c950:c.instructions+=4;goto B44c950;
case 0x44c956:c.instructions+=3;goto B44c956;
case 0x44c958:c.instructions+=2;goto B44c958;
case 0x44c95b:c.instructions+=1;goto B44c95b;
case 0x44c95d:goto L44c95d;
case 0x44c963:c.instructions+=1;goto B44c963;
case 0x44c965:goto L44c965;
case 0x44c96b:goto L44c96b;
case 0x44c971:c.instructions+=4;goto B44c971;
case 0x44c977:c.instructions+=3;goto B44c977;
case 0x44c979:c.instructions+=2;goto B44c979;
case 0x44c97c:c.instructions+=1;goto B44c97c;
case 0x44c97e:goto L44c97e;
case 0x44c984:c.instructions+=1;goto B44c984;
case 0x44c986:goto L44c986;
case 0x44c98c:goto L44c98c;
case 0x44c992:c.instructions+=4;goto B44c992;
case 0x44c998:c.instructions+=3;goto B44c998;
case 0x44c99a:c.instructions+=2;goto B44c99a;
case 0x44c99d:c.instructions+=1;goto B44c99d;
case 0x44c99f:goto L44c99f;
case 0x44c9a5:c.instructions+=1;goto B44c9a5;
case 0x44c9a7:goto L44c9a7;
case 0x44c9ad:goto L44c9ad;
case 0x44c9af:c.instructions+=56;goto B44c9af;
case 0x44c9b5:c.instructions+=55;goto B44c9b5;
case 0x44c9bb:c.instructions+=54;goto B44c9bb;
case 0x44c9c0:c.instructions+=53;goto B44c9c0;
case 0x44c9c2:c.instructions+=52;goto B44c9c2;
case 0x44c9c6:c.instructions+=51;goto B44c9c6;
case 0x44c9c9:c.instructions+=50;goto B44c9c9;
case 0x44c9ca:c.instructions+=49;goto B44c9ca;
case 0x44c9cc:c.instructions+=48;goto B44c9cc;
case 0x44c9ce:c.instructions+=47;goto B44c9ce;
case 0x44c9d0:c.instructions+=46;goto B44c9d0;
case 0x44c9d2:c.instructions+=45;goto B44c9d2;
case 0x44c9d5:c.instructions+=44;goto B44c9d5;
case 0x44c9d9:c.instructions+=43;goto B44c9d9;
case 0x44c9db:c.instructions+=42;goto B44c9db;
case 0x44c9de:c.instructions+=41;goto B44c9de;
case 0x44c9e0:c.instructions+=40;goto B44c9e0;
case 0x44c9e3:c.instructions+=39;goto B44c9e3;
case 0x44c9e5:c.instructions+=38;goto B44c9e5;
case 0x44c9e7:c.instructions+=37;goto B44c9e7;
case 0x44c9ea:c.instructions+=36;goto B44c9ea;
case 0x44c9ec:c.instructions+=35;goto B44c9ec;
case 0x44c9ef:c.instructions+=34;goto B44c9ef;
case 0x44c9f3:c.instructions+=33;goto B44c9f3;
case 0x44c9f7:c.instructions+=32;goto B44c9f7;
case 0x44c9fb:c.instructions+=31;goto B44c9fb;
case 0x44c9fe:c.instructions+=30;goto B44c9fe;
case 0x44ca00:c.instructions+=29;goto B44ca00;
case 0x44ca03:c.instructions+=28;goto B44ca03;
case 0x44ca05:c.instructions+=27;goto B44ca05;
case 0x44ca07:c.instructions+=26;goto B44ca07;
case 0x44ca0a:c.instructions+=25;goto B44ca0a;
case 0x44ca0c:c.instructions+=24;goto B44ca0c;
case 0x44ca0f:c.instructions+=23;goto B44ca0f;
case 0x44ca13:c.instructions+=22;goto B44ca13;
case 0x44ca17:c.instructions+=21;goto B44ca17;
case 0x44ca18:c.instructions+=20;goto B44ca18;
case 0x44ca1a:c.instructions+=19;goto B44ca1a;
case 0x44ca1e:c.instructions+=18;goto B44ca1e;
case 0x44ca20:c.instructions+=17;goto B44ca20;
case 0x44ca22:c.instructions+=16;goto B44ca22;
case 0x44ca26:c.instructions+=15;goto B44ca26;
case 0x44ca29:c.instructions+=14;goto B44ca29;
case 0x44ca2c:c.instructions+=13;goto B44ca2c;
case 0x44ca30:c.instructions+=12;goto B44ca30;
case 0x44ca33:c.instructions+=11;goto B44ca33;
case 0x44ca36:c.instructions+=10;goto B44ca36;
case 0x44ca38:c.instructions+=9;goto B44ca38;
case 0x44ca3c:c.instructions+=8;goto B44ca3c;
case 0x44ca40:c.instructions+=7;goto B44ca40;
case 0x44ca43:c.instructions+=6;goto B44ca43;
case 0x44ca47:c.instructions+=5;goto B44ca47;
case 0x44ca4b:c.instructions+=4;goto B44ca4b;
case 0x44ca4e:c.instructions+=3;goto B44ca4e;
case 0x44ca52:c.instructions+=2;goto B44ca52;
case 0x44ca56:c.instructions+=1;goto B44ca56;
case 0x44ca5b:goto L44ca5b;
case 0x44ca5e:c.instructions+=8;goto B44ca5e;
case 0x44ca61:c.instructions+=7;goto B44ca61;
case 0x44ca62:c.instructions+=6;goto B44ca62;
case 0x44ca65:c.instructions+=5;goto B44ca65;
case 0x44ca66:c.instructions+=4;goto B44ca66;
case 0x44ca6a:c.instructions+=3;goto B44ca6a;
case 0x44ca6b:c.instructions+=2;goto B44ca6b;
case 0x44ca6d:c.instructions+=1;goto B44ca6d;
case 0x44ca72:goto L44ca72;
case 0x44ca74:c.instructions+=45;goto B44ca74;
case 0x44ca78:c.instructions+=44;goto B44ca78;
case 0x44ca7a:c.instructions+=43;goto B44ca7a;
case 0x44ca7d:c.instructions+=42;goto B44ca7d;
case 0x44ca81:c.instructions+=41;goto B44ca81;
case 0x44ca84:c.instructions+=40;goto B44ca84;
case 0x44ca87:c.instructions+=39;goto B44ca87;
case 0x44ca8b:c.instructions+=38;goto B44ca8b;
case 0x44ca8e:c.instructions+=37;goto B44ca8e;
case 0x44ca91:c.instructions+=36;goto B44ca91;
case 0x44ca94:c.instructions+=35;goto B44ca94;
case 0x44ca9b:c.instructions+=34;goto B44ca9b;
case 0x44ca9d:c.instructions+=33;goto B44ca9d;
case 0x44ca9f:c.instructions+=32;goto B44ca9f;
case 0x44caa1:c.instructions+=31;goto B44caa1;
case 0x44caa3:c.instructions+=30;goto B44caa3;
case 0x44caa6:c.instructions+=29;goto B44caa6;
case 0x44caa9:c.instructions+=28;goto B44caa9;
case 0x44caac:c.instructions+=27;goto B44caac;
case 0x44caaf:c.instructions+=26;goto B44caaf;
case 0x44cab3:c.instructions+=25;goto B44cab3;
case 0x44cab5:c.instructions+=24;goto B44cab5;
case 0x44cab9:c.instructions+=23;goto B44cab9;
case 0x44cabc:c.instructions+=22;goto B44cabc;
case 0x44cac0:c.instructions+=21;goto B44cac0;
case 0x44cac4:c.instructions+=20;goto B44cac4;
case 0x44cac7:c.instructions+=19;goto B44cac7;
case 0x44cacb:c.instructions+=18;goto B44cacb;
case 0x44cacf:c.instructions+=17;goto B44cacf;
case 0x44cad3:c.instructions+=16;goto B44cad3;
case 0x44cad7:c.instructions+=15;goto B44cad7;
case 0x44cadb:c.instructions+=14;goto B44cadb;
case 0x44cadf:c.instructions+=13;goto B44cadf;
case 0x44cae3:c.instructions+=12;goto B44cae3;
case 0x44cae7:c.instructions+=11;goto B44cae7;
case 0x44caeb:c.instructions+=10;goto B44caeb;
case 0x44caef:c.instructions+=9;goto B44caef;
case 0x44caf1:c.instructions+=8;goto B44caf1;
case 0x44caf3:c.instructions+=7;goto B44caf3;
case 0x44caf6:c.instructions+=6;goto B44caf6;
case 0x44caf9:c.instructions+=5;goto B44caf9;
case 0x44caff:c.instructions+=4;goto B44caff;
case 0x44cb00:c.instructions+=3;goto B44cb00;
case 0x44cb01:c.instructions+=2;goto B44cb01;
case 0x44cb07:c.instructions+=1;goto B44cb07;
case 0x44cb0c:goto L44cb0c;
case 0x44cb13:c.instructions+=1;goto B44cb13;
case 0x44cb18:goto L44cb18;
case 0x44cb1c:c.instructions+=6;goto B44cb1c;
case 0x44cb1d:c.instructions+=5;goto B44cb1d;
case 0x44cb1e:c.instructions+=4;goto B44cb1e;
case 0x44cb1f:c.instructions+=3;goto B44cb1f;
case 0x44cb26:c.instructions+=2;goto B44cb26;
case 0x44cb27:c.instructions+=1;goto B44cb27;
case 0x44cb2c:goto L44cb2c;
case 0x44cb33:c.instructions+=7;goto B44cb33;
case 0x44cb34:c.instructions+=6;goto B44cb34;
case 0x44cb35:c.instructions+=5;goto B44cb35;
case 0x44cb39:c.instructions+=4;goto B44cb39;
case 0x44cb3a:c.instructions+=3;goto B44cb3a;
case 0x44cb41:c.instructions+=2;goto B44cb41;
case 0x44cb42:c.instructions+=1;goto B44cb42;
case 0x44cb47:goto L44cb47;
case 0x44cb4d:c.instructions+=5;goto B44cb4d;
case 0x44cb51:c.instructions+=4;goto B44cb51;
case 0x44cb52:c.instructions+=3;goto B44cb52;
case 0x44cb55:c.instructions+=2;goto B44cb55;
case 0x44cb56:c.instructions+=1;goto B44cb56;
case 0x44cb5b:goto L44cb5b;
case 0x44cb5f:c.instructions+=4;goto B44cb5f;
case 0x44cb64:c.instructions+=3;goto B44cb64;
case 0x44cb67:c.instructions+=2;goto B44cb67;
case 0x44cb69:c.instructions+=1;goto B44cb69;
case 0x44cb6b:goto L44cb6b;
case 0x44cb6e:c.instructions+=2;goto B44cb6e;
case 0x44cb72:c.instructions+=1;goto B44cb72;
case 0x44cb78:goto L44cb78;
case 0x44cb7b:c.instructions+=12;goto B44cb7b;
case 0x44cb81:c.instructions+=11;goto B44cb81;
case 0x44cb86:c.instructions+=10;goto B44cb86;
case 0x44cb8c:c.instructions+=9;goto B44cb8c;
case 0x44cb92:c.instructions+=8;goto B44cb92;
case 0x44cb98:c.instructions+=7;goto B44cb98;
case 0x44cb9a:c.instructions+=6;goto B44cb9a;
case 0x44cba0:c.instructions+=5;goto B44cba0;
case 0x44cba6:c.instructions+=4;goto B44cba6;
case 0x44cba8:c.instructions+=3;goto B44cba8;
case 0x44cba9:c.instructions+=2;goto B44cba9;
case 0x44cbaa:c.instructions+=1;goto B44cbaa;
case 0x44cbaf:goto L44cbaf;
case 0x44cbb3:c.instructions+=6;goto B44cbb3;
case 0x44cbb5:c.instructions+=5;goto B44cbb5;
case 0x44cbb8:c.instructions+=4;goto B44cbb8;
case 0x44cbbe:c.instructions+=3;goto B44cbbe;
case 0x44cbc0:c.instructions+=2;goto B44cbc0;
case 0x44cbc3:c.instructions+=1;goto B44cbc3;
case 0x44cbc5:goto L44cbc5;
case 0x44cbc7:c.instructions+=1;goto B44cbc7;
case 0x44cbcd:goto L44cbcd;
case 0x44cbd3:c.instructions+=2;goto B44cbd3;
case 0x44cbd5:c.instructions+=1;goto B44cbd5;
case 0x44cbd7:goto L44cbd7;
case 0x44cbdc:c.instructions+=2;goto B44cbdc;
case 0x44cbde:c.instructions+=1;goto B44cbde;
case 0x44cbe0:goto L44cbe0;
case 0x44cbe2:c.instructions+=5;goto B44cbe2;
case 0x44cbe5:c.instructions+=4;goto B44cbe5;
case 0x44cbeb:c.instructions+=3;goto B44cbeb;
case 0x44cbf0:c.instructions+=2;goto B44cbf0;
case 0x44cbf2:c.instructions+=1;goto B44cbf2;
case 0x44cbf4:goto L44cbf4;
case 0x44cbf7:c.instructions+=3;goto B44cbf7;
case 0x44cbfd:c.instructions+=2;goto B44cbfd;
case 0x44cc03:c.instructions+=1;goto B44cc03;
case 0x44cc05:goto L44cc05;
case 0x44cc07:goto L44cc07;
case 0x44cc0d:c.instructions+=5;goto B44cc0d;
case 0x44cc10:c.instructions+=4;goto B44cc10;
case 0x44cc11:c.instructions+=3;goto B44cc11;
case 0x44cc18:c.instructions+=2;goto B44cc18;
case 0x44cc19:c.instructions+=1;goto B44cc19;
case 0x44cc1e:goto L44cc1e;
case 0x44cc1f:c.instructions+=5;goto B44cc1f;
case 0x44cc20:c.instructions+=4;goto B44cc20;
case 0x44cc21:c.instructions+=3;goto B44cc21;
case 0x44cc23:c.instructions+=2;goto B44cc23;
case 0x44cc24:c.instructions+=1;goto B44cc24;
case 0x44cc30:goto L44cc30;
case 0x44cc34:c.instructions+=7;goto B44cc34;
case 0x44cc35:c.instructions+=6;goto B44cc35;
case 0x44cc36:c.instructions+=5;goto B44cc36;
case 0x44cc37:c.instructions+=4;goto B44cc37;
case 0x44cc39:c.instructions+=3;goto B44cc39;
case 0x44cc3a:c.instructions+=2;goto B44cc3a;
case 0x44cc3c:c.instructions+=1;goto B44cc3c;
case 0x44cc41:goto L44cc41;
case 0x44cc47:c.instructions+=7;goto B44cc47;
case 0x44cc4e:c.instructions+=6;goto B44cc4e;
case 0x44cc51:c.instructions+=5;goto B44cc51;
case 0x44cc53:c.instructions+=4;goto B44cc53;
case 0x44cc56:c.instructions+=3;goto B44cc56;
case 0x44cc58:c.instructions+=2;goto B44cc58;
case 0x44cc5d:c.instructions+=1;goto B44cc5d;
case 0x44cc5f:goto L44cc5f;
case 0x44cc61:goto L44cc61;
case 0x44cc63:c.instructions+=77;goto B44cc63;
case 0x44cc69:c.instructions+=76;goto B44cc69;
case 0x44cc6c:c.instructions+=75;goto B44cc6c;
case 0x44cc6f:c.instructions+=74;goto B44cc6f;
case 0x44cc72:c.instructions+=73;goto B44cc72;
case 0x44cc78:c.instructions+=72;goto B44cc78;
case 0x44cc7a:c.instructions+=71;goto B44cc7a;
case 0x44cc80:c.instructions+=70;goto B44cc80;
case 0x44cc86:c.instructions+=69;goto B44cc86;
case 0x44cc89:c.instructions+=68;goto B44cc89;
case 0x44cc8c:c.instructions+=67;goto B44cc8c;
case 0x44cc8f:c.instructions+=66;goto B44cc8f;
case 0x44cc95:c.instructions+=65;goto B44cc95;
case 0x44cc97:c.instructions+=64;goto B44cc97;
case 0x44cc9d:c.instructions+=63;goto B44cc9d;
case 0x44cca3:c.instructions+=62;goto B44cca3;
case 0x44cca6:c.instructions+=61;goto B44cca6;
case 0x44ccac:c.instructions+=60;goto B44ccac;
case 0x44ccaf:c.instructions+=59;goto B44ccaf;
case 0x44ccb5:c.instructions+=58;goto B44ccb5;
case 0x44ccb8:c.instructions+=57;goto B44ccb8;
case 0x44ccbe:c.instructions+=56;goto B44ccbe;
case 0x44ccc0:c.instructions+=55;goto B44ccc0;
case 0x44ccc6:c.instructions+=54;goto B44ccc6;
case 0x44ccc9:c.instructions+=53;goto B44ccc9;
case 0x44cccc:c.instructions+=52;goto B44cccc;
case 0x44cccf:c.instructions+=51;goto B44cccf;
case 0x44ccd5:c.instructions+=50;goto B44ccd5;
case 0x44ccd7:c.instructions+=49;goto B44ccd7;
case 0x44ccdd:c.instructions+=48;goto B44ccdd;
case 0x44cce3:c.instructions+=47;goto B44cce3;
case 0x44cce6:c.instructions+=46;goto B44cce6;
case 0x44cce9:c.instructions+=45;goto B44cce9;
case 0x44ccec:c.instructions+=44;goto B44ccec;
case 0x44ccf2:c.instructions+=43;goto B44ccf2;
case 0x44ccf4:c.instructions+=42;goto B44ccf4;
case 0x44ccfa:c.instructions+=41;goto B44ccfa;
case 0x44cd00:c.instructions+=40;goto B44cd00;
case 0x44cd03:c.instructions+=39;goto B44cd03;
case 0x44cd09:c.instructions+=38;goto B44cd09;
case 0x44cd0c:c.instructions+=37;goto B44cd0c;
case 0x44cd12:c.instructions+=36;goto B44cd12;
case 0x44cd15:c.instructions+=35;goto B44cd15;
case 0x44cd1b:c.instructions+=34;goto B44cd1b;
case 0x44cd1d:c.instructions+=33;goto B44cd1d;
case 0x44cd23:c.instructions+=32;goto B44cd23;
case 0x44cd26:c.instructions+=31;goto B44cd26;
case 0x44cd29:c.instructions+=30;goto B44cd29;
case 0x44cd2c:c.instructions+=29;goto B44cd2c;
case 0x44cd32:c.instructions+=28;goto B44cd32;
case 0x44cd34:c.instructions+=27;goto B44cd34;
case 0x44cd3a:c.instructions+=26;goto B44cd3a;
case 0x44cd40:c.instructions+=25;goto B44cd40;
case 0x44cd43:c.instructions+=24;goto B44cd43;
case 0x44cd46:c.instructions+=23;goto B44cd46;
case 0x44cd49:c.instructions+=22;goto B44cd49;
case 0x44cd4f:c.instructions+=21;goto B44cd4f;
case 0x44cd51:c.instructions+=20;goto B44cd51;
case 0x44cd57:c.instructions+=19;goto B44cd57;
case 0x44cd5d:c.instructions+=18;goto B44cd5d;
case 0x44cd60:c.instructions+=17;goto B44cd60;
case 0x44cd66:c.instructions+=16;goto B44cd66;
case 0x44cd69:c.instructions+=15;goto B44cd69;
case 0x44cd6f:c.instructions+=14;goto B44cd6f;
case 0x44cd72:c.instructions+=13;goto B44cd72;
case 0x44cd77:c.instructions+=12;goto B44cd77;
case 0x44cd7d:c.instructions+=11;goto B44cd7d;
case 0x44cd83:c.instructions+=10;goto B44cd83;
case 0x44cd84:c.instructions+=9;goto B44cd84;
case 0x44cd8a:c.instructions+=8;goto B44cd8a;
case 0x44cd90:c.instructions+=7;goto B44cd90;
case 0x44cd96:c.instructions+=6;goto B44cd96;
case 0x44cd9c:c.instructions+=5;goto B44cd9c;
case 0x44cda2:c.instructions+=4;goto B44cda2;
case 0x44cda4:c.instructions+=3;goto B44cda4;
case 0x44cda5:c.instructions+=2;goto B44cda5;
case 0x44cda6:c.instructions+=1;goto B44cda6;
case 0x44cdb0:goto L44cdb0;
case 0x44cdb1:c.instructions+=5;goto B44cdb1;
case 0x44cdb3:c.instructions+=4;goto B44cdb3;
case 0x44cdb6:c.instructions+=3;goto B44cdb6;
case 0x44cdb8:c.instructions+=2;goto B44cdb8;
case 0x44cdbe:c.instructions+=1;goto B44cdbe;
case 0x44cdc0:goto L44cdc0;
case 0x44cdc3:c.instructions+=8;goto B44cdc3;
case 0x44cdca:c.instructions+=7;goto B44cdca;
case 0x44cdd0:c.instructions+=6;goto B44cdd0;
case 0x44cdd3:c.instructions+=5;goto B44cdd3;
case 0x44cdd9:c.instructions+=4;goto B44cdd9;
case 0x44cddc:c.instructions+=3;goto B44cddc;
case 0x44cddd:c.instructions+=2;goto B44cddd;
case 0x44cde0:c.instructions+=1;goto B44cde0;
case 0x44cde5:goto L44cde5;
case 0x44cde9:c.instructions+=2;goto B44cde9;
case 0x44cdea:c.instructions+=1;goto B44cdea;
case 0x44cdec:goto L44cdec;
case 0x44cdf2:goto L44cdf2;
case 0x44ce00:goto L44ce00;
case 0x44ce01:c.instructions+=10;goto B44ce01;
case 0x44ce03:c.instructions+=9;goto B44ce03;
case 0x44ce06:c.instructions+=8;goto B44ce06;
case 0x44ce09:c.instructions+=7;goto B44ce09;
case 0x44ce0a:c.instructions+=6;goto B44ce0a;
case 0x44ce0c:c.instructions+=5;goto B44ce0c;
case 0x44ce0f:c.instructions+=4;goto B44ce0f;
case 0x44ce12:c.instructions+=3;goto B44ce12;
case 0x44ce13:c.instructions+=2;goto B44ce13;
case 0x44ce19:c.instructions+=1;goto B44ce19;
case 0x44ce1f:goto L44ce1f;
case 0x44ce25:c.instructions+=15;goto B44ce25;
case 0x44ce2b:c.instructions+=14;goto B44ce2b;
case 0x44ce2d:c.instructions+=13;goto B44ce2d;
case 0x44ce33:c.instructions+=12;goto B44ce33;
case 0x44ce39:c.instructions+=11;goto B44ce39;
case 0x44ce3f:c.instructions+=10;goto B44ce3f;
case 0x44ce43:c.instructions+=9;goto B44ce43;
case 0x44ce49:c.instructions+=8;goto B44ce49;
case 0x44ce4f:c.instructions+=7;goto B44ce4f;
case 0x44ce55:c.instructions+=6;goto B44ce55;
case 0x44ce57:c.instructions+=5;goto B44ce57;
case 0x44ce5d:c.instructions+=4;goto B44ce5d;
case 0x44ce63:c.instructions+=3;goto B44ce63;
case 0x44ce68:c.instructions+=2;goto B44ce68;
case 0x44ce6a:c.instructions+=1;goto B44ce6a;
case 0x44ce70:goto L44ce70;
case 0x44ce76:c.instructions+=3;goto B44ce76;
case 0x44ce78:c.instructions+=2;goto B44ce78;
case 0x44ce7b:c.instructions+=1;goto B44ce7b;
case 0x44ce7d:goto L44ce7d;
case 0x44ce82:c.instructions+=1;goto B44ce82;
case 0x44ce88:goto L44ce88;
case 0x44ce8e:c.instructions+=4;goto B44ce8e;
case 0x44ce94:c.instructions+=3;goto B44ce94;
case 0x44ce96:c.instructions+=2;goto B44ce96;
case 0x44ce99:c.instructions+=1;goto B44ce99;
case 0x44ce9b:goto L44ce9b;
case 0x44cea1:c.instructions+=1;goto B44cea1;
case 0x44cea7:goto L44cea7;
case 0x44ceab:c.instructions+=4;goto B44ceab;
case 0x44ceb1:c.instructions+=3;goto B44ceb1;
case 0x44ceb3:c.instructions+=2;goto B44ceb3;
case 0x44ceb6:c.instructions+=1;goto B44ceb6;
case 0x44ceb8:goto L44ceb8;
case 0x44cebe:c.instructions+=1;goto B44cebe;
case 0x44cec4:goto L44cec4;
case 0x44ceca:c.instructions+=4;goto B44ceca;
case 0x44ced0:c.instructions+=3;goto B44ced0;
case 0x44ced2:c.instructions+=2;goto B44ced2;
case 0x44ced5:c.instructions+=1;goto B44ced5;
case 0x44cedb:goto L44cedb;
case 0x44cee0:c.instructions+=2;goto B44cee0;
case 0x44cee6:c.instructions+=1;goto B44cee6;
case 0x44ceeb:goto L44ceeb;
case 0x44ceed:c.instructions+=1;goto B44ceed;
case 0x44cef3:goto L44cef3;
case 0x44cef9:c.instructions+=10;goto B44cef9;
case 0x44cf01:c.instructions+=9;goto B44cf01;
case 0x44cf07:c.instructions+=8;goto B44cf07;
case 0x44cf0b:c.instructions+=7;goto B44cf0b;
case 0x44cf11:c.instructions+=6;goto B44cf11;
case 0x44cf15:c.instructions+=5;goto B44cf15;
case 0x44cf1b:c.instructions+=4;goto B44cf1b;
case 0x44cf21:c.instructions+=3;goto B44cf21;
case 0x44cf23:c.instructions+=2;goto B44cf23;
case 0x44cf26:c.instructions+=1;goto B44cf26;
case 0x44cf28:goto L44cf28;
case 0x44cf2c:c.instructions+=4;goto B44cf2c;
case 0x44cf32:c.instructions+=3;goto B44cf32;
case 0x44cf34:c.instructions+=2;goto B44cf34;
case 0x44cf37:c.instructions+=1;goto B44cf37;
case 0x44cf39:goto L44cf39;
case 0x44cf3d:c.instructions+=2;goto B44cf3d;
case 0x44cf43:c.instructions+=1;goto B44cf43;
case 0x44cf47:goto L44cf47;
case 0x44cf4b:c.instructions+=4;goto B44cf4b;
case 0x44cf51:c.instructions+=3;goto B44cf51;
case 0x44cf57:c.instructions+=2;goto B44cf57;
case 0x44cf5d:c.instructions+=1;goto B44cf5d;
case 0x44cf62:goto L44cf62;
case 0x44cf64:c.instructions+=9;goto B44cf64;
case 0x44cf69:c.instructions+=8;goto B44cf69;
case 0x44cf6b:c.instructions+=7;goto B44cf6b;
case 0x44cf6d:c.instructions+=6;goto B44cf6d;
case 0x44cf70:c.instructions+=5;goto B44cf70;
case 0x44cf72:c.instructions+=4;goto B44cf72;
case 0x44cf75:c.instructions+=3;goto B44cf75;
case 0x44cf77:c.instructions+=2;goto B44cf77;
case 0x44cf78:c.instructions+=1;goto B44cf78;
case 0x44cf7d:goto L44cf7d;
case 0x44cf80:c.instructions+=30;goto B44cf80;
case 0x44cf86:c.instructions+=29;goto B44cf86;
case 0x44cf8c:c.instructions+=28;goto B44cf8c;
case 0x44cf92:c.instructions+=27;goto B44cf92;
case 0x44cf94:c.instructions+=26;goto B44cf94;
case 0x44cf96:c.instructions+=25;goto B44cf96;
case 0x44cf9c:c.instructions+=24;goto B44cf9c;
case 0x44cf9e:c.instructions+=23;goto B44cf9e;
case 0x44cfa4:c.instructions+=22;goto B44cfa4;
case 0x44cfa6:c.instructions+=21;goto B44cfa6;
case 0x44cfa8:c.instructions+=20;goto B44cfa8;
case 0x44cfae:c.instructions+=19;goto B44cfae;
case 0x44cfb4:c.instructions+=18;goto B44cfb4;
case 0x44cfba:c.instructions+=17;goto B44cfba;
case 0x44cfc0:c.instructions+=16;goto B44cfc0;
case 0x44cfc6:c.instructions+=15;goto B44cfc6;
case 0x44cfcc:c.instructions+=14;goto B44cfcc;
case 0x44cfd0:c.instructions+=13;goto B44cfd0;
case 0x44cfd2:c.instructions+=12;goto B44cfd2;
case 0x44cfd4:c.instructions+=11;goto B44cfd4;
case 0x44cfd8:c.instructions+=10;goto B44cfd8;
case 0x44cfda:c.instructions+=9;goto B44cfda;
case 0x44cfde:c.instructions+=8;goto B44cfde;
case 0x44cfe2:c.instructions+=7;goto B44cfe2;
case 0x44cfe4:c.instructions+=6;goto B44cfe4;
case 0x44cfe8:c.instructions+=5;goto B44cfe8;
case 0x44cfee:c.instructions+=4;goto B44cfee;
case 0x44cff4:c.instructions+=3;goto B44cff4;
case 0x44cff8:c.instructions+=2;goto B44cff8;
case 0x44cffe:c.instructions+=1;goto B44cffe;
default:missing_instruction(c.pc);}
B44c003:L44c003:{c.instructions+=1;NFSU2_TR(0x44c003);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c01f;}}
}
B44c005:L44c005:{c.instructions+=4;NFSU2_TR(0x44c005);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44c008:{NFSU2_TR(0x44c008);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x280ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c00e:{NFSU2_TR(0x44c00e);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44c014:{NFSU2_TR(0x44c014);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c01f;}}
}
B44c016:L44c016:{c.instructions+=2;NFSU2_TR(0x44c016);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c019:{NFSU2_TR(0x44c019);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c01f:L44c01f:{c.instructions+=14;NFSU2_TR(0x44c01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c025:{NFSU2_TR(0x44c025);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c028:{NFSU2_TR(0x44c028);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44c02b:{NFSU2_TR(0x44c02b);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c02e:{NFSU2_TR(0x44c02e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B44c031:{NFSU2_TR(0x44c031);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44c033:{NFSU2_TR(0x44c033);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c036:{NFSU2_TR(0x44c036);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c039:{NFSU2_TR(0x44c039);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c03c:{NFSU2_TR(0x44c03c);
{u32 ea_=u32(u32(8554128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c042:{NFSU2_TR(0x44c042);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c048:{NFSU2_TR(0x44c048);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c04a:{NFSU2_TR(0x44c04a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c04d:{NFSU2_TR(0x44c04d);
if(r1(R+514)){{goto L44c08b;}}
}
B44c04f:L44c04f:{c.instructions+=5;NFSU2_TR(0x44c04f);
{u32 ea_=u32(u32(8554132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c055:{NFSU2_TR(0x44c055);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c05b:{NFSU2_TR(0x44c05b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c05d:{NFSU2_TR(0x44c05d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c060:{NFSU2_TR(0x44c060);
if(r1(R+514)){{goto L44c08b;}}
}
B44c062:L44c062:{c.instructions+=5;NFSU2_TR(0x44c062);
{u32 ea_=u32(u32(8554136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c068:{NFSU2_TR(0x44c068);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c06e:{NFSU2_TR(0x44c06e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c070:{NFSU2_TR(0x44c070);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c073:{NFSU2_TR(0x44c073);
if(r1(R+514)){{goto L44c08b;}}
}
B44c075:L44c075:{c.instructions+=6;NFSU2_TR(0x44c075);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c07b:{NFSU2_TR(0x44c07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44c081:{NFSU2_TR(0x44c081);
__builtin_memmove((R+4),(R+0),4);
}
B44c083:{NFSU2_TR(0x44c083);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c086:{NFSU2_TR(0x44c086);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c089:{NFSU2_TR(0x44c089);
{goto L44c0a5;}
}
B44c08b:L44c08b:{c.instructions+=6;NFSU2_TR(0x44c08b);
{u32 ea_=u32(u32(8554132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c091:{NFSU2_TR(0x44c091);
__builtin_memmove((R+8),gp(0x828690),4);
}
B44c097:{NFSU2_TR(0x44c097);
{u32 ea_=u32(u32(8554136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c09d:{NFSU2_TR(0x44c09d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44c09f:{NFSU2_TR(0x44c09f);
{u32 ea_=u32(r4(R+12)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c0a2:{NFSU2_TR(0x44c0a2);
{u32 ea_=u32(r4(R+12)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c0a5:L44c0a5:{c.instructions+=9;NFSU2_TR(0x44c0a5);
{u32 ea_=u32(u32(7893212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c0ab:{NFSU2_TR(0x44c0ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c0ae:{NFSU2_TR(0x44c0ae);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c0b4:{NFSU2_TR(0x44c0b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c0b7:{NFSU2_TR(0x44c0b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c0ba:{NFSU2_TR(0x44c0ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c0bd:{NFSU2_TR(0x44c0bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c0bf:{NFSU2_TR(0x44c0bf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c0c2:{NFSU2_TR(0x44c0c2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44c0ce;}}
}
B44c0c4:L44c0c4:{c.instructions+=3;NFSU2_TR(0x44c0c4);
__builtin_memmove((R+0),gp(0x7870dc),4);
}
B44c0c9:{NFSU2_TR(0x44c0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c0cc:{NFSU2_TR(0x44c0cc);
{goto L44c0d7;}
}
B44c0ce:L44c0ce:{c.instructions+=2;NFSU2_TR(0x44c0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44c0d4:{NFSU2_TR(0x44c0d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c0d7:L44c0d7:{c.instructions+=5;NFSU2_TR(0x44c0d7);
{u32 ea_=u32(u32(7893216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c0dd:{NFSU2_TR(0x44c0dd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c0e3:{NFSU2_TR(0x44c0e3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c0e5:{NFSU2_TR(0x44c0e5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c0e8:{NFSU2_TR(0x44c0e8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44c0f5;}}
}
B44c0ea:L44c0ea:{c.instructions+=3;NFSU2_TR(0x44c0ea);
__builtin_memmove((R+8),gp(0x7870e0),4);
}
B44c0f0:{NFSU2_TR(0x44c0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c0f3:{NFSU2_TR(0x44c0f3);
{goto L44c0fe;}
}
B44c0f5:L44c0f5:{c.instructions+=2;NFSU2_TR(0x44c0f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c0fb:{NFSU2_TR(0x44c0fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c0fe:L44c0fe:{c.instructions+=32;NFSU2_TR(0x44c0fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c104:{NFSU2_TR(0x44c104);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c107:{NFSU2_TR(0x44c107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B44c109:{NFSU2_TR(0x44c109);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c10c:{NFSU2_TR(0x44c10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x410ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c112:{NFSU2_TR(0x44c112);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44c114:{NFSU2_TR(0x44c114);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c116:{NFSU2_TR(0x44c116);
{u32 ea_=u32(r4(R+12)+u32(1044u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c11c:{NFSU2_TR(0x44c11c);
{u32 ea_=u32(r4(R+12)+u32(1048u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c122:{NFSU2_TR(0x44c122);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44c128:{NFSU2_TR(0x44c128);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c12e:{NFSU2_TR(0x44c12e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B44c131:{NFSU2_TR(0x44c131);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c135:{NFSU2_TR(0x44c135);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B44c139:{NFSU2_TR(0x44c139);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c13d:{NFSU2_TR(0x44c13d);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B44c141:{NFSU2_TR(0x44c141);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x420ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c147:{NFSU2_TR(0x44c147);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44c149:{NFSU2_TR(0x44c149);
__builtin_memmove((R+4),gp(0x7870e4),4);
}
B44c14f:{NFSU2_TR(0x44c14f);
{u32 ea_=u32(r4(R+12)+u32(1060u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c155:{NFSU2_TR(0x44c155);
{u32 ea_=u32(r4(R+12)+u32(1064u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c15b:{NFSU2_TR(0x44c15b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44c15e:{NFSU2_TR(0x44c15e);
{u32 ea_=u32(r4(R+12)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c164:{NFSU2_TR(0x44c164);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x430ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c16a:{NFSU2_TR(0x44c16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x434ull))));
w4(U+4,u32(0x49742400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44c174:{NFSU2_TR(0x44c174);
{u32 ea_=u32(r4(R+8)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c17a:{NFSU2_TR(0x44c17a);
{u32 ea_=u32(r4(R+12)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c180:{NFSU2_TR(0x44c180);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c183:{NFSU2_TR(0x44c183);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c189:{NFSU2_TR(0x44c189);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x460ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c18f:{NFSU2_TR(0x44c18f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x46aull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44c198:{NFSU2_TR(0x44c198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c19dull));
TAIL_STATIC(0x43c1c0u,43c);
}
B44c19d:L44c19d:{c.instructions+=5;NFSU2_TR(0x44c19d);
__builtin_memmove((R+24),(R+0),4);
}
B44c19f:{NFSU2_TR(0x44c19f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1aull))));
}
B44c1a2:{NFSU2_TR(0x44c1a2);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c1a4:{NFSU2_TR(0x44c1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c1a7:{NFSU2_TR(0x44c1a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c1acull));
TAIL_STATIC(0x43c1c0u,43c);
}
B44c1ac:L44c1ac:{c.instructions+=3;NFSU2_TR(0x44c1ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44c1af:{NFSU2_TR(0x44c1af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44c1b1:{NFSU2_TR(0x44c1b1);
if(r1(R+518)){{goto L44c1b8;}}
}
B44c1b3:L44c1b3:{c.instructions+=2;NFSU2_TR(0x44c1b3);
w4(R+24,u32(0-u32(r4(R+24))));
}
B44c1b5:{NFSU2_TR(0x44c1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c1b8:L44c1b8:{c.instructions+=6;NFSU2_TR(0x44c1b8);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44c1bb:{NFSU2_TR(0x44c1bb);
{u32 ea_=u32(r4(R+12)+u32(1084u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44c1c1:{NFSU2_TR(0x44c1c1);
{u32 ea_=u32(r4(R+12)+u32(1092u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c1c7:{NFSU2_TR(0x44c1c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c1c9:{NFSU2_TR(0x44c1c9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c1cc:{NFSU2_TR(0x44c1cc);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44c1d7;}}
}
B44c1ce:L44c1ce:{c.instructions+=1;NFSU2_TR(0x44c1ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x468ull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44c1d7:L44c1d7:{c.instructions+=6;NFSU2_TR(0x44c1d7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c1dd:{NFSU2_TR(0x44c1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x444ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c1e3:{NFSU2_TR(0x44c1e3);
{u32 ea_=u32(r4(R+12)+u32(1084u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c1e9:{NFSU2_TR(0x44c1e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c1eb:{NFSU2_TR(0x44c1eb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c1ee:{NFSU2_TR(0x44c1ee);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44c1f9;}}
}
B44c1f0:L44c1f0:{c.instructions+=1;NFSU2_TR(0x44c1f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x468ull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44c1f9:L44c1f9:{c.instructions+=2;NFSU2_TR(0x44c1f9);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x46cull))));
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
B44c1ff:{NFSU2_TR(0x44c1ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c223;}}
}
B44c201:L44c201:{c.instructions+=2;NFSU2_TR(0x44c201);
u8 U[14];
__builtin_memmove((U+6),gp(0x828640),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44c207:{NFSU2_TR(0x44c207);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c223;}}
}
B44c209:L44c209:{c.instructions+=4;NFSU2_TR(0x44c209);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44c20c:{NFSU2_TR(0x44c20c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c212:{NFSU2_TR(0x44c212);
u8 U[14];
__builtin_memmove((U+6),gp(0x828640),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44c218:{NFSU2_TR(0x44c218);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c223;}}
}
B44c21a:L44c21a:{c.instructions+=2;NFSU2_TR(0x44c21a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c21d:{NFSU2_TR(0x44c21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c223:L44c223:{c.instructions+=9;NFSU2_TR(0x44c223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44c226:{NFSU2_TR(0x44c226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44c227:{NFSU2_TR(0x44c227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44c228:{NFSU2_TR(0x44c228);
__builtin_memmove((R+0),(R+12),4);
}
B44c22a:{NFSU2_TR(0x44c22a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44c22b:{NFSU2_TR(0x44c22b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c232:{NFSU2_TR(0x44c232);
__builtin_memmove((R+16),(R+20),4);
}
B44c234:{NFSU2_TR(0x44c234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44c235:{NFSU2_TR(0x44c235);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44c240:L44c240:{c.instructions+=2;NFSU2_TR(0x44c240);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c246:{NFSU2_TR(0x44c246);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44c250:L44c250:{c.instructions+=17;NFSU2_TR(0x44c250);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c252:{NFSU2_TR(0x44c252);
u8 U[4];
w4(U+0,u32(0x772102ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c257:{NFSU2_TR(0x44c257);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c25d:{NFSU2_TR(0x44c25d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c25e:{NFSU2_TR(0x44c25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c265:{NFSU2_TR(0x44c265);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c266:{NFSU2_TR(0x44c266);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c267:{NFSU2_TR(0x44c267);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c268:{NFSU2_TR(0x44c268);
__builtin_memmove((R+24),(R+4),4);
}
B44c26a:{NFSU2_TR(0x44c26a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c26e:{NFSU2_TR(0x44c26e);
u8 U[4];
w4(U+0,u32(0x787de8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44c274:{NFSU2_TR(0x44c274);
__builtin_memmove((R+4),gp(0x828640),4);
}
B44c27a:{NFSU2_TR(0x44c27a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c27d:{NFSU2_TR(0x44c27d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44c27f:{NFSU2_TR(0x44c27f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44c281:{NFSU2_TR(0x44c281);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44c289:{NFSU2_TR(0x44c289);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c291;}}
}
B44c28b:L44c28b:{c.instructions+=1;NFSU2_TR(0x44c28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c291:L44c291:{c.instructions+=3;NFSU2_TR(0x44c291);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44c297:{NFSU2_TR(0x44c297);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c29a:{NFSU2_TR(0x44c29a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c2a2;}}
}
B44c29c:L44c29c:{c.instructions+=1;NFSU2_TR(0x44c29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c2a2:L44c2a2:{c.instructions+=6;NFSU2_TR(0x44c2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c2a5:{NFSU2_TR(0x44c2a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x270ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44c2ac:{NFSU2_TR(0x44c2ac);
__builtin_memmove((R+4),gp(0x7fb708),4);
}
B44c2b2:{NFSU2_TR(0x44c2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c2b8:{NFSU2_TR(0x44c2b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44c2be:{NFSU2_TR(0x44c2be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c2c3ull));
TAIL_STATIC(0x579740u,579);
}
B44c2c3:L44c2c3:{c.instructions+=3;NFSU2_TR(0x44c2c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44c2c9:{NFSU2_TR(0x44c2c9);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44c2ce:{NFSU2_TR(0x44c2ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c2d3ull));
TAIL_STATIC(0x579740u,579);
}
B44c2d3:L44c2d3:{c.instructions+=3;NFSU2_TR(0x44c2d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x370ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44c2d9:{NFSU2_TR(0x44c2d9);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44c2de:{NFSU2_TR(0x44c2de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c2e3ull));
TAIL_STATIC(0x579740u,579);
}
B44c2e3:L44c2e3:{c.instructions+=3;NFSU2_TR(0x44c2e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x340ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44c2e9:{NFSU2_TR(0x44c2e9);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44c2ed:{NFSU2_TR(0x44c2ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c2f2ull));
TAIL_STATIC(0x579740u,579);
}
B44c2f2:L44c2f2:{c.instructions+=4;NFSU2_TR(0x44c2f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44c2f5:{NFSU2_TR(0x44c2f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B44c2fd:{NFSU2_TR(0x44c2fd);
u8 U[4];
w4(U+0,u32(0x787cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44c303:{NFSU2_TR(0x44c303);
if(r1(R+518)){{goto L44c326;}}
}
B44c305:L44c305:{c.instructions+=9;NFSU2_TR(0x44c305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c308:{NFSU2_TR(0x44c308);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44c30b:{NFSU2_TR(0x44c30b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c30e:{NFSU2_TR(0x44c30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44c314:{NFSU2_TR(0x44c314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c317:{NFSU2_TR(0x44c317);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c31d:{NFSU2_TR(0x44c31d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c31e:{NFSU2_TR(0x44c31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c321:{NFSU2_TR(0x44c321);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c326ull));
TAIL_STATIC(0x48f760u,48f);
}
B44c326:L44c326:{c.instructions+=4;NFSU2_TR(0x44c326);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44c32a:{NFSU2_TR(0x44c32a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44c32b:{NFSU2_TR(0x44c32b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44c32c:{NFSU2_TR(0x44c32c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c334;}}
}
B44c32e:L44c32e:{c.instructions+=1;NFSU2_TR(0x44c32e);
s4(0x883dfc,u32(u32(m4(0x883dfc))-u32(u32(0x1ull))));
}
B44c334:L44c334:{c.instructions+=4;NFSU2_TR(0x44c334);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44c338:{NFSU2_TR(0x44c338);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c33f:{NFSU2_TR(0x44c33f);
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
B44c342:{NFSU2_TR(0x44c342);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44c350:L44c350:{c.instructions+=10;NFSU2_TR(0x44c350);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c351:{NFSU2_TR(0x44c351);
__builtin_memmove((R+20),(R+16),4);
}
B44c353:{NFSU2_TR(0x44c353);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44c356:{NFSU2_TR(0x44c356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf4ull))));
}
B44c35c:{NFSU2_TR(0x44c35c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c35d:{NFSU2_TR(0x44c35d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c35e:{NFSU2_TR(0x44c35e);
__builtin_memmove((R+24),(R+4),4);
}
B44c360:{NFSU2_TR(0x44c360);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c361:{NFSU2_TR(0x44c361);
w4(R+4,u32(0x865480ull));
}
B44c366:{NFSU2_TR(0x44c366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c36bull));
TAIL_STATIC(0x571250u,571);
}
B44c36b:L44c36b:{c.instructions+=2;NFSU2_TR(0x44c36b);
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
B44c36d:{NFSU2_TR(0x44c36d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44cc1e;}}
}
B44c373:L44c373:{c.instructions+=13;NFSU2_TR(0x44c373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44c379:{NFSU2_TR(0x44c379);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c37f:{NFSU2_TR(0x44c37f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c383:{NFSU2_TR(0x44c383);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c387:{NFSU2_TR(0x44c387);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c38d:{NFSU2_TR(0x44c38d);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c393:{NFSU2_TR(0x44c393);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c399:{NFSU2_TR(0x44c399);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B44c39b:{NFSU2_TR(0x44c39b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44c39f:{NFSU2_TR(0x44c39f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c3a5:{NFSU2_TR(0x44c3a5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c3a7:{NFSU2_TR(0x44c3a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44c3aa:{NFSU2_TR(0x44c3aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c3cd;}}
}
B44c3ac:L44c3ac:{c.instructions+=6;NFSU2_TR(0x44c3ac);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c3b0:{NFSU2_TR(0x44c3b0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c3b6:{NFSU2_TR(0x44c3b6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c3ba:{NFSU2_TR(0x44c3ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c3bc:{NFSU2_TR(0x44c3bc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c3bf:{NFSU2_TR(0x44c3bf);
if(r1(R+514)){{goto L44c3d3;}}
}
B44c3c1:L44c3c1:{c.instructions+=3;NFSU2_TR(0x44c3c1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44c3c3:{NFSU2_TR(0x44c3c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44c3cb:{NFSU2_TR(0x44c3cb);
{goto L44c3d7;}
}
B44c3cd:L44c3cd:{c.instructions+=1;NFSU2_TR(0x44c3cd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c3d3:L44c3d3:{c.instructions+=1;NFSU2_TR(0x44c3d3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c3d7:L44c3d7:{c.instructions+=8;NFSU2_TR(0x44c3d7);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c3dd:{NFSU2_TR(0x44c3dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44c3e8:{NFSU2_TR(0x44c3e8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c3ee:{NFSU2_TR(0x44c3ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44c3f9:{NFSU2_TR(0x44c3f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44c404:{NFSU2_TR(0x44c404);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c406:{NFSU2_TR(0x44c406);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c409:{NFSU2_TR(0x44c409);
if(r1(R+514)){{goto L44c487;}}
}
B44c40b:L44c40b:{c.instructions+=3;NFSU2_TR(0x44c40b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c411:{NFSU2_TR(0x44c411);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44c413:{NFSU2_TR(0x44c413);
if(r1(R+518)){{goto L44c42a;}}
}
B44c415:L44c415:{c.instructions+=6;NFSU2_TR(0x44c415);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44c41b:{NFSU2_TR(0x44c41b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B44c41c:{NFSU2_TR(0x44c41c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c420:{NFSU2_TR(0x44c420);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44c424:{NFSU2_TR(0x44c424);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c428:{NFSU2_TR(0x44c428);
{goto L44c43f;}
}
B44c42a:L44c42a:{c.instructions+=4;NFSU2_TR(0x44c42a);
{u32 ea_=u32(u32(7893124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c430:{NFSU2_TR(0x44c430);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c433:{NFSU2_TR(0x44c433);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c439:{NFSU2_TR(0x44c439);
{u32 ea_=u32(r4(R+24)+u32(1024u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c43f:L44c43f:{c.instructions+=9;NFSU2_TR(0x44c43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44c445:{NFSU2_TR(0x44c445);
{u32 ea_=u32(r4(R+24)+u32(1024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c44b:{NFSU2_TR(0x44c44b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B44c44c:{NFSU2_TR(0x44c44c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c450:{NFSU2_TR(0x44c450);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44c454:{NFSU2_TR(0x44c454);
{u32 ea_=u32(r4(R+24)+u32(1024u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44c45a:{NFSU2_TR(0x44c45a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c45c:{NFSU2_TR(0x44c45c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c45f:{NFSU2_TR(0x44c45f);
if(r1(R+514)){{goto L44c469;}}
}
B44c461:L44c461:{c.instructions+=2;NFSU2_TR(0x44c461);
{u32 ea_=u32(r4(R+24)+u32(1024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c467:{NFSU2_TR(0x44c467);
{goto L44c46b;}
}
B44c469:L44c469:{c.instructions+=1;NFSU2_TR(0x44c469);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44c46b:L44c46b:{c.instructions+=6;NFSU2_TR(0x44c46b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c471:{NFSU2_TR(0x44c471);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c472:{NFSU2_TR(0x44c472);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44c476:{NFSU2_TR(0x44c476);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c477:{NFSU2_TR(0x44c477);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x370ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44c47d:{NFSU2_TR(0x44c47d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c482ull));
TAIL_STATIC(0x573480u,573);
}
B44c482:L44c482:{c.instructions+=1;NFSU2_TR(0x44c482);
{goto L44c61a;}
}
B44c487:L44c487:{c.instructions+=3;NFSU2_TR(0x44c487);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c48d:{NFSU2_TR(0x44c48d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44c48f:{NFSU2_TR(0x44c48f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c5bf;}}
}
B44c495:L44c495:{c.instructions+=37;NFSU2_TR(0x44c495);
{u32 ea_=u32(r4(R+24)+u32(1056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c49b:{NFSU2_TR(0x44c49b);
{u32 ea_=u32(r4(R+24)+u32(1040u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c4a1:{NFSU2_TR(0x44c4a1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c4a5:{NFSU2_TR(0x44c4a5);
{u32 ea_=u32(r4(R+24)+u32(1060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c4ab:{NFSU2_TR(0x44c4ab);
{u32 ea_=u32(r4(R+24)+u32(1044u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c4b1:{NFSU2_TR(0x44c4b1);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c4b5:{NFSU2_TR(0x44c4b5);
{u32 ea_=u32(r4(R+24)+u32(1064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c4bb:{NFSU2_TR(0x44c4bb);
{u32 ea_=u32(r4(R+24)+u32(1048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c4c1:{NFSU2_TR(0x44c4c1);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c4c5:{NFSU2_TR(0x44c4c5);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c4c8:{NFSU2_TR(0x44c4c8);
{u32 ea_=u32(r4(R+24)+u32(1040u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c4ce:{NFSU2_TR(0x44c4ce);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c4d1:{NFSU2_TR(0x44c4d1);
{u32 ea_=u32(r4(R+24)+u32(1044u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c4d7:{NFSU2_TR(0x44c4d7);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c4da:{NFSU2_TR(0x44c4da);
{u32 ea_=u32(r4(R+24)+u32(1048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c4e0:{NFSU2_TR(0x44c4e0);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B44c4e2:{NFSU2_TR(0x44c4e2);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c4e6:{NFSU2_TR(0x44c4e6);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B44c4e8:{NFSU2_TR(0x44c4e8);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c4ec:{NFSU2_TR(0x44c4ec);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B44c4ee:{NFSU2_TR(0x44c4ee);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44c4f0:{NFSU2_TR(0x44c4f0);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c4f4:{NFSU2_TR(0x44c4f4);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B44c4f6:{NFSU2_TR(0x44c4f6);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c4fa:{NFSU2_TR(0x44c4fa);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c4fe:{NFSU2_TR(0x44c4fe);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c502:{NFSU2_TR(0x44c502);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c506:{NFSU2_TR(0x44c506);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44c508:{NFSU2_TR(0x44c508);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c50c:{NFSU2_TR(0x44c50c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c510:{NFSU2_TR(0x44c510);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44c512:{NFSU2_TR(0x44c512);
__asm__ volatile(".byte 0xde,0xfa":::"memory");
}
B44c514:{NFSU2_TR(0x44c514);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44c516:{NFSU2_TR(0x44c516);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44c51c:{NFSU2_TR(0x44c51c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c51e:{NFSU2_TR(0x44c51e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44c521:{NFSU2_TR(0x44c521);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c52d;}}
}
B44c523:L44c523:{c.instructions+=3;NFSU2_TR(0x44c523);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44c525:{NFSU2_TR(0x44c525);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c52b:{NFSU2_TR(0x44c52b);
{goto L44c542;}
}
B44c52d:L44c52d:{c.instructions+=4;NFSU2_TR(0x44c52d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44c533:{NFSU2_TR(0x44c533);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c535:{NFSU2_TR(0x44c535);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c538:{NFSU2_TR(0x44c538);
if(r1(R+514)){{goto L44c542;}}
}
B44c53a:L44c53a:{c.instructions+=2;NFSU2_TR(0x44c53a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44c53c:{NFSU2_TR(0x44c53c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c542:L44c542:{c.instructions+=24;NFSU2_TR(0x44c542);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c546:{NFSU2_TR(0x44c546);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44c54c:{NFSU2_TR(0x44c54c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44c54e:{NFSU2_TR(0x44c54e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c54f:{NFSU2_TR(0x44c54f);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44c553:{NFSU2_TR(0x44c553);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c554:{NFSU2_TR(0x44c554);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c558:{NFSU2_TR(0x44c558);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44c55c:{NFSU2_TR(0x44c55c);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c560:{NFSU2_TR(0x44c560);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c561:{NFSU2_TR(0x44c561);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44c563:{NFSU2_TR(0x44c563);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c567:{NFSU2_TR(0x44c567);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c56b:{NFSU2_TR(0x44c56b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c56f:{NFSU2_TR(0x44c56f);
{u32 ea_=u32(r4(R+24)+u32(1040u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c575:{NFSU2_TR(0x44c575);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c579:{NFSU2_TR(0x44c579);
{u32 ea_=u32(r4(R+24)+u32(1044u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c57f:{NFSU2_TR(0x44c57f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c583:{NFSU2_TR(0x44c583);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c587:{NFSU2_TR(0x44c587);
{u32 ea_=u32(r4(R+24)+u32(1048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c58d:{NFSU2_TR(0x44c58d);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44c58f:{NFSU2_TR(0x44c58f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c593:{NFSU2_TR(0x44c593);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44c595:{NFSU2_TR(0x44c595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c59aull));
TAIL_STATIC(0x43cf90u,43c);
}
B44c59a:L44c59a:{c.instructions+=10;NFSU2_TR(0x44c59a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c59e:{NFSU2_TR(0x44c59e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44c5a1:{NFSU2_TR(0x44c5a1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c5a5:{NFSU2_TR(0x44c5a5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c5a9:{NFSU2_TR(0x44c5a9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c5ad:{NFSU2_TR(0x44c5ad);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c5b1:{NFSU2_TR(0x44c5b1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c5b5:{NFSU2_TR(0x44c5b5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c5b9:{NFSU2_TR(0x44c5b9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c5bd:{NFSU2_TR(0x44c5bd);
{goto L44c5d8;}
}
B44c5bf:L44c5bf:{c.instructions+=8;NFSU2_TR(0x44c5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c5c2:{NFSU2_TR(0x44c5c2);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c5c5:{NFSU2_TR(0x44c5c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44c5c8:{NFSU2_TR(0x44c5c8);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c5cb:{NFSU2_TR(0x44c5cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B44c5ce:{NFSU2_TR(0x44c5ce);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44c5d0:{NFSU2_TR(0x44c5d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c5d4:{NFSU2_TR(0x44c5d4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c5d8:L44c5d8:{c.instructions+=4;NFSU2_TR(0x44c5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c5de:{NFSU2_TR(0x44c5de);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c5e2:{NFSU2_TR(0x44c5e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44c5e4:{NFSU2_TR(0x44c5e4);
if(r1(R+518)){{goto L44c61a;}}
}
B44c5e6:L44c5e6:{c.instructions+=6;NFSU2_TR(0x44c5e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44c5ec:{NFSU2_TR(0x44c5ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44c5f0:{NFSU2_TR(0x44c5f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c5f1:{NFSU2_TR(0x44c5f1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x60ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44c5f4:{NFSU2_TR(0x44c5f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c5f5:{NFSU2_TR(0x44c5f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c5faull));
TAIL_STATIC(0x43ce10u,43c);
}
B44c5fa:L44c5fa:{c.instructions+=5;NFSU2_TR(0x44c5fa);
{u32 ea_=u32(r4(R+24)+u32(1076u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44c600:{NFSU2_TR(0x44c600);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44c603:{NFSU2_TR(0x44c603);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c605:{NFSU2_TR(0x44c605);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44c608:{NFSU2_TR(0x44c608);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c614;}}
}
B44c60a:L44c60a:{c.instructions+=1;NFSU2_TR(0x44c60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44c614:L44c614:{c.instructions+=1;NFSU2_TR(0x44c614);
{u32 ea_=u32(r4(R+24)+u32(1076u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c61a:L44c61a:{c.instructions+=9;NFSU2_TR(0x44c61a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c61e:{NFSU2_TR(0x44c61e);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c621:{NFSU2_TR(0x44c621);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c624:{NFSU2_TR(0x44c624);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c627:{NFSU2_TR(0x44c627);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B44c629:{NFSU2_TR(0x44c629);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44c62f:{NFSU2_TR(0x44c62f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c631:{NFSU2_TR(0x44c631);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c634:{NFSU2_TR(0x44c634);
if(r1(R+514)){{goto L44c640;}}
}
B44c636:L44c636:{c.instructions+=3;NFSU2_TR(0x44c636);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44c638:{NFSU2_TR(0x44c638);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c63e:{NFSU2_TR(0x44c63e);
{goto L44c655;}
}
B44c640:L44c640:{c.instructions+=4;NFSU2_TR(0x44c640);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44c646:{NFSU2_TR(0x44c646);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c648:{NFSU2_TR(0x44c648);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44c64b:{NFSU2_TR(0x44c64b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c655;}}
}
B44c64d:L44c64d:{c.instructions+=2;NFSU2_TR(0x44c64d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44c64f:{NFSU2_TR(0x44c64f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c655:L44c655:{c.instructions+=7;NFSU2_TR(0x44c655);
{u32 ea_=u32(u32(7896464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c65b:{NFSU2_TR(0x44c65b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c65c:{NFSU2_TR(0x44c65c);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44c663:{NFSU2_TR(0x44c663);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x340ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44c669:{NFSU2_TR(0x44c669);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c66c:{NFSU2_TR(0x44c66c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c66d:{NFSU2_TR(0x44c66d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c672ull));
TAIL_STATIC(0x573480u,573);
}
B44c672:L44c672:{c.instructions+=28;NFSU2_TR(0x44c672);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c678:{NFSU2_TR(0x44c678);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c67b:{NFSU2_TR(0x44c67b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B44c67e:{NFSU2_TR(0x44c67e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44c682:{NFSU2_TR(0x44c682);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c685:{NFSU2_TR(0x44c685);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44c689:{NFSU2_TR(0x44c689);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c68d:{NFSU2_TR(0x44c68d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c68f:{NFSU2_TR(0x44c68f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c693:{NFSU2_TR(0x44c693);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B44c695:{NFSU2_TR(0x44c695);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c699:{NFSU2_TR(0x44c699);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44c69d:{NFSU2_TR(0x44c69d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44c69f:{NFSU2_TR(0x44c69f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44c6a1:{NFSU2_TR(0x44c6a1);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B44c6a3:{NFSU2_TR(0x44c6a3);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B44c6a5:{NFSU2_TR(0x44c6a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44c6a7:{NFSU2_TR(0x44c6a7);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c6ab:{NFSU2_TR(0x44c6ab);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c6af:{NFSU2_TR(0x44c6af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44c6b1:{NFSU2_TR(0x44c6b1);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B44c6b3:{NFSU2_TR(0x44c6b3);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B44c6b5:{NFSU2_TR(0x44c6b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44c6b7:{NFSU2_TR(0x44c6b7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44c6bb:{NFSU2_TR(0x44c6bb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c6c1:{NFSU2_TR(0x44c6c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c6c3:{NFSU2_TR(0x44c6c3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c6c6:{NFSU2_TR(0x44c6c6);
if(r1(R+514)){{goto L44c6d0;}}
}
B44c6c8:L44c6c8:{c.instructions+=1;NFSU2_TR(0x44c6c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44c6d0:L44c6d0:{c.instructions+=3;NFSU2_TR(0x44c6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c6d3:{NFSU2_TR(0x44c6d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44c6d5:{NFSU2_TR(0x44c6d5);
if(r1(R+518)){{goto L44c6fe;}}
}
B44c6d7:L44c6d7:{c.instructions+=7;NFSU2_TR(0x44c6d7);
{u32 ea_=u32(u32(7893144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c6dd:{NFSU2_TR(0x44c6dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c6e1:{NFSU2_TR(0x44c6e1);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c6e8:{NFSU2_TR(0x44c6e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c6e9:{NFSU2_TR(0x44c6e9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c6ec:{NFSU2_TR(0x44c6ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c6ed:{NFSU2_TR(0x44c6ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c6f2ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B44c6f2:L44c6f2:{c.instructions+=5;NFSU2_TR(0x44c6f2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44c6f4:{NFSU2_TR(0x44c6f4);
__builtin_memmove((R+12),(R+0),2);
}
B44c6f7:{NFSU2_TR(0x44c6f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44c6fa:{NFSU2_TR(0x44c6fa);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B44c6fc:{NFSU2_TR(0x44c6fc);
{goto L44c712;}
}
B44c6fe:L44c6fe:{c.instructions+=3;NFSU2_TR(0x44c6fe);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c705:{NFSU2_TR(0x44c705);
{u32 ea_=u32(u32(7896460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c70b:{NFSU2_TR(0x44c70b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c710ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44c710:L44c710:{c.instructions+=1;NFSU2_TR(0x44c710);
__builtin_memmove((R+12),(R+0),4);
}
B44c712:L44c712:{c.instructions+=3;NFSU2_TR(0x44c712);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44c717:{NFSU2_TR(0x44c717);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44c719:{NFSU2_TR(0x44c719);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c725;}}
}
B44c71b:L44c71b:{c.instructions+=2;NFSU2_TR(0x44c71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44c71e:{NFSU2_TR(0x44c71e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44c725:L44c725:{c.instructions+=13;NFSU2_TR(0x44c725);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c72b:{NFSU2_TR(0x44c72b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44c731:{NFSU2_TR(0x44c731);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c737:{NFSU2_TR(0x44c737);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B44c738:{NFSU2_TR(0x44c738);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c73c:{NFSU2_TR(0x44c73c);
{u32 ea_=u32(r4(R+24)+u32(1028u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c742:{NFSU2_TR(0x44c742);
{u32 ea_=u32(r4(R+24)+u32(1028u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44c748:{NFSU2_TR(0x44c748);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44c74c:{NFSU2_TR(0x44c74c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c750:{NFSU2_TR(0x44c750);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c754:{NFSU2_TR(0x44c754);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c756:{NFSU2_TR(0x44c756);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44c759:{NFSU2_TR(0x44c759);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44c765;}}
}
B44c75b:L44c75b:{c.instructions+=2;NFSU2_TR(0x44c75b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c75f:{NFSU2_TR(0x44c75f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c765:L44c765:{c.instructions+=6;NFSU2_TR(0x44c765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44c76b:{NFSU2_TR(0x44c76b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c76c:{NFSU2_TR(0x44c76c);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44c773:{NFSU2_TR(0x44c773);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c774:{NFSU2_TR(0x44c774);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44c77a:{NFSU2_TR(0x44c77a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c77full));
TAIL_STATIC(0x573480u,573);
}
B44c77f:L44c77f:{c.instructions+=17;NFSU2_TR(0x44c77f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c785:{NFSU2_TR(0x44c785);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c788:{NFSU2_TR(0x44c788);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B44c78b:{NFSU2_TR(0x44c78b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c78e:{NFSU2_TR(0x44c78e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44c790:{NFSU2_TR(0x44c790);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44c793:{NFSU2_TR(0x44c793);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44c795:{NFSU2_TR(0x44c795);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c798:{NFSU2_TR(0x44c798);
w2(R+12,shr<u16>(r2(R+12),u64(u32(0x1ull))));
}
B44c79b:{NFSU2_TR(0x44c79b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B44c79d:{NFSU2_TR(0x44c79d);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c7a0:{NFSU2_TR(0x44c7a0);
{u32 ea_=u32(u32(7893228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c7a6:{NFSU2_TR(0x44c7a6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c7ac:{NFSU2_TR(0x44c7ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c7ad:{NFSU2_TR(0x44c7ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c7af:{NFSU2_TR(0x44c7af);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c7b2:{NFSU2_TR(0x44c7b2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44c7cf;}}
}
B44c7b4:L44c7b4:{c.instructions+=1;NFSU2_TR(0x44c7b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c7b9ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44c7b9:L44c7b9:{c.instructions+=3;NFSU2_TR(0x44c7b9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c7bd:{NFSU2_TR(0x44c7bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c7be:{NFSU2_TR(0x44c7be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c7c3ull));
TAIL_STATIC(0x43c370u,43c);
}
B44c7c3:L44c7c3:{c.instructions+=3;NFSU2_TR(0x44c7c3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44c7c7:{NFSU2_TR(0x44c7c7);
{u32 ea_=u32(u32(7893228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c7cd:{NFSU2_TR(0x44c7cd);
{goto L44c825;}
}
B44c7cf:L44c7cf:{c.instructions+=3;NFSU2_TR(0x44c7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c7d5:{NFSU2_TR(0x44c7d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44c7d7:{NFSU2_TR(0x44c7d7);
if(r1(R+518)){{goto L44c80c;}}
}
B44c7d9:L44c7d9:{c.instructions+=6;NFSU2_TR(0x44c7d9);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c7df:{NFSU2_TR(0x44c7df);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c7e5:{NFSU2_TR(0x44c7e5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c7e9:{NFSU2_TR(0x44c7e9);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c7ef:{NFSU2_TR(0x44c7ef);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c7f3:{NFSU2_TR(0x44c7f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c7f8ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44c7f8:L44c7f8:{c.instructions+=3;NFSU2_TR(0x44c7f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c7f9:{NFSU2_TR(0x44c7f9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c7fd:{NFSU2_TR(0x44c7fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c802ull));
TAIL_STATIC(0x43c370u,43c);
}
B44c802:L44c802:{c.instructions+=3;NFSU2_TR(0x44c802);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44c806:{NFSU2_TR(0x44c806);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c80a:{NFSU2_TR(0x44c80a);
{goto L44c825;}
}
B44c80c:L44c80c:{c.instructions+=1;NFSU2_TR(0x44c80c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c811ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44c811:L44c811:{c.instructions+=3;NFSU2_TR(0x44c811);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c815:{NFSU2_TR(0x44c815);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c816:{NFSU2_TR(0x44c816);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c81bull));
TAIL_STATIC(0x43c370u,43c);
}
B44c81b:L44c81b:{c.instructions+=2;NFSU2_TR(0x44c81b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44c81f:{NFSU2_TR(0x44c81f);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c825:L44c825:{c.instructions+=11;NFSU2_TR(0x44c825);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c829:{NFSU2_TR(0x44c829);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44c82c:{NFSU2_TR(0x44c82c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c82d:{NFSU2_TR(0x44c82d);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c834:{NFSU2_TR(0x44c834);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c837:{NFSU2_TR(0x44c837);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c83a:{NFSU2_TR(0x44c83a);
{u32 ea_=u32(u32(7893232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c840:{NFSU2_TR(0x44c840);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c846:{NFSU2_TR(0x44c846);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c848:{NFSU2_TR(0x44c848);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c84b:{NFSU2_TR(0x44c84b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44c868;}}
}
B44c84d:L44c84d:{c.instructions+=1;NFSU2_TR(0x44c84d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c852ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44c852:L44c852:{c.instructions+=3;NFSU2_TR(0x44c852);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c856:{NFSU2_TR(0x44c856);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c857:{NFSU2_TR(0x44c857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c85cull));
TAIL_STATIC(0x43c370u,43c);
}
B44c85c:L44c85c:{c.instructions+=3;NFSU2_TR(0x44c85c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44c860:{NFSU2_TR(0x44c860);
{u32 ea_=u32(u32(7893232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c866:{NFSU2_TR(0x44c866);
{goto L44c8be;}
}
B44c868:L44c868:{c.instructions+=3;NFSU2_TR(0x44c868);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c86e:{NFSU2_TR(0x44c86e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44c870:{NFSU2_TR(0x44c870);
if(r1(R+518)){{goto L44c8a5;}}
}
B44c872:L44c872:{c.instructions+=6;NFSU2_TR(0x44c872);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c878:{NFSU2_TR(0x44c878);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44c87e:{NFSU2_TR(0x44c87e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c882:{NFSU2_TR(0x44c882);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c888:{NFSU2_TR(0x44c888);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c88c:{NFSU2_TR(0x44c88c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c891ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44c891:L44c891:{c.instructions+=3;NFSU2_TR(0x44c891);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c892:{NFSU2_TR(0x44c892);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c896:{NFSU2_TR(0x44c896);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c89bull));
TAIL_STATIC(0x43c370u,43c);
}
B44c89b:L44c89b:{c.instructions+=3;NFSU2_TR(0x44c89b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44c89f:{NFSU2_TR(0x44c89f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c8a3:{NFSU2_TR(0x44c8a3);
{goto L44c8be;}
}
B44c8a5:L44c8a5:{c.instructions+=1;NFSU2_TR(0x44c8a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c8aaull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44c8aa:L44c8aa:{c.instructions+=3;NFSU2_TR(0x44c8aa);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c8ae:{NFSU2_TR(0x44c8ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c8af:{NFSU2_TR(0x44c8af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c8b4ull));
TAIL_STATIC(0x43c370u,43c);
}
B44c8b4:L44c8b4:{c.instructions+=2;NFSU2_TR(0x44c8b4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44c8b8:{NFSU2_TR(0x44c8b8);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c8be:L44c8be:{c.instructions+=22;NFSU2_TR(0x44c8be);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c8c2:{NFSU2_TR(0x44c8c2);
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
B44c8c5:{NFSU2_TR(0x44c8c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44c8cc:{NFSU2_TR(0x44c8cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c8cd:{NFSU2_TR(0x44c8cd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c8d1:{NFSU2_TR(0x44c8d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44c8d5:{NFSU2_TR(0x44c8d5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c8db:{NFSU2_TR(0x44c8db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c8dc:{NFSU2_TR(0x44c8dc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B44c8e0:{NFSU2_TR(0x44c8e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44c8e4:{NFSU2_TR(0x44c8e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c8e5:{NFSU2_TR(0x44c8e5);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c8e9:{NFSU2_TR(0x44c8e9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44c8eb:{NFSU2_TR(0x44c8eb);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c8ef:{NFSU2_TR(0x44c8ef);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c8f3:{NFSU2_TR(0x44c8f3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44c8f5:{NFSU2_TR(0x44c8f5);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c8f9:{NFSU2_TR(0x44c8f9);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c8fd:{NFSU2_TR(0x44c8fd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44c8ff:{NFSU2_TR(0x44c8ff);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c903:{NFSU2_TR(0x44c903);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44c905:{NFSU2_TR(0x44c905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44c90aull));
TAIL_STATIC(0x43d1e0u,43d);
}
B44c90a:L44c90a:{c.instructions+=24;NFSU2_TR(0x44c90a);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c911:{NFSU2_TR(0x44c911);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44c914:{NFSU2_TR(0x44c914);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c918:{NFSU2_TR(0x44c918);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c91c:{NFSU2_TR(0x44c91c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44c91e:{NFSU2_TR(0x44c91e);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c922:{NFSU2_TR(0x44c922);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c926:{NFSU2_TR(0x44c926);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44c928:{NFSU2_TR(0x44c928);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c92c:{NFSU2_TR(0x44c92c);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c930:{NFSU2_TR(0x44c930);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44c932:{NFSU2_TR(0x44c932);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c936:{NFSU2_TR(0x44c936);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44c938:{NFSU2_TR(0x44c938);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c93c:{NFSU2_TR(0x44c93c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c93e:{NFSU2_TR(0x44c93e);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c940:{NFSU2_TR(0x44c940);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c944:{NFSU2_TR(0x44c944);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c947:{NFSU2_TR(0x44c947);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c94a:{NFSU2_TR(0x44c94a);
{u32 ea_=u32(u32(7893236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c950:{NFSU2_TR(0x44c950);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c956:{NFSU2_TR(0x44c956);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c958:{NFSU2_TR(0x44c958);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c95b:{NFSU2_TR(0x44c95b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44c965;}}
}
B44c95d:L44c95d:{c.instructions+=2;NFSU2_TR(0x44c95d);
{u32 ea_=u32(u32(7893236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c963:{NFSU2_TR(0x44c963);
{goto L44c96b;}
}
B44c965:L44c965:{c.instructions+=1;NFSU2_TR(0x44c965);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c96b:L44c96b:{c.instructions+=5;NFSU2_TR(0x44c96b);
{u32 ea_=u32(u32(7893240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c971:{NFSU2_TR(0x44c971);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c977:{NFSU2_TR(0x44c977);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c979:{NFSU2_TR(0x44c979);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c97c:{NFSU2_TR(0x44c97c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44c986;}}
}
B44c97e:L44c97e:{c.instructions+=2;NFSU2_TR(0x44c97e);
{u32 ea_=u32(u32(7893240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c984:{NFSU2_TR(0x44c984);
{goto L44c98c;}
}
B44c986:L44c986:{c.instructions+=1;NFSU2_TR(0x44c986);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c98c:L44c98c:{c.instructions+=5;NFSU2_TR(0x44c98c);
{u32 ea_=u32(u32(7893244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c992:{NFSU2_TR(0x44c992);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44c998:{NFSU2_TR(0x44c998);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44c99a:{NFSU2_TR(0x44c99a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44c99d:{NFSU2_TR(0x44c99d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44c9a7;}}
}
B44c99f:L44c99f:{c.instructions+=2;NFSU2_TR(0x44c99f);
{u32 ea_=u32(u32(7893244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c9a5:{NFSU2_TR(0x44c9a5);
{goto L44c9ad;}
}
B44c9a7:L44c9a7:{c.instructions+=1;NFSU2_TR(0x44c9a7);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44c9ad:L44c9ad:{c.instructions+=57;NFSU2_TR(0x44c9ad);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44c9af:{NFSU2_TR(0x44c9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44c9b5:{NFSU2_TR(0x44c9b5);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c9bb:{NFSU2_TR(0x44c9bb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
}
B44c9c0:{NFSU2_TR(0x44c9c0);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B44c9c2:{NFSU2_TR(0x44c9c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44c9c6:{NFSU2_TR(0x44c9c6);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c9c9:{NFSU2_TR(0x44c9c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44c9ca:{NFSU2_TR(0x44c9ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44c9cc:{NFSU2_TR(0x44c9cc);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B44c9ce:{NFSU2_TR(0x44c9ce);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c9d0:{NFSU2_TR(0x44c9d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44c9d2:{NFSU2_TR(0x44c9d2);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c9d5:{NFSU2_TR(0x44c9d5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c9d9:{NFSU2_TR(0x44c9d9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44c9db:{NFSU2_TR(0x44c9db);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c9de:{NFSU2_TR(0x44c9de);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B44c9e0:{NFSU2_TR(0x44c9e0);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c9e3:{NFSU2_TR(0x44c9e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44c9e5:{NFSU2_TR(0x44c9e5);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B44c9e7:{NFSU2_TR(0x44c9e7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c9ea:{NFSU2_TR(0x44c9ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44c9ec:{NFSU2_TR(0x44c9ec);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44c9ef:{NFSU2_TR(0x44c9ef);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44c9f3:{NFSU2_TR(0x44c9f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44c9f7:{NFSU2_TR(0x44c9f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44c9fb:{NFSU2_TR(0x44c9fb);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44c9fe:{NFSU2_TR(0x44c9fe);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44ca00:{NFSU2_TR(0x44ca00);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ca03:{NFSU2_TR(0x44ca03);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44ca05:{NFSU2_TR(0x44ca05);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44ca07:{NFSU2_TR(0x44ca07);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ca0a:{NFSU2_TR(0x44ca0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44ca0c:{NFSU2_TR(0x44ca0c);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44ca0f:{NFSU2_TR(0x44ca0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44ca13:{NFSU2_TR(0x44ca13);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ca17:{NFSU2_TR(0x44ca17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ca18:{NFSU2_TR(0x44ca18);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44ca1a:{NFSU2_TR(0x44ca1a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ca1e:{NFSU2_TR(0x44ca1e);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44ca20:{NFSU2_TR(0x44ca20);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ca22:{NFSU2_TR(0x44ca22);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ca26:{NFSU2_TR(0x44ca26);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44ca29:{NFSU2_TR(0x44ca29);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ca2c:{NFSU2_TR(0x44ca2c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ca30:{NFSU2_TR(0x44ca30);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44ca33:{NFSU2_TR(0x44ca33);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ca36:{NFSU2_TR(0x44ca36);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ca38:{NFSU2_TR(0x44ca38);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ca3c:{NFSU2_TR(0x44ca3c);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ca40:{NFSU2_TR(0x44ca40);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ca43:{NFSU2_TR(0x44ca43);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ca47:{NFSU2_TR(0x44ca47);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ca4b:{NFSU2_TR(0x44ca4b);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ca4e:{NFSU2_TR(0x44ca4e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ca52:{NFSU2_TR(0x44ca52);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ca56:{NFSU2_TR(0x44ca56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ca5bull));
TAIL_STATIC(0x43cf10u,43c);
}
B44ca5b:L44ca5b:{c.instructions+=9;NFSU2_TR(0x44ca5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44ca5e:{NFSU2_TR(0x44ca5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44ca61:{NFSU2_TR(0x44ca61);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ca62:{NFSU2_TR(0x44ca62);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44ca65:{NFSU2_TR(0x44ca65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ca66:{NFSU2_TR(0x44ca66);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44ca6a:{NFSU2_TR(0x44ca6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ca6b:{NFSU2_TR(0x44ca6b);
__builtin_memmove((R+4),(R+24),4);
}
B44ca6d:{NFSU2_TR(0x44ca6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ca72ull));
TAIL_STATIC(0x444cf0u,444);
}
B44ca72:L44ca72:{c.instructions+=46;NFSU2_TR(0x44ca72);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ca74:{NFSU2_TR(0x44ca74);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ca78:{NFSU2_TR(0x44ca78);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ca7a:{NFSU2_TR(0x44ca7a);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ca7d:{NFSU2_TR(0x44ca7d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ca81:{NFSU2_TR(0x44ca81);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ca84:{NFSU2_TR(0x44ca84);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ca87:{NFSU2_TR(0x44ca87);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ca8b:{NFSU2_TR(0x44ca8b);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ca8e:{NFSU2_TR(0x44ca8e);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ca91:{NFSU2_TR(0x44ca91);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ca94:{NFSU2_TR(0x44ca94);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44ca9b:{NFSU2_TR(0x44ca9b);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ca9d:{NFSU2_TR(0x44ca9d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44ca9f:{NFSU2_TR(0x44ca9f);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44caa1:{NFSU2_TR(0x44caa1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44caa3:{NFSU2_TR(0x44caa3);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44caa6:{NFSU2_TR(0x44caa6);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44caa9:{NFSU2_TR(0x44caa9);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44caac:{NFSU2_TR(0x44caac);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44caaf:{NFSU2_TR(0x44caaf);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cab3:{NFSU2_TR(0x44cab3);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44cab5:{NFSU2_TR(0x44cab5);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cab9:{NFSU2_TR(0x44cab9);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cabc:{NFSU2_TR(0x44cabc);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44cac0:{NFSU2_TR(0x44cac0);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cac4:{NFSU2_TR(0x44cac4);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cac7:{NFSU2_TR(0x44cac7);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44cacb:{NFSU2_TR(0x44cacb);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cacf:{NFSU2_TR(0x44cacf);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cad3:{NFSU2_TR(0x44cad3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44cad7:{NFSU2_TR(0x44cad7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cadb:{NFSU2_TR(0x44cadb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44cadf:{NFSU2_TR(0x44cadf);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cae3:{NFSU2_TR(0x44cae3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44cae7:{NFSU2_TR(0x44cae7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44caeb:{NFSU2_TR(0x44caeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44caef:{NFSU2_TR(0x44caef);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44caf1:{NFSU2_TR(0x44caf1);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44caf3:{NFSU2_TR(0x44caf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44caf6:{NFSU2_TR(0x44caf6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44caf9:{NFSU2_TR(0x44caf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44caff:{NFSU2_TR(0x44caff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb00:{NFSU2_TR(0x44cb00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb01:{NFSU2_TR(0x44cb01);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44cb07:{NFSU2_TR(0x44cb07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44cb0cull));
TAIL_STATIC(0x573480u,573);
}
B44cb0c:L44cb0c:{c.instructions+=2;NFSU2_TR(0x44cb0c);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cb13:{NFSU2_TR(0x44cb13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44cb18ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44cb18:L44cb18:{c.instructions+=7;NFSU2_TR(0x44cb18);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44cb1c:{NFSU2_TR(0x44cb1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb1d:{NFSU2_TR(0x44cb1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb1e:{NFSU2_TR(0x44cb1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb1f:{NFSU2_TR(0x44cb1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44cb26:{NFSU2_TR(0x44cb26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb27:{NFSU2_TR(0x44cb27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44cb2cull));
TAIL_STATIC(0x4440d0u,444);
}
B44cb2c:L44cb2c:{c.instructions+=8;NFSU2_TR(0x44cb2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44cb33:{NFSU2_TR(0x44cb33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb34:{NFSU2_TR(0x44cb34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb35:{NFSU2_TR(0x44cb35);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44cb39:{NFSU2_TR(0x44cb39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb3a:{NFSU2_TR(0x44cb3a);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44cb41:{NFSU2_TR(0x44cb41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb42:{NFSU2_TR(0x44cb42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44cb47ull));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B44cb47:L44cb47:{c.instructions+=6;NFSU2_TR(0x44cb47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44cb4d:{NFSU2_TR(0x44cb4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44cb51:{NFSU2_TR(0x44cb51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb52:{NFSU2_TR(0x44cb52);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x60ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44cb55:{NFSU2_TR(0x44cb55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb56:{NFSU2_TR(0x44cb56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44cb5bull));
TAIL_STATIC(0x43ce10u,43c);
}
B44cb5b:L44cb5b:{c.instructions+=5;NFSU2_TR(0x44cb5b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cb5f:{NFSU2_TR(0x44cb5f);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44cb64:{NFSU2_TR(0x44cb64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B44cb67:{NFSU2_TR(0x44cb67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44cb69:{NFSU2_TR(0x44cb69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44cb78;}}
}
B44cb6b:L44cb6b:{c.instructions+=3;NFSU2_TR(0x44cb6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cb6e:{NFSU2_TR(0x44cb6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44cb72:{NFSU2_TR(0x44cb72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cb78:L44cb78:{c.instructions+=13;NFSU2_TR(0x44cb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44cb7b:{NFSU2_TR(0x44cb7b);
{u32 ea_=u32(u32(7893248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cb81:{NFSU2_TR(0x44cb81);
__builtin_memmove((R+0),gp(0x7870e8),4);
}
B44cb86:{NFSU2_TR(0x44cb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cb8c:{NFSU2_TR(0x44cb8c);
{u32 ea_=u32(r4(R+24)+u32(1084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44cb92:{NFSU2_TR(0x44cb92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x43cull))));
__builtin_memmove((R+28),(U+0),4);
}
B44cb98:{NFSU2_TR(0x44cb98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cb9a:{NFSU2_TR(0x44cb9a);
{u32 ea_=u32(r4(R+24)+u32(1096u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cba0:{NFSU2_TR(0x44cba0);
__builtin_memmove((R+4),gp(0x865154),4);
}
B44cba6:{NFSU2_TR(0x44cba6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cba8:{NFSU2_TR(0x44cba8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cba9:{NFSU2_TR(0x44cba9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cbaa:{NFSU2_TR(0x44cbaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44cbafull));
TAIL_STATIC(0x574e30u,574);
}
B44cbaf:L44cbaf:{c.instructions+=7;NFSU2_TR(0x44cbaf);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cbb3:{NFSU2_TR(0x44cbb3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44cbb5:{NFSU2_TR(0x44cbb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B44cbb8:{NFSU2_TR(0x44cbb8);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44cbbe:{NFSU2_TR(0x44cbbe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44cbc0:{NFSU2_TR(0x44cbc0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44cbc3:{NFSU2_TR(0x44cbc3);
if(r1(R+514)){{goto L44cbcd;}}
}
B44cbc5:L44cbc5:{c.instructions+=2;NFSU2_TR(0x44cbc5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44cbc7:{NFSU2_TR(0x44cbc7);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cbcd:L44cbcd:{c.instructions+=3;NFSU2_TR(0x44cbcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cbd3:{NFSU2_TR(0x44cbd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44cbd5:{NFSU2_TR(0x44cbd5);
if(r1(R+518)){{goto L44cc05;}}
}
B44cbd7:L44cbd7:{c.instructions+=3;NFSU2_TR(0x44cbd7);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44cbdc:{NFSU2_TR(0x44cbdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44cbde:{NFSU2_TR(0x44cbde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44cc05;}}
}
B44cbe0:L44cbe0:{c.instructions+=6;NFSU2_TR(0x44cbe0);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44cbe2:{NFSU2_TR(0x44cbe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44cbe5:{NFSU2_TR(0x44cbe5);
{u32 ea_=u32(r4(R+8)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cbeb:{NFSU2_TR(0x44cbeb);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44cbf0:{NFSU2_TR(0x44cbf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44cbf2:{NFSU2_TR(0x44cbf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44cc07;}}
}
B44cbf4:L44cbf4:{c.instructions+=4;NFSU2_TR(0x44cbf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cbf7:{NFSU2_TR(0x44cbf7);
__builtin_memmove((R+4),gp(0x787104),4);
}
B44cbfd:{NFSU2_TR(0x44cbfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cc03:{NFSU2_TR(0x44cc03);
{goto L44cc07;}
}
B44cc05:L44cc05:{c.instructions+=1;NFSU2_TR(0x44cc05);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44cc07:L44cc07:{c.instructions+=6;NFSU2_TR(0x44cc07);
__builtin_memmove((R+8),gp(0x865198),4);
}
B44cc0d:{NFSU2_TR(0x44cc0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44cc10:{NFSU2_TR(0x44cc10);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cc11:{NFSU2_TR(0x44cc11);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44cc18:{NFSU2_TR(0x44cc18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cc19:{NFSU2_TR(0x44cc19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44cc1eull));
TAIL_STATIC(0x447280u,447);
}
B44cc1e:L44cc1e:{c.instructions+=6;NFSU2_TR(0x44cc1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44cc1f:{NFSU2_TR(0x44cc1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44cc20:{NFSU2_TR(0x44cc20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44cc21:{NFSU2_TR(0x44cc21);
__builtin_memmove((R+16),(R+20),4);
}
B44cc23:{NFSU2_TR(0x44cc23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44cc24:{NFSU2_TR(0x44cc24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44cc30:L44cc30:{c.instructions+=8;NFSU2_TR(0x44cc30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cc34:{NFSU2_TR(0x44cc34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cc35:{NFSU2_TR(0x44cc35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cc36:{NFSU2_TR(0x44cc36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cc37:{NFSU2_TR(0x44cc37);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cc39:{NFSU2_TR(0x44cc39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cc3a:{NFSU2_TR(0x44cc3a);
__builtin_memmove((R+24),(R+4),4);
}
B44cc3c:{NFSU2_TR(0x44cc3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44cc41ull));
TAIL_STATIC(0x44ab90u,44a);
}
B44cc41:L44cc41:{c.instructions+=8;NFSU2_TR(0x44cc41);
u8 U[4];
w4(U+0,u32(0x787e38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44cc47:{NFSU2_TR(0x44cc47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44cc4e:{NFSU2_TR(0x44cc4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44cc51:{NFSU2_TR(0x44cc51);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44cc53:{NFSU2_TR(0x44cc53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cc56:{NFSU2_TR(0x44cc56);
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
B44cc58:{NFSU2_TR(0x44cc58);
w4(R+4,u32(0x10ull));
}
B44cc5d:{NFSU2_TR(0x44cc5d);
__builtin_memmove((R+28),(R+8),4);
}
B44cc5f:L44cc5f:{c.instructions+=1;NFSU2_TR(0x44cc5f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L44cc61;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44cc5fu);}goto L44cc5f;}
}
B44cc61:L44cc61:{c.instructions+=78;NFSU2_TR(0x44cc61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B44cc63:{NFSU2_TR(0x44cc63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cc69:{NFSU2_TR(0x44cc69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cc6c:{NFSU2_TR(0x44cc6c);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cc6f:{NFSU2_TR(0x44cc6f);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cc72:{NFSU2_TR(0x44cc72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cc78:{NFSU2_TR(0x44cc78);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44cc7a:{NFSU2_TR(0x44cc7a);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cc80:{NFSU2_TR(0x44cc80);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cc86:{NFSU2_TR(0x44cc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44cc89:{NFSU2_TR(0x44cc89);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cc8c:{NFSU2_TR(0x44cc8c);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cc8f:{NFSU2_TR(0x44cc8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cc95:{NFSU2_TR(0x44cc95);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44cc97:{NFSU2_TR(0x44cc97);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cc9d:{NFSU2_TR(0x44cc9d);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cca3:{NFSU2_TR(0x44cca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cca6:{NFSU2_TR(0x44cca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ccac:{NFSU2_TR(0x44ccac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ccaf:{NFSU2_TR(0x44ccaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ccb5:{NFSU2_TR(0x44ccb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ccb8:{NFSU2_TR(0x44ccb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ccbe:{NFSU2_TR(0x44ccbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B44ccc0:{NFSU2_TR(0x44ccc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ccc6:{NFSU2_TR(0x44ccc6);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ccc9:{NFSU2_TR(0x44ccc9);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cccc:{NFSU2_TR(0x44cccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cccf:{NFSU2_TR(0x44cccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ccd5:{NFSU2_TR(0x44ccd5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44ccd7:{NFSU2_TR(0x44ccd7);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ccdd:{NFSU2_TR(0x44ccdd);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cce3:{NFSU2_TR(0x44cce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44cce6:{NFSU2_TR(0x44cce6);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cce9:{NFSU2_TR(0x44cce9);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ccec:{NFSU2_TR(0x44ccec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ccf2:{NFSU2_TR(0x44ccf2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44ccf4:{NFSU2_TR(0x44ccf4);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ccfa:{NFSU2_TR(0x44ccfa);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cd00:{NFSU2_TR(0x44cd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cd03:{NFSU2_TR(0x44cd03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd09:{NFSU2_TR(0x44cd09);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44cd0c:{NFSU2_TR(0x44cd0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd12:{NFSU2_TR(0x44cd12);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cd15:{NFSU2_TR(0x44cd15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd1b:{NFSU2_TR(0x44cd1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B44cd1d:{NFSU2_TR(0x44cd1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd23:{NFSU2_TR(0x44cd23);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cd26:{NFSU2_TR(0x44cd26);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cd29:{NFSU2_TR(0x44cd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cd2c:{NFSU2_TR(0x44cd2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd32:{NFSU2_TR(0x44cd32);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44cd34:{NFSU2_TR(0x44cd34);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cd3a:{NFSU2_TR(0x44cd3a);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cd40:{NFSU2_TR(0x44cd40);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44cd43:{NFSU2_TR(0x44cd43);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cd46:{NFSU2_TR(0x44cd46);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cd49:{NFSU2_TR(0x44cd49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd4f:{NFSU2_TR(0x44cd4f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44cd51:{NFSU2_TR(0x44cd51);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cd57:{NFSU2_TR(0x44cd57);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cd5d:{NFSU2_TR(0x44cd5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cd60:{NFSU2_TR(0x44cd60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd66:{NFSU2_TR(0x44cd66);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44cd69:{NFSU2_TR(0x44cd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd6f:{NFSU2_TR(0x44cd6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44cd72:{NFSU2_TR(0x44cd72);
__builtin_memmove((R+0),gp(0x787114),4);
}
B44cd77:{NFSU2_TR(0x44cd77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd7d:{NFSU2_TR(0x44cd7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd83:{NFSU2_TR(0x44cd83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44cd84:{NFSU2_TR(0x44cd84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd8a:{NFSU2_TR(0x44cd8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd90:{NFSU2_TR(0x44cd90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd96:{NFSU2_TR(0x44cd96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cd9c:{NFSU2_TR(0x44cd9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44cda2:{NFSU2_TR(0x44cda2);
__builtin_memmove((R+0),(R+24),4);
}
B44cda4:{NFSU2_TR(0x44cda4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44cda5:{NFSU2_TR(0x44cda5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44cda6:{NFSU2_TR(0x44cda6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44cdb0:L44cdb0:{c.instructions+=6;NFSU2_TR(0x44cdb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cdb1:{NFSU2_TR(0x44cdb1);
__builtin_memmove((R+24),(R+4),4);
}
B44cdb3:{NFSU2_TR(0x44cdb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cdb6:{NFSU2_TR(0x44cdb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44cdb8:{NFSU2_TR(0x44cdb8);
u8 U[4];
w4(U+0,u32(0x787cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44cdbe:{NFSU2_TR(0x44cdbe);
if(r1(R+518)){{goto L44cde5;}}
}
B44cdc0:L44cdc0:{c.instructions+=9;NFSU2_TR(0x44cdc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44cdc3:{NFSU2_TR(0x44cdc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44cdca:{NFSU2_TR(0x44cdca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44cdd0:{NFSU2_TR(0x44cdd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cdd3:{NFSU2_TR(0x44cdd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44cdd9:{NFSU2_TR(0x44cdd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44cddc:{NFSU2_TR(0x44cddc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cddd:{NFSU2_TR(0x44cddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cde0:{NFSU2_TR(0x44cde0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44cde5ull));
TAIL_STATIC(0x48f760u,48f);
}
B44cde5:L44cde5:{c.instructions+=3;NFSU2_TR(0x44cde5);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B44cde9:{NFSU2_TR(0x44cde9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44cdea:{NFSU2_TR(0x44cdea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44cdf2;}}
}
B44cdec:L44cdec:{c.instructions+=1;NFSU2_TR(0x44cdec);
u8 U[6];
w1(R+523,sborrow<u32>(m4(0x883dfc),u32(0x1ull)));
s4(0x883dfc,u32(u32(m4(0x883dfc))-u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x883dfc))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x883dfc))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x883dfc))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44cdf2:L44cdf2:{c.instructions+=1;NFSU2_TR(0x44cdf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ce00:L44ce00:{c.instructions+=11;NFSU2_TR(0x44ce00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ce01:{NFSU2_TR(0x44ce01);
__builtin_memmove((R+20),(R+16),4);
}
B44ce03:{NFSU2_TR(0x44ce03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44ce06:{NFSU2_TR(0x44ce06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B44ce09:{NFSU2_TR(0x44ce09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ce0a:{NFSU2_TR(0x44ce0a);
__builtin_memmove((R+24),(R+4),4);
}
B44ce0c:{NFSU2_TR(0x44ce0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ce0f:{NFSU2_TR(0x44ce0f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44ce12:{NFSU2_TR(0x44ce12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ce13:{NFSU2_TR(0x44ce13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44ce19:{NFSU2_TR(0x44ce19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44ceeb;}}
}
B44ce1f:L44ce1f:{c.instructions+=16;NFSU2_TR(0x44ce1f);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ce25:{NFSU2_TR(0x44ce25);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ce2b:{NFSU2_TR(0x44ce2b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44ce2d:{NFSU2_TR(0x44ce2d);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ce33:{NFSU2_TR(0x44ce33);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ce39:{NFSU2_TR(0x44ce39);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44ce3f:{NFSU2_TR(0x44ce3f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44ce43:{NFSU2_TR(0x44ce43);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ce49:{NFSU2_TR(0x44ce49);
{u32 ea_=u32(u32(7893280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ce4f:{NFSU2_TR(0x44ce4f);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ce55:{NFSU2_TR(0x44ce55);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B44ce57:{NFSU2_TR(0x44ce57);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44ce5d:{NFSU2_TR(0x44ce5d);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44ce63:{NFSU2_TR(0x44ce63);
__builtin_memmove((R+0),gp(0x8363f4),1);
}
B44ce68:{NFSU2_TR(0x44ce68);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44ce6a:{NFSU2_TR(0x44ce6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x44d0fdu,44d);}
}
B44ce70:L44ce70:{c.instructions+=4;NFSU2_TR(0x44ce70);
{u32 ea_=u32(u32(7893284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44ce76:{NFSU2_TR(0x44ce76);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44ce78:{NFSU2_TR(0x44ce78);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44ce7b:{NFSU2_TR(0x44ce7b);
if(r1(R+514)){{goto L44ce88;}}
}
B44ce7d:L44ce7d:{c.instructions+=2;NFSU2_TR(0x44ce7d);
__builtin_memmove((R+0),gp(0x787124),4);
}
B44ce82:{NFSU2_TR(0x44ce82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ce88:L44ce88:{c.instructions+=5;NFSU2_TR(0x44ce88);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ce8e:{NFSU2_TR(0x44ce8e);
{u32 ea_=u32(u32(7893288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44ce94:{NFSU2_TR(0x44ce94);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44ce96:{NFSU2_TR(0x44ce96);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44ce99:{NFSU2_TR(0x44ce99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44cea7;}}
}
B44ce9b:L44ce9b:{c.instructions+=2;NFSU2_TR(0x44ce9b);
__builtin_memmove((R+4),gp(0x787128),4);
}
B44cea1:{NFSU2_TR(0x44cea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cea7:L44cea7:{c.instructions+=5;NFSU2_TR(0x44cea7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ceab:{NFSU2_TR(0x44ceab);
{u32 ea_=u32(u32(7893292u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44ceb1:{NFSU2_TR(0x44ceb1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44ceb3:{NFSU2_TR(0x44ceb3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44ceb6:{NFSU2_TR(0x44ceb6);
if(r1(R+514)){{goto L44cec4;}}
}
B44ceb8:L44ceb8:{c.instructions+=2;NFSU2_TR(0x44ceb8);
__builtin_memmove((R+8),gp(0x78712c),4);
}
B44cebe:{NFSU2_TR(0x44cebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cec4:L44cec4:{c.instructions+=5;NFSU2_TR(0x44cec4);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ceca:{NFSU2_TR(0x44ceca);
{u32 ea_=u32(u32(7893296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44ced0:{NFSU2_TR(0x44ced0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44ced2:{NFSU2_TR(0x44ced2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44ced5:{NFSU2_TR(0x44ced5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x44d0ffu,44d);}
}
B44cedb:L44cedb:{c.instructions+=3;NFSU2_TR(0x44cedb);
__builtin_memmove((R+0),gp(0x787130),4);
}
B44cee0:{NFSU2_TR(0x44cee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cee6:{NFSU2_TR(0x44cee6);
TAIL_STATIC(0x44d0ffu,44d);
}
B44ceeb:L44ceeb:{c.instructions+=2;NFSU2_TR(0x44ceeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44ceed:{NFSU2_TR(0x44ceed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x44d0ffu,44d);}
}
B44cef3:L44cef3:{c.instructions+=11;NFSU2_TR(0x44cef3);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cef9:{NFSU2_TR(0x44cef9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44cf01:{NFSU2_TR(0x44cf01);
{u32 ea_=u32(r4(R+24)+u32(328u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44cf07:{NFSU2_TR(0x44cf07);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cf0b:{NFSU2_TR(0x44cf0b);
{u32 ea_=u32(r4(R+24)+u32(332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cf11:{NFSU2_TR(0x44cf11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44cf15:{NFSU2_TR(0x44cf15);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44cf1b:{NFSU2_TR(0x44cf1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44cf21:{NFSU2_TR(0x44cf21);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44cf23:{NFSU2_TR(0x44cf23);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44cf26:{NFSU2_TR(0x44cf26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44cf47;}}
}
B44cf28:L44cf28:{c.instructions+=5;NFSU2_TR(0x44cf28);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cf2c:{NFSU2_TR(0x44cf2c);
{u32 ea_=u32(r4(R+24)+u32(332u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44cf32:{NFSU2_TR(0x44cf32);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44cf34:{NFSU2_TR(0x44cf34);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44cf37:{NFSU2_TR(0x44cf37);
if(r1(R+514)){{goto L44cf47;}}
}
B44cf39:L44cf39:{c.instructions+=3;NFSU2_TR(0x44cf39);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cf3d:{NFSU2_TR(0x44cf3d);
{u32 ea_=u32(r4(R+24)+u32(332u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B44cf43:{NFSU2_TR(0x44cf43);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cf47:L44cf47:{c.instructions+=5;NFSU2_TR(0x44cf47);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cf4b:{NFSU2_TR(0x44cf4b);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44cf51:{NFSU2_TR(0x44cf51);
{u32 ea_=u32(u32(7884428u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44cf57:{NFSU2_TR(0x44cf57);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44cf5d:{NFSU2_TR(0x44cf5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44cf62ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44cf62:L44cf62:{c.instructions+=10;NFSU2_TR(0x44cf62);
__builtin_memmove((R+4),(R+0),4);
}
B44cf64:{NFSU2_TR(0x44cf64);
w4(R+0,u32(0xb60b60b7ull));
}
B44cf69:{NFSU2_TR(0x44cf69);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B44cf6b:{NFSU2_TR(0x44cf6b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B44cf6d:{NFSU2_TR(0x44cf6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B44cf70:{NFSU2_TR(0x44cf70);
__builtin_memmove((R+0),(R+8),4);
}
B44cf72:{NFSU2_TR(0x44cf72);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B44cf75:{NFSU2_TR(0x44cf75);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B44cf77:{NFSU2_TR(0x44cf77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44cf78:{NFSU2_TR(0x44cf78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44cf7dull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44cf7d:L44cf7d:{c.instructions+=31;NFSU2_TR(0x44cf7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44cf80:{NFSU2_TR(0x44cf80);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44cf86:{NFSU2_TR(0x44cf86);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44cf8c:{NFSU2_TR(0x44cf8c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cf92:{NFSU2_TR(0x44cf92);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B44cf94:{NFSU2_TR(0x44cf94);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44cf96:{NFSU2_TR(0x44cf96);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44cf9c:{NFSU2_TR(0x44cf9c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B44cf9e:{NFSU2_TR(0x44cf9e);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44cfa4:{NFSU2_TR(0x44cfa4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44cfa6:{NFSU2_TR(0x44cfa6);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cfa8:{NFSU2_TR(0x44cfa8);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cfae:{NFSU2_TR(0x44cfae);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44cfb4:{NFSU2_TR(0x44cfb4);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cfba:{NFSU2_TR(0x44cfba);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44cfc0:{NFSU2_TR(0x44cfc0);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cfc6:{NFSU2_TR(0x44cfc6);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44cfcc:{NFSU2_TR(0x44cfcc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cfd0:{NFSU2_TR(0x44cfd0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44cfd2:{NFSU2_TR(0x44cfd2);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B44cfd4:{NFSU2_TR(0x44cfd4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cfd8:{NFSU2_TR(0x44cfd8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B44cfda:{NFSU2_TR(0x44cfda);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44cfde:{NFSU2_TR(0x44cfde);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cfe2:{NFSU2_TR(0x44cfe2);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B44cfe4:{NFSU2_TR(0x44cfe4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cfe8:{NFSU2_TR(0x44cfe8);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44cfee:{NFSU2_TR(0x44cfee);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cff4:{NFSU2_TR(0x44cff4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44cff8:{NFSU2_TR(0x44cff8);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44cffe:{NFSU2_TR(0x44cffe);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
TAIL_STATIC(0x44d000u,44d);
}
XIT:NFSU2_TR_EXIT(0x44c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
