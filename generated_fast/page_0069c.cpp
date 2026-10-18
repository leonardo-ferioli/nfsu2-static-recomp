#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x69c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x69c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_69c(u8* __restrict R,Cpu& c);
u32 page_69c(Cpu& c){return body_69c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_69c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x69c003:goto L69c003;
case 0x69c005:goto L69c005;
case 0x69c008:goto L69c008;
case 0x69c00c:c.instructions+=1;goto B69c00c;
case 0x69c00e:goto L69c00e;
case 0x69c010:c.instructions+=2;goto B69c010;
case 0x69c013:c.instructions+=1;goto B69c013;
case 0x69c015:goto L69c015;
case 0x69c018:c.instructions+=1;goto B69c018;
case 0x69c01b:goto L69c01b;
case 0x69c01d:c.instructions+=4;goto B69c01d;
case 0x69c020:c.instructions+=3;goto B69c020;
case 0x69c023:c.instructions+=2;goto B69c023;
case 0x69c026:c.instructions+=1;goto B69c026;
case 0x69c02c:goto L69c02c;
case 0x69c02f:c.instructions+=2;goto B69c02f;
case 0x69c033:c.instructions+=1;goto B69c033;
case 0x69c035:goto L69c035;
case 0x69c037:c.instructions+=1;goto B69c037;
case 0x69c03a:goto L69c03a;
case 0x69c03e:c.instructions+=1;goto B69c03e;
case 0x69c040:goto L69c040;
case 0x69c043:c.instructions+=2;goto B69c043;
case 0x69c047:c.instructions+=1;goto B69c047;
case 0x69c049:goto L69c049;
case 0x69c04d:c.instructions+=1;goto B69c04d;
case 0x69c04f:goto L69c04f;
case 0x69c052:c.instructions+=3;goto B69c052;
case 0x69c055:c.instructions+=2;goto B69c055;
case 0x69c057:c.instructions+=1;goto B69c057;
case 0x69c05c:goto L69c05c;
case 0x69c05e:c.instructions+=1;goto B69c05e;
case 0x69c060:goto L69c060;
case 0x69c064:c.instructions+=1;goto B69c064;
case 0x69c066:goto L69c066;
case 0x69c067:c.instructions+=4;goto B69c067;
case 0x69c06a:c.instructions+=3;goto B69c06a;
case 0x69c06c:c.instructions+=2;goto B69c06c;
case 0x69c06d:c.instructions+=1;goto B69c06d;
case 0x69c072:goto L69c072;
case 0x69c074:c.instructions+=1;goto B69c074;
case 0x69c076:goto L69c076;
case 0x69c079:goto L69c079;
case 0x69c07c:c.instructions+=3;goto B69c07c;
case 0x69c07d:c.instructions+=2;goto B69c07d;
case 0x69c080:c.instructions+=1;goto B69c080;
case 0x69c082:goto L69c082;
case 0x69c085:c.instructions+=2;goto B69c085;
case 0x69c088:c.instructions+=1;goto B69c088;
case 0x69c08a:goto L69c08a;
case 0x69c08d:c.instructions+=1;goto B69c08d;
case 0x69c090:goto L69c090;
case 0x69c091:c.instructions+=3;goto B69c091;
case 0x69c094:c.instructions+=2;goto B69c094;
case 0x69c097:c.instructions+=1;goto B69c097;
case 0x69c099:goto L69c099;
case 0x69c09d:c.instructions+=1;goto B69c09d;
case 0x69c0a3:goto L69c0a3;
case 0x69c0a5:c.instructions+=8;goto B69c0a5;
case 0x69c0a8:c.instructions+=7;goto B69c0a8;
case 0x69c0aa:c.instructions+=6;goto B69c0aa;
case 0x69c0af:c.instructions+=5;goto B69c0af;
case 0x69c0b1:c.instructions+=4;goto B69c0b1;
case 0x69c0b3:c.instructions+=3;goto B69c0b3;
case 0x69c0b4:c.instructions+=2;goto B69c0b4;
case 0x69c0b6:c.instructions+=1;goto B69c0b6;
case 0x69c0bb:goto L69c0bb;
case 0x69c0be:c.instructions+=1;goto B69c0be;
case 0x69c0c4:goto L69c0c4;
case 0x69c0c7:c.instructions+=4;goto B69c0c7;
case 0x69c0ca:c.instructions+=3;goto B69c0ca;
case 0x69c0cb:c.instructions+=2;goto B69c0cb;
case 0x69c0cd:c.instructions+=1;goto B69c0cd;
case 0x69c0d2:goto L69c0d2;
case 0x69c0d5:c.instructions+=6;goto B69c0d5;
case 0x69c0d8:c.instructions+=5;goto B69c0d8;
case 0x69c0db:c.instructions+=4;goto B69c0db;
case 0x69c0dd:c.instructions+=3;goto B69c0dd;
case 0x69c0e0:c.instructions+=2;goto B69c0e0;
case 0x69c0e3:c.instructions+=1;goto B69c0e3;
case 0x69c0e6:goto L69c0e6;
case 0x69c0ea:c.instructions+=1;goto B69c0ea;
case 0x69c0f0:goto L69c0f0;
case 0x69c0f3:c.instructions+=3;goto B69c0f3;
case 0x69c0f6:c.instructions+=2;goto B69c0f6;
case 0x69c0f9:c.instructions+=1;goto B69c0f9;
case 0x69c0ff:goto L69c0ff;
case 0x69c103:c.instructions+=1;goto B69c103;
case 0x69c105:goto L69c105;
case 0x69c108:c.instructions+=3;goto B69c108;
case 0x69c109:c.instructions+=2;goto B69c109;
case 0x69c10c:c.instructions+=1;goto B69c10c;
case 0x69c111:goto L69c111;
case 0x69c113:c.instructions+=1;goto B69c113;
case 0x69c115:goto L69c115;
case 0x69c119:c.instructions+=1;goto B69c119;
case 0x69c11b:goto L69c11b;
case 0x69c11e:c.instructions+=4;goto B69c11e;
case 0x69c11f:c.instructions+=3;goto B69c11f;
case 0x69c122:c.instructions+=2;goto B69c122;
case 0x69c123:c.instructions+=1;goto B69c123;
case 0x69c128:goto L69c128;
case 0x69c12a:c.instructions+=1;goto B69c12a;
case 0x69c12c:goto L69c12c;
case 0x69c130:c.instructions+=2;goto B69c130;
case 0x69c134:c.instructions+=1;goto B69c134;
case 0x69c136:goto L69c136;
case 0x69c139:c.instructions+=14;goto B69c139;
case 0x69c13d:c.instructions+=13;goto B69c13d;
case 0x69c140:c.instructions+=12;goto B69c140;
case 0x69c144:c.instructions+=11;goto B69c144;
case 0x69c147:c.instructions+=10;goto B69c147;
case 0x69c14a:c.instructions+=9;goto B69c14a;
case 0x69c14c:c.instructions+=8;goto B69c14c;
case 0x69c14f:c.instructions+=7;goto B69c14f;
case 0x69c152:c.instructions+=6;goto B69c152;
case 0x69c155:c.instructions+=5;goto B69c155;
case 0x69c158:c.instructions+=4;goto B69c158;
case 0x69c15b:c.instructions+=3;goto B69c15b;
case 0x69c15e:c.instructions+=2;goto B69c15e;
case 0x69c161:c.instructions+=1;goto B69c161;
case 0x69c163:goto L69c163;
case 0x69c166:c.instructions+=8;goto B69c166;
case 0x69c169:c.instructions+=7;goto B69c169;
case 0x69c16c:c.instructions+=6;goto B69c16c;
case 0x69c16f:c.instructions+=5;goto B69c16f;
case 0x69c172:c.instructions+=4;goto B69c172;
case 0x69c175:c.instructions+=3;goto B69c175;
case 0x69c179:c.instructions+=2;goto B69c179;
case 0x69c17c:c.instructions+=1;goto B69c17c;
case 0x69c17f:goto L69c17f;
case 0x69c180:c.instructions+=3;goto B69c180;
case 0x69c183:c.instructions+=2;goto B69c183;
case 0x69c186:c.instructions+=1;goto B69c186;
case 0x69c18c:goto L69c18c;
case 0x69c190:c.instructions+=1;goto B69c190;
case 0x69c196:goto L69c196;
case 0x69c19b:goto L69c19b;
case 0x69c1a0:c.instructions+=1;goto B69c1a0;
case 0x69c1a5:goto L69c1a5;
case 0x69c1a7:c.instructions+=14;goto B69c1a7;
case 0x69c1a8:c.instructions+=13;goto B69c1a8;
case 0x69c1aa:c.instructions+=12;goto B69c1aa;
case 0x69c1ad:c.instructions+=11;goto B69c1ad;
case 0x69c1ae:c.instructions+=10;goto B69c1ae;
case 0x69c1af:c.instructions+=9;goto B69c1af;
case 0x69c1b2:c.instructions+=8;goto B69c1b2;
case 0x69c1b4:c.instructions+=7;goto B69c1b4;
case 0x69c1b9:c.instructions+=6;goto B69c1b9;
case 0x69c1ba:c.instructions+=5;goto B69c1ba;
case 0x69c1bc:c.instructions+=4;goto B69c1bc;
case 0x69c1bf:c.instructions+=3;goto B69c1bf;
case 0x69c1c2:c.instructions+=2;goto B69c1c2;
case 0x69c1c9:c.instructions+=1;goto B69c1c9;
case 0x69c1cb:goto L69c1cb;
case 0x69c1cd:goto L69c1cd;
case 0x69c1ce:c.instructions+=4;goto B69c1ce;
case 0x69c1cf:c.instructions+=3;goto B69c1cf;
case 0x69c1d0:c.instructions+=2;goto B69c1d0;
case 0x69c1d1:c.instructions+=1;goto B69c1d1;
case 0x69c1d4:goto L69c1d4;
case 0x69c1d7:goto L69c1d7;
case 0x69c1da:c.instructions+=3;goto B69c1da;
case 0x69c1de:c.instructions+=2;goto B69c1de;
case 0x69c1e1:c.instructions+=1;goto B69c1e1;
case 0x69c1e7:goto L69c1e7;
case 0x69c1e9:c.instructions+=1;goto B69c1e9;
case 0x69c1ef:goto L69c1ef;
case 0x69c1f3:c.instructions+=4;goto B69c1f3;
case 0x69c1f5:c.instructions+=3;goto B69c1f5;
case 0x69c1f8:c.instructions+=2;goto B69c1f8;
case 0x69c1ff:c.instructions+=1;goto B69c1ff;
case 0x69c202:goto L69c202;
case 0x69c205:c.instructions+=3;goto B69c205;
case 0x69c208:c.instructions+=2;goto B69c208;
case 0x69c20c:c.instructions+=1;goto B69c20c;
case 0x69c212:goto L69c212;
case 0x69c215:c.instructions+=11;goto B69c215;
case 0x69c218:c.instructions+=10;goto B69c218;
case 0x69c21b:c.instructions+=9;goto B69c21b;
case 0x69c21e:c.instructions+=8;goto B69c21e;
case 0x69c221:c.instructions+=7;goto B69c221;
case 0x69c224:c.instructions+=6;goto B69c224;
case 0x69c227:c.instructions+=5;goto B69c227;
case 0x69c22a:c.instructions+=4;goto B69c22a;
case 0x69c22d:c.instructions+=3;goto B69c22d;
case 0x69c234:c.instructions+=2;goto B69c234;
case 0x69c237:c.instructions+=1;goto B69c237;
case 0x69c23d:goto L69c23d;
case 0x69c23f:c.instructions+=2;goto B69c23f;
case 0x69c242:c.instructions+=1;goto B69c242;
case 0x69c245:goto L69c245;
case 0x69c248:c.instructions+=3;goto B69c248;
case 0x69c24b:c.instructions+=2;goto B69c24b;
case 0x69c24f:c.instructions+=1;goto B69c24f;
case 0x69c251:goto L69c251;
case 0x69c254:c.instructions+=14;goto B69c254;
case 0x69c257:c.instructions+=13;goto B69c257;
case 0x69c25a:c.instructions+=12;goto B69c25a;
case 0x69c25d:c.instructions+=11;goto B69c25d;
case 0x69c260:c.instructions+=10;goto B69c260;
case 0x69c263:c.instructions+=9;goto B69c263;
case 0x69c266:c.instructions+=8;goto B69c266;
case 0x69c269:c.instructions+=7;goto B69c269;
case 0x69c26c:c.instructions+=6;goto B69c26c;
case 0x69c26f:c.instructions+=5;goto B69c26f;
case 0x69c272:c.instructions+=4;goto B69c272;
case 0x69c275:c.instructions+=3;goto B69c275;
case 0x69c278:c.instructions+=2;goto B69c278;
case 0x69c27b:c.instructions+=1;goto B69c27b;
case 0x69c27d:goto L69c27d;
case 0x69c280:c.instructions+=2;goto B69c280;
case 0x69c283:c.instructions+=1;goto B69c283;
case 0x69c285:goto L69c285;
case 0x69c288:c.instructions+=2;goto B69c288;
case 0x69c28b:c.instructions+=1;goto B69c28b;
case 0x69c28d:goto L69c28d;
case 0x69c290:c.instructions+=2;goto B69c290;
case 0x69c293:c.instructions+=1;goto B69c293;
case 0x69c295:goto L69c295;
case 0x69c298:c.instructions+=3;goto B69c298;
case 0x69c29b:c.instructions+=2;goto B69c29b;
case 0x69c29e:c.instructions+=1;goto B69c29e;
case 0x69c2a0:goto L69c2a0;
case 0x69c2a3:c.instructions+=2;goto B69c2a3;
case 0x69c2a6:c.instructions+=1;goto B69c2a6;
case 0x69c2a8:goto L69c2a8;
case 0x69c2ab:c.instructions+=2;goto B69c2ab;
case 0x69c2ae:c.instructions+=1;goto B69c2ae;
case 0x69c2b0:goto L69c2b0;
case 0x69c2b3:c.instructions+=2;goto B69c2b3;
case 0x69c2b6:c.instructions+=1;goto B69c2b6;
case 0x69c2b8:goto L69c2b8;
case 0x69c2bb:c.instructions+=2;goto B69c2bb;
case 0x69c2bf:c.instructions+=1;goto B69c2bf;
case 0x69c2c1:goto L69c2c1;
case 0x69c2c4:c.instructions+=4;goto B69c2c4;
case 0x69c2c7:c.instructions+=3;goto B69c2c7;
case 0x69c2cb:c.instructions+=2;goto B69c2cb;
case 0x69c2ce:c.instructions+=1;goto B69c2ce;
case 0x69c2d4:goto L69c2d4;
case 0x69c2d7:c.instructions+=2;goto B69c2d7;
case 0x69c2da:c.instructions+=1;goto B69c2da;
case 0x69c2dc:goto L69c2dc;
case 0x69c2df:c.instructions+=16;goto B69c2df;
case 0x69c2e2:c.instructions+=15;goto B69c2e2;
case 0x69c2e5:c.instructions+=14;goto B69c2e5;
case 0x69c2e8:c.instructions+=13;goto B69c2e8;
case 0x69c2eb:c.instructions+=12;goto B69c2eb;
case 0x69c2ee:c.instructions+=11;goto B69c2ee;
case 0x69c2f1:c.instructions+=10;goto B69c2f1;
case 0x69c2f4:c.instructions+=9;goto B69c2f4;
case 0x69c2f7:c.instructions+=8;goto B69c2f7;
case 0x69c2fa:c.instructions+=7;goto B69c2fa;
case 0x69c2fd:c.instructions+=6;goto B69c2fd;
case 0x69c300:c.instructions+=5;goto B69c300;
case 0x69c303:c.instructions+=4;goto B69c303;
case 0x69c306:c.instructions+=3;goto B69c306;
case 0x69c309:c.instructions+=2;goto B69c309;
case 0x69c30c:c.instructions+=1;goto B69c30c;
case 0x69c30f:goto L69c30f;
case 0x69c313:c.instructions+=1;goto B69c313;
case 0x69c315:goto L69c315;
case 0x69c318:goto L69c318;
case 0x69c31c:c.instructions+=6;goto B69c31c;
case 0x69c320:c.instructions+=5;goto B69c320;
case 0x69c323:c.instructions+=4;goto B69c323;
case 0x69c326:c.instructions+=3;goto B69c326;
case 0x69c327:c.instructions+=2;goto B69c327;
case 0x69c329:c.instructions+=1;goto B69c329;
case 0x69c32f:goto L69c32f;
case 0x69c331:goto L69c331;
case 0x69c334:goto L69c334;
case 0x69c337:c.instructions+=7;goto B69c337;
case 0x69c339:c.instructions+=6;goto B69c339;
case 0x69c33e:c.instructions+=5;goto B69c33e;
case 0x69c340:c.instructions+=4;goto B69c340;
case 0x69c345:c.instructions+=3;goto B69c345;
case 0x69c346:c.instructions+=2;goto B69c346;
case 0x69c348:c.instructions+=1;goto B69c348;
case 0x69c34d:goto L69c34d;
case 0x69c350:c.instructions+=1;goto B69c350;
case 0x69c356:goto L69c356;
case 0x69c359:c.instructions+=4;goto B69c359;
case 0x69c35c:c.instructions+=3;goto B69c35c;
case 0x69c35d:c.instructions+=2;goto B69c35d;
case 0x69c35f:c.instructions+=1;goto B69c35f;
case 0x69c364:goto L69c364;
case 0x69c367:c.instructions+=5;goto B69c367;
case 0x69c369:c.instructions+=4;goto B69c369;
case 0x69c36b:c.instructions+=3;goto B69c36b;
case 0x69c36e:c.instructions+=2;goto B69c36e;
case 0x69c371:c.instructions+=1;goto B69c371;
case 0x69c377:goto L69c377;
case 0x69c37a:c.instructions+=4;goto B69c37a;
case 0x69c37d:c.instructions+=3;goto B69c37d;
case 0x69c380:c.instructions+=2;goto B69c380;
case 0x69c383:c.instructions+=1;goto B69c383;
case 0x69c386:goto L69c386;
case 0x69c389:c.instructions+=2;goto B69c389;
case 0x69c38c:c.instructions+=1;goto B69c38c;
case 0x69c392:goto L69c392;
case 0x69c395:c.instructions+=2;goto B69c395;
case 0x69c399:c.instructions+=1;goto B69c399;
case 0x69c39f:goto L69c39f;
case 0x69c3a3:c.instructions+=11;goto B69c3a3;
case 0x69c3a6:c.instructions+=10;goto B69c3a6;
case 0x69c3a9:c.instructions+=9;goto B69c3a9;
case 0x69c3ac:c.instructions+=8;goto B69c3ac;
case 0x69c3af:c.instructions+=7;goto B69c3af;
case 0x69c3b2:c.instructions+=6;goto B69c3b2;
case 0x69c3b5:c.instructions+=5;goto B69c3b5;
case 0x69c3b8:c.instructions+=4;goto B69c3b8;
case 0x69c3bb:c.instructions+=3;goto B69c3bb;
case 0x69c3be:c.instructions+=2;goto B69c3be;
case 0x69c3c1:c.instructions+=1;goto B69c3c1;
case 0x69c3c3:goto L69c3c3;
case 0x69c3c6:c.instructions+=3;goto B69c3c6;
case 0x69c3c9:c.instructions+=2;goto B69c3c9;
case 0x69c3cc:c.instructions+=1;goto B69c3cc;
case 0x69c3ce:goto L69c3ce;
case 0x69c3d1:c.instructions+=2;goto B69c3d1;
case 0x69c3d4:c.instructions+=1;goto B69c3d4;
case 0x69c3d6:goto L69c3d6;
case 0x69c3d9:c.instructions+=2;goto B69c3d9;
case 0x69c3dc:c.instructions+=1;goto B69c3dc;
case 0x69c3de:goto L69c3de;
case 0x69c3e1:c.instructions+=2;goto B69c3e1;
case 0x69c3e4:c.instructions+=1;goto B69c3e4;
case 0x69c3e6:goto L69c3e6;
case 0x69c3e9:c.instructions+=3;goto B69c3e9;
case 0x69c3ec:c.instructions+=2;goto B69c3ec;
case 0x69c3ef:c.instructions+=1;goto B69c3ef;
case 0x69c3f1:goto L69c3f1;
case 0x69c3f4:c.instructions+=2;goto B69c3f4;
case 0x69c3f7:c.instructions+=1;goto B69c3f7;
case 0x69c3f9:goto L69c3f9;
case 0x69c3fc:c.instructions+=2;goto B69c3fc;
case 0x69c3ff:c.instructions+=1;goto B69c3ff;
case 0x69c401:goto L69c401;
case 0x69c404:c.instructions+=2;goto B69c404;
case 0x69c407:c.instructions+=1;goto B69c407;
case 0x69c409:goto L69c409;
case 0x69c40c:c.instructions+=18;goto B69c40c;
case 0x69c40f:c.instructions+=17;goto B69c40f;
case 0x69c412:c.instructions+=16;goto B69c412;
case 0x69c415:c.instructions+=15;goto B69c415;
case 0x69c418:c.instructions+=14;goto B69c418;
case 0x69c41b:c.instructions+=13;goto B69c41b;
case 0x69c41e:c.instructions+=12;goto B69c41e;
case 0x69c421:c.instructions+=11;goto B69c421;
case 0x69c424:c.instructions+=10;goto B69c424;
case 0x69c427:c.instructions+=9;goto B69c427;
case 0x69c42a:c.instructions+=8;goto B69c42a;
case 0x69c42d:c.instructions+=7;goto B69c42d;
case 0x69c430:c.instructions+=6;goto B69c430;
case 0x69c434:c.instructions+=5;goto B69c434;
case 0x69c437:c.instructions+=4;goto B69c437;
case 0x69c43a:c.instructions+=3;goto B69c43a;
case 0x69c43e:c.instructions+=2;goto B69c43e;
case 0x69c441:c.instructions+=1;goto B69c441;
case 0x69c445:goto L69c445;
case 0x69c449:c.instructions+=4;goto B69c449;
case 0x69c44a:c.instructions+=3;goto B69c44a;
case 0x69c44d:c.instructions+=2;goto B69c44d;
case 0x69c450:c.instructions+=1;goto B69c450;
case 0x69c456:goto L69c456;
case 0x69c45a:c.instructions+=1;goto B69c45a;
case 0x69c45c:goto L69c45c;
case 0x69c45d:c.instructions+=8;goto B69c45d;
case 0x69c45f:c.instructions+=7;goto B69c45f;
case 0x69c460:c.instructions+=6;goto B69c460;
case 0x69c463:c.instructions+=5;goto B69c463;
case 0x69c465:c.instructions+=4;goto B69c465;
case 0x69c467:c.instructions+=3;goto B69c467;
case 0x69c46d:c.instructions+=2;goto B69c46d;
case 0x69c46f:c.instructions+=1;goto B69c46f;
case 0x69c474:goto L69c474;
case 0x69c477:c.instructions+=4;goto B69c477;
case 0x69c479:c.instructions+=3;goto B69c479;
case 0x69c47c:c.instructions+=2;goto B69c47c;
case 0x69c47f:c.instructions+=1;goto B69c47f;
case 0x69c485:goto L69c485;
case 0x69c488:c.instructions+=18;goto B69c488;
case 0x69c48a:c.instructions+=17;goto B69c48a;
case 0x69c48d:c.instructions+=16;goto B69c48d;
case 0x69c490:c.instructions+=15;goto B69c490;
case 0x69c493:c.instructions+=14;goto B69c493;
case 0x69c495:c.instructions+=13;goto B69c495;
case 0x69c498:c.instructions+=12;goto B69c498;
case 0x69c49b:c.instructions+=11;goto B69c49b;
case 0x69c49e:c.instructions+=10;goto B69c49e;
case 0x69c4a1:c.instructions+=9;goto B69c4a1;
case 0x69c4a4:c.instructions+=8;goto B69c4a4;
case 0x69c4a6:c.instructions+=7;goto B69c4a6;
case 0x69c4a9:c.instructions+=6;goto B69c4a9;
case 0x69c4ac:c.instructions+=5;goto B69c4ac;
case 0x69c4ae:c.instructions+=4;goto B69c4ae;
case 0x69c4b1:c.instructions+=3;goto B69c4b1;
case 0x69c4b4:c.instructions+=2;goto B69c4b4;
case 0x69c4b7:c.instructions+=1;goto B69c4b7;
case 0x69c4b9:goto L69c4b9;
case 0x69c4bc:c.instructions+=3;goto B69c4bc;
case 0x69c4bf:c.instructions+=2;goto B69c4bf;
case 0x69c4c1:c.instructions+=1;goto B69c4c1;
case 0x69c4c3:goto L69c4c3;
case 0x69c4c6:c.instructions+=4;goto B69c4c6;
case 0x69c4c9:c.instructions+=3;goto B69c4c9;
case 0x69c4cc:c.instructions+=2;goto B69c4cc;
case 0x69c4d0:c.instructions+=1;goto B69c4d0;
case 0x69c4d6:goto L69c4d6;
case 0x69c4da:c.instructions+=1;goto B69c4da;
case 0x69c4e0:goto L69c4e0;
case 0x69c4e1:c.instructions+=8;goto B69c4e1;
case 0x69c4e3:c.instructions+=7;goto B69c4e3;
case 0x69c4e4:c.instructions+=6;goto B69c4e4;
case 0x69c4e7:c.instructions+=5;goto B69c4e7;
case 0x69c4e9:c.instructions+=4;goto B69c4e9;
case 0x69c4eb:c.instructions+=3;goto B69c4eb;
case 0x69c4ee:c.instructions+=2;goto B69c4ee;
case 0x69c4f0:c.instructions+=1;goto B69c4f0;
case 0x69c4f5:goto L69c4f5;
case 0x69c4f8:c.instructions+=2;goto B69c4f8;
case 0x69c4fb:c.instructions+=1;goto B69c4fb;
case 0x69c501:goto L69c501;
case 0x69c504:c.instructions+=6;goto B69c504;
case 0x69c507:c.instructions+=5;goto B69c507;
case 0x69c50a:c.instructions+=4;goto B69c50a;
case 0x69c50c:c.instructions+=3;goto B69c50c;
case 0x69c50f:c.instructions+=2;goto B69c50f;
case 0x69c512:c.instructions+=1;goto B69c512;
case 0x69c518:goto L69c518;
case 0x69c51b:goto L69c51b;
case 0x69c51e:c.instructions+=6;goto B69c51e;
case 0x69c521:c.instructions+=5;goto B69c521;
case 0x69c523:c.instructions+=4;goto B69c523;
case 0x69c524:c.instructions+=3;goto B69c524;
case 0x69c526:c.instructions+=2;goto B69c526;
case 0x69c529:c.instructions+=1;goto B69c529;
case 0x69c52b:goto L69c52b;
case 0x69c52e:c.instructions+=1;goto B69c52e;
case 0x69c530:goto L69c530;
case 0x69c533:c.instructions+=3;goto B69c533;
case 0x69c535:c.instructions+=2;goto B69c535;
case 0x69c537:c.instructions+=1;goto B69c537;
case 0x69c539:goto L69c539;
case 0x69c53e:c.instructions+=1;goto B69c53e;
case 0x69c540:goto L69c540;
case 0x69c543:c.instructions+=1;goto B69c543;
case 0x69c545:goto L69c545;
case 0x69c54a:c.instructions+=1;goto B69c54a;
case 0x69c54c:goto L69c54c;
case 0x69c551:c.instructions+=2;goto B69c551;
case 0x69c556:c.instructions+=1;goto B69c556;
case 0x69c557:goto L69c557;
case 0x69c559:c.instructions+=1;goto B69c559;
case 0x69c55e:goto L69c55e;
case 0x69c561:c.instructions+=1;goto B69c561;
case 0x69c567:goto L69c567;
case 0x69c56a:c.instructions+=4;goto B69c56a;
case 0x69c56d:c.instructions+=3;goto B69c56d;
case 0x69c56e:c.instructions+=2;goto B69c56e;
case 0x69c570:c.instructions+=1;goto B69c570;
case 0x69c575:goto L69c575;
case 0x69c578:c.instructions+=4;goto B69c578;
case 0x69c57a:c.instructions+=3;goto B69c57a;
case 0x69c57c:c.instructions+=2;goto B69c57c;
case 0x69c57f:c.instructions+=1;goto B69c57f;
case 0x69c581:goto L69c581;
case 0x69c584:c.instructions+=4;goto B69c584;
case 0x69c587:c.instructions+=3;goto B69c587;
case 0x69c58a:c.instructions+=2;goto B69c58a;
case 0x69c58d:c.instructions+=1;goto B69c58d;
case 0x69c590:goto L69c590;
case 0x69c594:c.instructions+=8;goto B69c594;
case 0x69c597:c.instructions+=7;goto B69c597;
case 0x69c59a:c.instructions+=6;goto B69c59a;
case 0x69c59d:c.instructions+=5;goto B69c59d;
case 0x69c5a0:c.instructions+=4;goto B69c5a0;
case 0x69c5a3:c.instructions+=3;goto B69c5a3;
case 0x69c5a5:c.instructions+=2;goto B69c5a5;
case 0x69c5a8:c.instructions+=1;goto B69c5a8;
case 0x69c5aa:goto L69c5aa;
case 0x69c5ad:c.instructions+=3;goto B69c5ad;
case 0x69c5b0:c.instructions+=2;goto B69c5b0;
case 0x69c5b3:c.instructions+=1;goto B69c5b3;
case 0x69c5b6:goto L69c5b6;
case 0x69c5b9:c.instructions+=6;goto B69c5b9;
case 0x69c5bd:c.instructions+=5;goto B69c5bd;
case 0x69c5c1:c.instructions+=4;goto B69c5c1;
case 0x69c5c2:c.instructions+=3;goto B69c5c2;
case 0x69c5c5:c.instructions+=2;goto B69c5c5;
case 0x69c5c8:c.instructions+=1;goto B69c5c8;
case 0x69c5ca:goto L69c5ca;
case 0x69c5ce:c.instructions+=1;goto B69c5ce;
case 0x69c5d0:goto L69c5d0;
case 0x69c5d1:c.instructions+=8;goto B69c5d1;
case 0x69c5d3:c.instructions+=7;goto B69c5d3;
case 0x69c5d4:c.instructions+=6;goto B69c5d4;
case 0x69c5d7:c.instructions+=5;goto B69c5d7;
case 0x69c5d9:c.instructions+=4;goto B69c5d9;
case 0x69c5db:c.instructions+=3;goto B69c5db;
case 0x69c5e1:c.instructions+=2;goto B69c5e1;
case 0x69c5e3:c.instructions+=1;goto B69c5e3;
case 0x69c5e8:goto L69c5e8;
case 0x69c5eb:c.instructions+=4;goto B69c5eb;
case 0x69c5ed:c.instructions+=3;goto B69c5ed;
case 0x69c5f0:c.instructions+=2;goto B69c5f0;
case 0x69c5f3:c.instructions+=1;goto B69c5f3;
case 0x69c5f5:goto L69c5f5;
case 0x69c5f8:c.instructions+=18;goto B69c5f8;
case 0x69c5fa:c.instructions+=17;goto B69c5fa;
case 0x69c5fd:c.instructions+=16;goto B69c5fd;
case 0x69c600:c.instructions+=15;goto B69c600;
case 0x69c603:c.instructions+=14;goto B69c603;
case 0x69c605:c.instructions+=13;goto B69c605;
case 0x69c608:c.instructions+=12;goto B69c608;
case 0x69c60b:c.instructions+=11;goto B69c60b;
case 0x69c60e:c.instructions+=10;goto B69c60e;
case 0x69c611:c.instructions+=9;goto B69c611;
case 0x69c614:c.instructions+=8;goto B69c614;
case 0x69c616:c.instructions+=7;goto B69c616;
case 0x69c619:c.instructions+=6;goto B69c619;
case 0x69c61c:c.instructions+=5;goto B69c61c;
case 0x69c61e:c.instructions+=4;goto B69c61e;
case 0x69c621:c.instructions+=3;goto B69c621;
case 0x69c624:c.instructions+=2;goto B69c624;
case 0x69c627:c.instructions+=1;goto B69c627;
case 0x69c629:goto L69c629;
case 0x69c62c:c.instructions+=3;goto B69c62c;
case 0x69c62f:c.instructions+=2;goto B69c62f;
case 0x69c631:c.instructions+=1;goto B69c631;
case 0x69c633:goto L69c633;
case 0x69c636:c.instructions+=6;goto B69c636;
case 0x69c639:c.instructions+=5;goto B69c639;
case 0x69c63d:c.instructions+=4;goto B69c63d;
case 0x69c640:c.instructions+=3;goto B69c640;
case 0x69c643:c.instructions+=2;goto B69c643;
case 0x69c646:c.instructions+=1;goto B69c646;
case 0x69c64c:goto L69c64c;
case 0x69c64f:c.instructions+=3;goto B69c64f;
case 0x69c652:c.instructions+=2;goto B69c652;
case 0x69c655:c.instructions+=1;goto B69c655;
case 0x69c65b:goto L69c65b;
case 0x69c660:goto L69c660;
case 0x69c665:c.instructions+=1;goto B69c665;
case 0x69c66a:goto L69c66a;
case 0x69c66c:c.instructions+=9;goto B69c66c;
case 0x69c66d:c.instructions+=8;goto B69c66d;
case 0x69c66f:c.instructions+=7;goto B69c66f;
case 0x69c672:c.instructions+=6;goto B69c672;
case 0x69c673:c.instructions+=5;goto B69c673;
case 0x69c674:c.instructions+=4;goto B69c674;
case 0x69c677:c.instructions+=3;goto B69c677;
case 0x69c678:c.instructions+=2;goto B69c678;
case 0x69c67a:c.instructions+=1;goto B69c67a;
case 0x69c67f:goto L69c67f;
case 0x69c682:c.instructions+=1;goto B69c682;
case 0x69c684:goto L69c684;
case 0x69c689:c.instructions+=1;goto B69c689;
case 0x69c68e:goto L69c68e;
case 0x69c691:c.instructions+=5;goto B69c691;
case 0x69c692:c.instructions+=4;goto B69c692;
case 0x69c695:c.instructions+=3;goto B69c695;
case 0x69c696:c.instructions+=2;goto B69c696;
case 0x69c698:c.instructions+=1;goto B69c698;
case 0x69c69d:goto L69c69d;
case 0x69c6a0:c.instructions+=3;goto B69c6a0;
case 0x69c6a4:c.instructions+=2;goto B69c6a4;
case 0x69c6a6:c.instructions+=1;goto B69c6a6;
case 0x69c6a8:goto L69c6a8;
case 0x69c6ab:c.instructions+=4;goto B69c6ab;
case 0x69c6ae:c.instructions+=3;goto B69c6ae;
case 0x69c6b0:c.instructions+=2;goto B69c6b0;
case 0x69c6b3:c.instructions+=1;goto B69c6b3;
case 0x69c6b6:goto L69c6b6;
case 0x69c6b9:c.instructions+=4;goto B69c6b9;
case 0x69c6bb:c.instructions+=3;goto B69c6bb;
case 0x69c6bd:c.instructions+=2;goto B69c6bd;
case 0x69c6c0:c.instructions+=1;goto B69c6c0;
case 0x69c6c5:goto L69c6c5;
case 0x69c6c7:c.instructions+=1;goto B69c6c7;
case 0x69c6c9:goto L69c6c9;
case 0x69c6cc:c.instructions+=3;goto B69c6cc;
case 0x69c6d0:c.instructions+=2;goto B69c6d0;
case 0x69c6d3:c.instructions+=1;goto B69c6d3;
case 0x69c6d5:goto L69c6d5;
case 0x69c6d8:c.instructions+=1;goto B69c6d8;
case 0x69c6de:goto L69c6de;
case 0x69c6e0:c.instructions+=6;goto B69c6e0;
case 0x69c6e6:c.instructions+=5;goto B69c6e6;
case 0x69c6e8:c.instructions+=4;goto B69c6e8;
case 0x69c6ee:c.instructions+=3;goto B69c6ee;
case 0x69c6ef:c.instructions+=2;goto B69c6ef;
case 0x69c6f1:c.instructions+=1;goto B69c6f1;
case 0x69c6f6:goto L69c6f6;
case 0x69c6f9:c.instructions+=1;goto B69c6f9;
case 0x69c6fb:goto L69c6fb;
case 0x69c700:c.instructions+=1;goto B69c700;
case 0x69c705:goto L69c705;
case 0x69c708:c.instructions+=5;goto B69c708;
case 0x69c70b:c.instructions+=4;goto B69c70b;
case 0x69c70e:c.instructions+=3;goto B69c70e;
case 0x69c710:c.instructions+=2;goto B69c710;
case 0x69c713:c.instructions+=1;goto B69c713;
case 0x69c718:goto L69c718;
case 0x69c71c:c.instructions+=2;goto B69c71c;
case 0x69c720:c.instructions+=1;goto B69c720;
case 0x69c726:goto L69c726;
case 0x69c729:c.instructions+=15;goto B69c729;
case 0x69c72b:c.instructions+=14;goto B69c72b;
case 0x69c72e:c.instructions+=13;goto B69c72e;
case 0x69c731:c.instructions+=12;goto B69c731;
case 0x69c734:c.instructions+=11;goto B69c734;
case 0x69c735:c.instructions+=10;goto B69c735;
case 0x69c736:c.instructions+=9;goto B69c736;
case 0x69c739:c.instructions+=8;goto B69c739;
case 0x69c73c:c.instructions+=7;goto B69c73c;
case 0x69c73f:c.instructions+=6;goto B69c73f;
case 0x69c741:c.instructions+=5;goto B69c741;
case 0x69c744:c.instructions+=4;goto B69c744;
case 0x69c746:c.instructions+=3;goto B69c746;
case 0x69c74c:c.instructions+=2;goto B69c74c;
case 0x69c74e:c.instructions+=1;goto B69c74e;
case 0x69c753:goto L69c753;
case 0x69c756:c.instructions+=9;goto B69c756;
case 0x69c759:c.instructions+=8;goto B69c759;
case 0x69c75c:c.instructions+=7;goto B69c75c;
case 0x69c75f:c.instructions+=6;goto B69c75f;
case 0x69c762:c.instructions+=5;goto B69c762;
case 0x69c765:c.instructions+=4;goto B69c765;
case 0x69c768:c.instructions+=3;goto B69c768;
case 0x69c76b:c.instructions+=2;goto B69c76b;
case 0x69c76f:c.instructions+=1;goto B69c76f;
case 0x69c771:goto L69c771;
case 0x69c774:c.instructions+=8;goto B69c774;
case 0x69c777:c.instructions+=7;goto B69c777;
case 0x69c77a:c.instructions+=6;goto B69c77a;
case 0x69c77d:c.instructions+=5;goto B69c77d;
case 0x69c780:c.instructions+=4;goto B69c780;
case 0x69c783:c.instructions+=3;goto B69c783;
case 0x69c786:c.instructions+=2;goto B69c786;
case 0x69c789:c.instructions+=1;goto B69c789;
case 0x69c78e:goto L69c78e;
case 0x69c791:c.instructions+=33;goto B69c791;
case 0x69c794:c.instructions+=32;goto B69c794;
case 0x69c797:c.instructions+=31;goto B69c797;
case 0x69c79a:c.instructions+=30;goto B69c79a;
case 0x69c79d:c.instructions+=29;goto B69c79d;
case 0x69c7a0:c.instructions+=28;goto B69c7a0;
case 0x69c7a3:c.instructions+=27;goto B69c7a3;
case 0x69c7a6:c.instructions+=26;goto B69c7a6;
case 0x69c7a9:c.instructions+=25;goto B69c7a9;
case 0x69c7ac:c.instructions+=24;goto B69c7ac;
case 0x69c7af:c.instructions+=23;goto B69c7af;
case 0x69c7b2:c.instructions+=22;goto B69c7b2;
case 0x69c7b5:c.instructions+=21;goto B69c7b5;
case 0x69c7b8:c.instructions+=20;goto B69c7b8;
case 0x69c7bb:c.instructions+=19;goto B69c7bb;
case 0x69c7be:c.instructions+=18;goto B69c7be;
case 0x69c7c1:c.instructions+=17;goto B69c7c1;
case 0x69c7c4:c.instructions+=16;goto B69c7c4;
case 0x69c7c7:c.instructions+=15;goto B69c7c7;
case 0x69c7ca:c.instructions+=14;goto B69c7ca;
case 0x69c7cd:c.instructions+=13;goto B69c7cd;
case 0x69c7d0:c.instructions+=12;goto B69c7d0;
case 0x69c7d3:c.instructions+=11;goto B69c7d3;
case 0x69c7d6:c.instructions+=10;goto B69c7d6;
case 0x69c7d9:c.instructions+=9;goto B69c7d9;
case 0x69c7dc:c.instructions+=8;goto B69c7dc;
case 0x69c7df:c.instructions+=7;goto B69c7df;
case 0x69c7e2:c.instructions+=6;goto B69c7e2;
case 0x69c7e5:c.instructions+=5;goto B69c7e5;
case 0x69c7e7:c.instructions+=4;goto B69c7e7;
case 0x69c7e9:c.instructions+=3;goto B69c7e9;
case 0x69c7ec:c.instructions+=2;goto B69c7ec;
case 0x69c7ef:c.instructions+=1;goto B69c7ef;
case 0x69c7f5:goto L69c7f5;
case 0x69c7f8:goto L69c7f8;
case 0x69c7f9:c.instructions+=2;goto B69c7f9;
case 0x69c7fb:c.instructions+=1;goto B69c7fb;
case 0x69c800:goto L69c800;
case 0x69c802:c.instructions+=1;goto B69c802;
case 0x69c804:goto L69c804;
case 0x69c807:goto L69c807;
case 0x69c809:goto L69c809;
case 0x69c80a:goto L69c80a;
case 0x69c80b:c.instructions+=3;goto B69c80b;
case 0x69c80c:c.instructions+=2;goto B69c80c;
case 0x69c80d:c.instructions+=1;goto B69c80d;
case 0x69c810:goto L69c810;
case 0x69c812:c.instructions+=10;goto B69c812;
case 0x69c813:c.instructions+=9;goto B69c813;
case 0x69c815:c.instructions+=8;goto B69c815;
case 0x69c818:c.instructions+=7;goto B69c818;
case 0x69c819:c.instructions+=6;goto B69c819;
case 0x69c81c:c.instructions+=5;goto B69c81c;
case 0x69c81d:c.instructions+=4;goto B69c81d;
case 0x69c81f:c.instructions+=3;goto B69c81f;
case 0x69c821:c.instructions+=2;goto B69c821;
case 0x69c827:c.instructions+=1;goto B69c827;
case 0x69c82d:goto L69c82d;
case 0x69c830:c.instructions+=6;goto B69c830;
case 0x69c836:c.instructions+=5;goto B69c836;
case 0x69c838:c.instructions+=4;goto B69c838;
case 0x69c83a:c.instructions+=3;goto B69c83a;
case 0x69c83d:c.instructions+=2;goto B69c83d;
case 0x69c83f:c.instructions+=1;goto B69c83f;
case 0x69c845:goto L69c845;
case 0x69c849:c.instructions+=2;goto B69c849;
case 0x69c84c:c.instructions+=1;goto B69c84c;
case 0x69c84d:goto L69c84d;
case 0x69c84f:c.instructions+=1;goto B69c84f;
case 0x69c855:goto L69c855;
case 0x69c858:c.instructions+=1;goto B69c858;
case 0x69c85b:goto L69c85b;
case 0x69c85e:c.instructions+=6;goto B69c85e;
case 0x69c861:c.instructions+=5;goto B69c861;
case 0x69c864:c.instructions+=4;goto B69c864;
case 0x69c867:c.instructions+=3;goto B69c867;
case 0x69c86a:c.instructions+=2;goto B69c86a;
case 0x69c86d:c.instructions+=1;goto B69c86d;
case 0x69c86f:goto L69c86f;
case 0x69c873:c.instructions+=1;goto B69c873;
case 0x69c875:goto L69c875;
case 0x69c878:c.instructions+=8;goto B69c878;
case 0x69c87b:c.instructions+=7;goto B69c87b;
case 0x69c87e:c.instructions+=6;goto B69c87e;
case 0x69c880:c.instructions+=5;goto B69c880;
case 0x69c881:c.instructions+=4;goto B69c881;
case 0x69c883:c.instructions+=3;goto B69c883;
case 0x69c886:c.instructions+=2;goto B69c886;
case 0x69c889:c.instructions+=1;goto B69c889;
case 0x69c890:goto L69c890;
case 0x69c893:c.instructions+=2;goto B69c893;
case 0x69c896:c.instructions+=1;goto B69c896;
case 0x69c898:goto L69c898;
case 0x69c89b:c.instructions+=1;goto B69c89b;
case 0x69c89e:goto L69c89e;
case 0x69c8a1:c.instructions+=6;goto B69c8a1;
case 0x69c8a4:c.instructions+=5;goto B69c8a4;
case 0x69c8a7:c.instructions+=4;goto B69c8a7;
case 0x69c8aa:c.instructions+=3;goto B69c8aa;
case 0x69c8ad:c.instructions+=2;goto B69c8ad;
case 0x69c8b0:c.instructions+=1;goto B69c8b0;
case 0x69c8b2:goto L69c8b2;
case 0x69c8b6:c.instructions+=1;goto B69c8b6;
case 0x69c8b8:goto L69c8b8;
case 0x69c8bb:c.instructions+=3;goto B69c8bb;
case 0x69c8be:c.instructions+=2;goto B69c8be;
case 0x69c8c2:c.instructions+=1;goto B69c8c2;
case 0x69c8c4:goto L69c8c4;
case 0x69c8c7:c.instructions+=4;goto B69c8c7;
case 0x69c8c8:c.instructions+=3;goto B69c8c8;
case 0x69c8cb:c.instructions+=2;goto B69c8cb;
case 0x69c8cf:c.instructions+=1;goto B69c8cf;
case 0x69c8d2:goto L69c8d2;
case 0x69c8d5:c.instructions+=2;goto B69c8d5;
case 0x69c8d6:c.instructions+=1;goto B69c8d6;
case 0x69c8d8:goto L69c8d8;
case 0x69c8db:goto L69c8db;
case 0x69c8dd:c.instructions+=4;goto B69c8dd;
case 0x69c8e0:c.instructions+=3;goto B69c8e0;
case 0x69c8e3:c.instructions+=2;goto B69c8e3;
case 0x69c8e6:c.instructions+=1;goto B69c8e6;
case 0x69c8ec:goto L69c8ec;
case 0x69c8ed:goto L69c8ed;
case 0x69c8ee:c.instructions+=4;goto B69c8ee;
case 0x69c8f0:c.instructions+=3;goto B69c8f0;
case 0x69c8f1:c.instructions+=2;goto B69c8f1;
case 0x69c8f2:c.instructions+=1;goto B69c8f2;
case 0x69c8f5:goto L69c8f5;
case 0x69c8f7:c.instructions+=21;goto B69c8f7;
case 0x69c8f8:c.instructions+=20;goto B69c8f8;
case 0x69c8fa:c.instructions+=19;goto B69c8fa;
case 0x69c8fd:c.instructions+=18;goto B69c8fd;
case 0x69c901:c.instructions+=17;goto B69c901;
case 0x69c902:c.instructions+=16;goto B69c902;
case 0x69c904:c.instructions+=15;goto B69c904;
case 0x69c907:c.instructions+=14;goto B69c907;
case 0x69c90a:c.instructions+=13;goto B69c90a;
case 0x69c90d:c.instructions+=12;goto B69c90d;
case 0x69c910:c.instructions+=11;goto B69c910;
case 0x69c912:c.instructions+=10;goto B69c912;
case 0x69c915:c.instructions+=9;goto B69c915;
case 0x69c918:c.instructions+=8;goto B69c918;
case 0x69c91b:c.instructions+=7;goto B69c91b;
case 0x69c91e:c.instructions+=6;goto B69c91e;
case 0x69c921:c.instructions+=5;goto B69c921;
case 0x69c924:c.instructions+=4;goto B69c924;
case 0x69c926:c.instructions+=3;goto B69c926;
case 0x69c927:c.instructions+=2;goto B69c927;
case 0x69c928:c.instructions+=1;goto B69c928;
case 0x69c92b:goto L69c92b;
case 0x69c92e:c.instructions+=4;goto B69c92e;
case 0x69c931:c.instructions+=3;goto B69c931;
case 0x69c935:c.instructions+=2;goto B69c935;
case 0x69c938:c.instructions+=1;goto B69c938;
case 0x69c93e:goto L69c93e;
case 0x69c941:c.instructions+=2;goto B69c941;
case 0x69c944:c.instructions+=1;goto B69c944;
case 0x69c946:goto L69c946;
case 0x69c949:c.instructions+=1;goto B69c949;
case 0x69c94f:goto L69c94f;
case 0x69c952:c.instructions+=3;goto B69c952;
case 0x69c955:c.instructions+=2;goto B69c955;
case 0x69c958:c.instructions+=1;goto B69c958;
case 0x69c95a:goto L69c95a;
case 0x69c95d:goto L69c95d;
case 0x69c95f:c.instructions+=1;goto B69c95f;
case 0x69c961:goto L69c961;
case 0x69c964:c.instructions+=5;goto B69c964;
case 0x69c967:c.instructions+=4;goto B69c967;
case 0x69c96a:c.instructions+=3;goto B69c96a;
case 0x69c96d:c.instructions+=2;goto B69c96d;
case 0x69c970:c.instructions+=1;goto B69c970;
case 0x69c972:goto L69c972;
case 0x69c975:c.instructions+=1;goto B69c975;
case 0x69c97b:goto L69c97b;
case 0x69c97e:c.instructions+=1;goto B69c97e;
case 0x69c984:goto L69c984;
case 0x69c986:c.instructions+=5;goto B69c986;
case 0x69c987:c.instructions+=4;goto B69c987;
case 0x69c98a:c.instructions+=3;goto B69c98a;
case 0x69c98d:c.instructions+=2;goto B69c98d;
case 0x69c990:c.instructions+=1;goto B69c990;
case 0x69c996:goto L69c996;
case 0x69c999:c.instructions+=5;goto B69c999;
case 0x69c99c:c.instructions+=4;goto B69c99c;
case 0x69c99f:c.instructions+=3;goto B69c99f;
case 0x69c9a1:c.instructions+=2;goto B69c9a1;
case 0x69c9a4:c.instructions+=1;goto B69c9a4;
case 0x69c9a7:goto L69c9a7;
case 0x69c9a9:goto L69c9a9;
case 0x69c9ac:c.instructions+=4;goto B69c9ac;
case 0x69c9af:c.instructions+=3;goto B69c9af;
case 0x69c9b2:c.instructions+=2;goto B69c9b2;
case 0x69c9b5:c.instructions+=1;goto B69c9b5;
case 0x69c9b7:goto L69c9b7;
case 0x69c9ba:c.instructions+=2;goto B69c9ba;
case 0x69c9bd:c.instructions+=1;goto B69c9bd;
case 0x69c9bf:goto L69c9bf;
case 0x69c9c2:c.instructions+=1;goto B69c9c2;
case 0x69c9c4:goto L69c9c4;
case 0x69c9c7:c.instructions+=2;goto B69c9c7;
case 0x69c9ca:c.instructions+=1;goto B69c9ca;
case 0x69c9cc:goto L69c9cc;
case 0x69c9cf:c.instructions+=2;goto B69c9cf;
case 0x69c9d2:c.instructions+=1;goto B69c9d2;
case 0x69c9d4:goto L69c9d4;
case 0x69c9d7:c.instructions+=2;goto B69c9d7;
case 0x69c9da:c.instructions+=1;goto B69c9da;
case 0x69c9dc:goto L69c9dc;
case 0x69c9df:c.instructions+=3;goto B69c9df;
case 0x69c9e2:c.instructions+=2;goto B69c9e2;
case 0x69c9e5:c.instructions+=1;goto B69c9e5;
case 0x69c9e7:goto L69c9e7;
case 0x69c9ea:goto L69c9ea;
case 0x69c9ec:c.instructions+=1;goto B69c9ec;
case 0x69c9ee:goto L69c9ee;
case 0x69c9f1:c.instructions+=5;goto B69c9f1;
case 0x69c9f4:c.instructions+=4;goto B69c9f4;
case 0x69c9f7:c.instructions+=3;goto B69c9f7;
case 0x69c9fa:c.instructions+=2;goto B69c9fa;
case 0x69c9fd:c.instructions+=1;goto B69c9fd;
case 0x69c9ff:goto L69c9ff;
case 0x69ca02:c.instructions+=1;goto B69ca02;
case 0x69ca04:goto L69ca04;
case 0x69ca07:c.instructions+=1;goto B69ca07;
case 0x69ca09:goto L69ca09;
case 0x69ca0c:c.instructions+=1;goto B69ca0c;
case 0x69ca0f:goto L69ca0f;
case 0x69ca12:c.instructions+=2;goto B69ca12;
case 0x69ca14:c.instructions+=1;goto B69ca14;
case 0x69ca16:goto L69ca16;
case 0x69ca18:goto L69ca18;
case 0x69ca1b:c.instructions+=9;goto B69ca1b;
case 0x69ca1e:c.instructions+=8;goto B69ca1e;
case 0x69ca21:c.instructions+=7;goto B69ca21;
case 0x69ca24:c.instructions+=6;goto B69ca24;
case 0x69ca27:c.instructions+=5;goto B69ca27;
case 0x69ca2a:c.instructions+=4;goto B69ca2a;
case 0x69ca2d:c.instructions+=3;goto B69ca2d;
case 0x69ca30:c.instructions+=2;goto B69ca30;
case 0x69ca33:c.instructions+=1;goto B69ca33;
case 0x69ca39:goto L69ca39;
case 0x69ca3c:c.instructions+=2;goto B69ca3c;
case 0x69ca3f:c.instructions+=1;goto B69ca3f;
case 0x69ca41:goto L69ca41;
case 0x69ca43:c.instructions+=3;goto B69ca43;
case 0x69ca45:c.instructions+=2;goto B69ca45;
case 0x69ca47:c.instructions+=1;goto B69ca47;
case 0x69ca49:goto L69ca49;
case 0x69ca4d:c.instructions+=5;goto B69ca4d;
case 0x69ca50:c.instructions+=4;goto B69ca50;
case 0x69ca53:c.instructions+=3;goto B69ca53;
case 0x69ca56:c.instructions+=2;goto B69ca56;
case 0x69ca5a:c.instructions+=1;goto B69ca5a;
case 0x69ca5c:goto L69ca5c;
case 0x69ca5f:c.instructions+=6;goto B69ca5f;
case 0x69ca62:c.instructions+=5;goto B69ca62;
case 0x69ca65:c.instructions+=4;goto B69ca65;
case 0x69ca68:c.instructions+=3;goto B69ca68;
case 0x69ca6a:c.instructions+=2;goto B69ca6a;
case 0x69ca6d:c.instructions+=1;goto B69ca6d;
case 0x69ca6f:goto L69ca6f;
case 0x69ca70:c.instructions+=2;goto B69ca70;
case 0x69ca73:c.instructions+=1;goto B69ca73;
case 0x69ca75:goto L69ca75;
case 0x69ca78:c.instructions+=1;goto B69ca78;
case 0x69ca7a:goto L69ca7a;
case 0x69ca7d:c.instructions+=3;goto B69ca7d;
case 0x69ca80:c.instructions+=2;goto B69ca80;
case 0x69ca83:c.instructions+=1;goto B69ca83;
case 0x69ca86:goto L69ca86;
case 0x69ca88:goto L69ca88;
case 0x69ca8b:c.instructions+=3;goto B69ca8b;
case 0x69ca8e:c.instructions+=2;goto B69ca8e;
case 0x69ca90:c.instructions+=1;goto B69ca90;
case 0x69ca96:goto L69ca96;
case 0x69ca9a:c.instructions+=1;goto B69ca9a;
case 0x69ca9c:goto L69ca9c;
case 0x69ca9f:c.instructions+=1;goto B69ca9f;
case 0x69caa2:goto L69caa2;
case 0x69caa4:goto L69caa4;
case 0x69caa9:goto L69caa9;
case 0x69caac:c.instructions+=7;goto B69caac;
case 0x69caae:c.instructions+=6;goto B69caae;
case 0x69cab3:c.instructions+=5;goto B69cab3;
case 0x69cab5:c.instructions+=4;goto B69cab5;
case 0x69caba:c.instructions+=3;goto B69caba;
case 0x69cabb:c.instructions+=2;goto B69cabb;
case 0x69cabd:c.instructions+=1;goto B69cabd;
case 0x69cac2:goto L69cac2;
case 0x69cac4:c.instructions+=3;goto B69cac4;
case 0x69cac7:c.instructions+=2;goto B69cac7;
case 0x69caca:c.instructions+=1;goto B69caca;
case 0x69cad0:goto L69cad0;
case 0x69cad3:c.instructions+=5;goto B69cad3;
case 0x69cad6:c.instructions+=4;goto B69cad6;
case 0x69cad9:c.instructions+=3;goto B69cad9;
case 0x69cadc:c.instructions+=2;goto B69cadc;
case 0x69cade:c.instructions+=1;goto B69cade;
case 0x69cae3:goto L69cae3;
case 0x69cae7:c.instructions+=2;goto B69cae7;
case 0x69caeb:c.instructions+=1;goto B69caeb;
case 0x69caf1:goto L69caf1;
case 0x69caf4:c.instructions+=18;goto B69caf4;
case 0x69caf6:c.instructions+=17;goto B69caf6;
case 0x69caf9:c.instructions+=16;goto B69caf9;
case 0x69cafc:c.instructions+=15;goto B69cafc;
case 0x69cafe:c.instructions+=14;goto B69cafe;
case 0x69caff:c.instructions+=13;goto B69caff;
case 0x69cb02:c.instructions+=12;goto B69cb02;
case 0x69cb04:c.instructions+=11;goto B69cb04;
case 0x69cb05:c.instructions+=10;goto B69cb05;
case 0x69cb08:c.instructions+=9;goto B69cb08;
case 0x69cb0b:c.instructions+=8;goto B69cb0b;
case 0x69cb0d:c.instructions+=7;goto B69cb0d;
case 0x69cb10:c.instructions+=6;goto B69cb10;
case 0x69cb13:c.instructions+=5;goto B69cb13;
case 0x69cb14:c.instructions+=4;goto B69cb14;
case 0x69cb16:c.instructions+=3;goto B69cb16;
case 0x69cb18:c.instructions+=2;goto B69cb18;
case 0x69cb1e:c.instructions+=1;goto B69cb1e;
case 0x69cb23:goto L69cb23;
case 0x69cb26:c.instructions+=4;goto B69cb26;
case 0x69cb29:c.instructions+=3;goto B69cb29;
case 0x69cb2c:c.instructions+=2;goto B69cb2c;
case 0x69cb30:c.instructions+=1;goto B69cb30;
case 0x69cb36:goto L69cb36;
case 0x69cb39:c.instructions+=43;goto B69cb39;
case 0x69cb3c:c.instructions+=42;goto B69cb3c;
case 0x69cb3f:c.instructions+=41;goto B69cb3f;
case 0x69cb42:c.instructions+=40;goto B69cb42;
case 0x69cb45:c.instructions+=39;goto B69cb45;
case 0x69cb48:c.instructions+=38;goto B69cb48;
case 0x69cb4b:c.instructions+=37;goto B69cb4b;
case 0x69cb4e:c.instructions+=36;goto B69cb4e;
case 0x69cb51:c.instructions+=35;goto B69cb51;
case 0x69cb54:c.instructions+=34;goto B69cb54;
case 0x69cb57:c.instructions+=33;goto B69cb57;
case 0x69cb5a:c.instructions+=32;goto B69cb5a;
case 0x69cb5d:c.instructions+=31;goto B69cb5d;
case 0x69cb60:c.instructions+=30;goto B69cb60;
case 0x69cb63:c.instructions+=29;goto B69cb63;
case 0x69cb65:c.instructions+=28;goto B69cb65;
case 0x69cb68:c.instructions+=27;goto B69cb68;
case 0x69cb6b:c.instructions+=26;goto B69cb6b;
case 0x69cb6e:c.instructions+=25;goto B69cb6e;
case 0x69cb70:c.instructions+=24;goto B69cb70;
case 0x69cb73:c.instructions+=23;goto B69cb73;
case 0x69cb76:c.instructions+=22;goto B69cb76;
case 0x69cb79:c.instructions+=21;goto B69cb79;
case 0x69cb7c:c.instructions+=20;goto B69cb7c;
case 0x69cb7f:c.instructions+=19;goto B69cb7f;
case 0x69cb82:c.instructions+=18;goto B69cb82;
case 0x69cb85:c.instructions+=17;goto B69cb85;
case 0x69cb88:c.instructions+=16;goto B69cb88;
case 0x69cb8b:c.instructions+=15;goto B69cb8b;
case 0x69cb8e:c.instructions+=14;goto B69cb8e;
case 0x69cb91:c.instructions+=13;goto B69cb91;
case 0x69cb94:c.instructions+=12;goto B69cb94;
case 0x69cb97:c.instructions+=11;goto B69cb97;
case 0x69cb9a:c.instructions+=10;goto B69cb9a;
case 0x69cb9d:c.instructions+=9;goto B69cb9d;
case 0x69cba0:c.instructions+=8;goto B69cba0;
case 0x69cba3:c.instructions+=7;goto B69cba3;
case 0x69cba6:c.instructions+=6;goto B69cba6;
case 0x69cba9:c.instructions+=5;goto B69cba9;
case 0x69cbac:c.instructions+=4;goto B69cbac;
case 0x69cbae:c.instructions+=3;goto B69cbae;
case 0x69cbb1:c.instructions+=2;goto B69cbb1;
case 0x69cbb4:c.instructions+=1;goto B69cbb4;
case 0x69cbba:goto L69cbba;
case 0x69cbbd:c.instructions+=1;goto B69cbbd;
case 0x69cbbf:goto L69cbbf;
case 0x69cbc4:c.instructions+=1;goto B69cbc4;
case 0x69cbc6:goto L69cbc6;
case 0x69cbc9:c.instructions+=3;goto B69cbc9;
case 0x69cbcc:c.instructions+=2;goto B69cbcc;
case 0x69cbce:c.instructions+=1;goto B69cbce;
case 0x69cbcf:goto L69cbcf;
case 0x69cbd2:c.instructions+=2;goto B69cbd2;
case 0x69cbd5:c.instructions+=1;goto B69cbd5;
case 0x69cbd7:goto L69cbd7;
case 0x69cbda:c.instructions+=2;goto B69cbda;
case 0x69cbdd:c.instructions+=1;goto B69cbdd;
case 0x69cbdf:goto L69cbdf;
case 0x69cbe1:goto L69cbe1;
case 0x69cbe2:c.instructions+=4;goto B69cbe2;
case 0x69cbe3:c.instructions+=3;goto B69cbe3;
case 0x69cbe4:c.instructions+=2;goto B69cbe4;
case 0x69cbe5:c.instructions+=1;goto B69cbe5;
case 0x69cbe8:goto L69cbe8;
case 0x69cbea:c.instructions+=12;goto B69cbea;
case 0x69cbeb:c.instructions+=11;goto B69cbeb;
case 0x69cbed:c.instructions+=10;goto B69cbed;
case 0x69cbee:c.instructions+=9;goto B69cbee;
case 0x69cbef:c.instructions+=8;goto B69cbef;
case 0x69cbf2:c.instructions+=7;goto B69cbf2;
case 0x69cbf3:c.instructions+=6;goto B69cbf3;
case 0x69cbf4:c.instructions+=5;goto B69cbf4;
case 0x69cbf6:c.instructions+=4;goto B69cbf6;
case 0x69cbfc:c.instructions+=3;goto B69cbfc;
case 0x69cbfd:c.instructions+=2;goto B69cbfd;
case 0x69cc00:c.instructions+=1;goto B69cc00;
case 0x69cc02:goto L69cc02;
case 0x69cc05:c.instructions+=3;goto B69cc05;
case 0x69cc07:c.instructions+=2;goto B69cc07;
case 0x69cc09:c.instructions+=1;goto B69cc09;
case 0x69cc0f:goto L69cc0f;
case 0x69cc12:c.instructions+=4;goto B69cc12;
case 0x69cc14:c.instructions+=3;goto B69cc14;
case 0x69cc15:c.instructions+=2;goto B69cc15;
case 0x69cc18:c.instructions+=1;goto B69cc18;
case 0x69cc1a:goto L69cc1a;
case 0x69cc1d:goto L69cc1d;
case 0x69cc1f:c.instructions+=2;goto B69cc1f;
case 0x69cc21:c.instructions+=1;goto B69cc21;
case 0x69cc23:goto L69cc23;
case 0x69cc26:c.instructions+=2;goto B69cc26;
case 0x69cc29:c.instructions+=1;goto B69cc29;
case 0x69cc2b:goto L69cc2b;
case 0x69cc2e:c.instructions+=6;goto B69cc2e;
case 0x69cc31:c.instructions+=5;goto B69cc31;
case 0x69cc34:c.instructions+=4;goto B69cc34;
case 0x69cc36:c.instructions+=3;goto B69cc36;
case 0x69cc39:c.instructions+=2;goto B69cc39;
case 0x69cc3c:c.instructions+=1;goto B69cc3c;
case 0x69cc3e:goto L69cc3e;
case 0x69cc41:goto L69cc41;
case 0x69cc42:c.instructions+=2;goto B69cc42;
case 0x69cc45:c.instructions+=1;goto B69cc45;
case 0x69cc47:goto L69cc47;
case 0x69cc49:goto L69cc49;
case 0x69cc4f:c.instructions+=1;goto B69cc4f;
case 0x69cc51:goto L69cc51;
case 0x69cc54:c.instructions+=2;goto B69cc54;
case 0x69cc56:c.instructions+=1;goto B69cc56;
case 0x69cc58:goto L69cc58;
case 0x69cc5b:c.instructions+=1;goto B69cc5b;
case 0x69cc62:goto L69cc62;
case 0x69cc65:c.instructions+=2;goto B69cc65;
case 0x69cc69:c.instructions+=1;goto B69cc69;
case 0x69cc6b:goto L69cc6b;
case 0x69cc6e:c.instructions+=2;goto B69cc6e;
case 0x69cc71:c.instructions+=1;goto B69cc71;
case 0x69cc73:goto L69cc73;
case 0x69cc76:c.instructions+=6;goto B69cc76;
case 0x69cc79:c.instructions+=5;goto B69cc79;
case 0x69cc7c:c.instructions+=4;goto B69cc7c;
case 0x69cc7e:c.instructions+=3;goto B69cc7e;
case 0x69cc81:c.instructions+=2;goto B69cc81;
case 0x69cc84:c.instructions+=1;goto B69cc84;
case 0x69cc86:goto L69cc86;
case 0x69cc87:c.instructions+=1;goto B69cc87;
case 0x69cc8a:goto L69cc8a;
case 0x69cc8b:c.instructions+=3;goto B69cc8b;
case 0x69cc8e:c.instructions+=2;goto B69cc8e;
case 0x69cc90:c.instructions+=1;goto B69cc90;
case 0x69cc92:goto L69cc92;
case 0x69cc95:goto L69cc95;
case 0x69cc96:c.instructions+=4;goto B69cc96;
case 0x69cc97:c.instructions+=3;goto B69cc97;
case 0x69cc98:c.instructions+=2;goto B69cc98;
case 0x69cc99:c.instructions+=1;goto B69cc99;
case 0x69cc9a:goto L69cc9a;
case 0x69cc9c:c.instructions+=15;goto B69cc9c;
case 0x69cc9d:c.instructions+=14;goto B69cc9d;
case 0x69cc9f:c.instructions+=13;goto B69cc9f;
case 0x69cca2:c.instructions+=12;goto B69cca2;
case 0x69cca5:c.instructions+=11;goto B69cca5;
case 0x69cca6:c.instructions+=10;goto B69cca6;
case 0x69cca7:c.instructions+=9;goto B69cca7;
case 0x69ccaa:c.instructions+=8;goto B69ccaa;
case 0x69ccad:c.instructions+=7;goto B69ccad;
case 0x69ccaf:c.instructions+=6;goto B69ccaf;
case 0x69ccb1:c.instructions+=5;goto B69ccb1;
case 0x69ccb4:c.instructions+=4;goto B69ccb4;
case 0x69ccb7:c.instructions+=3;goto B69ccb7;
case 0x69ccba:c.instructions+=2;goto B69ccba;
case 0x69ccbd:c.instructions+=1;goto B69ccbd;
case 0x69ccbf:goto L69ccbf;
case 0x69ccc1:c.instructions+=1;goto B69ccc1;
case 0x69ccc6:goto L69ccc6;
case 0x69ccc7:c.instructions+=3;goto B69ccc7;
case 0x69ccca:c.instructions+=2;goto B69ccca;
case 0x69cccc:c.instructions+=1;goto B69cccc;
case 0x69ccce:goto L69ccce;
case 0x69ccd1:c.instructions+=1;goto B69ccd1;
case 0x69ccd4:goto L69ccd4;
case 0x69ccd6:c.instructions+=2;goto B69ccd6;
case 0x69ccd9:c.instructions+=1;goto B69ccd9;
case 0x69ccdb:goto L69ccdb;
case 0x69ccde:c.instructions+=5;goto B69ccde;
case 0x69ccdf:c.instructions+=4;goto B69ccdf;
case 0x69cce2:c.instructions+=3;goto B69cce2;
case 0x69cce4:c.instructions+=2;goto B69cce4;
case 0x69cce7:c.instructions+=1;goto B69cce7;
case 0x69cce9:goto L69cce9;
case 0x69ccec:c.instructions+=3;goto B69ccec;
case 0x69ccee:c.instructions+=2;goto B69ccee;
case 0x69ccf0:c.instructions+=1;goto B69ccf0;
case 0x69ccf2:goto L69ccf2;
case 0x69ccf4:c.instructions+=3;goto B69ccf4;
case 0x69ccf7:c.instructions+=2;goto B69ccf7;
case 0x69ccfa:c.instructions+=1;goto B69ccfa;
case 0x69ccfd:goto L69ccfd;
case 0x69cd00:c.instructions+=12;goto B69cd00;
case 0x69cd02:c.instructions+=11;goto B69cd02;
case 0x69cd06:c.instructions+=10;goto B69cd06;
case 0x69cd08:c.instructions+=9;goto B69cd08;
case 0x69cd0a:c.instructions+=8;goto B69cd0a;
case 0x69cd0d:c.instructions+=7;goto B69cd0d;
case 0x69cd10:c.instructions+=6;goto B69cd10;
case 0x69cd14:c.instructions+=5;goto B69cd14;
case 0x69cd17:c.instructions+=4;goto B69cd17;
case 0x69cd1a:c.instructions+=3;goto B69cd1a;
case 0x69cd1d:c.instructions+=2;goto B69cd1d;
case 0x69cd20:c.instructions+=1;goto B69cd20;
case 0x69cd22:goto L69cd22;
case 0x69cd25:c.instructions+=1;goto B69cd25;
case 0x69cd28:goto L69cd28;
case 0x69cd2a:c.instructions+=3;goto B69cd2a;
case 0x69cd2c:c.instructions+=2;goto B69cd2c;
case 0x69cd2f:c.instructions+=1;goto B69cd2f;
case 0x69cd31:goto L69cd31;
case 0x69cd34:c.instructions+=6;goto B69cd34;
case 0x69cd37:c.instructions+=5;goto B69cd37;
case 0x69cd3b:c.instructions+=4;goto B69cd3b;
case 0x69cd3e:c.instructions+=3;goto B69cd3e;
case 0x69cd40:c.instructions+=2;goto B69cd40;
case 0x69cd43:c.instructions+=1;goto B69cd43;
case 0x69cd45:goto L69cd45;
case 0x69cd48:c.instructions+=1;goto B69cd48;
case 0x69cd4a:goto L69cd4a;
case 0x69cd4d:c.instructions+=1;goto B69cd4d;
case 0x69cd50:goto L69cd50;
case 0x69cd53:c.instructions+=3;goto B69cd53;
case 0x69cd55:c.instructions+=2;goto B69cd55;
case 0x69cd58:c.instructions+=1;goto B69cd58;
case 0x69cd5a:goto L69cd5a;
case 0x69cd5e:c.instructions+=4;goto B69cd5e;
case 0x69cd5f:c.instructions+=3;goto B69cd5f;
case 0x69cd61:c.instructions+=2;goto B69cd61;
case 0x69cd64:c.instructions+=1;goto B69cd64;
case 0x69cd66:goto L69cd66;
case 0x69cd68:c.instructions+=3;goto B69cd68;
case 0x69cd6a:c.instructions+=2;goto B69cd6a;
case 0x69cd6c:c.instructions+=1;goto B69cd6c;
case 0x69cd6e:goto L69cd6e;
case 0x69cd70:c.instructions+=5;goto B69cd70;
case 0x69cd73:c.instructions+=4;goto B69cd73;
case 0x69cd75:c.instructions+=3;goto B69cd75;
case 0x69cd78:c.instructions+=2;goto B69cd78;
case 0x69cd7b:c.instructions+=1;goto B69cd7b;
case 0x69cd7e:goto L69cd7e;
case 0x69cd81:c.instructions+=12;goto B69cd81;
case 0x69cd83:c.instructions+=11;goto B69cd83;
case 0x69cd87:c.instructions+=10;goto B69cd87;
case 0x69cd89:c.instructions+=9;goto B69cd89;
case 0x69cd8b:c.instructions+=8;goto B69cd8b;
case 0x69cd8e:c.instructions+=7;goto B69cd8e;
case 0x69cd91:c.instructions+=6;goto B69cd91;
case 0x69cd95:c.instructions+=5;goto B69cd95;
case 0x69cd98:c.instructions+=4;goto B69cd98;
case 0x69cd9b:c.instructions+=3;goto B69cd9b;
case 0x69cd9e:c.instructions+=2;goto B69cd9e;
case 0x69cda1:c.instructions+=1;goto B69cda1;
case 0x69cda3:goto L69cda3;
case 0x69cda6:c.instructions+=1;goto B69cda6;
case 0x69cda9:goto L69cda9;
case 0x69cdab:c.instructions+=1;goto B69cdab;
case 0x69cdad:goto L69cdad;
case 0x69cdaf:c.instructions+=1;goto B69cdaf;
case 0x69cdb1:goto L69cdb1;
case 0x69cdb4:c.instructions+=3;goto B69cdb4;
case 0x69cdb6:c.instructions+=2;goto B69cdb6;
case 0x69cdb8:c.instructions+=1;goto B69cdb8;
case 0x69cdba:goto L69cdba;
case 0x69cdbc:c.instructions+=2;goto B69cdbc;
case 0x69cdbf:c.instructions+=1;goto B69cdbf;
case 0x69cdc2:goto L69cdc2;
case 0x69cdc5:c.instructions+=10;goto B69cdc5;
case 0x69cdc8:c.instructions+=9;goto B69cdc8;
case 0x69cdcc:c.instructions+=8;goto B69cdcc;
case 0x69cdce:c.instructions+=7;goto B69cdce;
case 0x69cdd0:c.instructions+=6;goto B69cdd0;
case 0x69cdd3:c.instructions+=5;goto B69cdd3;
case 0x69cdd7:c.instructions+=4;goto B69cdd7;
case 0x69cdda:c.instructions+=3;goto B69cdda;
case 0x69cddd:c.instructions+=2;goto B69cddd;
case 0x69cde0:c.instructions+=1;goto B69cde0;
case 0x69cde2:goto L69cde2;
case 0x69cde5:goto L69cde5;
case 0x69cde8:c.instructions+=8;goto B69cde8;
case 0x69cdea:c.instructions+=7;goto B69cdea;
case 0x69cdec:c.instructions+=6;goto B69cdec;
case 0x69cdef:c.instructions+=5;goto B69cdef;
case 0x69cdf2:c.instructions+=4;goto B69cdf2;
case 0x69cdf5:c.instructions+=3;goto B69cdf5;
case 0x69cdf8:c.instructions+=2;goto B69cdf8;
case 0x69cdfa:c.instructions+=1;goto B69cdfa;
case 0x69cdfb:goto L69cdfb;
case 0x69cdfc:goto L69cdfc;
case 0x69cdfd:c.instructions+=3;goto B69cdfd;
case 0x69cdfe:c.instructions+=2;goto B69cdfe;
case 0x69cdff:c.instructions+=1;goto B69cdff;
case 0x69ce02:goto L69ce02;
case 0x69ce04:c.instructions+=10;goto B69ce04;
case 0x69ce05:c.instructions+=9;goto B69ce05;
case 0x69ce07:c.instructions+=8;goto B69ce07;
case 0x69ce0a:c.instructions+=7;goto B69ce0a;
case 0x69ce0b:c.instructions+=6;goto B69ce0b;
case 0x69ce0d:c.instructions+=5;goto B69ce0d;
case 0x69ce0f:c.instructions+=4;goto B69ce0f;
case 0x69ce11:c.instructions+=3;goto B69ce11;
case 0x69ce14:c.instructions+=2;goto B69ce14;
case 0x69ce17:c.instructions+=1;goto B69ce17;
case 0x69ce19:goto L69ce19;
case 0x69ce1c:c.instructions+=5;goto B69ce1c;
case 0x69ce1f:c.instructions+=4;goto B69ce1f;
case 0x69ce23:c.instructions+=3;goto B69ce23;
case 0x69ce24:c.instructions+=2;goto B69ce24;
case 0x69ce27:c.instructions+=1;goto B69ce27;
case 0x69ce29:goto L69ce29;
case 0x69ce2c:c.instructions+=2;goto B69ce2c;
case 0x69ce2f:c.instructions+=1;goto B69ce2f;
case 0x69ce35:goto L69ce35;
case 0x69ce36:c.instructions+=1;goto B69ce36;
case 0x69ce37:goto L69ce37;
case 0x69ce3a:c.instructions+=4;goto B69ce3a;
case 0x69ce3d:c.instructions+=3;goto B69ce3d;
case 0x69ce40:c.instructions+=2;goto B69ce40;
case 0x69ce46:c.instructions+=1;goto B69ce46;
case 0x69ce4c:goto L69ce4c;
case 0x69ce50:c.instructions+=4;goto B69ce50;
case 0x69ce53:c.instructions+=3;goto B69ce53;
case 0x69ce54:c.instructions+=2;goto B69ce54;
case 0x69ce56:c.instructions+=1;goto B69ce56;
case 0x69ce5b:goto L69ce5b;
case 0x69ce5e:c.instructions+=6;goto B69ce5e;
case 0x69ce60:c.instructions+=5;goto B69ce60;
case 0x69ce63:c.instructions+=4;goto B69ce63;
case 0x69ce66:c.instructions+=3;goto B69ce66;
case 0x69ce69:c.instructions+=2;goto B69ce69;
case 0x69ce6d:c.instructions+=1;goto B69ce6d;
case 0x69ce6f:goto L69ce6f;
case 0x69ce71:c.instructions+=4;goto B69ce71;
case 0x69ce72:c.instructions+=3;goto B69ce72;
case 0x69ce75:c.instructions+=2;goto B69ce75;
case 0x69ce78:c.instructions+=1;goto B69ce78;
case 0x69ce7a:goto L69ce7a;
case 0x69ce7d:c.instructions+=7;goto B69ce7d;
case 0x69ce80:c.instructions+=6;goto B69ce80;
case 0x69ce83:c.instructions+=5;goto B69ce83;
case 0x69ce86:c.instructions+=4;goto B69ce86;
case 0x69ce89:c.instructions+=3;goto B69ce89;
case 0x69ce8c:c.instructions+=2;goto B69ce8c;
case 0x69ce90:c.instructions+=1;goto B69ce90;
case 0x69ce92:goto L69ce92;
case 0x69ce95:c.instructions+=9;goto B69ce95;
case 0x69ce98:c.instructions+=8;goto B69ce98;
case 0x69ce9b:c.instructions+=7;goto B69ce9b;
case 0x69ce9e:c.instructions+=6;goto B69ce9e;
case 0x69cea1:c.instructions+=5;goto B69cea1;
case 0x69cea4:c.instructions+=4;goto B69cea4;
case 0x69cea7:c.instructions+=3;goto B69cea7;
case 0x69ceaa:c.instructions+=2;goto B69ceaa;
case 0x69cead:c.instructions+=1;goto B69cead;
case 0x69ceaf:goto L69ceaf;
case 0x69ceb2:c.instructions+=3;goto B69ceb2;
case 0x69ceb5:c.instructions+=2;goto B69ceb5;
case 0x69ceb8:c.instructions+=1;goto B69ceb8;
case 0x69ceba:goto L69ceba;
case 0x69cebd:c.instructions+=2;goto B69cebd;
case 0x69cec0:c.instructions+=1;goto B69cec0;
case 0x69cec2:goto L69cec2;
case 0x69cec4:c.instructions+=2;goto B69cec4;
case 0x69cec7:c.instructions+=1;goto B69cec7;
case 0x69cec9:goto L69cec9;
case 0x69cecc:c.instructions+=9;goto B69cecc;
case 0x69cecf:c.instructions+=8;goto B69cecf;
case 0x69ced2:c.instructions+=7;goto B69ced2;
case 0x69ced4:c.instructions+=6;goto B69ced4;
case 0x69ced7:c.instructions+=5;goto B69ced7;
case 0x69ceda:c.instructions+=4;goto B69ceda;
case 0x69cedb:c.instructions+=3;goto B69cedb;
case 0x69cede:c.instructions+=2;goto B69cede;
case 0x69cee0:c.instructions+=1;goto B69cee0;
case 0x69cee2:goto L69cee2;
case 0x69cee9:goto L69cee9;
case 0x69ceec:c.instructions+=3;goto B69ceec;
case 0x69ceef:c.instructions+=2;goto B69ceef;
case 0x69cef0:c.instructions+=1;goto B69cef0;
case 0x69cef3:goto L69cef3;
case 0x69cef5:c.instructions+=1;goto B69cef5;
case 0x69cefa:goto L69cefa;
case 0x69cefc:c.instructions+=2;goto B69cefc;
case 0x69ceff:c.instructions+=1;goto B69ceff;
case 0x69cf05:goto L69cf05;
case 0x69cf07:c.instructions+=3;goto B69cf07;
case 0x69cf0c:c.instructions+=2;goto B69cf0c;
case 0x69cf11:c.instructions+=1;goto B69cf11;
case 0x69cf13:goto L69cf13;
case 0x69cf17:c.instructions+=2;goto B69cf17;
case 0x69cf1b:c.instructions+=1;goto B69cf1b;
case 0x69cf1d:goto L69cf1d;
case 0x69cf20:c.instructions+=12;goto B69cf20;
case 0x69cf23:c.instructions+=11;goto B69cf23;
case 0x69cf26:c.instructions+=10;goto B69cf26;
case 0x69cf29:c.instructions+=9;goto B69cf29;
case 0x69cf2c:c.instructions+=8;goto B69cf2c;
case 0x69cf2f:c.instructions+=7;goto B69cf2f;
case 0x69cf32:c.instructions+=6;goto B69cf32;
case 0x69cf35:c.instructions+=5;goto B69cf35;
case 0x69cf38:c.instructions+=4;goto B69cf38;
case 0x69cf3b:c.instructions+=3;goto B69cf3b;
case 0x69cf3e:c.instructions+=2;goto B69cf3e;
case 0x69cf41:c.instructions+=1;goto B69cf41;
case 0x69cf43:goto L69cf43;
case 0x69cf46:c.instructions+=2;goto B69cf46;
case 0x69cf49:c.instructions+=1;goto B69cf49;
case 0x69cf4b:goto L69cf4b;
case 0x69cf4e:c.instructions+=2;goto B69cf4e;
case 0x69cf51:c.instructions+=1;goto B69cf51;
case 0x69cf53:goto L69cf53;
case 0x69cf56:c.instructions+=2;goto B69cf56;
case 0x69cf59:c.instructions+=1;goto B69cf59;
case 0x69cf5b:goto L69cf5b;
case 0x69cf5e:c.instructions+=2;goto B69cf5e;
case 0x69cf61:c.instructions+=1;goto B69cf61;
case 0x69cf63:goto L69cf63;
case 0x69cf67:c.instructions+=1;goto B69cf67;
case 0x69cf69:goto L69cf69;
case 0x69cf6d:c.instructions+=1;goto B69cf6d;
case 0x69cf6f:goto L69cf6f;
case 0x69cf72:c.instructions+=1;goto B69cf72;
case 0x69cf75:goto L69cf75;
case 0x69cf78:c.instructions+=3;goto B69cf78;
case 0x69cf7b:c.instructions+=2;goto B69cf7b;
case 0x69cf7e:c.instructions+=1;goto B69cf7e;
case 0x69cf80:goto L69cf80;
case 0x69cf83:c.instructions+=3;goto B69cf83;
case 0x69cf86:c.instructions+=2;goto B69cf86;
case 0x69cf89:c.instructions+=1;goto B69cf89;
case 0x69cf8f:goto L69cf8f;
case 0x69cf90:c.instructions+=1;goto B69cf90;
case 0x69cf91:goto L69cf91;
case 0x69cf93:c.instructions+=5;goto B69cf93;
case 0x69cf96:c.instructions+=4;goto B69cf96;
case 0x69cf97:c.instructions+=3;goto B69cf97;
case 0x69cf9a:c.instructions+=2;goto B69cf9a;
case 0x69cf9b:c.instructions+=1;goto B69cf9b;
case 0x69cf9c:goto L69cf9c;
case 0x69cf9e:c.instructions+=9;goto B69cf9e;
case 0x69cf9f:c.instructions+=8;goto B69cf9f;
case 0x69cfa1:c.instructions+=7;goto B69cfa1;
case 0x69cfa2:c.instructions+=6;goto B69cfa2;
case 0x69cfa5:c.instructions+=5;goto B69cfa5;
case 0x69cfa6:c.instructions+=4;goto B69cfa6;
case 0x69cfa9:c.instructions+=3;goto B69cfa9;
case 0x69cfac:c.instructions+=2;goto B69cfac;
case 0x69cfaf:c.instructions+=1;goto B69cfaf;
case 0x69cfb1:goto L69cfb1;
case 0x69cfb2:c.instructions+=7;goto B69cfb2;
case 0x69cfb5:c.instructions+=6;goto B69cfb5;
case 0x69cfb6:c.instructions+=5;goto B69cfb6;
case 0x69cfb9:c.instructions+=4;goto B69cfb9;
case 0x69cfbb:c.instructions+=3;goto B69cfbb;
case 0x69cfbd:c.instructions+=2;goto B69cfbd;
case 0x69cfc0:c.instructions+=1;goto B69cfc0;
case 0x69cfc2:goto L69cfc2;
case 0x69cfc4:goto L69cfc4;
case 0x69cfc7:goto L69cfc7;
case 0x69cfca:c.instructions+=7;goto B69cfca;
case 0x69cfcd:c.instructions+=6;goto B69cfcd;
case 0x69cfce:c.instructions+=5;goto B69cfce;
case 0x69cfd1:c.instructions+=4;goto B69cfd1;
case 0x69cfd4:c.instructions+=3;goto B69cfd4;
case 0x69cfd5:c.instructions+=2;goto B69cfd5;
case 0x69cfd8:c.instructions+=1;goto B69cfd8;
case 0x69cfdd:goto L69cfdd;
case 0x69cfde:c.instructions+=2;goto B69cfde;
case 0x69cfe1:c.instructions+=1;goto B69cfe1;
case 0x69cfe3:goto L69cfe3;
case 0x69cfe4:c.instructions+=1;goto B69cfe4;
case 0x69cfe5:goto L69cfe5;
case 0x69cfe6:c.instructions+=2;goto B69cfe6;
case 0x69cfe7:c.instructions+=1;goto B69cfe7;
case 0x69cfea:goto L69cfea;
case 0x69cfec:c.instructions+=10;goto B69cfec;
case 0x69cfed:c.instructions+=9;goto B69cfed;
case 0x69cfef:c.instructions+=8;goto B69cfef;
case 0x69cff0:c.instructions+=7;goto B69cff0;
case 0x69cff1:c.instructions+=6;goto B69cff1;
case 0x69cff4:c.instructions+=5;goto B69cff4;
case 0x69cff5:c.instructions+=4;goto B69cff5;
case 0x69cff8:c.instructions+=3;goto B69cff8;
case 0x69cffa:c.instructions+=2;goto B69cffa;
case 0x69cffd:c.instructions+=1;goto B69cffd;
default:missing_instruction(c.pc);}
B69c003:L69c003:{c.instructions+=1;NFSU2_TR(0x69c003);
{goto L69c008;}
}
B69c005:L69c005:{c.instructions+=1;NFSU2_TR(0x69c005);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c008:L69c008:{c.instructions+=2;NFSU2_TR(0x69c008);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c00c:{NFSU2_TR(0x69c00c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69c01b;}}
}
B69c00e:L69c00e:{c.instructions+=3;NFSU2_TR(0x69c00e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69c010:{NFSU2_TR(0x69c010);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c013:{NFSU2_TR(0x69c013);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c01b;}}
}
B69c015:L69c015:{c.instructions+=2;NFSU2_TR(0x69c015);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c018:{NFSU2_TR(0x69c018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c01b:L69c01b:{c.instructions+=5;NFSU2_TR(0x69c01b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69c01d:{NFSU2_TR(0x69c01d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c020:{NFSU2_TR(0x69c020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c023:{NFSU2_TR(0x69c023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c026:{NFSU2_TR(0x69c026);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x69be56u,69b);}
}
B69c02c:L69c02c:{c.instructions+=3;NFSU2_TR(0x69c02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c02f:{NFSU2_TR(0x69c02f);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B69c033:{NFSU2_TR(0x69c033);
if(r1(R+518)){{goto L69c090;}}
}
B69c035:L69c035:{c.instructions+=2;NFSU2_TR(0x69c035);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69c037:{NFSU2_TR(0x69c037);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c03a:L69c03a:{c.instructions+=2;NFSU2_TR(0x69c03a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B69c03e:{NFSU2_TR(0x69c03e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69c082;}}
}
B69c040:L69c040:{c.instructions+=3;NFSU2_TR(0x69c040);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c043:{NFSU2_TR(0x69c043);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B69c047:{NFSU2_TR(0x69c047);
if(r1(R+518)){{goto L69c079;}}
}
B69c049:L69c049:{c.instructions+=2;NFSU2_TR(0x69c049);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c04d:{NFSU2_TR(0x69c04d);
if(r1(R+518)){{goto L69c060;}}
}
B69c04f:L69c04f:{c.instructions+=4;NFSU2_TR(0x69c04f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69c052:{NFSU2_TR(0x69c052);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69c055:{NFSU2_TR(0x69c055);
__builtin_memmove((R+4),(R+12),4);
}
B69c057:{NFSU2_TR(0x69c057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c05cull));
TAIL_STATIC(0x69bce5u,69b);
}
B69c05c:L69c05c:{c.instructions+=2;NFSU2_TR(0x69c05c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69c05e:{NFSU2_TR(0x69c05e);
if(r1(R+518)){{goto L69c079;}}
}
B69c060:L69c060:{c.instructions+=2;NFSU2_TR(0x69c060);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c064:{NFSU2_TR(0x69c064);
if(r1(R+518)){{goto L69c076;}}
}
B69c066:L69c066:{c.instructions+=5;NFSU2_TR(0x69c066);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c067:{NFSU2_TR(0x69c067);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69c06a:{NFSU2_TR(0x69c06a);
__builtin_memmove((R+4),(R+12),4);
}
B69c06c:{NFSU2_TR(0x69c06c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c06d:{NFSU2_TR(0x69c06d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c072ull));
TAIL_STATIC(0x69bd12u,69b);
}
B69c072:L69c072:{c.instructions+=2;NFSU2_TR(0x69c072);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69c074:{NFSU2_TR(0x69c074);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c079;}}
}
B69c076:L69c076:{c.instructions+=1;NFSU2_TR(0x69c076);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c079:L69c079:{c.instructions+=4;NFSU2_TR(0x69c079);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c07c:{NFSU2_TR(0x69c07c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69c07d:{NFSU2_TR(0x69c07d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69c080:{NFSU2_TR(0x69c080);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c03au);}goto L69c03a;}}
}
B69c082:L69c082:{c.instructions+=3;NFSU2_TR(0x69c082);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c085:{NFSU2_TR(0x69c085);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B69c088:{NFSU2_TR(0x69c088);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69c090;}}
}
B69c08a:L69c08a:{c.instructions+=2;NFSU2_TR(0x69c08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c08d:{NFSU2_TR(0x69c08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c090:L69c090:{c.instructions+=4;NFSU2_TR(0x69c090);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69c091:{NFSU2_TR(0x69c091);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69c094:{NFSU2_TR(0x69c094);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c097:{NFSU2_TR(0x69c097);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c02cu);}goto L69c02c;}}
}
B69c099:L69c099:{c.instructions+=2;NFSU2_TR(0x69c099);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c09d:{NFSU2_TR(0x69c09d);
if(r1(R+518)){TAIL_STATIC(0x69be56u,69b);}
}
B69c0a3:L69c0a3:{c.instructions+=9;NFSU2_TR(0x69c0a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69c0a5:{NFSU2_TR(0x69c0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B69c0a8:{NFSU2_TR(0x69c0a8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c0aa:{NFSU2_TR(0x69c0aa);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69c0af:{NFSU2_TR(0x69c0af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+0))));
}
B69c0b1:{NFSU2_TR(0x69c0b1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c0b3:{NFSU2_TR(0x69c0b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c0b4:{NFSU2_TR(0x69c0b4);
__builtin_memmove((R+4),(R+12),4);
}
B69c0b6:{NFSU2_TR(0x69c0b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c0bbull));
TAIL_STATIC(0x699c99u,699);
}
B69c0bb:L69c0bb:{c.instructions+=2;NFSU2_TR(0x69c0bb);
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
B69c0be:{NFSU2_TR(0x69c0be);
if(r1(R+518)){{goto L69c19b;}}
}
B69c0c4:L69c0c4:{c.instructions+=5;NFSU2_TR(0x69c0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c0c7:{NFSU2_TR(0x69c0c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69c0ca:{NFSU2_TR(0x69c0ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c0cb:{NFSU2_TR(0x69c0cb);
__builtin_memmove((R+4),(R+28),4);
}
B69c0cd:{NFSU2_TR(0x69c0cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c0d2ull));
TAIL_STATIC(0x698eb3u,698);
}
B69c0d2:L69c0d2:{c.instructions+=7;NFSU2_TR(0x69c0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c0d5:{NFSU2_TR(0x69c0d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c0d8:{NFSU2_TR(0x69c0d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c0db:{NFSU2_TR(0x69c0db);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69c0dd:{NFSU2_TR(0x69c0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c0e0:{NFSU2_TR(0x69c0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c0e3:{NFSU2_TR(0x69c0e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c0e6:L69c0e6:{c.instructions+=2;NFSU2_TR(0x69c0e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B69c0ea:{NFSU2_TR(0x69c0ea);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69c18c;}}
}
B69c0f0:L69c0f0:{c.instructions+=4;NFSU2_TR(0x69c0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c0f3:{NFSU2_TR(0x69c0f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c0f6:{NFSU2_TR(0x69c0f6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c0f9:{NFSU2_TR(0x69c0f9);
if(r1(R+518)){{goto L69c17f;}}
}
B69c0ff:L69c0ff:{c.instructions+=2;NFSU2_TR(0x69c0ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c103:{NFSU2_TR(0x69c103);
if(r1(R+518)){{goto L69c115;}}
}
B69c105:L69c105:{c.instructions+=4;NFSU2_TR(0x69c105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c108:{NFSU2_TR(0x69c108);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c109:{NFSU2_TR(0x69c109);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69c10c:{NFSU2_TR(0x69c10c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c111ull));
TAIL_STATIC(0x69bce5u,69b);
}
B69c111:L69c111:{c.instructions+=2;NFSU2_TR(0x69c111);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69c113:{NFSU2_TR(0x69c113);
if(r1(R+518)){{goto L69c17f;}}
}
B69c115:L69c115:{c.instructions+=2;NFSU2_TR(0x69c115);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c119:{NFSU2_TR(0x69c119);
if(r1(R+518)){{goto L69c12c;}}
}
B69c11b:L69c11b:{c.instructions+=5;NFSU2_TR(0x69c11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c11e:{NFSU2_TR(0x69c11e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c11f:{NFSU2_TR(0x69c11f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69c122:{NFSU2_TR(0x69c122);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c123:{NFSU2_TR(0x69c123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c128ull));
TAIL_STATIC(0x69bd12u,69b);
}
B69c128:L69c128:{c.instructions+=2;NFSU2_TR(0x69c128);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69c12a:{NFSU2_TR(0x69c12a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c17f;}}
}
B69c12c:L69c12c:{c.instructions+=3;NFSU2_TR(0x69c12c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c130:{NFSU2_TR(0x69c130);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c134:{NFSU2_TR(0x69c134);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c163;}}
}
B69c136:L69c136:{c.instructions+=15;NFSU2_TR(0x69c136);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c139:{NFSU2_TR(0x69c139);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B69c13d:{NFSU2_TR(0x69c13d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c140:{NFSU2_TR(0x69c140);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B69c144:{NFSU2_TR(0x69c144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c147:{NFSU2_TR(0x69c147);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B69c14a:{NFSU2_TR(0x69c14a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B69c14c:{NFSU2_TR(0x69c14c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c14f:{NFSU2_TR(0x69c14f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c152:{NFSU2_TR(0x69c152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c155:{NFSU2_TR(0x69c155);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69c158:{NFSU2_TR(0x69c158);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c15b:{NFSU2_TR(0x69c15b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69c15e:{NFSU2_TR(0x69c15e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c161:{NFSU2_TR(0x69c161);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c136u);}goto L69c136;}}
}
B69c163:L69c163:{c.instructions+=9;NFSU2_TR(0x69c163);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c166:{NFSU2_TR(0x69c166);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c169:{NFSU2_TR(0x69c169);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c16c:{NFSU2_TR(0x69c16c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c16f:{NFSU2_TR(0x69c16f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69c172:{NFSU2_TR(0x69c172);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c175:{NFSU2_TR(0x69c175);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B69c179:{NFSU2_TR(0x69c179);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c17c:{NFSU2_TR(0x69c17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c17f:L69c17f:{c.instructions+=4;NFSU2_TR(0x69c17f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69c180:{NFSU2_TR(0x69c180);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69c183:{NFSU2_TR(0x69c183);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c186:{NFSU2_TR(0x69c186);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c0e6u);}goto L69c0e6;}}
}
B69c18c:L69c18c:{c.instructions+=2;NFSU2_TR(0x69c18c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c190:{NFSU2_TR(0x69c190);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c005u);}goto L69c005;}}
}
B69c196:L69c196:{c.instructions+=1;NFSU2_TR(0x69c196);
TAIL_STATIC(0x69be56u,69b);
}
B69c19b:L69c19b:{c.instructions+=2;NFSU2_TR(0x69c19b);
w4(R+0,u32(0x8007000eull));
}
B69c1a0:{NFSU2_TR(0x69c1a0);
TAIL_STATIC(0x69be58u,69b);
}
B69c1a5:L69c1a5:{c.instructions+=15;NFSU2_TR(0x69c1a5);
__builtin_memmove((R+28),(R+28),4);
}
B69c1a7:{NFSU2_TR(0x69c1a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c1a8:{NFSU2_TR(0x69c1a8);
__builtin_memmove((R+20),(R+16),4);
}
B69c1aa:{NFSU2_TR(0x69c1aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B69c1ad:{NFSU2_TR(0x69c1ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c1ae:{NFSU2_TR(0x69c1ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c1af:{NFSU2_TR(0x69c1af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69c1b2:{NFSU2_TR(0x69c1b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69c1b4:{NFSU2_TR(0x69c1b4);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B69c1b9:{NFSU2_TR(0x69c1b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c1ba:{NFSU2_TR(0x69c1ba);
__builtin_memmove((R+28),(R+4),4);
}
B69c1bc:{NFSU2_TR(0x69c1bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c1bf:{NFSU2_TR(0x69c1bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c1c2:{NFSU2_TR(0x69c1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69c1c9:{NFSU2_TR(0x69c1c9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69c1d7;}}
}
B69c1cb:L69c1cb:{c.instructions+=1;NFSU2_TR(0x69c1cb);
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
B69c1cd:L69c1cd:{c.instructions+=5;NFSU2_TR(0x69c1cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69c1ce:{NFSU2_TR(0x69c1ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69c1cf:{NFSU2_TR(0x69c1cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69c1d0:{NFSU2_TR(0x69c1d0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69c1d1:{NFSU2_TR(0x69c1d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69c1d4:L69c1d4:{c.instructions+=1;NFSU2_TR(0x69c1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c1d7:L69c1d7:{c.instructions+=4;NFSU2_TR(0x69c1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c1da:{NFSU2_TR(0x69c1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c1de:{NFSU2_TR(0x69c1de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c1e1:{NFSU2_TR(0x69c1e1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c331;}}
}
B69c1e7:L69c1e7:{c.instructions+=2;NFSU2_TR(0x69c1e7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69c1e9:{NFSU2_TR(0x69c1e9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c334;}}
}
B69c1ef:L69c1ef:{c.instructions+=5;NFSU2_TR(0x69c1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c1f3:{NFSU2_TR(0x69c1f3);
__builtin_memmove((R+4),(R+0),4);
}
B69c1f5:{NFSU2_TR(0x69c1f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69c1f8:{NFSU2_TR(0x69c1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69c1ff:{NFSU2_TR(0x69c1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c202:L69c202:{c.instructions+=4;NFSU2_TR(0x69c202);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c205:{NFSU2_TR(0x69c205);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c208:{NFSU2_TR(0x69c208);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B69c20c:{NFSU2_TR(0x69c20c);
if(r1(R+518)){{goto L69c318;}}
}
B69c212:L69c212:{c.instructions+=12;NFSU2_TR(0x69c212);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c215:{NFSU2_TR(0x69c215);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c218:{NFSU2_TR(0x69c218);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c21b:{NFSU2_TR(0x69c21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c21e:{NFSU2_TR(0x69c21e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c221:{NFSU2_TR(0x69c221);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c224:{NFSU2_TR(0x69c224);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c227:{NFSU2_TR(0x69c227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c22a:{NFSU2_TR(0x69c22a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69c22d:{NFSU2_TR(0x69c22d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69c234:{NFSU2_TR(0x69c234);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c237:{NFSU2_TR(0x69c237);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69c2d4;}}
}
B69c23d:L69c23d:{c.instructions+=3;NFSU2_TR(0x69c23d);
__builtin_memmove((R+8),(R+12),4);
}
B69c23f:{NFSU2_TR(0x69c23f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B69c242:{NFSU2_TR(0x69c242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c245:L69c245:{c.instructions+=4;NFSU2_TR(0x69c245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c248:{NFSU2_TR(0x69c248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c24b:{NFSU2_TR(0x69c24b);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B69c24f:{NFSU2_TR(0x69c24f);
if(r1(R+518)){{goto L69c2c1;}}
}
B69c251:L69c251:{c.instructions+=15;NFSU2_TR(0x69c251);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c254:{NFSU2_TR(0x69c254);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69c257:{NFSU2_TR(0x69c257);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c25a:{NFSU2_TR(0x69c25a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69c25d:{NFSU2_TR(0x69c25d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c260:{NFSU2_TR(0x69c260);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c263:{NFSU2_TR(0x69c263);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c266:{NFSU2_TR(0x69c266);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69c269:{NFSU2_TR(0x69c269);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c26c:{NFSU2_TR(0x69c26c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69c26f:{NFSU2_TR(0x69c26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c272:{NFSU2_TR(0x69c272);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c275:{NFSU2_TR(0x69c275);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c278:{NFSU2_TR(0x69c278);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c27b:{NFSU2_TR(0x69c27b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c2c1;}}
}
B69c27d:L69c27d:{c.instructions+=3;NFSU2_TR(0x69c27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c280:{NFSU2_TR(0x69c280);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c283:{NFSU2_TR(0x69c283);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c2c1;}}
}
B69c285:L69c285:{c.instructions+=3;NFSU2_TR(0x69c285);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c288:{NFSU2_TR(0x69c288);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c28b:{NFSU2_TR(0x69c28b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c2c1;}}
}
B69c28d:L69c28d:{c.instructions+=3;NFSU2_TR(0x69c28d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c290:{NFSU2_TR(0x69c290);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c293:{NFSU2_TR(0x69c293);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c2c1;}}
}
B69c295:L69c295:{c.instructions+=4;NFSU2_TR(0x69c295);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c298:{NFSU2_TR(0x69c298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c29b:{NFSU2_TR(0x69c29b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c29e:{NFSU2_TR(0x69c29e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c2c1;}}
}
B69c2a0:L69c2a0:{c.instructions+=3;NFSU2_TR(0x69c2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c2a3:{NFSU2_TR(0x69c2a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c2a6:{NFSU2_TR(0x69c2a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c2c1;}}
}
B69c2a8:L69c2a8:{c.instructions+=3;NFSU2_TR(0x69c2a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c2ab:{NFSU2_TR(0x69c2ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c2ae:{NFSU2_TR(0x69c2ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c2c1;}}
}
B69c2b0:L69c2b0:{c.instructions+=3;NFSU2_TR(0x69c2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c2b3:{NFSU2_TR(0x69c2b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c2b6:{NFSU2_TR(0x69c2b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c2c1;}}
}
B69c2b8:L69c2b8:{c.instructions+=3;NFSU2_TR(0x69c2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c2bb:{NFSU2_TR(0x69c2bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c2bf:{NFSU2_TR(0x69c2bf);
if(r1(R+518)){{goto L69c2d4;}}
}
B69c2c1:L69c2c1:{c.instructions+=5;NFSU2_TR(0x69c2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c2c4:{NFSU2_TR(0x69c2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c2c7:{NFSU2_TR(0x69c2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c2cb:{NFSU2_TR(0x69c2cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69c2ce:{NFSU2_TR(0x69c2ce);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c245u);}goto L69c245;}}
}
B69c2d4:L69c2d4:{c.instructions+=3;NFSU2_TR(0x69c2d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c2d7:{NFSU2_TR(0x69c2d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c2da:{NFSU2_TR(0x69c2da);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c30f;}}
}
B69c2dc:L69c2dc:{c.instructions+=17;NFSU2_TR(0x69c2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c2df:{NFSU2_TR(0x69c2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c2e2:{NFSU2_TR(0x69c2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c2e5:{NFSU2_TR(0x69c2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c2e8:{NFSU2_TR(0x69c2e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c2eb:{NFSU2_TR(0x69c2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c2ee:{NFSU2_TR(0x69c2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c2f1:{NFSU2_TR(0x69c2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c2f4:{NFSU2_TR(0x69c2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c2f7:{NFSU2_TR(0x69c2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c2fa:{NFSU2_TR(0x69c2fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c2fd:{NFSU2_TR(0x69c2fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c300:{NFSU2_TR(0x69c300);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c303:{NFSU2_TR(0x69c303);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c306:{NFSU2_TR(0x69c306);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c309:{NFSU2_TR(0x69c309);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c30c:{NFSU2_TR(0x69c30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c30f:L69c30f:{c.instructions+=2;NFSU2_TR(0x69c30f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c313:{NFSU2_TR(0x69c313);
if(r1(R+518)){{goto L69c334;}}
}
B69c315:L69c315:{c.instructions+=1;NFSU2_TR(0x69c315);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c318:L69c318:{c.instructions+=7;NFSU2_TR(0x69c318);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c31c:{NFSU2_TR(0x69c31c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c320:{NFSU2_TR(0x69c320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c323:{NFSU2_TR(0x69c323);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c326:{NFSU2_TR(0x69c326);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B69c327:{NFSU2_TR(0x69c327);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B69c329:{NFSU2_TR(0x69c329);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c202u);}goto L69c202;}}
}
B69c32f:L69c32f:{c.instructions+=1;NFSU2_TR(0x69c32f);
{goto L69c334;}
}
B69c331:L69c331:{c.instructions+=1;NFSU2_TR(0x69c331);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c334:L69c334:{c.instructions+=8;NFSU2_TR(0x69c334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c337:{NFSU2_TR(0x69c337);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c339:{NFSU2_TR(0x69c339);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69c33e:{NFSU2_TR(0x69c33e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c340:{NFSU2_TR(0x69c340);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50000000ull))));
}
B69c345:{NFSU2_TR(0x69c345);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c346:{NFSU2_TR(0x69c346);
__builtin_memmove((R+4),(R+28),4);
}
B69c348:{NFSU2_TR(0x69c348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c34dull));
TAIL_STATIC(0x699c99u,699);
}
B69c34d:L69c34d:{c.instructions+=2;NFSU2_TR(0x69c34d);
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
B69c350:{NFSU2_TR(0x69c350);
if(r1(R+518)){{goto L69c660;}}
}
B69c356:L69c356:{c.instructions+=5;NFSU2_TR(0x69c356);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c359:{NFSU2_TR(0x69c359);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69c35c:{NFSU2_TR(0x69c35c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c35d:{NFSU2_TR(0x69c35d);
__builtin_memmove((R+4),(R+12),4);
}
B69c35f:{NFSU2_TR(0x69c35f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c364ull));
TAIL_STATIC(0x698eb3u,698);
}
B69c364:L69c364:{c.instructions+=6;NFSU2_TR(0x69c364);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c367:{NFSU2_TR(0x69c367);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69c369:{NFSU2_TR(0x69c369);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c36b:{NFSU2_TR(0x69c36b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c36e:{NFSU2_TR(0x69c36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c371:{NFSU2_TR(0x69c371);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c456;}}
}
B69c377:L69c377:{c.instructions+=5;NFSU2_TR(0x69c377);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69c37a:{NFSU2_TR(0x69c37a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c37d:{NFSU2_TR(0x69c37d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c380:{NFSU2_TR(0x69c380);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69c383:{NFSU2_TR(0x69c383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c386:L69c386:{c.instructions+=3;NFSU2_TR(0x69c386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c389:{NFSU2_TR(0x69c389);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B69c38c:{NFSU2_TR(0x69c38c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69c456;}}
}
B69c392:L69c392:{c.instructions+=3;NFSU2_TR(0x69c392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c395:{NFSU2_TR(0x69c395);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B69c399:{NFSU2_TR(0x69c399);
if(r1(R+518)){{goto L69c445;}}
}
B69c39f:L69c39f:{c.instructions+=12;NFSU2_TR(0x69c39f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c3a3:{NFSU2_TR(0x69c3a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c3a6:{NFSU2_TR(0x69c3a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c3a9:{NFSU2_TR(0x69c3a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c3ac:{NFSU2_TR(0x69c3ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c3af:{NFSU2_TR(0x69c3af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c3b2:{NFSU2_TR(0x69c3b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c3b5:{NFSU2_TR(0x69c3b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69c3b8:{NFSU2_TR(0x69c3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c3bb:{NFSU2_TR(0x69c3bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c3be:{NFSU2_TR(0x69c3be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c3c1:{NFSU2_TR(0x69c3c1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c409;}}
}
B69c3c3:L69c3c3:{c.instructions+=4;NFSU2_TR(0x69c3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c3c6:{NFSU2_TR(0x69c3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c3c9:{NFSU2_TR(0x69c3c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c3cc:{NFSU2_TR(0x69c3cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c445;}}
}
B69c3ce:L69c3ce:{c.instructions+=3;NFSU2_TR(0x69c3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c3d1:{NFSU2_TR(0x69c3d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c3d4:{NFSU2_TR(0x69c3d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c445;}}
}
B69c3d6:L69c3d6:{c.instructions+=3;NFSU2_TR(0x69c3d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c3d9:{NFSU2_TR(0x69c3d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c3dc:{NFSU2_TR(0x69c3dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c445;}}
}
B69c3de:L69c3de:{c.instructions+=3;NFSU2_TR(0x69c3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c3e1:{NFSU2_TR(0x69c3e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c3e4:{NFSU2_TR(0x69c3e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c445;}}
}
B69c3e6:L69c3e6:{c.instructions+=4;NFSU2_TR(0x69c3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c3e9:{NFSU2_TR(0x69c3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c3ec:{NFSU2_TR(0x69c3ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c3ef:{NFSU2_TR(0x69c3ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c445;}}
}
B69c3f1:L69c3f1:{c.instructions+=3;NFSU2_TR(0x69c3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c3f4:{NFSU2_TR(0x69c3f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c3f7:{NFSU2_TR(0x69c3f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c445;}}
}
B69c3f9:L69c3f9:{c.instructions+=3;NFSU2_TR(0x69c3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c3fc:{NFSU2_TR(0x69c3fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c3ff:{NFSU2_TR(0x69c3ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c445;}}
}
B69c401:L69c401:{c.instructions+=3;NFSU2_TR(0x69c401);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c404:{NFSU2_TR(0x69c404);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c407:{NFSU2_TR(0x69c407);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c445;}}
}
B69c409:L69c409:{c.instructions+=19;NFSU2_TR(0x69c409);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c40c:{NFSU2_TR(0x69c40c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c40f:{NFSU2_TR(0x69c40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c412:{NFSU2_TR(0x69c412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c415:{NFSU2_TR(0x69c415);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69c418:{NFSU2_TR(0x69c418);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c41b:{NFSU2_TR(0x69c41b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c41e:{NFSU2_TR(0x69c41e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c421:{NFSU2_TR(0x69c421);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c424:{NFSU2_TR(0x69c424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c427:{NFSU2_TR(0x69c427);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69c42a:{NFSU2_TR(0x69c42a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c42d:{NFSU2_TR(0x69c42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c430:{NFSU2_TR(0x69c430);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B69c434:{NFSU2_TR(0x69c434);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c437:{NFSU2_TR(0x69c437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c43a:{NFSU2_TR(0x69c43a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B69c43e:{NFSU2_TR(0x69c43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c441:{NFSU2_TR(0x69c441);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c445:L69c445:{c.instructions+=5;NFSU2_TR(0x69c445);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c449:{NFSU2_TR(0x69c449);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69c44a:{NFSU2_TR(0x69c44a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69c44d:{NFSU2_TR(0x69c44d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c450:{NFSU2_TR(0x69c450);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c386u);}goto L69c386;}}
}
B69c456:L69c456:{c.instructions+=2;NFSU2_TR(0x69c456);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c45a:{NFSU2_TR(0x69c45a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c4b9;}}
}
B69c45c:L69c45c:{c.instructions+=9;NFSU2_TR(0x69c45c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c45d:{NFSU2_TR(0x69c45d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69c45f:{NFSU2_TR(0x69c45f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c460:{NFSU2_TR(0x69c460);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69c463:{NFSU2_TR(0x69c463);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c465:{NFSU2_TR(0x69c465);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c467:{NFSU2_TR(0x69c467);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69c46d:{NFSU2_TR(0x69c46d);
__builtin_memmove((R+4),(R+28),4);
}
B69c46f:{NFSU2_TR(0x69c46f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c474ull));
TAIL_STATIC(0x699c39u,699);
}
B69c474:L69c474:{c.instructions+=5;NFSU2_TR(0x69c474);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c477:{NFSU2_TR(0x69c477);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69c479:{NFSU2_TR(0x69c479);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c47c:{NFSU2_TR(0x69c47c);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B69c47f:{NFSU2_TR(0x69c47f);
if(r1(R+518)){{goto L69c660;}}
}
B69c485:L69c485:{c.instructions+=19;NFSU2_TR(0x69c485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c488:{NFSU2_TR(0x69c488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69c48a:{NFSU2_TR(0x69c48a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c48d:{NFSU2_TR(0x69c48d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c490:{NFSU2_TR(0x69c490);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c493:{NFSU2_TR(0x69c493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69c495:{NFSU2_TR(0x69c495);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c498:{NFSU2_TR(0x69c498);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c49b:{NFSU2_TR(0x69c49b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c49e:{NFSU2_TR(0x69c49e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c4a1:{NFSU2_TR(0x69c4a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c4a4:{NFSU2_TR(0x69c4a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69c4a6:{NFSU2_TR(0x69c4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c4a9:{NFSU2_TR(0x69c4a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c4ac:{NFSU2_TR(0x69c4ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69c4ae:{NFSU2_TR(0x69c4ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c4b1:{NFSU2_TR(0x69c4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c4b4:{NFSU2_TR(0x69c4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c4b7:{NFSU2_TR(0x69c4b7);
{goto L69c4c3;}
}
B69c4b9:L69c4b9:{c.instructions+=4;NFSU2_TR(0x69c4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c4bc:{NFSU2_TR(0x69c4bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c4bf:{NFSU2_TR(0x69c4bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69c4c1:{NFSU2_TR(0x69c4c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69c4c3:L69c4c3:{c.instructions+=5;NFSU2_TR(0x69c4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c4c6:{NFSU2_TR(0x69c4c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c4c9:{NFSU2_TR(0x69c4c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c4cc:{NFSU2_TR(0x69c4cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c4d0:{NFSU2_TR(0x69c4d0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c1d4u);}goto L69c1d4;}}
}
B69c4d6:L69c4d6:{c.instructions+=2;NFSU2_TR(0x69c4d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c4da:{NFSU2_TR(0x69c4da);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c1cbu);}goto L69c1cb;}}
}
B69c4e0:L69c4e0:{c.instructions+=9;NFSU2_TR(0x69c4e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c4e1:{NFSU2_TR(0x69c4e1);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B69c4e3:{NFSU2_TR(0x69c4e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c4e4:{NFSU2_TR(0x69c4e4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69c4e7:{NFSU2_TR(0x69c4e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c4e9:{NFSU2_TR(0x69c4e9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c4eb:{NFSU2_TR(0x69c4eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69c4ee:{NFSU2_TR(0x69c4ee);
__builtin_memmove((R+4),(R+28),4);
}
B69c4f0:{NFSU2_TR(0x69c4f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c4f5ull));
TAIL_STATIC(0x699c39u,699);
}
B69c4f5:L69c4f5:{c.instructions+=3;NFSU2_TR(0x69c4f5);
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
B69c4f8:{NFSU2_TR(0x69c4f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c4fb:{NFSU2_TR(0x69c4fb);
if(r1(R+518)){{goto L69c660;}}
}
B69c501:L69c501:{c.instructions+=7;NFSU2_TR(0x69c501);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c504:{NFSU2_TR(0x69c504);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B69c507:{NFSU2_TR(0x69c507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c50a:{NFSU2_TR(0x69c50a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69c50c:{NFSU2_TR(0x69c50c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c50f:{NFSU2_TR(0x69c50f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c512:{NFSU2_TR(0x69c512);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c64c;}}
}
B69c518:L69c518:{c.instructions+=1;NFSU2_TR(0x69c518);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c51b:L69c51b:{c.instructions+=7;NFSU2_TR(0x69c51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c51e:{NFSU2_TR(0x69c51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B69c521:{NFSU2_TR(0x69c521);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c523:{NFSU2_TR(0x69c523);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69c524:{NFSU2_TR(0x69c524);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c526:{NFSU2_TR(0x69c526);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c529:{NFSU2_TR(0x69c529);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c530;}}
}
B69c52b:L69c52b:{c.instructions+=2;NFSU2_TR(0x69c52b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c52e:{NFSU2_TR(0x69c52e);
__builtin_memmove((R+0),(R+4),4);
}
B69c530:L69c530:{c.instructions+=4;NFSU2_TR(0x69c530);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c533:{NFSU2_TR(0x69c533);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c535:{NFSU2_TR(0x69c535);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c537:{NFSU2_TR(0x69c537);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c540;}}
}
B69c539:L69c539:{c.instructions+=2;NFSU2_TR(0x69c539);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c53e:{NFSU2_TR(0x69c53e);
{goto L69c557;}
}
B69c540:L69c540:{c.instructions+=2;NFSU2_TR(0x69c540);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c543:{NFSU2_TR(0x69c543);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c54c;}}
}
B69c545:L69c545:{c.instructions+=2;NFSU2_TR(0x69c545);
u8 U[4];
w4(U+0,u32(0x20400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c54a:{NFSU2_TR(0x69c54a);
{goto L69c557;}
}
B69c54c:L69c54c:{c.instructions+=3;NFSU2_TR(0x69c54c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69c551:{NFSU2_TR(0x69c551);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50000000ull))));
}
B69c556:{NFSU2_TR(0x69c556);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c557:L69c557:{c.instructions+=2;NFSU2_TR(0x69c557);
__builtin_memmove((R+4),(R+28),4);
}
B69c559:{NFSU2_TR(0x69c559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c55eull));
TAIL_STATIC(0x699c99u,699);
}
B69c55e:L69c55e:{c.instructions+=2;NFSU2_TR(0x69c55e);
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
B69c561:{NFSU2_TR(0x69c561);
if(r1(R+518)){{goto L69c660;}}
}
B69c567:L69c567:{c.instructions+=5;NFSU2_TR(0x69c567);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c56a:{NFSU2_TR(0x69c56a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69c56d:{NFSU2_TR(0x69c56d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c56e:{NFSU2_TR(0x69c56e);
__builtin_memmove((R+4),(R+12),4);
}
B69c570:{NFSU2_TR(0x69c570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c575ull));
TAIL_STATIC(0x698eb3u,698);
}
B69c575:L69c575:{c.instructions+=5;NFSU2_TR(0x69c575);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c578:{NFSU2_TR(0x69c578);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69c57a:{NFSU2_TR(0x69c57a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69c57c:{NFSU2_TR(0x69c57c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c57f:{NFSU2_TR(0x69c57f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c5ca;}}
}
B69c581:L69c581:{c.instructions+=5;NFSU2_TR(0x69c581);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69c584:{NFSU2_TR(0x69c584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c587:{NFSU2_TR(0x69c587);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c58a:{NFSU2_TR(0x69c58a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69c58d:{NFSU2_TR(0x69c58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c590:L69c590:{c.instructions+=9;NFSU2_TR(0x69c590);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c594:{NFSU2_TR(0x69c594);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c597:{NFSU2_TR(0x69c597);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c59a:{NFSU2_TR(0x69c59a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c59d:{NFSU2_TR(0x69c59d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c5a0:{NFSU2_TR(0x69c5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c5a3:{NFSU2_TR(0x69c5a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69c5a5:{NFSU2_TR(0x69c5a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69c5a8:{NFSU2_TR(0x69c5a8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c5b6;}}
}
B69c5aa:L69c5aa:{c.instructions+=4;NFSU2_TR(0x69c5aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c5ad:{NFSU2_TR(0x69c5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c5b0:{NFSU2_TR(0x69c5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c5b3:{NFSU2_TR(0x69c5b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69c5b6:L69c5b6:{c.instructions+=7;NFSU2_TR(0x69c5b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c5b9:{NFSU2_TR(0x69c5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c5bd:{NFSU2_TR(0x69c5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c5c1:{NFSU2_TR(0x69c5c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69c5c2:{NFSU2_TR(0x69c5c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69c5c5:{NFSU2_TR(0x69c5c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c5c8:{NFSU2_TR(0x69c5c8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c590u);}goto L69c590;}}
}
B69c5ca:L69c5ca:{c.instructions+=2;NFSU2_TR(0x69c5ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c5ce:{NFSU2_TR(0x69c5ce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c629;}}
}
B69c5d0:L69c5d0:{c.instructions+=9;NFSU2_TR(0x69c5d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c5d1:{NFSU2_TR(0x69c5d1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69c5d3:{NFSU2_TR(0x69c5d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c5d4:{NFSU2_TR(0x69c5d4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69c5d7:{NFSU2_TR(0x69c5d7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c5d9:{NFSU2_TR(0x69c5d9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c5db:{NFSU2_TR(0x69c5db);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69c5e1:{NFSU2_TR(0x69c5e1);
__builtin_memmove((R+4),(R+28),4);
}
B69c5e3:{NFSU2_TR(0x69c5e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c5e8ull));
TAIL_STATIC(0x699c39u,699);
}
B69c5e8:L69c5e8:{c.instructions+=5;NFSU2_TR(0x69c5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c5eb:{NFSU2_TR(0x69c5eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69c5ed:{NFSU2_TR(0x69c5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c5f0:{NFSU2_TR(0x69c5f0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B69c5f3:{NFSU2_TR(0x69c5f3);
if(r1(R+518)){{goto L69c660;}}
}
B69c5f5:L69c5f5:{c.instructions+=19;NFSU2_TR(0x69c5f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c5f8:{NFSU2_TR(0x69c5f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69c5fa:{NFSU2_TR(0x69c5fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c5fd:{NFSU2_TR(0x69c5fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c600:{NFSU2_TR(0x69c600);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c603:{NFSU2_TR(0x69c603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69c605:{NFSU2_TR(0x69c605);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c608:{NFSU2_TR(0x69c608);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c60b:{NFSU2_TR(0x69c60b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c60e:{NFSU2_TR(0x69c60e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c611:{NFSU2_TR(0x69c611);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c614:{NFSU2_TR(0x69c614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69c616:{NFSU2_TR(0x69c616);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c619:{NFSU2_TR(0x69c619);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c61c:{NFSU2_TR(0x69c61c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69c61e:{NFSU2_TR(0x69c61e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c621:{NFSU2_TR(0x69c621);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c624:{NFSU2_TR(0x69c624);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c627:{NFSU2_TR(0x69c627);
{goto L69c633;}
}
B69c629:L69c629:{c.instructions+=4;NFSU2_TR(0x69c629);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c62c:{NFSU2_TR(0x69c62c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c62f:{NFSU2_TR(0x69c62f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69c631:{NFSU2_TR(0x69c631);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69c633:L69c633:{c.instructions+=7;NFSU2_TR(0x69c633);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c636:{NFSU2_TR(0x69c636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c639:{NFSU2_TR(0x69c639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c63d:{NFSU2_TR(0x69c63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c640:{NFSU2_TR(0x69c640);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c643:{NFSU2_TR(0x69c643);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69c646:{NFSU2_TR(0x69c646);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c51bu);}goto L69c51b;}}
}
B69c64c:L69c64c:{c.instructions+=4;NFSU2_TR(0x69c64c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c64f:{NFSU2_TR(0x69c64f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c652:{NFSU2_TR(0x69c652);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c655:{NFSU2_TR(0x69c655);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c501u);}goto L69c501;}}
}
B69c65b:L69c65b:{c.instructions+=1;NFSU2_TR(0x69c65b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c1cbu);}goto L69c1cb;}
}
B69c660:L69c660:{c.instructions+=2;NFSU2_TR(0x69c660);
w4(R+0,u32(0x8007000eull));
}
B69c665:{NFSU2_TR(0x69c665);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c1cdu);}goto L69c1cd;}
}
B69c66a:L69c66a:{c.instructions+=10;NFSU2_TR(0x69c66a);
__builtin_memmove((R+28),(R+28),4);
}
B69c66c:{NFSU2_TR(0x69c66c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c66d:{NFSU2_TR(0x69c66d);
__builtin_memmove((R+20),(R+16),4);
}
B69c66f:{NFSU2_TR(0x69c66f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B69c672:{NFSU2_TR(0x69c672);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c673:{NFSU2_TR(0x69c673);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c674:{NFSU2_TR(0x69c674);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69c677:{NFSU2_TR(0x69c677);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c678:{NFSU2_TR(0x69c678);
__builtin_memmove((R+12),(R+4),4);
}
B69c67a:{NFSU2_TR(0x69c67a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c67full));
TAIL_STATIC(0x699d92u,699);
}
B69c67f:L69c67f:{c.instructions+=2;NFSU2_TR(0x69c67f);
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
B69c682:{NFSU2_TR(0x69c682);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c68e;}}
}
B69c684:L69c684:{c.instructions+=2;NFSU2_TR(0x69c684);
w4(R+0,u32(0x8007000eull));
}
B69c689:{NFSU2_TR(0x69c689);
{goto L69c80a;}
}
B69c68e:L69c68e:{c.instructions+=6;NFSU2_TR(0x69c68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c691:{NFSU2_TR(0x69c691);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c692:{NFSU2_TR(0x69c692);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69c695:{NFSU2_TR(0x69c695);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c696:{NFSU2_TR(0x69c696);
__builtin_memmove((R+4),(R+28),4);
}
B69c698:{NFSU2_TR(0x69c698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c69dull));
TAIL_STATIC(0x698eb3u,698);
}
B69c69d:L69c69d:{c.instructions+=4;NFSU2_TR(0x69c69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69c6a0:{NFSU2_TR(0x69c6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c6a4:{NFSU2_TR(0x69c6a4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69c6a6:{NFSU2_TR(0x69c6a6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c6d5;}}
}
B69c6a8:L69c6a8:{c.instructions+=5;NFSU2_TR(0x69c6a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c6ab:{NFSU2_TR(0x69c6ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c6ae:{NFSU2_TR(0x69c6ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69c6b0:{NFSU2_TR(0x69c6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c6b3:{NFSU2_TR(0x69c6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c6b6:L69c6b6:{c.instructions+=5;NFSU2_TR(0x69c6b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c6b9:{NFSU2_TR(0x69c6b9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B69c6bb:{NFSU2_TR(0x69c6bb);
__builtin_memmove((R+4),(R+12),4);
}
B69c6bd:{NFSU2_TR(0x69c6bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69c6c0:{NFSU2_TR(0x69c6c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c6c5ull));
TAIL_STATIC(0x69bc70u,69b);
}
B69c6c5:L69c6c5:{c.instructions+=2;NFSU2_TR(0x69c6c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69c6c7:{NFSU2_TR(0x69c6c7);
if(r1(R+518)){{goto L69c6d5;}}
}
B69c6c9:L69c6c9:{c.instructions+=4;NFSU2_TR(0x69c6c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c6cc:{NFSU2_TR(0x69c6cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c6d0:{NFSU2_TR(0x69c6d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B69c6d3:{NFSU2_TR(0x69c6d3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c6b6u);}goto L69c6b6;}}
}
B69c6d5:L69c6d5:{c.instructions+=2;NFSU2_TR(0x69c6d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c6d8:{NFSU2_TR(0x69c6d8);
if(r1(R+518)){{goto L69c807;}}
}
B69c6de:L69c6de:{c.instructions+=7;NFSU2_TR(0x69c6de);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c6e0:{NFSU2_TR(0x69c6e0);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B69c6e6:{NFSU2_TR(0x69c6e6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c6e8:{NFSU2_TR(0x69c6e8);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x10000000ull))));
}
B69c6ee:{NFSU2_TR(0x69c6ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c6ef:{NFSU2_TR(0x69c6ef);
__builtin_memmove((R+4),(R+12),4);
}
B69c6f1:{NFSU2_TR(0x69c6f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c6f6ull));
TAIL_STATIC(0x699c99u,699);
}
B69c6f6:L69c6f6:{c.instructions+=2;NFSU2_TR(0x69c6f6);
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
B69c6f9:{NFSU2_TR(0x69c6f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c705;}}
}
B69c6fb:L69c6fb:{c.instructions+=2;NFSU2_TR(0x69c6fb);
w4(R+0,u32(0x8007000eull));
}
B69c700:{NFSU2_TR(0x69c700);
{goto L69c809;}
}
B69c705:L69c705:{c.instructions+=6;NFSU2_TR(0x69c705);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c708:{NFSU2_TR(0x69c708);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69c70b:{NFSU2_TR(0x69c70b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69c70e:{NFSU2_TR(0x69c70e);
__builtin_memmove((R+4),(R+24),4);
}
B69c710:{NFSU2_TR(0x69c710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c713:{NFSU2_TR(0x69c713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c718ull));
TAIL_STATIC(0x698eb3u,698);
}
B69c718:L69c718:{c.instructions+=3;NFSU2_TR(0x69c718);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c71c:{NFSU2_TR(0x69c71c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c720:{NFSU2_TR(0x69c720);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c7f8;}}
}
B69c726:L69c726:{c.instructions+=16;NFSU2_TR(0x69c726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c729:{NFSU2_TR(0x69c729);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69c72b:{NFSU2_TR(0x69c72b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c72e:{NFSU2_TR(0x69c72e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69c731:{NFSU2_TR(0x69c731);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c734:{NFSU2_TR(0x69c734);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c735:{NFSU2_TR(0x69c735);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c736:{NFSU2_TR(0x69c736);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69c739:{NFSU2_TR(0x69c739);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B69c73c:{NFSU2_TR(0x69c73c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c73f:{NFSU2_TR(0x69c73f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c741:{NFSU2_TR(0x69c741);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69c744:{NFSU2_TR(0x69c744);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c746:{NFSU2_TR(0x69c746);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69c74c:{NFSU2_TR(0x69c74c);
__builtin_memmove((R+4),(R+12),4);
}
B69c74e:{NFSU2_TR(0x69c74e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c753ull));
TAIL_STATIC(0x699c39u,699);
}
B69c753:L69c753:{c.instructions+=10;NFSU2_TR(0x69c753);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c756:{NFSU2_TR(0x69c756);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c759:{NFSU2_TR(0x69c759);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69c75c:{NFSU2_TR(0x69c75c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c75f:{NFSU2_TR(0x69c75f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c762:{NFSU2_TR(0x69c762);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c765:{NFSU2_TR(0x69c765);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69c768:{NFSU2_TR(0x69c768);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c76b:{NFSU2_TR(0x69c76b);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B69c76f:{NFSU2_TR(0x69c76f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c6fbu);}goto L69c6fb;}}
}
B69c771:L69c771:{c.instructions+=9;NFSU2_TR(0x69c771);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c774:{NFSU2_TR(0x69c774);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c777:{NFSU2_TR(0x69c777);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c77a:{NFSU2_TR(0x69c77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c77d:{NFSU2_TR(0x69c77d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69c780:{NFSU2_TR(0x69c780);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c783:{NFSU2_TR(0x69c783);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c786:{NFSU2_TR(0x69c786);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c789:{NFSU2_TR(0x69c789);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c78eull));
TAIL_STATIC(0x699821u,699);
}
B69c78e:L69c78e:{c.instructions+=34;NFSU2_TR(0x69c78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c791:{NFSU2_TR(0x69c791);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c794:{NFSU2_TR(0x69c794);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c797:{NFSU2_TR(0x69c797);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c79a:{NFSU2_TR(0x69c79a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c79d:{NFSU2_TR(0x69c79d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c7a0:{NFSU2_TR(0x69c7a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c7a3:{NFSU2_TR(0x69c7a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69c7a6:{NFSU2_TR(0x69c7a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c7a9:{NFSU2_TR(0x69c7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c7ac:{NFSU2_TR(0x69c7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c7af:{NFSU2_TR(0x69c7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c7b2:{NFSU2_TR(0x69c7b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c7b5:{NFSU2_TR(0x69c7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c7b8:{NFSU2_TR(0x69c7b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c7bb:{NFSU2_TR(0x69c7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c7be:{NFSU2_TR(0x69c7be);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69c7c1:{NFSU2_TR(0x69c7c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c7c4:{NFSU2_TR(0x69c7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c7c7:{NFSU2_TR(0x69c7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c7ca:{NFSU2_TR(0x69c7ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c7cd:{NFSU2_TR(0x69c7cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c7d0:{NFSU2_TR(0x69c7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c7d3:{NFSU2_TR(0x69c7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c7d6:{NFSU2_TR(0x69c7d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c7d9:{NFSU2_TR(0x69c7d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c7dc:{NFSU2_TR(0x69c7dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c7df:{NFSU2_TR(0x69c7df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69c7e2:{NFSU2_TR(0x69c7e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c7e5:{NFSU2_TR(0x69c7e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69c7e7:{NFSU2_TR(0x69c7e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69c7e9:{NFSU2_TR(0x69c7e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c7ec:{NFSU2_TR(0x69c7ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69c7ef:{NFSU2_TR(0x69c7ef);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c726u);}goto L69c726;}}
}
B69c7f5:L69c7f5:{c.instructions+=1;NFSU2_TR(0x69c7f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69c7f8:L69c7f8:{c.instructions+=3;NFSU2_TR(0x69c7f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c7f9:{NFSU2_TR(0x69c7f9);
__builtin_memmove((R+4),(R+12),4);
}
B69c7fb:{NFSU2_TR(0x69c7fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69c800ull));
TAIL_STATIC(0x69bdb7u,69b);
}
B69c800:L69c800:{c.instructions+=2;NFSU2_TR(0x69c800);
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
B69c802:{NFSU2_TR(0x69c802);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69c809;}}
}
B69c804:L69c804:{c.instructions+=1;NFSU2_TR(0x69c804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B69c807:L69c807:{c.instructions+=1;NFSU2_TR(0x69c807);
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
B69c809:L69c809:{c.instructions+=1;NFSU2_TR(0x69c809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69c80a:L69c80a:{c.instructions+=4;NFSU2_TR(0x69c80a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69c80b:{NFSU2_TR(0x69c80b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69c80c:{NFSU2_TR(0x69c80c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69c80d:{NFSU2_TR(0x69c80d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69c810:L69c810:{c.instructions+=11;NFSU2_TR(0x69c810);
__builtin_memmove((R+28),(R+28),4);
}
B69c812:{NFSU2_TR(0x69c812);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c813:{NFSU2_TR(0x69c813);
__builtin_memmove((R+20),(R+16),4);
}
B69c815:{NFSU2_TR(0x69c815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B69c818:{NFSU2_TR(0x69c818);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c819:{NFSU2_TR(0x69c819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c81c:{NFSU2_TR(0x69c81c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c81d:{NFSU2_TR(0x69c81d);
__builtin_memmove((R+24),(R+4),4);
}
B69c81f:{NFSU2_TR(0x69c81f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69c821:{NFSU2_TR(0x69c821);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69c827:{NFSU2_TR(0x69c827);
if(r1(R+518)){{goto L69c8ed;}}
}
B69c82d:L69c82d:{c.instructions+=7;NFSU2_TR(0x69c82d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c830:{NFSU2_TR(0x69c830);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B69c836:{NFSU2_TR(0x69c836);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69c838:{NFSU2_TR(0x69c838);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69c838);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69c838);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B69c83a:{NFSU2_TR(0x69c83a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c83d:{NFSU2_TR(0x69c83d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69c83f:{NFSU2_TR(0x69c83f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c8ed;}}
}
B69c845:L69c845:{c.instructions+=3;NFSU2_TR(0x69c845);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c849:{NFSU2_TR(0x69c849);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c84c:{NFSU2_TR(0x69c84c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c84d:L69c84d:{c.instructions+=2;NFSU2_TR(0x69c84d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69c84f:{NFSU2_TR(0x69c84f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69c8db;}}
}
B69c855:L69c855:{c.instructions+=2;NFSU2_TR(0x69c855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69c858:{NFSU2_TR(0x69c858);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c85b:L69c85b:{c.instructions+=7;NFSU2_TR(0x69c85b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c85e:{NFSU2_TR(0x69c85e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c861:{NFSU2_TR(0x69c861);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c864:{NFSU2_TR(0x69c864);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c867:{NFSU2_TR(0x69c867);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c86a:{NFSU2_TR(0x69c86a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c86d:{NFSU2_TR(0x69c86d);
if(r1(R+518)){{goto L69c890;}}
}
B69c86f:L69c86f:{c.instructions+=2;NFSU2_TR(0x69c86f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c873:{NFSU2_TR(0x69c873);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c890;}}
}
B69c875:L69c875:{c.instructions+=9;NFSU2_TR(0x69c875);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c878:{NFSU2_TR(0x69c878);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69c87b:{NFSU2_TR(0x69c87b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c87e:{NFSU2_TR(0x69c87e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69c880:{NFSU2_TR(0x69c880);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69c881:{NFSU2_TR(0x69c881);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B69c883:{NFSU2_TR(0x69c883);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c886:{NFSU2_TR(0x69c886);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69c889:{NFSU2_TR(0x69c889);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69c890:L69c890:{c.instructions+=3;NFSU2_TR(0x69c890);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B69c893:{NFSU2_TR(0x69c893);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c896:{NFSU2_TR(0x69c896);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c85bu);}goto L69c85b;}}
}
B69c898:L69c898:{c.instructions+=2;NFSU2_TR(0x69c898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c89b:{NFSU2_TR(0x69c89b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69c89e:L69c89e:{c.instructions+=7;NFSU2_TR(0x69c89e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c8a1:{NFSU2_TR(0x69c8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c8a4:{NFSU2_TR(0x69c8a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c8a7:{NFSU2_TR(0x69c8a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c8aa:{NFSU2_TR(0x69c8aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c8ad:{NFSU2_TR(0x69c8ad);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c8b0:{NFSU2_TR(0x69c8b0);
if(r1(R+518)){{goto L69c8d2;}}
}
B69c8b2:L69c8b2:{c.instructions+=2;NFSU2_TR(0x69c8b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c8b6:{NFSU2_TR(0x69c8b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69c8d2;}}
}
B69c8b8:L69c8b8:{c.instructions+=4;NFSU2_TR(0x69c8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c8bb:{NFSU2_TR(0x69c8bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c8be:{NFSU2_TR(0x69c8be);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c8c2:{NFSU2_TR(0x69c8c2);
if(r1(R+518)){{goto L69c8d2;}}
}
B69c8c4:L69c8c4:{c.instructions+=5;NFSU2_TR(0x69c8c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c8c7:{NFSU2_TR(0x69c8c7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69c8c8:{NFSU2_TR(0x69c8c8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B69c8cb:{NFSU2_TR(0x69c8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c8cf:{NFSU2_TR(0x69c8cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c8d2:L69c8d2:{c.instructions+=3;NFSU2_TR(0x69c8d2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B69c8d5:{NFSU2_TR(0x69c8d5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B69c8d6:{NFSU2_TR(0x69c8d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c89eu);}goto L69c89e;}}
}
B69c8d8:L69c8d8:{c.instructions+=1;NFSU2_TR(0x69c8d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c8db:L69c8db:{c.instructions+=5;NFSU2_TR(0x69c8db);
__builtin_memmove((R+0),(R+4),4);
}
B69c8dd:{NFSU2_TR(0x69c8dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69c8e0:{NFSU2_TR(0x69c8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c8e3:{NFSU2_TR(0x69c8e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c8e6:{NFSU2_TR(0x69c8e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c84du);}goto L69c84d;}}
}
B69c8ec:L69c8ec:{c.instructions+=1;NFSU2_TR(0x69c8ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69c8ed:L69c8ed:{c.instructions+=5;NFSU2_TR(0x69c8ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69c8ee:{NFSU2_TR(0x69c8ee);
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
B69c8f0:{NFSU2_TR(0x69c8f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69c8f1:{NFSU2_TR(0x69c8f1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69c8f2:{NFSU2_TR(0x69c8f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69c8f5:L69c8f5:{c.instructions+=22;NFSU2_TR(0x69c8f5);
__builtin_memmove((R+28),(R+28),4);
}
B69c8f7:{NFSU2_TR(0x69c8f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c8f8:{NFSU2_TR(0x69c8f8);
__builtin_memmove((R+20),(R+16),4);
}
B69c8fa:{NFSU2_TR(0x69c8fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B69c8fd:{NFSU2_TR(0x69c8fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69c901:{NFSU2_TR(0x69c901);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c902:{NFSU2_TR(0x69c902);
__builtin_memmove((R+12),(R+4),4);
}
B69c904:{NFSU2_TR(0x69c904);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c907:{NFSU2_TR(0x69c907);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c90a:{NFSU2_TR(0x69c90a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c90d:{NFSU2_TR(0x69c90d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c910:{NFSU2_TR(0x69c910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69c912:{NFSU2_TR(0x69c912);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c915:{NFSU2_TR(0x69c915);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c918:{NFSU2_TR(0x69c918);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c91b:{NFSU2_TR(0x69c91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c91e:{NFSU2_TR(0x69c91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c921:{NFSU2_TR(0x69c921);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c924:{NFSU2_TR(0x69c924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69c926:{NFSU2_TR(0x69c926);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c927:{NFSU2_TR(0x69c927);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69c928:{NFSU2_TR(0x69c928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c92b:L69c92b:{c.instructions+=5;NFSU2_TR(0x69c92b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c92e:{NFSU2_TR(0x69c92e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69c931:{NFSU2_TR(0x69c931);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c935:{NFSU2_TR(0x69c935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c938:{NFSU2_TR(0x69c938);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ca88;}}
}
B69c93e:L69c93e:{c.instructions+=3;NFSU2_TR(0x69c93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c941:{NFSU2_TR(0x69c941);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c944:{NFSU2_TR(0x69c944);
if(r1(R+518)){{goto L69c94f;}}
}
B69c946:L69c946:{c.instructions+=2;NFSU2_TR(0x69c946);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c949:{NFSU2_TR(0x69c949);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ca88;}}
}
B69c94f:L69c94f:{c.instructions+=4;NFSU2_TR(0x69c94f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c952:{NFSU2_TR(0x69c952);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c955:{NFSU2_TR(0x69c955);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69c958:{NFSU2_TR(0x69c958);
if(r1(R+518)){{goto L69c972;}}
}
B69c95a:L69c95a:{c.instructions+=1;NFSU2_TR(0x69c95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69c95d:L69c95d:{c.instructions+=2;NFSU2_TR(0x69c95d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c95f:{NFSU2_TR(0x69c95f);
if(r1(R+518)){{goto L69c972;}}
}
B69c961:L69c961:{c.instructions+=6;NFSU2_TR(0x69c961);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69c964:{NFSU2_TR(0x69c964);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69c967:{NFSU2_TR(0x69c967);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69c96a:{NFSU2_TR(0x69c96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c96d:{NFSU2_TR(0x69c96d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c970:{NFSU2_TR(0x69c970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c95du);}goto L69c95d;}}
}
B69c972:L69c972:{c.instructions+=2;NFSU2_TR(0x69c972);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c975:{NFSU2_TR(0x69c975);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ca88;}}
}
B69c97b:L69c97b:{c.instructions+=2;NFSU2_TR(0x69c97b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c97e:{NFSU2_TR(0x69c97e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ca88;}}
}
B69c984:L69c984:{c.instructions+=6;NFSU2_TR(0x69c984);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69c986:{NFSU2_TR(0x69c986);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69c987:{NFSU2_TR(0x69c987);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c98a:{NFSU2_TR(0x69c98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c98d:{NFSU2_TR(0x69c98d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c990:{NFSU2_TR(0x69c990);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ca39;}}
}
B69c996:L69c996:{c.instructions+=6;NFSU2_TR(0x69c996);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69c999:{NFSU2_TR(0x69c999);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69c99c:{NFSU2_TR(0x69c99c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69c99f:{NFSU2_TR(0x69c99f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B69c9a1:{NFSU2_TR(0x69c9a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c9a4:{NFSU2_TR(0x69c9a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69c9a7:L69c9a7:{c.instructions+=1;NFSU2_TR(0x69c9a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69c9a9:L69c9a9:{c.instructions+=5;NFSU2_TR(0x69c9a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c9ac:{NFSU2_TR(0x69c9ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69c9af:{NFSU2_TR(0x69c9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c9b2:{NFSU2_TR(0x69c9b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c9b5:{NFSU2_TR(0x69c9b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ca0f;}}
}
B69c9b7:L69c9b7:{c.instructions+=3;NFSU2_TR(0x69c9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c9ba:{NFSU2_TR(0x69c9ba);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c9bd:{NFSU2_TR(0x69c9bd);
if(r1(R+518)){{goto L69c9c4;}}
}
B69c9bf:L69c9bf:{c.instructions+=2;NFSU2_TR(0x69c9bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c9c2:{NFSU2_TR(0x69c9c2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ca0f;}}
}
B69c9c4:L69c9c4:{c.instructions+=3;NFSU2_TR(0x69c9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c9c7:{NFSU2_TR(0x69c9c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c9ca:{NFSU2_TR(0x69c9ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ca0f;}}
}
B69c9cc:L69c9cc:{c.instructions+=3;NFSU2_TR(0x69c9cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c9cf:{NFSU2_TR(0x69c9cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c9d2:{NFSU2_TR(0x69c9d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ca0f;}}
}
B69c9d4:L69c9d4:{c.instructions+=3;NFSU2_TR(0x69c9d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c9d7:{NFSU2_TR(0x69c9d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69c9da:{NFSU2_TR(0x69c9da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ca0f;}}
}
B69c9dc:L69c9dc:{c.instructions+=4;NFSU2_TR(0x69c9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69c9df:{NFSU2_TR(0x69c9df);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c9e2:{NFSU2_TR(0x69c9e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c9e5:{NFSU2_TR(0x69c9e5);
if(r1(R+518)){{goto L69c9ff;}}
}
B69c9e7:L69c9e7:{c.instructions+=1;NFSU2_TR(0x69c9e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69c9ea:L69c9ea:{c.instructions+=2;NFSU2_TR(0x69c9ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c9ec:{NFSU2_TR(0x69c9ec);
if(r1(R+518)){{goto L69c9ff;}}
}
B69c9ee:L69c9ee:{c.instructions+=6;NFSU2_TR(0x69c9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c9f1:{NFSU2_TR(0x69c9f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69c9f4:{NFSU2_TR(0x69c9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69c9f7:{NFSU2_TR(0x69c9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69c9fa:{NFSU2_TR(0x69c9fa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69c9fd:{NFSU2_TR(0x69c9fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c9eau);}goto L69c9ea;}}
}
B69c9ff:L69c9ff:{c.instructions+=2;NFSU2_TR(0x69c9ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ca02:{NFSU2_TR(0x69ca02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ca09;}}
}
B69ca04:L69ca04:{c.instructions+=2;NFSU2_TR(0x69ca04);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ca07:{NFSU2_TR(0x69ca07);
if(r1(R+518)){{goto L69ca18;}}
}
B69ca09:L69ca09:{c.instructions+=2;NFSU2_TR(0x69ca09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ca0c:{NFSU2_TR(0x69ca0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ca0f:L69ca0f:{c.instructions+=3;NFSU2_TR(0x69ca0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ca12:{NFSU2_TR(0x69ca12);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69ca14:{NFSU2_TR(0x69ca14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c9a9u);}goto L69c9a9;}}
}
B69ca16:L69ca16:{c.instructions+=1;NFSU2_TR(0x69ca16);
{goto L69ca39;}
}
B69ca18:L69ca18:{c.instructions+=10;NFSU2_TR(0x69ca18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ca1b:{NFSU2_TR(0x69ca1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ca1e:{NFSU2_TR(0x69ca1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ca21:{NFSU2_TR(0x69ca21);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69ca24:{NFSU2_TR(0x69ca24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ca27:{NFSU2_TR(0x69ca27);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B69ca2a:{NFSU2_TR(0x69ca2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ca2d:{NFSU2_TR(0x69ca2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ca30:{NFSU2_TR(0x69ca30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ca33:{NFSU2_TR(0x69ca33);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c9a7u);}goto L69c9a7;}}
}
B69ca39:L69ca39:{c.instructions+=3;NFSU2_TR(0x69ca39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ca3c:{NFSU2_TR(0x69ca3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ca3f:{NFSU2_TR(0x69ca3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ca88;}}
}
B69ca41:L69ca41:{c.instructions+=4;NFSU2_TR(0x69ca41);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69ca43:{NFSU2_TR(0x69ca43);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69ca45:{NFSU2_TR(0x69ca45);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69ca47:{NFSU2_TR(0x69ca47);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ca75;}}
}
B69ca49:L69ca49:{c.instructions+=6;NFSU2_TR(0x69ca49);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B69ca4d:{NFSU2_TR(0x69ca4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ca50:{NFSU2_TR(0x69ca50);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B69ca53:{NFSU2_TR(0x69ca53);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69ca56:{NFSU2_TR(0x69ca56);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ca5a:{NFSU2_TR(0x69ca5a);
if(r1(R+518)){{goto L69ca6f;}}
}
B69ca5c:L69ca5c:{c.instructions+=7;NFSU2_TR(0x69ca5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ca5f:{NFSU2_TR(0x69ca5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69ca62:{NFSU2_TR(0x69ca62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ca65:{NFSU2_TR(0x69ca65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B69ca68:{NFSU2_TR(0x69ca68);
__builtin_memmove((R+24),(R+8),4);
}
B69ca6a:{NFSU2_TR(0x69ca6a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B69ca6d:{NFSU2_TR(0x69ca6d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B69ca6f:L69ca6f:{c.instructions+=3;NFSU2_TR(0x69ca6f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69ca70:{NFSU2_TR(0x69ca70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69ca73:{NFSU2_TR(0x69ca73);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ca49u);}goto L69ca49;}}
}
B69ca75:L69ca75:{c.instructions+=2;NFSU2_TR(0x69ca75);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ca78:{NFSU2_TR(0x69ca78);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ca88;}}
}
B69ca7a:L69ca7a:{c.instructions+=4;NFSU2_TR(0x69ca7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ca7d:{NFSU2_TR(0x69ca7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ca80:{NFSU2_TR(0x69ca80);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69ca83:{NFSU2_TR(0x69ca83);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69ca86:L69ca86:{c.instructions+=1;NFSU2_TR(0x69ca86);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L69ca88;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ca86u);}goto L69ca86;}
}
B69ca88:L69ca88:{c.instructions+=4;NFSU2_TR(0x69ca88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ca8b:{NFSU2_TR(0x69ca8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ca8e:{NFSU2_TR(0x69ca8e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69ca90:{NFSU2_TR(0x69ca90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69c92bu);}goto L69c92b;}}
}
B69ca96:L69ca96:{c.instructions+=2;NFSU2_TR(0x69ca96);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ca9a:{NFSU2_TR(0x69ca9a);
if(r1(R+518)){{goto L69caa9;}}
}
B69ca9c:L69ca9c:{c.instructions+=2;NFSU2_TR(0x69ca9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ca9f:{NFSU2_TR(0x69ca9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69caa2:L69caa2:{c.instructions+=1;NFSU2_TR(0x69caa2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L69caa4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69caa2u);}goto L69caa2;}
}
B69caa4:L69caa4:{c.instructions+=1;NFSU2_TR(0x69caa4);
{goto L69cbdf;}
}
B69caa9:L69caa9:{c.instructions+=8;NFSU2_TR(0x69caa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69caac:{NFSU2_TR(0x69caac);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69caae:{NFSU2_TR(0x69caae);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69cab3:{NFSU2_TR(0x69cab3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cab5:{NFSU2_TR(0x69cab5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B69caba:{NFSU2_TR(0x69caba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cabb:{NFSU2_TR(0x69cabb);
__builtin_memmove((R+4),(R+12),4);
}
B69cabd:{NFSU2_TR(0x69cabd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69cac2ull));
TAIL_STATIC(0x699c99u,699);
}
B69cac2:L69cac2:{c.instructions+=4;NFSU2_TR(0x69cac2);
__builtin_memmove((R+24),(R+0),4);
}
B69cac4:{NFSU2_TR(0x69cac4);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B69cac7:{NFSU2_TR(0x69cac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69caca:{NFSU2_TR(0x69caca);
if(r1(R+518)){{goto L69cbbf;}}
}
B69cad0:L69cad0:{c.instructions+=6;NFSU2_TR(0x69cad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cad3:{NFSU2_TR(0x69cad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cad6:{NFSU2_TR(0x69cad6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69cad9:{NFSU2_TR(0x69cad9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69cadc:{NFSU2_TR(0x69cadc);
__builtin_memmove((R+4),(R+28),4);
}
B69cade:{NFSU2_TR(0x69cade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69cae3ull));
TAIL_STATIC(0x698eb3u,698);
}
B69cae3:L69cae3:{c.instructions+=3;NFSU2_TR(0x69cae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69cae7:{NFSU2_TR(0x69cae7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69caeb:{NFSU2_TR(0x69caeb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69cbcf;}}
}
B69caf1:L69caf1:{c.instructions+=19;NFSU2_TR(0x69caf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69caf4:{NFSU2_TR(0x69caf4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69caf6:{NFSU2_TR(0x69caf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69caf9:{NFSU2_TR(0x69caf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cafc:{NFSU2_TR(0x69cafc);
__builtin_memmove((R+24),(R+4),4);
}
B69cafe:{NFSU2_TR(0x69cafe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69caff:{NFSU2_TR(0x69caff);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B69cb02:{NFSU2_TR(0x69cb02);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B69cb04:{NFSU2_TR(0x69cb04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cb05:{NFSU2_TR(0x69cb05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cb08:{NFSU2_TR(0x69cb08);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69cb0b:{NFSU2_TR(0x69cb0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69cb0d:{NFSU2_TR(0x69cb0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69cb10:{NFSU2_TR(0x69cb10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cb13:{NFSU2_TR(0x69cb13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cb14:{NFSU2_TR(0x69cb14);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B69cb16:{NFSU2_TR(0x69cb16);
__builtin_memmove((R+4),(R+12),4);
}
B69cb18:{NFSU2_TR(0x69cb18);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69cb1e:{NFSU2_TR(0x69cb1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69cb23ull));
TAIL_STATIC(0x699c39u,699);
}
B69cb23:L69cb23:{c.instructions+=5;NFSU2_TR(0x69cb23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cb26:{NFSU2_TR(0x69cb26);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69cb29:{NFSU2_TR(0x69cb29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cb2c:{NFSU2_TR(0x69cb2c);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B69cb30:{NFSU2_TR(0x69cb30);
if(r1(R+518)){{goto L69cbbf;}}
}
B69cb36:L69cb36:{c.instructions+=44;NFSU2_TR(0x69cb36);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69cb39:{NFSU2_TR(0x69cb39);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cb3c:{NFSU2_TR(0x69cb3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69cb3f:{NFSU2_TR(0x69cb3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cb42:{NFSU2_TR(0x69cb42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cb45:{NFSU2_TR(0x69cb45);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cb48:{NFSU2_TR(0x69cb48);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69cb4b:{NFSU2_TR(0x69cb4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cb4e:{NFSU2_TR(0x69cb4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69cb51:{NFSU2_TR(0x69cb51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cb54:{NFSU2_TR(0x69cb54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cb57:{NFSU2_TR(0x69cb57);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cb5a:{NFSU2_TR(0x69cb5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69cb5d:{NFSU2_TR(0x69cb5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cb60:{NFSU2_TR(0x69cb60);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69cb63:{NFSU2_TR(0x69cb63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69cb65:{NFSU2_TR(0x69cb65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cb68:{NFSU2_TR(0x69cb68);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69cb6b:{NFSU2_TR(0x69cb6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69cb6e:{NFSU2_TR(0x69cb6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69cb70:{NFSU2_TR(0x69cb70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cb73:{NFSU2_TR(0x69cb73);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69cb76:{NFSU2_TR(0x69cb76);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cb79:{NFSU2_TR(0x69cb79);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69cb7c:{NFSU2_TR(0x69cb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cb7f:{NFSU2_TR(0x69cb7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69cb82:{NFSU2_TR(0x69cb82);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69cb85:{NFSU2_TR(0x69cb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cb88:{NFSU2_TR(0x69cb88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69cb8b:{NFSU2_TR(0x69cb8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cb8e:{NFSU2_TR(0x69cb8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cb91:{NFSU2_TR(0x69cb91);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69cb94:{NFSU2_TR(0x69cb94);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cb97:{NFSU2_TR(0x69cb97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cb9a:{NFSU2_TR(0x69cb9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69cb9d:{NFSU2_TR(0x69cb9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69cba0:{NFSU2_TR(0x69cba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cba3:{NFSU2_TR(0x69cba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cba6:{NFSU2_TR(0x69cba6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69cba9:{NFSU2_TR(0x69cba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cbac:{NFSU2_TR(0x69cbac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69cbae:{NFSU2_TR(0x69cbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cbb1:{NFSU2_TR(0x69cbb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69cbb4:{NFSU2_TR(0x69cbb4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69caf1u);}goto L69caf1;}}
}
B69cbba:L69cbba:{c.instructions+=2;NFSU2_TR(0x69cbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69cbbd:{NFSU2_TR(0x69cbbd);
{goto L69cbcf;}
}
B69cbbf:L69cbbf:{c.instructions+=2;NFSU2_TR(0x69cbbf);
w4(R+0,u32(0x8007000eull));
}
B69cbc4:{NFSU2_TR(0x69cbc4);
{goto L69cbe1;}
}
B69cbc6:L69cbc6:{c.instructions+=4;NFSU2_TR(0x69cbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69cbc9:{NFSU2_TR(0x69cbc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cbcc:{NFSU2_TR(0x69cbcc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69cbce:{NFSU2_TR(0x69cbce);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B69cbcf:L69cbcf:{c.instructions+=3;NFSU2_TR(0x69cbcf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cbd2:{NFSU2_TR(0x69cbd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cbd5:{NFSU2_TR(0x69cbd5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69cbc6u);}goto L69cbc6;}}
}
B69cbd7:L69cbd7:{c.instructions+=3;NFSU2_TR(0x69cbd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69cbda:{NFSU2_TR(0x69cbda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cbdd:{NFSU2_TR(0x69cbdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B69cbdf:L69cbdf:{c.instructions+=1;NFSU2_TR(0x69cbdf);
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
B69cbe1:L69cbe1:{c.instructions+=5;NFSU2_TR(0x69cbe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69cbe2:{NFSU2_TR(0x69cbe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69cbe3:{NFSU2_TR(0x69cbe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69cbe4:{NFSU2_TR(0x69cbe4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69cbe5:{NFSU2_TR(0x69cbe5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69cbe8:L69cbe8:{c.instructions+=13;NFSU2_TR(0x69cbe8);
__builtin_memmove((R+28),(R+28),4);
}
B69cbea:{NFSU2_TR(0x69cbea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cbeb:{NFSU2_TR(0x69cbeb);
__builtin_memmove((R+20),(R+16),4);
}
B69cbed:{NFSU2_TR(0x69cbed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cbee:{NFSU2_TR(0x69cbee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cbef:{NFSU2_TR(0x69cbef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cbf2:{NFSU2_TR(0x69cbf2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cbf3:{NFSU2_TR(0x69cbf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cbf4:{NFSU2_TR(0x69cbf4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69cbf6:{NFSU2_TR(0x69cbf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69cbfc:{NFSU2_TR(0x69cbfc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cbfd:{NFSU2_TR(0x69cbfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cc00:{NFSU2_TR(0x69cc00);
if(r1(R+518)){{goto L69cc49;}}
}
B69cc02:L69cc02:{c.instructions+=4;NFSU2_TR(0x69cc02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cc05:{NFSU2_TR(0x69cc05);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69cc07:{NFSU2_TR(0x69cc07);
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
B69cc09:{NFSU2_TR(0x69cc09);
if(r1(R+518)){{goto L69cc95;}}
}
B69cc0f:L69cc0f:{c.instructions+=5;NFSU2_TR(0x69cc0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69cc12:{NFSU2_TR(0x69cc12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69cc14:{NFSU2_TR(0x69cc14);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69cc15:{NFSU2_TR(0x69cc15);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69cc18:{NFSU2_TR(0x69cc18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69cc1d;}}
}
B69cc1a:L69cc1a:{c.instructions+=1;NFSU2_TR(0x69cc1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cc1d:L69cc1d:{c.instructions+=3;NFSU2_TR(0x69cc1d);
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
B69cc1f:{NFSU2_TR(0x69cc1f);
__builtin_memmove((R+28),(R+0),4);
}
B69cc21:{NFSU2_TR(0x69cc21);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69cc92;}}
}
B69cc23:L69cc23:{c.instructions+=3;NFSU2_TR(0x69cc23);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69cc26:{NFSU2_TR(0x69cc26);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69cc29:{NFSU2_TR(0x69cc29);
if(r1(R+518)){{goto L69cc41;}}
}
B69cc2b:L69cc2b:{c.instructions+=7;NFSU2_TR(0x69cc2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cc2e:{NFSU2_TR(0x69cc2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69cc31:{NFSU2_TR(0x69cc31);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69cc34:{NFSU2_TR(0x69cc34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69cc36:{NFSU2_TR(0x69cc36);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cc39:{NFSU2_TR(0x69cc39);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cc3c:{NFSU2_TR(0x69cc3c);
if(r1(R+518)){{goto L69cc41;}}
}
B69cc3e:L69cc3e:{c.instructions+=1;NFSU2_TR(0x69cc3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69cc41:L69cc41:{c.instructions+=3;NFSU2_TR(0x69cc41);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69cc42:{NFSU2_TR(0x69cc42);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69cc45:{NFSU2_TR(0x69cc45);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69cc23u);}goto L69cc23;}}
}
B69cc47:L69cc47:{c.instructions+=1;NFSU2_TR(0x69cc47);
{goto L69cc92;}
}
B69cc49:L69cc49:{c.instructions+=2;NFSU2_TR(0x69cc49);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(u32(0x8000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69cc4f:{NFSU2_TR(0x69cc4f);
if(r1(R+518)){{goto L69cc92;}}
}
B69cc51:L69cc51:{c.instructions+=3;NFSU2_TR(0x69cc51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69cc54:{NFSU2_TR(0x69cc54);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B69cc56:{NFSU2_TR(0x69cc56);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69cc92;}}
}
B69cc58:L69cc58:{c.instructions+=2;NFSU2_TR(0x69cc58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69cc5b:{NFSU2_TR(0x69cc5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69cc62:L69cc62:{c.instructions+=3;NFSU2_TR(0x69cc62);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69cc65:{NFSU2_TR(0x69cc65);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69cc69:{NFSU2_TR(0x69cc69);
if(r1(R+518)){{goto L69cc8a;}}
}
B69cc6b:L69cc6b:{c.instructions+=3;NFSU2_TR(0x69cc6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69cc6e:{NFSU2_TR(0x69cc6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B69cc71:{NFSU2_TR(0x69cc71);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69cc8a;}}
}
B69cc73:L69cc73:{c.instructions+=7;NFSU2_TR(0x69cc73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cc76:{NFSU2_TR(0x69cc76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69cc79:{NFSU2_TR(0x69cc79);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cc7c:{NFSU2_TR(0x69cc7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69cc7e:{NFSU2_TR(0x69cc7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cc81:{NFSU2_TR(0x69cc81);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cc84:{NFSU2_TR(0x69cc84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69cc8a;}}
}
B69cc86:L69cc86:{c.instructions+=2;NFSU2_TR(0x69cc86);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B69cc87:{NFSU2_TR(0x69cc87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69cc8a:L69cc8a:{c.instructions+=4;NFSU2_TR(0x69cc8a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B69cc8b:{NFSU2_TR(0x69cc8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69cc8e:{NFSU2_TR(0x69cc8e);
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
B69cc90:{NFSU2_TR(0x69cc90);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69cc62u);}goto L69cc62;}}
}
B69cc92:L69cc92:{c.instructions+=1;NFSU2_TR(0x69cc92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cc95:L69cc95:{c.instructions+=5;NFSU2_TR(0x69cc95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69cc96:{NFSU2_TR(0x69cc96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69cc97:{NFSU2_TR(0x69cc97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69cc98:{NFSU2_TR(0x69cc98);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69cc99:{NFSU2_TR(0x69cc99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69cc9a:L69cc9a:{c.instructions+=16;NFSU2_TR(0x69cc9a);
__builtin_memmove((R+28),(R+28),4);
}
B69cc9c:{NFSU2_TR(0x69cc9c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cc9d:{NFSU2_TR(0x69cc9d);
__builtin_memmove((R+20),(R+16),4);
}
B69cc9f:{NFSU2_TR(0x69cc9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B69cca2:{NFSU2_TR(0x69cca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cca5:{NFSU2_TR(0x69cca5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cca6:{NFSU2_TR(0x69cca6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cca7:{NFSU2_TR(0x69cca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ccaa:{NFSU2_TR(0x69ccaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B69ccad:{NFSU2_TR(0x69ccad);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B69ccaf:{NFSU2_TR(0x69ccaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69ccb1:{NFSU2_TR(0x69ccb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69ccb4:{NFSU2_TR(0x69ccb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69ccb7:{NFSU2_TR(0x69ccb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ccba:{NFSU2_TR(0x69ccba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ccbd:{NFSU2_TR(0x69ccbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ccc6;}}
}
B69ccbf:L69ccbf:{c.instructions+=2;NFSU2_TR(0x69ccbf);
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
B69ccc1:{NFSU2_TR(0x69ccc1);
{goto L69cdfc;}
}
B69ccc6:L69ccc6:{c.instructions+=4;NFSU2_TR(0x69ccc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ccc7:{NFSU2_TR(0x69ccc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ccca:{NFSU2_TR(0x69ccca);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69cccc:{NFSU2_TR(0x69cccc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69cce9;}}
}
B69ccce:L69ccce:{c.instructions+=2;NFSU2_TR(0x69ccce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B69ccd1:{NFSU2_TR(0x69ccd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ccd4:L69ccd4:{c.instructions+=3;NFSU2_TR(0x69ccd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69ccd6:{NFSU2_TR(0x69ccd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69ccd9:{NFSU2_TR(0x69ccd9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69cce9;}}
}
B69ccdb:L69ccdb:{c.instructions+=6;NFSU2_TR(0x69ccdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ccde:{NFSU2_TR(0x69ccde);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B69ccdf:{NFSU2_TR(0x69ccdf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B69cce2:{NFSU2_TR(0x69cce2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69cce4:{NFSU2_TR(0x69cce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cce7:{NFSU2_TR(0x69cce7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ccd4u);}goto L69ccd4;}}
}
B69cce9:L69cce9:{c.instructions+=4;NFSU2_TR(0x69cce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ccec:{NFSU2_TR(0x69ccec);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B69ccee:{NFSU2_TR(0x69ccee);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B69ccf0:{NFSU2_TR(0x69ccf0);
if(r1(R+518)){{goto L69cd28;}}
}
B69ccf2:L69ccf2:{c.instructions+=4;NFSU2_TR(0x69ccf2);
__builtin_memmove((R+8),(R+28),4);
}
B69ccf4:{NFSU2_TR(0x69ccf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B69ccf7:{NFSU2_TR(0x69ccf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ccfa:{NFSU2_TR(0x69ccfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ccfd:L69ccfd:{c.instructions+=13;NFSU2_TR(0x69ccfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cd00:{NFSU2_TR(0x69cd00);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B69cd02:{NFSU2_TR(0x69cd02);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B69cd06:{NFSU2_TR(0x69cd06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B69cd08:{NFSU2_TR(0x69cd08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B69cd0a:{NFSU2_TR(0x69cd0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cd0d:{NFSU2_TR(0x69cd0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cd10:{NFSU2_TR(0x69cd10);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69cd14:{NFSU2_TR(0x69cd14);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B69cd17:{NFSU2_TR(0x69cd17);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B69cd1a:{NFSU2_TR(0x69cd1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69cd1d:{NFSU2_TR(0x69cd1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cd20:{NFSU2_TR(0x69cd20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ccfdu);}goto L69ccfd;}}
}
B69cd22:L69cd22:{c.instructions+=2;NFSU2_TR(0x69cd22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cd25:{NFSU2_TR(0x69cd25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69cd28:L69cd28:{c.instructions+=4;NFSU2_TR(0x69cd28);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69cd2a:{NFSU2_TR(0x69cd2a);
__builtin_memmove((R+0),(R+28),4);
}
B69cd2c:{NFSU2_TR(0x69cd2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cd2f:{NFSU2_TR(0x69cd2f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69cd66;}}
}
B69cd31:L69cd31:{c.instructions+=7;NFSU2_TR(0x69cd31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69cd34:{NFSU2_TR(0x69cd34);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cd37:{NFSU2_TR(0x69cd37);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B69cd3b:{NFSU2_TR(0x69cd3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cd3e:{NFSU2_TR(0x69cd3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B69cd40:{NFSU2_TR(0x69cd40);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cd43:{NFSU2_TR(0x69cd43);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69cd4a;}}
}
B69cd45:L69cd45:{c.instructions+=2;NFSU2_TR(0x69cd45);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B69cd48:{NFSU2_TR(0x69cd48);
{goto L69cda9;}
}
B69cd4a:L69cd4a:{c.instructions+=2;NFSU2_TR(0x69cd4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69cd4d:{NFSU2_TR(0x69cd4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cd50:L69cd50:{c.instructions+=4;NFSU2_TR(0x69cd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69cd53:{NFSU2_TR(0x69cd53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B69cd55:{NFSU2_TR(0x69cd55);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cd58:{NFSU2_TR(0x69cd58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69cd66;}}
}
B69cd5a:L69cd5a:{c.instructions+=5;NFSU2_TR(0x69cd5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69cd5e:{NFSU2_TR(0x69cd5e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B69cd5f:{NFSU2_TR(0x69cd5f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69cd61:{NFSU2_TR(0x69cd61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cd64:{NFSU2_TR(0x69cd64);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69cd50u);}goto L69cd50;}}
}
B69cd66:L69cd66:{c.instructions+=4;NFSU2_TR(0x69cd66);
__builtin_memmove((R+8),(R+28),4);
}
B69cd68:{NFSU2_TR(0x69cd68);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B69cd6a:{NFSU2_TR(0x69cd6a);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B69cd6c:{NFSU2_TR(0x69cd6c);
if(r1(R+518)){{goto L69cda9;}}
}
B69cd6e:L69cd6e:{c.instructions+=6;NFSU2_TR(0x69cd6e);
__builtin_memmove((R+24),(R+0),4);
}
B69cd70:{NFSU2_TR(0x69cd70);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B69cd73:{NFSU2_TR(0x69cd73);
__builtin_memmove((R+0),(R+28),4);
}
B69cd75:{NFSU2_TR(0x69cd75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cd78:{NFSU2_TR(0x69cd78);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69cd7b:{NFSU2_TR(0x69cd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cd7e:L69cd7e:{c.instructions+=13;NFSU2_TR(0x69cd7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cd81:{NFSU2_TR(0x69cd81);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B69cd83:{NFSU2_TR(0x69cd83);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B69cd87:{NFSU2_TR(0x69cd87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B69cd89:{NFSU2_TR(0x69cd89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B69cd8b:{NFSU2_TR(0x69cd8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cd8e:{NFSU2_TR(0x69cd8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69cd91:{NFSU2_TR(0x69cd91);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69cd95:{NFSU2_TR(0x69cd95);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B69cd98:{NFSU2_TR(0x69cd98);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B69cd9b:{NFSU2_TR(0x69cd9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69cd9e:{NFSU2_TR(0x69cd9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cda1:{NFSU2_TR(0x69cda1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69cd7eu);}goto L69cd7e;}}
}
B69cda3:L69cda3:{c.instructions+=2;NFSU2_TR(0x69cda3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cda6:{NFSU2_TR(0x69cda6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69cda9:L69cda9:{c.instructions+=2;NFSU2_TR(0x69cda9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69cdab:{NFSU2_TR(0x69cdab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69cdb1;}}
}
B69cdad:L69cdad:{c.instructions+=2;NFSU2_TR(0x69cdad);
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
B69cdaf:{NFSU2_TR(0x69cdaf);
{goto L69cdfb;}
}
B69cdb1:L69cdb1:{c.instructions+=4;NFSU2_TR(0x69cdb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cdb4:{NFSU2_TR(0x69cdb4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B69cdb6:{NFSU2_TR(0x69cdb6);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B69cdb8:{NFSU2_TR(0x69cdb8);
if(r1(R+518)){{goto L69cde5;}}
}
B69cdba:L69cdba:{c.instructions+=3;NFSU2_TR(0x69cdba);
__builtin_memmove((R+28),(R+0),4);
}
B69cdbc:{NFSU2_TR(0x69cdbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B69cdbf:{NFSU2_TR(0x69cdbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cdc2:L69cdc2:{c.instructions+=11;NFSU2_TR(0x69cdc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cdc5:{NFSU2_TR(0x69cdc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69cdc8:{NFSU2_TR(0x69cdc8);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B69cdcc:{NFSU2_TR(0x69cdcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B69cdce:{NFSU2_TR(0x69cdce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B69cdd0:{NFSU2_TR(0x69cdd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cdd3:{NFSU2_TR(0x69cdd3);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69cdd7:{NFSU2_TR(0x69cdd7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B69cdda:{NFSU2_TR(0x69cdda);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B69cddd:{NFSU2_TR(0x69cddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69cde0:{NFSU2_TR(0x69cde0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69cdc2u);}goto L69cdc2;}}
}
B69cde2:L69cde2:{c.instructions+=1;NFSU2_TR(0x69cde2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69cde5:L69cde5:{c.instructions+=9;NFSU2_TR(0x69cde5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cde8:{NFSU2_TR(0x69cde8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B69cdea:{NFSU2_TR(0x69cdea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69cdec:{NFSU2_TR(0x69cdec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cdef:{NFSU2_TR(0x69cdef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cdf2:{NFSU2_TR(0x69cdf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cdf5:{NFSU2_TR(0x69cdf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69cdf8:{NFSU2_TR(0x69cdf8);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69cdfa:{NFSU2_TR(0x69cdfa);
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
B69cdfb:L69cdfb:{c.instructions+=1;NFSU2_TR(0x69cdfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69cdfc:L69cdfc:{c.instructions+=4;NFSU2_TR(0x69cdfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69cdfd:{NFSU2_TR(0x69cdfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69cdfe:{NFSU2_TR(0x69cdfe);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69cdff:{NFSU2_TR(0x69cdff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69ce02:L69ce02:{c.instructions+=11;NFSU2_TR(0x69ce02);
__builtin_memmove((R+28),(R+28),4);
}
B69ce04:{NFSU2_TR(0x69ce04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ce05:{NFSU2_TR(0x69ce05);
__builtin_memmove((R+20),(R+16),4);
}
B69ce07:{NFSU2_TR(0x69ce07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B69ce0a:{NFSU2_TR(0x69ce0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ce0b:{NFSU2_TR(0x69ce0b);
__builtin_memmove((R+24),(R+4),4);
}
B69ce0d:{NFSU2_TR(0x69ce0d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69ce0f:{NFSU2_TR(0x69ce0f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69ce11:{NFSU2_TR(0x69ce11);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ce14:{NFSU2_TR(0x69ce14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ce17:{NFSU2_TR(0x69ce17);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ce29;}}
}
B69ce19:L69ce19:{c.instructions+=6;NFSU2_TR(0x69ce19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ce1c:{NFSU2_TR(0x69ce1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69ce1f:{NFSU2_TR(0x69ce1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ce23:{NFSU2_TR(0x69ce23);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69ce24:{NFSU2_TR(0x69ce24);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ce27:{NFSU2_TR(0x69ce27);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ce19u);}goto L69ce19;}}
}
B69ce29:L69ce29:{c.instructions+=3;NFSU2_TR(0x69ce29);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ce2c:{NFSU2_TR(0x69ce2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ce2f:{NFSU2_TR(0x69ce2f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69cf91;}}
}
B69ce35:L69ce35:{c.instructions+=2;NFSU2_TR(0x69ce35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ce36:{NFSU2_TR(0x69ce36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ce37:L69ce37:{c.instructions+=5;NFSU2_TR(0x69ce37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ce3a:{NFSU2_TR(0x69ce3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ce3d:{NFSU2_TR(0x69ce3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69ce40:{NFSU2_TR(0x69ce40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B69ce46:{NFSU2_TR(0x69ce46);
if(r1(R+518)){{goto L69cf80;}}
}
B69ce4c:L69ce4c:{c.instructions+=5;NFSU2_TR(0x69ce4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ce50:{NFSU2_TR(0x69ce50);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69ce53:{NFSU2_TR(0x69ce53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ce54:{NFSU2_TR(0x69ce54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ce56:{NFSU2_TR(0x69ce56);
{goto L69cef3;}
}
B69ce5b:L69ce5b:{c.instructions+=7;NFSU2_TR(0x69ce5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ce5e:{NFSU2_TR(0x69ce5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69ce60:{NFSU2_TR(0x69ce60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ce63:{NFSU2_TR(0x69ce63);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B69ce66:{NFSU2_TR(0x69ce66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69ce69:{NFSU2_TR(0x69ce69);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ce6d:{NFSU2_TR(0x69ce6d);
if(r1(R+518)){{goto L69cee9;}}
}
B69ce6f:L69ce6f:{c.instructions+=5;NFSU2_TR(0x69ce6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69ce71:{NFSU2_TR(0x69ce71);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69ce72:{NFSU2_TR(0x69ce72);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ce75:{NFSU2_TR(0x69ce75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ce78:{NFSU2_TR(0x69ce78);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69cec2;}}
}
B69ce7a:L69ce7a:{c.instructions+=8;NFSU2_TR(0x69ce7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ce7d:{NFSU2_TR(0x69ce7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ce80:{NFSU2_TR(0x69ce80);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69ce83:{NFSU2_TR(0x69ce83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ce86:{NFSU2_TR(0x69ce86);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69ce89:{NFSU2_TR(0x69ce89);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69ce8c:{NFSU2_TR(0x69ce8c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ce90:{NFSU2_TR(0x69ce90);
if(r1(R+518)){{goto L69ceba;}}
}
B69ce92:L69ce92:{c.instructions+=10;NFSU2_TR(0x69ce92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ce95:{NFSU2_TR(0x69ce95);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69ce98:{NFSU2_TR(0x69ce98);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69ce9b:{NFSU2_TR(0x69ce9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ce9e:{NFSU2_TR(0x69ce9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cea1:{NFSU2_TR(0x69cea1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69cea4:{NFSU2_TR(0x69cea4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69cea7:{NFSU2_TR(0x69cea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ceaa:{NFSU2_TR(0x69ceaa);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cead:{NFSU2_TR(0x69cead);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ceba;}}
}
B69ceaf:L69ceaf:{c.instructions+=4;NFSU2_TR(0x69ceaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ceb2:{NFSU2_TR(0x69ceb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ceb5:{NFSU2_TR(0x69ceb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ceb8:{NFSU2_TR(0x69ceb8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ce7au);}goto L69ce7a;}}
}
B69ceba:L69ceba:{c.instructions+=3;NFSU2_TR(0x69ceba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cebd:{NFSU2_TR(0x69cebd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69cec0:{NFSU2_TR(0x69cec0);
if(r1(R+512)){{goto L69cee9;}}
}
B69cec2:L69cec2:{c.instructions+=3;NFSU2_TR(0x69cec2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69cec4:{NFSU2_TR(0x69cec4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cec7:{NFSU2_TR(0x69cec7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69cee2;}}
}
B69cec9:L69cec9:{c.instructions+=10;NFSU2_TR(0x69cec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cecc:{NFSU2_TR(0x69cecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69cecf:{NFSU2_TR(0x69cecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69ced2:{NFSU2_TR(0x69ced2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69ced4:{NFSU2_TR(0x69ced4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69ced7:{NFSU2_TR(0x69ced7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ceda:{NFSU2_TR(0x69ceda);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69cedb:{NFSU2_TR(0x69cedb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69cede:{NFSU2_TR(0x69cede);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69cee0:{NFSU2_TR(0x69cee0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69cec9u);}goto L69cec9;}}
}
B69cee2:L69cee2:{c.instructions+=1;NFSU2_TR(0x69cee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69cee9:L69cee9:{c.instructions+=4;NFSU2_TR(0x69cee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ceec:{NFSU2_TR(0x69ceec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69ceef:{NFSU2_TR(0x69ceef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cef0:{NFSU2_TR(0x69cef0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69cef3:L69cef3:{c.instructions+=2;NFSU2_TR(0x69cef3);
__builtin_memmove((R+4),(R+12),4);
}
B69cef5:{NFSU2_TR(0x69cef5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69cefaull));
TAIL_STATIC(0x698ed2u,698);
}
B69cefa:L69cefa:{c.instructions+=3;NFSU2_TR(0x69cefa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69cefc:{NFSU2_TR(0x69cefc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ceff:{NFSU2_TR(0x69ceff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ce5bu);}goto L69ce5b;}}
}
B69cf05:L69cf05:{c.instructions+=4;NFSU2_TR(0x69cf05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69cf07:{NFSU2_TR(0x69cf07);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B69cf0c:{NFSU2_TR(0x69cf0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69cf11:{NFSU2_TR(0x69cf11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69cf80;}}
}
B69cf13:L69cf13:{c.instructions+=3;NFSU2_TR(0x69cf13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69cf17:{NFSU2_TR(0x69cf17);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cf1b:{NFSU2_TR(0x69cf1b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69cf80;}}
}
B69cf1d:L69cf1d:{c.instructions+=13;NFSU2_TR(0x69cf1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cf20:{NFSU2_TR(0x69cf20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cf23:{NFSU2_TR(0x69cf23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69cf26:{NFSU2_TR(0x69cf26);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B69cf29:{NFSU2_TR(0x69cf29);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69cf2c:{NFSU2_TR(0x69cf2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cf2f:{NFSU2_TR(0x69cf2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69cf32:{NFSU2_TR(0x69cf32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cf35:{NFSU2_TR(0x69cf35);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69cf38:{NFSU2_TR(0x69cf38);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69cf3b:{NFSU2_TR(0x69cf3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cf3e:{NFSU2_TR(0x69cf3e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cf41:{NFSU2_TR(0x69cf41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69cf75;}}
}
B69cf43:L69cf43:{c.instructions+=3;NFSU2_TR(0x69cf43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cf46:{NFSU2_TR(0x69cf46);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cf49:{NFSU2_TR(0x69cf49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69cf75;}}
}
B69cf4b:L69cf4b:{c.instructions+=3;NFSU2_TR(0x69cf4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cf4e:{NFSU2_TR(0x69cf4e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cf51:{NFSU2_TR(0x69cf51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69cf75;}}
}
B69cf53:L69cf53:{c.instructions+=3;NFSU2_TR(0x69cf53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cf56:{NFSU2_TR(0x69cf56);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cf59:{NFSU2_TR(0x69cf59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69cf75;}}
}
B69cf5b:L69cf5b:{c.instructions+=3;NFSU2_TR(0x69cf5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cf5e:{NFSU2_TR(0x69cf5e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cf61:{NFSU2_TR(0x69cf61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69cf75;}}
}
B69cf63:L69cf63:{c.instructions+=2;NFSU2_TR(0x69cf63);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cf67:{NFSU2_TR(0x69cf67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69cf75;}}
}
B69cf69:L69cf69:{c.instructions+=2;NFSU2_TR(0x69cf69);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69cf6d:{NFSU2_TR(0x69cf6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69cf75;}}
}
B69cf6f:L69cf6f:{c.instructions+=2;NFSU2_TR(0x69cf6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cf72:{NFSU2_TR(0x69cf72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cf75:L69cf75:{c.instructions+=4;NFSU2_TR(0x69cf75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69cf78:{NFSU2_TR(0x69cf78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cf7b:{NFSU2_TR(0x69cf7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69cf7e:{NFSU2_TR(0x69cf7e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69cf1du);}goto L69cf1d;}}
}
B69cf80:L69cf80:{c.instructions+=4;NFSU2_TR(0x69cf80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69cf83:{NFSU2_TR(0x69cf83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cf86:{NFSU2_TR(0x69cf86);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69cf89:{NFSU2_TR(0x69cf89);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ce37u);}goto L69ce37;}}
}
B69cf8f:L69cf8f:{c.instructions+=2;NFSU2_TR(0x69cf8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69cf90:{NFSU2_TR(0x69cf90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69cf91:L69cf91:{c.instructions+=6;NFSU2_TR(0x69cf91);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69cf93:{NFSU2_TR(0x69cf93);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
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
B69cf96:{NFSU2_TR(0x69cf96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69cf97:{NFSU2_TR(0x69cf97);
__builtin_memmove((R+0),(R+518),1);
}
B69cf9a:{NFSU2_TR(0x69cf9a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69cf9b:{NFSU2_TR(0x69cf9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69cf9c:L69cf9c:{c.instructions+=10;NFSU2_TR(0x69cf9c);
__builtin_memmove((R+28),(R+28),4);
}
B69cf9e:{NFSU2_TR(0x69cf9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cf9f:{NFSU2_TR(0x69cf9f);
__builtin_memmove((R+20),(R+16),4);
}
B69cfa1:{NFSU2_TR(0x69cfa1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cfa2:{NFSU2_TR(0x69cfa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cfa5:{NFSU2_TR(0x69cfa5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cfa6:{NFSU2_TR(0x69cfa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69cfa9:{NFSU2_TR(0x69cfa9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
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
B69cfac:{NFSU2_TR(0x69cfac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cfaf:{NFSU2_TR(0x69cfaf);
if(r1(R+518)){{goto L69cfe5;}}
}
B69cfb1:L69cfb1:{c.instructions+=8;NFSU2_TR(0x69cfb1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cfb2:{NFSU2_TR(0x69cfb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69cfb5:{NFSU2_TR(0x69cfb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cfb6:{NFSU2_TR(0x69cfb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69cfb9:{NFSU2_TR(0x69cfb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B69cfbb:{NFSU2_TR(0x69cfbb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69cfbd:{NFSU2_TR(0x69cfbd);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
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
B69cfc0:{NFSU2_TR(0x69cfc0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69cfe3;}}
}
B69cfc2:L69cfc2:{c.instructions+=1;NFSU2_TR(0x69cfc2);
{goto L69cfc7;}
}
B69cfc4:L69cfc4:{c.instructions+=1;NFSU2_TR(0x69cfc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cfc7:L69cfc7:{c.instructions+=8;NFSU2_TR(0x69cfc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69cfca:{NFSU2_TR(0x69cfca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69cfcd:{NFSU2_TR(0x69cfcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cfce:{NFSU2_TR(0x69cfce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69cfd1:{NFSU2_TR(0x69cfd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69cfd4:{NFSU2_TR(0x69cfd4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cfd5:{NFSU2_TR(0x69cfd5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69cfd8:{NFSU2_TR(0x69cfd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69cfddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69cf9cu);}goto L69cf9c;}
}
B69cfdd:L69cfdd:{c.instructions+=3;NFSU2_TR(0x69cfdd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69cfde:{NFSU2_TR(0x69cfde);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69cfe1:{NFSU2_TR(0x69cfe1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69cfc4u);}goto L69cfc4;}}
}
B69cfe3:L69cfe3:{c.instructions+=2;NFSU2_TR(0x69cfe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69cfe4:{NFSU2_TR(0x69cfe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69cfe5:L69cfe5:{c.instructions+=3;NFSU2_TR(0x69cfe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69cfe6:{NFSU2_TR(0x69cfe6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69cfe7:{NFSU2_TR(0x69cfe7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69cfea:L69cfea:{c.instructions+=11;NFSU2_TR(0x69cfea);
__builtin_memmove((R+28),(R+28),4);
}
B69cfec:{NFSU2_TR(0x69cfec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cfed:{NFSU2_TR(0x69cfed);
__builtin_memmove((R+20),(R+16),4);
}
B69cfef:{NFSU2_TR(0x69cfef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cff0:{NFSU2_TR(0x69cff0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cff1:{NFSU2_TR(0x69cff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69cff4:{NFSU2_TR(0x69cff4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69cff5:{NFSU2_TR(0x69cff5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69cff8:{NFSU2_TR(0x69cff8);
__builtin_memmove((R+24),(R+4),4);
}
B69cffa:{NFSU2_TR(0x69cffa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69cffd:{NFSU2_TR(0x69cffd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69d002ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69cf9cu);}goto L69cf9c;}
}
XIT:NFSU2_TR_EXIT(0x69c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
