#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48c(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_61d(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x61c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x61c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_61c(u8* __restrict R,Cpu& c);
u32 page_61c(Cpu& c){return body_61c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_61c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x61c004:goto L61c004;
case 0x61c009:goto L61c009;
case 0x61c00a:c.instructions+=6;goto B61c00a;
case 0x61c00b:c.instructions+=5;goto B61c00b;
case 0x61c011:c.instructions+=4;goto B61c011;
case 0x61c015:c.instructions+=3;goto B61c015;
case 0x61c01a:c.instructions+=2;goto B61c01a;
case 0x61c01b:c.instructions+=1;goto B61c01b;
case 0x61c020:goto L61c020;
case 0x61c024:c.instructions+=2;goto B61c024;
case 0x61c025:c.instructions+=1;goto B61c025;
case 0x61c02a:goto L61c02a;
case 0x61c02d:c.instructions+=6;goto B61c02d;
case 0x61c02f:c.instructions+=5;goto B61c02f;
case 0x61c031:c.instructions+=4;goto B61c031;
case 0x61c033:c.instructions+=3;goto B61c033;
case 0x61c034:c.instructions+=2;goto B61c034;
case 0x61c039:c.instructions+=1;goto B61c039;
case 0x61c03e:goto L61c03e;
case 0x61c040:c.instructions+=6;goto B61c040;
case 0x61c043:c.instructions+=5;goto B61c043;
case 0x61c044:c.instructions+=4;goto B61c044;
case 0x61c046:c.instructions+=3;goto B61c046;
case 0x61c047:c.instructions+=2;goto B61c047;
case 0x61c04c:c.instructions+=1;goto B61c04c;
case 0x61c051:goto L61c051;
case 0x61c053:c.instructions+=5;goto B61c053;
case 0x61c055:c.instructions+=4;goto B61c055;
case 0x61c056:c.instructions+=3;goto B61c056;
case 0x61c05b:c.instructions+=2;goto B61c05b;
case 0x61c061:c.instructions+=1;goto B61c061;
case 0x61c066:goto L61c066;
case 0x61c069:c.instructions+=6;goto B61c069;
case 0x61c06a:c.instructions+=5;goto B61c06a;
case 0x61c06c:c.instructions+=4;goto B61c06c;
case 0x61c06e:c.instructions+=3;goto B61c06e;
case 0x61c06f:c.instructions+=2;goto B61c06f;
case 0x61c074:c.instructions+=1;goto B61c074;
case 0x61c079:goto L61c079;
case 0x61c07b:c.instructions+=5;goto B61c07b;
case 0x61c07d:c.instructions+=4;goto B61c07d;
case 0x61c07e:c.instructions+=3;goto B61c07e;
case 0x61c083:c.instructions+=2;goto B61c083;
case 0x61c089:c.instructions+=1;goto B61c089;
case 0x61c08e:goto L61c08e;
case 0x61c090:c.instructions+=6;goto B61c090;
case 0x61c093:c.instructions+=5;goto B61c093;
case 0x61c094:c.instructions+=4;goto B61c094;
case 0x61c096:c.instructions+=3;goto B61c096;
case 0x61c097:c.instructions+=2;goto B61c097;
case 0x61c09c:c.instructions+=1;goto B61c09c;
case 0x61c0a1:goto L61c0a1;
case 0x61c0a3:c.instructions+=5;goto B61c0a3;
case 0x61c0a5:c.instructions+=4;goto B61c0a5;
case 0x61c0a6:c.instructions+=3;goto B61c0a6;
case 0x61c0ab:c.instructions+=2;goto B61c0ab;
case 0x61c0b1:c.instructions+=1;goto B61c0b1;
case 0x61c0b6:goto L61c0b6;
case 0x61c0b8:c.instructions+=6;goto B61c0b8;
case 0x61c0bb:c.instructions+=5;goto B61c0bb;
case 0x61c0bc:c.instructions+=4;goto B61c0bc;
case 0x61c0be:c.instructions+=3;goto B61c0be;
case 0x61c0bf:c.instructions+=2;goto B61c0bf;
case 0x61c0c4:c.instructions+=1;goto B61c0c4;
case 0x61c0c9:goto L61c0c9;
case 0x61c0cb:c.instructions+=5;goto B61c0cb;
case 0x61c0cd:c.instructions+=4;goto B61c0cd;
case 0x61c0ce:c.instructions+=3;goto B61c0ce;
case 0x61c0d3:c.instructions+=2;goto B61c0d3;
case 0x61c0d9:c.instructions+=1;goto B61c0d9;
case 0x61c0de:goto L61c0de;
case 0x61c0e1:c.instructions+=6;goto B61c0e1;
case 0x61c0e2:c.instructions+=5;goto B61c0e2;
case 0x61c0e4:c.instructions+=4;goto B61c0e4;
case 0x61c0e6:c.instructions+=3;goto B61c0e6;
case 0x61c0e7:c.instructions+=2;goto B61c0e7;
case 0x61c0ec:c.instructions+=1;goto B61c0ec;
case 0x61c0f1:goto L61c0f1;
case 0x61c0f3:c.instructions+=5;goto B61c0f3;
case 0x61c0f5:c.instructions+=4;goto B61c0f5;
case 0x61c0f6:c.instructions+=3;goto B61c0f6;
case 0x61c0fb:c.instructions+=2;goto B61c0fb;
case 0x61c101:c.instructions+=1;goto B61c101;
case 0x61c106:goto L61c106;
case 0x61c108:c.instructions+=6;goto B61c108;
case 0x61c10b:c.instructions+=5;goto B61c10b;
case 0x61c10c:c.instructions+=4;goto B61c10c;
case 0x61c10e:c.instructions+=3;goto B61c10e;
case 0x61c10f:c.instructions+=2;goto B61c10f;
case 0x61c114:c.instructions+=1;goto B61c114;
case 0x61c119:goto L61c119;
case 0x61c11f:c.instructions+=10;goto B61c11f;
case 0x61c126:c.instructions+=9;goto B61c126;
case 0x61c12d:c.instructions+=8;goto B61c12d;
case 0x61c134:c.instructions+=7;goto B61c134;
case 0x61c13b:c.instructions+=6;goto B61c13b;
case 0x61c142:c.instructions+=5;goto B61c142;
case 0x61c149:c.instructions+=4;goto B61c149;
case 0x61c150:c.instructions+=3;goto B61c150;
case 0x61c156:c.instructions+=2;goto B61c156;
case 0x61c15b:c.instructions+=1;goto B61c15b;
case 0x61c160:goto L61c160;
case 0x61c164:c.instructions+=4;goto B61c164;
case 0x61c167:c.instructions+=3;goto B61c167;
case 0x61c168:c.instructions+=2;goto B61c168;
case 0x61c169:c.instructions+=1;goto B61c169;
case 0x61c16b:goto L61c16b;
case 0x61c170:goto L61c170;
case 0x61c172:c.instructions+=7;goto B61c172;
case 0x61c174:c.instructions+=6;goto B61c174;
case 0x61c176:c.instructions+=5;goto B61c176;
case 0x61c178:c.instructions+=4;goto B61c178;
case 0x61c17a:c.instructions+=3;goto B61c17a;
case 0x61c17b:c.instructions+=2;goto B61c17b;
case 0x61c180:c.instructions+=1;goto B61c180;
case 0x61c185:goto L61c185;
case 0x61c187:c.instructions+=8;goto B61c187;
case 0x61c189:c.instructions+=7;goto B61c189;
case 0x61c18b:c.instructions+=6;goto B61c18b;
case 0x61c191:c.instructions+=5;goto B61c191;
case 0x61c193:c.instructions+=4;goto B61c193;
case 0x61c195:c.instructions+=3;goto B61c195;
case 0x61c196:c.instructions+=2;goto B61c196;
case 0x61c19b:c.instructions+=1;goto B61c19b;
case 0x61c1a0:goto L61c1a0;
case 0x61c1a2:c.instructions+=8;goto B61c1a2;
case 0x61c1a4:c.instructions+=7;goto B61c1a4;
case 0x61c1a6:c.instructions+=6;goto B61c1a6;
case 0x61c1a8:c.instructions+=5;goto B61c1a8;
case 0x61c1aa:c.instructions+=4;goto B61c1aa;
case 0x61c1ab:c.instructions+=3;goto B61c1ab;
case 0x61c1b0:c.instructions+=2;goto B61c1b0;
case 0x61c1b6:c.instructions+=1;goto B61c1b6;
case 0x61c1bb:goto L61c1bb;
case 0x61c1bd:c.instructions+=8;goto B61c1bd;
case 0x61c1bf:c.instructions+=7;goto B61c1bf;
case 0x61c1c1:c.instructions+=6;goto B61c1c1;
case 0x61c1c3:c.instructions+=5;goto B61c1c3;
case 0x61c1c5:c.instructions+=4;goto B61c1c5;
case 0x61c1c6:c.instructions+=3;goto B61c1c6;
case 0x61c1cb:c.instructions+=2;goto B61c1cb;
case 0x61c1d1:c.instructions+=1;goto B61c1d1;
case 0x61c1d6:goto L61c1d6;
case 0x61c1d8:c.instructions+=8;goto B61c1d8;
case 0x61c1da:c.instructions+=7;goto B61c1da;
case 0x61c1dc:c.instructions+=6;goto B61c1dc;
case 0x61c1e2:c.instructions+=5;goto B61c1e2;
case 0x61c1e4:c.instructions+=4;goto B61c1e4;
case 0x61c1e6:c.instructions+=3;goto B61c1e6;
case 0x61c1e7:c.instructions+=2;goto B61c1e7;
case 0x61c1ec:c.instructions+=1;goto B61c1ec;
case 0x61c1f1:goto L61c1f1;
case 0x61c1f3:c.instructions+=8;goto B61c1f3;
case 0x61c1f5:c.instructions+=7;goto B61c1f5;
case 0x61c1f7:c.instructions+=6;goto B61c1f7;
case 0x61c1f9:c.instructions+=5;goto B61c1f9;
case 0x61c1fb:c.instructions+=4;goto B61c1fb;
case 0x61c1fc:c.instructions+=3;goto B61c1fc;
case 0x61c201:c.instructions+=2;goto B61c201;
case 0x61c207:c.instructions+=1;goto B61c207;
case 0x61c20c:goto L61c20c;
case 0x61c212:c.instructions+=10;goto B61c212;
case 0x61c219:c.instructions+=9;goto B61c219;
case 0x61c220:c.instructions+=8;goto B61c220;
case 0x61c227:c.instructions+=7;goto B61c227;
case 0x61c22e:c.instructions+=6;goto B61c22e;
case 0x61c235:c.instructions+=5;goto B61c235;
case 0x61c23c:c.instructions+=4;goto B61c23c;
case 0x61c243:c.instructions+=3;goto B61c243;
case 0x61c249:c.instructions+=2;goto B61c249;
case 0x61c24e:c.instructions+=1;goto B61c24e;
case 0x61c250:goto L61c250;
case 0x61c254:c.instructions+=4;goto B61c254;
case 0x61c257:c.instructions+=3;goto B61c257;
case 0x61c258:c.instructions+=2;goto B61c258;
case 0x61c259:c.instructions+=1;goto B61c259;
case 0x61c25b:goto L61c25b;
case 0x61c25f:c.instructions+=4;goto B61c25f;
case 0x61c260:c.instructions+=3;goto B61c260;
case 0x61c265:c.instructions+=2;goto B61c265;
case 0x61c269:c.instructions+=1;goto B61c269;
case 0x61c26f:goto L61c26f;
case 0x61c270:c.instructions+=5;goto B61c270;
case 0x61c271:c.instructions+=4;goto B61c271;
case 0x61c272:c.instructions+=3;goto B61c272;
case 0x61c273:c.instructions+=2;goto B61c273;
case 0x61c279:c.instructions+=1;goto B61c279;
case 0x61c280:goto L61c280;
case 0x61c283:c.instructions+=9;goto B61c283;
case 0x61c284:c.instructions+=8;goto B61c284;
case 0x61c285:c.instructions+=7;goto B61c285;
case 0x61c289:c.instructions+=6;goto B61c289;
case 0x61c28a:c.instructions+=5;goto B61c28a;
case 0x61c28e:c.instructions+=4;goto B61c28e;
case 0x61c293:c.instructions+=3;goto B61c293;
case 0x61c294:c.instructions+=2;goto B61c294;
case 0x61c296:c.instructions+=1;goto B61c296;
case 0x61c29b:goto L61c29b;
case 0x61c29f:c.instructions+=2;goto B61c29f;
case 0x61c2a0:c.instructions+=1;goto B61c2a0;
case 0x61c2a5:goto L61c2a5;
case 0x61c2a7:c.instructions+=12;goto B61c2a7;
case 0x61c2ad:c.instructions+=11;goto B61c2ad;
case 0x61c2b3:c.instructions+=10;goto B61c2b3;
case 0x61c2ba:c.instructions+=9;goto B61c2ba;
case 0x61c2bc:c.instructions+=8;goto B61c2bc;
case 0x61c2be:c.instructions+=7;goto B61c2be;
case 0x61c2c0:c.instructions+=6;goto B61c2c0;
case 0x61c2c1:c.instructions+=5;goto B61c2c1;
case 0x61c2c5:c.instructions+=4;goto B61c2c5;
case 0x61c2ca:c.instructions+=3;goto B61c2ca;
case 0x61c2cb:c.instructions+=2;goto B61c2cb;
case 0x61c2d1:c.instructions+=1;goto B61c2d1;
case 0x61c2d6:goto L61c2d6;
case 0x61c2da:c.instructions+=2;goto B61c2da;
case 0x61c2db:c.instructions+=1;goto B61c2db;
case 0x61c2e0:goto L61c2e0;
case 0x61c2e1:c.instructions+=5;goto B61c2e1;
case 0x61c2e5:c.instructions+=4;goto B61c2e5;
case 0x61c2ea:c.instructions+=3;goto B61c2ea;
case 0x61c2eb:c.instructions+=2;goto B61c2eb;
case 0x61c2f1:c.instructions+=1;goto B61c2f1;
case 0x61c2f6:goto L61c2f6;
case 0x61c2fa:c.instructions+=2;goto B61c2fa;
case 0x61c2fb:c.instructions+=1;goto B61c2fb;
case 0x61c300:goto L61c300;
case 0x61c303:c.instructions+=5;goto B61c303;
case 0x61c304:c.instructions+=4;goto B61c304;
case 0x61c30a:c.instructions+=3;goto B61c30a;
case 0x61c30b:c.instructions+=2;goto B61c30b;
case 0x61c30e:c.instructions+=1;goto B61c30e;
case 0x61c320:goto L61c320;
case 0x61c321:c.instructions+=6;goto B61c321;
case 0x61c323:c.instructions+=5;goto B61c323;
case 0x61c325:c.instructions+=4;goto B61c325;
case 0x61c32b:c.instructions+=3;goto B61c32b;
case 0x61c331:c.instructions+=2;goto B61c331;
case 0x61c333:c.instructions+=1;goto B61c333;
case 0x61c335:goto L61c335;
case 0x61c337:c.instructions+=2;goto B61c337;
case 0x61c338:c.instructions+=1;goto B61c338;
case 0x61c339:goto L61c339;
case 0x61c33c:c.instructions+=3;goto B61c33c;
case 0x61c33d:c.instructions+=2;goto B61c33d;
case 0x61c33e:c.instructions+=1;goto B61c33e;
case 0x61c343:goto L61c343;
case 0x61c344:c.instructions+=2;goto B61c344;
case 0x61c349:c.instructions+=1;goto B61c349;
case 0x61c34e:goto L61c34e;
case 0x61c354:c.instructions+=5;goto B61c354;
case 0x61c356:c.instructions+=4;goto B61c356;
case 0x61c35c:c.instructions+=3;goto B61c35c;
case 0x61c35f:c.instructions+=2;goto B61c35f;
case 0x61c361:c.instructions+=1;goto B61c361;
case 0x61c363:goto L61c363;
case 0x61c369:c.instructions+=2;goto B61c369;
case 0x61c36b:c.instructions+=1;goto B61c36b;
case 0x61c36d:goto L61c36d;
case 0x61c36f:c.instructions+=1;goto B61c36f;
case 0x61c371:goto L61c371;
case 0x61c373:c.instructions+=1;goto B61c373;
case 0x61c375:goto L61c375;
case 0x61c378:c.instructions+=3;goto B61c378;
case 0x61c37b:c.instructions+=2;goto B61c37b;
case 0x61c37d:c.instructions+=1;goto B61c37d;
case 0x61c37f:goto L61c37f;
case 0x61c385:c.instructions+=2;goto B61c385;
case 0x61c387:c.instructions+=1;goto B61c387;
case 0x61c389:goto L61c389;
case 0x61c38b:goto L61c38b;
case 0x61c38d:c.instructions+=1;goto B61c38d;
case 0x61c38f:goto L61c38f;
case 0x61c394:c.instructions+=1;goto B61c394;
case 0x61c399:goto L61c399;
case 0x61c39c:c.instructions+=4;goto B61c39c;
case 0x61c39e:c.instructions+=3;goto B61c39e;
case 0x61c39f:c.instructions+=2;goto B61c39f;
case 0x61c3a1:c.instructions+=1;goto B61c3a1;
case 0x61c3a6:goto L61c3a6;
case 0x61c3a8:c.instructions+=1;goto B61c3a8;
case 0x61c3aa:goto L61c3aa;
case 0x61c3ad:c.instructions+=4;goto B61c3ad;
case 0x61c3af:c.instructions+=3;goto B61c3af;
case 0x61c3b0:c.instructions+=2;goto B61c3b0;
case 0x61c3b1:c.instructions+=1;goto B61c3b1;
case 0x61c3b2:goto L61c3b2;
case 0x61c3b4:goto L61c3b4;
case 0x61c3b6:c.instructions+=3;goto B61c3b6;
case 0x61c3b7:c.instructions+=2;goto B61c3b7;
case 0x61c3b8:c.instructions+=1;goto B61c3b8;
case 0x61c3c0:goto L61c3c0;
case 0x61c3c1:c.instructions+=3;goto B61c3c1;
case 0x61c3c5:c.instructions+=2;goto B61c3c5;
case 0x61c3cb:c.instructions+=1;goto B61c3cb;
case 0x61c3cd:goto L61c3cd;
case 0x61c3d0:c.instructions+=9;goto B61c3d0;
case 0x61c3d5:c.instructions+=8;goto B61c3d5;
case 0x61c3d7:c.instructions+=7;goto B61c3d7;
case 0x61c3d9:c.instructions+=6;goto B61c3d9;
case 0x61c3db:c.instructions+=5;goto B61c3db;
case 0x61c3dd:c.instructions+=4;goto B61c3dd;
case 0x61c3e0:c.instructions+=3;goto B61c3e0;
case 0x61c3e2:c.instructions+=2;goto B61c3e2;
case 0x61c3e5:c.instructions+=1;goto B61c3e5;
case 0x61c3e7:goto L61c3e7;
case 0x61c3e9:c.instructions+=1;goto B61c3e9;
case 0x61c3f0:goto L61c3f0;
case 0x61c3f6:c.instructions+=7;goto B61c3f6;
case 0x61c3f8:c.instructions+=6;goto B61c3f8;
case 0x61c3fd:c.instructions+=5;goto B61c3fd;
case 0x61c400:c.instructions+=4;goto B61c400;
case 0x61c406:c.instructions+=3;goto B61c406;
case 0x61c40b:c.instructions+=2;goto B61c40b;
case 0x61c40c:c.instructions+=1;goto B61c40c;
case 0x61c40e:goto L61c40e;
case 0x61c413:c.instructions+=2;goto B61c413;
case 0x61c414:c.instructions+=1;goto B61c414;
case 0x61c415:goto L61c415;
case 0x61c417:c.instructions+=2;goto B61c417;
case 0x61c418:c.instructions+=1;goto B61c418;
case 0x61c420:goto L61c420;
case 0x61c424:c.instructions+=2;goto B61c424;
case 0x61c42a:c.instructions+=1;goto B61c42a;
case 0x61c42c:goto L61c42c;
case 0x61c431:c.instructions+=2;goto B61c431;
case 0x61c436:c.instructions+=1;goto B61c436;
case 0x61c438:goto L61c438;
case 0x61c43a:c.instructions+=6;goto B61c43a;
case 0x61c43d:c.instructions+=5;goto B61c43d;
case 0x61c43f:c.instructions+=4;goto B61c43f;
case 0x61c442:c.instructions+=3;goto B61c442;
case 0x61c447:c.instructions+=2;goto B61c447;
case 0x61c44c:c.instructions+=1;goto B61c44c;
case 0x61c44e:goto L61c44e;
case 0x61c453:c.instructions+=1;goto B61c453;
case 0x61c454:goto L61c454;
case 0x61c456:c.instructions+=1;goto B61c456;
case 0x61c460:goto L61c460;
case 0x61c461:c.instructions+=5;goto B61c461;
case 0x61c462:c.instructions+=4;goto B61c462;
case 0x61c468:c.instructions+=3;goto B61c468;
case 0x61c469:c.instructions+=2;goto B61c469;
case 0x61c46e:c.instructions+=1;goto B61c46e;
case 0x61c473:goto L61c473;
case 0x61c475:c.instructions+=2;goto B61c475;
case 0x61c477:c.instructions+=1;goto B61c477;
case 0x61c479:goto L61c479;
case 0x61c47d:c.instructions+=1;goto B61c47d;
case 0x61c480:goto L61c480;
case 0x61c483:c.instructions+=2;goto B61c483;
case 0x61c484:c.instructions+=1;goto B61c484;
case 0x61c489:goto L61c489;
case 0x61c48c:c.instructions+=2;goto B61c48c;
case 0x61c48e:c.instructions+=1;goto B61c48e;
case 0x61c490:goto L61c490;
case 0x61c492:c.instructions+=2;goto B61c492;
case 0x61c494:c.instructions+=1;goto B61c494;
case 0x61c496:goto L61c496;
case 0x61c497:c.instructions+=4;goto B61c497;
case 0x61c498:c.instructions+=3;goto B61c498;
case 0x61c49a:c.instructions+=2;goto B61c49a;
case 0x61c49b:c.instructions+=1;goto B61c49b;
case 0x61c49c:goto L61c49c;
case 0x61c49d:c.instructions+=4;goto B61c49d;
case 0x61c49f:c.instructions+=3;goto B61c49f;
case 0x61c4a0:c.instructions+=2;goto B61c4a0;
case 0x61c4a1:c.instructions+=1;goto B61c4a1;
case 0x61c4b0:goto L61c4b0;
case 0x61c4b6:c.instructions+=14;goto B61c4b6;
case 0x61c4b7:c.instructions+=13;goto B61c4b7;
case 0x61c4be:c.instructions+=12;goto B61c4be;
case 0x61c4bf:c.instructions+=11;goto B61c4bf;
case 0x61c4c0:c.instructions+=10;goto B61c4c0;
case 0x61c4c7:c.instructions+=9;goto B61c4c7;
case 0x61c4c9:c.instructions+=8;goto B61c4c9;
case 0x61c4ca:c.instructions+=7;goto B61c4ca;
case 0x61c4cc:c.instructions+=6;goto B61c4cc;
case 0x61c4cd:c.instructions+=5;goto B61c4cd;
case 0x61c4ce:c.instructions+=4;goto B61c4ce;
case 0x61c4d0:c.instructions+=3;goto B61c4d0;
case 0x61c4d1:c.instructions+=2;goto B61c4d1;
case 0x61c4d6:c.instructions+=1;goto B61c4d6;
case 0x61c4db:goto L61c4db;
case 0x61c4dd:c.instructions+=1;goto B61c4dd;
case 0x61c4df:goto L61c4df;
case 0x61c4e0:c.instructions+=1;goto B61c4e0;
case 0x61c4e7:goto L61c4e7;
case 0x61c4e9:c.instructions+=2;goto B61c4e9;
case 0x61c4eb:c.instructions+=1;goto B61c4eb;
case 0x61c4ed:goto L61c4ed;
case 0x61c4ef:c.instructions+=3;goto B61c4ef;
case 0x61c4f2:c.instructions+=2;goto B61c4f2;
case 0x61c4f5:c.instructions+=1;goto B61c4f5;
case 0x61c500:goto L61c500;
case 0x61c507:c.instructions+=2;goto B61c507;
case 0x61c50a:c.instructions+=1;goto B61c50a;
case 0x61c50c:goto L61c50c;
case 0x61c510:c.instructions+=1;goto B61c510;
case 0x61c511:goto L61c511;
case 0x61c518:c.instructions+=3;goto B61c518;
case 0x61c519:c.instructions+=2;goto B61c519;
case 0x61c51b:c.instructions+=1;goto B61c51b;
case 0x61c51d:goto L61c51d;
case 0x61c51f:c.instructions+=7;goto B61c51f;
case 0x61c520:c.instructions+=6;goto B61c520;
case 0x61c521:c.instructions+=5;goto B61c521;
case 0x61c523:c.instructions+=4;goto B61c523;
case 0x61c525:c.instructions+=3;goto B61c525;
case 0x61c526:c.instructions+=2;goto B61c526;
case 0x61c52b:c.instructions+=1;goto B61c52b;
case 0x61c530:goto L61c530;
case 0x61c536:c.instructions+=1;goto B61c536;
case 0x61c538:goto L61c538;
case 0x61c53a:c.instructions+=1;goto B61c53a;
case 0x61c53c:goto L61c53c;
case 0x61c53e:c.instructions+=2;goto B61c53e;
case 0x61c53f:c.instructions+=1;goto B61c53f;
case 0x61c541:goto L61c541;
case 0x61c542:c.instructions+=5;goto B61c542;
case 0x61c543:c.instructions+=4;goto B61c543;
case 0x61c545:c.instructions+=3;goto B61c545;
case 0x61c546:c.instructions+=2;goto B61c546;
case 0x61c54c:c.instructions+=1;goto B61c54c;
case 0x61c54d:goto L61c54d;
case 0x61c54e:c.instructions+=1;goto B61c54e;
case 0x61c553:goto L61c553;
case 0x61c557:c.instructions+=6;goto B61c557;
case 0x61c55a:c.instructions+=5;goto B61c55a;
case 0x61c55b:c.instructions+=4;goto B61c55b;
case 0x61c55c:c.instructions+=3;goto B61c55c;
case 0x61c55d:c.instructions+=2;goto B61c55d;
case 0x61c563:c.instructions+=1;goto B61c563;
case 0x61c570:goto L61c570;
case 0x61c574:c.instructions+=7;goto B61c574;
case 0x61c575:c.instructions+=6;goto B61c575;
case 0x61c576:c.instructions+=5;goto B61c576;
case 0x61c578:c.instructions+=4;goto B61c578;
case 0x61c579:c.instructions+=3;goto B61c579;
case 0x61c57c:c.instructions+=2;goto B61c57c;
case 0x61c57d:c.instructions+=1;goto B61c57d;
case 0x61c582:goto L61c582;
case 0x61c586:c.instructions+=8;goto B61c586;
case 0x61c588:c.instructions+=7;goto B61c588;
case 0x61c589:c.instructions+=6;goto B61c589;
case 0x61c58d:c.instructions+=5;goto B61c58d;
case 0x61c590:c.instructions+=4;goto B61c590;
case 0x61c593:c.instructions+=3;goto B61c593;
case 0x61c596:c.instructions+=2;goto B61c596;
case 0x61c599:c.instructions+=1;goto B61c599;
case 0x61c59e:goto L61c59e;
case 0x61c5a1:c.instructions+=3;goto B61c5a1;
case 0x61c5a3:c.instructions+=2;goto B61c5a3;
case 0x61c5a5:c.instructions+=1;goto B61c5a5;
case 0x61c5a7:goto L61c5a7;
case 0x61c5ab:goto L61c5ab;
case 0x61c5ac:c.instructions+=2;goto B61c5ac;
case 0x61c5ad:c.instructions+=1;goto B61c5ad;
case 0x61c5b0:goto L61c5b0;
case 0x61c5b1:c.instructions+=4;goto B61c5b1;
case 0x61c5b3:c.instructions+=3;goto B61c5b3;
case 0x61c5b6:c.instructions+=2;goto B61c5b6;
case 0x61c5b8:c.instructions+=1;goto B61c5b8;
case 0x61c5ba:goto L61c5ba;
case 0x61c5bd:c.instructions+=2;goto B61c5bd;
case 0x61c5bf:c.instructions+=1;goto B61c5bf;
case 0x61c5c1:goto L61c5c1;
case 0x61c5c2:c.instructions+=1;goto B61c5c2;
case 0x61c5c7:goto L61c5c7;
case 0x61c5ca:c.instructions+=5;goto B61c5ca;
case 0x61c5d1:c.instructions+=4;goto B61c5d1;
case 0x61c5d4:c.instructions+=3;goto B61c5d4;
case 0x61c5d6:c.instructions+=2;goto B61c5d6;
case 0x61c5dd:c.instructions+=1;goto B61c5dd;
case 0x61c5e2:goto L61c5e2;
case 0x61c5e5:goto L61c5e5;
case 0x61c5ea:goto L61c5ea;
case 0x61c5ec:c.instructions+=2;goto B61c5ec;
case 0x61c5ed:c.instructions+=1;goto B61c5ed;
case 0x61c5ef:goto L61c5ef;
case 0x61c5f0:goto L61c5f0;
case 0x61c5f5:goto L61c5f5;
case 0x61c5fa:goto L61c5fa;
case 0x61c5fc:c.instructions+=1;goto B61c5fc;
case 0x61c5fe:goto L61c5fe;
case 0x61c600:goto L61c600;
case 0x61c601:c.instructions+=9;goto B61c601;
case 0x61c603:c.instructions+=8;goto B61c603;
case 0x61c606:c.instructions+=7;goto B61c606;
case 0x61c60c:c.instructions+=6;goto B61c60c;
case 0x61c60d:c.instructions+=5;goto B61c60d;
case 0x61c60f:c.instructions+=4;goto B61c60f;
case 0x61c612:c.instructions+=3;goto B61c612;
case 0x61c614:c.instructions+=2;goto B61c614;
case 0x61c615:c.instructions+=1;goto B61c615;
case 0x61c617:goto L61c617;
case 0x61c61a:c.instructions+=2;goto B61c61a;
case 0x61c61c:c.instructions+=1;goto B61c61c;
case 0x61c61e:goto L61c61e;
case 0x61c61f:c.instructions+=1;goto B61c61f;
case 0x61c624:goto L61c624;
case 0x61c627:c.instructions+=5;goto B61c627;
case 0x61c62e:c.instructions+=4;goto B61c62e;
case 0x61c631:c.instructions+=3;goto B61c631;
case 0x61c633:c.instructions+=2;goto B61c633;
case 0x61c63a:c.instructions+=1;goto B61c63a;
case 0x61c63f:goto L61c63f;
case 0x61c642:goto L61c642;
case 0x61c648:c.instructions+=3;goto B61c648;
case 0x61c64d:c.instructions+=2;goto B61c64d;
case 0x61c64f:c.instructions+=1;goto B61c64f;
case 0x61c653:goto L61c653;
case 0x61c655:goto L61c655;
case 0x61c658:c.instructions+=2;goto B61c658;
case 0x61c65e:c.instructions+=1;goto B61c65e;
case 0x61c660:goto L61c660;
case 0x61c662:c.instructions+=1;goto B61c662;
case 0x61c668:goto L61c668;
case 0x61c669:c.instructions+=3;goto B61c669;
case 0x61c66f:c.instructions+=2;goto B61c66f;
case 0x61c672:c.instructions+=1;goto B61c672;
case 0x61c674:goto L61c674;
case 0x61c676:goto L61c676;
case 0x61c677:c.instructions+=4;goto B61c677;
case 0x61c67b:c.instructions+=3;goto B61c67b;
case 0x61c680:c.instructions+=2;goto B61c680;
case 0x61c681:c.instructions+=1;goto B61c681;
case 0x61c686:goto L61c686;
case 0x61c689:c.instructions+=5;goto B61c689;
case 0x61c68d:c.instructions+=4;goto B61c68d;
case 0x61c68e:c.instructions+=3;goto B61c68e;
case 0x61c691:c.instructions+=2;goto B61c691;
case 0x61c692:c.instructions+=1;goto B61c692;
case 0x61c697:goto L61c697;
case 0x61c69a:c.instructions+=3;goto B61c69a;
case 0x61c69d:c.instructions+=2;goto B61c69d;
case 0x61c69e:c.instructions+=1;goto B61c69e;
case 0x61c6a3:goto L61c6a3;
case 0x61c6a6:c.instructions+=18;goto B61c6a6;
case 0x61c6a8:c.instructions+=17;goto B61c6a8;
case 0x61c6aa:c.instructions+=16;goto B61c6aa;
case 0x61c6ac:c.instructions+=15;goto B61c6ac;
case 0x61c6af:c.instructions+=14;goto B61c6af;
case 0x61c6b2:c.instructions+=13;goto B61c6b2;
case 0x61c6b5:c.instructions+=12;goto B61c6b5;
case 0x61c6b8:c.instructions+=11;goto B61c6b8;
case 0x61c6bf:c.instructions+=10;goto B61c6bf;
case 0x61c6c3:c.instructions+=9;goto B61c6c3;
case 0x61c6c6:c.instructions+=8;goto B61c6c6;
case 0x61c6c7:c.instructions+=7;goto B61c6c7;
case 0x61c6cc:c.instructions+=6;goto B61c6cc;
case 0x61c6ce:c.instructions+=5;goto B61c6ce;
case 0x61c6d0:c.instructions+=4;goto B61c6d0;
case 0x61c6d3:c.instructions+=3;goto B61c6d3;
case 0x61c6d5:c.instructions+=2;goto B61c6d5;
case 0x61c6d6:c.instructions+=1;goto B61c6d6;
case 0x61c6db:goto L61c6db;
case 0x61c6de:c.instructions+=8;goto B61c6de;
case 0x61c6e1:c.instructions+=7;goto B61c6e1;
case 0x61c6e2:c.instructions+=6;goto B61c6e2;
case 0x61c6e5:c.instructions+=5;goto B61c6e5;
case 0x61c6ea:c.instructions+=4;goto B61c6ea;
case 0x61c6eb:c.instructions+=3;goto B61c6eb;
case 0x61c6ed:c.instructions+=2;goto B61c6ed;
case 0x61c6ee:c.instructions+=1;goto B61c6ee;
case 0x61c6f1:goto L61c6f1;
case 0x61c6f7:c.instructions+=2;goto B61c6f7;
case 0x61c6f9:c.instructions+=1;goto B61c6f9;
case 0x61c700:goto L61c700;
case 0x61c701:c.instructions+=6;goto B61c701;
case 0x61c703:c.instructions+=5;goto B61c703;
case 0x61c704:c.instructions+=4;goto B61c704;
case 0x61c709:c.instructions+=3;goto B61c709;
case 0x61c70b:c.instructions+=2;goto B61c70b;
case 0x61c70d:c.instructions+=1;goto B61c70d;
case 0x61c712:goto L61c712;
case 0x61c713:c.instructions+=5;goto B61c713;
case 0x61c718:c.instructions+=4;goto B61c718;
case 0x61c71a:c.instructions+=3;goto B61c71a;
case 0x61c71c:c.instructions+=2;goto B61c71c;
case 0x61c721:c.instructions+=1;goto B61c721;
case 0x61c726:goto L61c726;
case 0x61c727:c.instructions+=5;goto B61c727;
case 0x61c72c:c.instructions+=4;goto B61c72c;
case 0x61c731:c.instructions+=3;goto B61c731;
case 0x61c733:c.instructions+=2;goto B61c733;
case 0x61c738:c.instructions+=1;goto B61c738;
case 0x61c73d:goto L61c73d;
case 0x61c73e:c.instructions+=5;goto B61c73e;
case 0x61c743:c.instructions+=4;goto B61c743;
case 0x61c745:c.instructions+=3;goto B61c745;
case 0x61c74a:c.instructions+=2;goto B61c74a;
case 0x61c74f:c.instructions+=1;goto B61c74f;
case 0x61c754:goto L61c754;
case 0x61c759:c.instructions+=4;goto B61c759;
case 0x61c75e:c.instructions+=3;goto B61c75e;
case 0x61c761:c.instructions+=2;goto B61c761;
case 0x61c763:c.instructions+=1;goto B61c763;
case 0x61c765:goto L61c765;
case 0x61c767:c.instructions+=1;goto B61c767;
case 0x61c76c:goto L61c76c;
case 0x61c76e:c.instructions+=3;goto B61c76e;
case 0x61c771:c.instructions+=2;goto B61c771;
case 0x61c773:c.instructions+=1;goto B61c773;
case 0x61c775:goto L61c775;
case 0x61c776:c.instructions+=3;goto B61c776;
case 0x61c77b:c.instructions+=2;goto B61c77b;
case 0x61c77d:c.instructions+=1;goto B61c77d;
case 0x61c780:goto L61c780;
case 0x61c782:goto L61c782;
case 0x61c785:c.instructions+=7;goto B61c785;
case 0x61c788:c.instructions+=6;goto B61c788;
case 0x61c78b:c.instructions+=5;goto B61c78b;
case 0x61c78e:c.instructions+=4;goto B61c78e;
case 0x61c78f:c.instructions+=3;goto B61c78f;
case 0x61c795:c.instructions+=2;goto B61c795;
case 0x61c796:c.instructions+=1;goto B61c796;
case 0x61c797:goto L61c797;
case 0x61c799:c.instructions+=1;goto B61c799;
case 0x61c79f:goto L61c79f;
case 0x61c7a0:c.instructions+=1;goto B61c7a0;
case 0x61c7b0:goto L61c7b0;
case 0x61c7b1:c.instructions+=7;goto B61c7b1;
case 0x61c7b2:c.instructions+=6;goto B61c7b2;
case 0x61c7b4:c.instructions+=5;goto B61c7b4;
case 0x61c7b7:c.instructions+=4;goto B61c7b7;
case 0x61c7b8:c.instructions+=3;goto B61c7b8;
case 0x61c7bb:c.instructions+=2;goto B61c7bb;
case 0x61c7bd:c.instructions+=1;goto B61c7bd;
case 0x61c7c3:goto L61c7c3;
case 0x61c7c4:c.instructions+=3;goto B61c7c4;
case 0x61c7c6:c.instructions+=2;goto B61c7c6;
case 0x61c7c8:c.instructions+=1;goto B61c7c8;
case 0x61c7d0:goto L61c7d0;
case 0x61c7d6:c.instructions+=2;goto B61c7d6;
case 0x61c7d9:c.instructions+=1;goto B61c7d9;
case 0x61c7db:goto L61c7db;
case 0x61c7de:c.instructions+=3;goto B61c7de;
case 0x61c7e1:c.instructions+=2;goto B61c7e1;
case 0x61c7e3:c.instructions+=1;goto B61c7e3;
case 0x61c7e5:goto L61c7e5;
case 0x61c7e8:c.instructions+=1;goto B61c7e8;
case 0x61c7ea:goto L61c7ea;
case 0x61c7ed:goto L61c7ed;
case 0x61c7f0:c.instructions+=2;goto B61c7f0;
case 0x61c7f2:c.instructions+=1;goto B61c7f2;
case 0x61c7f4:goto L61c7f4;
case 0x61c7f7:c.instructions+=1;goto B61c7f7;
case 0x61c7f9:goto L61c7f9;
case 0x61c7fc:goto L61c7fc;
case 0x61c7ff:c.instructions+=2;goto B61c7ff;
case 0x61c801:c.instructions+=1;goto B61c801;
case 0x61c803:goto L61c803;
case 0x61c806:c.instructions+=1;goto B61c806;
case 0x61c808:goto L61c808;
case 0x61c80b:goto L61c80b;
case 0x61c80e:c.instructions+=2;goto B61c80e;
case 0x61c810:c.instructions+=1;goto B61c810;
case 0x61c812:goto L61c812;
case 0x61c815:c.instructions+=1;goto B61c815;
case 0x61c817:goto L61c817;
case 0x61c81a:goto L61c81a;
case 0x61c81d:c.instructions+=1;goto B61c81d;
case 0x61c81f:goto L61c81f;
case 0x61c822:c.instructions+=3;goto B61c822;
case 0x61c825:c.instructions+=2;goto B61c825;
case 0x61c827:c.instructions+=1;goto B61c827;
case 0x61c829:goto L61c829;
case 0x61c82c:c.instructions+=1;goto B61c82c;
case 0x61c82e:goto L61c82e;
case 0x61c831:goto L61c831;
case 0x61c834:c.instructions+=2;goto B61c834;
case 0x61c836:c.instructions+=1;goto B61c836;
case 0x61c838:goto L61c838;
case 0x61c83b:c.instructions+=1;goto B61c83b;
case 0x61c83d:goto L61c83d;
case 0x61c840:goto L61c840;
case 0x61c843:c.instructions+=2;goto B61c843;
case 0x61c845:c.instructions+=1;goto B61c845;
case 0x61c847:goto L61c847;
case 0x61c84a:c.instructions+=1;goto B61c84a;
case 0x61c84c:goto L61c84c;
case 0x61c84f:goto L61c84f;
case 0x61c852:c.instructions+=2;goto B61c852;
case 0x61c854:c.instructions+=1;goto B61c854;
case 0x61c856:goto L61c856;
case 0x61c859:c.instructions+=1;goto B61c859;
case 0x61c85b:goto L61c85b;
case 0x61c85e:goto L61c85e;
case 0x61c860:c.instructions+=2;goto B61c860;
case 0x61c862:c.instructions+=1;goto B61c862;
case 0x61c868:goto L61c868;
case 0x61c869:goto L61c869;
case 0x61c86a:c.instructions+=5;goto B61c86a;
case 0x61c86b:c.instructions+=4;goto B61c86b;
case 0x61c872:c.instructions+=3;goto B61c872;
case 0x61c874:c.instructions+=2;goto B61c874;
case 0x61c875:c.instructions+=1;goto B61c875;
case 0x61c880:goto L61c880;
case 0x61c881:c.instructions+=5;goto B61c881;
case 0x61c885:c.instructions+=4;goto B61c885;
case 0x61c88c:c.instructions+=3;goto B61c88c;
case 0x61c88d:c.instructions+=2;goto B61c88d;
case 0x61c88f:c.instructions+=1;goto B61c88f;
case 0x61c891:goto L61c891;
case 0x61c897:c.instructions+=6;goto B61c897;
case 0x61c898:c.instructions+=5;goto B61c898;
case 0x61c89e:c.instructions+=4;goto B61c89e;
case 0x61c89f:c.instructions+=3;goto B61c89f;
case 0x61c8a1:c.instructions+=2;goto B61c8a1;
case 0x61c8a8:c.instructions+=1;goto B61c8a8;
case 0x61c8ad:goto L61c8ad;
case 0x61c8b4:c.instructions+=1;goto B61c8b4;
case 0x61c8b6:goto L61c8b6;
case 0x61c8bc:c.instructions+=6;goto B61c8bc;
case 0x61c8c3:c.instructions+=5;goto B61c8c3;
case 0x61c8c4:c.instructions+=4;goto B61c8c4;
case 0x61c8ca:c.instructions+=3;goto B61c8ca;
case 0x61c8cb:c.instructions+=2;goto B61c8cb;
case 0x61c8cd:c.instructions+=1;goto B61c8cd;
case 0x61c8d2:goto L61c8d2;
case 0x61c8d4:c.instructions+=2;goto B61c8d4;
case 0x61c8db:c.instructions+=1;goto B61c8db;
case 0x61c8e0:goto L61c8e0;
case 0x61c8e1:c.instructions+=2;goto B61c8e1;
case 0x61c8e2:c.instructions+=1;goto B61c8e2;
case 0x61c8f0:goto L61c8f0;
case 0x61c8f1:c.instructions+=5;goto B61c8f1;
case 0x61c8f2:c.instructions+=4;goto B61c8f2;
case 0x61c8f6:c.instructions+=3;goto B61c8f6;
case 0x61c8fd:c.instructions+=2;goto B61c8fd;
case 0x61c8ff:c.instructions+=1;goto B61c8ff;
case 0x61c901:goto L61c901;
case 0x61c908:c.instructions+=1;goto B61c908;
case 0x61c90a:goto L61c90a;
case 0x61c910:c.instructions+=2;goto B61c910;
case 0x61c912:c.instructions+=1;goto B61c912;
case 0x61c914:goto L61c914;
case 0x61c91a:c.instructions+=2;goto B61c91a;
case 0x61c91b:c.instructions+=1;goto B61c91b;
case 0x61c920:goto L61c920;
case 0x61c922:c.instructions+=1;goto B61c922;
case 0x61c924:goto L61c924;
case 0x61c925:c.instructions+=3;goto B61c925;
case 0x61c927:c.instructions+=2;goto B61c927;
case 0x61c928:c.instructions+=1;goto B61c928;
case 0x61c92b:goto L61c92b;
case 0x61c931:c.instructions+=5;goto B61c931;
case 0x61c932:c.instructions+=4;goto B61c932;
case 0x61c934:c.instructions+=3;goto B61c934;
case 0x61c936:c.instructions+=2;goto B61c936;
case 0x61c937:c.instructions+=1;goto B61c937;
case 0x61c939:goto L61c939;
case 0x61c93f:c.instructions+=1;goto B61c93f;
case 0x61c940:goto L61c940;
case 0x61c942:c.instructions+=2;goto B61c942;
case 0x61c946:c.instructions+=1;goto B61c946;
case 0x61c948:goto L61c948;
case 0x61c94b:c.instructions+=3;goto B61c94b;
case 0x61c94c:c.instructions+=2;goto B61c94c;
case 0x61c951:c.instructions+=1;goto B61c951;
case 0x61c956:goto L61c956;
case 0x61c958:c.instructions+=1;goto B61c958;
case 0x61c95a:goto L61c95a;
case 0x61c95d:c.instructions+=2;goto B61c95d;
case 0x61c95f:c.instructions+=1;goto B61c95f;
case 0x61c961:goto L61c961;
case 0x61c962:c.instructions+=2;goto B61c962;
case 0x61c964:c.instructions+=1;goto B61c964;
case 0x61c969:goto L61c969;
case 0x61c96b:c.instructions+=1;goto B61c96b;
case 0x61c96d:goto L61c96d;
case 0x61c973:c.instructions+=4;goto B61c973;
case 0x61c974:c.instructions+=3;goto B61c974;
case 0x61c977:c.instructions+=2;goto B61c977;
case 0x61c979:c.instructions+=1;goto B61c979;
case 0x61c97b:goto L61c97b;
case 0x61c97c:c.instructions+=5;goto B61c97c;
case 0x61c97d:c.instructions+=4;goto B61c97d;
case 0x61c97e:c.instructions+=3;goto B61c97e;
case 0x61c983:c.instructions+=2;goto B61c983;
case 0x61c984:c.instructions+=1;goto B61c984;
case 0x61c987:goto L61c987;
case 0x61c988:c.instructions+=5;goto B61c988;
case 0x61c989:c.instructions+=4;goto B61c989;
case 0x61c98a:c.instructions+=3;goto B61c98a;
case 0x61c98c:c.instructions+=2;goto B61c98c;
case 0x61c98d:c.instructions+=1;goto B61c98d;
case 0x61c990:goto L61c990;
case 0x61c991:c.instructions+=6;goto B61c991;
case 0x61c992:c.instructions+=5;goto B61c992;
case 0x61c995:c.instructions+=4;goto B61c995;
case 0x61c996:c.instructions+=3;goto B61c996;
case 0x61c999:c.instructions+=2;goto B61c999;
case 0x61c99b:c.instructions+=1;goto B61c99b;
case 0x61c99d:goto L61c99d;
case 0x61c9a1:goto L61c9a1;
case 0x61c9a4:c.instructions+=3;goto B61c9a4;
case 0x61c9a5:c.instructions+=2;goto B61c9a5;
case 0x61c9a6:c.instructions+=1;goto B61c9a6;
case 0x61c9ab:goto L61c9ab;
case 0x61c9ae:c.instructions+=2;goto B61c9ae;
case 0x61c9b0:c.instructions+=1;goto B61c9b0;
case 0x61c9b2:goto L61c9b2;
case 0x61c9b4:c.instructions+=2;goto B61c9b4;
case 0x61c9b6:c.instructions+=1;goto B61c9b6;
case 0x61c9b8:goto L61c9b8;
case 0x61c9b9:c.instructions+=4;goto B61c9b9;
case 0x61c9ba:c.instructions+=3;goto B61c9ba;
case 0x61c9bc:c.instructions+=2;goto B61c9bc;
case 0x61c9bd:c.instructions+=1;goto B61c9bd;
case 0x61c9c0:goto L61c9c0;
case 0x61c9c1:c.instructions+=4;goto B61c9c1;
case 0x61c9c3:c.instructions+=3;goto B61c9c3;
case 0x61c9c4:c.instructions+=2;goto B61c9c4;
case 0x61c9c5:c.instructions+=1;goto B61c9c5;
case 0x61c9d0:goto L61c9d0;
case 0x61c9d1:c.instructions+=6;goto B61c9d1;
case 0x61c9d2:c.instructions+=5;goto B61c9d2;
case 0x61c9d5:c.instructions+=4;goto B61c9d5;
case 0x61c9d6:c.instructions+=3;goto B61c9d6;
case 0x61c9d9:c.instructions+=2;goto B61c9d9;
case 0x61c9db:c.instructions+=1;goto B61c9db;
case 0x61c9dd:goto L61c9dd;
case 0x61c9e1:goto L61c9e1;
case 0x61c9e4:c.instructions+=3;goto B61c9e4;
case 0x61c9e5:c.instructions+=2;goto B61c9e5;
case 0x61c9e6:c.instructions+=1;goto B61c9e6;
case 0x61c9eb:goto L61c9eb;
case 0x61c9ee:c.instructions+=2;goto B61c9ee;
case 0x61c9f0:c.instructions+=1;goto B61c9f0;
case 0x61c9f2:goto L61c9f2;
case 0x61c9f4:c.instructions+=2;goto B61c9f4;
case 0x61c9f6:c.instructions+=1;goto B61c9f6;
case 0x61c9f8:goto L61c9f8;
case 0x61c9f9:c.instructions+=4;goto B61c9f9;
case 0x61c9fa:c.instructions+=3;goto B61c9fa;
case 0x61c9fc:c.instructions+=2;goto B61c9fc;
case 0x61c9fd:c.instructions+=1;goto B61c9fd;
case 0x61ca00:goto L61ca00;
case 0x61ca01:c.instructions+=4;goto B61ca01;
case 0x61ca03:c.instructions+=3;goto B61ca03;
case 0x61ca04:c.instructions+=2;goto B61ca04;
case 0x61ca05:c.instructions+=1;goto B61ca05;
case 0x61ca10:goto L61ca10;
case 0x61ca13:c.instructions+=4;goto B61ca13;
case 0x61ca16:c.instructions+=3;goto B61ca16;
case 0x61ca18:c.instructions+=2;goto B61ca18;
case 0x61ca19:c.instructions+=1;goto B61ca19;
case 0x61ca1b:goto L61ca1b;
case 0x61ca1f:c.instructions+=1;goto B61ca1f;
case 0x61ca20:goto L61ca20;
case 0x61ca26:c.instructions+=1;goto B61ca26;
case 0x61ca28:goto L61ca28;
case 0x61ca2a:c.instructions+=2;goto B61ca2a;
case 0x61ca2c:c.instructions+=1;goto B61ca2c;
case 0x61ca2e:goto L61ca2e;
case 0x61ca30:c.instructions+=2;goto B61ca30;
case 0x61ca31:c.instructions+=1;goto B61ca31;
case 0x61ca34:goto L61ca34;
case 0x61ca37:c.instructions+=2;goto B61ca37;
case 0x61ca39:c.instructions+=1;goto B61ca39;
case 0x61ca3b:goto L61ca3b;
case 0x61ca3c:c.instructions+=2;goto B61ca3c;
case 0x61ca40:c.instructions+=1;goto B61ca40;
case 0x61ca50:goto L61ca50;
case 0x61ca51:c.instructions+=10;goto B61ca51;
case 0x61ca52:c.instructions+=9;goto B61ca52;
case 0x61ca56:c.instructions+=8;goto B61ca56;
case 0x61ca57:c.instructions+=7;goto B61ca57;
case 0x61ca59:c.instructions+=6;goto B61ca59;
case 0x61ca5c:c.instructions+=5;goto B61ca5c;
case 0x61ca5d:c.instructions+=4;goto B61ca5d;
case 0x61ca5f:c.instructions+=3;goto B61ca5f;
case 0x61ca61:c.instructions+=2;goto B61ca61;
case 0x61ca63:c.instructions+=1;goto B61ca63;
case 0x61ca65:goto L61ca65;
case 0x61ca6b:c.instructions+=1;goto B61ca6b;
case 0x61ca6d:goto L61ca6d;
case 0x61ca6f:c.instructions+=2;goto B61ca6f;
case 0x61ca71:c.instructions+=1;goto B61ca71;
case 0x61ca73:goto L61ca73;
case 0x61ca75:goto L61ca75;
case 0x61ca78:c.instructions+=2;goto B61ca78;
case 0x61ca7a:c.instructions+=1;goto B61ca7a;
case 0x61ca7c:goto L61ca7c;
case 0x61ca7d:c.instructions+=2;goto B61ca7d;
case 0x61ca7f:c.instructions+=1;goto B61ca7f;
case 0x61ca84:goto L61ca84;
case 0x61ca86:c.instructions+=1;goto B61ca86;
case 0x61ca88:goto L61ca88;
case 0x61ca8a:c.instructions+=2;goto B61ca8a;
case 0x61ca8c:c.instructions+=1;goto B61ca8c;
case 0x61ca8e:goto L61ca8e;
case 0x61ca90:goto L61ca90;
case 0x61ca96:c.instructions+=1;goto B61ca96;
case 0x61ca98:goto L61ca98;
case 0x61ca9a:c.instructions+=2;goto B61ca9a;
case 0x61ca9c:c.instructions+=1;goto B61ca9c;
case 0x61ca9e:goto L61ca9e;
case 0x61caa0:goto L61caa0;
case 0x61caa2:c.instructions+=2;goto B61caa2;
case 0x61caa4:c.instructions+=1;goto B61caa4;
case 0x61caa6:goto L61caa6;
case 0x61caac:c.instructions+=1;goto B61caac;
case 0x61caae:goto L61caae;
case 0x61cab0:c.instructions+=2;goto B61cab0;
case 0x61cab2:c.instructions+=1;goto B61cab2;
case 0x61cab4:goto L61cab4;
case 0x61cab6:goto L61cab6;
case 0x61cab9:c.instructions+=2;goto B61cab9;
case 0x61cabb:c.instructions+=1;goto B61cabb;
case 0x61cabd:goto L61cabd;
case 0x61cabe:c.instructions+=2;goto B61cabe;
case 0x61cac0:c.instructions+=1;goto B61cac0;
case 0x61cac5:goto L61cac5;
case 0x61cac7:c.instructions+=1;goto B61cac7;
case 0x61cac9:goto L61cac9;
case 0x61cacc:c.instructions+=2;goto B61cacc;
case 0x61cace:c.instructions+=1;goto B61cace;
case 0x61cad0:goto L61cad0;
case 0x61cad5:goto L61cad5;
case 0x61cad7:goto L61cad7;
case 0x61cad8:c.instructions+=4;goto B61cad8;
case 0x61cad9:c.instructions+=3;goto B61cad9;
case 0x61cada:c.instructions+=2;goto B61cada;
case 0x61cadb:c.instructions+=1;goto B61cadb;
case 0x61cae0:goto L61cae0;
case 0x61cae6:c.instructions+=1;goto B61cae6;
case 0x61caf0:goto L61caf0;
case 0x61caf5:c.instructions+=2;goto B61caf5;
case 0x61cafa:c.instructions+=1;goto B61cafa;
case 0x61cafc:goto L61cafc;
case 0x61cafe:c.instructions+=1;goto B61cafe;
case 0x61cb00:goto L61cb00;
case 0x61cb06:c.instructions+=2;goto B61cb06;
case 0x61cb09:c.instructions+=1;goto B61cb09;
case 0x61cb0b:goto L61cb0b;
case 0x61cb0f:goto L61cb0f;
case 0x61cb11:c.instructions+=2;goto B61cb11;
case 0x61cb16:c.instructions+=1;goto B61cb16;
case 0x61cb18:goto L61cb18;
case 0x61cb22:c.instructions+=2;goto B61cb22;
case 0x61cb27:c.instructions+=1;goto B61cb27;
case 0x61cb30:goto L61cb30;
case 0x61cb35:c.instructions+=1;goto B61cb35;
case 0x61cb40:goto L61cb40;
case 0x61cb44:c.instructions+=3;goto B61cb44;
case 0x61cb45:c.instructions+=2;goto B61cb45;
case 0x61cb4a:c.instructions+=1;goto B61cb4a;
case 0x61cb4f:goto L61cb4f;
case 0x61cb50:goto L61cb50;
case 0x61cb54:c.instructions+=2;goto B61cb54;
case 0x61cb5a:c.instructions+=1;goto B61cb5a;
case 0x61cb5c:goto L61cb5c;
case 0x61cb62:c.instructions+=10;goto B61cb62;
case 0x61cb65:c.instructions+=9;goto B61cb65;
case 0x61cb67:c.instructions+=8;goto B61cb67;
case 0x61cb6c:c.instructions+=7;goto B61cb6c;
case 0x61cb6f:c.instructions+=6;goto B61cb6f;
case 0x61cb72:c.instructions+=5;goto B61cb72;
case 0x61cb78:c.instructions+=4;goto B61cb78;
case 0x61cb7b:c.instructions+=3;goto B61cb7b;
case 0x61cb82:c.instructions+=2;goto B61cb82;
case 0x61cb87:c.instructions+=1;goto B61cb87;
case 0x61cb88:goto L61cb88;
case 0x61cb8a:c.instructions+=1;goto B61cb8a;
case 0x61cb90:goto L61cb90;
case 0x61cb94:c.instructions+=2;goto B61cb94;
case 0x61cb9a:c.instructions+=1;goto B61cb9a;
case 0x61cb9c:goto L61cb9c;
case 0x61cb9f:c.instructions+=5;goto B61cb9f;
case 0x61cba2:c.instructions+=4;goto B61cba2;
case 0x61cba4:c.instructions+=3;goto B61cba4;
case 0x61cba7:c.instructions+=2;goto B61cba7;
case 0x61cbac:c.instructions+=1;goto B61cbac;
case 0x61cbad:goto L61cbad;
case 0x61cbaf:c.instructions+=1;goto B61cbaf;
case 0x61cbb0:goto L61cbb0;
case 0x61cbb3:c.instructions+=13;goto B61cbb3;
case 0x61cbb6:c.instructions+=12;goto B61cbb6;
case 0x61cbb9:c.instructions+=11;goto B61cbb9;
case 0x61cbbc:c.instructions+=10;goto B61cbbc;
case 0x61cbbf:c.instructions+=9;goto B61cbbf;
case 0x61cbc0:c.instructions+=8;goto B61cbc0;
case 0x61cbc1:c.instructions+=7;goto B61cbc1;
case 0x61cbc4:c.instructions+=6;goto B61cbc4;
case 0x61cbc6:c.instructions+=5;goto B61cbc6;
case 0x61cbc9:c.instructions+=4;goto B61cbc9;
case 0x61cbcb:c.instructions+=3;goto B61cbcb;
case 0x61cbcc:c.instructions+=2;goto B61cbcc;
case 0x61cbce:c.instructions+=1;goto B61cbce;
case 0x61cbd0:goto L61cbd0;
case 0x61cbd1:c.instructions+=3;goto B61cbd1;
case 0x61cbd4:c.instructions+=2;goto B61cbd4;
case 0x61cbdb:c.instructions+=1;goto B61cbdb;
case 0x61cbdd:goto L61cbdd;
case 0x61cbde:c.instructions+=1;goto B61cbde;
case 0x61cbe1:goto L61cbe1;
case 0x61cbe7:c.instructions+=10;goto B61cbe7;
case 0x61cbe9:c.instructions+=9;goto B61cbe9;
case 0x61cbec:c.instructions+=8;goto B61cbec;
case 0x61cbef:c.instructions+=7;goto B61cbef;
case 0x61cbf1:c.instructions+=6;goto B61cbf1;
case 0x61cbf6:c.instructions+=5;goto B61cbf6;
case 0x61cbfa:c.instructions+=4;goto B61cbfa;
case 0x61cbfe:c.instructions+=3;goto B61cbfe;
case 0x61cc04:c.instructions+=2;goto B61cc04;
case 0x61cc08:c.instructions+=1;goto B61cc08;
case 0x61cc0a:goto L61cc0a;
case 0x61cc0f:c.instructions+=4;goto B61cc0f;
case 0x61cc13:c.instructions+=3;goto B61cc13;
case 0x61cc17:c.instructions+=2;goto B61cc17;
case 0x61cc1d:c.instructions+=1;goto B61cc1d;
case 0x61cc1f:goto L61cc1f;
case 0x61cc25:goto L61cc25;
case 0x61cc29:c.instructions+=7;goto B61cc29;
case 0x61cc2d:c.instructions+=6;goto B61cc2d;
case 0x61cc2f:c.instructions+=5;goto B61cc2f;
case 0x61cc33:c.instructions+=4;goto B61cc33;
case 0x61cc39:c.instructions+=3;goto B61cc39;
case 0x61cc3b:c.instructions+=2;goto B61cc3b;
case 0x61cc3e:c.instructions+=1;goto B61cc3e;
case 0x61cc44:goto L61cc44;
case 0x61cc47:c.instructions+=2;goto B61cc47;
case 0x61cc49:c.instructions+=1;goto B61cc49;
case 0x61cc4f:goto L61cc4f;
case 0x61cc55:c.instructions+=1;goto B61cc55;
case 0x61cc57:goto L61cc57;
case 0x61cc5b:c.instructions+=26;goto B61cc5b;
case 0x61cc5d:c.instructions+=25;goto B61cc5d;
case 0x61cc60:c.instructions+=24;goto B61cc60;
case 0x61cc63:c.instructions+=23;goto B61cc63;
case 0x61cc67:c.instructions+=22;goto B61cc67;
case 0x61cc6b:c.instructions+=21;goto B61cc6b;
case 0x61cc6d:c.instructions+=20;goto B61cc6d;
case 0x61cc70:c.instructions+=19;goto B61cc70;
case 0x61cc73:c.instructions+=18;goto B61cc73;
case 0x61cc77:c.instructions+=17;goto B61cc77;
case 0x61cc7b:c.instructions+=16;goto B61cc7b;
case 0x61cc7d:c.instructions+=15;goto B61cc7d;
case 0x61cc83:c.instructions+=14;goto B61cc83;
case 0x61cc86:c.instructions+=13;goto B61cc86;
case 0x61cc88:c.instructions+=12;goto B61cc88;
case 0x61cc8a:c.instructions+=11;goto B61cc8a;
case 0x61cc8e:c.instructions+=10;goto B61cc8e;
case 0x61cc92:c.instructions+=9;goto B61cc92;
case 0x61cc96:c.instructions+=8;goto B61cc96;
case 0x61cc9c:c.instructions+=7;goto B61cc9c;
case 0x61cc9f:c.instructions+=6;goto B61cc9f;
case 0x61cca2:c.instructions+=5;goto B61cca2;
case 0x61cca6:c.instructions+=4;goto B61cca6;
case 0x61ccaa:c.instructions+=3;goto B61ccaa;
case 0x61ccb0:c.instructions+=2;goto B61ccb0;
case 0x61ccb3:c.instructions+=1;goto B61ccb3;
case 0x61ccb6:goto L61ccb6;
case 0x61ccb9:c.instructions+=5;goto B61ccb9;
case 0x61ccbc:c.instructions+=4;goto B61ccbc;
case 0x61ccbf:c.instructions+=3;goto B61ccbf;
case 0x61ccc1:c.instructions+=2;goto B61ccc1;
case 0x61ccc5:c.instructions+=1;goto B61ccc5;
case 0x61cccb:goto L61cccb;
case 0x61cccf:c.instructions+=5;goto B61cccf;
case 0x61ccd5:c.instructions+=4;goto B61ccd5;
case 0x61ccd7:c.instructions+=3;goto B61ccd7;
case 0x61ccd9:c.instructions+=2;goto B61ccd9;
case 0x61ccdb:c.instructions+=1;goto B61ccdb;
case 0x61cce0:goto L61cce0;
case 0x61cce4:c.instructions+=3;goto B61cce4;
case 0x61cce6:c.instructions+=2;goto B61cce6;
case 0x61cce9:c.instructions+=1;goto B61cce9;
case 0x61ccee:goto L61ccee;
case 0x61ccf1:c.instructions+=2;goto B61ccf1;
case 0x61ccf3:c.instructions+=1;goto B61ccf3;
case 0x61ccf5:goto L61ccf5;
case 0x61ccfb:c.instructions+=5;goto B61ccfb;
case 0x61ccfd:c.instructions+=4;goto B61ccfd;
case 0x61cd00:c.instructions+=3;goto B61cd00;
case 0x61cd02:c.instructions+=2;goto B61cd02;
case 0x61cd05:c.instructions+=1;goto B61cd05;
case 0x61cd07:goto L61cd07;
case 0x61cd0b:c.instructions+=2;goto B61cd0b;
case 0x61cd0d:c.instructions+=1;goto B61cd0d;
case 0x61cd0f:goto L61cd0f;
case 0x61cd15:c.instructions+=22;goto B61cd15;
case 0x61cd19:c.instructions+=21;goto B61cd19;
case 0x61cd1b:c.instructions+=20;goto B61cd1b;
case 0x61cd21:c.instructions+=19;goto B61cd21;
case 0x61cd27:c.instructions+=18;goto B61cd27;
case 0x61cd29:c.instructions+=17;goto B61cd29;
case 0x61cd2b:c.instructions+=16;goto B61cd2b;
case 0x61cd31:c.instructions+=15;goto B61cd31;
case 0x61cd37:c.instructions+=14;goto B61cd37;
case 0x61cd3b:c.instructions+=13;goto B61cd3b;
case 0x61cd41:c.instructions+=12;goto B61cd41;
case 0x61cd43:c.instructions+=11;goto B61cd43;
case 0x61cd45:c.instructions+=10;goto B61cd45;
case 0x61cd49:c.instructions+=9;goto B61cd49;
case 0x61cd4b:c.instructions+=8;goto B61cd4b;
case 0x61cd4d:c.instructions+=7;goto B61cd4d;
case 0x61cd50:c.instructions+=6;goto B61cd50;
case 0x61cd54:c.instructions+=5;goto B61cd54;
case 0x61cd57:c.instructions+=4;goto B61cd57;
case 0x61cd5a:c.instructions+=3;goto B61cd5a;
case 0x61cd5e:c.instructions+=2;goto B61cd5e;
case 0x61cd61:c.instructions+=1;goto B61cd61;
case 0x61cd63:goto L61cd63;
case 0x61cd65:goto L61cd65;
case 0x61cd69:c.instructions+=2;goto B61cd69;
case 0x61cd6b:c.instructions+=1;goto B61cd6b;
case 0x61cd6d:goto L61cd6d;
case 0x61cd73:c.instructions+=2;goto B61cd73;
case 0x61cd75:c.instructions+=1;goto B61cd75;
case 0x61cd7a:goto L61cd7a;
case 0x61cd7f:c.instructions+=1;goto B61cd7f;
case 0x61cd81:goto L61cd81;
case 0x61cd86:c.instructions+=1;goto B61cd86;
case 0x61cd88:goto L61cd88;
case 0x61cd8a:c.instructions+=1;goto B61cd8a;
case 0x61cd8c:goto L61cd8c;
case 0x61cd8e:goto L61cd8e;
case 0x61cd90:c.instructions+=3;goto B61cd90;
case 0x61cd95:c.instructions+=2;goto B61cd95;
case 0x61cd98:c.instructions+=1;goto B61cd98;
case 0x61cd9a:goto L61cd9a;
case 0x61cda0:c.instructions+=1;goto B61cda0;
case 0x61cda2:goto L61cda2;
case 0x61cda8:goto L61cda8;
case 0x61cdab:c.instructions+=1;goto B61cdab;
case 0x61cdad:goto L61cdad;
case 0x61cdb3:c.instructions+=6;goto B61cdb3;
case 0x61cdb4:c.instructions+=5;goto B61cdb4;
case 0x61cdb5:c.instructions+=4;goto B61cdb5;
case 0x61cdb6:c.instructions+=3;goto B61cdb6;
case 0x61cdb8:c.instructions+=2;goto B61cdb8;
case 0x61cdbb:c.instructions+=1;goto B61cdbb;
case 0x61cdbd:goto L61cdbd;
case 0x61cdc2:c.instructions+=2;goto B61cdc2;
case 0x61cdc5:c.instructions+=1;goto B61cdc5;
case 0x61cdc8:goto L61cdc8;
case 0x61cdca:c.instructions+=2;goto B61cdca;
case 0x61cdcd:c.instructions+=1;goto B61cdcd;
case 0x61cdd0:goto L61cdd0;
case 0x61cdd1:c.instructions+=5;goto B61cdd1;
case 0x61cdd5:c.instructions+=4;goto B61cdd5;
case 0x61cdd6:c.instructions+=3;goto B61cdd6;
case 0x61cdd7:c.instructions+=2;goto B61cdd7;
case 0x61cdd9:c.instructions+=1;goto B61cdd9;
case 0x61cdde:goto L61cdde;
case 0x61cde1:c.instructions+=5;goto B61cde1;
case 0x61cde7:c.instructions+=4;goto B61cde7;
case 0x61cde9:c.instructions+=3;goto B61cde9;
case 0x61cdeb:c.instructions+=2;goto B61cdeb;
case 0x61cdee:c.instructions+=1;goto B61cdee;
case 0x61cdf0:goto L61cdf0;
case 0x61cdf6:c.instructions+=14;goto B61cdf6;
case 0x61cdf8:c.instructions+=13;goto B61cdf8;
case 0x61cdfc:c.instructions+=12;goto B61cdfc;
case 0x61cdff:c.instructions+=11;goto B61cdff;
case 0x61ce02:c.instructions+=10;goto B61ce02;
case 0x61ce08:c.instructions+=9;goto B61ce08;
case 0x61ce0e:c.instructions+=8;goto B61ce0e;
case 0x61ce12:c.instructions+=7;goto B61ce12;
case 0x61ce14:c.instructions+=6;goto B61ce14;
case 0x61ce18:c.instructions+=5;goto B61ce18;
case 0x61ce1a:c.instructions+=4;goto B61ce1a;
case 0x61ce1c:c.instructions+=3;goto B61ce1c;
case 0x61ce1e:c.instructions+=2;goto B61ce1e;
case 0x61ce21:c.instructions+=1;goto B61ce21;
case 0x61ce23:goto L61ce23;
case 0x61ce27:c.instructions+=1;goto B61ce27;
case 0x61ce29:goto L61ce29;
case 0x61ce2d:goto L61ce2d;
case 0x61ce30:goto L61ce30;
case 0x61ce33:c.instructions+=4;goto B61ce33;
case 0x61ce39:c.instructions+=3;goto B61ce39;
case 0x61ce3b:c.instructions+=2;goto B61ce3b;
case 0x61ce3e:c.instructions+=1;goto B61ce3e;
case 0x61ce40:goto L61ce40;
case 0x61ce46:c.instructions+=14;goto B61ce46;
case 0x61ce49:c.instructions+=13;goto B61ce49;
case 0x61ce4d:c.instructions+=12;goto B61ce4d;
case 0x61ce50:c.instructions+=11;goto B61ce50;
case 0x61ce53:c.instructions+=10;goto B61ce53;
case 0x61ce59:c.instructions+=9;goto B61ce59;
case 0x61ce5f:c.instructions+=8;goto B61ce5f;
case 0x61ce63:c.instructions+=7;goto B61ce63;
case 0x61ce65:c.instructions+=6;goto B61ce65;
case 0x61ce69:c.instructions+=5;goto B61ce69;
case 0x61ce6b:c.instructions+=4;goto B61ce6b;
case 0x61ce6d:c.instructions+=3;goto B61ce6d;
case 0x61ce6f:c.instructions+=2;goto B61ce6f;
case 0x61ce72:c.instructions+=1;goto B61ce72;
case 0x61ce74:goto L61ce74;
case 0x61ce78:c.instructions+=1;goto B61ce78;
case 0x61ce7a:goto L61ce7a;
case 0x61ce7e:goto L61ce7e;
case 0x61ce81:goto L61ce81;
case 0x61ce84:c.instructions+=4;goto B61ce84;
case 0x61ce8a:c.instructions+=3;goto B61ce8a;
case 0x61ce8c:c.instructions+=2;goto B61ce8c;
case 0x61ce8f:c.instructions+=1;goto B61ce8f;
case 0x61ce91:goto L61ce91;
case 0x61ce97:c.instructions+=14;goto B61ce97;
case 0x61ce9a:c.instructions+=13;goto B61ce9a;
case 0x61ce9e:c.instructions+=12;goto B61ce9e;
case 0x61cea1:c.instructions+=11;goto B61cea1;
case 0x61cea4:c.instructions+=10;goto B61cea4;
case 0x61ceaa:c.instructions+=9;goto B61ceaa;
case 0x61ceb0:c.instructions+=8;goto B61ceb0;
case 0x61ceb4:c.instructions+=7;goto B61ceb4;
case 0x61ceb6:c.instructions+=6;goto B61ceb6;
case 0x61ceba:c.instructions+=5;goto B61ceba;
case 0x61cebc:c.instructions+=4;goto B61cebc;
case 0x61cebe:c.instructions+=3;goto B61cebe;
case 0x61cec0:c.instructions+=2;goto B61cec0;
case 0x61cec3:c.instructions+=1;goto B61cec3;
case 0x61cec5:goto L61cec5;
case 0x61cec9:c.instructions+=1;goto B61cec9;
case 0x61cecb:goto L61cecb;
case 0x61cecf:goto L61cecf;
case 0x61ced2:goto L61ced2;
case 0x61ced5:c.instructions+=4;goto B61ced5;
case 0x61cedb:c.instructions+=3;goto B61cedb;
case 0x61cedd:c.instructions+=2;goto B61cedd;
case 0x61cee0:c.instructions+=1;goto B61cee0;
case 0x61cee2:goto L61cee2;
case 0x61cee8:c.instructions+=14;goto B61cee8;
case 0x61ceeb:c.instructions+=13;goto B61ceeb;
case 0x61ceef:c.instructions+=12;goto B61ceef;
case 0x61cef2:c.instructions+=11;goto B61cef2;
case 0x61cef5:c.instructions+=10;goto B61cef5;
case 0x61cefb:c.instructions+=9;goto B61cefb;
case 0x61cf01:c.instructions+=8;goto B61cf01;
case 0x61cf05:c.instructions+=7;goto B61cf05;
case 0x61cf07:c.instructions+=6;goto B61cf07;
case 0x61cf0b:c.instructions+=5;goto B61cf0b;
case 0x61cf0d:c.instructions+=4;goto B61cf0d;
case 0x61cf0f:c.instructions+=3;goto B61cf0f;
case 0x61cf11:c.instructions+=2;goto B61cf11;
case 0x61cf14:c.instructions+=1;goto B61cf14;
case 0x61cf16:goto L61cf16;
case 0x61cf1a:c.instructions+=1;goto B61cf1a;
case 0x61cf1c:goto L61cf1c;
case 0x61cf20:goto L61cf20;
case 0x61cf23:goto L61cf23;
case 0x61cf26:c.instructions+=4;goto B61cf26;
case 0x61cf2c:c.instructions+=3;goto B61cf2c;
case 0x61cf2e:c.instructions+=2;goto B61cf2e;
case 0x61cf31:c.instructions+=1;goto B61cf31;
case 0x61cf33:goto L61cf33;
case 0x61cf39:c.instructions+=14;goto B61cf39;
case 0x61cf3c:c.instructions+=13;goto B61cf3c;
case 0x61cf40:c.instructions+=12;goto B61cf40;
case 0x61cf43:c.instructions+=11;goto B61cf43;
case 0x61cf46:c.instructions+=10;goto B61cf46;
case 0x61cf4c:c.instructions+=9;goto B61cf4c;
case 0x61cf52:c.instructions+=8;goto B61cf52;
case 0x61cf56:c.instructions+=7;goto B61cf56;
case 0x61cf58:c.instructions+=6;goto B61cf58;
case 0x61cf5c:c.instructions+=5;goto B61cf5c;
case 0x61cf5e:c.instructions+=4;goto B61cf5e;
case 0x61cf60:c.instructions+=3;goto B61cf60;
case 0x61cf62:c.instructions+=2;goto B61cf62;
case 0x61cf65:c.instructions+=1;goto B61cf65;
case 0x61cf67:goto L61cf67;
case 0x61cf6b:c.instructions+=1;goto B61cf6b;
case 0x61cf6d:goto L61cf6d;
case 0x61cf71:goto L61cf71;
case 0x61cf74:goto L61cf74;
case 0x61cf77:c.instructions+=4;goto B61cf77;
case 0x61cf7d:c.instructions+=3;goto B61cf7d;
case 0x61cf7f:c.instructions+=2;goto B61cf7f;
case 0x61cf82:c.instructions+=1;goto B61cf82;
case 0x61cf84:goto L61cf84;
case 0x61cf8a:c.instructions+=14;goto B61cf8a;
case 0x61cf8d:c.instructions+=13;goto B61cf8d;
case 0x61cf91:c.instructions+=12;goto B61cf91;
case 0x61cf94:c.instructions+=11;goto B61cf94;
case 0x61cf97:c.instructions+=10;goto B61cf97;
case 0x61cf9d:c.instructions+=9;goto B61cf9d;
case 0x61cfa3:c.instructions+=8;goto B61cfa3;
case 0x61cfa7:c.instructions+=7;goto B61cfa7;
case 0x61cfa9:c.instructions+=6;goto B61cfa9;
case 0x61cfad:c.instructions+=5;goto B61cfad;
case 0x61cfaf:c.instructions+=4;goto B61cfaf;
case 0x61cfb1:c.instructions+=3;goto B61cfb1;
case 0x61cfb3:c.instructions+=2;goto B61cfb3;
case 0x61cfb6:c.instructions+=1;goto B61cfb6;
case 0x61cfb8:goto L61cfb8;
case 0x61cfbc:c.instructions+=3;goto B61cfbc;
case 0x61cfbe:c.instructions+=2;goto B61cfbe;
case 0x61cfc1:c.instructions+=1;goto B61cfc1;
case 0x61cfc6:goto L61cfc6;
case 0x61cfc7:c.instructions+=2;goto B61cfc7;
case 0x61cfc8:c.instructions+=1;goto B61cfc8;
case 0x61cfcb:goto L61cfcb;
case 0x61cfcf:c.instructions+=1;goto B61cfcf;
case 0x61cfd2:goto L61cfd2;
case 0x61cfd4:c.instructions+=1;goto B61cfd4;
case 0x61cfd9:goto L61cfd9;
case 0x61cfda:c.instructions+=2;goto B61cfda;
case 0x61cfdb:c.instructions+=1;goto B61cfdb;
case 0x61cfe0:goto L61cfe0;
case 0x61cfe4:c.instructions+=5;goto B61cfe4;
case 0x61cfeb:c.instructions+=4;goto B61cfeb;
case 0x61cff1:c.instructions+=3;goto B61cff1;
case 0x61cff4:c.instructions+=2;goto B61cff4;
case 0x61cffb:c.instructions+=1;goto B61cffb;
default:missing_instruction(c.pc);}
B61c004:L61c004:{c.instructions+=1;NFSU2_TR(0x61c004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c009ull));
TAIL_STATIC(0x61b980u,61b);
}
B61c009:L61c009:{c.instructions+=7;NFSU2_TR(0x61c009);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c00a:{NFSU2_TR(0x61c00a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c00b:{NFSU2_TR(0x61c00b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x688ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c011:{NFSU2_TR(0x61c011);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61c015:{NFSU2_TR(0x61c015);
u8 U[4];
w4(U+0,u32(0x7a859cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c01a:{NFSU2_TR(0x61c01a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c01b:{NFSU2_TR(0x61c01b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c020ull));
TAIL_STATIC(0x4400d0u,440);
}
B61c020:L61c020:{c.instructions+=3;NFSU2_TR(0x61c020);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61c024:{NFSU2_TR(0x61c024);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c025:{NFSU2_TR(0x61c025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c02aull));
TAIL_STATIC(0x43db50u,43d);
}
B61c02a:L61c02a:{c.instructions+=7;NFSU2_TR(0x61c02a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B61c02d:{NFSU2_TR(0x61c02d);
__builtin_memmove((R+28),(R+0),4);
}
B61c02f:{NFSU2_TR(0x61c02f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c031:{NFSU2_TR(0x61c031);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c033:{NFSU2_TR(0x61c033);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c034:{NFSU2_TR(0x61c034);
u8 U[4];
w4(U+0,u32(0x7a8594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c039:{NFSU2_TR(0x61c039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c03eull));
TAIL_STATIC(0x43db80u,43d);
}
B61c03e:L61c03e:{c.instructions+=7;NFSU2_TR(0x61c03e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61c040:{NFSU2_TR(0x61c040);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61c043:{NFSU2_TR(0x61c043);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c044:{NFSU2_TR(0x61c044);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c046:{NFSU2_TR(0x61c046);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c047:{NFSU2_TR(0x61c047);
w4(R+4,u32(0x8a2b68ull));
}
B61c04c:{NFSU2_TR(0x61c04c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c051ull));
TAIL_STATIC(0x61b980u,61b);
}
B61c051:L61c051:{c.instructions+=6;NFSU2_TR(0x61c051);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c053:{NFSU2_TR(0x61c053);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c055:{NFSU2_TR(0x61c055);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c056:{NFSU2_TR(0x61c056);
u8 U[4];
w4(U+0,u32(0x7a858cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c05b:{NFSU2_TR(0x61c05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c061:{NFSU2_TR(0x61c061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c066ull));
TAIL_STATIC(0x43db80u,43d);
}
B61c066:L61c066:{c.instructions+=7;NFSU2_TR(0x61c066);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61c069:{NFSU2_TR(0x61c069);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c06a:{NFSU2_TR(0x61c06a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61c06c:{NFSU2_TR(0x61c06c);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c06e:{NFSU2_TR(0x61c06e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c06f:{NFSU2_TR(0x61c06f);
w4(R+4,u32(0x8a2b68ull));
}
B61c074:{NFSU2_TR(0x61c074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c079ull));
TAIL_STATIC(0x61b980u,61b);
}
B61c079:L61c079:{c.instructions+=6;NFSU2_TR(0x61c079);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c07b:{NFSU2_TR(0x61c07b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c07d:{NFSU2_TR(0x61c07d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c07e:{NFSU2_TR(0x61c07e);
u8 U[4];
w4(U+0,u32(0x7a8580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c083:{NFSU2_TR(0x61c083);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c089:{NFSU2_TR(0x61c089);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c08eull));
TAIL_STATIC(0x43db80u,43d);
}
B61c08e:L61c08e:{c.instructions+=7;NFSU2_TR(0x61c08e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61c090:{NFSU2_TR(0x61c090);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61c093:{NFSU2_TR(0x61c093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c094:{NFSU2_TR(0x61c094);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c096:{NFSU2_TR(0x61c096);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c097:{NFSU2_TR(0x61c097);
w4(R+4,u32(0x8a2b68ull));
}
B61c09c:{NFSU2_TR(0x61c09c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c0a1ull));
TAIL_STATIC(0x61b980u,61b);
}
B61c0a1:L61c0a1:{c.instructions+=6;NFSU2_TR(0x61c0a1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0a3:{NFSU2_TR(0x61c0a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0a5:{NFSU2_TR(0x61c0a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0a6:{NFSU2_TR(0x61c0a6);
u8 U[4];
w4(U+0,u32(0x7a8574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0ab:{NFSU2_TR(0x61c0ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c0b1:{NFSU2_TR(0x61c0b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c0b6ull));
TAIL_STATIC(0x43db80u,43d);
}
B61c0b6:L61c0b6:{c.instructions+=7;NFSU2_TR(0x61c0b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61c0b8:{NFSU2_TR(0x61c0b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61c0bb:{NFSU2_TR(0x61c0bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0bc:{NFSU2_TR(0x61c0bc);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0be:{NFSU2_TR(0x61c0be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0bf:{NFSU2_TR(0x61c0bf);
w4(R+4,u32(0x8a2b68ull));
}
B61c0c4:{NFSU2_TR(0x61c0c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c0c9ull));
TAIL_STATIC(0x61b980u,61b);
}
B61c0c9:L61c0c9:{c.instructions+=6;NFSU2_TR(0x61c0c9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0cb:{NFSU2_TR(0x61c0cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0cd:{NFSU2_TR(0x61c0cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0ce:{NFSU2_TR(0x61c0ce);
u8 U[4];
w4(U+0,u32(0x7a8568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0d3:{NFSU2_TR(0x61c0d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c0d9:{NFSU2_TR(0x61c0d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c0deull));
TAIL_STATIC(0x43db80u,43d);
}
B61c0de:L61c0de:{c.instructions+=7;NFSU2_TR(0x61c0de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61c0e1:{NFSU2_TR(0x61c0e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0e2:{NFSU2_TR(0x61c0e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61c0e4:{NFSU2_TR(0x61c0e4);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0e6:{NFSU2_TR(0x61c0e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0e7:{NFSU2_TR(0x61c0e7);
w4(R+4,u32(0x8a2b68ull));
}
B61c0ec:{NFSU2_TR(0x61c0ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c0f1ull));
TAIL_STATIC(0x61b980u,61b);
}
B61c0f1:L61c0f1:{c.instructions+=6;NFSU2_TR(0x61c0f1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0f3:{NFSU2_TR(0x61c0f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0f5:{NFSU2_TR(0x61c0f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0f6:{NFSU2_TR(0x61c0f6);
u8 U[4];
w4(U+0,u32(0x7a855cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c0fb:{NFSU2_TR(0x61c0fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c101:{NFSU2_TR(0x61c101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c106ull));
TAIL_STATIC(0x43db80u,43d);
}
B61c106:L61c106:{c.instructions+=7;NFSU2_TR(0x61c106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61c108:{NFSU2_TR(0x61c108);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61c10b:{NFSU2_TR(0x61c10b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c10c:{NFSU2_TR(0x61c10c);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c10e:{NFSU2_TR(0x61c10e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c10f:{NFSU2_TR(0x61c10f);
w4(R+4,u32(0x8a2b68ull));
}
B61c114:{NFSU2_TR(0x61c114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c119ull));
TAIL_STATIC(0x61b980u,61b);
}
B61c119:L61c119:{c.instructions+=11;NFSU2_TR(0x61c119);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c11f:{NFSU2_TR(0x61c11f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x839ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c126:{NFSU2_TR(0x61c126);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c12d:{NFSU2_TR(0x61c12d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x843ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c134:{NFSU2_TR(0x61c134);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c13b:{NFSU2_TR(0x61c13b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x850ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c142:{NFSU2_TR(0x61c142);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c149:{NFSU2_TR(0x61c149);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c150:{NFSU2_TR(0x61c150);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x873ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61c156:{NFSU2_TR(0x61c156);
w4(R+4,u32(0x4ull));
}
B61c15b:{NFSU2_TR(0x61c15b);
{goto L61c160;}
}
B61c160:L61c160:{c.instructions+=5;NFSU2_TR(0x61c160);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c164:{NFSU2_TR(0x61c164);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+0)),r1(U+0));
}
B61c167:{NFSU2_TR(0x61c167);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61c168:{NFSU2_TR(0x61c168);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B61c169:{NFSU2_TR(0x61c169);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c160u);}goto L61c160;}}
}
B61c16b:L61c16b:{c.instructions+=1;NFSU2_TR(0x61c16b);
{goto L61c25b;}
}
B61c170:L61c170:{c.instructions+=8;NFSU2_TR(0x61c170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61c172:{NFSU2_TR(0x61c172);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c174:{NFSU2_TR(0x61c174);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c176:{NFSU2_TR(0x61c176);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c178:{NFSU2_TR(0x61c178);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c17a:{NFSU2_TR(0x61c17a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c17b:{NFSU2_TR(0x61c17b);
w4(R+4,u32(0x8a2b68ull));
}
B61c180:{NFSU2_TR(0x61c180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c185ull));
TAIL_STATIC(0x61b980u,61b);
}
B61c185:L61c185:{c.instructions+=9;NFSU2_TR(0x61c185);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c187:{NFSU2_TR(0x61c187);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c189:{NFSU2_TR(0x61c189);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c18b:{NFSU2_TR(0x61c18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c191:{NFSU2_TR(0x61c191);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61c193:{NFSU2_TR(0x61c193);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c195:{NFSU2_TR(0x61c195);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c196:{NFSU2_TR(0x61c196);
w4(R+4,u32(0x8a2b68ull));
}
B61c19b:{NFSU2_TR(0x61c19b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c1a0ull));
TAIL_STATIC(0x61b980u,61b);
}
B61c1a0:L61c1a0:{c.instructions+=9;NFSU2_TR(0x61c1a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61c1a2:{NFSU2_TR(0x61c1a2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1a4:{NFSU2_TR(0x61c1a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1a6:{NFSU2_TR(0x61c1a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1a8:{NFSU2_TR(0x61c1a8);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1aa:{NFSU2_TR(0x61c1aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1ab:{NFSU2_TR(0x61c1ab);
w4(R+4,u32(0x8a2b68ull));
}
B61c1b0:{NFSU2_TR(0x61c1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c1b6:{NFSU2_TR(0x61c1b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c1bbull));
TAIL_STATIC(0x61b980u,61b);
}
B61c1bb:L61c1bb:{c.instructions+=9;NFSU2_TR(0x61c1bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61c1bd:{NFSU2_TR(0x61c1bd);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1bf:{NFSU2_TR(0x61c1bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1c1:{NFSU2_TR(0x61c1c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1c3:{NFSU2_TR(0x61c1c3);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1c5:{NFSU2_TR(0x61c1c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1c6:{NFSU2_TR(0x61c1c6);
w4(R+4,u32(0x8a2b68ull));
}
B61c1cb:{NFSU2_TR(0x61c1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c1d1:{NFSU2_TR(0x61c1d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c1d6ull));
TAIL_STATIC(0x61b980u,61b);
}
B61c1d6:L61c1d6:{c.instructions+=9;NFSU2_TR(0x61c1d6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1d8:{NFSU2_TR(0x61c1d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1da:{NFSU2_TR(0x61c1da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1dc:{NFSU2_TR(0x61c1dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c1e2:{NFSU2_TR(0x61c1e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61c1e4:{NFSU2_TR(0x61c1e4);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1e6:{NFSU2_TR(0x61c1e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1e7:{NFSU2_TR(0x61c1e7);
w4(R+4,u32(0x8a2b68ull));
}
B61c1ec:{NFSU2_TR(0x61c1ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c1f1ull));
TAIL_STATIC(0x61b980u,61b);
}
B61c1f1:L61c1f1:{c.instructions+=9;NFSU2_TR(0x61c1f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61c1f3:{NFSU2_TR(0x61c1f3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1f5:{NFSU2_TR(0x61c1f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1f7:{NFSU2_TR(0x61c1f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1f9:{NFSU2_TR(0x61c1f9);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1fb:{NFSU2_TR(0x61c1fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c1fc:{NFSU2_TR(0x61c1fc);
w4(R+4,u32(0x8a2b68ull));
}
B61c201:{NFSU2_TR(0x61c201);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c207:{NFSU2_TR(0x61c207);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c20cull));
TAIL_STATIC(0x61b980u,61b);
}
B61c20c:L61c20c:{c.instructions+=11;NFSU2_TR(0x61c20c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c212:{NFSU2_TR(0x61c212);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x839ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c219:{NFSU2_TR(0x61c219);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c220:{NFSU2_TR(0x61c220);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x843ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c227:{NFSU2_TR(0x61c227);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c22e:{NFSU2_TR(0x61c22e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x850ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c235:{NFSU2_TR(0x61c235);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c23c:{NFSU2_TR(0x61c23c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83eull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c243:{NFSU2_TR(0x61c243);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x873ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61c249:{NFSU2_TR(0x61c249);
w4(R+4,u32(0x4ull));
}
B61c24e:{NFSU2_TR(0x61c24e);
__builtin_memmove((R+28),(R+28),4);
}
B61c250:L61c250:{c.instructions+=5;NFSU2_TR(0x61c250);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c254:{NFSU2_TR(0x61c254);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B61c257:{NFSU2_TR(0x61c257);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61c258:{NFSU2_TR(0x61c258);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B61c259:{NFSU2_TR(0x61c259);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c250u);}goto L61c250;}}
}
B61c25b:L61c25b:{c.instructions+=5;NFSU2_TR(0x61c25b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c25f:{NFSU2_TR(0x61c25f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61c260:{NFSU2_TR(0x61c260);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xaaull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61c265:{NFSU2_TR(0x61c265);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c269:{NFSU2_TR(0x61c269);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x61bd00u,61b);}
}
B61c26f:L61c26f:{c.instructions+=6;NFSU2_TR(0x61c26f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c270:{NFSU2_TR(0x61c270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c271:{NFSU2_TR(0x61c271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61c272:{NFSU2_TR(0x61c272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c273:{NFSU2_TR(0x61c273);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x88ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x88ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x88ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61c279:{NFSU2_TR(0x61c279);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c280:L61c280:{c.instructions+=10;NFSU2_TR(0x61c280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B61c283:{NFSU2_TR(0x61c283);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c284:{NFSU2_TR(0x61c284);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c285:{NFSU2_TR(0x61c285);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61c289:{NFSU2_TR(0x61c289);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c28a:{NFSU2_TR(0x61c28a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61c28e:{NFSU2_TR(0x61c28e);
u8 U[4];
w4(U+0,u32(0x7a8664ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c293:{NFSU2_TR(0x61c293);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c294:{NFSU2_TR(0x61c294);
__builtin_memmove((R+24),(R+4),4);
}
B61c296:{NFSU2_TR(0x61c296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c29bull));
TAIL_STATIC(0x4400d0u,440);
}
B61c29b:L61c29b:{c.instructions+=3;NFSU2_TR(0x61c29b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61c29f:{NFSU2_TR(0x61c29f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c2a0:{NFSU2_TR(0x61c2a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c2a5ull));
TAIL_STATIC(0x43db50u,43d);
}
B61c2a5:L61c2a5:{c.instructions+=13;NFSU2_TR(0x61c2a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61c2a7:{NFSU2_TR(0x61c2a7);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B61c2ad:{NFSU2_TR(0x61c2ad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B61c2b3:{NFSU2_TR(0x61c2b3);
u8 U[16];
w4(U+0,u32(u32(u32(0x88cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B61c2ba:{NFSU2_TR(0x61c2ba);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B61c2bc:{NFSU2_TR(0x61c2bc);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B61c2be:{NFSU2_TR(0x61c2be);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B61c2c0:{NFSU2_TR(0x61c2c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c2c1:{NFSU2_TR(0x61c2c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61c2c5:{NFSU2_TR(0x61c2c5);
u8 U[4];
w4(U+0,u32(0x7a8654ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c2ca:{NFSU2_TR(0x61c2ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c2cb:{NFSU2_TR(0x61c2cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x584ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c2d1:{NFSU2_TR(0x61c2d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c2d6ull));
TAIL_STATIC(0x4400d0u,440);
}
B61c2d6:L61c2d6:{c.instructions+=3;NFSU2_TR(0x61c2d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61c2da:{NFSU2_TR(0x61c2da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c2db:{NFSU2_TR(0x61c2db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c2e0ull));
TAIL_STATIC(0x43db50u,43d);
}
B61c2e0:L61c2e0:{c.instructions+=6;NFSU2_TR(0x61c2e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c2e1:{NFSU2_TR(0x61c2e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61c2e5:{NFSU2_TR(0x61c2e5);
u8 U[4];
w4(U+0,u32(0x7a8644ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c2ea:{NFSU2_TR(0x61c2ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c2eb:{NFSU2_TR(0x61c2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x588ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c2f1:{NFSU2_TR(0x61c2f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c2f6ull));
TAIL_STATIC(0x4400d0u,440);
}
B61c2f6:L61c2f6:{c.instructions+=3;NFSU2_TR(0x61c2f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61c2fa:{NFSU2_TR(0x61c2fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c2fb:{NFSU2_TR(0x61c2fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c300ull));
TAIL_STATIC(0x43db50u,43d);
}
B61c300:L61c300:{c.instructions+=6;NFSU2_TR(0x61c300);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B61c303:{NFSU2_TR(0x61c303);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c304:{NFSU2_TR(0x61c304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c30a:{NFSU2_TR(0x61c30a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c30b:{NFSU2_TR(0x61c30b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61c30e:{NFSU2_TR(0x61c30e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c320:L61c320:{c.instructions+=7;NFSU2_TR(0x61c320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c321:{NFSU2_TR(0x61c321);
__builtin_memmove((R+24),(R+4),4);
}
B61c323:{NFSU2_TR(0x61c323);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61c325:{NFSU2_TR(0x61c325);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B61c32b:{NFSU2_TR(0x61c32b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B61c331:{NFSU2_TR(0x61c331);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B61c333:{NFSU2_TR(0x61c333);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c339;}}
}
B61c335:L61c335:{c.instructions+=3;NFSU2_TR(0x61c335);
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
B61c337:{NFSU2_TR(0x61c337);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c338:{NFSU2_TR(0x61c338);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c339:L61c339:{c.instructions+=4;NFSU2_TR(0x61c339);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B61c33c:{NFSU2_TR(0x61c33c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c33d:{NFSU2_TR(0x61c33d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c33e:{NFSU2_TR(0x61c33e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c343ull));
TAIL_STATIC(0x43db50u,43d);
}
B61c343:L61c343:{c.instructions+=3;NFSU2_TR(0x61c343);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c344:{NFSU2_TR(0x61c344);
u8 U[4];
w4(U+0,u32(0x7a8460ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c349:{NFSU2_TR(0x61c349);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c34eull));
TAIL_STATIC(0x43db80u,43d);
}
B61c34e:L61c34e:{c.instructions+=6;NFSU2_TR(0x61c34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61c354:{NFSU2_TR(0x61c354);
__builtin_memmove((R+28),(R+0),4);
}
B61c356:{NFSU2_TR(0x61c356);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c35c:{NFSU2_TR(0x61c35c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B61c35f:{NFSU2_TR(0x61c35f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c361:{NFSU2_TR(0x61c361);
if(r1(R+518)){{goto L61c371;}}
}
B61c363:L61c363:{c.instructions+=3;NFSU2_TR(0x61c363);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B61c369:{NFSU2_TR(0x61c369);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61c36b:{NFSU2_TR(0x61c36b);
if(r1(R+518)){{goto L61c371;}}
}
B61c36d:L61c36d:{c.instructions+=2;NFSU2_TR(0x61c36d);
__builtin_memmove((R+24),(R+0),4);
}
B61c36f:{NFSU2_TR(0x61c36f);
{goto L61c38b;}
}
B61c371:L61c371:{c.instructions+=2;NFSU2_TR(0x61c371);
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
B61c373:{NFSU2_TR(0x61c373);
if(r1(R+518)){{goto L61c3b4;}}
}
B61c375:L61c375:{c.instructions+=4;NFSU2_TR(0x61c375);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61c378:{NFSU2_TR(0x61c378);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B61c37b:{NFSU2_TR(0x61c37b);
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
B61c37d:{NFSU2_TR(0x61c37d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61c3b4;}}
}
B61c37f:L61c37f:{c.instructions+=3;NFSU2_TR(0x61c37f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61c385:{NFSU2_TR(0x61c385);
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
B61c387:{NFSU2_TR(0x61c387);
if(r1(R+518)){{goto L61c3b4;}}
}
B61c389:L61c389:{c.instructions+=1;NFSU2_TR(0x61c389);
__builtin_memmove((R+24),(R+4),4);
}
B61c38b:L61c38b:{c.instructions+=2;NFSU2_TR(0x61c38b);
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
B61c38d:{NFSU2_TR(0x61c38d);
if(r1(R+518)){{goto L61c3b4;}}
}
B61c38f:L61c38f:{c.instructions+=2;NFSU2_TR(0x61c38f);
u8 U[4];
w4(U+0,u32(0x7a72d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c394:{NFSU2_TR(0x61c394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c399ull));
TAIL_STATIC(0x43db50u,43d);
}
B61c399:L61c399:{c.instructions+=5;NFSU2_TR(0x61c399);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61c39c:{NFSU2_TR(0x61c39c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c39e:{NFSU2_TR(0x61c39e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c39f:{NFSU2_TR(0x61c39f);
__builtin_memmove((R+4),(R+24),4);
}
B61c3a1:{NFSU2_TR(0x61c3a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c3a6ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61c3a6:L61c3a6:{c.instructions+=2;NFSU2_TR(0x61c3a6);
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
B61c3a8:{NFSU2_TR(0x61c3a8);
if(r1(R+518)){{goto L61c3b2;}}
}
B61c3aa:L61c3aa:{c.instructions+=5;NFSU2_TR(0x61c3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c3ad:{NFSU2_TR(0x61c3ad);
__builtin_memmove((R+28),(R+0),4);
}
B61c3af:{NFSU2_TR(0x61c3af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c3b0:{NFSU2_TR(0x61c3b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c3b1:{NFSU2_TR(0x61c3b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c3b2:L61c3b2:{c.instructions+=1;NFSU2_TR(0x61c3b2);
__builtin_memmove((R+0),(R+28),4);
}
B61c3b4:L61c3b4:{c.instructions+=4;NFSU2_TR(0x61c3b4);
__builtin_memmove((R+0),(R+28),4);
}
B61c3b6:{NFSU2_TR(0x61c3b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c3b7:{NFSU2_TR(0x61c3b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c3b8:{NFSU2_TR(0x61c3b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c3c0:L61c3c0:{c.instructions+=4;NFSU2_TR(0x61c3c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c3c1:{NFSU2_TR(0x61c3c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61c3c5:{NFSU2_TR(0x61c3c5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x30220ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61c3cb:{NFSU2_TR(0x61c3cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c415;}}
}
B61c3cd:L61c3cd:{c.instructions+=10;NFSU2_TR(0x61c3cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61c3d0:{NFSU2_TR(0x61c3d0);
w4(R+0,u32(0x3e22cbcfull));
}
B61c3d5:{NFSU2_TR(0x61c3d5);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B61c3d7:{NFSU2_TR(0x61c3d7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B61c3d9:{NFSU2_TR(0x61c3d9);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B61c3db:{NFSU2_TR(0x61c3db);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B61c3dd:{NFSU2_TR(0x61c3dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B61c3e0:{NFSU2_TR(0x61c3e0);
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
B61c3e2:{NFSU2_TR(0x61c3e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61c3e5:{NFSU2_TR(0x61c3e5);
if(r1(R+518)){{goto L61c40e;}}
}
B61c3e7:L61c3e7:{c.instructions+=2;NFSU2_TR(0x61c3e7);
__builtin_memmove((R+8),(R+4),4);
}
B61c3e9:{NFSU2_TR(0x61c3e9);
__builtin_memmove((R+16),(R+16),4);
}
B61c3f0:L61c3f0:{c.instructions+=8;NFSU2_TR(0x61c3f0);
__builtin_memmove((R+4),gp(0x8a31e8),4);
}
B61c3f6:{NFSU2_TR(0x61c3f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B61c3f8:{NFSU2_TR(0x61c3f8);
__builtin_memmove(gp(0x8a31e8),(R+0),4);
}
B61c3fd:{NFSU2_TR(0x61c3fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c400:{NFSU2_TR(0x61c400);
u8 U[4];
w4(U+0,u32(0x8a31e4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B61c406:{NFSU2_TR(0x61c406);
w1(R+512,carry<u32>(r4(R+0),u32(0x338ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x338ull))));
}
B61c40b:{NFSU2_TR(0x61c40b);
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
B61c40c:{NFSU2_TR(0x61c40c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c3f0u);}goto L61c3f0;}}
}
B61c40e:L61c40e:{c.instructions+=3;NFSU2_TR(0x61c40e);
w4(R+0,u32(0x1ull));
}
B61c413:{NFSU2_TR(0x61c413);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c414:{NFSU2_TR(0x61c414);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c415:L61c415:{c.instructions+=3;NFSU2_TR(0x61c415);
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
B61c417:{NFSU2_TR(0x61c417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c418:{NFSU2_TR(0x61c418);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c420:L61c420:{c.instructions+=3;NFSU2_TR(0x61c420);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c424:{NFSU2_TR(0x61c424);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x30220ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61c42a:{NFSU2_TR(0x61c42a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c454;}}
}
B61c42c:L61c42c:{c.instructions+=3;NFSU2_TR(0x61c42c);
__builtin_memmove((R+0),gp(0x8a31e4),4);
}
B61c431:{NFSU2_TR(0x61c431);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8a31e4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8a31e4ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8a31e4ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61c436:{NFSU2_TR(0x61c436);
if(r1(R+518)){{goto L61c44e;}}
}
B61c438:L61c438:{c.instructions+=7;NFSU2_TR(0x61c438);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61c43a:{NFSU2_TR(0x61c43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c43d:{NFSU2_TR(0x61c43d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B61c43f:{NFSU2_TR(0x61c43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c442:{NFSU2_TR(0x61c442);
__builtin_memmove((R+0),gp(0x8a31e4),4);
}
B61c447:{NFSU2_TR(0x61c447);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8a31e4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8a31e4ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8a31e4ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61c44c:{NFSU2_TR(0x61c44c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c438u);}goto L61c438;}}
}
B61c44e:L61c44e:{c.instructions+=2;NFSU2_TR(0x61c44e);
w4(R+0,u32(0x1ull));
}
B61c453:{NFSU2_TR(0x61c453);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c454:L61c454:{c.instructions+=2;NFSU2_TR(0x61c454);
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
B61c456:{NFSU2_TR(0x61c456);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c460:L61c460:{c.instructions+=6;NFSU2_TR(0x61c460);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c461:{NFSU2_TR(0x61c461);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c462:{NFSU2_TR(0x61c462);
__builtin_memmove((R+24),gp(0x8a31e4),4);
}
B61c468:{NFSU2_TR(0x61c468);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c469:{NFSU2_TR(0x61c469);
w4(R+4,u32(0x8a31e4ull));
}
B61c46e:{NFSU2_TR(0x61c46e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c473ull));
TAIL_STATIC(0x502fd0u,502);
}
B61c473:L61c473:{c.instructions+=3;NFSU2_TR(0x61c473);
__builtin_memmove((R+28),(R+0),4);
}
B61c475:{NFSU2_TR(0x61c475);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61c477:{NFSU2_TR(0x61c477);
if(r1(R+518)){{goto L61c496;}}
}
B61c479:L61c479:{c.instructions+=2;NFSU2_TR(0x61c479);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61c47d:{NFSU2_TR(0x61c47d);
__builtin_memmove((R+4),(R+4),4);
}
B61c480:L61c480:{c.instructions+=3;NFSU2_TR(0x61c480);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61c483:{NFSU2_TR(0x61c483);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c484:{NFSU2_TR(0x61c484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c489ull));
TAIL_STATIC(0x505450u,505);
}
B61c489:L61c489:{c.instructions+=3;NFSU2_TR(0x61c489);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61c48c:{NFSU2_TR(0x61c48c);
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
B61c48e:{NFSU2_TR(0x61c48e);
if(r1(R+518)){{goto L61c49c;}}
}
B61c490:L61c490:{c.instructions+=3;NFSU2_TR(0x61c490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61c492:{NFSU2_TR(0x61c492);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61c494:{NFSU2_TR(0x61c494);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c480u);}goto L61c480;}}
}
B61c496:L61c496:{c.instructions+=5;NFSU2_TR(0x61c496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c497:{NFSU2_TR(0x61c497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c498:{NFSU2_TR(0x61c498);
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
B61c49a:{NFSU2_TR(0x61c49a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c49b:{NFSU2_TR(0x61c49b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c49c:L61c49c:{c.instructions+=5;NFSU2_TR(0x61c49c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c49d:{NFSU2_TR(0x61c49d);
__builtin_memmove((R+0),(R+24),4);
}
B61c49f:{NFSU2_TR(0x61c49f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c4a0:{NFSU2_TR(0x61c4a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c4a1:{NFSU2_TR(0x61c4a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c4b0:L61c4b0:{c.instructions+=15;NFSU2_TR(0x61c4b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x800ull))));
}
B61c4b6:{NFSU2_TR(0x61c4b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c4b7:{NFSU2_TR(0x61c4b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x80cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61c4be:{NFSU2_TR(0x61c4be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c4bf:{NFSU2_TR(0x61c4bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c4c0:{NFSU2_TR(0x61c4c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x810ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61c4c7:{NFSU2_TR(0x61c4c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61c4c9:{NFSU2_TR(0x61c4c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c4ca:{NFSU2_TR(0x61c4ca);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61c4cc:{NFSU2_TR(0x61c4cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c4cd:{NFSU2_TR(0x61c4cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c4ce:{NFSU2_TR(0x61c4ce);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c4d0:{NFSU2_TR(0x61c4d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c4d1:{NFSU2_TR(0x61c4d1);
w4(R+4,u32(0x8a2b68ull));
}
B61c4d6:{NFSU2_TR(0x61c4d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c4dbull));
TAIL_STATIC(0x61b980u,61b);
}
B61c4db:L61c4db:{c.instructions+=2;NFSU2_TR(0x61c4db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c4dd:{NFSU2_TR(0x61c4dd);
if(r1(R+518)){{goto L61c541;}}
}
B61c4df:L61c4df:{c.instructions+=2;NFSU2_TR(0x61c4df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c4e0:{NFSU2_TR(0x61c4e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x820ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61c4e7:L61c4e7:{c.instructions+=3;NFSU2_TR(0x61c4e7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61c4e9:{NFSU2_TR(0x61c4e9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c4eb:{NFSU2_TR(0x61c4eb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61c51d;}}
}
B61c4ed:L61c4ed:{c.instructions+=4;NFSU2_TR(0x61c4ed);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B61c4ef:{NFSU2_TR(0x61c4ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B61c4f2:{NFSU2_TR(0x61c4f2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1full))));
}
B61c4f5:{NFSU2_TR(0x61c4f5);
{goto L61c500;}
}
B61c500:L61c500:{c.instructions+=3;NFSU2_TR(0x61c500);
u8 U[8];
w4(U+0,u32(u32(u32(0x81cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61c507:{NFSU2_TR(0x61c507);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+8))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B61c50a:{NFSU2_TR(0x61c50a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c511;}}
}
B61c50c:L61c50c:{c.instructions+=2;NFSU2_TR(0x61c50c);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61c510:{NFSU2_TR(0x61c510);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B61c511:L61c511:{c.instructions+=4;NFSU2_TR(0x61c511);
u8 U[8];
w4(U+0,u32(u32(u32(0x820ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61c518:{NFSU2_TR(0x61c518);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B61c519:{NFSU2_TR(0x61c519);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61c51b:{NFSU2_TR(0x61c51b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c500u);}goto L61c500;}}
}
B61c51d:L61c51d:{c.instructions+=8;NFSU2_TR(0x61c51d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61c51f:{NFSU2_TR(0x61c51f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c520:{NFSU2_TR(0x61c520);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c521:{NFSU2_TR(0x61c521);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c523:{NFSU2_TR(0x61c523);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c525:{NFSU2_TR(0x61c525);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c526:{NFSU2_TR(0x61c526);
w4(R+4,u32(0x8a2b68ull));
}
B61c52b:{NFSU2_TR(0x61c52b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c530ull));
TAIL_STATIC(0x61b980u,61b);
}
B61c530:L61c530:{c.instructions+=2;NFSU2_TR(0x61c530);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61c536:{NFSU2_TR(0x61c536);
if(r1(R+518)){{goto L61c53c;}}
}
B61c538:L61c538:{c.instructions+=2;NFSU2_TR(0x61c538);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c53a:{NFSU2_TR(0x61c53a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c4e7u);}goto L61c4e7;}}
}
B61c53c:L61c53c:{c.instructions+=3;NFSU2_TR(0x61c53c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c53e:{NFSU2_TR(0x61c53e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c53f:{NFSU2_TR(0x61c53f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c54d;}}
}
B61c541:L61c541:{c.instructions+=6;NFSU2_TR(0x61c541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c542:{NFSU2_TR(0x61c542);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c543:{NFSU2_TR(0x61c543);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61c545:{NFSU2_TR(0x61c545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61c546:{NFSU2_TR(0x61c546);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x800ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x800ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x800ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61c54c:{NFSU2_TR(0x61c54c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c54d:L61c54d:{c.instructions+=2;NFSU2_TR(0x61c54d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c54e:{NFSU2_TR(0x61c54e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c553ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B61c553:L61c553:{c.instructions+=7;NFSU2_TR(0x61c553);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B61c557:{NFSU2_TR(0x61c557);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61c55a:{NFSU2_TR(0x61c55a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c55b:{NFSU2_TR(0x61c55b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c55c:{NFSU2_TR(0x61c55c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61c55d:{NFSU2_TR(0x61c55d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x800ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x800ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x800ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61c563:{NFSU2_TR(0x61c563);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c570:L61c570:{c.instructions+=8;NFSU2_TR(0x61c570);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c574:{NFSU2_TR(0x61c574);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c575:{NFSU2_TR(0x61c575);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c576:{NFSU2_TR(0x61c576);
__builtin_memmove((R+24),(R+4),4);
}
B61c578:{NFSU2_TR(0x61c578);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c579:{NFSU2_TR(0x61c579);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c57c:{NFSU2_TR(0x61c57c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c57d:{NFSU2_TR(0x61c57d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c582ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B61c582:L61c582:{c.instructions+=9;NFSU2_TR(0x61c582);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61c586:{NFSU2_TR(0x61c586);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61c588:{NFSU2_TR(0x61c588);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c589:{NFSU2_TR(0x61c589);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B61c58d:{NFSU2_TR(0x61c58d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c590:{NFSU2_TR(0x61c590);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x53ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c593:{NFSU2_TR(0x61c593);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c596:{NFSU2_TR(0x61c596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c599:{NFSU2_TR(0x61c599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c59eull));
TAIL_STATIC(0x57d900u,57d);
}
B61c59e:L61c59e:{c.instructions+=4;NFSU2_TR(0x61c59e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B61c5a1:{NFSU2_TR(0x61c5a1);
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
B61c5a3:{NFSU2_TR(0x61c5a3);
__builtin_memmove((R+0),(R+24),4);
}
B61c5a5:{NFSU2_TR(0x61c5a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c5ab;}}
}
B61c5a7:L61c5a7:{c.instructions+=1;NFSU2_TR(0x61c5a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c5ab:L61c5ab:{c.instructions+=3;NFSU2_TR(0x61c5ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c5ac:{NFSU2_TR(0x61c5ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c5ad:{NFSU2_TR(0x61c5ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c5b0:L61c5b0:{c.instructions+=5;NFSU2_TR(0x61c5b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c5b1:{NFSU2_TR(0x61c5b1);
__builtin_memmove((R+24),(R+4),4);
}
B61c5b3:{NFSU2_TR(0x61c5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c5b6:{NFSU2_TR(0x61c5b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c5b8:{NFSU2_TR(0x61c5b8);
if(r1(R+518)){{goto L61c5e5;}}
}
B61c5ba:L61c5ba:{c.instructions+=3;NFSU2_TR(0x61c5ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c5bd:{NFSU2_TR(0x61c5bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c5bf:{NFSU2_TR(0x61c5bf);
if(r1(R+518)){{goto L61c5e5;}}
}
B61c5c1:L61c5c1:{c.instructions+=2;NFSU2_TR(0x61c5c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c5c2:{NFSU2_TR(0x61c5c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c5c7ull));
TAIL_STATIC(0x580e90u,580);
}
B61c5c7:L61c5c7:{c.instructions+=6;NFSU2_TR(0x61c5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c5ca:{NFSU2_TR(0x61c5ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61c5d1:{NFSU2_TR(0x61c5d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61c5d4:{NFSU2_TR(0x61c5d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c5d6:{NFSU2_TR(0x61c5d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61c5dd:{NFSU2_TR(0x61c5dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c5e2ull));
TAIL_STATIC(0x438140u,438);
}
B61c5e2:L61c5e2:{c.instructions+=1;NFSU2_TR(0x61c5e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61c5e5:L61c5e5:{c.instructions+=1;NFSU2_TR(0x61c5e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c5eaull));
TAIL_STATIC(0x571060u,571);
}
B61c5ea:L61c5ea:{c.instructions+=3;NFSU2_TR(0x61c5ea);
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
B61c5ec:{NFSU2_TR(0x61c5ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c5ed:{NFSU2_TR(0x61c5ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c5fe;}}
}
B61c5ef:L61c5ef:{c.instructions+=1;NFSU2_TR(0x61c5ef);
}
B61c5f0:L61c5f0:{c.instructions+=1;NFSU2_TR(0x61c5f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c5f5ull));
TAIL_STATIC(0x57ef60u,57e);
}
B61c5f5:L61c5f5:{c.instructions+=1;NFSU2_TR(0x61c5f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c5faull));
TAIL_STATIC(0x571060u,571);
}
B61c5fa:L61c5fa:{c.instructions+=2;NFSU2_TR(0x61c5fa);
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
B61c5fc:{NFSU2_TR(0x61c5fc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c5f0u);}goto L61c5f0;}}
}
B61c5fe:L61c5fe:{c.instructions+=1;NFSU2_TR(0x61c5fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c600:L61c600:{c.instructions+=10;NFSU2_TR(0x61c600);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c601:{NFSU2_TR(0x61c601);
__builtin_memmove((R+20),(R+16),4);
}
B61c603:{NFSU2_TR(0x61c603);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B61c606:{NFSU2_TR(0x61c606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B61c60c:{NFSU2_TR(0x61c60c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c60d:{NFSU2_TR(0x61c60d);
__builtin_memmove((R+24),(R+4),4);
}
B61c60f:{NFSU2_TR(0x61c60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c612:{NFSU2_TR(0x61c612);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c614:{NFSU2_TR(0x61c614);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c615:{NFSU2_TR(0x61c615);
if(r1(R+518)){{goto L61c642;}}
}
B61c617:L61c617:{c.instructions+=3;NFSU2_TR(0x61c617);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c61a:{NFSU2_TR(0x61c61a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c61c:{NFSU2_TR(0x61c61c);
if(r1(R+518)){{goto L61c642;}}
}
B61c61e:L61c61e:{c.instructions+=2;NFSU2_TR(0x61c61e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c61f:{NFSU2_TR(0x61c61f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c624ull));
TAIL_STATIC(0x580e90u,580);
}
B61c624:L61c624:{c.instructions+=6;NFSU2_TR(0x61c624);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c627:{NFSU2_TR(0x61c627);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61c62e:{NFSU2_TR(0x61c62e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61c631:{NFSU2_TR(0x61c631);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c633:{NFSU2_TR(0x61c633);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61c63a:{NFSU2_TR(0x61c63a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c63full));
TAIL_STATIC(0x438140u,438);
}
B61c63f:L61c63f:{c.instructions+=1;NFSU2_TR(0x61c63f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61c642:L61c642:{c.instructions+=4;NFSU2_TR(0x61c642);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B61c648:{NFSU2_TR(0x61c648);
w4(R+4,u32(0x40ull));
}
B61c64d:{NFSU2_TR(0x61c64d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61c64f:{NFSU2_TR(0x61c64f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B61c653:L61c653:{c.instructions+=1;NFSU2_TR(0x61c653);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L61c655;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c653u);}goto L61c653;}
}
B61c655:L61c655:{c.instructions+=3;NFSU2_TR(0x61c655);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61c658:{NFSU2_TR(0x61c658);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61c65e:{NFSU2_TR(0x61c65e);
__builtin_memmove((R+28),(R+28),4);
}
B61c660:L61c660:{c.instructions+=2;NFSU2_TR(0x61c660);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61c662:{NFSU2_TR(0x61c662);
if(r1(R+518)){{goto L61c6f1;}}
}
B61c668:L61c668:{c.instructions+=4;NFSU2_TR(0x61c668);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61c669:{NFSU2_TR(0x61c669);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x890ull))));
}
B61c66f:{NFSU2_TR(0x61c66f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61c672:{NFSU2_TR(0x61c672);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c660u);}goto L61c660;}}
}
B61c674:L61c674:{c.instructions+=1;NFSU2_TR(0x61c674);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61c676:L61c676:{c.instructions+=5;NFSU2_TR(0x61c676);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c677:{NFSU2_TR(0x61c677);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61c67b:{NFSU2_TR(0x61c67b);
u8 U[4];
w4(U+0,u32(0x7a8674ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c680:{NFSU2_TR(0x61c680);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c681:{NFSU2_TR(0x61c681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c686ull));
TAIL_STATIC(0x4400d0u,440);
}
B61c686:L61c686:{c.instructions+=6;NFSU2_TR(0x61c686);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61c689:{NFSU2_TR(0x61c689);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61c68d:{NFSU2_TR(0x61c68d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c68e:{NFSU2_TR(0x61c68e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B61c691:{NFSU2_TR(0x61c691);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c692:{NFSU2_TR(0x61c692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c697ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B61c697:L61c697:{c.instructions+=4;NFSU2_TR(0x61c697);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61c69a:{NFSU2_TR(0x61c69a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B61c69d:{NFSU2_TR(0x61c69d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c69e:{NFSU2_TR(0x61c69e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c6a3ull));
TAIL_STATIC(0x57cac0u,57c);
}
B61c6a3:L61c6a3:{c.instructions+=19;NFSU2_TR(0x61c6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61c6a6:{NFSU2_TR(0x61c6a6);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B61c6a8:{NFSU2_TR(0x61c6a8);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B61c6aa:{NFSU2_TR(0x61c6aa);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B61c6ac:{NFSU2_TR(0x61c6ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c6af:{NFSU2_TR(0x61c6af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61c6b2:{NFSU2_TR(0x61c6b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c6b5:{NFSU2_TR(0x61c6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c6b8:{NFSU2_TR(0x61c6b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61c6bf:{NFSU2_TR(0x61c6bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c6c3:{NFSU2_TR(0x61c6c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c6c6:{NFSU2_TR(0x61c6c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c6c7:{NFSU2_TR(0x61c6c7);
u8 U[4];
w4(U+0,u32(0x63bd10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c6cc:{NFSU2_TR(0x61c6cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c6ce:{NFSU2_TR(0x61c6ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c6d0:{NFSU2_TR(0x61c6d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B61c6d3:{NFSU2_TR(0x61c6d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c6d5:{NFSU2_TR(0x61c6d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c6d6:{NFSU2_TR(0x61c6d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c6dbull));
TAIL_STATIC(0x57cfb0u,57c);
}
B61c6db:L61c6db:{c.instructions+=9;NFSU2_TR(0x61c6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61c6de:{NFSU2_TR(0x61c6de);
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
B61c6e1:{NFSU2_TR(0x61c6e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c6e2:{NFSU2_TR(0x61c6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c6e5:{NFSU2_TR(0x61c6e5);
w4(R+0,u32(0x1ull));
}
B61c6ea:{NFSU2_TR(0x61c6ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c6eb:{NFSU2_TR(0x61c6eb);
__builtin_memmove((R+16),(R+20),4);
}
B61c6ed:{NFSU2_TR(0x61c6ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61c6ee:{NFSU2_TR(0x61c6ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c6f1:L61c6f1:{c.instructions+=3;NFSU2_TR(0x61c6f1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B61c6f7:{NFSU2_TR(0x61c6f7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B61c6f9:{NFSU2_TR(0x61c6f9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c676u);}goto L61c676;}
}
B61c700:L61c700:{c.instructions+=7;NFSU2_TR(0x61c700);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c701:{NFSU2_TR(0x61c701);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61c703:{NFSU2_TR(0x61c703);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c704:{NFSU2_TR(0x61c704);
u8 U[4];
w4(U+0,u32(0x7a86e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c709:{NFSU2_TR(0x61c709);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c70b:{NFSU2_TR(0x61c70b);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c70d:{NFSU2_TR(0x61c70d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c712ull));
TAIL_STATIC(0x440df0u,440);
}
B61c712:L61c712:{c.instructions+=6;NFSU2_TR(0x61c712);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c713:{NFSU2_TR(0x61c713);
u8 U[4];
w4(U+0,u32(0x7a86ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c718:{NFSU2_TR(0x61c718);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c71a:{NFSU2_TR(0x61c71a);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c71c:{NFSU2_TR(0x61c71c);
__builtin_memmove(gp(0x8a1cf4),(R+0),4);
}
B61c721:{NFSU2_TR(0x61c721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c726ull));
TAIL_STATIC(0x440df0u,440);
}
B61c726:L61c726:{c.instructions+=6;NFSU2_TR(0x61c726);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c727:{NFSU2_TR(0x61c727);
u8 U[4];
w4(U+0,u32(0x7a86b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c72c:{NFSU2_TR(0x61c72c);
u8 U[4];
w4(U+0,u32(0x210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c731:{NFSU2_TR(0x61c731);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c733:{NFSU2_TR(0x61c733);
__builtin_memmove(gp(0x8a1cf8),(R+0),4);
}
B61c738:{NFSU2_TR(0x61c738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c73dull));
TAIL_STATIC(0x440df0u,440);
}
B61c73d:L61c73d:{c.instructions+=6;NFSU2_TR(0x61c73d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c73e:{NFSU2_TR(0x61c73e);
u8 U[4];
w4(U+0,u32(0x7a8694ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c743:{NFSU2_TR(0x61c743);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c745:{NFSU2_TR(0x61c745);
u8 U[4];
w4(U+0,u32(0x1240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c74a:{NFSU2_TR(0x61c74a);
__builtin_memmove(gp(0x8a1cfc),(R+0),4);
}
B61c74f:{NFSU2_TR(0x61c74f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c754ull));
TAIL_STATIC(0x440df0u,440);
}
B61c754:L61c754:{c.instructions+=5;NFSU2_TR(0x61c754);
__builtin_memmove(gp(0x8a1d00),(R+0),4);
}
B61c759:{NFSU2_TR(0x61c759);
__builtin_memmove((R+0),gp(0x8a32e8),4);
}
B61c75e:{NFSU2_TR(0x61c75e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B61c761:{NFSU2_TR(0x61c761);
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
B61c763:{NFSU2_TR(0x61c763);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c79f;}}
}
B61c765:L61c765:{c.instructions+=2;NFSU2_TR(0x61c765);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c767:{NFSU2_TR(0x61c767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c76cull));
TAIL_STATIC(0x575620u,575);
}
B61c76c:L61c76c:{c.instructions+=4;NFSU2_TR(0x61c76c);
__builtin_memmove((R+8),(R+0),4);
}
B61c76e:{NFSU2_TR(0x61c76e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61c771:{NFSU2_TR(0x61c771);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61c773:{NFSU2_TR(0x61c773);
if(r1(R+518)){{goto L61c797;}}
}
B61c775:L61c775:{c.instructions+=4;NFSU2_TR(0x61c775);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c776:{NFSU2_TR(0x61c776);
w4(R+4,u32(0x12ull));
}
B61c77b:{NFSU2_TR(0x61c77b);
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
B61c77d:{NFSU2_TR(0x61c77d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c780:L61c780:{c.instructions+=1;NFSU2_TR(0x61c780);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L61c782;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c780u);}goto L61c780;}
}
B61c782:L61c782:{c.instructions+=8;NFSU2_TR(0x61c782);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c785:{NFSU2_TR(0x61c785);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c788:{NFSU2_TR(0x61c788);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c78b:{NFSU2_TR(0x61c78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61c78e:{NFSU2_TR(0x61c78e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c78f:{NFSU2_TR(0x61c78f);
__builtin_memmove(gp(0x8a32e8),(R+8),4);
}
B61c795:{NFSU2_TR(0x61c795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c796:{NFSU2_TR(0x61c796);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c797:L61c797:{c.instructions+=2;NFSU2_TR(0x61c797);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61c799:{NFSU2_TR(0x61c799);
__builtin_memmove(gp(0x8a32e8),(R+8),4);
}
B61c79f:L61c79f:{c.instructions+=2;NFSU2_TR(0x61c79f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c7a0:{NFSU2_TR(0x61c7a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c7b0:L61c7b0:{c.instructions+=8;NFSU2_TR(0x61c7b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c7b1:{NFSU2_TR(0x61c7b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c7b2:{NFSU2_TR(0x61c7b2);
__builtin_memmove((R+20),(R+4),4);
}
B61c7b4:{NFSU2_TR(0x61c7b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61c7b7:{NFSU2_TR(0x61c7b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c7b8:{NFSU2_TR(0x61c7b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c7bb:{NFSU2_TR(0x61c7bb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61c7bd:{NFSU2_TR(0x61c7bd);
if(r1(R+518)){{goto L61c869;}}
}
B61c7c3:L61c7c3:{c.instructions+=4;NFSU2_TR(0x61c7c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c7c4:{NFSU2_TR(0x61c7c4);
w1(R+4,u8(0x1ull));
}
B61c7c6:{NFSU2_TR(0x61c7c6);
w1(R+12,u8(0x2ull));
}
B61c7c8:{NFSU2_TR(0x61c7c8);
{goto L61c7d0;}
}
B61c7d0:L61c7d0:{c.instructions+=3;NFSU2_TR(0x61c7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c7d6:{NFSU2_TR(0x61c7d6);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c7d9:{NFSU2_TR(0x61c7d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c81a;}}
}
B61c7db:L61c7db:{c.instructions+=4;NFSU2_TR(0x61c7db);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c7de:{NFSU2_TR(0x61c7de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61c7e1:{NFSU2_TR(0x61c7e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c7e3:{NFSU2_TR(0x61c7e3);
if(r1(R+518)){{goto L61c7ed;}}
}
B61c7e5:L61c7e5:{c.instructions+=2;NFSU2_TR(0x61c7e5);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c7e8:{NFSU2_TR(0x61c7e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c7ed;}}
}
B61c7ea:L61c7ea:{c.instructions+=1;NFSU2_TR(0x61c7ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c7ed:L61c7ed:{c.instructions+=3;NFSU2_TR(0x61c7ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61c7f0:{NFSU2_TR(0x61c7f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c7f2:{NFSU2_TR(0x61c7f2);
if(r1(R+518)){{goto L61c7fc;}}
}
B61c7f4:L61c7f4:{c.instructions+=2;NFSU2_TR(0x61c7f4);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c7f7:{NFSU2_TR(0x61c7f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c7fc;}}
}
B61c7f9:L61c7f9:{c.instructions+=1;NFSU2_TR(0x61c7f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c7fc:L61c7fc:{c.instructions+=3;NFSU2_TR(0x61c7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61c7ff:{NFSU2_TR(0x61c7ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c801:{NFSU2_TR(0x61c801);
if(r1(R+518)){{goto L61c80b;}}
}
B61c803:L61c803:{c.instructions+=2;NFSU2_TR(0x61c803);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c806:{NFSU2_TR(0x61c806);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c80b;}}
}
B61c808:L61c808:{c.instructions+=1;NFSU2_TR(0x61c808);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c80b:L61c80b:{c.instructions+=3;NFSU2_TR(0x61c80b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61c80e:{NFSU2_TR(0x61c80e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c810:{NFSU2_TR(0x61c810);
if(r1(R+518)){{goto L61c81a;}}
}
B61c812:L61c812:{c.instructions+=2;NFSU2_TR(0x61c812);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c815:{NFSU2_TR(0x61c815);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c81a;}}
}
B61c817:L61c817:{c.instructions+=1;NFSU2_TR(0x61c817);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c81a:L61c81a:{c.instructions+=2;NFSU2_TR(0x61c81a);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c81d:{NFSU2_TR(0x61c81d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c85e;}}
}
B61c81f:L61c81f:{c.instructions+=4;NFSU2_TR(0x61c81f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c822:{NFSU2_TR(0x61c822);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61c825:{NFSU2_TR(0x61c825);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c827:{NFSU2_TR(0x61c827);
if(r1(R+518)){{goto L61c831;}}
}
B61c829:L61c829:{c.instructions+=2;NFSU2_TR(0x61c829);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c82c:{NFSU2_TR(0x61c82c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c831;}}
}
B61c82e:L61c82e:{c.instructions+=1;NFSU2_TR(0x61c82e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c831:L61c831:{c.instructions+=3;NFSU2_TR(0x61c831);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61c834:{NFSU2_TR(0x61c834);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c836:{NFSU2_TR(0x61c836);
if(r1(R+518)){{goto L61c840;}}
}
B61c838:L61c838:{c.instructions+=2;NFSU2_TR(0x61c838);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c83b:{NFSU2_TR(0x61c83b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c840;}}
}
B61c83d:L61c83d:{c.instructions+=1;NFSU2_TR(0x61c83d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c840:L61c840:{c.instructions+=3;NFSU2_TR(0x61c840);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61c843:{NFSU2_TR(0x61c843);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c845:{NFSU2_TR(0x61c845);
if(r1(R+518)){{goto L61c84f;}}
}
B61c847:L61c847:{c.instructions+=2;NFSU2_TR(0x61c847);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c84a:{NFSU2_TR(0x61c84a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c84f;}}
}
B61c84c:L61c84c:{c.instructions+=1;NFSU2_TR(0x61c84c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c84f:L61c84f:{c.instructions+=3;NFSU2_TR(0x61c84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c852:{NFSU2_TR(0x61c852);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c854:{NFSU2_TR(0x61c854);
if(r1(R+518)){{goto L61c85e;}}
}
B61c856:L61c856:{c.instructions+=2;NFSU2_TR(0x61c856);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c859:{NFSU2_TR(0x61c859);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c85e;}}
}
B61c85b:L61c85b:{c.instructions+=1;NFSU2_TR(0x61c85b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61c85e:L61c85e:{c.instructions+=3;NFSU2_TR(0x61c85e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61c860:{NFSU2_TR(0x61c860);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61c862:{NFSU2_TR(0x61c862);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c7d0u);}goto L61c7d0;}}
}
B61c868:L61c868:{c.instructions+=1;NFSU2_TR(0x61c868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c869:L61c869:{c.instructions+=6;NFSU2_TR(0x61c869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c86a:{NFSU2_TR(0x61c86a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c86b:{NFSU2_TR(0x61c86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61c872:{NFSU2_TR(0x61c872);
__builtin_memmove((R+4),(R+20),4);
}
B61c874:{NFSU2_TR(0x61c874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61c875:{NFSU2_TR(0x61c875);
TAIL_STATIC(0x63b160u,63b);
}
B61c880:L61c880:{c.instructions+=6;NFSU2_TR(0x61c880);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c881:{NFSU2_TR(0x61c881);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61c885:{NFSU2_TR(0x61c885);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c88c:{NFSU2_TR(0x61c88c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c88d:{NFSU2_TR(0x61c88d);
__builtin_memmove((R+28),(R+4),4);
}
B61c88f:{NFSU2_TR(0x61c88f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c8ad;}}
}
B61c891:L61c891:{c.instructions+=7;NFSU2_TR(0x61c891);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c897:{NFSU2_TR(0x61c897);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c898:{NFSU2_TR(0x61c898);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B61c89e:{NFSU2_TR(0x61c89e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c89f:{NFSU2_TR(0x61c89f);
__builtin_memmove((R+4),(R+28),4);
}
B61c8a1:{NFSU2_TR(0x61c8a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c8a8:{NFSU2_TR(0x61c8a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c8adull));
TAIL_STATIC(0x6108e0u,610);
}
B61c8ad:L61c8ad:{c.instructions+=2;NFSU2_TR(0x61c8ad);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x309ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c8b4:{NFSU2_TR(0x61c8b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c8d2;}}
}
B61c8b6:L61c8b6:{c.instructions+=7;NFSU2_TR(0x61c8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61c8bc:{NFSU2_TR(0x61c8bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x309ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61c8c3:{NFSU2_TR(0x61c8c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c8c4:{NFSU2_TR(0x61c8c4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x434ull))));
}
B61c8ca:{NFSU2_TR(0x61c8ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c8cb:{NFSU2_TR(0x61c8cb);
__builtin_memmove((R+4),(R+28),4);
}
B61c8cd:{NFSU2_TR(0x61c8cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c8d2ull));
TAIL_STATIC(0x6108e0u,610);
}
B61c8d2:L61c8d2:{c.instructions+=3;NFSU2_TR(0x61c8d2);
__builtin_memmove((R+4),(R+28),4);
}
B61c8d4:{NFSU2_TR(0x61c8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61c8db:{NFSU2_TR(0x61c8db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c8e0ull));
TAIL_STATIC(0x63b160u,63b);
}
B61c8e0:L61c8e0:{c.instructions+=3;NFSU2_TR(0x61c8e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c8e1:{NFSU2_TR(0x61c8e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c8e2:{NFSU2_TR(0x61c8e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c8f0:L61c8f0:{c.instructions+=6;NFSU2_TR(0x61c8f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c8f1:{NFSU2_TR(0x61c8f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c8f2:{NFSU2_TR(0x61c8f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61c8f6:{NFSU2_TR(0x61c8f6);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c8fd:{NFSU2_TR(0x61c8fd);
__builtin_memmove((R+12),(R+4),4);
}
B61c8ff:{NFSU2_TR(0x61c8ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c924;}}
}
B61c901:L61c901:{c.instructions+=2;NFSU2_TR(0x61c901);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x309ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c908:{NFSU2_TR(0x61c908);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c924;}}
}
B61c90a:L61c90a:{c.instructions+=3;NFSU2_TR(0x61c90a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61c910:{NFSU2_TR(0x61c910);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61c912:{NFSU2_TR(0x61c912);
if(r1(R+518)){{goto L61c924;}}
}
B61c914:L61c914:{c.instructions+=3;NFSU2_TR(0x61c914);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c91a:{NFSU2_TR(0x61c91a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c91b:{NFSU2_TR(0x61c91b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c920ull));
TAIL_STATIC(0x6107c0u,610);
}
B61c920:L61c920:{c.instructions+=2;NFSU2_TR(0x61c920);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c922:{NFSU2_TR(0x61c922);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c92b;}}
}
B61c924:L61c924:{c.instructions+=4;NFSU2_TR(0x61c924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c925:{NFSU2_TR(0x61c925);
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
B61c927:{NFSU2_TR(0x61c927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c928:{NFSU2_TR(0x61c928);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c92b:L61c92b:{c.instructions+=6;NFSU2_TR(0x61c92b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c931:{NFSU2_TR(0x61c931);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c932:{NFSU2_TR(0x61c932);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B61c934:{NFSU2_TR(0x61c934);
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
B61c936:{NFSU2_TR(0x61c936);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c937:{NFSU2_TR(0x61c937);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61c97b;}}
}
B61c939:L61c939:{c.instructions+=2;NFSU2_TR(0x61c939);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c93f:{NFSU2_TR(0x61c93f);
}
B61c940:L61c940:{c.instructions+=3;NFSU2_TR(0x61c940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61c942:{NFSU2_TR(0x61c942);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61c946:{NFSU2_TR(0x61c946);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61c987;}}
}
B61c948:L61c948:{c.instructions+=4;NFSU2_TR(0x61c948);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61c94b:{NFSU2_TR(0x61c94b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c94c:{NFSU2_TR(0x61c94c);
w4(R+4,u32(0x83579cull));
}
B61c951:{NFSU2_TR(0x61c951);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c956ull));
TAIL_STATIC(0x48cf40u,48c);
}
B61c956:L61c956:{c.instructions+=2;NFSU2_TR(0x61c956);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c958:{NFSU2_TR(0x61c958);
if(r1(R+518)){{goto L61c96d;}}
}
B61c95a:L61c95a:{c.instructions+=3;NFSU2_TR(0x61c95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c95d:{NFSU2_TR(0x61c95d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c95f:{NFSU2_TR(0x61c95f);
if(r1(R+518)){{goto L61c96d;}}
}
B61c961:L61c961:{c.instructions+=3;NFSU2_TR(0x61c961);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c962:{NFSU2_TR(0x61c962);
__builtin_memmove((R+4),(R+12),4);
}
B61c964:{NFSU2_TR(0x61c964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c969ull));
TAIL_STATIC(0x610780u,610);
}
B61c969:L61c969:{c.instructions+=2;NFSU2_TR(0x61c969);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61c96b:{NFSU2_TR(0x61c96b);
if(r1(R+518)){{goto L61c987;}}
}
B61c96d:L61c96d:{c.instructions+=5;NFSU2_TR(0x61c96d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61c973:{NFSU2_TR(0x61c973);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B61c974:{NFSU2_TR(0x61c974);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B61c977:{NFSU2_TR(0x61c977);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61c979:{NFSU2_TR(0x61c979);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c940u);}goto L61c940;}}
}
B61c97b:L61c97b:{c.instructions+=6;NFSU2_TR(0x61c97b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c97c:{NFSU2_TR(0x61c97c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61c97d:{NFSU2_TR(0x61c97d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c97e:{NFSU2_TR(0x61c97e);
w4(R+0,u32(0x1ull));
}
B61c983:{NFSU2_TR(0x61c983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c984:{NFSU2_TR(0x61c984);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c987:L61c987:{c.instructions+=6;NFSU2_TR(0x61c987);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c988:{NFSU2_TR(0x61c988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61c989:{NFSU2_TR(0x61c989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c98a:{NFSU2_TR(0x61c98a);
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
B61c98c:{NFSU2_TR(0x61c98c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c98d:{NFSU2_TR(0x61c98d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c990:L61c990:{c.instructions+=7;NFSU2_TR(0x61c990);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c991:{NFSU2_TR(0x61c991);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c992:{NFSU2_TR(0x61c992);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61c995:{NFSU2_TR(0x61c995);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c996:{NFSU2_TR(0x61c996);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c999:{NFSU2_TR(0x61c999);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61c99b:{NFSU2_TR(0x61c99b);
if(r1(R+518)){{goto L61c9b8;}}
}
B61c99d:L61c99d:{c.instructions+=1;NFSU2_TR(0x61c99d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61c9a1:L61c9a1:{c.instructions+=4;NFSU2_TR(0x61c9a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61c9a4:{NFSU2_TR(0x61c9a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c9a5:{NFSU2_TR(0x61c9a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c9a6:{NFSU2_TR(0x61c9a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c9abull));
TAIL_STATIC(0x43dc30u,43d);
}
B61c9ab:L61c9ab:{c.instructions+=3;NFSU2_TR(0x61c9ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61c9ae:{NFSU2_TR(0x61c9ae);
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
B61c9b0:{NFSU2_TR(0x61c9b0);
if(r1(R+518)){{goto L61c9c0;}}
}
B61c9b2:L61c9b2:{c.instructions+=3;NFSU2_TR(0x61c9b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61c9b4:{NFSU2_TR(0x61c9b4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61c9b6:{NFSU2_TR(0x61c9b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c9a1u);}goto L61c9a1;}}
}
B61c9b8:L61c9b8:{c.instructions+=5;NFSU2_TR(0x61c9b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c9b9:{NFSU2_TR(0x61c9b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c9ba:{NFSU2_TR(0x61c9ba);
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
B61c9bc:{NFSU2_TR(0x61c9bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c9bd:{NFSU2_TR(0x61c9bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c9c0:L61c9c0:{c.instructions+=5;NFSU2_TR(0x61c9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c9c1:{NFSU2_TR(0x61c9c1);
__builtin_memmove((R+0),(R+24),4);
}
B61c9c3:{NFSU2_TR(0x61c9c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c9c4:{NFSU2_TR(0x61c9c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c9c5:{NFSU2_TR(0x61c9c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61c9d0:L61c9d0:{c.instructions+=7;NFSU2_TR(0x61c9d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c9d1:{NFSU2_TR(0x61c9d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c9d2:{NFSU2_TR(0x61c9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61c9d5:{NFSU2_TR(0x61c9d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c9d6:{NFSU2_TR(0x61c9d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c9d9:{NFSU2_TR(0x61c9d9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61c9db:{NFSU2_TR(0x61c9db);
if(r1(R+518)){{goto L61c9f8;}}
}
B61c9dd:L61c9dd:{c.instructions+=1;NFSU2_TR(0x61c9dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61c9e1:L61c9e1:{c.instructions+=4;NFSU2_TR(0x61c9e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61c9e4:{NFSU2_TR(0x61c9e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c9e5:{NFSU2_TR(0x61c9e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61c9e6:{NFSU2_TR(0x61c9e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61c9ebull));
TAIL_STATIC(0x43dc30u,43d);
}
B61c9eb:L61c9eb:{c.instructions+=3;NFSU2_TR(0x61c9eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61c9ee:{NFSU2_TR(0x61c9ee);
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
B61c9f0:{NFSU2_TR(0x61c9f0);
if(r1(R+518)){{goto L61ca00;}}
}
B61c9f2:L61c9f2:{c.instructions+=3;NFSU2_TR(0x61c9f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61c9f4:{NFSU2_TR(0x61c9f4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61c9f6:{NFSU2_TR(0x61c9f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c9e1u);}goto L61c9e1;}}
}
B61c9f8:L61c9f8:{c.instructions+=5;NFSU2_TR(0x61c9f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61c9f9:{NFSU2_TR(0x61c9f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61c9fa:{NFSU2_TR(0x61c9fa);
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
B61c9fc:{NFSU2_TR(0x61c9fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61c9fd:{NFSU2_TR(0x61c9fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ca00:L61ca00:{c.instructions+=5;NFSU2_TR(0x61ca00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61ca01:{NFSU2_TR(0x61ca01);
__builtin_memmove((R+0),(R+24),4);
}
B61ca03:{NFSU2_TR(0x61ca03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ca04:{NFSU2_TR(0x61ca04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61ca05:{NFSU2_TR(0x61ca05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ca10:L61ca10:{c.instructions+=5;NFSU2_TR(0x61ca10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ca13:{NFSU2_TR(0x61ca13);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((R+8),(U+0),4);
}
B61ca16:{NFSU2_TR(0x61ca16);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61ca18:{NFSU2_TR(0x61ca18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ca19:{NFSU2_TR(0x61ca19);
if(r1(R+518)){{goto L61ca2e;}}
}
B61ca1b:L61ca1b:{c.instructions+=2;NFSU2_TR(0x61ca1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61ca1f:{NFSU2_TR(0x61ca1f);
}
B61ca20:L61ca20:{c.instructions+=2;NFSU2_TR(0x61ca20);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x123cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ca26:{NFSU2_TR(0x61ca26);
if(r1(R+518)){{goto L61ca34;}}
}
B61ca28:L61ca28:{c.instructions+=3;NFSU2_TR(0x61ca28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61ca2a:{NFSU2_TR(0x61ca2a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61ca2c:{NFSU2_TR(0x61ca2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61ca20u);}goto L61ca20;}}
}
B61ca2e:L61ca2e:{c.instructions+=3;NFSU2_TR(0x61ca2e);
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
B61ca30:{NFSU2_TR(0x61ca30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ca31:{NFSU2_TR(0x61ca31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ca34:L61ca34:{c.instructions+=3;NFSU2_TR(0x61ca34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ca37:{NFSU2_TR(0x61ca37);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61ca39:{NFSU2_TR(0x61ca39);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61ca2eu);}goto L61ca2e;}}
}
B61ca3b:L61ca3b:{c.instructions+=3;NFSU2_TR(0x61ca3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ca3c:{NFSU2_TR(0x61ca3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ca40:{NFSU2_TR(0x61ca40);
TAIL_STATIC(0x610910u,610);
}
B61ca50:L61ca50:{c.instructions+=11;NFSU2_TR(0x61ca50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ca51:{NFSU2_TR(0x61ca51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ca52:{NFSU2_TR(0x61ca52);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61ca56:{NFSU2_TR(0x61ca56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ca57:{NFSU2_TR(0x61ca57);
__builtin_memmove((R+12),(R+4),4);
}
B61ca59:{NFSU2_TR(0x61ca59);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ca5c:{NFSU2_TR(0x61ca5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ca5d:{NFSU2_TR(0x61ca5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B61ca5f:{NFSU2_TR(0x61ca5f);
__builtin_memmove((R+0),(R+28),4);
}
B61ca61:{NFSU2_TR(0x61ca61);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61ca63:{NFSU2_TR(0x61ca63);
if(r1(R+518)){{goto L61ca88;}}
}
B61ca65:L61ca65:{c.instructions+=2;NFSU2_TR(0x61ca65);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x123cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ca6b:{NFSU2_TR(0x61ca6b);
if(r1(R+518)){{goto L61ca75;}}
}
B61ca6d:L61ca6d:{c.instructions+=3;NFSU2_TR(0x61ca6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61ca6f:{NFSU2_TR(0x61ca6f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61ca71:{NFSU2_TR(0x61ca71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61ca65u);}goto L61ca65;}}
}
B61ca73:L61ca73:{c.instructions+=1;NFSU2_TR(0x61ca73);
{goto L61ca88;}
}
B61ca75:L61ca75:{c.instructions+=3;NFSU2_TR(0x61ca75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ca78:{NFSU2_TR(0x61ca78);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61ca7a:{NFSU2_TR(0x61ca7a);
if(r1(R+518)){{goto L61ca88;}}
}
B61ca7c:L61ca7c:{c.instructions+=3;NFSU2_TR(0x61ca7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ca7d:{NFSU2_TR(0x61ca7d);
__builtin_memmove((R+4),(R+12),4);
}
B61ca7f:{NFSU2_TR(0x61ca7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ca84ull));
TAIL_STATIC(0x610910u,610);
}
B61ca84:L61ca84:{c.instructions+=2;NFSU2_TR(0x61ca84);
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
B61ca86:{NFSU2_TR(0x61ca86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61cad7;}}
}
B61ca88:L61ca88:{c.instructions+=3;NFSU2_TR(0x61ca88);
__builtin_memmove((R+0),(R+28),4);
}
B61ca8a:{NFSU2_TR(0x61ca8a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61ca8c:{NFSU2_TR(0x61ca8c);
if(r1(R+518)){{goto L61caa0;}}
}
B61ca8e:L61ca8e:{c.instructions+=1;NFSU2_TR(0x61ca8e);
__builtin_memmove((R+28),(R+28),4);
}
B61ca90:L61ca90:{c.instructions+=2;NFSU2_TR(0x61ca90);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x123cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ca96:{NFSU2_TR(0x61ca96);
if(r1(R+518)){{goto L61caa0;}}
}
B61ca98:L61ca98:{c.instructions+=3;NFSU2_TR(0x61ca98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61ca9a:{NFSU2_TR(0x61ca9a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61ca9c:{NFSU2_TR(0x61ca9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61ca90u);}goto L61ca90;}}
}
B61ca9e:L61ca9e:{c.instructions+=1;NFSU2_TR(0x61ca9e);
__builtin_memmove((R+28),(R+28),4);
}
B61caa0:L61caa0:{c.instructions+=3;NFSU2_TR(0x61caa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61caa2:{NFSU2_TR(0x61caa2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61caa4:{NFSU2_TR(0x61caa4);
if(r1(R+518)){{goto L61cac9;}}
}
B61caa6:L61caa6:{c.instructions+=2;NFSU2_TR(0x61caa6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x123cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61caac:{NFSU2_TR(0x61caac);
if(r1(R+518)){{goto L61cab6;}}
}
B61caae:L61caae:{c.instructions+=3;NFSU2_TR(0x61caae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61cab0:{NFSU2_TR(0x61cab0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61cab2:{NFSU2_TR(0x61cab2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61caa6u);}goto L61caa6;}}
}
B61cab4:L61cab4:{c.instructions+=1;NFSU2_TR(0x61cab4);
{goto L61cac9;}
}
B61cab6:L61cab6:{c.instructions+=3;NFSU2_TR(0x61cab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61cab9:{NFSU2_TR(0x61cab9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61cabb:{NFSU2_TR(0x61cabb);
if(r1(R+518)){{goto L61cac9;}}
}
B61cabd:L61cabd:{c.instructions+=3;NFSU2_TR(0x61cabd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61cabe:{NFSU2_TR(0x61cabe);
__builtin_memmove((R+4),(R+12),4);
}
B61cac0:{NFSU2_TR(0x61cac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61cac5ull));
TAIL_STATIC(0x610910u,610);
}
B61cac5:L61cac5:{c.instructions+=2;NFSU2_TR(0x61cac5);
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
B61cac7:{NFSU2_TR(0x61cac7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61cad7;}}
}
B61cac9:L61cac9:{c.instructions+=3;NFSU2_TR(0x61cac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61cacc:{NFSU2_TR(0x61cacc);
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
B61cace:{NFSU2_TR(0x61cace);
if(r1(R+518)){{goto L61cad7;}}
}
B61cad0:L61cad0:{c.instructions+=1;NFSU2_TR(0x61cad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61cad5ull));
TAIL_STATIC(0x57ef60u,57e);
}
B61cad5:L61cad5:{c.instructions+=1;NFSU2_TR(0x61cad5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61caa0u);}goto L61caa0;}
}
B61cad7:L61cad7:{c.instructions+=5;NFSU2_TR(0x61cad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61cad8:{NFSU2_TR(0x61cad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61cad9:{NFSU2_TR(0x61cad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61cada:{NFSU2_TR(0x61cada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61cadb:{NFSU2_TR(0x61cadb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61cae0:L61cae0:{c.instructions+=2;NFSU2_TR(0x61cae0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x3a4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x3a4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3a4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61cae6:{NFSU2_TR(0x61cae6);
TAIL_STATIC(0x4022c0u,402);
}
B61caf0:L61caf0:{c.instructions+=3;NFSU2_TR(0x61caf0);
__builtin_memmove((R+0),gp(0x8a32e0),4);
}
B61caf5:{NFSU2_TR(0x61caf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8a32e0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61cafa:{NFSU2_TR(0x61cafa);
if(r1(R+518)){{goto L61cb18;}}
}
B61cafc:L61cafc:{c.instructions+=2;NFSU2_TR(0x61cafc);
w1(R+8,u8(0x1ull));
}
B61cafe:{NFSU2_TR(0x61cafe);
__builtin_memmove((R+28),(R+28),4);
}
B61cb00:L61cb00:{c.instructions+=3;NFSU2_TR(0x61cb00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61cb06:{NFSU2_TR(0x61cb06);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61cb09:{NFSU2_TR(0x61cb09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61cb0f;}}
}
B61cb0b:L61cb0b:{c.instructions+=1;NFSU2_TR(0x61cb0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61cb0f:L61cb0f:{c.instructions+=3;NFSU2_TR(0x61cb0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61cb11:{NFSU2_TR(0x61cb11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8a32e0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61cb16:{NFSU2_TR(0x61cb16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61cb00u);}goto L61cb00;}}
}
B61cb18:L61cb18:{c.instructions+=3;NFSU2_TR(0x61cb18);
s4(0x8a329c,u32(0x0ull));
}
B61cb22:{NFSU2_TR(0x61cb22);
w4(R+4,u32(0x8a3288ull));
}
B61cb27:{NFSU2_TR(0x61cb27);
TAIL_STATIC(0x63b160u,63b);
}
B61cb30:L61cb30:{c.instructions+=2;NFSU2_TR(0x61cb30);
w4(R+4,u32(0x8a3288ull));
}
B61cb35:{NFSU2_TR(0x61cb35);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c7b0u);}goto L61c7b0;}
}
B61cb40:L61cb40:{c.instructions+=4;NFSU2_TR(0x61cb40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61cb44:{NFSU2_TR(0x61cb44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61cb45:{NFSU2_TR(0x61cb45);
w4(R+4,u32(0x8a3288ull));
}
B61cb4a:{NFSU2_TR(0x61cb4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61cb4full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61c880u);}goto L61c880;}
}
B61cb4f:L61cb4f:{c.instructions+=1;NFSU2_TR(0x61cb4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61cb50:L61cb50:{c.instructions+=3;NFSU2_TR(0x61cb50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61cb54:{NFSU2_TR(0x61cb54);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x34030ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61cb5a:{NFSU2_TR(0x61cb5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61cb88;}}
}
B61cb5c:L61cb5c:{c.instructions+=11;NFSU2_TR(0x61cb5c);
__builtin_memmove((R+4),gp(0x8a314c),4);
}
B61cb62:{NFSU2_TR(0x61cb62);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61cb65:{NFSU2_TR(0x61cb65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B61cb67:{NFSU2_TR(0x61cb67);
__builtin_memmove(gp(0x8a314c),(R+0),4);
}
B61cb6c:{NFSU2_TR(0x61cb6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61cb6f:{NFSU2_TR(0x61cb6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61cb72:{NFSU2_TR(0x61cb72);
u8 U[4];
w4(U+0,u32(0x8a3148ull));
s4(u32(r4(R+0)),r4(U+0));
}
B61cb78:{NFSU2_TR(0x61cb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61cb7b:{NFSU2_TR(0x61cb7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61cb82:{NFSU2_TR(0x61cb82);
w4(R+0,u32(0x1ull));
}
B61cb87:{NFSU2_TR(0x61cb87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61cb88:L61cb88:{c.instructions+=2;NFSU2_TR(0x61cb88);
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
B61cb8a:{NFSU2_TR(0x61cb8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61cb90:L61cb90:{c.instructions+=3;NFSU2_TR(0x61cb90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61cb94:{NFSU2_TR(0x61cb94);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x34030ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x34030ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x34030ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B61cb9a:{NFSU2_TR(0x61cb9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61cbad;}}
}
B61cb9c:L61cb9c:{c.instructions+=6;NFSU2_TR(0x61cb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61cb9f:{NFSU2_TR(0x61cb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61cba2:{NFSU2_TR(0x61cba2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B61cba4:{NFSU2_TR(0x61cba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61cba7:{NFSU2_TR(0x61cba7);
w4(R+0,u32(0x1ull));
}
B61cbac:{NFSU2_TR(0x61cbac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61cbad:L61cbad:{c.instructions+=2;NFSU2_TR(0x61cbad);
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
B61cbaf:{NFSU2_TR(0x61cbaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61cbb0:L61cbb0:{c.instructions+=14;NFSU2_TR(0x61cbb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61cbb3:{NFSU2_TR(0x61cbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61cbb6:{NFSU2_TR(0x61cbb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61cbb9:{NFSU2_TR(0x61cbb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B61cbbc:{NFSU2_TR(0x61cbbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B61cbbf:{NFSU2_TR(0x61cbbf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61cbc0:{NFSU2_TR(0x61cbc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61cbc1:{NFSU2_TR(0x61cbc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61cbc4:{NFSU2_TR(0x61cbc4);
__builtin_memmove((R+12),(R+8),4);
}
B61cbc6:{NFSU2_TR(0x61cbc6);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7ull))));
}
B61cbc9:{NFSU2_TR(0x61cbc9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61cbcb:{NFSU2_TR(0x61cbcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61cbcc:{NFSU2_TR(0x61cbcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B61cbce:{NFSU2_TR(0x61cbce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61cbdd;}}
}
B61cbd0:L61cbd0:{c.instructions+=4;NFSU2_TR(0x61cbd0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61cbd1:{NFSU2_TR(0x61cbd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61cbd4:{NFSU2_TR(0x61cbd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61cbdb:{NFSU2_TR(0x61cbdb);
{goto L61cbe1;}
}
B61cbdd:L61cbdd:{c.instructions+=2;NFSU2_TR(0x61cbdd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B61cbde:{NFSU2_TR(0x61cbde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61cbe1:L61cbe1:{c.instructions+=11;NFSU2_TR(0x61cbe1);
__builtin_memmove((R+12),gp(0x89e7d2),1);
}
B61cbe7:{NFSU2_TR(0x61cbe7);
__builtin_memmove((R+0),(R+8),4);
}
B61cbe9:{NFSU2_TR(0x61cbe9);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B61cbec:{NFSU2_TR(0x61cbec);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B61cbef:{NFSU2_TR(0x61cbef);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61cbf1:{NFSU2_TR(0x61cbf1);
u8 U[13];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(r1(U+12)));
}
B61cbf6:{NFSU2_TR(0x61cbf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61cbfa:{NFSU2_TR(0x61cbfa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61cbfe:{NFSU2_TR(0x61cbfe);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cc04:{NFSU2_TR(0x61cc04);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cc08:{NFSU2_TR(0x61cc08);
if(r1(R+518)){{goto L61cc1f;}}
}
B61cc0a:L61cc0a:{c.instructions+=5;NFSU2_TR(0x61cc0a);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B61cc0f:{NFSU2_TR(0x61cc0f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61cc13:{NFSU2_TR(0x61cc13);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61cc17:{NFSU2_TR(0x61cc17);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cc1d:{NFSU2_TR(0x61cc1d);
{goto L61cc25;}
}
B61cc1f:L61cc1f:{c.instructions+=1;NFSU2_TR(0x61cc1f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cc25:L61cc25:{c.instructions+=8;NFSU2_TR(0x61cc25);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cc29:{NFSU2_TR(0x61cc29);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61cc2d:{NFSU2_TR(0x61cc2d);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B61cc2f:{NFSU2_TR(0x61cc2f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61cc33:{NFSU2_TR(0x61cc33);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61cc39:{NFSU2_TR(0x61cc39);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61cc3b:{NFSU2_TR(0x61cc3b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61cc3e:{NFSU2_TR(0x61cc3e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L61cd65;}}
}
B61cc44:L61cc44:{c.instructions+=3;NFSU2_TR(0x61cc44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61cc47:{NFSU2_TR(0x61cc47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61cc49:{NFSU2_TR(0x61cc49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61cd65;}}
}
B61cc4f:L61cc4f:{c.instructions+=2;NFSU2_TR(0x61cc4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffffc000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61cc55:{NFSU2_TR(0x61cc55);
if(r1(R+518)){{goto L61ccb6;}}
}
B61cc57:L61cc57:{c.instructions+=27;NFSU2_TR(0x61cc57);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61cc5b:{NFSU2_TR(0x61cc5b);
__builtin_memmove((R+4),(R+8),4);
}
B61cc5d:{NFSU2_TR(0x61cc5d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B61cc60:{NFSU2_TR(0x61cc60);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B61cc63:{NFSU2_TR(0x61cc63);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61cc67:{NFSU2_TR(0x61cc67);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61cc6b:{NFSU2_TR(0x61cc6b);
__builtin_memmove((R+4),(R+8),4);
}
B61cc6d:{NFSU2_TR(0x61cc6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B61cc70:{NFSU2_TR(0x61cc70);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B61cc73:{NFSU2_TR(0x61cc73);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cc77:{NFSU2_TR(0x61cc77);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61cc7b:{NFSU2_TR(0x61cc7b);
__builtin_memmove((R+4),(R+8),4);
}
B61cc7d:{NFSU2_TR(0x61cc7d);
{u32 ea_=u32(u32(7885248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cc83:{NFSU2_TR(0x61cc83);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B61cc86:{NFSU2_TR(0x61cc86);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61cc88:{NFSU2_TR(0x61cc88);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cc8a:{NFSU2_TR(0x61cc8a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61cc8e:{NFSU2_TR(0x61cc8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61cc92:{NFSU2_TR(0x61cc92);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cc96:{NFSU2_TR(0x61cc96);
{u32 ea_=u32(u32(7885248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cc9c:{NFSU2_TR(0x61cc9c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61cc9f:{NFSU2_TR(0x61cc9f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cca2:{NFSU2_TR(0x61cca2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61cca6:{NFSU2_TR(0x61cca6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ccaa:{NFSU2_TR(0x61ccaa);
{u32 ea_=u32(u32(7885248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ccb0:{NFSU2_TR(0x61ccb0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ccb3:{NFSU2_TR(0x61ccb3);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ccb6:L61ccb6:{c.instructions+=6;NFSU2_TR(0x61ccb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B61ccb9:{NFSU2_TR(0x61ccb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B61ccbc:{NFSU2_TR(0x61ccbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B61ccbf:{NFSU2_TR(0x61ccbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61ccc1:{NFSU2_TR(0x61ccc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ccc5:{NFSU2_TR(0x61ccc5);
if(r1(R+518)){{goto L61cd65;}}
}
B61cccb:L61cccb:{c.instructions+=6;NFSU2_TR(0x61cccb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61cccf:{NFSU2_TR(0x61cccf);
{u32 ea_=u32(u32(8021876u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ccd5:{NFSU2_TR(0x61ccd5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B61ccd7:{NFSU2_TR(0x61ccd7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B61ccd9:{NFSU2_TR(0x61ccd9);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B61ccdb:{NFSU2_TR(0x61ccdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61cce0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B61cce0:L61cce0:{c.instructions+=4;NFSU2_TR(0x61cce0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cce4:{NFSU2_TR(0x61cce4);
__builtin_memmove((R+24),(R+0),4);
}
B61cce6:{NFSU2_TR(0x61cce6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B61cce9:{NFSU2_TR(0x61cce9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61cceeull));
TAIL_STATIC(0x75bed4u,75b);
}
B61ccee:L61ccee:{c.instructions+=3;NFSU2_TR(0x61ccee);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B61ccf1:{NFSU2_TR(0x61ccf1);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B61ccf3:{NFSU2_TR(0x61ccf3);
if(r1(R+518)){{goto L61cd07;}}
}
B61ccf5:L61ccf5:{c.instructions+=6;NFSU2_TR(0x61ccf5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xfbdfull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B61ccfb:{NFSU2_TR(0x61ccfb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61ccfd:{NFSU2_TR(0x61ccfd);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+0),(U+0),2);
}
B61cd00:{NFSU2_TR(0x61cd00);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B61cd02:{NFSU2_TR(0x61cd02);
w4(R+8,u32(r2(R+0)));
}
B61cd05:{NFSU2_TR(0x61cd05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B61cd07:L61cd07:{c.instructions+=3;NFSU2_TR(0x61cd07);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61cd0b:{NFSU2_TR(0x61cd0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61cd0d:{NFSU2_TR(0x61cd0d);
if(r1(R+518)){{goto L61cd63;}}
}
B61cd0f:L61cd0f:{c.instructions+=23;NFSU2_TR(0x61cd0f);
{u32 ea_=u32(u32(8021872u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cd15:{NFSU2_TR(0x61cd15);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cd19:{NFSU2_TR(0x61cd19);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B61cd1b:{NFSU2_TR(0x61cd1b);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cd21:{NFSU2_TR(0x61cd21);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B61cd27:{NFSU2_TR(0x61cd27);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61cd29:{NFSU2_TR(0x61cd29);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B61cd2b:{NFSU2_TR(0x61cd2b);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cd31:{NFSU2_TR(0x61cd31);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B61cd37:{NFSU2_TR(0x61cd37);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cd3b:{NFSU2_TR(0x61cd3b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B61cd41:{NFSU2_TR(0x61cd41);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B61cd43:{NFSU2_TR(0x61cd43);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cd45:{NFSU2_TR(0x61cd45);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cd49:{NFSU2_TR(0x61cd49);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cd4b:{NFSU2_TR(0x61cd4b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B61cd4d:{NFSU2_TR(0x61cd4d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cd50:{NFSU2_TR(0x61cd50);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cd54:{NFSU2_TR(0x61cd54);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cd57:{NFSU2_TR(0x61cd57);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cd5a:{NFSU2_TR(0x61cd5a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cd5e:{NFSU2_TR(0x61cd5e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cd61:{NFSU2_TR(0x61cd61);
{goto L61cd65;}
}
B61cd63:L61cd63:{c.instructions+=1;NFSU2_TR(0x61cd63);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61cd65:L61cd65:{c.instructions+=3;NFSU2_TR(0x61cd65);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61cd69:{NFSU2_TR(0x61cd69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61cd6b:{NFSU2_TR(0x61cd6b);
if(r1(R+518)){{goto L61cdad;}}
}
B61cd6d:L61cd6d:{c.instructions+=3;NFSU2_TR(0x61cd6d);
{u32 ea_=u32(u32(7919712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cd73:{NFSU2_TR(0x61cd73);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B61cd75:{NFSU2_TR(0x61cd75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61cd7aull));
TAIL_STATIC(0x75bed4u,75b);
}
B61cd7a:L61cd7a:{c.instructions+=2;NFSU2_TR(0x61cd7a);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61cd7f:{NFSU2_TR(0x61cd7f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61cd88;}}
}
B61cd81:L61cd81:{c.instructions+=2;NFSU2_TR(0x61cd81);
w4(R+0,u32(0xffull));
}
B61cd86:{NFSU2_TR(0x61cd86);
{goto L61cd8e;}
}
B61cd88:L61cd88:{c.instructions+=2;NFSU2_TR(0x61cd88);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61cd8a:{NFSU2_TR(0x61cd8a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61cd8e;}}
}
B61cd8c:L61cd8c:{c.instructions+=1;NFSU2_TR(0x61cd8c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61cd8e:L61cd8e:{c.instructions+=4;NFSU2_TR(0x61cd8e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61cd90:{NFSU2_TR(0x61cd90);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61cd95:{NFSU2_TR(0x61cd95);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+4),(U+0),2);
}
B61cd98:{NFSU2_TR(0x61cd98);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61cda2;}}
}
B61cd9a:L61cd9a:{c.instructions+=2;NFSU2_TR(0x61cd9a);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x8000ull))));
}
B61cda0:{NFSU2_TR(0x61cda0);
{goto L61cda8;}
}
B61cda2:L61cda2:{c.instructions+=1;NFSU2_TR(0x61cda2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B61cda8:L61cda8:{c.instructions+=2;NFSU2_TR(0x61cda8);
w4(R+0,u32(r2(R+4)));
}
B61cdab:{NFSU2_TR(0x61cdab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B61cdad:L61cdad:{c.instructions+=7;NFSU2_TR(0x61cdad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61cdb3:{NFSU2_TR(0x61cdb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61cdb4:{NFSU2_TR(0x61cdb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61cdb5:{NFSU2_TR(0x61cdb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61cdb6:{NFSU2_TR(0x61cdb6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61cdb8:{NFSU2_TR(0x61cdb8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61cdbb:{NFSU2_TR(0x61cdbb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L61cdc8;}}
}
B61cdbd:L61cdbd:{c.instructions+=3;NFSU2_TR(0x61cdbd);
w4(R+0,u32(0x1ull));
}
B61cdc2:{NFSU2_TR(0x61cdc2);
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
B61cdc5:{NFSU2_TR(0x61cdc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61cdc8:L61cdc8:{c.instructions+=3;NFSU2_TR(0x61cdc8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61cdca:{NFSU2_TR(0x61cdca);
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
B61cdcd:{NFSU2_TR(0x61cdcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61cdd0:L61cdd0:{c.instructions+=6;NFSU2_TR(0x61cdd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61cdd1:{NFSU2_TR(0x61cdd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61cdd5:{NFSU2_TR(0x61cdd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61cdd6:{NFSU2_TR(0x61cdd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61cdd7:{NFSU2_TR(0x61cdd7);
__builtin_memmove((R+24),(R+4),4);
}
B61cdd9:{NFSU2_TR(0x61cdd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61cddeull));
TAIL_STATIC(0x610d30u,610);
}
B61cdde:L61cdde:{c.instructions+=6;NFSU2_TR(0x61cdde);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cde1:{NFSU2_TR(0x61cde1);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61cde7:{NFSU2_TR(0x61cde7);
__builtin_memmove((R+4),(R+0),4);
}
B61cde9:{NFSU2_TR(0x61cde9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61cdeb:{NFSU2_TR(0x61cdeb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61cdee:{NFSU2_TR(0x61cdee);
if(r1(R+518)){{goto L61ce30;}}
}
B61cdf0:L61cdf0:{c.instructions+=15;NFSU2_TR(0x61cdf0);
{u32 ea_=u32(u32(8021904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cdf6:{NFSU2_TR(0x61cdf6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cdf8:{NFSU2_TR(0x61cdf8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cdfc:{NFSU2_TR(0x61cdfc);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61cdff:{NFSU2_TR(0x61cdff);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61ce02:{NFSU2_TR(0x61ce02);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ce08:{NFSU2_TR(0x61ce08);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61ce0e:{NFSU2_TR(0x61ce0e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61ce12:{NFSU2_TR(0x61ce12);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B61ce14:{NFSU2_TR(0x61ce14);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ce18:{NFSU2_TR(0x61ce18);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B61ce1a:{NFSU2_TR(0x61ce1a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61ce1c:{NFSU2_TR(0x61ce1c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61ce1e:{NFSU2_TR(0x61ce1e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61ce21:{NFSU2_TR(0x61ce21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ce29;}}
}
B61ce23:L61ce23:{c.instructions+=2;NFSU2_TR(0x61ce23);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ce27:{NFSU2_TR(0x61ce27);
{goto L61ce2d;}
}
B61ce29:L61ce29:{c.instructions+=1;NFSU2_TR(0x61ce29);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ce2d:L61ce2d:{c.instructions+=1;NFSU2_TR(0x61ce2d);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ce30:L61ce30:{c.instructions+=5;NFSU2_TR(0x61ce30);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ce33:{NFSU2_TR(0x61ce33);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61ce39:{NFSU2_TR(0x61ce39);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61ce3b:{NFSU2_TR(0x61ce3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61ce3e:{NFSU2_TR(0x61ce3e);
if(r1(R+518)){{goto L61ce81;}}
}
B61ce40:L61ce40:{c.instructions+=15;NFSU2_TR(0x61ce40);
{u32 ea_=u32(u32(8021904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ce46:{NFSU2_TR(0x61ce46);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ce49:{NFSU2_TR(0x61ce49);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ce4d:{NFSU2_TR(0x61ce4d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ce50:{NFSU2_TR(0x61ce50);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61ce53:{NFSU2_TR(0x61ce53);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ce59:{NFSU2_TR(0x61ce59);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61ce5f:{NFSU2_TR(0x61ce5f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61ce63:{NFSU2_TR(0x61ce63);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B61ce65:{NFSU2_TR(0x61ce65);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ce69:{NFSU2_TR(0x61ce69);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B61ce6b:{NFSU2_TR(0x61ce6b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61ce6d:{NFSU2_TR(0x61ce6d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61ce6f:{NFSU2_TR(0x61ce6f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61ce72:{NFSU2_TR(0x61ce72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ce7a;}}
}
B61ce74:L61ce74:{c.instructions+=2;NFSU2_TR(0x61ce74);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ce78:{NFSU2_TR(0x61ce78);
{goto L61ce7e;}
}
B61ce7a:L61ce7a:{c.instructions+=1;NFSU2_TR(0x61ce7a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ce7e:L61ce7e:{c.instructions+=1;NFSU2_TR(0x61ce7e);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ce81:L61ce81:{c.instructions+=5;NFSU2_TR(0x61ce81);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ce84:{NFSU2_TR(0x61ce84);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61ce8a:{NFSU2_TR(0x61ce8a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61ce8c:{NFSU2_TR(0x61ce8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61ce8f:{NFSU2_TR(0x61ce8f);
if(r1(R+518)){{goto L61ced2;}}
}
B61ce91:L61ce91:{c.instructions+=15;NFSU2_TR(0x61ce91);
{u32 ea_=u32(u32(8021904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ce97:{NFSU2_TR(0x61ce97);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ce9a:{NFSU2_TR(0x61ce9a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ce9e:{NFSU2_TR(0x61ce9e);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61cea1:{NFSU2_TR(0x61cea1);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61cea4:{NFSU2_TR(0x61cea4);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ceaa:{NFSU2_TR(0x61ceaa);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61ceb0:{NFSU2_TR(0x61ceb0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61ceb4:{NFSU2_TR(0x61ceb4);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B61ceb6:{NFSU2_TR(0x61ceb6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ceba:{NFSU2_TR(0x61ceba);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B61cebc:{NFSU2_TR(0x61cebc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61cebe:{NFSU2_TR(0x61cebe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61cec0:{NFSU2_TR(0x61cec0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61cec3:{NFSU2_TR(0x61cec3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61cecb;}}
}
B61cec5:L61cec5:{c.instructions+=2;NFSU2_TR(0x61cec5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cec9:{NFSU2_TR(0x61cec9);
{goto L61cecf;}
}
B61cecb:L61cecb:{c.instructions+=1;NFSU2_TR(0x61cecb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cecf:L61cecf:{c.instructions+=1;NFSU2_TR(0x61cecf);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ced2:L61ced2:{c.instructions+=5;NFSU2_TR(0x61ced2);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ced5:{NFSU2_TR(0x61ced5);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61cedb:{NFSU2_TR(0x61cedb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61cedd:{NFSU2_TR(0x61cedd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61cee0:{NFSU2_TR(0x61cee0);
if(r1(R+518)){{goto L61cf23;}}
}
B61cee2:L61cee2:{c.instructions+=15;NFSU2_TR(0x61cee2);
{u32 ea_=u32(u32(8021904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cee8:{NFSU2_TR(0x61cee8);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ceeb:{NFSU2_TR(0x61ceeb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ceef:{NFSU2_TR(0x61ceef);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61cef2:{NFSU2_TR(0x61cef2);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61cef5:{NFSU2_TR(0x61cef5);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cefb:{NFSU2_TR(0x61cefb);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61cf01:{NFSU2_TR(0x61cf01);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61cf05:{NFSU2_TR(0x61cf05);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B61cf07:{NFSU2_TR(0x61cf07);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cf0b:{NFSU2_TR(0x61cf0b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B61cf0d:{NFSU2_TR(0x61cf0d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61cf0f:{NFSU2_TR(0x61cf0f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61cf11:{NFSU2_TR(0x61cf11);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61cf14:{NFSU2_TR(0x61cf14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61cf1c;}}
}
B61cf16:L61cf16:{c.instructions+=2;NFSU2_TR(0x61cf16);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cf1a:{NFSU2_TR(0x61cf1a);
{goto L61cf20;}
}
B61cf1c:L61cf1c:{c.instructions+=1;NFSU2_TR(0x61cf1c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cf20:L61cf20:{c.instructions+=1;NFSU2_TR(0x61cf20);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cf23:L61cf23:{c.instructions+=5;NFSU2_TR(0x61cf23);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cf26:{NFSU2_TR(0x61cf26);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61cf2c:{NFSU2_TR(0x61cf2c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61cf2e:{NFSU2_TR(0x61cf2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61cf31:{NFSU2_TR(0x61cf31);
if(r1(R+518)){{goto L61cf74;}}
}
B61cf33:L61cf33:{c.instructions+=15;NFSU2_TR(0x61cf33);
{u32 ea_=u32(u32(8021904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cf39:{NFSU2_TR(0x61cf39);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cf3c:{NFSU2_TR(0x61cf3c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cf40:{NFSU2_TR(0x61cf40);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61cf43:{NFSU2_TR(0x61cf43);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61cf46:{NFSU2_TR(0x61cf46);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cf4c:{NFSU2_TR(0x61cf4c);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61cf52:{NFSU2_TR(0x61cf52);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61cf56:{NFSU2_TR(0x61cf56);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B61cf58:{NFSU2_TR(0x61cf58);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cf5c:{NFSU2_TR(0x61cf5c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B61cf5e:{NFSU2_TR(0x61cf5e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61cf60:{NFSU2_TR(0x61cf60);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61cf62:{NFSU2_TR(0x61cf62);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61cf65:{NFSU2_TR(0x61cf65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61cf6d;}}
}
B61cf67:L61cf67:{c.instructions+=2;NFSU2_TR(0x61cf67);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cf6b:{NFSU2_TR(0x61cf6b);
{goto L61cf71;}
}
B61cf6d:L61cf6d:{c.instructions+=1;NFSU2_TR(0x61cf6d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cf71:L61cf71:{c.instructions+=1;NFSU2_TR(0x61cf71);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cf74:L61cf74:{c.instructions+=5;NFSU2_TR(0x61cf74);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cf77:{NFSU2_TR(0x61cf77);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61cf7d:{NFSU2_TR(0x61cf7d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61cf7f:{NFSU2_TR(0x61cf7f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61cf82:{NFSU2_TR(0x61cf82);
if(r1(R+518)){{goto L61cfd2;}}
}
B61cf84:L61cf84:{c.instructions+=15;NFSU2_TR(0x61cf84);
{u32 ea_=u32(u32(8021904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cf8a:{NFSU2_TR(0x61cf8a);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cf8d:{NFSU2_TR(0x61cf8d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61cf91:{NFSU2_TR(0x61cf91);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61cf94:{NFSU2_TR(0x61cf94);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61cf97:{NFSU2_TR(0x61cf97);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cf9d:{NFSU2_TR(0x61cf9d);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61cfa3:{NFSU2_TR(0x61cfa3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61cfa7:{NFSU2_TR(0x61cfa7);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B61cfa9:{NFSU2_TR(0x61cfa9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cfad:{NFSU2_TR(0x61cfad);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B61cfaf:{NFSU2_TR(0x61cfaf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61cfb1:{NFSU2_TR(0x61cfb1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61cfb3:{NFSU2_TR(0x61cfb3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61cfb6:{NFSU2_TR(0x61cfb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61cfcb;}}
}
B61cfb8:L61cfb8:{c.instructions+=4;NFSU2_TR(0x61cfb8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cfbc:{NFSU2_TR(0x61cfbc);
__builtin_memmove((R+4),(R+24),4);
}
B61cfbe:{NFSU2_TR(0x61cfbe);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cfc1:{NFSU2_TR(0x61cfc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61cfc6ull));
TAIL_STATIC(0x610cd0u,610);
}
B61cfc6:L61cfc6:{c.instructions+=3;NFSU2_TR(0x61cfc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61cfc7:{NFSU2_TR(0x61cfc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61cfc8:{NFSU2_TR(0x61cfc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61cfcb:L61cfcb:{c.instructions+=2;NFSU2_TR(0x61cfcb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cfcf:{NFSU2_TR(0x61cfcf);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cfd2:L61cfd2:{c.instructions+=2;NFSU2_TR(0x61cfd2);
__builtin_memmove((R+4),(R+24),4);
}
B61cfd4:{NFSU2_TR(0x61cfd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61cfd9ull));
TAIL_STATIC(0x610cd0u,610);
}
B61cfd9:L61cfd9:{c.instructions+=3;NFSU2_TR(0x61cfd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61cfda:{NFSU2_TR(0x61cfda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61cfdb:{NFSU2_TR(0x61cfdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61cfe0:L61cfe0:{c.instructions+=6;NFSU2_TR(0x61cfe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61cfe4:{NFSU2_TR(0x61cfe4);
{u32 ea_=u32((r4(R+0)*4u)+u32(8403252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cfeb:{NFSU2_TR(0x61cfeb);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61cff1:{NFSU2_TR(0x61cff1);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61cff4:{NFSU2_TR(0x61cff4);
{u32 ea_=u32((r4(R+0)*4u)+u32(8403252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61cffb:{NFSU2_TR(0x61cffb);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
TAIL_STATIC(0x61d001u,61d);
}
XIT:NFSU2_TR_EXIT(0x61c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
