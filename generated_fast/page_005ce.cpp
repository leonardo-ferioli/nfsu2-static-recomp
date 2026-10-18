#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5cd(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_700(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ce,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ce,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 page_5ce(Cpu& c){return body_5ce(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ce(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ce002:goto L5ce002;
case 0x5ce003:c.instructions+=1;goto B5ce003;
case 0x5ce008:goto L5ce008;
case 0x5ce00b:c.instructions+=9;goto B5ce00b;
case 0x5ce00e:c.instructions+=8;goto B5ce00e;
case 0x5ce011:c.instructions+=7;goto B5ce011;
case 0x5ce014:c.instructions+=6;goto B5ce014;
case 0x5ce017:c.instructions+=5;goto B5ce017;
case 0x5ce01a:c.instructions+=4;goto B5ce01a;
case 0x5ce01c:c.instructions+=3;goto B5ce01c;
case 0x5ce01f:c.instructions+=2;goto B5ce01f;
case 0x5ce022:c.instructions+=1;goto B5ce022;
case 0x5ce024:goto L5ce024;
case 0x5ce026:goto L5ce026;
case 0x5ce027:c.instructions+=8;goto B5ce027;
case 0x5ce02b:c.instructions+=7;goto B5ce02b;
case 0x5ce02e:c.instructions+=6;goto B5ce02e;
case 0x5ce02f:c.instructions+=5;goto B5ce02f;
case 0x5ce036:c.instructions+=4;goto B5ce036;
case 0x5ce037:c.instructions+=3;goto B5ce037;
case 0x5ce039:c.instructions+=2;goto B5ce039;
case 0x5ce03a:c.instructions+=1;goto B5ce03a;
case 0x5ce03d:goto L5ce03d;
case 0x5ce040:c.instructions+=2;goto B5ce040;
case 0x5ce044:c.instructions+=1;goto B5ce044;
case 0x5ce046:goto L5ce046;
case 0x5ce049:c.instructions+=2;goto B5ce049;
case 0x5ce04a:c.instructions+=1;goto B5ce04a;
case 0x5ce04f:goto L5ce04f;
case 0x5ce052:goto L5ce052;
case 0x5ce054:c.instructions+=5;goto B5ce054;
case 0x5ce05b:c.instructions+=4;goto B5ce05b;
case 0x5ce062:c.instructions+=3;goto B5ce062;
case 0x5ce064:c.instructions+=2;goto B5ce064;
case 0x5ce068:c.instructions+=1;goto B5ce068;
case 0x5ce06d:goto L5ce06d;
case 0x5ce070:goto L5ce070;
case 0x5ce072:c.instructions+=1;goto B5ce072;
case 0x5ce077:goto L5ce077;
case 0x5ce07a:c.instructions+=2;goto B5ce07a;
case 0x5ce07c:c.instructions+=1;goto B5ce07c;
case 0x5ce07e:goto L5ce07e;
case 0x5ce080:goto L5ce080;
case 0x5ce083:c.instructions+=2;goto B5ce083;
case 0x5ce085:c.instructions+=1;goto B5ce085;
case 0x5ce087:goto L5ce087;
case 0x5ce089:goto L5ce089;
case 0x5ce090:goto L5ce090;
case 0x5ce092:c.instructions+=1;goto B5ce092;
case 0x5ce097:goto L5ce097;
case 0x5ce09a:c.instructions+=2;goto B5ce09a;
case 0x5ce09c:c.instructions+=1;goto B5ce09c;
case 0x5ce09e:goto L5ce09e;
case 0x5ce0a2:c.instructions+=8;goto B5ce0a2;
case 0x5ce0a6:c.instructions+=7;goto B5ce0a6;
case 0x5ce0a8:c.instructions+=6;goto B5ce0a8;
case 0x5ce0ac:c.instructions+=5;goto B5ce0ac;
case 0x5ce0af:c.instructions+=4;goto B5ce0af;
case 0x5ce0b1:c.instructions+=3;goto B5ce0b1;
case 0x5ce0b4:c.instructions+=2;goto B5ce0b4;
case 0x5ce0b7:c.instructions+=1;goto B5ce0b7;
case 0x5ce0ba:goto L5ce0ba;
case 0x5ce0c0:goto L5ce0c0;
case 0x5ce0c4:c.instructions+=5;goto B5ce0c4;
case 0x5ce0c8:c.instructions+=4;goto B5ce0c8;
case 0x5ce0ca:c.instructions+=3;goto B5ce0ca;
case 0x5ce0ce:c.instructions+=2;goto B5ce0ce;
case 0x5ce0cf:c.instructions+=1;goto B5ce0cf;
case 0x5ce0d1:goto L5ce0d1;
case 0x5ce0d4:c.instructions+=5;goto B5ce0d4;
case 0x5ce0d7:c.instructions+=4;goto B5ce0d7;
case 0x5ce0da:c.instructions+=3;goto B5ce0da;
case 0x5ce0dc:c.instructions+=2;goto B5ce0dc;
case 0x5ce0de:c.instructions+=1;goto B5ce0de;
case 0x5ce0e0:goto L5ce0e0;
case 0x5ce0e4:c.instructions+=3;goto B5ce0e4;
case 0x5ce0e6:c.instructions+=2;goto B5ce0e6;
case 0x5ce0e7:c.instructions+=1;goto B5ce0e7;
case 0x5ce0f0:goto L5ce0f0;
case 0x5ce0f4:c.instructions+=2;goto B5ce0f4;
case 0x5ce0f6:c.instructions+=1;goto B5ce0f6;
case 0x5ce0f8:goto L5ce0f8;
case 0x5ce0fc:c.instructions+=3;goto B5ce0fc;
case 0x5ce0fe:c.instructions+=2;goto B5ce0fe;
case 0x5ce102:c.instructions+=1;goto B5ce102;
case 0x5ce103:goto L5ce103;
case 0x5ce105:c.instructions+=1;goto B5ce105;
case 0x5ce107:goto L5ce107;
case 0x5ce109:c.instructions+=1;goto B5ce109;
case 0x5ce10b:goto L5ce10b;
case 0x5ce10e:c.instructions+=2;goto B5ce10e;
case 0x5ce10f:c.instructions+=1;goto B5ce10f;
case 0x5ce111:goto L5ce111;
case 0x5ce112:goto L5ce112;
case 0x5ce120:goto L5ce120;
case 0x5ce125:c.instructions+=2;goto B5ce125;
case 0x5ce127:c.instructions+=1;goto B5ce127;
case 0x5ce129:goto L5ce129;
case 0x5ce12e:c.instructions+=3;goto B5ce12e;
case 0x5ce130:c.instructions+=2;goto B5ce130;
case 0x5ce137:c.instructions+=1;goto B5ce137;
case 0x5ce139:goto L5ce139;
case 0x5ce13e:c.instructions+=2;goto B5ce13e;
case 0x5ce140:c.instructions+=1;goto B5ce140;
case 0x5ce142:goto L5ce142;
case 0x5ce144:c.instructions+=2;goto B5ce144;
case 0x5ce145:c.instructions+=1;goto B5ce145;
case 0x5ce148:goto L5ce148;
case 0x5ce14f:goto L5ce14f;
case 0x5ce154:c.instructions+=1;goto B5ce154;
case 0x5ce159:goto L5ce159;
case 0x5ce163:goto L5ce163;
case 0x5ce168:c.instructions+=1;goto B5ce168;
case 0x5ce170:goto L5ce170;
case 0x5ce173:c.instructions+=13;goto B5ce173;
case 0x5ce174:c.instructions+=12;goto B5ce174;
case 0x5ce175:c.instructions+=11;goto B5ce175;
case 0x5ce176:c.instructions+=10;goto B5ce176;
case 0x5ce178:c.instructions+=9;goto B5ce178;
case 0x5ce17a:c.instructions+=8;goto B5ce17a;
case 0x5ce17d:c.instructions+=7;goto B5ce17d;
case 0x5ce180:c.instructions+=6;goto B5ce180;
case 0x5ce181:c.instructions+=5;goto B5ce181;
case 0x5ce183:c.instructions+=4;goto B5ce183;
case 0x5ce185:c.instructions+=3;goto B5ce185;
case 0x5ce189:c.instructions+=2;goto B5ce189;
case 0x5ce18d:c.instructions+=1;goto B5ce18d;
case 0x5ce18f:goto L5ce18f;
case 0x5ce192:c.instructions+=2;goto B5ce192;
case 0x5ce194:c.instructions+=1;goto B5ce194;
case 0x5ce196:goto L5ce196;
case 0x5ce197:c.instructions+=2;goto B5ce197;
case 0x5ce19c:c.instructions+=1;goto B5ce19c;
case 0x5ce1a1:goto L5ce1a1;
case 0x5ce1a3:c.instructions+=4;goto B5ce1a3;
case 0x5ce1a6:c.instructions+=3;goto B5ce1a6;
case 0x5ce1a9:c.instructions+=2;goto B5ce1a9;
case 0x5ce1ab:c.instructions+=1;goto B5ce1ab;
case 0x5ce1ae:goto L5ce1ae;
case 0x5ce1b1:c.instructions+=2;goto B5ce1b1;
case 0x5ce1b3:c.instructions+=1;goto B5ce1b3;
case 0x5ce1b9:goto L5ce1b9;
case 0x5ce1bc:c.instructions+=6;goto B5ce1bc;
case 0x5ce1bf:c.instructions+=5;goto B5ce1bf;
case 0x5ce1c2:c.instructions+=4;goto B5ce1c2;
case 0x5ce1c6:c.instructions+=3;goto B5ce1c6;
case 0x5ce1ca:c.instructions+=2;goto B5ce1ca;
case 0x5ce1ce:c.instructions+=1;goto B5ce1ce;
case 0x5ce1d4:goto L5ce1d4;
case 0x5ce1d7:c.instructions+=6;goto B5ce1d7;
case 0x5ce1da:c.instructions+=5;goto B5ce1da;
case 0x5ce1dd:c.instructions+=4;goto B5ce1dd;
case 0x5ce1de:c.instructions+=3;goto B5ce1de;
case 0x5ce1e2:c.instructions+=2;goto B5ce1e2;
case 0x5ce1e4:c.instructions+=1;goto B5ce1e4;
case 0x5ce1e9:goto L5ce1e9;
case 0x5ce1ed:c.instructions+=7;goto B5ce1ed;
case 0x5ce1ef:c.instructions+=6;goto B5ce1ef;
case 0x5ce1f2:c.instructions+=5;goto B5ce1f2;
case 0x5ce1f5:c.instructions+=4;goto B5ce1f5;
case 0x5ce1f7:c.instructions+=3;goto B5ce1f7;
case 0x5ce1ff:c.instructions+=2;goto B5ce1ff;
case 0x5ce207:c.instructions+=1;goto B5ce207;
case 0x5ce209:goto L5ce209;
case 0x5ce210:goto L5ce210;
case 0x5ce215:c.instructions+=8;goto B5ce215;
case 0x5ce219:c.instructions+=7;goto B5ce219;
case 0x5ce21d:c.instructions+=6;goto B5ce21d;
case 0x5ce21f:c.instructions+=5;goto B5ce21f;
case 0x5ce221:c.instructions+=4;goto B5ce221;
case 0x5ce223:c.instructions+=3;goto B5ce223;
case 0x5ce226:c.instructions+=2;goto B5ce226;
case 0x5ce228:c.instructions+=1;goto B5ce228;
case 0x5ce22a:goto L5ce22a;
case 0x5ce230:goto L5ce230;
case 0x5ce234:c.instructions+=7;goto B5ce234;
case 0x5ce238:c.instructions+=6;goto B5ce238;
case 0x5ce23b:c.instructions+=5;goto B5ce23b;
case 0x5ce23d:c.instructions+=4;goto B5ce23d;
case 0x5ce240:c.instructions+=3;goto B5ce240;
case 0x5ce241:c.instructions+=2;goto B5ce241;
case 0x5ce242:c.instructions+=1;goto B5ce242;
case 0x5ce244:goto L5ce244;
case 0x5ce248:c.instructions+=5;goto B5ce248;
case 0x5ce24c:c.instructions+=4;goto B5ce24c;
case 0x5ce24d:c.instructions+=3;goto B5ce24d;
case 0x5ce24f:c.instructions+=2;goto B5ce24f;
case 0x5ce253:c.instructions+=1;goto B5ce253;
case 0x5ce255:goto L5ce255;
case 0x5ce259:goto L5ce259;
case 0x5ce25d:c.instructions+=5;goto B5ce25d;
case 0x5ce261:c.instructions+=4;goto B5ce261;
case 0x5ce268:c.instructions+=3;goto B5ce268;
case 0x5ce26d:c.instructions+=2;goto B5ce26d;
case 0x5ce271:c.instructions+=1;goto B5ce271;
case 0x5ce275:goto L5ce275;
case 0x5ce27a:c.instructions+=2;goto B5ce27a;
case 0x5ce27c:c.instructions+=1;goto B5ce27c;
case 0x5ce27e:goto L5ce27e;
case 0x5ce27f:c.instructions+=6;goto B5ce27f;
case 0x5ce280:c.instructions+=5;goto B5ce280;
case 0x5ce287:c.instructions+=4;goto B5ce287;
case 0x5ce288:c.instructions+=3;goto B5ce288;
case 0x5ce289:c.instructions+=2;goto B5ce289;
case 0x5ce28c:c.instructions+=1;goto B5ce28c;
case 0x5ce28d:goto L5ce28d;
case 0x5ce293:c.instructions+=2;goto B5ce293;
case 0x5ce295:c.instructions+=1;goto B5ce295;
case 0x5ce297:goto L5ce297;
case 0x5ce29b:c.instructions+=2;goto B5ce29b;
case 0x5ce29d:c.instructions+=1;goto B5ce29d;
case 0x5ce29f:goto L5ce29f;
case 0x5ce2a1:c.instructions+=22;goto B5ce2a1;
case 0x5ce2a2:c.instructions+=21;goto B5ce2a2;
case 0x5ce2a4:c.instructions+=20;goto B5ce2a4;
case 0x5ce2a5:c.instructions+=19;goto B5ce2a5;
case 0x5ce2ab:c.instructions+=18;goto B5ce2ab;
case 0x5ce2ae:c.instructions+=17;goto B5ce2ae;
case 0x5ce2b4:c.instructions+=16;goto B5ce2b4;
case 0x5ce2b6:c.instructions+=15;goto B5ce2b6;
case 0x5ce2b8:c.instructions+=14;goto B5ce2b8;
case 0x5ce2b9:c.instructions+=13;goto B5ce2b9;
case 0x5ce2bd:c.instructions+=12;goto B5ce2bd;
case 0x5ce2c1:c.instructions+=11;goto B5ce2c1;
case 0x5ce2c2:c.instructions+=10;goto B5ce2c2;
case 0x5ce2c4:c.instructions+=9;goto B5ce2c4;
case 0x5ce2c5:c.instructions+=8;goto B5ce2c5;
case 0x5ce2c9:c.instructions+=7;goto B5ce2c9;
case 0x5ce2ca:c.instructions+=6;goto B5ce2ca;
case 0x5ce2cc:c.instructions+=5;goto B5ce2cc;
case 0x5ce2cd:c.instructions+=4;goto B5ce2cd;
case 0x5ce2d2:c.instructions+=3;goto B5ce2d2;
case 0x5ce2d3:c.instructions+=2;goto B5ce2d3;
case 0x5ce2d7:c.instructions+=1;goto B5ce2d7;
case 0x5ce2da:goto L5ce2da;
case 0x5ce2dc:goto L5ce2dc;
case 0x5ce2e1:c.instructions+=14;goto B5ce2e1;
case 0x5ce2e3:c.instructions+=13;goto B5ce2e3;
case 0x5ce2e5:c.instructions+=12;goto B5ce2e5;
case 0x5ce2e6:c.instructions+=11;goto B5ce2e6;
case 0x5ce2e8:c.instructions+=10;goto B5ce2e8;
case 0x5ce2e9:c.instructions+=9;goto B5ce2e9;
case 0x5ce2ed:c.instructions+=8;goto B5ce2ed;
case 0x5ce2ef:c.instructions+=7;goto B5ce2ef;
case 0x5ce2f0:c.instructions+=6;goto B5ce2f0;
case 0x5ce2f4:c.instructions+=5;goto B5ce2f4;
case 0x5ce2f5:c.instructions+=4;goto B5ce2f5;
case 0x5ce2f9:c.instructions+=3;goto B5ce2f9;
case 0x5ce2fa:c.instructions+=2;goto B5ce2fa;
case 0x5ce2fb:c.instructions+=1;goto B5ce2fb;
case 0x5ce2fe:goto L5ce2fe;
case 0x5ce302:c.instructions+=1;goto B5ce302;
case 0x5ce308:goto L5ce308;
case 0x5ce30e:c.instructions+=14;goto B5ce30e;
case 0x5ce313:c.instructions+=13;goto B5ce313;
case 0x5ce317:c.instructions+=12;goto B5ce317;
case 0x5ce318:c.instructions+=11;goto B5ce318;
case 0x5ce31e:c.instructions+=10;goto B5ce31e;
case 0x5ce320:c.instructions+=9;goto B5ce320;
case 0x5ce326:c.instructions+=8;goto B5ce326;
case 0x5ce329:c.instructions+=7;goto B5ce329;
case 0x5ce32f:c.instructions+=6;goto B5ce32f;
case 0x5ce333:c.instructions+=5;goto B5ce333;
case 0x5ce338:c.instructions+=4;goto B5ce338;
case 0x5ce33a:c.instructions+=3;goto B5ce33a;
case 0x5ce33e:c.instructions+=2;goto B5ce33e;
case 0x5ce342:c.instructions+=1;goto B5ce342;
case 0x5ce344:goto L5ce344;
case 0x5ce346:c.instructions+=1;goto B5ce346;
case 0x5ce348:goto L5ce348;
case 0x5ce34a:c.instructions+=1;goto B5ce34a;
case 0x5ce34c:goto L5ce34c;
case 0x5ce34e:c.instructions+=2;goto B5ce34e;
case 0x5ce350:c.instructions+=1;goto B5ce350;
case 0x5ce354:goto L5ce354;
case 0x5ce358:c.instructions+=8;goto B5ce358;
case 0x5ce35a:c.instructions+=7;goto B5ce35a;
case 0x5ce35b:c.instructions+=6;goto B5ce35b;
case 0x5ce35e:c.instructions+=5;goto B5ce35e;
case 0x5ce360:c.instructions+=4;goto B5ce360;
case 0x5ce363:c.instructions+=3;goto B5ce363;
case 0x5ce364:c.instructions+=2;goto B5ce364;
case 0x5ce368:c.instructions+=1;goto B5ce368;
case 0x5ce36a:goto L5ce36a;
case 0x5ce36e:goto L5ce36e;
case 0x5ce370:c.instructions+=2;goto B5ce370;
case 0x5ce372:c.instructions+=1;goto B5ce372;
case 0x5ce374:goto L5ce374;
case 0x5ce378:c.instructions+=1;goto B5ce378;
case 0x5ce37a:goto L5ce37a;
case 0x5ce37e:c.instructions+=1;goto B5ce37e;
case 0x5ce380:goto L5ce380;
case 0x5ce384:c.instructions+=9;goto B5ce384;
case 0x5ce386:c.instructions+=8;goto B5ce386;
case 0x5ce388:c.instructions+=7;goto B5ce388;
case 0x5ce38a:c.instructions+=6;goto B5ce38a;
case 0x5ce38c:c.instructions+=5;goto B5ce38c;
case 0x5ce390:c.instructions+=4;goto B5ce390;
case 0x5ce391:c.instructions+=3;goto B5ce391;
case 0x5ce392:c.instructions+=2;goto B5ce392;
case 0x5ce393:c.instructions+=1;goto B5ce393;
case 0x5ce396:goto L5ce396;
case 0x5ce39a:c.instructions+=8;goto B5ce39a;
case 0x5ce39e:c.instructions+=7;goto B5ce39e;
case 0x5ce3a0:c.instructions+=6;goto B5ce3a0;
case 0x5ce3a2:c.instructions+=5;goto B5ce3a2;
case 0x5ce3a6:c.instructions+=4;goto B5ce3a6;
case 0x5ce3a7:c.instructions+=3;goto B5ce3a7;
case 0x5ce3a9:c.instructions+=2;goto B5ce3a9;
case 0x5ce3ab:c.instructions+=1;goto B5ce3ab;
case 0x5ce3ae:goto L5ce3ae;
case 0x5ce3b0:goto L5ce3b0;
case 0x5ce3b2:c.instructions+=1;goto B5ce3b2;
case 0x5ce3b5:goto L5ce3b5;
case 0x5ce3b7:goto L5ce3b7;
case 0x5ce3bb:c.instructions+=4;goto B5ce3bb;
case 0x5ce3bd:c.instructions+=3;goto B5ce3bd;
case 0x5ce3bf:c.instructions+=2;goto B5ce3bf;
case 0x5ce3c0:c.instructions+=1;goto B5ce3c0;
case 0x5ce3c3:goto L5ce3c3;
case 0x5ce3c7:c.instructions+=9;goto B5ce3c7;
case 0x5ce3cb:c.instructions+=8;goto B5ce3cb;
case 0x5ce3cf:c.instructions+=7;goto B5ce3cf;
case 0x5ce3d1:c.instructions+=6;goto B5ce3d1;
case 0x5ce3d2:c.instructions+=5;goto B5ce3d2;
case 0x5ce3d5:c.instructions+=4;goto B5ce3d5;
case 0x5ce3d7:c.instructions+=3;goto B5ce3d7;
case 0x5ce3db:c.instructions+=2;goto B5ce3db;
case 0x5ce3df:c.instructions+=1;goto B5ce3df;
case 0x5ce3e1:goto L5ce3e1;
case 0x5ce3e5:c.instructions+=2;goto B5ce3e5;
case 0x5ce3e7:c.instructions+=1;goto B5ce3e7;
case 0x5ce3e9:goto L5ce3e9;
case 0x5ce3ed:c.instructions+=2;goto B5ce3ed;
case 0x5ce3ee:c.instructions+=1;goto B5ce3ee;
case 0x5ce3f3:goto L5ce3f3;
case 0x5ce3f6:goto L5ce3f6;
case 0x5ce3f7:c.instructions+=5;goto B5ce3f7;
case 0x5ce3f8:c.instructions+=4;goto B5ce3f8;
case 0x5ce3f9:c.instructions+=3;goto B5ce3f9;
case 0x5ce3fa:c.instructions+=2;goto B5ce3fa;
case 0x5ce3fd:c.instructions+=1;goto B5ce3fd;
case 0x5ce400:goto L5ce400;
case 0x5ce405:c.instructions+=3;goto B5ce405;
case 0x5ce40a:c.instructions+=2;goto B5ce40a;
case 0x5ce40b:c.instructions+=1;goto B5ce40b;
case 0x5ce40d:goto L5ce40d;
case 0x5ce410:goto L5ce410;
case 0x5ce412:c.instructions+=7;goto B5ce412;
case 0x5ce414:c.instructions+=6;goto B5ce414;
case 0x5ce417:c.instructions+=5;goto B5ce417;
case 0x5ce419:c.instructions+=4;goto B5ce419;
case 0x5ce41c:c.instructions+=3;goto B5ce41c;
case 0x5ce41f:c.instructions+=2;goto B5ce41f;
case 0x5ce421:c.instructions+=1;goto B5ce421;
case 0x5ce423:goto L5ce423;
case 0x5ce425:c.instructions+=2;goto B5ce425;
case 0x5ce426:c.instructions+=1;goto B5ce426;
case 0x5ce429:goto L5ce429;
case 0x5ce42b:c.instructions+=1;goto B5ce42b;
case 0x5ce42d:goto L5ce42d;
case 0x5ce430:goto L5ce430;
case 0x5ce433:c.instructions+=3;goto B5ce433;
case 0x5ce435:c.instructions+=2;goto B5ce435;
case 0x5ce436:c.instructions+=1;goto B5ce436;
case 0x5ce439:goto L5ce439;
case 0x5ce43b:c.instructions+=1;goto B5ce43b;
case 0x5ce43d:goto L5ce43d;
case 0x5ce444:goto L5ce444;
case 0x5ce449:c.instructions+=2;goto B5ce449;
case 0x5ce44e:c.instructions+=1;goto B5ce44e;
case 0x5ce450:goto L5ce450;
case 0x5ce455:c.instructions+=4;goto B5ce455;
case 0x5ce45a:c.instructions+=3;goto B5ce45a;
case 0x5ce464:c.instructions+=2;goto B5ce464;
case 0x5ce46e:c.instructions+=1;goto B5ce46e;
case 0x5ce470:goto L5ce470;
case 0x5ce473:c.instructions+=3;goto B5ce473;
case 0x5ce475:c.instructions+=2;goto B5ce475;
case 0x5ce476:c.instructions+=1;goto B5ce476;
case 0x5ce479:goto L5ce479;
case 0x5ce47b:c.instructions+=1;goto B5ce47b;
case 0x5ce47d:goto L5ce47d;
case 0x5ce480:goto L5ce480;
case 0x5ce482:c.instructions+=2;goto B5ce482;
case 0x5ce483:c.instructions+=1;goto B5ce483;
case 0x5ce486:goto L5ce486;
case 0x5ce488:c.instructions+=1;goto B5ce488;
case 0x5ce48a:goto L5ce48a;
case 0x5ce48f:c.instructions+=7;goto B5ce48f;
case 0x5ce491:c.instructions+=6;goto B5ce491;
case 0x5ce493:c.instructions+=5;goto B5ce493;
case 0x5ce496:c.instructions+=4;goto B5ce496;
case 0x5ce498:c.instructions+=3;goto B5ce498;
case 0x5ce499:c.instructions+=2;goto B5ce499;
case 0x5ce49c:c.instructions+=1;goto B5ce49c;
case 0x5ce4a1:goto L5ce4a1;
case 0x5ce4a6:c.instructions+=3;goto B5ce4a6;
case 0x5ce4a9:c.instructions+=2;goto B5ce4a9;
case 0x5ce4ae:c.instructions+=1;goto B5ce4ae;
case 0x5ce4b0:goto L5ce4b0;
case 0x5ce4b1:c.instructions+=1;goto B5ce4b1;
case 0x5ce4c0:goto L5ce4c0;
case 0x5ce4c5:c.instructions+=4;goto B5ce4c5;
case 0x5ce4c6:c.instructions+=3;goto B5ce4c6;
case 0x5ce4c8:c.instructions+=2;goto B5ce4c8;
case 0x5ce4ca:c.instructions+=1;goto B5ce4ca;
case 0x5ce4cc:goto L5ce4cc;
case 0x5ce4d1:c.instructions+=2;goto B5ce4d1;
case 0x5ce4d6:c.instructions+=1;goto B5ce4d6;
case 0x5ce4d8:goto L5ce4d8;
case 0x5ce4db:c.instructions+=1;goto B5ce4db;
case 0x5ce4dd:goto L5ce4dd;
case 0x5ce4e0:c.instructions+=3;goto B5ce4e0;
case 0x5ce4e2:c.instructions+=2;goto B5ce4e2;
case 0x5ce4e3:c.instructions+=1;goto B5ce4e3;
case 0x5ce4e6:goto L5ce4e6;
case 0x5ce4eb:c.instructions+=7;goto B5ce4eb;
case 0x5ce4ed:c.instructions+=6;goto B5ce4ed;
case 0x5ce4ef:c.instructions+=5;goto B5ce4ef;
case 0x5ce4f2:c.instructions+=4;goto B5ce4f2;
case 0x5ce4f4:c.instructions+=3;goto B5ce4f4;
case 0x5ce4f5:c.instructions+=2;goto B5ce4f5;
case 0x5ce4f8:c.instructions+=1;goto B5ce4f8;
case 0x5ce4fd:goto L5ce4fd;
case 0x5ce502:c.instructions+=4;goto B5ce502;
case 0x5ce505:c.instructions+=3;goto B5ce505;
case 0x5ce506:c.instructions+=2;goto B5ce506;
case 0x5ce50b:c.instructions+=1;goto B5ce50b;
case 0x5ce50d:goto L5ce50d;
case 0x5ce50e:c.instructions+=1;goto B5ce50e;
case 0x5ce510:goto L5ce510;
case 0x5ce511:c.instructions+=7;goto B5ce511;
case 0x5ce515:c.instructions+=6;goto B5ce515;
case 0x5ce516:c.instructions+=5;goto B5ce516;
case 0x5ce517:c.instructions+=4;goto B5ce517;
case 0x5ce519:c.instructions+=3;goto B5ce519;
case 0x5ce51c:c.instructions+=2;goto B5ce51c;
case 0x5ce51e:c.instructions+=1;goto B5ce51e;
case 0x5ce524:goto L5ce524;
case 0x5ce52b:c.instructions+=1;goto B5ce52b;
case 0x5ce52d:goto L5ce52d;
case 0x5ce532:c.instructions+=2;goto B5ce532;
case 0x5ce537:c.instructions+=1;goto B5ce537;
case 0x5ce53c:goto L5ce53c;
case 0x5ce53f:c.instructions+=1;goto B5ce53f;
case 0x5ce541:goto L5ce541;
case 0x5ce542:c.instructions+=4;goto B5ce542;
case 0x5ce547:c.instructions+=3;goto B5ce547;
case 0x5ce54c:c.instructions+=2;goto B5ce54c;
case 0x5ce551:c.instructions+=1;goto B5ce551;
case 0x5ce556:goto L5ce556;
case 0x5ce558:c.instructions+=2;goto B5ce558;
case 0x5ce55b:c.instructions+=1;goto B5ce55b;
case 0x5ce561:goto L5ce561;
case 0x5ce565:c.instructions+=5;goto B5ce565;
case 0x5ce569:c.instructions+=4;goto B5ce569;
case 0x5ce56b:c.instructions+=3;goto B5ce56b;
case 0x5ce56d:c.instructions+=2;goto B5ce56d;
case 0x5ce570:c.instructions+=1;goto B5ce570;
case 0x5ce575:goto L5ce575;
case 0x5ce577:c.instructions+=2;goto B5ce577;
case 0x5ce57a:c.instructions+=1;goto B5ce57a;
case 0x5ce57f:goto L5ce57f;
case 0x5ce582:c.instructions+=2;goto B5ce582;
case 0x5ce584:c.instructions+=1;goto B5ce584;
case 0x5ce586:goto L5ce586;
case 0x5ce589:c.instructions+=6;goto B5ce589;
case 0x5ce58c:c.instructions+=5;goto B5ce58c;
case 0x5ce58f:c.instructions+=4;goto B5ce58f;
case 0x5ce592:c.instructions+=3;goto B5ce592;
case 0x5ce595:c.instructions+=2;goto B5ce595;
case 0x5ce598:c.instructions+=1;goto B5ce598;
case 0x5ce59a:goto L5ce59a;
case 0x5ce59c:goto L5ce59c;
case 0x5ce59f:c.instructions+=15;goto B5ce59f;
case 0x5ce5a0:c.instructions+=14;goto B5ce5a0;
case 0x5ce5a1:c.instructions+=13;goto B5ce5a1;
case 0x5ce5a2:c.instructions+=12;goto B5ce5a2;
case 0x5ce5a3:c.instructions+=11;goto B5ce5a3;
case 0x5ce5a4:c.instructions+=10;goto B5ce5a4;
case 0x5ce5a6:c.instructions+=9;goto B5ce5a6;
case 0x5ce5ab:c.instructions+=8;goto B5ce5ab;
case 0x5ce5ae:c.instructions+=7;goto B5ce5ae;
case 0x5ce5b0:c.instructions+=6;goto B5ce5b0;
case 0x5ce5b3:c.instructions+=5;goto B5ce5b3;
case 0x5ce5b6:c.instructions+=4;goto B5ce5b6;
case 0x5ce5bb:c.instructions+=3;goto B5ce5bb;
case 0x5ce5bc:c.instructions+=2;goto B5ce5bc;
case 0x5ce5c1:c.instructions+=1;goto B5ce5c1;
case 0x5ce5c6:goto L5ce5c6;
case 0x5ce5c9:c.instructions+=7;goto B5ce5c9;
case 0x5ce5cb:c.instructions+=6;goto B5ce5cb;
case 0x5ce5d2:c.instructions+=5;goto B5ce5d2;
case 0x5ce5d5:c.instructions+=4;goto B5ce5d5;
case 0x5ce5d8:c.instructions+=3;goto B5ce5d8;
case 0x5ce5db:c.instructions+=2;goto B5ce5db;
case 0x5ce5de:c.instructions+=1;goto B5ce5de;
case 0x5ce5e3:goto L5ce5e3;
case 0x5ce5e6:c.instructions+=1;goto B5ce5e6;
case 0x5ce5ec:goto L5ce5ec;
case 0x5ce5f3:c.instructions+=1;goto B5ce5f3;
case 0x5ce5f5:goto L5ce5f5;
case 0x5ce5fa:c.instructions+=2;goto B5ce5fa;
case 0x5ce5ff:c.instructions+=1;goto B5ce5ff;
case 0x5ce604:goto L5ce604;
case 0x5ce607:c.instructions+=1;goto B5ce607;
case 0x5ce609:goto L5ce609;
case 0x5ce60a:c.instructions+=4;goto B5ce60a;
case 0x5ce60f:c.instructions+=3;goto B5ce60f;
case 0x5ce614:c.instructions+=2;goto B5ce614;
case 0x5ce619:c.instructions+=1;goto B5ce619;
case 0x5ce61e:goto L5ce61e;
case 0x5ce620:c.instructions+=2;goto B5ce620;
case 0x5ce623:c.instructions+=1;goto B5ce623;
case 0x5ce625:goto L5ce625;
case 0x5ce626:c.instructions+=4;goto B5ce626;
case 0x5ce627:c.instructions+=3;goto B5ce627;
case 0x5ce629:c.instructions+=2;goto B5ce629;
case 0x5ce62a:c.instructions+=1;goto B5ce62a;
case 0x5ce62d:goto L5ce62d;
case 0x5ce62f:c.instructions+=3;goto B5ce62f;
case 0x5ce636:c.instructions+=2;goto B5ce636;
case 0x5ce63d:c.instructions+=1;goto B5ce63d;
case 0x5ce642:goto L5ce642;
case 0x5ce644:c.instructions+=2;goto B5ce644;
case 0x5ce647:c.instructions+=1;goto B5ce647;
case 0x5ce64c:goto L5ce64c;
case 0x5ce64f:c.instructions+=2;goto B5ce64f;
case 0x5ce651:c.instructions+=1;goto B5ce651;
case 0x5ce653:goto L5ce653;
case 0x5ce656:c.instructions+=6;goto B5ce656;
case 0x5ce659:c.instructions+=5;goto B5ce659;
case 0x5ce65c:c.instructions+=4;goto B5ce65c;
case 0x5ce65f:c.instructions+=3;goto B5ce65f;
case 0x5ce662:c.instructions+=2;goto B5ce662;
case 0x5ce665:c.instructions+=1;goto B5ce665;
case 0x5ce667:goto L5ce667;
case 0x5ce669:goto L5ce669;
case 0x5ce66c:c.instructions+=17;goto B5ce66c;
case 0x5ce66d:c.instructions+=16;goto B5ce66d;
case 0x5ce66e:c.instructions+=15;goto B5ce66e;
case 0x5ce66f:c.instructions+=14;goto B5ce66f;
case 0x5ce670:c.instructions+=13;goto B5ce670;
case 0x5ce671:c.instructions+=12;goto B5ce671;
case 0x5ce674:c.instructions+=11;goto B5ce674;
case 0x5ce676:c.instructions+=10;goto B5ce676;
case 0x5ce679:c.instructions+=9;goto B5ce679;
case 0x5ce67c:c.instructions+=8;goto B5ce67c;
case 0x5ce67f:c.instructions+=7;goto B5ce67f;
case 0x5ce681:c.instructions+=6;goto B5ce681;
case 0x5ce682:c.instructions+=5;goto B5ce682;
case 0x5ce683:c.instructions+=4;goto B5ce683;
case 0x5ce686:c.instructions+=3;goto B5ce686;
case 0x5ce687:c.instructions+=2;goto B5ce687;
case 0x5ce68c:c.instructions+=1;goto B5ce68c;
case 0x5ce691:goto L5ce691;
case 0x5ce694:c.instructions+=7;goto B5ce694;
case 0x5ce696:c.instructions+=6;goto B5ce696;
case 0x5ce69d:c.instructions+=5;goto B5ce69d;
case 0x5ce6a0:c.instructions+=4;goto B5ce6a0;
case 0x5ce6a3:c.instructions+=3;goto B5ce6a3;
case 0x5ce6a6:c.instructions+=2;goto B5ce6a6;
case 0x5ce6a9:c.instructions+=1;goto B5ce6a9;
case 0x5ce6ae:goto L5ce6ae;
case 0x5ce6af:c.instructions+=4;goto B5ce6af;
case 0x5ce6b0:c.instructions+=3;goto B5ce6b0;
case 0x5ce6b5:c.instructions+=2;goto B5ce6b5;
case 0x5ce6b6:c.instructions+=1;goto B5ce6b6;
case 0x5ce6c0:goto L5ce6c0;
case 0x5ce6c1:c.instructions+=8;goto B5ce6c1;
case 0x5ce6c5:c.instructions+=7;goto B5ce6c5;
case 0x5ce6c6:c.instructions+=6;goto B5ce6c6;
case 0x5ce6c7:c.instructions+=5;goto B5ce6c7;
case 0x5ce6c9:c.instructions+=4;goto B5ce6c9;
case 0x5ce6cc:c.instructions+=3;goto B5ce6cc;
case 0x5ce6cd:c.instructions+=2;goto B5ce6cd;
case 0x5ce6cf:c.instructions+=1;goto B5ce6cf;
case 0x5ce6d1:goto L5ce6d1;
case 0x5ce6d4:c.instructions+=2;goto B5ce6d4;
case 0x5ce6d6:c.instructions+=1;goto B5ce6d6;
case 0x5ce6d8:goto L5ce6d8;
case 0x5ce6df:c.instructions+=2;goto B5ce6df;
case 0x5ce6e0:c.instructions+=1;goto B5ce6e0;
case 0x5ce6e2:goto L5ce6e2;
case 0x5ce6e7:goto L5ce6e7;
case 0x5ce6ea:c.instructions+=1;goto B5ce6ea;
case 0x5ce6ec:goto L5ce6ec;
case 0x5ce6f1:c.instructions+=1;goto B5ce6f1;
case 0x5ce6f6:goto L5ce6f6;
case 0x5ce6f9:c.instructions+=2;goto B5ce6f9;
case 0x5ce6fb:c.instructions+=1;goto B5ce6fb;
case 0x5ce6fd:goto L5ce6fd;
case 0x5ce6ff:c.instructions+=3;goto B5ce6ff;
case 0x5ce702:c.instructions+=2;goto B5ce702;
case 0x5ce704:c.instructions+=1;goto B5ce704;
case 0x5ce706:goto L5ce706;
case 0x5ce707:c.instructions+=2;goto B5ce707;
case 0x5ce70c:c.instructions+=1;goto B5ce70c;
case 0x5ce711:goto L5ce711;
case 0x5ce713:c.instructions+=4;goto B5ce713;
case 0x5ce716:c.instructions+=3;goto B5ce716;
case 0x5ce719:c.instructions+=2;goto B5ce719;
case 0x5ce71b:c.instructions+=1;goto B5ce71b;
case 0x5ce71e:goto L5ce71e;
case 0x5ce721:c.instructions+=2;goto B5ce721;
case 0x5ce723:c.instructions+=1;goto B5ce723;
case 0x5ce725:goto L5ce725;
case 0x5ce726:c.instructions+=1;goto B5ce726;
case 0x5ce72b:goto L5ce72b;
case 0x5ce72e:goto L5ce72e;
case 0x5ce731:goto L5ce731;
case 0x5ce734:c.instructions+=2;goto B5ce734;
case 0x5ce736:c.instructions+=1;goto B5ce736;
case 0x5ce738:goto L5ce738;
case 0x5ce739:c.instructions+=1;goto B5ce739;
case 0x5ce73e:goto L5ce73e;
case 0x5ce741:c.instructions+=1;goto B5ce741;
case 0x5ce744:goto L5ce744;
case 0x5ce747:c.instructions+=1;goto B5ce747;
case 0x5ce749:goto L5ce749;
case 0x5ce74c:c.instructions+=2;goto B5ce74c;
case 0x5ce74e:c.instructions+=1;goto B5ce74e;
case 0x5ce750:goto L5ce750;
case 0x5ce757:c.instructions+=2;goto B5ce757;
case 0x5ce758:c.instructions+=1;goto B5ce758;
case 0x5ce75a:goto L5ce75a;
case 0x5ce75f:goto L5ce75f;
case 0x5ce762:c.instructions+=1;goto B5ce762;
case 0x5ce764:goto L5ce764;
case 0x5ce769:c.instructions+=1;goto B5ce769;
case 0x5ce76e:goto L5ce76e;
case 0x5ce771:c.instructions+=2;goto B5ce771;
case 0x5ce773:c.instructions+=1;goto B5ce773;
case 0x5ce775:goto L5ce775;
case 0x5ce777:c.instructions+=3;goto B5ce777;
case 0x5ce77a:c.instructions+=2;goto B5ce77a;
case 0x5ce77c:c.instructions+=1;goto B5ce77c;
case 0x5ce77e:goto L5ce77e;
case 0x5ce77f:c.instructions+=2;goto B5ce77f;
case 0x5ce784:c.instructions+=1;goto B5ce784;
case 0x5ce789:goto L5ce789;
case 0x5ce78b:c.instructions+=4;goto B5ce78b;
case 0x5ce78e:c.instructions+=3;goto B5ce78e;
case 0x5ce791:c.instructions+=2;goto B5ce791;
case 0x5ce793:c.instructions+=1;goto B5ce793;
case 0x5ce796:goto L5ce796;
case 0x5ce799:c.instructions+=2;goto B5ce799;
case 0x5ce79b:c.instructions+=1;goto B5ce79b;
case 0x5ce79d:goto L5ce79d;
case 0x5ce79e:c.instructions+=1;goto B5ce79e;
case 0x5ce7a3:goto L5ce7a3;
case 0x5ce7a6:goto L5ce7a6;
case 0x5ce7a9:goto L5ce7a9;
case 0x5ce7ac:c.instructions+=2;goto B5ce7ac;
case 0x5ce7ae:c.instructions+=1;goto B5ce7ae;
case 0x5ce7b0:goto L5ce7b0;
case 0x5ce7b1:c.instructions+=1;goto B5ce7b1;
case 0x5ce7b6:goto L5ce7b6;
case 0x5ce7b9:c.instructions+=1;goto B5ce7b9;
case 0x5ce7bc:goto L5ce7bc;
case 0x5ce7bd:c.instructions+=4;goto B5ce7bd;
case 0x5ce7be:c.instructions+=3;goto B5ce7be;
case 0x5ce7bf:c.instructions+=2;goto B5ce7bf;
case 0x5ce7c0:c.instructions+=1;goto B5ce7c0;
case 0x5ce7d0:goto L5ce7d0;
case 0x5ce7d1:c.instructions+=7;goto B5ce7d1;
case 0x5ce7d2:c.instructions+=6;goto B5ce7d2;
case 0x5ce7d8:c.instructions+=5;goto B5ce7d8;
case 0x5ce7da:c.instructions+=4;goto B5ce7da;
case 0x5ce7db:c.instructions+=3;goto B5ce7db;
case 0x5ce7dd:c.instructions+=2;goto B5ce7dd;
case 0x5ce7e2:c.instructions+=1;goto B5ce7e2;
case 0x5ce7e7:goto L5ce7e7;
case 0x5ce7e9:c.instructions+=1;goto B5ce7e9;
case 0x5ce7eb:goto L5ce7eb;
case 0x5ce7f0:goto L5ce7f0;
case 0x5ce7f3:c.instructions+=1;goto B5ce7f3;
case 0x5ce7f5:goto L5ce7f5;
case 0x5ce7f7:c.instructions+=2;goto B5ce7f7;
case 0x5ce7f9:c.instructions+=1;goto B5ce7f9;
case 0x5ce7fb:goto L5ce7fb;
case 0x5ce7fd:goto L5ce7fd;
case 0x5ce7ff:c.instructions+=5;goto B5ce7ff;
case 0x5ce802:c.instructions+=4;goto B5ce802;
case 0x5ce804:c.instructions+=3;goto B5ce804;
case 0x5ce805:c.instructions+=2;goto B5ce805;
case 0x5ce808:c.instructions+=1;goto B5ce808;
case 0x5ce80d:goto L5ce80d;
case 0x5ce810:goto L5ce810;
case 0x5ce813:c.instructions+=3;goto B5ce813;
case 0x5ce815:c.instructions+=2;goto B5ce815;
case 0x5ce817:c.instructions+=1;goto B5ce817;
case 0x5ce819:goto L5ce819;
case 0x5ce81a:c.instructions+=2;goto B5ce81a;
case 0x5ce81f:c.instructions+=1;goto B5ce81f;
case 0x5ce824:goto L5ce824;
case 0x5ce827:goto L5ce827;
case 0x5ce82a:c.instructions+=2;goto B5ce82a;
case 0x5ce82c:c.instructions+=1;goto B5ce82c;
case 0x5ce82e:goto L5ce82e;
case 0x5ce830:c.instructions+=2;goto B5ce830;
case 0x5ce831:c.instructions+=1;goto B5ce831;
case 0x5ce834:goto L5ce834;
case 0x5ce837:goto L5ce837;
case 0x5ce839:c.instructions+=9;goto B5ce839;
case 0x5ce83c:c.instructions+=8;goto B5ce83c;
case 0x5ce83e:c.instructions+=7;goto B5ce83e;
case 0x5ce841:c.instructions+=6;goto B5ce841;
case 0x5ce842:c.instructions+=5;goto B5ce842;
case 0x5ce844:c.instructions+=4;goto B5ce844;
case 0x5ce845:c.instructions+=3;goto B5ce845;
case 0x5ce84a:c.instructions+=2;goto B5ce84a;
case 0x5ce84b:c.instructions+=1;goto B5ce84b;
case 0x5ce850:goto L5ce850;
case 0x5ce851:c.instructions+=6;goto B5ce851;
case 0x5ce852:c.instructions+=5;goto B5ce852;
case 0x5ce858:c.instructions+=4;goto B5ce858;
case 0x5ce859:c.instructions+=3;goto B5ce859;
case 0x5ce85e:c.instructions+=2;goto B5ce85e;
case 0x5ce860:c.instructions+=1;goto B5ce860;
case 0x5ce865:goto L5ce865;
case 0x5ce867:c.instructions+=2;goto B5ce867;
case 0x5ce869:c.instructions+=1;goto B5ce869;
case 0x5ce86b:goto L5ce86b;
case 0x5ce870:goto L5ce870;
case 0x5ce873:c.instructions+=1;goto B5ce873;
case 0x5ce875:goto L5ce875;
case 0x5ce878:c.instructions+=3;goto B5ce878;
case 0x5ce87a:c.instructions+=2;goto B5ce87a;
case 0x5ce87b:c.instructions+=1;goto B5ce87b;
case 0x5ce87e:goto L5ce87e;
case 0x5ce880:c.instructions+=7;goto B5ce880;
case 0x5ce882:c.instructions+=6;goto B5ce882;
case 0x5ce885:c.instructions+=5;goto B5ce885;
case 0x5ce887:c.instructions+=4;goto B5ce887;
case 0x5ce889:c.instructions+=3;goto B5ce889;
case 0x5ce88a:c.instructions+=2;goto B5ce88a;
case 0x5ce88d:c.instructions+=1;goto B5ce88d;
case 0x5ce892:goto L5ce892;
case 0x5ce895:c.instructions+=3;goto B5ce895;
case 0x5ce896:c.instructions+=2;goto B5ce896;
case 0x5ce898:c.instructions+=1;goto B5ce898;
case 0x5ce89a:goto L5ce89a;
case 0x5ce89b:c.instructions+=3;goto B5ce89b;
case 0x5ce89c:c.instructions+=2;goto B5ce89c;
case 0x5ce89d:c.instructions+=1;goto B5ce89d;
case 0x5ce8a0:goto L5ce8a0;
case 0x5ce8a3:c.instructions+=5;goto B5ce8a3;
case 0x5ce8a4:c.instructions+=4;goto B5ce8a4;
case 0x5ce8aa:c.instructions+=3;goto B5ce8aa;
case 0x5ce8af:c.instructions+=2;goto B5ce8af;
case 0x5ce8b7:c.instructions+=1;goto B5ce8b7;
case 0x5ce8bc:goto L5ce8bc;
case 0x5ce8be:c.instructions+=2;goto B5ce8be;
case 0x5ce8c2:c.instructions+=1;goto B5ce8c2;
case 0x5ce8c8:goto L5ce8c8;
case 0x5ce8c9:c.instructions+=3;goto B5ce8c9;
case 0x5ce8ca:c.instructions+=2;goto B5ce8ca;
case 0x5ce8cb:c.instructions+=1;goto B5ce8cb;
case 0x5ce8cd:goto L5ce8cd;
case 0x5ce8d1:goto L5ce8d1;
case 0x5ce8d6:c.instructions+=1;goto B5ce8d6;
case 0x5ce8dc:goto L5ce8dc;
case 0x5ce8df:c.instructions+=4;goto B5ce8df;
case 0x5ce8e2:c.instructions+=3;goto B5ce8e2;
case 0x5ce8e6:c.instructions+=2;goto B5ce8e6;
case 0x5ce8ea:c.instructions+=1;goto B5ce8ea;
case 0x5ce8ec:goto L5ce8ec;
case 0x5ce8ef:c.instructions+=11;goto B5ce8ef;
case 0x5ce8f4:c.instructions+=10;goto B5ce8f4;
case 0x5ce8f6:c.instructions+=9;goto B5ce8f6;
case 0x5ce8f8:c.instructions+=8;goto B5ce8f8;
case 0x5ce8fb:c.instructions+=7;goto B5ce8fb;
case 0x5ce8fc:c.instructions+=6;goto B5ce8fc;
case 0x5ce8fe:c.instructions+=5;goto B5ce8fe;
case 0x5ce900:c.instructions+=4;goto B5ce900;
case 0x5ce902:c.instructions+=3;goto B5ce902;
case 0x5ce903:c.instructions+=2;goto B5ce903;
case 0x5ce904:c.instructions+=1;goto B5ce904;
case 0x5ce907:goto L5ce907;
case 0x5ce909:c.instructions+=8;goto B5ce909;
case 0x5ce90b:c.instructions+=7;goto B5ce90b;
case 0x5ce90d:c.instructions+=6;goto B5ce90d;
case 0x5ce911:c.instructions+=5;goto B5ce911;
case 0x5ce912:c.instructions+=4;goto B5ce912;
case 0x5ce914:c.instructions+=3;goto B5ce914;
case 0x5ce916:c.instructions+=2;goto B5ce916;
case 0x5ce917:c.instructions+=1;goto B5ce917;
case 0x5ce91a:goto L5ce91a;
case 0x5ce91d:c.instructions+=4;goto B5ce91d;
case 0x5ce920:c.instructions+=3;goto B5ce920;
case 0x5ce924:c.instructions+=2;goto B5ce924;
case 0x5ce926:c.instructions+=1;goto B5ce926;
case 0x5ce929:goto L5ce929;
case 0x5ce92b:goto L5ce92b;
case 0x5ce92d:c.instructions+=1;goto B5ce92d;
case 0x5ce930:goto L5ce930;
case 0x5ce932:goto L5ce932;
case 0x5ce934:c.instructions+=3;goto B5ce934;
case 0x5ce936:c.instructions+=2;goto B5ce936;
case 0x5ce937:c.instructions+=1;goto B5ce937;
case 0x5ce93a:goto L5ce93a;
case 0x5ce93d:c.instructions+=5;goto B5ce93d;
case 0x5ce940:c.instructions+=4;goto B5ce940;
case 0x5ce942:c.instructions+=3;goto B5ce942;
case 0x5ce943:c.instructions+=2;goto B5ce943;
case 0x5ce946:c.instructions+=1;goto B5ce946;
case 0x5ce94b:goto L5ce94b;
case 0x5ce94f:c.instructions+=4;goto B5ce94f;
case 0x5ce952:c.instructions+=3;goto B5ce952;
case 0x5ce953:c.instructions+=2;goto B5ce953;
case 0x5ce957:c.instructions+=1;goto B5ce957;
case 0x5ce95b:goto L5ce95b;
case 0x5ce95f:c.instructions+=1;goto B5ce95f;
case 0x5ce965:goto L5ce965;
case 0x5ce966:c.instructions+=2;goto B5ce966;
case 0x5ce967:c.instructions+=1;goto B5ce967;
case 0x5ce968:goto L5ce968;
case 0x5ce969:c.instructions+=2;goto B5ce969;
case 0x5ce96c:c.instructions+=1;goto B5ce96c;
case 0x5ce970:goto L5ce970;
case 0x5ce971:c.instructions+=4;goto B5ce971;
case 0x5ce977:c.instructions+=3;goto B5ce977;
case 0x5ce97d:c.instructions+=2;goto B5ce97d;
case 0x5ce97e:c.instructions+=1;goto B5ce97e;
case 0x5ce980:goto L5ce980;
case 0x5ce982:goto L5ce982;
case 0x5ce984:c.instructions+=6;goto B5ce984;
case 0x5ce987:c.instructions+=5;goto B5ce987;
case 0x5ce989:c.instructions+=4;goto B5ce989;
case 0x5ce98c:c.instructions+=3;goto B5ce98c;
case 0x5ce98f:c.instructions+=2;goto B5ce98f;
case 0x5ce991:c.instructions+=1;goto B5ce991;
case 0x5ce993:goto L5ce993;
case 0x5ce995:c.instructions+=2;goto B5ce995;
case 0x5ce996:c.instructions+=1;goto B5ce996;
case 0x5ce999:goto L5ce999;
case 0x5ce99b:c.instructions+=1;goto B5ce99b;
case 0x5ce99d:goto L5ce99d;
case 0x5ce9a0:goto L5ce9a0;
case 0x5ce9a3:c.instructions+=3;goto B5ce9a3;
case 0x5ce9a5:c.instructions+=2;goto B5ce9a5;
case 0x5ce9a6:c.instructions+=1;goto B5ce9a6;
case 0x5ce9a9:goto L5ce9a9;
case 0x5ce9ab:c.instructions+=1;goto B5ce9ab;
case 0x5ce9ad:goto L5ce9ad;
case 0x5ce9b0:goto L5ce9b0;
case 0x5ce9b3:c.instructions+=2;goto B5ce9b3;
case 0x5ce9b5:c.instructions+=1;goto B5ce9b5;
case 0x5ce9b7:goto L5ce9b7;
case 0x5ce9b9:c.instructions+=2;goto B5ce9b9;
case 0x5ce9ba:c.instructions+=1;goto B5ce9ba;
case 0x5ce9bd:goto L5ce9bd;
case 0x5ce9bf:c.instructions+=1;goto B5ce9bf;
case 0x5ce9c1:goto L5ce9c1;
case 0x5ce9c4:c.instructions+=3;goto B5ce9c4;
case 0x5ce9c6:c.instructions+=2;goto B5ce9c6;
case 0x5ce9c7:c.instructions+=1;goto B5ce9c7;
case 0x5ce9ca:goto L5ce9ca;
case 0x5ce9cc:c.instructions+=1;goto B5ce9cc;
case 0x5ce9ce:goto L5ce9ce;
case 0x5ce9d1:goto L5ce9d1;
case 0x5ce9d7:c.instructions+=2;goto B5ce9d7;
case 0x5ce9dd:c.instructions+=1;goto B5ce9dd;
case 0x5ce9df:goto L5ce9df;
case 0x5ce9e5:c.instructions+=2;goto B5ce9e5;
case 0x5ce9ea:c.instructions+=1;goto B5ce9ea;
case 0x5ce9ef:goto L5ce9ef;
case 0x5ce9f1:c.instructions+=2;goto B5ce9f1;
case 0x5ce9f3:c.instructions+=1;goto B5ce9f3;
case 0x5ce9f5:goto L5ce9f5;
case 0x5ce9f8:c.instructions+=3;goto B5ce9f8;
case 0x5ce9fa:c.instructions+=2;goto B5ce9fa;
case 0x5ce9fb:c.instructions+=1;goto B5ce9fb;
case 0x5ce9fe:goto L5ce9fe;
case 0x5cea00:c.instructions+=7;goto B5cea00;
case 0x5cea02:c.instructions+=6;goto B5cea02;
case 0x5cea05:c.instructions+=5;goto B5cea05;
case 0x5cea07:c.instructions+=4;goto B5cea07;
case 0x5cea09:c.instructions+=3;goto B5cea09;
case 0x5cea0a:c.instructions+=2;goto B5cea0a;
case 0x5cea0d:c.instructions+=1;goto B5cea0d;
case 0x5cea12:goto L5cea12;
case 0x5cea15:c.instructions+=2;goto B5cea15;
case 0x5cea17:c.instructions+=1;goto B5cea17;
case 0x5cea19:goto L5cea19;
case 0x5cea1a:c.instructions+=2;goto B5cea1a;
case 0x5cea1b:c.instructions+=1;goto B5cea1b;
case 0x5cea20:goto L5cea20;
case 0x5cea23:c.instructions+=1;goto B5cea23;
case 0x5cea30:goto L5cea30;
case 0x5cea31:c.instructions+=10;goto B5cea31;
case 0x5cea32:c.instructions+=9;goto B5cea32;
case 0x5cea33:c.instructions+=8;goto B5cea33;
case 0x5cea37:c.instructions+=7;goto B5cea37;
case 0x5cea39:c.instructions+=6;goto B5cea39;
case 0x5cea3c:c.instructions+=5;goto B5cea3c;
case 0x5cea3e:c.instructions+=4;goto B5cea3e;
case 0x5cea40:c.instructions+=3;goto B5cea40;
case 0x5cea41:c.instructions+=2;goto B5cea41;
case 0x5cea45:c.instructions+=1;goto B5cea45;
case 0x5cea47:goto L5cea47;
case 0x5cea4a:c.instructions+=1;goto B5cea4a;
case 0x5cea4c:goto L5cea4c;
case 0x5cea51:c.instructions+=2;goto B5cea51;
case 0x5cea52:c.instructions+=1;goto B5cea52;
case 0x5cea57:goto L5cea57;
case 0x5cea5a:c.instructions+=2;goto B5cea5a;
case 0x5cea5c:c.instructions+=1;goto B5cea5c;
case 0x5cea5e:goto L5cea5e;
case 0x5cea61:c.instructions+=6;goto B5cea61;
case 0x5cea63:c.instructions+=5;goto B5cea63;
case 0x5cea66:c.instructions+=4;goto B5cea66;
case 0x5cea69:c.instructions+=3;goto B5cea69;
case 0x5cea6c:c.instructions+=2;goto B5cea6c;
case 0x5cea6f:c.instructions+=1;goto B5cea6f;
case 0x5cea71:goto L5cea71;
case 0x5cea73:goto L5cea73;
case 0x5cea76:c.instructions+=5;goto B5cea76;
case 0x5cea79:c.instructions+=4;goto B5cea79;
case 0x5cea7c:c.instructions+=3;goto B5cea7c;
case 0x5cea7e:c.instructions+=2;goto B5cea7e;
case 0x5cea82:c.instructions+=1;goto B5cea82;
case 0x5cea84:goto L5cea84;
case 0x5cea87:c.instructions+=3;goto B5cea87;
case 0x5cea89:c.instructions+=2;goto B5cea89;
case 0x5cea90:c.instructions+=1;goto B5cea90;
case 0x5cea92:goto L5cea92;
case 0x5cea95:c.instructions+=2;goto B5cea95;
case 0x5cea97:c.instructions+=1;goto B5cea97;
case 0x5cea9e:goto L5cea9e;
case 0x5ceaa1:c.instructions+=5;goto B5ceaa1;
case 0x5ceaa3:c.instructions+=4;goto B5ceaa3;
case 0x5ceaa6:c.instructions+=3;goto B5ceaa6;
case 0x5ceaa9:c.instructions+=2;goto B5ceaa9;
case 0x5ceaab:c.instructions+=1;goto B5ceaab;
case 0x5ceab1:goto L5ceab1;
case 0x5ceab7:c.instructions+=3;goto B5ceab7;
case 0x5ceaba:c.instructions+=2;goto B5ceaba;
case 0x5ceabb:c.instructions+=1;goto B5ceabb;
case 0x5ceac0:goto L5ceac0;
case 0x5ceac4:c.instructions+=3;goto B5ceac4;
case 0x5ceac7:c.instructions+=2;goto B5ceac7;
case 0x5ceac9:c.instructions+=1;goto B5ceac9;
case 0x5ceacb:goto L5ceacb;
case 0x5ceacf:c.instructions+=13;goto B5ceacf;
case 0x5cead3:c.instructions+=12;goto B5cead3;
case 0x5cead6:c.instructions+=11;goto B5cead6;
case 0x5ceada:c.instructions+=10;goto B5ceada;
case 0x5ceadd:c.instructions+=9;goto B5ceadd;
case 0x5ceae1:c.instructions+=8;goto B5ceae1;
case 0x5ceae4:c.instructions+=7;goto B5ceae4;
case 0x5ceaeb:c.instructions+=6;goto B5ceaeb;
case 0x5ceaee:c.instructions+=5;goto B5ceaee;
case 0x5ceaf1:c.instructions+=4;goto B5ceaf1;
case 0x5ceaf4:c.instructions+=3;goto B5ceaf4;
case 0x5ceaf7:c.instructions+=2;goto B5ceaf7;
case 0x5ceafa:c.instructions+=1;goto B5ceafa;
case 0x5ceafc:goto L5ceafc;
case 0x5ceafe:goto L5ceafe;
case 0x5ceb01:c.instructions+=18;goto B5ceb01;
case 0x5ceb03:c.instructions+=17;goto B5ceb03;
case 0x5ceb06:c.instructions+=16;goto B5ceb06;
case 0x5ceb09:c.instructions+=15;goto B5ceb09;
case 0x5ceb0b:c.instructions+=14;goto B5ceb0b;
case 0x5ceb0e:c.instructions+=13;goto B5ceb0e;
case 0x5ceb11:c.instructions+=12;goto B5ceb11;
case 0x5ceb14:c.instructions+=11;goto B5ceb14;
case 0x5ceb17:c.instructions+=10;goto B5ceb17;
case 0x5ceb18:c.instructions+=9;goto B5ceb18;
case 0x5ceb1b:c.instructions+=8;goto B5ceb1b;
case 0x5ceb1e:c.instructions+=7;goto B5ceb1e;
case 0x5ceb1f:c.instructions+=6;goto B5ceb1f;
case 0x5ceb21:c.instructions+=5;goto B5ceb21;
case 0x5ceb24:c.instructions+=4;goto B5ceb24;
case 0x5ceb25:c.instructions+=3;goto B5ceb25;
case 0x5ceb26:c.instructions+=2;goto B5ceb26;
case 0x5ceb27:c.instructions+=1;goto B5ceb27;
case 0x5ceb30:goto L5ceb30;
case 0x5ceb31:c.instructions+=8;goto B5ceb31;
case 0x5ceb32:c.instructions+=7;goto B5ceb32;
case 0x5ceb36:c.instructions+=6;goto B5ceb36;
case 0x5ceb38:c.instructions+=5;goto B5ceb38;
case 0x5ceb3b:c.instructions+=4;goto B5ceb3b;
case 0x5ceb3d:c.instructions+=3;goto B5ceb3d;
case 0x5ceb3e:c.instructions+=2;goto B5ceb3e;
case 0x5ceb42:c.instructions+=1;goto B5ceb42;
case 0x5ceb44:goto L5ceb44;
case 0x5ceb47:c.instructions+=1;goto B5ceb47;
case 0x5ceb49:goto L5ceb49;
case 0x5ceb4e:c.instructions+=2;goto B5ceb4e;
case 0x5ceb4f:c.instructions+=1;goto B5ceb4f;
case 0x5ceb54:goto L5ceb54;
case 0x5ceb57:c.instructions+=2;goto B5ceb57;
case 0x5ceb59:c.instructions+=1;goto B5ceb59;
case 0x5ceb5b:goto L5ceb5b;
case 0x5ceb5e:c.instructions+=6;goto B5ceb5e;
case 0x5ceb60:c.instructions+=5;goto B5ceb60;
case 0x5ceb63:c.instructions+=4;goto B5ceb63;
case 0x5ceb66:c.instructions+=3;goto B5ceb66;
case 0x5ceb6d:c.instructions+=2;goto B5ceb6d;
case 0x5ceb74:c.instructions+=1;goto B5ceb74;
case 0x5ceb76:goto L5ceb76;
case 0x5ceb78:goto L5ceb78;
case 0x5ceb7b:c.instructions+=5;goto B5ceb7b;
case 0x5ceb7e:c.instructions+=4;goto B5ceb7e;
case 0x5ceb81:c.instructions+=3;goto B5ceb81;
case 0x5ceb83:c.instructions+=2;goto B5ceb83;
case 0x5ceb87:c.instructions+=1;goto B5ceb87;
case 0x5ceb89:goto L5ceb89;
case 0x5ceb8c:c.instructions+=3;goto B5ceb8c;
case 0x5ceb8e:c.instructions+=2;goto B5ceb8e;
case 0x5ceb95:c.instructions+=1;goto B5ceb95;
case 0x5ceb97:goto L5ceb97;
case 0x5ceb9a:c.instructions+=2;goto B5ceb9a;
case 0x5ceb9c:c.instructions+=1;goto B5ceb9c;
case 0x5ceba3:goto L5ceba3;
case 0x5ceba6:c.instructions+=5;goto B5ceba6;
case 0x5ceba8:c.instructions+=4;goto B5ceba8;
case 0x5cebab:c.instructions+=3;goto B5cebab;
case 0x5cebae:c.instructions+=2;goto B5cebae;
case 0x5cebb0:c.instructions+=1;goto B5cebb0;
case 0x5cebb6:goto L5cebb6;
case 0x5cebbc:c.instructions+=3;goto B5cebbc;
case 0x5cebbf:c.instructions+=2;goto B5cebbf;
case 0x5cebc0:c.instructions+=1;goto B5cebc0;
case 0x5cebc5:goto L5cebc5;
case 0x5cebc9:c.instructions+=3;goto B5cebc9;
case 0x5cebcc:c.instructions+=2;goto B5cebcc;
case 0x5cebce:c.instructions+=1;goto B5cebce;
case 0x5cebd0:goto L5cebd0;
case 0x5cebd4:c.instructions+=15;goto B5cebd4;
case 0x5cebd8:c.instructions+=14;goto B5cebd8;
case 0x5cebdb:c.instructions+=13;goto B5cebdb;
case 0x5cebdf:c.instructions+=12;goto B5cebdf;
case 0x5cebe2:c.instructions+=11;goto B5cebe2;
case 0x5cebe6:c.instructions+=10;goto B5cebe6;
case 0x5cebe9:c.instructions+=9;goto B5cebe9;
case 0x5cebed:c.instructions+=8;goto B5cebed;
case 0x5cebf0:c.instructions+=7;goto B5cebf0;
case 0x5cebf4:c.instructions+=6;goto B5cebf4;
case 0x5cebf7:c.instructions+=5;goto B5cebf7;
case 0x5cebfe:c.instructions+=4;goto B5cebfe;
case 0x5cec01:c.instructions+=3;goto B5cec01;
case 0x5cec04:c.instructions+=2;goto B5cec04;
case 0x5cec07:c.instructions+=1;goto B5cec07;
case 0x5cec09:goto L5cec09;
case 0x5cec0b:goto L5cec0b;
case 0x5cec0e:c.instructions+=17;goto B5cec0e;
case 0x5cec10:c.instructions+=16;goto B5cec10;
case 0x5cec13:c.instructions+=15;goto B5cec13;
case 0x5cec16:c.instructions+=14;goto B5cec16;
case 0x5cec18:c.instructions+=13;goto B5cec18;
case 0x5cec1b:c.instructions+=12;goto B5cec1b;
case 0x5cec1e:c.instructions+=11;goto B5cec1e;
case 0x5cec21:c.instructions+=10;goto B5cec21;
case 0x5cec24:c.instructions+=9;goto B5cec24;
case 0x5cec25:c.instructions+=8;goto B5cec25;
case 0x5cec28:c.instructions+=7;goto B5cec28;
case 0x5cec2b:c.instructions+=6;goto B5cec2b;
case 0x5cec2d:c.instructions+=5;goto B5cec2d;
case 0x5cec2e:c.instructions+=4;goto B5cec2e;
case 0x5cec31:c.instructions+=3;goto B5cec31;
case 0x5cec32:c.instructions+=2;goto B5cec32;
case 0x5cec33:c.instructions+=1;goto B5cec33;
case 0x5cec40:goto L5cec40;
case 0x5cec45:c.instructions+=13;goto B5cec45;
case 0x5cec4b:c.instructions+=12;goto B5cec4b;
case 0x5cec4d:c.instructions+=11;goto B5cec4d;
case 0x5cec4f:c.instructions+=10;goto B5cec4f;
case 0x5cec51:c.instructions+=9;goto B5cec51;
case 0x5cec57:c.instructions+=8;goto B5cec57;
case 0x5cec5c:c.instructions+=7;goto B5cec5c;
case 0x5cec62:c.instructions+=6;goto B5cec62;
case 0x5cec67:c.instructions+=5;goto B5cec67;
case 0x5cec68:c.instructions+=4;goto B5cec68;
case 0x5cec69:c.instructions+=3;goto B5cec69;
case 0x5cec6b:c.instructions+=2;goto B5cec6b;
case 0x5cec6c:c.instructions+=1;goto B5cec6c;
case 0x5cec71:goto L5cec71;
case 0x5cec74:c.instructions+=2;goto B5cec74;
case 0x5cec76:c.instructions+=1;goto B5cec76;
case 0x5cec80:goto L5cec80;
case 0x5cec85:goto L5cec85;
case 0x5cec90:goto L5cec90;
case 0x5cec95:c.instructions+=4;goto B5cec95;
case 0x5cec96:c.instructions+=3;goto B5cec96;
case 0x5cec98:c.instructions+=2;goto B5cec98;
case 0x5cec9a:c.instructions+=1;goto B5cec9a;
case 0x5cec9c:goto L5cec9c;
case 0x5ceca1:c.instructions+=1;goto B5ceca1;
case 0x5ceca6:goto L5ceca6;
case 0x5ceca9:c.instructions+=1;goto B5ceca9;
case 0x5cecae:goto L5cecae;
case 0x5cecb3:c.instructions+=1;goto B5cecb3;
case 0x5cecb5:goto L5cecb5;
case 0x5cecbb:goto L5cecbb;
case 0x5cecc0:c.instructions+=2;goto B5cecc0;
case 0x5cecc5:c.instructions+=1;goto B5cecc5;
case 0x5cecc7:goto L5cecc7;
case 0x5ceccc:c.instructions+=2;goto B5ceccc;
case 0x5cecd1:c.instructions+=1;goto B5cecd1;
case 0x5cecd3:goto L5cecd3;
case 0x5cecd8:c.instructions+=1;goto B5cecd8;
case 0x5cecda:goto L5cecda;
case 0x5cece0:c.instructions+=4;goto B5cece0;
case 0x5cece6:c.instructions+=3;goto B5cece6;
case 0x5cece8:c.instructions+=2;goto B5cece8;
case 0x5ceceb:c.instructions+=1;goto B5ceceb;
case 0x5ceced:goto L5ceced;
case 0x5cecf7:c.instructions+=1;goto B5cecf7;
case 0x5cecf9:goto L5cecf9;
case 0x5cecfe:c.instructions+=1;goto B5cecfe;
case 0x5ced00:goto L5ced00;
case 0x5ced0a:c.instructions+=1;goto B5ced0a;
case 0x5ced0c:goto L5ced0c;
case 0x5ced12:goto L5ced12;
case 0x5ced17:goto L5ced17;
case 0x5ced1c:c.instructions+=1;goto B5ced1c;
case 0x5ced1e:goto L5ced1e;
case 0x5ced23:goto L5ced23;
case 0x5ced25:c.instructions+=1;goto B5ced25;
case 0x5ced27:goto L5ced27;
case 0x5ced2e:goto L5ced2e;
case 0x5ced34:c.instructions+=1;goto B5ced34;
case 0x5ced39:goto L5ced39;
case 0x5ced43:c.instructions+=1;goto B5ced43;
case 0x5ced45:goto L5ced45;
case 0x5ced4a:goto L5ced4a;
case 0x5ced4c:c.instructions+=1;goto B5ced4c;
case 0x5ced4e:goto L5ced4e;
case 0x5ced54:goto L5ced54;
case 0x5ced55:c.instructions+=1;goto B5ced55;
case 0x5ced60:goto L5ced60;
case 0x5ced65:c.instructions+=3;goto B5ced65;
case 0x5ced67:c.instructions+=2;goto B5ced67;
case 0x5ced68:c.instructions+=1;goto B5ced68;
case 0x5ced6a:goto L5ced6a;
case 0x5ced6f:c.instructions+=4;goto B5ced6f;
case 0x5ced71:c.instructions+=3;goto B5ced71;
case 0x5ced76:c.instructions+=2;goto B5ced76;
case 0x5ced77:c.instructions+=1;goto B5ced77;
case 0x5ced7a:goto L5ced7a;
case 0x5ced7f:goto L5ced7f;
case 0x5ced84:c.instructions+=2;goto B5ced84;
case 0x5ced86:c.instructions+=1;goto B5ced86;
case 0x5ced88:goto L5ced88;
case 0x5ced8d:c.instructions+=2;goto B5ced8d;
case 0x5ced8f:c.instructions+=1;goto B5ced8f;
case 0x5ced91:goto L5ced91;
case 0x5ced96:goto L5ced96;
case 0x5ced9b:c.instructions+=2;goto B5ced9b;
case 0x5ced9d:c.instructions+=1;goto B5ced9d;
case 0x5ced9f:goto L5ced9f;
case 0x5ceda4:goto L5ceda4;
case 0x5ceda9:c.instructions+=2;goto B5ceda9;
case 0x5cedac:c.instructions+=1;goto B5cedac;
case 0x5cedae:goto L5cedae;
case 0x5cedb0:c.instructions+=2;goto B5cedb0;
case 0x5cedb2:c.instructions+=1;goto B5cedb2;
case 0x5cedb4:goto L5cedb4;
case 0x5cedb9:c.instructions+=5;goto B5cedb9;
case 0x5cedbb:c.instructions+=4;goto B5cedbb;
case 0x5cedbd:c.instructions+=3;goto B5cedbd;
case 0x5cedbe:c.instructions+=2;goto B5cedbe;
case 0x5cedbf:c.instructions+=1;goto B5cedbf;
case 0x5cedc5:goto L5cedc5;
case 0x5cedca:c.instructions+=3;goto B5cedca;
case 0x5cedcb:c.instructions+=2;goto B5cedcb;
case 0x5cedcd:c.instructions+=1;goto B5cedcd;
case 0x5cedcf:goto L5cedcf;
case 0x5cedd9:c.instructions+=2;goto B5cedd9;
case 0x5cedda:c.instructions+=1;goto B5cedda;
case 0x5cede0:goto L5cede0;
case 0x5cede6:c.instructions+=11;goto B5cede6;
case 0x5cede7:c.instructions+=10;goto B5cede7;
case 0x5cede8:c.instructions+=9;goto B5cede8;
case 0x5cede9:c.instructions+=8;goto B5cede9;
case 0x5cedea:c.instructions+=7;goto B5cedea;
case 0x5cedf1:c.instructions+=6;goto B5cedf1;
case 0x5cedf7:c.instructions+=5;goto B5cedf7;
case 0x5cedfc:c.instructions+=4;goto B5cedfc;
case 0x5cedfe:c.instructions+=3;goto B5cedfe;
case 0x5cee00:c.instructions+=2;goto B5cee00;
case 0x5cee06:c.instructions+=1;goto B5cee06;
case 0x5cee08:goto L5cee08;
case 0x5cee0f:c.instructions+=2;goto B5cee0f;
case 0x5cee11:c.instructions+=1;goto B5cee11;
case 0x5cee16:goto L5cee16;
case 0x5cee19:c.instructions+=2;goto B5cee19;
case 0x5cee1b:c.instructions+=1;goto B5cee1b;
case 0x5cee20:goto L5cee20;
case 0x5cee23:c.instructions+=2;goto B5cee23;
case 0x5cee27:c.instructions+=1;goto B5cee27;
case 0x5cee2c:goto L5cee2c;
case 0x5cee2e:c.instructions+=2;goto B5cee2e;
case 0x5cee36:c.instructions+=1;goto B5cee36;
case 0x5cee3b:goto L5cee3b;
case 0x5cee3f:c.instructions+=11;goto B5cee3f;
case 0x5cee43:c.instructions+=10;goto B5cee43;
case 0x5cee47:c.instructions+=9;goto B5cee47;
case 0x5cee4b:c.instructions+=8;goto B5cee4b;
case 0x5cee50:c.instructions+=7;goto B5cee50;
case 0x5cee56:c.instructions+=6;goto B5cee56;
case 0x5cee57:c.instructions+=5;goto B5cee57;
case 0x5cee5b:c.instructions+=4;goto B5cee5b;
case 0x5cee5f:c.instructions+=3;goto B5cee5f;
case 0x5cee63:c.instructions+=2;goto B5cee63;
case 0x5cee6e:c.instructions+=1;goto B5cee6e;
case 0x5cee73:goto L5cee73;
case 0x5cee76:c.instructions+=2;goto B5cee76;
case 0x5cee7b:c.instructions+=1;goto B5cee7b;
case 0x5cee80:goto L5cee80;
case 0x5cee86:c.instructions+=3;goto B5cee86;
case 0x5cee89:c.instructions+=2;goto B5cee89;
case 0x5cee8b:c.instructions+=1;goto B5cee8b;
case 0x5cee8d:goto L5cee8d;
case 0x5cee91:c.instructions+=1;goto B5cee91;
case 0x5cee93:goto L5cee93;
case 0x5cee95:c.instructions+=1;goto B5cee95;
case 0x5cee99:goto L5cee99;
case 0x5cee9b:c.instructions+=1;goto B5cee9b;
case 0x5ceea0:goto L5ceea0;
case 0x5ceea3:c.instructions+=2;goto B5ceea3;
case 0x5ceea5:c.instructions+=1;goto B5ceea5;
case 0x5ceeaa:goto L5ceeaa;
case 0x5ceead:c.instructions+=13;goto B5ceead;
case 0x5ceeb1:c.instructions+=12;goto B5ceeb1;
case 0x5ceeb2:c.instructions+=11;goto B5ceeb2;
case 0x5ceeb3:c.instructions+=10;goto B5ceeb3;
case 0x5ceeb4:c.instructions+=9;goto B5ceeb4;
case 0x5ceeb5:c.instructions+=8;goto B5ceeb5;
case 0x5ceeb6:c.instructions+=7;goto B5ceeb6;
case 0x5ceeb8:c.instructions+=6;goto B5ceeb8;
case 0x5ceeb9:c.instructions+=5;goto B5ceeb9;
case 0x5ceeba:c.instructions+=4;goto B5ceeba;
case 0x5ceebb:c.instructions+=3;goto B5ceebb;
case 0x5ceec0:c.instructions+=2;goto B5ceec0;
case 0x5ceec2:c.instructions+=1;goto B5ceec2;
case 0x5ceec7:goto L5ceec7;
case 0x5ceec9:c.instructions+=5;goto B5ceec9;
case 0x5ceed0:c.instructions+=4;goto B5ceed0;
case 0x5ceed3:c.instructions+=3;goto B5ceed3;
case 0x5ceed6:c.instructions+=2;goto B5ceed6;
case 0x5ceed9:c.instructions+=1;goto B5ceed9;
case 0x5ceede:goto L5ceede;
case 0x5ceee3:goto L5ceee3;
case 0x5ceee5:c.instructions+=1;goto B5ceee5;
case 0x5ceeea:goto L5ceeea;
case 0x5ceeeb:c.instructions+=5;goto B5ceeeb;
case 0x5ceeec:c.instructions+=4;goto B5ceeec;
case 0x5ceeed:c.instructions+=3;goto B5ceeed;
case 0x5ceeee:c.instructions+=2;goto B5ceeee;
case 0x5ceef4:c.instructions+=1;goto B5ceef4;
case 0x5cef00:goto L5cef00;
case 0x5cef03:c.instructions+=6;goto B5cef03;
case 0x5cef04:c.instructions+=5;goto B5cef04;
case 0x5cef08:c.instructions+=4;goto B5cef08;
case 0x5cef0a:c.instructions+=3;goto B5cef0a;
case 0x5cef0b:c.instructions+=2;goto B5cef0b;
case 0x5cef0c:c.instructions+=1;goto B5cef0c;
case 0x5cef12:goto L5cef12;
case 0x5cef14:c.instructions+=29;goto B5cef14;
case 0x5cef16:c.instructions+=28;goto B5cef16;
case 0x5cef18:c.instructions+=27;goto B5cef18;
case 0x5cef1c:c.instructions+=26;goto B5cef1c;
case 0x5cef20:c.instructions+=25;goto B5cef20;
case 0x5cef22:c.instructions+=24;goto B5cef22;
case 0x5cef26:c.instructions+=23;goto B5cef26;
case 0x5cef2a:c.instructions+=22;goto B5cef2a;
case 0x5cef2e:c.instructions+=21;goto B5cef2e;
case 0x5cef33:c.instructions+=20;goto B5cef33;
case 0x5cef38:c.instructions+=19;goto B5cef38;
case 0x5cef3c:c.instructions+=18;goto B5cef3c;
case 0x5cef40:c.instructions+=17;goto B5cef40;
case 0x5cef45:c.instructions+=16;goto B5cef45;
case 0x5cef4a:c.instructions+=15;goto B5cef4a;
case 0x5cef4e:c.instructions+=14;goto B5cef4e;
case 0x5cef52:c.instructions+=13;goto B5cef52;
case 0x5cef56:c.instructions+=12;goto B5cef56;
case 0x5cef5a:c.instructions+=11;goto B5cef5a;
case 0x5cef5e:c.instructions+=10;goto B5cef5e;
case 0x5cef62:c.instructions+=9;goto B5cef62;
case 0x5cef66:c.instructions+=8;goto B5cef66;
case 0x5cef69:c.instructions+=7;goto B5cef69;
case 0x5cef6d:c.instructions+=6;goto B5cef6d;
case 0x5cef72:c.instructions+=5;goto B5cef72;
case 0x5cef76:c.instructions+=4;goto B5cef76;
case 0x5cef78:c.instructions+=3;goto B5cef78;
case 0x5cef7a:c.instructions+=2;goto B5cef7a;
case 0x5cef82:c.instructions+=1;goto B5cef82;
case 0x5cef87:goto L5cef87;
case 0x5cef89:goto L5cef89;
case 0x5cef91:c.instructions+=2;goto B5cef91;
case 0x5cef96:c.instructions+=1;goto B5cef96;
case 0x5cef98:goto L5cef98;
case 0x5cef9a:c.instructions+=3;goto B5cef9a;
case 0x5cef9f:c.instructions+=2;goto B5cef9f;
case 0x5cefa3:c.instructions+=1;goto B5cefa3;
case 0x5cefa5:goto L5cefa5;
case 0x5cefa7:goto L5cefa7;
case 0x5cefa9:goto L5cefa9;
case 0x5cefaf:c.instructions+=4;goto B5cefaf;
case 0x5cefb4:c.instructions+=3;goto B5cefb4;
case 0x5cefb6:c.instructions+=2;goto B5cefb6;
case 0x5cefbb:c.instructions+=1;goto B5cefbb;
case 0x5cefbd:goto L5cefbd;
case 0x5cefbf:goto L5cefbf;
case 0x5cefc1:goto L5cefc1;
case 0x5cefc3:c.instructions+=3;goto B5cefc3;
case 0x5cefc8:c.instructions+=2;goto B5cefc8;
case 0x5cefcd:c.instructions+=1;goto B5cefcd;
case 0x5cefcf:goto L5cefcf;
case 0x5cefd1:goto L5cefd1;
case 0x5cefd3:goto L5cefd3;
case 0x5cefd4:c.instructions+=5;goto B5cefd4;
case 0x5cefd5:c.instructions+=4;goto B5cefd5;
case 0x5cefda:c.instructions+=3;goto B5cefda;
case 0x5cefdb:c.instructions+=2;goto B5cefdb;
case 0x5cefde:c.instructions+=1;goto B5cefde;
case 0x5cefe1:goto L5cefe1;
case 0x5cefe2:c.instructions+=2;goto B5cefe2;
case 0x5cefe6:c.instructions+=1;goto B5cefe6;
case 0x5cefeb:goto L5cefeb;
case 0x5cefec:c.instructions+=4;goto B5cefec;
case 0x5cefed:c.instructions+=3;goto B5cefed;
case 0x5cefee:c.instructions+=2;goto B5cefee;
case 0x5ceff1:c.instructions+=1;goto B5ceff1;
case 0x5ceff4:goto L5ceff4;
case 0x5ceff5:c.instructions+=5;goto B5ceff5;
case 0x5ceff6:c.instructions+=4;goto B5ceff6;
case 0x5ceff8:c.instructions+=3;goto B5ceff8;
case 0x5ceff9:c.instructions+=2;goto B5ceff9;
case 0x5ceffc:c.instructions+=1;goto B5ceffc;
default:missing_instruction(c.pc);}
B5ce002:L5ce002:{c.instructions+=2;NFSU2_TR(0x5ce002);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce003:{NFSU2_TR(0x5ce003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce008ull));
TAIL_STATIC(0x575630u,575);
}
B5ce008:L5ce008:{c.instructions+=10;NFSU2_TR(0x5ce008);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ce00b:{NFSU2_TR(0x5ce00b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce00e:{NFSU2_TR(0x5ce00e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce011:{NFSU2_TR(0x5ce011);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ce014:{NFSU2_TR(0x5ce014);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ce017:{NFSU2_TR(0x5ce017);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B5ce01a:{NFSU2_TR(0x5ce01a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ce01c:{NFSU2_TR(0x5ce01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce01f:{NFSU2_TR(0x5ce01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce022:{NFSU2_TR(0x5ce022);
if(r1(R+512)){{goto L5ce026;}}
}
B5ce024:L5ce024:{c.instructions+=1;NFSU2_TR(0x5ce024);
__builtin_memmove((R+0),(R+8),4);
}
B5ce026:L5ce026:{c.instructions+=9;NFSU2_TR(0x5ce026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ce027:{NFSU2_TR(0x5ce027);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B5ce02b:{NFSU2_TR(0x5ce02b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce02e:{NFSU2_TR(0x5ce02e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce02f:{NFSU2_TR(0x5ce02f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce036:{NFSU2_TR(0x5ce036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ce037:{NFSU2_TR(0x5ce037);
__builtin_memmove((R+16),(R+20),4);
}
B5ce039:{NFSU2_TR(0x5ce039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ce03a:{NFSU2_TR(0x5ce03a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce03d:L5ce03d:{c.instructions+=3;NFSU2_TR(0x5ce03d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ce040:{NFSU2_TR(0x5ce040);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
}
B5ce044:{NFSU2_TR(0x5ce044);
if(r1(R+512)){{goto L5ce052;}}
}
B5ce046:L5ce046:{c.instructions+=3;NFSU2_TR(0x5ce046);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce049:{NFSU2_TR(0x5ce049);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce04a:{NFSU2_TR(0x5ce04a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce04full));
TAIL_STATIC(0x575630u,575);
}
B5ce04f:L5ce04f:{c.instructions+=1;NFSU2_TR(0x5ce04f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce052:L5ce052:{c.instructions+=6;NFSU2_TR(0x5ce052);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce054:{NFSU2_TR(0x5ce054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ce05b:{NFSU2_TR(0x5ce05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ce062:{NFSU2_TR(0x5ce062);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce064:{NFSU2_TR(0x5ce064);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ce068:{NFSU2_TR(0x5ce068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce06dull));
TAIL_STATIC(0x75d8ffu,75d);
}
B5ce06d:L5ce06d:{c.instructions+=1;NFSU2_TR(0x5ce06d);
u8 U[4];
{SPILL();c.pc=0x5ce06du;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B5ce070:L5ce070:{c.instructions+=2;NFSU2_TR(0x5ce070);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce072:{NFSU2_TR(0x5ce072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce077ull));
TAIL_STATIC(0x575620u,575);
}
B5ce077:L5ce077:{c.instructions+=3;NFSU2_TR(0x5ce077);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce07a:{NFSU2_TR(0x5ce07a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ce07c:{NFSU2_TR(0x5ce07c);
if(r1(R+518)){{goto L5ce080;}}
}
B5ce07e:L5ce07e:{c.instructions+=1;NFSU2_TR(0x5ce07e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ce080:L5ce080:{c.instructions+=3;NFSU2_TR(0x5ce080);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ce083:{NFSU2_TR(0x5ce083);
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
B5ce085:{NFSU2_TR(0x5ce085);
if(r1(R+518)){{goto L5ce089;}}
}
B5ce087:L5ce087:{c.instructions+=1;NFSU2_TR(0x5ce087);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ce089:L5ce089:{c.instructions+=1;NFSU2_TR(0x5ce089);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce090:L5ce090:{c.instructions+=2;NFSU2_TR(0x5ce090);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce092:{NFSU2_TR(0x5ce092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce097ull));
TAIL_STATIC(0x575620u,575);
}
B5ce097:L5ce097:{c.instructions+=3;NFSU2_TR(0x5ce097);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce09a:{NFSU2_TR(0x5ce09a);
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
B5ce09c:{NFSU2_TR(0x5ce09c);
if(r1(R+518)){{goto L5ce0ba;}}
}
B5ce09e:L5ce09e:{c.instructions+=9;NFSU2_TR(0x5ce09e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce0a2:{NFSU2_TR(0x5ce0a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ce0a6:{NFSU2_TR(0x5ce0a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ce0a8:{NFSU2_TR(0x5ce0a8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce0ac:{NFSU2_TR(0x5ce0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce0af:{NFSU2_TR(0x5ce0af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ce0b1:{NFSU2_TR(0x5ce0b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce0b4:{NFSU2_TR(0x5ce0b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce0b7:{NFSU2_TR(0x5ce0b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce0ba:L5ce0ba:{c.instructions+=1;NFSU2_TR(0x5ce0ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce0c0:L5ce0c0:{c.instructions+=6;NFSU2_TR(0x5ce0c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ce0c4:{NFSU2_TR(0x5ce0c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce0c8:{NFSU2_TR(0x5ce0c8);
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
B5ce0ca:{NFSU2_TR(0x5ce0ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce0ce:{NFSU2_TR(0x5ce0ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce0cf:{NFSU2_TR(0x5ce0cf);
if(r1(R+518)){{goto L5ce0e0;}}
}
B5ce0d1:L5ce0d1:{c.instructions+=6;NFSU2_TR(0x5ce0d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ce0d4:{NFSU2_TR(0x5ce0d4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B5ce0d7:{NFSU2_TR(0x5ce0d7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B5ce0da:{NFSU2_TR(0x5ce0da);
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
B5ce0dc:{NFSU2_TR(0x5ce0dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ce0de:{NFSU2_TR(0x5ce0de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce0d1u);}goto L5ce0d1;}}
}
B5ce0e0:L5ce0e0:{c.instructions+=4;NFSU2_TR(0x5ce0e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce0e4:{NFSU2_TR(0x5ce0e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ce0e6:{NFSU2_TR(0x5ce0e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce0e7:{NFSU2_TR(0x5ce0e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce0f0:L5ce0f0:{c.instructions+=3;NFSU2_TR(0x5ce0f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce0f4:{NFSU2_TR(0x5ce0f4);
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
B5ce0f6:{NFSU2_TR(0x5ce0f6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5ce112;}}
}
B5ce0f8:L5ce0f8:{c.instructions+=4;NFSU2_TR(0x5ce0f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ce0fc:{NFSU2_TR(0x5ce0fc);
__builtin_memmove((R+4),(R+0),4);
}
B5ce0fe:{NFSU2_TR(0x5ce0fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce102:{NFSU2_TR(0x5ce102);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce103:L5ce103:{c.instructions+=2;NFSU2_TR(0x5ce103);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ce105:{NFSU2_TR(0x5ce105);
if(r1(R+518)){{goto L5ce10b;}}
}
B5ce107:L5ce107:{c.instructions+=2;NFSU2_TR(0x5ce107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5ce109:{NFSU2_TR(0x5ce109);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ce10b:L5ce10b:{c.instructions+=3;NFSU2_TR(0x5ce10b);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5ce10e:{NFSU2_TR(0x5ce10e);
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
B5ce10f:{NFSU2_TR(0x5ce10f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce103u);}goto L5ce103;}}
}
B5ce111:L5ce111:{c.instructions+=1;NFSU2_TR(0x5ce111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce112:L5ce112:{c.instructions+=1;NFSU2_TR(0x5ce112);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce120:L5ce120:{c.instructions+=3;NFSU2_TR(0x5ce120);
__builtin_memmove((R+0),gp(0x87074c),4);
}
B5ce125:{NFSU2_TR(0x5ce125);
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
B5ce127:{NFSU2_TR(0x5ce127);
if(r1(R+518)){{goto L5ce163;}}
}
B5ce129:L5ce129:{c.instructions+=4;NFSU2_TR(0x5ce129);
__builtin_memmove((R+0),gp(0x86b7c4),1);
}
B5ce12e:{NFSU2_TR(0x5ce12e);
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
B5ce130:{NFSU2_TR(0x5ce130);
s1(0x872b98,u8(0x0ull));
}
B5ce137:{NFSU2_TR(0x5ce137);
if(r1(R+518)){{goto L5ce14f;}}
}
B5ce139:L5ce139:{c.instructions+=3;NFSU2_TR(0x5ce139);
__builtin_memmove((R+0),gp(0x86b7a4),4);
}
B5ce13e:{NFSU2_TR(0x5ce13e);
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
B5ce140:{NFSU2_TR(0x5ce140);
if(r1(R+518)){{goto L5ce14f;}}
}
B5ce142:L5ce142:{c.instructions+=3;NFSU2_TR(0x5ce142);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce144:{NFSU2_TR(0x5ce144);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce145:{NFSU2_TR(0x5ce145);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce148ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce148:L5ce148:{c.instructions+=1;NFSU2_TR(0x5ce148);
s1(0x86b7c4,u8(0x0ull));
}
B5ce14f:L5ce14f:{c.instructions+=2;NFSU2_TR(0x5ce14f);
w4(R+4,u32(0x86b7a4ull));
}
B5ce154:{NFSU2_TR(0x5ce154);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce159ull));
TAIL_STATIC(0x5c57e0u,5c5);
}
B5ce159:L5ce159:{c.instructions+=1;NFSU2_TR(0x5ce159);
s4(0x87074c,u32(0x0ull));
}
B5ce163:L5ce163:{c.instructions+=2;NFSU2_TR(0x5ce163);
w4(R+0,u32(0x1ull));
}
B5ce168:{NFSU2_TR(0x5ce168);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce170:L5ce170:{c.instructions+=14;NFSU2_TR(0x5ce170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5ce173:{NFSU2_TR(0x5ce173);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce174:{NFSU2_TR(0x5ce174);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce175:{NFSU2_TR(0x5ce175);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce176:{NFSU2_TR(0x5ce176);
__builtin_memmove((R+24),(R+4),4);
}
B5ce178:{NFSU2_TR(0x5ce178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5ce17a:{NFSU2_TR(0x5ce17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce17d:{NFSU2_TR(0x5ce17d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ce180:{NFSU2_TR(0x5ce180);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce181:{NFSU2_TR(0x5ce181);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ce183:{NFSU2_TR(0x5ce183);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce185:{NFSU2_TR(0x5ce185);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce189:{NFSU2_TR(0x5ce189);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce18d:{NFSU2_TR(0x5ce18d);
if(r1(R+518)){{goto L5ce1ae;}}
}
B5ce18f:L5ce18f:{c.instructions+=3;NFSU2_TR(0x5ce18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce192:{NFSU2_TR(0x5ce192);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce194:{NFSU2_TR(0x5ce194);
if(r1(R+518)){{goto L5ce1ae;}}
}
B5ce196:L5ce196:{c.instructions+=3;NFSU2_TR(0x5ce196);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce197:{NFSU2_TR(0x5ce197);
w4(R+4,u32(0x8763b0ull));
}
B5ce19c:{NFSU2_TR(0x5ce19c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce1a1ull));
TAIL_STATIC(0x479130u,479);
}
B5ce1a1:L5ce1a1:{c.instructions+=5;NFSU2_TR(0x5ce1a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce1a3:{NFSU2_TR(0x5ce1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce1a6:{NFSU2_TR(0x5ce1a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce1a9:{NFSU2_TR(0x5ce1a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ce1ab:{NFSU2_TR(0x5ce1ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce1ae:L5ce1ae:{c.instructions+=3;NFSU2_TR(0x5ce1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce1b1:{NFSU2_TR(0x5ce1b1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce1b3:{NFSU2_TR(0x5ce1b3);
if(r1(R+518)){{goto L5ce3f6;}}
}
B5ce1b9:L5ce1b9:{c.instructions+=7;NFSU2_TR(0x5ce1b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce1bc:{NFSU2_TR(0x5ce1bc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x29ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce1bf:{NFSU2_TR(0x5ce1bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ce1c2:{NFSU2_TR(0x5ce1c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce1c6:{NFSU2_TR(0x5ce1c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce1ca:{NFSU2_TR(0x5ce1ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce1ce:{NFSU2_TR(0x5ce1ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ce275;}}
}
B5ce1d4:L5ce1d4:{c.instructions+=7;NFSU2_TR(0x5ce1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ce1d7:{NFSU2_TR(0x5ce1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce1da:{NFSU2_TR(0x5ce1da);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5ce1dd:{NFSU2_TR(0x5ce1dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce1de:{NFSU2_TR(0x5ce1de);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce1e2:{NFSU2_TR(0x5ce1e2);
__builtin_memmove((R+20),(R+0),4);
}
B5ce1e4:{NFSU2_TR(0x5ce1e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce1e9ull));
TAIL_STATIC(0x575620u,575);
}
B5ce1e9:L5ce1e9:{c.instructions+=8;NFSU2_TR(0x5ce1e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce1ed:{NFSU2_TR(0x5ce1ed);
__builtin_memmove((R+28),(R+0),4);
}
B5ce1ef:{NFSU2_TR(0x5ce1ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ce1f2:{NFSU2_TR(0x5ce1f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce1f5:{NFSU2_TR(0x5ce1f5);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ce1f7:{NFSU2_TR(0x5ce1f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ce1ff:{NFSU2_TR(0x5ce1ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ce207:{NFSU2_TR(0x5ce207);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ce259;}}
}
B5ce209:L5ce209:{c.instructions+=1;NFSU2_TR(0x5ce209);
__builtin_memmove((R+16),(R+16),4);
}
B5ce210:L5ce210:{c.instructions+=9;NFSU2_TR(0x5ce210);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B5ce215:{NFSU2_TR(0x5ce215);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5ce219:{NFSU2_TR(0x5ce219);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5ce21d:{NFSU2_TR(0x5ce21d);
__builtin_memmove((R+4),(R+12),1);
}
B5ce21f:{NFSU2_TR(0x5ce21f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r1(U+0))));
}
B5ce221:{NFSU2_TR(0x5ce221);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B5ce223:{NFSU2_TR(0x5ce223);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ce226:{NFSU2_TR(0x5ce226);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ce228:{NFSU2_TR(0x5ce228);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ce244;}}
}
B5ce22a:L5ce22a:{c.instructions+=1;NFSU2_TR(0x5ce22a);
__builtin_memmove((R+12),(R+12),4);
}
B5ce230:L5ce230:{c.instructions+=8;NFSU2_TR(0x5ce230);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+4,u32(r1(U+0)));
}
B5ce234:{NFSU2_TR(0x5ce234);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ce238:{NFSU2_TR(0x5ce238);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5ce23b:{NFSU2_TR(0x5ce23b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5ce23d:{NFSU2_TR(0x5ce23d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5ce240:{NFSU2_TR(0x5ce240);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5ce241:{NFSU2_TR(0x5ce241);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5ce242:{NFSU2_TR(0x5ce242);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce230u);}goto L5ce230;}}
}
B5ce244:L5ce244:{c.instructions+=6;NFSU2_TR(0x5ce244);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce248:{NFSU2_TR(0x5ce248);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5ce24c:{NFSU2_TR(0x5ce24c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ce24d:{NFSU2_TR(0x5ce24d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ce24f:{NFSU2_TR(0x5ce24f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce253:{NFSU2_TR(0x5ce253);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce210u);}goto L5ce210;}}
}
B5ce255:L5ce255:{c.instructions+=1;NFSU2_TR(0x5ce255);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ce259:L5ce259:{c.instructions+=6;NFSU2_TR(0x5ce259);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce25d:{NFSU2_TR(0x5ce25d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ce261:{NFSU2_TR(0x5ce261);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5ce268:{NFSU2_TR(0x5ce268);
w4(R+4,u32(0x15ull));
}
B5ce26d:{NFSU2_TR(0x5ce26d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce271:{NFSU2_TR(0x5ce271);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4aull))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ce275:L5ce275:{c.instructions+=3;NFSU2_TR(0x5ce275);
__builtin_memmove((R+0),gp(0x87079c),1);
}
B5ce27a:{NFSU2_TR(0x5ce27a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ce27c:{NFSU2_TR(0x5ce27c);
if(r1(R+518)){{goto L5ce28d;}}
}
B5ce27e:L5ce27e:{c.instructions+=7;NFSU2_TR(0x5ce27e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ce27f:{NFSU2_TR(0x5ce27f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce280:{NFSU2_TR(0x5ce280);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+20)),r4(U+0));
}
B5ce287:{NFSU2_TR(0x5ce287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ce288:{NFSU2_TR(0x5ce288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ce289:{NFSU2_TR(0x5ce289);
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
B5ce28c:{NFSU2_TR(0x5ce28c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce28d:L5ce28d:{c.instructions+=3;NFSU2_TR(0x5ce28d);
__builtin_memmove((R+8),gp(0x870794),4);
}
B5ce293:{NFSU2_TR(0x5ce293);
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
B5ce295:{NFSU2_TR(0x5ce295);
if(r1(R+518)){{goto L5ce2dc;}}
}
B5ce297:L5ce297:{c.instructions+=3;NFSU2_TR(0x5ce297);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5ce29b:{NFSU2_TR(0x5ce29b);
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
B5ce29d:{NFSU2_TR(0x5ce29d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ce2dc;}}
}
B5ce29f:L5ce29f:{c.instructions+=23;NFSU2_TR(0x5ce29f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2a1:{NFSU2_TR(0x5ce2a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2a2:{NFSU2_TR(0x5ce2a2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2a4:{NFSU2_TR(0x5ce2a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2a5:{NFSU2_TR(0x5ce2a5);
u8 U[6];
w1(R+512,u8((r4(R+0))<(m4(0x870794))));
w1(R+523,sborrow<u32>(r4(R+0),m4(0x870794)));
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x870794))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ce2ab:{NFSU2_TR(0x5ce2ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5ce2ae:{NFSU2_TR(0x5ce2ae);
__builtin_memmove((R+8),gp(0x870974),4);
}
B5ce2b4:{NFSU2_TR(0x5ce2b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ce2b6:{NFSU2_TR(0x5ce2b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2b8:{NFSU2_TR(0x5ce2b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2b9:{NFSU2_TR(0x5ce2b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5ce2bd:{NFSU2_TR(0x5ce2bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce2c1:{NFSU2_TR(0x5ce2c1);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5ce2c2:{NFSU2_TR(0x5ce2c2);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5ce2c2);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5ce2c2);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5ce2c4:{NFSU2_TR(0x5ce2c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2c5:{NFSU2_TR(0x5ce2c5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5ce2c9:{NFSU2_TR(0x5ce2c9);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5ce2ca:{NFSU2_TR(0x5ce2ca);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5ce2ca);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5ce2ca);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5ce2cc:{NFSU2_TR(0x5ce2cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2cd:{NFSU2_TR(0x5ce2cd);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ce2d2:{NFSU2_TR(0x5ce2d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2d3:{NFSU2_TR(0x5ce2d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce2d7:{NFSU2_TR(0x5ce2d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce2daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce2da:L5ce2da:{c.instructions+=1;NFSU2_TR(0x5ce2da);
{goto L5ce2fe;}
}
B5ce2dc:L5ce2dc:{c.instructions+=15;NFSU2_TR(0x5ce2dc);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ce2e1:{NFSU2_TR(0x5ce2e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ce2e3:{NFSU2_TR(0x5ce2e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2e5:{NFSU2_TR(0x5ce2e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2e6:{NFSU2_TR(0x5ce2e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2e8:{NFSU2_TR(0x5ce2e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2e9:{NFSU2_TR(0x5ce2e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5ce2ed:{NFSU2_TR(0x5ce2ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2ef:{NFSU2_TR(0x5ce2ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2f0:{NFSU2_TR(0x5ce2f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5ce2f4:{NFSU2_TR(0x5ce2f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2f5:{NFSU2_TR(0x5ce2f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5ce2f9:{NFSU2_TR(0x5ce2f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2fa:{NFSU2_TR(0x5ce2fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce2fb:{NFSU2_TR(0x5ce2fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce2feull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce2fe:L5ce2fe:{c.instructions+=2;NFSU2_TR(0x5ce2fe);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5ce302:{NFSU2_TR(0x5ce302);
if(r1(R+518)){{goto L5ce3f6;}}
}
B5ce308:L5ce308:{c.instructions+=15;NFSU2_TR(0x5ce308);
__builtin_memmove((R+8),gp(0x864f50),4);
}
B5ce30e:{NFSU2_TR(0x5ce30e);
__builtin_memmove((R+0),gp(0x872b50),4);
}
B5ce313:{NFSU2_TR(0x5ce313);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ce317:{NFSU2_TR(0x5ce317);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5ce318:{NFSU2_TR(0x5ce318);
__builtin_memmove(gp(0x864f50),(R+8),4);
}
B5ce31e:{NFSU2_TR(0x5ce31e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ce320:{NFSU2_TR(0x5ce320);
__builtin_memmove(gp(0x872b50),(R+12),4);
}
B5ce326:{NFSU2_TR(0x5ce326);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce329:{NFSU2_TR(0x5ce329);
u8 U[4];
w4(U+0,u32(0x872b4cull));
s4(u32(r4(R+12)),r4(U+0));
}
B5ce32f:{NFSU2_TR(0x5ce32f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B5ce333:{NFSU2_TR(0x5ce333);
__builtin_memmove((R+0),gp(0x870794),4);
}
B5ce338:{NFSU2_TR(0x5ce338);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ce33a:{NFSU2_TR(0x5ce33a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce33e:{NFSU2_TR(0x5ce33e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce342:{NFSU2_TR(0x5ce342);
if(r1(R+518)){{goto L5ce36e;}}
}
B5ce344:L5ce344:{c.instructions+=2;NFSU2_TR(0x5ce344);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce346:{NFSU2_TR(0x5ce346);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ce36e;}}
}
B5ce348:L5ce348:{c.instructions+=2;NFSU2_TR(0x5ce348);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ce34a:{NFSU2_TR(0x5ce34a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ce36e;}}
}
B5ce34c:L5ce34c:{c.instructions+=3;NFSU2_TR(0x5ce34c);
__builtin_memmove((R+4),(R+0),4);
}
B5ce34e:{NFSU2_TR(0x5ce34e);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B5ce350:{NFSU2_TR(0x5ce350);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce354:L5ce354:{c.instructions+=9;NFSU2_TR(0x5ce354);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce358:{NFSU2_TR(0x5ce358);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5ce35a:{NFSU2_TR(0x5ce35a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5ce35b:{NFSU2_TR(0x5ce35b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B5ce35e:{NFSU2_TR(0x5ce35e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5ce360:{NFSU2_TR(0x5ce360);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5ce363:{NFSU2_TR(0x5ce363);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5ce364:{NFSU2_TR(0x5ce364);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce368:{NFSU2_TR(0x5ce368);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce354u);}goto L5ce354;}}
}
B5ce36a:L5ce36a:{c.instructions+=1;NFSU2_TR(0x5ce36a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce36e:L5ce36e:{c.instructions+=3;NFSU2_TR(0x5ce36e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ce370:{NFSU2_TR(0x5ce370);
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
B5ce372:{NFSU2_TR(0x5ce372);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ce3e1;}}
}
B5ce374:L5ce374:{c.instructions+=2;NFSU2_TR(0x5ce374);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce378:{NFSU2_TR(0x5ce378);
{goto L5ce380;}
}
B5ce37a:L5ce37a:{c.instructions+=2;NFSU2_TR(0x5ce37a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ce37e:{NFSU2_TR(0x5ce37e);
__builtin_memmove((R+28),(R+28),4);
}
B5ce380:L5ce380:{c.instructions+=10;NFSU2_TR(0x5ce380);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ce384:{NFSU2_TR(0x5ce384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce386:{NFSU2_TR(0x5ce386);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce388:{NFSU2_TR(0x5ce388);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce38a:{NFSU2_TR(0x5ce38a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce38c:{NFSU2_TR(0x5ce38c);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ce390:{NFSU2_TR(0x5ce390);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce391:{NFSU2_TR(0x5ce391);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce392:{NFSU2_TR(0x5ce392);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce393:{NFSU2_TR(0x5ce393);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce396ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce396:L5ce396:{c.instructions+=9;NFSU2_TR(0x5ce396);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce39a:{NFSU2_TR(0x5ce39a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ce39e:{NFSU2_TR(0x5ce39e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,sar<u32>(r4(R+20),u64(r1(U+0))));
}
B5ce3a0:{NFSU2_TR(0x5ce3a0);
__builtin_memmove((R+24),(R+28),4);
}
B5ce3a2:{NFSU2_TR(0x5ce3a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ce3a6:{NFSU2_TR(0x5ce3a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce3a7:{NFSU2_TR(0x5ce3a7);
__builtin_memmove((R+4),(R+20),4);
}
B5ce3a9:{NFSU2_TR(0x5ce3a9);
__builtin_memmove((R+0),(R+4),4);
}
B5ce3ab:{NFSU2_TR(0x5ce3ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5ce3ae:L5ce3ae:{c.instructions+=1;NFSU2_TR(0x5ce3ae);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5ce3b0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce3aeu);}goto L5ce3ae;}
}
B5ce3b0:L5ce3b0:{c.instructions+=2;NFSU2_TR(0x5ce3b0);
__builtin_memmove((R+4),(R+0),4);
}
B5ce3b2:{NFSU2_TR(0x5ce3b2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ce3b5:L5ce3b5:{c.instructions+=1;NFSU2_TR(0x5ce3b5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5ce3b7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce3b5u);}goto L5ce3b5;}
}
B5ce3b7:L5ce3b7:{c.instructions+=5;NFSU2_TR(0x5ce3b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce3bb:{NFSU2_TR(0x5ce3bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce3bd:{NFSU2_TR(0x5ce3bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ce3bf:{NFSU2_TR(0x5ce3bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce3c0:{NFSU2_TR(0x5ce3c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce3c3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce3c3:L5ce3c3:{c.instructions+=10;NFSU2_TR(0x5ce3c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ce3c7:{NFSU2_TR(0x5ce3c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce3cb:{NFSU2_TR(0x5ce3cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce3cf:{NFSU2_TR(0x5ce3cf);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B5ce3d1:{NFSU2_TR(0x5ce3d1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5ce3d2:{NFSU2_TR(0x5ce3d2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5ce3d5:{NFSU2_TR(0x5ce3d5);
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
B5ce3d7:{NFSU2_TR(0x5ce3d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce3db:{NFSU2_TR(0x5ce3db);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce3df:{NFSU2_TR(0x5ce3df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce37au);}goto L5ce37a;}}
}
B5ce3e1:L5ce3e1:{c.instructions+=3;NFSU2_TR(0x5ce3e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce3e5:{NFSU2_TR(0x5ce3e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ce3e7:{NFSU2_TR(0x5ce3e7);
if(r1(R+518)){{goto L5ce3f6;}}
}
B5ce3e9:L5ce3e9:{c.instructions+=3;NFSU2_TR(0x5ce3e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce3ed:{NFSU2_TR(0x5ce3ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce3ee:{NFSU2_TR(0x5ce3ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce3f3ull));
TAIL_STATIC(0x575630u,575);
}
B5ce3f3:L5ce3f3:{c.instructions+=1;NFSU2_TR(0x5ce3f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce3f6:L5ce3f6:{c.instructions+=6;NFSU2_TR(0x5ce3f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ce3f7:{NFSU2_TR(0x5ce3f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce3f8:{NFSU2_TR(0x5ce3f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ce3f9:{NFSU2_TR(0x5ce3f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ce3fa:{NFSU2_TR(0x5ce3fa);
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
B5ce3fd:{NFSU2_TR(0x5ce3fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce400:L5ce400:{c.instructions+=4;NFSU2_TR(0x5ce400);
__builtin_memmove((R+0),gp(0x872b4c),4);
}
B5ce405:{NFSU2_TR(0x5ce405);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x872b4cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ce40a:{NFSU2_TR(0x5ce40a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce40b:{NFSU2_TR(0x5ce40b);
if(r1(R+518)){{goto L5ce450;}}
}
B5ce40d:L5ce40d:{c.instructions+=1;NFSU2_TR(0x5ce40d);
__builtin_memmove((R+4),(R+4),4);
}
B5ce410:L5ce410:{c.instructions+=8;NFSU2_TR(0x5ce410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce412:{NFSU2_TR(0x5ce412);
__builtin_memmove((R+24),(R+0),4);
}
B5ce414:{NFSU2_TR(0x5ce414);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce417:{NFSU2_TR(0x5ce417);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ce419:{NFSU2_TR(0x5ce419);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce41c:{NFSU2_TR(0x5ce41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce41f:{NFSU2_TR(0x5ce41f);
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
B5ce421:{NFSU2_TR(0x5ce421);
if(r1(R+518)){{goto L5ce444;}}
}
B5ce423:L5ce423:{c.instructions+=3;NFSU2_TR(0x5ce423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce425:{NFSU2_TR(0x5ce425);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce426:{NFSU2_TR(0x5ce426);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce429ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce429:L5ce429:{c.instructions+=2;NFSU2_TR(0x5ce429);
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
B5ce42b:{NFSU2_TR(0x5ce42b);
if(r1(R+518)){{goto L5ce43d;}}
}
B5ce42d:L5ce42d:{c.instructions+=1;NFSU2_TR(0x5ce42d);
__builtin_memmove((R+4),(R+4),4);
}
B5ce430:L5ce430:{c.instructions+=4;NFSU2_TR(0x5ce430);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce433:{NFSU2_TR(0x5ce433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ce435:{NFSU2_TR(0x5ce435);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce436:{NFSU2_TR(0x5ce436);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce439ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce439:L5ce439:{c.instructions+=2;NFSU2_TR(0x5ce439);
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
B5ce43b:{NFSU2_TR(0x5ce43b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce430u);}goto L5ce430;}}
}
B5ce43d:L5ce43d:{c.instructions+=1;NFSU2_TR(0x5ce43d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ce444:L5ce444:{c.instructions+=3;NFSU2_TR(0x5ce444);
__builtin_memmove((R+0),gp(0x872b4c),4);
}
B5ce449:{NFSU2_TR(0x5ce449);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x872b4cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ce44e:{NFSU2_TR(0x5ce44e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce410u);}goto L5ce410;}}
}
B5ce450:L5ce450:{c.instructions+=5;NFSU2_TR(0x5ce450);
__builtin_memmove((R+0),gp(0x8763b0),4);
}
B5ce455:{NFSU2_TR(0x5ce455);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8763b0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8763b0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8763b0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ce45a:{NFSU2_TR(0x5ce45a);
s4(0x872b4c,u32(0x872b4cull));
}
B5ce464:{NFSU2_TR(0x5ce464);
s4(0x872b50,u32(0x872b4cull));
}
B5ce46e:{NFSU2_TR(0x5ce46e);
if(r1(R+518)){{goto L5ce4b0;}}
}
B5ce470:L5ce470:{c.instructions+=4;NFSU2_TR(0x5ce470);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ce473:{NFSU2_TR(0x5ce473);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce475:{NFSU2_TR(0x5ce475);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce476:{NFSU2_TR(0x5ce476);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce479ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce479:L5ce479:{c.instructions+=2;NFSU2_TR(0x5ce479);
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
B5ce47b:{NFSU2_TR(0x5ce47b);
if(r1(R+518)){{goto L5ce48a;}}
}
B5ce47d:L5ce47d:{c.instructions+=1;NFSU2_TR(0x5ce47d);
__builtin_memmove((R+4),(R+4),4);
}
B5ce480:L5ce480:{c.instructions+=3;NFSU2_TR(0x5ce480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce482:{NFSU2_TR(0x5ce482);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce483:{NFSU2_TR(0x5ce483);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce486ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce486:L5ce486:{c.instructions+=2;NFSU2_TR(0x5ce486);
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
B5ce488:{NFSU2_TR(0x5ce488);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce480u);}goto L5ce480;}}
}
B5ce48a:L5ce48a:{c.instructions+=8;NFSU2_TR(0x5ce48a);
__builtin_memmove((R+0),gp(0x8763b0),4);
}
B5ce48f:{NFSU2_TR(0x5ce48f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce491:{NFSU2_TR(0x5ce491);
__builtin_memmove((R+8),(R+0),4);
}
B5ce493:{NFSU2_TR(0x5ce493);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce496:{NFSU2_TR(0x5ce496);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ce498:{NFSU2_TR(0x5ce498);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce499:{NFSU2_TR(0x5ce499);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce49c:{NFSU2_TR(0x5ce49c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce4a1ull));
TAIL_STATIC(0x440ef0u,440);
}
B5ce4a1:L5ce4a1:{c.instructions+=4;NFSU2_TR(0x5ce4a1);
__builtin_memmove((R+0),gp(0x8763b0),4);
}
B5ce4a6:{NFSU2_TR(0x5ce4a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce4a9:{NFSU2_TR(0x5ce4a9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8763b0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8763b0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8763b0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ce4ae:{NFSU2_TR(0x5ce4ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce470u);}goto L5ce470;}}
}
B5ce4b0:L5ce4b0:{c.instructions+=2;NFSU2_TR(0x5ce4b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce4b1:{NFSU2_TR(0x5ce4b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce4c0:L5ce4c0:{c.instructions+=5;NFSU2_TR(0x5ce4c0);
__builtin_memmove((R+0),gp(0x87079c),1);
}
B5ce4c5:{NFSU2_TR(0x5ce4c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce4c6:{NFSU2_TR(0x5ce4c6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ce4c8:{NFSU2_TR(0x5ce4c8);
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
B5ce4ca:{NFSU2_TR(0x5ce4ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ce50d;}}
}
B5ce4cc:L5ce4cc:{c.instructions+=3;NFSU2_TR(0x5ce4cc);
__builtin_memmove((R+0),gp(0x8763b0),4);
}
B5ce4d1:{NFSU2_TR(0x5ce4d1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8763b0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8763b0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8763b0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ce4d6:{NFSU2_TR(0x5ce4d6);
if(r1(R+518)){{goto L5ce50d;}}
}
B5ce4d8:L5ce4d8:{c.instructions+=2;NFSU2_TR(0x5ce4d8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5ce4db:{NFSU2_TR(0x5ce4db);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ce50d;}}
}
B5ce4dd:L5ce4dd:{c.instructions+=4;NFSU2_TR(0x5ce4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce4e0:{NFSU2_TR(0x5ce4e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce4e2:{NFSU2_TR(0x5ce4e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce4e3:{NFSU2_TR(0x5ce4e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce4e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce4e6:L5ce4e6:{c.instructions+=8;NFSU2_TR(0x5ce4e6);
__builtin_memmove((R+0),gp(0x8763b0),4);
}
B5ce4eb:{NFSU2_TR(0x5ce4eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce4ed:{NFSU2_TR(0x5ce4ed);
__builtin_memmove((R+8),(R+0),4);
}
B5ce4ef:{NFSU2_TR(0x5ce4ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce4f2:{NFSU2_TR(0x5ce4f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ce4f4:{NFSU2_TR(0x5ce4f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce4f5:{NFSU2_TR(0x5ce4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce4f8:{NFSU2_TR(0x5ce4f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce4fdull));
TAIL_STATIC(0x440ef0u,440);
}
B5ce4fd:L5ce4fd:{c.instructions+=5;NFSU2_TR(0x5ce4fd);
__builtin_memmove((R+0),gp(0x8763b0),4);
}
B5ce502:{NFSU2_TR(0x5ce502);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce505:{NFSU2_TR(0x5ce505);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5ce506:{NFSU2_TR(0x5ce506);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8763b0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8763b0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8763b0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ce50b:{NFSU2_TR(0x5ce50b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce4d8u);}goto L5ce4d8;}}
}
B5ce50d:L5ce50d:{c.instructions+=2;NFSU2_TR(0x5ce50d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce50e:{NFSU2_TR(0x5ce50e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce510:L5ce510:{c.instructions+=8;NFSU2_TR(0x5ce510);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce511:{NFSU2_TR(0x5ce511);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5ce515:{NFSU2_TR(0x5ce515);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce516:{NFSU2_TR(0x5ce516);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce517:{NFSU2_TR(0x5ce517);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ce519:{NFSU2_TR(0x5ce519);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ce51c:{NFSU2_TR(0x5ce51c);
__builtin_memmove((R+24),(R+4),4);
}
B5ce51e:{NFSU2_TR(0x5ce51e);
if(r1(R+518)){{goto L5ce5e3;}}
}
B5ce524:L5ce524:{c.instructions+=2;NFSU2_TR(0x5ce524);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce52b:{NFSU2_TR(0x5ce52b);
if(r1(R+518)){{goto L5ce541;}}
}
B5ce52d:L5ce52d:{c.instructions+=3;NFSU2_TR(0x5ce52d);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce532:{NFSU2_TR(0x5ce532);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce537:{NFSU2_TR(0x5ce537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce53cull));
TAIL_STATIC(0x440820u,440);
}
B5ce53c:L5ce53c:{c.instructions+=2;NFSU2_TR(0x5ce53c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ce53f:{NFSU2_TR(0x5ce53f);
{goto L5ce556;}
}
B5ce541:L5ce541:{c.instructions+=5;NFSU2_TR(0x5ce541);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce542:{NFSU2_TR(0x5ce542);
u8 U[4];
w4(U+0,u32(0x7a4114ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce547:{NFSU2_TR(0x5ce547);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce54c:{NFSU2_TR(0x5ce54c);
w4(R+4,u32(0x88eb00ull));
}
B5ce551:{NFSU2_TR(0x5ce551);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce556ull));
TAIL_STATIC(0x5e8670u,5e8);
}
B5ce556:L5ce556:{c.instructions+=3;NFSU2_TR(0x5ce556);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce558:{NFSU2_TR(0x5ce558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce55b:{NFSU2_TR(0x5ce55b);
if(r1(R+518)){{goto L5ce625;}}
}
B5ce561:L5ce561:{c.instructions+=6;NFSU2_TR(0x5ce561);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce565:{NFSU2_TR(0x5ce565);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce569:{NFSU2_TR(0x5ce569);
u8 U[4];
w4(U+0,u32(0x7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce56b:{NFSU2_TR(0x5ce56b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ce56d:{NFSU2_TR(0x5ce56d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce570:{NFSU2_TR(0x5ce570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce575ull));
TAIL_STATIC(0x575620u,575);
}
B5ce575:L5ce575:{c.instructions+=3;NFSU2_TR(0x5ce575);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce577:{NFSU2_TR(0x5ce577);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce57a:{NFSU2_TR(0x5ce57a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce57full));
TAIL_STATIC(0x575620u,575);
}
B5ce57f:L5ce57f:{c.instructions+=3;NFSU2_TR(0x5ce57f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ce582:{NFSU2_TR(0x5ce582);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce584:{NFSU2_TR(0x5ce584);
if(r1(R+518)){{goto L5ce59a;}}
}
B5ce586:L5ce586:{c.instructions+=7;NFSU2_TR(0x5ce586);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce589:{NFSU2_TR(0x5ce589);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce58c:{NFSU2_TR(0x5ce58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce58f:{NFSU2_TR(0x5ce58f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce592:{NFSU2_TR(0x5ce592);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce595:{NFSU2_TR(0x5ce595);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce598:{NFSU2_TR(0x5ce598);
{goto L5ce59c;}
}
B5ce59a:L5ce59a:{c.instructions+=1;NFSU2_TR(0x5ce59a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ce59c:L5ce59c:{c.instructions+=16;NFSU2_TR(0x5ce59c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ce59f:{NFSU2_TR(0x5ce59f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce5a0:{NFSU2_TR(0x5ce5a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce5a1:{NFSU2_TR(0x5ce5a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce5a2:{NFSU2_TR(0x5ce5a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce5a3:{NFSU2_TR(0x5ce5a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce5a4:{NFSU2_TR(0x5ce5a4);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce5a6:{NFSU2_TR(0x5ce5a6);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce5ab:{NFSU2_TR(0x5ce5ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce5ae:{NFSU2_TR(0x5ce5ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5ce5b0:{NFSU2_TR(0x5ce5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce5b3:{NFSU2_TR(0x5ce5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce5b6:{NFSU2_TR(0x5ce5b6);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce5bb:{NFSU2_TR(0x5ce5bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce5bc:{NFSU2_TR(0x5ce5bc);
u8 U[4];
w4(U+0,u32(0x7a4108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce5c1:{NFSU2_TR(0x5ce5c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce5c6ull));
TAIL_STATIC(0x48b220u,48b);
}
B5ce5c6:L5ce5c6:{c.instructions+=8;NFSU2_TR(0x5ce5c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce5c9:{NFSU2_TR(0x5ce5c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce5cb:{NFSU2_TR(0x5ce5cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ce5d2:{NFSU2_TR(0x5ce5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce5d5:{NFSU2_TR(0x5ce5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce5d8:{NFSU2_TR(0x5ce5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce5db:{NFSU2_TR(0x5ce5db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce5de:{NFSU2_TR(0x5ce5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce5e3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce170u);}goto L5ce170;}
}
B5ce5e3:L5ce5e3:{c.instructions+=2;NFSU2_TR(0x5ce5e3);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ce5e6:{NFSU2_TR(0x5ce5e6);
if(r1(R+518)){{goto L5ce6ae;}}
}
B5ce5ec:L5ce5ec:{c.instructions+=2;NFSU2_TR(0x5ce5ec);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce5f3:{NFSU2_TR(0x5ce5f3);
if(r1(R+518)){{goto L5ce609;}}
}
B5ce5f5:L5ce5f5:{c.instructions+=3;NFSU2_TR(0x5ce5f5);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce5fa:{NFSU2_TR(0x5ce5fa);
u8 U[4];
w4(U+0,u32(0x3000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce5ff:{NFSU2_TR(0x5ce5ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce604ull));
TAIL_STATIC(0x440820u,440);
}
B5ce604:L5ce604:{c.instructions+=2;NFSU2_TR(0x5ce604);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ce607:{NFSU2_TR(0x5ce607);
{goto L5ce61e;}
}
B5ce609:L5ce609:{c.instructions+=5;NFSU2_TR(0x5ce609);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce60a:{NFSU2_TR(0x5ce60a);
u8 U[4];
w4(U+0,u32(0x7a40f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce60f:{NFSU2_TR(0x5ce60f);
u8 U[4];
w4(U+0,u32(0x3000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce614:{NFSU2_TR(0x5ce614);
w4(R+4,u32(0x88eb00ull));
}
B5ce619:{NFSU2_TR(0x5ce619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce61eull));
TAIL_STATIC(0x5e8670u,5e8);
}
B5ce61e:L5ce61e:{c.instructions+=3;NFSU2_TR(0x5ce61e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce620:{NFSU2_TR(0x5ce620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce623:{NFSU2_TR(0x5ce623);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ce62d;}}
}
B5ce625:L5ce625:{c.instructions+=5;NFSU2_TR(0x5ce625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ce626:{NFSU2_TR(0x5ce626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce627:{NFSU2_TR(0x5ce627);
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
B5ce629:{NFSU2_TR(0x5ce629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ce62a:{NFSU2_TR(0x5ce62a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce62d:L5ce62d:{c.instructions+=4;NFSU2_TR(0x5ce62d);
u8 U[4];
w4(U+0,u32(0x7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce62f:{NFSU2_TR(0x5ce62f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ce636:{NFSU2_TR(0x5ce636);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ce63d:{NFSU2_TR(0x5ce63d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce642ull));
TAIL_STATIC(0x575620u,575);
}
B5ce642:L5ce642:{c.instructions+=3;NFSU2_TR(0x5ce642);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce644:{NFSU2_TR(0x5ce644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce647:{NFSU2_TR(0x5ce647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce64cull));
TAIL_STATIC(0x575620u,575);
}
B5ce64c:L5ce64c:{c.instructions+=3;NFSU2_TR(0x5ce64c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ce64f:{NFSU2_TR(0x5ce64f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce651:{NFSU2_TR(0x5ce651);
if(r1(R+518)){{goto L5ce667;}}
}
B5ce653:L5ce653:{c.instructions+=7;NFSU2_TR(0x5ce653);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce656:{NFSU2_TR(0x5ce656);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce659:{NFSU2_TR(0x5ce659);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce65c:{NFSU2_TR(0x5ce65c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce65f:{NFSU2_TR(0x5ce65f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce662:{NFSU2_TR(0x5ce662);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce665:{NFSU2_TR(0x5ce665);
{goto L5ce669;}
}
B5ce667:L5ce667:{c.instructions+=1;NFSU2_TR(0x5ce667);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ce669:L5ce669:{c.instructions+=18;NFSU2_TR(0x5ce669);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ce66c:{NFSU2_TR(0x5ce66c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce66d:{NFSU2_TR(0x5ce66d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce66e:{NFSU2_TR(0x5ce66e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce66f:{NFSU2_TR(0x5ce66f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce670:{NFSU2_TR(0x5ce670);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce671:{NFSU2_TR(0x5ce671);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce674:{NFSU2_TR(0x5ce674);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5ce676:{NFSU2_TR(0x5ce676);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce679:{NFSU2_TR(0x5ce679);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce67c:{NFSU2_TR(0x5ce67c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ce67f:{NFSU2_TR(0x5ce67f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce681:{NFSU2_TR(0x5ce681);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce682:{NFSU2_TR(0x5ce682);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce683:{NFSU2_TR(0x5ce683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce686:{NFSU2_TR(0x5ce686);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce687:{NFSU2_TR(0x5ce687);
u8 U[4];
w4(U+0,u32(0x7a40e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce68c:{NFSU2_TR(0x5ce68c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce691ull));
TAIL_STATIC(0x48b220u,48b);
}
B5ce691:L5ce691:{c.instructions+=8;NFSU2_TR(0x5ce691);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce694:{NFSU2_TR(0x5ce694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce696:{NFSU2_TR(0x5ce696);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ce69d:{NFSU2_TR(0x5ce69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce6a0:{NFSU2_TR(0x5ce6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce6a3:{NFSU2_TR(0x5ce6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce6a6:{NFSU2_TR(0x5ce6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce6a9:{NFSU2_TR(0x5ce6a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce6aeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce170u);}goto L5ce170;}
}
B5ce6ae:L5ce6ae:{c.instructions+=5;NFSU2_TR(0x5ce6ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ce6af:{NFSU2_TR(0x5ce6af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce6b0:{NFSU2_TR(0x5ce6b0);
w4(R+0,u32(0x1ull));
}
B5ce6b5:{NFSU2_TR(0x5ce6b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ce6b6:{NFSU2_TR(0x5ce6b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce6c0:L5ce6c0:{c.instructions+=9;NFSU2_TR(0x5ce6c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce6c1:{NFSU2_TR(0x5ce6c1);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5ce6c5:{NFSU2_TR(0x5ce6c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce6c6:{NFSU2_TR(0x5ce6c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce6c7:{NFSU2_TR(0x5ce6c7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5ce6c9:{NFSU2_TR(0x5ce6c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ce6cc:{NFSU2_TR(0x5ce6cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce6cd:{NFSU2_TR(0x5ce6cd);
__builtin_memmove((R+28),(R+4),4);
}
B5ce6cf:{NFSU2_TR(0x5ce6cf);
if(r1(R+518)){{goto L5ce744;}}
}
B5ce6d1:L5ce6d1:{c.instructions+=3;NFSU2_TR(0x5ce6d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce6d4:{NFSU2_TR(0x5ce6d4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce6d6:{NFSU2_TR(0x5ce6d6);
if(r1(R+518)){{goto L5ce6f6;}}
}
B5ce6d8:L5ce6d8:{c.instructions+=3;NFSU2_TR(0x5ce6d8);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce6df:{NFSU2_TR(0x5ce6df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce6e0:{NFSU2_TR(0x5ce6e0);
if(r1(R+518)){{goto L5ce6ec;}}
}
B5ce6e2:L5ce6e2:{c.instructions+=1;NFSU2_TR(0x5ce6e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce6e7ull));
TAIL_STATIC(0x440540u,440);
}
B5ce6e7:L5ce6e7:{c.instructions+=2;NFSU2_TR(0x5ce6e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce6ea:{NFSU2_TR(0x5ce6ea);
{goto L5ce6f6;}
}
B5ce6ec:L5ce6ec:{c.instructions+=2;NFSU2_TR(0x5ce6ec);
w4(R+4,u32(0x88eb00ull));
}
B5ce6f1:{NFSU2_TR(0x5ce6f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce6f6ull));
TAIL_STATIC(0x5d6130u,5d6);
}
B5ce6f6:L5ce6f6:{c.instructions+=3;NFSU2_TR(0x5ce6f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce6f9:{NFSU2_TR(0x5ce6f9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce6fb:{NFSU2_TR(0x5ce6fb);
if(r1(R+518)){{goto L5ce731;}}
}
B5ce6fd:L5ce6fd:{c.instructions+=4;NFSU2_TR(0x5ce6fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5ce6ff:{NFSU2_TR(0x5ce6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce702:{NFSU2_TR(0x5ce702);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce704:{NFSU2_TR(0x5ce704);
if(r1(R+518)){{goto L5ce71e;}}
}
B5ce706:L5ce706:{c.instructions+=3;NFSU2_TR(0x5ce706);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce707:{NFSU2_TR(0x5ce707);
w4(R+4,u32(0x8763b0ull));
}
B5ce70c:{NFSU2_TR(0x5ce70c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce711ull));
TAIL_STATIC(0x479130u,479);
}
B5ce711:L5ce711:{c.instructions+=5;NFSU2_TR(0x5ce711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce713:{NFSU2_TR(0x5ce713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce716:{NFSU2_TR(0x5ce716);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ce719:{NFSU2_TR(0x5ce719);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ce71b:{NFSU2_TR(0x5ce71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce71e:L5ce71e:{c.instructions+=3;NFSU2_TR(0x5ce71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce721:{NFSU2_TR(0x5ce721);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce723:{NFSU2_TR(0x5ce723);
if(r1(R+518)){{goto L5ce72e;}}
}
B5ce725:L5ce725:{c.instructions+=2;NFSU2_TR(0x5ce725);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce726:{NFSU2_TR(0x5ce726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce72bull));
TAIL_STATIC(0x575630u,575);
}
B5ce72b:L5ce72b:{c.instructions+=1;NFSU2_TR(0x5ce72b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce72e:L5ce72e:{c.instructions+=1;NFSU2_TR(0x5ce72e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce731:L5ce731:{c.instructions+=3;NFSU2_TR(0x5ce731);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce734:{NFSU2_TR(0x5ce734);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce736:{NFSU2_TR(0x5ce736);
if(r1(R+518)){{goto L5ce744;}}
}
B5ce738:L5ce738:{c.instructions+=2;NFSU2_TR(0x5ce738);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce739:{NFSU2_TR(0x5ce739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce73eull));
TAIL_STATIC(0x575630u,575);
}
B5ce73e:L5ce73e:{c.instructions+=2;NFSU2_TR(0x5ce73e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce741:{NFSU2_TR(0x5ce741);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce744:L5ce744:{c.instructions+=2;NFSU2_TR(0x5ce744);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ce747:{NFSU2_TR(0x5ce747);
if(r1(R+518)){{goto L5ce7bc;}}
}
B5ce749:L5ce749:{c.instructions+=3;NFSU2_TR(0x5ce749);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce74c:{NFSU2_TR(0x5ce74c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce74e:{NFSU2_TR(0x5ce74e);
if(r1(R+518)){{goto L5ce76e;}}
}
B5ce750:L5ce750:{c.instructions+=3;NFSU2_TR(0x5ce750);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce757:{NFSU2_TR(0x5ce757);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce758:{NFSU2_TR(0x5ce758);
if(r1(R+518)){{goto L5ce764;}}
}
B5ce75a:L5ce75a:{c.instructions+=1;NFSU2_TR(0x5ce75a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce75full));
TAIL_STATIC(0x440540u,440);
}
B5ce75f:L5ce75f:{c.instructions+=2;NFSU2_TR(0x5ce75f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce762:{NFSU2_TR(0x5ce762);
{goto L5ce76e;}
}
B5ce764:L5ce764:{c.instructions+=2;NFSU2_TR(0x5ce764);
w4(R+4,u32(0x88eb00ull));
}
B5ce769:{NFSU2_TR(0x5ce769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce76eull));
TAIL_STATIC(0x5d6130u,5d6);
}
B5ce76e:L5ce76e:{c.instructions+=3;NFSU2_TR(0x5ce76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce771:{NFSU2_TR(0x5ce771);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce773:{NFSU2_TR(0x5ce773);
if(r1(R+518)){{goto L5ce7a9;}}
}
B5ce775:L5ce775:{c.instructions+=4;NFSU2_TR(0x5ce775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5ce777:{NFSU2_TR(0x5ce777);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce77a:{NFSU2_TR(0x5ce77a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce77c:{NFSU2_TR(0x5ce77c);
if(r1(R+518)){{goto L5ce796;}}
}
B5ce77e:L5ce77e:{c.instructions+=3;NFSU2_TR(0x5ce77e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce77f:{NFSU2_TR(0x5ce77f);
w4(R+4,u32(0x8763b0ull));
}
B5ce784:{NFSU2_TR(0x5ce784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce789ull));
TAIL_STATIC(0x479130u,479);
}
B5ce789:L5ce789:{c.instructions+=5;NFSU2_TR(0x5ce789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce78b:{NFSU2_TR(0x5ce78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce78e:{NFSU2_TR(0x5ce78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ce791:{NFSU2_TR(0x5ce791);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ce793:{NFSU2_TR(0x5ce793);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce796:L5ce796:{c.instructions+=3;NFSU2_TR(0x5ce796);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce799:{NFSU2_TR(0x5ce799);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce79b:{NFSU2_TR(0x5ce79b);
if(r1(R+518)){{goto L5ce7a6;}}
}
B5ce79d:L5ce79d:{c.instructions+=2;NFSU2_TR(0x5ce79d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce79e:{NFSU2_TR(0x5ce79e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce7a3ull));
TAIL_STATIC(0x575630u,575);
}
B5ce7a3:L5ce7a3:{c.instructions+=1;NFSU2_TR(0x5ce7a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce7a6:L5ce7a6:{c.instructions+=1;NFSU2_TR(0x5ce7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce7a9:L5ce7a9:{c.instructions+=3;NFSU2_TR(0x5ce7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce7ac:{NFSU2_TR(0x5ce7ac);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5ce7ae:{NFSU2_TR(0x5ce7ae);
if(r1(R+518)){{goto L5ce7bc;}}
}
B5ce7b0:L5ce7b0:{c.instructions+=2;NFSU2_TR(0x5ce7b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce7b1:{NFSU2_TR(0x5ce7b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce7b6ull));
TAIL_STATIC(0x575630u,575);
}
B5ce7b6:L5ce7b6:{c.instructions+=2;NFSU2_TR(0x5ce7b6);
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
B5ce7b9:{NFSU2_TR(0x5ce7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce7bc:L5ce7bc:{c.instructions+=5;NFSU2_TR(0x5ce7bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ce7bd:{NFSU2_TR(0x5ce7bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce7be:{NFSU2_TR(0x5ce7be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ce7bf:{NFSU2_TR(0x5ce7bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ce7c0:{NFSU2_TR(0x5ce7c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce7d0:L5ce7d0:{c.instructions+=8;NFSU2_TR(0x5ce7d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce7d1:{NFSU2_TR(0x5ce7d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce7d2:{NFSU2_TR(0x5ce7d2);
__builtin_memmove((R+24),gp(0x872b44),4);
}
B5ce7d8:{NFSU2_TR(0x5ce7d8);
__builtin_memmove((R+12),(R+4),4);
}
B5ce7da:{NFSU2_TR(0x5ce7da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce7db:{NFSU2_TR(0x5ce7db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5ce7dd:{NFSU2_TR(0x5ce7dd);
w4(R+4,u32(0x872b44ull));
}
B5ce7e2:{NFSU2_TR(0x5ce7e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce7e7ull));
TAIL_STATIC(0x502fd0u,502);
}
B5ce7e7:L5ce7e7:{c.instructions+=2;NFSU2_TR(0x5ce7e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce7e9:{NFSU2_TR(0x5ce7e9);
if(r1(R+518)){{goto L5ce810;}}
}
B5ce7eb:L5ce7eb:{c.instructions+=1;NFSU2_TR(0x5ce7eb);
{goto L5ce7f0;}
}
B5ce7f0:L5ce7f0:{c.instructions+=2;NFSU2_TR(0x5ce7f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ce7f3:{NFSU2_TR(0x5ce7f3);
if(r1(R+518)){{goto L5ce7fd;}}
}
B5ce7f5:L5ce7f5:{c.instructions+=3;NFSU2_TR(0x5ce7f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5ce7f7:{NFSU2_TR(0x5ce7f7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce7f9:{NFSU2_TR(0x5ce7f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce7f0u);}goto L5ce7f0;}}
}
B5ce7fb:L5ce7fb:{c.instructions+=1;NFSU2_TR(0x5ce7fb);
{goto L5ce810;}
}
B5ce7fd:L5ce7fd:{c.instructions+=6;NFSU2_TR(0x5ce7fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce7ff:{NFSU2_TR(0x5ce7ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce802:{NFSU2_TR(0x5ce802);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ce804:{NFSU2_TR(0x5ce804);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce805:{NFSU2_TR(0x5ce805);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce808:{NFSU2_TR(0x5ce808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce80dull));
TAIL_STATIC(0x440ef0u,440);
}
B5ce80d:L5ce80d:{c.instructions+=1;NFSU2_TR(0x5ce80d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce810:L5ce810:{c.instructions+=4;NFSU2_TR(0x5ce810);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce813:{NFSU2_TR(0x5ce813);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ce815:{NFSU2_TR(0x5ce815);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce817:{NFSU2_TR(0x5ce817);
if(r1(R+518)){{goto L5ce827;}}
}
B5ce819:L5ce819:{c.instructions+=3;NFSU2_TR(0x5ce819);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce81a:{NFSU2_TR(0x5ce81a);
w4(R+4,u32(0x870d28ull));
}
B5ce81f:{NFSU2_TR(0x5ce81f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce824ull));
TAIL_STATIC(0x479130u,479);
}
B5ce824:L5ce824:{c.instructions+=1;NFSU2_TR(0x5ce824);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce827:L5ce827:{c.instructions+=3;NFSU2_TR(0x5ce827);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce82a:{NFSU2_TR(0x5ce82a);
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
B5ce82c:{NFSU2_TR(0x5ce82c);
if(r1(R+518)){{goto L5ce837;}}
}
B5ce82e:L5ce82e:{c.instructions+=3;NFSU2_TR(0x5ce82e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce830:{NFSU2_TR(0x5ce830);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce831:{NFSU2_TR(0x5ce831);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce834ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce834:L5ce834:{c.instructions+=1;NFSU2_TR(0x5ce834);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce837:L5ce837:{c.instructions+=10;NFSU2_TR(0x5ce837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce839:{NFSU2_TR(0x5ce839);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ce83c:{NFSU2_TR(0x5ce83c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5ce83e:{NFSU2_TR(0x5ce83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce841:{NFSU2_TR(0x5ce841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ce842:{NFSU2_TR(0x5ce842);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5ce844:{NFSU2_TR(0x5ce844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce845:{NFSU2_TR(0x5ce845);
w4(R+0,u32(0x1ull));
}
B5ce84a:{NFSU2_TR(0x5ce84a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ce84b:{NFSU2_TR(0x5ce84b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce850:L5ce850:{c.instructions+=7;NFSU2_TR(0x5ce850);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce851:{NFSU2_TR(0x5ce851);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce852:{NFSU2_TR(0x5ce852);
__builtin_memmove((R+24),gp(0x870d28),4);
}
B5ce858:{NFSU2_TR(0x5ce858);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce859:{NFSU2_TR(0x5ce859);
w4(R+4,u32(0x870d28ull));
}
B5ce85e:{NFSU2_TR(0x5ce85e);
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
B5ce860:{NFSU2_TR(0x5ce860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce865ull));
TAIL_STATIC(0x502fd0u,502);
}
B5ce865:L5ce865:{c.instructions+=3;NFSU2_TR(0x5ce865);
__builtin_memmove((R+12),(R+0),4);
}
B5ce867:{NFSU2_TR(0x5ce867);
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
B5ce869:{NFSU2_TR(0x5ce869);
if(r1(R+518)){{goto L5ce89a;}}
}
B5ce86b:L5ce86b:{c.instructions+=1;NFSU2_TR(0x5ce86b);
{goto L5ce870;}
}
B5ce870:L5ce870:{c.instructions+=2;NFSU2_TR(0x5ce870);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5ce873:{NFSU2_TR(0x5ce873);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ce89a;}}
}
B5ce875:L5ce875:{c.instructions+=4;NFSU2_TR(0x5ce875);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce878:{NFSU2_TR(0x5ce878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce87a:{NFSU2_TR(0x5ce87a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce87b:{NFSU2_TR(0x5ce87b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce87eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce87e:L5ce87e:{c.instructions+=8;NFSU2_TR(0x5ce87e);
__builtin_memmove((R+0),(R+24),4);
}
B5ce880:{NFSU2_TR(0x5ce880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce882:{NFSU2_TR(0x5ce882);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ce885:{NFSU2_TR(0x5ce885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5ce887:{NFSU2_TR(0x5ce887);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5ce889:{NFSU2_TR(0x5ce889);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce88a:{NFSU2_TR(0x5ce88a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce88d:{NFSU2_TR(0x5ce88d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce892ull));
TAIL_STATIC(0x440ef0u,440);
}
B5ce892:L5ce892:{c.instructions+=4;NFSU2_TR(0x5ce892);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce895:{NFSU2_TR(0x5ce895);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5ce896:{NFSU2_TR(0x5ce896);
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
B5ce898:{NFSU2_TR(0x5ce898);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce870u);}goto L5ce870;}}
}
B5ce89a:L5ce89a:{c.instructions+=4;NFSU2_TR(0x5ce89a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ce89b:{NFSU2_TR(0x5ce89b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce89c:{NFSU2_TR(0x5ce89c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ce89d:{NFSU2_TR(0x5ce89d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce8a0:L5ce8a0:{c.instructions+=6;NFSU2_TR(0x5ce8a0);
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
B5ce8a3:{NFSU2_TR(0x5ce8a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce8a4:{NFSU2_TR(0x5ce8a4);
__builtin_memmove((R+20),gp(0x872b44),4);
}
B5ce8aa:{NFSU2_TR(0x5ce8aa);
w4(R+4,u32(0x872b44ull));
}
B5ce8af:{NFSU2_TR(0x5ce8af);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ce8b7:{NFSU2_TR(0x5ce8b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce8bcull));
TAIL_STATIC(0x502fd0u,502);
}
B5ce8bc:L5ce8bc:{c.instructions+=3;NFSU2_TR(0x5ce8bc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ce8be:{NFSU2_TR(0x5ce8be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce8c2:{NFSU2_TR(0x5ce8c2);
if(r1(R+518)){{goto L5ce968;}}
}
B5ce8c8:L5ce8c8:{c.instructions+=4;NFSU2_TR(0x5ce8c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce8c9:{NFSU2_TR(0x5ce8c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce8ca:{NFSU2_TR(0x5ce8ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce8cb:{NFSU2_TR(0x5ce8cb);
{goto L5ce8d1;}
}
B5ce8cd:L5ce8cd:{c.instructions+=1;NFSU2_TR(0x5ce8cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ce8d1:L5ce8d1:{c.instructions+=2;NFSU2_TR(0x5ce8d1);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xaull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5ce8d6:{NFSU2_TR(0x5ce8d6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ce965;}}
}
B5ce8dc:L5ce8dc:{c.instructions+=5;NFSU2_TR(0x5ce8dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce8df:{NFSU2_TR(0x5ce8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ce8e2:{NFSU2_TR(0x5ce8e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce8e6:{NFSU2_TR(0x5ce8e6);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5ce8ea:{NFSU2_TR(0x5ce8ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ce95b;}}
}
B5ce8ec:L5ce8ec:{c.instructions+=12;NFSU2_TR(0x5ce8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce8ef:{NFSU2_TR(0x5ce8ef);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ce8f4:{NFSU2_TR(0x5ce8f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ce8f6:{NFSU2_TR(0x5ce8f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce8f8:{NFSU2_TR(0x5ce8f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ce8fb:{NFSU2_TR(0x5ce8fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce8fc:{NFSU2_TR(0x5ce8fc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce8fe:{NFSU2_TR(0x5ce8fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce900:{NFSU2_TR(0x5ce900);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce902:{NFSU2_TR(0x5ce902);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce903:{NFSU2_TR(0x5ce903);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce904:{NFSU2_TR(0x5ce904);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce907ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce907:L5ce907:{c.instructions+=9;NFSU2_TR(0x5ce907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce909:{NFSU2_TR(0x5ce909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ce90b:{NFSU2_TR(0x5ce90b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce90d:{NFSU2_TR(0x5ce90d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ce911:{NFSU2_TR(0x5ce911);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce912:{NFSU2_TR(0x5ce912);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce914:{NFSU2_TR(0x5ce914);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce916:{NFSU2_TR(0x5ce916);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce917:{NFSU2_TR(0x5ce917);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce91aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce91a:L5ce91a:{c.instructions+=5;NFSU2_TR(0x5ce91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce91d:{NFSU2_TR(0x5ce91d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ce920:{NFSU2_TR(0x5ce920);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ce924:{NFSU2_TR(0x5ce924);
__builtin_memmove((R+8),(R+4),4);
}
B5ce926:{NFSU2_TR(0x5ce926);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5ce929:L5ce929:{c.instructions+=1;NFSU2_TR(0x5ce929);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5ce92b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce929u);}goto L5ce929;}
}
B5ce92b:L5ce92b:{c.instructions+=2;NFSU2_TR(0x5ce92b);
__builtin_memmove((R+4),(R+8),4);
}
B5ce92d:{NFSU2_TR(0x5ce92d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ce930:L5ce930:{c.instructions+=1;NFSU2_TR(0x5ce930);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5ce932;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce930u);}goto L5ce930;}
}
B5ce932:L5ce932:{c.instructions+=4;NFSU2_TR(0x5ce932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5ce934:{NFSU2_TR(0x5ce934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce936:{NFSU2_TR(0x5ce936);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce937:{NFSU2_TR(0x5ce937);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce93aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce93a:L5ce93a:{c.instructions+=6;NFSU2_TR(0x5ce93a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce93d:{NFSU2_TR(0x5ce93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce940:{NFSU2_TR(0x5ce940);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ce942:{NFSU2_TR(0x5ce942);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce943:{NFSU2_TR(0x5ce943);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce946:{NFSU2_TR(0x5ce946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce94bull));
TAIL_STATIC(0x440ef0u,440);
}
B5ce94b:L5ce94b:{c.instructions+=5;NFSU2_TR(0x5ce94b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce94f:{NFSU2_TR(0x5ce94f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ce952:{NFSU2_TR(0x5ce952);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ce953:{NFSU2_TR(0x5ce953);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce957:{NFSU2_TR(0x5ce957);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce95b:L5ce95b:{c.instructions+=2;NFSU2_TR(0x5ce95b);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ce95f:{NFSU2_TR(0x5ce95f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce8cdu);}goto L5ce8cd;}}
}
B5ce965:L5ce965:{c.instructions+=3;NFSU2_TR(0x5ce965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ce966:{NFSU2_TR(0x5ce966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ce967:{NFSU2_TR(0x5ce967);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ce968:L5ce968:{c.instructions+=3;NFSU2_TR(0x5ce968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ce969:{NFSU2_TR(0x5ce969);
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
B5ce96c:{NFSU2_TR(0x5ce96c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ce970:L5ce970:{c.instructions+=5;NFSU2_TR(0x5ce970);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce971:{NFSU2_TR(0x5ce971);
__builtin_memmove((R+24),gp(0x872ed0),4);
}
B5ce977:{NFSU2_TR(0x5ce977);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x872ed0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x872ed0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x872ed0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ce97d:{NFSU2_TR(0x5ce97d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce97e:{NFSU2_TR(0x5ce97e);
if(r1(R+518)){{goto L5ce9df;}}
}
B5ce980:L5ce980:{c.instructions+=1;NFSU2_TR(0x5ce980);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ce982:L5ce982:{c.instructions+=7;NFSU2_TR(0x5ce982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ce984:{NFSU2_TR(0x5ce984);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ce987:{NFSU2_TR(0x5ce987);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ce989:{NFSU2_TR(0x5ce989);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce98c:{NFSU2_TR(0x5ce98c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce98f:{NFSU2_TR(0x5ce98f);
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
B5ce991:{NFSU2_TR(0x5ce991);
if(r1(R+518)){{goto L5ce9b0;}}
}
B5ce993:L5ce993:{c.instructions+=3;NFSU2_TR(0x5ce993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce995:{NFSU2_TR(0x5ce995);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce996:{NFSU2_TR(0x5ce996);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce999ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce999:L5ce999:{c.instructions+=2;NFSU2_TR(0x5ce999);
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
B5ce99b:{NFSU2_TR(0x5ce99b);
if(r1(R+518)){{goto L5ce9ad;}}
}
B5ce99d:L5ce99d:{c.instructions+=1;NFSU2_TR(0x5ce99d);
__builtin_memmove((R+4),(R+4),4);
}
B5ce9a0:L5ce9a0:{c.instructions+=4;NFSU2_TR(0x5ce9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce9a3:{NFSU2_TR(0x5ce9a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ce9a5:{NFSU2_TR(0x5ce9a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce9a6:{NFSU2_TR(0x5ce9a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce9a9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce9a9:L5ce9a9:{c.instructions+=2;NFSU2_TR(0x5ce9a9);
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
B5ce9ab:{NFSU2_TR(0x5ce9ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce9a0u);}goto L5ce9a0;}}
}
B5ce9ad:L5ce9ad:{c.instructions+=1;NFSU2_TR(0x5ce9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce9b0:L5ce9b0:{c.instructions+=3;NFSU2_TR(0x5ce9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce9b3:{NFSU2_TR(0x5ce9b3);
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
B5ce9b5:{NFSU2_TR(0x5ce9b5);
if(r1(R+518)){{goto L5ce9d1;}}
}
B5ce9b7:L5ce9b7:{c.instructions+=3;NFSU2_TR(0x5ce9b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce9b9:{NFSU2_TR(0x5ce9b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce9ba:{NFSU2_TR(0x5ce9ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce9bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce9bd:L5ce9bd:{c.instructions+=2;NFSU2_TR(0x5ce9bd);
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
B5ce9bf:{NFSU2_TR(0x5ce9bf);
if(r1(R+518)){{goto L5ce9ce;}}
}
B5ce9c1:L5ce9c1:{c.instructions+=4;NFSU2_TR(0x5ce9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce9c4:{NFSU2_TR(0x5ce9c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ce9c6:{NFSU2_TR(0x5ce9c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce9c7:{NFSU2_TR(0x5ce9c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce9caull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce9ca:L5ce9ca:{c.instructions+=2;NFSU2_TR(0x5ce9ca);
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
B5ce9cc:{NFSU2_TR(0x5ce9cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce9c1u);}goto L5ce9c1;}}
}
B5ce9ce:L5ce9ce:{c.instructions+=1;NFSU2_TR(0x5ce9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ce9d1:L5ce9d1:{c.instructions+=3;NFSU2_TR(0x5ce9d1);
__builtin_memmove((R+24),gp(0x872ed0),4);
}
B5ce9d7:{NFSU2_TR(0x5ce9d7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x872ed0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x872ed0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x872ed0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ce9dd:{NFSU2_TR(0x5ce9dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce982u);}goto L5ce982;}}
}
B5ce9df:L5ce9df:{c.instructions+=3;NFSU2_TR(0x5ce9df);
__builtin_memmove((R+24),gp(0x870d28),4);
}
B5ce9e5:{NFSU2_TR(0x5ce9e5);
w4(R+4,u32(0x870d28ull));
}
B5ce9ea:{NFSU2_TR(0x5ce9ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce9efull));
TAIL_STATIC(0x502fd0u,502);
}
B5ce9ef:L5ce9ef:{c.instructions+=3;NFSU2_TR(0x5ce9ef);
__builtin_memmove((R+28),(R+0),4);
}
B5ce9f1:{NFSU2_TR(0x5ce9f1);
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
B5ce9f3:{NFSU2_TR(0x5ce9f3);
if(r1(R+518)){{goto L5cea19;}}
}
B5ce9f5:L5ce9f5:{c.instructions+=4;NFSU2_TR(0x5ce9f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ce9f8:{NFSU2_TR(0x5ce9f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ce9fa:{NFSU2_TR(0x5ce9fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ce9fb:{NFSU2_TR(0x5ce9fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ce9feull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ce9fe:L5ce9fe:{c.instructions+=8;NFSU2_TR(0x5ce9fe);
__builtin_memmove((R+0),(R+24),4);
}
B5cea00:{NFSU2_TR(0x5cea00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cea02:{NFSU2_TR(0x5cea02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cea05:{NFSU2_TR(0x5cea05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5cea07:{NFSU2_TR(0x5cea07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5cea09:{NFSU2_TR(0x5cea09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cea0a:{NFSU2_TR(0x5cea0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cea0d:{NFSU2_TR(0x5cea0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cea12ull));
TAIL_STATIC(0x440ef0u,440);
}
B5cea12:L5cea12:{c.instructions+=3;NFSU2_TR(0x5cea12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cea15:{NFSU2_TR(0x5cea15);
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
B5cea17:{NFSU2_TR(0x5cea17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce9f5u);}goto L5ce9f5;}}
}
B5cea19:L5cea19:{c.instructions+=3;NFSU2_TR(0x5cea19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cea1a:{NFSU2_TR(0x5cea1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cea1b:{NFSU2_TR(0x5cea1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cea20:L5cea20:{c.instructions+=2;NFSU2_TR(0x5cea20);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B5cea23:{NFSU2_TR(0x5cea23);
TAIL_STATIC(0x5cdf10u,5cd);
}
B5cea30:L5cea30:{c.instructions+=11;NFSU2_TR(0x5cea30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cea31:{NFSU2_TR(0x5cea31);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cea32:{NFSU2_TR(0x5cea32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cea33:{NFSU2_TR(0x5cea33);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cea37:{NFSU2_TR(0x5cea37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5cea39:{NFSU2_TR(0x5cea39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cea3c:{NFSU2_TR(0x5cea3c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5cea3e:{NFSU2_TR(0x5cea3e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cea40:{NFSU2_TR(0x5cea40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cea41:{NFSU2_TR(0x5cea41);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cea45:{NFSU2_TR(0x5cea45);
if(r1(R+518)){{goto L5cea4c;}}
}
B5cea47:L5cea47:{c.instructions+=2;NFSU2_TR(0x5cea47);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5cea4a:{NFSU2_TR(0x5cea4a);
if(r1(R+518)){{goto L5ceab1;}}
}
B5cea4c:L5cea4c:{c.instructions+=3;NFSU2_TR(0x5cea4c);
__builtin_memmove((R+0),gp(0x870918),4);
}
B5cea51:{NFSU2_TR(0x5cea51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cea52:{NFSU2_TR(0x5cea52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cea57ull));
TAIL_STATIC(0x440e50u,440);
}
B5cea57:L5cea57:{c.instructions+=3;NFSU2_TR(0x5cea57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cea5a:{NFSU2_TR(0x5cea5a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cea5c:{NFSU2_TR(0x5cea5c);
if(r1(R+518)){{goto L5cea71;}}
}
B5cea5e:L5cea5e:{c.instructions+=7;NFSU2_TR(0x5cea5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cea61:{NFSU2_TR(0x5cea61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5cea63:{NFSU2_TR(0x5cea63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cea66:{NFSU2_TR(0x5cea66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cea69:{NFSU2_TR(0x5cea69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cea6c:{NFSU2_TR(0x5cea6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cea6f:{NFSU2_TR(0x5cea6f);
{goto L5cea73;}
}
B5cea71:L5cea71:{c.instructions+=1;NFSU2_TR(0x5cea71);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5cea73:L5cea73:{c.instructions+=6;NFSU2_TR(0x5cea73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cea76:{NFSU2_TR(0x5cea76);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5cea79:{NFSU2_TR(0x5cea79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cea7c:{NFSU2_TR(0x5cea7c);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cea7e:{NFSU2_TR(0x5cea7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5cea82:{NFSU2_TR(0x5cea82);
if(r1(R+518)){{goto L5cea92;}}
}
B5cea84:L5cea84:{c.instructions+=4;NFSU2_TR(0x5cea84);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x17ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5cea87:{NFSU2_TR(0x5cea87);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5cea89:{NFSU2_TR(0x5cea89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8712f0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5cea90:{NFSU2_TR(0x5cea90);
{goto L5cea9e;}
}
B5cea92:L5cea92:{c.instructions+=3;NFSU2_TR(0x5cea92);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x17ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5cea95:{NFSU2_TR(0x5cea95);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5cea97:{NFSU2_TR(0x5cea97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x870d30ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5cea9e:L5cea9e:{c.instructions+=6;NFSU2_TR(0x5cea9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ceaa1:{NFSU2_TR(0x5ceaa1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5ceaa3:{NFSU2_TR(0x5ceaa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceaa6:{NFSU2_TR(0x5ceaa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceaa9:{NFSU2_TR(0x5ceaa9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ceaab:{NFSU2_TR(0x5ceaab);
s4(0x87094c,u32(u32(m4(0x87094c))+u32(u32(0x1ull))));
}
B5ceab1:L5ceab1:{c.instructions+=4;NFSU2_TR(0x5ceab1);
__builtin_memmove((R+4),gp(0x87091c),4);
}
B5ceab7:{NFSU2_TR(0x5ceab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ceaba:{NFSU2_TR(0x5ceaba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceabb:{NFSU2_TR(0x5ceabb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ceac0ull));
TAIL_STATIC(0x440e50u,440);
}
B5ceac0:L5ceac0:{c.instructions+=4;NFSU2_TR(0x5ceac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ceac4:{NFSU2_TR(0x5ceac4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ceac7:{NFSU2_TR(0x5ceac7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ceac9:{NFSU2_TR(0x5ceac9);
if(r1(R+518)){{goto L5ceafc;}}
}
B5ceacb:L5ceacb:{c.instructions+=14;NFSU2_TR(0x5ceacb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ceacf:{NFSU2_TR(0x5ceacf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cead3:{NFSU2_TR(0x5cead3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cead6:{NFSU2_TR(0x5cead6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ceada:{NFSU2_TR(0x5ceada);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceadd:{NFSU2_TR(0x5ceadd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ceae1:{NFSU2_TR(0x5ceae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceae4:{NFSU2_TR(0x5ceae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ceaeb:{NFSU2_TR(0x5ceaeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceaee:{NFSU2_TR(0x5ceaee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceaf1:{NFSU2_TR(0x5ceaf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceaf4:{NFSU2_TR(0x5ceaf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceaf7:{NFSU2_TR(0x5ceaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceafa:{NFSU2_TR(0x5ceafa);
{goto L5ceafe;}
}
B5ceafc:L5ceafc:{c.instructions+=1;NFSU2_TR(0x5ceafc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ceafe:L5ceafe:{c.instructions+=19;NFSU2_TR(0x5ceafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ceb01:{NFSU2_TR(0x5ceb01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5ceb03:{NFSU2_TR(0x5ceb03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ceb06:{NFSU2_TR(0x5ceb06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceb09:{NFSU2_TR(0x5ceb09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ceb0b:{NFSU2_TR(0x5ceb0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceb0e:{NFSU2_TR(0x5ceb0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ceb11:{NFSU2_TR(0x5ceb11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ceb14:{NFSU2_TR(0x5ceb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceb17:{NFSU2_TR(0x5ceb17);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5ceb18:{NFSU2_TR(0x5ceb18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceb1b:{NFSU2_TR(0x5ceb1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ceb1e:{NFSU2_TR(0x5ceb1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ceb1f:{NFSU2_TR(0x5ceb1f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ceb21:{NFSU2_TR(0x5ceb21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceb24:{NFSU2_TR(0x5ceb24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ceb25:{NFSU2_TR(0x5ceb25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ceb26:{NFSU2_TR(0x5ceb26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ceb27:{NFSU2_TR(0x5ceb27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ceb30:L5ceb30:{c.instructions+=9;NFSU2_TR(0x5ceb30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceb31:{NFSU2_TR(0x5ceb31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceb32:{NFSU2_TR(0x5ceb32);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ceb36:{NFSU2_TR(0x5ceb36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5ceb38:{NFSU2_TR(0x5ceb38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ceb3b:{NFSU2_TR(0x5ceb3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ceb3d:{NFSU2_TR(0x5ceb3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceb3e:{NFSU2_TR(0x5ceb3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ceb42:{NFSU2_TR(0x5ceb42);
if(r1(R+518)){{goto L5ceb49;}}
}
B5ceb44:L5ceb44:{c.instructions+=2;NFSU2_TR(0x5ceb44);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ceb47:{NFSU2_TR(0x5ceb47);
if(r1(R+518)){{goto L5cebb6;}}
}
B5ceb49:L5ceb49:{c.instructions+=3;NFSU2_TR(0x5ceb49);
__builtin_memmove((R+0),gp(0x870918),4);
}
B5ceb4e:{NFSU2_TR(0x5ceb4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceb4f:{NFSU2_TR(0x5ceb4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ceb54ull));
TAIL_STATIC(0x440e50u,440);
}
B5ceb54:L5ceb54:{c.instructions+=3;NFSU2_TR(0x5ceb54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ceb57:{NFSU2_TR(0x5ceb57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ceb59:{NFSU2_TR(0x5ceb59);
if(r1(R+518)){{goto L5ceb76;}}
}
B5ceb5b:L5ceb5b:{c.instructions+=7;NFSU2_TR(0x5ceb5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ceb5e:{NFSU2_TR(0x5ceb5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ceb60:{NFSU2_TR(0x5ceb60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceb63:{NFSU2_TR(0x5ceb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceb66:{NFSU2_TR(0x5ceb66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ceb6d:{NFSU2_TR(0x5ceb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ceb74:{NFSU2_TR(0x5ceb74);
{goto L5ceb78;}
}
B5ceb76:L5ceb76:{c.instructions+=1;NFSU2_TR(0x5ceb76);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ceb78:L5ceb78:{c.instructions+=6;NFSU2_TR(0x5ceb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceb7b:{NFSU2_TR(0x5ceb7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5ceb7e:{NFSU2_TR(0x5ceb7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ceb81:{NFSU2_TR(0x5ceb81);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ceb83:{NFSU2_TR(0x5ceb83);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5ceb87:{NFSU2_TR(0x5ceb87);
if(r1(R+518)){{goto L5ceb97;}}
}
B5ceb89:L5ceb89:{c.instructions+=4;NFSU2_TR(0x5ceb89);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x17ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5ceb8c:{NFSU2_TR(0x5ceb8c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5ceb8e:{NFSU2_TR(0x5ceb8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8712f0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5ceb95:{NFSU2_TR(0x5ceb95);
{goto L5ceba3;}
}
B5ceb97:L5ceb97:{c.instructions+=3;NFSU2_TR(0x5ceb97);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x17ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5ceb9a:{NFSU2_TR(0x5ceb9a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5ceb9c:{NFSU2_TR(0x5ceb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x870d30ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5ceba3:L5ceba3:{c.instructions+=6;NFSU2_TR(0x5ceba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ceba6:{NFSU2_TR(0x5ceba6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5ceba8:{NFSU2_TR(0x5ceba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cebab:{NFSU2_TR(0x5cebab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cebae:{NFSU2_TR(0x5cebae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5cebb0:{NFSU2_TR(0x5cebb0);
s4(0x87094c,u32(u32(m4(0x87094c))+u32(u32(0x1ull))));
}
B5cebb6:L5cebb6:{c.instructions+=4;NFSU2_TR(0x5cebb6);
__builtin_memmove((R+4),gp(0x87091c),4);
}
B5cebbc:{NFSU2_TR(0x5cebbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cebbf:{NFSU2_TR(0x5cebbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cebc0:{NFSU2_TR(0x5cebc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cebc5ull));
TAIL_STATIC(0x440e50u,440);
}
B5cebc5:L5cebc5:{c.instructions+=4;NFSU2_TR(0x5cebc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5cebc9:{NFSU2_TR(0x5cebc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cebcc:{NFSU2_TR(0x5cebcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cebce:{NFSU2_TR(0x5cebce);
if(r1(R+518)){{goto L5cec09;}}
}
B5cebd0:L5cebd0:{c.instructions+=16;NFSU2_TR(0x5cebd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cebd4:{NFSU2_TR(0x5cebd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cebd8:{NFSU2_TR(0x5cebd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cebdb:{NFSU2_TR(0x5cebdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cebdf:{NFSU2_TR(0x5cebdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cebe2:{NFSU2_TR(0x5cebe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cebe6:{NFSU2_TR(0x5cebe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cebe9:{NFSU2_TR(0x5cebe9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cebed:{NFSU2_TR(0x5cebed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cebf0:{NFSU2_TR(0x5cebf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cebf4:{NFSU2_TR(0x5cebf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cebf7:{NFSU2_TR(0x5cebf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cebfe:{NFSU2_TR(0x5cebfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cec01:{NFSU2_TR(0x5cec01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cec04:{NFSU2_TR(0x5cec04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cec07:{NFSU2_TR(0x5cec07);
{goto L5cec0b;}
}
B5cec09:L5cec09:{c.instructions+=1;NFSU2_TR(0x5cec09);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5cec0b:L5cec0b:{c.instructions+=18;NFSU2_TR(0x5cec0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cec0e:{NFSU2_TR(0x5cec0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5cec10:{NFSU2_TR(0x5cec10);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cec13:{NFSU2_TR(0x5cec13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cec16:{NFSU2_TR(0x5cec16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5cec18:{NFSU2_TR(0x5cec18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cec1b:{NFSU2_TR(0x5cec1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cec1e:{NFSU2_TR(0x5cec1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cec21:{NFSU2_TR(0x5cec21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cec24:{NFSU2_TR(0x5cec24);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5cec25:{NFSU2_TR(0x5cec25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cec28:{NFSU2_TR(0x5cec28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cec2b:{NFSU2_TR(0x5cec2b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cec2d:{NFSU2_TR(0x5cec2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cec2e:{NFSU2_TR(0x5cec2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cec31:{NFSU2_TR(0x5cec31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cec32:{NFSU2_TR(0x5cec32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cec33:{NFSU2_TR(0x5cec33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cec40:L5cec40:{c.instructions+=14;NFSU2_TR(0x5cec40);
__builtin_memmove((R+0),gp(0x870958),4);
}
B5cec45:{NFSU2_TR(0x5cec45);
__builtin_memmove((R+4),gp(0x870964),4);
}
B5cec4b:{NFSU2_TR(0x5cec4b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cec4d:{NFSU2_TR(0x5cec4d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cec4f:{NFSU2_TR(0x5cec4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5cec51:{NFSU2_TR(0x5cec51);
__builtin_memmove((R+8),gp(0x870960),4);
}
B5cec57:{NFSU2_TR(0x5cec57);
__builtin_memmove((R+0),gp(0x86eb5c),4);
}
B5cec5c:{NFSU2_TR(0x5cec5c);
__builtin_memmove((R+4),gp(0x870958),4);
}
B5cec62:{NFSU2_TR(0x5cec62);
u8 U[4];
w4(U+0,u32(0x872bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cec67:{NFSU2_TR(0x5cec67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cec68:{NFSU2_TR(0x5cec68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cec69:{NFSU2_TR(0x5cec69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cec6b:{NFSU2_TR(0x5cec6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cec6c:{NFSU2_TR(0x5cec6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cec71ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cea30u);}goto L5cea30;}
}
B5cec71:L5cec71:{c.instructions+=3;NFSU2_TR(0x5cec71);
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
B5cec74:{NFSU2_TR(0x5cec74);
w1(R+0,u8(0x1ull));
}
B5cec76:{NFSU2_TR(0x5cec76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cec80:L5cec80:{c.instructions+=1;NFSU2_TR(0x5cec80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cec85ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce4c0u);}goto L5ce4c0;}
}
B5cec85:L5cec85:{c.instructions+=1;NFSU2_TR(0x5cec85);
TAIL_STATIC(0x5bf1c0u,5bf);
}
B5cec90:L5cec90:{c.instructions+=5;NFSU2_TR(0x5cec90);
__builtin_memmove((R+0),gp(0x8709cc),4);
}
B5cec95:{NFSU2_TR(0x5cec95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cec96:{NFSU2_TR(0x5cec96);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5cec98:{NFSU2_TR(0x5cec98);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cec9a:{NFSU2_TR(0x5cec9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cecb5;}}
}
B5cec9c:L5cec9c:{c.instructions+=2;NFSU2_TR(0x5cec9c);
u8 U[4];
w4(U+0,u32(0x86c120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceca1:{NFSU2_TR(0x5ceca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ceca6ull));
TAIL_STATIC(0x5cde40u,5cd);
}
B5ceca6:L5ceca6:{c.instructions+=2;NFSU2_TR(0x5ceca6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ceca9:{NFSU2_TR(0x5ceca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cecaeull));
TAIL_STATIC(0x75bed4u,75b);
}
B5cecae:L5cecae:{c.instructions+=2;NFSU2_TR(0x5cecae);
__builtin_memmove(gp(0x87099c),(R+0),4);
}
B5cecb3:{NFSU2_TR(0x5cecb3);
{goto L5cecbb;}
}
B5cecb5:L5cecb5:{c.instructions+=1;NFSU2_TR(0x5cecb5);
__builtin_memmove(gp(0x87099c),(R+24),4);
}
B5cecbb:L5cecbb:{c.instructions+=3;NFSU2_TR(0x5cecbb);
__builtin_memmove((R+0),gp(0x86c548),4);
}
B5cecc0:{NFSU2_TR(0x5cecc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10deull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cecc5:{NFSU2_TR(0x5cecc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cecf9;}}
}
B5cecc7:L5cecc7:{c.instructions+=3;NFSU2_TR(0x5cecc7);
__builtin_memmove((R+0),gp(0x86c54c),4);
}
B5ceccc:{NFSU2_TR(0x5ceccc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x322ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cecd1:{NFSU2_TR(0x5cecd1);
if(r1(R+518)){{goto L5cecda;}}
}
B5cecd3:L5cecd3:{c.instructions+=2;NFSU2_TR(0x5cecd3);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x312ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x312ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x312ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cecd8:{NFSU2_TR(0x5cecd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ced12;}}
}
B5cecda:L5cecda:{c.instructions+=5;NFSU2_TR(0x5cecda);
{u32 ea_=u32(u32(8849820u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5cece0:{NFSU2_TR(0x5cece0);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5cece6:{NFSU2_TR(0x5cece6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cece8:{NFSU2_TR(0x5cece8);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ceceb:{NFSU2_TR(0x5ceceb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ced12;}}
}
B5ceced:L5ceced:{c.instructions+=2;NFSU2_TR(0x5ceced);
s4(0x87099c,u32(0x3ull));
}
B5cecf7:{NFSU2_TR(0x5cecf7);
{goto L5ced12;}
}
B5cecf9:L5cecf9:{c.instructions+=2;NFSU2_TR(0x5cecf9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1039ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1039ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1039ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cecfe:{NFSU2_TR(0x5cecfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ced12;}}
}
B5ced00:L5ced00:{c.instructions+=2;NFSU2_TR(0x5ced00);
u8 U[14];
__builtin_memmove((U+6),gp(0x86c54c),4);
w1(R+512,u8((r4(U+6))<(u32(0x6330ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6330ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6330ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ced0a:{NFSU2_TR(0x5ced0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ced12;}}
}
B5ced0c:L5ced0c:{c.instructions+=1;NFSU2_TR(0x5ced0c);
__builtin_memmove(gp(0x87099c),(R+24),4);
}
B5ced12:L5ced12:{c.instructions+=1;NFSU2_TR(0x5ced12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ced17ull));
TAIL_STATIC(0x5c0d20u,5c0);
}
B5ced17:L5ced17:{c.instructions+=2;NFSU2_TR(0x5ced17);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ced1c:{NFSU2_TR(0x5ced1c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ced2e;}}
}
B5ced1e:L5ced1e:{c.instructions+=1;NFSU2_TR(0x5ced1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ced23ull));
TAIL_STATIC(0x5bf5a0u,5bf);
}
B5ced23:L5ced23:{c.instructions+=2;NFSU2_TR(0x5ced23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ced25:{NFSU2_TR(0x5ced25);
if(r1(R+518)){{goto L5ced2e;}}
}
B5ced27:L5ced27:{c.instructions+=1;NFSU2_TR(0x5ced27);
s1(0x8709c9,u8(0x1ull));
}
B5ced2e:L5ced2e:{c.instructions+=2;NFSU2_TR(0x5ced2e);
if(r4(MODV+28)){goto B5ced34;}
__builtin_memmove(gp(0x870d1c),(R+24),4);
}
B5ced34:{NFSU2_TR(0x5ced34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ced39ull));
TAIL_STATIC(0x5be870u,5be);
}
B5ced39:L5ced39:{c.instructions+=2;NFSU2_TR(0x5ced39);
u8 U[8];
__builtin_memmove((U+0),gp(0x86c548),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1002ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ced43:{NFSU2_TR(0x5ced43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ced54;}}
}
B5ced45:L5ced45:{c.instructions+=1;NFSU2_TR(0x5ced45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ced4aull));
TAIL_STATIC(0x5bf5a0u,5bf);
}
B5ced4a:L5ced4a:{c.instructions+=2;NFSU2_TR(0x5ced4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ced4c:{NFSU2_TR(0x5ced4c);
if(r1(R+518)){{goto L5ced54;}}
}
B5ced4e:L5ced4e:{c.instructions+=1;NFSU2_TR(0x5ced4e);
__builtin_memmove(gp(0x870d08),(R+24),4);
}
B5ced54:L5ced54:{c.instructions+=2;NFSU2_TR(0x5ced54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ced55:{NFSU2_TR(0x5ced55);
TAIL_STATIC(0x5be690u,5be);
}
B5ced60:L5ced60:{c.instructions+=4;NFSU2_TR(0x5ced60);
__builtin_memmove((R+0),gp(0x870998),4);
}
B5ced65:{NFSU2_TR(0x5ced65);
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
B5ced67:{NFSU2_TR(0x5ced67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ced68:{NFSU2_TR(0x5ced68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cedcf;}}
}
B5ced6a:L5ced6a:{c.instructions+=5;NFSU2_TR(0x5ced6a);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ced6f:{NFSU2_TR(0x5ced6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ced71:{NFSU2_TR(0x5ced71);
u8 U[4];
w4(U+0,u32(0x86e5c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ced76:{NFSU2_TR(0x5ced76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ced77:{NFSU2_TR(0x5ced77);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ced7aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ced7a:L5ced7a:{c.instructions+=1;NFSU2_TR(0x5ced7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ced7full));
TAIL_STATIC(0x5be200u,5be);
}
B5ced7f:L5ced7f:{c.instructions+=3;NFSU2_TR(0x5ced7f);
__builtin_memmove((R+0),gp(0x870d20),4);
}
B5ced84:{NFSU2_TR(0x5ced84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ced86:{NFSU2_TR(0x5ced86);
if(r1(R+518)){{goto L5ced91;}}
}
B5ced88:L5ced88:{c.instructions+=3;NFSU2_TR(0x5ced88);
__builtin_memmove((R+0),gp(0x8709cc),4);
}
B5ced8d:{NFSU2_TR(0x5ced8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ced8f:{NFSU2_TR(0x5ced8f);
if(r1(R+518)){{goto L5ceda4;}}
}
B5ced91:L5ced91:{c.instructions+=1;NFSU2_TR(0x5ced91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ced96ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cec90u);}goto L5cec90;}
}
B5ced96:L5ced96:{c.instructions+=3;NFSU2_TR(0x5ced96);
__builtin_memmove((R+0),gp(0x8709cc),4);
}
B5ced9b:{NFSU2_TR(0x5ced9b);
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
B5ced9d:{NFSU2_TR(0x5ced9d);
if(r1(R+518)){{goto L5ceda4;}}
}
B5ced9f:L5ced9f:{c.instructions+=1;NFSU2_TR(0x5ced9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ceda4ull));
TAIL_STATIC(0x5beea0u,5be);
}
B5ceda4:L5ceda4:{c.instructions+=3;NFSU2_TR(0x5ceda4);
__builtin_memmove((R+0),gp(0x86e668),4);
}
B5ceda9:{NFSU2_TR(0x5ceda9);
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
B5cedac:{NFSU2_TR(0x5cedac);
if(r1(R+518)){{goto L5cedcf;}}
}
B5cedae:L5cedae:{c.instructions+=3;NFSU2_TR(0x5cedae);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5cedb0:{NFSU2_TR(0x5cedb0);
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
B5cedb2:{NFSU2_TR(0x5cedb2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5cedcf;}}
}
B5cedb4:L5cedb4:{c.instructions+=6;NFSU2_TR(0x5cedb4);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cedb9:{NFSU2_TR(0x5cedb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cedbb:{NFSU2_TR(0x5cedbb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cedbd:{NFSU2_TR(0x5cedbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cedbe:{NFSU2_TR(0x5cedbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cedbf:{NFSU2_TR(0x5cedbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cedc5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cedc5:L5cedc5:{c.instructions+=4;NFSU2_TR(0x5cedc5);
__builtin_memmove((R+0),gp(0x86e668),4);
}
B5cedca:{NFSU2_TR(0x5cedca);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5cedcb:{NFSU2_TR(0x5cedcb);
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
B5cedcd:{NFSU2_TR(0x5cedcd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cedb4u);}goto L5cedb4;}}
}
B5cedcf:L5cedcf:{c.instructions+=3;NFSU2_TR(0x5cedcf);
s4(0x870998,u32(0x1ull));
}
B5cedd9:{NFSU2_TR(0x5cedd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cedda:{NFSU2_TR(0x5cedda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cede0:L5cede0:{c.instructions+=12;NFSU2_TR(0x5cede0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc4ull))));
}
B5cede6:{NFSU2_TR(0x5cede6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cede7:{NFSU2_TR(0x5cede7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cede8:{NFSU2_TR(0x5cede8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cede9:{NFSU2_TR(0x5cede9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cedea:{NFSU2_TR(0x5cedea);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cedf1:{NFSU2_TR(0x5cedf1);
u8 U[4];
w4(U+0,u32(0x871b94ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5cedf7:{NFSU2_TR(0x5cedf7);
__builtin_memmove((R+0),gp(0x8709e4),4);
}
B5cedfc:{NFSU2_TR(0x5cedfc);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5cedfe:{NFSU2_TR(0x5cedfe);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cee00:{NFSU2_TR(0x5cee00);
__builtin_memmove(gp(0x8709e8),(R+28),4);
}
B5cee06:{NFSU2_TR(0x5cee06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cee80;}}
}
B5cee08:L5cee08:{c.instructions+=3;NFSU2_TR(0x5cee08);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cee0f:{NFSU2_TR(0x5cee0f);
__builtin_memmove((R+4),(R+24),4);
}
B5cee11:{NFSU2_TR(0x5cee11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cee16ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B5cee16:L5cee16:{c.instructions+=3;NFSU2_TR(0x5cee16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5cee19:{NFSU2_TR(0x5cee19);
__builtin_memmove((R+4),(R+24),4);
}
B5cee1b:{NFSU2_TR(0x5cee1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cee20ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B5cee20:L5cee20:{c.instructions+=3;NFSU2_TR(0x5cee20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cee23:{NFSU2_TR(0x5cee23);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cee27:{NFSU2_TR(0x5cee27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cee2cull));
TAIL_STATIC(0x6f4aa0u,6f4);
}
B5cee2c:L5cee2c:{c.instructions+=3;NFSU2_TR(0x5cee2c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cee2e:{NFSU2_TR(0x5cee2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cee36:{NFSU2_TR(0x5cee36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cee3bull));
TAIL_STATIC(0x6f5380u,6f5);
}
B5cee3b:L5cee3b:{c.instructions+=12;NFSU2_TR(0x5cee3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cee3f:{NFSU2_TR(0x5cee3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5cee43:{NFSU2_TR(0x5cee43);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cee47:{NFSU2_TR(0x5cee47);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5cee4b:{NFSU2_TR(0x5cee4b);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cee50:{NFSU2_TR(0x5cee50);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x80ull))));
}
B5cee56:{NFSU2_TR(0x5cee56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cee57:{NFSU2_TR(0x5cee57);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cee5b:{NFSU2_TR(0x5cee5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cee5f:{NFSU2_TR(0x5cee5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cee63:{NFSU2_TR(0x5cee63);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cee6e:{NFSU2_TR(0x5cee6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cee73ull));
TAIL_STATIC(0x6f5320u,6f5);
}
B5cee73:L5cee73:{c.instructions+=3;NFSU2_TR(0x5cee73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5cee76:{NFSU2_TR(0x5cee76);
__builtin_memmove(gp(0x8709e4),(R+0),4);
}
B5cee7b:{NFSU2_TR(0x5cee7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cee80ull));
TAIL_STATIC(0x7004f7u,700);
}
B5cee80:L5cee80:{c.instructions+=4;NFSU2_TR(0x5cee80);
__builtin_memmove((R+24),gp(0x8709e4),4);
}
B5cee86:{NFSU2_TR(0x5cee86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cee89:{NFSU2_TR(0x5cee89);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cee8b:{NFSU2_TR(0x5cee8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cee93;}}
}
B5cee8d:L5cee8d:{c.instructions+=2;NFSU2_TR(0x5cee8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cee91:{NFSU2_TR(0x5cee91);
{goto L5cee99;}
}
B5cee93:L5cee93:{c.instructions+=2;NFSU2_TR(0x5cee93);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5cee95:{NFSU2_TR(0x5cee95);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cee99:L5cee99:{c.instructions+=2;NFSU2_TR(0x5cee99);
__builtin_memmove((R+4),(R+24),4);
}
B5cee9b:{NFSU2_TR(0x5cee9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ceea0ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B5ceea0:L5ceea0:{c.instructions+=3;NFSU2_TR(0x5ceea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ceea3:{NFSU2_TR(0x5ceea3);
__builtin_memmove((R+4),(R+24),4);
}
B5ceea5:{NFSU2_TR(0x5ceea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ceeaaull));
TAIL_STATIC(0x6f4820u,6f4);
}
B5ceeaa:L5ceeaa:{c.instructions+=14;NFSU2_TR(0x5ceeaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ceead:{NFSU2_TR(0x5ceead);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ceeb1:{NFSU2_TR(0x5ceeb1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceeb2:{NFSU2_TR(0x5ceeb2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceeb3:{NFSU2_TR(0x5ceeb3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceeb4:{NFSU2_TR(0x5ceeb4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceeb5:{NFSU2_TR(0x5ceeb5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceeb6:{NFSU2_TR(0x5ceeb6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceeb8:{NFSU2_TR(0x5ceeb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceeb9:{NFSU2_TR(0x5ceeb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceeba:{NFSU2_TR(0x5ceeba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceebb:{NFSU2_TR(0x5ceebb);
u8 U[4];
w4(U+0,u32(0x7a4124ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ceec0:{NFSU2_TR(0x5ceec0);
__builtin_memmove((R+4),(R+28),4);
}
B5ceec2:{NFSU2_TR(0x5ceec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ceec7ull));
TAIL_STATIC(0x48b220u,48b);
}
B5ceec7:L5ceec7:{c.instructions+=6;NFSU2_TR(0x5ceec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ceec9:{NFSU2_TR(0x5ceec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ceed0:{NFSU2_TR(0x5ceed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceed3:{NFSU2_TR(0x5ceed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceed6:{NFSU2_TR(0x5ceed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ceed9:{NFSU2_TR(0x5ceed9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ceedeull));
TAIL_STATIC(0x6f625du,6f6);
}
B5ceede:L5ceede:{c.instructions+=1;NFSU2_TR(0x5ceede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ceee3ull));
TAIL_STATIC(0x6f62e3u,6f6);
}
B5ceee3:L5ceee3:{c.instructions+=2;NFSU2_TR(0x5ceee3);
__builtin_memmove((R+4),(R+28),4);
}
B5ceee5:{NFSU2_TR(0x5ceee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ceeeaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ce170u);}goto L5ce170;}
}
B5ceeea:L5ceeea:{c.instructions+=6;NFSU2_TR(0x5ceeea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ceeeb:{NFSU2_TR(0x5ceeeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ceeec:{NFSU2_TR(0x5ceeec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ceeed:{NFSU2_TR(0x5ceeed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ceeee:{NFSU2_TR(0x5ceeee);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xc4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xc4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xc4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ceef4:{NFSU2_TR(0x5ceef4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cef00:L5cef00:{c.instructions+=7;NFSU2_TR(0x5cef00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5cef03:{NFSU2_TR(0x5cef03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cef04:{NFSU2_TR(0x5cef04);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5cef08:{NFSU2_TR(0x5cef08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cef0a:{NFSU2_TR(0x5cef0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cef0b:{NFSU2_TR(0x5cef0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cef0c:{NFSU2_TR(0x5cef0c);
if(r1(R+518)){{goto L5ceff4;}}
}
B5cef12:L5cef12:{c.instructions+=30;NFSU2_TR(0x5cef12);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5cef14:{NFSU2_TR(0x5cef14);
w1(R+8,u8(0x49ull));
}
B5cef16:{NFSU2_TR(0x5cef16);
w1(R+4,u8(0x44ull));
}
B5cef18:{NFSU2_TR(0x5cef18);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef1c:{NFSU2_TR(0x5cef1c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef20:{NFSU2_TR(0x5cef20);
w1(R+12,u8(0x56ull));
}
B5cef22:{NFSU2_TR(0x5cef22);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef26:{NFSU2_TR(0x5cef26);
u8 U[5];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef2a:{NFSU2_TR(0x5cef2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cef2e:{NFSU2_TR(0x5cef2e);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5cef33:{NFSU2_TR(0x5cef33);
u8 U[6];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5cef38:{NFSU2_TR(0x5cef38);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef3c:{NFSU2_TR(0x5cef3c);
u8 U[5];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef40:{NFSU2_TR(0x5cef40);
u8 U[6];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5cef45:{NFSU2_TR(0x5cef45);
u8 U[6];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5cef4a:{NFSU2_TR(0x5cef4a);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef4e:{NFSU2_TR(0x5cef4e);
u8 U[5];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef52:{NFSU2_TR(0x5cef52);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef56:{NFSU2_TR(0x5cef56);
u8 U[5];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef5a:{NFSU2_TR(0x5cef5a);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef5e:{NFSU2_TR(0x5cef5e);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef62:{NFSU2_TR(0x5cef62);
u8 U[5];
w4(U+0,u32(u32(u32(0x2bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef66:{NFSU2_TR(0x5cef66);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5cef69:{NFSU2_TR(0x5cef69);
u8 U[5];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cef6d:{NFSU2_TR(0x5cef6d);
w4(R+4,u32(0x4ull));
}
B5cef72:{NFSU2_TR(0x5cef72);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5cef76:{NFSU2_TR(0x5cef76);
__builtin_memmove((R+24),(R+0),4);
}
B5cef78:{NFSU2_TR(0x5cef78);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5cef7a:{NFSU2_TR(0x5cef7a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x802050dull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cef82:{NFSU2_TR(0x5cef82);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
w1(U+4,u8(0x50ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cef87:L5cef87:{c.instructions+=1;NFSU2_TR(0x5cef87);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5cef89;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cef87u);}goto L5cef87;}}
}
B5cef89:L5cef89:{c.instructions+=3;NFSU2_TR(0x5cef89);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x805050dull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cef91:{NFSU2_TR(0x5cef91);
u8 U[5];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
w1(U+4,u8(0x50ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cef96:{NFSU2_TR(0x5cef96);
if(r1(R+518)){{goto L5cefd3;}}
}
B5cef98:L5cef98:{c.instructions+=4;NFSU2_TR(0x5cef98);
__builtin_memmove((R+24),(R+0),4);
}
B5cef9a:{NFSU2_TR(0x5cef9a);
w4(R+4,u32(0x4ull));
}
B5cef9f:{NFSU2_TR(0x5cef9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5cefa3:{NFSU2_TR(0x5cefa3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5cefa5:L5cefa5:{c.instructions+=1;NFSU2_TR(0x5cefa5);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5cefa7;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cefa5u);}goto L5cefa5;}}
}
B5cefa7:L5cefa7:{c.instructions+=1;NFSU2_TR(0x5cefa7);
if(r1(R+518)){{goto L5cefd3;}}
}
B5cefa9:L5cefa9:{c.instructions+=5;NFSU2_TR(0x5cefa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5cefaf:{NFSU2_TR(0x5cefaf);
w4(R+28,u32(0x7a414cull));
}
B5cefb4:{NFSU2_TR(0x5cefb4);
__builtin_memmove((R+24),(R+0),4);
}
B5cefb6:{NFSU2_TR(0x5cefb6);
w4(R+4,u32(0x15ull));
}
B5cefbb:{NFSU2_TR(0x5cefbb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5cefbd:L5cefbd:{c.instructions+=1;NFSU2_TR(0x5cefbd);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5cefbf;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cefbdu);}goto L5cefbd;}}
}
B5cefbf:L5cefbf:{c.instructions+=1;NFSU2_TR(0x5cefbf);
if(r1(R+518)){{goto L5cefd3;}}
}
B5cefc1:L5cefc1:{c.instructions+=4;NFSU2_TR(0x5cefc1);
__builtin_memmove((R+24),(R+0),4);
}
B5cefc3:{NFSU2_TR(0x5cefc3);
w4(R+28,u32(0x7a4134ull));
}
B5cefc8:{NFSU2_TR(0x5cefc8);
w4(R+4,u32(0x16ull));
}
B5cefcd:{NFSU2_TR(0x5cefcd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5cefcf:L5cefcf:{c.instructions+=1;NFSU2_TR(0x5cefcf);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5cefd1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cefcfu);}goto L5cefcf;}}
}
B5cefd1:L5cefd1:{c.instructions+=1;NFSU2_TR(0x5cefd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cefe1;}}
}
B5cefd3:L5cefd3:{c.instructions+=6;NFSU2_TR(0x5cefd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cefd4:{NFSU2_TR(0x5cefd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cefd5:{NFSU2_TR(0x5cefd5);
w4(R+0,u32(0x1ull));
}
B5cefda:{NFSU2_TR(0x5cefda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cefdb:{NFSU2_TR(0x5cefdb);
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
B5cefde:{NFSU2_TR(0x5cefde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cefe1:L5cefe1:{c.instructions+=3;NFSU2_TR(0x5cefe1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cefe2:{NFSU2_TR(0x5cefe2);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cefe6:{NFSU2_TR(0x5cefe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cefebull));
TAIL_STATIC(0x5cd1f0u,5cd);
}
B5cefeb:L5cefeb:{c.instructions+=5;NFSU2_TR(0x5cefeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cefec:{NFSU2_TR(0x5cefec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cefed:{NFSU2_TR(0x5cefed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cefee:{NFSU2_TR(0x5cefee);
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
B5ceff1:{NFSU2_TR(0x5ceff1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ceff4:L5ceff4:{c.instructions+=6;NFSU2_TR(0x5ceff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ceff5:{NFSU2_TR(0x5ceff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ceff6:{NFSU2_TR(0x5ceff6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ceff8:{NFSU2_TR(0x5ceff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ceff9:{NFSU2_TR(0x5ceff9);
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
B5ceffc:{NFSU2_TR(0x5ceffc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x5ce,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
