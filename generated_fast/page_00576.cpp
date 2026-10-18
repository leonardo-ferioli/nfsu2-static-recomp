#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x576,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x576,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_576(u8* __restrict R,Cpu& c);
u32 page_576(Cpu& c){return body_576(c.regs.data(),c);}
__attribute__((noinline)) u32 body_576(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x576000:goto L576000;
case 0x576003:c.instructions+=6;goto B576003;
case 0x576004:c.instructions+=5;goto B576004;
case 0x576005:c.instructions+=4;goto B576005;
case 0x576007:c.instructions+=3;goto B576007;
case 0x576009:c.instructions+=2;goto B576009;
case 0x57600a:c.instructions+=1;goto B57600a;
case 0x57600c:goto L57600c;
case 0x57600f:c.instructions+=4;goto B57600f;
case 0x576013:c.instructions+=3;goto B576013;
case 0x576017:c.instructions+=2;goto B576017;
case 0x57601a:c.instructions+=1;goto B57601a;
case 0x576020:goto L576020;
case 0x576023:c.instructions+=1;goto B576023;
case 0x576025:goto L576025;
case 0x576027:c.instructions+=1;goto B576027;
case 0x576029:goto L576029;
case 0x57602a:c.instructions+=3;goto B57602a;
case 0x57602d:c.instructions+=2;goto B57602d;
case 0x57602f:c.instructions+=1;goto B57602f;
case 0x576031:goto L576031;
case 0x576032:c.instructions+=4;goto B576032;
case 0x576033:c.instructions+=3;goto B576033;
case 0x576035:c.instructions+=2;goto B576035;
case 0x576036:c.instructions+=1;goto B576036;
case 0x576039:goto L576039;
case 0x57603c:c.instructions+=5;goto B57603c;
case 0x576040:c.instructions+=4;goto B576040;
case 0x576041:c.instructions+=3;goto B576041;
case 0x576042:c.instructions+=2;goto B576042;
case 0x576043:c.instructions+=1;goto B576043;
case 0x576050:goto L576050;
case 0x576051:c.instructions+=3;goto B576051;
case 0x576055:c.instructions+=2;goto B576055;
case 0x576057:c.instructions+=1;goto B576057;
case 0x576059:goto L576059;
case 0x57605c:c.instructions+=4;goto B57605c;
case 0x57605d:c.instructions+=3;goto B57605d;
case 0x57605f:c.instructions+=2;goto B57605f;
case 0x576061:c.instructions+=1;goto B576061;
case 0x576063:goto L576063;
case 0x576065:c.instructions+=1;goto B576065;
case 0x576066:goto L576066;
case 0x576069:c.instructions+=4;goto B576069;
case 0x57606d:c.instructions+=3;goto B57606d;
case 0x57606f:c.instructions+=2;goto B57606f;
case 0x576071:c.instructions+=1;goto B576071;
case 0x576073:goto L576073;
case 0x576077:goto L576077;
case 0x57607a:c.instructions+=4;goto B57607a;
case 0x57607b:c.instructions+=3;goto B57607b;
case 0x57607e:c.instructions+=2;goto B57607e;
case 0x576080:c.instructions+=1;goto B576080;
case 0x576082:goto L576082;
case 0x576083:goto L576083;
case 0x576084:goto L576084;
case 0x576085:c.instructions+=1;goto B576085;
case 0x576090:goto L576090;
case 0x576095:c.instructions+=3;goto B576095;
case 0x57609b:c.instructions+=2;goto B57609b;
case 0x57609d:c.instructions+=1;goto B57609d;
case 0x5760a0:goto L5760a0;
case 0x5760a1:c.instructions+=4;goto B5760a1;
case 0x5760a3:c.instructions+=3;goto B5760a3;
case 0x5760a6:c.instructions+=2;goto B5760a6;
case 0x5760a9:c.instructions+=1;goto B5760a9;
case 0x5760ab:goto L5760ab;
case 0x5760ae:c.instructions+=1;goto B5760ae;
case 0x5760b0:goto L5760b0;
case 0x5760b3:c.instructions+=1;goto B5760b3;
case 0x5760b5:goto L5760b5;
case 0x5760ba:c.instructions+=3;goto B5760ba;
case 0x5760bc:c.instructions+=2;goto B5760bc;
case 0x5760c6:c.instructions+=1;goto B5760c6;
case 0x5760c8:goto L5760c8;
case 0x5760cd:c.instructions+=1;goto B5760cd;
case 0x5760d2:goto L5760d2;
case 0x5760d4:c.instructions+=1;goto B5760d4;
case 0x5760d6:goto L5760d6;
case 0x5760db:c.instructions+=2;goto B5760db;
case 0x5760e0:c.instructions+=1;goto B5760e0;
case 0x5760e5:goto L5760e5;
case 0x5760e6:c.instructions+=1;goto B5760e6;
case 0x5760e9:goto L5760e9;
case 0x5760ee:c.instructions+=3;goto B5760ee;
case 0x5760f0:c.instructions+=2;goto B5760f0;
case 0x5760fa:c.instructions+=1;goto B5760fa;
case 0x5760fc:goto L5760fc;
case 0x576101:c.instructions+=1;goto B576101;
case 0x576106:goto L576106;
case 0x576108:c.instructions+=1;goto B576108;
case 0x57610a:goto L57610a;
case 0x57610f:c.instructions+=2;goto B57610f;
case 0x576114:c.instructions+=1;goto B576114;
case 0x576119:goto L576119;
case 0x57611a:c.instructions+=1;goto B57611a;
case 0x57611d:goto L57611d;
case 0x576127:goto L576127;
case 0x576128:c.instructions+=1;goto B576128;
case 0x576130:goto L576130;
case 0x576134:c.instructions+=3;goto B576134;
case 0x576137:c.instructions+=2;goto B576137;
case 0x576139:c.instructions+=1;goto B576139;
case 0x57613b:goto L57613b;
case 0x57613d:c.instructions+=2;goto B57613d;
case 0x576140:c.instructions+=1;goto B576140;
case 0x576141:goto L576141;
case 0x576142:c.instructions+=9;goto B576142;
case 0x576146:c.instructions+=8;goto B576146;
case 0x576147:c.instructions+=7;goto B576147;
case 0x57614b:c.instructions+=6;goto B57614b;
case 0x57614c:c.instructions+=5;goto B57614c;
case 0x57614d:c.instructions+=4;goto B57614d;
case 0x57614f:c.instructions+=3;goto B57614f;
case 0x576151:c.instructions+=2;goto B576151;
case 0x576153:c.instructions+=1;goto B576153;
case 0x576159:goto L576159;
case 0x57615e:c.instructions+=4;goto B57615e;
case 0x576160:c.instructions+=3;goto B576160;
case 0x576162:c.instructions+=2;goto B576162;
case 0x576166:c.instructions+=1;goto B576166;
case 0x576168:goto L576168;
case 0x57616b:c.instructions+=2;goto B57616b;
case 0x57616f:c.instructions+=1;goto B57616f;
case 0x576171:goto L576171;
case 0x576176:goto L576176;
case 0x576179:c.instructions+=2;goto B576179;
case 0x57617b:c.instructions+=1;goto B57617b;
case 0x57617d:goto L57617d;
case 0x576181:c.instructions+=2;goto B576181;
case 0x576185:c.instructions+=1;goto B576185;
case 0x576187:goto L576187;
case 0x57618c:goto L57618c;
case 0x57618d:c.instructions+=2;goto B57618d;
case 0x57618f:c.instructions+=1;goto B57618f;
case 0x576191:goto L576191;
case 0x576195:c.instructions+=2;goto B576195;
case 0x576199:c.instructions+=1;goto B576199;
case 0x57619b:goto L57619b;
case 0x5761a0:goto L5761a0;
case 0x5761a3:c.instructions+=2;goto B5761a3;
case 0x5761a5:c.instructions+=1;goto B5761a5;
case 0x5761ab:goto L5761ab;
case 0x5761af:c.instructions+=5;goto B5761af;
case 0x5761b3:c.instructions+=4;goto B5761b3;
case 0x5761b6:c.instructions+=3;goto B5761b6;
case 0x5761b8:c.instructions+=2;goto B5761b8;
case 0x5761ba:c.instructions+=1;goto B5761ba;
case 0x5761bc:goto L5761bc;
case 0x5761c1:c.instructions+=16;goto B5761c1;
case 0x5761c3:c.instructions+=15;goto B5761c3;
case 0x5761c6:c.instructions+=14;goto B5761c6;
case 0x5761cc:c.instructions+=13;goto B5761cc;
case 0x5761ce:c.instructions+=12;goto B5761ce;
case 0x5761d3:c.instructions+=11;goto B5761d3;
case 0x5761d6:c.instructions+=10;goto B5761d6;
case 0x5761d9:c.instructions+=9;goto B5761d9;
case 0x5761db:c.instructions+=8;goto B5761db;
case 0x5761de:c.instructions+=7;goto B5761de;
case 0x5761e0:c.instructions+=6;goto B5761e0;
case 0x5761e6:c.instructions+=5;goto B5761e6;
case 0x5761e9:c.instructions+=4;goto B5761e9;
case 0x5761eb:c.instructions+=3;goto B5761eb;
case 0x5761ef:c.instructions+=2;goto B5761ef;
case 0x5761f3:c.instructions+=1;goto B5761f3;
case 0x5761f5:goto L5761f5;
case 0x5761f7:c.instructions+=1;goto B5761f7;
case 0x5761f9:goto L5761f9;
case 0x5761fc:c.instructions+=5;goto B5761fc;
case 0x5761ff:c.instructions+=4;goto B5761ff;
case 0x576202:c.instructions+=3;goto B576202;
case 0x576205:c.instructions+=2;goto B576205;
case 0x576207:c.instructions+=1;goto B576207;
case 0x57620d:goto L57620d;
case 0x576210:c.instructions+=3;goto B576210;
case 0x576212:c.instructions+=2;goto B576212;
case 0x576216:c.instructions+=1;goto B576216;
case 0x576218:goto L576218;
case 0x57621a:c.instructions+=1;goto B57621a;
case 0x57621c:goto L57621c;
case 0x57621f:c.instructions+=1;goto B57621f;
case 0x576225:goto L576225;
case 0x576229:goto L576229;
case 0x57622d:goto L57622d;
case 0x576230:c.instructions+=2;goto B576230;
case 0x576232:c.instructions+=1;goto B576232;
case 0x576238:goto L576238;
case 0x57623d:c.instructions+=1;goto B57623d;
case 0x57623f:goto L57623f;
case 0x576241:c.instructions+=1;goto B576241;
case 0x576243:goto L576243;
case 0x576247:c.instructions+=1;goto B576247;
case 0x576249:goto L576249;
case 0x57624d:goto L57624d;
case 0x57624e:goto L57624e;
case 0x576250:c.instructions+=6;goto B576250;
case 0x576251:c.instructions+=5;goto B576251;
case 0x576252:c.instructions+=4;goto B576252;
case 0x576253:c.instructions+=3;goto B576253;
case 0x576254:c.instructions+=2;goto B576254;
case 0x576257:c.instructions+=1;goto B576257;
case 0x576260:goto L576260;
case 0x576263:c.instructions+=5;goto B576263;
case 0x576264:c.instructions+=4;goto B576264;
case 0x576268:c.instructions+=3;goto B576268;
case 0x57626a:c.instructions+=2;goto B57626a;
case 0x57626c:c.instructions+=1;goto B57626c;
case 0x57626e:goto L57626e;
case 0x576272:c.instructions+=3;goto B576272;
case 0x576274:c.instructions+=2;goto B576274;
case 0x576278:c.instructions+=1;goto B576278;
case 0x57627a:goto L57627a;
case 0x57627c:c.instructions+=3;goto B57627c;
case 0x57627d:c.instructions+=2;goto B57627d;
case 0x576280:c.instructions+=1;goto B576280;
case 0x576281:goto L576281;
case 0x576283:c.instructions+=4;goto B576283;
case 0x576284:c.instructions+=3;goto B576284;
case 0x576285:c.instructions+=2;goto B576285;
case 0x576286:c.instructions+=1;goto B576286;
case 0x57628c:goto L57628c;
case 0x576290:goto L576290;
case 0x576293:c.instructions+=12;goto B576293;
case 0x576297:c.instructions+=11;goto B576297;
case 0x576298:c.instructions+=10;goto B576298;
case 0x57629c:c.instructions+=9;goto B57629c;
case 0x57629d:c.instructions+=8;goto B57629d;
case 0x57629e:c.instructions+=7;goto B57629e;
case 0x5762a1:c.instructions+=6;goto B5762a1;
case 0x5762a5:c.instructions+=5;goto B5762a5;
case 0x5762a8:c.instructions+=4;goto B5762a8;
case 0x5762ad:c.instructions+=3;goto B5762ad;
case 0x5762ae:c.instructions+=2;goto B5762ae;
case 0x5762b5:c.instructions+=1;goto B5762b5;
case 0x5762b7:goto L5762b7;
case 0x5762ba:c.instructions+=1;goto B5762ba;
case 0x5762c0:goto L5762c0;
case 0x5762c3:c.instructions+=5;goto B5762c3;
case 0x5762c7:c.instructions+=4;goto B5762c7;
case 0x5762ce:c.instructions+=3;goto B5762ce;
case 0x5762d0:c.instructions+=2;goto B5762d0;
case 0x5762d4:c.instructions+=1;goto B5762d4;
case 0x5762d6:goto L5762d6;
case 0x5762d8:c.instructions+=1;goto B5762d8;
case 0x5762de:goto L5762de;
case 0x5762e2:c.instructions+=4;goto B5762e2;
case 0x5762e5:c.instructions+=3;goto B5762e5;
case 0x5762ec:c.instructions+=2;goto B5762ec;
case 0x5762f0:c.instructions+=1;goto B5762f0;
case 0x5762f2:goto L5762f2;
case 0x5762f4:c.instructions+=1;goto B5762f4;
case 0x5762fa:goto L5762fa;
case 0x5762fd:c.instructions+=3;goto B5762fd;
case 0x576304:c.instructions+=2;goto B576304;
case 0x576308:c.instructions+=1;goto B576308;
case 0x57630a:goto L57630a;
case 0x57630d:c.instructions+=1;goto B57630d;
case 0x576313:goto L576313;
case 0x576315:c.instructions+=1;goto B576315;
case 0x576317:goto L576317;
case 0x57631c:c.instructions+=1;goto B57631c;
case 0x57631e:goto L57631e;
case 0x576320:c.instructions+=4;goto B576320;
case 0x576323:c.instructions+=3;goto B576323;
case 0x576326:c.instructions+=2;goto B576326;
case 0x576329:c.instructions+=1;goto B576329;
case 0x57632b:goto L57632b;
case 0x57632f:c.instructions+=3;goto B57632f;
case 0x576331:c.instructions+=2;goto B576331;
case 0x576335:c.instructions+=1;goto B576335;
case 0x576337:goto L576337;
case 0x57633a:c.instructions+=2;goto B57633a;
case 0x57633e:c.instructions+=1;goto B57633e;
case 0x576340:goto L576340;
case 0x576343:c.instructions+=1;goto B576343;
case 0x576345:goto L576345;
case 0x57634c:c.instructions+=6;goto B57634c;
case 0x576350:c.instructions+=5;goto B576350;
case 0x576353:c.instructions+=4;goto B576353;
case 0x576356:c.instructions+=3;goto B576356;
case 0x576358:c.instructions+=2;goto B576358;
case 0x57635c:c.instructions+=1;goto B57635c;
case 0x57635f:goto L57635f;
case 0x576362:c.instructions+=1;goto B576362;
case 0x576364:goto L576364;
case 0x576368:c.instructions+=8;goto B576368;
case 0x57636f:c.instructions+=7;goto B57636f;
case 0x576373:c.instructions+=6;goto B576373;
case 0x57637a:c.instructions+=5;goto B57637a;
case 0x57637d:c.instructions+=4;goto B57637d;
case 0x576380:c.instructions+=3;goto B576380;
case 0x576382:c.instructions+=2;goto B576382;
case 0x576386:c.instructions+=1;goto B576386;
case 0x57638a:goto L57638a;
case 0x57638d:c.instructions+=1;goto B57638d;
case 0x57638f:goto L57638f;
case 0x576393:c.instructions+=5;goto B576393;
case 0x57639a:c.instructions+=4;goto B57639a;
case 0x57639e:c.instructions+=3;goto B57639e;
case 0x5763a1:c.instructions+=2;goto B5763a1;
case 0x5763a8:c.instructions+=1;goto B5763a8;
case 0x5763ac:goto L5763ac;
case 0x5763ae:c.instructions+=3;goto B5763ae;
case 0x5763b2:c.instructions+=2;goto B5763b2;
case 0x5763b6:c.instructions+=1;goto B5763b6;
case 0x5763bc:goto L5763bc;
case 0x5763c0:c.instructions+=6;goto B5763c0;
case 0x5763c1:c.instructions+=5;goto B5763c1;
case 0x5763c2:c.instructions+=4;goto B5763c2;
case 0x5763c3:c.instructions+=3;goto B5763c3;
case 0x5763c4:c.instructions+=2;goto B5763c4;
case 0x5763c7:c.instructions+=1;goto B5763c7;
case 0x5763c8:goto L5763c8;
case 0x5763c9:c.instructions+=6;goto B5763c9;
case 0x5763ca:c.instructions+=5;goto B5763ca;
case 0x5763cb:c.instructions+=4;goto B5763cb;
case 0x5763cd:c.instructions+=3;goto B5763cd;
case 0x5763ce:c.instructions+=2;goto B5763ce;
case 0x5763d1:c.instructions+=1;goto B5763d1;
case 0x5763e0:goto L5763e0;
case 0x5763e2:c.instructions+=9;goto B5763e2;
case 0x5763e3:c.instructions+=8;goto B5763e3;
case 0x5763e5:c.instructions+=7;goto B5763e5;
case 0x5763e7:c.instructions+=6;goto B5763e7;
case 0x5763ea:c.instructions+=5;goto B5763ea;
case 0x5763ed:c.instructions+=4;goto B5763ed;
case 0x5763f3:c.instructions+=3;goto B5763f3;
case 0x5763f6:c.instructions+=2;goto B5763f6;
case 0x5763f9:c.instructions+=1;goto B5763f9;
case 0x5763fe:goto L5763fe;
case 0x576400:c.instructions+=2;goto B576400;
case 0x576401:c.instructions+=1;goto B576401;
case 0x576410:goto L576410;
case 0x576411:c.instructions+=4;goto B576411;
case 0x576413:c.instructions+=3;goto B576413;
case 0x576416:c.instructions+=2;goto B576416;
case 0x576418:c.instructions+=1;goto B576418;
case 0x57641a:goto L57641a;
case 0x57641b:c.instructions+=1;goto B57641b;
case 0x576420:goto L576420;
case 0x576423:c.instructions+=1;goto B576423;
case 0x57642a:goto L57642a;
case 0x57642b:c.instructions+=1;goto B57642b;
case 0x576430:goto L576430;
case 0x576431:c.instructions+=3;goto B576431;
case 0x576432:c.instructions+=2;goto B576432;
case 0x576434:c.instructions+=1;goto B576434;
case 0x576439:goto L576439;
case 0x57643b:c.instructions+=4;goto B57643b;
case 0x57643e:c.instructions+=3;goto B57643e;
case 0x57643f:c.instructions+=2;goto B57643f;
case 0x576440:c.instructions+=1;goto B576440;
case 0x576445:goto L576445;
case 0x57644b:c.instructions+=7;goto B57644b;
case 0x57644e:c.instructions+=6;goto B57644e;
case 0x576451:c.instructions+=5;goto B576451;
case 0x576454:c.instructions+=4;goto B576454;
case 0x576455:c.instructions+=3;goto B576455;
case 0x576458:c.instructions+=2;goto B576458;
case 0x576459:c.instructions+=1;goto B576459;
case 0x576460:goto L576460;
case 0x576461:c.instructions+=4;goto B576461;
case 0x576463:c.instructions+=3;goto B576463;
case 0x576466:c.instructions+=2;goto B576466;
case 0x576468:c.instructions+=1;goto B576468;
case 0x57646a:goto L57646a;
case 0x57646d:c.instructions+=2;goto B57646d;
case 0x57646f:c.instructions+=1;goto B57646f;
case 0x576471:goto L576471;
case 0x576474:c.instructions+=2;goto B576474;
case 0x576476:c.instructions+=1;goto B576476;
case 0x576478:goto L576478;
case 0x57647d:goto L57647d;
case 0x576482:goto L576482;
case 0x576484:c.instructions+=4;goto B576484;
case 0x576487:c.instructions+=3;goto B576487;
case 0x57648b:c.instructions+=2;goto B57648b;
case 0x57648e:c.instructions+=1;goto B57648e;
case 0x576490:goto L576490;
case 0x576493:c.instructions+=4;goto B576493;
case 0x576496:c.instructions+=3;goto B576496;
case 0x576497:c.instructions+=2;goto B576497;
case 0x576498:c.instructions+=1;goto B576498;
case 0x57649d:goto L57649d;
case 0x57649f:c.instructions+=3;goto B57649f;
case 0x5764a2:c.instructions+=2;goto B5764a2;
case 0x5764a3:c.instructions+=1;goto B5764a3;
case 0x5764a5:goto L5764a5;
case 0x5764a6:c.instructions+=1;goto B5764a6;
case 0x5764b0:goto L5764b0;
case 0x5764b1:c.instructions+=3;goto B5764b1;
case 0x5764b7:c.instructions+=2;goto B5764b7;
case 0x5764b9:c.instructions+=1;goto B5764b9;
case 0x5764bb:goto L5764bb;
case 0x5764c0:goto L5764c0;
case 0x5764c3:goto L5764c3;
case 0x5764c4:c.instructions+=1;goto B5764c4;
case 0x5764d0:goto L5764d0;
case 0x5764d1:c.instructions+=9;goto B5764d1;
case 0x5764d5:c.instructions+=8;goto B5764d5;
case 0x5764d6:c.instructions+=7;goto B5764d6;
case 0x5764d8:c.instructions+=6;goto B5764d8;
case 0x5764db:c.instructions+=5;goto B5764db;
case 0x5764dc:c.instructions+=4;goto B5764dc;
case 0x5764de:c.instructions+=3;goto B5764de;
case 0x5764e1:c.instructions+=2;goto B5764e1;
case 0x5764e5:c.instructions+=1;goto B5764e5;
case 0x5764ea:goto L5764ea;
case 0x5764ec:c.instructions+=3;goto B5764ec;
case 0x5764ee:c.instructions+=2;goto B5764ee;
case 0x5764f2:c.instructions+=1;goto B5764f2;
case 0x5764f4:goto L5764f4;
case 0x5764f8:c.instructions+=4;goto B5764f8;
case 0x5764fe:c.instructions+=3;goto B5764fe;
case 0x576500:c.instructions+=2;goto B576500;
case 0x576503:c.instructions+=1;goto B576503;
case 0x576505:goto L576505;
case 0x576508:c.instructions+=2;goto B576508;
case 0x57650a:c.instructions+=1;goto B57650a;
case 0x57650c:goto L57650c;
case 0x57650f:c.instructions+=5;goto B57650f;
case 0x576513:c.instructions+=4;goto B576513;
case 0x576514:c.instructions+=3;goto B576514;
case 0x576515:c.instructions+=2;goto B576515;
case 0x576516:c.instructions+=1;goto B576516;
case 0x576519:goto L576519;
case 0x57651d:c.instructions+=4;goto B57651d;
case 0x576521:c.instructions+=3;goto B576521;
case 0x576523:c.instructions+=2;goto B576523;
case 0x576526:c.instructions+=1;goto B576526;
case 0x576528:goto L576528;
case 0x57652e:goto L57652e;
case 0x576532:c.instructions+=12;goto B576532;
case 0x576535:c.instructions+=11;goto B576535;
case 0x57653b:c.instructions+=10;goto B57653b;
case 0x57653e:c.instructions+=9;goto B57653e;
case 0x576540:c.instructions+=8;goto B576540;
case 0x576541:c.instructions+=7;goto B576541;
case 0x576542:c.instructions+=6;goto B576542;
case 0x576544:c.instructions+=5;goto B576544;
case 0x576546:c.instructions+=4;goto B576546;
case 0x576549:c.instructions+=3;goto B576549;
case 0x57654b:c.instructions+=2;goto B57654b;
case 0x57654c:c.instructions+=1;goto B57654c;
case 0x57654f:goto L57654f;
case 0x576552:c.instructions+=5;goto B576552;
case 0x576554:c.instructions+=4;goto B576554;
case 0x576555:c.instructions+=3;goto B576555;
case 0x576556:c.instructions+=2;goto B576556;
case 0x576557:c.instructions+=1;goto B576557;
case 0x576560:goto L576560;
case 0x576561:c.instructions+=9;goto B576561;
case 0x576565:c.instructions+=8;goto B576565;
case 0x576566:c.instructions+=7;goto B576566;
case 0x576569:c.instructions+=6;goto B576569;
case 0x57656c:c.instructions+=5;goto B57656c;
case 0x57656e:c.instructions+=4;goto B57656e;
case 0x576574:c.instructions+=3;goto B576574;
case 0x576576:c.instructions+=2;goto B576576;
case 0x576579:c.instructions+=1;goto B576579;
case 0x57657b:goto L57657b;
case 0x57657e:c.instructions+=3;goto B57657e;
case 0x57657f:c.instructions+=2;goto B57657f;
case 0x576580:c.instructions+=1;goto B576580;
case 0x576583:goto L576583;
case 0x576586:c.instructions+=7;goto B576586;
case 0x576587:c.instructions+=6;goto B576587;
case 0x57658b:c.instructions+=5;goto B57658b;
case 0x57658c:c.instructions+=4;goto B57658c;
case 0x57658d:c.instructions+=3;goto B57658d;
case 0x57658f:c.instructions+=2;goto B57658f;
case 0x576592:c.instructions+=1;goto B576592;
case 0x576594:goto L576594;
case 0x576599:c.instructions+=1;goto B576599;
case 0x57659b:goto L57659b;
case 0x57659d:goto L57659d;
case 0x57659f:c.instructions+=4;goto B57659f;
case 0x5765a4:c.instructions+=3;goto B5765a4;
case 0x5765a6:c.instructions+=2;goto B5765a6;
case 0x5765aa:c.instructions+=1;goto B5765aa;
case 0x5765ac:goto L5765ac;
case 0x5765af:c.instructions+=1;goto B5765af;
case 0x5765b0:goto L5765b0;
case 0x5765b4:c.instructions+=6;goto B5765b4;
case 0x5765b6:c.instructions+=5;goto B5765b6;
case 0x5765b8:c.instructions+=4;goto B5765b8;
case 0x5765be:c.instructions+=3;goto B5765be;
case 0x5765c0:c.instructions+=2;goto B5765c0;
case 0x5765c3:c.instructions+=1;goto B5765c3;
case 0x5765c5:goto L5765c5;
case 0x5765c7:c.instructions+=4;goto B5765c7;
case 0x5765cb:c.instructions+=3;goto B5765cb;
case 0x5765cd:c.instructions+=2;goto B5765cd;
case 0x5765d0:c.instructions+=1;goto B5765d0;
case 0x5765d2:goto L5765d2;
case 0x5765d7:c.instructions+=1;goto B5765d7;
case 0x5765d9:goto L5765d9;
case 0x5765db:goto L5765db;
case 0x5765dd:c.instructions+=1;goto B5765dd;
case 0x5765df:goto L5765df;
case 0x5765e0:c.instructions+=4;goto B5765e0;
case 0x5765e3:c.instructions+=3;goto B5765e3;
case 0x5765e5:c.instructions+=2;goto B5765e5;
case 0x5765e7:c.instructions+=1;goto B5765e7;
case 0x5765e9:goto L5765e9;
case 0x5765ed:goto L5765ed;
case 0x5765ee:c.instructions+=10;goto B5765ee;
case 0x5765f2:c.instructions+=9;goto B5765f2;
case 0x5765f6:c.instructions+=8;goto B5765f6;
case 0x5765f7:c.instructions+=7;goto B5765f7;
case 0x5765f8:c.instructions+=6;goto B5765f8;
case 0x5765f9:c.instructions+=5;goto B5765f9;
case 0x5765fc:c.instructions+=4;goto B5765fc;
case 0x5765fd:c.instructions+=3;goto B5765fd;
case 0x576600:c.instructions+=2;goto B576600;
case 0x576601:c.instructions+=1;goto B576601;
case 0x576604:goto L576604;
case 0x576608:c.instructions+=9;goto B576608;
case 0x57660c:c.instructions+=8;goto B57660c;
case 0x57660d:c.instructions+=7;goto B57660d;
case 0x57660e:c.instructions+=6;goto B57660e;
case 0x57660f:c.instructions+=5;goto B57660f;
case 0x576612:c.instructions+=4;goto B576612;
case 0x576613:c.instructions+=3;goto B576613;
case 0x576616:c.instructions+=2;goto B576616;
case 0x576617:c.instructions+=1;goto B576617;
case 0x57661a:goto L57661a;
case 0x57661e:c.instructions+=17;goto B57661e;
case 0x576622:c.instructions+=16;goto B576622;
case 0x576624:c.instructions+=15;goto B576624;
case 0x576628:c.instructions+=14;goto B576628;
case 0x57662c:c.instructions+=13;goto B57662c;
case 0x57662d:c.instructions+=12;goto B57662d;
case 0x57662f:c.instructions+=11;goto B57662f;
case 0x576633:c.instructions+=10;goto B576633;
case 0x576634:c.instructions+=9;goto B576634;
case 0x576636:c.instructions+=8;goto B576636;
case 0x576637:c.instructions+=7;goto B576637;
case 0x576638:c.instructions+=6;goto B576638;
case 0x576639:c.instructions+=5;goto B576639;
case 0x57663d:c.instructions+=4;goto B57663d;
case 0x576640:c.instructions+=3;goto B576640;
case 0x576643:c.instructions+=2;goto B576643;
case 0x576644:c.instructions+=1;goto B576644;
case 0x576650:goto L576650;
case 0x576654:c.instructions+=16;goto B576654;
case 0x576657:c.instructions+=15;goto B576657;
case 0x576658:c.instructions+=14;goto B576658;
case 0x57665c:c.instructions+=13;goto B57665c;
case 0x576660:c.instructions+=12;goto B576660;
case 0x576662:c.instructions+=11;goto B576662;
case 0x576666:c.instructions+=10;goto B576666;
case 0x576668:c.instructions+=9;goto B576668;
case 0x57666c:c.instructions+=8;goto B57666c;
case 0x57666f:c.instructions+=7;goto B57666f;
case 0x576675:c.instructions+=6;goto B576675;
case 0x576679:c.instructions+=5;goto B576679;
case 0x57667c:c.instructions+=4;goto B57667c;
case 0x57667d:c.instructions+=3;goto B57667d;
case 0x57667e:c.instructions+=2;goto B57667e;
case 0x57667f:c.instructions+=1;goto B57667f;
case 0x576684:goto L576684;
case 0x576687:c.instructions+=1;goto B576687;
case 0x576690:goto L576690;
case 0x576694:c.instructions+=20;goto B576694;
case 0x576697:c.instructions+=19;goto B576697;
case 0x576698:c.instructions+=18;goto B576698;
case 0x57669b:c.instructions+=17;goto B57669b;
case 0x57669f:c.instructions+=16;goto B57669f;
case 0x5766a3:c.instructions+=15;goto B5766a3;
case 0x5766a5:c.instructions+=14;goto B5766a5;
case 0x5766a9:c.instructions+=13;goto B5766a9;
case 0x5766ab:c.instructions+=12;goto B5766ab;
case 0x5766ad:c.instructions+=11;goto B5766ad;
case 0x5766b1:c.instructions+=10;goto B5766b1;
case 0x5766b4:c.instructions+=9;goto B5766b4;
case 0x5766b8:c.instructions+=8;goto B5766b8;
case 0x5766bb:c.instructions+=7;goto B5766bb;
case 0x5766c1:c.instructions+=6;goto B5766c1;
case 0x5766c5:c.instructions+=5;goto B5766c5;
case 0x5766c8:c.instructions+=4;goto B5766c8;
case 0x5766c9:c.instructions+=3;goto B5766c9;
case 0x5766ca:c.instructions+=2;goto B5766ca;
case 0x5766cb:c.instructions+=1;goto B5766cb;
case 0x5766d0:goto L5766d0;
case 0x5766d3:c.instructions+=1;goto B5766d3;
case 0x5766e0:goto L5766e0;
case 0x5766e4:c.instructions+=25;goto B5766e4;
case 0x5766e7:c.instructions+=24;goto B5766e7;
case 0x5766ea:c.instructions+=23;goto B5766ea;
case 0x5766ed:c.instructions+=22;goto B5766ed;
case 0x5766f1:c.instructions+=21;goto B5766f1;
case 0x5766f5:c.instructions+=20;goto B5766f5;
case 0x5766f9:c.instructions+=19;goto B5766f9;
case 0x5766fb:c.instructions+=18;goto B5766fb;
case 0x5766ff:c.instructions+=17;goto B5766ff;
case 0x576700:c.instructions+=16;goto B576700;
case 0x576702:c.instructions+=15;goto B576702;
case 0x576704:c.instructions+=14;goto B576704;
case 0x576708:c.instructions+=13;goto B576708;
case 0x57670b:c.instructions+=12;goto B57670b;
case 0x57670f:c.instructions+=11;goto B57670f;
case 0x576712:c.instructions+=10;goto B576712;
case 0x576716:c.instructions+=9;goto B576716;
case 0x57671a:c.instructions+=8;goto B57671a;
case 0x57671d:c.instructions+=7;goto B57671d;
case 0x576723:c.instructions+=6;goto B576723;
case 0x576727:c.instructions+=5;goto B576727;
case 0x57672a:c.instructions+=4;goto B57672a;
case 0x57672b:c.instructions+=3;goto B57672b;
case 0x57672c:c.instructions+=2;goto B57672c;
case 0x57672d:c.instructions+=1;goto B57672d;
case 0x576732:goto L576732;
case 0x576735:c.instructions+=1;goto B576735;
case 0x576740:goto L576740;
case 0x576746:c.instructions+=10;goto B576746;
case 0x57674a:c.instructions+=9;goto B57674a;
case 0x57674e:c.instructions+=8;goto B57674e;
case 0x576752:c.instructions+=7;goto B576752;
case 0x576756:c.instructions+=6;goto B576756;
case 0x576758:c.instructions+=5;goto B576758;
case 0x57675c:c.instructions+=4;goto B57675c;
case 0x57675e:c.instructions+=3;goto B57675e;
case 0x576760:c.instructions+=2;goto B576760;
case 0x576762:c.instructions+=1;goto B576762;
case 0x576770:goto L576770;
case 0x576774:c.instructions+=5;goto B576774;
case 0x576776:c.instructions+=4;goto B576776;
case 0x57677a:c.instructions+=3;goto B57677a;
case 0x57677c:c.instructions+=2;goto B57677c;
case 0x57677f:c.instructions+=1;goto B57677f;
case 0x576790:goto L576790;
case 0x576791:c.instructions+=5;goto B576791;
case 0x576792:c.instructions+=4;goto B576792;
case 0x576793:c.instructions+=3;goto B576793;
case 0x576796:c.instructions+=2;goto B576796;
case 0x576799:c.instructions+=1;goto B576799;
case 0x57679b:goto L57679b;
case 0x57679d:c.instructions+=5;goto B57679d;
case 0x5767a1:c.instructions+=4;goto B5767a1;
case 0x5767a3:c.instructions+=3;goto B5767a3;
case 0x5767a5:c.instructions+=2;goto B5767a5;
case 0x5767a8:c.instructions+=1;goto B5767a8;
case 0x5767aa:goto L5767aa;
case 0x5767ad:c.instructions+=4;goto B5767ad;
case 0x5767ae:c.instructions+=3;goto B5767ae;
case 0x5767af:c.instructions+=2;goto B5767af;
case 0x5767b0:c.instructions+=1;goto B5767b0;
case 0x5767b3:goto L5767b3;
case 0x5767b7:c.instructions+=4;goto B5767b7;
case 0x5767bb:c.instructions+=3;goto B5767bb;
case 0x5767bd:c.instructions+=2;goto B5767bd;
case 0x5767c0:c.instructions+=1;goto B5767c0;
case 0x5767c2:goto L5767c2;
case 0x5767c6:c.instructions+=4;goto B5767c6;
case 0x5767c7:c.instructions+=3;goto B5767c7;
case 0x5767c8:c.instructions+=2;goto B5767c8;
case 0x5767c9:c.instructions+=1;goto B5767c9;
case 0x5767cc:goto L5767cc;
case 0x5767cf:c.instructions+=3;goto B5767cf;
case 0x5767d1:c.instructions+=2;goto B5767d1;
case 0x5767d3:c.instructions+=1;goto B5767d3;
case 0x5767d5:goto L5767d5;
case 0x5767d7:goto L5767d7;
case 0x5767db:c.instructions+=4;goto B5767db;
case 0x5767dd:c.instructions+=3;goto B5767dd;
case 0x5767df:c.instructions+=2;goto B5767df;
case 0x5767e2:c.instructions+=1;goto B5767e2;
case 0x5767e4:goto L5767e4;
case 0x5767e8:c.instructions+=4;goto B5767e8;
case 0x5767eb:c.instructions+=3;goto B5767eb;
case 0x5767ed:c.instructions+=2;goto B5767ed;
case 0x5767f0:c.instructions+=1;goto B5767f0;
case 0x5767f2:goto L5767f2;
case 0x5767f3:c.instructions+=3;goto B5767f3;
case 0x5767f6:c.instructions+=2;goto B5767f6;
case 0x5767f8:c.instructions+=1;goto B5767f8;
case 0x5767fa:goto L5767fa;
case 0x5767fc:c.instructions+=5;goto B5767fc;
case 0x5767ff:c.instructions+=4;goto B5767ff;
case 0x576800:c.instructions+=3;goto B576800;
case 0x576801:c.instructions+=2;goto B576801;
case 0x576802:c.instructions+=1;goto B576802;
case 0x576805:goto L576805;
case 0x576809:c.instructions+=10;goto B576809;
case 0x57680d:c.instructions+=9;goto B57680d;
case 0x57680f:c.instructions+=8;goto B57680f;
case 0x576813:c.instructions+=7;goto B576813;
case 0x576816:c.instructions+=6;goto B576816;
case 0x576818:c.instructions+=5;goto B576818;
case 0x57681a:c.instructions+=4;goto B57681a;
case 0x576820:c.instructions+=3;goto B576820;
case 0x576822:c.instructions+=2;goto B576822;
case 0x576825:c.instructions+=1;goto B576825;
case 0x576827:goto L576827;
case 0x57682b:c.instructions+=10;goto B57682b;
case 0x57682c:c.instructions+=9;goto B57682c;
case 0x57682f:c.instructions+=8;goto B57682f;
case 0x576830:c.instructions+=7;goto B576830;
case 0x576831:c.instructions+=6;goto B576831;
case 0x576833:c.instructions+=5;goto B576833;
case 0x576835:c.instructions+=4;goto B576835;
case 0x576837:c.instructions+=3;goto B576837;
case 0x576839:c.instructions+=2;goto B576839;
case 0x57683b:c.instructions+=1;goto B57683b;
case 0x57683e:goto L57683e;
case 0x576840:c.instructions+=6;goto B576840;
case 0x576841:c.instructions+=5;goto B576841;
case 0x576847:c.instructions+=4;goto B576847;
case 0x576848:c.instructions+=3;goto B576848;
case 0x576849:c.instructions+=2;goto B576849;
case 0x57684b:c.instructions+=1;goto B57684b;
case 0x576850:goto L576850;
case 0x576854:c.instructions+=9;goto B576854;
case 0x576856:c.instructions+=8;goto B576856;
case 0x57685a:c.instructions+=7;goto B57685a;
case 0x57685d:c.instructions+=6;goto B57685d;
case 0x57685f:c.instructions+=5;goto B57685f;
case 0x576865:c.instructions+=4;goto B576865;
case 0x576868:c.instructions+=3;goto B576868;
case 0x57686b:c.instructions+=2;goto B57686b;
case 0x57686e:c.instructions+=1;goto B57686e;
case 0x576880:goto L576880;
case 0x576882:c.instructions+=9;goto B576882;
case 0x576884:c.instructions+=8;goto B576884;
case 0x576888:c.instructions+=7;goto B576888;
case 0x57688b:c.instructions+=6;goto B57688b;
case 0x57688e:c.instructions+=5;goto B57688e;
case 0x576891:c.instructions+=4;goto B576891;
case 0x576897:c.instructions+=3;goto B576897;
case 0x57689a:c.instructions+=2;goto B57689a;
case 0x57689d:c.instructions+=1;goto B57689d;
case 0x5768a0:goto L5768a0;
case 0x5768a1:c.instructions+=9;goto B5768a1;
case 0x5768a5:c.instructions+=8;goto B5768a5;
case 0x5768a8:c.instructions+=7;goto B5768a8;
case 0x5768a9:c.instructions+=6;goto B5768a9;
case 0x5768ab:c.instructions+=5;goto B5768ab;
case 0x5768ae:c.instructions+=4;goto B5768ae;
case 0x5768af:c.instructions+=3;goto B5768af;
case 0x5768b2:c.instructions+=2;goto B5768b2;
case 0x5768b5:c.instructions+=1;goto B5768b5;
case 0x5768b7:goto L5768b7;
case 0x5768be:c.instructions+=2;goto B5768be;
case 0x5768bf:c.instructions+=1;goto B5768bf;
case 0x5768c4:goto L5768c4;
case 0x5768c7:c.instructions+=1;goto B5768c7;
case 0x5768ca:goto L5768ca;
case 0x5768cd:c.instructions+=2;goto B5768cd;
case 0x5768cf:c.instructions+=1;goto B5768cf;
case 0x5768d1:goto L5768d1;
case 0x5768d3:goto L5768d3;
case 0x5768d4:c.instructions+=3;goto B5768d4;
case 0x5768d5:c.instructions+=2;goto B5768d5;
case 0x5768d6:c.instructions+=1;goto B5768d6;
case 0x5768e0:goto L5768e0;
case 0x5768e1:c.instructions+=6;goto B5768e1;
case 0x5768e3:c.instructions+=5;goto B5768e3;
case 0x5768e6:c.instructions+=4;goto B5768e6;
case 0x5768e9:c.instructions+=3;goto B5768e9;
case 0x5768eb:c.instructions+=2;goto B5768eb;
case 0x5768f1:c.instructions+=1;goto B5768f1;
case 0x5768f3:goto L5768f3;
case 0x5768f4:c.instructions+=1;goto B5768f4;
case 0x5768f9:goto L5768f9;
case 0x5768fc:goto L5768fc;
case 0x576902:c.instructions+=2;goto B576902;
case 0x576903:c.instructions+=1;goto B576903;
case 0x576910:goto L576910;
case 0x576911:c.instructions+=7;goto B576911;
case 0x576914:c.instructions+=6;goto B576914;
case 0x576917:c.instructions+=5;goto B576917;
case 0x57691d:c.instructions+=4;goto B57691d;
case 0x57691f:c.instructions+=3;goto B57691f;
case 0x576921:c.instructions+=2;goto B576921;
case 0x576924:c.instructions+=1;goto B576924;
case 0x576926:goto L576926;
case 0x576929:c.instructions+=2;goto B576929;
case 0x57692a:c.instructions+=1;goto B57692a;
case 0x576930:goto L576930;
case 0x576932:c.instructions+=7;goto B576932;
case 0x576933:c.instructions+=6;goto B576933;
case 0x576936:c.instructions+=5;goto B576936;
case 0x576939:c.instructions+=4;goto B576939;
case 0x57693c:c.instructions+=3;goto B57693c;
case 0x576940:c.instructions+=2;goto B576940;
case 0x576942:c.instructions+=1;goto B576942;
case 0x576944:goto L576944;
case 0x576945:goto L576945;
case 0x576949:c.instructions+=3;goto B576949;
case 0x57694c:c.instructions+=2;goto B57694c;
case 0x576954:c.instructions+=1;goto B576954;
case 0x576956:goto L576956;
case 0x57695a:goto L57695a;
case 0x57695e:c.instructions+=5;goto B57695e;
case 0x576964:c.instructions+=4;goto B576964;
case 0x576967:c.instructions+=3;goto B576967;
case 0x57696a:c.instructions+=2;goto B57696a;
case 0x57696b:c.instructions+=1;goto B57696b;
case 0x576970:goto L576970;
case 0x576973:c.instructions+=2;goto B576973;
case 0x576976:c.instructions+=1;goto B576976;
case 0x576978:goto L576978;
case 0x57697a:c.instructions+=1;goto B57697a;
case 0x57697d:goto L57697d;
case 0x576981:c.instructions+=20;goto B576981;
case 0x576985:c.instructions+=19;goto B576985;
case 0x576988:c.instructions+=18;goto B576988;
case 0x57698b:c.instructions+=17;goto B57698b;
case 0x57698e:c.instructions+=16;goto B57698e;
case 0x576992:c.instructions+=15;goto B576992;
case 0x576995:c.instructions+=14;goto B576995;
case 0x576997:c.instructions+=13;goto B576997;
case 0x57699a:c.instructions+=12;goto B57699a;
case 0x57699c:c.instructions+=11;goto B57699c;
case 0x5769a0:c.instructions+=10;goto B5769a0;
case 0x5769a4:c.instructions+=9;goto B5769a4;
case 0x5769a7:c.instructions+=8;goto B5769a7;
case 0x5769aa:c.instructions+=7;goto B5769aa;
case 0x5769ae:c.instructions+=6;goto B5769ae;
case 0x5769b0:c.instructions+=5;goto B5769b0;
case 0x5769b2:c.instructions+=4;goto B5769b2;
case 0x5769b5:c.instructions+=3;goto B5769b5;
case 0x5769b8:c.instructions+=2;goto B5769b8;
case 0x5769bb:c.instructions+=1;goto B5769bb;
case 0x5769bd:goto L5769bd;
case 0x5769c1:goto L5769c1;
case 0x5769d0:goto L5769d0;
case 0x5769d1:c.instructions+=4;goto B5769d1;
case 0x5769d4:c.instructions+=3;goto B5769d4;
case 0x5769d6:c.instructions+=2;goto B5769d6;
case 0x5769d8:c.instructions+=1;goto B5769d8;
case 0x5769da:goto L5769da;
case 0x5769e0:goto L5769e0;
case 0x5769e3:c.instructions+=6;goto B5769e3;
case 0x5769e7:c.instructions+=5;goto B5769e7;
case 0x5769ea:c.instructions+=4;goto B5769ea;
case 0x5769ee:c.instructions+=3;goto B5769ee;
case 0x5769ef:c.instructions+=2;goto B5769ef;
case 0x5769f1:c.instructions+=1;goto B5769f1;
case 0x5769f3:goto L5769f3;
case 0x5769f7:c.instructions+=7;goto B5769f7;
case 0x5769fb:c.instructions+=6;goto B5769fb;
case 0x5769ff:c.instructions+=5;goto B5769ff;
case 0x576a03:c.instructions+=4;goto B576a03;
case 0x576a07:c.instructions+=3;goto B576a07;
case 0x576a0a:c.instructions+=2;goto B576a0a;
case 0x576a0b:c.instructions+=1;goto B576a0b;
case 0x576a10:goto L576a10;
case 0x576a11:c.instructions+=4;goto B576a11;
case 0x576a14:c.instructions+=3;goto B576a14;
case 0x576a16:c.instructions+=2;goto B576a16;
case 0x576a18:c.instructions+=1;goto B576a18;
case 0x576a1a:goto L576a1a;
case 0x576a20:goto L576a20;
case 0x576a23:c.instructions+=6;goto B576a23;
case 0x576a27:c.instructions+=5;goto B576a27;
case 0x576a2a:c.instructions+=4;goto B576a2a;
case 0x576a2e:c.instructions+=3;goto B576a2e;
case 0x576a2f:c.instructions+=2;goto B576a2f;
case 0x576a31:c.instructions+=1;goto B576a31;
case 0x576a33:goto L576a33;
case 0x576a36:c.instructions+=10;goto B576a36;
case 0x576a39:c.instructions+=9;goto B576a39;
case 0x576a3d:c.instructions+=8;goto B576a3d;
case 0x576a40:c.instructions+=7;goto B576a40;
case 0x576a44:c.instructions+=6;goto B576a44;
case 0x576a48:c.instructions+=5;goto B576a48;
case 0x576a4b:c.instructions+=4;goto B576a4b;
case 0x576a4f:c.instructions+=3;goto B576a4f;
case 0x576a52:c.instructions+=2;goto B576a52;
case 0x576a53:c.instructions+=1;goto B576a53;
case 0x576a60:goto L576a60;
case 0x576a61:c.instructions+=5;goto B576a61;
case 0x576a63:c.instructions+=4;goto B576a63;
case 0x576a66:c.instructions+=3;goto B576a66;
case 0x576a67:c.instructions+=2;goto B576a67;
case 0x576a6d:c.instructions+=1;goto B576a6d;
case 0x576a72:goto L576a72;
case 0x576a75:c.instructions+=5;goto B576a75;
case 0x576a78:c.instructions+=4;goto B576a78;
case 0x576a7b:c.instructions+=3;goto B576a7b;
case 0x576a7d:c.instructions+=2;goto B576a7d;
case 0x576a83:c.instructions+=1;goto B576a83;
case 0x576a85:goto L576a85;
case 0x576a86:c.instructions+=1;goto B576a86;
case 0x576a8b:goto L576a8b;
case 0x576a8e:goto L576a8e;
case 0x576a94:c.instructions+=2;goto B576a94;
case 0x576a95:c.instructions+=1;goto B576a95;
case 0x576aa0:goto L576aa0;
case 0x576aa4:c.instructions+=9;goto B576aa4;
case 0x576aa7:c.instructions+=8;goto B576aa7;
case 0x576aaa:c.instructions+=7;goto B576aaa;
case 0x576aab:c.instructions+=6;goto B576aab;
case 0x576aae:c.instructions+=5;goto B576aae;
case 0x576ab0:c.instructions+=4;goto B576ab0;
case 0x576ab6:c.instructions+=3;goto B576ab6;
case 0x576ab8:c.instructions+=2;goto B576ab8;
case 0x576abb:c.instructions+=1;goto B576abb;
case 0x576abd:goto L576abd;
case 0x576ac0:c.instructions+=5;goto B576ac0;
case 0x576ac3:c.instructions+=4;goto B576ac3;
case 0x576ac9:c.instructions+=3;goto B576ac9;
case 0x576acb:c.instructions+=2;goto B576acb;
case 0x576ace:c.instructions+=1;goto B576ace;
case 0x576ad0:goto L576ad0;
case 0x576ad3:c.instructions+=1;goto B576ad3;
case 0x576ad5:goto L576ad5;
case 0x576ad8:c.instructions+=2;goto B576ad8;
case 0x576ada:c.instructions+=1;goto B576ada;
case 0x576add:goto L576add;
case 0x576ae1:c.instructions+=17;goto B576ae1;
case 0x576ae5:c.instructions+=16;goto B576ae5;
case 0x576ae8:c.instructions+=15;goto B576ae8;
case 0x576aeb:c.instructions+=14;goto B576aeb;
case 0x576aed:c.instructions+=13;goto B576aed;
case 0x576af1:c.instructions+=12;goto B576af1;
case 0x576af5:c.instructions+=11;goto B576af5;
case 0x576af8:c.instructions+=10;goto B576af8;
case 0x576af9:c.instructions+=9;goto B576af9;
case 0x576afc:c.instructions+=8;goto B576afc;
case 0x576aff:c.instructions+=7;goto B576aff;
case 0x576b02:c.instructions+=6;goto B576b02;
case 0x576b06:c.instructions+=5;goto B576b06;
case 0x576b09:c.instructions+=4;goto B576b09;
case 0x576b0c:c.instructions+=3;goto B576b0c;
case 0x576b0e:c.instructions+=2;goto B576b0e;
case 0x576b11:c.instructions+=1;goto B576b11;
case 0x576b13:goto L576b13;
case 0x576b16:c.instructions+=7;goto B576b16;
case 0x576b19:c.instructions+=6;goto B576b19;
case 0x576b1c:c.instructions+=5;goto B576b1c;
case 0x576b1f:c.instructions+=4;goto B576b1f;
case 0x576b25:c.instructions+=3;goto B576b25;
case 0x576b27:c.instructions+=2;goto B576b27;
case 0x576b2a:c.instructions+=1;goto B576b2a;
case 0x576b2c:goto L576b2c;
case 0x576b2f:c.instructions+=9;goto B576b2f;
case 0x576b32:c.instructions+=8;goto B576b32;
case 0x576b35:c.instructions+=7;goto B576b35;
case 0x576b37:c.instructions+=6;goto B576b37;
case 0x576b3a:c.instructions+=5;goto B576b3a;
case 0x576b40:c.instructions+=4;goto B576b40;
case 0x576b43:c.instructions+=3;goto B576b43;
case 0x576b46:c.instructions+=2;goto B576b46;
case 0x576b4d:c.instructions+=1;goto B576b4d;
case 0x576b50:goto L576b50;
case 0x576b53:c.instructions+=5;goto B576b53;
case 0x576b57:c.instructions+=4;goto B576b57;
case 0x576b58:c.instructions+=3;goto B576b58;
case 0x576b5a:c.instructions+=2;goto B576b5a;
case 0x576b5d:c.instructions+=1;goto B576b5d;
case 0x576b5f:goto L576b5f;
case 0x576b66:goto L576b66;
case 0x576b69:c.instructions+=7;goto B576b69;
case 0x576b6d:c.instructions+=6;goto B576b6d;
case 0x576b70:c.instructions+=5;goto B576b70;
case 0x576b73:c.instructions+=4;goto B576b73;
case 0x576b76:c.instructions+=3;goto B576b76;
case 0x576b78:c.instructions+=2;goto B576b78;
case 0x576b7b:c.instructions+=1;goto B576b7b;
case 0x576b7d:goto L576b7d;
case 0x576b81:c.instructions+=10;goto B576b81;
case 0x576b85:c.instructions+=9;goto B576b85;
case 0x576b88:c.instructions+=8;goto B576b88;
case 0x576b8b:c.instructions+=7;goto B576b8b;
case 0x576b8f:c.instructions+=6;goto B576b8f;
case 0x576b91:c.instructions+=5;goto B576b91;
case 0x576b93:c.instructions+=4;goto B576b93;
case 0x576b96:c.instructions+=3;goto B576b96;
case 0x576b99:c.instructions+=2;goto B576b99;
case 0x576b9c:c.instructions+=1;goto B576b9c;
case 0x576b9e:goto L576b9e;
case 0x576ba2:goto L576ba2;
case 0x576bb0:goto L576bb0;
case 0x576bb4:c.instructions+=10;goto B576bb4;
case 0x576bb5:c.instructions+=9;goto B576bb5;
case 0x576bb7:c.instructions+=8;goto B576bb7;
case 0x576bba:c.instructions+=7;goto B576bba;
case 0x576bbe:c.instructions+=6;goto B576bbe;
case 0x576bc4:c.instructions+=5;goto B576bc4;
case 0x576bca:c.instructions+=4;goto B576bca;
case 0x576bce:c.instructions+=3;goto B576bce;
case 0x576bd0:c.instructions+=2;goto B576bd0;
case 0x576bd3:c.instructions+=1;goto B576bd3;
case 0x576bd5:goto L576bd5;
case 0x576bdd:c.instructions+=1;goto B576bdd;
case 0x576bdf:goto L576bdf;
case 0x576be5:c.instructions+=4;goto B576be5;
case 0x576be7:c.instructions+=3;goto B576be7;
case 0x576bed:c.instructions+=2;goto B576bed;
case 0x576bf1:c.instructions+=1;goto B576bf1;
case 0x576bf5:goto L576bf5;
case 0x576bf9:c.instructions+=2;goto B576bf9;
case 0x576bfb:c.instructions+=1;goto B576bfb;
case 0x576bfd:goto L576bfd;
case 0x576bff:c.instructions+=2;goto B576bff;
case 0x576c07:c.instructions+=1;goto B576c07;
case 0x576c09:goto L576c09;
case 0x576c0d:c.instructions+=1;goto B576c0d;
case 0x576c11:goto L576c11;
case 0x576c15:c.instructions+=3;goto B576c15;
case 0x576c16:c.instructions+=2;goto B576c16;
case 0x576c18:c.instructions+=1;goto B576c18;
case 0x576c1d:goto L576c1d;
case 0x576c21:c.instructions+=3;goto B576c21;
case 0x576c22:c.instructions+=2;goto B576c22;
case 0x576c25:c.instructions+=1;goto B576c25;
case 0x576c2a:goto L576c2a;
case 0x576c2e:c.instructions+=3;goto B576c2e;
case 0x576c2f:c.instructions+=2;goto B576c2f;
case 0x576c32:c.instructions+=1;goto B576c32;
case 0x576c37:goto L576c37;
case 0x576c38:c.instructions+=1;goto B576c38;
case 0x576c40:goto L576c40;
case 0x576c44:c.instructions+=4;goto B576c44;
case 0x576c4b:c.instructions+=3;goto B576c4b;
case 0x576c51:c.instructions+=2;goto B576c51;
case 0x576c54:c.instructions+=1;goto B576c54;
case 0x576c60:goto L576c60;
case 0x576c64:c.instructions+=9;goto B576c64;
case 0x576c68:c.instructions+=8;goto B576c68;
case 0x576c6c:c.instructions+=7;goto B576c6c;
case 0x576c70:c.instructions+=6;goto B576c70;
case 0x576c72:c.instructions+=5;goto B576c72;
case 0x576c74:c.instructions+=4;goto B576c74;
case 0x576c78:c.instructions+=3;goto B576c78;
case 0x576c7c:c.instructions+=2;goto B576c7c;
case 0x576c7f:c.instructions+=1;goto B576c7f;
case 0x576c90:goto L576c90;
case 0x576c94:c.instructions+=3;goto B576c94;
case 0x576c96:c.instructions+=2;goto B576c96;
case 0x576c99:c.instructions+=1;goto B576c99;
case 0x576ca0:goto L576ca0;
case 0x576ca5:c.instructions+=1;goto B576ca5;
case 0x576cb0:goto L576cb0;
case 0x576cb6:c.instructions+=3;goto B576cb6;
case 0x576cba:c.instructions+=2;goto B576cba;
case 0x576cc0:c.instructions+=1;goto B576cc0;
case 0x576cd0:goto L576cd0;
case 0x576cd5:c.instructions+=2;goto B576cd5;
case 0x576cda:c.instructions+=1;goto B576cda;
case 0x576ce0:goto L576ce0;
case 0x576ce4:c.instructions+=2;goto B576ce4;
case 0x576cea:c.instructions+=1;goto B576cea;
case 0x576cf0:goto L576cf0;
case 0x576cf5:c.instructions+=10;goto B576cf5;
case 0x576cfa:c.instructions+=9;goto B576cfa;
case 0x576cff:c.instructions+=8;goto B576cff;
case 0x576d01:c.instructions+=7;goto B576d01;
case 0x576d0b:c.instructions+=6;goto B576d0b;
case 0x576d15:c.instructions+=5;goto B576d15;
case 0x576d1a:c.instructions+=4;goto B576d1a;
case 0x576d1f:c.instructions+=3;goto B576d1f;
case 0x576d24:c.instructions+=2;goto B576d24;
case 0x576d29:c.instructions+=1;goto B576d29;
case 0x576d30:goto L576d30;
case 0x576d33:c.instructions+=14;goto B576d33;
case 0x576d37:c.instructions+=13;goto B576d37;
case 0x576d38:c.instructions+=12;goto B576d38;
case 0x576d3c:c.instructions+=11;goto B576d3c;
case 0x576d3d:c.instructions+=10;goto B576d3d;
case 0x576d41:c.instructions+=9;goto B576d41;
case 0x576d42:c.instructions+=8;goto B576d42;
case 0x576d46:c.instructions+=7;goto B576d46;
case 0x576d49:c.instructions+=6;goto B576d49;
case 0x576d4b:c.instructions+=5;goto B576d4b;
case 0x576d4d:c.instructions+=4;goto B576d4d;
case 0x576d4e:c.instructions+=3;goto B576d4e;
case 0x576d52:c.instructions+=2;goto B576d52;
case 0x576d56:c.instructions+=1;goto B576d56;
case 0x576d5c:goto L576d5c;
case 0x576d61:c.instructions+=2;goto B576d61;
case 0x576d69:c.instructions+=1;goto B576d69;
case 0x576d6e:goto L576d6e;
case 0x576d71:c.instructions+=2;goto B576d71;
case 0x576d74:c.instructions+=1;goto B576d74;
case 0x576d76:goto L576d76;
case 0x576d7d:goto L576d7d;
case 0x576d82:c.instructions+=3;goto B576d82;
case 0x576d87:c.instructions+=2;goto B576d87;
case 0x576d8f:c.instructions+=1;goto B576d8f;
case 0x576d91:goto L576d91;
case 0x576d96:c.instructions+=1;goto B576d96;
case 0x576d98:goto L576d98;
case 0x576d9d:c.instructions+=3;goto B576d9d;
case 0x576da2:c.instructions+=2;goto B576da2;
case 0x576daa:c.instructions+=1;goto B576daa;
case 0x576dac:goto L576dac;
case 0x576db1:c.instructions+=1;goto B576db1;
case 0x576db3:goto L576db3;
case 0x576db8:c.instructions+=1;goto B576db8;
case 0x576dba:goto L576dba;
case 0x576dbf:c.instructions+=3;goto B576dbf;
case 0x576dc4:c.instructions+=2;goto B576dc4;
case 0x576dcc:c.instructions+=1;goto B576dcc;
case 0x576dce:goto L576dce;
case 0x576dd3:c.instructions+=1;goto B576dd3;
case 0x576dd5:goto L576dd5;
case 0x576dda:c.instructions+=1;goto B576dda;
case 0x576ddc:goto L576ddc;
case 0x576de1:c.instructions+=1;goto B576de1;
case 0x576de3:goto L576de3;
case 0x576de8:c.instructions+=2;goto B576de8;
case 0x576ded:c.instructions+=1;goto B576ded;
case 0x576def:goto L576def;
case 0x576df4:goto L576df4;
case 0x576df5:c.instructions+=2;goto B576df5;
case 0x576df6:c.instructions+=1;goto B576df6;
case 0x576dfb:goto L576dfb;
case 0x576dfd:c.instructions+=3;goto B576dfd;
case 0x576e00:c.instructions+=2;goto B576e00;
case 0x576e03:c.instructions+=1;goto B576e03;
case 0x576e08:goto L576e08;
case 0x576e0a:c.instructions+=5;goto B576e0a;
case 0x576e0b:c.instructions+=4;goto B576e0b;
case 0x576e10:c.instructions+=3;goto B576e10;
case 0x576e12:c.instructions+=2;goto B576e12;
case 0x576e14:c.instructions+=1;goto B576e14;
case 0x576e16:goto L576e16;
case 0x576e18:c.instructions+=1;goto B576e18;
case 0x576e1a:goto L576e1a;
case 0x576e1d:c.instructions+=1;goto B576e1d;
case 0x576e1f:goto L576e1f;
case 0x576e22:c.instructions+=1;goto B576e22;
case 0x576e24:goto L576e24;
case 0x576e25:c.instructions+=3;goto B576e25;
case 0x576e26:c.instructions+=2;goto B576e26;
case 0x576e28:c.instructions+=1;goto B576e28;
case 0x576e2a:goto L576e2a;
case 0x576e2e:c.instructions+=4;goto B576e2e;
case 0x576e32:c.instructions+=3;goto B576e32;
case 0x576e36:c.instructions+=2;goto B576e36;
case 0x576e3b:c.instructions+=1;goto B576e3b;
case 0x576e40:goto L576e40;
case 0x576e41:c.instructions+=7;goto B576e41;
case 0x576e46:c.instructions+=6;goto B576e46;
case 0x576e48:c.instructions+=5;goto B576e48;
case 0x576e4b:c.instructions+=4;goto B576e4b;
case 0x576e4d:c.instructions+=3;goto B576e4d;
case 0x576e4e:c.instructions+=2;goto B576e4e;
case 0x576e4f:c.instructions+=1;goto B576e4f;
case 0x576e51:goto L576e51;
case 0x576e55:c.instructions+=3;goto B576e55;
case 0x576e59:c.instructions+=2;goto B576e59;
case 0x576e5d:c.instructions+=1;goto B576e5d;
case 0x576e62:goto L576e62;
case 0x576e63:c.instructions+=7;goto B576e63;
case 0x576e68:c.instructions+=6;goto B576e68;
case 0x576e6a:c.instructions+=5;goto B576e6a;
case 0x576e6d:c.instructions+=4;goto B576e6d;
case 0x576e6f:c.instructions+=3;goto B576e6f;
case 0x576e70:c.instructions+=2;goto B576e70;
case 0x576e71:c.instructions+=1;goto B576e71;
case 0x576e73:goto L576e73;
case 0x576e77:c.instructions+=3;goto B576e77;
case 0x576e79:c.instructions+=2;goto B576e79;
case 0x576e7c:c.instructions+=1;goto B576e7c;
case 0x576e7e:goto L576e7e;
case 0x576e80:c.instructions+=1;goto B576e80;
case 0x576e86:goto L576e86;
case 0x576e8b:c.instructions+=1;goto B576e8b;
case 0x576e91:goto L576e91;
case 0x576e92:c.instructions+=1;goto B576e92;
case 0x576e97:goto L576e97;
case 0x576e9b:c.instructions+=4;goto B576e9b;
case 0x576e9c:c.instructions+=3;goto B576e9c;
case 0x576e9d:c.instructions+=2;goto B576e9d;
case 0x576e9f:c.instructions+=1;goto B576e9f;
case 0x576ea4:goto L576ea4;
case 0x576ea8:c.instructions+=3;goto B576ea8;
case 0x576eab:c.instructions+=2;goto B576eab;
case 0x576ead:c.instructions+=1;goto B576ead;
case 0x576eaf:goto L576eaf;
case 0x576eb4:goto L576eb4;
case 0x576eb8:c.instructions+=4;goto B576eb8;
case 0x576eb9:c.instructions+=3;goto B576eb9;
case 0x576ebc:c.instructions+=2;goto B576ebc;
case 0x576ebd:c.instructions+=1;goto B576ebd;
case 0x576ec2:goto L576ec2;
case 0x576ec7:goto L576ec7;
case 0x576ec9:c.instructions+=1;goto B576ec9;
case 0x576ecf:goto L576ecf;
case 0x576ed2:c.instructions+=2;goto B576ed2;
case 0x576ed5:c.instructions+=1;goto B576ed5;
case 0x576ed7:goto L576ed7;
case 0x576ede:goto L576ede;
case 0x576ee3:c.instructions+=1;goto B576ee3;
case 0x576ee5:goto L576ee5;
case 0x576eea:c.instructions+=1;goto B576eea;
case 0x576eec:goto L576eec;
case 0x576ef1:c.instructions+=1;goto B576ef1;
case 0x576ef3:goto L576ef3;
case 0x576ef8:c.instructions+=1;goto B576ef8;
case 0x576efa:goto L576efa;
case 0x576eff:c.instructions+=1;goto B576eff;
case 0x576f01:goto L576f01;
case 0x576f06:c.instructions+=1;goto B576f06;
case 0x576f08:goto L576f08;
case 0x576f0d:c.instructions+=2;goto B576f0d;
case 0x576f12:c.instructions+=1;goto B576f12;
case 0x576f14:goto L576f14;
case 0x576f19:goto L576f19;
case 0x576f1a:c.instructions+=2;goto B576f1a;
case 0x576f1b:c.instructions+=1;goto B576f1b;
case 0x576f20:goto L576f20;
case 0x576f22:c.instructions+=4;goto B576f22;
case 0x576f25:c.instructions+=3;goto B576f25;
case 0x576f28:c.instructions+=2;goto B576f28;
case 0x576f2d:c.instructions+=1;goto B576f2d;
case 0x576f30:goto L576f30;
case 0x576f32:c.instructions+=5;goto B576f32;
case 0x576f33:c.instructions+=4;goto B576f33;
case 0x576f38:c.instructions+=3;goto B576f38;
case 0x576f3a:c.instructions+=2;goto B576f3a;
case 0x576f3c:c.instructions+=1;goto B576f3c;
case 0x576f3e:goto L576f3e;
case 0x576f40:c.instructions+=1;goto B576f40;
case 0x576f42:goto L576f42;
case 0x576f45:c.instructions+=1;goto B576f45;
case 0x576f47:goto L576f47;
case 0x576f4a:c.instructions+=1;goto B576f4a;
case 0x576f4c:goto L576f4c;
case 0x576f4d:c.instructions+=3;goto B576f4d;
case 0x576f4e:c.instructions+=2;goto B576f4e;
case 0x576f50:c.instructions+=1;goto B576f50;
case 0x576f52:goto L576f52;
case 0x576f56:c.instructions+=3;goto B576f56;
case 0x576f59:c.instructions+=2;goto B576f59;
case 0x576f5e:c.instructions+=1;goto B576f5e;
case 0x576f60:goto L576f60;
case 0x576f61:c.instructions+=7;goto B576f61;
case 0x576f66:c.instructions+=6;goto B576f66;
case 0x576f68:c.instructions+=5;goto B576f68;
case 0x576f6b:c.instructions+=4;goto B576f6b;
case 0x576f6d:c.instructions+=3;goto B576f6d;
case 0x576f6e:c.instructions+=2;goto B576f6e;
case 0x576f6f:c.instructions+=1;goto B576f6f;
case 0x576f71:goto L576f71;
case 0x576f75:c.instructions+=3;goto B576f75;
case 0x576f78:c.instructions+=2;goto B576f78;
case 0x576f7d:c.instructions+=1;goto B576f7d;
case 0x576f80:goto L576f80;
case 0x576f81:c.instructions+=7;goto B576f81;
case 0x576f86:c.instructions+=6;goto B576f86;
case 0x576f88:c.instructions+=5;goto B576f88;
case 0x576f8b:c.instructions+=4;goto B576f8b;
case 0x576f8d:c.instructions+=3;goto B576f8d;
case 0x576f8e:c.instructions+=2;goto B576f8e;
case 0x576f8f:c.instructions+=1;goto B576f8f;
case 0x576f91:goto L576f91;
case 0x576f95:c.instructions+=3;goto B576f95;
case 0x576f97:c.instructions+=2;goto B576f97;
case 0x576f9a:c.instructions+=1;goto B576f9a;
case 0x576f9c:goto L576f9c;
case 0x576f9e:c.instructions+=1;goto B576f9e;
case 0x576fa4:goto L576fa4;
case 0x576fa9:c.instructions+=1;goto B576fa9;
case 0x576faf:goto L576faf;
case 0x576fb0:c.instructions+=1;goto B576fb0;
case 0x576fb5:goto L576fb5;
case 0x576fb9:c.instructions+=4;goto B576fb9;
case 0x576fba:c.instructions+=3;goto B576fba;
case 0x576fbb:c.instructions+=2;goto B576fbb;
case 0x576fbd:c.instructions+=1;goto B576fbd;
case 0x576fc2:goto L576fc2;
case 0x576fc6:c.instructions+=3;goto B576fc6;
case 0x576fc9:c.instructions+=2;goto B576fc9;
case 0x576fcb:c.instructions+=1;goto B576fcb;
case 0x576fcd:goto L576fcd;
case 0x576fd2:goto L576fd2;
case 0x576fd6:c.instructions+=4;goto B576fd6;
case 0x576fd7:c.instructions+=3;goto B576fd7;
case 0x576fda:c.instructions+=2;goto B576fda;
case 0x576fdb:c.instructions+=1;goto B576fdb;
case 0x576fe0:goto L576fe0;
case 0x576fe2:c.instructions+=1;goto B576fe2;
case 0x576fe8:goto L576fe8;
case 0x576feb:c.instructions+=1;goto B576feb;
case 0x576fed:goto L576fed;
case 0x576ff0:c.instructions+=1;goto B576ff0;
case 0x576ff2:goto L576ff2;
case 0x576ff7:c.instructions+=1;goto B576ff7;
case 0x576ff9:goto L576ff9;
case 0x576ffe:c.instructions+=1;goto B576ffe;
default:missing_instruction(c.pc);}
B576000:L576000:{c.instructions+=7;NFSU2_TR(0x576000);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576003:{NFSU2_TR(0x576003);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576004:{NFSU2_TR(0x576004);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576005:{NFSU2_TR(0x576005);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B576007:{NFSU2_TR(0x576007);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B576009:{NFSU2_TR(0x576009);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57600a:{NFSU2_TR(0x57600a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L576031;}}
}
B57600c:L57600c:{c.instructions+=5;NFSU2_TR(0x57600c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57600f:{NFSU2_TR(0x57600f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B576013:{NFSU2_TR(0x576013);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B576017:{NFSU2_TR(0x576017);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57601a:{NFSU2_TR(0x57601a);
__builtin_memmove((R+12),(R+12),4);
}
B576020:L576020:{c.instructions+=2;NFSU2_TR(0x576020);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B576023:{NFSU2_TR(0x576023);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576029;}}
}
B576025:L576025:{c.instructions+=2;NFSU2_TR(0x576025);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B576027:{NFSU2_TR(0x576027);
if(r1(R+518)){{goto L576039;}}
}
B576029:L576029:{c.instructions+=4;NFSU2_TR(0x576029);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57602a:{NFSU2_TR(0x57602a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B57602d:{NFSU2_TR(0x57602d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B57602f:{NFSU2_TR(0x57602f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576020u);}goto L576020;}}
}
B576031:L576031:{c.instructions+=5;NFSU2_TR(0x576031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B576032:{NFSU2_TR(0x576032);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576033:{NFSU2_TR(0x576033);
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
B576035:{NFSU2_TR(0x576035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B576036:{NFSU2_TR(0x576036);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576039:L576039:{c.instructions+=6;NFSU2_TR(0x576039);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x34ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B57603c:{NFSU2_TR(0x57603c);
u8 U[13];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B576040:{NFSU2_TR(0x576040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B576041:{NFSU2_TR(0x576041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576042:{NFSU2_TR(0x576042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B576043:{NFSU2_TR(0x576043);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576050:L576050:{c.instructions+=4;NFSU2_TR(0x576050);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576051:{NFSU2_TR(0x576051);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B576055:{NFSU2_TR(0x576055);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B576057:{NFSU2_TR(0x576057);
if(r1(R+518)){{goto L576084;}}
}
B576059:L576059:{c.instructions+=5;NFSU2_TR(0x576059);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57605c:{NFSU2_TR(0x57605c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57605d:{NFSU2_TR(0x57605d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57605f:{NFSU2_TR(0x57605f);
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
B576061:{NFSU2_TR(0x576061);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L576083;}}
}
B576063:L576063:{c.instructions+=2;NFSU2_TR(0x576063);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B576065:{NFSU2_TR(0x576065);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576066:L576066:{c.instructions+=5;NFSU2_TR(0x576066);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576069:{NFSU2_TR(0x576069);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B57606d:{NFSU2_TR(0x57606d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B57606f:{NFSU2_TR(0x57606f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B576071:{NFSU2_TR(0x576071);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576077;}}
}
B576073:L576073:{c.instructions+=1;NFSU2_TR(0x576073);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B576077:L576077:{c.instructions+=5;NFSU2_TR(0x576077);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57607a:{NFSU2_TR(0x57607a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57607b:{NFSU2_TR(0x57607b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x34ull))));
}
B57607e:{NFSU2_TR(0x57607e);
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
B576080:{NFSU2_TR(0x576080);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576066u);}goto L576066;}}
}
B576082:L576082:{c.instructions+=1;NFSU2_TR(0x576082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B576083:L576083:{c.instructions+=1;NFSU2_TR(0x576083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576084:L576084:{c.instructions+=2;NFSU2_TR(0x576084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B576085:{NFSU2_TR(0x576085);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576090:L576090:{c.instructions+=4;NFSU2_TR(0x576090);
__builtin_memmove((R+0),gp(0x86512c),4);
}
B576095:{NFSU2_TR(0x576095);
__builtin_memmove((R+4),gp(0x865130),4);
}
B57609b:{NFSU2_TR(0x57609b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57609d:{NFSU2_TR(0x57609d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5760a0:L5760a0:{c.instructions+=5;NFSU2_TR(0x5760a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5760a1:{NFSU2_TR(0x5760a1);
__builtin_memmove((R+20),(R+16),4);
}
B5760a3:{NFSU2_TR(0x5760a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5760a6:{NFSU2_TR(0x5760a6);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5760a9:{NFSU2_TR(0x5760a9);
if(r1(R+518)){{goto L57611d;}}
}
B5760ab:L5760ab:{c.instructions+=2;NFSU2_TR(0x5760ab);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5760ae:{NFSU2_TR(0x5760ae);
if(r1(R+518)){{goto L5760e9;}}
}
B5760b0:L5760b0:{c.instructions+=2;NFSU2_TR(0x5760b0);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5760b3:{NFSU2_TR(0x5760b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576127;}}
}
B5760b5:L5760b5:{c.instructions+=4;NFSU2_TR(0x5760b5);
__builtin_memmove((R+0),gp(0x86347c),1);
}
B5760ba:{NFSU2_TR(0x5760ba);
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
B5760bc:{NFSU2_TR(0x5760bc);
s4(0x865130,u32(0x3e8ull));
}
B5760c6:{NFSU2_TR(0x5760c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576127;}}
}
B5760c8:L5760c8:{c.instructions+=2;NFSU2_TR(0x5760c8);
w4(R+4,u32(0x861e74ull));
}
B5760cd:{NFSU2_TR(0x5760cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5760d2ull));
TAIL_STATIC(0x500f90u,500);
}
B5760d2:L5760d2:{c.instructions+=2;NFSU2_TR(0x5760d2);
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
B5760d4:{NFSU2_TR(0x5760d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576127;}}
}
B5760d6:L5760d6:{c.instructions+=3;NFSU2_TR(0x5760d6);
u8 U[4];
w4(U+0,u32(0x3e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5760db:{NFSU2_TR(0x5760db);
w4(R+4,u32(0x861e74ull));
}
B5760e0:{NFSU2_TR(0x5760e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5760e5ull));
TAIL_STATIC(0x500f80u,500);
}
B5760e5:L5760e5:{c.instructions+=2;NFSU2_TR(0x5760e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5760e6:{NFSU2_TR(0x5760e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5760e9:L5760e9:{c.instructions+=4;NFSU2_TR(0x5760e9);
__builtin_memmove((R+0),gp(0x86347c),1);
}
B5760ee:{NFSU2_TR(0x5760ee);
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
B5760f0:{NFSU2_TR(0x5760f0);
s4(0x86512c,u32(0xc8ull));
}
B5760fa:{NFSU2_TR(0x5760fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576127;}}
}
B5760fc:L5760fc:{c.instructions+=2;NFSU2_TR(0x5760fc);
w4(R+4,u32(0x861e74ull));
}
B576101:{NFSU2_TR(0x576101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576106ull));
TAIL_STATIC(0x500f90u,500);
}
B576106:L576106:{c.instructions+=2;NFSU2_TR(0x576106);
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
B576108:{NFSU2_TR(0x576108);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576127;}}
}
B57610a:L57610a:{c.instructions+=3;NFSU2_TR(0x57610a);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57610f:{NFSU2_TR(0x57610f);
w4(R+4,u32(0x861e74ull));
}
B576114:{NFSU2_TR(0x576114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576119ull));
TAIL_STATIC(0x500f80u,500);
}
B576119:L576119:{c.instructions+=2;NFSU2_TR(0x576119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57611a:{NFSU2_TR(0x57611a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57611d:L57611d:{c.instructions+=1;NFSU2_TR(0x57611d);
s4(0x8383c8,u32(0x1ull));
}
B576127:L576127:{c.instructions+=2;NFSU2_TR(0x576127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B576128:{NFSU2_TR(0x576128);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576130:L576130:{c.instructions+=4;NFSU2_TR(0x576130);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B576134:{NFSU2_TR(0x576134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B576137:{NFSU2_TR(0x576137);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B576139:{NFSU2_TR(0x576139);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576141;}}
}
B57613b:L57613b:{c.instructions+=3;NFSU2_TR(0x57613b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57613d:{NFSU2_TR(0x57613d);
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
B576140:{NFSU2_TR(0x576140);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576141:L576141:{c.instructions+=10;NFSU2_TR(0x576141);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576142:{NFSU2_TR(0x576142);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B576146:{NFSU2_TR(0x576146);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576147:{NFSU2_TR(0x576147);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57614b:{NFSU2_TR(0x57614b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57614c:{NFSU2_TR(0x57614c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57614d:{NFSU2_TR(0x57614d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57614f:{NFSU2_TR(0x57614f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B576151:{NFSU2_TR(0x576151);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B576153:{NFSU2_TR(0x576153);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L576238;}}
}
B576159:L576159:{c.instructions+=5;NFSU2_TR(0x576159);
w4(R+0,u32(0x3ull));
}
B57615e:{NFSU2_TR(0x57615e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B576160:{NFSU2_TR(0x576160);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B576162:{NFSU2_TR(0x576162);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576166:{NFSU2_TR(0x576166);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L576171;}}
}
B576168:L576168:{c.instructions+=3;NFSU2_TR(0x576168);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B57616b:{NFSU2_TR(0x57616b);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57616f:{NFSU2_TR(0x57616f);
{goto L576176;}
}
B576171:L576171:{c.instructions+=1;NFSU2_TR(0x576171);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B576176:L576176:{c.instructions+=3;NFSU2_TR(0x576176);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B576179:{NFSU2_TR(0x576179);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B57617b:{NFSU2_TR(0x57617b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L576187;}}
}
B57617d:L57617d:{c.instructions+=3;NFSU2_TR(0x57617d);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B576181:{NFSU2_TR(0x576181);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B576185:{NFSU2_TR(0x576185);
{goto L57618c;}
}
B576187:L576187:{c.instructions+=1;NFSU2_TR(0x576187);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57618c:L57618c:{c.instructions+=3;NFSU2_TR(0x57618c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57618d:{NFSU2_TR(0x57618d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B57618f:{NFSU2_TR(0x57618f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L57619b;}}
}
B576191:L576191:{c.instructions+=3;NFSU2_TR(0x576191);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B576195:{NFSU2_TR(0x576195);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B576199:{NFSU2_TR(0x576199);
{goto L5761a0;}
}
B57619b:L57619b:{c.instructions+=1;NFSU2_TR(0x57619b);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5761a0:L5761a0:{c.instructions+=3;NFSU2_TR(0x5761a0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B5761a3:{NFSU2_TR(0x5761a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5761a5:{NFSU2_TR(0x5761a5);
if(r1(R+518)){{goto L57622d;}}
}
B5761ab:L5761ab:{c.instructions+=6;NFSU2_TR(0x5761ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5761af:{NFSU2_TR(0x5761af);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5761b3:{NFSU2_TR(0x5761b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5761b6:{NFSU2_TR(0x5761b6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5761b8:{NFSU2_TR(0x5761b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5761ba:{NFSU2_TR(0x5761ba);
if(r1(R+512)){{goto L576229;}}
}
B5761bc:L5761bc:{c.instructions+=17;NFSU2_TR(0x5761bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5761c1:{NFSU2_TR(0x5761c1);
__builtin_memmove((R+0),(R+4),4);
}
B5761c3:{NFSU2_TR(0x5761c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5761c6:{NFSU2_TR(0x5761c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x79dd60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5761cc:{NFSU2_TR(0x5761cc);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B5761ce:{NFSU2_TR(0x5761ce);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5761d3:{NFSU2_TR(0x5761d3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5761d6:{NFSU2_TR(0x5761d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5761d9:{NFSU2_TR(0x5761d9);
__builtin_memmove((R+0),(R+8),4);
}
B5761db:{NFSU2_TR(0x5761db);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5761de:{NFSU2_TR(0x5761de);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B5761e0:{NFSU2_TR(0x5761e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x79dd60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5761e6:{NFSU2_TR(0x5761e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5761e9:{NFSU2_TR(0x5761e9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5761eb:{NFSU2_TR(0x5761eb);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5761ef:{NFSU2_TR(0x5761ef);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5761f3:{NFSU2_TR(0x5761f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5761f9;}}
}
B5761f5:L5761f5:{c.instructions+=2;NFSU2_TR(0x5761f5);
w1(R+0,u8(0x3dull));
}
B5761f7:{NFSU2_TR(0x5761f7);
{goto L57620d;}
}
B5761f9:L5761f9:{c.instructions+=6;NFSU2_TR(0x5761f9);
w4(R+0,u32(r1(R+4)));
}
B5761fc:{NFSU2_TR(0x5761fc);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B5761ff:{NFSU2_TR(0x5761ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B576202:{NFSU2_TR(0x576202);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B576205:{NFSU2_TR(0x576205);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B576207:{NFSU2_TR(0x576207);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x79dd60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57620d:L57620d:{c.instructions+=4;NFSU2_TR(0x57620d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B576210:{NFSU2_TR(0x576210);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B576212:{NFSU2_TR(0x576212);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B576216:{NFSU2_TR(0x576216);
if(r1(R+512)){{goto L57621c;}}
}
B576218:L576218:{c.instructions+=2;NFSU2_TR(0x576218);
w1(R+0,u8(0x3dull));
}
B57621a:{NFSU2_TR(0x57621a);
{goto L576225;}
}
B57621c:L57621c:{c.instructions+=2;NFSU2_TR(0x57621c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B57621f:{NFSU2_TR(0x57621f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x79dd60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B576225:L576225:{c.instructions+=1;NFSU2_TR(0x576225);
u8 U[13];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B576229:L576229:{c.instructions+=1;NFSU2_TR(0x576229);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57622d:L57622d:{c.instructions+=3;NFSU2_TR(0x57622d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B576230:{NFSU2_TR(0x576230);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B576232:{NFSU2_TR(0x576232);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576168u);}goto L576168;}}
}
B576238:L576238:{c.instructions+=2;NFSU2_TR(0x576238);
u8 U[7];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B57623d:{NFSU2_TR(0x57623d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57624e;}}
}
B57623f:L57623f:{c.instructions+=2;NFSU2_TR(0x57623f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B576241:{NFSU2_TR(0x576241);
if(r1(R+518)){{goto L57624d;}}
}
B576243:L576243:{c.instructions+=2;NFSU2_TR(0x576243);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B576247:{NFSU2_TR(0x576247);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L57624d;}}
}
B576249:L576249:{c.instructions+=1;NFSU2_TR(0x576249);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B57624d:L57624d:{c.instructions+=1;NFSU2_TR(0x57624d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B57624e:L57624e:{c.instructions+=7;NFSU2_TR(0x57624e);
__builtin_memmove((R+0),(R+28),4);
}
B576250:{NFSU2_TR(0x576250);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B576251:{NFSU2_TR(0x576251);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576252:{NFSU2_TR(0x576252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B576253:{NFSU2_TR(0x576253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B576254:{NFSU2_TR(0x576254);
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
B576257:{NFSU2_TR(0x576257);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576260:L576260:{c.instructions+=6;NFSU2_TR(0x576260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B576263:{NFSU2_TR(0x576263);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576264:{NFSU2_TR(0x576264);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B576268:{NFSU2_TR(0x576268);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57626a:{NFSU2_TR(0x57626a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57626c:{NFSU2_TR(0x57626c);
if(r1(R+518)){{goto L57627a;}}
}
B57626e:L57626e:{c.instructions+=4;NFSU2_TR(0x57626e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576272:{NFSU2_TR(0x576272);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B576274:{NFSU2_TR(0x576274);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576278:{NFSU2_TR(0x576278);
if(r1(R+518)){{goto L576281;}}
}
B57627a:L57627a:{c.instructions+=4;NFSU2_TR(0x57627a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57627c:{NFSU2_TR(0x57627c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57627d:{NFSU2_TR(0x57627d);
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
B576280:{NFSU2_TR(0x576280);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576281:L576281:{c.instructions+=5;NFSU2_TR(0x576281);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B576283:{NFSU2_TR(0x576283);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576284:{NFSU2_TR(0x576284);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576285:{NFSU2_TR(0x576285);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576286:{NFSU2_TR(0x576286);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5763bc;}}
}
B57628c:L57628c:{c.instructions+=1;NFSU2_TR(0x57628c);
__builtin_memmove((R+16),(R+16),4);
}
B576290:L576290:{c.instructions+=13;NFSU2_TR(0x576290);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B576293:{NFSU2_TR(0x576293);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B576297:{NFSU2_TR(0x576297);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B576298:{NFSU2_TR(0x576298);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B57629c:{NFSU2_TR(0x57629c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57629d:{NFSU2_TR(0x57629d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57629e:{NFSU2_TR(0x57629e);
w4(R+28,u32(s32(s8(r1(R+8)))));
}
B5762a1:{NFSU2_TR(0x5762a1);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5762a5:{NFSU2_TR(0x5762a5);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B5762a8:{NFSU2_TR(0x5762a8);
w4(R+24,u32(0xffull));
}
B5762ad:{NFSU2_TR(0x5762ad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5762ae:{NFSU2_TR(0x5762ae);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79dda0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+24))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B5762b5:{NFSU2_TR(0x5762b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5762c0;}}
}
B5762b7:L5762b7:{c.instructions+=2;NFSU2_TR(0x5762b7);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5762ba:{NFSU2_TR(0x5762ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5763c8;}}
}
B5762c0:L5762c0:{c.instructions+=6;NFSU2_TR(0x5762c0);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B5762c3:{NFSU2_TR(0x5762c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5762c7:{NFSU2_TR(0x5762c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79dda0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5762ce:{NFSU2_TR(0x5762ce);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5762d0:{NFSU2_TR(0x5762d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5762d4:{NFSU2_TR(0x5762d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5762de;}}
}
B5762d6:L5762d6:{c.instructions+=2;NFSU2_TR(0x5762d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5762d8:{NFSU2_TR(0x5762d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5763c8;}}
}
B5762de:L5762de:{c.instructions+=5;NFSU2_TR(0x5762de);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5762e2:{NFSU2_TR(0x5762e2);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B5762e5:{NFSU2_TR(0x5762e5);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79dda0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+24))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B5762ec:{NFSU2_TR(0x5762ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5762f0:{NFSU2_TR(0x5762f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5762fa;}}
}
B5762f2:L5762f2:{c.instructions+=2;NFSU2_TR(0x5762f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5762f4:{NFSU2_TR(0x5762f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5763c8;}}
}
B5762fa:L5762fa:{c.instructions+=4;NFSU2_TR(0x5762fa);
w4(R+8,u32(s32(s8(r1(R+12)))));
}
B5762fd:{NFSU2_TR(0x5762fd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79dda0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+24))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B576304:{NFSU2_TR(0x576304);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576308:{NFSU2_TR(0x576308);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576313;}}
}
B57630a:L57630a:{c.instructions+=2;NFSU2_TR(0x57630a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B57630d:{NFSU2_TR(0x57630d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5763c8;}}
}
B576313:L576313:{c.instructions+=2;NFSU2_TR(0x576313);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B576315:{NFSU2_TR(0x576315);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57631e;}}
}
B576317:L576317:{c.instructions+=2;NFSU2_TR(0x576317);
w4(R+24,u32(0x1ull));
}
B57631c:{NFSU2_TR(0x57631c);
{goto L57632b;}
}
B57631e:L57631e:{c.instructions+=5;NFSU2_TR(0x57631e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B576320:{NFSU2_TR(0x576320);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B576323:{NFSU2_TR(0x576323);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B576326:{NFSU2_TR(0x576326);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B576329:{NFSU2_TR(0x576329);
__builtin_memmove((R+24),(R+0),4);
}
B57632b:L57632b:{c.instructions+=4;NFSU2_TR(0x57632b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57632f:{NFSU2_TR(0x57632f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B576331:{NFSU2_TR(0x576331);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576335:{NFSU2_TR(0x576335);
if(r1(R+518)){{goto L5763ac;}}
}
B576337:L576337:{c.instructions+=3;NFSU2_TR(0x576337);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B57633a:{NFSU2_TR(0x57633a);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B57633e:{NFSU2_TR(0x57633e);
if(r1(R+512)){{goto L5763ac;}}
}
B576340:L576340:{c.instructions+=2;NFSU2_TR(0x576340);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B576343:{NFSU2_TR(0x576343);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57635f;}}
}
B576345:L576345:{c.instructions+=7;NFSU2_TR(0x576345);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79dda0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B57634c:{NFSU2_TR(0x57634c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576350:{NFSU2_TR(0x576350);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w1(R+12,shl<u8>(r1(R+12),u64(r4(U+0))));
}
B576353:{NFSU2_TR(0x576353);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B576356:{NFSU2_TR(0x576356);
w1(R+8,u8(u32(r1(R+8))|u32(r1(R+12))));
}
B576358:{NFSU2_TR(0x576358);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57635c:{NFSU2_TR(0x57635c);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B57635f:L57635f:{c.instructions+=2;NFSU2_TR(0x57635f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B576362:{NFSU2_TR(0x576362);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57638a;}}
}
B576364:L576364:{c.instructions+=9;NFSU2_TR(0x576364);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576368:{NFSU2_TR(0x576368);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79dda0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B57636f:{NFSU2_TR(0x57636f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B576373:{NFSU2_TR(0x576373);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79dda0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B57637a:{NFSU2_TR(0x57637a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+12,shl<u8>(r1(R+12),u64(r4(U+0))));
}
B57637d:{NFSU2_TR(0x57637d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B576380:{NFSU2_TR(0x576380);
w1(R+8,u8(u32(r1(R+8))|u32(r1(R+12))));
}
B576382:{NFSU2_TR(0x576382);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B576386:{NFSU2_TR(0x576386);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57638a:L57638a:{c.instructions+=2;NFSU2_TR(0x57638a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57638d:{NFSU2_TR(0x57638d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5763ac;}}
}
B57638f:L57638f:{c.instructions+=6;NFSU2_TR(0x57638f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576393:{NFSU2_TR(0x576393);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79dda0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B57639a:{NFSU2_TR(0x57639a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57639e:{NFSU2_TR(0x57639e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r4(U+0))));
}
B5763a1:{NFSU2_TR(0x5763a1);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79dda0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(R+8,u8(u32(r1(R+8))|u32(r1(U+8))));
}
B5763a8:{NFSU2_TR(0x5763a8);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5763ac:L5763ac:{c.instructions+=4;NFSU2_TR(0x5763ac);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5763ae:{NFSU2_TR(0x5763ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5763b2:{NFSU2_TR(0x5763b2);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B5763b6:{NFSU2_TR(0x5763b6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576290u);}goto L576290;}}
}
B5763bc:L5763bc:{c.instructions+=7;NFSU2_TR(0x5763bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5763c0:{NFSU2_TR(0x5763c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5763c1:{NFSU2_TR(0x5763c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5763c2:{NFSU2_TR(0x5763c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5763c3:{NFSU2_TR(0x5763c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5763c4:{NFSU2_TR(0x5763c4);
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
B5763c7:{NFSU2_TR(0x5763c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5763c8:L5763c8:{c.instructions+=7;NFSU2_TR(0x5763c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5763c9:{NFSU2_TR(0x5763c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5763ca:{NFSU2_TR(0x5763ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5763cb:{NFSU2_TR(0x5763cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5763cd:{NFSU2_TR(0x5763cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5763ce:{NFSU2_TR(0x5763ce);
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
B5763d1:{NFSU2_TR(0x5763d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5763e0:L5763e0:{c.instructions+=10;NFSU2_TR(0x5763e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5763e2:{NFSU2_TR(0x5763e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5763e3:{NFSU2_TR(0x5763e3);
__builtin_memmove((R+24),(R+4),4);
}
B5763e5:{NFSU2_TR(0x5763e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5763e7:{NFSU2_TR(0x5763e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5763ea:{NFSU2_TR(0x5763ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5763ed:{NFSU2_TR(0x5763ed);
__builtin_memmove(gp(0x865134),(R+24),4);
}
B5763f3:{NFSU2_TR(0x5763f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5763f6:{NFSU2_TR(0x5763f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5763f9:{NFSU2_TR(0x5763f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5763feull));
TAIL_STATIC(0x43bd90u,43b);
}
B5763fe:L5763fe:{c.instructions+=3;NFSU2_TR(0x5763fe);
__builtin_memmove((R+0),(R+24),4);
}
B576400:{NFSU2_TR(0x576400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576401:{NFSU2_TR(0x576401);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576410:L576410:{c.instructions+=5;NFSU2_TR(0x576410);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576411:{NFSU2_TR(0x576411);
__builtin_memmove((R+24),(R+4),4);
}
B576413:{NFSU2_TR(0x576413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576416:{NFSU2_TR(0x576416);
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
B576418:{NFSU2_TR(0x576418);
if(r1(R+518)){{goto L57642a;}}
}
B57641a:L57641a:{c.instructions+=2;NFSU2_TR(0x57641a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57641b:{NFSU2_TR(0x57641b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576420ull));
TAIL_STATIC(0x440540u,440);
}
B576420:L576420:{c.instructions+=2;NFSU2_TR(0x576420);
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
B576423:{NFSU2_TR(0x576423);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57642a:L57642a:{c.instructions+=2;NFSU2_TR(0x57642a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57642b:{NFSU2_TR(0x57642b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576430:L576430:{c.instructions+=4;NFSU2_TR(0x576430);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576431:{NFSU2_TR(0x576431);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576432:{NFSU2_TR(0x576432);
__builtin_memmove((R+24),(R+4),4);
}
B576434:{NFSU2_TR(0x576434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576439ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B576439:L576439:{c.instructions+=5;NFSU2_TR(0x576439);
__builtin_memmove((R+28),(R+0),4);
}
B57643b:{NFSU2_TR(0x57643b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57643e:{NFSU2_TR(0x57643e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57643f:{NFSU2_TR(0x57643f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576440:{NFSU2_TR(0x576440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576445ull));
TAIL_STATIC(0x43be20u,43b);
}
B576445:L576445:{c.instructions+=8;NFSU2_TR(0x576445);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57644b:{NFSU2_TR(0x57644b);
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
B57644e:{NFSU2_TR(0x57644e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576451:{NFSU2_TR(0x576451);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B576454:{NFSU2_TR(0x576454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B576455:{NFSU2_TR(0x576455);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B576458:{NFSU2_TR(0x576458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576459:{NFSU2_TR(0x576459);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576460:L576460:{c.instructions+=5;NFSU2_TR(0x576460);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576461:{NFSU2_TR(0x576461);
__builtin_memmove((R+24),(R+4),4);
}
B576463:{NFSU2_TR(0x576463);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576466:{NFSU2_TR(0x576466);
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
B576468:{NFSU2_TR(0x576468);
if(r1(R+518)){{goto L5764a5;}}
}
B57646a:L57646a:{c.instructions+=3;NFSU2_TR(0x57646a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57646d:{NFSU2_TR(0x57646d);
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
B57646f:{NFSU2_TR(0x57646f);
if(r1(R+518)){{goto L5764a5;}}
}
B576471:L576471:{c.instructions+=3;NFSU2_TR(0x576471);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576474:{NFSU2_TR(0x576474);
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
B576476:{NFSU2_TR(0x576476);
if(r1(R+518)){{goto L5764a5;}}
}
B576478:L576478:{c.instructions+=1;NFSU2_TR(0x576478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57647dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576430u);}goto L576430;}
}
B57647d:L57647d:{c.instructions+=1;NFSU2_TR(0x57647d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576482ull));
TAIL_STATIC(0x75bed4u,75b);
}
B576482:L576482:{c.instructions+=5;NFSU2_TR(0x576482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B576484:{NFSU2_TR(0x576484);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576487:{NFSU2_TR(0x576487);
u8 U[18];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+14),(U+8),2);
w1(R+512,u8((r2(U+14))<(r2(R+0))));
w1(R+523,sborrow<u16>(r2(U+14),r2(R+0)));
w2(U+16,u16(u32(r2(U+14))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+16))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
w2(U+10,u16(u32(r2(U+16))&u32(u16(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r2(U+10)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B57648b:{NFSU2_TR(0x57648b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B57648e:{NFSU2_TR(0x57648e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5764a5;}}
}
B576490:L576490:{c.instructions+=5;NFSU2_TR(0x576490);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576493:{NFSU2_TR(0x576493);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B576496:{NFSU2_TR(0x576496);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576497:{NFSU2_TR(0x576497);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576498:{NFSU2_TR(0x576498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57649dull));
TAIL_STATIC(0x50c900u,50c);
}
B57649d:L57649d:{c.instructions+=4;NFSU2_TR(0x57649d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57649f:{NFSU2_TR(0x57649f);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5764a2:{NFSU2_TR(0x5764a2);
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
B5764a3:{NFSU2_TR(0x5764a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5764a5:L5764a5:{c.instructions+=2;NFSU2_TR(0x5764a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5764a6:{NFSU2_TR(0x5764a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5764b0:L5764b0:{c.instructions+=4;NFSU2_TR(0x5764b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5764b1:{NFSU2_TR(0x5764b1);
__builtin_memmove((R+24),gp(0x865134),4);
}
B5764b7:{NFSU2_TR(0x5764b7);
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
B5764b9:{NFSU2_TR(0x5764b9);
if(r1(R+518)){{goto L5764c3;}}
}
B5764bb:L5764bb:{c.instructions+=1;NFSU2_TR(0x5764bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5764c0ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5764c0:L5764c0:{c.instructions+=1;NFSU2_TR(0x5764c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5764c3:L5764c3:{c.instructions+=2;NFSU2_TR(0x5764c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5764c4:{NFSU2_TR(0x5764c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5764d0:L5764d0:{c.instructions+=10;NFSU2_TR(0x5764d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5764d1:{NFSU2_TR(0x5764d1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5764d5:{NFSU2_TR(0x5764d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5764d6:{NFSU2_TR(0x5764d6);
__builtin_memmove((R+24),(R+4),4);
}
B5764d8:{NFSU2_TR(0x5764d8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5764db:{NFSU2_TR(0x5764db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5764dc:{NFSU2_TR(0x5764dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5764de:{NFSU2_TR(0x5764de);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5764e1:{NFSU2_TR(0x5764e1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5764e5:{NFSU2_TR(0x5764e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5764eaull));
TAIL_STATIC(0x75bed4u,75b);
}
B5764ea:L5764ea:{c.instructions+=4;NFSU2_TR(0x5764ea);
__builtin_memmove((R+4),(R+0),4);
}
B5764ec:{NFSU2_TR(0x5764ec);
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
B5764ee:{NFSU2_TR(0x5764ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5764f2:{NFSU2_TR(0x5764f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57654f;}}
}
B5764f4:L5764f4:{c.instructions+=5;NFSU2_TR(0x5764f4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5764f8:{NFSU2_TR(0x5764f8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5764fe:{NFSU2_TR(0x5764fe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B576500:{NFSU2_TR(0x576500);
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
B576503:{NFSU2_TR(0x576503);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L57654f;}}
}
B576505:L576505:{c.instructions+=3;NFSU2_TR(0x576505);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B576508:{NFSU2_TR(0x576508);
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
B57650a:{NFSU2_TR(0x57650a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L576519;}}
}
B57650c:L57650c:{c.instructions+=6;NFSU2_TR(0x57650c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57650f:{NFSU2_TR(0x57650f);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576513:{NFSU2_TR(0x576513);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B576514:{NFSU2_TR(0x576514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576515:{NFSU2_TR(0x576515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576516:{NFSU2_TR(0x576516);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576519:L576519:{c.instructions+=5;NFSU2_TR(0x576519);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57651d:{NFSU2_TR(0x57651d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B576521:{NFSU2_TR(0x576521);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B576523:{NFSU2_TR(0x576523);
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
B576526:{NFSU2_TR(0x576526);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57652e;}}
}
B576528:L576528:{c.instructions+=1;NFSU2_TR(0x576528);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57652e:L57652e:{c.instructions+=13;NFSU2_TR(0x57652e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B576532:{NFSU2_TR(0x576532);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576535:{NFSU2_TR(0x576535);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57653b:{NFSU2_TR(0x57653b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B57653e:{NFSU2_TR(0x57653e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B576540:{NFSU2_TR(0x576540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B576541:{NFSU2_TR(0x576541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576542:{NFSU2_TR(0x576542);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576544:{NFSU2_TR(0x576544);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B576546:{NFSU2_TR(0x576546);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576549:{NFSU2_TR(0x576549);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B57654b:{NFSU2_TR(0x57654b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57654c:{NFSU2_TR(0x57654c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57654f:L57654f:{c.instructions+=6;NFSU2_TR(0x57654f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576552:{NFSU2_TR(0x576552);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576554:{NFSU2_TR(0x576554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B576555:{NFSU2_TR(0x576555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576556:{NFSU2_TR(0x576556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576557:{NFSU2_TR(0x576557);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576560:L576560:{c.instructions+=10;NFSU2_TR(0x576560);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576561:{NFSU2_TR(0x576561);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576565:{NFSU2_TR(0x576565);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576566:{NFSU2_TR(0x576566);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B576569:{NFSU2_TR(0x576569);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57656c:{NFSU2_TR(0x57656c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B57656e:{NFSU2_TR(0x57656e);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B576574:{NFSU2_TR(0x576574);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B576576:{NFSU2_TR(0x576576);
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
B576579:{NFSU2_TR(0x576579);
if(r1(R+514)){{goto L576583;}}
}
B57657b:L57657b:{c.instructions+=4;NFSU2_TR(0x57657b);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57657e:{NFSU2_TR(0x57657e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57657f:{NFSU2_TR(0x57657f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576580:{NFSU2_TR(0x576580);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576583:L576583:{c.instructions+=8;NFSU2_TR(0x576583);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576586:{NFSU2_TR(0x576586);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576587:{NFSU2_TR(0x576587);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57658b:{NFSU2_TR(0x57658b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57658c:{NFSU2_TR(0x57658c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57658d:{NFSU2_TR(0x57658d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57658f:{NFSU2_TR(0x57658f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B576592:{NFSU2_TR(0x576592);
if(r1(R+514)){{goto L57659b;}}
}
B576594:L576594:{c.instructions+=2;NFSU2_TR(0x576594);
w4(R+12,u32(0x1ull));
}
B576599:{NFSU2_TR(0x576599);
{goto L57659d;}
}
B57659b:L57659b:{c.instructions+=1;NFSU2_TR(0x57659b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57659d:L57659d:{c.instructions+=5;NFSU2_TR(0x57659d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57659f:{NFSU2_TR(0x57659f);
w4(R+8,u32(0x1ull));
}
B5765a4:{NFSU2_TR(0x5765a4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5765a6:{NFSU2_TR(0x5765a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5765aa:{NFSU2_TR(0x5765aa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5765ed;}}
}
B5765ac:L5765ac:{c.instructions+=2;NFSU2_TR(0x5765ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5765af:{NFSU2_TR(0x5765af);
}
B5765b0:L5765b0:{c.instructions+=7;NFSU2_TR(0x5765b0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5765b4:{NFSU2_TR(0x5765b4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5765b6:{NFSU2_TR(0x5765b6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5765b8:{NFSU2_TR(0x5765b8);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5765be:{NFSU2_TR(0x5765be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5765c0:{NFSU2_TR(0x5765c0);
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
B5765c3:{NFSU2_TR(0x5765c3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L576604;}}
}
B5765c5:L5765c5:{c.instructions+=5;NFSU2_TR(0x5765c5);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5765c7:{NFSU2_TR(0x5765c7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5765cb:{NFSU2_TR(0x5765cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5765cd:{NFSU2_TR(0x5765cd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5765d0:{NFSU2_TR(0x5765d0);
if(r1(R+514)){{goto L5765d9;}}
}
B5765d2:L5765d2:{c.instructions+=2;NFSU2_TR(0x5765d2);
w4(R+0,u32(0x1ull));
}
B5765d7:{NFSU2_TR(0x5765d7);
{goto L5765db;}
}
B5765d9:L5765d9:{c.instructions+=1;NFSU2_TR(0x5765d9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5765db:L5765db:{c.instructions+=2;NFSU2_TR(0x5765db);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5765dd:{NFSU2_TR(0x5765dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57661a;}}
}
B5765df:L5765df:{c.instructions+=5;NFSU2_TR(0x5765df);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5765e0:{NFSU2_TR(0x5765e0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5765e3:{NFSU2_TR(0x5765e3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5765e5:{NFSU2_TR(0x5765e5);
__builtin_memmove((R+12),(R+0),4);
}
B5765e7:{NFSU2_TR(0x5765e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5765b0u);}goto L5765b0;}}
}
B5765e9:L5765e9:{c.instructions+=1;NFSU2_TR(0x5765e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5765ed:L5765ed:{c.instructions+=11;NFSU2_TR(0x5765ed);
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
B5765ee:{NFSU2_TR(0x5765ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5765f2:{NFSU2_TR(0x5765f2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5765f6:{NFSU2_TR(0x5765f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5765f7:{NFSU2_TR(0x5765f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5765f8:{NFSU2_TR(0x5765f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5765f9:{NFSU2_TR(0x5765f9);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5765fc:{NFSU2_TR(0x5765fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5765fd:{NFSU2_TR(0x5765fd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B576600:{NFSU2_TR(0x576600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576601:{NFSU2_TR(0x576601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576604:L576604:{c.instructions+=10;NFSU2_TR(0x576604);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576608:{NFSU2_TR(0x576608);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57660c:{NFSU2_TR(0x57660c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57660d:{NFSU2_TR(0x57660d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57660e:{NFSU2_TR(0x57660e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57660f:{NFSU2_TR(0x57660f);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B576612:{NFSU2_TR(0x576612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B576613:{NFSU2_TR(0x576613);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B576616:{NFSU2_TR(0x576616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576617:{NFSU2_TR(0x576617);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57661a:L57661a:{c.instructions+=18;NFSU2_TR(0x57661a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57661e:{NFSU2_TR(0x57661e);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B576622:{NFSU2_TR(0x576622);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B576624:{NFSU2_TR(0x576624);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576628:{NFSU2_TR(0x576628);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57662c:{NFSU2_TR(0x57662c);
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
B57662d:{NFSU2_TR(0x57662d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57662f:{NFSU2_TR(0x57662f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576633:{NFSU2_TR(0x576633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B576634:{NFSU2_TR(0x576634);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B576636:{NFSU2_TR(0x576636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576637:{NFSU2_TR(0x576637);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B576638:{NFSU2_TR(0x576638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B576639:{NFSU2_TR(0x576639);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B57663d:{NFSU2_TR(0x57663d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B576640:{NFSU2_TR(0x576640);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B576643:{NFSU2_TR(0x576643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576644:{NFSU2_TR(0x576644);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576650:L576650:{c.instructions+=17;NFSU2_TR(0x576650);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576654:{NFSU2_TR(0x576654);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576657:{NFSU2_TR(0x576657);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576658:{NFSU2_TR(0x576658);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57665c:{NFSU2_TR(0x57665c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B576660:{NFSU2_TR(0x576660);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576662:{NFSU2_TR(0x576662);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576666:{NFSU2_TR(0x576666);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576668:{NFSU2_TR(0x576668);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57666c:{NFSU2_TR(0x57666c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57666f:{NFSU2_TR(0x57666f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576675:{NFSU2_TR(0x576675);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B576679:{NFSU2_TR(0x576679);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57667c:{NFSU2_TR(0x57667c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57667d:{NFSU2_TR(0x57667d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57667e:{NFSU2_TR(0x57667e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57667f:{NFSU2_TR(0x57667f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576684ull));
TAIL_STATIC(0x43d090u,43d);
}
B576684:L576684:{c.instructions+=2;NFSU2_TR(0x576684);
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
B576687:{NFSU2_TR(0x576687);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576690:L576690:{c.instructions+=21;NFSU2_TR(0x576690);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576694:{NFSU2_TR(0x576694);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576697:{NFSU2_TR(0x576697);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576698:{NFSU2_TR(0x576698);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57669b:{NFSU2_TR(0x57669b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57669f:{NFSU2_TR(0x57669f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5766a3:{NFSU2_TR(0x5766a3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5766a5:{NFSU2_TR(0x5766a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5766a9:{NFSU2_TR(0x5766a9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5766ab:{NFSU2_TR(0x5766ab);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5766ad:{NFSU2_TR(0x5766ad);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5766b1:{NFSU2_TR(0x5766b1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5766b4:{NFSU2_TR(0x5766b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5766b8:{NFSU2_TR(0x5766b8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5766bb:{NFSU2_TR(0x5766bb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5766c1:{NFSU2_TR(0x5766c1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5766c5:{NFSU2_TR(0x5766c5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5766c8:{NFSU2_TR(0x5766c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5766c9:{NFSU2_TR(0x5766c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5766ca:{NFSU2_TR(0x5766ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5766cb:{NFSU2_TR(0x5766cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5766d0ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5766d0:L5766d0:{c.instructions+=2;NFSU2_TR(0x5766d0);
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
B5766d3:{NFSU2_TR(0x5766d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5766e0:L5766e0:{c.instructions+=26;NFSU2_TR(0x5766e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5766e4:{NFSU2_TR(0x5766e4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5766e7:{NFSU2_TR(0x5766e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5766ea:{NFSU2_TR(0x5766ea);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5766ed:{NFSU2_TR(0x5766ed);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5766f1:{NFSU2_TR(0x5766f1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5766f5:{NFSU2_TR(0x5766f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5766f9:{NFSU2_TR(0x5766f9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5766fb:{NFSU2_TR(0x5766fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5766ff:{NFSU2_TR(0x5766ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576700:{NFSU2_TR(0x576700);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576702:{NFSU2_TR(0x576702);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B576704:{NFSU2_TR(0x576704);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576708:{NFSU2_TR(0x576708);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57670b:{NFSU2_TR(0x57670b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57670f:{NFSU2_TR(0x57670f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576712:{NFSU2_TR(0x576712);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576716:{NFSU2_TR(0x576716);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57671a:{NFSU2_TR(0x57671a);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57671d:{NFSU2_TR(0x57671d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576723:{NFSU2_TR(0x576723);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B576727:{NFSU2_TR(0x576727);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57672a:{NFSU2_TR(0x57672a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57672b:{NFSU2_TR(0x57672b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57672c:{NFSU2_TR(0x57672c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57672d:{NFSU2_TR(0x57672d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576732ull));
TAIL_STATIC(0x43d100u,43d);
}
B576732:L576732:{c.instructions+=2;NFSU2_TR(0x576732);
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
B576735:{NFSU2_TR(0x576735);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576740:L576740:{c.instructions+=11;NFSU2_TR(0x576740);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576746:{NFSU2_TR(0x576746);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57674a:{NFSU2_TR(0x57674a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57674e:{NFSU2_TR(0x57674e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B576752:{NFSU2_TR(0x576752);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576756:{NFSU2_TR(0x576756);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576758:{NFSU2_TR(0x576758);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57675c:{NFSU2_TR(0x57675c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57675e:{NFSU2_TR(0x57675e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B576760:{NFSU2_TR(0x576760);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576762:{NFSU2_TR(0x576762);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576770:L576770:{c.instructions+=6;NFSU2_TR(0x576770);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576774:{NFSU2_TR(0x576774);
__builtin_memmove((R+0),(R+4),4);
}
B576776:{NFSU2_TR(0x576776);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57677a:{NFSU2_TR(0x57677a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57677c:{NFSU2_TR(0x57677c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57677f:{NFSU2_TR(0x57677f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576790:L576790:{c.instructions+=6;NFSU2_TR(0x576790);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576791:{NFSU2_TR(0x576791);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576792:{NFSU2_TR(0x576792);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576793:{NFSU2_TR(0x576793);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B576796:{NFSU2_TR(0x576796);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B576799:{NFSU2_TR(0x576799);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5767fa;}}
}
B57679b:L57679b:{c.instructions+=6;NFSU2_TR(0x57679b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57679d:{NFSU2_TR(0x57679d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5767a1:{NFSU2_TR(0x5767a1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5767a3:{NFSU2_TR(0x5767a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5767a5:{NFSU2_TR(0x5767a5);
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
B5767a8:{NFSU2_TR(0x5767a8);
if(r1(R+514)){{goto L5767b3;}}
}
B5767aa:L5767aa:{c.instructions+=5;NFSU2_TR(0x5767aa);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5767ad:{NFSU2_TR(0x5767ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5767ae:{NFSU2_TR(0x5767ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5767af:{NFSU2_TR(0x5767af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5767b0:{NFSU2_TR(0x5767b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5767b3:L5767b3:{c.instructions+=5;NFSU2_TR(0x5767b3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5767b7:{NFSU2_TR(0x5767b7);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5767bb:{NFSU2_TR(0x5767bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5767bd:{NFSU2_TR(0x5767bd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5767c0:{NFSU2_TR(0x5767c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5767cc;}}
}
B5767c2:L5767c2:{c.instructions+=5;NFSU2_TR(0x5767c2);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5767c6:{NFSU2_TR(0x5767c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5767c7:{NFSU2_TR(0x5767c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5767c8:{NFSU2_TR(0x5767c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5767c9:{NFSU2_TR(0x5767c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5767cc:L5767cc:{c.instructions+=4;NFSU2_TR(0x5767cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B5767cf:{NFSU2_TR(0x5767cf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5767d1:{NFSU2_TR(0x5767d1);
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
B5767d3:{NFSU2_TR(0x5767d3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5767fa;}}
}
B5767d5:L5767d5:{c.instructions+=1;NFSU2_TR(0x5767d5);
__builtin_memmove((R+28),(R+24),4);
}
B5767d7:L5767d7:{c.instructions+=5;NFSU2_TR(0x5767d7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5767db:{NFSU2_TR(0x5767db);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5767dd:{NFSU2_TR(0x5767dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5767df:{NFSU2_TR(0x5767df);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5767e2:{NFSU2_TR(0x5767e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5767f2;}}
}
B5767e4:L5767e4:{c.instructions+=5;NFSU2_TR(0x5767e4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5767e8:{NFSU2_TR(0x5767e8);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5767eb:{NFSU2_TR(0x5767eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5767ed:{NFSU2_TR(0x5767ed);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5767f0:{NFSU2_TR(0x5767f0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L576805;}}
}
B5767f2:L5767f2:{c.instructions+=4;NFSU2_TR(0x5767f2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5767f3:{NFSU2_TR(0x5767f3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5767f6:{NFSU2_TR(0x5767f6);
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
B5767f8:{NFSU2_TR(0x5767f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5767d7u);}goto L5767d7;}}
}
B5767fa:L5767fa:{c.instructions+=6;NFSU2_TR(0x5767fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5767fc:{NFSU2_TR(0x5767fc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5767ff:{NFSU2_TR(0x5767ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B576800:{NFSU2_TR(0x576800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576801:{NFSU2_TR(0x576801);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B576802:{NFSU2_TR(0x576802);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576805:L576805:{c.instructions+=11;NFSU2_TR(0x576805);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576809:{NFSU2_TR(0x576809);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B57680d:{NFSU2_TR(0x57680d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57680f:{NFSU2_TR(0x57680f);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576813:{NFSU2_TR(0x576813);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B576816:{NFSU2_TR(0x576816);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B576818:{NFSU2_TR(0x576818);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B57681a:{NFSU2_TR(0x57681a);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B576820:{NFSU2_TR(0x576820);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B576822:{NFSU2_TR(0x576822);
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
B576825:{NFSU2_TR(0x576825);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57683e;}}
}
B576827:L576827:{c.instructions+=11;NFSU2_TR(0x576827);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57682b:{NFSU2_TR(0x57682b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57682c:{NFSU2_TR(0x57682c);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57682f:{NFSU2_TR(0x57682f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576830:{NFSU2_TR(0x576830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B576831:{NFSU2_TR(0x576831);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B576833:{NFSU2_TR(0x576833);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B576835:{NFSU2_TR(0x576835);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B576837:{NFSU2_TR(0x576837);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B576839:{NFSU2_TR(0x576839);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B57683b:{NFSU2_TR(0x57683b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57683e:L57683e:{c.instructions+=7;NFSU2_TR(0x57683e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B576840:{NFSU2_TR(0x576840);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B576841:{NFSU2_TR(0x576841);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576847:{NFSU2_TR(0x576847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576848:{NFSU2_TR(0x576848);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B576849:{NFSU2_TR(0x576849);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57684b:{NFSU2_TR(0x57684b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576850:L576850:{c.instructions+=10;NFSU2_TR(0x576850);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B576854:{NFSU2_TR(0x576854);
__builtin_memmove((R+0),(R+4),4);
}
B576856:{NFSU2_TR(0x576856);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57685a:{NFSU2_TR(0x57685a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57685d:{NFSU2_TR(0x57685d);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57685f:{NFSU2_TR(0x57685f);
u8 U[4];
w4(U+0,u32(0x787584ull));
s4(u32(r4(R+0)),r4(U+0));
}
B576865:{NFSU2_TR(0x576865);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B576868:{NFSU2_TR(0x576868);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57686b:{NFSU2_TR(0x57686b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57686e:{NFSU2_TR(0x57686e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576880:L576880:{c.instructions+=10;NFSU2_TR(0x576880);
__builtin_memmove((R+0),(R+4),4);
}
B576882:{NFSU2_TR(0x576882);
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
B576884:{NFSU2_TR(0x576884);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B576888:{NFSU2_TR(0x576888);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57688b:{NFSU2_TR(0x57688b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57688e:{NFSU2_TR(0x57688e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B576891:{NFSU2_TR(0x576891);
u8 U[4];
w4(U+0,u32(0x7a0608ull));
s4(u32(r4(R+0)),r4(U+0));
}
B576897:{NFSU2_TR(0x576897);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57689a:{NFSU2_TR(0x57689a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57689d:{NFSU2_TR(0x57689d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5768a0:L5768a0:{c.instructions+=10;NFSU2_TR(0x5768a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5768a1:{NFSU2_TR(0x5768a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5768a5:{NFSU2_TR(0x5768a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5768a8:{NFSU2_TR(0x5768a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5768a9:{NFSU2_TR(0x5768a9);
__builtin_memmove((R+24),(R+4),4);
}
B5768ab:{NFSU2_TR(0x5768ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5768ae:{NFSU2_TR(0x5768ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5768af:{NFSU2_TR(0x5768af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5768b2:{NFSU2_TR(0x5768b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5768b5:{NFSU2_TR(0x5768b5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5768ca;}}
}
B5768b7:L5768b7:{c.instructions+=3;NFSU2_TR(0x5768b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5768be:{NFSU2_TR(0x5768be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5768bf:{NFSU2_TR(0x5768bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5768c4ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B5768c4:L5768c4:{c.instructions+=2;NFSU2_TR(0x5768c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5768c7:{NFSU2_TR(0x5768c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5768ca:L5768ca:{c.instructions+=3;NFSU2_TR(0x5768ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5768cd:{NFSU2_TR(0x5768cd);
__builtin_memmove((R+4),(R+12),4);
}
B5768cf:{NFSU2_TR(0x5768cf);
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
B5768d1:L5768d1:{c.instructions+=1;NFSU2_TR(0x5768d1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5768d3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5768d1u);}goto L5768d1;}
}
B5768d3:L5768d3:{c.instructions+=4;NFSU2_TR(0x5768d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5768d4:{NFSU2_TR(0x5768d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5768d5:{NFSU2_TR(0x5768d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5768d6:{NFSU2_TR(0x5768d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5768e0:L5768e0:{c.instructions+=7;NFSU2_TR(0x5768e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5768e1:{NFSU2_TR(0x5768e1);
__builtin_memmove((R+24),(R+4),4);
}
B5768e3:{NFSU2_TR(0x5768e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5768e6:{NFSU2_TR(0x5768e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5768e9:{NFSU2_TR(0x5768e9);
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
B5768eb:{NFSU2_TR(0x5768eb);
u8 U[4];
w4(U+0,u32(0x7a0608ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5768f1:{NFSU2_TR(0x5768f1);
if(r1(R+518)){{goto L5768fc;}}
}
B5768f3:L5768f3:{c.instructions+=2;NFSU2_TR(0x5768f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5768f4:{NFSU2_TR(0x5768f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5768f9ull));
TAIL_STATIC(0x75c6dau,75c);
}
B5768f9:L5768f9:{c.instructions+=1;NFSU2_TR(0x5768f9);
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
B5768fc:L5768fc:{c.instructions+=3;NFSU2_TR(0x5768fc);
u8 U[4];
w4(U+0,u32(0x787584ull));
s4(u32(r4(R+24)),r4(U+0));
}
B576902:{NFSU2_TR(0x576902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576903:{NFSU2_TR(0x576903);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576910:L576910:{c.instructions+=8;NFSU2_TR(0x576910);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576911:{NFSU2_TR(0x576911);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576914:{NFSU2_TR(0x576914);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B576917:{NFSU2_TR(0x576917);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57691d:{NFSU2_TR(0x57691d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57691f:{NFSU2_TR(0x57691f);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B576921:{NFSU2_TR(0x576921);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576924:{NFSU2_TR(0x576924);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L576945;}}
}
B576926:L576926:{c.instructions+=3;NFSU2_TR(0x576926);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576929:{NFSU2_TR(0x576929);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57692a:{NFSU2_TR(0x57692a);
__builtin_memmove((R+12),(R+12),4);
}
B576930:L576930:{c.instructions+=8;NFSU2_TR(0x576930);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576932:{NFSU2_TR(0x576932);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B576933:{NFSU2_TR(0x576933);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B576936:{NFSU2_TR(0x576936);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B576939:{NFSU2_TR(0x576939);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57693c:{NFSU2_TR(0x57693c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B576940:{NFSU2_TR(0x576940);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B576942:{NFSU2_TR(0x576942);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576930u);}goto L576930;}}
}
B576944:L576944:{c.instructions+=1;NFSU2_TR(0x576944);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576945:L576945:{c.instructions+=4;NFSU2_TR(0x576945);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B576949:{NFSU2_TR(0x576949);
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
B57694c:{NFSU2_TR(0x57694c);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+16)),r4(U+0));
}
B576954:{NFSU2_TR(0x576954);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57695a;}}
}
B576956:L576956:{c.instructions+=1;NFSU2_TR(0x576956);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B57695a:L57695a:{c.instructions+=6;NFSU2_TR(0x57695a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57695e:{NFSU2_TR(0x57695e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B576964:{NFSU2_TR(0x576964);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576967:{NFSU2_TR(0x576967);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57696a:{NFSU2_TR(0x57696a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57696b:{NFSU2_TR(0x57696b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576970:L576970:{c.instructions+=3;NFSU2_TR(0x576970);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B576973:{NFSU2_TR(0x576973);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
}
B576976:{NFSU2_TR(0x576976);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L57697d;}}
}
B576978:L576978:{c.instructions+=2;NFSU2_TR(0x576978);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B57697a:{NFSU2_TR(0x57697a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57697d:L57697d:{c.instructions+=21;NFSU2_TR(0x57697d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576981:{NFSU2_TR(0x576981);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B576985:{NFSU2_TR(0x576985);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B576988:{NFSU2_TR(0x576988);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57698b:{NFSU2_TR(0x57698b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B57698e:{NFSU2_TR(0x57698e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576992:{NFSU2_TR(0x576992);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B576995:{NFSU2_TR(0x576995);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B576997:{NFSU2_TR(0x576997);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57699a:{NFSU2_TR(0x57699a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57699c:{NFSU2_TR(0x57699c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5769a0:{NFSU2_TR(0x5769a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5769a4:{NFSU2_TR(0x5769a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5769a7:{NFSU2_TR(0x5769a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5769aa:{NFSU2_TR(0x5769aa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5769ae:{NFSU2_TR(0x5769ae);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B5769b0:{NFSU2_TR(0x5769b0);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5769b2:{NFSU2_TR(0x5769b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5769b5:{NFSU2_TR(0x5769b5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5769b8:{NFSU2_TR(0x5769b8);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5769bb:{NFSU2_TR(0x5769bb);
if(r1(R+512)){{goto L5769c1;}}
}
B5769bd:L5769bd:{c.instructions+=1;NFSU2_TR(0x5769bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5769c1:L5769c1:{c.instructions+=1;NFSU2_TR(0x5769c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5769d0:L5769d0:{c.instructions+=5;NFSU2_TR(0x5769d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5769d1:{NFSU2_TR(0x5769d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5769d4:{NFSU2_TR(0x5769d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5769d6:{NFSU2_TR(0x5769d6);
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
B5769d8:{NFSU2_TR(0x5769d8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5769f3;}}
}
B5769da:L5769da:{c.instructions+=1;NFSU2_TR(0x5769da);
__builtin_memmove((R+12),(R+12),4);
}
B5769e0:L5769e0:{c.instructions+=7;NFSU2_TR(0x5769e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5769e3:{NFSU2_TR(0x5769e3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5769e7:{NFSU2_TR(0x5769e7);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5769ea:{NFSU2_TR(0x5769ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5769ee:{NFSU2_TR(0x5769ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5769ef:{NFSU2_TR(0x5769ef);
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
B5769f1:{NFSU2_TR(0x5769f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5769e0u);}goto L5769e0;}}
}
B5769f3:L5769f3:{c.instructions+=8;NFSU2_TR(0x5769f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5769f7:{NFSU2_TR(0x5769f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5769fb:{NFSU2_TR(0x5769fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5769ff:{NFSU2_TR(0x5769ff);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B576a03:{NFSU2_TR(0x576a03);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576a07:{NFSU2_TR(0x576a07);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576a0a:{NFSU2_TR(0x576a0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576a0b:{NFSU2_TR(0x576a0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576a10:L576a10:{c.instructions+=5;NFSU2_TR(0x576a10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576a11:{NFSU2_TR(0x576a11);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B576a14:{NFSU2_TR(0x576a14);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B576a16:{NFSU2_TR(0x576a16);
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
B576a18:{NFSU2_TR(0x576a18);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L576a33;}}
}
B576a1a:L576a1a:{c.instructions+=1;NFSU2_TR(0x576a1a);
__builtin_memmove((R+12),(R+12),4);
}
B576a20:L576a20:{c.instructions+=7;NFSU2_TR(0x576a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576a23:{NFSU2_TR(0x576a23);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576a27:{NFSU2_TR(0x576a27);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576a2a:{NFSU2_TR(0x576a2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B576a2e:{NFSU2_TR(0x576a2e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B576a2f:{NFSU2_TR(0x576a2f);
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
B576a31:{NFSU2_TR(0x576a31);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576a20u);}goto L576a20;}}
}
B576a33:L576a33:{c.instructions+=11;NFSU2_TR(0x576a33);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B576a36:{NFSU2_TR(0x576a36);
w4(R+8,u32(r1(R+0)));
}
B576a39:{NFSU2_TR(0x576a39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B576a3d:{NFSU2_TR(0x576a3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B576a40:{NFSU2_TR(0x576a40);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576a44:{NFSU2_TR(0x576a44);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B576a48:{NFSU2_TR(0x576a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576a4b:{NFSU2_TR(0x576a4b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576a4f:{NFSU2_TR(0x576a4f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576a52:{NFSU2_TR(0x576a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576a53:{NFSU2_TR(0x576a53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576a60:L576a60:{c.instructions+=6;NFSU2_TR(0x576a60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576a61:{NFSU2_TR(0x576a61);
__builtin_memmove((R+24),(R+4),4);
}
B576a63:{NFSU2_TR(0x576a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576a66:{NFSU2_TR(0x576a66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576a67:{NFSU2_TR(0x576a67);
u8 U[4];
w4(U+0,u32(0x7a0610ull));
s4(u32(r4(R+24)),r4(U+0));
}
B576a6d:{NFSU2_TR(0x576a6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576a72ull));
TAIL_STATIC(0x75c6dau,75c);
}
B576a72:L576a72:{c.instructions+=6;NFSU2_TR(0x576a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576a75:{NFSU2_TR(0x576a75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576a78:{NFSU2_TR(0x576a78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B576a7b:{NFSU2_TR(0x576a7b);
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
B576a7d:{NFSU2_TR(0x576a7d);
u8 U[4];
w4(U+0,u32(0x7a0608ull));
s4(u32(r4(R+24)),r4(U+0));
}
B576a83:{NFSU2_TR(0x576a83);
if(r1(R+518)){{goto L576a8e;}}
}
B576a85:L576a85:{c.instructions+=2;NFSU2_TR(0x576a85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576a86:{NFSU2_TR(0x576a86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576a8bull));
TAIL_STATIC(0x75c6dau,75c);
}
B576a8b:L576a8b:{c.instructions+=1;NFSU2_TR(0x576a8b);
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
B576a8e:L576a8e:{c.instructions+=3;NFSU2_TR(0x576a8e);
u8 U[4];
w4(U+0,u32(0x787584ull));
s4(u32(r4(R+24)),r4(U+0));
}
B576a94:{NFSU2_TR(0x576a94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576a95:{NFSU2_TR(0x576a95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576aa0:L576aa0:{c.instructions+=10;NFSU2_TR(0x576aa0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B576aa4:{NFSU2_TR(0x576aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576aa7:{NFSU2_TR(0x576aa7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B576aaa:{NFSU2_TR(0x576aaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576aab:{NFSU2_TR(0x576aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B576aae:{NFSU2_TR(0x576aae);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576ab0:{NFSU2_TR(0x576ab0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B576ab6:{NFSU2_TR(0x576ab6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B576ab8:{NFSU2_TR(0x576ab8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B576abb:{NFSU2_TR(0x576abb);
if(r1(R+514)){{goto L576ad5;}}
}
B576abd:L576abd:{c.instructions+=6;NFSU2_TR(0x576abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576ac0:{NFSU2_TR(0x576ac0);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576ac3:{NFSU2_TR(0x576ac3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B576ac9:{NFSU2_TR(0x576ac9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B576acb:{NFSU2_TR(0x576acb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B576ace:{NFSU2_TR(0x576ace);
if(r1(R+514)){{goto L576ad5;}}
}
B576ad0:L576ad0:{c.instructions+=2;NFSU2_TR(0x576ad0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B576ad3:{NFSU2_TR(0x576ad3);
{goto L576add;}
}
B576ad5:L576ad5:{c.instructions+=3;NFSU2_TR(0x576ad5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576ad8:{NFSU2_TR(0x576ad8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B576ada:{NFSU2_TR(0x576ada);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576add:L576add:{c.instructions+=18;NFSU2_TR(0x576add);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576ae1:{NFSU2_TR(0x576ae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576ae5:{NFSU2_TR(0x576ae5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B576ae8:{NFSU2_TR(0x576ae8);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576aeb:{NFSU2_TR(0x576aeb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B576aed:{NFSU2_TR(0x576aed);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B576af1:{NFSU2_TR(0x576af1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576af5:{NFSU2_TR(0x576af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576af8:{NFSU2_TR(0x576af8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576af9:{NFSU2_TR(0x576af9);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576afc:{NFSU2_TR(0x576afc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576aff:{NFSU2_TR(0x576aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576b02:{NFSU2_TR(0x576b02);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576b06:{NFSU2_TR(0x576b06);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B576b09:{NFSU2_TR(0x576b09);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B576b0c:{NFSU2_TR(0x576b0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B576b0e:{NFSU2_TR(0x576b0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B576b11:{NFSU2_TR(0x576b11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576b7d;}}
}
B576b13:L576b13:{c.instructions+=8;NFSU2_TR(0x576b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576b16:{NFSU2_TR(0x576b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576b19:{NFSU2_TR(0x576b19);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B576b1c:{NFSU2_TR(0x576b1c);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576b1f:{NFSU2_TR(0x576b1f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B576b25:{NFSU2_TR(0x576b25);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B576b27:{NFSU2_TR(0x576b27);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B576b2a:{NFSU2_TR(0x576b2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576b50;}}
}
B576b2c:L576b2c:{c.instructions+=10;NFSU2_TR(0x576b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576b2f:{NFSU2_TR(0x576b2f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576b32:{NFSU2_TR(0x576b32);
{u32 ea_=u32(r4(R+8)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B576b35:{NFSU2_TR(0x576b35);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B576b37:{NFSU2_TR(0x576b37);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576b3a:{NFSU2_TR(0x576b3a);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B576b40:{NFSU2_TR(0x576b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576b43:{NFSU2_TR(0x576b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576b46:{NFSU2_TR(0x576b46);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B576b4d:{NFSU2_TR(0x576b4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B576b50:L576b50:{c.instructions+=6;NFSU2_TR(0x576b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576b53:{NFSU2_TR(0x576b53);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B576b57:{NFSU2_TR(0x576b57);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B576b58:{NFSU2_TR(0x576b58);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B576b5a:{NFSU2_TR(0x576b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576b5d:{NFSU2_TR(0x576b5d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L576b66;}}
}
B576b5f:L576b5f:{c.instructions+=1;NFSU2_TR(0x576b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B576b66:L576b66:{c.instructions+=8;NFSU2_TR(0x576b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576b69:{NFSU2_TR(0x576b69);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576b6d:{NFSU2_TR(0x576b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576b70:{NFSU2_TR(0x576b70);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B576b73:{NFSU2_TR(0x576b73);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B576b76:{NFSU2_TR(0x576b76);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B576b78:{NFSU2_TR(0x576b78);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B576b7b:{NFSU2_TR(0x576b7b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576b13u);}goto L576b13;}}
}
B576b7d:L576b7d:{c.instructions+=11;NFSU2_TR(0x576b7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B576b81:{NFSU2_TR(0x576b81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576b85:{NFSU2_TR(0x576b85);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B576b88:{NFSU2_TR(0x576b88);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B576b8b:{NFSU2_TR(0x576b8b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B576b8f:{NFSU2_TR(0x576b8f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B576b91:{NFSU2_TR(0x576b91);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B576b93:{NFSU2_TR(0x576b93);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B576b96:{NFSU2_TR(0x576b96);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B576b99:{NFSU2_TR(0x576b99);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576b9c:{NFSU2_TR(0x576b9c);
if(r1(R+512)){{goto L576ba2;}}
}
B576b9e:L576b9e:{c.instructions+=1;NFSU2_TR(0x576b9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B576ba2:L576ba2:{c.instructions+=1;NFSU2_TR(0x576ba2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576bb0:L576bb0:{c.instructions+=11;NFSU2_TR(0x576bb0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576bb4:{NFSU2_TR(0x576bb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576bb5:{NFSU2_TR(0x576bb5);
__builtin_memmove((R+24),(R+4),4);
}
B576bb7:{NFSU2_TR(0x576bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576bba:{NFSU2_TR(0x576bba);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B576bbe:{NFSU2_TR(0x576bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576bc4:{NFSU2_TR(0x576bc4);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B576bca:{NFSU2_TR(0x576bca);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B576bce:{NFSU2_TR(0x576bce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B576bd0:{NFSU2_TR(0x576bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576bd3:{NFSU2_TR(0x576bd3);
if(r1(R+518)){{goto L576bdf;}}
}
B576bd5:L576bd5:{c.instructions+=2;NFSU2_TR(0x576bd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B576bdd:{NFSU2_TR(0x576bdd);
{goto L576bf5;}
}
B576bdf:L576bdf:{c.instructions+=5;NFSU2_TR(0x576bdf);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576be5:{NFSU2_TR(0x576be5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B576be7:{NFSU2_TR(0x576be7);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B576bed:{NFSU2_TR(0x576bed);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576bf1:{NFSU2_TR(0x576bf1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576bf5:L576bf5:{c.instructions+=3;NFSU2_TR(0x576bf5);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B576bf9:{NFSU2_TR(0x576bf9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B576bfb:{NFSU2_TR(0x576bfb);
if(r1(R+518)){{goto L576c09;}}
}
B576bfd:L576bfd:{c.instructions+=3;NFSU2_TR(0x576bfd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B576bff:{NFSU2_TR(0x576bff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B576c07:{NFSU2_TR(0x576c07);
{goto L576c11;}
}
B576c09:L576c09:{c.instructions+=2;NFSU2_TR(0x576c09);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B576c0d:{NFSU2_TR(0x576c0d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576c11:L576c11:{c.instructions+=4;NFSU2_TR(0x576c11);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B576c15:{NFSU2_TR(0x576c15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576c16:{NFSU2_TR(0x576c16);
__builtin_memmove((R+4),(R+24),4);
}
B576c18:{NFSU2_TR(0x576c18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576c1dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576970u);}goto L576970;}
}
B576c1d:L576c1d:{c.instructions+=4;NFSU2_TR(0x576c1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576c21:{NFSU2_TR(0x576c21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576c22:{NFSU2_TR(0x576c22);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576c25:{NFSU2_TR(0x576c25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576c2aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576970u);}goto L576970;}
}
B576c2a:L576c2a:{c.instructions+=4;NFSU2_TR(0x576c2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B576c2e:{NFSU2_TR(0x576c2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576c2f:{NFSU2_TR(0x576c2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576c32:{NFSU2_TR(0x576c32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576c37ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576970u);}goto L576970;}
}
B576c37:L576c37:{c.instructions+=2;NFSU2_TR(0x576c37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576c38:{NFSU2_TR(0x576c38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576c40:L576c40:{c.instructions+=5;NFSU2_TR(0x576c40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576c44:{NFSU2_TR(0x576c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B576c4b:{NFSU2_TR(0x576c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B576c51:{NFSU2_TR(0x576c51);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B576c54:{NFSU2_TR(0x576c54);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5769d0u);}goto L5769d0;}
}
B576c60:L576c60:{c.instructions+=10;NFSU2_TR(0x576c60);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576c64:{NFSU2_TR(0x576c64);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B576c68:{NFSU2_TR(0x576c68);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576c6c:{NFSU2_TR(0x576c6c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B576c70:{NFSU2_TR(0x576c70);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B576c72:{NFSU2_TR(0x576c72);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B576c74:{NFSU2_TR(0x576c74);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576c78:{NFSU2_TR(0x576c78);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B576c7c:{NFSU2_TR(0x576c7c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576c7f:{NFSU2_TR(0x576c7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576c90:L576c90:{c.instructions+=4;NFSU2_TR(0x576c90);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576c94:{NFSU2_TR(0x576c94);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576c96:{NFSU2_TR(0x576c96);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B576c99:{NFSU2_TR(0x576c99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576ca0:L576ca0:{c.instructions+=2;NFSU2_TR(0x576ca0);
__builtin_memmove((R+0),gp(0x7fb700),4);
}
B576ca5:{NFSU2_TR(0x576ca5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576cb0:L576cb0:{c.instructions+=4;NFSU2_TR(0x576cb0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B576cb6:{NFSU2_TR(0x576cb6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B576cba:{NFSU2_TR(0x576cba);
{u32 ea_=u32(u32(8803672u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B576cc0:{NFSU2_TR(0x576cc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576cd0:L576cd0:{c.instructions+=3;NFSU2_TR(0x576cd0);
__builtin_memmove((R+0),gp(0x7fb710),4);
}
B576cd5:{NFSU2_TR(0x576cd5);
__builtin_memmove(gp(0x865558),(R+0),4);
}
B576cda:{NFSU2_TR(0x576cda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576ce0:L576ce0:{c.instructions+=3;NFSU2_TR(0x576ce0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B576ce4:{NFSU2_TR(0x576ce4);
{u32 ea_=u32(u32(7996952u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B576cea:{NFSU2_TR(0x576cea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576cf0:L576cf0:{c.instructions+=11;NFSU2_TR(0x576cf0);
w4(R+0,u32(0x1ull));
}
B576cf5:{NFSU2_TR(0x576cf5);
__builtin_memmove(gp(0x7fb71c),(R+0),4);
}
B576cfa:{NFSU2_TR(0x576cfa);
__builtin_memmove(gp(0x7fb720),(R+0),4);
}
B576cff:{NFSU2_TR(0x576cff);
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
B576d01:{NFSU2_TR(0x576d01);
s4(0x86518c,u32(0xfa0ull));
}
B576d0b:{NFSU2_TR(0x576d0b);
s4(0x7fb718,u32(0x3f800000ull));
}
B576d15:{NFSU2_TR(0x576d15);
__builtin_memmove(gp(0x865150),(R+0),4);
}
B576d1a:{NFSU2_TR(0x576d1a);
__builtin_memmove(gp(0x865154),(R+0),4);
}
B576d1f:{NFSU2_TR(0x576d1f);
__builtin_memmove(gp(0x865158),(R+0),4);
}
B576d24:{NFSU2_TR(0x576d24);
__builtin_memmove(gp(0x7fb724),(R+0),4);
}
B576d29:{NFSU2_TR(0x576d29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B576d30:L576d30:{c.instructions+=15;NFSU2_TR(0x576d30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B576d33:{NFSU2_TR(0x576d33);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576d37:{NFSU2_TR(0x576d37);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576d38:{NFSU2_TR(0x576d38);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B576d3c:{NFSU2_TR(0x576d3c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576d3d:{NFSU2_TR(0x576d3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B576d41:{NFSU2_TR(0x576d41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576d42:{NFSU2_TR(0x576d42);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B576d46:{NFSU2_TR(0x576d46);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B576d49:{NFSU2_TR(0x576d49);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B576d4b:{NFSU2_TR(0x576d4b);
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
B576d4d:{NFSU2_TR(0x576d4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576d4e:{NFSU2_TR(0x576d4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B576d52:{NFSU2_TR(0x576d52);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B576d56:{NFSU2_TR(0x576d56);
if(r1(R+518)){{goto L576ec2;}}
}
B576d5c:L576d5c:{c.instructions+=3;NFSU2_TR(0x576d5c);
w4(R+20,u32(0x4ull));
}
B576d61:{NFSU2_TR(0x576d61);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B576d69:{NFSU2_TR(0x576d69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576d6eull));
TAIL_STATIC(0x4ff970u,4ff);
}
B576d6e:L576d6e:{c.instructions+=3;NFSU2_TR(0x576d6e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B576d71:{NFSU2_TR(0x576d71);
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
B576d74:{NFSU2_TR(0x576d74);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L576de3;}}
}
B576d76:L576d76:{c.instructions+=1;NFSU2_TR(0x576d76);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x57717cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B576d7d:L576d7d:{c.instructions+=4;NFSU2_TR(0x576d7d);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B576d82:{NFSU2_TR(0x576d82);
w4(R+20,u32(0x3ull));
}
B576d87:{NFSU2_TR(0x576d87);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B576d8f:{NFSU2_TR(0x576d8f);
if(r1(R+518)){{goto L576ddc;}}
}
B576d91:L576d91:{c.instructions+=2;NFSU2_TR(0x576d91);
w4(R+0,u32(0x7a06f0ull));
}
B576d96:{NFSU2_TR(0x576d96);
{goto L576df4;}
}
B576d98:L576d98:{c.instructions+=4;NFSU2_TR(0x576d98);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B576d9d:{NFSU2_TR(0x576d9d);
w4(R+20,u32(0x3ull));
}
B576da2:{NFSU2_TR(0x576da2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B576daa:{NFSU2_TR(0x576daa);
if(r1(R+518)){{goto L576db3;}}
}
B576dac:L576dac:{c.instructions+=2;NFSU2_TR(0x576dac);
w4(R+0,u32(0x7a06e4ull));
}
B576db1:{NFSU2_TR(0x576db1);
{goto L576df4;}
}
B576db3:L576db3:{c.instructions+=2;NFSU2_TR(0x576db3);
w4(R+0,u32(0x7a06d8ull));
}
B576db8:{NFSU2_TR(0x576db8);
{goto L576df4;}
}
B576dba:L576dba:{c.instructions+=4;NFSU2_TR(0x576dba);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B576dbf:{NFSU2_TR(0x576dbf);
w4(R+20,u32(0x3ull));
}
B576dc4:{NFSU2_TR(0x576dc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B576dcc:{NFSU2_TR(0x576dcc);
if(r1(R+518)){{goto L576dd5;}}
}
B576dce:L576dce:{c.instructions+=2;NFSU2_TR(0x576dce);
w4(R+0,u32(0x7a06ccull));
}
B576dd3:{NFSU2_TR(0x576dd3);
{goto L576df4;}
}
B576dd5:L576dd5:{c.instructions+=2;NFSU2_TR(0x576dd5);
w4(R+0,u32(0x7a06c0ull));
}
B576dda:{NFSU2_TR(0x576dda);
{goto L576df4;}
}
B576ddc:L576ddc:{c.instructions+=2;NFSU2_TR(0x576ddc);
w4(R+0,u32(0x7909ecull));
}
B576de1:{NFSU2_TR(0x576de1);
{goto L576df4;}
}
B576de3:L576de3:{c.instructions+=3;NFSU2_TR(0x576de3);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B576de8:{NFSU2_TR(0x576de8);
w4(R+0,u32(0x7a06b4ull));
}
B576ded:{NFSU2_TR(0x576ded);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576df4;}}
}
B576def:L576def:{c.instructions+=1;NFSU2_TR(0x576def);
w4(R+0,u32(0x7a06a8ull));
}
B576df4:L576df4:{c.instructions+=3;NFSU2_TR(0x576df4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576df5:{NFSU2_TR(0x576df5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576df6:{NFSU2_TR(0x576df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576dfbull));
TAIL_STATIC(0x43dbd0u,43d);
}
B576dfb:L576dfb:{c.instructions+=4;NFSU2_TR(0x576dfb);
__builtin_memmove((R+4),(R+24),4);
}
B576dfd:{NFSU2_TR(0x576dfd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B576e00:{NFSU2_TR(0x576e00);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576e03:{NFSU2_TR(0x576e03);
w4(R+28,u32(0x2ull));
}
B576e08:L576e08:{c.instructions+=6;NFSU2_TR(0x576e08);
__builtin_memmove((R+0),(R+4),4);
}
B576e0a:{NFSU2_TR(0x576e0a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B576e0b:{NFSU2_TR(0x576e0b);
w4(R+12,u32(0xaull));
}
B576e10:{NFSU2_TR(0x576e10);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x576e10);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x576e10);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B576e12:{NFSU2_TR(0x576e12);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B576e14:{NFSU2_TR(0x576e14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576e1f;}}
}
B576e16:L576e16:{c.instructions+=2;NFSU2_TR(0x576e16);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B576e18:{NFSU2_TR(0x576e18);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L576e1f;}}
}
B576e1a:L576e1a:{c.instructions+=2;NFSU2_TR(0x576e1a);
u8 U[1];
w1(U+0,u8(0x20ull));
s1(u32(r4(R+24)),r1(U+0));
}
B576e1d:{NFSU2_TR(0x576e1d);
{goto L576e24;}
}
B576e1f:L576e1f:{c.instructions+=2;NFSU2_TR(0x576e1f);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B576e22:{NFSU2_TR(0x576e22);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B576e24:L576e24:{c.instructions+=4;NFSU2_TR(0x576e24);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B576e25:{NFSU2_TR(0x576e25);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B576e26:{NFSU2_TR(0x576e26);
__builtin_memmove((R+4),(R+0),4);
}
B576e28:{NFSU2_TR(0x576e28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576e08u);}goto L576e08;}}
}
B576e2a:L576e2a:{c.instructions+=5;NFSU2_TR(0x576e2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B576e2e:{NFSU2_TR(0x576e2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576e32:{NFSU2_TR(0x576e32);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B576e36:{NFSU2_TR(0x576e36);
w4(R+24,u32(0x2ull));
}
B576e3b:{NFSU2_TR(0x576e3b);
{goto L576e40;}
}
B576e40:L576e40:{c.instructions+=8;NFSU2_TR(0x576e40);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B576e41:{NFSU2_TR(0x576e41);
w4(R+28,u32(0xaull));
}
B576e46:{NFSU2_TR(0x576e46);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x576e46);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x576e46);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B576e48:{NFSU2_TR(0x576e48);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B576e4b:{NFSU2_TR(0x576e4b);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B576e4d:{NFSU2_TR(0x576e4d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B576e4e:{NFSU2_TR(0x576e4e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B576e4f:{NFSU2_TR(0x576e4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576e40u);}goto L576e40;}}
}
B576e51:L576e51:{c.instructions+=4;NFSU2_TR(0x576e51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B576e55:{NFSU2_TR(0x576e55);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576e59:{NFSU2_TR(0x576e59);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B576e5d:{NFSU2_TR(0x576e5d);
w4(R+24,u32(0x2ull));
}
B576e62:L576e62:{c.instructions+=8;NFSU2_TR(0x576e62);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B576e63:{NFSU2_TR(0x576e63);
w4(R+28,u32(0xaull));
}
B576e68:{NFSU2_TR(0x576e68);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x576e68);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x576e68);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B576e6a:{NFSU2_TR(0x576e6a);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B576e6d:{NFSU2_TR(0x576e6d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B576e6f:{NFSU2_TR(0x576e6f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B576e70:{NFSU2_TR(0x576e70);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B576e71:{NFSU2_TR(0x576e71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576e62u);}goto L576e62;}}
}
B576e73:L576e73:{c.instructions+=4;NFSU2_TR(0x576e73);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576e77:{NFSU2_TR(0x576e77);
__builtin_memmove((R+24),(R+0),4);
}
B576e79:{NFSU2_TR(0x576e79);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B576e7c:{NFSU2_TR(0x576e7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576e86;}}
}
B576e7e:L576e7e:{c.instructions+=2;NFSU2_TR(0x576e7e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B576e80:{NFSU2_TR(0x576e80);
if(r1(R+518)){TAIL_STATIC(0x57715au,577);}
}
B576e86:L576e86:{c.instructions+=2;NFSU2_TR(0x576e86);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x9ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B576e8b:{NFSU2_TR(0x576e8b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x57715au,577);}
}
B576e91:L576e91:{c.instructions+=2;NFSU2_TR(0x576e91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576e92:{NFSU2_TR(0x576e92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576e97ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B576e97:L576e97:{c.instructions+=5;NFSU2_TR(0x576e97);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B576e9b:{NFSU2_TR(0x576e9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576e9c:{NFSU2_TR(0x576e9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576e9d:{NFSU2_TR(0x576e9d);
__builtin_memmove((R+28),(R+0),4);
}
B576e9f:{NFSU2_TR(0x576e9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576ea4ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B576ea4:L576ea4:{c.instructions+=4;NFSU2_TR(0x576ea4);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B576ea8:{NFSU2_TR(0x576ea8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B576eab:{NFSU2_TR(0x576eab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B576ead:{NFSU2_TR(0x576ead);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576eb4;}}
}
B576eaf:L576eaf:{c.instructions+=1;NFSU2_TR(0x576eaf);
u8 U[13];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B576eb4:L576eb4:{c.instructions+=5;NFSU2_TR(0x576eb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B576eb8:{NFSU2_TR(0x576eb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576eb9:{NFSU2_TR(0x576eb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B576ebc:{NFSU2_TR(0x576ebc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576ebd:{NFSU2_TR(0x576ebd);
TAIL_STATIC(0x577152u,577);
}
B576ec2:L576ec2:{c.instructions+=1;NFSU2_TR(0x576ec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576ec7ull));
TAIL_STATIC(0x4ff970u,4ff);
}
B576ec7:L576ec7:{c.instructions+=2;NFSU2_TR(0x576ec7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B576ec9:{NFSU2_TR(0x576ec9);
if(r1(R+518)){{goto L576fe0;}}
}
B576ecf:L576ecf:{c.instructions+=3;NFSU2_TR(0x576ecf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B576ed2:{NFSU2_TR(0x576ed2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B576ed5:{NFSU2_TR(0x576ed5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L576f08;}}
}
B576ed7:L576ed7:{c.instructions+=1;NFSU2_TR(0x576ed7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x577194ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B576ede:L576ede:{c.instructions+=2;NFSU2_TR(0x576ede);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B576ee3:{NFSU2_TR(0x576ee3);
if(r1(R+518)){{goto L576eec;}}
}
B576ee5:L576ee5:{c.instructions+=2;NFSU2_TR(0x576ee5);
w4(R+0,u32(0x7a069cull));
}
B576eea:{NFSU2_TR(0x576eea);
{goto L576f19;}
}
B576eec:L576eec:{c.instructions+=2;NFSU2_TR(0x576eec);
w4(R+0,u32(0x7a0690ull));
}
B576ef1:{NFSU2_TR(0x576ef1);
{goto L576f19;}
}
B576ef3:L576ef3:{c.instructions+=2;NFSU2_TR(0x576ef3);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B576ef8:{NFSU2_TR(0x576ef8);
if(r1(R+518)){{goto L576f01;}}
}
B576efa:L576efa:{c.instructions+=2;NFSU2_TR(0x576efa);
w4(R+0,u32(0x7a0684ull));
}
B576eff:{NFSU2_TR(0x576eff);
{goto L576f19;}
}
B576f01:L576f01:{c.instructions+=2;NFSU2_TR(0x576f01);
w4(R+0,u32(0x7a0678ull));
}
B576f06:{NFSU2_TR(0x576f06);
{goto L576f19;}
}
B576f08:L576f08:{c.instructions+=3;NFSU2_TR(0x576f08);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B576f0d:{NFSU2_TR(0x576f0d);
w4(R+0,u32(0x7a066cull));
}
B576f12:{NFSU2_TR(0x576f12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576f19;}}
}
B576f14:L576f14:{c.instructions+=1;NFSU2_TR(0x576f14);
w4(R+0,u32(0x7a0660ull));
}
B576f19:L576f19:{c.instructions+=3;NFSU2_TR(0x576f19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576f1a:{NFSU2_TR(0x576f1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576f1b:{NFSU2_TR(0x576f1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576f20ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B576f20:L576f20:{c.instructions+=5;NFSU2_TR(0x576f20);
__builtin_memmove((R+4),(R+28),4);
}
B576f22:{NFSU2_TR(0x576f22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B576f25:{NFSU2_TR(0x576f25);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B576f28:{NFSU2_TR(0x576f28);
w4(R+28,u32(0x2ull));
}
B576f2d:{NFSU2_TR(0x576f2d);
__builtin_memmove((R+4),(R+4),4);
}
B576f30:L576f30:{c.instructions+=6;NFSU2_TR(0x576f30);
__builtin_memmove((R+0),(R+4),4);
}
B576f32:{NFSU2_TR(0x576f32);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B576f33:{NFSU2_TR(0x576f33);
w4(R+20,u32(0xaull));
}
B576f38:{NFSU2_TR(0x576f38);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x576f38);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x576f38);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B576f3a:{NFSU2_TR(0x576f3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B576f3c:{NFSU2_TR(0x576f3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576f47;}}
}
B576f3e:L576f3e:{c.instructions+=2;NFSU2_TR(0x576f3e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B576f40:{NFSU2_TR(0x576f40);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L576f47;}}
}
B576f42:L576f42:{c.instructions+=2;NFSU2_TR(0x576f42);
u8 U[1];
w1(U+0,u8(0x20ull));
s1(u32(r4(R+24)),r1(U+0));
}
B576f45:{NFSU2_TR(0x576f45);
{goto L576f4c;}
}
B576f47:L576f47:{c.instructions+=2;NFSU2_TR(0x576f47);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B576f4a:{NFSU2_TR(0x576f4a);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B576f4c:L576f4c:{c.instructions+=4;NFSU2_TR(0x576f4c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B576f4d:{NFSU2_TR(0x576f4d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B576f4e:{NFSU2_TR(0x576f4e);
__builtin_memmove((R+4),(R+0),4);
}
B576f50:{NFSU2_TR(0x576f50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576f30u);}goto L576f30;}}
}
B576f52:L576f52:{c.instructions+=4;NFSU2_TR(0x576f52);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576f56:{NFSU2_TR(0x576f56);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576f59:{NFSU2_TR(0x576f59);
w4(R+24,u32(0x2ull));
}
B576f5e:{NFSU2_TR(0x576f5e);
__builtin_memmove((R+28),(R+28),4);
}
B576f60:L576f60:{c.instructions+=8;NFSU2_TR(0x576f60);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B576f61:{NFSU2_TR(0x576f61);
w4(R+28,u32(0xaull));
}
B576f66:{NFSU2_TR(0x576f66);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x576f66);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x576f66);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B576f68:{NFSU2_TR(0x576f68);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B576f6b:{NFSU2_TR(0x576f6b);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B576f6d:{NFSU2_TR(0x576f6d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B576f6e:{NFSU2_TR(0x576f6e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B576f6f:{NFSU2_TR(0x576f6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576f60u);}goto L576f60;}}
}
B576f71:L576f71:{c.instructions+=4;NFSU2_TR(0x576f71);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576f75:{NFSU2_TR(0x576f75);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B576f78:{NFSU2_TR(0x576f78);
w4(R+24,u32(0x2ull));
}
B576f7d:{NFSU2_TR(0x576f7d);
__builtin_memmove((R+4),(R+4),4);
}
B576f80:L576f80:{c.instructions+=8;NFSU2_TR(0x576f80);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B576f81:{NFSU2_TR(0x576f81);
w4(R+28,u32(0xaull));
}
B576f86:{NFSU2_TR(0x576f86);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x576f86);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x576f86);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B576f88:{NFSU2_TR(0x576f88);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B576f8b:{NFSU2_TR(0x576f8b);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B576f8d:{NFSU2_TR(0x576f8d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B576f8e:{NFSU2_TR(0x576f8e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B576f8f:{NFSU2_TR(0x576f8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x576f80u);}goto L576f80;}}
}
B576f91:L576f91:{c.instructions+=4;NFSU2_TR(0x576f91);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B576f95:{NFSU2_TR(0x576f95);
__builtin_memmove((R+24),(R+0),4);
}
B576f97:{NFSU2_TR(0x576f97);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B576f9a:{NFSU2_TR(0x576f9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576fa4;}}
}
B576f9c:L576f9c:{c.instructions+=2;NFSU2_TR(0x576f9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B576f9e:{NFSU2_TR(0x576f9e);
if(r1(R+518)){TAIL_STATIC(0x57715au,577);}
}
B576fa4:L576fa4:{c.instructions+=2;NFSU2_TR(0x576fa4);
u8 U[16];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x9ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B576fa9:{NFSU2_TR(0x576fa9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x57715au,577);}
}
B576faf:L576faf:{c.instructions+=2;NFSU2_TR(0x576faf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576fb0:{NFSU2_TR(0x576fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576fb5ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B576fb5:L576fb5:{c.instructions+=5;NFSU2_TR(0x576fb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B576fb9:{NFSU2_TR(0x576fb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576fba:{NFSU2_TR(0x576fba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576fbb:{NFSU2_TR(0x576fbb);
__builtin_memmove((R+28),(R+0),4);
}
B576fbd:{NFSU2_TR(0x576fbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x576fc2ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B576fc2:L576fc2:{c.instructions+=4;NFSU2_TR(0x576fc2);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B576fc6:{NFSU2_TR(0x576fc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B576fc9:{NFSU2_TR(0x576fc9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B576fcb:{NFSU2_TR(0x576fcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L576fd2;}}
}
B576fcd:L576fcd:{c.instructions+=1;NFSU2_TR(0x576fcd);
u8 U[13];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B576fd2:L576fd2:{c.instructions+=5;NFSU2_TR(0x576fd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B576fd6:{NFSU2_TR(0x576fd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576fd7:{NFSU2_TR(0x576fd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B576fda:{NFSU2_TR(0x576fda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B576fdb:{NFSU2_TR(0x576fdb);
TAIL_STATIC(0x577152u,577);
}
B576fe0:L576fe0:{c.instructions+=2;NFSU2_TR(0x576fe0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B576fe2:{NFSU2_TR(0x576fe2);
if(r1(R+518)){TAIL_STATIC(0x5770c0u,577);}
}
B576fe8:L576fe8:{c.instructions+=2;NFSU2_TR(0x576fe8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B576feb:{NFSU2_TR(0x576feb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x577007u,577);}
}
B576fed:L576fed:{c.instructions+=2;NFSU2_TR(0x576fed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B576ff0:{NFSU2_TR(0x576ff0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x577007u,577);}
}
B576ff2:L576ff2:{c.instructions+=2;NFSU2_TR(0x576ff2);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B576ff7:{NFSU2_TR(0x576ff7);
if(r1(R+518)){TAIL_STATIC(0x577000u,577);}
}
B576ff9:L576ff9:{c.instructions+=2;NFSU2_TR(0x576ff9);
w4(R+0,u32(0x7a0658ull));
}
B576ffe:{NFSU2_TR(0x576ffe);
TAIL_STATIC(0x577018u,577);
}
XIT:NFSU2_TR_EXIT(0x576,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
