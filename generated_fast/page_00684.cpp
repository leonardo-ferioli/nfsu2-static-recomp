#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_64f(u8* __restrict R,Cpu& c);
u32 body_65a(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_674(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_678(u8* __restrict R,Cpu& c);
u32 body_681(u8* __restrict R,Cpu& c);
u32 body_682(u8* __restrict R,Cpu& c);
u32 body_685(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_6ac(u8* __restrict R,Cpu& c);
u32 body_6af(u8* __restrict R,Cpu& c);
u32 body_6ba(u8* __restrict R,Cpu& c);
u32 body_6bd(u8* __restrict R,Cpu& c);
u32 body_6c0(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x684,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x684,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_684(u8* __restrict R,Cpu& c);
u32 page_684(Cpu& c){return body_684(c.regs.data(),c);}
__attribute__((noinline)) u32 body_684(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x684000:goto L684000;
case 0x684003:c.instructions+=3;goto B684003;
case 0x684006:c.instructions+=2;goto B684006;
case 0x684009:c.instructions+=1;goto B684009;
case 0x68400e:goto L68400e;
case 0x684010:c.instructions+=2;goto B684010;
case 0x684012:c.instructions+=1;goto B684012;
case 0x684018:goto L684018;
case 0x68401b:c.instructions+=4;goto B68401b;
case 0x68401e:c.instructions+=3;goto B68401e;
case 0x684021:c.instructions+=2;goto B684021;
case 0x684024:c.instructions+=1;goto B684024;
case 0x684027:goto L684027;
case 0x68402a:c.instructions+=3;goto B68402a;
case 0x68402d:c.instructions+=2;goto B68402d;
case 0x684031:c.instructions+=1;goto B684031;
case 0x684037:goto L684037;
case 0x68403a:c.instructions+=10;goto B68403a;
case 0x68403d:c.instructions+=9;goto B68403d;
case 0x684040:c.instructions+=8;goto B684040;
case 0x684043:c.instructions+=7;goto B684043;
case 0x684046:c.instructions+=6;goto B684046;
case 0x684048:c.instructions+=5;goto B684048;
case 0x68404b:c.instructions+=4;goto B68404b;
case 0x68404e:c.instructions+=3;goto B68404e;
case 0x684050:c.instructions+=2;goto B684050;
case 0x684052:c.instructions+=1;goto B684052;
case 0x684054:goto L684054;
case 0x684057:c.instructions+=3;goto B684057;
case 0x68405c:c.instructions+=2;goto B68405c;
case 0x68405f:c.instructions+=1;goto B68405f;
case 0x684061:goto L684061;
case 0x684065:c.instructions+=1;goto B684065;
case 0x68406b:goto L68406b;
case 0x68406e:c.instructions+=4;goto B68406e;
case 0x68406f:c.instructions+=3;goto B68406f;
case 0x684070:c.instructions+=2;goto B684070;
case 0x684073:c.instructions+=1;goto B684073;
case 0x684078:goto L684078;
case 0x68407a:c.instructions+=4;goto B68407a;
case 0x68407d:c.instructions+=3;goto B68407d;
case 0x68407e:c.instructions+=2;goto B68407e;
case 0x68407f:c.instructions+=1;goto B68407f;
case 0x684081:goto L684081;
case 0x684087:c.instructions+=6;goto B684087;
case 0x684088:c.instructions+=5;goto B684088;
case 0x68408e:c.instructions+=4;goto B68408e;
case 0x68408f:c.instructions+=3;goto B68408f;
case 0x684091:c.instructions+=2;goto B684091;
case 0x684094:c.instructions+=1;goto B684094;
case 0x684096:goto L684096;
case 0x684099:c.instructions+=2;goto B684099;
case 0x68409c:c.instructions+=1;goto B68409c;
case 0x6840a1:goto L6840a1;
case 0x6840a3:goto L6840a3;
case 0x6840a6:c.instructions+=2;goto B6840a6;
case 0x6840a9:c.instructions+=1;goto B6840a9;
case 0x6840ae:goto L6840ae;
case 0x6840b0:goto L6840b0;
case 0x6840b1:c.instructions+=1;goto B6840b1;
case 0x6840b2:goto L6840b2;
case 0x6840b5:c.instructions+=6;goto B6840b5;
case 0x6840b8:c.instructions+=5;goto B6840b8;
case 0x6840b9:c.instructions+=4;goto B6840b9;
case 0x6840bc:c.instructions+=3;goto B6840bc;
case 0x6840bd:c.instructions+=2;goto B6840bd;
case 0x6840c0:c.instructions+=1;goto B6840c0;
case 0x6840c5:goto L6840c5;
case 0x6840c7:c.instructions+=4;goto B6840c7;
case 0x6840ca:c.instructions+=3;goto B6840ca;
case 0x6840cb:c.instructions+=2;goto B6840cb;
case 0x6840cc:c.instructions+=1;goto B6840cc;
case 0x6840ce:goto L6840ce;
case 0x6840d4:c.instructions+=6;goto B6840d4;
case 0x6840d5:c.instructions+=5;goto B6840d5;
case 0x6840db:c.instructions+=4;goto B6840db;
case 0x6840dc:c.instructions+=3;goto B6840dc;
case 0x6840de:c.instructions+=2;goto B6840de;
case 0x6840e1:c.instructions+=1;goto B6840e1;
case 0x6840e3:goto L6840e3;
case 0x6840e6:c.instructions+=2;goto B6840e6;
case 0x6840e9:c.instructions+=1;goto B6840e9;
case 0x6840ee:goto L6840ee;
case 0x6840f1:c.instructions+=5;goto B6840f1;
case 0x6840f2:c.instructions+=4;goto B6840f2;
case 0x6840f5:c.instructions+=3;goto B6840f5;
case 0x6840f6:c.instructions+=2;goto B6840f6;
case 0x6840f8:c.instructions+=1;goto B6840f8;
case 0x6840fa:goto L6840fa;
case 0x6840fd:c.instructions+=2;goto B6840fd;
case 0x684100:c.instructions+=1;goto B684100;
case 0x684105:goto L684105;
case 0x684107:c.instructions+=1;goto B684107;
case 0x684109:goto L684109;
case 0x68410c:c.instructions+=1;goto B68410c;
case 0x68410f:goto L68410f;
case 0x684112:c.instructions+=7;goto B684112;
case 0x684116:c.instructions+=6;goto B684116;
case 0x684119:c.instructions+=5;goto B684119;
case 0x68411b:c.instructions+=4;goto B68411b;
case 0x68411d:c.instructions+=3;goto B68411d;
case 0x68411f:c.instructions+=2;goto B68411f;
case 0x684122:c.instructions+=1;goto B684122;
case 0x684124:goto L684124;
case 0x68412a:c.instructions+=1;goto B68412a;
case 0x68412c:goto L68412c;
case 0x684132:goto L684132;
case 0x684134:goto L684134;
case 0x684137:c.instructions+=5;goto B684137;
case 0x68413a:c.instructions+=4;goto B68413a;
case 0x68413c:c.instructions+=3;goto B68413c;
case 0x684140:c.instructions+=2;goto B684140;
case 0x684142:c.instructions+=1;goto B684142;
case 0x684145:goto L684145;
case 0x684149:c.instructions+=2;goto B684149;
case 0x68414c:c.instructions+=1;goto B68414c;
case 0x684152:goto L684152;
case 0x684154:c.instructions+=1;goto B684154;
case 0x684156:goto L684156;
case 0x684159:c.instructions+=4;goto B684159;
case 0x68415c:c.instructions+=3;goto B68415c;
case 0x68415e:c.instructions+=2;goto B68415e;
case 0x684161:c.instructions+=1;goto B684161;
case 0x684164:goto L684164;
case 0x684167:c.instructions+=14;goto B684167;
case 0x68416a:c.instructions+=13;goto B68416a;
case 0x68416d:c.instructions+=12;goto B68416d;
case 0x684170:c.instructions+=11;goto B684170;
case 0x684173:c.instructions+=10;goto B684173;
case 0x684175:c.instructions+=9;goto B684175;
case 0x68417a:c.instructions+=8;goto B68417a;
case 0x68417c:c.instructions+=7;goto B68417c;
case 0x68417e:c.instructions+=6;goto B68417e;
case 0x684180:c.instructions+=5;goto B684180;
case 0x684182:c.instructions+=4;goto B684182;
case 0x684188:c.instructions+=3;goto B684188;
case 0x68418e:c.instructions+=2;goto B68418e;
case 0x684190:c.instructions+=1;goto B684190;
case 0x684192:goto L684192;
case 0x684194:goto L684194;
case 0x684198:c.instructions+=1;goto B684198;
case 0x68419a:goto L68419a;
case 0x68419c:c.instructions+=1;goto B68419c;
case 0x68419e:goto L68419e;
case 0x6841a0:goto L6841a0;
case 0x6841a2:c.instructions+=1;goto B6841a2;
case 0x6841a4:goto L6841a4;
case 0x6841a6:goto L6841a6;
case 0x6841ab:c.instructions+=5;goto B6841ab;
case 0x6841ad:c.instructions+=4;goto B6841ad;
case 0x6841b0:c.instructions+=3;goto B6841b0;
case 0x6841b3:c.instructions+=2;goto B6841b3;
case 0x6841b5:c.instructions+=1;goto B6841b5;
case 0x6841b7:goto L6841b7;
case 0x6841b9:c.instructions+=1;goto B6841b9;
case 0x6841bb:goto L6841bb;
case 0x6841c0:c.instructions+=4;goto B6841c0;
case 0x6841c2:c.instructions+=3;goto B6841c2;
case 0x6841c4:c.instructions+=2;goto B6841c4;
case 0x6841c5:c.instructions+=1;goto B6841c5;
case 0x6841ca:goto L6841ca;
case 0x6841cd:c.instructions+=1;goto B6841cd;
case 0x6841d2:goto L6841d2;
case 0x6841d5:c.instructions+=2;goto B6841d5;
case 0x6841d7:c.instructions+=1;goto B6841d7;
case 0x6841dc:goto L6841dc;
case 0x6841df:c.instructions+=2;goto B6841df;
case 0x6841e1:c.instructions+=1;goto B6841e1;
case 0x6841e6:goto L6841e6;
case 0x6841e8:c.instructions+=2;goto B6841e8;
case 0x6841e9:c.instructions+=1;goto B6841e9;
case 0x6841eb:goto L6841eb;
case 0x6841f0:goto L6841f0;
case 0x6841f1:c.instructions+=3;goto B6841f1;
case 0x6841f2:c.instructions+=2;goto B6841f2;
case 0x6841f3:c.instructions+=1;goto B6841f3;
case 0x684262:goto L684262;
case 0x684264:c.instructions+=10;goto B684264;
case 0x684265:c.instructions+=9;goto B684265;
case 0x684267:c.instructions+=8;goto B684267;
case 0x684268:c.instructions+=7;goto B684268;
case 0x68426b:c.instructions+=6;goto B68426b;
case 0x68426c:c.instructions+=5;goto B68426c;
case 0x68426e:c.instructions+=4;goto B68426e;
case 0x684270:c.instructions+=3;goto B684270;
case 0x684271:c.instructions+=2;goto B684271;
case 0x684273:c.instructions+=1;goto B684273;
case 0x684275:goto L684275;
case 0x684278:c.instructions+=2;goto B684278;
case 0x68427a:c.instructions+=1;goto B68427a;
case 0x684280:goto L684280;
case 0x684282:c.instructions+=2;goto B684282;
case 0x684285:c.instructions+=1;goto B684285;
case 0x68428b:goto L68428b;
case 0x68428d:goto L68428d;
case 0x68428f:goto L68428f;
case 0x684292:c.instructions+=8;goto B684292;
case 0x684294:c.instructions+=7;goto B684294;
case 0x684295:c.instructions+=6;goto B684295;
case 0x684296:c.instructions+=5;goto B684296;
case 0x684299:c.instructions+=4;goto B684299;
case 0x68429a:c.instructions+=3;goto B68429a;
case 0x68429b:c.instructions+=2;goto B68429b;
case 0x6842a1:c.instructions+=1;goto B6842a1;
case 0x6842a6:goto L6842a6;
case 0x6842a9:c.instructions+=3;goto B6842a9;
case 0x6842ac:c.instructions+=2;goto B6842ac;
case 0x6842af:c.instructions+=1;goto B6842af;
case 0x6842b1:goto L6842b1;
case 0x6842b4:c.instructions+=2;goto B6842b4;
case 0x6842b7:c.instructions+=1;goto B6842b7;
case 0x6842b9:goto L6842b9;
case 0x6842bb:goto L6842bb;
case 0x6842bd:c.instructions+=1;goto B6842bd;
case 0x6842bf:goto L6842bf;
case 0x6842c3:goto L6842c3;
case 0x6842c4:c.instructions+=2;goto B6842c4;
case 0x6842c7:c.instructions+=1;goto B6842c7;
case 0x6842c9:goto L6842c9;
case 0x6842ce:goto L6842ce;
case 0x6842d1:c.instructions+=2;goto B6842d1;
case 0x6842d4:c.instructions+=1;goto B6842d4;
case 0x6842da:goto L6842da;
case 0x6842dd:c.instructions+=2;goto B6842dd;
case 0x6842df:c.instructions+=1;goto B6842df;
case 0x6842e5:goto L6842e5;
case 0x6842e8:c.instructions+=2;goto B6842e8;
case 0x6842eb:c.instructions+=1;goto B6842eb;
case 0x6842ed:goto L6842ed;
case 0x6842ef:c.instructions+=2;goto B6842ef;
case 0x6842f3:c.instructions+=1;goto B6842f3;
case 0x6842f5:goto L6842f5;
case 0x6842f8:c.instructions+=1;goto B6842f8;
case 0x6842fe:goto L6842fe;
case 0x684301:c.instructions+=5;goto B684301;
case 0x684304:c.instructions+=4;goto B684304;
case 0x684307:c.instructions+=3;goto B684307;
case 0x684308:c.instructions+=2;goto B684308;
case 0x68430b:c.instructions+=1;goto B68430b;
case 0x68430d:goto L68430d;
case 0x684312:goto L684312;
case 0x684315:c.instructions+=1;goto B684315;
case 0x68431b:goto L68431b;
case 0x68431e:c.instructions+=7;goto B68431e;
case 0x684321:c.instructions+=6;goto B684321;
case 0x684323:c.instructions+=5;goto B684323;
case 0x684326:c.instructions+=4;goto B684326;
case 0x684329:c.instructions+=3;goto B684329;
case 0x68432a:c.instructions+=2;goto B68432a;
case 0x68432d:c.instructions+=1;goto B68432d;
case 0x68432f:goto L68432f;
case 0x684334:goto L684334;
case 0x684336:c.instructions+=3;goto B684336;
case 0x684338:c.instructions+=2;goto B684338;
case 0x68433b:c.instructions+=1;goto B68433b;
case 0x68433d:goto L68433d;
case 0x68433e:c.instructions+=1;goto B68433e;
case 0x684340:goto L684340;
case 0x684341:c.instructions+=1;goto B684341;
case 0x684343:goto L684343;
case 0x684344:c.instructions+=1;goto B684344;
case 0x684346:goto L684346;
case 0x684348:c.instructions+=2;goto B684348;
case 0x68434b:c.instructions+=1;goto B68434b;
case 0x68434d:goto L68434d;
case 0x684350:c.instructions+=4;goto B684350;
case 0x684352:c.instructions+=3;goto B684352;
case 0x684354:c.instructions+=2;goto B684354;
case 0x684357:c.instructions+=1;goto B684357;
case 0x684359:goto L684359;
case 0x68435f:goto L68435f;
case 0x684366:c.instructions+=1;goto B684366;
case 0x684368:goto L684368;
case 0x68436a:c.instructions+=2;goto B68436a;
case 0x68436d:c.instructions+=1;goto B68436d;
case 0x68436f:goto L68436f;
case 0x684372:c.instructions+=2;goto B684372;
case 0x684374:c.instructions+=1;goto B684374;
case 0x684376:goto L684376;
case 0x684378:c.instructions+=1;goto B684378;
case 0x68437a:goto L68437a;
case 0x68437c:goto L68437c;
case 0x684383:goto L684383;
case 0x684386:c.instructions+=7;goto B684386;
case 0x684387:c.instructions+=6;goto B684387;
case 0x684388:c.instructions+=5;goto B684388;
case 0x68438b:c.instructions+=4;goto B68438b;
case 0x68438c:c.instructions+=3;goto B68438c;
case 0x68438d:c.instructions+=2;goto B68438d;
case 0x684390:c.instructions+=1;goto B684390;
case 0x684395:goto L684395;
case 0x684397:c.instructions+=3;goto B684397;
case 0x68439a:c.instructions+=2;goto B68439a;
case 0x68439d:c.instructions+=1;goto B68439d;
case 0x68439f:goto L68439f;
case 0x6843a2:c.instructions+=2;goto B6843a2;
case 0x6843a5:c.instructions+=1;goto B6843a5;
case 0x6843a7:goto L6843a7;
case 0x6843a9:goto L6843a9;
case 0x6843ab:c.instructions+=1;goto B6843ab;
case 0x6843b1:goto L6843b1;
case 0x6843b4:c.instructions+=3;goto B6843b4;
case 0x6843b6:c.instructions+=2;goto B6843b6;
case 0x6843ba:c.instructions+=1;goto B6843ba;
case 0x6843bf:goto L6843bf;
case 0x6843c2:c.instructions+=1;goto B6843c2;
case 0x6843c4:goto L6843c4;
case 0x6843c5:c.instructions+=4;goto B6843c5;
case 0x6843c8:c.instructions+=3;goto B6843c8;
case 0x6843ca:c.instructions+=2;goto B6843ca;
case 0x6843cb:c.instructions+=1;goto B6843cb;
case 0x6843d0:goto L6843d0;
case 0x6843d2:goto L6843d2;
case 0x6843d5:c.instructions+=1;goto B6843d5;
case 0x6843d7:goto L6843d7;
case 0x6843dc:c.instructions+=4;goto B6843dc;
case 0x6843dd:c.instructions+=3;goto B6843dd;
case 0x6843de:c.instructions+=2;goto B6843de;
case 0x6843df:c.instructions+=1;goto B6843df;
case 0x6843e4:goto L6843e4;
case 0x6843e7:c.instructions+=1;goto B6843e7;
case 0x6843ec:goto L6843ec;
case 0x6843ed:c.instructions+=4;goto B6843ed;
case 0x6843ee:c.instructions+=3;goto B6843ee;
case 0x6843ef:c.instructions+=2;goto B6843ef;
case 0x6843f0:c.instructions+=1;goto B6843f0;
case 0x6843f3:goto L6843f3;
case 0x6843f5:goto L6843f5;
case 0x6843f8:c.instructions+=2;goto B6843f8;
case 0x6843fa:c.instructions+=1;goto B6843fa;
case 0x6843fc:goto L6843fc;
case 0x684400:c.instructions+=1;goto B684400;
case 0x684402:goto L684402;
case 0x684404:c.instructions+=3;goto B684404;
case 0x684405:c.instructions+=2;goto B684405;
case 0x684409:c.instructions+=1;goto B684409;
case 0x68440b:goto L68440b;
case 0x68440e:goto L68440e;
case 0x68440f:c.instructions+=4;goto B68440f;
case 0x684412:c.instructions+=3;goto B684412;
case 0x684414:c.instructions+=2;goto B684414;
case 0x684415:c.instructions+=1;goto B684415;
case 0x68441a:goto L68441a;
case 0x68441c:c.instructions+=1;goto B68441c;
case 0x68441e:goto L68441e;
case 0x684421:c.instructions+=2;goto B684421;
case 0x684423:c.instructions+=1;goto B684423;
case 0x684425:goto L684425;
case 0x684427:goto L684427;
case 0x684429:c.instructions+=1;goto B684429;
case 0x68442b:goto L68442b;
case 0x68442f:c.instructions+=1;goto B68442f;
case 0x684431:goto L684431;
case 0x684434:c.instructions+=6;goto B684434;
case 0x684438:c.instructions+=5;goto B684438;
case 0x68443a:c.instructions+=4;goto B68443a;
case 0x68443d:c.instructions+=3;goto B68443d;
case 0x68443f:c.instructions+=2;goto B68443f;
case 0x684440:c.instructions+=1;goto B684440;
case 0x684445:goto L684445;
case 0x684447:c.instructions+=1;goto B684447;
case 0x684449:goto L684449;
case 0x68444d:c.instructions+=1;goto B68444d;
case 0x68444f:goto L68444f;
case 0x684452:goto L684452;
case 0x684455:c.instructions+=1;goto B684455;
case 0x684458:goto L684458;
case 0x68445b:c.instructions+=2;goto B68445b;
case 0x68445d:c.instructions+=1;goto B68445d;
case 0x68445f:goto L68445f;
case 0x684461:c.instructions+=1;goto B684461;
case 0x684463:goto L684463;
case 0x684465:c.instructions+=8;goto B684465;
case 0x684466:c.instructions+=7;goto B684466;
case 0x684468:c.instructions+=6;goto B684468;
case 0x684469:c.instructions+=5;goto B684469;
case 0x68446c:c.instructions+=4;goto B68446c;
case 0x684470:c.instructions+=3;goto B684470;
case 0x684471:c.instructions+=2;goto B684471;
case 0x684473:c.instructions+=1;goto B684473;
case 0x684475:goto L684475;
case 0x684477:c.instructions+=1;goto B684477;
case 0x68447c:goto L68447c;
case 0x68447d:c.instructions+=7;goto B68447d;
case 0x68447e:c.instructions+=6;goto B68447e;
case 0x684481:c.instructions+=5;goto B684481;
case 0x684485:c.instructions+=4;goto B684485;
case 0x684487:c.instructions+=3;goto B684487;
case 0x68448a:c.instructions+=2;goto B68448a;
case 0x68448b:c.instructions+=1;goto B68448b;
case 0x684490:goto L684490;
case 0x684492:c.instructions+=3;goto B684492;
case 0x684494:c.instructions+=2;goto B684494;
case 0x684495:c.instructions+=1;goto B684495;
case 0x684497:goto L684497;
case 0x68449e:c.instructions+=1;goto B68449e;
case 0x6844a3:goto L6844a3;
case 0x6844a4:c.instructions+=3;goto B6844a4;
case 0x6844a5:c.instructions+=2;goto B6844a5;
case 0x6844a7:c.instructions+=1;goto B6844a7;
case 0x6844ac:goto L6844ac;
case 0x6844ae:c.instructions+=2;goto B6844ae;
case 0x6844b1:c.instructions+=1;goto B6844b1;
case 0x6844b7:goto L6844b7;
case 0x6844b9:c.instructions+=4;goto B6844b9;
case 0x6844ba:c.instructions+=3;goto B6844ba;
case 0x6844bd:c.instructions+=2;goto B6844bd;
case 0x6844bf:c.instructions+=1;goto B6844bf;
case 0x6844c4:goto L6844c4;
case 0x6844c6:c.instructions+=2;goto B6844c6;
case 0x6844c9:c.instructions+=1;goto B6844c9;
case 0x6844cb:goto L6844cb;
case 0x6844cd:c.instructions+=10;goto B6844cd;
case 0x6844cf:c.instructions+=9;goto B6844cf;
case 0x6844d0:c.instructions+=8;goto B6844d0;
case 0x6844d2:c.instructions+=7;goto B6844d2;
case 0x6844d7:c.instructions+=6;goto B6844d7;
case 0x6844d8:c.instructions+=5;goto B6844d8;
case 0x6844dd:c.instructions+=4;goto B6844dd;
case 0x6844de:c.instructions+=3;goto B6844de;
case 0x6844e1:c.instructions+=2;goto B6844e1;
case 0x6844e3:c.instructions+=1;goto B6844e3;
case 0x6844e8:goto L6844e8;
case 0x6844ea:c.instructions+=2;goto B6844ea;
case 0x6844ed:c.instructions+=1;goto B6844ed;
case 0x6844ef:goto L6844ef;
case 0x6844f3:c.instructions+=2;goto B6844f3;
case 0x6844f5:c.instructions+=1;goto B6844f5;
case 0x6844f7:goto L6844f7;
case 0x6844fa:c.instructions+=4;goto B6844fa;
case 0x6844fd:c.instructions+=3;goto B6844fd;
case 0x684500:c.instructions+=2;goto B684500;
case 0x684503:c.instructions+=1;goto B684503;
case 0x684505:goto L684505;
case 0x684508:c.instructions+=2;goto B684508;
case 0x68450b:c.instructions+=1;goto B68450b;
case 0x68450d:goto L68450d;
case 0x68450f:goto L68450f;
case 0x684511:c.instructions+=1;goto B684511;
case 0x684513:goto L684513;
case 0x684519:c.instructions+=1;goto B684519;
case 0x68451c:goto L68451c;
case 0x68451f:c.instructions+=2;goto B68451f;
case 0x684522:c.instructions+=1;goto B684522;
case 0x684524:goto L684524;
case 0x684527:c.instructions+=10;goto B684527;
case 0x684529:c.instructions+=9;goto B684529;
case 0x68452b:c.instructions+=8;goto B68452b;
case 0x68452d:c.instructions+=7;goto B68452d;
case 0x68452f:c.instructions+=6;goto B68452f;
case 0x684535:c.instructions+=5;goto B684535;
case 0x684538:c.instructions+=4;goto B684538;
case 0x684539:c.instructions+=3;goto B684539;
case 0x68453c:c.instructions+=2;goto B68453c;
case 0x68453e:c.instructions+=1;goto B68453e;
case 0x684543:goto L684543;
case 0x684546:goto L684546;
case 0x684547:c.instructions+=1;goto B684547;
case 0x68454c:goto L68454c;
case 0x684550:c.instructions+=4;goto B684550;
case 0x684551:c.instructions+=3;goto B684551;
case 0x684552:c.instructions+=2;goto B684552;
case 0x684553:c.instructions+=1;goto B684553;
case 0x684555:goto L684555;
case 0x68455c:goto L68455c;
case 0x68455f:goto L68455f;
case 0x684560:c.instructions+=2;goto B684560;
case 0x684561:c.instructions+=1;goto B684561;
case 0x684564:goto L684564;
case 0x684566:c.instructions+=11;goto B684566;
case 0x684567:c.instructions+=10;goto B684567;
case 0x684569:c.instructions+=9;goto B684569;
case 0x68456f:c.instructions+=8;goto B68456f;
case 0x684570:c.instructions+=7;goto B684570;
case 0x684571:c.instructions+=6;goto B684571;
case 0x684572:c.instructions+=5;goto B684572;
case 0x684577:c.instructions+=4;goto B684577;
case 0x684579:c.instructions+=3;goto B684579;
case 0x68457e:c.instructions+=2;goto B68457e;
case 0x684581:c.instructions+=1;goto B684581;
case 0x684586:goto L684586;
case 0x684589:c.instructions+=5;goto B684589;
case 0x68458b:c.instructions+=4;goto B68458b;
case 0x684591:c.instructions+=3;goto B684591;
case 0x684594:c.instructions+=2;goto B684594;
case 0x684597:c.instructions+=1;goto B684597;
case 0x684599:goto L684599;
case 0x68459e:c.instructions+=1;goto B68459e;
case 0x6845a3:goto L6845a3;
case 0x6845a6:c.instructions+=1;goto B6845a6;
case 0x6845a8:goto L6845a8;
case 0x6845ab:c.instructions+=1;goto B6845ab;
case 0x6845ad:goto L6845ad;
case 0x6845b0:c.instructions+=1;goto B6845b0;
case 0x6845b2:goto L6845b2;
case 0x6845b5:c.instructions+=2;goto B6845b5;
case 0x6845b7:c.instructions+=1;goto B6845b7;
case 0x6845b9:goto L6845b9;
case 0x6845bb:c.instructions+=2;goto B6845bb;
case 0x6845bd:c.instructions+=1;goto B6845bd;
case 0x6845bf:goto L6845bf;
case 0x6845c2:c.instructions+=1;goto B6845c2;
case 0x6845c7:goto L6845c7;
case 0x6845ca:c.instructions+=32;goto B6845ca;
case 0x6845ce:c.instructions+=31;goto B6845ce;
case 0x6845d1:c.instructions+=30;goto B6845d1;
case 0x6845d2:c.instructions+=29;goto B6845d2;
case 0x6845d5:c.instructions+=28;goto B6845d5;
case 0x6845d7:c.instructions+=27;goto B6845d7;
case 0x6845da:c.instructions+=26;goto B6845da;
case 0x6845dd:c.instructions+=25;goto B6845dd;
case 0x6845e0:c.instructions+=24;goto B6845e0;
case 0x6845e3:c.instructions+=23;goto B6845e3;
case 0x6845e6:c.instructions+=22;goto B6845e6;
case 0x6845e9:c.instructions+=21;goto B6845e9;
case 0x6845ec:c.instructions+=20;goto B6845ec;
case 0x6845ef:c.instructions+=19;goto B6845ef;
case 0x6845f2:c.instructions+=18;goto B6845f2;
case 0x6845f5:c.instructions+=17;goto B6845f5;
case 0x6845f8:c.instructions+=16;goto B6845f8;
case 0x6845fb:c.instructions+=15;goto B6845fb;
case 0x6845fe:c.instructions+=14;goto B6845fe;
case 0x684601:c.instructions+=13;goto B684601;
case 0x684604:c.instructions+=12;goto B684604;
case 0x684607:c.instructions+=11;goto B684607;
case 0x68460a:c.instructions+=10;goto B68460a;
case 0x68460d:c.instructions+=9;goto B68460d;
case 0x684610:c.instructions+=8;goto B684610;
case 0x684613:c.instructions+=7;goto B684613;
case 0x684616:c.instructions+=6;goto B684616;
case 0x684619:c.instructions+=5;goto B684619;
case 0x68461c:c.instructions+=4;goto B68461c;
case 0x68461f:c.instructions+=3;goto B68461f;
case 0x684625:c.instructions+=2;goto B684625;
case 0x68462b:c.instructions+=1;goto B68462b;
case 0x68462d:goto L68462d;
case 0x684632:c.instructions+=2;goto B684632;
case 0x684639:c.instructions+=1;goto B684639;
case 0x68463e:goto L68463e;
case 0x684640:c.instructions+=2;goto B684640;
case 0x684641:c.instructions+=1;goto B684641;
case 0x684643:goto L684643;
case 0x684645:c.instructions+=1;goto B684645;
case 0x68464a:goto L68464a;
case 0x68464c:goto L68464c;
case 0x68464e:goto L68464e;
case 0x684652:c.instructions+=1;goto B684652;
case 0x684657:goto L684657;
case 0x68465a:c.instructions+=1;goto B68465a;
case 0x684660:goto L684660;
case 0x684663:c.instructions+=4;goto B684663;
case 0x684664:c.instructions+=3;goto B684664;
case 0x684666:c.instructions+=2;goto B684666;
case 0x684667:c.instructions+=1;goto B684667;
case 0x68466c:goto L68466c;
case 0x68466e:c.instructions+=1;goto B68466e;
case 0x684670:goto L684670;
case 0x684673:c.instructions+=5;goto B684673;
case 0x684678:c.instructions+=4;goto B684678;
case 0x68467d:c.instructions+=3;goto B68467d;
case 0x68467e:c.instructions+=2;goto B68467e;
case 0x68467f:c.instructions+=1;goto B68467f;
case 0x684684:goto L684684;
case 0x684687:c.instructions+=1;goto B684687;
case 0x68468c:goto L68468c;
case 0x68468f:c.instructions+=5;goto B68468f;
case 0x684691:c.instructions+=4;goto B684691;
case 0x684696:c.instructions+=3;goto B684696;
case 0x684698:c.instructions+=2;goto B684698;
case 0x68469e:c.instructions+=1;goto B68469e;
case 0x6846a0:goto L6846a0;
case 0x6846a2:c.instructions+=1;goto B6846a2;
case 0x6846a4:goto L6846a4;
case 0x6846a6:c.instructions+=1;goto B6846a6;
case 0x6846a8:goto L6846a8;
case 0x6846ad:c.instructions+=3;goto B6846ad;
case 0x6846b0:c.instructions+=2;goto B6846b0;
case 0x6846b5:c.instructions+=1;goto B6846b5;
case 0x6846b7:goto L6846b7;
case 0x6846be:c.instructions+=1;goto B6846be;
case 0x6846c0:goto L6846c0;
case 0x6846c7:c.instructions+=1;goto B6846c7;
case 0x6846c9:goto L6846c9;
case 0x6846cc:c.instructions+=1;goto B6846cc;
case 0x6846ce:goto L6846ce;
case 0x6846d3:c.instructions+=3;goto B6846d3;
case 0x6846d6:c.instructions+=2;goto B6846d6;
case 0x6846db:c.instructions+=1;goto B6846db;
case 0x6846dd:goto L6846dd;
case 0x6846e4:c.instructions+=1;goto B6846e4;
case 0x6846e6:goto L6846e6;
case 0x6846ed:goto L6846ed;
case 0x6846f0:c.instructions+=4;goto B6846f0;
case 0x6846f1:c.instructions+=3;goto B6846f1;
case 0x6846f3:c.instructions+=2;goto B6846f3;
case 0x6846f6:c.instructions+=1;goto B6846f6;
case 0x6846fb:goto L6846fb;
case 0x6846fd:c.instructions+=1;goto B6846fd;
case 0x684703:goto L684703;
case 0x684706:c.instructions+=4;goto B684706;
case 0x68470b:c.instructions+=3;goto B68470b;
case 0x68470e:c.instructions+=2;goto B68470e;
case 0x684711:c.instructions+=1;goto B684711;
case 0x684713:goto L684713;
case 0x68471a:c.instructions+=1;goto B68471a;
case 0x684721:goto L684721;
case 0x684728:c.instructions+=2;goto B684728;
case 0x68472d:c.instructions+=1;goto B68472d;
case 0x68472f:goto L68472f;
case 0x684732:c.instructions+=1;goto B684732;
case 0x684739:goto L684739;
case 0x68473c:c.instructions+=3;goto B68473c;
case 0x684741:c.instructions+=2;goto B684741;
case 0x684743:c.instructions+=1;goto B684743;
case 0x684745:goto L684745;
case 0x68474b:goto L68474b;
case 0x684750:c.instructions+=1;goto B684750;
case 0x684752:goto L684752;
case 0x684757:c.instructions+=1;goto B684757;
case 0x684759:goto L684759;
case 0x68475e:c.instructions+=1;goto B68475e;
case 0x684760:goto L684760;
case 0x684765:c.instructions+=1;goto B684765;
case 0x684767:goto L684767;
case 0x68476c:c.instructions+=1;goto B68476c;
case 0x68476e:goto L68476e;
case 0x684773:c.instructions+=1;goto B684773;
case 0x684778:goto L684778;
case 0x68477d:c.instructions+=1;goto B68477d;
case 0x684782:goto L684782;
case 0x684784:c.instructions+=2;goto B684784;
case 0x684785:c.instructions+=1;goto B684785;
case 0x68478b:goto L68478b;
case 0x68478e:c.instructions+=2;goto B68478e;
case 0x684790:c.instructions+=1;goto B684790;
case 0x684795:goto L684795;
case 0x68479a:goto L68479a;
case 0x6847a0:c.instructions+=3;goto B6847a0;
case 0x6847a5:c.instructions+=2;goto B6847a5;
case 0x6847a8:c.instructions+=1;goto B6847a8;
case 0x6847ad:goto L6847ad;
case 0x6847af:c.instructions+=2;goto B6847af;
case 0x6847b0:c.instructions+=1;goto B6847b0;
case 0x6847b6:goto L6847b6;
case 0x6847b8:c.instructions+=1;goto B6847b8;
case 0x6847bd:goto L6847bd;
case 0x6847c2:goto L6847c2;
case 0x6847c7:c.instructions+=2;goto B6847c7;
case 0x6847c9:c.instructions+=1;goto B6847c9;
case 0x6847cb:goto L6847cb;
case 0x6847cd:goto L6847cd;
case 0x6847cf:c.instructions+=1;goto B6847cf;
case 0x6847d1:goto L6847d1;
case 0x6847d6:c.instructions+=1;goto B6847d6;
case 0x6847d8:goto L6847d8;
case 0x6847dd:c.instructions+=1;goto B6847dd;
case 0x6847df:goto L6847df;
case 0x6847e4:c.instructions+=1;goto B6847e4;
case 0x6847e6:goto L6847e6;
case 0x6847eb:c.instructions+=1;goto B6847eb;
case 0x6847ed:goto L6847ed;
case 0x6847f2:c.instructions+=1;goto B6847f2;
case 0x6847f7:goto L6847f7;
case 0x6847f9:c.instructions+=2;goto B6847f9;
case 0x6847fa:c.instructions+=1;goto B6847fa;
case 0x6847fc:goto L6847fc;
case 0x6847ff:c.instructions+=2;goto B6847ff;
case 0x684801:c.instructions+=1;goto B684801;
case 0x684806:goto L684806;
case 0x684808:goto L684808;
case 0x68480b:c.instructions+=3;goto B68480b;
case 0x684810:c.instructions+=2;goto B684810;
case 0x684813:c.instructions+=1;goto B684813;
case 0x684818:goto L684818;
case 0x68481a:c.instructions+=2;goto B68481a;
case 0x68481b:c.instructions+=1;goto B68481b;
case 0x68481d:goto L68481d;
case 0x68481f:c.instructions+=1;goto B68481f;
case 0x684824:goto L684824;
case 0x684826:goto L684826;
case 0x68482b:c.instructions+=1;goto B68482b;
case 0x68482d:goto L68482d;
case 0x684832:goto L684832;
case 0x684834:goto L684834;
case 0x684837:c.instructions+=1;goto B684837;
case 0x684839:goto L684839;
case 0x68483e:c.instructions+=1;goto B68483e;
case 0x684843:goto L684843;
case 0x684845:c.instructions+=2;goto B684845;
case 0x684846:c.instructions+=1;goto B684846;
case 0x684848:goto L684848;
case 0x68484b:c.instructions+=2;goto B68484b;
case 0x68484d:c.instructions+=1;goto B68484d;
case 0x684852:goto L684852;
case 0x684854:goto L684854;
case 0x684856:goto L684856;
case 0x684859:goto L684859;
case 0x68485c:c.instructions+=1;goto B68485c;
case 0x68485e:goto L68485e;
case 0x684863:c.instructions+=1;goto B684863;
case 0x684868:goto L684868;
case 0x68486b:c.instructions+=2;goto B68486b;
case 0x68486d:c.instructions+=1;goto B68486d;
case 0x68486f:goto L68486f;
case 0x684872:c.instructions+=7;goto B684872;
case 0x684873:c.instructions+=6;goto B684873;
case 0x684876:c.instructions+=5;goto B684876;
case 0x68487b:c.instructions+=4;goto B68487b;
case 0x68487c:c.instructions+=3;goto B68487c;
case 0x68487e:c.instructions+=2;goto B68487e;
case 0x684884:c.instructions+=1;goto B684884;
case 0x684889:goto L684889;
case 0x68488b:c.instructions+=1;goto B68488b;
case 0x684890:goto L684890;
case 0x684896:c.instructions+=2;goto B684896;
case 0x684898:c.instructions+=1;goto B684898;
case 0x68489d:goto L68489d;
case 0x68489f:c.instructions+=1;goto B68489f;
case 0x6848a5:goto L6848a5;
case 0x6848a7:goto L6848a7;
case 0x6848aa:goto L6848aa;
case 0x6848ad:c.instructions+=2;goto B6848ad;
case 0x6848b2:c.instructions+=1;goto B6848b2;
case 0x6848b4:goto L6848b4;
case 0x6848b9:c.instructions+=4;goto B6848b9;
case 0x6848ba:c.instructions+=3;goto B6848ba;
case 0x6848bb:c.instructions+=2;goto B6848bb;
case 0x6848bc:c.instructions+=1;goto B6848bc;
case 0x6848c1:goto L6848c1;
case 0x6848c4:goto L6848c4;
case 0x6848c7:c.instructions+=1;goto B6848c7;
case 0x6848c9:goto L6848c9;
case 0x6848ce:c.instructions+=4;goto B6848ce;
case 0x6848cf:c.instructions+=3;goto B6848cf;
case 0x6848d0:c.instructions+=2;goto B6848d0;
case 0x6848d1:c.instructions+=1;goto B6848d1;
case 0x6848d6:goto L6848d6;
case 0x6848d9:goto L6848d9;
case 0x6848df:c.instructions+=2;goto B6848df;
case 0x6848e1:c.instructions+=1;goto B6848e1;
case 0x6848e3:goto L6848e3;
case 0x6848e8:c.instructions+=2;goto B6848e8;
case 0x6848f2:c.instructions+=1;goto B6848f2;
case 0x6848f7:goto L6848f7;
case 0x6848f9:c.instructions+=3;goto B6848f9;
case 0x6848fa:c.instructions+=2;goto B6848fa;
case 0x6848fc:c.instructions+=1;goto B6848fc;
case 0x684902:goto L684902;
case 0x684905:c.instructions+=2;goto B684905;
case 0x684906:c.instructions+=1;goto B684906;
case 0x68490b:goto L68490b;
case 0x68490e:c.instructions+=2;goto B68490e;
case 0x68490f:c.instructions+=1;goto B68490f;
case 0x684914:goto L684914;
case 0x684916:c.instructions+=1;goto B684916;
case 0x68491b:goto L68491b;
case 0x68491d:c.instructions+=2;goto B68491d;
case 0x68491f:c.instructions+=1;goto B68491f;
case 0x684925:goto L684925;
case 0x684928:c.instructions+=2;goto B684928;
case 0x68492a:c.instructions+=1;goto B68492a;
case 0x68492c:goto L68492c;
case 0x68492f:c.instructions+=1;goto B68492f;
case 0x684934:goto L684934;
case 0x684936:goto L684936;
case 0x684939:c.instructions+=1;goto B684939;
case 0x68493b:goto L68493b;
case 0x68493e:c.instructions+=1;goto B68493e;
case 0x684943:goto L684943;
case 0x684945:c.instructions+=1;goto B684945;
case 0x684947:goto L684947;
case 0x68494a:c.instructions+=5;goto B68494a;
case 0x68494f:c.instructions+=4;goto B68494f;
case 0x684954:c.instructions+=3;goto B684954;
case 0x684955:c.instructions+=2;goto B684955;
case 0x684956:c.instructions+=1;goto B684956;
case 0x68495b:goto L68495b;
case 0x68495e:c.instructions+=1;goto B68495e;
case 0x684960:goto L684960;
case 0x684962:c.instructions+=1;goto B684962;
case 0x684964:goto L684964;
case 0x684967:c.instructions+=3;goto B684967;
case 0x684968:c.instructions+=2;goto B684968;
case 0x68496b:c.instructions+=1;goto B68496b;
case 0x684970:goto L684970;
case 0x684972:c.instructions+=1;goto B684972;
case 0x684974:goto L684974;
case 0x684979:c.instructions+=4;goto B684979;
case 0x68497e:c.instructions+=3;goto B68497e;
case 0x68497f:c.instructions+=2;goto B68497f;
case 0x684980:c.instructions+=1;goto B684980;
case 0x684985:goto L684985;
case 0x684988:goto L684988;
case 0x68498d:c.instructions+=1;goto B68498d;
case 0x684992:goto L684992;
case 0x684994:c.instructions+=1;goto B684994;
case 0x684995:goto L684995;
case 0x684996:c.instructions+=7;goto B684996;
case 0x684998:c.instructions+=6;goto B684998;
case 0x684999:c.instructions+=5;goto B684999;
case 0x68499c:c.instructions+=4;goto B68499c;
case 0x68499e:c.instructions+=3;goto B68499e;
case 0x68499f:c.instructions+=2;goto B68499f;
case 0x6849a2:c.instructions+=1;goto B6849a2;
case 0x6849a7:goto L6849a7;
case 0x6849a9:c.instructions+=2;goto B6849a9;
case 0x6849ab:c.instructions+=1;goto B6849ab;
case 0x6849ad:goto L6849ad;
case 0x6849b0:c.instructions+=1;goto B6849b0;
case 0x6849b2:goto L6849b2;
case 0x6849b4:c.instructions+=1;goto B6849b4;
case 0x6849b9:goto L6849b9;
case 0x6849bb:c.instructions+=2;goto B6849bb;
case 0x6849bd:c.instructions+=1;goto B6849bd;
case 0x6849bf:goto L6849bf;
case 0x6849c2:c.instructions+=4;goto B6849c2;
case 0x6849c4:c.instructions+=3;goto B6849c4;
case 0x6849c7:c.instructions+=2;goto B6849c7;
case 0x6849c8:c.instructions+=1;goto B6849c8;
case 0x6849cb:goto L6849cb;
case 0x6849cd:c.instructions+=2;goto B6849cd;
case 0x6849cf:c.instructions+=1;goto B6849cf;
case 0x6849d1:goto L6849d1;
case 0x6849d4:c.instructions+=1;goto B6849d4;
case 0x6849d6:goto L6849d6;
case 0x6849d9:c.instructions+=5;goto B6849d9;
case 0x6849da:c.instructions+=4;goto B6849da;
case 0x6849dd:c.instructions+=3;goto B6849dd;
case 0x6849df:c.instructions+=2;goto B6849df;
case 0x6849e0:c.instructions+=1;goto B6849e0;
case 0x6849e3:goto L6849e3;
case 0x6849e4:c.instructions+=1;goto B6849e4;
case 0x6849e9:goto L6849e9;
case 0x6849eb:c.instructions+=2;goto B6849eb;
case 0x6849ed:c.instructions+=1;goto B6849ed;
case 0x6849ef:goto L6849ef;
case 0x6849f2:c.instructions+=2;goto B6849f2;
case 0x6849f4:c.instructions+=1;goto B6849f4;
case 0x6849f6:goto L6849f6;
case 0x6849f8:c.instructions+=2;goto B6849f8;
case 0x6849f9:c.instructions+=1;goto B6849f9;
case 0x6849fc:goto L6849fc;
case 0x6849ff:c.instructions+=1;goto B6849ff;
case 0x684a01:goto L684a01;
case 0x684a04:c.instructions+=5;goto B684a04;
case 0x684a07:c.instructions+=4;goto B684a07;
case 0x684a09:c.instructions+=3;goto B684a09;
case 0x684a0c:c.instructions+=2;goto B684a0c;
case 0x684a0e:c.instructions+=1;goto B684a0e;
case 0x684a10:goto L684a10;
case 0x684a13:c.instructions+=1;goto B684a13;
case 0x684a15:goto L684a15;
case 0x684a17:goto L684a17;
case 0x684a1a:c.instructions+=3;goto B684a1a;
case 0x684a1c:c.instructions+=2;goto B684a1c;
case 0x684a1f:c.instructions+=1;goto B684a1f;
case 0x684a21:goto L684a21;
case 0x684a23:c.instructions+=2;goto B684a23;
case 0x684a25:c.instructions+=1;goto B684a25;
case 0x684a27:goto L684a27;
case 0x684a2a:c.instructions+=2;goto B684a2a;
case 0x684a2d:c.instructions+=1;goto B684a2d;
case 0x684a32:goto L684a32;
case 0x684a33:c.instructions+=3;goto B684a33;
case 0x684a34:c.instructions+=2;goto B684a34;
case 0x684a37:c.instructions+=1;goto B684a37;
case 0x684a3c:goto L684a3c;
case 0x684a3d:c.instructions+=1;goto B684a3d;
case 0x684a42:goto L684a42;
case 0x684a45:c.instructions+=1;goto B684a45;
case 0x684a4a:goto L684a4a;
case 0x684a4b:c.instructions+=5;goto B684a4b;
case 0x684a4c:c.instructions+=4;goto B684a4c;
case 0x684a4e:c.instructions+=3;goto B684a4e;
case 0x684a4f:c.instructions+=2;goto B684a4f;
case 0x684a50:c.instructions+=1;goto B684a50;
case 0x684a53:goto L684a53;
case 0x684a55:c.instructions+=7;goto B684a55;
case 0x684a56:c.instructions+=6;goto B684a56;
case 0x684a58:c.instructions+=5;goto B684a58;
case 0x684a59:c.instructions+=4;goto B684a59;
case 0x684a5c:c.instructions+=3;goto B684a5c;
case 0x684a5e:c.instructions+=2;goto B684a5e;
case 0x684a60:c.instructions+=1;goto B684a60;
case 0x684a62:goto L684a62;
case 0x684a64:goto L684a64;
case 0x684a67:c.instructions+=2;goto B684a67;
case 0x684a69:c.instructions+=1;goto B684a69;
case 0x684a6b:goto L684a6b;
case 0x684a6d:goto L684a6d;
case 0x684a70:c.instructions+=1;goto B684a70;
case 0x684a72:goto L684a72;
case 0x684a77:c.instructions+=1;goto B684a77;
case 0x684a79:goto L684a79;
case 0x684a7a:c.instructions+=11;goto B684a7a;
case 0x684a7b:c.instructions+=10;goto B684a7b;
case 0x684a7e:c.instructions+=9;goto B684a7e;
case 0x684a81:c.instructions+=8;goto B684a81;
case 0x684a84:c.instructions+=7;goto B684a84;
case 0x684a85:c.instructions+=6;goto B684a85;
case 0x684a86:c.instructions+=5;goto B684a86;
case 0x684a87:c.instructions+=4;goto B684a87;
case 0x684a8a:c.instructions+=3;goto B684a8a;
case 0x684a8d:c.instructions+=2;goto B684a8d;
case 0x684a90:c.instructions+=1;goto B684a90;
case 0x684a95:goto L684a95;
case 0x684a96:c.instructions+=2;goto B684a96;
case 0x684a97:c.instructions+=1;goto B684a97;
case 0x684a9a:goto L684a9a;
case 0x684a9c:c.instructions+=7;goto B684a9c;
case 0x684a9d:c.instructions+=6;goto B684a9d;
case 0x684a9f:c.instructions+=5;goto B684a9f;
case 0x684aa0:c.instructions+=4;goto B684aa0;
case 0x684aa3:c.instructions+=3;goto B684aa3;
case 0x684aa5:c.instructions+=2;goto B684aa5;
case 0x684aa7:c.instructions+=1;goto B684aa7;
case 0x684aa9:goto L684aa9;
case 0x684aab:goto L684aab;
case 0x684aae:c.instructions+=2;goto B684aae;
case 0x684ab0:c.instructions+=1;goto B684ab0;
case 0x684ab2:goto L684ab2;
case 0x684ab4:goto L684ab4;
case 0x684ab5:c.instructions+=13;goto B684ab5;
case 0x684ab8:c.instructions+=12;goto B684ab8;
case 0x684ab9:c.instructions+=11;goto B684ab9;
case 0x684abc:c.instructions+=10;goto B684abc;
case 0x684abd:c.instructions+=9;goto B684abd;
case 0x684ac0:c.instructions+=8;goto B684ac0;
case 0x684ac3:c.instructions+=7;goto B684ac3;
case 0x684ac6:c.instructions+=6;goto B684ac6;
case 0x684ac7:c.instructions+=5;goto B684ac7;
case 0x684aca:c.instructions+=4;goto B684aca;
case 0x684acb:c.instructions+=3;goto B684acb;
case 0x684ace:c.instructions+=2;goto B684ace;
case 0x684ad1:c.instructions+=1;goto B684ad1;
case 0x684ad6:goto L684ad6;
case 0x684ad7:c.instructions+=2;goto B684ad7;
case 0x684ad8:c.instructions+=1;goto B684ad8;
case 0x684adb:goto L684adb;
case 0x684add:c.instructions+=10;goto B684add;
case 0x684ade:c.instructions+=9;goto B684ade;
case 0x684ae0:c.instructions+=8;goto B684ae0;
case 0x684ae1:c.instructions+=7;goto B684ae1;
case 0x684ae2:c.instructions+=6;goto B684ae2;
case 0x684ae3:c.instructions+=5;goto B684ae3;
case 0x684ae6:c.instructions+=4;goto B684ae6;
case 0x684ae7:c.instructions+=3;goto B684ae7;
case 0x684aea:c.instructions+=2;goto B684aea;
case 0x684aed:c.instructions+=1;goto B684aed;
case 0x684aef:goto L684aef;
case 0x684af1:c.instructions+=1;goto B684af1;
case 0x684af3:goto L684af3;
case 0x684af5:goto L684af5;
case 0x684af8:c.instructions+=2;goto B684af8;
case 0x684afa:c.instructions+=1;goto B684afa;
case 0x684afc:goto L684afc;
case 0x684afe:goto L684afe;
case 0x684b01:c.instructions+=5;goto B684b01;
case 0x684b04:c.instructions+=4;goto B684b04;
case 0x684b08:c.instructions+=3;goto B684b08;
case 0x684b09:c.instructions+=2;goto B684b09;
case 0x684b0b:c.instructions+=1;goto B684b0b;
case 0x684b10:goto L684b10;
case 0x684b12:c.instructions+=1;goto B684b12;
case 0x684b14:goto L684b14;
case 0x684b16:c.instructions+=3;goto B684b16;
case 0x684b17:c.instructions+=2;goto B684b17;
case 0x684b1a:c.instructions+=1;goto B684b1a;
case 0x684b20:goto L684b20;
case 0x684b23:c.instructions+=4;goto B684b23;
case 0x684b27:c.instructions+=3;goto B684b27;
case 0x684b2a:c.instructions+=2;goto B684b2a;
case 0x684b2c:c.instructions+=1;goto B684b2c;
case 0x684b32:goto L684b32;
case 0x684b35:c.instructions+=1;goto B684b35;
case 0x684b37:goto L684b37;
case 0x684b3a:c.instructions+=2;goto B684b3a;
case 0x684b3d:c.instructions+=1;goto B684b3d;
case 0x684b3f:goto L684b3f;
case 0x684b43:c.instructions+=1;goto B684b43;
case 0x684b45:goto L684b45;
case 0x684b48:c.instructions+=2;goto B684b48;
case 0x684b4a:c.instructions+=1;goto B684b4a;
case 0x684b4c:goto L684b4c;
case 0x684b4f:c.instructions+=1;goto B684b4f;
case 0x684b51:goto L684b51;
case 0x684b54:c.instructions+=1;goto B684b54;
case 0x684b56:goto L684b56;
case 0x684b59:c.instructions+=2;goto B684b59;
case 0x684b5b:c.instructions+=1;goto B684b5b;
case 0x684b5d:goto L684b5d;
case 0x684b61:c.instructions+=1;goto B684b61;
case 0x684b67:goto L684b67;
case 0x684b6a:c.instructions+=1;goto B684b6a;
case 0x684b70:goto L684b70;
case 0x684b74:c.instructions+=1;goto B684b74;
case 0x684b7a:goto L684b7a;
case 0x684b7d:c.instructions+=2;goto B684b7d;
case 0x684b80:c.instructions+=1;goto B684b80;
case 0x684b86:goto L684b86;
case 0x684b88:c.instructions+=1;goto B684b88;
case 0x684b8d:goto L684b8d;
case 0x684b8f:c.instructions+=1;goto B684b8f;
case 0x684b91:goto L684b91;
case 0x684b95:c.instructions+=1;goto B684b95;
case 0x684b97:goto L684b97;
case 0x684b9a:c.instructions+=2;goto B684b9a;
case 0x684b9c:c.instructions+=1;goto B684b9c;
case 0x684b9e:goto L684b9e;
case 0x684ba2:c.instructions+=1;goto B684ba2;
case 0x684ba4:goto L684ba4;
case 0x684ba8:goto L684ba8;
case 0x684bab:c.instructions+=12;goto B684bab;
case 0x684bae:c.instructions+=11;goto B684bae;
case 0x684baf:c.instructions+=10;goto B684baf;
case 0x684bb2:c.instructions+=9;goto B684bb2;
case 0x684bb5:c.instructions+=8;goto B684bb5;
case 0x684bb6:c.instructions+=7;goto B684bb6;
case 0x684bb7:c.instructions+=6;goto B684bb7;
case 0x684bb8:c.instructions+=5;goto B684bb8;
case 0x684bb9:c.instructions+=4;goto B684bb9;
case 0x684bba:c.instructions+=3;goto B684bba;
case 0x684bbd:c.instructions+=2;goto B684bbd;
case 0x684bc0:c.instructions+=1;goto B684bc0;
case 0x684bc5:goto L684bc5;
case 0x684bca:goto L684bca;
case 0x684bcf:c.instructions+=4;goto B684bcf;
case 0x684bd0:c.instructions+=3;goto B684bd0;
case 0x684bd1:c.instructions+=2;goto B684bd1;
case 0x684bd4:c.instructions+=1;goto B684bd4;
case 0x684bd9:goto L684bd9;
case 0x684bde:c.instructions+=1;goto B684bde;
case 0x684be3:goto L684be3;
case 0x684be8:c.instructions+=3;goto B684be8;
case 0x684bed:c.instructions+=2;goto B684bed;
case 0x684bee:c.instructions+=1;goto B684bee;
case 0x684bf3:goto L684bf3;
case 0x684bf6:c.instructions+=15;goto B684bf6;
case 0x684bf9:c.instructions+=14;goto B684bf9;
case 0x684bfc:c.instructions+=13;goto B684bfc;
case 0x684bff:c.instructions+=12;goto B684bff;
case 0x684c02:c.instructions+=11;goto B684c02;
case 0x684c05:c.instructions+=10;goto B684c05;
case 0x684c06:c.instructions+=9;goto B684c06;
case 0x684c09:c.instructions+=8;goto B684c09;
case 0x684c0a:c.instructions+=7;goto B684c0a;
case 0x684c0b:c.instructions+=6;goto B684c0b;
case 0x684c0c:c.instructions+=5;goto B684c0c;
case 0x684c0d:c.instructions+=4;goto B684c0d;
case 0x684c10:c.instructions+=3;goto B684c10;
case 0x684c13:c.instructions+=2;goto B684c13;
case 0x684c16:c.instructions+=1;goto B684c16;
case 0x684c1b:goto L684c1b;
case 0x684c20:goto L684c20;
case 0x684c23:c.instructions+=2;goto B684c23;
case 0x684c26:c.instructions+=1;goto B684c26;
case 0x684c28:goto L684c28;
case 0x684c2a:c.instructions+=1;goto B684c2a;
case 0x684c2c:goto L684c2c;
case 0x684c2d:c.instructions+=2;goto B684c2d;
case 0x684c30:c.instructions+=1;goto B684c30;
case 0x684c35:goto L684c35;
case 0x684c37:c.instructions+=1;goto B684c37;
case 0x684c3d:goto L684c3d;
case 0x684c3f:c.instructions+=6;goto B684c3f;
case 0x684c42:c.instructions+=5;goto B684c42;
case 0x684c44:c.instructions+=4;goto B684c44;
case 0x684c47:c.instructions+=3;goto B684c47;
case 0x684c48:c.instructions+=2;goto B684c48;
case 0x684c4b:c.instructions+=1;goto B684c4b;
case 0x684c4e:goto L684c4e;
case 0x684c50:c.instructions+=3;goto B684c50;
case 0x684c53:c.instructions+=2;goto B684c53;
case 0x684c55:c.instructions+=1;goto B684c55;
case 0x684c58:goto L684c58;
case 0x684c5a:goto L684c5a;
case 0x684c5c:c.instructions+=1;goto B684c5c;
case 0x684c5f:goto L684c5f;
case 0x684c61:goto L684c61;
case 0x684c64:c.instructions+=2;goto B684c64;
case 0x684c66:c.instructions+=1;goto B684c66;
case 0x684c68:goto L684c68;
case 0x684c6a:c.instructions+=1;goto B684c6a;
case 0x684c6c:goto L684c6c;
case 0x684c6f:c.instructions+=1;goto B684c6f;
case 0x684c71:goto L684c71;
case 0x684c75:c.instructions+=1;goto B684c75;
case 0x684c77:goto L684c77;
case 0x684c7a:c.instructions+=2;goto B684c7a;
case 0x684c7c:c.instructions+=1;goto B684c7c;
case 0x684c7e:goto L684c7e;
case 0x684c80:c.instructions+=1;goto B684c80;
case 0x684c82:goto L684c82;
case 0x684c85:goto L684c85;
case 0x684c87:c.instructions+=3;goto B684c87;
case 0x684c88:c.instructions+=2;goto B684c88;
case 0x684c8a:c.instructions+=1;goto B684c8a;
case 0x684c8c:goto L684c8c;
case 0x684c8e:c.instructions+=4;goto B684c8e;
case 0x684c8f:c.instructions+=3;goto B684c8f;
case 0x684c90:c.instructions+=2;goto B684c90;
case 0x684c91:c.instructions+=1;goto B684c91;
case 0x684c96:goto L684c96;
case 0x684c98:c.instructions+=1;goto B684c98;
case 0x684c9a:goto L684c9a;
case 0x684c9c:c.instructions+=5;goto B684c9c;
case 0x684c9e:c.instructions+=4;goto B684c9e;
case 0x684ca1:c.instructions+=3;goto B684ca1;
case 0x684ca3:c.instructions+=2;goto B684ca3;
case 0x684ca4:c.instructions+=1;goto B684ca4;
case 0x684ca7:goto L684ca7;
case 0x684ca9:c.instructions+=4;goto B684ca9;
case 0x684cac:c.instructions+=3;goto B684cac;
case 0x684cad:c.instructions+=2;goto B684cad;
case 0x684cb0:c.instructions+=1;goto B684cb0;
case 0x684cb3:goto L684cb3;
case 0x684cb5:c.instructions+=3;goto B684cb5;
case 0x684cb8:c.instructions+=2;goto B684cb8;
case 0x684cba:c.instructions+=1;goto B684cba;
case 0x684cbd:goto L684cbd;
case 0x684cbf:goto L684cbf;
case 0x684cc1:c.instructions+=1;goto B684cc1;
case 0x684cc4:goto L684cc4;
case 0x684cc6:goto L684cc6;
case 0x684cc9:c.instructions+=2;goto B684cc9;
case 0x684ccb:c.instructions+=1;goto B684ccb;
case 0x684ccd:goto L684ccd;
case 0x684cd3:goto L684cd3;
case 0x684cd5:c.instructions+=1;goto B684cd5;
case 0x684cd7:goto L684cd7;
case 0x684cdc:c.instructions+=2;goto B684cdc;
case 0x684ce1:c.instructions+=1;goto B684ce1;
case 0x684ce2:goto L684ce2;
case 0x684ce5:c.instructions+=1;goto B684ce5;
case 0x684cea:goto L684cea;
case 0x684cef:goto L684cef;
case 0x684cf2:goto L684cf2;
case 0x684cf3:c.instructions+=4;goto B684cf3;
case 0x684cf4:c.instructions+=3;goto B684cf4;
case 0x684cf5:c.instructions+=2;goto B684cf5;
case 0x684cf6:c.instructions+=1;goto B684cf6;
case 0x684cf9:goto L684cf9;
case 0x684cfb:c.instructions+=9;goto B684cfb;
case 0x684cfc:c.instructions+=8;goto B684cfc;
case 0x684cfe:c.instructions+=7;goto B684cfe;
case 0x684d01:c.instructions+=6;goto B684d01;
case 0x684d02:c.instructions+=5;goto B684d02;
case 0x684d03:c.instructions+=4;goto B684d03;
case 0x684d06:c.instructions+=3;goto B684d06;
case 0x684d09:c.instructions+=2;goto B684d09;
case 0x684d0b:c.instructions+=1;goto B684d0b;
case 0x684d0d:goto L684d0d;
case 0x684d10:c.instructions+=2;goto B684d10;
case 0x684d11:c.instructions+=1;goto B684d11;
case 0x684d16:goto L684d16;
case 0x684d18:c.instructions+=2;goto B684d18;
case 0x684d19:c.instructions+=1;goto B684d19;
case 0x684d1b:goto L684d1b;
case 0x684d1c:c.instructions+=2;goto B684d1c;
case 0x684d1f:c.instructions+=1;goto B684d1f;
case 0x684d21:goto L684d21;
case 0x684d24:c.instructions+=1;goto B684d24;
case 0x684d26:goto L684d26;
case 0x684d27:c.instructions+=1;goto B684d27;
case 0x684d2c:goto L684d2c;
case 0x684d2d:c.instructions+=2;goto B684d2d;
case 0x684d30:c.instructions+=1;goto B684d30;
case 0x684d32:goto L684d32;
case 0x684d36:goto L684d36;
case 0x684d3a:c.instructions+=1;goto B684d3a;
case 0x684d3c:goto L684d3c;
case 0x684d3f:c.instructions+=5;goto B684d3f;
case 0x684d42:c.instructions+=4;goto B684d42;
case 0x684d45:c.instructions+=3;goto B684d45;
case 0x684d48:c.instructions+=2;goto B684d48;
case 0x684d4d:c.instructions+=1;goto B684d4d;
case 0x684d52:goto L684d52;
case 0x684d53:c.instructions+=3;goto B684d53;
case 0x684d55:c.instructions+=2;goto B684d55;
case 0x684d57:c.instructions+=1;goto B684d57;
case 0x684d5d:goto L684d5d;
case 0x684d60:c.instructions+=1;goto B684d60;
case 0x684d66:goto L684d66;
case 0x684d68:c.instructions+=2;goto B684d68;
case 0x684d6a:c.instructions+=1;goto B684d6a;
case 0x684d6c:goto L684d6c;
case 0x684d6f:c.instructions+=2;goto B684d6f;
case 0x684d70:c.instructions+=1;goto B684d70;
case 0x684d75:goto L684d75;
case 0x684d77:c.instructions+=2;goto B684d77;
case 0x684d78:c.instructions+=1;goto B684d78;
case 0x684d7a:goto L684d7a;
case 0x684d7b:c.instructions+=3;goto B684d7b;
case 0x684d7d:c.instructions+=2;goto B684d7d;
case 0x684d7f:c.instructions+=1;goto B684d7f;
case 0x684d81:goto L684d81;
case 0x684d84:c.instructions+=1;goto B684d84;
case 0x684d8a:goto L684d8a;
case 0x684d8d:c.instructions+=2;goto B684d8d;
case 0x684d8f:c.instructions+=1;goto B684d8f;
case 0x684d91:goto L684d91;
case 0x684d94:c.instructions+=1;goto B684d94;
case 0x684d97:goto L684d97;
case 0x684d9a:c.instructions+=2;goto B684d9a;
case 0x684d9b:c.instructions+=1;goto B684d9b;
case 0x684da0:goto L684da0;
case 0x684da2:c.instructions+=2;goto B684da2;
case 0x684da3:c.instructions+=1;goto B684da3;
case 0x684da5:goto L684da5;
case 0x684da8:c.instructions+=2;goto B684da8;
case 0x684da9:c.instructions+=1;goto B684da9;
case 0x684dae:goto L684dae;
case 0x684db1:c.instructions+=4;goto B684db1;
case 0x684db2:c.instructions+=3;goto B684db2;
case 0x684db5:c.instructions+=2;goto B684db5;
case 0x684db6:c.instructions+=1;goto B684db6;
case 0x684db8:goto L684db8;
case 0x684dba:c.instructions+=6;goto B684dba;
case 0x684dbb:c.instructions+=5;goto B684dbb;
case 0x684dc0:c.instructions+=4;goto B684dc0;
case 0x684dc3:c.instructions+=3;goto B684dc3;
case 0x684dc5:c.instructions+=2;goto B684dc5;
case 0x684dc7:c.instructions+=1;goto B684dc7;
case 0x684dcc:goto L684dcc;
case 0x684dce:goto L684dce;
case 0x684dd0:goto L684dd0;
case 0x684dd2:c.instructions+=1;goto B684dd2;
case 0x684dd7:goto L684dd7;
case 0x684dd9:c.instructions+=4;goto B684dd9;
case 0x684dde:c.instructions+=3;goto B684dde;
case 0x684de1:c.instructions+=2;goto B684de1;
case 0x684de2:c.instructions+=1;goto B684de2;
case 0x684de4:goto L684de4;
case 0x684de6:goto L684de6;
case 0x684de8:goto L684de8;
case 0x684dea:c.instructions+=1;goto B684dea;
case 0x684def:goto L684def;
case 0x684df1:c.instructions+=4;goto B684df1;
case 0x684df6:c.instructions+=3;goto B684df6;
case 0x684df9:c.instructions+=2;goto B684df9;
case 0x684dfa:c.instructions+=1;goto B684dfa;
case 0x684dfc:goto L684dfc;
case 0x684dfe:goto L684dfe;
case 0x684e00:goto L684e00;
case 0x684e02:c.instructions+=1;goto B684e02;
case 0x684e07:goto L684e07;
case 0x684e09:c.instructions+=4;goto B684e09;
case 0x684e0e:c.instructions+=3;goto B684e0e;
case 0x684e11:c.instructions+=2;goto B684e11;
case 0x684e12:c.instructions+=1;goto B684e12;
case 0x684e14:goto L684e14;
case 0x684e16:goto L684e16;
case 0x684e18:goto L684e18;
case 0x684e1a:c.instructions+=1;goto B684e1a;
case 0x684e1f:goto L684e1f;
case 0x684e21:c.instructions+=5;goto B684e21;
case 0x684e22:c.instructions+=4;goto B684e22;
case 0x684e27:c.instructions+=3;goto B684e27;
case 0x684e2a:c.instructions+=2;goto B684e2a;
case 0x684e2c:c.instructions+=1;goto B684e2c;
case 0x684e2e:goto L684e2e;
case 0x684e30:goto L684e30;
case 0x684e32:goto L684e32;
case 0x684e34:c.instructions+=1;goto B684e34;
case 0x684e39:goto L684e39;
case 0x684e3e:c.instructions+=3;goto B684e3e;
case 0x684e41:c.instructions+=2;goto B684e41;
case 0x684e43:c.instructions+=1;goto B684e43;
case 0x684e45:goto L684e45;
case 0x684e47:goto L684e47;
case 0x684e49:goto L684e49;
case 0x684e4b:c.instructions+=1;goto B684e4b;
case 0x684e50:goto L684e50;
case 0x684e52:c.instructions+=4;goto B684e52;
case 0x684e57:c.instructions+=3;goto B684e57;
case 0x684e5a:c.instructions+=2;goto B684e5a;
case 0x684e5b:c.instructions+=1;goto B684e5b;
case 0x684e5d:goto L684e5d;
case 0x684e5f:goto L684e5f;
case 0x684e65:goto L684e65;
case 0x684e6a:c.instructions+=3;goto B684e6a;
case 0x684e6d:c.instructions+=2;goto B684e6d;
case 0x684e6f:c.instructions+=1;goto B684e6f;
case 0x684e71:goto L684e71;
case 0x684e73:goto L684e73;
case 0x684e75:goto L684e75;
case 0x684e77:c.instructions+=1;goto B684e77;
case 0x684e7c:goto L684e7c;
case 0x684e7e:c.instructions+=5;goto B684e7e;
case 0x684e7f:c.instructions+=4;goto B684e7f;
case 0x684e84:c.instructions+=3;goto B684e84;
case 0x684e87:c.instructions+=2;goto B684e87;
case 0x684e89:c.instructions+=1;goto B684e89;
case 0x684e8b:goto L684e8b;
case 0x684e8d:goto L684e8d;
case 0x684e8f:goto L684e8f;
case 0x684e91:c.instructions+=1;goto B684e91;
case 0x684e96:goto L684e96;
case 0x684e98:c.instructions+=4;goto B684e98;
case 0x684e9d:c.instructions+=3;goto B684e9d;
case 0x684ea0:c.instructions+=2;goto B684ea0;
case 0x684ea1:c.instructions+=1;goto B684ea1;
case 0x684ea3:goto L684ea3;
case 0x684ea5:goto L684ea5;
case 0x684ea7:goto L684ea7;
case 0x684ea9:c.instructions+=1;goto B684ea9;
case 0x684eab:goto L684eab;
case 0x684ead:c.instructions+=4;goto B684ead;
case 0x684eb2:c.instructions+=3;goto B684eb2;
case 0x684eb5:c.instructions+=2;goto B684eb5;
case 0x684eb6:c.instructions+=1;goto B684eb6;
case 0x684eb8:goto L684eb8;
case 0x684eba:goto L684eba;
case 0x684ebc:goto L684ebc;
case 0x684ebe:c.instructions+=4;goto B684ebe;
case 0x684ec3:c.instructions+=3;goto B684ec3;
case 0x684ec6:c.instructions+=2;goto B684ec6;
case 0x684ec7:c.instructions+=1;goto B684ec7;
case 0x684ec9:goto L684ec9;
case 0x684ecb:goto L684ecb;
case 0x684ecd:goto L684ecd;
case 0x684ecf:c.instructions+=4;goto B684ecf;
case 0x684ed4:c.instructions+=3;goto B684ed4;
case 0x684ed7:c.instructions+=2;goto B684ed7;
case 0x684ed8:c.instructions+=1;goto B684ed8;
case 0x684eda:goto L684eda;
case 0x684edc:goto L684edc;
case 0x684ede:goto L684ede;
case 0x684ee0:c.instructions+=1;goto B684ee0;
case 0x684ee2:goto L684ee2;
case 0x684ee4:c.instructions+=4;goto B684ee4;
case 0x684ee9:c.instructions+=3;goto B684ee9;
case 0x684eec:c.instructions+=2;goto B684eec;
case 0x684eed:c.instructions+=1;goto B684eed;
case 0x684eef:goto L684eef;
case 0x684ef1:goto L684ef1;
case 0x684ef3:goto L684ef3;
case 0x684ef5:c.instructions+=1;goto B684ef5;
case 0x684ef7:goto L684ef7;
case 0x684ef9:c.instructions+=4;goto B684ef9;
case 0x684efe:c.instructions+=3;goto B684efe;
case 0x684f01:c.instructions+=2;goto B684f01;
case 0x684f02:c.instructions+=1;goto B684f02;
case 0x684f04:goto L684f04;
case 0x684f06:goto L684f06;
case 0x684f08:goto L684f08;
case 0x684f0b:c.instructions+=1;goto B684f0b;
case 0x684f0d:goto L684f0d;
case 0x684f12:c.instructions+=3;goto B684f12;
case 0x684f15:c.instructions+=2;goto B684f15;
case 0x684f17:c.instructions+=1;goto B684f17;
case 0x684f19:goto L684f19;
case 0x684f1b:goto L684f1b;
case 0x684f1d:goto L684f1d;
case 0x684f21:goto L684f21;
case 0x684f23:goto L684f23;
case 0x684f26:c.instructions+=6;goto B684f26;
case 0x684f28:c.instructions+=5;goto B684f28;
case 0x684f2b:c.instructions+=4;goto B684f2b;
case 0x684f2e:c.instructions+=3;goto B684f2e;
case 0x684f30:c.instructions+=2;goto B684f30;
case 0x684f32:c.instructions+=1;goto B684f32;
case 0x684f34:goto L684f34;
case 0x684f39:goto L684f39;
case 0x684f3a:goto L684f3a;
case 0x684f3b:c.instructions+=3;goto B684f3b;
case 0x684f3c:c.instructions+=2;goto B684f3c;
case 0x684f3d:c.instructions+=1;goto B684f3d;
case 0x684f40:goto L684f40;
case 0x684f42:c.instructions+=8;goto B684f42;
case 0x684f43:c.instructions+=7;goto B684f43;
case 0x684f45:c.instructions+=6;goto B684f45;
case 0x684f46:c.instructions+=5;goto B684f46;
case 0x684f49:c.instructions+=4;goto B684f49;
case 0x684f4a:c.instructions+=3;goto B684f4a;
case 0x684f4c:c.instructions+=2;goto B684f4c;
case 0x684f4e:c.instructions+=1;goto B684f4e;
case 0x684f50:goto L684f50;
case 0x684f52:c.instructions+=2;goto B684f52;
case 0x684f54:c.instructions+=1;goto B684f54;
case 0x684f56:goto L684f56;
case 0x684f59:c.instructions+=2;goto B684f59;
case 0x684f5a:c.instructions+=1;goto B684f5a;
case 0x684f5f:goto L684f5f;
case 0x684f62:c.instructions+=6;goto B684f62;
case 0x684f64:c.instructions+=5;goto B684f64;
case 0x684f65:c.instructions+=4;goto B684f65;
case 0x684f67:c.instructions+=3;goto B684f67;
case 0x684f69:c.instructions+=2;goto B684f69;
case 0x684f6a:c.instructions+=1;goto B684f6a;
case 0x684f6c:goto L684f6c;
case 0x684f6e:c.instructions+=6;goto B684f6e;
case 0x684f70:c.instructions+=5;goto B684f70;
case 0x684f72:c.instructions+=4;goto B684f72;
case 0x684f73:c.instructions+=3;goto B684f73;
case 0x684f75:c.instructions+=2;goto B684f75;
case 0x684f77:c.instructions+=1;goto B684f77;
case 0x684f79:goto L684f79;
case 0x684f7b:goto L684f7b;
case 0x684f7c:c.instructions+=3;goto B684f7c;
case 0x684f7d:c.instructions+=2;goto B684f7d;
case 0x684f7e:c.instructions+=1;goto B684f7e;
case 0x684f81:goto L684f81;
case 0x684f83:c.instructions+=6;goto B684f83;
case 0x684f84:c.instructions+=5;goto B684f84;
case 0x684f86:c.instructions+=4;goto B684f86;
case 0x684f87:c.instructions+=3;goto B684f87;
case 0x684f8a:c.instructions+=2;goto B684f8a;
case 0x684f8c:c.instructions+=1;goto B684f8c;
case 0x684f91:goto L684f91;
case 0x684f94:c.instructions+=1;goto B684f94;
case 0x684f96:goto L684f96;
case 0x684f99:c.instructions+=2;goto B684f99;
case 0x684f9b:c.instructions+=1;goto B684f9b;
case 0x684fa1:goto L684fa1;
case 0x684fa3:c.instructions+=1;goto B684fa3;
case 0x684fa5:goto L684fa5;
case 0x684fa8:goto L684fa8;
case 0x684faa:c.instructions+=1;goto B684faa;
case 0x684fac:goto L684fac;
case 0x684fae:goto L684fae;
case 0x684faf:c.instructions+=2;goto B684faf;
case 0x684fb0:c.instructions+=1;goto B684fb0;
case 0x684fb3:goto L684fb3;
case 0x684fb5:c.instructions+=1;goto B684fb5;
case 0x684fb7:goto L684fb7;
case 0x684fb9:c.instructions+=6;goto B684fb9;
case 0x684fba:c.instructions+=5;goto B684fba;
case 0x684fbc:c.instructions+=4;goto B684fbc;
case 0x684fbd:c.instructions+=3;goto B684fbd;
case 0x684fbf:c.instructions+=2;goto B684fbf;
case 0x684fc0:c.instructions+=1;goto B684fc0;
case 0x684fc2:goto L684fc2;
case 0x684fc5:c.instructions+=1;goto B684fc5;
case 0x684fc7:goto L684fc7;
case 0x684fca:c.instructions+=3;goto B684fca;
case 0x684fcd:c.instructions+=2;goto B684fcd;
case 0x684fd0:c.instructions+=1;goto B684fd0;
case 0x684fd1:goto L684fd1;
case 0x684fd3:c.instructions+=1;goto B684fd3;
case 0x684fd5:goto L684fd5;
case 0x684fd6:c.instructions+=2;goto B684fd6;
case 0x684fd9:c.instructions+=1;goto B684fd9;
case 0x684fdb:goto L684fdb;
case 0x684fdc:c.instructions+=3;goto B684fdc;
case 0x684fdd:c.instructions+=2;goto B684fdd;
case 0x684fde:c.instructions+=1;goto B684fde;
case 0x684fe1:goto L684fe1;
case 0x684fe3:c.instructions+=10;goto B684fe3;
case 0x684fe5:c.instructions+=9;goto B684fe5;
case 0x684fe7:c.instructions+=8;goto B684fe7;
case 0x684fea:c.instructions+=7;goto B684fea;
case 0x684fed:c.instructions+=6;goto B684fed;
case 0x684ff0:c.instructions+=5;goto B684ff0;
case 0x684ff3:c.instructions+=4;goto B684ff3;
case 0x684ff6:c.instructions+=3;goto B684ff6;
case 0x684ff9:c.instructions+=2;goto B684ff9;
case 0x684ffc:c.instructions+=1;goto B684ffc;
case 0x684ffd:goto L684ffd;
case 0x684fff:c.instructions+=1;goto B684fff;
default:missing_instruction(c.pc);}
B684000:L684000:{c.instructions+=4;NFSU2_TR(0x684000);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684003:{NFSU2_TR(0x684003);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684006:{NFSU2_TR(0x684006);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684009:{NFSU2_TR(0x684009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68400eull));
TAIL_STATIC(0x6758ceu,675);
}
B68400e:L68400e:{c.instructions+=3;NFSU2_TR(0x68400e);
__builtin_memmove((R+24),(R+0),4);
}
B684010:{NFSU2_TR(0x684010);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B684012:{NFSU2_TR(0x684012);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6841d2;}}
}
B684018:L684018:{c.instructions+=5;NFSU2_TR(0x684018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68401b:{NFSU2_TR(0x68401b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68401e:{NFSU2_TR(0x68401e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684021:{NFSU2_TR(0x684021);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684024:{NFSU2_TR(0x684024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684027:L684027:{c.instructions+=4;NFSU2_TR(0x684027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68402a:{NFSU2_TR(0x68402a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68402d:{NFSU2_TR(0x68402d);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B684031:{NFSU2_TR(0x684031);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684145;}}
}
B684037:L684037:{c.instructions+=11;NFSU2_TR(0x684037);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68403a:{NFSU2_TR(0x68403a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68403d:{NFSU2_TR(0x68403d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B684040:{NFSU2_TR(0x684040);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B684043:{NFSU2_TR(0x684043);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B684046:{NFSU2_TR(0x684046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B684048:{NFSU2_TR(0x684048);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B68404b:{NFSU2_TR(0x68404b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68404e:{NFSU2_TR(0x68404e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B684050:{NFSU2_TR(0x684050);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B684052:{NFSU2_TR(0x684052);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L684061;}}
}
B684054:L684054:{c.instructions+=4;NFSU2_TR(0x684054);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B684057:{NFSU2_TR(0x684057);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x100ull))));
}
B68405c:{NFSU2_TR(0x68405c);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68405f:{NFSU2_TR(0x68405f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B684061:L684061:{c.instructions+=2;NFSU2_TR(0x684061);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B684065:{NFSU2_TR(0x684065);
if(r1(R+518)){{goto L684134;}}
}
B68406b:L68406b:{c.instructions+=5;NFSU2_TR(0x68406b);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68406e:{NFSU2_TR(0x68406e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68406f:{NFSU2_TR(0x68406f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684070:{NFSU2_TR(0x684070);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B684073:{NFSU2_TR(0x684073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684078ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B684078:L684078:{c.instructions+=5;NFSU2_TR(0x684078);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68407a:{NFSU2_TR(0x68407a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68407d:{NFSU2_TR(0x68407d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68407e:{NFSU2_TR(0x68407e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68407f:{NFSU2_TR(0x68407f);
if(r1(R+518)){{goto L6840b2;}}
}
B684081:L684081:{c.instructions+=7;NFSU2_TR(0x684081);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B684087:{NFSU2_TR(0x684087);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684088:{NFSU2_TR(0x684088);
{u32 ea_=u32(r4(R+12)+u32(176u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68408e:{NFSU2_TR(0x68408e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68408f:{NFSU2_TR(0x68408f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B684091:{NFSU2_TR(0x684091);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B684094:{NFSU2_TR(0x684094);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6840a3;}}
}
B684096:L684096:{c.instructions+=3;NFSU2_TR(0x684096);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B684099:{NFSU2_TR(0x684099);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68409c:{NFSU2_TR(0x68409c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6840a1ull));
TAIL_STATIC(0x75eb50u,75e);
}
B6840a1:L6840a1:{c.instructions+=1;NFSU2_TR(0x6840a1);
{goto L6840b0;}
}
B6840a3:L6840a3:{c.instructions+=3;NFSU2_TR(0x6840a3);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B6840a6:{NFSU2_TR(0x6840a6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6840a9:{NFSU2_TR(0x6840a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6840aeull));
TAIL_STATIC(0x75eb50u,75e);
}
B6840ae:L6840ae:{c.instructions+=1;NFSU2_TR(0x6840ae);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6840b0:L6840b0:{c.instructions+=2;NFSU2_TR(0x6840b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6840b1:{NFSU2_TR(0x6840b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6840b2:L6840b2:{c.instructions+=7;NFSU2_TR(0x6840b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6840b5:{NFSU2_TR(0x6840b5);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6840b8:{NFSU2_TR(0x6840b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6840b9:{NFSU2_TR(0x6840b9);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6840bc:{NFSU2_TR(0x6840bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6840bd:{NFSU2_TR(0x6840bd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6840c0:{NFSU2_TR(0x6840c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6840c5ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B6840c5:L6840c5:{c.instructions+=5;NFSU2_TR(0x6840c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6840c7:{NFSU2_TR(0x6840c7);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6840ca:{NFSU2_TR(0x6840ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6840cb:{NFSU2_TR(0x6840cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6840cc:{NFSU2_TR(0x6840cc);
if(r1(R+518)){{goto L684109;}}
}
B6840ce:L6840ce:{c.instructions+=7;NFSU2_TR(0x6840ce);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6840d4:{NFSU2_TR(0x6840d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6840d5:{NFSU2_TR(0x6840d5);
{u32 ea_=u32(r4(R+12)+u32(176u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6840db:{NFSU2_TR(0x6840db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6840dc:{NFSU2_TR(0x6840dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6840de:{NFSU2_TR(0x6840de);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6840e1:{NFSU2_TR(0x6840e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6840fa;}}
}
B6840e3:L6840e3:{c.instructions+=3;NFSU2_TR(0x6840e3);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6840e6:{NFSU2_TR(0x6840e6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6840e9:{NFSU2_TR(0x6840e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6840eeull));
TAIL_STATIC(0x75eb50u,75e);
}
B6840ee:L6840ee:{c.instructions+=6;NFSU2_TR(0x6840ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6840f1:{NFSU2_TR(0x6840f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6840f2:{NFSU2_TR(0x6840f2);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6840f5:{NFSU2_TR(0x6840f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6840f6:{NFSU2_TR(0x6840f6);
__builtin_memmove((R+8),(R+0),4);
}
B6840f8:{NFSU2_TR(0x6840f8);
{goto L68410f;}
}
B6840fa:L6840fa:{c.instructions+=3;NFSU2_TR(0x6840fa);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B6840fd:{NFSU2_TR(0x6840fd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B684100:{NFSU2_TR(0x684100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684105ull));
TAIL_STATIC(0x75eb50u,75e);
}
B684105:L684105:{c.instructions+=2;NFSU2_TR(0x684105);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B684107:{NFSU2_TR(0x684107);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6840eeu);}goto L6840ee;}
}
B684109:L684109:{c.instructions+=2;NFSU2_TR(0x684109);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68410c:{NFSU2_TR(0x68410c);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68410f:L68410f:{c.instructions+=8;NFSU2_TR(0x68410f);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B684112:{NFSU2_TR(0x684112);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B684116:{NFSU2_TR(0x684116);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B684119:{NFSU2_TR(0x684119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B68411b:{NFSU2_TR(0x68411b);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B68411d:{NFSU2_TR(0x68411d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B68411f:{NFSU2_TR(0x68411f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B684122:{NFSU2_TR(0x684122);
if(r1(R+514)){{goto L68412c;}}
}
B684124:L684124:{c.instructions+=2;NFSU2_TR(0x684124);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x80ull))));
}
B68412a:{NFSU2_TR(0x68412a);
{goto L684132;}
}
B68412c:L68412c:{c.instructions+=1;NFSU2_TR(0x68412c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffff7full))));
}
B684132:L684132:{c.instructions+=1;NFSU2_TR(0x684132);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B684134:L684134:{c.instructions+=6;NFSU2_TR(0x684134);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684137:{NFSU2_TR(0x684137);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68413a:{NFSU2_TR(0x68413a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B68413c:{NFSU2_TR(0x68413c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B684140:{NFSU2_TR(0x684140);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B684142:{NFSU2_TR(0x684142);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684145:L684145:{c.instructions+=3;NFSU2_TR(0x684145);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B684149:{NFSU2_TR(0x684149);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68414c:{NFSU2_TR(0x68414c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684027u);}goto L684027;}}
}
B684152:L684152:{c.instructions+=2;NFSU2_TR(0x684152);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684154:{NFSU2_TR(0x684154);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6841b7;}}
}
B684156:L684156:{c.instructions+=5;NFSU2_TR(0x684156);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684159:{NFSU2_TR(0x684159);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68415c:{NFSU2_TR(0x68415c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B68415e:{NFSU2_TR(0x68415e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684161:{NFSU2_TR(0x684161);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684164:L684164:{c.instructions+=15;NFSU2_TR(0x684164);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684167:{NFSU2_TR(0x684167);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68416a:{NFSU2_TR(0x68416a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B68416d:{NFSU2_TR(0x68416d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684170:{NFSU2_TR(0x684170);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B684173:{NFSU2_TR(0x684173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B684175:{NFSU2_TR(0x684175);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf1ffffffull))));
}
B68417a:{NFSU2_TR(0x68417a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+0))));
}
B68417c:{NFSU2_TR(0x68417c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B68417e:{NFSU2_TR(0x68417e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B684180:{NFSU2_TR(0x684180);
__builtin_memmove((R+28),(R+0),4);
}
B684182:{NFSU2_TR(0x684182);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xe000000ull))));
}
B684188:{NFSU2_TR(0x684188);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xe000000ull))));
}
B68418e:{NFSU2_TR(0x68418e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684190:{NFSU2_TR(0x684190);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684194;}}
}
B684192:L684192:{c.instructions+=1;NFSU2_TR(0x684192);
__builtin_memmove((R+28),(R+8),4);
}
B684194:L684194:{c.instructions+=2;NFSU2_TR(0x684194);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684198:{NFSU2_TR(0x684198);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6841a0;}}
}
B68419a:L68419a:{c.instructions+=2;NFSU2_TR(0x68419a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B68419c:{NFSU2_TR(0x68419c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6841a6;}}
}
B68419e:L68419e:{c.instructions+=1;NFSU2_TR(0x68419e);
{goto L6841a4;}
}
B6841a0:L6841a0:{c.instructions+=2;NFSU2_TR(0x6841a0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6841a2:{NFSU2_TR(0x6841a2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6841a6;}}
}
B6841a4:L6841a4:{c.instructions+=1;NFSU2_TR(0x6841a4);
__builtin_memmove((R+8),(R+28),4);
}
B6841a6:L6841a6:{c.instructions+=6;NFSU2_TR(0x6841a6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf1ffffffull))));
}
B6841ab:{NFSU2_TR(0x6841ab);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6841ad:{NFSU2_TR(0x6841ad);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6841b0:{NFSU2_TR(0x6841b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6841b3:{NFSU2_TR(0x6841b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6841b5:{NFSU2_TR(0x6841b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684164u);}goto L684164;}}
}
B6841b7:L6841b7:{c.instructions+=2;NFSU2_TR(0x6841b7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6841b9:{NFSU2_TR(0x6841b9);
{goto L6841d2;}
}
B6841bb:L6841bb:{c.instructions+=5;NFSU2_TR(0x6841bb);
u8 U[4];
w4(U+0,u32(0x7b7c28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6841c0:{NFSU2_TR(0x6841c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6841c2:{NFSU2_TR(0x6841c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6841c4:{NFSU2_TR(0x6841c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6841c5:{NFSU2_TR(0x6841c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6841caull));
TAIL_STATIC(0x675267u,675);
}
B6841ca:L6841ca:{c.instructions+=2;NFSU2_TR(0x6841ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6841cd:{NFSU2_TR(0x6841cd);
w4(R+24,u32(0x80004005ull));
}
B6841d2:L6841d2:{c.instructions+=3;NFSU2_TR(0x6841d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6841d5:{NFSU2_TR(0x6841d5);
__builtin_memmove((R+4),(R+12),4);
}
B6841d7:{NFSU2_TR(0x6841d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6841dcull));
TAIL_STATIC(0x673af3u,673);
}
B6841dc:L6841dc:{c.instructions+=3;NFSU2_TR(0x6841dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6841df:{NFSU2_TR(0x6841df);
__builtin_memmove((R+4),(R+12),4);
}
B6841e1:{NFSU2_TR(0x6841e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6841e6ull));
TAIL_STATIC(0x673af3u,673);
}
B6841e6:L6841e6:{c.instructions+=3;NFSU2_TR(0x6841e6);
__builtin_memmove((R+0),(R+24),4);
}
B6841e8:{NFSU2_TR(0x6841e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6841e9:{NFSU2_TR(0x6841e9);
{goto L6841f0;}
}
B6841eb:L6841eb:{c.instructions+=1;NFSU2_TR(0x6841eb);
w4(R+0,u32(0x80004005ull));
}
B6841f0:L6841f0:{c.instructions+=4;NFSU2_TR(0x6841f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6841f1:{NFSU2_TR(0x6841f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6841f2:{NFSU2_TR(0x6841f2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6841f3:{NFSU2_TR(0x6841f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B684262:L684262:{c.instructions+=11;NFSU2_TR(0x684262);
__builtin_memmove((R+28),(R+28),4);
}
B684264:{NFSU2_TR(0x684264);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684265:{NFSU2_TR(0x684265);
__builtin_memmove((R+20),(R+16),4);
}
B684267:{NFSU2_TR(0x684267);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684268:{NFSU2_TR(0x684268);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68426b:{NFSU2_TR(0x68426b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68426c:{NFSU2_TR(0x68426c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B68426e:{NFSU2_TR(0x68426e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684270:{NFSU2_TR(0x684270);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684271:{NFSU2_TR(0x684271);
__builtin_memmove((R+28),(R+4),4);
}
B684273:{NFSU2_TR(0x684273);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6842ce;}}
}
B684275:L684275:{c.instructions+=3;NFSU2_TR(0x684275);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B684278:{NFSU2_TR(0x684278);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68427a:{NFSU2_TR(0x68427a);
if(r1(R+518)){{goto L68445f;}}
}
B684280:L684280:{c.instructions+=3;NFSU2_TR(0x684280);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B684282:{NFSU2_TR(0x684282);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684285:{NFSU2_TR(0x684285);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68445f;}}
}
B68428b:L68428b:{c.instructions+=1;NFSU2_TR(0x68428b);
{goto L68428f;}
}
B68428d:L68428d:{c.instructions+=1;NFSU2_TR(0x68428d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B68428f:L68428f:{c.instructions+=9;NFSU2_TR(0x68428f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684292:{NFSU2_TR(0x684292);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B684294:{NFSU2_TR(0x684294);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684295:{NFSU2_TR(0x684295);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684296:{NFSU2_TR(0x684296);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B684299:{NFSU2_TR(0x684299);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68429a:{NFSU2_TR(0x68429a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68429b:{NFSU2_TR(0x68429b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6842a1:{NFSU2_TR(0x6842a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6842a6ull));
TAIL_STATIC(0x699c39u,699);
}
B6842a6:L6842a6:{c.instructions+=4;NFSU2_TR(0x6842a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6842a9:{NFSU2_TR(0x6842a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6842ac:{NFSU2_TR(0x6842ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6842af:{NFSU2_TR(0x6842af);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6842b9;}}
}
B6842b1:L6842b1:{c.instructions+=3;NFSU2_TR(0x6842b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6842b4:{NFSU2_TR(0x6842b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6842b7:{NFSU2_TR(0x6842b7);
{goto L6842bb;}
}
B6842b9:L6842b9:{c.instructions+=1;NFSU2_TR(0x6842b9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6842bb:L6842bb:{c.instructions+=2;NFSU2_TR(0x6842bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6842bd:{NFSU2_TR(0x6842bd);
if(r1(R+518)){{goto L6842c3;}}
}
B6842bf:L6842bf:{c.instructions+=1;NFSU2_TR(0x6842bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6842c3:L6842c3:{c.instructions+=3;NFSU2_TR(0x6842c3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6842c4:{NFSU2_TR(0x6842c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6842c7:{NFSU2_TR(0x6842c7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68428du);}goto L68428d;}}
}
B6842c9:L6842c9:{c.instructions+=1;NFSU2_TR(0x6842c9);
{goto L68445f;}
}
B6842ce:L6842ce:{c.instructions+=3;NFSU2_TR(0x6842ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6842d1:{NFSU2_TR(0x6842d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6842d4:{NFSU2_TR(0x6842d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6843bf;}}
}
B6842da:L6842da:{c.instructions+=3;NFSU2_TR(0x6842da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6842dd:{NFSU2_TR(0x6842dd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6842df:{NFSU2_TR(0x6842df);
if(r1(R+518)){{goto L68445f;}}
}
B6842e5:L6842e5:{c.instructions+=3;NFSU2_TR(0x6842e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6842e8:{NFSU2_TR(0x6842e8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6842eb:{NFSU2_TR(0x6842eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684334;}}
}
B6842ed:L6842ed:{c.instructions+=3;NFSU2_TR(0x6842ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6842ef:{NFSU2_TR(0x6842ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6842f3:{NFSU2_TR(0x6842f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684312;}}
}
B6842f5:L6842f5:{c.instructions+=2;NFSU2_TR(0x6842f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6842f8:{NFSU2_TR(0x6842f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68445f;}}
}
B6842fe:L6842fe:{c.instructions+=6;NFSU2_TR(0x6842fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684301:{NFSU2_TR(0x684301);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B684304:{NFSU2_TR(0x684304);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B684307:{NFSU2_TR(0x684307);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B684308:{NFSU2_TR(0x684308);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B68430b:{NFSU2_TR(0x68430b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6842feu);}goto L6842fe;}}
}
B68430d:L68430d:{c.instructions+=1;NFSU2_TR(0x68430d);
{goto L68445f;}
}
B684312:L684312:{c.instructions+=2;NFSU2_TR(0x684312);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684315:{NFSU2_TR(0x684315);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68445f;}}
}
B68431b:L68431b:{c.instructions+=8;NFSU2_TR(0x68431b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68431e:{NFSU2_TR(0x68431e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B684321:{NFSU2_TR(0x684321);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B684323:{NFSU2_TR(0x684323);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B684326:{NFSU2_TR(0x684326);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B684329:{NFSU2_TR(0x684329);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B68432a:{NFSU2_TR(0x68432a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B68432d:{NFSU2_TR(0x68432d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68431bu);}goto L68431b;}}
}
B68432f:L68432f:{c.instructions+=1;NFSU2_TR(0x68432f);
{goto L68445f;}
}
B684334:L684334:{c.instructions+=4;NFSU2_TR(0x684334);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B684336:{NFSU2_TR(0x684336);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B684338:{NFSU2_TR(0x684338);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68433b:{NFSU2_TR(0x68433b);
if(r1(R+518)){{goto L68436f;}}
}
B68433d:L68433d:{c.instructions+=2;NFSU2_TR(0x68433d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68433e:{NFSU2_TR(0x68433e);
if(r1(R+518)){{goto L684368;}}
}
B684340:L684340:{c.instructions+=2;NFSU2_TR(0x684340);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B684341:{NFSU2_TR(0x684341);
if(r1(R+518)){{goto L68434d;}}
}
B684343:L684343:{c.instructions+=2;NFSU2_TR(0x684343);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B684344:{NFSU2_TR(0x684344);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684383;}}
}
B684346:L684346:{c.instructions+=3;NFSU2_TR(0x684346);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B684348:{NFSU2_TR(0x684348);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68434b:{NFSU2_TR(0x68434b);
{goto L684383;}
}
B68434d:L68434d:{c.instructions+=5;NFSU2_TR(0x68434d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684350:{NFSU2_TR(0x684350);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B684352:{NFSU2_TR(0x684352);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B684354:{NFSU2_TR(0x684354);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B684357:{NFSU2_TR(0x684357);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L68435f;}}
}
B684359:L684359:{c.instructions+=1;NFSU2_TR(0x684359);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B68435f:L68435f:{c.instructions+=2;NFSU2_TR(0x68435f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B684366:{NFSU2_TR(0x684366);
{goto L684383;}
}
B684368:L684368:{c.instructions+=3;NFSU2_TR(0x684368);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B68436a:{NFSU2_TR(0x68436a);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B68436d:{NFSU2_TR(0x68436d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68435fu);}goto L68435f;}
}
B68436f:L68436f:{c.instructions+=3;NFSU2_TR(0x68436f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684372:{NFSU2_TR(0x684372);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B684374:{NFSU2_TR(0x684374);
if(r1(R+518)){{goto L68437a;}}
}
B684376:L684376:{c.instructions+=2;NFSU2_TR(0x684376);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B684378:{NFSU2_TR(0x684378);
{goto L68437c;}
}
B68437a:L68437a:{c.instructions+=1;NFSU2_TR(0x68437a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B68437c:L68437c:{c.instructions+=1;NFSU2_TR(0x68437c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B684383:L684383:{c.instructions+=8;NFSU2_TR(0x684383);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684386:{NFSU2_TR(0x684386);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684387:{NFSU2_TR(0x684387);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684388:{NFSU2_TR(0x684388);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68438b:{NFSU2_TR(0x68438b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68438c:{NFSU2_TR(0x68438c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68438d:{NFSU2_TR(0x68438d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684390:{NFSU2_TR(0x684390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684395ull));
TAIL_STATIC(0x699c39u,699);
}
B684395:L684395:{c.instructions+=4;NFSU2_TR(0x684395);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B684397:{NFSU2_TR(0x684397);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68439a:{NFSU2_TR(0x68439a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B68439d:{NFSU2_TR(0x68439d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6843a7;}}
}
B68439f:L68439f:{c.instructions+=3;NFSU2_TR(0x68439f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6843a2:{NFSU2_TR(0x6843a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6843a5:{NFSU2_TR(0x6843a5);
{goto L6843a9;}
}
B6843a7:L6843a7:{c.instructions+=1;NFSU2_TR(0x6843a7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6843a9:L6843a9:{c.instructions+=2;NFSU2_TR(0x6843a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6843ab:{NFSU2_TR(0x6843ab);
if(r1(R+518)){{goto L68445f;}}
}
B6843b1:L6843b1:{c.instructions+=4;NFSU2_TR(0x6843b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6843b4:{NFSU2_TR(0x6843b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B6843b6:{NFSU2_TR(0x6843b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6843ba:{NFSU2_TR(0x6843ba);
{goto L68445f;}
}
B6843bf:L6843bf:{c.instructions+=2;NFSU2_TR(0x6843bf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6843c2:{NFSU2_TR(0x6843c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6843d2;}}
}
B6843c4:L6843c4:{c.instructions+=5;NFSU2_TR(0x6843c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6843c5:{NFSU2_TR(0x6843c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6843c8:{NFSU2_TR(0x6843c8);
__builtin_memmove((R+4),(R+28),4);
}
B6843ca:{NFSU2_TR(0x6843ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6843cb:{NFSU2_TR(0x6843cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6843d0ull));
TAIL_STATIC(0x682bb1u,682);
}
B6843d0:L6843d0:{c.instructions+=1;NFSU2_TR(0x6843d0);
{goto L6843ec;}
}
B6843d2:L6843d2:{c.instructions+=2;NFSU2_TR(0x6843d2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6843d5:{NFSU2_TR(0x6843d5);
if(r1(R+518)){{goto L6843f5;}}
}
B6843d7:L6843d7:{c.instructions+=5;NFSU2_TR(0x6843d7);
u8 U[4];
w4(U+0,u32(0x7b7c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6843dc:{NFSU2_TR(0x6843dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6843dd:{NFSU2_TR(0x6843dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6843de:{NFSU2_TR(0x6843de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6843df:{NFSU2_TR(0x6843df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6843e4ull));
TAIL_STATIC(0x675267u,675);
}
B6843e4:L6843e4:{c.instructions+=2;NFSU2_TR(0x6843e4);
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
B6843e7:{NFSU2_TR(0x6843e7);
w4(R+0,u32(0x80004005ull));
}
B6843ec:L6843ec:{c.instructions+=5;NFSU2_TR(0x6843ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6843ed:{NFSU2_TR(0x6843ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6843ee:{NFSU2_TR(0x6843ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6843ef:{NFSU2_TR(0x6843ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6843f0:{NFSU2_TR(0x6843f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6843f3:L6843f3:{c.instructions+=1;NFSU2_TR(0x6843f3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6843f5:L6843f5:{c.instructions+=3;NFSU2_TR(0x6843f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6843f8:{NFSU2_TR(0x6843f8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6843fa:{NFSU2_TR(0x6843fa);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6843d7u);}goto L6843d7;}}
}
B6843fc:L6843fc:{c.instructions+=2;NFSU2_TR(0x6843fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684400:{NFSU2_TR(0x684400);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684427;}}
}
B684402:L684402:{c.instructions+=4;NFSU2_TR(0x684402);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B684404:{NFSU2_TR(0x684404);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B684405:{NFSU2_TR(0x684405);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684409:{NFSU2_TR(0x684409);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68440e;}}
}
B68440b:L68440b:{c.instructions+=1;NFSU2_TR(0x68440b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68440e:L68440e:{c.instructions+=5;NFSU2_TR(0x68440e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68440f:{NFSU2_TR(0x68440f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684412:{NFSU2_TR(0x684412);
__builtin_memmove((R+4),(R+28),4);
}
B684414:{NFSU2_TR(0x684414);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684415:{NFSU2_TR(0x684415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68441aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684262u);}goto L684262;}
}
B68441a:L68441a:{c.instructions+=2;NFSU2_TR(0x68441a);
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
B68441c:{NFSU2_TR(0x68441c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6843ecu);}goto L6843ec;}}
}
B68441e:L68441e:{c.instructions+=3;NFSU2_TR(0x68441e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684421:{NFSU2_TR(0x684421);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684423:{NFSU2_TR(0x684423);
if(r1(R+518)){{goto L684458;}}
}
B684425:L684425:{c.instructions+=1;NFSU2_TR(0x684425);
{goto L684452;}
}
B684427:L684427:{c.instructions+=2;NFSU2_TR(0x684427);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684429:{NFSU2_TR(0x684429);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6843d7u);}goto L6843d7;}}
}
B68442b:L68442b:{c.instructions+=2;NFSU2_TR(0x68442b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68442f:{NFSU2_TR(0x68442f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6843d7u);}goto L6843d7;}}
}
B684431:L684431:{c.instructions+=7;NFSU2_TR(0x684431);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B684434:{NFSU2_TR(0x684434);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B684438:{NFSU2_TR(0x684438);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68443a:{NFSU2_TR(0x68443a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68443d:{NFSU2_TR(0x68443d);
__builtin_memmove((R+4),(R+28),4);
}
B68443f:{NFSU2_TR(0x68443f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684440:{NFSU2_TR(0x684440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684445ull));
TAIL_STATIC(0x682bb1u,682);
}
B684445:L684445:{c.instructions+=2;NFSU2_TR(0x684445);
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
B684447:{NFSU2_TR(0x684447);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6843ecu);}goto L6843ec;}}
}
B684449:L684449:{c.instructions+=2;NFSU2_TR(0x684449);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68444d:{NFSU2_TR(0x68444d);
if(r1(R+518)){{goto L684458;}}
}
B68444f:L68444f:{c.instructions+=1;NFSU2_TR(0x68444f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684452:L684452:{c.instructions+=2;NFSU2_TR(0x684452);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B684455:{NFSU2_TR(0x684455);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684458:L684458:{c.instructions+=3;NFSU2_TR(0x684458);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68445b:{NFSU2_TR(0x68445b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68445d:{NFSU2_TR(0x68445d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6843f3u);}goto L6843f3;}}
}
B68445f:L68445f:{c.instructions+=2;NFSU2_TR(0x68445f);
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
B684461:{NFSU2_TR(0x684461);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6843ecu);}goto L6843ec;}
}
B684463:L684463:{c.instructions+=9;NFSU2_TR(0x684463);
__builtin_memmove((R+28),(R+28),4);
}
B684465:{NFSU2_TR(0x684465);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684466:{NFSU2_TR(0x684466);
__builtin_memmove((R+20),(R+16),4);
}
B684468:{NFSU2_TR(0x684468);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684469:{NFSU2_TR(0x684469);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68446c:{NFSU2_TR(0x68446c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684470:{NFSU2_TR(0x684470);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684471:{NFSU2_TR(0x684471);
__builtin_memmove((R+24),(R+4),4);
}
B684473:{NFSU2_TR(0x684473);
if(r1(R+518)){{goto L68447c;}}
}
B684475:L684475:{c.instructions+=2;NFSU2_TR(0x684475);
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
B684477:{NFSU2_TR(0x684477);
{goto L68455f;}
}
B68447c:L68447c:{c.instructions+=8;NFSU2_TR(0x68447c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68447d:{NFSU2_TR(0x68447d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68447e:{NFSU2_TR(0x68447e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B684481:{NFSU2_TR(0x684481);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B684485:{NFSU2_TR(0x684485);
__builtin_memmove((R+0),(R+28),4);
}
B684487:{NFSU2_TR(0x684487);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B68448a:{NFSU2_TR(0x68448a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68448b:{NFSU2_TR(0x68448b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684490ull));
TAIL_STATIC(0x575620u,575);
}
B684490:L684490:{c.instructions+=4;NFSU2_TR(0x684490);
__builtin_memmove((R+12),(R+0),4);
}
B684492:{NFSU2_TR(0x684492);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684494:{NFSU2_TR(0x684494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684495:{NFSU2_TR(0x684495);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6844a3;}}
}
B684497:L684497:{c.instructions+=2;NFSU2_TR(0x684497);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B68449e:{NFSU2_TR(0x68449e);
{goto L684546;}
}
B6844a3:L6844a3:{c.instructions+=4;NFSU2_TR(0x6844a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6844a4:{NFSU2_TR(0x6844a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6844a5:{NFSU2_TR(0x6844a5);
__builtin_memmove((R+4),(R+24),4);
}
B6844a7:{NFSU2_TR(0x6844a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6844acull));
TAIL_STATIC(0x673b2cu,673);
}
B6844ac:L6844ac:{c.instructions+=3;NFSU2_TR(0x6844ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6844ae:{NFSU2_TR(0x6844ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6844b1:{NFSU2_TR(0x6844b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L684546;}}
}
B6844b7:L6844b7:{c.instructions+=5;NFSU2_TR(0x6844b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6844b9:{NFSU2_TR(0x6844b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6844ba:{NFSU2_TR(0x6844ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6844bd:{NFSU2_TR(0x6844bd);
__builtin_memmove((R+4),(R+24),4);
}
B6844bf:{NFSU2_TR(0x6844bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6844c4ull));
TAIL_STATIC(0x682bb1u,682);
}
B6844c4:L6844c4:{c.instructions+=3;NFSU2_TR(0x6844c4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6844c6:{NFSU2_TR(0x6844c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6844c9:{NFSU2_TR(0x6844c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L684546;}}
}
B6844cb:L6844cb:{c.instructions+=11;NFSU2_TR(0x6844cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6844cd:{NFSU2_TR(0x6844cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6844cf:{NFSU2_TR(0x6844cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6844d0:{NFSU2_TR(0x6844d0);
__builtin_memmove((R+0),(R+28),4);
}
B6844d2:{NFSU2_TR(0x6844d2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6844d7:{NFSU2_TR(0x6844d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6844d8:{NFSU2_TR(0x6844d8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6844dd:{NFSU2_TR(0x6844dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6844de:{NFSU2_TR(0x6844de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6844e1:{NFSU2_TR(0x6844e1);
__builtin_memmove((R+4),(R+24),4);
}
B6844e3:{NFSU2_TR(0x6844e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6844e8ull));
TAIL_STATIC(0x6758ceu,675);
}
B6844e8:L6844e8:{c.instructions+=3;NFSU2_TR(0x6844e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6844ea:{NFSU2_TR(0x6844ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6844ed:{NFSU2_TR(0x6844ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L684546;}}
}
B6844ef:L6844ef:{c.instructions+=3;NFSU2_TR(0x6844ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6844f3:{NFSU2_TR(0x6844f3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6844f5:{NFSU2_TR(0x6844f5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L684524;}}
}
B6844f7:L6844f7:{c.instructions+=5;NFSU2_TR(0x6844f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6844fa:{NFSU2_TR(0x6844fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6844fd:{NFSU2_TR(0x6844fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684500:{NFSU2_TR(0x684500);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B684503:{NFSU2_TR(0x684503);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L68450d;}}
}
B684505:L684505:{c.instructions+=3;NFSU2_TR(0x684505);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B684508:{NFSU2_TR(0x684508);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B68450b:{NFSU2_TR(0x68450b);
{goto L68450f;}
}
B68450d:L68450d:{c.instructions+=1;NFSU2_TR(0x68450d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B68450f:L68450f:{c.instructions+=2;NFSU2_TR(0x68450f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684511:{NFSU2_TR(0x684511);
if(r1(R+518)){{goto L68451c;}}
}
B684513:L684513:{c.instructions+=2;NFSU2_TR(0x684513);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684519:{NFSU2_TR(0x684519);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68451c:L68451c:{c.instructions+=3;NFSU2_TR(0x68451c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68451f:{NFSU2_TR(0x68451f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B684522:{NFSU2_TR(0x684522);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6844f7u);}goto L6844f7;}}
}
B684524:L684524:{c.instructions+=11;NFSU2_TR(0x684524);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684527:{NFSU2_TR(0x684527);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684529:{NFSU2_TR(0x684529);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68452b:{NFSU2_TR(0x68452b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68452d:{NFSU2_TR(0x68452d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68452f:{NFSU2_TR(0x68452f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684535:{NFSU2_TR(0x684535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684538:{NFSU2_TR(0x684538);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684539:{NFSU2_TR(0x684539);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68453c:{NFSU2_TR(0x68453c);
__builtin_memmove((R+4),(R+24),4);
}
B68453e:{NFSU2_TR(0x68453e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684543ull));
TAIL_STATIC(0x67856cu,678);
}
B684543:L684543:{c.instructions+=1;NFSU2_TR(0x684543);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684546:L684546:{c.instructions+=2;NFSU2_TR(0x684546);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684547:{NFSU2_TR(0x684547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68454cull));
TAIL_STATIC(0x575630u,575);
}
B68454c:L68454c:{c.instructions+=5;NFSU2_TR(0x68454c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
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
B684550:{NFSU2_TR(0x684550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684551:{NFSU2_TR(0x684551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B684552:{NFSU2_TR(0x684552);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B684553:{NFSU2_TR(0x684553);
if(r1(R+518)){{goto L68455c;}}
}
B684555:L684555:{c.instructions+=1;NFSU2_TR(0x684555);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68455c:L68455c:{c.instructions+=1;NFSU2_TR(0x68455c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68455f:L68455f:{c.instructions+=3;NFSU2_TR(0x68455f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684560:{NFSU2_TR(0x684560);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B684561:{NFSU2_TR(0x684561);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B684564:L684564:{c.instructions+=12;NFSU2_TR(0x684564);
__builtin_memmove((R+28),(R+28),4);
}
B684566:{NFSU2_TR(0x684566);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684567:{NFSU2_TR(0x684567);
__builtin_memmove((R+20),(R+16),4);
}
B684569:{NFSU2_TR(0x684569);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x94ull))));
}
B68456f:{NFSU2_TR(0x68456f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684570:{NFSU2_TR(0x684570);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684571:{NFSU2_TR(0x684571);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684572:{NFSU2_TR(0x684572);
u8 U[4];
w4(U+0,u32(0x10000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684577:{NFSU2_TR(0x684577);
__builtin_memmove((R+24),(R+4),4);
}
B684579:{NFSU2_TR(0x684579);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68457e:{NFSU2_TR(0x68457e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B684581:{NFSU2_TR(0x684581);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684586ull));
TAIL_STATIC(0x671c51u,671);
}
B684586:L684586:{c.instructions+=6;NFSU2_TR(0x684586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B684589:{NFSU2_TR(0x684589);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68458b:{NFSU2_TR(0x68458b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xfffff800ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684591:{NFSU2_TR(0x684591);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684594:{NFSU2_TR(0x684594);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684597:{NFSU2_TR(0x684597);
if(r1(R+518)){{goto L6845a3;}}
}
B684599:L684599:{c.instructions+=2;NFSU2_TR(0x684599);
w4(R+12,u32(0x8876086cull));
}
B68459e:{NFSU2_TR(0x68459e);
{goto L684a42;}
}
B6845a3:L6845a3:{c.instructions+=2;NFSU2_TR(0x6845a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6845a6:{NFSU2_TR(0x6845a6);
if(r1(R+518)){{goto L6845ad;}}
}
B6845a8:L6845a8:{c.instructions+=2;NFSU2_TR(0x6845a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x18ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6845ab:{NFSU2_TR(0x6845ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684599u);}goto L684599;}}
}
B6845ad:L6845ad:{c.instructions+=2;NFSU2_TR(0x6845ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6845b0:{NFSU2_TR(0x6845b0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684599u);}goto L684599;}}
}
B6845b2:L6845b2:{c.instructions+=3;NFSU2_TR(0x6845b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6845b5:{NFSU2_TR(0x6845b5);
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
B6845b7:{NFSU2_TR(0x6845b7);
if(r1(R+518)){{goto L6845bf;}}
}
B6845b9:L6845b9:{c.instructions+=3;NFSU2_TR(0x6845b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6845bb:{NFSU2_TR(0x6845bb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6845bd:{NFSU2_TR(0x6845bd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6845bfull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6845bf:L6845bf:{c.instructions+=2;NFSU2_TR(0x6845bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6845c2:{NFSU2_TR(0x6845c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6845c7ull));
TAIL_STATIC(0x575630u,575);
}
B6845c7:L6845c7:{c.instructions+=33;NFSU2_TR(0x6845c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6845ca:{NFSU2_TR(0x6845ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6845ce:{NFSU2_TR(0x6845ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6845d1:{NFSU2_TR(0x6845d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6845d2:{NFSU2_TR(0x6845d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6845d5:{NFSU2_TR(0x6845d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6845d7:{NFSU2_TR(0x6845d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6845da:{NFSU2_TR(0x6845da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6845dd:{NFSU2_TR(0x6845dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6845e0:{NFSU2_TR(0x6845e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6845e3:{NFSU2_TR(0x6845e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6845e6:{NFSU2_TR(0x6845e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6845e9:{NFSU2_TR(0x6845e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6845ec:{NFSU2_TR(0x6845ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6845ef:{NFSU2_TR(0x6845ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6845f2:{NFSU2_TR(0x6845f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6845f5:{NFSU2_TR(0x6845f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6845f8:{NFSU2_TR(0x6845f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6845fb:{NFSU2_TR(0x6845fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6845fe:{NFSU2_TR(0x6845fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684601:{NFSU2_TR(0x684601);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684604:{NFSU2_TR(0x684604);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684607:{NFSU2_TR(0x684607);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68460a:{NFSU2_TR(0x68460a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68460d:{NFSU2_TR(0x68460d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684610:{NFSU2_TR(0x684610);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684613:{NFSU2_TR(0x684613);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684616:{NFSU2_TR(0x684616);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684619:{NFSU2_TR(0x684619);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68461c:{NFSU2_TR(0x68461c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68461f:{NFSU2_TR(0x68461f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684625:{NFSU2_TR(0x684625);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68462b:{NFSU2_TR(0x68462b);
if(r1(R+518)){{goto L684657;}}
}
B68462d:L68462d:{c.instructions+=3;NFSU2_TR(0x68462d);
u8 U[4];
w4(U+0,u32(0x1fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684632:{NFSU2_TR(0x684632);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x46580200ull));
s4(u32(r4(U+0)),r4(U+4));
}
B684639:{NFSU2_TR(0x684639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68463eull));
TAIL_STATIC(0x575620u,575);
}
B68463e:L68463e:{c.instructions+=3;NFSU2_TR(0x68463e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684640:{NFSU2_TR(0x684640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684641:{NFSU2_TR(0x684641);
if(r1(R+518)){{goto L68464c;}}
}
B684643:L684643:{c.instructions+=2;NFSU2_TR(0x684643);
__builtin_memmove((R+4),(R+0),4);
}
B684645:{NFSU2_TR(0x684645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68464aull));
TAIL_STATIC(0x6c0359u,6c0);
}
B68464a:L68464a:{c.instructions+=1;NFSU2_TR(0x68464a);
{goto L68464e;}
}
B68464c:L68464c:{c.instructions+=1;NFSU2_TR(0x68464c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68464e:L68464e:{c.instructions+=2;NFSU2_TR(0x68464e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B684652:{NFSU2_TR(0x684652);
{goto L684856;}
}
B684657:L684657:{c.instructions+=2;NFSU2_TR(0x684657);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xc0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B68465a:{NFSU2_TR(0x68465a);
if(r1(R+518)){{goto L6846ed;}}
}
B684660:L684660:{c.instructions+=5;NFSU2_TR(0x684660);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684663:{NFSU2_TR(0x684663);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684664:{NFSU2_TR(0x684664);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684666:{NFSU2_TR(0x684666);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684667:{NFSU2_TR(0x684667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68466cull));
TAIL_STATIC(0x672277u,672);
}
B68466c:L68466c:{c.instructions+=2;NFSU2_TR(0x68466c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68466e:{NFSU2_TR(0x68466e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L68468c;}}
}
B684670:L684670:{c.instructions+=6;NFSU2_TR(0x684670);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684673:{NFSU2_TR(0x684673);
u8 U[4];
w4(U+0,u32(0x7b7d54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684678:{NFSU2_TR(0x684678);
u8 U[4];
w4(U+0,u32(0xdb2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68467d:{NFSU2_TR(0x68467d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68467e:{NFSU2_TR(0x68467e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68467f:{NFSU2_TR(0x68467f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684684ull));
TAIL_STATIC(0x675267u,675);
}
B684684:L684684:{c.instructions+=2;NFSU2_TR(0x684684);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B684687:{NFSU2_TR(0x684687);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684599u);}goto L684599;}
}
B68468c:L68468c:{c.instructions+=6;NFSU2_TR(0x68468c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68468f:{NFSU2_TR(0x68468f);
__builtin_memmove((R+4),(R+0),4);
}
B684691:{NFSU2_TR(0x684691);
w4(R+8,u32(0xffff0000ull));
}
B684696:{NFSU2_TR(0x684696);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B684698:{NFSU2_TR(0x684698);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffe0000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68469e:{NFSU2_TR(0x68469e);
if(r1(R+518)){{goto L6846c9;}}
}
B6846a0:L6846a0:{c.instructions+=2;NFSU2_TR(0x6846a0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6846a2:{NFSU2_TR(0x6846a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6846ed;}}
}
B6846a4:L6846a4:{c.instructions+=2;NFSU2_TR(0x6846a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6846a6:{NFSU2_TR(0x6846a6);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6846ed;}}
}
B6846a8:L6846a8:{c.instructions+=4;NFSU2_TR(0x6846a8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff00ull))));
}
B6846ad:{NFSU2_TR(0x6846ad);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x5ull))));
}
B6846b0:{NFSU2_TR(0x6846b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x300ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6846b5:{NFSU2_TR(0x6846b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6846c0;}}
}
B6846b7:L6846b7:{c.instructions+=2;NFSU2_TR(0x6846b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x7b76e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6846be:{NFSU2_TR(0x6846be);
{goto L6846ed;}
}
B6846c0:L6846c0:{c.instructions+=2;NFSU2_TR(0x6846c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x7b76f8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6846c7:{NFSU2_TR(0x6846c7);
{goto L6846ed;}
}
B6846c9:L6846c9:{c.instructions+=2;NFSU2_TR(0x6846c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6846cc:{NFSU2_TR(0x6846cc);
if(r1(R+518)){{goto L6846ed;}}
}
B6846ce:L6846ce:{c.instructions+=4;NFSU2_TR(0x6846ce);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff00ull))));
}
B6846d3:{NFSU2_TR(0x6846d3);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x5ull))));
}
B6846d6:{NFSU2_TR(0x6846d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x300ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6846db:{NFSU2_TR(0x6846db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6846e6;}}
}
B6846dd:L6846dd:{c.instructions+=2;NFSU2_TR(0x6846dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x7b7650ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6846e4:{NFSU2_TR(0x6846e4);
{goto L6846ed;}
}
B6846e6:L6846e6:{c.instructions+=1;NFSU2_TR(0x6846e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x7b7668ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6846ed:L6846ed:{c.instructions+=5;NFSU2_TR(0x6846ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6846f0:{NFSU2_TR(0x6846f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6846f1:{NFSU2_TR(0x6846f1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6846f3:{NFSU2_TR(0x6846f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6846f6:{NFSU2_TR(0x6846f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6846fbull));
TAIL_STATIC(0x672277u,672);
}
B6846fb:L6846fb:{c.instructions+=2;NFSU2_TR(0x6846fb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6846fd:{NFSU2_TR(0x6846fd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684670u);}goto L684670;}}
}
B684703:L684703:{c.instructions+=5;NFSU2_TR(0x684703);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684706:{NFSU2_TR(0x684706);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68470b:{NFSU2_TR(0x68470b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68470e:{NFSU2_TR(0x68470e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684711:{NFSU2_TR(0x684711);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684721;}}
}
B684713:L684713:{c.instructions+=2;NFSU2_TR(0x684713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xfffe0101ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68471a:{NFSU2_TR(0x68471a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B684721:L684721:{c.instructions+=3;NFSU2_TR(0x684721);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffff0100ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684728:{NFSU2_TR(0x684728);
w4(R+8,u32(0xffff0101ull));
}
B68472d:{NFSU2_TR(0x68472d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684739;}}
}
B68472f:L68472f:{c.instructions+=2;NFSU2_TR(0x68472f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684732:{NFSU2_TR(0x684732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B684739:L684739:{c.instructions+=4;NFSU2_TR(0x684739);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68473c:{NFSU2_TR(0x68473c);
w4(R+4,u32(0xfffe03ffull));
}
B684741:{NFSU2_TR(0x684741);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684743:{NFSU2_TR(0x684743);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6847c2;}}
}
B684745:L684745:{c.instructions+=1;NFSU2_TR(0x684745);
if(r1(R+518)){{goto L684839;}}
}
B68474b:L68474b:{c.instructions+=2;NFSU2_TR(0x68474b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x54580100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684750:{NFSU2_TR(0x684750);
if(r1(R+518)){{goto L68479a;}}
}
B684752:L684752:{c.instructions+=2;NFSU2_TR(0x684752);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0101ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684757:{NFSU2_TR(0x684757);
if(r1(R+518)){{goto L684778;}}
}
B684759:L684759:{c.instructions+=2;NFSU2_TR(0x684759);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68475e:{NFSU2_TR(0x68475e);
if(r1(R+518)){{goto L684778;}}
}
B684760:L684760:{c.instructions+=2;NFSU2_TR(0x684760);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0202ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684765:{NFSU2_TR(0x684765);
if(r1(R+518)){{goto L684778;}}
}
B684767:L684767:{c.instructions+=2;NFSU2_TR(0x684767);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe02ffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68476c:{NFSU2_TR(0x68476c);
if(r1(R+518)){{goto L684778;}}
}
B68476e:L68476e:{c.instructions+=2;NFSU2_TR(0x68476e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0300ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684773:{NFSU2_TR(0x684773);
{goto L684832;}
}
B684778:L684778:{c.instructions+=2;NFSU2_TR(0x684778);
u8 U[4];
w4(U+0,u32(0x1f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68477d:{NFSU2_TR(0x68477d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684782ull));
TAIL_STATIC(0x575620u,575);
}
B684782:L684782:{c.instructions+=3;NFSU2_TR(0x684782);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684784:{NFSU2_TR(0x684784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684785:{NFSU2_TR(0x684785);
if(r1(R+518)){{goto L684854;}}
}
B68478b:L68478b:{c.instructions+=3;NFSU2_TR(0x68478b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68478e:{NFSU2_TR(0x68478e);
__builtin_memmove((R+4),(R+0),4);
}
B684790:{NFSU2_TR(0x684790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684795ull));
TAIL_STATIC(0x6bdad2u,6bd);
}
B684795:L684795:{c.instructions+=1;NFSU2_TR(0x684795);
{goto L684856;}
}
B68479a:L68479a:{c.instructions+=4;NFSU2_TR(0x68479a);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x100ull))));
}
B6847a0:{NFSU2_TR(0x6847a0);
u8 U[4];
w4(U+0,u32(0x1fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6847a5:{NFSU2_TR(0x6847a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6847a8:{NFSU2_TR(0x6847a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6847adull));
TAIL_STATIC(0x575620u,575);
}
B6847ad:L6847ad:{c.instructions+=3;NFSU2_TR(0x6847ad);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6847af:{NFSU2_TR(0x6847af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6847b0:{NFSU2_TR(0x6847b0);
if(r1(R+518)){{goto L684854;}}
}
B6847b6:L6847b6:{c.instructions+=2;NFSU2_TR(0x6847b6);
__builtin_memmove((R+4),(R+0),4);
}
B6847b8:{NFSU2_TR(0x6847b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6847bdull));
TAIL_STATIC(0x6c0359u,6c0);
}
B6847bd:L6847bd:{c.instructions+=1;NFSU2_TR(0x6847bd);
{goto L684856;}
}
B6847c2:L6847c2:{c.instructions+=3;NFSU2_TR(0x6847c2);
w4(R+4,u32(0xffff02ffull));
}
B6847c7:{NFSU2_TR(0x6847c7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6847c9:{NFSU2_TR(0x6847c9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L684826;}}
}
B6847cb:L6847cb:{c.instructions+=1;NFSU2_TR(0x6847cb);
if(r1(R+518)){{goto L6847ed;}}
}
B6847cd:L6847cd:{c.instructions+=2;NFSU2_TR(0x6847cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6847cf:{NFSU2_TR(0x6847cf);
if(r1(R+512)){{goto L684834;}}
}
B6847d1:L6847d1:{c.instructions+=2;NFSU2_TR(0x6847d1);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xffff0104ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6847d6:{NFSU2_TR(0x6847d6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L684808;}}
}
B6847d8:L6847d8:{c.instructions+=2;NFSU2_TR(0x6847d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6847dd:{NFSU2_TR(0x6847dd);
if(r1(R+518)){{goto L6847ed;}}
}
B6847df:L6847df:{c.instructions+=2;NFSU2_TR(0x6847df);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xffff0201ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0201ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6847e4:{NFSU2_TR(0x6847e4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L684834;}}
}
B6847e6:L6847e6:{c.instructions+=2;NFSU2_TR(0x6847e6);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xffff0203ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0203ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6847eb:{NFSU2_TR(0x6847eb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L684834;}}
}
B6847ed:L6847ed:{c.instructions+=2;NFSU2_TR(0x6847ed);
u8 U[4];
w4(U+0,u32(0x22cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6847f2:{NFSU2_TR(0x6847f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6847f7ull));
TAIL_STATIC(0x575620u,575);
}
B6847f7:L6847f7:{c.instructions+=3;NFSU2_TR(0x6847f7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6847f9:{NFSU2_TR(0x6847f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6847fa:{NFSU2_TR(0x6847fa);
if(r1(R+518)){{goto L684854;}}
}
B6847fc:L6847fc:{c.instructions+=3;NFSU2_TR(0x6847fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6847ff:{NFSU2_TR(0x6847ff);
__builtin_memmove((R+4),(R+0),4);
}
B684801:{NFSU2_TR(0x684801);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684806ull));
TAIL_STATIC(0x6babd2u,6ba);
}
B684806:L684806:{c.instructions+=1;NFSU2_TR(0x684806);
{goto L684856;}
}
B684808:L684808:{c.instructions+=4;NFSU2_TR(0x684808);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffffbull))));
}
B68480b:{NFSU2_TR(0x68480b);
u8 U[4];
w4(U+0,u32(0x484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684810:{NFSU2_TR(0x684810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684813:{NFSU2_TR(0x684813);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684818ull));
TAIL_STATIC(0x575620u,575);
}
B684818:L684818:{c.instructions+=3;NFSU2_TR(0x684818);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68481a:{NFSU2_TR(0x68481a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68481b:{NFSU2_TR(0x68481b);
if(r1(R+518)){{goto L684854;}}
}
B68481d:L68481d:{c.instructions+=2;NFSU2_TR(0x68481d);
__builtin_memmove((R+4),(R+0),4);
}
B68481f:{NFSU2_TR(0x68481f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684824ull));
TAIL_STATIC(0x6af129u,6af);
}
B684824:L684824:{c.instructions+=1;NFSU2_TR(0x684824);
{goto L684856;}
}
B684826:L684826:{c.instructions+=2;NFSU2_TR(0x684826);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0300ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68482b:{NFSU2_TR(0x68482b);
if(r1(R+518)){{goto L684839;}}
}
B68482d:L68482d:{c.instructions+=1;NFSU2_TR(0x68482d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff03ffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684832:L684832:{c.instructions+=1;NFSU2_TR(0x684832);
if(r1(R+518)){{goto L684839;}}
}
B684834:L684834:{c.instructions+=2;NFSU2_TR(0x684834);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684837:{NFSU2_TR(0x684837);
{goto L684859;}
}
B684839:L684839:{c.instructions+=2;NFSU2_TR(0x684839);
u8 U[4];
w4(U+0,u32(0x1f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68483e:{NFSU2_TR(0x68483e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684843ull));
TAIL_STATIC(0x575620u,575);
}
B684843:L684843:{c.instructions+=3;NFSU2_TR(0x684843);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684845:{NFSU2_TR(0x684845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684846:{NFSU2_TR(0x684846);
if(r1(R+518)){{goto L684854;}}
}
B684848:L684848:{c.instructions+=3;NFSU2_TR(0x684848);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68484b:{NFSU2_TR(0x68484b);
__builtin_memmove((R+4),(R+0),4);
}
B68484d:{NFSU2_TR(0x68484d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684852ull));
TAIL_STATIC(0x6acbf8u,6ac);
}
B684852:L684852:{c.instructions+=1;NFSU2_TR(0x684852);
{goto L684856;}
}
B684854:L684854:{c.instructions+=1;NFSU2_TR(0x684854);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B684856:L684856:{c.instructions+=1;NFSU2_TR(0x684856);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684859:L684859:{c.instructions+=2;NFSU2_TR(0x684859);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68485c:{NFSU2_TR(0x68485c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684868;}}
}
B68485e:L68485e:{c.instructions+=2;NFSU2_TR(0x68485e);
w4(R+12,u32(0x8007000eull));
}
B684863:{NFSU2_TR(0x684863);
{goto L684a42;}
}
B684868:L684868:{c.instructions+=3;NFSU2_TR(0x684868);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68486b:{NFSU2_TR(0x68486b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68486d:{NFSU2_TR(0x68486d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6848a7;}}
}
B68486f:L68486f:{c.instructions+=8;NFSU2_TR(0x68486f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B684872:{NFSU2_TR(0x684872);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684873:{NFSU2_TR(0x684873);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684876:{NFSU2_TR(0x684876);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x80000000ull))));
}
B68487b:{NFSU2_TR(0x68487b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68487c:{NFSU2_TR(0x68487c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B68487e:{NFSU2_TR(0x68487e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B684884:{NFSU2_TR(0x684884);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684889ull));
TAIL_STATIC(0x64f3e6u,64f);
}
B684889:L684889:{c.instructions+=2;NFSU2_TR(0x684889);
__builtin_memmove((R+4),(R+0),4);
}
B68488b:{NFSU2_TR(0x68488b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684890ull));
TAIL_STATIC(0x65a811u,65a);
}
B684890:L684890:{c.instructions+=3;NFSU2_TR(0x684890);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B684896:{NFSU2_TR(0x684896);
__builtin_memmove((R+12),(R+0),4);
}
B684898:{NFSU2_TR(0x684898);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68489dull));
TAIL_STATIC(0x6996f4u,699);
}
B68489d:L68489d:{c.instructions+=2;NFSU2_TR(0x68489d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68489f:{NFSU2_TR(0x68489f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L684a17;}}
}
B6848a5:L6848a5:{c.instructions+=1;NFSU2_TR(0x6848a5);
{goto L6848aa;}
}
B6848a7:L6848a7:{c.instructions+=1;NFSU2_TR(0x6848a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6848aa:L6848aa:{c.instructions+=3;NFSU2_TR(0x6848aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6848ad:{NFSU2_TR(0x6848ad);
w4(R+12,u32(0xdb1ull));
}
B6848b2:{NFSU2_TR(0x6848b2);
if(r1(R+518)){{goto L6848c4;}}
}
B6848b4:L6848b4:{c.instructions+=5;NFSU2_TR(0x6848b4);
u8 U[4];
w4(U+0,u32(0x7b7d28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6848b9:{NFSU2_TR(0x6848b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6848ba:{NFSU2_TR(0x6848ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6848bb:{NFSU2_TR(0x6848bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6848bc:{NFSU2_TR(0x6848bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6848c1ull));
TAIL_STATIC(0x6752c9u,675);
}
B6848c1:L6848c1:{c.instructions+=1;NFSU2_TR(0x6848c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6848c4:L6848c4:{c.instructions+=2;NFSU2_TR(0x6848c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6848c7:{NFSU2_TR(0x6848c7);
if(r1(R+518)){{goto L6848d9;}}
}
B6848c9:L6848c9:{c.instructions+=5;NFSU2_TR(0x6848c9);
u8 U[4];
w4(U+0,u32(0x7b7cfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6848ce:{NFSU2_TR(0x6848ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6848cf:{NFSU2_TR(0x6848cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6848d0:{NFSU2_TR(0x6848d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6848d1:{NFSU2_TR(0x6848d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6848d6ull));
TAIL_STATIC(0x6752c9u,675);
}
B6848d6:L6848d6:{c.instructions+=1;NFSU2_TR(0x6848d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6848d9:L6848d9:{c.instructions+=3;NFSU2_TR(0x6848d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6848df:{NFSU2_TR(0x6848df);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6848e1:{NFSU2_TR(0x6848e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684902;}}
}
B6848e3:L6848e3:{c.instructions+=3;NFSU2_TR(0x6848e3);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6848e8:{NFSU2_TR(0x6848e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6848f2:{NFSU2_TR(0x6848f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6848f7ull));
TAIL_STATIC(0x575620u,575);
}
B6848f7:L6848f7:{c.instructions+=4;NFSU2_TR(0x6848f7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6848f9:{NFSU2_TR(0x6848f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6848fa:{NFSU2_TR(0x6848fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6848fc:{NFSU2_TR(0x6848fc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68485eu);}goto L68485e;}}
}
B684902:L684902:{c.instructions+=3;NFSU2_TR(0x684902);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B684905:{NFSU2_TR(0x684905);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684906:{NFSU2_TR(0x684906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68490bull));
TAIL_STATIC(0x69985eu,699);
}
B68490b:L68490b:{c.instructions+=3;NFSU2_TR(0x68490b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B68490e:{NFSU2_TR(0x68490e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68490f:{NFSU2_TR(0x68490f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684914ull));
TAIL_STATIC(0x6992e2u,699);
}
B684914:L684914:{c.instructions+=2;NFSU2_TR(0x684914);
__builtin_memmove((R+4),(R+24),4);
}
B684916:{NFSU2_TR(0x684916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68491bull));
TAIL_STATIC(0x682aabu,682);
}
B68491b:L68491b:{c.instructions+=3;NFSU2_TR(0x68491b);
__builtin_memmove((R+12),(R+0),4);
}
B68491d:{NFSU2_TR(0x68491d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68491f:{NFSU2_TR(0x68491f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L684a17;}}
}
B684925:L684925:{c.instructions+=3;NFSU2_TR(0x684925);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684928:{NFSU2_TR(0x684928);
__builtin_memmove((R+4),(R+24),4);
}
B68492a:{NFSU2_TR(0x68492a);
if(r1(R+518)){{goto L684936;}}
}
B68492c:L68492c:{c.instructions+=2;NFSU2_TR(0x68492c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68492f:{NFSU2_TR(0x68492f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684934ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684463u);}goto L684463;}
}
B684934:L684934:{c.instructions+=1;NFSU2_TR(0x684934);
{goto L6849a7;}
}
B684936:L684936:{c.instructions+=2;NFSU2_TR(0x684936);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684939:{NFSU2_TR(0x684939);
if(r1(R+518)){{goto L684964;}}
}
B68493b:L68493b:{c.instructions+=2;NFSU2_TR(0x68493b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68493e:{NFSU2_TR(0x68493e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684943ull));
TAIL_STATIC(0x674ec9u,674);
}
B684943:L684943:{c.instructions+=2;NFSU2_TR(0x684943);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684945:{NFSU2_TR(0x684945);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684960;}}
}
B684947:L684947:{c.instructions+=6;NFSU2_TR(0x684947);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68494a:{NFSU2_TR(0x68494a);
u8 U[4];
w4(U+0,u32(0x7b7ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68494f:{NFSU2_TR(0x68494f);
u8 U[4];
w4(U+0,u32(0xdadull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684954:{NFSU2_TR(0x684954);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684955:{NFSU2_TR(0x684955);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684956:{NFSU2_TR(0x684956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68495bull));
TAIL_STATIC(0x675267u,675);
}
B68495b:L68495b:{c.instructions+=2;NFSU2_TR(0x68495b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B68495e:{NFSU2_TR(0x68495e);
{goto L684988;}
}
B684960:L684960:{c.instructions+=2;NFSU2_TR(0x684960);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B684962:{NFSU2_TR(0x684962);
{goto L684995;}
}
B684964:L684964:{c.instructions+=4;NFSU2_TR(0x684964);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B684967:{NFSU2_TR(0x684967);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684968:{NFSU2_TR(0x684968);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68496b:{NFSU2_TR(0x68496b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684970ull));
TAIL_STATIC(0x674fdfu,674);
}
B684970:L684970:{c.instructions+=2;NFSU2_TR(0x684970);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684972:{NFSU2_TR(0x684972);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684992;}}
}
B684974:L684974:{c.instructions+=5;NFSU2_TR(0x684974);
u8 U[4];
w4(U+0,u32(0x7b7cc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684979:{NFSU2_TR(0x684979);
u8 U[4];
w4(U+0,u32(0xdadull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68497e:{NFSU2_TR(0x68497e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68497f:{NFSU2_TR(0x68497f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684980:{NFSU2_TR(0x684980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684985ull));
TAIL_STATIC(0x675267u,675);
}
B684985:L684985:{c.instructions+=1;NFSU2_TR(0x684985);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B684988:L684988:{c.instructions+=2;NFSU2_TR(0x684988);
w4(R+12,u32(0x80004005ull));
}
B68498d:{NFSU2_TR(0x68498d);
{goto L684a17;}
}
B684992:L684992:{c.instructions+=2;NFSU2_TR(0x684992);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B684994:{NFSU2_TR(0x684994);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B684995:L684995:{c.instructions+=8;NFSU2_TR(0x684995);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684996:{NFSU2_TR(0x684996);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684998:{NFSU2_TR(0x684998);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684999:{NFSU2_TR(0x684999);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68499c:{NFSU2_TR(0x68499c);
__builtin_memmove((R+4),(R+24),4);
}
B68499e:{NFSU2_TR(0x68499e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68499f:{NFSU2_TR(0x68499f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6849a2:{NFSU2_TR(0x6849a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6849a7ull));
TAIL_STATIC(0x681ff6u,681);
}
B6849a7:L6849a7:{c.instructions+=3;NFSU2_TR(0x6849a7);
__builtin_memmove((R+12),(R+0),4);
}
B6849a9:{NFSU2_TR(0x6849a9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6849ab:{NFSU2_TR(0x6849ab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L684a17;}}
}
B6849ad:L6849ad:{c.instructions+=2;NFSU2_TR(0x6849ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6849b0:{NFSU2_TR(0x6849b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684988u);}goto L684988;}}
}
B6849b2:L6849b2:{c.instructions+=2;NFSU2_TR(0x6849b2);
__builtin_memmove((R+4),(R+24),4);
}
B6849b4:{NFSU2_TR(0x6849b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6849b9ull));
TAIL_STATIC(0x67511bu,675);
}
B6849b9:L6849b9:{c.instructions+=3;NFSU2_TR(0x6849b9);
__builtin_memmove((R+12),(R+0),4);
}
B6849bb:{NFSU2_TR(0x6849bb);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6849bd:{NFSU2_TR(0x6849bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L684a17;}}
}
B6849bf:L6849bf:{c.instructions+=5;NFSU2_TR(0x6849bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6849c2:{NFSU2_TR(0x6849c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6849c4:{NFSU2_TR(0x6849c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6849c7:{NFSU2_TR(0x6849c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6849c8:{NFSU2_TR(0x6849c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6849cbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6849cb:L6849cb:{c.instructions+=3;NFSU2_TR(0x6849cb);
__builtin_memmove((R+12),(R+0),4);
}
B6849cd:{NFSU2_TR(0x6849cd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6849cf:{NFSU2_TR(0x6849cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L684a17;}}
}
B6849d1:L6849d1:{c.instructions+=2;NFSU2_TR(0x6849d1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
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
B6849d4:{NFSU2_TR(0x6849d4);
if(r1(R+518)){{goto L684a01;}}
}
B6849d6:L6849d6:{c.instructions+=6;NFSU2_TR(0x6849d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6849d9:{NFSU2_TR(0x6849d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6849da:{NFSU2_TR(0x6849da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6849dd:{NFSU2_TR(0x6849dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6849df:{NFSU2_TR(0x6849df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6849e0:{NFSU2_TR(0x6849e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6849e3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6849e3:L6849e3:{c.instructions+=2;NFSU2_TR(0x6849e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6849e4:{NFSU2_TR(0x6849e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6849e9ull));
TAIL_STATIC(0x672364u,672);
}
B6849e9:L6849e9:{c.instructions+=3;NFSU2_TR(0x6849e9);
__builtin_memmove((R+12),(R+0),4);
}
B6849eb:{NFSU2_TR(0x6849eb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6849ed:{NFSU2_TR(0x6849ed);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L684a01;}}
}
B6849ef:L6849ef:{c.instructions+=3;NFSU2_TR(0x6849ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6849f2:{NFSU2_TR(0x6849f2);
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
B6849f4:{NFSU2_TR(0x6849f4);
if(r1(R+518)){{goto L684a17;}}
}
B6849f6:L6849f6:{c.instructions+=3;NFSU2_TR(0x6849f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6849f8:{NFSU2_TR(0x6849f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6849f9:{NFSU2_TR(0x6849f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6849fcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6849fc:L6849fc:{c.instructions+=2;NFSU2_TR(0x6849fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6849ff:{NFSU2_TR(0x6849ff);
{goto L684a17;}
}
B684a01:L684a01:{c.instructions+=6;NFSU2_TR(0x684a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684a04:{NFSU2_TR(0x684a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684a07:{NFSU2_TR(0x684a07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B684a09:{NFSU2_TR(0x684a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684a0c:{NFSU2_TR(0x684a0c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684a0e:{NFSU2_TR(0x684a0e);
if(r1(R+518)){{goto L684a15;}}
}
B684a10:L684a10:{c.instructions+=2;NFSU2_TR(0x684a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684a13:{NFSU2_TR(0x684a13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B684a15:L684a15:{c.instructions+=1;NFSU2_TR(0x684a15);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B684a17:L684a17:{c.instructions+=4;NFSU2_TR(0x684a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684a1a:{NFSU2_TR(0x684a1a);
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
B684a1c:{NFSU2_TR(0x684a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684a1f:{NFSU2_TR(0x684a1f);
if(r1(R+518)){{goto L684a27;}}
}
B684a21:L684a21:{c.instructions+=3;NFSU2_TR(0x684a21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B684a23:{NFSU2_TR(0x684a23);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684a25:{NFSU2_TR(0x684a25);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684a27ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B684a27:L684a27:{c.instructions+=3;NFSU2_TR(0x684a27);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684a2a:{NFSU2_TR(0x684a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684a2d:{NFSU2_TR(0x684a2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684a32ull));
TAIL_STATIC(0x575630u,575);
}
B684a32:L684a32:{c.instructions+=4;NFSU2_TR(0x684a32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684a33:{NFSU2_TR(0x684a33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684a34:{NFSU2_TR(0x684a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684a37:{NFSU2_TR(0x684a37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684a3cull));
TAIL_STATIC(0x69985eu,699);
}
B684a3c:L684a3c:{c.instructions+=2;NFSU2_TR(0x684a3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684a3d:{NFSU2_TR(0x684a3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684a42ull));
TAIL_STATIC(0x6992e2u,699);
}
B684a42:L684a42:{c.instructions+=2;NFSU2_TR(0x684a42);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B684a45:{NFSU2_TR(0x684a45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684a4aull));
TAIL_STATIC(0x671ca9u,671);
}
B684a4a:L684a4a:{c.instructions+=6;NFSU2_TR(0x684a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B684a4b:{NFSU2_TR(0x684a4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684a4c:{NFSU2_TR(0x684a4c);
__builtin_memmove((R+0),(R+12),4);
}
B684a4e:{NFSU2_TR(0x684a4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B684a4f:{NFSU2_TR(0x684a4f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B684a50:{NFSU2_TR(0x684a50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B684a53:L684a53:{c.instructions+=8;NFSU2_TR(0x684a53);
__builtin_memmove((R+28),(R+28),4);
}
B684a55:{NFSU2_TR(0x684a55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684a56:{NFSU2_TR(0x684a56);
__builtin_memmove((R+20),(R+16),4);
}
B684a58:{NFSU2_TR(0x684a58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684a59:{NFSU2_TR(0x684a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B684a5c:{NFSU2_TR(0x684a5c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B684a5e:{NFSU2_TR(0x684a5e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684a60:{NFSU2_TR(0x684a60);
if(r1(R+518)){{goto L684a64;}}
}
B684a62:L684a62:{c.instructions+=1;NFSU2_TR(0x684a62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B684a64:L684a64:{c.instructions+=3;NFSU2_TR(0x684a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B684a67:{NFSU2_TR(0x684a67);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684a69:{NFSU2_TR(0x684a69);
if(r1(R+518)){{goto L684a6d;}}
}
B684a6b:L684a6b:{c.instructions+=1;NFSU2_TR(0x684a6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B684a6d:L684a6d:{c.instructions+=2;NFSU2_TR(0x684a6d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B684a70:{NFSU2_TR(0x684a70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684a79;}}
}
B684a72:L684a72:{c.instructions+=2;NFSU2_TR(0x684a72);
w4(R+0,u32(0x8876086cull));
}
B684a77:{NFSU2_TR(0x684a77);
{goto L684a95;}
}
B684a79:L684a79:{c.instructions+=12;NFSU2_TR(0x684a79);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684a7a:{NFSU2_TR(0x684a7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684a7b:{NFSU2_TR(0x684a7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684a7e:{NFSU2_TR(0x684a7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684a81:{NFSU2_TR(0x684a81);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684a84:{NFSU2_TR(0x684a84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684a85:{NFSU2_TR(0x684a85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684a86:{NFSU2_TR(0x684a86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684a87:{NFSU2_TR(0x684a87);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684a8a:{NFSU2_TR(0x684a8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684a8d:{NFSU2_TR(0x684a8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684a90:{NFSU2_TR(0x684a90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684a95ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684564u);}goto L684564;}
}
B684a95:L684a95:{c.instructions+=3;NFSU2_TR(0x684a95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684a96:{NFSU2_TR(0x684a96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B684a97:{NFSU2_TR(0x684a97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B684a9a:L684a9a:{c.instructions+=8;NFSU2_TR(0x684a9a);
__builtin_memmove((R+28),(R+28),4);
}
B684a9c:{NFSU2_TR(0x684a9c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684a9d:{NFSU2_TR(0x684a9d);
__builtin_memmove((R+20),(R+16),4);
}
B684a9f:{NFSU2_TR(0x684a9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684aa0:{NFSU2_TR(0x684aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B684aa3:{NFSU2_TR(0x684aa3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B684aa5:{NFSU2_TR(0x684aa5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684aa7:{NFSU2_TR(0x684aa7);
if(r1(R+518)){{goto L684aab;}}
}
B684aa9:L684aa9:{c.instructions+=1;NFSU2_TR(0x684aa9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B684aab:L684aab:{c.instructions+=3;NFSU2_TR(0x684aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684aae:{NFSU2_TR(0x684aae);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684ab0:{NFSU2_TR(0x684ab0);
if(r1(R+518)){{goto L684ab4;}}
}
B684ab2:L684ab2:{c.instructions+=1;NFSU2_TR(0x684ab2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B684ab4:L684ab4:{c.instructions+=14;NFSU2_TR(0x684ab4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ab5:{NFSU2_TR(0x684ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684ab8:{NFSU2_TR(0x684ab8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ab9:{NFSU2_TR(0x684ab9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe7ull))));
}
B684abc:{NFSU2_TR(0x684abc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684abd:{NFSU2_TR(0x684abd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684ac0:{NFSU2_TR(0x684ac0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684ac3:{NFSU2_TR(0x684ac3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684ac6:{NFSU2_TR(0x684ac6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ac7:{NFSU2_TR(0x684ac7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684aca:{NFSU2_TR(0x684aca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684acb:{NFSU2_TR(0x684acb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684ace:{NFSU2_TR(0x684ace);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684ad1:{NFSU2_TR(0x684ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684ad6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684564u);}goto L684564;}
}
B684ad6:L684ad6:{c.instructions+=3;NFSU2_TR(0x684ad6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684ad7:{NFSU2_TR(0x684ad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B684ad8:{NFSU2_TR(0x684ad8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B684adb:L684adb:{c.instructions+=11;NFSU2_TR(0x684adb);
__builtin_memmove((R+28),(R+28),4);
}
B684add:{NFSU2_TR(0x684add);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ade:{NFSU2_TR(0x684ade);
__builtin_memmove((R+20),(R+16),4);
}
B684ae0:{NFSU2_TR(0x684ae0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ae1:{NFSU2_TR(0x684ae1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ae2:{NFSU2_TR(0x684ae2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ae3:{NFSU2_TR(0x684ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B684ae6:{NFSU2_TR(0x684ae6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ae7:{NFSU2_TR(0x684ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B684aea:{NFSU2_TR(0x684aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684aed:{NFSU2_TR(0x684aed);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B684aef:L684aef:{c.instructions+=2;NFSU2_TR(0x684aef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684af1:{NFSU2_TR(0x684af1);
if(r1(R+518)){{goto L684af5;}}
}
B684af3:L684af3:{c.instructions+=1;NFSU2_TR(0x684af3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B684af5:L684af5:{c.instructions+=3;NFSU2_TR(0x684af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684af8:{NFSU2_TR(0x684af8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684afa:{NFSU2_TR(0x684afa);
if(r1(R+518)){{goto L684afe;}}
}
B684afc:L684afc:{c.instructions+=1;NFSU2_TR(0x684afc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B684afe:L684afe:{c.instructions+=6;NFSU2_TR(0x684afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684b01:{NFSU2_TR(0x684b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684b04:{NFSU2_TR(0x684b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xffffffe7ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B684b08:{NFSU2_TR(0x684b08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684b09:{NFSU2_TR(0x684b09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B684b0b:{NFSU2_TR(0x684b0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684b10ull));
TAIL_STATIC(0x6757b5u,675);
}
B684b10:L684b10:{c.instructions+=2;NFSU2_TR(0x684b10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684b12:{NFSU2_TR(0x684b12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684b8d;}}
}
B684b14:L684b14:{c.instructions+=4;NFSU2_TR(0x684b14);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684b16:{NFSU2_TR(0x684b16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684b17:{NFSU2_TR(0x684b17);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684b1a:{NFSU2_TR(0x684b1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684bca;}}
}
B684b20:L684b20:{c.instructions+=5;NFSU2_TR(0x684b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684b23:{NFSU2_TR(0x684b23);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B684b27:{NFSU2_TR(0x684b27);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684b2a:{NFSU2_TR(0x684b2a);
__builtin_memmove((R+8),(R+24),4);
}
B684b2c:{NFSU2_TR(0x684b2c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L684be3;}}
}
B684b32:L684b32:{c.instructions+=2;NFSU2_TR(0x684b32);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684b35:{NFSU2_TR(0x684b35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684b3f;}}
}
B684b37:L684b37:{c.instructions+=3;NFSU2_TR(0x684b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B684b3a:{NFSU2_TR(0x684b3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684b3d:{NFSU2_TR(0x684b3d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684b32u);}goto L684b32;}}
}
B684b3f:L684b3f:{c.instructions+=2;NFSU2_TR(0x684b3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684b43:{NFSU2_TR(0x684b43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684b4c;}}
}
B684b45:L684b45:{c.instructions+=3;NFSU2_TR(0x684b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B684b48:{NFSU2_TR(0x684b48);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684b4a:{NFSU2_TR(0x684b4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684b3fu);}goto L684b3f;}}
}
B684b4c:L684b4c:{c.instructions+=2;NFSU2_TR(0x684b4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684b4f:{NFSU2_TR(0x684b4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684b56;}}
}
B684b51:L684b51:{c.instructions+=2;NFSU2_TR(0x684b51);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684b54:{NFSU2_TR(0x684b54);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684b37u);}goto L684b37;}}
}
B684b56:L684b56:{c.instructions+=3;NFSU2_TR(0x684b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684b59:{NFSU2_TR(0x684b59);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684b5b:{NFSU2_TR(0x684b5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684b67;}}
}
B684b5d:L684b5d:{c.instructions+=2;NFSU2_TR(0x684b5d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1bull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684b61:{NFSU2_TR(0x684b61);
if(r1(R+518)){{goto L684bf3;}}
}
B684b67:L684b67:{c.instructions+=2;NFSU2_TR(0x684b67);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684b6a:{NFSU2_TR(0x684b6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684cd7;}}
}
B684b70:L684b70:{c.instructions+=2;NFSU2_TR(0x684b70);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684b74:{NFSU2_TR(0x684b74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684c20;}}
}
B684b7a:L684b7a:{c.instructions+=3;NFSU2_TR(0x684b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684b7d:{NFSU2_TR(0x684b7d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684b80:{NFSU2_TR(0x684b80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684c20;}}
}
B684b86:L684b86:{c.instructions+=2;NFSU2_TR(0x684b86);
__builtin_memmove((R+24),(R+0),4);
}
B684b88:{NFSU2_TR(0x684b88);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684aefu);}goto L684aef;}
}
B684b8d:L684b8d:{c.instructions+=2;NFSU2_TR(0x684b8d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684b8f:{NFSU2_TR(0x684b8f);
if(r1(R+518)){{goto L684ba8;}}
}
B684b91:L684b91:{c.instructions+=2;NFSU2_TR(0x684b91);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684b95:{NFSU2_TR(0x684b95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684ba8;}}
}
B684b97:L684b97:{c.instructions+=3;NFSU2_TR(0x684b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684b9a:{NFSU2_TR(0x684b9a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684b9c:{NFSU2_TR(0x684b9c);
if(r1(R+518)){{goto L684ba8;}}
}
B684b9e:L684b9e:{c.instructions+=2;NFSU2_TR(0x684b9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684ba2:{NFSU2_TR(0x684ba2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684ba8;}}
}
B684ba4:L684ba4:{c.instructions+=1;NFSU2_TR(0x684ba4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xf3ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B684ba8:L684ba8:{c.instructions+=13;NFSU2_TR(0x684ba8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684bab:{NFSU2_TR(0x684bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684bae:{NFSU2_TR(0x684bae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684baf:{NFSU2_TR(0x684baf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684bb2:{NFSU2_TR(0x684bb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684bb5:{NFSU2_TR(0x684bb5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684bb6:{NFSU2_TR(0x684bb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684bb7:{NFSU2_TR(0x684bb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684bb8:{NFSU2_TR(0x684bb8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684bb9:{NFSU2_TR(0x684bb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684bba:{NFSU2_TR(0x684bba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684bbd:{NFSU2_TR(0x684bbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684bc0:{NFSU2_TR(0x684bc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684bc5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684564u);}goto L684564;}
}
B684bc5:L684bc5:{c.instructions+=1;NFSU2_TR(0x684bc5);
{goto L684cf2;}
}
B684bca:L684bca:{c.instructions+=5;NFSU2_TR(0x684bca);
u8 U[4];
w4(U+0,u32(0x7b7df8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684bcf:{NFSU2_TR(0x684bcf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684bd0:{NFSU2_TR(0x684bd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684bd1:{NFSU2_TR(0x684bd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684bd4:{NFSU2_TR(0x684bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684bd9ull));
TAIL_STATIC(0x675267u,675);
}
B684bd9:L684bd9:{c.instructions+=2;NFSU2_TR(0x684bd9);
w4(R+0,u32(0x80004005ull));
}
B684bde:{NFSU2_TR(0x684bde);
{goto L684cef;}
}
B684be3:L684be3:{c.instructions+=4;NFSU2_TR(0x684be3);
u8 U[4];
w4(U+0,u32(0x7b7db0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684be8:{NFSU2_TR(0x684be8);
u8 U[4];
w4(U+0,u32(0xdacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684bed:{NFSU2_TR(0x684bed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684bee:{NFSU2_TR(0x684bee);
{goto L684ce2;}
}
B684bf3:L684bf3:{c.instructions+=16;NFSU2_TR(0x684bf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684bf6:{NFSU2_TR(0x684bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684bf9:{NFSU2_TR(0x684bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684bfc:{NFSU2_TR(0x684bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B684bff:{NFSU2_TR(0x684bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684c02:{NFSU2_TR(0x684c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B684c05:{NFSU2_TR(0x684c05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684c06:{NFSU2_TR(0x684c06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684c09:{NFSU2_TR(0x684c09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684c0a:{NFSU2_TR(0x684c0a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684c0b:{NFSU2_TR(0x684c0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684c0c:{NFSU2_TR(0x684c0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684c0d:{NFSU2_TR(0x684c0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684c10:{NFSU2_TR(0x684c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684c13:{NFSU2_TR(0x684c13);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684c16:{NFSU2_TR(0x684c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684c1bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684a9au);}goto L684a9a;}
}
B684c1b:L684c1b:{c.instructions+=1;NFSU2_TR(0x684c1b);
{goto L684cf2;}
}
B684c20:L684c20:{c.instructions+=3;NFSU2_TR(0x684c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684c23:{NFSU2_TR(0x684c23);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684c26:{NFSU2_TR(0x684c26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684c6c;}}
}
B684c28:L684c28:{c.instructions+=2;NFSU2_TR(0x684c28);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684c2a:{NFSU2_TR(0x684c2a);
if(r1(R+518)){{goto L684c61;}}
}
B684c2c:L684c2c:{c.instructions+=3;NFSU2_TR(0x684c2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684c2d:{NFSU2_TR(0x684c2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684c30:{NFSU2_TR(0x684c30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684c35ull));
TAIL_STATIC(0x670f08u,670);
}
B684c35:L684c35:{c.instructions+=2;NFSU2_TR(0x684c35);
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
B684c37:{NFSU2_TR(0x684c37);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L684cf2;}}
}
B684c3d:L684c3d:{c.instructions+=7;NFSU2_TR(0x684c3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B684c3f:{NFSU2_TR(0x684c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684c42:{NFSU2_TR(0x684c42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B684c44:{NFSU2_TR(0x684c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B684c47:{NFSU2_TR(0x684c47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684c48:{NFSU2_TR(0x684c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684c4b:{NFSU2_TR(0x684c4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684c4eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B684c4e:L684c4e:{c.instructions+=4;NFSU2_TR(0x684c4e);
__builtin_memmove((R+28),(R+0),4);
}
B684c50:{NFSU2_TR(0x684c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684c53:{NFSU2_TR(0x684c53);
__builtin_memmove((R+4),(R+0),4);
}
B684c55:{NFSU2_TR(0x684c55);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B684c58:L684c58:{c.instructions+=1;NFSU2_TR(0x684c58);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L684c5a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684c58u);}goto L684c58;}
}
B684c5a:L684c5a:{c.instructions+=2;NFSU2_TR(0x684c5a);
__builtin_memmove((R+4),(R+0),4);
}
B684c5c:{NFSU2_TR(0x684c5c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B684c5f:L684c5f:{c.instructions+=1;NFSU2_TR(0x684c5f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684c61;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684c5fu);}goto L684c5f;}
}
B684c61:L684c61:{c.instructions+=3;NFSU2_TR(0x684c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684c64:{NFSU2_TR(0x684c64);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684c66:{NFSU2_TR(0x684c66);
if(r1(R+518)){{goto L684cd3;}}
}
B684c68:L684c68:{c.instructions+=2;NFSU2_TR(0x684c68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B684c6a:{NFSU2_TR(0x684c6a);
{goto L684cd3;}
}
B684c6c:L684c6c:{c.instructions+=2;NFSU2_TR(0x684c6c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684c6f:{NFSU2_TR(0x684c6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684cd7;}}
}
B684c71:L684c71:{c.instructions+=2;NFSU2_TR(0x684c71);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B684c75:{NFSU2_TR(0x684c75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684cd7;}}
}
B684c77:L684c77:{c.instructions+=3;NFSU2_TR(0x684c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684c7a:{NFSU2_TR(0x684c7a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684c7c:{NFSU2_TR(0x684c7c);
if(r1(R+518)){{goto L684cd7;}}
}
B684c7e:L684c7e:{c.instructions+=2;NFSU2_TR(0x684c7e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684c80:{NFSU2_TR(0x684c80);
if(r1(R+518)){{goto L684cc6;}}
}
B684c82:L684c82:{c.instructions+=1;NFSU2_TR(0x684c82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B684c85:L684c85:{c.instructions+=4;NFSU2_TR(0x684c85);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B684c87:{NFSU2_TR(0x684c87);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B684c88:{NFSU2_TR(0x684c88);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B684c8a:{NFSU2_TR(0x684c8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684c85u);}goto L684c85;}}
}
B684c8c:L684c8c:{c.instructions+=5;NFSU2_TR(0x684c8c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B684c8e:{NFSU2_TR(0x684c8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684c8f:{NFSU2_TR(0x684c8f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B684c90:{NFSU2_TR(0x684c90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684c91:{NFSU2_TR(0x684c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684c96ull));
TAIL_STATIC(0x670f08u,670);
}
B684c96:L684c96:{c.instructions+=2;NFSU2_TR(0x684c96);
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
B684c98:{NFSU2_TR(0x684c98);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L684cf2;}}
}
B684c9a:L684c9a:{c.instructions+=6;NFSU2_TR(0x684c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B684c9c:{NFSU2_TR(0x684c9c);
__builtin_memmove((R+28),(R+0),4);
}
B684c9e:{NFSU2_TR(0x684c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684ca1:{NFSU2_TR(0x684ca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B684ca3:{NFSU2_TR(0x684ca3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ca4:{NFSU2_TR(0x684ca4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684ca7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B684ca7:L684ca7:{c.instructions+=5;NFSU2_TR(0x684ca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B684ca9:{NFSU2_TR(0x684ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B684cac:{NFSU2_TR(0x684cac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684cad:{NFSU2_TR(0x684cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684cb0:{NFSU2_TR(0x684cb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684cb3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B684cb3:L684cb3:{c.instructions+=4;NFSU2_TR(0x684cb3);
__builtin_memmove((R+28),(R+0),4);
}
B684cb5:{NFSU2_TR(0x684cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684cb8:{NFSU2_TR(0x684cb8);
__builtin_memmove((R+4),(R+0),4);
}
B684cba:{NFSU2_TR(0x684cba);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B684cbd:L684cbd:{c.instructions+=1;NFSU2_TR(0x684cbd);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L684cbf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684cbdu);}goto L684cbd;}
}
B684cbf:L684cbf:{c.instructions+=2;NFSU2_TR(0x684cbf);
__builtin_memmove((R+4),(R+0),4);
}
B684cc1:{NFSU2_TR(0x684cc1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B684cc4:L684cc4:{c.instructions+=1;NFSU2_TR(0x684cc4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684cc6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684cc4u);}goto L684cc4;}
}
B684cc6:L684cc6:{c.instructions+=3;NFSU2_TR(0x684cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684cc9:{NFSU2_TR(0x684cc9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B684ccb:{NFSU2_TR(0x684ccb);
if(r1(R+518)){{goto L684cd3;}}
}
B684ccd:L684ccd:{c.instructions+=1;NFSU2_TR(0x684ccd);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B684cd3:L684cd3:{c.instructions+=2;NFSU2_TR(0x684cd3);
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
B684cd5:{NFSU2_TR(0x684cd5);
{goto L684cf2;}
}
B684cd7:L684cd7:{c.instructions+=3;NFSU2_TR(0x684cd7);
u8 U[4];
w4(U+0,u32(0x7b7d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684cdc:{NFSU2_TR(0x684cdc);
u8 U[4];
w4(U+0,u32(0xdacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ce1:{NFSU2_TR(0x684ce1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ce2:L684ce2:{c.instructions+=2;NFSU2_TR(0x684ce2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684ce5:{NFSU2_TR(0x684ce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684ceaull));
TAIL_STATIC(0x675267u,675);
}
B684cea:L684cea:{c.instructions+=1;NFSU2_TR(0x684cea);
w4(R+0,u32(0x80004001ull));
}
B684cef:L684cef:{c.instructions+=1;NFSU2_TR(0x684cef);
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
B684cf2:L684cf2:{c.instructions+=5;NFSU2_TR(0x684cf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B684cf3:{NFSU2_TR(0x684cf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684cf4:{NFSU2_TR(0x684cf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B684cf5:{NFSU2_TR(0x684cf5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B684cf6:{NFSU2_TR(0x684cf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B684cf9:L684cf9:{c.instructions+=10;NFSU2_TR(0x684cf9);
__builtin_memmove((R+28),(R+28),4);
}
B684cfb:{NFSU2_TR(0x684cfb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684cfc:{NFSU2_TR(0x684cfc);
__builtin_memmove((R+20),(R+16),4);
}
B684cfe:{NFSU2_TR(0x684cfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B684d01:{NFSU2_TR(0x684d01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684d02:{NFSU2_TR(0x684d02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684d03:{NFSU2_TR(0x684d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B684d06:{NFSU2_TR(0x684d06);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B684d09:{NFSU2_TR(0x684d09);
__builtin_memmove((R+24),(R+28),4);
}
B684d0b:{NFSU2_TR(0x684d0b);
if(r1(R+518)){{goto L684d21;}}
}
B684d0d:L684d0d:{c.instructions+=3;NFSU2_TR(0x684d0d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B684d10:{NFSU2_TR(0x684d10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684d11:{NFSU2_TR(0x684d11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684d16ull));
TAIL_STATIC(0x75defau,75d);
}
B684d16:L684d16:{c.instructions+=3;NFSU2_TR(0x684d16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684d18:{NFSU2_TR(0x684d18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684d19:{NFSU2_TR(0x684d19);
if(r1(R+518)){{goto L684d21;}}
}
B684d1b:L684d1b:{c.instructions+=3;NFSU2_TR(0x684d1b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B684d1c:{NFSU2_TR(0x684d1c);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B684d1f:{NFSU2_TR(0x684d1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684d0du);}goto L684d0d;}}
}
B684d21:L684d21:{c.instructions+=2;NFSU2_TR(0x684d21);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B684d24:{NFSU2_TR(0x684d24);
if(r1(R+518)){{goto L684d32;}}
}
B684d26:L684d26:{c.instructions+=2;NFSU2_TR(0x684d26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684d27:{NFSU2_TR(0x684d27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684d2cull));
TAIL_STATIC(0x75d65bu,75d);
}
B684d2c:L684d2c:{c.instructions+=3;NFSU2_TR(0x684d2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684d2d:{NFSU2_TR(0x684d2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B684d30:{NFSU2_TR(0x684d30);
{goto L684d36;}
}
B684d32:L684d32:{c.instructions+=1;NFSU2_TR(0x684d32);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B684d36:L684d36:{c.instructions+=2;NFSU2_TR(0x684d36);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0xfull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0xfull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0xfull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B684d3a:{NFSU2_TR(0x684d3a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L684d52;}}
}
B684d3c:L684d3c:{c.instructions+=6;NFSU2_TR(0x684d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684d3f:{NFSU2_TR(0x684d3f);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B684d42:{NFSU2_TR(0x684d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684d45:{NFSU2_TR(0x684d45);
u8 U[1];
w1(U+0,u8(0xffull));
s1(u32(r4(R+0)),r1(U+0));
}
B684d48:{NFSU2_TR(0x684d48);
w4(R+0,u32(0x80004005ull));
}
B684d4d:{NFSU2_TR(0x684d4d);
{goto L684f3a;}
}
B684d52:L684d52:{c.instructions+=4;NFSU2_TR(0x684d52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684d53:{NFSU2_TR(0x684d53);
__builtin_memmove((R+12),(R+24),4);
}
B684d55:{NFSU2_TR(0x684d55);
u8 U[6];
w1(R+512,u8((r4(R+12))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(R+12),r4(R+28)));
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B684d57:{NFSU2_TR(0x684d57);
if(r1(R+518)){{goto L684f34;}}
}
B684d5d:L684d5d:{c.instructions+=2;NFSU2_TR(0x684d5d);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B684d60:{NFSU2_TR(0x684d60);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L684f34;}}
}
B684d66:L684d66:{c.instructions+=3;NFSU2_TR(0x684d66);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B684d68:{NFSU2_TR(0x684d68);
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
B684d6a:{NFSU2_TR(0x684d6a);
if(r1(R+518)){{goto L684d8a;}}
}
B684d6c:L684d6c:{c.instructions+=3;NFSU2_TR(0x684d6c);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B684d6f:{NFSU2_TR(0x684d6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684d70:{NFSU2_TR(0x684d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684d75ull));
TAIL_STATIC(0x75df39u,75d);
}
B684d75:L684d75:{c.instructions+=3;NFSU2_TR(0x684d75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684d77:{NFSU2_TR(0x684d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684d78:{NFSU2_TR(0x684d78);
if(r1(R+518)){{goto L684d81;}}
}
B684d7a:L684d7a:{c.instructions+=4;NFSU2_TR(0x684d7a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B684d7b:{NFSU2_TR(0x684d7b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B684d7d:{NFSU2_TR(0x684d7d);
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
B684d7f:{NFSU2_TR(0x684d7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684d6cu);}goto L684d6c;}}
}
B684d81:L684d81:{c.instructions+=2;NFSU2_TR(0x684d81);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B684d84:{NFSU2_TR(0x684d84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684f34;}}
}
B684d8a:L684d8a:{c.instructions+=3;NFSU2_TR(0x684d8a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B684d8d:{NFSU2_TR(0x684d8d);
__builtin_memmove((R+24),(R+28),4);
}
B684d8f:{NFSU2_TR(0x684d8f);
if(r1(R+518)){{goto L684db8;}}
}
B684d91:L684d91:{c.instructions+=2;NFSU2_TR(0x684d91);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B684d94:{NFSU2_TR(0x684d94);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+28))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B684d97:L684d97:{c.instructions+=3;NFSU2_TR(0x684d97);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B684d9a:{NFSU2_TR(0x684d9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684d9b:{NFSU2_TR(0x684d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684da0ull));
TAIL_STATIC(0x75defau,75d);
}
B684da0:L684da0:{c.instructions+=3;NFSU2_TR(0x684da0);
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
B684da2:{NFSU2_TR(0x684da2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684da3:{NFSU2_TR(0x684da3);
if(r1(R+518)){{goto L684db8;}}
}
B684da5:L684da5:{c.instructions+=3;NFSU2_TR(0x684da5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B684da8:{NFSU2_TR(0x684da8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684da9:{NFSU2_TR(0x684da9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684daeull));
TAIL_STATIC(0x75f115u,75f);
}
B684dae:L684dae:{c.instructions+=5;NFSU2_TR(0x684dae);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B684db1:{NFSU2_TR(0x684db1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B684db2:{NFSU2_TR(0x684db2);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B684db5:{NFSU2_TR(0x684db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684db6:{NFSU2_TR(0x684db6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684d97u);}goto L684d97;}}
}
B684db8:L684db8:{c.instructions+=7;NFSU2_TR(0x684db8);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684dba:{NFSU2_TR(0x684dba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B684dbb:{NFSU2_TR(0x684dbb);
w4(R+28,u32(0x7b9db8ull));
}
B684dc0:{NFSU2_TR(0x684dc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684dc3:{NFSU2_TR(0x684dc3);
__builtin_memmove((R+4),(R+8),4);
}
B684dc5:{NFSU2_TR(0x684dc5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B684dc7:{NFSU2_TR(0x684dc7);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B684dcc:L684dcc:{c.instructions+=1;NFSU2_TR(0x684dcc);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684dce;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684dccu);}goto L684dcc;}}
}
B684dce:L684dce:{c.instructions+=1;NFSU2_TR(0x684dce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684dd7;}}
}
B684dd0:L684dd0:{c.instructions+=2;NFSU2_TR(0x684dd0);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B684dd2:{NFSU2_TR(0x684dd2);
{goto L684f23;}
}
B684dd7:L684dd7:{c.instructions+=5;NFSU2_TR(0x684dd7);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684dd9:{NFSU2_TR(0x684dd9);
w4(R+28,u32(0x7b9dacull));
}
B684dde:{NFSU2_TR(0x684dde);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684de1:{NFSU2_TR(0x684de1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684de2:{NFSU2_TR(0x684de2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B684de4:L684de4:{c.instructions+=1;NFSU2_TR(0x684de4);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684de6;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684de4u);}goto L684de4;}}
}
B684de6:L684de6:{c.instructions+=1;NFSU2_TR(0x684de6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684def;}}
}
B684de8:L684de8:{c.instructions+=2;NFSU2_TR(0x684de8);
w1(R+0,u8(0x1ull));
}
B684dea:{NFSU2_TR(0x684dea);
{goto L684f23;}
}
B684def:L684def:{c.instructions+=5;NFSU2_TR(0x684def);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684df1:{NFSU2_TR(0x684df1);
w4(R+28,u32(0x7b9d9cull));
}
B684df6:{NFSU2_TR(0x684df6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684df9:{NFSU2_TR(0x684df9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684dfa:{NFSU2_TR(0x684dfa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B684dfc:L684dfc:{c.instructions+=1;NFSU2_TR(0x684dfc);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684dfe;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684dfcu);}goto L684dfc;}}
}
B684dfe:L684dfe:{c.instructions+=1;NFSU2_TR(0x684dfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684e07;}}
}
B684e00:L684e00:{c.instructions+=2;NFSU2_TR(0x684e00);
w1(R+0,u8(0x2ull));
}
B684e02:{NFSU2_TR(0x684e02);
{goto L684f23;}
}
B684e07:L684e07:{c.instructions+=5;NFSU2_TR(0x684e07);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684e09:{NFSU2_TR(0x684e09);
w4(R+28,u32(0x7ae61cull));
}
B684e0e:{NFSU2_TR(0x684e0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684e11:{NFSU2_TR(0x684e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684e12:{NFSU2_TR(0x684e12);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B684e14:L684e14:{c.instructions+=1;NFSU2_TR(0x684e14);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684e16;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684e14u);}goto L684e14;}}
}
B684e16:L684e16:{c.instructions+=1;NFSU2_TR(0x684e16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684e1f;}}
}
B684e18:L684e18:{c.instructions+=2;NFSU2_TR(0x684e18);
w1(R+0,u8(0x3ull));
}
B684e1a:{NFSU2_TR(0x684e1a);
{goto L684f23;}
}
B684e1f:L684e1f:{c.instructions+=6;NFSU2_TR(0x684e1f);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684e21:{NFSU2_TR(0x684e21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B684e22:{NFSU2_TR(0x684e22);
w4(R+28,u32(0x7ae614ull));
}
B684e27:{NFSU2_TR(0x684e27);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684e2a:{NFSU2_TR(0x684e2a);
__builtin_memmove((R+4),(R+0),4);
}
B684e2c:{NFSU2_TR(0x684e2c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B684e2e:L684e2e:{c.instructions+=1;NFSU2_TR(0x684e2e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684e30;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684e2eu);}goto L684e2e;}}
}
B684e30:L684e30:{c.instructions+=1;NFSU2_TR(0x684e30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684e39;}}
}
B684e32:L684e32:{c.instructions+=2;NFSU2_TR(0x684e32);
w1(R+0,u8(0x4ull));
}
B684e34:{NFSU2_TR(0x684e34);
{goto L684f23;}
}
B684e39:L684e39:{c.instructions+=4;NFSU2_TR(0x684e39);
w4(R+28,u32(0x7b9d90ull));
}
B684e3e:{NFSU2_TR(0x684e3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684e41:{NFSU2_TR(0x684e41);
__builtin_memmove((R+4),(R+8),4);
}
B684e43:{NFSU2_TR(0x684e43);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B684e45:L684e45:{c.instructions+=1;NFSU2_TR(0x684e45);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684e47;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684e45u);}goto L684e45;}}
}
B684e47:L684e47:{c.instructions+=1;NFSU2_TR(0x684e47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684e50;}}
}
B684e49:L684e49:{c.instructions+=2;NFSU2_TR(0x684e49);
w1(R+0,u8(0x5ull));
}
B684e4b:{NFSU2_TR(0x684e4b);
{goto L684f23;}
}
B684e50:L684e50:{c.instructions+=5;NFSU2_TR(0x684e50);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684e52:{NFSU2_TR(0x684e52);
w4(R+28,u32(0x7b9d88ull));
}
B684e57:{NFSU2_TR(0x684e57);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684e5a:{NFSU2_TR(0x684e5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684e5b:{NFSU2_TR(0x684e5b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B684e5d:L684e5d:{c.instructions+=1;NFSU2_TR(0x684e5d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684e5f;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684e5du);}goto L684e5d;}}
}
B684e5f:L684e5f:{c.instructions+=1;NFSU2_TR(0x684e5f);
if(r1(R+518)){{goto L684f23;}}
}
B684e65:L684e65:{c.instructions+=4;NFSU2_TR(0x684e65);
w4(R+28,u32(0x7b9d7cull));
}
B684e6a:{NFSU2_TR(0x684e6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684e6d:{NFSU2_TR(0x684e6d);
__builtin_memmove((R+4),(R+8),4);
}
B684e6f:{NFSU2_TR(0x684e6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B684e71:L684e71:{c.instructions+=1;NFSU2_TR(0x684e71);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684e73;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684e71u);}goto L684e71;}}
}
B684e73:L684e73:{c.instructions+=1;NFSU2_TR(0x684e73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684e7c;}}
}
B684e75:L684e75:{c.instructions+=2;NFSU2_TR(0x684e75);
w1(R+0,u8(0x7ull));
}
B684e77:{NFSU2_TR(0x684e77);
{goto L684f23;}
}
B684e7c:L684e7c:{c.instructions+=6;NFSU2_TR(0x684e7c);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684e7e:{NFSU2_TR(0x684e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B684e7f:{NFSU2_TR(0x684e7f);
w4(R+28,u32(0x7b9d70ull));
}
B684e84:{NFSU2_TR(0x684e84);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684e87:{NFSU2_TR(0x684e87);
__builtin_memmove((R+4),(R+0),4);
}
B684e89:{NFSU2_TR(0x684e89);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B684e8b:L684e8b:{c.instructions+=1;NFSU2_TR(0x684e8b);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684e8d;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684e8bu);}goto L684e8b;}}
}
B684e8d:L684e8d:{c.instructions+=1;NFSU2_TR(0x684e8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684e96;}}
}
B684e8f:L684e8f:{c.instructions+=2;NFSU2_TR(0x684e8f);
w1(R+0,u8(0x8ull));
}
B684e91:{NFSU2_TR(0x684e91);
{goto L684f23;}
}
B684e96:L684e96:{c.instructions+=5;NFSU2_TR(0x684e96);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684e98:{NFSU2_TR(0x684e98);
w4(R+28,u32(0x7b9d64ull));
}
B684e9d:{NFSU2_TR(0x684e9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684ea0:{NFSU2_TR(0x684ea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684ea1:{NFSU2_TR(0x684ea1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B684ea3:L684ea3:{c.instructions+=1;NFSU2_TR(0x684ea3);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684ea5;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684ea3u);}goto L684ea3;}}
}
B684ea5:L684ea5:{c.instructions+=1;NFSU2_TR(0x684ea5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684eab;}}
}
B684ea7:L684ea7:{c.instructions+=2;NFSU2_TR(0x684ea7);
__builtin_memmove((R+0),(R+8),1);
}
B684ea9:{NFSU2_TR(0x684ea9);
{goto L684f23;}
}
B684eab:L684eab:{c.instructions+=5;NFSU2_TR(0x684eab);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ead:{NFSU2_TR(0x684ead);
w4(R+28,u32(0x7b9d5cull));
}
B684eb2:{NFSU2_TR(0x684eb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684eb5:{NFSU2_TR(0x684eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684eb6:{NFSU2_TR(0x684eb6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B684eb8:L684eb8:{c.instructions+=1;NFSU2_TR(0x684eb8);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684eba;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684eb8u);}goto L684eb8;}}
}
B684eba:L684eba:{c.instructions+=1;NFSU2_TR(0x684eba);
if(r1(R+518)){{goto L684f21;}}
}
B684ebc:L684ebc:{c.instructions+=5;NFSU2_TR(0x684ebc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ebe:{NFSU2_TR(0x684ebe);
w4(R+28,u32(0x7b9d58ull));
}
B684ec3:{NFSU2_TR(0x684ec3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684ec6:{NFSU2_TR(0x684ec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684ec7:{NFSU2_TR(0x684ec7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B684ec9:L684ec9:{c.instructions+=1;NFSU2_TR(0x684ec9);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684ecb;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684ec9u);}goto L684ec9;}}
}
B684ecb:L684ecb:{c.instructions+=1;NFSU2_TR(0x684ecb);
if(r1(R+518)){{goto L684f23;}}
}
B684ecd:L684ecd:{c.instructions+=5;NFSU2_TR(0x684ecd);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ecf:{NFSU2_TR(0x684ecf);
w4(R+28,u32(0x7b9d50ull));
}
B684ed4:{NFSU2_TR(0x684ed4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684ed7:{NFSU2_TR(0x684ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684ed8:{NFSU2_TR(0x684ed8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B684eda:L684eda:{c.instructions+=1;NFSU2_TR(0x684eda);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684edc;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684edau);}goto L684eda;}}
}
B684edc:L684edc:{c.instructions+=1;NFSU2_TR(0x684edc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684ee2;}}
}
B684ede:L684ede:{c.instructions+=2;NFSU2_TR(0x684ede);
w1(R+0,u8(0xcull));
}
B684ee0:{NFSU2_TR(0x684ee0);
{goto L684f23;}
}
B684ee2:L684ee2:{c.instructions+=5;NFSU2_TR(0x684ee2);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ee4:{NFSU2_TR(0x684ee4);
w4(R+28,u32(0x7b9d48ull));
}
B684ee9:{NFSU2_TR(0x684ee9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684eec:{NFSU2_TR(0x684eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684eed:{NFSU2_TR(0x684eed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B684eef:L684eef:{c.instructions+=1;NFSU2_TR(0x684eef);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684ef1;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684eefu);}goto L684eef;}}
}
B684ef1:L684ef1:{c.instructions+=1;NFSU2_TR(0x684ef1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684ef7;}}
}
B684ef3:L684ef3:{c.instructions+=2;NFSU2_TR(0x684ef3);
w1(R+0,u8(0xdull));
}
B684ef5:{NFSU2_TR(0x684ef5);
{goto L684f23;}
}
B684ef7:L684ef7:{c.instructions+=5;NFSU2_TR(0x684ef7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684ef9:{NFSU2_TR(0x684ef9);
w4(R+28,u32(0x7ae734ull));
}
B684efe:{NFSU2_TR(0x684efe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684f01:{NFSU2_TR(0x684f01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684f02:{NFSU2_TR(0x684f02);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B684f04:L684f04:{c.instructions+=1;NFSU2_TR(0x684f04);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684f06;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684f04u);}goto L684f04;}}
}
B684f06:L684f06:{c.instructions+=1;NFSU2_TR(0x684f06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684f0d;}}
}
B684f08:L684f08:{c.instructions+=2;NFSU2_TR(0x684f08);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B684f0b:{NFSU2_TR(0x684f0b);
{goto L684f21;}
}
B684f0d:L684f0d:{c.instructions+=4;NFSU2_TR(0x684f0d);
w4(R+28,u32(0x7ae720ull));
}
B684f12:{NFSU2_TR(0x684f12);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684f15:{NFSU2_TR(0x684f15);
__builtin_memmove((R+4),(R+8),4);
}
B684f17:{NFSU2_TR(0x684f17);
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
B684f19:L684f19:{c.instructions+=1;NFSU2_TR(0x684f19);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L684f1b;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684f19u);}goto L684f19;}}
}
B684f1b:L684f1b:{c.instructions+=1;NFSU2_TR(0x684f1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L684f34;}}
}
B684f1d:L684f1d:{c.instructions+=1;NFSU2_TR(0x684f1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B684f21:L684f21:{c.instructions+=1;NFSU2_TR(0x684f21);
w1(R+0,u8(0xaull));
}
B684f23:L684f23:{c.instructions+=7;NFSU2_TR(0x684f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B684f26:{NFSU2_TR(0x684f26);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B684f28:{NFSU2_TR(0x684f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684f2b:{NFSU2_TR(0x684f2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B684f2e:{NFSU2_TR(0x684f2e);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B684f30:{NFSU2_TR(0x684f30);
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
B684f32:{NFSU2_TR(0x684f32);
{goto L684f39;}
}
B684f34:L684f34:{c.instructions+=1;NFSU2_TR(0x684f34);
w4(R+0,u32(0x80004005ull));
}
B684f39:L684f39:{c.instructions+=1;NFSU2_TR(0x684f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B684f3a:L684f3a:{c.instructions+=4;NFSU2_TR(0x684f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B684f3b:{NFSU2_TR(0x684f3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684f3c:{NFSU2_TR(0x684f3c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B684f3d:{NFSU2_TR(0x684f3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B684f40:L684f40:{c.instructions+=9;NFSU2_TR(0x684f40);
__builtin_memmove((R+28),(R+28),4);
}
B684f42:{NFSU2_TR(0x684f42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684f43:{NFSU2_TR(0x684f43);
__builtin_memmove((R+20),(R+16),4);
}
B684f45:{NFSU2_TR(0x684f45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684f46:{NFSU2_TR(0x684f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B684f49:{NFSU2_TR(0x684f49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684f4a:{NFSU2_TR(0x684f4a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B684f4c:{NFSU2_TR(0x684f4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684f4e:{NFSU2_TR(0x684f4e);
if(r1(R+518)){{goto L684f79;}}
}
B684f50:L684f50:{c.instructions+=3;NFSU2_TR(0x684f50);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B684f52:{NFSU2_TR(0x684f52);
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
B684f54:{NFSU2_TR(0x684f54);
if(r1(R+518)){{goto L684f79;}}
}
B684f56:L684f56:{c.instructions+=3;NFSU2_TR(0x684f56);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B684f59:{NFSU2_TR(0x684f59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684f5a:{NFSU2_TR(0x684f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684f5full));
TAIL_STATIC(0x75f115u,75f);
}
B684f5f:L684f5f:{c.instructions+=7;NFSU2_TR(0x684f5f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x13ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B684f62:{NFSU2_TR(0x684f62);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B684f64:{NFSU2_TR(0x684f64);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B684f65:{NFSU2_TR(0x684f65);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B684f67:{NFSU2_TR(0x684f67);
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
B684f69:{NFSU2_TR(0x684f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684f6a:{NFSU2_TR(0x684f6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684f56u);}goto L684f56;}}
}
B684f6c:L684f6c:{c.instructions+=7;NFSU2_TR(0x684f6c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684f6e:{NFSU2_TR(0x684f6e);
__builtin_memmove((R+0),(R+28),4);
}
B684f70:{NFSU2_TR(0x684f70);
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
B684f72:{NFSU2_TR(0x684f72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B684f73:{NFSU2_TR(0x684f73);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x684f73);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x684f73);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B684f75:{NFSU2_TR(0x684f75);
__builtin_memmove((R+0),(R+8),4);
}
B684f77:{NFSU2_TR(0x684f77);
{goto L684f7b;}
}
B684f79:L684f79:{c.instructions+=1;NFSU2_TR(0x684f79);
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
B684f7b:L684f7b:{c.instructions+=4;NFSU2_TR(0x684f7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B684f7c:{NFSU2_TR(0x684f7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684f7d:{NFSU2_TR(0x684f7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B684f7e:{NFSU2_TR(0x684f7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B684f81:L684f81:{c.instructions+=7;NFSU2_TR(0x684f81);
__builtin_memmove((R+28),(R+28),4);
}
B684f83:{NFSU2_TR(0x684f83);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684f84:{NFSU2_TR(0x684f84);
__builtin_memmove((R+20),(R+16),4);
}
B684f86:{NFSU2_TR(0x684f86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684f87:{NFSU2_TR(0x684f87);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684f8a:{NFSU2_TR(0x684f8a);
__builtin_memmove((R+24),(R+4),4);
}
B684f8c:{NFSU2_TR(0x684f8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684f91ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684f40u);}goto L684f40;}
}
B684f91:L684f91:{c.instructions+=2;NFSU2_TR(0x684f91);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B684f94:{NFSU2_TR(0x684f94);
{goto L684fa8;}
}
B684f96:L684f96:{c.instructions+=3;NFSU2_TR(0x684f96);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B684f99:{NFSU2_TR(0x684f99);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B684f9b:{NFSU2_TR(0x684f9b);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831f8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x684fa1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B684fa1:L684fa1:{c.instructions+=2;NFSU2_TR(0x684fa1);
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
B684fa3:{NFSU2_TR(0x684fa3);
if(r1(R+518)){{goto L684fb3;}}
}
B684fa5:L684fa5:{c.instructions+=1;NFSU2_TR(0x684fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B684fa8:L684fa8:{c.instructions+=2;NFSU2_TR(0x684fa8);
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
B684faa:{NFSU2_TR(0x684faa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684f96u);}goto L684f96;}}
}
B684fac:L684fac:{c.instructions+=1;NFSU2_TR(0x684fac);
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
B684fae:L684fae:{c.instructions+=3;NFSU2_TR(0x684fae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684faf:{NFSU2_TR(0x684faf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B684fb0:{NFSU2_TR(0x684fb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B684fb3:L684fb3:{c.instructions+=2;NFSU2_TR(0x684fb3);
__builtin_memmove((R+0),(R+24),4);
}
B684fb5:{NFSU2_TR(0x684fb5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684faeu);}goto L684fae;}
}
B684fb7:L684fb7:{c.instructions+=7;NFSU2_TR(0x684fb7);
__builtin_memmove((R+28),(R+28),4);
}
B684fb9:{NFSU2_TR(0x684fb9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684fba:{NFSU2_TR(0x684fba);
__builtin_memmove((R+20),(R+16),4);
}
B684fbc:{NFSU2_TR(0x684fbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684fbd:{NFSU2_TR(0x684fbd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B684fbf:{NFSU2_TR(0x684fbf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B684fc0:{NFSU2_TR(0x684fc0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B684fc2:L684fc2:{c.instructions+=2;NFSU2_TR(0x684fc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B684fc5:{NFSU2_TR(0x684fc5);
{goto L684fd1;}
}
B684fc7:L684fc7:{c.instructions+=4;NFSU2_TR(0x684fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B684fca:{NFSU2_TR(0x684fca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B684fcd:{NFSU2_TR(0x684fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B684fd0:{NFSU2_TR(0x684fd0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B684fd1:L684fd1:{c.instructions+=2;NFSU2_TR(0x684fd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B684fd3:{NFSU2_TR(0x684fd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684fc7u);}goto L684fc7;}}
}
B684fd5:L684fd5:{c.instructions+=3;NFSU2_TR(0x684fd5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B684fd6:{NFSU2_TR(0x684fd6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B684fd9:{NFSU2_TR(0x684fd9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x684fc2u);}goto L684fc2;}}
}
B684fdb:L684fdb:{c.instructions+=4;NFSU2_TR(0x684fdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B684fdc:{NFSU2_TR(0x684fdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B684fdd:{NFSU2_TR(0x684fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B684fde:{NFSU2_TR(0x684fde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B684fe1:L684fe1:{c.instructions+=11;NFSU2_TR(0x684fe1);
__builtin_memmove((R+0),(R+4),4);
}
B684fe3:{NFSU2_TR(0x684fe3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B684fe5:{NFSU2_TR(0x684fe5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B684fe7:{NFSU2_TR(0x684fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684fea:{NFSU2_TR(0x684fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684fed:{NFSU2_TR(0x684fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684ff0:{NFSU2_TR(0x684ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684ff3:{NFSU2_TR(0x684ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684ff6:{NFSU2_TR(0x684ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684ff9:{NFSU2_TR(0x684ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B684ffc:{NFSU2_TR(0x684ffc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B684ffd:L684ffd:{c.instructions+=2;NFSU2_TR(0x684ffd);
__builtin_memmove((R+28),(R+28),4);
}
B684fff:{NFSU2_TR(0x684fff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x685000u,685);
}
XIT:NFSU2_TR_EXIT(0x684,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
