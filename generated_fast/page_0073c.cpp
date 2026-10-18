#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_47b(u8* __restrict R,Cpu& c);
u32 body_482(u8* __restrict R,Cpu& c);
u32 body_739(u8* __restrict R,Cpu& c);
u32 body_73b(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x73c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x73c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_73c(u8* __restrict R,Cpu& c);
u32 page_73c(Cpu& c){return body_73c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_73c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x73c000:goto L73c000;
case 0x73c002:c.instructions+=5;goto B73c002;
case 0x73c005:c.instructions+=4;goto B73c005;
case 0x73c008:c.instructions+=3;goto B73c008;
case 0x73c009:c.instructions+=2;goto B73c009;
case 0x73c00a:c.instructions+=1;goto B73c00a;
case 0x73c00f:goto L73c00f;
case 0x73c012:c.instructions+=1;goto B73c012;
case 0x73c017:goto L73c017;
case 0x73c01b:c.instructions+=6;goto B73c01b;
case 0x73c021:c.instructions+=5;goto B73c021;
case 0x73c023:c.instructions+=4;goto B73c023;
case 0x73c026:c.instructions+=3;goto B73c026;
case 0x73c029:c.instructions+=2;goto B73c029;
case 0x73c02b:c.instructions+=1;goto B73c02b;
case 0x73c031:goto L73c031;
case 0x73c034:c.instructions+=1;goto B73c034;
case 0x73c03a:goto L73c03a;
case 0x73c03e:c.instructions+=1;goto B73c03e;
case 0x73c040:goto L73c040;
case 0x73c042:c.instructions+=2;goto B73c042;
case 0x73c046:c.instructions+=1;goto B73c046;
case 0x73c048:goto L73c048;
case 0x73c04c:c.instructions+=1;goto B73c04c;
case 0x73c04e:goto L73c04e;
case 0x73c051:goto L73c051;
case 0x73c053:c.instructions+=3;goto B73c053;
case 0x73c059:c.instructions+=2;goto B73c059;
case 0x73c05b:c.instructions+=1;goto B73c05b;
case 0x73c05f:goto L73c05f;
case 0x73c061:c.instructions+=4;goto B73c061;
case 0x73c064:c.instructions+=3;goto B73c064;
case 0x73c067:c.instructions+=2;goto B73c067;
case 0x73c06f:c.instructions+=1;goto B73c06f;
case 0x73c074:goto L73c074;
case 0x73c077:c.instructions+=5;goto B73c077;
case 0x73c079:c.instructions+=4;goto B73c079;
case 0x73c07c:c.instructions+=3;goto B73c07c;
case 0x73c07f:c.instructions+=2;goto B73c07f;
case 0x73c082:c.instructions+=1;goto B73c082;
case 0x73c088:goto L73c088;
case 0x73c08f:goto L73c08f;
case 0x73c090:c.instructions+=1;goto B73c090;
case 0x73c095:goto L73c095;
case 0x73c099:c.instructions+=4;goto B73c099;
case 0x73c09b:c.instructions+=3;goto B73c09b;
case 0x73c09e:c.instructions+=2;goto B73c09e;
case 0x73c0a1:c.instructions+=1;goto B73c0a1;
case 0x73c0a3:goto L73c0a3;
case 0x73c0a4:c.instructions+=1;goto B73c0a4;
case 0x73c0a6:goto L73c0a6;
case 0x73c0aa:c.instructions+=5;goto B73c0aa;
case 0x73c0b0:c.instructions+=4;goto B73c0b0;
case 0x73c0b4:c.instructions+=3;goto B73c0b4;
case 0x73c0ba:c.instructions+=2;goto B73c0ba;
case 0x73c0c0:c.instructions+=1;goto B73c0c0;
case 0x73c0c5:goto L73c0c5;
case 0x73c0c8:c.instructions+=1;goto B73c0c8;
case 0x73c0ce:goto L73c0ce;
case 0x73c0d0:c.instructions+=1;goto B73c0d0;
case 0x73c0d5:goto L73c0d5;
case 0x73c0da:c.instructions+=10;goto B73c0da;
case 0x73c0dd:c.instructions+=9;goto B73c0dd;
case 0x73c0e2:c.instructions+=8;goto B73c0e2;
case 0x73c0e5:c.instructions+=7;goto B73c0e5;
case 0x73c0e9:c.instructions+=6;goto B73c0e9;
case 0x73c0ec:c.instructions+=5;goto B73c0ec;
case 0x73c0ee:c.instructions+=4;goto B73c0ee;
case 0x73c0f1:c.instructions+=3;goto B73c0f1;
case 0x73c0f4:c.instructions+=2;goto B73c0f4;
case 0x73c0f7:c.instructions+=1;goto B73c0f7;
case 0x73c0fd:goto L73c0fd;
case 0x73c104:goto L73c104;
case 0x73c108:c.instructions+=3;goto B73c108;
case 0x73c10b:c.instructions+=2;goto B73c10b;
case 0x73c10e:c.instructions+=1;goto B73c10e;
case 0x73c110:goto L73c110;
case 0x73c111:c.instructions+=1;goto B73c111;
case 0x73c113:goto L73c113;
case 0x73c114:c.instructions+=1;goto B73c114;
case 0x73c11a:goto L73c11a;
case 0x73c11d:c.instructions+=2;goto B73c11d;
case 0x73c11f:c.instructions+=1;goto B73c11f;
case 0x73c125:goto L73c125;
case 0x73c127:c.instructions+=4;goto B73c127;
case 0x73c12a:c.instructions+=3;goto B73c12a;
case 0x73c12d:c.instructions+=2;goto B73c12d;
case 0x73c12f:c.instructions+=1;goto B73c12f;
case 0x73c134:goto L73c134;
case 0x73c136:c.instructions+=1;goto B73c136;
case 0x73c13c:goto L73c13c;
case 0x73c140:c.instructions+=1;goto B73c140;
case 0x73c146:goto L73c146;
case 0x73c149:c.instructions+=2;goto B73c149;
case 0x73c14b:c.instructions+=1;goto B73c14b;
case 0x73c151:goto L73c151;
case 0x73c154:c.instructions+=3;goto B73c154;
case 0x73c157:c.instructions+=2;goto B73c157;
case 0x73c15d:c.instructions+=1;goto B73c15d;
case 0x73c162:goto L73c162;
case 0x73c166:c.instructions+=2;goto B73c166;
case 0x73c168:c.instructions+=1;goto B73c168;
case 0x73c16d:goto L73c16d;
case 0x73c171:c.instructions+=3;goto B73c171;
case 0x73c174:c.instructions+=2;goto B73c174;
case 0x73c177:c.instructions+=1;goto B73c177;
case 0x73c179:goto L73c179;
case 0x73c17a:c.instructions+=1;goto B73c17a;
case 0x73c17c:goto L73c17c;
case 0x73c17d:c.instructions+=1;goto B73c17d;
case 0x73c183:goto L73c183;
case 0x73c186:c.instructions+=2;goto B73c186;
case 0x73c188:c.instructions+=1;goto B73c188;
case 0x73c18e:goto L73c18e;
case 0x73c190:c.instructions+=4;goto B73c190;
case 0x73c193:c.instructions+=3;goto B73c193;
case 0x73c196:c.instructions+=2;goto B73c196;
case 0x73c198:c.instructions+=1;goto B73c198;
case 0x73c19e:goto L73c19e;
case 0x73c1a3:goto L73c1a3;
case 0x73c1a6:c.instructions+=2;goto B73c1a6;
case 0x73c1a8:c.instructions+=1;goto B73c1a8;
case 0x73c1ae:goto L73c1ae;
case 0x73c1b0:c.instructions+=1;goto B73c1b0;
case 0x73c1b6:goto L73c1b6;
case 0x73c1ba:c.instructions+=1;goto B73c1ba;
case 0x73c1c0:goto L73c1c0;
case 0x73c1c3:c.instructions+=3;goto B73c1c3;
case 0x73c1c6:c.instructions+=2;goto B73c1c6;
case 0x73c1cc:c.instructions+=1;goto B73c1cc;
case 0x73c1d2:goto L73c1d2;
case 0x73c1d7:goto L73c1d7;
case 0x73c1db:c.instructions+=2;goto B73c1db;
case 0x73c1dd:c.instructions+=1;goto B73c1dd;
case 0x73c1e3:goto L73c1e3;
case 0x73c1e8:goto L73c1e8;
case 0x73c1ec:c.instructions+=3;goto B73c1ec;
case 0x73c1ef:c.instructions+=2;goto B73c1ef;
case 0x73c1f2:c.instructions+=1;goto B73c1f2;
case 0x73c1f4:goto L73c1f4;
case 0x73c1f5:c.instructions+=1;goto B73c1f5;
case 0x73c1f7:goto L73c1f7;
case 0x73c1f8:c.instructions+=1;goto B73c1f8;
case 0x73c1fe:goto L73c1fe;
case 0x73c201:c.instructions+=2;goto B73c201;
case 0x73c203:c.instructions+=1;goto B73c203;
case 0x73c209:goto L73c209;
case 0x73c20b:c.instructions+=4;goto B73c20b;
case 0x73c20e:c.instructions+=3;goto B73c20e;
case 0x73c211:c.instructions+=2;goto B73c211;
case 0x73c213:c.instructions+=1;goto B73c213;
case 0x73c219:goto L73c219;
case 0x73c21e:goto L73c21e;
case 0x73c221:c.instructions+=2;goto B73c221;
case 0x73c223:c.instructions+=1;goto B73c223;
case 0x73c229:goto L73c229;
case 0x73c22b:c.instructions+=1;goto B73c22b;
case 0x73c231:goto L73c231;
case 0x73c235:c.instructions+=1;goto B73c235;
case 0x73c23b:goto L73c23b;
case 0x73c23e:c.instructions+=5;goto B73c23e;
case 0x73c241:c.instructions+=4;goto B73c241;
case 0x73c247:c.instructions+=3;goto B73c247;
case 0x73c24c:c.instructions+=2;goto B73c24c;
case 0x73c24e:c.instructions+=1;goto B73c24e;
case 0x73c254:goto L73c254;
case 0x73c259:goto L73c259;
case 0x73c25d:c.instructions+=2;goto B73c25d;
case 0x73c25f:c.instructions+=1;goto B73c25f;
case 0x73c265:goto L73c265;
case 0x73c26a:goto L73c26a;
case 0x73c26e:c.instructions+=3;goto B73c26e;
case 0x73c271:c.instructions+=2;goto B73c271;
case 0x73c274:c.instructions+=1;goto B73c274;
case 0x73c276:goto L73c276;
case 0x73c277:c.instructions+=1;goto B73c277;
case 0x73c279:goto L73c279;
case 0x73c27a:c.instructions+=1;goto B73c27a;
case 0x73c280:goto L73c280;
case 0x73c283:c.instructions+=2;goto B73c283;
case 0x73c285:c.instructions+=1;goto B73c285;
case 0x73c28b:goto L73c28b;
case 0x73c28d:c.instructions+=4;goto B73c28d;
case 0x73c290:c.instructions+=3;goto B73c290;
case 0x73c293:c.instructions+=2;goto B73c293;
case 0x73c295:c.instructions+=1;goto B73c295;
case 0x73c29b:goto L73c29b;
case 0x73c2a0:goto L73c2a0;
case 0x73c2a3:c.instructions+=2;goto B73c2a3;
case 0x73c2a5:c.instructions+=1;goto B73c2a5;
case 0x73c2ab:goto L73c2ab;
case 0x73c2ad:c.instructions+=1;goto B73c2ad;
case 0x73c2b3:goto L73c2b3;
case 0x73c2b7:c.instructions+=1;goto B73c2b7;
case 0x73c2bd:goto L73c2bd;
case 0x73c2c0:c.instructions+=5;goto B73c2c0;
case 0x73c2c3:c.instructions+=4;goto B73c2c3;
case 0x73c2c9:c.instructions+=3;goto B73c2c9;
case 0x73c2ce:c.instructions+=2;goto B73c2ce;
case 0x73c2d0:c.instructions+=1;goto B73c2d0;
case 0x73c2d6:goto L73c2d6;
case 0x73c2db:goto L73c2db;
case 0x73c2df:c.instructions+=2;goto B73c2df;
case 0x73c2e1:c.instructions+=1;goto B73c2e1;
case 0x73c2e7:goto L73c2e7;
case 0x73c2ec:goto L73c2ec;
case 0x73c2f0:c.instructions+=3;goto B73c2f0;
case 0x73c2f3:c.instructions+=2;goto B73c2f3;
case 0x73c2f6:c.instructions+=1;goto B73c2f6;
case 0x73c2f8:goto L73c2f8;
case 0x73c2f9:c.instructions+=1;goto B73c2f9;
case 0x73c2fb:goto L73c2fb;
case 0x73c2fc:c.instructions+=1;goto B73c2fc;
case 0x73c302:goto L73c302;
case 0x73c305:c.instructions+=2;goto B73c305;
case 0x73c307:c.instructions+=1;goto B73c307;
case 0x73c30d:goto L73c30d;
case 0x73c30f:c.instructions+=4;goto B73c30f;
case 0x73c312:c.instructions+=3;goto B73c312;
case 0x73c315:c.instructions+=2;goto B73c315;
case 0x73c317:c.instructions+=1;goto B73c317;
case 0x73c31d:goto L73c31d;
case 0x73c322:goto L73c322;
case 0x73c324:c.instructions+=1;goto B73c324;
case 0x73c32a:goto L73c32a;
case 0x73c32e:c.instructions+=1;goto B73c32e;
case 0x73c334:goto L73c334;
case 0x73c337:c.instructions+=2;goto B73c337;
case 0x73c339:c.instructions+=1;goto B73c339;
case 0x73c33f:goto L73c33f;
case 0x73c342:c.instructions+=5;goto B73c342;
case 0x73c345:c.instructions+=4;goto B73c345;
case 0x73c34b:c.instructions+=3;goto B73c34b;
case 0x73c350:c.instructions+=2;goto B73c350;
case 0x73c352:c.instructions+=1;goto B73c352;
case 0x73c358:goto L73c358;
case 0x73c35d:goto L73c35d;
case 0x73c361:c.instructions+=2;goto B73c361;
case 0x73c363:c.instructions+=1;goto B73c363;
case 0x73c368:goto L73c368;
case 0x73c36c:c.instructions+=3;goto B73c36c;
case 0x73c36f:c.instructions+=2;goto B73c36f;
case 0x73c372:c.instructions+=1;goto B73c372;
case 0x73c374:goto L73c374;
case 0x73c375:c.instructions+=1;goto B73c375;
case 0x73c377:goto L73c377;
case 0x73c378:c.instructions+=1;goto B73c378;
case 0x73c37e:goto L73c37e;
case 0x73c381:c.instructions+=2;goto B73c381;
case 0x73c383:c.instructions+=1;goto B73c383;
case 0x73c389:goto L73c389;
case 0x73c38b:c.instructions+=4;goto B73c38b;
case 0x73c38e:c.instructions+=3;goto B73c38e;
case 0x73c391:c.instructions+=2;goto B73c391;
case 0x73c393:c.instructions+=1;goto B73c393;
case 0x73c399:goto L73c399;
case 0x73c39e:goto L73c39e;
case 0x73c3a0:c.instructions+=1;goto B73c3a0;
case 0x73c3a6:goto L73c3a6;
case 0x73c3aa:c.instructions+=1;goto B73c3aa;
case 0x73c3b0:goto L73c3b0;
case 0x73c3b3:c.instructions+=2;goto B73c3b3;
case 0x73c3b5:c.instructions+=1;goto B73c3b5;
case 0x73c3bb:goto L73c3bb;
case 0x73c3be:c.instructions+=5;goto B73c3be;
case 0x73c3c1:c.instructions+=4;goto B73c3c1;
case 0x73c3c7:c.instructions+=3;goto B73c3c7;
case 0x73c3cc:c.instructions+=2;goto B73c3cc;
case 0x73c3ce:c.instructions+=1;goto B73c3ce;
case 0x73c3d4:goto L73c3d4;
case 0x73c3d9:goto L73c3d9;
case 0x73c3dd:c.instructions+=2;goto B73c3dd;
case 0x73c3df:c.instructions+=1;goto B73c3df;
case 0x73c3e5:goto L73c3e5;
case 0x73c3ea:goto L73c3ea;
case 0x73c3ee:c.instructions+=5;goto B73c3ee;
case 0x73c3f0:c.instructions+=4;goto B73c3f0;
case 0x73c3f3:c.instructions+=3;goto B73c3f3;
case 0x73c3f6:c.instructions+=2;goto B73c3f6;
case 0x73c3f9:c.instructions+=1;goto B73c3f9;
case 0x73c3ff:goto L73c3ff;
case 0x73c406:goto L73c406;
case 0x73c40a:c.instructions+=1;goto B73c40a;
case 0x73c40c:goto L73c40c;
case 0x73c410:c.instructions+=1;goto B73c410;
case 0x73c416:goto L73c416;
case 0x73c41b:goto L73c41b;
case 0x73c41f:c.instructions+=1;goto B73c41f;
case 0x73c425:goto L73c425;
case 0x73c42a:goto L73c42a;
case 0x73c42e:c.instructions+=1;goto B73c42e;
case 0x73c434:goto L73c434;
case 0x73c436:goto L73c436;
case 0x73c43a:c.instructions+=1;goto B73c43a;
case 0x73c43c:goto L73c43c;
case 0x73c43e:goto L73c43e;
case 0x73c442:c.instructions+=1;goto B73c442;
case 0x73c444:goto L73c444;
case 0x73c447:c.instructions+=2;goto B73c447;
case 0x73c448:c.instructions+=1;goto B73c448;
case 0x73c44d:goto L73c44d;
case 0x73c44f:c.instructions+=5;goto B73c44f;
case 0x73c452:c.instructions+=4;goto B73c452;
case 0x73c455:c.instructions+=3;goto B73c455;
case 0x73c458:c.instructions+=2;goto B73c458;
case 0x73c45b:c.instructions+=1;goto B73c45b;
case 0x73c45d:goto L73c45d;
case 0x73c464:goto L73c464;
case 0x73c467:c.instructions+=2;goto B73c467;
case 0x73c468:c.instructions+=1;goto B73c468;
case 0x73c46d:goto L73c46d;
case 0x73c46f:c.instructions+=5;goto B73c46f;
case 0x73c472:c.instructions+=4;goto B73c472;
case 0x73c475:c.instructions+=3;goto B73c475;
case 0x73c478:c.instructions+=2;goto B73c478;
case 0x73c47b:c.instructions+=1;goto B73c47b;
case 0x73c47d:goto L73c47d;
case 0x73c484:goto L73c484;
case 0x73c488:goto L73c488;
case 0x73c48a:goto L73c48a;
case 0x73c48c:goto L73c48c;
case 0x73c490:c.instructions+=1;goto B73c490;
case 0x73c492:goto L73c492;
case 0x73c494:goto L73c494;
case 0x73c498:c.instructions+=1;goto B73c498;
case 0x73c49a:goto L73c49a;
case 0x73c49c:goto L73c49c;
case 0x73c4a0:c.instructions+=1;goto B73c4a0;
case 0x73c4a2:goto L73c4a2;
case 0x73c4a4:goto L73c4a4;
case 0x73c4a8:c.instructions+=1;goto B73c4a8;
case 0x73c4aa:goto L73c4aa;
case 0x73c4ac:goto L73c4ac;
case 0x73c4b0:goto L73c4b0;
case 0x73c4b2:goto L73c4b2;
case 0x73c4b8:goto L73c4b8;
case 0x73c4bb:goto L73c4bb;
case 0x73c4c2:c.instructions+=2;goto B73c4c2;
case 0x73c4c5:c.instructions+=1;goto B73c4c5;
case 0x73c4c7:goto L73c4c7;
case 0x73c4c9:c.instructions+=7;goto B73c4c9;
case 0x73c4cc:c.instructions+=6;goto B73c4cc;
case 0x73c4cf:c.instructions+=5;goto B73c4cf;
case 0x73c4d2:c.instructions+=4;goto B73c4d2;
case 0x73c4d4:c.instructions+=3;goto B73c4d4;
case 0x73c4d5:c.instructions+=2;goto B73c4d5;
case 0x73c4d6:c.instructions+=1;goto B73c4d6;
case 0x73c4db:goto L73c4db;
case 0x73c4de:goto L73c4de;
case 0x73c4e1:c.instructions+=2;goto B73c4e1;
case 0x73c4e6:c.instructions+=1;goto B73c4e6;
case 0x73c4e8:goto L73c4e8;
case 0x73c4ea:c.instructions+=5;goto B73c4ea;
case 0x73c4ec:c.instructions+=4;goto B73c4ec;
case 0x73c4ee:c.instructions+=3;goto B73c4ee;
case 0x73c4f4:c.instructions+=2;goto B73c4f4;
case 0x73c4f6:c.instructions+=1;goto B73c4f6;
case 0x73c4f9:goto L73c4f9;
case 0x73c4fc:c.instructions+=5;goto B73c4fc;
case 0x73c4fe:c.instructions+=4;goto B73c4fe;
case 0x73c501:c.instructions+=3;goto B73c501;
case 0x73c504:c.instructions+=2;goto B73c504;
case 0x73c507:c.instructions+=1;goto B73c507;
case 0x73c509:goto L73c509;
case 0x73c50c:c.instructions+=1;goto B73c50c;
case 0x73c50e:goto L73c50e;
case 0x73c511:goto L73c511;
case 0x73c514:c.instructions+=2;goto B73c514;
case 0x73c517:c.instructions+=1;goto B73c517;
case 0x73c519:goto L73c519;
case 0x73c51b:c.instructions+=8;goto B73c51b;
case 0x73c51e:c.instructions+=7;goto B73c51e;
case 0x73c521:c.instructions+=6;goto B73c521;
case 0x73c524:c.instructions+=5;goto B73c524;
case 0x73c526:c.instructions+=4;goto B73c526;
case 0x73c527:c.instructions+=3;goto B73c527;
case 0x73c528:c.instructions+=2;goto B73c528;
case 0x73c529:c.instructions+=1;goto B73c529;
case 0x73c52e:goto L73c52e;
case 0x73c531:goto L73c531;
case 0x73c538:goto L73c538;
case 0x73c53c:c.instructions+=4;goto B73c53c;
case 0x73c53d:c.instructions+=3;goto B73c53d;
case 0x73c540:c.instructions+=2;goto B73c540;
case 0x73c544:c.instructions+=1;goto B73c544;
case 0x73c54a:goto L73c54a;
case 0x73c54d:c.instructions+=8;goto B73c54d;
case 0x73c54e:c.instructions+=7;goto B73c54e;
case 0x73c551:c.instructions+=6;goto B73c551;
case 0x73c552:c.instructions+=5;goto B73c552;
case 0x73c555:c.instructions+=4;goto B73c555;
case 0x73c556:c.instructions+=3;goto B73c556;
case 0x73c558:c.instructions+=2;goto B73c558;
case 0x73c559:c.instructions+=1;goto B73c559;
case 0x73c6b0:goto L73c6b0;
case 0x73c6b3:c.instructions+=21;goto B73c6b3;
case 0x73c6b8:c.instructions+=20;goto B73c6b8;
case 0x73c6bb:c.instructions+=19;goto B73c6bb;
case 0x73c6bc:c.instructions+=18;goto B73c6bc;
case 0x73c6c0:c.instructions+=17;goto B73c6c0;
case 0x73c6c4:c.instructions+=16;goto B73c6c4;
case 0x73c6c8:c.instructions+=15;goto B73c6c8;
case 0x73c6cb:c.instructions+=14;goto B73c6cb;
case 0x73c6cc:c.instructions+=13;goto B73c6cc;
case 0x73c6cf:c.instructions+=12;goto B73c6cf;
case 0x73c6d3:c.instructions+=11;goto B73c6d3;
case 0x73c6d6:c.instructions+=10;goto B73c6d6;
case 0x73c6da:c.instructions+=9;goto B73c6da;
case 0x73c6de:c.instructions+=8;goto B73c6de;
case 0x73c6e2:c.instructions+=7;goto B73c6e2;
case 0x73c6e4:c.instructions+=6;goto B73c6e4;
case 0x73c6e5:c.instructions+=5;goto B73c6e5;
case 0x73c6e9:c.instructions+=4;goto B73c6e9;
case 0x73c6ea:c.instructions+=3;goto B73c6ea;
case 0x73c6ee:c.instructions+=2;goto B73c6ee;
case 0x73c6f2:c.instructions+=1;goto B73c6f2;
case 0x73c6f4:goto L73c6f4;
case 0x73c6fa:goto L73c6fa;
case 0x73c6fd:c.instructions+=7;goto B73c6fd;
case 0x73c701:c.instructions+=6;goto B73c701;
case 0x73c705:c.instructions+=5;goto B73c705;
case 0x73c707:c.instructions+=4;goto B73c707;
case 0x73c70a:c.instructions+=3;goto B73c70a;
case 0x73c70d:c.instructions+=2;goto B73c70d;
case 0x73c711:c.instructions+=1;goto B73c711;
case 0x73c713:goto L73c713;
case 0x73c715:c.instructions+=7;goto B73c715;
case 0x73c718:c.instructions+=6;goto B73c718;
case 0x73c71b:c.instructions+=5;goto B73c71b;
case 0x73c71e:c.instructions+=4;goto B73c71e;
case 0x73c720:c.instructions+=3;goto B73c720;
case 0x73c724:c.instructions+=2;goto B73c724;
case 0x73c728:c.instructions+=1;goto B73c728;
case 0x73c72a:goto L73c72a;
case 0x73c730:goto L73c730;
case 0x73c734:c.instructions+=1;goto B73c734;
case 0x73c738:goto L73c738;
case 0x73c73b:c.instructions+=5;goto B73c73b;
case 0x73c73e:c.instructions+=4;goto B73c73e;
case 0x73c740:c.instructions+=3;goto B73c740;
case 0x73c744:c.instructions+=2;goto B73c744;
case 0x73c748:c.instructions+=1;goto B73c748;
case 0x73c74a:goto L73c74a;
case 0x73c750:goto L73c750;
case 0x73c754:c.instructions+=8;goto B73c754;
case 0x73c757:c.instructions+=7;goto B73c757;
case 0x73c75b:c.instructions+=6;goto B73c75b;
case 0x73c75c:c.instructions+=5;goto B73c75c;
case 0x73c760:c.instructions+=4;goto B73c760;
case 0x73c761:c.instructions+=3;goto B73c761;
case 0x73c762:c.instructions+=2;goto B73c762;
case 0x73c766:c.instructions+=1;goto B73c766;
case 0x73c76b:goto L73c76b;
case 0x73c76e:c.instructions+=5;goto B73c76e;
case 0x73c771:c.instructions+=4;goto B73c771;
case 0x73c774:c.instructions+=3;goto B73c774;
case 0x73c777:c.instructions+=2;goto B73c777;
case 0x73c779:c.instructions+=1;goto B73c779;
case 0x73c77b:goto L73c77b;
case 0x73c77f:c.instructions+=1;goto B73c77f;
case 0x73c781:goto L73c781;
case 0x73c784:c.instructions+=6;goto B73c784;
case 0x73c786:c.instructions+=5;goto B73c786;
case 0x73c787:c.instructions+=4;goto B73c787;
case 0x73c789:c.instructions+=3;goto B73c789;
case 0x73c78d:c.instructions+=2;goto B73c78d;
case 0x73c791:c.instructions+=1;goto B73c791;
case 0x73c793:goto L73c793;
case 0x73c799:goto L73c799;
case 0x73c79c:c.instructions+=3;goto B73c79c;
case 0x73c79f:c.instructions+=2;goto B73c79f;
case 0x73c7a1:c.instructions+=1;goto B73c7a1;
case 0x73c7a3:goto L73c7a3;
case 0x73c7a9:goto L73c7a9;
case 0x73c7ad:c.instructions+=4;goto B73c7ad;
case 0x73c7af:c.instructions+=3;goto B73c7af;
case 0x73c7b1:c.instructions+=2;goto B73c7b1;
case 0x73c7b5:c.instructions+=1;goto B73c7b5;
case 0x73c7b7:goto L73c7b7;
case 0x73c7bd:goto L73c7bd;
case 0x73c7bf:c.instructions+=3;goto B73c7bf;
case 0x73c7c3:c.instructions+=2;goto B73c7c3;
case 0x73c7c5:c.instructions+=1;goto B73c7c5;
case 0x73c7c7:goto L73c7c7;
case 0x73c7cb:c.instructions+=3;goto B73c7cb;
case 0x73c7cf:c.instructions+=2;goto B73c7cf;
case 0x73c7d1:c.instructions+=1;goto B73c7d1;
case 0x73c7d3:goto L73c7d3;
case 0x73c7d9:goto L73c7d9;
case 0x73c7dd:c.instructions+=3;goto B73c7dd;
case 0x73c7e1:c.instructions+=2;goto B73c7e1;
case 0x73c7e3:c.instructions+=1;goto B73c7e3;
case 0x73c7e5:goto L73c7e5;
case 0x73c7eb:goto L73c7eb;
case 0x73c7ef:c.instructions+=4;goto B73c7ef;
case 0x73c7f3:c.instructions+=3;goto B73c7f3;
case 0x73c7f5:c.instructions+=2;goto B73c7f5;
case 0x73c7f9:c.instructions+=1;goto B73c7f9;
case 0x73c7ff:goto L73c7ff;
case 0x73c801:c.instructions+=11;goto B73c801;
case 0x73c805:c.instructions+=10;goto B73c805;
case 0x73c808:c.instructions+=9;goto B73c808;
case 0x73c80a:c.instructions+=8;goto B73c80a;
case 0x73c80c:c.instructions+=7;goto B73c80c;
case 0x73c80e:c.instructions+=6;goto B73c80e;
case 0x73c811:c.instructions+=5;goto B73c811;
case 0x73c817:c.instructions+=4;goto B73c817;
case 0x73c819:c.instructions+=3;goto B73c819;
case 0x73c81b:c.instructions+=2;goto B73c81b;
case 0x73c81d:c.instructions+=1;goto B73c81d;
case 0x73c822:goto L73c822;
case 0x73c826:c.instructions+=2;goto B73c826;
case 0x73c829:c.instructions+=1;goto B73c829;
case 0x73c82e:goto L73c82e;
case 0x73c832:c.instructions+=2;goto B73c832;
case 0x73c835:c.instructions+=1;goto B73c835;
case 0x73c83a:goto L73c83a;
case 0x73c83e:c.instructions+=7;goto B73c83e;
case 0x73c842:c.instructions+=6;goto B73c842;
case 0x73c845:c.instructions+=5;goto B73c845;
case 0x73c849:c.instructions+=4;goto B73c849;
case 0x73c84d:c.instructions+=3;goto B73c84d;
case 0x73c850:c.instructions+=2;goto B73c850;
case 0x73c852:c.instructions+=1;goto B73c852;
case 0x73c857:goto L73c857;
case 0x73c85b:c.instructions+=2;goto B73c85b;
case 0x73c85e:c.instructions+=1;goto B73c85e;
case 0x73c863:goto L73c863;
case 0x73c864:c.instructions+=5;goto B73c864;
case 0x73c868:c.instructions+=4;goto B73c868;
case 0x73c86c:c.instructions+=3;goto B73c86c;
case 0x73c870:c.instructions+=2;goto B73c870;
case 0x73c872:c.instructions+=1;goto B73c872;
case 0x73c877:goto L73c877;
case 0x73c879:c.instructions+=2;goto B73c879;
case 0x73c87c:c.instructions+=1;goto B73c87c;
case 0x73c881:goto L73c881;
case 0x73c885:c.instructions+=7;goto B73c885;
case 0x73c886:c.instructions+=6;goto B73c886;
case 0x73c889:c.instructions+=5;goto B73c889;
case 0x73c88a:c.instructions+=4;goto B73c88a;
case 0x73c88b:c.instructions+=3;goto B73c88b;
case 0x73c88c:c.instructions+=2;goto B73c88c;
case 0x73c88f:c.instructions+=1;goto B73c88f;
case 0x73c894:goto L73c894;
case 0x73c895:c.instructions+=7;goto B73c895;
case 0x73c897:c.instructions+=6;goto B73c897;
case 0x73c89b:c.instructions+=5;goto B73c89b;
case 0x73c89c:c.instructions+=4;goto B73c89c;
case 0x73c89d:c.instructions+=3;goto B73c89d;
case 0x73c89e:c.instructions+=2;goto B73c89e;
case 0x73c8a1:c.instructions+=1;goto B73c8a1;
case 0x73c8b0:goto L73c8b0;
case 0x73c8b5:c.instructions+=14;goto B73c8b5;
case 0x73c8b8:c.instructions+=13;goto B73c8b8;
case 0x73c8b9:c.instructions+=12;goto B73c8b9;
case 0x73c8ba:c.instructions+=11;goto B73c8ba;
case 0x73c8be:c.instructions+=10;goto B73c8be;
case 0x73c8c1:c.instructions+=9;goto B73c8c1;
case 0x73c8c4:c.instructions+=8;goto B73c8c4;
case 0x73c8c8:c.instructions+=7;goto B73c8c8;
case 0x73c8cb:c.instructions+=6;goto B73c8cb;
case 0x73c8cf:c.instructions+=5;goto B73c8cf;
case 0x73c8d0:c.instructions+=4;goto B73c8d0;
case 0x73c8d2:c.instructions+=3;goto B73c8d2;
case 0x73c8d4:c.instructions+=2;goto B73c8d4;
case 0x73c8d7:c.instructions+=1;goto B73c8d7;
case 0x73c8d9:goto L73c8d9;
case 0x73c8dc:c.instructions+=2;goto B73c8dc;
case 0x73c8de:c.instructions+=1;goto B73c8de;
case 0x73c8e0:goto L73c8e0;
case 0x73c8e1:c.instructions+=4;goto B73c8e1;
case 0x73c8e5:c.instructions+=3;goto B73c8e5;
case 0x73c8e6:c.instructions+=2;goto B73c8e6;
case 0x73c8e7:c.instructions+=1;goto B73c8e7;
case 0x73c8ec:goto L73c8ec;
case 0x73c8ef:c.instructions+=5;goto B73c8ef;
case 0x73c8f2:c.instructions+=4;goto B73c8f2;
case 0x73c8f5:c.instructions+=3;goto B73c8f5;
case 0x73c8f8:c.instructions+=2;goto B73c8f8;
case 0x73c8fb:c.instructions+=1;goto B73c8fb;
case 0x73c8fd:goto L73c8fd;
case 0x73c900:c.instructions+=18;goto B73c900;
case 0x73c902:c.instructions+=17;goto B73c902;
case 0x73c905:c.instructions+=16;goto B73c905;
case 0x73c908:c.instructions+=15;goto B73c908;
case 0x73c90a:c.instructions+=14;goto B73c90a;
case 0x73c90d:c.instructions+=13;goto B73c90d;
case 0x73c910:c.instructions+=12;goto B73c910;
case 0x73c913:c.instructions+=11;goto B73c913;
case 0x73c916:c.instructions+=10;goto B73c916;
case 0x73c919:c.instructions+=9;goto B73c919;
case 0x73c91a:c.instructions+=8;goto B73c91a;
case 0x73c91c:c.instructions+=7;goto B73c91c;
case 0x73c91e:c.instructions+=6;goto B73c91e;
case 0x73c91f:c.instructions+=5;goto B73c91f;
case 0x73c921:c.instructions+=4;goto B73c921;
case 0x73c922:c.instructions+=3;goto B73c922;
case 0x73c923:c.instructions+=2;goto B73c923;
case 0x73c924:c.instructions+=1;goto B73c924;
case 0x73c925:goto L73c925;
case 0x73c928:c.instructions+=1;goto B73c928;
case 0x73c92a:goto L73c92a;
case 0x73c92c:c.instructions+=7;goto B73c92c;
case 0x73c92f:c.instructions+=6;goto B73c92f;
case 0x73c930:c.instructions+=5;goto B73c930;
case 0x73c932:c.instructions+=4;goto B73c932;
case 0x73c934:c.instructions+=3;goto B73c934;
case 0x73c936:c.instructions+=2;goto B73c936;
case 0x73c937:c.instructions+=1;goto B73c937;
case 0x73c939:goto L73c939;
case 0x73c93b:c.instructions+=6;goto B73c93b;
case 0x73c93c:c.instructions+=5;goto B73c93c;
case 0x73c93e:c.instructions+=4;goto B73c93e;
case 0x73c93f:c.instructions+=3;goto B73c93f;
case 0x73c940:c.instructions+=2;goto B73c940;
case 0x73c941:c.instructions+=1;goto B73c941;
case 0x73c942:goto L73c942;
case 0x73c945:c.instructions+=1;goto B73c945;
case 0x73c947:goto L73c947;
case 0x73c94c:goto L73c94c;
case 0x73c94d:c.instructions+=5;goto B73c94d;
case 0x73c94f:c.instructions+=4;goto B73c94f;
case 0x73c950:c.instructions+=3;goto B73c950;
case 0x73c951:c.instructions+=2;goto B73c951;
case 0x73c952:c.instructions+=1;goto B73c952;
case 0x73c953:goto L73c953;
case 0x73c956:c.instructions+=8;goto B73c956;
case 0x73c95b:c.instructions+=7;goto B73c95b;
case 0x73c95d:c.instructions+=6;goto B73c95d;
case 0x73c95e:c.instructions+=5;goto B73c95e;
case 0x73c960:c.instructions+=4;goto B73c960;
case 0x73c961:c.instructions+=3;goto B73c961;
case 0x73c962:c.instructions+=2;goto B73c962;
case 0x73c963:c.instructions+=1;goto B73c963;
case 0x73c970:goto L73c970;
case 0x73c974:c.instructions+=5;goto B73c974;
case 0x73c977:c.instructions+=4;goto B73c977;
case 0x73c97b:c.instructions+=3;goto B73c97b;
case 0x73c97c:c.instructions+=2;goto B73c97c;
case 0x73c97d:c.instructions+=1;goto B73c97d;
case 0x73c982:goto L73c982;
case 0x73c985:c.instructions+=2;goto B73c985;
case 0x73c987:c.instructions+=1;goto B73c987;
case 0x73c989:goto L73c989;
case 0x73c98b:c.instructions+=2;goto B73c98b;
case 0x73c98e:c.instructions+=1;goto B73c98e;
case 0x73c990:goto L73c990;
case 0x73c994:c.instructions+=1;goto B73c994;
case 0x73c998:goto L73c998;
case 0x73c99c:c.instructions+=2;goto B73c99c;
case 0x73c99e:c.instructions+=1;goto B73c99e;
case 0x73c9a0:goto L73c9a0;
case 0x73c9a2:goto L73c9a2;
case 0x73c9a5:c.instructions+=1;goto B73c9a5;
case 0x73c9b0:goto L73c9b0;
case 0x73c9b4:c.instructions+=9;goto B73c9b4;
case 0x73c9b5:c.instructions+=8;goto B73c9b5;
case 0x73c9b6:c.instructions+=7;goto B73c9b6;
case 0x73c9b7:c.instructions+=6;goto B73c9b7;
case 0x73c9ba:c.instructions+=5;goto B73c9ba;
case 0x73c9bd:c.instructions+=4;goto B73c9bd;
case 0x73c9bf:c.instructions+=3;goto B73c9bf;
case 0x73c9c1:c.instructions+=2;goto B73c9c1;
case 0x73c9c4:c.instructions+=1;goto B73c9c4;
case 0x73c9c6:goto L73c9c6;
case 0x73c9c7:c.instructions+=2;goto B73c9c7;
case 0x73c9ca:c.instructions+=1;goto B73c9ca;
case 0x73c9d0:goto L73c9d0;
case 0x73c9d1:c.instructions+=2;goto B73c9d1;
case 0x73c9d2:c.instructions+=1;goto B73c9d2;
case 0x73c9d7:goto L73c9d7;
case 0x73c9da:c.instructions+=2;goto B73c9da;
case 0x73c9dc:c.instructions+=1;goto B73c9dc;
case 0x73c9de:goto L73c9de;
case 0x73c9e0:goto L73c9e0;
case 0x73c9e1:c.instructions+=2;goto B73c9e1;
case 0x73c9e3:c.instructions+=1;goto B73c9e3;
case 0x73c9e5:goto L73c9e5;
case 0x73c9e6:goto L73c9e6;
case 0x73c9e7:c.instructions+=4;goto B73c9e7;
case 0x73c9e8:c.instructions+=3;goto B73c9e8;
case 0x73c9ea:c.instructions+=2;goto B73c9ea;
case 0x73c9eb:c.instructions+=1;goto B73c9eb;
case 0x73c9f0:goto L73c9f0;
case 0x73c9f4:c.instructions+=5;goto B73c9f4;
case 0x73c9f6:c.instructions+=4;goto B73c9f6;
case 0x73c9fa:c.instructions+=3;goto B73c9fa;
case 0x73c9fb:c.instructions+=2;goto B73c9fb;
case 0x73c9fd:c.instructions+=1;goto B73c9fd;
case 0x73c9ff:goto L73c9ff;
case 0x73ca02:c.instructions+=2;goto B73ca02;
case 0x73ca03:c.instructions+=1;goto B73ca03;
case 0x73ca04:goto L73ca04;
case 0x73ca06:c.instructions+=3;goto B73ca06;
case 0x73ca07:c.instructions+=2;goto B73ca07;
case 0x73ca0c:c.instructions+=1;goto B73ca0c;
case 0x73ca0e:goto L73ca0e;
case 0x73ca0f:c.instructions+=3;goto B73ca0f;
case 0x73ca10:c.instructions+=2;goto B73ca10;
case 0x73ca14:c.instructions+=1;goto B73ca14;
case 0x73ca16:goto L73ca16;
case 0x73ca19:c.instructions+=5;goto B73ca19;
case 0x73ca1d:c.instructions+=4;goto B73ca1d;
case 0x73ca1f:c.instructions+=3;goto B73ca1f;
case 0x73ca21:c.instructions+=2;goto B73ca21;
case 0x73ca23:c.instructions+=1;goto B73ca23;
case 0x73ca25:goto L73ca25;
case 0x73ca27:goto L73ca27;
case 0x73ca29:c.instructions+=1;goto B73ca29;
case 0x73ca2b:goto L73ca2b;
case 0x73ca2d:goto L73ca2d;
case 0x73ca2f:c.instructions+=1;goto B73ca2f;
case 0x73ca31:goto L73ca31;
case 0x73ca33:goto L73ca33;
case 0x73ca35:c.instructions+=1;goto B73ca35;
case 0x73ca37:goto L73ca37;
case 0x73ca39:c.instructions+=1;goto B73ca39;
case 0x73ca3b:goto L73ca3b;
case 0x73ca3e:c.instructions+=2;goto B73ca3e;
case 0x73ca3f:c.instructions+=1;goto B73ca3f;
case 0x73ca41:goto L73ca41;
case 0x73ca42:c.instructions+=1;goto B73ca42;
case 0x73ca43:goto L73ca43;
case 0x73ca47:c.instructions+=3;goto B73ca47;
case 0x73ca48:c.instructions+=2;goto B73ca48;
case 0x73ca49:c.instructions+=1;goto B73ca49;
case 0x73ca50:goto L73ca50;
case 0x73ca55:c.instructions+=18;goto B73ca55;
case 0x73ca58:c.instructions+=17;goto B73ca58;
case 0x73ca59:c.instructions+=16;goto B73ca59;
case 0x73ca5d:c.instructions+=15;goto B73ca5d;
case 0x73ca61:c.instructions+=14;goto B73ca61;
case 0x73ca64:c.instructions+=13;goto B73ca64;
case 0x73ca65:c.instructions+=12;goto B73ca65;
case 0x73ca66:c.instructions+=11;goto B73ca66;
case 0x73ca69:c.instructions+=10;goto B73ca69;
case 0x73ca6a:c.instructions+=9;goto B73ca6a;
case 0x73ca6c:c.instructions+=8;goto B73ca6c;
case 0x73ca6e:c.instructions+=7;goto B73ca6e;
case 0x73ca71:c.instructions+=6;goto B73ca71;
case 0x73ca74:c.instructions+=5;goto B73ca74;
case 0x73ca78:c.instructions+=4;goto B73ca78;
case 0x73ca7c:c.instructions+=3;goto B73ca7c;
case 0x73ca7e:c.instructions+=2;goto B73ca7e;
case 0x73ca81:c.instructions+=1;goto B73ca81;
case 0x73ca83:goto L73ca83;
case 0x73ca86:c.instructions+=8;goto B73ca86;
case 0x73ca88:c.instructions+=7;goto B73ca88;
case 0x73ca8b:c.instructions+=6;goto B73ca8b;
case 0x73ca8e:c.instructions+=5;goto B73ca8e;
case 0x73ca90:c.instructions+=4;goto B73ca90;
case 0x73ca92:c.instructions+=3;goto B73ca92;
case 0x73ca95:c.instructions+=2;goto B73ca95;
case 0x73ca9b:c.instructions+=1;goto B73ca9b;
case 0x73ca9d:goto L73ca9d;
case 0x73caa0:c.instructions+=6;goto B73caa0;
case 0x73caa2:c.instructions+=5;goto B73caa2;
case 0x73caa5:c.instructions+=4;goto B73caa5;
case 0x73caa7:c.instructions+=3;goto B73caa7;
case 0x73caa9:c.instructions+=2;goto B73caa9;
case 0x73caac:c.instructions+=1;goto B73caac;
case 0x73caae:goto L73caae;
case 0x73cab5:c.instructions+=1;goto B73cab5;
case 0x73cab7:goto L73cab7;
case 0x73cabb:goto L73cabb;
case 0x73cabe:c.instructions+=4;goto B73cabe;
case 0x73cac1:c.instructions+=3;goto B73cac1;
case 0x73cac3:c.instructions+=2;goto B73cac3;
case 0x73cac6:c.instructions+=1;goto B73cac6;
case 0x73cac8:goto L73cac8;
case 0x73cacc:c.instructions+=2;goto B73cacc;
case 0x73cace:c.instructions+=1;goto B73cace;
case 0x73cad0:goto L73cad0;
case 0x73cad5:c.instructions+=2;goto B73cad5;
case 0x73cad7:c.instructions+=1;goto B73cad7;
case 0x73cad9:goto L73cad9;
case 0x73cada:c.instructions+=2;goto B73cada;
case 0x73cadc:c.instructions+=1;goto B73cadc;
case 0x73cade:goto L73cade;
case 0x73cadf:c.instructions+=3;goto B73cadf;
case 0x73cae0:c.instructions+=2;goto B73cae0;
case 0x73cae1:c.instructions+=1;goto B73cae1;
case 0x73cae6:goto L73cae6;
case 0x73cae9:c.instructions+=5;goto B73cae9;
case 0x73caea:c.instructions+=4;goto B73caea;
case 0x73caeb:c.instructions+=3;goto B73caeb;
case 0x73caec:c.instructions+=2;goto B73caec;
case 0x73caed:c.instructions+=1;goto B73caed;
case 0x73caee:goto L73caee;
case 0x73caf3:c.instructions+=2;goto B73caf3;
case 0x73caf5:c.instructions+=1;goto B73caf5;
case 0x73caf7:goto L73caf7;
case 0x73caf8:c.instructions+=3;goto B73caf8;
case 0x73caf9:c.instructions+=2;goto B73caf9;
case 0x73cafa:c.instructions+=1;goto B73cafa;
case 0x73caff:goto L73caff;
case 0x73cb02:goto L73cb02;
case 0x73cb03:c.instructions+=4;goto B73cb03;
case 0x73cb04:c.instructions+=3;goto B73cb04;
case 0x73cb05:c.instructions+=2;goto B73cb05;
case 0x73cb06:c.instructions+=1;goto B73cb06;
case 0x73cb10:goto L73cb10;
case 0x73cb14:c.instructions+=2;goto B73cb14;
case 0x73cb16:c.instructions+=1;goto B73cb16;
case 0x73cb18:goto L73cb18;
case 0x73cb1c:c.instructions+=1;goto B73cb1c;
case 0x73cb1d:goto L73cb1d;
case 0x73cb22:c.instructions+=7;goto B73cb22;
case 0x73cb25:c.instructions+=6;goto B73cb25;
case 0x73cb26:c.instructions+=5;goto B73cb26;
case 0x73cb29:c.instructions+=4;goto B73cb29;
case 0x73cb2d:c.instructions+=3;goto B73cb2d;
case 0x73cb31:c.instructions+=2;goto B73cb31;
case 0x73cb33:c.instructions+=1;goto B73cb33;
case 0x73cb35:goto L73cb35;
case 0x73cb39:c.instructions+=2;goto B73cb39;
case 0x73cb3a:c.instructions+=1;goto B73cb3a;
case 0x73cb3b:goto L73cb3b;
case 0x73cb3e:c.instructions+=11;goto B73cb3e;
case 0x73cb41:c.instructions+=10;goto B73cb41;
case 0x73cb44:c.instructions+=9;goto B73cb44;
case 0x73cb47:c.instructions+=8;goto B73cb47;
case 0x73cb48:c.instructions+=7;goto B73cb48;
case 0x73cb4b:c.instructions+=6;goto B73cb4b;
case 0x73cb4d:c.instructions+=5;goto B73cb4d;
case 0x73cb51:c.instructions+=4;goto B73cb51;
case 0x73cb53:c.instructions+=3;goto B73cb53;
case 0x73cb55:c.instructions+=2;goto B73cb55;
case 0x73cb57:c.instructions+=1;goto B73cb57;
case 0x73cb59:goto L73cb59;
case 0x73cb5a:c.instructions+=1;goto B73cb5a;
case 0x73cb60:goto L73cb60;
case 0x73cb63:c.instructions+=4;goto B73cb63;
case 0x73cb65:c.instructions+=3;goto B73cb65;
case 0x73cb68:c.instructions+=2;goto B73cb68;
case 0x73cb6a:c.instructions+=1;goto B73cb6a;
case 0x73cb6c:goto L73cb6c;
case 0x73cb72:c.instructions+=1;goto B73cb72;
case 0x73cb74:goto L73cb74;
case 0x73cb75:c.instructions+=2;goto B73cb75;
case 0x73cb77:c.instructions+=1;goto B73cb77;
case 0x73cb79:goto L73cb79;
case 0x73cb7a:goto L73cb7a;
case 0x73cb7b:c.instructions+=2;goto B73cb7b;
case 0x73cb7c:c.instructions+=1;goto B73cb7c;
case 0x73cb80:goto L73cb80;
case 0x73cb86:c.instructions+=12;goto B73cb86;
case 0x73cb89:c.instructions+=11;goto B73cb89;
case 0x73cb8c:c.instructions+=10;goto B73cb8c;
case 0x73cb8d:c.instructions+=9;goto B73cb8d;
case 0x73cb91:c.instructions+=8;goto B73cb91;
case 0x73cb95:c.instructions+=7;goto B73cb95;
case 0x73cb98:c.instructions+=6;goto B73cb98;
case 0x73cb99:c.instructions+=5;goto B73cb99;
case 0x73cb9a:c.instructions+=4;goto B73cb9a;
case 0x73cb9d:c.instructions+=3;goto B73cb9d;
case 0x73cb9f:c.instructions+=2;goto B73cb9f;
case 0x73cba1:c.instructions+=1;goto B73cba1;
case 0x73cba7:goto L73cba7;
case 0x73cba9:c.instructions+=5;goto B73cba9;
case 0x73cbac:c.instructions+=4;goto B73cbac;
case 0x73cbaf:c.instructions+=3;goto B73cbaf;
case 0x73cbb3:c.instructions+=2;goto B73cbb3;
case 0x73cbb5:c.instructions+=1;goto B73cbb5;
case 0x73cbbb:goto L73cbbb;
case 0x73cbc0:c.instructions+=17;goto B73cbc0;
case 0x73cbc2:c.instructions+=16;goto B73cbc2;
case 0x73cbc4:c.instructions+=15;goto B73cbc4;
case 0x73cbc8:c.instructions+=14;goto B73cbc8;
case 0x73cbcc:c.instructions+=13;goto B73cbcc;
case 0x73cbce:c.instructions+=12;goto B73cbce;
case 0x73cbd2:c.instructions+=11;goto B73cbd2;
case 0x73cbd6:c.instructions+=10;goto B73cbd6;
case 0x73cbd8:c.instructions+=9;goto B73cbd8;
case 0x73cbd9:c.instructions+=8;goto B73cbd9;
case 0x73cbdd:c.instructions+=7;goto B73cbdd;
case 0x73cbe1:c.instructions+=6;goto B73cbe1;
case 0x73cbe5:c.instructions+=5;goto B73cbe5;
case 0x73cbe9:c.instructions+=4;goto B73cbe9;
case 0x73cbeb:c.instructions+=3;goto B73cbeb;
case 0x73cbf1:c.instructions+=2;goto B73cbf1;
case 0x73cbf3:c.instructions+=1;goto B73cbf3;
case 0x73cbf5:goto L73cbf5;
case 0x73cbf9:c.instructions+=4;goto B73cbf9;
case 0x73cbfd:c.instructions+=3;goto B73cbfd;
case 0x73cbfe:c.instructions+=2;goto B73cbfe;
case 0x73cbff:c.instructions+=1;goto B73cbff;
case 0x73cc04:goto L73cc04;
case 0x73cc08:c.instructions+=12;goto B73cc08;
case 0x73cc0c:c.instructions+=11;goto B73cc0c;
case 0x73cc12:c.instructions+=10;goto B73cc12;
case 0x73cc18:c.instructions+=9;goto B73cc18;
case 0x73cc1c:c.instructions+=8;goto B73cc1c;
case 0x73cc20:c.instructions+=7;goto B73cc20;
case 0x73cc21:c.instructions+=6;goto B73cc21;
case 0x73cc25:c.instructions+=5;goto B73cc25;
case 0x73cc28:c.instructions+=4;goto B73cc28;
case 0x73cc29:c.instructions+=3;goto B73cc29;
case 0x73cc2d:c.instructions+=2;goto B73cc2d;
case 0x73cc31:c.instructions+=1;goto B73cc31;
case 0x73cc36:goto L73cc36;
case 0x73cc3a:c.instructions+=2;goto B73cc3a;
case 0x73cc3e:c.instructions+=1;goto B73cc3e;
case 0x73cc41:goto L73cc41;
case 0x73cc47:c.instructions+=19;goto B73cc47;
case 0x73cc4d:c.instructions+=18;goto B73cc4d;
case 0x73cc51:c.instructions+=17;goto B73cc51;
case 0x73cc56:c.instructions+=16;goto B73cc56;
case 0x73cc5a:c.instructions+=15;goto B73cc5a;
case 0x73cc5d:c.instructions+=14;goto B73cc5d;
case 0x73cc63:c.instructions+=13;goto B73cc63;
case 0x73cc65:c.instructions+=12;goto B73cc65;
case 0x73cc68:c.instructions+=11;goto B73cc68;
case 0x73cc6d:c.instructions+=10;goto B73cc6d;
case 0x73cc73:c.instructions+=9;goto B73cc73;
case 0x73cc76:c.instructions+=8;goto B73cc76;
case 0x73cc7a:c.instructions+=7;goto B73cc7a;
case 0x73cc7c:c.instructions+=6;goto B73cc7c;
case 0x73cc80:c.instructions+=5;goto B73cc80;
case 0x73cc81:c.instructions+=4;goto B73cc81;
case 0x73cc85:c.instructions+=3;goto B73cc85;
case 0x73cc86:c.instructions+=2;goto B73cc86;
case 0x73cc8a:c.instructions+=1;goto B73cc8a;
case 0x73cc8f:goto L73cc8f;
case 0x73cc93:c.instructions+=2;goto B73cc93;
case 0x73cc94:c.instructions+=1;goto B73cc94;
case 0x73cc99:goto L73cc99;
case 0x73cc9b:c.instructions+=3;goto B73cc9b;
case 0x73cc9c:c.instructions+=2;goto B73cc9c;
case 0x73cc9d:c.instructions+=1;goto B73cc9d;
case 0x73cca2:goto L73cca2;
case 0x73cca5:c.instructions+=7;goto B73cca5;
case 0x73cca7:c.instructions+=6;goto B73cca7;
case 0x73cca8:c.instructions+=5;goto B73cca8;
case 0x73cca9:c.instructions+=4;goto B73cca9;
case 0x73ccaa:c.instructions+=3;goto B73ccaa;
case 0x73ccab:c.instructions+=2;goto B73ccab;
case 0x73ccae:c.instructions+=1;goto B73ccae;
case 0x73ccaf:goto L73ccaf;
case 0x73ccb1:c.instructions+=5;goto B73ccb1;
case 0x73ccb2:c.instructions+=4;goto B73ccb2;
case 0x73ccb3:c.instructions+=3;goto B73ccb3;
case 0x73ccb4:c.instructions+=2;goto B73ccb4;
case 0x73ccb7:c.instructions+=1;goto B73ccb7;
case 0x73ccc0:goto L73ccc0;
case 0x73ccc3:c.instructions+=14;goto B73ccc3;
case 0x73ccc9:c.instructions+=13;goto B73ccc9;
case 0x73cccb:c.instructions+=12;goto B73cccb;
case 0x73cccc:c.instructions+=11;goto B73cccc;
case 0x73cccd:c.instructions+=10;goto B73cccd;
case 0x73cccf:c.instructions+=9;goto B73cccf;
case 0x73ccd1:c.instructions+=8;goto B73ccd1;
case 0x73ccd2:c.instructions+=7;goto B73ccd2;
case 0x73ccd3:c.instructions+=6;goto B73ccd3;
case 0x73ccd7:c.instructions+=5;goto B73ccd7;
case 0x73ccdb:c.instructions+=4;goto B73ccdb;
case 0x73ccdf:c.instructions+=3;goto B73ccdf;
case 0x73cce3:c.instructions+=2;goto B73cce3;
case 0x73cce7:c.instructions+=1;goto B73cce7;
case 0x73cce9:goto L73cce9;
case 0x73cced:c.instructions+=1;goto B73cced;
case 0x73ccf1:goto L73ccf1;
case 0x73ccf5:c.instructions+=2;goto B73ccf5;
case 0x73ccfc:c.instructions+=1;goto B73ccfc;
case 0x73cd02:goto L73cd02;
case 0x73cd03:c.instructions+=1;goto B73cd03;
case 0x73cd08:goto L73cd08;
case 0x73cd0e:c.instructions+=10;goto B73cd0e;
case 0x73cd12:c.instructions+=9;goto B73cd12;
case 0x73cd15:c.instructions+=8;goto B73cd15;
case 0x73cd19:c.instructions+=7;goto B73cd19;
case 0x73cd1c:c.instructions+=6;goto B73cd1c;
case 0x73cd1f:c.instructions+=5;goto B73cd1f;
case 0x73cd22:c.instructions+=4;goto B73cd22;
case 0x73cd25:c.instructions+=3;goto B73cd25;
case 0x73cd27:c.instructions+=2;goto B73cd27;
case 0x73cd2b:c.instructions+=1;goto B73cd2b;
case 0x73cd2d:goto L73cd2d;
case 0x73cd2f:c.instructions+=1;goto B73cd2f;
case 0x73cd31:goto L73cd31;
case 0x73cd34:c.instructions+=1;goto B73cd34;
case 0x73cd36:goto L73cd36;
case 0x73cd3c:c.instructions+=1;goto B73cd3c;
case 0x73cd3f:goto L73cd3f;
case 0x73cd47:goto L73cd47;
case 0x73cd4a:c.instructions+=2;goto B73cd4a;
case 0x73cd4f:c.instructions+=1;goto B73cd4f;
case 0x73cd51:goto L73cd51;
case 0x73cd54:c.instructions+=4;goto B73cd54;
case 0x73cd57:c.instructions+=3;goto B73cd57;
case 0x73cd5a:c.instructions+=2;goto B73cd5a;
case 0x73cd5c:c.instructions+=1;goto B73cd5c;
case 0x73cd5e:goto L73cd5e;
case 0x73cd62:c.instructions+=5;goto B73cd62;
case 0x73cd66:c.instructions+=4;goto B73cd66;
case 0x73cd67:c.instructions+=3;goto B73cd67;
case 0x73cd68:c.instructions+=2;goto B73cd68;
case 0x73cd69:c.instructions+=1;goto B73cd69;
case 0x73cd6e:goto L73cd6e;
case 0x73cd71:c.instructions+=13;goto B73cd71;
case 0x73cd74:c.instructions+=12;goto B73cd74;
case 0x73cd76:c.instructions+=11;goto B73cd76;
case 0x73cd7b:c.instructions+=10;goto B73cd7b;
case 0x73cd7d:c.instructions+=9;goto B73cd7d;
case 0x73cd7f:c.instructions+=8;goto B73cd7f;
case 0x73cd81:c.instructions+=7;goto B73cd81;
case 0x73cd84:c.instructions+=6;goto B73cd84;
case 0x73cd87:c.instructions+=5;goto B73cd87;
case 0x73cd8a:c.instructions+=4;goto B73cd8a;
case 0x73cd8d:c.instructions+=3;goto B73cd8d;
case 0x73cd93:c.instructions+=2;goto B73cd93;
case 0x73cd97:c.instructions+=1;goto B73cd97;
case 0x73cd9f:goto L73cd9f;
case 0x73cda2:c.instructions+=5;goto B73cda2;
case 0x73cda4:c.instructions+=4;goto B73cda4;
case 0x73cda7:c.instructions+=3;goto B73cda7;
case 0x73cdaa:c.instructions+=2;goto B73cdaa;
case 0x73cdac:c.instructions+=1;goto B73cdac;
case 0x73cdae:goto L73cdae;
case 0x73cdb3:c.instructions+=1;goto B73cdb3;
case 0x73cdb6:goto L73cdb6;
case 0x73cdb9:goto L73cdb9;
case 0x73cdbd:c.instructions+=12;goto B73cdbd;
case 0x73cdc1:c.instructions+=11;goto B73cdc1;
case 0x73cdc4:c.instructions+=10;goto B73cdc4;
case 0x73cdc8:c.instructions+=9;goto B73cdc8;
case 0x73cdcb:c.instructions+=8;goto B73cdcb;
case 0x73cdce:c.instructions+=7;goto B73cdce;
case 0x73cdd2:c.instructions+=6;goto B73cdd2;
case 0x73cdd6:c.instructions+=5;goto B73cdd6;
case 0x73cdda:c.instructions+=4;goto B73cdda;
case 0x73cdde:c.instructions+=3;goto B73cdde;
case 0x73cde0:c.instructions+=2;goto B73cde0;
case 0x73cde6:c.instructions+=1;goto B73cde6;
case 0x73cdeb:goto L73cdeb;
case 0x73cded:c.instructions+=2;goto B73cded;
case 0x73cdf1:c.instructions+=1;goto B73cdf1;
case 0x73cdf3:goto L73cdf3;
case 0x73cdf6:c.instructions+=2;goto B73cdf6;
case 0x73cdf7:c.instructions+=1;goto B73cdf7;
case 0x73cdfc:goto L73cdfc;
case 0x73ce02:c.instructions+=2;goto B73ce02;
case 0x73ce05:c.instructions+=1;goto B73ce05;
case 0x73ce09:goto L73ce09;
case 0x73ce0d:c.instructions+=16;goto B73ce0d;
case 0x73ce10:c.instructions+=15;goto B73ce10;
case 0x73ce13:c.instructions+=14;goto B73ce13;
case 0x73ce16:c.instructions+=13;goto B73ce16;
case 0x73ce19:c.instructions+=12;goto B73ce19;
case 0x73ce1c:c.instructions+=11;goto B73ce1c;
case 0x73ce1e:c.instructions+=10;goto B73ce1e;
case 0x73ce22:c.instructions+=9;goto B73ce22;
case 0x73ce25:c.instructions+=8;goto B73ce25;
case 0x73ce28:c.instructions+=7;goto B73ce28;
case 0x73ce2c:c.instructions+=6;goto B73ce2c;
case 0x73ce2f:c.instructions+=5;goto B73ce2f;
case 0x73ce33:c.instructions+=4;goto B73ce33;
case 0x73ce36:c.instructions+=3;goto B73ce36;
case 0x73ce39:c.instructions+=2;goto B73ce39;
case 0x73ce41:c.instructions+=1;goto B73ce41;
case 0x73ce43:goto L73ce43;
case 0x73ce47:c.instructions+=2;goto B73ce47;
case 0x73ce49:c.instructions+=1;goto B73ce49;
case 0x73ce4b:goto L73ce4b;
case 0x73ce4f:c.instructions+=4;goto B73ce4f;
case 0x73ce52:c.instructions+=3;goto B73ce52;
case 0x73ce55:c.instructions+=2;goto B73ce55;
case 0x73ce58:c.instructions+=1;goto B73ce58;
case 0x73ce5a:goto L73ce5a;
case 0x73ce5e:c.instructions+=4;goto B73ce5e;
case 0x73ce61:c.instructions+=3;goto B73ce61;
case 0x73ce65:c.instructions+=2;goto B73ce65;
case 0x73ce69:c.instructions+=1;goto B73ce69;
case 0x73ce6b:goto L73ce6b;
case 0x73ce6f:c.instructions+=3;goto B73ce6f;
case 0x73ce73:c.instructions+=2;goto B73ce73;
case 0x73ce77:c.instructions+=1;goto B73ce77;
case 0x73ce79:goto L73ce79;
case 0x73ce7d:goto L73ce7d;
case 0x73ce85:c.instructions+=1;goto B73ce85;
case 0x73ce89:goto L73ce89;
case 0x73ce8c:c.instructions+=2;goto B73ce8c;
case 0x73ce8e:c.instructions+=1;goto B73ce8e;
case 0x73ce94:goto L73ce94;
case 0x73ce98:c.instructions+=2;goto B73ce98;
case 0x73ce9a:c.instructions+=1;goto B73ce9a;
case 0x73cea0:goto L73cea0;
case 0x73cea2:c.instructions+=1;goto B73cea2;
case 0x73cea8:goto L73cea8;
case 0x73ceab:c.instructions+=5;goto B73ceab;
case 0x73ceae:c.instructions+=4;goto B73ceae;
case 0x73ceb1:c.instructions+=3;goto B73ceb1;
case 0x73ceb4:c.instructions+=2;goto B73ceb4;
case 0x73ceb7:c.instructions+=1;goto B73ceb7;
case 0x73ceb9:goto L73ceb9;
case 0x73cebc:c.instructions+=1;goto B73cebc;
case 0x73cebe:goto L73cebe;
case 0x73cec1:c.instructions+=1;goto B73cec1;
case 0x73cec7:goto L73cec7;
case 0x73cecb:c.instructions+=5;goto B73cecb;
case 0x73cece:c.instructions+=4;goto B73cece;
case 0x73ced0:c.instructions+=3;goto B73ced0;
case 0x73ced3:c.instructions+=2;goto B73ced3;
case 0x73ced6:c.instructions+=1;goto B73ced6;
case 0x73ced8:goto L73ced8;
case 0x73cedb:c.instructions+=4;goto B73cedb;
case 0x73cedd:c.instructions+=3;goto B73cedd;
case 0x73cedf:c.instructions+=2;goto B73cedf;
case 0x73cee3:c.instructions+=1;goto B73cee3;
case 0x73cee6:goto L73cee6;
case 0x73cee9:c.instructions+=2;goto B73cee9;
case 0x73ceec:c.instructions+=1;goto B73ceec;
case 0x73ceee:goto L73ceee;
case 0x73cef1:c.instructions+=5;goto B73cef1;
case 0x73cef4:c.instructions+=4;goto B73cef4;
case 0x73cef6:c.instructions+=3;goto B73cef6;
case 0x73cef8:c.instructions+=2;goto B73cef8;
case 0x73cefc:c.instructions+=1;goto B73cefc;
case 0x73ceff:goto L73ceff;
case 0x73cf03:c.instructions+=3;goto B73cf03;
case 0x73cf05:c.instructions+=2;goto B73cf05;
case 0x73cf07:c.instructions+=1;goto B73cf07;
case 0x73cf09:goto L73cf09;
case 0x73cf0f:c.instructions+=2;goto B73cf0f;
case 0x73cf11:c.instructions+=1;goto B73cf11;
case 0x73cf13:goto L73cf13;
case 0x73cf19:c.instructions+=3;goto B73cf19;
case 0x73cf1c:c.instructions+=2;goto B73cf1c;
case 0x73cf1e:c.instructions+=1;goto B73cf1e;
case 0x73cf24:goto L73cf24;
case 0x73cf28:c.instructions+=4;goto B73cf28;
case 0x73cf29:c.instructions+=3;goto B73cf29;
case 0x73cf2a:c.instructions+=2;goto B73cf2a;
case 0x73cf30:c.instructions+=1;goto B73cf30;
case 0x73cf35:goto L73cf35;
case 0x73cf39:c.instructions+=8;goto B73cf39;
case 0x73cf3b:c.instructions+=7;goto B73cf3b;
case 0x73cf3d:c.instructions+=6;goto B73cf3d;
case 0x73cf3e:c.instructions+=5;goto B73cf3e;
case 0x73cf40:c.instructions+=4;goto B73cf40;
case 0x73cf42:c.instructions+=3;goto B73cf42;
case 0x73cf45:c.instructions+=2;goto B73cf45;
case 0x73cf47:c.instructions+=1;goto B73cf47;
case 0x73cf49:goto L73cf49;
case 0x73cf4b:goto L73cf4b;
case 0x73cf51:c.instructions+=2;goto B73cf51;
case 0x73cf53:c.instructions+=1;goto B73cf53;
case 0x73cf55:goto L73cf55;
case 0x73cf59:c.instructions+=3;goto B73cf59;
case 0x73cf5a:c.instructions+=2;goto B73cf5a;
case 0x73cf5b:c.instructions+=1;goto B73cf5b;
case 0x73cf60:goto L73cf60;
case 0x73cf62:c.instructions+=7;goto B73cf62;
case 0x73cf65:c.instructions+=6;goto B73cf65;
case 0x73cf66:c.instructions+=5;goto B73cf66;
case 0x73cf68:c.instructions+=4;goto B73cf68;
case 0x73cf6a:c.instructions+=3;goto B73cf6a;
case 0x73cf6d:c.instructions+=2;goto B73cf6d;
case 0x73cf6f:c.instructions+=1;goto B73cf6f;
case 0x73cf71:goto L73cf71;
case 0x73cf75:goto L73cf75;
case 0x73cf7b:c.instructions+=2;goto B73cf7b;
case 0x73cf7d:c.instructions+=1;goto B73cf7d;
case 0x73cf7f:goto L73cf7f;
case 0x73cf82:c.instructions+=1;goto B73cf82;
case 0x73cf88:goto L73cf88;
case 0x73cf8b:c.instructions+=1;goto B73cf8b;
case 0x73cf8d:goto L73cf8d;
case 0x73cf90:c.instructions+=1;goto B73cf90;
case 0x73cf92:goto L73cf92;
case 0x73cf96:c.instructions+=2;goto B73cf96;
case 0x73cf98:c.instructions+=1;goto B73cf98;
case 0x73cf9a:goto L73cf9a;
case 0x73cf9e:c.instructions+=4;goto B73cf9e;
case 0x73cfa1:c.instructions+=3;goto B73cfa1;
case 0x73cfa5:c.instructions+=2;goto B73cfa5;
case 0x73cfa7:c.instructions+=1;goto B73cfa7;
case 0x73cfa9:goto L73cfa9;
case 0x73cfad:goto L73cfad;
case 0x73cfb3:c.instructions+=1;goto B73cfb3;
case 0x73cfb5:goto L73cfb5;
case 0x73cfb8:goto L73cfb8;
case 0x73cfbe:c.instructions+=7;goto B73cfbe;
case 0x73cfc4:c.instructions+=6;goto B73cfc4;
case 0x73cfc7:c.instructions+=5;goto B73cfc7;
case 0x73cfc9:c.instructions+=4;goto B73cfc9;
case 0x73cfcb:c.instructions+=3;goto B73cfcb;
case 0x73cfcd:c.instructions+=2;goto B73cfcd;
case 0x73cfcf:c.instructions+=1;goto B73cfcf;
case 0x73cfd5:goto L73cfd5;
case 0x73cfd9:c.instructions+=13;goto B73cfd9;
case 0x73cfdd:c.instructions+=12;goto B73cfdd;
case 0x73cfdf:c.instructions+=11;goto B73cfdf;
case 0x73cfe0:c.instructions+=10;goto B73cfe0;
case 0x73cfe1:c.instructions+=9;goto B73cfe1;
case 0x73cfe5:c.instructions+=8;goto B73cfe5;
case 0x73cfe6:c.instructions+=7;goto B73cfe6;
case 0x73cfe7:c.instructions+=6;goto B73cfe7;
case 0x73cfea:c.instructions+=5;goto B73cfea;
case 0x73cfed:c.instructions+=4;goto B73cfed;
case 0x73cfee:c.instructions+=3;goto B73cfee;
case 0x73cfef:c.instructions+=2;goto B73cfef;
case 0x73cff0:c.instructions+=1;goto B73cff0;
case 0x73cff5:goto L73cff5;
case 0x73cff8:c.instructions+=2;goto B73cff8;
case 0x73cffd:c.instructions+=1;goto B73cffd;
default:missing_instruction(c.pc);}
B73c000:L73c000:{c.instructions+=6;NFSU2_TR(0x73c000);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73c002:{NFSU2_TR(0x73c002);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B73c005:{NFSU2_TR(0x73c005);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73c008:{NFSU2_TR(0x73c008);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c009:{NFSU2_TR(0x73c009);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c00a:{NFSU2_TR(0x73c00a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c00full));
TAIL_STATIC(0x739de0u,739);
}
B73c00f:L73c00f:{c.instructions+=2;NFSU2_TR(0x73c00f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73c012:{NFSU2_TR(0x73c012);
{goto L73c531;}
}
B73c017:L73c017:{c.instructions+=7;NFSU2_TR(0x73c017);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c01b:{NFSU2_TR(0x73c01b);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73c021:{NFSU2_TR(0x73c021);
__builtin_memmove((R+4),(R+0),4);
}
B73c023:{NFSU2_TR(0x73c023);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73c026:{NFSU2_TR(0x73c026);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B73c029:{NFSU2_TR(0x73c029);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73c02b:{NFSU2_TR(0x73c02b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73c531;}}
}
B73c031:L73c031:{c.instructions+=2;NFSU2_TR(0x73c031);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73c034:{NFSU2_TR(0x73c034);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c531;}}
}
B73c03a:L73c03a:{c.instructions+=2;NFSU2_TR(0x73c03a);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffdfull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B73c03e:{NFSU2_TR(0x73c03e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c048;}}
}
B73c040:L73c040:{c.instructions+=3;NFSU2_TR(0x73c040);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73c042:{NFSU2_TR(0x73c042);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B73c046:{NFSU2_TR(0x73c046);
{goto L73c051;}
}
B73c048:L73c048:{c.instructions+=2;NFSU2_TR(0x73c048);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffe0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B73c04c:{NFSU2_TR(0x73c04c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c05f;}}
}
B73c04e:L73c04e:{c.instructions+=1;NFSU2_TR(0x73c04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73c051:L73c051:{c.instructions+=4;NFSU2_TR(0x73c051);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B73c053:{NFSU2_TR(0x73c053);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B73c059:{NFSU2_TR(0x73c059);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B73c05b:{NFSU2_TR(0x73c05b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c05f:L73c05f:{c.instructions+=5;NFSU2_TR(0x73c05f);
__builtin_memmove((R+4),(R+0),4);
}
B73c061:{NFSU2_TR(0x73c061);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73c064:{NFSU2_TR(0x73c064);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B73c067:{NFSU2_TR(0x73c067);
u8 U[14];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B73c06f:{NFSU2_TR(0x73c06f);
{goto L73c531;}
}
B73c074:L73c074:{c.instructions+=6;NFSU2_TR(0x73c074);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73c077:{NFSU2_TR(0x73c077);
__builtin_memmove((R+0),(R+24),4);
}
B73c079:{NFSU2_TR(0x73c079);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73c07c:{NFSU2_TR(0x73c07c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B73c07f:{NFSU2_TR(0x73c07f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73c082:{NFSU2_TR(0x73c082);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L73c4bb;}}
}
B73c088:L73c088:{c.instructions+=1;NFSU2_TR(0x73c088);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x73c5acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73c08f:L73c08f:{c.instructions+=2;NFSU2_TR(0x73c08f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c090:{NFSU2_TR(0x73c090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c095ull));
TAIL_STATIC(0x73bad0u,73b);
}
B73c095:L73c095:{c.instructions+=5;NFSU2_TR(0x73c095);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c099:{NFSU2_TR(0x73c099);
__builtin_memmove((R+4),(R+8),4);
}
B73c09b:{NFSU2_TR(0x73c09b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73c09e:{NFSU2_TR(0x73c09e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73c0a1:{NFSU2_TR(0x73c0a1);
if(r1(R+518)){{goto L73c0c5;}}
}
B73c0a3:L73c0a3:{c.instructions+=2;NFSU2_TR(0x73c0a3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73c0a4:{NFSU2_TR(0x73c0a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c0ce;}}
}
B73c0a6:L73c0a6:{c.instructions+=6;NFSU2_TR(0x73c0a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B73c0aa:{NFSU2_TR(0x73c0aa);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfff2ffffull))));
}
B73c0b0:{NFSU2_TR(0x73c0b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73c0b4:{NFSU2_TR(0x73c0b4);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x4420000ull))));
}
B73c0ba:{NFSU2_TR(0x73c0ba);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B73c0c0:{NFSU2_TR(0x73c0c0);
{goto L73c4b8;}
}
B73c0c5:L73c0c5:{c.instructions+=2;NFSU2_TR(0x73c0c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c0c8:{NFSU2_TR(0x73c0c8);
if(r1(R+518)){{goto L73c4b2;}}
}
B73c0ce:L73c0ce:{c.instructions+=2;NFSU2_TR(0x73c0ce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c0d0:{NFSU2_TR(0x73c0d0);
{goto L73c488;}
}
B73c0d5:L73c0d5:{c.instructions+=11;NFSU2_TR(0x73c0d5);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73c0da:{NFSU2_TR(0x73c0da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73c0dd:{NFSU2_TR(0x73c0dd);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B73c0e2:{NFSU2_TR(0x73c0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c0e5:{NFSU2_TR(0x73c0e5);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B73c0e9:{NFSU2_TR(0x73c0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B73c0ec:{NFSU2_TR(0x73c0ec);
__builtin_memmove((R+0),(R+24),4);
}
B73c0ee:{NFSU2_TR(0x73c0ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73c0f1:{NFSU2_TR(0x73c0f1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B73c0f4:{NFSU2_TR(0x73c0f4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73c0f7:{NFSU2_TR(0x73c0f7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L73c4bb;}}
}
B73c0fd:L73c0fd:{c.instructions+=1;NFSU2_TR(0x73c0fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x73c5c4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73c104:L73c104:{c.instructions+=4;NFSU2_TR(0x73c104);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c108:{NFSU2_TR(0x73c108);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73c10b:{NFSU2_TR(0x73c10b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c10e:{NFSU2_TR(0x73c10e);
if(r1(R+518)){{goto L73c162;}}
}
B73c110:L73c110:{c.instructions+=2;NFSU2_TR(0x73c110);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c111:{NFSU2_TR(0x73c111);
if(r1(R+518)){{goto L73c134;}}
}
B73c113:L73c113:{c.instructions+=2;NFSU2_TR(0x73c113);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c114:{NFSU2_TR(0x73c114);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c11a:L73c11a:{c.instructions+=3;NFSU2_TR(0x73c11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c11d:{NFSU2_TR(0x73c11d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c11f:{NFSU2_TR(0x73c11f);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c125:L73c125:{c.instructions+=5;NFSU2_TR(0x73c125);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73c127:{NFSU2_TR(0x73c127);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73c12a:{NFSU2_TR(0x73c12a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B73c12d:{NFSU2_TR(0x73c12d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c12f:{NFSU2_TR(0x73c12f);
{goto L73c488;}
}
B73c134:L73c134:{c.instructions+=2;NFSU2_TR(0x73c134);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c136:{NFSU2_TR(0x73c136);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c13c:L73c13c:{c.instructions+=2;NFSU2_TR(0x73c13c);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B73c140:{NFSU2_TR(0x73c140);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c146:L73c146:{c.instructions+=3;NFSU2_TR(0x73c146);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c149:{NFSU2_TR(0x73c149);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c14b:{NFSU2_TR(0x73c14b);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c151:L73c151:{c.instructions+=4;NFSU2_TR(0x73c151);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c154:{NFSU2_TR(0x73c154);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(U+4))));
}
B73c157:{NFSU2_TR(0x73c157);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c15d:{NFSU2_TR(0x73c15d);
{goto L73c488;}
}
B73c162:L73c162:{c.instructions+=3;NFSU2_TR(0x73c162);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B73c166:{NFSU2_TR(0x73c166);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c168:{NFSU2_TR(0x73c168);
{goto L73c488;}
}
B73c16d:L73c16d:{c.instructions+=4;NFSU2_TR(0x73c16d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c171:{NFSU2_TR(0x73c171);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73c174:{NFSU2_TR(0x73c174);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c177:{NFSU2_TR(0x73c177);
if(r1(R+518)){{goto L73c1d7;}}
}
B73c179:L73c179:{c.instructions+=2;NFSU2_TR(0x73c179);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c17a:{NFSU2_TR(0x73c17a);
if(r1(R+518)){{goto L73c1a3;}}
}
B73c17c:L73c17c:{c.instructions+=2;NFSU2_TR(0x73c17c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c17d:{NFSU2_TR(0x73c17d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c183:L73c183:{c.instructions+=3;NFSU2_TR(0x73c183);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c186:{NFSU2_TR(0x73c186);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c188:{NFSU2_TR(0x73c188);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c18e:L73c18e:{c.instructions+=5;NFSU2_TR(0x73c18e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73c190:{NFSU2_TR(0x73c190);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73c193:{NFSU2_TR(0x73c193);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B73c196:{NFSU2_TR(0x73c196);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c198:{NFSU2_TR(0x73c198);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c19e:L73c19e:{c.instructions+=1;NFSU2_TR(0x73c19e);
{goto L73c4b2;}
}
B73c1a3:L73c1a3:{c.instructions+=3;NFSU2_TR(0x73c1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c1a6:{NFSU2_TR(0x73c1a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c1a8:{NFSU2_TR(0x73c1a8);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c1ae:L73c1ae:{c.instructions+=2;NFSU2_TR(0x73c1ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c1b0:{NFSU2_TR(0x73c1b0);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c1b6:L73c1b6:{c.instructions+=2;NFSU2_TR(0x73c1b6);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B73c1ba:{NFSU2_TR(0x73c1ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c1c0:L73c1c0:{c.instructions+=4;NFSU2_TR(0x73c1c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c1c3:{NFSU2_TR(0x73c1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(U+4))));
}
B73c1c6:{NFSU2_TR(0x73c1c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c1cc:{NFSU2_TR(0x73c1cc);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c1d2:L73c1d2:{c.instructions+=1;NFSU2_TR(0x73c1d2);
{goto L73c4b2;}
}
B73c1d7:L73c1d7:{c.instructions+=3;NFSU2_TR(0x73c1d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B73c1db:{NFSU2_TR(0x73c1db);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c1dd:{NFSU2_TR(0x73c1dd);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c1e3:L73c1e3:{c.instructions+=1;NFSU2_TR(0x73c1e3);
{goto L73c4b2;}
}
B73c1e8:L73c1e8:{c.instructions+=4;NFSU2_TR(0x73c1e8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c1ec:{NFSU2_TR(0x73c1ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73c1ef:{NFSU2_TR(0x73c1ef);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c1f2:{NFSU2_TR(0x73c1f2);
if(r1(R+518)){{goto L73c259;}}
}
B73c1f4:L73c1f4:{c.instructions+=2;NFSU2_TR(0x73c1f4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c1f5:{NFSU2_TR(0x73c1f5);
if(r1(R+518)){{goto L73c21e;}}
}
B73c1f7:L73c1f7:{c.instructions+=2;NFSU2_TR(0x73c1f7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c1f8:{NFSU2_TR(0x73c1f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c1fe:L73c1fe:{c.instructions+=3;NFSU2_TR(0x73c1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c201:{NFSU2_TR(0x73c201);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c203:{NFSU2_TR(0x73c203);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c209:L73c209:{c.instructions+=5;NFSU2_TR(0x73c209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73c20b:{NFSU2_TR(0x73c20b);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73c20e:{NFSU2_TR(0x73c20e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B73c211:{NFSU2_TR(0x73c211);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c213:{NFSU2_TR(0x73c213);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c219:L73c219:{c.instructions+=1;NFSU2_TR(0x73c219);
{goto L73c4b2;}
}
B73c21e:L73c21e:{c.instructions+=3;NFSU2_TR(0x73c21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c221:{NFSU2_TR(0x73c221);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c223:{NFSU2_TR(0x73c223);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c229:L73c229:{c.instructions+=2;NFSU2_TR(0x73c229);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c22b:{NFSU2_TR(0x73c22b);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c231:L73c231:{c.instructions+=2;NFSU2_TR(0x73c231);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B73c235:{NFSU2_TR(0x73c235);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c23b:L73c23b:{c.instructions+=6;NFSU2_TR(0x73c23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c23e:{NFSU2_TR(0x73c23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c241:{NFSU2_TR(0x73c241);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B73c247:{NFSU2_TR(0x73c247);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B73c24c:{NFSU2_TR(0x73c24c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B73c24e:{NFSU2_TR(0x73c24e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c254:L73c254:{c.instructions+=1;NFSU2_TR(0x73c254);
{goto L73c4b2;}
}
B73c259:L73c259:{c.instructions+=3;NFSU2_TR(0x73c259);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B73c25d:{NFSU2_TR(0x73c25d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c25f:{NFSU2_TR(0x73c25f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73c4bb;}}
}
B73c265:L73c265:{c.instructions+=1;NFSU2_TR(0x73c265);
{goto L73c4b2;}
}
B73c26a:L73c26a:{c.instructions+=4;NFSU2_TR(0x73c26a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c26e:{NFSU2_TR(0x73c26e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73c271:{NFSU2_TR(0x73c271);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c274:{NFSU2_TR(0x73c274);
if(r1(R+518)){{goto L73c2db;}}
}
B73c276:L73c276:{c.instructions+=2;NFSU2_TR(0x73c276);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c277:{NFSU2_TR(0x73c277);
if(r1(R+518)){{goto L73c2a0;}}
}
B73c279:L73c279:{c.instructions+=2;NFSU2_TR(0x73c279);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c27a:{NFSU2_TR(0x73c27a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c280:L73c280:{c.instructions+=3;NFSU2_TR(0x73c280);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c283:{NFSU2_TR(0x73c283);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c285:{NFSU2_TR(0x73c285);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c28b:L73c28b:{c.instructions+=5;NFSU2_TR(0x73c28b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73c28d:{NFSU2_TR(0x73c28d);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73c290:{NFSU2_TR(0x73c290);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B73c293:{NFSU2_TR(0x73c293);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B73c295:{NFSU2_TR(0x73c295);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c29b:L73c29b:{c.instructions+=1;NFSU2_TR(0x73c29b);
{goto L73c4b2;}
}
B73c2a0:L73c2a0:{c.instructions+=3;NFSU2_TR(0x73c2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c2a3:{NFSU2_TR(0x73c2a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c2a5:{NFSU2_TR(0x73c2a5);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c2ab:L73c2ab:{c.instructions+=2;NFSU2_TR(0x73c2ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c2ad:{NFSU2_TR(0x73c2ad);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c2b3:L73c2b3:{c.instructions+=2;NFSU2_TR(0x73c2b3);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B73c2b7:{NFSU2_TR(0x73c2b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c2bd:L73c2bd:{c.instructions+=6;NFSU2_TR(0x73c2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c2c0:{NFSU2_TR(0x73c2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c2c3:{NFSU2_TR(0x73c2c3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B73c2c9:{NFSU2_TR(0x73c2c9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B73c2ce:{NFSU2_TR(0x73c2ce);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c2d0:{NFSU2_TR(0x73c2d0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c2d6:L73c2d6:{c.instructions+=1;NFSU2_TR(0x73c2d6);
{goto L73c4b2;}
}
B73c2db:L73c2db:{c.instructions+=3;NFSU2_TR(0x73c2db);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B73c2df:{NFSU2_TR(0x73c2df);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73c2e1:{NFSU2_TR(0x73c2e1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c2e7:L73c2e7:{c.instructions+=1;NFSU2_TR(0x73c2e7);
{goto L73c4b2;}
}
B73c2ec:L73c2ec:{c.instructions+=4;NFSU2_TR(0x73c2ec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c2f0:{NFSU2_TR(0x73c2f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73c2f3:{NFSU2_TR(0x73c2f3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c2f6:{NFSU2_TR(0x73c2f6);
if(r1(R+518)){{goto L73c35d;}}
}
B73c2f8:L73c2f8:{c.instructions+=2;NFSU2_TR(0x73c2f8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c2f9:{NFSU2_TR(0x73c2f9);
if(r1(R+518)){{goto L73c322;}}
}
B73c2fb:L73c2fb:{c.instructions+=2;NFSU2_TR(0x73c2fb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c2fc:{NFSU2_TR(0x73c2fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c302:L73c302:{c.instructions+=3;NFSU2_TR(0x73c302);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c305:{NFSU2_TR(0x73c305);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c307:{NFSU2_TR(0x73c307);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c30d:L73c30d:{c.instructions+=5;NFSU2_TR(0x73c30d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73c30f:{NFSU2_TR(0x73c30f);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73c312:{NFSU2_TR(0x73c312);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B73c315:{NFSU2_TR(0x73c315);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B73c317:{NFSU2_TR(0x73c317);
if(r1(R+512)){{goto L73c4bb;}}
}
B73c31d:L73c31d:{c.instructions+=1;NFSU2_TR(0x73c31d);
{goto L73c4b2;}
}
B73c322:L73c322:{c.instructions+=2;NFSU2_TR(0x73c322);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c324:{NFSU2_TR(0x73c324);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c32a:L73c32a:{c.instructions+=2;NFSU2_TR(0x73c32a);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B73c32e:{NFSU2_TR(0x73c32e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c334:L73c334:{c.instructions+=3;NFSU2_TR(0x73c334);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c337:{NFSU2_TR(0x73c337);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c339:{NFSU2_TR(0x73c339);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c33f:L73c33f:{c.instructions+=6;NFSU2_TR(0x73c33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c342:{NFSU2_TR(0x73c342);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c345:{NFSU2_TR(0x73c345);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B73c34b:{NFSU2_TR(0x73c34b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B73c350:{NFSU2_TR(0x73c350);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c352:{NFSU2_TR(0x73c352);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L73c4bb;}}
}
B73c358:L73c358:{c.instructions+=1;NFSU2_TR(0x73c358);
{goto L73c4b2;}
}
B73c35d:L73c35d:{c.instructions+=3;NFSU2_TR(0x73c35d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B73c361:{NFSU2_TR(0x73c361);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73c363:{NFSU2_TR(0x73c363);
{goto L73c4b0;}
}
B73c368:L73c368:{c.instructions+=4;NFSU2_TR(0x73c368);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c36c:{NFSU2_TR(0x73c36c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73c36f:{NFSU2_TR(0x73c36f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c372:{NFSU2_TR(0x73c372);
if(r1(R+518)){{goto L73c3d9;}}
}
B73c374:L73c374:{c.instructions+=2;NFSU2_TR(0x73c374);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c375:{NFSU2_TR(0x73c375);
if(r1(R+518)){{goto L73c39e;}}
}
B73c377:L73c377:{c.instructions+=2;NFSU2_TR(0x73c377);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73c378:{NFSU2_TR(0x73c378);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c37e:L73c37e:{c.instructions+=3;NFSU2_TR(0x73c37e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c381:{NFSU2_TR(0x73c381);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c383:{NFSU2_TR(0x73c383);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c389:L73c389:{c.instructions+=5;NFSU2_TR(0x73c389);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73c38b:{NFSU2_TR(0x73c38b);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73c38e:{NFSU2_TR(0x73c38e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B73c391:{NFSU2_TR(0x73c391);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c393:{NFSU2_TR(0x73c393);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L73c4bb;}}
}
B73c399:L73c399:{c.instructions+=1;NFSU2_TR(0x73c399);
{goto L73c4b2;}
}
B73c39e:L73c39e:{c.instructions+=2;NFSU2_TR(0x73c39e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c3a0:{NFSU2_TR(0x73c3a0);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c3a6:L73c3a6:{c.instructions+=2;NFSU2_TR(0x73c3a6);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B73c3aa:{NFSU2_TR(0x73c3aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c3b0:L73c3b0:{c.instructions+=3;NFSU2_TR(0x73c3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c3b3:{NFSU2_TR(0x73c3b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c3b5:{NFSU2_TR(0x73c3b5);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c3bb:L73c3bb:{c.instructions+=6;NFSU2_TR(0x73c3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c3be:{NFSU2_TR(0x73c3be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c3c1:{NFSU2_TR(0x73c3c1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B73c3c7:{NFSU2_TR(0x73c3c7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B73c3cc:{NFSU2_TR(0x73c3cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B73c3ce:{NFSU2_TR(0x73c3ce);
if(r1(R+512)){{goto L73c4bb;}}
}
B73c3d4:L73c3d4:{c.instructions+=1;NFSU2_TR(0x73c3d4);
{goto L73c4b2;}
}
B73c3d9:L73c3d9:{c.instructions+=3;NFSU2_TR(0x73c3d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B73c3dd:{NFSU2_TR(0x73c3dd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c3df:{NFSU2_TR(0x73c3df);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73c4bb;}}
}
B73c3e5:L73c3e5:{c.instructions+=1;NFSU2_TR(0x73c3e5);
{goto L73c4b2;}
}
B73c3ea:L73c3ea:{c.instructions+=6;NFSU2_TR(0x73c3ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B73c3ee:{NFSU2_TR(0x73c3ee);
__builtin_memmove((R+0),(R+24),4);
}
B73c3f0:{NFSU2_TR(0x73c3f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73c3f3:{NFSU2_TR(0x73c3f3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B73c3f6:{NFSU2_TR(0x73c3f6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73c3f9:{NFSU2_TR(0x73c3f9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L73c4bb;}}
}
B73c3ff:L73c3ff:{c.instructions+=1;NFSU2_TR(0x73c3ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x73c5e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73c406:L73c406:{c.instructions+=2;NFSU2_TR(0x73c406);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73c40a:{NFSU2_TR(0x73c40a);
{goto L73c488;}
}
B73c40c:L73c40c:{c.instructions+=2;NFSU2_TR(0x73c40c);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73c410:{NFSU2_TR(0x73c410);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c416:L73c416:{c.instructions+=1;NFSU2_TR(0x73c416);
{goto L73c4b2;}
}
B73c41b:L73c41b:{c.instructions+=2;NFSU2_TR(0x73c41b);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B73c41f:{NFSU2_TR(0x73c41f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c425:L73c425:{c.instructions+=1;NFSU2_TR(0x73c425);
{goto L73c4b2;}
}
B73c42a:L73c42a:{c.instructions+=2;NFSU2_TR(0x73c42a);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73c42e:{NFSU2_TR(0x73c42e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73c4bb;}}
}
B73c434:L73c434:{c.instructions+=1;NFSU2_TR(0x73c434);
{goto L73c4b2;}
}
B73c436:L73c436:{c.instructions+=2;NFSU2_TR(0x73c436);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73c43a:{NFSU2_TR(0x73c43a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73c4bb;}}
}
B73c43c:L73c43c:{c.instructions+=1;NFSU2_TR(0x73c43c);
{goto L73c4b2;}
}
B73c43e:L73c43e:{c.instructions+=2;NFSU2_TR(0x73c43e);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B73c442:{NFSU2_TR(0x73c442);
{goto L73c4b0;}
}
B73c444:L73c444:{c.instructions+=3;NFSU2_TR(0x73c444);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c447:{NFSU2_TR(0x73c447);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c448:{NFSU2_TR(0x73c448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c44dull));
TAIL_STATIC(0x45a4a0u,45a);
}
B73c44d:L73c44d:{c.instructions+=6;NFSU2_TR(0x73c44d);
__builtin_memmove((R+4),(R+24),4);
}
B73c44f:{NFSU2_TR(0x73c44f);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73c452:{NFSU2_TR(0x73c452);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B73c455:{NFSU2_TR(0x73c455);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73c458:{NFSU2_TR(0x73c458);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73c45b:{NFSU2_TR(0x73c45b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L73c4bb;}}
}
B73c45d:L73c45d:{c.instructions+=1;NFSU2_TR(0x73c45d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x73c5fcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73c464:L73c464:{c.instructions+=3;NFSU2_TR(0x73c464);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c467:{NFSU2_TR(0x73c467);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c468:{NFSU2_TR(0x73c468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c46dull));
TAIL_STATIC(0x45a4c0u,45a);
}
B73c46d:L73c46d:{c.instructions+=6;NFSU2_TR(0x73c46d);
__builtin_memmove((R+4),(R+24),4);
}
B73c46f:{NFSU2_TR(0x73c46f);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73c472:{NFSU2_TR(0x73c472);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B73c475:{NFSU2_TR(0x73c475);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73c478:{NFSU2_TR(0x73c478);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73c47b:{NFSU2_TR(0x73c47b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L73c4bb;}}
}
B73c47d:L73c47d:{c.instructions+=1;NFSU2_TR(0x73c47d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x73c618ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73c484:L73c484:{c.instructions+=1;NFSU2_TR(0x73c484);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73c488:L73c488:{c.instructions+=1;NFSU2_TR(0x73c488);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c48a:L73c48a:{c.instructions+=1;NFSU2_TR(0x73c48a);
{goto L73c4b2;}
}
B73c48c:L73c48c:{c.instructions+=2;NFSU2_TR(0x73c48c);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73c490:{NFSU2_TR(0x73c490);
if(r1(R+518)){{goto L73c4bb;}}
}
B73c492:L73c492:{c.instructions+=1;NFSU2_TR(0x73c492);
{goto L73c4b2;}
}
B73c494:L73c494:{c.instructions+=2;NFSU2_TR(0x73c494);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B73c498:{NFSU2_TR(0x73c498);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c49a:L73c49a:{c.instructions+=1;NFSU2_TR(0x73c49a);
{goto L73c4b2;}
}
B73c49c:L73c49c:{c.instructions+=2;NFSU2_TR(0x73c49c);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73c4a0:{NFSU2_TR(0x73c4a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73c4bb;}}
}
B73c4a2:L73c4a2:{c.instructions+=1;NFSU2_TR(0x73c4a2);
{goto L73c4b2;}
}
B73c4a4:L73c4a4:{c.instructions+=2;NFSU2_TR(0x73c4a4);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73c4a8:{NFSU2_TR(0x73c4a8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73c4bb;}}
}
B73c4aa:L73c4aa:{c.instructions+=1;NFSU2_TR(0x73c4aa);
{goto L73c4b2;}
}
B73c4ac:L73c4ac:{c.instructions+=1;NFSU2_TR(0x73c4ac);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B73c4b0:L73c4b0:{c.instructions+=1;NFSU2_TR(0x73c4b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73c4bb;}}
}
B73c4b2:L73c4b2:{c.instructions+=1;NFSU2_TR(0x73c4b2);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x4000000ull))));
}
B73c4b8:L73c4b8:{c.instructions+=1;NFSU2_TR(0x73c4b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c4bb:L73c4bb:{c.instructions+=3;NFSU2_TR(0x73c4bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B73c4c2:{NFSU2_TR(0x73c4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73c4c5:{NFSU2_TR(0x73c4c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c4de;}}
}
B73c4c7:L73c4c7:{c.instructions+=8;NFSU2_TR(0x73c4c7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73c4c9:{NFSU2_TR(0x73c4c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73c4cc:{NFSU2_TR(0x73c4cc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B73c4cf:{NFSU2_TR(0x73c4cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73c4d2:{NFSU2_TR(0x73c4d2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B73c4d4:{NFSU2_TR(0x73c4d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c4d5:{NFSU2_TR(0x73c4d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c4d6:{NFSU2_TR(0x73c4d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c4dbull));
TAIL_STATIC(0x73ba80u,73b);
}
B73c4db:L73c4db:{c.instructions+=1;NFSU2_TR(0x73c4db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73c4de:L73c4de:{c.instructions+=3;NFSU2_TR(0x73c4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c4e1:{NFSU2_TR(0x73c4e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c4e6:{NFSU2_TR(0x73c4e6);
if(r1(R+518)){{goto L73c4f9;}}
}
B73c4e8:L73c4e8:{c.instructions+=6;NFSU2_TR(0x73c4e8);
__builtin_memmove((R+8),(R+0),4);
}
B73c4ea:{NFSU2_TR(0x73c4ea);
w4(R+8,u32(~u32(r4(R+8))));
}
B73c4ec:{NFSU2_TR(0x73c4ec);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B73c4ee:{NFSU2_TR(0x73c4ee);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x4000000ull))));
}
B73c4f4:{NFSU2_TR(0x73c4f4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B73c4f6:{NFSU2_TR(0x73c4f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c4f9:L73c4f9:{c.instructions+=6;NFSU2_TR(0x73c4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73c4fc:{NFSU2_TR(0x73c4fc);
__builtin_memmove((R+0),(R+4),4);
}
B73c4fe:{NFSU2_TR(0x73c4fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73c501:{NFSU2_TR(0x73c501);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B73c504:{NFSU2_TR(0x73c504);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c507:{NFSU2_TR(0x73c507);
if(r1(R+518)){{goto L73c511;}}
}
B73c509:L73c509:{c.instructions+=2;NFSU2_TR(0x73c509);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c50c:{NFSU2_TR(0x73c50c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c538;}}
}
B73c50e:L73c50e:{c.instructions+=1;NFSU2_TR(0x73c50e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73c511:L73c511:{c.instructions+=3;NFSU2_TR(0x73c511);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73c514:{NFSU2_TR(0x73c514);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73c517:{NFSU2_TR(0x73c517);
if(r1(R+518)){{goto L73c531;}}
}
B73c519:L73c519:{c.instructions+=9;NFSU2_TR(0x73c519);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73c51b:{NFSU2_TR(0x73c51b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73c51e:{NFSU2_TR(0x73c51e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B73c521:{NFSU2_TR(0x73c521);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73c524:{NFSU2_TR(0x73c524);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B73c526:{NFSU2_TR(0x73c526);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c527:{NFSU2_TR(0x73c527);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c528:{NFSU2_TR(0x73c528);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c529:{NFSU2_TR(0x73c529);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c52eull));
TAIL_STATIC(0x73ba20u,73b);
}
B73c52e:L73c52e:{c.instructions+=1;NFSU2_TR(0x73c52e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73c531:L73c531:{c.instructions+=1;NFSU2_TR(0x73c531);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4000000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73c538:L73c538:{c.instructions+=5;NFSU2_TR(0x73c538);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c53c:{NFSU2_TR(0x73c53c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73c53d:{NFSU2_TR(0x73c53d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73c540:{NFSU2_TR(0x73c540);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c544:{NFSU2_TR(0x73c544);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x73bb93u,73b);}
}
B73c54a:L73c54a:{c.instructions+=9;NFSU2_TR(0x73c54a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c54d:{NFSU2_TR(0x73c54d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73c54e:{NFSU2_TR(0x73c54e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73c551:{NFSU2_TR(0x73c551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73c552:{NFSU2_TR(0x73c552);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73c555:{NFSU2_TR(0x73c555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73c556:{NFSU2_TR(0x73c556);
__builtin_memmove((R+16),(R+20),4);
}
B73c558:{NFSU2_TR(0x73c558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73c559:{NFSU2_TR(0x73c559);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73c6b0:L73c6b0:{c.instructions+=22;NFSU2_TR(0x73c6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B73c6b3:{NFSU2_TR(0x73c6b3);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73c6b8:{NFSU2_TR(0x73c6b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c6bb:{NFSU2_TR(0x73c6bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c6bc:{NFSU2_TR(0x73c6bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73c6c0:{NFSU2_TR(0x73c6c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B73c6c4:{NFSU2_TR(0x73c6c4);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B73c6c8:{NFSU2_TR(0x73c6c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c6cb:{NFSU2_TR(0x73c6cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c6cc:{NFSU2_TR(0x73c6cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B73c6cf:{NFSU2_TR(0x73c6cf);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B73c6d3:{NFSU2_TR(0x73c6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c6d6:{NFSU2_TR(0x73c6d6);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B73c6da:{NFSU2_TR(0x73c6da);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c6de:{NFSU2_TR(0x73c6de);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B73c6e2:{NFSU2_TR(0x73c6e2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73c6e4:{NFSU2_TR(0x73c6e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c6e5:{NFSU2_TR(0x73c6e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c6e9:{NFSU2_TR(0x73c6e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c6ea:{NFSU2_TR(0x73c6ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c6ee:{NFSU2_TR(0x73c6ee);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73c6f2:{NFSU2_TR(0x73c6f2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c6fa;}}
}
B73c6f4:L73c6f4:{c.instructions+=1;NFSU2_TR(0x73c6f4);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73c6fa:L73c6fa:{c.instructions+=8;NFSU2_TR(0x73c6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73c6fd:{NFSU2_TR(0x73c6fd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73c701:{NFSU2_TR(0x73c701);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73c705:{NFSU2_TR(0x73c705);
__builtin_memmove((R+28),(R+24),4);
}
B73c707:{NFSU2_TR(0x73c707);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B73c70a:{NFSU2_TR(0x73c70a);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B73c70d:{NFSU2_TR(0x73c70d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c711:{NFSU2_TR(0x73c711);
if(r1(R+518)){{goto L73c738;}}
}
B73c713:L73c713:{c.instructions+=8;NFSU2_TR(0x73c713);
__builtin_memmove((R+8),(R+24),4);
}
B73c715:{NFSU2_TR(0x73c715);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73c718:{NFSU2_TR(0x73c718);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B73c71b:{NFSU2_TR(0x73c71b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B73c71e:{NFSU2_TR(0x73c71e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73c720:{NFSU2_TR(0x73c720);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c724:{NFSU2_TR(0x73c724);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73c728:{NFSU2_TR(0x73c728);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c730;}}
}
B73c72a:L73c72a:{c.instructions+=1;NFSU2_TR(0x73c72a);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73c730:L73c730:{c.instructions+=2;NFSU2_TR(0x73c730);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B73c734:{NFSU2_TR(0x73c734);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73c738:L73c738:{c.instructions+=6;NFSU2_TR(0x73c738);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B73c73b:{NFSU2_TR(0x73c73b);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfull))));
}
B73c73e:{NFSU2_TR(0x73c73e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73c740:{NFSU2_TR(0x73c740);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c744:{NFSU2_TR(0x73c744);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73c748:{NFSU2_TR(0x73c748);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c750;}}
}
B73c74a:L73c74a:{c.instructions+=1;NFSU2_TR(0x73c74a);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73c750:L73c750:{c.instructions+=9;NFSU2_TR(0x73c750);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B73c754:{NFSU2_TR(0x73c754);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c757:{NFSU2_TR(0x73c757);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73c75b:{NFSU2_TR(0x73c75b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c75c:{NFSU2_TR(0x73c75c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73c760:{NFSU2_TR(0x73c760);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c761:{NFSU2_TR(0x73c761);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c762:{NFSU2_TR(0x73c762);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73c766:{NFSU2_TR(0x73c766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c76bull));
TAIL_STATIC(0x46be90u,46b);
}
B73c76b:L73c76b:{c.instructions+=6;NFSU2_TR(0x73c76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c76e:{NFSU2_TR(0x73c76e);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73c771:{NFSU2_TR(0x73c771);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73c774:{NFSU2_TR(0x73c774);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73c777:{NFSU2_TR(0x73c777);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c779:{NFSU2_TR(0x73c779);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73c7c7;}}
}
B73c77b:L73c77b:{c.instructions+=2;NFSU2_TR(0x73c77b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B73c77f:{NFSU2_TR(0x73c77f);
if(r1(R+518)){{goto L73c7c7;}}
}
B73c781:L73c781:{c.instructions+=7;NFSU2_TR(0x73c781);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B73c784:{NFSU2_TR(0x73c784);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B73c786:{NFSU2_TR(0x73c786);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B73c787:{NFSU2_TR(0x73c787);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73c789:{NFSU2_TR(0x73c789);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c78d:{NFSU2_TR(0x73c78d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73c791:{NFSU2_TR(0x73c791);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c799;}}
}
B73c793:L73c793:{c.instructions+=1;NFSU2_TR(0x73c793);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73c799:L73c799:{c.instructions+=4;NFSU2_TR(0x73c799);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c79c:{NFSU2_TR(0x73c79c);
{u32 ea_=u32(r4(R+12)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73c79f:{NFSU2_TR(0x73c79f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73c7a1:{NFSU2_TR(0x73c7a1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c7a9;}}
}
B73c7a3:L73c7a3:{c.instructions+=1;NFSU2_TR(0x73c7a3);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73c7a9:L73c7a9:{c.instructions+=5;NFSU2_TR(0x73c7a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73c7ad:{NFSU2_TR(0x73c7ad);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B73c7af:{NFSU2_TR(0x73c7af);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73c7b1:{NFSU2_TR(0x73c7b1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73c7b5:{NFSU2_TR(0x73c7b5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c7bd;}}
}
B73c7b7:L73c7b7:{c.instructions+=1;NFSU2_TR(0x73c7b7);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73c7bd:L73c7bd:{c.instructions+=4;NFSU2_TR(0x73c7bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73c7bf:{NFSU2_TR(0x73c7bf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73c7c3:{NFSU2_TR(0x73c7c3);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B73c7c5:{NFSU2_TR(0x73c7c5);
{goto L73c7eb;}
}
B73c7c7:L73c7c7:{c.instructions+=4;NFSU2_TR(0x73c7c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c7cb:{NFSU2_TR(0x73c7cb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73c7cf:{NFSU2_TR(0x73c7cf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73c7d1:{NFSU2_TR(0x73c7d1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c7d9;}}
}
B73c7d3:L73c7d3:{c.instructions+=1;NFSU2_TR(0x73c7d3);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73c7d9:L73c7d9:{c.instructions+=4;NFSU2_TR(0x73c7d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c7dd:{NFSU2_TR(0x73c7dd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73c7e1:{NFSU2_TR(0x73c7e1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73c7e3:{NFSU2_TR(0x73c7e3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c7eb;}}
}
B73c7e5:L73c7e5:{c.instructions+=1;NFSU2_TR(0x73c7e5);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73c7eb:L73c7eb:{c.instructions+=5;NFSU2_TR(0x73c7eb);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B73c7ef:{NFSU2_TR(0x73c7ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73c7f3:{NFSU2_TR(0x73c7f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c7f5:{NFSU2_TR(0x73c7f5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73c7f9:{NFSU2_TR(0x73c7f9);
if(r1(R+518)){{goto L73c894;}}
}
B73c7ff:L73c7ff:{c.instructions+=12;NFSU2_TR(0x73c7ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73c801:{NFSU2_TR(0x73c801);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73c805:{NFSU2_TR(0x73c805);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c808:{NFSU2_TR(0x73c808);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B73c80a:{NFSU2_TR(0x73c80a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+8))));
}
B73c80c:{NFSU2_TR(0x73c80c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73c80e:{NFSU2_TR(0x73c80e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff0ull))));
}
B73c811:{NFSU2_TR(0x73c811);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0ull))));
}
B73c817:{NFSU2_TR(0x73c817);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B73c819:{NFSU2_TR(0x73c819);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+8))));
}
B73c81b:{NFSU2_TR(0x73c81b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B73c81d:{NFSU2_TR(0x73c81d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c822ull));
TAIL_STATIC(0x75bed4u,75b);
}
B73c822:L73c822:{c.instructions+=3;NFSU2_TR(0x73c822);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73c826:{NFSU2_TR(0x73c826);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73c829:{NFSU2_TR(0x73c829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c82eull));
TAIL_STATIC(0x75bed4u,75b);
}
B73c82e:L73c82e:{c.instructions+=3;NFSU2_TR(0x73c82e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73c832:{NFSU2_TR(0x73c832);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c835:{NFSU2_TR(0x73c835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c83aull));
TAIL_STATIC(0x75bed4u,75b);
}
B73c83a:L73c83a:{c.instructions+=8;NFSU2_TR(0x73c83a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73c83e:{NFSU2_TR(0x73c83e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73c842:{NFSU2_TR(0x73c842);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c845:{NFSU2_TR(0x73c845);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73c849:{NFSU2_TR(0x73c849);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c84d:{NFSU2_TR(0x73c84d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c850:{NFSU2_TR(0x73c850);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B73c852:{NFSU2_TR(0x73c852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c857ull));
TAIL_STATIC(0x75bed4u,75b);
}
B73c857:L73c857:{c.instructions+=3;NFSU2_TR(0x73c857);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73c85b:{NFSU2_TR(0x73c85b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c85e:{NFSU2_TR(0x73c85e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c863ull));
TAIL_STATIC(0x75bed4u,75b);
}
B73c863:L73c863:{c.instructions+=6;NFSU2_TR(0x73c863);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73c864:{NFSU2_TR(0x73c864);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c868:{NFSU2_TR(0x73c868);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73c86c:{NFSU2_TR(0x73c86c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73c870:{NFSU2_TR(0x73c870);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B73c872:{NFSU2_TR(0x73c872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c877ull));
TAIL_STATIC(0x75bed4u,75b);
}
B73c877:L73c877:{c.instructions+=3;NFSU2_TR(0x73c877);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73c879:{NFSU2_TR(0x73c879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c87c:{NFSU2_TR(0x73c87c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c881ull));
TAIL_STATIC(0x75bed4u,75b);
}
B73c881:L73c881:{c.instructions+=8;NFSU2_TR(0x73c881);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73c885:{NFSU2_TR(0x73c885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73c886:{NFSU2_TR(0x73c886);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73c889:{NFSU2_TR(0x73c889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73c88a:{NFSU2_TR(0x73c88a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73c88b:{NFSU2_TR(0x73c88b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73c88c:{NFSU2_TR(0x73c88c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B73c88f:{NFSU2_TR(0x73c88f);
TAIL_STATIC(0x75bed4u,75b);
}
B73c894:L73c894:{c.instructions+=8;NFSU2_TR(0x73c894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73c895:{NFSU2_TR(0x73c895);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73c897:{NFSU2_TR(0x73c897);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73c89b:{NFSU2_TR(0x73c89b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73c89c:{NFSU2_TR(0x73c89c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73c89d:{NFSU2_TR(0x73c89d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73c89e:{NFSU2_TR(0x73c89e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B73c8a1:{NFSU2_TR(0x73c8a1);
TAIL_STATIC(0x75bed4u,75b);
}
B73c8b0:L73c8b0:{c.instructions+=15;NFSU2_TR(0x73c8b0);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73c8b5:{NFSU2_TR(0x73c8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c8b8:{NFSU2_TR(0x73c8b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c8b9:{NFSU2_TR(0x73c8b9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c8ba:{NFSU2_TR(0x73c8ba);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73c8be:{NFSU2_TR(0x73c8be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73c8c1:{NFSU2_TR(0x73c8c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73c8c4:{NFSU2_TR(0x73c8c4);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B73c8c8:{NFSU2_TR(0x73c8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c8cb:{NFSU2_TR(0x73c8cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c8cf:{NFSU2_TR(0x73c8cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c8d0:{NFSU2_TR(0x73c8d0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73c8d2:{NFSU2_TR(0x73c8d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c8d4:{NFSU2_TR(0x73c8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B73c8d7:{NFSU2_TR(0x73c8d7);
if(r1(R+518)){{goto L73c953;}}
}
B73c8d9:L73c8d9:{c.instructions+=3;NFSU2_TR(0x73c8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73c8dc:{NFSU2_TR(0x73c8dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c8de:{NFSU2_TR(0x73c8de);
if(r1(R+518)){{goto L73c953;}}
}
B73c8e0:L73c8e0:{c.instructions+=5;NFSU2_TR(0x73c8e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c8e1:{NFSU2_TR(0x73c8e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c8e5:{NFSU2_TR(0x73c8e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c8e6:{NFSU2_TR(0x73c8e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c8e7:{NFSU2_TR(0x73c8e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c8ecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73c6b0u);}goto L73c6b0;}
}
B73c8ec:L73c8ec:{c.instructions+=6;NFSU2_TR(0x73c8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73c8ef:{NFSU2_TR(0x73c8ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73c8f2:{NFSU2_TR(0x73c8f2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B73c8f5:{NFSU2_TR(0x73c8f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73c8f8:{NFSU2_TR(0x73c8f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c8fb:{NFSU2_TR(0x73c8fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c925;}}
}
B73c8fd:L73c8fd:{c.instructions+=19;NFSU2_TR(0x73c8fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c900:{NFSU2_TR(0x73c900);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73c902:{NFSU2_TR(0x73c902);
u8 U[64];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x73c902);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x73c902);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B73c905:{NFSU2_TR(0x73c905);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c908:{NFSU2_TR(0x73c908);
__builtin_memmove((R+4),(R+8),4);
}
B73c90a:{NFSU2_TR(0x73c90a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73c90d:{NFSU2_TR(0x73c90d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73c910:{NFSU2_TR(0x73c910);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B73c913:{NFSU2_TR(0x73c913);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B73c916:{NFSU2_TR(0x73c916);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B73c919:{NFSU2_TR(0x73c919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73c91a:{NFSU2_TR(0x73c91a);
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B73c91c:{NFSU2_TR(0x73c91c);
__builtin_memmove((R+24),(R+4),4);
}
B73c91e:{NFSU2_TR(0x73c91e);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73c91f:{NFSU2_TR(0x73c91f);
__builtin_memmove((R+0),(R+24),4);
}
B73c921:{NFSU2_TR(0x73c921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73c922:{NFSU2_TR(0x73c922);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73c923:{NFSU2_TR(0x73c923);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73c924:{NFSU2_TR(0x73c924);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73c925:L73c925:{c.instructions+=2;NFSU2_TR(0x73c925);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73c928:{NFSU2_TR(0x73c928);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c942;}}
}
B73c92a:L73c92a:{c.instructions+=8;NFSU2_TR(0x73c92a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B73c92c:{NFSU2_TR(0x73c92c);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B73c92f:{NFSU2_TR(0x73c92f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73c930:{NFSU2_TR(0x73c930);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73c932:{NFSU2_TR(0x73c932);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x73c932);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x73c932);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B73c934:{NFSU2_TR(0x73c934);
__builtin_memmove((R+24),(R+8),4);
}
B73c936:{NFSU2_TR(0x73c936);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73c937:{NFSU2_TR(0x73c937);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c94c;}}
}
B73c939:L73c939:{c.instructions+=7;NFSU2_TR(0x73c939);
__builtin_memmove((R+24),(R+28),4);
}
B73c93b:{NFSU2_TR(0x73c93b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73c93c:{NFSU2_TR(0x73c93c);
__builtin_memmove((R+0),(R+24),4);
}
B73c93e:{NFSU2_TR(0x73c93e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73c93f:{NFSU2_TR(0x73c93f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73c940:{NFSU2_TR(0x73c940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73c941:{NFSU2_TR(0x73c941);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73c942:L73c942:{c.instructions+=2;NFSU2_TR(0x73c942);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B73c945:{NFSU2_TR(0x73c945);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73c94c;}}
}
B73c947:L73c947:{c.instructions+=1;NFSU2_TR(0x73c947);
w4(R+24,u32(0x1ull));
}
B73c94c:L73c94c:{c.instructions+=6;NFSU2_TR(0x73c94c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73c94d:{NFSU2_TR(0x73c94d);
__builtin_memmove((R+0),(R+24),4);
}
B73c94f:{NFSU2_TR(0x73c94f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73c950:{NFSU2_TR(0x73c950);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73c951:{NFSU2_TR(0x73c951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73c952:{NFSU2_TR(0x73c952);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73c953:L73c953:{c.instructions+=9;NFSU2_TR(0x73c953);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c956:{NFSU2_TR(0x73c956);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x300ull))));
}
B73c95b:{NFSU2_TR(0x73c95b);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B73c95d:{NFSU2_TR(0x73c95d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73c95e:{NFSU2_TR(0x73c95e);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B73c960:{NFSU2_TR(0x73c960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73c961:{NFSU2_TR(0x73c961);
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
B73c962:{NFSU2_TR(0x73c962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73c963:{NFSU2_TR(0x73c963);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73c970:L73c970:{c.instructions+=6;NFSU2_TR(0x73c970);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73c974:{NFSU2_TR(0x73c974);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B73c977:{NFSU2_TR(0x73c977);
__builtin_memmove((R+0),(R+16),4);
}
B73c97b:{NFSU2_TR(0x73c97b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c97c:{NFSU2_TR(0x73c97c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c97d:{NFSU2_TR(0x73c97d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c982ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73c6b0u);}goto L73c6b0;}
}
B73c982:L73c982:{c.instructions+=3;NFSU2_TR(0x73c982);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73c985:{NFSU2_TR(0x73c985);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73c987:{NFSU2_TR(0x73c987);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73c990;}}
}
B73c989:L73c989:{c.instructions+=3;NFSU2_TR(0x73c989);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73c98b:{NFSU2_TR(0x73c98b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B73c98e:{NFSU2_TR(0x73c98e);
{goto L73c998;}
}
B73c990:L73c990:{c.instructions+=2;NFSU2_TR(0x73c990);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c994:{NFSU2_TR(0x73c994);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c998:L73c998:{c.instructions+=3;NFSU2_TR(0x73c998);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73c99c:{NFSU2_TR(0x73c99c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c99e:{NFSU2_TR(0x73c99e);
if(r1(R+518)){{goto L73c9a2;}}
}
B73c9a0:L73c9a0:{c.instructions+=1;NFSU2_TR(0x73c9a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B73c9a2:L73c9a2:{c.instructions+=2;NFSU2_TR(0x73c9a2);
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
B73c9a5:{NFSU2_TR(0x73c9a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73c9b0:L73c9b0:{c.instructions+=10;NFSU2_TR(0x73c9b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c9b4:{NFSU2_TR(0x73c9b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c9b5:{NFSU2_TR(0x73c9b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c9b6:{NFSU2_TR(0x73c9b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c9b7:{NFSU2_TR(0x73c9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73c9ba:{NFSU2_TR(0x73c9ba);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B73c9bd:{NFSU2_TR(0x73c9bd);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B73c9bf:{NFSU2_TR(0x73c9bf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73c9c1:{NFSU2_TR(0x73c9c1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x1full))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73c9c4:{NFSU2_TR(0x73c9c4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73c9e6;}}
}
B73c9c6:L73c9c6:{c.instructions+=3;NFSU2_TR(0x73c9c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c9c7:{NFSU2_TR(0x73c9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73c9ca:{NFSU2_TR(0x73c9ca);
__builtin_memmove((R+12),(R+12),4);
}
B73c9d0:L73c9d0:{c.instructions+=3;NFSU2_TR(0x73c9d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c9d1:{NFSU2_TR(0x73c9d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c9d2:{NFSU2_TR(0x73c9d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73c9d7ull));
TAIL_STATIC(0x47b780u,47b);
}
B73c9d7:L73c9d7:{c.instructions+=3;NFSU2_TR(0x73c9d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73c9da:{NFSU2_TR(0x73c9da);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73c9dc:{NFSU2_TR(0x73c9dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73c9e0;}}
}
B73c9de:L73c9de:{c.instructions+=1;NFSU2_TR(0x73c9de);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B73c9e0:L73c9e0:{c.instructions+=3;NFSU2_TR(0x73c9e0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B73c9e1:{NFSU2_TR(0x73c9e1);
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
B73c9e3:{NFSU2_TR(0x73c9e3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73c9d0u);}goto L73c9d0;}}
}
B73c9e5:L73c9e5:{c.instructions+=1;NFSU2_TR(0x73c9e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73c9e6:L73c9e6:{c.instructions+=5;NFSU2_TR(0x73c9e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73c9e7:{NFSU2_TR(0x73c9e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73c9e8:{NFSU2_TR(0x73c9e8);
__builtin_memmove((R+0),(R+20),4);
}
B73c9ea:{NFSU2_TR(0x73c9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73c9eb:{NFSU2_TR(0x73c9eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73c9f0:L73c9f0:{c.instructions+=6;NFSU2_TR(0x73c9f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73c9f4:{NFSU2_TR(0x73c9f4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73c9f6:{NFSU2_TR(0x73c9f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73c9fa:{NFSU2_TR(0x73c9fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73c9fb:{NFSU2_TR(0x73c9fb);
__builtin_memmove((R+12),(R+8),4);
}
B73c9fd:{NFSU2_TR(0x73c9fd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73ca04;}}
}
B73c9ff:L73c9ff:{c.instructions+=3;NFSU2_TR(0x73c9ff);
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
B73ca02:{NFSU2_TR(0x73ca02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73ca03:{NFSU2_TR(0x73ca03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ca04:L73ca04:{c.instructions+=4;NFSU2_TR(0x73ca04);
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
B73ca06:{NFSU2_TR(0x73ca06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ca07:{NFSU2_TR(0x73ca07);
w4(R+28,u32(0x7full));
}
B73ca0c:{NFSU2_TR(0x73ca0c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73ca43;}}
}
B73ca0e:L73ca0e:{c.instructions+=4;NFSU2_TR(0x73ca0e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ca0f:{NFSU2_TR(0x73ca0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ca10:{NFSU2_TR(0x73ca10);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73ca14:{NFSU2_TR(0x73ca14);
__builtin_memmove((R+20),(R+0),4);
}
B73ca16:L73ca16:{c.instructions+=6;NFSU2_TR(0x73ca16);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B73ca19:{NFSU2_TR(0x73ca19);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B73ca1d:{NFSU2_TR(0x73ca1d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B73ca1f:{NFSU2_TR(0x73ca1f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B73ca21:{NFSU2_TR(0x73ca21);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73ca23:{NFSU2_TR(0x73ca23);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73ca27;}}
}
B73ca25:L73ca25:{c.instructions+=1;NFSU2_TR(0x73ca25);
w4(R+0,u32(0-u32(r4(R+0))));
}
B73ca27:L73ca27:{c.instructions+=2;NFSU2_TR(0x73ca27);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73ca29:{NFSU2_TR(0x73ca29);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73ca2d;}}
}
B73ca2b:L73ca2b:{c.instructions+=1;NFSU2_TR(0x73ca2b);
w4(R+4,u32(0-u32(r4(R+4))));
}
B73ca2d:L73ca2d:{c.instructions+=2;NFSU2_TR(0x73ca2d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73ca2f:{NFSU2_TR(0x73ca2f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73ca33;}}
}
B73ca31:L73ca31:{c.instructions+=1;NFSU2_TR(0x73ca31);
__builtin_memmove((R+0),(R+4),4);
}
B73ca33:L73ca33:{c.instructions+=2;NFSU2_TR(0x73ca33);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73ca35:{NFSU2_TR(0x73ca35);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73ca3b;}}
}
B73ca37:L73ca37:{c.instructions+=2;NFSU2_TR(0x73ca37);
__builtin_memmove((R+28),(R+0),4);
}
B73ca39:{NFSU2_TR(0x73ca39);
__builtin_memmove((R+12),(R+8),4);
}
B73ca3b:L73ca3b:{c.instructions+=3;NFSU2_TR(0x73ca3b);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B73ca3e:{NFSU2_TR(0x73ca3e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ca3f:{NFSU2_TR(0x73ca3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ca16u);}goto L73ca16;}}
}
B73ca41:L73ca41:{c.instructions+=2;NFSU2_TR(0x73ca41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ca42:{NFSU2_TR(0x73ca42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73ca43:L73ca43:{c.instructions+=4;NFSU2_TR(0x73ca43);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B73ca47:{NFSU2_TR(0x73ca47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73ca48:{NFSU2_TR(0x73ca48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73ca49:{NFSU2_TR(0x73ca49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ca50:L73ca50:{c.instructions+=19;NFSU2_TR(0x73ca50);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73ca55:{NFSU2_TR(0x73ca55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ca58:{NFSU2_TR(0x73ca58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ca59:{NFSU2_TR(0x73ca59);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73ca5d:{NFSU2_TR(0x73ca5d);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(s32(s16(r2(U+8)))));
}
B73ca61:{NFSU2_TR(0x73ca61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ca64:{NFSU2_TR(0x73ca64);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ca65:{NFSU2_TR(0x73ca65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ca66:{NFSU2_TR(0x73ca66);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B73ca69:{NFSU2_TR(0x73ca69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ca6a:{NFSU2_TR(0x73ca6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B73ca6c:{NFSU2_TR(0x73ca6c);
__builtin_memmove((R+4),(R+28),4);
}
B73ca6e:{NFSU2_TR(0x73ca6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73ca71:{NFSU2_TR(0x73ca71);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B73ca74:{NFSU2_TR(0x73ca74);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B73ca78:{NFSU2_TR(0x73ca78);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B73ca7c:{NFSU2_TR(0x73ca7c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73ca7e:{NFSU2_TR(0x73ca7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B73ca81:{NFSU2_TR(0x73ca81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73cab7;}}
}
B73ca83:L73ca83:{c.instructions+=9;NFSU2_TR(0x73ca83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73ca86:{NFSU2_TR(0x73ca86);
__builtin_memmove((R+0),(R+20),4);
}
B73ca88:{NFSU2_TR(0x73ca88);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73ca8b:{NFSU2_TR(0x73ca8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73ca8e:{NFSU2_TR(0x73ca8e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B73ca90:{NFSU2_TR(0x73ca90);
__builtin_memmove((R+12),(R+0),1);
}
B73ca92:{NFSU2_TR(0x73ca92);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7full))));
}
B73ca95:{NFSU2_TR(0x73ca95);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xf0000000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ca9b:{NFSU2_TR(0x73ca9b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73cabb;}}
}
B73ca9d:L73ca9d:{c.instructions+=7;NFSU2_TR(0x73ca9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B73caa0:{NFSU2_TR(0x73caa0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+20))));
}
B73caa2:{NFSU2_TR(0x73caa2);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B73caa5:{NFSU2_TR(0x73caa5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+20))));
}
B73caa7:{NFSU2_TR(0x73caa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73caa9:{NFSU2_TR(0x73caa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73caac:{NFSU2_TR(0x73caac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73cabb;}}
}
B73caae:L73caae:{c.instructions+=2;NFSU2_TR(0x73caae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73cab5:{NFSU2_TR(0x73cab5);
{goto L73cabb;}
}
B73cab7:L73cab7:{c.instructions+=1;NFSU2_TR(0x73cab7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73cabb:L73cabb:{c.instructions+=5;NFSU2_TR(0x73cabb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73cabe:{NFSU2_TR(0x73cabe);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B73cac1:{NFSU2_TR(0x73cac1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73cac3:{NFSU2_TR(0x73cac3);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1full))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B73cac6:{NFSU2_TR(0x73cac6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73caf7;}}
}
B73cac8:L73cac8:{c.instructions+=3;NFSU2_TR(0x73cac8);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(s32(s8(r1(U+8)))));
}
B73cacc:{NFSU2_TR(0x73cacc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73cace:{NFSU2_TR(0x73cace);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73cad9;}}
}
B73cad0:L73cad0:{c.instructions+=3;NFSU2_TR(0x73cad0);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(s32(s8(r1(U+12)))));
}
B73cad5:{NFSU2_TR(0x73cad5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cad7:{NFSU2_TR(0x73cad7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73caee;}}
}
B73cad9:L73cad9:{c.instructions+=3;NFSU2_TR(0x73cad9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73cada:{NFSU2_TR(0x73cada);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B73cadc:{NFSU2_TR(0x73cadc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73cac8u);}goto L73cac8;}}
}
B73cade:L73cade:{c.instructions+=4;NFSU2_TR(0x73cade);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cadf:{NFSU2_TR(0x73cadf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cae0:{NFSU2_TR(0x73cae0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cae1:{NFSU2_TR(0x73cae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cae6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73c9f0u);}goto L73c9f0;}
}
B73cae6:L73cae6:{c.instructions+=6;NFSU2_TR(0x73cae6);
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
B73cae9:{NFSU2_TR(0x73cae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73caea:{NFSU2_TR(0x73caea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73caeb:{NFSU2_TR(0x73caeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73caec:{NFSU2_TR(0x73caec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73caed:{NFSU2_TR(0x73caed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73caee:L73caee:{c.instructions+=3;NFSU2_TR(0x73caee);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B73caf3:{NFSU2_TR(0x73caf3);
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
B73caf5:{NFSU2_TR(0x73caf5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73cb02;}}
}
B73caf7:L73caf7:{c.instructions+=4;NFSU2_TR(0x73caf7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73caf8:{NFSU2_TR(0x73caf8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73caf9:{NFSU2_TR(0x73caf9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cafa:{NFSU2_TR(0x73cafa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73caffull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73c9f0u);}goto L73c9f0;}
}
B73caff:L73caff:{c.instructions+=1;NFSU2_TR(0x73caff);
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
B73cb02:L73cb02:{c.instructions+=5;NFSU2_TR(0x73cb02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73cb03:{NFSU2_TR(0x73cb03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73cb04:{NFSU2_TR(0x73cb04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73cb05:{NFSU2_TR(0x73cb05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73cb06:{NFSU2_TR(0x73cb06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73cb10:L73cb10:{c.instructions+=3;NFSU2_TR(0x73cb10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73cb14:{NFSU2_TR(0x73cb14);
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
B73cb16:{NFSU2_TR(0x73cb16);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73cb1d;}}
}
B73cb18:L73cb18:{c.instructions+=2;NFSU2_TR(0x73cb18);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cb1c:{NFSU2_TR(0x73cb1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73cb1d:L73cb1d:{c.instructions+=8;NFSU2_TR(0x73cb1d);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73cb22:{NFSU2_TR(0x73cb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73cb25:{NFSU2_TR(0x73cb25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cb26:{NFSU2_TR(0x73cb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73cb29:{NFSU2_TR(0x73cb29);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B73cb2d:{NFSU2_TR(0x73cb2d);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B73cb31:{NFSU2_TR(0x73cb31);
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
B73cb33:{NFSU2_TR(0x73cb33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73cb3b;}}
}
B73cb35:L73cb35:{c.instructions+=3;NFSU2_TR(0x73cb35);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cb39:{NFSU2_TR(0x73cb39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73cb3a:{NFSU2_TR(0x73cb3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73cb3b:L73cb3b:{c.instructions+=12;NFSU2_TR(0x73cb3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cb3e:{NFSU2_TR(0x73cb3e);
w4(R+4,u32(r1(R+4)));
}
B73cb41:{NFSU2_TR(0x73cb41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73cb44:{NFSU2_TR(0x73cb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73cb47:{NFSU2_TR(0x73cb47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cb48:{NFSU2_TR(0x73cb48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B73cb4b:{NFSU2_TR(0x73cb4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73cb4d:{NFSU2_TR(0x73cb4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cb51:{NFSU2_TR(0x73cb51);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B73cb53:{NFSU2_TR(0x73cb53);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73cb55:{NFSU2_TR(0x73cb55);
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
B73cb57:{NFSU2_TR(0x73cb57);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73cb7a;}}
}
B73cb59:L73cb59:{c.instructions+=2;NFSU2_TR(0x73cb59);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cb5a:{NFSU2_TR(0x73cb5a);
__builtin_memmove((R+12),(R+12),4);
}
B73cb60:L73cb60:{c.instructions+=5;NFSU2_TR(0x73cb60);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B73cb63:{NFSU2_TR(0x73cb63);
__builtin_memmove((R+12),(R+4),4);
}
B73cb65:{NFSU2_TR(0x73cb65);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B73cb68:{NFSU2_TR(0x73cb68);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cb6a:{NFSU2_TR(0x73cb6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73cb74;}}
}
B73cb6c:L73cb6c:{c.instructions+=2;NFSU2_TR(0x73cb6c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B73cb72:{NFSU2_TR(0x73cb72);
__builtin_memmove((R+0),(R+4),4);
}
B73cb74:L73cb74:{c.instructions+=3;NFSU2_TR(0x73cb74);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B73cb75:{NFSU2_TR(0x73cb75);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B73cb77:{NFSU2_TR(0x73cb77);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73cb60u);}goto L73cb60;}}
}
B73cb79:L73cb79:{c.instructions+=1;NFSU2_TR(0x73cb79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73cb7a:L73cb7a:{c.instructions+=3;NFSU2_TR(0x73cb7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73cb7b:{NFSU2_TR(0x73cb7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73cb7c:{NFSU2_TR(0x73cb7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73cb80:L73cb80:{c.instructions+=13;NFSU2_TR(0x73cb80);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73cb86:{NFSU2_TR(0x73cb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cb89:{NFSU2_TR(0x73cb89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B73cb8c:{NFSU2_TR(0x73cb8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cb8d:{NFSU2_TR(0x73cb8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73cb91:{NFSU2_TR(0x73cb91);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B73cb95:{NFSU2_TR(0x73cb95);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cb98:{NFSU2_TR(0x73cb98);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cb99:{NFSU2_TR(0x73cb99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cb9a:{NFSU2_TR(0x73cb9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B73cb9d:{NFSU2_TR(0x73cb9d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73cb9f:{NFSU2_TR(0x73cb9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73cba1:{NFSU2_TR(0x73cba1);
if(r1(R+518)){{goto L73ccaf;}}
}
B73cba7:L73cba7:{c.instructions+=6;NFSU2_TR(0x73cba7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73cba9:{NFSU2_TR(0x73cba9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73cbac:{NFSU2_TR(0x73cbac);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B73cbaf:{NFSU2_TR(0x73cbaf);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B73cbb3:{NFSU2_TR(0x73cbb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73cbb5:{NFSU2_TR(0x73cbb5);
if(r1(R+518)){{goto L73ccaf;}}
}
B73cbbb:L73cbbb:{c.instructions+=18;NFSU2_TR(0x73cbbb);
w4(R+24,u32(0x1ull));
}
B73cbc0:{NFSU2_TR(0x73cbc0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B73cbc2:{NFSU2_TR(0x73cbc2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73cbc4:{NFSU2_TR(0x73cbc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cbc8:{NFSU2_TR(0x73cbc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cbcc:{NFSU2_TR(0x73cbcc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73cbce:{NFSU2_TR(0x73cbce);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cbd2:{NFSU2_TR(0x73cbd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cbd6:{NFSU2_TR(0x73cbd6);
__builtin_memmove((R+4),(R+0),4);
}
B73cbd8:{NFSU2_TR(0x73cbd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cbd9:{NFSU2_TR(0x73cbd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cbdd:{NFSU2_TR(0x73cbdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cbe1:{NFSU2_TR(0x73cbe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cbe5:{NFSU2_TR(0x73cbe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cbe9:{NFSU2_TR(0x73cbe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B73cbeb:{NFSU2_TR(0x73cbeb);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x11000000ull))));
}
B73cbf1:{NFSU2_TR(0x73cbf1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73cbf3:{NFSU2_TR(0x73cbf3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73cc41;}}
}
B73cbf5:L73cbf5:{c.instructions+=5;NFSU2_TR(0x73cbf5);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B73cbf9:{NFSU2_TR(0x73cbf9);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73cbfd:{NFSU2_TR(0x73cbfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cbfe:{NFSU2_TR(0x73cbfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cbff:{NFSU2_TR(0x73cbff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cc04ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73c6b0u);}goto L73c6b0;}
}
B73cc04:L73cc04:{c.instructions+=13;NFSU2_TR(0x73cc04);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73cc08:{NFSU2_TR(0x73cc08);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cc0c:{NFSU2_TR(0x73cc0c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffff02ffull))));
}
B73cc12:{NFSU2_TR(0x73cc12);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x200ull))));
}
B73cc18:{NFSU2_TR(0x73cc18);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73cc1c:{NFSU2_TR(0x73cc1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cc20:{NFSU2_TR(0x73cc20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cc21:{NFSU2_TR(0x73cc21);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73cc25:{NFSU2_TR(0x73cc25);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff6ull))));
}
B73cc28:{NFSU2_TR(0x73cc28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cc29:{NFSU2_TR(0x73cc29);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cc2d:{NFSU2_TR(0x73cc2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cc31:{NFSU2_TR(0x73cc31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cc36ull));
TAIL_STATIC(0x73b9d0u,73b);
}
B73cc36:L73cc36:{c.instructions+=3;NFSU2_TR(0x73cc36);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cc3a:{NFSU2_TR(0x73cc3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73cc3e:{NFSU2_TR(0x73cc3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73cc41:L73cc41:{c.instructions+=20;NFSU2_TR(0x73cc41);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff04ffull))));
}
B73cc47:{NFSU2_TR(0x73cc47);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400ull))));
}
B73cc4d:{NFSU2_TR(0x73cc4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cc51:{NFSU2_TR(0x73cc51);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff0000ull))));
}
B73cc56:{NFSU2_TR(0x73cc56);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cc5a:{NFSU2_TR(0x73cc5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73cc5d:{NFSU2_TR(0x73cc5d);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffffull))));
}
B73cc63:{NFSU2_TR(0x73cc63);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B73cc65:{NFSU2_TR(0x73cc65);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73cc68:{NFSU2_TR(0x73cc68);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xff0000ull))));
}
B73cc6d:{NFSU2_TR(0x73cc6d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffff00ull))));
}
B73cc73:{NFSU2_TR(0x73cc73);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B73cc76:{NFSU2_TR(0x73cc76);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cc7a:{NFSU2_TR(0x73cc7a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B73cc7c:{NFSU2_TR(0x73cc7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73cc80:{NFSU2_TR(0x73cc80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cc81:{NFSU2_TR(0x73cc81);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73cc85:{NFSU2_TR(0x73cc85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cc86:{NFSU2_TR(0x73cc86);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cc8a:{NFSU2_TR(0x73cc8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cc8full));
TAIL_STATIC(0x73b9d0u,73b);
}
B73cc8f:L73cc8f:{c.instructions+=3;NFSU2_TR(0x73cc8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73cc93:{NFSU2_TR(0x73cc93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cc94:{NFSU2_TR(0x73cc94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cc99ull));
TAIL_STATIC(0x739540u,739);
}
B73cc99:L73cc99:{c.instructions+=4;NFSU2_TR(0x73cc99);
__builtin_memmove((R+28),(R+0),4);
}
B73cc9b:{NFSU2_TR(0x73cc9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cc9c:{NFSU2_TR(0x73cc9c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cc9d:{NFSU2_TR(0x73cc9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cca2ull));
TAIL_STATIC(0x7393d0u,739);
}
B73cca2:L73cca2:{c.instructions+=8;NFSU2_TR(0x73cca2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B73cca5:{NFSU2_TR(0x73cca5);
__builtin_memmove((R+0),(R+28),4);
}
B73cca7:{NFSU2_TR(0x73cca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73cca8:{NFSU2_TR(0x73cca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73cca9:{NFSU2_TR(0x73cca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73ccaa:{NFSU2_TR(0x73ccaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73ccab:{NFSU2_TR(0x73ccab);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ccae:{NFSU2_TR(0x73ccae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ccaf:L73ccaf:{c.instructions+=6;NFSU2_TR(0x73ccaf);
__builtin_memmove((R+0),(R+24),4);
}
B73ccb1:{NFSU2_TR(0x73ccb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ccb2:{NFSU2_TR(0x73ccb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73ccb3:{NFSU2_TR(0x73ccb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73ccb4:{NFSU2_TR(0x73ccb4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ccb7:{NFSU2_TR(0x73ccb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ccc0:L73ccc0:{c.instructions+=15;NFSU2_TR(0x73ccc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B73ccc3:{NFSU2_TR(0x73ccc3);
__builtin_memmove((R+4),gp(0x8b7bb0),4);
}
B73ccc9:{NFSU2_TR(0x73ccc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73cccb:{NFSU2_TR(0x73cccb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cccc:{NFSU2_TR(0x73cccc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cccd:{NFSU2_TR(0x73cccd);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B73cccf:{NFSU2_TR(0x73cccf);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73ccd1:{NFSU2_TR(0x73ccd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ccd2:{NFSU2_TR(0x73ccd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ccd3:{NFSU2_TR(0x73ccd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ccd7:{NFSU2_TR(0x73ccd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ccdb:{NFSU2_TR(0x73ccdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ccdf:{NFSU2_TR(0x73ccdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cce3:{NFSU2_TR(0x73cce3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cce7:{NFSU2_TR(0x73cce7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73ccf1;}}
}
B73cce9:L73cce9:{c.instructions+=2;NFSU2_TR(0x73cce9);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B73cced:{NFSU2_TR(0x73cced);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ccf1:L73ccf1:{c.instructions+=3;NFSU2_TR(0x73ccf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73ccf5:{NFSU2_TR(0x73ccf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffff0000ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B73ccfc:{NFSU2_TR(0x73ccfc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x73d185u,73d);}
}
B73cd02:L73cd02:{c.instructions+=2;NFSU2_TR(0x73cd02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cd03:{NFSU2_TR(0x73cd03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cd08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73c9b0u);}goto L73c9b0;}
}
B73cd08:L73cd08:{c.instructions+=11;NFSU2_TR(0x73cd08);
__builtin_memmove((R+28),gp(0x8b7bb0),4);
}
B73cd0e:{NFSU2_TR(0x73cd0e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B73cd12:{NFSU2_TR(0x73cd12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73cd15:{NFSU2_TR(0x73cd15);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(s32(s16(r2(U+8)))));
}
B73cd19:{NFSU2_TR(0x73cd19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73cd1c:{NFSU2_TR(0x73cd1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B73cd1f:{NFSU2_TR(0x73cd1f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73cd22:{NFSU2_TR(0x73cd22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73cd25:{NFSU2_TR(0x73cd25);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73cd27:{NFSU2_TR(0x73cd27);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cd2b:{NFSU2_TR(0x73cd2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73cd51;}}
}
B73cd2d:L73cd2d:{c.instructions+=2;NFSU2_TR(0x73cd2d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cd2f:{NFSU2_TR(0x73cd2f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73cd47;}}
}
B73cd31:L73cd31:{c.instructions+=2;NFSU2_TR(0x73cd31);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73cd34:{NFSU2_TR(0x73cd34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73cd3f;}}
}
B73cd36:L73cd36:{c.instructions+=2;NFSU2_TR(0x73cd36);
__builtin_memmove((R+8),gp(0x8b7bc4),4);
}
B73cd3c:{NFSU2_TR(0x73cd3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cd3f:L73cd3f:{c.instructions+=1;NFSU2_TR(0x73cd3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73cd47:L73cd47:{c.instructions+=3;NFSU2_TR(0x73cd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cd4a:{NFSU2_TR(0x73cd4a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1f0ull))));
}
B73cd4f:{NFSU2_TR(0x73cd4f);
{goto L73cdb6;}
}
B73cd51:L73cd51:{c.instructions+=5;NFSU2_TR(0x73cd51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cd54:{NFSU2_TR(0x73cd54);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B73cd57:{NFSU2_TR(0x73cd57);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73cd5a:{NFSU2_TR(0x73cd5a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73cd5c:{NFSU2_TR(0x73cd5c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73cd9f;}}
}
B73cd5e:L73cd5e:{c.instructions+=6;NFSU2_TR(0x73cd5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cd62:{NFSU2_TR(0x73cd62);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73cd66:{NFSU2_TR(0x73cd66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cd67:{NFSU2_TR(0x73cd67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cd68:{NFSU2_TR(0x73cd68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cd69:{NFSU2_TR(0x73cd69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cd6eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73c8b0u);}goto L73c8b0;}
}
B73cd6e:L73cd6e:{c.instructions+=14;NFSU2_TR(0x73cd6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73cd71:{NFSU2_TR(0x73cd71);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73cd74:{NFSU2_TR(0x73cd74);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B73cd76:{NFSU2_TR(0x73cd76);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1f0ull))));
}
B73cd7b:{NFSU2_TR(0x73cd7b);
__builtin_memmove((R+28),(R+4),4);
}
B73cd7d:{NFSU2_TR(0x73cd7d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B73cd7f:{NFSU2_TR(0x73cd7f);
__builtin_memmove((R+0),(R+28),4);
}
B73cd81:{NFSU2_TR(0x73cd81);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73cd84:{NFSU2_TR(0x73cd84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73cd87:{NFSU2_TR(0x73cd87);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73cd8a:{NFSU2_TR(0x73cd8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cd8d:{NFSU2_TR(0x73cd8d);
__builtin_memmove((R+28),gp(0x8b7bb0),4);
}
B73cd93:{NFSU2_TR(0x73cd93);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cd97:{NFSU2_TR(0x73cd97);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73cd9f:L73cd9f:{c.instructions+=6;NFSU2_TR(0x73cd9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cda2:{NFSU2_TR(0x73cda2);
__builtin_memmove((R+4),(R+0),4);
}
B73cda4:{NFSU2_TR(0x73cda4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B73cda7:{NFSU2_TR(0x73cda7);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73cdaa:{NFSU2_TR(0x73cdaa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73cdac:{NFSU2_TR(0x73cdac);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73cdb9;}}
}
B73cdae:L73cdae:{c.instructions+=2;NFSU2_TR(0x73cdae);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffe1full))));
}
B73cdb3:{NFSU2_TR(0x73cdb3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10ull))));
}
B73cdb6:L73cdb6:{c.instructions+=1;NFSU2_TR(0x73cdb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cdb9:L73cdb9:{c.instructions+=13;NFSU2_TR(0x73cdb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B73cdbd:{NFSU2_TR(0x73cdbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B73cdc1:{NFSU2_TR(0x73cdc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73cdc4:{NFSU2_TR(0x73cdc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cdc8:{NFSU2_TR(0x73cdc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B73cdcb:{NFSU2_TR(0x73cdcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+20,sar<u32>(r4(R+20),u64(r4(U+0))));
}
B73cdce:{NFSU2_TR(0x73cdce);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73cdd2:{NFSU2_TR(0x73cdd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cdd6:{NFSU2_TR(0x73cdd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cdda:{NFSU2_TR(0x73cdda);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73cdde:{NFSU2_TR(0x73cdde);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B73cde0:{NFSU2_TR(0x73cde0);
{u32 ea_=u32(u32(8200192u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B73cde6:{NFSU2_TR(0x73cde6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cdebull));
TAIL_STATIC(0x75bed4u,75b);
}
B73cdeb:L73cdeb:{c.instructions+=3;NFSU2_TR(0x73cdeb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73cded:{NFSU2_TR(0x73cded);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cdf1:{NFSU2_TR(0x73cdf1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73ce09;}}
}
B73cdf3:L73cdf3:{c.instructions+=3;NFSU2_TR(0x73cdf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73cdf6:{NFSU2_TR(0x73cdf6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cdf7:{NFSU2_TR(0x73cdf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cdfcull));
TAIL_STATIC(0x46c430u,46c);
}
B73cdfc:L73cdfc:{c.instructions+=3;NFSU2_TR(0x73cdfc);
__builtin_memmove((R+28),gp(0x8b7bb0),4);
}
B73ce02:{NFSU2_TR(0x73ce02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73ce05:{NFSU2_TR(0x73ce05);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ce09:L73ce09:{c.instructions+=17;NFSU2_TR(0x73ce09);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ce0d:{NFSU2_TR(0x73ce0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ce10:{NFSU2_TR(0x73ce10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73ce13:{NFSU2_TR(0x73ce13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ce16:{NFSU2_TR(0x73ce16);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73ce19:{NFSU2_TR(0x73ce19);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73ce1c:{NFSU2_TR(0x73ce1c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73ce1e:{NFSU2_TR(0x73ce1e);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B73ce22:{NFSU2_TR(0x73ce22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73ce25:{NFSU2_TR(0x73ce25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ce28:{NFSU2_TR(0x73ce28);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ce2c:{NFSU2_TR(0x73ce2c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B73ce2f:{NFSU2_TR(0x73ce2f);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B73ce33:{NFSU2_TR(0x73ce33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ce36:{NFSU2_TR(0x73ce36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ce39:{NFSU2_TR(0x73ce39);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73ce41:{NFSU2_TR(0x73ce41);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73ce7d;}}
}
B73ce43:L73ce43:{c.instructions+=3;NFSU2_TR(0x73ce43);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B73ce47:{NFSU2_TR(0x73ce47);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73ce49:{NFSU2_TR(0x73ce49);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73ce79;}}
}
B73ce4b:L73ce4b:{c.instructions+=5;NFSU2_TR(0x73ce4b);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(s32(s16(r2(U+8)))));
}
B73ce4f:{NFSU2_TR(0x73ce4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B73ce52:{NFSU2_TR(0x73ce52);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+4),(U+0),2);
}
B73ce55:{NFSU2_TR(0x73ce55);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B73ce58:{NFSU2_TR(0x73ce58);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73ce6b;}}
}
B73ce5a:L73ce5a:{c.instructions+=5;NFSU2_TR(0x73ce5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73ce5e:{NFSU2_TR(0x73ce5e);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B73ce61:{NFSU2_TR(0x73ce61);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B73ce65:{NFSU2_TR(0x73ce65);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ce69:{NFSU2_TR(0x73ce69);
{goto L73ce89;}
}
B73ce6b:L73ce6b:{c.instructions+=4;NFSU2_TR(0x73ce6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73ce6f:{NFSU2_TR(0x73ce6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73ce73:{NFSU2_TR(0x73ce73);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ce77:{NFSU2_TR(0x73ce77);
{goto L73ce89;}
}
B73ce79:L73ce79:{c.instructions+=1;NFSU2_TR(0x73ce79);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73ce7d:L73ce7d:{c.instructions+=2;NFSU2_TR(0x73ce7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73ce85:{NFSU2_TR(0x73ce85);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73ce89:L73ce89:{c.instructions+=3;NFSU2_TR(0x73ce89);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73ce8c:{NFSU2_TR(0x73ce8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73ce8e:{NFSU2_TR(0x73ce8e);
if(r1(R+518)){TAIL_STATIC(0x73d0c7u,73d);}
}
B73ce94:L73ce94:{c.instructions+=3;NFSU2_TR(0x73ce94);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73ce98:{NFSU2_TR(0x73ce98);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ce9a:{NFSU2_TR(0x73ce9a);
if(r1(R+518)){TAIL_STATIC(0x73d03bu,73d);}
}
B73cea0:L73cea0:{c.instructions+=2;NFSU2_TR(0x73cea0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cea2:{NFSU2_TR(0x73cea2);
if(r1(R+518)){TAIL_STATIC(0x73d03bu,73d);}
}
B73cea8:L73cea8:{c.instructions+=6;NFSU2_TR(0x73cea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ceab:{NFSU2_TR(0x73ceab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ceae:{NFSU2_TR(0x73ceae);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73ceb1:{NFSU2_TR(0x73ceb1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B73ceb4:{NFSU2_TR(0x73ceb4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73ceb7:{NFSU2_TR(0x73ceb7);
if(r1(R+518)){{goto L73cec7;}}
}
B73ceb9:L73ceb9:{c.instructions+=2;NFSU2_TR(0x73ceb9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cebc:{NFSU2_TR(0x73cebc);
if(r1(R+518)){{goto L73cec7;}}
}
B73cebe:L73cebe:{c.instructions+=2;NFSU2_TR(0x73cebe);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cec1:{NFSU2_TR(0x73cec1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x73d03bu,73d);}
}
B73cec7:L73cec7:{c.instructions+=6;NFSU2_TR(0x73cec7);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cecb:{NFSU2_TR(0x73cecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73cece:{NFSU2_TR(0x73cece);
__builtin_memmove((R+28),(R+12),4);
}
B73ced0:{NFSU2_TR(0x73ced0);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B73ced3:{NFSU2_TR(0x73ced3);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B73ced6:{NFSU2_TR(0x73ced6);
if(r1(R+518)){{goto L73cee6;}}
}
B73ced8:L73ced8:{c.instructions+=5;NFSU2_TR(0x73ced8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cedb:{NFSU2_TR(0x73cedb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73cedd:{NFSU2_TR(0x73cedd);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x73cedd);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x73cedd);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B73cedf:{NFSU2_TR(0x73cedf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73cee3:{NFSU2_TR(0x73cee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cee6:L73cee6:{c.instructions+=3;NFSU2_TR(0x73cee6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B73cee9:{NFSU2_TR(0x73cee9);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B73ceec:{NFSU2_TR(0x73ceec);
if(r1(R+518)){{goto L73ceff;}}
}
B73ceee:L73ceee:{c.instructions+=6;NFSU2_TR(0x73ceee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cef1:{NFSU2_TR(0x73cef1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B73cef4:{NFSU2_TR(0x73cef4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73cef6:{NFSU2_TR(0x73cef6);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x73cef6);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x73cef6);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B73cef8:{NFSU2_TR(0x73cef8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73cefc:{NFSU2_TR(0x73cefc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ceff:L73ceff:{c.instructions+=4;NFSU2_TR(0x73ceff);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cf03:{NFSU2_TR(0x73cf03);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73cf05:{NFSU2_TR(0x73cf05);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cf07:{NFSU2_TR(0x73cf07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73cf7f;}}
}
B73cf09:L73cf09:{c.instructions+=3;NFSU2_TR(0x73cf09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cf0f:{NFSU2_TR(0x73cf0f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cf11:{NFSU2_TR(0x73cf11);
if(r1(R+518)){{goto L73cf55;}}
}
B73cf13:L73cf13:{c.instructions+=4;NFSU2_TR(0x73cf13);
__builtin_memmove((R+4),gp(0x8b7bc4),4);
}
B73cf19:{NFSU2_TR(0x73cf19);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5ull))));
}
B73cf1c:{NFSU2_TR(0x73cf1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B73cf1e:{NFSU2_TR(0x73cf1e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x73d02eu,73d);}
}
B73cf24:L73cf24:{c.instructions+=5;NFSU2_TR(0x73cf24);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73cf28:{NFSU2_TR(0x73cf28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cf29:{NFSU2_TR(0x73cf29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cf2a:{NFSU2_TR(0x73cf2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cf30:{NFSU2_TR(0x73cf30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cf35ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73c970u);}goto L73c970;}
}
B73cf35:L73cf35:{c.instructions+=9;NFSU2_TR(0x73cf35);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73cf39:{NFSU2_TR(0x73cf39);
__builtin_memmove((R+4),(R+0),4);
}
B73cf3b:{NFSU2_TR(0x73cf3b);
__builtin_memmove((R+0),(R+28),4);
}
B73cf3d:{NFSU2_TR(0x73cf3d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B73cf3e:{NFSU2_TR(0x73cf3e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B73cf40:{NFSU2_TR(0x73cf40);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B73cf42:{NFSU2_TR(0x73cf42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73cf45:{NFSU2_TR(0x73cf45);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cf47:{NFSU2_TR(0x73cf47);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73cf4b;}}
}
B73cf49:L73cf49:{c.instructions+=1;NFSU2_TR(0x73cf49);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B73cf4b:L73cf4b:{c.instructions+=3;NFSU2_TR(0x73cf4b);
__builtin_memmove((R+8),gp(0x8b7bc4),4);
}
B73cf51:{NFSU2_TR(0x73cf51);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B73cf53:{NFSU2_TR(0x73cf53);
{goto L73cfb5;}
}
B73cf55:L73cf55:{c.instructions+=4;NFSU2_TR(0x73cf55);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73cf59:{NFSU2_TR(0x73cf59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cf5a:{NFSU2_TR(0x73cf5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cf5b:{NFSU2_TR(0x73cf5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cf60ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73c970u);}goto L73c970;}
}
B73cf60:L73cf60:{c.instructions+=8;NFSU2_TR(0x73cf60);
__builtin_memmove((R+4),(R+0),4);
}
B73cf62:{NFSU2_TR(0x73cf62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cf65:{NFSU2_TR(0x73cf65);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B73cf66:{NFSU2_TR(0x73cf66);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B73cf68:{NFSU2_TR(0x73cf68);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B73cf6a:{NFSU2_TR(0x73cf6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73cf6d:{NFSU2_TR(0x73cf6d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cf6f:{NFSU2_TR(0x73cf6f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73cf75;}}
}
B73cf71:L73cf71:{c.instructions+=1;NFSU2_TR(0x73cf71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B73cf75:L73cf75:{c.instructions+=3;NFSU2_TR(0x73cf75);
__builtin_memmove((R+8),gp(0x8b7bc4),4);
}
B73cf7b:{NFSU2_TR(0x73cf7b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B73cf7d:{NFSU2_TR(0x73cf7d);
{goto L73cfb5;}
}
B73cf7f:L73cf7f:{c.instructions+=2;NFSU2_TR(0x73cf7f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cf82:{NFSU2_TR(0x73cf82);
if(r1(R+518)){TAIL_STATIC(0x73d00cu,73d);}
}
B73cf88:L73cf88:{c.instructions+=2;NFSU2_TR(0x73cf88);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cf8b:{NFSU2_TR(0x73cf8b);
if(r1(R+518)){TAIL_STATIC(0x73d00cu,73d);}
}
B73cf8d:L73cf8d:{c.instructions+=2;NFSU2_TR(0x73cf8d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73cf90:{NFSU2_TR(0x73cf90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73cfb8;}}
}
B73cf92:L73cf92:{c.instructions+=3;NFSU2_TR(0x73cf92);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cf96:{NFSU2_TR(0x73cf96);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73cf98:{NFSU2_TR(0x73cf98);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73cfa9;}}
}
B73cf9a:L73cf9a:{c.instructions+=5;NFSU2_TR(0x73cf9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73cf9e:{NFSU2_TR(0x73cf9e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B73cfa1:{NFSU2_TR(0x73cfa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cfa5:{NFSU2_TR(0x73cfa5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B73cfa7:{NFSU2_TR(0x73cfa7);
{goto L73cfad;}
}
B73cfa9:L73cfa9:{c.instructions+=1;NFSU2_TR(0x73cfa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cfad:L73cfad:{c.instructions+=2;NFSU2_TR(0x73cfad);
__builtin_memmove((R+8),gp(0x8b7bc4),4);
}
B73cfb3:{NFSU2_TR(0x73cfb3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B73cfb5:L73cfb5:{c.instructions+=1;NFSU2_TR(0x73cfb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cfb8:L73cfb8:{c.instructions+=8;NFSU2_TR(0x73cfb8);
__builtin_memmove((R+8),gp(0x8b7bd0),4);
}
B73cfbe:{NFSU2_TR(0x73cfbe);
__builtin_memmove((R+4),gp(0x8b7bc4),4);
}
B73cfc4:{NFSU2_TR(0x73cfc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73cfc7:{NFSU2_TR(0x73cfc7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B73cfc9:{NFSU2_TR(0x73cfc9);
__builtin_memmove((R+8),(R+0),4);
}
B73cfcb:{NFSU2_TR(0x73cfcb);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B73cfcd:{NFSU2_TR(0x73cfcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B73cfcf:{NFSU2_TR(0x73cfcf);
if(r1(R+512)){TAIL_STATIC(0x73d067u,73d);}
}
B73cfd5:L73cfd5:{c.instructions+=14;NFSU2_TR(0x73cfd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73cfd9:{NFSU2_TR(0x73cfd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73cfdd:{NFSU2_TR(0x73cfdd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cfdf:{NFSU2_TR(0x73cfdf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cfe0:{NFSU2_TR(0x73cfe0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cfe1:{NFSU2_TR(0x73cfe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73cfe5:{NFSU2_TR(0x73cfe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cfe6:{NFSU2_TR(0x73cfe6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cfe7:{NFSU2_TR(0x73cfe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73cfea:{NFSU2_TR(0x73cfea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B73cfed:{NFSU2_TR(0x73cfed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cfee:{NFSU2_TR(0x73cfee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cfef:{NFSU2_TR(0x73cfef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73cff0:{NFSU2_TR(0x73cff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73cff5ull));
TAIL_STATIC(0x482750u,482);
}
B73cff5:L73cff5:{c.instructions+=3;NFSU2_TR(0x73cff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73cff8:{NFSU2_TR(0x73cff8);
__builtin_memmove((R+0),gp(0x8b7bc4),4);
}
B73cffd:{NFSU2_TR(0x73cffd);
__builtin_memmove(gp(0x8b7bd0),(R+0),4);
TAIL_STATIC(0x73d002u,73d);
}
XIT:NFSU2_TR_EXIT(0x73c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
