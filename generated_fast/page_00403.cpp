#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x403,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x403,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_403(u8* __restrict R,Cpu& c);
u32 page_403(Cpu& c){return body_403(c.regs.data(),c);}
__attribute__((noinline)) u32 body_403(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x403003:goto L403003;
case 0x403007:c.instructions+=3;goto B403007;
case 0x403009:c.instructions+=2;goto B403009;
case 0x40300c:c.instructions+=1;goto B40300c;
case 0x40300e:goto L40300e;
case 0x403012:c.instructions+=1;goto B403012;
case 0x403014:goto L403014;
case 0x403018:goto L403018;
case 0x40301c:c.instructions+=4;goto B40301c;
case 0x403020:c.instructions+=3;goto B403020;
case 0x403022:c.instructions+=2;goto B403022;
case 0x403025:c.instructions+=1;goto B403025;
case 0x403027:goto L403027;
case 0x40302b:c.instructions+=2;goto B40302b;
case 0x40302f:c.instructions+=1;goto B40302f;
case 0x403031:goto L403031;
case 0x403035:c.instructions+=1;goto B403035;
case 0x403039:goto L403039;
case 0x40303d:c.instructions+=4;goto B40303d;
case 0x403041:c.instructions+=3;goto B403041;
case 0x403043:c.instructions+=2;goto B403043;
case 0x403046:c.instructions+=1;goto B403046;
case 0x40304c:goto L40304c;
case 0x403050:c.instructions+=4;goto B403050;
case 0x403054:c.instructions+=3;goto B403054;
case 0x403056:c.instructions+=2;goto B403056;
case 0x403059:c.instructions+=1;goto B403059;
case 0x40305b:goto L40305b;
case 0x40305f:c.instructions+=4;goto B40305f;
case 0x403065:c.instructions+=3;goto B403065;
case 0x403067:c.instructions+=2;goto B403067;
case 0x40306a:c.instructions+=1;goto B40306a;
case 0x40306c:goto L40306c;
case 0x403070:c.instructions+=4;goto B403070;
case 0x403076:c.instructions+=3;goto B403076;
case 0x403078:c.instructions+=2;goto B403078;
case 0x40307b:c.instructions+=1;goto B40307b;
case 0x40307d:goto L40307d;
case 0x403083:c.instructions+=4;goto B403083;
case 0x403089:c.instructions+=3;goto B403089;
case 0x40308b:c.instructions+=2;goto B40308b;
case 0x40308e:c.instructions+=1;goto B40308e;
case 0x403090:goto L403090;
case 0x403096:c.instructions+=3;goto B403096;
case 0x403098:c.instructions+=2;goto B403098;
case 0x40309b:c.instructions+=1;goto B40309b;
case 0x40309d:goto L40309d;
case 0x4030a3:c.instructions+=6;goto B4030a3;
case 0x4030a5:c.instructions+=5;goto B4030a5;
case 0x4030a7:c.instructions+=4;goto B4030a7;
case 0x4030ad:c.instructions+=3;goto B4030ad;
case 0x4030af:c.instructions+=2;goto B4030af;
case 0x4030b2:c.instructions+=1;goto B4030b2;
case 0x4030b4:goto L4030b4;
case 0x4030b8:c.instructions+=4;goto B4030b8;
case 0x4030bc:c.instructions+=3;goto B4030bc;
case 0x4030be:c.instructions+=2;goto B4030be;
case 0x4030c1:c.instructions+=1;goto B4030c1;
case 0x4030c3:goto L4030c3;
case 0x4030c5:c.instructions+=4;goto B4030c5;
case 0x4030c6:c.instructions+=3;goto B4030c6;
case 0x4030c9:c.instructions+=2;goto B4030c9;
case 0x4030cb:c.instructions+=1;goto B4030cb;
case 0x4030d1:goto L4030d1;
case 0x4030d3:goto L4030d3;
case 0x4030d5:c.instructions+=1;goto B4030d5;
case 0x4030db:goto L4030db;
case 0x4030df:c.instructions+=5;goto B4030df;
case 0x4030e3:c.instructions+=4;goto B4030e3;
case 0x4030ea:c.instructions+=3;goto B4030ea;
case 0x4030ee:c.instructions+=2;goto B4030ee;
case 0x4030f2:c.instructions+=1;goto B4030f2;
case 0x4030f6:goto L4030f6;
case 0x4030f7:c.instructions+=12;goto B4030f7;
case 0x4030fb:c.instructions+=11;goto B4030fb;
case 0x4030ff:c.instructions+=10;goto B4030ff;
case 0x403103:c.instructions+=9;goto B403103;
case 0x403107:c.instructions+=8;goto B403107;
case 0x403108:c.instructions+=7;goto B403108;
case 0x40310a:c.instructions+=6;goto B40310a;
case 0x40310c:c.instructions+=5;goto B40310c;
case 0x403110:c.instructions+=4;goto B403110;
case 0x403111:c.instructions+=3;goto B403111;
case 0x403112:c.instructions+=2;goto B403112;
case 0x403115:c.instructions+=1;goto B403115;
case 0x403120:goto L403120;
case 0x403121:c.instructions+=7;goto B403121;
case 0x403122:c.instructions+=6;goto B403122;
case 0x403126:c.instructions+=5;goto B403126;
case 0x403128:c.instructions+=4;goto B403128;
case 0x40312a:c.instructions+=3;goto B40312a;
case 0x40312b:c.instructions+=2;goto B40312b;
case 0x403132:c.instructions+=1;goto B403132;
case 0x403135:goto L403135;
case 0x403137:c.instructions+=1;goto B403137;
case 0x403139:goto L403139;
case 0x403140:goto L403140;
case 0x403142:c.instructions+=3;goto B403142;
case 0x403143:c.instructions+=2;goto B403143;
case 0x403145:c.instructions+=1;goto B403145;
case 0x403148:goto L403148;
case 0x40314a:c.instructions+=1;goto B40314a;
case 0x40314c:goto L40314c;
case 0x403153:goto L403153;
case 0x403155:c.instructions+=3;goto B403155;
case 0x403156:c.instructions+=2;goto B403156;
case 0x403158:c.instructions+=1;goto B403158;
case 0x40315b:goto L40315b;
case 0x40315d:c.instructions+=1;goto B40315d;
case 0x40315f:goto L40315f;
case 0x403166:goto L403166;
case 0x403167:c.instructions+=2;goto B403167;
case 0x403168:c.instructions+=1;goto B403168;
case 0x403170:goto L403170;
case 0x403172:c.instructions+=1;goto B403172;
case 0x403180:goto L403180;
case 0x403181:c.instructions+=9;goto B403181;
case 0x403186:c.instructions+=8;goto B403186;
case 0x403189:c.instructions+=7;goto B403189;
case 0x40318d:c.instructions+=6;goto B40318d;
case 0x403191:c.instructions+=5;goto B403191;
case 0x403197:c.instructions+=4;goto B403197;
case 0x40319a:c.instructions+=3;goto B40319a;
case 0x40319c:c.instructions+=2;goto B40319c;
case 0x40319f:c.instructions+=1;goto B40319f;
case 0x4031a1:goto L4031a1;
case 0x4031a4:c.instructions+=2;goto B4031a4;
case 0x4031a6:c.instructions+=1;goto B4031a6;
case 0x4031a8:goto L4031a8;
case 0x4031ad:c.instructions+=2;goto B4031ad;
case 0x4031ae:c.instructions+=1;goto B4031ae;
case 0x4031b1:goto L4031b1;
case 0x4031b3:c.instructions+=2;goto B4031b3;
case 0x4031b4:c.instructions+=1;goto B4031b4;
case 0x4031c0:goto L4031c0;
case 0x4031d0:goto L4031d0;
case 0x4031d1:c.instructions+=10;goto B4031d1;
case 0x4031d6:c.instructions+=9;goto B4031d6;
case 0x4031d9:c.instructions+=8;goto B4031d9;
case 0x4031dd:c.instructions+=7;goto B4031dd;
case 0x4031e1:c.instructions+=6;goto B4031e1;
case 0x4031e3:c.instructions+=5;goto B4031e3;
case 0x4031e9:c.instructions+=4;goto B4031e9;
case 0x4031ec:c.instructions+=3;goto B4031ec;
case 0x4031ee:c.instructions+=2;goto B4031ee;
case 0x4031f1:c.instructions+=1;goto B4031f1;
case 0x4031f3:goto L4031f3;
case 0x4031f6:c.instructions+=3;goto B4031f6;
case 0x4031f8:c.instructions+=2;goto B4031f8;
case 0x4031fa:c.instructions+=1;goto B4031fa;
case 0x4031fc:goto L4031fc;
case 0x4031fe:goto L4031fe;
case 0x4031ff:c.instructions+=1;goto B4031ff;
case 0x403210:goto L403210;
case 0x403212:c.instructions+=1;goto B403212;
case 0x403220:goto L403220;
case 0x403221:c.instructions+=9;goto B403221;
case 0x403226:c.instructions+=8;goto B403226;
case 0x403229:c.instructions+=7;goto B403229;
case 0x40322d:c.instructions+=6;goto B40322d;
case 0x403231:c.instructions+=5;goto B403231;
case 0x403237:c.instructions+=4;goto B403237;
case 0x40323a:c.instructions+=3;goto B40323a;
case 0x40323c:c.instructions+=2;goto B40323c;
case 0x40323f:c.instructions+=1;goto B40323f;
case 0x403241:goto L403241;
case 0x403243:c.instructions+=2;goto B403243;
case 0x403244:c.instructions+=1;goto B403244;
case 0x403247:goto L403247;
case 0x40324a:c.instructions+=2;goto B40324a;
case 0x40324b:c.instructions+=1;goto B40324b;
case 0x403250:goto L403250;
case 0x403251:c.instructions+=9;goto B403251;
case 0x403256:c.instructions+=8;goto B403256;
case 0x403259:c.instructions+=7;goto B403259;
case 0x40325d:c.instructions+=6;goto B40325d;
case 0x403261:c.instructions+=5;goto B403261;
case 0x403267:c.instructions+=4;goto B403267;
case 0x40326a:c.instructions+=3;goto B40326a;
case 0x40326c:c.instructions+=2;goto B40326c;
case 0x40326f:c.instructions+=1;goto B40326f;
case 0x403271:goto L403271;
case 0x403274:c.instructions+=2;goto B403274;
case 0x403276:c.instructions+=1;goto B403276;
case 0x403278:goto L403278;
case 0x40327a:c.instructions+=2;goto B40327a;
case 0x40327b:c.instructions+=1;goto B40327b;
case 0x40327e:goto L40327e;
case 0x403280:c.instructions+=2;goto B403280;
case 0x403281:c.instructions+=1;goto B403281;
case 0x403290:goto L403290;
case 0x403294:c.instructions+=4;goto B403294;
case 0x403296:c.instructions+=3;goto B403296;
case 0x40329a:c.instructions+=2;goto B40329a;
case 0x40329d:c.instructions+=1;goto B40329d;
case 0x4032a0:goto L4032a0;
case 0x4032a1:c.instructions+=10;goto B4032a1;
case 0x4032a5:c.instructions+=9;goto B4032a5;
case 0x4032ac:c.instructions+=8;goto B4032ac;
case 0x4032ad:c.instructions+=7;goto B4032ad;
case 0x4032b0:c.instructions+=6;goto B4032b0;
case 0x4032b3:c.instructions+=5;goto B4032b3;
case 0x4032b4:c.instructions+=4;goto B4032b4;
case 0x4032b7:c.instructions+=3;goto B4032b7;
case 0x4032bc:c.instructions+=2;goto B4032bc;
case 0x4032be:c.instructions+=1;goto B4032be;
case 0x4032c0:goto L4032c0;
case 0x4032c5:c.instructions+=2;goto B4032c5;
case 0x4032c7:c.instructions+=1;goto B4032c7;
case 0x4032c9:goto L4032c9;
case 0x4032ce:c.instructions+=2;goto B4032ce;
case 0x4032d0:c.instructions+=1;goto B4032d0;
case 0x4032d2:goto L4032d2;
case 0x4032d7:c.instructions+=2;goto B4032d7;
case 0x4032d9:c.instructions+=1;goto B4032d9;
case 0x4032db:goto L4032db;
case 0x4032dd:c.instructions+=1;goto B4032dd;
case 0x4032df:goto L4032df;
case 0x4032e1:goto L4032e1;
case 0x4032e7:c.instructions+=9;goto B4032e7;
case 0x4032e9:c.instructions+=8;goto B4032e9;
case 0x4032ea:c.instructions+=7;goto B4032ea;
case 0x4032ec:c.instructions+=6;goto B4032ec;
case 0x4032ef:c.instructions+=5;goto B4032ef;
case 0x4032f3:c.instructions+=4;goto B4032f3;
case 0x4032f5:c.instructions+=3;goto B4032f5;
case 0x4032f7:c.instructions+=2;goto B4032f7;
case 0x4032f9:c.instructions+=1;goto B4032f9;
case 0x4032fb:goto L4032fb;
case 0x403302:c.instructions+=3;goto B403302;
case 0x403303:c.instructions+=2;goto B403303;
case 0x403304:c.instructions+=1;goto B403304;
case 0x403307:goto L403307;
case 0x40330e:c.instructions+=3;goto B40330e;
case 0x40330f:c.instructions+=2;goto B40330f;
case 0x403310:c.instructions+=1;goto B403310;
case 0x403320:goto L403320;
case 0x403326:c.instructions+=6;goto B403326;
case 0x40332d:c.instructions+=5;goto B40332d;
case 0x40332e:c.instructions+=4;goto B40332e;
case 0x403332:c.instructions+=3;goto B403332;
case 0x403334:c.instructions+=2;goto B403334;
case 0x403335:c.instructions+=1;goto B403335;
case 0x403337:goto L403337;
case 0x40333d:c.instructions+=2;goto B40333d;
case 0x40333e:c.instructions+=1;goto B40333e;
case 0x403343:goto L403343;
case 0x403345:c.instructions+=1;goto B403345;
case 0x403347:goto L403347;
case 0x40334b:c.instructions+=5;goto B40334b;
case 0x40334d:c.instructions+=4;goto B40334d;
case 0x403352:c.instructions+=3;goto B403352;
case 0x403353:c.instructions+=2;goto B403353;
case 0x403359:c.instructions+=1;goto B403359;
case 0x40335e:goto L40335e;
case 0x403361:c.instructions+=2;goto B403361;
case 0x403363:c.instructions+=1;goto B403363;
case 0x403365:goto L403365;
case 0x403369:c.instructions+=6;goto B403369;
case 0x403370:c.instructions+=5;goto B403370;
case 0x403372:c.instructions+=4;goto B403372;
case 0x403373:c.instructions+=3;goto B403373;
case 0x403378:c.instructions+=2;goto B403378;
case 0x403379:c.instructions+=1;goto B403379;
case 0x40337a:goto L40337a;
case 0x40337b:c.instructions+=3;goto B40337b;
case 0x40337e:c.instructions+=2;goto B40337e;
case 0x40337f:c.instructions+=1;goto B40337f;
case 0x403380:goto L403380;
case 0x403381:c.instructions+=9;goto B403381;
case 0x403383:c.instructions+=8;goto B403383;
case 0x403386:c.instructions+=7;goto B403386;
case 0x403389:c.instructions+=6;goto B403389;
case 0x40338c:c.instructions+=5;goto B40338c;
case 0x403391:c.instructions+=4;goto B403391;
case 0x403392:c.instructions+=3;goto B403392;
case 0x403396:c.instructions+=2;goto B403396;
case 0x403397:c.instructions+=1;goto B403397;
case 0x40339c:goto L40339c;
case 0x4033a0:c.instructions+=8;goto B4033a0;
case 0x4033a4:c.instructions+=7;goto B4033a4;
case 0x4033a7:c.instructions+=6;goto B4033a7;
case 0x4033ad:c.instructions+=5;goto B4033ad;
case 0x4033b1:c.instructions+=4;goto B4033b1;
case 0x4033b4:c.instructions+=3;goto B4033b4;
case 0x4033b6:c.instructions+=2;goto B4033b6;
case 0x4033b9:c.instructions+=1;goto B4033b9;
case 0x4033bb:goto L4033bb;
case 0x4033bd:c.instructions+=3;goto B4033bd;
case 0x4033bf:c.instructions+=2;goto B4033bf;
case 0x4033c0:c.instructions+=1;goto B4033c0;
case 0x4033c1:goto L4033c1;
case 0x4033c3:c.instructions+=3;goto B4033c3;
case 0x4033c5:c.instructions+=2;goto B4033c5;
case 0x4033c6:c.instructions+=1;goto B4033c6;
case 0x4033d0:goto L4033d0;
case 0x4033d6:c.instructions+=4;goto B4033d6;
case 0x4033d7:c.instructions+=3;goto B4033d7;
case 0x4033d9:c.instructions+=2;goto B4033d9;
case 0x4033db:c.instructions+=1;goto B4033db;
case 0x4033dd:goto L4033dd;
case 0x4033df:c.instructions+=2;goto B4033df;
case 0x4033e0:c.instructions+=1;goto B4033e0;
case 0x4033e3:goto L4033e3;
case 0x4033e7:c.instructions+=3;goto B4033e7;
case 0x4033e9:c.instructions+=2;goto B4033e9;
case 0x4033f0:c.instructions+=1;goto B4033f0;
case 0x4033f2:goto L4033f2;
case 0x4033f8:c.instructions+=3;goto B4033f8;
case 0x4033f9:c.instructions+=2;goto B4033f9;
case 0x4033fa:c.instructions+=1;goto B4033fa;
case 0x4033ff:goto L4033ff;
case 0x403402:c.instructions+=3;goto B403402;
case 0x403404:c.instructions+=2;goto B403404;
case 0x403406:c.instructions+=1;goto B403406;
case 0x403408:goto L403408;
case 0x40340a:goto L40340a;
case 0x40340b:c.instructions+=1;goto B40340b;
case 0x403410:goto L403410;
case 0x403415:c.instructions+=8;goto B403415;
case 0x403419:c.instructions+=7;goto B403419;
case 0x40341a:c.instructions+=6;goto B40341a;
case 0x40341e:c.instructions+=5;goto B40341e;
case 0x403420:c.instructions+=4;goto B403420;
case 0x403421:c.instructions+=3;goto B403421;
case 0x403422:c.instructions+=2;goto B403422;
case 0x403428:c.instructions+=1;goto B403428;
case 0x40342d:goto L40342d;
case 0x403430:c.instructions+=2;goto B403430;
case 0x403432:c.instructions+=1;goto B403432;
case 0x403434:goto L403434;
case 0x403438:c.instructions+=5;goto B403438;
case 0x40343f:c.instructions+=4;goto B40343f;
case 0x403441:c.instructions+=3;goto B403441;
case 0x403446:c.instructions+=2;goto B403446;
case 0x403447:c.instructions+=1;goto B403447;
case 0x403448:goto L403448;
case 0x40344b:c.instructions+=2;goto B40344b;
case 0x40344c:c.instructions+=1;goto B40344c;
case 0x403450:goto L403450;
case 0x403454:c.instructions+=10;goto B403454;
case 0x403456:c.instructions+=9;goto B403456;
case 0x403457:c.instructions+=8;goto B403457;
case 0x403458:c.instructions+=7;goto B403458;
case 0x403459:c.instructions+=6;goto B403459;
case 0x40345c:c.instructions+=5;goto B40345c;
case 0x40345f:c.instructions+=4;goto B40345f;
case 0x403461:c.instructions+=3;goto B403461;
case 0x403463:c.instructions+=2;goto B403463;
case 0x403465:c.instructions+=1;goto B403465;
case 0x403467:goto L403467;
case 0x403469:c.instructions+=1;goto B403469;
case 0x40346b:goto L40346b;
case 0x40346c:c.instructions+=2;goto B40346c;
case 0x40346e:c.instructions+=1;goto B40346e;
case 0x403473:goto L403473;
case 0x403475:c.instructions+=1;goto B403475;
case 0x40347a:goto L40347a;
case 0x40347c:c.instructions+=1;goto B40347c;
case 0x40347e:goto L40347e;
case 0x403480:goto L403480;
case 0x403484:c.instructions+=3;goto B403484;
case 0x403485:c.instructions+=2;goto B403485;
case 0x403487:c.instructions+=1;goto B403487;
case 0x403489:goto L403489;
case 0x40348b:c.instructions+=1;goto B40348b;
case 0x40348d:goto L40348d;
case 0x40348e:c.instructions+=4;goto B40348e;
case 0x40348f:c.instructions+=3;goto B40348f;
case 0x403494:c.instructions+=2;goto B403494;
case 0x403495:c.instructions+=1;goto B403495;
case 0x403496:goto L403496;
case 0x403497:c.instructions+=4;goto B403497;
case 0x403498:c.instructions+=3;goto B403498;
case 0x40349b:c.instructions+=2;goto B40349b;
case 0x40349c:c.instructions+=1;goto B40349c;
case 0x4034a0:goto L4034a0;
case 0x4034a4:c.instructions+=10;goto B4034a4;
case 0x4034a6:c.instructions+=9;goto B4034a6;
case 0x4034a7:c.instructions+=8;goto B4034a7;
case 0x4034a8:c.instructions+=7;goto B4034a8;
case 0x4034a9:c.instructions+=6;goto B4034a9;
case 0x4034ac:c.instructions+=5;goto B4034ac;
case 0x4034af:c.instructions+=4;goto B4034af;
case 0x4034b1:c.instructions+=3;goto B4034b1;
case 0x4034b3:c.instructions+=2;goto B4034b3;
case 0x4034b5:c.instructions+=1;goto B4034b5;
case 0x4034b7:goto L4034b7;
case 0x4034b9:c.instructions+=1;goto B4034b9;
case 0x4034bb:goto L4034bb;
case 0x4034bc:c.instructions+=2;goto B4034bc;
case 0x4034be:c.instructions+=1;goto B4034be;
case 0x4034c3:goto L4034c3;
case 0x4034c5:c.instructions+=1;goto B4034c5;
case 0x4034ca:goto L4034ca;
case 0x4034cc:c.instructions+=1;goto B4034cc;
case 0x4034ce:goto L4034ce;
case 0x4034d0:goto L4034d0;
case 0x4034d4:c.instructions+=3;goto B4034d4;
case 0x4034d5:c.instructions+=2;goto B4034d5;
case 0x4034d7:c.instructions+=1;goto B4034d7;
case 0x4034d9:goto L4034d9;
case 0x4034da:c.instructions+=4;goto B4034da;
case 0x4034db:c.instructions+=3;goto B4034db;
case 0x4034dd:c.instructions+=2;goto B4034dd;
case 0x4034de:c.instructions+=1;goto B4034de;
case 0x4034f0:goto L4034f0;
case 0x4034f1:c.instructions+=5;goto B4034f1;
case 0x4034f5:c.instructions+=4;goto B4034f5;
case 0x4034f7:c.instructions+=3;goto B4034f7;
case 0x4034f9:c.instructions+=2;goto B4034f9;
case 0x4034fb:c.instructions+=1;goto B4034fb;
case 0x403500:goto L403500;
case 0x403502:c.instructions+=3;goto B403502;
case 0x403504:c.instructions+=2;goto B403504;
case 0x403506:c.instructions+=1;goto B403506;
case 0x40350b:goto L40350b;
case 0x40350c:c.instructions+=1;goto B40350c;
case 0x403510:goto L403510;
case 0x403511:c.instructions+=12;goto B403511;
case 0x403515:c.instructions+=11;goto B403515;
case 0x403517:c.instructions+=10;goto B403517;
case 0x40351d:c.instructions+=9;goto B40351d;
case 0x403520:c.instructions+=8;goto B403520;
case 0x403526:c.instructions+=7;goto B403526;
case 0x403527:c.instructions+=6;goto B403527;
case 0x403529:c.instructions+=5;goto B403529;
case 0x40352d:c.instructions+=4;goto B40352d;
case 0x40352e:c.instructions+=3;goto B40352e;
case 0x403533:c.instructions+=2;goto B403533;
case 0x403537:c.instructions+=1;goto B403537;
case 0x40353c:goto L40353c;
case 0x403542:c.instructions+=3;goto B403542;
case 0x403544:c.instructions+=2;goto B403544;
case 0x403547:c.instructions+=1;goto B403547;
case 0x403549:goto L403549;
case 0x40354b:c.instructions+=2;goto B40354b;
case 0x40354c:c.instructions+=1;goto B40354c;
case 0x40354f:goto L40354f;
case 0x403551:c.instructions+=2;goto B403551;
case 0x403552:c.instructions+=1;goto B403552;
case 0x403560:goto L403560;
case 0x403564:c.instructions+=4;goto B403564;
case 0x403566:c.instructions+=3;goto B403566;
case 0x403568:c.instructions+=2;goto B403568;
case 0x40356a:c.instructions+=1;goto B40356a;
case 0x40356f:goto L40356f;
case 0x403580:goto L403580;
case 0x403584:c.instructions+=4;goto B403584;
case 0x40358a:c.instructions+=3;goto B40358a;
case 0x40358b:c.instructions+=2;goto B40358b;
case 0x40358c:c.instructions+=1;goto B40358c;
case 0x403591:goto L403591;
case 0x403594:c.instructions+=1;goto B403594;
case 0x4035a0:goto L4035a0;
case 0x4035a5:c.instructions+=2;goto B4035a5;
case 0x4035a7:c.instructions+=1;goto B4035a7;
case 0x4035a9:goto L4035a9;
case 0x4035ae:c.instructions+=2;goto B4035ae;
case 0x4035b0:c.instructions+=1;goto B4035b0;
case 0x4035b2:goto L4035b2;
case 0x4035b4:c.instructions+=5;goto B4035b4;
case 0x4035b6:c.instructions+=4;goto B4035b6;
case 0x4035b8:c.instructions+=3;goto B4035b8;
case 0x4035bb:c.instructions+=2;goto B4035bb;
case 0x4035bd:c.instructions+=1;goto B4035bd;
case 0x4035be:goto L4035be;
case 0x4035c3:c.instructions+=5;goto B4035c3;
case 0x4035c5:c.instructions+=4;goto B4035c5;
case 0x4035c7:c.instructions+=3;goto B4035c7;
case 0x4035ca:c.instructions+=2;goto B4035ca;
case 0x4035cc:c.instructions+=1;goto B4035cc;
case 0x4035d0:goto L4035d0;
case 0x4035d1:c.instructions+=7;goto B4035d1;
case 0x4035d2:c.instructions+=6;goto B4035d2;
case 0x4035d4:c.instructions+=5;goto B4035d4;
case 0x4035d5:c.instructions+=4;goto B4035d5;
case 0x4035da:c.instructions+=3;goto B4035da;
case 0x4035dc:c.instructions+=2;goto B4035dc;
case 0x4035de:c.instructions+=1;goto B4035de;
case 0x4035e3:goto L4035e3;
case 0x4035e4:c.instructions+=5;goto B4035e4;
case 0x4035e9:c.instructions+=4;goto B4035e9;
case 0x4035eb:c.instructions+=3;goto B4035eb;
case 0x4035f0:c.instructions+=2;goto B4035f0;
case 0x4035f5:c.instructions+=1;goto B4035f5;
case 0x4035fa:goto L4035fa;
case 0x4035fb:c.instructions+=5;goto B4035fb;
case 0x403600:c.instructions+=4;goto B403600;
case 0x403605:c.instructions+=3;goto B403605;
case 0x403607:c.instructions+=2;goto B403607;
case 0x40360c:c.instructions+=1;goto B40360c;
case 0x403611:goto L403611;
case 0x403612:c.instructions+=5;goto B403612;
case 0x403617:c.instructions+=4;goto B403617;
case 0x40361c:c.instructions+=3;goto B40361c;
case 0x403621:c.instructions+=2;goto B403621;
case 0x403626:c.instructions+=1;goto B403626;
case 0x40362b:goto L40362b;
case 0x40362e:c.instructions+=6;goto B40362e;
case 0x40362f:c.instructions+=5;goto B40362f;
case 0x403634:c.instructions+=4;goto B403634;
case 0x403639:c.instructions+=3;goto B403639;
case 0x40363b:c.instructions+=2;goto B40363b;
case 0x403640:c.instructions+=1;goto B403640;
case 0x403645:goto L403645;
case 0x40364a:c.instructions+=4;goto B40364a;
case 0x40364f:c.instructions+=3;goto B40364f;
case 0x403652:c.instructions+=2;goto B403652;
case 0x403654:c.instructions+=1;goto B403654;
case 0x40365a:goto L40365a;
case 0x40365b:c.instructions+=3;goto B40365b;
case 0x403660:c.instructions+=2;goto B403660;
case 0x403662:c.instructions+=1;goto B403662;
case 0x403667:goto L403667;
case 0x40366a:c.instructions+=2;goto B40366a;
case 0x40366c:c.instructions+=1;goto B40366c;
case 0x40366e:goto L40366e;
case 0x40366f:c.instructions+=6;goto B40366f;
case 0x403670:c.instructions+=5;goto B403670;
case 0x403674:c.instructions+=4;goto B403674;
case 0x403675:c.instructions+=3;goto B403675;
case 0x40367a:c.instructions+=2;goto B40367a;
case 0x40367e:c.instructions+=1;goto B40367e;
case 0x403683:goto L403683;
case 0x403687:c.instructions+=8;goto B403687;
case 0x403689:c.instructions+=7;goto B403689;
case 0x40368c:c.instructions+=6;goto B40368c;
case 0x403691:c.instructions+=5;goto B403691;
case 0x403694:c.instructions+=4;goto B403694;
case 0x403697:c.instructions+=3;goto B403697;
case 0x40369a:c.instructions+=2;goto B40369a;
case 0x40369c:c.instructions+=1;goto B40369c;
case 0x40369e:goto L40369e;
case 0x40369f:c.instructions+=2;goto B40369f;
case 0x4036a0:c.instructions+=1;goto B4036a0;
case 0x4036a5:goto L4036a5;
case 0x4036ab:c.instructions+=4;goto B4036ab;
case 0x4036ae:c.instructions+=3;goto B4036ae;
case 0x4036b1:c.instructions+=2;goto B4036b1;
case 0x4036b3:c.instructions+=1;goto B4036b3;
case 0x4036b8:goto L4036b8;
case 0x4036ba:goto L4036ba;
case 0x4036bc:c.instructions+=2;goto B4036bc;
case 0x4036be:c.instructions+=1;goto B4036be;
case 0x4036bf:goto L4036bf;
case 0x4036c0:c.instructions+=1;goto B4036c0;
case 0x4036c5:goto L4036c5;
case 0x4036c8:c.instructions+=3;goto B4036c8;
case 0x4036ca:c.instructions+=2;goto B4036ca;
case 0x4036cb:c.instructions+=1;goto B4036cb;
case 0x4036cd:goto L4036cd;
case 0x4036d3:c.instructions+=1;goto B4036d3;
case 0x4036d9:goto L4036d9;
case 0x4036da:goto L4036da;
case 0x4036db:c.instructions+=2;goto B4036db;
case 0x4036dc:c.instructions+=1;goto B4036dc;
case 0x4036e0:goto L4036e0;
case 0x4036e3:c.instructions+=17;goto B4036e3;
case 0x4036e7:c.instructions+=16;goto B4036e7;
case 0x4036ea:c.instructions+=15;goto B4036ea;
case 0x4036ed:c.instructions+=14;goto B4036ed;
case 0x4036f1:c.instructions+=13;goto B4036f1;
case 0x4036f5:c.instructions+=12;goto B4036f5;
case 0x4036f7:c.instructions+=11;goto B4036f7;
case 0x4036fb:c.instructions+=10;goto B4036fb;
case 0x4036fe:c.instructions+=9;goto B4036fe;
case 0x403702:c.instructions+=8;goto B403702;
case 0x403705:c.instructions+=7;goto B403705;
case 0x403708:c.instructions+=6;goto B403708;
case 0x40370c:c.instructions+=5;goto B40370c;
case 0x403712:c.instructions+=4;goto B403712;
case 0x403718:c.instructions+=3;goto B403718;
case 0x40371a:c.instructions+=2;goto B40371a;
case 0x40371d:c.instructions+=1;goto B40371d;
case 0x40371f:goto L40371f;
case 0x403725:c.instructions+=3;goto B403725;
case 0x40372b:c.instructions+=2;goto B40372b;
case 0x40372f:c.instructions+=1;goto B40372f;
case 0x403733:goto L403733;
case 0x403737:c.instructions+=4;goto B403737;
case 0x403738:c.instructions+=3;goto B403738;
case 0x40373c:c.instructions+=2;goto B40373c;
case 0x40373d:c.instructions+=1;goto B40373d;
case 0x403742:goto L403742;
case 0x403746:c.instructions+=4;goto B403746;
case 0x403747:c.instructions+=3;goto B403747;
case 0x40374b:c.instructions+=2;goto B40374b;
case 0x40374c:c.instructions+=1;goto B40374c;
case 0x403751:goto L403751;
case 0x403755:c.instructions+=9;goto B403755;
case 0x403759:c.instructions+=8;goto B403759;
case 0x40375c:c.instructions+=7;goto B40375c;
case 0x403760:c.instructions+=6;goto B403760;
case 0x403764:c.instructions+=5;goto B403764;
case 0x403766:c.instructions+=4;goto B403766;
case 0x40376a:c.instructions+=3;goto B40376a;
case 0x40376c:c.instructions+=2;goto B40376c;
case 0x40376f:c.instructions+=1;goto B40376f;
case 0x403771:goto L403771;
case 0x403773:c.instructions+=2;goto B403773;
case 0x403776:c.instructions+=1;goto B403776;
case 0x403777:goto L403777;
case 0x403779:c.instructions+=2;goto B403779;
case 0x40377c:c.instructions+=1;goto B40377c;
case 0x403780:goto L403780;
case 0x403781:c.instructions+=11;goto B403781;
case 0x403783:c.instructions+=10;goto B403783;
case 0x403786:c.instructions+=9;goto B403786;
case 0x403788:c.instructions+=8;goto B403788;
case 0x40378d:c.instructions+=7;goto B40378d;
case 0x403793:c.instructions+=6;goto B403793;
case 0x403794:c.instructions+=5;goto B403794;
case 0x40379b:c.instructions+=4;goto B40379b;
case 0x4037a1:c.instructions+=3;goto B4037a1;
case 0x4037a2:c.instructions+=2;goto B4037a2;
case 0x4037a6:c.instructions+=1;goto B4037a6;
case 0x4037ab:goto L4037ab;
case 0x4037ae:c.instructions+=18;goto B4037ae;
case 0x4037b0:c.instructions+=17;goto B4037b0;
case 0x4037b3:c.instructions+=16;goto B4037b3;
case 0x4037b6:c.instructions+=15;goto B4037b6;
case 0x4037ba:c.instructions+=14;goto B4037ba;
case 0x4037bc:c.instructions+=13;goto B4037bc;
case 0x4037be:c.instructions+=12;goto B4037be;
case 0x4037c0:c.instructions+=11;goto B4037c0;
case 0x4037c4:c.instructions+=10;goto B4037c4;
case 0x4037c6:c.instructions+=9;goto B4037c6;
case 0x4037ca:c.instructions+=8;goto B4037ca;
case 0x4037cc:c.instructions+=7;goto B4037cc;
case 0x4037cf:c.instructions+=6;goto B4037cf;
case 0x4037d0:c.instructions+=5;goto B4037d0;
case 0x4037d4:c.instructions+=4;goto B4037d4;
case 0x4037df:c.instructions+=3;goto B4037df;
case 0x4037e7:c.instructions+=2;goto B4037e7;
case 0x4037ea:c.instructions+=1;goto B4037ea;
case 0x4037ef:goto L4037ef;
case 0x4037f2:c.instructions+=3;goto B4037f2;
case 0x4037f6:c.instructions+=2;goto B4037f6;
case 0x403801:c.instructions+=1;goto B403801;
case 0x403806:goto L403806;
case 0x40380d:c.instructions+=5;goto B40380d;
case 0x403814:c.instructions+=4;goto B403814;
case 0x403815:c.instructions+=3;goto B403815;
case 0x403817:c.instructions+=2;goto B403817;
case 0x403818:c.instructions+=1;goto B403818;
case 0x403820:goto L403820;
case 0x403823:c.instructions+=7;goto B403823;
case 0x403824:c.instructions+=6;goto B403824;
case 0x403825:c.instructions+=5;goto B403825;
case 0x403829:c.instructions+=4;goto B403829;
case 0x40382b:c.instructions+=3;goto B40382b;
case 0x40382d:c.instructions+=2;goto B40382d;
case 0x40382e:c.instructions+=1;goto B40382e;
case 0x403834:goto L403834;
case 0x403838:c.instructions+=5;goto B403838;
case 0x40383c:c.instructions+=4;goto B40383c;
case 0x40383e:c.instructions+=3;goto B40383e;
case 0x403845:c.instructions+=2;goto B403845;
case 0x403846:c.instructions+=1;goto B403846;
case 0x40384b:goto L40384b;
case 0x40384d:c.instructions+=1;goto B40384d;
case 0x40384f:goto L40384f;
case 0x403856:c.instructions+=9;goto B403856;
case 0x40385a:c.instructions+=8;goto B40385a;
case 0x403861:c.instructions+=7;goto B403861;
case 0x403864:c.instructions+=6;goto B403864;
case 0x403869:c.instructions+=5;goto B403869;
case 0x40386c:c.instructions+=4;goto B40386c;
case 0x40386d:c.instructions+=3;goto B40386d;
case 0x403871:c.instructions+=2;goto B403871;
case 0x403875:c.instructions+=1;goto B403875;
case 0x40387a:goto L40387a;
case 0x40387c:c.instructions+=1;goto B40387c;
case 0x40387e:goto L40387e;
case 0x403884:c.instructions+=1;goto B403884;
case 0x403888:goto L403888;
case 0x40388b:c.instructions+=6;goto B40388b;
case 0x40388e:c.instructions+=5;goto B40388e;
case 0x403892:c.instructions+=4;goto B403892;
case 0x403893:c.instructions+=3;goto B403893;
case 0x403895:c.instructions+=2;goto B403895;
case 0x403899:c.instructions+=1;goto B403899;
case 0x40389e:goto L40389e;
case 0x4038a2:c.instructions+=9;goto B4038a2;
case 0x4038a6:c.instructions+=8;goto B4038a6;
case 0x4038a7:c.instructions+=7;goto B4038a7;
case 0x4038ab:c.instructions+=6;goto B4038ab;
case 0x4038ad:c.instructions+=5;goto B4038ad;
case 0x4038af:c.instructions+=4;goto B4038af;
case 0x4038b1:c.instructions+=3;goto B4038b1;
case 0x4038b3:c.instructions+=2;goto B4038b3;
case 0x4038b6:c.instructions+=1;goto B4038b6;
case 0x4038b8:goto L4038b8;
case 0x4038ba:goto L4038ba;
case 0x4038bb:c.instructions+=4;goto B4038bb;
case 0x4038bc:c.instructions+=3;goto B4038bc;
case 0x4038bd:c.instructions+=2;goto B4038bd;
case 0x4038c0:c.instructions+=1;goto B4038c0;
case 0x4038d0:goto L4038d0;
case 0x4038d1:c.instructions+=15;goto B4038d1;
case 0x4038d3:c.instructions+=14;goto B4038d3;
case 0x4038d6:c.instructions+=13;goto B4038d6;
case 0x4038d9:c.instructions+=12;goto B4038d9;
case 0x4038da:c.instructions+=11;goto B4038da;
case 0x4038dd:c.instructions+=10;goto B4038dd;
case 0x4038e3:c.instructions+=9;goto B4038e3;
case 0x4038e6:c.instructions+=8;goto B4038e6;
case 0x4038e9:c.instructions+=7;goto B4038e9;
case 0x4038ea:c.instructions+=6;goto B4038ea;
case 0x4038ed:c.instructions+=5;goto B4038ed;
case 0x4038f1:c.instructions+=4;goto B4038f1;
case 0x4038f5:c.instructions+=3;goto B4038f5;
case 0x4038f6:c.instructions+=2;goto B4038f6;
case 0x4038f9:c.instructions+=1;goto B4038f9;
case 0x4038fe:goto L4038fe;
case 0x403900:c.instructions+=1;goto B403900;
case 0x403905:goto L403905;
case 0x403909:c.instructions+=13;goto B403909;
case 0x40390f:c.instructions+=12;goto B40390f;
case 0x403912:c.instructions+=11;goto B403912;
case 0x403918:c.instructions+=10;goto B403918;
case 0x40391e:c.instructions+=9;goto B40391e;
case 0x403922:c.instructions+=8;goto B403922;
case 0x403926:c.instructions+=7;goto B403926;
case 0x40392c:c.instructions+=6;goto B40392c;
case 0x403930:c.instructions+=5;goto B403930;
case 0x403933:c.instructions+=4;goto B403933;
case 0x403939:c.instructions+=3;goto B403939;
case 0x40393b:c.instructions+=2;goto B40393b;
case 0x40393e:c.instructions+=1;goto B40393e;
case 0x403940:goto L403940;
case 0x403944:c.instructions+=5;goto B403944;
case 0x403946:c.instructions+=4;goto B403946;
case 0x403948:c.instructions+=3;goto B403948;
case 0x40394a:c.instructions+=2;goto B40394a;
case 0x40394d:c.instructions+=1;goto B40394d;
case 0x40394f:goto L40394f;
case 0x403953:c.instructions+=4;goto B403953;
case 0x403957:c.instructions+=3;goto B403957;
case 0x403959:c.instructions+=2;goto B403959;
case 0x40395c:c.instructions+=1;goto B40395c;
case 0x40395e:goto L40395e;
case 0x403962:c.instructions+=2;goto B403962;
case 0x403966:c.instructions+=1;goto B403966;
case 0x403968:goto L403968;
case 0x40396a:goto L40396a;
case 0x40396e:c.instructions+=1;goto B40396e;
case 0x403970:goto L403970;
case 0x403973:c.instructions+=1;goto B403973;
case 0x403978:goto L403978;
case 0x40397c:c.instructions+=7;goto B40397c;
case 0x403980:c.instructions+=6;goto B403980;
case 0x403982:c.instructions+=5;goto B403982;
case 0x403983:c.instructions+=4;goto B403983;
case 0x403984:c.instructions+=3;goto B403984;
case 0x403986:c.instructions+=2;goto B403986;
case 0x403987:c.instructions+=1;goto B403987;
case 0x403988:goto L403988;
case 0x40398b:c.instructions+=18;goto B40398b;
case 0x40398f:c.instructions+=17;goto B40398f;
case 0x403992:c.instructions+=16;goto B403992;
case 0x403993:c.instructions+=15;goto B403993;
case 0x403996:c.instructions+=14;goto B403996;
case 0x40399a:c.instructions+=13;goto B40399a;
case 0x40399e:c.instructions+=12;goto B40399e;
case 0x4039a0:c.instructions+=11;goto B4039a0;
case 0x4039a1:c.instructions+=10;goto B4039a1;
case 0x4039a7:c.instructions+=9;goto B4039a7;
case 0x4039ab:c.instructions+=8;goto B4039ab;
case 0x4039b1:c.instructions+=7;goto B4039b1;
case 0x4039b3:c.instructions+=6;goto B4039b3;
case 0x4039b7:c.instructions+=5;goto B4039b7;
case 0x4039b9:c.instructions+=4;goto B4039b9;
case 0x4039bf:c.instructions+=3;goto B4039bf;
case 0x4039c3:c.instructions+=2;goto B4039c3;
case 0x4039c7:c.instructions+=1;goto B4039c7;
case 0x4039cc:goto L4039cc;
case 0x4039d2:c.instructions+=11;goto B4039d2;
case 0x4039d5:c.instructions+=10;goto B4039d5;
case 0x4039d9:c.instructions+=9;goto B4039d9;
case 0x4039da:c.instructions+=8;goto B4039da;
case 0x4039db:c.instructions+=7;goto B4039db;
case 0x4039dd:c.instructions+=6;goto B4039dd;
case 0x4039e1:c.instructions+=5;goto B4039e1;
case 0x4039e5:c.instructions+=4;goto B4039e5;
case 0x4039e7:c.instructions+=3;goto B4039e7;
case 0x4039e9:c.instructions+=2;goto B4039e9;
case 0x4039ea:c.instructions+=1;goto B4039ea;
case 0x4039f0:goto L4039f0;
case 0x4039f4:c.instructions+=17;goto B4039f4;
case 0x4039f8:c.instructions+=16;goto B4039f8;
case 0x4039fb:c.instructions+=15;goto B4039fb;
case 0x4039fd:c.instructions+=14;goto B4039fd;
case 0x403a03:c.instructions+=13;goto B403a03;
case 0x403a09:c.instructions+=12;goto B403a09;
case 0x403a0b:c.instructions+=11;goto B403a0b;
case 0x403a11:c.instructions+=10;goto B403a11;
case 0x403a17:c.instructions+=9;goto B403a17;
case 0x403a1d:c.instructions+=8;goto B403a1d;
case 0x403a1f:c.instructions+=7;goto B403a1f;
case 0x403a25:c.instructions+=6;goto B403a25;
case 0x403a2b:c.instructions+=5;goto B403a2b;
case 0x403a31:c.instructions+=4;goto B403a31;
case 0x403a33:c.instructions+=3;goto B403a33;
case 0x403a39:c.instructions+=2;goto B403a39;
case 0x403a3b:c.instructions+=1;goto B403a3b;
case 0x403a40:goto L403a40;
case 0x403a41:c.instructions+=3;goto B403a41;
case 0x403a45:c.instructions+=2;goto B403a45;
case 0x403a47:c.instructions+=1;goto B403a47;
case 0x403a4c:goto L403a4c;
case 0x403a50:c.instructions+=5;goto B403a50;
case 0x403a54:c.instructions+=4;goto B403a54;
case 0x403a5a:c.instructions+=3;goto B403a5a;
case 0x403a5c:c.instructions+=2;goto B403a5c;
case 0x403a5f:c.instructions+=1;goto B403a5f;
case 0x403a61:goto L403a61;
case 0x403a67:c.instructions+=4;goto B403a67;
case 0x403a68:c.instructions+=3;goto B403a68;
case 0x403a6b:c.instructions+=2;goto B403a6b;
case 0x403a6c:c.instructions+=1;goto B403a6c;
case 0x403a71:goto L403a71;
case 0x403a73:c.instructions+=1;goto B403a73;
case 0x403a76:goto L403a76;
case 0x403a7a:c.instructions+=11;goto B403a7a;
case 0x403a80:c.instructions+=10;goto B403a80;
case 0x403a83:c.instructions+=9;goto B403a83;
case 0x403a86:c.instructions+=8;goto B403a86;
case 0x403a8c:c.instructions+=7;goto B403a8c;
case 0x403a8d:c.instructions+=6;goto B403a8d;
case 0x403a8f:c.instructions+=5;goto B403a8f;
case 0x403a91:c.instructions+=4;goto B403a91;
case 0x403a97:c.instructions+=3;goto B403a97;
case 0x403a99:c.instructions+=2;goto B403a99;
case 0x403a9c:c.instructions+=1;goto B403a9c;
case 0x403a9e:goto L403a9e;
case 0x403aa3:goto L403aa3;
case 0x403aa7:c.instructions+=1;goto B403aa7;
case 0x403aa9:goto L403aa9;
case 0x403aae:goto L403aae;
case 0x403ab2:goto L403ab2;
case 0x403ab8:c.instructions+=10;goto B403ab8;
case 0x403aba:c.instructions+=9;goto B403aba;
case 0x403ac0:c.instructions+=8;goto B403ac0;
case 0x403ac4:c.instructions+=7;goto B403ac4;
case 0x403aca:c.instructions+=6;goto B403aca;
case 0x403acc:c.instructions+=5;goto B403acc;
case 0x403ad0:c.instructions+=4;goto B403ad0;
case 0x403ad2:c.instructions+=3;goto B403ad2;
case 0x403ad4:c.instructions+=2;goto B403ad4;
case 0x403ad7:c.instructions+=1;goto B403ad7;
case 0x403ad9:goto L403ad9;
case 0x403ade:c.instructions+=1;goto B403ade;
case 0x403adf:goto L403adf;
case 0x403ae1:c.instructions+=1;goto B403ae1;
case 0x403af0:goto L403af0;
case 0x403af1:c.instructions+=16;goto B403af1;
case 0x403af3:c.instructions+=15;goto B403af3;
case 0x403af6:c.instructions+=14;goto B403af6;
case 0x403af9:c.instructions+=13;goto B403af9;
case 0x403afa:c.instructions+=12;goto B403afa;
case 0x403afd:c.instructions+=11;goto B403afd;
case 0x403aff:c.instructions+=10;goto B403aff;
case 0x403b06:c.instructions+=9;goto B403b06;
case 0x403b0a:c.instructions+=8;goto B403b0a;
case 0x403b0e:c.instructions+=7;goto B403b0e;
case 0x403b16:c.instructions+=6;goto B403b16;
case 0x403b1e:c.instructions+=5;goto B403b1e;
case 0x403b26:c.instructions+=4;goto B403b26;
case 0x403b27:c.instructions+=3;goto B403b27;
case 0x403b28:c.instructions+=2;goto B403b28;
case 0x403b29:c.instructions+=1;goto B403b29;
case 0x403b2e:goto L403b2e;
case 0x403b31:c.instructions+=11;goto B403b31;
case 0x403b34:c.instructions+=10;goto B403b34;
case 0x403b38:c.instructions+=9;goto B403b38;
case 0x403b3b:c.instructions+=8;goto B403b3b;
case 0x403b3f:c.instructions+=7;goto B403b3f;
case 0x403b43:c.instructions+=6;goto B403b43;
case 0x403b49:c.instructions+=5;goto B403b49;
case 0x403b4c:c.instructions+=4;goto B403b4c;
case 0x403b4f:c.instructions+=3;goto B403b4f;
case 0x403b51:c.instructions+=2;goto B403b51;
case 0x403b54:c.instructions+=1;goto B403b54;
case 0x403b56:goto L403b56;
case 0x403b5e:c.instructions+=1;goto B403b5e;
case 0x403b60:goto L403b60;
case 0x403b63:c.instructions+=1;goto B403b63;
case 0x403b67:goto L403b67;
case 0x403b6b:c.instructions+=8;goto B403b6b;
case 0x403b6c:c.instructions+=7;goto B403b6c;
case 0x403b70:c.instructions+=6;goto B403b70;
case 0x403b71:c.instructions+=5;goto B403b71;
case 0x403b75:c.instructions+=4;goto B403b75;
case 0x403b76:c.instructions+=3;goto B403b76;
case 0x403b7a:c.instructions+=2;goto B403b7a;
case 0x403b7b:c.instructions+=1;goto B403b7b;
case 0x403b80:goto L403b80;
case 0x403b84:c.instructions+=11;goto B403b84;
case 0x403b87:c.instructions+=10;goto B403b87;
case 0x403b8b:c.instructions+=9;goto B403b8b;
case 0x403b8d:c.instructions+=8;goto B403b8d;
case 0x403b91:c.instructions+=7;goto B403b91;
case 0x403b94:c.instructions+=6;goto B403b94;
case 0x403b97:c.instructions+=5;goto B403b97;
case 0x403b9a:c.instructions+=4;goto B403b9a;
case 0x403b9b:c.instructions+=3;goto B403b9b;
case 0x403b9d:c.instructions+=2;goto B403b9d;
case 0x403b9e:c.instructions+=1;goto B403b9e;
case 0x403ba0:goto L403ba0;
case 0x403ba1:c.instructions+=9;goto B403ba1;
case 0x403ba3:c.instructions+=8;goto B403ba3;
case 0x403ba6:c.instructions+=7;goto B403ba6;
case 0x403ba9:c.instructions+=6;goto B403ba9;
case 0x403baf:c.instructions+=5;goto B403baf;
case 0x403bb0:c.instructions+=4;goto B403bb0;
case 0x403bb3:c.instructions+=3;goto B403bb3;
case 0x403bb5:c.instructions+=2;goto B403bb5;
case 0x403bb8:c.instructions+=1;goto B403bb8;
case 0x403bba:goto L403bba;
case 0x403bc2:c.instructions+=1;goto B403bc2;
case 0x403bc4:goto L403bc4;
case 0x403bc7:c.instructions+=1;goto B403bc7;
case 0x403bcb:goto L403bcb;
case 0x403bcf:c.instructions+=7;goto B403bcf;
case 0x403bd2:c.instructions+=6;goto B403bd2;
case 0x403bd3:c.instructions+=5;goto B403bd3;
case 0x403bd6:c.instructions+=4;goto B403bd6;
case 0x403bd7:c.instructions+=3;goto B403bd7;
case 0x403bdb:c.instructions+=2;goto B403bdb;
case 0x403bdc:c.instructions+=1;goto B403bdc;
case 0x403be1:goto L403be1;
case 0x403be4:c.instructions+=19;goto B403be4;
case 0x403be7:c.instructions+=18;goto B403be7;
case 0x403bea:c.instructions+=17;goto B403bea;
case 0x403bee:c.instructions+=16;goto B403bee;
case 0x403bf1:c.instructions+=15;goto B403bf1;
case 0x403bf4:c.instructions+=14;goto B403bf4;
case 0x403bf8:c.instructions+=13;goto B403bf8;
case 0x403bf9:c.instructions+=12;goto B403bf9;
case 0x403bfd:c.instructions+=11;goto B403bfd;
case 0x403c01:c.instructions+=10;goto B403c01;
case 0x403c05:c.instructions+=9;goto B403c05;
case 0x403c09:c.instructions+=8;goto B403c09;
case 0x403c0d:c.instructions+=7;goto B403c0d;
case 0x403c0f:c.instructions+=6;goto B403c0f;
case 0x403c11:c.instructions+=5;goto B403c11;
case 0x403c14:c.instructions+=4;goto B403c14;
case 0x403c17:c.instructions+=3;goto B403c17;
case 0x403c19:c.instructions+=2;goto B403c19;
case 0x403c1a:c.instructions+=1;goto B403c1a;
case 0x403c20:goto L403c20;
case 0x403c25:c.instructions+=4;goto B403c25;
case 0x403c28:c.instructions+=3;goto B403c28;
case 0x403c2a:c.instructions+=2;goto B403c2a;
case 0x403c2b:c.instructions+=1;goto B403c2b;
case 0x403c31:goto L403c31;
case 0x403c37:c.instructions+=2;goto B403c37;
case 0x403c39:c.instructions+=1;goto B403c39;
case 0x403c3f:goto L403c3f;
case 0x403c46:c.instructions+=3;goto B403c46;
case 0x403c47:c.instructions+=2;goto B403c47;
case 0x403c48:c.instructions+=1;goto B403c48;
case 0x403c4e:goto L403c4e;
case 0x403c54:c.instructions+=5;goto B403c54;
case 0x403c57:c.instructions+=4;goto B403c57;
case 0x403c5d:c.instructions+=3;goto B403c5d;
case 0x403c5e:c.instructions+=2;goto B403c5e;
case 0x403c5f:c.instructions+=1;goto B403c5f;
case 0x403c64:goto L403c64;
case 0x403c6a:c.instructions+=4;goto B403c6a;
case 0x403c6c:c.instructions+=3;goto B403c6c;
case 0x403c6f:c.instructions+=2;goto B403c6f;
case 0x403c70:c.instructions+=1;goto B403c70;
case 0x403c75:goto L403c75;
case 0x403c79:c.instructions+=7;goto B403c79;
case 0x403c7d:c.instructions+=6;goto B403c7d;
case 0x403c7f:c.instructions+=5;goto B403c7f;
case 0x403c83:c.instructions+=4;goto B403c83;
case 0x403c87:c.instructions+=3;goto B403c87;
case 0x403c8b:c.instructions+=2;goto B403c8b;
case 0x403c8f:c.instructions+=1;goto B403c8f;
case 0x403c91:goto L403c91;
case 0x403c95:c.instructions+=1;goto B403c95;
case 0x403c99:goto L403c99;
case 0x403c9e:c.instructions+=6;goto B403c9e;
case 0x403c9f:c.instructions+=5;goto B403c9f;
case 0x403ca1:c.instructions+=4;goto B403ca1;
case 0x403ca3:c.instructions+=3;goto B403ca3;
case 0x403ca5:c.instructions+=2;goto B403ca5;
case 0x403ca7:c.instructions+=1;goto B403ca7;
case 0x403ca9:goto L403ca9;
case 0x403caa:goto L403caa;
case 0x403cac:c.instructions+=2;goto B403cac;
case 0x403cad:c.instructions+=1;goto B403cad;
case 0x403caf:goto L403caf;
case 0x403cb0:goto L403cb0;
case 0x403cb5:c.instructions+=6;goto B403cb5;
case 0x403cb8:c.instructions+=5;goto B403cb8;
case 0x403cbb:c.instructions+=4;goto B403cbb;
case 0x403cbd:c.instructions+=3;goto B403cbd;
case 0x403cbf:c.instructions+=2;goto B403cbf;
case 0x403cc1:c.instructions+=1;goto B403cc1;
case 0x403cc7:goto L403cc7;
case 0x403cd0:goto L403cd0;
case 0x403cd2:c.instructions+=4;goto B403cd2;
case 0x403cd6:c.instructions+=3;goto B403cd6;
case 0x403cdc:c.instructions+=2;goto B403cdc;
case 0x403cdd:c.instructions+=1;goto B403cdd;
case 0x403ce2:goto L403ce2;
case 0x403ce6:c.instructions+=2;goto B403ce6;
case 0x403ce8:c.instructions+=1;goto B403ce8;
case 0x403cea:goto L403cea;
case 0x403cee:c.instructions+=2;goto B403cee;
case 0x403cf4:c.instructions+=1;goto B403cf4;
case 0x403cf6:goto L403cf6;
case 0x403cfa:c.instructions+=1;goto B403cfa;
case 0x403d00:goto L403d00;
case 0x403d05:c.instructions+=6;goto B403d05;
case 0x403d08:c.instructions+=5;goto B403d08;
case 0x403d0b:c.instructions+=4;goto B403d0b;
case 0x403d0c:c.instructions+=3;goto B403d0c;
case 0x403d0e:c.instructions+=2;goto B403d0e;
case 0x403d10:c.instructions+=1;goto B403d10;
case 0x403d12:goto L403d12;
case 0x403d13:c.instructions+=4;goto B403d13;
case 0x403d14:c.instructions+=3;goto B403d14;
case 0x403d15:c.instructions+=2;goto B403d15;
case 0x403d18:c.instructions+=1;goto B403d18;
case 0x403d19:goto L403d19;
case 0x403d1f:c.instructions+=7;goto B403d1f;
case 0x403d23:c.instructions+=6;goto B403d23;
case 0x403d26:c.instructions+=5;goto B403d26;
case 0x403d29:c.instructions+=4;goto B403d29;
case 0x403d2b:c.instructions+=3;goto B403d2b;
case 0x403d2d:c.instructions+=2;goto B403d2d;
case 0x403d2f:c.instructions+=1;goto B403d2f;
case 0x403d31:goto L403d31;
case 0x403d33:c.instructions+=9;goto B403d33;
case 0x403d37:c.instructions+=8;goto B403d37;
case 0x403d3d:c.instructions+=7;goto B403d3d;
case 0x403d42:c.instructions+=6;goto B403d42;
case 0x403d45:c.instructions+=5;goto B403d45;
case 0x403d48:c.instructions+=4;goto B403d48;
case 0x403d49:c.instructions+=3;goto B403d49;
case 0x403d4b:c.instructions+=2;goto B403d4b;
case 0x403d4d:c.instructions+=1;goto B403d4d;
case 0x403d4f:goto L403d4f;
case 0x403d50:c.instructions+=1;goto B403d50;
case 0x403d51:goto L403d51;
case 0x403d52:c.instructions+=2;goto B403d52;
case 0x403d55:c.instructions+=1;goto B403d55;
case 0x403d60:goto L403d60;
case 0x403d64:c.instructions+=2;goto B403d64;
case 0x403d66:c.instructions+=1;goto B403d66;
case 0x403d68:goto L403d68;
case 0x403d6b:c.instructions+=1;goto B403d6b;
case 0x403d6d:goto L403d6d;
case 0x403d72:c.instructions+=1;goto B403d72;
case 0x403d73:goto L403d73;
case 0x403d75:c.instructions+=1;goto B403d75;
case 0x403d80:goto L403d80;
case 0x403d84:c.instructions+=2;goto B403d84;
case 0x403d87:c.instructions+=1;goto B403d87;
case 0x403d89:goto L403d89;
case 0x403d8c:c.instructions+=1;goto B403d8c;
case 0x403d8e:goto L403d8e;
case 0x403d93:c.instructions+=1;goto B403d93;
case 0x403d94:goto L403d94;
case 0x403d96:c.instructions+=1;goto B403d96;
case 0x403da0:goto L403da0;
case 0x403da4:c.instructions+=2;goto B403da4;
case 0x403da7:c.instructions+=1;goto B403da7;
case 0x403db0:goto L403db0;
case 0x403db4:c.instructions+=2;goto B403db4;
case 0x403db6:c.instructions+=1;goto B403db6;
case 0x403db8:goto L403db8;
case 0x403dbb:c.instructions+=1;goto B403dbb;
case 0x403dbd:goto L403dbd;
case 0x403dbe:c.instructions+=1;goto B403dbe;
case 0x403dbf:goto L403dbf;
case 0x403dc2:c.instructions+=1;goto B403dc2;
case 0x403dc4:goto L403dc4;
case 0x403dc7:c.instructions+=1;goto B403dc7;
case 0x403dc9:goto L403dc9;
case 0x403dcc:goto L403dcc;
case 0x403dd0:goto L403dd0;
case 0x403dd4:c.instructions+=3;goto B403dd4;
case 0x403dd7:c.instructions+=2;goto B403dd7;
case 0x403dda:c.instructions+=1;goto B403dda;
case 0x403ddf:goto L403ddf;
case 0x403de1:c.instructions+=1;goto B403de1;
case 0x403df0:goto L403df0;
case 0x403df3:c.instructions+=61;goto B403df3;
case 0x403df7:c.instructions+=60;goto B403df7;
case 0x403df9:c.instructions+=59;goto B403df9;
case 0x403dfc:c.instructions+=58;goto B403dfc;
case 0x403e00:c.instructions+=57;goto B403e00;
case 0x403e04:c.instructions+=56;goto B403e04;
case 0x403e06:c.instructions+=55;goto B403e06;
case 0x403e0a:c.instructions+=54;goto B403e0a;
case 0x403e0d:c.instructions+=53;goto B403e0d;
case 0x403e11:c.instructions+=52;goto B403e11;
case 0x403e15:c.instructions+=51;goto B403e15;
case 0x403e17:c.instructions+=50;goto B403e17;
case 0x403e1b:c.instructions+=49;goto B403e1b;
case 0x403e1e:c.instructions+=48;goto B403e1e;
case 0x403e22:c.instructions+=47;goto B403e22;
case 0x403e26:c.instructions+=46;goto B403e26;
case 0x403e28:c.instructions+=45;goto B403e28;
case 0x403e2c:c.instructions+=44;goto B403e2c;
case 0x403e30:c.instructions+=43;goto B403e30;
case 0x403e34:c.instructions+=42;goto B403e34;
case 0x403e38:c.instructions+=41;goto B403e38;
case 0x403e3c:c.instructions+=40;goto B403e3c;
case 0x403e3f:c.instructions+=39;goto B403e3f;
case 0x403e43:c.instructions+=38;goto B403e43;
case 0x403e47:c.instructions+=37;goto B403e47;
case 0x403e4b:c.instructions+=36;goto B403e4b;
case 0x403e4f:c.instructions+=35;goto B403e4f;
case 0x403e53:c.instructions+=34;goto B403e53;
case 0x403e57:c.instructions+=33;goto B403e57;
case 0x403e5b:c.instructions+=32;goto B403e5b;
case 0x403e5d:c.instructions+=31;goto B403e5d;
case 0x403e5f:c.instructions+=30;goto B403e5f;
case 0x403e63:c.instructions+=29;goto B403e63;
case 0x403e65:c.instructions+=28;goto B403e65;
case 0x403e67:c.instructions+=27;goto B403e67;
case 0x403e6b:c.instructions+=26;goto B403e6b;
case 0x403e6f:c.instructions+=25;goto B403e6f;
case 0x403e73:c.instructions+=24;goto B403e73;
case 0x403e77:c.instructions+=23;goto B403e77;
case 0x403e7b:c.instructions+=22;goto B403e7b;
case 0x403e7f:c.instructions+=21;goto B403e7f;
case 0x403e83:c.instructions+=20;goto B403e83;
case 0x403e87:c.instructions+=19;goto B403e87;
case 0x403e89:c.instructions+=18;goto B403e89;
case 0x403e8d:c.instructions+=17;goto B403e8d;
case 0x403e8f:c.instructions+=16;goto B403e8f;
case 0x403e91:c.instructions+=15;goto B403e91;
case 0x403e95:c.instructions+=14;goto B403e95;
case 0x403e97:c.instructions+=13;goto B403e97;
case 0x403e99:c.instructions+=12;goto B403e99;
case 0x403e9d:c.instructions+=11;goto B403e9d;
case 0x403ea1:c.instructions+=10;goto B403ea1;
case 0x403ea5:c.instructions+=9;goto B403ea5;
case 0x403ea7:c.instructions+=8;goto B403ea7;
case 0x403ea9:c.instructions+=7;goto B403ea9;
case 0x403eab:c.instructions+=6;goto B403eab;
case 0x403ead:c.instructions+=5;goto B403ead;
case 0x403eaf:c.instructions+=4;goto B403eaf;
case 0x403eb5:c.instructions+=3;goto B403eb5;
case 0x403eb7:c.instructions+=2;goto B403eb7;
case 0x403eba:c.instructions+=1;goto B403eba;
case 0x403ebc:goto L403ebc;
case 0x403ec0:c.instructions+=3;goto B403ec0;
case 0x403ec2:c.instructions+=2;goto B403ec2;
case 0x403ec4:c.instructions+=1;goto B403ec4;
case 0x403ec6:goto L403ec6;
case 0x403ecc:c.instructions+=1;goto B403ecc;
case 0x403ed3:goto L403ed3;
case 0x403ed5:c.instructions+=2;goto B403ed5;
case 0x403ed8:c.instructions+=1;goto B403ed8;
case 0x403ed9:goto L403ed9;
case 0x403edf:c.instructions+=9;goto B403edf;
case 0x403ee3:c.instructions+=8;goto B403ee3;
case 0x403ee5:c.instructions+=7;goto B403ee5;
case 0x403ee9:c.instructions+=6;goto B403ee9;
case 0x403eed:c.instructions+=5;goto B403eed;
case 0x403ef1:c.instructions+=4;goto B403ef1;
case 0x403ef7:c.instructions+=3;goto B403ef7;
case 0x403ef9:c.instructions+=2;goto B403ef9;
case 0x403efc:c.instructions+=1;goto B403efc;
case 0x403efe:goto L403efe;
case 0x403f02:c.instructions+=5;goto B403f02;
case 0x403f08:c.instructions+=4;goto B403f08;
case 0x403f0c:c.instructions+=3;goto B403f0c;
case 0x403f0e:c.instructions+=2;goto B403f0e;
case 0x403f11:c.instructions+=1;goto B403f11;
case 0x403f13:goto L403f13;
case 0x403f15:c.instructions+=1;goto B403f15;
case 0x403f1b:goto L403f1b;
case 0x403f1f:c.instructions+=5;goto B403f1f;
case 0x403f21:c.instructions+=4;goto B403f21;
case 0x403f23:c.instructions+=3;goto B403f23;
case 0x403f25:c.instructions+=2;goto B403f25;
case 0x403f28:c.instructions+=1;goto B403f28;
case 0x403f2a:goto L403f2a;
case 0x403f30:c.instructions+=3;goto B403f30;
case 0x403f32:c.instructions+=2;goto B403f32;
case 0x403f35:c.instructions+=1;goto B403f35;
case 0x403f37:goto L403f37;
case 0x403f39:c.instructions+=5;goto B403f39;
case 0x403f3f:c.instructions+=4;goto B403f3f;
case 0x403f41:c.instructions+=3;goto B403f41;
case 0x403f43:c.instructions+=2;goto B403f43;
case 0x403f46:c.instructions+=1;goto B403f46;
case 0x403f48:goto L403f48;
case 0x403f4a:c.instructions+=1;goto B403f4a;
case 0x403f50:goto L403f50;
case 0x403f52:c.instructions+=5;goto B403f52;
case 0x403f54:c.instructions+=4;goto B403f54;
case 0x403f56:c.instructions+=3;goto B403f56;
case 0x403f58:c.instructions+=2;goto B403f58;
case 0x403f5b:c.instructions+=1;goto B403f5b;
case 0x403f5d:goto L403f5d;
case 0x403f5f:c.instructions+=1;goto B403f5f;
case 0x403f61:goto L403f61;
case 0x403f67:c.instructions+=1;goto B403f67;
case 0x403f69:goto L403f69;
case 0x403f6f:c.instructions+=1;goto B403f6f;
case 0x403f71:goto L403f71;
case 0x403f73:goto L403f73;
case 0x403f75:goto L403f75;
case 0x403f79:c.instructions+=2;goto B403f79;
case 0x403f7b:c.instructions+=1;goto B403f7b;
case 0x403f7d:goto L403f7d;
case 0x403f81:c.instructions+=15;goto B403f81;
case 0x403f85:c.instructions+=14;goto B403f85;
case 0x403f89:c.instructions+=13;goto B403f89;
case 0x403f8d:c.instructions+=12;goto B403f8d;
case 0x403f8f:c.instructions+=11;goto B403f8f;
case 0x403f93:c.instructions+=10;goto B403f93;
case 0x403f97:c.instructions+=9;goto B403f97;
case 0x403f9b:c.instructions+=8;goto B403f9b;
case 0x403f9f:c.instructions+=7;goto B403f9f;
case 0x403fa3:c.instructions+=6;goto B403fa3;
case 0x403fa7:c.instructions+=5;goto B403fa7;
case 0x403fab:c.instructions+=4;goto B403fab;
case 0x403faf:c.instructions+=3;goto B403faf;
case 0x403fb1:c.instructions+=2;goto B403fb1;
case 0x403fb3:c.instructions+=1;goto B403fb3;
case 0x403fb6:goto L403fb6;
case 0x403fb9:c.instructions+=1;goto B403fb9;
case 0x403fc0:goto L403fc0;
case 0x403fc4:c.instructions+=25;goto B403fc4;
case 0x403fc6:c.instructions+=24;goto B403fc6;
case 0x403fc8:c.instructions+=23;goto B403fc8;
case 0x403fc9:c.instructions+=22;goto B403fc9;
case 0x403fcb:c.instructions+=21;goto B403fcb;
case 0x403fce:c.instructions+=20;goto B403fce;
case 0x403fcf:c.instructions+=19;goto B403fcf;
case 0x403fd2:c.instructions+=18;goto B403fd2;
case 0x403fd5:c.instructions+=17;goto B403fd5;
case 0x403fd6:c.instructions+=16;goto B403fd6;
case 0x403fd8:c.instructions+=15;goto B403fd8;
case 0x403fda:c.instructions+=14;goto B403fda;
case 0x403fdc:c.instructions+=13;goto B403fdc;
case 0x403fe0:c.instructions+=12;goto B403fe0;
case 0x403fe2:c.instructions+=11;goto B403fe2;
case 0x403fe7:c.instructions+=10;goto B403fe7;
case 0x403fea:c.instructions+=9;goto B403fea;
case 0x403fed:c.instructions+=8;goto B403fed;
case 0x403fef:c.instructions+=7;goto B403fef;
case 0x403ff2:c.instructions+=6;goto B403ff2;
case 0x403ff3:c.instructions+=5;goto B403ff3;
case 0x403ff6:c.instructions+=4;goto B403ff6;
case 0x403ff9:c.instructions+=3;goto B403ff9;
case 0x403ffb:c.instructions+=2;goto B403ffb;
case 0x403ffe:c.instructions+=1;goto B403ffe;
default:missing_instruction(c.pc);}
B403003:L403003:{c.instructions+=4;NFSU2_TR(0x403003);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403007:{NFSU2_TR(0x403007);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403009:{NFSU2_TR(0x403009);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40300c:{NFSU2_TR(0x40300c);
if(r1(R+514)){{goto L403014;}}
}
B40300e:L40300e:{c.instructions+=2;NFSU2_TR(0x40300e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403012:{NFSU2_TR(0x403012);
{goto L403018;}
}
B403014:L403014:{c.instructions+=1;NFSU2_TR(0x403014);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403018:L403018:{c.instructions+=5;NFSU2_TR(0x403018);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40301c:{NFSU2_TR(0x40301c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403020:{NFSU2_TR(0x403020);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403022:{NFSU2_TR(0x403022);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B403025:{NFSU2_TR(0x403025);
if(r1(R+514)){{goto L403031;}}
}
B403027:L403027:{c.instructions+=3;NFSU2_TR(0x403027);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40302b:{NFSU2_TR(0x40302b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40302f:{NFSU2_TR(0x40302f);
{goto L403039;}
}
B403031:L403031:{c.instructions+=2;NFSU2_TR(0x403031);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403035:{NFSU2_TR(0x403035);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403039:L403039:{c.instructions+=5;NFSU2_TR(0x403039);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40303d:{NFSU2_TR(0x40303d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403041:{NFSU2_TR(0x403041);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403043:{NFSU2_TR(0x403043);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B403046:{NFSU2_TR(0x403046);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4030d3;}}
}
B40304c:L40304c:{c.instructions+=5;NFSU2_TR(0x40304c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403050:{NFSU2_TR(0x403050);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403054:{NFSU2_TR(0x403054);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403056:{NFSU2_TR(0x403056);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B403059:{NFSU2_TR(0x403059);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4030d3;}}
}
B40305b:L40305b:{c.instructions+=5;NFSU2_TR(0x40305b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40305f:{NFSU2_TR(0x40305f);
{u32 ea_=u32(u32(7878260u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403065:{NFSU2_TR(0x403065);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403067:{NFSU2_TR(0x403067);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40306a:{NFSU2_TR(0x40306a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40307d;}}
}
B40306c:L40306c:{c.instructions+=5;NFSU2_TR(0x40306c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403070:{NFSU2_TR(0x403070);
{u32 ea_=u32(u32(7878260u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403076:{NFSU2_TR(0x403076);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403078:{NFSU2_TR(0x403078);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40307b:{NFSU2_TR(0x40307b);
if(r1(R+514)){{goto L403090;}}
}
B40307d:L40307d:{c.instructions+=5;NFSU2_TR(0x40307d);
{u32 ea_=u32(r4(R+20)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403083:{NFSU2_TR(0x403083);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403089:{NFSU2_TR(0x403089);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40308b:{NFSU2_TR(0x40308b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40308e:{NFSU2_TR(0x40308e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4030d3;}}
}
B403090:L403090:{c.instructions+=4;NFSU2_TR(0x403090);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B403096:{NFSU2_TR(0x403096);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403098:{NFSU2_TR(0x403098);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40309b:{NFSU2_TR(0x40309b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4030db;}}
}
B40309d:L40309d:{c.instructions+=7;NFSU2_TR(0x40309d);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4030a3:{NFSU2_TR(0x4030a3);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B4030a5:{NFSU2_TR(0x4030a5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4030a7:{NFSU2_TR(0x4030a7);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4030ad:{NFSU2_TR(0x4030ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4030af:{NFSU2_TR(0x4030af);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4030b2:{NFSU2_TR(0x4030b2);
if(r1(R+514)){{goto L4030c3;}}
}
B4030b4:L4030b4:{c.instructions+=5;NFSU2_TR(0x4030b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4030b8:{NFSU2_TR(0x4030b8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4030bc:{NFSU2_TR(0x4030bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4030be:{NFSU2_TR(0x4030be);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4030c1:{NFSU2_TR(0x4030c1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4030db;}}
}
B4030c3:L4030c3:{c.instructions+=5;NFSU2_TR(0x4030c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4030c5:{NFSU2_TR(0x4030c5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4030c6:{NFSU2_TR(0x4030c6);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x30ull))));
}
B4030c9:{NFSU2_TR(0x4030c9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4030cb:{NFSU2_TR(0x4030cb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x402f40u,402);}
}
B4030d1:L4030d1:{c.instructions+=1;NFSU2_TR(0x4030d1);
{goto L4030f6;}
}
B4030d3:L4030d3:{c.instructions+=2;NFSU2_TR(0x4030d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4030d5:{NFSU2_TR(0x4030d5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4030db:L4030db:{c.instructions+=6;NFSU2_TR(0x4030db);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4030df:{NFSU2_TR(0x4030df);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4030e3:{NFSU2_TR(0x4030e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4030ea:{NFSU2_TR(0x4030ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4030ee:{NFSU2_TR(0x4030ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4030f2:{NFSU2_TR(0x4030f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4030f6:L4030f6:{c.instructions+=13;NFSU2_TR(0x4030f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4030f7:{NFSU2_TR(0x4030f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4030fb:{NFSU2_TR(0x4030fb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4030ff:{NFSU2_TR(0x4030ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403103:{NFSU2_TR(0x403103);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403107:{NFSU2_TR(0x403107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B403108:{NFSU2_TR(0x403108);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B40310a:{NFSU2_TR(0x40310a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40310c:{NFSU2_TR(0x40310c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403110:{NFSU2_TR(0x403110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403111:{NFSU2_TR(0x403111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B403112:{NFSU2_TR(0x403112);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B403115:{NFSU2_TR(0x403115);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403120:L403120:{c.instructions+=8;NFSU2_TR(0x403120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403121:{NFSU2_TR(0x403121);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403122:{NFSU2_TR(0x403122);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B403126:{NFSU2_TR(0x403126);
__builtin_memmove((R+24),(R+4),4);
}
B403128:{NFSU2_TR(0x403128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40312a:{NFSU2_TR(0x40312a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40312b:{NFSU2_TR(0x40312b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B403132:{NFSU2_TR(0x403132);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403135ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B403135:L403135:{c.instructions+=2;NFSU2_TR(0x403135);
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
B403137:{NFSU2_TR(0x403137);
if(r1(R+518)){{goto L403140;}}
}
B403139:L403139:{c.instructions+=1;NFSU2_TR(0x403139);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B403140:L403140:{c.instructions+=4;NFSU2_TR(0x403140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B403142:{NFSU2_TR(0x403142);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403143:{NFSU2_TR(0x403143);
__builtin_memmove((R+4),(R+24),4);
}
B403145:{NFSU2_TR(0x403145);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403148ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B403148:L403148:{c.instructions+=2;NFSU2_TR(0x403148);
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
B40314a:{NFSU2_TR(0x40314a);
if(r1(R+518)){{goto L403153;}}
}
B40314c:L40314c:{c.instructions+=1;NFSU2_TR(0x40314c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B403153:L403153:{c.instructions+=4;NFSU2_TR(0x403153);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B403155:{NFSU2_TR(0x403155);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403156:{NFSU2_TR(0x403156);
__builtin_memmove((R+4),(R+24),4);
}
B403158:{NFSU2_TR(0x403158);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40315bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40315b:L40315b:{c.instructions+=2;NFSU2_TR(0x40315b);
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
B40315d:{NFSU2_TR(0x40315d);
if(r1(R+518)){{goto L403166;}}
}
B40315f:L40315f:{c.instructions+=1;NFSU2_TR(0x40315f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B403166:L403166:{c.instructions+=3;NFSU2_TR(0x403166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B403167:{NFSU2_TR(0x403167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403168:{NFSU2_TR(0x403168);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403170:L403170:{c.instructions+=2;NFSU2_TR(0x403170);
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
B403172:{NFSU2_TR(0x403172);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403180:L403180:{c.instructions+=10;NFSU2_TR(0x403180);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403181:{NFSU2_TR(0x403181);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B403186:{NFSU2_TR(0x403186);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B403189:{NFSU2_TR(0x403189);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B40318d:{NFSU2_TR(0x40318d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B403191:{NFSU2_TR(0x403191);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403197:{NFSU2_TR(0x403197);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40319a:{NFSU2_TR(0x40319a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40319c:{NFSU2_TR(0x40319c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40319f:{NFSU2_TR(0x40319f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4031b1;}}
}
B4031a1:L4031a1:{c.instructions+=3;NFSU2_TR(0x4031a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4031a4:{NFSU2_TR(0x4031a4);
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
B4031a6:{NFSU2_TR(0x4031a6);
if(r1(R+518)){{goto L4031b1;}}
}
B4031a8:L4031a8:{c.instructions+=3;NFSU2_TR(0x4031a8);
w4(R+0,u32(0x1ull));
}
B4031ad:{NFSU2_TR(0x4031ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4031ae:{NFSU2_TR(0x4031ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4031b1:L4031b1:{c.instructions+=3;NFSU2_TR(0x4031b1);
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
B4031b3:{NFSU2_TR(0x4031b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4031b4:{NFSU2_TR(0x4031b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4031c0:L4031c0:{c.instructions+=1;NFSU2_TR(0x4031c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4031d0:L4031d0:{c.instructions+=11;NFSU2_TR(0x4031d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4031d1:{NFSU2_TR(0x4031d1);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4031d6:{NFSU2_TR(0x4031d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4031d9:{NFSU2_TR(0x4031d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4031dd:{NFSU2_TR(0x4031dd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4031e1:{NFSU2_TR(0x4031e1);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B4031e3:{NFSU2_TR(0x4031e3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4031e9:{NFSU2_TR(0x4031e9);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4031ec:{NFSU2_TR(0x4031ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4031ee:{NFSU2_TR(0x4031ee);
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
B4031f1:{NFSU2_TR(0x4031f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4031fc;}}
}
B4031f3:L4031f3:{c.instructions+=4;NFSU2_TR(0x4031f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4031f6:{NFSU2_TR(0x4031f6);
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
B4031f8:{NFSU2_TR(0x4031f8);
w1(R+0,u8(0x1ull));
}
B4031fa:{NFSU2_TR(0x4031fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4031fe;}}
}
B4031fc:L4031fc:{c.instructions+=1;NFSU2_TR(0x4031fc);
__builtin_memmove((R+0),(R+8),1);
}
B4031fe:L4031fe:{c.instructions+=2;NFSU2_TR(0x4031fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4031ff:{NFSU2_TR(0x4031ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403210:L403210:{c.instructions+=2;NFSU2_TR(0x403210);
w1(R+0,u8(0x1ull));
}
B403212:{NFSU2_TR(0x403212);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403220:L403220:{c.instructions+=10;NFSU2_TR(0x403220);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403221:{NFSU2_TR(0x403221);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B403226:{NFSU2_TR(0x403226);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B403229:{NFSU2_TR(0x403229);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B40322d:{NFSU2_TR(0x40322d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B403231:{NFSU2_TR(0x403231);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403237:{NFSU2_TR(0x403237);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40323a:{NFSU2_TR(0x40323a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40323c:{NFSU2_TR(0x40323c);
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
B40323f:{NFSU2_TR(0x40323f);
if(r1(R+514)){{goto L403247;}}
}
B403241:L403241:{c.instructions+=3;NFSU2_TR(0x403241);
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
B403243:{NFSU2_TR(0x403243);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B403244:{NFSU2_TR(0x403244);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403247:L403247:{c.instructions+=3;NFSU2_TR(0x403247);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40324a:{NFSU2_TR(0x40324a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40324b:{NFSU2_TR(0x40324b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403250:L403250:{c.instructions+=10;NFSU2_TR(0x403250);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403251:{NFSU2_TR(0x403251);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B403256:{NFSU2_TR(0x403256);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B403259:{NFSU2_TR(0x403259);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B40325d:{NFSU2_TR(0x40325d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B403261:{NFSU2_TR(0x403261);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403267:{NFSU2_TR(0x403267);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40326a:{NFSU2_TR(0x40326a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40326c:{NFSU2_TR(0x40326c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40326f:{NFSU2_TR(0x40326f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40327e;}}
}
B403271:L403271:{c.instructions+=3;NFSU2_TR(0x403271);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B403274:{NFSU2_TR(0x403274);
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
B403276:{NFSU2_TR(0x403276);
if(r1(R+518)){{goto L40327e;}}
}
B403278:L403278:{c.instructions+=3;NFSU2_TR(0x403278);
w1(R+0,u8(0x1ull));
}
B40327a:{NFSU2_TR(0x40327a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40327b:{NFSU2_TR(0x40327b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40327e:L40327e:{c.instructions+=3;NFSU2_TR(0x40327e);
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
B403280:{NFSU2_TR(0x403280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B403281:{NFSU2_TR(0x403281);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403290:L403290:{c.instructions+=5;NFSU2_TR(0x403290);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403294:{NFSU2_TR(0x403294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B403296:{NFSU2_TR(0x403296);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B40329a:{NFSU2_TR(0x40329a);
__builtin_memmove((R+0),(R+518),1);
}
B40329d:{NFSU2_TR(0x40329d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4032a0:L4032a0:{c.instructions+=11;NFSU2_TR(0x4032a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4032a1:{NFSU2_TR(0x4032a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4032a5:{NFSU2_TR(0x4032a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4032ac:{NFSU2_TR(0x4032ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4032ad:{NFSU2_TR(0x4032ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4032b0:{NFSU2_TR(0x4032b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4032b3:{NFSU2_TR(0x4032b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4032b4:{NFSU2_TR(0x4032b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4032b7:{NFSU2_TR(0x4032b7);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4032bc:{NFSU2_TR(0x4032bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4032be:{NFSU2_TR(0x4032be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4032df;}}
}
B4032c0:L4032c0:{c.instructions+=3;NFSU2_TR(0x4032c0);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4032c5:{NFSU2_TR(0x4032c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4032c7:{NFSU2_TR(0x4032c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4032df;}}
}
B4032c9:L4032c9:{c.instructions+=3;NFSU2_TR(0x4032c9);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B4032ce:{NFSU2_TR(0x4032ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4032d0:{NFSU2_TR(0x4032d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4032df;}}
}
B4032d2:L4032d2:{c.instructions+=3;NFSU2_TR(0x4032d2);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B4032d7:{NFSU2_TR(0x4032d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4032d9:{NFSU2_TR(0x4032d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4032df;}}
}
B4032db:L4032db:{c.instructions+=2;NFSU2_TR(0x4032db);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B4032dd:{NFSU2_TR(0x4032dd);
{goto L4032e1;}
}
B4032df:L4032df:{c.instructions+=1;NFSU2_TR(0x4032df);
w1(R+4,u8(0x1ull));
}
B4032e1:L4032e1:{c.instructions+=10;NFSU2_TR(0x4032e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4032e7:{NFSU2_TR(0x4032e7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4032e9:{NFSU2_TR(0x4032e9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4032ea:{NFSU2_TR(0x4032ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4032ec:{NFSU2_TR(0x4032ec);
__builtin_memmove((R+8),(R+518),1);
}
B4032ef:{NFSU2_TR(0x4032ef);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4032f3:{NFSU2_TR(0x4032f3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B4032f5:{NFSU2_TR(0x4032f5);
__builtin_memmove((R+4),(R+8),4);
}
B4032f7:{NFSU2_TR(0x4032f7);
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
B4032f9:{NFSU2_TR(0x4032f9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L403307;}}
}
B4032fb:L4032fb:{c.instructions+=4;NFSU2_TR(0x4032fb);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B403302:{NFSU2_TR(0x403302);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B403303:{NFSU2_TR(0x403303);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403304:{NFSU2_TR(0x403304);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403307:L403307:{c.instructions+=4;NFSU2_TR(0x403307);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B40330e:{NFSU2_TR(0x40330e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40330f:{NFSU2_TR(0x40330f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403310:{NFSU2_TR(0x403310);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403320:L403320:{c.instructions+=7;NFSU2_TR(0x403320);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B403326:{NFSU2_TR(0x403326);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B40332d:{NFSU2_TR(0x40332d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40332e:{NFSU2_TR(0x40332e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B403332:{NFSU2_TR(0x403332);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B403334:{NFSU2_TR(0x403334);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403335:{NFSU2_TR(0x403335);
if(r1(R+518)){{goto L403347;}}
}
B403337:L403337:{c.instructions+=3;NFSU2_TR(0x403337);
__builtin_memmove((R+4),gp(0x890118),4);
}
B40333d:{NFSU2_TR(0x40333d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40333e:{NFSU2_TR(0x40333e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403343ull));
TAIL_STATIC(0x5eeff0u,5ee);
}
B403343:L403343:{c.instructions+=2;NFSU2_TR(0x403343);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B403345:{NFSU2_TR(0x403345);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40337a;}}
}
B403347:L403347:{c.instructions+=6;NFSU2_TR(0x403347);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40334b:{NFSU2_TR(0x40334b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40334d:{NFSU2_TR(0x40334d);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403352:{NFSU2_TR(0x403352);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403353:{NFSU2_TR(0x403353);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B403359:{NFSU2_TR(0x403359);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40335eull));
TAIL_STATIC(0x402ae0u,402);
}
B40335e:L40335e:{c.instructions+=3;NFSU2_TR(0x40335e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B403361:{NFSU2_TR(0x403361);
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
B403363:{NFSU2_TR(0x403363);
if(r1(R+518)){{goto L40337a;}}
}
B403365:L403365:{c.instructions+=7;NFSU2_TR(0x403365);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B403369:{NFSU2_TR(0x403369);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B403370:{NFSU2_TR(0x403370);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B403372:{NFSU2_TR(0x403372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B403373:{NFSU2_TR(0x403373);
w4(R+0,u32(0x190ull));
}
B403378:{NFSU2_TR(0x403378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403379:{NFSU2_TR(0x403379);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40337a:L40337a:{c.instructions+=4;NFSU2_TR(0x40337a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40337b:{NFSU2_TR(0x40337b);
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
B40337e:{NFSU2_TR(0x40337e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40337f:{NFSU2_TR(0x40337f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403380:L403380:{c.instructions+=10;NFSU2_TR(0x403380);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403381:{NFSU2_TR(0x403381);
__builtin_memmove((R+20),(R+16),4);
}
B403383:{NFSU2_TR(0x403383);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B403386:{NFSU2_TR(0x403386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B403389:{NFSU2_TR(0x403389);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40338c:{NFSU2_TR(0x40338c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
}
B403391:{NFSU2_TR(0x403391);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403392:{NFSU2_TR(0x403392);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B403396:{NFSU2_TR(0x403396);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403397:{NFSU2_TR(0x403397);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40339cull));
TAIL_STATIC(0x43cf10u,43c);
}
B40339c:L40339c:{c.instructions+=9;NFSU2_TR(0x40339c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4033a0:{NFSU2_TR(0x4033a0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4033a4:{NFSU2_TR(0x4033a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4033a7:{NFSU2_TR(0x4033a7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4033ad:{NFSU2_TR(0x4033ad);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4033b1:{NFSU2_TR(0x4033b1);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4033b4:{NFSU2_TR(0x4033b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4033b6:{NFSU2_TR(0x4033b6);
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
B4033b9:{NFSU2_TR(0x4033b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4033c1;}}
}
B4033bb:L4033bb:{c.instructions+=4;NFSU2_TR(0x4033bb);
w1(R+0,u8(0x1ull));
}
B4033bd:{NFSU2_TR(0x4033bd);
__builtin_memmove((R+16),(R+20),4);
}
B4033bf:{NFSU2_TR(0x4033bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4033c0:{NFSU2_TR(0x4033c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4033c1:L4033c1:{c.instructions+=4;NFSU2_TR(0x4033c1);
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
B4033c3:{NFSU2_TR(0x4033c3);
__builtin_memmove((R+16),(R+20),4);
}
B4033c5:{NFSU2_TR(0x4033c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4033c6:{NFSU2_TR(0x4033c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4033d0:L4033d0:{c.instructions+=5;NFSU2_TR(0x4033d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4033d6:{NFSU2_TR(0x4033d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4033d7:{NFSU2_TR(0x4033d7);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4033d9:{NFSU2_TR(0x4033d9);
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
B4033db:{NFSU2_TR(0x4033db);
if(r1(R+518)){{goto L4033e3;}}
}
B4033dd:L4033dd:{c.instructions+=3;NFSU2_TR(0x4033dd);
w1(R+0,u8(0x1ull));
}
B4033df:{NFSU2_TR(0x4033df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4033e0:{NFSU2_TR(0x4033e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4033e3:L4033e3:{c.instructions+=4;NFSU2_TR(0x4033e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4033e7:{NFSU2_TR(0x4033e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4033e9:{NFSU2_TR(0x4033e9);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4033f0:{NFSU2_TR(0x4033f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L403408;}}
}
B4033f2:L4033f2:{c.instructions+=4;NFSU2_TR(0x4033f2);
__builtin_memmove((R+4),gp(0x78371c),4);
}
B4033f8:{NFSU2_TR(0x4033f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4033f9:{NFSU2_TR(0x4033f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4033fa:{NFSU2_TR(0x4033fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4033ffull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x403380u);}goto L403380;}
}
B4033ff:L4033ff:{c.instructions+=4;NFSU2_TR(0x4033ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B403402:{NFSU2_TR(0x403402);
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
B403404:{NFSU2_TR(0x403404);
w1(R+0,u8(0x1ull));
}
B403406:{NFSU2_TR(0x403406);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40340a;}}
}
B403408:L403408:{c.instructions+=1;NFSU2_TR(0x403408);
__builtin_memmove((R+0),(R+12),1);
}
B40340a:L40340a:{c.instructions+=2;NFSU2_TR(0x40340a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40340b:{NFSU2_TR(0x40340b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403410:L403410:{c.instructions+=9;NFSU2_TR(0x403410);
__builtin_memmove((R+0),gp(0x78373c),4);
}
B403415:{NFSU2_TR(0x403415);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403419:{NFSU2_TR(0x403419);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40341a:{NFSU2_TR(0x40341a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40341e:{NFSU2_TR(0x40341e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403420:{NFSU2_TR(0x403420);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403421:{NFSU2_TR(0x403421);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403422:{NFSU2_TR(0x403422);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B403428:{NFSU2_TR(0x403428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40342dull));
TAIL_STATIC(0x402ae0u,402);
}
B40342d:L40342d:{c.instructions+=3;NFSU2_TR(0x40342d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B403430:{NFSU2_TR(0x403430);
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
B403432:{NFSU2_TR(0x403432);
if(r1(R+518)){{goto L403448;}}
}
B403434:L403434:{c.instructions+=6;NFSU2_TR(0x403434);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B403438:{NFSU2_TR(0x403438);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40343f:{NFSU2_TR(0x40343f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B403441:{NFSU2_TR(0x403441);
w4(R+0,u32(0x190ull));
}
B403446:{NFSU2_TR(0x403446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403447:{NFSU2_TR(0x403447);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403448:L403448:{c.instructions+=3;NFSU2_TR(0x403448);
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
B40344b:{NFSU2_TR(0x40344b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40344c:{NFSU2_TR(0x40344c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403450:L403450:{c.instructions+=11;NFSU2_TR(0x403450);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403454:{NFSU2_TR(0x403454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B403456:{NFSU2_TR(0x403456);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403457:{NFSU2_TR(0x403457);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403458:{NFSU2_TR(0x403458);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403459:{NFSU2_TR(0x403459);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40345c:{NFSU2_TR(0x40345c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40345f:{NFSU2_TR(0x40345f);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B403461:{NFSU2_TR(0x403461);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B403463:{NFSU2_TR(0x403463);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B403465:{NFSU2_TR(0x403465);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L403496;}}
}
B403467:L403467:{c.instructions+=2;NFSU2_TR(0x403467);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B403469:{NFSU2_TR(0x403469);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40348d;}}
}
B40346b:L40346b:{c.instructions+=3;NFSU2_TR(0x40346b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40346c:{NFSU2_TR(0x40346c);
__builtin_memmove((R+4),(R+28),4);
}
B40346e:{NFSU2_TR(0x40346e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403473ull));
TAIL_STATIC(0x5a0820u,5a0);
}
B403473:L403473:{c.instructions+=2;NFSU2_TR(0x403473);
__builtin_memmove((R+4),(R+0),4);
}
B403475:{NFSU2_TR(0x403475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40347aull));
TAIL_STATIC(0x5a0160u,5a0);
}
B40347a:L40347a:{c.instructions+=2;NFSU2_TR(0x40347a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40347c:{NFSU2_TR(0x40347c);
if(r1(R+518)){{goto L403480;}}
}
B40347e:L40347e:{c.instructions+=1;NFSU2_TR(0x40347e);
w1(R+12,u8(0x1ull));
}
B403480:L403480:{c.instructions+=4;NFSU2_TR(0x403480);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B403484:{NFSU2_TR(0x403484);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B403485:{NFSU2_TR(0x403485);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B403487:{NFSU2_TR(0x403487);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x403467u);}goto L403467;}}
}
B403489:L403489:{c.instructions+=2;NFSU2_TR(0x403489);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40348b:{NFSU2_TR(0x40348b);
if(r1(R+518)){{goto L403496;}}
}
B40348d:L40348d:{c.instructions+=5;NFSU2_TR(0x40348d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40348e:{NFSU2_TR(0x40348e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40348f:{NFSU2_TR(0x40348f);
w4(R+0,u32(0x12cull));
}
B403494:{NFSU2_TR(0x403494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B403495:{NFSU2_TR(0x403495);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403496:L403496:{c.instructions+=5;NFSU2_TR(0x403496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B403497:{NFSU2_TR(0x403497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403498:{NFSU2_TR(0x403498);
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
B40349b:{NFSU2_TR(0x40349b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40349c:{NFSU2_TR(0x40349c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4034a0:L4034a0:{c.instructions+=11;NFSU2_TR(0x4034a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4034a4:{NFSU2_TR(0x4034a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4034a6:{NFSU2_TR(0x4034a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4034a7:{NFSU2_TR(0x4034a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4034a8:{NFSU2_TR(0x4034a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4034a9:{NFSU2_TR(0x4034a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4034ac:{NFSU2_TR(0x4034ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4034af:{NFSU2_TR(0x4034af);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4034b1:{NFSU2_TR(0x4034b1);
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
B4034b3:{NFSU2_TR(0x4034b3);
w1(R+12,u8(0x1ull));
}
B4034b5:{NFSU2_TR(0x4034b5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4034d9;}}
}
B4034b7:L4034b7:{c.instructions+=2;NFSU2_TR(0x4034b7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4034b9:{NFSU2_TR(0x4034b9);
if(r1(R+518)){{goto L4034d9;}}
}
B4034bb:L4034bb:{c.instructions+=3;NFSU2_TR(0x4034bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4034bc:{NFSU2_TR(0x4034bc);
__builtin_memmove((R+4),(R+28),4);
}
B4034be:{NFSU2_TR(0x4034be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4034c3ull));
TAIL_STATIC(0x5a0820u,5a0);
}
B4034c3:L4034c3:{c.instructions+=2;NFSU2_TR(0x4034c3);
__builtin_memmove((R+4),(R+0),4);
}
B4034c5:{NFSU2_TR(0x4034c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4034caull));
TAIL_STATIC(0x5a0160u,5a0);
}
B4034ca:L4034ca:{c.instructions+=2;NFSU2_TR(0x4034ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4034cc:{NFSU2_TR(0x4034cc);
if(r1(R+518)){{goto L4034d0;}}
}
B4034ce:L4034ce:{c.instructions+=1;NFSU2_TR(0x4034ce);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4034d0:L4034d0:{c.instructions+=4;NFSU2_TR(0x4034d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4034d4:{NFSU2_TR(0x4034d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4034d5:{NFSU2_TR(0x4034d5);
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
B4034d7:{NFSU2_TR(0x4034d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4034b7u);}goto L4034b7;}}
}
B4034d9:L4034d9:{c.instructions+=5;NFSU2_TR(0x4034d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4034da:{NFSU2_TR(0x4034da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4034db:{NFSU2_TR(0x4034db);
__builtin_memmove((R+0),(R+12),1);
}
B4034dd:{NFSU2_TR(0x4034dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4034de:{NFSU2_TR(0x4034de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4034f0:L4034f0:{c.instructions+=6;NFSU2_TR(0x4034f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4034f1:{NFSU2_TR(0x4034f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4034f5:{NFSU2_TR(0x4034f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4034f7:{NFSU2_TR(0x4034f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4034f9:{NFSU2_TR(0x4034f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4034fb:{NFSU2_TR(0x4034fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403500ull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B403500:L403500:{c.instructions+=4;NFSU2_TR(0x403500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B403502:{NFSU2_TR(0x403502);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403504:{NFSU2_TR(0x403504);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403506:{NFSU2_TR(0x403506);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40350bull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B40350b:L40350b:{c.instructions+=2;NFSU2_TR(0x40350b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40350c:{NFSU2_TR(0x40350c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403510:L403510:{c.instructions+=13;NFSU2_TR(0x403510);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403511:{NFSU2_TR(0x403511);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403515:{NFSU2_TR(0x403515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B403517:{NFSU2_TR(0x403517);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40351d:{NFSU2_TR(0x40351d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403520:{NFSU2_TR(0x403520);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x784ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403526:{NFSU2_TR(0x403526);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403527:{NFSU2_TR(0x403527);
__builtin_memmove((R+8),(R+0),4);
}
B403529:{NFSU2_TR(0x403529);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40352d:{NFSU2_TR(0x40352d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40352e:{NFSU2_TR(0x40352e);
w4(R+4,u32(0x88f298ull));
}
B403533:{NFSU2_TR(0x403533);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403537:{NFSU2_TR(0x403537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40353cull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B40353c:L40353c:{c.instructions+=4;NFSU2_TR(0x40353c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403542:{NFSU2_TR(0x403542);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403544:{NFSU2_TR(0x403544);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B403547:{NFSU2_TR(0x403547);
if(r1(R+514)){{goto L40354f;}}
}
B403549:L403549:{c.instructions+=3;NFSU2_TR(0x403549);
w1(R+0,u8(0x1ull));
}
B40354b:{NFSU2_TR(0x40354b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40354c:{NFSU2_TR(0x40354c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40354f:L40354f:{c.instructions+=3;NFSU2_TR(0x40354f);
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
B403551:{NFSU2_TR(0x403551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B403552:{NFSU2_TR(0x403552);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403560:L403560:{c.instructions+=5;NFSU2_TR(0x403560);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403564:{NFSU2_TR(0x403564);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B403566:{NFSU2_TR(0x403566);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403568:{NFSU2_TR(0x403568);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40356a:{NFSU2_TR(0x40356a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40356full));
TAIL_STATIC(0x5ecf20u,5ec);
}
B40356f:L40356f:{c.instructions+=1;NFSU2_TR(0x40356f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403580:L403580:{c.instructions+=5;NFSU2_TR(0x403580);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403584:{NFSU2_TR(0x403584);
__builtin_memmove((R+4),gp(0x8a1d08),4);
}
B40358a:{NFSU2_TR(0x40358a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40358b:{NFSU2_TR(0x40358b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40358c:{NFSU2_TR(0x40358c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403591ull));
TAIL_STATIC(0x43f920u,43f);
}
B403591:L403591:{c.instructions+=2;NFSU2_TR(0x403591);
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
B403594:{NFSU2_TR(0x403594);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4035a0:L4035a0:{c.instructions+=3;NFSU2_TR(0x4035a0);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4035a5:{NFSU2_TR(0x4035a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4035a7:{NFSU2_TR(0x4035a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4035be;}}
}
B4035a9:L4035a9:{c.instructions+=3;NFSU2_TR(0x4035a9);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4035ae:{NFSU2_TR(0x4035ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4035b0:{NFSU2_TR(0x4035b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4035be;}}
}
B4035b2:L4035b2:{c.instructions+=6;NFSU2_TR(0x4035b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4035b4:{NFSU2_TR(0x4035b4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4035b6:{NFSU2_TR(0x4035b6);
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
B4035b8:{NFSU2_TR(0x4035b8);
__builtin_memmove((R+4),(R+518),1);
}
B4035bb:{NFSU2_TR(0x4035bb);
__builtin_memmove((R+0),(R+4),1);
}
B4035bd:{NFSU2_TR(0x4035bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4035be:L4035be:{c.instructions+=6;NFSU2_TR(0x4035be);
w4(R+0,u32(0x1ull));
}
B4035c3:{NFSU2_TR(0x4035c3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4035c5:{NFSU2_TR(0x4035c5);
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
B4035c7:{NFSU2_TR(0x4035c7);
__builtin_memmove((R+4),(R+518),1);
}
B4035ca:{NFSU2_TR(0x4035ca);
__builtin_memmove((R+0),(R+4),1);
}
B4035cc:{NFSU2_TR(0x4035cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4035d0:L4035d0:{c.instructions+=8;NFSU2_TR(0x4035d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4035d1:{NFSU2_TR(0x4035d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4035d2:{NFSU2_TR(0x4035d2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4035d4:{NFSU2_TR(0x4035d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4035d5:{NFSU2_TR(0x4035d5);
u8 U[4];
w4(U+0,u32(0x7843d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4035da:{NFSU2_TR(0x4035da);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4035dc:{NFSU2_TR(0x4035dc);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4035de:{NFSU2_TR(0x4035de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4035e3ull));
TAIL_STATIC(0x440df0u,440);
}
B4035e3:L4035e3:{c.instructions+=6;NFSU2_TR(0x4035e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4035e4:{NFSU2_TR(0x4035e4);
u8 U[4];
w4(U+0,u32(0x7843c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4035e9:{NFSU2_TR(0x4035e9);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4035eb:{NFSU2_TR(0x4035eb);
u8 U[4];
w4(U+0,u32(0x230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4035f0:{NFSU2_TR(0x4035f0);
__builtin_memmove(gp(0x81cb70),(R+0),4);
}
B4035f5:{NFSU2_TR(0x4035f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4035faull));
TAIL_STATIC(0x440df0u,440);
}
B4035fa:L4035fa:{c.instructions+=6;NFSU2_TR(0x4035fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4035fb:{NFSU2_TR(0x4035fb);
u8 U[4];
w4(U+0,u32(0x7843b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403600:{NFSU2_TR(0x403600);
u8 U[4];
w4(U+0,u32(0x258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403605:{NFSU2_TR(0x403605);
u8 U[4];
w4(U+0,u32(0x78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403607:{NFSU2_TR(0x403607);
__builtin_memmove(gp(0x81cb6c),(R+0),4);
}
B40360c:{NFSU2_TR(0x40360c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403611ull));
TAIL_STATIC(0x440df0u,440);
}
B403611:L403611:{c.instructions+=6;NFSU2_TR(0x403611);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403612:{NFSU2_TR(0x403612);
u8 U[4];
w4(U+0,u32(0x784398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403617:{NFSU2_TR(0x403617);
u8 U[4];
w4(U+0,u32(0xa1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40361c:{NFSU2_TR(0x40361c);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403621:{NFSU2_TR(0x403621);
__builtin_memmove(gp(0x81cbb4),(R+0),4);
}
B403626:{NFSU2_TR(0x403626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40362bull));
TAIL_STATIC(0x440df0u,440);
}
B40362b:L40362b:{c.instructions+=7;NFSU2_TR(0x40362b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B40362e:{NFSU2_TR(0x40362e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40362f:{NFSU2_TR(0x40362f);
u8 U[4];
w4(U+0,u32(0x78437cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403634:{NFSU2_TR(0x403634);
u8 U[4];
w4(U+0,u32(0x500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403639:{NFSU2_TR(0x403639);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40363b:{NFSU2_TR(0x40363b);
__builtin_memmove(gp(0x81cbb8),(R+0),4);
}
B403640:{NFSU2_TR(0x403640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403645ull));
TAIL_STATIC(0x440df0u,440);
}
B403645:L403645:{c.instructions+=5;NFSU2_TR(0x403645);
__builtin_memmove(gp(0x81cbbc),(R+0),4);
}
B40364a:{NFSU2_TR(0x40364a);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B40364f:{NFSU2_TR(0x40364f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B403652:{NFSU2_TR(0x403652);
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
B403654:{NFSU2_TR(0x403654);
if(r1(R+518)){{goto L4036da;}}
}
B40365a:L40365a:{c.instructions+=4;NFSU2_TR(0x40365a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40365b:{NFSU2_TR(0x40365b);
u8 U[4];
w4(U+0,u32(0x784368ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403660:{NFSU2_TR(0x403660);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B403662:{NFSU2_TR(0x403662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403667ull));
TAIL_STATIC(0x57cac0u,57c);
}
B403667:L403667:{c.instructions+=3;NFSU2_TR(0x403667);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40366a:{NFSU2_TR(0x40366a);
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
B40366c:{NFSU2_TR(0x40366c);
if(r1(R+518)){{goto L4036cd;}}
}
B40366e:L40366e:{c.instructions+=7;NFSU2_TR(0x40366e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40366f:{NFSU2_TR(0x40366f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403670:{NFSU2_TR(0x403670);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B403674:{NFSU2_TR(0x403674);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403675:{NFSU2_TR(0x403675);
u8 U[4];
w4(U+0,u32(0x784368ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40367a:{NFSU2_TR(0x40367a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40367e:{NFSU2_TR(0x40367e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403683ull));
TAIL_STATIC(0x57da10u,57d);
}
B403683:L403683:{c.instructions+=9;NFSU2_TR(0x403683);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403687:{NFSU2_TR(0x403687);
__builtin_memmove((R+20),(R+0),4);
}
B403689:{NFSU2_TR(0x403689);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40368c:{NFSU2_TR(0x40368c);
__builtin_memmove(gp(0x81cb78),(R+0),4);
}
B403691:{NFSU2_TR(0x403691);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B403694:{NFSU2_TR(0x403694);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B403697:{NFSU2_TR(0x403697);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B40369a:{NFSU2_TR(0x40369a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40369c:{NFSU2_TR(0x40369c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4036bf;}}
}
B40369e:L40369e:{c.instructions+=3;NFSU2_TR(0x40369e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40369f:{NFSU2_TR(0x40369f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4036a0:{NFSU2_TR(0x4036a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4036a5ull));
TAIL_STATIC(0x575620u,575);
}
B4036a5:L4036a5:{c.instructions+=5;NFSU2_TR(0x4036a5);
__builtin_memmove((R+4),gp(0x81cb78),4);
}
B4036ab:{NFSU2_TR(0x4036ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4036ae:{NFSU2_TR(0x4036ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4036b1:{NFSU2_TR(0x4036b1);
__builtin_memmove((R+28),(R+0),4);
}
B4036b3:{NFSU2_TR(0x4036b3);
__builtin_memmove(gp(0x81cb7c),(R+0),4);
}
B4036b8:L4036b8:{c.instructions+=1;NFSU2_TR(0x4036b8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4036ba;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4036b8u);}goto L4036b8;}
}
B4036ba:L4036ba:{c.instructions+=3;NFSU2_TR(0x4036ba);
w1(R+12,u8(0x1ull));
}
B4036bc:{NFSU2_TR(0x4036bc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4036be:{NFSU2_TR(0x4036be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4036bf:L4036bf:{c.instructions+=2;NFSU2_TR(0x4036bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4036c0:{NFSU2_TR(0x4036c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4036c5ull));
TAIL_STATIC(0x440540u,440);
}
B4036c5:L4036c5:{c.instructions+=4;NFSU2_TR(0x4036c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4036c8:{NFSU2_TR(0x4036c8);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4036ca:{NFSU2_TR(0x4036ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4036cb:{NFSU2_TR(0x4036cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4036d9;}}
}
B4036cd:L4036cd:{c.instructions+=2;NFSU2_TR(0x4036cd);
__builtin_memmove(gp(0x81cb78),(R+24),4);
}
B4036d3:{NFSU2_TR(0x4036d3);
__builtin_memmove(gp(0x81cb7c),(R+24),4);
}
B4036d9:L4036d9:{c.instructions+=1;NFSU2_TR(0x4036d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4036da:L4036da:{c.instructions+=3;NFSU2_TR(0x4036da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4036db:{NFSU2_TR(0x4036db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4036dc:{NFSU2_TR(0x4036dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4036e0:L4036e0:{c.instructions+=18;NFSU2_TR(0x4036e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4036e3:{NFSU2_TR(0x4036e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4036e7:{NFSU2_TR(0x4036e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4036ea:{NFSU2_TR(0x4036ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4036ed:{NFSU2_TR(0x4036ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4036f1:{NFSU2_TR(0x4036f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4036f5:{NFSU2_TR(0x4036f5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4036f7:{NFSU2_TR(0x4036f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4036fb:{NFSU2_TR(0x4036fb);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4036fe:{NFSU2_TR(0x4036fe);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403702:{NFSU2_TR(0x403702);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403705:{NFSU2_TR(0x403705);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B403708:{NFSU2_TR(0x403708);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40370c:{NFSU2_TR(0x40370c);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403712:{NFSU2_TR(0x403712);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403718:{NFSU2_TR(0x403718);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40371a:{NFSU2_TR(0x40371a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40371d:{NFSU2_TR(0x40371d);
if(r1(R+514)){{goto L403733;}}
}
B40371f:L40371f:{c.instructions+=4;NFSU2_TR(0x40371f);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403725:{NFSU2_TR(0x403725);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40372b:{NFSU2_TR(0x40372b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40372f:{NFSU2_TR(0x40372f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B403733:L403733:{c.instructions+=5;NFSU2_TR(0x403733);
__builtin_memmove((R+4),(R+16),4);
}
B403737:{NFSU2_TR(0x403737);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403738:{NFSU2_TR(0x403738);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40373c:{NFSU2_TR(0x40373c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40373d:{NFSU2_TR(0x40373d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403742ull));
TAIL_STATIC(0x43ce50u,43c);
}
B403742:L403742:{c.instructions+=5;NFSU2_TR(0x403742);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B403746:{NFSU2_TR(0x403746);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403747:{NFSU2_TR(0x403747);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40374b:{NFSU2_TR(0x40374b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40374c:{NFSU2_TR(0x40374c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403751ull));
TAIL_STATIC(0x43ce50u,43c);
}
B403751:L403751:{c.instructions+=10;NFSU2_TR(0x403751);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403755:{NFSU2_TR(0x403755);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403759:{NFSU2_TR(0x403759);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B40375c:{NFSU2_TR(0x40375c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403760:{NFSU2_TR(0x403760);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403764:{NFSU2_TR(0x403764);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B403766:{NFSU2_TR(0x403766);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40376a:{NFSU2_TR(0x40376a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40376c:{NFSU2_TR(0x40376c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40376f:{NFSU2_TR(0x40376f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L403777;}}
}
B403771:L403771:{c.instructions+=3;NFSU2_TR(0x403771);
w1(R+0,u8(0x1ull));
}
B403773:{NFSU2_TR(0x403773);
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
B403776:{NFSU2_TR(0x403776);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403777:L403777:{c.instructions+=3;NFSU2_TR(0x403777);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B403779:{NFSU2_TR(0x403779);
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
B40377c:{NFSU2_TR(0x40377c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403780:L403780:{c.instructions+=12;NFSU2_TR(0x403780);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403781:{NFSU2_TR(0x403781);
__builtin_memmove((R+20),(R+16),4);
}
B403783:{NFSU2_TR(0x403783);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B403786:{NFSU2_TR(0x403786);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403788:{NFSU2_TR(0x403788);
u8 U[4];
w4(U+0,u32(0x77131bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40378d:{NFSU2_TR(0x40378d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403793:{NFSU2_TR(0x403793);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403794:{NFSU2_TR(0x403794);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40379b:{NFSU2_TR(0x40379b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x340ull))));
}
B4037a1:{NFSU2_TR(0x4037a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4037a2:{NFSU2_TR(0x4037a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4037a6:{NFSU2_TR(0x4037a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4037abull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B4037ab:L4037ab:{c.instructions+=19;NFSU2_TR(0x4037ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4037ae:{NFSU2_TR(0x4037ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4037b0:{NFSU2_TR(0x4037b0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4037b3:{NFSU2_TR(0x4037b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4037b6:{NFSU2_TR(0x4037b6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4037ba:{NFSU2_TR(0x4037ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4037bc:{NFSU2_TR(0x4037bc);
__builtin_memmove((R+8),(R+4),4);
}
B4037be:{NFSU2_TR(0x4037be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4037c0:{NFSU2_TR(0x4037c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4037c4:{NFSU2_TR(0x4037c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4037c6:{NFSU2_TR(0x4037c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4037ca:{NFSU2_TR(0x4037ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4037cc:{NFSU2_TR(0x4037cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4037cf:{NFSU2_TR(0x4037cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4037d0:{NFSU2_TR(0x4037d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4037d4:{NFSU2_TR(0x4037d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x35cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4037df:{NFSU2_TR(0x4037df);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4037e7:{NFSU2_TR(0x4037e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4037ea:{NFSU2_TR(0x4037ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4037efull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B4037ef:L4037ef:{c.instructions+=4;NFSU2_TR(0x4037ef);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4037f2:{NFSU2_TR(0x4037f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4037f6:{NFSU2_TR(0x4037f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B403801:{NFSU2_TR(0x403801);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403806ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B403806:L403806:{c.instructions+=6;NFSU2_TR(0x403806);
u8 U[8];
w4(U+0,u32(u32(u32(0x344ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40380d:{NFSU2_TR(0x40380d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403814:{NFSU2_TR(0x403814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403815:{NFSU2_TR(0x403815);
__builtin_memmove((R+16),(R+20),4);
}
B403817:{NFSU2_TR(0x403817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B403818:{NFSU2_TR(0x403818);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403820:L403820:{c.instructions+=8;NFSU2_TR(0x403820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B403823:{NFSU2_TR(0x403823);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403824:{NFSU2_TR(0x403824);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403825:{NFSU2_TR(0x403825);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B403829:{NFSU2_TR(0x403829);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B40382b:{NFSU2_TR(0x40382b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40382d:{NFSU2_TR(0x40382d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40382e:{NFSU2_TR(0x40382e);
if(r1(R+518)){{goto L4038b8;}}
}
B403834:L403834:{c.instructions+=6;NFSU2_TR(0x403834);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B403838:{NFSU2_TR(0x403838);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40383c:{NFSU2_TR(0x40383c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40383e:{NFSU2_TR(0x40383e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B403845:{NFSU2_TR(0x403845);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403846:{NFSU2_TR(0x403846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40384bull));
TAIL_STATIC(0x60be70u,60b);
}
B40384b:L40384b:{c.instructions+=2;NFSU2_TR(0x40384b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40384d:{NFSU2_TR(0x40384d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4038b8;}}
}
B40384f:L40384f:{c.instructions+=10;NFSU2_TR(0x40384f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B403856:{NFSU2_TR(0x403856);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B40385a:{NFSU2_TR(0x40385a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B403861:{NFSU2_TR(0x403861);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B403864:{NFSU2_TR(0x403864);
__builtin_memmove((R+0),gp(0x783794),4);
}
B403869:{NFSU2_TR(0x403869);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40386c:{NFSU2_TR(0x40386c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40386d:{NFSU2_TR(0x40386d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B403871:{NFSU2_TR(0x403871);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403875:{NFSU2_TR(0x403875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40387aull));
TAIL_STATIC(0x614880u,614);
}
B40387a:L40387a:{c.instructions+=2;NFSU2_TR(0x40387a);
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
B40387c:{NFSU2_TR(0x40387c);
if(r1(R+518)){{goto L403888;}}
}
B40387e:L40387e:{c.instructions+=2;NFSU2_TR(0x40387e);
__builtin_memmove((R+8),gp(0x783790),4);
}
B403884:{NFSU2_TR(0x403884);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403888:L403888:{c.instructions+=7;NFSU2_TR(0x403888);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40388b:{NFSU2_TR(0x40388b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40388e:{NFSU2_TR(0x40388e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403892:{NFSU2_TR(0x403892);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403893:{NFSU2_TR(0x403893);
__builtin_memmove((R+4),(R+28),4);
}
B403895:{NFSU2_TR(0x403895);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403899:{NFSU2_TR(0x403899);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40389eull));
TAIL_STATIC(0x60bff0u,60b);
}
B40389e:L40389e:{c.instructions+=10;NFSU2_TR(0x40389e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4038a2:{NFSU2_TR(0x4038a2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4038a6:{NFSU2_TR(0x4038a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4038a7:{NFSU2_TR(0x4038a7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4038ab:{NFSU2_TR(0x4038ab);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4038ad:{NFSU2_TR(0x4038ad);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4038af:{NFSU2_TR(0x4038af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4038b1:{NFSU2_TR(0x4038b1);
w1(R+0,u8(0x1ull));
}
B4038b3:{NFSU2_TR(0x4038b3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4038b6:{NFSU2_TR(0x4038b6);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4038ba;}}
}
B4038b8:L4038b8:{c.instructions+=1;NFSU2_TR(0x4038b8);
__builtin_memmove((R+0),(R+12),1);
}
B4038ba:L4038ba:{c.instructions+=5;NFSU2_TR(0x4038ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4038bb:{NFSU2_TR(0x4038bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4038bc:{NFSU2_TR(0x4038bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4038bd:{NFSU2_TR(0x4038bd);
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
B4038c0:{NFSU2_TR(0x4038c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4038d0:L4038d0:{c.instructions+=16;NFSU2_TR(0x4038d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4038d1:{NFSU2_TR(0x4038d1);
__builtin_memmove((R+20),(R+16),4);
}
B4038d3:{NFSU2_TR(0x4038d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4038d6:{NFSU2_TR(0x4038d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B4038d9:{NFSU2_TR(0x4038d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4038da:{NFSU2_TR(0x4038da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4038dd:{NFSU2_TR(0x4038dd);
{u32 ea_=u32(r4(R+24)+u32(1128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4038e3:{NFSU2_TR(0x4038e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4038e6:{NFSU2_TR(0x4038e6);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4038e9:{NFSU2_TR(0x4038e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4038ea:{NFSU2_TR(0x4038ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4038ed:{NFSU2_TR(0x4038ed);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4038f1:{NFSU2_TR(0x4038f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4038f5:{NFSU2_TR(0x4038f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4038f6:{NFSU2_TR(0x4038f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4038f9:{NFSU2_TR(0x4038f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4038feull));
TAIL_STATIC(0x5b5380u,5b5);
}
B4038fe:L4038fe:{c.instructions+=2;NFSU2_TR(0x4038fe);
__builtin_memmove((R+4),(R+0),4);
}
B403900:{NFSU2_TR(0x403900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403905ull));
TAIL_STATIC(0x5764d0u,576);
}
B403905:L403905:{c.instructions+=14;NFSU2_TR(0x403905);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403909:{NFSU2_TR(0x403909);
{u32 ea_=u32(r4(R+24)+u32(1244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40390f:{NFSU2_TR(0x40390f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403912:{NFSU2_TR(0x403912);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B403918:{NFSU2_TR(0x403918);
{u32 ea_=u32(r4(R+28)+u32(608u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40391e:{NFSU2_TR(0x40391e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403922:{NFSU2_TR(0x403922);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403926:{NFSU2_TR(0x403926);
{u32 ea_=u32(r4(R+28)+u32(272u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B40392c:{NFSU2_TR(0x40392c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403930:{NFSU2_TR(0x403930);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403933:{NFSU2_TR(0x403933);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B403939:{NFSU2_TR(0x403939);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40393b:{NFSU2_TR(0x40393b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40393e:{NFSU2_TR(0x40393e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L403968;}}
}
B403940:L403940:{c.instructions+=6;NFSU2_TR(0x403940);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403944:{NFSU2_TR(0x403944);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B403946:{NFSU2_TR(0x403946);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403948:{NFSU2_TR(0x403948);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40394a:{NFSU2_TR(0x40394a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40394d:{NFSU2_TR(0x40394d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40396a;}}
}
B40394f:L40394f:{c.instructions+=5;NFSU2_TR(0x40394f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403953:{NFSU2_TR(0x403953);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403957:{NFSU2_TR(0x403957);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403959:{NFSU2_TR(0x403959);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40395c:{NFSU2_TR(0x40395c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40396a;}}
}
B40395e:L40395e:{c.instructions+=3;NFSU2_TR(0x40395e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403962:{NFSU2_TR(0x403962);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403966:{NFSU2_TR(0x403966);
{goto L40396a;}
}
B403968:L403968:{c.instructions+=1;NFSU2_TR(0x403968);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40396a:L40396a:{c.instructions+=2;NFSU2_TR(0x40396a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40396e:{NFSU2_TR(0x40396e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L403988;}}
}
B403970:L403970:{c.instructions+=2;NFSU2_TR(0x403970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403973:{NFSU2_TR(0x403973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403978ull));
TAIL_STATIC(0x591620u,591);
}
B403978:L403978:{c.instructions+=8;NFSU2_TR(0x403978);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40397c:{NFSU2_TR(0x40397c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B403980:{NFSU2_TR(0x403980);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B403982:{NFSU2_TR(0x403982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B403983:{NFSU2_TR(0x403983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403984:{NFSU2_TR(0x403984);
__builtin_memmove((R+16),(R+20),4);
}
B403986:{NFSU2_TR(0x403986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B403987:{NFSU2_TR(0x403987);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403988:L403988:{c.instructions+=19;NFSU2_TR(0x403988);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40398b:{NFSU2_TR(0x40398b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40398f:{NFSU2_TR(0x40398f);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403992:{NFSU2_TR(0x403992);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403993:{NFSU2_TR(0x403993);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403996:{NFSU2_TR(0x403996);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40399a:{NFSU2_TR(0x40399a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40399e:{NFSU2_TR(0x40399e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4039a0:{NFSU2_TR(0x4039a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4039a1:{NFSU2_TR(0x4039a1);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4039a7:{NFSU2_TR(0x4039a7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4039ab:{NFSU2_TR(0x4039ab);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4039b1:{NFSU2_TR(0x4039b1);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4039b3:{NFSU2_TR(0x4039b3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4039b7:{NFSU2_TR(0x4039b7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4039b9:{NFSU2_TR(0x4039b9);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4039bf:{NFSU2_TR(0x4039bf);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4039c3:{NFSU2_TR(0x4039c3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4039c7:{NFSU2_TR(0x4039c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4039ccull));
TAIL_STATIC(0x43cf10u,43c);
}
B4039cc:L4039cc:{c.instructions+=12;NFSU2_TR(0x4039cc);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4039d2:{NFSU2_TR(0x4039d2);
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
B4039d5:{NFSU2_TR(0x4039d5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4039d9:{NFSU2_TR(0x4039d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4039da:{NFSU2_TR(0x4039da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4039db:{NFSU2_TR(0x4039db);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4039dd:{NFSU2_TR(0x4039dd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4039e1:{NFSU2_TR(0x4039e1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4039e5:{NFSU2_TR(0x4039e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4039e7:{NFSU2_TR(0x4039e7);
__builtin_memmove((R+16),(R+20),4);
}
B4039e9:{NFSU2_TR(0x4039e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4039ea:{NFSU2_TR(0x4039ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4039f0:L4039f0:{c.instructions+=18;NFSU2_TR(0x4039f0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4039f4:{NFSU2_TR(0x4039f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4039f8:{NFSU2_TR(0x4039f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4039fb:{NFSU2_TR(0x4039fb);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4039fd:{NFSU2_TR(0x4039fd);
{u32 ea_=u32(r4(R+0)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403a03:{NFSU2_TR(0x403a03);
{u32 ea_=u32(r4(R+0)+u32(612u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B403a09:{NFSU2_TR(0x403a09);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B403a0b:{NFSU2_TR(0x403a0b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403a11:{NFSU2_TR(0x403a11);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403a17:{NFSU2_TR(0x403a17);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403a1d:{NFSU2_TR(0x403a1d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B403a1f:{NFSU2_TR(0x403a1f);
{u32 ea_=u32(r4(R+0)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403a25:{NFSU2_TR(0x403a25);
{u32 ea_=u32(r4(R+0)+u32(220u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B403a2b:{NFSU2_TR(0x403a2b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403a31:{NFSU2_TR(0x403a31);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B403a33:{NFSU2_TR(0x403a33);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B403a39:{NFSU2_TR(0x403a39);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B403a3b:{NFSU2_TR(0x403a3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403a40:L403a40:{c.instructions+=4;NFSU2_TR(0x403a40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403a41:{NFSU2_TR(0x403a41);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B403a45:{NFSU2_TR(0x403a45);
__builtin_memmove((R+4),(R+24),4);
}
B403a47:{NFSU2_TR(0x403a47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403a4cull));
TAIL_STATIC(0x5ec3a0u,5ec);
}
B403a4c:L403a4c:{c.instructions+=6;NFSU2_TR(0x403a4c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403a50:{NFSU2_TR(0x403a50);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403a54:{NFSU2_TR(0x403a54);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403a5a:{NFSU2_TR(0x403a5a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403a5c:{NFSU2_TR(0x403a5c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B403a5f:{NFSU2_TR(0x403a5f);
if(r1(R+514)){{goto L403a76;}}
}
B403a61:L403a61:{c.instructions+=5;NFSU2_TR(0x403a61);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403a67:{NFSU2_TR(0x403a67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403a68:{NFSU2_TR(0x403a68);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403a6b:{NFSU2_TR(0x403a6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403a6c:{NFSU2_TR(0x403a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403a71ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4038d0u);}goto L4038d0;}
}
B403a71:L403a71:{c.instructions+=2;NFSU2_TR(0x403a71);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B403a73:{NFSU2_TR(0x403a73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B403a76:L403a76:{c.instructions+=12;NFSU2_TR(0x403a76);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403a7a:{NFSU2_TR(0x403a7a);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403a80:{NFSU2_TR(0x403a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403a83:{NFSU2_TR(0x403a83);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403a86:{NFSU2_TR(0x403a86);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403a8c:{NFSU2_TR(0x403a8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403a8d:{NFSU2_TR(0x403a8d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403a8f:{NFSU2_TR(0x403a8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B403a91:{NFSU2_TR(0x403a91);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403a97:{NFSU2_TR(0x403a97);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403a99:{NFSU2_TR(0x403a99);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B403a9c:{NFSU2_TR(0x403a9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L403aa9;}}
}
B403a9e:L403a9e:{c.instructions+=1;NFSU2_TR(0x403a9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403aa3ull));
TAIL_STATIC(0x60be30u,60b);
}
B403aa3:L403aa3:{c.instructions+=2;NFSU2_TR(0x403aa3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B403aa7:{NFSU2_TR(0x403aa7);
{goto L403ab2;}
}
B403aa9:L403aa9:{c.instructions+=1;NFSU2_TR(0x403aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403aaeull));
TAIL_STATIC(0x60be30u,60b);
}
B403aae:L403aae:{c.instructions+=1;NFSU2_TR(0x403aae);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B403ab2:L403ab2:{c.instructions+=11;NFSU2_TR(0x403ab2);
{u32 ea_=u32(u32(8293900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403ab8:{NFSU2_TR(0x403ab8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B403aba:{NFSU2_TR(0x403aba);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403ac0:{NFSU2_TR(0x403ac0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B403ac4:{NFSU2_TR(0x403ac4);
{u32 ea_=u32(u32(8293900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403aca:{NFSU2_TR(0x403aca);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B403acc:{NFSU2_TR(0x403acc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403ad0:{NFSU2_TR(0x403ad0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403ad2:{NFSU2_TR(0x403ad2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B403ad4:{NFSU2_TR(0x403ad4);
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
B403ad7:{NFSU2_TR(0x403ad7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L403adf;}}
}
B403ad9:L403ad9:{c.instructions+=2;NFSU2_TR(0x403ad9);
w4(R+0,u32(0x1ull));
}
B403ade:{NFSU2_TR(0x403ade);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403adf:L403adf:{c.instructions+=2;NFSU2_TR(0x403adf);
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
B403ae1:{NFSU2_TR(0x403ae1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403af0:L403af0:{c.instructions+=17;NFSU2_TR(0x403af0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403af1:{NFSU2_TR(0x403af1);
__builtin_memmove((R+20),(R+16),4);
}
B403af3:{NFSU2_TR(0x403af3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B403af6:{NFSU2_TR(0x403af6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B403af9:{NFSU2_TR(0x403af9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403afa:{NFSU2_TR(0x403afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B403afd:{NFSU2_TR(0x403afd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B403aff:{NFSU2_TR(0x403aff);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B403b06:{NFSU2_TR(0x403b06);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B403b0a:{NFSU2_TR(0x403b0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B403b0e:{NFSU2_TR(0x403b0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B403b16:{NFSU2_TR(0x403b16);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B403b1e:{NFSU2_TR(0x403b1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B403b26:{NFSU2_TR(0x403b26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403b27:{NFSU2_TR(0x403b27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403b28:{NFSU2_TR(0x403b28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403b29:{NFSU2_TR(0x403b29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403b2eull));
TAIL_STATIC(0x43c390u,43c);
}
B403b2e:L403b2e:{c.instructions+=12;NFSU2_TR(0x403b2e);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403b31:{NFSU2_TR(0x403b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403b34:{NFSU2_TR(0x403b34);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403b38:{NFSU2_TR(0x403b38);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403b3b:{NFSU2_TR(0x403b3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403b3f:{NFSU2_TR(0x403b3f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403b43:{NFSU2_TR(0x403b43);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403b49:{NFSU2_TR(0x403b49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B403b4c:{NFSU2_TR(0x403b4c);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403b4f:{NFSU2_TR(0x403b4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403b51:{NFSU2_TR(0x403b51);
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
B403b54:{NFSU2_TR(0x403b54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L403b60;}}
}
B403b56:L403b56:{c.instructions+=2;NFSU2_TR(0x403b56);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x40a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B403b5e:{NFSU2_TR(0x403b5e);
{goto L403b67;}
}
B403b60:L403b60:{c.instructions+=2;NFSU2_TR(0x403b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403b63:{NFSU2_TR(0x403b63);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403b67:L403b67:{c.instructions+=9;NFSU2_TR(0x403b67);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403b6b:{NFSU2_TR(0x403b6b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403b6c:{NFSU2_TR(0x403b6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B403b70:{NFSU2_TR(0x403b70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403b71:{NFSU2_TR(0x403b71);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B403b75:{NFSU2_TR(0x403b75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403b76:{NFSU2_TR(0x403b76);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B403b7a:{NFSU2_TR(0x403b7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403b7b:{NFSU2_TR(0x403b7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403b80ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B403b80:L403b80:{c.instructions+=12;NFSU2_TR(0x403b80);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403b84:{NFSU2_TR(0x403b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403b87:{NFSU2_TR(0x403b87);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403b8b:{NFSU2_TR(0x403b8b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403b8d:{NFSU2_TR(0x403b8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403b91:{NFSU2_TR(0x403b91);
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
B403b94:{NFSU2_TR(0x403b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403b97:{NFSU2_TR(0x403b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403b9a:{NFSU2_TR(0x403b9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403b9b:{NFSU2_TR(0x403b9b);
__builtin_memmove((R+16),(R+20),4);
}
B403b9d:{NFSU2_TR(0x403b9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B403b9e:{NFSU2_TR(0x403b9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403ba0:L403ba0:{c.instructions+=10;NFSU2_TR(0x403ba0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403ba1:{NFSU2_TR(0x403ba1);
__builtin_memmove((R+20),(R+16),4);
}
B403ba3:{NFSU2_TR(0x403ba3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B403ba6:{NFSU2_TR(0x403ba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B403ba9:{NFSU2_TR(0x403ba9);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403baf:{NFSU2_TR(0x403baf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403bb0:{NFSU2_TR(0x403bb0);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403bb3:{NFSU2_TR(0x403bb3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403bb5:{NFSU2_TR(0x403bb5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B403bb8:{NFSU2_TR(0x403bb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L403bc4;}}
}
B403bba:L403bba:{c.instructions+=2;NFSU2_TR(0x403bba);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x40a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B403bc2:{NFSU2_TR(0x403bc2);
{goto L403bcb;}
}
B403bc4:L403bc4:{c.instructions+=2;NFSU2_TR(0x403bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403bc7:{NFSU2_TR(0x403bc7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403bcb:L403bcb:{c.instructions+=8;NFSU2_TR(0x403bcb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403bcf:{NFSU2_TR(0x403bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B403bd2:{NFSU2_TR(0x403bd2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403bd3:{NFSU2_TR(0x403bd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+8),(U+0),4);
}
B403bd6:{NFSU2_TR(0x403bd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403bd7:{NFSU2_TR(0x403bd7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B403bdb:{NFSU2_TR(0x403bdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403bdc:{NFSU2_TR(0x403bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403be1ull));
TAIL_STATIC(0x43cf90u,43c);
}
B403be1:L403be1:{c.instructions+=20;NFSU2_TR(0x403be1);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403be4:{NFSU2_TR(0x403be4);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403be7:{NFSU2_TR(0x403be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403bea:{NFSU2_TR(0x403bea);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403bee:{NFSU2_TR(0x403bee);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403bf1:{NFSU2_TR(0x403bf1);
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
B403bf4:{NFSU2_TR(0x403bf4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403bf8:{NFSU2_TR(0x403bf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403bf9:{NFSU2_TR(0x403bf9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B403bfd:{NFSU2_TR(0x403bfd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403c01:{NFSU2_TR(0x403c01);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B403c05:{NFSU2_TR(0x403c05);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403c09:{NFSU2_TR(0x403c09);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B403c0d:{NFSU2_TR(0x403c0d);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B403c0f:{NFSU2_TR(0x403c0f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403c11:{NFSU2_TR(0x403c11);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403c14:{NFSU2_TR(0x403c14);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403c17:{NFSU2_TR(0x403c17);
__builtin_memmove((R+16),(R+20),4);
}
B403c19:{NFSU2_TR(0x403c19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B403c1a:{NFSU2_TR(0x403c1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403c20:L403c20:{c.instructions+=5;NFSU2_TR(0x403c20);
__builtin_memmove((R+0),gp(0x890080),4);
}
B403c25:{NFSU2_TR(0x403c25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B403c28:{NFSU2_TR(0x403c28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B403c2a:{NFSU2_TR(0x403c2a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403c2b:{NFSU2_TR(0x403c2b);
if(r1(R+518)){{goto L403d51;}}
}
B403c31:L403c31:{c.instructions+=3;NFSU2_TR(0x403c31);
__builtin_memmove((R+4),gp(0x890118),4);
}
B403c37:{NFSU2_TR(0x403c37);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B403c39:{NFSU2_TR(0x403c39);
if(r1(R+518)){{goto L403d51;}}
}
B403c3f:L403c3f:{c.instructions+=4;NFSU2_TR(0x403c3f);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7c0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B403c46:{NFSU2_TR(0x403c46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403c47:{NFSU2_TR(0x403c47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403c48:{NFSU2_TR(0x403c48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L403d19;}}
}
B403c4e:L403c4e:{c.instructions+=6;NFSU2_TR(0x403c4e);
__builtin_memmove((R+24),gp(0x8900ac),4);
}
B403c54:{NFSU2_TR(0x403c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403c57:{NFSU2_TR(0x403c57);
__builtin_memmove((R+28),gp(0x8900b0),4);
}
B403c5d:{NFSU2_TR(0x403c5d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403c5e:{NFSU2_TR(0x403c5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403c5f:{NFSU2_TR(0x403c5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403c64ull));
TAIL_STATIC(0x5eef60u,5ee);
}
B403c64:L403c64:{c.instructions+=5;NFSU2_TR(0x403c64);
__builtin_memmove((R+4),gp(0x890118),4);
}
B403c6a:{NFSU2_TR(0x403c6a);
__builtin_memmove((R+12),(R+0),4);
}
B403c6c:{NFSU2_TR(0x403c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403c6f:{NFSU2_TR(0x403c6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403c70:{NFSU2_TR(0x403c70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403c75ull));
TAIL_STATIC(0x5eef60u,5ee);
}
B403c75:L403c75:{c.instructions+=8;NFSU2_TR(0x403c75);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B403c79:{NFSU2_TR(0x403c79);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B403c7d:{NFSU2_TR(0x403c7d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B403c7f:{NFSU2_TR(0x403c7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B403c83:{NFSU2_TR(0x403c83);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B403c87:{NFSU2_TR(0x403c87);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403c8b:{NFSU2_TR(0x403c8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403c8f:{NFSU2_TR(0x403c8f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L403c99;}}
}
B403c91:L403c91:{c.instructions+=2;NFSU2_TR(0x403c91);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403c95:{NFSU2_TR(0x403c95);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403c99:L403c99:{c.instructions+=7;NFSU2_TR(0x403c99);
__builtin_memmove((R+0),gp(0x89e7c4),4);
}
B403c9e:{NFSU2_TR(0x403c9e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B403c9f:{NFSU2_TR(0x403c9f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B403ca1:{NFSU2_TR(0x403ca1);
__builtin_memmove((R+20),(R+0),4);
}
B403ca3:{NFSU2_TR(0x403ca3);
w4(R+20,sar<u32>(r4(R+20),u64(u32(0x1ull))));
}
B403ca5:{NFSU2_TR(0x403ca5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B403ca7:{NFSU2_TR(0x403ca7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L403caa;}}
}
B403ca9:L403ca9:{c.instructions+=1;NFSU2_TR(0x403ca9);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B403caa:L403caa:{c.instructions+=3;NFSU2_TR(0x403caa);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B403cac:{NFSU2_TR(0x403cac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B403cad:{NFSU2_TR(0x403cad);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L403cb0;}}
}
B403caf:L403caf:{c.instructions+=1;NFSU2_TR(0x403caf);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B403cb0:L403cb0:{c.instructions+=7;NFSU2_TR(0x403cb0);
__builtin_memmove((R+0),gp(0x890080),4);
}
B403cb5:{NFSU2_TR(0x403cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403cb8:{NFSU2_TR(0x403cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403cbb:{NFSU2_TR(0x403cbb);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B403cbd:{NFSU2_TR(0x403cbd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B403cbf:{NFSU2_TR(0x403cbf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B403cc1:{NFSU2_TR(0x403cc1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L403d4f;}}
}
B403cc7:L403cc7:{c.instructions+=1;NFSU2_TR(0x403cc7);
{goto L403cd0;}
}
B403cd0:L403cd0:{c.instructions+=5;NFSU2_TR(0x403cd0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B403cd2:{NFSU2_TR(0x403cd2);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B403cd6:{NFSU2_TR(0x403cd6);
__builtin_memmove((R+4),gp(0x890118),4);
}
B403cdc:{NFSU2_TR(0x403cdc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403cdd:{NFSU2_TR(0x403cdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403ce2ull));
TAIL_STATIC(0x5eef60u,5ee);
}
B403ce2:L403ce2:{c.instructions+=3;NFSU2_TR(0x403ce2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B403ce6:{NFSU2_TR(0x403ce6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B403ce8:{NFSU2_TR(0x403ce8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L403cf6;}}
}
B403cea:L403cea:{c.instructions+=3;NFSU2_TR(0x403cea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403cee:{NFSU2_TR(0x403cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x464ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403cf4:{NFSU2_TR(0x403cf4);
{goto L403d00;}
}
B403cf6:L403cf6:{c.instructions+=2;NFSU2_TR(0x403cf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403cfa:{NFSU2_TR(0x403cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x464ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403d00:L403d00:{c.instructions+=7;NFSU2_TR(0x403d00);
__builtin_memmove((R+0),gp(0x890080),4);
}
B403d05:{NFSU2_TR(0x403d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403d08:{NFSU2_TR(0x403d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403d0b:{NFSU2_TR(0x403d0b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B403d0c:{NFSU2_TR(0x403d0c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B403d0e:{NFSU2_TR(0x403d0e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B403d10:{NFSU2_TR(0x403d10);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x403cd0u);}goto L403cd0;}}
}
B403d12:L403d12:{c.instructions+=5;NFSU2_TR(0x403d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B403d13:{NFSU2_TR(0x403d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403d14:{NFSU2_TR(0x403d14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B403d15:{NFSU2_TR(0x403d15);
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
B403d18:{NFSU2_TR(0x403d18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403d19:L403d19:{c.instructions+=8;NFSU2_TR(0x403d19);
__builtin_memmove((R+4),gp(0x8900b4),4);
}
B403d1f:{NFSU2_TR(0x403d1f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B403d23:{NFSU2_TR(0x403d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403d26:{NFSU2_TR(0x403d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B403d29:{NFSU2_TR(0x403d29);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B403d2b:{NFSU2_TR(0x403d2b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B403d2d:{NFSU2_TR(0x403d2d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B403d2f:{NFSU2_TR(0x403d2f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L403d4f;}}
}
B403d31:L403d31:{c.instructions+=10;NFSU2_TR(0x403d31);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B403d33:{NFSU2_TR(0x403d33);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B403d37:{NFSU2_TR(0x403d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x464ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403d3d:{NFSU2_TR(0x403d3d);
__builtin_memmove((R+0),gp(0x890080),4);
}
B403d42:{NFSU2_TR(0x403d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403d45:{NFSU2_TR(0x403d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B403d48:{NFSU2_TR(0x403d48);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B403d49:{NFSU2_TR(0x403d49);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B403d4b:{NFSU2_TR(0x403d4b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B403d4d:{NFSU2_TR(0x403d4d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x403d31u);}goto L403d31;}}
}
B403d4f:L403d4f:{c.instructions+=2;NFSU2_TR(0x403d4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B403d50:{NFSU2_TR(0x403d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403d51:L403d51:{c.instructions+=3;NFSU2_TR(0x403d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B403d52:{NFSU2_TR(0x403d52);
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
B403d55:{NFSU2_TR(0x403d55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403d60:L403d60:{c.instructions+=3;NFSU2_TR(0x403d60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403d64:{NFSU2_TR(0x403d64);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B403d66:{NFSU2_TR(0x403d66);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L403d73;}}
}
B403d68:L403d68:{c.instructions+=2;NFSU2_TR(0x403d68);
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
B403d6b:{NFSU2_TR(0x403d6b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L403d73;}}
}
B403d6d:L403d6d:{c.instructions+=2;NFSU2_TR(0x403d6d);
w4(R+0,u32(0x1ull));
}
B403d72:{NFSU2_TR(0x403d72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403d73:L403d73:{c.instructions+=2;NFSU2_TR(0x403d73);
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
B403d75:{NFSU2_TR(0x403d75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403d80:L403d80:{c.instructions+=3;NFSU2_TR(0x403d80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403d84:{NFSU2_TR(0x403d84);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B403d87:{NFSU2_TR(0x403d87);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L403d94;}}
}
B403d89:L403d89:{c.instructions+=2;NFSU2_TR(0x403d89);
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
B403d8c:{NFSU2_TR(0x403d8c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L403d94;}}
}
B403d8e:L403d8e:{c.instructions+=2;NFSU2_TR(0x403d8e);
w4(R+0,u32(0x1ull));
}
B403d93:{NFSU2_TR(0x403d93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403d94:L403d94:{c.instructions+=2;NFSU2_TR(0x403d94);
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
B403d96:{NFSU2_TR(0x403d96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403da0:L403da0:{c.instructions+=3;NFSU2_TR(0x403da0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403da4:{NFSU2_TR(0x403da4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffeull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffeull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B403da7:{NFSU2_TR(0x403da7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403db0:L403db0:{c.instructions+=3;NFSU2_TR(0x403db0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403db4:{NFSU2_TR(0x403db4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B403db6:{NFSU2_TR(0x403db6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L403dbf;}}
}
B403db8:L403db8:{c.instructions+=2;NFSU2_TR(0x403db8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B403dbb:{NFSU2_TR(0x403dbb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L403dbf;}}
}
B403dbd:L403dbd:{c.instructions+=2;NFSU2_TR(0x403dbd);
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
B403dbe:{NFSU2_TR(0x403dbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403dbf:L403dbf:{c.instructions+=2;NFSU2_TR(0x403dbf);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B403dc2:{NFSU2_TR(0x403dc2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L403dcc;}}
}
B403dc4:L403dc4:{c.instructions+=2;NFSU2_TR(0x403dc4);
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
B403dc7:{NFSU2_TR(0x403dc7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L403dcc;}}
}
B403dc9:L403dc9:{c.instructions+=1;NFSU2_TR(0x403dc9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B403dcc:L403dcc:{c.instructions+=1;NFSU2_TR(0x403dcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403dd0:L403dd0:{c.instructions+=4;NFSU2_TR(0x403dd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403dd4:{NFSU2_TR(0x403dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403dd7:{NFSU2_TR(0x403dd7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B403dda:{NFSU2_TR(0x403dda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x403ddfull));
TAIL_STATIC(0x5b5330u,5b5);
}
B403ddf:L403ddf:{c.instructions+=2;NFSU2_TR(0x403ddf);
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
B403de1:{NFSU2_TR(0x403de1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403df0:L403df0:{c.instructions+=62;NFSU2_TR(0x403df0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B403df3:{NFSU2_TR(0x403df3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403df7:{NFSU2_TR(0x403df7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B403df9:{NFSU2_TR(0x403df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403dfc:{NFSU2_TR(0x403dfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403e00:{NFSU2_TR(0x403e00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403e04:{NFSU2_TR(0x403e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B403e06:{NFSU2_TR(0x403e06);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403e0a:{NFSU2_TR(0x403e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403e0d:{NFSU2_TR(0x403e0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403e11:{NFSU2_TR(0x403e11);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403e15:{NFSU2_TR(0x403e15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B403e17:{NFSU2_TR(0x403e17);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403e1b:{NFSU2_TR(0x403e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403e1e:{NFSU2_TR(0x403e1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403e22:{NFSU2_TR(0x403e22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B403e26:{NFSU2_TR(0x403e26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B403e28:{NFSU2_TR(0x403e28);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403e2c:{NFSU2_TR(0x403e2c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403e30:{NFSU2_TR(0x403e30);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B403e34:{NFSU2_TR(0x403e34);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403e38:{NFSU2_TR(0x403e38);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403e3c:{NFSU2_TR(0x403e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403e3f:{NFSU2_TR(0x403e3f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B403e43:{NFSU2_TR(0x403e43);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B403e47:{NFSU2_TR(0x403e47);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403e4b:{NFSU2_TR(0x403e4b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B403e4f:{NFSU2_TR(0x403e4f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403e53:{NFSU2_TR(0x403e53);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B403e57:{NFSU2_TR(0x403e57);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403e5b:{NFSU2_TR(0x403e5b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B403e5d:{NFSU2_TR(0x403e5d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B403e5f:{NFSU2_TR(0x403e5f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403e63:{NFSU2_TR(0x403e63);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B403e65:{NFSU2_TR(0x403e65);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B403e67:{NFSU2_TR(0x403e67);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403e6b:{NFSU2_TR(0x403e6b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403e6f:{NFSU2_TR(0x403e6f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B403e73:{NFSU2_TR(0x403e73);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403e77:{NFSU2_TR(0x403e77);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403e7b:{NFSU2_TR(0x403e7b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B403e7f:{NFSU2_TR(0x403e7f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403e83:{NFSU2_TR(0x403e83);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403e87:{NFSU2_TR(0x403e87);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B403e89:{NFSU2_TR(0x403e89);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403e8d:{NFSU2_TR(0x403e8d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B403e8f:{NFSU2_TR(0x403e8f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B403e91:{NFSU2_TR(0x403e91);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403e95:{NFSU2_TR(0x403e95);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B403e97:{NFSU2_TR(0x403e97);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B403e99:{NFSU2_TR(0x403e99);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403e9d:{NFSU2_TR(0x403e9d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403ea1:{NFSU2_TR(0x403ea1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403ea5:{NFSU2_TR(0x403ea5);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B403ea7:{NFSU2_TR(0x403ea7);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B403ea9:{NFSU2_TR(0x403ea9);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B403eab:{NFSU2_TR(0x403eab);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B403ead:{NFSU2_TR(0x403ead);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B403eaf:{NFSU2_TR(0x403eaf);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403eb5:{NFSU2_TR(0x403eb5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403eb7:{NFSU2_TR(0x403eb7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B403eba:{NFSU2_TR(0x403eba);
if(r1(R+514)){{goto L403ed9;}}
}
B403ebc:L403ebc:{c.instructions+=4;NFSU2_TR(0x403ebc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B403ec0:{NFSU2_TR(0x403ec0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B403ec2:{NFSU2_TR(0x403ec2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B403ec4:{NFSU2_TR(0x403ec4);
if(r1(R+518)){{goto L403ed3;}}
}
B403ec6:L403ec6:{c.instructions+=2;NFSU2_TR(0x403ec6);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B403ecc:{NFSU2_TR(0x403ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B403ed3:L403ed3:{c.instructions+=3;NFSU2_TR(0x403ed3);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B403ed5:{NFSU2_TR(0x403ed5);
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
B403ed8:{NFSU2_TR(0x403ed8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403ed9:L403ed9:{c.instructions+=10;NFSU2_TR(0x403ed9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B403edf:{NFSU2_TR(0x403edf);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403ee3:{NFSU2_TR(0x403ee3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B403ee5:{NFSU2_TR(0x403ee5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403ee9:{NFSU2_TR(0x403ee9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403eed:{NFSU2_TR(0x403eed);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403ef1:{NFSU2_TR(0x403ef1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403ef7:{NFSU2_TR(0x403ef7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403ef9:{NFSU2_TR(0x403ef9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B403efc:{NFSU2_TR(0x403efc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L403f61;}}
}
B403efe:L403efe:{c.instructions+=6;NFSU2_TR(0x403efe);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403f02:{NFSU2_TR(0x403f02);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403f08:{NFSU2_TR(0x403f08);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B403f0c:{NFSU2_TR(0x403f0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403f0e:{NFSU2_TR(0x403f0e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B403f11:{NFSU2_TR(0x403f11);
if(r1(R+514)){{goto L403f1b;}}
}
B403f13:L403f13:{c.instructions+=2;NFSU2_TR(0x403f13);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B403f15:{NFSU2_TR(0x403f15);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403f1b:L403f1b:{c.instructions+=6;NFSU2_TR(0x403f1b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403f1f:{NFSU2_TR(0x403f1f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B403f21:{NFSU2_TR(0x403f21);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403f23:{NFSU2_TR(0x403f23);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B403f25:{NFSU2_TR(0x403f25);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B403f28:{NFSU2_TR(0x403f28);
if(r1(R+514)){{goto L403f71;}}
}
B403f2a:L403f2a:{c.instructions+=4;NFSU2_TR(0x403f2a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B403f30:{NFSU2_TR(0x403f30);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403f32:{NFSU2_TR(0x403f32);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B403f35:{NFSU2_TR(0x403f35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L403f69;}}
}
B403f37:L403f37:{c.instructions+=6;NFSU2_TR(0x403f37);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B403f39:{NFSU2_TR(0x403f39);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403f3f:{NFSU2_TR(0x403f3f);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B403f41:{NFSU2_TR(0x403f41);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403f43:{NFSU2_TR(0x403f43);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B403f46:{NFSU2_TR(0x403f46);
if(r1(R+514)){{goto L403f50;}}
}
B403f48:L403f48:{c.instructions+=2;NFSU2_TR(0x403f48);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B403f4a:{NFSU2_TR(0x403f4a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403f50:L403f50:{c.instructions+=6;NFSU2_TR(0x403f50);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B403f52:{NFSU2_TR(0x403f52);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B403f54:{NFSU2_TR(0x403f54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B403f56:{NFSU2_TR(0x403f56);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B403f58:{NFSU2_TR(0x403f58);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B403f5b:{NFSU2_TR(0x403f5b);
if(r1(R+514)){{goto L403f73;}}
}
B403f5d:L403f5d:{c.instructions+=2;NFSU2_TR(0x403f5d);
w1(R+0,u8(0x1ull));
}
B403f5f:{NFSU2_TR(0x403f5f);
{goto L403f75;}
}
B403f61:L403f61:{c.instructions+=2;NFSU2_TR(0x403f61);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403f67:{NFSU2_TR(0x403f67);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x403f1bu);}goto L403f1b;}
}
B403f69:L403f69:{c.instructions+=2;NFSU2_TR(0x403f69);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403f6f:{NFSU2_TR(0x403f6f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x403f50u);}goto L403f50;}
}
B403f71:L403f71:{c.instructions+=1;NFSU2_TR(0x403f71);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B403f73:L403f73:{c.instructions+=1;NFSU2_TR(0x403f73);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B403f75:L403f75:{c.instructions+=3;NFSU2_TR(0x403f75);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B403f79:{NFSU2_TR(0x403f79);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B403f7b:{NFSU2_TR(0x403f7b);
if(r1(R+518)){{goto L403fb6;}}
}
B403f7d:L403f7d:{c.instructions+=16;NFSU2_TR(0x403f7d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403f81:{NFSU2_TR(0x403f81);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B403f85:{NFSU2_TR(0x403f85);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403f89:{NFSU2_TR(0x403f89);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B403f8d:{NFSU2_TR(0x403f8d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B403f8f:{NFSU2_TR(0x403f8f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403f93:{NFSU2_TR(0x403f93);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403f97:{NFSU2_TR(0x403f97);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B403f9b:{NFSU2_TR(0x403f9b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403f9f:{NFSU2_TR(0x403f9f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403fa3:{NFSU2_TR(0x403fa3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B403fa7:{NFSU2_TR(0x403fa7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403fab:{NFSU2_TR(0x403fab);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B403faf:{NFSU2_TR(0x403faf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B403fb1:{NFSU2_TR(0x403fb1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403fb3:{NFSU2_TR(0x403fb3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403fb6:L403fb6:{c.instructions+=2;NFSU2_TR(0x403fb6);
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
B403fb9:{NFSU2_TR(0x403fb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B403fc0:L403fc0:{c.instructions+=26;NFSU2_TR(0x403fc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B403fc4:{NFSU2_TR(0x403fc4);
__builtin_memmove((R+0),(R+4),4);
}
B403fc6:{NFSU2_TR(0x403fc6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B403fc8:{NFSU2_TR(0x403fc8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403fc9:{NFSU2_TR(0x403fc9);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B403fcb:{NFSU2_TR(0x403fcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B403fce:{NFSU2_TR(0x403fce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403fcf:{NFSU2_TR(0x403fcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B403fd2:{NFSU2_TR(0x403fd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B403fd5:{NFSU2_TR(0x403fd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B403fd6:{NFSU2_TR(0x403fd6);
__builtin_memmove((R+4),(R+24),4);
}
B403fd8:{NFSU2_TR(0x403fd8);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B403fda:{NFSU2_TR(0x403fda);
__builtin_memmove((R+28),(R+0),4);
}
B403fdc:{NFSU2_TR(0x403fdc);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B403fe0:{NFSU2_TR(0x403fe0);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B403fe2:{NFSU2_TR(0x403fe2);
w4(R+12,u32(0x14ull));
}
B403fe7:{NFSU2_TR(0x403fe7);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403fea:{NFSU2_TR(0x403fea);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B403fed:{NFSU2_TR(0x403fed);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403fef:{NFSU2_TR(0x403fef);
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B403ff2:{NFSU2_TR(0x403ff2);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B403ff3:{NFSU2_TR(0x403ff3);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B403ff6:{NFSU2_TR(0x403ff6);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403ff9:{NFSU2_TR(0x403ff9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B403ffb:{NFSU2_TR(0x403ffb);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B403ffe:{NFSU2_TR(0x403ffe);
{u32 ea_=u32(r4(R+4)+r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x404002u,404);
}
XIT:NFSU2_TR_EXIT(0x403,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
