#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_46d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_736(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x46c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x46c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_46c(u8* __restrict R,Cpu& c);
u32 page_46c(Cpu& c){return body_46c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_46c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x46c001:goto L46c001;
case 0x46c004:c.instructions+=3;goto B46c004;
case 0x46c008:c.instructions+=2;goto B46c008;
case 0x46c00c:c.instructions+=1;goto B46c00c;
case 0x46c00e:goto L46c00e;
case 0x46c011:goto L46c011;
case 0x46c013:c.instructions+=2;goto B46c013;
case 0x46c017:c.instructions+=1;goto B46c017;
case 0x46c01d:goto L46c01d;
case 0x46c01f:c.instructions+=1;goto B46c01f;
case 0x46c021:goto L46c021;
case 0x46c023:goto L46c023;
case 0x46c026:c.instructions+=5;goto B46c026;
case 0x46c02a:c.instructions+=4;goto B46c02a;
case 0x46c02d:c.instructions+=3;goto B46c02d;
case 0x46c031:c.instructions+=2;goto B46c031;
case 0x46c033:c.instructions+=1;goto B46c033;
case 0x46c039:goto L46c039;
case 0x46c03e:goto L46c03e;
case 0x46c042:c.instructions+=3;goto B46c042;
case 0x46c043:c.instructions+=2;goto B46c043;
case 0x46c044:c.instructions+=1;goto B46c044;
case 0x46c049:goto L46c049;
case 0x46c04c:c.instructions+=1;goto B46c04c;
case 0x46c051:goto L46c051;
case 0x46c055:c.instructions+=3;goto B46c055;
case 0x46c057:c.instructions+=2;goto B46c057;
case 0x46c059:c.instructions+=1;goto B46c059;
case 0x46c05b:goto L46c05b;
case 0x46c05c:c.instructions+=1;goto B46c05c;
case 0x46c05e:goto L46c05e;
case 0x46c05f:c.instructions+=1;goto B46c05f;
case 0x46c061:goto L46c061;
case 0x46c064:c.instructions+=2;goto B46c064;
case 0x46c06c:c.instructions+=1;goto B46c06c;
case 0x46c06e:goto L46c06e;
case 0x46c071:c.instructions+=15;goto B46c071;
case 0x46c074:c.instructions+=14;goto B46c074;
case 0x46c078:c.instructions+=13;goto B46c078;
case 0x46c07b:c.instructions+=12;goto B46c07b;
case 0x46c07d:c.instructions+=11;goto B46c07d;
case 0x46c080:c.instructions+=10;goto B46c080;
case 0x46c083:c.instructions+=9;goto B46c083;
case 0x46c085:c.instructions+=8;goto B46c085;
case 0x46c087:c.instructions+=7;goto B46c087;
case 0x46c08a:c.instructions+=6;goto B46c08a;
case 0x46c08e:c.instructions+=5;goto B46c08e;
case 0x46c091:c.instructions+=4;goto B46c091;
case 0x46c094:c.instructions+=3;goto B46c094;
case 0x46c097:c.instructions+=2;goto B46c097;
case 0x46c09a:c.instructions+=1;goto B46c09a;
case 0x46c09c:goto L46c09c;
case 0x46c0a0:c.instructions+=17;goto B46c0a0;
case 0x46c0a7:c.instructions+=16;goto B46c0a7;
case 0x46c0a9:c.instructions+=15;goto B46c0a9;
case 0x46c0ad:c.instructions+=14;goto B46c0ad;
case 0x46c0af:c.instructions+=13;goto B46c0af;
case 0x46c0b2:c.instructions+=12;goto B46c0b2;
case 0x46c0b6:c.instructions+=11;goto B46c0b6;
case 0x46c0b8:c.instructions+=10;goto B46c0b8;
case 0x46c0bb:c.instructions+=9;goto B46c0bb;
case 0x46c0be:c.instructions+=8;goto B46c0be;
case 0x46c0c0:c.instructions+=7;goto B46c0c0;
case 0x46c0c3:c.instructions+=6;goto B46c0c3;
case 0x46c0c7:c.instructions+=5;goto B46c0c7;
case 0x46c0c9:c.instructions+=4;goto B46c0c9;
case 0x46c0cc:c.instructions+=3;goto B46c0cc;
case 0x46c0d0:c.instructions+=2;goto B46c0d0;
case 0x46c0d4:c.instructions+=1;goto B46c0d4;
case 0x46c0d6:goto L46c0d6;
case 0x46c0d9:goto L46c0d9;
case 0x46c0dc:c.instructions+=2;goto B46c0dc;
case 0x46c0e0:c.instructions+=1;goto B46c0e0;
case 0x46c0e3:goto L46c0e3;
case 0x46c0e7:c.instructions+=6;goto B46c0e7;
case 0x46c0eb:c.instructions+=5;goto B46c0eb;
case 0x46c0ec:c.instructions+=4;goto B46c0ec;
case 0x46c0ef:c.instructions+=3;goto B46c0ef;
case 0x46c0f1:c.instructions+=2;goto B46c0f1;
case 0x46c0f5:c.instructions+=1;goto B46c0f5;
case 0x46c0fb:goto L46c0fb;
case 0x46c0ff:goto L46c0ff;
case 0x46c102:c.instructions+=8;goto B46c102;
case 0x46c105:c.instructions+=7;goto B46c105;
case 0x46c10c:c.instructions+=6;goto B46c10c;
case 0x46c110:c.instructions+=5;goto B46c110;
case 0x46c113:c.instructions+=4;goto B46c113;
case 0x46c116:c.instructions+=3;goto B46c116;
case 0x46c119:c.instructions+=2;goto B46c119;
case 0x46c11d:c.instructions+=1;goto B46c11d;
case 0x46c122:goto L46c122;
case 0x46c123:c.instructions+=6;goto B46c123;
case 0x46c124:c.instructions+=5;goto B46c124;
case 0x46c125:c.instructions+=4;goto B46c125;
case 0x46c127:c.instructions+=3;goto B46c127;
case 0x46c128:c.instructions+=2;goto B46c128;
case 0x46c12e:c.instructions+=1;goto B46c12e;
case 0x46c130:goto L46c130;
case 0x46c136:c.instructions+=5;goto B46c136;
case 0x46c137:c.instructions+=4;goto B46c137;
case 0x46c138:c.instructions+=3;goto B46c138;
case 0x46c139:c.instructions+=2;goto B46c139;
case 0x46c13a:c.instructions+=1;goto B46c13a;
case 0x46c13f:goto L46c13f;
case 0x46c144:c.instructions+=1;goto B46c144;
case 0x46c148:goto L46c148;
case 0x46c14a:c.instructions+=3;goto B46c14a;
case 0x46c14c:c.instructions+=2;goto B46c14c;
case 0x46c14e:c.instructions+=1;goto B46c14e;
case 0x46c154:goto L46c154;
case 0x46c15b:c.instructions+=1;goto B46c15b;
case 0x46c15d:goto L46c15d;
case 0x46c160:c.instructions+=2;goto B46c160;
case 0x46c164:c.instructions+=1;goto B46c164;
case 0x46c169:goto L46c169;
case 0x46c16b:c.instructions+=5;goto B46c16b;
case 0x46c16d:c.instructions+=4;goto B46c16d;
case 0x46c175:c.instructions+=3;goto B46c175;
case 0x46c179:c.instructions+=2;goto B46c179;
case 0x46c180:c.instructions+=1;goto B46c180;
case 0x46c186:goto L46c186;
case 0x46c18c:c.instructions+=2;goto B46c18c;
case 0x46c18d:c.instructions+=1;goto B46c18d;
case 0x46c192:goto L46c192;
case 0x46c194:c.instructions+=4;goto B46c194;
case 0x46c197:c.instructions+=3;goto B46c197;
case 0x46c199:c.instructions+=2;goto B46c199;
case 0x46c19d:c.instructions+=1;goto B46c19d;
case 0x46c1a3:goto L46c1a3;
case 0x46c1a6:c.instructions+=2;goto B46c1a6;
case 0x46c1a8:c.instructions+=1;goto B46c1a8;
case 0x46c1ae:goto L46c1ae;
case 0x46c1b1:c.instructions+=2;goto B46c1b1;
case 0x46c1b4:c.instructions+=1;goto B46c1b4;
case 0x46c1ba:goto L46c1ba;
case 0x46c1be:c.instructions+=9;goto B46c1be;
case 0x46c1bf:c.instructions+=8;goto B46c1bf;
case 0x46c1c3:c.instructions+=7;goto B46c1c3;
case 0x46c1c4:c.instructions+=6;goto B46c1c4;
case 0x46c1c8:c.instructions+=5;goto B46c1c8;
case 0x46c1c9:c.instructions+=4;goto B46c1c9;
case 0x46c1ca:c.instructions+=3;goto B46c1ca;
case 0x46c1cc:c.instructions+=2;goto B46c1cc;
case 0x46c1cd:c.instructions+=1;goto B46c1cd;
case 0x46c1d2:goto L46c1d2;
case 0x46c1d5:c.instructions+=3;goto B46c1d5;
case 0x46c1d7:c.instructions+=2;goto B46c1d7;
case 0x46c1db:c.instructions+=1;goto B46c1db;
case 0x46c1dd:goto L46c1dd;
case 0x46c1e0:c.instructions+=3;goto B46c1e0;
case 0x46c1e3:c.instructions+=2;goto B46c1e3;
case 0x46c1e4:c.instructions+=1;goto B46c1e4;
case 0x46c1e9:goto L46c1e9;
case 0x46c1ec:c.instructions+=2;goto B46c1ec;
case 0x46c1ee:c.instructions+=1;goto B46c1ee;
case 0x46c1f0:goto L46c1f0;
case 0x46c1f3:c.instructions+=2;goto B46c1f3;
case 0x46c1fa:c.instructions+=1;goto B46c1fa;
case 0x46c1ff:goto L46c1ff;
case 0x46c203:c.instructions+=5;goto B46c203;
case 0x46c207:c.instructions+=4;goto B46c207;
case 0x46c20a:c.instructions+=3;goto B46c20a;
case 0x46c20c:c.instructions+=2;goto B46c20c;
case 0x46c20e:c.instructions+=1;goto B46c20e;
case 0x46c210:goto L46c210;
case 0x46c216:goto L46c216;
case 0x46c21b:c.instructions+=4;goto B46c21b;
case 0x46c21f:c.instructions+=3;goto B46c21f;
case 0x46c223:c.instructions+=2;goto B46c223;
case 0x46c229:c.instructions+=1;goto B46c229;
case 0x46c22e:goto L46c22e;
case 0x46c230:c.instructions+=3;goto B46c230;
case 0x46c232:c.instructions+=2;goto B46c232;
case 0x46c234:c.instructions+=1;goto B46c234;
case 0x46c238:goto L46c238;
case 0x46c23b:c.instructions+=7;goto B46c23b;
case 0x46c23e:c.instructions+=6;goto B46c23e;
case 0x46c241:c.instructions+=5;goto B46c241;
case 0x46c243:c.instructions+=4;goto B46c243;
case 0x46c246:c.instructions+=3;goto B46c246;
case 0x46c249:c.instructions+=2;goto B46c249;
case 0x46c24a:c.instructions+=1;goto B46c24a;
case 0x46c24f:goto L46c24f;
case 0x46c252:c.instructions+=5;goto B46c252;
case 0x46c255:c.instructions+=4;goto B46c255;
case 0x46c258:c.instructions+=3;goto B46c258;
case 0x46c25b:c.instructions+=2;goto B46c25b;
case 0x46c25e:c.instructions+=1;goto B46c25e;
case 0x46c263:goto L46c263;
case 0x46c268:goto L46c268;
case 0x46c26b:c.instructions+=4;goto B46c26b;
case 0x46c26f:c.instructions+=3;goto B46c26f;
case 0x46c270:c.instructions+=2;goto B46c270;
case 0x46c271:c.instructions+=1;goto B46c271;
case 0x46c276:goto L46c276;
case 0x46c279:c.instructions+=2;goto B46c279;
case 0x46c27b:c.instructions+=1;goto B46c27b;
case 0x46c280:goto L46c280;
case 0x46c284:c.instructions+=5;goto B46c284;
case 0x46c286:c.instructions+=4;goto B46c286;
case 0x46c289:c.instructions+=3;goto B46c289;
case 0x46c28d:c.instructions+=2;goto B46c28d;
case 0x46c291:c.instructions+=1;goto B46c291;
case 0x46c293:goto L46c293;
case 0x46c296:goto L46c296;
case 0x46c298:c.instructions+=2;goto B46c298;
case 0x46c29c:c.instructions+=1;goto B46c29c;
case 0x46c2a2:goto L46c2a2;
case 0x46c2a4:c.instructions+=1;goto B46c2a4;
case 0x46c2a6:goto L46c2a6;
case 0x46c2a8:c.instructions+=1;goto B46c2a8;
case 0x46c2b0:goto L46c2b0;
case 0x46c2b3:c.instructions+=5;goto B46c2b3;
case 0x46c2b7:c.instructions+=4;goto B46c2b7;
case 0x46c2ba:c.instructions+=3;goto B46c2ba;
case 0x46c2be:c.instructions+=2;goto B46c2be;
case 0x46c2c0:c.instructions+=1;goto B46c2c0;
case 0x46c2c6:goto L46c2c6;
case 0x46c2cb:goto L46c2cb;
case 0x46c2cf:c.instructions+=3;goto B46c2cf;
case 0x46c2d0:c.instructions+=2;goto B46c2d0;
case 0x46c2d1:c.instructions+=1;goto B46c2d1;
case 0x46c2d6:goto L46c2d6;
case 0x46c2d9:c.instructions+=1;goto B46c2d9;
case 0x46c2de:goto L46c2de;
case 0x46c2e2:c.instructions+=3;goto B46c2e2;
case 0x46c2e4:c.instructions+=2;goto B46c2e4;
case 0x46c2e6:c.instructions+=1;goto B46c2e6;
case 0x46c2e8:goto L46c2e8;
case 0x46c2e9:c.instructions+=1;goto B46c2e9;
case 0x46c2eb:goto L46c2eb;
case 0x46c2ec:c.instructions+=1;goto B46c2ec;
case 0x46c2ee:goto L46c2ee;
case 0x46c2f1:c.instructions+=2;goto B46c2f1;
case 0x46c2f9:c.instructions+=1;goto B46c2f9;
case 0x46c2fb:goto L46c2fb;
case 0x46c2fe:c.instructions+=15;goto B46c2fe;
case 0x46c301:c.instructions+=14;goto B46c301;
case 0x46c305:c.instructions+=13;goto B46c305;
case 0x46c308:c.instructions+=12;goto B46c308;
case 0x46c30a:c.instructions+=11;goto B46c30a;
case 0x46c30d:c.instructions+=10;goto B46c30d;
case 0x46c310:c.instructions+=9;goto B46c310;
case 0x46c312:c.instructions+=8;goto B46c312;
case 0x46c314:c.instructions+=7;goto B46c314;
case 0x46c317:c.instructions+=6;goto B46c317;
case 0x46c31b:c.instructions+=5;goto B46c31b;
case 0x46c31e:c.instructions+=4;goto B46c31e;
case 0x46c321:c.instructions+=3;goto B46c321;
case 0x46c324:c.instructions+=2;goto B46c324;
case 0x46c327:c.instructions+=1;goto B46c327;
case 0x46c329:goto L46c329;
case 0x46c32d:c.instructions+=4;goto B46c32d;
case 0x46c32f:c.instructions+=3;goto B46c32f;
case 0x46c333:c.instructions+=2;goto B46c333;
case 0x46c337:c.instructions+=1;goto B46c337;
case 0x46c339:goto L46c339;
case 0x46c33b:c.instructions+=1;goto B46c33b;
case 0x46c33d:goto L46c33d;
case 0x46c340:c.instructions+=2;goto B46c340;
case 0x46c343:c.instructions+=1;goto B46c343;
case 0x46c347:goto L46c347;
case 0x46c34a:c.instructions+=11;goto B46c34a;
case 0x46c34e:c.instructions+=10;goto B46c34e;
case 0x46c351:c.instructions+=9;goto B46c351;
case 0x46c354:c.instructions+=8;goto B46c354;
case 0x46c356:c.instructions+=7;goto B46c356;
case 0x46c359:c.instructions+=6;goto B46c359;
case 0x46c35d:c.instructions+=5;goto B46c35d;
case 0x46c35f:c.instructions+=4;goto B46c35f;
case 0x46c362:c.instructions+=3;goto B46c362;
case 0x46c366:c.instructions+=2;goto B46c366;
case 0x46c36a:c.instructions+=1;goto B46c36a;
case 0x46c36c:goto L46c36c;
case 0x46c36f:goto L46c36f;
case 0x46c372:c.instructions+=2;goto B46c372;
case 0x46c376:c.instructions+=1;goto B46c376;
case 0x46c379:goto L46c379;
case 0x46c37d:c.instructions+=6;goto B46c37d;
case 0x46c381:c.instructions+=5;goto B46c381;
case 0x46c382:c.instructions+=4;goto B46c382;
case 0x46c385:c.instructions+=3;goto B46c385;
case 0x46c387:c.instructions+=2;goto B46c387;
case 0x46c38b:c.instructions+=1;goto B46c38b;
case 0x46c391:goto L46c391;
case 0x46c395:goto L46c395;
case 0x46c398:c.instructions+=2;goto B46c398;
case 0x46c39c:c.instructions+=1;goto B46c39c;
case 0x46c39f:goto L46c39f;
case 0x46c3a3:c.instructions+=5;goto B46c3a3;
case 0x46c3a7:c.instructions+=4;goto B46c3a7;
case 0x46c3aa:c.instructions+=3;goto B46c3aa;
case 0x46c3ad:c.instructions+=2;goto B46c3ad;
case 0x46c3b0:c.instructions+=1;goto B46c3b0;
case 0x46c3b4:goto L46c3b4;
case 0x46c3b7:c.instructions+=3;goto B46c3b7;
case 0x46c3bd:c.instructions+=2;goto B46c3bd;
case 0x46c3c1:c.instructions+=1;goto B46c3c1;
case 0x46c3c7:goto L46c3c7;
case 0x46c3c8:c.instructions+=5;goto B46c3c8;
case 0x46c3c9:c.instructions+=4;goto B46c3c9;
case 0x46c3ca:c.instructions+=3;goto B46c3ca;
case 0x46c3cb:c.instructions+=2;goto B46c3cb;
case 0x46c3d1:c.instructions+=1;goto B46c3d1;
case 0x46c3e0:goto L46c3e0;
case 0x46c3e4:c.instructions+=4;goto B46c3e4;
case 0x46c3e5:c.instructions+=3;goto B46c3e5;
case 0x46c3ec:c.instructions+=2;goto B46c3ec;
case 0x46c3ee:c.instructions+=1;goto B46c3ee;
case 0x46c3f0:goto L46c3f0;
case 0x46c3f5:c.instructions+=2;goto B46c3f5;
case 0x46c3f6:c.instructions+=1;goto B46c3f6;
case 0x46c3f7:goto L46c3f7;
case 0x46c3fa:c.instructions+=2;goto B46c3fa;
case 0x46c3fc:c.instructions+=1;goto B46c3fc;
case 0x46c3fe:goto L46c3fe;
case 0x46c400:c.instructions+=1;goto B46c400;
case 0x46c405:goto L46c405;
case 0x46c408:goto L46c408;
case 0x46c40b:c.instructions+=8;goto B46c40b;
case 0x46c40f:c.instructions+=7;goto B46c40f;
case 0x46c411:c.instructions+=6;goto B46c411;
case 0x46c414:c.instructions+=5;goto B46c414;
case 0x46c418:c.instructions+=4;goto B46c418;
case 0x46c41a:c.instructions+=3;goto B46c41a;
case 0x46c41d:c.instructions+=2;goto B46c41d;
case 0x46c41f:c.instructions+=1;goto B46c41f;
case 0x46c421:goto L46c421;
case 0x46c424:goto L46c424;
case 0x46c425:c.instructions+=1;goto B46c425;
case 0x46c430:goto L46c430;
case 0x46c431:c.instructions+=4;goto B46c431;
case 0x46c435:c.instructions+=3;goto B46c435;
case 0x46c43c:c.instructions+=2;goto B46c43c;
case 0x46c43e:c.instructions+=1;goto B46c43e;
case 0x46c440:goto L46c440;
case 0x46c443:c.instructions+=2;goto B46c443;
case 0x46c445:c.instructions+=1;goto B46c445;
case 0x46c447:goto L46c447;
case 0x46c449:c.instructions+=1;goto B46c449;
case 0x46c44e:goto L46c44e;
case 0x46c451:goto L46c451;
case 0x46c458:c.instructions+=3;goto B46c458;
case 0x46c45b:c.instructions+=2;goto B46c45b;
case 0x46c45c:c.instructions+=1;goto B46c45c;
case 0x46c45d:goto L46c45d;
case 0x46c462:c.instructions+=2;goto B46c462;
case 0x46c463:c.instructions+=1;goto B46c463;
case 0x46c470:goto L46c470;
case 0x46c474:c.instructions+=5;goto B46c474;
case 0x46c475:c.instructions+=4;goto B46c475;
case 0x46c47c:c.instructions+=3;goto B46c47c;
case 0x46c47e:c.instructions+=2;goto B46c47e;
case 0x46c483:c.instructions+=1;goto B46c483;
case 0x46c485:goto L46c485;
case 0x46c487:c.instructions+=5;goto B46c487;
case 0x46c488:c.instructions+=4;goto B46c488;
case 0x46c489:c.instructions+=3;goto B46c489;
case 0x46c48a:c.instructions+=2;goto B46c48a;
case 0x46c490:c.instructions+=1;goto B46c490;
case 0x46c495:goto L46c495;
case 0x46c497:c.instructions+=3;goto B46c497;
case 0x46c49a:c.instructions+=2;goto B46c49a;
case 0x46c49c:c.instructions+=1;goto B46c49c;
case 0x46c49e:goto L46c49e;
case 0x46c4a3:goto L46c4a3;
case 0x46c4a7:c.instructions+=6;goto B46c4a7;
case 0x46c4ab:c.instructions+=5;goto B46c4ab;
case 0x46c4ad:c.instructions+=4;goto B46c4ad;
case 0x46c4ae:c.instructions+=3;goto B46c4ae;
case 0x46c4af:c.instructions+=2;goto B46c4af;
case 0x46c4b0:c.instructions+=1;goto B46c4b0;
case 0x46c4b5:goto L46c4b5;
case 0x46c4b8:c.instructions+=2;goto B46c4b8;
case 0x46c4ba:c.instructions+=1;goto B46c4ba;
case 0x46c4bf:goto L46c4bf;
case 0x46c4c2:c.instructions+=5;goto B46c4c2;
case 0x46c4c3:c.instructions+=4;goto B46c4c3;
case 0x46c4c5:c.instructions+=3;goto B46c4c5;
case 0x46c4c6:c.instructions+=2;goto B46c4c6;
case 0x46c4c7:c.instructions+=1;goto B46c4c7;
case 0x46c4c8:goto L46c4c8;
case 0x46c4cd:goto L46c4cd;
case 0x46c4d1:c.instructions+=6;goto B46c4d1;
case 0x46c4d5:c.instructions+=5;goto B46c4d5;
case 0x46c4d8:c.instructions+=4;goto B46c4d8;
case 0x46c4d9:c.instructions+=3;goto B46c4d9;
case 0x46c4da:c.instructions+=2;goto B46c4da;
case 0x46c4db:c.instructions+=1;goto B46c4db;
case 0x46c4e0:goto L46c4e0;
case 0x46c4e3:c.instructions+=2;goto B46c4e3;
case 0x46c4e5:c.instructions+=1;goto B46c4e5;
case 0x46c4ea:goto L46c4ea;
case 0x46c4ed:c.instructions+=3;goto B46c4ed;
case 0x46c4ee:c.instructions+=2;goto B46c4ee;
case 0x46c4f0:c.instructions+=1;goto B46c4f0;
case 0x46c4f1:goto L46c4f1;
case 0x46c4f2:c.instructions+=1;goto B46c4f2;
case 0x46c500:goto L46c500;
case 0x46c504:c.instructions+=6;goto B46c504;
case 0x46c505:c.instructions+=5;goto B46c505;
case 0x46c506:c.instructions+=4;goto B46c506;
case 0x46c50d:c.instructions+=3;goto B46c50d;
case 0x46c50f:c.instructions+=2;goto B46c50f;
case 0x46c514:c.instructions+=1;goto B46c514;
case 0x46c516:goto L46c516;
case 0x46c518:c.instructions+=5;goto B46c518;
case 0x46c519:c.instructions+=4;goto B46c519;
case 0x46c51a:c.instructions+=3;goto B46c51a;
case 0x46c51b:c.instructions+=2;goto B46c51b;
case 0x46c521:c.instructions+=1;goto B46c521;
case 0x46c526:goto L46c526;
case 0x46c528:c.instructions+=3;goto B46c528;
case 0x46c52b:c.instructions+=2;goto B46c52b;
case 0x46c52d:c.instructions+=1;goto B46c52d;
case 0x46c52f:goto L46c52f;
case 0x46c534:goto L46c534;
case 0x46c538:c.instructions+=4;goto B46c538;
case 0x46c53a:c.instructions+=3;goto B46c53a;
case 0x46c53b:c.instructions+=2;goto B46c53b;
case 0x46c53c:c.instructions+=1;goto B46c53c;
case 0x46c541:goto L46c541;
case 0x46c544:c.instructions+=2;goto B46c544;
case 0x46c546:c.instructions+=1;goto B46c546;
case 0x46c54b:goto L46c54b;
case 0x46c54e:c.instructions+=6;goto B46c54e;
case 0x46c54f:c.instructions+=5;goto B46c54f;
case 0x46c550:c.instructions+=4;goto B46c550;
case 0x46c551:c.instructions+=3;goto B46c551;
case 0x46c553:c.instructions+=2;goto B46c553;
case 0x46c554:c.instructions+=1;goto B46c554;
case 0x46c555:goto L46c555;
case 0x46c55a:goto L46c55a;
case 0x46c55e:c.instructions+=4;goto B46c55e;
case 0x46c561:c.instructions+=3;goto B46c561;
case 0x46c562:c.instructions+=2;goto B46c562;
case 0x46c563:c.instructions+=1;goto B46c563;
case 0x46c568:goto L46c568;
case 0x46c56b:c.instructions+=1;goto B46c56b;
case 0x46c570:goto L46c570;
case 0x46c573:c.instructions+=2;goto B46c573;
case 0x46c574:c.instructions+=1;goto B46c574;
case 0x46c575:goto L46c575;
case 0x46c576:c.instructions+=3;goto B46c576;
case 0x46c578:c.instructions+=2;goto B46c578;
case 0x46c579:c.instructions+=1;goto B46c579;
case 0x46c600:goto L46c600;
case 0x46c604:c.instructions+=8;goto B46c604;
case 0x46c605:c.instructions+=7;goto B46c605;
case 0x46c606:c.instructions+=6;goto B46c606;
case 0x46c60d:c.instructions+=5;goto B46c60d;
case 0x46c60f:c.instructions+=4;goto B46c60f;
case 0x46c610:c.instructions+=3;goto B46c610;
case 0x46c611:c.instructions+=2;goto B46c611;
case 0x46c617:c.instructions+=1;goto B46c617;
case 0x46c61c:goto L46c61c;
case 0x46c61e:c.instructions+=3;goto B46c61e;
case 0x46c622:c.instructions+=2;goto B46c622;
case 0x46c624:c.instructions+=1;goto B46c624;
case 0x46c626:goto L46c626;
case 0x46c62a:c.instructions+=3;goto B46c62a;
case 0x46c62d:c.instructions+=2;goto B46c62d;
case 0x46c62f:c.instructions+=1;goto B46c62f;
case 0x46c631:goto L46c631;
case 0x46c635:goto L46c635;
case 0x46c638:c.instructions+=2;goto B46c638;
case 0x46c63a:c.instructions+=1;goto B46c63a;
case 0x46c63c:goto L46c63c;
case 0x46c641:goto L46c641;
case 0x46c644:c.instructions+=5;goto B46c644;
case 0x46c647:c.instructions+=4;goto B46c647;
case 0x46c64a:c.instructions+=3;goto B46c64a;
case 0x46c64b:c.instructions+=2;goto B46c64b;
case 0x46c64c:c.instructions+=1;goto B46c64c;
case 0x46c651:goto L46c651;
case 0x46c654:c.instructions+=1;goto B46c654;
case 0x46c659:goto L46c659;
case 0x46c65a:c.instructions+=5;goto B46c65a;
case 0x46c65e:c.instructions+=4;goto B46c65e;
case 0x46c65f:c.instructions+=3;goto B46c65f;
case 0x46c661:c.instructions+=2;goto B46c661;
case 0x46c662:c.instructions+=1;goto B46c662;
case 0x46c663:goto L46c663;
case 0x46c668:goto L46c668;
case 0x46c66b:c.instructions+=4;goto B46c66b;
case 0x46c66e:c.instructions+=3;goto B46c66e;
case 0x46c66f:c.instructions+=2;goto B46c66f;
case 0x46c670:c.instructions+=1;goto B46c670;
case 0x46c675:goto L46c675;
case 0x46c678:c.instructions+=1;goto B46c678;
case 0x46c67d:goto L46c67d;
case 0x46c67e:c.instructions+=5;goto B46c67e;
case 0x46c682:c.instructions+=4;goto B46c682;
case 0x46c683:c.instructions+=3;goto B46c683;
case 0x46c685:c.instructions+=2;goto B46c685;
case 0x46c686:c.instructions+=1;goto B46c686;
case 0x46c690:goto L46c690;
case 0x46c694:c.instructions+=6;goto B46c694;
case 0x46c695:c.instructions+=5;goto B46c695;
case 0x46c69c:c.instructions+=4;goto B46c69c;
case 0x46c69e:c.instructions+=3;goto B46c69e;
case 0x46c69f:c.instructions+=2;goto B46c69f;
case 0x46c6a5:c.instructions+=1;goto B46c6a5;
case 0x46c6aa:goto L46c6aa;
case 0x46c6ad:c.instructions+=2;goto B46c6ad;
case 0x46c6af:c.instructions+=1;goto B46c6af;
case 0x46c6b1:goto L46c6b1;
case 0x46c6b6:goto L46c6b6;
case 0x46c6b9:c.instructions+=3;goto B46c6b9;
case 0x46c6bc:c.instructions+=2;goto B46c6bc;
case 0x46c6bd:c.instructions+=1;goto B46c6bd;
case 0x46c6c2:goto L46c6c2;
case 0x46c6c5:c.instructions+=1;goto B46c6c5;
case 0x46c6ca:goto L46c6ca;
case 0x46c6ce:c.instructions+=3;goto B46c6ce;
case 0x46c6d0:c.instructions+=2;goto B46c6d0;
case 0x46c6d1:c.instructions+=1;goto B46c6d1;
case 0x46c6d2:goto L46c6d2;
case 0x46c6d5:c.instructions+=2;goto B46c6d5;
case 0x46c6d6:c.instructions+=1;goto B46c6d6;
case 0x46c6db:goto L46c6db;
case 0x46c6de:c.instructions+=4;goto B46c6de;
case 0x46c6e2:c.instructions+=3;goto B46c6e2;
case 0x46c6e4:c.instructions+=2;goto B46c6e4;
case 0x46c6e5:c.instructions+=1;goto B46c6e5;
case 0x46c6f0:goto L46c6f0;
case 0x46c6f3:c.instructions+=8;goto B46c6f3;
case 0x46c6f4:c.instructions+=7;goto B46c6f4;
case 0x46c6f5:c.instructions+=6;goto B46c6f5;
case 0x46c6f6:c.instructions+=5;goto B46c6f6;
case 0x46c6f7:c.instructions+=4;goto B46c6f7;
case 0x46c6fb:c.instructions+=3;goto B46c6fb;
case 0x46c6fc:c.instructions+=2;goto B46c6fc;
case 0x46c6fe:c.instructions+=1;goto B46c6fe;
case 0x46c703:goto L46c703;
case 0x46c707:c.instructions+=7;goto B46c707;
case 0x46c70b:c.instructions+=6;goto B46c70b;
case 0x46c70c:c.instructions+=5;goto B46c70c;
case 0x46c70e:c.instructions+=4;goto B46c70e;
case 0x46c70f:c.instructions+=3;goto B46c70f;
case 0x46c714:c.instructions+=2;goto B46c714;
case 0x46c718:c.instructions+=1;goto B46c718;
case 0x46c71d:goto L46c71d;
case 0x46c721:c.instructions+=6;goto B46c721;
case 0x46c723:c.instructions+=5;goto B46c723;
case 0x46c725:c.instructions+=4;goto B46c725;
case 0x46c728:c.instructions+=3;goto B46c728;
case 0x46c72d:c.instructions+=2;goto B46c72d;
case 0x46c72e:c.instructions+=1;goto B46c72e;
case 0x46c733:goto L46c733;
case 0x46c739:c.instructions+=3;goto B46c739;
case 0x46c73c:c.instructions+=2;goto B46c73c;
case 0x46c73e:c.instructions+=1;goto B46c73e;
case 0x46c740:goto L46c740;
case 0x46c746:c.instructions+=5;goto B46c746;
case 0x46c749:c.instructions+=4;goto B46c749;
case 0x46c74f:c.instructions+=3;goto B46c74f;
case 0x46c750:c.instructions+=2;goto B46c750;
case 0x46c751:c.instructions+=1;goto B46c751;
case 0x46c756:goto L46c756;
case 0x46c759:c.instructions+=1;goto B46c759;
case 0x46c75b:goto L46c75b;
case 0x46c75f:c.instructions+=14;goto B46c75f;
case 0x46c763:c.instructions+=13;goto B46c763;
case 0x46c764:c.instructions+=12;goto B46c764;
case 0x46c766:c.instructions+=11;goto B46c766;
case 0x46c768:c.instructions+=10;goto B46c768;
case 0x46c769:c.instructions+=9;goto B46c769;
case 0x46c76b:c.instructions+=8;goto B46c76b;
case 0x46c76c:c.instructions+=7;goto B46c76c;
case 0x46c76f:c.instructions+=6;goto B46c76f;
case 0x46c773:c.instructions+=5;goto B46c773;
case 0x46c774:c.instructions+=4;goto B46c774;
case 0x46c775:c.instructions+=3;goto B46c775;
case 0x46c777:c.instructions+=2;goto B46c777;
case 0x46c77a:c.instructions+=1;goto B46c77a;
case 0x46c77f:goto L46c77f;
case 0x46c780:c.instructions+=5;goto B46c780;
case 0x46c781:c.instructions+=4;goto B46c781;
case 0x46c782:c.instructions+=3;goto B46c782;
case 0x46c783:c.instructions+=2;goto B46c783;
case 0x46c786:c.instructions+=1;goto B46c786;
case 0x46c790:goto L46c790;
case 0x46c793:c.instructions+=3;goto B46c793;
case 0x46c794:c.instructions+=2;goto B46c794;
case 0x46c796:c.instructions+=1;goto B46c796;
case 0x46c79b:goto L46c79b;
case 0x46c79e:c.instructions+=4;goto B46c79e;
case 0x46c7a2:c.instructions+=3;goto B46c7a2;
case 0x46c7a3:c.instructions+=2;goto B46c7a3;
case 0x46c7a4:c.instructions+=1;goto B46c7a4;
case 0x46c7a9:goto L46c7a9;
case 0x46c7ac:c.instructions+=1;goto B46c7ac;
case 0x46c7b1:goto L46c7b1;
case 0x46c7b5:c.instructions+=3;goto B46c7b5;
case 0x46c7b7:c.instructions+=2;goto B46c7b7;
case 0x46c7b8:c.instructions+=1;goto B46c7b8;
case 0x46c7ba:goto L46c7ba;
case 0x46c7bd:c.instructions+=1;goto B46c7bd;
case 0x46c7bf:goto L46c7bf;
case 0x46c7c4:goto L46c7c4;
case 0x46c7c8:c.instructions+=4;goto B46c7c8;
case 0x46c7cc:c.instructions+=3;goto B46c7cc;
case 0x46c7cd:c.instructions+=2;goto B46c7cd;
case 0x46c7ce:c.instructions+=1;goto B46c7ce;
case 0x46c7d3:goto L46c7d3;
case 0x46c7d6:c.instructions+=1;goto B46c7d6;
case 0x46c7db:goto L46c7db;
case 0x46c7df:c.instructions+=2;goto B46c7df;
case 0x46c7e2:c.instructions+=1;goto B46c7e2;
case 0x46c7e4:goto L46c7e4;
case 0x46c7e6:c.instructions+=1;goto B46c7e6;
case 0x46c7e8:goto L46c7e8;
case 0x46c7eb:c.instructions+=1;goto B46c7eb;
case 0x46c7ed:goto L46c7ed;
case 0x46c7f2:c.instructions+=1;goto B46c7f2;
case 0x46c7f4:goto L46c7f4;
case 0x46c7f6:c.instructions+=2;goto B46c7f6;
case 0x46c7f9:c.instructions+=1;goto B46c7f9;
case 0x46c7fa:goto L46c7fa;
case 0x46c7fc:c.instructions+=2;goto B46c7fc;
case 0x46c7ff:c.instructions+=1;goto B46c7ff;
case 0x46c800:goto L46c800;
case 0x46c805:c.instructions+=3;goto B46c805;
case 0x46c806:c.instructions+=2;goto B46c806;
case 0x46c808:c.instructions+=1;goto B46c808;
case 0x46c80a:goto L46c80a;
case 0x46c80e:c.instructions+=3;goto B46c80e;
case 0x46c813:c.instructions+=2;goto B46c813;
case 0x46c814:c.instructions+=1;goto B46c814;
case 0x46c819:goto L46c819;
case 0x46c81a:c.instructions+=1;goto B46c81a;
case 0x46c81d:goto L46c81d;
case 0x46c821:c.instructions+=2;goto B46c821;
case 0x46c824:c.instructions+=1;goto B46c824;
case 0x46c829:goto L46c829;
case 0x46c82c:c.instructions+=7;goto B46c82c;
case 0x46c82f:c.instructions+=6;goto B46c82f;
case 0x46c830:c.instructions+=5;goto B46c830;
case 0x46c836:c.instructions+=4;goto B46c836;
case 0x46c839:c.instructions+=3;goto B46c839;
case 0x46c83b:c.instructions+=2;goto B46c83b;
case 0x46c83c:c.instructions+=1;goto B46c83c;
case 0x46c841:goto L46c841;
case 0x46c844:c.instructions+=2;goto B46c844;
case 0x46c846:c.instructions+=1;goto B46c846;
case 0x46c84b:goto L46c84b;
case 0x46c84d:c.instructions+=2;goto B46c84d;
case 0x46c84e:c.instructions+=1;goto B46c84e;
case 0x46c860:goto L46c860;
case 0x46c861:c.instructions+=3;goto B46c861;
case 0x46c862:c.instructions+=2;goto B46c862;
case 0x46c864:c.instructions+=1;goto B46c864;
case 0x46c869:goto L46c869;
case 0x46c86c:c.instructions+=3;goto B46c86c;
case 0x46c86d:c.instructions+=2;goto B46c86d;
case 0x46c872:c.instructions+=1;goto B46c872;
case 0x46c874:goto L46c874;
case 0x46c875:c.instructions+=1;goto B46c875;
case 0x46c877:goto L46c877;
case 0x46c879:goto L46c879;
case 0x46c87c:c.instructions+=2;goto B46c87c;
case 0x46c87e:c.instructions+=1;goto B46c87e;
case 0x46c880:goto L46c880;
case 0x46c882:c.instructions+=2;goto B46c882;
case 0x46c884:c.instructions+=1;goto B46c884;
case 0x46c886:goto L46c886;
case 0x46c889:goto L46c889;
case 0x46c88c:c.instructions+=2;goto B46c88c;
case 0x46c88e:c.instructions+=1;goto B46c88e;
case 0x46c890:goto L46c890;
case 0x46c892:c.instructions+=2;goto B46c892;
case 0x46c894:c.instructions+=1;goto B46c894;
case 0x46c896:goto L46c896;
case 0x46c899:goto L46c899;
case 0x46c89c:c.instructions+=2;goto B46c89c;
case 0x46c89e:c.instructions+=1;goto B46c89e;
case 0x46c8a0:goto L46c8a0;
case 0x46c8a1:c.instructions+=1;goto B46c8a1;
case 0x46c8a6:goto L46c8a6;
case 0x46c8a9:c.instructions+=1;goto B46c8a9;
case 0x46c8ac:goto L46c8ac;
case 0x46c8af:c.instructions+=2;goto B46c8af;
case 0x46c8b1:c.instructions+=1;goto B46c8b1;
case 0x46c8b3:goto L46c8b3;
case 0x46c8b5:c.instructions+=2;goto B46c8b5;
case 0x46c8b7:c.instructions+=1;goto B46c8b7;
case 0x46c8b9:goto L46c8b9;
case 0x46c8bc:goto L46c8bc;
case 0x46c8bf:c.instructions+=2;goto B46c8bf;
case 0x46c8c1:c.instructions+=1;goto B46c8c1;
case 0x46c8c3:goto L46c8c3;
case 0x46c8c5:c.instructions+=2;goto B46c8c5;
case 0x46c8c7:c.instructions+=1;goto B46c8c7;
case 0x46c8c9:goto L46c8c9;
case 0x46c8cc:goto L46c8cc;
case 0x46c8cd:c.instructions+=2;goto B46c8cd;
case 0x46c8ce:c.instructions+=1;goto B46c8ce;
case 0x46c8d0:goto L46c8d0;
case 0x46c8d1:c.instructions+=4;goto B46c8d1;
case 0x46c8d3:c.instructions+=3;goto B46c8d3;
case 0x46c8d6:c.instructions+=2;goto B46c8d6;
case 0x46c8d8:c.instructions+=1;goto B46c8d8;
case 0x46c8da:goto L46c8da;
case 0x46c8de:c.instructions+=5;goto B46c8de;
case 0x46c8e1:c.instructions+=4;goto B46c8e1;
case 0x46c8e2:c.instructions+=3;goto B46c8e2;
case 0x46c8e5:c.instructions+=2;goto B46c8e5;
case 0x46c8e8:c.instructions+=1;goto B46c8e8;
case 0x46c8ed:goto L46c8ed;
case 0x46c8f0:c.instructions+=3;goto B46c8f0;
case 0x46c8f2:c.instructions+=2;goto B46c8f2;
case 0x46c8f3:c.instructions+=1;goto B46c8f3;
case 0x46c8f8:goto L46c8f8;
case 0x46c8fb:c.instructions+=1;goto B46c8fb;
case 0x46c900:goto L46c900;
case 0x46c901:goto L46c901;
case 0x46c904:c.instructions+=2;goto B46c904;
case 0x46c906:c.instructions+=1;goto B46c906;
case 0x46c908:goto L46c908;
case 0x46c90c:c.instructions+=4;goto B46c90c;
case 0x46c90f:c.instructions+=3;goto B46c90f;
case 0x46c912:c.instructions+=2;goto B46c912;
case 0x46c915:c.instructions+=1;goto B46c915;
case 0x46c91a:goto L46c91a;
case 0x46c91d:c.instructions+=3;goto B46c91d;
case 0x46c91f:c.instructions+=2;goto B46c91f;
case 0x46c920:c.instructions+=1;goto B46c920;
case 0x46c925:goto L46c925;
case 0x46c928:c.instructions+=2;goto B46c928;
case 0x46c929:c.instructions+=1;goto B46c929;
case 0x46c92e:goto L46c92e;
case 0x46c92f:c.instructions+=1;goto B46c92f;
case 0x46c930:goto L46c930;
case 0x46c931:c.instructions+=4;goto B46c931;
case 0x46c933:c.instructions+=3;goto B46c933;
case 0x46c936:c.instructions+=2;goto B46c936;
case 0x46c938:c.instructions+=1;goto B46c938;
case 0x46c93a:goto L46c93a;
case 0x46c93e:c.instructions+=5;goto B46c93e;
case 0x46c941:c.instructions+=4;goto B46c941;
case 0x46c942:c.instructions+=3;goto B46c942;
case 0x46c945:c.instructions+=2;goto B46c945;
case 0x46c948:c.instructions+=1;goto B46c948;
case 0x46c94d:goto L46c94d;
case 0x46c950:c.instructions+=3;goto B46c950;
case 0x46c955:c.instructions+=2;goto B46c955;
case 0x46c956:c.instructions+=1;goto B46c956;
case 0x46c95b:goto L46c95b;
case 0x46c95e:c.instructions+=1;goto B46c95e;
case 0x46c963:goto L46c963;
case 0x46c964:goto L46c964;
case 0x46c967:c.instructions+=2;goto B46c967;
case 0x46c969:c.instructions+=1;goto B46c969;
case 0x46c96b:goto L46c96b;
case 0x46c96f:c.instructions+=4;goto B46c96f;
case 0x46c972:c.instructions+=3;goto B46c972;
case 0x46c975:c.instructions+=2;goto B46c975;
case 0x46c978:c.instructions+=1;goto B46c978;
case 0x46c97d:goto L46c97d;
case 0x46c980:c.instructions+=3;goto B46c980;
case 0x46c985:c.instructions+=2;goto B46c985;
case 0x46c986:c.instructions+=1;goto B46c986;
case 0x46c98b:goto L46c98b;
case 0x46c98e:c.instructions+=2;goto B46c98e;
case 0x46c98f:c.instructions+=1;goto B46c98f;
case 0x46c994:goto L46c994;
case 0x46c995:c.instructions+=1;goto B46c995;
case 0x46c9a0:goto L46c9a0;
case 0x46c9a3:c.instructions+=4;goto B46c9a3;
case 0x46c9a4:c.instructions+=3;goto B46c9a4;
case 0x46c9a7:c.instructions+=2;goto B46c9a7;
case 0x46c9aa:c.instructions+=1;goto B46c9aa;
case 0x46c9af:goto L46c9af;
case 0x46c9b2:c.instructions+=4;goto B46c9b2;
case 0x46c9b6:c.instructions+=3;goto B46c9b6;
case 0x46c9b7:c.instructions+=2;goto B46c9b7;
case 0x46c9b8:c.instructions+=1;goto B46c9b8;
case 0x46c9bd:goto L46c9bd;
case 0x46c9c0:c.instructions+=1;goto B46c9c0;
case 0x46c9c5:goto L46c9c5;
case 0x46c9c9:c.instructions+=3;goto B46c9c9;
case 0x46c9ca:c.instructions+=2;goto B46c9ca;
case 0x46c9cd:c.instructions+=1;goto B46c9cd;
case 0x46c9d0:goto L46c9d0;
case 0x46c9d1:c.instructions+=5;goto B46c9d1;
case 0x46c9d3:c.instructions+=4;goto B46c9d3;
case 0x46c9d6:c.instructions+=3;goto B46c9d6;
case 0x46c9d9:c.instructions+=2;goto B46c9d9;
case 0x46c9da:c.instructions+=1;goto B46c9da;
case 0x46c9df:goto L46c9df;
case 0x46c9e2:c.instructions+=3;goto B46c9e2;
case 0x46c9e5:c.instructions+=2;goto B46c9e5;
case 0x46c9e7:c.instructions+=1;goto B46c9e7;
case 0x46c9e9:goto L46c9e9;
case 0x46c9ec:c.instructions+=4;goto B46c9ec;
case 0x46c9ed:c.instructions+=3;goto B46c9ed;
case 0x46c9f2:c.instructions+=2;goto B46c9f2;
case 0x46c9f4:c.instructions+=1;goto B46c9f4;
case 0x46c9f9:goto L46c9f9;
case 0x46c9fc:c.instructions+=2;goto B46c9fc;
case 0x46c9fd:c.instructions+=1;goto B46c9fd;
case 0x46ca02:goto L46ca02;
case 0x46ca05:c.instructions+=1;goto B46ca05;
case 0x46ca0c:goto L46ca0c;
case 0x46ca0d:c.instructions+=1;goto B46ca0d;
case 0x46ca10:goto L46ca10;
case 0x46ca11:c.instructions+=6;goto B46ca11;
case 0x46ca12:c.instructions+=5;goto B46ca12;
case 0x46ca14:c.instructions+=4;goto B46ca14;
case 0x46ca17:c.instructions+=3;goto B46ca17;
case 0x46ca19:c.instructions+=2;goto B46ca19;
case 0x46ca1b:c.instructions+=1;goto B46ca1b;
case 0x46ca1d:goto L46ca1d;
case 0x46ca20:c.instructions+=2;goto B46ca20;
case 0x46ca21:c.instructions+=1;goto B46ca21;
case 0x46ca26:goto L46ca26;
case 0x46ca29:goto L46ca29;
case 0x46ca2c:c.instructions+=2;goto B46ca2c;
case 0x46ca2e:c.instructions+=1;goto B46ca2e;
case 0x46ca30:goto L46ca30;
case 0x46ca34:c.instructions+=1;goto B46ca34;
case 0x46ca36:goto L46ca36;
case 0x46ca38:c.instructions+=3;goto B46ca38;
case 0x46ca3d:c.instructions+=2;goto B46ca3d;
case 0x46ca3f:c.instructions+=1;goto B46ca3f;
case 0x46ca44:goto L46ca44;
case 0x46ca47:c.instructions+=2;goto B46ca47;
case 0x46ca48:c.instructions+=1;goto B46ca48;
case 0x46ca4d:goto L46ca4d;
case 0x46ca50:c.instructions+=1;goto B46ca50;
case 0x46ca53:goto L46ca53;
case 0x46ca56:c.instructions+=3;goto B46ca56;
case 0x46ca57:c.instructions+=2;goto B46ca57;
case 0x46ca58:c.instructions+=1;goto B46ca58;
case 0x46ca60:goto L46ca60;
case 0x46ca61:c.instructions+=4;goto B46ca61;
case 0x46ca63:c.instructions+=3;goto B46ca63;
case 0x46ca66:c.instructions+=2;goto B46ca66;
case 0x46ca68:c.instructions+=1;goto B46ca68;
case 0x46ca6a:goto L46ca6a;
case 0x46ca6e:c.instructions+=4;goto B46ca6e;
case 0x46ca6f:c.instructions+=3;goto B46ca6f;
case 0x46ca74:c.instructions+=2;goto B46ca74;
case 0x46ca76:c.instructions+=1;goto B46ca76;
case 0x46ca7b:goto L46ca7b;
case 0x46ca7e:c.instructions+=3;goto B46ca7e;
case 0x46ca80:c.instructions+=2;goto B46ca80;
case 0x46ca81:c.instructions+=1;goto B46ca81;
case 0x46ca84:goto L46ca84;
case 0x46ca86:c.instructions+=1;goto B46ca86;
case 0x46ca8b:goto L46ca8b;
case 0x46ca8f:c.instructions+=16;goto B46ca8f;
case 0x46ca93:c.instructions+=15;goto B46ca93;
case 0x46ca96:c.instructions+=14;goto B46ca96;
case 0x46ca99:c.instructions+=13;goto B46ca99;
case 0x46ca9c:c.instructions+=12;goto B46ca9c;
case 0x46ca9f:c.instructions+=11;goto B46ca9f;
case 0x46caa3:c.instructions+=10;goto B46caa3;
case 0x46caa6:c.instructions+=9;goto B46caa6;
case 0x46caa9:c.instructions+=8;goto B46caa9;
case 0x46cab0:c.instructions+=7;goto B46cab0;
case 0x46cab6:c.instructions+=6;goto B46cab6;
case 0x46cab9:c.instructions+=5;goto B46cab9;
case 0x46cabc:c.instructions+=4;goto B46cabc;
case 0x46cabf:c.instructions+=3;goto B46cabf;
case 0x46cac2:c.instructions+=2;goto B46cac2;
case 0x46cac5:c.instructions+=1;goto B46cac5;
case 0x46cac7:goto L46cac7;
case 0x46caca:c.instructions+=6;goto B46caca;
case 0x46cacd:c.instructions+=5;goto B46cacd;
case 0x46cad1:c.instructions+=4;goto B46cad1;
case 0x46cad5:c.instructions+=3;goto B46cad5;
case 0x46cad7:c.instructions+=2;goto B46cad7;
case 0x46cad8:c.instructions+=1;goto B46cad8;
case 0x46cadb:goto L46cadb;
case 0x46cade:c.instructions+=6;goto B46cade;
case 0x46cae5:c.instructions+=5;goto B46cae5;
case 0x46cae9:c.instructions+=4;goto B46cae9;
case 0x46caed:c.instructions+=3;goto B46caed;
case 0x46caef:c.instructions+=2;goto B46caef;
case 0x46caf0:c.instructions+=1;goto B46caf0;
case 0x46cb00:goto L46cb00;
case 0x46cb05:c.instructions+=7;goto B46cb05;
case 0x46cb08:c.instructions+=6;goto B46cb08;
case 0x46cb09:c.instructions+=5;goto B46cb09;
case 0x46cb0b:c.instructions+=4;goto B46cb0b;
case 0x46cb0e:c.instructions+=3;goto B46cb0e;
case 0x46cb10:c.instructions+=2;goto B46cb10;
case 0x46cb11:c.instructions+=1;goto B46cb11;
case 0x46cb13:goto L46cb13;
case 0x46cb16:c.instructions+=2;goto B46cb16;
case 0x46cb18:c.instructions+=1;goto B46cb18;
case 0x46cb1a:goto L46cb1a;
case 0x46cb1d:c.instructions+=2;goto B46cb1d;
case 0x46cb20:c.instructions+=1;goto B46cb20;
case 0x46cb25:goto L46cb25;
case 0x46cb28:c.instructions+=3;goto B46cb28;
case 0x46cb2a:c.instructions+=2;goto B46cb2a;
case 0x46cb2b:c.instructions+=1;goto B46cb2b;
case 0x46cb30:goto L46cb30;
case 0x46cb33:c.instructions+=1;goto B46cb33;
case 0x46cb38:goto L46cb38;
case 0x46cb3c:c.instructions+=1;goto B46cb3c;
case 0x46cb3e:goto L46cb3e;
case 0x46cb42:c.instructions+=1;goto B46cb42;
case 0x46cb48:goto L46cb48;
case 0x46cb4b:c.instructions+=2;goto B46cb4b;
case 0x46cb4d:c.instructions+=1;goto B46cb4d;
case 0x46cb4f:goto L46cb4f;
case 0x46cb52:c.instructions+=3;goto B46cb52;
case 0x46cb53:c.instructions+=2;goto B46cb53;
case 0x46cb55:c.instructions+=1;goto B46cb55;
case 0x46cb5a:goto L46cb5a;
case 0x46cb5e:c.instructions+=4;goto B46cb5e;
case 0x46cb62:c.instructions+=3;goto B46cb62;
case 0x46cb68:c.instructions+=2;goto B46cb68;
case 0x46cb6e:c.instructions+=1;goto B46cb6e;
case 0x46cb73:goto L46cb73;
case 0x46cb76:c.instructions+=3;goto B46cb76;
case 0x46cb79:c.instructions+=2;goto B46cb79;
case 0x46cb7c:c.instructions+=1;goto B46cb7c;
case 0x46cb81:goto L46cb81;
case 0x46cb84:c.instructions+=7;goto B46cb84;
case 0x46cb87:c.instructions+=6;goto B46cb87;
case 0x46cb88:c.instructions+=5;goto B46cb88;
case 0x46cb8e:c.instructions+=4;goto B46cb8e;
case 0x46cb91:c.instructions+=3;goto B46cb91;
case 0x46cb93:c.instructions+=2;goto B46cb93;
case 0x46cb94:c.instructions+=1;goto B46cb94;
case 0x46cb99:goto L46cb99;
case 0x46cb9c:c.instructions+=1;goto B46cb9c;
case 0x46cba1:goto L46cba1;
case 0x46cba4:c.instructions+=2;goto B46cba4;
case 0x46cba6:c.instructions+=1;goto B46cba6;
case 0x46cba8:goto L46cba8;
case 0x46cbac:c.instructions+=1;goto B46cbac;
case 0x46cbae:goto L46cbae;
case 0x46cbb0:c.instructions+=2;goto B46cbb0;
case 0x46cbb2:c.instructions+=1;goto B46cbb2;
case 0x46cbb7:goto L46cbb7;
case 0x46cbbb:c.instructions+=4;goto B46cbbb;
case 0x46cbbf:c.instructions+=3;goto B46cbbf;
case 0x46cbc5:c.instructions+=2;goto B46cbc5;
case 0x46cbcb:c.instructions+=1;goto B46cbcb;
case 0x46cbd0:goto L46cbd0;
case 0x46cbd3:c.instructions+=3;goto B46cbd3;
case 0x46cbd6:c.instructions+=2;goto B46cbd6;
case 0x46cbd9:c.instructions+=1;goto B46cbd9;
case 0x46cbde:goto L46cbde;
case 0x46cbe1:c.instructions+=7;goto B46cbe1;
case 0x46cbe2:c.instructions+=6;goto B46cbe2;
case 0x46cbe5:c.instructions+=5;goto B46cbe5;
case 0x46cbeb:c.instructions+=4;goto B46cbeb;
case 0x46cbee:c.instructions+=3;goto B46cbee;
case 0x46cbf0:c.instructions+=2;goto B46cbf0;
case 0x46cbf1:c.instructions+=1;goto B46cbf1;
case 0x46cbf6:goto L46cbf6;
case 0x46cbf9:c.instructions+=1;goto B46cbf9;
case 0x46cbfe:goto L46cbfe;
case 0x46cc01:c.instructions+=2;goto B46cc01;
case 0x46cc03:c.instructions+=1;goto B46cc03;
case 0x46cc05:goto L46cc05;
case 0x46cc08:c.instructions+=2;goto B46cc08;
case 0x46cc0a:c.instructions+=1;goto B46cc0a;
case 0x46cc0c:goto L46cc0c;
case 0x46cc12:c.instructions+=3;goto B46cc12;
case 0x46cc15:c.instructions+=2;goto B46cc15;
case 0x46cc17:c.instructions+=1;goto B46cc17;
case 0x46cc1a:goto L46cc1a;
case 0x46cc1b:c.instructions+=1;goto B46cc1b;
case 0x46cc20:goto L46cc20;
case 0x46cc23:c.instructions+=2;goto B46cc23;
case 0x46cc26:c.instructions+=1;goto B46cc26;
case 0x46cc2d:goto L46cc2d;
case 0x46cc33:c.instructions+=3;goto B46cc33;
case 0x46cc36:c.instructions+=2;goto B46cc36;
case 0x46cc38:c.instructions+=1;goto B46cc38;
case 0x46cc3a:goto L46cc3a;
case 0x46cc3d:c.instructions+=2;goto B46cc3d;
case 0x46cc3f:c.instructions+=1;goto B46cc3f;
case 0x46cc41:goto L46cc41;
case 0x46cc44:c.instructions+=2;goto B46cc44;
case 0x46cc47:c.instructions+=1;goto B46cc47;
case 0x46cc4c:goto L46cc4c;
case 0x46cc4f:c.instructions+=3;goto B46cc4f;
case 0x46cc54:c.instructions+=2;goto B46cc54;
case 0x46cc55:c.instructions+=1;goto B46cc55;
case 0x46cc5a:goto L46cc5a;
case 0x46cc5d:c.instructions+=1;goto B46cc5d;
case 0x46cc62:goto L46cc62;
case 0x46cc66:goto L46cc66;
case 0x46cc69:c.instructions+=2;goto B46cc69;
case 0x46cc6b:c.instructions+=1;goto B46cc6b;
case 0x46cc6d:goto L46cc6d;
case 0x46cc70:c.instructions+=2;goto B46cc70;
case 0x46cc73:c.instructions+=1;goto B46cc73;
case 0x46cc78:goto L46cc78;
case 0x46cc7b:c.instructions+=4;goto B46cc7b;
case 0x46cc7f:c.instructions+=3;goto B46cc7f;
case 0x46cc80:c.instructions+=2;goto B46cc80;
case 0x46cc81:c.instructions+=1;goto B46cc81;
case 0x46cc86:goto L46cc86;
case 0x46cc89:c.instructions+=2;goto B46cc89;
case 0x46cc8b:c.instructions+=1;goto B46cc8b;
case 0x46cc90:goto L46cc90;
case 0x46cc92:c.instructions+=1;goto B46cc92;
case 0x46cc94:goto L46cc94;
case 0x46cc98:c.instructions+=2;goto B46cc98;
case 0x46cc9a:c.instructions+=1;goto B46cc9a;
case 0x46cc9c:goto L46cc9c;
case 0x46cc9f:c.instructions+=4;goto B46cc9f;
case 0x46cca0:c.instructions+=3;goto B46cca0;
case 0x46cca1:c.instructions+=2;goto B46cca1;
case 0x46cca4:c.instructions+=1;goto B46cca4;
case 0x46cca7:goto L46cca7;
case 0x46cca8:c.instructions+=3;goto B46cca8;
case 0x46cca9:c.instructions+=2;goto B46cca9;
case 0x46ccac:c.instructions+=1;goto B46ccac;
case 0x46ccb0:goto L46ccb0;
case 0x46ccb2:c.instructions+=14;goto B46ccb2;
case 0x46ccb7:c.instructions+=13;goto B46ccb7;
case 0x46ccbd:c.instructions+=12;goto B46ccbd;
case 0x46ccbe:c.instructions+=11;goto B46ccbe;
case 0x46ccc5:c.instructions+=10;goto B46ccc5;
case 0x46ccc6:c.instructions+=9;goto B46ccc6;
case 0x46ccc7:c.instructions+=8;goto B46ccc7;
case 0x46ccc8:c.instructions+=7;goto B46ccc8;
case 0x46ccca:c.instructions+=6;goto B46ccca;
case 0x46cccb:c.instructions+=5;goto B46cccb;
case 0x46cccf:c.instructions+=4;goto B46cccf;
case 0x46ccd1:c.instructions+=3;goto B46ccd1;
case 0x46ccd9:c.instructions+=2;goto B46ccd9;
case 0x46cce0:c.instructions+=1;goto B46cce0;
case 0x46cce5:goto L46cce5;
case 0x46cce7:goto L46cce7;
case 0x46ccea:c.instructions+=3;goto B46ccea;
case 0x46cceb:c.instructions+=2;goto B46cceb;
case 0x46cced:c.instructions+=1;goto B46cced;
case 0x46ccf2:goto L46ccf2;
case 0x46ccf9:c.instructions+=3;goto B46ccf9;
case 0x46ccfb:c.instructions+=2;goto B46ccfb;
case 0x46ccfe:c.instructions+=1;goto B46ccfe;
case 0x46cd00:goto L46cd00;
case 0x46cd04:c.instructions+=9;goto B46cd04;
case 0x46cd05:c.instructions+=8;goto B46cd05;
case 0x46cd09:c.instructions+=7;goto B46cd09;
case 0x46cd10:c.instructions+=6;goto B46cd10;
case 0x46cd11:c.instructions+=5;goto B46cd11;
case 0x46cd13:c.instructions+=4;goto B46cd13;
case 0x46cd14:c.instructions+=3;goto B46cd14;
case 0x46cd1b:c.instructions+=2;goto B46cd1b;
case 0x46cd1e:c.instructions+=1;goto B46cd1e;
case 0x46cd20:goto L46cd20;
case 0x46cd22:c.instructions+=3;goto B46cd22;
case 0x46cd28:c.instructions+=2;goto B46cd28;
case 0x46cd2a:c.instructions+=1;goto B46cd2a;
case 0x46cd2c:goto L46cd2c;
case 0x46cd2e:c.instructions+=1;goto B46cd2e;
case 0x46cd2f:goto L46cd2f;
case 0x46cd32:c.instructions+=3;goto B46cd32;
case 0x46cd35:c.instructions+=2;goto B46cd35;
case 0x46cd3a:c.instructions+=1;goto B46cd3a;
case 0x46cd3f:goto L46cd3f;
case 0x46cd44:c.instructions+=5;goto B46cd44;
case 0x46cd47:c.instructions+=4;goto B46cd47;
case 0x46cd49:c.instructions+=3;goto B46cd49;
case 0x46cd4e:c.instructions+=2;goto B46cd4e;
case 0x46cd50:c.instructions+=1;goto B46cd50;
case 0x46cd55:goto L46cd55;
case 0x46cd60:goto L46cd60;
case 0x46cd64:c.instructions+=4;goto B46cd64;
case 0x46cd68:c.instructions+=3;goto B46cd68;
case 0x46cd69:c.instructions+=2;goto B46cd69;
case 0x46cd6d:c.instructions+=1;goto B46cd6d;
case 0x46cd72:goto L46cd72;
case 0x46cd75:c.instructions+=1;goto B46cd75;
case 0x46cd80:goto L46cd80;
case 0x46cd82:c.instructions+=11;goto B46cd82;
case 0x46cd87:c.instructions+=10;goto B46cd87;
case 0x46cd8d:c.instructions+=9;goto B46cd8d;
case 0x46cd8e:c.instructions+=8;goto B46cd8e;
case 0x46cd95:c.instructions+=7;goto B46cd95;
case 0x46cd96:c.instructions+=6;goto B46cd96;
case 0x46cd97:c.instructions+=5;goto B46cd97;
case 0x46cd99:c.instructions+=4;goto B46cd99;
case 0x46cd9d:c.instructions+=3;goto B46cd9d;
case 0x46cda3:c.instructions+=2;goto B46cda3;
case 0x46cdab:c.instructions+=1;goto B46cdab;
case 0x46cdb0:goto L46cdb0;
case 0x46cdb4:c.instructions+=5;goto B46cdb4;
case 0x46cdba:c.instructions+=4;goto B46cdba;
case 0x46cdbb:c.instructions+=3;goto B46cdbb;
case 0x46cdc2:c.instructions+=2;goto B46cdc2;
case 0x46cdc5:c.instructions+=1;goto B46cdc5;
case 0x46cdd0:goto L46cdd0;
case 0x46cdd3:c.instructions+=9;goto B46cdd3;
case 0x46cdd4:c.instructions+=8;goto B46cdd4;
case 0x46cdd5:c.instructions+=7;goto B46cdd5;
case 0x46cdd6:c.instructions+=6;goto B46cdd6;
case 0x46cdda:c.instructions+=5;goto B46cdda;
case 0x46cddc:c.instructions+=4;goto B46cddc;
case 0x46cdde:c.instructions+=3;goto B46cdde;
case 0x46cddf:c.instructions+=2;goto B46cddf;
case 0x46cde1:c.instructions+=1;goto B46cde1;
case 0x46cde3:goto L46cde3;
case 0x46cde6:c.instructions+=2;goto B46cde6;
case 0x46cde9:c.instructions+=1;goto B46cde9;
case 0x46cdee:goto L46cdee;
case 0x46cdf0:goto L46cdf0;
case 0x46cdf4:c.instructions+=3;goto B46cdf4;
case 0x46cdf6:c.instructions+=2;goto B46cdf6;
case 0x46cdfb:c.instructions+=1;goto B46cdfb;
case 0x46cdfd:goto L46cdfd;
case 0x46cdfe:c.instructions+=1;goto B46cdfe;
case 0x46ce00:goto L46ce00;
case 0x46ce04:c.instructions+=2;goto B46ce04;
case 0x46ce0c:c.instructions+=1;goto B46ce0c;
case 0x46ce0e:goto L46ce0e;
case 0x46ce12:c.instructions+=1;goto B46ce12;
case 0x46ce1a:goto L46ce1a;
case 0x46ce1d:c.instructions+=3;goto B46ce1d;
case 0x46ce20:c.instructions+=2;goto B46ce20;
case 0x46ce23:c.instructions+=1;goto B46ce23;
case 0x46ce26:goto L46ce26;
case 0x46ce29:c.instructions+=4;goto B46ce29;
case 0x46ce2c:c.instructions+=3;goto B46ce2c;
case 0x46ce2e:c.instructions+=2;goto B46ce2e;
case 0x46ce32:c.instructions+=1;goto B46ce32;
case 0x46ce38:goto L46ce38;
case 0x46ce3c:c.instructions+=2;goto B46ce3c;
case 0x46ce3f:c.instructions+=1;goto B46ce3f;
case 0x46ce40:goto L46ce40;
case 0x46ce46:c.instructions+=2;goto B46ce46;
case 0x46ce47:c.instructions+=1;goto B46ce47;
case 0x46ce4c:goto L46ce4c;
case 0x46ce4f:c.instructions+=2;goto B46ce4f;
case 0x46ce54:c.instructions+=1;goto B46ce54;
case 0x46ce56:goto L46ce56;
case 0x46ce5b:c.instructions+=5;goto B46ce5b;
case 0x46ce5e:c.instructions+=4;goto B46ce5e;
case 0x46ce63:c.instructions+=3;goto B46ce63;
case 0x46ce64:c.instructions+=2;goto B46ce64;
case 0x46ce66:c.instructions+=1;goto B46ce66;
case 0x46ce6b:goto L46ce6b;
case 0x46ce6e:c.instructions+=2;goto B46ce6e;
case 0x46ce70:c.instructions+=1;goto B46ce70;
case 0x46ce72:goto L46ce72;
case 0x46ce75:c.instructions+=5;goto B46ce75;
case 0x46ce78:c.instructions+=4;goto B46ce78;
case 0x46ce7c:c.instructions+=3;goto B46ce7c;
case 0x46ce7d:c.instructions+=2;goto B46ce7d;
case 0x46ce7f:c.instructions+=1;goto B46ce7f;
case 0x46ce84:goto L46ce84;
case 0x46ce86:goto L46ce86;
case 0x46ce88:goto L46ce88;
case 0x46ce8b:c.instructions+=4;goto B46ce8b;
case 0x46ce8e:c.instructions+=3;goto B46ce8e;
case 0x46ce93:c.instructions+=2;goto B46ce93;
case 0x46ce96:c.instructions+=1;goto B46ce96;
case 0x46ce9a:goto L46ce9a;
case 0x46ce9c:goto L46ce9c;
case 0x46cea0:c.instructions+=7;goto B46cea0;
case 0x46cea5:c.instructions+=6;goto B46cea5;
case 0x46cea8:c.instructions+=5;goto B46cea8;
case 0x46ceac:c.instructions+=4;goto B46ceac;
case 0x46ceb0:c.instructions+=3;goto B46ceb0;
case 0x46ceb1:c.instructions+=2;goto B46ceb1;
case 0x46ceb3:c.instructions+=1;goto B46ceb3;
case 0x46ceb8:goto L46ceb8;
case 0x46cebc:c.instructions+=10;goto B46cebc;
case 0x46cebf:c.instructions+=9;goto B46cebf;
case 0x46cec3:c.instructions+=8;goto B46cec3;
case 0x46cec6:c.instructions+=7;goto B46cec6;
case 0x46ceca:c.instructions+=6;goto B46ceca;
case 0x46cece:c.instructions+=5;goto B46cece;
case 0x46cecf:c.instructions+=4;goto B46cecf;
case 0x46ced2:c.instructions+=3;goto B46ced2;
case 0x46ced4:c.instructions+=2;goto B46ced4;
case 0x46ced8:c.instructions+=1;goto B46ced8;
case 0x46cede:goto L46cede;
case 0x46cedf:c.instructions+=6;goto B46cedf;
case 0x46cee0:c.instructions+=5;goto B46cee0;
case 0x46cee1:c.instructions+=4;goto B46cee1;
case 0x46cee5:c.instructions+=3;goto B46cee5;
case 0x46cee6:c.instructions+=2;goto B46cee6;
case 0x46cee9:c.instructions+=1;goto B46cee9;
case 0x46cef0:goto L46cef0;
case 0x46cef1:c.instructions+=8;goto B46cef1;
case 0x46cef2:c.instructions+=7;goto B46cef2;
case 0x46cef3:c.instructions+=6;goto B46cef3;
case 0x46cef5:c.instructions+=5;goto B46cef5;
case 0x46cef6:c.instructions+=4;goto B46cef6;
case 0x46cef9:c.instructions+=3;goto B46cef9;
case 0x46cefb:c.instructions+=2;goto B46cefb;
case 0x46cefd:c.instructions+=1;goto B46cefd;
case 0x46ceff:goto L46ceff;
case 0x46cf01:c.instructions+=2;goto B46cf01;
case 0x46cf03:c.instructions+=1;goto B46cf03;
case 0x46cf05:goto L46cf05;
case 0x46cf0a:goto L46cf0a;
case 0x46cf0e:c.instructions+=2;goto B46cf0e;
case 0x46cf0f:c.instructions+=1;goto B46cf0f;
case 0x46cf14:goto L46cf14;
case 0x46cf17:c.instructions+=1;goto B46cf17;
case 0x46cf1c:goto L46cf1c;
case 0x46cf20:c.instructions+=4;goto B46cf20;
case 0x46cf22:c.instructions+=3;goto B46cf22;
case 0x46cf23:c.instructions+=2;goto B46cf23;
case 0x46cf24:c.instructions+=1;goto B46cf24;
case 0x46cf27:goto L46cf27;
case 0x46cf2c:goto L46cf2c;
case 0x46cf2f:c.instructions+=3;goto B46cf2f;
case 0x46cf31:c.instructions+=2;goto B46cf31;
case 0x46cf34:c.instructions+=1;goto B46cf34;
case 0x46cf36:goto L46cf36;
case 0x46cf38:c.instructions+=2;goto B46cf38;
case 0x46cf3a:c.instructions+=1;goto B46cf3a;
case 0x46cf3c:goto L46cf3c;
case 0x46cf41:goto L46cf41;
case 0x46cf45:c.instructions+=2;goto B46cf45;
case 0x46cf46:c.instructions+=1;goto B46cf46;
case 0x46cf4b:goto L46cf4b;
case 0x46cf4e:c.instructions+=1;goto B46cf4e;
case 0x46cf53:goto L46cf53;
case 0x46cf57:c.instructions+=4;goto B46cf57;
case 0x46cf59:c.instructions+=3;goto B46cf59;
case 0x46cf5a:c.instructions+=2;goto B46cf5a;
case 0x46cf5b:c.instructions+=1;goto B46cf5b;
case 0x46cf5e:goto L46cf5e;
case 0x46cf63:goto L46cf63;
case 0x46cf64:c.instructions+=6;goto B46cf64;
case 0x46cf67:c.instructions+=5;goto B46cf67;
case 0x46cf6a:c.instructions+=4;goto B46cf6a;
case 0x46cf6b:c.instructions+=3;goto B46cf6b;
case 0x46cf6c:c.instructions+=2;goto B46cf6c;
case 0x46cf6d:c.instructions+=1;goto B46cf6d;
case 0x46cf70:goto L46cf70;
case 0x46cf71:c.instructions+=10;goto B46cf71;
case 0x46cf75:c.instructions+=9;goto B46cf75;
case 0x46cf76:c.instructions+=8;goto B46cf76;
case 0x46cf77:c.instructions+=7;goto B46cf77;
case 0x46cf79:c.instructions+=6;goto B46cf79;
case 0x46cf7c:c.instructions+=5;goto B46cf7c;
case 0x46cf80:c.instructions+=4;goto B46cf80;
case 0x46cf83:c.instructions+=3;goto B46cf83;
case 0x46cf86:c.instructions+=2;goto B46cf86;
case 0x46cf88:c.instructions+=1;goto B46cf88;
case 0x46cf8e:goto L46cf8e;
case 0x46cf91:c.instructions+=5;goto B46cf91;
case 0x46cf95:c.instructions+=4;goto B46cf95;
case 0x46cf98:c.instructions+=3;goto B46cf98;
case 0x46cf9f:c.instructions+=2;goto B46cf9f;
case 0x46cfa4:c.instructions+=1;goto B46cfa4;
case 0x46cfa6:goto L46cfa6;
case 0x46cfa7:c.instructions+=3;goto B46cfa7;
case 0x46cfac:c.instructions+=2;goto B46cfac;
case 0x46cfad:c.instructions+=1;goto B46cfad;
case 0x46cfaf:goto L46cfaf;
case 0x46cfb1:c.instructions+=1;goto B46cfb1;
case 0x46cfb3:goto L46cfb3;
case 0x46cfb8:c.instructions+=1;goto B46cfb8;
case 0x46cfba:goto L46cfba;
case 0x46cfbf:goto L46cfbf;
case 0x46cfc1:c.instructions+=4;goto B46cfc1;
case 0x46cfc4:c.instructions+=3;goto B46cfc4;
case 0x46cfc7:c.instructions+=2;goto B46cfc7;
case 0x46cfc9:c.instructions+=1;goto B46cfc9;
case 0x46cfcb:goto L46cfcb;
case 0x46cfcd:c.instructions+=1;goto B46cfcd;
case 0x46cfcf:goto L46cfcf;
case 0x46cfd5:c.instructions+=1;goto B46cfd5;
case 0x46cfd7:goto L46cfd7;
case 0x46cfdc:goto L46cfdc;
case 0x46cfdf:c.instructions+=4;goto B46cfdf;
case 0x46cfe2:c.instructions+=3;goto B46cfe2;
case 0x46cfe4:c.instructions+=2;goto B46cfe4;
case 0x46cfe7:c.instructions+=1;goto B46cfe7;
case 0x46cfe9:goto L46cfe9;
case 0x46cfeb:c.instructions+=1;goto B46cfeb;
case 0x46cfed:goto L46cfed;
case 0x46cff2:c.instructions+=1;goto B46cff2;
case 0x46cff4:goto L46cff4;
case 0x46cff9:goto L46cff9;
case 0x46cffc:c.instructions+=2;goto B46cffc;
case 0x46cfff:c.instructions+=1;goto B46cfff;
default:missing_instruction(c.pc);}
B46c001:L46c001:{c.instructions+=4;NFSU2_TR(0x46c001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c004:{NFSU2_TR(0x46c004);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B46c008:{NFSU2_TR(0x46c008);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c00c:{NFSU2_TR(0x46c00c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46c011;}}
}
B46c00e:L46c00e:{c.instructions+=1;NFSU2_TR(0x46c00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c011:L46c011:{c.instructions+=3;NFSU2_TR(0x46c011);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46c013:{NFSU2_TR(0x46c013);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c017:{NFSU2_TR(0x46c017);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46c0ff;}}
}
B46c01d:L46c01d:{c.instructions+=2;NFSU2_TR(0x46c01d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46c01f:{NFSU2_TR(0x46c01f);
{goto L46c023;}
}
B46c021:L46c021:{c.instructions+=1;NFSU2_TR(0x46c021);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46c023:L46c023:{c.instructions+=6;NFSU2_TR(0x46c023);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c026:{NFSU2_TR(0x46c026);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B46c02a:{NFSU2_TR(0x46c02a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c02d:{NFSU2_TR(0x46c02d);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B46c031:{NFSU2_TR(0x46c031);
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
B46c033:{NFSU2_TR(0x46c033);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46c0e3;}}
}
B46c039:L46c039:{c.instructions+=1;NFSU2_TR(0x46c039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c03eull));
TAIL_STATIC(0x721f99u,721);
}
B46c03e:L46c03e:{c.instructions+=4;NFSU2_TR(0x46c03e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46c042:{NFSU2_TR(0x46c042);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c043:{NFSU2_TR(0x46c043);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c044:{NFSU2_TR(0x46c044);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c049ull));
TAIL_STATIC(0x722db5u,722);
}
B46c049:L46c049:{c.instructions+=2;NFSU2_TR(0x46c049);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c04c:{NFSU2_TR(0x46c04c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c051ull));
TAIL_STATIC(0x721fa7u,721);
}
B46c051:L46c051:{c.instructions+=4;NFSU2_TR(0x46c051);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c055:{NFSU2_TR(0x46c055);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46c057:{NFSU2_TR(0x46c057);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46c059:{NFSU2_TR(0x46c059);
if(r1(R+518)){{goto L46c09c;}}
}
B46c05b:L46c05b:{c.instructions+=2;NFSU2_TR(0x46c05b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46c05c:{NFSU2_TR(0x46c05c);
if(r1(R+518)){{goto L46c06e;}}
}
B46c05e:L46c05e:{c.instructions+=2;NFSU2_TR(0x46c05e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46c05f:{NFSU2_TR(0x46c05f);
if(r1(R+518)){{goto L46c09c;}}
}
B46c061:L46c061:{c.instructions+=3;NFSU2_TR(0x46c061);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c064:{NFSU2_TR(0x46c064);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0xffffffffull));
s4(u32(r4(U+8)),r4(U+12));
}
B46c06c:{NFSU2_TR(0x46c06c);
{goto L46c0e3;}
}
B46c06e:L46c06e:{c.instructions+=16;NFSU2_TR(0x46c06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c071:{NFSU2_TR(0x46c071);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B46c074:{NFSU2_TR(0x46c074);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B46c078:{NFSU2_TR(0x46c078);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46c07b:{NFSU2_TR(0x46c07b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B46c07d:{NFSU2_TR(0x46c07d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c080:{NFSU2_TR(0x46c080);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B46c083:{NFSU2_TR(0x46c083);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B46c085:{NFSU2_TR(0x46c085);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B46c087:{NFSU2_TR(0x46c087);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c08a:{NFSU2_TR(0x46c08a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c08e:{NFSU2_TR(0x46c08e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B46c091:{NFSU2_TR(0x46c091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c094:{NFSU2_TR(0x46c094);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c097:{NFSU2_TR(0x46c097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c09a:{NFSU2_TR(0x46c09a);
{goto L46c0e3;}
}
B46c09c:L46c09c:{c.instructions+=18;NFSU2_TR(0x46c09c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c0a0:{NFSU2_TR(0x46c0a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c0a7:{NFSU2_TR(0x46c0a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B46c0a9:{NFSU2_TR(0x46c0a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c0ad:{NFSU2_TR(0x46c0ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B46c0af:{NFSU2_TR(0x46c0af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c0b2:{NFSU2_TR(0x46c0b2);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B46c0b6:{NFSU2_TR(0x46c0b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46c0b8:{NFSU2_TR(0x46c0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c0bb:{NFSU2_TR(0x46c0bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46c0be:{NFSU2_TR(0x46c0be);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B46c0c0:{NFSU2_TR(0x46c0c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c0c3:{NFSU2_TR(0x46c0c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c0c7:{NFSU2_TR(0x46c0c7);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B46c0c9:{NFSU2_TR(0x46c0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c0cc:{NFSU2_TR(0x46c0cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c0d0:{NFSU2_TR(0x46c0d0);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B46c0d4:{NFSU2_TR(0x46c0d4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46c0d9;}}
}
B46c0d6:L46c0d6:{c.instructions+=1;NFSU2_TR(0x46c0d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c0d9:L46c0d9:{c.instructions+=3;NFSU2_TR(0x46c0d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c0dc:{NFSU2_TR(0x46c0dc);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B46c0e0:{NFSU2_TR(0x46c0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c0e3:L46c0e3:{c.instructions+=7;NFSU2_TR(0x46c0e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c0e7:{NFSU2_TR(0x46c0e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x66ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B46c0eb:{NFSU2_TR(0x46c0eb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B46c0ec:{NFSU2_TR(0x46c0ec);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B46c0ef:{NFSU2_TR(0x46c0ef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46c0f1:{NFSU2_TR(0x46c0f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c0f5:{NFSU2_TR(0x46c0f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46c021u);}goto L46c021;}}
}
B46c0fb:L46c0fb:{c.instructions+=1;NFSU2_TR(0x46c0fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46c0ff:L46c0ff:{c.instructions+=9;NFSU2_TR(0x46c0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c102:{NFSU2_TR(0x46c102);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c105:{NFSU2_TR(0x46c105);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c10c:{NFSU2_TR(0x46c10c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c110:{NFSU2_TR(0x46c110);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c113:{NFSU2_TR(0x46c113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c116:{NFSU2_TR(0x46c116);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c119:{NFSU2_TR(0x46c119);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46c11d:{NFSU2_TR(0x46c11d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c122ull));
TAIL_STATIC(0x721fa7u,721);
}
B46c122:L46c122:{c.instructions+=7;NFSU2_TR(0x46c122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46c123:{NFSU2_TR(0x46c123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c124:{NFSU2_TR(0x46c124);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46c125:{NFSU2_TR(0x46c125);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46c127:{NFSU2_TR(0x46c127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46c128:{NFSU2_TR(0x46c128);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xb0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xb0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xb0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46c12e:{NFSU2_TR(0x46c12e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c130:L46c130:{c.instructions+=6;NFSU2_TR(0x46c130);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xb8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xb8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46c136:{NFSU2_TR(0x46c136);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c137:{NFSU2_TR(0x46c137);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c138:{NFSU2_TR(0x46c138);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c139:{NFSU2_TR(0x46c139);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c13a:{NFSU2_TR(0x46c13a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c13full));
TAIL_STATIC(0x721f99u,721);
}
B46c13f:L46c13f:{c.instructions+=2;NFSU2_TR(0x46c13f);
w4(R+28,u32(0x82b620ull));
}
B46c144:{NFSU2_TR(0x46c144);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c148:L46c148:{c.instructions+=4;NFSU2_TR(0x46c148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B46c14a:{NFSU2_TR(0x46c14a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B46c14c:{NFSU2_TR(0x46c14c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46c14e:{NFSU2_TR(0x46c14e);
if(r1(R+518)){{goto L46c3b4;}}
}
B46c154:L46c154:{c.instructions+=2;NFSU2_TR(0x46c154);
u8 U[16];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46c15b:{NFSU2_TR(0x46c15b);
if(r1(R+518)){{goto L46c169;}}
}
B46c15d:L46c15d:{c.instructions+=3;NFSU2_TR(0x46c15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c160:{NFSU2_TR(0x46c160);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46c164:{NFSU2_TR(0x46c164);
{goto L46c3b4;}
}
B46c169:L46c169:{c.instructions+=6;NFSU2_TR(0x46c169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46c16b:{NFSU2_TR(0x46c16b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46c16d:{NFSU2_TR(0x46c16d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xfffffff8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46c175:{NFSU2_TR(0x46c175);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c179:{NFSU2_TR(0x46c179);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46c180:{NFSU2_TR(0x46c180);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46c39f;}}
}
B46c186:L46c186:{c.instructions+=3;NFSU2_TR(0x46c186);
__builtin_memmove((R+4),gp(0x82b9c8),4);
}
B46c18c:{NFSU2_TR(0x46c18c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c18d:{NFSU2_TR(0x46c18d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c192ull));
TAIL_STATIC(0x46b670u,46b);
}
B46c192:L46c192:{c.instructions+=5;NFSU2_TR(0x46c192);
__builtin_memmove((R+12),(R+0),4);
}
B46c194:{NFSU2_TR(0x46c194);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46c197:{NFSU2_TR(0x46c197);
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
B46c199:{NFSU2_TR(0x46c199);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c19d:{NFSU2_TR(0x46c19d);
if(r1(R+518)){{goto L46c263;}}
}
B46c1a3:L46c1a3:{c.instructions+=3;NFSU2_TR(0x46c1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c1a6:{NFSU2_TR(0x46c1a6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46c1a8:{NFSU2_TR(0x46c1a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46c39f;}}
}
B46c1ae:L46c1ae:{c.instructions+=3;NFSU2_TR(0x46c1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c1b1:{NFSU2_TR(0x46c1b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B46c1b4:{NFSU2_TR(0x46c1b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46c39f;}}
}
B46c1ba:L46c1ba:{c.instructions+=10;NFSU2_TR(0x46c1ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46c1be:{NFSU2_TR(0x46c1be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c1bf:{NFSU2_TR(0x46c1bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46c1c3:{NFSU2_TR(0x46c1c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c1c4:{NFSU2_TR(0x46c1c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46c1c8:{NFSU2_TR(0x46c1c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c1c9:{NFSU2_TR(0x46c1c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c1ca:{NFSU2_TR(0x46c1ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46c1cc:{NFSU2_TR(0x46c1cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c1cd:{NFSU2_TR(0x46c1cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c1d2ull));
TAIL_STATIC(0x723b1fu,723);
}
B46c1d2:L46c1d2:{c.instructions+=4;NFSU2_TR(0x46c1d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B46c1d5:{NFSU2_TR(0x46c1d5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46c1d7:{NFSU2_TR(0x46c1d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c1db:{NFSU2_TR(0x46c1db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46c238;}}
}
B46c1dd:L46c1dd:{c.instructions+=4;NFSU2_TR(0x46c1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c1e0:{NFSU2_TR(0x46c1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c1e3:{NFSU2_TR(0x46c1e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c1e4:{NFSU2_TR(0x46c1e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c1e9ull));
TAIL_STATIC(0x723a64u,723);
}
B46c1e9:L46c1e9:{c.instructions+=3;NFSU2_TR(0x46c1e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46c1ec:{NFSU2_TR(0x46c1ec);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46c1ee:{NFSU2_TR(0x46c1ee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46c1ff;}}
}
B46c1f0:L46c1f0:{c.instructions+=3;NFSU2_TR(0x46c1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c1f3:{NFSU2_TR(0x46c1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B46c1fa:{NFSU2_TR(0x46c1fa);
{goto L46c39f;}
}
B46c1ff:L46c1ff:{c.instructions+=6;NFSU2_TR(0x46c1ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c203:{NFSU2_TR(0x46c203);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46c207:{NFSU2_TR(0x46c207);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B46c20a:{NFSU2_TR(0x46c20a);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B46c20c:{NFSU2_TR(0x46c20c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46c20e:{NFSU2_TR(0x46c20e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46c216;}}
}
B46c210:L46c210:{c.instructions+=1;NFSU2_TR(0x46c210);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46c216:L46c216:{c.instructions+=5;NFSU2_TR(0x46c216);
u8 U[6];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B46c21b:{NFSU2_TR(0x46c21b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c21f:{NFSU2_TR(0x46c21f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B46c223:{NFSU2_TR(0x46c223);
{u32 ea_=u32(u32(7907656u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46c229:{NFSU2_TR(0x46c229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c22eull));
TAIL_STATIC(0x75bed4u,75b);
}
B46c22e:L46c22e:{c.instructions+=4;NFSU2_TR(0x46c22e);
__builtin_memmove((R+4),(R+20),4);
}
B46c230:{NFSU2_TR(0x46c230);
w4(R+4,u32(0-u32(r4(R+4))));
}
B46c232:{NFSU2_TR(0x46c232);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B46c234:{NFSU2_TR(0x46c234);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c238:L46c238:{c.instructions+=8;NFSU2_TR(0x46c238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c23b:{NFSU2_TR(0x46c23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c23e:{NFSU2_TR(0x46c23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c241:{NFSU2_TR(0x46c241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46c243:{NFSU2_TR(0x46c243);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c246:{NFSU2_TR(0x46c246);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c249:{NFSU2_TR(0x46c249);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c24a:{NFSU2_TR(0x46c24a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c24full));
TAIL_STATIC(0x723a1cu,723);
}
B46c24f:L46c24f:{c.instructions+=6;NFSU2_TR(0x46c24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c252:{NFSU2_TR(0x46c252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c255:{NFSU2_TR(0x46c255);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c258:{NFSU2_TR(0x46c258);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46c25b:{NFSU2_TR(0x46c25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c25e:{NFSU2_TR(0x46c25e);
{goto L46c39f;}
}
B46c263:L46c263:{c.instructions+=1;NFSU2_TR(0x46c263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c268ull));
TAIL_STATIC(0x721f99u,721);
}
B46c268:L46c268:{c.instructions+=5;NFSU2_TR(0x46c268);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c26b:{NFSU2_TR(0x46c26b);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46c26f:{NFSU2_TR(0x46c26f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c270:{NFSU2_TR(0x46c270);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c271:{NFSU2_TR(0x46c271);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c276ull));
TAIL_STATIC(0x722eceu,722);
}
B46c276:L46c276:{c.instructions+=3;NFSU2_TR(0x46c276);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c279:{NFSU2_TR(0x46c279);
__builtin_memmove((R+28),(R+0),4);
}
B46c27b:{NFSU2_TR(0x46c27b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c280ull));
TAIL_STATIC(0x721fa7u,721);
}
B46c280:L46c280:{c.instructions+=6;NFSU2_TR(0x46c280);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x66ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B46c284:{NFSU2_TR(0x46c284);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46c286:{NFSU2_TR(0x46c286);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c289:{NFSU2_TR(0x46c289);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B46c28d:{NFSU2_TR(0x46c28d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c291:{NFSU2_TR(0x46c291);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46c296;}}
}
B46c293:L46c293:{c.instructions+=1;NFSU2_TR(0x46c293);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c296:L46c296:{c.instructions+=3;NFSU2_TR(0x46c296);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46c298:{NFSU2_TR(0x46c298);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c29c:{NFSU2_TR(0x46c29c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46c395;}}
}
B46c2a2:L46c2a2:{c.instructions+=2;NFSU2_TR(0x46c2a2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46c2a4:{NFSU2_TR(0x46c2a4);
{goto L46c2b0;}
}
B46c2a6:L46c2a6:{c.instructions+=2;NFSU2_TR(0x46c2a6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46c2a8:{NFSU2_TR(0x46c2a8);
{goto L46c2b0;}
}
B46c2b0:L46c2b0:{c.instructions+=6;NFSU2_TR(0x46c2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c2b3:{NFSU2_TR(0x46c2b3);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B46c2b7:{NFSU2_TR(0x46c2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c2ba:{NFSU2_TR(0x46c2ba);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B46c2be:{NFSU2_TR(0x46c2be);
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
B46c2c0:{NFSU2_TR(0x46c2c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46c379;}}
}
B46c2c6:L46c2c6:{c.instructions+=1;NFSU2_TR(0x46c2c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c2cbull));
TAIL_STATIC(0x721f99u,721);
}
B46c2cb:L46c2cb:{c.instructions+=4;NFSU2_TR(0x46c2cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46c2cf:{NFSU2_TR(0x46c2cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c2d0:{NFSU2_TR(0x46c2d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c2d1:{NFSU2_TR(0x46c2d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c2d6ull));
TAIL_STATIC(0x722db5u,722);
}
B46c2d6:L46c2d6:{c.instructions+=2;NFSU2_TR(0x46c2d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c2d9:{NFSU2_TR(0x46c2d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c2deull));
TAIL_STATIC(0x721fa7u,721);
}
B46c2de:L46c2de:{c.instructions+=4;NFSU2_TR(0x46c2de);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c2e2:{NFSU2_TR(0x46c2e2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46c2e4:{NFSU2_TR(0x46c2e4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46c2e6:{NFSU2_TR(0x46c2e6);
if(r1(R+518)){{goto L46c329;}}
}
B46c2e8:L46c2e8:{c.instructions+=2;NFSU2_TR(0x46c2e8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46c2e9:{NFSU2_TR(0x46c2e9);
if(r1(R+518)){{goto L46c2fb;}}
}
B46c2eb:L46c2eb:{c.instructions+=2;NFSU2_TR(0x46c2eb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46c2ec:{NFSU2_TR(0x46c2ec);
if(r1(R+518)){{goto L46c329;}}
}
B46c2ee:L46c2ee:{c.instructions+=3;NFSU2_TR(0x46c2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c2f1:{NFSU2_TR(0x46c2f1);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0xffffffffull));
s4(u32(r4(U+8)),r4(U+12));
}
B46c2f9:{NFSU2_TR(0x46c2f9);
{goto L46c379;}
}
B46c2fb:L46c2fb:{c.instructions+=16;NFSU2_TR(0x46c2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c2fe:{NFSU2_TR(0x46c2fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B46c301:{NFSU2_TR(0x46c301);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B46c305:{NFSU2_TR(0x46c305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46c308:{NFSU2_TR(0x46c308);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B46c30a:{NFSU2_TR(0x46c30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c30d:{NFSU2_TR(0x46c30d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B46c310:{NFSU2_TR(0x46c310);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B46c312:{NFSU2_TR(0x46c312);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B46c314:{NFSU2_TR(0x46c314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c317:{NFSU2_TR(0x46c317);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c31b:{NFSU2_TR(0x46c31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B46c31e:{NFSU2_TR(0x46c31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c321:{NFSU2_TR(0x46c321);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c324:{NFSU2_TR(0x46c324);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c327:{NFSU2_TR(0x46c327);
{goto L46c379;}
}
B46c329:L46c329:{c.instructions+=5;NFSU2_TR(0x46c329);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c32d:{NFSU2_TR(0x46c32d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46c32f:{NFSU2_TR(0x46c32f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46c333:{NFSU2_TR(0x46c333);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c337:{NFSU2_TR(0x46c337);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46c347;}}
}
B46c339:L46c339:{c.instructions+=2;NFSU2_TR(0x46c339);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46c33b:{NFSU2_TR(0x46c33b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46c347;}}
}
B46c33d:L46c33d:{c.instructions+=3;NFSU2_TR(0x46c33d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c340:{NFSU2_TR(0x46c340);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B46c343:{NFSU2_TR(0x46c343);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c347:L46c347:{c.instructions+=12;NFSU2_TR(0x46c347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c34a:{NFSU2_TR(0x46c34a);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B46c34e:{NFSU2_TR(0x46c34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c351:{NFSU2_TR(0x46c351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46c354:{NFSU2_TR(0x46c354);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B46c356:{NFSU2_TR(0x46c356);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c359:{NFSU2_TR(0x46c359);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c35d:{NFSU2_TR(0x46c35d);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B46c35f:{NFSU2_TR(0x46c35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c362:{NFSU2_TR(0x46c362);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c366:{NFSU2_TR(0x46c366);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B46c36a:{NFSU2_TR(0x46c36a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46c36f;}}
}
B46c36c:L46c36c:{c.instructions+=1;NFSU2_TR(0x46c36c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c36f:L46c36f:{c.instructions+=3;NFSU2_TR(0x46c36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c372:{NFSU2_TR(0x46c372);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B46c376:{NFSU2_TR(0x46c376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c379:L46c379:{c.instructions+=7;NFSU2_TR(0x46c379);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c37d:{NFSU2_TR(0x46c37d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x66ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B46c381:{NFSU2_TR(0x46c381);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B46c382:{NFSU2_TR(0x46c382);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B46c385:{NFSU2_TR(0x46c385);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46c387:{NFSU2_TR(0x46c387);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c38b:{NFSU2_TR(0x46c38b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46c2a6u);}goto L46c2a6;}}
}
B46c391:L46c391:{c.instructions+=1;NFSU2_TR(0x46c391);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46c395:L46c395:{c.instructions+=3;NFSU2_TR(0x46c395);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c398:{NFSU2_TR(0x46c398);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46c39c:{NFSU2_TR(0x46c39c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c39f:L46c39f:{c.instructions+=6;NFSU2_TR(0x46c39f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c3a3:{NFSU2_TR(0x46c3a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c3a7:{NFSU2_TR(0x46c3a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c3aa:{NFSU2_TR(0x46c3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c3ad:{NFSU2_TR(0x46c3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c3b0:{NFSU2_TR(0x46c3b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46c3b4:L46c3b4:{c.instructions+=4;NFSU2_TR(0x46c3b4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B46c3b7:{NFSU2_TR(0x46c3b7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x82b680ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x82b680ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46c3bd:{NFSU2_TR(0x46c3bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c3c1:{NFSU2_TR(0x46c3c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46c148u);}goto L46c148;}}
}
B46c3c7:L46c3c7:{c.instructions+=6;NFSU2_TR(0x46c3c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46c3c8:{NFSU2_TR(0x46c3c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c3c9:{NFSU2_TR(0x46c3c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46c3ca:{NFSU2_TR(0x46c3ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46c3cb:{NFSU2_TR(0x46c3cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xb8ull))));
}
B46c3d1:{NFSU2_TR(0x46c3d1);
TAIL_STATIC(0x721fa7u,721);
}
B46c3e0:L46c3e0:{c.instructions+=5;NFSU2_TR(0x46c3e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c3e4:{NFSU2_TR(0x46c3e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c3e5:{NFSU2_TR(0x46c3e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B46c3ec:{NFSU2_TR(0x46c3ec);
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
B46c3ee:{NFSU2_TR(0x46c3ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46c3f7;}}
}
B46c3f0:L46c3f0:{c.instructions+=3;NFSU2_TR(0x46c3f0);
w4(R+0,u32(0xfffffff8ull));
}
B46c3f5:{NFSU2_TR(0x46c3f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c3f6:{NFSU2_TR(0x46c3f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c3f7:L46c3f7:{c.instructions+=3;NFSU2_TR(0x46c3f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46c3fa:{NFSU2_TR(0x46c3fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46c3fc:{NFSU2_TR(0x46c3fc);
if(r1(R+518)){{goto L46c408;}}
}
B46c3fe:L46c3fe:{c.instructions+=2;NFSU2_TR(0x46c3fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c400:{NFSU2_TR(0x46c400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c405ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46c130u);}goto L46c130;}
}
B46c405:L46c405:{c.instructions+=1;NFSU2_TR(0x46c405);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46c408:L46c408:{c.instructions+=9;NFSU2_TR(0x46c408);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c40b:{NFSU2_TR(0x46c40b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c40f:{NFSU2_TR(0x46c40f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B46c411:{NFSU2_TR(0x46c411);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c414:{NFSU2_TR(0x46c414);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c418:{NFSU2_TR(0x46c418);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B46c41a:{NFSU2_TR(0x46c41a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c41d:{NFSU2_TR(0x46c41d);
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
B46c41f:{NFSU2_TR(0x46c41f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46c424;}}
}
B46c421:L46c421:{c.instructions+=1;NFSU2_TR(0x46c421);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c424:L46c424:{c.instructions+=2;NFSU2_TR(0x46c424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c425:{NFSU2_TR(0x46c425);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c430:L46c430:{c.instructions+=5;NFSU2_TR(0x46c430);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c431:{NFSU2_TR(0x46c431);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46c435:{NFSU2_TR(0x46c435);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B46c43c:{NFSU2_TR(0x46c43c);
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
B46c43e:{NFSU2_TR(0x46c43e);
if(r1(R+518)){{goto L46c45d;}}
}
B46c440:L46c440:{c.instructions+=3;NFSU2_TR(0x46c440);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x65ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B46c443:{NFSU2_TR(0x46c443);
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
B46c445:{NFSU2_TR(0x46c445);
if(r1(R+518)){{goto L46c451;}}
}
B46c447:L46c447:{c.instructions+=2;NFSU2_TR(0x46c447);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c449:{NFSU2_TR(0x46c449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c44eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46c130u);}goto L46c130;}
}
B46c44e:L46c44e:{c.instructions+=1;NFSU2_TR(0x46c44e);
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
B46c451:L46c451:{c.instructions+=4;NFSU2_TR(0x46c451);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B46c458:{NFSU2_TR(0x46c458);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c45b:{NFSU2_TR(0x46c45b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c45c:{NFSU2_TR(0x46c45c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c45d:L46c45d:{c.instructions+=3;NFSU2_TR(0x46c45d);
w4(R+0,u32(0xfffffff8ull));
}
B46c462:{NFSU2_TR(0x46c462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c463:{NFSU2_TR(0x46c463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c470:L46c470:{c.instructions+=6;NFSU2_TR(0x46c470);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c474:{NFSU2_TR(0x46c474);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c475:{NFSU2_TR(0x46c475);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B46c47c:{NFSU2_TR(0x46c47c);
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
B46c47e:{NFSU2_TR(0x46c47e);
w4(R+0,u32(0xfffffff8ull));
}
B46c483:{NFSU2_TR(0x46c483);
if(r1(R+518)){{goto L46c4f1;}}
}
B46c485:L46c485:{c.instructions+=6;NFSU2_TR(0x46c485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46c487:{NFSU2_TR(0x46c487);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c488:{NFSU2_TR(0x46c488);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c489:{NFSU2_TR(0x46c489);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c48a:{NFSU2_TR(0x46c48a);
__builtin_memmove((R+4),gp(0x82b9c8),4);
}
B46c490:{NFSU2_TR(0x46c490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c495ull));
TAIL_STATIC(0x46b670u,46b);
}
B46c495:L46c495:{c.instructions+=4;NFSU2_TR(0x46c495);
__builtin_memmove((R+12),(R+0),4);
}
B46c497:{NFSU2_TR(0x46c497);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46c49a:{NFSU2_TR(0x46c49a);
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
B46c49c:{NFSU2_TR(0x46c49c);
if(r1(R+518)){{goto L46c4c8;}}
}
B46c49e:L46c49e:{c.instructions+=1;NFSU2_TR(0x46c49e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c4a3ull));
TAIL_STATIC(0x721f99u,721);
}
B46c4a3:L46c4a3:{c.instructions+=7;NFSU2_TR(0x46c4a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46c4a7:{NFSU2_TR(0x46c4a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c4ab:{NFSU2_TR(0x46c4ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46c4ad:{NFSU2_TR(0x46c4ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c4ae:{NFSU2_TR(0x46c4ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c4af:{NFSU2_TR(0x46c4af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c4b0:{NFSU2_TR(0x46c4b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c4b5ull));
TAIL_STATIC(0x723bc1u,723);
}
B46c4b5:L46c4b5:{c.instructions+=3;NFSU2_TR(0x46c4b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46c4b8:{NFSU2_TR(0x46c4b8);
__builtin_memmove((R+12),(R+0),4);
}
B46c4ba:{NFSU2_TR(0x46c4ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c4bfull));
TAIL_STATIC(0x721fa7u,721);
}
B46c4bf:L46c4bf:{c.instructions+=6;NFSU2_TR(0x46c4bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c4c2:{NFSU2_TR(0x46c4c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46c4c3:{NFSU2_TR(0x46c4c3);
__builtin_memmove((R+0),(R+12),4);
}
B46c4c5:{NFSU2_TR(0x46c4c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46c4c6:{NFSU2_TR(0x46c4c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c4c7:{NFSU2_TR(0x46c4c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c4c8:L46c4c8:{c.instructions+=1;NFSU2_TR(0x46c4c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c4cdull));
TAIL_STATIC(0x721f99u,721);
}
B46c4cd:L46c4cd:{c.instructions+=7;NFSU2_TR(0x46c4cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46c4d1:{NFSU2_TR(0x46c4d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c4d5:{NFSU2_TR(0x46c4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c4d8:{NFSU2_TR(0x46c4d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c4d9:{NFSU2_TR(0x46c4d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c4da:{NFSU2_TR(0x46c4da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c4db:{NFSU2_TR(0x46c4db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c4e0ull));
TAIL_STATIC(0x722fd0u,722);
}
B46c4e0:L46c4e0:{c.instructions+=3;NFSU2_TR(0x46c4e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46c4e3:{NFSU2_TR(0x46c4e3);
__builtin_memmove((R+12),(R+0),4);
}
B46c4e5:{NFSU2_TR(0x46c4e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c4eaull));
TAIL_STATIC(0x721fa7u,721);
}
B46c4ea:L46c4ea:{c.instructions+=4;NFSU2_TR(0x46c4ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c4ed:{NFSU2_TR(0x46c4ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46c4ee:{NFSU2_TR(0x46c4ee);
__builtin_memmove((R+0),(R+12),4);
}
B46c4f0:{NFSU2_TR(0x46c4f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46c4f1:L46c4f1:{c.instructions+=2;NFSU2_TR(0x46c4f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c4f2:{NFSU2_TR(0x46c4f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c500:L46c500:{c.instructions+=7;NFSU2_TR(0x46c500);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c504:{NFSU2_TR(0x46c504);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c505:{NFSU2_TR(0x46c505);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c506:{NFSU2_TR(0x46c506);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B46c50d:{NFSU2_TR(0x46c50d);
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
B46c50f:{NFSU2_TR(0x46c50f);
w4(R+12,u32(0xfffffff8ull));
}
B46c514:{NFSU2_TR(0x46c514);
if(r1(R+518)){{goto L46c575;}}
}
B46c516:L46c516:{c.instructions+=6;NFSU2_TR(0x46c516);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46c518:{NFSU2_TR(0x46c518);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c519:{NFSU2_TR(0x46c519);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c51a:{NFSU2_TR(0x46c51a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c51b:{NFSU2_TR(0x46c51b);
__builtin_memmove((R+4),gp(0x82b9c8),4);
}
B46c521:{NFSU2_TR(0x46c521);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c526ull));
TAIL_STATIC(0x46b670u,46b);
}
B46c526:L46c526:{c.instructions+=4;NFSU2_TR(0x46c526);
__builtin_memmove((R+20),(R+0),4);
}
B46c528:{NFSU2_TR(0x46c528);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46c52b:{NFSU2_TR(0x46c52b);
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
B46c52d:{NFSU2_TR(0x46c52d);
if(r1(R+518)){{goto L46c555;}}
}
B46c52f:L46c52f:{c.instructions+=1;NFSU2_TR(0x46c52f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c534ull));
TAIL_STATIC(0x721f99u,721);
}
B46c534:L46c534:{c.instructions+=5;NFSU2_TR(0x46c534);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46c538:{NFSU2_TR(0x46c538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46c53a:{NFSU2_TR(0x46c53a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c53b:{NFSU2_TR(0x46c53b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c53c:{NFSU2_TR(0x46c53c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c541ull));
TAIL_STATIC(0x723c41u,723);
}
B46c541:L46c541:{c.instructions+=3;NFSU2_TR(0x46c541);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c544:{NFSU2_TR(0x46c544);
__builtin_memmove((R+12),(R+0),4);
}
B46c546:{NFSU2_TR(0x46c546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c54bull));
TAIL_STATIC(0x721fa7u,721);
}
B46c54b:L46c54b:{c.instructions+=7;NFSU2_TR(0x46c54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c54e:{NFSU2_TR(0x46c54e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46c54f:{NFSU2_TR(0x46c54f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46c550:{NFSU2_TR(0x46c550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c551:{NFSU2_TR(0x46c551);
__builtin_memmove((R+0),(R+12),4);
}
B46c553:{NFSU2_TR(0x46c553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46c554:{NFSU2_TR(0x46c554);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c555:L46c555:{c.instructions+=1;NFSU2_TR(0x46c555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c55aull));
TAIL_STATIC(0x721f99u,721);
}
B46c55a:L46c55a:{c.instructions+=5;NFSU2_TR(0x46c55a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46c55e:{NFSU2_TR(0x46c55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c561:{NFSU2_TR(0x46c561);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c562:{NFSU2_TR(0x46c562);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c563:{NFSU2_TR(0x46c563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c568ull));
TAIL_STATIC(0x723070u,723);
}
B46c568:L46c568:{c.instructions+=2;NFSU2_TR(0x46c568);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c56b:{NFSU2_TR(0x46c56b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c570ull));
TAIL_STATIC(0x721fa7u,721);
}
B46c570:L46c570:{c.instructions+=3;NFSU2_TR(0x46c570);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c573:{NFSU2_TR(0x46c573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46c574:{NFSU2_TR(0x46c574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46c575:L46c575:{c.instructions+=4;NFSU2_TR(0x46c575);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c576:{NFSU2_TR(0x46c576);
__builtin_memmove((R+0),(R+12),4);
}
B46c578:{NFSU2_TR(0x46c578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46c579:{NFSU2_TR(0x46c579);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c600:L46c600:{c.instructions+=9;NFSU2_TR(0x46c600);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c604:{NFSU2_TR(0x46c604);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c605:{NFSU2_TR(0x46c605);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c606:{NFSU2_TR(0x46c606);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B46c60d:{NFSU2_TR(0x46c60d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46c60f:{NFSU2_TR(0x46c60f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c610:{NFSU2_TR(0x46c610);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c611:{NFSU2_TR(0x46c611);
__builtin_memmove((R+4),gp(0x82b9c8),4);
}
B46c617:{NFSU2_TR(0x46c617);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c61cull));
TAIL_STATIC(0x46b670u,46b);
}
B46c61c:L46c61c:{c.instructions+=4;NFSU2_TR(0x46c61c);
__builtin_memmove((R+12),(R+0),4);
}
B46c61e:{NFSU2_TR(0x46c61e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c622:{NFSU2_TR(0x46c622);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46c624:{NFSU2_TR(0x46c624);
if(r1(R+518)){{goto L46c631;}}
}
B46c626:L46c626:{c.instructions+=4;NFSU2_TR(0x46c626);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B46c62a:{NFSU2_TR(0x46c62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c62d:{NFSU2_TR(0x46c62d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46c62f:{NFSU2_TR(0x46c62f);
{goto L46c635;}
}
B46c631:L46c631:{c.instructions+=1;NFSU2_TR(0x46c631);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B46c635:L46c635:{c.instructions+=3;NFSU2_TR(0x46c635);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46c638:{NFSU2_TR(0x46c638);
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
B46c63a:{NFSU2_TR(0x46c63a);
if(r1(R+518)){{goto L46c663;}}
}
B46c63c:L46c63c:{c.instructions+=1;NFSU2_TR(0x46c63c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c641ull));
TAIL_STATIC(0x721f99u,721);
}
B46c641:L46c641:{c.instructions+=6;NFSU2_TR(0x46c641);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c644:{NFSU2_TR(0x46c644);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c647:{NFSU2_TR(0x46c647);
w4(R+0,u32(r2(R+28)));
}
B46c64a:{NFSU2_TR(0x46c64a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c64b:{NFSU2_TR(0x46c64b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c64c:{NFSU2_TR(0x46c64c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c651ull));
TAIL_STATIC(0x723d9bu,723);
}
B46c651:L46c651:{c.instructions+=2;NFSU2_TR(0x46c651);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c654:{NFSU2_TR(0x46c654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c659ull));
TAIL_STATIC(0x721fa7u,721);
}
B46c659:L46c659:{c.instructions+=6;NFSU2_TR(0x46c659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46c65a:{NFSU2_TR(0x46c65a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46c65e:{NFSU2_TR(0x46c65e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c65f:{NFSU2_TR(0x46c65f);
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
B46c661:{NFSU2_TR(0x46c661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46c662:{NFSU2_TR(0x46c662);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c663:L46c663:{c.instructions+=1;NFSU2_TR(0x46c663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c668ull));
TAIL_STATIC(0x721f99u,721);
}
B46c668:L46c668:{c.instructions+=5;NFSU2_TR(0x46c668);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c66b:{NFSU2_TR(0x46c66b);
w4(R+0,u32(r2(R+28)));
}
B46c66e:{NFSU2_TR(0x46c66e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c66f:{NFSU2_TR(0x46c66f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c670:{NFSU2_TR(0x46c670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c675ull));
TAIL_STATIC(0x7230a7u,723);
}
B46c675:L46c675:{c.instructions+=2;NFSU2_TR(0x46c675);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c678:{NFSU2_TR(0x46c678);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c67dull));
TAIL_STATIC(0x721fa7u,721);
}
B46c67d:L46c67d:{c.instructions+=6;NFSU2_TR(0x46c67d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46c67e:{NFSU2_TR(0x46c67e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46c682:{NFSU2_TR(0x46c682);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c683:{NFSU2_TR(0x46c683);
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
B46c685:{NFSU2_TR(0x46c685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46c686:{NFSU2_TR(0x46c686);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c690:L46c690:{c.instructions+=7;NFSU2_TR(0x46c690);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c694:{NFSU2_TR(0x46c694);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c695:{NFSU2_TR(0x46c695);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B46c69c:{NFSU2_TR(0x46c69c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46c69e:{NFSU2_TR(0x46c69e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c69f:{NFSU2_TR(0x46c69f);
__builtin_memmove((R+4),gp(0x82b9c8),4);
}
B46c6a5:{NFSU2_TR(0x46c6a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c6aaull));
TAIL_STATIC(0x46b670u,46b);
}
B46c6aa:L46c6aa:{c.instructions+=3;NFSU2_TR(0x46c6aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B46c6ad:{NFSU2_TR(0x46c6ad);
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
B46c6af:{NFSU2_TR(0x46c6af);
if(r1(R+518)){{goto L46c6d2;}}
}
B46c6b1:L46c6b1:{c.instructions+=1;NFSU2_TR(0x46c6b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c6b6ull));
TAIL_STATIC(0x721f99u,721);
}
B46c6b6:L46c6b6:{c.instructions+=4;NFSU2_TR(0x46c6b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c6b9:{NFSU2_TR(0x46c6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c6bc:{NFSU2_TR(0x46c6bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c6bd:{NFSU2_TR(0x46c6bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c6c2ull));
TAIL_STATIC(0x723e1eu,723);
}
B46c6c2:L46c6c2:{c.instructions+=2;NFSU2_TR(0x46c6c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46c6c5:{NFSU2_TR(0x46c6c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c6caull));
TAIL_STATIC(0x721fa7u,721);
}
B46c6ca:L46c6ca:{c.instructions+=4;NFSU2_TR(0x46c6ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46c6ce:{NFSU2_TR(0x46c6ce);
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
B46c6d0:{NFSU2_TR(0x46c6d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c6d1:{NFSU2_TR(0x46c6d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c6d2:L46c6d2:{c.instructions+=3;NFSU2_TR(0x46c6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c6d5:{NFSU2_TR(0x46c6d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c6d6:{NFSU2_TR(0x46c6d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c6dbull));
TAIL_STATIC(0x7227cbu,722);
}
B46c6db:L46c6db:{c.instructions+=5;NFSU2_TR(0x46c6db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46c6de:{NFSU2_TR(0x46c6de);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46c6e2:{NFSU2_TR(0x46c6e2);
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
B46c6e4:{NFSU2_TR(0x46c6e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c6e5:{NFSU2_TR(0x46c6e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c6f0:L46c6f0:{c.instructions+=9;NFSU2_TR(0x46c6f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B46c6f3:{NFSU2_TR(0x46c6f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c6f4:{NFSU2_TR(0x46c6f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c6f5:{NFSU2_TR(0x46c6f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c6f6:{NFSU2_TR(0x46c6f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c6f7:{NFSU2_TR(0x46c6f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46c6fb:{NFSU2_TR(0x46c6fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c6fc:{NFSU2_TR(0x46c6fc);
__builtin_memmove((R+28),(R+4),4);
}
B46c6fe:{NFSU2_TR(0x46c6fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c703ull));
TAIL_STATIC(0x721a6bu,721);
}
B46c703:L46c703:{c.instructions+=8;NFSU2_TR(0x46c703);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c707:{NFSU2_TR(0x46c707);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c70b:{NFSU2_TR(0x46c70b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c70c:{NFSU2_TR(0x46c70c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46c70e:{NFSU2_TR(0x46c70e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c70f:{NFSU2_TR(0x46c70f);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x64ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46c714:{NFSU2_TR(0x46c714);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46c718:{NFSU2_TR(0x46c718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c71dull));
TAIL_STATIC(0x721d90u,721);
}
B46c71d:L46c71d:{c.instructions+=7;NFSU2_TR(0x46c71d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46c721:{NFSU2_TR(0x46c721);
__builtin_memmove((R+24),(R+0),4);
}
B46c723:{NFSU2_TR(0x46c723);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B46c725:{NFSU2_TR(0x46c725);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c728:{NFSU2_TR(0x46c728);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B46c72d:{NFSU2_TR(0x46c72d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c72e:{NFSU2_TR(0x46c72e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c733ull));
TAIL_STATIC(0x43e910u,43e);
}
B46c733:L46c733:{c.instructions+=4;NFSU2_TR(0x46c733);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46c739:{NFSU2_TR(0x46c739);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B46c73c:{NFSU2_TR(0x46c73c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46c73e:{NFSU2_TR(0x46c73e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46c75b;}}
}
B46c740:L46c740:{c.instructions+=6;NFSU2_TR(0x46c740);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B46c746:{NFSU2_TR(0x46c746);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B46c749:{NFSU2_TR(0x46c749);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B46c74f:{NFSU2_TR(0x46c74f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c750:{NFSU2_TR(0x46c750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c751:{NFSU2_TR(0x46c751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c756ull));
TAIL_STATIC(0x440820u,440);
}
B46c756:L46c756:{c.instructions+=2;NFSU2_TR(0x46c756);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c759:{NFSU2_TR(0x46c759);
__builtin_memmove((R+12),(R+0),4);
}
B46c75b:L46c75b:{c.instructions+=15;NFSU2_TR(0x46c75b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c75f:{NFSU2_TR(0x46c75f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46c763:{NFSU2_TR(0x46c763);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c764:{NFSU2_TR(0x46c764);
__builtin_memmove((R+0),(R+12),4);
}
B46c766:{NFSU2_TR(0x46c766);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B46c768:{NFSU2_TR(0x46c768);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c769:{NFSU2_TR(0x46c769);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B46c76b:{NFSU2_TR(0x46c76b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c76c:{NFSU2_TR(0x46c76c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c76f:{NFSU2_TR(0x46c76f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c773:{NFSU2_TR(0x46c773);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c774:{NFSU2_TR(0x46c774);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c775:{NFSU2_TR(0x46c775);
__builtin_memmove((R+4),(R+28),4);
}
B46c777:{NFSU2_TR(0x46c777);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c77a:{NFSU2_TR(0x46c77a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c77full));
TAIL_STATIC(0x45a4e0u,45a);
}
B46c77f:L46c77f:{c.instructions+=6;NFSU2_TR(0x46c77f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46c780:{NFSU2_TR(0x46c780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c781:{NFSU2_TR(0x46c781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46c782:{NFSU2_TR(0x46c782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46c783:{NFSU2_TR(0x46c783);
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
B46c786:{NFSU2_TR(0x46c786);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c790:L46c790:{c.instructions+=4;NFSU2_TR(0x46c790);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46c793:{NFSU2_TR(0x46c793);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c794:{NFSU2_TR(0x46c794);
__builtin_memmove((R+24),(R+4),4);
}
B46c796:{NFSU2_TR(0x46c796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c79bull));
TAIL_STATIC(0x721f99u,721);
}
B46c79b:L46c79b:{c.instructions+=5;NFSU2_TR(0x46c79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c79e:{NFSU2_TR(0x46c79e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46c7a2:{NFSU2_TR(0x46c7a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c7a3:{NFSU2_TR(0x46c7a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c7a4:{NFSU2_TR(0x46c7a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c7a9ull));
TAIL_STATIC(0x722eceu,722);
}
B46c7a9:L46c7a9:{c.instructions+=2;NFSU2_TR(0x46c7a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c7ac:{NFSU2_TR(0x46c7ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c7b1ull));
TAIL_STATIC(0x721fa7u,721);
}
B46c7b1:L46c7b1:{c.instructions+=4;NFSU2_TR(0x46c7b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c7b5:{NFSU2_TR(0x46c7b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46c7b7:{NFSU2_TR(0x46c7b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c7b8:{NFSU2_TR(0x46c7b8);
if(r1(R+518)){{goto L46c7f4;}}
}
B46c7ba:L46c7ba:{c.instructions+=2;NFSU2_TR(0x46c7ba);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46c7bd:{NFSU2_TR(0x46c7bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46c7fa;}}
}
B46c7bf:L46c7bf:{c.instructions+=1;NFSU2_TR(0x46c7bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c7c4ull));
TAIL_STATIC(0x721f99u,721);
}
B46c7c4:L46c7c4:{c.instructions+=5;NFSU2_TR(0x46c7c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c7c8:{NFSU2_TR(0x46c7c8);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46c7cc:{NFSU2_TR(0x46c7cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c7cd:{NFSU2_TR(0x46c7cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c7ce:{NFSU2_TR(0x46c7ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c7d3ull));
TAIL_STATIC(0x722db5u,722);
}
B46c7d3:L46c7d3:{c.instructions+=2;NFSU2_TR(0x46c7d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c7d6:{NFSU2_TR(0x46c7d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c7dbull));
TAIL_STATIC(0x721fa7u,721);
}
B46c7db:L46c7db:{c.instructions+=3;NFSU2_TR(0x46c7db);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c7df:{NFSU2_TR(0x46c7df);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46c7e2:{NFSU2_TR(0x46c7e2);
if(r1(R+518)){{goto L46c7f4;}}
}
B46c7e4:L46c7e4:{c.instructions+=2;NFSU2_TR(0x46c7e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46c7e6:{NFSU2_TR(0x46c7e6);
if(r1(R+518)){{goto L46c7fa;}}
}
B46c7e8:L46c7e8:{c.instructions+=2;NFSU2_TR(0x46c7e8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46c7eb:{NFSU2_TR(0x46c7eb);
if(r1(R+518)){{goto L46c7fa;}}
}
B46c7ed:L46c7ed:{c.instructions+=2;NFSU2_TR(0x46c7ed);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x64ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B46c7f2:{NFSU2_TR(0x46c7f2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46c7fa;}}
}
B46c7f4:L46c7f4:{c.instructions+=3;NFSU2_TR(0x46c7f4);
w1(R+0,u8(0x1ull));
}
B46c7f6:{NFSU2_TR(0x46c7f6);
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
B46c7f9:{NFSU2_TR(0x46c7f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c7fa:L46c7fa:{c.instructions+=3;NFSU2_TR(0x46c7fa);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B46c7fc:{NFSU2_TR(0x46c7fc);
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
B46c7ff:{NFSU2_TR(0x46c7ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c800:L46c800:{c.instructions+=4;NFSU2_TR(0x46c800);
u8 U[10];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B46c805:{NFSU2_TR(0x46c805);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c806:{NFSU2_TR(0x46c806);
__builtin_memmove((R+24),(R+4),4);
}
B46c808:{NFSU2_TR(0x46c808);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46c81d;}}
}
B46c80a:L46c80a:{c.instructions+=4;NFSU2_TR(0x46c80a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c80e:{NFSU2_TR(0x46c80e);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c813:{NFSU2_TR(0x46c813);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c814:{NFSU2_TR(0x46c814);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c819ull));
TAIL_STATIC(0x45a5a0u,45a);
}
B46c819:L46c819:{c.instructions+=2;NFSU2_TR(0x46c819);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c81a:{NFSU2_TR(0x46c81a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c81d:L46c81d:{c.instructions+=3;NFSU2_TR(0x46c81d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c821:{NFSU2_TR(0x46c821);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c824:{NFSU2_TR(0x46c824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c829ull));
TAIL_STATIC(0x721f99u,721);
}
B46c829:L46c829:{c.instructions+=8;NFSU2_TR(0x46c829);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46c82c:{NFSU2_TR(0x46c82c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c82f:{NFSU2_TR(0x46c82f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c830:{NFSU2_TR(0x46c830);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46c836:{NFSU2_TR(0x46c836);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46c839:{NFSU2_TR(0x46c839);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c83b:{NFSU2_TR(0x46c83b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c83c:{NFSU2_TR(0x46c83c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c841ull));
TAIL_STATIC(0x723e9du,723);
}
B46c841:L46c841:{c.instructions+=3;NFSU2_TR(0x46c841);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46c844:{NFSU2_TR(0x46c844);
__builtin_memmove((R+24),(R+0),4);
}
B46c846:{NFSU2_TR(0x46c846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c84bull));
TAIL_STATIC(0x721fa7u,721);
}
B46c84b:L46c84b:{c.instructions+=3;NFSU2_TR(0x46c84b);
__builtin_memmove((R+0),(R+24),4);
}
B46c84d:{NFSU2_TR(0x46c84d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c84e:{NFSU2_TR(0x46c84e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c860:L46c860:{c.instructions+=4;NFSU2_TR(0x46c860);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c861:{NFSU2_TR(0x46c861);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c862:{NFSU2_TR(0x46c862);
__builtin_memmove((R+24),(R+4),4);
}
B46c864:{NFSU2_TR(0x46c864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c869ull));
TAIL_STATIC(0x45a9b0u,45a);
}
B46c869:L46c869:{c.instructions+=4;NFSU2_TR(0x46c869);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c86c:{NFSU2_TR(0x46c86c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46c86d:{NFSU2_TR(0x46c86d);
w4(R+28,u32(0x0ull));
}
B46c872:{NFSU2_TR(0x46c872);
if(r1(R+518)){{goto L46c879;}}
}
B46c874:L46c874:{c.instructions+=2;NFSU2_TR(0x46c874);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46c875:{NFSU2_TR(0x46c875);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46c899;}}
}
B46c877:L46c877:{c.instructions+=1;NFSU2_TR(0x46c877);
{goto L46c889;}
}
B46c879:L46c879:{c.instructions+=3;NFSU2_TR(0x46c879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c87c:{NFSU2_TR(0x46c87c);
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
B46c87e:{NFSU2_TR(0x46c87e);
if(r1(R+518)){{goto L46c889;}}
}
B46c880:L46c880:{c.instructions+=3;NFSU2_TR(0x46c880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46c882:{NFSU2_TR(0x46c882);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c884:{NFSU2_TR(0x46c884);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c886ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B46c886:L46c886:{c.instructions+=1;NFSU2_TR(0x46c886);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c889:L46c889:{c.instructions+=3;NFSU2_TR(0x46c889);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c88c:{NFSU2_TR(0x46c88c);
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
B46c88e:{NFSU2_TR(0x46c88e);
if(r1(R+518)){{goto L46c899;}}
}
B46c890:L46c890:{c.instructions+=3;NFSU2_TR(0x46c890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46c892:{NFSU2_TR(0x46c892);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c894:{NFSU2_TR(0x46c894);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c896ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B46c896:L46c896:{c.instructions+=1;NFSU2_TR(0x46c896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c899:L46c899:{c.instructions+=3;NFSU2_TR(0x46c899);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c89c:{NFSU2_TR(0x46c89c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46c89e:{NFSU2_TR(0x46c89e);
if(r1(R+518)){{goto L46c8ac;}}
}
B46c8a0:L46c8a0:{c.instructions+=2;NFSU2_TR(0x46c8a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c8a1:{NFSU2_TR(0x46c8a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c8a6ull));
TAIL_STATIC(0x440540u,440);
}
B46c8a6:L46c8a6:{c.instructions+=2;NFSU2_TR(0x46c8a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46c8a9:{NFSU2_TR(0x46c8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c8ac:L46c8ac:{c.instructions+=3;NFSU2_TR(0x46c8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c8af:{NFSU2_TR(0x46c8af);
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
B46c8b1:{NFSU2_TR(0x46c8b1);
if(r1(R+518)){{goto L46c8bc;}}
}
B46c8b3:L46c8b3:{c.instructions+=3;NFSU2_TR(0x46c8b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46c8b5:{NFSU2_TR(0x46c8b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c8b7:{NFSU2_TR(0x46c8b7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c8b9ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B46c8b9:L46c8b9:{c.instructions+=1;NFSU2_TR(0x46c8b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c8bc:L46c8bc:{c.instructions+=3;NFSU2_TR(0x46c8bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c8bf:{NFSU2_TR(0x46c8bf);
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
B46c8c1:{NFSU2_TR(0x46c8c1);
if(r1(R+518)){{goto L46c8cc;}}
}
B46c8c3:L46c8c3:{c.instructions+=3;NFSU2_TR(0x46c8c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46c8c5:{NFSU2_TR(0x46c8c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c8c7:{NFSU2_TR(0x46c8c7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c8c9ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B46c8c9:L46c8c9:{c.instructions+=1;NFSU2_TR(0x46c8c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46c8cc:L46c8cc:{c.instructions+=3;NFSU2_TR(0x46c8cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46c8cd:{NFSU2_TR(0x46c8cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c8ce:{NFSU2_TR(0x46c8ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c8d0:L46c8d0:{c.instructions+=5;NFSU2_TR(0x46c8d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c8d1:{NFSU2_TR(0x46c8d1);
__builtin_memmove((R+24),(R+4),4);
}
B46c8d3:{NFSU2_TR(0x46c8d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c8d6:{NFSU2_TR(0x46c8d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46c8d8:{NFSU2_TR(0x46c8d8);
if(r1(R+518)){{goto L46c901;}}
}
B46c8da:L46c8da:{c.instructions+=6;NFSU2_TR(0x46c8da);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46c8de:{NFSU2_TR(0x46c8de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c8e1:{NFSU2_TR(0x46c8e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c8e2:{NFSU2_TR(0x46c8e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46c8e5:{NFSU2_TR(0x46c8e5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46c8e8:{NFSU2_TR(0x46c8e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c8edull));
TAIL_STATIC(0x721f99u,721);
}
B46c8ed:L46c8ed:{c.instructions+=4;NFSU2_TR(0x46c8ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c8f0:{NFSU2_TR(0x46c8f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c8f2:{NFSU2_TR(0x46c8f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c8f3:{NFSU2_TR(0x46c8f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c8f8ull));
TAIL_STATIC(0x7230a7u,723);
}
B46c8f8:L46c8f8:{c.instructions+=2;NFSU2_TR(0x46c8f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c8fb:{NFSU2_TR(0x46c8fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c900ull));
TAIL_STATIC(0x721fa7u,721);
}
B46c900:L46c900:{c.instructions+=1;NFSU2_TR(0x46c900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46c901:L46c901:{c.instructions+=3;NFSU2_TR(0x46c901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c904:{NFSU2_TR(0x46c904);
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
B46c906:{NFSU2_TR(0x46c906);
if(r1(R+518)){{goto L46c92e;}}
}
B46c908:L46c908:{c.instructions+=5;NFSU2_TR(0x46c908);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46c90c:{NFSU2_TR(0x46c90c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c90f:{NFSU2_TR(0x46c90f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46c912:{NFSU2_TR(0x46c912);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46c915:{NFSU2_TR(0x46c915);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c91aull));
TAIL_STATIC(0x721f99u,721);
}
B46c91a:L46c91a:{c.instructions+=4;NFSU2_TR(0x46c91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c91d:{NFSU2_TR(0x46c91d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c91f:{NFSU2_TR(0x46c91f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c920:{NFSU2_TR(0x46c920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c925ull));
TAIL_STATIC(0x7230a7u,723);
}
B46c925:L46c925:{c.instructions+=3;NFSU2_TR(0x46c925);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c928:{NFSU2_TR(0x46c928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c929:{NFSU2_TR(0x46c929);
TAIL_STATIC(0x721fa7u,721);
}
B46c92e:L46c92e:{c.instructions+=2;NFSU2_TR(0x46c92e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c92f:{NFSU2_TR(0x46c92f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c930:L46c930:{c.instructions+=5;NFSU2_TR(0x46c930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c931:{NFSU2_TR(0x46c931);
__builtin_memmove((R+24),(R+4),4);
}
B46c933:{NFSU2_TR(0x46c933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c936:{NFSU2_TR(0x46c936);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46c938:{NFSU2_TR(0x46c938);
if(r1(R+518)){{goto L46c964;}}
}
B46c93a:L46c93a:{c.instructions+=6;NFSU2_TR(0x46c93a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46c93e:{NFSU2_TR(0x46c93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c941:{NFSU2_TR(0x46c941);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c942:{NFSU2_TR(0x46c942);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46c945:{NFSU2_TR(0x46c945);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46c948:{NFSU2_TR(0x46c948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c94dull));
TAIL_STATIC(0x721f99u,721);
}
B46c94d:L46c94d:{c.instructions+=4;NFSU2_TR(0x46c94d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c950:{NFSU2_TR(0x46c950);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c955:{NFSU2_TR(0x46c955);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c956:{NFSU2_TR(0x46c956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c95bull));
TAIL_STATIC(0x7230a7u,723);
}
B46c95b:L46c95b:{c.instructions+=2;NFSU2_TR(0x46c95b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c95e:{NFSU2_TR(0x46c95e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c963ull));
TAIL_STATIC(0x721fa7u,721);
}
B46c963:L46c963:{c.instructions+=1;NFSU2_TR(0x46c963);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46c964:L46c964:{c.instructions+=3;NFSU2_TR(0x46c964);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c967:{NFSU2_TR(0x46c967);
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
B46c969:{NFSU2_TR(0x46c969);
if(r1(R+518)){{goto L46c994;}}
}
B46c96b:L46c96b:{c.instructions+=5;NFSU2_TR(0x46c96b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46c96f:{NFSU2_TR(0x46c96f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c972:{NFSU2_TR(0x46c972);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46c975:{NFSU2_TR(0x46c975);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46c978:{NFSU2_TR(0x46c978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c97dull));
TAIL_STATIC(0x721f99u,721);
}
B46c97d:L46c97d:{c.instructions+=4;NFSU2_TR(0x46c97d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c980:{NFSU2_TR(0x46c980);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c985:{NFSU2_TR(0x46c985);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c986:{NFSU2_TR(0x46c986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c98bull));
TAIL_STATIC(0x7230a7u,723);
}
B46c98b:L46c98b:{c.instructions+=3;NFSU2_TR(0x46c98b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c98e:{NFSU2_TR(0x46c98e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c98f:{NFSU2_TR(0x46c98f);
TAIL_STATIC(0x721fa7u,721);
}
B46c994:L46c994:{c.instructions+=2;NFSU2_TR(0x46c994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c995:{NFSU2_TR(0x46c995);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c9a0:L46c9a0:{c.instructions+=5;NFSU2_TR(0x46c9a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B46c9a3:{NFSU2_TR(0x46c9a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c9a4:{NFSU2_TR(0x46c9a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46c9a7:{NFSU2_TR(0x46c9a7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46c9aa:{NFSU2_TR(0x46c9aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c9afull));
TAIL_STATIC(0x721f99u,721);
}
B46c9af:L46c9af:{c.instructions+=5;NFSU2_TR(0x46c9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c9b2:{NFSU2_TR(0x46c9b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46c9b6:{NFSU2_TR(0x46c9b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c9b7:{NFSU2_TR(0x46c9b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c9b8:{NFSU2_TR(0x46c9b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c9bdull));
TAIL_STATIC(0x722eceu,722);
}
B46c9bd:L46c9bd:{c.instructions+=2;NFSU2_TR(0x46c9bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46c9c0:{NFSU2_TR(0x46c9c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c9c5ull));
TAIL_STATIC(0x721fa7u,721);
}
B46c9c5:L46c9c5:{c.instructions+=4;NFSU2_TR(0x46c9c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c9c9:{NFSU2_TR(0x46c9c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46c9ca:{NFSU2_TR(0x46c9ca);
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
B46c9cd:{NFSU2_TR(0x46c9cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46c9d0:L46c9d0:{c.instructions+=6;NFSU2_TR(0x46c9d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c9d1:{NFSU2_TR(0x46c9d1);
__builtin_memmove((R+24),(R+4),4);
}
B46c9d3:{NFSU2_TR(0x46c9d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c9d6:{NFSU2_TR(0x46c9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46c9d9:{NFSU2_TR(0x46c9d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c9da:{NFSU2_TR(0x46c9da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c9dfull));
TAIL_STATIC(0x7227cbu,722);
}
B46c9df:L46c9df:{c.instructions+=4;NFSU2_TR(0x46c9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c9e2:{NFSU2_TR(0x46c9e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46c9e5:{NFSU2_TR(0x46c9e5);
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
B46c9e7:{NFSU2_TR(0x46c9e7);
if(r1(R+518)){{goto L46ca0c;}}
}
B46c9e9:L46c9e9:{c.instructions+=5;NFSU2_TR(0x46c9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46c9ec:{NFSU2_TR(0x46c9ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c9ed:{NFSU2_TR(0x46c9ed);
u8 U[4];
w4(U+0,u32(0x78a950ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c9f2:{NFSU2_TR(0x46c9f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c9f4:{NFSU2_TR(0x46c9f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46c9f9ull));
TAIL_STATIC(0x4691c0u,469);
}
B46c9f9:L46c9f9:{c.instructions+=3;NFSU2_TR(0x46c9f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46c9fc:{NFSU2_TR(0x46c9fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46c9fd:{NFSU2_TR(0x46c9fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ca02ull));
TAIL_STATIC(0x575630u,575);
}
B46ca02:L46ca02:{c.instructions+=2;NFSU2_TR(0x46ca02);
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
B46ca05:{NFSU2_TR(0x46ca05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46ca0c:L46ca0c:{c.instructions+=2;NFSU2_TR(0x46ca0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ca0d:{NFSU2_TR(0x46ca0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ca10:L46ca10:{c.instructions+=7;NFSU2_TR(0x46ca10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ca11:{NFSU2_TR(0x46ca11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ca12:{NFSU2_TR(0x46ca12);
__builtin_memmove((R+24),(R+4),4);
}
B46ca14:{NFSU2_TR(0x46ca14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ca17:{NFSU2_TR(0x46ca17);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46ca19:{NFSU2_TR(0x46ca19);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46ca1b:{NFSU2_TR(0x46ca1b);
if(r1(R+518)){{goto L46ca29;}}
}
B46ca1d:L46ca1d:{c.instructions+=3;NFSU2_TR(0x46ca1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ca20:{NFSU2_TR(0x46ca20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ca21:{NFSU2_TR(0x46ca21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ca26ull));
TAIL_STATIC(0x7227cbu,722);
}
B46ca26:L46ca26:{c.instructions+=1;NFSU2_TR(0x46ca26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46ca29:L46ca29:{c.instructions+=3;NFSU2_TR(0x46ca29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ca2c:{NFSU2_TR(0x46ca2c);
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
B46ca2e:{NFSU2_TR(0x46ca2e);
if(r1(R+518)){{goto L46ca53;}}
}
B46ca30:L46ca30:{c.instructions+=2;NFSU2_TR(0x46ca30);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B46ca34:{NFSU2_TR(0x46ca34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46ca53;}}
}
B46ca36:L46ca36:{c.instructions+=4;NFSU2_TR(0x46ca36);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ca38:{NFSU2_TR(0x46ca38);
u8 U[4];
w4(U+0,u32(0x78a990ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ca3d:{NFSU2_TR(0x46ca3d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ca3f:{NFSU2_TR(0x46ca3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ca44ull));
TAIL_STATIC(0x4691c0u,469);
}
B46ca44:L46ca44:{c.instructions+=3;NFSU2_TR(0x46ca44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ca47:{NFSU2_TR(0x46ca47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ca48:{NFSU2_TR(0x46ca48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ca4dull));
TAIL_STATIC(0x575630u,575);
}
B46ca4d:L46ca4d:{c.instructions+=2;NFSU2_TR(0x46ca4d);
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
B46ca50:{NFSU2_TR(0x46ca50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ca53:L46ca53:{c.instructions+=4;NFSU2_TR(0x46ca53);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46ca56:{NFSU2_TR(0x46ca56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ca57:{NFSU2_TR(0x46ca57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46ca58:{NFSU2_TR(0x46ca58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ca60:L46ca60:{c.instructions+=5;NFSU2_TR(0x46ca60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ca61:{NFSU2_TR(0x46ca61);
__builtin_memmove((R+24),(R+4),4);
}
B46ca63:{NFSU2_TR(0x46ca63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ca66:{NFSU2_TR(0x46ca66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46ca68:{NFSU2_TR(0x46ca68);
if(r1(R+518)){{goto L46ca84;}}
}
B46ca6a:L46ca6a:{c.instructions+=5;NFSU2_TR(0x46ca6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ca6e:{NFSU2_TR(0x46ca6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ca6f:{NFSU2_TR(0x46ca6f);
u8 U[4];
w4(U+0,u32(0x78a9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ca74:{NFSU2_TR(0x46ca74);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ca76:{NFSU2_TR(0x46ca76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ca7bull));
TAIL_STATIC(0x4691c0u,469);
}
B46ca7b:L46ca7b:{c.instructions+=4;NFSU2_TR(0x46ca7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46ca7e:{NFSU2_TR(0x46ca7e);
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
B46ca80:{NFSU2_TR(0x46ca80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ca81:{NFSU2_TR(0x46ca81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ca84:L46ca84:{c.instructions+=2;NFSU2_TR(0x46ca84);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ca86:{NFSU2_TR(0x46ca86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ca8bull));
TAIL_STATIC(0x575620u,575);
}
B46ca8b:L46ca8b:{c.instructions+=17;NFSU2_TR(0x46ca8b);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B46ca8f:{NFSU2_TR(0x46ca8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46ca93:{NFSU2_TR(0x46ca93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ca96:{NFSU2_TR(0x46ca96);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46ca99:{NFSU2_TR(0x46ca99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ca9c:{NFSU2_TR(0x46ca9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ca9f:{NFSU2_TR(0x46ca9f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46caa3:{NFSU2_TR(0x46caa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46caa6:{NFSU2_TR(0x46caa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46caa9:{NFSU2_TR(0x46caa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46cab0:{NFSU2_TR(0x46cab0);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B46cab6:{NFSU2_TR(0x46cab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46cab9:{NFSU2_TR(0x46cab9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46cabc:{NFSU2_TR(0x46cabc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B46cabf:{NFSU2_TR(0x46cabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cac2:{NFSU2_TR(0x46cac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cac5:{NFSU2_TR(0x46cac5);
if(r1(R+518)){{goto L46cadb;}}
}
B46cac7:L46cac7:{c.instructions+=7;NFSU2_TR(0x46cac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46caca:{NFSU2_TR(0x46caca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cacd:{NFSU2_TR(0x46cacd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46cad1:{NFSU2_TR(0x46cad1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46cad5:{NFSU2_TR(0x46cad5);
w1(R+0,u8(0x1ull));
}
B46cad7:{NFSU2_TR(0x46cad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46cad8:{NFSU2_TR(0x46cad8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46cadb:L46cadb:{c.instructions+=7;NFSU2_TR(0x46cadb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46cade:{NFSU2_TR(0x46cade);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46cae5:{NFSU2_TR(0x46cae5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46cae9:{NFSU2_TR(0x46cae9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46caed:{NFSU2_TR(0x46caed);
w1(R+0,u8(0x1ull));
}
B46caef:{NFSU2_TR(0x46caef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46caf0:{NFSU2_TR(0x46caf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46cb00:L46cb00:{c.instructions+=8;NFSU2_TR(0x46cb00);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B46cb05:{NFSU2_TR(0x46cb05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B46cb08:{NFSU2_TR(0x46cb08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cb09:{NFSU2_TR(0x46cb09);
__builtin_memmove((R+24),(R+4),4);
}
B46cb0b:{NFSU2_TR(0x46cb0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B46cb0e:{NFSU2_TR(0x46cb0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46cb10:{NFSU2_TR(0x46cb10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cb11:{NFSU2_TR(0x46cb11);
if(r1(R+518)){{goto L46cb3e;}}
}
B46cb13:L46cb13:{c.instructions+=3;NFSU2_TR(0x46cb13);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46cb16:{NFSU2_TR(0x46cb16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46cb18:{NFSU2_TR(0x46cb18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46cb3e;}}
}
B46cb1a:L46cb1a:{c.instructions+=3;NFSU2_TR(0x46cb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46cb1d:{NFSU2_TR(0x46cb1d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46cb20:{NFSU2_TR(0x46cb20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cb25ull));
TAIL_STATIC(0x721f99u,721);
}
B46cb25:L46cb25:{c.instructions+=4;NFSU2_TR(0x46cb25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cb28:{NFSU2_TR(0x46cb28);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cb2a:{NFSU2_TR(0x46cb2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cb2b:{NFSU2_TR(0x46cb2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cb30ull));
TAIL_STATIC(0x7230a7u,723);
}
B46cb30:L46cb30:{c.instructions+=2;NFSU2_TR(0x46cb30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46cb33:{NFSU2_TR(0x46cb33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cb38ull));
TAIL_STATIC(0x721fa7u,721);
}
B46cb38:L46cb38:{c.instructions+=2;NFSU2_TR(0x46cb38);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46cb3c:{NFSU2_TR(0x46cb3c);
{goto L46cb48;}
}
B46cb3e:L46cb3e:{c.instructions+=2;NFSU2_TR(0x46cb3e);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B46cb42:{NFSU2_TR(0x46cb42);
if(r1(R+518)){{goto L46cca7;}}
}
B46cb48:L46cb48:{c.instructions+=3;NFSU2_TR(0x46cb48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cb4b:{NFSU2_TR(0x46cb4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46cb4d:{NFSU2_TR(0x46cb4d);
if(r1(R+518)){{goto L46cba1;}}
}
B46cb4f:L46cb4f:{c.instructions+=4;NFSU2_TR(0x46cb4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46cb52:{NFSU2_TR(0x46cb52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cb53:{NFSU2_TR(0x46cb53);
__builtin_memmove((R+4),(R+24),4);
}
B46cb55:{NFSU2_TR(0x46cb55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cb5aull));
TAIL_STATIC(0x45ac20u,45a);
}
B46cb5a:L46cb5a:{c.instructions+=5;NFSU2_TR(0x46cb5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cb5e:{NFSU2_TR(0x46cb5e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46cb62:{NFSU2_TR(0x46cb62);
{u32 ea_=u32(u32(7907116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46cb68:{NFSU2_TR(0x46cb68);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46cb6e:{NFSU2_TR(0x46cb6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cb73ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46cb73:L46cb73:{c.instructions+=4;NFSU2_TR(0x46cb73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46cb76:{NFSU2_TR(0x46cb76);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46cb79:{NFSU2_TR(0x46cb79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cb7c:{NFSU2_TR(0x46cb7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cb81ull));
TAIL_STATIC(0x721f99u,721);
}
B46cb81:L46cb81:{c.instructions+=8;NFSU2_TR(0x46cb81);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46cb84:{NFSU2_TR(0x46cb84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cb87:{NFSU2_TR(0x46cb87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cb88:{NFSU2_TR(0x46cb88);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46cb8e:{NFSU2_TR(0x46cb8e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46cb91:{NFSU2_TR(0x46cb91);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cb93:{NFSU2_TR(0x46cb93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cb94:{NFSU2_TR(0x46cb94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cb99ull));
TAIL_STATIC(0x723e9du,723);
}
B46cb99:L46cb99:{c.instructions+=2;NFSU2_TR(0x46cb99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46cb9c:{NFSU2_TR(0x46cb9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cba1ull));
TAIL_STATIC(0x721fa7u,721);
}
B46cba1:L46cba1:{c.instructions+=3;NFSU2_TR(0x46cba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cba4:{NFSU2_TR(0x46cba4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46cba6:{NFSU2_TR(0x46cba6);
if(r1(R+518)){{goto L46cbfe;}}
}
B46cba8:L46cba8:{c.instructions+=2;NFSU2_TR(0x46cba8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46cbac:{NFSU2_TR(0x46cbac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46cbfe;}}
}
B46cbae:L46cbae:{c.instructions+=3;NFSU2_TR(0x46cbae);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cbb0:{NFSU2_TR(0x46cbb0);
__builtin_memmove((R+4),(R+24),4);
}
B46cbb2:{NFSU2_TR(0x46cbb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cbb7ull));
TAIL_STATIC(0x45ac20u,45a);
}
B46cbb7:L46cbb7:{c.instructions+=5;NFSU2_TR(0x46cbb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cbbb:{NFSU2_TR(0x46cbbb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46cbbf:{NFSU2_TR(0x46cbbf);
{u32 ea_=u32(u32(7907116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46cbc5:{NFSU2_TR(0x46cbc5);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46cbcb:{NFSU2_TR(0x46cbcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cbd0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46cbd0:L46cbd0:{c.instructions+=4;NFSU2_TR(0x46cbd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46cbd3:{NFSU2_TR(0x46cbd3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46cbd6:{NFSU2_TR(0x46cbd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cbd9:{NFSU2_TR(0x46cbd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cbdeull));
TAIL_STATIC(0x721f99u,721);
}
B46cbde:L46cbde:{c.instructions+=8;NFSU2_TR(0x46cbde);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46cbe1:{NFSU2_TR(0x46cbe1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cbe2:{NFSU2_TR(0x46cbe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cbe5:{NFSU2_TR(0x46cbe5);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46cbeb:{NFSU2_TR(0x46cbeb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46cbee:{NFSU2_TR(0x46cbee);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cbf0:{NFSU2_TR(0x46cbf0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cbf1:{NFSU2_TR(0x46cbf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cbf6ull));
TAIL_STATIC(0x723e9du,723);
}
B46cbf6:L46cbf6:{c.instructions+=2;NFSU2_TR(0x46cbf6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46cbf9:{NFSU2_TR(0x46cbf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cbfeull));
TAIL_STATIC(0x721fa7u,721);
}
B46cbfe:L46cbfe:{c.instructions+=3;NFSU2_TR(0x46cbfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cc01:{NFSU2_TR(0x46cc01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46cc03:{NFSU2_TR(0x46cc03);
if(r1(R+518)){{goto L46cc2d;}}
}
B46cc05:L46cc05:{c.instructions+=3;NFSU2_TR(0x46cc05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cc08:{NFSU2_TR(0x46cc08);
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
B46cc0a:{NFSU2_TR(0x46cc0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46cc2d;}}
}
B46cc0c:L46cc0c:{c.instructions+=4;NFSU2_TR(0x46cc0c);
__builtin_memmove((R+8),gp(0x82ba30),4);
}
B46cc12:{NFSU2_TR(0x46cc12);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cc15:{NFSU2_TR(0x46cc15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46cc17:{NFSU2_TR(0x46cc17);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cc1aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46cc1a:L46cc1a:{c.instructions+=2;NFSU2_TR(0x46cc1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cc1b:{NFSU2_TR(0x46cc1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cc20ull));
TAIL_STATIC(0x736d60u,736);
}
B46cc20:L46cc20:{c.instructions+=3;NFSU2_TR(0x46cc20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cc23:{NFSU2_TR(0x46cc23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46cc26:{NFSU2_TR(0x46cc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46cc2d:L46cc2d:{c.instructions+=4;NFSU2_TR(0x46cc2d);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B46cc33:{NFSU2_TR(0x46cc33);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46cc36:{NFSU2_TR(0x46cc36);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46cc38:{NFSU2_TR(0x46cc38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46cc66;}}
}
B46cc3a:L46cc3a:{c.instructions+=3;NFSU2_TR(0x46cc3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46cc3d:{NFSU2_TR(0x46cc3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46cc3f:{NFSU2_TR(0x46cc3f);
if(r1(R+518)){{goto L46cc66;}}
}
B46cc41:L46cc41:{c.instructions+=3;NFSU2_TR(0x46cc41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46cc44:{NFSU2_TR(0x46cc44);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46cc47:{NFSU2_TR(0x46cc47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cc4cull));
TAIL_STATIC(0x721f99u,721);
}
B46cc4c:L46cc4c:{c.instructions+=4;NFSU2_TR(0x46cc4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cc4f:{NFSU2_TR(0x46cc4f);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cc54:{NFSU2_TR(0x46cc54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cc55:{NFSU2_TR(0x46cc55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cc5aull));
TAIL_STATIC(0x7230a7u,723);
}
B46cc5a:L46cc5a:{c.instructions+=2;NFSU2_TR(0x46cc5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46cc5d:{NFSU2_TR(0x46cc5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cc62ull));
TAIL_STATIC(0x721fa7u,721);
}
B46cc62:L46cc62:{c.instructions+=1;NFSU2_TR(0x46cc62);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46cc66:L46cc66:{c.instructions+=3;NFSU2_TR(0x46cc66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cc69:{NFSU2_TR(0x46cc69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46cc6b:{NFSU2_TR(0x46cc6b);
if(r1(R+518)){{goto L46cca7;}}
}
B46cc6d:L46cc6d:{c.instructions+=3;NFSU2_TR(0x46cc6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46cc70:{NFSU2_TR(0x46cc70);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46cc73:{NFSU2_TR(0x46cc73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cc78ull));
TAIL_STATIC(0x721f99u,721);
}
B46cc78:L46cc78:{c.instructions+=5;NFSU2_TR(0x46cc78);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46cc7b:{NFSU2_TR(0x46cc7b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46cc7f:{NFSU2_TR(0x46cc7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cc80:{NFSU2_TR(0x46cc80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cc81:{NFSU2_TR(0x46cc81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cc86ull));
TAIL_STATIC(0x722eceu,722);
}
B46cc86:L46cc86:{c.instructions+=3;NFSU2_TR(0x46cc86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46cc89:{NFSU2_TR(0x46cc89);
__builtin_memmove((R+28),(R+0),4);
}
B46cc8b:{NFSU2_TR(0x46cc8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cc90ull));
TAIL_STATIC(0x721fa7u,721);
}
B46cc90:L46cc90:{c.instructions+=2;NFSU2_TR(0x46cc90);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46cc92:{NFSU2_TR(0x46cc92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46cca7;}}
}
B46cc94:L46cc94:{c.instructions+=3;NFSU2_TR(0x46cc94);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cc98:{NFSU2_TR(0x46cc98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46cc9a:{NFSU2_TR(0x46cc9a);
if(r1(R+518)){{goto L46cca7;}}
}
B46cc9c:L46cc9c:{c.instructions+=5;NFSU2_TR(0x46cc9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cc9f:{NFSU2_TR(0x46cc9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46cca0:{NFSU2_TR(0x46cca0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46cca1:{NFSU2_TR(0x46cca1);
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
B46cca4:{NFSU2_TR(0x46cca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B46cca7:L46cca7:{c.instructions+=4;NFSU2_TR(0x46cca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46cca8:{NFSU2_TR(0x46cca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46cca9:{NFSU2_TR(0x46cca9);
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
B46ccac:{NFSU2_TR(0x46ccac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ccb0:L46ccb0:{c.instructions+=15;NFSU2_TR(0x46ccb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ccb2:{NFSU2_TR(0x46ccb2);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ccb7:{NFSU2_TR(0x46ccb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ccbd:{NFSU2_TR(0x46ccbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ccbe:{NFSU2_TR(0x46ccbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ccc5:{NFSU2_TR(0x46ccc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ccc6:{NFSU2_TR(0x46ccc6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ccc7:{NFSU2_TR(0x46ccc7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ccc8:{NFSU2_TR(0x46ccc8);
__builtin_memmove((R+20),(R+4),4);
}
B46ccca:{NFSU2_TR(0x46ccca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cccb:{NFSU2_TR(0x46cccb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cccf:{NFSU2_TR(0x46cccf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ccd1:{NFSU2_TR(0x46ccd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46ccd9:{NFSU2_TR(0x46ccd9);
u8 U[4];
w4(U+0,u32(0x789ec8ull));
s4(u32(r4(R+20)),r4(U+0));
}
B46cce0:{NFSU2_TR(0x46cce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cce5ull));
TAIL_STATIC(0x45b160u,45b);
}
B46cce5:L46cce5:{c.instructions+=1;NFSU2_TR(0x46cce5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46cce7:L46cce7:{c.instructions+=4;NFSU2_TR(0x46cce7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46ccea:{NFSU2_TR(0x46ccea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cceb:{NFSU2_TR(0x46cceb);
__builtin_memmove((R+4),(R+20),4);
}
B46cced:{NFSU2_TR(0x46cced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ccf2ull));
TAIL_STATIC(0x45b0c0u,45b);
}
B46ccf2:L46ccf2:{c.instructions+=4;NFSU2_TR(0x46ccf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82baf8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B46ccf9:{NFSU2_TR(0x46ccf9);
__builtin_memmove((R+24),(R+28),4);
}
B46ccfb:{NFSU2_TR(0x46ccfb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46ccfe:{NFSU2_TR(0x46ccfe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46cce7u);}goto L46cce7;}}
}
B46cd00:L46cd00:{c.instructions+=10;NFSU2_TR(0x46cd00);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cd04:{NFSU2_TR(0x46cd04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46cd05:{NFSU2_TR(0x46cd05);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46cd09:{NFSU2_TR(0x46cd09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46cd10:{NFSU2_TR(0x46cd10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46cd11:{NFSU2_TR(0x46cd11);
__builtin_memmove((R+0),(R+20),4);
}
B46cd13:{NFSU2_TR(0x46cd13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46cd14:{NFSU2_TR(0x46cd14);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cd1b:{NFSU2_TR(0x46cd1b);
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
B46cd1e:{NFSU2_TR(0x46cd1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46cd20:L46cd20:{c.instructions+=4;NFSU2_TR(0x46cd20);
__builtin_memmove((R+0),(R+4),4);
}
B46cd22:{NFSU2_TR(0x46cd22);
__builtin_memmove((R+4),gp(0x82b898),4);
}
B46cd28:{NFSU2_TR(0x46cd28);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46cd2a:{NFSU2_TR(0x46cd2a);
if(r1(R+518)){{goto L46cd2f;}}
}
B46cd2c:L46cd2c:{c.instructions+=2;NFSU2_TR(0x46cd2c);
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
B46cd2e:{NFSU2_TR(0x46cd2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46cd2f:L46cd2f:{c.instructions+=4;NFSU2_TR(0x46cd2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cd32:{NFSU2_TR(0x46cd32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cd35:{NFSU2_TR(0x46cd35);
w4(R+8,u32(0x4ull));
}
B46cd3a:{NFSU2_TR(0x46cd3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cd3full));
TAIL_STATIC(0x45a6d0u,45a);
}
B46cd3f:L46cd3f:{c.instructions+=6;NFSU2_TR(0x46cd3f);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B46cd44:{NFSU2_TR(0x46cd44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cd47:{NFSU2_TR(0x46cd47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cd49:{NFSU2_TR(0x46cd49);
u8 U[4];
w4(U+0,u32(0x462020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cd4e:{NFSU2_TR(0x46cd4e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cd50:{NFSU2_TR(0x46cd50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cd55ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46ca60u);}goto L46ca60;}
}
B46cd55:L46cd55:{c.instructions+=1;NFSU2_TR(0x46cd55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46cd60:L46cd60:{c.instructions+=5;NFSU2_TR(0x46cd60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cd64:{NFSU2_TR(0x46cd64);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46cd68:{NFSU2_TR(0x46cd68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cd69:{NFSU2_TR(0x46cd69);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B46cd6d:{NFSU2_TR(0x46cd6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cd72ull));
TAIL_STATIC(0x43be60u,43b);
}
B46cd72:L46cd72:{c.instructions+=2;NFSU2_TR(0x46cd72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cd75:{NFSU2_TR(0x46cd75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46cd80:L46cd80:{c.instructions+=12;NFSU2_TR(0x46cd80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cd82:{NFSU2_TR(0x46cd82);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cd87:{NFSU2_TR(0x46cd87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cd8d:{NFSU2_TR(0x46cd8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cd8e:{NFSU2_TR(0x46cd8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cd95:{NFSU2_TR(0x46cd95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cd96:{NFSU2_TR(0x46cd96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cd97:{NFSU2_TR(0x46cd97);
__builtin_memmove((R+24),(R+4),4);
}
B46cd99:{NFSU2_TR(0x46cd99);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cd9d:{NFSU2_TR(0x46cd9d);
u8 U[4];
w4(U+0,u32(0x789ebcull));
s4(u32(r4(R+24)),r4(U+0));
}
B46cda3:{NFSU2_TR(0x46cda3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46cdab:{NFSU2_TR(0x46cdab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cdb0ull));
TAIL_STATIC(0x45b230u,45b);
}
B46cdb0:L46cdb0:{c.instructions+=6;NFSU2_TR(0x46cdb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cdb4:{NFSU2_TR(0x46cdb4);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B46cdba:{NFSU2_TR(0x46cdba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46cdbb:{NFSU2_TR(0x46cdbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cdc2:{NFSU2_TR(0x46cdc2);
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
B46cdc5:{NFSU2_TR(0x46cdc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46cdd0:L46cdd0:{c.instructions+=10;NFSU2_TR(0x46cdd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B46cdd3:{NFSU2_TR(0x46cdd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cdd4:{NFSU2_TR(0x46cdd4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cdd5:{NFSU2_TR(0x46cdd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cdd6:{NFSU2_TR(0x46cdd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46cdda:{NFSU2_TR(0x46cdda);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B46cddc:{NFSU2_TR(0x46cddc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46cdde:{NFSU2_TR(0x46cdde);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cddf:{NFSU2_TR(0x46cddf);
__builtin_memmove((R+12),(R+4),4);
}
B46cde1:{NFSU2_TR(0x46cde1);
if(r1(R+518)){{goto L46ce26;}}
}
B46cde3:L46cde3:{c.instructions+=3;NFSU2_TR(0x46cde3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cde6:{NFSU2_TR(0x46cde6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46cde9:{NFSU2_TR(0x46cde9);
w4(R+4,u32(0x5ull));
}
B46cdee:L46cdee:{c.instructions+=1;NFSU2_TR(0x46cdee);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L46cdf0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46cdeeu);}goto L46cdee;}
}
B46cdf0:L46cdf0:{c.instructions+=4;NFSU2_TR(0x46cdf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B46cdf4:{NFSU2_TR(0x46cdf4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B46cdf6:{NFSU2_TR(0x46cdf6);
w4(R+8,u32(0x7fffull));
}
B46cdfb:{NFSU2_TR(0x46cdfb);
if(r1(R+518)){{goto L46ce0e;}}
}
B46cdfd:L46cdfd:{c.instructions+=2;NFSU2_TR(0x46cdfd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B46cdfe:{NFSU2_TR(0x46cdfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46ce1a;}}
}
B46ce00:L46ce00:{c.instructions+=3;NFSU2_TR(0x46ce00);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B46ce04:{NFSU2_TR(0x46ce04);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7f36e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B46ce0c:{NFSU2_TR(0x46ce0c);
{goto L46ce1a;}
}
B46ce0e:L46ce0e:{c.instructions+=2;NFSU2_TR(0x46ce0e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B46ce12:{NFSU2_TR(0x46ce12);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7f34a0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B46ce1a:L46ce1a:{c.instructions+=4;NFSU2_TR(0x46ce1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ce1d:{NFSU2_TR(0x46ce1d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B46ce20:{NFSU2_TR(0x46ce20);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B46ce23:{NFSU2_TR(0x46ce23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ce26:L46ce26:{c.instructions+=5;NFSU2_TR(0x46ce26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ce29:{NFSU2_TR(0x46ce29);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46ce2c:{NFSU2_TR(0x46ce2c);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46ce2e:{NFSU2_TR(0x46ce2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ce32:{NFSU2_TR(0x46ce32);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L46cede;}}
}
B46ce38:L46ce38:{c.instructions+=3;NFSU2_TR(0x46ce38);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ce3c:{NFSU2_TR(0x46ce3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46ce3f:{NFSU2_TR(0x46ce3f);
}
B46ce40:L46ce40:{c.instructions+=3;NFSU2_TR(0x46ce40);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B46ce46:{NFSU2_TR(0x46ce46);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ce47:{NFSU2_TR(0x46ce47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ce4cull));
TAIL_STATIC(0x43e910u,43e);
}
B46ce4c:L46ce4c:{c.instructions+=3;NFSU2_TR(0x46ce4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46ce4f:{NFSU2_TR(0x46ce4f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x41cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x41cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46ce54:{NFSU2_TR(0x46ce54);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46ce86;}}
}
B46ce56:L46ce56:{c.instructions+=6;NFSU2_TR(0x46ce56);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B46ce5b:{NFSU2_TR(0x46ce5b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B46ce5e:{NFSU2_TR(0x46ce5e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B46ce63:{NFSU2_TR(0x46ce63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ce64:{NFSU2_TR(0x46ce64);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ce66:{NFSU2_TR(0x46ce66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ce6bull));
TAIL_STATIC(0x440820u,440);
}
B46ce6b:L46ce6b:{c.instructions+=3;NFSU2_TR(0x46ce6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46ce6e:{NFSU2_TR(0x46ce6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46ce70:{NFSU2_TR(0x46ce70);
if(r1(R+518)){{goto L46ce86;}}
}
B46ce72:L46ce72:{c.instructions+=6;NFSU2_TR(0x46ce72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ce75:{NFSU2_TR(0x46ce75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ce78:{NFSU2_TR(0x46ce78);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B46ce7c:{NFSU2_TR(0x46ce7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ce7d:{NFSU2_TR(0x46ce7d);
__builtin_memmove((R+4),(R+0),4);
}
B46ce7f:{NFSU2_TR(0x46ce7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ce84ull));
TAIL_STATIC(0x45b260u,45b);
}
B46ce84:L46ce84:{c.instructions+=1;NFSU2_TR(0x46ce84);
{goto L46ce88;}
}
B46ce86:L46ce86:{c.instructions+=1;NFSU2_TR(0x46ce86);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46ce88:L46ce88:{c.instructions+=5;NFSU2_TR(0x46ce88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B46ce8b:{NFSU2_TR(0x46ce8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46ce8e:{NFSU2_TR(0x46ce8e);
w4(R+4,u32(0x5ull));
}
B46ce93:{NFSU2_TR(0x46ce93);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ce96:{NFSU2_TR(0x46ce96);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B46ce9a:L46ce9a:{c.instructions+=1;NFSU2_TR(0x46ce9a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L46ce9c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46ce9au);}goto L46ce9a;}
}
B46ce9c:L46ce9c:{c.instructions+=8;NFSU2_TR(0x46ce9c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B46cea0:{NFSU2_TR(0x46cea0);
u8 U[32];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B46cea5:{NFSU2_TR(0x46cea5);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B46cea8:{NFSU2_TR(0x46cea8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46ceac:{NFSU2_TR(0x46ceac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ceb0:{NFSU2_TR(0x46ceb0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ceb1:{NFSU2_TR(0x46ceb1);
__builtin_memmove((R+4),(R+0),4);
}
B46ceb3:{NFSU2_TR(0x46ceb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ceb8ull));
TAIL_STATIC(0x45b280u,45b);
}
B46ceb8:L46ceb8:{c.instructions+=11;NFSU2_TR(0x46ceb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46cebc:{NFSU2_TR(0x46cebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cebf:{NFSU2_TR(0x46cebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cec3:{NFSU2_TR(0x46cec3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B46cec6:{NFSU2_TR(0x46cec6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ceca:{NFSU2_TR(0x46ceca);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B46cece:{NFSU2_TR(0x46cece);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B46cecf:{NFSU2_TR(0x46cecf);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B46ced2:{NFSU2_TR(0x46ced2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46ced4:{NFSU2_TR(0x46ced4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ced8:{NFSU2_TR(0x46ced8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46ce40u);}goto L46ce40;}}
}
B46cede:L46cede:{c.instructions+=7;NFSU2_TR(0x46cede);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46cedf:{NFSU2_TR(0x46cedf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46cee0:{NFSU2_TR(0x46cee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46cee1:{NFSU2_TR(0x46cee1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46cee5:{NFSU2_TR(0x46cee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46cee6:{NFSU2_TR(0x46cee6);
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
B46cee9:{NFSU2_TR(0x46cee9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46cef0:L46cef0:{c.instructions+=9;NFSU2_TR(0x46cef0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cef1:{NFSU2_TR(0x46cef1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cef2:{NFSU2_TR(0x46cef2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cef3:{NFSU2_TR(0x46cef3);
__builtin_memmove((R+24),(R+4),4);
}
B46cef5:{NFSU2_TR(0x46cef5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cef6:{NFSU2_TR(0x46cef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46cef9:{NFSU2_TR(0x46cef9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46cefb:{NFSU2_TR(0x46cefb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46cefd:{NFSU2_TR(0x46cefd);
if(r1(R+518)){{goto L46cf2c;}}
}
B46ceff:L46ceff:{c.instructions+=3;NFSU2_TR(0x46ceff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46cf01:{NFSU2_TR(0x46cf01);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B46cf03:{NFSU2_TR(0x46cf03);
if(r1(R+518)){{goto L46cf0a;}}
}
B46cf05:L46cf05:{c.instructions+=1;NFSU2_TR(0x46cf05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cf0aull));
TAIL_STATIC(0x735550u,735);
}
B46cf0a:L46cf0a:{c.instructions+=3;NFSU2_TR(0x46cf0a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46cf0e:{NFSU2_TR(0x46cf0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cf0f:{NFSU2_TR(0x46cf0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cf14ull));
TAIL_STATIC(0x734df0u,734);
}
B46cf14:L46cf14:{c.instructions+=2;NFSU2_TR(0x46cf14);
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
B46cf17:{NFSU2_TR(0x46cf17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cf1cull));
TAIL_STATIC(0x734e40u,734);
}
B46cf1c:L46cf1c:{c.instructions+=5;NFSU2_TR(0x46cf1c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cf20:{NFSU2_TR(0x46cf20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46cf22:{NFSU2_TR(0x46cf22);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cf23:{NFSU2_TR(0x46cf23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cf24:{NFSU2_TR(0x46cf24);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cf27ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46cf27:L46cf27:{c.instructions+=1;NFSU2_TR(0x46cf27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cf2cull));
TAIL_STATIC(0x734e60u,734);
}
B46cf2c:L46cf2c:{c.instructions+=4;NFSU2_TR(0x46cf2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46cf2f:{NFSU2_TR(0x46cf2f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B46cf31:{NFSU2_TR(0x46cf31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cf34:{NFSU2_TR(0x46cf34);
if(r1(R+518)){{goto L46cf63;}}
}
B46cf36:L46cf36:{c.instructions+=3;NFSU2_TR(0x46cf36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46cf38:{NFSU2_TR(0x46cf38);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B46cf3a:{NFSU2_TR(0x46cf3a);
if(r1(R+518)){{goto L46cf41;}}
}
B46cf3c:L46cf3c:{c.instructions+=1;NFSU2_TR(0x46cf3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cf41ull));
TAIL_STATIC(0x735550u,735);
}
B46cf41:L46cf41:{c.instructions+=3;NFSU2_TR(0x46cf41);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46cf45:{NFSU2_TR(0x46cf45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cf46:{NFSU2_TR(0x46cf46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cf4bull));
TAIL_STATIC(0x734df0u,734);
}
B46cf4b:L46cf4b:{c.instructions+=2;NFSU2_TR(0x46cf4b);
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
B46cf4e:{NFSU2_TR(0x46cf4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cf53ull));
TAIL_STATIC(0x734e40u,734);
}
B46cf53:L46cf53:{c.instructions+=5;NFSU2_TR(0x46cf53);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cf57:{NFSU2_TR(0x46cf57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46cf59:{NFSU2_TR(0x46cf59);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cf5a:{NFSU2_TR(0x46cf5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cf5b:{NFSU2_TR(0x46cf5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cf5eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46cf5e:L46cf5e:{c.instructions+=1;NFSU2_TR(0x46cf5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46cf63ull));
TAIL_STATIC(0x734e60u,734);
}
B46cf63:L46cf63:{c.instructions+=7;NFSU2_TR(0x46cf63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46cf64:{NFSU2_TR(0x46cf64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cf67:{NFSU2_TR(0x46cf67);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46cf6a:{NFSU2_TR(0x46cf6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46cf6b:{NFSU2_TR(0x46cf6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46cf6c:{NFSU2_TR(0x46cf6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46cf6d:{NFSU2_TR(0x46cf6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46cf70:L46cf70:{c.instructions+=11;NFSU2_TR(0x46cf70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cf71:{NFSU2_TR(0x46cf71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46cf75:{NFSU2_TR(0x46cf75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cf76:{NFSU2_TR(0x46cf76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46cf77:{NFSU2_TR(0x46cf77);
__builtin_memmove((R+24),(R+4),4);
}
B46cf79:{NFSU2_TR(0x46cf79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46cf7c:{NFSU2_TR(0x46cf7c);
u8 U[32];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B46cf80:{NFSU2_TR(0x46cf80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cf83:{NFSU2_TR(0x46cf83);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B46cf86:{NFSU2_TR(0x46cf86);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46cf88:{NFSU2_TR(0x46cf88);
if(r1(R+518)){TAIL_STATIC(0x46d037u,46d);}
}
B46cf8e:L46cf8e:{c.instructions+=6;NFSU2_TR(0x46cf8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cf91:{NFSU2_TR(0x46cf91);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B46cf95:{NFSU2_TR(0x46cf95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cf98:{NFSU2_TR(0x46cf98);
u8 U[12];
w4(U+0,u32(u32(u32(0x10000ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B46cf9f:{NFSU2_TR(0x46cf9f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000ffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B46cfa4:{NFSU2_TR(0x46cfa4);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L46cfb3;}}
}
B46cfa6:L46cfa6:{c.instructions+=4;NFSU2_TR(0x46cfa6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B46cfa7:{NFSU2_TR(0x46cfa7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffff0000ull))));
}
B46cfac:{NFSU2_TR(0x46cfac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B46cfad:{NFSU2_TR(0x46cfad);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L46cfb3;}}
}
B46cfaf:L46cfaf:{c.instructions+=2;NFSU2_TR(0x46cfaf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46cfb1:{NFSU2_TR(0x46cfb1);
{goto L46cfbf;}
}
B46cfb3:L46cfb3:{c.instructions+=2;NFSU2_TR(0x46cfb3);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46cfb8:{NFSU2_TR(0x46cfb8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46cfbf;}}
}
B46cfba:L46cfba:{c.instructions+=1;NFSU2_TR(0x46cfba);
w4(R+0,u32(0x10000ull));
}
B46cfbf:L46cfbf:{c.instructions+=5;NFSU2_TR(0x46cfbf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46cfc1:{NFSU2_TR(0x46cfc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cfc4:{NFSU2_TR(0x46cfc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cfc7:{NFSU2_TR(0x46cfc7);
__builtin_memmove((R+0),(R+28),4);
}
B46cfc9:{NFSU2_TR(0x46cfc9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46cfcf;}}
}
B46cfcb:L46cfcb:{c.instructions+=2;NFSU2_TR(0x46cfcb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46cfcd:{NFSU2_TR(0x46cfcd);
{goto L46cfdc;}
}
B46cfcf:L46cfcf:{c.instructions+=2;NFSU2_TR(0x46cfcf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46cfd5:{NFSU2_TR(0x46cfd5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46cfdc;}}
}
B46cfd7:L46cfd7:{c.instructions+=1;NFSU2_TR(0x46cfd7);
w4(R+0,u32(0x7fffull));
}
B46cfdc:L46cfdc:{c.instructions+=5;NFSU2_TR(0x46cfdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cfdf:{NFSU2_TR(0x46cfdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cfe2:{NFSU2_TR(0x46cfe2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46cfe4:{NFSU2_TR(0x46cfe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46cfe7:{NFSU2_TR(0x46cfe7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46cfed;}}
}
B46cfe9:L46cfe9:{c.instructions+=2;NFSU2_TR(0x46cfe9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46cfeb:{NFSU2_TR(0x46cfeb);
{goto L46cff9;}
}
B46cfed:L46cfed:{c.instructions+=2;NFSU2_TR(0x46cfed);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46cff2:{NFSU2_TR(0x46cff2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46cff9;}}
}
B46cff4:L46cff4:{c.instructions+=1;NFSU2_TR(0x46cff4);
w4(R+0,u32(0x2000ull));
}
B46cff9:L46cff9:{c.instructions+=3;NFSU2_TR(0x46cff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46cffc:{NFSU2_TR(0x46cffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46cfff:{NFSU2_TR(0x46cfff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
TAIL_STATIC(0x46d001u,46d);
}
XIT:NFSU2_TR_EXIT(0x46c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
