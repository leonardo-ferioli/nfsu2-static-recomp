#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_767(u8* __restrict R,Cpu& c);
u32 body_768(u8* __restrict R,Cpu& c);
u32 body_76a(u8* __restrict R,Cpu& c);
u32 body_76b(u8* __restrict R,Cpu& c);
u32 body_76d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x76c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x76c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_76c(u8* __restrict R,Cpu& c);
u32 page_76c(Cpu& c){return body_76c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_76c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x76c000:goto L76c000;
case 0x76c002:c.instructions+=2;goto B76c002;
case 0x76c008:c.instructions+=1;goto B76c008;
case 0x76c00a:goto L76c00a;
case 0x76c00e:c.instructions+=6;goto B76c00e;
case 0x76c011:c.instructions+=5;goto B76c011;
case 0x76c015:c.instructions+=4;goto B76c015;
case 0x76c019:c.instructions+=3;goto B76c019;
case 0x76c01b:c.instructions+=2;goto B76c01b;
case 0x76c01e:c.instructions+=1;goto B76c01e;
case 0x76c020:goto L76c020;
case 0x76c022:c.instructions+=1;goto B76c022;
case 0x76c024:goto L76c024;
case 0x76c027:c.instructions+=3;goto B76c027;
case 0x76c029:c.instructions+=2;goto B76c029;
case 0x76c02a:c.instructions+=1;goto B76c02a;
case 0x76c02f:goto L76c02f;
case 0x76c031:c.instructions+=2;goto B76c031;
case 0x76c032:c.instructions+=1;goto B76c032;
case 0x76c034:goto L76c034;
case 0x76c037:goto L76c037;
case 0x76c039:c.instructions+=1;goto B76c039;
case 0x76c03e:goto L76c03e;
case 0x76c03f:c.instructions+=8;goto B76c03f;
case 0x76c040:c.instructions+=7;goto B76c040;
case 0x76c041:c.instructions+=6;goto B76c041;
case 0x76c042:c.instructions+=5;goto B76c042;
case 0x76c044:c.instructions+=4;goto B76c044;
case 0x76c045:c.instructions+=3;goto B76c045;
case 0x76c046:c.instructions+=2;goto B76c046;
case 0x76c047:c.instructions+=1;goto B76c047;
case 0x76c048:goto L76c048;
case 0x76c049:c.instructions+=12;goto B76c049;
case 0x76c04b:c.instructions+=11;goto B76c04b;
case 0x76c04c:c.instructions+=10;goto B76c04c;
case 0x76c04d:c.instructions+=9;goto B76c04d;
case 0x76c050:c.instructions+=8;goto B76c050;
case 0x76c051:c.instructions+=7;goto B76c051;
case 0x76c054:c.instructions+=6;goto B76c054;
case 0x76c057:c.instructions+=5;goto B76c057;
case 0x76c05a:c.instructions+=4;goto B76c05a;
case 0x76c05b:c.instructions+=3;goto B76c05b;
case 0x76c05c:c.instructions+=2;goto B76c05c;
case 0x76c05f:c.instructions+=1;goto B76c05f;
case 0x76c064:goto L76c064;
case 0x76c067:c.instructions+=3;goto B76c067;
case 0x76c069:c.instructions+=2;goto B76c069;
case 0x76c06a:c.instructions+=1;goto B76c06a;
case 0x76c06c:goto L76c06c;
case 0x76c071:goto L76c071;
case 0x76c077:c.instructions+=1;goto B76c077;
case 0x76c079:goto L76c079;
case 0x76c07c:c.instructions+=5;goto B76c07c;
case 0x76c07f:c.instructions+=4;goto B76c07f;
case 0x76c080:c.instructions+=3;goto B76c080;
case 0x76c083:c.instructions+=2;goto B76c083;
case 0x76c084:c.instructions+=1;goto B76c084;
case 0x76c08a:goto L76c08a;
case 0x76c08c:c.instructions+=2;goto B76c08c;
case 0x76c08f:c.instructions+=1;goto B76c08f;
case 0x76c091:goto L76c091;
case 0x76c097:goto L76c097;
case 0x76c099:c.instructions+=1;goto B76c099;
case 0x76c09b:goto L76c09b;
case 0x76c09c:c.instructions+=1;goto B76c09c;
case 0x76c0a1:goto L76c0a1;
case 0x76c0a2:goto L76c0a2;
case 0x76c0a4:c.instructions+=2;goto B76c0a4;
case 0x76c0a6:c.instructions+=1;goto B76c0a6;
case 0x76c0a8:goto L76c0a8;
case 0x76c0aa:c.instructions+=8;goto B76c0aa;
case 0x76c0ad:c.instructions+=7;goto B76c0ad;
case 0x76c0b4:c.instructions+=6;goto B76c0b4;
case 0x76c0b7:c.instructions+=5;goto B76c0b7;
case 0x76c0ba:c.instructions+=4;goto B76c0ba;
case 0x76c0be:c.instructions+=3;goto B76c0be;
case 0x76c0c1:c.instructions+=2;goto B76c0c1;
case 0x76c0c4:c.instructions+=1;goto B76c0c4;
case 0x76c0c7:goto L76c0c7;
case 0x76c0c8:c.instructions+=3;goto B76c0c8;
case 0x76c0c9:c.instructions+=2;goto B76c0c9;
case 0x76c0ca:c.instructions+=1;goto B76c0ca;
case 0x76c0cb:goto L76c0cb;
case 0x76c0cc:c.instructions+=3;goto B76c0cc;
case 0x76c0ce:c.instructions+=2;goto B76c0ce;
case 0x76c0d3:c.instructions+=1;goto B76c0d3;
case 0x76c0d8:goto L76c0d8;
case 0x76c0dd:c.instructions+=9;goto B76c0dd;
case 0x76c0e0:c.instructions+=8;goto B76c0e0;
case 0x76c0e1:c.instructions+=7;goto B76c0e1;
case 0x76c0e2:c.instructions+=6;goto B76c0e2;
case 0x76c0e4:c.instructions+=5;goto B76c0e4;
case 0x76c0e6:c.instructions+=4;goto B76c0e6;
case 0x76c0e7:c.instructions+=3;goto B76c0e7;
case 0x76c0ea:c.instructions+=2;goto B76c0ea;
case 0x76c0ed:c.instructions+=1;goto B76c0ed;
case 0x76c0f2:goto L76c0f2;
case 0x76c0f5:c.instructions+=4;goto B76c0f5;
case 0x76c0f8:c.instructions+=3;goto B76c0f8;
case 0x76c0fa:c.instructions+=2;goto B76c0fa;
case 0x76c0fd:c.instructions+=1;goto B76c0fd;
case 0x76c103:goto L76c103;
case 0x76c105:c.instructions+=3;goto B76c105;
case 0x76c106:c.instructions+=2;goto B76c106;
case 0x76c109:c.instructions+=1;goto B76c109;
case 0x76c10e:goto L76c10e;
case 0x76c111:c.instructions+=2;goto B76c111;
case 0x76c113:c.instructions+=1;goto B76c113;
case 0x76c119:goto L76c119;
case 0x76c11a:c.instructions+=4;goto B76c11a;
case 0x76c11d:c.instructions+=3;goto B76c11d;
case 0x76c11f:c.instructions+=2;goto B76c11f;
case 0x76c121:c.instructions+=1;goto B76c121;
case 0x76c123:goto L76c123;
case 0x76c128:c.instructions+=5;goto B76c128;
case 0x76c129:c.instructions+=4;goto B76c129;
case 0x76c12f:c.instructions+=3;goto B76c12f;
case 0x76c130:c.instructions+=2;goto B76c130;
case 0x76c131:c.instructions+=1;goto B76c131;
case 0x76c136:goto L76c136;
case 0x76c13b:c.instructions+=2;goto B76c13b;
case 0x76c13e:c.instructions+=1;goto B76c13e;
case 0x76c143:goto L76c143;
case 0x76c146:c.instructions+=1;goto B76c146;
case 0x76c149:goto L76c149;
case 0x76c14b:c.instructions+=2;goto B76c14b;
case 0x76c14d:c.instructions+=1;goto B76c14d;
case 0x76c14f:goto L76c14f;
case 0x76c151:goto L76c151;
case 0x76c152:c.instructions+=4;goto B76c152;
case 0x76c158:c.instructions+=3;goto B76c158;
case 0x76c159:c.instructions+=2;goto B76c159;
case 0x76c15c:c.instructions+=1;goto B76c15c;
case 0x76c161:goto L76c161;
case 0x76c164:c.instructions+=2;goto B76c164;
case 0x76c167:c.instructions+=1;goto B76c167;
case 0x76c169:goto L76c169;
case 0x76c16b:c.instructions+=2;goto B76c16b;
case 0x76c16d:c.instructions+=1;goto B76c16d;
case 0x76c16f:goto L76c16f;
case 0x76c171:goto L76c171;
case 0x76c176:goto L76c176;
case 0x76c179:c.instructions+=1;goto B76c179;
case 0x76c17b:goto L76c17b;
case 0x76c180:goto L76c180;
case 0x76c186:goto L76c186;
case 0x76c189:goto L76c189;
case 0x76c18c:c.instructions+=2;goto B76c18c;
case 0x76c18f:c.instructions+=1;goto B76c18f;
case 0x76c194:goto L76c194;
case 0x76c195:c.instructions+=2;goto B76c195;
case 0x76c196:c.instructions+=1;goto B76c196;
case 0x76c198:goto L76c198;
case 0x76c19a:goto L76c19a;
case 0x76c19c:c.instructions+=3;goto B76c19c;
case 0x76c19f:c.instructions+=2;goto B76c19f;
case 0x76c1a2:c.instructions+=1;goto B76c1a2;
case 0x76c1a7:goto L76c1a7;
case 0x76c1aa:c.instructions+=1;goto B76c1aa;
case 0x76c1af:goto L76c1af;
case 0x76c1b2:c.instructions+=2;goto B76c1b2;
case 0x76c1b3:c.instructions+=1;goto B76c1b3;
case 0x76c1b9:goto L76c1b9;
case 0x76c1bb:c.instructions+=6;goto B76c1bb;
case 0x76c1bd:c.instructions+=5;goto B76c1bd;
case 0x76c1bf:c.instructions+=4;goto B76c1bf;
case 0x76c1c1:c.instructions+=3;goto B76c1c1;
case 0x76c1c2:c.instructions+=2;goto B76c1c2;
case 0x76c1c4:c.instructions+=1;goto B76c1c4;
case 0x76c1c6:goto L76c1c6;
case 0x76c1cb:goto L76c1cb;
case 0x76c1d1:c.instructions+=1;goto B76c1d1;
case 0x76c1d6:goto L76c1d6;
case 0x76c1d8:c.instructions+=1;goto B76c1d8;
case 0x76c1de:goto L76c1de;
case 0x76c1e0:goto L76c1e0;
case 0x76c1e2:c.instructions+=3;goto B76c1e2;
case 0x76c1e5:c.instructions+=2;goto B76c1e5;
case 0x76c1e8:c.instructions+=1;goto B76c1e8;
case 0x76c1ed:goto L76c1ed;
case 0x76c1f0:c.instructions+=3;goto B76c1f0;
case 0x76c1f2:c.instructions+=2;goto B76c1f2;
case 0x76c1f3:c.instructions+=1;goto B76c1f3;
case 0x76c1f5:goto L76c1f5;
case 0x76c1f7:goto L76c1f7;
case 0x76c1fa:c.instructions+=4;goto B76c1fa;
case 0x76c1fd:c.instructions+=3;goto B76c1fd;
case 0x76c1fe:c.instructions+=2;goto B76c1fe;
case 0x76c1ff:c.instructions+=1;goto B76c1ff;
case 0x76c204:goto L76c204;
case 0x76c205:c.instructions+=1;goto B76c205;
case 0x76c206:goto L76c206;
case 0x76c207:c.instructions+=6;goto B76c207;
case 0x76c209:c.instructions+=5;goto B76c209;
case 0x76c20c:c.instructions+=4;goto B76c20c;
case 0x76c20d:c.instructions+=3;goto B76c20d;
case 0x76c210:c.instructions+=2;goto B76c210;
case 0x76c211:c.instructions+=1;goto B76c211;
case 0x76c217:goto L76c217;
case 0x76c21a:c.instructions+=2;goto B76c21a;
case 0x76c21d:c.instructions+=1;goto B76c21d;
case 0x76c223:goto L76c223;
case 0x76c225:c.instructions+=1;goto B76c225;
case 0x76c22b:goto L76c22b;
case 0x76c22d:c.instructions+=1;goto B76c22d;
case 0x76c233:goto L76c233;
case 0x76c235:c.instructions+=3;goto B76c235;
case 0x76c238:c.instructions+=2;goto B76c238;
case 0x76c239:c.instructions+=1;goto B76c239;
case 0x76c23f:goto L76c23f;
case 0x76c242:c.instructions+=4;goto B76c242;
case 0x76c245:c.instructions+=3;goto B76c245;
case 0x76c247:c.instructions+=2;goto B76c247;
case 0x76c24d:c.instructions+=1;goto B76c24d;
case 0x76c24f:goto L76c24f;
case 0x76c259:goto L76c259;
case 0x76c25a:c.instructions+=2;goto B76c25a;
case 0x76c25b:c.instructions+=1;goto B76c25b;
case 0x76c25c:goto L76c25c;
case 0x76c261:c.instructions+=2;goto B76c261;
case 0x76c266:c.instructions+=1;goto B76c266;
case 0x76c26b:goto L76c26b;
case 0x76c270:c.instructions+=6;goto B76c270;
case 0x76c273:c.instructions+=5;goto B76c273;
case 0x76c276:c.instructions+=4;goto B76c276;
case 0x76c27b:c.instructions+=3;goto B76c27b;
case 0x76c27d:c.instructions+=2;goto B76c27d;
case 0x76c27f:c.instructions+=1;goto B76c27f;
case 0x76c281:goto L76c281;
case 0x76c284:c.instructions+=3;goto B76c284;
case 0x76c287:c.instructions+=2;goto B76c287;
case 0x76c28a:c.instructions+=1;goto B76c28a;
case 0x76c28c:goto L76c28c;
case 0x76c28d:c.instructions+=1;goto B76c28d;
case 0x76c28e:goto L76c28e;
case 0x76c292:c.instructions+=1;goto B76c292;
case 0x76c297:goto L76c297;
case 0x76c299:c.instructions+=2;goto B76c299;
case 0x76c29a:c.instructions+=1;goto B76c29a;
case 0x76c29b:goto L76c29b;
case 0x76c29e:c.instructions+=1;goto B76c29e;
case 0x76c2a0:goto L76c2a0;
case 0x76c2a3:c.instructions+=2;goto B76c2a3;
case 0x76c2a4:c.instructions+=1;goto B76c2a4;
case 0x76c2a6:goto L76c2a6;
case 0x76c2ab:c.instructions+=3;goto B76c2ab;
case 0x76c2b2:c.instructions+=2;goto B76c2b2;
case 0x76c2b7:c.instructions+=1;goto B76c2b7;
case 0x76c2b9:goto L76c2b9;
case 0x76c2be:c.instructions+=2;goto B76c2be;
case 0x76c2c5:c.instructions+=1;goto B76c2c5;
case 0x76c2ca:goto L76c2ca;
case 0x76c2cd:c.instructions+=5;goto B76c2cd;
case 0x76c2d2:c.instructions+=4;goto B76c2d2;
case 0x76c2d8:c.instructions+=3;goto B76c2d8;
case 0x76c2d9:c.instructions+=2;goto B76c2d9;
case 0x76c2da:c.instructions+=1;goto B76c2da;
case 0x76c2e0:goto L76c2e0;
case 0x76c2e2:c.instructions+=1;goto B76c2e2;
case 0x76c2e4:goto L76c2e4;
case 0x76c2e9:c.instructions+=3;goto B76c2e9;
case 0x76c2ef:c.instructions+=2;goto B76c2ef;
case 0x76c2f0:c.instructions+=1;goto B76c2f0;
case 0x76c2f5:goto L76c2f5;
case 0x76c2f6:c.instructions+=1;goto B76c2f6;
case 0x76c2f7:goto L76c2f7;
case 0x76c2fd:c.instructions+=3;goto B76c2fd;
case 0x76c303:c.instructions+=2;goto B76c303;
case 0x76c304:c.instructions+=1;goto B76c304;
case 0x76c309:goto L76c309;
case 0x76c30a:c.instructions+=3;goto B76c30a;
case 0x76c30d:c.instructions+=2;goto B76c30d;
case 0x76c310:c.instructions+=1;goto B76c310;
case 0x76c312:goto L76c312;
case 0x76c318:c.instructions+=2;goto B76c318;
case 0x76c319:c.instructions+=1;goto B76c319;
case 0x76c31e:goto L76c31e;
case 0x76c320:c.instructions+=7;goto B76c320;
case 0x76c326:c.instructions+=6;goto B76c326;
case 0x76c329:c.instructions+=5;goto B76c329;
case 0x76c32b:c.instructions+=4;goto B76c32b;
case 0x76c32d:c.instructions+=3;goto B76c32d;
case 0x76c332:c.instructions+=2;goto B76c332;
case 0x76c333:c.instructions+=1;goto B76c333;
case 0x76c338:goto L76c338;
case 0x76c33b:goto L76c33b;
case 0x76c33c:c.instructions+=1;goto B76c33c;
case 0x76c341:goto L76c341;
case 0x76c342:c.instructions+=4;goto B76c342;
case 0x76c346:c.instructions+=3;goto B76c346;
case 0x76c349:c.instructions+=2;goto B76c349;
case 0x76c34c:c.instructions+=1;goto B76c34c;
case 0x76c351:goto L76c351;
case 0x76c354:c.instructions+=4;goto B76c354;
case 0x76c356:c.instructions+=3;goto B76c356;
case 0x76c357:c.instructions+=2;goto B76c357;
case 0x76c358:c.instructions+=1;goto B76c358;
case 0x76c35d:goto L76c35d;
case 0x76c362:c.instructions+=3;goto B76c362;
case 0x76c363:c.instructions+=2;goto B76c363;
case 0x76c364:c.instructions+=1;goto B76c364;
case 0x76c369:goto L76c369;
case 0x76c36e:c.instructions+=2;goto B76c36e;
case 0x76c36f:c.instructions+=1;goto B76c36f;
case 0x76c374:goto L76c374;
case 0x76c375:c.instructions+=2;goto B76c375;
case 0x76c376:c.instructions+=1;goto B76c376;
case 0x76c37b:goto L76c37b;
case 0x76c37c:c.instructions+=2;goto B76c37c;
case 0x76c37d:c.instructions+=1;goto B76c37d;
case 0x76c382:goto L76c382;
case 0x76c385:c.instructions+=2;goto B76c385;
case 0x76c386:c.instructions+=1;goto B76c386;
case 0x76c38b:goto L76c38b;
case 0x76c390:c.instructions+=3;goto B76c390;
case 0x76c395:c.instructions+=2;goto B76c395;
case 0x76c396:c.instructions+=1;goto B76c396;
case 0x76c39b:goto L76c39b;
case 0x76c39e:goto L76c39e;
case 0x76c3a0:c.instructions+=1;goto B76c3a0;
case 0x76c3a6:goto L76c3a6;
case 0x76c3aa:c.instructions+=1;goto B76c3aa;
case 0x76c3b0:goto L76c3b0;
case 0x76c3b2:c.instructions+=2;goto B76c3b2;
case 0x76c3b3:c.instructions+=1;goto B76c3b3;
case 0x76c3b6:goto L76c3b6;
case 0x76c3b8:c.instructions+=2;goto B76c3b8;
case 0x76c3bd:c.instructions+=1;goto B76c3bd;
case 0x76c3c2:goto L76c3c2;
case 0x76c3c7:c.instructions+=2;goto B76c3c7;
case 0x76c3c9:c.instructions+=1;goto B76c3c9;
case 0x76c3cb:goto L76c3cb;
case 0x76c3d2:c.instructions+=1;goto B76c3d2;
case 0x76c3d4:goto L76c3d4;
case 0x76c3d9:c.instructions+=1;goto B76c3d9;
case 0x76c3df:goto L76c3df;
case 0x76c3e1:c.instructions+=1;goto B76c3e1;
case 0x76c3e3:goto L76c3e3;
case 0x76c3e8:c.instructions+=2;goto B76c3e8;
case 0x76c3e9:c.instructions+=1;goto B76c3e9;
case 0x76c3ef:goto L76c3ef;
case 0x76c3f4:c.instructions+=2;goto B76c3f4;
case 0x76c3f6:c.instructions+=1;goto B76c3f6;
case 0x76c3f8:goto L76c3f8;
case 0x76c3fd:c.instructions+=1;goto B76c3fd;
case 0x76c402:goto L76c402;
case 0x76c406:c.instructions+=3;goto B76c406;
case 0x76c409:c.instructions+=2;goto B76c409;
case 0x76c40c:c.instructions+=1;goto B76c40c;
case 0x76c40e:goto L76c40e;
case 0x76c411:c.instructions+=1;goto B76c411;
case 0x76c413:goto L76c413;
case 0x76c416:c.instructions+=6;goto B76c416;
case 0x76c418:c.instructions+=5;goto B76c418;
case 0x76c41a:c.instructions+=4;goto B76c41a;
case 0x76c41d:c.instructions+=3;goto B76c41d;
case 0x76c41f:c.instructions+=2;goto B76c41f;
case 0x76c420:c.instructions+=1;goto B76c420;
case 0x76c421:goto L76c421;
case 0x76c424:c.instructions+=2;goto B76c424;
case 0x76c42b:c.instructions+=1;goto B76c42b;
case 0x76c42d:goto L76c42d;
case 0x76c42f:c.instructions+=1;goto B76c42f;
case 0x76c435:goto L76c435;
case 0x76c437:goto L76c437;
case 0x76c43b:c.instructions+=1;goto B76c43b;
case 0x76c440:goto L76c440;
case 0x76c441:goto L76c441;
case 0x76c445:c.instructions+=13;goto B76c445;
case 0x76c447:c.instructions+=12;goto B76c447;
case 0x76c448:c.instructions+=11;goto B76c448;
case 0x76c449:c.instructions+=10;goto B76c449;
case 0x76c44b:c.instructions+=9;goto B76c44b;
case 0x76c44d:c.instructions+=8;goto B76c44d;
case 0x76c44e:c.instructions+=7;goto B76c44e;
case 0x76c450:c.instructions+=6;goto B76c450;
case 0x76c453:c.instructions+=5;goto B76c453;
case 0x76c455:c.instructions+=4;goto B76c455;
case 0x76c459:c.instructions+=3;goto B76c459;
case 0x76c45b:c.instructions+=2;goto B76c45b;
case 0x76c45e:c.instructions+=1;goto B76c45e;
case 0x76c460:goto L76c460;
case 0x76c462:c.instructions+=1;goto B76c462;
case 0x76c463:goto L76c463;
case 0x76c467:c.instructions+=1;goto B76c467;
case 0x76c469:goto L76c469;
case 0x76c46a:c.instructions+=2;goto B76c46a;
case 0x76c46d:c.instructions+=1;goto B76c46d;
case 0x76c46f:goto L76c46f;
case 0x76c471:c.instructions+=2;goto B76c471;
case 0x76c472:c.instructions+=1;goto B76c472;
case 0x76c473:goto L76c473;
case 0x76c477:c.instructions+=19;goto B76c477;
case 0x76c478:c.instructions+=18;goto B76c478;
case 0x76c479:c.instructions+=17;goto B76c479;
case 0x76c47b:c.instructions+=16;goto B76c47b;
case 0x76c47c:c.instructions+=15;goto B76c47c;
case 0x76c47d:c.instructions+=14;goto B76c47d;
case 0x76c47f:c.instructions+=13;goto B76c47f;
case 0x76c483:c.instructions+=12;goto B76c483;
case 0x76c485:c.instructions+=11;goto B76c485;
case 0x76c488:c.instructions+=10;goto B76c488;
case 0x76c489:c.instructions+=9;goto B76c489;
case 0x76c48b:c.instructions+=8;goto B76c48b;
case 0x76c48c:c.instructions+=7;goto B76c48c;
case 0x76c48e:c.instructions+=6;goto B76c48e;
case 0x76c490:c.instructions+=5;goto B76c490;
case 0x76c491:c.instructions+=4;goto B76c491;
case 0x76c493:c.instructions+=3;goto B76c493;
case 0x76c494:c.instructions+=2;goto B76c494;
case 0x76c496:c.instructions+=1;goto B76c496;
case 0x76c49b:goto L76c49b;
case 0x76c49e:c.instructions+=2;goto B76c49e;
case 0x76c49f:c.instructions+=1;goto B76c49f;
case 0x76c4a1:goto L76c4a1;
case 0x76c4a4:goto L76c4a4;
case 0x76c4a6:c.instructions+=1;goto B76c4a6;
case 0x76c4a8:goto L76c4a8;
case 0x76c4a9:c.instructions+=3;goto B76c4a9;
case 0x76c4ab:c.instructions+=2;goto B76c4ab;
case 0x76c4ad:c.instructions+=1;goto B76c4ad;
case 0x76c4b2:goto L76c4b2;
case 0x76c4b5:c.instructions+=4;goto B76c4b5;
case 0x76c4b6:c.instructions+=3;goto B76c4b6;
case 0x76c4b9:c.instructions+=2;goto B76c4b9;
case 0x76c4bb:c.instructions+=1;goto B76c4bb;
case 0x76c4bd:goto L76c4bd;
case 0x76c4be:c.instructions+=2;goto B76c4be;
case 0x76c4bf:c.instructions+=1;goto B76c4bf;
case 0x76c4c0:goto L76c4c0;
case 0x76c4c1:c.instructions+=24;goto B76c4c1;
case 0x76c4c3:c.instructions+=23;goto B76c4c3;
case 0x76c4c4:c.instructions+=22;goto B76c4c4;
case 0x76c4c8:c.instructions+=21;goto B76c4c8;
case 0x76c4c9:c.instructions+=20;goto B76c4c9;
case 0x76c4ca:c.instructions+=19;goto B76c4ca;
case 0x76c4cb:c.instructions+=18;goto B76c4cb;
case 0x76c4ce:c.instructions+=17;goto B76c4ce;
case 0x76c4cf:c.instructions+=16;goto B76c4cf;
case 0x76c4d1:c.instructions+=15;goto B76c4d1;
case 0x76c4d4:c.instructions+=14;goto B76c4d4;
case 0x76c4d5:c.instructions+=13;goto B76c4d5;
case 0x76c4d6:c.instructions+=12;goto B76c4d6;
case 0x76c4d8:c.instructions+=11;goto B76c4d8;
case 0x76c4da:c.instructions+=10;goto B76c4da;
case 0x76c4db:c.instructions+=9;goto B76c4db;
case 0x76c4dd:c.instructions+=8;goto B76c4dd;
case 0x76c4df:c.instructions+=7;goto B76c4df;
case 0x76c4e0:c.instructions+=6;goto B76c4e0;
case 0x76c4e2:c.instructions+=5;goto B76c4e2;
case 0x76c4e4:c.instructions+=4;goto B76c4e4;
case 0x76c4e6:c.instructions+=3;goto B76c4e6;
case 0x76c4e9:c.instructions+=2;goto B76c4e9;
case 0x76c4ec:c.instructions+=1;goto B76c4ec;
case 0x76c4ee:goto L76c4ee;
case 0x76c4f1:c.instructions+=3;goto B76c4f1;
case 0x76c4f2:c.instructions+=2;goto B76c4f2;
case 0x76c4f3:c.instructions+=1;goto B76c4f3;
case 0x76c4f8:goto L76c4f8;
case 0x76c4fa:c.instructions+=3;goto B76c4fa;
case 0x76c4fb:c.instructions+=2;goto B76c4fb;
case 0x76c4fc:c.instructions+=1;goto B76c4fc;
case 0x76c4fe:goto L76c4fe;
case 0x76c4ff:c.instructions+=2;goto B76c4ff;
case 0x76c502:c.instructions+=1;goto B76c502;
case 0x76c507:goto L76c507;
case 0x76c508:c.instructions+=2;goto B76c508;
case 0x76c509:c.instructions+=1;goto B76c509;
case 0x76c50c:goto L76c50c;
case 0x76c50f:goto L76c50f;
case 0x76c512:c.instructions+=8;goto B76c512;
case 0x76c514:c.instructions+=7;goto B76c514;
case 0x76c516:c.instructions+=6;goto B76c516;
case 0x76c518:c.instructions+=5;goto B76c518;
case 0x76c519:c.instructions+=4;goto B76c519;
case 0x76c51c:c.instructions+=3;goto B76c51c;
case 0x76c51d:c.instructions+=2;goto B76c51d;
case 0x76c51f:c.instructions+=1;goto B76c51f;
case 0x76c521:goto L76c521;
case 0x76c524:c.instructions+=2;goto B76c524;
case 0x76c526:c.instructions+=1;goto B76c526;
case 0x76c528:goto L76c528;
case 0x76c52a:goto L76c52a;
case 0x76c52d:c.instructions+=5;goto B76c52d;
case 0x76c52e:c.instructions+=4;goto B76c52e;
case 0x76c52f:c.instructions+=3;goto B76c52f;
case 0x76c530:c.instructions+=2;goto B76c530;
case 0x76c531:c.instructions+=1;goto B76c531;
case 0x76c532:goto L76c532;
case 0x76c536:c.instructions+=5;goto B76c536;
case 0x76c53a:c.instructions+=4;goto B76c53a;
case 0x76c53c:c.instructions+=3;goto B76c53c;
case 0x76c53d:c.instructions+=2;goto B76c53d;
case 0x76c53f:c.instructions+=1;goto B76c53f;
case 0x76c540:goto L76c540;
case 0x76c542:c.instructions+=4;goto B76c542;
case 0x76c545:c.instructions+=3;goto B76c545;
case 0x76c548:c.instructions+=2;goto B76c548;
case 0x76c549:c.instructions+=1;goto B76c549;
case 0x76c54b:goto L76c54b;
case 0x76c54c:c.instructions+=1;goto B76c54c;
case 0x76c54d:goto L76c54d;
case 0x76c54f:goto L76c54f;
case 0x76c553:c.instructions+=2;goto B76c553;
case 0x76c557:c.instructions+=1;goto B76c557;
case 0x76c559:goto L76c559;
case 0x76c55a:c.instructions+=2;goto B76c55a;
case 0x76c55d:c.instructions+=1;goto B76c55d;
case 0x76c55f:goto L76c55f;
case 0x76c561:c.instructions+=2;goto B76c561;
case 0x76c562:c.instructions+=1;goto B76c562;
case 0x76c563:goto L76c563;
case 0x76c565:c.instructions+=1;goto B76c565;
case 0x76c566:goto L76c566;
case 0x76c567:c.instructions+=21;goto B76c567;
case 0x76c569:c.instructions+=20;goto B76c569;
case 0x76c56c:c.instructions+=19;goto B76c56c;
case 0x76c56f:c.instructions+=18;goto B76c56f;
case 0x76c570:c.instructions+=17;goto B76c570;
case 0x76c571:c.instructions+=16;goto B76c571;
case 0x76c572:c.instructions+=15;goto B76c572;
case 0x76c574:c.instructions+=14;goto B76c574;
case 0x76c575:c.instructions+=13;goto B76c575;
case 0x76c576:c.instructions+=12;goto B76c576;
case 0x76c578:c.instructions+=11;goto B76c578;
case 0x76c57a:c.instructions+=10;goto B76c57a;
case 0x76c57d:c.instructions+=9;goto B76c57d;
case 0x76c580:c.instructions+=8;goto B76c580;
case 0x76c583:c.instructions+=7;goto B76c583;
case 0x76c585:c.instructions+=6;goto B76c585;
case 0x76c587:c.instructions+=5;goto B76c587;
case 0x76c58a:c.instructions+=4;goto B76c58a;
case 0x76c58c:c.instructions+=3;goto B76c58c;
case 0x76c58f:c.instructions+=2;goto B76c58f;
case 0x76c591:c.instructions+=1;goto B76c591;
case 0x76c594:goto L76c594;
case 0x76c597:c.instructions+=14;goto B76c597;
case 0x76c599:c.instructions+=13;goto B76c599;
case 0x76c59b:c.instructions+=12;goto B76c59b;
case 0x76c59e:c.instructions+=11;goto B76c59e;
case 0x76c5a0:c.instructions+=10;goto B76c5a0;
case 0x76c5a2:c.instructions+=9;goto B76c5a2;
case 0x76c5a5:c.instructions+=8;goto B76c5a5;
case 0x76c5a8:c.instructions+=7;goto B76c5a8;
case 0x76c5ab:c.instructions+=6;goto B76c5ab;
case 0x76c5ae:c.instructions+=5;goto B76c5ae;
case 0x76c5b0:c.instructions+=4;goto B76c5b0;
case 0x76c5b1:c.instructions+=3;goto B76c5b1;
case 0x76c5b4:c.instructions+=2;goto B76c5b4;
case 0x76c5b7:c.instructions+=1;goto B76c5b7;
case 0x76c5b9:goto L76c5b9;
case 0x76c5bb:c.instructions+=4;goto B76c5bb;
case 0x76c5bc:c.instructions+=3;goto B76c5bc;
case 0x76c5be:c.instructions+=2;goto B76c5be;
case 0x76c5c1:c.instructions+=1;goto B76c5c1;
case 0x76c5c4:goto L76c5c4;
case 0x76c5c7:c.instructions+=1;goto B76c5c7;
case 0x76c5c9:goto L76c5c9;
case 0x76c5cb:c.instructions+=2;goto B76c5cb;
case 0x76c5ce:c.instructions+=1;goto B76c5ce;
case 0x76c5d0:goto L76c5d0;
case 0x76c5d4:goto L76c5d4;
case 0x76c5d5:c.instructions+=3;goto B76c5d5;
case 0x76c5d8:c.instructions+=2;goto B76c5d8;
case 0x76c5da:c.instructions+=1;goto B76c5da;
case 0x76c5dc:goto L76c5dc;
case 0x76c5dd:c.instructions+=4;goto B76c5dd;
case 0x76c5de:c.instructions+=3;goto B76c5de;
case 0x76c5df:c.instructions+=2;goto B76c5df;
case 0x76c5e0:c.instructions+=1;goto B76c5e0;
case 0x76c5e1:goto L76c5e1;
case 0x76c5e2:c.instructions+=24;goto B76c5e2;
case 0x76c5e4:c.instructions+=23;goto B76c5e4;
case 0x76c5e7:c.instructions+=22;goto B76c5e7;
case 0x76c5ea:c.instructions+=21;goto B76c5ea;
case 0x76c5ee:c.instructions+=20;goto B76c5ee;
case 0x76c5ef:c.instructions+=19;goto B76c5ef;
case 0x76c5f0:c.instructions+=18;goto B76c5f0;
case 0x76c5f3:c.instructions+=17;goto B76c5f3;
case 0x76c5f4:c.instructions+=16;goto B76c5f4;
case 0x76c5f6:c.instructions+=15;goto B76c5f6;
case 0x76c5fc:c.instructions+=14;goto B76c5fc;
case 0x76c5ff:c.instructions+=13;goto B76c5ff;
case 0x76c602:c.instructions+=12;goto B76c602;
case 0x76c605:c.instructions+=11;goto B76c605;
case 0x76c608:c.instructions+=10;goto B76c608;
case 0x76c60b:c.instructions+=9;goto B76c60b;
case 0x76c60e:c.instructions+=8;goto B76c60e;
case 0x76c614:c.instructions+=7;goto B76c614;
case 0x76c61a:c.instructions+=6;goto B76c61a;
case 0x76c620:c.instructions+=5;goto B76c620;
case 0x76c623:c.instructions+=4;goto B76c623;
case 0x76c626:c.instructions+=3;goto B76c626;
case 0x76c629:c.instructions+=2;goto B76c629;
case 0x76c62a:c.instructions+=1;goto B76c62a;
case 0x76c62c:goto L76c62c;
case 0x76c62e:c.instructions+=1;goto B76c62e;
case 0x76c633:goto L76c633;
case 0x76c635:c.instructions+=2;goto B76c635;
case 0x76c636:c.instructions+=1;goto B76c636;
case 0x76c63c:goto L76c63c;
case 0x76c63f:c.instructions+=3;goto B76c63f;
case 0x76c640:c.instructions+=2;goto B76c640;
case 0x76c641:c.instructions+=1;goto B76c641;
case 0x76c642:goto L76c642;
case 0x76c644:c.instructions+=2;goto B76c644;
case 0x76c645:c.instructions+=1;goto B76c645;
case 0x76c64a:goto L76c64a;
case 0x76c64d:c.instructions+=2;goto B76c64d;
case 0x76c64e:c.instructions+=1;goto B76c64e;
case 0x76c653:goto L76c653;
case 0x76c656:c.instructions+=3;goto B76c656;
case 0x76c659:c.instructions+=2;goto B76c659;
case 0x76c65a:c.instructions+=1;goto B76c65a;
case 0x76c65f:goto L76c65f;
case 0x76c662:c.instructions+=2;goto B76c662;
case 0x76c664:c.instructions+=1;goto B76c664;
case 0x76c666:goto L76c666;
case 0x76c667:goto L76c667;
case 0x76c66a:c.instructions+=4;goto B76c66a;
case 0x76c66c:c.instructions+=3;goto B76c66c;
case 0x76c66f:c.instructions+=2;goto B76c66f;
case 0x76c671:c.instructions+=1;goto B76c671;
case 0x76c673:goto L76c673;
case 0x76c675:c.instructions+=5;goto B76c675;
case 0x76c678:c.instructions+=4;goto B76c678;
case 0x76c679:c.instructions+=3;goto B76c679;
case 0x76c67a:c.instructions+=2;goto B76c67a;
case 0x76c67b:c.instructions+=1;goto B76c67b;
case 0x76c67d:goto L76c67d;
case 0x76c67f:c.instructions+=1;goto B76c67f;
case 0x76c681:goto L76c681;
case 0x76c683:c.instructions+=6;goto B76c683;
case 0x76c685:c.instructions+=5;goto B76c685;
case 0x76c688:c.instructions+=4;goto B76c688;
case 0x76c689:c.instructions+=3;goto B76c689;
case 0x76c68c:c.instructions+=2;goto B76c68c;
case 0x76c68d:c.instructions+=1;goto B76c68d;
case 0x76c692:goto L76c692;
case 0x76c695:c.instructions+=3;goto B76c695;
case 0x76c696:c.instructions+=2;goto B76c696;
case 0x76c697:c.instructions+=1;goto B76c697;
case 0x76c69c:goto L76c69c;
case 0x76c69f:c.instructions+=3;goto B76c69f;
case 0x76c6a2:c.instructions+=2;goto B76c6a2;
case 0x76c6a3:c.instructions+=1;goto B76c6a3;
case 0x76c6a8:goto L76c6a8;
case 0x76c6ab:c.instructions+=5;goto B76c6ab;
case 0x76c6ac:c.instructions+=4;goto B76c6ac;
case 0x76c6ad:c.instructions+=3;goto B76c6ad;
case 0x76c6b0:c.instructions+=2;goto B76c6b0;
case 0x76c6b1:c.instructions+=1;goto B76c6b1;
case 0x76c6b6:goto L76c6b6;
case 0x76c6b9:goto L76c6b9;
case 0x76c6bb:c.instructions+=1;goto B76c6bb;
case 0x76c6bd:goto L76c6bd;
case 0x76c6bf:c.instructions+=2;goto B76c6bf;
case 0x76c6c2:c.instructions+=1;goto B76c6c2;
case 0x76c6c4:goto L76c6c4;
case 0x76c6c6:c.instructions+=8;goto B76c6c6;
case 0x76c6c9:c.instructions+=7;goto B76c6c9;
case 0x76c6ca:c.instructions+=6;goto B76c6ca;
case 0x76c6cb:c.instructions+=5;goto B76c6cb;
case 0x76c6cc:c.instructions+=4;goto B76c6cc;
case 0x76c6d0:c.instructions+=3;goto B76c6d0;
case 0x76c6d3:c.instructions+=2;goto B76c6d3;
case 0x76c6d4:c.instructions+=1;goto B76c6d4;
case 0x76c6d9:goto L76c6d9;
case 0x76c6dc:c.instructions+=6;goto B76c6dc;
case 0x76c6de:c.instructions+=5;goto B76c6de;
case 0x76c6df:c.instructions+=4;goto B76c6df;
case 0x76c6e1:c.instructions+=3;goto B76c6e1;
case 0x76c6e2:c.instructions+=2;goto B76c6e2;
case 0x76c6e3:c.instructions+=1;goto B76c6e3;
case 0x76c6e5:goto L76c6e5;
case 0x76c6e8:c.instructions+=5;goto B76c6e8;
case 0x76c6ec:c.instructions+=4;goto B76c6ec;
case 0x76c6ef:c.instructions+=3;goto B76c6ef;
case 0x76c6f0:c.instructions+=2;goto B76c6f0;
case 0x76c6f2:c.instructions+=1;goto B76c6f2;
case 0x76c6f7:goto L76c6f7;
case 0x76c6f8:c.instructions+=1;goto B76c6f8;
case 0x76c6f9:goto L76c6f9;
case 0x76c6fb:goto L76c6fb;
case 0x76c6fd:c.instructions+=12;goto B76c6fd;
case 0x76c6fe:c.instructions+=11;goto B76c6fe;
case 0x76c701:c.instructions+=10;goto B76c701;
case 0x76c704:c.instructions+=9;goto B76c704;
case 0x76c706:c.instructions+=8;goto B76c706;
case 0x76c709:c.instructions+=7;goto B76c709;
case 0x76c70b:c.instructions+=6;goto B76c70b;
case 0x76c70d:c.instructions+=5;goto B76c70d;
case 0x76c713:c.instructions+=4;goto B76c713;
case 0x76c715:c.instructions+=3;goto B76c715;
case 0x76c718:c.instructions+=2;goto B76c718;
case 0x76c71b:c.instructions+=1;goto B76c71b;
case 0x76c71d:goto L76c71d;
case 0x76c720:c.instructions+=4;goto B76c720;
case 0x76c723:c.instructions+=3;goto B76c723;
case 0x76c726:c.instructions+=2;goto B76c726;
case 0x76c728:c.instructions+=1;goto B76c728;
case 0x76c72a:goto L76c72a;
case 0x76c72d:c.instructions+=1;goto B76c72d;
case 0x76c72f:goto L76c72f;
case 0x76c732:c.instructions+=1;goto B76c732;
case 0x76c734:goto L76c734;
case 0x76c735:c.instructions+=4;goto B76c735;
case 0x76c736:c.instructions+=3;goto B76c736;
case 0x76c737:c.instructions+=2;goto B76c737;
case 0x76c738:c.instructions+=1;goto B76c738;
case 0x76c739:goto L76c739;
case 0x76c73e:c.instructions+=3;goto B76c73e;
case 0x76c742:c.instructions+=2;goto B76c742;
case 0x76c746:c.instructions+=1;goto B76c746;
case 0x76c74b:goto L76c74b;
case 0x76c74e:c.instructions+=1;goto B76c74e;
case 0x76c74f:goto L76c74f;
case 0x76c754:c.instructions+=3;goto B76c754;
case 0x76c758:c.instructions+=2;goto B76c758;
case 0x76c75c:c.instructions+=1;goto B76c75c;
case 0x76c761:goto L76c761;
case 0x76c764:c.instructions+=1;goto B76c764;
case 0x76c765:goto L76c765;
case 0x76c766:c.instructions+=16;goto B76c766;
case 0x76c768:c.instructions+=15;goto B76c768;
case 0x76c76b:c.instructions+=14;goto B76c76b;
case 0x76c770:c.instructions+=13;goto B76c770;
case 0x76c773:c.instructions+=12;goto B76c773;
case 0x76c776:c.instructions+=11;goto B76c776;
case 0x76c778:c.instructions+=10;goto B76c778;
case 0x76c779:c.instructions+=9;goto B76c779;
case 0x76c77a:c.instructions+=8;goto B76c77a;
case 0x76c77b:c.instructions+=7;goto B76c77b;
case 0x76c77c:c.instructions+=6;goto B76c77c;
case 0x76c77f:c.instructions+=5;goto B76c77f;
case 0x76c782:c.instructions+=4;goto B76c782;
case 0x76c783:c.instructions+=3;goto B76c783;
case 0x76c786:c.instructions+=2;goto B76c786;
case 0x76c787:c.instructions+=1;goto B76c787;
case 0x76c78c:goto L76c78c;
case 0x76c78f:c.instructions+=3;goto B76c78f;
case 0x76c792:c.instructions+=2;goto B76c792;
case 0x76c793:c.instructions+=1;goto B76c793;
case 0x76c798:goto L76c798;
case 0x76c79b:c.instructions+=3;goto B76c79b;
case 0x76c79e:c.instructions+=2;goto B76c79e;
case 0x76c7a1:c.instructions+=1;goto B76c7a1;
case 0x76c7a6:goto L76c7a6;
case 0x76c7a7:c.instructions+=1;goto B76c7a7;
case 0x76c7a8:goto L76c7a8;
case 0x76c7a9:c.instructions+=16;goto B76c7a9;
case 0x76c7ab:c.instructions+=15;goto B76c7ab;
case 0x76c7ae:c.instructions+=14;goto B76c7ae;
case 0x76c7b3:c.instructions+=13;goto B76c7b3;
case 0x76c7b6:c.instructions+=12;goto B76c7b6;
case 0x76c7b9:c.instructions+=11;goto B76c7b9;
case 0x76c7bb:c.instructions+=10;goto B76c7bb;
case 0x76c7bc:c.instructions+=9;goto B76c7bc;
case 0x76c7bd:c.instructions+=8;goto B76c7bd;
case 0x76c7be:c.instructions+=7;goto B76c7be;
case 0x76c7bf:c.instructions+=6;goto B76c7bf;
case 0x76c7c2:c.instructions+=5;goto B76c7c2;
case 0x76c7c5:c.instructions+=4;goto B76c7c5;
case 0x76c7c6:c.instructions+=3;goto B76c7c6;
case 0x76c7c9:c.instructions+=2;goto B76c7c9;
case 0x76c7ca:c.instructions+=1;goto B76c7ca;
case 0x76c7cf:goto L76c7cf;
case 0x76c7d2:c.instructions+=3;goto B76c7d2;
case 0x76c7d5:c.instructions+=2;goto B76c7d5;
case 0x76c7d6:c.instructions+=1;goto B76c7d6;
case 0x76c7db:goto L76c7db;
case 0x76c7de:c.instructions+=3;goto B76c7de;
case 0x76c7e1:c.instructions+=2;goto B76c7e1;
case 0x76c7e4:c.instructions+=1;goto B76c7e4;
case 0x76c7e9:goto L76c7e9;
case 0x76c7ea:c.instructions+=1;goto B76c7ea;
case 0x76c7eb:goto L76c7eb;
case 0x76c7ec:c.instructions+=13;goto B76c7ec;
case 0x76c7ee:c.instructions+=12;goto B76c7ee;
case 0x76c7f1:c.instructions+=11;goto B76c7f1;
case 0x76c7f4:c.instructions+=10;goto B76c7f4;
case 0x76c7f5:c.instructions+=9;goto B76c7f5;
case 0x76c7f8:c.instructions+=8;goto B76c7f8;
case 0x76c7fa:c.instructions+=7;goto B76c7fa;
case 0x76c7fb:c.instructions+=6;goto B76c7fb;
case 0x76c7fe:c.instructions+=5;goto B76c7fe;
case 0x76c7ff:c.instructions+=4;goto B76c7ff;
case 0x76c802:c.instructions+=3;goto B76c802;
case 0x76c805:c.instructions+=2;goto B76c805;
case 0x76c807:c.instructions+=1;goto B76c807;
case 0x76c809:goto L76c809;
case 0x76c80c:c.instructions+=1;goto B76c80c;
case 0x76c80e:goto L76c80e;
case 0x76c810:c.instructions+=2;goto B76c810;
case 0x76c812:c.instructions+=1;goto B76c812;
case 0x76c814:goto L76c814;
case 0x76c817:c.instructions+=2;goto B76c817;
case 0x76c818:c.instructions+=1;goto B76c818;
case 0x76c81a:goto L76c81a;
case 0x76c81c:c.instructions+=1;goto B76c81c;
case 0x76c81d:goto L76c81d;
case 0x76c81f:c.instructions+=3;goto B76c81f;
case 0x76c820:c.instructions+=2;goto B76c820;
case 0x76c823:c.instructions+=1;goto B76c823;
case 0x76c825:goto L76c825;
case 0x76c828:goto L76c828;
case 0x76c82b:c.instructions+=2;goto B76c82b;
case 0x76c82d:c.instructions+=1;goto B76c82d;
case 0x76c82f:goto L76c82f;
case 0x76c832:c.instructions+=1;goto B76c832;
case 0x76c834:goto L76c834;
case 0x76c836:goto L76c836;
case 0x76c839:goto L76c839;
case 0x76c83a:c.instructions+=2;goto B76c83a;
case 0x76c83d:c.instructions+=1;goto B76c83d;
case 0x76c83f:goto L76c83f;
case 0x76c841:goto L76c841;
case 0x76c844:c.instructions+=1;goto B76c844;
case 0x76c846:goto L76c846;
case 0x76c849:c.instructions+=1;goto B76c849;
case 0x76c84b:goto L76c84b;
case 0x76c84c:c.instructions+=1;goto B76c84c;
case 0x76c851:goto L76c851;
case 0x76c852:c.instructions+=4;goto B76c852;
case 0x76c853:c.instructions+=3;goto B76c853;
case 0x76c854:c.instructions+=2;goto B76c854;
case 0x76c855:c.instructions+=1;goto B76c855;
case 0x76c85a:goto L76c85a;
case 0x76c85d:goto L76c85d;
case 0x76c85e:c.instructions+=4;goto B76c85e;
case 0x76c85f:c.instructions+=3;goto B76c85f;
case 0x76c860:c.instructions+=2;goto B76c860;
case 0x76c861:c.instructions+=1;goto B76c861;
case 0x76c862:goto L76c862;
case 0x76c863:c.instructions+=22;goto B76c863;
case 0x76c865:c.instructions+=21;goto B76c865;
case 0x76c866:c.instructions+=20;goto B76c866;
case 0x76c869:c.instructions+=19;goto B76c869;
case 0x76c86b:c.instructions+=18;goto B76c86b;
case 0x76c86f:c.instructions+=17;goto B76c86f;
case 0x76c870:c.instructions+=16;goto B76c870;
case 0x76c871:c.instructions+=15;goto B76c871;
case 0x76c872:c.instructions+=14;goto B76c872;
case 0x76c877:c.instructions+=13;goto B76c877;
case 0x76c87c:c.instructions+=12;goto B76c87c;
case 0x76c87f:c.instructions+=11;goto B76c87f;
case 0x76c881:c.instructions+=10;goto B76c881;
case 0x76c884:c.instructions+=9;goto B76c884;
case 0x76c889:c.instructions+=8;goto B76c889;
case 0x76c88b:c.instructions+=7;goto B76c88b;
case 0x76c88e:c.instructions+=6;goto B76c88e;
case 0x76c891:c.instructions+=5;goto B76c891;
case 0x76c893:c.instructions+=4;goto B76c893;
case 0x76c896:c.instructions+=3;goto B76c896;
case 0x76c89b:c.instructions+=2;goto B76c89b;
case 0x76c89d:c.instructions+=1;goto B76c89d;
case 0x76c89f:goto L76c89f;
case 0x76c8a1:c.instructions+=1;goto B76c8a1;
case 0x76c8a3:goto L76c8a3;
case 0x76c8a9:c.instructions+=1;goto B76c8a9;
case 0x76c8ab:goto L76c8ab;
case 0x76c8b0:c.instructions+=1;goto B76c8b0;
case 0x76c8b2:goto L76c8b2;
case 0x76c8b4:c.instructions+=2;goto B76c8b4;
case 0x76c8b6:c.instructions+=1;goto B76c8b6;
case 0x76c8b8:goto L76c8b8;
case 0x76c8ba:c.instructions+=1;goto B76c8ba;
case 0x76c8bc:goto L76c8bc;
case 0x76c8bf:c.instructions+=4;goto B76c8bf;
case 0x76c8c2:c.instructions+=3;goto B76c8c2;
case 0x76c8c4:c.instructions+=2;goto B76c8c4;
case 0x76c8c8:c.instructions+=1;goto B76c8c8;
case 0x76c8ca:goto L76c8ca;
case 0x76c8d0:c.instructions+=1;goto B76c8d0;
case 0x76c8d3:goto L76c8d3;
case 0x76c8d5:c.instructions+=10;goto B76c8d5;
case 0x76c8d8:c.instructions+=9;goto B76c8d8;
case 0x76c8db:c.instructions+=8;goto B76c8db;
case 0x76c8dd:c.instructions+=7;goto B76c8dd;
case 0x76c8e0:c.instructions+=6;goto B76c8e0;
case 0x76c8e3:c.instructions+=5;goto B76c8e3;
case 0x76c8e6:c.instructions+=4;goto B76c8e6;
case 0x76c8e8:c.instructions+=3;goto B76c8e8;
case 0x76c8eb:c.instructions+=2;goto B76c8eb;
case 0x76c8ed:c.instructions+=1;goto B76c8ed;
case 0x76c8ef:goto L76c8ef;
case 0x76c8f1:c.instructions+=11;goto B76c8f1;
case 0x76c8f4:c.instructions+=10;goto B76c8f4;
case 0x76c8f6:c.instructions+=9;goto B76c8f6;
case 0x76c8f8:c.instructions+=8;goto B76c8f8;
case 0x76c8fb:c.instructions+=7;goto B76c8fb;
case 0x76c8fd:c.instructions+=6;goto B76c8fd;
case 0x76c8ff:c.instructions+=5;goto B76c8ff;
case 0x76c905:c.instructions+=4;goto B76c905;
case 0x76c907:c.instructions+=3;goto B76c907;
case 0x76c90a:c.instructions+=2;goto B76c90a;
case 0x76c90c:c.instructions+=1;goto B76c90c;
case 0x76c90e:goto L76c90e;
case 0x76c911:c.instructions+=2;goto B76c911;
case 0x76c913:c.instructions+=1;goto B76c913;
case 0x76c917:goto L76c917;
case 0x76c918:c.instructions+=4;goto B76c918;
case 0x76c919:c.instructions+=3;goto B76c919;
case 0x76c91a:c.instructions+=2;goto B76c91a;
case 0x76c91b:c.instructions+=1;goto B76c91b;
case 0x76c91c:goto L76c91c;
case 0x76c91d:c.instructions+=12;goto B76c91d;
case 0x76c91f:c.instructions+=11;goto B76c91f;
case 0x76c922:c.instructions+=10;goto B76c922;
case 0x76c927:c.instructions+=9;goto B76c927;
case 0x76c92a:c.instructions+=8;goto B76c92a;
case 0x76c92b:c.instructions+=7;goto B76c92b;
case 0x76c92e:c.instructions+=6;goto B76c92e;
case 0x76c92f:c.instructions+=5;goto B76c92f;
case 0x76c932:c.instructions+=4;goto B76c932;
case 0x76c933:c.instructions+=3;goto B76c933;
case 0x76c936:c.instructions+=2;goto B76c936;
case 0x76c937:c.instructions+=1;goto B76c937;
case 0x76c93c:goto L76c93c;
case 0x76c93d:c.instructions+=12;goto B76c93d;
case 0x76c93e:c.instructions+=11;goto B76c93e;
case 0x76c941:c.instructions+=10;goto B76c941;
case 0x76c942:c.instructions+=9;goto B76c942;
case 0x76c944:c.instructions+=8;goto B76c944;
case 0x76c946:c.instructions+=7;goto B76c946;
case 0x76c949:c.instructions+=6;goto B76c949;
case 0x76c94c:c.instructions+=5;goto B76c94c;
case 0x76c94e:c.instructions+=4;goto B76c94e;
case 0x76c94f:c.instructions+=3;goto B76c94f;
case 0x76c950:c.instructions+=2;goto B76c950;
case 0x76c952:c.instructions+=1;goto B76c952;
case 0x76c957:goto L76c957;
case 0x76c95a:c.instructions+=10;goto B76c95a;
case 0x76c95d:c.instructions+=9;goto B76c95d;
case 0x76c960:c.instructions+=8;goto B76c960;
case 0x76c964:c.instructions+=7;goto B76c964;
case 0x76c966:c.instructions+=6;goto B76c966;
case 0x76c96a:c.instructions+=5;goto B76c96a;
case 0x76c96d:c.instructions+=4;goto B76c96d;
case 0x76c970:c.instructions+=3;goto B76c970;
case 0x76c971:c.instructions+=2;goto B76c971;
case 0x76c972:c.instructions+=1;goto B76c972;
case 0x76c977:goto L76c977;
case 0x76c97a:c.instructions+=5;goto B76c97a;
case 0x76c97d:c.instructions+=4;goto B76c97d;
case 0x76c980:c.instructions+=3;goto B76c980;
case 0x76c983:c.instructions+=2;goto B76c983;
case 0x76c985:c.instructions+=1;goto B76c985;
case 0x76c98a:goto L76c98a;
case 0x76c98b:c.instructions+=3;goto B76c98b;
case 0x76c98c:c.instructions+=2;goto B76c98c;
case 0x76c98d:c.instructions+=1;goto B76c98d;
case 0x76c98e:goto L76c98e;
case 0x76c990:c.instructions+=1;goto B76c990;
case 0x76c995:goto L76c995;
case 0x76c996:c.instructions+=1;goto B76c996;
case 0x76c997:goto L76c997;
case 0x76c998:c.instructions+=5;goto B76c998;
case 0x76c99c:c.instructions+=4;goto B76c99c;
case 0x76c99e:c.instructions+=3;goto B76c99e;
case 0x76c9a2:c.instructions+=2;goto B76c9a2;
case 0x76c9a3:c.instructions+=1;goto B76c9a3;
case 0x76c9a9:goto L76c9a9;
case 0x76c9ab:c.instructions+=1;goto B76c9ab;
case 0x76c9ad:goto L76c9ad;
case 0x76c9af:goto L76c9af;
case 0x76c9b1:c.instructions+=2;goto B76c9b1;
case 0x76c9b2:c.instructions+=1;goto B76c9b2;
case 0x76c9b3:goto L76c9b3;
case 0x76c9b4:c.instructions+=5;goto B76c9b4;
case 0x76c9b8:c.instructions+=4;goto B76c9b8;
case 0x76c9ba:c.instructions+=3;goto B76c9ba;
case 0x76c9be:c.instructions+=2;goto B76c9be;
case 0x76c9bf:c.instructions+=1;goto B76c9bf;
case 0x76c9c5:goto L76c9c5;
case 0x76c9c7:c.instructions+=1;goto B76c9c7;
case 0x76c9c9:goto L76c9c9;
case 0x76c9cb:goto L76c9cb;
case 0x76c9cd:c.instructions+=2;goto B76c9cd;
case 0x76c9ce:c.instructions+=1;goto B76c9ce;
case 0x76c9cf:goto L76c9cf;
case 0x76c9d0:c.instructions+=4;goto B76c9d0;
case 0x76c9d4:c.instructions+=3;goto B76c9d4;
case 0x76c9d6:c.instructions+=2;goto B76c9d6;
case 0x76c9d7:c.instructions+=1;goto B76c9d7;
case 0x76c9dd:goto L76c9dd;
case 0x76c9df:c.instructions+=1;goto B76c9df;
case 0x76c9e1:goto L76c9e1;
case 0x76c9e3:goto L76c9e3;
case 0x76c9e5:c.instructions+=2;goto B76c9e5;
case 0x76c9e6:c.instructions+=1;goto B76c9e6;
case 0x76c9e7:goto L76c9e7;
case 0x76c9ed:c.instructions+=2;goto B76c9ed;
case 0x76c9f2:c.instructions+=1;goto B76c9f2;
case 0x76c9f7:goto L76c9f7;
case 0x76c9f9:c.instructions+=4;goto B76c9f9;
case 0x76c9fa:c.instructions+=3;goto B76c9fa;
case 0x76c9fe:c.instructions+=2;goto B76c9fe;
case 0x76ca01:c.instructions+=1;goto B76ca01;
case 0x76ca03:goto L76ca03;
case 0x76ca07:c.instructions+=2;goto B76ca07;
case 0x76ca0e:c.instructions+=1;goto B76ca0e;
case 0x76ca10:goto L76ca10;
case 0x76ca14:c.instructions+=3;goto B76ca14;
case 0x76ca17:c.instructions+=2;goto B76ca17;
case 0x76ca1a:c.instructions+=1;goto B76ca1a;
case 0x76ca21:goto L76ca21;
case 0x76ca24:c.instructions+=3;goto B76ca24;
case 0x76ca28:c.instructions+=2;goto B76ca28;
case 0x76ca2a:c.instructions+=1;goto B76ca2a;
case 0x76ca2b:goto L76ca2b;
case 0x76ca2f:c.instructions+=2;goto B76ca2f;
case 0x76ca35:c.instructions+=1;goto B76ca35;
case 0x76ca37:goto L76ca37;
case 0x76ca39:c.instructions+=1;goto B76ca39;
case 0x76ca3a:goto L76ca3a;
case 0x76ca3c:c.instructions+=7;goto B76ca3c;
case 0x76ca3f:c.instructions+=6;goto B76ca3f;
case 0x76ca42:c.instructions+=5;goto B76ca42;
case 0x76ca49:c.instructions+=4;goto B76ca49;
case 0x76ca4c:c.instructions+=3;goto B76ca4c;
case 0x76ca51:c.instructions+=2;goto B76ca51;
case 0x76ca54:c.instructions+=1;goto B76ca54;
case 0x76ca55:goto L76ca55;
case 0x76ca56:c.instructions+=6;goto B76ca56;
case 0x76ca58:c.instructions+=5;goto B76ca58;
case 0x76ca5b:c.instructions+=4;goto B76ca5b;
case 0x76ca5c:c.instructions+=3;goto B76ca5c;
case 0x76ca5e:c.instructions+=2;goto B76ca5e;
case 0x76ca60:c.instructions+=1;goto B76ca60;
case 0x76ca62:goto L76ca62;
case 0x76ca64:c.instructions+=1;goto B76ca64;
case 0x76ca66:goto L76ca66;
case 0x76ca69:c.instructions+=2;goto B76ca69;
case 0x76ca6c:c.instructions+=1;goto B76ca6c;
case 0x76ca6e:goto L76ca6e;
case 0x76ca72:c.instructions+=2;goto B76ca72;
case 0x76ca76:c.instructions+=1;goto B76ca76;
case 0x76ca78:goto L76ca78;
case 0x76ca7a:c.instructions+=3;goto B76ca7a;
case 0x76ca7c:c.instructions+=2;goto B76ca7c;
case 0x76ca7d:c.instructions+=1;goto B76ca7d;
case 0x76ca7f:goto L76ca7f;
case 0x76ca82:c.instructions+=11;goto B76ca82;
case 0x76ca83:c.instructions+=10;goto B76ca83;
case 0x76ca84:c.instructions+=9;goto B76ca84;
case 0x76ca87:c.instructions+=8;goto B76ca87;
case 0x76ca8a:c.instructions+=7;goto B76ca8a;
case 0x76ca8b:c.instructions+=6;goto B76ca8b;
case 0x76ca8d:c.instructions+=5;goto B76ca8d;
case 0x76ca90:c.instructions+=4;goto B76ca90;
case 0x76ca91:c.instructions+=3;goto B76ca91;
case 0x76ca92:c.instructions+=2;goto B76ca92;
case 0x76ca95:c.instructions+=1;goto B76ca95;
case 0x76ca9b:goto L76ca9b;
case 0x76ca9d:c.instructions+=1;goto B76ca9d;
case 0x76ca9f:goto L76ca9f;
case 0x76caa2:c.instructions+=1;goto B76caa2;
case 0x76caa4:goto L76caa4;
case 0x76caa9:goto L76caa9;
case 0x76caaf:c.instructions+=1;goto B76caaf;
case 0x76cab2:goto L76cab2;
case 0x76cab3:c.instructions+=2;goto B76cab3;
case 0x76cab4:c.instructions+=1;goto B76cab4;
case 0x76cab5:goto L76cab5;
case 0x76caba:goto L76caba;
case 0x76cabd:c.instructions+=2;goto B76cabd;
case 0x76cac3:c.instructions+=1;goto B76cac3;
case 0x76cac5:goto L76cac5;
case 0x76caca:goto L76caca;
case 0x76cace:c.instructions+=3;goto B76cace;
case 0x76cad2:c.instructions+=2;goto B76cad2;
case 0x76cad3:c.instructions+=1;goto B76cad3;
case 0x76cad8:goto L76cad8;
case 0x76cadb:c.instructions+=1;goto B76cadb;
case 0x76cae0:goto L76cae0;
case 0x76cae1:c.instructions+=3;goto B76cae1;
case 0x76cae5:c.instructions+=2;goto B76cae5;
case 0x76cae7:c.instructions+=1;goto B76cae7;
case 0x76cae9:goto L76cae9;
case 0x76caed:c.instructions+=14;goto B76caed;
case 0x76caf1:c.instructions+=13;goto B76caf1;
case 0x76caf3:c.instructions+=12;goto B76caf3;
case 0x76caf5:c.instructions+=11;goto B76caf5;
case 0x76caf7:c.instructions+=10;goto B76caf7;
case 0x76cafb:c.instructions+=9;goto B76cafb;
case 0x76cafd:c.instructions+=8;goto B76cafd;
case 0x76caff:c.instructions+=7;goto B76caff;
case 0x76cb01:c.instructions+=6;goto B76cb01;
case 0x76cb05:c.instructions+=5;goto B76cb05;
case 0x76cb07:c.instructions+=4;goto B76cb07;
case 0x76cb09:c.instructions+=3;goto B76cb09;
case 0x76cb0d:c.instructions+=2;goto B76cb0d;
case 0x76cb0f:c.instructions+=1;goto B76cb0f;
case 0x76cb11:goto L76cb11;
case 0x76cb13:c.instructions+=3;goto B76cb13;
case 0x76cb17:c.instructions+=2;goto B76cb17;
case 0x76cb1b:c.instructions+=1;goto B76cb1b;
case 0x76cb1f:goto L76cb1f;
case 0x76cb21:c.instructions+=5;goto B76cb21;
case 0x76cb23:c.instructions+=4;goto B76cb23;
case 0x76cb25:c.instructions+=3;goto B76cb25;
case 0x76cb27:c.instructions+=2;goto B76cb27;
case 0x76cb29:c.instructions+=1;goto B76cb29;
case 0x76cb2b:goto L76cb2b;
case 0x76cb2d:c.instructions+=7;goto B76cb2d;
case 0x76cb2f:c.instructions+=6;goto B76cb2f;
case 0x76cb33:c.instructions+=5;goto B76cb33;
case 0x76cb35:c.instructions+=4;goto B76cb35;
case 0x76cb39:c.instructions+=3;goto B76cb39;
case 0x76cb3b:c.instructions+=2;goto B76cb3b;
case 0x76cb3d:c.instructions+=1;goto B76cb3d;
case 0x76cb3f:goto L76cb3f;
case 0x76cb43:c.instructions+=1;goto B76cb43;
case 0x76cb45:goto L76cb45;
case 0x76cb47:goto L76cb47;
case 0x76cb4b:c.instructions+=1;goto B76cb4b;
case 0x76cb4d:goto L76cb4d;
case 0x76cb4e:c.instructions+=2;goto B76cb4e;
case 0x76cb52:c.instructions+=1;goto B76cb52;
case 0x76cb56:goto L76cb56;
case 0x76cb58:goto L76cb58;
case 0x76cb5c:c.instructions+=11;goto B76cb5c;
case 0x76cb60:c.instructions+=10;goto B76cb60;
case 0x76cb62:c.instructions+=9;goto B76cb62;
case 0x76cb64:c.instructions+=8;goto B76cb64;
case 0x76cb67:c.instructions+=7;goto B76cb67;
case 0x76cb69:c.instructions+=6;goto B76cb69;
case 0x76cb6b:c.instructions+=5;goto B76cb6b;
case 0x76cb6d:c.instructions+=4;goto B76cb6d;
case 0x76cb6f:c.instructions+=3;goto B76cb6f;
case 0x76cb71:c.instructions+=2;goto B76cb71;
case 0x76cb72:c.instructions+=1;goto B76cb72;
case 0x76cb75:goto L76cb75;
case 0x76cb76:c.instructions+=16;goto B76cb76;
case 0x76cb78:c.instructions+=15;goto B76cb78;
case 0x76cb7b:c.instructions+=14;goto B76cb7b;
case 0x76cb81:c.instructions+=13;goto B76cb81;
case 0x76cb86:c.instructions+=12;goto B76cb86;
case 0x76cb89:c.instructions+=11;goto B76cb89;
case 0x76cb8a:c.instructions+=10;goto B76cb8a;
case 0x76cb91:c.instructions+=9;goto B76cb91;
case 0x76cb94:c.instructions+=8;goto B76cb94;
case 0x76cb97:c.instructions+=7;goto B76cb97;
case 0x76cb98:c.instructions+=6;goto B76cb98;
case 0x76cb9b:c.instructions+=5;goto B76cb9b;
case 0x76cb9d:c.instructions+=4;goto B76cb9d;
case 0x76cb9e:c.instructions+=3;goto B76cb9e;
case 0x76cb9f:c.instructions+=2;goto B76cb9f;
case 0x76cba3:c.instructions+=1;goto B76cba3;
case 0x76cba5:goto L76cba5;
case 0x76cba6:c.instructions+=1;goto B76cba6;
case 0x76cba8:goto L76cba8;
case 0x76cba9:c.instructions+=1;goto B76cba9;
case 0x76cbab:goto L76cbab;
case 0x76cbac:c.instructions+=1;goto B76cbac;
case 0x76cbae:goto L76cbae;
case 0x76cbaf:c.instructions+=1;goto B76cbaf;
case 0x76cbb1:goto L76cbb1;
case 0x76cbb2:c.instructions+=2;goto B76cbb2;
case 0x76cbb3:c.instructions+=1;goto B76cbb3;
case 0x76cbb5:goto L76cbb5;
case 0x76cbb6:c.instructions+=1;goto B76cbb6;
case 0x76cbb8:goto L76cbb8;
case 0x76cbba:c.instructions+=1;goto B76cbba;
case 0x76cbbc:goto L76cbbc;
case 0x76cbc2:c.instructions+=1;goto B76cbc2;
case 0x76cbc4:goto L76cbc4;
case 0x76cbc6:c.instructions+=1;goto B76cbc6;
case 0x76cbc8:goto L76cbc8;
case 0x76cbca:c.instructions+=1;goto B76cbca;
case 0x76cbcc:goto L76cbcc;
case 0x76cbce:c.instructions+=1;goto B76cbce;
case 0x76cbd0:goto L76cbd0;
case 0x76cbd2:goto L76cbd2;
case 0x76cbd3:c.instructions+=5;goto B76cbd3;
case 0x76cbd4:c.instructions+=4;goto B76cbd4;
case 0x76cbd7:c.instructions+=3;goto B76cbd7;
case 0x76cbd8:c.instructions+=2;goto B76cbd8;
case 0x76cbd9:c.instructions+=1;goto B76cbd9;
case 0x76cbde:goto L76cbde;
case 0x76cbe1:c.instructions+=2;goto B76cbe1;
case 0x76cbe3:c.instructions+=1;goto B76cbe3;
case 0x76cbe5:goto L76cbe5;
case 0x76cbe8:c.instructions+=2;goto B76cbe8;
case 0x76cbeb:c.instructions+=1;goto B76cbeb;
case 0x76cbed:goto L76cbed;
case 0x76cbf0:c.instructions+=1;goto B76cbf0;
case 0x76cbf2:goto L76cbf2;
case 0x76cbf5:c.instructions+=1;goto B76cbf5;
case 0x76cbf7:goto L76cbf7;
case 0x76cbfc:c.instructions+=1;goto B76cbfc;
case 0x76cbfe:goto L76cbfe;
case 0x76cc02:c.instructions+=5;goto B76cc02;
case 0x76cc05:c.instructions+=4;goto B76cc05;
case 0x76cc08:c.instructions+=3;goto B76cc08;
case 0x76cc0c:c.instructions+=2;goto B76cc0c;
case 0x76cc0f:c.instructions+=1;goto B76cc0f;
case 0x76cc13:goto L76cc13;
case 0x76cc14:c.instructions+=9;goto B76cc14;
case 0x76cc17:c.instructions+=8;goto B76cc17;
case 0x76cc18:c.instructions+=7;goto B76cc18;
case 0x76cc19:c.instructions+=6;goto B76cc19;
case 0x76cc1a:c.instructions+=5;goto B76cc1a;
case 0x76cc1e:c.instructions+=4;goto B76cc1e;
case 0x76cc1f:c.instructions+=3;goto B76cc1f;
case 0x76cc23:c.instructions+=2;goto B76cc23;
case 0x76cc24:c.instructions+=1;goto B76cc24;
case 0x76cc29:goto L76cc29;
case 0x76cc2c:goto L76cc2c;
case 0x76cc31:c.instructions+=2;goto B76cc31;
case 0x76cc35:c.instructions+=1;goto B76cc35;
case 0x76cc3a:goto L76cc3a;
case 0x76cc3d:c.instructions+=3;goto B76cc3d;
case 0x76cc3e:c.instructions+=2;goto B76cc3e;
case 0x76cc3f:c.instructions+=1;goto B76cc3f;
case 0x76cc41:goto L76cc41;
case 0x76cc48:c.instructions+=1;goto B76cc48;
case 0x76cc4a:goto L76cc4a;
case 0x76cc4b:c.instructions+=1;goto B76cc4b;
case 0x76cc50:goto L76cc50;
case 0x76cc52:c.instructions+=2;goto B76cc52;
case 0x76cc53:c.instructions+=1;goto B76cc53;
case 0x76cc55:goto L76cc55;
case 0x76cc57:c.instructions+=1;goto B76cc57;
case 0x76cc5c:goto L76cc5c;
case 0x76cc5d:goto L76cc5d;
case 0x76cc64:c.instructions+=2;goto B76cc64;
case 0x76cc67:c.instructions+=1;goto B76cc67;
case 0x76cc6c:goto L76cc6c;
case 0x76cc6d:c.instructions+=5;goto B76cc6d;
case 0x76cc6e:c.instructions+=4;goto B76cc6e;
case 0x76cc6f:c.instructions+=3;goto B76cc6f;
case 0x76cc71:c.instructions+=2;goto B76cc71;
case 0x76cc72:c.instructions+=1;goto B76cc72;
case 0x76cc73:goto L76cc73;
case 0x76cc74:c.instructions+=8;goto B76cc74;
case 0x76cc75:c.instructions+=7;goto B76cc75;
case 0x76cc79:c.instructions+=6;goto B76cc79;
case 0x76cc7b:c.instructions+=5;goto B76cc7b;
case 0x76cc7f:c.instructions+=4;goto B76cc7f;
case 0x76cc83:c.instructions+=3;goto B76cc83;
case 0x76cc84:c.instructions+=2;goto B76cc84;
case 0x76cc85:c.instructions+=1;goto B76cc85;
case 0x76cc86:goto L76cc86;
case 0x76cc87:c.instructions+=22;goto B76cc87;
case 0x76cc89:c.instructions+=21;goto B76cc89;
case 0x76cc8c:c.instructions+=20;goto B76cc8c;
case 0x76cc91:c.instructions+=19;goto B76cc91;
case 0x76cc94:c.instructions+=18;goto B76cc94;
case 0x76cc95:c.instructions+=17;goto B76cc95;
case 0x76cc96:c.instructions+=16;goto B76cc96;
case 0x76cc99:c.instructions+=15;goto B76cc99;
case 0x76cc9b:c.instructions+=14;goto B76cc9b;
case 0x76cc9c:c.instructions+=13;goto B76cc9c;
case 0x76cc9f:c.instructions+=12;goto B76cc9f;
case 0x76cca2:c.instructions+=11;goto B76cca2;
case 0x76cca5:c.instructions+=10;goto B76cca5;
case 0x76cca8:c.instructions+=9;goto B76cca8;
case 0x76ccaf:c.instructions+=8;goto B76ccaf;
case 0x76ccb2:c.instructions+=7;goto B76ccb2;
case 0x76ccb5:c.instructions+=6;goto B76ccb5;
case 0x76ccb8:c.instructions+=5;goto B76ccb8;
case 0x76ccbb:c.instructions+=4;goto B76ccbb;
case 0x76ccbe:c.instructions+=3;goto B76ccbe;
case 0x76ccc1:c.instructions+=2;goto B76ccc1;
case 0x76ccc4:c.instructions+=1;goto B76ccc4;
case 0x76ccc7:goto L76ccc7;
case 0x76ccc9:c.instructions+=2;goto B76ccc9;
case 0x76cccc:c.instructions+=1;goto B76cccc;
case 0x76ccce:goto L76ccce;
case 0x76ccd1:c.instructions+=1;goto B76ccd1;
case 0x76ccd3:goto L76ccd3;
case 0x76ccd6:c.instructions+=1;goto B76ccd6;
case 0x76ccd8:goto L76ccd8;
case 0x76ccdb:c.instructions+=1;goto B76ccdb;
case 0x76ccdd:goto L76ccdd;
case 0x76ccde:c.instructions+=1;goto B76ccde;
case 0x76cce0:goto L76cce0;
case 0x76cce2:c.instructions+=3;goto B76cce2;
case 0x76cce3:c.instructions+=2;goto B76cce3;
case 0x76cce6:c.instructions+=1;goto B76cce6;
case 0x76ccec:goto L76ccec;
case 0x76ccf3:goto L76ccf3;
case 0x76ccf6:c.instructions+=1;goto B76ccf6;
case 0x76ccf8:goto L76ccf8;
case 0x76ccfb:c.instructions+=1;goto B76ccfb;
case 0x76ccfd:goto L76ccfd;
case 0x76ccff:c.instructions+=1;goto B76ccff;
case 0x76cd04:goto L76cd04;
case 0x76cd0a:c.instructions+=1;goto B76cd0a;
case 0x76cd0c:goto L76cd0c;
case 0x76cd0e:c.instructions+=1;goto B76cd0e;
case 0x76cd13:goto L76cd13;
case 0x76cd16:c.instructions+=2;goto B76cd16;
case 0x76cd19:c.instructions+=1;goto B76cd19;
case 0x76cd1b:goto L76cd1b;
case 0x76cd1c:c.instructions+=2;goto B76cd1c;
case 0x76cd1d:c.instructions+=1;goto B76cd1d;
case 0x76cd1f:goto L76cd1f;
case 0x76cd22:c.instructions+=1;goto B76cd22;
case 0x76cd28:goto L76cd28;
case 0x76cd2b:c.instructions+=2;goto B76cd2b;
case 0x76cd2c:c.instructions+=1;goto B76cd2c;
case 0x76cd31:goto L76cd31;
case 0x76cd33:c.instructions+=3;goto B76cd33;
case 0x76cd34:c.instructions+=2;goto B76cd34;
case 0x76cd3b:c.instructions+=1;goto B76cd3b;
case 0x76cd3d:goto L76cd3d;
case 0x76cd41:c.instructions+=3;goto B76cd41;
case 0x76cd43:c.instructions+=2;goto B76cd43;
case 0x76cd44:c.instructions+=1;goto B76cd44;
case 0x76cd46:goto L76cd46;
case 0x76cd48:c.instructions+=4;goto B76cd48;
case 0x76cd49:c.instructions+=3;goto B76cd49;
case 0x76cd4c:c.instructions+=2;goto B76cd4c;
case 0x76cd4f:c.instructions+=1;goto B76cd4f;
case 0x76cd51:goto L76cd51;
case 0x76cd54:c.instructions+=1;goto B76cd54;
case 0x76cd56:goto L76cd56;
case 0x76cd5c:c.instructions+=1;goto B76cd5c;
case 0x76cd5e:goto L76cd5e;
case 0x76cd60:c.instructions+=1;goto B76cd60;
case 0x76cd65:goto L76cd65;
case 0x76cd68:c.instructions+=1;goto B76cd68;
case 0x76cd6a:goto L76cd6a;
case 0x76cd6d:c.instructions+=1;goto B76cd6d;
case 0x76cd6f:goto L76cd6f;
case 0x76cd72:c.instructions+=1;goto B76cd72;
case 0x76cd78:goto L76cd78;
case 0x76cd7b:c.instructions+=1;goto B76cd7b;
case 0x76cd81:goto L76cd81;
case 0x76cd84:c.instructions+=1;goto B76cd84;
case 0x76cd86:goto L76cd86;
case 0x76cd89:c.instructions+=1;goto B76cd89;
case 0x76cd8f:goto L76cd8f;
case 0x76cd92:c.instructions+=1;goto B76cd92;
case 0x76cd98:goto L76cd98;
case 0x76cd9a:c.instructions+=1;goto B76cd9a;
case 0x76cd9f:goto L76cd9f;
case 0x76cda0:c.instructions+=2;goto B76cda0;
case 0x76cda2:c.instructions+=1;goto B76cda2;
case 0x76cda7:goto L76cda7;
case 0x76cdaa:c.instructions+=1;goto B76cdaa;
case 0x76cdac:goto L76cdac;
case 0x76cdaf:c.instructions+=1;goto B76cdaf;
case 0x76cdb5:goto L76cdb5;
case 0x76cdbb:c.instructions+=1;goto B76cdbb;
case 0x76cdc1:goto L76cdc1;
case 0x76cdc4:c.instructions+=1;goto B76cdc4;
case 0x76cdca:goto L76cdca;
case 0x76cdcc:c.instructions+=2;goto B76cdcc;
case 0x76cdcd:c.instructions+=1;goto B76cdcd;
case 0x76cdd2:goto L76cdd2;
case 0x76cdd9:c.instructions+=1;goto B76cdd9;
case 0x76cddb:goto L76cddb;
case 0x76cddf:c.instructions+=1;goto B76cddf;
case 0x76cde1:goto L76cde1;
case 0x76cde4:c.instructions+=4;goto B76cde4;
case 0x76cde7:c.instructions+=3;goto B76cde7;
case 0x76cde9:c.instructions+=2;goto B76cde9;
case 0x76cdea:c.instructions+=1;goto B76cdea;
case 0x76cdec:goto L76cdec;
case 0x76cdef:goto L76cdef;
case 0x76cdf1:c.instructions+=1;goto B76cdf1;
case 0x76cdf2:goto L76cdf2;
case 0x76cdf5:c.instructions+=2;goto B76cdf5;
case 0x76cdf6:c.instructions+=1;goto B76cdf6;
case 0x76cdfb:goto L76cdfb;
case 0x76cdfd:c.instructions+=2;goto B76cdfd;
case 0x76cdfe:c.instructions+=1;goto B76cdfe;
case 0x76ce00:goto L76ce00;
case 0x76ce06:c.instructions+=1;goto B76ce06;
case 0x76ce08:goto L76ce08;
case 0x76ce0d:goto L76ce0d;
case 0x76ce0f:c.instructions+=5;goto B76ce0f;
case 0x76ce10:c.instructions+=4;goto B76ce10;
case 0x76ce14:c.instructions+=3;goto B76ce14;
case 0x76ce17:c.instructions+=2;goto B76ce17;
case 0x76ce1a:c.instructions+=1;goto B76ce1a;
case 0x76ce1c:goto L76ce1c;
case 0x76ce1e:goto L76ce1e;
case 0x76ce21:c.instructions+=2;goto B76ce21;
case 0x76ce23:c.instructions+=1;goto B76ce23;
case 0x76ce24:goto L76ce24;
case 0x76ce27:c.instructions+=1;goto B76ce27;
case 0x76ce29:goto L76ce29;
case 0x76ce2b:goto L76ce2b;
case 0x76ce2f:c.instructions+=1;goto B76ce2f;
case 0x76ce31:goto L76ce31;
case 0x76ce34:c.instructions+=4;goto B76ce34;
case 0x76ce37:c.instructions+=3;goto B76ce37;
case 0x76ce39:c.instructions+=2;goto B76ce39;
case 0x76ce3a:c.instructions+=1;goto B76ce3a;
case 0x76ce3d:goto L76ce3d;
case 0x76ce3f:c.instructions+=1;goto B76ce3f;
case 0x76ce40:goto L76ce40;
case 0x76ce43:c.instructions+=2;goto B76ce43;
case 0x76ce44:c.instructions+=1;goto B76ce44;
case 0x76ce49:goto L76ce49;
case 0x76ce4b:c.instructions+=2;goto B76ce4b;
case 0x76ce4c:c.instructions+=1;goto B76ce4c;
case 0x76ce4e:goto L76ce4e;
case 0x76ce51:c.instructions+=1;goto B76ce51;
case 0x76ce57:goto L76ce57;
case 0x76ce5a:c.instructions+=1;goto B76ce5a;
case 0x76ce60:goto L76ce60;
case 0x76ce65:goto L76ce65;
case 0x76ce68:c.instructions+=3;goto B76ce68;
case 0x76ce69:c.instructions+=2;goto B76ce69;
case 0x76ce70:c.instructions+=1;goto B76ce70;
case 0x76ce75:goto L76ce75;
case 0x76ce77:c.instructions+=2;goto B76ce77;
case 0x76ce78:c.instructions+=1;goto B76ce78;
case 0x76ce7e:goto L76ce7e;
case 0x76ce80:c.instructions+=1;goto B76ce80;
case 0x76ce85:goto L76ce85;
case 0x76ce88:c.instructions+=3;goto B76ce88;
case 0x76ce8b:c.instructions+=2;goto B76ce8b;
case 0x76ce8e:c.instructions+=1;goto B76ce8e;
case 0x76ce90:goto L76ce90;
case 0x76ce93:c.instructions+=1;goto B76ce93;
case 0x76ce99:goto L76ce99;
case 0x76ce9c:c.instructions+=2;goto B76ce9c;
case 0x76ce9f:c.instructions+=1;goto B76ce9f;
case 0x76cea5:goto L76cea5;
case 0x76cea6:c.instructions+=2;goto B76cea6;
case 0x76cea7:c.instructions+=1;goto B76cea7;
case 0x76cead:goto L76cead;
case 0x76ceb0:c.instructions+=1;goto B76ceb0;
case 0x76ceb6:goto L76ceb6;
case 0x76ceb8:c.instructions+=1;goto B76ceb8;
case 0x76cebd:goto L76cebd;
case 0x76cec4:c.instructions+=1;goto B76cec4;
case 0x76cec6:goto L76cec6;
case 0x76cec8:c.instructions+=1;goto B76cec8;
case 0x76cec9:goto L76cec9;
case 0x76cecc:c.instructions+=1;goto B76cecc;
case 0x76cece:goto L76cece;
case 0x76ced1:c.instructions+=1;goto B76ced1;
case 0x76ced3:goto L76ced3;
case 0x76ced6:c.instructions+=1;goto B76ced6;
case 0x76ced8:goto L76ced8;
case 0x76ced9:goto L76ced9;
case 0x76cedc:goto L76cedc;
case 0x76cee0:c.instructions+=3;goto B76cee0;
case 0x76cee3:c.instructions+=2;goto B76cee3;
case 0x76cee5:c.instructions+=1;goto B76cee5;
case 0x76ceeb:goto L76ceeb;
case 0x76ceed:c.instructions+=3;goto B76ceed;
case 0x76ceee:c.instructions+=2;goto B76ceee;
case 0x76cef1:c.instructions+=1;goto B76cef1;
case 0x76cef3:goto L76cef3;
case 0x76cef7:c.instructions+=1;goto B76cef7;
case 0x76cef9:goto L76cef9;
case 0x76cefc:goto L76cefc;
case 0x76cefd:c.instructions+=2;goto B76cefd;
case 0x76cf00:c.instructions+=1;goto B76cf00;
case 0x76cf03:goto L76cf03;
case 0x76cf07:c.instructions+=1;goto B76cf07;
case 0x76cf0d:goto L76cf0d;
case 0x76cf12:goto L76cf12;
case 0x76cf15:c.instructions+=1;goto B76cf15;
case 0x76cf17:goto L76cf17;
case 0x76cf1a:c.instructions+=1;goto B76cf1a;
case 0x76cf1c:goto L76cf1c;
case 0x76cf1e:goto L76cf1e;
case 0x76cf1f:c.instructions+=2;goto B76cf1f;
case 0x76cf20:c.instructions+=1;goto B76cf20;
case 0x76cf25:goto L76cf25;
case 0x76cf28:c.instructions+=1;goto B76cf28;
case 0x76cf2a:goto L76cf2a;
case 0x76cf2d:c.instructions+=1;goto B76cf2d;
case 0x76cf2f:goto L76cf2f;
case 0x76cf33:c.instructions+=1;goto B76cf33;
case 0x76cf35:goto L76cf35;
case 0x76cf38:c.instructions+=4;goto B76cf38;
case 0x76cf3b:c.instructions+=3;goto B76cf3b;
case 0x76cf3e:c.instructions+=2;goto B76cf3e;
case 0x76cf41:c.instructions+=1;goto B76cf41;
case 0x76cf43:goto L76cf43;
case 0x76cf44:c.instructions+=2;goto B76cf44;
case 0x76cf45:c.instructions+=1;goto B76cf45;
case 0x76cf47:goto L76cf47;
case 0x76cf4b:c.instructions+=3;goto B76cf4b;
case 0x76cf4d:c.instructions+=2;goto B76cf4d;
case 0x76cf4e:c.instructions+=1;goto B76cf4e;
case 0x76cf53:goto L76cf53;
case 0x76cf55:goto L76cf55;
case 0x76cf56:c.instructions+=1;goto B76cf56;
case 0x76cf5b:goto L76cf5b;
case 0x76cf5d:c.instructions+=2;goto B76cf5d;
case 0x76cf5e:c.instructions+=1;goto B76cf5e;
case 0x76cf5f:goto L76cf5f;
case 0x76cf62:c.instructions+=1;goto B76cf62;
case 0x76cf68:goto L76cf68;
case 0x76cf6d:goto L76cf6d;
case 0x76cf70:c.instructions+=2;goto B76cf70;
case 0x76cf72:c.instructions+=1;goto B76cf72;
case 0x76cf77:goto L76cf77;
case 0x76cf7a:c.instructions+=3;goto B76cf7a;
case 0x76cf81:c.instructions+=2;goto B76cf81;
case 0x76cf83:c.instructions+=1;goto B76cf83;
case 0x76cf85:goto L76cf85;
case 0x76cf88:c.instructions+=4;goto B76cf88;
case 0x76cf8b:c.instructions+=3;goto B76cf8b;
case 0x76cf8f:c.instructions+=2;goto B76cf8f;
case 0x76cf95:c.instructions+=1;goto B76cf95;
case 0x76cf97:goto L76cf97;
case 0x76cf99:c.instructions+=1;goto B76cf99;
case 0x76cf9a:goto L76cf9a;
case 0x76cf9d:c.instructions+=2;goto B76cf9d;
case 0x76cf9e:c.instructions+=1;goto B76cf9e;
case 0x76cfa3:goto L76cfa3;
case 0x76cfa5:c.instructions+=2;goto B76cfa5;
case 0x76cfa6:c.instructions+=1;goto B76cfa6;
case 0x76cfa8:goto L76cfa8;
case 0x76cfaa:goto L76cfaa;
case 0x76cfaf:goto L76cfaf;
case 0x76cfb2:c.instructions+=2;goto B76cfb2;
case 0x76cfb5:c.instructions+=1;goto B76cfb5;
case 0x76cfb7:goto L76cfb7;
case 0x76cfb9:c.instructions+=2;goto B76cfb9;
case 0x76cfba:c.instructions+=1;goto B76cfba;
case 0x76cfbd:goto L76cfbd;
case 0x76cfbe:c.instructions+=1;goto B76cfbe;
case 0x76cfc3:goto L76cfc3;
case 0x76cfc5:c.instructions+=2;goto B76cfc5;
case 0x76cfc6:c.instructions+=1;goto B76cfc6;
case 0x76cfc8:goto L76cfc8;
case 0x76cfcb:c.instructions+=2;goto B76cfcb;
case 0x76cfcc:c.instructions+=1;goto B76cfcc;
case 0x76cfd1:goto L76cfd1;
case 0x76cfd4:c.instructions+=1;goto B76cfd4;
case 0x76cfd7:goto L76cfd7;
case 0x76cfd8:c.instructions+=2;goto B76cfd8;
case 0x76cfdb:c.instructions+=1;goto B76cfdb;
case 0x76cfdd:goto L76cfdd;
case 0x76cfe0:c.instructions+=5;goto B76cfe0;
case 0x76cfe1:c.instructions+=4;goto B76cfe1;
case 0x76cfe4:c.instructions+=3;goto B76cfe4;
case 0x76cfe7:c.instructions+=2;goto B76cfe7;
case 0x76cfe8:c.instructions+=1;goto B76cfe8;
case 0x76cfed:goto L76cfed;
case 0x76cff0:c.instructions+=4;goto B76cff0;
case 0x76cff2:c.instructions+=3;goto B76cff2;
case 0x76cff5:c.instructions+=2;goto B76cff5;
case 0x76cff8:c.instructions+=1;goto B76cff8;
case 0x76cffa:goto L76cffa;
case 0x76cffc:goto L76cffc;
case 0x76cfff:c.instructions+=1;goto B76cfff;
default:missing_instruction(c.pc);}
B76c000:L76c000:{c.instructions+=3;NFSU2_TR(0x76c000);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B76c002:{NFSU2_TR(0x76c002);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x480ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76c008:{NFSU2_TR(0x76c008);
{goto L76c020;}
}
B76c00a:L76c00a:{c.instructions+=7;NFSU2_TR(0x76c00a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76c00e:{NFSU2_TR(0x76c00e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+0)),r4(U+0));
}
B76c011:{NFSU2_TR(0x76c011);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76c015:{NFSU2_TR(0x76c015);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B76c019:{NFSU2_TR(0x76c019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B76c01b:{NFSU2_TR(0x76c01b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B76c01e:{NFSU2_TR(0x76c01e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B76c020:L76c020:{c.instructions+=2;NFSU2_TR(0x76c020);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B76c022:{NFSU2_TR(0x76c022);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c00au);}goto L76c00a;}}
}
B76c024:L76c024:{c.instructions+=4;NFSU2_TR(0x76c024);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B76c027:{NFSU2_TR(0x76c027);
__builtin_memmove((R+20),(R+12),4);
}
B76c029:{NFSU2_TR(0x76c029);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c02a:{NFSU2_TR(0x76c02a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c02full));
TAIL_STATIC(0x76be66u,76b);
}
B76c02f:L76c02f:{c.instructions+=3;NFSU2_TR(0x76c02f);
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
B76c031:{NFSU2_TR(0x76c031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c032:{NFSU2_TR(0x76c032);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c037;}}
}
B76c034:L76c034:{c.instructions+=1;NFSU2_TR(0x76c034);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76c037:L76c037:{c.instructions+=2;NFSU2_TR(0x76c037);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c039:{NFSU2_TR(0x76c039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c03eull));
TAIL_STATIC(0x76315du,763);
}
B76c03e:L76c03e:{c.instructions+=9;NFSU2_TR(0x76c03e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c03f:{NFSU2_TR(0x76c03f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c040:{NFSU2_TR(0x76c040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c041:{NFSU2_TR(0x76c041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76c042:{NFSU2_TR(0x76c042);
__builtin_memmove((R+0),(R+20),4);
}
B76c044:{NFSU2_TR(0x76c044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76c045:{NFSU2_TR(0x76c045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c046:{NFSU2_TR(0x76c046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c047:{NFSU2_TR(0x76c047);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c048:L76c048:{c.instructions+=13;NFSU2_TR(0x76c048);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c049:{NFSU2_TR(0x76c049);
__builtin_memmove((R+20),(R+16),4);
}
B76c04b:{NFSU2_TR(0x76c04b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c04c:{NFSU2_TR(0x76c04c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c04d:{NFSU2_TR(0x76c04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c050:{NFSU2_TR(0x76c050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c051:{NFSU2_TR(0x76c051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76c054:{NFSU2_TR(0x76c054);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c057:{NFSU2_TR(0x76c057);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c05a:{NFSU2_TR(0x76c05a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c05b:{NFSU2_TR(0x76c05b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c05c:{NFSU2_TR(0x76c05c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c05f:{NFSU2_TR(0x76c05f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c064ull));
TAIL_STATIC(0x76be25u,76b);
}
B76c064:L76c064:{c.instructions+=4;NFSU2_TR(0x76c064);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B76c067:{NFSU2_TR(0x76c067);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B76c069:{NFSU2_TR(0x76c069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c06a:{NFSU2_TR(0x76c06a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c079;}}
}
B76c06c:L76c06c:{c.instructions+=1;NFSU2_TR(0x76c06c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c071ull));
TAIL_STATIC(0x7661bau,766);
}
B76c071:L76c071:{c.instructions+=2;NFSU2_TR(0x76c071);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B76c077:{NFSU2_TR(0x76c077);
{goto L76c0a2;}
}
B76c079:L76c079:{c.instructions+=6;NFSU2_TR(0x76c079);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c07c:{NFSU2_TR(0x76c07c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c07f:{NFSU2_TR(0x76c07f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c080:{NFSU2_TR(0x76c080);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c083:{NFSU2_TR(0x76c083);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c084:{NFSU2_TR(0x76c084);
u8 U[4];
__builtin_memmove((U+0),gp(0x783228),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c08aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c08a:L76c08a:{c.instructions+=3;NFSU2_TR(0x76c08a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B76c08c:{NFSU2_TR(0x76c08c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c08f:{NFSU2_TR(0x76c08f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c0a8;}}
}
B76c091:L76c091:{c.instructions+=1;NFSU2_TR(0x76c091);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c097ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c097:L76c097:{c.instructions+=2;NFSU2_TR(0x76c097);
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
B76c099:{NFSU2_TR(0x76c099);
if(r1(R+518)){{goto L76c0a8;}}
}
B76c09b:L76c09b:{c.instructions+=2;NFSU2_TR(0x76c09b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c09c:{NFSU2_TR(0x76c09c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c0a1ull));
TAIL_STATIC(0x7661ccu,766);
}
B76c0a1:L76c0a1:{c.instructions+=1;NFSU2_TR(0x76c0a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c0a2:L76c0a2:{c.instructions+=3;NFSU2_TR(0x76c0a2);
__builtin_memmove((R+0),(R+28),4);
}
B76c0a4:{NFSU2_TR(0x76c0a4);
__builtin_memmove((R+8),(R+28),4);
}
B76c0a6:{NFSU2_TR(0x76c0a6);
{goto L76c0c7;}
}
B76c0a8:L76c0a8:{c.instructions+=9;NFSU2_TR(0x76c0a8);
__builtin_memmove((R+0),(R+24),4);
}
B76c0aa:{NFSU2_TR(0x76c0aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B76c0ad:{NFSU2_TR(0x76c0ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B76c0b4:{NFSU2_TR(0x76c0b4);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1full))));
}
B76c0b7:{NFSU2_TR(0x76c0b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B76c0ba:{NFSU2_TR(0x76c0ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76c0be:{NFSU2_TR(0x76c0be);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0xfdull))));
s1(u32(r4(R+0)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B76c0c1:{NFSU2_TR(0x76c0c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c0c4:{NFSU2_TR(0x76c0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76c0c7:L76c0c7:{c.instructions+=4;NFSU2_TR(0x76c0c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c0c8:{NFSU2_TR(0x76c0c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c0c9:{NFSU2_TR(0x76c0c9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76c0ca:{NFSU2_TR(0x76c0ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c0cb:L76c0cb:{c.instructions+=4;NFSU2_TR(0x76c0cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c0cc:{NFSU2_TR(0x76c0cc);
__builtin_memmove((R+20),(R+16),4);
}
B76c0ce:{NFSU2_TR(0x76c0ce);
w4(R+0,u32(0x100cull));
}
B76c0d3:{NFSU2_TR(0x76c0d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c0d8ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B76c0d8:L76c0d8:{c.instructions+=10;NFSU2_TR(0x76c0d8);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76c0dd:{NFSU2_TR(0x76c0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76c0e0:{NFSU2_TR(0x76c0e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c0e1:{NFSU2_TR(0x76c0e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c0e2:{NFSU2_TR(0x76c0e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c0e4:{NFSU2_TR(0x76c0e4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76c0e6:{NFSU2_TR(0x76c0e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c0e7:{NFSU2_TR(0x76c0e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c0ea:{NFSU2_TR(0x76c0ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c0ed:{NFSU2_TR(0x76c0ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c0f2ull));
TAIL_STATIC(0x760673u,760);
}
B76c0f2:L76c0f2:{c.instructions+=5;NFSU2_TR(0x76c0f2);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B76c0f5:{NFSU2_TR(0x76c0f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76c0f8:{NFSU2_TR(0x76c0f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76c0fa:{NFSU2_TR(0x76c0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c0fd:{NFSU2_TR(0x76c0fd);
if(r1(R+518)){{goto L76c1f5;}}
}
B76c103:L76c103:{c.instructions+=4;NFSU2_TR(0x76c103);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c105:{NFSU2_TR(0x76c105);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c106:{NFSU2_TR(0x76c106);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c109:{NFSU2_TR(0x76c109);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c10eull));
TAIL_STATIC(0x760673u,760);
}
B76c10e:L76c10e:{c.instructions+=3;NFSU2_TR(0x76c10e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76c111:{NFSU2_TR(0x76c111);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76c113:{NFSU2_TR(0x76c113);
if(r1(R+518)){{goto L76c1f5;}}
}
B76c119:L76c119:{c.instructions+=5;NFSU2_TR(0x76c119);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c11a:{NFSU2_TR(0x76c11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76c11d:{NFSU2_TR(0x76c11d);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B76c11f:{NFSU2_TR(0x76c11f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c121:{NFSU2_TR(0x76c121);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76c198;}}
}
B76c123:L76c123:{c.instructions+=6;NFSU2_TR(0x76c123);
w4(R+12,u32(0x1000ull));
}
B76c128:{NFSU2_TR(0x76c128);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c129:{NFSU2_TR(0x76c129);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffeff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c12f:{NFSU2_TR(0x76c12f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c130:{NFSU2_TR(0x76c130);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c131:{NFSU2_TR(0x76c131);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c136ull));
TAIL_STATIC(0x768890u,768);
}
B76c136:L76c136:{c.instructions+=3;NFSU2_TR(0x76c136);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c13b:{NFSU2_TR(0x76c13b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c13e:{NFSU2_TR(0x76c13e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c143ull));
TAIL_STATIC(0x76dd29u,76d);
}
B76c143:L76c143:{c.instructions+=2;NFSU2_TR(0x76c143);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B76c146:{NFSU2_TR(0x76c146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c149:L76c149:{c.instructions+=3;NFSU2_TR(0x76c149);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76c14b:{NFSU2_TR(0x76c14b);
__builtin_memmove((R+0),(R+12),4);
}
B76c14d:{NFSU2_TR(0x76c14d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76c151;}}
}
B76c14f:L76c14f:{c.instructions+=1;NFSU2_TR(0x76c14f);
__builtin_memmove((R+0),(R+28),4);
}
B76c151:L76c151:{c.instructions+=5;NFSU2_TR(0x76c151);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c152:{NFSU2_TR(0x76c152);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffeff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c158:{NFSU2_TR(0x76c158);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c159:{NFSU2_TR(0x76c159);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c15c:{NFSU2_TR(0x76c15c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c161ull));
TAIL_STATIC(0x760092u,760);
}
B76c161:L76c161:{c.instructions+=3;NFSU2_TR(0x76c161);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76c164:{NFSU2_TR(0x76c164);
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
B76c167:{NFSU2_TR(0x76c167);
if(r1(R+518)){{goto L76c171;}}
}
B76c169:L76c169:{c.instructions+=3;NFSU2_TR(0x76c169);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B76c16b:{NFSU2_TR(0x76c16b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c16d:{NFSU2_TR(0x76c16d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c149u);}goto L76c149;}}
}
B76c16f:L76c16f:{c.instructions+=1;NFSU2_TR(0x76c16f);
{goto L76c189;}
}
B76c171:L76c171:{c.instructions+=1;NFSU2_TR(0x76c171);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c176ull));
TAIL_STATIC(0x7661c3u,766);
}
B76c176:L76c176:{c.instructions+=2;NFSU2_TR(0x76c176);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x5ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B76c179:{NFSU2_TR(0x76c179);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c186;}}
}
B76c17b:L76c17b:{c.instructions+=1;NFSU2_TR(0x76c17b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c180ull));
TAIL_STATIC(0x7661bau,766);
}
B76c180:L76c180:{c.instructions+=1;NFSU2_TR(0x76c180);
u8 U[4];
w4(U+0,u32(0xdull));
s4(u32(r4(R+0)),r4(U+0));
}
B76c186:L76c186:{c.instructions+=1;NFSU2_TR(0x76c186);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B76c189:L76c189:{c.instructions+=3;NFSU2_TR(0x76c189);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c18c:{NFSU2_TR(0x76c18c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c18f:{NFSU2_TR(0x76c18f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c194ull));
TAIL_STATIC(0x76dd29u,76d);
}
B76c194:L76c194:{c.instructions+=3;NFSU2_TR(0x76c194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c195:{NFSU2_TR(0x76c195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c196:{NFSU2_TR(0x76c196);
{goto L76c1e0;}
}
B76c198:L76c198:{c.instructions+=1;NFSU2_TR(0x76c198);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76c1e0;}}
}
B76c19a:L76c19a:{c.instructions+=4;NFSU2_TR(0x76c19a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c19c:{NFSU2_TR(0x76c19c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c19f:{NFSU2_TR(0x76c19f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c1a2:{NFSU2_TR(0x76c1a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c1a7ull));
TAIL_STATIC(0x760673u,760);
}
B76c1a7:L76c1a7:{c.instructions+=2;NFSU2_TR(0x76c1a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c1aa:{NFSU2_TR(0x76c1aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c1afull));
TAIL_STATIC(0x76be25u,76b);
}
B76c1af:L76c1af:{c.instructions+=3;NFSU2_TR(0x76c1af);
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
B76c1b2:{NFSU2_TR(0x76c1b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c1b3:{NFSU2_TR(0x76c1b3);
u8 U[4];
__builtin_memmove((U+0),gp(0x783074),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c1b9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c1b9:L76c1b9:{c.instructions+=7;NFSU2_TR(0x76c1b9);
__builtin_memmove((R+24),(R+0),4);
}
B76c1bb:{NFSU2_TR(0x76c1bb);
w1(R+512,u8((r4(R+24))!=(u32(0x0ull))));
w4(R+24,u32(0-u32(r4(R+24))));
}
B76c1bd:{NFSU2_TR(0x76c1bd);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B76c1bf:{NFSU2_TR(0x76c1bf);
w4(R+24,u32(0-u32(r4(R+24))));
}
B76c1c1:{NFSU2_TR(0x76c1c1);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B76c1c2:{NFSU2_TR(0x76c1c2);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B76c1c4:{NFSU2_TR(0x76c1c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c1e0;}}
}
B76c1c6:L76c1c6:{c.instructions+=1;NFSU2_TR(0x76c1c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c1cbull));
TAIL_STATIC(0x7661bau,766);
}
B76c1cb:L76c1cb:{c.instructions+=2;NFSU2_TR(0x76c1cb);
u8 U[4];
w4(U+0,u32(0xdull));
s4(u32(r4(R+0)),r4(U+0));
}
B76c1d1:{NFSU2_TR(0x76c1d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c1d6ull));
TAIL_STATIC(0x7661c3u,766);
}
B76c1d6:L76c1d6:{c.instructions+=2;NFSU2_TR(0x76c1d6);
__builtin_memmove((R+28),(R+0),4);
}
B76c1d8:{NFSU2_TR(0x76c1d8);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c1deull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c1de:L76c1de:{c.instructions+=1;NFSU2_TR(0x76c1de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B76c1e0:L76c1e0:{c.instructions+=4;NFSU2_TR(0x76c1e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c1e2:{NFSU2_TR(0x76c1e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c1e5:{NFSU2_TR(0x76c1e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c1e8:{NFSU2_TR(0x76c1e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c1edull));
TAIL_STATIC(0x760673u,760);
}
B76c1ed:L76c1ed:{c.instructions+=4;NFSU2_TR(0x76c1ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76c1f0:{NFSU2_TR(0x76c1f0);
__builtin_memmove((R+0),(R+24),4);
}
B76c1f2:{NFSU2_TR(0x76c1f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c1f3:{NFSU2_TR(0x76c1f3);
{goto L76c1f7;}
}
B76c1f5:L76c1f5:{c.instructions+=1;NFSU2_TR(0x76c1f5);
__builtin_memmove((R+0),(R+12),4);
}
B76c1f7:L76c1f7:{c.instructions+=5;NFSU2_TR(0x76c1f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c1fa:{NFSU2_TR(0x76c1fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76c1fd:{NFSU2_TR(0x76c1fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c1fe:{NFSU2_TR(0x76c1fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76c1ff:{NFSU2_TR(0x76c1ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c204ull));
TAIL_STATIC(0x76115eu,761);
}
B76c204:L76c204:{c.instructions+=2;NFSU2_TR(0x76c204);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76c205:{NFSU2_TR(0x76c205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c206:L76c206:{c.instructions+=7;NFSU2_TR(0x76c206);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c207:{NFSU2_TR(0x76c207);
__builtin_memmove((R+20),(R+16),4);
}
B76c209:{NFSU2_TR(0x76c209);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76c20c:{NFSU2_TR(0x76c20c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c20d:{NFSU2_TR(0x76c20d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c210:{NFSU2_TR(0x76c210);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c211:{NFSU2_TR(0x76c211);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832a0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c217ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c217:L76c217:{c.instructions+=3;NFSU2_TR(0x76c217);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76c21a:{NFSU2_TR(0x76c21a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76c21d:{NFSU2_TR(0x76c21d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783070),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c223ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c223:L76c223:{c.instructions+=2;NFSU2_TR(0x76c223);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76c225:{NFSU2_TR(0x76c225);
u8 U[4];
__builtin_memmove((U+0),gp(0x783200),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c22bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c22b:L76c22b:{c.instructions+=2;NFSU2_TR(0x76c22b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76c22d:{NFSU2_TR(0x76c22d);
u8 U[4];
__builtin_memmove((U+0),gp(0x78320c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c233ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c233:L76c233:{c.instructions+=4;NFSU2_TR(0x76c233);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76c235:{NFSU2_TR(0x76c235);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c238:{NFSU2_TR(0x76c238);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c239:{NFSU2_TR(0x76c239);
u8 U[4];
__builtin_memmove((U+0),gp(0x78311c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c23full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c23f:L76c23f:{c.instructions+=5;NFSU2_TR(0x76c23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c242:{NFSU2_TR(0x76c242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76c245:{NFSU2_TR(0x76c245);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76c247:{NFSU2_TR(0x76c247);
__builtin_memmove(gp(0x81a1d0),(R+24),4);
}
B76c24d:{NFSU2_TR(0x76c24d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c259;}}
}
B76c24f:L76c24f:{c.instructions+=1;NFSU2_TR(0x76c24f);
s4(0x81a1d0,u32(0xbb40e64eull));
}
B76c259:L76c259:{c.instructions+=3;NFSU2_TR(0x76c259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c25a:{NFSU2_TR(0x76c25a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76c25b:{NFSU2_TR(0x76c25b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c25c:L76c25c:{c.instructions+=3;NFSU2_TR(0x76c25c);
u8 U[4];
w4(U+0,u32(0x118ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c261:{NFSU2_TR(0x76c261);
u8 U[4];
w4(U+0,u32(0x7d9848ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c266:{NFSU2_TR(0x76c266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c26bull));
TAIL_STATIC(0x760da0u,760);
}
B76c26b:L76c26b:{c.instructions+=7;NFSU2_TR(0x76c26b);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76c270:{NFSU2_TR(0x76c270);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76c273:{NFSU2_TR(0x76c273);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c276:{NFSU2_TR(0x76c276);
__builtin_memmove((R+0),gp(0x8b888c),4);
}
B76c27b:{NFSU2_TR(0x76c27b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76c27d:{NFSU2_TR(0x76c27d);
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
B76c27f:{NFSU2_TR(0x76c27f);
if(r1(R+518)){{goto L76c2a0;}}
}
B76c281:L76c281:{c.instructions+=4;NFSU2_TR(0x76c281);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c284:{NFSU2_TR(0x76c284);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c287:{NFSU2_TR(0x76c287);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c28a:{NFSU2_TR(0x76c28a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c28cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c28c:L76c28c:{c.instructions+=2;NFSU2_TR(0x76c28c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c28d:{NFSU2_TR(0x76c28d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c28e:L76c28e:{c.instructions+=2;NFSU2_TR(0x76c28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76c292:{NFSU2_TR(0x76c292);
{goto L76c39e;}
}
B76c297:L76c297:{c.instructions+=3;NFSU2_TR(0x76c297);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c299:{NFSU2_TR(0x76c299);
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
B76c29a:{NFSU2_TR(0x76c29a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c29b:L76c29b:{c.instructions+=2;NFSU2_TR(0x76c29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B76c29e:{NFSU2_TR(0x76c29e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c28eu);}goto L76c28e;}
}
B76c2a0:L76c2a0:{c.instructions+=3;NFSU2_TR(0x76c2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c2a3:{NFSU2_TR(0x76c2a3);
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
B76c2a4:{NFSU2_TR(0x76c2a4);
if(r1(R+518)){{goto L76c2b9;}}
}
B76c2a6:L76c2a6:{c.instructions+=4;NFSU2_TR(0x76c2a6);
w4(R+28,u32(0x7d9824ull));
}
B76c2ab:{NFSU2_TR(0x76c2ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7d9770ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76c2b2:{NFSU2_TR(0x76c2b2);
w4(R+24,u32(0xd4ull));
}
B76c2b7:{NFSU2_TR(0x76c2b7);
{goto L76c2ca;}
}
B76c2b9:L76c2b9:{c.instructions+=3;NFSU2_TR(0x76c2b9);
w4(R+28,u32(0x7d9750ull));
}
B76c2be:{NFSU2_TR(0x76c2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7d96b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76c2c5:{NFSU2_TR(0x76c2c5);
w4(R+24,u32(0xb9ull));
}
B76c2ca:L76c2ca:{c.instructions+=6;NFSU2_TR(0x76c2ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76c2cd:{NFSU2_TR(0x76c2cd);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c2d2:{NFSU2_TR(0x76c2d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c2d8:{NFSU2_TR(0x76c2d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c2d9:{NFSU2_TR(0x76c2d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c2da:{NFSU2_TR(0x76c2da);
u8 U[4];
__builtin_memmove((U+0),gp(0x783134),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c2e0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c2e0:L76c2e0:{c.instructions+=2;NFSU2_TR(0x76c2e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c2e2:{NFSU2_TR(0x76c2e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c2f7;}}
}
B76c2e4:L76c2e4:{c.instructions+=4;NFSU2_TR(0x76c2e4);
u8 U[4];
w4(U+0,u32(0x7d3d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c2e9:{NFSU2_TR(0x76c2e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c2ef:{NFSU2_TR(0x76c2ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c2f0:{NFSU2_TR(0x76c2f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c2f5ull));
TAIL_STATIC(0x766ac0u,766);
}
B76c2f5:L76c2f5:{c.instructions+=2;NFSU2_TR(0x76c2f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c2f6:{NFSU2_TR(0x76c2f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c2f7:L76c2f7:{c.instructions+=4;NFSU2_TR(0x76c2f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76c2fd:{NFSU2_TR(0x76c2fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c303:{NFSU2_TR(0x76c303);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c304:{NFSU2_TR(0x76c304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c309ull));
TAIL_STATIC(0x766bc0u,766);
}
B76c309:L76c309:{c.instructions+=4;NFSU2_TR(0x76c309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c30a:{NFSU2_TR(0x76c30a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
}
B76c30d:{NFSU2_TR(0x76c30d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3cull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76c310:{NFSU2_TR(0x76c310);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76c33b;}}
}
B76c312:L76c312:{c.instructions+=3;NFSU2_TR(0x76c312);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c318:{NFSU2_TR(0x76c318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c319:{NFSU2_TR(0x76c319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c31eull));
TAIL_STATIC(0x766bc0u,766);
}
B76c31e:L76c31e:{c.instructions+=8;NFSU2_TR(0x76c31e);
__builtin_memmove((R+12),(R+0),4);
}
B76c320:{NFSU2_TR(0x76c320);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c326:{NFSU2_TR(0x76c326);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x31ull))));
}
B76c329:{NFSU2_TR(0x76c329);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B76c32b:{NFSU2_TR(0x76c32b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c32d:{NFSU2_TR(0x76c32d);
u8 U[4];
w4(U+0,u32(0x7d3d38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c332:{NFSU2_TR(0x76c332);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c333:{NFSU2_TR(0x76c333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c338ull));
TAIL_STATIC(0x75c840u,75c);
}
B76c338:L76c338:{c.instructions+=1;NFSU2_TR(0x76c338);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B76c33b:L76c33b:{c.instructions+=2;NFSU2_TR(0x76c33b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c33c:{NFSU2_TR(0x76c33c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c341ull));
TAIL_STATIC(0x766bc0u,766);
}
B76c341:L76c341:{c.instructions+=5;NFSU2_TR(0x76c341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c342:{NFSU2_TR(0x76c342);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76c346:{NFSU2_TR(0x76c346);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B76c349:{NFSU2_TR(0x76c349);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B76c34c:{NFSU2_TR(0x76c34c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c351ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B76c351:L76c351:{c.instructions+=5;NFSU2_TR(0x76c351);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c354:{NFSU2_TR(0x76c354);
__builtin_memmove((R+24),(R+16),4);
}
B76c356:{NFSU2_TR(0x76c356);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c357:{NFSU2_TR(0x76c357);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c358:{NFSU2_TR(0x76c358);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c35dull));
TAIL_STATIC(0x766ac0u,766);
}
B76c35d:L76c35d:{c.instructions+=4;NFSU2_TR(0x76c35d);
w4(R+28,u32(0x7d3d34ull));
}
B76c362:{NFSU2_TR(0x76c362);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c363:{NFSU2_TR(0x76c363);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c364:{NFSU2_TR(0x76c364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c369ull));
TAIL_STATIC(0x766ad0u,766);
}
B76c369:L76c369:{c.instructions+=3;NFSU2_TR(0x76c369);
u8 U[4];
w4(U+0,u32(0x7d3d7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c36e:{NFSU2_TR(0x76c36e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c36f:{NFSU2_TR(0x76c36f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c374ull));
TAIL_STATIC(0x766ad0u,766);
}
B76c374:L76c374:{c.instructions+=3;NFSU2_TR(0x76c374);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c375:{NFSU2_TR(0x76c375);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c376:{NFSU2_TR(0x76c376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c37bull));
TAIL_STATIC(0x766ad0u,766);
}
B76c37b:L76c37b:{c.instructions+=3;NFSU2_TR(0x76c37b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c37c:{NFSU2_TR(0x76c37c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c37d:{NFSU2_TR(0x76c37d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c382ull));
TAIL_STATIC(0x766ad0u,766);
}
B76c382:L76c382:{c.instructions+=3;NFSU2_TR(0x76c382);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c385:{NFSU2_TR(0x76c385);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c386:{NFSU2_TR(0x76c386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c38bull));
TAIL_STATIC(0x766ad0u,766);
}
B76c38b:L76c38b:{c.instructions+=4;NFSU2_TR(0x76c38b);
u8 U[4];
w4(U+0,u32(0x12010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c390:{NFSU2_TR(0x76c390);
u8 U[4];
w4(U+0,u32(0x7d3d3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c395:{NFSU2_TR(0x76c395);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c396:{NFSU2_TR(0x76c396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c39bull));
TAIL_STATIC(0x76ae4eu,76a);
}
B76c39b:L76c39b:{c.instructions+=1;NFSU2_TR(0x76c39b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B76c39e:L76c39e:{c.instructions+=2;NFSU2_TR(0x76c39e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c3a0:{NFSU2_TR(0x76c3a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c3a5ull));
TAIL_STATIC(0x75d5a4u,75d);
}
B76c3a6:L76c3a6:{c.instructions+=2;NFSU2_TR(0x76c3a6);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c3aa:{NFSU2_TR(0x76c3aa);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c3b0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c3b0:L76c3b0:{c.instructions+=3;NFSU2_TR(0x76c3b0);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c3b2:{NFSU2_TR(0x76c3b2);
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
B76c3b3:{NFSU2_TR(0x76c3b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c3b6:L76c3b6:{c.instructions+=3;NFSU2_TR(0x76c3b6);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c3b8:{NFSU2_TR(0x76c3b8);
u8 U[4];
w4(U+0,u32(0x7d9890ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c3bd:{NFSU2_TR(0x76c3bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c3c2ull));
TAIL_STATIC(0x760da0u,760);
}
B76c3c2:L76c3c2:{c.instructions+=3;NFSU2_TR(0x76c3c2);
__builtin_memmove((R+0),gp(0x8b8890),4);
}
B76c3c7:{NFSU2_TR(0x76c3c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c3c9:{NFSU2_TR(0x76c3c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c402;}}
}
B76c3cb:L76c3cb:{c.instructions+=2;NFSU2_TR(0x76c3cb);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b8430),4);
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
B76c3d2:{NFSU2_TR(0x76c3d2);
if(r1(R+518)){{goto L76c3f8;}}
}
B76c3d4:L76c3d4:{c.instructions+=2;NFSU2_TR(0x76c3d4);
u8 U[4];
w4(U+0,u32(0x7d987cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c3d9:{NFSU2_TR(0x76c3d9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c3dfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c3df:L76c3df:{c.instructions+=2;NFSU2_TR(0x76c3df);
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
B76c3e1:{NFSU2_TR(0x76c3e1);
if(r1(R+518)){{goto L76c3f8;}}
}
B76c3e3:L76c3e3:{c.instructions+=3;NFSU2_TR(0x76c3e3);
u8 U[4];
w4(U+0,u32(0x7d9854ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c3e8:{NFSU2_TR(0x76c3e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c3e9:{NFSU2_TR(0x76c3e9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783194),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c3efull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c3ef:L76c3ef:{c.instructions+=3;NFSU2_TR(0x76c3ef);
__builtin_memmove(gp(0x8b8890),(R+0),4);
}
B76c3f4:{NFSU2_TR(0x76c3f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c3f6:{NFSU2_TR(0x76c3f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c402;}}
}
B76c3f8:L76c3f8:{c.instructions+=2;NFSU2_TR(0x76c3f8);
w4(R+0,u32(0x76c3a6ull));
}
B76c3fd:{NFSU2_TR(0x76c3fd);
__builtin_memmove(gp(0x8b8890),(R+0),4);
}
B76c402:L76c402:{c.instructions+=4;NFSU2_TR(0x76c402);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B76c406:{NFSU2_TR(0x76c406);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c409:{NFSU2_TR(0x76c409);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c40c:{NFSU2_TR(0x76c40c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c40eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c40e:L76c40e:{c.instructions+=2;NFSU2_TR(0x76c40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c411:{NFSU2_TR(0x76c411);
{goto L76c437;}
}
B76c413:L76c413:{c.instructions+=7;NFSU2_TR(0x76c413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c416:{NFSU2_TR(0x76c416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76c418:{NFSU2_TR(0x76c418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76c41a:{NFSU2_TR(0x76c41a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c41d:{NFSU2_TR(0x76c41d);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c41f:{NFSU2_TR(0x76c41f);
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
B76c420:{NFSU2_TR(0x76c420);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c421:L76c421:{c.instructions+=3;NFSU2_TR(0x76c421);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B76c424:{NFSU2_TR(0x76c424);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc0000017ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc0000017ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc0000017ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76c42b:{NFSU2_TR(0x76c42b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c435;}}
}
B76c42d:L76c42d:{c.instructions+=2;NFSU2_TR(0x76c42d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c42f:{NFSU2_TR(0x76c42f);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830e4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c435ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c435:L76c435:{c.instructions+=1;NFSU2_TR(0x76c435);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c437:L76c437:{c.instructions+=2;NFSU2_TR(0x76c437);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B76c43b:{NFSU2_TR(0x76c43b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c440ull));
TAIL_STATIC(0x760ddbu,760);
}
B76c440:L76c440:{c.instructions+=1;NFSU2_TR(0x76c440);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c441:L76c441:{c.instructions+=14;NFSU2_TR(0x76c441);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c445:{NFSU2_TR(0x76c445);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c447:{NFSU2_TR(0x76c447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c448:{NFSU2_TR(0x76c448);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76c449:{NFSU2_TR(0x76c449);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76c449);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76c449);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76c44b:{NFSU2_TR(0x76c44b);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c44d:{NFSU2_TR(0x76c44d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c44e:{NFSU2_TR(0x76c44e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B76c450:{NFSU2_TR(0x76c450);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B76c453:{NFSU2_TR(0x76c453);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B76c455:{NFSU2_TR(0x76c455);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c459:{NFSU2_TR(0x76c459);
w4(R+8,u32(~u32(r4(R+8))));
}
B76c45b:{NFSU2_TR(0x76c45b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76c45e:{NFSU2_TR(0x76c45e);
if(r1(R+518)){{goto L76c469;}}
}
B76c460:L76c460:{c.instructions+=2;NFSU2_TR(0x76c460);
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
B76c462:{NFSU2_TR(0x76c462);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c463:L76c463:{c.instructions+=2;NFSU2_TR(0x76c463);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B76c467:{NFSU2_TR(0x76c467);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c460u);}goto L76c460;}}
}
B76c469:L76c469:{c.instructions+=3;NFSU2_TR(0x76c469);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76c46a:{NFSU2_TR(0x76c46a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76c46d:{NFSU2_TR(0x76c46d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c463u);}goto L76c463;}}
}
B76c46f:L76c46f:{c.instructions+=3;NFSU2_TR(0x76c46f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c471:{NFSU2_TR(0x76c471);
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
B76c472:{NFSU2_TR(0x76c472);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c473:L76c473:{c.instructions+=20;NFSU2_TR(0x76c473);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c477:{NFSU2_TR(0x76c477);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c478:{NFSU2_TR(0x76c478);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c479:{NFSU2_TR(0x76c479);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c47b:{NFSU2_TR(0x76c47b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c47c:{NFSU2_TR(0x76c47c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76c47d:{NFSU2_TR(0x76c47d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76c47d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76c47d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76c47f:{NFSU2_TR(0x76c47f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76c483:{NFSU2_TR(0x76c483);
__builtin_memmove((R+24),(R+0),4);
}
B76c485:{NFSU2_TR(0x76c485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76c488:{NFSU2_TR(0x76c488);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c489:{NFSU2_TR(0x76c489);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c48b:{NFSU2_TR(0x76c48b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c48c:{NFSU2_TR(0x76c48c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B76c48e:{NFSU2_TR(0x76c48e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76c490:{NFSU2_TR(0x76c490);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76c491:{NFSU2_TR(0x76c491);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B76c493:{NFSU2_TR(0x76c493);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c494:{NFSU2_TR(0x76c494);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76c496:{NFSU2_TR(0x76c496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c49bull));
TAIL_STATIC(0x76dd8bu,76d);
}
B76c49b:L76c49b:{c.instructions+=3;NFSU2_TR(0x76c49b);
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76c49e:{NFSU2_TR(0x76c49e);
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
B76c49f:{NFSU2_TR(0x76c49f);
if(r1(R+519)){{goto L76c4bd;}}
}
B76c4a1:L76c4a1:{c.instructions+=1;NFSU2_TR(0x76c4a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B76c4a4:L76c4a4:{c.instructions+=2;NFSU2_TR(0x76c4a4);
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
B76c4a6:{NFSU2_TR(0x76c4a6);
if(r1(R+518)){{goto L76c4bd;}}
}
B76c4a8:L76c4a8:{c.instructions+=4;NFSU2_TR(0x76c4a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c4a9:{NFSU2_TR(0x76c4a9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c4ab:{NFSU2_TR(0x76c4ab);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76c4ad:{NFSU2_TR(0x76c4ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c4b2ull));
TAIL_STATIC(0x76dd8bu,76d);
}
B76c4b2:L76c4b2:{c.instructions+=5;NFSU2_TR(0x76c4b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76c4b5:{NFSU2_TR(0x76c4b5);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B76c4b6:{NFSU2_TR(0x76c4b6);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B76c4b9:{NFSU2_TR(0x76c4b9);
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
B76c4bb:{NFSU2_TR(0x76c4bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c4a4u);}goto L76c4a4;}}
}
B76c4bd:L76c4bd:{c.instructions+=3;NFSU2_TR(0x76c4bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c4be:{NFSU2_TR(0x76c4be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c4bf:{NFSU2_TR(0x76c4bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c4c0:L76c4c0:{c.instructions+=25;NFSU2_TR(0x76c4c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c4c1:{NFSU2_TR(0x76c4c1);
__builtin_memmove((R+20),(R+16),4);
}
B76c4c3:{NFSU2_TR(0x76c4c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c4c4:{NFSU2_TR(0x76c4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76c4c8:{NFSU2_TR(0x76c4c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c4c9:{NFSU2_TR(0x76c4c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c4ca:{NFSU2_TR(0x76c4ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c4cb:{NFSU2_TR(0x76c4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76c4ce:{NFSU2_TR(0x76c4ce);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B76c4cf:{NFSU2_TR(0x76c4cf);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c4d1:{NFSU2_TR(0x76c4d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c4d4:{NFSU2_TR(0x76c4d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c4d5:{NFSU2_TR(0x76c4d5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76c4d6:{NFSU2_TR(0x76c4d6);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76c4d6);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76c4d6);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76c4d8:{NFSU2_TR(0x76c4d8);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c4da:{NFSU2_TR(0x76c4da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c4db:{NFSU2_TR(0x76c4db);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B76c4dd:{NFSU2_TR(0x76c4dd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76c4df:{NFSU2_TR(0x76c4df);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76c4e0:{NFSU2_TR(0x76c4e0);
__builtin_memmove((R+4),(R+24),4);
}
B76c4e2:{NFSU2_TR(0x76c4e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B76c4e4:{NFSU2_TR(0x76c4e4);
__builtin_memmove((R+12),(R+0),4);
}
B76c4e6:{NFSU2_TR(0x76c4e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c4e9:{NFSU2_TR(0x76c4e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76c4ec:{NFSU2_TR(0x76c4ec);
if(r1(R+518)){{goto L76c50f;}}
}
B76c4ee:L76c4ee:{c.instructions+=4;NFSU2_TR(0x76c4ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c4f1:{NFSU2_TR(0x76c4f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c4f2:{NFSU2_TR(0x76c4f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c4f3:{NFSU2_TR(0x76c4f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c4f8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c441u);}goto L76c441;}
}
B76c4f8:L76c4f8:{c.instructions+=4;NFSU2_TR(0x76c4f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c4fa:{NFSU2_TR(0x76c4fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c4fb:{NFSU2_TR(0x76c4fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c4fc:{NFSU2_TR(0x76c4fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c50c;}}
}
B76c4fe:L76c4fe:{c.instructions+=3;NFSU2_TR(0x76c4fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c4ff:{NFSU2_TR(0x76c4ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c502:{NFSU2_TR(0x76c502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c507ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c473u);}goto L76c473;}
}
B76c507:L76c507:{c.instructions+=3;NFSU2_TR(0x76c507);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c508:{NFSU2_TR(0x76c508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c509:{NFSU2_TR(0x76c509);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c50c:L76c50c:{c.instructions+=1;NFSU2_TR(0x76c50c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c50f:L76c50f:{c.instructions+=9;NFSU2_TR(0x76c50f);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B76c512:{NFSU2_TR(0x76c512);
__builtin_memmove((R+4),(R+24),4);
}
B76c514:{NFSU2_TR(0x76c514);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B76c516:{NFSU2_TR(0x76c516);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c518:{NFSU2_TR(0x76c518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c519:{NFSU2_TR(0x76c519);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(r4(R+8))));
s4(u32(r4(U+4)),r4(U+8));
}
B76c51c:{NFSU2_TR(0x76c51c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76c51d:{NFSU2_TR(0x76c51d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B76c51f:{NFSU2_TR(0x76c51f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76c52a;}}
}
B76c521:L76c521:{c.instructions+=3;NFSU2_TR(0x76c521);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B76c524:{NFSU2_TR(0x76c524);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B76c526:{NFSU2_TR(0x76c526);
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
B76c528:L76c528:{c.instructions+=1;NFSU2_TR(0x76c528);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L76c52a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c528u);}goto L76c528;}
}
B76c52a:L76c52a:{c.instructions+=6;NFSU2_TR(0x76c52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c52d:{NFSU2_TR(0x76c52d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c52e:{NFSU2_TR(0x76c52e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c52f:{NFSU2_TR(0x76c52f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76c530:{NFSU2_TR(0x76c530);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76c531:{NFSU2_TR(0x76c531);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c532:L76c532:{c.instructions+=6;NFSU2_TR(0x76c532);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c536:{NFSU2_TR(0x76c536);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c53a:{NFSU2_TR(0x76c53a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c53c:{NFSU2_TR(0x76c53c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76c53d:{NFSU2_TR(0x76c53d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B76c53f:{NFSU2_TR(0x76c53f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c540:L76c540:{c.instructions+=5;NFSU2_TR(0x76c540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B76c542:{NFSU2_TR(0x76c542);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B76c545:{NFSU2_TR(0x76c545);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B76c548:{NFSU2_TR(0x76c548);
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
B76c549:{NFSU2_TR(0x76c549);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c540u);}goto L76c540;}}
}
B76c54b:L76c54b:{c.instructions+=2;NFSU2_TR(0x76c54b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c54c:{NFSU2_TR(0x76c54c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c54d:L76c54d:{c.instructions+=1;NFSU2_TR(0x76c54d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c54f:L76c54f:{c.instructions+=3;NFSU2_TR(0x76c54f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c553:{NFSU2_TR(0x76c553);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B76c557:{NFSU2_TR(0x76c557);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c563;}}
}
B76c559:L76c559:{c.instructions+=3;NFSU2_TR(0x76c559);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76c55a:{NFSU2_TR(0x76c55a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76c55d:{NFSU2_TR(0x76c55d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c54fu);}goto L76c54f;}}
}
B76c55f:L76c55f:{c.instructions+=3;NFSU2_TR(0x76c55f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c561:{NFSU2_TR(0x76c561);
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
B76c562:{NFSU2_TR(0x76c562);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c563:L76c563:{c.instructions+=2;NFSU2_TR(0x76c563);
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
B76c565:{NFSU2_TR(0x76c565);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c566:L76c566:{c.instructions+=22;NFSU2_TR(0x76c566);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c567:{NFSU2_TR(0x76c567);
__builtin_memmove((R+20),(R+16),4);
}
B76c569:{NFSU2_TR(0x76c569);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B76c56c:{NFSU2_TR(0x76c56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c56f:{NFSU2_TR(0x76c56f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c570:{NFSU2_TR(0x76c570);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c571:{NFSU2_TR(0x76c571);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c572:{NFSU2_TR(0x76c572);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c574:{NFSU2_TR(0x76c574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c575:{NFSU2_TR(0x76c575);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76c576:{NFSU2_TR(0x76c576);
__builtin_memmove((R+4),(R+24),4);
}
B76c578:{NFSU2_TR(0x76c578);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76c578);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76c578);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76c57a:{NFSU2_TR(0x76c57a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76c57d:{NFSU2_TR(0x76c57d);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B76c580:{NFSU2_TR(0x76c580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c583:{NFSU2_TR(0x76c583);
__builtin_memmove((R+4),(R+8),4);
}
B76c585:{NFSU2_TR(0x76c585);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B76c587:{NFSU2_TR(0x76c587);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c58a:{NFSU2_TR(0x76c58a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c58c:{NFSU2_TR(0x76c58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B76c58f:{NFSU2_TR(0x76c58f);
w4(R+28,u32(~u32(r4(R+28))));
}
B76c591:{NFSU2_TR(0x76c591);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c594:L76c594:{c.instructions+=15;NFSU2_TR(0x76c594);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B76c597:{NFSU2_TR(0x76c597);
__builtin_memmove((R+4),(R+24),4);
}
B76c599:{NFSU2_TR(0x76c599);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B76c59b:{NFSU2_TR(0x76c59b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c59e:{NFSU2_TR(0x76c59e);
__builtin_memmove((R+4),(R+8),4);
}
B76c5a0:{NFSU2_TR(0x76c5a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r1(U+0))));
}
B76c5a2:{NFSU2_TR(0x76c5a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c5a5:{NFSU2_TR(0x76c5a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(U+4))));
}
B76c5a8:{NFSU2_TR(0x76c5a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B76c5ab:{NFSU2_TR(0x76c5ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76c5ae:{NFSU2_TR(0x76c5ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B76c5b0:{NFSU2_TR(0x76c5b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76c5b1:{NFSU2_TR(0x76c5b1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76c5b4:{NFSU2_TR(0x76c5b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c5b7:{NFSU2_TR(0x76c5b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c594u);}goto L76c594;}}
}
B76c5b9:L76c5b9:{c.instructions+=5;NFSU2_TR(0x76c5b9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c5bb:{NFSU2_TR(0x76c5bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c5bc:{NFSU2_TR(0x76c5bc);
__builtin_memmove((R+4),(R+0),4);
}
B76c5be:{NFSU2_TR(0x76c5be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B76c5c1:{NFSU2_TR(0x76c5c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B76c5c4:L76c5c4:{c.instructions+=2;NFSU2_TR(0x76c5c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B76c5c7:{NFSU2_TR(0x76c5c7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76c5d0;}}
}
B76c5c9:L76c5c9:{c.instructions+=3;NFSU2_TR(0x76c5c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B76c5cb:{NFSU2_TR(0x76c5cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B76c5ce:{NFSU2_TR(0x76c5ce);
{goto L76c5d4;}
}
B76c5d0:L76c5d0:{c.instructions+=1;NFSU2_TR(0x76c5d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B76c5d4:L76c5d4:{c.instructions+=4;NFSU2_TR(0x76c5d4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76c5d5:{NFSU2_TR(0x76c5d5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B76c5d8:{NFSU2_TR(0x76c5d8);
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
B76c5da:{NFSU2_TR(0x76c5da);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c5c4u);}goto L76c5c4;}}
}
B76c5dc:L76c5dc:{c.instructions+=5;NFSU2_TR(0x76c5dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c5dd:{NFSU2_TR(0x76c5dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c5de:{NFSU2_TR(0x76c5de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76c5df:{NFSU2_TR(0x76c5df);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76c5e0:{NFSU2_TR(0x76c5e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c5e1:L76c5e1:{c.instructions+=25;NFSU2_TR(0x76c5e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c5e2:{NFSU2_TR(0x76c5e2);
__builtin_memmove((R+20),(R+16),4);
}
B76c5e4:{NFSU2_TR(0x76c5e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B76c5e7:{NFSU2_TR(0x76c5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c5ea:{NFSU2_TR(0x76c5ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B76c5ee:{NFSU2_TR(0x76c5ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c5ef:{NFSU2_TR(0x76c5ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c5f0:{NFSU2_TR(0x76c5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76c5f3:{NFSU2_TR(0x76c5f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c5f4:{NFSU2_TR(0x76c5f4);
__builtin_memmove((R+28),(R+4),4);
}
B76c5f6:{NFSU2_TR(0x76c5f6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000ull))));
}
B76c5fc:{NFSU2_TR(0x76c5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c5ff:{NFSU2_TR(0x76c5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c602:{NFSU2_TR(0x76c602);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c605:{NFSU2_TR(0x76c605);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c608:{NFSU2_TR(0x76c608);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B76c60b:{NFSU2_TR(0x76c60b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B76c60e:{NFSU2_TR(0x76c60e);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7fffull))));
}
B76c614:{NFSU2_TR(0x76c614);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x3fffull))));
}
B76c61a:{NFSU2_TR(0x76c61a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffc001ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76c620:{NFSU2_TR(0x76c620);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c623:{NFSU2_TR(0x76c623);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c626:{NFSU2_TR(0x76c626);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c629:{NFSU2_TR(0x76c629);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c62a:{NFSU2_TR(0x76c62a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c64a;}}
}
B76c62c:L76c62c:{c.instructions+=2;NFSU2_TR(0x76c62c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76c62e:{NFSU2_TR(0x76c62e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c633ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c54du);}goto L76c54d;}
}
B76c633:L76c633:{c.instructions+=3;NFSU2_TR(0x76c633);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c635:{NFSU2_TR(0x76c635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c636:{NFSU2_TR(0x76c636);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c6f9;}}
}
B76c63c:L76c63c:{c.instructions+=4;NFSU2_TR(0x76c63c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c63f:{NFSU2_TR(0x76c63f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B76c640:{NFSU2_TR(0x76c640);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B76c641:{NFSU2_TR(0x76c641);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B76c642:L76c642:{c.instructions+=3;NFSU2_TR(0x76c642);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c644:{NFSU2_TR(0x76c644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c645:{NFSU2_TR(0x76c645);
{goto L76c6fb;}
}
B76c64a:L76c64a:{c.instructions+=3;NFSU2_TR(0x76c64a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c64d:{NFSU2_TR(0x76c64d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c64e:{NFSU2_TR(0x76c64e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c653ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c532u);}goto L76c532;}
}
B76c653:L76c653:{c.instructions+=4;NFSU2_TR(0x76c653);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c656:{NFSU2_TR(0x76c656);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c659:{NFSU2_TR(0x76c659);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c65a:{NFSU2_TR(0x76c65a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c65full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c4c0u);}goto L76c4c0;}
}
B76c65f:L76c65f:{c.instructions+=3;NFSU2_TR(0x76c65f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B76c662:{NFSU2_TR(0x76c662);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c664:{NFSU2_TR(0x76c664);
if(r1(R+518)){{goto L76c667;}}
}
B76c666:L76c666:{c.instructions+=1;NFSU2_TR(0x76c666);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76c667:L76c667:{c.instructions+=5;NFSU2_TR(0x76c667);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c66a:{NFSU2_TR(0x76c66a);
__builtin_memmove((R+4),(R+0),4);
}
B76c66c:{NFSU2_TR(0x76c66c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B76c66f:{NFSU2_TR(0x76c66f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76c671:{NFSU2_TR(0x76c671);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76c67d;}}
}
B76c673:L76c673:{c.instructions+=6;NFSU2_TR(0x76c673);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c675:{NFSU2_TR(0x76c675);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c678:{NFSU2_TR(0x76c678);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B76c679:{NFSU2_TR(0x76c679);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B76c67a:{NFSU2_TR(0x76c67a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B76c67b:{NFSU2_TR(0x76c67b);
{goto L76c6b9;}
}
B76c67d:L76c67d:{c.instructions+=2;NFSU2_TR(0x76c67d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76c67f:{NFSU2_TR(0x76c67f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76c6bd;}}
}
B76c681:L76c681:{c.instructions+=7;NFSU2_TR(0x76c681);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B76c683:{NFSU2_TR(0x76c683);
__builtin_memmove((R+28),(R+0),4);
}
B76c685:{NFSU2_TR(0x76c685);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c688:{NFSU2_TR(0x76c688);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c689:{NFSU2_TR(0x76c689);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c68c:{NFSU2_TR(0x76c68c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c68d:{NFSU2_TR(0x76c68d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c692ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c532u);}goto L76c532;}
}
B76c692:L76c692:{c.instructions+=4;NFSU2_TR(0x76c692);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c695:{NFSU2_TR(0x76c695);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c696:{NFSU2_TR(0x76c696);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c697:{NFSU2_TR(0x76c697);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c69cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c566u);}goto L76c566;}
}
B76c69c:L76c69c:{c.instructions+=4;NFSU2_TR(0x76c69c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c69f:{NFSU2_TR(0x76c69f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c6a2:{NFSU2_TR(0x76c6a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c6a3:{NFSU2_TR(0x76c6a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c6a8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c4c0u);}goto L76c4c0;}
}
B76c6a8:L76c6a8:{c.instructions+=6;NFSU2_TR(0x76c6a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c6ab:{NFSU2_TR(0x76c6ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76c6ac:{NFSU2_TR(0x76c6ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c6ad:{NFSU2_TR(0x76c6ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c6b0:{NFSU2_TR(0x76c6b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c6b1:{NFSU2_TR(0x76c6b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c6b6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c566u);}goto L76c566;}
}
B76c6b6:L76c6b6:{c.instructions+=1;NFSU2_TR(0x76c6b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B76c6b9:L76c6b9:{c.instructions+=2;NFSU2_TR(0x76c6b9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76c6bb:{NFSU2_TR(0x76c6bb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c642u);}goto L76c642;}
}
B76c6bd:L76c6bd:{c.instructions+=3;NFSU2_TR(0x76c6bd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+4)));
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B76c6bf:{NFSU2_TR(0x76c6bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c6c2:{NFSU2_TR(0x76c6c2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76c6e5;}}
}
B76c6c4:L76c6c4:{c.instructions+=9;NFSU2_TR(0x76c6c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c6c6:{NFSU2_TR(0x76c6c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c6c9:{NFSU2_TR(0x76c6c9);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B76c6ca:{NFSU2_TR(0x76c6ca);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B76c6cb:{NFSU2_TR(0x76c6cb);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B76c6cc:{NFSU2_TR(0x76c6cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76c6d0:{NFSU2_TR(0x76c6d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c6d3:{NFSU2_TR(0x76c6d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c6d4:{NFSU2_TR(0x76c6d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c6d9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c566u);}goto L76c566;}
}
B76c6d9:L76c6d9:{c.instructions+=7;NFSU2_TR(0x76c6d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76c6dc:{NFSU2_TR(0x76c6dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+0))));
}
B76c6de:{NFSU2_TR(0x76c6de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c6df:{NFSU2_TR(0x76c6df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c6e1:{NFSU2_TR(0x76c6e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c6e2:{NFSU2_TR(0x76c6e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76c6e3:{NFSU2_TR(0x76c6e3);
{goto L76c6fb;}
}
B76c6e5:L76c6e5:{c.instructions+=6;NFSU2_TR(0x76c6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76c6e8:{NFSU2_TR(0x76c6e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x7full))));
s1(u32(r4(U+0)),r1(U+4));
}
B76c6ec:{NFSU2_TR(0x76c6ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c6ef:{NFSU2_TR(0x76c6ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c6f0:{NFSU2_TR(0x76c6f0);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B76c6f2:{NFSU2_TR(0x76c6f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c6f7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c566u);}goto L76c566;}
}
B76c6f7:L76c6f7:{c.instructions+=2;NFSU2_TR(0x76c6f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c6f8:{NFSU2_TR(0x76c6f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c6f9:L76c6f9:{c.instructions+=1;NFSU2_TR(0x76c6f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c6fb:L76c6fb:{c.instructions+=13;NFSU2_TR(0x76c6fb);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c6fd:{NFSU2_TR(0x76c6fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c6fe:{NFSU2_TR(0x76c6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B76c701:{NFSU2_TR(0x76c701);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76c704:{NFSU2_TR(0x76c704);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B76c706:{NFSU2_TR(0x76c706);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c709:{NFSU2_TR(0x76c709);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B76c70b:{NFSU2_TR(0x76c70b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B76c70d:{NFSU2_TR(0x76c70d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000000ull))));
}
B76c713:{NFSU2_TR(0x76c713);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B76c715:{NFSU2_TR(0x76c715);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))|u32(r4(U+4))));
}
B76c718:{NFSU2_TR(0x76c718);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76c71b:{NFSU2_TR(0x76c71b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c72a;}}
}
B76c71d:L76c71d:{c.instructions+=5;NFSU2_TR(0x76c71d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c720:{NFSU2_TR(0x76c720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76c723:{NFSU2_TR(0x76c723);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c726:{NFSU2_TR(0x76c726);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B76c728:{NFSU2_TR(0x76c728);
{goto L76c734;}
}
B76c72a:L76c72a:{c.instructions+=2;NFSU2_TR(0x76c72a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76c72d:{NFSU2_TR(0x76c72d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c734;}}
}
B76c72f:L76c72f:{c.instructions+=2;NFSU2_TR(0x76c72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c732:{NFSU2_TR(0x76c732);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B76c734:L76c734:{c.instructions+=5;NFSU2_TR(0x76c734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c735:{NFSU2_TR(0x76c735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c736:{NFSU2_TR(0x76c736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76c737:{NFSU2_TR(0x76c737);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76c738:{NFSU2_TR(0x76c738);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c739:L76c739:{c.instructions+=4;NFSU2_TR(0x76c739);
u8 U[4];
w4(U+0,u32(0x81aca8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c73e:{NFSU2_TR(0x76c73e);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c742:{NFSU2_TR(0x76c742);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c746:{NFSU2_TR(0x76c746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c74bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c5e1u);}goto L76c5e1;}
}
B76c74b:L76c74b:{c.instructions+=2;NFSU2_TR(0x76c74b);
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
B76c74e:{NFSU2_TR(0x76c74e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c74f:L76c74f:{c.instructions+=4;NFSU2_TR(0x76c74f);
u8 U[4];
w4(U+0,u32(0x81acc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c754:{NFSU2_TR(0x76c754);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c758:{NFSU2_TR(0x76c758);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c75c:{NFSU2_TR(0x76c75c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c761ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c5e1u);}goto L76c5e1;}
}
B76c761:L76c761:{c.instructions+=2;NFSU2_TR(0x76c761);
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
B76c764:{NFSU2_TR(0x76c764);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c765:L76c765:{c.instructions+=17;NFSU2_TR(0x76c765);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c766:{NFSU2_TR(0x76c766);
__builtin_memmove((R+20),(R+16),4);
}
B76c768:{NFSU2_TR(0x76c768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B76c76b:{NFSU2_TR(0x76c76b);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76c770:{NFSU2_TR(0x76c770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76c773:{NFSU2_TR(0x76c773);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c776:{NFSU2_TR(0x76c776);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c778:{NFSU2_TR(0x76c778);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c779:{NFSU2_TR(0x76c779);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c77a:{NFSU2_TR(0x76c77a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c77b:{NFSU2_TR(0x76c77b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c77c:{NFSU2_TR(0x76c77c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c77f:{NFSU2_TR(0x76c77f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c782:{NFSU2_TR(0x76c782);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c783:{NFSU2_TR(0x76c783);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c786:{NFSU2_TR(0x76c786);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c787:{NFSU2_TR(0x76c787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c78cull));
{goto L76cc86;}
}
B76c78c:L76c78c:{c.instructions+=4;NFSU2_TR(0x76c78c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c78f:{NFSU2_TR(0x76c78f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c792:{NFSU2_TR(0x76c792);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c793:{NFSU2_TR(0x76c793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c798ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c739u);}goto L76c739;}
}
B76c798:L76c798:{c.instructions+=4;NFSU2_TR(0x76c798);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c79b:{NFSU2_TR(0x76c79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76c79e:{NFSU2_TR(0x76c79e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B76c7a1:{NFSU2_TR(0x76c7a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c7a6ull));
TAIL_STATIC(0x76115eu,761);
}
B76c7a6:L76c7a6:{c.instructions+=2;NFSU2_TR(0x76c7a6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76c7a7:{NFSU2_TR(0x76c7a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c7a8:L76c7a8:{c.instructions+=17;NFSU2_TR(0x76c7a8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c7a9:{NFSU2_TR(0x76c7a9);
__builtin_memmove((R+20),(R+16),4);
}
B76c7ab:{NFSU2_TR(0x76c7ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B76c7ae:{NFSU2_TR(0x76c7ae);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76c7b3:{NFSU2_TR(0x76c7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76c7b6:{NFSU2_TR(0x76c7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c7b9:{NFSU2_TR(0x76c7b9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c7bb:{NFSU2_TR(0x76c7bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c7bc:{NFSU2_TR(0x76c7bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c7bd:{NFSU2_TR(0x76c7bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c7be:{NFSU2_TR(0x76c7be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c7bf:{NFSU2_TR(0x76c7bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c7c2:{NFSU2_TR(0x76c7c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c7c5:{NFSU2_TR(0x76c7c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c7c6:{NFSU2_TR(0x76c7c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c7c9:{NFSU2_TR(0x76c7c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c7ca:{NFSU2_TR(0x76c7ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c7cfull));
{goto L76cc86;}
}
B76c7cf:L76c7cf:{c.instructions+=4;NFSU2_TR(0x76c7cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c7d2:{NFSU2_TR(0x76c7d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c7d5:{NFSU2_TR(0x76c7d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c7d6:{NFSU2_TR(0x76c7d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c7dbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c74fu);}goto L76c74f;}
}
B76c7db:L76c7db:{c.instructions+=4;NFSU2_TR(0x76c7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c7de:{NFSU2_TR(0x76c7de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76c7e1:{NFSU2_TR(0x76c7e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B76c7e4:{NFSU2_TR(0x76c7e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c7e9ull));
TAIL_STATIC(0x76115eu,761);
}
B76c7e9:L76c7e9:{c.instructions+=2;NFSU2_TR(0x76c7e9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76c7ea:{NFSU2_TR(0x76c7ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c7eb:L76c7eb:{c.instructions+=14;NFSU2_TR(0x76c7eb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c7ec:{NFSU2_TR(0x76c7ec);
__builtin_memmove((R+20),(R+16),4);
}
B76c7ee:{NFSU2_TR(0x76c7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76c7f1:{NFSU2_TR(0x76c7f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c7f4:{NFSU2_TR(0x76c7f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c7f5:{NFSU2_TR(0x76c7f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76c7f8:{NFSU2_TR(0x76c7f8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c7fa:{NFSU2_TR(0x76c7fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c7fb:{NFSU2_TR(0x76c7fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76c7fe:{NFSU2_TR(0x76c7fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c7ff:{NFSU2_TR(0x76c7ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c802:{NFSU2_TR(0x76c802);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+24)),r1(U+0));
}
B76c805:{NFSU2_TR(0x76c805);
__builtin_memmove((R+0),(R+28),4);
}
B76c807:{NFSU2_TR(0x76c807);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76c828;}}
}
B76c809:L76c809:{c.instructions+=2;NFSU2_TR(0x76c809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c80c:{NFSU2_TR(0x76c80c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76c80e:L76c80e:{c.instructions+=3;NFSU2_TR(0x76c80e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B76c810:{NFSU2_TR(0x76c810);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76c812:{NFSU2_TR(0x76c812);
if(r1(R+518)){{goto L76c81a;}}
}
B76c814:L76c814:{c.instructions+=3;NFSU2_TR(0x76c814);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B76c817:{NFSU2_TR(0x76c817);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76c818:{NFSU2_TR(0x76c818);
{goto L76c81d;}
}
B76c81a:L76c81a:{c.instructions+=2;NFSU2_TR(0x76c81a);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c81c:{NFSU2_TR(0x76c81c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76c81d:L76c81d:{c.instructions+=4;NFSU2_TR(0x76c81d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B76c81f:{NFSU2_TR(0x76c81f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76c820:{NFSU2_TR(0x76c820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76c823:{NFSU2_TR(0x76c823);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c80eu);}goto L76c80e;}}
}
B76c825:L76c825:{c.instructions+=1;NFSU2_TR(0x76c825);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76c828:L76c828:{c.instructions+=3;NFSU2_TR(0x76c828);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x0ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B76c82b:{NFSU2_TR(0x76c82b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76c82d:{NFSU2_TR(0x76c82d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76c841;}}
}
B76c82f:L76c82f:{c.instructions+=2;NFSU2_TR(0x76c82f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+523,sborrow<u8>(r1(U+1),u8(0x35ull)));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x35ull))));
w1(R+519,u8(s8(r1(U+2))<s8(u8(0x0ull))));
}
B76c832:{NFSU2_TR(0x76c832);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76c841;}}
}
B76c834:L76c834:{c.instructions+=1;NFSU2_TR(0x76c834);
{goto L76c839;}
}
B76c836:L76c836:{c.instructions+=1;NFSU2_TR(0x76c836);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+0)),r1(U+0));
}
B76c839:L76c839:{c.instructions+=3;NFSU2_TR(0x76c839);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76c83a:{NFSU2_TR(0x76c83a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x39ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76c83d:{NFSU2_TR(0x76c83d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c836u);}goto L76c836;}}
}
B76c83f:L76c83f:{c.instructions+=1;NFSU2_TR(0x76c83f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(u8(0x1ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B76c841:L76c841:{c.instructions+=2;NFSU2_TR(0x76c841);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(u8(0x31ull))));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x31ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76c844:{NFSU2_TR(0x76c844);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c84b;}}
}
B76c846:L76c846:{c.instructions+=2;NFSU2_TR(0x76c846);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B76c849:{NFSU2_TR(0x76c849);
{goto L76c85d;}
}
B76c84b:L76c84b:{c.instructions+=2;NFSU2_TR(0x76c84b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c84c:{NFSU2_TR(0x76c84c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c851ull));
TAIL_STATIC(0x766bc0u,766);
}
B76c851:L76c851:{c.instructions+=5;NFSU2_TR(0x76c851);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76c852:{NFSU2_TR(0x76c852);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c853:{NFSU2_TR(0x76c853);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c854:{NFSU2_TR(0x76c854);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c855:{NFSU2_TR(0x76c855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c85aull));
TAIL_STATIC(0x75cfd0u,75c);
}
B76c85a:L76c85a:{c.instructions+=1;NFSU2_TR(0x76c85a);
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
B76c85d:L76c85d:{c.instructions+=5;NFSU2_TR(0x76c85d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c85e:{NFSU2_TR(0x76c85e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c85f:{NFSU2_TR(0x76c85f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76c860:{NFSU2_TR(0x76c860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76c861:{NFSU2_TR(0x76c861);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c862:L76c862:{c.instructions+=23;NFSU2_TR(0x76c862);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c863:{NFSU2_TR(0x76c863);
__builtin_memmove((R+20),(R+16),4);
}
B76c865:{NFSU2_TR(0x76c865);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c866:{NFSU2_TR(0x76c866);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76c869:{NFSU2_TR(0x76c869);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76c86b:{NFSU2_TR(0x76c86b);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B76c86f:{NFSU2_TR(0x76c86f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c870:{NFSU2_TR(0x76c870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c871:{NFSU2_TR(0x76c871);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c872:{NFSU2_TR(0x76c872);
w4(R+28,u32(0x7ffull));
}
B76c877:{NFSU2_TR(0x76c877);
w4(R+24,u32(0x80000000ull));
}
B76c87c:{NFSU2_TR(0x76c87c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c87f:{NFSU2_TR(0x76c87f);
__builtin_memmove((R+4),(R+0),4);
}
B76c881:{NFSU2_TR(0x76c881);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B76c884:{NFSU2_TR(0x76c884);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000ull))));
}
B76c889:{NFSU2_TR(0x76c889);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B76c88b:{NFSU2_TR(0x76c88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c88e:{NFSU2_TR(0x76c88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c891:{NFSU2_TR(0x76c891);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B76c893:{NFSU2_TR(0x76c893);
w4(R+12,u32(r2(R+4)));
}
B76c896:{NFSU2_TR(0x76c896);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B76c89b:{NFSU2_TR(0x76c89b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c89d:{NFSU2_TR(0x76c89d);
if(r1(R+518)){{goto L76c8b2;}}
}
B76c89f:L76c89f:{c.instructions+=2;NFSU2_TR(0x76c89f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76c8a1:{NFSU2_TR(0x76c8a1);
if(r1(R+518)){{goto L76c8ab;}}
}
B76c8a3:L76c8a3:{c.instructions+=2;NFSU2_TR(0x76c8a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3c00ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c8a9:{NFSU2_TR(0x76c8a9);
{goto L76c8d3;}
}
B76c8ab:L76c8ab:{c.instructions+=2;NFSU2_TR(0x76c8ab);
w4(R+28,u32(0x7fffull));
}
B76c8b0:{NFSU2_TR(0x76c8b0);
{goto L76c8d3;}
}
B76c8b2:L76c8b2:{c.instructions+=3;NFSU2_TR(0x76c8b2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76c8b4:{NFSU2_TR(0x76c8b4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76c8b6:{NFSU2_TR(0x76c8b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c8ca;}}
}
B76c8b8:L76c8b8:{c.instructions+=2;NFSU2_TR(0x76c8b8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B76c8ba:{NFSU2_TR(0x76c8ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c8ca;}}
}
B76c8bc:L76c8bc:{c.instructions+=5;NFSU2_TR(0x76c8bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c8bf:{NFSU2_TR(0x76c8bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c8c2:{NFSU2_TR(0x76c8c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76c8c4:{NFSU2_TR(0x76c8c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76c8c8:{NFSU2_TR(0x76c8c8);
{goto L76c917;}
}
B76c8ca:L76c8ca:{c.instructions+=2;NFSU2_TR(0x76c8ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3c01ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c8d0:{NFSU2_TR(0x76c8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c8d3:L76c8d3:{c.instructions+=11;NFSU2_TR(0x76c8d3);
__builtin_memmove((R+4),(R+8),4);
}
B76c8d5:{NFSU2_TR(0x76c8d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B76c8d8:{NFSU2_TR(0x76c8d8);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B76c8db:{NFSU2_TR(0x76c8db);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B76c8dd:{NFSU2_TR(0x76c8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))|u32(r4(U+4))));
}
B76c8e0:{NFSU2_TR(0x76c8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76c8e3:{NFSU2_TR(0x76c8e3);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B76c8e6:{NFSU2_TR(0x76c8e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c8e8:{NFSU2_TR(0x76c8e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c8eb:{NFSU2_TR(0x76c8eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76c8ed:{NFSU2_TR(0x76c8ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76c90e;}}
}
B76c8ef:L76c8ef:{c.instructions+=12;NFSU2_TR(0x76c8ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76c8f1:{NFSU2_TR(0x76c8f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76c8f4:{NFSU2_TR(0x76c8f4);
__builtin_memmove((R+12),(R+4),4);
}
B76c8f6:{NFSU2_TR(0x76c8f6);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B76c8f8:{NFSU2_TR(0x76c8f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B76c8fb:{NFSU2_TR(0x76c8fb);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+12))));
}
B76c8fd:{NFSU2_TR(0x76c8fd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B76c8ff:{NFSU2_TR(0x76c8ff);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xffffull))));
}
B76c905:{NFSU2_TR(0x76c905);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c907:{NFSU2_TR(0x76c907);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c90a:{NFSU2_TR(0x76c90a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76c90c:{NFSU2_TR(0x76c90c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c8efu);}goto L76c8ef;}}
}
B76c90e:L76c90e:{c.instructions+=3;NFSU2_TR(0x76c90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c911:{NFSU2_TR(0x76c911);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76c913:{NFSU2_TR(0x76c913);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76c917:L76c917:{c.instructions+=5;NFSU2_TR(0x76c917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c918:{NFSU2_TR(0x76c918);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c919:{NFSU2_TR(0x76c919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76c91a:{NFSU2_TR(0x76c91a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76c91b:{NFSU2_TR(0x76c91b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c91c:L76c91c:{c.instructions+=13;NFSU2_TR(0x76c91c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c91d:{NFSU2_TR(0x76c91d);
__builtin_memmove((R+20),(R+16),4);
}
B76c91f:{NFSU2_TR(0x76c91f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B76c922:{NFSU2_TR(0x76c922);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76c927:{NFSU2_TR(0x76c927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76c92a:{NFSU2_TR(0x76c92a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c92b:{NFSU2_TR(0x76c92b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c92e:{NFSU2_TR(0x76c92e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c92f:{NFSU2_TR(0x76c92f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c932:{NFSU2_TR(0x76c932);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c933:{NFSU2_TR(0x76c933);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c936:{NFSU2_TR(0x76c936);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c937:{NFSU2_TR(0x76c937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c93cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76c862u);}goto L76c862;}
}
B76c93c:L76c93c:{c.instructions+=13;NFSU2_TR(0x76c93c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c93d:{NFSU2_TR(0x76c93d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c93e:{NFSU2_TR(0x76c93e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c941:{NFSU2_TR(0x76c941);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c942:{NFSU2_TR(0x76c942);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c944:{NFSU2_TR(0x76c944);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c946:{NFSU2_TR(0x76c946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B76c949:{NFSU2_TR(0x76c949);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c94c:{NFSU2_TR(0x76c94c);
__builtin_memmove((R+28),(R+16),4);
}
B76c94e:{NFSU2_TR(0x76c94e);
u8 U[40];
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
}
B76c94f:{NFSU2_TR(0x76c94f);
u8 U[40];
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
}
B76c950:{NFSU2_TR(0x76c950);
u8 U[36];
__builtin_memmove((U+18),(R+28),4);
w4(U+22,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+26,u32(r1(R+522)));
w4(U+30,u32(u32(u32(0x4ull))*u32(r4(U+26))));
w4(R+28,u32(u32(r4(U+22))-u32(r4(U+30))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),2);
__builtin_memmove((U+34),(U+16),2);
s2(u32(r4(U+18)),r2(U+34));
}
B76c952:{NFSU2_TR(0x76c952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c957ull));
TAIL_STATIC(0x76df49u,76d);
}
B76c957:L76c957:{c.instructions+=11;NFSU2_TR(0x76c957);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76c95a:{NFSU2_TR(0x76c95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76c95d:{NFSU2_TR(0x76c95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c960:{NFSU2_TR(0x76c960);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B76c964:{NFSU2_TR(0x76c964);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B76c966:{NFSU2_TR(0x76c966);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B76c96a:{NFSU2_TR(0x76c96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c96d:{NFSU2_TR(0x76c96d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76c970:{NFSU2_TR(0x76c970);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c971:{NFSU2_TR(0x76c971);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c972:{NFSU2_TR(0x76c972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c977ull));
TAIL_STATIC(0x766ac0u,766);
}
B76c977:L76c977:{c.instructions+=6;NFSU2_TR(0x76c977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c97a:{NFSU2_TR(0x76c97a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76c97d:{NFSU2_TR(0x76c97d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B76c980:{NFSU2_TR(0x76c980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76c983:{NFSU2_TR(0x76c983);
__builtin_memmove((R+0),(R+24),4);
}
B76c985:{NFSU2_TR(0x76c985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c98aull));
TAIL_STATIC(0x76115eu,761);
}
B76c98a:L76c98a:{c.instructions+=4;NFSU2_TR(0x76c98a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76c98b:{NFSU2_TR(0x76c98b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c98c:{NFSU2_TR(0x76c98c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76c98d:{NFSU2_TR(0x76c98d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c98e:L76c98e:{c.instructions+=2;NFSU2_TR(0x76c98e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c990:{NFSU2_TR(0x76c990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c995ull));
TAIL_STATIC(0x75bc7eu,75b);
}
B76c995:L76c995:{c.instructions+=2;NFSU2_TR(0x76c995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c996:{NFSU2_TR(0x76c996);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c997:L76c997:{c.instructions+=6;NFSU2_TR(0x76c997);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c998:{NFSU2_TR(0x76c998);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c99c:{NFSU2_TR(0x76c99c);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76c99e:{NFSU2_TR(0x76c99e);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c9a2:{NFSU2_TR(0x76c9a2);
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
B76c9a3:{NFSU2_TR(0x76c9a3);
u8 U[4];
__builtin_memmove((U+0),gp(0x783110),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c9a9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c9a9:L76c9a9:{c.instructions+=2;NFSU2_TR(0x76c9a9);
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
B76c9ab:{NFSU2_TR(0x76c9ab);
if(r1(R+518)){{goto L76c9af;}}
}
B76c9ad:L76c9ad:{c.instructions+=1;NFSU2_TR(0x76c9ad);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76c9af:L76c9af:{c.instructions+=3;NFSU2_TR(0x76c9af);
__builtin_memmove((R+0),(R+24),4);
}
B76c9b1:{NFSU2_TR(0x76c9b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c9b2:{NFSU2_TR(0x76c9b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c9b3:L76c9b3:{c.instructions+=6;NFSU2_TR(0x76c9b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c9b4:{NFSU2_TR(0x76c9b4);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c9b8:{NFSU2_TR(0x76c9b8);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76c9ba:{NFSU2_TR(0x76c9ba);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c9be:{NFSU2_TR(0x76c9be);
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
B76c9bf:{NFSU2_TR(0x76c9bf);
u8 U[4];
__builtin_memmove((U+0),gp(0x78310c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c9c5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c9c5:L76c9c5:{c.instructions+=2;NFSU2_TR(0x76c9c5);
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
B76c9c7:{NFSU2_TR(0x76c9c7);
if(r1(R+518)){{goto L76c9cb;}}
}
B76c9c9:L76c9c9:{c.instructions+=1;NFSU2_TR(0x76c9c9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76c9cb:L76c9cb:{c.instructions+=3;NFSU2_TR(0x76c9cb);
__builtin_memmove((R+0),(R+24),4);
}
B76c9cd:{NFSU2_TR(0x76c9cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c9ce:{NFSU2_TR(0x76c9ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c9cf:L76c9cf:{c.instructions+=5;NFSU2_TR(0x76c9cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c9d0:{NFSU2_TR(0x76c9d0);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76c9d4:{NFSU2_TR(0x76c9d4);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76c9d6:{NFSU2_TR(0x76c9d6);
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
B76c9d7:{NFSU2_TR(0x76c9d7);
u8 U[4];
__builtin_memmove((U+0),gp(0x78306c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c9ddull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76c9dd:L76c9dd:{c.instructions+=2;NFSU2_TR(0x76c9dd);
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
B76c9df:{NFSU2_TR(0x76c9df);
if(r1(R+518)){{goto L76c9e3;}}
}
B76c9e1:L76c9e1:{c.instructions+=1;NFSU2_TR(0x76c9e1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76c9e3:L76c9e3:{c.instructions+=3;NFSU2_TR(0x76c9e3);
__builtin_memmove((R+0),(R+24),4);
}
B76c9e5:{NFSU2_TR(0x76c9e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76c9e6:{NFSU2_TR(0x76c9e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76c9e7:L76c9e7:{c.instructions+=3;NFSU2_TR(0x76c9e7);
s4(0x8b8484,u32(u32(m4(0x8b8484))+u32(u32(0x1ull))));
}
B76c9ed:{NFSU2_TR(0x76c9ed);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76c9f2:{NFSU2_TR(0x76c9f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76c9f7ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76c9f7:L76c9f7:{c.instructions+=5;NFSU2_TR(0x76c9f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76c9f9:{NFSU2_TR(0x76c9f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76c9fa:{NFSU2_TR(0x76c9fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76c9fe:{NFSU2_TR(0x76c9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ca01:{NFSU2_TR(0x76ca01);
if(r1(R+518)){{goto L76ca10;}}
}
B76ca03:L76ca03:{c.instructions+=3;NFSU2_TR(0x76ca03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ca07:{NFSU2_TR(0x76ca07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76ca0e:{NFSU2_TR(0x76ca0e);
{goto L76ca21;}
}
B76ca10:L76ca10:{c.instructions+=4;NFSU2_TR(0x76ca10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ca14:{NFSU2_TR(0x76ca14);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76ca17:{NFSU2_TR(0x76ca17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ca1a:{NFSU2_TR(0x76ca1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76ca21:L76ca21:{c.instructions+=4;NFSU2_TR(0x76ca21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ca24:{NFSU2_TR(0x76ca24);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B76ca28:{NFSU2_TR(0x76ca28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B76ca2a:{NFSU2_TR(0x76ca2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ca2b:L76ca2b:{c.instructions+=3;NFSU2_TR(0x76ca2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ca2f:{NFSU2_TR(0x76ca2f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4ac),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B76ca35:{NFSU2_TR(0x76ca35);
if(r1(R+512)){{goto L76ca3a;}}
}
B76ca37:L76ca37:{c.instructions+=2;NFSU2_TR(0x76ca37);
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
B76ca39:{NFSU2_TR(0x76ca39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ca3a:L76ca3a:{c.instructions+=8;NFSU2_TR(0x76ca3a);
__builtin_memmove((R+4),(R+0),4);
}
B76ca3c:{NFSU2_TR(0x76ca3c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76ca3f:{NFSU2_TR(0x76ca3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B76ca42:{NFSU2_TR(0x76ca42);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B76ca49:{NFSU2_TR(0x76ca49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76ca4c:{NFSU2_TR(0x76ca4c);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B76ca51:{NFSU2_TR(0x76ca51);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76ca54:{NFSU2_TR(0x76ca54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ca55:L76ca55:{c.instructions+=7;NFSU2_TR(0x76ca55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ca56:{NFSU2_TR(0x76ca56);
__builtin_memmove((R+20),(R+16),4);
}
B76ca58:{NFSU2_TR(0x76ca58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76ca5b:{NFSU2_TR(0x76ca5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ca5c:{NFSU2_TR(0x76ca5c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76ca5e:{NFSU2_TR(0x76ca5e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ca60:{NFSU2_TR(0x76ca60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ca66;}}
}
B76ca62:L76ca62:{c.instructions+=2;NFSU2_TR(0x76ca62);
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
B76ca64:{NFSU2_TR(0x76ca64);
{goto L76cab2;}
}
B76ca66:L76ca66:{c.instructions+=3;NFSU2_TR(0x76ca66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ca69:{NFSU2_TR(0x76ca69);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
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
B76ca6c:{NFSU2_TR(0x76ca6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ca7f;}}
}
B76ca6e:L76ca6e:{c.instructions+=3;NFSU2_TR(0x76ca6e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B76ca72:{NFSU2_TR(0x76ca72);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xffull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xffull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xffull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B76ca76:{NFSU2_TR(0x76ca76);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76caa4;}}
}
B76ca78:L76ca78:{c.instructions+=4;NFSU2_TR(0x76ca78);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B76ca7a:{NFSU2_TR(0x76ca7a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76ca7c:{NFSU2_TR(0x76ca7c);
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
B76ca7d:{NFSU2_TR(0x76ca7d);
{goto L76cab2;}
}
B76ca7f:L76ca7f:{c.instructions+=12;NFSU2_TR(0x76ca7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B76ca82:{NFSU2_TR(0x76ca82);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ca83:{NFSU2_TR(0x76ca83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ca84:{NFSU2_TR(0x76ca84);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ca87:{NFSU2_TR(0x76ca87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ca8a:{NFSU2_TR(0x76ca8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ca8b:{NFSU2_TR(0x76ca8b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ca8d:{NFSU2_TR(0x76ca8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ca90:{NFSU2_TR(0x76ca90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ca91:{NFSU2_TR(0x76ca91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ca92:{NFSU2_TR(0x76ca92);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ca95:{NFSU2_TR(0x76ca95);
u8 U[4];
__builtin_memmove((U+0),gp(0x78319c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ca9bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76ca9b:L76ca9b:{c.instructions+=2;NFSU2_TR(0x76ca9b);
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
B76ca9d:{NFSU2_TR(0x76ca9d);
if(r1(R+518)){{goto L76caa4;}}
}
B76ca9f:L76ca9f:{c.instructions+=2;NFSU2_TR(0x76ca9f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B76caa2:{NFSU2_TR(0x76caa2);
if(r1(R+518)){{goto L76cab2;}}
}
B76caa4:L76caa4:{c.instructions+=1;NFSU2_TR(0x76caa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76caa9ull));
TAIL_STATIC(0x7661bau,766);
}
B76caa9:L76caa9:{c.instructions+=2;NFSU2_TR(0x76caa9);
u8 U[4];
w4(U+0,u32(0x2aull));
s4(u32(r4(R+0)),r4(U+0));
}
B76caaf:{NFSU2_TR(0x76caaf);
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
B76cab2:L76cab2:{c.instructions+=3;NFSU2_TR(0x76cab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76cab3:{NFSU2_TR(0x76cab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76cab4:{NFSU2_TR(0x76cab4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76cab5:L76cab5:{c.instructions+=1;NFSU2_TR(0x76cab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cabaull));
TAIL_STATIC(0x761e3cu,761);
}
B76caba:L76caba:{c.instructions+=3;NFSU2_TR(0x76caba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76cabd:{NFSU2_TR(0x76cabd);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76cac3:{NFSU2_TR(0x76cac3);
if(r1(R+518)){{goto L76caca;}}
}
B76cac5:L76cac5:{c.instructions+=1;NFSU2_TR(0x76cac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cacaull));
TAIL_STATIC(0x75e3d3u,75e);
}
B76caca:L76caca:{c.instructions+=4;NFSU2_TR(0x76caca);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76cace:{NFSU2_TR(0x76cace);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76cad2:{NFSU2_TR(0x76cad2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cad3:{NFSU2_TR(0x76cad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cad8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ca55u);}goto L76ca55;}
}
B76cad8:L76cad8:{c.instructions+=2;NFSU2_TR(0x76cad8);
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
B76cadb:{NFSU2_TR(0x76cadb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76cae0:L76cae0:{c.instructions+=4;NFSU2_TR(0x76cae0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cae1:{NFSU2_TR(0x76cae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76cae5:{NFSU2_TR(0x76cae5);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cae7:{NFSU2_TR(0x76cae7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76cb11;}}
}
B76cae9:L76cae9:{c.instructions+=15;NFSU2_TR(0x76cae9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76caed:{NFSU2_TR(0x76caed);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76caf1:{NFSU2_TR(0x76caf1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76caf3:{NFSU2_TR(0x76caf3);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x76caf3);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x76caf3);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B76caf5:{NFSU2_TR(0x76caf5);
__builtin_memmove((R+12),(R+0),4);
}
B76caf7:{NFSU2_TR(0x76caf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76cafb:{NFSU2_TR(0x76cafb);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x76cafb);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x76cafb);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B76cafd:{NFSU2_TR(0x76cafd);
__builtin_memmove((R+24),(R+0),4);
}
B76caff:{NFSU2_TR(0x76caff);
__builtin_memmove((R+0),(R+12),4);
}
B76cb01:{NFSU2_TR(0x76cb01);
u8 U[32];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B76cb05:{NFSU2_TR(0x76cb05);
__builtin_memmove((R+4),(R+0),4);
}
B76cb07:{NFSU2_TR(0x76cb07);
__builtin_memmove((R+0),(R+24),4);
}
B76cb09:{NFSU2_TR(0x76cb09);
u8 U[32];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B76cb0d:{NFSU2_TR(0x76cb0d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B76cb0f:{NFSU2_TR(0x76cb0f);
{goto L76cb58;}
}
B76cb11:L76cb11:{c.instructions+=4;NFSU2_TR(0x76cb11);
__builtin_memmove((R+4),(R+0),4);
}
B76cb13:{NFSU2_TR(0x76cb13);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76cb17:{NFSU2_TR(0x76cb17);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76cb1b:{NFSU2_TR(0x76cb1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76cb1f:L76cb1f:{c.instructions+=6;NFSU2_TR(0x76cb1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B76cb21:{NFSU2_TR(0x76cb21);
u8 U[50];
w1(U+0,u8(u32(u8(0x1ull))&u32(u8(0x1full))));
w8(U+1,u64(r1(R+512)));
w8(U+9,shl<u64>(r8(U+1),u64(u32(0x20ull))));
w8(U+17,u64(r4(R+12)));
w8(U+25,u64(u64(r8(U+9))|u64(r8(U+17))));
w8(U+33,shr<u64>(r8(U+25),u64(r1(U+0))));
w1(U+41,u8(u32(u8(0x21ull))-u32(r1(U+0))));
w8(U+42,shl<u64>(r8(U+25),u64(r1(U+41))));
w8(U+25,u64(u64(r8(U+33))|u64(r8(U+42))));
w4(R+12,u32(r8(U+25)));
}
B76cb23:{NFSU2_TR(0x76cb23);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B76cb25:{NFSU2_TR(0x76cb25);
u8 U[50];
w1(U+0,u8(u32(u8(0x1ull))&u32(u8(0x1full))));
w8(U+1,u64(r1(R+512)));
w8(U+9,shl<u64>(r8(U+1),u64(u32(0x20ull))));
w8(U+17,u64(r4(R+0)));
w8(U+25,u64(u64(r8(U+9))|u64(r8(U+17))));
w8(U+33,shr<u64>(r8(U+25),u64(r1(U+0))));
w1(U+41,u8(u32(u8(0x21ull))-u32(r1(U+0))));
w8(U+42,shl<u64>(r8(U+25),u64(r1(U+41))));
w8(U+25,u64(u64(r8(U+33))|u64(r8(U+42))));
w4(R+0,u32(r8(U+25)));
}
B76cb27:{NFSU2_TR(0x76cb27);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+4))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B76cb29:{NFSU2_TR(0x76cb29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cb1fu);}goto L76cb1f;}}
}
B76cb2b:L76cb2b:{c.instructions+=8;NFSU2_TR(0x76cb2b);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x76cb2b);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x76cb2b);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B76cb2d:{NFSU2_TR(0x76cb2d);
__builtin_memmove((R+24),(R+0),4);
}
B76cb2f:{NFSU2_TR(0x76cb2f);
u8 U[32];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B76cb33:{NFSU2_TR(0x76cb33);
__builtin_memmove((R+4),(R+0),4);
}
B76cb35:{NFSU2_TR(0x76cb35);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76cb39:{NFSU2_TR(0x76cb39);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+24)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B76cb3b:{NFSU2_TR(0x76cb3b);
w1(R+512,carry<u32>(r4(R+8),r4(R+4)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B76cb3d:{NFSU2_TR(0x76cb3d);
if(r1(R+512)){{goto L76cb4d;}}
}
B76cb3f:L76cb3f:{c.instructions+=2;NFSU2_TR(0x76cb3f);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76cb43:{NFSU2_TR(0x76cb43);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76cb4d;}}
}
B76cb45:L76cb45:{c.instructions+=1;NFSU2_TR(0x76cb45);
if(r1(R+512)){{goto L76cb56;}}
}
B76cb47:L76cb47:{c.instructions+=2;NFSU2_TR(0x76cb47);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76cb4b:{NFSU2_TR(0x76cb4b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76cb56;}}
}
B76cb4d:L76cb4d:{c.instructions+=3;NFSU2_TR(0x76cb4d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B76cb4e:{NFSU2_TR(0x76cb4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B76cb52:{NFSU2_TR(0x76cb52);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+4))));
w4(R+8,u32(u32(r4(U+12))-u32(r4(U+8))));
}
B76cb56:L76cb56:{c.instructions+=1;NFSU2_TR(0x76cb56);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76cb58:L76cb58:{c.instructions+=12;NFSU2_TR(0x76cb58);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B76cb5c:{NFSU2_TR(0x76cb5c);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+4))));
w4(R+8,u32(u32(r4(U+12))-u32(r4(U+8))));
}
B76cb60:{NFSU2_TR(0x76cb60);
w4(R+8,u32(0-u32(r4(R+8))));
}
B76cb62:{NFSU2_TR(0x76cb62);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B76cb64:{NFSU2_TR(0x76cb64);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+8))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x0ull)));
w4(U+4,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w1(U+9,sborrow<u32>(r4(U+4),r4(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+9))!=0)));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+10,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r4(U+10)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B76cb67:{NFSU2_TR(0x76cb67);
__builtin_memmove((R+4),(R+8),4);
}
B76cb69:{NFSU2_TR(0x76cb69);
__builtin_memmove((R+8),(R+12),4);
}
B76cb6b:{NFSU2_TR(0x76cb6b);
__builtin_memmove((R+12),(R+4),4);
}
B76cb6d:{NFSU2_TR(0x76cb6d);
__builtin_memmove((R+4),(R+0),4);
}
B76cb6f:{NFSU2_TR(0x76cb6f);
__builtin_memmove((R+0),(R+24),4);
}
B76cb71:{NFSU2_TR(0x76cb71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76cb72:{NFSU2_TR(0x76cb72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76cb75:L76cb75:{c.instructions+=17;NFSU2_TR(0x76cb75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cb76:{NFSU2_TR(0x76cb76);
__builtin_memmove((R+20),(R+16),4);
}
B76cb78:{NFSU2_TR(0x76cb78);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B76cb7b:{NFSU2_TR(0x76cb7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B76cb81:{NFSU2_TR(0x76cb81);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76cb86:{NFSU2_TR(0x76cb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76cb89:{NFSU2_TR(0x76cb89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cb8a:{NFSU2_TR(0x76cb8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cb91:{NFSU2_TR(0x76cb91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76cb94:{NFSU2_TR(0x76cb94);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B76cb97:{NFSU2_TR(0x76cb97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cb98:{NFSU2_TR(0x76cb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76cb9b:{NFSU2_TR(0x76cb9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76cb9d:{NFSU2_TR(0x76cb9d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cb9e:{NFSU2_TR(0x76cb9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cb9f:{NFSU2_TR(0x76cb9f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cba3:{NFSU2_TR(0x76cba3);
if(r1(R+518)){{goto L76cbd0;}}
}
B76cba5:L76cba5:{c.instructions+=2;NFSU2_TR(0x76cba5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cba6:{NFSU2_TR(0x76cba6);
if(r1(R+518)){{goto L76cbcc;}}
}
B76cba8:L76cba8:{c.instructions+=2;NFSU2_TR(0x76cba8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cba9:{NFSU2_TR(0x76cba9);
if(r1(R+518)){{goto L76cbc8;}}
}
B76cbab:L76cbab:{c.instructions+=2;NFSU2_TR(0x76cbab);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cbac:{NFSU2_TR(0x76cbac);
if(r1(R+518)){{goto L76cbc4;}}
}
B76cbae:L76cbae:{c.instructions+=2;NFSU2_TR(0x76cbae);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cbaf:{NFSU2_TR(0x76cbaf);
if(r1(R+518)){{goto L76cbd0;}}
}
B76cbb1:L76cbb1:{c.instructions+=3;NFSU2_TR(0x76cbb1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76cbb2:{NFSU2_TR(0x76cbb2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cbb3:{NFSU2_TR(0x76cbb3);
if(r1(R+518)){{goto L76cbbc;}}
}
B76cbb5:L76cbb5:{c.instructions+=2;NFSU2_TR(0x76cbb5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cbb6:{NFSU2_TR(0x76cbb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76cc2c;}}
}
B76cbb8:L76cbb8:{c.instructions+=2;NFSU2_TR(0x76cbb8);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cbba:{NFSU2_TR(0x76cbba);
{goto L76cbd2;}
}
B76cbbc:L76cbbc:{c.instructions+=2;NFSU2_TR(0x76cbbc);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B76cbc2:{NFSU2_TR(0x76cbc2);
{goto L76cc2c;}
}
B76cbc4:L76cbc4:{c.instructions+=2;NFSU2_TR(0x76cbc4);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cbc6:{NFSU2_TR(0x76cbc6);
{goto L76cbd2;}
}
B76cbc8:L76cbc8:{c.instructions+=2;NFSU2_TR(0x76cbc8);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cbca:{NFSU2_TR(0x76cbca);
{goto L76cbd2;}
}
B76cbcc:L76cbcc:{c.instructions+=2;NFSU2_TR(0x76cbcc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cbce:{NFSU2_TR(0x76cbce);
{goto L76cbd2;}
}
B76cbd0:L76cbd0:{c.instructions+=1;NFSU2_TR(0x76cbd0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cbd2:L76cbd2:{c.instructions+=6;NFSU2_TR(0x76cbd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76cbd3:{NFSU2_TR(0x76cbd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cbd4:{NFSU2_TR(0x76cbd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76cbd7:{NFSU2_TR(0x76cbd7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cbd8:{NFSU2_TR(0x76cbd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cbd9:{NFSU2_TR(0x76cbd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cbdeull));
TAIL_STATIC(0x767263u,767);
}
B76cbde:L76cbde:{c.instructions+=3;NFSU2_TR(0x76cbde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76cbe1:{NFSU2_TR(0x76cbe1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76cbe3:{NFSU2_TR(0x76cbe3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76cc2c;}}
}
B76cbe5:L76cbe5:{c.instructions+=3;NFSU2_TR(0x76cbe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76cbe8:{NFSU2_TR(0x76cbe8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76cbeb:{NFSU2_TR(0x76cbeb);
if(r1(R+518)){{goto L76cbfe;}}
}
B76cbed:L76cbed:{c.instructions+=2;NFSU2_TR(0x76cbed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76cbf0:{NFSU2_TR(0x76cbf0);
if(r1(R+518)){{goto L76cbfe;}}
}
B76cbf2:L76cbf2:{c.instructions+=2;NFSU2_TR(0x76cbf2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76cbf5:{NFSU2_TR(0x76cbf5);
if(r1(R+518)){{goto L76cbfe;}}
}
B76cbf7:L76cbf7:{c.instructions+=2;NFSU2_TR(0x76cbf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76cbfc:{NFSU2_TR(0x76cbfc);
{goto L76cc13;}
}
B76cbfe:L76cbfe:{c.instructions+=6;NFSU2_TR(0x76cbfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76cc02:{NFSU2_TR(0x76cc02);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76cc05:{NFSU2_TR(0x76cc05);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffe3ull))));
}
B76cc08:{NFSU2_TR(0x76cc08);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76cc0c:{NFSU2_TR(0x76cc0c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x3ull))));
}
B76cc0f:{NFSU2_TR(0x76cc0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cc13:L76cc13:{c.instructions+=10;NFSU2_TR(0x76cc13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc14:{NFSU2_TR(0x76cc14);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76cc17:{NFSU2_TR(0x76cc17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc18:{NFSU2_TR(0x76cc18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc19:{NFSU2_TR(0x76cc19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc1a:{NFSU2_TR(0x76cc1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B76cc1e:{NFSU2_TR(0x76cc1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc1f:{NFSU2_TR(0x76cc1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B76cc23:{NFSU2_TR(0x76cc23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc24:{NFSU2_TR(0x76cc24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cc29ull));
TAIL_STATIC(0x766fbeu,766);
}
B76cc29:L76cc29:{c.instructions+=1;NFSU2_TR(0x76cc29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B76cc2c:L76cc2c:{c.instructions+=3;NFSU2_TR(0x76cc2c);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc31:{NFSU2_TR(0x76cc31);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76cc35:{NFSU2_TR(0x76cc35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cc3aull));
TAIL_STATIC(0x7676a4u,767);
}
B76cc3a:L76cc3a:{c.instructions+=4;NFSU2_TR(0x76cc3a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76cc3d:{NFSU2_TR(0x76cc3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76cc3e:{NFSU2_TR(0x76cc3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76cc3f:{NFSU2_TR(0x76cc3f);
if(r1(R+518)){{goto L76cc55;}}
}
B76cc41:L76cc41:{c.instructions+=2;NFSU2_TR(0x76cc41);
u8 U[8];
__builtin_memmove((U+0),gp(0x81ace0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76cc48:{NFSU2_TR(0x76cc48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76cc55;}}
}
B76cc4a:L76cc4a:{c.instructions+=2;NFSU2_TR(0x76cc4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc4b:{NFSU2_TR(0x76cc4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cc50ull));
TAIL_STATIC(0x727e6bu,727);
}
B76cc50:L76cc50:{c.instructions+=3;NFSU2_TR(0x76cc50);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76cc52:{NFSU2_TR(0x76cc52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76cc53:{NFSU2_TR(0x76cc53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76cc5d;}}
}
B76cc55:L76cc55:{c.instructions+=2;NFSU2_TR(0x76cc55);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76cc57:{NFSU2_TR(0x76cc57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cc5cull));
TAIL_STATIC(0x767485u,767);
}
B76cc5c:L76cc5c:{c.instructions+=1;NFSU2_TR(0x76cc5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76cc5d:L76cc5d:{c.instructions+=3;NFSU2_TR(0x76cc5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76cc64:{NFSU2_TR(0x76cc64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76cc67:{NFSU2_TR(0x76cc67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cc6cull));
TAIL_STATIC(0x76115eu,761);
}
B76cc6c:L76cc6c:{c.instructions+=6;NFSU2_TR(0x76cc6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76cc6d:{NFSU2_TR(0x76cc6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76cc6e:{NFSU2_TR(0x76cc6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76cc6f:{NFSU2_TR(0x76cc6f);
__builtin_memmove((R+16),(R+20),4);
}
B76cc71:{NFSU2_TR(0x76cc71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76cc72:{NFSU2_TR(0x76cc72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76cc73:L76cc73:{c.instructions+=9;NFSU2_TR(0x76cc73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc74:{NFSU2_TR(0x76cc74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc75:{NFSU2_TR(0x76cc75);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76cc79:{NFSU2_TR(0x76cc79);
__asm__ volatile(".byte 0xd9,0xfc":::"memory");
}
B76cc7b:{NFSU2_TR(0x76cc7b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76cc7f:{NFSU2_TR(0x76cc7f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76cc83:{NFSU2_TR(0x76cc83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76cc84:{NFSU2_TR(0x76cc84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76cc85:{NFSU2_TR(0x76cc85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76cc86:L76cc86:{c.instructions+=23;NFSU2_TR(0x76cc86);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc87:{NFSU2_TR(0x76cc87);
__builtin_memmove((R+20),(R+16),4);
}
B76cc89:{NFSU2_TR(0x76cc89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B76cc8c:{NFSU2_TR(0x76cc8c);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76cc91:{NFSU2_TR(0x76cc91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76cc94:{NFSU2_TR(0x76cc94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc95:{NFSU2_TR(0x76cc95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc96:{NFSU2_TR(0x76cc96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cc99:{NFSU2_TR(0x76cc99);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76cc9b:{NFSU2_TR(0x76cc9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cc9c:{NFSU2_TR(0x76cc9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76cc9f:{NFSU2_TR(0x76cc9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76cca2:{NFSU2_TR(0x76cca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cca5:{NFSU2_TR(0x76cca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cca8:{NFSU2_TR(0x76cca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76ccaf:{NFSU2_TR(0x76ccaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ccb2:{NFSU2_TR(0x76ccb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ccb5:{NFSU2_TR(0x76ccb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ccb8:{NFSU2_TR(0x76ccb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ccbb:{NFSU2_TR(0x76ccbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ccbe:{NFSU2_TR(0x76ccbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ccc1:{NFSU2_TR(0x76ccc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ccc4:{NFSU2_TR(0x76ccc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ccc7:L76ccc7:{c.instructions+=3;NFSU2_TR(0x76ccc7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B76ccc9:{NFSU2_TR(0x76ccc9);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cccc:{NFSU2_TR(0x76cccc);
if(r1(R+518)){{goto L76ccdd;}}
}
B76ccce:L76ccce:{c.instructions+=2;NFSU2_TR(0x76ccce);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76ccd1:{NFSU2_TR(0x76ccd1);
if(r1(R+518)){{goto L76ccdd;}}
}
B76ccd3:L76ccd3:{c.instructions+=2;NFSU2_TR(0x76ccd3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76ccd6:{NFSU2_TR(0x76ccd6);
if(r1(R+518)){{goto L76ccdd;}}
}
B76ccd8:L76ccd8:{c.instructions+=2;NFSU2_TR(0x76ccd8);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76ccdb:{NFSU2_TR(0x76ccdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76cce0;}}
}
B76ccdd:L76ccdd:{c.instructions+=2;NFSU2_TR(0x76ccdd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76ccde:{NFSU2_TR(0x76ccde);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ccc7u);}goto L76ccc7;}
}
B76cce0:L76cce0:{c.instructions+=4;NFSU2_TR(0x76cce0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B76cce2:{NFSU2_TR(0x76cce2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76cce3:{NFSU2_TR(0x76cce3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76cce6:{NFSU2_TR(0x76cce6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76cf5f;}}
}
B76ccec:L76ccec:{c.instructions+=1;NFSU2_TR(0x76ccec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x76d090ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B76ccf3:L76ccf3:{c.instructions+=2;NFSU2_TR(0x76ccf3);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x31ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x31ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B76ccf6:{NFSU2_TR(0x76ccf6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76cd04;}}
}
B76ccf8:L76ccf8:{c.instructions+=2;NFSU2_TR(0x76ccf8);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76ccfb:{NFSU2_TR(0x76ccfb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76cd04;}}
}
B76ccfd:L76ccfd:{c.instructions+=2;NFSU2_TR(0x76ccfd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ccff:{NFSU2_TR(0x76ccff);
{goto L76cf1e;}
}
B76cd04:L76cd04:{c.instructions+=2;NFSU2_TR(0x76cd04);
u8 U[2];
__builtin_memmove((U+0),gp(0x81aa54),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cd0a:{NFSU2_TR(0x76cd0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76cd13;}}
}
B76cd0c:L76cd0c:{c.instructions+=2;NFSU2_TR(0x76cd0c);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cd0e:{NFSU2_TR(0x76cd0e);
{goto L76cf55;}
}
B76cd13:L76cd13:{c.instructions+=3;NFSU2_TR(0x76cd13);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B76cd16:{NFSU2_TR(0x76cd16);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2bull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cd19:{NFSU2_TR(0x76cd19);
if(r1(R+518)){{goto L76cd3d;}}
}
B76cd1b:L76cd1b:{c.instructions+=3;NFSU2_TR(0x76cd1b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76cd1c:{NFSU2_TR(0x76cd1c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cd1d:{NFSU2_TR(0x76cd1d);
if(r1(R+518)){{goto L76cd31;}}
}
B76cd1f:L76cd1f:{c.instructions+=2;NFSU2_TR(0x76cd1f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cd22:{NFSU2_TR(0x76cd22);
if(r1(R+518)){{goto L76cdca;}}
}
B76cd28:L76cd28:{c.instructions+=3;NFSU2_TR(0x76cd28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cd2b:{NFSU2_TR(0x76cd2b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B76cd2c:{NFSU2_TR(0x76cd2c);
{goto L76cedc;}
}
B76cd31:L76cd31:{c.instructions+=4;NFSU2_TR(0x76cd31);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cd33:{NFSU2_TR(0x76cd33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76cd34:{NFSU2_TR(0x76cd34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x8000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76cd3b:{NFSU2_TR(0x76cd3b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cce0u);}goto L76cce0;}
}
B76cd3d:L76cd3d:{c.instructions+=4;NFSU2_TR(0x76cd3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76cd41:{NFSU2_TR(0x76cd41);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cd43:{NFSU2_TR(0x76cd43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76cd44:{NFSU2_TR(0x76cd44);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cce0u);}goto L76cce0;}
}
B76cd46:L76cd46:{c.instructions+=5;NFSU2_TR(0x76cd46);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76cd48:{NFSU2_TR(0x76cd48);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76cd49:{NFSU2_TR(0x76cd49);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x31ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x31ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B76cd4c:{NFSU2_TR(0x76cd4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cd4f:{NFSU2_TR(0x76cd4f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76cd56;}}
}
B76cd51:L76cd51:{c.instructions+=2;NFSU2_TR(0x76cd51);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cd54:{NFSU2_TR(0x76cd54);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ccfdu);}goto L76ccfd;}}
}
B76cd56:L76cd56:{c.instructions+=2;NFSU2_TR(0x76cd56);
u8 U[2];
__builtin_memmove((U+0),gp(0x81aa54),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cd5c:{NFSU2_TR(0x76cd5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76cd65;}}
}
B76cd5e:L76cd5e:{c.instructions+=2;NFSU2_TR(0x76cd5e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cd60:{NFSU2_TR(0x76cd60);
{goto L76cf55;}
}
B76cd65:L76cd65:{c.instructions+=2;NFSU2_TR(0x76cd65);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2bull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cd68:{NFSU2_TR(0x76cd68);
if(r1(R+518)){{goto L76cd9f;}}
}
B76cd6a:L76cd6a:{c.instructions+=2;NFSU2_TR(0x76cd6a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cd6d:{NFSU2_TR(0x76cd6d);
if(r1(R+518)){{goto L76cd9f;}}
}
B76cd6f:L76cd6f:{c.instructions+=2;NFSU2_TR(0x76cd6f);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cd72:{NFSU2_TR(0x76cd72);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cce0u);}goto L76cce0;}}
}
B76cd78:L76cd78:{c.instructions+=2;NFSU2_TR(0x76cd78);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x43ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x43ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cd7b:{NFSU2_TR(0x76cd7b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76ced8;}}
}
B76cd81:L76cd81:{c.instructions+=2;NFSU2_TR(0x76cd81);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x45ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x45ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cd84:{NFSU2_TR(0x76cd84);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76cd98;}}
}
B76cd86:L76cd86:{c.instructions+=2;NFSU2_TR(0x76cd86);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x63ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x63ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cd89:{NFSU2_TR(0x76cd89);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76ced8;}}
}
B76cd8f:L76cd8f:{c.instructions+=2;NFSU2_TR(0x76cd8f);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x65ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x65ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cd92:{NFSU2_TR(0x76cd92);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76ced8;}}
}
B76cd98:L76cd98:{c.instructions+=2;NFSU2_TR(0x76cd98);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cd9a:{NFSU2_TR(0x76cd9a);
{goto L76cf55;}
}
B76cd9f:L76cd9f:{c.instructions+=3;NFSU2_TR(0x76cd9f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B76cda0:{NFSU2_TR(0x76cda0);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cda2:{NFSU2_TR(0x76cda2);
{goto L76cf55;}
}
B76cda7:L76cda7:{c.instructions+=2;NFSU2_TR(0x76cda7);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x31ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x31ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B76cdaa:{NFSU2_TR(0x76cdaa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76cdb5;}}
}
B76cdac:L76cdac:{c.instructions+=2;NFSU2_TR(0x76cdac);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cdaf:{NFSU2_TR(0x76cdaf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ccfdu);}goto L76ccfd;}}
}
B76cdb5:L76cdb5:{c.instructions+=2;NFSU2_TR(0x76cdb5);
u8 U[2];
__builtin_memmove((U+0),gp(0x81aa54),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cdbb:{NFSU2_TR(0x76cdbb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cd0cu);}goto L76cd0c;}}
}
B76cdc1:L76cdc1:{c.instructions+=2;NFSU2_TR(0x76cdc1);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cdc4:{NFSU2_TR(0x76cdc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76cf2a;}}
}
B76cdca:L76cdca:{c.instructions+=3;NFSU2_TR(0x76cdca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76cdcc:{NFSU2_TR(0x76cdcc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76cdcd:{NFSU2_TR(0x76cdcd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cce0u);}goto L76cce0;}
}
B76cdd2:L76cdd2:{c.instructions+=2;NFSU2_TR(0x76cdd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76cdd9:{NFSU2_TR(0x76cdd9);
{goto L76cdf2;}
}
B76cddb:L76cddb:{c.instructions+=2;NFSU2_TR(0x76cddb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x19ull))));
}
B76cddf:{NFSU2_TR(0x76cddf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76cdec;}}
}
B76cde1:L76cde1:{c.instructions+=5;NFSU2_TR(0x76cde1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76cde4:{NFSU2_TR(0x76cde4);
w1(R+512,u8((r1(R+12))<(u8(0x30ull))));
w1(R+12,u8(u32(r1(R+12))-u32(u8(0x30ull))));
}
B76cde7:{NFSU2_TR(0x76cde7);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B76cde9:{NFSU2_TR(0x76cde9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76cdea:{NFSU2_TR(0x76cdea);
{goto L76cdef;}
}
B76cdec:L76cdec:{c.instructions+=1;NFSU2_TR(0x76cdec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76cdef:L76cdef:{c.instructions+=2;NFSU2_TR(0x76cdef);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B76cdf1:{NFSU2_TR(0x76cdf1);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76cdf2:L76cdf2:{c.instructions+=3;NFSU2_TR(0x76cdf2);
w4(R+0,u32(r1(R+12)));
}
B76cdf5:{NFSU2_TR(0x76cdf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cdf6:{NFSU2_TR(0x76cdf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cdfbull));
TAIL_STATIC(0x75df39u,75d);
}
B76cdfb:L76cdfb:{c.instructions+=3;NFSU2_TR(0x76cdfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76cdfd:{NFSU2_TR(0x76cdfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76cdfe:{NFSU2_TR(0x76cdfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cddbu);}goto L76cddb;}}
}
B76ce00:L76ce00:{c.instructions+=2;NFSU2_TR(0x76ce00);
u8 U[2];
__builtin_memmove((U+0),gp(0x81aa54),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76ce06:{NFSU2_TR(0x76ce06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ce4e;}}
}
B76ce08:L76ce08:{c.instructions+=1;NFSU2_TR(0x76ce08);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cd5eu);}goto L76cd5e;}
}
B76ce0d:L76ce0d:{c.instructions+=6;NFSU2_TR(0x76ce0d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76ce0f:{NFSU2_TR(0x76ce0f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76ce10:{NFSU2_TR(0x76ce10);
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
B76ce14:{NFSU2_TR(0x76ce14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ce17:{NFSU2_TR(0x76ce17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ce1a:{NFSU2_TR(0x76ce1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ce40;}}
}
B76ce1c:L76ce1c:{c.instructions+=1;NFSU2_TR(0x76ce1c);
{goto L76ce24;}
}
B76ce1e:L76ce1e:{c.instructions+=3;NFSU2_TR(0x76ce1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ce21:{NFSU2_TR(0x76ce21);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B76ce23:{NFSU2_TR(0x76ce23);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76ce24:L76ce24:{c.instructions+=2;NFSU2_TR(0x76ce24);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(U+3))<(u8(0x30ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x30ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B76ce27:{NFSU2_TR(0x76ce27);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ce1eu);}goto L76ce1e;}}
}
B76ce29:L76ce29:{c.instructions+=1;NFSU2_TR(0x76ce29);
{goto L76ce40;}
}
B76ce2b:L76ce2b:{c.instructions+=2;NFSU2_TR(0x76ce2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x19ull))));
}
B76ce2f:{NFSU2_TR(0x76ce2f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76ce3d;}}
}
B76ce31:L76ce31:{c.instructions+=5;NFSU2_TR(0x76ce31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ce34:{NFSU2_TR(0x76ce34);
w1(R+512,u8((r1(R+12))<(u8(0x30ull))));
w1(R+12,u8(u32(r1(R+12))-u32(u8(0x30ull))));
}
B76ce37:{NFSU2_TR(0x76ce37);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B76ce39:{NFSU2_TR(0x76ce39);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76ce3a:{NFSU2_TR(0x76ce3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ce3d:L76ce3d:{c.instructions+=2;NFSU2_TR(0x76ce3d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B76ce3f:{NFSU2_TR(0x76ce3f);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76ce40:L76ce40:{c.instructions+=3;NFSU2_TR(0x76ce40);
w4(R+0,u32(r1(R+12)));
}
B76ce43:{NFSU2_TR(0x76ce43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ce44:{NFSU2_TR(0x76ce44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ce49ull));
TAIL_STATIC(0x75df39u,75d);
}
B76ce49:L76ce49:{c.instructions+=3;NFSU2_TR(0x76ce49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76ce4b:{NFSU2_TR(0x76ce4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ce4c:{NFSU2_TR(0x76ce4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ce2bu);}goto L76ce2b;}}
}
B76ce4e:L76ce4e:{c.instructions+=2;NFSU2_TR(0x76ce4e);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2bull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76ce51:{NFSU2_TR(0x76ce51);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cd9fu);}goto L76cd9f;}}
}
B76ce57:L76ce57:{c.instructions+=2;NFSU2_TR(0x76ce57);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76ce5a:{NFSU2_TR(0x76ce5a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cd9fu);}goto L76cd9f;}}
}
B76ce60:L76ce60:{c.instructions+=1;NFSU2_TR(0x76ce60);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cd78u);}goto L76cd78;}
}
B76ce65:L76ce65:{c.instructions+=4;NFSU2_TR(0x76ce65);
w4(R+0,u32(r1(R+12)));
}
B76ce68:{NFSU2_TR(0x76ce68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ce69:{NFSU2_TR(0x76ce69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76ce70:{NFSU2_TR(0x76ce70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ce75ull));
TAIL_STATIC(0x75df39u,75d);
}
B76ce75:L76ce75:{c.instructions+=3;NFSU2_TR(0x76ce75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76ce77:{NFSU2_TR(0x76ce77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ce78:{NFSU2_TR(0x76ce78);
if(r1(R+518)){{goto L76cf2a;}}
}
B76ce7e:L76ce7e:{c.instructions+=2;NFSU2_TR(0x76ce7e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ce80:{NFSU2_TR(0x76ce80);
{goto L76cf1e;}
}
B76ce85:L76ce85:{c.instructions+=4;NFSU2_TR(0x76ce85);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x31ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x31ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B76ce88:{NFSU2_TR(0x76ce88);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ce8b:{NFSU2_TR(0x76ce8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ce8e:{NFSU2_TR(0x76ce8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76ce99;}}
}
B76ce90:L76ce90:{c.instructions+=2;NFSU2_TR(0x76ce90);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76ce93:{NFSU2_TR(0x76ce93);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76cf1c;}}
}
B76ce99:L76ce99:{c.instructions+=3;NFSU2_TR(0x76ce99);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B76ce9c:{NFSU2_TR(0x76ce9c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2bull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76ce9f:{NFSU2_TR(0x76ce9f);
if(r1(R+518)){{goto L76cf53;}}
}
B76cea5:L76cea5:{c.instructions+=3;NFSU2_TR(0x76cea5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76cea6:{NFSU2_TR(0x76cea6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cea7:{NFSU2_TR(0x76cea7);
if(r1(R+518)){{goto L76cf47;}}
}
B76cead:L76cead:{c.instructions+=2;NFSU2_TR(0x76cead);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76ceb0:{NFSU2_TR(0x76ceb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76cf6d;}}
}
B76ceb6:L76ceb6:{c.instructions+=2;NFSU2_TR(0x76ceb6);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ceb8:{NFSU2_TR(0x76ceb8);
{goto L76cf55;}
}
B76cebd:L76cebd:{c.instructions+=2;NFSU2_TR(0x76cebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76cec4:{NFSU2_TR(0x76cec4);
{goto L76cec9;}
}
B76cec6:L76cec6:{c.instructions+=2;NFSU2_TR(0x76cec6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B76cec8:{NFSU2_TR(0x76cec8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76cec9:L76cec9:{c.instructions+=2;NFSU2_TR(0x76cec9);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cecc:{NFSU2_TR(0x76cecc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cec6u);}goto L76cec6;}}
}
B76cece:L76cece:{c.instructions+=2;NFSU2_TR(0x76cece);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x31ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x31ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B76ced1:{NFSU2_TR(0x76ced1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76ced8;}}
}
B76ced3:L76ced3:{c.instructions+=2;NFSU2_TR(0x76ced3);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76ced6:{NFSU2_TR(0x76ced6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76cf1c;}}
}
B76ced8:L76ced8:{c.instructions+=1;NFSU2_TR(0x76ced8);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B76ced9:L76ced9:{c.instructions+=1;NFSU2_TR(0x76ced9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cedc:L76cedc:{c.instructions+=4;NFSU2_TR(0x76cedc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76cee0:{NFSU2_TR(0x76cee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76cee3:{NFSU2_TR(0x76cee3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76cee5:{NFSU2_TR(0x76cee5);
if(r1(R+518)){TAIL_STATIC(0x76d03bu,76d);}
}
B76ceeb:L76ceeb:{c.instructions+=4;NFSU2_TR(0x76ceeb);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ceed:{NFSU2_TR(0x76ceed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76ceee:{NFSU2_TR(0x76ceee);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76cef1:{NFSU2_TR(0x76cef1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76cf03;}}
}
B76cef3:L76cef3:{c.instructions+=2;NFSU2_TR(0x76cef3);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(U+5),u8(0x5ull)));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
}
B76cef7:{NFSU2_TR(0x76cef7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76cefc;}}
}
B76cef9:L76cef9:{c.instructions+=1;NFSU2_TR(0x76cef9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76cefc:L76cefc:{c.instructions+=3;NFSU2_TR(0x76cefc);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B76cefd:{NFSU2_TR(0x76cefd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76cf00:{NFSU2_TR(0x76cf00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cf03:L76cf03:{c.instructions+=2;NFSU2_TR(0x76cf03);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76cf07:{NFSU2_TR(0x76cf07);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76d062u,76d);}
}
B76cf0d:L76cf0d:{c.instructions+=1;NFSU2_TR(0x76cf0d);
{goto L76cfd7;}
}
B76cf12:L76cf12:{c.instructions+=2;NFSU2_TR(0x76cf12);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x31ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x31ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B76cf15:{NFSU2_TR(0x76cf15);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76cf25;}}
}
B76cf17:L76cf17:{c.instructions+=2;NFSU2_TR(0x76cf17);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cf1a:{NFSU2_TR(0x76cf1a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76cf25;}}
}
B76cf1c:L76cf1c:{c.instructions+=1;NFSU2_TR(0x76cf1c);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cf1e:L76cf1e:{c.instructions+=3;NFSU2_TR(0x76cf1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76cf1f:{NFSU2_TR(0x76cf1f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B76cf20:{NFSU2_TR(0x76cf20);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cce0u);}goto L76cce0;}
}
B76cf25:L76cf25:{c.instructions+=2;NFSU2_TR(0x76cf25);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76cf28:{NFSU2_TR(0x76cf28);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ceb6u);}goto L76ceb6;}}
}
B76cf2a:L76cf2a:{c.instructions+=2;NFSU2_TR(0x76cf2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76cf2d:{NFSU2_TR(0x76cf2d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ced9u);}goto L76ced9;}
}
B76cf2f:L76cf2f:{c.instructions+=2;NFSU2_TR(0x76cf2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76cf33:{NFSU2_TR(0x76cf33);
if(r1(R+518)){{goto L76cf5b;}}
}
B76cf35:L76cf35:{c.instructions+=5;NFSU2_TR(0x76cf35);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B76cf38:{NFSU2_TR(0x76cf38);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2bull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cf3b:{NFSU2_TR(0x76cf3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B76cf3e:{NFSU2_TR(0x76cf3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cf41:{NFSU2_TR(0x76cf41);
if(r1(R+518)){{goto L76cf53;}}
}
B76cf43:L76cf43:{c.instructions+=3;NFSU2_TR(0x76cf43);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76cf44:{NFSU2_TR(0x76cf44);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76cf45:{NFSU2_TR(0x76cf45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76cf6d;}}
}
B76cf47:L76cf47:{c.instructions+=4;NFSU2_TR(0x76cf47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76cf4b:{NFSU2_TR(0x76cf4b);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cf4d:{NFSU2_TR(0x76cf4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76cf4e:{NFSU2_TR(0x76cf4e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cce0u);}goto L76cce0;}
}
B76cf53:L76cf53:{c.instructions+=1;NFSU2_TR(0x76cf53);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cf55:L76cf55:{c.instructions+=2;NFSU2_TR(0x76cf55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76cf56:{NFSU2_TR(0x76cf56);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cce0u);}goto L76cce0;}
}
B76cf5b:L76cf5b:{c.instructions+=3;NFSU2_TR(0x76cf5b);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cf5d:{NFSU2_TR(0x76cf5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76cf5e:{NFSU2_TR(0x76cf5e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B76cf5f:L76cf5f:{c.instructions+=2;NFSU2_TR(0x76cf5f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76cf62:{NFSU2_TR(0x76cf62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cce0u);}goto L76cce0;}}
}
B76cf68:L76cf68:{c.instructions+=1;NFSU2_TR(0x76cf68);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ced9u);}goto L76ced9;}
}
B76cf6d:L76cf6d:{c.instructions+=3;NFSU2_TR(0x76cf6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cf70:{NFSU2_TR(0x76cf70);
__builtin_memmove((R+28),(R+4),4);
}
B76cf72:{NFSU2_TR(0x76cf72);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cedcu);}goto L76cedc;}
}
B76cf77:L76cf77:{c.instructions+=4;NFSU2_TR(0x76cf77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cf7a:{NFSU2_TR(0x76cf7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76cf81:{NFSU2_TR(0x76cf81);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76cf83:{NFSU2_TR(0x76cf83);
{goto L76cf9a;}
}
B76cf85:L76cf85:{c.instructions+=5;NFSU2_TR(0x76cf85);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B76cf88:{NFSU2_TR(0x76cf88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76cf8b:{NFSU2_TR(0x76cf8b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B76cf8f:{NFSU2_TR(0x76cf8f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x1450ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1450ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1450ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76cf95:{NFSU2_TR(0x76cf95);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76cfaa;}}
}
B76cf97:L76cf97:{c.instructions+=2;NFSU2_TR(0x76cf97);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B76cf99:{NFSU2_TR(0x76cf99);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76cf9a:L76cf9a:{c.instructions+=3;NFSU2_TR(0x76cf9a);
w4(R+0,u32(r1(R+12)));
}
B76cf9d:{NFSU2_TR(0x76cf9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cf9e:{NFSU2_TR(0x76cf9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cfa3ull));
TAIL_STATIC(0x75df39u,75d);
}
B76cfa3:L76cfa3:{c.instructions+=3;NFSU2_TR(0x76cfa3);
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
B76cfa5:{NFSU2_TR(0x76cfa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76cfa6:{NFSU2_TR(0x76cfa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cf85u);}goto L76cf85;}}
}
B76cfa8:L76cfa8:{c.instructions+=1;NFSU2_TR(0x76cfa8);
{goto L76cfaf;}
}
B76cfaa:L76cfaa:{c.instructions+=1;NFSU2_TR(0x76cfaa);
w4(R+24,u32(0x1451ull));
}
B76cfaf:L76cfaf:{c.instructions+=3;NFSU2_TR(0x76cfaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76cfb2:{NFSU2_TR(0x76cfb2);
w4(R+0,u32(r1(R+12)));
}
B76cfb5:{NFSU2_TR(0x76cfb5);
{goto L76cfbd;}
}
B76cfb7:L76cfb7:{c.instructions+=3;NFSU2_TR(0x76cfb7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76cfb9:{NFSU2_TR(0x76cfb9);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76cfba:{NFSU2_TR(0x76cfba);
w4(R+0,u32(r1(R+0)));
}
B76cfbd:L76cfbd:{c.instructions+=2;NFSU2_TR(0x76cfbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cfbe:{NFSU2_TR(0x76cfbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cfc3ull));
TAIL_STATIC(0x75df39u,75d);
}
B76cfc3:L76cfc3:{c.instructions+=3;NFSU2_TR(0x76cfc3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76cfc5:{NFSU2_TR(0x76cfc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76cfc6:{NFSU2_TR(0x76cfc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cfb7u);}goto L76cfb7;}}
}
B76cfc8:L76cfc8:{c.instructions+=3;NFSU2_TR(0x76cfc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76cfcb:{NFSU2_TR(0x76cfcb);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B76cfcc:{NFSU2_TR(0x76cfcc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cedcu);}goto L76cedc;}
}
B76cfd1:L76cfd1:{c.instructions+=2;NFSU2_TR(0x76cfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76cfd4:{NFSU2_TR(0x76cfd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76cfd7:L76cfd7:{c.instructions+=3;NFSU2_TR(0x76cfd7);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B76cfd8:{NFSU2_TR(0x76cfd8);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76cfdb:{NFSU2_TR(0x76cfdb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76cfd1u);}goto L76cfd1;}}
}
B76cfdd:L76cfdd:{c.instructions+=6;NFSU2_TR(0x76cfdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76cfe0:{NFSU2_TR(0x76cfe0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cfe1:{NFSU2_TR(0x76cfe1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76cfe4:{NFSU2_TR(0x76cfe4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76cfe7:{NFSU2_TR(0x76cfe7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76cfe8:{NFSU2_TR(0x76cfe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76cfedull));
TAIL_STATIC(0x76de65u,76d);
}
B76cfed:L76cfed:{c.instructions+=5;NFSU2_TR(0x76cfed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76cff0:{NFSU2_TR(0x76cff0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76cff2:{NFSU2_TR(0x76cff2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76cff5:{NFSU2_TR(0x76cff5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B76cff8:{NFSU2_TR(0x76cff8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76cffc;}}
}
B76cffa:L76cffa:{c.instructions+=1;NFSU2_TR(0x76cffa);
w4(R+0,u32(0-u32(r4(R+0))));
}
B76cffc:L76cffc:{c.instructions+=2;NFSU2_TR(0x76cffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B76cfff:{NFSU2_TR(0x76cfff);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
TAIL_STATIC(0x76d002u,76d);
}
XIT:NFSU2_TR_EXIT(0x76c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
