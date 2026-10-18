#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_644(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_64f(u8* __restrict R,Cpu& c);
u32 body_651(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_684(u8* __restrict R,Cpu& c);
u32 body_687(u8* __restrict R,Cpu& c);
u32 body_688(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x650,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x650,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_650(u8* __restrict R,Cpu& c);
u32 page_650(Cpu& c){return body_650(c.regs.data(),c);}
__attribute__((noinline)) u32 body_650(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x650001:goto L650001;
case 0x650003:c.instructions+=2;goto B650003;
case 0x650006:c.instructions+=1;goto B650006;
case 0x650008:goto L650008;
case 0x650009:c.instructions+=1;goto B650009;
case 0x65000b:goto L65000b;
case 0x65000c:c.instructions+=1;goto B65000c;
case 0x65000e:goto L65000e;
case 0x65000f:c.instructions+=1;goto B65000f;
case 0x650011:goto L650011;
case 0x650018:c.instructions+=1;goto B650018;
case 0x65001a:goto L65001a;
case 0x65001d:goto L65001d;
case 0x650020:c.instructions+=10;goto B650020;
case 0x650023:c.instructions+=9;goto B650023;
case 0x650025:c.instructions+=8;goto B650025;
case 0x650026:c.instructions+=7;goto B650026;
case 0x650029:c.instructions+=6;goto B650029;
case 0x65002c:c.instructions+=5;goto B65002c;
case 0x65002f:c.instructions+=4;goto B65002f;
case 0x650035:c.instructions+=3;goto B650035;
case 0x650038:c.instructions+=2;goto B650038;
case 0x65003a:c.instructions+=1;goto B65003a;
case 0x65003c:goto L65003c;
case 0x65003e:c.instructions+=8;goto B65003e;
case 0x65003f:c.instructions+=7;goto B65003f;
case 0x650041:c.instructions+=6;goto B650041;
case 0x650044:c.instructions+=5;goto B650044;
case 0x650046:c.instructions+=4;goto B650046;
case 0x650047:c.instructions+=3;goto B650047;
case 0x650048:c.instructions+=2;goto B650048;
case 0x650049:c.instructions+=1;goto B650049;
case 0x65004f:goto L65004f;
case 0x650053:c.instructions+=1;goto B650053;
case 0x650059:goto L650059;
case 0x65005c:c.instructions+=2;goto B65005c;
case 0x65005e:c.instructions+=1;goto B65005e;
case 0x650064:goto L650064;
case 0x650068:c.instructions+=1;goto B650068;
case 0x65006e:goto L65006e;
case 0x650071:c.instructions+=3;goto B650071;
case 0x650074:c.instructions+=2;goto B650074;
case 0x650076:c.instructions+=1;goto B650076;
case 0x650078:goto L650078;
case 0x65007b:c.instructions+=2;goto B65007b;
case 0x65007d:c.instructions+=1;goto B65007d;
case 0x650082:goto L650082;
case 0x650089:c.instructions+=3;goto B650089;
case 0x650090:c.instructions+=2;goto B650090;
case 0x650092:c.instructions+=1;goto B650092;
case 0x650094:goto L650094;
case 0x650096:goto L650096;
case 0x65009d:c.instructions+=5;goto B65009d;
case 0x6500a4:c.instructions+=4;goto B6500a4;
case 0x6500a6:c.instructions+=3;goto B6500a6;
case 0x6500a7:c.instructions+=2;goto B6500a7;
case 0x6500a9:c.instructions+=1;goto B6500a9;
case 0x6500ab:goto L6500ab;
case 0x6500ae:c.instructions+=2;goto B6500ae;
case 0x6500b1:c.instructions+=1;goto B6500b1;
case 0x6500b6:goto L6500b6;
case 0x6500b8:c.instructions+=3;goto B6500b8;
case 0x6500b9:c.instructions+=2;goto B6500b9;
case 0x6500bb:c.instructions+=1;goto B6500bb;
case 0x6500bd:goto L6500bd;
case 0x6500bf:c.instructions+=1;goto B6500bf;
case 0x6500c1:goto L6500c1;
case 0x6500c3:c.instructions+=3;goto B6500c3;
case 0x6500c4:c.instructions+=2;goto B6500c4;
case 0x6500c6:c.instructions+=1;goto B6500c6;
case 0x6500c8:goto L6500c8;
case 0x6500cb:c.instructions+=1;goto B6500cb;
case 0x6500cd:goto L6500cd;
case 0x6500d0:c.instructions+=1;goto B6500d0;
case 0x6500d2:goto L6500d2;
case 0x6500d5:c.instructions+=1;goto B6500d5;
case 0x6500db:goto L6500db;
case 0x6500de:c.instructions+=2;goto B6500de;
case 0x6500e0:c.instructions+=1;goto B6500e0;
case 0x6500e5:goto L6500e5;
case 0x6500e8:c.instructions+=2;goto B6500e8;
case 0x6500ee:c.instructions+=1;goto B6500ee;
case 0x6500f3:goto L6500f3;
case 0x6500f6:c.instructions+=2;goto B6500f6;
case 0x6500fc:c.instructions+=1;goto B6500fc;
case 0x650101:goto L650101;
case 0x650104:c.instructions+=2;goto B650104;
case 0x65010a:c.instructions+=1;goto B65010a;
case 0x65010f:goto L65010f;
case 0x650111:c.instructions+=1;goto B650111;
case 0x650113:goto L650113;
case 0x650115:c.instructions+=1;goto B650115;
case 0x650117:goto L650117;
case 0x65011a:c.instructions+=1;goto B65011a;
case 0x65011c:goto L65011c;
case 0x65011f:c.instructions+=1;goto B65011f;
case 0x650121:goto L650121;
case 0x650124:c.instructions+=1;goto B650124;
case 0x650126:goto L650126;
case 0x650129:c.instructions+=1;goto B650129;
case 0x65012f:goto L65012f;
case 0x650132:c.instructions+=2;goto B650132;
case 0x650134:c.instructions+=1;goto B650134;
case 0x650139:goto L650139;
case 0x65013c:c.instructions+=2;goto B65013c;
case 0x650142:c.instructions+=1;goto B650142;
case 0x650147:goto L650147;
case 0x65014a:c.instructions+=2;goto B65014a;
case 0x650150:c.instructions+=1;goto B650150;
case 0x650155:goto L650155;
case 0x650157:c.instructions+=3;goto B650157;
case 0x650158:c.instructions+=2;goto B650158;
case 0x65015a:c.instructions+=1;goto B65015a;
case 0x65015c:goto L65015c;
case 0x65015e:c.instructions+=1;goto B65015e;
case 0x650160:goto L650160;
case 0x650162:c.instructions+=1;goto B650162;
case 0x650164:goto L650164;
case 0x650167:c.instructions+=1;goto B650167;
case 0x650169:goto L650169;
case 0x65016c:c.instructions+=1;goto B65016c;
case 0x65016e:goto L65016e;
case 0x650171:c.instructions+=1;goto B650171;
case 0x650173:goto L650173;
case 0x650176:c.instructions+=2;goto B650176;
case 0x65017c:c.instructions+=1;goto B65017c;
case 0x65017e:goto L65017e;
case 0x650181:c.instructions+=2;goto B650181;
case 0x650187:c.instructions+=1;goto B650187;
case 0x650189:goto L650189;
case 0x65018c:c.instructions+=2;goto B65018c;
case 0x650192:c.instructions+=1;goto B650192;
case 0x650194:goto L650194;
case 0x650197:c.instructions+=2;goto B650197;
case 0x65019d:c.instructions+=1;goto B65019d;
case 0x65019f:goto L65019f;
case 0x6501a1:c.instructions+=1;goto B6501a1;
case 0x6501a3:goto L6501a3;
case 0x6501a5:goto L6501a5;
case 0x6501a7:c.instructions+=2;goto B6501a7;
case 0x6501a9:c.instructions+=1;goto B6501a9;
case 0x6501ab:goto L6501ab;
case 0x6501ad:c.instructions+=1;goto B6501ad;
case 0x6501af:goto L6501af;
case 0x6501b2:c.instructions+=1;goto B6501b2;
case 0x6501b4:goto L6501b4;
case 0x6501b7:c.instructions+=1;goto B6501b7;
case 0x6501b9:goto L6501b9;
case 0x6501bb:c.instructions+=1;goto B6501bb;
case 0x6501bd:goto L6501bd;
case 0x6501c0:c.instructions+=1;goto B6501c0;
case 0x6501c2:goto L6501c2;
case 0x6501c4:c.instructions+=1;goto B6501c4;
case 0x6501c6:goto L6501c6;
case 0x6501c9:c.instructions+=1;goto B6501c9;
case 0x6501cb:goto L6501cb;
case 0x6501cd:c.instructions+=1;goto B6501cd;
case 0x6501cf:goto L6501cf;
case 0x6501d2:goto L6501d2;
case 0x6501d4:goto L6501d4;
case 0x6501d5:c.instructions+=2;goto B6501d5;
case 0x6501d8:c.instructions+=1;goto B6501d8;
case 0x6501da:goto L6501da;
case 0x6501df:goto L6501df;
case 0x6501e0:c.instructions+=4;goto B6501e0;
case 0x6501e1:c.instructions+=3;goto B6501e1;
case 0x6501e2:c.instructions+=2;goto B6501e2;
case 0x6501e3:c.instructions+=1;goto B6501e3;
case 0x6501e6:goto L6501e6;
case 0x6501e9:c.instructions+=1;goto B6501e9;
case 0x6501eb:goto L6501eb;
case 0x6501ed:c.instructions+=1;goto B6501ed;
case 0x6501ef:goto L6501ef;
case 0x6501f1:c.instructions+=4;goto B6501f1;
case 0x6501f2:c.instructions+=3;goto B6501f2;
case 0x6501f4:c.instructions+=2;goto B6501f4;
case 0x6501f7:c.instructions+=1;goto B6501f7;
case 0x6501f9:goto L6501f9;
case 0x6501fc:c.instructions+=2;goto B6501fc;
case 0x6501ff:c.instructions+=1;goto B6501ff;
case 0x650201:goto L650201;
case 0x650204:c.instructions+=1;goto B650204;
case 0x650206:goto L650206;
case 0x650209:c.instructions+=1;goto B650209;
case 0x65020b:goto L65020b;
case 0x65020e:goto L65020e;
case 0x650210:c.instructions+=1;goto B650210;
case 0x650212:goto L650212;
case 0x650215:goto L650215;
case 0x650216:c.instructions+=1;goto B650216;
case 0x650219:goto L650219;
case 0x65021e:c.instructions+=5;goto B65021e;
case 0x650223:c.instructions+=4;goto B650223;
case 0x650226:c.instructions+=3;goto B650226;
case 0x650227:c.instructions+=2;goto B650227;
case 0x650228:c.instructions+=1;goto B650228;
case 0x65022d:goto L65022d;
case 0x650230:c.instructions+=2;goto B650230;
case 0x650232:c.instructions+=1;goto B650232;
case 0x650234:goto L650234;
case 0x650236:c.instructions+=12;goto B650236;
case 0x650237:c.instructions+=11;goto B650237;
case 0x650239:c.instructions+=10;goto B650239;
case 0x65023a:c.instructions+=9;goto B65023a;
case 0x65023b:c.instructions+=8;goto B65023b;
case 0x65023c:c.instructions+=7;goto B65023c;
case 0x65023f:c.instructions+=6;goto B65023f;
case 0x650240:c.instructions+=5;goto B650240;
case 0x650242:c.instructions+=4;goto B650242;
case 0x650244:c.instructions+=3;goto B650244;
case 0x650246:c.instructions+=2;goto B650246;
case 0x650249:c.instructions+=1;goto B650249;
case 0x65024b:goto L65024b;
case 0x65024d:c.instructions+=1;goto B65024d;
case 0x650252:goto L650252;
case 0x650255:c.instructions+=2;goto B650255;
case 0x650256:c.instructions+=1;goto B650256;
case 0x65025c:goto L65025c;
case 0x65025e:c.instructions+=3;goto B65025e;
case 0x65025f:c.instructions+=2;goto B65025f;
case 0x650261:c.instructions+=1;goto B650261;
case 0x650267:goto L650267;
case 0x650268:c.instructions+=2;goto B650268;
case 0x650269:c.instructions+=1;goto B650269;
case 0x65026b:goto L65026b;
case 0x65026c:c.instructions+=1;goto B65026c;
case 0x65026e:goto L65026e;
case 0x65026f:c.instructions+=2;goto B65026f;
case 0x650270:c.instructions+=1;goto B650270;
case 0x650276:goto L650276;
case 0x650279:c.instructions+=1;goto B650279;
case 0x65027c:goto L65027c;
case 0x65027e:c.instructions+=1;goto B65027e;
case 0x650283:goto L650283;
case 0x650285:c.instructions+=1;goto B650285;
case 0x65028a:goto L65028a;
case 0x65028d:c.instructions+=6;goto B65028d;
case 0x650291:c.instructions+=5;goto B650291;
case 0x650294:c.instructions+=4;goto B650294;
case 0x650297:c.instructions+=3;goto B650297;
case 0x650299:c.instructions+=2;goto B650299;
case 0x65029a:c.instructions+=1;goto B65029a;
case 0x65029c:goto L65029c;
case 0x6502a3:c.instructions+=1;goto B6502a3;
case 0x6502aa:goto L6502aa;
case 0x6502ac:c.instructions+=1;goto B6502ac;
case 0x6502ae:goto L6502ae;
case 0x6502b0:c.instructions+=2;goto B6502b0;
case 0x6502b1:c.instructions+=1;goto B6502b1;
case 0x6502b3:goto L6502b3;
case 0x6502b5:c.instructions+=1;goto B6502b5;
case 0x6502b7:goto L6502b7;
case 0x6502b9:goto L6502b9;
case 0x6502ba:c.instructions+=1;goto B6502ba;
case 0x6502bc:goto L6502bc;
case 0x6502be:goto L6502be;
case 0x6502c0:c.instructions+=1;goto B6502c0;
case 0x6502c2:goto L6502c2;
case 0x6502c5:c.instructions+=1;goto B6502c5;
case 0x6502c7:goto L6502c7;
case 0x6502c9:c.instructions+=3;goto B6502c9;
case 0x6502cc:c.instructions+=2;goto B6502cc;
case 0x6502cd:c.instructions+=1;goto B6502cd;
case 0x6502cf:goto L6502cf;
case 0x6502d1:goto L6502d1;
case 0x6502d3:c.instructions+=2;goto B6502d3;
case 0x6502d6:c.instructions+=1;goto B6502d6;
case 0x6502d8:goto L6502d8;
case 0x6502db:c.instructions+=6;goto B6502db;
case 0x6502dd:c.instructions+=5;goto B6502dd;
case 0x6502e0:c.instructions+=4;goto B6502e0;
case 0x6502e3:c.instructions+=3;goto B6502e3;
case 0x6502e4:c.instructions+=2;goto B6502e4;
case 0x6502e7:c.instructions+=1;goto B6502e7;
case 0x6502ec:goto L6502ec;
case 0x6502ee:c.instructions+=3;goto B6502ee;
case 0x6502ef:c.instructions+=2;goto B6502ef;
case 0x6502f2:c.instructions+=1;goto B6502f2;
case 0x6502f4:goto L6502f4;
case 0x6502f6:goto L6502f6;
case 0x6502f9:c.instructions+=2;goto B6502f9;
case 0x6502fc:c.instructions+=1;goto B6502fc;
case 0x650301:goto L650301;
case 0x650305:c.instructions+=1;goto B650305;
case 0x650307:goto L650307;
case 0x650309:c.instructions+=6;goto B650309;
case 0x65030c:c.instructions+=5;goto B65030c;
case 0x65030f:c.instructions+=4;goto B65030f;
case 0x650311:c.instructions+=3;goto B650311;
case 0x650312:c.instructions+=2;goto B650312;
case 0x650315:c.instructions+=1;goto B650315;
case 0x65031a:goto L65031a;
case 0x65031d:c.instructions+=3;goto B65031d;
case 0x65031f:c.instructions+=2;goto B65031f;
case 0x650321:c.instructions+=1;goto B650321;
case 0x650323:goto L650323;
case 0x650325:c.instructions+=1;goto B650325;
case 0x650327:goto L650327;
case 0x650329:c.instructions+=6;goto B650329;
case 0x65032c:c.instructions+=5;goto B65032c;
case 0x65032f:c.instructions+=4;goto B65032f;
case 0x650331:c.instructions+=3;goto B650331;
case 0x650332:c.instructions+=2;goto B650332;
case 0x650333:c.instructions+=1;goto B650333;
case 0x650338:goto L650338;
case 0x65033a:goto L65033a;
case 0x65033c:goto L65033c;
case 0x65033d:c.instructions+=4;goto B65033d;
case 0x65033e:c.instructions+=3;goto B65033e;
case 0x65033f:c.instructions+=2;goto B65033f;
case 0x650340:c.instructions+=1;goto B650340;
case 0x650379:goto L650379;
case 0x65037b:c.instructions+=6;goto B65037b;
case 0x65037c:c.instructions+=5;goto B65037c;
case 0x65037e:c.instructions+=4;goto B65037e;
case 0x650381:c.instructions+=3;goto B650381;
case 0x650383:c.instructions+=2;goto B650383;
case 0x650386:c.instructions+=1;goto B650386;
case 0x650388:goto L650388;
case 0x650389:c.instructions+=1;goto B650389;
case 0x65038b:goto L65038b;
case 0x65038c:c.instructions+=1;goto B65038c;
case 0x65038e:goto L65038e;
case 0x65038f:c.instructions+=1;goto B65038f;
case 0x650391:goto L650391;
case 0x650396:c.instructions+=1;goto B650396;
case 0x650398:goto L650398;
case 0x65039b:c.instructions+=1;goto B65039b;
case 0x65039d:goto L65039d;
case 0x6503a0:c.instructions+=4;goto B6503a0;
case 0x6503a2:c.instructions+=3;goto B6503a2;
case 0x6503a5:c.instructions+=2;goto B6503a5;
case 0x6503a8:c.instructions+=1;goto B6503a8;
case 0x6503aa:goto L6503aa;
case 0x6503b0:c.instructions+=1;goto B6503b0;
case 0x6503b2:goto L6503b2;
case 0x6503b5:goto L6503b5;
case 0x6503b8:c.instructions+=2;goto B6503b8;
case 0x6503ba:c.instructions+=1;goto B6503ba;
case 0x6503bc:goto L6503bc;
case 0x6503c0:c.instructions+=1;goto B6503c0;
case 0x6503c2:goto L6503c2;
case 0x6503c4:c.instructions+=1;goto B6503c4;
case 0x6503c6:goto L6503c6;
case 0x6503c8:goto L6503c8;
case 0x6503cb:c.instructions+=3;goto B6503cb;
case 0x6503cd:c.instructions+=2;goto B6503cd;
case 0x6503cf:c.instructions+=1;goto B6503cf;
case 0x6503d1:goto L6503d1;
case 0x6503d3:goto L6503d3;
case 0x6503d4:c.instructions+=1;goto B6503d4;
case 0x6503d7:goto L6503d7;
case 0x6503d9:c.instructions+=6;goto B6503d9;
case 0x6503da:c.instructions+=5;goto B6503da;
case 0x6503dc:c.instructions+=4;goto B6503dc;
case 0x6503dd:c.instructions+=3;goto B6503dd;
case 0x6503de:c.instructions+=2;goto B6503de;
case 0x6503e1:c.instructions+=1;goto B6503e1;
case 0x6503e3:goto L6503e3;
case 0x6503e5:c.instructions+=1;goto B6503e5;
case 0x6503e7:goto L6503e7;
case 0x6503ea:c.instructions+=2;goto B6503ea;
case 0x6503ed:c.instructions+=1;goto B6503ed;
case 0x6503ef:goto L6503ef;
case 0x6503f2:c.instructions+=2;goto B6503f2;
case 0x6503f4:c.instructions+=1;goto B6503f4;
case 0x6503f9:goto L6503f9;
case 0x6503fb:c.instructions+=1;goto B6503fb;
case 0x6503fd:goto L6503fd;
case 0x650400:c.instructions+=1;goto B650400;
case 0x650402:goto L650402;
case 0x650405:c.instructions+=1;goto B650405;
case 0x650407:goto L650407;
case 0x65040a:c.instructions+=1;goto B65040a;
case 0x65040c:goto L65040c;
case 0x65040f:c.instructions+=2;goto B65040f;
case 0x650412:c.instructions+=1;goto B650412;
case 0x650414:goto L650414;
case 0x650417:c.instructions+=1;goto B650417;
case 0x650419:goto L650419;
case 0x65041b:c.instructions+=1;goto B65041b;
case 0x65041d:goto L65041d;
case 0x650420:c.instructions+=1;goto B650420;
case 0x650422:goto L650422;
case 0x650425:c.instructions+=1;goto B650425;
case 0x650427:goto L650427;
case 0x650429:c.instructions+=3;goto B650429;
case 0x65042d:c.instructions+=2;goto B65042d;
case 0x650430:c.instructions+=1;goto B650430;
case 0x650432:goto L650432;
case 0x650435:c.instructions+=1;goto B650435;
case 0x650437:goto L650437;
case 0x65043a:c.instructions+=1;goto B65043a;
case 0x65043c:goto L65043c;
case 0x65043f:c.instructions+=1;goto B65043f;
case 0x650441:goto L650441;
case 0x650444:goto L650444;
case 0x650446:goto L650446;
case 0x650448:c.instructions+=2;goto B650448;
case 0x650449:c.instructions+=1;goto B650449;
case 0x65044b:goto L65044b;
case 0x65044d:goto L65044d;
case 0x65044e:c.instructions+=3;goto B65044e;
case 0x65044f:c.instructions+=2;goto B65044f;
case 0x650450:c.instructions+=1;goto B650450;
case 0x650453:goto L650453;
case 0x650455:c.instructions+=6;goto B650455;
case 0x650456:c.instructions+=5;goto B650456;
case 0x650458:c.instructions+=4;goto B650458;
case 0x650459:c.instructions+=3;goto B650459;
case 0x65045c:c.instructions+=2;goto B65045c;
case 0x65045d:c.instructions+=1;goto B65045d;
case 0x65045f:goto L65045f;
case 0x650461:c.instructions+=1;goto B650461;
case 0x650467:goto L650467;
case 0x65046a:c.instructions+=2;goto B65046a;
case 0x65046d:c.instructions+=1;goto B65046d;
case 0x65046f:goto L65046f;
case 0x650472:c.instructions+=2;goto B650472;
case 0x650474:c.instructions+=1;goto B650474;
case 0x650479:goto L650479;
case 0x65047b:c.instructions+=1;goto B65047b;
case 0x650481:goto L650481;
case 0x650484:c.instructions+=1;goto B650484;
case 0x650486:goto L650486;
case 0x650489:c.instructions+=1;goto B650489;
case 0x65048b:goto L65048b;
case 0x65048e:c.instructions+=1;goto B65048e;
case 0x650494:goto L650494;
case 0x650497:c.instructions+=2;goto B650497;
case 0x65049a:c.instructions+=1;goto B65049a;
case 0x6504a0:goto L6504a0;
case 0x6504a3:c.instructions+=1;goto B6504a3;
case 0x6504a9:goto L6504a9;
case 0x6504ac:c.instructions+=1;goto B6504ac;
case 0x6504b2:goto L6504b2;
case 0x6504b5:c.instructions+=1;goto B6504b5;
case 0x6504b7:goto L6504b7;
case 0x6504ba:c.instructions+=1;goto B6504ba;
case 0x6504c0:goto L6504c0;
case 0x6504c3:c.instructions+=2;goto B6504c3;
case 0x6504c5:c.instructions+=1;goto B6504c5;
case 0x6504cb:goto L6504cb;
case 0x6504cf:c.instructions+=1;goto B6504cf;
case 0x6504d5:goto L6504d5;
case 0x6504d8:c.instructions+=1;goto B6504d8;
case 0x6504da:goto L6504da;
case 0x6504dc:c.instructions+=3;goto B6504dc;
case 0x6504e0:c.instructions+=2;goto B6504e0;
case 0x6504e3:c.instructions+=1;goto B6504e3;
case 0x6504e8:goto L6504e8;
case 0x6504eb:c.instructions+=4;goto B6504eb;
case 0x6504ee:c.instructions+=3;goto B6504ee;
case 0x6504f1:c.instructions+=2;goto B6504f1;
case 0x6504f4:c.instructions+=1;goto B6504f4;
case 0x6504f6:goto L6504f6;
case 0x6504f9:c.instructions+=1;goto B6504f9;
case 0x6504fb:goto L6504fb;
case 0x6504fe:c.instructions+=1;goto B6504fe;
case 0x650500:goto L650500;
case 0x650503:c.instructions+=1;goto B650503;
case 0x650505:goto L650505;
case 0x650508:c.instructions+=1;goto B650508;
case 0x65050a:goto L65050a;
case 0x65050d:c.instructions+=1;goto B65050d;
case 0x65050f:goto L65050f;
case 0x650511:goto L650511;
case 0x650514:c.instructions+=1;goto B650514;
case 0x650516:goto L650516;
case 0x650519:c.instructions+=1;goto B650519;
case 0x65051b:goto L65051b;
case 0x65051e:c.instructions+=1;goto B65051e;
case 0x650520:goto L650520;
case 0x650523:c.instructions+=1;goto B650523;
case 0x650525:goto L650525;
case 0x650528:c.instructions+=1;goto B650528;
case 0x65052a:goto L65052a;
case 0x65052d:c.instructions+=1;goto B65052d;
case 0x65052f:goto L65052f;
case 0x650532:c.instructions+=3;goto B650532;
case 0x650535:c.instructions+=2;goto B650535;
case 0x650537:c.instructions+=1;goto B650537;
case 0x65053c:goto L65053c;
case 0x65053e:c.instructions+=1;goto B65053e;
case 0x650540:goto L650540;
case 0x650543:c.instructions+=2;goto B650543;
case 0x650546:c.instructions+=1;goto B650546;
case 0x650548:goto L650548;
case 0x65054b:c.instructions+=2;goto B65054b;
case 0x65054d:c.instructions+=1;goto B65054d;
case 0x650552:goto L650552;
case 0x650554:c.instructions+=1;goto B650554;
case 0x650556:goto L650556;
case 0x650559:goto L650559;
case 0x65055b:c.instructions+=1;goto B65055b;
case 0x650560:goto L650560;
case 0x650562:c.instructions+=1;goto B650562;
case 0x650564:goto L650564;
case 0x650566:c.instructions+=1;goto B650566;
case 0x650568:goto L650568;
case 0x65056a:c.instructions+=1;goto B65056a;
case 0x65056b:goto L65056b;
case 0x65056c:c.instructions+=3;goto B65056c;
case 0x65056d:c.instructions+=2;goto B65056d;
case 0x65056e:c.instructions+=1;goto B65056e;
case 0x650571:goto L650571;
case 0x650573:c.instructions+=6;goto B650573;
case 0x650574:c.instructions+=5;goto B650574;
case 0x650576:c.instructions+=4;goto B650576;
case 0x650577:c.instructions+=3;goto B650577;
case 0x65057a:c.instructions+=2;goto B65057a;
case 0x65057c:c.instructions+=1;goto B65057c;
case 0x65057e:goto L65057e;
case 0x650582:c.instructions+=1;goto B650582;
case 0x650584:goto L650584;
case 0x650587:c.instructions+=2;goto B650587;
case 0x650589:c.instructions+=1;goto B650589;
case 0x65058b:goto L65058b;
case 0x65058e:c.instructions+=2;goto B65058e;
case 0x650591:c.instructions+=1;goto B650591;
case 0x650593:goto L650593;
case 0x650597:c.instructions+=1;goto B650597;
case 0x650599:goto L650599;
case 0x65059c:c.instructions+=3;goto B65059c;
case 0x65059f:c.instructions+=2;goto B65059f;
case 0x6505a2:c.instructions+=1;goto B6505a2;
case 0x6505a4:goto L6505a4;
case 0x6505a5:c.instructions+=2;goto B6505a5;
case 0x6505ac:c.instructions+=1;goto B6505ac;
case 0x6505b1:goto L6505b1;
case 0x6505b4:goto L6505b4;
case 0x6505b5:c.instructions+=2;goto B6505b5;
case 0x6505b6:c.instructions+=1;goto B6505b6;
case 0x6505b9:goto L6505b9;
case 0x6505bb:c.instructions+=5;goto B6505bb;
case 0x6505bc:c.instructions+=4;goto B6505bc;
case 0x6505be:c.instructions+=3;goto B6505be;
case 0x6505bf:c.instructions+=2;goto B6505bf;
case 0x6505c1:c.instructions+=1;goto B6505c1;
case 0x6505c6:goto L6505c6;
case 0x6505c8:c.instructions+=1;goto B6505c8;
case 0x6505ca:goto L6505ca;
case 0x6505cc:c.instructions+=1;goto B6505cc;
case 0x6505d1:goto L6505d1;
case 0x6505d3:c.instructions+=1;goto B6505d3;
case 0x6505d5:goto L6505d5;
case 0x6505d7:goto L6505d7;
case 0x6505d9:c.instructions+=1;goto B6505d9;
case 0x6505db:goto L6505db;
case 0x6505de:c.instructions+=3;goto B6505de;
case 0x6505e2:c.instructions+=2;goto B6505e2;
case 0x6505e4:c.instructions+=1;goto B6505e4;
case 0x6505e6:goto L6505e6;
case 0x6505e8:c.instructions+=1;goto B6505e8;
case 0x6505eb:goto L6505eb;
case 0x6505ed:c.instructions+=2;goto B6505ed;
case 0x6505f0:c.instructions+=1;goto B6505f0;
case 0x6505f2:goto L6505f2;
case 0x6505f4:c.instructions+=1;goto B6505f4;
case 0x6505f9:goto L6505f9;
case 0x6505fb:c.instructions+=1;goto B6505fb;
case 0x6505fd:goto L6505fd;
case 0x650602:c.instructions+=4;goto B650602;
case 0x650604:c.instructions+=3;goto B650604;
case 0x650605:c.instructions+=2;goto B650605;
case 0x650607:c.instructions+=1;goto B650607;
case 0x65060c:goto L65060c;
case 0x65060e:goto L65060e;
case 0x650610:goto L650610;
case 0x650612:c.instructions+=1;goto B650612;
case 0x650614:goto L650614;
case 0x650616:goto L650616;
case 0x650617:c.instructions+=2;goto B650617;
case 0x650618:c.instructions+=1;goto B650618;
case 0x65061b:goto L65061b;
case 0x65061d:c.instructions+=6;goto B65061d;
case 0x65061e:c.instructions+=5;goto B65061e;
case 0x65061f:c.instructions+=4;goto B65061f;
case 0x650621:c.instructions+=3;goto B650621;
case 0x650623:c.instructions+=2;goto B650623;
case 0x650626:c.instructions+=1;goto B650626;
case 0x650628:goto L650628;
case 0x65062a:c.instructions+=1;goto B65062a;
case 0x65062c:goto L65062c;
case 0x65062d:c.instructions+=2;goto B65062d;
case 0x65062f:c.instructions+=1;goto B65062f;
case 0x650634:goto L650634;
case 0x650636:c.instructions+=1;goto B650636;
case 0x650638:goto L650638;
case 0x65063a:c.instructions+=1;goto B65063a;
case 0x65063f:goto L65063f;
case 0x650641:c.instructions+=1;goto B650641;
case 0x650643:goto L650643;
case 0x650645:goto L650645;
case 0x650647:c.instructions+=1;goto B650647;
case 0x650649:goto L650649;
case 0x65064b:c.instructions+=2;goto B65064b;
case 0x650652:c.instructions+=1;goto B650652;
case 0x650657:goto L650657;
case 0x650659:c.instructions+=1;goto B650659;
case 0x65065b:goto L65065b;
case 0x65065e:c.instructions+=8;goto B65065e;
case 0x65065f:c.instructions+=7;goto B65065f;
case 0x650661:c.instructions+=6;goto B650661;
case 0x650662:c.instructions+=5;goto B650662;
case 0x650663:c.instructions+=4;goto B650663;
case 0x650664:c.instructions+=3;goto B650664;
case 0x650665:c.instructions+=2;goto B650665;
case 0x650667:c.instructions+=1;goto B650667;
case 0x65066c:goto L65066c;
case 0x65066e:goto L65066e;
case 0x650670:goto L650670;
case 0x650672:c.instructions+=1;goto B650672;
case 0x650674:goto L650674;
case 0x650676:c.instructions+=2;goto B650676;
case 0x650679:c.instructions+=1;goto B650679;
case 0x65067e:goto L65067e;
case 0x650680:c.instructions+=1;goto B650680;
case 0x650682:goto L650682;
case 0x650687:c.instructions+=4;goto B650687;
case 0x650688:c.instructions+=3;goto B650688;
case 0x650689:c.instructions+=2;goto B650689;
case 0x65068b:c.instructions+=1;goto B65068b;
case 0x650690:goto L650690;
case 0x650692:goto L650692;
case 0x650694:goto L650694;
case 0x650696:c.instructions+=1;goto B650696;
case 0x650698:goto L650698;
case 0x65069a:goto L65069a;
case 0x65069b:goto L65069b;
case 0x65069c:c.instructions+=2;goto B65069c;
case 0x65069d:c.instructions+=1;goto B65069d;
case 0x65069e:goto L65069e;
case 0x6506a0:c.instructions+=8;goto B6506a0;
case 0x6506a1:c.instructions+=7;goto B6506a1;
case 0x6506a3:c.instructions+=6;goto B6506a3;
case 0x6506a4:c.instructions+=5;goto B6506a4;
case 0x6506a5:c.instructions+=4;goto B6506a5;
case 0x6506a8:c.instructions+=3;goto B6506a8;
case 0x6506aa:c.instructions+=2;goto B6506aa;
case 0x6506ad:c.instructions+=1;goto B6506ad;
case 0x6506af:goto L6506af;
case 0x6506b2:c.instructions+=3;goto B6506b2;
case 0x6506b6:c.instructions+=2;goto B6506b6;
case 0x6506b9:c.instructions+=1;goto B6506b9;
case 0x6506bb:goto L6506bb;
case 0x6506be:c.instructions+=1;goto B6506be;
case 0x6506c3:goto L6506c3;
case 0x6506c5:c.instructions+=1;goto B6506c5;
case 0x6506c7:goto L6506c7;
case 0x6506cc:c.instructions+=5;goto B6506cc;
case 0x6506d1:c.instructions+=4;goto B6506d1;
case 0x6506d4:c.instructions+=3;goto B6506d4;
case 0x6506d5:c.instructions+=2;goto B6506d5;
case 0x6506d8:c.instructions+=1;goto B6506d8;
case 0x6506dd:goto L6506dd;
case 0x6506e0:c.instructions+=2;goto B6506e0;
case 0x6506e2:c.instructions+=1;goto B6506e2;
case 0x6506e7:goto L6506e7;
case 0x6506e8:c.instructions+=2;goto B6506e8;
case 0x6506ea:c.instructions+=1;goto B6506ea;
case 0x6506ef:goto L6506ef;
case 0x6506f1:c.instructions+=1;goto B6506f1;
case 0x6506f3:goto L6506f3;
case 0x6506f5:c.instructions+=1;goto B6506f5;
case 0x6506fa:goto L6506fa;
case 0x6506fc:c.instructions+=1;goto B6506fc;
case 0x6506fe:goto L6506fe;
case 0x650700:goto L650700;
case 0x650702:c.instructions+=1;goto B650702;
case 0x650704:goto L650704;
case 0x650706:c.instructions+=1;goto B650706;
case 0x65070b:goto L65070b;
case 0x65070f:c.instructions+=5;goto B65070f;
case 0x650712:c.instructions+=4;goto B650712;
case 0x650713:c.instructions+=3;goto B650713;
case 0x650716:c.instructions+=2;goto B650716;
case 0x65071d:c.instructions+=1;goto B65071d;
case 0x65071f:goto L65071f;
case 0x650721:c.instructions+=1;goto B650721;
case 0x650723:goto L650723;
case 0x65072a:c.instructions+=1;goto B65072a;
case 0x65072c:goto L65072c;
case 0x65072e:c.instructions+=1;goto B65072e;
case 0x650730:goto L650730;
case 0x650737:c.instructions+=1;goto B650737;
case 0x650739:goto L650739;
case 0x65073b:c.instructions+=1;goto B65073b;
case 0x65073d:goto L65073d;
case 0x65073f:c.instructions+=1;goto B65073f;
case 0x650742:goto L650742;
case 0x650744:c.instructions+=2;goto B650744;
case 0x650747:c.instructions+=1;goto B650747;
case 0x650749:goto L650749;
case 0x65074b:c.instructions+=1;goto B65074b;
case 0x65074d:goto L65074d;
case 0x65074f:c.instructions+=2;goto B65074f;
case 0x650751:c.instructions+=1;goto B650751;
case 0x650754:goto L650754;
case 0x650756:c.instructions+=2;goto B650756;
case 0x650759:c.instructions+=1;goto B650759;
case 0x65075b:goto L65075b;
case 0x65075d:c.instructions+=1;goto B65075d;
case 0x65075f:goto L65075f;
case 0x650761:c.instructions+=2;goto B650761;
case 0x650763:c.instructions+=1;goto B650763;
case 0x650766:goto L650766;
case 0x650768:c.instructions+=2;goto B650768;
case 0x65076b:c.instructions+=1;goto B65076b;
case 0x65076d:goto L65076d;
case 0x650771:c.instructions+=1;goto B650771;
case 0x650773:goto L650773;
case 0x650776:c.instructions+=2;goto B650776;
case 0x650779:c.instructions+=1;goto B650779;
case 0x65077e:goto L65077e;
case 0x650780:c.instructions+=1;goto B650780;
case 0x650782:goto L650782;
case 0x650783:c.instructions+=2;goto B650783;
case 0x650786:c.instructions+=1;goto B650786;
case 0x65078b:goto L65078b;
case 0x65078e:goto L65078e;
case 0x650790:c.instructions+=1;goto B650790;
case 0x650795:goto L650795;
case 0x650797:c.instructions+=1;goto B650797;
case 0x650799:goto L650799;
case 0x65079e:c.instructions+=4;goto B65079e;
case 0x6507a0:c.instructions+=3;goto B6507a0;
case 0x6507a1:c.instructions+=2;goto B6507a1;
case 0x6507a3:c.instructions+=1;goto B6507a3;
case 0x6507a8:goto L6507a8;
case 0x6507aa:goto L6507aa;
case 0x6507ac:goto L6507ac;
case 0x6507ae:c.instructions+=1;goto B6507ae;
case 0x6507b0:goto L6507b0;
case 0x6507b2:goto L6507b2;
case 0x6507b3:goto L6507b3;
case 0x6507b4:goto L6507b4;
case 0x6507b5:c.instructions+=2;goto B6507b5;
case 0x6507b6:c.instructions+=1;goto B6507b6;
case 0x6507b9:goto L6507b9;
case 0x6507bb:c.instructions+=5;goto B6507bb;
case 0x6507bc:c.instructions+=4;goto B6507bc;
case 0x6507be:c.instructions+=3;goto B6507be;
case 0x6507c1:c.instructions+=2;goto B6507c1;
case 0x6507c3:c.instructions+=1;goto B6507c3;
case 0x6507c8:goto L6507c8;
case 0x6507cb:c.instructions+=1;goto B6507cb;
case 0x6507d0:goto L6507d0;
case 0x6507d2:c.instructions+=2;goto B6507d2;
case 0x6507d3:c.instructions+=1;goto B6507d3;
case 0x6507d4:goto L6507d4;
case 0x6507d6:c.instructions+=12;goto B6507d6;
case 0x6507d7:c.instructions+=11;goto B6507d7;
case 0x6507d9:c.instructions+=10;goto B6507d9;
case 0x6507df:c.instructions+=9;goto B6507df;
case 0x6507e0:c.instructions+=8;goto B6507e0;
case 0x6507e1:c.instructions+=7;goto B6507e1;
case 0x6507e3:c.instructions+=6;goto B6507e3;
case 0x6507e5:c.instructions+=5;goto B6507e5;
case 0x6507e6:c.instructions+=4;goto B6507e6;
case 0x6507ec:c.instructions+=3;goto B6507ec;
case 0x6507ef:c.instructions+=2;goto B6507ef;
case 0x6507f2:c.instructions+=1;goto B6507f2;
case 0x6507f7:goto L6507f7;
case 0x6507fa:c.instructions+=1;goto B6507fa;
case 0x6507fc:goto L6507fc;
case 0x6507fe:c.instructions+=1;goto B6507fe;
case 0x650803:goto L650803;
case 0x650805:c.instructions+=2;goto B650805;
case 0x650806:c.instructions+=1;goto B650806;
case 0x650808:goto L650808;
case 0x65080b:c.instructions+=3;goto B65080b;
case 0x65080d:c.instructions+=2;goto B65080d;
case 0x65080e:c.instructions+=1;goto B65080e;
case 0x650813:goto L650813;
case 0x650816:c.instructions+=1;goto B650816;
case 0x650818:goto L650818;
case 0x65081b:goto L65081b;
case 0x65081e:c.instructions+=1;goto B65081e;
case 0x650820:goto L650820;
case 0x650823:c.instructions+=8;goto B650823;
case 0x650824:c.instructions+=7;goto B650824;
case 0x650827:c.instructions+=6;goto B650827;
case 0x650829:c.instructions+=5;goto B650829;
case 0x65082e:c.instructions+=4;goto B65082e;
case 0x65082f:c.instructions+=3;goto B65082f;
case 0x650832:c.instructions+=2;goto B650832;
case 0x650838:c.instructions+=1;goto B650838;
case 0x65083d:goto L65083d;
case 0x65083f:c.instructions+=1;goto B65083f;
case 0x650841:goto L650841;
case 0x650844:c.instructions+=3;goto B650844;
case 0x650846:c.instructions+=2;goto B650846;
case 0x650847:c.instructions+=1;goto B650847;
case 0x65084a:goto L65084a;
case 0x650850:c.instructions+=4;goto B650850;
case 0x650852:c.instructions+=3;goto B650852;
case 0x650853:c.instructions+=2;goto B650853;
case 0x650856:c.instructions+=1;goto B650856;
case 0x65085b:goto L65085b;
case 0x65085d:c.instructions+=3;goto B65085d;
case 0x65085f:c.instructions+=2;goto B65085f;
case 0x650862:c.instructions+=1;goto B650862;
case 0x650864:goto L650864;
case 0x65086a:c.instructions+=1;goto B65086a;
case 0x65086f:goto L65086f;
case 0x650871:goto L650871;
case 0x650874:c.instructions+=3;goto B650874;
case 0x650876:c.instructions+=2;goto B650876;
case 0x650877:c.instructions+=1;goto B650877;
case 0x65087a:goto L65087a;
case 0x65087d:c.instructions+=3;goto B65087d;
case 0x65087f:c.instructions+=2;goto B65087f;
case 0x650881:c.instructions+=1;goto B650881;
case 0x650884:goto L650884;
case 0x650886:goto L650886;
case 0x650888:c.instructions+=1;goto B650888;
case 0x65088b:goto L65088b;
case 0x65088d:goto L65088d;
case 0x650890:c.instructions+=2;goto B650890;
case 0x650892:c.instructions+=1;goto B650892;
case 0x650894:goto L650894;
case 0x650896:c.instructions+=2;goto B650896;
case 0x650897:c.instructions+=1;goto B650897;
case 0x65089a:goto L65089a;
case 0x65089e:goto L65089e;
case 0x6508a0:c.instructions+=1;goto B6508a0;
case 0x6508a5:goto L6508a5;
case 0x6508a7:c.instructions+=1;goto B6508a7;
case 0x6508a9:goto L6508a9;
case 0x6508ac:c.instructions+=5;goto B6508ac;
case 0x6508af:c.instructions+=4;goto B6508af;
case 0x6508b2:c.instructions+=3;goto B6508b2;
case 0x6508b3:c.instructions+=2;goto B6508b3;
case 0x6508b5:c.instructions+=1;goto B6508b5;
case 0x6508ba:goto L6508ba;
case 0x6508bc:c.instructions+=1;goto B6508bc;
case 0x6508be:goto L6508be;
case 0x6508c0:goto L6508c0;
case 0x6508c2:c.instructions+=1;goto B6508c2;
case 0x6508c4:goto L6508c4;
case 0x6508ca:c.instructions+=1;goto B6508ca;
case 0x6508cf:goto L6508cf;
case 0x6508d2:c.instructions+=2;goto B6508d2;
case 0x6508d9:c.instructions+=1;goto B6508d9;
case 0x6508de:goto L6508de;
case 0x6508e1:c.instructions+=3;goto B6508e1;
case 0x6508e3:c.instructions+=2;goto B6508e3;
case 0x6508e4:c.instructions+=1;goto B6508e4;
case 0x6508e6:goto L6508e6;
case 0x6508e8:c.instructions+=2;goto B6508e8;
case 0x6508e9:c.instructions+=1;goto B6508e9;
case 0x6508ec:goto L6508ec;
case 0x6508ee:c.instructions+=1;goto B6508ee;
case 0x6508f0:goto L6508f0;
case 0x6508f3:c.instructions+=1;goto B6508f3;
case 0x6508f8:goto L6508f8;
case 0x6508f9:c.instructions+=2;goto B6508f9;
case 0x6508ff:c.instructions+=1;goto B6508ff;
case 0x650904:goto L650904;
case 0x650906:goto L650906;
case 0x650907:c.instructions+=4;goto B650907;
case 0x650908:c.instructions+=3;goto B650908;
case 0x650909:c.instructions+=2;goto B650909;
case 0x65090a:c.instructions+=1;goto B65090a;
case 0x65090d:goto L65090d;
case 0x65090f:c.instructions+=10;goto B65090f;
case 0x650910:c.instructions+=9;goto B650910;
case 0x650912:c.instructions+=8;goto B650912;
case 0x650915:c.instructions+=7;goto B650915;
case 0x650916:c.instructions+=6;goto B650916;
case 0x650917:c.instructions+=5;goto B650917;
case 0x650918:c.instructions+=4;goto B650918;
case 0x65091b:c.instructions+=3;goto B65091b;
case 0x65091d:c.instructions+=2;goto B65091d;
case 0x650920:c.instructions+=1;goto B650920;
case 0x650926:goto L650926;
case 0x65092a:c.instructions+=1;goto B65092a;
case 0x650930:goto L650930;
case 0x650934:c.instructions+=1;goto B650934;
case 0x65093a:goto L65093a;
case 0x65093d:c.instructions+=2;goto B65093d;
case 0x65093f:c.instructions+=1;goto B65093f;
case 0x650945:goto L650945;
case 0x650949:c.instructions+=1;goto B650949;
case 0x65094f:goto L65094f;
case 0x650952:c.instructions+=2;goto B650952;
case 0x650955:c.instructions+=1;goto B650955;
case 0x65095b:goto L65095b;
case 0x65095d:c.instructions+=1;goto B65095d;
case 0x650962:goto L650962;
case 0x650964:c.instructions+=1;goto B650964;
case 0x650966:goto L650966;
case 0x650967:c.instructions+=2;goto B650967;
case 0x650969:c.instructions+=1;goto B650969;
case 0x65096e:goto L65096e;
case 0x650971:c.instructions+=1;goto B650971;
case 0x650973:goto L650973;
case 0x650977:goto L650977;
case 0x65097b:c.instructions+=1;goto B65097b;
case 0x65097d:goto L65097d;
case 0x650980:c.instructions+=8;goto B650980;
case 0x650983:c.instructions+=7;goto B650983;
case 0x650984:c.instructions+=6;goto B650984;
case 0x650989:c.instructions+=5;goto B650989;
case 0x65098c:c.instructions+=4;goto B65098c;
case 0x65098f:c.instructions+=3;goto B65098f;
case 0x650991:c.instructions+=2;goto B650991;
case 0x650992:c.instructions+=1;goto B650992;
case 0x650997:goto L650997;
case 0x65099a:c.instructions+=3;goto B65099a;
case 0x65099d:c.instructions+=2;goto B65099d;
case 0x6509a1:c.instructions+=1;goto B6509a1;
case 0x6509a4:goto L6509a4;
case 0x6509a6:c.instructions+=3;goto B6509a6;
case 0x6509a7:c.instructions+=2;goto B6509a7;
case 0x6509a9:c.instructions+=1;goto B6509a9;
case 0x6509ab:goto L6509ab;
case 0x6509ad:c.instructions+=2;goto B6509ad;
case 0x6509af:c.instructions+=1;goto B6509af;
case 0x6509b2:goto L6509b2;
case 0x6509b4:c.instructions+=3;goto B6509b4;
case 0x6509b5:c.instructions+=2;goto B6509b5;
case 0x6509b7:c.instructions+=1;goto B6509b7;
case 0x6509b9:goto L6509b9;
case 0x6509bb:c.instructions+=6;goto B6509bb;
case 0x6509bf:c.instructions+=5;goto B6509bf;
case 0x6509c2:c.instructions+=4;goto B6509c2;
case 0x6509c5:c.instructions+=3;goto B6509c5;
case 0x6509c7:c.instructions+=2;goto B6509c7;
case 0x6509c8:c.instructions+=1;goto B6509c8;
case 0x6509cd:goto L6509cd;
case 0x6509cf:c.instructions+=2;goto B6509cf;
case 0x6509d1:c.instructions+=1;goto B6509d1;
case 0x6509d3:goto L6509d3;
case 0x6509d4:c.instructions+=5;goto B6509d4;
case 0x6509d7:c.instructions+=4;goto B6509d7;
case 0x6509dc:c.instructions+=3;goto B6509dc;
case 0x6509dd:c.instructions+=2;goto B6509dd;
case 0x6509de:c.instructions+=1;goto B6509de;
case 0x6509e3:goto L6509e3;
case 0x6509e6:c.instructions+=4;goto B6509e6;
case 0x6509eb:c.instructions+=3;goto B6509eb;
case 0x6509ee:c.instructions+=2;goto B6509ee;
case 0x6509f1:c.instructions+=1;goto B6509f1;
case 0x6509f3:goto L6509f3;
case 0x6509f5:goto L6509f5;
case 0x6509f6:c.instructions+=4;goto B6509f6;
case 0x6509f7:c.instructions+=3;goto B6509f7;
case 0x6509f8:c.instructions+=2;goto B6509f8;
case 0x6509f9:c.instructions+=1;goto B6509f9;
case 0x6509fc:goto L6509fc;
case 0x6509fe:c.instructions+=10;goto B6509fe;
case 0x6509ff:c.instructions+=9;goto B6509ff;
case 0x650a01:c.instructions+=8;goto B650a01;
case 0x650a02:c.instructions+=7;goto B650a02;
case 0x650a03:c.instructions+=6;goto B650a03;
case 0x650a04:c.instructions+=5;goto B650a04;
case 0x650a05:c.instructions+=4;goto B650a05;
case 0x650a08:c.instructions+=3;goto B650a08;
case 0x650a0a:c.instructions+=2;goto B650a0a;
case 0x650a0d:c.instructions+=1;goto B650a0d;
case 0x650a13:goto L650a13;
case 0x650a17:c.instructions+=1;goto B650a17;
case 0x650a1d:goto L650a1d;
case 0x650a20:c.instructions+=2;goto B650a20;
case 0x650a23:c.instructions+=1;goto B650a23;
case 0x650a29:goto L650a29;
case 0x650a2c:c.instructions+=2;goto B650a2c;
case 0x650a2e:c.instructions+=1;goto B650a2e;
case 0x650a34:goto L650a34;
case 0x650a38:c.instructions+=1;goto B650a38;
case 0x650a3e:goto L650a3e;
case 0x650a42:c.instructions+=1;goto B650a42;
case 0x650a44:goto L650a44;
case 0x650a46:c.instructions+=1;goto B650a46;
case 0x650a4b:goto L650a4b;
case 0x650a4d:c.instructions+=1;goto B650a4d;
case 0x650a4f:goto L650a4f;
case 0x650a50:c.instructions+=2;goto B650a50;
case 0x650a52:c.instructions+=1;goto B650a52;
case 0x650a57:goto L650a57;
case 0x650a5a:c.instructions+=1;goto B650a5a;
case 0x650a5c:goto L650a5c;
case 0x650a60:goto L650a60;
case 0x650a64:c.instructions+=1;goto B650a64;
case 0x650a66:goto L650a66;
case 0x650a69:c.instructions+=3;goto B650a69;
case 0x650a6c:c.instructions+=2;goto B650a6c;
case 0x650a6f:c.instructions+=1;goto B650a6f;
case 0x650a72:goto L650a72;
case 0x650a74:c.instructions+=3;goto B650a74;
case 0x650a75:c.instructions+=2;goto B650a75;
case 0x650a77:c.instructions+=1;goto B650a77;
case 0x650a79:goto L650a79;
case 0x650a7b:c.instructions+=3;goto B650a7b;
case 0x650a7d:c.instructions+=2;goto B650a7d;
case 0x650a7f:c.instructions+=1;goto B650a7f;
case 0x650a82:goto L650a82;
case 0x650a84:c.instructions+=3;goto B650a84;
case 0x650a85:c.instructions+=2;goto B650a85;
case 0x650a87:c.instructions+=1;goto B650a87;
case 0x650a89:goto L650a89;
case 0x650a8b:c.instructions+=6;goto B650a8b;
case 0x650a8f:c.instructions+=5;goto B650a8f;
case 0x650a92:c.instructions+=4;goto B650a92;
case 0x650a95:c.instructions+=3;goto B650a95;
case 0x650a97:c.instructions+=2;goto B650a97;
case 0x650a98:c.instructions+=1;goto B650a98;
case 0x650a9d:goto L650a9d;
case 0x650a9f:c.instructions+=2;goto B650a9f;
case 0x650aa1:c.instructions+=1;goto B650aa1;
case 0x650aa3:goto L650aa3;
case 0x650aa4:c.instructions+=5;goto B650aa4;
case 0x650aa7:c.instructions+=4;goto B650aa7;
case 0x650aac:c.instructions+=3;goto B650aac;
case 0x650aad:c.instructions+=2;goto B650aad;
case 0x650aae:c.instructions+=1;goto B650aae;
case 0x650ab3:goto L650ab3;
case 0x650ab6:c.instructions+=4;goto B650ab6;
case 0x650abb:c.instructions+=3;goto B650abb;
case 0x650abe:c.instructions+=2;goto B650abe;
case 0x650ac1:c.instructions+=1;goto B650ac1;
case 0x650ac3:goto L650ac3;
case 0x650ac5:goto L650ac5;
case 0x650ac6:c.instructions+=4;goto B650ac6;
case 0x650ac7:c.instructions+=3;goto B650ac7;
case 0x650ac8:c.instructions+=2;goto B650ac8;
case 0x650ac9:c.instructions+=1;goto B650ac9;
case 0x650acc:goto L650acc;
case 0x650ace:c.instructions+=5;goto B650ace;
case 0x650acf:c.instructions+=4;goto B650acf;
case 0x650ad1:c.instructions+=3;goto B650ad1;
case 0x650ad4:c.instructions+=2;goto B650ad4;
case 0x650ad6:c.instructions+=1;goto B650ad6;
case 0x650ad8:goto L650ad8;
case 0x650add:c.instructions+=4;goto B650add;
case 0x650ade:c.instructions+=3;goto B650ade;
case 0x650adf:c.instructions+=2;goto B650adf;
case 0x650ae0:c.instructions+=1;goto B650ae0;
case 0x650ae5:goto L650ae5;
case 0x650ae8:c.instructions+=3;goto B650ae8;
case 0x650aed:c.instructions+=2;goto B650aed;
case 0x650aee:c.instructions+=1;goto B650aee;
case 0x650aef:goto L650aef;
case 0x650af3:c.instructions+=2;goto B650af3;
case 0x650af4:c.instructions+=1;goto B650af4;
case 0x650af6:goto L650af6;
case 0x650af9:c.instructions+=2;goto B650af9;
case 0x650afb:c.instructions+=1;goto B650afb;
case 0x650afd:goto L650afd;
case 0x650b01:c.instructions+=1;goto B650b01;
case 0x650b03:goto L650b03;
case 0x650b06:c.instructions+=1;goto B650b06;
case 0x650b08:goto L650b08;
case 0x650b0b:c.instructions+=7;goto B650b0b;
case 0x650b12:c.instructions+=6;goto B650b12;
case 0x650b14:c.instructions+=5;goto B650b14;
case 0x650b17:c.instructions+=4;goto B650b17;
case 0x650b1a:c.instructions+=3;goto B650b1a;
case 0x650b1d:c.instructions+=2;goto B650b1d;
case 0x650b1f:c.instructions+=1;goto B650b1f;
case 0x650b24:goto L650b24;
case 0x650b26:c.instructions+=1;goto B650b26;
case 0x650b28:goto L650b28;
case 0x650b2a:c.instructions+=1;goto B650b2a;
case 0x650b2d:goto L650b2d;
case 0x650b2f:c.instructions+=2;goto B650b2f;
case 0x650b31:c.instructions+=1;goto B650b31;
case 0x650b33:goto L650b33;
case 0x650b36:c.instructions+=9;goto B650b36;
case 0x650b39:c.instructions+=8;goto B650b39;
case 0x650b3c:c.instructions+=7;goto B650b3c;
case 0x650b3e:c.instructions+=6;goto B650b3e;
case 0x650b41:c.instructions+=5;goto B650b41;
case 0x650b44:c.instructions+=4;goto B650b44;
case 0x650b47:c.instructions+=3;goto B650b47;
case 0x650b4a:c.instructions+=2;goto B650b4a;
case 0x650b4d:c.instructions+=1;goto B650b4d;
case 0x650b51:goto L650b51;
case 0x650b54:c.instructions+=4;goto B650b54;
case 0x650b57:c.instructions+=3;goto B650b57;
case 0x650b5a:c.instructions+=2;goto B650b5a;
case 0x650b5e:c.instructions+=1;goto B650b5e;
case 0x650b60:goto L650b60;
case 0x650b61:c.instructions+=2;goto B650b61;
case 0x650b62:c.instructions+=1;goto B650b62;
case 0x650b63:goto L650b63;
case 0x650b65:c.instructions+=7;goto B650b65;
case 0x650b66:c.instructions+=6;goto B650b66;
case 0x650b68:c.instructions+=5;goto B650b68;
case 0x650b69:c.instructions+=4;goto B650b69;
case 0x650b6b:c.instructions+=3;goto B650b6b;
case 0x650b6e:c.instructions+=2;goto B650b6e;
case 0x650b70:c.instructions+=1;goto B650b70;
case 0x650b72:goto L650b72;
case 0x650b77:c.instructions+=4;goto B650b77;
case 0x650b78:c.instructions+=3;goto B650b78;
case 0x650b79:c.instructions+=2;goto B650b79;
case 0x650b7a:c.instructions+=1;goto B650b7a;
case 0x650b7f:goto L650b7f;
case 0x650b82:c.instructions+=2;goto B650b82;
case 0x650b87:c.instructions+=1;goto B650b87;
case 0x650b8c:goto L650b8c;
case 0x650b8d:c.instructions+=8;goto B650b8d;
case 0x650b90:c.instructions+=7;goto B650b90;
case 0x650b91:c.instructions+=6;goto B650b91;
case 0x650b94:c.instructions+=5;goto B650b94;
case 0x650b97:c.instructions+=4;goto B650b97;
case 0x650b98:c.instructions+=3;goto B650b98;
case 0x650b99:c.instructions+=2;goto B650b99;
case 0x650b9b:c.instructions+=1;goto B650b9b;
case 0x650ba0:goto L650ba0;
case 0x650ba2:goto L650ba2;
case 0x650ba5:c.instructions+=2;goto B650ba5;
case 0x650ba9:c.instructions+=1;goto B650ba9;
case 0x650bab:goto L650bab;
case 0x650baf:c.instructions+=1;goto B650baf;
case 0x650bb1:goto L650bb1;
case 0x650bb5:c.instructions+=1;goto B650bb5;
case 0x650bb7:goto L650bb7;
case 0x650bba:goto L650bba;
case 0x650bbc:c.instructions+=1;goto B650bbc;
case 0x650bbe:goto L650bbe;
case 0x650bc1:c.instructions+=3;goto B650bc1;
case 0x650bc4:c.instructions+=2;goto B650bc4;
case 0x650bc6:c.instructions+=1;goto B650bc6;
case 0x650bc8:goto L650bc8;
case 0x650bcc:c.instructions+=1;goto B650bcc;
case 0x650bce:goto L650bce;
case 0x650bd2:c.instructions+=1;goto B650bd2;
case 0x650bd4:goto L650bd4;
case 0x650bd5:c.instructions+=3;goto B650bd5;
case 0x650bd6:c.instructions+=2;goto B650bd6;
case 0x650bd8:c.instructions+=1;goto B650bd8;
case 0x650bdd:goto L650bdd;
case 0x650bdf:c.instructions+=1;goto B650bdf;
case 0x650be1:goto L650be1;
case 0x650be4:c.instructions+=2;goto B650be4;
case 0x650be9:c.instructions+=1;goto B650be9;
case 0x650bee:goto L650bee;
case 0x650bef:c.instructions+=2;goto B650bef;
case 0x650bf0:c.instructions+=1;goto B650bf0;
case 0x650bf5:goto L650bf5;
case 0x650bf8:c.instructions+=2;goto B650bf8;
case 0x650bfd:c.instructions+=1;goto B650bfd;
case 0x650c02:goto L650c02;
case 0x650c06:c.instructions+=1;goto B650c06;
case 0x650c08:goto L650c08;
case 0x650c0b:c.instructions+=2;goto B650c0b;
case 0x650c0c:c.instructions+=1;goto B650c0c;
case 0x650c11:goto L650c11;
case 0x650c13:c.instructions+=1;goto B650c13;
case 0x650c19:goto L650c19;
case 0x650c1c:c.instructions+=3;goto B650c1c;
case 0x650c21:c.instructions+=2;goto B650c21;
case 0x650c26:c.instructions+=1;goto B650c26;
case 0x650c28:goto L650c28;
case 0x650c2a:c.instructions+=1;goto B650c2a;
case 0x650c2f:goto L650c2f;
case 0x650c31:c.instructions+=2;goto B650c31;
case 0x650c33:c.instructions+=1;goto B650c33;
case 0x650c35:goto L650c35;
case 0x650c3a:c.instructions+=4;goto B650c3a;
case 0x650c3b:c.instructions+=3;goto B650c3b;
case 0x650c3c:c.instructions+=2;goto B650c3c;
case 0x650c3e:c.instructions+=1;goto B650c3e;
case 0x650c43:goto L650c43;
case 0x650c45:goto L650c45;
case 0x650c47:c.instructions+=1;goto B650c47;
case 0x650c49:goto L650c49;
case 0x650c4a:c.instructions+=1;goto B650c4a;
case 0x650c4f:goto L650c4f;
case 0x650c51:c.instructions+=2;goto B650c51;
case 0x650c54:c.instructions+=1;goto B650c54;
case 0x650c56:goto L650c56;
case 0x650c5b:c.instructions+=1;goto B650c5b;
case 0x650c5d:goto L650c5d;
case 0x650c60:c.instructions+=21;goto B650c60;
case 0x650c63:c.instructions+=20;goto B650c63;
case 0x650c66:c.instructions+=19;goto B650c66;
case 0x650c69:c.instructions+=18;goto B650c69;
case 0x650c6c:c.instructions+=17;goto B650c6c;
case 0x650c6f:c.instructions+=16;goto B650c6f;
case 0x650c72:c.instructions+=15;goto B650c72;
case 0x650c75:c.instructions+=14;goto B650c75;
case 0x650c78:c.instructions+=13;goto B650c78;
case 0x650c7b:c.instructions+=12;goto B650c7b;
case 0x650c7e:c.instructions+=11;goto B650c7e;
case 0x650c81:c.instructions+=10;goto B650c81;
case 0x650c84:c.instructions+=9;goto B650c84;
case 0x650c87:c.instructions+=8;goto B650c87;
case 0x650c8a:c.instructions+=7;goto B650c8a;
case 0x650c8d:c.instructions+=6;goto B650c8d;
case 0x650c90:c.instructions+=5;goto B650c90;
case 0x650c93:c.instructions+=4;goto B650c93;
case 0x650c96:c.instructions+=3;goto B650c96;
case 0x650c98:c.instructions+=2;goto B650c98;
case 0x650c9b:c.instructions+=1;goto B650c9b;
case 0x650ca0:goto L650ca0;
case 0x650ca2:c.instructions+=1;goto B650ca2;
case 0x650ca4:goto L650ca4;
case 0x650ca6:goto L650ca6;
case 0x650ca7:c.instructions+=1;goto B650ca7;
case 0x650ca8:goto L650ca8;
case 0x650ca9:c.instructions+=2;goto B650ca9;
case 0x650caa:c.instructions+=1;goto B650caa;
case 0x650cad:goto L650cad;
case 0x650caf:c.instructions+=9;goto B650caf;
case 0x650cb0:c.instructions+=8;goto B650cb0;
case 0x650cb2:c.instructions+=7;goto B650cb2;
case 0x650cb8:c.instructions+=6;goto B650cb8;
case 0x650cbb:c.instructions+=5;goto B650cbb;
case 0x650cbc:c.instructions+=4;goto B650cbc;
case 0x650cbe:c.instructions+=3;goto B650cbe;
case 0x650cc0:c.instructions+=2;goto B650cc0;
case 0x650cc3:c.instructions+=1;goto B650cc3;
case 0x650cc5:goto L650cc5;
case 0x650cc7:goto L650cc7;
case 0x650cca:c.instructions+=2;goto B650cca;
case 0x650ccc:c.instructions+=1;goto B650ccc;
case 0x650cce:goto L650cce;
case 0x650cd0:goto L650cd0;
case 0x650cd3:c.instructions+=3;goto B650cd3;
case 0x650cd5:c.instructions+=2;goto B650cd5;
case 0x650cd7:c.instructions+=1;goto B650cd7;
case 0x650cd9:goto L650cd9;
case 0x650cdc:c.instructions+=2;goto B650cdc;
case 0x650cde:c.instructions+=1;goto B650cde;
case 0x650ce0:goto L650ce0;
case 0x650ce4:c.instructions+=1;goto B650ce4;
case 0x650ce6:goto L650ce6;
case 0x650ce9:c.instructions+=2;goto B650ce9;
case 0x650ceb:c.instructions+=1;goto B650ceb;
case 0x650ced:goto L650ced;
case 0x650cf1:c.instructions+=1;goto B650cf1;
case 0x650cf3:goto L650cf3;
case 0x650cf6:c.instructions+=3;goto B650cf6;
case 0x650cf7:c.instructions+=2;goto B650cf7;
case 0x650cf9:c.instructions+=1;goto B650cf9;
case 0x650cfb:goto L650cfb;
case 0x650cfd:c.instructions+=1;goto B650cfd;
case 0x650cff:goto L650cff;
case 0x650d02:c.instructions+=1;goto B650d02;
case 0x650d04:goto L650d04;
case 0x650d06:c.instructions+=2;goto B650d06;
case 0x650d07:c.instructions+=1;goto B650d07;
case 0x650d0c:goto L650d0c;
case 0x650d0f:c.instructions+=5;goto B650d0f;
case 0x650d12:c.instructions+=4;goto B650d12;
case 0x650d13:c.instructions+=3;goto B650d13;
case 0x650d1a:c.instructions+=2;goto B650d1a;
case 0x650d1d:c.instructions+=1;goto B650d1d;
case 0x650d1e:goto L650d1e;
case 0x650d21:c.instructions+=6;goto B650d21;
case 0x650d24:c.instructions+=5;goto B650d24;
case 0x650d26:c.instructions+=4;goto B650d26;
case 0x650d28:c.instructions+=3;goto B650d28;
case 0x650d2a:c.instructions+=2;goto B650d2a;
case 0x650d30:c.instructions+=1;goto B650d30;
case 0x650d36:goto L650d36;
case 0x650d38:c.instructions+=3;goto B650d38;
case 0x650d3a:c.instructions+=2;goto B650d3a;
case 0x650d3c:c.instructions+=1;goto B650d3c;
case 0x650d3e:goto L650d3e;
case 0x650d40:c.instructions+=1;goto B650d40;
case 0x650d42:goto L650d42;
case 0x650d45:c.instructions+=3;goto B650d45;
case 0x650d47:c.instructions+=2;goto B650d47;
case 0x650d4a:c.instructions+=1;goto B650d4a;
case 0x650d4c:goto L650d4c;
case 0x650d4d:c.instructions+=5;goto B650d4d;
case 0x650d4e:c.instructions+=4;goto B650d4e;
case 0x650d4f:c.instructions+=3;goto B650d4f;
case 0x650d50:c.instructions+=2;goto B650d50;
case 0x650d52:c.instructions+=1;goto B650d52;
case 0x650d54:goto L650d54;
case 0x650d56:c.instructions+=1;goto B650d56;
case 0x650d58:goto L650d58;
case 0x650d5a:c.instructions+=1;goto B650d5a;
case 0x650d5d:goto L650d5d;
case 0x650d5f:c.instructions+=1;goto B650d5f;
case 0x650d61:goto L650d61;
case 0x650d64:c.instructions+=1;goto B650d64;
case 0x650d66:goto L650d66;
case 0x650d68:goto L650d68;
case 0x650d6b:goto L650d6b;
case 0x650d6e:c.instructions+=1;goto B650d6e;
case 0x650d70:goto L650d70;
case 0x650d75:goto L650d75;
case 0x650d77:c.instructions+=4;goto B650d77;
case 0x650d7a:c.instructions+=3;goto B650d7a;
case 0x650d7c:c.instructions+=2;goto B650d7c;
case 0x650d7f:c.instructions+=1;goto B650d7f;
case 0x650d81:goto L650d81;
case 0x650d87:c.instructions+=1;goto B650d87;
case 0x650d8d:goto L650d8d;
case 0x650d8f:c.instructions+=1;goto B650d8f;
case 0x650d92:goto L650d92;
case 0x650d94:c.instructions+=3;goto B650d94;
case 0x650d96:c.instructions+=2;goto B650d96;
case 0x650d98:c.instructions+=1;goto B650d98;
case 0x650d9a:goto L650d9a;
case 0x650d9c:c.instructions+=1;goto B650d9c;
case 0x650d9e:goto L650d9e;
case 0x650da1:c.instructions+=3;goto B650da1;
case 0x650da3:c.instructions+=2;goto B650da3;
case 0x650da6:c.instructions+=1;goto B650da6;
case 0x650da8:goto L650da8;
case 0x650da9:c.instructions+=5;goto B650da9;
case 0x650daa:c.instructions+=4;goto B650daa;
case 0x650dab:c.instructions+=3;goto B650dab;
case 0x650dac:c.instructions+=2;goto B650dac;
case 0x650dae:c.instructions+=1;goto B650dae;
case 0x650db0:goto L650db0;
case 0x650db2:c.instructions+=1;goto B650db2;
case 0x650db4:goto L650db4;
case 0x650db6:c.instructions+=1;goto B650db6;
case 0x650db9:goto L650db9;
case 0x650dbb:c.instructions+=1;goto B650dbb;
case 0x650dbd:goto L650dbd;
case 0x650dbe:c.instructions+=3;goto B650dbe;
case 0x650dc4:c.instructions+=2;goto B650dc4;
case 0x650dc6:c.instructions+=1;goto B650dc6;
case 0x650dc8:goto L650dc8;
case 0x650dcb:c.instructions+=2;goto B650dcb;
case 0x650dce:c.instructions+=1;goto B650dce;
case 0x650dd0:goto L650dd0;
case 0x650dd6:c.instructions+=1;goto B650dd6;
case 0x650ddc:goto L650ddc;
case 0x650dde:c.instructions+=1;goto B650dde;
case 0x650de1:goto L650de1;
case 0x650de3:c.instructions+=3;goto B650de3;
case 0x650de5:c.instructions+=2;goto B650de5;
case 0x650de7:c.instructions+=1;goto B650de7;
case 0x650de9:goto L650de9;
case 0x650deb:c.instructions+=1;goto B650deb;
case 0x650ded:goto L650ded;
case 0x650df0:c.instructions+=3;goto B650df0;
case 0x650df2:c.instructions+=2;goto B650df2;
case 0x650df5:c.instructions+=1;goto B650df5;
case 0x650df7:goto L650df7;
case 0x650df8:c.instructions+=5;goto B650df8;
case 0x650df9:c.instructions+=4;goto B650df9;
case 0x650dfa:c.instructions+=3;goto B650dfa;
case 0x650dfb:c.instructions+=2;goto B650dfb;
case 0x650dfd:c.instructions+=1;goto B650dfd;
case 0x650dff:goto L650dff;
case 0x650e01:c.instructions+=1;goto B650e01;
case 0x650e03:goto L650e03;
case 0x650e05:c.instructions+=1;goto B650e05;
case 0x650e08:goto L650e08;
case 0x650e0a:c.instructions+=1;goto B650e0a;
case 0x650e0c:goto L650e0c;
case 0x650e0f:c.instructions+=3;goto B650e0f;
case 0x650e15:c.instructions+=2;goto B650e15;
case 0x650e19:c.instructions+=1;goto B650e19;
case 0x650e1b:goto L650e1b;
case 0x650e1e:c.instructions+=1;goto B650e1e;
case 0x650e24:goto L650e24;
case 0x650e27:c.instructions+=1;goto B650e27;
case 0x650e2d:goto L650e2d;
case 0x650e33:c.instructions+=28;goto B650e33;
case 0x650e39:c.instructions+=27;goto B650e39;
case 0x650e3c:c.instructions+=26;goto B650e3c;
case 0x650e3f:c.instructions+=25;goto B650e3f;
case 0x650e42:c.instructions+=24;goto B650e42;
case 0x650e43:c.instructions+=23;goto B650e43;
case 0x650e44:c.instructions+=22;goto B650e44;
case 0x650e45:c.instructions+=21;goto B650e45;
case 0x650e46:c.instructions+=20;goto B650e46;
case 0x650e47:c.instructions+=19;goto B650e47;
case 0x650e49:c.instructions+=18;goto B650e49;
case 0x650e4a:c.instructions+=17;goto B650e4a;
case 0x650e4d:c.instructions+=16;goto B650e4d;
case 0x650e4e:c.instructions+=15;goto B650e4e;
case 0x650e4f:c.instructions+=14;goto B650e4f;
case 0x650e50:c.instructions+=13;goto B650e50;
case 0x650e53:c.instructions+=12;goto B650e53;
case 0x650e54:c.instructions+=11;goto B650e54;
case 0x650e55:c.instructions+=10;goto B650e55;
case 0x650e57:c.instructions+=9;goto B650e57;
case 0x650e58:c.instructions+=8;goto B650e58;
case 0x650e5b:c.instructions+=7;goto B650e5b;
case 0x650e5c:c.instructions+=6;goto B650e5c;
case 0x650e5d:c.instructions+=5;goto B650e5d;
case 0x650e5e:c.instructions+=4;goto B650e5e;
case 0x650e5f:c.instructions+=3;goto B650e5f;
case 0x650e65:c.instructions+=2;goto B650e65;
case 0x650e66:c.instructions+=1;goto B650e66;
case 0x650e6b:goto L650e6b;
case 0x650e71:c.instructions+=1;goto B650e71;
case 0x650e76:goto L650e76;
case 0x650e79:c.instructions+=3;goto B650e79;
case 0x650e7b:c.instructions+=2;goto B650e7b;
case 0x650e82:c.instructions+=1;goto B650e82;
case 0x650e88:goto L650e88;
case 0x650e8b:goto L650e8b;
case 0x650e8f:c.instructions+=1;goto B650e8f;
case 0x650e95:goto L650e95;
case 0x650e99:c.instructions+=1;goto B650e99;
case 0x650e9f:goto L650e9f;
case 0x650ea2:c.instructions+=5;goto B650ea2;
case 0x650ea5:c.instructions+=4;goto B650ea5;
case 0x650ea7:c.instructions+=3;goto B650ea7;
case 0x650eab:c.instructions+=2;goto B650eab;
case 0x650eae:c.instructions+=1;goto B650eae;
case 0x650eb0:goto L650eb0;
case 0x650eb2:c.instructions+=1;goto B650eb2;
case 0x650eb4:goto L650eb4;
case 0x650eb7:c.instructions+=2;goto B650eb7;
case 0x650eba:c.instructions+=1;goto B650eba;
case 0x650ebc:goto L650ebc;
case 0x650ebf:c.instructions+=1;goto B650ebf;
case 0x650ec1:goto L650ec1;
case 0x650ec4:c.instructions+=2;goto B650ec4;
case 0x650ec6:c.instructions+=1;goto B650ec6;
case 0x650ec8:goto L650ec8;
case 0x650eca:c.instructions+=1;goto B650eca;
case 0x650ecc:goto L650ecc;
case 0x650ecf:c.instructions+=1;goto B650ecf;
case 0x650ed1:goto L650ed1;
case 0x650ed4:c.instructions+=1;goto B650ed4;
case 0x650ed6:goto L650ed6;
case 0x650ed8:goto L650ed8;
case 0x650ede:goto L650ede;
case 0x650ee0:goto L650ee0;
case 0x650ee2:c.instructions+=5;goto B650ee2;
case 0x650ee5:c.instructions+=4;goto B650ee5;
case 0x650ee8:c.instructions+=3;goto B650ee8;
case 0x650eec:c.instructions+=2;goto B650eec;
case 0x650eef:c.instructions+=1;goto B650eef;
case 0x650ef3:goto L650ef3;
case 0x650ef6:c.instructions+=2;goto B650ef6;
case 0x650efb:c.instructions+=1;goto B650efb;
case 0x650efd:goto L650efd;
case 0x650f00:c.instructions+=5;goto B650f00;
case 0x650f03:c.instructions+=4;goto B650f03;
case 0x650f07:c.instructions+=3;goto B650f07;
case 0x650f0a:c.instructions+=2;goto B650f0a;
case 0x650f0e:c.instructions+=1;goto B650f0e;
case 0x650f10:goto L650f10;
case 0x650f14:c.instructions+=12;goto B650f14;
case 0x650f17:c.instructions+=11;goto B650f17;
case 0x650f1a:c.instructions+=10;goto B650f1a;
case 0x650f1d:c.instructions+=9;goto B650f1d;
case 0x650f23:c.instructions+=8;goto B650f23;
case 0x650f26:c.instructions+=7;goto B650f26;
case 0x650f2a:c.instructions+=6;goto B650f2a;
case 0x650f2b:c.instructions+=5;goto B650f2b;
case 0x650f31:c.instructions+=4;goto B650f31;
case 0x650f32:c.instructions+=3;goto B650f32;
case 0x650f38:c.instructions+=2;goto B650f38;
case 0x650f39:c.instructions+=1;goto B650f39;
case 0x650f3e:goto L650f3e;
case 0x650f40:c.instructions+=1;goto B650f40;
case 0x650f42:goto L650f42;
case 0x650f45:c.instructions+=2;goto B650f45;
case 0x650f47:c.instructions+=1;goto B650f47;
case 0x650f49:goto L650f49;
case 0x650f4c:c.instructions+=2;goto B650f4c;
case 0x650f4e:c.instructions+=1;goto B650f4e;
case 0x650f50:goto L650f50;
case 0x650f53:c.instructions+=4;goto B650f53;
case 0x650f55:c.instructions+=3;goto B650f55;
case 0x650f59:c.instructions+=2;goto B650f59;
case 0x650f5b:c.instructions+=1;goto B650f5b;
case 0x650f5d:goto L650f5d;
case 0x650f5f:c.instructions+=1;goto B650f5f;
case 0x650f61:goto L650f61;
case 0x650f64:c.instructions+=1;goto B650f64;
case 0x650f66:goto L650f66;
case 0x650f68:c.instructions+=1;goto B650f68;
case 0x650f6a:goto L650f6a;
case 0x650f6d:c.instructions+=2;goto B650f6d;
case 0x650f6f:c.instructions+=1;goto B650f6f;
case 0x650f71:goto L650f71;
case 0x650f74:c.instructions+=4;goto B650f74;
case 0x650f76:c.instructions+=3;goto B650f76;
case 0x650f7a:c.instructions+=2;goto B650f7a;
case 0x650f7c:c.instructions+=1;goto B650f7c;
case 0x650f7e:goto L650f7e;
case 0x650f80:c.instructions+=1;goto B650f80;
case 0x650f82:goto L650f82;
case 0x650f85:c.instructions+=1;goto B650f85;
case 0x650f87:goto L650f87;
case 0x650f8b:c.instructions+=1;goto B650f8b;
case 0x650f8d:goto L650f8d;
case 0x650f90:c.instructions+=2;goto B650f90;
case 0x650f91:c.instructions+=1;goto B650f91;
case 0x650f96:goto L650f96;
case 0x650f98:c.instructions+=1;goto B650f98;
case 0x650f9a:goto L650f9a;
case 0x650f9d:c.instructions+=4;goto B650f9d;
case 0x650fa0:c.instructions+=3;goto B650fa0;
case 0x650fa3:c.instructions+=2;goto B650fa3;
case 0x650fa5:c.instructions+=1;goto B650fa5;
case 0x650fab:goto L650fab;
case 0x650fad:c.instructions+=1;goto B650fad;
case 0x650fb3:goto L650fb3;
case 0x650fb6:c.instructions+=3;goto B650fb6;
case 0x650fb9:c.instructions+=2;goto B650fb9;
case 0x650fbc:c.instructions+=1;goto B650fbc;
case 0x650fbe:goto L650fbe;
case 0x650fc1:c.instructions+=2;goto B650fc1;
case 0x650fc5:c.instructions+=1;goto B650fc5;
case 0x650fcb:goto L650fcb;
case 0x650fcf:c.instructions+=1;goto B650fcf;
case 0x650fd1:goto L650fd1;
case 0x650fd4:c.instructions+=3;goto B650fd4;
case 0x650fd8:c.instructions+=2;goto B650fd8;
case 0x650fdb:c.instructions+=1;goto B650fdb;
case 0x650fdd:goto L650fdd;
case 0x650fe0:c.instructions+=2;goto B650fe0;
case 0x650fe2:c.instructions+=1;goto B650fe2;
case 0x650fe4:goto L650fe4;
case 0x650fe7:c.instructions+=3;goto B650fe7;
case 0x650feb:c.instructions+=2;goto B650feb;
case 0x650fee:c.instructions+=1;goto B650fee;
case 0x650ff0:goto L650ff0;
case 0x650ff3:c.instructions+=2;goto B650ff3;
case 0x650ff5:c.instructions+=1;goto B650ff5;
case 0x650ff7:goto L650ff7;
case 0x650ffa:c.instructions+=2;goto B650ffa;
case 0x650ffe:c.instructions+=1;goto B650ffe;
default:missing_instruction(c.pc);}
B650001:L650001:{c.instructions+=3;NFSU2_TR(0x650001);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B650003:{NFSU2_TR(0x650003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650006:{NFSU2_TR(0x650006);
if(r1(R+518)){{goto L65001a;}}
}
B650008:L650008:{c.instructions+=2;NFSU2_TR(0x650008);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B650009:{NFSU2_TR(0x650009);
if(r1(R+518)){{goto L65001a;}}
}
B65000b:L65000b:{c.instructions+=2;NFSU2_TR(0x65000b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65000c:{NFSU2_TR(0x65000c);
if(r1(R+518)){{goto L65001a;}}
}
B65000e:L65000e:{c.instructions+=2;NFSU2_TR(0x65000e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65000f:{NFSU2_TR(0x65000f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65001d;}}
}
B650011:L650011:{c.instructions+=2;NFSU2_TR(0x650011);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B650018:{NFSU2_TR(0x650018);
{goto L65001d;}
}
B65001a:L65001a:{c.instructions+=1;NFSU2_TR(0x65001a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65001d:L65001d:{c.instructions+=11;NFSU2_TR(0x65001d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650020:{NFSU2_TR(0x650020);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650023:{NFSU2_TR(0x650023);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B650025:{NFSU2_TR(0x650025);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B650026:{NFSU2_TR(0x650026);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650029:{NFSU2_TR(0x650029);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65002c:{NFSU2_TR(0x65002c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65002f:{NFSU2_TR(0x65002f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x200ull))));
}
B650035:{NFSU2_TR(0x650035);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650038:{NFSU2_TR(0x650038);
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
B65003a:{NFSU2_TR(0x65003a);
TAIL_STATIC(0x64ffe5u,64f);
}
B65003c:L65003c:{c.instructions+=9;NFSU2_TR(0x65003c);
__builtin_memmove((R+28),(R+28),4);
}
B65003e:{NFSU2_TR(0x65003e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65003f:{NFSU2_TR(0x65003f);
__builtin_memmove((R+20),(R+16),4);
}
B650041:{NFSU2_TR(0x650041);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650044:{NFSU2_TR(0x650044);
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
B650046:{NFSU2_TR(0x650046);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650047:{NFSU2_TR(0x650047);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650048:{NFSU2_TR(0x650048);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650049:{NFSU2_TR(0x650049);
if(r1(R+518)){{goto L6501da;}}
}
B65004f:L65004f:{c.instructions+=2;NFSU2_TR(0x65004f);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x9ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B650053:{NFSU2_TR(0x650053);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6501da;}}
}
B650059:L650059:{c.instructions+=3;NFSU2_TR(0x650059);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65005c:{NFSU2_TR(0x65005c);
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
B65005e:{NFSU2_TR(0x65005e);
if(r1(R+518)){{goto L6501da;}}
}
B650064:L650064:{c.instructions+=2;NFSU2_TR(0x650064);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x9ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B650068:{NFSU2_TR(0x650068);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6501da;}}
}
B65006e:L65006e:{c.instructions+=4;NFSU2_TR(0x65006e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B650071:{NFSU2_TR(0x650071);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B650074:{NFSU2_TR(0x650074);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650076:{NFSU2_TR(0x650076);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650082;}}
}
B650078:L650078:{c.instructions+=3;NFSU2_TR(0x650078);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65007b:{NFSU2_TR(0x65007b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65007d:{NFSU2_TR(0x65007d);
{goto L6501eb;}
}
B650082:L650082:{c.instructions+=4;NFSU2_TR(0x650082);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7b3e18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B650089:{NFSU2_TR(0x650089);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7b3e18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B650090:{NFSU2_TR(0x650090);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650092:{NFSU2_TR(0x650092);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L650096;}}
}
B650094:L650094:{c.instructions+=1;NFSU2_TR(0x650094);
__builtin_memmove((R+4),(R+0),4);
}
B650096:L650096:{c.instructions+=6;NFSU2_TR(0x650096);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7b3e1cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65009d:{NFSU2_TR(0x65009d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7b3e1cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+8))));
}
B6500a4:{NFSU2_TR(0x6500a4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6500a6:{NFSU2_TR(0x6500a6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6500a7:{NFSU2_TR(0x6500a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6500a9:{NFSU2_TR(0x6500a9);
if(r1(R+518)){{goto L6500b6;}}
}
B6500ab:L6500ab:{c.instructions+=3;NFSU2_TR(0x6500ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6500ae:{NFSU2_TR(0x6500ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6500b1:{NFSU2_TR(0x6500b1);
{goto L6501eb;}
}
B6500b6:L6500b6:{c.instructions+=4;NFSU2_TR(0x6500b6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6500b8:{NFSU2_TR(0x6500b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6500b9:{NFSU2_TR(0x6500b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6500bb:{NFSU2_TR(0x6500bb);
if(r1(R+518)){{goto L65010f;}}
}
B6500bd:L6500bd:{c.instructions+=2;NFSU2_TR(0x6500bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6500bf:{NFSU2_TR(0x6500bf);
if(r1(R+518)){{goto L650101;}}
}
B6500c1:L6500c1:{c.instructions+=4;NFSU2_TR(0x6500c1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6500c3:{NFSU2_TR(0x6500c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6500c4:{NFSU2_TR(0x6500c4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6500c6:{NFSU2_TR(0x6500c6);
if(r1(R+518)){{goto L6500f3;}}
}
B6500c8:L6500c8:{c.instructions+=2;NFSU2_TR(0x6500c8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6500cb:{NFSU2_TR(0x6500cb);
if(r1(R+518)){{goto L6500e5;}}
}
B6500cd:L6500cd:{c.instructions+=2;NFSU2_TR(0x6500cd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6500d0:{NFSU2_TR(0x6500d0);
if(r1(R+518)){{goto L6500db;}}
}
B6500d2:L6500d2:{c.instructions+=2;NFSU2_TR(0x6500d2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6500d5:{NFSU2_TR(0x6500d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6501eb;}}
}
B6500db:L6500db:{c.instructions+=3;NFSU2_TR(0x6500db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6500de:{NFSU2_TR(0x6500de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6500e0:{NFSU2_TR(0x6500e0);
{goto L6501eb;}
}
B6500e5:L6500e5:{c.instructions+=3;NFSU2_TR(0x6500e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6500e8:{NFSU2_TR(0x6500e8);
u8 U[4];
w4(U+0,u32(0x7ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6500ee:{NFSU2_TR(0x6500ee);
{goto L6501eb;}
}
B6500f3:L6500f3:{c.instructions+=3;NFSU2_TR(0x6500f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6500f6:{NFSU2_TR(0x6500f6);
u8 U[4];
w4(U+0,u32(0x6ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6500fc:{NFSU2_TR(0x6500fc);
{goto L6501eb;}
}
B650101:L650101:{c.instructions+=3;NFSU2_TR(0x650101);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650104:{NFSU2_TR(0x650104);
u8 U[4];
w4(U+0,u32(0x5ull));
s4(u32(r4(R+0)),r4(U+0));
}
B65010a:{NFSU2_TR(0x65010a);
{goto L6501eb;}
}
B65010f:L65010f:{c.instructions+=2;NFSU2_TR(0x65010f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B650111:{NFSU2_TR(0x650111);
if(r1(R+518)){{goto L650155;}}
}
B650113:L650113:{c.instructions+=2;NFSU2_TR(0x650113);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650115:{NFSU2_TR(0x650115);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6500dbu);}goto L6500db;}}
}
B650117:L650117:{c.instructions+=2;NFSU2_TR(0x650117);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65011a:{NFSU2_TR(0x65011a);
if(r1(R+518)){{goto L650147;}}
}
B65011c:L65011c:{c.instructions+=2;NFSU2_TR(0x65011c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65011f:{NFSU2_TR(0x65011f);
if(r1(R+518)){{goto L650139;}}
}
B650121:L650121:{c.instructions+=2;NFSU2_TR(0x650121);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650124:{NFSU2_TR(0x650124);
if(r1(R+518)){{goto L65012f;}}
}
B650126:L650126:{c.instructions+=2;NFSU2_TR(0x650126);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650129:{NFSU2_TR(0x650129);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6501eb;}}
}
B65012f:L65012f:{c.instructions+=3;NFSU2_TR(0x65012f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650132:{NFSU2_TR(0x650132);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B650134:{NFSU2_TR(0x650134);
{goto L6501eb;}
}
B650139:L650139:{c.instructions+=3;NFSU2_TR(0x650139);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65013c:{NFSU2_TR(0x65013c);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+0)),r4(U+0));
}
B650142:{NFSU2_TR(0x650142);
{goto L6501eb;}
}
B650147:L650147:{c.instructions+=3;NFSU2_TR(0x650147);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65014a:{NFSU2_TR(0x65014a);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+0)),r4(U+0));
}
B650150:{NFSU2_TR(0x650150);
{goto L6501eb;}
}
B650155:L650155:{c.instructions+=4;NFSU2_TR(0x650155);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650157:{NFSU2_TR(0x650157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B650158:{NFSU2_TR(0x650158);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65015a:{NFSU2_TR(0x65015a);
if(r1(R+518)){{goto L65019f;}}
}
B65015c:L65015c:{c.instructions+=2;NFSU2_TR(0x65015c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65015e:{NFSU2_TR(0x65015e);
if(r1(R+518)){{goto L650194;}}
}
B650160:L650160:{c.instructions+=2;NFSU2_TR(0x650160);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650162:{NFSU2_TR(0x650162);
if(r1(R+518)){{goto L650189;}}
}
B650164:L650164:{c.instructions+=2;NFSU2_TR(0x650164);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650167:{NFSU2_TR(0x650167);
if(r1(R+518)){{goto L650189;}}
}
B650169:L650169:{c.instructions+=2;NFSU2_TR(0x650169);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65016c:{NFSU2_TR(0x65016c);
if(r1(R+518)){{goto L65017e;}}
}
B65016e:L65016e:{c.instructions+=2;NFSU2_TR(0x65016e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650171:{NFSU2_TR(0x650171);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6501eb;}}
}
B650173:L650173:{c.instructions+=3;NFSU2_TR(0x650173);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650176:{NFSU2_TR(0x650176);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+0)),r4(U+0));
}
B65017c:{NFSU2_TR(0x65017c);
{goto L6501eb;}
}
B65017e:L65017e:{c.instructions+=3;NFSU2_TR(0x65017e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650181:{NFSU2_TR(0x650181);
u8 U[4];
w4(U+0,u32(0xbull));
s4(u32(r4(R+0)),r4(U+0));
}
B650187:{NFSU2_TR(0x650187);
{goto L6501eb;}
}
B650189:L650189:{c.instructions+=3;NFSU2_TR(0x650189);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65018c:{NFSU2_TR(0x65018c);
u8 U[4];
w4(U+0,u32(0xaull));
s4(u32(r4(R+0)),r4(U+0));
}
B650192:{NFSU2_TR(0x650192);
{goto L6501eb;}
}
B650194:L650194:{c.instructions+=3;NFSU2_TR(0x650194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650197:{NFSU2_TR(0x650197);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B65019d:{NFSU2_TR(0x65019d);
{goto L6501eb;}
}
B65019f:L65019f:{c.instructions+=2;NFSU2_TR(0x65019f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6501a1:{NFSU2_TR(0x6501a1);
if(r1(R+518)){{goto L6501da;}}
}
B6501a3:L6501a3:{c.instructions+=1;NFSU2_TR(0x6501a3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6501a5:L6501a5:{c.instructions+=3;NFSU2_TR(0x6501a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6501a7:{NFSU2_TR(0x6501a7);
__builtin_memmove((R+4),(R+24),4);
}
B6501a9:{NFSU2_TR(0x6501a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6501c2;}}
}
B6501ab:L6501ab:{c.instructions+=2;NFSU2_TR(0x6501ab);
__builtin_memmove((R+4),(R+28),4);
}
B6501ad:{NFSU2_TR(0x6501ad);
__builtin_memmove((R+0),(R+24),4);
}
B6501af:L6501af:{c.instructions+=2;NFSU2_TR(0x6501af);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6501b2:{NFSU2_TR(0x6501b2);
if(r1(R+518)){{goto L6501e6;}}
}
B6501b4:L6501b4:{c.instructions+=2;NFSU2_TR(0x6501b4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6501b7:{NFSU2_TR(0x6501b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6501c6;}}
}
B6501b9:L6501b9:{c.instructions+=2;NFSU2_TR(0x6501b9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6501bb:{NFSU2_TR(0x6501bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6501d4;}}
}
B6501bd:L6501bd:{c.instructions+=2;NFSU2_TR(0x6501bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6501c0:{NFSU2_TR(0x6501c0);
{goto L6501d2;}
}
B6501c2:L6501c2:{c.instructions+=2;NFSU2_TR(0x6501c2);
__builtin_memmove((R+0),(R+28),4);
}
B6501c4:{NFSU2_TR(0x6501c4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6501afu);}goto L6501af;}
}
B6501c6:L6501c6:{c.instructions+=2;NFSU2_TR(0x6501c6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6501c9:{NFSU2_TR(0x6501c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6501d4;}}
}
B6501cb:L6501cb:{c.instructions+=2;NFSU2_TR(0x6501cb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6501cd:{NFSU2_TR(0x6501cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6501d4;}}
}
B6501cf:L6501cf:{c.instructions+=1;NFSU2_TR(0x6501cf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6501d2:L6501d2:{c.instructions+=1;NFSU2_TR(0x6501d2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6501e6;}}
}
B6501d4:L6501d4:{c.instructions+=3;NFSU2_TR(0x6501d4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6501d5:{NFSU2_TR(0x6501d5);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6501d8:{NFSU2_TR(0x6501d8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6501a5u);}goto L6501a5;}}
}
B6501da:L6501da:{c.instructions+=1;NFSU2_TR(0x6501da);
w4(R+0,u32(0x80004005ull));
}
B6501df:L6501df:{c.instructions+=5;NFSU2_TR(0x6501df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6501e0:{NFSU2_TR(0x6501e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6501e1:{NFSU2_TR(0x6501e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6501e2:{NFSU2_TR(0x6501e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6501e3:{NFSU2_TR(0x6501e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6501e6:L6501e6:{c.instructions+=2;NFSU2_TR(0x6501e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6501e9:{NFSU2_TR(0x6501e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6501eb:L6501eb:{c.instructions+=2;NFSU2_TR(0x6501eb);
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
B6501ed:{NFSU2_TR(0x6501ed);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6501dfu);}goto L6501df;}
}
B6501ef:L6501ef:{c.instructions+=5;NFSU2_TR(0x6501ef);
__builtin_memmove((R+28),(R+28),4);
}
B6501f1:{NFSU2_TR(0x6501f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6501f2:{NFSU2_TR(0x6501f2);
__builtin_memmove((R+20),(R+16),4);
}
B6501f4:{NFSU2_TR(0x6501f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6501f7:{NFSU2_TR(0x6501f7);
{goto L65020e;}
}
B6501f9:L6501f9:{c.instructions+=3;NFSU2_TR(0x6501f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6501fc:{NFSU2_TR(0x6501fc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6501ff:{NFSU2_TR(0x6501ff);
if(r1(R+518)){{goto L650219;}}
}
B650201:L650201:{c.instructions+=2;NFSU2_TR(0x650201);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650204:{NFSU2_TR(0x650204);
if(r1(R+518)){{goto L650219;}}
}
B650206:L650206:{c.instructions+=2;NFSU2_TR(0x650206);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650209:{NFSU2_TR(0x650209);
if(r1(R+518)){{goto L650219;}}
}
B65020b:L65020b:{c.instructions+=1;NFSU2_TR(0x65020b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65020e:L65020e:{c.instructions+=2;NFSU2_TR(0x65020e);
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
B650210:{NFSU2_TR(0x650210);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6501f9u);}goto L6501f9;}}
}
B650212:L650212:{c.instructions+=1;NFSU2_TR(0x650212);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650215:L650215:{c.instructions+=2;NFSU2_TR(0x650215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B650216:{NFSU2_TR(0x650216);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B650219:L650219:{c.instructions+=6;NFSU2_TR(0x650219);
u8 U[4];
w4(U+0,u32(0x7b3f08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65021e:{NFSU2_TR(0x65021e);
u8 U[4];
w4(U+0,u32(0xbf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650223:{NFSU2_TR(0x650223);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B650226:{NFSU2_TR(0x650226);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650227:{NFSU2_TR(0x650227);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650228:{NFSU2_TR(0x650228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65022dull));
TAIL_STATIC(0x64f52au,64f);
}
B65022d:L65022d:{c.instructions+=3;NFSU2_TR(0x65022d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B650230:{NFSU2_TR(0x650230);
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
B650232:{NFSU2_TR(0x650232);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650215u);}goto L650215;}
}
B650234:L650234:{c.instructions+=13;NFSU2_TR(0x650234);
__builtin_memmove((R+28),(R+28),4);
}
B650236:{NFSU2_TR(0x650236);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650237:{NFSU2_TR(0x650237);
__builtin_memmove((R+20),(R+16),4);
}
B650239:{NFSU2_TR(0x650239);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65023a:{NFSU2_TR(0x65023a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65023b:{NFSU2_TR(0x65023b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65023c:{NFSU2_TR(0x65023c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65023f:{NFSU2_TR(0x65023f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650240:{NFSU2_TR(0x650240);
__builtin_memmove((R+12),(R+4),4);
}
B650242:{NFSU2_TR(0x650242);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B650244:{NFSU2_TR(0x650244);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650246:{NFSU2_TR(0x650246);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650249:{NFSU2_TR(0x650249);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650252;}}
}
B65024b:L65024b:{c.instructions+=2;NFSU2_TR(0x65024b);
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
B65024d:{NFSU2_TR(0x65024d);
{goto L65033c;}
}
B650252:L650252:{c.instructions+=3;NFSU2_TR(0x650252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650255:{NFSU2_TR(0x650255);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B650256:{NFSU2_TR(0x650256);
if(r1(R+518)){{goto L650301;}}
}
B65025c:L65025c:{c.instructions+=4;NFSU2_TR(0x65025c);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65025e:{NFSU2_TR(0x65025e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65025f:{NFSU2_TR(0x65025f);
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B650261:{NFSU2_TR(0x650261);
if(r1(R+518)){{goto L6502f6;}}
}
B650267:L650267:{c.instructions+=3;NFSU2_TR(0x650267);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B650268:{NFSU2_TR(0x650268);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B650269:{NFSU2_TR(0x650269);
if(r1(R+518)){{goto L6502d1;}}
}
B65026b:L65026b:{c.instructions+=2;NFSU2_TR(0x65026b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65026c:{NFSU2_TR(0x65026c);
if(r1(R+518)){{goto L65028a;}}
}
B65026e:L65026e:{c.instructions+=3;NFSU2_TR(0x65026e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B65026f:{NFSU2_TR(0x65026f);
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
B650270:{NFSU2_TR(0x650270);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65033a;}}
}
B650276:L650276:{c.instructions+=2;NFSU2_TR(0x650276);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650279:{NFSU2_TR(0x650279);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65027c:L65027c:{c.instructions+=2;NFSU2_TR(0x65027c);
__builtin_memmove((R+4),(R+12),4);
}
B65027e:{NFSU2_TR(0x65027e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650283ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650234u);}goto L650234;}
}
B650283:L650283:{c.instructions+=2;NFSU2_TR(0x650283);
__builtin_memmove((R+28),(R+0),4);
}
B650285:{NFSU2_TR(0x650285);
{goto L65033a;}
}
B65028a:L65028a:{c.instructions+=7;NFSU2_TR(0x65028a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65028d:{NFSU2_TR(0x65028d);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B650291:{NFSU2_TR(0x650291);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B650294:{NFSU2_TR(0x650294);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B650297:{NFSU2_TR(0x650297);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650299:{NFSU2_TR(0x650299);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65029a:{NFSU2_TR(0x65029a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6502be;}}
}
B65029c:L65029c:{c.instructions+=2;NFSU2_TR(0x65029c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65035bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6502a3:{NFSU2_TR(0x6502a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x650343ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6502aa:L6502aa:{c.instructions+=2;NFSU2_TR(0x6502aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6502ac:{NFSU2_TR(0x6502ac);
{goto L6502be;}
}
B6502ae:L6502ae:{c.instructions+=3;NFSU2_TR(0x6502ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6502b0:{NFSU2_TR(0x6502b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6502b1:{NFSU2_TR(0x6502b1);
{goto L6502be;}
}
B6502b3:L6502b3:{c.instructions+=2;NFSU2_TR(0x6502b3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6502b5:{NFSU2_TR(0x6502b5);
{goto L6502b9;}
}
B6502b7:L6502b7:{c.instructions+=1;NFSU2_TR(0x6502b7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6502b9:L6502b9:{c.instructions+=2;NFSU2_TR(0x6502b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6502ba:{NFSU2_TR(0x6502ba);
{goto L6502be;}
}
B6502bc:L6502bc:{c.instructions+=1;NFSU2_TR(0x6502bc);
__builtin_memmove((R+0),(R+4),4);
}
B6502be:L6502be:{c.instructions+=2;NFSU2_TR(0x6502be);
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
B6502c0:{NFSU2_TR(0x6502c0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65033a;}}
}
B6502c2:L6502c2:{c.instructions+=2;NFSU2_TR(0x6502c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6502c5:{NFSU2_TR(0x6502c5);
__builtin_memmove((R+8),(R+28),4);
}
B6502c7:L6502c7:{c.instructions+=4;NFSU2_TR(0x6502c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6502c9:{NFSU2_TR(0x6502c9);
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6502cc:{NFSU2_TR(0x6502cc);
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
B6502cd:{NFSU2_TR(0x6502cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6502c7u);}goto L6502c7;}}
}
B6502cf:L6502cf:{c.instructions+=1;NFSU2_TR(0x6502cf);
{goto L65033a;}
}
B6502d1:L6502d1:{c.instructions+=3;NFSU2_TR(0x6502d1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6502d3:{NFSU2_TR(0x6502d3);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6502d6:{NFSU2_TR(0x6502d6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65033a;}}
}
B6502d8:L6502d8:{c.instructions+=7;NFSU2_TR(0x6502d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6502db:{NFSU2_TR(0x6502db);
__builtin_memmove((R+0),(R+28),4);
}
B6502dd:{NFSU2_TR(0x6502dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6502e0:{NFSU2_TR(0x6502e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6502e3:{NFSU2_TR(0x6502e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6502e4:{NFSU2_TR(0x6502e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6502e7:{NFSU2_TR(0x6502e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6502ecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650234u);}goto L650234;}
}
B6502ec:L6502ec:{c.instructions+=4;NFSU2_TR(0x6502ec);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6502ee:{NFSU2_TR(0x6502ee);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6502ef:{NFSU2_TR(0x6502ef);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6502f2:{NFSU2_TR(0x6502f2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6502d8u);}goto L6502d8;}}
}
B6502f4:L6502f4:{c.instructions+=1;NFSU2_TR(0x6502f4);
{goto L65033a;}
}
B6502f6:L6502f6:{c.instructions+=3;NFSU2_TR(0x6502f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6502f9:{NFSU2_TR(0x6502f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6502fc:{NFSU2_TR(0x6502fc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65027cu);}goto L65027c;}
}
B650301:L650301:{c.instructions+=2;NFSU2_TR(0x650301);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650305:{NFSU2_TR(0x650305);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650323;}}
}
B650307:L650307:{c.instructions+=7;NFSU2_TR(0x650307);
__builtin_memmove((R+0),(R+28),4);
}
B650309:{NFSU2_TR(0x650309);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65030c:{NFSU2_TR(0x65030c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B65030f:{NFSU2_TR(0x65030f);
__builtin_memmove((R+4),(R+12),4);
}
B650311:{NFSU2_TR(0x650311);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650312:{NFSU2_TR(0x650312);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650315:{NFSU2_TR(0x650315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65031aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650234u);}goto L650234;}
}
B65031a:L65031a:{c.instructions+=4;NFSU2_TR(0x65031a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65031d:{NFSU2_TR(0x65031d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B65031f:{NFSU2_TR(0x65031f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650321:{NFSU2_TR(0x650321);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650301u);}goto L650301;}}
}
B650323:L650323:{c.instructions+=2;NFSU2_TR(0x650323);
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
B650325:{NFSU2_TR(0x650325);
if(r1(R+518)){{goto L65033a;}}
}
B650327:L650327:{c.instructions+=7;NFSU2_TR(0x650327);
__builtin_memmove((R+0),(R+28),4);
}
B650329:{NFSU2_TR(0x650329);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65032c:{NFSU2_TR(0x65032c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B65032f:{NFSU2_TR(0x65032f);
__builtin_memmove((R+4),(R+12),4);
}
B650331:{NFSU2_TR(0x650331);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650332:{NFSU2_TR(0x650332);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650333:{NFSU2_TR(0x650333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650338ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650234u);}goto L650234;}
}
B650338:L650338:{c.instructions+=1;NFSU2_TR(0x650338);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65033a:L65033a:{c.instructions+=1;NFSU2_TR(0x65033a);
__builtin_memmove((R+0),(R+28),4);
}
B65033c:L65033c:{c.instructions+=5;NFSU2_TR(0x65033c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65033d:{NFSU2_TR(0x65033d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65033e:{NFSU2_TR(0x65033e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65033f:{NFSU2_TR(0x65033f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B650340:{NFSU2_TR(0x650340);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B650379:L650379:{c.instructions+=7;NFSU2_TR(0x650379);
__builtin_memmove((R+28),(R+28),4);
}
B65037b:{NFSU2_TR(0x65037b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65037c:{NFSU2_TR(0x65037c);
__builtin_memmove((R+20),(R+16),4);
}
B65037e:{NFSU2_TR(0x65037e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650381:{NFSU2_TR(0x650381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B650383:{NFSU2_TR(0x650383);
w1(R+512,u8((r4(R+4))<(u32(0x0ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B650386:{NFSU2_TR(0x650386);
if(r1(R+518)){{goto L6503bc;}}
}
B650388:L650388:{c.instructions+=2;NFSU2_TR(0x650388);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B650389:{NFSU2_TR(0x650389);
if(r1(R+518)){{goto L6503b2;}}
}
B65038b:L65038b:{c.instructions+=2;NFSU2_TR(0x65038b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65038c:{NFSU2_TR(0x65038c);
if(r1(R+518)){{goto L65039d;}}
}
B65038e:L65038e:{c.instructions+=2;NFSU2_TR(0x65038e);
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
B65038f:{NFSU2_TR(0x65038f);
if(r1(R+518)){{goto L650398;}}
}
B650391:L650391:{c.instructions+=2;NFSU2_TR(0x650391);
w4(R+0,u32(0x80004005ull));
}
B650396:{NFSU2_TR(0x650396);
{goto L6503d3;}
}
B650398:L650398:{c.instructions+=2;NFSU2_TR(0x650398);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B65039b:{NFSU2_TR(0x65039b);
{goto L6503b5;}
}
B65039d:L65039d:{c.instructions+=5;NFSU2_TR(0x65039d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6503a0:{NFSU2_TR(0x6503a0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6503a2:{NFSU2_TR(0x6503a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6503a5:{NFSU2_TR(0x6503a5);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6503a8:{NFSU2_TR(0x6503a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6503b5;}}
}
B6503aa:L6503aa:{c.instructions+=2;NFSU2_TR(0x6503aa);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6503b0:{NFSU2_TR(0x6503b0);
{goto L6503b5;}
}
B6503b2:L6503b2:{c.instructions+=1;NFSU2_TR(0x6503b2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6503b5:L6503b5:{c.instructions+=3;NFSU2_TR(0x6503b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6503b8:{NFSU2_TR(0x6503b8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6503ba:{NFSU2_TR(0x6503ba);
{goto L6503d1;}
}
B6503bc:L6503bc:{c.instructions+=2;NFSU2_TR(0x6503bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6503c0:{NFSU2_TR(0x6503c0);
if(r1(R+518)){{goto L6503c6;}}
}
B6503c2:L6503c2:{c.instructions+=2;NFSU2_TR(0x6503c2);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6503c4:{NFSU2_TR(0x6503c4);
{goto L6503c8;}
}
B6503c6:L6503c6:{c.instructions+=1;NFSU2_TR(0x6503c6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6503c8:L6503c8:{c.instructions+=4;NFSU2_TR(0x6503c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6503cb:{NFSU2_TR(0x6503cb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6503cd:{NFSU2_TR(0x6503cd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6503cf:{NFSU2_TR(0x6503cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6503d1:L6503d1:{c.instructions+=1;NFSU2_TR(0x6503d1);
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
B6503d3:L6503d3:{c.instructions+=2;NFSU2_TR(0x6503d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6503d4:{NFSU2_TR(0x6503d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6503d7:L6503d7:{c.instructions+=7;NFSU2_TR(0x6503d7);
__builtin_memmove((R+28),(R+28),4);
}
B6503d9:{NFSU2_TR(0x6503d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6503da:{NFSU2_TR(0x6503da);
__builtin_memmove((R+20),(R+16),4);
}
B6503dc:{NFSU2_TR(0x6503dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6503dd:{NFSU2_TR(0x6503dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6503de:{NFSU2_TR(0x6503de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6503e1:{NFSU2_TR(0x6503e1);
__builtin_memmove((R+12),(R+4),4);
}
B6503e3:L6503e3:{c.instructions+=2;NFSU2_TR(0x6503e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6503e5:{NFSU2_TR(0x6503e5);
if(r1(R+518)){{goto L65044b;}}
}
B6503e7:L6503e7:{c.instructions+=3;NFSU2_TR(0x6503e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6503ea:{NFSU2_TR(0x6503ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6503ed:{NFSU2_TR(0x6503ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650402;}}
}
B6503ef:L6503ef:{c.instructions+=3;NFSU2_TR(0x6503ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6503f2:{NFSU2_TR(0x6503f2);
__builtin_memmove((R+4),(R+12),4);
}
B6503f4:{NFSU2_TR(0x6503f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6503f9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6503d7u);}goto L6503d7;}
}
B6503f9:L6503f9:{c.instructions+=2;NFSU2_TR(0x6503f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6503fb:{NFSU2_TR(0x6503fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650446;}}
}
B6503fd:L6503fd:{c.instructions+=2;NFSU2_TR(0x6503fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B650400:{NFSU2_TR(0x650400);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6503e3u);}goto L6503e3;}
}
B650402:L650402:{c.instructions+=2;NFSU2_TR(0x650402);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650405:{NFSU2_TR(0x650405);
if(r1(R+518)){{goto L650427;}}
}
B650407:L650407:{c.instructions+=2;NFSU2_TR(0x650407);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65040a:{NFSU2_TR(0x65040a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65044b;}}
}
B65040c:L65040c:{c.instructions+=3;NFSU2_TR(0x65040c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65040f:{NFSU2_TR(0x65040f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650412:{NFSU2_TR(0x650412);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L65043c;}}
}
B650414:L650414:{c.instructions+=2;NFSU2_TR(0x650414);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x16ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B650417:{NFSU2_TR(0x650417);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L650422;}}
}
B650419:L650419:{c.instructions+=2;NFSU2_TR(0x650419);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65041b:{NFSU2_TR(0x65041b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L650446;}}
}
B65041d:L65041d:{c.instructions+=2;NFSU2_TR(0x65041d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650420:{NFSU2_TR(0x650420);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L650432;}}
}
B650422:L650422:{c.instructions+=2;NFSU2_TR(0x650422);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B650425:{NFSU2_TR(0x650425);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6503e3u);}goto L6503e3;}
}
B650427:L650427:{c.instructions+=4;NFSU2_TR(0x650427);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B650429:{NFSU2_TR(0x650429);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x6ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65042d:{NFSU2_TR(0x65042d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B650430:{NFSU2_TR(0x650430);
{goto L65044d;}
}
B650432:L650432:{c.instructions+=2;NFSU2_TR(0x650432);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650435:{NFSU2_TR(0x650435);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L650446;}}
}
B650437:L650437:{c.instructions+=2;NFSU2_TR(0x650437);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65043a:{NFSU2_TR(0x65043a);
{goto L650444;}
}
B65043c:L65043c:{c.instructions+=2;NFSU2_TR(0x65043c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x19ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B65043f:{NFSU2_TR(0x65043f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L650446;}}
}
B650441:L650441:{c.instructions+=1;NFSU2_TR(0x650441);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1aull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1aull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650444:L650444:{c.instructions+=1;NFSU2_TR(0x650444);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65044b;}}
}
B650446:L650446:{c.instructions+=3;NFSU2_TR(0x650446);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B650448:{NFSU2_TR(0x650448);
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
B650449:{NFSU2_TR(0x650449);
{goto L65044d;}
}
B65044b:L65044b:{c.instructions+=1;NFSU2_TR(0x65044b);
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
B65044d:L65044d:{c.instructions+=4;NFSU2_TR(0x65044d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65044e:{NFSU2_TR(0x65044e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65044f:{NFSU2_TR(0x65044f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B650450:{NFSU2_TR(0x650450);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B650453:L650453:{c.instructions+=7;NFSU2_TR(0x650453);
__builtin_memmove((R+28),(R+28),4);
}
B650455:{NFSU2_TR(0x650455);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650456:{NFSU2_TR(0x650456);
__builtin_memmove((R+20),(R+16),4);
}
B650458:{NFSU2_TR(0x650458);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650459:{NFSU2_TR(0x650459);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65045c:{NFSU2_TR(0x65045c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65045d:{NFSU2_TR(0x65045d);
__builtin_memmove((R+28),(R+4),4);
}
B65045f:L65045f:{c.instructions+=2;NFSU2_TR(0x65045f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650461:{NFSU2_TR(0x650461);
if(r1(R+518)){{goto L650568;}}
}
B650467:L650467:{c.instructions+=3;NFSU2_TR(0x650467);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65046a:{NFSU2_TR(0x65046a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65046d:{NFSU2_TR(0x65046d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650486;}}
}
B65046f:L65046f:{c.instructions+=3;NFSU2_TR(0x65046f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650472:{NFSU2_TR(0x650472);
__builtin_memmove((R+4),(R+28),4);
}
B650474:{NFSU2_TR(0x650474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650479ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650453u);}goto L650453;}
}
B650479:L650479:{c.instructions+=2;NFSU2_TR(0x650479);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65047b:{NFSU2_TR(0x65047b);
if(r1(R+518)){{goto L650564;}}
}
B650481:L650481:{c.instructions+=2;NFSU2_TR(0x650481);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B650484:{NFSU2_TR(0x650484);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65045fu);}goto L65045f;}
}
B650486:L650486:{c.instructions+=2;NFSU2_TR(0x650486);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650489:{NFSU2_TR(0x650489);
if(r1(R+518)){{goto L6504da;}}
}
B65048b:L65048b:{c.instructions+=2;NFSU2_TR(0x65048b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65048e:{NFSU2_TR(0x65048e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650568;}}
}
B650494:L650494:{c.instructions+=3;NFSU2_TR(0x650494);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650497:{NFSU2_TR(0x650497);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B65049a:{NFSU2_TR(0x65049a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L650548;}}
}
B6504a0:L6504a0:{c.instructions+=2;NFSU2_TR(0x6504a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6504a3:{NFSU2_TR(0x6504a3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L650564;}}
}
B6504a9:L6504a9:{c.instructions+=2;NFSU2_TR(0x6504a9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6504ac:{NFSU2_TR(0x6504ac);
if(r1(R+518)){{goto L650564;}}
}
B6504b2:L6504b2:{c.instructions+=2;NFSU2_TR(0x6504b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6504b5:{NFSU2_TR(0x6504b5);
if(r1(R+518)){{goto L6504e8;}}
}
B6504b7:L6504b7:{c.instructions+=2;NFSU2_TR(0x6504b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6504ba:{NFSU2_TR(0x6504ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650548;}}
}
B6504c0:L6504c0:{c.instructions+=3;NFSU2_TR(0x6504c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6504c3:{NFSU2_TR(0x6504c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6504c5:{NFSU2_TR(0x6504c5);
if(r1(R+518)){{goto L650564;}}
}
B6504cb:L6504cb:{c.instructions+=2;NFSU2_TR(0x6504cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6504cf:{NFSU2_TR(0x6504cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650564;}}
}
B6504d5:L6504d5:{c.instructions+=2;NFSU2_TR(0x6504d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6504d8:{NFSU2_TR(0x6504d8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65045fu);}goto L65045f;}
}
B6504da:L6504da:{c.instructions+=4;NFSU2_TR(0x6504da);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6504dc:{NFSU2_TR(0x6504dc);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x6ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6504e0:{NFSU2_TR(0x6504e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6504e3:{NFSU2_TR(0x6504e3);
{goto L65056b;}
}
B6504e8:L6504e8:{c.instructions+=5;NFSU2_TR(0x6504e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6504eb:{NFSU2_TR(0x6504eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6504ee:{NFSU2_TR(0x6504ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6504f1:{NFSU2_TR(0x6504f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x46ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x46ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6504f4:{NFSU2_TR(0x6504f4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L650511;}}
}
B6504f6:L6504f6:{c.instructions+=2;NFSU2_TR(0x6504f6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x44ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6504f9:{NFSU2_TR(0x6504f9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L650564;}}
}
B6504fb:L6504fb:{c.instructions+=2;NFSU2_TR(0x6504fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6504fe:{NFSU2_TR(0x6504fe);
if(r1(R+518)){{goto L650564;}}
}
B650500:L650500:{c.instructions+=2;NFSU2_TR(0x650500);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650503:{NFSU2_TR(0x650503);
if(r1(R+518)){{goto L650564;}}
}
B650505:L650505:{c.instructions+=2;NFSU2_TR(0x650505);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650508:{NFSU2_TR(0x650508);
if(r1(R+518)){{goto L650564;}}
}
B65050a:L65050a:{c.instructions+=2;NFSU2_TR(0x65050a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65050d:{NFSU2_TR(0x65050d);
if(r1(R+518)){{goto L650564;}}
}
B65050f:L65050f:{c.instructions+=1;NFSU2_TR(0x65050f);
{goto L65052f;}
}
B650511:L650511:{c.instructions+=2;NFSU2_TR(0x650511);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x49ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x49ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B650514:{NFSU2_TR(0x650514);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65052f;}}
}
B650516:L650516:{c.instructions+=2;NFSU2_TR(0x650516);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650519:{NFSU2_TR(0x650519);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L650564;}}
}
B65051b:L65051b:{c.instructions+=2;NFSU2_TR(0x65051b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65051e:{NFSU2_TR(0x65051e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65052f;}}
}
B650520:L650520:{c.instructions+=2;NFSU2_TR(0x650520);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x50ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650523:{NFSU2_TR(0x650523);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L650564;}}
}
B650525:L650525:{c.instructions+=2;NFSU2_TR(0x650525);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x52ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x52ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650528:{NFSU2_TR(0x650528);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65052f;}}
}
B65052a:L65052a:{c.instructions+=2;NFSU2_TR(0x65052a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x55ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x55ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65052d:{NFSU2_TR(0x65052d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L650564;}}
}
B65052f:L65052f:{c.instructions+=4;NFSU2_TR(0x65052f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650532:{NFSU2_TR(0x650532);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650535:{NFSU2_TR(0x650535);
__builtin_memmove((R+4),(R+28),4);
}
B650537:{NFSU2_TR(0x650537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65053cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650453u);}goto L650453;}
}
B65053c:L65053c:{c.instructions+=2;NFSU2_TR(0x65053c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65053e:{NFSU2_TR(0x65053e);
if(r1(R+518)){{goto L650564;}}
}
B650540:L650540:{c.instructions+=3;NFSU2_TR(0x650540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650543:{NFSU2_TR(0x650543);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650546:{NFSU2_TR(0x650546);
{goto L650559;}
}
B650548:L650548:{c.instructions+=3;NFSU2_TR(0x650548);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65054b:{NFSU2_TR(0x65054b);
__builtin_memmove((R+4),(R+28),4);
}
B65054d:{NFSU2_TR(0x65054d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650552ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650453u);}goto L650453;}
}
B650552:L650552:{c.instructions+=2;NFSU2_TR(0x650552);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650554:{NFSU2_TR(0x650554);
if(r1(R+518)){{goto L650564;}}
}
B650556:L650556:{c.instructions+=1;NFSU2_TR(0x650556);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650559:L650559:{c.instructions+=2;NFSU2_TR(0x650559);
__builtin_memmove((R+4),(R+28),4);
}
B65055b:{NFSU2_TR(0x65055b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650560ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650453u);}goto L650453;}
}
B650560:L650560:{c.instructions+=2;NFSU2_TR(0x650560);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650562:{NFSU2_TR(0x650562);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650568;}}
}
B650564:L650564:{c.instructions+=2;NFSU2_TR(0x650564);
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
B650566:{NFSU2_TR(0x650566);
{goto L65056b;}
}
B650568:L650568:{c.instructions+=2;NFSU2_TR(0x650568);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65056a:{NFSU2_TR(0x65056a);
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
B65056b:L65056b:{c.instructions+=4;NFSU2_TR(0x65056b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65056c:{NFSU2_TR(0x65056c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65056d:{NFSU2_TR(0x65056d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65056e:{NFSU2_TR(0x65056e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B650571:L650571:{c.instructions+=7;NFSU2_TR(0x650571);
__builtin_memmove((R+28),(R+28),4);
}
B650573:{NFSU2_TR(0x650573);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650574:{NFSU2_TR(0x650574);
__builtin_memmove((R+20),(R+16),4);
}
B650576:{NFSU2_TR(0x650576);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650577:{NFSU2_TR(0x650577);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65057a:{NFSU2_TR(0x65057a);
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
B65057c:{NFSU2_TR(0x65057c);
if(r1(R+518)){{goto L6505b4;}}
}
B65057e:L65057e:{c.instructions+=2;NFSU2_TR(0x65057e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xdull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B650582:{NFSU2_TR(0x650582);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6505b4;}}
}
B650584:L650584:{c.instructions+=3;NFSU2_TR(0x650584);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650587:{NFSU2_TR(0x650587);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650589:{NFSU2_TR(0x650589);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650593;}}
}
B65058b:L65058b:{c.instructions+=3;NFSU2_TR(0x65058b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B65058e:{NFSU2_TR(0x65058e);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
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
B650591:{NFSU2_TR(0x650591);
{goto L6505b4;}
}
B650593:L650593:{c.instructions+=2;NFSU2_TR(0x650593);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x9ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B650597:{NFSU2_TR(0x650597);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6505a4;}}
}
B650599:L650599:{c.instructions+=4;NFSU2_TR(0x650599);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65059c:{NFSU2_TR(0x65059c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65059f:{NFSU2_TR(0x65059f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6505a2:{NFSU2_TR(0x6505a2);
{goto L6505b1;}
}
B6505a4:L6505a4:{c.instructions+=3;NFSU2_TR(0x6505a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6505a5:{NFSU2_TR(0x6505a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6505ac:{NFSU2_TR(0x6505ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6505b1ull));
TAIL_STATIC(0x64fb5eu,64f);
}
B6505b1:L6505b1:{c.instructions+=1;NFSU2_TR(0x6505b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6505b4:L6505b4:{c.instructions+=3;NFSU2_TR(0x6505b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6505b5:{NFSU2_TR(0x6505b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6505b6:{NFSU2_TR(0x6505b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6505b9:L6505b9:{c.instructions+=6;NFSU2_TR(0x6505b9);
__builtin_memmove((R+28),(R+28),4);
}
B6505bb:{NFSU2_TR(0x6505bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6505bc:{NFSU2_TR(0x6505bc);
__builtin_memmove((R+20),(R+16),4);
}
B6505be:{NFSU2_TR(0x6505be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6505bf:{NFSU2_TR(0x6505bf);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6505c1:{NFSU2_TR(0x6505c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6505c6ull));
TAIL_STATIC(0x645362u,645);
}
B6505c6:L6505c6:{c.instructions+=2;NFSU2_TR(0x6505c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6505c8:{NFSU2_TR(0x6505c8);
if(r1(R+518)){{goto L6505d5;}}
}
B6505ca:L6505ca:{c.instructions+=2;NFSU2_TR(0x6505ca);
__builtin_memmove((R+4),(R+0),4);
}
B6505cc:{NFSU2_TR(0x6505cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6505d1ull));
TAIL_STATIC(0x672cb8u,672);
}
B6505d1:L6505d1:{c.instructions+=2;NFSU2_TR(0x6505d1);
__builtin_memmove((R+24),(R+0),4);
}
B6505d3:{NFSU2_TR(0x6505d3);
{goto L6505d7;}
}
B6505d5:L6505d5:{c.instructions+=1;NFSU2_TR(0x6505d5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6505d7:L6505d7:{c.instructions+=2;NFSU2_TR(0x6505d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6505d9:{NFSU2_TR(0x6505d9);
if(r1(R+518)){{goto L650614;}}
}
B6505db:L6505db:{c.instructions+=4;NFSU2_TR(0x6505db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6505de:{NFSU2_TR(0x6505de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6505e2:{NFSU2_TR(0x6505e2);
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
B6505e4:{NFSU2_TR(0x6505e4);
if(r1(R+518)){{goto L6505f2;}}
}
B6505e6:L6505e6:{c.instructions+=2;NFSU2_TR(0x6505e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6505e8:{NFSU2_TR(0x6505e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6505ebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6505eb:L6505eb:{c.instructions+=3;NFSU2_TR(0x6505eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6505ed:{NFSU2_TR(0x6505ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6505f0:{NFSU2_TR(0x6505f0);
if(r1(R+518)){{goto L650614;}}
}
B6505f2:L6505f2:{c.instructions+=2;NFSU2_TR(0x6505f2);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6505f4:{NFSU2_TR(0x6505f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6505f9ull));
TAIL_STATIC(0x645362u,645);
}
B6505f9:L6505f9:{c.instructions+=2;NFSU2_TR(0x6505f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6505fb:{NFSU2_TR(0x6505fb);
if(r1(R+518)){{goto L65060e;}}
}
B6505fd:L6505fd:{c.instructions+=5;NFSU2_TR(0x6505fd);
u8 U[4];
w4(U+0,u32(0x7b3cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650602:{NFSU2_TR(0x650602);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650604:{NFSU2_TR(0x650604);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650605:{NFSU2_TR(0x650605);
__builtin_memmove((R+4),(R+0),4);
}
B650607:{NFSU2_TR(0x650607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65060cull));
TAIL_STATIC(0x672498u,672);
}
B65060c:L65060c:{c.instructions+=1;NFSU2_TR(0x65060c);
{goto L650610;}
}
B65060e:L65060e:{c.instructions+=1;NFSU2_TR(0x65060e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B650610:L650610:{c.instructions+=2;NFSU2_TR(0x650610);
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
B650612:{NFSU2_TR(0x650612);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650616;}}
}
B650614:L650614:{c.instructions+=1;NFSU2_TR(0x650614);
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
B650616:L650616:{c.instructions+=3;NFSU2_TR(0x650616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B650617:{NFSU2_TR(0x650617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B650618:{NFSU2_TR(0x650618);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65061b:L65061b:{c.instructions+=7;NFSU2_TR(0x65061b);
__builtin_memmove((R+28),(R+28),4);
}
B65061d:{NFSU2_TR(0x65061d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65061e:{NFSU2_TR(0x65061e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65061f:{NFSU2_TR(0x65061f);
__builtin_memmove((R+12),(R+4),4);
}
B650621:{NFSU2_TR(0x650621);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B650623:{NFSU2_TR(0x650623);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650626:{NFSU2_TR(0x650626);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65062c;}}
}
B650628:L650628:{c.instructions+=2;NFSU2_TR(0x650628);
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
B65062a:{NFSU2_TR(0x65062a);
{goto L65069b;}
}
B65062c:L65062c:{c.instructions+=3;NFSU2_TR(0x65062c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65062d:{NFSU2_TR(0x65062d);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65062f:{NFSU2_TR(0x65062f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650634ull));
TAIL_STATIC(0x645362u,645);
}
B650634:L650634:{c.instructions+=2;NFSU2_TR(0x650634);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650636:{NFSU2_TR(0x650636);
if(r1(R+518)){{goto L650643;}}
}
B650638:L650638:{c.instructions+=2;NFSU2_TR(0x650638);
__builtin_memmove((R+4),(R+0),4);
}
B65063a:{NFSU2_TR(0x65063a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65063full));
TAIL_STATIC(0x672cb8u,672);
}
B65063f:L65063f:{c.instructions+=2;NFSU2_TR(0x65063f);
__builtin_memmove((R+24),(R+0),4);
}
B650641:{NFSU2_TR(0x650641);
{goto L650645;}
}
B650643:L650643:{c.instructions+=1;NFSU2_TR(0x650643);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B650645:L650645:{c.instructions+=2;NFSU2_TR(0x650645);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650647:{NFSU2_TR(0x650647);
if(r1(R+518)){{goto L650698;}}
}
B650649:L650649:{c.instructions+=3;NFSU2_TR(0x650649);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65064b:{NFSU2_TR(0x65064b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B650652:{NFSU2_TR(0x650652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650657ull));
TAIL_STATIC(0x645362u,645);
}
B650657:L650657:{c.instructions+=2;NFSU2_TR(0x650657);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650659:{NFSU2_TR(0x650659);
if(r1(R+518)){{goto L65066e;}}
}
B65065b:L65065b:{c.instructions+=9;NFSU2_TR(0x65065b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B65065e:{NFSU2_TR(0x65065e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65065f:{NFSU2_TR(0x65065f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650661:{NFSU2_TR(0x650661);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650662:{NFSU2_TR(0x650662);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650663:{NFSU2_TR(0x650663);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650664:{NFSU2_TR(0x650664);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650665:{NFSU2_TR(0x650665);
__builtin_memmove((R+4),(R+0),4);
}
B650667:{NFSU2_TR(0x650667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65066cull));
TAIL_STATIC(0x672d7bu,672);
}
B65066c:L65066c:{c.instructions+=1;NFSU2_TR(0x65066c);
{goto L650670;}
}
B65066e:L65066e:{c.instructions+=1;NFSU2_TR(0x65066e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B650670:L650670:{c.instructions+=2;NFSU2_TR(0x650670);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650672:{NFSU2_TR(0x650672);
if(r1(R+518)){{goto L650698;}}
}
B650674:L650674:{c.instructions+=3;NFSU2_TR(0x650674);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650676:{NFSU2_TR(0x650676);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650679:{NFSU2_TR(0x650679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65067eull));
TAIL_STATIC(0x645362u,645);
}
B65067e:L65067e:{c.instructions+=2;NFSU2_TR(0x65067e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650680:{NFSU2_TR(0x650680);
if(r1(R+518)){{goto L650692;}}
}
B650682:L650682:{c.instructions+=5;NFSU2_TR(0x650682);
u8 U[4];
w4(U+0,u32(0x7b3cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650687:{NFSU2_TR(0x650687);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650688:{NFSU2_TR(0x650688);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650689:{NFSU2_TR(0x650689);
__builtin_memmove((R+4),(R+0),4);
}
B65068b:{NFSU2_TR(0x65068b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650690ull));
TAIL_STATIC(0x672498u,672);
}
B650690:L650690:{c.instructions+=1;NFSU2_TR(0x650690);
{goto L650694;}
}
B650692:L650692:{c.instructions+=1;NFSU2_TR(0x650692);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B650694:L650694:{c.instructions+=2;NFSU2_TR(0x650694);
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
B650696:{NFSU2_TR(0x650696);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65069a;}}
}
B650698:L650698:{c.instructions+=1;NFSU2_TR(0x650698);
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
B65069a:L65069a:{c.instructions+=1;NFSU2_TR(0x65069a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65069b:L65069b:{c.instructions+=3;NFSU2_TR(0x65069b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65069c:{NFSU2_TR(0x65069c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65069d:{NFSU2_TR(0x65069d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65069e:L65069e:{c.instructions+=9;NFSU2_TR(0x65069e);
__builtin_memmove((R+28),(R+28),4);
}
B6506a0:{NFSU2_TR(0x6506a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6506a1:{NFSU2_TR(0x6506a1);
__builtin_memmove((R+20),(R+16),4);
}
B6506a3:{NFSU2_TR(0x6506a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6506a4:{NFSU2_TR(0x6506a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6506a5:{NFSU2_TR(0x6506a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6506a8:{NFSU2_TR(0x6506a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6506aa:{NFSU2_TR(0x6506aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6506ad:{NFSU2_TR(0x6506ad);
if(r1(R+518)){{goto L6506e7;}}
}
B6506af:L6506af:{c.instructions+=4;NFSU2_TR(0x6506af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6506b2:{NFSU2_TR(0x6506b2);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6506b6:{NFSU2_TR(0x6506b6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6506b9:{NFSU2_TR(0x6506b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6506c7;}}
}
B6506bb:L6506bb:{c.instructions+=2;NFSU2_TR(0x6506bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6506be:{NFSU2_TR(0x6506be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6506c3ull));
TAIL_STATIC(0x64fae7u,64f);
}
B6506c3:L6506c3:{c.instructions+=2;NFSU2_TR(0x6506c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6506c5:{NFSU2_TR(0x6506c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6506e7;}}
}
B6506c7:L6506c7:{c.instructions+=6;NFSU2_TR(0x6506c7);
u8 U[4];
w4(U+0,u32(0x7b3f3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6506cc:{NFSU2_TR(0x6506cc);
u8 U[4];
w4(U+0,u32(0xbcbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6506d1:{NFSU2_TR(0x6506d1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B6506d4:{NFSU2_TR(0x6506d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6506d5:{NFSU2_TR(0x6506d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6506d8:{NFSU2_TR(0x6506d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6506ddull));
TAIL_STATIC(0x64f52au,64f);
}
B6506dd:L6506dd:{c.instructions+=3;NFSU2_TR(0x6506dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6506e0:{NFSU2_TR(0x6506e0);
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
B6506e2:{NFSU2_TR(0x6506e2);
{goto L6507b4;}
}
B6506e7:L6506e7:{c.instructions+=3;NFSU2_TR(0x6506e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6506e8:{NFSU2_TR(0x6506e8);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6506ea:{NFSU2_TR(0x6506ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6506efull));
TAIL_STATIC(0x645362u,645);
}
B6506ef:L6506ef:{c.instructions+=2;NFSU2_TR(0x6506ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6506f1:{NFSU2_TR(0x6506f1);
if(r1(R+518)){{goto L6506fe;}}
}
B6506f3:L6506f3:{c.instructions+=2;NFSU2_TR(0x6506f3);
__builtin_memmove((R+4),(R+0),4);
}
B6506f5:{NFSU2_TR(0x6506f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6506faull));
TAIL_STATIC(0x672cb8u,672);
}
B6506fa:L6506fa:{c.instructions+=2;NFSU2_TR(0x6506fa);
__builtin_memmove((R+24),(R+0),4);
}
B6506fc:{NFSU2_TR(0x6506fc);
{goto L650700;}
}
B6506fe:L6506fe:{c.instructions+=1;NFSU2_TR(0x6506fe);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B650700:L650700:{c.instructions+=2;NFSU2_TR(0x650700);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650702:{NFSU2_TR(0x650702);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65070b;}}
}
B650704:L650704:{c.instructions+=2;NFSU2_TR(0x650704);
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
B650706:{NFSU2_TR(0x650706);
{goto L6507b3;}
}
B65070b:L65070b:{c.instructions+=6;NFSU2_TR(0x65070b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65070f:{NFSU2_TR(0x65070f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650712:{NFSU2_TR(0x650712);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650713:{NFSU2_TR(0x650713);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B650716:{NFSU2_TR(0x650716);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65071d:{NFSU2_TR(0x65071d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650739;}}
}
B65071f:L65071f:{c.instructions+=2;NFSU2_TR(0x65071f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650721:{NFSU2_TR(0x650721);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65072c;}}
}
B650723:L650723:{c.instructions+=2;NFSU2_TR(0x650723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65072a:{NFSU2_TR(0x65072a);
{goto L650749;}
}
B65072c:L65072c:{c.instructions+=2;NFSU2_TR(0x65072c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65072e:{NFSU2_TR(0x65072e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650739;}}
}
B650730:L650730:{c.instructions+=2;NFSU2_TR(0x650730);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B650737:{NFSU2_TR(0x650737);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B650739:L650739:{c.instructions+=2;NFSU2_TR(0x650739);
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
B65073b:{NFSU2_TR(0x65073b);
if(r1(R+518)){{goto L650749;}}
}
B65073d:L65073d:{c.instructions+=2;NFSU2_TR(0x65073d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65073f:{NFSU2_TR(0x65073f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650742ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B650742:L650742:{c.instructions+=3;NFSU2_TR(0x650742);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650744:{NFSU2_TR(0x650744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650747:{NFSU2_TR(0x650747);
if(r1(R+518)){{goto L6507b0;}}
}
B650749:L650749:{c.instructions+=2;NFSU2_TR(0x650749);
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
B65074b:{NFSU2_TR(0x65074b);
if(r1(R+518)){{goto L65075b;}}
}
B65074d:L65074d:{c.instructions+=3;NFSU2_TR(0x65074d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65074f:{NFSU2_TR(0x65074f);
__builtin_memmove((R+4),(R+28),4);
}
B650751:{NFSU2_TR(0x650751);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650754ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B650754:L650754:{c.instructions+=3;NFSU2_TR(0x650754);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650756:{NFSU2_TR(0x650756);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650759:{NFSU2_TR(0x650759);
if(r1(R+518)){{goto L6507b0;}}
}
B65075b:L65075b:{c.instructions+=2;NFSU2_TR(0x65075b);
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
B65075d:{NFSU2_TR(0x65075d);
if(r1(R+518)){{goto L65076d;}}
}
B65075f:L65075f:{c.instructions+=3;NFSU2_TR(0x65075f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B650761:{NFSU2_TR(0x650761);
__builtin_memmove((R+4),(R+12),4);
}
B650763:{NFSU2_TR(0x650763);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650766ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B650766:L650766:{c.instructions+=3;NFSU2_TR(0x650766);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650768:{NFSU2_TR(0x650768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65076b:{NFSU2_TR(0x65076b);
if(r1(R+518)){{goto L6507b0;}}
}
B65076d:L65076d:{c.instructions+=2;NFSU2_TR(0x65076d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650771:{NFSU2_TR(0x650771);
if(r1(R+518)){{goto L65078e;}}
}
B650773:L650773:{c.instructions+=3;NFSU2_TR(0x650773);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650776:{NFSU2_TR(0x650776);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650779:{NFSU2_TR(0x650779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65077eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6505b9u);}goto L6505b9;}
}
B65077e:L65077e:{c.instructions+=2;NFSU2_TR(0x65077e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650780:{NFSU2_TR(0x650780);
if(r1(R+518)){{goto L6507b0;}}
}
B650782:L650782:{c.instructions+=3;NFSU2_TR(0x650782);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650783:{NFSU2_TR(0x650783);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650786:{NFSU2_TR(0x650786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65078bull));
TAIL_STATIC(0x672459u,672);
}
B65078b:L65078b:{c.instructions+=1;NFSU2_TR(0x65078b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65078e:L65078e:{c.instructions+=2;NFSU2_TR(0x65078e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650790:{NFSU2_TR(0x650790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650795ull));
TAIL_STATIC(0x645362u,645);
}
B650795:L650795:{c.instructions+=2;NFSU2_TR(0x650795);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650797:{NFSU2_TR(0x650797);
if(r1(R+518)){{goto L6507aa;}}
}
B650799:L650799:{c.instructions+=5;NFSU2_TR(0x650799);
u8 U[4];
w4(U+0,u32(0x7b3cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65079e:{NFSU2_TR(0x65079e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6507a0:{NFSU2_TR(0x6507a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6507a1:{NFSU2_TR(0x6507a1);
__builtin_memmove((R+4),(R+0),4);
}
B6507a3:{NFSU2_TR(0x6507a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6507a8ull));
TAIL_STATIC(0x672498u,672);
}
B6507a8:L6507a8:{c.instructions+=1;NFSU2_TR(0x6507a8);
{goto L6507ac;}
}
B6507aa:L6507aa:{c.instructions+=1;NFSU2_TR(0x6507aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6507ac:L6507ac:{c.instructions+=2;NFSU2_TR(0x6507ac);
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
B6507ae:{NFSU2_TR(0x6507ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6507b2;}}
}
B6507b0:L6507b0:{c.instructions+=1;NFSU2_TR(0x6507b0);
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
B6507b2:L6507b2:{c.instructions+=1;NFSU2_TR(0x6507b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6507b3:L6507b3:{c.instructions+=1;NFSU2_TR(0x6507b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6507b4:L6507b4:{c.instructions+=3;NFSU2_TR(0x6507b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6507b5:{NFSU2_TR(0x6507b5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6507b6:{NFSU2_TR(0x6507b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6507b9:L6507b9:{c.instructions+=6;NFSU2_TR(0x6507b9);
__builtin_memmove((R+28),(R+28),4);
}
B6507bb:{NFSU2_TR(0x6507bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6507bc:{NFSU2_TR(0x6507bc);
__builtin_memmove((R+24),(R+4),4);
}
B6507be:{NFSU2_TR(0x6507be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6507c1:{NFSU2_TR(0x6507c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6507c3:{NFSU2_TR(0x6507c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6507c8ull));
TAIL_STATIC(0x64413du,644);
}
B6507c8:L6507c8:{c.instructions+=2;NFSU2_TR(0x6507c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6507cb:{NFSU2_TR(0x6507cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6507d0ull));
TAIL_STATIC(0x6475e7u,647);
}
B6507d0:L6507d0:{c.instructions+=3;NFSU2_TR(0x6507d0);
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
B6507d2:{NFSU2_TR(0x6507d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6507d3:{NFSU2_TR(0x6507d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6507d4:L6507d4:{c.instructions+=13;NFSU2_TR(0x6507d4);
__builtin_memmove((R+28),(R+28),4);
}
B6507d6:{NFSU2_TR(0x6507d6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6507d7:{NFSU2_TR(0x6507d7);
__builtin_memmove((R+20),(R+16),4);
}
B6507d9:{NFSU2_TR(0x6507d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
}
B6507df:{NFSU2_TR(0x6507df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6507e0:{NFSU2_TR(0x6507e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6507e1:{NFSU2_TR(0x6507e1);
__builtin_memmove((R+12),(R+4),4);
}
B6507e3:{NFSU2_TR(0x6507e3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6507e5:{NFSU2_TR(0x6507e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6507e6:{NFSU2_TR(0x6507e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6507ec:{NFSU2_TR(0x6507ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6507ef:{NFSU2_TR(0x6507ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6507f2:{NFSU2_TR(0x6507f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6507f7ull));
TAIL_STATIC(0x684fe1u,684);
}
B6507f7:L6507f7:{c.instructions+=2;NFSU2_TR(0x6507f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6507fa:{NFSU2_TR(0x6507fa);
if(r1(R+518)){{goto L650820;}}
}
B6507fc:L6507fc:{c.instructions+=2;NFSU2_TR(0x6507fc);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6507fe:{NFSU2_TR(0x6507fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650803ull));
TAIL_STATIC(0x575620u,575);
}
B650803:L650803:{c.instructions+=3;NFSU2_TR(0x650803);
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
B650805:{NFSU2_TR(0x650805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B650806:{NFSU2_TR(0x650806);
if(r1(R+518)){{goto L650818;}}
}
B650808:L650808:{c.instructions+=4;NFSU2_TR(0x650808);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65080b:{NFSU2_TR(0x65080b);
__builtin_memmove((R+4),(R+0),4);
}
B65080d:{NFSU2_TR(0x65080d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65080e:{NFSU2_TR(0x65080e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650813ull));
TAIL_STATIC(0x6886a9u,688);
}
B650813:L650813:{c.instructions+=2;NFSU2_TR(0x650813);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650816:{NFSU2_TR(0x650816);
{goto L65081b;}
}
B650818:L650818:{c.instructions+=1;NFSU2_TR(0x650818);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65081b:L65081b:{c.instructions+=2;NFSU2_TR(0x65081b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65081e:{NFSU2_TR(0x65081e);
if(r1(R+518)){{goto L650864;}}
}
B650820:L650820:{c.instructions+=9;NFSU2_TR(0x650820);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B650823:{NFSU2_TR(0x650823);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650824:{NFSU2_TR(0x650824);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650827:{NFSU2_TR(0x650827);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B650829:{NFSU2_TR(0x650829);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xc3ull))));
}
B65082e:{NFSU2_TR(0x65082e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65082f:{NFSU2_TR(0x65082f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650832:{NFSU2_TR(0x650832);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B650838:{NFSU2_TR(0x650838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65083dull));
TAIL_STATIC(0x6881f1u,688);
}
B65083d:L65083d:{c.instructions+=2;NFSU2_TR(0x65083d);
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
B65083f:{NFSU2_TR(0x65083f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L650864;}}
}
B650841:L650841:{c.instructions+=4;NFSU2_TR(0x650841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650844:{NFSU2_TR(0x650844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B650846:{NFSU2_TR(0x650846);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650847:{NFSU2_TR(0x650847);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65084aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65084a:L65084a:{c.instructions+=5;NFSU2_TR(0x65084a);
__builtin_memmove((R+4),gp(0x8a5d00),4);
}
B650850:{NFSU2_TR(0x650850);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650852:{NFSU2_TR(0x650852);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650853:{NFSU2_TR(0x650853);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650856:{NFSU2_TR(0x650856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65085bull));
TAIL_STATIC(0x671ccbu,671);
}
B65085b:L65085b:{c.instructions+=4;NFSU2_TR(0x65085b);
__builtin_memmove((R+28),(R+0),4);
}
B65085d:{NFSU2_TR(0x65085d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B65085f:{NFSU2_TR(0x65085f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650862:{NFSU2_TR(0x650862);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650871;}}
}
B650864:L650864:{c.instructions+=2;NFSU2_TR(0x650864);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65086a:{NFSU2_TR(0x65086a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65086full));
TAIL_STATIC(0x68762eu,687);
}
B65086f:L65086f:{c.instructions+=1;NFSU2_TR(0x65086f);
{goto L6508cf;}
}
B650871:L650871:{c.instructions+=4;NFSU2_TR(0x650871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650874:{NFSU2_TR(0x650874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B650876:{NFSU2_TR(0x650876);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650877:{NFSU2_TR(0x650877);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65087aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65087a:L65087a:{c.instructions+=4;NFSU2_TR(0x65087a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65087d:{NFSU2_TR(0x65087d);
__builtin_memmove((R+24),(R+0),4);
}
B65087f:{NFSU2_TR(0x65087f);
__builtin_memmove((R+0),(R+4),4);
}
B650881:{NFSU2_TR(0x650881);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B650884:L650884:{c.instructions+=1;NFSU2_TR(0x650884);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L650886;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650884u);}goto L650884;}
}
B650886:L650886:{c.instructions+=2;NFSU2_TR(0x650886);
__builtin_memmove((R+4),(R+0),4);
}
B650888:{NFSU2_TR(0x650888);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65088b:L65088b:{c.instructions+=1;NFSU2_TR(0x65088b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65088d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65088bu);}goto L65088b;}
}
B65088d:L65088d:{c.instructions+=3;NFSU2_TR(0x65088d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650890:{NFSU2_TR(0x650890);
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
B650892:{NFSU2_TR(0x650892);
if(r1(R+518)){{goto L65089e;}}
}
B650894:L650894:{c.instructions+=3;NFSU2_TR(0x650894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B650896:{NFSU2_TR(0x650896);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650897:{NFSU2_TR(0x650897);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65089aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65089a:L65089a:{c.instructions+=1;NFSU2_TR(0x65089a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65089e:L65089e:{c.instructions+=2;NFSU2_TR(0x65089e);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6508a0:{NFSU2_TR(0x6508a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6508a5ull));
TAIL_STATIC(0x645362u,645);
}
B6508a5:L6508a5:{c.instructions+=2;NFSU2_TR(0x6508a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6508a7:{NFSU2_TR(0x6508a7);
if(r1(R+518)){{goto L6508be;}}
}
B6508a9:L6508a9:{c.instructions+=6;NFSU2_TR(0x6508a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6508ac:{NFSU2_TR(0x6508ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6508af:{NFSU2_TR(0x6508af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6508b2:{NFSU2_TR(0x6508b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6508b3:{NFSU2_TR(0x6508b3);
__builtin_memmove((R+4),(R+0),4);
}
B6508b5:{NFSU2_TR(0x6508b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6508baull));
TAIL_STATIC(0x673071u,673);
}
B6508ba:L6508ba:{c.instructions+=2;NFSU2_TR(0x6508ba);
__builtin_memmove((R+24),(R+0),4);
}
B6508bc:{NFSU2_TR(0x6508bc);
{goto L6508c0;}
}
B6508be:L6508be:{c.instructions+=1;NFSU2_TR(0x6508be);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6508c0:L6508c0:{c.instructions+=2;NFSU2_TR(0x6508c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6508c2:{NFSU2_TR(0x6508c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6508f0;}}
}
B6508c4:L6508c4:{c.instructions+=2;NFSU2_TR(0x6508c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6508ca:{NFSU2_TR(0x6508ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6508cfull));
TAIL_STATIC(0x68762eu,687);
}
B6508cf:L6508cf:{c.instructions+=3;NFSU2_TR(0x6508cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6508d2:{NFSU2_TR(0x6508d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6508d9:{NFSU2_TR(0x6508d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6508deull));
TAIL_STATIC(0x575630u,575);
}
B6508de:L6508de:{c.instructions+=4;NFSU2_TR(0x6508de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6508e1:{NFSU2_TR(0x6508e1);
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
B6508e3:{NFSU2_TR(0x6508e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6508e4:{NFSU2_TR(0x6508e4);
if(r1(R+518)){{goto L6508ec;}}
}
B6508e6:L6508e6:{c.instructions+=3;NFSU2_TR(0x6508e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6508e8:{NFSU2_TR(0x6508e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6508e9:{NFSU2_TR(0x6508e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6508ecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6508ec:L6508ec:{c.instructions+=2;NFSU2_TR(0x6508ec);
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
B6508ee:{NFSU2_TR(0x6508ee);
{goto L650906;}
}
B6508f0:L6508f0:{c.instructions+=2;NFSU2_TR(0x6508f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6508f3:{NFSU2_TR(0x6508f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6508f8ull));
TAIL_STATIC(0x575630u,575);
}
B6508f8:L6508f8:{c.instructions+=3;NFSU2_TR(0x6508f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6508f9:{NFSU2_TR(0x6508f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6508ff:{NFSU2_TR(0x6508ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650904ull));
TAIL_STATIC(0x68762eu,687);
}
B650904:L650904:{c.instructions+=1;NFSU2_TR(0x650904);
__builtin_memmove((R+0),(R+24),4);
}
B650906:L650906:{c.instructions+=5;NFSU2_TR(0x650906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B650907:{NFSU2_TR(0x650907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B650908:{NFSU2_TR(0x650908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B650909:{NFSU2_TR(0x650909);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65090a:{NFSU2_TR(0x65090a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65090d:L65090d:{c.instructions+=11;NFSU2_TR(0x65090d);
__builtin_memmove((R+28),(R+28),4);
}
B65090f:{NFSU2_TR(0x65090f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650910:{NFSU2_TR(0x650910);
__builtin_memmove((R+20),(R+16),4);
}
B650912:{NFSU2_TR(0x650912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B650915:{NFSU2_TR(0x650915);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650916:{NFSU2_TR(0x650916);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650917:{NFSU2_TR(0x650917);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650918:{NFSU2_TR(0x650918);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65091b:{NFSU2_TR(0x65091b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65091d:{NFSU2_TR(0x65091d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650920:{NFSU2_TR(0x650920);
if(r1(R+518)){{goto L6509f3;}}
}
B650926:L650926:{c.instructions+=2;NFSU2_TR(0x650926);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65092a:{NFSU2_TR(0x65092a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6509f3;}}
}
B650930:L650930:{c.instructions+=2;NFSU2_TR(0x650930);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650934:{NFSU2_TR(0x650934);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6509f3;}}
}
B65093a:L65093a:{c.instructions+=3;NFSU2_TR(0x65093a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65093d:{NFSU2_TR(0x65093d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65093f:{NFSU2_TR(0x65093f);
if(r1(R+518)){{goto L6509f3;}}
}
B650945:L650945:{c.instructions+=2;NFSU2_TR(0x650945);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650949:{NFSU2_TR(0x650949);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6509f3;}}
}
B65094f:L65094f:{c.instructions+=3;NFSU2_TR(0x65094f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B650952:{NFSU2_TR(0x650952);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B650955:{NFSU2_TR(0x650955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6509f3;}}
}
B65095b:L65095b:{c.instructions+=2;NFSU2_TR(0x65095b);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65095d:{NFSU2_TR(0x65095d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650962ull));
TAIL_STATIC(0x645362u,645);
}
B650962:L650962:{c.instructions+=2;NFSU2_TR(0x650962);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650964:{NFSU2_TR(0x650964);
if(r1(R+518)){{goto L650973;}}
}
B650966:L650966:{c.instructions+=3;NFSU2_TR(0x650966);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650967:{NFSU2_TR(0x650967);
__builtin_memmove((R+4),(R+0),4);
}
B650969:{NFSU2_TR(0x650969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65096eull));
TAIL_STATIC(0x67269fu,672);
}
B65096e:L65096e:{c.instructions+=2;NFSU2_TR(0x65096e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650971:{NFSU2_TR(0x650971);
{goto L650977;}
}
B650973:L650973:{c.instructions+=1;NFSU2_TR(0x650973);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B650977:L650977:{c.instructions+=2;NFSU2_TR(0x650977);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65097b:{NFSU2_TR(0x65097b);
if(r1(R+518)){{goto L6509f3;}}
}
B65097d:L65097d:{c.instructions+=9;NFSU2_TR(0x65097d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650980:{NFSU2_TR(0x650980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B650983:{NFSU2_TR(0x650983);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650984:{NFSU2_TR(0x650984);
u8 U[4];
w4(U+0,u32(0x7b3f54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650989:{NFSU2_TR(0x650989);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65098c:{NFSU2_TR(0x65098c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B65098f:{NFSU2_TR(0x65098f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650991:{NFSU2_TR(0x650991);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650992:{NFSU2_TR(0x650992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650997ull));
TAIL_STATIC(0x75e081u,75e);
}
B650997:L650997:{c.instructions+=4;NFSU2_TR(0x650997);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B65099a:{NFSU2_TR(0x65099a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B65099d:{NFSU2_TR(0x65099d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6509a1:{NFSU2_TR(0x6509a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6509a4:L6509a4:{c.instructions+=4;NFSU2_TR(0x6509a4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6509a6:{NFSU2_TR(0x6509a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6509a7:{NFSU2_TR(0x6509a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6509a9:{NFSU2_TR(0x6509a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6509a4u);}goto L6509a4;}}
}
B6509ab:L6509ab:{c.instructions+=3;NFSU2_TR(0x6509ab);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6509ad:{NFSU2_TR(0x6509ad);
__builtin_memmove((R+4),(R+12),4);
}
B6509af:{NFSU2_TR(0x6509af);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6509b2:L6509b2:{c.instructions+=4;NFSU2_TR(0x6509b2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6509b4:{NFSU2_TR(0x6509b4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6509b5:{NFSU2_TR(0x6509b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6509b7:{NFSU2_TR(0x6509b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6509b2u);}goto L6509b2;}}
}
B6509b9:L6509b9:{c.instructions+=7;NFSU2_TR(0x6509b9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B6509bb:{NFSU2_TR(0x6509bb);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6509bf:{NFSU2_TR(0x6509bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6509c2:{NFSU2_TR(0x6509c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6509c5:{NFSU2_TR(0x6509c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6509c7:{NFSU2_TR(0x6509c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6509c8:{NFSU2_TR(0x6509c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6509cdull));
TAIL_STATIC(0x671ccbu,671);
}
B6509cd:L6509cd:{c.instructions+=3;NFSU2_TR(0x6509cd);
__builtin_memmove((R+24),(R+0),4);
}
B6509cf:{NFSU2_TR(0x6509cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6509d1:{NFSU2_TR(0x6509d1);
if(r1(R+518)){{goto L6509f3;}}
}
B6509d3:L6509d3:{c.instructions+=6;NFSU2_TR(0x6509d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6509d4:{NFSU2_TR(0x6509d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6509d7:{NFSU2_TR(0x6509d7);
u8 U[4];
w4(U+0,u32(0x7b3f4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6509dc:{NFSU2_TR(0x6509dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6509dd:{NFSU2_TR(0x6509dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6509de:{NFSU2_TR(0x6509de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6509e3ull));
TAIL_STATIC(0x75e081u,75e);
}
B6509e3:L6509e3:{c.instructions+=5;NFSU2_TR(0x6509e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6509e6:{NFSU2_TR(0x6509e6);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B6509eb:{NFSU2_TR(0x6509eb);
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
B6509ee:{NFSU2_TR(0x6509ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6509f1:{NFSU2_TR(0x6509f1);
{goto L6509f5;}
}
B6509f3:L6509f3:{c.instructions+=1;NFSU2_TR(0x6509f3);
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
B6509f5:L6509f5:{c.instructions+=5;NFSU2_TR(0x6509f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6509f6:{NFSU2_TR(0x6509f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6509f7:{NFSU2_TR(0x6509f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6509f8:{NFSU2_TR(0x6509f8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6509f9:{NFSU2_TR(0x6509f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6509fc:L6509fc:{c.instructions+=11;NFSU2_TR(0x6509fc);
__builtin_memmove((R+28),(R+28),4);
}
B6509fe:{NFSU2_TR(0x6509fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6509ff:{NFSU2_TR(0x6509ff);
__builtin_memmove((R+20),(R+16),4);
}
B650a01:{NFSU2_TR(0x650a01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650a02:{NFSU2_TR(0x650a02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650a03:{NFSU2_TR(0x650a03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650a04:{NFSU2_TR(0x650a04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650a05:{NFSU2_TR(0x650a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B650a08:{NFSU2_TR(0x650a08);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650a0a:{NFSU2_TR(0x650a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650a0d:{NFSU2_TR(0x650a0d);
if(r1(R+518)){{goto L650ac3;}}
}
B650a13:L650a13:{c.instructions+=2;NFSU2_TR(0x650a13);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650a17:{NFSU2_TR(0x650a17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650ac3;}}
}
B650a1d:L650a1d:{c.instructions+=3;NFSU2_TR(0x650a1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B650a20:{NFSU2_TR(0x650a20);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B650a23:{NFSU2_TR(0x650a23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650ac3;}}
}
B650a29:L650a29:{c.instructions+=3;NFSU2_TR(0x650a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B650a2c:{NFSU2_TR(0x650a2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650a2e:{NFSU2_TR(0x650a2e);
if(r1(R+518)){{goto L650ac3;}}
}
B650a34:L650a34:{c.instructions+=2;NFSU2_TR(0x650a34);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650a38:{NFSU2_TR(0x650a38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650ac3;}}
}
B650a3e:L650a3e:{c.instructions+=2;NFSU2_TR(0x650a3e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650a42:{NFSU2_TR(0x650a42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650ac3;}}
}
B650a44:L650a44:{c.instructions+=2;NFSU2_TR(0x650a44);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650a46:{NFSU2_TR(0x650a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650a4bull));
TAIL_STATIC(0x645362u,645);
}
B650a4b:L650a4b:{c.instructions+=2;NFSU2_TR(0x650a4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650a4d:{NFSU2_TR(0x650a4d);
if(r1(R+518)){{goto L650a5c;}}
}
B650a4f:L650a4f:{c.instructions+=3;NFSU2_TR(0x650a4f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650a50:{NFSU2_TR(0x650a50);
__builtin_memmove((R+4),(R+0),4);
}
B650a52:{NFSU2_TR(0x650a52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650a57ull));
TAIL_STATIC(0x67269fu,672);
}
B650a57:L650a57:{c.instructions+=2;NFSU2_TR(0x650a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650a5a:{NFSU2_TR(0x650a5a);
{goto L650a60;}
}
B650a5c:L650a5c:{c.instructions+=1;NFSU2_TR(0x650a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B650a60:L650a60:{c.instructions+=2;NFSU2_TR(0x650a60);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650a64:{NFSU2_TR(0x650a64);
if(r1(R+518)){{goto L650ac3;}}
}
B650a66:L650a66:{c.instructions+=4;NFSU2_TR(0x650a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650a69:{NFSU2_TR(0x650a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B650a6c:{NFSU2_TR(0x650a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650a6f:{NFSU2_TR(0x650a6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B650a72:L650a72:{c.instructions+=4;NFSU2_TR(0x650a72);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B650a74:{NFSU2_TR(0x650a74);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B650a75:{NFSU2_TR(0x650a75);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B650a77:{NFSU2_TR(0x650a77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650a72u);}goto L650a72;}}
}
B650a79:L650a79:{c.instructions+=4;NFSU2_TR(0x650a79);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B650a7b:{NFSU2_TR(0x650a7b);
__builtin_memmove((R+4),(R+0),4);
}
B650a7d:{NFSU2_TR(0x650a7d);
__builtin_memmove((R+0),(R+12),4);
}
B650a7f:{NFSU2_TR(0x650a7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B650a82:L650a82:{c.instructions+=4;NFSU2_TR(0x650a82);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B650a84:{NFSU2_TR(0x650a84);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B650a85:{NFSU2_TR(0x650a85);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B650a87:{NFSU2_TR(0x650a87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650a82u);}goto L650a82;}}
}
B650a89:L650a89:{c.instructions+=7;NFSU2_TR(0x650a89);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B650a8b:{NFSU2_TR(0x650a8b);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B650a8f:{NFSU2_TR(0x650a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650a92:{NFSU2_TR(0x650a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650a95:{NFSU2_TR(0x650a95);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650a97:{NFSU2_TR(0x650a97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650a98:{NFSU2_TR(0x650a98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650a9dull));
TAIL_STATIC(0x671ccbu,671);
}
B650a9d:L650a9d:{c.instructions+=3;NFSU2_TR(0x650a9d);
__builtin_memmove((R+24),(R+0),4);
}
B650a9f:{NFSU2_TR(0x650a9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650aa1:{NFSU2_TR(0x650aa1);
if(r1(R+518)){{goto L650ac3;}}
}
B650aa3:L650aa3:{c.instructions+=6;NFSU2_TR(0x650aa3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650aa4:{NFSU2_TR(0x650aa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650aa7:{NFSU2_TR(0x650aa7);
u8 U[4];
w4(U+0,u32(0x790f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650aac:{NFSU2_TR(0x650aac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650aad:{NFSU2_TR(0x650aad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650aae:{NFSU2_TR(0x650aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650ab3ull));
TAIL_STATIC(0x75e081u,75e);
}
B650ab3:L650ab3:{c.instructions+=5;NFSU2_TR(0x650ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650ab6:{NFSU2_TR(0x650ab6);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B650abb:{NFSU2_TR(0x650abb);
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
B650abe:{NFSU2_TR(0x650abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650ac1:{NFSU2_TR(0x650ac1);
{goto L650ac5;}
}
B650ac3:L650ac3:{c.instructions+=1;NFSU2_TR(0x650ac3);
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
B650ac5:L650ac5:{c.instructions+=5;NFSU2_TR(0x650ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B650ac6:{NFSU2_TR(0x650ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B650ac7:{NFSU2_TR(0x650ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B650ac8:{NFSU2_TR(0x650ac8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B650ac9:{NFSU2_TR(0x650ac9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B650acc:L650acc:{c.instructions+=6;NFSU2_TR(0x650acc);
__builtin_memmove((R+28),(R+28),4);
}
B650ace:{NFSU2_TR(0x650ace);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650acf:{NFSU2_TR(0x650acf);
__builtin_memmove((R+24),(R+4),4);
}
B650ad1:{NFSU2_TR(0x650ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650ad4:{NFSU2_TR(0x650ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650ad6:{NFSU2_TR(0x650ad6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650aef;}}
}
B650ad8:L650ad8:{c.instructions+=5;NFSU2_TR(0x650ad8);
u8 U[4];
w4(U+0,u32(0x7b3f58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650add:{NFSU2_TR(0x650add);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650ade:{NFSU2_TR(0x650ade);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650adf:{NFSU2_TR(0x650adf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650ae0:{NFSU2_TR(0x650ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650ae5ull));
TAIL_STATIC(0x64f5cdu,64f);
}
B650ae5:L650ae5:{c.instructions+=4;NFSU2_TR(0x650ae5);
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
B650ae8:{NFSU2_TR(0x650ae8);
w4(R+0,u32(0x80004005ull));
}
B650aed:{NFSU2_TR(0x650aed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B650aee:{NFSU2_TR(0x650aee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B650aef:L650aef:{c.instructions+=3;NFSU2_TR(0x650aef);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650af3:{NFSU2_TR(0x650af3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650af4:{NFSU2_TR(0x650af4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650b51;}}
}
B650af6:L650af6:{c.instructions+=3;NFSU2_TR(0x650af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650af9:{NFSU2_TR(0x650af9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650afb:{NFSU2_TR(0x650afb);
if(r1(R+518)){{goto L650b51;}}
}
B650afd:L650afd:{c.instructions+=2;NFSU2_TR(0x650afd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650b01:{NFSU2_TR(0x650b01);
if(r1(R+518)){{goto L650b51;}}
}
B650b03:L650b03:{c.instructions+=2;NFSU2_TR(0x650b03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B650b06:{NFSU2_TR(0x650b06);
{goto L650b2d;}
}
B650b08:L650b08:{c.instructions+=8;NFSU2_TR(0x650b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650b0b:{NFSU2_TR(0x650b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B650b12:{NFSU2_TR(0x650b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B650b14:{NFSU2_TR(0x650b14);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650b17:{NFSU2_TR(0x650b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650b1a:{NFSU2_TR(0x650b1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650b1d:{NFSU2_TR(0x650b1d);
__builtin_memmove((R+4),(R+24),4);
}
B650b1f:{NFSU2_TR(0x650b1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650b24ull));
TAIL_STATIC(0x64f6beu,64f);
}
B650b24:L650b24:{c.instructions+=2;NFSU2_TR(0x650b24);
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
B650b26:{NFSU2_TR(0x650b26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L650b60;}}
}
B650b28:L650b28:{c.instructions+=2;NFSU2_TR(0x650b28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B650b2a:{NFSU2_TR(0x650b2a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B650b2d:L650b2d:{c.instructions+=3;NFSU2_TR(0x650b2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B650b2f:{NFSU2_TR(0x650b2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650b31:{NFSU2_TR(0x650b31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650b08u);}goto L650b08;}}
}
B650b33:L650b33:{c.instructions+=10;NFSU2_TR(0x650b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650b36:{NFSU2_TR(0x650b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650b39:{NFSU2_TR(0x650b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650b3c:{NFSU2_TR(0x650b3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B650b3e:{NFSU2_TR(0x650b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650b41:{NFSU2_TR(0x650b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650b44:{NFSU2_TR(0x650b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650b47:{NFSU2_TR(0x650b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650b4a:{NFSU2_TR(0x650b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650b4d:{NFSU2_TR(0x650b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B650b51:L650b51:{c.instructions+=5;NFSU2_TR(0x650b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650b54:{NFSU2_TR(0x650b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650b57:{NFSU2_TR(0x650b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650b5a:{NFSU2_TR(0x650b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B650b5e:{NFSU2_TR(0x650b5e);
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
B650b60:L650b60:{c.instructions+=3;NFSU2_TR(0x650b60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B650b61:{NFSU2_TR(0x650b61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B650b62:{NFSU2_TR(0x650b62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B650b63:L650b63:{c.instructions+=8;NFSU2_TR(0x650b63);
__builtin_memmove((R+28),(R+28),4);
}
B650b65:{NFSU2_TR(0x650b65);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650b66:{NFSU2_TR(0x650b66);
__builtin_memmove((R+20),(R+16),4);
}
B650b68:{NFSU2_TR(0x650b68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650b69:{NFSU2_TR(0x650b69);
__builtin_memmove((R+24),(R+4),4);
}
B650b6b:{NFSU2_TR(0x650b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650b6e:{NFSU2_TR(0x650b6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650b70:{NFSU2_TR(0x650b70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650b8c;}}
}
B650b72:L650b72:{c.instructions+=5;NFSU2_TR(0x650b72);
u8 U[4];
w4(U+0,u32(0x7b3fb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650b77:{NFSU2_TR(0x650b77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650b78:{NFSU2_TR(0x650b78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650b79:{NFSU2_TR(0x650b79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650b7a:{NFSU2_TR(0x650b7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650b7full));
TAIL_STATIC(0x64f5cdu,64f);
}
B650b7f:L650b7f:{c.instructions+=3;NFSU2_TR(0x650b7f);
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
B650b82:{NFSU2_TR(0x650b82);
w4(R+0,u32(0x80004005ull));
}
B650b87:{NFSU2_TR(0x650b87);
{goto L650ca8;}
}
B650b8c:L650b8c:{c.instructions+=9;NFSU2_TR(0x650b8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650b8d:{NFSU2_TR(0x650b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B650b90:{NFSU2_TR(0x650b90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650b91:{NFSU2_TR(0x650b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B650b94:{NFSU2_TR(0x650b94);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B650b97:{NFSU2_TR(0x650b97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650b98:{NFSU2_TR(0x650b98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650b99:{NFSU2_TR(0x650b99);
__builtin_memmove((R+4),(R+24),4);
}
B650b9b:{NFSU2_TR(0x650b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650ba0ull));
TAIL_STATIC(0x64f7f1u,64f);
}
B650ba0:L650ba0:{c.instructions+=1;NFSU2_TR(0x650ba0);
{goto L650bba;}
}
B650ba2:L650ba2:{c.instructions+=3;NFSU2_TR(0x650ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650ba5:{NFSU2_TR(0x650ba5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650ba9:{NFSU2_TR(0x650ba9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650bb7;}}
}
B650bab:L650bab:{c.instructions+=2;NFSU2_TR(0x650bab);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650baf:{NFSU2_TR(0x650baf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650c02;}}
}
B650bb1:L650bb1:{c.instructions+=2;NFSU2_TR(0x650bb1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650bb5:{NFSU2_TR(0x650bb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650c02;}}
}
B650bb7:L650bb7:{c.instructions+=1;NFSU2_TR(0x650bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650bba:L650bba:{c.instructions+=2;NFSU2_TR(0x650bba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650bbc:{NFSU2_TR(0x650bbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650ba2u);}goto L650ba2;}}
}
B650bbe:L650bbe:{c.instructions+=4;NFSU2_TR(0x650bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650bc1:{NFSU2_TR(0x650bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650bc4:{NFSU2_TR(0x650bc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650bc6:{NFSU2_TR(0x650bc6);
if(r1(R+518)){{goto L650c28;}}
}
B650bc8:L650bc8:{c.instructions+=2;NFSU2_TR(0x650bc8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650bcc:{NFSU2_TR(0x650bcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650c28;}}
}
B650bce:L650bce:{c.instructions+=2;NFSU2_TR(0x650bce);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650bd2:{NFSU2_TR(0x650bd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650c28;}}
}
B650bd4:L650bd4:{c.instructions+=4;NFSU2_TR(0x650bd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650bd5:{NFSU2_TR(0x650bd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650bd6:{NFSU2_TR(0x650bd6);
__builtin_memmove((R+4),(R+24),4);
}
B650bd8:{NFSU2_TR(0x650bd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650bddull));
TAIL_STATIC(0x64f7f1u,64f);
}
B650bdd:L650bdd:{c.instructions+=2;NFSU2_TR(0x650bdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650bdf:{NFSU2_TR(0x650bdf);
if(r1(R+518)){{goto L650c28;}}
}
B650be1:L650be1:{c.instructions+=3;NFSU2_TR(0x650be1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650be4:{NFSU2_TR(0x650be4);
u8 U[4];
w4(U+0,u32(0x7b3f90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650be9:{NFSU2_TR(0x650be9);
u8 U[4];
w4(U+0,u32(0xbdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650bee:L650bee:{c.instructions+=3;NFSU2_TR(0x650bee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650bef:{NFSU2_TR(0x650bef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650bf0:{NFSU2_TR(0x650bf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650bf5ull));
TAIL_STATIC(0x64f52au,64f);
}
B650bf5:L650bf5:{c.instructions+=3;NFSU2_TR(0x650bf5);
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
B650bf8:{NFSU2_TR(0x650bf8);
w4(R+0,u32(0x80004005ull));
}
B650bfd:{NFSU2_TR(0x650bfd);
{goto L650ca6;}
}
B650c02:L650c02:{c.instructions+=2;NFSU2_TR(0x650c02);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650c06:{NFSU2_TR(0x650c06);
if(r1(R+518)){{goto L650c19;}}
}
B650c08:L650c08:{c.instructions+=3;NFSU2_TR(0x650c08);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650c0b:{NFSU2_TR(0x650c0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650c0c:{NFSU2_TR(0x650c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650c11ull));
TAIL_STATIC(0x67241fu,672);
}
B650c11:L650c11:{c.instructions+=2;NFSU2_TR(0x650c11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650c13:{NFSU2_TR(0x650c13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650ca4;}}
}
B650c19:L650c19:{c.instructions+=4;NFSU2_TR(0x650c19);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650c1c:{NFSU2_TR(0x650c1c);
u8 U[4];
w4(U+0,u32(0x7b3f78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650c21:{NFSU2_TR(0x650c21);
u8 U[4];
w4(U+0,u32(0xbbbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650c26:{NFSU2_TR(0x650c26);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650beeu);}goto L650bee;}
}
B650c28:L650c28:{c.instructions+=2;NFSU2_TR(0x650c28);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650c2a:{NFSU2_TR(0x650c2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650c2full));
TAIL_STATIC(0x645362u,645);
}
B650c2f:L650c2f:{c.instructions+=3;NFSU2_TR(0x650c2f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B650c31:{NFSU2_TR(0x650c31);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650c33:{NFSU2_TR(0x650c33);
if(r1(R+518)){{goto L650c45;}}
}
B650c35:L650c35:{c.instructions+=5;NFSU2_TR(0x650c35);
u8 U[4];
w4(U+0,u32(0x7b3cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650c3a:{NFSU2_TR(0x650c3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650c3b:{NFSU2_TR(0x650c3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650c3c:{NFSU2_TR(0x650c3c);
__builtin_memmove((R+4),(R+0),4);
}
B650c3e:{NFSU2_TR(0x650c3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650c43ull));
TAIL_STATIC(0x672498u,672);
}
B650c43:L650c43:{c.instructions+=1;NFSU2_TR(0x650c43);
__builtin_memmove((R+28),(R+0),4);
}
B650c45:L650c45:{c.instructions+=2;NFSU2_TR(0x650c45);
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
B650c47:{NFSU2_TR(0x650c47);
if(r1(R+518)){{goto L650c56;}}
}
B650c49:L650c49:{c.instructions+=2;NFSU2_TR(0x650c49);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650c4a:{NFSU2_TR(0x650c4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650c4full));
TAIL_STATIC(0x672440u,672);
}
B650c4f:L650c4f:{c.instructions+=3;NFSU2_TR(0x650c4f);
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
B650c51:{NFSU2_TR(0x650c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650c54:{NFSU2_TR(0x650c54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650c5d;}}
}
B650c56:L650c56:{c.instructions+=2;NFSU2_TR(0x650c56);
w4(R+0,u32(0x8007000eull));
}
B650c5b:{NFSU2_TR(0x650c5b);
{goto L650ca6;}
}
B650c5d:L650c5d:{c.instructions+=22;NFSU2_TR(0x650c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650c60:{NFSU2_TR(0x650c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650c63:{NFSU2_TR(0x650c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650c66:{NFSU2_TR(0x650c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650c69:{NFSU2_TR(0x650c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650c6c:{NFSU2_TR(0x650c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650c6f:{NFSU2_TR(0x650c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650c72:{NFSU2_TR(0x650c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650c75:{NFSU2_TR(0x650c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650c78:{NFSU2_TR(0x650c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650c7b:{NFSU2_TR(0x650c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650c7e:{NFSU2_TR(0x650c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650c81:{NFSU2_TR(0x650c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B650c84:{NFSU2_TR(0x650c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650c87:{NFSU2_TR(0x650c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650c8a:{NFSU2_TR(0x650c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650c8d:{NFSU2_TR(0x650c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650c90:{NFSU2_TR(0x650c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650c93:{NFSU2_TR(0x650c93);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650c96:{NFSU2_TR(0x650c96);
__builtin_memmove((R+4),(R+24),4);
}
B650c98:{NFSU2_TR(0x650c98);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B650c9b:{NFSU2_TR(0x650c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650ca0ull));
TAIL_STATIC(0x64f6beu,64f);
}
B650ca0:L650ca0:{c.instructions+=2;NFSU2_TR(0x650ca0);
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
B650ca2:{NFSU2_TR(0x650ca2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L650ca6;}}
}
B650ca4:L650ca4:{c.instructions+=1;NFSU2_TR(0x650ca4);
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
B650ca6:L650ca6:{c.instructions+=2;NFSU2_TR(0x650ca6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B650ca7:{NFSU2_TR(0x650ca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B650ca8:L650ca8:{c.instructions+=3;NFSU2_TR(0x650ca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B650ca9:{NFSU2_TR(0x650ca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B650caa:{NFSU2_TR(0x650caa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B650cad:L650cad:{c.instructions+=10;NFSU2_TR(0x650cad);
__builtin_memmove((R+28),(R+28),4);
}
B650caf:{NFSU2_TR(0x650caf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650cb0:{NFSU2_TR(0x650cb0);
__builtin_memmove((R+20),(R+16),4);
}
B650cb2:{NFSU2_TR(0x650cb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x160ull))));
}
B650cb8:{NFSU2_TR(0x650cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650cbb:{NFSU2_TR(0x650cbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650cbc:{NFSU2_TR(0x650cbc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B650cbe:{NFSU2_TR(0x650cbe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650cc0:{NFSU2_TR(0x650cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650cc3:{NFSU2_TR(0x650cc3);
if(r1(R+518)){{goto L650cc7;}}
}
B650cc5:L650cc5:{c.instructions+=1;NFSU2_TR(0x650cc5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B650cc7:L650cc7:{c.instructions+=3;NFSU2_TR(0x650cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650cca:{NFSU2_TR(0x650cca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650ccc:{NFSU2_TR(0x650ccc);
if(r1(R+518)){{goto L650cd0;}}
}
B650cce:L650cce:{c.instructions+=1;NFSU2_TR(0x650cce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B650cd0:L650cd0:{c.instructions+=4;NFSU2_TR(0x650cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650cd3:{NFSU2_TR(0x650cd3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B650cd5:{NFSU2_TR(0x650cd5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650cd7:{NFSU2_TR(0x650cd7);
if(r1(R+518)){{goto L650d0c;}}
}
B650cd9:L650cd9:{c.instructions+=3;NFSU2_TR(0x650cd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650cdc:{NFSU2_TR(0x650cdc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650cde:{NFSU2_TR(0x650cde);
if(r1(R+518)){{goto L650cfb;}}
}
B650ce0:L650ce0:{c.instructions+=2;NFSU2_TR(0x650ce0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650ce4:{NFSU2_TR(0x650ce4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650cfb;}}
}
B650ce6:L650ce6:{c.instructions+=3;NFSU2_TR(0x650ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650ce9:{NFSU2_TR(0x650ce9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650ceb:{NFSU2_TR(0x650ceb);
if(r1(R+518)){{goto L650cfb;}}
}
B650ced:L650ced:{c.instructions+=2;NFSU2_TR(0x650ced);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650cf1:{NFSU2_TR(0x650cf1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650cfb;}}
}
B650cf3:L650cf3:{c.instructions+=4;NFSU2_TR(0x650cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650cf6:{NFSU2_TR(0x650cf6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B650cf7:{NFSU2_TR(0x650cf7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650cf9:{NFSU2_TR(0x650cf9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650cd9u);}goto L650cd9;}}
}
B650cfb:L650cfb:{c.instructions+=2;NFSU2_TR(0x650cfb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650cfd:{NFSU2_TR(0x650cfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650d04;}}
}
B650cff:L650cff:{c.instructions+=2;NFSU2_TR(0x650cff);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650d02:{NFSU2_TR(0x650d02);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L650d0c;}}
}
B650d04:L650d04:{c.instructions+=3;NFSU2_TR(0x650d04);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B650d06:{NFSU2_TR(0x650d06);
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
B650d07:{NFSU2_TR(0x650d07);
TAIL_STATIC(0x651359u,651);
}
B650d0c:L650d0c:{c.instructions+=6;NFSU2_TR(0x650d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650d0f:{NFSU2_TR(0x650d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650d12:{NFSU2_TR(0x650d12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650d13:{NFSU2_TR(0x650d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x5eull));
s4(u32(r4(U+0)),r4(U+4));
}
B650d1a:{NFSU2_TR(0x650d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650d1d:{NFSU2_TR(0x650d1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650d1e:L650d1e:{c.instructions+=7;NFSU2_TR(0x650d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650d21:{NFSU2_TR(0x650d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B650d24:{NFSU2_TR(0x650d24);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B650d26:{NFSU2_TR(0x650d26);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B650d28:{NFSU2_TR(0x650d28);
__builtin_memmove((R+4),(R+0),4);
}
B650d2a:{NFSU2_TR(0x650d2a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xa4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B650d30:{NFSU2_TR(0x650d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7afd34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B650d36:L650d36:{c.instructions+=4;NFSU2_TR(0x650d36);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+8),(U+0),1);
}
B650d38:{NFSU2_TR(0x650d38);
__builtin_memmove((R+4),(R+8),1);
}
B650d3a:{NFSU2_TR(0x650d3a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B650d3c:{NFSU2_TR(0x650d3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650d58;}}
}
B650d3e:L650d3e:{c.instructions+=2;NFSU2_TR(0x650d3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B650d40:{NFSU2_TR(0x650d40);
if(r1(R+518)){{goto L650d54;}}
}
B650d42:L650d42:{c.instructions+=4;NFSU2_TR(0x650d42);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B650d45:{NFSU2_TR(0x650d45);
__builtin_memmove((R+4),(R+8),1);
}
B650d47:{NFSU2_TR(0x650d47);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B650d4a:{NFSU2_TR(0x650d4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650d58;}}
}
B650d4c:L650d4c:{c.instructions+=6;NFSU2_TR(0x650d4c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B650d4d:{NFSU2_TR(0x650d4d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B650d4e:{NFSU2_TR(0x650d4e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B650d4f:{NFSU2_TR(0x650d4f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B650d50:{NFSU2_TR(0x650d50);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B650d52:{NFSU2_TR(0x650d52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650d36u);}goto L650d36;}}
}
B650d54:L650d54:{c.instructions+=2;NFSU2_TR(0x650d54);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B650d56:{NFSU2_TR(0x650d56);
{goto L650d5d;}
}
B650d58:L650d58:{c.instructions+=2;NFSU2_TR(0x650d58);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B650d5a:{NFSU2_TR(0x650d5a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(u32(0xffffffffull))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B650d5d:L650d5d:{c.instructions+=2;NFSU2_TR(0x650d5d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650d5f:{NFSU2_TR(0x650d5f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L650d66;}}
}
B650d61:L650d61:{c.instructions+=2;NFSU2_TR(0x650d61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B650d64:{NFSU2_TR(0x650d64);
{goto L650d6b;}
}
B650d66:L650d66:{c.instructions+=1;NFSU2_TR(0x650d66);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L650d75;}}
}
B650d68:L650d68:{c.instructions+=1;NFSU2_TR(0x650d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650d6b:L650d6b:{c.instructions+=2;NFSU2_TR(0x650d6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B650d6e:{NFSU2_TR(0x650d6e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650d1eu);}goto L650d1e;}}
}
B650d70:L650d70:{c.instructions+=1;NFSU2_TR(0x650d70);
{goto L650e1b;}
}
B650d75:L650d75:{c.instructions+=5;NFSU2_TR(0x650d75);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650d77:{NFSU2_TR(0x650d77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B650d7a:{NFSU2_TR(0x650d7a);
__builtin_memmove((R+12),(R+0),4);
}
B650d7c:{NFSU2_TR(0x650d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650d7f:{NFSU2_TR(0x650d7f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L650dc8;}}
}
B650d81:L650d81:{c.instructions+=2;NFSU2_TR(0x650d81);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xa4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B650d87:{NFSU2_TR(0x650d87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7afc90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B650d8d:L650d8d:{c.instructions+=2;NFSU2_TR(0x650d8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B650d8f:{NFSU2_TR(0x650d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B650d92:L650d92:{c.instructions+=4;NFSU2_TR(0x650d92);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B650d94:{NFSU2_TR(0x650d94);
__builtin_memmove((R+8),(R+0),1);
}
B650d96:{NFSU2_TR(0x650d96);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+0))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B650d98:{NFSU2_TR(0x650d98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650db4;}}
}
B650d9a:L650d9a:{c.instructions+=2;NFSU2_TR(0x650d9a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B650d9c:{NFSU2_TR(0x650d9c);
if(r1(R+518)){{goto L650db0;}}
}
B650d9e:L650d9e:{c.instructions+=4;NFSU2_TR(0x650d9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B650da1:{NFSU2_TR(0x650da1);
__builtin_memmove((R+8),(R+0),1);
}
B650da3:{NFSU2_TR(0x650da3);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B650da6:{NFSU2_TR(0x650da6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650db4;}}
}
B650da8:L650da8:{c.instructions+=6;NFSU2_TR(0x650da8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B650da9:{NFSU2_TR(0x650da9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B650daa:{NFSU2_TR(0x650daa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B650dab:{NFSU2_TR(0x650dab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B650dac:{NFSU2_TR(0x650dac);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B650dae:{NFSU2_TR(0x650dae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650d92u);}goto L650d92;}}
}
B650db0:L650db0:{c.instructions+=2;NFSU2_TR(0x650db0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B650db2:{NFSU2_TR(0x650db2);
{goto L650db9;}
}
B650db4:L650db4:{c.instructions+=2;NFSU2_TR(0x650db4);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B650db6:{NFSU2_TR(0x650db6);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(u32(0xffffffffull))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B650db9:L650db9:{c.instructions+=2;NFSU2_TR(0x650db9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650dbb:{NFSU2_TR(0x650dbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650dc8;}}
}
B650dbd:L650dbd:{c.instructions+=4;NFSU2_TR(0x650dbd);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B650dbe:{NFSU2_TR(0x650dbe);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0xa4ull))));
}
B650dc4:{NFSU2_TR(0x650dc4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650dc6:{NFSU2_TR(0x650dc6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650d8du);}goto L650d8d;}}
}
B650dc8:L650dc8:{c.instructions+=3;NFSU2_TR(0x650dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B650dcb:{NFSU2_TR(0x650dcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x5eull))));
}
B650dce:{NFSU2_TR(0x650dce);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L650e1b;}}
}
B650dd0:L650dd0:{c.instructions+=2;NFSU2_TR(0x650dd0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xa4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B650dd6:{NFSU2_TR(0x650dd6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x7afd34ull))));
}
B650ddc:L650ddc:{c.instructions+=2;NFSU2_TR(0x650ddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B650dde:{NFSU2_TR(0x650dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B650de1:L650de1:{c.instructions+=4;NFSU2_TR(0x650de1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B650de3:{NFSU2_TR(0x650de3);
__builtin_memmove((R+4),(R+8),1);
}
B650de5:{NFSU2_TR(0x650de5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B650de7:{NFSU2_TR(0x650de7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650e03;}}
}
B650de9:L650de9:{c.instructions+=2;NFSU2_TR(0x650de9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B650deb:{NFSU2_TR(0x650deb);
if(r1(R+518)){{goto L650dff;}}
}
B650ded:L650ded:{c.instructions+=4;NFSU2_TR(0x650ded);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B650df0:{NFSU2_TR(0x650df0);
__builtin_memmove((R+4),(R+8),1);
}
B650df2:{NFSU2_TR(0x650df2);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B650df5:{NFSU2_TR(0x650df5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650e03;}}
}
B650df7:L650df7:{c.instructions+=6;NFSU2_TR(0x650df7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B650df8:{NFSU2_TR(0x650df8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B650df9:{NFSU2_TR(0x650df9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B650dfa:{NFSU2_TR(0x650dfa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B650dfb:{NFSU2_TR(0x650dfb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B650dfd:{NFSU2_TR(0x650dfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650de1u);}goto L650de1;}}
}
B650dff:L650dff:{c.instructions+=2;NFSU2_TR(0x650dff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B650e01:{NFSU2_TR(0x650e01);
{goto L650e08;}
}
B650e03:L650e03:{c.instructions+=2;NFSU2_TR(0x650e03);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B650e05:{NFSU2_TR(0x650e05);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B650e08:L650e08:{c.instructions+=2;NFSU2_TR(0x650e08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650e0a:{NFSU2_TR(0x650e0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650e1b;}}
}
B650e0c:L650e0c:{c.instructions+=4;NFSU2_TR(0x650e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B650e0f:{NFSU2_TR(0x650e0f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
}
B650e15:{NFSU2_TR(0x650e15);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x5eull))));
}
B650e19:{NFSU2_TR(0x650e19);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650ddcu);}goto L650ddc;}}
}
B650e1b:L650e1b:{c.instructions+=2;NFSU2_TR(0x650e1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650e1e:{NFSU2_TR(0x650e1e);
if(r1(R+518)){TAIL_STATIC(0x65109fu,651);}
}
B650e24:L650e24:{c.instructions+=2;NFSU2_TR(0x650e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650e27:{NFSU2_TR(0x650e27);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x651097u,651);}
}
B650e2d:L650e2d:{c.instructions+=29;NFSU2_TR(0x650e2d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0xa4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B650e33:{NFSU2_TR(0x650e33);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x7afd30ull))));
}
B650e39:{NFSU2_TR(0x650e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650e3c:{NFSU2_TR(0x650e3c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B650e3f:{NFSU2_TR(0x650e3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B650e42:{NFSU2_TR(0x650e42);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e43:{NFSU2_TR(0x650e43);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e44:{NFSU2_TR(0x650e44);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e45:{NFSU2_TR(0x650e45);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e46:{NFSU2_TR(0x650e46);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e47:{NFSU2_TR(0x650e47);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650e49:{NFSU2_TR(0x650e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B650e4a:{NFSU2_TR(0x650e4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B650e4d:{NFSU2_TR(0x650e4d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e4e:{NFSU2_TR(0x650e4e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e4f:{NFSU2_TR(0x650e4f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e50:{NFSU2_TR(0x650e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B650e53:{NFSU2_TR(0x650e53);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e54:{NFSU2_TR(0x650e54);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e55:{NFSU2_TR(0x650e55);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650e57:{NFSU2_TR(0x650e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B650e58:{NFSU2_TR(0x650e58);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B650e5b:{NFSU2_TR(0x650e5b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e5c:{NFSU2_TR(0x650e5c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e5d:{NFSU2_TR(0x650e5d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e5e:{NFSU2_TR(0x650e5e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e5f:{NFSU2_TR(0x650e5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B650e65:{NFSU2_TR(0x650e65);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B650e66:{NFSU2_TR(0x650e66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650e6bull));
TAIL_STATIC(0x672a2au,672);
}
B650e6b:L650e6b:{c.instructions+=2;NFSU2_TR(0x650e6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B650e71:{NFSU2_TR(0x650e71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650e76ull));
TAIL_STATIC(0x672a2au,672);
}
B650e76:L650e76:{c.instructions+=4;NFSU2_TR(0x650e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B650e79:{NFSU2_TR(0x650e79);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650e7b:{NFSU2_TR(0x650e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B650e82:{NFSU2_TR(0x650e82);
if(r1(R+518)){{goto L650fcb;}}
}
B650e88:L650e88:{c.instructions+=1;NFSU2_TR(0x650e88);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B650e8b:L650e8b:{c.instructions+=2;NFSU2_TR(0x650e8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x5ull))));
}
B650e8f:{NFSU2_TR(0x650e8f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L650fab;}}
}
B650e95:L650e95:{c.instructions+=2;NFSU2_TR(0x650e95);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650e99:{NFSU2_TR(0x650e99);
if(r1(R+518)){{goto L650fab;}}
}
B650e9f:L650e9f:{c.instructions+=6;NFSU2_TR(0x650e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650ea2:{NFSU2_TR(0x650ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B650ea5:{NFSU2_TR(0x650ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B650ea7:{NFSU2_TR(0x650ea7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B650eab:{NFSU2_TR(0x650eab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650eae:{NFSU2_TR(0x650eae);
if(r1(R+518)){{goto L650ee0;}}
}
B650eb0:L650eb0:{c.instructions+=2;NFSU2_TR(0x650eb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650eb2:{NFSU2_TR(0x650eb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650ec1;}}
}
B650eb4:L650eb4:{c.instructions+=3;NFSU2_TR(0x650eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650eb7:{NFSU2_TR(0x650eb7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650eba:{NFSU2_TR(0x650eba);
if(r1(R+518)){{goto L650ee0;}}
}
B650ebc:L650ebc:{c.instructions+=2;NFSU2_TR(0x650ebc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650ebf:{NFSU2_TR(0x650ebf);
if(r1(R+518)){{goto L650ee0;}}
}
B650ec1:L650ec1:{c.instructions+=3;NFSU2_TR(0x650ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650ec4:{NFSU2_TR(0x650ec4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650ec6:{NFSU2_TR(0x650ec6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650ed6;}}
}
B650ec8:L650ec8:{c.instructions+=2;NFSU2_TR(0x650ec8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650eca:{NFSU2_TR(0x650eca);
if(r1(R+518)){{goto L650ef3;}}
}
B650ecc:L650ecc:{c.instructions+=2;NFSU2_TR(0x650ecc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650ecf:{NFSU2_TR(0x650ecf);
if(r1(R+518)){{goto L650ef3;}}
}
B650ed1:L650ed1:{c.instructions+=2;NFSU2_TR(0x650ed1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650ed4:{NFSU2_TR(0x650ed4);
{goto L650ed8;}
}
B650ed6:L650ed6:{c.instructions+=1;NFSU2_TR(0x650ed6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B650ed8:L650ed8:{c.instructions+=1;NFSU2_TR(0x650ed8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650fab;}}
}
B650ede:L650ede:{c.instructions+=1;NFSU2_TR(0x650ede);
{goto L650ef3;}
}
B650ee0:L650ee0:{c.instructions+=6;NFSU2_TR(0x650ee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B650ee2:{NFSU2_TR(0x650ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650ee5:{NFSU2_TR(0x650ee5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B650ee8:{NFSU2_TR(0x650ee8);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B650eec:{NFSU2_TR(0x650eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650eef:{NFSU2_TR(0x650eef);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B650ef3:L650ef3:{c.instructions+=3;NFSU2_TR(0x650ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650ef6:{NFSU2_TR(0x650ef6);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x1eull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B650efb:{NFSU2_TR(0x650efb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650f10;}}
}
B650efd:L650efd:{c.instructions+=6;NFSU2_TR(0x650efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650f00:{NFSU2_TR(0x650f00);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B650f03:{NFSU2_TR(0x650f03);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B650f07:{NFSU2_TR(0x650f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650f0a:{NFSU2_TR(0x650f0a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B650f0e:{NFSU2_TR(0x650f0e);
{goto L650f42;}
}
B650f10:L650f10:{c.instructions+=13;NFSU2_TR(0x650f10);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B650f14:{NFSU2_TR(0x650f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650f17:{NFSU2_TR(0x650f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650f1a:{NFSU2_TR(0x650f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650f1d:{NFSU2_TR(0x650f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B650f23:{NFSU2_TR(0x650f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650f26:{NFSU2_TR(0x650f26);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B650f2a:{NFSU2_TR(0x650f2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650f2b:{NFSU2_TR(0x650f2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B650f31:{NFSU2_TR(0x650f31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650f32:{NFSU2_TR(0x650f32);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B650f38:{NFSU2_TR(0x650f38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650f39:{NFSU2_TR(0x650f39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650f3eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65003cu);}goto L65003c;}
}
B650f3e:L650f3e:{c.instructions+=2;NFSU2_TR(0x650f3e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B650f40:{NFSU2_TR(0x650f40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L650fab;}}
}
B650f42:L650f42:{c.instructions+=3;NFSU2_TR(0x650f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B650f45:{NFSU2_TR(0x650f45);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650f47:{NFSU2_TR(0x650f47);
if(r1(R+518)){{goto L650f87;}}
}
B650f49:L650f49:{c.instructions+=3;NFSU2_TR(0x650f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650f4c:{NFSU2_TR(0x650f4c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B650f4e:{NFSU2_TR(0x650f4e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L650f61;}}
}
B650f50:L650f50:{c.instructions+=5;NFSU2_TR(0x650f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650f53:{NFSU2_TR(0x650f53);
w4(R+0,u32(~u32(r4(R+0))));
}
B650f55:{NFSU2_TR(0x650f55);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B650f59:{NFSU2_TR(0x650f59);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+4))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B650f5b:{NFSU2_TR(0x650f5b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L650f66;}}
}
B650f5d:L650f5d:{c.instructions+=2;NFSU2_TR(0x650f5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B650f5f:{NFSU2_TR(0x650f5f);
{goto L650f66;}
}
B650f61:L650f61:{c.instructions+=2;NFSU2_TR(0x650f61);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B650f64:{NFSU2_TR(0x650f64);
if(r1(R+512)){{goto L650fab;}}
}
B650f66:L650f66:{c.instructions+=2;NFSU2_TR(0x650f66);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650f68:{NFSU2_TR(0x650f68);
if(r1(R+518)){{goto L650f87;}}
}
B650f6a:L650f6a:{c.instructions+=3;NFSU2_TR(0x650f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650f6d:{NFSU2_TR(0x650f6d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B650f6f:{NFSU2_TR(0x650f6f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L650f82;}}
}
B650f71:L650f71:{c.instructions+=5;NFSU2_TR(0x650f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650f74:{NFSU2_TR(0x650f74);
w4(R+0,u32(~u32(r4(R+0))));
}
B650f76:{NFSU2_TR(0x650f76);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B650f7a:{NFSU2_TR(0x650f7a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+4))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B650f7c:{NFSU2_TR(0x650f7c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L650f87;}}
}
B650f7e:L650f7e:{c.instructions+=2;NFSU2_TR(0x650f7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B650f80:{NFSU2_TR(0x650f80);
{goto L650f87;}
}
B650f82:L650f82:{c.instructions+=2;NFSU2_TR(0x650f82);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B650f85:{NFSU2_TR(0x650f85);
if(r1(R+512)){{goto L650fab;}}
}
B650f87:L650f87:{c.instructions+=2;NFSU2_TR(0x650f87);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B650f8b:{NFSU2_TR(0x650f8b);
if(r1(R+518)){{goto L650f9a;}}
}
B650f8d:L650f8d:{c.instructions+=3;NFSU2_TR(0x650f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650f90:{NFSU2_TR(0x650f90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B650f91:{NFSU2_TR(0x650f91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x650f96ull));
TAIL_STATIC(0x64fa50u,64f);
}
B650f96:L650f96:{c.instructions+=2;NFSU2_TR(0x650f96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650f98:{NFSU2_TR(0x650f98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650fab;}}
}
B650f9a:L650f9a:{c.instructions+=5;NFSU2_TR(0x650f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B650f9d:{NFSU2_TR(0x650f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B650fa0:{NFSU2_TR(0x650fa0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B650fa3:{NFSU2_TR(0x650fa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650fa5:{NFSU2_TR(0x650fa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x650e8bu);}goto L650e8b;}}
}
B650fab:L650fab:{c.instructions+=2;NFSU2_TR(0x650fab);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B650fad:{NFSU2_TR(0x650fad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x651081u,651);}
}
B650fb3:L650fb3:{c.instructions+=4;NFSU2_TR(0x650fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650fb6:{NFSU2_TR(0x650fb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
}
B650fb9:{NFSU2_TR(0x650fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B650fbc:{NFSU2_TR(0x650fbc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L650fcb;}}
}
B650fbe:L650fbe:{c.instructions+=3;NFSU2_TR(0x650fbe);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B650fc1:{NFSU2_TR(0x650fc1);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+12))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B650fc5:{NFSU2_TR(0x650fc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x651081u,651);}
}
B650fcb:L650fcb:{c.instructions+=2;NFSU2_TR(0x650fcb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B650fcf:{NFSU2_TR(0x650fcf);
if(r1(R+518)){{goto L650ff7;}}
}
B650fd1:L650fd1:{c.instructions+=4;NFSU2_TR(0x650fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650fd4:{NFSU2_TR(0x650fd4);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B650fd8:{NFSU2_TR(0x650fd8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B650fdb:{NFSU2_TR(0x650fdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650fe4;}}
}
B650fdd:L650fdd:{c.instructions+=3;NFSU2_TR(0x650fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650fe0:{NFSU2_TR(0x650fe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B650fe2:{NFSU2_TR(0x650fe2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B650fe4:L650fe4:{c.instructions+=4;NFSU2_TR(0x650fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B650fe7:{NFSU2_TR(0x650fe7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B650feb:{NFSU2_TR(0x650feb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1eull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B650fee:{NFSU2_TR(0x650fee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L650ff7;}}
}
B650ff0:L650ff0:{c.instructions+=3;NFSU2_TR(0x650ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B650ff3:{NFSU2_TR(0x650ff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B650ff5:{NFSU2_TR(0x650ff5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B650ff7:L650ff7:{c.instructions+=3;NFSU2_TR(0x650ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B650ffa:{NFSU2_TR(0x650ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B650ffe:{NFSU2_TR(0x650ffe);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
TAIL_STATIC(0x651001u,651);
}
XIT:NFSU2_TR_EXIT(0x650,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
