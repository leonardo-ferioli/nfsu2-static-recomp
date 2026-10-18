#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4d2(u8* __restrict R,Cpu& c);
u32 body_4db(u8* __restrict R,Cpu& c);
u32 body_4df(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4de,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4de,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4de(u8* __restrict R,Cpu& c);
u32 page_4de(Cpu& c){return body_4de(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4de(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4de000:goto L4de000;
case 0x4de001:c.instructions+=4;goto B4de001;
case 0x4de007:c.instructions+=3;goto B4de007;
case 0x4de008:c.instructions+=2;goto B4de008;
case 0x4de00a:c.instructions+=1;goto B4de00a;
case 0x4de00f:goto L4de00f;
case 0x4de015:c.instructions+=1;goto B4de015;
case 0x4de017:goto L4de017;
case 0x4de019:goto L4de019;
case 0x4de01a:c.instructions+=5;goto B4de01a;
case 0x4de01b:c.instructions+=4;goto B4de01b;
case 0x4de01c:c.instructions+=3;goto B4de01c;
case 0x4de01e:c.instructions+=2;goto B4de01e;
case 0x4de026:c.instructions+=1;goto B4de026;
case 0x4de02b:goto L4de02b;
case 0x4de02d:c.instructions+=1;goto B4de02d;
case 0x4de032:goto L4de032;
case 0x4de034:c.instructions+=5;goto B4de034;
case 0x4de037:c.instructions+=4;goto B4de037;
case 0x4de03b:c.instructions+=3;goto B4de03b;
case 0x4de03d:c.instructions+=2;goto B4de03d;
case 0x4de045:c.instructions+=1;goto B4de045;
case 0x4de047:goto L4de047;
case 0x4de04c:c.instructions+=9;goto B4de04c;
case 0x4de04e:c.instructions+=8;goto B4de04e;
case 0x4de054:c.instructions+=7;goto B4de054;
case 0x4de055:c.instructions+=6;goto B4de055;
case 0x4de05b:c.instructions+=5;goto B4de05b;
case 0x4de05e:c.instructions+=4;goto B4de05e;
case 0x4de065:c.instructions+=3;goto B4de065;
case 0x4de066:c.instructions+=2;goto B4de066;
case 0x4de068:c.instructions+=1;goto B4de068;
case 0x4de06d:goto L4de06d;
case 0x4de073:c.instructions+=3;goto B4de073;
case 0x4de076:c.instructions+=2;goto B4de076;
case 0x4de078:c.instructions+=1;goto B4de078;
case 0x4de07a:goto L4de07a;
case 0x4de07c:goto L4de07c;
case 0x4de07e:c.instructions+=2;goto B4de07e;
case 0x4de086:c.instructions+=1;goto B4de086;
case 0x4de08b:goto L4de08b;
case 0x4de08d:c.instructions+=5;goto B4de08d;
case 0x4de090:c.instructions+=4;goto B4de090;
case 0x4de094:c.instructions+=3;goto B4de094;
case 0x4de096:c.instructions+=2;goto B4de096;
case 0x4de09e:c.instructions+=1;goto B4de09e;
case 0x4de0a0:goto L4de0a0;
case 0x4de0a5:c.instructions+=9;goto B4de0a5;
case 0x4de0a7:c.instructions+=8;goto B4de0a7;
case 0x4de0ad:c.instructions+=7;goto B4de0ad;
case 0x4de0ae:c.instructions+=6;goto B4de0ae;
case 0x4de0b4:c.instructions+=5;goto B4de0b4;
case 0x4de0b7:c.instructions+=4;goto B4de0b7;
case 0x4de0be:c.instructions+=3;goto B4de0be;
case 0x4de0bf:c.instructions+=2;goto B4de0bf;
case 0x4de0c1:c.instructions+=1;goto B4de0c1;
case 0x4de0c6:goto L4de0c6;
case 0x4de0cc:c.instructions+=2;goto B4de0cc;
case 0x4de0cf:c.instructions+=1;goto B4de0cf;
case 0x4de0d1:goto L4de0d1;
case 0x4de0d3:goto L4de0d3;
case 0x4de0d5:c.instructions+=2;goto B4de0d5;
case 0x4de0dd:c.instructions+=1;goto B4de0dd;
case 0x4de0e2:goto L4de0e2;
case 0x4de0e4:c.instructions+=5;goto B4de0e4;
case 0x4de0e7:c.instructions+=4;goto B4de0e7;
case 0x4de0eb:c.instructions+=3;goto B4de0eb;
case 0x4de0ed:c.instructions+=2;goto B4de0ed;
case 0x4de0f5:c.instructions+=1;goto B4de0f5;
case 0x4de0f7:goto L4de0f7;
case 0x4de0fd:c.instructions+=5;goto B4de0fd;
case 0x4de0fe:c.instructions+=4;goto B4de0fe;
case 0x4de104:c.instructions+=3;goto B4de104;
case 0x4de105:c.instructions+=2;goto B4de105;
case 0x4de107:c.instructions+=1;goto B4de107;
case 0x4de10c:goto L4de10c;
case 0x4de112:c.instructions+=1;goto B4de112;
case 0x4de114:goto L4de114;
case 0x4de116:goto L4de116;
case 0x4de117:c.instructions+=5;goto B4de117;
case 0x4de118:c.instructions+=4;goto B4de118;
case 0x4de119:c.instructions+=3;goto B4de119;
case 0x4de11b:c.instructions+=2;goto B4de11b;
case 0x4de123:c.instructions+=1;goto B4de123;
case 0x4de128:goto L4de128;
case 0x4de12a:c.instructions+=1;goto B4de12a;
case 0x4de12f:goto L4de12f;
case 0x4de131:c.instructions+=5;goto B4de131;
case 0x4de134:c.instructions+=4;goto B4de134;
case 0x4de138:c.instructions+=3;goto B4de138;
case 0x4de13a:c.instructions+=2;goto B4de13a;
case 0x4de142:c.instructions+=1;goto B4de142;
case 0x4de144:goto L4de144;
case 0x4de149:c.instructions+=9;goto B4de149;
case 0x4de14c:c.instructions+=8;goto B4de14c;
case 0x4de153:c.instructions+=7;goto B4de153;
case 0x4de155:c.instructions+=6;goto B4de155;
case 0x4de15b:c.instructions+=5;goto B4de15b;
case 0x4de15c:c.instructions+=4;goto B4de15c;
case 0x4de162:c.instructions+=3;goto B4de162;
case 0x4de163:c.instructions+=2;goto B4de163;
case 0x4de165:c.instructions+=1;goto B4de165;
case 0x4de16a:goto L4de16a;
case 0x4de170:c.instructions+=3;goto B4de170;
case 0x4de173:c.instructions+=2;goto B4de173;
case 0x4de175:c.instructions+=1;goto B4de175;
case 0x4de177:goto L4de177;
case 0x4de179:goto L4de179;
case 0x4de17b:c.instructions+=2;goto B4de17b;
case 0x4de183:c.instructions+=1;goto B4de183;
case 0x4de188:goto L4de188;
case 0x4de18a:c.instructions+=5;goto B4de18a;
case 0x4de18d:c.instructions+=4;goto B4de18d;
case 0x4de191:c.instructions+=3;goto B4de191;
case 0x4de193:c.instructions+=2;goto B4de193;
case 0x4de19b:c.instructions+=1;goto B4de19b;
case 0x4de19d:goto L4de19d;
case 0x4de1a2:c.instructions+=9;goto B4de1a2;
case 0x4de1a5:c.instructions+=8;goto B4de1a5;
case 0x4de1ac:c.instructions+=7;goto B4de1ac;
case 0x4de1ae:c.instructions+=6;goto B4de1ae;
case 0x4de1b4:c.instructions+=5;goto B4de1b4;
case 0x4de1b5:c.instructions+=4;goto B4de1b5;
case 0x4de1bb:c.instructions+=3;goto B4de1bb;
case 0x4de1bc:c.instructions+=2;goto B4de1bc;
case 0x4de1be:c.instructions+=1;goto B4de1be;
case 0x4de1c3:goto L4de1c3;
case 0x4de1c9:c.instructions+=2;goto B4de1c9;
case 0x4de1cc:c.instructions+=1;goto B4de1cc;
case 0x4de1ce:goto L4de1ce;
case 0x4de1d0:goto L4de1d0;
case 0x4de1d2:c.instructions+=2;goto B4de1d2;
case 0x4de1da:c.instructions+=1;goto B4de1da;
case 0x4de1df:goto L4de1df;
case 0x4de1e1:c.instructions+=5;goto B4de1e1;
case 0x4de1e4:c.instructions+=4;goto B4de1e4;
case 0x4de1e8:c.instructions+=3;goto B4de1e8;
case 0x4de1ea:c.instructions+=2;goto B4de1ea;
case 0x4de1f2:c.instructions+=1;goto B4de1f2;
case 0x4de1f4:goto L4de1f4;
case 0x4de1fa:c.instructions+=5;goto B4de1fa;
case 0x4de1fb:c.instructions+=4;goto B4de1fb;
case 0x4de201:c.instructions+=3;goto B4de201;
case 0x4de202:c.instructions+=2;goto B4de202;
case 0x4de204:c.instructions+=1;goto B4de204;
case 0x4de209:goto L4de209;
case 0x4de20f:c.instructions+=1;goto B4de20f;
case 0x4de211:goto L4de211;
case 0x4de213:goto L4de213;
case 0x4de214:c.instructions+=5;goto B4de214;
case 0x4de215:c.instructions+=4;goto B4de215;
case 0x4de216:c.instructions+=3;goto B4de216;
case 0x4de218:c.instructions+=2;goto B4de218;
case 0x4de220:c.instructions+=1;goto B4de220;
case 0x4de225:goto L4de225;
case 0x4de227:c.instructions+=1;goto B4de227;
case 0x4de22c:goto L4de22c;
case 0x4de22e:c.instructions+=5;goto B4de22e;
case 0x4de231:c.instructions+=4;goto B4de231;
case 0x4de235:c.instructions+=3;goto B4de235;
case 0x4de237:c.instructions+=2;goto B4de237;
case 0x4de23f:c.instructions+=1;goto B4de23f;
case 0x4de241:goto L4de241;
case 0x4de246:c.instructions+=9;goto B4de246;
case 0x4de249:c.instructions+=8;goto B4de249;
case 0x4de250:c.instructions+=7;goto B4de250;
case 0x4de252:c.instructions+=6;goto B4de252;
case 0x4de258:c.instructions+=5;goto B4de258;
case 0x4de259:c.instructions+=4;goto B4de259;
case 0x4de25f:c.instructions+=3;goto B4de25f;
case 0x4de260:c.instructions+=2;goto B4de260;
case 0x4de262:c.instructions+=1;goto B4de262;
case 0x4de267:goto L4de267;
case 0x4de26d:c.instructions+=3;goto B4de26d;
case 0x4de270:c.instructions+=2;goto B4de270;
case 0x4de272:c.instructions+=1;goto B4de272;
case 0x4de274:goto L4de274;
case 0x4de276:goto L4de276;
case 0x4de278:c.instructions+=2;goto B4de278;
case 0x4de280:c.instructions+=1;goto B4de280;
case 0x4de285:goto L4de285;
case 0x4de287:c.instructions+=5;goto B4de287;
case 0x4de28a:c.instructions+=4;goto B4de28a;
case 0x4de28e:c.instructions+=3;goto B4de28e;
case 0x4de290:c.instructions+=2;goto B4de290;
case 0x4de298:c.instructions+=1;goto B4de298;
case 0x4de29a:goto L4de29a;
case 0x4de29f:c.instructions+=9;goto B4de29f;
case 0x4de2a2:c.instructions+=8;goto B4de2a2;
case 0x4de2a9:c.instructions+=7;goto B4de2a9;
case 0x4de2ab:c.instructions+=6;goto B4de2ab;
case 0x4de2b1:c.instructions+=5;goto B4de2b1;
case 0x4de2b2:c.instructions+=4;goto B4de2b2;
case 0x4de2b8:c.instructions+=3;goto B4de2b8;
case 0x4de2b9:c.instructions+=2;goto B4de2b9;
case 0x4de2bb:c.instructions+=1;goto B4de2bb;
case 0x4de2c0:goto L4de2c0;
case 0x4de2c6:c.instructions+=2;goto B4de2c6;
case 0x4de2c9:c.instructions+=1;goto B4de2c9;
case 0x4de2cb:goto L4de2cb;
case 0x4de2cd:goto L4de2cd;
case 0x4de2cf:c.instructions+=2;goto B4de2cf;
case 0x4de2d7:c.instructions+=1;goto B4de2d7;
case 0x4de2dc:goto L4de2dc;
case 0x4de2de:c.instructions+=5;goto B4de2de;
case 0x4de2e1:c.instructions+=4;goto B4de2e1;
case 0x4de2e5:c.instructions+=3;goto B4de2e5;
case 0x4de2e7:c.instructions+=2;goto B4de2e7;
case 0x4de2ef:c.instructions+=1;goto B4de2ef;
case 0x4de2f1:goto L4de2f1;
case 0x4de2f7:c.instructions+=5;goto B4de2f7;
case 0x4de2f8:c.instructions+=4;goto B4de2f8;
case 0x4de2fe:c.instructions+=3;goto B4de2fe;
case 0x4de2ff:c.instructions+=2;goto B4de2ff;
case 0x4de301:c.instructions+=1;goto B4de301;
case 0x4de306:goto L4de306;
case 0x4de30c:c.instructions+=1;goto B4de30c;
case 0x4de30e:goto L4de30e;
case 0x4de310:goto L4de310;
case 0x4de311:c.instructions+=5;goto B4de311;
case 0x4de312:c.instructions+=4;goto B4de312;
case 0x4de313:c.instructions+=3;goto B4de313;
case 0x4de315:c.instructions+=2;goto B4de315;
case 0x4de31d:c.instructions+=1;goto B4de31d;
case 0x4de322:goto L4de322;
case 0x4de324:c.instructions+=1;goto B4de324;
case 0x4de329:goto L4de329;
case 0x4de32b:c.instructions+=5;goto B4de32b;
case 0x4de32e:c.instructions+=4;goto B4de32e;
case 0x4de332:c.instructions+=3;goto B4de332;
case 0x4de334:c.instructions+=2;goto B4de334;
case 0x4de33c:c.instructions+=1;goto B4de33c;
case 0x4de33e:goto L4de33e;
case 0x4de343:c.instructions+=9;goto B4de343;
case 0x4de345:c.instructions+=8;goto B4de345;
case 0x4de34b:c.instructions+=7;goto B4de34b;
case 0x4de34c:c.instructions+=6;goto B4de34c;
case 0x4de352:c.instructions+=5;goto B4de352;
case 0x4de355:c.instructions+=4;goto B4de355;
case 0x4de35c:c.instructions+=3;goto B4de35c;
case 0x4de35d:c.instructions+=2;goto B4de35d;
case 0x4de35f:c.instructions+=1;goto B4de35f;
case 0x4de364:goto L4de364;
case 0x4de36a:c.instructions+=3;goto B4de36a;
case 0x4de36d:c.instructions+=2;goto B4de36d;
case 0x4de36f:c.instructions+=1;goto B4de36f;
case 0x4de371:goto L4de371;
case 0x4de373:goto L4de373;
case 0x4de375:c.instructions+=2;goto B4de375;
case 0x4de37d:c.instructions+=1;goto B4de37d;
case 0x4de382:goto L4de382;
case 0x4de384:c.instructions+=5;goto B4de384;
case 0x4de387:c.instructions+=4;goto B4de387;
case 0x4de38b:c.instructions+=3;goto B4de38b;
case 0x4de38d:c.instructions+=2;goto B4de38d;
case 0x4de395:c.instructions+=1;goto B4de395;
case 0x4de397:goto L4de397;
case 0x4de39c:c.instructions+=9;goto B4de39c;
case 0x4de39e:c.instructions+=8;goto B4de39e;
case 0x4de3a4:c.instructions+=7;goto B4de3a4;
case 0x4de3a5:c.instructions+=6;goto B4de3a5;
case 0x4de3ab:c.instructions+=5;goto B4de3ab;
case 0x4de3ae:c.instructions+=4;goto B4de3ae;
case 0x4de3b5:c.instructions+=3;goto B4de3b5;
case 0x4de3b6:c.instructions+=2;goto B4de3b6;
case 0x4de3b8:c.instructions+=1;goto B4de3b8;
case 0x4de3bd:goto L4de3bd;
case 0x4de3c3:c.instructions+=2;goto B4de3c3;
case 0x4de3c6:c.instructions+=1;goto B4de3c6;
case 0x4de3c8:goto L4de3c8;
case 0x4de3ca:goto L4de3ca;
case 0x4de3cc:c.instructions+=2;goto B4de3cc;
case 0x4de3d4:c.instructions+=1;goto B4de3d4;
case 0x4de3d9:goto L4de3d9;
case 0x4de3db:c.instructions+=5;goto B4de3db;
case 0x4de3de:c.instructions+=4;goto B4de3de;
case 0x4de3e2:c.instructions+=3;goto B4de3e2;
case 0x4de3e4:c.instructions+=2;goto B4de3e4;
case 0x4de3ec:c.instructions+=1;goto B4de3ec;
case 0x4de3ee:goto L4de3ee;
case 0x4de3f4:c.instructions+=5;goto B4de3f4;
case 0x4de3f5:c.instructions+=4;goto B4de3f5;
case 0x4de3fb:c.instructions+=3;goto B4de3fb;
case 0x4de3fc:c.instructions+=2;goto B4de3fc;
case 0x4de3fe:c.instructions+=1;goto B4de3fe;
case 0x4de403:goto L4de403;
case 0x4de409:c.instructions+=1;goto B4de409;
case 0x4de40b:goto L4de40b;
case 0x4de40d:goto L4de40d;
case 0x4de40e:c.instructions+=5;goto B4de40e;
case 0x4de40f:c.instructions+=4;goto B4de40f;
case 0x4de410:c.instructions+=3;goto B4de410;
case 0x4de412:c.instructions+=2;goto B4de412;
case 0x4de41a:c.instructions+=1;goto B4de41a;
case 0x4de41f:goto L4de41f;
case 0x4de421:c.instructions+=1;goto B4de421;
case 0x4de426:goto L4de426;
case 0x4de428:c.instructions+=5;goto B4de428;
case 0x4de42b:c.instructions+=4;goto B4de42b;
case 0x4de42f:c.instructions+=3;goto B4de42f;
case 0x4de431:c.instructions+=2;goto B4de431;
case 0x4de439:c.instructions+=1;goto B4de439;
case 0x4de43b:goto L4de43b;
case 0x4de440:c.instructions+=9;goto B4de440;
case 0x4de443:c.instructions+=8;goto B4de443;
case 0x4de44a:c.instructions+=7;goto B4de44a;
case 0x4de44c:c.instructions+=6;goto B4de44c;
case 0x4de452:c.instructions+=5;goto B4de452;
case 0x4de453:c.instructions+=4;goto B4de453;
case 0x4de459:c.instructions+=3;goto B4de459;
case 0x4de45a:c.instructions+=2;goto B4de45a;
case 0x4de45c:c.instructions+=1;goto B4de45c;
case 0x4de461:goto L4de461;
case 0x4de467:c.instructions+=3;goto B4de467;
case 0x4de46a:c.instructions+=2;goto B4de46a;
case 0x4de46c:c.instructions+=1;goto B4de46c;
case 0x4de46e:goto L4de46e;
case 0x4de470:goto L4de470;
case 0x4de472:c.instructions+=2;goto B4de472;
case 0x4de47a:c.instructions+=1;goto B4de47a;
case 0x4de47f:goto L4de47f;
case 0x4de481:c.instructions+=5;goto B4de481;
case 0x4de484:c.instructions+=4;goto B4de484;
case 0x4de488:c.instructions+=3;goto B4de488;
case 0x4de48a:c.instructions+=2;goto B4de48a;
case 0x4de492:c.instructions+=1;goto B4de492;
case 0x4de494:goto L4de494;
case 0x4de499:c.instructions+=9;goto B4de499;
case 0x4de49c:c.instructions+=8;goto B4de49c;
case 0x4de4a3:c.instructions+=7;goto B4de4a3;
case 0x4de4a5:c.instructions+=6;goto B4de4a5;
case 0x4de4ab:c.instructions+=5;goto B4de4ab;
case 0x4de4ac:c.instructions+=4;goto B4de4ac;
case 0x4de4b2:c.instructions+=3;goto B4de4b2;
case 0x4de4b3:c.instructions+=2;goto B4de4b3;
case 0x4de4b5:c.instructions+=1;goto B4de4b5;
case 0x4de4ba:goto L4de4ba;
case 0x4de4c0:c.instructions+=2;goto B4de4c0;
case 0x4de4c3:c.instructions+=1;goto B4de4c3;
case 0x4de4c5:goto L4de4c5;
case 0x4de4c7:goto L4de4c7;
case 0x4de4c9:c.instructions+=2;goto B4de4c9;
case 0x4de4d1:c.instructions+=1;goto B4de4d1;
case 0x4de4d6:goto L4de4d6;
case 0x4de4d8:c.instructions+=5;goto B4de4d8;
case 0x4de4db:c.instructions+=4;goto B4de4db;
case 0x4de4df:c.instructions+=3;goto B4de4df;
case 0x4de4e1:c.instructions+=2;goto B4de4e1;
case 0x4de4e9:c.instructions+=1;goto B4de4e9;
case 0x4de4eb:goto L4de4eb;
case 0x4de4f1:c.instructions+=5;goto B4de4f1;
case 0x4de4f2:c.instructions+=4;goto B4de4f2;
case 0x4de4f8:c.instructions+=3;goto B4de4f8;
case 0x4de4f9:c.instructions+=2;goto B4de4f9;
case 0x4de4fb:c.instructions+=1;goto B4de4fb;
case 0x4de500:goto L4de500;
case 0x4de506:c.instructions+=1;goto B4de506;
case 0x4de508:goto L4de508;
case 0x4de50a:goto L4de50a;
case 0x4de50b:c.instructions+=5;goto B4de50b;
case 0x4de50c:c.instructions+=4;goto B4de50c;
case 0x4de50d:c.instructions+=3;goto B4de50d;
case 0x4de50f:c.instructions+=2;goto B4de50f;
case 0x4de517:c.instructions+=1;goto B4de517;
case 0x4de51c:goto L4de51c;
case 0x4de51e:c.instructions+=1;goto B4de51e;
case 0x4de523:goto L4de523;
case 0x4de525:c.instructions+=5;goto B4de525;
case 0x4de528:c.instructions+=4;goto B4de528;
case 0x4de52c:c.instructions+=3;goto B4de52c;
case 0x4de52e:c.instructions+=2;goto B4de52e;
case 0x4de536:c.instructions+=1;goto B4de536;
case 0x4de538:goto L4de538;
case 0x4de53d:c.instructions+=9;goto B4de53d;
case 0x4de540:c.instructions+=8;goto B4de540;
case 0x4de547:c.instructions+=7;goto B4de547;
case 0x4de549:c.instructions+=6;goto B4de549;
case 0x4de54f:c.instructions+=5;goto B4de54f;
case 0x4de550:c.instructions+=4;goto B4de550;
case 0x4de556:c.instructions+=3;goto B4de556;
case 0x4de557:c.instructions+=2;goto B4de557;
case 0x4de559:c.instructions+=1;goto B4de559;
case 0x4de55e:goto L4de55e;
case 0x4de564:c.instructions+=3;goto B4de564;
case 0x4de567:c.instructions+=2;goto B4de567;
case 0x4de569:c.instructions+=1;goto B4de569;
case 0x4de56b:goto L4de56b;
case 0x4de56d:goto L4de56d;
case 0x4de56f:c.instructions+=2;goto B4de56f;
case 0x4de577:c.instructions+=1;goto B4de577;
case 0x4de57c:goto L4de57c;
case 0x4de57e:c.instructions+=5;goto B4de57e;
case 0x4de581:c.instructions+=4;goto B4de581;
case 0x4de585:c.instructions+=3;goto B4de585;
case 0x4de587:c.instructions+=2;goto B4de587;
case 0x4de58f:c.instructions+=1;goto B4de58f;
case 0x4de591:goto L4de591;
case 0x4de596:c.instructions+=9;goto B4de596;
case 0x4de599:c.instructions+=8;goto B4de599;
case 0x4de5a0:c.instructions+=7;goto B4de5a0;
case 0x4de5a2:c.instructions+=6;goto B4de5a2;
case 0x4de5a8:c.instructions+=5;goto B4de5a8;
case 0x4de5a9:c.instructions+=4;goto B4de5a9;
case 0x4de5af:c.instructions+=3;goto B4de5af;
case 0x4de5b0:c.instructions+=2;goto B4de5b0;
case 0x4de5b2:c.instructions+=1;goto B4de5b2;
case 0x4de5b7:goto L4de5b7;
case 0x4de5bd:c.instructions+=2;goto B4de5bd;
case 0x4de5c0:c.instructions+=1;goto B4de5c0;
case 0x4de5c2:goto L4de5c2;
case 0x4de5c4:goto L4de5c4;
case 0x4de5c6:c.instructions+=2;goto B4de5c6;
case 0x4de5ce:c.instructions+=1;goto B4de5ce;
case 0x4de5d3:goto L4de5d3;
case 0x4de5d5:c.instructions+=5;goto B4de5d5;
case 0x4de5d8:c.instructions+=4;goto B4de5d8;
case 0x4de5dc:c.instructions+=3;goto B4de5dc;
case 0x4de5de:c.instructions+=2;goto B4de5de;
case 0x4de5e6:c.instructions+=1;goto B4de5e6;
case 0x4de5e8:goto L4de5e8;
case 0x4de5ee:c.instructions+=5;goto B4de5ee;
case 0x4de5ef:c.instructions+=4;goto B4de5ef;
case 0x4de5f5:c.instructions+=3;goto B4de5f5;
case 0x4de5f6:c.instructions+=2;goto B4de5f6;
case 0x4de5f8:c.instructions+=1;goto B4de5f8;
case 0x4de5fd:goto L4de5fd;
case 0x4de603:c.instructions+=1;goto B4de603;
case 0x4de605:goto L4de605;
case 0x4de607:goto L4de607;
case 0x4de608:c.instructions+=5;goto B4de608;
case 0x4de609:c.instructions+=4;goto B4de609;
case 0x4de60a:c.instructions+=3;goto B4de60a;
case 0x4de60c:c.instructions+=2;goto B4de60c;
case 0x4de614:c.instructions+=1;goto B4de614;
case 0x4de619:goto L4de619;
case 0x4de61b:c.instructions+=1;goto B4de61b;
case 0x4de620:goto L4de620;
case 0x4de622:c.instructions+=5;goto B4de622;
case 0x4de625:c.instructions+=4;goto B4de625;
case 0x4de629:c.instructions+=3;goto B4de629;
case 0x4de62b:c.instructions+=2;goto B4de62b;
case 0x4de633:c.instructions+=1;goto B4de633;
case 0x4de635:goto L4de635;
case 0x4de63a:c.instructions+=9;goto B4de63a;
case 0x4de63c:c.instructions+=8;goto B4de63c;
case 0x4de642:c.instructions+=7;goto B4de642;
case 0x4de643:c.instructions+=6;goto B4de643;
case 0x4de649:c.instructions+=5;goto B4de649;
case 0x4de64c:c.instructions+=4;goto B4de64c;
case 0x4de653:c.instructions+=3;goto B4de653;
case 0x4de654:c.instructions+=2;goto B4de654;
case 0x4de656:c.instructions+=1;goto B4de656;
case 0x4de65b:goto L4de65b;
case 0x4de661:c.instructions+=3;goto B4de661;
case 0x4de664:c.instructions+=2;goto B4de664;
case 0x4de666:c.instructions+=1;goto B4de666;
case 0x4de668:goto L4de668;
case 0x4de66a:goto L4de66a;
case 0x4de66c:c.instructions+=2;goto B4de66c;
case 0x4de674:c.instructions+=1;goto B4de674;
case 0x4de679:goto L4de679;
case 0x4de67b:c.instructions+=5;goto B4de67b;
case 0x4de67e:c.instructions+=4;goto B4de67e;
case 0x4de682:c.instructions+=3;goto B4de682;
case 0x4de684:c.instructions+=2;goto B4de684;
case 0x4de68c:c.instructions+=1;goto B4de68c;
case 0x4de68e:goto L4de68e;
case 0x4de693:c.instructions+=9;goto B4de693;
case 0x4de695:c.instructions+=8;goto B4de695;
case 0x4de69b:c.instructions+=7;goto B4de69b;
case 0x4de69c:c.instructions+=6;goto B4de69c;
case 0x4de6a2:c.instructions+=5;goto B4de6a2;
case 0x4de6a5:c.instructions+=4;goto B4de6a5;
case 0x4de6ac:c.instructions+=3;goto B4de6ac;
case 0x4de6ad:c.instructions+=2;goto B4de6ad;
case 0x4de6af:c.instructions+=1;goto B4de6af;
case 0x4de6b4:goto L4de6b4;
case 0x4de6ba:c.instructions+=2;goto B4de6ba;
case 0x4de6bd:c.instructions+=1;goto B4de6bd;
case 0x4de6bf:goto L4de6bf;
case 0x4de6c1:goto L4de6c1;
case 0x4de6c3:c.instructions+=2;goto B4de6c3;
case 0x4de6cb:c.instructions+=1;goto B4de6cb;
case 0x4de6d0:goto L4de6d0;
case 0x4de6d2:c.instructions+=5;goto B4de6d2;
case 0x4de6d5:c.instructions+=4;goto B4de6d5;
case 0x4de6d9:c.instructions+=3;goto B4de6d9;
case 0x4de6db:c.instructions+=2;goto B4de6db;
case 0x4de6e3:c.instructions+=1;goto B4de6e3;
case 0x4de6e5:goto L4de6e5;
case 0x4de6eb:c.instructions+=5;goto B4de6eb;
case 0x4de6ec:c.instructions+=4;goto B4de6ec;
case 0x4de6f2:c.instructions+=3;goto B4de6f2;
case 0x4de6f3:c.instructions+=2;goto B4de6f3;
case 0x4de6f5:c.instructions+=1;goto B4de6f5;
case 0x4de6fa:goto L4de6fa;
case 0x4de700:c.instructions+=1;goto B4de700;
case 0x4de702:goto L4de702;
case 0x4de704:goto L4de704;
case 0x4de705:c.instructions+=5;goto B4de705;
case 0x4de706:c.instructions+=4;goto B4de706;
case 0x4de707:c.instructions+=3;goto B4de707;
case 0x4de709:c.instructions+=2;goto B4de709;
case 0x4de711:c.instructions+=1;goto B4de711;
case 0x4de716:goto L4de716;
case 0x4de718:c.instructions+=1;goto B4de718;
case 0x4de71d:goto L4de71d;
case 0x4de71f:c.instructions+=5;goto B4de71f;
case 0x4de722:c.instructions+=4;goto B4de722;
case 0x4de726:c.instructions+=3;goto B4de726;
case 0x4de728:c.instructions+=2;goto B4de728;
case 0x4de730:c.instructions+=1;goto B4de730;
case 0x4de732:goto L4de732;
case 0x4de737:c.instructions+=9;goto B4de737;
case 0x4de73a:c.instructions+=8;goto B4de73a;
case 0x4de741:c.instructions+=7;goto B4de741;
case 0x4de743:c.instructions+=6;goto B4de743;
case 0x4de749:c.instructions+=5;goto B4de749;
case 0x4de74a:c.instructions+=4;goto B4de74a;
case 0x4de750:c.instructions+=3;goto B4de750;
case 0x4de751:c.instructions+=2;goto B4de751;
case 0x4de753:c.instructions+=1;goto B4de753;
case 0x4de758:goto L4de758;
case 0x4de75e:c.instructions+=3;goto B4de75e;
case 0x4de761:c.instructions+=2;goto B4de761;
case 0x4de763:c.instructions+=1;goto B4de763;
case 0x4de765:goto L4de765;
case 0x4de767:goto L4de767;
case 0x4de769:c.instructions+=2;goto B4de769;
case 0x4de771:c.instructions+=1;goto B4de771;
case 0x4de776:goto L4de776;
case 0x4de778:c.instructions+=5;goto B4de778;
case 0x4de77b:c.instructions+=4;goto B4de77b;
case 0x4de77f:c.instructions+=3;goto B4de77f;
case 0x4de781:c.instructions+=2;goto B4de781;
case 0x4de789:c.instructions+=1;goto B4de789;
case 0x4de78b:goto L4de78b;
case 0x4de790:c.instructions+=9;goto B4de790;
case 0x4de793:c.instructions+=8;goto B4de793;
case 0x4de79a:c.instructions+=7;goto B4de79a;
case 0x4de79c:c.instructions+=6;goto B4de79c;
case 0x4de7a2:c.instructions+=5;goto B4de7a2;
case 0x4de7a3:c.instructions+=4;goto B4de7a3;
case 0x4de7a9:c.instructions+=3;goto B4de7a9;
case 0x4de7aa:c.instructions+=2;goto B4de7aa;
case 0x4de7ac:c.instructions+=1;goto B4de7ac;
case 0x4de7b1:goto L4de7b1;
case 0x4de7b7:c.instructions+=2;goto B4de7b7;
case 0x4de7ba:c.instructions+=1;goto B4de7ba;
case 0x4de7bc:goto L4de7bc;
case 0x4de7be:goto L4de7be;
case 0x4de7c0:c.instructions+=2;goto B4de7c0;
case 0x4de7c8:c.instructions+=1;goto B4de7c8;
case 0x4de7cd:goto L4de7cd;
case 0x4de7cf:c.instructions+=5;goto B4de7cf;
case 0x4de7d2:c.instructions+=4;goto B4de7d2;
case 0x4de7d6:c.instructions+=3;goto B4de7d6;
case 0x4de7d8:c.instructions+=2;goto B4de7d8;
case 0x4de7e0:c.instructions+=1;goto B4de7e0;
case 0x4de7e2:goto L4de7e2;
case 0x4de7e8:c.instructions+=5;goto B4de7e8;
case 0x4de7e9:c.instructions+=4;goto B4de7e9;
case 0x4de7ef:c.instructions+=3;goto B4de7ef;
case 0x4de7f0:c.instructions+=2;goto B4de7f0;
case 0x4de7f2:c.instructions+=1;goto B4de7f2;
case 0x4de7f7:goto L4de7f7;
case 0x4de7fd:c.instructions+=1;goto B4de7fd;
case 0x4de7ff:goto L4de7ff;
case 0x4de801:goto L4de801;
case 0x4de802:c.instructions+=5;goto B4de802;
case 0x4de803:c.instructions+=4;goto B4de803;
case 0x4de804:c.instructions+=3;goto B4de804;
case 0x4de806:c.instructions+=2;goto B4de806;
case 0x4de80e:c.instructions+=1;goto B4de80e;
case 0x4de813:goto L4de813;
case 0x4de815:c.instructions+=1;goto B4de815;
case 0x4de81a:goto L4de81a;
case 0x4de81c:c.instructions+=5;goto B4de81c;
case 0x4de81f:c.instructions+=4;goto B4de81f;
case 0x4de823:c.instructions+=3;goto B4de823;
case 0x4de825:c.instructions+=2;goto B4de825;
case 0x4de82d:c.instructions+=1;goto B4de82d;
case 0x4de82f:goto L4de82f;
case 0x4de834:c.instructions+=9;goto B4de834;
case 0x4de837:c.instructions+=8;goto B4de837;
case 0x4de83e:c.instructions+=7;goto B4de83e;
case 0x4de840:c.instructions+=6;goto B4de840;
case 0x4de846:c.instructions+=5;goto B4de846;
case 0x4de847:c.instructions+=4;goto B4de847;
case 0x4de84d:c.instructions+=3;goto B4de84d;
case 0x4de84e:c.instructions+=2;goto B4de84e;
case 0x4de850:c.instructions+=1;goto B4de850;
case 0x4de855:goto L4de855;
case 0x4de85b:c.instructions+=3;goto B4de85b;
case 0x4de85e:c.instructions+=2;goto B4de85e;
case 0x4de860:c.instructions+=1;goto B4de860;
case 0x4de862:goto L4de862;
case 0x4de864:goto L4de864;
case 0x4de866:c.instructions+=2;goto B4de866;
case 0x4de86e:c.instructions+=1;goto B4de86e;
case 0x4de873:goto L4de873;
case 0x4de875:c.instructions+=5;goto B4de875;
case 0x4de878:c.instructions+=4;goto B4de878;
case 0x4de87c:c.instructions+=3;goto B4de87c;
case 0x4de87e:c.instructions+=2;goto B4de87e;
case 0x4de886:c.instructions+=1;goto B4de886;
case 0x4de888:goto L4de888;
case 0x4de88d:c.instructions+=9;goto B4de88d;
case 0x4de890:c.instructions+=8;goto B4de890;
case 0x4de897:c.instructions+=7;goto B4de897;
case 0x4de899:c.instructions+=6;goto B4de899;
case 0x4de89f:c.instructions+=5;goto B4de89f;
case 0x4de8a0:c.instructions+=4;goto B4de8a0;
case 0x4de8a6:c.instructions+=3;goto B4de8a6;
case 0x4de8a7:c.instructions+=2;goto B4de8a7;
case 0x4de8a9:c.instructions+=1;goto B4de8a9;
case 0x4de8ae:goto L4de8ae;
case 0x4de8b4:c.instructions+=2;goto B4de8b4;
case 0x4de8b7:c.instructions+=1;goto B4de8b7;
case 0x4de8b9:goto L4de8b9;
case 0x4de8bb:goto L4de8bb;
case 0x4de8bd:c.instructions+=2;goto B4de8bd;
case 0x4de8c5:c.instructions+=1;goto B4de8c5;
case 0x4de8ca:goto L4de8ca;
case 0x4de8cc:c.instructions+=5;goto B4de8cc;
case 0x4de8cf:c.instructions+=4;goto B4de8cf;
case 0x4de8d3:c.instructions+=3;goto B4de8d3;
case 0x4de8d5:c.instructions+=2;goto B4de8d5;
case 0x4de8dd:c.instructions+=1;goto B4de8dd;
case 0x4de8df:goto L4de8df;
case 0x4de8e5:c.instructions+=5;goto B4de8e5;
case 0x4de8e6:c.instructions+=4;goto B4de8e6;
case 0x4de8ec:c.instructions+=3;goto B4de8ec;
case 0x4de8ed:c.instructions+=2;goto B4de8ed;
case 0x4de8ef:c.instructions+=1;goto B4de8ef;
case 0x4de8f4:goto L4de8f4;
case 0x4de8fa:c.instructions+=1;goto B4de8fa;
case 0x4de8fc:goto L4de8fc;
case 0x4de8fe:goto L4de8fe;
case 0x4de8ff:c.instructions+=5;goto B4de8ff;
case 0x4de900:c.instructions+=4;goto B4de900;
case 0x4de901:c.instructions+=3;goto B4de901;
case 0x4de903:c.instructions+=2;goto B4de903;
case 0x4de90b:c.instructions+=1;goto B4de90b;
case 0x4de910:goto L4de910;
case 0x4de912:c.instructions+=1;goto B4de912;
case 0x4de917:goto L4de917;
case 0x4de919:c.instructions+=5;goto B4de919;
case 0x4de91c:c.instructions+=4;goto B4de91c;
case 0x4de920:c.instructions+=3;goto B4de920;
case 0x4de922:c.instructions+=2;goto B4de922;
case 0x4de92a:c.instructions+=1;goto B4de92a;
case 0x4de92c:goto L4de92c;
case 0x4de931:c.instructions+=9;goto B4de931;
case 0x4de933:c.instructions+=8;goto B4de933;
case 0x4de939:c.instructions+=7;goto B4de939;
case 0x4de93a:c.instructions+=6;goto B4de93a;
case 0x4de940:c.instructions+=5;goto B4de940;
case 0x4de943:c.instructions+=4;goto B4de943;
case 0x4de94a:c.instructions+=3;goto B4de94a;
case 0x4de94b:c.instructions+=2;goto B4de94b;
case 0x4de94d:c.instructions+=1;goto B4de94d;
case 0x4de952:goto L4de952;
case 0x4de958:c.instructions+=3;goto B4de958;
case 0x4de95b:c.instructions+=2;goto B4de95b;
case 0x4de95d:c.instructions+=1;goto B4de95d;
case 0x4de95f:goto L4de95f;
case 0x4de961:goto L4de961;
case 0x4de963:c.instructions+=2;goto B4de963;
case 0x4de96b:c.instructions+=1;goto B4de96b;
case 0x4de970:goto L4de970;
case 0x4de972:c.instructions+=5;goto B4de972;
case 0x4de975:c.instructions+=4;goto B4de975;
case 0x4de979:c.instructions+=3;goto B4de979;
case 0x4de97b:c.instructions+=2;goto B4de97b;
case 0x4de983:c.instructions+=1;goto B4de983;
case 0x4de985:goto L4de985;
case 0x4de98a:c.instructions+=9;goto B4de98a;
case 0x4de98c:c.instructions+=8;goto B4de98c;
case 0x4de992:c.instructions+=7;goto B4de992;
case 0x4de993:c.instructions+=6;goto B4de993;
case 0x4de999:c.instructions+=5;goto B4de999;
case 0x4de99c:c.instructions+=4;goto B4de99c;
case 0x4de9a3:c.instructions+=3;goto B4de9a3;
case 0x4de9a4:c.instructions+=2;goto B4de9a4;
case 0x4de9a6:c.instructions+=1;goto B4de9a6;
case 0x4de9ab:goto L4de9ab;
case 0x4de9b1:c.instructions+=2;goto B4de9b1;
case 0x4de9b4:c.instructions+=1;goto B4de9b4;
case 0x4de9b6:goto L4de9b6;
case 0x4de9b8:goto L4de9b8;
case 0x4de9ba:c.instructions+=2;goto B4de9ba;
case 0x4de9c2:c.instructions+=1;goto B4de9c2;
case 0x4de9c7:goto L4de9c7;
case 0x4de9c9:c.instructions+=5;goto B4de9c9;
case 0x4de9cc:c.instructions+=4;goto B4de9cc;
case 0x4de9d0:c.instructions+=3;goto B4de9d0;
case 0x4de9d2:c.instructions+=2;goto B4de9d2;
case 0x4de9da:c.instructions+=1;goto B4de9da;
case 0x4de9dc:goto L4de9dc;
case 0x4de9e2:c.instructions+=5;goto B4de9e2;
case 0x4de9e3:c.instructions+=4;goto B4de9e3;
case 0x4de9e9:c.instructions+=3;goto B4de9e9;
case 0x4de9ea:c.instructions+=2;goto B4de9ea;
case 0x4de9ec:c.instructions+=1;goto B4de9ec;
case 0x4de9f1:goto L4de9f1;
case 0x4de9f7:c.instructions+=1;goto B4de9f7;
case 0x4de9f9:goto L4de9f9;
case 0x4de9fb:goto L4de9fb;
case 0x4de9fc:c.instructions+=5;goto B4de9fc;
case 0x4de9fd:c.instructions+=4;goto B4de9fd;
case 0x4de9fe:c.instructions+=3;goto B4de9fe;
case 0x4dea00:c.instructions+=2;goto B4dea00;
case 0x4dea08:c.instructions+=1;goto B4dea08;
case 0x4dea0d:goto L4dea0d;
case 0x4dea0f:c.instructions+=1;goto B4dea0f;
case 0x4dea14:goto L4dea14;
case 0x4dea16:c.instructions+=5;goto B4dea16;
case 0x4dea19:c.instructions+=4;goto B4dea19;
case 0x4dea1d:c.instructions+=3;goto B4dea1d;
case 0x4dea1f:c.instructions+=2;goto B4dea1f;
case 0x4dea27:c.instructions+=1;goto B4dea27;
case 0x4dea29:goto L4dea29;
case 0x4dea2e:c.instructions+=9;goto B4dea2e;
case 0x4dea31:c.instructions+=8;goto B4dea31;
case 0x4dea38:c.instructions+=7;goto B4dea38;
case 0x4dea3a:c.instructions+=6;goto B4dea3a;
case 0x4dea40:c.instructions+=5;goto B4dea40;
case 0x4dea41:c.instructions+=4;goto B4dea41;
case 0x4dea47:c.instructions+=3;goto B4dea47;
case 0x4dea48:c.instructions+=2;goto B4dea48;
case 0x4dea4a:c.instructions+=1;goto B4dea4a;
case 0x4dea4f:goto L4dea4f;
case 0x4dea55:c.instructions+=3;goto B4dea55;
case 0x4dea58:c.instructions+=2;goto B4dea58;
case 0x4dea5a:c.instructions+=1;goto B4dea5a;
case 0x4dea5c:goto L4dea5c;
case 0x4dea5e:goto L4dea5e;
case 0x4dea60:c.instructions+=2;goto B4dea60;
case 0x4dea68:c.instructions+=1;goto B4dea68;
case 0x4dea6d:goto L4dea6d;
case 0x4dea6f:c.instructions+=5;goto B4dea6f;
case 0x4dea72:c.instructions+=4;goto B4dea72;
case 0x4dea76:c.instructions+=3;goto B4dea76;
case 0x4dea78:c.instructions+=2;goto B4dea78;
case 0x4dea80:c.instructions+=1;goto B4dea80;
case 0x4dea82:goto L4dea82;
case 0x4dea87:c.instructions+=9;goto B4dea87;
case 0x4dea8a:c.instructions+=8;goto B4dea8a;
case 0x4dea91:c.instructions+=7;goto B4dea91;
case 0x4dea93:c.instructions+=6;goto B4dea93;
case 0x4dea99:c.instructions+=5;goto B4dea99;
case 0x4dea9a:c.instructions+=4;goto B4dea9a;
case 0x4deaa0:c.instructions+=3;goto B4deaa0;
case 0x4deaa1:c.instructions+=2;goto B4deaa1;
case 0x4deaa3:c.instructions+=1;goto B4deaa3;
case 0x4deaa8:goto L4deaa8;
case 0x4deaae:c.instructions+=2;goto B4deaae;
case 0x4deab1:c.instructions+=1;goto B4deab1;
case 0x4deab3:goto L4deab3;
case 0x4deab5:goto L4deab5;
case 0x4deab7:c.instructions+=2;goto B4deab7;
case 0x4deabf:c.instructions+=1;goto B4deabf;
case 0x4deac4:goto L4deac4;
case 0x4deac6:c.instructions+=5;goto B4deac6;
case 0x4deac9:c.instructions+=4;goto B4deac9;
case 0x4deacd:c.instructions+=3;goto B4deacd;
case 0x4deacf:c.instructions+=2;goto B4deacf;
case 0x4dead7:c.instructions+=1;goto B4dead7;
case 0x4dead9:goto L4dead9;
case 0x4deadf:c.instructions+=5;goto B4deadf;
case 0x4deae0:c.instructions+=4;goto B4deae0;
case 0x4deae6:c.instructions+=3;goto B4deae6;
case 0x4deae7:c.instructions+=2;goto B4deae7;
case 0x4deae9:c.instructions+=1;goto B4deae9;
case 0x4deaee:goto L4deaee;
case 0x4deaf4:c.instructions+=1;goto B4deaf4;
case 0x4deaf6:goto L4deaf6;
case 0x4deaf8:goto L4deaf8;
case 0x4deaf9:c.instructions+=5;goto B4deaf9;
case 0x4deafa:c.instructions+=4;goto B4deafa;
case 0x4deafb:c.instructions+=3;goto B4deafb;
case 0x4deafd:c.instructions+=2;goto B4deafd;
case 0x4deb05:c.instructions+=1;goto B4deb05;
case 0x4deb0a:goto L4deb0a;
case 0x4deb0c:c.instructions+=1;goto B4deb0c;
case 0x4deb11:goto L4deb11;
case 0x4deb13:c.instructions+=5;goto B4deb13;
case 0x4deb16:c.instructions+=4;goto B4deb16;
case 0x4deb1a:c.instructions+=3;goto B4deb1a;
case 0x4deb1c:c.instructions+=2;goto B4deb1c;
case 0x4deb24:c.instructions+=1;goto B4deb24;
case 0x4deb26:goto L4deb26;
case 0x4deb2b:c.instructions+=9;goto B4deb2b;
case 0x4deb2e:c.instructions+=8;goto B4deb2e;
case 0x4deb35:c.instructions+=7;goto B4deb35;
case 0x4deb37:c.instructions+=6;goto B4deb37;
case 0x4deb3d:c.instructions+=5;goto B4deb3d;
case 0x4deb3e:c.instructions+=4;goto B4deb3e;
case 0x4deb44:c.instructions+=3;goto B4deb44;
case 0x4deb45:c.instructions+=2;goto B4deb45;
case 0x4deb47:c.instructions+=1;goto B4deb47;
case 0x4deb4c:goto L4deb4c;
case 0x4deb52:c.instructions+=3;goto B4deb52;
case 0x4deb55:c.instructions+=2;goto B4deb55;
case 0x4deb57:c.instructions+=1;goto B4deb57;
case 0x4deb59:goto L4deb59;
case 0x4deb5b:goto L4deb5b;
case 0x4deb5d:c.instructions+=2;goto B4deb5d;
case 0x4deb65:c.instructions+=1;goto B4deb65;
case 0x4deb6a:goto L4deb6a;
case 0x4deb6c:c.instructions+=5;goto B4deb6c;
case 0x4deb6f:c.instructions+=4;goto B4deb6f;
case 0x4deb73:c.instructions+=3;goto B4deb73;
case 0x4deb75:c.instructions+=2;goto B4deb75;
case 0x4deb7d:c.instructions+=1;goto B4deb7d;
case 0x4deb7f:goto L4deb7f;
case 0x4deb84:c.instructions+=9;goto B4deb84;
case 0x4deb87:c.instructions+=8;goto B4deb87;
case 0x4deb8e:c.instructions+=7;goto B4deb8e;
case 0x4deb90:c.instructions+=6;goto B4deb90;
case 0x4deb96:c.instructions+=5;goto B4deb96;
case 0x4deb97:c.instructions+=4;goto B4deb97;
case 0x4deb9d:c.instructions+=3;goto B4deb9d;
case 0x4deb9e:c.instructions+=2;goto B4deb9e;
case 0x4deba0:c.instructions+=1;goto B4deba0;
case 0x4deba5:goto L4deba5;
case 0x4debab:c.instructions+=2;goto B4debab;
case 0x4debae:c.instructions+=1;goto B4debae;
case 0x4debb0:goto L4debb0;
case 0x4debb2:goto L4debb2;
case 0x4debb4:c.instructions+=2;goto B4debb4;
case 0x4debbc:c.instructions+=1;goto B4debbc;
case 0x4debc1:goto L4debc1;
case 0x4debc3:c.instructions+=5;goto B4debc3;
case 0x4debc6:c.instructions+=4;goto B4debc6;
case 0x4debca:c.instructions+=3;goto B4debca;
case 0x4debcc:c.instructions+=2;goto B4debcc;
case 0x4debd4:c.instructions+=1;goto B4debd4;
case 0x4debd6:goto L4debd6;
case 0x4debdc:c.instructions+=5;goto B4debdc;
case 0x4debdd:c.instructions+=4;goto B4debdd;
case 0x4debe3:c.instructions+=3;goto B4debe3;
case 0x4debe4:c.instructions+=2;goto B4debe4;
case 0x4debe6:c.instructions+=1;goto B4debe6;
case 0x4debeb:goto L4debeb;
case 0x4debf1:c.instructions+=1;goto B4debf1;
case 0x4debf3:goto L4debf3;
case 0x4debf5:goto L4debf5;
case 0x4debf6:c.instructions+=5;goto B4debf6;
case 0x4debf7:c.instructions+=4;goto B4debf7;
case 0x4debf8:c.instructions+=3;goto B4debf8;
case 0x4debfa:c.instructions+=2;goto B4debfa;
case 0x4dec02:c.instructions+=1;goto B4dec02;
case 0x4dec07:goto L4dec07;
case 0x4dec0a:c.instructions+=3;goto B4dec0a;
case 0x4dec0c:c.instructions+=2;goto B4dec0c;
case 0x4dec13:c.instructions+=1;goto B4dec13;
case 0x4dec15:goto L4dec15;
case 0x4dec18:c.instructions+=1;goto B4dec18;
case 0x4dec1a:goto L4dec1a;
case 0x4dec1c:goto L4dec1c;
case 0x4dec20:c.instructions+=8;goto B4dec20;
case 0x4dec21:c.instructions+=7;goto B4dec21;
case 0x4dec24:c.instructions+=6;goto B4dec24;
case 0x4dec25:c.instructions+=5;goto B4dec25;
case 0x4dec26:c.instructions+=4;goto B4dec26;
case 0x4dec27:c.instructions+=3;goto B4dec27;
case 0x4dec2e:c.instructions+=2;goto B4dec2e;
case 0x4dec31:c.instructions+=1;goto B4dec31;
case 0x4dec40:goto L4dec40;
case 0x4dec41:c.instructions+=6;goto B4dec41;
case 0x4dec43:c.instructions+=5;goto B4dec43;
case 0x4dec46:c.instructions+=4;goto B4dec46;
case 0x4dec47:c.instructions+=3;goto B4dec47;
case 0x4dec4b:c.instructions+=2;goto B4dec4b;
case 0x4dec4d:c.instructions+=1;goto B4dec4d;
case 0x4dec4f:goto L4dec4f;
case 0x4dec51:c.instructions+=1;goto B4dec51;
case 0x4dec53:goto L4dec53;
case 0x4dec55:c.instructions+=1;goto B4dec55;
case 0x4dec58:goto L4dec58;
case 0x4dec5b:c.instructions+=3;goto B4dec5b;
case 0x4dec5c:c.instructions+=2;goto B4dec5c;
case 0x4dec5e:c.instructions+=1;goto B4dec5e;
case 0x4dec63:goto L4dec63;
case 0x4dec64:c.instructions+=2;goto B4dec64;
case 0x4dec66:c.instructions+=1;goto B4dec66;
case 0x4dec6b:goto L4dec6b;
case 0x4dec6d:c.instructions+=1;goto B4dec6d;
case 0x4dec6f:goto L4dec6f;
case 0x4dec71:c.instructions+=2;goto B4dec71;
case 0x4dec73:c.instructions+=1;goto B4dec73;
case 0x4dec76:goto L4dec76;
case 0x4dec78:goto L4dec78;
case 0x4dec7e:c.instructions+=4;goto B4dec7e;
case 0x4dec80:c.instructions+=3;goto B4dec80;
case 0x4dec85:c.instructions+=2;goto B4dec85;
case 0x4dec86:c.instructions+=1;goto B4dec86;
case 0x4dec8b:goto L4dec8b;
case 0x4dec8e:goto L4dec8e;
case 0x4dec91:c.instructions+=5;goto B4dec91;
case 0x4dec94:c.instructions+=4;goto B4dec94;
case 0x4dec96:c.instructions+=3;goto B4dec96;
case 0x4dec97:c.instructions+=2;goto B4dec97;
case 0x4dec99:c.instructions+=1;goto B4dec99;
case 0x4dec9c:goto L4dec9c;
case 0x4dec9f:c.instructions+=3;goto B4dec9f;
case 0x4deca0:c.instructions+=2;goto B4deca0;
case 0x4deca2:c.instructions+=1;goto B4deca2;
case 0x4deca7:goto L4deca7;
case 0x4deca8:c.instructions+=2;goto B4deca8;
case 0x4decaa:c.instructions+=1;goto B4decaa;
case 0x4decaf:goto L4decaf;
case 0x4decb1:c.instructions+=1;goto B4decb1;
case 0x4decb3:goto L4decb3;
case 0x4decb6:c.instructions+=6;goto B4decb6;
case 0x4decb8:c.instructions+=5;goto B4decb8;
case 0x4decb9:c.instructions+=4;goto B4decb9;
case 0x4decba:c.instructions+=3;goto B4decba;
case 0x4decbe:c.instructions+=2;goto B4decbe;
case 0x4decc0:c.instructions+=1;goto B4decc0;
case 0x4decc3:goto L4decc3;
case 0x4decc4:c.instructions+=2;goto B4decc4;
case 0x4decc5:c.instructions+=1;goto B4decc5;
case 0x4decd0:goto L4decd0;
case 0x4decd3:c.instructions+=10;goto B4decd3;
case 0x4decd4:c.instructions+=9;goto B4decd4;
case 0x4decd5:c.instructions+=8;goto B4decd5;
case 0x4decd6:c.instructions+=7;goto B4decd6;
case 0x4decd8:c.instructions+=6;goto B4decd8;
case 0x4decdb:c.instructions+=5;goto B4decdb;
case 0x4decdc:c.instructions+=4;goto B4decdc;
case 0x4decdd:c.instructions+=3;goto B4decdd;
case 0x4dece1:c.instructions+=2;goto B4dece1;
case 0x4dece9:c.instructions+=1;goto B4dece9;
case 0x4decee:goto L4decee;
case 0x4decf1:c.instructions+=5;goto B4decf1;
case 0x4decf3:c.instructions+=4;goto B4decf3;
case 0x4decf9:c.instructions+=3;goto B4decf9;
case 0x4decfd:c.instructions+=2;goto B4decfd;
case 0x4ded01:c.instructions+=1;goto B4ded01;
case 0x4ded03:goto L4ded03;
case 0x4ded06:c.instructions+=1;goto B4ded06;
case 0x4ded08:goto L4ded08;
case 0x4ded0a:goto L4ded0a;
case 0x4ded0d:c.instructions+=2;goto B4ded0d;
case 0x4ded0f:c.instructions+=1;goto B4ded0f;
case 0x4ded11:goto L4ded11;
case 0x4ded14:c.instructions+=1;goto B4ded14;
case 0x4ded16:goto L4ded16;
case 0x4ded18:goto L4ded18;
case 0x4ded1b:goto L4ded1b;
case 0x4ded1d:c.instructions+=1;goto B4ded1d;
case 0x4ded1f:goto L4ded1f;
case 0x4ded22:c.instructions+=1;goto B4ded22;
case 0x4ded24:goto L4ded24;
case 0x4ded26:goto L4ded26;
case 0x4ded29:c.instructions+=2;goto B4ded29;
case 0x4ded2b:c.instructions+=1;goto B4ded2b;
case 0x4ded2d:goto L4ded2d;
case 0x4ded30:c.instructions+=1;goto B4ded30;
case 0x4ded32:goto L4ded32;
case 0x4ded34:goto L4ded34;
case 0x4ded36:c.instructions+=1;goto B4ded36;
case 0x4ded3c:goto L4ded3c;
case 0x4ded40:c.instructions+=3;goto B4ded40;
case 0x4ded44:c.instructions+=2;goto B4ded44;
case 0x4ded46:c.instructions+=1;goto B4ded46;
case 0x4ded48:goto L4ded48;
case 0x4ded4e:c.instructions+=3;goto B4ded4e;
case 0x4ded50:c.instructions+=2;goto B4ded50;
case 0x4ded52:c.instructions+=1;goto B4ded52;
case 0x4ded54:goto L4ded54;
case 0x4ded56:c.instructions+=2;goto B4ded56;
case 0x4ded58:c.instructions+=1;goto B4ded58;
case 0x4ded5b:goto L4ded5b;
case 0x4ded5f:c.instructions+=4;goto B4ded5f;
case 0x4ded61:c.instructions+=3;goto B4ded61;
case 0x4ded62:c.instructions+=2;goto B4ded62;
case 0x4ded64:c.instructions+=1;goto B4ded64;
case 0x4ded67:goto L4ded67;
case 0x4ded69:c.instructions+=2;goto B4ded69;
case 0x4ded6b:c.instructions+=1;goto B4ded6b;
case 0x4ded6e:goto L4ded6e;
case 0x4ded70:c.instructions+=1;goto B4ded70;
case 0x4ded72:goto L4ded72;
case 0x4ded74:c.instructions+=2;goto B4ded74;
case 0x4ded76:c.instructions+=1;goto B4ded76;
case 0x4ded79:goto L4ded79;
case 0x4ded7b:c.instructions+=3;goto B4ded7b;
case 0x4ded7c:c.instructions+=2;goto B4ded7c;
case 0x4ded7e:c.instructions+=1;goto B4ded7e;
case 0x4ded81:goto L4ded81;
case 0x4ded83:c.instructions+=2;goto B4ded83;
case 0x4ded85:c.instructions+=1;goto B4ded85;
case 0x4ded88:goto L4ded88;
case 0x4ded8a:c.instructions+=1;goto B4ded8a;
case 0x4ded8c:goto L4ded8c;
case 0x4ded8e:c.instructions+=2;goto B4ded8e;
case 0x4ded90:c.instructions+=1;goto B4ded90;
case 0x4ded93:goto L4ded93;
case 0x4ded95:c.instructions+=3;goto B4ded95;
case 0x4ded96:c.instructions+=2;goto B4ded96;
case 0x4ded98:c.instructions+=1;goto B4ded98;
case 0x4ded9b:goto L4ded9b;
case 0x4ded9d:c.instructions+=2;goto B4ded9d;
case 0x4ded9f:c.instructions+=1;goto B4ded9f;
case 0x4deda2:goto L4deda2;
case 0x4deda6:c.instructions+=5;goto B4deda6;
case 0x4dedaa:c.instructions+=4;goto B4dedaa;
case 0x4dedb0:c.instructions+=3;goto B4dedb0;
case 0x4dedb2:c.instructions+=2;goto B4dedb2;
case 0x4dedb6:c.instructions+=1;goto B4dedb6;
case 0x4dedb8:goto L4dedb8;
case 0x4dedba:c.instructions+=3;goto B4dedba;
case 0x4dedbf:c.instructions+=2;goto B4dedbf;
case 0x4dedc1:c.instructions+=1;goto B4dedc1;
case 0x4dedc4:goto L4dedc4;
case 0x4dedc6:c.instructions+=2;goto B4dedc6;
case 0x4dedc8:c.instructions+=1;goto B4dedc8;
case 0x4dedcb:goto L4dedcb;
case 0x4dedcd:c.instructions+=1;goto B4dedcd;
case 0x4dedcf:goto L4dedcf;
case 0x4dedd1:c.instructions+=3;goto B4dedd1;
case 0x4dedd6:c.instructions+=2;goto B4dedd6;
case 0x4dedd8:c.instructions+=1;goto B4dedd8;
case 0x4deddb:goto L4deddb;
case 0x4deddd:c.instructions+=2;goto B4deddd;
case 0x4deddf:c.instructions+=1;goto B4deddf;
case 0x4dede2:goto L4dede2;
case 0x4dede4:c.instructions+=1;goto B4dede4;
case 0x4dede6:goto L4dede6;
case 0x4dede8:c.instructions+=3;goto B4dede8;
case 0x4deded:c.instructions+=2;goto B4deded;
case 0x4dedef:c.instructions+=1;goto B4dedef;
case 0x4dedf2:goto L4dedf2;
case 0x4dedf4:c.instructions+=2;goto B4dedf4;
case 0x4dedf6:c.instructions+=1;goto B4dedf6;
case 0x4dedf9:goto L4dedf9;
case 0x4dedfb:c.instructions+=1;goto B4dedfb;
case 0x4dedfd:goto L4dedfd;
case 0x4dee00:c.instructions+=2;goto B4dee00;
case 0x4dee02:c.instructions+=1;goto B4dee02;
case 0x4dee04:goto L4dee04;
case 0x4dee07:c.instructions+=1;goto B4dee07;
case 0x4dee09:goto L4dee09;
case 0x4dee0b:goto L4dee0b;
case 0x4dee0d:c.instructions+=1;goto B4dee0d;
case 0x4dee0f:goto L4dee0f;
case 0x4dee12:c.instructions+=2;goto B4dee12;
case 0x4dee14:c.instructions+=1;goto B4dee14;
case 0x4dee16:goto L4dee16;
case 0x4dee1a:c.instructions+=5;goto B4dee1a;
case 0x4dee1d:c.instructions+=4;goto B4dee1d;
case 0x4dee20:c.instructions+=3;goto B4dee20;
case 0x4dee21:c.instructions+=2;goto B4dee21;
case 0x4dee25:c.instructions+=1;goto B4dee25;
case 0x4dee2a:goto L4dee2a;
case 0x4dee2c:goto L4dee2c;
case 0x4dee30:c.instructions+=4;goto B4dee30;
case 0x4dee33:c.instructions+=3;goto B4dee33;
case 0x4dee34:c.instructions+=2;goto B4dee34;
case 0x4dee38:c.instructions+=1;goto B4dee38;
case 0x4dee3d:goto L4dee3d;
case 0x4dee3e:c.instructions+=5;goto B4dee3e;
case 0x4dee3f:c.instructions+=4;goto B4dee3f;
case 0x4dee40:c.instructions+=3;goto B4dee40;
case 0x4dee41:c.instructions+=2;goto B4dee41;
case 0x4dee44:c.instructions+=1;goto B4dee44;
case 0x4dee50:goto L4dee50;
case 0x4dee53:c.instructions+=3;goto B4dee53;
case 0x4dee56:c.instructions+=2;goto B4dee56;
case 0x4dee58:c.instructions+=1;goto B4dee58;
case 0x4dee5a:goto L4dee5a;
case 0x4dee5c:c.instructions+=2;goto B4dee5c;
case 0x4dee5e:c.instructions+=1;goto B4dee5e;
case 0x4dee60:goto L4dee60;
case 0x4dee63:c.instructions+=3;goto B4dee63;
case 0x4dee66:c.instructions+=2;goto B4dee66;
case 0x4dee6d:c.instructions+=1;goto B4dee6d;
case 0x4dee72:goto L4dee72;
case 0x4dee74:c.instructions+=3;goto B4dee74;
case 0x4dee77:c.instructions+=2;goto B4dee77;
case 0x4dee7d:c.instructions+=1;goto B4dee7d;
case 0x4dee82:goto L4dee82;
case 0x4dee90:goto L4dee90;
case 0x4dee91:c.instructions+=5;goto B4dee91;
case 0x4dee93:c.instructions+=4;goto B4dee93;
case 0x4dee96:c.instructions+=3;goto B4dee96;
case 0x4dee99:c.instructions+=2;goto B4dee99;
case 0x4dee9b:c.instructions+=1;goto B4dee9b;
case 0x4deea1:goto L4deea1;
case 0x4deea2:c.instructions+=3;goto B4deea2;
case 0x4deea5:c.instructions+=2;goto B4deea5;
case 0x4deea7:c.instructions+=1;goto B4deea7;
case 0x4deea9:goto L4deea9;
case 0x4deeac:c.instructions+=2;goto B4deeac;
case 0x4deeae:c.instructions+=1;goto B4deeae;
case 0x4deeb0:goto L4deeb0;
case 0x4deeb1:c.instructions+=3;goto B4deeb1;
case 0x4deeb3:c.instructions+=2;goto B4deeb3;
case 0x4deeb4:c.instructions+=1;goto B4deeb4;
case 0x4deeb9:goto L4deeb9;
case 0x4deeba:c.instructions+=6;goto B4deeba;
case 0x4deec0:c.instructions+=5;goto B4deec0;
case 0x4deec1:c.instructions+=4;goto B4deec1;
case 0x4deec7:c.instructions+=3;goto B4deec7;
case 0x4deeca:c.instructions+=2;goto B4deeca;
case 0x4deecc:c.instructions+=1;goto B4deecc;
case 0x4deece:goto L4deece;
case 0x4deecf:c.instructions+=2;goto B4deecf;
case 0x4deed1:c.instructions+=1;goto B4deed1;
case 0x4deed6:goto L4deed6;
case 0x4deed8:c.instructions+=3;goto B4deed8;
case 0x4deeda:c.instructions+=2;goto B4deeda;
case 0x4deedc:c.instructions+=1;goto B4deedc;
case 0x4deede:goto L4deede;
case 0x4deee0:c.instructions+=2;goto B4deee0;
case 0x4deee3:c.instructions+=1;goto B4deee3;
case 0x4deee8:goto L4deee8;
case 0x4deee9:c.instructions+=5;goto B4deee9;
case 0x4deeea:c.instructions+=4;goto B4deeea;
case 0x4deeeb:c.instructions+=3;goto B4deeeb;
case 0x4deef2:c.instructions+=2;goto B4deef2;
case 0x4deef3:c.instructions+=1;goto B4deef3;
case 0x4deef4:goto L4deef4;
case 0x4deef6:c.instructions+=8;goto B4deef6;
case 0x4deef7:c.instructions+=7;goto B4deef7;
case 0x4deefc:c.instructions+=6;goto B4deefc;
case 0x4deeff:c.instructions+=5;goto B4deeff;
case 0x4def02:c.instructions+=4;goto B4def02;
case 0x4def03:c.instructions+=3;goto B4def03;
case 0x4def05:c.instructions+=2;goto B4def05;
case 0x4def06:c.instructions+=1;goto B4def06;
case 0x4def0b:goto L4def0b;
case 0x4def0d:c.instructions+=1;goto B4def0d;
case 0x4def0f:goto L4def0f;
case 0x4def12:c.instructions+=1;goto B4def12;
case 0x4def14:goto L4def14;
case 0x4def16:goto L4def16;
case 0x4def18:c.instructions+=2;goto B4def18;
case 0x4def1b:c.instructions+=1;goto B4def1b;
case 0x4def20:goto L4def20;
case 0x4def21:c.instructions+=3;goto B4def21;
case 0x4def22:c.instructions+=2;goto B4def22;
case 0x4def29:c.instructions+=1;goto B4def29;
case 0x4def2a:goto L4def2a;
case 0x4def2b:c.instructions+=1;goto B4def2b;
case 0x4def30:goto L4def30;
case 0x4def31:c.instructions+=4;goto B4def31;
case 0x4def33:c.instructions+=3;goto B4def33;
case 0x4def35:c.instructions+=2;goto B4def35;
case 0x4def37:c.instructions+=1;goto B4def37;
case 0x4def39:goto L4def39;
case 0x4def40:goto L4def40;
case 0x4def42:c.instructions+=5;goto B4def42;
case 0x4def45:c.instructions+=4;goto B4def45;
case 0x4def47:c.instructions+=3;goto B4def47;
case 0x4def48:c.instructions+=2;goto B4def48;
case 0x4def4b:c.instructions+=1;goto B4def4b;
case 0x4def50:goto L4def50;
case 0x4def52:c.instructions+=3;goto B4def52;
case 0x4def55:c.instructions+=2;goto B4def55;
case 0x4def57:c.instructions+=1;goto B4def57;
case 0x4def59:goto L4def59;
case 0x4def5a:c.instructions+=1;goto B4def5a;
case 0x4def60:goto L4def60;
case 0x4def64:c.instructions+=3;goto B4def64;
case 0x4def68:c.instructions+=2;goto B4def68;
case 0x4def69:c.instructions+=1;goto B4def69;
case 0x4def6e:goto L4def6e;
case 0x4def70:goto L4def70;
case 0x4def71:c.instructions+=5;goto B4def71;
case 0x4def72:c.instructions+=4;goto B4def72;
case 0x4def74:c.instructions+=3;goto B4def74;
case 0x4def76:c.instructions+=2;goto B4def76;
case 0x4def78:c.instructions+=1;goto B4def78;
case 0x4def7a:goto L4def7a;
case 0x4def80:goto L4def80;
case 0x4def83:c.instructions+=5;goto B4def83;
case 0x4def85:c.instructions+=4;goto B4def85;
case 0x4def87:c.instructions+=3;goto B4def87;
case 0x4def8a:c.instructions+=2;goto B4def8a;
case 0x4def8c:c.instructions+=1;goto B4def8c;
case 0x4def91:goto L4def91;
case 0x4def96:c.instructions+=3;goto B4def96;
case 0x4def97:c.instructions+=2;goto B4def97;
case 0x4def98:c.instructions+=1;goto B4def98;
case 0x4def9d:goto L4def9d;
case 0x4def9f:c.instructions+=3;goto B4def9f;
case 0x4defa2:c.instructions+=2;goto B4defa2;
case 0x4defa4:c.instructions+=1;goto B4defa4;
case 0x4defa6:goto L4defa6;
case 0x4defa7:c.instructions+=2;goto B4defa7;
case 0x4defa8:c.instructions+=1;goto B4defa8;
case 0x4defb0:goto L4defb0;
case 0x4defb2:c.instructions+=13;goto B4defb2;
case 0x4defb7:c.instructions+=12;goto B4defb7;
case 0x4defbd:c.instructions+=11;goto B4defbd;
case 0x4defbe:c.instructions+=10;goto B4defbe;
case 0x4defc5:c.instructions+=9;goto B4defc5;
case 0x4defc6:c.instructions+=8;goto B4defc6;
case 0x4defc7:c.instructions+=7;goto B4defc7;
case 0x4defc9:c.instructions+=6;goto B4defc9;
case 0x4defcd:c.instructions+=5;goto B4defcd;
case 0x4defd3:c.instructions+=4;goto B4defd3;
case 0x4defd6:c.instructions+=3;goto B4defd6;
case 0x4defde:c.instructions+=2;goto B4defde;
case 0x4defe5:c.instructions+=1;goto B4defe5;
case 0x4defea:goto L4defea;
case 0x4defec:c.instructions+=2;goto B4defec;
case 0x4deff4:c.instructions+=1;goto B4deff4;
case 0x4deff9:goto L4deff9;
case 0x4deffd:c.instructions+=2;goto B4deffd;
case 0x4deffe:c.instructions+=1;goto B4deffe;
default:missing_instruction(c.pc);}
B4de000:L4de000:{c.instructions+=5;NFSU2_TR(0x4de000);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de001:{NFSU2_TR(0x4de001);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de007:{NFSU2_TR(0x4de007);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de008:{NFSU2_TR(0x4de008);
__builtin_memmove((R+4),(R+28),4);
}
B4de00a:{NFSU2_TR(0x4de00a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de00full));
TAIL_STATIC(0x51e090u,51e);
}
B4de00f:L4de00f:{c.instructions+=2;NFSU2_TR(0x4de00f);
u8 U[4];
w4(U+0,u32(0x7933a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de015:{NFSU2_TR(0x4de015);
{goto L4de019;}
}
B4de017:L4de017:{c.instructions+=1;NFSU2_TR(0x4de017);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4de019:L4de019:{c.instructions+=6;NFSU2_TR(0x4de019);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de01a:{NFSU2_TR(0x4de01a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de01b:{NFSU2_TR(0x4de01b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de01c:{NFSU2_TR(0x4de01c);
__builtin_memmove((R+4),(R+24),4);
}
B4de01e:{NFSU2_TR(0x4de01e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de026:{NFSU2_TR(0x4de026);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de02bull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4de02b:L4de02b:{c.instructions+=2;NFSU2_TR(0x4de02b);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de02d:{NFSU2_TR(0x4de02d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de032ull));
TAIL_STATIC(0x575620u,575);
}
B4de032:L4de032:{c.instructions+=6;NFSU2_TR(0x4de032);
__builtin_memmove((R+28),(R+0),4);
}
B4de034:{NFSU2_TR(0x4de034);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de037:{NFSU2_TR(0x4de037);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de03b:{NFSU2_TR(0x4de03b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de03d:{NFSU2_TR(0x4de03d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de045:{NFSU2_TR(0x4de045);
if(r1(R+518)){{goto L4de07a;}}
}
B4de047:L4de047:{c.instructions+=10;NFSU2_TR(0x4de047);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de04c:{NFSU2_TR(0x4de04c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de04e:{NFSU2_TR(0x4de04e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de054:{NFSU2_TR(0x4de054);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de055:{NFSU2_TR(0x4de055);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de05b:{NFSU2_TR(0x4de05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4de05e:{NFSU2_TR(0x4de05e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4de065:{NFSU2_TR(0x4de065);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de066:{NFSU2_TR(0x4de066);
__builtin_memmove((R+4),(R+28),4);
}
B4de068:{NFSU2_TR(0x4de068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de06dull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de06d:L4de06d:{c.instructions+=4;NFSU2_TR(0x4de06d);
u8 U[4];
w4(U+0,u32(0x7934e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de073:{NFSU2_TR(0x4de073);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de076:{NFSU2_TR(0x4de076);
__builtin_memmove((R+20),(R+28),4);
}
B4de078:{NFSU2_TR(0x4de078);
{goto L4de07c;}
}
B4de07a:L4de07a:{c.instructions+=1;NFSU2_TR(0x4de07a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4de07c:L4de07c:{c.instructions+=3;NFSU2_TR(0x4de07c);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de07e:{NFSU2_TR(0x4de07e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de086:{NFSU2_TR(0x4de086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de08bull));
TAIL_STATIC(0x575620u,575);
}
B4de08b:L4de08b:{c.instructions+=6;NFSU2_TR(0x4de08b);
__builtin_memmove((R+12),(R+0),4);
}
B4de08d:{NFSU2_TR(0x4de08d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de090:{NFSU2_TR(0x4de090);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de094:{NFSU2_TR(0x4de094);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de096:{NFSU2_TR(0x4de096);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de09e:{NFSU2_TR(0x4de09e);
if(r1(R+518)){{goto L4de0d1;}}
}
B4de0a0:L4de0a0:{c.instructions+=10;NFSU2_TR(0x4de0a0);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de0a5:{NFSU2_TR(0x4de0a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de0a7:{NFSU2_TR(0x4de0a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de0ad:{NFSU2_TR(0x4de0ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de0ae:{NFSU2_TR(0x4de0ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de0b4:{NFSU2_TR(0x4de0b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4de0b7:{NFSU2_TR(0x4de0b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4de0be:{NFSU2_TR(0x4de0be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de0bf:{NFSU2_TR(0x4de0bf);
__builtin_memmove((R+4),(R+12),4);
}
B4de0c1:{NFSU2_TR(0x4de0c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de0c6ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de0c6:L4de0c6:{c.instructions+=3;NFSU2_TR(0x4de0c6);
u8 U[4];
w4(U+0,u32(0x7934a8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4de0cc:{NFSU2_TR(0x4de0cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de0cf:{NFSU2_TR(0x4de0cf);
{goto L4de0d3;}
}
B4de0d1:L4de0d1:{c.instructions+=1;NFSU2_TR(0x4de0d1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4de0d3:L4de0d3:{c.instructions+=3;NFSU2_TR(0x4de0d3);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de0d5:{NFSU2_TR(0x4de0d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de0dd:{NFSU2_TR(0x4de0dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de0e2ull));
TAIL_STATIC(0x575620u,575);
}
B4de0e2:L4de0e2:{c.instructions+=6;NFSU2_TR(0x4de0e2);
__builtin_memmove((R+28),(R+0),4);
}
B4de0e4:{NFSU2_TR(0x4de0e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de0e7:{NFSU2_TR(0x4de0e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de0eb:{NFSU2_TR(0x4de0eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de0ed:{NFSU2_TR(0x4de0ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de0f5:{NFSU2_TR(0x4de0f5);
if(r1(R+518)){{goto L4de114;}}
}
B4de0f7:L4de0f7:{c.instructions+=6;NFSU2_TR(0x4de0f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de0fd:{NFSU2_TR(0x4de0fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de0fe:{NFSU2_TR(0x4de0fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de104:{NFSU2_TR(0x4de104);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de105:{NFSU2_TR(0x4de105);
__builtin_memmove((R+4),(R+28),4);
}
B4de107:{NFSU2_TR(0x4de107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de10cull));
TAIL_STATIC(0x51e090u,51e);
}
B4de10c:L4de10c:{c.instructions+=2;NFSU2_TR(0x4de10c);
u8 U[4];
w4(U+0,u32(0x793468ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de112:{NFSU2_TR(0x4de112);
{goto L4de116;}
}
B4de114:L4de114:{c.instructions+=1;NFSU2_TR(0x4de114);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4de116:L4de116:{c.instructions+=6;NFSU2_TR(0x4de116);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de117:{NFSU2_TR(0x4de117);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de118:{NFSU2_TR(0x4de118);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de119:{NFSU2_TR(0x4de119);
__builtin_memmove((R+4),(R+24),4);
}
B4de11b:{NFSU2_TR(0x4de11b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de123:{NFSU2_TR(0x4de123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de128ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4de128:L4de128:{c.instructions+=2;NFSU2_TR(0x4de128);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de12a:{NFSU2_TR(0x4de12a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de12full));
TAIL_STATIC(0x575620u,575);
}
B4de12f:L4de12f:{c.instructions+=6;NFSU2_TR(0x4de12f);
__builtin_memmove((R+28),(R+0),4);
}
B4de131:{NFSU2_TR(0x4de131);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de134:{NFSU2_TR(0x4de134);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de138:{NFSU2_TR(0x4de138);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de13a:{NFSU2_TR(0x4de13a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de142:{NFSU2_TR(0x4de142);
if(r1(R+518)){{goto L4de177;}}
}
B4de144:L4de144:{c.instructions+=10;NFSU2_TR(0x4de144);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de149:{NFSU2_TR(0x4de149);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4de14c:{NFSU2_TR(0x4de14c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4de153:{NFSU2_TR(0x4de153);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de155:{NFSU2_TR(0x4de155);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de15b:{NFSU2_TR(0x4de15b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de15c:{NFSU2_TR(0x4de15c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de162:{NFSU2_TR(0x4de162);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de163:{NFSU2_TR(0x4de163);
__builtin_memmove((R+4),(R+28),4);
}
B4de165:{NFSU2_TR(0x4de165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de16aull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de16a:L4de16a:{c.instructions+=4;NFSU2_TR(0x4de16a);
u8 U[4];
w4(U+0,u32(0x7935a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de170:{NFSU2_TR(0x4de170);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de173:{NFSU2_TR(0x4de173);
__builtin_memmove((R+20),(R+28),4);
}
B4de175:{NFSU2_TR(0x4de175);
{goto L4de179;}
}
B4de177:L4de177:{c.instructions+=1;NFSU2_TR(0x4de177);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4de179:L4de179:{c.instructions+=3;NFSU2_TR(0x4de179);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de17b:{NFSU2_TR(0x4de17b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de183:{NFSU2_TR(0x4de183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de188ull));
TAIL_STATIC(0x575620u,575);
}
B4de188:L4de188:{c.instructions+=6;NFSU2_TR(0x4de188);
__builtin_memmove((R+12),(R+0),4);
}
B4de18a:{NFSU2_TR(0x4de18a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de18d:{NFSU2_TR(0x4de18d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de191:{NFSU2_TR(0x4de191);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de193:{NFSU2_TR(0x4de193);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de19b:{NFSU2_TR(0x4de19b);
if(r1(R+518)){{goto L4de1ce;}}
}
B4de19d:L4de19d:{c.instructions+=10;NFSU2_TR(0x4de19d);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de1a2:{NFSU2_TR(0x4de1a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4de1a5:{NFSU2_TR(0x4de1a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4de1ac:{NFSU2_TR(0x4de1ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de1ae:{NFSU2_TR(0x4de1ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de1b4:{NFSU2_TR(0x4de1b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de1b5:{NFSU2_TR(0x4de1b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de1bb:{NFSU2_TR(0x4de1bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de1bc:{NFSU2_TR(0x4de1bc);
__builtin_memmove((R+4),(R+12),4);
}
B4de1be:{NFSU2_TR(0x4de1be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de1c3ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de1c3:L4de1c3:{c.instructions+=3;NFSU2_TR(0x4de1c3);
u8 U[4];
w4(U+0,u32(0x793568ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4de1c9:{NFSU2_TR(0x4de1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de1cc:{NFSU2_TR(0x4de1cc);
{goto L4de1d0;}
}
B4de1ce:L4de1ce:{c.instructions+=1;NFSU2_TR(0x4de1ce);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4de1d0:L4de1d0:{c.instructions+=3;NFSU2_TR(0x4de1d0);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de1d2:{NFSU2_TR(0x4de1d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de1da:{NFSU2_TR(0x4de1da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de1dfull));
TAIL_STATIC(0x575620u,575);
}
B4de1df:L4de1df:{c.instructions+=6;NFSU2_TR(0x4de1df);
__builtin_memmove((R+28),(R+0),4);
}
B4de1e1:{NFSU2_TR(0x4de1e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de1e4:{NFSU2_TR(0x4de1e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de1e8:{NFSU2_TR(0x4de1e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de1ea:{NFSU2_TR(0x4de1ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de1f2:{NFSU2_TR(0x4de1f2);
if(r1(R+518)){{goto L4de211;}}
}
B4de1f4:L4de1f4:{c.instructions+=6;NFSU2_TR(0x4de1f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de1fa:{NFSU2_TR(0x4de1fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de1fb:{NFSU2_TR(0x4de1fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de201:{NFSU2_TR(0x4de201);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de202:{NFSU2_TR(0x4de202);
__builtin_memmove((R+4),(R+28),4);
}
B4de204:{NFSU2_TR(0x4de204);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de209ull));
TAIL_STATIC(0x51e090u,51e);
}
B4de209:L4de209:{c.instructions+=2;NFSU2_TR(0x4de209);
u8 U[4];
w4(U+0,u32(0x793528ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de20f:{NFSU2_TR(0x4de20f);
{goto L4de213;}
}
B4de211:L4de211:{c.instructions+=1;NFSU2_TR(0x4de211);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4de213:L4de213:{c.instructions+=6;NFSU2_TR(0x4de213);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de214:{NFSU2_TR(0x4de214);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de215:{NFSU2_TR(0x4de215);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de216:{NFSU2_TR(0x4de216);
__builtin_memmove((R+4),(R+24),4);
}
B4de218:{NFSU2_TR(0x4de218);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de220:{NFSU2_TR(0x4de220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de225ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4de225:L4de225:{c.instructions+=2;NFSU2_TR(0x4de225);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de227:{NFSU2_TR(0x4de227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de22cull));
TAIL_STATIC(0x575620u,575);
}
B4de22c:L4de22c:{c.instructions+=6;NFSU2_TR(0x4de22c);
__builtin_memmove((R+28),(R+0),4);
}
B4de22e:{NFSU2_TR(0x4de22e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de231:{NFSU2_TR(0x4de231);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de235:{NFSU2_TR(0x4de235);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de237:{NFSU2_TR(0x4de237);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de23f:{NFSU2_TR(0x4de23f);
if(r1(R+518)){{goto L4de274;}}
}
B4de241:L4de241:{c.instructions+=10;NFSU2_TR(0x4de241);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de246:{NFSU2_TR(0x4de246);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4de249:{NFSU2_TR(0x4de249);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4de250:{NFSU2_TR(0x4de250);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de252:{NFSU2_TR(0x4de252);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de258:{NFSU2_TR(0x4de258);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de259:{NFSU2_TR(0x4de259);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de25f:{NFSU2_TR(0x4de25f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de260:{NFSU2_TR(0x4de260);
__builtin_memmove((R+4),(R+28),4);
}
B4de262:{NFSU2_TR(0x4de262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de267ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de267:L4de267:{c.instructions+=4;NFSU2_TR(0x4de267);
u8 U[4];
w4(U+0,u32(0x793668ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de26d:{NFSU2_TR(0x4de26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de270:{NFSU2_TR(0x4de270);
__builtin_memmove((R+20),(R+28),4);
}
B4de272:{NFSU2_TR(0x4de272);
{goto L4de276;}
}
B4de274:L4de274:{c.instructions+=1;NFSU2_TR(0x4de274);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4de276:L4de276:{c.instructions+=3;NFSU2_TR(0x4de276);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de278:{NFSU2_TR(0x4de278);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de280:{NFSU2_TR(0x4de280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de285ull));
TAIL_STATIC(0x575620u,575);
}
B4de285:L4de285:{c.instructions+=6;NFSU2_TR(0x4de285);
__builtin_memmove((R+12),(R+0),4);
}
B4de287:{NFSU2_TR(0x4de287);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de28a:{NFSU2_TR(0x4de28a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de28e:{NFSU2_TR(0x4de28e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de290:{NFSU2_TR(0x4de290);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de298:{NFSU2_TR(0x4de298);
if(r1(R+518)){{goto L4de2cb;}}
}
B4de29a:L4de29a:{c.instructions+=10;NFSU2_TR(0x4de29a);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de29f:{NFSU2_TR(0x4de29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4de2a2:{NFSU2_TR(0x4de2a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4de2a9:{NFSU2_TR(0x4de2a9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de2ab:{NFSU2_TR(0x4de2ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de2b1:{NFSU2_TR(0x4de2b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de2b2:{NFSU2_TR(0x4de2b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de2b8:{NFSU2_TR(0x4de2b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de2b9:{NFSU2_TR(0x4de2b9);
__builtin_memmove((R+4),(R+12),4);
}
B4de2bb:{NFSU2_TR(0x4de2bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de2c0ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de2c0:L4de2c0:{c.instructions+=3;NFSU2_TR(0x4de2c0);
u8 U[4];
w4(U+0,u32(0x793628ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4de2c6:{NFSU2_TR(0x4de2c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de2c9:{NFSU2_TR(0x4de2c9);
{goto L4de2cd;}
}
B4de2cb:L4de2cb:{c.instructions+=1;NFSU2_TR(0x4de2cb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4de2cd:L4de2cd:{c.instructions+=3;NFSU2_TR(0x4de2cd);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de2cf:{NFSU2_TR(0x4de2cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de2d7:{NFSU2_TR(0x4de2d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de2dcull));
TAIL_STATIC(0x575620u,575);
}
B4de2dc:L4de2dc:{c.instructions+=6;NFSU2_TR(0x4de2dc);
__builtin_memmove((R+28),(R+0),4);
}
B4de2de:{NFSU2_TR(0x4de2de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de2e1:{NFSU2_TR(0x4de2e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de2e5:{NFSU2_TR(0x4de2e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de2e7:{NFSU2_TR(0x4de2e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de2ef:{NFSU2_TR(0x4de2ef);
if(r1(R+518)){{goto L4de30e;}}
}
B4de2f1:L4de2f1:{c.instructions+=6;NFSU2_TR(0x4de2f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de2f7:{NFSU2_TR(0x4de2f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de2f8:{NFSU2_TR(0x4de2f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de2fe:{NFSU2_TR(0x4de2fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de2ff:{NFSU2_TR(0x4de2ff);
__builtin_memmove((R+4),(R+28),4);
}
B4de301:{NFSU2_TR(0x4de301);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de306ull));
TAIL_STATIC(0x51e090u,51e);
}
B4de306:L4de306:{c.instructions+=2;NFSU2_TR(0x4de306);
u8 U[4];
w4(U+0,u32(0x7935e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de30c:{NFSU2_TR(0x4de30c);
{goto L4de310;}
}
B4de30e:L4de30e:{c.instructions+=1;NFSU2_TR(0x4de30e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4de310:L4de310:{c.instructions+=6;NFSU2_TR(0x4de310);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de311:{NFSU2_TR(0x4de311);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de312:{NFSU2_TR(0x4de312);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de313:{NFSU2_TR(0x4de313);
__builtin_memmove((R+4),(R+24),4);
}
B4de315:{NFSU2_TR(0x4de315);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de31d:{NFSU2_TR(0x4de31d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de322ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4de322:L4de322:{c.instructions+=2;NFSU2_TR(0x4de322);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de324:{NFSU2_TR(0x4de324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de329ull));
TAIL_STATIC(0x575620u,575);
}
B4de329:L4de329:{c.instructions+=6;NFSU2_TR(0x4de329);
__builtin_memmove((R+28),(R+0),4);
}
B4de32b:{NFSU2_TR(0x4de32b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de32e:{NFSU2_TR(0x4de32e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de332:{NFSU2_TR(0x4de332);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de334:{NFSU2_TR(0x4de334);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de33c:{NFSU2_TR(0x4de33c);
if(r1(R+518)){{goto L4de371;}}
}
B4de33e:L4de33e:{c.instructions+=10;NFSU2_TR(0x4de33e);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de343:{NFSU2_TR(0x4de343);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de345:{NFSU2_TR(0x4de345);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de34b:{NFSU2_TR(0x4de34b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de34c:{NFSU2_TR(0x4de34c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de352:{NFSU2_TR(0x4de352);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4de355:{NFSU2_TR(0x4de355);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4de35c:{NFSU2_TR(0x4de35c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de35d:{NFSU2_TR(0x4de35d);
__builtin_memmove((R+4),(R+28),4);
}
B4de35f:{NFSU2_TR(0x4de35f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de364ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de364:L4de364:{c.instructions+=4;NFSU2_TR(0x4de364);
u8 U[4];
w4(U+0,u32(0x793728ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de36a:{NFSU2_TR(0x4de36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de36d:{NFSU2_TR(0x4de36d);
__builtin_memmove((R+20),(R+28),4);
}
B4de36f:{NFSU2_TR(0x4de36f);
{goto L4de373;}
}
B4de371:L4de371:{c.instructions+=1;NFSU2_TR(0x4de371);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4de373:L4de373:{c.instructions+=3;NFSU2_TR(0x4de373);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de375:{NFSU2_TR(0x4de375);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de37d:{NFSU2_TR(0x4de37d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de382ull));
TAIL_STATIC(0x575620u,575);
}
B4de382:L4de382:{c.instructions+=6;NFSU2_TR(0x4de382);
__builtin_memmove((R+12),(R+0),4);
}
B4de384:{NFSU2_TR(0x4de384);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de387:{NFSU2_TR(0x4de387);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de38b:{NFSU2_TR(0x4de38b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de38d:{NFSU2_TR(0x4de38d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de395:{NFSU2_TR(0x4de395);
if(r1(R+518)){{goto L4de3c8;}}
}
B4de397:L4de397:{c.instructions+=10;NFSU2_TR(0x4de397);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de39c:{NFSU2_TR(0x4de39c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de39e:{NFSU2_TR(0x4de39e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de3a4:{NFSU2_TR(0x4de3a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de3a5:{NFSU2_TR(0x4de3a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de3ab:{NFSU2_TR(0x4de3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4de3ae:{NFSU2_TR(0x4de3ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4de3b5:{NFSU2_TR(0x4de3b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de3b6:{NFSU2_TR(0x4de3b6);
__builtin_memmove((R+4),(R+12),4);
}
B4de3b8:{NFSU2_TR(0x4de3b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de3bdull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de3bd:L4de3bd:{c.instructions+=3;NFSU2_TR(0x4de3bd);
u8 U[4];
w4(U+0,u32(0x7936e8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4de3c3:{NFSU2_TR(0x4de3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de3c6:{NFSU2_TR(0x4de3c6);
{goto L4de3ca;}
}
B4de3c8:L4de3c8:{c.instructions+=1;NFSU2_TR(0x4de3c8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4de3ca:L4de3ca:{c.instructions+=3;NFSU2_TR(0x4de3ca);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de3cc:{NFSU2_TR(0x4de3cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de3d4:{NFSU2_TR(0x4de3d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de3d9ull));
TAIL_STATIC(0x575620u,575);
}
B4de3d9:L4de3d9:{c.instructions+=6;NFSU2_TR(0x4de3d9);
__builtin_memmove((R+28),(R+0),4);
}
B4de3db:{NFSU2_TR(0x4de3db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de3de:{NFSU2_TR(0x4de3de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de3e2:{NFSU2_TR(0x4de3e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de3e4:{NFSU2_TR(0x4de3e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de3ec:{NFSU2_TR(0x4de3ec);
if(r1(R+518)){{goto L4de40b;}}
}
B4de3ee:L4de3ee:{c.instructions+=6;NFSU2_TR(0x4de3ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de3f4:{NFSU2_TR(0x4de3f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de3f5:{NFSU2_TR(0x4de3f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de3fb:{NFSU2_TR(0x4de3fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de3fc:{NFSU2_TR(0x4de3fc);
__builtin_memmove((R+4),(R+28),4);
}
B4de3fe:{NFSU2_TR(0x4de3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de403ull));
TAIL_STATIC(0x51e090u,51e);
}
B4de403:L4de403:{c.instructions+=2;NFSU2_TR(0x4de403);
u8 U[4];
w4(U+0,u32(0x7936a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de409:{NFSU2_TR(0x4de409);
{goto L4de40d;}
}
B4de40b:L4de40b:{c.instructions+=1;NFSU2_TR(0x4de40b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4de40d:L4de40d:{c.instructions+=6;NFSU2_TR(0x4de40d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de40e:{NFSU2_TR(0x4de40e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de40f:{NFSU2_TR(0x4de40f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de410:{NFSU2_TR(0x4de410);
__builtin_memmove((R+4),(R+24),4);
}
B4de412:{NFSU2_TR(0x4de412);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de41a:{NFSU2_TR(0x4de41a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de41full));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4de41f:L4de41f:{c.instructions+=2;NFSU2_TR(0x4de41f);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de421:{NFSU2_TR(0x4de421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de426ull));
TAIL_STATIC(0x575620u,575);
}
B4de426:L4de426:{c.instructions+=6;NFSU2_TR(0x4de426);
__builtin_memmove((R+28),(R+0),4);
}
B4de428:{NFSU2_TR(0x4de428);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de42b:{NFSU2_TR(0x4de42b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de42f:{NFSU2_TR(0x4de42f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de431:{NFSU2_TR(0x4de431);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de439:{NFSU2_TR(0x4de439);
if(r1(R+518)){{goto L4de46e;}}
}
B4de43b:L4de43b:{c.instructions+=10;NFSU2_TR(0x4de43b);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de440:{NFSU2_TR(0x4de440);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4de443:{NFSU2_TR(0x4de443);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4de44a:{NFSU2_TR(0x4de44a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de44c:{NFSU2_TR(0x4de44c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de452:{NFSU2_TR(0x4de452);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de453:{NFSU2_TR(0x4de453);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de459:{NFSU2_TR(0x4de459);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de45a:{NFSU2_TR(0x4de45a);
__builtin_memmove((R+4),(R+28),4);
}
B4de45c:{NFSU2_TR(0x4de45c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de461ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de461:L4de461:{c.instructions+=4;NFSU2_TR(0x4de461);
u8 U[4];
w4(U+0,u32(0x7937e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de467:{NFSU2_TR(0x4de467);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de46a:{NFSU2_TR(0x4de46a);
__builtin_memmove((R+20),(R+28),4);
}
B4de46c:{NFSU2_TR(0x4de46c);
{goto L4de470;}
}
B4de46e:L4de46e:{c.instructions+=1;NFSU2_TR(0x4de46e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4de470:L4de470:{c.instructions+=3;NFSU2_TR(0x4de470);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de472:{NFSU2_TR(0x4de472);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de47a:{NFSU2_TR(0x4de47a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de47full));
TAIL_STATIC(0x575620u,575);
}
B4de47f:L4de47f:{c.instructions+=6;NFSU2_TR(0x4de47f);
__builtin_memmove((R+12),(R+0),4);
}
B4de481:{NFSU2_TR(0x4de481);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de484:{NFSU2_TR(0x4de484);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de488:{NFSU2_TR(0x4de488);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de48a:{NFSU2_TR(0x4de48a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x19ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de492:{NFSU2_TR(0x4de492);
if(r1(R+518)){{goto L4de4c5;}}
}
B4de494:L4de494:{c.instructions+=10;NFSU2_TR(0x4de494);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de499:{NFSU2_TR(0x4de499);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4de49c:{NFSU2_TR(0x4de49c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4de4a3:{NFSU2_TR(0x4de4a3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de4a5:{NFSU2_TR(0x4de4a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de4ab:{NFSU2_TR(0x4de4ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de4ac:{NFSU2_TR(0x4de4ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de4b2:{NFSU2_TR(0x4de4b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de4b3:{NFSU2_TR(0x4de4b3);
__builtin_memmove((R+4),(R+12),4);
}
B4de4b5:{NFSU2_TR(0x4de4b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de4baull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de4ba:L4de4ba:{c.instructions+=3;NFSU2_TR(0x4de4ba);
u8 U[4];
w4(U+0,u32(0x7937a8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4de4c0:{NFSU2_TR(0x4de4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de4c3:{NFSU2_TR(0x4de4c3);
{goto L4de4c7;}
}
B4de4c5:L4de4c5:{c.instructions+=1;NFSU2_TR(0x4de4c5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4de4c7:L4de4c7:{c.instructions+=3;NFSU2_TR(0x4de4c7);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de4c9:{NFSU2_TR(0x4de4c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de4d1:{NFSU2_TR(0x4de4d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de4d6ull));
TAIL_STATIC(0x575620u,575);
}
B4de4d6:L4de4d6:{c.instructions+=6;NFSU2_TR(0x4de4d6);
__builtin_memmove((R+28),(R+0),4);
}
B4de4d8:{NFSU2_TR(0x4de4d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de4db:{NFSU2_TR(0x4de4db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de4df:{NFSU2_TR(0x4de4df);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de4e1:{NFSU2_TR(0x4de4e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1aull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de4e9:{NFSU2_TR(0x4de4e9);
if(r1(R+518)){{goto L4de508;}}
}
B4de4eb:L4de4eb:{c.instructions+=6;NFSU2_TR(0x4de4eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de4f1:{NFSU2_TR(0x4de4f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de4f2:{NFSU2_TR(0x4de4f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de4f8:{NFSU2_TR(0x4de4f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de4f9:{NFSU2_TR(0x4de4f9);
__builtin_memmove((R+4),(R+28),4);
}
B4de4fb:{NFSU2_TR(0x4de4fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de500ull));
TAIL_STATIC(0x51e090u,51e);
}
B4de500:L4de500:{c.instructions+=2;NFSU2_TR(0x4de500);
u8 U[4];
w4(U+0,u32(0x793768ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de506:{NFSU2_TR(0x4de506);
{goto L4de50a;}
}
B4de508:L4de508:{c.instructions+=1;NFSU2_TR(0x4de508);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4de50a:L4de50a:{c.instructions+=6;NFSU2_TR(0x4de50a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de50b:{NFSU2_TR(0x4de50b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de50c:{NFSU2_TR(0x4de50c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de50d:{NFSU2_TR(0x4de50d);
__builtin_memmove((R+4),(R+24),4);
}
B4de50f:{NFSU2_TR(0x4de50f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de517:{NFSU2_TR(0x4de517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de51cull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4de51c:L4de51c:{c.instructions+=2;NFSU2_TR(0x4de51c);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de51e:{NFSU2_TR(0x4de51e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de523ull));
TAIL_STATIC(0x575620u,575);
}
B4de523:L4de523:{c.instructions+=6;NFSU2_TR(0x4de523);
__builtin_memmove((R+28),(R+0),4);
}
B4de525:{NFSU2_TR(0x4de525);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de528:{NFSU2_TR(0x4de528);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de52c:{NFSU2_TR(0x4de52c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de52e:{NFSU2_TR(0x4de52e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de536:{NFSU2_TR(0x4de536);
if(r1(R+518)){{goto L4de56b;}}
}
B4de538:L4de538:{c.instructions+=10;NFSU2_TR(0x4de538);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de53d:{NFSU2_TR(0x4de53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4de540:{NFSU2_TR(0x4de540);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4de547:{NFSU2_TR(0x4de547);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de549:{NFSU2_TR(0x4de549);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de54f:{NFSU2_TR(0x4de54f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de550:{NFSU2_TR(0x4de550);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de556:{NFSU2_TR(0x4de556);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de557:{NFSU2_TR(0x4de557);
__builtin_memmove((R+4),(R+28),4);
}
B4de559:{NFSU2_TR(0x4de559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de55eull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de55e:L4de55e:{c.instructions+=4;NFSU2_TR(0x4de55e);
u8 U[4];
w4(U+0,u32(0x793968ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de564:{NFSU2_TR(0x4de564);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de567:{NFSU2_TR(0x4de567);
__builtin_memmove((R+20),(R+28),4);
}
B4de569:{NFSU2_TR(0x4de569);
{goto L4de56d;}
}
B4de56b:L4de56b:{c.instructions+=1;NFSU2_TR(0x4de56b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4de56d:L4de56d:{c.instructions+=3;NFSU2_TR(0x4de56d);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de56f:{NFSU2_TR(0x4de56f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de577:{NFSU2_TR(0x4de577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de57cull));
TAIL_STATIC(0x575620u,575);
}
B4de57c:L4de57c:{c.instructions+=6;NFSU2_TR(0x4de57c);
__builtin_memmove((R+12),(R+0),4);
}
B4de57e:{NFSU2_TR(0x4de57e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de581:{NFSU2_TR(0x4de581);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de585:{NFSU2_TR(0x4de585);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de587:{NFSU2_TR(0x4de587);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de58f:{NFSU2_TR(0x4de58f);
if(r1(R+518)){{goto L4de5c2;}}
}
B4de591:L4de591:{c.instructions+=10;NFSU2_TR(0x4de591);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de596:{NFSU2_TR(0x4de596);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4de599:{NFSU2_TR(0x4de599);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4de5a0:{NFSU2_TR(0x4de5a0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de5a2:{NFSU2_TR(0x4de5a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de5a8:{NFSU2_TR(0x4de5a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de5a9:{NFSU2_TR(0x4de5a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de5af:{NFSU2_TR(0x4de5af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de5b0:{NFSU2_TR(0x4de5b0);
__builtin_memmove((R+4),(R+12),4);
}
B4de5b2:{NFSU2_TR(0x4de5b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de5b7ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de5b7:L4de5b7:{c.instructions+=3;NFSU2_TR(0x4de5b7);
u8 U[4];
w4(U+0,u32(0x793928ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4de5bd:{NFSU2_TR(0x4de5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de5c0:{NFSU2_TR(0x4de5c0);
{goto L4de5c4;}
}
B4de5c2:L4de5c2:{c.instructions+=1;NFSU2_TR(0x4de5c2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4de5c4:L4de5c4:{c.instructions+=3;NFSU2_TR(0x4de5c4);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de5c6:{NFSU2_TR(0x4de5c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de5ce:{NFSU2_TR(0x4de5ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de5d3ull));
TAIL_STATIC(0x575620u,575);
}
B4de5d3:L4de5d3:{c.instructions+=6;NFSU2_TR(0x4de5d3);
__builtin_memmove((R+28),(R+0),4);
}
B4de5d5:{NFSU2_TR(0x4de5d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de5d8:{NFSU2_TR(0x4de5d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de5dc:{NFSU2_TR(0x4de5dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de5de:{NFSU2_TR(0x4de5de);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1dull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de5e6:{NFSU2_TR(0x4de5e6);
if(r1(R+518)){{goto L4de605;}}
}
B4de5e8:L4de5e8:{c.instructions+=6;NFSU2_TR(0x4de5e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de5ee:{NFSU2_TR(0x4de5ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de5ef:{NFSU2_TR(0x4de5ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de5f5:{NFSU2_TR(0x4de5f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de5f6:{NFSU2_TR(0x4de5f6);
__builtin_memmove((R+4),(R+28),4);
}
B4de5f8:{NFSU2_TR(0x4de5f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de5fdull));
TAIL_STATIC(0x51e090u,51e);
}
B4de5fd:L4de5fd:{c.instructions+=2;NFSU2_TR(0x4de5fd);
u8 U[4];
w4(U+0,u32(0x7938e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de603:{NFSU2_TR(0x4de603);
{goto L4de607;}
}
B4de605:L4de605:{c.instructions+=1;NFSU2_TR(0x4de605);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4de607:L4de607:{c.instructions+=6;NFSU2_TR(0x4de607);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de608:{NFSU2_TR(0x4de608);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de609:{NFSU2_TR(0x4de609);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de60a:{NFSU2_TR(0x4de60a);
__builtin_memmove((R+4),(R+24),4);
}
B4de60c:{NFSU2_TR(0x4de60c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de614:{NFSU2_TR(0x4de614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de619ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4de619:L4de619:{c.instructions+=2;NFSU2_TR(0x4de619);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de61b:{NFSU2_TR(0x4de61b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de620ull));
TAIL_STATIC(0x575620u,575);
}
B4de620:L4de620:{c.instructions+=6;NFSU2_TR(0x4de620);
__builtin_memmove((R+28),(R+0),4);
}
B4de622:{NFSU2_TR(0x4de622);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de625:{NFSU2_TR(0x4de625);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de629:{NFSU2_TR(0x4de629);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de62b:{NFSU2_TR(0x4de62b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de633:{NFSU2_TR(0x4de633);
if(r1(R+518)){{goto L4de668;}}
}
B4de635:L4de635:{c.instructions+=10;NFSU2_TR(0x4de635);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de63a:{NFSU2_TR(0x4de63a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de63c:{NFSU2_TR(0x4de63c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de642:{NFSU2_TR(0x4de642);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de643:{NFSU2_TR(0x4de643);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de649:{NFSU2_TR(0x4de649);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4de64c:{NFSU2_TR(0x4de64c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4de653:{NFSU2_TR(0x4de653);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de654:{NFSU2_TR(0x4de654);
__builtin_memmove((R+4),(R+28),4);
}
B4de656:{NFSU2_TR(0x4de656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de65bull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de65b:L4de65b:{c.instructions+=4;NFSU2_TR(0x4de65b);
u8 U[4];
w4(U+0,u32(0x793a28ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de661:{NFSU2_TR(0x4de661);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de664:{NFSU2_TR(0x4de664);
__builtin_memmove((R+20),(R+28),4);
}
B4de666:{NFSU2_TR(0x4de666);
{goto L4de66a;}
}
B4de668:L4de668:{c.instructions+=1;NFSU2_TR(0x4de668);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4de66a:L4de66a:{c.instructions+=3;NFSU2_TR(0x4de66a);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de66c:{NFSU2_TR(0x4de66c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de674:{NFSU2_TR(0x4de674);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de679ull));
TAIL_STATIC(0x575620u,575);
}
B4de679:L4de679:{c.instructions+=6;NFSU2_TR(0x4de679);
__builtin_memmove((R+12),(R+0),4);
}
B4de67b:{NFSU2_TR(0x4de67b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de67e:{NFSU2_TR(0x4de67e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de682:{NFSU2_TR(0x4de682);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de684:{NFSU2_TR(0x4de684);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1full));
s4(u32(r4(U+0)),r4(U+4));
}
B4de68c:{NFSU2_TR(0x4de68c);
if(r1(R+518)){{goto L4de6bf;}}
}
B4de68e:L4de68e:{c.instructions+=10;NFSU2_TR(0x4de68e);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de693:{NFSU2_TR(0x4de693);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de695:{NFSU2_TR(0x4de695);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de69b:{NFSU2_TR(0x4de69b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de69c:{NFSU2_TR(0x4de69c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de6a2:{NFSU2_TR(0x4de6a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4de6a5:{NFSU2_TR(0x4de6a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4de6ac:{NFSU2_TR(0x4de6ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de6ad:{NFSU2_TR(0x4de6ad);
__builtin_memmove((R+4),(R+12),4);
}
B4de6af:{NFSU2_TR(0x4de6af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de6b4ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de6b4:L4de6b4:{c.instructions+=3;NFSU2_TR(0x4de6b4);
u8 U[4];
w4(U+0,u32(0x7939e8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4de6ba:{NFSU2_TR(0x4de6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de6bd:{NFSU2_TR(0x4de6bd);
{goto L4de6c1;}
}
B4de6bf:L4de6bf:{c.instructions+=1;NFSU2_TR(0x4de6bf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4de6c1:L4de6c1:{c.instructions+=3;NFSU2_TR(0x4de6c1);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de6c3:{NFSU2_TR(0x4de6c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de6cb:{NFSU2_TR(0x4de6cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de6d0ull));
TAIL_STATIC(0x575620u,575);
}
B4de6d0:L4de6d0:{c.instructions+=6;NFSU2_TR(0x4de6d0);
__builtin_memmove((R+28),(R+0),4);
}
B4de6d2:{NFSU2_TR(0x4de6d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de6d5:{NFSU2_TR(0x4de6d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de6d9:{NFSU2_TR(0x4de6d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de6db:{NFSU2_TR(0x4de6db);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de6e3:{NFSU2_TR(0x4de6e3);
if(r1(R+518)){{goto L4de702;}}
}
B4de6e5:L4de6e5:{c.instructions+=6;NFSU2_TR(0x4de6e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de6eb:{NFSU2_TR(0x4de6eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de6ec:{NFSU2_TR(0x4de6ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de6f2:{NFSU2_TR(0x4de6f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de6f3:{NFSU2_TR(0x4de6f3);
__builtin_memmove((R+4),(R+28),4);
}
B4de6f5:{NFSU2_TR(0x4de6f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de6faull));
TAIL_STATIC(0x51e090u,51e);
}
B4de6fa:L4de6fa:{c.instructions+=2;NFSU2_TR(0x4de6fa);
u8 U[4];
w4(U+0,u32(0x7939a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de700:{NFSU2_TR(0x4de700);
{goto L4de704;}
}
B4de702:L4de702:{c.instructions+=1;NFSU2_TR(0x4de702);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4de704:L4de704:{c.instructions+=6;NFSU2_TR(0x4de704);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de705:{NFSU2_TR(0x4de705);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de706:{NFSU2_TR(0x4de706);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de707:{NFSU2_TR(0x4de707);
__builtin_memmove((R+4),(R+24),4);
}
B4de709:{NFSU2_TR(0x4de709);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de711:{NFSU2_TR(0x4de711);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de716ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4de716:L4de716:{c.instructions+=2;NFSU2_TR(0x4de716);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de718:{NFSU2_TR(0x4de718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de71dull));
TAIL_STATIC(0x575620u,575);
}
B4de71d:L4de71d:{c.instructions+=6;NFSU2_TR(0x4de71d);
__builtin_memmove((R+28),(R+0),4);
}
B4de71f:{NFSU2_TR(0x4de71f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de722:{NFSU2_TR(0x4de722);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de726:{NFSU2_TR(0x4de726);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de728:{NFSU2_TR(0x4de728);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x21ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de730:{NFSU2_TR(0x4de730);
if(r1(R+518)){{goto L4de765;}}
}
B4de732:L4de732:{c.instructions+=10;NFSU2_TR(0x4de732);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de737:{NFSU2_TR(0x4de737);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4de73a:{NFSU2_TR(0x4de73a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4de741:{NFSU2_TR(0x4de741);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de743:{NFSU2_TR(0x4de743);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de749:{NFSU2_TR(0x4de749);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de74a:{NFSU2_TR(0x4de74a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de750:{NFSU2_TR(0x4de750);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de751:{NFSU2_TR(0x4de751);
__builtin_memmove((R+4),(R+28),4);
}
B4de753:{NFSU2_TR(0x4de753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de758ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de758:L4de758:{c.instructions+=4;NFSU2_TR(0x4de758);
u8 U[4];
w4(U+0,u32(0x7930a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de75e:{NFSU2_TR(0x4de75e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de761:{NFSU2_TR(0x4de761);
__builtin_memmove((R+20),(R+28),4);
}
B4de763:{NFSU2_TR(0x4de763);
{goto L4de767;}
}
B4de765:L4de765:{c.instructions+=1;NFSU2_TR(0x4de765);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4de767:L4de767:{c.instructions+=3;NFSU2_TR(0x4de767);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de769:{NFSU2_TR(0x4de769);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de771:{NFSU2_TR(0x4de771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de776ull));
TAIL_STATIC(0x575620u,575);
}
B4de776:L4de776:{c.instructions+=6;NFSU2_TR(0x4de776);
__builtin_memmove((R+12),(R+0),4);
}
B4de778:{NFSU2_TR(0x4de778);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de77b:{NFSU2_TR(0x4de77b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de77f:{NFSU2_TR(0x4de77f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de781:{NFSU2_TR(0x4de781);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x22ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de789:{NFSU2_TR(0x4de789);
if(r1(R+518)){{goto L4de7bc;}}
}
B4de78b:L4de78b:{c.instructions+=10;NFSU2_TR(0x4de78b);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de790:{NFSU2_TR(0x4de790);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4de793:{NFSU2_TR(0x4de793);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4de79a:{NFSU2_TR(0x4de79a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de79c:{NFSU2_TR(0x4de79c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de7a2:{NFSU2_TR(0x4de7a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de7a3:{NFSU2_TR(0x4de7a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de7a9:{NFSU2_TR(0x4de7a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de7aa:{NFSU2_TR(0x4de7aa);
__builtin_memmove((R+4),(R+12),4);
}
B4de7ac:{NFSU2_TR(0x4de7ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de7b1ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de7b1:L4de7b1:{c.instructions+=3;NFSU2_TR(0x4de7b1);
u8 U[4];
w4(U+0,u32(0x793868ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4de7b7:{NFSU2_TR(0x4de7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de7ba:{NFSU2_TR(0x4de7ba);
{goto L4de7be;}
}
B4de7bc:L4de7bc:{c.instructions+=1;NFSU2_TR(0x4de7bc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4de7be:L4de7be:{c.instructions+=3;NFSU2_TR(0x4de7be);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de7c0:{NFSU2_TR(0x4de7c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de7c8:{NFSU2_TR(0x4de7c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de7cdull));
TAIL_STATIC(0x575620u,575);
}
B4de7cd:L4de7cd:{c.instructions+=6;NFSU2_TR(0x4de7cd);
__builtin_memmove((R+28),(R+0),4);
}
B4de7cf:{NFSU2_TR(0x4de7cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de7d2:{NFSU2_TR(0x4de7d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de7d6:{NFSU2_TR(0x4de7d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de7d8:{NFSU2_TR(0x4de7d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x23ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de7e0:{NFSU2_TR(0x4de7e0);
if(r1(R+518)){{goto L4de7ff;}}
}
B4de7e2:L4de7e2:{c.instructions+=6;NFSU2_TR(0x4de7e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de7e8:{NFSU2_TR(0x4de7e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de7e9:{NFSU2_TR(0x4de7e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de7ef:{NFSU2_TR(0x4de7ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de7f0:{NFSU2_TR(0x4de7f0);
__builtin_memmove((R+4),(R+28),4);
}
B4de7f2:{NFSU2_TR(0x4de7f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de7f7ull));
TAIL_STATIC(0x51e090u,51e);
}
B4de7f7:L4de7f7:{c.instructions+=2;NFSU2_TR(0x4de7f7);
u8 U[4];
w4(U+0,u32(0x793828ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de7fd:{NFSU2_TR(0x4de7fd);
{goto L4de801;}
}
B4de7ff:L4de7ff:{c.instructions+=1;NFSU2_TR(0x4de7ff);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4de801:L4de801:{c.instructions+=6;NFSU2_TR(0x4de801);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de802:{NFSU2_TR(0x4de802);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de803:{NFSU2_TR(0x4de803);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de804:{NFSU2_TR(0x4de804);
__builtin_memmove((R+4),(R+24),4);
}
B4de806:{NFSU2_TR(0x4de806);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de80e:{NFSU2_TR(0x4de80e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de813ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4de813:L4de813:{c.instructions+=2;NFSU2_TR(0x4de813);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de815:{NFSU2_TR(0x4de815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de81aull));
TAIL_STATIC(0x575620u,575);
}
B4de81a:L4de81a:{c.instructions+=6;NFSU2_TR(0x4de81a);
__builtin_memmove((R+28),(R+0),4);
}
B4de81c:{NFSU2_TR(0x4de81c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de81f:{NFSU2_TR(0x4de81f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de823:{NFSU2_TR(0x4de823);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de825:{NFSU2_TR(0x4de825);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x24ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de82d:{NFSU2_TR(0x4de82d);
if(r1(R+518)){{goto L4de862;}}
}
B4de82f:L4de82f:{c.instructions+=10;NFSU2_TR(0x4de82f);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de834:{NFSU2_TR(0x4de834);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4de837:{NFSU2_TR(0x4de837);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4de83e:{NFSU2_TR(0x4de83e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de840:{NFSU2_TR(0x4de840);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de846:{NFSU2_TR(0x4de846);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de847:{NFSU2_TR(0x4de847);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de84d:{NFSU2_TR(0x4de84d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de84e:{NFSU2_TR(0x4de84e);
__builtin_memmove((R+4),(R+28),4);
}
B4de850:{NFSU2_TR(0x4de850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de855ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de855:L4de855:{c.instructions+=4;NFSU2_TR(0x4de855);
u8 U[4];
w4(U+0,u32(0x793ae8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de85b:{NFSU2_TR(0x4de85b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de85e:{NFSU2_TR(0x4de85e);
__builtin_memmove((R+20),(R+28),4);
}
B4de860:{NFSU2_TR(0x4de860);
{goto L4de864;}
}
B4de862:L4de862:{c.instructions+=1;NFSU2_TR(0x4de862);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4de864:L4de864:{c.instructions+=3;NFSU2_TR(0x4de864);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de866:{NFSU2_TR(0x4de866);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de86e:{NFSU2_TR(0x4de86e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de873ull));
TAIL_STATIC(0x575620u,575);
}
B4de873:L4de873:{c.instructions+=6;NFSU2_TR(0x4de873);
__builtin_memmove((R+12),(R+0),4);
}
B4de875:{NFSU2_TR(0x4de875);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de878:{NFSU2_TR(0x4de878);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de87c:{NFSU2_TR(0x4de87c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de87e:{NFSU2_TR(0x4de87e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x25ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de886:{NFSU2_TR(0x4de886);
if(r1(R+518)){{goto L4de8b9;}}
}
B4de888:L4de888:{c.instructions+=10;NFSU2_TR(0x4de888);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de88d:{NFSU2_TR(0x4de88d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4de890:{NFSU2_TR(0x4de890);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4de897:{NFSU2_TR(0x4de897);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de899:{NFSU2_TR(0x4de899);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de89f:{NFSU2_TR(0x4de89f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de8a0:{NFSU2_TR(0x4de8a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de8a6:{NFSU2_TR(0x4de8a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de8a7:{NFSU2_TR(0x4de8a7);
__builtin_memmove((R+4),(R+12),4);
}
B4de8a9:{NFSU2_TR(0x4de8a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de8aeull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de8ae:L4de8ae:{c.instructions+=3;NFSU2_TR(0x4de8ae);
u8 U[4];
w4(U+0,u32(0x793aa8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4de8b4:{NFSU2_TR(0x4de8b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de8b7:{NFSU2_TR(0x4de8b7);
{goto L4de8bb;}
}
B4de8b9:L4de8b9:{c.instructions+=1;NFSU2_TR(0x4de8b9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4de8bb:L4de8bb:{c.instructions+=3;NFSU2_TR(0x4de8bb);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de8bd:{NFSU2_TR(0x4de8bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de8c5:{NFSU2_TR(0x4de8c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de8caull));
TAIL_STATIC(0x575620u,575);
}
B4de8ca:L4de8ca:{c.instructions+=6;NFSU2_TR(0x4de8ca);
__builtin_memmove((R+28),(R+0),4);
}
B4de8cc:{NFSU2_TR(0x4de8cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de8cf:{NFSU2_TR(0x4de8cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de8d3:{NFSU2_TR(0x4de8d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de8d5:{NFSU2_TR(0x4de8d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x26ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de8dd:{NFSU2_TR(0x4de8dd);
if(r1(R+518)){{goto L4de8fc;}}
}
B4de8df:L4de8df:{c.instructions+=6;NFSU2_TR(0x4de8df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de8e5:{NFSU2_TR(0x4de8e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de8e6:{NFSU2_TR(0x4de8e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de8ec:{NFSU2_TR(0x4de8ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de8ed:{NFSU2_TR(0x4de8ed);
__builtin_memmove((R+4),(R+28),4);
}
B4de8ef:{NFSU2_TR(0x4de8ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de8f4ull));
TAIL_STATIC(0x51e090u,51e);
}
B4de8f4:L4de8f4:{c.instructions+=2;NFSU2_TR(0x4de8f4);
u8 U[4];
w4(U+0,u32(0x793a68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de8fa:{NFSU2_TR(0x4de8fa);
{goto L4de8fe;}
}
B4de8fc:L4de8fc:{c.instructions+=1;NFSU2_TR(0x4de8fc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4de8fe:L4de8fe:{c.instructions+=6;NFSU2_TR(0x4de8fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de8ff:{NFSU2_TR(0x4de8ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de900:{NFSU2_TR(0x4de900);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de901:{NFSU2_TR(0x4de901);
__builtin_memmove((R+4),(R+24),4);
}
B4de903:{NFSU2_TR(0x4de903);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de90b:{NFSU2_TR(0x4de90b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de910ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4de910:L4de910:{c.instructions+=2;NFSU2_TR(0x4de910);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de912:{NFSU2_TR(0x4de912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de917ull));
TAIL_STATIC(0x575620u,575);
}
B4de917:L4de917:{c.instructions+=6;NFSU2_TR(0x4de917);
__builtin_memmove((R+28),(R+0),4);
}
B4de919:{NFSU2_TR(0x4de919);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de91c:{NFSU2_TR(0x4de91c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de920:{NFSU2_TR(0x4de920);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de922:{NFSU2_TR(0x4de922);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x27ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de92a:{NFSU2_TR(0x4de92a);
if(r1(R+518)){{goto L4de95f;}}
}
B4de92c:L4de92c:{c.instructions+=10;NFSU2_TR(0x4de92c);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de931:{NFSU2_TR(0x4de931);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de933:{NFSU2_TR(0x4de933);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de939:{NFSU2_TR(0x4de939);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de93a:{NFSU2_TR(0x4de93a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de940:{NFSU2_TR(0x4de940);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4de943:{NFSU2_TR(0x4de943);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4de94a:{NFSU2_TR(0x4de94a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de94b:{NFSU2_TR(0x4de94b);
__builtin_memmove((R+4),(R+28),4);
}
B4de94d:{NFSU2_TR(0x4de94d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de952ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de952:L4de952:{c.instructions+=4;NFSU2_TR(0x4de952);
u8 U[4];
w4(U+0,u32(0x793ba8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de958:{NFSU2_TR(0x4de958);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de95b:{NFSU2_TR(0x4de95b);
__builtin_memmove((R+20),(R+28),4);
}
B4de95d:{NFSU2_TR(0x4de95d);
{goto L4de961;}
}
B4de95f:L4de95f:{c.instructions+=1;NFSU2_TR(0x4de95f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4de961:L4de961:{c.instructions+=3;NFSU2_TR(0x4de961);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de963:{NFSU2_TR(0x4de963);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de96b:{NFSU2_TR(0x4de96b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de970ull));
TAIL_STATIC(0x575620u,575);
}
B4de970:L4de970:{c.instructions+=6;NFSU2_TR(0x4de970);
__builtin_memmove((R+12),(R+0),4);
}
B4de972:{NFSU2_TR(0x4de972);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de975:{NFSU2_TR(0x4de975);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de979:{NFSU2_TR(0x4de979);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de97b:{NFSU2_TR(0x4de97b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x28ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de983:{NFSU2_TR(0x4de983);
if(r1(R+518)){{goto L4de9b6;}}
}
B4de985:L4de985:{c.instructions+=10;NFSU2_TR(0x4de985);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4de98a:{NFSU2_TR(0x4de98a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de98c:{NFSU2_TR(0x4de98c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de992:{NFSU2_TR(0x4de992);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de993:{NFSU2_TR(0x4de993);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4de999:{NFSU2_TR(0x4de999);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4de99c:{NFSU2_TR(0x4de99c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4de9a3:{NFSU2_TR(0x4de9a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de9a4:{NFSU2_TR(0x4de9a4);
__builtin_memmove((R+4),(R+12),4);
}
B4de9a6:{NFSU2_TR(0x4de9a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de9abull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4de9ab:L4de9ab:{c.instructions+=3;NFSU2_TR(0x4de9ab);
u8 U[4];
w4(U+0,u32(0x793b68ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4de9b1:{NFSU2_TR(0x4de9b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de9b4:{NFSU2_TR(0x4de9b4);
{goto L4de9b8;}
}
B4de9b6:L4de9b6:{c.instructions+=1;NFSU2_TR(0x4de9b6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4de9b8:L4de9b8:{c.instructions+=3;NFSU2_TR(0x4de9b8);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de9ba:{NFSU2_TR(0x4de9ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de9c2:{NFSU2_TR(0x4de9c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de9c7ull));
TAIL_STATIC(0x575620u,575);
}
B4de9c7:L4de9c7:{c.instructions+=6;NFSU2_TR(0x4de9c7);
__builtin_memmove((R+28),(R+0),4);
}
B4de9c9:{NFSU2_TR(0x4de9c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4de9cc:{NFSU2_TR(0x4de9cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4de9d0:{NFSU2_TR(0x4de9d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4de9d2:{NFSU2_TR(0x4de9d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x29ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4de9da:{NFSU2_TR(0x4de9da);
if(r1(R+518)){{goto L4de9f9;}}
}
B4de9dc:L4de9dc:{c.instructions+=6;NFSU2_TR(0x4de9dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4de9e2:{NFSU2_TR(0x4de9e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de9e3:{NFSU2_TR(0x4de9e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4de9e9:{NFSU2_TR(0x4de9e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de9ea:{NFSU2_TR(0x4de9ea);
__builtin_memmove((R+4),(R+28),4);
}
B4de9ec:{NFSU2_TR(0x4de9ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4de9f1ull));
TAIL_STATIC(0x51e090u,51e);
}
B4de9f1:L4de9f1:{c.instructions+=2;NFSU2_TR(0x4de9f1);
u8 U[4];
w4(U+0,u32(0x793b28ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4de9f7:{NFSU2_TR(0x4de9f7);
{goto L4de9fb;}
}
B4de9f9:L4de9f9:{c.instructions+=1;NFSU2_TR(0x4de9f9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4de9fb:L4de9fb:{c.instructions+=6;NFSU2_TR(0x4de9fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de9fc:{NFSU2_TR(0x4de9fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de9fd:{NFSU2_TR(0x4de9fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4de9fe:{NFSU2_TR(0x4de9fe);
__builtin_memmove((R+4),(R+24),4);
}
B4dea00:{NFSU2_TR(0x4dea00);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dea08:{NFSU2_TR(0x4dea08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dea0dull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dea0d:L4dea0d:{c.instructions+=2;NFSU2_TR(0x4dea0d);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dea0f:{NFSU2_TR(0x4dea0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dea14ull));
TAIL_STATIC(0x575620u,575);
}
B4dea14:L4dea14:{c.instructions+=6;NFSU2_TR(0x4dea14);
__builtin_memmove((R+28),(R+0),4);
}
B4dea16:{NFSU2_TR(0x4dea16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dea19:{NFSU2_TR(0x4dea19);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dea1d:{NFSU2_TR(0x4dea1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dea1f:{NFSU2_TR(0x4dea1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2aull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dea27:{NFSU2_TR(0x4dea27);
if(r1(R+518)){{goto L4dea5c;}}
}
B4dea29:L4dea29:{c.instructions+=10;NFSU2_TR(0x4dea29);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dea2e:{NFSU2_TR(0x4dea2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dea31:{NFSU2_TR(0x4dea31);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dea38:{NFSU2_TR(0x4dea38);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dea3a:{NFSU2_TR(0x4dea3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dea40:{NFSU2_TR(0x4dea40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dea41:{NFSU2_TR(0x4dea41);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dea47:{NFSU2_TR(0x4dea47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dea48:{NFSU2_TR(0x4dea48);
__builtin_memmove((R+4),(R+28),4);
}
B4dea4a:{NFSU2_TR(0x4dea4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dea4full));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dea4f:L4dea4f:{c.instructions+=4;NFSU2_TR(0x4dea4f);
u8 U[4];
w4(U+0,u32(0x793c68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dea55:{NFSU2_TR(0x4dea55);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dea58:{NFSU2_TR(0x4dea58);
__builtin_memmove((R+20),(R+28),4);
}
B4dea5a:{NFSU2_TR(0x4dea5a);
{goto L4dea5e;}
}
B4dea5c:L4dea5c:{c.instructions+=1;NFSU2_TR(0x4dea5c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dea5e:L4dea5e:{c.instructions+=3;NFSU2_TR(0x4dea5e);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dea60:{NFSU2_TR(0x4dea60);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dea68:{NFSU2_TR(0x4dea68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dea6dull));
TAIL_STATIC(0x575620u,575);
}
B4dea6d:L4dea6d:{c.instructions+=6;NFSU2_TR(0x4dea6d);
__builtin_memmove((R+12),(R+0),4);
}
B4dea6f:{NFSU2_TR(0x4dea6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dea72:{NFSU2_TR(0x4dea72);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dea76:{NFSU2_TR(0x4dea76);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dea78:{NFSU2_TR(0x4dea78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2bull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dea80:{NFSU2_TR(0x4dea80);
if(r1(R+518)){{goto L4deab3;}}
}
B4dea82:L4dea82:{c.instructions+=10;NFSU2_TR(0x4dea82);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dea87:{NFSU2_TR(0x4dea87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dea8a:{NFSU2_TR(0x4dea8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dea91:{NFSU2_TR(0x4dea91);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dea93:{NFSU2_TR(0x4dea93);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dea99:{NFSU2_TR(0x4dea99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dea9a:{NFSU2_TR(0x4dea9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4deaa0:{NFSU2_TR(0x4deaa0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deaa1:{NFSU2_TR(0x4deaa1);
__builtin_memmove((R+4),(R+12),4);
}
B4deaa3:{NFSU2_TR(0x4deaa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deaa8ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4deaa8:L4deaa8:{c.instructions+=3;NFSU2_TR(0x4deaa8);
u8 U[4];
w4(U+0,u32(0x793c28ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4deaae:{NFSU2_TR(0x4deaae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4deab1:{NFSU2_TR(0x4deab1);
{goto L4deab5;}
}
B4deab3:L4deab3:{c.instructions+=1;NFSU2_TR(0x4deab3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4deab5:L4deab5:{c.instructions+=3;NFSU2_TR(0x4deab5);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deab7:{NFSU2_TR(0x4deab7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4deabf:{NFSU2_TR(0x4deabf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deac4ull));
TAIL_STATIC(0x575620u,575);
}
B4deac4:L4deac4:{c.instructions+=6;NFSU2_TR(0x4deac4);
__builtin_memmove((R+28),(R+0),4);
}
B4deac6:{NFSU2_TR(0x4deac6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4deac9:{NFSU2_TR(0x4deac9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4deacd:{NFSU2_TR(0x4deacd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4deacf:{NFSU2_TR(0x4deacf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dead7:{NFSU2_TR(0x4dead7);
if(r1(R+518)){{goto L4deaf6;}}
}
B4dead9:L4dead9:{c.instructions+=6;NFSU2_TR(0x4dead9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4deadf:{NFSU2_TR(0x4deadf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deae0:{NFSU2_TR(0x4deae0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4deae6:{NFSU2_TR(0x4deae6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deae7:{NFSU2_TR(0x4deae7);
__builtin_memmove((R+4),(R+28),4);
}
B4deae9:{NFSU2_TR(0x4deae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deaeeull));
TAIL_STATIC(0x51e090u,51e);
}
B4deaee:L4deaee:{c.instructions+=2;NFSU2_TR(0x4deaee);
u8 U[4];
w4(U+0,u32(0x793be8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4deaf4:{NFSU2_TR(0x4deaf4);
{goto L4deaf8;}
}
B4deaf6:L4deaf6:{c.instructions+=1;NFSU2_TR(0x4deaf6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4deaf8:L4deaf8:{c.instructions+=6;NFSU2_TR(0x4deaf8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deaf9:{NFSU2_TR(0x4deaf9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deafa:{NFSU2_TR(0x4deafa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deafb:{NFSU2_TR(0x4deafb);
__builtin_memmove((R+4),(R+24),4);
}
B4deafd:{NFSU2_TR(0x4deafd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4deb05:{NFSU2_TR(0x4deb05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deb0aull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4deb0a:L4deb0a:{c.instructions+=2;NFSU2_TR(0x4deb0a);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deb0c:{NFSU2_TR(0x4deb0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deb11ull));
TAIL_STATIC(0x575620u,575);
}
B4deb11:L4deb11:{c.instructions+=6;NFSU2_TR(0x4deb11);
__builtin_memmove((R+28),(R+0),4);
}
B4deb13:{NFSU2_TR(0x4deb13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4deb16:{NFSU2_TR(0x4deb16);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4deb1a:{NFSU2_TR(0x4deb1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4deb1c:{NFSU2_TR(0x4deb1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2dull));
s4(u32(r4(U+0)),r4(U+4));
}
B4deb24:{NFSU2_TR(0x4deb24);
if(r1(R+518)){{goto L4deb59;}}
}
B4deb26:L4deb26:{c.instructions+=10;NFSU2_TR(0x4deb26);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4deb2b:{NFSU2_TR(0x4deb2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4deb2e:{NFSU2_TR(0x4deb2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4deb35:{NFSU2_TR(0x4deb35);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deb37:{NFSU2_TR(0x4deb37);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4deb3d:{NFSU2_TR(0x4deb3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deb3e:{NFSU2_TR(0x4deb3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4deb44:{NFSU2_TR(0x4deb44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deb45:{NFSU2_TR(0x4deb45);
__builtin_memmove((R+4),(R+28),4);
}
B4deb47:{NFSU2_TR(0x4deb47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deb4cull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4deb4c:L4deb4c:{c.instructions+=4;NFSU2_TR(0x4deb4c);
u8 U[4];
w4(U+0,u32(0x793d28ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4deb52:{NFSU2_TR(0x4deb52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4deb55:{NFSU2_TR(0x4deb55);
__builtin_memmove((R+20),(R+28),4);
}
B4deb57:{NFSU2_TR(0x4deb57);
{goto L4deb5b;}
}
B4deb59:L4deb59:{c.instructions+=1;NFSU2_TR(0x4deb59);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4deb5b:L4deb5b:{c.instructions+=3;NFSU2_TR(0x4deb5b);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deb5d:{NFSU2_TR(0x4deb5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4deb65:{NFSU2_TR(0x4deb65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deb6aull));
TAIL_STATIC(0x575620u,575);
}
B4deb6a:L4deb6a:{c.instructions+=6;NFSU2_TR(0x4deb6a);
__builtin_memmove((R+12),(R+0),4);
}
B4deb6c:{NFSU2_TR(0x4deb6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4deb6f:{NFSU2_TR(0x4deb6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4deb73:{NFSU2_TR(0x4deb73);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4deb75:{NFSU2_TR(0x4deb75);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2eull));
s4(u32(r4(U+0)),r4(U+4));
}
B4deb7d:{NFSU2_TR(0x4deb7d);
if(r1(R+518)){{goto L4debb0;}}
}
B4deb7f:L4deb7f:{c.instructions+=10;NFSU2_TR(0x4deb7f);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4deb84:{NFSU2_TR(0x4deb84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4deb87:{NFSU2_TR(0x4deb87);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4deb8e:{NFSU2_TR(0x4deb8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deb90:{NFSU2_TR(0x4deb90);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4deb96:{NFSU2_TR(0x4deb96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deb97:{NFSU2_TR(0x4deb97);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4deb9d:{NFSU2_TR(0x4deb9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deb9e:{NFSU2_TR(0x4deb9e);
__builtin_memmove((R+4),(R+12),4);
}
B4deba0:{NFSU2_TR(0x4deba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deba5ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4deba5:L4deba5:{c.instructions+=3;NFSU2_TR(0x4deba5);
u8 U[4];
w4(U+0,u32(0x793ce8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4debab:{NFSU2_TR(0x4debab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4debae:{NFSU2_TR(0x4debae);
{goto L4debb2;}
}
B4debb0:L4debb0:{c.instructions+=1;NFSU2_TR(0x4debb0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4debb2:L4debb2:{c.instructions+=3;NFSU2_TR(0x4debb2);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4debb4:{NFSU2_TR(0x4debb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4debbc:{NFSU2_TR(0x4debbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4debc1ull));
TAIL_STATIC(0x575620u,575);
}
B4debc1:L4debc1:{c.instructions+=6;NFSU2_TR(0x4debc1);
__builtin_memmove((R+28),(R+0),4);
}
B4debc3:{NFSU2_TR(0x4debc3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4debc6:{NFSU2_TR(0x4debc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4debca:{NFSU2_TR(0x4debca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4debcc:{NFSU2_TR(0x4debcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2full));
s4(u32(r4(U+0)),r4(U+4));
}
B4debd4:{NFSU2_TR(0x4debd4);
if(r1(R+518)){{goto L4debf3;}}
}
B4debd6:L4debd6:{c.instructions+=6;NFSU2_TR(0x4debd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4debdc:{NFSU2_TR(0x4debdc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4debdd:{NFSU2_TR(0x4debdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4debe3:{NFSU2_TR(0x4debe3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4debe4:{NFSU2_TR(0x4debe4);
__builtin_memmove((R+4),(R+28),4);
}
B4debe6:{NFSU2_TR(0x4debe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4debebull));
TAIL_STATIC(0x51e090u,51e);
}
B4debeb:L4debeb:{c.instructions+=2;NFSU2_TR(0x4debeb);
u8 U[4];
w4(U+0,u32(0x793ca8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4debf1:{NFSU2_TR(0x4debf1);
{goto L4debf5;}
}
B4debf3:L4debf3:{c.instructions+=1;NFSU2_TR(0x4debf3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4debf5:L4debf5:{c.instructions+=6;NFSU2_TR(0x4debf5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4debf6:{NFSU2_TR(0x4debf6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4debf7:{NFSU2_TR(0x4debf7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4debf8:{NFSU2_TR(0x4debf8);
__builtin_memmove((R+4),(R+24),4);
}
B4debfa:{NFSU2_TR(0x4debfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dec02:{NFSU2_TR(0x4dec02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dec07ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dec07:L4dec07:{c.instructions+=4;NFSU2_TR(0x4dec07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dec0a:{NFSU2_TR(0x4dec0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dec0c:{NFSU2_TR(0x4dec0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dec13:{NFSU2_TR(0x4dec13);
if(r1(R+518)){{goto L4dec1a;}}
}
B4dec15:L4dec15:{c.instructions+=2;NFSU2_TR(0x4dec15);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4dec18:{NFSU2_TR(0x4dec18);
{goto L4dec1c;}
}
B4dec1a:L4dec1a:{c.instructions+=1;NFSU2_TR(0x4dec1a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4dec1c:L4dec1c:{c.instructions+=9;NFSU2_TR(0x4dec1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dec20:{NFSU2_TR(0x4dec20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dec21:{NFSU2_TR(0x4dec21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dec24:{NFSU2_TR(0x4dec24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dec25:{NFSU2_TR(0x4dec25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dec26:{NFSU2_TR(0x4dec26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4dec27:{NFSU2_TR(0x4dec27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dec2e:{NFSU2_TR(0x4dec2e);
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
B4dec31:{NFSU2_TR(0x4dec31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dec40:L4dec40:{c.instructions+=7;NFSU2_TR(0x4dec40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dec41:{NFSU2_TR(0x4dec41);
__builtin_memmove((R+24),(R+4),4);
}
B4dec43:{NFSU2_TR(0x4dec43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dec46:{NFSU2_TR(0x4dec46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dec47:{NFSU2_TR(0x4dec47);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4dec4b:{NFSU2_TR(0x4dec4b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4dec4d:{NFSU2_TR(0x4dec4d);
if(r1(R+518)){{goto L4decc3;}}
}
B4dec4f:L4dec4f:{c.instructions+=2;NFSU2_TR(0x4dec4f);
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
B4dec51:{NFSU2_TR(0x4dec51);
if(r1(R+518)){{goto L4dec78;}}
}
B4dec53:L4dec53:{c.instructions+=2;NFSU2_TR(0x4dec53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4dec55:{NFSU2_TR(0x4dec55);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dec58ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4dec58:L4dec58:{c.instructions+=4;NFSU2_TR(0x4dec58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dec5b:{NFSU2_TR(0x4dec5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dec5c:{NFSU2_TR(0x4dec5c);
__builtin_memmove((R+4),(R+24),4);
}
B4dec5e:{NFSU2_TR(0x4dec5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dec63ull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4dec63:L4dec63:{c.instructions+=3;NFSU2_TR(0x4dec63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dec64:{NFSU2_TR(0x4dec64);
__builtin_memmove((R+4),(R+24),4);
}
B4dec66:{NFSU2_TR(0x4dec66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dec6bull));
TAIL_STATIC(0x4cb660u,4cb);
}
B4dec6b:L4dec6b:{c.instructions+=2;NFSU2_TR(0x4dec6b);
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
B4dec6d:{NFSU2_TR(0x4dec6d);
if(r1(R+518)){{goto L4dec8e;}}
}
B4dec6f:L4dec6f:{c.instructions+=3;NFSU2_TR(0x4dec6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4dec71:{NFSU2_TR(0x4dec71);
__builtin_memmove((R+4),(R+0),4);
}
B4dec73:{NFSU2_TR(0x4dec73);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dec76ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4dec76:L4dec76:{c.instructions+=1;NFSU2_TR(0x4dec76);
{goto L4dec8e;}
}
B4dec78:L4dec78:{c.instructions+=5;NFSU2_TR(0x4dec78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dec7e:{NFSU2_TR(0x4dec7e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dec80:{NFSU2_TR(0x4dec80);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dec85:{NFSU2_TR(0x4dec85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dec86:{NFSU2_TR(0x4dec86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dec8bull));
TAIL_STATIC(0x51cf70u,51c);
}
B4dec8b:L4dec8b:{c.instructions+=1;NFSU2_TR(0x4dec8b);
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
B4dec8e:L4dec8e:{c.instructions+=6;NFSU2_TR(0x4dec8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dec91:{NFSU2_TR(0x4dec91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dec94:{NFSU2_TR(0x4dec94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4dec96:{NFSU2_TR(0x4dec96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dec97:{NFSU2_TR(0x4dec97);
__builtin_memmove((R+4),(R+28),4);
}
B4dec99:{NFSU2_TR(0x4dec99);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dec9cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4dec9c:L4dec9c:{c.instructions+=4;NFSU2_TR(0x4dec9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dec9f:{NFSU2_TR(0x4dec9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deca0:{NFSU2_TR(0x4deca0);
__builtin_memmove((R+4),(R+24),4);
}
B4deca2:{NFSU2_TR(0x4deca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deca7ull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4deca7:L4deca7:{c.instructions+=3;NFSU2_TR(0x4deca7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deca8:{NFSU2_TR(0x4deca8);
__builtin_memmove((R+4),(R+24),4);
}
B4decaa:{NFSU2_TR(0x4decaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4decafull));
TAIL_STATIC(0x4cb660u,4cb);
}
B4decaf:L4decaf:{c.instructions+=2;NFSU2_TR(0x4decaf);
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
B4decb1:{NFSU2_TR(0x4decb1);
if(r1(R+518)){{goto L4decc3;}}
}
B4decb3:L4decb3:{c.instructions+=7;NFSU2_TR(0x4decb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4decb6:{NFSU2_TR(0x4decb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4decb8:{NFSU2_TR(0x4decb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4decb9:{NFSU2_TR(0x4decb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4decba:{NFSU2_TR(0x4decba);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4decbe:{NFSU2_TR(0x4decbe);
__builtin_memmove((R+4),(R+0),4);
}
B4decc0:{NFSU2_TR(0x4decc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4decc3:L4decc3:{c.instructions+=3;NFSU2_TR(0x4decc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4decc4:{NFSU2_TR(0x4decc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4decc5:{NFSU2_TR(0x4decc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4decd0:L4decd0:{c.instructions+=11;NFSU2_TR(0x4decd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4decd3:{NFSU2_TR(0x4decd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4decd4:{NFSU2_TR(0x4decd4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4decd5:{NFSU2_TR(0x4decd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4decd6:{NFSU2_TR(0x4decd6);
__builtin_memmove((R+20),(R+4),4);
}
B4decd8:{NFSU2_TR(0x4decd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4decdb:{NFSU2_TR(0x4decdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4decdc:{NFSU2_TR(0x4decdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4decdd:{NFSU2_TR(0x4decdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dece1:{NFSU2_TR(0x4dece1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dece9:{NFSU2_TR(0x4dece9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deceeull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4decee:L4decee:{c.instructions+=6;NFSU2_TR(0x4decee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4decf1:{NFSU2_TR(0x4decf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4decf3:{NFSU2_TR(0x4decf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4decf9:{NFSU2_TR(0x4decf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4decfd:{NFSU2_TR(0x4decfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ded01:{NFSU2_TR(0x4ded01);
if(r1(R+518)){{goto L4ded08;}}
}
B4ded03:L4ded03:{c.instructions+=2;NFSU2_TR(0x4ded03);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B4ded06:{NFSU2_TR(0x4ded06);
{goto L4ded0a;}
}
B4ded08:L4ded08:{c.instructions+=1;NFSU2_TR(0x4ded08);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ded0a:L4ded0a:{c.instructions+=3;NFSU2_TR(0x4ded0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ded0d:{NFSU2_TR(0x4ded0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ded0f:{NFSU2_TR(0x4ded0f);
if(r1(R+518)){{goto L4ded16;}}
}
B4ded11:L4ded11:{c.instructions+=2;NFSU2_TR(0x4ded11);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
}
B4ded14:{NFSU2_TR(0x4ded14);
{goto L4ded18;}
}
B4ded16:L4ded16:{c.instructions+=1;NFSU2_TR(0x4ded16);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ded18:L4ded18:{c.instructions+=1;NFSU2_TR(0x4ded18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ded1b:L4ded1b:{c.instructions+=2;NFSU2_TR(0x4ded1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ded1d:{NFSU2_TR(0x4ded1d);
if(r1(R+518)){{goto L4ded24;}}
}
B4ded1f:L4ded1f:{c.instructions+=2;NFSU2_TR(0x4ded1f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4ded22:{NFSU2_TR(0x4ded22);
{goto L4ded26;}
}
B4ded24:L4ded24:{c.instructions+=1;NFSU2_TR(0x4ded24);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ded26:L4ded26:{c.instructions+=3;NFSU2_TR(0x4ded26);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ded29:{NFSU2_TR(0x4ded29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ded2b:{NFSU2_TR(0x4ded2b);
if(r1(R+518)){{goto L4ded32;}}
}
B4ded2d:L4ded2d:{c.instructions+=2;NFSU2_TR(0x4ded2d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4ded30:{NFSU2_TR(0x4ded30);
{goto L4ded34;}
}
B4ded32:L4ded32:{c.instructions+=1;NFSU2_TR(0x4ded32);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ded34:L4ded34:{c.instructions+=2;NFSU2_TR(0x4ded34);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ded36:{NFSU2_TR(0x4ded36);
if(r1(R+518)){{goto L4dee3d;}}
}
B4ded3c:L4ded3c:{c.instructions+=4;NFSU2_TR(0x4ded3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ded40:{NFSU2_TR(0x4ded40);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ded44:{NFSU2_TR(0x4ded44);
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
B4ded46:{NFSU2_TR(0x4ded46);
if(r1(R+512)){{goto L4dedb8;}}
}
B4ded48:L4ded48:{c.instructions+=4;NFSU2_TR(0x4ded48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ded4e:{NFSU2_TR(0x4ded4e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4ded50:{NFSU2_TR(0x4ded50);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4ded52:{NFSU2_TR(0x4ded52);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4dedb8;}}
}
B4ded54:L4ded54:{c.instructions+=3;NFSU2_TR(0x4ded54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ded56:{NFSU2_TR(0x4ded56);
__builtin_memmove((R+4),(R+24),4);
}
B4ded58:{NFSU2_TR(0x4ded58);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ded5bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ded5b:L4ded5b:{c.instructions+=5;NFSU2_TR(0x4ded5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ded5f:{NFSU2_TR(0x4ded5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ded61:{NFSU2_TR(0x4ded61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ded62:{NFSU2_TR(0x4ded62);
__builtin_memmove((R+4),(R+24),4);
}
B4ded64:{NFSU2_TR(0x4ded64);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ded67ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ded67:L4ded67:{c.instructions+=3;NFSU2_TR(0x4ded67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ded69:{NFSU2_TR(0x4ded69);
__builtin_memmove((R+4),(R+24),4);
}
B4ded6b:{NFSU2_TR(0x4ded6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ded6eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ded6e:L4ded6e:{c.instructions+=2;NFSU2_TR(0x4ded6e);
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
B4ded70:{NFSU2_TR(0x4ded70);
if(r1(R+518)){{goto L4ded88;}}
}
B4ded72:L4ded72:{c.instructions+=3;NFSU2_TR(0x4ded72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ded74:{NFSU2_TR(0x4ded74);
__builtin_memmove((R+4),(R+28),4);
}
B4ded76:{NFSU2_TR(0x4ded76);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ded79ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ded79:L4ded79:{c.instructions+=4;NFSU2_TR(0x4ded79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ded7b:{NFSU2_TR(0x4ded7b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ded7c:{NFSU2_TR(0x4ded7c);
__builtin_memmove((R+4),(R+28),4);
}
B4ded7e:{NFSU2_TR(0x4ded7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ded81ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ded81:L4ded81:{c.instructions+=3;NFSU2_TR(0x4ded81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ded83:{NFSU2_TR(0x4ded83);
__builtin_memmove((R+4),(R+28),4);
}
B4ded85:{NFSU2_TR(0x4ded85);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ded88ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ded88:L4ded88:{c.instructions+=2;NFSU2_TR(0x4ded88);
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
B4ded8a:{NFSU2_TR(0x4ded8a);
if(r1(R+518)){{goto L4deda2;}}
}
B4ded8c:L4ded8c:{c.instructions+=3;NFSU2_TR(0x4ded8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ded8e:{NFSU2_TR(0x4ded8e);
__builtin_memmove((R+4),(R+12),4);
}
B4ded90:{NFSU2_TR(0x4ded90);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ded93ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ded93:L4ded93:{c.instructions+=4;NFSU2_TR(0x4ded93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ded95:{NFSU2_TR(0x4ded95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ded96:{NFSU2_TR(0x4ded96);
__builtin_memmove((R+4),(R+12),4);
}
B4ded98:{NFSU2_TR(0x4ded98);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ded9bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ded9b:L4ded9b:{c.instructions+=3;NFSU2_TR(0x4ded9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ded9d:{NFSU2_TR(0x4ded9d);
__builtin_memmove((R+4),(R+12),4);
}
B4ded9f:{NFSU2_TR(0x4ded9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deda2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4deda2:L4deda2:{c.instructions+=6;NFSU2_TR(0x4deda2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4deda6:{NFSU2_TR(0x4deda6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dedaa:{NFSU2_TR(0x4dedaa);
{u32 ea_=u32(r4(R+4)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4dedb0:{NFSU2_TR(0x4dedb0);
__builtin_memmove((R+20),(R+4),4);
}
B4dedb2:{NFSU2_TR(0x4dedb2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4dedb6:{NFSU2_TR(0x4dedb6);
{goto L4dedf9;}
}
B4dedb8:L4dedb8:{c.instructions+=4;NFSU2_TR(0x4dedb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4dedba:{NFSU2_TR(0x4dedba);
u8 U[4];
w4(U+0,u32(0x45d9c800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dedbf:{NFSU2_TR(0x4dedbf);
__builtin_memmove((R+4),(R+24),4);
}
B4dedc1:{NFSU2_TR(0x4dedc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dedc4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4dedc4:L4dedc4:{c.instructions+=3;NFSU2_TR(0x4dedc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4dedc6:{NFSU2_TR(0x4dedc6);
__builtin_memmove((R+4),(R+24),4);
}
B4dedc8:{NFSU2_TR(0x4dedc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dedcbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4dedcb:L4dedcb:{c.instructions+=2;NFSU2_TR(0x4dedcb);
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
B4dedcd:{NFSU2_TR(0x4dedcd);
if(r1(R+518)){{goto L4dede2;}}
}
B4dedcf:L4dedcf:{c.instructions+=4;NFSU2_TR(0x4dedcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4dedd1:{NFSU2_TR(0x4dedd1);
u8 U[4];
w4(U+0,u32(0x45d9c800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dedd6:{NFSU2_TR(0x4dedd6);
__builtin_memmove((R+4),(R+28),4);
}
B4dedd8:{NFSU2_TR(0x4dedd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deddbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4deddb:L4deddb:{c.instructions+=3;NFSU2_TR(0x4deddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4deddd:{NFSU2_TR(0x4deddd);
__builtin_memmove((R+4),(R+28),4);
}
B4deddf:{NFSU2_TR(0x4deddf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dede2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4dede2:L4dede2:{c.instructions+=2;NFSU2_TR(0x4dede2);
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
B4dede4:{NFSU2_TR(0x4dede4);
if(r1(R+518)){{goto L4dedf9;}}
}
B4dede6:L4dede6:{c.instructions+=4;NFSU2_TR(0x4dede6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4dede8:{NFSU2_TR(0x4dede8);
u8 U[4];
w4(U+0,u32(0x45d9c800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deded:{NFSU2_TR(0x4deded);
__builtin_memmove((R+4),(R+12),4);
}
B4dedef:{NFSU2_TR(0x4dedef);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dedf2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4dedf2:L4dedf2:{c.instructions+=3;NFSU2_TR(0x4dedf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4dedf4:{NFSU2_TR(0x4dedf4);
__builtin_memmove((R+4),(R+12),4);
}
B4dedf6:{NFSU2_TR(0x4dedf6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dedf9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4dedf9:L4dedf9:{c.instructions+=2;NFSU2_TR(0x4dedf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dedfb:{NFSU2_TR(0x4dedfb);
if(r1(R+518)){{goto L4dee0b;}}
}
B4dedfd:L4dedfd:{c.instructions+=3;NFSU2_TR(0x4dedfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4dee00:{NFSU2_TR(0x4dee00);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dee02:{NFSU2_TR(0x4dee02);
if(r1(R+518)){{goto L4dee09;}}
}
B4dee04:L4dee04:{c.instructions+=2;NFSU2_TR(0x4dee04);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B4dee07:{NFSU2_TR(0x4dee07);
{goto L4dee0b;}
}
B4dee09:L4dee09:{c.instructions+=1;NFSU2_TR(0x4dee09);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dee0b:L4dee0b:{c.instructions+=2;NFSU2_TR(0x4dee0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dee0d:{NFSU2_TR(0x4dee0d);
if(r1(R+518)){{goto L4dee2c;}}
}
B4dee0f:L4dee0f:{c.instructions+=3;NFSU2_TR(0x4dee0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4dee12:{NFSU2_TR(0x4dee12);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dee14:{NFSU2_TR(0x4dee14);
if(r1(R+518)){{goto L4dee2a;}}
}
B4dee16:L4dee16:{c.instructions+=6;NFSU2_TR(0x4dee16);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dee1a:{NFSU2_TR(0x4dee1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4dee1d:{NFSU2_TR(0x4dee1d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
}
B4dee20:{NFSU2_TR(0x4dee20);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4dee21:{NFSU2_TR(0x4dee21);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dee25:{NFSU2_TR(0x4dee25);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ded1bu);}goto L4ded1b;}
}
B4dee2a:L4dee2a:{c.instructions+=1;NFSU2_TR(0x4dee2a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dee2c:L4dee2c:{c.instructions+=5;NFSU2_TR(0x4dee2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dee30:{NFSU2_TR(0x4dee30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4dee33:{NFSU2_TR(0x4dee33);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4dee34:{NFSU2_TR(0x4dee34);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dee38:{NFSU2_TR(0x4dee38);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ded1bu);}goto L4ded1b;}
}
B4dee3d:L4dee3d:{c.instructions+=6;NFSU2_TR(0x4dee3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dee3e:{NFSU2_TR(0x4dee3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dee3f:{NFSU2_TR(0x4dee3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dee40:{NFSU2_TR(0x4dee40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4dee41:{NFSU2_TR(0x4dee41);
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
B4dee44:{NFSU2_TR(0x4dee44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dee50:L4dee50:{c.instructions+=4;NFSU2_TR(0x4dee50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dee53:{NFSU2_TR(0x4dee53);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dee56:{NFSU2_TR(0x4dee56);
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
B4dee58:{NFSU2_TR(0x4dee58);
if(r1(R+518)){{goto L4dee82;}}
}
B4dee5a:L4dee5a:{c.instructions+=3;NFSU2_TR(0x4dee5a);
__builtin_memmove((R+0),(R+8),4);
}
B4dee5c:{NFSU2_TR(0x4dee5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dee5e:{NFSU2_TR(0x4dee5e);
if(r1(R+518)){{goto L4dee72;}}
}
B4dee60:L4dee60:{c.instructions+=4;NFSU2_TR(0x4dee60);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4dee63:{NFSU2_TR(0x4dee63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dee66:{NFSU2_TR(0x4dee66);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4dee6d:{NFSU2_TR(0x4dee6d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4decd0u);}goto L4decd0;}
}
B4dee72:L4dee72:{c.instructions+=4;NFSU2_TR(0x4dee72);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4dee74:{NFSU2_TR(0x4dee74);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dee77:{NFSU2_TR(0x4dee77);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4dee7d:{NFSU2_TR(0x4dee7d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4decd0u);}goto L4decd0;}
}
B4dee82:L4dee82:{c.instructions+=1;NFSU2_TR(0x4dee82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dee90:L4dee90:{c.instructions+=6;NFSU2_TR(0x4dee90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dee91:{NFSU2_TR(0x4dee91);
__builtin_memmove((R+28),(R+4),4);
}
B4dee93:{NFSU2_TR(0x4dee93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dee96:{NFSU2_TR(0x4dee96);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dee99:{NFSU2_TR(0x4dee99);
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
B4dee9b:{NFSU2_TR(0x4dee9b);
if(r1(R+518)){{goto L4def2a;}}
}
B4deea1:L4deea1:{c.instructions+=4;NFSU2_TR(0x4deea1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deea2:{NFSU2_TR(0x4deea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4deea5:{NFSU2_TR(0x4deea5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4deea7:{NFSU2_TR(0x4deea7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4deeb9;}}
}
B4deea9:L4deea9:{c.instructions+=3;NFSU2_TR(0x4deea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4deeac:{NFSU2_TR(0x4deeac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4deeae:{NFSU2_TR(0x4deeae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4deeb9;}}
}
B4deeb0:L4deeb0:{c.instructions+=4;NFSU2_TR(0x4deeb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4deeb1:{NFSU2_TR(0x4deeb1);
__builtin_memmove((R+4),(R+28),4);
}
B4deeb3:{NFSU2_TR(0x4deeb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4deeb4:{NFSU2_TR(0x4deeb4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4dee50u);}goto L4dee50;}
}
B4deeb9:L4deeb9:{c.instructions+=7;NFSU2_TR(0x4deeb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deeba:{NFSU2_TR(0x4deeba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4deec0:{NFSU2_TR(0x4deec0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deec1:{NFSU2_TR(0x4deec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4deec7:{NFSU2_TR(0x4deec7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B4deeca:{NFSU2_TR(0x4deeca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4deecc:{NFSU2_TR(0x4deecc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4deef4;}}
}
B4deece:L4deece:{c.instructions+=3;NFSU2_TR(0x4deece);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4deecf:{NFSU2_TR(0x4deecf);
__builtin_memmove((R+4),(R+28),4);
}
B4deed1:{NFSU2_TR(0x4deed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deed6ull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4deed6:L4deed6:{c.instructions+=4;NFSU2_TR(0x4deed6);
__builtin_memmove((R+4),(R+24),4);
}
B4deed8:{NFSU2_TR(0x4deed8);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B4deeda:{NFSU2_TR(0x4deeda);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4deedc:{NFSU2_TR(0x4deedc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4deef4;}}
}
B4deede:L4deede:{c.instructions+=3;NFSU2_TR(0x4deede);
__builtin_memmove((R+4),(R+28),4);
}
B4deee0:{NFSU2_TR(0x4deee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4deee3:{NFSU2_TR(0x4deee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deee8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4decd0u);}goto L4decd0;}
}
B4deee8:L4deee8:{c.instructions+=6;NFSU2_TR(0x4deee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4deee9:{NFSU2_TR(0x4deee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4deeea:{NFSU2_TR(0x4deeea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4deeeb:{NFSU2_TR(0x4deeeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4deef2:{NFSU2_TR(0x4deef2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4deef3:{NFSU2_TR(0x4deef3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4deef4:L4deef4:{c.instructions+=9;NFSU2_TR(0x4deef4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B4deef6:{NFSU2_TR(0x4deef6);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B4deef7:{NFSU2_TR(0x4deef7);
w4(R+0,u32(0x0ull));
}
B4deefc:{NFSU2_TR(0x4deefc);
__builtin_memmove((R+0),(R+519),1);
}
B4deeff:{NFSU2_TR(0x4deeff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4def02:{NFSU2_TR(0x4def02);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4def03:{NFSU2_TR(0x4def03);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B4def05:{NFSU2_TR(0x4def05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4def06:{NFSU2_TR(0x4def06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4def0bull));
TAIL_STATIC(0x43be60u,43b);
}
B4def0b:L4def0b:{c.instructions+=2;NFSU2_TR(0x4def0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4def0d:{NFSU2_TR(0x4def0d);
if(r1(R+518)){{goto L4def14;}}
}
B4def0f:L4def0f:{c.instructions+=2;NFSU2_TR(0x4def0f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4def12:{NFSU2_TR(0x4def12);
{goto L4def16;}
}
B4def14:L4def14:{c.instructions+=1;NFSU2_TR(0x4def14);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4def16:L4def16:{c.instructions+=3;NFSU2_TR(0x4def16);
__builtin_memmove((R+4),(R+28),4);
}
B4def18:{NFSU2_TR(0x4def18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4def1b:{NFSU2_TR(0x4def1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4def20ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4decd0u);}goto L4decd0;}
}
B4def20:L4def20:{c.instructions+=4;NFSU2_TR(0x4def20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4def21:{NFSU2_TR(0x4def21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4def22:{NFSU2_TR(0x4def22);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4def29:{NFSU2_TR(0x4def29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4def2a:L4def2a:{c.instructions+=2;NFSU2_TR(0x4def2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4def2b:{NFSU2_TR(0x4def2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4def30:L4def30:{c.instructions+=5;NFSU2_TR(0x4def30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4def31:{NFSU2_TR(0x4def31);
__builtin_memmove((R+24),(R+4),4);
}
B4def33:{NFSU2_TR(0x4def33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4def35:{NFSU2_TR(0x4def35);
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
B4def37:{NFSU2_TR(0x4def37);
if(r1(R+518)){{goto L4def59;}}
}
B4def39:L4def39:{c.instructions+=1;NFSU2_TR(0x4def39);
__builtin_memmove((R+16),(R+16),4);
}
B4def40:L4def40:{c.instructions+=6;NFSU2_TR(0x4def40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4def42:{NFSU2_TR(0x4def42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4def45:{NFSU2_TR(0x4def45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4def47:{NFSU2_TR(0x4def47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4def48:{NFSU2_TR(0x4def48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4def4b:{NFSU2_TR(0x4def4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4def50ull));
TAIL_STATIC(0x575630u,575);
}
B4def50:L4def50:{c.instructions+=4;NFSU2_TR(0x4def50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4def52:{NFSU2_TR(0x4def52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4def55:{NFSU2_TR(0x4def55);
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
B4def57:{NFSU2_TR(0x4def57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4def40u);}goto L4def40;}}
}
B4def59:L4def59:{c.instructions+=2;NFSU2_TR(0x4def59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4def5a:{NFSU2_TR(0x4def5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4def60:L4def60:{c.instructions+=4;NFSU2_TR(0x4def60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4def64:{NFSU2_TR(0x4def64);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4def68:{NFSU2_TR(0x4def68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4def69:{NFSU2_TR(0x4def69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4def6eull));
TAIL_STATIC(0x4d29f0u,4d2);
}
B4def6e:L4def6e:{c.instructions+=1;NFSU2_TR(0x4def6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4def70:L4def70:{c.instructions+=6;NFSU2_TR(0x4def70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4def71:{NFSU2_TR(0x4def71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4def72:{NFSU2_TR(0x4def72);
__builtin_memmove((R+28),(R+4),4);
}
B4def74:{NFSU2_TR(0x4def74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4def76:{NFSU2_TR(0x4def76);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4def78:{NFSU2_TR(0x4def78);
if(r1(R+518)){{goto L4defa6;}}
}
B4def7a:L4def7a:{c.instructions+=1;NFSU2_TR(0x4def7a);
__builtin_memmove((R+12),(R+12),4);
}
B4def80:L4def80:{c.instructions+=6;NFSU2_TR(0x4def80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4def83:{NFSU2_TR(0x4def83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4def85:{NFSU2_TR(0x4def85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4def87:{NFSU2_TR(0x4def87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4def8a:{NFSU2_TR(0x4def8a);
__builtin_memmove((R+4),(R+24),4);
}
B4def8c:{NFSU2_TR(0x4def8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4def91ull));
TAIL_STATIC(0x4db990u,4db);
}
B4def91:L4def91:{c.instructions+=4;NFSU2_TR(0x4def91);
__builtin_memmove((R+0),gp(0x8364b8),4);
}
B4def96:{NFSU2_TR(0x4def96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4def97:{NFSU2_TR(0x4def97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4def98:{NFSU2_TR(0x4def98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4def9dull));
TAIL_STATIC(0x43f920u,43f);
}
B4def9d:L4def9d:{c.instructions+=4;NFSU2_TR(0x4def9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4def9f:{NFSU2_TR(0x4def9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4defa2:{NFSU2_TR(0x4defa2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4defa4:{NFSU2_TR(0x4defa4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4def80u);}goto L4def80;}}
}
B4defa6:L4defa6:{c.instructions+=3;NFSU2_TR(0x4defa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4defa7:{NFSU2_TR(0x4defa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4defa8:{NFSU2_TR(0x4defa8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4defb0:L4defb0:{c.instructions+=14;NFSU2_TR(0x4defb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4defb2:{NFSU2_TR(0x4defb2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4defb7:{NFSU2_TR(0x4defb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4defbd:{NFSU2_TR(0x4defbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4defbe:{NFSU2_TR(0x4defbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4defc5:{NFSU2_TR(0x4defc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4defc6:{NFSU2_TR(0x4defc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4defc7:{NFSU2_TR(0x4defc7);
__builtin_memmove((R+24),(R+4),4);
}
B4defc9:{NFSU2_TR(0x4defc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4defcd:{NFSU2_TR(0x4defcd);
u8 U[4];
w4(U+0,u32(0x7974d4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4defd3:{NFSU2_TR(0x4defd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4defd6:{NFSU2_TR(0x4defd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4defde:{NFSU2_TR(0x4defde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x795cbcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4defe5:{NFSU2_TR(0x4defe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4defeaull));
TAIL_STATIC(0x4358e0u,435);
}
B4defea:L4defea:{c.instructions+=3;NFSU2_TR(0x4defea);
__builtin_memmove((R+4),(R+24),4);
}
B4defec:{NFSU2_TR(0x4defec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4deff4:{NFSU2_TR(0x4deff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4deff9ull));
TAIL_STATIC(0x510d40u,510);
}
B4deff9:L4deff9:{c.instructions+=3;NFSU2_TR(0x4deff9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4deffd:{NFSU2_TR(0x4deffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4deffe:{NFSU2_TR(0x4deffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x4df005u,4df);
}
XIT:NFSU2_TR_EXIT(0x4de,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
