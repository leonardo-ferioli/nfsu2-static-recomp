#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_4b3(u8* __restrict R,Cpu& c);
u32 body_4b4(u8* __restrict R,Cpu& c);
u32 body_4ce(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4cd,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4cd,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4cd(u8* __restrict R,Cpu& c);
u32 page_4cd(Cpu& c){return body_4cd(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4cd(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4cd000:goto L4cd000;
case 0x4cd001:c.instructions+=8;goto B4cd001;
case 0x4cd007:c.instructions+=7;goto B4cd007;
case 0x4cd008:c.instructions+=6;goto B4cd008;
case 0x4cd00e:c.instructions+=5;goto B4cd00e;
case 0x4cd00f:c.instructions+=4;goto B4cd00f;
case 0x4cd015:c.instructions+=3;goto B4cd015;
case 0x4cd016:c.instructions+=2;goto B4cd016;
case 0x4cd018:c.instructions+=1;goto B4cd018;
case 0x4cd01d:goto L4cd01d;
case 0x4cd01f:goto L4cd01f;
case 0x4cd021:goto L4cd021;
case 0x4cd023:c.instructions+=4;goto B4cd023;
case 0x4cd024:c.instructions+=3;goto B4cd024;
case 0x4cd026:c.instructions+=2;goto B4cd026;
case 0x4cd02a:c.instructions+=1;goto B4cd02a;
case 0x4cd02f:goto L4cd02f;
case 0x4cd036:c.instructions+=1;goto B4cd036;
case 0x4cd03c:goto L4cd03c;
case 0x4cd041:c.instructions+=1;goto B4cd041;
case 0x4cd046:goto L4cd046;
case 0x4cd049:c.instructions+=5;goto B4cd049;
case 0x4cd04b:c.instructions+=4;goto B4cd04b;
case 0x4cd04e:c.instructions+=3;goto B4cd04e;
case 0x4cd050:c.instructions+=2;goto B4cd050;
case 0x4cd054:c.instructions+=1;goto B4cd054;
case 0x4cd059:goto L4cd059;
case 0x4cd05c:c.instructions+=4;goto B4cd05c;
case 0x4cd060:c.instructions+=3;goto B4cd060;
case 0x4cd062:c.instructions+=2;goto B4cd062;
case 0x4cd06a:c.instructions+=1;goto B4cd06a;
case 0x4cd06c:goto L4cd06c;
case 0x4cd06e:c.instructions+=10;goto B4cd06e;
case 0x4cd074:c.instructions+=9;goto B4cd074;
case 0x4cd075:c.instructions+=8;goto B4cd075;
case 0x4cd07b:c.instructions+=7;goto B4cd07b;
case 0x4cd07c:c.instructions+=6;goto B4cd07c;
case 0x4cd082:c.instructions+=5;goto B4cd082;
case 0x4cd083:c.instructions+=4;goto B4cd083;
case 0x4cd089:c.instructions+=3;goto B4cd089;
case 0x4cd08a:c.instructions+=2;goto B4cd08a;
case 0x4cd08c:c.instructions+=1;goto B4cd08c;
case 0x4cd091:goto L4cd091;
case 0x4cd093:goto L4cd093;
case 0x4cd095:goto L4cd095;
case 0x4cd097:c.instructions+=4;goto B4cd097;
case 0x4cd098:c.instructions+=3;goto B4cd098;
case 0x4cd09a:c.instructions+=2;goto B4cd09a;
case 0x4cd09e:c.instructions+=1;goto B4cd09e;
case 0x4cd0a3:goto L4cd0a3;
case 0x4cd0a5:c.instructions+=1;goto B4cd0a5;
case 0x4cd0aa:goto L4cd0aa;
case 0x4cd0ad:c.instructions+=4;goto B4cd0ad;
case 0x4cd0b1:c.instructions+=3;goto B4cd0b1;
case 0x4cd0b3:c.instructions+=2;goto B4cd0b3;
case 0x4cd0bb:c.instructions+=1;goto B4cd0bb;
case 0x4cd0bd:goto L4cd0bd;
case 0x4cd0c1:c.instructions+=11;goto B4cd0c1;
case 0x4cd0c2:c.instructions+=10;goto B4cd0c2;
case 0x4cd0c8:c.instructions+=9;goto B4cd0c8;
case 0x4cd0c9:c.instructions+=8;goto B4cd0c9;
case 0x4cd0cf:c.instructions+=7;goto B4cd0cf;
case 0x4cd0d0:c.instructions+=6;goto B4cd0d0;
case 0x4cd0d6:c.instructions+=5;goto B4cd0d6;
case 0x4cd0d7:c.instructions+=4;goto B4cd0d7;
case 0x4cd0dd:c.instructions+=3;goto B4cd0dd;
case 0x4cd0de:c.instructions+=2;goto B4cd0de;
case 0x4cd0e0:c.instructions+=1;goto B4cd0e0;
case 0x4cd0e5:goto L4cd0e5;
case 0x4cd0e7:goto L4cd0e7;
case 0x4cd0e9:c.instructions+=1;goto B4cd0e9;
case 0x4cd0ee:goto L4cd0ee;
case 0x4cd0f1:c.instructions+=4;goto B4cd0f1;
case 0x4cd0f5:c.instructions+=3;goto B4cd0f5;
case 0x4cd0f7:c.instructions+=2;goto B4cd0f7;
case 0x4cd0ff:c.instructions+=1;goto B4cd0ff;
case 0x4cd101:goto L4cd101;
case 0x4cd103:c.instructions+=10;goto B4cd103;
case 0x4cd109:c.instructions+=9;goto B4cd109;
case 0x4cd10a:c.instructions+=8;goto B4cd10a;
case 0x4cd110:c.instructions+=7;goto B4cd110;
case 0x4cd111:c.instructions+=6;goto B4cd111;
case 0x4cd117:c.instructions+=5;goto B4cd117;
case 0x4cd118:c.instructions+=4;goto B4cd118;
case 0x4cd11e:c.instructions+=3;goto B4cd11e;
case 0x4cd11f:c.instructions+=2;goto B4cd11f;
case 0x4cd121:c.instructions+=1;goto B4cd121;
case 0x4cd126:goto L4cd126;
case 0x4cd128:goto L4cd128;
case 0x4cd12a:goto L4cd12a;
case 0x4cd12c:c.instructions+=4;goto B4cd12c;
case 0x4cd12e:c.instructions+=3;goto B4cd12e;
case 0x4cd12f:c.instructions+=2;goto B4cd12f;
case 0x4cd133:c.instructions+=1;goto B4cd133;
case 0x4cd138:goto L4cd138;
case 0x4cd13a:c.instructions+=1;goto B4cd13a;
case 0x4cd13f:goto L4cd13f;
case 0x4cd141:c.instructions+=5;goto B4cd141;
case 0x4cd144:c.instructions+=4;goto B4cd144;
case 0x4cd148:c.instructions+=3;goto B4cd148;
case 0x4cd14a:c.instructions+=2;goto B4cd14a;
case 0x4cd152:c.instructions+=1;goto B4cd152;
case 0x4cd154:goto L4cd154;
case 0x4cd156:c.instructions+=10;goto B4cd156;
case 0x4cd15c:c.instructions+=9;goto B4cd15c;
case 0x4cd15d:c.instructions+=8;goto B4cd15d;
case 0x4cd163:c.instructions+=7;goto B4cd163;
case 0x4cd164:c.instructions+=6;goto B4cd164;
case 0x4cd16a:c.instructions+=5;goto B4cd16a;
case 0x4cd16b:c.instructions+=4;goto B4cd16b;
case 0x4cd171:c.instructions+=3;goto B4cd171;
case 0x4cd172:c.instructions+=2;goto B4cd172;
case 0x4cd174:c.instructions+=1;goto B4cd174;
case 0x4cd179:goto L4cd179;
case 0x4cd17f:c.instructions+=1;goto B4cd17f;
case 0x4cd181:goto L4cd181;
case 0x4cd183:goto L4cd183;
case 0x4cd185:c.instructions+=4;goto B4cd185;
case 0x4cd186:c.instructions+=3;goto B4cd186;
case 0x4cd188:c.instructions+=2;goto B4cd188;
case 0x4cd18c:c.instructions+=1;goto B4cd18c;
case 0x4cd191:goto L4cd191;
case 0x4cd198:c.instructions+=1;goto B4cd198;
case 0x4cd19e:goto L4cd19e;
case 0x4cd1a0:c.instructions+=1;goto B4cd1a0;
case 0x4cd1a5:goto L4cd1a5;
case 0x4cd1a8:c.instructions+=4;goto B4cd1a8;
case 0x4cd1ac:c.instructions+=3;goto B4cd1ac;
case 0x4cd1ae:c.instructions+=2;goto B4cd1ae;
case 0x4cd1b6:c.instructions+=1;goto B4cd1b6;
case 0x4cd1b8:goto L4cd1b8;
case 0x4cd1ba:c.instructions+=10;goto B4cd1ba;
case 0x4cd1c0:c.instructions+=9;goto B4cd1c0;
case 0x4cd1c1:c.instructions+=8;goto B4cd1c1;
case 0x4cd1c7:c.instructions+=7;goto B4cd1c7;
case 0x4cd1c8:c.instructions+=6;goto B4cd1c8;
case 0x4cd1ce:c.instructions+=5;goto B4cd1ce;
case 0x4cd1cf:c.instructions+=4;goto B4cd1cf;
case 0x4cd1d5:c.instructions+=3;goto B4cd1d5;
case 0x4cd1d6:c.instructions+=2;goto B4cd1d6;
case 0x4cd1d8:c.instructions+=1;goto B4cd1d8;
case 0x4cd1dd:goto L4cd1dd;
case 0x4cd1df:goto L4cd1df;
case 0x4cd1e1:goto L4cd1e1;
case 0x4cd1e3:c.instructions+=4;goto B4cd1e3;
case 0x4cd1e4:c.instructions+=3;goto B4cd1e4;
case 0x4cd1e6:c.instructions+=2;goto B4cd1e6;
case 0x4cd1ea:c.instructions+=1;goto B4cd1ea;
case 0x4cd1ef:goto L4cd1ef;
case 0x4cd1f1:c.instructions+=1;goto B4cd1f1;
case 0x4cd1f6:goto L4cd1f6;
case 0x4cd1f9:c.instructions+=4;goto B4cd1f9;
case 0x4cd1fd:c.instructions+=3;goto B4cd1fd;
case 0x4cd1ff:c.instructions+=2;goto B4cd1ff;
case 0x4cd207:c.instructions+=1;goto B4cd207;
case 0x4cd209:goto L4cd209;
case 0x4cd20b:c.instructions+=10;goto B4cd20b;
case 0x4cd211:c.instructions+=9;goto B4cd211;
case 0x4cd212:c.instructions+=8;goto B4cd212;
case 0x4cd218:c.instructions+=7;goto B4cd218;
case 0x4cd219:c.instructions+=6;goto B4cd219;
case 0x4cd21f:c.instructions+=5;goto B4cd21f;
case 0x4cd220:c.instructions+=4;goto B4cd220;
case 0x4cd226:c.instructions+=3;goto B4cd226;
case 0x4cd227:c.instructions+=2;goto B4cd227;
case 0x4cd229:c.instructions+=1;goto B4cd229;
case 0x4cd22e:goto L4cd22e;
case 0x4cd230:goto L4cd230;
case 0x4cd232:goto L4cd232;
case 0x4cd234:c.instructions+=4;goto B4cd234;
case 0x4cd235:c.instructions+=3;goto B4cd235;
case 0x4cd237:c.instructions+=2;goto B4cd237;
case 0x4cd23b:c.instructions+=1;goto B4cd23b;
case 0x4cd240:goto L4cd240;
case 0x4cd242:c.instructions+=1;goto B4cd242;
case 0x4cd247:goto L4cd247;
case 0x4cd249:c.instructions+=5;goto B4cd249;
case 0x4cd24c:c.instructions+=4;goto B4cd24c;
case 0x4cd250:c.instructions+=3;goto B4cd250;
case 0x4cd252:c.instructions+=2;goto B4cd252;
case 0x4cd25a:c.instructions+=1;goto B4cd25a;
case 0x4cd25c:goto L4cd25c;
case 0x4cd25e:c.instructions+=10;goto B4cd25e;
case 0x4cd264:c.instructions+=9;goto B4cd264;
case 0x4cd265:c.instructions+=8;goto B4cd265;
case 0x4cd26b:c.instructions+=7;goto B4cd26b;
case 0x4cd26c:c.instructions+=6;goto B4cd26c;
case 0x4cd272:c.instructions+=5;goto B4cd272;
case 0x4cd273:c.instructions+=4;goto B4cd273;
case 0x4cd279:c.instructions+=3;goto B4cd279;
case 0x4cd27a:c.instructions+=2;goto B4cd27a;
case 0x4cd27c:c.instructions+=1;goto B4cd27c;
case 0x4cd281:goto L4cd281;
case 0x4cd287:c.instructions+=1;goto B4cd287;
case 0x4cd289:goto L4cd289;
case 0x4cd28b:goto L4cd28b;
case 0x4cd28d:c.instructions+=4;goto B4cd28d;
case 0x4cd28e:c.instructions+=3;goto B4cd28e;
case 0x4cd290:c.instructions+=2;goto B4cd290;
case 0x4cd294:c.instructions+=1;goto B4cd294;
case 0x4cd299:goto L4cd299;
case 0x4cd29a:c.instructions+=6;goto B4cd29a;
case 0x4cd29b:c.instructions+=5;goto B4cd29b;
case 0x4cd29c:c.instructions+=4;goto B4cd29c;
case 0x4cd2a0:c.instructions+=3;goto B4cd2a0;
case 0x4cd2a7:c.instructions+=2;goto B4cd2a7;
case 0x4cd2aa:c.instructions+=1;goto B4cd2aa;
case 0x4cd2ab:goto L4cd2ab;
case 0x4cd2ad:c.instructions+=1;goto B4cd2ad;
case 0x4cd2b2:goto L4cd2b2;
case 0x4cd2b6:c.instructions+=4;goto B4cd2b6;
case 0x4cd2b7:c.instructions+=3;goto B4cd2b7;
case 0x4cd2be:c.instructions+=2;goto B4cd2be;
case 0x4cd2c1:c.instructions+=1;goto B4cd2c1;
case 0x4cd2d0:goto L4cd2d0;
case 0x4cd2d2:c.instructions+=10;goto B4cd2d2;
case 0x4cd2d7:c.instructions+=9;goto B4cd2d7;
case 0x4cd2dd:c.instructions+=8;goto B4cd2dd;
case 0x4cd2de:c.instructions+=7;goto B4cd2de;
case 0x4cd2e5:c.instructions+=6;goto B4cd2e5;
case 0x4cd2e6:c.instructions+=5;goto B4cd2e6;
case 0x4cd2eb:c.instructions+=4;goto B4cd2eb;
case 0x4cd2ee:c.instructions+=3;goto B4cd2ee;
case 0x4cd2ef:c.instructions+=2;goto B4cd2ef;
case 0x4cd2f1:c.instructions+=1;goto B4cd2f1;
case 0x4cd2f7:goto L4cd2f7;
case 0x4cd2fc:c.instructions+=1;goto B4cd2fc;
case 0x4cd302:goto L4cd302;
case 0x4cd307:c.instructions+=1;goto B4cd307;
case 0x4cd30c:goto L4cd30c;
case 0x4cd30f:c.instructions+=2;goto B4cd30f;
case 0x4cd310:c.instructions+=1;goto B4cd310;
case 0x4cd315:goto L4cd315;
case 0x4cd31b:c.instructions+=3;goto B4cd31b;
case 0x4cd31e:c.instructions+=2;goto B4cd31e;
case 0x4cd321:c.instructions+=1;goto B4cd321;
case 0x4cd323:goto L4cd323;
case 0x4cd32a:c.instructions+=5;goto B4cd32a;
case 0x4cd32c:c.instructions+=4;goto B4cd32c;
case 0x4cd32e:c.instructions+=3;goto B4cd32e;
case 0x4cd32f:c.instructions+=2;goto B4cd32f;
case 0x4cd331:c.instructions+=1;goto B4cd331;
case 0x4cd336:goto L4cd336;
case 0x4cd339:c.instructions+=2;goto B4cd339;
case 0x4cd33b:c.instructions+=1;goto B4cd33b;
case 0x4cd33d:goto L4cd33d;
case 0x4cd33f:c.instructions+=1;goto B4cd33f;
case 0x4cd344:goto L4cd344;
case 0x4cd347:c.instructions+=4;goto B4cd347;
case 0x4cd34b:c.instructions+=3;goto B4cd34b;
case 0x4cd34d:c.instructions+=2;goto B4cd34d;
case 0x4cd355:c.instructions+=1;goto B4cd355;
case 0x4cd357:goto L4cd357;
case 0x4cd359:c.instructions+=10;goto B4cd359;
case 0x4cd35f:c.instructions+=9;goto B4cd35f;
case 0x4cd360:c.instructions+=8;goto B4cd360;
case 0x4cd366:c.instructions+=7;goto B4cd366;
case 0x4cd367:c.instructions+=6;goto B4cd367;
case 0x4cd36d:c.instructions+=5;goto B4cd36d;
case 0x4cd36e:c.instructions+=4;goto B4cd36e;
case 0x4cd374:c.instructions+=3;goto B4cd374;
case 0x4cd375:c.instructions+=2;goto B4cd375;
case 0x4cd377:c.instructions+=1;goto B4cd377;
case 0x4cd37c:goto L4cd37c;
case 0x4cd37e:goto L4cd37e;
case 0x4cd380:goto L4cd380;
case 0x4cd382:c.instructions+=4;goto B4cd382;
case 0x4cd383:c.instructions+=3;goto B4cd383;
case 0x4cd385:c.instructions+=2;goto B4cd385;
case 0x4cd38d:c.instructions+=1;goto B4cd38d;
case 0x4cd392:goto L4cd392;
case 0x4cd393:c.instructions+=2;goto B4cd393;
case 0x4cd395:c.instructions+=1;goto B4cd395;
case 0x4cd39a:goto L4cd39a;
case 0x4cd39c:c.instructions+=5;goto B4cd39c;
case 0x4cd39f:c.instructions+=4;goto B4cd39f;
case 0x4cd3a3:c.instructions+=3;goto B4cd3a3;
case 0x4cd3a5:c.instructions+=2;goto B4cd3a5;
case 0x4cd3ad:c.instructions+=1;goto B4cd3ad;
case 0x4cd3af:goto L4cd3af;
case 0x4cd3b1:c.instructions+=10;goto B4cd3b1;
case 0x4cd3b7:c.instructions+=9;goto B4cd3b7;
case 0x4cd3b8:c.instructions+=8;goto B4cd3b8;
case 0x4cd3be:c.instructions+=7;goto B4cd3be;
case 0x4cd3bf:c.instructions+=6;goto B4cd3bf;
case 0x4cd3c5:c.instructions+=5;goto B4cd3c5;
case 0x4cd3c6:c.instructions+=4;goto B4cd3c6;
case 0x4cd3cc:c.instructions+=3;goto B4cd3cc;
case 0x4cd3cd:c.instructions+=2;goto B4cd3cd;
case 0x4cd3cf:c.instructions+=1;goto B4cd3cf;
case 0x4cd3d4:goto L4cd3d4;
case 0x4cd3da:c.instructions+=1;goto B4cd3da;
case 0x4cd3dc:goto L4cd3dc;
case 0x4cd3de:goto L4cd3de;
case 0x4cd3e0:c.instructions+=4;goto B4cd3e0;
case 0x4cd3e1:c.instructions+=3;goto B4cd3e1;
case 0x4cd3e3:c.instructions+=2;goto B4cd3e3;
case 0x4cd3eb:c.instructions+=1;goto B4cd3eb;
case 0x4cd3f0:goto L4cd3f0;
case 0x4cd3f7:c.instructions+=1;goto B4cd3f7;
case 0x4cd3fd:goto L4cd3fd;
case 0x4cd3ff:c.instructions+=1;goto B4cd3ff;
case 0x4cd404:goto L4cd404;
case 0x4cd407:c.instructions+=4;goto B4cd407;
case 0x4cd40b:c.instructions+=3;goto B4cd40b;
case 0x4cd40d:c.instructions+=2;goto B4cd40d;
case 0x4cd415:c.instructions+=1;goto B4cd415;
case 0x4cd417:goto L4cd417;
case 0x4cd419:c.instructions+=10;goto B4cd419;
case 0x4cd41f:c.instructions+=9;goto B4cd41f;
case 0x4cd420:c.instructions+=8;goto B4cd420;
case 0x4cd426:c.instructions+=7;goto B4cd426;
case 0x4cd427:c.instructions+=6;goto B4cd427;
case 0x4cd42d:c.instructions+=5;goto B4cd42d;
case 0x4cd42e:c.instructions+=4;goto B4cd42e;
case 0x4cd434:c.instructions+=3;goto B4cd434;
case 0x4cd435:c.instructions+=2;goto B4cd435;
case 0x4cd437:c.instructions+=1;goto B4cd437;
case 0x4cd43c:goto L4cd43c;
case 0x4cd43e:goto L4cd43e;
case 0x4cd440:goto L4cd440;
case 0x4cd442:c.instructions+=5;goto B4cd442;
case 0x4cd445:c.instructions+=4;goto B4cd445;
case 0x4cd446:c.instructions+=3;goto B4cd446;
case 0x4cd448:c.instructions+=2;goto B4cd448;
case 0x4cd44c:c.instructions+=1;goto B4cd44c;
case 0x4cd451:goto L4cd451;
case 0x4cd453:c.instructions+=1;goto B4cd453;
case 0x4cd458:goto L4cd458;
case 0x4cd45b:c.instructions+=4;goto B4cd45b;
case 0x4cd45f:c.instructions+=3;goto B4cd45f;
case 0x4cd461:c.instructions+=2;goto B4cd461;
case 0x4cd469:c.instructions+=1;goto B4cd469;
case 0x4cd46b:goto L4cd46b;
case 0x4cd46d:c.instructions+=10;goto B4cd46d;
case 0x4cd473:c.instructions+=9;goto B4cd473;
case 0x4cd474:c.instructions+=8;goto B4cd474;
case 0x4cd47a:c.instructions+=7;goto B4cd47a;
case 0x4cd47b:c.instructions+=6;goto B4cd47b;
case 0x4cd481:c.instructions+=5;goto B4cd481;
case 0x4cd482:c.instructions+=4;goto B4cd482;
case 0x4cd488:c.instructions+=3;goto B4cd488;
case 0x4cd489:c.instructions+=2;goto B4cd489;
case 0x4cd48b:c.instructions+=1;goto B4cd48b;
case 0x4cd490:goto L4cd490;
case 0x4cd492:goto L4cd492;
case 0x4cd494:goto L4cd494;
case 0x4cd496:c.instructions+=4;goto B4cd496;
case 0x4cd497:c.instructions+=3;goto B4cd497;
case 0x4cd499:c.instructions+=2;goto B4cd499;
case 0x4cd49d:c.instructions+=1;goto B4cd49d;
case 0x4cd4a2:goto L4cd4a2;
case 0x4cd4a4:c.instructions+=1;goto B4cd4a4;
case 0x4cd4a9:goto L4cd4a9;
case 0x4cd4ab:c.instructions+=5;goto B4cd4ab;
case 0x4cd4ae:c.instructions+=4;goto B4cd4ae;
case 0x4cd4b2:c.instructions+=3;goto B4cd4b2;
case 0x4cd4b4:c.instructions+=2;goto B4cd4b4;
case 0x4cd4bc:c.instructions+=1;goto B4cd4bc;
case 0x4cd4be:goto L4cd4be;
case 0x4cd4c0:c.instructions+=10;goto B4cd4c0;
case 0x4cd4c6:c.instructions+=9;goto B4cd4c6;
case 0x4cd4c7:c.instructions+=8;goto B4cd4c7;
case 0x4cd4cd:c.instructions+=7;goto B4cd4cd;
case 0x4cd4ce:c.instructions+=6;goto B4cd4ce;
case 0x4cd4d4:c.instructions+=5;goto B4cd4d4;
case 0x4cd4d5:c.instructions+=4;goto B4cd4d5;
case 0x4cd4db:c.instructions+=3;goto B4cd4db;
case 0x4cd4dc:c.instructions+=2;goto B4cd4dc;
case 0x4cd4de:c.instructions+=1;goto B4cd4de;
case 0x4cd4e3:goto L4cd4e3;
case 0x4cd4e9:c.instructions+=1;goto B4cd4e9;
case 0x4cd4eb:goto L4cd4eb;
case 0x4cd4ed:goto L4cd4ed;
case 0x4cd4ef:c.instructions+=4;goto B4cd4ef;
case 0x4cd4f0:c.instructions+=3;goto B4cd4f0;
case 0x4cd4f2:c.instructions+=2;goto B4cd4f2;
case 0x4cd4fa:c.instructions+=1;goto B4cd4fa;
case 0x4cd4ff:goto L4cd4ff;
case 0x4cd500:c.instructions+=5;goto B4cd500;
case 0x4cd501:c.instructions+=4;goto B4cd501;
case 0x4cd505:c.instructions+=3;goto B4cd505;
case 0x4cd50c:c.instructions+=2;goto B4cd50c;
case 0x4cd50f:c.instructions+=1;goto B4cd50f;
case 0x4cd510:goto L4cd510;
case 0x4cd512:c.instructions+=1;goto B4cd512;
case 0x4cd517:goto L4cd517;
case 0x4cd51b:c.instructions+=4;goto B4cd51b;
case 0x4cd51c:c.instructions+=3;goto B4cd51c;
case 0x4cd523:c.instructions+=2;goto B4cd523;
case 0x4cd526:c.instructions+=1;goto B4cd526;
case 0x4cd530:goto L4cd530;
case 0x4cd532:c.instructions+=10;goto B4cd532;
case 0x4cd537:c.instructions+=9;goto B4cd537;
case 0x4cd53d:c.instructions+=8;goto B4cd53d;
case 0x4cd53e:c.instructions+=7;goto B4cd53e;
case 0x4cd545:c.instructions+=6;goto B4cd545;
case 0x4cd546:c.instructions+=5;goto B4cd546;
case 0x4cd54b:c.instructions+=4;goto B4cd54b;
case 0x4cd54e:c.instructions+=3;goto B4cd54e;
case 0x4cd54f:c.instructions+=2;goto B4cd54f;
case 0x4cd551:c.instructions+=1;goto B4cd551;
case 0x4cd557:goto L4cd557;
case 0x4cd55c:c.instructions+=1;goto B4cd55c;
case 0x4cd562:goto L4cd562;
case 0x4cd563:c.instructions+=2;goto B4cd563;
case 0x4cd568:c.instructions+=1;goto B4cd568;
case 0x4cd56d:goto L4cd56d;
case 0x4cd570:c.instructions+=2;goto B4cd570;
case 0x4cd571:c.instructions+=1;goto B4cd571;
case 0x4cd576:goto L4cd576;
case 0x4cd578:c.instructions+=4;goto B4cd578;
case 0x4cd57e:c.instructions+=3;goto B4cd57e;
case 0x4cd581:c.instructions+=2;goto B4cd581;
case 0x4cd583:c.instructions+=1;goto B4cd583;
case 0x4cd585:goto L4cd585;
case 0x4cd58c:c.instructions+=5;goto B4cd58c;
case 0x4cd58e:c.instructions+=4;goto B4cd58e;
case 0x4cd590:c.instructions+=3;goto B4cd590;
case 0x4cd591:c.instructions+=2;goto B4cd591;
case 0x4cd593:c.instructions+=1;goto B4cd593;
case 0x4cd598:goto L4cd598;
case 0x4cd59b:c.instructions+=2;goto B4cd59b;
case 0x4cd59d:c.instructions+=1;goto B4cd59d;
case 0x4cd59f:goto L4cd59f;
case 0x4cd5a1:c.instructions+=1;goto B4cd5a1;
case 0x4cd5a6:goto L4cd5a6;
case 0x4cd5a9:c.instructions+=4;goto B4cd5a9;
case 0x4cd5ad:c.instructions+=3;goto B4cd5ad;
case 0x4cd5af:c.instructions+=2;goto B4cd5af;
case 0x4cd5b7:c.instructions+=1;goto B4cd5b7;
case 0x4cd5b9:goto L4cd5b9;
case 0x4cd5bb:c.instructions+=10;goto B4cd5bb;
case 0x4cd5c1:c.instructions+=9;goto B4cd5c1;
case 0x4cd5c2:c.instructions+=8;goto B4cd5c2;
case 0x4cd5c8:c.instructions+=7;goto B4cd5c8;
case 0x4cd5c9:c.instructions+=6;goto B4cd5c9;
case 0x4cd5cf:c.instructions+=5;goto B4cd5cf;
case 0x4cd5d0:c.instructions+=4;goto B4cd5d0;
case 0x4cd5d6:c.instructions+=3;goto B4cd5d6;
case 0x4cd5d7:c.instructions+=2;goto B4cd5d7;
case 0x4cd5d9:c.instructions+=1;goto B4cd5d9;
case 0x4cd5de:goto L4cd5de;
case 0x4cd5e0:goto L4cd5e0;
case 0x4cd5e2:goto L4cd5e2;
case 0x4cd5e4:c.instructions+=4;goto B4cd5e4;
case 0x4cd5e5:c.instructions+=3;goto B4cd5e5;
case 0x4cd5e7:c.instructions+=2;goto B4cd5e7;
case 0x4cd5ef:c.instructions+=1;goto B4cd5ef;
case 0x4cd5f4:goto L4cd5f4;
case 0x4cd5fb:c.instructions+=2;goto B4cd5fb;
case 0x4cd600:c.instructions+=1;goto B4cd600;
case 0x4cd602:goto L4cd602;
case 0x4cd607:c.instructions+=1;goto B4cd607;
case 0x4cd609:goto L4cd609;
case 0x4cd60b:c.instructions+=1;goto B4cd60b;
case 0x4cd610:goto L4cd610;
case 0x4cd612:c.instructions+=5;goto B4cd612;
case 0x4cd615:c.instructions+=4;goto B4cd615;
case 0x4cd619:c.instructions+=3;goto B4cd619;
case 0x4cd61b:c.instructions+=2;goto B4cd61b;
case 0x4cd623:c.instructions+=1;goto B4cd623;
case 0x4cd625:goto L4cd625;
case 0x4cd627:c.instructions+=10;goto B4cd627;
case 0x4cd62d:c.instructions+=9;goto B4cd62d;
case 0x4cd62e:c.instructions+=8;goto B4cd62e;
case 0x4cd634:c.instructions+=7;goto B4cd634;
case 0x4cd635:c.instructions+=6;goto B4cd635;
case 0x4cd63b:c.instructions+=5;goto B4cd63b;
case 0x4cd63c:c.instructions+=4;goto B4cd63c;
case 0x4cd642:c.instructions+=3;goto B4cd642;
case 0x4cd643:c.instructions+=2;goto B4cd643;
case 0x4cd645:c.instructions+=1;goto B4cd645;
case 0x4cd64a:goto L4cd64a;
case 0x4cd650:c.instructions+=1;goto B4cd650;
case 0x4cd652:goto L4cd652;
case 0x4cd654:goto L4cd654;
case 0x4cd656:c.instructions+=4;goto B4cd656;
case 0x4cd657:c.instructions+=3;goto B4cd657;
case 0x4cd659:c.instructions+=2;goto B4cd659;
case 0x4cd661:c.instructions+=1;goto B4cd661;
case 0x4cd666:goto L4cd666;
case 0x4cd66d:c.instructions+=1;goto B4cd66d;
case 0x4cd673:goto L4cd673;
case 0x4cd675:c.instructions+=1;goto B4cd675;
case 0x4cd67a:goto L4cd67a;
case 0x4cd67d:c.instructions+=4;goto B4cd67d;
case 0x4cd681:c.instructions+=3;goto B4cd681;
case 0x4cd683:c.instructions+=2;goto B4cd683;
case 0x4cd68b:c.instructions+=1;goto B4cd68b;
case 0x4cd68d:goto L4cd68d;
case 0x4cd68f:c.instructions+=10;goto B4cd68f;
case 0x4cd695:c.instructions+=9;goto B4cd695;
case 0x4cd696:c.instructions+=8;goto B4cd696;
case 0x4cd69c:c.instructions+=7;goto B4cd69c;
case 0x4cd69d:c.instructions+=6;goto B4cd69d;
case 0x4cd6a3:c.instructions+=5;goto B4cd6a3;
case 0x4cd6a4:c.instructions+=4;goto B4cd6a4;
case 0x4cd6aa:c.instructions+=3;goto B4cd6aa;
case 0x4cd6ab:c.instructions+=2;goto B4cd6ab;
case 0x4cd6ad:c.instructions+=1;goto B4cd6ad;
case 0x4cd6b2:goto L4cd6b2;
case 0x4cd6b4:goto L4cd6b4;
case 0x4cd6b6:goto L4cd6b6;
case 0x4cd6b8:c.instructions+=5;goto B4cd6b8;
case 0x4cd6bb:c.instructions+=4;goto B4cd6bb;
case 0x4cd6bc:c.instructions+=3;goto B4cd6bc;
case 0x4cd6be:c.instructions+=2;goto B4cd6be;
case 0x4cd6c2:c.instructions+=1;goto B4cd6c2;
case 0x4cd6c7:goto L4cd6c7;
case 0x4cd6c9:c.instructions+=1;goto B4cd6c9;
case 0x4cd6ce:goto L4cd6ce;
case 0x4cd6d1:c.instructions+=4;goto B4cd6d1;
case 0x4cd6d5:c.instructions+=3;goto B4cd6d5;
case 0x4cd6d7:c.instructions+=2;goto B4cd6d7;
case 0x4cd6df:c.instructions+=1;goto B4cd6df;
case 0x4cd6e1:goto L4cd6e1;
case 0x4cd6e3:c.instructions+=10;goto B4cd6e3;
case 0x4cd6e9:c.instructions+=9;goto B4cd6e9;
case 0x4cd6ea:c.instructions+=8;goto B4cd6ea;
case 0x4cd6f0:c.instructions+=7;goto B4cd6f0;
case 0x4cd6f1:c.instructions+=6;goto B4cd6f1;
case 0x4cd6f7:c.instructions+=5;goto B4cd6f7;
case 0x4cd6f8:c.instructions+=4;goto B4cd6f8;
case 0x4cd6fe:c.instructions+=3;goto B4cd6fe;
case 0x4cd6ff:c.instructions+=2;goto B4cd6ff;
case 0x4cd701:c.instructions+=1;goto B4cd701;
case 0x4cd706:goto L4cd706;
case 0x4cd708:goto L4cd708;
case 0x4cd70a:goto L4cd70a;
case 0x4cd70c:c.instructions+=4;goto B4cd70c;
case 0x4cd70d:c.instructions+=3;goto B4cd70d;
case 0x4cd70f:c.instructions+=2;goto B4cd70f;
case 0x4cd713:c.instructions+=1;goto B4cd713;
case 0x4cd718:goto L4cd718;
case 0x4cd71a:c.instructions+=1;goto B4cd71a;
case 0x4cd71f:goto L4cd71f;
case 0x4cd721:c.instructions+=5;goto B4cd721;
case 0x4cd724:c.instructions+=4;goto B4cd724;
case 0x4cd728:c.instructions+=3;goto B4cd728;
case 0x4cd72a:c.instructions+=2;goto B4cd72a;
case 0x4cd732:c.instructions+=1;goto B4cd732;
case 0x4cd734:goto L4cd734;
case 0x4cd736:c.instructions+=10;goto B4cd736;
case 0x4cd73c:c.instructions+=9;goto B4cd73c;
case 0x4cd73d:c.instructions+=8;goto B4cd73d;
case 0x4cd743:c.instructions+=7;goto B4cd743;
case 0x4cd744:c.instructions+=6;goto B4cd744;
case 0x4cd74a:c.instructions+=5;goto B4cd74a;
case 0x4cd74b:c.instructions+=4;goto B4cd74b;
case 0x4cd751:c.instructions+=3;goto B4cd751;
case 0x4cd752:c.instructions+=2;goto B4cd752;
case 0x4cd754:c.instructions+=1;goto B4cd754;
case 0x4cd759:goto L4cd759;
case 0x4cd75f:c.instructions+=1;goto B4cd75f;
case 0x4cd761:goto L4cd761;
case 0x4cd763:goto L4cd763;
case 0x4cd765:c.instructions+=4;goto B4cd765;
case 0x4cd766:c.instructions+=3;goto B4cd766;
case 0x4cd768:c.instructions+=2;goto B4cd768;
case 0x4cd770:c.instructions+=1;goto B4cd770;
case 0x4cd775:goto L4cd775;
case 0x4cd776:c.instructions+=5;goto B4cd776;
case 0x4cd777:c.instructions+=4;goto B4cd777;
case 0x4cd77b:c.instructions+=3;goto B4cd77b;
case 0x4cd782:c.instructions+=2;goto B4cd782;
case 0x4cd785:c.instructions+=1;goto B4cd785;
case 0x4cd786:goto L4cd786;
case 0x4cd788:c.instructions+=1;goto B4cd788;
case 0x4cd78d:goto L4cd78d;
case 0x4cd791:c.instructions+=4;goto B4cd791;
case 0x4cd792:c.instructions+=3;goto B4cd792;
case 0x4cd799:c.instructions+=2;goto B4cd799;
case 0x4cd79c:c.instructions+=1;goto B4cd79c;
case 0x4cd7a0:goto L4cd7a0;
case 0x4cd7a2:c.instructions+=10;goto B4cd7a2;
case 0x4cd7a7:c.instructions+=9;goto B4cd7a7;
case 0x4cd7ad:c.instructions+=8;goto B4cd7ad;
case 0x4cd7ae:c.instructions+=7;goto B4cd7ae;
case 0x4cd7b5:c.instructions+=6;goto B4cd7b5;
case 0x4cd7b6:c.instructions+=5;goto B4cd7b6;
case 0x4cd7bb:c.instructions+=4;goto B4cd7bb;
case 0x4cd7be:c.instructions+=3;goto B4cd7be;
case 0x4cd7bf:c.instructions+=2;goto B4cd7bf;
case 0x4cd7c1:c.instructions+=1;goto B4cd7c1;
case 0x4cd7c7:goto L4cd7c7;
case 0x4cd7cc:c.instructions+=1;goto B4cd7cc;
case 0x4cd7d2:goto L4cd7d2;
case 0x4cd7d3:c.instructions+=2;goto B4cd7d3;
case 0x4cd7d8:c.instructions+=1;goto B4cd7d8;
case 0x4cd7dd:goto L4cd7dd;
case 0x4cd7e0:c.instructions+=2;goto B4cd7e0;
case 0x4cd7e1:c.instructions+=1;goto B4cd7e1;
case 0x4cd7e6:goto L4cd7e6;
case 0x4cd7e8:c.instructions+=4;goto B4cd7e8;
case 0x4cd7ee:c.instructions+=3;goto B4cd7ee;
case 0x4cd7f1:c.instructions+=2;goto B4cd7f1;
case 0x4cd7f3:c.instructions+=1;goto B4cd7f3;
case 0x4cd7f5:goto L4cd7f5;
case 0x4cd7fc:c.instructions+=5;goto B4cd7fc;
case 0x4cd7fe:c.instructions+=4;goto B4cd7fe;
case 0x4cd800:c.instructions+=3;goto B4cd800;
case 0x4cd801:c.instructions+=2;goto B4cd801;
case 0x4cd803:c.instructions+=1;goto B4cd803;
case 0x4cd808:goto L4cd808;
case 0x4cd80b:c.instructions+=2;goto B4cd80b;
case 0x4cd80d:c.instructions+=1;goto B4cd80d;
case 0x4cd80f:goto L4cd80f;
case 0x4cd811:c.instructions+=1;goto B4cd811;
case 0x4cd816:goto L4cd816;
case 0x4cd819:c.instructions+=4;goto B4cd819;
case 0x4cd81d:c.instructions+=3;goto B4cd81d;
case 0x4cd81f:c.instructions+=2;goto B4cd81f;
case 0x4cd827:c.instructions+=1;goto B4cd827;
case 0x4cd829:goto L4cd829;
case 0x4cd82b:c.instructions+=10;goto B4cd82b;
case 0x4cd831:c.instructions+=9;goto B4cd831;
case 0x4cd832:c.instructions+=8;goto B4cd832;
case 0x4cd838:c.instructions+=7;goto B4cd838;
case 0x4cd839:c.instructions+=6;goto B4cd839;
case 0x4cd83f:c.instructions+=5;goto B4cd83f;
case 0x4cd840:c.instructions+=4;goto B4cd840;
case 0x4cd846:c.instructions+=3;goto B4cd846;
case 0x4cd847:c.instructions+=2;goto B4cd847;
case 0x4cd849:c.instructions+=1;goto B4cd849;
case 0x4cd84e:goto L4cd84e;
case 0x4cd850:goto L4cd850;
case 0x4cd852:goto L4cd852;
case 0x4cd854:c.instructions+=4;goto B4cd854;
case 0x4cd855:c.instructions+=3;goto B4cd855;
case 0x4cd857:c.instructions+=2;goto B4cd857;
case 0x4cd85f:c.instructions+=1;goto B4cd85f;
case 0x4cd864:goto L4cd864;
case 0x4cd86a:c.instructions+=2;goto B4cd86a;
case 0x4cd86c:c.instructions+=1;goto B4cd86c;
case 0x4cd86e:goto L4cd86e;
case 0x4cd870:c.instructions+=1;goto B4cd870;
case 0x4cd875:goto L4cd875;
case 0x4cd878:c.instructions+=4;goto B4cd878;
case 0x4cd87c:c.instructions+=3;goto B4cd87c;
case 0x4cd87e:c.instructions+=2;goto B4cd87e;
case 0x4cd886:c.instructions+=1;goto B4cd886;
case 0x4cd888:goto L4cd888;
case 0x4cd88a:c.instructions+=10;goto B4cd88a;
case 0x4cd890:c.instructions+=9;goto B4cd890;
case 0x4cd891:c.instructions+=8;goto B4cd891;
case 0x4cd897:c.instructions+=7;goto B4cd897;
case 0x4cd898:c.instructions+=6;goto B4cd898;
case 0x4cd89e:c.instructions+=5;goto B4cd89e;
case 0x4cd89f:c.instructions+=4;goto B4cd89f;
case 0x4cd8a5:c.instructions+=3;goto B4cd8a5;
case 0x4cd8a6:c.instructions+=2;goto B4cd8a6;
case 0x4cd8a8:c.instructions+=1;goto B4cd8a8;
case 0x4cd8ad:goto L4cd8ad;
case 0x4cd8af:goto L4cd8af;
case 0x4cd8b1:goto L4cd8b1;
case 0x4cd8b3:c.instructions+=4;goto B4cd8b3;
case 0x4cd8b4:c.instructions+=3;goto B4cd8b4;
case 0x4cd8b6:c.instructions+=2;goto B4cd8b6;
case 0x4cd8be:c.instructions+=1;goto B4cd8be;
case 0x4cd8c3:goto L4cd8c3;
case 0x4cd8ca:c.instructions+=1;goto B4cd8ca;
case 0x4cd8d0:goto L4cd8d0;
case 0x4cd8d6:c.instructions+=2;goto B4cd8d6;
case 0x4cd8d8:c.instructions+=1;goto B4cd8d8;
case 0x4cd8da:goto L4cd8da;
case 0x4cd8dc:c.instructions+=1;goto B4cd8dc;
case 0x4cd8e1:goto L4cd8e1;
case 0x4cd8e4:c.instructions+=4;goto B4cd8e4;
case 0x4cd8e8:c.instructions+=3;goto B4cd8e8;
case 0x4cd8ea:c.instructions+=2;goto B4cd8ea;
case 0x4cd8f2:c.instructions+=1;goto B4cd8f2;
case 0x4cd8f4:goto L4cd8f4;
case 0x4cd8f6:c.instructions+=10;goto B4cd8f6;
case 0x4cd8fc:c.instructions+=9;goto B4cd8fc;
case 0x4cd8fd:c.instructions+=8;goto B4cd8fd;
case 0x4cd903:c.instructions+=7;goto B4cd903;
case 0x4cd904:c.instructions+=6;goto B4cd904;
case 0x4cd90a:c.instructions+=5;goto B4cd90a;
case 0x4cd90b:c.instructions+=4;goto B4cd90b;
case 0x4cd911:c.instructions+=3;goto B4cd911;
case 0x4cd912:c.instructions+=2;goto B4cd912;
case 0x4cd914:c.instructions+=1;goto B4cd914;
case 0x4cd919:goto L4cd919;
case 0x4cd91b:goto L4cd91b;
case 0x4cd91d:goto L4cd91d;
case 0x4cd91f:c.instructions+=4;goto B4cd91f;
case 0x4cd920:c.instructions+=3;goto B4cd920;
case 0x4cd922:c.instructions+=2;goto B4cd922;
case 0x4cd92a:c.instructions+=1;goto B4cd92a;
case 0x4cd92f:goto L4cd92f;
case 0x4cd931:c.instructions+=1;goto B4cd931;
case 0x4cd936:goto L4cd936;
case 0x4cd939:c.instructions+=4;goto B4cd939;
case 0x4cd93d:c.instructions+=3;goto B4cd93d;
case 0x4cd93f:c.instructions+=2;goto B4cd93f;
case 0x4cd947:c.instructions+=1;goto B4cd947;
case 0x4cd949:goto L4cd949;
case 0x4cd94b:c.instructions+=10;goto B4cd94b;
case 0x4cd951:c.instructions+=9;goto B4cd951;
case 0x4cd952:c.instructions+=8;goto B4cd952;
case 0x4cd958:c.instructions+=7;goto B4cd958;
case 0x4cd959:c.instructions+=6;goto B4cd959;
case 0x4cd95f:c.instructions+=5;goto B4cd95f;
case 0x4cd960:c.instructions+=4;goto B4cd960;
case 0x4cd966:c.instructions+=3;goto B4cd966;
case 0x4cd967:c.instructions+=2;goto B4cd967;
case 0x4cd969:c.instructions+=1;goto B4cd969;
case 0x4cd96e:goto L4cd96e;
case 0x4cd970:goto L4cd970;
case 0x4cd972:goto L4cd972;
case 0x4cd974:c.instructions+=4;goto B4cd974;
case 0x4cd975:c.instructions+=3;goto B4cd975;
case 0x4cd977:c.instructions+=2;goto B4cd977;
case 0x4cd97f:c.instructions+=1;goto B4cd97f;
case 0x4cd984:goto L4cd984;
case 0x4cd98b:c.instructions+=2;goto B4cd98b;
case 0x4cd98c:c.instructions+=1;goto B4cd98c;
case 0x4cd98e:goto L4cd98e;
case 0x4cd990:c.instructions+=1;goto B4cd990;
case 0x4cd995:goto L4cd995;
case 0x4cd998:c.instructions+=4;goto B4cd998;
case 0x4cd99c:c.instructions+=3;goto B4cd99c;
case 0x4cd99e:c.instructions+=2;goto B4cd99e;
case 0x4cd9a6:c.instructions+=1;goto B4cd9a6;
case 0x4cd9a8:goto L4cd9a8;
case 0x4cd9aa:c.instructions+=10;goto B4cd9aa;
case 0x4cd9b0:c.instructions+=9;goto B4cd9b0;
case 0x4cd9b1:c.instructions+=8;goto B4cd9b1;
case 0x4cd9b7:c.instructions+=7;goto B4cd9b7;
case 0x4cd9b8:c.instructions+=6;goto B4cd9b8;
case 0x4cd9be:c.instructions+=5;goto B4cd9be;
case 0x4cd9bf:c.instructions+=4;goto B4cd9bf;
case 0x4cd9c5:c.instructions+=3;goto B4cd9c5;
case 0x4cd9c6:c.instructions+=2;goto B4cd9c6;
case 0x4cd9c8:c.instructions+=1;goto B4cd9c8;
case 0x4cd9cd:goto L4cd9cd;
case 0x4cd9cf:goto L4cd9cf;
case 0x4cd9d1:goto L4cd9d1;
case 0x4cd9d3:c.instructions+=4;goto B4cd9d3;
case 0x4cd9d4:c.instructions+=3;goto B4cd9d4;
case 0x4cd9d6:c.instructions+=2;goto B4cd9d6;
case 0x4cd9de:c.instructions+=1;goto B4cd9de;
case 0x4cd9e3:goto L4cd9e3;
case 0x4cd9ed:c.instructions+=5;goto B4cd9ed;
case 0x4cd9ee:c.instructions+=4;goto B4cd9ee;
case 0x4cd9f2:c.instructions+=3;goto B4cd9f2;
case 0x4cd9f9:c.instructions+=2;goto B4cd9f9;
case 0x4cd9fc:c.instructions+=1;goto B4cd9fc;
case 0x4cd9fd:goto L4cd9fd;
case 0x4cd9ff:c.instructions+=1;goto B4cd9ff;
case 0x4cda04:goto L4cda04;
case 0x4cda08:c.instructions+=4;goto B4cda08;
case 0x4cda09:c.instructions+=3;goto B4cda09;
case 0x4cda10:c.instructions+=2;goto B4cda10;
case 0x4cda13:c.instructions+=1;goto B4cda13;
case 0x4cda20:goto L4cda20;
case 0x4cda22:c.instructions+=10;goto B4cda22;
case 0x4cda27:c.instructions+=9;goto B4cda27;
case 0x4cda2d:c.instructions+=8;goto B4cda2d;
case 0x4cda2e:c.instructions+=7;goto B4cda2e;
case 0x4cda35:c.instructions+=6;goto B4cda35;
case 0x4cda36:c.instructions+=5;goto B4cda36;
case 0x4cda3b:c.instructions+=4;goto B4cda3b;
case 0x4cda3e:c.instructions+=3;goto B4cda3e;
case 0x4cda3f:c.instructions+=2;goto B4cda3f;
case 0x4cda41:c.instructions+=1;goto B4cda41;
case 0x4cda47:goto L4cda47;
case 0x4cda4c:c.instructions+=1;goto B4cda4c;
case 0x4cda52:goto L4cda52;
case 0x4cda53:c.instructions+=2;goto B4cda53;
case 0x4cda55:c.instructions+=1;goto B4cda55;
case 0x4cda5a:goto L4cda5a;
case 0x4cda5c:c.instructions+=5;goto B4cda5c;
case 0x4cda5f:c.instructions+=4;goto B4cda5f;
case 0x4cda63:c.instructions+=3;goto B4cda63;
case 0x4cda65:c.instructions+=2;goto B4cda65;
case 0x4cda6d:c.instructions+=1;goto B4cda6d;
case 0x4cda6f:goto L4cda6f;
case 0x4cda71:c.instructions+=10;goto B4cda71;
case 0x4cda77:c.instructions+=9;goto B4cda77;
case 0x4cda78:c.instructions+=8;goto B4cda78;
case 0x4cda7e:c.instructions+=7;goto B4cda7e;
case 0x4cda7f:c.instructions+=6;goto B4cda7f;
case 0x4cda85:c.instructions+=5;goto B4cda85;
case 0x4cda86:c.instructions+=4;goto B4cda86;
case 0x4cda8c:c.instructions+=3;goto B4cda8c;
case 0x4cda8d:c.instructions+=2;goto B4cda8d;
case 0x4cda8f:c.instructions+=1;goto B4cda8f;
case 0x4cda94:goto L4cda94;
case 0x4cda9a:c.instructions+=1;goto B4cda9a;
case 0x4cda9c:goto L4cda9c;
case 0x4cda9e:goto L4cda9e;
case 0x4cdaa0:c.instructions+=4;goto B4cdaa0;
case 0x4cdaa1:c.instructions+=3;goto B4cdaa1;
case 0x4cdaa3:c.instructions+=2;goto B4cdaa3;
case 0x4cdaab:c.instructions+=1;goto B4cdaab;
case 0x4cdab0:goto L4cdab0;
case 0x4cdab2:c.instructions+=1;goto B4cdab2;
case 0x4cdab7:goto L4cdab7;
case 0x4cdab9:c.instructions+=5;goto B4cdab9;
case 0x4cdabc:c.instructions+=4;goto B4cdabc;
case 0x4cdac0:c.instructions+=3;goto B4cdac0;
case 0x4cdac2:c.instructions+=2;goto B4cdac2;
case 0x4cdaca:c.instructions+=1;goto B4cdaca;
case 0x4cdacc:goto L4cdacc;
case 0x4cdace:c.instructions+=10;goto B4cdace;
case 0x4cdad4:c.instructions+=9;goto B4cdad4;
case 0x4cdad5:c.instructions+=8;goto B4cdad5;
case 0x4cdadb:c.instructions+=7;goto B4cdadb;
case 0x4cdadc:c.instructions+=6;goto B4cdadc;
case 0x4cdae2:c.instructions+=5;goto B4cdae2;
case 0x4cdae3:c.instructions+=4;goto B4cdae3;
case 0x4cdae9:c.instructions+=3;goto B4cdae9;
case 0x4cdaea:c.instructions+=2;goto B4cdaea;
case 0x4cdaec:c.instructions+=1;goto B4cdaec;
case 0x4cdaf1:goto L4cdaf1;
case 0x4cdaf7:c.instructions+=1;goto B4cdaf7;
case 0x4cdaf9:goto L4cdaf9;
case 0x4cdafb:goto L4cdafb;
case 0x4cdafd:c.instructions+=4;goto B4cdafd;
case 0x4cdafe:c.instructions+=3;goto B4cdafe;
case 0x4cdb00:c.instructions+=2;goto B4cdb00;
case 0x4cdb08:c.instructions+=1;goto B4cdb08;
case 0x4cdb0d:goto L4cdb0d;
case 0x4cdb0e:c.instructions+=5;goto B4cdb0e;
case 0x4cdb0f:c.instructions+=4;goto B4cdb0f;
case 0x4cdb13:c.instructions+=3;goto B4cdb13;
case 0x4cdb1a:c.instructions+=2;goto B4cdb1a;
case 0x4cdb1d:c.instructions+=1;goto B4cdb1d;
case 0x4cdb1e:goto L4cdb1e;
case 0x4cdb20:c.instructions+=1;goto B4cdb20;
case 0x4cdb25:goto L4cdb25;
case 0x4cdb29:c.instructions+=4;goto B4cdb29;
case 0x4cdb2a:c.instructions+=3;goto B4cdb2a;
case 0x4cdb31:c.instructions+=2;goto B4cdb31;
case 0x4cdb34:c.instructions+=1;goto B4cdb34;
case 0x4cdb40:goto L4cdb40;
case 0x4cdb42:c.instructions+=10;goto B4cdb42;
case 0x4cdb47:c.instructions+=9;goto B4cdb47;
case 0x4cdb4d:c.instructions+=8;goto B4cdb4d;
case 0x4cdb4e:c.instructions+=7;goto B4cdb4e;
case 0x4cdb55:c.instructions+=6;goto B4cdb55;
case 0x4cdb56:c.instructions+=5;goto B4cdb56;
case 0x4cdb5b:c.instructions+=4;goto B4cdb5b;
case 0x4cdb5e:c.instructions+=3;goto B4cdb5e;
case 0x4cdb5f:c.instructions+=2;goto B4cdb5f;
case 0x4cdb61:c.instructions+=1;goto B4cdb61;
case 0x4cdb67:goto L4cdb67;
case 0x4cdb6c:c.instructions+=1;goto B4cdb6c;
case 0x4cdb72:goto L4cdb72;
case 0x4cdb73:c.instructions+=3;goto B4cdb73;
case 0x4cdb74:c.instructions+=2;goto B4cdb74;
case 0x4cdb79:c.instructions+=1;goto B4cdb79;
case 0x4cdb7e:goto L4cdb7e;
case 0x4cdb81:c.instructions+=2;goto B4cdb81;
case 0x4cdb82:c.instructions+=1;goto B4cdb82;
case 0x4cdb87:goto L4cdb87;
case 0x4cdb8d:c.instructions+=4;goto B4cdb8d;
case 0x4cdb90:c.instructions+=3;goto B4cdb90;
case 0x4cdb93:c.instructions+=2;goto B4cdb93;
case 0x4cdb96:c.instructions+=1;goto B4cdb96;
case 0x4cdb98:goto L4cdb98;
case 0x4cdb9f:c.instructions+=5;goto B4cdb9f;
case 0x4cdba1:c.instructions+=4;goto B4cdba1;
case 0x4cdba3:c.instructions+=3;goto B4cdba3;
case 0x4cdba4:c.instructions+=2;goto B4cdba4;
case 0x4cdba6:c.instructions+=1;goto B4cdba6;
case 0x4cdbab:goto L4cdbab;
case 0x4cdbae:c.instructions+=2;goto B4cdbae;
case 0x4cdbb0:c.instructions+=1;goto B4cdbb0;
case 0x4cdbb2:goto L4cdbb2;
case 0x4cdbb4:c.instructions+=1;goto B4cdbb4;
case 0x4cdbb9:goto L4cdbb9;
case 0x4cdbbc:c.instructions+=4;goto B4cdbbc;
case 0x4cdbc0:c.instructions+=3;goto B4cdbc0;
case 0x4cdbc2:c.instructions+=2;goto B4cdbc2;
case 0x4cdbca:c.instructions+=1;goto B4cdbca;
case 0x4cdbcc:goto L4cdbcc;
case 0x4cdbce:c.instructions+=10;goto B4cdbce;
case 0x4cdbd4:c.instructions+=9;goto B4cdbd4;
case 0x4cdbd5:c.instructions+=8;goto B4cdbd5;
case 0x4cdbdb:c.instructions+=7;goto B4cdbdb;
case 0x4cdbdc:c.instructions+=6;goto B4cdbdc;
case 0x4cdbe2:c.instructions+=5;goto B4cdbe2;
case 0x4cdbe3:c.instructions+=4;goto B4cdbe3;
case 0x4cdbe9:c.instructions+=3;goto B4cdbe9;
case 0x4cdbea:c.instructions+=2;goto B4cdbea;
case 0x4cdbec:c.instructions+=1;goto B4cdbec;
case 0x4cdbf1:goto L4cdbf1;
case 0x4cdbf3:goto L4cdbf3;
case 0x4cdbf5:goto L4cdbf5;
case 0x4cdbf7:c.instructions+=4;goto B4cdbf7;
case 0x4cdbf8:c.instructions+=3;goto B4cdbf8;
case 0x4cdbfa:c.instructions+=2;goto B4cdbfa;
case 0x4cdbfe:c.instructions+=1;goto B4cdbfe;
case 0x4cdc03:goto L4cdc03;
case 0x4cdc0a:c.instructions+=1;goto B4cdc0a;
case 0x4cdc10:goto L4cdc10;
case 0x4cdc12:c.instructions+=1;goto B4cdc12;
case 0x4cdc17:goto L4cdc17;
case 0x4cdc1a:c.instructions+=4;goto B4cdc1a;
case 0x4cdc1e:c.instructions+=3;goto B4cdc1e;
case 0x4cdc20:c.instructions+=2;goto B4cdc20;
case 0x4cdc28:c.instructions+=1;goto B4cdc28;
case 0x4cdc2a:goto L4cdc2a;
case 0x4cdc2c:c.instructions+=10;goto B4cdc2c;
case 0x4cdc32:c.instructions+=9;goto B4cdc32;
case 0x4cdc33:c.instructions+=8;goto B4cdc33;
case 0x4cdc39:c.instructions+=7;goto B4cdc39;
case 0x4cdc3a:c.instructions+=6;goto B4cdc3a;
case 0x4cdc40:c.instructions+=5;goto B4cdc40;
case 0x4cdc41:c.instructions+=4;goto B4cdc41;
case 0x4cdc47:c.instructions+=3;goto B4cdc47;
case 0x4cdc48:c.instructions+=2;goto B4cdc48;
case 0x4cdc4a:c.instructions+=1;goto B4cdc4a;
case 0x4cdc4f:goto L4cdc4f;
case 0x4cdc51:goto L4cdc51;
case 0x4cdc53:goto L4cdc53;
case 0x4cdc55:c.instructions+=4;goto B4cdc55;
case 0x4cdc56:c.instructions+=3;goto B4cdc56;
case 0x4cdc58:c.instructions+=2;goto B4cdc58;
case 0x4cdc5c:c.instructions+=1;goto B4cdc5c;
case 0x4cdc61:goto L4cdc61;
case 0x4cdc63:c.instructions+=1;goto B4cdc63;
case 0x4cdc68:goto L4cdc68;
case 0x4cdc6b:c.instructions+=4;goto B4cdc6b;
case 0x4cdc6f:c.instructions+=3;goto B4cdc6f;
case 0x4cdc71:c.instructions+=2;goto B4cdc71;
case 0x4cdc79:c.instructions+=1;goto B4cdc79;
case 0x4cdc7b:goto L4cdc7b;
case 0x4cdc7d:c.instructions+=10;goto B4cdc7d;
case 0x4cdc83:c.instructions+=9;goto B4cdc83;
case 0x4cdc84:c.instructions+=8;goto B4cdc84;
case 0x4cdc8a:c.instructions+=7;goto B4cdc8a;
case 0x4cdc8b:c.instructions+=6;goto B4cdc8b;
case 0x4cdc91:c.instructions+=5;goto B4cdc91;
case 0x4cdc92:c.instructions+=4;goto B4cdc92;
case 0x4cdc98:c.instructions+=3;goto B4cdc98;
case 0x4cdc99:c.instructions+=2;goto B4cdc99;
case 0x4cdc9b:c.instructions+=1;goto B4cdc9b;
case 0x4cdca0:goto L4cdca0;
case 0x4cdca2:goto L4cdca2;
case 0x4cdca4:goto L4cdca4;
case 0x4cdca6:c.instructions+=4;goto B4cdca6;
case 0x4cdca7:c.instructions+=3;goto B4cdca7;
case 0x4cdca9:c.instructions+=2;goto B4cdca9;
case 0x4cdcad:c.instructions+=1;goto B4cdcad;
case 0x4cdcb2:goto L4cdcb2;
case 0x4cdcb4:c.instructions+=1;goto B4cdcb4;
case 0x4cdcb9:goto L4cdcb9;
case 0x4cdcbb:c.instructions+=5;goto B4cdcbb;
case 0x4cdcbe:c.instructions+=4;goto B4cdcbe;
case 0x4cdcc2:c.instructions+=3;goto B4cdcc2;
case 0x4cdcc4:c.instructions+=2;goto B4cdcc4;
case 0x4cdccc:c.instructions+=1;goto B4cdccc;
case 0x4cdcce:goto L4cdcce;
case 0x4cdcd0:c.instructions+=10;goto B4cdcd0;
case 0x4cdcd6:c.instructions+=9;goto B4cdcd6;
case 0x4cdcd7:c.instructions+=8;goto B4cdcd7;
case 0x4cdcdd:c.instructions+=7;goto B4cdcdd;
case 0x4cdcde:c.instructions+=6;goto B4cdcde;
case 0x4cdce4:c.instructions+=5;goto B4cdce4;
case 0x4cdce5:c.instructions+=4;goto B4cdce5;
case 0x4cdceb:c.instructions+=3;goto B4cdceb;
case 0x4cdcec:c.instructions+=2;goto B4cdcec;
case 0x4cdcee:c.instructions+=1;goto B4cdcee;
case 0x4cdcf3:goto L4cdcf3;
case 0x4cdcf9:c.instructions+=1;goto B4cdcf9;
case 0x4cdcfb:goto L4cdcfb;
case 0x4cdcfd:goto L4cdcfd;
case 0x4cdcff:c.instructions+=4;goto B4cdcff;
case 0x4cdd00:c.instructions+=3;goto B4cdd00;
case 0x4cdd02:c.instructions+=2;goto B4cdd02;
case 0x4cdd06:c.instructions+=1;goto B4cdd06;
case 0x4cdd0b:goto L4cdd0b;
case 0x4cdd0c:c.instructions+=6;goto B4cdd0c;
case 0x4cdd0d:c.instructions+=5;goto B4cdd0d;
case 0x4cdd0e:c.instructions+=4;goto B4cdd0e;
case 0x4cdd12:c.instructions+=3;goto B4cdd12;
case 0x4cdd19:c.instructions+=2;goto B4cdd19;
case 0x4cdd1c:c.instructions+=1;goto B4cdd1c;
case 0x4cdd1d:goto L4cdd1d;
case 0x4cdd1f:c.instructions+=1;goto B4cdd1f;
case 0x4cdd24:goto L4cdd24;
case 0x4cdd28:c.instructions+=4;goto B4cdd28;
case 0x4cdd29:c.instructions+=3;goto B4cdd29;
case 0x4cdd30:c.instructions+=2;goto B4cdd30;
case 0x4cdd33:c.instructions+=1;goto B4cdd33;
case 0x4cdd40:goto L4cdd40;
case 0x4cdd43:c.instructions+=8;goto B4cdd43;
case 0x4cdd44:c.instructions+=7;goto B4cdd44;
case 0x4cdd45:c.instructions+=6;goto B4cdd45;
case 0x4cdd47:c.instructions+=5;goto B4cdd47;
case 0x4cdd4a:c.instructions+=4;goto B4cdd4a;
case 0x4cdd4c:c.instructions+=3;goto B4cdd4c;
case 0x4cdd4e:c.instructions+=2;goto B4cdd4e;
case 0x4cdd4f:c.instructions+=1;goto B4cdd4f;
case 0x4cdd51:goto L4cdd51;
case 0x4cdd52:c.instructions+=1;goto B4cdd52;
case 0x4cdd57:goto L4cdd57;
case 0x4cdd5a:c.instructions+=1;goto B4cdd5a;
case 0x4cdd5d:goto L4cdd5d;
case 0x4cdd60:c.instructions+=1;goto B4cdd60;
case 0x4cdd66:goto L4cdd66;
case 0x4cdd69:c.instructions+=3;goto B4cdd69;
case 0x4cdd6c:c.instructions+=2;goto B4cdd6c;
case 0x4cdd6f:c.instructions+=1;goto B4cdd6f;
case 0x4cdd71:goto L4cdd71;
case 0x4cdd74:c.instructions+=2;goto B4cdd74;
case 0x4cdd75:c.instructions+=1;goto B4cdd75;
case 0x4cdd7a:goto L4cdd7a;
case 0x4cdd7d:c.instructions+=3;goto B4cdd7d;
case 0x4cdd80:c.instructions+=2;goto B4cdd80;
case 0x4cdd83:c.instructions+=1;goto B4cdd83;
case 0x4cdd88:goto L4cdd88;
case 0x4cdd8b:c.instructions+=2;goto B4cdd8b;
case 0x4cdd8d:c.instructions+=1;goto B4cdd8d;
case 0x4cdd8f:goto L4cdd8f;
case 0x4cdd92:goto L4cdd92;
case 0x4cdd95:c.instructions+=7;goto B4cdd95;
case 0x4cdd98:c.instructions+=6;goto B4cdd98;
case 0x4cdd99:c.instructions+=5;goto B4cdd99;
case 0x4cdd9c:c.instructions+=4;goto B4cdd9c;
case 0x4cdd9f:c.instructions+=3;goto B4cdd9f;
case 0x4cdda2:c.instructions+=2;goto B4cdda2;
case 0x4cdda5:c.instructions+=1;goto B4cdda5;
case 0x4cddaa:goto L4cddaa;
case 0x4cddad:c.instructions+=3;goto B4cddad;
case 0x4cddae:c.instructions+=2;goto B4cddae;
case 0x4cddb3:c.instructions+=1;goto B4cddb3;
case 0x4cddb8:goto L4cddb8;
case 0x4cddb9:c.instructions+=4;goto B4cddb9;
case 0x4cddbb:c.instructions+=3;goto B4cddbb;
case 0x4cddbc:c.instructions+=2;goto B4cddbc;
case 0x4cddbd:c.instructions+=1;goto B4cddbd;
case 0x4cddc2:goto L4cddc2;
case 0x4cddc5:c.instructions+=3;goto B4cddc5;
case 0x4cddc6:c.instructions+=2;goto B4cddc6;
case 0x4cddc7:c.instructions+=1;goto B4cddc7;
case 0x4cddcc:goto L4cddcc;
case 0x4cddd2:c.instructions+=5;goto B4cddd2;
case 0x4cddd8:c.instructions+=4;goto B4cddd8;
case 0x4cdddb:c.instructions+=3;goto B4cdddb;
case 0x4cdddd:c.instructions+=2;goto B4cdddd;
case 0x4cdde0:c.instructions+=1;goto B4cdde0;
case 0x4cdde5:goto L4cdde5;
case 0x4cdde8:c.instructions+=3;goto B4cdde8;
case 0x4cddeb:c.instructions+=2;goto B4cddeb;
case 0x4cdded:c.instructions+=1;goto B4cdded;
case 0x4cddef:goto L4cddef;
case 0x4cddf2:c.instructions+=1;goto B4cddf2;
case 0x4cddf4:goto L4cddf4;
case 0x4cddfa:goto L4cddfa;
case 0x4cddfc:c.instructions+=1;goto B4cddfc;
case 0x4cddfe:goto L4cddfe;
case 0x4cde03:c.instructions+=2;goto B4cde03;
case 0x4cde05:c.instructions+=1;goto B4cde05;
case 0x4cde0a:goto L4cde0a;
case 0x4cde0d:c.instructions+=1;goto B4cde0d;
case 0x4cde0f:goto L4cde0f;
case 0x4cde12:c.instructions+=2;goto B4cde12;
case 0x4cde14:c.instructions+=1;goto B4cde14;
case 0x4cde16:goto L4cde16;
case 0x4cde19:c.instructions+=1;goto B4cde19;
case 0x4cde1b:goto L4cde1b;
case 0x4cde1c:c.instructions+=4;goto B4cde1c;
case 0x4cde20:c.instructions+=3;goto B4cde20;
case 0x4cde25:c.instructions+=2;goto B4cde25;
case 0x4cde26:c.instructions+=1;goto B4cde26;
case 0x4cde2b:goto L4cde2b;
case 0x4cde2e:c.instructions+=10;goto B4cde2e;
case 0x4cde2f:c.instructions+=9;goto B4cde2f;
case 0x4cde30:c.instructions+=8;goto B4cde30;
case 0x4cde31:c.instructions+=7;goto B4cde31;
case 0x4cde36:c.instructions+=6;goto B4cde36;
case 0x4cde37:c.instructions+=5;goto B4cde37;
case 0x4cde3b:c.instructions+=4;goto B4cde3b;
case 0x4cde3d:c.instructions+=3;goto B4cde3d;
case 0x4cde3e:c.instructions+=2;goto B4cde3e;
case 0x4cde41:c.instructions+=1;goto B4cde41;
case 0x4cde46:goto L4cde46;
case 0x4cde49:c.instructions+=1;goto B4cde49;
case 0x4cde4c:goto L4cde4c;
case 0x4cde4f:c.instructions+=2;goto B4cde4f;
case 0x4cde51:c.instructions+=1;goto B4cde51;
case 0x4cde53:goto L4cde53;
case 0x4cde56:c.instructions+=1;goto B4cde56;
case 0x4cde58:goto L4cde58;
case 0x4cde5b:c.instructions+=1;goto B4cde5b;
case 0x4cde5d:goto L4cde5d;
case 0x4cde62:c.instructions+=2;goto B4cde62;
case 0x4cde64:c.instructions+=1;goto B4cde64;
case 0x4cde69:goto L4cde69;
case 0x4cde6a:c.instructions+=5;goto B4cde6a;
case 0x4cde6d:c.instructions+=4;goto B4cde6d;
case 0x4cde6e:c.instructions+=3;goto B4cde6e;
case 0x4cde6f:c.instructions+=2;goto B4cde6f;
case 0x4cde72:c.instructions+=1;goto B4cde72;
case 0x4cde73:goto L4cde73;
case 0x4cde79:c.instructions+=4;goto B4cde79;
case 0x4cde7c:c.instructions+=3;goto B4cde7c;
case 0x4cde7d:c.instructions+=2;goto B4cde7d;
case 0x4cde7f:c.instructions+=1;goto B4cde7f;
case 0x4cde84:goto L4cde84;
case 0x4cde86:c.instructions+=1;goto B4cde86;
case 0x4cde88:goto L4cde88;
case 0x4cde8a:c.instructions+=5;goto B4cde8a;
case 0x4cde90:c.instructions+=4;goto B4cde90;
case 0x4cde96:c.instructions+=3;goto B4cde96;
case 0x4cde98:c.instructions+=2;goto B4cde98;
case 0x4cde9b:c.instructions+=1;goto B4cde9b;
case 0x4cde9d:goto L4cde9d;
case 0x4cdea3:c.instructions+=5;goto B4cdea3;
case 0x4cdea4:c.instructions+=4;goto B4cdea4;
case 0x4cdea6:c.instructions+=3;goto B4cdea6;
case 0x4cdeac:c.instructions+=2;goto B4cdeac;
case 0x4cdeaf:c.instructions+=1;goto B4cdeaf;
case 0x4cdeb4:goto L4cdeb4;
case 0x4cdeb5:c.instructions+=4;goto B4cdeb5;
case 0x4cdeb6:c.instructions+=3;goto B4cdeb6;
case 0x4cdeb7:c.instructions+=2;goto B4cdeb7;
case 0x4cdeba:c.instructions+=1;goto B4cdeba;
case 0x4cdebb:goto L4cdebb;
case 0x4cdebd:goto L4cdebd;
case 0x4cdebe:c.instructions+=4;goto B4cdebe;
case 0x4cdebf:c.instructions+=3;goto B4cdebf;
case 0x4cdec0:c.instructions+=2;goto B4cdec0;
case 0x4cdec3:c.instructions+=1;goto B4cdec3;
case 0x4cded0:goto L4cded0;
case 0x4cded1:c.instructions+=9;goto B4cded1;
case 0x4cded6:c.instructions+=8;goto B4cded6;
case 0x4cded7:c.instructions+=7;goto B4cded7;
case 0x4cded8:c.instructions+=6;goto B4cded8;
case 0x4cded9:c.instructions+=5;goto B4cded9;
case 0x4cdedb:c.instructions+=4;goto B4cdedb;
case 0x4cdedd:c.instructions+=3;goto B4cdedd;
case 0x4cdedf:c.instructions+=2;goto B4cdedf;
case 0x4cdee3:c.instructions+=1;goto B4cdee3;
case 0x4cdee5:goto L4cdee5;
case 0x4cdee6:c.instructions+=1;goto B4cdee6;
case 0x4cdeeb:goto L4cdeeb;
case 0x4cdeee:c.instructions+=5;goto B4cdeee;
case 0x4cdef0:c.instructions+=4;goto B4cdef0;
case 0x4cdef2:c.instructions+=3;goto B4cdef2;
case 0x4cdef3:c.instructions+=2;goto B4cdef3;
case 0x4cdef5:c.instructions+=1;goto B4cdef5;
case 0x4cdefa:goto L4cdefa;
case 0x4cdefc:c.instructions+=1;goto B4cdefc;
case 0x4cdefe:goto L4cdefe;
case 0x4cdeff:c.instructions+=2;goto B4cdeff;
case 0x4cdf01:c.instructions+=1;goto B4cdf01;
case 0x4cdf06:goto L4cdf06;
case 0x4cdf0b:c.instructions+=3;goto B4cdf0b;
case 0x4cdf0c:c.instructions+=2;goto B4cdf0c;
case 0x4cdf0e:c.instructions+=1;goto B4cdf0e;
case 0x4cdf10:goto L4cdf10;
case 0x4cdf11:c.instructions+=4;goto B4cdf11;
case 0x4cdf14:c.instructions+=3;goto B4cdf14;
case 0x4cdf19:c.instructions+=2;goto B4cdf19;
case 0x4cdf1b:c.instructions+=1;goto B4cdf1b;
case 0x4cdf20:goto L4cdf20;
case 0x4cdf22:c.instructions+=2;goto B4cdf22;
case 0x4cdf24:c.instructions+=1;goto B4cdf24;
case 0x4cdf26:goto L4cdf26;
case 0x4cdf29:c.instructions+=2;goto B4cdf29;
case 0x4cdf2b:c.instructions+=1;goto B4cdf2b;
case 0x4cdf2d:goto L4cdf2d;
case 0x4cdf30:c.instructions+=1;goto B4cdf30;
case 0x4cdf32:goto L4cdf32;
case 0x4cdf39:goto L4cdf39;
case 0x4cdf3b:c.instructions+=6;goto B4cdf3b;
case 0x4cdf3d:c.instructions+=5;goto B4cdf3d;
case 0x4cdf3f:c.instructions+=4;goto B4cdf3f;
case 0x4cdf41:c.instructions+=3;goto B4cdf41;
case 0x4cdf42:c.instructions+=2;goto B4cdf42;
case 0x4cdf45:c.instructions+=1;goto B4cdf45;
case 0x4cdf4a:goto L4cdf4a;
case 0x4cdf4c:c.instructions+=2;goto B4cdf4c;
case 0x4cdf4e:c.instructions+=1;goto B4cdf4e;
case 0x4cdf53:goto L4cdf53;
case 0x4cdf55:c.instructions+=4;goto B4cdf55;
case 0x4cdf57:c.instructions+=3;goto B4cdf57;
case 0x4cdf59:c.instructions+=2;goto B4cdf59;
case 0x4cdf5a:c.instructions+=1;goto B4cdf5a;
case 0x4cdf5f:goto L4cdf5f;
case 0x4cdf62:c.instructions+=2;goto B4cdf62;
case 0x4cdf64:c.instructions+=1;goto B4cdf64;
case 0x4cdf66:goto L4cdf66;
case 0x4cdf6b:goto L4cdf6b;
case 0x4cdf6c:c.instructions+=2;goto B4cdf6c;
case 0x4cdf6d:c.instructions+=1;goto B4cdf6d;
case 0x4cdf72:goto L4cdf72;
case 0x4cdf74:c.instructions+=4;goto B4cdf74;
case 0x4cdf78:c.instructions+=3;goto B4cdf78;
case 0x4cdf7b:c.instructions+=2;goto B4cdf7b;
case 0x4cdf7d:c.instructions+=1;goto B4cdf7d;
case 0x4cdf7f:goto L4cdf7f;
case 0x4cdf85:c.instructions+=2;goto B4cdf85;
case 0x4cdf88:c.instructions+=1;goto B4cdf88;
case 0x4cdf8a:goto L4cdf8a;
case 0x4cdf8c:c.instructions+=4;goto B4cdf8c;
case 0x4cdf8f:c.instructions+=3;goto B4cdf8f;
case 0x4cdf95:c.instructions+=2;goto B4cdf95;
case 0x4cdf98:c.instructions+=1;goto B4cdf98;
case 0x4cdf9a:goto L4cdf9a;
case 0x4cdfa0:c.instructions+=1;goto B4cdfa0;
case 0x4cdfa2:goto L4cdfa2;
case 0x4cdfa7:c.instructions+=1;goto B4cdfa7;
case 0x4cdfac:goto L4cdfac;
case 0x4cdfb2:c.instructions+=1;goto B4cdfb2;
case 0x4cdfb4:goto L4cdfb4;
case 0x4cdfb9:goto L4cdfb9;
case 0x4cdfbc:c.instructions+=3;goto B4cdfbc;
case 0x4cdfbf:c.instructions+=2;goto B4cdfbf;
case 0x4cdfc2:c.instructions+=1;goto B4cdfc2;
case 0x4cdfc8:goto L4cdfc8;
case 0x4cdfca:c.instructions+=1;goto B4cdfca;
case 0x4cdfcc:goto L4cdfcc;
case 0x4cdfcf:c.instructions+=2;goto B4cdfcf;
case 0x4cdfd1:c.instructions+=1;goto B4cdfd1;
case 0x4cdfd3:goto L4cdfd3;
case 0x4cdfd5:c.instructions+=1;goto B4cdfd5;
case 0x4cdfd8:goto L4cdfd8;
case 0x4cdfdb:c.instructions+=4;goto B4cdfdb;
case 0x4cdfde:c.instructions+=3;goto B4cdfde;
case 0x4cdfe0:c.instructions+=2;goto B4cdfe0;
case 0x4cdfe2:c.instructions+=1;goto B4cdfe2;
case 0x4cdfe4:goto L4cdfe4;
case 0x4cdfe7:c.instructions+=1;goto B4cdfe7;
case 0x4cdfe9:goto L4cdfe9;
case 0x4cdff0:goto L4cdff0;
case 0x4cdff5:c.instructions+=1;goto B4cdff5;
case 0x4cdffa:goto L4cdffa;
case 0x4cdffd:c.instructions+=2;goto B4cdffd;
case 0x4cdfff:c.instructions+=1;goto B4cdfff;
default:missing_instruction(c.pc);}
B4cd000:L4cd000:{c.instructions+=9;NFSU2_TR(0x4cd000);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd001:{NFSU2_TR(0x4cd001);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd007:{NFSU2_TR(0x4cd007);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd008:{NFSU2_TR(0x4cd008);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd00e:{NFSU2_TR(0x4cd00e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd00f:{NFSU2_TR(0x4cd00f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd015:{NFSU2_TR(0x4cd015);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd016:{NFSU2_TR(0x4cd016);
__builtin_memmove((R+4),(R+0),4);
}
B4cd018:{NFSU2_TR(0x4cd018);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd01dull));
TAIL_STATIC(0x4b40b0u,4b4);
}
B4cd01d:L4cd01d:{c.instructions+=1;NFSU2_TR(0x4cd01d);
{goto L4cd021;}
}
B4cd01f:L4cd01f:{c.instructions+=1;NFSU2_TR(0x4cd01f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd021:L4cd021:{c.instructions+=5;NFSU2_TR(0x4cd021);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd023:{NFSU2_TR(0x4cd023);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd024:{NFSU2_TR(0x4cd024);
__builtin_memmove((R+4),(R+24),4);
}
B4cd026:{NFSU2_TR(0x4cd026);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd02a:{NFSU2_TR(0x4cd02a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd02full));
TAIL_STATIC(0x54f170u,54f);
}
B4cd02f:L4cd02f:{c.instructions+=2;NFSU2_TR(0x4cd02f);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cd036:{NFSU2_TR(0x4cd036);
if(r1(R+518)){{goto L4cd0e7;}}
}
B4cd03c:L4cd03c:{c.instructions+=2;NFSU2_TR(0x4cd03c);
w4(R+4,u32(0x83aab4ull));
}
B4cd041:{NFSU2_TR(0x4cd041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd046ull));
TAIL_STATIC(0x502910u,502);
}
B4cd046:L4cd046:{c.instructions+=6;NFSU2_TR(0x4cd046);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4cd049:{NFSU2_TR(0x4cd049);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cd04b:{NFSU2_TR(0x4cd04b);
__builtin_memmove((R+0),(R+518),1);
}
B4cd04e:{NFSU2_TR(0x4cd04e);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd050:{NFSU2_TR(0x4cd050);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4cd054:{NFSU2_TR(0x4cd054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd059ull));
TAIL_STATIC(0x575620u,575);
}
B4cd059:L4cd059:{c.instructions+=5;NFSU2_TR(0x4cd059);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd05c:{NFSU2_TR(0x4cd05c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd060:{NFSU2_TR(0x4cd060);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd062:{NFSU2_TR(0x4cd062);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd06a:{NFSU2_TR(0x4cd06a);
if(r1(R+518)){{goto L4cd093;}}
}
B4cd06c:L4cd06c:{c.instructions+=11;NFSU2_TR(0x4cd06c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd06e:{NFSU2_TR(0x4cd06e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd074:{NFSU2_TR(0x4cd074);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd075:{NFSU2_TR(0x4cd075);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd07b:{NFSU2_TR(0x4cd07b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd07c:{NFSU2_TR(0x4cd07c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd082:{NFSU2_TR(0x4cd082);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd083:{NFSU2_TR(0x4cd083);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd089:{NFSU2_TR(0x4cd089);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd08a:{NFSU2_TR(0x4cd08a);
__builtin_memmove((R+4),(R+0),4);
}
B4cd08c:{NFSU2_TR(0x4cd08c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd091ull));
TAIL_STATIC(0x4b3fa0u,4b3);
}
B4cd091:L4cd091:{c.instructions+=1;NFSU2_TR(0x4cd091);
{goto L4cd095;}
}
B4cd093:L4cd093:{c.instructions+=1;NFSU2_TR(0x4cd093);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd095:L4cd095:{c.instructions+=5;NFSU2_TR(0x4cd095);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd097:{NFSU2_TR(0x4cd097);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd098:{NFSU2_TR(0x4cd098);
__builtin_memmove((R+4),(R+24),4);
}
B4cd09a:{NFSU2_TR(0x4cd09a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd09e:{NFSU2_TR(0x4cd09e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd0a3ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd0a3:L4cd0a3:{c.instructions+=2;NFSU2_TR(0x4cd0a3);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd0a5:{NFSU2_TR(0x4cd0a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd0aaull));
TAIL_STATIC(0x575620u,575);
}
B4cd0aa:L4cd0aa:{c.instructions+=5;NFSU2_TR(0x4cd0aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd0ad:{NFSU2_TR(0x4cd0ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd0b1:{NFSU2_TR(0x4cd0b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd0b3:{NFSU2_TR(0x4cd0b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd0bb:{NFSU2_TR(0x4cd0bb);
if(r1(R+518)){{goto L4cd128;}}
}
B4cd0bd:L4cd0bd:{c.instructions+=12;NFSU2_TR(0x4cd0bd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cd0c1:{NFSU2_TR(0x4cd0c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd0c2:{NFSU2_TR(0x4cd0c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd0c8:{NFSU2_TR(0x4cd0c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd0c9:{NFSU2_TR(0x4cd0c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd0cf:{NFSU2_TR(0x4cd0cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd0d0:{NFSU2_TR(0x4cd0d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd0d6:{NFSU2_TR(0x4cd0d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd0d7:{NFSU2_TR(0x4cd0d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd0dd:{NFSU2_TR(0x4cd0dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd0de:{NFSU2_TR(0x4cd0de);
__builtin_memmove((R+4),(R+0),4);
}
B4cd0e0:{NFSU2_TR(0x4cd0e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd0e5ull));
TAIL_STATIC(0x4b3d30u,4b3);
}
B4cd0e5:L4cd0e5:{c.instructions+=1;NFSU2_TR(0x4cd0e5);
{goto L4cd12a;}
}
B4cd0e7:L4cd0e7:{c.instructions+=2;NFSU2_TR(0x4cd0e7);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd0e9:{NFSU2_TR(0x4cd0e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd0eeull));
TAIL_STATIC(0x575620u,575);
}
B4cd0ee:L4cd0ee:{c.instructions+=5;NFSU2_TR(0x4cd0ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd0f1:{NFSU2_TR(0x4cd0f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd0f5:{NFSU2_TR(0x4cd0f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd0f7:{NFSU2_TR(0x4cd0f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd0ff:{NFSU2_TR(0x4cd0ff);
if(r1(R+518)){{goto L4cd128;}}
}
B4cd101:L4cd101:{c.instructions+=11;NFSU2_TR(0x4cd101);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd103:{NFSU2_TR(0x4cd103);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd109:{NFSU2_TR(0x4cd109);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd10a:{NFSU2_TR(0x4cd10a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd110:{NFSU2_TR(0x4cd110);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd111:{NFSU2_TR(0x4cd111);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd117:{NFSU2_TR(0x4cd117);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd118:{NFSU2_TR(0x4cd118);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd11e:{NFSU2_TR(0x4cd11e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd11f:{NFSU2_TR(0x4cd11f);
__builtin_memmove((R+4),(R+0),4);
}
B4cd121:{NFSU2_TR(0x4cd121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd126ull));
TAIL_STATIC(0x4b3d30u,4b3);
}
B4cd126:L4cd126:{c.instructions+=1;NFSU2_TR(0x4cd126);
{goto L4cd12a;}
}
B4cd128:L4cd128:{c.instructions+=1;NFSU2_TR(0x4cd128);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd12a:L4cd12a:{c.instructions+=5;NFSU2_TR(0x4cd12a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd12c:{NFSU2_TR(0x4cd12c);
__builtin_memmove((R+4),(R+24),4);
}
B4cd12e:{NFSU2_TR(0x4cd12e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd12f:{NFSU2_TR(0x4cd12f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd133:{NFSU2_TR(0x4cd133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd138ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd138:L4cd138:{c.instructions+=2;NFSU2_TR(0x4cd138);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd13a:{NFSU2_TR(0x4cd13a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd13full));
TAIL_STATIC(0x575620u,575);
}
B4cd13f:L4cd13f:{c.instructions+=6;NFSU2_TR(0x4cd13f);
__builtin_memmove((R+28),(R+0),4);
}
B4cd141:{NFSU2_TR(0x4cd141);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd144:{NFSU2_TR(0x4cd144);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd148:{NFSU2_TR(0x4cd148);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd14a:{NFSU2_TR(0x4cd14a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd152:{NFSU2_TR(0x4cd152);
if(r1(R+518)){{goto L4cd181;}}
}
B4cd154:L4cd154:{c.instructions+=11;NFSU2_TR(0x4cd154);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd156:{NFSU2_TR(0x4cd156);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd15c:{NFSU2_TR(0x4cd15c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd15d:{NFSU2_TR(0x4cd15d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cd163:{NFSU2_TR(0x4cd163);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd164:{NFSU2_TR(0x4cd164);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd16a:{NFSU2_TR(0x4cd16a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd16b:{NFSU2_TR(0x4cd16b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd171:{NFSU2_TR(0x4cd171);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd172:{NFSU2_TR(0x4cd172);
__builtin_memmove((R+4),(R+28),4);
}
B4cd174:{NFSU2_TR(0x4cd174);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd179ull));
TAIL_STATIC(0x51e230u,51e);
}
B4cd179:L4cd179:{c.instructions+=2;NFSU2_TR(0x4cd179);
u8 U[4];
w4(U+0,u32(0x791458ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4cd17f:{NFSU2_TR(0x4cd17f);
{goto L4cd183;}
}
B4cd181:L4cd181:{c.instructions+=1;NFSU2_TR(0x4cd181);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cd183:L4cd183:{c.instructions+=5;NFSU2_TR(0x4cd183);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd185:{NFSU2_TR(0x4cd185);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd186:{NFSU2_TR(0x4cd186);
__builtin_memmove((R+4),(R+24),4);
}
B4cd188:{NFSU2_TR(0x4cd188);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd18c:{NFSU2_TR(0x4cd18c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd191ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd191:L4cd191:{c.instructions+=2;NFSU2_TR(0x4cd191);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cd198:{NFSU2_TR(0x4cd198);
if(r1(R+518)){{goto L4cd240;}}
}
B4cd19e:L4cd19e:{c.instructions+=2;NFSU2_TR(0x4cd19e);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd1a0:{NFSU2_TR(0x4cd1a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd1a5ull));
TAIL_STATIC(0x575620u,575);
}
B4cd1a5:L4cd1a5:{c.instructions+=5;NFSU2_TR(0x4cd1a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd1a8:{NFSU2_TR(0x4cd1a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd1ac:{NFSU2_TR(0x4cd1ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd1ae:{NFSU2_TR(0x4cd1ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd1b6:{NFSU2_TR(0x4cd1b6);
if(r1(R+518)){{goto L4cd1df;}}
}
B4cd1b8:L4cd1b8:{c.instructions+=11;NFSU2_TR(0x4cd1b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd1ba:{NFSU2_TR(0x4cd1ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd1c0:{NFSU2_TR(0x4cd1c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd1c1:{NFSU2_TR(0x4cd1c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd1c7:{NFSU2_TR(0x4cd1c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd1c8:{NFSU2_TR(0x4cd1c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd1ce:{NFSU2_TR(0x4cd1ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd1cf:{NFSU2_TR(0x4cd1cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd1d5:{NFSU2_TR(0x4cd1d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd1d6:{NFSU2_TR(0x4cd1d6);
__builtin_memmove((R+4),(R+0),4);
}
B4cd1d8:{NFSU2_TR(0x4cd1d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd1ddull));
TAIL_STATIC(0x4b3750u,4b3);
}
B4cd1dd:L4cd1dd:{c.instructions+=1;NFSU2_TR(0x4cd1dd);
{goto L4cd1e1;}
}
B4cd1df:L4cd1df:{c.instructions+=1;NFSU2_TR(0x4cd1df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd1e1:L4cd1e1:{c.instructions+=5;NFSU2_TR(0x4cd1e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd1e3:{NFSU2_TR(0x4cd1e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd1e4:{NFSU2_TR(0x4cd1e4);
__builtin_memmove((R+4),(R+24),4);
}
B4cd1e6:{NFSU2_TR(0x4cd1e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd1ea:{NFSU2_TR(0x4cd1ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd1efull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd1ef:L4cd1ef:{c.instructions+=2;NFSU2_TR(0x4cd1ef);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd1f1:{NFSU2_TR(0x4cd1f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd1f6ull));
TAIL_STATIC(0x575620u,575);
}
B4cd1f6:L4cd1f6:{c.instructions+=5;NFSU2_TR(0x4cd1f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd1f9:{NFSU2_TR(0x4cd1f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd1fd:{NFSU2_TR(0x4cd1fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd1ff:{NFSU2_TR(0x4cd1ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd207:{NFSU2_TR(0x4cd207);
if(r1(R+518)){{goto L4cd230;}}
}
B4cd209:L4cd209:{c.instructions+=11;NFSU2_TR(0x4cd209);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd20b:{NFSU2_TR(0x4cd20b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd211:{NFSU2_TR(0x4cd211);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd212:{NFSU2_TR(0x4cd212);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd218:{NFSU2_TR(0x4cd218);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd219:{NFSU2_TR(0x4cd219);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd21f:{NFSU2_TR(0x4cd21f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd220:{NFSU2_TR(0x4cd220);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd226:{NFSU2_TR(0x4cd226);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd227:{NFSU2_TR(0x4cd227);
__builtin_memmove((R+4),(R+0),4);
}
B4cd229:{NFSU2_TR(0x4cd229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd22eull));
TAIL_STATIC(0x4b3930u,4b3);
}
B4cd22e:L4cd22e:{c.instructions+=1;NFSU2_TR(0x4cd22e);
{goto L4cd232;}
}
B4cd230:L4cd230:{c.instructions+=1;NFSU2_TR(0x4cd230);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd232:L4cd232:{c.instructions+=5;NFSU2_TR(0x4cd232);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd234:{NFSU2_TR(0x4cd234);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd235:{NFSU2_TR(0x4cd235);
__builtin_memmove((R+4),(R+24),4);
}
B4cd237:{NFSU2_TR(0x4cd237);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd23b:{NFSU2_TR(0x4cd23b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd240ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd240:L4cd240:{c.instructions+=2;NFSU2_TR(0x4cd240);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd242:{NFSU2_TR(0x4cd242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd247ull));
TAIL_STATIC(0x575620u,575);
}
B4cd247:L4cd247:{c.instructions+=6;NFSU2_TR(0x4cd247);
__builtin_memmove((R+28),(R+0),4);
}
B4cd249:{NFSU2_TR(0x4cd249);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd24c:{NFSU2_TR(0x4cd24c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd250:{NFSU2_TR(0x4cd250);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd252:{NFSU2_TR(0x4cd252);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd25a:{NFSU2_TR(0x4cd25a);
if(r1(R+518)){{goto L4cd289;}}
}
B4cd25c:L4cd25c:{c.instructions+=11;NFSU2_TR(0x4cd25c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd25e:{NFSU2_TR(0x4cd25e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cd264:{NFSU2_TR(0x4cd264);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd265:{NFSU2_TR(0x4cd265);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd26b:{NFSU2_TR(0x4cd26b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd26c:{NFSU2_TR(0x4cd26c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd272:{NFSU2_TR(0x4cd272);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd273:{NFSU2_TR(0x4cd273);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cd279:{NFSU2_TR(0x4cd279);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd27a:{NFSU2_TR(0x4cd27a);
__builtin_memmove((R+4),(R+28),4);
}
B4cd27c:{NFSU2_TR(0x4cd27c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd281ull));
TAIL_STATIC(0x51e230u,51e);
}
B4cd281:L4cd281:{c.instructions+=2;NFSU2_TR(0x4cd281);
u8 U[4];
w4(U+0,u32(0x791410ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4cd287:{NFSU2_TR(0x4cd287);
{goto L4cd28b;}
}
B4cd289:L4cd289:{c.instructions+=1;NFSU2_TR(0x4cd289);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cd28b:L4cd28b:{c.instructions+=5;NFSU2_TR(0x4cd28b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd28d:{NFSU2_TR(0x4cd28d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd28e:{NFSU2_TR(0x4cd28e);
__builtin_memmove((R+4),(R+24),4);
}
B4cd290:{NFSU2_TR(0x4cd290);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd294:{NFSU2_TR(0x4cd294);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd299ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd299:L4cd299:{c.instructions+=7;NFSU2_TR(0x4cd299);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cd29a:{NFSU2_TR(0x4cd29a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cd29b:{NFSU2_TR(0x4cd29b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cd29c:{NFSU2_TR(0x4cd29c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cd2a0:{NFSU2_TR(0x4cd2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd2a7:{NFSU2_TR(0x4cd2a7);
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
B4cd2aa:{NFSU2_TR(0x4cd2aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cd2ab:L4cd2ab:{c.instructions+=2;NFSU2_TR(0x4cd2ab);
__builtin_memmove((R+4),(R+24),4);
}
B4cd2ad:{NFSU2_TR(0x4cd2ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd2b2ull));
TAIL_STATIC(0x4b41c0u,4b4);
}
B4cd2b2:L4cd2b2:{c.instructions+=5;NFSU2_TR(0x4cd2b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cd2b6:{NFSU2_TR(0x4cd2b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cd2b7:{NFSU2_TR(0x4cd2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd2be:{NFSU2_TR(0x4cd2be);
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
B4cd2c1:{NFSU2_TR(0x4cd2c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cd2d0:L4cd2d0:{c.instructions+=11;NFSU2_TR(0x4cd2d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd2d2:{NFSU2_TR(0x4cd2d2);
u8 U[4];
w4(U+0,u32(0x774354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd2d7:{NFSU2_TR(0x4cd2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cd2dd:{NFSU2_TR(0x4cd2dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd2de:{NFSU2_TR(0x4cd2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd2e5:{NFSU2_TR(0x4cd2e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd2e6:{NFSU2_TR(0x4cd2e6);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4cd2eb:{NFSU2_TR(0x4cd2eb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cd2ee:{NFSU2_TR(0x4cd2ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd2ef:{NFSU2_TR(0x4cd2ef);
__builtin_memmove((R+24),(R+4),4);
}
B4cd2f1:{NFSU2_TR(0x4cd2f1);
if(r1(R+518)){{goto L4cd510;}}
}
B4cd2f7:L4cd2f7:{c.instructions+=2;NFSU2_TR(0x4cd2f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd2fc:{NFSU2_TR(0x4cd2fc);
if(r1(R+518)){{goto L4cd510;}}
}
B4cd302:L4cd302:{c.instructions+=2;NFSU2_TR(0x4cd302);
w4(R+4,u32(0x83aab4ull));
}
B4cd307:{NFSU2_TR(0x4cd307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd30cull));
TAIL_STATIC(0x502910u,502);
}
B4cd30c:L4cd30c:{c.instructions+=3;NFSU2_TR(0x4cd30c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B4cd30f:{NFSU2_TR(0x4cd30f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd310:{NFSU2_TR(0x4cd310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd315ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4cd315:L4cd315:{c.instructions+=4;NFSU2_TR(0x4cd315);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4cd31b:{NFSU2_TR(0x4cd31b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd31e:{NFSU2_TR(0x4cd31e);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4cd321:{NFSU2_TR(0x4cd321);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cd392;}}
}
B4cd323:L4cd323:{c.instructions+=6;NFSU2_TR(0x4cd323);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4cd32a:{NFSU2_TR(0x4cd32a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd32c:{NFSU2_TR(0x4cd32c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd32e:{NFSU2_TR(0x4cd32e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd32f:{NFSU2_TR(0x4cd32f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd331:{NFSU2_TR(0x4cd331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd336ull));
TAIL_STATIC(0x5156f0u,515);
}
B4cd336:L4cd336:{c.instructions+=3;NFSU2_TR(0x4cd336);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cd339:{NFSU2_TR(0x4cd339);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cd33b:{NFSU2_TR(0x4cd33b);
if(r1(R+518)){{goto L4cd392;}}
}
B4cd33d:L4cd33d:{c.instructions+=2;NFSU2_TR(0x4cd33d);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd33f:{NFSU2_TR(0x4cd33f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd344ull));
TAIL_STATIC(0x575620u,575);
}
B4cd344:L4cd344:{c.instructions+=5;NFSU2_TR(0x4cd344);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd347:{NFSU2_TR(0x4cd347);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd34b:{NFSU2_TR(0x4cd34b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd34d:{NFSU2_TR(0x4cd34d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd355:{NFSU2_TR(0x4cd355);
if(r1(R+518)){{goto L4cd37e;}}
}
B4cd357:L4cd357:{c.instructions+=11;NFSU2_TR(0x4cd357);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd359:{NFSU2_TR(0x4cd359);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd35f:{NFSU2_TR(0x4cd35f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd360:{NFSU2_TR(0x4cd360);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd366:{NFSU2_TR(0x4cd366);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd367:{NFSU2_TR(0x4cd367);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd36d:{NFSU2_TR(0x4cd36d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd36e:{NFSU2_TR(0x4cd36e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd374:{NFSU2_TR(0x4cd374);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd375:{NFSU2_TR(0x4cd375);
__builtin_memmove((R+4),(R+0),4);
}
B4cd377:{NFSU2_TR(0x4cd377);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd37cull));
TAIL_STATIC(0x4b40b0u,4b4);
}
B4cd37c:L4cd37c:{c.instructions+=1;NFSU2_TR(0x4cd37c);
{goto L4cd380;}
}
B4cd37e:L4cd37e:{c.instructions+=1;NFSU2_TR(0x4cd37e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd380:L4cd380:{c.instructions+=5;NFSU2_TR(0x4cd380);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd382:{NFSU2_TR(0x4cd382);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd383:{NFSU2_TR(0x4cd383);
__builtin_memmove((R+4),(R+24),4);
}
B4cd385:{NFSU2_TR(0x4cd385);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd38d:{NFSU2_TR(0x4cd38d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd392ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd392:L4cd392:{c.instructions+=3;NFSU2_TR(0x4cd392);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd393:{NFSU2_TR(0x4cd393);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd395:{NFSU2_TR(0x4cd395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd39aull));
TAIL_STATIC(0x575620u,575);
}
B4cd39a:L4cd39a:{c.instructions+=6;NFSU2_TR(0x4cd39a);
__builtin_memmove((R+28),(R+0),4);
}
B4cd39c:{NFSU2_TR(0x4cd39c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd39f:{NFSU2_TR(0x4cd39f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd3a3:{NFSU2_TR(0x4cd3a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd3a5:{NFSU2_TR(0x4cd3a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd3ad:{NFSU2_TR(0x4cd3ad);
if(r1(R+518)){{goto L4cd3dc;}}
}
B4cd3af:L4cd3af:{c.instructions+=11;NFSU2_TR(0x4cd3af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd3b1:{NFSU2_TR(0x4cd3b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd3b7:{NFSU2_TR(0x4cd3b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd3b8:{NFSU2_TR(0x4cd3b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cd3be:{NFSU2_TR(0x4cd3be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd3bf:{NFSU2_TR(0x4cd3bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd3c5:{NFSU2_TR(0x4cd3c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd3c6:{NFSU2_TR(0x4cd3c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd3cc:{NFSU2_TR(0x4cd3cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd3cd:{NFSU2_TR(0x4cd3cd);
__builtin_memmove((R+4),(R+28),4);
}
B4cd3cf:{NFSU2_TR(0x4cd3cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd3d4ull));
TAIL_STATIC(0x51e230u,51e);
}
B4cd3d4:L4cd3d4:{c.instructions+=2;NFSU2_TR(0x4cd3d4);
u8 U[4];
w4(U+0,u32(0x791458ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4cd3da:{NFSU2_TR(0x4cd3da);
{goto L4cd3de;}
}
B4cd3dc:L4cd3dc:{c.instructions+=1;NFSU2_TR(0x4cd3dc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cd3de:L4cd3de:{c.instructions+=5;NFSU2_TR(0x4cd3de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd3e0:{NFSU2_TR(0x4cd3e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd3e1:{NFSU2_TR(0x4cd3e1);
__builtin_memmove((R+4),(R+24),4);
}
B4cd3e3:{NFSU2_TR(0x4cd3e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd3eb:{NFSU2_TR(0x4cd3eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd3f0ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd3f0:L4cd3f0:{c.instructions+=2;NFSU2_TR(0x4cd3f0);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cd3f7:{NFSU2_TR(0x4cd3f7);
if(r1(R+518)){{goto L4cd4a2;}}
}
B4cd3fd:L4cd3fd:{c.instructions+=2;NFSU2_TR(0x4cd3fd);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd3ff:{NFSU2_TR(0x4cd3ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd404ull));
TAIL_STATIC(0x575620u,575);
}
B4cd404:L4cd404:{c.instructions+=5;NFSU2_TR(0x4cd404);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd407:{NFSU2_TR(0x4cd407);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd40b:{NFSU2_TR(0x4cd40b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd40d:{NFSU2_TR(0x4cd40d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd415:{NFSU2_TR(0x4cd415);
if(r1(R+518)){{goto L4cd43e;}}
}
B4cd417:L4cd417:{c.instructions+=11;NFSU2_TR(0x4cd417);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd419:{NFSU2_TR(0x4cd419);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd41f:{NFSU2_TR(0x4cd41f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd420:{NFSU2_TR(0x4cd420);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd426:{NFSU2_TR(0x4cd426);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd427:{NFSU2_TR(0x4cd427);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd42d:{NFSU2_TR(0x4cd42d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd42e:{NFSU2_TR(0x4cd42e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd434:{NFSU2_TR(0x4cd434);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd435:{NFSU2_TR(0x4cd435);
__builtin_memmove((R+4),(R+0),4);
}
B4cd437:{NFSU2_TR(0x4cd437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd43cull));
TAIL_STATIC(0x4b3750u,4b3);
}
B4cd43c:L4cd43c:{c.instructions+=1;NFSU2_TR(0x4cd43c);
{goto L4cd440;}
}
B4cd43e:L4cd43e:{c.instructions+=1;NFSU2_TR(0x4cd43e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd440:L4cd440:{c.instructions+=6;NFSU2_TR(0x4cd440);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd442:{NFSU2_TR(0x4cd442);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B4cd445:{NFSU2_TR(0x4cd445);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd446:{NFSU2_TR(0x4cd446);
__builtin_memmove((R+4),(R+24),4);
}
B4cd448:{NFSU2_TR(0x4cd448);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd44c:{NFSU2_TR(0x4cd44c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd451ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd451:L4cd451:{c.instructions+=2;NFSU2_TR(0x4cd451);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd453:{NFSU2_TR(0x4cd453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd458ull));
TAIL_STATIC(0x575620u,575);
}
B4cd458:L4cd458:{c.instructions+=5;NFSU2_TR(0x4cd458);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd45b:{NFSU2_TR(0x4cd45b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd45f:{NFSU2_TR(0x4cd45f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd461:{NFSU2_TR(0x4cd461);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd469:{NFSU2_TR(0x4cd469);
if(r1(R+518)){{goto L4cd492;}}
}
B4cd46b:L4cd46b:{c.instructions+=11;NFSU2_TR(0x4cd46b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd46d:{NFSU2_TR(0x4cd46d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd473:{NFSU2_TR(0x4cd473);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd474:{NFSU2_TR(0x4cd474);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd47a:{NFSU2_TR(0x4cd47a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd47b:{NFSU2_TR(0x4cd47b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd481:{NFSU2_TR(0x4cd481);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd482:{NFSU2_TR(0x4cd482);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd488:{NFSU2_TR(0x4cd488);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd489:{NFSU2_TR(0x4cd489);
__builtin_memmove((R+4),(R+0),4);
}
B4cd48b:{NFSU2_TR(0x4cd48b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd490ull));
TAIL_STATIC(0x4b3930u,4b3);
}
B4cd490:L4cd490:{c.instructions+=1;NFSU2_TR(0x4cd490);
{goto L4cd494;}
}
B4cd492:L4cd492:{c.instructions+=1;NFSU2_TR(0x4cd492);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd494:L4cd494:{c.instructions+=5;NFSU2_TR(0x4cd494);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd496:{NFSU2_TR(0x4cd496);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd497:{NFSU2_TR(0x4cd497);
__builtin_memmove((R+4),(R+24),4);
}
B4cd499:{NFSU2_TR(0x4cd499);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd49d:{NFSU2_TR(0x4cd49d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd4a2ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd4a2:L4cd4a2:{c.instructions+=2;NFSU2_TR(0x4cd4a2);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd4a4:{NFSU2_TR(0x4cd4a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd4a9ull));
TAIL_STATIC(0x575620u,575);
}
B4cd4a9:L4cd4a9:{c.instructions+=6;NFSU2_TR(0x4cd4a9);
__builtin_memmove((R+28),(R+0),4);
}
B4cd4ab:{NFSU2_TR(0x4cd4ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd4ae:{NFSU2_TR(0x4cd4ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd4b2:{NFSU2_TR(0x4cd4b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd4b4:{NFSU2_TR(0x4cd4b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd4bc:{NFSU2_TR(0x4cd4bc);
if(r1(R+518)){{goto L4cd4eb;}}
}
B4cd4be:L4cd4be:{c.instructions+=11;NFSU2_TR(0x4cd4be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd4c0:{NFSU2_TR(0x4cd4c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cd4c6:{NFSU2_TR(0x4cd4c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd4c7:{NFSU2_TR(0x4cd4c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd4cd:{NFSU2_TR(0x4cd4cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd4ce:{NFSU2_TR(0x4cd4ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd4d4:{NFSU2_TR(0x4cd4d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd4d5:{NFSU2_TR(0x4cd4d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cd4db:{NFSU2_TR(0x4cd4db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd4dc:{NFSU2_TR(0x4cd4dc);
__builtin_memmove((R+4),(R+28),4);
}
B4cd4de:{NFSU2_TR(0x4cd4de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd4e3ull));
TAIL_STATIC(0x51e230u,51e);
}
B4cd4e3:L4cd4e3:{c.instructions+=2;NFSU2_TR(0x4cd4e3);
u8 U[4];
w4(U+0,u32(0x791410ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4cd4e9:{NFSU2_TR(0x4cd4e9);
{goto L4cd4ed;}
}
B4cd4eb:L4cd4eb:{c.instructions+=1;NFSU2_TR(0x4cd4eb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cd4ed:L4cd4ed:{c.instructions+=5;NFSU2_TR(0x4cd4ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd4ef:{NFSU2_TR(0x4cd4ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd4f0:{NFSU2_TR(0x4cd4f0);
__builtin_memmove((R+4),(R+24),4);
}
B4cd4f2:{NFSU2_TR(0x4cd4f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd4fa:{NFSU2_TR(0x4cd4fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd4ffull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd4ff:L4cd4ff:{c.instructions+=6;NFSU2_TR(0x4cd4ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cd500:{NFSU2_TR(0x4cd500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cd501:{NFSU2_TR(0x4cd501);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cd505:{NFSU2_TR(0x4cd505);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd50c:{NFSU2_TR(0x4cd50c);
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
B4cd50f:{NFSU2_TR(0x4cd50f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cd510:L4cd510:{c.instructions+=2;NFSU2_TR(0x4cd510);
__builtin_memmove((R+4),(R+24),4);
}
B4cd512:{NFSU2_TR(0x4cd512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd517ull));
TAIL_STATIC(0x4b41c0u,4b4);
}
B4cd517:L4cd517:{c.instructions+=5;NFSU2_TR(0x4cd517);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cd51b:{NFSU2_TR(0x4cd51b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cd51c:{NFSU2_TR(0x4cd51c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd523:{NFSU2_TR(0x4cd523);
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
B4cd526:{NFSU2_TR(0x4cd526);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cd530:L4cd530:{c.instructions+=11;NFSU2_TR(0x4cd530);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd532:{NFSU2_TR(0x4cd532);
u8 U[4];
w4(U+0,u32(0x774354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd537:{NFSU2_TR(0x4cd537);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cd53d:{NFSU2_TR(0x4cd53d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd53e:{NFSU2_TR(0x4cd53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd545:{NFSU2_TR(0x4cd545);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd546:{NFSU2_TR(0x4cd546);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4cd54b:{NFSU2_TR(0x4cd54b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cd54e:{NFSU2_TR(0x4cd54e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd54f:{NFSU2_TR(0x4cd54f);
__builtin_memmove((R+24),(R+4),4);
}
B4cd551:{NFSU2_TR(0x4cd551);
if(r1(R+518)){{goto L4cd786;}}
}
B4cd557:L4cd557:{c.instructions+=2;NFSU2_TR(0x4cd557);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd55c:{NFSU2_TR(0x4cd55c);
if(r1(R+518)){{goto L4cd786;}}
}
B4cd562:L4cd562:{c.instructions+=3;NFSU2_TR(0x4cd562);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd563:{NFSU2_TR(0x4cd563);
w4(R+4,u32(0x83aab4ull));
}
B4cd568:{NFSU2_TR(0x4cd568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd56dull));
TAIL_STATIC(0x502910u,502);
}
B4cd56d:L4cd56d:{c.instructions+=3;NFSU2_TR(0x4cd56d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B4cd570:{NFSU2_TR(0x4cd570);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd571:{NFSU2_TR(0x4cd571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd576ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4cd576:L4cd576:{c.instructions+=5;NFSU2_TR(0x4cd576);
__builtin_memmove((R+28),(R+0),4);
}
B4cd578:{NFSU2_TR(0x4cd578);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x86ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cd57e:{NFSU2_TR(0x4cd57e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd581:{NFSU2_TR(0x4cd581);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cd583:{NFSU2_TR(0x4cd583);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cd5f4;}}
}
B4cd585:L4cd585:{c.instructions+=6;NFSU2_TR(0x4cd585);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4cd58c:{NFSU2_TR(0x4cd58c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd58e:{NFSU2_TR(0x4cd58e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd590:{NFSU2_TR(0x4cd590);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd591:{NFSU2_TR(0x4cd591);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd593:{NFSU2_TR(0x4cd593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd598ull));
TAIL_STATIC(0x5156f0u,515);
}
B4cd598:L4cd598:{c.instructions+=3;NFSU2_TR(0x4cd598);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cd59b:{NFSU2_TR(0x4cd59b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cd59d:{NFSU2_TR(0x4cd59d);
if(r1(R+518)){{goto L4cd5f4;}}
}
B4cd59f:L4cd59f:{c.instructions+=2;NFSU2_TR(0x4cd59f);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd5a1:{NFSU2_TR(0x4cd5a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd5a6ull));
TAIL_STATIC(0x575620u,575);
}
B4cd5a6:L4cd5a6:{c.instructions+=5;NFSU2_TR(0x4cd5a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd5a9:{NFSU2_TR(0x4cd5a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd5ad:{NFSU2_TR(0x4cd5ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd5af:{NFSU2_TR(0x4cd5af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd5b7:{NFSU2_TR(0x4cd5b7);
if(r1(R+518)){{goto L4cd5e0;}}
}
B4cd5b9:L4cd5b9:{c.instructions+=11;NFSU2_TR(0x4cd5b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd5bb:{NFSU2_TR(0x4cd5bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd5c1:{NFSU2_TR(0x4cd5c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd5c2:{NFSU2_TR(0x4cd5c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd5c8:{NFSU2_TR(0x4cd5c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd5c9:{NFSU2_TR(0x4cd5c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd5cf:{NFSU2_TR(0x4cd5cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd5d0:{NFSU2_TR(0x4cd5d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd5d6:{NFSU2_TR(0x4cd5d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd5d7:{NFSU2_TR(0x4cd5d7);
__builtin_memmove((R+4),(R+0),4);
}
B4cd5d9:{NFSU2_TR(0x4cd5d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd5deull));
TAIL_STATIC(0x4b40b0u,4b4);
}
B4cd5de:L4cd5de:{c.instructions+=1;NFSU2_TR(0x4cd5de);
{goto L4cd5e2;}
}
B4cd5e0:L4cd5e0:{c.instructions+=1;NFSU2_TR(0x4cd5e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd5e2:L4cd5e2:{c.instructions+=5;NFSU2_TR(0x4cd5e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd5e4:{NFSU2_TR(0x4cd5e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd5e5:{NFSU2_TR(0x4cd5e5);
__builtin_memmove((R+4),(R+24),4);
}
B4cd5e7:{NFSU2_TR(0x4cd5e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd5ef:{NFSU2_TR(0x4cd5ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd5f4ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd5f4:L4cd5f4:{c.instructions+=3;NFSU2_TR(0x4cd5f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B4cd5fb:{NFSU2_TR(0x4cd5fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w1(R+523,sborrow<u16>(r2(U+0),u16(0x1073ull)));
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x1073ull))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
}
B4cd600:{NFSU2_TR(0x4cd600);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4cd609;}}
}
B4cd602:L4cd602:{c.instructions+=2;NFSU2_TR(0x4cd602);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w1(R+523,sborrow<u16>(r2(U+0),u16(0x107full)));
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x107full))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B4cd607:{NFSU2_TR(0x4cd607);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4cd666;}}
}
B4cd609:L4cd609:{c.instructions+=2;NFSU2_TR(0x4cd609);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd60b:{NFSU2_TR(0x4cd60b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd610ull));
TAIL_STATIC(0x575620u,575);
}
B4cd610:L4cd610:{c.instructions+=6;NFSU2_TR(0x4cd610);
__builtin_memmove((R+28),(R+0),4);
}
B4cd612:{NFSU2_TR(0x4cd612);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd615:{NFSU2_TR(0x4cd615);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd619:{NFSU2_TR(0x4cd619);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd61b:{NFSU2_TR(0x4cd61b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd623:{NFSU2_TR(0x4cd623);
if(r1(R+518)){{goto L4cd652;}}
}
B4cd625:L4cd625:{c.instructions+=11;NFSU2_TR(0x4cd625);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd627:{NFSU2_TR(0x4cd627);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd62d:{NFSU2_TR(0x4cd62d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd62e:{NFSU2_TR(0x4cd62e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cd634:{NFSU2_TR(0x4cd634);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd635:{NFSU2_TR(0x4cd635);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd63b:{NFSU2_TR(0x4cd63b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd63c:{NFSU2_TR(0x4cd63c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd642:{NFSU2_TR(0x4cd642);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd643:{NFSU2_TR(0x4cd643);
__builtin_memmove((R+4),(R+28),4);
}
B4cd645:{NFSU2_TR(0x4cd645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd64aull));
TAIL_STATIC(0x51e230u,51e);
}
B4cd64a:L4cd64a:{c.instructions+=2;NFSU2_TR(0x4cd64a);
u8 U[4];
w4(U+0,u32(0x791458ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4cd650:{NFSU2_TR(0x4cd650);
{goto L4cd654;}
}
B4cd652:L4cd652:{c.instructions+=1;NFSU2_TR(0x4cd652);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cd654:L4cd654:{c.instructions+=5;NFSU2_TR(0x4cd654);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd656:{NFSU2_TR(0x4cd656);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd657:{NFSU2_TR(0x4cd657);
__builtin_memmove((R+4),(R+24),4);
}
B4cd659:{NFSU2_TR(0x4cd659);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd661:{NFSU2_TR(0x4cd661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd666ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd666:L4cd666:{c.instructions+=2;NFSU2_TR(0x4cd666);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cd66d:{NFSU2_TR(0x4cd66d);
if(r1(R+518)){{goto L4cd718;}}
}
B4cd673:L4cd673:{c.instructions+=2;NFSU2_TR(0x4cd673);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd675:{NFSU2_TR(0x4cd675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd67aull));
TAIL_STATIC(0x575620u,575);
}
B4cd67a:L4cd67a:{c.instructions+=5;NFSU2_TR(0x4cd67a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd67d:{NFSU2_TR(0x4cd67d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd681:{NFSU2_TR(0x4cd681);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd683:{NFSU2_TR(0x4cd683);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd68b:{NFSU2_TR(0x4cd68b);
if(r1(R+518)){{goto L4cd6b4;}}
}
B4cd68d:L4cd68d:{c.instructions+=11;NFSU2_TR(0x4cd68d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd68f:{NFSU2_TR(0x4cd68f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd695:{NFSU2_TR(0x4cd695);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd696:{NFSU2_TR(0x4cd696);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd69c:{NFSU2_TR(0x4cd69c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd69d:{NFSU2_TR(0x4cd69d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd6a3:{NFSU2_TR(0x4cd6a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd6a4:{NFSU2_TR(0x4cd6a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd6aa:{NFSU2_TR(0x4cd6aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd6ab:{NFSU2_TR(0x4cd6ab);
__builtin_memmove((R+4),(R+0),4);
}
B4cd6ad:{NFSU2_TR(0x4cd6ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd6b2ull));
TAIL_STATIC(0x4b3750u,4b3);
}
B4cd6b2:L4cd6b2:{c.instructions+=1;NFSU2_TR(0x4cd6b2);
{goto L4cd6b6;}
}
B4cd6b4:L4cd6b4:{c.instructions+=1;NFSU2_TR(0x4cd6b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd6b6:L4cd6b6:{c.instructions+=6;NFSU2_TR(0x4cd6b6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd6b8:{NFSU2_TR(0x4cd6b8);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B4cd6bb:{NFSU2_TR(0x4cd6bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd6bc:{NFSU2_TR(0x4cd6bc);
__builtin_memmove((R+4),(R+24),4);
}
B4cd6be:{NFSU2_TR(0x4cd6be);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd6c2:{NFSU2_TR(0x4cd6c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd6c7ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd6c7:L4cd6c7:{c.instructions+=2;NFSU2_TR(0x4cd6c7);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd6c9:{NFSU2_TR(0x4cd6c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd6ceull));
TAIL_STATIC(0x575620u,575);
}
B4cd6ce:L4cd6ce:{c.instructions+=5;NFSU2_TR(0x4cd6ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd6d1:{NFSU2_TR(0x4cd6d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd6d5:{NFSU2_TR(0x4cd6d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd6d7:{NFSU2_TR(0x4cd6d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd6df:{NFSU2_TR(0x4cd6df);
if(r1(R+518)){{goto L4cd708;}}
}
B4cd6e1:L4cd6e1:{c.instructions+=11;NFSU2_TR(0x4cd6e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd6e3:{NFSU2_TR(0x4cd6e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd6e9:{NFSU2_TR(0x4cd6e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd6ea:{NFSU2_TR(0x4cd6ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd6f0:{NFSU2_TR(0x4cd6f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd6f1:{NFSU2_TR(0x4cd6f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd6f7:{NFSU2_TR(0x4cd6f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd6f8:{NFSU2_TR(0x4cd6f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd6fe:{NFSU2_TR(0x4cd6fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd6ff:{NFSU2_TR(0x4cd6ff);
__builtin_memmove((R+4),(R+0),4);
}
B4cd701:{NFSU2_TR(0x4cd701);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd706ull));
TAIL_STATIC(0x4b3930u,4b3);
}
B4cd706:L4cd706:{c.instructions+=1;NFSU2_TR(0x4cd706);
{goto L4cd70a;}
}
B4cd708:L4cd708:{c.instructions+=1;NFSU2_TR(0x4cd708);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd70a:L4cd70a:{c.instructions+=5;NFSU2_TR(0x4cd70a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd70c:{NFSU2_TR(0x4cd70c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd70d:{NFSU2_TR(0x4cd70d);
__builtin_memmove((R+4),(R+24),4);
}
B4cd70f:{NFSU2_TR(0x4cd70f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd713:{NFSU2_TR(0x4cd713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd718ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd718:L4cd718:{c.instructions+=2;NFSU2_TR(0x4cd718);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd71a:{NFSU2_TR(0x4cd71a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd71full));
TAIL_STATIC(0x575620u,575);
}
B4cd71f:L4cd71f:{c.instructions+=6;NFSU2_TR(0x4cd71f);
__builtin_memmove((R+28),(R+0),4);
}
B4cd721:{NFSU2_TR(0x4cd721);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd724:{NFSU2_TR(0x4cd724);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd728:{NFSU2_TR(0x4cd728);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd72a:{NFSU2_TR(0x4cd72a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd732:{NFSU2_TR(0x4cd732);
if(r1(R+518)){{goto L4cd761;}}
}
B4cd734:L4cd734:{c.instructions+=11;NFSU2_TR(0x4cd734);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd736:{NFSU2_TR(0x4cd736);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cd73c:{NFSU2_TR(0x4cd73c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd73d:{NFSU2_TR(0x4cd73d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd743:{NFSU2_TR(0x4cd743);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd744:{NFSU2_TR(0x4cd744);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd74a:{NFSU2_TR(0x4cd74a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd74b:{NFSU2_TR(0x4cd74b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cd751:{NFSU2_TR(0x4cd751);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd752:{NFSU2_TR(0x4cd752);
__builtin_memmove((R+4),(R+28),4);
}
B4cd754:{NFSU2_TR(0x4cd754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd759ull));
TAIL_STATIC(0x51e230u,51e);
}
B4cd759:L4cd759:{c.instructions+=2;NFSU2_TR(0x4cd759);
u8 U[4];
w4(U+0,u32(0x791410ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4cd75f:{NFSU2_TR(0x4cd75f);
{goto L4cd763;}
}
B4cd761:L4cd761:{c.instructions+=1;NFSU2_TR(0x4cd761);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cd763:L4cd763:{c.instructions+=5;NFSU2_TR(0x4cd763);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd765:{NFSU2_TR(0x4cd765);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd766:{NFSU2_TR(0x4cd766);
__builtin_memmove((R+4),(R+24),4);
}
B4cd768:{NFSU2_TR(0x4cd768);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd770:{NFSU2_TR(0x4cd770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd775ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd775:L4cd775:{c.instructions+=6;NFSU2_TR(0x4cd775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cd776:{NFSU2_TR(0x4cd776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cd777:{NFSU2_TR(0x4cd777);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cd77b:{NFSU2_TR(0x4cd77b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd782:{NFSU2_TR(0x4cd782);
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
B4cd785:{NFSU2_TR(0x4cd785);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cd786:L4cd786:{c.instructions+=2;NFSU2_TR(0x4cd786);
__builtin_memmove((R+4),(R+24),4);
}
B4cd788:{NFSU2_TR(0x4cd788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd78dull));
TAIL_STATIC(0x4b41c0u,4b4);
}
B4cd78d:L4cd78d:{c.instructions+=5;NFSU2_TR(0x4cd78d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cd791:{NFSU2_TR(0x4cd791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cd792:{NFSU2_TR(0x4cd792);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd799:{NFSU2_TR(0x4cd799);
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
B4cd79c:{NFSU2_TR(0x4cd79c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cd7a0:L4cd7a0:{c.instructions+=11;NFSU2_TR(0x4cd7a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd7a2:{NFSU2_TR(0x4cd7a2);
u8 U[4];
w4(U+0,u32(0x7743c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd7a7:{NFSU2_TR(0x4cd7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cd7ad:{NFSU2_TR(0x4cd7ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd7ae:{NFSU2_TR(0x4cd7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd7b5:{NFSU2_TR(0x4cd7b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd7b6:{NFSU2_TR(0x4cd7b6);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4cd7bb:{NFSU2_TR(0x4cd7bb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cd7be:{NFSU2_TR(0x4cd7be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd7bf:{NFSU2_TR(0x4cd7bf);
__builtin_memmove((R+24),(R+4),4);
}
B4cd7c1:{NFSU2_TR(0x4cd7c1);
if(r1(R+518)){{goto L4cd9fd;}}
}
B4cd7c7:L4cd7c7:{c.instructions+=2;NFSU2_TR(0x4cd7c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd7cc:{NFSU2_TR(0x4cd7cc);
if(r1(R+518)){{goto L4cd9fd;}}
}
B4cd7d2:L4cd7d2:{c.instructions+=3;NFSU2_TR(0x4cd7d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd7d3:{NFSU2_TR(0x4cd7d3);
w4(R+4,u32(0x83aab4ull));
}
B4cd7d8:{NFSU2_TR(0x4cd7d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd7ddull));
TAIL_STATIC(0x502910u,502);
}
B4cd7dd:L4cd7dd:{c.instructions+=3;NFSU2_TR(0x4cd7dd);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B4cd7e0:{NFSU2_TR(0x4cd7e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd7e1:{NFSU2_TR(0x4cd7e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd7e6ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4cd7e6:L4cd7e6:{c.instructions+=5;NFSU2_TR(0x4cd7e6);
__builtin_memmove((R+28),(R+0),4);
}
B4cd7e8:{NFSU2_TR(0x4cd7e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x86ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cd7ee:{NFSU2_TR(0x4cd7ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd7f1:{NFSU2_TR(0x4cd7f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cd7f3:{NFSU2_TR(0x4cd7f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cd864;}}
}
B4cd7f5:L4cd7f5:{c.instructions+=6;NFSU2_TR(0x4cd7f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4cd7fc:{NFSU2_TR(0x4cd7fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd7fe:{NFSU2_TR(0x4cd7fe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd800:{NFSU2_TR(0x4cd800);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd801:{NFSU2_TR(0x4cd801);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd803:{NFSU2_TR(0x4cd803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd808ull));
TAIL_STATIC(0x5156f0u,515);
}
B4cd808:L4cd808:{c.instructions+=3;NFSU2_TR(0x4cd808);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cd80b:{NFSU2_TR(0x4cd80b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cd80d:{NFSU2_TR(0x4cd80d);
if(r1(R+518)){{goto L4cd864;}}
}
B4cd80f:L4cd80f:{c.instructions+=2;NFSU2_TR(0x4cd80f);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd811:{NFSU2_TR(0x4cd811);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd816ull));
TAIL_STATIC(0x575620u,575);
}
B4cd816:L4cd816:{c.instructions+=5;NFSU2_TR(0x4cd816);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd819:{NFSU2_TR(0x4cd819);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd81d:{NFSU2_TR(0x4cd81d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd81f:{NFSU2_TR(0x4cd81f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd827:{NFSU2_TR(0x4cd827);
if(r1(R+518)){{goto L4cd850;}}
}
B4cd829:L4cd829:{c.instructions+=11;NFSU2_TR(0x4cd829);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd82b:{NFSU2_TR(0x4cd82b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd831:{NFSU2_TR(0x4cd831);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd832:{NFSU2_TR(0x4cd832);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd838:{NFSU2_TR(0x4cd838);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd839:{NFSU2_TR(0x4cd839);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd83f:{NFSU2_TR(0x4cd83f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd840:{NFSU2_TR(0x4cd840);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd846:{NFSU2_TR(0x4cd846);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd847:{NFSU2_TR(0x4cd847);
__builtin_memmove((R+4),(R+0),4);
}
B4cd849:{NFSU2_TR(0x4cd849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd84eull));
TAIL_STATIC(0x4b40b0u,4b4);
}
B4cd84e:L4cd84e:{c.instructions+=1;NFSU2_TR(0x4cd84e);
{goto L4cd852;}
}
B4cd850:L4cd850:{c.instructions+=1;NFSU2_TR(0x4cd850);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd852:L4cd852:{c.instructions+=5;NFSU2_TR(0x4cd852);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd854:{NFSU2_TR(0x4cd854);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd855:{NFSU2_TR(0x4cd855);
__builtin_memmove((R+4),(R+24),4);
}
B4cd857:{NFSU2_TR(0x4cd857);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd85f:{NFSU2_TR(0x4cd85f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd864ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd864:L4cd864:{c.instructions+=3;NFSU2_TR(0x4cd864);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cd86a:{NFSU2_TR(0x4cd86a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd86c:{NFSU2_TR(0x4cd86c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cd8c3;}}
}
B4cd86e:L4cd86e:{c.instructions+=2;NFSU2_TR(0x4cd86e);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd870:{NFSU2_TR(0x4cd870);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd875ull));
TAIL_STATIC(0x575620u,575);
}
B4cd875:L4cd875:{c.instructions+=5;NFSU2_TR(0x4cd875);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd878:{NFSU2_TR(0x4cd878);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd87c:{NFSU2_TR(0x4cd87c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd87e:{NFSU2_TR(0x4cd87e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd886:{NFSU2_TR(0x4cd886);
if(r1(R+518)){{goto L4cd8af;}}
}
B4cd888:L4cd888:{c.instructions+=11;NFSU2_TR(0x4cd888);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd88a:{NFSU2_TR(0x4cd88a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd890:{NFSU2_TR(0x4cd890);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd891:{NFSU2_TR(0x4cd891);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd897:{NFSU2_TR(0x4cd897);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd898:{NFSU2_TR(0x4cd898);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd89e:{NFSU2_TR(0x4cd89e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd89f:{NFSU2_TR(0x4cd89f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd8a5:{NFSU2_TR(0x4cd8a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd8a6:{NFSU2_TR(0x4cd8a6);
__builtin_memmove((R+4),(R+0),4);
}
B4cd8a8:{NFSU2_TR(0x4cd8a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd8adull));
TAIL_STATIC(0x4b3d30u,4b3);
}
B4cd8ad:L4cd8ad:{c.instructions+=1;NFSU2_TR(0x4cd8ad);
{goto L4cd8b1;}
}
B4cd8af:L4cd8af:{c.instructions+=1;NFSU2_TR(0x4cd8af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd8b1:L4cd8b1:{c.instructions+=5;NFSU2_TR(0x4cd8b1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd8b3:{NFSU2_TR(0x4cd8b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd8b4:{NFSU2_TR(0x4cd8b4);
__builtin_memmove((R+4),(R+24),4);
}
B4cd8b6:{NFSU2_TR(0x4cd8b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd8be:{NFSU2_TR(0x4cd8be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd8c3ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd8c3:L4cd8c3:{c.instructions+=2;NFSU2_TR(0x4cd8c3);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cd8ca:{NFSU2_TR(0x4cd8ca);
if(r1(R+518)){{goto L4cd984;}}
}
B4cd8d0:L4cd8d0:{c.instructions+=3;NFSU2_TR(0x4cd8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cd8d6:{NFSU2_TR(0x4cd8d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd8d8:{NFSU2_TR(0x4cd8d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cd92f;}}
}
B4cd8da:L4cd8da:{c.instructions+=2;NFSU2_TR(0x4cd8da);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd8dc:{NFSU2_TR(0x4cd8dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd8e1ull));
TAIL_STATIC(0x575620u,575);
}
B4cd8e1:L4cd8e1:{c.instructions+=5;NFSU2_TR(0x4cd8e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd8e4:{NFSU2_TR(0x4cd8e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd8e8:{NFSU2_TR(0x4cd8e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd8ea:{NFSU2_TR(0x4cd8ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd8f2:{NFSU2_TR(0x4cd8f2);
if(r1(R+518)){{goto L4cd91b;}}
}
B4cd8f4:L4cd8f4:{c.instructions+=11;NFSU2_TR(0x4cd8f4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd8f6:{NFSU2_TR(0x4cd8f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd8fc:{NFSU2_TR(0x4cd8fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd8fd:{NFSU2_TR(0x4cd8fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd903:{NFSU2_TR(0x4cd903);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd904:{NFSU2_TR(0x4cd904);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd90a:{NFSU2_TR(0x4cd90a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd90b:{NFSU2_TR(0x4cd90b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd911:{NFSU2_TR(0x4cd911);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd912:{NFSU2_TR(0x4cd912);
__builtin_memmove((R+4),(R+0),4);
}
B4cd914:{NFSU2_TR(0x4cd914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd919ull));
TAIL_STATIC(0x4b3750u,4b3);
}
B4cd919:L4cd919:{c.instructions+=1;NFSU2_TR(0x4cd919);
{goto L4cd91d;}
}
B4cd91b:L4cd91b:{c.instructions+=1;NFSU2_TR(0x4cd91b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd91d:L4cd91d:{c.instructions+=5;NFSU2_TR(0x4cd91d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd91f:{NFSU2_TR(0x4cd91f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd920:{NFSU2_TR(0x4cd920);
__builtin_memmove((R+4),(R+24),4);
}
B4cd922:{NFSU2_TR(0x4cd922);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd92a:{NFSU2_TR(0x4cd92a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd92full));
TAIL_STATIC(0x54f170u,54f);
}
B4cd92f:L4cd92f:{c.instructions+=2;NFSU2_TR(0x4cd92f);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd931:{NFSU2_TR(0x4cd931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd936ull));
TAIL_STATIC(0x575620u,575);
}
B4cd936:L4cd936:{c.instructions+=5;NFSU2_TR(0x4cd936);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd939:{NFSU2_TR(0x4cd939);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd93d:{NFSU2_TR(0x4cd93d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd93f:{NFSU2_TR(0x4cd93f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd947:{NFSU2_TR(0x4cd947);
if(r1(R+518)){{goto L4cd970;}}
}
B4cd949:L4cd949:{c.instructions+=11;NFSU2_TR(0x4cd949);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd94b:{NFSU2_TR(0x4cd94b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd951:{NFSU2_TR(0x4cd951);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd952:{NFSU2_TR(0x4cd952);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd958:{NFSU2_TR(0x4cd958);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd959:{NFSU2_TR(0x4cd959);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd95f:{NFSU2_TR(0x4cd95f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd960:{NFSU2_TR(0x4cd960);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd966:{NFSU2_TR(0x4cd966);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd967:{NFSU2_TR(0x4cd967);
__builtin_memmove((R+4),(R+0),4);
}
B4cd969:{NFSU2_TR(0x4cd969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd96eull));
TAIL_STATIC(0x4b3930u,4b3);
}
B4cd96e:L4cd96e:{c.instructions+=1;NFSU2_TR(0x4cd96e);
{goto L4cd972;}
}
B4cd970:L4cd970:{c.instructions+=1;NFSU2_TR(0x4cd970);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd972:L4cd972:{c.instructions+=5;NFSU2_TR(0x4cd972);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd974:{NFSU2_TR(0x4cd974);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd975:{NFSU2_TR(0x4cd975);
__builtin_memmove((R+4),(R+24),4);
}
B4cd977:{NFSU2_TR(0x4cd977);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd97f:{NFSU2_TR(0x4cd97f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd984ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd984:L4cd984:{c.instructions+=3;NFSU2_TR(0x4cd984);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4cd98b:{NFSU2_TR(0x4cd98b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cd98c:{NFSU2_TR(0x4cd98c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cda04;}}
}
B4cd98e:L4cd98e:{c.instructions+=2;NFSU2_TR(0x4cd98e);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd990:{NFSU2_TR(0x4cd990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd995ull));
TAIL_STATIC(0x575620u,575);
}
B4cd995:L4cd995:{c.instructions+=5;NFSU2_TR(0x4cd995);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cd998:{NFSU2_TR(0x4cd998);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd99c:{NFSU2_TR(0x4cd99c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cd99e:{NFSU2_TR(0x4cd99e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd9a6:{NFSU2_TR(0x4cd9a6);
if(r1(R+518)){{goto L4cd9cf;}}
}
B4cd9a8:L4cd9a8:{c.instructions+=11;NFSU2_TR(0x4cd9a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd9aa:{NFSU2_TR(0x4cd9aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd9b0:{NFSU2_TR(0x4cd9b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd9b1:{NFSU2_TR(0x4cd9b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd9b7:{NFSU2_TR(0x4cd9b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd9b8:{NFSU2_TR(0x4cd9b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cd9be:{NFSU2_TR(0x4cd9be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd9bf:{NFSU2_TR(0x4cd9bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cd9c5:{NFSU2_TR(0x4cd9c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd9c6:{NFSU2_TR(0x4cd9c6);
__builtin_memmove((R+4),(R+0),4);
}
B4cd9c8:{NFSU2_TR(0x4cd9c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd9cdull));
TAIL_STATIC(0x4b3aa0u,4b3);
}
B4cd9cd:L4cd9cd:{c.instructions+=1;NFSU2_TR(0x4cd9cd);
{goto L4cd9d1;}
}
B4cd9cf:L4cd9cf:{c.instructions+=1;NFSU2_TR(0x4cd9cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cd9d1:L4cd9d1:{c.instructions+=5;NFSU2_TR(0x4cd9d1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd9d3:{NFSU2_TR(0x4cd9d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cd9d4:{NFSU2_TR(0x4cd9d4);
__builtin_memmove((R+4),(R+24),4);
}
B4cd9d6:{NFSU2_TR(0x4cd9d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cd9de:{NFSU2_TR(0x4cd9de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cd9e3ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cd9e3:L4cd9e3:{c.instructions+=6;NFSU2_TR(0x4cd9e3);
s4(0x89e7c4,u32(0x0ull));
}
B4cd9ed:{NFSU2_TR(0x4cd9ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cd9ee:{NFSU2_TR(0x4cd9ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cd9f2:{NFSU2_TR(0x4cd9f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cd9f9:{NFSU2_TR(0x4cd9f9);
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
B4cd9fc:{NFSU2_TR(0x4cd9fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cd9fd:L4cd9fd:{c.instructions+=2;NFSU2_TR(0x4cd9fd);
__builtin_memmove((R+4),(R+24),4);
}
B4cd9ff:{NFSU2_TR(0x4cd9ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cda04ull));
TAIL_STATIC(0x4b41c0u,4b4);
}
B4cda04:L4cda04:{c.instructions+=5;NFSU2_TR(0x4cda04);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cda08:{NFSU2_TR(0x4cda08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cda09:{NFSU2_TR(0x4cda09);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cda10:{NFSU2_TR(0x4cda10);
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
B4cda13:{NFSU2_TR(0x4cda13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cda20:L4cda20:{c.instructions+=11;NFSU2_TR(0x4cda20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cda22:{NFSU2_TR(0x4cda22);
u8 U[4];
w4(U+0,u32(0x774468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cda27:{NFSU2_TR(0x4cda27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cda2d:{NFSU2_TR(0x4cda2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cda2e:{NFSU2_TR(0x4cda2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cda35:{NFSU2_TR(0x4cda35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cda36:{NFSU2_TR(0x4cda36);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4cda3b:{NFSU2_TR(0x4cda3b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cda3e:{NFSU2_TR(0x4cda3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cda3f:{NFSU2_TR(0x4cda3f);
__builtin_memmove((R+24),(R+4),4);
}
B4cda41:{NFSU2_TR(0x4cda41);
if(r1(R+518)){{goto L4cdb1e;}}
}
B4cda47:L4cda47:{c.instructions+=2;NFSU2_TR(0x4cda47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cda4c:{NFSU2_TR(0x4cda4c);
if(r1(R+518)){{goto L4cdb1e;}}
}
B4cda52:L4cda52:{c.instructions+=3;NFSU2_TR(0x4cda52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cda53:{NFSU2_TR(0x4cda53);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cda55:{NFSU2_TR(0x4cda55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cda5aull));
TAIL_STATIC(0x575620u,575);
}
B4cda5a:L4cda5a:{c.instructions+=6;NFSU2_TR(0x4cda5a);
__builtin_memmove((R+28),(R+0),4);
}
B4cda5c:{NFSU2_TR(0x4cda5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cda5f:{NFSU2_TR(0x4cda5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cda63:{NFSU2_TR(0x4cda63);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cda65:{NFSU2_TR(0x4cda65);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cda6d:{NFSU2_TR(0x4cda6d);
if(r1(R+518)){{goto L4cda9c;}}
}
B4cda6f:L4cda6f:{c.instructions+=11;NFSU2_TR(0x4cda6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cda71:{NFSU2_TR(0x4cda71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cda77:{NFSU2_TR(0x4cda77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cda78:{NFSU2_TR(0x4cda78);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cda7e:{NFSU2_TR(0x4cda7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cda7f:{NFSU2_TR(0x4cda7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cda85:{NFSU2_TR(0x4cda85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cda86:{NFSU2_TR(0x4cda86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cda8c:{NFSU2_TR(0x4cda8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cda8d:{NFSU2_TR(0x4cda8d);
__builtin_memmove((R+4),(R+28),4);
}
B4cda8f:{NFSU2_TR(0x4cda8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cda94ull));
TAIL_STATIC(0x51e230u,51e);
}
B4cda94:L4cda94:{c.instructions+=2;NFSU2_TR(0x4cda94);
u8 U[4];
w4(U+0,u32(0x7914a0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4cda9a:{NFSU2_TR(0x4cda9a);
{goto L4cda9e;}
}
B4cda9c:L4cda9c:{c.instructions+=1;NFSU2_TR(0x4cda9c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cda9e:L4cda9e:{c.instructions+=5;NFSU2_TR(0x4cda9e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdaa0:{NFSU2_TR(0x4cdaa0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdaa1:{NFSU2_TR(0x4cdaa1);
__builtin_memmove((R+4),(R+24),4);
}
B4cdaa3:{NFSU2_TR(0x4cdaa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cdaab:{NFSU2_TR(0x4cdaab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdab0ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cdab0:L4cdab0:{c.instructions+=2;NFSU2_TR(0x4cdab0);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdab2:{NFSU2_TR(0x4cdab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdab7ull));
TAIL_STATIC(0x575620u,575);
}
B4cdab7:L4cdab7:{c.instructions+=6;NFSU2_TR(0x4cdab7);
__builtin_memmove((R+28),(R+0),4);
}
B4cdab9:{NFSU2_TR(0x4cdab9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cdabc:{NFSU2_TR(0x4cdabc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdac0:{NFSU2_TR(0x4cdac0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cdac2:{NFSU2_TR(0x4cdac2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cdaca:{NFSU2_TR(0x4cdaca);
if(r1(R+518)){{goto L4cdaf9;}}
}
B4cdacc:L4cdacc:{c.instructions+=11;NFSU2_TR(0x4cdacc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdace:{NFSU2_TR(0x4cdace);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cdad4:{NFSU2_TR(0x4cdad4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdad5:{NFSU2_TR(0x4cdad5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cdadb:{NFSU2_TR(0x4cdadb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdadc:{NFSU2_TR(0x4cdadc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cdae2:{NFSU2_TR(0x4cdae2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdae3:{NFSU2_TR(0x4cdae3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cdae9:{NFSU2_TR(0x4cdae9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdaea:{NFSU2_TR(0x4cdaea);
__builtin_memmove((R+4),(R+28),4);
}
B4cdaec:{NFSU2_TR(0x4cdaec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdaf1ull));
TAIL_STATIC(0x51e230u,51e);
}
B4cdaf1:L4cdaf1:{c.instructions+=2;NFSU2_TR(0x4cdaf1);
u8 U[4];
w4(U+0,u32(0x7914e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4cdaf7:{NFSU2_TR(0x4cdaf7);
{goto L4cdafb;}
}
B4cdaf9:L4cdaf9:{c.instructions+=1;NFSU2_TR(0x4cdaf9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cdafb:L4cdafb:{c.instructions+=5;NFSU2_TR(0x4cdafb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdafd:{NFSU2_TR(0x4cdafd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdafe:{NFSU2_TR(0x4cdafe);
__builtin_memmove((R+4),(R+24),4);
}
B4cdb00:{NFSU2_TR(0x4cdb00);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cdb08:{NFSU2_TR(0x4cdb08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdb0dull));
TAIL_STATIC(0x54f170u,54f);
}
B4cdb0d:L4cdb0d:{c.instructions+=6;NFSU2_TR(0x4cdb0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cdb0e:{NFSU2_TR(0x4cdb0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cdb0f:{NFSU2_TR(0x4cdb0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cdb13:{NFSU2_TR(0x4cdb13);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdb1a:{NFSU2_TR(0x4cdb1a);
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
B4cdb1d:{NFSU2_TR(0x4cdb1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cdb1e:L4cdb1e:{c.instructions+=2;NFSU2_TR(0x4cdb1e);
__builtin_memmove((R+4),(R+24),4);
}
B4cdb20:{NFSU2_TR(0x4cdb20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdb25ull));
TAIL_STATIC(0x4b41c0u,4b4);
}
B4cdb25:L4cdb25:{c.instructions+=5;NFSU2_TR(0x4cdb25);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cdb29:{NFSU2_TR(0x4cdb29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cdb2a:{NFSU2_TR(0x4cdb2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdb31:{NFSU2_TR(0x4cdb31);
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
B4cdb34:{NFSU2_TR(0x4cdb34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cdb40:L4cdb40:{c.instructions+=11;NFSU2_TR(0x4cdb40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdb42:{NFSU2_TR(0x4cdb42);
u8 U[4];
w4(U+0,u32(0x7744d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdb47:{NFSU2_TR(0x4cdb47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cdb4d:{NFSU2_TR(0x4cdb4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdb4e:{NFSU2_TR(0x4cdb4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdb55:{NFSU2_TR(0x4cdb55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdb56:{NFSU2_TR(0x4cdb56);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4cdb5b:{NFSU2_TR(0x4cdb5b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cdb5e:{NFSU2_TR(0x4cdb5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdb5f:{NFSU2_TR(0x4cdb5f);
__builtin_memmove((R+24),(R+4),4);
}
B4cdb61:{NFSU2_TR(0x4cdb61);
if(r1(R+518)){{goto L4cdd1d;}}
}
B4cdb67:L4cdb67:{c.instructions+=2;NFSU2_TR(0x4cdb67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cdb6c:{NFSU2_TR(0x4cdb6c);
if(r1(R+518)){{goto L4cdd1d;}}
}
B4cdb72:L4cdb72:{c.instructions+=4;NFSU2_TR(0x4cdb72);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdb73:{NFSU2_TR(0x4cdb73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdb74:{NFSU2_TR(0x4cdb74);
w4(R+4,u32(0x83aab4ull));
}
B4cdb79:{NFSU2_TR(0x4cdb79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdb7eull));
TAIL_STATIC(0x502910u,502);
}
B4cdb7e:L4cdb7e:{c.instructions+=3;NFSU2_TR(0x4cdb7e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B4cdb81:{NFSU2_TR(0x4cdb81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdb82:{NFSU2_TR(0x4cdb82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdb87ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4cdb87:L4cdb87:{c.instructions+=5;NFSU2_TR(0x4cdb87);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4cdb8d:{NFSU2_TR(0x4cdb8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cdb90:{NFSU2_TR(0x4cdb90);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B4cdb93:{NFSU2_TR(0x4cdb93);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4cdb96:{NFSU2_TR(0x4cdb96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cdc03;}}
}
B4cdb98:L4cdb98:{c.instructions+=6;NFSU2_TR(0x4cdb98);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4cdb9f:{NFSU2_TR(0x4cdb9f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdba1:{NFSU2_TR(0x4cdba1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdba3:{NFSU2_TR(0x4cdba3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdba4:{NFSU2_TR(0x4cdba4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdba6:{NFSU2_TR(0x4cdba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdbabull));
TAIL_STATIC(0x5156f0u,515);
}
B4cdbab:L4cdbab:{c.instructions+=3;NFSU2_TR(0x4cdbab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cdbae:{NFSU2_TR(0x4cdbae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cdbb0:{NFSU2_TR(0x4cdbb0);
if(r1(R+518)){{goto L4cdc03;}}
}
B4cdbb2:L4cdbb2:{c.instructions+=2;NFSU2_TR(0x4cdbb2);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdbb4:{NFSU2_TR(0x4cdbb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdbb9ull));
TAIL_STATIC(0x575620u,575);
}
B4cdbb9:L4cdbb9:{c.instructions+=5;NFSU2_TR(0x4cdbb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cdbbc:{NFSU2_TR(0x4cdbbc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdbc0:{NFSU2_TR(0x4cdbc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cdbc2:{NFSU2_TR(0x4cdbc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cdbca:{NFSU2_TR(0x4cdbca);
if(r1(R+518)){{goto L4cdbf3;}}
}
B4cdbcc:L4cdbcc:{c.instructions+=11;NFSU2_TR(0x4cdbcc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdbce:{NFSU2_TR(0x4cdbce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cdbd4:{NFSU2_TR(0x4cdbd4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdbd5:{NFSU2_TR(0x4cdbd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cdbdb:{NFSU2_TR(0x4cdbdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdbdc:{NFSU2_TR(0x4cdbdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cdbe2:{NFSU2_TR(0x4cdbe2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdbe3:{NFSU2_TR(0x4cdbe3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cdbe9:{NFSU2_TR(0x4cdbe9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdbea:{NFSU2_TR(0x4cdbea);
__builtin_memmove((R+4),(R+0),4);
}
B4cdbec:{NFSU2_TR(0x4cdbec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdbf1ull));
TAIL_STATIC(0x4b40b0u,4b4);
}
B4cdbf1:L4cdbf1:{c.instructions+=1;NFSU2_TR(0x4cdbf1);
{goto L4cdbf5;}
}
B4cdbf3:L4cdbf3:{c.instructions+=1;NFSU2_TR(0x4cdbf3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cdbf5:L4cdbf5:{c.instructions+=5;NFSU2_TR(0x4cdbf5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdbf7:{NFSU2_TR(0x4cdbf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdbf8:{NFSU2_TR(0x4cdbf8);
__builtin_memmove((R+4),(R+24),4);
}
B4cdbfa:{NFSU2_TR(0x4cdbfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdbfe:{NFSU2_TR(0x4cdbfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdc03ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cdc03:L4cdc03:{c.instructions+=2;NFSU2_TR(0x4cdc03);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cdc0a:{NFSU2_TR(0x4cdc0a);
if(r1(R+518)){{goto L4cdcb2;}}
}
B4cdc10:L4cdc10:{c.instructions+=2;NFSU2_TR(0x4cdc10);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc12:{NFSU2_TR(0x4cdc12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdc17ull));
TAIL_STATIC(0x575620u,575);
}
B4cdc17:L4cdc17:{c.instructions+=5;NFSU2_TR(0x4cdc17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cdc1a:{NFSU2_TR(0x4cdc1a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdc1e:{NFSU2_TR(0x4cdc1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cdc20:{NFSU2_TR(0x4cdc20);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cdc28:{NFSU2_TR(0x4cdc28);
if(r1(R+518)){{goto L4cdc51;}}
}
B4cdc2a:L4cdc2a:{c.instructions+=11;NFSU2_TR(0x4cdc2a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc2c:{NFSU2_TR(0x4cdc2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cdc32:{NFSU2_TR(0x4cdc32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc33:{NFSU2_TR(0x4cdc33);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cdc39:{NFSU2_TR(0x4cdc39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc3a:{NFSU2_TR(0x4cdc3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cdc40:{NFSU2_TR(0x4cdc40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc41:{NFSU2_TR(0x4cdc41);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cdc47:{NFSU2_TR(0x4cdc47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc48:{NFSU2_TR(0x4cdc48);
__builtin_memmove((R+4),(R+0),4);
}
B4cdc4a:{NFSU2_TR(0x4cdc4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdc4full));
TAIL_STATIC(0x4b3750u,4b3);
}
B4cdc4f:L4cdc4f:{c.instructions+=1;NFSU2_TR(0x4cdc4f);
{goto L4cdc53;}
}
B4cdc51:L4cdc51:{c.instructions+=1;NFSU2_TR(0x4cdc51);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cdc53:L4cdc53:{c.instructions+=5;NFSU2_TR(0x4cdc53);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc55:{NFSU2_TR(0x4cdc55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc56:{NFSU2_TR(0x4cdc56);
__builtin_memmove((R+4),(R+24),4);
}
B4cdc58:{NFSU2_TR(0x4cdc58);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdc5c:{NFSU2_TR(0x4cdc5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdc61ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cdc61:L4cdc61:{c.instructions+=2;NFSU2_TR(0x4cdc61);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc63:{NFSU2_TR(0x4cdc63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdc68ull));
TAIL_STATIC(0x575620u,575);
}
B4cdc68:L4cdc68:{c.instructions+=5;NFSU2_TR(0x4cdc68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cdc6b:{NFSU2_TR(0x4cdc6b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdc6f:{NFSU2_TR(0x4cdc6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cdc71:{NFSU2_TR(0x4cdc71);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cdc79:{NFSU2_TR(0x4cdc79);
if(r1(R+518)){{goto L4cdca2;}}
}
B4cdc7b:L4cdc7b:{c.instructions+=11;NFSU2_TR(0x4cdc7b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc7d:{NFSU2_TR(0x4cdc7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cdc83:{NFSU2_TR(0x4cdc83);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc84:{NFSU2_TR(0x4cdc84);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cdc8a:{NFSU2_TR(0x4cdc8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc8b:{NFSU2_TR(0x4cdc8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cdc91:{NFSU2_TR(0x4cdc91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc92:{NFSU2_TR(0x4cdc92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cdc98:{NFSU2_TR(0x4cdc98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdc99:{NFSU2_TR(0x4cdc99);
__builtin_memmove((R+4),(R+0),4);
}
B4cdc9b:{NFSU2_TR(0x4cdc9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdca0ull));
TAIL_STATIC(0x4b3930u,4b3);
}
B4cdca0:L4cdca0:{c.instructions+=1;NFSU2_TR(0x4cdca0);
{goto L4cdca4;}
}
B4cdca2:L4cdca2:{c.instructions+=1;NFSU2_TR(0x4cdca2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cdca4:L4cdca4:{c.instructions+=5;NFSU2_TR(0x4cdca4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdca6:{NFSU2_TR(0x4cdca6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdca7:{NFSU2_TR(0x4cdca7);
__builtin_memmove((R+4),(R+24),4);
}
B4cdca9:{NFSU2_TR(0x4cdca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdcad:{NFSU2_TR(0x4cdcad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdcb2ull));
TAIL_STATIC(0x54f170u,54f);
}
B4cdcb2:L4cdcb2:{c.instructions+=2;NFSU2_TR(0x4cdcb2);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdcb4:{NFSU2_TR(0x4cdcb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdcb9ull));
TAIL_STATIC(0x575620u,575);
}
B4cdcb9:L4cdcb9:{c.instructions+=6;NFSU2_TR(0x4cdcb9);
__builtin_memmove((R+28),(R+0),4);
}
B4cdcbb:{NFSU2_TR(0x4cdcbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cdcbe:{NFSU2_TR(0x4cdcbe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdcc2:{NFSU2_TR(0x4cdcc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cdcc4:{NFSU2_TR(0x4cdcc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cdccc:{NFSU2_TR(0x4cdccc);
if(r1(R+518)){{goto L4cdcfb;}}
}
B4cdcce:L4cdcce:{c.instructions+=11;NFSU2_TR(0x4cdcce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdcd0:{NFSU2_TR(0x4cdcd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cdcd6:{NFSU2_TR(0x4cdcd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdcd7:{NFSU2_TR(0x4cdcd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cdcdd:{NFSU2_TR(0x4cdcdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdcde:{NFSU2_TR(0x4cdcde);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cdce4:{NFSU2_TR(0x4cdce4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdce5:{NFSU2_TR(0x4cdce5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cdceb:{NFSU2_TR(0x4cdceb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdcec:{NFSU2_TR(0x4cdcec);
__builtin_memmove((R+4),(R+28),4);
}
B4cdcee:{NFSU2_TR(0x4cdcee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdcf3ull));
TAIL_STATIC(0x51e230u,51e);
}
B4cdcf3:L4cdcf3:{c.instructions+=2;NFSU2_TR(0x4cdcf3);
u8 U[4];
w4(U+0,u32(0x791410ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4cdcf9:{NFSU2_TR(0x4cdcf9);
{goto L4cdcfd;}
}
B4cdcfb:L4cdcfb:{c.instructions+=1;NFSU2_TR(0x4cdcfb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cdcfd:L4cdcfd:{c.instructions+=5;NFSU2_TR(0x4cdcfd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdcff:{NFSU2_TR(0x4cdcff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdd00:{NFSU2_TR(0x4cdd00);
__builtin_memmove((R+4),(R+24),4);
}
B4cdd02:{NFSU2_TR(0x4cdd02);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdd06:{NFSU2_TR(0x4cdd06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdd0bull));
TAIL_STATIC(0x54f170u,54f);
}
B4cdd0b:L4cdd0b:{c.instructions+=7;NFSU2_TR(0x4cdd0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cdd0c:{NFSU2_TR(0x4cdd0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cdd0d:{NFSU2_TR(0x4cdd0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cdd0e:{NFSU2_TR(0x4cdd0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cdd12:{NFSU2_TR(0x4cdd12);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdd19:{NFSU2_TR(0x4cdd19);
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
B4cdd1c:{NFSU2_TR(0x4cdd1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cdd1d:L4cdd1d:{c.instructions+=2;NFSU2_TR(0x4cdd1d);
__builtin_memmove((R+4),(R+24),4);
}
B4cdd1f:{NFSU2_TR(0x4cdd1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdd24ull));
TAIL_STATIC(0x4b41c0u,4b4);
}
B4cdd24:L4cdd24:{c.instructions+=5;NFSU2_TR(0x4cdd24);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cdd28:{NFSU2_TR(0x4cdd28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cdd29:{NFSU2_TR(0x4cdd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdd30:{NFSU2_TR(0x4cdd30);
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
B4cdd33:{NFSU2_TR(0x4cdd33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cdd40:L4cdd40:{c.instructions+=9;NFSU2_TR(0x4cdd40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4cdd43:{NFSU2_TR(0x4cdd43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdd44:{NFSU2_TR(0x4cdd44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdd45:{NFSU2_TR(0x4cdd45);
__builtin_memmove((R+24),(R+4),4);
}
B4cdd47:{NFSU2_TR(0x4cdd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cdd4a:{NFSU2_TR(0x4cdd4a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4cdd4c:{NFSU2_TR(0x4cdd4c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cdd4e:{NFSU2_TR(0x4cdd4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdd4f:{NFSU2_TR(0x4cdd4f);
if(r1(R+518)){{goto L4cdd5d;}}
}
B4cdd51:L4cdd51:{c.instructions+=2;NFSU2_TR(0x4cdd51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdd52:{NFSU2_TR(0x4cdd52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdd57ull));
TAIL_STATIC(0x580e90u,580);
}
B4cdd57:L4cdd57:{c.instructions+=2;NFSU2_TR(0x4cdd57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cdd5a:{NFSU2_TR(0x4cdd5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdd5d:L4cdd5d:{c.instructions+=2;NFSU2_TR(0x4cdd5d);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4cdd60:{NFSU2_TR(0x4cdd60);
if(r1(R+518)){{goto L4cde0a;}}
}
B4cdd66:L4cdd66:{c.instructions+=4;NFSU2_TR(0x4cdd66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cdd69:{NFSU2_TR(0x4cdd69);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4cdd6c:{NFSU2_TR(0x4cdd6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4cdd6f:{NFSU2_TR(0x4cdd6f);
if(r1(R+518)){{goto L4cdd88;}}
}
B4cdd71:L4cdd71:{c.instructions+=3;NFSU2_TR(0x4cdd71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cdd74:{NFSU2_TR(0x4cdd74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdd75:{NFSU2_TR(0x4cdd75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdd7aull));
TAIL_STATIC(0x580e90u,580);
}
B4cdd7a:L4cdd7a:{c.instructions+=4;NFSU2_TR(0x4cdd7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cdd7d:{NFSU2_TR(0x4cdd7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdd80:{NFSU2_TR(0x4cdd80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdd83:{NFSU2_TR(0x4cdd83);
{goto L4cde0a;}
}
B4cdd88:L4cdd88:{c.instructions+=3;NFSU2_TR(0x4cdd88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cdd8b:{NFSU2_TR(0x4cdd8b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cdd8d:{NFSU2_TR(0x4cdd8d);
if(r1(R+518)){{goto L4cdd92;}}
}
B4cdd8f:L4cdd8f:{c.instructions+=1;NFSU2_TR(0x4cdd8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdd92:L4cdd92:{c.instructions+=8;NFSU2_TR(0x4cdd92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cdd95:{NFSU2_TR(0x4cdd95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cdd98:{NFSU2_TR(0x4cdd98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdd99:{NFSU2_TR(0x4cdd99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdd9c:{NFSU2_TR(0x4cdd9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdd9f:{NFSU2_TR(0x4cdd9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdda2:{NFSU2_TR(0x4cdda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdda5:{NFSU2_TR(0x4cdda5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cddaaull));
TAIL_STATIC(0x50ca50u,50c);
}
B4cddaa:L4cddaa:{c.instructions+=4;NFSU2_TR(0x4cddaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cddad:{NFSU2_TR(0x4cddad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cddae:{NFSU2_TR(0x4cddae);
u8 U[4];
w4(U+0,u32(0x791858ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cddb3:{NFSU2_TR(0x4cddb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cddb8ull));
TAIL_STATIC(0x50b990u,50b);
}
B4cddb8:L4cddb8:{c.instructions+=5;NFSU2_TR(0x4cddb8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cddb9:{NFSU2_TR(0x4cddb9);
__builtin_memmove((R+28),(R+0),4);
}
B4cddbb:{NFSU2_TR(0x4cddbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cddbc:{NFSU2_TR(0x4cddbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cddbd:{NFSU2_TR(0x4cddbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cddc2ull));
TAIL_STATIC(0x4901d0u,490);
}
B4cddc2:L4cddc2:{c.instructions+=4;NFSU2_TR(0x4cddc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cddc5:{NFSU2_TR(0x4cddc5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cddc6:{NFSU2_TR(0x4cddc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cddc7:{NFSU2_TR(0x4cddc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cddccull));
TAIL_STATIC(0x50c990u,50c);
}
B4cddcc:L4cddcc:{c.instructions+=6;NFSU2_TR(0x4cddcc);
{u32 ea_=u32(u32(7920588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cddd2:{NFSU2_TR(0x4cddd2);
{u32 ea_=u32(u32(7920592u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4cddd8:{NFSU2_TR(0x4cddd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4cdddb:{NFSU2_TR(0x4cdddb);
__builtin_memmove((R+4),(R+24),4);
}
B4cdddd:{NFSU2_TR(0x4cdddd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cdde0:{NFSU2_TR(0x4cdde0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdde5ull));
TAIL_STATIC(0x4b4b80u,4b4);
}
B4cdde5:L4cdde5:{c.instructions+=4;NFSU2_TR(0x4cdde5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cdde8:{NFSU2_TR(0x4cdde8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cddeb:{NFSU2_TR(0x4cddeb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cdded:{NFSU2_TR(0x4cdded);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cddf4;}}
}
B4cddef:L4cddef:{c.instructions+=2;NFSU2_TR(0x4cddef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cddf2:{NFSU2_TR(0x4cddf2);
{goto L4cddfa;}
}
B4cddf4:L4cddf4:{c.instructions+=1;NFSU2_TR(0x4cddf4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cddfa:L4cddfa:{c.instructions+=2;NFSU2_TR(0x4cddfa);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4cddfc:{NFSU2_TR(0x4cddfc);
if(r1(R+518)){{goto L4cde0a;}}
}
B4cddfe:L4cddfe:{c.instructions+=3;NFSU2_TR(0x4cddfe);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde03:{NFSU2_TR(0x4cde03);
__builtin_memmove((R+4),(R+24),4);
}
B4cde05:{NFSU2_TR(0x4cde05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cde0aull));
TAIL_STATIC(0x498630u,498);
}
B4cde0a:L4cde0a:{c.instructions+=2;NFSU2_TR(0x4cde0a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4cde0d:{NFSU2_TR(0x4cde0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cde4c;}}
}
B4cde0f:L4cde0f:{c.instructions+=3;NFSU2_TR(0x4cde0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cde12:{NFSU2_TR(0x4cde12);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cde14:{NFSU2_TR(0x4cde14);
if(r1(R+518)){{goto L4cde4c;}}
}
B4cde16:L4cde16:{c.instructions+=2;NFSU2_TR(0x4cde16);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4cde19:{NFSU2_TR(0x4cde19);
if(r1(R+518)){{goto L4cde4c;}}
}
B4cde1b:L4cde1b:{c.instructions+=5;NFSU2_TR(0x4cde1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde1c:{NFSU2_TR(0x4cde1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cde20:{NFSU2_TR(0x4cde20);
u8 U[4];
w4(U+0,u32(0x791864ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde25:{NFSU2_TR(0x4cde25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde26:{NFSU2_TR(0x4cde26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cde2bull));
TAIL_STATIC(0x4400d0u,440);
}
B4cde2b:L4cde2b:{c.instructions+=11;NFSU2_TR(0x4cde2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cde2e:{NFSU2_TR(0x4cde2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde2f:{NFSU2_TR(0x4cde2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde30:{NFSU2_TR(0x4cde30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde31:{NFSU2_TR(0x4cde31);
u8 U[4];
w4(U+0,u32(0x4aebf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde36:{NFSU2_TR(0x4cde36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde37:{NFSU2_TR(0x4cde37);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cde3b:{NFSU2_TR(0x4cde3b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde3d:{NFSU2_TR(0x4cde3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde3e:{NFSU2_TR(0x4cde3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cde41:{NFSU2_TR(0x4cde41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cde46ull));
TAIL_STATIC(0x57cf70u,57c);
}
B4cde46:L4cde46:{c.instructions+=2;NFSU2_TR(0x4cde46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4cde49:{NFSU2_TR(0x4cde49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cde4c:L4cde4c:{c.instructions+=3;NFSU2_TR(0x4cde4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cde4f:{NFSU2_TR(0x4cde4f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cde51:{NFSU2_TR(0x4cde51);
if(r1(R+518)){{goto L4cdebd;}}
}
B4cde53:L4cde53:{c.instructions+=2;NFSU2_TR(0x4cde53);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4cde56:{NFSU2_TR(0x4cde56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cdebd;}}
}
B4cde58:L4cde58:{c.instructions+=2;NFSU2_TR(0x4cde58);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4cde5b:{NFSU2_TR(0x4cde5b);
if(r1(R+518)){{goto L4cde73;}}
}
B4cde5d:L4cde5d:{c.instructions+=3;NFSU2_TR(0x4cde5d);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde62:{NFSU2_TR(0x4cde62);
__builtin_memmove((R+4),(R+24),4);
}
B4cde64:{NFSU2_TR(0x4cde64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cde69ull));
TAIL_STATIC(0x498630u,498);
}
B4cde69:L4cde69:{c.instructions+=6;NFSU2_TR(0x4cde69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cde6a:{NFSU2_TR(0x4cde6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4cde6d:{NFSU2_TR(0x4cde6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cde6e:{NFSU2_TR(0x4cde6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cde6f:{NFSU2_TR(0x4cde6f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cde72:{NFSU2_TR(0x4cde72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cde73:L4cde73:{c.instructions+=5;NFSU2_TR(0x4cde73);
__builtin_memmove((R+8),gp(0x865198),4);
}
B4cde79:{NFSU2_TR(0x4cde79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cde7c:{NFSU2_TR(0x4cde7c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cde7d:{NFSU2_TR(0x4cde7d);
__builtin_memmove((R+4),(R+28),4);
}
B4cde7f:{NFSU2_TR(0x4cde7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cde84ull));
TAIL_STATIC(0x577310u,577);
}
B4cde84:L4cde84:{c.instructions+=2;NFSU2_TR(0x4cde84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cde86:{NFSU2_TR(0x4cde86);
if(r1(R+518)){{goto L4cdebd;}}
}
B4cde88:L4cde88:{c.instructions+=6;NFSU2_TR(0x4cde88);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4cde8a:{NFSU2_TR(0x4cde8a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cde90:{NFSU2_TR(0x4cde90);
{u32 ea_=u32(u32(7920588u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4cde96:{NFSU2_TR(0x4cde96);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4cde98:{NFSU2_TR(0x4cde98);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4cde9b:{NFSU2_TR(0x4cde9b);
if(r1(R+514)){{goto L4cdebb;}}
}
B4cde9d:L4cde9d:{c.instructions+=6;NFSU2_TR(0x4cde9d);
{u32 ea_=u32(u32(7920588u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4cdea3:{NFSU2_TR(0x4cdea3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdea4:{NFSU2_TR(0x4cdea4);
__builtin_memmove((R+4),(R+24),4);
}
B4cdea6:{NFSU2_TR(0x4cdea6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4cdeac:{NFSU2_TR(0x4cdeac);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cdeaf:{NFSU2_TR(0x4cdeaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdeb4ull));
TAIL_STATIC(0x498630u,498);
}
B4cdeb4:L4cdeb4:{c.instructions+=5;NFSU2_TR(0x4cdeb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cdeb5:{NFSU2_TR(0x4cdeb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cdeb6:{NFSU2_TR(0x4cdeb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cdeb7:{NFSU2_TR(0x4cdeb7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cdeba:{NFSU2_TR(0x4cdeba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cdebb:L4cdebb:{c.instructions+=1;NFSU2_TR(0x4cdebb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4cdebd:L4cdebd:{c.instructions+=5;NFSU2_TR(0x4cdebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cdebe:{NFSU2_TR(0x4cdebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cdebf:{NFSU2_TR(0x4cdebf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cdec0:{NFSU2_TR(0x4cdec0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cdec3:{NFSU2_TR(0x4cdec3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cded0:L4cded0:{c.instructions+=10;NFSU2_TR(0x4cded0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cded1:{NFSU2_TR(0x4cded1);
__builtin_memmove((R+0),gp(0x883da4),4);
}
B4cded6:{NFSU2_TR(0x4cded6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cded7:{NFSU2_TR(0x4cded7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cded8:{NFSU2_TR(0x4cded8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cded9:{NFSU2_TR(0x4cded9);
__builtin_memmove((R+20),(R+4),4);
}
B4cdedb:{NFSU2_TR(0x4cdedb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cdedd:{NFSU2_TR(0x4cdedd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cdedf:{NFSU2_TR(0x4cdedf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdee3:{NFSU2_TR(0x4cdee3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4cdf10;}}
}
B4cdee5:L4cdee5:{c.instructions+=2;NFSU2_TR(0x4cdee5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdee6:{NFSU2_TR(0x4cdee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdeebull));
TAIL_STATIC(0x5d3e80u,5d3);
}
B4cdeeb:L4cdeeb:{c.instructions+=6;NFSU2_TR(0x4cdeeb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cdeee:{NFSU2_TR(0x4cdeee);
__builtin_memmove((R+24),(R+0),4);
}
B4cdef0:{NFSU2_TR(0x4cdef0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdef2:{NFSU2_TR(0x4cdef2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdef3:{NFSU2_TR(0x4cdef3);
__builtin_memmove((R+4),(R+20),4);
}
B4cdef5:{NFSU2_TR(0x4cdef5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdefaull));
TAIL_STATIC(0x4987c0u,498);
}
B4cdefa:L4cdefa:{c.instructions+=2;NFSU2_TR(0x4cdefa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cdefc:{NFSU2_TR(0x4cdefc);
if(r1(R+518)){{goto L4cdf06;}}
}
B4cdefe:L4cdefe:{c.instructions+=3;NFSU2_TR(0x4cdefe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdeff:{NFSU2_TR(0x4cdeff);
__builtin_memmove((R+4),(R+20),4);
}
B4cdf01:{NFSU2_TR(0x4cdf01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdf06ull));
TAIL_STATIC(0x4b4c10u,4b4);
}
B4cdf06:L4cdf06:{c.instructions+=4;NFSU2_TR(0x4cdf06);
__builtin_memmove((R+0),gp(0x883da4),4);
}
B4cdf0b:{NFSU2_TR(0x4cdf0b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4cdf0c:{NFSU2_TR(0x4cdf0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4cdf0e:{NFSU2_TR(0x4cdf0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cdee5u);}goto L4cdee5;}}
}
B4cdf10:L4cdf10:{c.instructions+=5;NFSU2_TR(0x4cdf10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdf11:{NFSU2_TR(0x4cdf11);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cdf14:{NFSU2_TR(0x4cdf14);
u8 U[4];
w4(U+0,u32(0x4987a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdf19:{NFSU2_TR(0x4cdf19);
__builtin_memmove((R+4),(R+12),4);
}
B4cdf1b:{NFSU2_TR(0x4cdf1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdf20ull));
TAIL_STATIC(0x43e650u,43e);
}
B4cdf20:L4cdf20:{c.instructions+=3;NFSU2_TR(0x4cdf20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4cdf22:{NFSU2_TR(0x4cdf22);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cdf24:{NFSU2_TR(0x4cdf24);
if(r1(R+518)){{goto L4cdf7f;}}
}
B4cdf26:L4cdf26:{c.instructions+=3;NFSU2_TR(0x4cdf26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cdf29:{NFSU2_TR(0x4cdf29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cdf2b:{NFSU2_TR(0x4cdf2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cdf32;}}
}
B4cdf2d:L4cdf2d:{c.instructions+=2;NFSU2_TR(0x4cdf2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cdf30:{NFSU2_TR(0x4cdf30);
{goto L4cdf39;}
}
B4cdf32:L4cdf32:{c.instructions+=1;NFSU2_TR(0x4cdf32);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4cdf39:L4cdf39:{c.instructions+=7;NFSU2_TR(0x4cdf39);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdf3b:{NFSU2_TR(0x4cdf3b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdf3d:{NFSU2_TR(0x4cdf3d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdf3f:{NFSU2_TR(0x4cdf3f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdf41:{NFSU2_TR(0x4cdf41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdf42:{NFSU2_TR(0x4cdf42);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cdf45:{NFSU2_TR(0x4cdf45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdf4aull));
TAIL_STATIC(0x52ec90u,52e);
}
B4cdf4a:L4cdf4a:{c.instructions+=3;NFSU2_TR(0x4cdf4a);
__builtin_memmove((R+4),(R+24),4);
}
B4cdf4c:{NFSU2_TR(0x4cdf4c);
__builtin_memmove((R+20),(R+0),4);
}
B4cdf4e:{NFSU2_TR(0x4cdf4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdf53ull));
TAIL_STATIC(0x4984b0u,498);
}
B4cdf53:L4cdf53:{c.instructions+=5;NFSU2_TR(0x4cdf53);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdf55:{NFSU2_TR(0x4cdf55);
__builtin_memmove((R+28),(R+0),4);
}
B4cdf57:{NFSU2_TR(0x4cdf57);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdf59:{NFSU2_TR(0x4cdf59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdf5a:{NFSU2_TR(0x4cdf5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdf5full));
TAIL_STATIC(0x4901d0u,490);
}
B4cdf5f:L4cdf5f:{c.instructions+=3;NFSU2_TR(0x4cdf5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cdf62:{NFSU2_TR(0x4cdf62);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cdf64:{NFSU2_TR(0x4cdf64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cdf6b;}}
}
B4cdf66:L4cdf66:{c.instructions+=1;NFSU2_TR(0x4cdf66);
w4(R+28,u32(0x74ce8c0bull));
}
B4cdf6b:L4cdf6b:{c.instructions+=3;NFSU2_TR(0x4cdf6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdf6c:{NFSU2_TR(0x4cdf6c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdf6d:{NFSU2_TR(0x4cdf6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdf72ull));
TAIL_STATIC(0x50c990u,50c);
}
B4cdf72:L4cdf72:{c.instructions+=5;NFSU2_TR(0x4cdf72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4cdf74:{NFSU2_TR(0x4cdf74);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4cdf78:{NFSU2_TR(0x4cdf78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cdf7b:{NFSU2_TR(0x4cdf7b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cdf7d:{NFSU2_TR(0x4cdf7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cdf26u);}goto L4cdf26;}}
}
B4cdf7f:L4cdf7f:{c.instructions+=3;NFSU2_TR(0x4cdf7f);
__builtin_memmove((R+4),gp(0x850078),4);
}
B4cdf85:{NFSU2_TR(0x4cdf85);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cdf88:{NFSU2_TR(0x4cdf88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cdf9a;}}
}
B4cdf8a:L4cdf8a:{c.instructions+=5;NFSU2_TR(0x4cdf8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cdf8c:{NFSU2_TR(0x4cdf8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdf8f:{NFSU2_TR(0x4cdf8f);
__builtin_memmove((R+4),gp(0x850078),4);
}
B4cdf95:{NFSU2_TR(0x4cdf95);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cdf98:{NFSU2_TR(0x4cdf98);
if(r1(R+518)){{goto L4cdfb4;}}
}
B4cdf9a:L4cdf9a:{c.instructions+=2;NFSU2_TR(0x4cdf9a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cdfa0:{NFSU2_TR(0x4cdfa0);
if(r1(R+518)){{goto L4cdfb4;}}
}
B4cdfa2:L4cdfa2:{c.instructions+=2;NFSU2_TR(0x4cdfa2);
w4(R+4,u32(0x83aab4ull));
}
B4cdfa7:{NFSU2_TR(0x4cdfa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdfacull));
TAIL_STATIC(0x502910u,502);
}
B4cdfac:L4cdfac:{c.instructions+=2;NFSU2_TR(0x4cdfac);
__builtin_memmove((R+4),gp(0x850078),4);
}
B4cdfb2:{NFSU2_TR(0x4cdfb2);
{goto L4cdfb9;}
}
B4cdfb4:L4cdfb4:{c.instructions+=1;NFSU2_TR(0x4cdfb4);
w4(R+0,u32(0x8500b8ull));
}
B4cdfb9:L4cdfb9:{c.instructions+=4;NFSU2_TR(0x4cdfb9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cdfbc:{NFSU2_TR(0x4cdfbc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(r2(U+0)));
}
B4cdfbf:{NFSU2_TR(0x4cdfbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4cdfc2:{NFSU2_TR(0x4cdfc2);
if(r1(R+518)){TAIL_STATIC(0x4ce0ddu,4ce);}
}
B4cdfc8:L4cdfc8:{c.instructions+=2;NFSU2_TR(0x4cdfc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cdfca:{NFSU2_TR(0x4cdfca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4ce036u,4ce);}
}
B4cdfcc:L4cdfcc:{c.instructions+=3;NFSU2_TR(0x4cdfcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cdfcf:{NFSU2_TR(0x4cdfcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cdfd1:{NFSU2_TR(0x4cdfd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cdfd8;}}
}
B4cdfd3:L4cdfd3:{c.instructions+=2;NFSU2_TR(0x4cdfd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4cdfd5:{NFSU2_TR(0x4cdfd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cdfd8:L4cdfd8:{c.instructions+=5;NFSU2_TR(0x4cdfd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cdfdb:{NFSU2_TR(0x4cdfdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cdfde:{NFSU2_TR(0x4cdfde);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4cdfe0:{NFSU2_TR(0x4cdfe0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cdfe2:{NFSU2_TR(0x4cdfe2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cdfe9;}}
}
B4cdfe4:L4cdfe4:{c.instructions+=2;NFSU2_TR(0x4cdfe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4cdfe7:{NFSU2_TR(0x4cdfe7);
{goto L4cdff0;}
}
B4cdfe9:L4cdfe9:{c.instructions+=1;NFSU2_TR(0x4cdfe9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B4cdff0:L4cdff0:{c.instructions+=2;NFSU2_TR(0x4cdff0);
u8 U[4];
w4(U+0,u32(0x78f8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cdff5:{NFSU2_TR(0x4cdff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cdffaull));
TAIL_STATIC(0x52cef0u,52c);
}
B4cdffa:L4cdffa:{c.instructions+=3;NFSU2_TR(0x4cdffa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cdffd:{NFSU2_TR(0x4cdffd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cdfff:{NFSU2_TR(0x4cdfff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4ce0ddu,4ce);}
TAIL_STATIC(0x4ce005u,4ce);
}
XIT:NFSU2_TR_EXIT(0x4cd,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
