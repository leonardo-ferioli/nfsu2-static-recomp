#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_585(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_588(u8* __restrict R,Cpu& c);
u32 body_589(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_609(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x58c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x58c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_58c(u8* __restrict R,Cpu& c);
u32 page_58c(Cpu& c){return body_58c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_58c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x58c003:goto L58c003;
case 0x58c007:c.instructions+=7;goto B58c007;
case 0x58c009:c.instructions+=6;goto B58c009;
case 0x58c00d:c.instructions+=5;goto B58c00d;
case 0x58c013:c.instructions+=4;goto B58c013;
case 0x58c014:c.instructions+=3;goto B58c014;
case 0x58c016:c.instructions+=2;goto B58c016;
case 0x58c01a:c.instructions+=1;goto B58c01a;
case 0x58c01f:goto L58c01f;
case 0x58c023:c.instructions+=7;goto B58c023;
case 0x58c025:c.instructions+=6;goto B58c025;
case 0x58c029:c.instructions+=5;goto B58c029;
case 0x58c02a:c.instructions+=4;goto B58c02a;
case 0x58c02c:c.instructions+=3;goto B58c02c;
case 0x58c031:c.instructions+=2;goto B58c031;
case 0x58c035:c.instructions+=1;goto B58c035;
case 0x58c03a:goto L58c03a;
case 0x58c03e:c.instructions+=7;goto B58c03e;
case 0x58c044:c.instructions+=6;goto B58c044;
case 0x58c045:c.instructions+=5;goto B58c045;
case 0x58c046:c.instructions+=4;goto B58c046;
case 0x58c047:c.instructions+=3;goto B58c047;
case 0x58c04c:c.instructions+=2;goto B58c04c;
case 0x58c051:c.instructions+=1;goto B58c051;
case 0x58c056:goto L58c056;
case 0x58c05b:goto L58c05b;
case 0x58c05d:c.instructions+=8;goto B58c05d;
case 0x58c05f:c.instructions+=7;goto B58c05f;
case 0x58c063:c.instructions+=6;goto B58c063;
case 0x58c06d:c.instructions+=5;goto B58c06d;
case 0x58c071:c.instructions+=4;goto B58c071;
case 0x58c078:c.instructions+=3;goto B58c078;
case 0x58c07f:c.instructions+=2;goto B58c07f;
case 0x58c087:c.instructions+=1;goto B58c087;
case 0x58c08c:goto L58c08c;
case 0x58c08e:c.instructions+=3;goto B58c08e;
case 0x58c090:c.instructions+=2;goto B58c090;
case 0x58c094:c.instructions+=1;goto B58c094;
case 0x58c099:goto L58c099;
case 0x58c09b:c.instructions+=4;goto B58c09b;
case 0x58c09f:c.instructions+=3;goto B58c09f;
case 0x58c0a0:c.instructions+=2;goto B58c0a0;
case 0x58c0a2:c.instructions+=1;goto B58c0a2;
case 0x58c0a7:goto L58c0a7;
case 0x58c0aa:c.instructions+=4;goto B58c0aa;
case 0x58c0ab:c.instructions+=3;goto B58c0ab;
case 0x58c0ac:c.instructions+=2;goto B58c0ac;
case 0x58c0b2:c.instructions+=1;goto B58c0b2;
case 0x58c0c0:goto L58c0c0;
case 0x58c0c5:c.instructions+=3;goto B58c0c5;
case 0x58c0cb:c.instructions+=2;goto B58c0cb;
case 0x58c0cd:c.instructions+=1;goto B58c0cd;
case 0x58c0cf:goto L58c0cf;
case 0x58c0d5:c.instructions+=7;goto B58c0d5;
case 0x58c0da:c.instructions+=6;goto B58c0da;
case 0x58c0dd:c.instructions+=5;goto B58c0dd;
case 0x58c0e2:c.instructions+=4;goto B58c0e2;
case 0x58c0e8:c.instructions+=3;goto B58c0e8;
case 0x58c0ed:c.instructions+=2;goto B58c0ed;
case 0x58c0f2:c.instructions+=1;goto B58c0f2;
case 0x58c0f7:goto L58c0f7;
case 0x58c0fa:goto L58c0fa;
case 0x58c101:c.instructions+=3;goto B58c101;
case 0x58c106:c.instructions+=2;goto B58c106;
case 0x58c107:c.instructions+=1;goto B58c107;
case 0x58c10c:goto L58c10c;
case 0x58c10f:c.instructions+=2;goto B58c10f;
case 0x58c111:c.instructions+=1;goto B58c111;
case 0x58c113:goto L58c113;
case 0x58c114:c.instructions+=9;goto B58c114;
case 0x58c116:c.instructions+=8;goto B58c116;
case 0x58c11a:c.instructions+=7;goto B58c11a;
case 0x58c11f:c.instructions+=6;goto B58c11f;
case 0x58c120:c.instructions+=5;goto B58c120;
case 0x58c124:c.instructions+=4;goto B58c124;
case 0x58c12b:c.instructions+=3;goto B58c12b;
case 0x58c132:c.instructions+=2;goto B58c132;
case 0x58c139:c.instructions+=1;goto B58c139;
case 0x58c13e:goto L58c13e;
case 0x58c141:c.instructions+=6;goto B58c141;
case 0x58c143:c.instructions+=5;goto B58c143;
case 0x58c147:c.instructions+=4;goto B58c147;
case 0x58c148:c.instructions+=3;goto B58c148;
case 0x58c14c:c.instructions+=2;goto B58c14c;
case 0x58c150:c.instructions+=1;goto B58c150;
case 0x58c155:goto L58c155;
case 0x58c159:c.instructions+=5;goto B58c159;
case 0x58c15d:c.instructions+=4;goto B58c15d;
case 0x58c15e:c.instructions+=3;goto B58c15e;
case 0x58c15f:c.instructions+=2;goto B58c15f;
case 0x58c164:c.instructions+=1;goto B58c164;
case 0x58c169:goto L58c169;
case 0x58c16a:goto L58c16a;
case 0x58c170:c.instructions+=1;goto B58c170;
case 0x58c180:goto L58c180;
case 0x58c185:c.instructions+=3;goto B58c185;
case 0x58c18b:c.instructions+=2;goto B58c18b;
case 0x58c18d:c.instructions+=1;goto B58c18d;
case 0x58c18f:goto L58c18f;
case 0x58c195:c.instructions+=7;goto B58c195;
case 0x58c19a:c.instructions+=6;goto B58c19a;
case 0x58c19d:c.instructions+=5;goto B58c19d;
case 0x58c1a2:c.instructions+=4;goto B58c1a2;
case 0x58c1a8:c.instructions+=3;goto B58c1a8;
case 0x58c1ad:c.instructions+=2;goto B58c1ad;
case 0x58c1b2:c.instructions+=1;goto B58c1b2;
case 0x58c1b7:goto L58c1b7;
case 0x58c1ba:goto L58c1ba;
case 0x58c1c1:c.instructions+=3;goto B58c1c1;
case 0x58c1c6:c.instructions+=2;goto B58c1c6;
case 0x58c1c7:c.instructions+=1;goto B58c1c7;
case 0x58c1cc:goto L58c1cc;
case 0x58c1cf:c.instructions+=2;goto B58c1cf;
case 0x58c1d1:c.instructions+=1;goto B58c1d1;
case 0x58c1d3:goto L58c1d3;
case 0x58c1d5:c.instructions+=8;goto B58c1d5;
case 0x58c1d9:c.instructions+=7;goto B58c1d9;
case 0x58c1de:c.instructions+=6;goto B58c1de;
case 0x58c1df:c.instructions+=5;goto B58c1df;
case 0x58c1e3:c.instructions+=4;goto B58c1e3;
case 0x58c1ea:c.instructions+=3;goto B58c1ea;
case 0x58c1f1:c.instructions+=2;goto B58c1f1;
case 0x58c1f9:c.instructions+=1;goto B58c1f9;
case 0x58c1fe:goto L58c1fe;
case 0x58c201:c.instructions+=4;goto B58c201;
case 0x58c205:c.instructions+=3;goto B58c205;
case 0x58c206:c.instructions+=2;goto B58c206;
case 0x58c20b:c.instructions+=1;goto B58c20b;
case 0x58c210:goto L58c210;
case 0x58c216:c.instructions+=1;goto B58c216;
case 0x58c220:goto L58c220;
case 0x58c225:c.instructions+=2;goto B58c225;
case 0x58c227:c.instructions+=1;goto B58c227;
case 0x58c229:goto L58c229;
case 0x58c22e:c.instructions+=2;goto B58c22e;
case 0x58c230:c.instructions+=1;goto B58c230;
case 0x58c232:goto L58c232;
case 0x58c237:goto L58c237;
case 0x58c23c:c.instructions+=2;goto B58c23c;
case 0x58c23e:c.instructions+=1;goto B58c23e;
case 0x58c240:goto L58c240;
case 0x58c245:goto L58c245;
case 0x58c250:goto L58c250;
case 0x58c255:c.instructions+=2;goto B58c255;
case 0x58c257:c.instructions+=1;goto B58c257;
case 0x58c259:goto L58c259;
case 0x58c25e:goto L58c25e;
case 0x58c270:goto L58c270;
case 0x58c275:c.instructions+=2;goto B58c275;
case 0x58c277:c.instructions+=1;goto B58c277;
case 0x58c279:goto L58c279;
case 0x58c27e:goto L58c27e;
case 0x58c290:goto L58c290;
case 0x58c295:c.instructions+=2;goto B58c295;
case 0x58c297:c.instructions+=1;goto B58c297;
case 0x58c299:goto L58c299;
case 0x58c29e:goto L58c29e;
case 0x58c2b0:goto L58c2b0;
case 0x58c2b5:c.instructions+=2;goto B58c2b5;
case 0x58c2b7:c.instructions+=1;goto B58c2b7;
case 0x58c2b9:goto L58c2b9;
case 0x58c2be:goto L58c2be;
case 0x58c2d0:goto L58c2d0;
case 0x58c2d5:c.instructions+=2;goto B58c2d5;
case 0x58c2d7:c.instructions+=1;goto B58c2d7;
case 0x58c2d9:goto L58c2d9;
case 0x58c2de:goto L58c2de;
case 0x58c2f0:goto L58c2f0;
case 0x58c300:goto L58c300;
case 0x58c305:c.instructions+=2;goto B58c305;
case 0x58c307:c.instructions+=1;goto B58c307;
case 0x58c309:goto L58c309;
case 0x58c30e:goto L58c30e;
case 0x58c320:goto L58c320;
case 0x58c325:c.instructions+=2;goto B58c325;
case 0x58c327:c.instructions+=1;goto B58c327;
case 0x58c329:goto L58c329;
case 0x58c32e:goto L58c32e;
case 0x58c333:goto L58c333;
case 0x58c33d:c.instructions+=2;goto B58c33d;
case 0x58c347:c.instructions+=1;goto B58c347;
case 0x58c34c:goto L58c34c;
case 0x58c356:goto L58c356;
case 0x58c360:goto L58c360;
case 0x58c361:c.instructions+=4;goto B58c361;
case 0x58c362:c.instructions+=3;goto B58c362;
case 0x58c366:c.instructions+=2;goto B58c366;
case 0x58c367:c.instructions+=1;goto B58c367;
case 0x58c36c:goto L58c36c;
case 0x58c36e:c.instructions+=1;goto B58c36e;
case 0x58c373:goto L58c373;
case 0x58c374:c.instructions+=2;goto B58c374;
case 0x58c376:c.instructions+=1;goto B58c376;
case 0x58c37b:goto L58c37b;
case 0x58c380:c.instructions+=3;goto B58c380;
case 0x58c381:c.instructions+=2;goto B58c381;
case 0x58c382:c.instructions+=1;goto B58c382;
case 0x58c387:goto L58c387;
case 0x58c38a:c.instructions+=2;goto B58c38a;
case 0x58c38f:c.instructions+=1;goto B58c38f;
case 0x58c390:goto L58c390;
case 0x58c394:c.instructions+=1;goto B58c394;
case 0x58c396:goto L58c396;
case 0x58c398:c.instructions+=1;goto B58c398;
case 0x58c39a:goto L58c39a;
case 0x58c39e:c.instructions+=1;goto B58c39e;
case 0x58c3a0:goto L58c3a0;
case 0x58c3a2:c.instructions+=3;goto B58c3a2;
case 0x58c3a3:c.instructions+=2;goto B58c3a3;
case 0x58c3a4:c.instructions+=1;goto B58c3a4;
case 0x58c3a9:goto L58c3a9;
case 0x58c3ac:goto L58c3ac;
case 0x58c3af:c.instructions+=2;goto B58c3af;
case 0x58c3b5:c.instructions+=1;goto B58c3b5;
case 0x58c3b7:goto L58c3b7;
case 0x58c3b8:c.instructions+=2;goto B58c3b8;
case 0x58c3b9:c.instructions+=1;goto B58c3b9;
case 0x58c3c0:goto L58c3c0;
case 0x58c3c6:c.instructions+=1;goto B58c3c6;
case 0x58c3c8:goto L58c3c8;
case 0x58c3cd:c.instructions+=2;goto B58c3cd;
case 0x58c3cf:c.instructions+=1;goto B58c3cf;
case 0x58c3d1:goto L58c3d1;
case 0x58c3d3:goto L58c3d3;
case 0x58c3d8:c.instructions+=2;goto B58c3d8;
case 0x58c3da:c.instructions+=1;goto B58c3da;
case 0x58c3dc:goto L58c3dc;
case 0x58c3e1:c.instructions+=2;goto B58c3e1;
case 0x58c3e3:c.instructions+=1;goto B58c3e3;
case 0x58c3e5:goto L58c3e5;
case 0x58c3ea:goto L58c3ea;
case 0x58c3ef:goto L58c3ef;
case 0x58c3f9:c.instructions+=2;goto B58c3f9;
case 0x58c403:c.instructions+=1;goto B58c403;
case 0x58c408:goto L58c408;
case 0x58c412:goto L58c412;
case 0x58c420:goto L58c420;
case 0x58c426:c.instructions+=11;goto B58c426;
case 0x58c428:c.instructions+=10;goto B58c428;
case 0x58c42d:c.instructions+=9;goto B58c42d;
case 0x58c42e:c.instructions+=8;goto B58c42e;
case 0x58c433:c.instructions+=7;goto B58c433;
case 0x58c43a:c.instructions+=6;goto B58c43a;
case 0x58c440:c.instructions+=5;goto B58c440;
case 0x58c441:c.instructions+=4;goto B58c441;
case 0x58c443:c.instructions+=3;goto B58c443;
case 0x58c445:c.instructions+=2;goto B58c445;
case 0x58c446:c.instructions+=1;goto B58c446;
case 0x58c448:goto L58c448;
case 0x58c44d:c.instructions+=3;goto B58c44d;
case 0x58c44f:c.instructions+=2;goto B58c44f;
case 0x58c454:c.instructions+=1;goto B58c454;
case 0x58c45a:goto L58c45a;
case 0x58c45c:goto L58c45c;
case 0x58c463:c.instructions+=2;goto B58c463;
case 0x58c46a:c.instructions+=1;goto B58c46a;
case 0x58c46c:goto L58c46c;
case 0x58c46e:c.instructions+=1;goto B58c46e;
case 0x58c473:goto L58c473;
case 0x58c476:c.instructions+=2;goto B58c476;
case 0x58c478:c.instructions+=1;goto B58c478;
case 0x58c47a:goto L58c47a;
case 0x58c47c:c.instructions+=2;goto B58c47c;
case 0x58c47f:c.instructions+=1;goto B58c47f;
case 0x58c481:goto L58c481;
case 0x58c483:goto L58c483;
case 0x58c48a:goto L58c48a;
case 0x58c491:c.instructions+=4;goto B58c491;
case 0x58c498:c.instructions+=3;goto B58c498;
case 0x58c499:c.instructions+=2;goto B58c499;
case 0x58c49a:c.instructions+=1;goto B58c49a;
case 0x58c49f:goto L58c49f;
case 0x58c4a2:c.instructions+=2;goto B58c4a2;
case 0x58c4a4:c.instructions+=1;goto B58c4a4;
case 0x58c4aa:goto L58c4aa;
case 0x58c4b1:c.instructions+=8;goto B58c4b1;
case 0x58c4b8:c.instructions+=7;goto B58c4b8;
case 0x58c4b9:c.instructions+=6;goto B58c4b9;
case 0x58c4bd:c.instructions+=5;goto B58c4bd;
case 0x58c4be:c.instructions+=4;goto B58c4be;
case 0x58c4c2:c.instructions+=3;goto B58c4c2;
case 0x58c4c9:c.instructions+=2;goto B58c4c9;
case 0x58c4d0:c.instructions+=1;goto B58c4d0;
case 0x58c4d5:goto L58c4d5;
case 0x58c4d8:c.instructions+=6;goto B58c4d8;
case 0x58c4da:c.instructions+=5;goto B58c4da;
case 0x58c4de:c.instructions+=4;goto B58c4de;
case 0x58c4df:c.instructions+=3;goto B58c4df;
case 0x58c4e3:c.instructions+=2;goto B58c4e3;
case 0x58c4e7:c.instructions+=1;goto B58c4e7;
case 0x58c4ec:goto L58c4ec;
case 0x58c4f1:goto L58c4f1;
case 0x58c4f3:c.instructions+=1;goto B58c4f3;
case 0x58c4f5:goto L58c4f5;
case 0x58c4f8:c.instructions+=2;goto B58c4f8;
case 0x58c4fd:c.instructions+=1;goto B58c4fd;
case 0x58c4ff:goto L58c4ff;
case 0x58c503:c.instructions+=6;goto B58c503;
case 0x58c504:c.instructions+=5;goto B58c504;
case 0x58c508:c.instructions+=4;goto B58c508;
case 0x58c509:c.instructions+=3;goto B58c509;
case 0x58c50a:c.instructions+=2;goto B58c50a;
case 0x58c50f:c.instructions+=1;goto B58c50f;
case 0x58c514:goto L58c514;
case 0x58c51b:c.instructions+=2;goto B58c51b;
case 0x58c51d:c.instructions+=1;goto B58c51d;
case 0x58c51f:goto L58c51f;
case 0x58c521:c.instructions+=2;goto B58c521;
case 0x58c523:c.instructions+=1;goto B58c523;
case 0x58c525:goto L58c525;
case 0x58c527:c.instructions+=5;goto B58c527;
case 0x58c52a:c.instructions+=4;goto B58c52a;
case 0x58c52c:c.instructions+=3;goto B58c52c;
case 0x58c52d:c.instructions+=2;goto B58c52d;
case 0x58c530:c.instructions+=1;goto B58c530;
case 0x58c535:goto L58c535;
case 0x58c537:c.instructions+=3;goto B58c537;
case 0x58c53a:c.instructions+=2;goto B58c53a;
case 0x58c53c:c.instructions+=1;goto B58c53c;
case 0x58c53e:goto L58c53e;
case 0x58c53f:c.instructions+=1;goto B58c53f;
case 0x58c544:goto L58c544;
case 0x58c547:goto L58c547;
case 0x58c54b:c.instructions+=13;goto B58c54b;
case 0x58c54f:c.instructions+=12;goto B58c54f;
case 0x58c550:c.instructions+=11;goto B58c550;
case 0x58c557:c.instructions+=10;goto B58c557;
case 0x58c55b:c.instructions+=9;goto B58c55b;
case 0x58c55f:c.instructions+=8;goto B58c55f;
case 0x58c563:c.instructions+=7;goto B58c563;
case 0x58c564:c.instructions+=6;goto B58c564;
case 0x58c568:c.instructions+=5;goto B58c568;
case 0x58c569:c.instructions+=4;goto B58c569;
case 0x58c56b:c.instructions+=3;goto B58c56b;
case 0x58c572:c.instructions+=2;goto B58c572;
case 0x58c579:c.instructions+=1;goto B58c579;
case 0x58c57e:goto L58c57e;
case 0x58c582:c.instructions+=3;goto B58c582;
case 0x58c585:c.instructions+=2;goto B58c585;
case 0x58c589:c.instructions+=1;goto B58c589;
case 0x58c58e:goto L58c58e;
case 0x58c590:c.instructions+=2;goto B58c590;
case 0x58c592:c.instructions+=1;goto B58c592;
case 0x58c594:goto L58c594;
case 0x58c596:c.instructions+=5;goto B58c596;
case 0x58c599:c.instructions+=4;goto B58c599;
case 0x58c59a:c.instructions+=3;goto B58c59a;
case 0x58c59c:c.instructions+=2;goto B58c59c;
case 0x58c59d:c.instructions+=1;goto B58c59d;
case 0x58c5a2:goto L58c5a2;
case 0x58c5a6:c.instructions+=7;goto B58c5a6;
case 0x58c5a8:c.instructions+=6;goto B58c5a8;
case 0x58c5ab:c.instructions+=5;goto B58c5ab;
case 0x58c5ae:c.instructions+=4;goto B58c5ae;
case 0x58c5b0:c.instructions+=3;goto B58c5b0;
case 0x58c5b2:c.instructions+=2;goto B58c5b2;
case 0x58c5b5:c.instructions+=1;goto B58c5b5;
case 0x58c5b7:goto L58c5b7;
case 0x58c5b8:c.instructions+=1;goto B58c5b8;
case 0x58c5bd:goto L58c5bd;
case 0x58c5c0:goto L58c5c0;
case 0x58c5c4:c.instructions+=2;goto B58c5c4;
case 0x58c5c6:c.instructions+=1;goto B58c5c6;
case 0x58c5c8:goto L58c5c8;
case 0x58c5cc:c.instructions+=4;goto B58c5cc;
case 0x58c5ce:c.instructions+=3;goto B58c5ce;
case 0x58c5d9:c.instructions+=2;goto B58c5d9;
case 0x58c5da:c.instructions+=1;goto B58c5da;
case 0x58c5dc:goto L58c5dc;
case 0x58c5e0:goto L58c5e0;
case 0x58c5e2:c.instructions+=6;goto B58c5e2;
case 0x58c5e4:c.instructions+=5;goto B58c5e4;
case 0x58c5e7:c.instructions+=4;goto B58c5e7;
case 0x58c5e9:c.instructions+=3;goto B58c5e9;
case 0x58c5ea:c.instructions+=2;goto B58c5ea;
case 0x58c5ed:c.instructions+=1;goto B58c5ed;
case 0x58c5f2:goto L58c5f2;
case 0x58c5f6:c.instructions+=4;goto B58c5f6;
case 0x58c5fa:c.instructions+=3;goto B58c5fa;
case 0x58c5fd:c.instructions+=2;goto B58c5fd;
case 0x58c5ff:c.instructions+=1;goto B58c5ff;
case 0x58c601:goto L58c601;
case 0x58c602:goto L58c602;
case 0x58c609:c.instructions+=5;goto B58c609;
case 0x58c60a:c.instructions+=4;goto B58c60a;
case 0x58c60b:c.instructions+=3;goto B58c60b;
case 0x58c612:c.instructions+=2;goto B58c612;
case 0x58c618:c.instructions+=1;goto B58c618;
case 0x58c620:goto L58c620;
case 0x58c625:c.instructions+=9;goto B58c625;
case 0x58c626:c.instructions+=8;goto B58c626;
case 0x58c627:c.instructions+=7;goto B58c627;
case 0x58c628:c.instructions+=6;goto B58c628;
case 0x58c629:c.instructions+=5;goto B58c629;
case 0x58c62d:c.instructions+=4;goto B58c62d;
case 0x58c632:c.instructions+=3;goto B58c632;
case 0x58c634:c.instructions+=2;goto B58c634;
case 0x58c639:c.instructions+=1;goto B58c639;
case 0x58c640:goto L58c640;
case 0x58c643:c.instructions+=1;goto B58c643;
case 0x58c645:goto L58c645;
case 0x58c648:c.instructions+=2;goto B58c648;
case 0x58c64d:c.instructions+=1;goto B58c64d;
case 0x58c64f:goto L58c64f;
case 0x58c651:goto L58c651;
case 0x58c653:goto L58c653;
case 0x58c655:c.instructions+=2;goto B58c655;
case 0x58c656:c.instructions+=1;goto B58c656;
case 0x58c65b:goto L58c65b;
case 0x58c65f:c.instructions+=3;goto B58c65f;
case 0x58c662:c.instructions+=2;goto B58c662;
case 0x58c664:c.instructions+=1;goto B58c664;
case 0x58c666:goto L58c666;
case 0x58c667:c.instructions+=1;goto B58c667;
case 0x58c66c:goto L58c66c;
case 0x58c66f:goto L58c66f;
case 0x58c670:c.instructions+=3;goto B58c670;
case 0x58c671:c.instructions+=2;goto B58c671;
case 0x58c676:c.instructions+=1;goto B58c676;
case 0x58c67b:goto L58c67b;
case 0x58c67c:c.instructions+=3;goto B58c67c;
case 0x58c67d:c.instructions+=2;goto B58c67d;
case 0x58c67e:c.instructions+=1;goto B58c67e;
case 0x58c683:goto L58c683;
case 0x58c686:c.instructions+=4;goto B58c686;
case 0x58c687:c.instructions+=3;goto B58c687;
case 0x58c688:c.instructions+=2;goto B58c688;
case 0x58c689:c.instructions+=1;goto B58c689;
case 0x58c690:goto L58c690;
case 0x58c691:c.instructions+=7;goto B58c691;
case 0x58c695:c.instructions+=6;goto B58c695;
case 0x58c696:c.instructions+=5;goto B58c696;
case 0x58c698:c.instructions+=4;goto B58c698;
case 0x58c69c:c.instructions+=3;goto B58c69c;
case 0x58c69d:c.instructions+=2;goto B58c69d;
case 0x58c6a5:c.instructions+=1;goto B58c6a5;
case 0x58c6aa:goto L58c6aa;
case 0x58c6ae:c.instructions+=2;goto B58c6ae;
case 0x58c6b0:c.instructions+=1;goto B58c6b0;
case 0x58c6b5:goto L58c6b5;
case 0x58c6b8:c.instructions+=1;goto B58c6b8;
case 0x58c6ba:goto L58c6ba;
case 0x58c6bd:c.instructions+=2;goto B58c6bd;
case 0x58c6c2:c.instructions+=1;goto B58c6c2;
case 0x58c6c4:goto L58c6c4;
case 0x58c6c6:goto L58c6c6;
case 0x58c6c8:goto L58c6c8;
case 0x58c6cc:c.instructions+=4;goto B58c6cc;
case 0x58c6cf:c.instructions+=3;goto B58c6cf;
case 0x58c6d2:c.instructions+=2;goto B58c6d2;
case 0x58c6d5:c.instructions+=1;goto B58c6d5;
case 0x58c6d7:goto L58c6d7;
case 0x58c6da:c.instructions+=1;goto B58c6da;
case 0x58c6dc:goto L58c6dc;
case 0x58c6de:c.instructions+=3;goto B58c6de;
case 0x58c6df:c.instructions+=2;goto B58c6df;
case 0x58c6e0:c.instructions+=1;goto B58c6e0;
case 0x58c6e5:goto L58c6e5;
case 0x58c6e8:goto L58c6e8;
case 0x58c6e9:c.instructions+=2;goto B58c6e9;
case 0x58c6ea:c.instructions+=1;goto B58c6ea;
case 0x58c6f0:goto L58c6f0;
case 0x58c6f4:c.instructions+=3;goto B58c6f4;
case 0x58c6f8:c.instructions+=2;goto B58c6f8;
case 0x58c6f9:c.instructions+=1;goto B58c6f9;
case 0x58c6fe:goto L58c6fe;
case 0x58c700:goto L58c700;
case 0x58c703:c.instructions+=5;goto B58c703;
case 0x58c704:c.instructions+=4;goto B58c704;
case 0x58c705:c.instructions+=3;goto B58c705;
case 0x58c706:c.instructions+=2;goto B58c706;
case 0x58c708:c.instructions+=1;goto B58c708;
case 0x58c70d:goto L58c70d;
case 0x58c710:c.instructions+=2;goto B58c710;
case 0x58c712:c.instructions+=1;goto B58c712;
case 0x58c714:goto L58c714;
case 0x58c715:c.instructions+=5;goto B58c715;
case 0x58c716:c.instructions+=4;goto B58c716;
case 0x58c719:c.instructions+=3;goto B58c719;
case 0x58c71a:c.instructions+=2;goto B58c71a;
case 0x58c71d:c.instructions+=1;goto B58c71d;
case 0x58c720:goto L58c720;
case 0x58c721:c.instructions+=3;goto B58c721;
case 0x58c725:c.instructions+=2;goto B58c725;
case 0x58c728:c.instructions+=1;goto B58c728;
case 0x58c72e:goto L58c72e;
case 0x58c731:c.instructions+=1;goto B58c731;
case 0x58c737:goto L58c737;
case 0x58c73c:goto L58c73c;
case 0x58c73f:c.instructions+=3;goto B58c73f;
case 0x58c741:c.instructions+=2;goto B58c741;
case 0x58c746:c.instructions+=1;goto B58c746;
case 0x58c748:goto L58c748;
case 0x58c74b:c.instructions+=1;goto B58c74b;
case 0x58c74d:goto L58c74d;
case 0x58c750:c.instructions+=1;goto B58c750;
case 0x58c752:goto L58c752;
case 0x58c755:c.instructions+=3;goto B58c755;
case 0x58c757:c.instructions+=2;goto B58c757;
case 0x58c759:c.instructions+=1;goto B58c759;
case 0x58c75b:goto L58c75b;
case 0x58c760:goto L58c760;
case 0x58c763:c.instructions+=1;goto B58c763;
case 0x58c765:goto L58c765;
case 0x58c767:c.instructions+=2;goto B58c767;
case 0x58c769:c.instructions+=1;goto B58c769;
case 0x58c76b:goto L58c76b;
case 0x58c76d:goto L58c76d;
case 0x58c770:goto L58c770;
case 0x58c773:c.instructions+=1;goto B58c773;
case 0x58c779:goto L58c779;
case 0x58c77b:c.instructions+=2;goto B58c77b;
case 0x58c77c:c.instructions+=1;goto B58c77c;
case 0x58c781:goto L58c781;
case 0x58c783:c.instructions+=4;goto B58c783;
case 0x58c787:c.instructions+=3;goto B58c787;
case 0x58c78a:c.instructions+=2;goto B58c78a;
case 0x58c78c:c.instructions+=1;goto B58c78c;
case 0x58c78e:goto L58c78e;
case 0x58c78f:c.instructions+=3;goto B58c78f;
case 0x58c794:c.instructions+=2;goto B58c794;
case 0x58c795:c.instructions+=1;goto B58c795;
case 0x58c79a:goto L58c79a;
case 0x58c79d:c.instructions+=2;goto B58c79d;
case 0x58c79e:c.instructions+=1;goto B58c79e;
case 0x58c7a3:goto L58c7a3;
case 0x58c7a6:c.instructions+=3;goto B58c7a6;
case 0x58c7a8:c.instructions+=2;goto B58c7a8;
case 0x58c7ac:c.instructions+=1;goto B58c7ac;
case 0x58c7b2:goto L58c7b2;
case 0x58c7b7:c.instructions+=4;goto B58c7b7;
case 0x58c7b9:c.instructions+=3;goto B58c7b9;
case 0x58c7bb:c.instructions+=2;goto B58c7bb;
case 0x58c7bc:c.instructions+=1;goto B58c7bc;
case 0x58c7c1:goto L58c7c1;
case 0x58c7c4:goto L58c7c4;
case 0x58c7c7:c.instructions+=2;goto B58c7c7;
case 0x58c7ca:c.instructions+=1;goto B58c7ca;
case 0x58c7cc:goto L58c7cc;
case 0x58c7d1:c.instructions+=1;goto B58c7d1;
case 0x58c7d3:goto L58c7d3;
case 0x58c7d6:c.instructions+=1;goto B58c7d6;
case 0x58c7d8:goto L58c7d8;
case 0x58c7db:c.instructions+=1;goto B58c7db;
case 0x58c7dd:goto L58c7dd;
case 0x58c7e2:c.instructions+=1;goto B58c7e2;
case 0x58c7e4:goto L58c7e4;
case 0x58c7e7:c.instructions+=1;goto B58c7e7;
case 0x58c7e9:goto L58c7e9;
case 0x58c7ec:c.instructions+=1;goto B58c7ec;
case 0x58c7ee:goto L58c7ee;
case 0x58c7f3:c.instructions+=1;goto B58c7f3;
case 0x58c7f5:goto L58c7f5;
case 0x58c7f8:c.instructions+=1;goto B58c7f8;
case 0x58c7fa:goto L58c7fa;
case 0x58c7fd:c.instructions+=1;goto B58c7fd;
case 0x58c7ff:goto L58c7ff;
case 0x58c804:c.instructions+=1;goto B58c804;
case 0x58c806:goto L58c806;
case 0x58c809:c.instructions+=1;goto B58c809;
case 0x58c80b:goto L58c80b;
case 0x58c80e:c.instructions+=1;goto B58c80e;
case 0x58c810:goto L58c810;
case 0x58c815:c.instructions+=1;goto B58c815;
case 0x58c817:goto L58c817;
case 0x58c81a:c.instructions+=1;goto B58c81a;
case 0x58c81c:goto L58c81c;
case 0x58c821:goto L58c821;
case 0x58c825:c.instructions+=2;goto B58c825;
case 0x58c827:c.instructions+=1;goto B58c827;
case 0x58c829:goto L58c829;
case 0x58c82a:c.instructions+=4;goto B58c82a;
case 0x58c82f:c.instructions+=3;goto B58c82f;
case 0x58c831:c.instructions+=2;goto B58c831;
case 0x58c832:c.instructions+=1;goto B58c832;
case 0x58c837:goto L58c837;
case 0x58c83a:c.instructions+=2;goto B58c83a;
case 0x58c83b:c.instructions+=1;goto B58c83b;
case 0x58c840:goto L58c840;
case 0x58c843:c.instructions+=2;goto B58c843;
case 0x58c844:c.instructions+=1;goto B58c844;
case 0x58c849:goto L58c849;
case 0x58c84c:c.instructions+=3;goto B58c84c;
case 0x58c84e:c.instructions+=2;goto B58c84e;
case 0x58c852:c.instructions+=1;goto B58c852;
case 0x58c854:goto L58c854;
case 0x58c856:c.instructions+=1;goto B58c856;
case 0x58c85b:goto L58c85b;
case 0x58c85c:c.instructions+=6;goto B58c85c;
case 0x58c85d:c.instructions+=5;goto B58c85d;
case 0x58c85e:c.instructions+=4;goto B58c85e;
case 0x58c861:c.instructions+=3;goto B58c861;
case 0x58c862:c.instructions+=2;goto B58c862;
case 0x58c865:c.instructions+=1;goto B58c865;
case 0x58c868:goto L58c868;
case 0x58c86d:c.instructions+=4;goto B58c86d;
case 0x58c86f:c.instructions+=3;goto B58c86f;
case 0x58c871:c.instructions+=2;goto B58c871;
case 0x58c872:c.instructions+=1;goto B58c872;
case 0x58c877:goto L58c877;
case 0x58c87a:goto L58c87a;
case 0x58c87f:c.instructions+=1;goto B58c87f;
case 0x58c881:goto L58c881;
case 0x58c886:c.instructions+=1;goto B58c886;
case 0x58c888:goto L58c888;
case 0x58c889:c.instructions+=6;goto B58c889;
case 0x58c88a:c.instructions+=5;goto B58c88a;
case 0x58c88b:c.instructions+=4;goto B58c88b;
case 0x58c88d:c.instructions+=3;goto B58c88d;
case 0x58c88e:c.instructions+=2;goto B58c88e;
case 0x58c891:c.instructions+=1;goto B58c891;
case 0x58c894:goto L58c894;
case 0x58c899:c.instructions+=3;goto B58c899;
case 0x58c89b:c.instructions+=2;goto B58c89b;
case 0x58c8a0:c.instructions+=1;goto B58c8a0;
case 0x58c8a4:goto L58c8a4;
case 0x58c8a6:goto L58c8a6;
case 0x58c8a8:c.instructions+=2;goto B58c8a8;
case 0x58c8a9:c.instructions+=1;goto B58c8a9;
case 0x58c8ae:goto L58c8ae;
case 0x58c8b0:c.instructions+=3;goto B58c8b0;
case 0x58c8b1:c.instructions+=2;goto B58c8b1;
case 0x58c8b8:c.instructions+=1;goto B58c8b8;
case 0x58c8bd:goto L58c8bd;
case 0x58c8be:c.instructions+=6;goto B58c8be;
case 0x58c8bf:c.instructions+=5;goto B58c8bf;
case 0x58c8c4:c.instructions+=4;goto B58c8c4;
case 0x58c8c8:c.instructions+=3;goto B58c8c8;
case 0x58c8ca:c.instructions+=2;goto B58c8ca;
case 0x58c8cb:c.instructions+=1;goto B58c8cb;
case 0x58c8d0:goto L58c8d0;
case 0x58c8d3:c.instructions+=9;goto B58c8d3;
case 0x58c8d5:c.instructions+=8;goto B58c8d5;
case 0x58c8d7:c.instructions+=7;goto B58c8d7;
case 0x58c8d9:c.instructions+=6;goto B58c8d9;
case 0x58c8da:c.instructions+=5;goto B58c8da;
case 0x58c8df:c.instructions+=4;goto B58c8df;
case 0x58c8e3:c.instructions+=3;goto B58c8e3;
case 0x58c8e4:c.instructions+=2;goto B58c8e4;
case 0x58c8e9:c.instructions+=1;goto B58c8e9;
case 0x58c8ee:goto L58c8ee;
case 0x58c8f0:c.instructions+=1;goto B58c8f0;
case 0x58c8f5:goto L58c8f5;
case 0x58c8f7:c.instructions+=2;goto B58c8f7;
case 0x58c8f9:c.instructions+=1;goto B58c8f9;
case 0x58c8fb:goto L58c8fb;
case 0x58c900:goto L58c900;
case 0x58c901:c.instructions+=7;goto B58c901;
case 0x58c902:c.instructions+=6;goto B58c902;
case 0x58c903:c.instructions+=5;goto B58c903;
case 0x58c90a:c.instructions+=4;goto B58c90a;
case 0x58c90d:c.instructions+=3;goto B58c90d;
case 0x58c90e:c.instructions+=2;goto B58c90e;
case 0x58c911:c.instructions+=1;goto B58c911;
case 0x58c914:goto L58c914;
case 0x58c915:c.instructions+=7;goto B58c915;
case 0x58c916:c.instructions+=6;goto B58c916;
case 0x58c91b:c.instructions+=5;goto B58c91b;
case 0x58c91f:c.instructions+=4;goto B58c91f;
case 0x58c921:c.instructions+=3;goto B58c921;
case 0x58c922:c.instructions+=2;goto B58c922;
case 0x58c927:c.instructions+=1;goto B58c927;
case 0x58c92c:goto L58c92c;
case 0x58c930:c.instructions+=11;goto B58c930;
case 0x58c934:c.instructions+=10;goto B58c934;
case 0x58c937:c.instructions+=9;goto B58c937;
case 0x58c939:c.instructions+=8;goto B58c939;
case 0x58c93a:c.instructions+=7;goto B58c93a;
case 0x58c93b:c.instructions+=6;goto B58c93b;
case 0x58c93c:c.instructions+=5;goto B58c93c;
case 0x58c941:c.instructions+=4;goto B58c941;
case 0x58c945:c.instructions+=3;goto B58c945;
case 0x58c946:c.instructions+=2;goto B58c946;
case 0x58c94b:c.instructions+=1;goto B58c94b;
case 0x58c950:goto L58c950;
case 0x58c952:c.instructions+=1;goto B58c952;
case 0x58c957:goto L58c957;
case 0x58c959:c.instructions+=2;goto B58c959;
case 0x58c95b:c.instructions+=1;goto B58c95b;
case 0x58c95d:goto L58c95d;
case 0x58c95e:c.instructions+=1;goto B58c95e;
case 0x58c963:goto L58c963;
case 0x58c965:c.instructions+=1;goto B58c965;
case 0x58c96a:goto L58c96a;
case 0x58c96f:goto L58c96f;
case 0x58c970:c.instructions+=7;goto B58c970;
case 0x58c971:c.instructions+=6;goto B58c971;
case 0x58c978:c.instructions+=5;goto B58c978;
case 0x58c97a:c.instructions+=4;goto B58c97a;
case 0x58c97b:c.instructions+=3;goto B58c97b;
case 0x58c97c:c.instructions+=2;goto B58c97c;
case 0x58c97f:c.instructions+=1;goto B58c97f;
case 0x58c990:goto L58c990;
case 0x58c993:c.instructions+=4;goto B58c993;
case 0x58c994:c.instructions+=3;goto B58c994;
case 0x58c996:c.instructions+=2;goto B58c996;
case 0x58c99a:c.instructions+=1;goto B58c99a;
case 0x58c99f:goto L58c99f;
case 0x58c9a2:c.instructions+=2;goto B58c9a2;
case 0x58c9a4:c.instructions+=1;goto B58c9a4;
case 0x58c9a6:goto L58c9a6;
case 0x58c9a9:c.instructions+=3;goto B58c9a9;
case 0x58c9aa:c.instructions+=2;goto B58c9aa;
case 0x58c9ad:c.instructions+=1;goto B58c9ad;
case 0x58c9b0:goto L58c9b0;
case 0x58c9b1:c.instructions+=3;goto B58c9b1;
case 0x58c9b2:c.instructions+=2;goto B58c9b2;
case 0x58c9b3:c.instructions+=1;goto B58c9b3;
case 0x58c9b8:goto L58c9b8;
case 0x58c9bb:c.instructions+=3;goto B58c9bb;
case 0x58c9bd:c.instructions+=2;goto B58c9bd;
case 0x58c9c2:c.instructions+=1;goto B58c9c2;
case 0x58c9c4:goto L58c9c4;
case 0x58c9c7:c.instructions+=1;goto B58c9c7;
case 0x58c9c9:goto L58c9c9;
case 0x58c9cc:c.instructions+=1;goto B58c9cc;
case 0x58c9ce:goto L58c9ce;
case 0x58c9d1:c.instructions+=3;goto B58c9d1;
case 0x58c9d3:c.instructions+=2;goto B58c9d3;
case 0x58c9d5:c.instructions+=1;goto B58c9d5;
case 0x58c9d7:goto L58c9d7;
case 0x58c9da:c.instructions+=1;goto B58c9da;
case 0x58c9dc:goto L58c9dc;
case 0x58c9de:c.instructions+=2;goto B58c9de;
case 0x58c9e0:c.instructions+=1;goto B58c9e0;
case 0x58c9e2:goto L58c9e2;
case 0x58c9e4:goto L58c9e4;
case 0x58c9e7:goto L58c9e7;
case 0x58c9ea:c.instructions+=1;goto B58c9ea;
case 0x58c9f0:goto L58c9f0;
case 0x58c9f5:goto L58c9f5;
case 0x58c9f8:c.instructions+=2;goto B58c9f8;
case 0x58c9fb:c.instructions+=1;goto B58c9fb;
case 0x58c9fd:goto L58c9fd;
case 0x58ca02:c.instructions+=1;goto B58ca02;
case 0x58ca04:goto L58ca04;
case 0x58ca07:c.instructions+=1;goto B58ca07;
case 0x58ca09:goto L58ca09;
case 0x58ca0e:c.instructions+=1;goto B58ca0e;
case 0x58ca10:goto L58ca10;
case 0x58ca13:c.instructions+=1;goto B58ca13;
case 0x58ca15:goto L58ca15;
case 0x58ca1a:c.instructions+=1;goto B58ca1a;
case 0x58ca1c:goto L58ca1c;
case 0x58ca1f:c.instructions+=1;goto B58ca1f;
case 0x58ca21:goto L58ca21;
case 0x58ca26:c.instructions+=1;goto B58ca26;
case 0x58ca28:goto L58ca28;
case 0x58ca2b:c.instructions+=1;goto B58ca2b;
case 0x58ca2d:goto L58ca2d;
case 0x58ca32:c.instructions+=1;goto B58ca32;
case 0x58ca34:goto L58ca34;
case 0x58ca37:c.instructions+=1;goto B58ca37;
case 0x58ca39:goto L58ca39;
case 0x58ca3e:goto L58ca3e;
case 0x58ca42:c.instructions+=2;goto B58ca42;
case 0x58ca44:c.instructions+=1;goto B58ca44;
case 0x58ca46:goto L58ca46;
case 0x58ca49:c.instructions+=2;goto B58ca49;
case 0x58ca4c:c.instructions+=1;goto B58ca4c;
case 0x58ca4e:goto L58ca4e;
case 0x58ca53:c.instructions+=1;goto B58ca53;
case 0x58ca55:goto L58ca55;
case 0x58ca58:c.instructions+=1;goto B58ca58;
case 0x58ca5a:goto L58ca5a;
case 0x58ca5f:c.instructions+=1;goto B58ca5f;
case 0x58ca61:goto L58ca61;
case 0x58ca64:c.instructions+=1;goto B58ca64;
case 0x58ca66:goto L58ca66;
case 0x58ca6b:c.instructions+=1;goto B58ca6b;
case 0x58ca6d:goto L58ca6d;
case 0x58ca70:c.instructions+=1;goto B58ca70;
case 0x58ca72:goto L58ca72;
case 0x58ca77:c.instructions+=1;goto B58ca77;
case 0x58ca79:goto L58ca79;
case 0x58ca7c:c.instructions+=1;goto B58ca7c;
case 0x58ca7e:goto L58ca7e;
case 0x58ca83:c.instructions+=1;goto B58ca83;
case 0x58ca85:goto L58ca85;
case 0x58ca88:c.instructions+=1;goto B58ca88;
case 0x58ca8a:goto L58ca8a;
case 0x58ca8f:goto L58ca8f;
case 0x58ca90:c.instructions+=3;goto B58ca90;
case 0x58ca95:c.instructions+=2;goto B58ca95;
case 0x58ca96:c.instructions+=1;goto B58ca96;
case 0x58ca9b:goto L58ca9b;
case 0x58ca9e:c.instructions+=2;goto B58ca9e;
case 0x58ca9f:c.instructions+=1;goto B58ca9f;
case 0x58caa4:goto L58caa4;
case 0x58caa7:c.instructions+=3;goto B58caa7;
case 0x58caa9:c.instructions+=2;goto B58caa9;
case 0x58caad:c.instructions+=1;goto B58caad;
case 0x58caaf:goto L58caaf;
case 0x58cab4:c.instructions+=4;goto B58cab4;
case 0x58cab6:c.instructions+=3;goto B58cab6;
case 0x58cab8:c.instructions+=2;goto B58cab8;
case 0x58cab9:c.instructions+=1;goto B58cab9;
case 0x58cabe:goto L58cabe;
case 0x58cac1:goto L58cac1;
case 0x58cac2:c.instructions+=2;goto B58cac2;
case 0x58cac5:c.instructions+=1;goto B58cac5;
case 0x58cacb:goto L58cacb;
case 0x58cad0:goto L58cad0;
case 0x58cad3:c.instructions+=2;goto B58cad3;
case 0x58cad6:c.instructions+=1;goto B58cad6;
case 0x58cad8:goto L58cad8;
case 0x58cadd:c.instructions+=1;goto B58cadd;
case 0x58cadf:goto L58cadf;
case 0x58cae1:c.instructions+=1;goto B58cae1;
case 0x58cae6:goto L58cae6;
case 0x58cae7:c.instructions+=6;goto B58cae7;
case 0x58cae8:c.instructions+=5;goto B58cae8;
case 0x58cae9:c.instructions+=4;goto B58cae9;
case 0x58caec:c.instructions+=3;goto B58caec;
case 0x58caed:c.instructions+=2;goto B58caed;
case 0x58caf0:c.instructions+=1;goto B58caf0;
case 0x58caf3:goto L58caf3;
case 0x58caf6:c.instructions+=1;goto B58caf6;
case 0x58caf8:goto L58caf8;
case 0x58cafd:c.instructions+=1;goto B58cafd;
case 0x58caff:goto L58caff;
case 0x58cb02:c.instructions+=1;goto B58cb02;
case 0x58cb04:goto L58cb04;
case 0x58cb09:c.instructions+=1;goto B58cb09;
case 0x58cb0b:goto L58cb0b;
case 0x58cb0e:c.instructions+=1;goto B58cb0e;
case 0x58cb10:goto L58cb10;
case 0x58cb15:c.instructions+=1;goto B58cb15;
case 0x58cb17:goto L58cb17;
case 0x58cb1a:c.instructions+=1;goto B58cb1a;
case 0x58cb1c:goto L58cb1c;
case 0x58cb21:c.instructions+=1;goto B58cb21;
case 0x58cb23:goto L58cb23;
case 0x58cb26:c.instructions+=1;goto B58cb26;
case 0x58cb28:goto L58cb28;
case 0x58cb2d:goto L58cb2d;
case 0x58cb31:c.instructions+=2;goto B58cb31;
case 0x58cb33:c.instructions+=1;goto B58cb33;
case 0x58cb35:goto L58cb35;
case 0x58cb38:c.instructions+=2;goto B58cb38;
case 0x58cb3b:c.instructions+=1;goto B58cb3b;
case 0x58cb3d:goto L58cb3d;
case 0x58cb42:c.instructions+=1;goto B58cb42;
case 0x58cb44:goto L58cb44;
case 0x58cb47:c.instructions+=1;goto B58cb47;
case 0x58cb49:goto L58cb49;
case 0x58cb4e:c.instructions+=1;goto B58cb4e;
case 0x58cb50:goto L58cb50;
case 0x58cb53:c.instructions+=1;goto B58cb53;
case 0x58cb55:goto L58cb55;
case 0x58cb5a:c.instructions+=1;goto B58cb5a;
case 0x58cb5c:goto L58cb5c;
case 0x58cb5f:c.instructions+=1;goto B58cb5f;
case 0x58cb61:goto L58cb61;
case 0x58cb66:c.instructions+=1;goto B58cb66;
case 0x58cb68:goto L58cb68;
case 0x58cb6b:c.instructions+=1;goto B58cb6b;
case 0x58cb6d:goto L58cb6d;
case 0x58cb72:c.instructions+=1;goto B58cb72;
case 0x58cb74:goto L58cb74;
case 0x58cb77:c.instructions+=1;goto B58cb77;
case 0x58cb79:goto L58cb79;
case 0x58cb7e:goto L58cb7e;
case 0x58cb7f:c.instructions+=3;goto B58cb7f;
case 0x58cb84:c.instructions+=2;goto B58cb84;
case 0x58cb85:c.instructions+=1;goto B58cb85;
case 0x58cb8a:goto L58cb8a;
case 0x58cb8d:c.instructions+=2;goto B58cb8d;
case 0x58cb8e:c.instructions+=1;goto B58cb8e;
case 0x58cb93:goto L58cb93;
case 0x58cb96:c.instructions+=3;goto B58cb96;
case 0x58cb98:c.instructions+=2;goto B58cb98;
case 0x58cb9c:c.instructions+=1;goto B58cb9c;
case 0x58cba2:goto L58cba2;
case 0x58cba7:c.instructions+=4;goto B58cba7;
case 0x58cba9:c.instructions+=3;goto B58cba9;
case 0x58cbab:c.instructions+=2;goto B58cbab;
case 0x58cbac:c.instructions+=1;goto B58cbac;
case 0x58cbb1:goto L58cbb1;
case 0x58cbb4:goto L58cbb4;
case 0x58cbb5:c.instructions+=2;goto B58cbb5;
case 0x58cbb8:c.instructions+=1;goto B58cbb8;
case 0x58cbbe:goto L58cbbe;
case 0x58cbc3:goto L58cbc3;
case 0x58cbca:c.instructions+=4;goto B58cbca;
case 0x58cbcc:c.instructions+=3;goto B58cbcc;
case 0x58cbd1:c.instructions+=2;goto B58cbd1;
case 0x58cbd6:c.instructions+=1;goto B58cbd6;
case 0x58cbda:goto L58cbda;
case 0x58cbdc:goto L58cbdc;
case 0x58cbde:c.instructions+=3;goto B58cbde;
case 0x58cbdf:c.instructions+=2;goto B58cbdf;
case 0x58cbe1:c.instructions+=1;goto B58cbe1;
case 0x58cbe6:goto L58cbe6;
case 0x58cbe9:c.instructions+=2;goto B58cbe9;
case 0x58cbec:c.instructions+=1;goto B58cbec;
case 0x58cbee:goto L58cbee;
case 0x58cbf3:c.instructions+=1;goto B58cbf3;
case 0x58cbf5:goto L58cbf5;
case 0x58cbf8:c.instructions+=1;goto B58cbf8;
case 0x58cbfa:goto L58cbfa;
case 0x58cbff:c.instructions+=1;goto B58cbff;
case 0x58cc01:goto L58cc01;
case 0x58cc04:c.instructions+=1;goto B58cc04;
case 0x58cc06:goto L58cc06;
case 0x58cc0b:c.instructions+=1;goto B58cc0b;
case 0x58cc0d:goto L58cc0d;
case 0x58cc10:c.instructions+=1;goto B58cc10;
case 0x58cc12:goto L58cc12;
case 0x58cc17:c.instructions+=1;goto B58cc17;
case 0x58cc19:goto L58cc19;
case 0x58cc1c:c.instructions+=1;goto B58cc1c;
case 0x58cc1e:goto L58cc1e;
case 0x58cc23:c.instructions+=1;goto B58cc23;
case 0x58cc25:goto L58cc25;
case 0x58cc28:c.instructions+=1;goto B58cc28;
case 0x58cc2a:goto L58cc2a;
case 0x58cc2f:goto L58cc2f;
case 0x58cc34:c.instructions+=1;goto B58cc34;
case 0x58cc3a:goto L58cc3a;
case 0x58cc3d:c.instructions+=3;goto B58cc3d;
case 0x58cc40:c.instructions+=2;goto B58cc40;
case 0x58cc45:c.instructions+=1;goto B58cc45;
case 0x58cc47:goto L58cc47;
case 0x58cc4c:c.instructions+=1;goto B58cc4c;
case 0x58cc4e:goto L58cc4e;
case 0x58cc51:c.instructions+=1;goto B58cc51;
case 0x58cc53:goto L58cc53;
case 0x58cc58:c.instructions+=1;goto B58cc58;
case 0x58cc5a:goto L58cc5a;
case 0x58cc5d:c.instructions+=1;goto B58cc5d;
case 0x58cc5f:goto L58cc5f;
case 0x58cc64:c.instructions+=1;goto B58cc64;
case 0x58cc66:goto L58cc66;
case 0x58cc69:c.instructions+=1;goto B58cc69;
case 0x58cc6b:goto L58cc6b;
case 0x58cc70:c.instructions+=1;goto B58cc70;
case 0x58cc72:goto L58cc72;
case 0x58cc75:c.instructions+=1;goto B58cc75;
case 0x58cc77:goto L58cc77;
case 0x58cc7c:c.instructions+=1;goto B58cc7c;
case 0x58cc7e:goto L58cc7e;
case 0x58cc81:c.instructions+=1;goto B58cc81;
case 0x58cc83:goto L58cc83;
case 0x58cc88:goto L58cc88;
case 0x58cc89:c.instructions+=6;goto B58cc89;
case 0x58cc8a:c.instructions+=5;goto B58cc8a;
case 0x58cc8f:c.instructions+=4;goto B58cc8f;
case 0x58cc93:c.instructions+=3;goto B58cc93;
case 0x58cc95:c.instructions+=2;goto B58cc95;
case 0x58cc96:c.instructions+=1;goto B58cc96;
case 0x58cc9b:goto L58cc9b;
case 0x58cc9e:c.instructions+=9;goto B58cc9e;
case 0x58cca0:c.instructions+=8;goto B58cca0;
case 0x58cca2:c.instructions+=7;goto B58cca2;
case 0x58cca4:c.instructions+=6;goto B58cca4;
case 0x58cca5:c.instructions+=5;goto B58cca5;
case 0x58ccaa:c.instructions+=4;goto B58ccaa;
case 0x58ccae:c.instructions+=3;goto B58ccae;
case 0x58ccaf:c.instructions+=2;goto B58ccaf;
case 0x58ccb4:c.instructions+=1;goto B58ccb4;
case 0x58ccb9:goto L58ccb9;
case 0x58ccbb:c.instructions+=1;goto B58ccbb;
case 0x58ccc0:goto L58ccc0;
case 0x58ccc2:c.instructions+=1;goto B58ccc2;
case 0x58ccc4:goto L58ccc4;
case 0x58ccc6:goto L58ccc6;
case 0x58ccc7:c.instructions+=2;goto B58ccc7;
case 0x58ccca:c.instructions+=1;goto B58ccca;
case 0x58ccd0:goto L58ccd0;
case 0x58ccd4:c.instructions+=3;goto B58ccd4;
case 0x58ccd8:c.instructions+=2;goto B58ccd8;
case 0x58ccdd:c.instructions+=1;goto B58ccdd;
case 0x58cce0:goto L58cce0;
case 0x58cce3:c.instructions+=2;goto B58cce3;
case 0x58cce6:c.instructions+=1;goto B58cce6;
case 0x58cce8:goto L58cce8;
case 0x58cced:c.instructions+=1;goto B58cced;
case 0x58ccef:goto L58ccef;
case 0x58ccf4:goto L58ccf4;
case 0x58ccf5:c.instructions+=2;goto B58ccf5;
case 0x58ccfc:c.instructions+=1;goto B58ccfc;
case 0x58cd01:goto L58cd01;
case 0x58cd03:c.instructions+=1;goto B58cd03;
case 0x58cd08:goto L58cd08;
case 0x58cd09:c.instructions+=6;goto B58cd09;
case 0x58cd0a:c.instructions+=5;goto B58cd0a;
case 0x58cd0b:c.instructions+=4;goto B58cd0b;
case 0x58cd0e:c.instructions+=3;goto B58cd0e;
case 0x58cd0f:c.instructions+=2;goto B58cd0f;
case 0x58cd12:c.instructions+=1;goto B58cd12;
case 0x58cd15:goto L58cd15;
case 0x58cd18:c.instructions+=1;goto B58cd18;
case 0x58cd1a:goto L58cd1a;
case 0x58cd1f:c.instructions+=1;goto B58cd1f;
case 0x58cd21:goto L58cd21;
case 0x58cd24:c.instructions+=1;goto B58cd24;
case 0x58cd26:goto L58cd26;
case 0x58cd2b:c.instructions+=1;goto B58cd2b;
case 0x58cd2d:goto L58cd2d;
case 0x58cd30:c.instructions+=1;goto B58cd30;
case 0x58cd32:goto L58cd32;
case 0x58cd37:c.instructions+=1;goto B58cd37;
case 0x58cd39:goto L58cd39;
case 0x58cd3c:c.instructions+=1;goto B58cd3c;
case 0x58cd3e:goto L58cd3e;
case 0x58cd43:c.instructions+=1;goto B58cd43;
case 0x58cd45:goto L58cd45;
case 0x58cd48:c.instructions+=1;goto B58cd48;
case 0x58cd4a:goto L58cd4a;
case 0x58cd4f:goto L58cd4f;
case 0x58cd53:c.instructions+=2;goto B58cd53;
case 0x58cd58:c.instructions+=1;goto B58cd58;
case 0x58cd5e:goto L58cd5e;
case 0x58cd61:c.instructions+=3;goto B58cd61;
case 0x58cd64:c.instructions+=2;goto B58cd64;
case 0x58cd69:c.instructions+=1;goto B58cd69;
case 0x58cd6b:goto L58cd6b;
case 0x58cd70:c.instructions+=1;goto B58cd70;
case 0x58cd72:goto L58cd72;
case 0x58cd75:c.instructions+=1;goto B58cd75;
case 0x58cd77:goto L58cd77;
case 0x58cd7c:c.instructions+=1;goto B58cd7c;
case 0x58cd7e:goto L58cd7e;
case 0x58cd81:c.instructions+=1;goto B58cd81;
case 0x58cd83:goto L58cd83;
case 0x58cd88:c.instructions+=1;goto B58cd88;
case 0x58cd8a:goto L58cd8a;
case 0x58cd8d:c.instructions+=1;goto B58cd8d;
case 0x58cd8f:goto L58cd8f;
case 0x58cd94:c.instructions+=1;goto B58cd94;
case 0x58cd96:goto L58cd96;
case 0x58cd99:c.instructions+=1;goto B58cd99;
case 0x58cd9b:goto L58cd9b;
case 0x58cda0:c.instructions+=1;goto B58cda0;
case 0x58cda2:goto L58cda2;
case 0x58cda5:c.instructions+=1;goto B58cda5;
case 0x58cda7:goto L58cda7;
case 0x58cdac:goto L58cdac;
case 0x58cdad:c.instructions+=6;goto B58cdad;
case 0x58cdae:c.instructions+=5;goto B58cdae;
case 0x58cdb3:c.instructions+=4;goto B58cdb3;
case 0x58cdb7:c.instructions+=3;goto B58cdb7;
case 0x58cdb9:c.instructions+=2;goto B58cdb9;
case 0x58cdba:c.instructions+=1;goto B58cdba;
case 0x58cdbf:goto L58cdbf;
case 0x58cdc2:c.instructions+=3;goto B58cdc2;
case 0x58cdc5:c.instructions+=2;goto B58cdc5;
case 0x58cdc7:c.instructions+=1;goto B58cdc7;
case 0x58cdc9:goto L58cdc9;
case 0x58cdcd:c.instructions+=7;goto B58cdcd;
case 0x58cdcf:c.instructions+=6;goto B58cdcf;
case 0x58cdd1:c.instructions+=5;goto B58cdd1;
case 0x58cdd2:c.instructions+=4;goto B58cdd2;
case 0x58cdd7:c.instructions+=3;goto B58cdd7;
case 0x58cddb:c.instructions+=2;goto B58cddb;
case 0x58cddc:c.instructions+=1;goto B58cddc;
case 0x58cdde:goto L58cdde;
case 0x58cde2:c.instructions+=6;goto B58cde2;
case 0x58cde3:c.instructions+=5;goto B58cde3;
case 0x58cde4:c.instructions+=4;goto B58cde4;
case 0x58cde5:c.instructions+=3;goto B58cde5;
case 0x58cdea:c.instructions+=2;goto B58cdea;
case 0x58cdee:c.instructions+=1;goto B58cdee;
case 0x58cdef:goto L58cdef;
case 0x58cdf4:c.instructions+=1;goto B58cdf4;
case 0x58cdf9:goto L58cdf9;
case 0x58cdfb:c.instructions+=1;goto B58cdfb;
case 0x58ce00:goto L58ce00;
case 0x58ce02:c.instructions+=1;goto B58ce02;
case 0x58ce08:goto L58ce08;
case 0x58ce0a:goto L58ce0a;
case 0x58ce0b:c.instructions+=2;goto B58ce0b;
case 0x58ce0e:c.instructions+=1;goto B58ce0e;
case 0x58ce14:goto L58ce14;
case 0x58ce19:goto L58ce19;
case 0x58ce1a:c.instructions+=7;goto B58ce1a;
case 0x58ce1b:c.instructions+=6;goto B58ce1b;
case 0x58ce22:c.instructions+=5;goto B58ce22;
case 0x58ce24:c.instructions+=4;goto B58ce24;
case 0x58ce25:c.instructions+=3;goto B58ce25;
case 0x58ce26:c.instructions+=2;goto B58ce26;
case 0x58ce29:c.instructions+=1;goto B58ce29;
case 0x58ce30:goto L58ce30;
case 0x58ce35:c.instructions+=2;goto B58ce35;
case 0x58ce37:c.instructions+=1;goto B58ce37;
case 0x58ce39:goto L58ce39;
case 0x58ce3e:goto L58ce3e;
case 0x58ce40:c.instructions+=1;goto B58ce40;
case 0x58ce42:goto L58ce42;
case 0x58ce45:c.instructions+=1;goto B58ce45;
case 0x58ce46:goto L58ce46;
case 0x58ce4a:c.instructions+=2;goto B58ce4a;
case 0x58ce4c:c.instructions+=1;goto B58ce4c;
case 0x58ce4e:goto L58ce4e;
case 0x58ce52:c.instructions+=1;goto B58ce52;
case 0x58ce57:goto L58ce57;
case 0x58ce5e:c.instructions+=1;goto B58ce5e;
case 0x58ce60:goto L58ce60;
case 0x58ce61:c.instructions+=1;goto B58ce61;
case 0x58ce63:goto L58ce63;
case 0x58ce66:c.instructions+=1;goto B58ce66;
case 0x58ce67:goto L58ce67;
case 0x58ce68:c.instructions+=1;goto B58ce68;
case 0x58ce69:goto L58ce69;
case 0x58ce6c:c.instructions+=1;goto B58ce6c;
case 0x58ce6e:goto L58ce6e;
case 0x58ce72:c.instructions+=3;goto B58ce72;
case 0x58ce77:c.instructions+=2;goto B58ce77;
case 0x58ce7c:c.instructions+=1;goto B58ce7c;
case 0x58ce80:goto L58ce80;
case 0x58ce82:c.instructions+=1;goto B58ce82;
case 0x58ce84:goto L58ce84;
case 0x58ce87:c.instructions+=3;goto B58ce87;
case 0x58ce88:c.instructions+=2;goto B58ce88;
case 0x58ce8d:c.instructions+=1;goto B58ce8d;
case 0x58ce8f:goto L58ce8f;
case 0x58ce92:c.instructions+=1;goto B58ce92;
case 0x58ce93:goto L58ce93;
case 0x58ce96:c.instructions+=1;goto B58ce96;
case 0x58ce97:goto L58ce97;
case 0x58ce9a:c.instructions+=1;goto B58ce9a;
case 0x58ce9c:goto L58ce9c;
case 0x58cea0:c.instructions+=3;goto B58cea0;
case 0x58cea5:c.instructions+=2;goto B58cea5;
case 0x58ceaa:c.instructions+=1;goto B58ceaa;
case 0x58ceb0:goto L58ceb0;
case 0x58ceb2:c.instructions+=1;goto B58ceb2;
case 0x58ceb4:goto L58ceb4;
case 0x58ceb7:c.instructions+=3;goto B58ceb7;
case 0x58ceb8:c.instructions+=2;goto B58ceb8;
case 0x58cebd:c.instructions+=1;goto B58cebd;
case 0x58cebf:goto L58cebf;
case 0x58cec2:c.instructions+=1;goto B58cec2;
case 0x58cec3:goto L58cec3;
case 0x58cec6:c.instructions+=1;goto B58cec6;
case 0x58cec7:goto L58cec7;
case 0x58ceca:c.instructions+=1;goto B58ceca;
case 0x58cecc:goto L58cecc;
case 0x58ced0:c.instructions+=3;goto B58ced0;
case 0x58ced5:c.instructions+=2;goto B58ced5;
case 0x58ceda:c.instructions+=1;goto B58ceda;
case 0x58cee0:goto L58cee0;
case 0x58cee2:c.instructions+=1;goto B58cee2;
case 0x58cee4:goto L58cee4;
case 0x58cee7:c.instructions+=3;goto B58cee7;
case 0x58cee8:c.instructions+=2;goto B58cee8;
case 0x58ceed:c.instructions+=1;goto B58ceed;
case 0x58ceef:goto L58ceef;
case 0x58cef2:c.instructions+=1;goto B58cef2;
case 0x58cef3:goto L58cef3;
case 0x58cef6:c.instructions+=1;goto B58cef6;
case 0x58cef7:goto L58cef7;
case 0x58cefa:c.instructions+=1;goto B58cefa;
case 0x58cefc:goto L58cefc;
case 0x58cf00:c.instructions+=3;goto B58cf00;
case 0x58cf05:c.instructions+=2;goto B58cf05;
case 0x58cf0a:c.instructions+=1;goto B58cf0a;
case 0x58cf10:goto L58cf10;
case 0x58cf12:c.instructions+=1;goto B58cf12;
case 0x58cf14:goto L58cf14;
case 0x58cf17:c.instructions+=3;goto B58cf17;
case 0x58cf18:c.instructions+=2;goto B58cf18;
case 0x58cf1d:c.instructions+=1;goto B58cf1d;
case 0x58cf1f:goto L58cf1f;
case 0x58cf22:c.instructions+=1;goto B58cf22;
case 0x58cf23:goto L58cf23;
case 0x58cf26:c.instructions+=1;goto B58cf26;
case 0x58cf27:goto L58cf27;
case 0x58cf2a:c.instructions+=1;goto B58cf2a;
case 0x58cf30:goto L58cf30;
case 0x58cf34:c.instructions+=3;goto B58cf34;
case 0x58cf39:c.instructions+=2;goto B58cf39;
case 0x58cf3e:c.instructions+=1;goto B58cf3e;
case 0x58cf40:goto L58cf40;
case 0x58cf42:c.instructions+=1;goto B58cf42;
case 0x58cf44:goto L58cf44;
case 0x58cf47:c.instructions+=3;goto B58cf47;
case 0x58cf48:c.instructions+=2;goto B58cf48;
case 0x58cf4d:c.instructions+=1;goto B58cf4d;
case 0x58cf4f:goto L58cf4f;
case 0x58cf52:c.instructions+=1;goto B58cf52;
case 0x58cf53:goto L58cf53;
case 0x58cf56:c.instructions+=1;goto B58cf56;
case 0x58cf60:goto L58cf60;
case 0x58cf64:c.instructions+=4;goto B58cf64;
case 0x58cf68:c.instructions+=3;goto B58cf68;
case 0x58cf69:c.instructions+=2;goto B58cf69;
case 0x58cf6a:c.instructions+=1;goto B58cf6a;
case 0x58cf6f:goto L58cf6f;
case 0x58cf72:c.instructions+=2;goto B58cf72;
case 0x58cf75:c.instructions+=1;goto B58cf75;
case 0x58cf77:goto L58cf77;
case 0x58cf7a:c.instructions+=1;goto B58cf7a;
case 0x58cf7c:goto L58cf7c;
case 0x58cf7f:c.instructions+=1;goto B58cf7f;
case 0x58cf81:goto L58cf81;
case 0x58cf82:c.instructions+=5;goto B58cf82;
case 0x58cf83:c.instructions+=4;goto B58cf83;
case 0x58cf88:c.instructions+=3;goto B58cf88;
case 0x58cf8a:c.instructions+=2;goto B58cf8a;
case 0x58cf8c:c.instructions+=1;goto B58cf8c;
case 0x58cf8d:goto L58cf8d;
case 0x58cf8f:c.instructions+=1;goto B58cf8f;
case 0x58cf90:goto L58cf90;
case 0x58cf91:c.instructions+=7;goto B58cf91;
case 0x58cf92:c.instructions+=6;goto B58cf92;
case 0x58cf96:c.instructions+=5;goto B58cf96;
case 0x58cf97:c.instructions+=4;goto B58cf97;
case 0x58cf9b:c.instructions+=3;goto B58cf9b;
case 0x58cf9c:c.instructions+=2;goto B58cf9c;
case 0x58cf9d:c.instructions+=1;goto B58cf9d;
case 0x58cfa2:goto L58cfa2;
case 0x58cfa5:c.instructions+=2;goto B58cfa5;
case 0x58cfa8:c.instructions+=1;goto B58cfa8;
case 0x58cfaa:goto L58cfaa;
case 0x58cfad:c.instructions+=1;goto B58cfad;
case 0x58cfaf:goto L58cfaf;
case 0x58cfb2:c.instructions+=1;goto B58cfb2;
case 0x58cfb4:goto L58cfb4;
case 0x58cfb5:c.instructions+=5;goto B58cfb5;
case 0x58cfb6:c.instructions+=4;goto B58cfb6;
case 0x58cfbb:c.instructions+=3;goto B58cfbb;
case 0x58cfbd:c.instructions+=2;goto B58cfbd;
case 0x58cfbf:c.instructions+=1;goto B58cfbf;
case 0x58cfc1:goto L58cfc1;
case 0x58cfc7:c.instructions+=4;goto B58cfc7;
case 0x58cfc8:c.instructions+=3;goto B58cfc8;
case 0x58cfc9:c.instructions+=2;goto B58cfc9;
case 0x58cfca:c.instructions+=1;goto B58cfca;
case 0x58cfcb:goto L58cfcb;
case 0x58cfce:c.instructions+=1;goto B58cfce;
case 0x58cfd0:goto L58cfd0;
case 0x58cfd6:c.instructions+=4;goto B58cfd6;
case 0x58cfd7:c.instructions+=3;goto B58cfd7;
case 0x58cfd8:c.instructions+=2;goto B58cfd8;
case 0x58cfd9:c.instructions+=1;goto B58cfd9;
case 0x58cfda:goto L58cfda;
case 0x58cfdd:c.instructions+=9;goto B58cfdd;
case 0x58cfe0:c.instructions+=8;goto B58cfe0;
case 0x58cfe3:c.instructions+=7;goto B58cfe3;
case 0x58cfe6:c.instructions+=6;goto B58cfe6;
case 0x58cfec:c.instructions+=5;goto B58cfec;
case 0x58cfee:c.instructions+=4;goto B58cfee;
case 0x58cff0:c.instructions+=3;goto B58cff0;
case 0x58cff4:c.instructions+=2;goto B58cff4;
case 0x58cff8:c.instructions+=1;goto B58cff8;
case 0x58cffa:goto L58cffa;
default:missing_instruction(c.pc);}
B58c003:L58c003:{c.instructions+=8;NFSU2_TR(0x58c003);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58c007:{NFSU2_TR(0x58c007);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c009:{NFSU2_TR(0x58c009);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58c00d:{NFSU2_TR(0x58c00d);
__builtin_memmove(gp(0x7fbe58),(R+4),4);
}
B58c013:{NFSU2_TR(0x58c013);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c014:{NFSU2_TR(0x58c014);
__builtin_memmove((R+4),(R+24),4);
}
B58c016:{NFSU2_TR(0x58c016);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c01a:{NFSU2_TR(0x58c01a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c01full));
TAIL_STATIC(0x581d90u,581);
}
B58c01f:L58c01f:{c.instructions+=8;NFSU2_TR(0x58c01f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c023:{NFSU2_TR(0x58c023);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c025:{NFSU2_TR(0x58c025);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c029:{NFSU2_TR(0x58c029);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c02a:{NFSU2_TR(0x58c02a);
__builtin_memmove((R+4),(R+24),4);
}
B58c02c:{NFSU2_TR(0x58c02c);
__builtin_memmove(gp(0x7fbe5c),(R+0),4);
}
B58c031:{NFSU2_TR(0x58c031);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c035:{NFSU2_TR(0x58c035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c03aull));
TAIL_STATIC(0x581d90u,581);
}
B58c03a:L58c03a:{c.instructions+=8;NFSU2_TR(0x58c03a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c03e:{NFSU2_TR(0x58c03e);
__builtin_memmove((R+8),gp(0x7fbe5c),4);
}
B58c044:{NFSU2_TR(0x58c044);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c045:{NFSU2_TR(0x58c045);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c046:{NFSU2_TR(0x58c046);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c047:{NFSU2_TR(0x58c047);
w4(R+4,u32(0x89cf48ull));
}
B58c04c:{NFSU2_TR(0x58c04c);
__builtin_memmove(gp(0x7fbe64),(R+0),4);
}
B58c051:{NFSU2_TR(0x58c051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c056ull));
TAIL_STATIC(0x601d20u,601);
}
B58c056:L58c056:{c.instructions+=1;NFSU2_TR(0x58c056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c05bull));
TAIL_STATIC(0x589310u,589);
}
B58c05b:L58c05b:{c.instructions+=9;NFSU2_TR(0x58c05b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c05d:{NFSU2_TR(0x58c05d);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c05f:{NFSU2_TR(0x58c05f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c063:{NFSU2_TR(0x58c063);
s4(0x8669f4,u32(0x3ull));
}
B58c06d:{NFSU2_TR(0x58c06d);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58c071:{NFSU2_TR(0x58c071);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c078:{NFSU2_TR(0x58c078);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c07f:{NFSU2_TR(0x58c07f);
u8 U[5];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58c087:{NFSU2_TR(0x58c087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c08cull));
TAIL_STATIC(0x581d00u,581);
}
B58c08c:L58c08c:{c.instructions+=4;NFSU2_TR(0x58c08c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c08e:{NFSU2_TR(0x58c08e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c090:{NFSU2_TR(0x58c090);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c094:{NFSU2_TR(0x58c094);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c099ull));
TAIL_STATIC(0x581d00u,581);
}
B58c099:L58c099:{c.instructions+=5;NFSU2_TR(0x58c099);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c09b:{NFSU2_TR(0x58c09b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58c09f:{NFSU2_TR(0x58c09f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c0a0:{NFSU2_TR(0x58c0a0);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c0a2:{NFSU2_TR(0x58c0a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c0a7ull));
TAIL_STATIC(0x585d50u,585);
}
B58c0a7:L58c0a7:{c.instructions+=5;NFSU2_TR(0x58c0a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58c0aa:{NFSU2_TR(0x58c0aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58c0ab:{NFSU2_TR(0x58c0ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58c0ac:{NFSU2_TR(0x58c0ac);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x410ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x410ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x410ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58c0b2:{NFSU2_TR(0x58c0b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c0c0:L58c0c0:{c.instructions+=4;NFSU2_TR(0x58c0c0);
__builtin_memmove((R+0),gp(0x86a5f0),1);
}
B58c0c5:{NFSU2_TR(0x58c0c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x410ull))));
}
B58c0cb:{NFSU2_TR(0x58c0cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58c0cd:{NFSU2_TR(0x58c0cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c0fa;}}
}
B58c0cf:L58c0cf:{c.instructions+=8;NFSU2_TR(0x58c0cf);
__builtin_memmove((R+8),gp(0x86a5f0),4);
}
B58c0d5:{NFSU2_TR(0x58c0d5);
w4(R+0,u32(0x86a5e8ull));
}
B58c0da:{NFSU2_TR(0x58c0da);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
}
B58c0dd:{NFSU2_TR(0x58c0dd);
u8 U[4];
w4(U+0,u32(0x782390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c0e2:{NFSU2_TR(0x58c0e2);
__builtin_memmove(gp(0x86a5f0),(R+8),4);
}
B58c0e8:{NFSU2_TR(0x58c0e8);
__builtin_memmove(gp(0x86a5e8),(R+0),4);
}
B58c0ed:{NFSU2_TR(0x58c0ed);
__builtin_memmove(gp(0x86a5ec),(R+0),4);
}
B58c0f2:{NFSU2_TR(0x58c0f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c0f7ull));
TAIL_STATIC(0x75c5edu,75c);
}
B58c0f7:L58c0f7:{c.instructions+=1;NFSU2_TR(0x58c0f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58c0fa:L58c0fa:{c.instructions+=4;NFSU2_TR(0x58c0fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c101:{NFSU2_TR(0x58c101);
u8 U[4];
w4(U+0,u32(0x86a5e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c106:{NFSU2_TR(0x58c106);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c107:{NFSU2_TR(0x58c107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c10cull));
TAIL_STATIC(0x585e80u,585);
}
B58c10c:L58c10c:{c.instructions+=3;NFSU2_TR(0x58c10c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58c10f:{NFSU2_TR(0x58c10f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58c111:{NFSU2_TR(0x58c111);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c16a;}}
}
B58c113:L58c113:{c.instructions+=10;NFSU2_TR(0x58c113);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c114:{NFSU2_TR(0x58c114);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B58c116:{NFSU2_TR(0x58c116);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c11a:{NFSU2_TR(0x58c11a);
u8 U[4];
w4(U+0,u32(0x86a5e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c11f:{NFSU2_TR(0x58c11f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c120:{NFSU2_TR(0x58c120);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58c124:{NFSU2_TR(0x58c124);
u8 U[8];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c12b:{NFSU2_TR(0x58c12b);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c132:{NFSU2_TR(0x58c132);
u8 U[5];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58c139:{NFSU2_TR(0x58c139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c13eull));
TAIL_STATIC(0x588010u,588);
}
B58c13e:L58c13e:{c.instructions+=7;NFSU2_TR(0x58c13e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58c141:{NFSU2_TR(0x58c141);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c143:{NFSU2_TR(0x58c143);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58c147:{NFSU2_TR(0x58c147);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c148:{NFSU2_TR(0x58c148);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c14c:{NFSU2_TR(0x58c14c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c150:{NFSU2_TR(0x58c150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c155ull));
TAIL_STATIC(0x581d90u,581);
}
B58c155:L58c155:{c.instructions+=6;NFSU2_TR(0x58c155);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58c159:{NFSU2_TR(0x58c159);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58c15d:{NFSU2_TR(0x58c15d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c15e:{NFSU2_TR(0x58c15e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c15f:{NFSU2_TR(0x58c15f);
w4(R+4,u32(0x89cf48ull));
}
B58c164:{NFSU2_TR(0x58c164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c169ull));
TAIL_STATIC(0x601eb0u,601);
}
B58c169:L58c169:{c.instructions+=1;NFSU2_TR(0x58c169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58c16a:L58c16a:{c.instructions+=2;NFSU2_TR(0x58c16a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x410ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x410ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x410ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58c170:{NFSU2_TR(0x58c170);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c180:L58c180:{c.instructions+=4;NFSU2_TR(0x58c180);
__builtin_memmove((R+0),gp(0x86a5fc),1);
}
B58c185:{NFSU2_TR(0x58c185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B58c18b:{NFSU2_TR(0x58c18b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58c18d:{NFSU2_TR(0x58c18d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c1ba;}}
}
B58c18f:L58c18f:{c.instructions+=8;NFSU2_TR(0x58c18f);
__builtin_memmove((R+8),gp(0x86a5fc),4);
}
B58c195:{NFSU2_TR(0x58c195);
w4(R+0,u32(0x86a5f4ull));
}
B58c19a:{NFSU2_TR(0x58c19a);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
}
B58c19d:{NFSU2_TR(0x58c19d);
u8 U[4];
w4(U+0,u32(0x7823a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c1a2:{NFSU2_TR(0x58c1a2);
__builtin_memmove(gp(0x86a5fc),(R+8),4);
}
B58c1a8:{NFSU2_TR(0x58c1a8);
__builtin_memmove(gp(0x86a5f4),(R+0),4);
}
B58c1ad:{NFSU2_TR(0x58c1ad);
__builtin_memmove(gp(0x86a5f8),(R+0),4);
}
B58c1b2:{NFSU2_TR(0x58c1b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c1b7ull));
TAIL_STATIC(0x75c5edu,75c);
}
B58c1b7:L58c1b7:{c.instructions+=1;NFSU2_TR(0x58c1b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58c1ba:L58c1ba:{c.instructions+=4;NFSU2_TR(0x58c1ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c1c1:{NFSU2_TR(0x58c1c1);
u8 U[4];
w4(U+0,u32(0x86a5f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c1c6:{NFSU2_TR(0x58c1c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c1c7:{NFSU2_TR(0x58c1c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c1ccull));
TAIL_STATIC(0x585e80u,585);
}
B58c1cc:L58c1cc:{c.instructions+=3;NFSU2_TR(0x58c1cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58c1cf:{NFSU2_TR(0x58c1cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58c1d1:{NFSU2_TR(0x58c1d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c210;}}
}
B58c1d3:L58c1d3:{c.instructions+=9;NFSU2_TR(0x58c1d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58c1d5:{NFSU2_TR(0x58c1d5);
__builtin_memmove((R+4),(R+16),4);
}
B58c1d9:{NFSU2_TR(0x58c1d9);
u8 U[4];
w4(U+0,u32(0x86a5f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c1de:{NFSU2_TR(0x58c1de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c1df:{NFSU2_TR(0x58c1df);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58c1e3:{NFSU2_TR(0x58c1e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c1ea:{NFSU2_TR(0x58c1ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c1f1:{NFSU2_TR(0x58c1f1);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58c1f9:{NFSU2_TR(0x58c1f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c1feull));
TAIL_STATIC(0x588010u,588);
}
B58c1fe:L58c1fe:{c.instructions+=5;NFSU2_TR(0x58c1fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58c201:{NFSU2_TR(0x58c201);
__builtin_memmove((R+8),(R+16),4);
}
B58c205:{NFSU2_TR(0x58c205);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c206:{NFSU2_TR(0x58c206);
w4(R+4,u32(0x89cf48ull));
}
B58c20b:{NFSU2_TR(0x58c20b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c210ull));
TAIL_STATIC(0x609b80u,609);
}
B58c210:L58c210:{c.instructions+=2;NFSU2_TR(0x58c210);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58c216:{NFSU2_TR(0x58c216);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c220:L58c220:{c.instructions+=3;NFSU2_TR(0x58c220);
__builtin_memmove((R+0),gp(0x7fbe78),1);
}
B58c225:{NFSU2_TR(0x58c225);
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
B58c227:{NFSU2_TR(0x58c227);
if(r1(R+518)){{goto L58c245;}}
}
B58c229:L58c229:{c.instructions+=3;NFSU2_TR(0x58c229);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B58c22e:{NFSU2_TR(0x58c22e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c230:{NFSU2_TR(0x58c230);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58c237;}}
}
B58c232:L58c232:{c.instructions+=1;NFSU2_TR(0x58c232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c237ull));
TAIL_STATIC(0x58bef0u,58b);
}
B58c237:L58c237:{c.instructions+=3;NFSU2_TR(0x58c237);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58c23c:{NFSU2_TR(0x58c23c);
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
B58c23e:{NFSU2_TR(0x58c23e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58c245;}}
}
B58c240:L58c240:{c.instructions+=1;NFSU2_TR(0x58c240);
TAIL_STATIC(0x589550u,589);
}
B58c245:L58c245:{c.instructions+=1;NFSU2_TR(0x58c245);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c250:L58c250:{c.instructions+=3;NFSU2_TR(0x58c250);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58c255:{NFSU2_TR(0x58c255);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c257:{NFSU2_TR(0x58c257);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58c25e;}}
}
B58c259:L58c259:{c.instructions+=1;NFSU2_TR(0x58c259);
TAIL_STATIC(0x589910u,589);
}
B58c25e:L58c25e:{c.instructions+=1;NFSU2_TR(0x58c25e);
TAIL_STATIC(0x5879d0u,587);
}
B58c270:L58c270:{c.instructions+=3;NFSU2_TR(0x58c270);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58c275:{NFSU2_TR(0x58c275);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c277:{NFSU2_TR(0x58c277);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58c27e;}}
}
B58c279:L58c279:{c.instructions+=1;NFSU2_TR(0x58c279);
TAIL_STATIC(0x589970u,589);
}
B58c27e:L58c27e:{c.instructions+=1;NFSU2_TR(0x58c27e);
TAIL_STATIC(0x587a30u,587);
}
B58c290:L58c290:{c.instructions+=3;NFSU2_TR(0x58c290);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58c295:{NFSU2_TR(0x58c295);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c297:{NFSU2_TR(0x58c297);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58c29e;}}
}
B58c299:L58c299:{c.instructions+=1;NFSU2_TR(0x58c299);
TAIL_STATIC(0x5899d0u,589);
}
B58c29e:L58c29e:{c.instructions+=1;NFSU2_TR(0x58c29e);
TAIL_STATIC(0x587a90u,587);
}
B58c2b0:L58c2b0:{c.instructions+=3;NFSU2_TR(0x58c2b0);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58c2b5:{NFSU2_TR(0x58c2b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c2b7:{NFSU2_TR(0x58c2b7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58c2be;}}
}
B58c2b9:L58c2b9:{c.instructions+=1;NFSU2_TR(0x58c2b9);
TAIL_STATIC(0x589a30u,589);
}
B58c2be:L58c2be:{c.instructions+=1;NFSU2_TR(0x58c2be);
TAIL_STATIC(0x589430u,589);
}
B58c2d0:L58c2d0:{c.instructions+=3;NFSU2_TR(0x58c2d0);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58c2d5:{NFSU2_TR(0x58c2d5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c2d7:{NFSU2_TR(0x58c2d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58c2de;}}
}
B58c2d9:L58c2d9:{c.instructions+=1;NFSU2_TR(0x58c2d9);
TAIL_STATIC(0x589b30u,589);
}
B58c2de:L58c2de:{c.instructions+=1;NFSU2_TR(0x58c2de);
TAIL_STATIC(0x587af0u,587);
}
B58c2f0:L58c2f0:{c.instructions+=1;NFSU2_TR(0x58c2f0);
TAIL_STATIC(0x589c90u,589);
}
B58c300:L58c300:{c.instructions+=3;NFSU2_TR(0x58c300);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58c305:{NFSU2_TR(0x58c305);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c307:{NFSU2_TR(0x58c307);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58c30e;}}
}
B58c309:L58c309:{c.instructions+=1;NFSU2_TR(0x58c309);
TAIL_STATIC(0x589be0u,589);
}
B58c30e:L58c30e:{c.instructions+=1;NFSU2_TR(0x58c30e);
TAIL_STATIC(0x587ba0u,587);
}
B58c320:L58c320:{c.instructions+=3;NFSU2_TR(0x58c320);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58c325:{NFSU2_TR(0x58c325);
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
B58c327:{NFSU2_TR(0x58c327);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58c356;}}
}
B58c329:L58c329:{c.instructions+=1;NFSU2_TR(0x58c329);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c32eull));
TAIL_STATIC(0x589830u,589);
}
B58c32e:L58c32e:{c.instructions+=1;NFSU2_TR(0x58c32e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c333ull));
TAIL_STATIC(0x586350u,586);
}
B58c333:L58c333:{c.instructions+=3;NFSU2_TR(0x58c333);
s4(0x7fbe80,u32(0xffffffffull));
}
B58c33d:{NFSU2_TR(0x58c33d);
s4(0x866a1c,u32(0x0ull));
}
B58c347:{NFSU2_TR(0x58c347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c34cull));
TAIL_STATIC(0x585720u,585);
}
B58c34c:L58c34c:{c.instructions+=1;NFSU2_TR(0x58c34c);
s4(0x866a14,u32(0x0ull));
}
B58c356:L58c356:{c.instructions+=1;NFSU2_TR(0x58c356);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c360:L58c360:{c.instructions+=5;NFSU2_TR(0x58c360);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c361:{NFSU2_TR(0x58c361);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c362:{NFSU2_TR(0x58c362);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58c366:{NFSU2_TR(0x58c366);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c367:{NFSU2_TR(0x58c367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c36cull));
TAIL_STATIC(0x583a70u,583);
}
B58c36c:L58c36c:{c.instructions+=2;NFSU2_TR(0x58c36c);
__builtin_memmove((R+24),(R+0),4);
}
B58c36e:{NFSU2_TR(0x58c36e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c373ull));
TAIL_STATIC(0x586010u,586);
}
B58c373:L58c373:{c.instructions+=3;NFSU2_TR(0x58c373);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c374:{NFSU2_TR(0x58c374);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B58c376:{NFSU2_TR(0x58c376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c37bull));
TAIL_STATIC(0x588170u,588);
}
B58c37b:L58c37b:{c.instructions+=4;NFSU2_TR(0x58c37b);
__builtin_memmove((R+0),gp(0x7fbe80),4);
}
B58c380:{NFSU2_TR(0x58c380);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c381:{NFSU2_TR(0x58c381);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c382:{NFSU2_TR(0x58c382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c387ull));
TAIL_STATIC(0x589fa0u,589);
}
B58c387:L58c387:{c.instructions+=3;NFSU2_TR(0x58c387);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58c38a:{NFSU2_TR(0x58c38a);
w4(R+24,u32(0x8693c8ull));
}
B58c38f:{NFSU2_TR(0x58c38f);
}
B58c390:L58c390:{c.instructions+=2;NFSU2_TR(0x58c390);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58c394:{NFSU2_TR(0x58c394);
if(r1(R+518)){{goto L58c3ac;}}
}
B58c396:L58c396:{c.instructions+=2;NFSU2_TR(0x58c396);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c398:{NFSU2_TR(0x58c398);
if(r1(R+518)){{goto L58c3ac;}}
}
B58c39a:L58c39a:{c.instructions+=2;NFSU2_TR(0x58c39a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58c39e:{NFSU2_TR(0x58c39e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58c3ac;}}
}
B58c3a0:L58c3a0:{c.instructions+=4;NFSU2_TR(0x58c3a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58c3a2:{NFSU2_TR(0x58c3a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c3a3:{NFSU2_TR(0x58c3a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c3a4:{NFSU2_TR(0x58c3a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c3a9ull));
TAIL_STATIC(0x589fa0u,589);
}
B58c3a9:L58c3a9:{c.instructions+=1;NFSU2_TR(0x58c3a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58c3ac:L58c3ac:{c.instructions+=3;NFSU2_TR(0x58c3ac);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B58c3af:{NFSU2_TR(0x58c3af);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x869468ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x869468ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58c3b5:{NFSU2_TR(0x58c3b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58c390u);}goto L58c390;}}
}
B58c3b7:L58c3b7:{c.instructions+=3;NFSU2_TR(0x58c3b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58c3b8:{NFSU2_TR(0x58c3b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58c3b9:{NFSU2_TR(0x58c3b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c3c0:L58c3c0:{c.instructions+=2;NFSU2_TR(0x58c3c0);
u8 U[6];
w1(R+523,sborrow<u32>(m4(0x7fbdb8),u32(0x1ull)));
s4(0x7fbdb8,u32(u32(m4(0x7fbdb8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x7fbdb8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x7fbdb8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x7fbdb8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58c3c6:{NFSU2_TR(0x58c3c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c412;}}
}
B58c3c8:L58c3c8:{c.instructions+=3;NFSU2_TR(0x58c3c8);
__builtin_memmove((R+0),gp(0x86675c),4);
}
B58c3cd:{NFSU2_TR(0x58c3cd);
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
B58c3cf:{NFSU2_TR(0x58c3cf);
if(r1(R+518)){{goto L58c3dc;}}
}
B58c3d1:L58c3d1:{c.instructions+=1;NFSU2_TR(0x58c3d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c3d3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58c3d3:L58c3d3:{c.instructions+=3;NFSU2_TR(0x58c3d3);
__builtin_memmove((R+0),gp(0x7fbdb8),4);
}
B58c3d8:{NFSU2_TR(0x58c3d8);
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
B58c3da:{NFSU2_TR(0x58c3da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c412;}}
}
B58c3dc:L58c3dc:{c.instructions+=3;NFSU2_TR(0x58c3dc);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58c3e1:{NFSU2_TR(0x58c3e1);
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
B58c3e3:{NFSU2_TR(0x58c3e3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58c412;}}
}
B58c3e5:L58c3e5:{c.instructions+=1;NFSU2_TR(0x58c3e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c3eaull));
TAIL_STATIC(0x589830u,589);
}
B58c3ea:L58c3ea:{c.instructions+=1;NFSU2_TR(0x58c3ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c3efull));
TAIL_STATIC(0x586350u,586);
}
B58c3ef:L58c3ef:{c.instructions+=3;NFSU2_TR(0x58c3ef);
s4(0x7fbe80,u32(0xffffffffull));
}
B58c3f9:{NFSU2_TR(0x58c3f9);
s4(0x866a1c,u32(0x0ull));
}
B58c403:{NFSU2_TR(0x58c403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c408ull));
TAIL_STATIC(0x585720u,585);
}
B58c408:L58c408:{c.instructions+=1;NFSU2_TR(0x58c408);
s4(0x866a14,u32(0x0ull));
}
B58c412:L58c412:{c.instructions+=1;NFSU2_TR(0x58c412);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c420:L58c420:{c.instructions+=12;NFSU2_TR(0x58c420);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c426:{NFSU2_TR(0x58c426);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c428:{NFSU2_TR(0x58c428);
u8 U[4];
w4(U+0,u32(0x778a9bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c42d:{NFSU2_TR(0x58c42d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c42e:{NFSU2_TR(0x58c42e);
__builtin_memmove((R+0),gp(0x7fbec9),1);
}
B58c433:{NFSU2_TR(0x58c433);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c43a:{NFSU2_TR(0x58c43a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x418ull))));
}
B58c440:{NFSU2_TR(0x58c440);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c441:{NFSU2_TR(0x58c441);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B58c443:{NFSU2_TR(0x58c443);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58c445:{NFSU2_TR(0x58c445);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c446:{NFSU2_TR(0x58c446);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c45c;}}
}
B58c448:L58c448:{c.instructions+=4;NFSU2_TR(0x58c448);
w4(R+4,u32(0x6ull));
}
B58c44d:{NFSU2_TR(0x58c44d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58c44f:{NFSU2_TR(0x58c44f);
w4(R+28,u32(0x86a600ull));
}
B58c454:{NFSU2_TR(0x58c454);
__builtin_memmove(gp(0x7fbec9),(R+12),1);
}
B58c45a:L58c45a:{c.instructions+=1;NFSU2_TR(0x58c45a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58c45c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58c45au);}goto L58c45a;}
}
B58c45c:L58c45c:{c.instructions+=3;NFSU2_TR(0x58c45c);
u8 U[8];
w4(U+0,u32(u32(u32(0x434ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58c463:{NFSU2_TR(0x58c463);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a600ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B58c46a:{NFSU2_TR(0x58c46a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c48a;}}
}
B58c46c:L58c46c:{c.instructions+=2;NFSU2_TR(0x58c46c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c46e:{NFSU2_TR(0x58c46e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c473ull));
TAIL_STATIC(0x575620u,575);
}
B58c473:L58c473:{c.instructions+=3;NFSU2_TR(0x58c473);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58c476:{NFSU2_TR(0x58c476);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c478:{NFSU2_TR(0x58c478);
if(r1(R+518)){{goto L58c481;}}
}
B58c47a:L58c47a:{c.instructions+=3;NFSU2_TR(0x58c47a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B58c47c:{NFSU2_TR(0x58c47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c47f:{NFSU2_TR(0x58c47f);
{goto L58c483;}
}
B58c481:L58c481:{c.instructions+=1;NFSU2_TR(0x58c481);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58c483:L58c483:{c.instructions+=1;NFSU2_TR(0x58c483);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a600ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B58c48a:L58c48a:{c.instructions+=5;NFSU2_TR(0x58c48a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a600ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B58c491:{NFSU2_TR(0x58c491);
u8 U[8];
w4(U+0,u32(u32(u32(0x430ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58c498:{NFSU2_TR(0x58c498);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c499:{NFSU2_TR(0x58c499);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c49a:{NFSU2_TR(0x58c49a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c49full));
TAIL_STATIC(0x585e80u,585);
}
B58c49f:L58c49f:{c.instructions+=3;NFSU2_TR(0x58c49f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58c4a2:{NFSU2_TR(0x58c4a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58c4a4:{NFSU2_TR(0x58c4a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c602;}}
}
B58c4aa:L58c4aa:{c.instructions+=9;NFSU2_TR(0x58c4aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a600ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B58c4b1:{NFSU2_TR(0x58c4b1);
u8 U[5];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58c4b8:{NFSU2_TR(0x58c4b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c4b9:{NFSU2_TR(0x58c4b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58c4bd:{NFSU2_TR(0x58c4bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c4be:{NFSU2_TR(0x58c4be);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58c4c2:{NFSU2_TR(0x58c4c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c4c9:{NFSU2_TR(0x58c4c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c4d0:{NFSU2_TR(0x58c4d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c4d5ull));
TAIL_STATIC(0x588010u,588);
}
B58c4d5:L58c4d5:{c.instructions+=7;NFSU2_TR(0x58c4d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58c4d8:{NFSU2_TR(0x58c4d8);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c4da:{NFSU2_TR(0x58c4da);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c4de:{NFSU2_TR(0x58c4de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c4df:{NFSU2_TR(0x58c4df);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c4e3:{NFSU2_TR(0x58c4e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c4e7:{NFSU2_TR(0x58c4e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c4ecull));
TAIL_STATIC(0x581d90u,581);
}
B58c4ec:L58c4ec:{c.instructions+=1;NFSU2_TR(0x58c4ec);
w4(R+0,u32(0x8693ccull));
}
B58c4f1:L58c4f1:{c.instructions+=2;NFSU2_TR(0x58c4f1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B58c4f3:{NFSU2_TR(0x58c4f3);
if(r1(R+518)){{goto L58c4ff;}}
}
B58c4f5:L58c4f5:{c.instructions+=3;NFSU2_TR(0x58c4f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B58c4f8:{NFSU2_TR(0x58c4f8);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x86946cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x86946cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58c4fd:{NFSU2_TR(0x58c4fd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58c4f1u);}goto L58c4f1;}}
}
B58c4ff:L58c4ff:{c.instructions+=7;NFSU2_TR(0x58c4ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c503:{NFSU2_TR(0x58c503);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c504:{NFSU2_TR(0x58c504);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58c508:{NFSU2_TR(0x58c508);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c509:{NFSU2_TR(0x58c509);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c50a:{NFSU2_TR(0x58c50a);
w4(R+4,u32(0x89cf48ull));
}
B58c50f:{NFSU2_TR(0x58c50f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c514ull));
TAIL_STATIC(0x601eb0u,601);
}
B58c514:L58c514:{c.instructions+=3;NFSU2_TR(0x58c514);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a600ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B58c51b:{NFSU2_TR(0x58c51b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c51d:{NFSU2_TR(0x58c51d);
if(r1(R+518)){{goto L58c547;}}
}
B58c51f:L58c51f:{c.instructions+=3;NFSU2_TR(0x58c51f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58c521:{NFSU2_TR(0x58c521);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c523:{NFSU2_TR(0x58c523);
if(r1(R+518)){{goto L58c53e;}}
}
B58c525:L58c525:{c.instructions+=6;NFSU2_TR(0x58c525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58c527:{NFSU2_TR(0x58c527);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58c52a:{NFSU2_TR(0x58c52a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B58c52c:{NFSU2_TR(0x58c52c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c52d:{NFSU2_TR(0x58c52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c530:{NFSU2_TR(0x58c530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c535ull));
TAIL_STATIC(0x575630u,575);
}
B58c535:L58c535:{c.instructions+=4;NFSU2_TR(0x58c535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58c537:{NFSU2_TR(0x58c537);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58c53a:{NFSU2_TR(0x58c53a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c53c:{NFSU2_TR(0x58c53c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58c525u);}goto L58c525;}}
}
B58c53e:L58c53e:{c.instructions+=2;NFSU2_TR(0x58c53e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c53f:{NFSU2_TR(0x58c53f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c544ull));
TAIL_STATIC(0x575630u,575);
}
B58c544:L58c544:{c.instructions+=1;NFSU2_TR(0x58c544);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58c547:L58c547:{c.instructions+=14;NFSU2_TR(0x58c547);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c54b:{NFSU2_TR(0x58c54b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58c54f:{NFSU2_TR(0x58c54f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c550:{NFSU2_TR(0x58c550);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a600ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B58c557:{NFSU2_TR(0x58c557);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c55b:{NFSU2_TR(0x58c55b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c55f:{NFSU2_TR(0x58c55f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58c563:{NFSU2_TR(0x58c563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c564:{NFSU2_TR(0x58c564);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c568:{NFSU2_TR(0x58c568);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c569:{NFSU2_TR(0x58c569);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c56b:{NFSU2_TR(0x58c56b);
u8 U[8];
w4(U+0,u32(u32(u32(0x43cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c572:{NFSU2_TR(0x58c572);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c579:{NFSU2_TR(0x58c579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c57eull));
TAIL_STATIC(0x587db0u,587);
}
B58c57e:L58c57e:{c.instructions+=4;NFSU2_TR(0x58c57e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58c582:{NFSU2_TR(0x58c582);
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
B58c585:{NFSU2_TR(0x58c585);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c589:{NFSU2_TR(0x58c589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c58eull));
TAIL_STATIC(0x502fd0u,502);
}
B58c58e:L58c58e:{c.instructions+=3;NFSU2_TR(0x58c58e);
__builtin_memmove((R+20),(R+0),4);
}
B58c590:{NFSU2_TR(0x58c590);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c592:{NFSU2_TR(0x58c592);
if(r1(R+518)){{goto L58c5c8;}}
}
B58c594:L58c594:{c.instructions+=6;NFSU2_TR(0x58c594);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c596:{NFSU2_TR(0x58c596);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B58c599:{NFSU2_TR(0x58c599);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c59a:{NFSU2_TR(0x58c59a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c59c:{NFSU2_TR(0x58c59c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c59d:{NFSU2_TR(0x58c59d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c5a2ull));
TAIL_STATIC(0x588350u,588);
}
B58c5a2:L58c5a2:{c.instructions+=8;NFSU2_TR(0x58c5a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58c5a6:{NFSU2_TR(0x58c5a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58c5a8:{NFSU2_TR(0x58c5a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58c5ab:{NFSU2_TR(0x58c5ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58c5ae:{NFSU2_TR(0x58c5ae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c5b0:{NFSU2_TR(0x58c5b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58c5b2:{NFSU2_TR(0x58c5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c5b5:{NFSU2_TR(0x58c5b5);
if(r1(R+518)){{goto L58c5c0;}}
}
B58c5b7:L58c5b7:{c.instructions+=2;NFSU2_TR(0x58c5b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c5b8:{NFSU2_TR(0x58c5b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c5bdull));
TAIL_STATIC(0x575630u,575);
}
B58c5bd:L58c5bd:{c.instructions+=1;NFSU2_TR(0x58c5bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58c5c0:L58c5c0:{c.instructions+=3;NFSU2_TR(0x58c5c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58c5c4:{NFSU2_TR(0x58c5c4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c5c6:{NFSU2_TR(0x58c5c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58c594u);}goto L58c594;}}
}
B58c5c8:L58c5c8:{c.instructions+=5;NFSU2_TR(0x58c5c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58c5cc:{NFSU2_TR(0x58c5cc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c5ce:{NFSU2_TR(0x58c5ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x430ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58c5d9:{NFSU2_TR(0x58c5d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58c5da:{NFSU2_TR(0x58c5da);
if(r1(R+518)){{goto L58c601;}}
}
B58c5dc:L58c5dc:{c.instructions+=1;NFSU2_TR(0x58c5dc);
__builtin_memmove((R+16),(R+16),4);
}
B58c5e0:L58c5e0:{c.instructions+=7;NFSU2_TR(0x58c5e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58c5e2:{NFSU2_TR(0x58c5e2);
__builtin_memmove((R+4),(R+24),4);
}
B58c5e4:{NFSU2_TR(0x58c5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58c5e7:{NFSU2_TR(0x58c5e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B58c5e9:{NFSU2_TR(0x58c5e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c5ea:{NFSU2_TR(0x58c5ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c5ed:{NFSU2_TR(0x58c5ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c5f2ull));
TAIL_STATIC(0x575630u,575);
}
B58c5f2:L58c5f2:{c.instructions+=5;NFSU2_TR(0x58c5f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58c5f6:{NFSU2_TR(0x58c5f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c5fa:{NFSU2_TR(0x58c5fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58c5fd:{NFSU2_TR(0x58c5fd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c5ff:{NFSU2_TR(0x58c5ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58c5e0u);}goto L58c5e0;}}
}
B58c601:L58c601:{c.instructions+=1;NFSU2_TR(0x58c601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58c602:L58c602:{c.instructions+=6;NFSU2_TR(0x58c602);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58c609:{NFSU2_TR(0x58c609);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58c60a:{NFSU2_TR(0x58c60a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58c60b:{NFSU2_TR(0x58c60b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c612:{NFSU2_TR(0x58c612);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x424ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x424ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x424ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58c618:{NFSU2_TR(0x58c618);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c620:L58c620:{c.instructions+=10;NFSU2_TR(0x58c620);
__builtin_memmove((R+0),gp(0x7fbdb8),4);
}
B58c625:{NFSU2_TR(0x58c625);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c626:{NFSU2_TR(0x58c626);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B58c627:{NFSU2_TR(0x58c627);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c628:{NFSU2_TR(0x58c628);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c629:{NFSU2_TR(0x58c629);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58c62d:{NFSU2_TR(0x58c62d);
__builtin_memmove(gp(0x7fbdb8),(R+0),4);
}
B58c632:{NFSU2_TR(0x58c632);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58c634:{NFSU2_TR(0x58c634);
w4(R+0,u32(0x8693c8ull));
}
B58c639:{NFSU2_TR(0x58c639);
__builtin_memmove((R+16),(R+16),4);
}
B58c640:L58c640:{c.instructions+=2;NFSU2_TR(0x58c640);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58c643:{NFSU2_TR(0x58c643);
if(r1(R+518)){{goto L58c651;}}
}
B58c645:L58c645:{c.instructions+=3;NFSU2_TR(0x58c645);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B58c648:{NFSU2_TR(0x58c648);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x869468ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58c64d:{NFSU2_TR(0x58c64d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58c640u);}goto L58c640;}}
}
B58c64f:L58c64f:{c.instructions+=1;NFSU2_TR(0x58c64f);
{goto L58c653;}
}
B58c651:L58c651:{c.instructions+=1;NFSU2_TR(0x58c651);
__builtin_memmove((R+4),(R+0),4);
}
B58c653:L58c653:{c.instructions+=3;NFSU2_TR(0x58c653);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58c655:{NFSU2_TR(0x58c655);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c656:{NFSU2_TR(0x58c656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c65bull));
TAIL_STATIC(0x586480u,586);
}
B58c65b:L58c65b:{c.instructions+=4;NFSU2_TR(0x58c65b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58c65f:{NFSU2_TR(0x58c65f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58c662:{NFSU2_TR(0x58c662);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58c664:{NFSU2_TR(0x58c664);
if(r1(R+518)){{goto L58c66f;}}
}
B58c666:L58c666:{c.instructions+=2;NFSU2_TR(0x58c666);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c667:{NFSU2_TR(0x58c667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c66cull));
TAIL_STATIC(0x585880u,585);
}
B58c66c:L58c66c:{c.instructions+=1;NFSU2_TR(0x58c66c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58c66f:L58c66f:{c.instructions+=4;NFSU2_TR(0x58c66f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c670:{NFSU2_TR(0x58c670);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c671:{NFSU2_TR(0x58c671);
w4(R+4,u32(0x89cf48ull));
}
B58c676:{NFSU2_TR(0x58c676);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c67bull));
TAIL_STATIC(0x6099c0u,609);
}
B58c67b:L58c67b:{c.instructions+=4;NFSU2_TR(0x58c67b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c67c:{NFSU2_TR(0x58c67c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c67d:{NFSU2_TR(0x58c67d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c67e:{NFSU2_TR(0x58c67e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c683ull));
TAIL_STATIC(0x589890u,589);
}
B58c683:L58c683:{c.instructions+=5;NFSU2_TR(0x58c683);
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
B58c686:{NFSU2_TR(0x58c686);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58c687:{NFSU2_TR(0x58c687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58c688:{NFSU2_TR(0x58c688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58c689:{NFSU2_TR(0x58c689);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c690:L58c690:{c.instructions+=8;NFSU2_TR(0x58c690);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c691:{NFSU2_TR(0x58c691);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58c695:{NFSU2_TR(0x58c695);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c696:{NFSU2_TR(0x58c696);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c698:{NFSU2_TR(0x58c698);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58c69c:{NFSU2_TR(0x58c69c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c69d:{NFSU2_TR(0x58c69d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58c6a5:{NFSU2_TR(0x58c6a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c6aaull));
TAIL_STATIC(0x581d90u,581);
}
B58c6aa:L58c6aa:{c.instructions+=3;NFSU2_TR(0x58c6aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58c6ae:{NFSU2_TR(0x58c6ae);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58c6b0:{NFSU2_TR(0x58c6b0);
w4(R+0,u32(0x8693c8ull));
}
B58c6b5:L58c6b5:{c.instructions+=2;NFSU2_TR(0x58c6b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58c6b8:{NFSU2_TR(0x58c6b8);
if(r1(R+518)){{goto L58c6c6;}}
}
B58c6ba:L58c6ba:{c.instructions+=3;NFSU2_TR(0x58c6ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B58c6bd:{NFSU2_TR(0x58c6bd);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x869468ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58c6c2:{NFSU2_TR(0x58c6c2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58c6b5u);}goto L58c6b5;}}
}
B58c6c4:L58c6c4:{c.instructions+=1;NFSU2_TR(0x58c6c4);
{goto L58c6c8;}
}
B58c6c6:L58c6c6:{c.instructions+=1;NFSU2_TR(0x58c6c6);
__builtin_memmove((R+4),(R+0),4);
}
B58c6c8:L58c6c8:{c.instructions+=5;NFSU2_TR(0x58c6c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c6cc:{NFSU2_TR(0x58c6cc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B58c6cf:{NFSU2_TR(0x58c6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58c6d2:{NFSU2_TR(0x58c6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c6d5:{NFSU2_TR(0x58c6d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c6e8;}}
}
B58c6d7:L58c6d7:{c.instructions+=2;NFSU2_TR(0x58c6d7);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58c6da:{NFSU2_TR(0x58c6da);
if(r1(R+518)){{goto L58c6e8;}}
}
B58c6dc:L58c6dc:{c.instructions+=4;NFSU2_TR(0x58c6dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58c6de:{NFSU2_TR(0x58c6de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c6df:{NFSU2_TR(0x58c6df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c6e0:{NFSU2_TR(0x58c6e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c6e5ull));
TAIL_STATIC(0x589f30u,589);
}
B58c6e5:L58c6e5:{c.instructions+=1;NFSU2_TR(0x58c6e5);
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
B58c6e8:L58c6e8:{c.instructions+=3;NFSU2_TR(0x58c6e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58c6e9:{NFSU2_TR(0x58c6e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58c6ea:{NFSU2_TR(0x58c6ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c6f0:L58c6f0:{c.instructions+=4;NFSU2_TR(0x58c6f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c6f4:{NFSU2_TR(0x58c6f4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58c6f8:{NFSU2_TR(0x58c6f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c6f9:{NFSU2_TR(0x58c6f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c6feull));
TAIL_STATIC(0x58b390u,58b);
}
B58c6fe:L58c6fe:{c.instructions+=1;NFSU2_TR(0x58c6fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c700:L58c700:{c.instructions+=6;NFSU2_TR(0x58c700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B58c703:{NFSU2_TR(0x58c703);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c704:{NFSU2_TR(0x58c704);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c705:{NFSU2_TR(0x58c705);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c706:{NFSU2_TR(0x58c706);
__builtin_memmove((R+24),(R+4),4);
}
B58c708:{NFSU2_TR(0x58c708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c70dull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58c70d:L58c70d:{c.instructions+=3;NFSU2_TR(0x58c70d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58c710:{NFSU2_TR(0x58c710);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58c712:{NFSU2_TR(0x58c712);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c720;}}
}
B58c714:L58c714:{c.instructions+=6;NFSU2_TR(0x58c714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58c715:{NFSU2_TR(0x58c715);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58c716:{NFSU2_TR(0x58c716);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58c719:{NFSU2_TR(0x58c719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58c71a:{NFSU2_TR(0x58c71a);
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
B58c71d:{NFSU2_TR(0x58c71d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c720:L58c720:{c.instructions+=4;NFSU2_TR(0x58c720);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c721:{NFSU2_TR(0x58c721);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58c725:{NFSU2_TR(0x58c725);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58c728:{NFSU2_TR(0x58c728);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58c85b;}}
}
B58c72e:L58c72e:{c.instructions+=2;NFSU2_TR(0x58c72e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c731:{NFSU2_TR(0x58c731);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58c85b;}}
}
B58c737:L58c737:{c.instructions+=1;NFSU2_TR(0x58c737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c73cull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58c73c:L58c73c:{c.instructions+=4;NFSU2_TR(0x58c73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58c73f:{NFSU2_TR(0x58c73f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c741:{NFSU2_TR(0x58c741);
w4(R+8,u32(0x736e6170ull));
}
B58c746:{NFSU2_TR(0x58c746);
if(r1(R+518)){{goto L58c752;}}
}
B58c748:L58c748:{c.instructions+=2;NFSU2_TR(0x58c748);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58c74b:{NFSU2_TR(0x58c74b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c752;}}
}
B58c74d:L58c74d:{c.instructions+=2;NFSU2_TR(0x58c74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c750:{NFSU2_TR(0x58c750);
{goto L58c770;}
}
B58c752:L58c752:{c.instructions+=4;NFSU2_TR(0x58c752);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B58c755:{NFSU2_TR(0x58c755);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58c757:{NFSU2_TR(0x58c757);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c759:{NFSU2_TR(0x58c759);
if(r1(R+518)){{goto L58c779;}}
}
B58c75b:L58c75b:{c.instructions+=1;NFSU2_TR(0x58c75b);
{goto L58c760;}
}
B58c760:L58c760:{c.instructions+=2;NFSU2_TR(0x58c760);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58c763:{NFSU2_TR(0x58c763);
if(r1(R+518)){{goto L58c76d;}}
}
B58c765:L58c765:{c.instructions+=3;NFSU2_TR(0x58c765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58c767:{NFSU2_TR(0x58c767);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c769:{NFSU2_TR(0x58c769);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58c760u);}goto L58c760;}}
}
B58c76b:L58c76b:{c.instructions+=1;NFSU2_TR(0x58c76b);
{goto L58c779;}
}
B58c76d:L58c76d:{c.instructions+=1;NFSU2_TR(0x58c76d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c770:L58c770:{c.instructions+=2;NFSU2_TR(0x58c770);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c773:{NFSU2_TR(0x58c773);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c85b;}}
}
B58c779:L58c779:{c.instructions+=3;NFSU2_TR(0x58c779);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c77b:{NFSU2_TR(0x58c77b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c77c:{NFSU2_TR(0x58c77c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c781ull));
TAIL_STATIC(0x5826e0u,582);
}
B58c781:L58c781:{c.instructions+=5;NFSU2_TR(0x58c781);
__builtin_memmove((R+12),(R+0),4);
}
B58c783:{NFSU2_TR(0x58c783);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B58c787:{NFSU2_TR(0x58c787);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58c78a:{NFSU2_TR(0x58c78a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c78c:{NFSU2_TR(0x58c78c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c7c4;}}
}
B58c78e:L58c78e:{c.instructions+=4;NFSU2_TR(0x58c78e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c78f:{NFSU2_TR(0x58c78f);
u8 U[4];
w4(U+0,u32(0x58a240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c794:{NFSU2_TR(0x58c794);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c795:{NFSU2_TR(0x58c795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c79aull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58c79a:L58c79a:{c.instructions+=3;NFSU2_TR(0x58c79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c79d:{NFSU2_TR(0x58c79d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c79e:{NFSU2_TR(0x58c79e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c7a3ull));
TAIL_STATIC(0x7444c0u,744);
}
B58c7a3:L58c7a3:{c.instructions+=4;NFSU2_TR(0x58c7a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58c7a6:{NFSU2_TR(0x58c7a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c7a8:{NFSU2_TR(0x58c7a8);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B58c7ac:{NFSU2_TR(0x58c7ac);
if(r1(R+518)){{goto L58c854;}}
}
B58c7b2:L58c7b2:{c.instructions+=5;NFSU2_TR(0x58c7b2);
u8 U[4];
w4(U+0,u32(0x5826d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c7b7:{NFSU2_TR(0x58c7b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c7b9:{NFSU2_TR(0x58c7b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c7bb:{NFSU2_TR(0x58c7bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c7bc:{NFSU2_TR(0x58c7bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c7c1ull));
TAIL_STATIC(0x73d910u,73d);
}
B58c7c1:L58c7c1:{c.instructions+=1;NFSU2_TR(0x58c7c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58c7c4:L58c7c4:{c.instructions+=3;NFSU2_TR(0x58c7c4);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B58c7c7:{NFSU2_TR(0x58c7c7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c7ca:{NFSU2_TR(0x58c7ca);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58c7d3;}}
}
B58c7cc:L58c7cc:{c.instructions+=2;NFSU2_TR(0x58c7cc);
w4(R+28,u32(0xcull));
}
B58c7d1:{NFSU2_TR(0x58c7d1);
{goto L58c821;}
}
B58c7d3:L58c7d3:{c.instructions+=2;NFSU2_TR(0x58c7d3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58c7d6:{NFSU2_TR(0x58c7d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58c7e4;}}
}
B58c7d8:L58c7d8:{c.instructions+=2;NFSU2_TR(0x58c7d8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c7db:{NFSU2_TR(0x58c7db);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58c7e4;}}
}
B58c7dd:L58c7dd:{c.instructions+=2;NFSU2_TR(0x58c7dd);
w4(R+28,u32(0xdull));
}
B58c7e2:{NFSU2_TR(0x58c7e2);
{goto L58c821;}
}
B58c7e4:L58c7e4:{c.instructions+=2;NFSU2_TR(0x58c7e4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58c7e7:{NFSU2_TR(0x58c7e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58c7f5;}}
}
B58c7e9:L58c7e9:{c.instructions+=2;NFSU2_TR(0x58c7e9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c7ec:{NFSU2_TR(0x58c7ec);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58c7f5;}}
}
B58c7ee:L58c7ee:{c.instructions+=2;NFSU2_TR(0x58c7ee);
w4(R+28,u32(0xeull));
}
B58c7f3:{NFSU2_TR(0x58c7f3);
{goto L58c821;}
}
B58c7f5:L58c7f5:{c.instructions+=2;NFSU2_TR(0x58c7f5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58c7f8:{NFSU2_TR(0x58c7f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58c806;}}
}
B58c7fa:L58c7fa:{c.instructions+=2;NFSU2_TR(0x58c7fa);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x28ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c7fd:{NFSU2_TR(0x58c7fd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58c806;}}
}
B58c7ff:L58c7ff:{c.instructions+=2;NFSU2_TR(0x58c7ff);
w4(R+28,u32(0xfull));
}
B58c804:{NFSU2_TR(0x58c804);
{goto L58c821;}
}
B58c806:L58c806:{c.instructions+=2;NFSU2_TR(0x58c806);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x29ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x29ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58c809:{NFSU2_TR(0x58c809);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58c817;}}
}
B58c80b:L58c80b:{c.instructions+=2;NFSU2_TR(0x58c80b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x32ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c80e:{NFSU2_TR(0x58c80e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58c817;}}
}
B58c810:L58c810:{c.instructions+=2;NFSU2_TR(0x58c810);
w4(R+28,u32(0x10ull));
}
B58c815:{NFSU2_TR(0x58c815);
{goto L58c821;}
}
B58c817:L58c817:{c.instructions+=2;NFSU2_TR(0x58c817);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x33ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x33ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58c81a:{NFSU2_TR(0x58c81a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58c821;}}
}
B58c81c:L58c81c:{c.instructions+=1;NFSU2_TR(0x58c81c);
w4(R+28,u32(0x11ull));
}
B58c821:L58c821:{c.instructions+=3;NFSU2_TR(0x58c821);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B58c825:{NFSU2_TR(0x58c825);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c827:{NFSU2_TR(0x58c827);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c87a;}}
}
B58c829:L58c829:{c.instructions+=5;NFSU2_TR(0x58c829);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c82a:{NFSU2_TR(0x58c82a);
u8 U[4];
w4(U+0,u32(0x58a240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c82f:{NFSU2_TR(0x58c82f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c831:{NFSU2_TR(0x58c831);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c832:{NFSU2_TR(0x58c832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c837ull));
TAIL_STATIC(0x5826e0u,582);
}
B58c837:L58c837:{c.instructions+=3;NFSU2_TR(0x58c837);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58c83a:{NFSU2_TR(0x58c83a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c83b:{NFSU2_TR(0x58c83b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c840ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58c840:L58c840:{c.instructions+=3;NFSU2_TR(0x58c840);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58c843:{NFSU2_TR(0x58c843);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c844:{NFSU2_TR(0x58c844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c849ull));
TAIL_STATIC(0x7444c0u,744);
}
B58c849:L58c849:{c.instructions+=4;NFSU2_TR(0x58c849);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58c84c:{NFSU2_TR(0x58c84c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c84e:{NFSU2_TR(0x58c84e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B58c852:{NFSU2_TR(0x58c852);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c868;}}
}
B58c854:L58c854:{c.instructions+=2;NFSU2_TR(0x58c854);
__builtin_memmove((R+4),(R+24),4);
}
B58c856:{NFSU2_TR(0x58c856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c85bull));
TAIL_STATIC(0x58a1d0u,58a);
}
B58c85b:L58c85b:{c.instructions+=7;NFSU2_TR(0x58c85b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58c85c:{NFSU2_TR(0x58c85c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58c85d:{NFSU2_TR(0x58c85d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58c85e:{NFSU2_TR(0x58c85e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58c861:{NFSU2_TR(0x58c861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58c862:{NFSU2_TR(0x58c862);
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
B58c865:{NFSU2_TR(0x58c865);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c868:L58c868:{c.instructions+=5;NFSU2_TR(0x58c868);
u8 U[4];
w4(U+0,u32(0x5826d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c86d:{NFSU2_TR(0x58c86d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c86f:{NFSU2_TR(0x58c86f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c871:{NFSU2_TR(0x58c871);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c872:{NFSU2_TR(0x58c872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c877ull));
TAIL_STATIC(0x73d910u,73d);
}
B58c877:L58c877:{c.instructions+=1;NFSU2_TR(0x58c877);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58c87a:L58c87a:{c.instructions+=2;NFSU2_TR(0x58c87a);
u8 U[15];
w4(U+0,u32(u32(u32(0x5aull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B58c87f:{NFSU2_TR(0x58c87f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c894;}}
}
B58c881:L58c881:{c.instructions+=2;NFSU2_TR(0x58c881);
u8 U[15];
w4(U+0,u32(u32(u32(0x5aull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B58c886:{NFSU2_TR(0x58c886);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c894;}}
}
B58c888:L58c888:{c.instructions+=7;NFSU2_TR(0x58c888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58c889:{NFSU2_TR(0x58c889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58c88a:{NFSU2_TR(0x58c88a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58c88b:{NFSU2_TR(0x58c88b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58c88d:{NFSU2_TR(0x58c88d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58c88e:{NFSU2_TR(0x58c88e);
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
B58c891:{NFSU2_TR(0x58c891);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c894:L58c894:{c.instructions+=4;NFSU2_TR(0x58c894);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58c899:{NFSU2_TR(0x58c899);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58c89b:{NFSU2_TR(0x58c89b);
w4(R+4,u32(0xfull));
}
B58c8a0:{NFSU2_TR(0x58c8a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58c8a4:L58c8a4:{c.instructions+=1;NFSU2_TR(0x58c8a4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58c8a6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58c8a4u);}goto L58c8a4;}
}
B58c8a6:L58c8a6:{c.instructions+=3;NFSU2_TR(0x58c8a6);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58c8a8:{NFSU2_TR(0x58c8a8);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58c8a9:{NFSU2_TR(0x58c8a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c8aeull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58c8ae:L58c8ae:{c.instructions+=4;NFSU2_TR(0x58c8ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8b0:{NFSU2_TR(0x58c8b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8b1:{NFSU2_TR(0x58c8b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58c8b8:{NFSU2_TR(0x58c8b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c8bdull));
TAIL_STATIC(0x5826e0u,582);
}
B58c8bd:L58c8bd:{c.instructions+=7;NFSU2_TR(0x58c8bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8be:{NFSU2_TR(0x58c8be);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8bf:{NFSU2_TR(0x58c8bf);
u8 U[4];
w4(U+0,u32(0x7a1620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8c4:{NFSU2_TR(0x58c8c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58c8c8:{NFSU2_TR(0x58c8c8);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8ca:{NFSU2_TR(0x58c8ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8cb:{NFSU2_TR(0x58c8cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c8d0ull));
TAIL_STATIC(0x741f20u,741);
}
B58c8d0:L58c8d0:{c.instructions+=10;NFSU2_TR(0x58c8d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B58c8d3:{NFSU2_TR(0x58c8d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8d5:{NFSU2_TR(0x58c8d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8d7:{NFSU2_TR(0x58c8d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8d9:{NFSU2_TR(0x58c8d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8da:{NFSU2_TR(0x58c8da);
u8 U[4];
w4(U+0,u32(0x58a2a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8df:{NFSU2_TR(0x58c8df);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58c8e3:{NFSU2_TR(0x58c8e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8e4:{NFSU2_TR(0x58c8e4);
u8 U[4];
w4(U+0,u32(0x736e6170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c8e9:{NFSU2_TR(0x58c8e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c8eeull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58c8ee:L58c8ee:{c.instructions+=2;NFSU2_TR(0x58c8ee);
__builtin_memmove((R+4),(R+0),4);
}
B58c8f0:{NFSU2_TR(0x58c8f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c8f5ull));
TAIL_STATIC(0x5869a0u,586);
}
B58c8f5:L58c8f5:{c.instructions+=3;NFSU2_TR(0x58c8f5);
__builtin_memmove((R+28),(R+0),4);
}
B58c8f7:{NFSU2_TR(0x58c8f7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58c8f9:{NFSU2_TR(0x58c8f9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58c914;}}
}
B58c8fb:L58c8fb:{c.instructions+=1;NFSU2_TR(0x58c8fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c900ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58c900:L58c900:{c.instructions+=8;NFSU2_TR(0x58c900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58c901:{NFSU2_TR(0x58c901);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58c902:{NFSU2_TR(0x58c902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58c903:{NFSU2_TR(0x58c903);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58c90a:{NFSU2_TR(0x58c90a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58c90d:{NFSU2_TR(0x58c90d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58c90e:{NFSU2_TR(0x58c90e);
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
B58c911:{NFSU2_TR(0x58c911);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c914:L58c914:{c.instructions+=8;NFSU2_TR(0x58c914);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c915:{NFSU2_TR(0x58c915);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c916:{NFSU2_TR(0x58c916);
u8 U[4];
w4(U+0,u32(0x7a15fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c91b:{NFSU2_TR(0x58c91b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c91f:{NFSU2_TR(0x58c91f);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c921:{NFSU2_TR(0x58c921);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c922:{NFSU2_TR(0x58c922);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58c927:{NFSU2_TR(0x58c927);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c92cull));
TAIL_STATIC(0x741f20u,741);
}
B58c92c:L58c92c:{c.instructions+=12;NFSU2_TR(0x58c92c);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58c930:{NFSU2_TR(0x58c930);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c934:{NFSU2_TR(0x58c934);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B58c937:{NFSU2_TR(0x58c937);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c939:{NFSU2_TR(0x58c939);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c93a:{NFSU2_TR(0x58c93a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c93b:{NFSU2_TR(0x58c93b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c93c:{NFSU2_TR(0x58c93c);
u8 U[4];
w4(U+0,u32(0x58a2a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c941:{NFSU2_TR(0x58c941);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58c945:{NFSU2_TR(0x58c945);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c946:{NFSU2_TR(0x58c946);
u8 U[4];
w4(U+0,u32(0x736e6170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c94b:{NFSU2_TR(0x58c94b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c950ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58c950:L58c950:{c.instructions+=2;NFSU2_TR(0x58c950);
__builtin_memmove((R+4),(R+0),4);
}
B58c952:{NFSU2_TR(0x58c952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c957ull));
TAIL_STATIC(0x5869a0u,586);
}
B58c957:L58c957:{c.instructions+=3;NFSU2_TR(0x58c957);
__builtin_memmove((R+24),(R+0),4);
}
B58c959:{NFSU2_TR(0x58c959);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58c95b:{NFSU2_TR(0x58c95b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58c96a;}}
}
B58c95d:L58c95d:{c.instructions+=2;NFSU2_TR(0x58c95d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c95e:{NFSU2_TR(0x58c95e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c963ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58c963:L58c963:{c.instructions+=2;NFSU2_TR(0x58c963);
__builtin_memmove((R+4),(R+0),4);
}
B58c965:{NFSU2_TR(0x58c965);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c96aull));
TAIL_STATIC(0x5868b0u,586);
}
B58c96a:L58c96a:{c.instructions+=1;NFSU2_TR(0x58c96a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c96full));
TAIL_STATIC(0x58a0e0u,58a);
}
B58c96f:L58c96f:{c.instructions+=8;NFSU2_TR(0x58c96f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58c970:{NFSU2_TR(0x58c970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58c971:{NFSU2_TR(0x58c971);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58c978:{NFSU2_TR(0x58c978);
__builtin_memmove((R+0),(R+24),4);
}
B58c97a:{NFSU2_TR(0x58c97a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58c97b:{NFSU2_TR(0x58c97b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58c97c:{NFSU2_TR(0x58c97c);
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
B58c97f:{NFSU2_TR(0x58c97f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c990:L58c990:{c.instructions+=5;NFSU2_TR(0x58c990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B58c993:{NFSU2_TR(0x58c993);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c994:{NFSU2_TR(0x58c994);
__builtin_memmove((R+20),(R+4),4);
}
B58c996:{NFSU2_TR(0x58c996);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58c99a:{NFSU2_TR(0x58c99a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c99full));
TAIL_STATIC(0x58a0e0u,58a);
}
B58c99f:L58c99f:{c.instructions+=3;NFSU2_TR(0x58c99f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58c9a2:{NFSU2_TR(0x58c9a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58c9a4:{NFSU2_TR(0x58c9a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c9b0;}}
}
B58c9a6:L58c9a6:{c.instructions+=4;NFSU2_TR(0x58c9a6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58c9a9:{NFSU2_TR(0x58c9a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58c9aa:{NFSU2_TR(0x58c9aa);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58c9ad:{NFSU2_TR(0x58c9ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58c9b0:L58c9b0:{c.instructions+=4;NFSU2_TR(0x58c9b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c9b1:{NFSU2_TR(0x58c9b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c9b2:{NFSU2_TR(0x58c9b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58c9b3:{NFSU2_TR(0x58c9b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c9b8ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58c9b8:L58c9b8:{c.instructions+=4;NFSU2_TR(0x58c9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58c9bb:{NFSU2_TR(0x58c9bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58c9bd:{NFSU2_TR(0x58c9bd);
w4(R+8,u32(0x736e6170ull));
}
B58c9c2:{NFSU2_TR(0x58c9c2);
if(r1(R+518)){{goto L58c9ce;}}
}
B58c9c4:L58c9c4:{c.instructions+=2;NFSU2_TR(0x58c9c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58c9c7:{NFSU2_TR(0x58c9c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58c9ce;}}
}
B58c9c9:L58c9c9:{c.instructions+=2;NFSU2_TR(0x58c9c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c9cc:{NFSU2_TR(0x58c9cc);
{goto L58c9e7;}
}
B58c9ce:L58c9ce:{c.instructions+=4;NFSU2_TR(0x58c9ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B58c9d1:{NFSU2_TR(0x58c9d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58c9d3:{NFSU2_TR(0x58c9d3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c9d5:{NFSU2_TR(0x58c9d5);
if(r1(R+518)){{goto L58c9f0;}}
}
B58c9d7:L58c9d7:{c.instructions+=2;NFSU2_TR(0x58c9d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58c9da:{NFSU2_TR(0x58c9da);
if(r1(R+518)){{goto L58c9e4;}}
}
B58c9dc:L58c9dc:{c.instructions+=3;NFSU2_TR(0x58c9dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58c9de:{NFSU2_TR(0x58c9de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c9e0:{NFSU2_TR(0x58c9e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58c9d7u);}goto L58c9d7;}}
}
B58c9e2:L58c9e2:{c.instructions+=1;NFSU2_TR(0x58c9e2);
{goto L58c9f0;}
}
B58c9e4:L58c9e4:{c.instructions+=1;NFSU2_TR(0x58c9e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58c9e7:L58c9e7:{c.instructions+=2;NFSU2_TR(0x58c9e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c9ea:{NFSU2_TR(0x58c9ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cae6;}}
}
B58c9f0:L58c9f0:{c.instructions+=1;NFSU2_TR(0x58c9f0);
w4(R+24,u32(0x3dull));
}
B58c9f5:L58c9f5:{c.instructions+=3;NFSU2_TR(0x58c9f5);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B58c9f8:{NFSU2_TR(0x58c9f8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58c9fb:{NFSU2_TR(0x58c9fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ca04;}}
}
B58c9fd:L58c9fd:{c.instructions+=2;NFSU2_TR(0x58c9fd);
w4(R+28,u32(0x12ull));
}
B58ca02:{NFSU2_TR(0x58ca02);
{goto L58ca3e;}
}
B58ca04:L58ca04:{c.instructions+=2;NFSU2_TR(0x58ca04);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ca07:{NFSU2_TR(0x58ca07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ca10;}}
}
B58ca09:L58ca09:{c.instructions+=2;NFSU2_TR(0x58ca09);
w4(R+28,u32(0x13ull));
}
B58ca0e:{NFSU2_TR(0x58ca0e);
{goto L58ca3e;}
}
B58ca10:L58ca10:{c.instructions+=2;NFSU2_TR(0x58ca10);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ca13:{NFSU2_TR(0x58ca13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ca1c;}}
}
B58ca15:L58ca15:{c.instructions+=2;NFSU2_TR(0x58ca15);
w4(R+28,u32(0x14ull));
}
B58ca1a:{NFSU2_TR(0x58ca1a);
{goto L58ca3e;}
}
B58ca1c:L58ca1c:{c.instructions+=2;NFSU2_TR(0x58ca1c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ca1f:{NFSU2_TR(0x58ca1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ca28;}}
}
B58ca21:L58ca21:{c.instructions+=2;NFSU2_TR(0x58ca21);
w4(R+28,u32(0x15ull));
}
B58ca26:{NFSU2_TR(0x58ca26);
{goto L58ca3e;}
}
B58ca28:L58ca28:{c.instructions+=2;NFSU2_TR(0x58ca28);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x41ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ca2b:{NFSU2_TR(0x58ca2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ca34;}}
}
B58ca2d:L58ca2d:{c.instructions+=2;NFSU2_TR(0x58ca2d);
w4(R+28,u32(0x16ull));
}
B58ca32:{NFSU2_TR(0x58ca32);
{goto L58ca3e;}
}
B58ca34:L58ca34:{c.instructions+=2;NFSU2_TR(0x58ca34);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x42ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ca37:{NFSU2_TR(0x58ca37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ca3e;}}
}
B58ca39:L58ca39:{c.instructions+=1;NFSU2_TR(0x58ca39);
w4(R+28,u32(0x17ull));
}
B58ca3e:L58ca3e:{c.instructions+=3;NFSU2_TR(0x58ca3e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B58ca42:{NFSU2_TR(0x58ca42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58ca44:{NFSU2_TR(0x58ca44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cac1;}}
}
B58ca46:L58ca46:{c.instructions+=3;NFSU2_TR(0x58ca46);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58ca49:{NFSU2_TR(0x58ca49);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ca4c:{NFSU2_TR(0x58ca4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ca55;}}
}
B58ca4e:L58ca4e:{c.instructions+=2;NFSU2_TR(0x58ca4e);
w4(R+0,u32(0x12ull));
}
B58ca53:{NFSU2_TR(0x58ca53);
{goto L58ca8f;}
}
B58ca55:L58ca55:{c.instructions+=2;NFSU2_TR(0x58ca55);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ca58:{NFSU2_TR(0x58ca58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ca61;}}
}
B58ca5a:L58ca5a:{c.instructions+=2;NFSU2_TR(0x58ca5a);
w4(R+0,u32(0x13ull));
}
B58ca5f:{NFSU2_TR(0x58ca5f);
{goto L58ca8f;}
}
B58ca61:L58ca61:{c.instructions+=2;NFSU2_TR(0x58ca61);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ca64:{NFSU2_TR(0x58ca64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ca6d;}}
}
B58ca66:L58ca66:{c.instructions+=2;NFSU2_TR(0x58ca66);
w4(R+0,u32(0x14ull));
}
B58ca6b:{NFSU2_TR(0x58ca6b);
{goto L58ca8f;}
}
B58ca6d:L58ca6d:{c.instructions+=2;NFSU2_TR(0x58ca6d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ca70:{NFSU2_TR(0x58ca70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ca79;}}
}
B58ca72:L58ca72:{c.instructions+=2;NFSU2_TR(0x58ca72);
w4(R+0,u32(0x15ull));
}
B58ca77:{NFSU2_TR(0x58ca77);
{goto L58ca8f;}
}
B58ca79:L58ca79:{c.instructions+=2;NFSU2_TR(0x58ca79);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x41ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ca7c:{NFSU2_TR(0x58ca7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ca85;}}
}
B58ca7e:L58ca7e:{c.instructions+=2;NFSU2_TR(0x58ca7e);
w4(R+0,u32(0x16ull));
}
B58ca83:{NFSU2_TR(0x58ca83);
{goto L58ca8f;}
}
B58ca85:L58ca85:{c.instructions+=2;NFSU2_TR(0x58ca85);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x42ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ca88:{NFSU2_TR(0x58ca88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ca8f;}}
}
B58ca8a:L58ca8a:{c.instructions+=1;NFSU2_TR(0x58ca8a);
w4(R+0,u32(0x17ull));
}
B58ca8f:L58ca8f:{c.instructions+=4;NFSU2_TR(0x58ca8f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ca90:{NFSU2_TR(0x58ca90);
u8 U[4];
w4(U+0,u32(0x58a240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ca95:{NFSU2_TR(0x58ca95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ca96:{NFSU2_TR(0x58ca96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ca9bull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58ca9b:L58ca9b:{c.instructions+=3;NFSU2_TR(0x58ca9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ca9e:{NFSU2_TR(0x58ca9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ca9f:{NFSU2_TR(0x58ca9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58caa4ull));
TAIL_STATIC(0x7444c0u,744);
}
B58caa4:L58caa4:{c.instructions+=4;NFSU2_TR(0x58caa4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58caa7:{NFSU2_TR(0x58caa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58caa9:{NFSU2_TR(0x58caa9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B58caad:{NFSU2_TR(0x58caad);
if(r1(R+518)){{goto L58cadf;}}
}
B58caaf:L58caaf:{c.instructions+=5;NFSU2_TR(0x58caaf);
u8 U[4];
w4(U+0,u32(0x5826d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cab4:{NFSU2_TR(0x58cab4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cab6:{NFSU2_TR(0x58cab6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cab8:{NFSU2_TR(0x58cab8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cab9:{NFSU2_TR(0x58cab9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cabeull));
TAIL_STATIC(0x73d910u,73d);
}
B58cabe:L58cabe:{c.instructions+=1;NFSU2_TR(0x58cabe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58cac1:L58cac1:{c.instructions+=3;NFSU2_TR(0x58cac1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58cac2:{NFSU2_TR(0x58cac2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x42ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x42ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cac5:{NFSU2_TR(0x58cac5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58c9f5u);}goto L58c9f5;}}
}
B58cacb:L58cacb:{c.instructions+=1;NFSU2_TR(0x58cacb);
w4(R+24,u32(0x43ull));
}
B58cad0:L58cad0:{c.instructions+=3;NFSU2_TR(0x58cad0);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B58cad3:{NFSU2_TR(0x58cad3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cad6:{NFSU2_TR(0x58cad6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58caf3;}}
}
B58cad8:L58cad8:{c.instructions+=2;NFSU2_TR(0x58cad8);
w4(R+28,u32(0x18ull));
}
B58cadd:{NFSU2_TR(0x58cadd);
{goto L58cb2d;}
}
B58cadf:L58cadf:{c.instructions+=2;NFSU2_TR(0x58cadf);
__builtin_memmove((R+4),(R+20),4);
}
B58cae1:{NFSU2_TR(0x58cae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cae6ull));
TAIL_STATIC(0x58a1d0u,58a);
}
B58cae6:L58cae6:{c.instructions+=7;NFSU2_TR(0x58cae6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58cae7:{NFSU2_TR(0x58cae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58cae8:{NFSU2_TR(0x58cae8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58cae9:{NFSU2_TR(0x58cae9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58caec:{NFSU2_TR(0x58caec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58caed:{NFSU2_TR(0x58caed);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58caf0:{NFSU2_TR(0x58caf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58caf3:L58caf3:{c.instructions+=2;NFSU2_TR(0x58caf3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58caf6:{NFSU2_TR(0x58caf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58caff;}}
}
B58caf8:L58caf8:{c.instructions+=2;NFSU2_TR(0x58caf8);
w4(R+28,u32(0x19ull));
}
B58cafd:{NFSU2_TR(0x58cafd);
{goto L58cb2d;}
}
B58caff:L58caff:{c.instructions+=2;NFSU2_TR(0x58caff);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cb02:{NFSU2_TR(0x58cb02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cb0b;}}
}
B58cb04:L58cb04:{c.instructions+=2;NFSU2_TR(0x58cb04);
w4(R+28,u32(0x1aull));
}
B58cb09:{NFSU2_TR(0x58cb09);
{goto L58cb2d;}
}
B58cb0b:L58cb0b:{c.instructions+=2;NFSU2_TR(0x58cb0b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x46ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cb0e:{NFSU2_TR(0x58cb0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cb17;}}
}
B58cb10:L58cb10:{c.instructions+=2;NFSU2_TR(0x58cb10);
w4(R+28,u32(0x1bull));
}
B58cb15:{NFSU2_TR(0x58cb15);
{goto L58cb2d;}
}
B58cb17:L58cb17:{c.instructions+=2;NFSU2_TR(0x58cb17);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x47ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cb1a:{NFSU2_TR(0x58cb1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cb23;}}
}
B58cb1c:L58cb1c:{c.instructions+=2;NFSU2_TR(0x58cb1c);
w4(R+28,u32(0x1cull));
}
B58cb21:{NFSU2_TR(0x58cb21);
{goto L58cb2d;}
}
B58cb23:L58cb23:{c.instructions+=2;NFSU2_TR(0x58cb23);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x48ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cb26:{NFSU2_TR(0x58cb26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cb2d;}}
}
B58cb28:L58cb28:{c.instructions+=1;NFSU2_TR(0x58cb28);
w4(R+28,u32(0x1dull));
}
B58cb2d:L58cb2d:{c.instructions+=3;NFSU2_TR(0x58cb2d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B58cb31:{NFSU2_TR(0x58cb31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58cb33:{NFSU2_TR(0x58cb33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cbb4;}}
}
B58cb35:L58cb35:{c.instructions+=3;NFSU2_TR(0x58cb35);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58cb38:{NFSU2_TR(0x58cb38);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cb3b:{NFSU2_TR(0x58cb3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cb44;}}
}
B58cb3d:L58cb3d:{c.instructions+=2;NFSU2_TR(0x58cb3d);
w4(R+0,u32(0x18ull));
}
B58cb42:{NFSU2_TR(0x58cb42);
{goto L58cb7e;}
}
B58cb44:L58cb44:{c.instructions+=2;NFSU2_TR(0x58cb44);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cb47:{NFSU2_TR(0x58cb47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cb50;}}
}
B58cb49:L58cb49:{c.instructions+=2;NFSU2_TR(0x58cb49);
w4(R+0,u32(0x19ull));
}
B58cb4e:{NFSU2_TR(0x58cb4e);
{goto L58cb7e;}
}
B58cb50:L58cb50:{c.instructions+=2;NFSU2_TR(0x58cb50);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cb53:{NFSU2_TR(0x58cb53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cb5c;}}
}
B58cb55:L58cb55:{c.instructions+=2;NFSU2_TR(0x58cb55);
w4(R+0,u32(0x1aull));
}
B58cb5a:{NFSU2_TR(0x58cb5a);
{goto L58cb7e;}
}
B58cb5c:L58cb5c:{c.instructions+=2;NFSU2_TR(0x58cb5c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x46ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cb5f:{NFSU2_TR(0x58cb5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cb68;}}
}
B58cb61:L58cb61:{c.instructions+=2;NFSU2_TR(0x58cb61);
w4(R+0,u32(0x1bull));
}
B58cb66:{NFSU2_TR(0x58cb66);
{goto L58cb7e;}
}
B58cb68:L58cb68:{c.instructions+=2;NFSU2_TR(0x58cb68);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x47ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cb6b:{NFSU2_TR(0x58cb6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cb74;}}
}
B58cb6d:L58cb6d:{c.instructions+=2;NFSU2_TR(0x58cb6d);
w4(R+0,u32(0x1cull));
}
B58cb72:{NFSU2_TR(0x58cb72);
{goto L58cb7e;}
}
B58cb74:L58cb74:{c.instructions+=2;NFSU2_TR(0x58cb74);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x48ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cb77:{NFSU2_TR(0x58cb77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cb7e;}}
}
B58cb79:L58cb79:{c.instructions+=1;NFSU2_TR(0x58cb79);
w4(R+0,u32(0x1dull));
}
B58cb7e:L58cb7e:{c.instructions+=4;NFSU2_TR(0x58cb7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cb7f:{NFSU2_TR(0x58cb7f);
u8 U[4];
w4(U+0,u32(0x58a240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cb84:{NFSU2_TR(0x58cb84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cb85:{NFSU2_TR(0x58cb85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cb8aull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58cb8a:L58cb8a:{c.instructions+=3;NFSU2_TR(0x58cb8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58cb8d:{NFSU2_TR(0x58cb8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cb8e:{NFSU2_TR(0x58cb8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cb93ull));
TAIL_STATIC(0x7444c0u,744);
}
B58cb93:L58cb93:{c.instructions+=4;NFSU2_TR(0x58cb93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58cb96:{NFSU2_TR(0x58cb96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58cb98:{NFSU2_TR(0x58cb98);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B58cb9c:{NFSU2_TR(0x58cb9c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58cadfu);}goto L58cadf;}}
}
B58cba2:L58cba2:{c.instructions+=5;NFSU2_TR(0x58cba2);
u8 U[4];
w4(U+0,u32(0x5826d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cba7:{NFSU2_TR(0x58cba7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cba9:{NFSU2_TR(0x58cba9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cbab:{NFSU2_TR(0x58cbab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cbac:{NFSU2_TR(0x58cbac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cbb1ull));
TAIL_STATIC(0x73d910u,73d);
}
B58cbb1:L58cbb1:{c.instructions+=1;NFSU2_TR(0x58cbb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58cbb4:L58cbb4:{c.instructions+=3;NFSU2_TR(0x58cbb4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58cbb5:{NFSU2_TR(0x58cbb5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x48ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cbb8:{NFSU2_TR(0x58cbb8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58cad0u);}goto L58cad0;}}
}
B58cbbe:L58cbbe:{c.instructions+=1;NFSU2_TR(0x58cbbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cbc3ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58cbc3:L58cbc3:{c.instructions+=5;NFSU2_TR(0x58cbc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58cbca:{NFSU2_TR(0x58cbca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58cbcc:{NFSU2_TR(0x58cbcc);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58cbd1:{NFSU2_TR(0x58cbd1);
w4(R+4,u32(0xfull));
}
B58cbd6:{NFSU2_TR(0x58cbd6);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58cbda:L58cbda:{c.instructions+=1;NFSU2_TR(0x58cbda);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58cbdc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58cbdau);}goto L58cbda;}
}
B58cbdc:L58cbdc:{c.instructions+=4;NFSU2_TR(0x58cbdc);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58cbde:{NFSU2_TR(0x58cbde);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58cbdf:{NFSU2_TR(0x58cbdf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B58cbe1:{NFSU2_TR(0x58cbe1);
w4(R+24,u32(0x3dull));
}
B58cbe6:L58cbe6:{c.instructions+=3;NFSU2_TR(0x58cbe6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58cbe9:{NFSU2_TR(0x58cbe9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cbec:{NFSU2_TR(0x58cbec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cbf5;}}
}
B58cbee:L58cbee:{c.instructions+=2;NFSU2_TR(0x58cbee);
w4(R+0,u32(0x12ull));
}
B58cbf3:{NFSU2_TR(0x58cbf3);
{goto L58cc2f;}
}
B58cbf5:L58cbf5:{c.instructions+=2;NFSU2_TR(0x58cbf5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cbf8:{NFSU2_TR(0x58cbf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cc01;}}
}
B58cbfa:L58cbfa:{c.instructions+=2;NFSU2_TR(0x58cbfa);
w4(R+0,u32(0x13ull));
}
B58cbff:{NFSU2_TR(0x58cbff);
{goto L58cc2f;}
}
B58cc01:L58cc01:{c.instructions+=2;NFSU2_TR(0x58cc01);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cc04:{NFSU2_TR(0x58cc04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cc0d;}}
}
B58cc06:L58cc06:{c.instructions+=2;NFSU2_TR(0x58cc06);
w4(R+0,u32(0x14ull));
}
B58cc0b:{NFSU2_TR(0x58cc0b);
{goto L58cc2f;}
}
B58cc0d:L58cc0d:{c.instructions+=2;NFSU2_TR(0x58cc0d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cc10:{NFSU2_TR(0x58cc10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cc19;}}
}
B58cc12:L58cc12:{c.instructions+=2;NFSU2_TR(0x58cc12);
w4(R+0,u32(0x15ull));
}
B58cc17:{NFSU2_TR(0x58cc17);
{goto L58cc2f;}
}
B58cc19:L58cc19:{c.instructions+=2;NFSU2_TR(0x58cc19);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x41ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cc1c:{NFSU2_TR(0x58cc1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cc25;}}
}
B58cc1e:L58cc1e:{c.instructions+=2;NFSU2_TR(0x58cc1e);
w4(R+0,u32(0x16ull));
}
B58cc23:{NFSU2_TR(0x58cc23);
{goto L58cc2f;}
}
B58cc25:L58cc25:{c.instructions+=2;NFSU2_TR(0x58cc25);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x42ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cc28:{NFSU2_TR(0x58cc28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cc2f;}}
}
B58cc2a:L58cc2a:{c.instructions+=1;NFSU2_TR(0x58cc2a);
w4(R+0,u32(0x17ull));
}
B58cc2f:L58cc2f:{c.instructions+=2;NFSU2_TR(0x58cc2f);
u8 U[15];
w4(U+0,u32(u32(u32(0x5aull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B58cc34:{NFSU2_TR(0x58cc34);
if(r1(R+518)){{goto L58ccc6;}}
}
B58cc3a:L58cc3a:{c.instructions+=4;NFSU2_TR(0x58cc3a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58cc3d:{NFSU2_TR(0x58cc3d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cc40:{NFSU2_TR(0x58cc40);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58cc45:{NFSU2_TR(0x58cc45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cc4e;}}
}
B58cc47:L58cc47:{c.instructions+=2;NFSU2_TR(0x58cc47);
w4(R+0,u32(0x12ull));
}
B58cc4c:{NFSU2_TR(0x58cc4c);
{goto L58cc88;}
}
B58cc4e:L58cc4e:{c.instructions+=2;NFSU2_TR(0x58cc4e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cc51:{NFSU2_TR(0x58cc51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cc5a;}}
}
B58cc53:L58cc53:{c.instructions+=2;NFSU2_TR(0x58cc53);
w4(R+0,u32(0x13ull));
}
B58cc58:{NFSU2_TR(0x58cc58);
{goto L58cc88;}
}
B58cc5a:L58cc5a:{c.instructions+=2;NFSU2_TR(0x58cc5a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cc5d:{NFSU2_TR(0x58cc5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cc66;}}
}
B58cc5f:L58cc5f:{c.instructions+=2;NFSU2_TR(0x58cc5f);
w4(R+0,u32(0x14ull));
}
B58cc64:{NFSU2_TR(0x58cc64);
{goto L58cc88;}
}
B58cc66:L58cc66:{c.instructions+=2;NFSU2_TR(0x58cc66);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cc69:{NFSU2_TR(0x58cc69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cc72;}}
}
B58cc6b:L58cc6b:{c.instructions+=2;NFSU2_TR(0x58cc6b);
w4(R+0,u32(0x15ull));
}
B58cc70:{NFSU2_TR(0x58cc70);
{goto L58cc88;}
}
B58cc72:L58cc72:{c.instructions+=2;NFSU2_TR(0x58cc72);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x41ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cc75:{NFSU2_TR(0x58cc75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cc7e;}}
}
B58cc77:L58cc77:{c.instructions+=2;NFSU2_TR(0x58cc77);
w4(R+0,u32(0x16ull));
}
B58cc7c:{NFSU2_TR(0x58cc7c);
{goto L58cc88;}
}
B58cc7e:L58cc7e:{c.instructions+=2;NFSU2_TR(0x58cc7e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x42ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cc81:{NFSU2_TR(0x58cc81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cc88;}}
}
B58cc83:L58cc83:{c.instructions+=1;NFSU2_TR(0x58cc83);
w4(R+0,u32(0x17ull));
}
B58cc88:L58cc88:{c.instructions+=7;NFSU2_TR(0x58cc88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cc89:{NFSU2_TR(0x58cc89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cc8a:{NFSU2_TR(0x58cc8a);
u8 U[4];
w4(U+0,u32(0x7a1640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cc8f:{NFSU2_TR(0x58cc8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58cc93:{NFSU2_TR(0x58cc93);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cc95:{NFSU2_TR(0x58cc95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cc96:{NFSU2_TR(0x58cc96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cc9bull));
TAIL_STATIC(0x741f20u,741);
}
B58cc9b:L58cc9b:{c.instructions+=10;NFSU2_TR(0x58cc9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B58cc9e:{NFSU2_TR(0x58cc9e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cca0:{NFSU2_TR(0x58cca0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cca2:{NFSU2_TR(0x58cca2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cca4:{NFSU2_TR(0x58cca4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cca5:{NFSU2_TR(0x58cca5);
u8 U[4];
w4(U+0,u32(0x58a2a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ccaa:{NFSU2_TR(0x58ccaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58ccae:{NFSU2_TR(0x58ccae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ccaf:{NFSU2_TR(0x58ccaf);
u8 U[4];
w4(U+0,u32(0x736e6170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ccb4:{NFSU2_TR(0x58ccb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ccb9ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58ccb9:L58ccb9:{c.instructions+=2;NFSU2_TR(0x58ccb9);
__builtin_memmove((R+4),(R+0),4);
}
B58ccbb:{NFSU2_TR(0x58ccbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ccc0ull));
TAIL_STATIC(0x5869a0u,586);
}
B58ccc0:L58ccc0:{c.instructions+=2;NFSU2_TR(0x58ccc0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58ccc2:{NFSU2_TR(0x58ccc2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58ccef;}}
}
B58ccc4:L58ccc4:{c.instructions+=1;NFSU2_TR(0x58ccc4);
__builtin_memmove((R+12),(R+0),4);
}
B58ccc6:L58ccc6:{c.instructions+=3;NFSU2_TR(0x58ccc6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58ccc7:{NFSU2_TR(0x58ccc7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x42ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x42ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ccca:{NFSU2_TR(0x58ccca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58cbe6u);}goto L58cbe6;}}
}
B58ccd0:L58ccd0:{c.instructions+=4;NFSU2_TR(0x58ccd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58ccd4:{NFSU2_TR(0x58ccd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58ccd8:{NFSU2_TR(0x58ccd8);
w4(R+24,u32(0x43ull));
}
B58ccdd:{NFSU2_TR(0x58ccdd);
__builtin_memmove((R+4),(R+4),4);
}
B58cce0:L58cce0:{c.instructions+=3;NFSU2_TR(0x58cce0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58cce3:{NFSU2_TR(0x58cce3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cce6:{NFSU2_TR(0x58cce6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cd15;}}
}
B58cce8:L58cce8:{c.instructions+=2;NFSU2_TR(0x58cce8);
w4(R+0,u32(0x18ull));
}
B58cced:{NFSU2_TR(0x58cced);
{goto L58cd4f;}
}
B58ccef:L58ccef:{c.instructions+=1;NFSU2_TR(0x58ccef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ccf4ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58ccf4:L58ccf4:{c.instructions+=3;NFSU2_TR(0x58ccf4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ccf5:{NFSU2_TR(0x58ccf5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58ccfc:{NFSU2_TR(0x58ccfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cd01ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58cd01:L58cd01:{c.instructions+=2;NFSU2_TR(0x58cd01);
__builtin_memmove((R+4),(R+0),4);
}
B58cd03:{NFSU2_TR(0x58cd03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cd08ull));
TAIL_STATIC(0x5868b0u,586);
}
B58cd08:L58cd08:{c.instructions+=7;NFSU2_TR(0x58cd08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58cd09:{NFSU2_TR(0x58cd09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58cd0a:{NFSU2_TR(0x58cd0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58cd0b:{NFSU2_TR(0x58cd0b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58cd0e:{NFSU2_TR(0x58cd0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58cd0f:{NFSU2_TR(0x58cd0f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58cd12:{NFSU2_TR(0x58cd12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cd15:L58cd15:{c.instructions+=2;NFSU2_TR(0x58cd15);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cd18:{NFSU2_TR(0x58cd18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cd21;}}
}
B58cd1a:L58cd1a:{c.instructions+=2;NFSU2_TR(0x58cd1a);
w4(R+0,u32(0x19ull));
}
B58cd1f:{NFSU2_TR(0x58cd1f);
{goto L58cd4f;}
}
B58cd21:L58cd21:{c.instructions+=2;NFSU2_TR(0x58cd21);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cd24:{NFSU2_TR(0x58cd24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cd2d;}}
}
B58cd26:L58cd26:{c.instructions+=2;NFSU2_TR(0x58cd26);
w4(R+0,u32(0x1aull));
}
B58cd2b:{NFSU2_TR(0x58cd2b);
{goto L58cd4f;}
}
B58cd2d:L58cd2d:{c.instructions+=2;NFSU2_TR(0x58cd2d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x46ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cd30:{NFSU2_TR(0x58cd30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cd39;}}
}
B58cd32:L58cd32:{c.instructions+=2;NFSU2_TR(0x58cd32);
w4(R+0,u32(0x1bull));
}
B58cd37:{NFSU2_TR(0x58cd37);
{goto L58cd4f;}
}
B58cd39:L58cd39:{c.instructions+=2;NFSU2_TR(0x58cd39);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x47ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cd3c:{NFSU2_TR(0x58cd3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cd45;}}
}
B58cd3e:L58cd3e:{c.instructions+=2;NFSU2_TR(0x58cd3e);
w4(R+0,u32(0x1cull));
}
B58cd43:{NFSU2_TR(0x58cd43);
{goto L58cd4f;}
}
B58cd45:L58cd45:{c.instructions+=2;NFSU2_TR(0x58cd45);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x48ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cd48:{NFSU2_TR(0x58cd48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cd4f;}}
}
B58cd4a:L58cd4a:{c.instructions+=1;NFSU2_TR(0x58cd4a);
w4(R+0,u32(0x1dull));
}
B58cd4f:L58cd4f:{c.instructions+=3;NFSU2_TR(0x58cd4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58cd53:{NFSU2_TR(0x58cd53);
u8 U[15];
w4(U+0,u32(u32(u32(0x5aull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B58cd58:{NFSU2_TR(0x58cd58);
if(r1(R+518)){{goto L58ce0a;}}
}
B58cd5e:L58cd5e:{c.instructions+=4;NFSU2_TR(0x58cd5e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58cd61:{NFSU2_TR(0x58cd61);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cd64:{NFSU2_TR(0x58cd64);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58cd69:{NFSU2_TR(0x58cd69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cd72;}}
}
B58cd6b:L58cd6b:{c.instructions+=2;NFSU2_TR(0x58cd6b);
w4(R+0,u32(0x18ull));
}
B58cd70:{NFSU2_TR(0x58cd70);
{goto L58cdac;}
}
B58cd72:L58cd72:{c.instructions+=2;NFSU2_TR(0x58cd72);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cd75:{NFSU2_TR(0x58cd75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cd7e;}}
}
B58cd77:L58cd77:{c.instructions+=2;NFSU2_TR(0x58cd77);
w4(R+0,u32(0x19ull));
}
B58cd7c:{NFSU2_TR(0x58cd7c);
{goto L58cdac;}
}
B58cd7e:L58cd7e:{c.instructions+=2;NFSU2_TR(0x58cd7e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cd81:{NFSU2_TR(0x58cd81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cd8a;}}
}
B58cd83:L58cd83:{c.instructions+=2;NFSU2_TR(0x58cd83);
w4(R+0,u32(0x1aull));
}
B58cd88:{NFSU2_TR(0x58cd88);
{goto L58cdac;}
}
B58cd8a:L58cd8a:{c.instructions+=2;NFSU2_TR(0x58cd8a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x46ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cd8d:{NFSU2_TR(0x58cd8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cd96;}}
}
B58cd8f:L58cd8f:{c.instructions+=2;NFSU2_TR(0x58cd8f);
w4(R+0,u32(0x1bull));
}
B58cd94:{NFSU2_TR(0x58cd94);
{goto L58cdac;}
}
B58cd96:L58cd96:{c.instructions+=2;NFSU2_TR(0x58cd96);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x47ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cd99:{NFSU2_TR(0x58cd99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cda2;}}
}
B58cd9b:L58cd9b:{c.instructions+=2;NFSU2_TR(0x58cd9b);
w4(R+0,u32(0x1cull));
}
B58cda0:{NFSU2_TR(0x58cda0);
{goto L58cdac;}
}
B58cda2:L58cda2:{c.instructions+=2;NFSU2_TR(0x58cda2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x48ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cda5:{NFSU2_TR(0x58cda5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cdac;}}
}
B58cda7:L58cda7:{c.instructions+=1;NFSU2_TR(0x58cda7);
w4(R+0,u32(0x1dull));
}
B58cdac:L58cdac:{c.instructions+=7;NFSU2_TR(0x58cdac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdad:{NFSU2_TR(0x58cdad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdae:{NFSU2_TR(0x58cdae);
u8 U[4];
w4(U+0,u32(0x7a1640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdb3:{NFSU2_TR(0x58cdb3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58cdb7:{NFSU2_TR(0x58cdb7);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdb9:{NFSU2_TR(0x58cdb9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdba:{NFSU2_TR(0x58cdba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cdbfull));
TAIL_STATIC(0x741f20u,741);
}
B58cdbf:L58cdbf:{c.instructions+=4;NFSU2_TR(0x58cdbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B58cdc2:{NFSU2_TR(0x58cdc2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x48ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58cdc5:{NFSU2_TR(0x58cdc5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdc7:{NFSU2_TR(0x58cdc7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58cdde;}}
}
B58cdc9:L58cdc9:{c.instructions+=8;NFSU2_TR(0x58cdc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58cdcd:{NFSU2_TR(0x58cdcd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdcf:{NFSU2_TR(0x58cdcf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdd1:{NFSU2_TR(0x58cdd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdd2:{NFSU2_TR(0x58cdd2);
u8 U[4];
w4(U+0,u32(0x58a2a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdd7:{NFSU2_TR(0x58cdd7);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58cddb:{NFSU2_TR(0x58cddb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cddc:{NFSU2_TR(0x58cddc);
{goto L58cdef;}
}
B58cdde:L58cdde:{c.instructions+=7;NFSU2_TR(0x58cdde);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58cde2:{NFSU2_TR(0x58cde2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cde3:{NFSU2_TR(0x58cde3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cde4:{NFSU2_TR(0x58cde4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cde5:{NFSU2_TR(0x58cde5);
u8 U[4];
w4(U+0,u32(0x58a2a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdea:{NFSU2_TR(0x58cdea);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58cdee:{NFSU2_TR(0x58cdee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdef:L58cdef:{c.instructions+=2;NFSU2_TR(0x58cdef);
u8 U[4];
w4(U+0,u32(0x736e6170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cdf4:{NFSU2_TR(0x58cdf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cdf9ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58cdf9:L58cdf9:{c.instructions+=2;NFSU2_TR(0x58cdf9);
__builtin_memmove((R+4),(R+0),4);
}
B58cdfb:{NFSU2_TR(0x58cdfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ce00ull));
TAIL_STATIC(0x5869a0u,586);
}
B58ce00:L58ce00:{c.instructions+=2;NFSU2_TR(0x58ce00);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58ce02:{NFSU2_TR(0x58ce02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ccefu);}goto L58ccef;}}
}
B58ce08:L58ce08:{c.instructions+=1;NFSU2_TR(0x58ce08);
__builtin_memmove((R+12),(R+0),4);
}
B58ce0a:L58ce0a:{c.instructions+=3;NFSU2_TR(0x58ce0a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58ce0b:{NFSU2_TR(0x58ce0b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x48ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ce0e:{NFSU2_TR(0x58ce0e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58cce0u);}goto L58cce0;}}
}
B58ce14:L58ce14:{c.instructions+=1;NFSU2_TR(0x58ce14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ce19ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58ce19:L58ce19:{c.instructions+=8;NFSU2_TR(0x58ce19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ce1a:{NFSU2_TR(0x58ce1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ce1b:{NFSU2_TR(0x58ce1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58ce22:{NFSU2_TR(0x58ce22);
__builtin_memmove((R+0),(R+12),4);
}
B58ce24:{NFSU2_TR(0x58ce24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ce25:{NFSU2_TR(0x58ce25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ce26:{NFSU2_TR(0x58ce26);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ce29:{NFSU2_TR(0x58ce29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ce30:L58ce30:{c.instructions+=3;NFSU2_TR(0x58ce30);
__builtin_memmove((R+0),gp(0x866654),4);
}
B58ce35:{NFSU2_TR(0x58ce35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58ce37:{NFSU2_TR(0x58ce37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ce46;}}
}
B58ce39:L58ce39:{c.instructions+=1;NFSU2_TR(0x58ce39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ce3eull));
TAIL_STATIC(0x58a370u,58a);
}
B58ce3e:L58ce3e:{c.instructions+=2;NFSU2_TR(0x58ce3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58ce40:{NFSU2_TR(0x58ce40);
if(r1(R+518)){{goto L58ce46;}}
}
B58ce42:L58ce42:{c.instructions+=2;NFSU2_TR(0x58ce42);
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
B58ce45:{NFSU2_TR(0x58ce45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ce46:L58ce46:{c.instructions+=3;NFSU2_TR(0x58ce46);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ce4a:{NFSU2_TR(0x58ce4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58ce4c:{NFSU2_TR(0x58ce4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ce69;}}
}
B58ce4e:L58ce4e:{c.instructions+=2;NFSU2_TR(0x58ce4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58ce52:{NFSU2_TR(0x58ce52);
w4(R+0,u32(0x9ull));
}
B58ce57:L58ce57:{c.instructions+=2;NFSU2_TR(0x58ce57);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x866650ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+12))));
}
B58ce5e:{NFSU2_TR(0x58ce5e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L58ce67;}}
}
B58ce60:L58ce60:{c.instructions+=2;NFSU2_TR(0x58ce60);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B58ce61:{NFSU2_TR(0x58ce61);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ce57u);}goto L58ce57;}}
}
B58ce63:L58ce63:{c.instructions+=2;NFSU2_TR(0x58ce63);
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
B58ce66:{NFSU2_TR(0x58ce66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ce67:L58ce67:{c.instructions+=2;NFSU2_TR(0x58ce67);
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
B58ce68:{NFSU2_TR(0x58ce68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ce69:L58ce69:{c.instructions+=2;NFSU2_TR(0x58ce69);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ce6c:{NFSU2_TR(0x58ce6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ce97;}}
}
B58ce6e:L58ce6e:{c.instructions+=4;NFSU2_TR(0x58ce6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58ce72:{NFSU2_TR(0x58ce72);
w4(R+4,u32(0x9ull));
}
B58ce77:{NFSU2_TR(0x58ce77);
w4(R+0,u32(0x86669cull));
}
B58ce7c:{NFSU2_TR(0x58ce7c);
__builtin_memmove((R+16),(R+16),4);
}
B58ce80:L58ce80:{c.instructions+=2;NFSU2_TR(0x58ce80);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+10)));
w4(U+14,u32(u32(r4(R+8))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B58ce82:{NFSU2_TR(0x58ce82);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L58ce93;}}
}
B58ce84:L58ce84:{c.instructions+=4;NFSU2_TR(0x58ce84);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B58ce87:{NFSU2_TR(0x58ce87);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B58ce88:{NFSU2_TR(0x58ce88);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x866678ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x866678ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58ce8d:{NFSU2_TR(0x58ce8d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ce80u);}goto L58ce80;}}
}
B58ce8f:L58ce8f:{c.instructions+=2;NFSU2_TR(0x58ce8f);
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
B58ce92:{NFSU2_TR(0x58ce92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ce93:L58ce93:{c.instructions+=2;NFSU2_TR(0x58ce93);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbull))));
__builtin_memmove((R+0),(U+0),4);
}
B58ce96:{NFSU2_TR(0x58ce96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ce97:L58ce97:{c.instructions+=2;NFSU2_TR(0x58ce97);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ce9a:{NFSU2_TR(0x58ce9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cec7;}}
}
B58ce9c:L58ce9c:{c.instructions+=4;NFSU2_TR(0x58ce9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58cea0:{NFSU2_TR(0x58cea0);
w4(R+4,u32(0x9ull));
}
B58cea5:{NFSU2_TR(0x58cea5);
w4(R+0,u32(0x8666ecull));
}
B58ceaa:{NFSU2_TR(0x58ceaa);
__builtin_memmove((R+12),(R+12),4);
}
B58ceb0:L58ceb0:{c.instructions+=2;NFSU2_TR(0x58ceb0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+10)));
w4(U+14,u32(u32(r4(R+8))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B58ceb2:{NFSU2_TR(0x58ceb2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L58cec3;}}
}
B58ceb4:L58ceb4:{c.instructions+=4;NFSU2_TR(0x58ceb4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B58ceb7:{NFSU2_TR(0x58ceb7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B58ceb8:{NFSU2_TR(0x58ceb8);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8666c8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8666c8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58cebd:{NFSU2_TR(0x58cebd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ceb0u);}goto L58ceb0;}}
}
B58cebf:L58cebf:{c.instructions+=2;NFSU2_TR(0x58cebf);
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
B58cec2:{NFSU2_TR(0x58cec2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cec3:L58cec3:{c.instructions+=2;NFSU2_TR(0x58cec3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58cec6:{NFSU2_TR(0x58cec6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cec7:L58cec7:{c.instructions+=2;NFSU2_TR(0x58cec7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ceca:{NFSU2_TR(0x58ceca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cef7;}}
}
B58cecc:L58cecc:{c.instructions+=4;NFSU2_TR(0x58cecc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58ced0:{NFSU2_TR(0x58ced0);
w4(R+4,u32(0x9ull));
}
B58ced5:{NFSU2_TR(0x58ced5);
w4(R+0,u32(0x8666c4ull));
}
B58ceda:{NFSU2_TR(0x58ceda);
__builtin_memmove((R+12),(R+12),4);
}
B58cee0:L58cee0:{c.instructions+=2;NFSU2_TR(0x58cee0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+10)));
w4(U+14,u32(u32(r4(R+8))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B58cee2:{NFSU2_TR(0x58cee2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L58cef3;}}
}
B58cee4:L58cee4:{c.instructions+=4;NFSU2_TR(0x58cee4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B58cee7:{NFSU2_TR(0x58cee7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B58cee8:{NFSU2_TR(0x58cee8);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8666a0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8666a0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58ceed:{NFSU2_TR(0x58ceed);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58cee0u);}goto L58cee0;}}
}
B58ceef:L58ceef:{c.instructions+=2;NFSU2_TR(0x58ceef);
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
B58cef2:{NFSU2_TR(0x58cef2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cef3:L58cef3:{c.instructions+=2;NFSU2_TR(0x58cef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1full))));
__builtin_memmove((R+0),(U+0),4);
}
B58cef6:{NFSU2_TR(0x58cef6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cef7:L58cef7:{c.instructions+=2;NFSU2_TR(0x58cef7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cefa:{NFSU2_TR(0x58cefa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cf27;}}
}
B58cefc:L58cefc:{c.instructions+=4;NFSU2_TR(0x58cefc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58cf00:{NFSU2_TR(0x58cf00);
w4(R+4,u32(0x9ull));
}
B58cf05:{NFSU2_TR(0x58cf05);
w4(R+0,u32(0x866714ull));
}
B58cf0a:{NFSU2_TR(0x58cf0a);
__builtin_memmove((R+12),(R+12),4);
}
B58cf10:L58cf10:{c.instructions+=2;NFSU2_TR(0x58cf10);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+10)));
w4(U+14,u32(u32(r4(R+8))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B58cf12:{NFSU2_TR(0x58cf12);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L58cf23;}}
}
B58cf14:L58cf14:{c.instructions+=4;NFSU2_TR(0x58cf14);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B58cf17:{NFSU2_TR(0x58cf17);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B58cf18:{NFSU2_TR(0x58cf18);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8666f0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8666f0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58cf1d:{NFSU2_TR(0x58cf1d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58cf10u);}goto L58cf10;}}
}
B58cf1f:L58cf1f:{c.instructions+=2;NFSU2_TR(0x58cf1f);
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
B58cf22:{NFSU2_TR(0x58cf22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cf23:L58cf23:{c.instructions+=2;NFSU2_TR(0x58cf23);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58cf26:{NFSU2_TR(0x58cf26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cf27:L58cf27:{c.instructions+=2;NFSU2_TR(0x58cf27);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cf2a:{NFSU2_TR(0x58cf2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ce63u);}goto L58ce63;}}
}
B58cf30:L58cf30:{c.instructions+=4;NFSU2_TR(0x58cf30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58cf34:{NFSU2_TR(0x58cf34);
w4(R+4,u32(0x9ull));
}
B58cf39:{NFSU2_TR(0x58cf39);
w4(R+0,u32(0x86673cull));
}
B58cf3e:{NFSU2_TR(0x58cf3e);
__builtin_memmove((R+28),(R+28),4);
}
B58cf40:L58cf40:{c.instructions+=2;NFSU2_TR(0x58cf40);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+10)));
w4(U+14,u32(u32(r4(R+8))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B58cf42:{NFSU2_TR(0x58cf42);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L58cf53;}}
}
B58cf44:L58cf44:{c.instructions+=4;NFSU2_TR(0x58cf44);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B58cf47:{NFSU2_TR(0x58cf47);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B58cf48:{NFSU2_TR(0x58cf48);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x866718ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x866718ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58cf4d:{NFSU2_TR(0x58cf4d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58cf40u);}goto L58cf40;}}
}
B58cf4f:L58cf4f:{c.instructions+=2;NFSU2_TR(0x58cf4f);
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
B58cf52:{NFSU2_TR(0x58cf52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cf53:L58cf53:{c.instructions+=2;NFSU2_TR(0x58cf53);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58cf56:{NFSU2_TR(0x58cf56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cf60:L58cf60:{c.instructions+=5;NFSU2_TR(0x58cf60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58cf64:{NFSU2_TR(0x58cf64);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58cf68:{NFSU2_TR(0x58cf68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cf69:{NFSU2_TR(0x58cf69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cf6a:{NFSU2_TR(0x58cf6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cf6full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ce30u);}goto L58ce30;}
}
B58cf6f:L58cf6f:{c.instructions+=3;NFSU2_TR(0x58cf6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58cf72:{NFSU2_TR(0x58cf72);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cf75:{NFSU2_TR(0x58cf75);
if(r1(R+518)){{goto L58cf8d;}}
}
B58cf77:L58cf77:{c.instructions+=2;NFSU2_TR(0x58cf77);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58cf7a:{NFSU2_TR(0x58cf7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58cf8d;}}
}
B58cf7c:L58cf7c:{c.instructions+=2;NFSU2_TR(0x58cf7c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3cull))));
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58cf7f:{NFSU2_TR(0x58cf7f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58cf8d;}}
}
B58cf81:L58cf81:{c.instructions+=6;NFSU2_TR(0x58cf81);
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
B58cf82:{NFSU2_TR(0x58cf82);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B58cf83:{NFSU2_TR(0x58cf83);
w4(R+4,u32(0xaull));
}
B58cf88:{NFSU2_TR(0x58cf88);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x58cf88);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x58cf88);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B58cf8a:{NFSU2_TR(0x58cf8a);
__builtin_memmove((R+0),(R+8),1);
}
B58cf8c:{NFSU2_TR(0x58cf8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cf8d:L58cf8d:{c.instructions+=2;NFSU2_TR(0x58cf8d);
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
B58cf8f:{NFSU2_TR(0x58cf8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cf90:L58cf90:{c.instructions+=8;NFSU2_TR(0x58cf90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cf91:{NFSU2_TR(0x58cf91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cf92:{NFSU2_TR(0x58cf92);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58cf96:{NFSU2_TR(0x58cf96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cf97:{NFSU2_TR(0x58cf97);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58cf9b:{NFSU2_TR(0x58cf9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cf9c:{NFSU2_TR(0x58cf9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58cf9d:{NFSU2_TR(0x58cf9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58cfa2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ce30u);}goto L58ce30;}
}
B58cfa2:L58cfa2:{c.instructions+=3;NFSU2_TR(0x58cfa2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58cfa5:{NFSU2_TR(0x58cfa5);
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
B58cfa8:{NFSU2_TR(0x58cfa8);
if(r1(R+518)){{goto L58cfc1;}}
}
B58cfaa:L58cfaa:{c.instructions+=2;NFSU2_TR(0x58cfaa);
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
B58cfad:{NFSU2_TR(0x58cfad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58cfc1;}}
}
B58cfaf:L58cfaf:{c.instructions+=2;NFSU2_TR(0x58cfaf);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58cfb2:{NFSU2_TR(0x58cfb2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58cfc1;}}
}
B58cfb4:L58cfb4:{c.instructions+=6;NFSU2_TR(0x58cfb4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B58cfb5:{NFSU2_TR(0x58cfb5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B58cfb6:{NFSU2_TR(0x58cfb6);
w4(R+4,u32(0xaull));
}
B58cfbb:{NFSU2_TR(0x58cfbb);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x58cfbb);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x58cfbb);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B58cfbd:{NFSU2_TR(0x58cfbd);
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
B58cfbf:{NFSU2_TR(0x58cfbf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58cfcb;}}
}
B58cfc1:L58cfc1:{c.instructions+=5;NFSU2_TR(0x58cfc1);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58cfc7:{NFSU2_TR(0x58cfc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58cfc8:{NFSU2_TR(0x58cfc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58cfc9:{NFSU2_TR(0x58cfc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58cfca:{NFSU2_TR(0x58cfca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cfcb:L58cfcb:{c.instructions+=2;NFSU2_TR(0x58cfcb);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x9ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x9ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x9ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B58cfce:{NFSU2_TR(0x58cfce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58cfda;}}
}
B58cfd0:L58cfd0:{c.instructions+=5;NFSU2_TR(0x58cfd0);
{u32 ea_=u32(u32(8001124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58cfd6:{NFSU2_TR(0x58cfd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58cfd7:{NFSU2_TR(0x58cfd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58cfd8:{NFSU2_TR(0x58cfd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58cfd9:{NFSU2_TR(0x58cfd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58cfda:L58cfda:{c.instructions+=10;NFSU2_TR(0x58cfda);
w4(R+4,u32(s32(s8(r1(R+8)))));
}
B58cfdd:{NFSU2_TR(0x58cfdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B58cfe0:{NFSU2_TR(0x58cfe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B58cfe3:{NFSU2_TR(0x58cfe3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B58cfe6:{NFSU2_TR(0x58cfe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x866650ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58cfec:{NFSU2_TR(0x58cfec);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B58cfee:{NFSU2_TR(0x58cfee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58cff0:{NFSU2_TR(0x58cff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58cff4:{NFSU2_TR(0x58cff4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58cff8:{NFSU2_TR(0x58cff8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x58d000u,58d);}
}
B58cffa:L58cffa:{c.instructions+=1;NFSU2_TR(0x58cffa);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x58d000u,58d);
}
XIT:NFSU2_TR_EXIT(0x58c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
