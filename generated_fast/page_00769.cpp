#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_765(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_767(u8* __restrict R,Cpu& c);
u32 body_768(u8* __restrict R,Cpu& c);
u32 body_76a(u8* __restrict R,Cpu& c);
u32 body_76c(u8* __restrict R,Cpu& c);
u32 body_76d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x769,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x769,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_769(u8* __restrict R,Cpu& c);
u32 page_769(Cpu& c){return body_769(c.regs.data(),c);}
__attribute__((noinline)) u32 body_769(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x769003:goto L769003;
case 0x769006:c.instructions+=6;goto B769006;
case 0x769008:c.instructions+=5;goto B769008;
case 0x76900a:c.instructions+=4;goto B76900a;
case 0x76900b:c.instructions+=3;goto B76900b;
case 0x76900c:c.instructions+=2;goto B76900c;
case 0x769011:c.instructions+=1;goto B769011;
case 0x769013:goto L769013;
case 0x76901d:c.instructions+=1;goto B76901d;
case 0x76901f:goto L76901f;
case 0x769025:c.instructions+=1;goto B769025;
case 0x76902a:goto L76902a;
case 0x76902f:goto L76902f;
case 0x769031:c.instructions+=2;goto B769031;
case 0x769036:c.instructions+=1;goto B769036;
case 0x76903c:goto L76903c;
case 0x769043:c.instructions+=1;goto B769043;
case 0x769045:goto L769045;
case 0x76904c:goto L76904c;
case 0x76904d:goto L76904d;
case 0x76904e:c.instructions+=4;goto B76904e;
case 0x769050:c.instructions+=3;goto B769050;
case 0x769056:c.instructions+=2;goto B769056;
case 0x769057:c.instructions+=1;goto B769057;
case 0x769059:goto L769059;
case 0x769060:c.instructions+=1;goto B769060;
case 0x769062:goto L769062;
case 0x769067:c.instructions+=2;goto B769067;
case 0x76906c:c.instructions+=1;goto B76906c;
case 0x76906e:goto L76906e;
case 0x769078:goto L769078;
case 0x76907c:c.instructions+=2;goto B76907c;
case 0x76907e:c.instructions+=1;goto B76907e;
case 0x769084:goto L769084;
case 0x769087:c.instructions+=5;goto B769087;
case 0x769089:c.instructions+=4;goto B769089;
case 0x76908b:c.instructions+=3;goto B76908b;
case 0x769091:c.instructions+=2;goto B769091;
case 0x769096:c.instructions+=1;goto B769096;
case 0x769098:goto L769098;
case 0x76909a:c.instructions+=1;goto B76909a;
case 0x76909c:goto L76909c;
case 0x7690a1:c.instructions+=3;goto B7690a1;
case 0x7690a3:c.instructions+=2;goto B7690a3;
case 0x7690a8:c.instructions+=1;goto B7690a8;
case 0x7690ad:goto L7690ad;
case 0x7690b3:c.instructions+=2;goto B7690b3;
case 0x7690b8:c.instructions+=1;goto B7690b8;
case 0x7690bb:goto L7690bb;
case 0x7690bd:c.instructions+=2;goto B7690bd;
case 0x7690c3:c.instructions+=1;goto B7690c3;
case 0x7690c5:goto L7690c5;
case 0x7690c7:c.instructions+=1;goto B7690c7;
case 0x7690c9:goto L7690c9;
case 0x7690cb:c.instructions+=1;goto B7690cb;
case 0x7690cd:goto L7690cd;
case 0x7690cf:c.instructions+=1;goto B7690cf;
case 0x7690d1:goto L7690d1;
case 0x7690d6:goto L7690d6;
case 0x7690d8:goto L7690d8;
case 0x7690dd:goto L7690dd;
case 0x7690e3:c.instructions+=1;goto B7690e3;
case 0x7690e5:goto L7690e5;
case 0x7690ea:c.instructions+=3;goto B7690ea;
case 0x7690ec:c.instructions+=2;goto B7690ec;
case 0x7690f1:c.instructions+=1;goto B7690f1;
case 0x7690f6:goto L7690f6;
case 0x7690f9:c.instructions+=2;goto B7690f9;
case 0x7690fb:c.instructions+=1;goto B7690fb;
case 0x7690fd:goto L7690fd;
case 0x769102:c.instructions+=2;goto B769102;
case 0x769104:c.instructions+=1;goto B769104;
case 0x769106:goto L769106;
case 0x769108:c.instructions+=1;goto B769108;
case 0x76910a:goto L76910a;
case 0x76910f:goto L76910f;
case 0x769111:goto L769111;
case 0x769116:goto L769116;
case 0x769118:goto L769118;
case 0x76911a:c.instructions+=1;goto B76911a;
case 0x76911c:goto L76911c;
case 0x76911e:c.instructions+=1;goto B76911e;
case 0x769120:goto L769120;
case 0x769125:goto L769125;
case 0x769127:goto L769127;
case 0x76912c:goto L76912c;
case 0x769132:c.instructions+=1;goto B769132;
case 0x769134:goto L769134;
case 0x769136:c.instructions+=1;goto B769136;
case 0x76913b:goto L76913b;
case 0x76913c:c.instructions+=2;goto B76913c;
case 0x769142:c.instructions+=1;goto B769142;
case 0x769147:goto L769147;
case 0x769149:c.instructions+=2;goto B769149;
case 0x76914b:c.instructions+=1;goto B76914b;
case 0x769151:goto L769151;
case 0x769154:c.instructions+=2;goto B769154;
case 0x769155:c.instructions+=1;goto B769155;
case 0x76915b:goto L76915b;
case 0x76915d:c.instructions+=1;goto B76915d;
case 0x769163:goto L769163;
case 0x769165:c.instructions+=2;goto B769165;
case 0x76916b:c.instructions+=1;goto B76916b;
case 0x769171:goto L769171;
case 0x769173:c.instructions+=1;goto B769173;
case 0x769179:goto L769179;
case 0x76917d:c.instructions+=3;goto B76917d;
case 0x76917f:c.instructions+=2;goto B76917f;
case 0x769185:c.instructions+=1;goto B769185;
case 0x769187:goto L769187;
case 0x76918e:c.instructions+=3;goto B76918e;
case 0x769191:c.instructions+=2;goto B769191;
case 0x769195:c.instructions+=1;goto B769195;
case 0x769199:goto L769199;
case 0x76919d:c.instructions+=2;goto B76919d;
case 0x76919f:c.instructions+=1;goto B76919f;
case 0x7691a1:goto L7691a1;
case 0x7691a6:c.instructions+=1;goto B7691a6;
case 0x7691a8:goto L7691a8;
case 0x7691ad:c.instructions+=2;goto B7691ad;
case 0x7691ae:c.instructions+=1;goto B7691ae;
case 0x7691b3:goto L7691b3;
case 0x7691b4:c.instructions+=2;goto B7691b4;
case 0x7691b5:c.instructions+=1;goto B7691b5;
case 0x7691b7:goto L7691b7;
case 0x7691b9:c.instructions+=4;goto B7691b9;
case 0x7691ba:c.instructions+=3;goto B7691ba;
case 0x7691bf:c.instructions+=2;goto B7691bf;
case 0x7691c0:c.instructions+=1;goto B7691c0;
case 0x7691c6:goto L7691c6;
case 0x7691c8:c.instructions+=1;goto B7691c8;
case 0x7691ca:goto L7691ca;
case 0x7691cc:c.instructions+=5;goto B7691cc;
case 0x7691cf:c.instructions+=4;goto B7691cf;
case 0x7691d0:c.instructions+=3;goto B7691d0;
case 0x7691d5:c.instructions+=2;goto B7691d5;
case 0x7691db:c.instructions+=1;goto B7691db;
case 0x7691e1:goto L7691e1;
case 0x7691e3:c.instructions+=1;goto B7691e3;
case 0x7691e5:goto L7691e5;
case 0x7691e7:c.instructions+=4;goto B7691e7;
case 0x7691ed:c.instructions+=3;goto B7691ed;
case 0x7691ee:c.instructions+=2;goto B7691ee;
case 0x7691ef:c.instructions+=1;goto B7691ef;
case 0x7691f4:goto L7691f4;
case 0x7691f7:goto L7691f7;
case 0x7691f9:c.instructions+=2;goto B7691f9;
case 0x7691fa:c.instructions+=1;goto B7691fa;
case 0x7691fc:goto L7691fc;
case 0x7691fe:goto L7691fe;
case 0x7691ff:goto L7691ff;
case 0x769200:c.instructions+=2;goto B769200;
case 0x769201:c.instructions+=1;goto B769201;
case 0x769210:goto L769210;
case 0x769214:c.instructions+=2;goto B769214;
case 0x769216:c.instructions+=1;goto B769216;
case 0x769218:goto L769218;
case 0x76921c:c.instructions+=7;goto B76921c;
case 0x76921d:c.instructions+=6;goto B76921d;
case 0x76921e:c.instructions+=5;goto B76921e;
case 0x769220:c.instructions+=4;goto B769220;
case 0x769224:c.instructions+=3;goto B769224;
case 0x769226:c.instructions+=2;goto B769226;
case 0x769229:c.instructions+=1;goto B769229;
case 0x76922b:goto L76922b;
case 0x769230:c.instructions+=1;goto B769230;
case 0x769232:goto L769232;
case 0x769234:c.instructions+=2;goto B769234;
case 0x769236:c.instructions+=1;goto B769236;
case 0x769238:goto L769238;
case 0x76923b:c.instructions+=3;goto B76923b;
case 0x76923e:c.instructions+=2;goto B76923e;
case 0x769241:c.instructions+=1;goto B769241;
case 0x769243:goto L769243;
case 0x769245:c.instructions+=3;goto B769245;
case 0x769247:c.instructions+=2;goto B769247;
case 0x769249:c.instructions+=1;goto B769249;
case 0x76924b:goto L76924b;
case 0x76924e:c.instructions+=3;goto B76924e;
case 0x769251:c.instructions+=2;goto B769251;
case 0x769253:c.instructions+=1;goto B769253;
case 0x769255:goto L769255;
case 0x769258:c.instructions+=3;goto B769258;
case 0x76925b:c.instructions+=2;goto B76925b;
case 0x76925e:c.instructions+=1;goto B76925e;
case 0x769260:goto L769260;
case 0x769261:c.instructions+=1;goto B769261;
case 0x769262:goto L769262;
case 0x769263:goto L769263;
case 0x769265:c.instructions+=3;goto B769265;
case 0x769268:c.instructions+=2;goto B769268;
case 0x76926b:c.instructions+=1;goto B76926b;
case 0x76926d:goto L76926d;
case 0x76926f:goto L76926f;
case 0x769271:goto L769271;
case 0x769274:c.instructions+=3;goto B769274;
case 0x769277:c.instructions+=2;goto B769277;
case 0x769279:c.instructions+=1;goto B769279;
case 0x76927b:goto L76927b;
case 0x76927d:c.instructions+=1;goto B76927d;
case 0x76927f:goto L76927f;
case 0x769282:c.instructions+=3;goto B769282;
case 0x769285:c.instructions+=2;goto B769285;
case 0x769287:c.instructions+=1;goto B769287;
case 0x769289:goto L769289;
case 0x76928b:goto L76928b;
case 0x769290:goto L769290;
case 0x769292:c.instructions+=4;goto B769292;
case 0x769293:c.instructions+=3;goto B769293;
case 0x769296:c.instructions+=2;goto B769296;
case 0x769297:c.instructions+=1;goto B769297;
case 0x769298:goto L769298;
case 0x76929a:c.instructions+=1;goto B76929a;
case 0x76929c:goto L76929c;
case 0x76929e:c.instructions+=3;goto B76929e;
case 0x7692a0:c.instructions+=2;goto B7692a0;
case 0x7692a2:c.instructions+=1;goto B7692a2;
case 0x7692a4:goto L7692a4;
case 0x7692a7:c.instructions+=1;goto B7692a7;
case 0x7692a9:goto L7692a9;
case 0x7692ab:c.instructions+=1;goto B7692ab;
case 0x7692ad:goto L7692ad;
case 0x7692b0:c.instructions+=1;goto B7692b0;
case 0x7692b2:goto L7692b2;
case 0x7692b8:c.instructions+=3;goto B7692b8;
case 0x7692be:c.instructions+=2;goto B7692be;
case 0x7692c0:c.instructions+=1;goto B7692c0;
case 0x7692c2:goto L7692c2;
case 0x7692c5:goto L7692c5;
case 0x7692c6:c.instructions+=2;goto B7692c6;
case 0x7692c7:c.instructions+=1;goto B7692c7;
case 0x7692c8:goto L7692c8;
case 0x7692ca:c.instructions+=2;goto B7692ca;
case 0x7692cf:c.instructions+=1;goto B7692cf;
case 0x7692d4:goto L7692d4;
case 0x7692d6:c.instructions+=2;goto B7692d6;
case 0x7692dc:c.instructions+=1;goto B7692dc;
case 0x7692de:goto L7692de;
case 0x7692e1:c.instructions+=7;goto B7692e1;
case 0x7692e2:c.instructions+=6;goto B7692e2;
case 0x7692e4:c.instructions+=5;goto B7692e4;
case 0x7692e5:c.instructions+=4;goto B7692e5;
case 0x7692e6:c.instructions+=3;goto B7692e6;
case 0x7692eb:c.instructions+=2;goto B7692eb;
case 0x7692ec:c.instructions+=1;goto B7692ec;
case 0x7692f2:goto L7692f2;
case 0x7692f4:c.instructions+=1;goto B7692f4;
case 0x7692f6:goto L7692f6;
case 0x7692fc:c.instructions+=1;goto B7692fc;
case 0x7692fe:goto L7692fe;
case 0x769304:goto L769304;
case 0x769307:c.instructions+=1;goto B769307;
case 0x769309:goto L769309;
case 0x769313:goto L769313;
case 0x769318:c.instructions+=2;goto B769318;
case 0x76931b:c.instructions+=1;goto B76931b;
case 0x769321:goto L769321;
case 0x769323:c.instructions+=1;goto B769323;
case 0x769329:goto L769329;
case 0x76932c:c.instructions+=1;goto B76932c;
case 0x769332:goto L769332;
case 0x769335:c.instructions+=3;goto B769335;
case 0x769338:c.instructions+=2;goto B769338;
case 0x76933b:c.instructions+=1;goto B76933b;
case 0x76933d:goto L76933d;
case 0x769342:c.instructions+=1;goto B769342;
case 0x769345:goto L769345;
case 0x769346:c.instructions+=10;goto B769346;
case 0x769347:c.instructions+=9;goto B769347;
case 0x76934a:c.instructions+=8;goto B76934a;
case 0x76934d:c.instructions+=7;goto B76934d;
case 0x76934f:c.instructions+=6;goto B76934f;
case 0x769352:c.instructions+=5;goto B769352;
case 0x769355:c.instructions+=4;goto B769355;
case 0x76935c:c.instructions+=3;goto B76935c;
case 0x76935d:c.instructions+=2;goto B76935d;
case 0x769360:c.instructions+=1;goto B769360;
case 0x769366:goto L769366;
case 0x769368:c.instructions+=3;goto B769368;
case 0x76936b:c.instructions+=2;goto B76936b;
case 0x76936d:c.instructions+=1;goto B76936d;
case 0x769373:goto L769373;
case 0x769377:c.instructions+=5;goto B769377;
case 0x76937a:c.instructions+=4;goto B76937a;
case 0x76937c:c.instructions+=3;goto B76937c;
case 0x76937f:c.instructions+=2;goto B76937f;
case 0x769382:c.instructions+=1;goto B769382;
case 0x769387:goto L769387;
case 0x76938a:c.instructions+=6;goto B76938a;
case 0x76938c:c.instructions+=5;goto B76938c;
case 0x76938f:c.instructions+=4;goto B76938f;
case 0x769390:c.instructions+=3;goto B769390;
case 0x769392:c.instructions+=2;goto B769392;
case 0x769393:c.instructions+=1;goto B769393;
case 0x769398:goto L769398;
case 0x76939b:c.instructions+=2;goto B76939b;
case 0x76939f:c.instructions+=1;goto B76939f;
case 0x7693a1:goto L7693a1;
case 0x7693a3:c.instructions+=2;goto B7693a3;
case 0x7693a4:c.instructions+=1;goto B7693a4;
case 0x7693a5:goto L7693a5;
case 0x7693a8:c.instructions+=1;goto B7693a8;
case 0x7693ad:goto L7693ad;
case 0x7693af:c.instructions+=2;goto B7693af;
case 0x7693b3:c.instructions+=1;goto B7693b3;
case 0x7693b6:goto L7693b6;
case 0x7693b8:c.instructions+=1;goto B7693b8;
case 0x7693ba:goto L7693ba;
case 0x7693bb:c.instructions+=2;goto B7693bb;
case 0x7693bd:c.instructions+=1;goto B7693bd;
case 0x7693c2:goto L7693c2;
case 0x7693c3:c.instructions+=4;goto B7693c3;
case 0x7693c4:c.instructions+=3;goto B7693c4;
case 0x7693c6:c.instructions+=2;goto B7693c6;
case 0x7693c8:c.instructions+=1;goto B7693c8;
case 0x7693ca:goto L7693ca;
case 0x7693d1:goto L7693d1;
case 0x7693d2:c.instructions+=6;goto B7693d2;
case 0x7693d3:c.instructions+=5;goto B7693d3;
case 0x7693d6:c.instructions+=4;goto B7693d6;
case 0x7693d9:c.instructions+=3;goto B7693d9;
case 0x7693db:c.instructions+=2;goto B7693db;
case 0x7693de:c.instructions+=1;goto B7693de;
case 0x7693e4:goto L7693e4;
case 0x7693e6:c.instructions+=1;goto B7693e6;
case 0x7693e8:goto L7693e8;
case 0x7693eb:c.instructions+=4;goto B7693eb;
case 0x7693ec:c.instructions+=3;goto B7693ec;
case 0x7693ed:c.instructions+=2;goto B7693ed;
case 0x7693f0:c.instructions+=1;goto B7693f0;
case 0x7693f6:goto L7693f6;
case 0x7693f9:goto L7693f9;
case 0x7693fd:c.instructions+=1;goto B7693fd;
case 0x7693ff:goto L7693ff;
case 0x769400:c.instructions+=1;goto B769400;
case 0x769405:goto L769405;
case 0x769406:goto L769406;
case 0x769409:c.instructions+=1;goto B769409;
case 0x76940b:goto L76940b;
case 0x76940e:c.instructions+=2;goto B76940e;
case 0x769410:c.instructions+=1;goto B769410;
case 0x769412:goto L769412;
case 0x769418:goto L769418;
case 0x76941b:c.instructions+=2;goto B76941b;
case 0x76941d:c.instructions+=1;goto B76941d;
case 0x76941f:goto L76941f;
case 0x769425:goto L769425;
case 0x769426:c.instructions+=1;goto B769426;
case 0x76942b:goto L76942b;
case 0x76942c:c.instructions+=2;goto B76942c;
case 0x76942f:c.instructions+=1;goto B76942f;
case 0x769431:goto L769431;
case 0x769433:c.instructions+=1;goto B769433;
case 0x769435:goto L769435;
case 0x769437:c.instructions+=1;goto B769437;
case 0x769439:goto L769439;
case 0x76943b:c.instructions+=7;goto B76943b;
case 0x76943d:c.instructions+=6;goto B76943d;
case 0x769440:c.instructions+=5;goto B769440;
case 0x769441:c.instructions+=4;goto B769441;
case 0x769444:c.instructions+=3;goto B769444;
case 0x769445:c.instructions+=2;goto B769445;
case 0x769446:c.instructions+=1;goto B769446;
case 0x76944b:goto L76944b;
case 0x76944e:c.instructions+=3;goto B76944e;
case 0x769450:c.instructions+=2;goto B769450;
case 0x769452:c.instructions+=1;goto B769452;
case 0x769454:goto L769454;
case 0x769457:goto L769457;
case 0x76945a:c.instructions+=5;goto B76945a;
case 0x76945d:c.instructions+=4;goto B76945d;
case 0x769460:c.instructions+=3;goto B769460;
case 0x769463:c.instructions+=2;goto B769463;
case 0x769464:c.instructions+=1;goto B769464;
case 0x76946a:goto L76946a;
case 0x76946c:c.instructions+=2;goto B76946c;
case 0x76946e:c.instructions+=1;goto B76946e;
case 0x769470:goto L769470;
case 0x769471:c.instructions+=1;goto B769471;
case 0x769476:goto L769476;
case 0x769477:goto L769477;
case 0x769479:goto L769479;
case 0x76947c:c.instructions+=1;goto B76947c;
case 0x769481:goto L769481;
case 0x769490:goto L769490;
case 0x769491:c.instructions+=13;goto B769491;
case 0x769493:c.instructions+=12;goto B769493;
case 0x769494:c.instructions+=11;goto B769494;
case 0x769496:c.instructions+=10;goto B769496;
case 0x769497:c.instructions+=9;goto B769497;
case 0x769498:c.instructions+=8;goto B769498;
case 0x769499:c.instructions+=7;goto B769499;
case 0x76949a:c.instructions+=6;goto B76949a;
case 0x76949b:c.instructions+=5;goto B76949b;
case 0x76949c:c.instructions+=4;goto B76949c;
case 0x76949d:c.instructions+=3;goto B76949d;
case 0x76949e:c.instructions+=2;goto B76949e;
case 0x7694a1:c.instructions+=1;goto B7694a1;
case 0x7694a4:goto L7694a4;
case 0x7694a6:c.instructions+=2;goto B7694a6;
case 0x7694a8:c.instructions+=1;goto B7694a8;
case 0x7694aa:goto L7694aa;
case 0x7694ad:c.instructions+=2;goto B7694ad;
case 0x7694b1:c.instructions+=1;goto B7694b1;
case 0x7694b3:goto L7694b3;
case 0x7694b6:c.instructions+=1;goto B7694b6;
case 0x7694b8:goto L7694b8;
case 0x7694ba:c.instructions+=2;goto B7694ba;
case 0x7694bc:c.instructions+=1;goto B7694bc;
case 0x7694be:goto L7694be;
case 0x7694c1:c.instructions+=2;goto B7694c1;
case 0x7694c5:c.instructions+=1;goto B7694c5;
case 0x7694c7:goto L7694c7;
case 0x7694ca:goto L7694ca;
case 0x7694cd:c.instructions+=3;goto B7694cd;
case 0x7694ce:c.instructions+=2;goto B7694ce;
case 0x7694cf:c.instructions+=1;goto B7694cf;
case 0x7694d0:goto L7694d0;
case 0x7694d1:c.instructions+=10;goto B7694d1;
case 0x7694d3:c.instructions+=9;goto B7694d3;
case 0x7694d6:c.instructions+=8;goto B7694d6;
case 0x7694db:c.instructions+=7;goto B7694db;
case 0x7694de:c.instructions+=6;goto B7694de;
case 0x7694e3:c.instructions+=5;goto B7694e3;
case 0x7694e6:c.instructions+=4;goto B7694e6;
case 0x7694e9:c.instructions+=3;goto B7694e9;
case 0x7694eb:c.instructions+=2;goto B7694eb;
case 0x7694ec:c.instructions+=1;goto B7694ec;
case 0x7694f2:goto L7694f2;
case 0x7694f8:goto L7694f8;
case 0x7694fb:c.instructions+=1;goto B7694fb;
case 0x769501:goto L769501;
case 0x769503:goto L769503;
case 0x769505:c.instructions+=3;goto B769505;
case 0x769506:c.instructions+=2;goto B769506;
case 0x769508:c.instructions+=1;goto B769508;
case 0x76950a:goto L76950a;
case 0x76950b:c.instructions+=1;goto B76950b;
case 0x76950d:goto L76950d;
case 0x769510:c.instructions+=1;goto B769510;
case 0x769512:goto L769512;
case 0x769513:c.instructions+=1;goto B769513;
case 0x769515:goto L769515;
case 0x769518:c.instructions+=1;goto B769518;
case 0x76951a:goto L76951a;
case 0x76951b:c.instructions+=1;goto B76951b;
case 0x769521:goto L769521;
case 0x769528:c.instructions+=1;goto B769528;
case 0x76952d:goto L76952d;
case 0x769534:c.instructions+=2;goto B769534;
case 0x76953b:c.instructions+=1;goto B76953b;
case 0x769540:goto L769540;
case 0x769547:c.instructions+=1;goto B769547;
case 0x76954c:goto L76954c;
case 0x76954f:c.instructions+=2;goto B76954f;
case 0x769556:c.instructions+=1;goto B769556;
case 0x76955b:goto L76955b;
case 0x769562:c.instructions+=1;goto B769562;
case 0x769567:goto L769567;
case 0x76956a:c.instructions+=2;goto B76956a;
case 0x769571:c.instructions+=1;goto B769571;
case 0x769576:goto L769576;
case 0x76957d:goto L76957d;
case 0x769584:c.instructions+=1;goto B769584;
case 0x769589:goto L769589;
case 0x76958c:c.instructions+=1;goto B76958c;
case 0x76958e:goto L76958e;
case 0x76958f:c.instructions+=1;goto B76958f;
case 0x769591:goto L769591;
case 0x769592:c.instructions+=1;goto B769592;
case 0x769594:goto L769594;
case 0x769595:c.instructions+=1;goto B769595;
case 0x76959b:goto L76959b;
case 0x76959c:c.instructions+=1;goto B76959c;
case 0x7695a2:goto L7695a2;
case 0x7695a9:c.instructions+=1;goto B7695a9;
case 0x7695ae:goto L7695ae;
case 0x7695b5:c.instructions+=1;goto B7695b5;
case 0x7695b7:goto L7695b7;
case 0x7695ba:c.instructions+=3;goto B7695ba;
case 0x7695bc:c.instructions+=2;goto B7695bc;
case 0x7695be:c.instructions+=1;goto B7695be;
case 0x7695c3:goto L7695c3;
case 0x7695ca:goto L7695ca;
case 0x7695cd:c.instructions+=12;goto B7695cd;
case 0x7695cf:c.instructions+=11;goto B7695cf;
case 0x7695d2:c.instructions+=10;goto B7695d2;
case 0x7695d5:c.instructions+=9;goto B7695d5;
case 0x7695d8:c.instructions+=8;goto B7695d8;
case 0x7695da:c.instructions+=7;goto B7695da;
case 0x7695dd:c.instructions+=6;goto B7695dd;
case 0x7695e0:c.instructions+=5;goto B7695e0;
case 0x7695e1:c.instructions+=4;goto B7695e1;
case 0x7695e3:c.instructions+=3;goto B7695e3;
case 0x7695ea:c.instructions+=2;goto B7695ea;
case 0x7695ed:c.instructions+=1;goto B7695ed;
case 0x7695f3:goto L7695f3;
case 0x7695f4:c.instructions+=1;goto B7695f4;
case 0x7695f9:goto L7695f9;
case 0x769600:c.instructions+=1;goto B769600;
case 0x769605:goto L769605;
case 0x76960a:c.instructions+=2;goto B76960a;
case 0x76960c:c.instructions+=1;goto B76960c;
case 0x769612:goto L769612;
case 0x769618:goto L769618;
case 0x76961d:c.instructions+=1;goto B76961d;
case 0x76961f:goto L76961f;
case 0x769622:c.instructions+=1;goto B769622;
case 0x769624:goto L769624;
case 0x769627:c.instructions+=1;goto B769627;
case 0x769629:goto L769629;
case 0x76962a:c.instructions+=1;goto B76962a;
case 0x76962c:goto L76962c;
case 0x769631:c.instructions+=1;goto B769631;
case 0x769633:goto L769633;
case 0x769634:c.instructions+=1;goto B769634;
case 0x76963a:goto L76963a;
case 0x769641:c.instructions+=1;goto B769641;
case 0x769646:goto L769646;
case 0x76964d:c.instructions+=1;goto B76964d;
case 0x769652:goto L769652;
case 0x769659:c.instructions+=1;goto B769659;
case 0x76965e:goto L76965e;
case 0x769665:c.instructions+=2;goto B769665;
case 0x76966c:c.instructions+=1;goto B76966c;
case 0x76966e:goto L76966e;
case 0x769675:c.instructions+=2;goto B769675;
case 0x76967c:c.instructions+=1;goto B76967c;
case 0x76967e:goto L76967e;
case 0x769685:goto L769685;
case 0x76968c:goto L76968c;
case 0x76968f:c.instructions+=11;goto B76968f;
case 0x769691:c.instructions+=10;goto B769691;
case 0x769694:c.instructions+=9;goto B769694;
case 0x769697:c.instructions+=8;goto B769697;
case 0x76969a:c.instructions+=7;goto B76969a;
case 0x76969c:c.instructions+=6;goto B76969c;
case 0x76969f:c.instructions+=5;goto B76969f;
case 0x7696a2:c.instructions+=4;goto B7696a2;
case 0x7696a3:c.instructions+=3;goto B7696a3;
case 0x7696a5:c.instructions+=2;goto B7696a5;
case 0x7696a8:c.instructions+=1;goto B7696a8;
case 0x7696ae:goto L7696ae;
case 0x7696b0:c.instructions+=2;goto B7696b0;
case 0x7696b1:c.instructions+=1;goto B7696b1;
case 0x7696b7:goto L7696b7;
case 0x7696bc:goto L7696bc;
case 0x7696c2:c.instructions+=1;goto B7696c2;
case 0x7696c7:goto L7696c7;
case 0x7696ce:c.instructions+=1;goto B7696ce;
case 0x7696d0:goto L7696d0;
case 0x7696d5:c.instructions+=1;goto B7696d5;
case 0x7696d7:goto L7696d7;
case 0x7696d8:c.instructions+=1;goto B7696d8;
case 0x7696da:goto L7696da;
case 0x7696db:c.instructions+=1;goto B7696db;
case 0x7696dd:goto L7696dd;
case 0x7696de:c.instructions+=1;goto B7696de;
case 0x7696e0:goto L7696e0;
case 0x7696e1:c.instructions+=1;goto B7696e1;
case 0x7696e3:goto L7696e3;
case 0x7696ea:c.instructions+=1;goto B7696ea;
case 0x7696ec:goto L7696ec;
case 0x7696f3:goto L7696f3;
case 0x7696f6:c.instructions+=2;goto B7696f6;
case 0x7696f9:c.instructions+=1;goto B7696f9;
case 0x7696fb:goto L7696fb;
case 0x769702:c.instructions+=1;goto B769702;
case 0x769704:goto L769704;
case 0x76970b:c.instructions+=1;goto B76970b;
case 0x76970d:goto L76970d;
case 0x769714:goto L769714;
case 0x769717:c.instructions+=3;goto B769717;
case 0x769719:c.instructions+=2;goto B769719;
case 0x76971c:c.instructions+=1;goto B76971c;
case 0x76971e:goto L76971e;
case 0x769720:c.instructions+=10;goto B769720;
case 0x769723:c.instructions+=9;goto B769723;
case 0x769726:c.instructions+=8;goto B769726;
case 0x76972d:c.instructions+=7;goto B76972d;
case 0x76972f:c.instructions+=6;goto B76972f;
case 0x769732:c.instructions+=5;goto B769732;
case 0x769735:c.instructions+=4;goto B769735;
case 0x769736:c.instructions+=3;goto B769736;
case 0x769738:c.instructions+=2;goto B769738;
case 0x76973b:c.instructions+=1;goto B76973b;
case 0x769741:goto L769741;
case 0x769743:c.instructions+=2;goto B769743;
case 0x769744:c.instructions+=1;goto B769744;
case 0x769746:goto L769746;
case 0x76974b:goto L76974b;
case 0x769751:goto L769751;
case 0x769754:c.instructions+=1;goto B769754;
case 0x769756:goto L769756;
case 0x769759:c.instructions+=3;goto B769759;
case 0x76975c:c.instructions+=2;goto B76975c;
case 0x76975d:c.instructions+=1;goto B76975d;
case 0x769762:goto L769762;
case 0x769763:c.instructions+=1;goto B769763;
case 0x769764:goto L769764;
case 0x769765:c.instructions+=9;goto B769765;
case 0x769767:c.instructions+=8;goto B769767;
case 0x769768:c.instructions+=7;goto B769768;
case 0x769769:c.instructions+=6;goto B769769;
case 0x76976a:c.instructions+=5;goto B76976a;
case 0x76976b:c.instructions+=4;goto B76976b;
case 0x769770:c.instructions+=3;goto B769770;
case 0x769771:c.instructions+=2;goto B769771;
case 0x769777:c.instructions+=1;goto B769777;
case 0x76977c:goto L76977c;
case 0x76977f:c.instructions+=10;goto B76977f;
case 0x769780:c.instructions+=9;goto B769780;
case 0x769781:c.instructions+=8;goto B769781;
case 0x769783:c.instructions+=7;goto B769783;
case 0x769786:c.instructions+=6;goto B769786;
case 0x769787:c.instructions+=5;goto B769787;
case 0x76978b:c.instructions+=4;goto B76978b;
case 0x76978f:c.instructions+=3;goto B76978f;
case 0x769790:c.instructions+=2;goto B769790;
case 0x769793:c.instructions+=1;goto B769793;
case 0x769795:goto L769795;
case 0x76979a:goto L76979a;
case 0x76979c:c.instructions+=3;goto B76979c;
case 0x76979d:c.instructions+=2;goto B76979d;
case 0x76979e:c.instructions+=1;goto B76979e;
case 0x7697a0:goto L7697a0;
case 0x7697a3:c.instructions+=1;goto B7697a3;
case 0x7697a5:goto L7697a5;
case 0x7697a8:c.instructions+=1;goto B7697a8;
case 0x7697aa:goto L7697aa;
case 0x7697ad:c.instructions+=6;goto B7697ad;
case 0x7697ae:c.instructions+=5;goto B7697ae;
case 0x7697af:c.instructions+=4;goto B7697af;
case 0x7697b0:c.instructions+=3;goto B7697b0;
case 0x7697b3:c.instructions+=2;goto B7697b3;
case 0x7697b5:c.instructions+=1;goto B7697b5;
case 0x7697ba:goto L7697ba;
case 0x7697bd:c.instructions+=1;goto B7697bd;
case 0x7697bf:goto L7697bf;
case 0x7697c0:c.instructions+=2;goto B7697c0;
case 0x7697c1:c.instructions+=1;goto B7697c1;
case 0x7697c6:goto L7697c6;
case 0x7697c9:c.instructions+=3;goto B7697c9;
case 0x7697ca:c.instructions+=2;goto B7697ca;
case 0x7697cb:c.instructions+=1;goto B7697cb;
case 0x7697cd:goto L7697cd;
case 0x7697d0:c.instructions+=9;goto B7697d0;
case 0x7697d1:c.instructions+=8;goto B7697d1;
case 0x7697d7:c.instructions+=7;goto B7697d7;
case 0x7697da:c.instructions+=6;goto B7697da;
case 0x7697de:c.instructions+=5;goto B7697de;
case 0x7697e1:c.instructions+=4;goto B7697e1;
case 0x7697e4:c.instructions+=3;goto B7697e4;
case 0x7697e6:c.instructions+=2;goto B7697e6;
case 0x7697e8:c.instructions+=1;goto B7697e8;
case 0x7697ea:goto L7697ea;
case 0x7697ef:goto L7697ef;
case 0x7697f2:c.instructions+=7;goto B7697f2;
case 0x7697f5:c.instructions+=6;goto B7697f5;
case 0x7697f6:c.instructions+=5;goto B7697f6;
case 0x7697f9:c.instructions+=4;goto B7697f9;
case 0x7697fa:c.instructions+=3;goto B7697fa;
case 0x7697fc:c.instructions+=2;goto B7697fc;
case 0x7697ff:c.instructions+=1;goto B7697ff;
case 0x769801:goto L769801;
case 0x769802:c.instructions+=2;goto B769802;
case 0x769803:c.instructions+=1;goto B769803;
case 0x769808:goto L769808;
case 0x76980b:c.instructions+=3;goto B76980b;
case 0x76980c:c.instructions+=2;goto B76980c;
case 0x76980d:c.instructions+=1;goto B76980d;
case 0x76980f:goto L76980f;
case 0x769812:c.instructions+=1;goto B769812;
case 0x769814:goto L769814;
case 0x769817:c.instructions+=7;goto B769817;
case 0x769818:c.instructions+=6;goto B769818;
case 0x76981b:c.instructions+=5;goto B76981b;
case 0x76981f:c.instructions+=4;goto B76981f;
case 0x769822:c.instructions+=3;goto B769822;
case 0x769825:c.instructions+=2;goto B769825;
case 0x769827:c.instructions+=1;goto B769827;
case 0x769829:goto L769829;
case 0x76982e:goto L76982e;
case 0x769831:goto L769831;
case 0x769832:c.instructions+=3;goto B769832;
case 0x769833:c.instructions+=2;goto B769833;
case 0x769834:c.instructions+=1;goto B769834;
case 0x769835:goto L769835;
case 0x769836:c.instructions+=9;goto B769836;
case 0x769838:c.instructions+=8;goto B769838;
case 0x769839:c.instructions+=7;goto B769839;
case 0x76983a:c.instructions+=6;goto B76983a;
case 0x76983b:c.instructions+=5;goto B76983b;
case 0x76983c:c.instructions+=4;goto B76983c;
case 0x769841:c.instructions+=3;goto B769841;
case 0x769842:c.instructions+=2;goto B769842;
case 0x769848:c.instructions+=1;goto B769848;
case 0x76984d:goto L76984d;
case 0x769850:c.instructions+=10;goto B769850;
case 0x769851:c.instructions+=9;goto B769851;
case 0x769852:c.instructions+=8;goto B769852;
case 0x769854:c.instructions+=7;goto B769854;
case 0x769857:c.instructions+=6;goto B769857;
case 0x769858:c.instructions+=5;goto B769858;
case 0x76985c:c.instructions+=4;goto B76985c;
case 0x769860:c.instructions+=3;goto B769860;
case 0x769861:c.instructions+=2;goto B769861;
case 0x769864:c.instructions+=1;goto B769864;
case 0x769866:goto L769866;
case 0x76986b:goto L76986b;
case 0x76986d:c.instructions+=3;goto B76986d;
case 0x76986e:c.instructions+=2;goto B76986e;
case 0x76986f:c.instructions+=1;goto B76986f;
case 0x769871:goto L769871;
case 0x769874:c.instructions+=1;goto B769874;
case 0x769876:goto L769876;
case 0x769879:c.instructions+=1;goto B769879;
case 0x76987b:goto L76987b;
case 0x76987e:c.instructions+=6;goto B76987e;
case 0x76987f:c.instructions+=5;goto B76987f;
case 0x769880:c.instructions+=4;goto B769880;
case 0x769881:c.instructions+=3;goto B769881;
case 0x769884:c.instructions+=2;goto B769884;
case 0x769886:c.instructions+=1;goto B769886;
case 0x76988b:goto L76988b;
case 0x76988e:c.instructions+=1;goto B76988e;
case 0x769890:goto L769890;
case 0x769891:c.instructions+=2;goto B769891;
case 0x769892:c.instructions+=1;goto B769892;
case 0x769897:goto L769897;
case 0x76989a:c.instructions+=3;goto B76989a;
case 0x76989b:c.instructions+=2;goto B76989b;
case 0x76989c:c.instructions+=1;goto B76989c;
case 0x76989e:goto L76989e;
case 0x7698a1:c.instructions+=9;goto B7698a1;
case 0x7698a2:c.instructions+=8;goto B7698a2;
case 0x7698a8:c.instructions+=7;goto B7698a8;
case 0x7698ab:c.instructions+=6;goto B7698ab;
case 0x7698af:c.instructions+=5;goto B7698af;
case 0x7698b2:c.instructions+=4;goto B7698b2;
case 0x7698b5:c.instructions+=3;goto B7698b5;
case 0x7698b7:c.instructions+=2;goto B7698b7;
case 0x7698b9:c.instructions+=1;goto B7698b9;
case 0x7698bb:goto L7698bb;
case 0x7698c0:goto L7698c0;
case 0x7698c3:c.instructions+=7;goto B7698c3;
case 0x7698c6:c.instructions+=6;goto B7698c6;
case 0x7698c7:c.instructions+=5;goto B7698c7;
case 0x7698ca:c.instructions+=4;goto B7698ca;
case 0x7698cb:c.instructions+=3;goto B7698cb;
case 0x7698cd:c.instructions+=2;goto B7698cd;
case 0x7698d0:c.instructions+=1;goto B7698d0;
case 0x7698d2:goto L7698d2;
case 0x7698d3:c.instructions+=2;goto B7698d3;
case 0x7698d4:c.instructions+=1;goto B7698d4;
case 0x7698d9:goto L7698d9;
case 0x7698dc:c.instructions+=3;goto B7698dc;
case 0x7698dd:c.instructions+=2;goto B7698dd;
case 0x7698de:c.instructions+=1;goto B7698de;
case 0x7698e0:goto L7698e0;
case 0x7698e3:c.instructions+=1;goto B7698e3;
case 0x7698e5:goto L7698e5;
case 0x7698e8:c.instructions+=7;goto B7698e8;
case 0x7698e9:c.instructions+=6;goto B7698e9;
case 0x7698ec:c.instructions+=5;goto B7698ec;
case 0x7698f0:c.instructions+=4;goto B7698f0;
case 0x7698f3:c.instructions+=3;goto B7698f3;
case 0x7698f6:c.instructions+=2;goto B7698f6;
case 0x7698f8:c.instructions+=1;goto B7698f8;
case 0x7698fa:goto L7698fa;
case 0x7698ff:goto L7698ff;
case 0x769902:goto L769902;
case 0x769903:c.instructions+=3;goto B769903;
case 0x769904:c.instructions+=2;goto B769904;
case 0x769905:c.instructions+=1;goto B769905;
case 0x769a10:goto L769a10;
case 0x769a11:c.instructions+=7;goto B769a11;
case 0x769a13:c.instructions+=6;goto B769a13;
case 0x769a19:c.instructions+=5;goto B769a19;
case 0x769a1a:c.instructions+=4;goto B769a1a;
case 0x769a21:c.instructions+=3;goto B769a21;
case 0x769a22:c.instructions+=2;goto B769a22;
case 0x769a29:c.instructions+=1;goto B769a29;
case 0x769a2b:goto L769a2b;
case 0x769a30:goto L769a30;
case 0x769a37:c.instructions+=1;goto B769a37;
case 0x769a3c:goto L769a3c;
case 0x769a3d:c.instructions+=2;goto B769a3d;
case 0x769a3e:c.instructions+=1;goto B769a3e;
case 0x769a3f:goto L769a3f;
case 0x769a41:c.instructions+=4;goto B769a41;
case 0x769a47:c.instructions+=3;goto B769a47;
case 0x769a49:c.instructions+=2;goto B769a49;
case 0x769a4c:c.instructions+=1;goto B769a4c;
case 0x769a4e:goto L769a4e;
case 0x769a4f:c.instructions+=6;goto B769a4f;
case 0x769a51:c.instructions+=5;goto B769a51;
case 0x769a57:c.instructions+=4;goto B769a57;
case 0x769a58:c.instructions+=3;goto B769a58;
case 0x769a5f:c.instructions+=2;goto B769a5f;
case 0x769a66:c.instructions+=1;goto B769a66;
case 0x769a68:goto L769a68;
case 0x769a6d:goto L769a6d;
case 0x769a74:c.instructions+=2;goto B769a74;
case 0x769a7b:c.instructions+=1;goto B769a7b;
case 0x769a80:goto L769a80;
case 0x769a81:c.instructions+=2;goto B769a81;
case 0x769a82:c.instructions+=1;goto B769a82;
case 0x769a83:goto L769a83;
case 0x769a89:c.instructions+=1;goto B769a89;
case 0x769a8b:goto L769a8b;
case 0x769a8c:c.instructions+=6;goto B769a8c;
case 0x769a8e:c.instructions+=5;goto B769a8e;
case 0x769a94:c.instructions+=4;goto B769a94;
case 0x769a95:c.instructions+=3;goto B769a95;
case 0x769a98:c.instructions+=2;goto B769a98;
case 0x769a9b:c.instructions+=1;goto B769a9b;
case 0x769aa0:goto L769aa0;
case 0x769aa3:c.instructions+=3;goto B769aa3;
case 0x769aa6:c.instructions+=2;goto B769aa6;
case 0x769aa9:c.instructions+=1;goto B769aa9;
case 0x769aae:goto L769aae;
case 0x769ab1:c.instructions+=4;goto B769ab1;
case 0x769ab8:c.instructions+=3;goto B769ab8;
case 0x769abf:c.instructions+=2;goto B769abf;
case 0x769ac6:c.instructions+=1;goto B769ac6;
case 0x769acb:goto L769acb;
case 0x769ad0:goto L769ad0;
case 0x769ad1:c.instructions+=2;goto B769ad1;
case 0x769ad2:c.instructions+=1;goto B769ad2;
case 0x769ad3:goto L769ad3;
case 0x769ada:goto L769ada;
case 0x769ae1:c.instructions+=1;goto B769ae1;
case 0x769ae3:goto L769ae3;
case 0x769ae9:c.instructions+=3;goto B769ae9;
case 0x769aef:c.instructions+=2;goto B769aef;
case 0x769af1:c.instructions+=1;goto B769af1;
case 0x769af3:goto L769af3;
case 0x769af5:c.instructions+=1;goto B769af5;
case 0x769af7:goto L769af7;
case 0x769af9:c.instructions+=1;goto B769af9;
case 0x769afb:goto L769afb;
case 0x769afd:c.instructions+=1;goto B769afd;
case 0x769aff:goto L769aff;
case 0x769b02:c.instructions+=2;goto B769b02;
case 0x769b08:c.instructions+=1;goto B769b08;
case 0x769b0d:goto L769b0d;
case 0x769b14:c.instructions+=2;goto B769b14;
case 0x769b18:c.instructions+=1;goto B769b18;
case 0x769b1a:goto L769b1a;
case 0x769b1d:c.instructions+=2;goto B769b1d;
case 0x769b21:c.instructions+=1;goto B769b21;
case 0x769b23:goto L769b23;
case 0x769b2d:c.instructions+=1;goto B769b2d;
case 0x769b32:goto L769b32;
case 0x769b38:c.instructions+=2;goto B769b38;
case 0x769b39:c.instructions+=1;goto B769b39;
case 0x769b3a:goto L769b3a;
case 0x769b41:c.instructions+=3;goto B769b41;
case 0x769b45:c.instructions+=2;goto B769b45;
case 0x769b48:c.instructions+=1;goto B769b48;
case 0x769b4a:goto L769b4a;
case 0x769b4e:c.instructions+=1;goto B769b4e;
case 0x769b50:goto L769b50;
case 0x769b52:goto L769b52;
case 0x769b59:c.instructions+=3;goto B769b59;
case 0x769b5d:c.instructions+=2;goto B769b5d;
case 0x769b61:c.instructions+=1;goto B769b61;
case 0x769b63:goto L769b63;
case 0x769b65:goto L769b65;
case 0x769b6f:c.instructions+=10;goto B769b6f;
case 0x769b75:c.instructions+=9;goto B769b75;
case 0x769b77:c.instructions+=8;goto B769b77;
case 0x769b79:c.instructions+=7;goto B769b79;
case 0x769b7b:c.instructions+=6;goto B769b7b;
case 0x769b7d:c.instructions+=5;goto B769b7d;
case 0x769b7f:c.instructions+=4;goto B769b7f;
case 0x769b85:c.instructions+=3;goto B769b85;
case 0x769b88:c.instructions+=2;goto B769b88;
case 0x769b89:c.instructions+=1;goto B769b89;
case 0x769b8b:goto L769b8b;
case 0x769b91:c.instructions+=1;goto B769b91;
case 0x769b93:goto L769b93;
case 0x769b9d:c.instructions+=10;goto B769b9d;
case 0x769ba3:c.instructions+=9;goto B769ba3;
case 0x769ba5:c.instructions+=8;goto B769ba5;
case 0x769ba7:c.instructions+=7;goto B769ba7;
case 0x769ba9:c.instructions+=6;goto B769ba9;
case 0x769bab:c.instructions+=5;goto B769bab;
case 0x769bad:c.instructions+=4;goto B769bad;
case 0x769bb3:c.instructions+=3;goto B769bb3;
case 0x769bb6:c.instructions+=2;goto B769bb6;
case 0x769bb7:c.instructions+=1;goto B769bb7;
case 0x769bb9:goto L769bb9;
case 0x769bbf:goto L769bbf;
case 0x769bc0:c.instructions+=6;goto B769bc0;
case 0x769bc1:c.instructions+=5;goto B769bc1;
case 0x769bc7:c.instructions+=4;goto B769bc7;
case 0x769bc8:c.instructions+=3;goto B769bc8;
case 0x769bce:c.instructions+=2;goto B769bce;
case 0x769bd5:c.instructions+=1;goto B769bd5;
case 0x769bd7:goto L769bd7;
case 0x769bd8:c.instructions+=6;goto B769bd8;
case 0x769bdb:c.instructions+=5;goto B769bdb;
case 0x769be1:c.instructions+=4;goto B769be1;
case 0x769be2:c.instructions+=3;goto B769be2;
case 0x769be3:c.instructions+=2;goto B769be3;
case 0x769be7:c.instructions+=1;goto B769be7;
case 0x769be9:goto L769be9;
case 0x769bec:c.instructions+=3;goto B769bec;
case 0x769bef:c.instructions+=2;goto B769bef;
case 0x769bf0:c.instructions+=1;goto B769bf0;
case 0x769bf1:goto L769bf1;
case 0x769bf4:c.instructions+=9;goto B769bf4;
case 0x769bfa:c.instructions+=8;goto B769bfa;
case 0x769c00:c.instructions+=7;goto B769c00;
case 0x769c01:c.instructions+=6;goto B769c01;
case 0x769c02:c.instructions+=5;goto B769c02;
case 0x769c08:c.instructions+=4;goto B769c08;
case 0x769c0b:c.instructions+=3;goto B769c0b;
case 0x769c0e:c.instructions+=2;goto B769c0e;
case 0x769c0f:c.instructions+=1;goto B769c0f;
case 0x769c14:goto L769c14;
case 0x769c17:c.instructions+=4;goto B769c17;
case 0x769c18:c.instructions+=3;goto B769c18;
case 0x769c19:c.instructions+=2;goto B769c19;
case 0x769c1c:c.instructions+=1;goto B769c1c;
case 0x769c21:goto L769c21;
case 0x769c22:c.instructions+=6;goto B769c22;
case 0x769c24:c.instructions+=5;goto B769c24;
case 0x769c2a:c.instructions+=4;goto B769c2a;
case 0x769c2b:c.instructions+=3;goto B769c2b;
case 0x769c2e:c.instructions+=2;goto B769c2e;
case 0x769c31:c.instructions+=1;goto B769c31;
case 0x769c36:goto L769c36;
case 0x769c39:c.instructions+=3;goto B769c39;
case 0x769c40:c.instructions+=2;goto B769c40;
case 0x769c47:c.instructions+=1;goto B769c47;
case 0x769c4c:goto L769c4c;
case 0x769c51:goto L769c51;
case 0x769c52:c.instructions+=2;goto B769c52;
case 0x769c53:c.instructions+=1;goto B769c53;
case 0x769c54:goto L769c54;
case 0x769c55:c.instructions+=8;goto B769c55;
case 0x769c57:c.instructions+=7;goto B769c57;
case 0x769c5a:c.instructions+=6;goto B769c5a;
case 0x769c5b:c.instructions+=5;goto B769c5b;
case 0x769c5f:c.instructions+=4;goto B769c5f;
case 0x769c62:c.instructions+=3;goto B769c62;
case 0x769c66:c.instructions+=2;goto B769c66;
case 0x769c6a:c.instructions+=1;goto B769c6a;
case 0x769c6c:goto L769c6c;
case 0x769c71:c.instructions+=8;goto B769c71;
case 0x769c75:c.instructions+=7;goto B769c75;
case 0x769c78:c.instructions+=6;goto B769c78;
case 0x769c7b:c.instructions+=5;goto B769c7b;
case 0x769c7f:c.instructions+=4;goto B769c7f;
case 0x769c82:c.instructions+=3;goto B769c82;
case 0x769c85:c.instructions+=2;goto B769c85;
case 0x769c88:c.instructions+=1;goto B769c88;
case 0x769c8a:goto L769c8a;
case 0x769c8d:goto L769c8d;
case 0x769c8e:c.instructions+=2;goto B769c8e;
case 0x769c8f:c.instructions+=1;goto B769c8f;
default:missing_instruction(c.pc);}
B769003:L769003:{c.instructions+=7;NFSU2_TR(0x769003);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
}
B769006:{NFSU2_TR(0x769006);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B769008:{NFSU2_TR(0x769008);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B76900a:{NFSU2_TR(0x76900a);
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
B76900b:{NFSU2_TR(0x76900b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76900c:{NFSU2_TR(0x76900c);
__builtin_memmove(gp(0x8b8814),(R+0),4);
}
B769011:{NFSU2_TR(0x769011);
if(r1(R+518)){{goto L76901f;}}
}
B769013:L769013:{c.instructions+=2;NFSU2_TR(0x769013);
s4(0x8b8820,u32(0x2ull));
}
B76901d:{NFSU2_TR(0x76901d);
{goto L76902f;}
}
B76901f:L76901f:{c.instructions+=2;NFSU2_TR(0x76901f);
__builtin_memmove((R+8),gp(0x8b8824),4);
}
B769025:{NFSU2_TR(0x769025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76902aull));
TAIL_STATIC(0x768b1cu,768);
}
B76902a:L76902a:{c.instructions+=1;NFSU2_TR(0x76902a);
__builtin_memmove(gp(0x8b8820),(R+0),4);
}
B76902f:L76902f:{c.instructions+=3;NFSU2_TR(0x76902f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769031:{NFSU2_TR(0x769031);
u8 U[4];
w4(U+0,u32(0x768e6aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769036:{NFSU2_TR(0x769036);
u8 U[4];
__builtin_memmove((U+0),gp(0x783090),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76903cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76903c:L76903c:{c.instructions+=2;NFSU2_TR(0x76903c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(m1(0x8b8808))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B769043:{NFSU2_TR(0x769043);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76904c;}}
}
B769045:L769045:{c.instructions+=1;NFSU2_TR(0x769045);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8b8808,u32(u32(m4(0x8b8808))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8b8808))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b8808))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b8808))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76904c:L76904c:{c.instructions+=1;NFSU2_TR(0x76904c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76904d:L76904d:{c.instructions+=5;NFSU2_TR(0x76904d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76904e:{NFSU2_TR(0x76904e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B769050:{NFSU2_TR(0x769050);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8828),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B769056:{NFSU2_TR(0x769056);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769057:{NFSU2_TR(0x769057);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769078;}}
}
B769059:L769059:{c.instructions+=2;NFSU2_TR(0x769059);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8430),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B769060:{NFSU2_TR(0x769060);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76906e;}}
}
B769062:L769062:{c.instructions+=3;NFSU2_TR(0x769062);
__builtin_memmove((R+0),gp(0x7830b0),4);
}
B769067:{NFSU2_TR(0x769067);
__builtin_memmove(gp(0x8b8828),(R+0),4);
}
B76906c:{NFSU2_TR(0x76906c);
{goto L769078;}
}
B76906e:L76906e:{c.instructions+=1;NFSU2_TR(0x76906e);
s4(0x8b8828,u32(0x768a04ull));
}
B769078:L769078:{c.instructions+=3;NFSU2_TR(0x769078);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76907c:{NFSU2_TR(0x76907c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76907e:{NFSU2_TR(0x76907e);
if(r1(R+518)){{goto L769127;}}
}
B769084:L769084:{c.instructions+=6;NFSU2_TR(0x769084);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B769087:{NFSU2_TR(0x769087);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B769089:{NFSU2_TR(0x769089);
__builtin_memmove((R+4),(R+24),4);
}
B76908b:{NFSU2_TR(0x76908b);
__builtin_memmove(gp(0x8b8824),(R+4),4);
}
B769091:{NFSU2_TR(0x769091);
__builtin_memmove(gp(0x8b881c),(R+0),4);
}
B769096:{NFSU2_TR(0x769096);
if(r1(R+518)){{goto L7690bb;}}
}
B769098:L769098:{c.instructions+=2;NFSU2_TR(0x769098);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76909a:{NFSU2_TR(0x76909a);
if(r1(R+518)){{goto L7690bb;}}
}
B76909c:L76909c:{c.instructions+=4;NFSU2_TR(0x76909c);
u8 U[4];
w4(U+0,u32(0x8b881cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7690a1:{NFSU2_TR(0x7690a1);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7690a3:{NFSU2_TR(0x7690a3);
u8 U[4];
w4(U+0,u32(0x7d8860ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7690a8:{NFSU2_TR(0x7690a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7690adull));
TAIL_STATIC(0x7688f0u,768);
}
B7690ad:L7690ad:{c.instructions+=3;NFSU2_TR(0x7690ad);
__builtin_memmove((R+4),gp(0x8b8824),4);
}
B7690b3:{NFSU2_TR(0x7690b3);
__builtin_memmove((R+0),gp(0x8b881c),4);
}
B7690b8:{NFSU2_TR(0x7690b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7690bb:L7690bb:{c.instructions+=3;NFSU2_TR(0x7690bb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7690bd:{NFSU2_TR(0x7690bd);
__builtin_memmove(gp(0x8b8808),(R+12),4);
}
B7690c3:{NFSU2_TR(0x7690c3);
if(r1(R+518)){{goto L769118;}}
}
B7690c5:L7690c5:{c.instructions+=2;NFSU2_TR(0x7690c5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7690c7:{NFSU2_TR(0x7690c7);
if(r1(R+518)){{goto L769118;}}
}
B7690c9:L7690c9:{c.instructions+=2;NFSU2_TR(0x7690c9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7690cb:{NFSU2_TR(0x7690cb);
if(r1(R+518)){{goto L7690d8;}}
}
B7690cd:L7690cd:{c.instructions+=2;NFSU2_TR(0x7690cd);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7690cf:{NFSU2_TR(0x7690cf);
if(r1(R+518)){{goto L7690d8;}}
}
B7690d1:L7690d1:{c.instructions+=1;NFSU2_TR(0x7690d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7690d6ull));
TAIL_STATIC(0x768f72u,768);
}
B7690d6:L7690d6:{c.instructions+=1;NFSU2_TR(0x7690d6);
{goto L7690dd;}
}
B7690d8:L7690d8:{c.instructions+=1;NFSU2_TR(0x7690d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7690ddull));
TAIL_STATIC(0x768ff8u,768);
}
B7690dd:L7690dd:{c.instructions+=2;NFSU2_TR(0x7690dd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8808),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7690e3:{NFSU2_TR(0x7690e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76913b;}}
}
B7690e5:L7690e5:{c.instructions+=4;NFSU2_TR(0x7690e5);
u8 U[4];
w4(U+0,u32(0x8b8824ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7690ea:{NFSU2_TR(0x7690ea);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7690ec:{NFSU2_TR(0x7690ec);
u8 U[4];
w4(U+0,u32(0x7d8a10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7690f1:{NFSU2_TR(0x7690f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7690f6ull));
TAIL_STATIC(0x7688f0u,768);
}
B7690f6:L7690f6:{c.instructions+=3;NFSU2_TR(0x7690f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7690f9:{NFSU2_TR(0x7690f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7690fb:{NFSU2_TR(0x7690fb);
if(r1(R+518)){{goto L76912c;}}
}
B7690fd:L7690fd:{c.instructions+=3;NFSU2_TR(0x7690fd);
__builtin_memmove((R+0),gp(0x8b881c),4);
}
B769102:{NFSU2_TR(0x769102);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B769104:{NFSU2_TR(0x769104);
if(r1(R+518)){{goto L769111;}}
}
B769106:L769106:{c.instructions+=2;NFSU2_TR(0x769106);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B769108:{NFSU2_TR(0x769108);
if(r1(R+518)){{goto L769111;}}
}
B76910a:L76910a:{c.instructions+=1;NFSU2_TR(0x76910a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76910full));
TAIL_STATIC(0x768f72u,768);
}
B76910f:L76910f:{c.instructions+=1;NFSU2_TR(0x76910f);
{goto L76912c;}
}
B769111:L769111:{c.instructions+=1;NFSU2_TR(0x769111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769116ull));
TAIL_STATIC(0x768ff8u,768);
}
B769116:L769116:{c.instructions+=1;NFSU2_TR(0x769116);
{goto L76912c;}
}
B769118:L769118:{c.instructions+=2;NFSU2_TR(0x769118);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76911a:{NFSU2_TR(0x76911a);
if(r1(R+518)){{goto L769127;}}
}
B76911c:L76911c:{c.instructions+=2;NFSU2_TR(0x76911c);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76911e:{NFSU2_TR(0x76911e);
if(r1(R+518)){{goto L769127;}}
}
B769120:L769120:{c.instructions+=1;NFSU2_TR(0x769120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769125ull));
TAIL_STATIC(0x768f3bu,768);
}
B769125:L769125:{c.instructions+=1;NFSU2_TR(0x769125);
{goto L76912c;}
}
B769127:L769127:{c.instructions+=1;NFSU2_TR(0x769127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76912cull));
TAIL_STATIC(0x768950u,768);
}
B76912c:L76912c:{c.instructions+=2;NFSU2_TR(0x76912c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8808),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B769132:{NFSU2_TR(0x769132);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76913b;}}
}
B769134:L769134:{c.instructions+=2;NFSU2_TR(0x769134);
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
B769136:{NFSU2_TR(0x769136);
{goto L7691ff;}
}
B76913b:L76913b:{c.instructions+=3;NFSU2_TR(0x76913b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76913c:{NFSU2_TR(0x76913c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B769142:{NFSU2_TR(0x769142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769147ull));
TAIL_STATIC(0x76896au,768);
}
B769147:L769147:{c.instructions+=3;NFSU2_TR(0x769147);
__builtin_memmove((R+28),(R+0),4);
}
B769149:{NFSU2_TR(0x769149);
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
B76914b:{NFSU2_TR(0x76914b);
if(r1(R+518)){{goto L7691fc;}}
}
B769151:L769151:{c.instructions+=3;NFSU2_TR(0x769151);
w4(R+0,u32(r2(R+28)));
}
B769154:{NFSU2_TR(0x769154);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769155:{NFSU2_TR(0x769155);
u8 U[4];
__builtin_memmove((U+0),gp(0x783088),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76915bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76915b:L76915b:{c.instructions+=2;NFSU2_TR(0x76915b);
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
B76915d:{NFSU2_TR(0x76915d);
if(r1(R+518)){{goto L7691fc;}}
}
B769163:L769163:{c.instructions+=3;NFSU2_TR(0x769163);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769165:{NFSU2_TR(0x769165);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b880c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76916b:{NFSU2_TR(0x76916b);
u8 U[4];
__builtin_memmove((U+0),gp(0x78308c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769171ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B769171:L769171:{c.instructions+=2;NFSU2_TR(0x769171);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B769173:{NFSU2_TR(0x769173);
if(r1(R+518)){{goto L7691fc;}}
}
B769179:L769179:{c.instructions+=4;NFSU2_TR(0x769179);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76917d:{NFSU2_TR(0x76917d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76917f:{NFSU2_TR(0x76917f);
__builtin_memmove((R+4),gp(0x8b880c),4);
}
B769185:{NFSU2_TR(0x769185);
if(r1(R+518)){{goto L769199;}}
}
B769187:L769187:{c.instructions+=4;NFSU2_TR(0x769187);
__builtin_memmove((R+8),gp(0x8b8810),2);
}
B76918e:{NFSU2_TR(0x76918e);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B769191:{NFSU2_TR(0x769191);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B769195:{NFSU2_TR(0x769195);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B769199:L769199:{c.instructions+=3;NFSU2_TR(0x769199);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76919d:{NFSU2_TR(0x76919d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76919f:{NFSU2_TR(0x76919f);
if(r1(R+518)){{goto L7691f7;}}
}
B7691a1:L7691a1:{c.instructions+=2;NFSU2_TR(0x7691a1);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(U+6))<(u16(0x814ull))));
w1(R+523,sborrow<u16>(r2(U+6),u16(0x814ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x814ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7691a6:{NFSU2_TR(0x7691a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7691b7;}}
}
B7691a8:L7691a8:{c.instructions+=3;NFSU2_TR(0x7691a8);
u8 U[4];
w4(U+0,u32(0x7d9034ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691ad:{NFSU2_TR(0x7691ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691ae:{NFSU2_TR(0x7691ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7691b3ull));
TAIL_STATIC(0x766ac0u,766);
}
B7691b3:L7691b3:{c.instructions+=3;NFSU2_TR(0x7691b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7691b4:{NFSU2_TR(0x7691b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7691b5:{NFSU2_TR(0x7691b5);
{goto L7691ca;}
}
B7691b7:L7691b7:{c.instructions+=5;NFSU2_TR(0x7691b7);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691b9:{NFSU2_TR(0x7691b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691ba:{NFSU2_TR(0x7691ba);
u8 U[4];
w4(U+0,u32(0x1001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691bf:{NFSU2_TR(0x7691bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691c0:{NFSU2_TR(0x7691c0);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8828),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7691c6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7691c6:L7691c6:{c.instructions+=2;NFSU2_TR(0x7691c6);
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
B7691c8:{NFSU2_TR(0x7691c8);
if(r1(R+518)){{goto L7691fc;}}
}
B7691ca:L7691ca:{c.instructions+=6;NFSU2_TR(0x7691ca);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691cc:{NFSU2_TR(0x7691cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7691cf:{NFSU2_TR(0x7691cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691d0:{NFSU2_TR(0x7691d0);
u8 U[4];
w4(U+0,u32(0x1002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691d5:{NFSU2_TR(0x7691d5);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8810),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691db:{NFSU2_TR(0x7691db);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8828),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7691e1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7691e1:L7691e1:{c.instructions+=2;NFSU2_TR(0x7691e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7691e3:{NFSU2_TR(0x7691e3);
if(r1(R+518)){{goto L7691fc;}}
}
B7691e5:L7691e5:{c.instructions+=5;NFSU2_TR(0x7691e5);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691e7:{NFSU2_TR(0x7691e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x80ull))));
}
B7691ed:{NFSU2_TR(0x7691ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691ee:{NFSU2_TR(0x7691ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7691ef:{NFSU2_TR(0x7691ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7691f4ull));
TAIL_STATIC(0x76af85u,76a);
}
B7691f4:L7691f4:{c.instructions+=1;NFSU2_TR(0x7691f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7691f7:L7691f7:{c.instructions+=3;NFSU2_TR(0x7691f7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7691f9:{NFSU2_TR(0x7691f9);
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
B7691fa:{NFSU2_TR(0x7691fa);
{goto L7691fe;}
}
B7691fc:L7691fc:{c.instructions+=1;NFSU2_TR(0x7691fc);
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
B7691fe:L7691fe:{c.instructions+=1;NFSU2_TR(0x7691fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7691ff:L7691ff:{c.instructions+=3;NFSU2_TR(0x7691ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B769200:{NFSU2_TR(0x769200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B769201:{NFSU2_TR(0x769201);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B769210:L769210:{c.instructions+=3;NFSU2_TR(0x769210);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B769214:{NFSU2_TR(0x769214);
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
B769216:{NFSU2_TR(0x769216);
if(r1(R+518)){{goto L769262;}}
}
B769218:L769218:{c.instructions+=8;NFSU2_TR(0x769218);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76921c:{NFSU2_TR(0x76921c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76921d:{NFSU2_TR(0x76921d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76921e:{NFSU2_TR(0x76921e);
__builtin_memmove((R+24),(R+8),4);
}
B769220:{NFSU2_TR(0x769220);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B769224:{NFSU2_TR(0x769224);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B769226:{NFSU2_TR(0x769226);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B769229:{NFSU2_TR(0x769229);
if(r1(R+518)){{goto L769263;}}
}
B76922b:L76922b:{c.instructions+=2;NFSU2_TR(0x76922b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B769230:{NFSU2_TR(0x769230);
if(r1(R+518)){{goto L769243;}}
}
B769232:L769232:{c.instructions+=3;NFSU2_TR(0x769232);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B769234:{NFSU2_TR(0x769234);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+4))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B769236:{NFSU2_TR(0x769236);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769290;}}
}
B769238:L769238:{c.instructions+=4;NFSU2_TR(0x769238);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76923b:{NFSU2_TR(0x76923b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76923e:{NFSU2_TR(0x76923e);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B769241:{NFSU2_TR(0x769241);
if(r1(R+518)){{goto L769260;}}
}
B769243:L769243:{c.instructions+=4;NFSU2_TR(0x769243);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B769245:{NFSU2_TR(0x769245);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+8),(U+0),1);
}
B769247:{NFSU2_TR(0x769247);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(r1(R+8))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+8))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B769249:{NFSU2_TR(0x769249);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769290;}}
}
B76924b:L76924b:{c.instructions+=4;NFSU2_TR(0x76924b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B76924e:{NFSU2_TR(0x76924e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B769251:{NFSU2_TR(0x769251);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(r1(R+8))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+8))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B769253:{NFSU2_TR(0x769253);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769290;}}
}
B769255:L769255:{c.instructions+=4;NFSU2_TR(0x769255);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B769258:{NFSU2_TR(0x769258);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B76925b:{NFSU2_TR(0x76925b);
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
B76925e:{NFSU2_TR(0x76925e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x769243u);}goto L769243;}}
}
B769260:L769260:{c.instructions+=2;NFSU2_TR(0x769260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B769261:{NFSU2_TR(0x769261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B769262:L769262:{c.instructions+=1;NFSU2_TR(0x769262);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B769263:L769263:{c.instructions+=4;NFSU2_TR(0x769263);
__builtin_memmove((R+4),(R+0),4);
}
B769265:{NFSU2_TR(0x769265);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B769268:{NFSU2_TR(0x769268);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+4))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B76926b:{NFSU2_TR(0x76926b);
if(r1(R+518)){{goto L769298;}}
}
B76926d:L76926d:{c.instructions+=1;NFSU2_TR(0x76926d);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L76926f;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76926du);}goto L76926d;}}
}
B76926f:L76926f:{c.instructions+=1;NFSU2_TR(0x76926f);
if(r1(R+518)){{goto L769298;}}
}
B769271:L769271:{c.instructions+=4;NFSU2_TR(0x769271);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B769274:{NFSU2_TR(0x769274);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B769277:{NFSU2_TR(0x769277);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(r1(R+8))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+8))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B769279:{NFSU2_TR(0x769279);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76928b;}}
}
B76927b:L76927b:{c.instructions+=2;NFSU2_TR(0x76927b);
u8 U[2];
__builtin_memmove((U+0),(R+5),1);
w1(R+512,u8((r1(U+0))<(r1(R+9))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+9))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76927d:{NFSU2_TR(0x76927d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76928b;}}
}
B76927f:L76927f:{c.instructions+=4;NFSU2_TR(0x76927f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B769282:{NFSU2_TR(0x769282);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B769285:{NFSU2_TR(0x769285);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(r1(R+8))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+8))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B769287:{NFSU2_TR(0x769287);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76928b;}}
}
B769289:L769289:{c.instructions+=1;NFSU2_TR(0x769289);
u8 U[1];
__builtin_memmove((U+0),(R+5),1);
w1(R+512,u8((r1(U+0))<(r1(R+9))));
}
B76928b:L76928b:{c.instructions+=1;NFSU2_TR(0x76928b);
w4(R+0,u32(0x0ull));
}
B769290:L769290:{c.instructions+=5;NFSU2_TR(0x769290);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B769292:{NFSU2_TR(0x769292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B769293:{NFSU2_TR(0x769293);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w1(U+9,sborrow<u32>(r4(U+4),r4(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+9))!=0)));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+10,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r4(U+10)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B769296:{NFSU2_TR(0x769296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B769297:{NFSU2_TR(0x769297);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B769298:L769298:{c.instructions+=2;NFSU2_TR(0x769298);
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
B76929a:{NFSU2_TR(0x76929a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x769260u);}goto L769260;}}
}
B76929c:L76929c:{c.instructions+=4;NFSU2_TR(0x76929c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B76929e:{NFSU2_TR(0x76929e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7692a0:{NFSU2_TR(0x7692a0);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(r1(R+4))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+4))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7692a2:{NFSU2_TR(0x7692a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76928bu);}goto L76928b;}}
}
B7692a4:L7692a4:{c.instructions+=2;NFSU2_TR(0x7692a4);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7692a7:{NFSU2_TR(0x7692a7);
if(r1(R+518)){{goto L7692c5;}}
}
B7692a9:L7692a9:{c.instructions+=2;NFSU2_TR(0x7692a9);
u8 U[2];
__builtin_memmove((U+0),(R+9),1);
w1(R+512,u8((r1(U+0))<(r1(R+5))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+5))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7692ab:{NFSU2_TR(0x7692ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76928bu);}goto L76928b;}}
}
B7692ad:L7692ad:{c.instructions+=2;NFSU2_TR(0x7692ad);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7692b0:{NFSU2_TR(0x7692b0);
if(r1(R+518)){{goto L7692c5;}}
}
B7692b2:L7692b2:{c.instructions+=4;NFSU2_TR(0x7692b2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xff0000ull))));
}
B7692b8:{NFSU2_TR(0x7692b8);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xff0000ull))));
}
B7692be:{NFSU2_TR(0x7692be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7692c0:{NFSU2_TR(0x7692c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76928bu);}goto L76928b;}}
}
B7692c2:L7692c2:{c.instructions+=1;NFSU2_TR(0x7692c2);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7692c5:L7692c5:{c.instructions+=3;NFSU2_TR(0x7692c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7692c6:{NFSU2_TR(0x7692c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7692c7:{NFSU2_TR(0x7692c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7692c8:L7692c8:{c.instructions+=3;NFSU2_TR(0x7692c8);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7692ca:{NFSU2_TR(0x7692ca);
u8 U[4];
w4(U+0,u32(0x7d9048ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7692cf:{NFSU2_TR(0x7692cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7692d4ull));
TAIL_STATIC(0x760da0u,760);
}
B7692d4:L7692d4:{c.instructions+=3;NFSU2_TR(0x7692d4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7692d6:{NFSU2_TR(0x7692d6);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b884c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7692dc:{NFSU2_TR(0x7692dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769313;}}
}
B7692de:L7692de:{c.instructions+=8;NFSU2_TR(0x7692de);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7692e1:{NFSU2_TR(0x7692e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7692e2:{NFSU2_TR(0x7692e2);
w1(R+512,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7692e4:{NFSU2_TR(0x7692e4);
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
B7692e5:{NFSU2_TR(0x7692e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7692e6:{NFSU2_TR(0x7692e6);
u8 U[4];
w4(U+0,u32(0x7d7d3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7692eb:{NFSU2_TR(0x7692eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7692ec:{NFSU2_TR(0x7692ec);
u8 U[4];
__builtin_memmove((U+0),gp(0x783080),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7692f2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7692f2:L7692f2:{c.instructions+=2;NFSU2_TR(0x7692f2);
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
B7692f4:{NFSU2_TR(0x7692f4);
if(r1(R+518)){{goto L7692fe;}}
}
B7692f6:L7692f6:{c.instructions+=2;NFSU2_TR(0x7692f6);
__builtin_memmove(gp(0x8b884c),(R+28),4);
}
B7692fc:{NFSU2_TR(0x7692fc);
{goto L769313;}
}
B7692fe:L7692fe:{c.instructions+=1;NFSU2_TR(0x7692fe);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769304ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B769304:L769304:{c.instructions+=2;NFSU2_TR(0x769304);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x78ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B769307:{NFSU2_TR(0x769307);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769313;}}
}
B769309:L769309:{c.instructions+=1;NFSU2_TR(0x769309);
s4(0x8b884c,u32(0x2ull));
}
B769313:L769313:{c.instructions+=3;NFSU2_TR(0x769313);
__builtin_memmove((R+0),gp(0x8b884c),4);
}
B769318:{NFSU2_TR(0x769318);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76931b:{NFSU2_TR(0x76931b);
if(r1(R+518)){{goto L76940b;}}
}
B769321:L769321:{c.instructions+=2;NFSU2_TR(0x769321);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B769323:{NFSU2_TR(0x769323);
if(r1(R+518)){{goto L76940b;}}
}
B769329:L769329:{c.instructions+=2;NFSU2_TR(0x769329);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76932c:{NFSU2_TR(0x76932c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769431;}}
}
B769332:L769332:{c.instructions+=4;NFSU2_TR(0x769332);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B769335:{NFSU2_TR(0x769335);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B769338:{NFSU2_TR(0x769338);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76933b:{NFSU2_TR(0x76933b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769345;}}
}
B76933d:L76933d:{c.instructions+=2;NFSU2_TR(0x76933d);
__builtin_memmove((R+0),gp(0x8b8844),4);
}
B769342:{NFSU2_TR(0x769342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B769345:L769345:{c.instructions+=11;NFSU2_TR(0x769345);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769346:{NFSU2_TR(0x769346);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769347:{NFSU2_TR(0x769347);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76934a:{NFSU2_TR(0x76934a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76934d:{NFSU2_TR(0x76934d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76934f:{NFSU2_TR(0x76934f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
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
B769352:{NFSU2_TR(0x769352);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B769355:{NFSU2_TR(0x769355);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x1ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76935c:{NFSU2_TR(0x76935c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76935d:{NFSU2_TR(0x76935d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B769360:{NFSU2_TR(0x769360);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769366ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B769366:L769366:{c.instructions+=4;NFSU2_TR(0x769366);
__builtin_memmove((R+28),(R+0),4);
}
B769368:{NFSU2_TR(0x769368);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76936b:{NFSU2_TR(0x76936b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76936d:{NFSU2_TR(0x76936d);
if(r1(R+518)){{goto L769431;}}
}
B769373:L769373:{c.instructions+=6;NFSU2_TR(0x769373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B769377:{NFSU2_TR(0x769377);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B76937a:{NFSU2_TR(0x76937a);
__builtin_memmove((R+0),(R+12),4);
}
B76937c:{NFSU2_TR(0x76937c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B76937f:{NFSU2_TR(0x76937f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B769382:{NFSU2_TR(0x769382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769387ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B769387:L769387:{c.instructions+=7;NFSU2_TR(0x769387);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76938a:{NFSU2_TR(0x76938a);
__builtin_memmove((R+24),(R+16),4);
}
B76938c:{NFSU2_TR(0x76938c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76938f:{NFSU2_TR(0x76938f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769390:{NFSU2_TR(0x769390);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769392:{NFSU2_TR(0x769392);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769393:{NFSU2_TR(0x769393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769398ull));
TAIL_STATIC(0x768890u,768);
}
B769398:L769398:{c.instructions+=3;NFSU2_TR(0x769398);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76939b:{NFSU2_TR(0x76939b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76939f:{NFSU2_TR(0x76939f);
{goto L7693b6;}
}
B7693a1:L7693a1:{c.instructions+=3;NFSU2_TR(0x7693a1);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7693a3:{NFSU2_TR(0x7693a3);
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
B7693a4:{NFSU2_TR(0x7693a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7693a5:L7693a5:{c.instructions+=2;NFSU2_TR(0x7693a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B7693a8:{NFSU2_TR(0x7693a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7693adull));
TAIL_STATIC(0x76d2d8u,76d);
}
B7693ad:L7693ad:{c.instructions+=3;NFSU2_TR(0x7693ad);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7693af:{NFSU2_TR(0x7693af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7693b3:{NFSU2_TR(0x7693b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7693b6:L7693b6:{c.instructions+=2;NFSU2_TR(0x7693b6);
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
B7693b8:{NFSU2_TR(0x7693b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7693d1;}}
}
B7693ba:L7693ba:{c.instructions+=3;NFSU2_TR(0x7693ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7693bb:{NFSU2_TR(0x7693bb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7693bd:{NFSU2_TR(0x7693bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7693c2ull));
TAIL_STATIC(0x76ace0u,76a);
}
B7693c2:L7693c2:{c.instructions+=5;NFSU2_TR(0x7693c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7693c3:{NFSU2_TR(0x7693c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7693c4:{NFSU2_TR(0x7693c4);
__builtin_memmove((R+24),(R+0),4);
}
B7693c6:{NFSU2_TR(0x7693c6);
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
B7693c8:{NFSU2_TR(0x7693c8);
if(r1(R+518)){{goto L769431;}}
}
B7693ca:L7693ca:{c.instructions+=1;NFSU2_TR(0x7693ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7693d1:L7693d1:{c.instructions+=7;NFSU2_TR(0x7693d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7693d2:{NFSU2_TR(0x7693d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7693d3:{NFSU2_TR(0x7693d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7693d6:{NFSU2_TR(0x7693d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7693d9:{NFSU2_TR(0x7693d9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7693db:{NFSU2_TR(0x7693db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7693de:{NFSU2_TR(0x7693de);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7693e4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7693e4:L7693e4:{c.instructions+=2;NFSU2_TR(0x7693e4);
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
B7693e6:{NFSU2_TR(0x7693e6);
if(r1(R+518)){{goto L7693f9;}}
}
B7693e8:L7693e8:{c.instructions+=5;NFSU2_TR(0x7693e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7693eb:{NFSU2_TR(0x7693eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7693ec:{NFSU2_TR(0x7693ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7693ed:{NFSU2_TR(0x7693ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7693f0:{NFSU2_TR(0x7693f0);
u8 U[4];
__builtin_memmove((U+0),gp(0x783080),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7693f6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7693f6:L7693f6:{c.instructions+=1;NFSU2_TR(0x7693f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7693f9:L7693f9:{c.instructions+=2;NFSU2_TR(0x7693f9);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
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
B7693fd:{NFSU2_TR(0x7693fd);
if(r1(R+518)){{goto L769406;}}
}
B7693ff:L7693ff:{c.instructions+=2;NFSU2_TR(0x7693ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769400:{NFSU2_TR(0x769400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769405ull));
TAIL_STATIC(0x75c6dau,75c);
}
B769405:L769405:{c.instructions+=1;NFSU2_TR(0x769405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B769406:L769406:{c.instructions+=2;NFSU2_TR(0x769406);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B769409:{NFSU2_TR(0x769409);
{goto L769479;}
}
B76940b:L76940b:{c.instructions+=3;NFSU2_TR(0x76940b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76940e:{NFSU2_TR(0x76940e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B769410:{NFSU2_TR(0x769410);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769418;}}
}
B769412:L769412:{c.instructions+=1;NFSU2_TR(0x769412);
__builtin_memmove((R+12),gp(0x8b8834),4);
}
B769418:L769418:{c.instructions+=3;NFSU2_TR(0x769418);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76941b:{NFSU2_TR(0x76941b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76941d:{NFSU2_TR(0x76941d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769425;}}
}
B76941f:L76941f:{c.instructions+=1;NFSU2_TR(0x76941f);
__builtin_memmove((R+28),gp(0x8b8844),4);
}
B769425:L769425:{c.instructions+=2;NFSU2_TR(0x769425);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769426:{NFSU2_TR(0x769426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76942bull));
TAIL_STATIC(0x76d0c0u,76d);
}
B76942b:L76942b:{c.instructions+=3;NFSU2_TR(0x76942b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76942c:{NFSU2_TR(0x76942c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76942f:{NFSU2_TR(0x76942f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769435;}}
}
B769431:L769431:{c.instructions+=2;NFSU2_TR(0x769431);
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
B769433:{NFSU2_TR(0x769433);
{goto L769479;}
}
B769435:L769435:{c.instructions+=2;NFSU2_TR(0x769435);
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
B769437:{NFSU2_TR(0x769437);
if(r1(R+518)){{goto L769457;}}
}
B769439:L769439:{c.instructions+=8;NFSU2_TR(0x769439);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76943b:{NFSU2_TR(0x76943b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76943d:{NFSU2_TR(0x76943d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B769440:{NFSU2_TR(0x769440);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769441:{NFSU2_TR(0x769441);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B769444:{NFSU2_TR(0x769444);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769445:{NFSU2_TR(0x769445);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769446:{NFSU2_TR(0x769446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76944bull));
TAIL_STATIC(0x76d109u,76d);
}
B76944b:L76944b:{c.instructions+=4;NFSU2_TR(0x76944b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B76944e:{NFSU2_TR(0x76944e);
__builtin_memmove((R+24),(R+0),4);
}
B769450:{NFSU2_TR(0x769450);
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
B769452:{NFSU2_TR(0x769452);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x769431u);}goto L769431;}}
}
B769454:L769454:{c.instructions+=1;NFSU2_TR(0x769454);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B769457:L769457:{c.instructions+=6;NFSU2_TR(0x769457);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76945a:{NFSU2_TR(0x76945a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76945d:{NFSU2_TR(0x76945d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B769460:{NFSU2_TR(0x769460);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B769463:{NFSU2_TR(0x769463);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769464:{NFSU2_TR(0x769464);
u8 U[4];
__builtin_memmove((U+0),gp(0x783084),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76946aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76946a:L76946a:{c.instructions+=3;NFSU2_TR(0x76946a);
__builtin_memmove((R+28),(R+0),4);
}
B76946c:{NFSU2_TR(0x76946c);
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
B76946e:{NFSU2_TR(0x76946e);
if(r1(R+518)){{goto L769477;}}
}
B769470:L769470:{c.instructions+=2;NFSU2_TR(0x769470);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769471:{NFSU2_TR(0x769471);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769476ull));
TAIL_STATIC(0x75c6dau,75c);
}
B769476:L769476:{c.instructions+=1;NFSU2_TR(0x769476);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B769477:L769477:{c.instructions+=1;NFSU2_TR(0x769477);
__builtin_memmove((R+0),(R+28),4);
}
B769479:L769479:{c.instructions+=2;NFSU2_TR(0x769479);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+16),(U+0),4);
}
B76947c:{NFSU2_TR(0x76947c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769481ull));
TAIL_STATIC(0x760ddbu,760);
}
B769481:L769481:{c.instructions+=1;NFSU2_TR(0x769481);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B769490:L769490:{c.instructions+=14;NFSU2_TR(0x769490);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769491:{NFSU2_TR(0x769491);
__builtin_memmove((R+20),(R+16),4);
}
B769493:{NFSU2_TR(0x769493);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769494:{NFSU2_TR(0x769494);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B769496:{NFSU2_TR(0x769496);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769497:{NFSU2_TR(0x769497);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769498:{NFSU2_TR(0x769498);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769499:{NFSU2_TR(0x769499);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76949a:{NFSU2_TR(0x76949a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76949b:{NFSU2_TR(0x76949b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76949c:{NFSU2_TR(0x76949c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76949d:{NFSU2_TR(0x76949d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76949e:{NFSU2_TR(0x76949e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7694a1:{NFSU2_TR(0x7694a1);
__builtin_memmove((R+4),(R+4),4);
}
B7694a4:L7694a4:{c.instructions+=3;NFSU2_TR(0x7694a4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7694a6:{NFSU2_TR(0x7694a6);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+0))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B7694a8:{NFSU2_TR(0x7694a8);
if(r1(R+518)){{goto L7694b3;}}
}
B7694aa:L7694aa:{c.instructions+=3;NFSU2_TR(0x7694aa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7694ad:{NFSU2_TR(0x7694ad);
u8 U[15];
w4(U+0,sar<u32>(r4(R+0),u64(u32(0x3ull))));
w4(U+4,u32(u32(r4(R+16))+u32(r4(U+0))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0x7ull))));
__builtin_memmove((U+12),gp(u32(r4(U+4))),1);
w1(U+13,shl<u8>(u8(0x1ull),u64(r4(U+8))));
w1(U+14,u8(u32(r1(U+12))|u32(r1(U+13))));
s1(u32(r4(U+4)),r1(U+14));
}
B7694b1:{NFSU2_TR(0x7694b1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7694a4u);}goto L7694a4;}
}
B7694b3:L7694b3:{c.instructions+=2;NFSU2_TR(0x7694b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7694b6:{NFSU2_TR(0x7694b6);
__builtin_memmove((R+28),(R+28),4);
}
B7694b8:L7694b8:{c.instructions+=3;NFSU2_TR(0x7694b8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7694ba:{NFSU2_TR(0x7694ba);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+0))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B7694bc:{NFSU2_TR(0x7694bc);
if(r1(R+518)){{goto L7694ca;}}
}
B7694be:L7694be:{c.instructions+=3;NFSU2_TR(0x7694be);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7694c1:{NFSU2_TR(0x7694c1);
u8 U[15];
w4(U+0,sar<u32>(r4(R+0),u64(u32(0x3ull))));
w4(U+4,u32(u32(r4(R+16))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(U+9,u32(u32(r4(R+0))&u32(u32(0x7ull))));
w1(U+13,shr<u8>(r1(U+8),u64(r4(U+9))));
w1(U+14,u8(u32(r1(U+13))&u32(u8(0x1ull))));
w1(R+512,u8((r1(U+14))!=(u8(0x0ull))));
}
B7694c5:{NFSU2_TR(0x7694c5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7694b8u);}goto L7694b8;}}
}
B7694c7:L7694c7:{c.instructions+=1;NFSU2_TR(0x7694c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B7694ca:L7694ca:{c.instructions+=4;NFSU2_TR(0x7694ca);
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
B7694cd:{NFSU2_TR(0x7694cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7694ce:{NFSU2_TR(0x7694ce);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7694cf:{NFSU2_TR(0x7694cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7694d0:L7694d0:{c.instructions+=11;NFSU2_TR(0x7694d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7694d1:{NFSU2_TR(0x7694d1);
__builtin_memmove((R+20),(R+16),4);
}
B7694d3:{NFSU2_TR(0x7694d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B7694d6:{NFSU2_TR(0x7694d6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7694db:{NFSU2_TR(0x7694db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B7694de:{NFSU2_TR(0x7694de);
w4(R+4,u32(0xa1ull));
}
B7694e3:{NFSU2_TR(0x7694e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7694e6:{NFSU2_TR(0x7694e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7694e9:{NFSU2_TR(0x7694e9);
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
B7694eb:{NFSU2_TR(0x7694eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7694ec:{NFSU2_TR(0x7694ec);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L769605;}}
}
B7694f2:L7694f2:{c.instructions+=1;NFSU2_TR(0x7694f2);
if(r1(R+518)){{goto L7695f9;}}
}
B7694f8:L7694f8:{c.instructions+=2;NFSU2_TR(0x7694f8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7694fb:{NFSU2_TR(0x7694fb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L769589;}}
}
B769501:L769501:{c.instructions+=1;NFSU2_TR(0x769501);
if(r1(R+518)){{goto L769576;}}
}
B769503:L769503:{c.instructions+=4;NFSU2_TR(0x769503);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769505:{NFSU2_TR(0x769505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B769506:{NFSU2_TR(0x769506);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B769508:{NFSU2_TR(0x769508);
if(r1(R+518)){{goto L769567;}}
}
B76950a:L76950a:{c.instructions+=2;NFSU2_TR(0x76950a);
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
B76950b:{NFSU2_TR(0x76950b);
if(r1(R+518)){{goto L76955b;}}
}
B76950d:L76950d:{c.instructions+=2;NFSU2_TR(0x76950d);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B769510:{NFSU2_TR(0x769510);
if(r1(R+518)){{goto L76954c;}}
}
B769512:L769512:{c.instructions+=2;NFSU2_TR(0x769512);
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
B769513:{NFSU2_TR(0x769513);
if(r1(R+518)){{goto L769540;}}
}
B769515:L769515:{c.instructions+=2;NFSU2_TR(0x769515);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B769518:{NFSU2_TR(0x769518);
if(r1(R+518)){{goto L76952d;}}
}
B76951a:L76951a:{c.instructions+=2;NFSU2_TR(0x76951a);
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
B76951b:{NFSU2_TR(0x76951b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769756;}}
}
B769521:L769521:{c.instructions+=2;NFSU2_TR(0x769521);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3ba0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769528:{NFSU2_TR(0x769528);
{goto L7695ca;}
}
B76952d:L76952d:{c.instructions+=3;NFSU2_TR(0x76952d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769534:{NFSU2_TR(0x769534);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3ba0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76953b:{NFSU2_TR(0x76953b);
{goto L76968c;}
}
B769540:L769540:{c.instructions+=2;NFSU2_TR(0x769540);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3b0cull));
s4(u32(r4(U+0)),r4(U+4));
}
B769547:{NFSU2_TR(0x769547);
{goto L7696f3;}
}
B76954c:L76954c:{c.instructions+=3;NFSU2_TR(0x76954c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76954f:{NFSU2_TR(0x76954f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3b0cull));
s4(u32(r4(U+0)),r4(U+4));
}
B769556:{NFSU2_TR(0x769556);
{goto L76968c;}
}
B76955b:L76955b:{c.instructions+=2;NFSU2_TR(0x76955b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3b14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769562:{NFSU2_TR(0x769562);
{goto L7696f3;}
}
B769567:L769567:{c.instructions+=3;NFSU2_TR(0x769567);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76956a:{NFSU2_TR(0x76956a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3b14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769571:{NFSU2_TR(0x769571);
{goto L76968c;}
}
B769576:L769576:{c.instructions+=1;NFSU2_TR(0x769576);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76957d:L76957d:{c.instructions+=2;NFSU2_TR(0x76957d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3adcull));
s4(u32(r4(U+0)),r4(U+4));
}
B769584:{NFSU2_TR(0x769584);
{goto L76968c;}
}
B769589:L769589:{c.instructions+=2;NFSU2_TR(0x769589);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x19ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x19ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x19ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76958c:{NFSU2_TR(0x76958c);
if(r1(R+518)){{goto L7695c3;}}
}
B76958e:L76958e:{c.instructions+=2;NFSU2_TR(0x76958e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76958f:{NFSU2_TR(0x76958f);
if(r1(R+518)){{goto L7695b7;}}
}
B769591:L769591:{c.instructions+=2;NFSU2_TR(0x769591);
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
B769592:{NFSU2_TR(0x769592);
if(r1(R+518)){{goto L7695ae;}}
}
B769594:L769594:{c.instructions+=2;NFSU2_TR(0x769594);
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
B769595:{NFSU2_TR(0x769595);
if(r1(R+518)){{goto L7696ec;}}
}
B76959b:L76959b:{c.instructions+=2;NFSU2_TR(0x76959b);
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
B76959c:{NFSU2_TR(0x76959c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769756;}}
}
B7695a2:L7695a2:{c.instructions+=2;NFSU2_TR(0x7695a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3adcull));
s4(u32(r4(U+0)),r4(U+4));
}
B7695a9:{NFSU2_TR(0x7695a9);
{goto L769714;}
}
B7695ae:L7695ae:{c.instructions+=2;NFSU2_TR(0x7695ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7695b5:{NFSU2_TR(0x7695b5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76957du);}goto L76957d;}
}
B7695b7:L7695b7:{c.instructions+=4;NFSU2_TR(0x7695b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7695ba:{NFSU2_TR(0x7695ba);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B7695bc:{NFSU2_TR(0x7695bc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7695be:{NFSU2_TR(0x7695be);
{goto L769756;}
}
B7695c3:L7695c3:{c.instructions+=1;NFSU2_TR(0x7695c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3adcull));
s4(u32(r4(U+0)),r4(U+4));
}
B7695ca:L7695ca:{c.instructions+=13;NFSU2_TR(0x7695ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7695cd:{NFSU2_TR(0x7695cd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7695cf:{NFSU2_TR(0x7695cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7695d2:{NFSU2_TR(0x7695d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7695d5:{NFSU2_TR(0x7695d5);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7695d8:{NFSU2_TR(0x7695d8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7695da:{NFSU2_TR(0x7695da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7695dd:{NFSU2_TR(0x7695dd);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7695e0:{NFSU2_TR(0x7695e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7695e1:{NFSU2_TR(0x7695e1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7695e3:{NFSU2_TR(0x7695e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7695ea:{NFSU2_TR(0x7695ea);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7695ed:{NFSU2_TR(0x7695ed);
u8 U[4];
__builtin_memmove((U+0),gp(0x81aa5c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7695f3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7695f3:L7695f3:{c.instructions+=2;NFSU2_TR(0x7695f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7695f4:{NFSU2_TR(0x7695f4);
{goto L769751;}
}
B7695f9:L7695f9:{c.instructions+=2;NFSU2_TR(0x7695f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769600:{NFSU2_TR(0x769600);
{goto L769685;}
}
B769605:L769605:{c.instructions+=3;NFSU2_TR(0x769605);
w4(R+4,u32(0x3eaull));
}
B76960a:{NFSU2_TR(0x76960a);
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
B76960c:{NFSU2_TR(0x76960c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7696d0;}}
}
B769612:L769612:{c.instructions+=1;NFSU2_TR(0x769612);
if(r1(R+518)){{goto L7696c7;}}
}
B769618:L769618:{c.instructions+=2;NFSU2_TR(0x769618);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0xa2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xa2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xa2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76961d:{NFSU2_TR(0x76961d);
if(r1(R+518)){{goto L76967e;}}
}
B76961f:L76961f:{c.instructions+=2;NFSU2_TR(0x76961f);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B769622:{NFSU2_TR(0x769622);
if(r1(R+518)){{goto L76966e;}}
}
B769624:L769624:{c.instructions+=2;NFSU2_TR(0x769624);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B769627:{NFSU2_TR(0x769627);
if(r1(R+518)){{goto L76965e;}}
}
B769629:L769629:{c.instructions+=2;NFSU2_TR(0x769629);
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
B76962a:{NFSU2_TR(0x76962a);
if(r1(R+518)){{goto L769652;}}
}
B76962c:L76962c:{c.instructions+=2;NFSU2_TR(0x76962c);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x33dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x33dull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x33dull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B769631:{NFSU2_TR(0x769631);
if(r1(R+518)){{goto L769646;}}
}
B769633:L769633:{c.instructions+=2;NFSU2_TR(0x769633);
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
B769634:{NFSU2_TR(0x769634);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769756;}}
}
B76963a:L76963a:{c.instructions+=2;NFSU2_TR(0x76963a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3b0cull));
s4(u32(r4(U+0)),r4(U+4));
}
B769641:{NFSU2_TR(0x769641);
{goto L769714;}
}
B769646:L769646:{c.instructions+=2;NFSU2_TR(0x769646);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3b14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76964d:{NFSU2_TR(0x76964d);
{goto L769714;}
}
B769652:L769652:{c.instructions+=2;NFSU2_TR(0x769652);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3b04ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769659:{NFSU2_TR(0x769659);
{goto L7696f3;}
}
B76965e:L76965e:{c.instructions+=3;NFSU2_TR(0x76965e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769665:{NFSU2_TR(0x769665);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3b04ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76966c:{NFSU2_TR(0x76966c);
{goto L76968c;}
}
B76966e:L76966e:{c.instructions+=3;NFSU2_TR(0x76966e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769675:{NFSU2_TR(0x769675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7d90c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76967c:{NFSU2_TR(0x76967c);
{goto L76968c;}
}
B76967e:L76967e:{c.instructions+=1;NFSU2_TR(0x76967e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769685:L769685:{c.instructions+=1;NFSU2_TR(0x769685);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3b98ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76968c:L76968c:{c.instructions+=12;NFSU2_TR(0x76968c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76968f:{NFSU2_TR(0x76968f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B769691:{NFSU2_TR(0x769691);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B769694:{NFSU2_TR(0x769694);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B769697:{NFSU2_TR(0x769697);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76969a:{NFSU2_TR(0x76969a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76969c:{NFSU2_TR(0x76969c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B76969f:{NFSU2_TR(0x76969f);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7696a2:{NFSU2_TR(0x7696a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7696a3:{NFSU2_TR(0x7696a3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7696a5:{NFSU2_TR(0x7696a5);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7696a8:{NFSU2_TR(0x7696a8);
u8 U[4];
__builtin_memmove((U+0),gp(0x81aa5c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7696aeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7696ae:L7696ae:{c.instructions+=3;NFSU2_TR(0x7696ae);
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
B7696b0:{NFSU2_TR(0x7696b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7696b1:{NFSU2_TR(0x7696b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769751;}}
}
B7696b7:L7696b7:{c.instructions+=1;NFSU2_TR(0x7696b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7696bcull));
TAIL_STATIC(0x7661bau,766);
}
B7696bc:L7696bc:{c.instructions+=2;NFSU2_TR(0x7696bc);
u8 U[4];
w4(U+0,u32(0x22ull));
s4(u32(r4(R+0)),r4(U+0));
}
B7696c2:{NFSU2_TR(0x7696c2);
{goto L769751;}
}
B7696c7:L7696c7:{c.instructions+=2;NFSU2_TR(0x7696c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3ba0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7696ce:{NFSU2_TR(0x7696ce);
{goto L769714;}
}
B7696d0:L7696d0:{c.instructions+=2;NFSU2_TR(0x7696d0);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x3ebull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ebull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ebull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7696d5:{NFSU2_TR(0x7696d5);
if(r1(R+518)){{goto L76970d;}}
}
B7696d7:L7696d7:{c.instructions+=2;NFSU2_TR(0x7696d7);
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
B7696d8:{NFSU2_TR(0x7696d8);
if(r1(R+518)){{goto L769704;}}
}
B7696da:L7696da:{c.instructions+=2;NFSU2_TR(0x7696da);
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
B7696db:{NFSU2_TR(0x7696db);
if(r1(R+518)){{goto L7696fb;}}
}
B7696dd:L7696dd:{c.instructions+=2;NFSU2_TR(0x7696dd);
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
B7696de:{NFSU2_TR(0x7696de);
if(r1(R+518)){{goto L7696ec;}}
}
B7696e0:L7696e0:{c.instructions+=2;NFSU2_TR(0x7696e0);
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
B7696e1:{NFSU2_TR(0x7696e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769756;}}
}
B7696e3:L7696e3:{c.instructions+=2;NFSU2_TR(0x7696e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3afcull));
s4(u32(r4(U+0)),r4(U+4));
}
B7696ea:{NFSU2_TR(0x7696ea);
{goto L769714;}
}
B7696ec:L7696ec:{c.instructions+=1;NFSU2_TR(0x7696ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3adcull));
s4(u32(r4(U+0)),r4(U+4));
}
B7696f3:L7696f3:{c.instructions+=3;NFSU2_TR(0x7696f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7696f6:{NFSU2_TR(0x7696f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7696f9:{NFSU2_TR(0x7696f9);
{goto L76971e;}
}
B7696fb:L7696fb:{c.instructions+=2;NFSU2_TR(0x7696fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3b7cull));
s4(u32(r4(U+0)),r4(U+4));
}
B769702:{NFSU2_TR(0x769702);
{goto L769714;}
}
B769704:L769704:{c.instructions+=2;NFSU2_TR(0x769704);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3c00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76970b:{NFSU2_TR(0x76970b);
{goto L769714;}
}
B76970d:L76970d:{c.instructions+=1;NFSU2_TR(0x76970d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b3c14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769714:L769714:{c.instructions+=4;NFSU2_TR(0x769714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B769717:{NFSU2_TR(0x769717);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B769719:{NFSU2_TR(0x769719);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76971c:{NFSU2_TR(0x76971c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76971e:L76971e:{c.instructions+=11;NFSU2_TR(0x76971e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B769720:{NFSU2_TR(0x769720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B769723:{NFSU2_TR(0x769723);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B769726:{NFSU2_TR(0x769726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76972d:{NFSU2_TR(0x76972d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76972f:{NFSU2_TR(0x76972f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B769732:{NFSU2_TR(0x769732);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B769735:{NFSU2_TR(0x769735);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769736:{NFSU2_TR(0x769736);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B769738:{NFSU2_TR(0x769738);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76973b:{NFSU2_TR(0x76973b);
u8 U[4];
__builtin_memmove((U+0),gp(0x81aa5c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769741ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B769741:L769741:{c.instructions+=3;NFSU2_TR(0x769741);
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
B769743:{NFSU2_TR(0x769743);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B769744:{NFSU2_TR(0x769744);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769751;}}
}
B769746:L769746:{c.instructions+=1;NFSU2_TR(0x769746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76974bull));
TAIL_STATIC(0x7661bau,766);
}
B76974b:L76974b:{c.instructions+=1;NFSU2_TR(0x76974b);
u8 U[4];
w4(U+0,u32(0x21ull));
s4(u32(r4(R+0)),r4(U+0));
}
B769751:L769751:{c.instructions+=2;NFSU2_TR(0x769751);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B769754:{NFSU2_TR(0x769754);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B769756:L769756:{c.instructions+=4;NFSU2_TR(0x769756);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B769759:{NFSU2_TR(0x769759);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76975c:{NFSU2_TR(0x76975c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76975d:{NFSU2_TR(0x76975d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769762ull));
TAIL_STATIC(0x76115eu,761);
}
B769762:L769762:{c.instructions+=2;NFSU2_TR(0x769762);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B769763:{NFSU2_TR(0x769763);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B769764:L769764:{c.instructions+=10;NFSU2_TR(0x769764);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769765:{NFSU2_TR(0x769765);
__builtin_memmove((R+20),(R+16),4);
}
B769767:{NFSU2_TR(0x769767);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769768:{NFSU2_TR(0x769768);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769769:{NFSU2_TR(0x769769);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76976a:{NFSU2_TR(0x76976a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76976b:{NFSU2_TR(0x76976b);
w4(R+24,u32(0xffffull));
}
B769770:{NFSU2_TR(0x769770);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769771:{NFSU2_TR(0x769771);
u8 U[4];
__builtin_memmove((U+0),gp(0x81aa60),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769777:{NFSU2_TR(0x769777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76977cull));
TAIL_STATIC(0x7676a4u,767);
}
B76977c:L76977c:{c.instructions+=11;NFSU2_TR(0x76977c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76977f:{NFSU2_TR(0x76977f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B769780:{NFSU2_TR(0x769780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B769781:{NFSU2_TR(0x769781);
__builtin_memmove((R+12),(R+0),4);
}
B769783:{NFSU2_TR(0x769783);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B769786:{NFSU2_TR(0x769786);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769787:{NFSU2_TR(0x769787);
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x7ff0ull))));
}
B76978b:{NFSU2_TR(0x76978b);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x7ff0ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x7ff0ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x7ff0ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B76978f:{NFSU2_TR(0x76978f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769790:{NFSU2_TR(0x769790);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B769793:{NFSU2_TR(0x769793);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7697ea;}}
}
B769795:L769795:{c.instructions+=1;NFSU2_TR(0x769795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76979aull));
TAIL_STATIC(0x766ea9u,766);
}
B76979a:L76979a:{c.instructions+=4;NFSU2_TR(0x76979a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76979c:{NFSU2_TR(0x76979c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76979d:{NFSU2_TR(0x76979d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76979e:{NFSU2_TR(0x76979e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7697cd;}}
}
B7697a0:L7697a0:{c.instructions+=2;NFSU2_TR(0x7697a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7697a3:{NFSU2_TR(0x7697a3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7697bf;}}
}
B7697a5:L7697a5:{c.instructions+=2;NFSU2_TR(0x7697a5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7697a8:{NFSU2_TR(0x7697a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7697cd;}}
}
B7697aa:L7697aa:{c.instructions+=7;NFSU2_TR(0x7697aa);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7697ad:{NFSU2_TR(0x7697ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7697ae:{NFSU2_TR(0x7697ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7697af:{NFSU2_TR(0x7697af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7697b0:{NFSU2_TR(0x7697b0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7697b3:{NFSU2_TR(0x7697b3);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7697b5:{NFSU2_TR(0x7697b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7697baull));
TAIL_STATIC(0x767578u,767);
}
B7697ba:L7697ba:{c.instructions+=2;NFSU2_TR(0x7697ba);
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
B7697bd:{NFSU2_TR(0x7697bd);
{goto L769831;}
}
B7697bf:L7697bf:{c.instructions+=3;NFSU2_TR(0x7697bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7697c0:{NFSU2_TR(0x7697c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7697c1:{NFSU2_TR(0x7697c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7697c6ull));
TAIL_STATIC(0x7676a4u,767);
}
B7697c6:L7697c6:{c.instructions+=4;NFSU2_TR(0x7697c6);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7697c9:{NFSU2_TR(0x7697c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7697ca:{NFSU2_TR(0x7697ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7697cb:{NFSU2_TR(0x7697cb);
{goto L769831;}
}
B7697cd:L7697cd:{c.instructions+=10;NFSU2_TR(0x7697cd);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7697d0:{NFSU2_TR(0x7697d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7697d1:{NFSU2_TR(0x7697d1);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B7697d7:{NFSU2_TR(0x7697d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B7697da:{NFSU2_TR(0x7697da);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7697de:{NFSU2_TR(0x7697de);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7697e1:{NFSU2_TR(0x7697e1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7697e4:{NFSU2_TR(0x7697e4);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7697e6:{NFSU2_TR(0x7697e6);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7697e8:{NFSU2_TR(0x7697e8);
{goto L769829;}
}
B7697ea:L7697ea:{c.instructions+=1;NFSU2_TR(0x7697ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7697efull));
TAIL_STATIC(0x76cc73u,76c);
}
B7697ef:L7697ef:{c.instructions+=8;NFSU2_TR(0x7697ef);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7697f2:{NFSU2_TR(0x7697f2);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7697f5:{NFSU2_TR(0x7697f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7697f6:{NFSU2_TR(0x7697f6);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B7697f9:{NFSU2_TR(0x7697f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7697fa:{NFSU2_TR(0x7697fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7697fc:{NFSU2_TR(0x7697fc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7697ff:{NFSU2_TR(0x7697ff);
if(r1(R+514)){{goto L76980f;}}
}
B769801:L769801:{c.instructions+=3;NFSU2_TR(0x769801);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769802:{NFSU2_TR(0x769802);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769803:{NFSU2_TR(0x769803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769808ull));
TAIL_STATIC(0x7676a4u,767);
}
B769808:L769808:{c.instructions+=4;NFSU2_TR(0x769808);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76980b:{NFSU2_TR(0x76980b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76980c:{NFSU2_TR(0x76980c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76980d:{NFSU2_TR(0x76980d);
{goto L769831;}
}
B76980f:L76980f:{c.instructions+=2;NFSU2_TR(0x76980f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B769812:{NFSU2_TR(0x769812);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x769801u);}goto L769801;}}
}
B769814:L769814:{c.instructions+=8;NFSU2_TR(0x769814);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B769817:{NFSU2_TR(0x769817);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769818:{NFSU2_TR(0x769818);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B76981b:{NFSU2_TR(0x76981b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76981f:{NFSU2_TR(0x76981f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B769822:{NFSU2_TR(0x769822);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B769825:{NFSU2_TR(0x769825);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769827:{NFSU2_TR(0x769827);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769829:L769829:{c.instructions+=1;NFSU2_TR(0x769829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76982eull));
TAIL_STATIC(0x7675cbu,767);
}
B76982e:L76982e:{c.instructions+=1;NFSU2_TR(0x76982e);
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
B769831:L769831:{c.instructions+=4;NFSU2_TR(0x769831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B769832:{NFSU2_TR(0x769832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B769833:{NFSU2_TR(0x769833);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B769834:{NFSU2_TR(0x769834);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B769835:L769835:{c.instructions+=10;NFSU2_TR(0x769835);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769836:{NFSU2_TR(0x769836);
__builtin_memmove((R+20),(R+16),4);
}
B769838:{NFSU2_TR(0x769838);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769839:{NFSU2_TR(0x769839);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76983a:{NFSU2_TR(0x76983a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76983b:{NFSU2_TR(0x76983b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76983c:{NFSU2_TR(0x76983c);
w4(R+24,u32(0xffffull));
}
B769841:{NFSU2_TR(0x769841);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769842:{NFSU2_TR(0x769842);
u8 U[4];
__builtin_memmove((U+0),gp(0x81aa64),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769848:{NFSU2_TR(0x769848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76984dull));
TAIL_STATIC(0x7676a4u,767);
}
B76984d:L76984d:{c.instructions+=11;NFSU2_TR(0x76984d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B769850:{NFSU2_TR(0x769850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B769851:{NFSU2_TR(0x769851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B769852:{NFSU2_TR(0x769852);
__builtin_memmove((R+12),(R+0),4);
}
B769854:{NFSU2_TR(0x769854);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B769857:{NFSU2_TR(0x769857);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769858:{NFSU2_TR(0x769858);
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x7ff0ull))));
}
B76985c:{NFSU2_TR(0x76985c);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x7ff0ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x7ff0ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x7ff0ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B769860:{NFSU2_TR(0x769860);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769861:{NFSU2_TR(0x769861);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B769864:{NFSU2_TR(0x769864);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7698bb;}}
}
B769866:L769866:{c.instructions+=1;NFSU2_TR(0x769866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76986bull));
TAIL_STATIC(0x766ea9u,766);
}
B76986b:L76986b:{c.instructions+=4;NFSU2_TR(0x76986b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76986d:{NFSU2_TR(0x76986d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76986e:{NFSU2_TR(0x76986e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76986f:{NFSU2_TR(0x76986f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76989e;}}
}
B769871:L769871:{c.instructions+=2;NFSU2_TR(0x769871);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B769874:{NFSU2_TR(0x769874);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L769890;}}
}
B769876:L769876:{c.instructions+=2;NFSU2_TR(0x769876);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B769879:{NFSU2_TR(0x769879);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76989e;}}
}
B76987b:L76987b:{c.instructions+=7;NFSU2_TR(0x76987b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76987e:{NFSU2_TR(0x76987e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76987f:{NFSU2_TR(0x76987f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769880:{NFSU2_TR(0x769880);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769881:{NFSU2_TR(0x769881);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B769884:{NFSU2_TR(0x769884);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769886:{NFSU2_TR(0x769886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76988bull));
TAIL_STATIC(0x767578u,767);
}
B76988b:L76988b:{c.instructions+=2;NFSU2_TR(0x76988b);
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
B76988e:{NFSU2_TR(0x76988e);
{goto L769902;}
}
B769890:L769890:{c.instructions+=3;NFSU2_TR(0x769890);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769891:{NFSU2_TR(0x769891);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769892:{NFSU2_TR(0x769892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769897ull));
TAIL_STATIC(0x7676a4u,767);
}
B769897:L769897:{c.instructions+=4;NFSU2_TR(0x769897);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76989a:{NFSU2_TR(0x76989a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76989b:{NFSU2_TR(0x76989b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76989c:{NFSU2_TR(0x76989c);
{goto L769902;}
}
B76989e:L76989e:{c.instructions+=10;NFSU2_TR(0x76989e);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7698a1:{NFSU2_TR(0x7698a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7698a2:{NFSU2_TR(0x7698a2);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B7698a8:{NFSU2_TR(0x7698a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B7698ab:{NFSU2_TR(0x7698ab);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7698af:{NFSU2_TR(0x7698af);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7698b2:{NFSU2_TR(0x7698b2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7698b5:{NFSU2_TR(0x7698b5);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7698b7:{NFSU2_TR(0x7698b7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7698b9:{NFSU2_TR(0x7698b9);
{goto L7698fa;}
}
B7698bb:L7698bb:{c.instructions+=1;NFSU2_TR(0x7698bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7698c0ull));
TAIL_STATIC(0x76cc73u,76c);
}
B7698c0:L7698c0:{c.instructions+=8;NFSU2_TR(0x7698c0);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7698c3:{NFSU2_TR(0x7698c3);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7698c6:{NFSU2_TR(0x7698c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7698c7:{NFSU2_TR(0x7698c7);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B7698ca:{NFSU2_TR(0x7698ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7698cb:{NFSU2_TR(0x7698cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7698cd:{NFSU2_TR(0x7698cd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7698d0:{NFSU2_TR(0x7698d0);
if(r1(R+514)){{goto L7698e0;}}
}
B7698d2:L7698d2:{c.instructions+=3;NFSU2_TR(0x7698d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7698d3:{NFSU2_TR(0x7698d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7698d4:{NFSU2_TR(0x7698d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7698d9ull));
TAIL_STATIC(0x7676a4u,767);
}
B7698d9:L7698d9:{c.instructions+=4;NFSU2_TR(0x7698d9);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7698dc:{NFSU2_TR(0x7698dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7698dd:{NFSU2_TR(0x7698dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7698de:{NFSU2_TR(0x7698de);
{goto L769902;}
}
B7698e0:L7698e0:{c.instructions+=2;NFSU2_TR(0x7698e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7698e3:{NFSU2_TR(0x7698e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7698d2u);}goto L7698d2;}}
}
B7698e5:L7698e5:{c.instructions+=8;NFSU2_TR(0x7698e5);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7698e8:{NFSU2_TR(0x7698e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7698e9:{NFSU2_TR(0x7698e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B7698ec:{NFSU2_TR(0x7698ec);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7698f0:{NFSU2_TR(0x7698f0);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7698f3:{NFSU2_TR(0x7698f3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7698f6:{NFSU2_TR(0x7698f6);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7698f8:{NFSU2_TR(0x7698f8);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7698fa:L7698fa:{c.instructions+=1;NFSU2_TR(0x7698fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7698ffull));
TAIL_STATIC(0x7675cbu,767);
}
B7698ff:L7698ff:{c.instructions+=1;NFSU2_TR(0x7698ff);
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
B769902:L769902:{c.instructions+=4;NFSU2_TR(0x769902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B769903:{NFSU2_TR(0x769903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B769904:{NFSU2_TR(0x769904);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B769905:{NFSU2_TR(0x769905);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B769a10:L769a10:{c.instructions+=8;NFSU2_TR(0x769a10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769a11:{NFSU2_TR(0x769a11);
__builtin_memmove((R+20),(R+16),4);
}
B769a13:{NFSU2_TR(0x769a13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xfffffd30ull))));
}
B769a19:{NFSU2_TR(0x769a19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769a1a:{NFSU2_TR(0x769a1a);
{u32 ea_=u32(r4(R+20)+u32(4294967132u));__asm__ volatile(".byte 0x9b,0xd9,0x38"::"a"(ea_):"memory");}
}
B769a21:{NFSU2_TR(0x769a21);
}
B769a22:{NFSU2_TR(0x769a22);
u8 U[8];
__builtin_memmove((U+0),gp(0x81ace0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B769a29:{NFSU2_TR(0x769a29);
if(r1(R+518)){{goto L769a3f;}}
}
B769a2b:L769a2b:{c.instructions+=1;NFSU2_TR(0x769a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769a30ull));
TAIL_STATIC(0x7654f7u,765);
}
B769a30:L769a30:{c.instructions+=2;NFSU2_TR(0x769a30);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x3ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B769a37:{NFSU2_TR(0x769a37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769a3cull));
{goto L769ada;}
}
B769a3c:L769a3c:{c.instructions+=3;NFSU2_TR(0x769a3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B769a3d:{NFSU2_TR(0x769a3d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B769a3e:{NFSU2_TR(0x769a3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B769a3f:L769a3f:{c.instructions+=5;NFSU2_TR(0x769a3f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B769a41:{NFSU2_TR(0x769a41);
{u32 ea_=u32(r4(R+20)+u32(4294967162u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B769a47:{NFSU2_TR(0x769a47);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B769a49:{NFSU2_TR(0x769a49);
{u32 ea_=u32(r4(R+20)+u32(4294967170u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B769a4c:{NFSU2_TR(0x769a4c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x769a2bu);}goto L769a2b;}
}
B769a4e:L769a4e:{c.instructions+=7;NFSU2_TR(0x769a4e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769a4f:{NFSU2_TR(0x769a4f);
__builtin_memmove((R+20),(R+16),4);
}
B769a51:{NFSU2_TR(0x769a51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xfffffd30ull))));
}
B769a57:{NFSU2_TR(0x769a57);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769a58:{NFSU2_TR(0x769a58);
{u32 ea_=u32(r4(R+20)+u32(4294967132u));__asm__ volatile(".byte 0x9b,0xd9,0x38"::"a"(ea_):"memory");}
}
B769a5f:{NFSU2_TR(0x769a5f);
u8 U[8];
__builtin_memmove((U+0),gp(0x81ace0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B769a66:{NFSU2_TR(0x769a66);
if(r1(R+518)){{goto L769a83;}}
}
B769a68:L769a68:{c.instructions+=1;NFSU2_TR(0x769a68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769a6dull));
TAIL_STATIC(0x765490u,765);
}
B769a6d:L769a6d:{c.instructions+=3;NFSU2_TR(0x769a6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B769a74:{NFSU2_TR(0x769a74);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xfdull))));
s1(u32(r4(U+0)),r1(U+4));
}
B769a7b:{NFSU2_TR(0x769a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769a80ull));
{goto L769ada;}
}
B769a80:L769a80:{c.instructions+=3;NFSU2_TR(0x769a80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B769a81:{NFSU2_TR(0x769a81);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B769a82:{NFSU2_TR(0x769a82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B769a83:L769a83:{c.instructions+=2;NFSU2_TR(0x769a83);
{u32 ea_=u32(r4(R+20)+u32(4294967162u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B769a89:{NFSU2_TR(0x769a89);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x769a68u);}goto L769a68;}
}
B769a8b:L769a8b:{c.instructions+=7;NFSU2_TR(0x769a8b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769a8c:{NFSU2_TR(0x769a8c);
__builtin_memmove((R+20),(R+16),4);
}
B769a8e:{NFSU2_TR(0x769a8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xfffffd30ull))));
}
B769a94:{NFSU2_TR(0x769a94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769a95:{NFSU2_TR(0x769a95);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B769a98:{NFSU2_TR(0x769a98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B769a9b:{NFSU2_TR(0x769a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769aa0ull));
{goto L769c54;}
}
B769aa0:L769aa0:{c.instructions+=4;NFSU2_TR(0x769aa0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B769aa3:{NFSU2_TR(0x769aa3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B769aa6:{NFSU2_TR(0x769aa6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B769aa9:{NFSU2_TR(0x769aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769aaeull));
{goto L769c54;}
}
B769aae:L769aae:{c.instructions+=5;NFSU2_TR(0x769aae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B769ab1:{NFSU2_TR(0x769ab1);
{u32 ea_=u32(r4(R+20)+u32(4294967132u));__asm__ volatile(".byte 0x9b,0xd9,0x38"::"a"(ea_):"memory");}
}
B769ab8:{NFSU2_TR(0x769ab8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B769abf:{NFSU2_TR(0x769abf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff71ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B769ac6:{NFSU2_TR(0x769ac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769acbull));
TAIL_STATIC(0x7654f7u,765);
}
B769acb:L769acb:{c.instructions+=1;NFSU2_TR(0x769acb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769ad0ull));
{goto L769ad3;}
}
B769ad0:L769ad0:{c.instructions+=3;NFSU2_TR(0x769ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B769ad1:{NFSU2_TR(0x769ad1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B769ad2:{NFSU2_TR(0x769ad2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B769ad3:L769ad3:{c.instructions+=1;NFSU2_TR(0x769ad3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xfeull))));
s1(u32(r4(U+0)),r1(U+4));
}
B769ada:L769ada:{c.instructions+=2;NFSU2_TR(0x769ada);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b8424),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B769ae1:{NFSU2_TR(0x769ae1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769b32;}}
}
B769ae3:L769ae3:{c.instructions+=4;NFSU2_TR(0x769ae3);
{u32 ea_=u32(r4(R+20)+u32(4294966576u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B769ae9:{NFSU2_TR(0x769ae9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B769aef:{NFSU2_TR(0x769aef);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+0))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B769af1:{NFSU2_TR(0x769af1);
if(r1(R+518)){{goto L769b0d;}}
}
B769af3:L769af3:{c.instructions+=2;NFSU2_TR(0x769af3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B769af5:{NFSU2_TR(0x769af5);
if(r1(R+518)){{goto L769b52;}}
}
B769af7:L769af7:{c.instructions+=2;NFSU2_TR(0x769af7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xfeull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B769af9:{NFSU2_TR(0x769af9);
if(r1(R+518)){{goto L769b3a;}}
}
B769afb:L769afb:{c.instructions+=2;NFSU2_TR(0x769afb);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B769afd:{NFSU2_TR(0x769afd);
if(r1(R+518)){{goto L769b32;}}
}
B769aff:L769aff:{c.instructions+=3;NFSU2_TR(0x769aff);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B769b02:{NFSU2_TR(0x769b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff72ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B769b08:{NFSU2_TR(0x769b08);
{goto L769bbf;}
}
B769b0d:L769b0d:{c.instructions+=3;NFSU2_TR(0x769b0d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B769b14:{NFSU2_TR(0x769b14);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x20ull))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B769b18:{NFSU2_TR(0x769b18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769b32;}}
}
B769b1a:L769b1a:{c.instructions+=3;NFSU2_TR(0x769b1a);
{u32 ax_;__asm__ volatile(".byte 0x9b,0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B769b1d:{NFSU2_TR(0x769b1d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x20ull))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B769b21:{NFSU2_TR(0x769b21);
if(r1(R+518)){{goto L769b32;}}
}
B769b23:L769b23:{c.instructions+=2;NFSU2_TR(0x769b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff72ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769b2d:{NFSU2_TR(0x769b2d);
{goto L769bbf;}
}
B769b32:L769b32:{c.instructions+=3;NFSU2_TR(0x769b32);
{u32 ea_=u32(r4(R+20)+u32(4294967132u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B769b38:{NFSU2_TR(0x769b38);
}
B769b39:{NFSU2_TR(0x769b39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B769b3a:L769b3a:{c.instructions+=4;NFSU2_TR(0x769b3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B769b41:{NFSU2_TR(0x769b41);
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x7ff0ull))));
}
B769b45:{NFSU2_TR(0x769b45);
w2(R+0,u16(u32(r2(R+0))|u32(r2(R+0))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
}
B769b48:{NFSU2_TR(0x769b48);
if(r1(R+518)){{goto L769b65;}}
}
B769b4a:L769b4a:{c.instructions+=2;NFSU2_TR(0x769b4a);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x7ff0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B769b4e:{NFSU2_TR(0x769b4e);
if(r1(R+518)){{goto L769b93;}}
}
B769b50:L769b50:{c.instructions+=1;NFSU2_TR(0x769b50);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x769b0du);}goto L769b0d;}
}
B769b52:L769b52:{c.instructions+=4;NFSU2_TR(0x769b52);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B769b59:{NFSU2_TR(0x769b59);
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x7ff0ull))));
}
B769b5d:{NFSU2_TR(0x769b5d);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x7ff0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B769b61:{NFSU2_TR(0x769b61);
if(r1(R+518)){{goto L769b93;}}
}
B769b63:L769b63:{c.instructions+=1;NFSU2_TR(0x769b63);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x769b0du);}goto L769b0d;}
}
B769b65:L769b65:{c.instructions+=11;NFSU2_TR(0x769b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff72ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769b6f:{NFSU2_TR(0x769b6f);
{u32 ea_=u32(u32(8229096u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B769b75:{NFSU2_TR(0x769b75);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B769b77:{NFSU2_TR(0x769b77);
__asm__ volatile(".byte 0xd9,0xfd":::"memory");
}
B769b79:{NFSU2_TR(0x769b79);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B769b7b:{NFSU2_TR(0x769b7b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B769b7d:{NFSU2_TR(0x769b7d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B769b7f:{NFSU2_TR(0x769b7f);
{u32 ea_=u32(u32(8229080u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B769b85:{NFSU2_TR(0x769b85);
{u32 ax_;__asm__ volatile(".byte 0x9b,0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B769b88:{NFSU2_TR(0x769b88);
u8 U[2];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+516,u8((r1(U+0))!=(u8(0x0ull))));
w1(U+1,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+512,u8((r1(U+1))!=(u8(0x0ull))));
}
B769b89:{NFSU2_TR(0x769b89);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L769bbf;}}
}
B769b8b:L769b8b:{c.instructions+=2;NFSU2_TR(0x769b8b);
{u32 ea_=u32(u32(8229112u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B769b91:{NFSU2_TR(0x769b91);
{goto L769bbf;}
}
B769b93:L769b93:{c.instructions+=11;NFSU2_TR(0x769b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff72ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B769b9d:{NFSU2_TR(0x769b9d);
{u32 ea_=u32(u32(8229088u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B769ba3:{NFSU2_TR(0x769ba3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B769ba5:{NFSU2_TR(0x769ba5);
__asm__ volatile(".byte 0xd9,0xfd":::"memory");
}
B769ba7:{NFSU2_TR(0x769ba7);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B769ba9:{NFSU2_TR(0x769ba9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B769bab:{NFSU2_TR(0x769bab);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B769bad:{NFSU2_TR(0x769bad);
{u32 ea_=u32(u32(8229072u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B769bb3:{NFSU2_TR(0x769bb3);
{u32 ax_;__asm__ volatile(".byte 0x9b,0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B769bb6:{NFSU2_TR(0x769bb6);
u8 U[3];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))!=(u8(0x0ull))));
w1(U+1,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+516,u8((r1(U+1))!=(u8(0x0ull))));
w1(U+2,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+512,u8((r1(U+2))!=(u8(0x0ull))));
}
B769bb7:{NFSU2_TR(0x769bb7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L769bbf;}}
}
B769bb9:L769bb9:{c.instructions+=1;NFSU2_TR(0x769bb9);
{u32 ea_=u32(u32(8229104u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B769bbf:L769bbf:{c.instructions+=7;NFSU2_TR(0x769bbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769bc0:{NFSU2_TR(0x769bc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769bc1:{NFSU2_TR(0x769bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B769bc7:{NFSU2_TR(0x769bc7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B769bc8:{NFSU2_TR(0x769bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff76ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B769bce:{NFSU2_TR(0x769bce);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B769bd5:{NFSU2_TR(0x769bd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769bf1;}}
}
B769bd7:L769bd7:{c.instructions+=7;NFSU2_TR(0x769bd7);
w1(R+522,u8(0x0ull));
}
B769bd8:{NFSU2_TR(0x769bd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B769bdb:{NFSU2_TR(0x769bdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7aull))));
__builtin_memmove((R+28),(U+0),4);
}
B769be1:{NFSU2_TR(0x769be1);
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
B769be2:{NFSU2_TR(0x769be2);
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
B769be3:{NFSU2_TR(0x769be3);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B769be7:{NFSU2_TR(0x769be7);
if(r1(R+518)){{goto L769bf1;}}
}
B769be9:L769be9:{c.instructions+=4;NFSU2_TR(0x769be9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B769bec:{NFSU2_TR(0x769bec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff82ull))));
__builtin_memmove((R+28),(U+0),4);
}
B769bef:{NFSU2_TR(0x769bef);
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
B769bf0:{NFSU2_TR(0x769bf0);
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
B769bf1:L769bf1:{c.instructions+=10;NFSU2_TR(0x769bf1);
{u32 ea_=u32(r4(R+20)+u32(4294967178u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B769bf4:{NFSU2_TR(0x769bf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff72ull))));
__builtin_memmove((R+0),(U+0),4);
}
B769bfa:{NFSU2_TR(0x769bfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((R+12),(U+0),4);
}
B769c00:{NFSU2_TR(0x769c00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769c01:{NFSU2_TR(0x769c01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769c02:{NFSU2_TR(0x769c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B769c08:{NFSU2_TR(0x769c08);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B769c0b:{NFSU2_TR(0x769c0b);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B769c0e:{NFSU2_TR(0x769c0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769c0f:{NFSU2_TR(0x769c0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769c14ull));
TAIL_STATIC(0x76cb75u,76c);
}
B769c14:L769c14:{c.instructions+=5;NFSU2_TR(0x769c14);
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
B769c17:{NFSU2_TR(0x769c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B769c18:{NFSU2_TR(0x769c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B769c19:{NFSU2_TR(0x769c19);
{u32 ea_=u32(r4(R+20)+u32(4294967178u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B769c1c:{NFSU2_TR(0x769c1c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x769b32u);}goto L769b32;}
}
B769c21:L769c21:{c.instructions+=7;NFSU2_TR(0x769c21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769c22:{NFSU2_TR(0x769c22);
__builtin_memmove((R+20),(R+16),4);
}
B769c24:{NFSU2_TR(0x769c24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xfffffd30ull))));
}
B769c2a:{NFSU2_TR(0x769c2a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769c2b:{NFSU2_TR(0x769c2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B769c2e:{NFSU2_TR(0x769c2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B769c31:{NFSU2_TR(0x769c31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769c36ull));
{goto L769c54;}
}
B769c36:L769c36:{c.instructions+=4;NFSU2_TR(0x769c36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B769c39:{NFSU2_TR(0x769c39);
{u32 ea_=u32(r4(R+20)+u32(4294967132u));__asm__ volatile(".byte 0x9b,0xd9,0x38"::"a"(ea_):"memory");}
}
B769c40:{NFSU2_TR(0x769c40);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xfdull))));
s1(u32(r4(U+0)),r1(U+4));
}
B769c47:{NFSU2_TR(0x769c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769c4cull));
TAIL_STATIC(0x765490u,765);
}
B769c4c:L769c4c:{c.instructions+=1;NFSU2_TR(0x769c4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769c51ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x769ad3u);}goto L769ad3;}
}
B769c51:L769c51:{c.instructions+=3;NFSU2_TR(0x769c51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B769c52:{NFSU2_TR(0x769c52);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B769c53:{NFSU2_TR(0x769c53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B769c54:L769c54:{c.instructions+=9;NFSU2_TR(0x769c54);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769c55:{NFSU2_TR(0x769c55);
__builtin_memmove((R+20),(R+16),4);
}
B769c57:{NFSU2_TR(0x769c57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xfffffff4ull))));
}
B769c5a:{NFSU2_TR(0x769c5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B769c5b:{NFSU2_TR(0x769c5b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B769c5f:{NFSU2_TR(0x769c5f);
__builtin_memmove((R+12),(R+0),2);
}
B769c62:{NFSU2_TR(0x769c62);
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x7ff0ull))));
}
B769c66:{NFSU2_TR(0x769c66);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x7ff0ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x7ff0ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x7ff0ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B769c6a:{NFSU2_TR(0x769c6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L769c8a;}}
}
B769c6c:L769c6c:{c.instructions+=9;NFSU2_TR(0x769c6c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+12,u16(u32(r2(R+12))|u32(u16(0x7fffull))));
w1(R+519,u8(s16(r2(R+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+12))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+12))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B769c71:{NFSU2_TR(0x769c71);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B769c75:{NFSU2_TR(0x769c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B769c78:{NFSU2_TR(0x769c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B769c7b:{NFSU2_TR(0x769c7b);
u8 U[57];
w4(U+37,u32(u32(u32(0xbull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(U+45,shl<u32>(r4(R+0),u64(r4(U+37))));
w4(U+49,u32(u32(u32(0x20ull))-u32(r4(U+37))));
w4(U+53,shr<u32>(r4(R+12),u64(r4(U+49))));
w4(R+0,u32(u32(r4(U+45))|u32(r4(U+53))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B769c7f:{NFSU2_TR(0x769c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B769c82:{NFSU2_TR(0x769c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B769c85:{NFSU2_TR(0x769c85);
{u32 ea_=u32(r4(R+20)+u32(4294967286u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B769c88:{NFSU2_TR(0x769c88);
{goto L769c8d;}
}
B769c8a:L769c8a:{c.instructions+=1;NFSU2_TR(0x769c8a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B769c8d:L769c8d:{c.instructions+=3;NFSU2_TR(0x769c8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B769c8e:{NFSU2_TR(0x769c8e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B769c8f:{NFSU2_TR(0x769c8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x769,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
