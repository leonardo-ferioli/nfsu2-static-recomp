#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_64f(u8* __restrict R,Cpu& c);
u32 body_650(u8* __restrict R,Cpu& c);
u32 body_652(u8* __restrict R,Cpu& c);
u32 body_654(u8* __restrict R,Cpu& c);
u32 body_656(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x655,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x655,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_655(u8* __restrict R,Cpu& c);
u32 page_655(Cpu& c){return body_655(c.regs.data(),c);}
__attribute__((noinline)) u32 body_655(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x655000:goto L655000;
case 0x655003:c.instructions+=2;goto B655003;
case 0x655006:c.instructions+=1;goto B655006;
case 0x655008:goto L655008;
case 0x65500b:goto L65500b;
case 0x65500e:c.instructions+=6;goto B65500e;
case 0x65500f:c.instructions+=5;goto B65500f;
case 0x655011:c.instructions+=4;goto B655011;
case 0x655012:c.instructions+=3;goto B655012;
case 0x655015:c.instructions+=2;goto B655015;
case 0x655016:c.instructions+=1;goto B655016;
case 0x65501b:goto L65501b;
case 0x65501d:c.instructions+=2;goto B65501d;
case 0x65501f:c.instructions+=1;goto B65501f;
case 0x655025:goto L655025;
case 0x65502b:c.instructions+=6;goto B65502b;
case 0x65502e:c.instructions+=5;goto B65502e;
case 0x655030:c.instructions+=4;goto B655030;
case 0x655032:c.instructions+=3;goto B655032;
case 0x655035:c.instructions+=2;goto B655035;
case 0x655037:c.instructions+=1;goto B655037;
case 0x655039:goto L655039;
case 0x65503c:goto L65503c;
case 0x65503f:c.instructions+=6;goto B65503f;
case 0x655040:c.instructions+=5;goto B655040;
case 0x655041:c.instructions+=4;goto B655041;
case 0x655044:c.instructions+=3;goto B655044;
case 0x655046:c.instructions+=2;goto B655046;
case 0x655047:c.instructions+=1;goto B655047;
case 0x65504c:goto L65504c;
case 0x65504e:c.instructions+=2;goto B65504e;
case 0x655050:c.instructions+=1;goto B655050;
case 0x655056:goto L655056;
case 0x655059:c.instructions+=5;goto B655059;
case 0x65505c:c.instructions+=4;goto B65505c;
case 0x655060:c.instructions+=3;goto B655060;
case 0x655063:c.instructions+=2;goto B655063;
case 0x655066:c.instructions+=1;goto B655066;
case 0x655068:goto L655068;
case 0x65506d:goto L65506d;
case 0x655070:c.instructions+=3;goto B655070;
case 0x655073:c.instructions+=2;goto B655073;
case 0x655076:c.instructions+=1;goto B655076;
case 0x655078:goto L655078;
case 0x65507b:c.instructions+=7;goto B65507b;
case 0x65507e:c.instructions+=6;goto B65507e;
case 0x65507f:c.instructions+=5;goto B65507f;
case 0x655082:c.instructions+=4;goto B655082;
case 0x655083:c.instructions+=3;goto B655083;
case 0x655086:c.instructions+=2;goto B655086;
case 0x655087:c.instructions+=1;goto B655087;
case 0x65508c:goto L65508c;
case 0x65508e:c.instructions+=2;goto B65508e;
case 0x655090:c.instructions+=1;goto B655090;
case 0x655096:goto L655096;
case 0x65509a:c.instructions+=2;goto B65509a;
case 0x65509e:c.instructions+=1;goto B65509e;
case 0x6550a4:goto L6550a4;
case 0x6550a7:c.instructions+=4;goto B6550a7;
case 0x6550aa:c.instructions+=3;goto B6550aa;
case 0x6550ad:c.instructions+=2;goto B6550ad;
case 0x6550b0:c.instructions+=1;goto B6550b0;
case 0x6550b3:goto L6550b3;
case 0x6550b6:c.instructions+=4;goto B6550b6;
case 0x6550b7:c.instructions+=3;goto B6550b7;
case 0x6550b8:c.instructions+=2;goto B6550b8;
case 0x6550bb:c.instructions+=1;goto B6550bb;
case 0x6550c0:goto L6550c0;
case 0x6550c2:c.instructions+=2;goto B6550c2;
case 0x6550c4:c.instructions+=1;goto B6550c4;
case 0x6550ca:goto L6550ca;
case 0x6550cd:c.instructions+=5;goto B6550cd;
case 0x6550d0:c.instructions+=4;goto B6550d0;
case 0x6550d4:c.instructions+=3;goto B6550d4;
case 0x6550d7:c.instructions+=2;goto B6550d7;
case 0x6550da:c.instructions+=1;goto B6550da;
case 0x6550dc:goto L6550dc;
case 0x6550e1:goto L6550e1;
case 0x6550e3:c.instructions+=1;goto B6550e3;
case 0x6550e9:goto L6550e9;
case 0x6550ed:c.instructions+=3;goto B6550ed;
case 0x6550f1:c.instructions+=2;goto B6550f1;
case 0x6550f3:c.instructions+=1;goto B6550f3;
case 0x6550f9:goto L6550f9;
case 0x6550fc:c.instructions+=2;goto B6550fc;
case 0x6550ff:c.instructions+=1;goto B6550ff;
case 0x655102:goto L655102;
case 0x655105:c.instructions+=7;goto B655105;
case 0x655108:c.instructions+=6;goto B655108;
case 0x655109:c.instructions+=5;goto B655109;
case 0x65510c:c.instructions+=4;goto B65510c;
case 0x65510d:c.instructions+=3;goto B65510d;
case 0x655110:c.instructions+=2;goto B655110;
case 0x655111:c.instructions+=1;goto B655111;
case 0x655116:goto L655116;
case 0x655118:c.instructions+=2;goto B655118;
case 0x65511a:c.instructions+=1;goto B65511a;
case 0x655120:goto L655120;
case 0x655123:c.instructions+=7;goto B655123;
case 0x655126:c.instructions+=6;goto B655126;
case 0x655129:c.instructions+=5;goto B655129;
case 0x65512c:c.instructions+=4;goto B65512c;
case 0x65512d:c.instructions+=3;goto B65512d;
case 0x65512e:c.instructions+=2;goto B65512e;
case 0x655131:c.instructions+=1;goto B655131;
case 0x655136:goto L655136;
case 0x655138:c.instructions+=2;goto B655138;
case 0x65513a:c.instructions+=1;goto B65513a;
case 0x655140:goto L655140;
case 0x655143:c.instructions+=5;goto B655143;
case 0x655146:c.instructions+=4;goto B655146;
case 0x65514a:c.instructions+=3;goto B65514a;
case 0x65514d:c.instructions+=2;goto B65514d;
case 0x655150:c.instructions+=1;goto B655150;
case 0x655152:goto L655152;
case 0x655157:goto L655157;
case 0x65515a:c.instructions+=7;goto B65515a;
case 0x65515d:c.instructions+=6;goto B65515d;
case 0x65515e:c.instructions+=5;goto B65515e;
case 0x655161:c.instructions+=4;goto B655161;
case 0x655164:c.instructions+=3;goto B655164;
case 0x655165:c.instructions+=2;goto B655165;
case 0x655168:c.instructions+=1;goto B655168;
case 0x65516d:goto L65516d;
case 0x65516f:c.instructions+=2;goto B65516f;
case 0x655171:c.instructions+=1;goto B655171;
case 0x655177:goto L655177;
case 0x65517a:c.instructions+=3;goto B65517a;
case 0x65517e:c.instructions+=2;goto B65517e;
case 0x655181:c.instructions+=1;goto B655181;
case 0x655183:goto L655183;
case 0x655188:c.instructions+=4;goto B655188;
case 0x65518d:c.instructions+=3;goto B65518d;
case 0x65518e:c.instructions+=2;goto B65518e;
case 0x655191:c.instructions+=1;goto B655191;
case 0x655196:goto L655196;
case 0x655199:c.instructions+=1;goto B655199;
case 0x65519e:goto L65519e;
case 0x6551a2:c.instructions+=2;goto B6551a2;
case 0x6551a6:c.instructions+=1;goto B6551a6;
case 0x6551ac:goto L6551ac;
case 0x6551af:c.instructions+=3;goto B6551af;
case 0x6551b2:c.instructions+=2;goto B6551b2;
case 0x6551b5:c.instructions+=1;goto B6551b5;
case 0x6551b7:goto L6551b7;
case 0x6551ba:c.instructions+=4;goto B6551ba;
case 0x6551bd:c.instructions+=3;goto B6551bd;
case 0x6551be:c.instructions+=2;goto B6551be;
case 0x6551bf:c.instructions+=1;goto B6551bf;
case 0x6551c4:goto L6551c4;
case 0x6551c6:c.instructions+=2;goto B6551c6;
case 0x6551c8:c.instructions+=1;goto B6551c8;
case 0x6551ce:goto L6551ce;
case 0x6551d1:c.instructions+=5;goto B6551d1;
case 0x6551d4:c.instructions+=4;goto B6551d4;
case 0x6551d7:c.instructions+=3;goto B6551d7;
case 0x6551da:c.instructions+=2;goto B6551da;
case 0x6551dd:c.instructions+=1;goto B6551dd;
case 0x6551df:goto L6551df;
case 0x6551e4:goto L6551e4;
case 0x6551e6:c.instructions+=1;goto B6551e6;
case 0x6551ec:goto L6551ec;
case 0x6551ef:c.instructions+=2;goto B6551ef;
case 0x6551f1:c.instructions+=1;goto B6551f1;
case 0x6551f3:goto L6551f3;
case 0x6551f6:c.instructions+=2;goto B6551f6;
case 0x6551f9:c.instructions+=1;goto B6551f9;
case 0x6551ff:goto L6551ff;
case 0x655202:c.instructions+=1;goto B655202;
case 0x655205:goto L655205;
case 0x655208:c.instructions+=4;goto B655208;
case 0x655209:c.instructions+=3;goto B655209;
case 0x65520c:c.instructions+=2;goto B65520c;
case 0x65520d:c.instructions+=1;goto B65520d;
case 0x655212:goto L655212;
case 0x655214:c.instructions+=2;goto B655214;
case 0x655216:c.instructions+=1;goto B655216;
case 0x65521c:goto L65521c;
case 0x65521f:c.instructions+=4;goto B65521f;
case 0x655222:c.instructions+=3;goto B655222;
case 0x655225:c.instructions+=2;goto B655225;
case 0x655228:c.instructions+=1;goto B655228;
case 0x65522a:goto L65522a;
case 0x65522f:goto L65522f;
case 0x655232:c.instructions+=1;goto B655232;
case 0x655234:goto L655234;
case 0x655237:c.instructions+=2;goto B655237;
case 0x65523a:c.instructions+=1;goto B65523a;
case 0x65523c:goto L65523c;
case 0x65523f:c.instructions+=2;goto B65523f;
case 0x655242:c.instructions+=1;goto B655242;
case 0x655244:goto L655244;
case 0x655246:c.instructions+=2;goto B655246;
case 0x655249:c.instructions+=1;goto B655249;
case 0x65524f:goto L65524f;
case 0x655251:c.instructions+=2;goto B655251;
case 0x655253:c.instructions+=1;goto B655253;
case 0x655255:goto L655255;
case 0x655259:c.instructions+=15;goto B655259;
case 0x65525c:c.instructions+=14;goto B65525c;
case 0x65525d:c.instructions+=13;goto B65525d;
case 0x655260:c.instructions+=12;goto B655260;
case 0x655263:c.instructions+=11;goto B655263;
case 0x655267:c.instructions+=10;goto B655267;
case 0x655269:c.instructions+=9;goto B655269;
case 0x65526c:c.instructions+=8;goto B65526c;
case 0x65526f:c.instructions+=7;goto B65526f;
case 0x655271:c.instructions+=6;goto B655271;
case 0x655274:c.instructions+=5;goto B655274;
case 0x655277:c.instructions+=4;goto B655277;
case 0x655278:c.instructions+=3;goto B655278;
case 0x65527b:c.instructions+=2;goto B65527b;
case 0x65527c:c.instructions+=1;goto B65527c;
case 0x655281:goto L655281;
case 0x655283:c.instructions+=2;goto B655283;
case 0x655285:c.instructions+=1;goto B655285;
case 0x65528b:goto L65528b;
case 0x65528e:c.instructions+=3;goto B65528e;
case 0x65528f:c.instructions+=2;goto B65528f;
case 0x655291:c.instructions+=1;goto B655291;
case 0x655293:goto L655293;
case 0x655296:c.instructions+=3;goto B655296;
case 0x655299:c.instructions+=2;goto B655299;
case 0x65529c:c.instructions+=1;goto B65529c;
case 0x65529e:goto L65529e;
case 0x6552a3:goto L6552a3;
case 0x6552a6:c.instructions+=2;goto B6552a6;
case 0x6552a9:c.instructions+=1;goto B6552a9;
case 0x6552af:goto L6552af;
case 0x6552b2:c.instructions+=4;goto B6552b2;
case 0x6552b5:c.instructions+=3;goto B6552b5;
case 0x6552b8:c.instructions+=2;goto B6552b8;
case 0x6552bb:c.instructions+=1;goto B6552bb;
case 0x6552bd:goto L6552bd;
case 0x6552c0:c.instructions+=5;goto B6552c0;
case 0x6552c3:c.instructions+=4;goto B6552c3;
case 0x6552c6:c.instructions+=3;goto B6552c6;
case 0x6552c7:c.instructions+=2;goto B6552c7;
case 0x6552c8:c.instructions+=1;goto B6552c8;
case 0x6552cd:goto L6552cd;
case 0x6552cf:c.instructions+=2;goto B6552cf;
case 0x6552d1:c.instructions+=1;goto B6552d1;
case 0x6552d7:goto L6552d7;
case 0x6552da:c.instructions+=4;goto B6552da;
case 0x6552dd:c.instructions+=3;goto B6552dd;
case 0x6552e0:c.instructions+=2;goto B6552e0;
case 0x6552e3:c.instructions+=1;goto B6552e3;
case 0x6552e5:goto L6552e5;
case 0x6552ea:goto L6552ea;
case 0x6552ed:c.instructions+=2;goto B6552ed;
case 0x6552ef:c.instructions+=1;goto B6552ef;
case 0x6552f5:goto L6552f5;
case 0x6552f9:c.instructions+=1;goto B6552f9;
case 0x6552fb:goto L6552fb;
case 0x6552fe:c.instructions+=2;goto B6552fe;
case 0x655301:c.instructions+=1;goto B655301;
case 0x655307:goto L655307;
case 0x65530a:c.instructions+=5;goto B65530a;
case 0x65530d:c.instructions+=4;goto B65530d;
case 0x65530e:c.instructions+=3;goto B65530e;
case 0x65530f:c.instructions+=2;goto B65530f;
case 0x655312:c.instructions+=1;goto B655312;
case 0x655317:goto L655317;
case 0x655319:c.instructions+=2;goto B655319;
case 0x65531b:c.instructions+=1;goto B65531b;
case 0x655321:goto L655321;
case 0x655326:goto L655326;
case 0x655328:c.instructions+=1;goto B655328;
case 0x65532e:goto L65532e;
case 0x655331:c.instructions+=1;goto B655331;
case 0x655337:goto L655337;
case 0x655339:goto L655339;
case 0x65533c:c.instructions+=2;goto B65533c;
case 0x65533e:c.instructions+=1;goto B65533e;
case 0x655340:goto L655340;
case 0x655344:c.instructions+=1;goto B655344;
case 0x655346:goto L655346;
case 0x655349:c.instructions+=2;goto B655349;
case 0x65534c:c.instructions+=1;goto B65534c;
case 0x655352:goto L655352;
case 0x655355:c.instructions+=5;goto B655355;
case 0x655356:c.instructions+=4;goto B655356;
case 0x655359:c.instructions+=3;goto B655359;
case 0x65535a:c.instructions+=2;goto B65535a;
case 0x65535d:c.instructions+=1;goto B65535d;
case 0x655362:goto L655362;
case 0x655364:c.instructions+=2;goto B655364;
case 0x655366:c.instructions+=1;goto B655366;
case 0x65536c:goto L65536c;
case 0x655370:c.instructions+=1;goto B655370;
case 0x655372:goto L655372;
case 0x655374:c.instructions+=1;goto B655374;
case 0x655376:goto L655376;
case 0x65537a:c.instructions+=1;goto B65537a;
case 0x65537c:goto L65537c;
case 0x65537f:c.instructions+=3;goto B65537f;
case 0x655382:c.instructions+=2;goto B655382;
case 0x655383:c.instructions+=1;goto B655383;
case 0x655388:goto L655388;
case 0x65538a:c.instructions+=2;goto B65538a;
case 0x65538c:c.instructions+=1;goto B65538c;
case 0x655392:goto L655392;
case 0x655395:c.instructions+=4;goto B655395;
case 0x655398:c.instructions+=3;goto B655398;
case 0x65539c:c.instructions+=2;goto B65539c;
case 0x65539f:c.instructions+=1;goto B65539f;
case 0x6553a2:goto L6553a2;
case 0x6553a5:c.instructions+=2;goto B6553a5;
case 0x6553a7:c.instructions+=1;goto B6553a7;
case 0x6553a9:goto L6553a9;
case 0x6553ae:goto L6553ae;
case 0x6553b1:c.instructions+=2;goto B6553b1;
case 0x6553b4:c.instructions+=1;goto B6553b4;
case 0x6553b6:goto L6553b6;
case 0x6553b9:goto L6553b9;
case 0x6553bc:c.instructions+=6;goto B6553bc;
case 0x6553bf:c.instructions+=5;goto B6553bf;
case 0x6553c0:c.instructions+=4;goto B6553c0;
case 0x6553c1:c.instructions+=3;goto B6553c1;
case 0x6553c4:c.instructions+=2;goto B6553c4;
case 0x6553c5:c.instructions+=1;goto B6553c5;
case 0x6553ca:goto L6553ca;
case 0x6553cc:c.instructions+=2;goto B6553cc;
case 0x6553ce:c.instructions+=1;goto B6553ce;
case 0x6553d4:goto L6553d4;
case 0x6553d7:c.instructions+=5;goto B6553d7;
case 0x6553da:c.instructions+=4;goto B6553da;
case 0x6553e0:c.instructions+=3;goto B6553e0;
case 0x6553e3:c.instructions+=2;goto B6553e3;
case 0x6553e6:c.instructions+=1;goto B6553e6;
case 0x6553e8:goto L6553e8;
case 0x6553ec:c.instructions+=2;goto B6553ec;
case 0x6553f0:c.instructions+=1;goto B6553f0;
case 0x6553f2:goto L6553f2;
case 0x6553f5:c.instructions+=1;goto B6553f5;
case 0x6553f8:goto L6553f8;
case 0x6553fb:c.instructions+=5;goto B6553fb;
case 0x6553fc:c.instructions+=4;goto B6553fc;
case 0x6553fd:c.instructions+=3;goto B6553fd;
case 0x655400:c.instructions+=2;goto B655400;
case 0x655401:c.instructions+=1;goto B655401;
case 0x655406:goto L655406;
case 0x655408:c.instructions+=2;goto B655408;
case 0x65540a:c.instructions+=1;goto B65540a;
case 0x655410:goto L655410;
case 0x655413:c.instructions+=5;goto B655413;
case 0x655416:c.instructions+=4;goto B655416;
case 0x65541c:c.instructions+=3;goto B65541c;
case 0x65541f:c.instructions+=2;goto B65541f;
case 0x655422:c.instructions+=1;goto B655422;
case 0x655424:goto L655424;
case 0x655427:goto L655427;
case 0x655429:c.instructions+=1;goto B655429;
case 0x65542b:goto L65542b;
case 0x65542e:c.instructions+=2;goto B65542e;
case 0x655431:c.instructions+=1;goto B655431;
case 0x655437:goto L655437;
case 0x65543b:c.instructions+=1;goto B65543b;
case 0x65543d:goto L65543d;
case 0x655440:c.instructions+=2;goto B655440;
case 0x655443:c.instructions+=1;goto B655443;
case 0x655449:goto L655449;
case 0x65544d:c.instructions+=2;goto B65544d;
case 0x655451:c.instructions+=1;goto B655451;
case 0x655457:goto L655457;
case 0x65545a:c.instructions+=8;goto B65545a;
case 0x65545d:c.instructions+=7;goto B65545d;
case 0x65545f:c.instructions+=6;goto B65545f;
case 0x655462:c.instructions+=5;goto B655462;
case 0x655465:c.instructions+=4;goto B655465;
case 0x655467:c.instructions+=3;goto B655467;
case 0x65546a:c.instructions+=2;goto B65546a;
case 0x65546d:c.instructions+=1;goto B65546d;
case 0x655472:goto L655472;
case 0x655476:c.instructions+=1;goto B655476;
case 0x655478:goto L655478;
case 0x65547b:c.instructions+=2;goto B65547b;
case 0x65547e:c.instructions+=1;goto B65547e;
case 0x655480:goto L655480;
case 0x655482:goto L655482;
case 0x655486:c.instructions+=2;goto B655486;
case 0x655489:c.instructions+=1;goto B655489;
case 0x65548b:goto L65548b;
case 0x65548d:c.instructions+=1;goto B65548d;
case 0x65548f:goto L65548f;
case 0x655491:goto L655491;
case 0x655494:c.instructions+=4;goto B655494;
case 0x655497:c.instructions+=3;goto B655497;
case 0x65549a:c.instructions+=2;goto B65549a;
case 0x65549d:c.instructions+=1;goto B65549d;
case 0x6554a3:goto L6554a3;
case 0x6554aa:goto L6554aa;
case 0x6554b0:goto L6554b0;
case 0x6554b2:c.instructions+=4;goto B6554b2;
case 0x6554b4:c.instructions+=3;goto B6554b4;
case 0x6554b6:c.instructions+=2;goto B6554b6;
case 0x6554b8:c.instructions+=1;goto B6554b8;
case 0x6554bb:goto L6554bb;
case 0x6554c1:goto L6554c1;
case 0x6554c3:c.instructions+=1;goto B6554c3;
case 0x6554c8:goto L6554c8;
case 0x6554ca:c.instructions+=1;goto B6554ca;
case 0x6554cf:goto L6554cf;
case 0x6554d2:c.instructions+=1;goto B6554d2;
case 0x6554d7:goto L6554d7;
case 0x6554da:c.instructions+=5;goto B6554da;
case 0x6554e0:c.instructions+=4;goto B6554e0;
case 0x6554e2:c.instructions+=3;goto B6554e2;
case 0x6554e4:c.instructions+=2;goto B6554e4;
case 0x6554e7:c.instructions+=1;goto B6554e7;
case 0x6554e9:goto L6554e9;
case 0x6554ee:c.instructions+=6;goto B6554ee;
case 0x6554f0:c.instructions+=5;goto B6554f0;
case 0x6554f1:c.instructions+=4;goto B6554f1;
case 0x6554f4:c.instructions+=3;goto B6554f4;
case 0x6554f5:c.instructions+=2;goto B6554f5;
case 0x6554f8:c.instructions+=1;goto B6554f8;
case 0x6554fd:goto L6554fd;
case 0x655500:c.instructions+=1;goto B655500;
case 0x655503:goto L655503;
case 0x655506:c.instructions+=1;goto B655506;
case 0x65550b:goto L65550b;
case 0x65550d:c.instructions+=6;goto B65550d;
case 0x655510:c.instructions+=5;goto B655510;
case 0x655516:c.instructions+=4;goto B655516;
case 0x655518:c.instructions+=3;goto B655518;
case 0x65551a:c.instructions+=2;goto B65551a;
case 0x65551d:c.instructions+=1;goto B65551d;
case 0x65551f:goto L65551f;
case 0x655524:c.instructions+=5;goto B655524;
case 0x655525:c.instructions+=4;goto B655525;
case 0x655528:c.instructions+=3;goto B655528;
case 0x655529:c.instructions+=2;goto B655529;
case 0x65552c:c.instructions+=1;goto B65552c;
case 0x655531:goto L655531;
case 0x655534:goto L655534;
case 0x655537:c.instructions+=2;goto B655537;
case 0x65553a:c.instructions+=1;goto B65553a;
case 0x65553f:goto L65553f;
case 0x655544:goto L655544;
case 0x655547:c.instructions+=1;goto B655547;
case 0x65554c:goto L65554c;
case 0x65554f:c.instructions+=1;goto B65554f;
case 0x655554:goto L655554;
case 0x655557:c.instructions+=3;goto B655557;
case 0x655559:c.instructions+=2;goto B655559;
case 0x65555c:c.instructions+=1;goto B65555c;
case 0x655561:goto L655561;
case 0x655564:c.instructions+=3;goto B655564;
case 0x655566:c.instructions+=2;goto B655566;
case 0x655569:c.instructions+=1;goto B655569;
case 0x65556b:goto L65556b;
case 0x65556e:c.instructions+=3;goto B65556e;
case 0x655570:c.instructions+=2;goto B655570;
case 0x655573:c.instructions+=1;goto B655573;
case 0x655578:goto L655578;
case 0x65557b:c.instructions+=2;goto B65557b;
case 0x65557d:c.instructions+=1;goto B65557d;
case 0x655580:goto L655580;
case 0x655582:goto L655582;
case 0x655587:goto L655587;
case 0x65558a:c.instructions+=1;goto B65558a;
case 0x65558f:goto L65558f;
case 0x655592:c.instructions+=4;goto B655592;
case 0x655594:c.instructions+=3;goto B655594;
case 0x655596:c.instructions+=2;goto B655596;
case 0x655598:c.instructions+=1;goto B655598;
case 0x65559a:goto L65559a;
case 0x6555a0:c.instructions+=6;goto B6555a0;
case 0x6555a2:c.instructions+=5;goto B6555a2;
case 0x6555a4:c.instructions+=4;goto B6555a4;
case 0x6555a6:c.instructions+=3;goto B6555a6;
case 0x6555a8:c.instructions+=2;goto B6555a8;
case 0x6555ab:c.instructions+=1;goto B6555ab;
case 0x6555b1:goto L6555b1;
case 0x6555b3:goto L6555b3;
case 0x6555b9:c.instructions+=6;goto B6555b9;
case 0x6555bb:c.instructions+=5;goto B6555bb;
case 0x6555bd:c.instructions+=4;goto B6555bd;
case 0x6555bf:c.instructions+=3;goto B6555bf;
case 0x6555c1:c.instructions+=2;goto B6555c1;
case 0x6555c4:c.instructions+=1;goto B6555c4;
case 0x6555c6:goto L6555c6;
case 0x6555cc:c.instructions+=2;goto B6555cc;
case 0x6555cf:c.instructions+=1;goto B6555cf;
case 0x6555d1:goto L6555d1;
case 0x6555d3:c.instructions+=2;goto B6555d3;
case 0x6555d6:c.instructions+=1;goto B6555d6;
case 0x6555dc:goto L6555dc;
case 0x6555de:goto L6555de;
case 0x6555e1:c.instructions+=6;goto B6555e1;
case 0x6555e4:c.instructions+=5;goto B6555e4;
case 0x6555e7:c.instructions+=4;goto B6555e7;
case 0x6555ea:c.instructions+=3;goto B6555ea;
case 0x6555ed:c.instructions+=2;goto B6555ed;
case 0x6555f0:c.instructions+=1;goto B6555f0;
case 0x6555f6:goto L6555f6;
case 0x6555fa:c.instructions+=2;goto B6555fa;
case 0x6555fe:c.instructions+=1;goto B6555fe;
case 0x655600:goto L655600;
case 0x655603:c.instructions+=1;goto B655603;
case 0x655606:goto L655606;
case 0x655609:c.instructions+=7;goto B655609;
case 0x65560a:c.instructions+=6;goto B65560a;
case 0x65560b:c.instructions+=5;goto B65560b;
case 0x65560c:c.instructions+=4;goto B65560c;
case 0x65560f:c.instructions+=3;goto B65560f;
case 0x655612:c.instructions+=2;goto B655612;
case 0x655613:c.instructions+=1;goto B655613;
case 0x655618:goto L655618;
case 0x65561a:c.instructions+=2;goto B65561a;
case 0x65561c:c.instructions+=1;goto B65561c;
case 0x65561e:goto L65561e;
case 0x655621:c.instructions+=4;goto B655621;
case 0x655624:c.instructions+=3;goto B655624;
case 0x655627:c.instructions+=2;goto B655627;
case 0x65562a:c.instructions+=1;goto B65562a;
case 0x65562c:goto L65562c;
case 0x65562e:goto L65562e;
case 0x655631:c.instructions+=1;goto B655631;
case 0x655636:goto L655636;
case 0x655639:c.instructions+=1;goto B655639;
case 0x65563e:goto L65563e;
case 0x65563f:c.instructions+=4;goto B65563f;
case 0x655640:c.instructions+=3;goto B655640;
case 0x655642:c.instructions+=2;goto B655642;
case 0x655643:c.instructions+=1;goto B655643;
case 0x655645:goto L655645;
case 0x655647:goto L655647;
case 0x65564c:c.instructions+=1;goto B65564c;
case 0x65564e:goto L65564e;
case 0x655653:goto L655653;
case 0x655654:c.instructions+=3;goto B655654;
case 0x655655:c.instructions+=2;goto B655655;
case 0x655656:c.instructions+=1;goto B655656;
case 0x655699:goto L655699;
case 0x65569b:c.instructions+=9;goto B65569b;
case 0x65569c:c.instructions+=8;goto B65569c;
case 0x65569e:c.instructions+=7;goto B65569e;
case 0x6556a1:c.instructions+=6;goto B6556a1;
case 0x6556a2:c.instructions+=5;goto B6556a2;
case 0x6556a3:c.instructions+=4;goto B6556a3;
case 0x6556a6:c.instructions+=3;goto B6556a6;
case 0x6556a8:c.instructions+=2;goto B6556a8;
case 0x6556aa:c.instructions+=1;goto B6556aa;
case 0x6556b0:goto L6556b0;
case 0x6556b3:c.instructions+=3;goto B6556b3;
case 0x6556b7:c.instructions+=2;goto B6556b7;
case 0x6556ba:c.instructions+=1;goto B6556ba;
case 0x6556c0:goto L6556c0;
case 0x6556c3:c.instructions+=1;goto B6556c3;
case 0x6556c8:goto L6556c8;
case 0x6556ca:c.instructions+=1;goto B6556ca;
case 0x6556d0:goto L6556d0;
case 0x6556d1:c.instructions+=2;goto B6556d1;
case 0x6556d3:c.instructions+=1;goto B6556d3;
case 0x6556d8:goto L6556d8;
case 0x6556da:c.instructions+=1;goto B6556da;
case 0x6556dc:goto L6556dc;
case 0x6556df:c.instructions+=4;goto B6556df;
case 0x6556e0:c.instructions+=3;goto B6556e0;
case 0x6556e1:c.instructions+=2;goto B6556e1;
case 0x6556e3:c.instructions+=1;goto B6556e3;
case 0x6556e8:goto L6556e8;
case 0x6556ea:c.instructions+=1;goto B6556ea;
case 0x6556ec:goto L6556ec;
case 0x6556ef:c.instructions+=7;goto B6556ef;
case 0x6556f0:c.instructions+=6;goto B6556f0;
case 0x6556f3:c.instructions+=5;goto B6556f3;
case 0x6556f4:c.instructions+=4;goto B6556f4;
case 0x6556f7:c.instructions+=3;goto B6556f7;
case 0x6556f8:c.instructions+=2;goto B6556f8;
case 0x6556fa:c.instructions+=1;goto B6556fa;
case 0x6556ff:goto L6556ff;
case 0x655701:c.instructions+=1;goto B655701;
case 0x655703:goto L655703;
case 0x655706:c.instructions+=6;goto B655706;
case 0x65570c:c.instructions+=5;goto B65570c;
case 0x65570e:c.instructions+=4;goto B65570e;
case 0x655710:c.instructions+=3;goto B655710;
case 0x655713:c.instructions+=2;goto B655713;
case 0x655716:c.instructions+=1;goto B655716;
case 0x655718:goto L655718;
case 0x65571b:goto L65571b;
case 0x65571c:c.instructions+=1;goto B65571c;
case 0x655721:goto L655721;
case 0x655726:goto L655726;
case 0x655728:c.instructions+=1;goto B655728;
case 0x65572d:goto L65572d;
case 0x65572f:c.instructions+=1;goto B65572f;
case 0x655731:goto L655731;
case 0x655733:c.instructions+=1;goto B655733;
case 0x655738:goto L655738;
case 0x65573a:c.instructions+=1;goto B65573a;
case 0x65573c:goto L65573c;
case 0x65573e:goto L65573e;
case 0x655740:c.instructions+=1;goto B655740;
case 0x655742:goto L655742;
case 0x655749:c.instructions+=3;goto B655749;
case 0x65574b:c.instructions+=2;goto B65574b;
case 0x65574d:c.instructions+=1;goto B65574d;
case 0x655750:goto L655750;
case 0x655752:c.instructions+=2;goto B655752;
case 0x655755:c.instructions+=1;goto B655755;
case 0x655757:goto L655757;
case 0x65575a:c.instructions+=2;goto B65575a;
case 0x65575c:c.instructions+=1;goto B65575c;
case 0x65575e:goto L65575e;
case 0x655760:c.instructions+=1;goto B655760;
case 0x655763:goto L655763;
case 0x655765:c.instructions+=2;goto B655765;
case 0x655768:c.instructions+=1;goto B655768;
case 0x65576a:goto L65576a;
case 0x65576d:c.instructions+=2;goto B65576d;
case 0x65576f:c.instructions+=1;goto B65576f;
case 0x655771:goto L655771;
case 0x655773:c.instructions+=1;goto B655773;
case 0x655776:goto L655776;
case 0x655778:c.instructions+=2;goto B655778;
case 0x65577b:c.instructions+=1;goto B65577b;
case 0x65577d:goto L65577d;
case 0x65577f:c.instructions+=1;goto B65577f;
case 0x655784:goto L655784;
case 0x655786:c.instructions+=1;goto B655786;
case 0x655788:goto L655788;
case 0x65578d:c.instructions+=4;goto B65578d;
case 0x65578f:c.instructions+=3;goto B65578f;
case 0x655790:c.instructions+=2;goto B655790;
case 0x655792:c.instructions+=1;goto B655792;
case 0x655797:goto L655797;
case 0x655799:goto L655799;
case 0x65579b:goto L65579b;
case 0x65579d:c.instructions+=1;goto B65579d;
case 0x65579f:goto L65579f;
case 0x6557a1:goto L6557a1;
case 0x6557a6:c.instructions+=5;goto B6557a6;
case 0x6557ab:c.instructions+=4;goto B6557ab;
case 0x6557ae:c.instructions+=3;goto B6557ae;
case 0x6557af:c.instructions+=2;goto B6557af;
case 0x6557b0:c.instructions+=1;goto B6557b0;
case 0x6557b5:goto L6557b5;
case 0x6557b8:goto L6557b8;
case 0x6557ba:goto L6557ba;
case 0x6557bb:c.instructions+=3;goto B6557bb;
case 0x6557bc:c.instructions+=2;goto B6557bc;
case 0x6557bd:c.instructions+=1;goto B6557bd;
case 0x6557c0:goto L6557c0;
case 0x6557c2:c.instructions+=10;goto B6557c2;
case 0x6557c3:c.instructions+=9;goto B6557c3;
case 0x6557c5:c.instructions+=8;goto B6557c5;
case 0x6557c6:c.instructions+=7;goto B6557c6;
case 0x6557c7:c.instructions+=6;goto B6557c7;
case 0x6557c8:c.instructions+=5;goto B6557c8;
case 0x6557c9:c.instructions+=4;goto B6557c9;
case 0x6557cb:c.instructions+=3;goto B6557cb;
case 0x6557cc:c.instructions+=2;goto B6557cc;
case 0x6557cf:c.instructions+=1;goto B6557cf;
case 0x6557d2:goto L6557d2;
case 0x6557d5:c.instructions+=2;goto B6557d5;
case 0x6557d6:c.instructions+=1;goto B6557d6;
case 0x6557db:goto L6557db;
case 0x6557dd:c.instructions+=1;goto B6557dd;
case 0x6557df:goto L6557df;
case 0x6557e6:c.instructions+=1;goto B6557e6;
case 0x6557e9:goto L6557e9;
case 0x6557ea:c.instructions+=4;goto B6557ea;
case 0x6557eb:c.instructions+=3;goto B6557eb;
case 0x6557ec:c.instructions+=2;goto B6557ec;
case 0x6557ed:c.instructions+=1;goto B6557ed;
case 0x6557ee:goto L6557ee;
case 0x6557f0:c.instructions+=2;goto B6557f0;
case 0x6557f3:c.instructions+=1;goto B6557f3;
case 0x6557f5:goto L6557f5;
case 0x6557fc:goto L6557fc;
case 0x6557ff:c.instructions+=2;goto B6557ff;
case 0x655801:c.instructions+=1;goto B655801;
case 0x655803:goto L655803;
case 0x655807:c.instructions+=1;goto B655807;
case 0x655809:goto L655809;
case 0x65580d:c.instructions+=1;goto B65580d;
case 0x655813:goto L655813;
case 0x655816:c.instructions+=1;goto B655816;
case 0x65581c:goto L65581c;
case 0x655820:c.instructions+=2;goto B655820;
case 0x655823:c.instructions+=1;goto B655823;
case 0x655825:goto L655825;
case 0x655827:goto L655827;
case 0x65582a:c.instructions+=1;goto B65582a;
case 0x65582c:goto L65582c;
case 0x65582f:c.instructions+=1;goto B65582f;
case 0x655831:goto L655831;
case 0x655834:c.instructions+=1;goto B655834;
case 0x655836:goto L655836;
case 0x655837:c.instructions+=1;goto B655837;
case 0x65583d:goto L65583d;
case 0x655842:c.instructions+=1;goto B655842;
case 0x655844:goto L655844;
case 0x655849:c.instructions+=1;goto B655849;
case 0x65584b:goto L65584b;
case 0x655850:c.instructions+=1;goto B655850;
case 0x655852:goto L655852;
case 0x655857:c.instructions+=1;goto B655857;
case 0x655859:goto L655859;
case 0x65585e:c.instructions+=1;goto B65585e;
case 0x655860:goto L655860;
case 0x655863:c.instructions+=1;goto B655863;
case 0x655865:goto L655865;
case 0x655868:c.instructions+=1;goto B655868;
case 0x65586a:goto L65586a;
case 0x65586b:c.instructions+=1;goto B65586b;
case 0x65586d:goto L65586d;
case 0x65586e:c.instructions+=1;goto B65586e;
case 0x655874:goto L655874;
case 0x655879:c.instructions+=1;goto B655879;
case 0x65587e:goto L65587e;
case 0x655883:c.instructions+=1;goto B655883;
case 0x655888:goto L655888;
case 0x65588d:c.instructions+=1;goto B65588d;
case 0x655892:goto L655892;
case 0x655897:c.instructions+=1;goto B655897;
case 0x65589c:goto L65589c;
case 0x65589f:c.instructions+=2;goto B65589f;
case 0x6558a1:c.instructions+=1;goto B6558a1;
case 0x6558a7:goto L6558a7;
case 0x6558aa:c.instructions+=2;goto B6558aa;
case 0x6558ad:c.instructions+=1;goto B6558ad;
case 0x6558af:goto L6558af;
case 0x6558b2:c.instructions+=1;goto B6558b2;
case 0x6558b4:goto L6558b4;
case 0x6558b5:c.instructions+=2;goto B6558b5;
case 0x6558b6:c.instructions+=1;goto B6558b6;
case 0x6558b8:goto L6558b8;
case 0x6558bb:c.instructions+=1;goto B6558bb;
case 0x6558c1:goto L6558c1;
case 0x6558c6:c.instructions+=1;goto B6558c6;
case 0x6558cb:goto L6558cb;
case 0x6558d0:c.instructions+=1;goto B6558d0;
case 0x6558d5:goto L6558d5;
case 0x6558da:c.instructions+=1;goto B6558da;
case 0x6558df:goto L6558df;
case 0x6558e4:c.instructions+=1;goto B6558e4;
case 0x6558e9:goto L6558e9;
case 0x6558ee:c.instructions+=1;goto B6558ee;
case 0x6558f3:goto L6558f3;
case 0x6558f8:c.instructions+=1;goto B6558f8;
case 0x6558fd:goto L6558fd;
case 0x655902:c.instructions+=1;goto B655902;
case 0x655907:goto L655907;
case 0x65590c:c.instructions+=1;goto B65590c;
case 0x655911:goto L655911;
case 0x655916:c.instructions+=1;goto B655916;
case 0x65591b:goto L65591b;
case 0x655920:c.instructions+=1;goto B655920;
case 0x655925:goto L655925;
case 0x65592a:c.instructions+=1;goto B65592a;
case 0x65592f:goto L65592f;
case 0x655932:c.instructions+=5;goto B655932;
case 0x655935:c.instructions+=4;goto B655935;
case 0x655938:c.instructions+=3;goto B655938;
case 0x65593b:c.instructions+=2;goto B65593b;
case 0x65593e:c.instructions+=1;goto B65593e;
case 0x655944:goto L655944;
case 0x65594b:goto L65594b;
case 0x65594d:c.instructions+=4;goto B65594d;
case 0x655952:c.instructions+=3;goto B655952;
case 0x655954:c.instructions+=2;goto B655954;
case 0x655955:c.instructions+=1;goto B655955;
case 0x655957:goto L655957;
case 0x655959:goto L655959;
case 0x65595f:goto L65595f;
case 0x655961:c.instructions+=4;goto B655961;
case 0x655963:c.instructions+=3;goto B655963;
case 0x655968:c.instructions+=2;goto B655968;
case 0x655969:c.instructions+=1;goto B655969;
case 0x65596b:goto L65596b;
case 0x65596d:goto L65596d;
case 0x655973:goto L655973;
case 0x655978:c.instructions+=1;goto B655978;
case 0x65597d:goto L65597d;
case 0x65597f:c.instructions+=4;goto B65597f;
case 0x655984:c.instructions+=3;goto B655984;
case 0x655986:c.instructions+=2;goto B655986;
case 0x655987:c.instructions+=1;goto B655987;
case 0x655989:goto L655989;
case 0x65598b:goto L65598b;
case 0x65598d:goto L65598d;
case 0x655992:c.instructions+=1;goto B655992;
case 0x655997:goto L655997;
case 0x65599c:c.instructions+=1;goto B65599c;
case 0x65599e:goto L65599e;
case 0x6559a0:c.instructions+=2;goto B6559a0;
case 0x6559a1:c.instructions+=1;goto B6559a1;
case 0x6559a3:goto L6559a3;
case 0x6559a5:goto L6559a5;
case 0x6559ab:goto L6559ab;
case 0x6559b0:goto L6559b0;
case 0x6559b2:c.instructions+=4;goto B6559b2;
case 0x6559b7:c.instructions+=3;goto B6559b7;
case 0x6559b9:c.instructions+=2;goto B6559b9;
case 0x6559ba:c.instructions+=1;goto B6559ba;
case 0x6559bc:goto L6559bc;
case 0x6559be:goto L6559be;
case 0x6559c4:goto L6559c4;
case 0x6559c6:c.instructions+=4;goto B6559c6;
case 0x6559cb:c.instructions+=3;goto B6559cb;
case 0x6559cd:c.instructions+=2;goto B6559cd;
case 0x6559ce:c.instructions+=1;goto B6559ce;
case 0x6559d0:goto L6559d0;
case 0x6559d2:goto L6559d2;
case 0x6559d8:goto L6559d8;
case 0x6559da:c.instructions+=4;goto B6559da;
case 0x6559df:c.instructions+=3;goto B6559df;
case 0x6559e1:c.instructions+=2;goto B6559e1;
case 0x6559e2:c.instructions+=1;goto B6559e2;
case 0x6559e4:goto L6559e4;
case 0x6559e6:goto L6559e6;
case 0x6559ec:goto L6559ec;
case 0x6559ee:c.instructions+=4;goto B6559ee;
case 0x6559f3:c.instructions+=3;goto B6559f3;
case 0x6559f5:c.instructions+=2;goto B6559f5;
case 0x6559f6:c.instructions+=1;goto B6559f6;
case 0x6559f8:goto L6559f8;
case 0x6559fa:goto L6559fa;
case 0x655a00:goto L655a00;
case 0x655a02:c.instructions+=4;goto B655a02;
case 0x655a07:c.instructions+=3;goto B655a07;
case 0x655a09:c.instructions+=2;goto B655a09;
case 0x655a0a:c.instructions+=1;goto B655a0a;
case 0x655a0c:goto L655a0c;
case 0x655a0e:goto L655a0e;
case 0x655a10:goto L655a10;
case 0x655a15:c.instructions+=1;goto B655a15;
case 0x655a1a:goto L655a1a;
case 0x655a1c:c.instructions+=4;goto B655a1c;
case 0x655a21:c.instructions+=3;goto B655a21;
case 0x655a23:c.instructions+=2;goto B655a23;
case 0x655a24:c.instructions+=1;goto B655a24;
case 0x655a26:goto L655a26;
case 0x655a28:goto L655a28;
case 0x655a2a:goto L655a2a;
case 0x655a2f:c.instructions+=1;goto B655a2f;
case 0x655a34:goto L655a34;
case 0x655a36:c.instructions+=4;goto B655a36;
case 0x655a3b:c.instructions+=3;goto B655a3b;
case 0x655a3d:c.instructions+=2;goto B655a3d;
case 0x655a3e:c.instructions+=1;goto B655a3e;
case 0x655a40:goto L655a40;
case 0x655a42:goto L655a42;
case 0x655a44:goto L655a44;
case 0x655a49:c.instructions+=1;goto B655a49;
case 0x655a4e:goto L655a4e;
case 0x655a50:c.instructions+=4;goto B655a50;
case 0x655a55:c.instructions+=3;goto B655a55;
case 0x655a57:c.instructions+=2;goto B655a57;
case 0x655a58:c.instructions+=1;goto B655a58;
case 0x655a5a:goto L655a5a;
case 0x655a5c:goto L655a5c;
case 0x655a5e:goto L655a5e;
case 0x655a63:c.instructions+=1;goto B655a63;
case 0x655a68:goto L655a68;
case 0x655a6a:c.instructions+=4;goto B655a6a;
case 0x655a6f:c.instructions+=3;goto B655a6f;
case 0x655a71:c.instructions+=2;goto B655a71;
case 0x655a72:c.instructions+=1;goto B655a72;
case 0x655a74:goto L655a74;
case 0x655a76:goto L655a76;
case 0x655a7c:goto L655a7c;
case 0x655a81:c.instructions+=1;goto B655a81;
case 0x655a86:goto L655a86;
case 0x655a88:c.instructions+=4;goto B655a88;
case 0x655a8d:c.instructions+=3;goto B655a8d;
case 0x655a8f:c.instructions+=2;goto B655a8f;
case 0x655a90:c.instructions+=1;goto B655a90;
case 0x655a92:goto L655a92;
case 0x655a94:goto L655a94;
case 0x655a9a:goto L655a9a;
case 0x655a9c:c.instructions+=5;goto B655a9c;
case 0x655a9d:c.instructions+=4;goto B655a9d;
case 0x655aa2:c.instructions+=3;goto B655aa2;
case 0x655aa4:c.instructions+=2;goto B655aa4;
case 0x655aa6:c.instructions+=1;goto B655aa6;
case 0x655aa8:goto L655aa8;
case 0x655aaa:goto L655aaa;
case 0x655ab0:goto L655ab0;
case 0x655ab2:c.instructions+=4;goto B655ab2;
case 0x655ab7:c.instructions+=3;goto B655ab7;
case 0x655ab9:c.instructions+=2;goto B655ab9;
case 0x655aba:c.instructions+=1;goto B655aba;
case 0x655abc:goto L655abc;
case 0x655abe:goto L655abe;
case 0x655ac0:goto L655ac0;
case 0x655ac5:c.instructions+=1;goto B655ac5;
case 0x655aca:goto L655aca;
case 0x655acc:c.instructions+=4;goto B655acc;
case 0x655ad1:c.instructions+=3;goto B655ad1;
case 0x655ad3:c.instructions+=2;goto B655ad3;
case 0x655ad4:c.instructions+=1;goto B655ad4;
case 0x655ad6:goto L655ad6;
case 0x655ad8:goto L655ad8;
case 0x655ada:goto L655ada;
case 0x655adf:c.instructions+=1;goto B655adf;
case 0x655ae4:goto L655ae4;
case 0x655ae6:c.instructions+=3;goto B655ae6;
case 0x655aeb:c.instructions+=2;goto B655aeb;
case 0x655aed:c.instructions+=1;goto B655aed;
case 0x655aef:goto L655aef;
case 0x655af1:goto L655af1;
case 0x655af3:goto L655af3;
case 0x655af8:c.instructions+=1;goto B655af8;
case 0x655afd:goto L655afd;
case 0x655aff:c.instructions+=4;goto B655aff;
case 0x655b01:c.instructions+=3;goto B655b01;
case 0x655b06:c.instructions+=2;goto B655b06;
case 0x655b07:c.instructions+=1;goto B655b07;
case 0x655b09:goto L655b09;
case 0x655b0b:goto L655b0b;
case 0x655b11:goto L655b11;
case 0x655b14:goto L655b14;
case 0x655b17:c.instructions+=1;goto B655b17;
case 0x655b1c:goto L655b1c;
case 0x655b1f:c.instructions+=2;goto B655b1f;
case 0x655b20:c.instructions+=1;goto B655b20;
case 0x655b26:goto L655b26;
case 0x655b29:c.instructions+=1;goto B655b29;
case 0x655b2f:goto L655b2f;
case 0x655b32:c.instructions+=1;goto B655b32;
case 0x655b38:goto L655b38;
case 0x655b3b:c.instructions+=1;goto B655b3b;
case 0x655b41:goto L655b41;
case 0x655b46:c.instructions+=2;goto B655b46;
case 0x655b49:c.instructions+=1;goto B655b49;
case 0x655b4e:goto L655b4e;
case 0x655b50:c.instructions+=3;goto B655b50;
case 0x655b51:c.instructions+=2;goto B655b51;
case 0x655b52:c.instructions+=1;goto B655b52;
case 0x655b58:goto L655b58;
case 0x655b5d:c.instructions+=1;goto B655b5d;
case 0x655b62:goto L655b62;
case 0x655b64:c.instructions+=4;goto B655b64;
case 0x655b69:c.instructions+=3;goto B655b69;
case 0x655b6b:c.instructions+=2;goto B655b6b;
case 0x655b6c:c.instructions+=1;goto B655b6c;
case 0x655b6e:goto L655b6e;
case 0x655b70:goto L655b70;
case 0x655b72:goto L655b72;
case 0x655b77:c.instructions+=1;goto B655b77;
case 0x655b7c:goto L655b7c;
case 0x655b7e:c.instructions+=4;goto B655b7e;
case 0x655b83:c.instructions+=3;goto B655b83;
case 0x655b85:c.instructions+=2;goto B655b85;
case 0x655b86:c.instructions+=1;goto B655b86;
case 0x655b88:goto L655b88;
case 0x655b8a:goto L655b8a;
case 0x655b90:goto L655b90;
case 0x655b92:c.instructions+=4;goto B655b92;
case 0x655b97:c.instructions+=3;goto B655b97;
case 0x655b99:c.instructions+=2;goto B655b99;
case 0x655b9a:c.instructions+=1;goto B655b9a;
case 0x655b9c:goto L655b9c;
case 0x655b9e:goto L655b9e;
case 0x655ba4:goto L655ba4;
case 0x655ba6:c.instructions+=4;goto B655ba6;
case 0x655ba8:c.instructions+=3;goto B655ba8;
case 0x655bad:c.instructions+=2;goto B655bad;
case 0x655bae:c.instructions+=1;goto B655bae;
case 0x655bb0:goto L655bb0;
case 0x655bb2:goto L655bb2;
case 0x655bb8:goto L655bb8;
case 0x655bbd:c.instructions+=1;goto B655bbd;
case 0x655bc2:goto L655bc2;
case 0x655bc4:c.instructions+=4;goto B655bc4;
case 0x655bc9:c.instructions+=3;goto B655bc9;
case 0x655bcb:c.instructions+=2;goto B655bcb;
case 0x655bcc:c.instructions+=1;goto B655bcc;
case 0x655bce:goto L655bce;
case 0x655bd0:goto L655bd0;
case 0x655bd2:goto L655bd2;
case 0x655bd7:c.instructions+=1;goto B655bd7;
case 0x655bdc:goto L655bdc;
case 0x655bde:c.instructions+=4;goto B655bde;
case 0x655be3:c.instructions+=3;goto B655be3;
case 0x655be5:c.instructions+=2;goto B655be5;
case 0x655be6:c.instructions+=1;goto B655be6;
case 0x655be8:goto L655be8;
case 0x655bea:goto L655bea;
case 0x655bec:goto L655bec;
case 0x655bf1:c.instructions+=1;goto B655bf1;
case 0x655bf6:goto L655bf6;
case 0x655bf8:c.instructions+=4;goto B655bf8;
case 0x655bfd:c.instructions+=3;goto B655bfd;
case 0x655bff:c.instructions+=2;goto B655bff;
case 0x655c00:c.instructions+=1;goto B655c00;
case 0x655c02:goto L655c02;
case 0x655c04:goto L655c04;
case 0x655c06:goto L655c06;
case 0x655c0b:c.instructions+=1;goto B655c0b;
case 0x655c10:goto L655c10;
case 0x655c15:c.instructions+=2;goto B655c15;
case 0x655c17:c.instructions+=1;goto B655c17;
case 0x655c1c:goto L655c1c;
case 0x655c21:c.instructions+=1;goto B655c21;
case 0x655c26:goto L655c26;
case 0x655c28:c.instructions+=4;goto B655c28;
case 0x655c2a:c.instructions+=3;goto B655c2a;
case 0x655c2f:c.instructions+=2;goto B655c2f;
case 0x655c30:c.instructions+=1;goto B655c30;
case 0x655c32:goto L655c32;
case 0x655c34:goto L655c34;
case 0x655c3a:goto L655c3a;
case 0x655c3f:c.instructions+=1;goto B655c3f;
case 0x655c44:goto L655c44;
case 0x655c46:c.instructions+=4;goto B655c46;
case 0x655c4b:c.instructions+=3;goto B655c4b;
case 0x655c4d:c.instructions+=2;goto B655c4d;
case 0x655c4e:c.instructions+=1;goto B655c4e;
case 0x655c50:goto L655c50;
case 0x655c52:goto L655c52;
case 0x655c54:goto L655c54;
case 0x655c59:c.instructions+=1;goto B655c59;
case 0x655c5e:goto L655c5e;
case 0x655c60:c.instructions+=4;goto B655c60;
case 0x655c65:c.instructions+=3;goto B655c65;
case 0x655c67:c.instructions+=2;goto B655c67;
case 0x655c68:c.instructions+=1;goto B655c68;
case 0x655c6a:goto L655c6a;
case 0x655c6c:goto L655c6c;
case 0x655c6e:goto L655c6e;
case 0x655c73:c.instructions+=1;goto B655c73;
case 0x655c78:goto L655c78;
case 0x655c7a:c.instructions+=4;goto B655c7a;
case 0x655c7f:c.instructions+=3;goto B655c7f;
case 0x655c81:c.instructions+=2;goto B655c81;
case 0x655c82:c.instructions+=1;goto B655c82;
case 0x655c84:goto L655c84;
case 0x655c86:goto L655c86;
case 0x655c88:goto L655c88;
case 0x655c8d:c.instructions+=1;goto B655c8d;
case 0x655c92:goto L655c92;
case 0x655c94:c.instructions+=4;goto B655c94;
case 0x655c99:c.instructions+=3;goto B655c99;
case 0x655c9b:c.instructions+=2;goto B655c9b;
case 0x655c9c:c.instructions+=1;goto B655c9c;
case 0x655c9e:goto L655c9e;
case 0x655ca0:goto L655ca0;
case 0x655ca2:goto L655ca2;
case 0x655ca7:c.instructions+=1;goto B655ca7;
case 0x655cac:goto L655cac;
case 0x655cae:c.instructions+=4;goto B655cae;
case 0x655cb0:c.instructions+=3;goto B655cb0;
case 0x655cb5:c.instructions+=2;goto B655cb5;
case 0x655cb6:c.instructions+=1;goto B655cb6;
case 0x655cb8:goto L655cb8;
case 0x655cba:goto L655cba;
case 0x655cc0:goto L655cc0;
case 0x655cc5:c.instructions+=1;goto B655cc5;
case 0x655cca:goto L655cca;
case 0x655ccf:goto L655ccf;
case 0x655cd1:c.instructions+=1;goto B655cd1;
case 0x655cd6:goto L655cd6;
case 0x655cd8:c.instructions+=4;goto B655cd8;
case 0x655cdd:c.instructions+=3;goto B655cdd;
case 0x655cdf:c.instructions+=2;goto B655cdf;
case 0x655ce0:c.instructions+=1;goto B655ce0;
case 0x655ce2:goto L655ce2;
case 0x655ce4:goto L655ce4;
case 0x655ce6:goto L655ce6;
case 0x655ceb:c.instructions+=1;goto B655ceb;
case 0x655cf0:goto L655cf0;
case 0x655cf5:c.instructions+=2;goto B655cf5;
case 0x655cf7:c.instructions+=1;goto B655cf7;
case 0x655cfc:goto L655cfc;
case 0x655cfe:c.instructions+=4;goto B655cfe;
case 0x655d03:c.instructions+=3;goto B655d03;
case 0x655d05:c.instructions+=2;goto B655d05;
case 0x655d06:c.instructions+=1;goto B655d06;
case 0x655d08:goto L655d08;
case 0x655d0a:goto L655d0a;
case 0x655d10:goto L655d10;
case 0x655d15:c.instructions+=2;goto B655d15;
case 0x655d17:c.instructions+=1;goto B655d17;
case 0x655d1c:goto L655d1c;
case 0x655d1e:c.instructions+=4;goto B655d1e;
case 0x655d23:c.instructions+=3;goto B655d23;
case 0x655d25:c.instructions+=2;goto B655d25;
case 0x655d26:c.instructions+=1;goto B655d26;
case 0x655d28:goto L655d28;
case 0x655d2a:goto L655d2a;
case 0x655d2c:goto L655d2c;
case 0x655d31:c.instructions+=1;goto B655d31;
case 0x655d36:goto L655d36;
case 0x655d3b:goto L655d3b;
case 0x655d3d:c.instructions+=1;goto B655d3d;
case 0x655d42:goto L655d42;
case 0x655d44:c.instructions+=4;goto B655d44;
case 0x655d49:c.instructions+=3;goto B655d49;
case 0x655d4b:c.instructions+=2;goto B655d4b;
case 0x655d4c:c.instructions+=1;goto B655d4c;
case 0x655d4e:goto L655d4e;
case 0x655d50:goto L655d50;
case 0x655d52:goto L655d52;
case 0x655d57:c.instructions+=1;goto B655d57;
case 0x655d5c:goto L655d5c;
case 0x655d5e:c.instructions+=4;goto B655d5e;
case 0x655d63:c.instructions+=3;goto B655d63;
case 0x655d65:c.instructions+=2;goto B655d65;
case 0x655d66:c.instructions+=1;goto B655d66;
case 0x655d68:goto L655d68;
case 0x655d6a:goto L655d6a;
case 0x655d70:goto L655d70;
case 0x655d72:c.instructions+=4;goto B655d72;
case 0x655d77:c.instructions+=3;goto B655d77;
case 0x655d79:c.instructions+=2;goto B655d79;
case 0x655d7a:c.instructions+=1;goto B655d7a;
case 0x655d7c:goto L655d7c;
case 0x655d7e:goto L655d7e;
case 0x655d84:goto L655d84;
case 0x655d86:c.instructions+=4;goto B655d86;
case 0x655d8b:c.instructions+=3;goto B655d8b;
case 0x655d8d:c.instructions+=2;goto B655d8d;
case 0x655d8e:c.instructions+=1;goto B655d8e;
case 0x655d90:goto L655d90;
case 0x655d92:goto L655d92;
case 0x655d98:goto L655d98;
case 0x655d9b:c.instructions+=1;goto B655d9b;
case 0x655da1:goto L655da1;
case 0x655da3:c.instructions+=4;goto B655da3;
case 0x655da5:c.instructions+=3;goto B655da5;
case 0x655daa:c.instructions+=2;goto B655daa;
case 0x655dab:c.instructions+=1;goto B655dab;
case 0x655dad:goto L655dad;
case 0x655daf:goto L655daf;
case 0x655db5:goto L655db5;
case 0x655dba:c.instructions+=1;goto B655dba;
case 0x655dbf:goto L655dbf;
case 0x655dc1:c.instructions+=4;goto B655dc1;
case 0x655dc6:c.instructions+=3;goto B655dc6;
case 0x655dc8:c.instructions+=2;goto B655dc8;
case 0x655dc9:c.instructions+=1;goto B655dc9;
case 0x655dcb:goto L655dcb;
case 0x655dcd:goto L655dcd;
case 0x655dcf:goto L655dcf;
case 0x655dd4:c.instructions+=1;goto B655dd4;
case 0x655dd9:goto L655dd9;
case 0x655ddb:c.instructions+=4;goto B655ddb;
case 0x655de0:c.instructions+=3;goto B655de0;
case 0x655de2:c.instructions+=2;goto B655de2;
case 0x655de3:c.instructions+=1;goto B655de3;
case 0x655de5:goto L655de5;
case 0x655de7:goto L655de7;
case 0x655ded:goto L655ded;
case 0x655def:c.instructions+=4;goto B655def;
case 0x655df4:c.instructions+=3;goto B655df4;
case 0x655df6:c.instructions+=2;goto B655df6;
case 0x655df7:c.instructions+=1;goto B655df7;
case 0x655df9:goto L655df9;
case 0x655dfb:goto L655dfb;
case 0x655dfd:goto L655dfd;
case 0x655e02:c.instructions+=1;goto B655e02;
case 0x655e07:goto L655e07;
case 0x655e09:c.instructions+=4;goto B655e09;
case 0x655e0b:c.instructions+=3;goto B655e0b;
case 0x655e10:c.instructions+=2;goto B655e10;
case 0x655e11:c.instructions+=1;goto B655e11;
case 0x655e13:goto L655e13;
case 0x655e15:goto L655e15;
case 0x655e1b:goto L655e1b;
case 0x655e20:c.instructions+=1;goto B655e20;
case 0x655e25:goto L655e25;
case 0x655e27:c.instructions+=4;goto B655e27;
case 0x655e2c:c.instructions+=3;goto B655e2c;
case 0x655e2e:c.instructions+=2;goto B655e2e;
case 0x655e2f:c.instructions+=1;goto B655e2f;
case 0x655e31:goto L655e31;
case 0x655e33:goto L655e33;
case 0x655e35:goto L655e35;
case 0x655e3a:c.instructions+=1;goto B655e3a;
case 0x655e3f:goto L655e3f;
case 0x655e41:c.instructions+=4;goto B655e41;
case 0x655e46:c.instructions+=3;goto B655e46;
case 0x655e48:c.instructions+=2;goto B655e48;
case 0x655e49:c.instructions+=1;goto B655e49;
case 0x655e4b:goto L655e4b;
case 0x655e4d:goto L655e4d;
case 0x655e4f:goto L655e4f;
case 0x655e54:c.instructions+=1;goto B655e54;
case 0x655e59:goto L655e59;
case 0x655e5b:c.instructions+=4;goto B655e5b;
case 0x655e60:c.instructions+=3;goto B655e60;
case 0x655e62:c.instructions+=2;goto B655e62;
case 0x655e63:c.instructions+=1;goto B655e63;
case 0x655e65:goto L655e65;
case 0x655e67:goto L655e67;
case 0x655e69:goto L655e69;
case 0x655e6e:c.instructions+=1;goto B655e6e;
case 0x655e73:goto L655e73;
case 0x655e75:c.instructions+=4;goto B655e75;
case 0x655e7a:c.instructions+=3;goto B655e7a;
case 0x655e7c:c.instructions+=2;goto B655e7c;
case 0x655e7d:c.instructions+=1;goto B655e7d;
case 0x655e7f:goto L655e7f;
case 0x655e81:goto L655e81;
case 0x655e83:goto L655e83;
case 0x655e88:c.instructions+=1;goto B655e88;
case 0x655e8d:goto L655e8d;
case 0x655e8f:c.instructions+=4;goto B655e8f;
case 0x655e94:c.instructions+=3;goto B655e94;
case 0x655e96:c.instructions+=2;goto B655e96;
case 0x655e97:c.instructions+=1;goto B655e97;
case 0x655e99:goto L655e99;
case 0x655e9b:goto L655e9b;
case 0x655e9d:goto L655e9d;
case 0x655ea2:c.instructions+=1;goto B655ea2;
case 0x655ea7:goto L655ea7;
case 0x655ea9:c.instructions+=5;goto B655ea9;
case 0x655eaa:c.instructions+=4;goto B655eaa;
case 0x655eaf:c.instructions+=3;goto B655eaf;
case 0x655eb1:c.instructions+=2;goto B655eb1;
case 0x655eb3:c.instructions+=1;goto B655eb3;
case 0x655eb5:goto L655eb5;
case 0x655eb7:goto L655eb7;
case 0x655eb9:goto L655eb9;
case 0x655ebe:c.instructions+=1;goto B655ebe;
case 0x655ec3:goto L655ec3;
case 0x655ec5:c.instructions+=4;goto B655ec5;
case 0x655eca:c.instructions+=3;goto B655eca;
case 0x655ecc:c.instructions+=2;goto B655ecc;
case 0x655ecd:c.instructions+=1;goto B655ecd;
case 0x655ecf:goto L655ecf;
case 0x655ed1:goto L655ed1;
case 0x655ed7:goto L655ed7;
case 0x655edc:c.instructions+=3;goto B655edc;
case 0x655ede:c.instructions+=2;goto B655ede;
case 0x655ee0:c.instructions+=1;goto B655ee0;
case 0x655ee2:goto L655ee2;
case 0x655ee4:goto L655ee4;
case 0x655eea:goto L655eea;
case 0x655eef:c.instructions+=3;goto B655eef;
case 0x655ef1:c.instructions+=2;goto B655ef1;
case 0x655ef3:c.instructions+=1;goto B655ef3;
case 0x655ef5:goto L655ef5;
case 0x655ef7:goto L655ef7;
case 0x655efd:goto L655efd;
case 0x655eff:c.instructions+=4;goto B655eff;
case 0x655f04:c.instructions+=3;goto B655f04;
case 0x655f06:c.instructions+=2;goto B655f06;
case 0x655f07:c.instructions+=1;goto B655f07;
case 0x655f09:goto L655f09;
case 0x655f0b:goto L655f0b;
case 0x655f0d:goto L655f0d;
case 0x655f12:c.instructions+=1;goto B655f12;
case 0x655f17:goto L655f17;
case 0x655f1c:c.instructions+=3;goto B655f1c;
case 0x655f1e:c.instructions+=2;goto B655f1e;
case 0x655f20:c.instructions+=1;goto B655f20;
case 0x655f22:goto L655f22;
case 0x655f24:goto L655f24;
case 0x655f26:goto L655f26;
case 0x655f2b:c.instructions+=1;goto B655f2b;
case 0x655f30:goto L655f30;
case 0x655f32:c.instructions+=4;goto B655f32;
case 0x655f37:c.instructions+=3;goto B655f37;
case 0x655f39:c.instructions+=2;goto B655f39;
case 0x655f3a:c.instructions+=1;goto B655f3a;
case 0x655f3c:goto L655f3c;
case 0x655f3e:goto L655f3e;
case 0x655f44:goto L655f44;
case 0x655f49:c.instructions+=3;goto B655f49;
case 0x655f4b:c.instructions+=2;goto B655f4b;
case 0x655f4d:c.instructions+=1;goto B655f4d;
case 0x655f4f:goto L655f4f;
case 0x655f51:goto L655f51;
case 0x655f53:goto L655f53;
case 0x655f58:c.instructions+=1;goto B655f58;
case 0x655f5d:goto L655f5d;
case 0x655f62:c.instructions+=3;goto B655f62;
case 0x655f64:c.instructions+=2;goto B655f64;
case 0x655f66:c.instructions+=1;goto B655f66;
case 0x655f68:goto L655f68;
case 0x655f6a:goto L655f6a;
case 0x655f6c:goto L655f6c;
case 0x655f71:c.instructions+=1;goto B655f71;
case 0x655f76:goto L655f76;
case 0x655f78:c.instructions+=3;goto B655f78;
case 0x655f7d:c.instructions+=2;goto B655f7d;
case 0x655f7f:c.instructions+=1;goto B655f7f;
case 0x655f81:goto L655f81;
case 0x655f83:goto L655f83;
case 0x655f89:goto L655f89;
case 0x655f8c:c.instructions+=2;goto B655f8c;
case 0x655f8f:c.instructions+=1;goto B655f8f;
case 0x655f95:goto L655f95;
case 0x655f97:c.instructions+=4;goto B655f97;
case 0x655f9c:c.instructions+=3;goto B655f9c;
case 0x655f9e:c.instructions+=2;goto B655f9e;
case 0x655f9f:c.instructions+=1;goto B655f9f;
case 0x655fa1:goto L655fa1;
case 0x655fa3:goto L655fa3;
case 0x655fa5:goto L655fa5;
case 0x655faa:c.instructions+=1;goto B655faa;
case 0x655faf:goto L655faf;
case 0x655fb1:c.instructions+=4;goto B655fb1;
case 0x655fb3:c.instructions+=3;goto B655fb3;
case 0x655fb8:c.instructions+=2;goto B655fb8;
case 0x655fb9:c.instructions+=1;goto B655fb9;
case 0x655fbb:goto L655fbb;
case 0x655fbd:goto L655fbd;
case 0x655fc3:goto L655fc3;
case 0x655fc8:c.instructions+=1;goto B655fc8;
case 0x655fcd:goto L655fcd;
case 0x655fcf:c.instructions+=4;goto B655fcf;
case 0x655fd4:c.instructions+=3;goto B655fd4;
case 0x655fd6:c.instructions+=2;goto B655fd6;
case 0x655fd7:c.instructions+=1;goto B655fd7;
case 0x655fd9:goto L655fd9;
case 0x655fdb:goto L655fdb;
case 0x655fe1:goto L655fe1;
case 0x655fe3:c.instructions+=4;goto B655fe3;
case 0x655fe8:c.instructions+=3;goto B655fe8;
case 0x655fea:c.instructions+=2;goto B655fea;
case 0x655feb:c.instructions+=1;goto B655feb;
case 0x655fed:goto L655fed;
case 0x655fef:goto L655fef;
case 0x655ff1:goto L655ff1;
case 0x655ff6:c.instructions+=1;goto B655ff6;
case 0x655ffb:goto L655ffb;
case 0x655ffd:c.instructions+=1;goto B655ffd;
default:missing_instruction(c.pc);}
B655000:L655000:{c.instructions+=3;NFSU2_TR(0x655000);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B655003:{NFSU2_TR(0x655003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B655006:{NFSU2_TR(0x655006);
{goto L65500b;}
}
B655008:L655008:{c.instructions+=1;NFSU2_TR(0x655008);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65500b:L65500b:{c.instructions+=7;NFSU2_TR(0x65500b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65500e:{NFSU2_TR(0x65500e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65500f:{NFSU2_TR(0x65500f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B655011:{NFSU2_TR(0x655011);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655012:{NFSU2_TR(0x655012);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B655015:{NFSU2_TR(0x655015);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655016:{NFSU2_TR(0x655016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65501bull));
TAIL_STATIC(0x650379u,650);
}
B65501b:L65501b:{c.instructions+=3;NFSU2_TR(0x65501b);
__builtin_memmove((R+24),(R+0),4);
}
B65501d:{NFSU2_TR(0x65501d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65501f:{NFSU2_TR(0x65501f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B655025:L655025:{c.instructions+=7;NFSU2_TR(0x655025);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B65502b:{NFSU2_TR(0x65502b);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B65502e:{NFSU2_TR(0x65502e);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B655030:{NFSU2_TR(0x655030);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B655032:{NFSU2_TR(0x655032);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B655035:{NFSU2_TR(0x655035);
__builtin_memmove((R+0),(R+28),4);
}
B655037:{NFSU2_TR(0x655037);
if(r1(R+514)){{goto L65503c;}}
}
B655039:L655039:{c.instructions+=1;NFSU2_TR(0x655039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65503c:L65503c:{c.instructions+=7;NFSU2_TR(0x65503c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65503f:{NFSU2_TR(0x65503f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655040:{NFSU2_TR(0x655040);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655041:{NFSU2_TR(0x655041);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655044:{NFSU2_TR(0x655044);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B655046:{NFSU2_TR(0x655046);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655047:{NFSU2_TR(0x655047);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65504cull));
TAIL_STATIC(0x65289au,652);
}
B65504c:L65504c:{c.instructions+=3;NFSU2_TR(0x65504c);
__builtin_memmove((R+24),(R+0),4);
}
B65504e:{NFSU2_TR(0x65504e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B655050:{NFSU2_TR(0x655050);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B655056:L655056:{c.instructions+=6;NFSU2_TR(0x655056);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B655059:{NFSU2_TR(0x655059);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65505c:{NFSU2_TR(0x65505c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B655060:{NFSU2_TR(0x655060);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B655063:{NFSU2_TR(0x655063);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B655066:{NFSU2_TR(0x655066);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655008u);}goto L655008;}}
}
B655068:L655068:{c.instructions+=1;NFSU2_TR(0x655068);
{goto L65562c;}
}
B65506d:L65506d:{c.instructions+=4;NFSU2_TR(0x65506d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655070:{NFSU2_TR(0x655070);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B655073:{NFSU2_TR(0x655073);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B655076:{NFSU2_TR(0x655076);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6550e1;}}
}
B655078:L655078:{c.instructions+=8;NFSU2_TR(0x655078);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65507b:{NFSU2_TR(0x65507b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65507e:{NFSU2_TR(0x65507e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65507f:{NFSU2_TR(0x65507f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B655082:{NFSU2_TR(0x655082);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655083:{NFSU2_TR(0x655083);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B655086:{NFSU2_TR(0x655086);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655087:{NFSU2_TR(0x655087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65508cull));
TAIL_STATIC(0x6529d6u,652);
}
B65508c:L65508c:{c.instructions+=3;NFSU2_TR(0x65508c);
__builtin_memmove((R+24),(R+0),4);
}
B65508e:{NFSU2_TR(0x65508e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B655090:{NFSU2_TR(0x655090);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B655096:L655096:{c.instructions+=3;NFSU2_TR(0x655096);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65509a:{NFSU2_TR(0x65509a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65509e:{NFSU2_TR(0x65509e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65562c;}}
}
B6550a4:L6550a4:{c.instructions+=5;NFSU2_TR(0x6550a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6550a7:{NFSU2_TR(0x6550a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6550aa:{NFSU2_TR(0x6550aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6550ad:{NFSU2_TR(0x6550ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6550b0:{NFSU2_TR(0x6550b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6550b3:L6550b3:{c.instructions+=5;NFSU2_TR(0x6550b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6550b6:{NFSU2_TR(0x6550b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6550b7:{NFSU2_TR(0x6550b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6550b8:{NFSU2_TR(0x6550b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6550bb:{NFSU2_TR(0x6550bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6550c0ull));
TAIL_STATIC(0x65289au,652);
}
B6550c0:L6550c0:{c.instructions+=3;NFSU2_TR(0x6550c0);
__builtin_memmove((R+24),(R+0),4);
}
B6550c2:{NFSU2_TR(0x6550c2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6550c4:{NFSU2_TR(0x6550c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B6550ca:L6550ca:{c.instructions+=6;NFSU2_TR(0x6550ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6550cd:{NFSU2_TR(0x6550cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6550d0:{NFSU2_TR(0x6550d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6550d4:{NFSU2_TR(0x6550d4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6550d7:{NFSU2_TR(0x6550d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6550da:{NFSU2_TR(0x6550da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6550b3u);}goto L6550b3;}}
}
B6550dc:L6550dc:{c.instructions+=1;NFSU2_TR(0x6550dc);
{goto L65562c;}
}
B6550e1:L6550e1:{c.instructions+=2;NFSU2_TR(0x6550e1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6550e3:{NFSU2_TR(0x6550e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655647;}}
}
B6550e9:L6550e9:{c.instructions+=4;NFSU2_TR(0x6550e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6550ed:{NFSU2_TR(0x6550ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6550f1:{NFSU2_TR(0x6550f1);
__builtin_memmove((R+12),(R+0),4);
}
B6550f3:{NFSU2_TR(0x6550f3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65562c;}}
}
B6550f9:L6550f9:{c.instructions+=3;NFSU2_TR(0x6550f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6550fc:{NFSU2_TR(0x6550fc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B6550ff:{NFSU2_TR(0x6550ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B655102:L655102:{c.instructions+=8;NFSU2_TR(0x655102);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655105:{NFSU2_TR(0x655105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B655108:{NFSU2_TR(0x655108);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655109:{NFSU2_TR(0x655109);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65510c:{NFSU2_TR(0x65510c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65510d:{NFSU2_TR(0x65510d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B655110:{NFSU2_TR(0x655110);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655111:{NFSU2_TR(0x655111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655116ull));
TAIL_STATIC(0x6529d6u,652);
}
B655116:L655116:{c.instructions+=3;NFSU2_TR(0x655116);
__builtin_memmove((R+24),(R+0),4);
}
B655118:{NFSU2_TR(0x655118);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65511a:{NFSU2_TR(0x65511a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B655120:L655120:{c.instructions+=8;NFSU2_TR(0x655120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655123:{NFSU2_TR(0x655123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B655126:{NFSU2_TR(0x655126);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B655129:{NFSU2_TR(0x655129);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B65512c:{NFSU2_TR(0x65512c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65512d:{NFSU2_TR(0x65512d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65512e:{NFSU2_TR(0x65512e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B655131:{NFSU2_TR(0x655131);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655136ull));
TAIL_STATIC(0x65289au,652);
}
B655136:L655136:{c.instructions+=3;NFSU2_TR(0x655136);
__builtin_memmove((R+24),(R+0),4);
}
B655138:{NFSU2_TR(0x655138);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65513a:{NFSU2_TR(0x65513a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B655140:L655140:{c.instructions+=6;NFSU2_TR(0x655140);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B655143:{NFSU2_TR(0x655143);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655146:{NFSU2_TR(0x655146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65514a:{NFSU2_TR(0x65514a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65514d:{NFSU2_TR(0x65514d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B655150:{NFSU2_TR(0x655150);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655102u);}goto L655102;}}
}
B655152:L655152:{c.instructions+=1;NFSU2_TR(0x655152);
{goto L65562c;}
}
B655157:L655157:{c.instructions+=8;NFSU2_TR(0x655157);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65515a:{NFSU2_TR(0x65515a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B65515d:{NFSU2_TR(0x65515d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65515e:{NFSU2_TR(0x65515e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B655161:{NFSU2_TR(0x655161);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B655164:{NFSU2_TR(0x655164);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655165:{NFSU2_TR(0x655165);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B655168:{NFSU2_TR(0x655168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65516dull));
TAIL_STATIC(0x6529d6u,652);
}
B65516d:L65516d:{c.instructions+=3;NFSU2_TR(0x65516d);
__builtin_memmove((R+24),(R+0),4);
}
B65516f:{NFSU2_TR(0x65516f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B655171:{NFSU2_TR(0x655171);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B655177:L655177:{c.instructions+=4;NFSU2_TR(0x655177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65517a:{NFSU2_TR(0x65517a);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B65517e:{NFSU2_TR(0x65517e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B655181:{NFSU2_TR(0x655181);
if(r1(R+512)){{goto L65519e;}}
}
B655183:L655183:{c.instructions+=5;NFSU2_TR(0x655183);
u8 U[4];
w4(U+0,u32(0x7b43e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655188:{NFSU2_TR(0x655188);
u8 U[4];
w4(U+0,u32(0xbd6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65518d:{NFSU2_TR(0x65518d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65518e:{NFSU2_TR(0x65518e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B655191:{NFSU2_TR(0x655191);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655196ull));
TAIL_STATIC(0x64f52au,64f);
}
B655196:L655196:{c.instructions+=2;NFSU2_TR(0x655196);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B655199:{NFSU2_TR(0x655199);
{goto L655647;}
}
B65519e:L65519e:{c.instructions+=3;NFSU2_TR(0x65519e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6551a2:{NFSU2_TR(0x6551a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6551a6:{NFSU2_TR(0x6551a6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65562c;}}
}
B6551ac:L6551ac:{c.instructions+=4;NFSU2_TR(0x6551ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6551af:{NFSU2_TR(0x6551af);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6551b2:{NFSU2_TR(0x6551b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6551b5:{NFSU2_TR(0x6551b5);
__builtin_memmove((R+28),(R+0),4);
}
B6551b7:L6551b7:{c.instructions+=5;NFSU2_TR(0x6551b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6551ba:{NFSU2_TR(0x6551ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6551bd:{NFSU2_TR(0x6551bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6551be:{NFSU2_TR(0x6551be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6551bf:{NFSU2_TR(0x6551bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6551c4ull));
TAIL_STATIC(0x65289au,652);
}
B6551c4:L6551c4:{c.instructions+=3;NFSU2_TR(0x6551c4);
__builtin_memmove((R+24),(R+0),4);
}
B6551c6:{NFSU2_TR(0x6551c6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6551c8:{NFSU2_TR(0x6551c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B6551ce:L6551ce:{c.instructions+=6;NFSU2_TR(0x6551ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6551d1:{NFSU2_TR(0x6551d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6551d4:{NFSU2_TR(0x6551d4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6551d7:{NFSU2_TR(0x6551d7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6551da:{NFSU2_TR(0x6551da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6551dd:{NFSU2_TR(0x6551dd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6551b7u);}goto L6551b7;}}
}
B6551df:L6551df:{c.instructions+=1;NFSU2_TR(0x6551df);
{goto L65562c;}
}
B6551e4:L6551e4:{c.instructions+=2;NFSU2_TR(0x6551e4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6551e6:{NFSU2_TR(0x6551e6);
if(r1(R+518)){{goto L6552ea;}}
}
B6551ec:L6551ec:{c.instructions+=3;NFSU2_TR(0x6551ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6551ef:{NFSU2_TR(0x6551ef);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6551f1:{NFSU2_TR(0x6551f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65522f;}}
}
B6551f3:L6551f3:{c.instructions+=3;NFSU2_TR(0x6551f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6551f6:{NFSU2_TR(0x6551f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6551f9:{NFSU2_TR(0x6551f9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65562c;}}
}
B6551ff:L6551ff:{c.instructions+=2;NFSU2_TR(0x6551ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B655202:{NFSU2_TR(0x655202);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B655205:L655205:{c.instructions+=5;NFSU2_TR(0x655205);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B655208:{NFSU2_TR(0x655208);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655209:{NFSU2_TR(0x655209);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65520c:{NFSU2_TR(0x65520c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65520d:{NFSU2_TR(0x65520d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655212ull));
TAIL_STATIC(0x65289au,652);
}
B655212:L655212:{c.instructions+=3;NFSU2_TR(0x655212);
__builtin_memmove((R+24),(R+0),4);
}
B655214:{NFSU2_TR(0x655214);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B655216:{NFSU2_TR(0x655216);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B65521c:L65521c:{c.instructions+=5;NFSU2_TR(0x65521c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65521f:{NFSU2_TR(0x65521f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655222:{NFSU2_TR(0x655222);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B655225:{NFSU2_TR(0x655225);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B655228:{NFSU2_TR(0x655228);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655205u);}goto L655205;}}
}
B65522a:L65522a:{c.instructions+=1;NFSU2_TR(0x65522a);
{goto L65562c;}
}
B65522f:L65522f:{c.instructions+=2;NFSU2_TR(0x65522f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B655232:{NFSU2_TR(0x655232);
if(r1(R+518)){{goto L6552a3;}}
}
B655234:L655234:{c.instructions+=3;NFSU2_TR(0x655234);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B655237:{NFSU2_TR(0x655237);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65523a:{NFSU2_TR(0x65523a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6552a3;}}
}
B65523c:L65523c:{c.instructions+=3;NFSU2_TR(0x65523c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65523f:{NFSU2_TR(0x65523f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B655242:{NFSU2_TR(0x655242);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6552a3;}}
}
B655244:L655244:{c.instructions+=3;NFSU2_TR(0x655244);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B655246:{NFSU2_TR(0x655246);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B655249:{NFSU2_TR(0x655249);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65562c;}}
}
B65524f:L65524f:{c.instructions+=3;NFSU2_TR(0x65524f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B655251:{NFSU2_TR(0x655251);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B655253:{NFSU2_TR(0x655253);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L655293;}}
}
B655255:L655255:{c.instructions+=16;NFSU2_TR(0x655255);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B655259:{NFSU2_TR(0x655259);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65525c:{NFSU2_TR(0x65525c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65525d:{NFSU2_TR(0x65525d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B655260:{NFSU2_TR(0x655260);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B655263:{NFSU2_TR(0x655263);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B655267:{NFSU2_TR(0x655267);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B655269:{NFSU2_TR(0x655269);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65526c:{NFSU2_TR(0x65526c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B65526f:{NFSU2_TR(0x65526f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B655271:{NFSU2_TR(0x655271);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B655274:{NFSU2_TR(0x655274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B655277:{NFSU2_TR(0x655277);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655278:{NFSU2_TR(0x655278);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65527b:{NFSU2_TR(0x65527b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65527c:{NFSU2_TR(0x65527c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655281ull));
TAIL_STATIC(0x65289au,652);
}
B655281:L655281:{c.instructions+=3;NFSU2_TR(0x655281);
__builtin_memmove((R+24),(R+0),4);
}
B655283:{NFSU2_TR(0x655283);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B655285:{NFSU2_TR(0x655285);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B65528b:L65528b:{c.instructions+=4;NFSU2_TR(0x65528b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65528e:{NFSU2_TR(0x65528e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65528f:{NFSU2_TR(0x65528f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B655291:{NFSU2_TR(0x655291);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655255u);}goto L655255;}}
}
B655293:L655293:{c.instructions+=4;NFSU2_TR(0x655293);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B655296:{NFSU2_TR(0x655296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B655299:{NFSU2_TR(0x655299);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B65529c:{NFSU2_TR(0x65529c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65524fu);}goto L65524f;}}
}
B65529e:L65529e:{c.instructions+=1;NFSU2_TR(0x65529e);
{goto L65562c;}
}
B6552a3:L6552a3:{c.instructions+=3;NFSU2_TR(0x6552a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6552a6:{NFSU2_TR(0x6552a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6552a9:{NFSU2_TR(0x6552a9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65562c;}}
}
B6552af:L6552af:{c.instructions+=5;NFSU2_TR(0x6552af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6552b2:{NFSU2_TR(0x6552b2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B6552b5:{NFSU2_TR(0x6552b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6552b8:{NFSU2_TR(0x6552b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6552bb:{NFSU2_TR(0x6552bb);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B6552bd:L6552bd:{c.instructions+=6;NFSU2_TR(0x6552bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6552c0:{NFSU2_TR(0x6552c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6552c3:{NFSU2_TR(0x6552c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6552c6:{NFSU2_TR(0x6552c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6552c7:{NFSU2_TR(0x6552c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6552c8:{NFSU2_TR(0x6552c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6552cdull));
TAIL_STATIC(0x65289au,652);
}
B6552cd:L6552cd:{c.instructions+=3;NFSU2_TR(0x6552cd);
__builtin_memmove((R+24),(R+0),4);
}
B6552cf:{NFSU2_TR(0x6552cf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6552d1:{NFSU2_TR(0x6552d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B6552d7:L6552d7:{c.instructions+=5;NFSU2_TR(0x6552d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6552da:{NFSU2_TR(0x6552da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6552dd:{NFSU2_TR(0x6552dd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6552e0:{NFSU2_TR(0x6552e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6552e3:{NFSU2_TR(0x6552e3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6552bdu);}goto L6552bd;}}
}
B6552e5:L6552e5:{c.instructions+=1;NFSU2_TR(0x6552e5);
{goto L65562c;}
}
B6552ea:L6552ea:{c.instructions+=3;NFSU2_TR(0x6552ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6552ed:{NFSU2_TR(0x6552ed);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6552ef:{NFSU2_TR(0x6552ef);
if(r1(R+518)){{goto L655647;}}
}
B6552f5:L6552f5:{c.instructions+=2;NFSU2_TR(0x6552f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6552f9:{NFSU2_TR(0x6552f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655326;}}
}
B6552fb:L6552fb:{c.instructions+=3;NFSU2_TR(0x6552fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6552fe:{NFSU2_TR(0x6552fe);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B655301:{NFSU2_TR(0x655301);
if(r1(R+518)){{goto L655647;}}
}
B655307:L655307:{c.instructions+=6;NFSU2_TR(0x655307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65530a:{NFSU2_TR(0x65530a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B65530d:{NFSU2_TR(0x65530d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65530e:{NFSU2_TR(0x65530e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65530f:{NFSU2_TR(0x65530f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B655312:{NFSU2_TR(0x655312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655317ull));
TAIL_STATIC(0x65289au,652);
}
B655317:L655317:{c.instructions+=3;NFSU2_TR(0x655317);
__builtin_memmove((R+24),(R+0),4);
}
B655319:{NFSU2_TR(0x655319);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65531b:{NFSU2_TR(0x65531b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B655321:L655321:{c.instructions+=1;NFSU2_TR(0x655321);
{goto L65562c;}
}
B655326:L655326:{c.instructions+=2;NFSU2_TR(0x655326);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B655328:{NFSU2_TR(0x655328);
if(r1(R+518)){{goto L655647;}}
}
B65532e:L65532e:{c.instructions+=2;NFSU2_TR(0x65532e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B655331:{NFSU2_TR(0x655331);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655647;}}
}
B655337:L655337:{c.instructions+=1;NFSU2_TR(0x655337);
__builtin_memmove((R+12),(R+0),4);
}
B655339:L655339:{c.instructions+=3;NFSU2_TR(0x655339);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65533c:{NFSU2_TR(0x65533c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65533e:{NFSU2_TR(0x65533e);
if(r1(R+518)){{goto L6553a2;}}
}
B655340:L655340:{c.instructions+=2;NFSU2_TR(0x655340);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B655344:{NFSU2_TR(0x655344);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655372;}}
}
B655346:L655346:{c.instructions+=3;NFSU2_TR(0x655346);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B655349:{NFSU2_TR(0x655349);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65534c:{NFSU2_TR(0x65534c);
if(r1(R+518)){{goto L655647;}}
}
B655352:L655352:{c.instructions+=6;NFSU2_TR(0x655352);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655355:{NFSU2_TR(0x655355);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655356:{NFSU2_TR(0x655356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B655359:{NFSU2_TR(0x655359);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65535a:{NFSU2_TR(0x65535a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65535d:{NFSU2_TR(0x65535d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655362ull));
TAIL_STATIC(0x65289au,652);
}
B655362:L655362:{c.instructions+=3;NFSU2_TR(0x655362);
__builtin_memmove((R+24),(R+0),4);
}
B655364:{NFSU2_TR(0x655364);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B655366:{NFSU2_TR(0x655366);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B65536c:L65536c:{c.instructions+=2;NFSU2_TR(0x65536c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B655370:{NFSU2_TR(0x655370);
{goto L6553a2;}
}
B655372:L655372:{c.instructions+=2;NFSU2_TR(0x655372);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B655374:{NFSU2_TR(0x655374);
if(r1(R+518)){{goto L6553a2;}}
}
B655376:L655376:{c.instructions+=2;NFSU2_TR(0x655376);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65537a:{NFSU2_TR(0x65537a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6553a2;}}
}
B65537c:L65537c:{c.instructions+=4;NFSU2_TR(0x65537c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65537f:{NFSU2_TR(0x65537f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B655382:{NFSU2_TR(0x655382);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655383:{NFSU2_TR(0x655383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655388ull));
TAIL_STATIC(0x654e3cu,654);
}
B655388:L655388:{c.instructions+=3;NFSU2_TR(0x655388);
__builtin_memmove((R+24),(R+0),4);
}
B65538a:{NFSU2_TR(0x65538a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65538c:{NFSU2_TR(0x65538c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B655392:L655392:{c.instructions+=5;NFSU2_TR(0x655392);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655395:{NFSU2_TR(0x655395);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B655398:{NFSU2_TR(0x655398);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B65539c:{NFSU2_TR(0x65539c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65539f:{NFSU2_TR(0x65539f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6553a2:L6553a2:{c.instructions+=3;NFSU2_TR(0x6553a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6553a5:{NFSU2_TR(0x6553a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6553a7:{NFSU2_TR(0x6553a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655339u);}goto L655339;}}
}
B6553a9:L6553a9:{c.instructions+=1;NFSU2_TR(0x6553a9);
{goto L65562c;}
}
B6553ae:L6553ae:{c.instructions+=3;NFSU2_TR(0x6553ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6553b1:{NFSU2_TR(0x6553b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6553b4:{NFSU2_TR(0x6553b4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6553e8;}}
}
B6553b6:L6553b6:{c.instructions+=1;NFSU2_TR(0x6553b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6553b9:L6553b9:{c.instructions+=7;NFSU2_TR(0x6553b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6553bc:{NFSU2_TR(0x6553bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6553bf:{NFSU2_TR(0x6553bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6553c0:{NFSU2_TR(0x6553c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6553c1:{NFSU2_TR(0x6553c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6553c4:{NFSU2_TR(0x6553c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6553c5:{NFSU2_TR(0x6553c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6553caull));
TAIL_STATIC(0x650379u,650);
}
B6553ca:L6553ca:{c.instructions+=3;NFSU2_TR(0x6553ca);
__builtin_memmove((R+24),(R+0),4);
}
B6553cc:{NFSU2_TR(0x6553cc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6553ce:{NFSU2_TR(0x6553ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B6553d4:L6553d4:{c.instructions+=6;NFSU2_TR(0x6553d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6553d7:{NFSU2_TR(0x6553d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6553da:{NFSU2_TR(0x6553da);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6553e0:{NFSU2_TR(0x6553e0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6553e3:{NFSU2_TR(0x6553e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6553e6:{NFSU2_TR(0x6553e6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6553b9u);}goto L6553b9;}}
}
B6553e8:L6553e8:{c.instructions+=3;NFSU2_TR(0x6553e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6553ec:{NFSU2_TR(0x6553ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6553f0:{NFSU2_TR(0x6553f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L655427;}}
}
B6553f2:L6553f2:{c.instructions+=2;NFSU2_TR(0x6553f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6553f5:{NFSU2_TR(0x6553f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6553f8:L6553f8:{c.instructions+=6;NFSU2_TR(0x6553f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6553fb:{NFSU2_TR(0x6553fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6553fc:{NFSU2_TR(0x6553fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6553fd:{NFSU2_TR(0x6553fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B655400:{NFSU2_TR(0x655400);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655401:{NFSU2_TR(0x655401);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655406ull));
TAIL_STATIC(0x650379u,650);
}
B655406:L655406:{c.instructions+=3;NFSU2_TR(0x655406);
__builtin_memmove((R+24),(R+0),4);
}
B655408:{NFSU2_TR(0x655408);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65540a:{NFSU2_TR(0x65540a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B655410:L655410:{c.instructions+=6;NFSU2_TR(0x655410);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B655413:{NFSU2_TR(0x655413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655416:{NFSU2_TR(0x655416);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+8)),r4(U+0));
}
B65541c:{NFSU2_TR(0x65541c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B65541f:{NFSU2_TR(0x65541f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B655422:{NFSU2_TR(0x655422);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6553f8u);}goto L6553f8;}}
}
B655424:L655424:{c.instructions+=1;NFSU2_TR(0x655424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B655427:L655427:{c.instructions+=2;NFSU2_TR(0x655427);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B655429:{NFSU2_TR(0x655429);
if(r1(R+518)){{goto L655437;}}
}
B65542b:L65542b:{c.instructions+=3;NFSU2_TR(0x65542b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65542e:{NFSU2_TR(0x65542e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B655431:{NFSU2_TR(0x655431);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655647;}}
}
B655437:L655437:{c.instructions+=2;NFSU2_TR(0x655437);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65543b:{NFSU2_TR(0x65543b);
if(r1(R+518)){{goto L655449;}}
}
B65543d:L65543d:{c.instructions+=3;NFSU2_TR(0x65543d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655440:{NFSU2_TR(0x655440);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B655443:{NFSU2_TR(0x655443);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655647;}}
}
B655449:L655449:{c.instructions+=3;NFSU2_TR(0x655449);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65544d:{NFSU2_TR(0x65544d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B655451:{NFSU2_TR(0x655451);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6555f6;}}
}
B655457:L655457:{c.instructions+=9;NFSU2_TR(0x655457);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65545a:{NFSU2_TR(0x65545a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65545d:{NFSU2_TR(0x65545d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B65545f:{NFSU2_TR(0x65545f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B655462:{NFSU2_TR(0x655462);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655465:{NFSU2_TR(0x655465);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B655467:{NFSU2_TR(0x655467);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65546a:{NFSU2_TR(0x65546a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65546d:{NFSU2_TR(0x65546d);
w4(R+12,u32(0xbd9ull));
}
B655472:L655472:{c.instructions+=2;NFSU2_TR(0x655472);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B655476:{NFSU2_TR(0x655476);
if(r1(R+518)){{goto L655480;}}
}
B655478:L655478:{c.instructions+=3;NFSU2_TR(0x655478);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65547b:{NFSU2_TR(0x65547b);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B65547e:{NFSU2_TR(0x65547e);
{goto L655482;}
}
B655480:L655480:{c.instructions+=1;NFSU2_TR(0x655480);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B655482:L655482:{c.instructions+=3;NFSU2_TR(0x655482);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B655486:{NFSU2_TR(0x655486);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B655489:{NFSU2_TR(0x655489);
if(r1(R+518)){{goto L65548f;}}
}
B65548b:L65548b:{c.instructions+=2;NFSU2_TR(0x65548b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B65548d:{NFSU2_TR(0x65548d);
{goto L655491;}
}
B65548f:L65548f:{c.instructions+=1;NFSU2_TR(0x65548f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B655491:L655491:{c.instructions+=5;NFSU2_TR(0x655491);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655494:{NFSU2_TR(0x655494);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B655497:{NFSU2_TR(0x655497);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B65549a:{NFSU2_TR(0x65549a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65549d:{NFSU2_TR(0x65549d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L655645;}}
}
B6554a3:L6554a3:{c.instructions+=1;NFSU2_TR(0x6554a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x655659ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6554aa:L6554aa:{c.instructions+=1;NFSU2_TR(0x6554aa);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6554b0:L6554b0:{c.instructions+=5;NFSU2_TR(0x6554b0);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6554b2:{NFSU2_TR(0x6554b2);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6554b4:{NFSU2_TR(0x6554b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6554b6:{NFSU2_TR(0x6554b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6554b8:{NFSU2_TR(0x6554b8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6554bb:L6554bb:{c.instructions+=1;NFSU2_TR(0x6554bb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6555dc;}}
}
B6554c1:L6554c1:{c.instructions+=2;NFSU2_TR(0x6554c1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6554c3:{NFSU2_TR(0x6554c3);
{goto L6555de;}
}
B6554c8:L6554c8:{c.instructions+=2;NFSU2_TR(0x6554c8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6554ca:{NFSU2_TR(0x6554ca);
{goto L6555de;}
}
B6554cf:L6554cf:{c.instructions+=2;NFSU2_TR(0x6554cf);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B6554d2:{NFSU2_TR(0x6554d2);
{goto L6555de;}
}
B6554d7:L6554d7:{c.instructions+=6;NFSU2_TR(0x6554d7);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6554da:{NFSU2_TR(0x6554da);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6554e0:{NFSU2_TR(0x6554e0);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6554e2:{NFSU2_TR(0x6554e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6554e4:{NFSU2_TR(0x6554e4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6554e7:{NFSU2_TR(0x6554e7);
if(r1(R+514)){{goto L655503;}}
}
B6554e9:L6554e9:{c.instructions+=7;NFSU2_TR(0x6554e9);
u8 U[4];
w4(U+0,u32(0x7b40d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6554ee:{NFSU2_TR(0x6554ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6554f0:{NFSU2_TR(0x6554f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6554f1:{NFSU2_TR(0x6554f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6554f4:{NFSU2_TR(0x6554f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6554f5:{NFSU2_TR(0x6554f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6554f8:{NFSU2_TR(0x6554f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6554fdull));
TAIL_STATIC(0x64f52au,64f);
}
B6554fd:L6554fd:{c.instructions+=2;NFSU2_TR(0x6554fd);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B655500:{NFSU2_TR(0x655500);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B655503:L655503:{c.instructions+=2;NFSU2_TR(0x655503);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x30"::"a"(ea_):"memory");}
}
B655506:{NFSU2_TR(0x655506);
{goto L6555de;}
}
B65550b:L65550b:{c.instructions+=7;NFSU2_TR(0x65550b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B65550d:{NFSU2_TR(0x65550d);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B655510:{NFSU2_TR(0x655510);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B655516:{NFSU2_TR(0x655516);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B655518:{NFSU2_TR(0x655518);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B65551a:{NFSU2_TR(0x65551a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B65551d:{NFSU2_TR(0x65551d);
if(r1(R+514)){{goto L655534;}}
}
B65551f:L65551f:{c.instructions+=6;NFSU2_TR(0x65551f);
u8 U[4];
w4(U+0,u32(0x7b40d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655524:{NFSU2_TR(0x655524);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655525:{NFSU2_TR(0x655525);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B655528:{NFSU2_TR(0x655528);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655529:{NFSU2_TR(0x655529);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65552c:{NFSU2_TR(0x65552c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655531ull));
TAIL_STATIC(0x64f52au,64f);
}
B655531:L655531:{c.instructions+=1;NFSU2_TR(0x655531);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B655534:L655534:{c.instructions+=3;NFSU2_TR(0x655534);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B655537:{NFSU2_TR(0x655537);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B65553a:{NFSU2_TR(0x65553a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65553full));
TAIL_STATIC(0x75eddau,75e);
}
B65553f:L65553f:{c.instructions+=1;NFSU2_TR(0x65553f);
{goto L6555de;}
}
B655544:L655544:{c.instructions+=2;NFSU2_TR(0x655544);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B655547:{NFSU2_TR(0x655547);
{goto L6555de;}
}
B65554c:L65554c:{c.instructions+=2;NFSU2_TR(0x65554c);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B65554f:{NFSU2_TR(0x65554f);
{goto L6555de;}
}
B655554:L655554:{c.instructions+=4;NFSU2_TR(0x655554);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B655557:{NFSU2_TR(0x655557);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B655559:{NFSU2_TR(0x655559);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B65555c:{NFSU2_TR(0x65555c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6554bbu);}goto L6554bb;}
}
B655561:L655561:{c.instructions+=4;NFSU2_TR(0x655561);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B655564:{NFSU2_TR(0x655564);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B655566:{NFSU2_TR(0x655566);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B655569:{NFSU2_TR(0x655569);
{goto L655580;}
}
B65556b:L65556b:{c.instructions+=4;NFSU2_TR(0x65556b);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B65556e:{NFSU2_TR(0x65556e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B655570:{NFSU2_TR(0x655570);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B655573:{NFSU2_TR(0x655573);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6554bbu);}goto L6554bb;}
}
B655578:L655578:{c.instructions+=3;NFSU2_TR(0x655578);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B65557b:{NFSU2_TR(0x65557b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B65557d:{NFSU2_TR(0x65557d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B655580:L655580:{c.instructions+=1;NFSU2_TR(0x655580);
if(r1(R+518)){{goto L6555dc;}}
}
B655582:L655582:{c.instructions+=1;NFSU2_TR(0x655582);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6554c1u);}goto L6554c1;}
}
B655587:L655587:{c.instructions+=2;NFSU2_TR(0x655587);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B65558a:{NFSU2_TR(0x65558a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6554b0u);}goto L6554b0;}
}
B65558f:L65558f:{c.instructions+=5;NFSU2_TR(0x65558f);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B655592:{NFSU2_TR(0x655592);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B655594:{NFSU2_TR(0x655594);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B655596:{NFSU2_TR(0x655596);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B655598:{NFSU2_TR(0x655598);
{goto L6555d1;}
}
B65559a:L65559a:{c.instructions+=7;NFSU2_TR(0x65559a);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6555a0:{NFSU2_TR(0x6555a0);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6555a2:{NFSU2_TR(0x6555a2);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6555a4:{NFSU2_TR(0x6555a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6555a6:{NFSU2_TR(0x6555a6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6555a8:{NFSU2_TR(0x6555a8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6555ab:{NFSU2_TR(0x6555ab);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6554c1u);}goto L6554c1;}}
}
B6555b1:L6555b1:{c.instructions+=1;NFSU2_TR(0x6555b1);
{goto L6555c6;}
}
B6555b3:L6555b3:{c.instructions+=7;NFSU2_TR(0x6555b3);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6555b9:{NFSU2_TR(0x6555b9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6555bb:{NFSU2_TR(0x6555bb);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6555bd:{NFSU2_TR(0x6555bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6555bf:{NFSU2_TR(0x6555bf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6555c1:{NFSU2_TR(0x6555c1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6555c4:{NFSU2_TR(0x6555c4);
if(r1(R+514)){{goto L6555dc;}}
}
B6555c6:L6555c6:{c.instructions+=3;NFSU2_TR(0x6555c6);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6555cc:{NFSU2_TR(0x6555cc);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6555cf:{NFSU2_TR(0x6555cf);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6555d1:L6555d1:{c.instructions+=3;NFSU2_TR(0x6555d1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6555d3:{NFSU2_TR(0x6555d3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6555d6:{NFSU2_TR(0x6555d6);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6554c1u);}goto L6554c1;}}
}
B6555dc:L6555dc:{c.instructions+=1;NFSU2_TR(0x6555dc);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6555de:L6555de:{c.instructions+=7;NFSU2_TR(0x6555de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6555e1:{NFSU2_TR(0x6555e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6555e4:{NFSU2_TR(0x6555e4);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6555e7:{NFSU2_TR(0x6555e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6555ea:{NFSU2_TR(0x6555ea);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6555ed:{NFSU2_TR(0x6555ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6555f0:{NFSU2_TR(0x6555f0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655472u);}goto L655472;}}
}
B6555f6:L6555f6:{c.instructions+=3;NFSU2_TR(0x6555f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6555fa:{NFSU2_TR(0x6555fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6555fe:{NFSU2_TR(0x6555fe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65562c;}}
}
B655600:L655600:{c.instructions+=2;NFSU2_TR(0x655600);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B655603:{NFSU2_TR(0x655603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B655606:L655606:{c.instructions+=8;NFSU2_TR(0x655606);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B655609:{NFSU2_TR(0x655609);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65560a:{NFSU2_TR(0x65560a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65560b:{NFSU2_TR(0x65560b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65560c:{NFSU2_TR(0x65560c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65560f:{NFSU2_TR(0x65560f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B655612:{NFSU2_TR(0x655612);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655613:{NFSU2_TR(0x655613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655618ull));
TAIL_STATIC(0x652a35u,652);
}
B655618:L655618:{c.instructions+=3;NFSU2_TR(0x655618);
__builtin_memmove((R+24),(R+0),4);
}
B65561a:{NFSU2_TR(0x65561a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65561c:{NFSU2_TR(0x65561c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65562e;}}
}
B65561e:L65561e:{c.instructions+=5;NFSU2_TR(0x65561e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B655621:{NFSU2_TR(0x655621);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655624:{NFSU2_TR(0x655624);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B655627:{NFSU2_TR(0x655627);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65562a:{NFSU2_TR(0x65562a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655606u);}goto L655606;}}
}
B65562c:L65562c:{c.instructions+=1;NFSU2_TR(0x65562c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65562e:L65562e:{c.instructions+=2;NFSU2_TR(0x65562e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B655631:{NFSU2_TR(0x655631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655636ull));
TAIL_STATIC(0x575630u,575);
}
B655636:L655636:{c.instructions+=2;NFSU2_TR(0x655636);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B655639:{NFSU2_TR(0x655639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65563eull));
TAIL_STATIC(0x575630u,575);
}
B65563e:L65563e:{c.instructions+=5;NFSU2_TR(0x65563e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65563f:{NFSU2_TR(0x65563f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655640:{NFSU2_TR(0x655640);
__builtin_memmove((R+0),(R+24),4);
}
B655642:{NFSU2_TR(0x655642);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B655643:{NFSU2_TR(0x655643);
{goto L655653;}
}
B655645:L655645:{c.instructions+=1;NFSU2_TR(0x655645);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B655647:L655647:{c.instructions+=2;NFSU2_TR(0x655647);
w4(R+24,u32(0x80004005ull));
}
B65564c:{NFSU2_TR(0x65564c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65562eu);}goto L65562e;}
}
B65564e:L65564e:{c.instructions+=1;NFSU2_TR(0x65564e);
w4(R+0,u32(0x80004005ull));
}
B655653:L655653:{c.instructions+=4;NFSU2_TR(0x655653);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B655654:{NFSU2_TR(0x655654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B655655:{NFSU2_TR(0x655655);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B655656:{NFSU2_TR(0x655656);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B655699:L655699:{c.instructions+=10;NFSU2_TR(0x655699);
__builtin_memmove((R+28),(R+28),4);
}
B65569b:{NFSU2_TR(0x65569b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65569c:{NFSU2_TR(0x65569c);
__builtin_memmove((R+20),(R+16),4);
}
B65569e:{NFSU2_TR(0x65569e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6556a1:{NFSU2_TR(0x6556a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6556a2:{NFSU2_TR(0x6556a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6556a3:{NFSU2_TR(0x6556a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6556a6:{NFSU2_TR(0x6556a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6556a8:{NFSU2_TR(0x6556a8);
__builtin_memmove((R+24),(R+4),4);
}
B6556aa:{NFSU2_TR(0x6556aa);
if(r1(R+518)){{goto L6557b8;}}
}
B6556b0:L6556b0:{c.instructions+=4;NFSU2_TR(0x6556b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6556b3:{NFSU2_TR(0x6556b3);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6556b7:{NFSU2_TR(0x6556b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6556ba:{NFSU2_TR(0x6556ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6557a1;}}
}
B6556c0:L6556c0:{c.instructions+=2;NFSU2_TR(0x6556c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6556c3:{NFSU2_TR(0x6556c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6556c8ull));
TAIL_STATIC(0x64fae7u,64f);
}
B6556c8:L6556c8:{c.instructions+=2;NFSU2_TR(0x6556c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6556ca:{NFSU2_TR(0x6556ca);
if(r1(R+518)){{goto L6557a1;}}
}
B6556d0:L6556d0:{c.instructions+=3;NFSU2_TR(0x6556d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6556d1:{NFSU2_TR(0x6556d1);
__builtin_memmove((R+4),(R+24),4);
}
B6556d3:{NFSU2_TR(0x6556d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6556d8ull));
TAIL_STATIC(0x650453u,650);
}
B6556d8:L6556d8:{c.instructions+=2;NFSU2_TR(0x6556d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6556da:{NFSU2_TR(0x6556da);
if(r1(R+518)){{goto L655726;}}
}
B6556dc:L6556dc:{c.instructions+=5;NFSU2_TR(0x6556dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6556df:{NFSU2_TR(0x6556df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6556e0:{NFSU2_TR(0x6556e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6556e1:{NFSU2_TR(0x6556e1);
__builtin_memmove((R+4),(R+24),4);
}
B6556e3:{NFSU2_TR(0x6556e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6556e8ull));
TAIL_STATIC(0x654e3cu,654);
}
B6556e8:L6556e8:{c.instructions+=2;NFSU2_TR(0x6556e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6556ea:{NFSU2_TR(0x6556ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L655726;}}
}
B6556ec:L6556ec:{c.instructions+=8;NFSU2_TR(0x6556ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6556ef:{NFSU2_TR(0x6556ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6556f0:{NFSU2_TR(0x6556f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6556f3:{NFSU2_TR(0x6556f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6556f4:{NFSU2_TR(0x6556f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6556f7:{NFSU2_TR(0x6556f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6556f8:{NFSU2_TR(0x6556f8);
__builtin_memmove((R+4),(R+24),4);
}
B6556fa:{NFSU2_TR(0x6556fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6556ffull));
TAIL_STATIC(0x650379u,650);
}
B6556ff:L6556ff:{c.instructions+=2;NFSU2_TR(0x6556ff);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B655701:{NFSU2_TR(0x655701);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L655726;}}
}
B655703:L655703:{c.instructions+=7;NFSU2_TR(0x655703);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B655706:{NFSU2_TR(0x655706);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B65570c:{NFSU2_TR(0x65570c);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B65570e:{NFSU2_TR(0x65570e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B655710:{NFSU2_TR(0x655710);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B655713:{NFSU2_TR(0x655713);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655716:{NFSU2_TR(0x655716);
if(r1(R+514)){{goto L65571b;}}
}
B655718:L655718:{c.instructions+=1;NFSU2_TR(0x655718);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65571b:L65571b:{c.instructions+=2;NFSU2_TR(0x65571b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65571c:{NFSU2_TR(0x65571c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655721ull));
TAIL_STATIC(0x672440u,672);
}
B655721:L655721:{c.instructions+=1;NFSU2_TR(0x655721);
{goto L6557ba;}
}
B655726:L655726:{c.instructions+=2;NFSU2_TR(0x655726);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655728:{NFSU2_TR(0x655728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65572dull));
TAIL_STATIC(0x645362u,645);
}
B65572d:L65572d:{c.instructions+=2;NFSU2_TR(0x65572d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65572f:{NFSU2_TR(0x65572f);
if(r1(R+518)){{goto L65573c;}}
}
B655731:L655731:{c.instructions+=2;NFSU2_TR(0x655731);
__builtin_memmove((R+4),(R+0),4);
}
B655733:{NFSU2_TR(0x655733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655738ull));
TAIL_STATIC(0x672cb8u,672);
}
B655738:L655738:{c.instructions+=2;NFSU2_TR(0x655738);
__builtin_memmove((R+24),(R+0),4);
}
B65573a:{NFSU2_TR(0x65573a);
{goto L65573e;}
}
B65573c:L65573c:{c.instructions+=1;NFSU2_TR(0x65573c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65573e:L65573e:{c.instructions+=2;NFSU2_TR(0x65573e);
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
B655740:{NFSU2_TR(0x655740);
if(r1(R+518)){{goto L6557b8;}}
}
B655742:L655742:{c.instructions+=4;NFSU2_TR(0x655742);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B655749:{NFSU2_TR(0x655749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65574b:{NFSU2_TR(0x65574b);
__builtin_memmove((R+4),(R+28),4);
}
B65574d:{NFSU2_TR(0x65574d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655750ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B655750:L655750:{c.instructions+=3;NFSU2_TR(0x655750);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B655752:{NFSU2_TR(0x655752);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B655755:{NFSU2_TR(0x655755);
if(r1(R+518)){{goto L6557b8;}}
}
B655757:L655757:{c.instructions+=3;NFSU2_TR(0x655757);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65575a:{NFSU2_TR(0x65575a);
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
B65575c:{NFSU2_TR(0x65575c);
if(r1(R+518)){{goto L65576a;}}
}
B65575e:L65575e:{c.instructions+=2;NFSU2_TR(0x65575e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B655760:{NFSU2_TR(0x655760);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655763ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B655763:L655763:{c.instructions+=3;NFSU2_TR(0x655763);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B655765:{NFSU2_TR(0x655765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B655768:{NFSU2_TR(0x655768);
if(r1(R+518)){{goto L6557b8;}}
}
B65576a:L65576a:{c.instructions+=3;NFSU2_TR(0x65576a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65576d:{NFSU2_TR(0x65576d);
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
B65576f:{NFSU2_TR(0x65576f);
if(r1(R+518)){{goto L65577d;}}
}
B655771:L655771:{c.instructions+=2;NFSU2_TR(0x655771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B655773:{NFSU2_TR(0x655773);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655776ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B655776:L655776:{c.instructions+=3;NFSU2_TR(0x655776);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B655778:{NFSU2_TR(0x655778);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65577b:{NFSU2_TR(0x65577b);
if(r1(R+518)){{goto L6557b8;}}
}
B65577d:L65577d:{c.instructions+=2;NFSU2_TR(0x65577d);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65577f:{NFSU2_TR(0x65577f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655784ull));
TAIL_STATIC(0x645362u,645);
}
B655784:L655784:{c.instructions+=2;NFSU2_TR(0x655784);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B655786:{NFSU2_TR(0x655786);
if(r1(R+518)){{goto L655799;}}
}
B655788:L655788:{c.instructions+=5;NFSU2_TR(0x655788);
u8 U[4];
w4(U+0,u32(0x7b3cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65578d:{NFSU2_TR(0x65578d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65578f:{NFSU2_TR(0x65578f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655790:{NFSU2_TR(0x655790);
__builtin_memmove((R+4),(R+0),4);
}
B655792:{NFSU2_TR(0x655792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655797ull));
TAIL_STATIC(0x672498u,672);
}
B655797:L655797:{c.instructions+=1;NFSU2_TR(0x655797);
{goto L65579b;}
}
B655799:L655799:{c.instructions+=1;NFSU2_TR(0x655799);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65579b:L65579b:{c.instructions+=2;NFSU2_TR(0x65579b);
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
B65579d:{NFSU2_TR(0x65579d);
if(r1(R+518)){{goto L6557b8;}}
}
B65579f:L65579f:{c.instructions+=1;NFSU2_TR(0x65579f);
{goto L6557ba;}
}
B6557a1:L6557a1:{c.instructions+=6;NFSU2_TR(0x6557a1);
u8 U[4];
w4(U+0,u32(0x7b3f3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6557a6:{NFSU2_TR(0x6557a6);
u8 U[4];
w4(U+0,u32(0xbcbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6557ab:{NFSU2_TR(0x6557ab);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B6557ae:{NFSU2_TR(0x6557ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6557af:{NFSU2_TR(0x6557af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6557b0:{NFSU2_TR(0x6557b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6557b5ull));
TAIL_STATIC(0x64f52au,64f);
}
B6557b5:L6557b5:{c.instructions+=1;NFSU2_TR(0x6557b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6557b8:L6557b8:{c.instructions+=1;NFSU2_TR(0x6557b8);
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
B6557ba:L6557ba:{c.instructions+=4;NFSU2_TR(0x6557ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6557bb:{NFSU2_TR(0x6557bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6557bc:{NFSU2_TR(0x6557bc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6557bd:{NFSU2_TR(0x6557bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6557c0:L6557c0:{c.instructions+=11;NFSU2_TR(0x6557c0);
__builtin_memmove((R+28),(R+28),4);
}
B6557c2:{NFSU2_TR(0x6557c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6557c3:{NFSU2_TR(0x6557c3);
__builtin_memmove((R+20),(R+16),4);
}
B6557c5:{NFSU2_TR(0x6557c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6557c6:{NFSU2_TR(0x6557c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6557c7:{NFSU2_TR(0x6557c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6557c8:{NFSU2_TR(0x6557c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6557c9:{NFSU2_TR(0x6557c9);
__builtin_memmove((R+12),(R+4),4);
}
B6557cb:{NFSU2_TR(0x6557cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6557cc:{NFSU2_TR(0x6557cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6557cf:{NFSU2_TR(0x6557cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6557d2:L6557d2:{c.instructions+=3;NFSU2_TR(0x6557d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6557d5:{NFSU2_TR(0x6557d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6557d6:{NFSU2_TR(0x6557d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6557dbull));
TAIL_STATIC(0x6472a1u,647);
}
B6557db:L6557db:{c.instructions+=2;NFSU2_TR(0x6557db);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6557dd:{NFSU2_TR(0x6557dd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6557ee;}}
}
B6557df:L6557df:{c.instructions+=2;NFSU2_TR(0x6557df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6557e6:{NFSU2_TR(0x6557e6);
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
B6557e9:L6557e9:{c.instructions+=5;NFSU2_TR(0x6557e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6557ea:{NFSU2_TR(0x6557ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6557eb:{NFSU2_TR(0x6557eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6557ec:{NFSU2_TR(0x6557ec);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6557ed:{NFSU2_TR(0x6557ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6557ee:L6557ee:{c.instructions+=3;NFSU2_TR(0x6557ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6557f0:{NFSU2_TR(0x6557f0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6557f3:{NFSU2_TR(0x6557f3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557d2u);}goto L6557d2;}}
}
B6557f5:L6557f5:{c.instructions+=1;NFSU2_TR(0x6557f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x656287ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6557fc:L6557fc:{c.instructions+=3;NFSU2_TR(0x6557fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6557ff:{NFSU2_TR(0x6557ff);
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
B655801:{NFSU2_TR(0x655801);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655809;}}
}
B655803:L655803:{c.instructions+=2;NFSU2_TR(0x655803);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B655807:{NFSU2_TR(0x655807);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655809:L655809:{c.instructions+=2;NFSU2_TR(0x655809);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B65580d:{NFSU2_TR(0x65580d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65617cu,656);}
}
B655813:L655813:{c.instructions+=2;NFSU2_TR(0x655813);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B655816:{NFSU2_TR(0x655816);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65589c;}}
}
B65581c:L65581c:{c.instructions+=3;NFSU2_TR(0x65581c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B655820:{NFSU2_TR(0x655820);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655823:{NFSU2_TR(0x655823);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L655860;}}
}
B655825:L655825:{c.instructions+=1;NFSU2_TR(0x655825);
if(r1(R+518)){{goto L655859;}}
}
B655827:L655827:{c.instructions+=2;NFSU2_TR(0x655827);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x21ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x21ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65582a:{NFSU2_TR(0x65582a);
if(r1(R+518)){{goto L655852;}}
}
B65582c:L65582c:{c.instructions+=2;NFSU2_TR(0x65582c);
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
B65582f:{NFSU2_TR(0x65582f);
if(r1(R+518)){{goto L65584b;}}
}
B655831:L655831:{c.instructions+=2;NFSU2_TR(0x655831);
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
B655834:{NFSU2_TR(0x655834);
if(r1(R+518)){{goto L655844;}}
}
B655836:L655836:{c.instructions+=2;NFSU2_TR(0x655836);
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
B655837:{NFSU2_TR(0x655837);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65617cu,656);}
}
B65583d:L65583d:{c.instructions+=2;NFSU2_TR(0x65583d);
w4(R+0,u32(0x145ull));
}
B655842:{NFSU2_TR(0x655842);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655844:L655844:{c.instructions+=2;NFSU2_TR(0x655844);
w4(R+0,u32(0x142ull));
}
B655849:{NFSU2_TR(0x655849);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B65584b:L65584b:{c.instructions+=2;NFSU2_TR(0x65584b);
w4(R+0,u32(0x144ull));
}
B655850:{NFSU2_TR(0x655850);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655852:L655852:{c.instructions+=2;NFSU2_TR(0x655852);
w4(R+0,u32(0x13full));
}
B655857:{NFSU2_TR(0x655857);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655859:L655859:{c.instructions+=2;NFSU2_TR(0x655859);
w4(R+0,u32(0x146ull));
}
B65585e:{NFSU2_TR(0x65585e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655860:L655860:{c.instructions+=2;NFSU2_TR(0x655860);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2full))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2full)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2full))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655863:{NFSU2_TR(0x655863);
if(r1(R+518)){{goto L655892;}}
}
B655865:L655865:{c.instructions+=2;NFSU2_TR(0x655865);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xdull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655868:{NFSU2_TR(0x655868);
if(r1(R+518)){{goto L655888;}}
}
B65586a:L65586a:{c.instructions+=2;NFSU2_TR(0x65586a);
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
B65586b:{NFSU2_TR(0x65586b);
if(r1(R+518)){{goto L65587e;}}
}
B65586d:L65586d:{c.instructions+=2;NFSU2_TR(0x65586d);
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
B65586e:{NFSU2_TR(0x65586e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65617cu,656);}
}
B655874:L655874:{c.instructions+=2;NFSU2_TR(0x655874);
w4(R+0,u32(0x13dull));
}
B655879:{NFSU2_TR(0x655879);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B65587e:L65587e:{c.instructions+=2;NFSU2_TR(0x65587e);
w4(R+0,u32(0x13eull));
}
B655883:{NFSU2_TR(0x655883);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655888:L655888:{c.instructions+=2;NFSU2_TR(0x655888);
w4(R+0,u32(0x13cull));
}
B65588d:{NFSU2_TR(0x65588d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655892:L655892:{c.instructions+=2;NFSU2_TR(0x655892);
w4(R+0,u32(0x143ull));
}
B655897:{NFSU2_TR(0x655897);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B65589c:L65589c:{c.instructions+=3;NFSU2_TR(0x65589c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B65589f:{NFSU2_TR(0x65589f);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
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
B6558a1:{NFSU2_TR(0x6558a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65617cu,656);}
}
B6558a7:L6558a7:{c.instructions+=3;NFSU2_TR(0x6558a7);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6558aa:{NFSU2_TR(0x6558aa);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x26ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x26ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x26ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6558ad:{NFSU2_TR(0x6558ad);
if(r1(R+518)){{goto L6558df;}}
}
B6558af:L6558af:{c.instructions+=2;NFSU2_TR(0x6558af);
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
B6558b2:{NFSU2_TR(0x6558b2);
if(r1(R+518)){{goto L6558d5;}}
}
B6558b4:L6558b4:{c.instructions+=3;NFSU2_TR(0x6558b4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6558b5:{NFSU2_TR(0x6558b5);
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
B6558b6:{NFSU2_TR(0x6558b6);
if(r1(R+518)){{goto L6558cb;}}
}
B6558b8:L6558b8:{c.instructions+=2;NFSU2_TR(0x6558b8);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x4full))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4full)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4full))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6558bb:{NFSU2_TR(0x6558bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65617cu,656);}
}
B6558c1:L6558c1:{c.instructions+=2;NFSU2_TR(0x6558c1);
w4(R+0,u32(0x141ull));
}
B6558c6:{NFSU2_TR(0x6558c6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B6558cb:L6558cb:{c.instructions+=2;NFSU2_TR(0x6558cb);
w4(R+0,u32(0x13bull));
}
B6558d0:{NFSU2_TR(0x6558d0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B6558d5:L6558d5:{c.instructions+=2;NFSU2_TR(0x6558d5);
w4(R+0,u32(0x13aull));
}
B6558da:{NFSU2_TR(0x6558da);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B6558df:L6558df:{c.instructions+=2;NFSU2_TR(0x6558df);
w4(R+0,u32(0x140ull));
}
B6558e4:{NFSU2_TR(0x6558e4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B6558e9:L6558e9:{c.instructions+=2;NFSU2_TR(0x6558e9);
w4(R+0,u32(0x147ull));
}
B6558ee:{NFSU2_TR(0x6558ee);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B6558f3:L6558f3:{c.instructions+=2;NFSU2_TR(0x6558f3);
w4(R+0,u32(0x148ull));
}
B6558f8:{NFSU2_TR(0x6558f8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B6558fd:L6558fd:{c.instructions+=2;NFSU2_TR(0x6558fd);
w4(R+0,u32(0x149ull));
}
B655902:{NFSU2_TR(0x655902);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655907:L655907:{c.instructions+=2;NFSU2_TR(0x655907);
w4(R+0,u32(0x14aull));
}
B65590c:{NFSU2_TR(0x65590c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655911:L655911:{c.instructions+=2;NFSU2_TR(0x655911);
w4(R+0,u32(0x14bull));
}
B655916:{NFSU2_TR(0x655916);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B65591b:L65591b:{c.instructions+=2;NFSU2_TR(0x65591b);
w4(R+0,u32(0x14cull));
}
B655920:{NFSU2_TR(0x655920);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655925:L655925:{c.instructions+=2;NFSU2_TR(0x655925);
w4(R+0,u32(0x14dull));
}
B65592a:{NFSU2_TR(0x65592a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B65592f:L65592f:{c.instructions+=6;NFSU2_TR(0x65592f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B655932:{NFSU2_TR(0x655932);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B655935:{NFSU2_TR(0x655935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B655938:{NFSU2_TR(0x655938);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffff9full))));
}
B65593b:{NFSU2_TR(0x65593b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65593e:{NFSU2_TR(0x65593e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L655b14;}}
}
B655944:L655944:{c.instructions+=1;NFSU2_TR(0x655944);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6562bfull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65594b:L65594b:{c.instructions+=5;NFSU2_TR(0x65594b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65594d:{NFSU2_TR(0x65594d);
w4(R+28,u32(0x7b464cull));
}
B655952:{NFSU2_TR(0x655952);
__builtin_memmove((R+24),(R+0),4);
}
B655954:{NFSU2_TR(0x655954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655955:{NFSU2_TR(0x655955);
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
B655957:L655957:{c.instructions+=1;NFSU2_TR(0x655957);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655959;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655957u);}goto L655957;}}
}
B655959:L655959:{c.instructions+=1;NFSU2_TR(0x655959);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B65595f:L65595f:{c.instructions+=5;NFSU2_TR(0x65595f);
__builtin_memmove((R+24),(R+0),4);
}
B655961:{NFSU2_TR(0x655961);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655963:{NFSU2_TR(0x655963);
w4(R+28,u32(0x7b463cull));
}
B655968:{NFSU2_TR(0x655968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655969:{NFSU2_TR(0x655969);
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
B65596b:L65596b:{c.instructions+=1;NFSU2_TR(0x65596b);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65596d;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65596bu);}goto L65596b;}}
}
B65596d:L65596d:{c.instructions+=1;NFSU2_TR(0x65596d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655b14;}}
}
B655973:L655973:{c.instructions+=2;NFSU2_TR(0x655973);
w4(R+0,u32(0x102ull));
}
B655978:{NFSU2_TR(0x655978);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B65597d:L65597d:{c.instructions+=5;NFSU2_TR(0x65597d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65597f:{NFSU2_TR(0x65597f);
w4(R+28,u32(0x7b3e00ull));
}
B655984:{NFSU2_TR(0x655984);
__builtin_memmove((R+24),(R+0),4);
}
B655986:{NFSU2_TR(0x655986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655987:{NFSU2_TR(0x655987);
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
B655989:L655989:{c.instructions+=1;NFSU2_TR(0x655989);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65598b;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655989u);}goto L655989;}}
}
B65598b:L65598b:{c.instructions+=1;NFSU2_TR(0x65598b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655997;}}
}
B65598d:L65598d:{c.instructions+=2;NFSU2_TR(0x65598d);
w4(R+0,u32(0x103ull));
}
B655992:{NFSU2_TR(0x655992);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655997:L655997:{c.instructions+=2;NFSU2_TR(0x655997);
w4(R+28,u32(0x7b4634ull));
}
B65599c:{NFSU2_TR(0x65599c);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65599e:L65599e:{c.instructions+=3;NFSU2_TR(0x65599e);
__builtin_memmove((R+24),(R+0),4);
}
B6559a0:{NFSU2_TR(0x6559a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6559a1:{NFSU2_TR(0x6559a1);
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
B6559a3:L6559a3:{c.instructions+=1;NFSU2_TR(0x6559a3);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6559a5;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6559a3u);}goto L6559a3;}}
}
B6559a5:L6559a5:{c.instructions+=1;NFSU2_TR(0x6559a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655b14;}}
}
B6559ab:L6559ab:{c.instructions+=1;NFSU2_TR(0x6559ab);
TAIL_STATIC(0x65617cu,656);
}
B6559b0:L6559b0:{c.instructions+=5;NFSU2_TR(0x6559b0);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6559b2:{NFSU2_TR(0x6559b2);
w4(R+28,u32(0x7b462cull));
}
B6559b7:{NFSU2_TR(0x6559b7);
__builtin_memmove((R+24),(R+0),4);
}
B6559b9:{NFSU2_TR(0x6559b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6559ba:{NFSU2_TR(0x6559ba);
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
B6559bc:L6559bc:{c.instructions+=1;NFSU2_TR(0x6559bc);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6559be;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6559bcu);}goto L6559bc;}}
}
B6559be:L6559be:{c.instructions+=1;NFSU2_TR(0x6559be);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B6559c4:L6559c4:{c.instructions+=5;NFSU2_TR(0x6559c4);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6559c6:{NFSU2_TR(0x6559c6);
w4(R+28,u32(0x7b4624ull));
}
B6559cb:{NFSU2_TR(0x6559cb);
__builtin_memmove((R+24),(R+0),4);
}
B6559cd:{NFSU2_TR(0x6559cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6559ce:{NFSU2_TR(0x6559ce);
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
B6559d0:L6559d0:{c.instructions+=1;NFSU2_TR(0x6559d0);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6559d2;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6559d0u);}goto L6559d0;}}
}
B6559d2:L6559d2:{c.instructions+=1;NFSU2_TR(0x6559d2);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B6559d8:L6559d8:{c.instructions+=5;NFSU2_TR(0x6559d8);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6559da:{NFSU2_TR(0x6559da);
w4(R+28,u32(0x7b461cull));
}
B6559df:{NFSU2_TR(0x6559df);
__builtin_memmove((R+24),(R+0),4);
}
B6559e1:{NFSU2_TR(0x6559e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6559e2:{NFSU2_TR(0x6559e2);
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
B6559e4:L6559e4:{c.instructions+=1;NFSU2_TR(0x6559e4);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6559e6;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6559e4u);}goto L6559e4;}}
}
B6559e6:L6559e6:{c.instructions+=1;NFSU2_TR(0x6559e6);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B6559ec:L6559ec:{c.instructions+=5;NFSU2_TR(0x6559ec);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6559ee:{NFSU2_TR(0x6559ee);
w4(R+28,u32(0x7b4614ull));
}
B6559f3:{NFSU2_TR(0x6559f3);
__builtin_memmove((R+24),(R+0),4);
}
B6559f5:{NFSU2_TR(0x6559f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6559f6:{NFSU2_TR(0x6559f6);
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
B6559f8:L6559f8:{c.instructions+=1;NFSU2_TR(0x6559f8);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6559fa;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6559f8u);}goto L6559f8;}}
}
B6559fa:L6559fa:{c.instructions+=1;NFSU2_TR(0x6559fa);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655a00:L655a00:{c.instructions+=5;NFSU2_TR(0x655a00);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655a02:{NFSU2_TR(0x655a02);
w4(R+28,u32(0x7ab850ull));
}
B655a07:{NFSU2_TR(0x655a07);
__builtin_memmove((R+24),(R+0),4);
}
B655a09:{NFSU2_TR(0x655a09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655a0a:{NFSU2_TR(0x655a0a);
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
B655a0c:L655a0c:{c.instructions+=1;NFSU2_TR(0x655a0c);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655a0e;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655a0cu);}goto L655a0c;}}
}
B655a0e:L655a0e:{c.instructions+=1;NFSU2_TR(0x655a0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655a1a;}}
}
B655a10:L655a10:{c.instructions+=2;NFSU2_TR(0x655a10);
w4(R+0,u32(0x104ull));
}
B655a15:{NFSU2_TR(0x655a15);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655a1a:L655a1a:{c.instructions+=5;NFSU2_TR(0x655a1a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655a1c:{NFSU2_TR(0x655a1c);
w4(R+28,u32(0x7b460cull));
}
B655a21:{NFSU2_TR(0x655a21);
__builtin_memmove((R+24),(R+0),4);
}
B655a23:{NFSU2_TR(0x655a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655a24:{NFSU2_TR(0x655a24);
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
B655a26:L655a26:{c.instructions+=1;NFSU2_TR(0x655a26);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655a28;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655a26u);}goto L655a26;}}
}
B655a28:L655a28:{c.instructions+=1;NFSU2_TR(0x655a28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655a34;}}
}
B655a2a:L655a2a:{c.instructions+=2;NFSU2_TR(0x655a2a);
w4(R+0,u32(0x105ull));
}
B655a2f:{NFSU2_TR(0x655a2f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655a34:L655a34:{c.instructions+=5;NFSU2_TR(0x655a34);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655a36:{NFSU2_TR(0x655a36);
w4(R+28,u32(0x7b45f8ull));
}
B655a3b:{NFSU2_TR(0x655a3b);
__builtin_memmove((R+24),(R+0),4);
}
B655a3d:{NFSU2_TR(0x655a3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655a3e:{NFSU2_TR(0x655a3e);
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
B655a40:L655a40:{c.instructions+=1;NFSU2_TR(0x655a40);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655a42;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655a40u);}goto L655a40;}}
}
B655a42:L655a42:{c.instructions+=1;NFSU2_TR(0x655a42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655a4e;}}
}
B655a44:L655a44:{c.instructions+=2;NFSU2_TR(0x655a44);
w4(R+0,u32(0x106ull));
}
B655a49:{NFSU2_TR(0x655a49);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655a4e:L655a4e:{c.instructions+=5;NFSU2_TR(0x655a4e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655a50:{NFSU2_TR(0x655a50);
w4(R+28,u32(0x7b45f0ull));
}
B655a55:{NFSU2_TR(0x655a55);
__builtin_memmove((R+24),(R+0),4);
}
B655a57:{NFSU2_TR(0x655a57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655a58:{NFSU2_TR(0x655a58);
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
B655a5a:L655a5a:{c.instructions+=1;NFSU2_TR(0x655a5a);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655a5c;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655a5au);}goto L655a5a;}}
}
B655a5c:L655a5c:{c.instructions+=1;NFSU2_TR(0x655a5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655a68;}}
}
B655a5e:L655a5e:{c.instructions+=2;NFSU2_TR(0x655a5e);
w4(R+0,u32(0x107ull));
}
B655a63:{NFSU2_TR(0x655a63);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655a68:L655a68:{c.instructions+=5;NFSU2_TR(0x655a68);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655a6a:{NFSU2_TR(0x655a6a);
w4(R+28,u32(0x7b45e4ull));
}
B655a6f:{NFSU2_TR(0x655a6f);
__builtin_memmove((R+24),(R+0),4);
}
B655a71:{NFSU2_TR(0x655a71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655a72:{NFSU2_TR(0x655a72);
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
B655a74:L655a74:{c.instructions+=1;NFSU2_TR(0x655a74);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655a76;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655a74u);}goto L655a74;}}
}
B655a76:L655a76:{c.instructions+=1;NFSU2_TR(0x655a76);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655a7c:L655a7c:{c.instructions+=2;NFSU2_TR(0x655a7c);
w4(R+28,u32(0x7b45d8ull));
}
B655a81:{NFSU2_TR(0x655a81);
{goto L655d3b;}
}
B655a86:L655a86:{c.instructions+=5;NFSU2_TR(0x655a86);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655a88:{NFSU2_TR(0x655a88);
w4(R+28,u32(0x7ab878ull));
}
B655a8d:{NFSU2_TR(0x655a8d);
__builtin_memmove((R+24),(R+0),4);
}
B655a8f:{NFSU2_TR(0x655a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655a90:{NFSU2_TR(0x655a90);
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
B655a92:L655a92:{c.instructions+=1;NFSU2_TR(0x655a92);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655a94;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655a92u);}goto L655a92;}}
}
B655a94:L655a94:{c.instructions+=1;NFSU2_TR(0x655a94);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655a9a:L655a9a:{c.instructions+=6;NFSU2_TR(0x655a9a);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655a9c:{NFSU2_TR(0x655a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B655a9d:{NFSU2_TR(0x655a9d);
w4(R+28,u32(0x7b45d0ull));
}
B655aa2:{NFSU2_TR(0x655aa2);
__builtin_memmove((R+24),(R+0),4);
}
B655aa4:{NFSU2_TR(0x655aa4);
__builtin_memmove((R+4),(R+8),4);
}
B655aa6:{NFSU2_TR(0x655aa6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655aa8:L655aa8:{c.instructions+=1;NFSU2_TR(0x655aa8);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655aaa;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655aa8u);}goto L655aa8;}}
}
B655aaa:L655aaa:{c.instructions+=1;NFSU2_TR(0x655aaa);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655ab0:L655ab0:{c.instructions+=5;NFSU2_TR(0x655ab0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655ab2:{NFSU2_TR(0x655ab2);
w4(R+28,u32(0x7b45c8ull));
}
B655ab7:{NFSU2_TR(0x655ab7);
__builtin_memmove((R+24),(R+0),4);
}
B655ab9:{NFSU2_TR(0x655ab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655aba:{NFSU2_TR(0x655aba);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655abc:L655abc:{c.instructions+=1;NFSU2_TR(0x655abc);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655abe;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655abcu);}goto L655abc;}}
}
B655abe:L655abe:{c.instructions+=1;NFSU2_TR(0x655abe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655aca;}}
}
B655ac0:L655ac0:{c.instructions+=2;NFSU2_TR(0x655ac0);
w4(R+0,u32(0x109ull));
}
B655ac5:{NFSU2_TR(0x655ac5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655aca:L655aca:{c.instructions+=5;NFSU2_TR(0x655aca);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655acc:{NFSU2_TR(0x655acc);
w4(R+28,u32(0x7b45c4ull));
}
B655ad1:{NFSU2_TR(0x655ad1);
__builtin_memmove((R+24),(R+0),4);
}
B655ad3:{NFSU2_TR(0x655ad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655ad4:{NFSU2_TR(0x655ad4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655ad6:L655ad6:{c.instructions+=1;NFSU2_TR(0x655ad6);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655ad8;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655ad6u);}goto L655ad6;}}
}
B655ad8:L655ad8:{c.instructions+=1;NFSU2_TR(0x655ad8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655ae4;}}
}
B655ada:L655ada:{c.instructions+=2;NFSU2_TR(0x655ada);
w4(R+0,u32(0x10bull));
}
B655adf:{NFSU2_TR(0x655adf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655ae4:L655ae4:{c.instructions+=4;NFSU2_TR(0x655ae4);
__builtin_memmove((R+4),(R+8),4);
}
B655ae6:{NFSU2_TR(0x655ae6);
w4(R+28,u32(0x7b3de4ull));
}
B655aeb:{NFSU2_TR(0x655aeb);
__builtin_memmove((R+24),(R+0),4);
}
B655aed:{NFSU2_TR(0x655aed);
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
B655aef:L655aef:{c.instructions+=1;NFSU2_TR(0x655aef);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655af1;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655aefu);}goto L655aef;}}
}
B655af1:L655af1:{c.instructions+=1;NFSU2_TR(0x655af1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655afd;}}
}
B655af3:L655af3:{c.instructions+=2;NFSU2_TR(0x655af3);
w4(R+0,u32(0x10aull));
}
B655af8:{NFSU2_TR(0x655af8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655afd:L655afd:{c.instructions+=5;NFSU2_TR(0x655afd);
__builtin_memmove((R+24),(R+0),4);
}
B655aff:{NFSU2_TR(0x655aff);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655b01:{NFSU2_TR(0x655b01);
w4(R+28,u32(0x7b45b4ull));
}
B655b06:{NFSU2_TR(0x655b06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655b07:{NFSU2_TR(0x655b07);
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
B655b09:L655b09:{c.instructions+=1;NFSU2_TR(0x655b09);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655b0b;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655b09u);}goto L655b09;}}
}
B655b0b:L655b0b:{c.instructions+=1;NFSU2_TR(0x655b0b);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655b11:L655b11:{c.instructions+=1;NFSU2_TR(0x655b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B655b14:L655b14:{c.instructions+=2;NFSU2_TR(0x655b14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B655b17:{NFSU2_TR(0x655b17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655b1cull));
TAIL_STATIC(0x75ded8u,75d);
}
B655b1c:L655b1c:{c.instructions+=3;NFSU2_TR(0x655b1c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x61ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x61ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655b1f:{NFSU2_TR(0x655b1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655b20:{NFSU2_TR(0x655b20);
if(r1(R+518)){TAIL_STATIC(0x65623au,656);}
}
B655b26:L655b26:{c.instructions+=2;NFSU2_TR(0x655b26);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x64ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x64ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655b29:{NFSU2_TR(0x655b29);
if(r1(R+518)){TAIL_STATIC(0x65621du,656);}
}
B655b2f:L655b2f:{c.instructions+=2;NFSU2_TR(0x655b2f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x70ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x70ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655b32:{NFSU2_TR(0x655b32);
if(r1(R+518)){TAIL_STATIC(0x656200u,656);}
}
B655b38:L655b38:{c.instructions+=2;NFSU2_TR(0x655b38);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x74ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x74ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x74ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655b3b:{NFSU2_TR(0x655b3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x656257u,656);}
}
B655b41:L655b41:{c.instructions+=3;NFSU2_TR(0x655b41);
u8 U[4];
w4(U+0,u32(0x7b45a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655b46:{NFSU2_TR(0x655b46);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B655b49:{NFSU2_TR(0x655b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x655b4eull));
TAIL_STATIC(0x75dd6fu,75d);
}
B655b4e:L655b4e:{c.instructions+=4;NFSU2_TR(0x655b4e);
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
B655b50:{NFSU2_TR(0x655b50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655b51:{NFSU2_TR(0x655b51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655b52:{NFSU2_TR(0x655b52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x656257u,656);}
}
B655b58:L655b58:{c.instructions+=2;NFSU2_TR(0x655b58);
w4(R+0,u32(0x12bull));
}
B655b5d:{NFSU2_TR(0x655b5d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655b62:L655b62:{c.instructions+=5;NFSU2_TR(0x655b62);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655b64:{NFSU2_TR(0x655b64);
w4(R+28,u32(0x7ab9f0ull));
}
B655b69:{NFSU2_TR(0x655b69);
__builtin_memmove((R+24),(R+0),4);
}
B655b6b:{NFSU2_TR(0x655b6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655b6c:{NFSU2_TR(0x655b6c);
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
B655b6e:L655b6e:{c.instructions+=1;NFSU2_TR(0x655b6e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655b70;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655b6eu);}goto L655b6e;}}
}
B655b70:L655b70:{c.instructions+=1;NFSU2_TR(0x655b70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655b7c;}}
}
B655b72:L655b72:{c.instructions+=2;NFSU2_TR(0x655b72);
w4(R+0,u32(0x10cull));
}
B655b77:{NFSU2_TR(0x655b77);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655b7c:L655b7c:{c.instructions+=5;NFSU2_TR(0x655b7c);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655b7e:{NFSU2_TR(0x655b7e);
w4(R+28,u32(0x7b45a0ull));
}
B655b83:{NFSU2_TR(0x655b83);
__builtin_memmove((R+24),(R+0),4);
}
B655b85:{NFSU2_TR(0x655b85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655b86:{NFSU2_TR(0x655b86);
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
B655b88:L655b88:{c.instructions+=1;NFSU2_TR(0x655b88);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655b8a;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655b88u);}goto L655b88;}}
}
B655b8a:L655b8a:{c.instructions+=1;NFSU2_TR(0x655b8a);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655b90:L655b90:{c.instructions+=5;NFSU2_TR(0x655b90);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655b92:{NFSU2_TR(0x655b92);
w4(R+28,u32(0x7b4594ull));
}
B655b97:{NFSU2_TR(0x655b97);
__builtin_memmove((R+24),(R+0),4);
}
B655b99:{NFSU2_TR(0x655b99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655b9a:{NFSU2_TR(0x655b9a);
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
B655b9c:L655b9c:{c.instructions+=1;NFSU2_TR(0x655b9c);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655b9e;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655b9cu);}goto L655b9c;}}
}
B655b9e:L655b9e:{c.instructions+=1;NFSU2_TR(0x655b9e);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655ba4:L655ba4:{c.instructions+=5;NFSU2_TR(0x655ba4);
__builtin_memmove((R+24),(R+0),4);
}
B655ba6:{NFSU2_TR(0x655ba6);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655ba8:{NFSU2_TR(0x655ba8);
w4(R+28,u32(0x7b458cull));
}
B655bad:{NFSU2_TR(0x655bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655bae:{NFSU2_TR(0x655bae);
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
B655bb0:L655bb0:{c.instructions+=1;NFSU2_TR(0x655bb0);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655bb2;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655bb0u);}goto L655bb0;}}
}
B655bb2:L655bb2:{c.instructions+=1;NFSU2_TR(0x655bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655b14u);}goto L655b14;}}
}
B655bb8:L655bb8:{c.instructions+=2;NFSU2_TR(0x655bb8);
w4(R+0,u32(0x10dull));
}
B655bbd:{NFSU2_TR(0x655bbd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655bc2:L655bc2:{c.instructions+=5;NFSU2_TR(0x655bc2);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655bc4:{NFSU2_TR(0x655bc4);
w4(R+28,u32(0x7b4584ull));
}
B655bc9:{NFSU2_TR(0x655bc9);
__builtin_memmove((R+24),(R+0),4);
}
B655bcb:{NFSU2_TR(0x655bcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655bcc:{NFSU2_TR(0x655bcc);
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
B655bce:L655bce:{c.instructions+=1;NFSU2_TR(0x655bce);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655bd0;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655bceu);}goto L655bce;}}
}
B655bd0:L655bd0:{c.instructions+=1;NFSU2_TR(0x655bd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655bdc;}}
}
B655bd2:L655bd2:{c.instructions+=2;NFSU2_TR(0x655bd2);
w4(R+0,u32(0x10eull));
}
B655bd7:{NFSU2_TR(0x655bd7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655bdc:L655bdc:{c.instructions+=5;NFSU2_TR(0x655bdc);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655bde:{NFSU2_TR(0x655bde);
w4(R+28,u32(0x7b3decull));
}
B655be3:{NFSU2_TR(0x655be3);
__builtin_memmove((R+24),(R+0),4);
}
B655be5:{NFSU2_TR(0x655be5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655be6:{NFSU2_TR(0x655be6);
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
B655be8:L655be8:{c.instructions+=1;NFSU2_TR(0x655be8);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655bea;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655be8u);}goto L655be8;}}
}
B655bea:L655bea:{c.instructions+=1;NFSU2_TR(0x655bea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655bf6;}}
}
B655bec:L655bec:{c.instructions+=2;NFSU2_TR(0x655bec);
w4(R+0,u32(0x10full));
}
B655bf1:{NFSU2_TR(0x655bf1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655bf6:L655bf6:{c.instructions+=5;NFSU2_TR(0x655bf6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655bf8:{NFSU2_TR(0x655bf8);
w4(R+28,u32(0x7b4580ull));
}
B655bfd:{NFSU2_TR(0x655bfd);
__builtin_memmove((R+24),(R+0),4);
}
B655bff:{NFSU2_TR(0x655bff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655c00:{NFSU2_TR(0x655c00);
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
B655c02:L655c02:{c.instructions+=1;NFSU2_TR(0x655c02);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655c04;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655c02u);}goto L655c02;}}
}
B655c04:L655c04:{c.instructions+=1;NFSU2_TR(0x655c04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655c10;}}
}
B655c06:L655c06:{c.instructions+=2;NFSU2_TR(0x655c06);
w4(R+0,u32(0x110ull));
}
B655c0b:{NFSU2_TR(0x655c0b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655c10:L655c10:{c.instructions+=3;NFSU2_TR(0x655c10);
w4(R+28,u32(0x7b4578ull));
}
B655c15:{NFSU2_TR(0x655c15);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655c17:{NFSU2_TR(0x655c17);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65599eu);}goto L65599e;}
}
B655c1c:L655c1c:{c.instructions+=2;NFSU2_TR(0x655c1c);
w4(R+28,u32(0x7b4570ull));
}
B655c21:{NFSU2_TR(0x655c21);
{goto L655ccf;}
}
B655c26:L655c26:{c.instructions+=5;NFSU2_TR(0x655c26);
__builtin_memmove((R+24),(R+0),4);
}
B655c28:{NFSU2_TR(0x655c28);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655c2a:{NFSU2_TR(0x655c2a);
w4(R+28,u32(0x7b3df4ull));
}
B655c2f:{NFSU2_TR(0x655c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655c30:{NFSU2_TR(0x655c30);
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
B655c32:L655c32:{c.instructions+=1;NFSU2_TR(0x655c32);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655c34;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655c32u);}goto L655c32;}}
}
B655c34:L655c34:{c.instructions+=1;NFSU2_TR(0x655c34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655b14u);}goto L655b14;}}
}
B655c3a:L655c3a:{c.instructions+=2;NFSU2_TR(0x655c3a);
w4(R+0,u32(0x111ull));
}
B655c3f:{NFSU2_TR(0x655c3f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655c44:L655c44:{c.instructions+=5;NFSU2_TR(0x655c44);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655c46:{NFSU2_TR(0x655c46);
w4(R+28,u32(0x7aba18ull));
}
B655c4b:{NFSU2_TR(0x655c4b);
__builtin_memmove((R+24),(R+0),4);
}
B655c4d:{NFSU2_TR(0x655c4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655c4e:{NFSU2_TR(0x655c4e);
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
B655c50:L655c50:{c.instructions+=1;NFSU2_TR(0x655c50);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655c52;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655c50u);}goto L655c50;}}
}
B655c52:L655c52:{c.instructions+=1;NFSU2_TR(0x655c52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655c5e;}}
}
B655c54:L655c54:{c.instructions+=2;NFSU2_TR(0x655c54);
w4(R+0,u32(0x112ull));
}
B655c59:{NFSU2_TR(0x655c59);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655c5e:L655c5e:{c.instructions+=5;NFSU2_TR(0x655c5e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655c60:{NFSU2_TR(0x655c60);
w4(R+28,u32(0x7b456cull));
}
B655c65:{NFSU2_TR(0x655c65);
__builtin_memmove((R+24),(R+0),4);
}
B655c67:{NFSU2_TR(0x655c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655c68:{NFSU2_TR(0x655c68);
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
B655c6a:L655c6a:{c.instructions+=1;NFSU2_TR(0x655c6a);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655c6c;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655c6au);}goto L655c6a;}}
}
B655c6c:L655c6c:{c.instructions+=1;NFSU2_TR(0x655c6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655c78;}}
}
B655c6e:L655c6e:{c.instructions+=2;NFSU2_TR(0x655c6e);
w4(R+0,u32(0x113ull));
}
B655c73:{NFSU2_TR(0x655c73);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655c78:L655c78:{c.instructions+=5;NFSU2_TR(0x655c78);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655c7a:{NFSU2_TR(0x655c7a);
w4(R+28,u32(0x7b4564ull));
}
B655c7f:{NFSU2_TR(0x655c7f);
__builtin_memmove((R+24),(R+0),4);
}
B655c81:{NFSU2_TR(0x655c81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655c82:{NFSU2_TR(0x655c82);
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
B655c84:L655c84:{c.instructions+=1;NFSU2_TR(0x655c84);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655c86;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655c84u);}goto L655c84;}}
}
B655c86:L655c86:{c.instructions+=1;NFSU2_TR(0x655c86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655c92;}}
}
B655c88:L655c88:{c.instructions+=2;NFSU2_TR(0x655c88);
w4(R+0,u32(0x114ull));
}
B655c8d:{NFSU2_TR(0x655c8d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655c92:L655c92:{c.instructions+=5;NFSU2_TR(0x655c92);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655c94:{NFSU2_TR(0x655c94);
w4(R+28,u32(0x7b455cull));
}
B655c99:{NFSU2_TR(0x655c99);
__builtin_memmove((R+24),(R+0),4);
}
B655c9b:{NFSU2_TR(0x655c9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655c9c:{NFSU2_TR(0x655c9c);
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
B655c9e:L655c9e:{c.instructions+=1;NFSU2_TR(0x655c9e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655ca0;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655c9eu);}goto L655c9e;}}
}
B655ca0:L655ca0:{c.instructions+=1;NFSU2_TR(0x655ca0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655cac;}}
}
B655ca2:L655ca2:{c.instructions+=2;NFSU2_TR(0x655ca2);
w4(R+0,u32(0x115ull));
}
B655ca7:{NFSU2_TR(0x655ca7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655cac:L655cac:{c.instructions+=5;NFSU2_TR(0x655cac);
__builtin_memmove((R+24),(R+0),4);
}
B655cae:{NFSU2_TR(0x655cae);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655cb0:{NFSU2_TR(0x655cb0);
w4(R+28,u32(0x7b3dfcull));
}
B655cb5:{NFSU2_TR(0x655cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655cb6:{NFSU2_TR(0x655cb6);
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
B655cb8:L655cb8:{c.instructions+=1;NFSU2_TR(0x655cb8);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655cba;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655cb8u);}goto L655cb8;}}
}
B655cba:L655cba:{c.instructions+=1;NFSU2_TR(0x655cba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655b14u);}goto L655b14;}}
}
B655cc0:L655cc0:{c.instructions+=2;NFSU2_TR(0x655cc0);
w4(R+0,u32(0x116ull));
}
B655cc5:{NFSU2_TR(0x655cc5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655cca:L655cca:{c.instructions+=1;NFSU2_TR(0x655cca);
w4(R+28,u32(0x7b4554ull));
}
B655ccf:L655ccf:{c.instructions+=2;NFSU2_TR(0x655ccf);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655cd1:{NFSU2_TR(0x655cd1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65599eu);}goto L65599e;}
}
B655cd6:L655cd6:{c.instructions+=5;NFSU2_TR(0x655cd6);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655cd8:{NFSU2_TR(0x655cd8);
w4(R+28,u32(0x7b41c0ull));
}
B655cdd:{NFSU2_TR(0x655cdd);
__builtin_memmove((R+24),(R+0),4);
}
B655cdf:{NFSU2_TR(0x655cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655ce0:{NFSU2_TR(0x655ce0);
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
B655ce2:L655ce2:{c.instructions+=1;NFSU2_TR(0x655ce2);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655ce4;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655ce2u);}goto L655ce2;}}
}
B655ce4:L655ce4:{c.instructions+=1;NFSU2_TR(0x655ce4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655cf0;}}
}
B655ce6:L655ce6:{c.instructions+=2;NFSU2_TR(0x655ce6);
w4(R+0,u32(0x117ull));
}
B655ceb:{NFSU2_TR(0x655ceb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655cf0:L655cf0:{c.instructions+=3;NFSU2_TR(0x655cf0);
w4(R+28,u32(0x7b454cull));
}
B655cf5:{NFSU2_TR(0x655cf5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655cf7:{NFSU2_TR(0x655cf7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65599eu);}goto L65599e;}
}
B655cfc:L655cfc:{c.instructions+=5;NFSU2_TR(0x655cfc);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655cfe:{NFSU2_TR(0x655cfe);
w4(R+28,u32(0x7b4540ull));
}
B655d03:{NFSU2_TR(0x655d03);
__builtin_memmove((R+24),(R+0),4);
}
B655d05:{NFSU2_TR(0x655d05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655d06:{NFSU2_TR(0x655d06);
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
B655d08:L655d08:{c.instructions+=1;NFSU2_TR(0x655d08);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655d0a;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655d08u);}goto L655d08;}}
}
B655d0a:L655d0a:{c.instructions+=1;NFSU2_TR(0x655d0a);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655d10:L655d10:{c.instructions+=3;NFSU2_TR(0x655d10);
w4(R+28,u32(0x7b453cull));
}
B655d15:{NFSU2_TR(0x655d15);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655d17:{NFSU2_TR(0x655d17);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65599eu);}goto L65599e;}
}
B655d1c:L655d1c:{c.instructions+=5;NFSU2_TR(0x655d1c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655d1e:{NFSU2_TR(0x655d1e);
w4(R+28,u32(0x7b4538ull));
}
B655d23:{NFSU2_TR(0x655d23);
__builtin_memmove((R+24),(R+0),4);
}
B655d25:{NFSU2_TR(0x655d25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655d26:{NFSU2_TR(0x655d26);
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
B655d28:L655d28:{c.instructions+=1;NFSU2_TR(0x655d28);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655d2a;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655d28u);}goto L655d28;}}
}
B655d2a:L655d2a:{c.instructions+=1;NFSU2_TR(0x655d2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655d36;}}
}
B655d2c:L655d2c:{c.instructions+=2;NFSU2_TR(0x655d2c);
w4(R+0,u32(0x118ull));
}
B655d31:{NFSU2_TR(0x655d31);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655d36:L655d36:{c.instructions+=1;NFSU2_TR(0x655d36);
w4(R+28,u32(0x7b452cull));
}
B655d3b:L655d3b:{c.instructions+=2;NFSU2_TR(0x655d3b);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655d3d:{NFSU2_TR(0x655d3d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65599eu);}goto L65599e;}
}
B655d42:L655d42:{c.instructions+=5;NFSU2_TR(0x655d42);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655d44:{NFSU2_TR(0x655d44);
w4(R+28,u32(0x7b3d40ull));
}
B655d49:{NFSU2_TR(0x655d49);
__builtin_memmove((R+24),(R+0),4);
}
B655d4b:{NFSU2_TR(0x655d4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655d4c:{NFSU2_TR(0x655d4c);
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
B655d4e:L655d4e:{c.instructions+=1;NFSU2_TR(0x655d4e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655d50;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655d4eu);}goto L655d4e;}}
}
B655d50:L655d50:{c.instructions+=1;NFSU2_TR(0x655d50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655d5c;}}
}
B655d52:L655d52:{c.instructions+=2;NFSU2_TR(0x655d52);
w4(R+0,u32(0x11aull));
}
B655d57:{NFSU2_TR(0x655d57);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655d5c:L655d5c:{c.instructions+=5;NFSU2_TR(0x655d5c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655d5e:{NFSU2_TR(0x655d5e);
w4(R+28,u32(0x7b4524ull));
}
B655d63:{NFSU2_TR(0x655d63);
__builtin_memmove((R+24),(R+0),4);
}
B655d65:{NFSU2_TR(0x655d65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655d66:{NFSU2_TR(0x655d66);
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
B655d68:L655d68:{c.instructions+=1;NFSU2_TR(0x655d68);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655d6a;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655d68u);}goto L655d68;}}
}
B655d6a:L655d6a:{c.instructions+=1;NFSU2_TR(0x655d6a);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655d70:L655d70:{c.instructions+=5;NFSU2_TR(0x655d70);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655d72:{NFSU2_TR(0x655d72);
w4(R+28,u32(0x7b4518ull));
}
B655d77:{NFSU2_TR(0x655d77);
__builtin_memmove((R+24),(R+0),4);
}
B655d79:{NFSU2_TR(0x655d79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655d7a:{NFSU2_TR(0x655d7a);
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
B655d7c:L655d7c:{c.instructions+=1;NFSU2_TR(0x655d7c);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655d7e;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655d7cu);}goto L655d7c;}}
}
B655d7e:L655d7e:{c.instructions+=1;NFSU2_TR(0x655d7e);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655d84:L655d84:{c.instructions+=5;NFSU2_TR(0x655d84);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655d86:{NFSU2_TR(0x655d86);
w4(R+28,u32(0x7b4510ull));
}
B655d8b:{NFSU2_TR(0x655d8b);
__builtin_memmove((R+24),(R+0),4);
}
B655d8d:{NFSU2_TR(0x655d8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655d8e:{NFSU2_TR(0x655d8e);
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
B655d90:L655d90:{c.instructions+=1;NFSU2_TR(0x655d90);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655d92;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655d90u);}goto L655d90;}}
}
B655d92:L655d92:{c.instructions+=1;NFSU2_TR(0x655d92);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655d98:L655d98:{c.instructions+=2;NFSU2_TR(0x655d98);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B655d9b:{NFSU2_TR(0x655d9b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655b14u);}goto L655b14;}}
}
B655da1:L655da1:{c.instructions+=5;NFSU2_TR(0x655da1);
__builtin_memmove((R+24),(R+0),4);
}
B655da3:{NFSU2_TR(0x655da3);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655da5:{NFSU2_TR(0x655da5);
w4(R+28,u32(0x7b3d60ull));
}
B655daa:{NFSU2_TR(0x655daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655dab:{NFSU2_TR(0x655dab);
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
B655dad:L655dad:{c.instructions+=1;NFSU2_TR(0x655dad);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655daf;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655dadu);}goto L655dad;}}
}
B655daf:L655daf:{c.instructions+=1;NFSU2_TR(0x655daf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655b14u);}goto L655b14;}}
}
B655db5:L655db5:{c.instructions+=2;NFSU2_TR(0x655db5);
w4(R+0,u32(0x11bull));
}
B655dba:{NFSU2_TR(0x655dba);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655dbf:L655dbf:{c.instructions+=5;NFSU2_TR(0x655dbf);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655dc1:{NFSU2_TR(0x655dc1);
w4(R+28,u32(0x7b4504ull));
}
B655dc6:{NFSU2_TR(0x655dc6);
__builtin_memmove((R+24),(R+0),4);
}
B655dc8:{NFSU2_TR(0x655dc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655dc9:{NFSU2_TR(0x655dc9);
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
B655dcb:L655dcb:{c.instructions+=1;NFSU2_TR(0x655dcb);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655dcd;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655dcbu);}goto L655dcb;}}
}
B655dcd:L655dcd:{c.instructions+=1;NFSU2_TR(0x655dcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655dd9;}}
}
B655dcf:L655dcf:{c.instructions+=2;NFSU2_TR(0x655dcf);
w4(R+0,u32(0x11cull));
}
B655dd4:{NFSU2_TR(0x655dd4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655dd9:L655dd9:{c.instructions+=5;NFSU2_TR(0x655dd9);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655ddb:{NFSU2_TR(0x655ddb);
w4(R+28,u32(0x7b44f0ull));
}
B655de0:{NFSU2_TR(0x655de0);
__builtin_memmove((R+24),(R+0),4);
}
B655de2:{NFSU2_TR(0x655de2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655de3:{NFSU2_TR(0x655de3);
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
B655de5:L655de5:{c.instructions+=1;NFSU2_TR(0x655de5);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655de7;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655de5u);}goto L655de5;}}
}
B655de7:L655de7:{c.instructions+=1;NFSU2_TR(0x655de7);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655ded:L655ded:{c.instructions+=5;NFSU2_TR(0x655ded);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655def:{NFSU2_TR(0x655def);
w4(R+28,u32(0x7ab860ull));
}
B655df4:{NFSU2_TR(0x655df4);
__builtin_memmove((R+24),(R+0),4);
}
B655df6:{NFSU2_TR(0x655df6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655df7:{NFSU2_TR(0x655df7);
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
B655df9:L655df9:{c.instructions+=1;NFSU2_TR(0x655df9);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655dfb;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655df9u);}goto L655df9;}}
}
B655dfb:L655dfb:{c.instructions+=1;NFSU2_TR(0x655dfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655e07;}}
}
B655dfd:L655dfd:{c.instructions+=2;NFSU2_TR(0x655dfd);
w4(R+0,u32(0x11eull));
}
B655e02:{NFSU2_TR(0x655e02);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655e07:L655e07:{c.instructions+=5;NFSU2_TR(0x655e07);
__builtin_memmove((R+24),(R+0),4);
}
B655e09:{NFSU2_TR(0x655e09);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655e0b:{NFSU2_TR(0x655e0b);
w4(R+28,u32(0x7b44e8ull));
}
B655e10:{NFSU2_TR(0x655e10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655e11:{NFSU2_TR(0x655e11);
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
B655e13:L655e13:{c.instructions+=1;NFSU2_TR(0x655e13);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655e15;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655e13u);}goto L655e13;}}
}
B655e15:L655e15:{c.instructions+=1;NFSU2_TR(0x655e15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655b14u);}goto L655b14;}}
}
B655e1b:L655e1b:{c.instructions+=2;NFSU2_TR(0x655e1b);
w4(R+0,u32(0x11dull));
}
B655e20:{NFSU2_TR(0x655e20);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655e25:L655e25:{c.instructions+=5;NFSU2_TR(0x655e25);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655e27:{NFSU2_TR(0x655e27);
w4(R+28,u32(0x7b3d90ull));
}
B655e2c:{NFSU2_TR(0x655e2c);
__builtin_memmove((R+24),(R+0),4);
}
B655e2e:{NFSU2_TR(0x655e2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655e2f:{NFSU2_TR(0x655e2f);
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
B655e31:L655e31:{c.instructions+=1;NFSU2_TR(0x655e31);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655e33;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655e31u);}goto L655e31;}}
}
B655e33:L655e33:{c.instructions+=1;NFSU2_TR(0x655e33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655e3f;}}
}
B655e35:L655e35:{c.instructions+=2;NFSU2_TR(0x655e35);
w4(R+0,u32(0x120ull));
}
B655e3a:{NFSU2_TR(0x655e3a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655e3f:L655e3f:{c.instructions+=5;NFSU2_TR(0x655e3f);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655e41:{NFSU2_TR(0x655e41);
w4(R+28,u32(0x7b3d84ull));
}
B655e46:{NFSU2_TR(0x655e46);
__builtin_memmove((R+24),(R+0),4);
}
B655e48:{NFSU2_TR(0x655e48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655e49:{NFSU2_TR(0x655e49);
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
B655e4b:L655e4b:{c.instructions+=1;NFSU2_TR(0x655e4b);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655e4d;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655e4bu);}goto L655e4b;}}
}
B655e4d:L655e4d:{c.instructions+=1;NFSU2_TR(0x655e4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655e59;}}
}
B655e4f:L655e4f:{c.instructions+=2;NFSU2_TR(0x655e4f);
w4(R+0,u32(0x121ull));
}
B655e54:{NFSU2_TR(0x655e54);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655e59:L655e59:{c.instructions+=5;NFSU2_TR(0x655e59);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655e5b:{NFSU2_TR(0x655e5b);
w4(R+28,u32(0x7b3d78ull));
}
B655e60:{NFSU2_TR(0x655e60);
__builtin_memmove((R+24),(R+0),4);
}
B655e62:{NFSU2_TR(0x655e62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655e63:{NFSU2_TR(0x655e63);
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
B655e65:L655e65:{c.instructions+=1;NFSU2_TR(0x655e65);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655e67;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655e65u);}goto L655e65;}}
}
B655e67:L655e67:{c.instructions+=1;NFSU2_TR(0x655e67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655e73;}}
}
B655e69:L655e69:{c.instructions+=2;NFSU2_TR(0x655e69);
w4(R+0,u32(0x122ull));
}
B655e6e:{NFSU2_TR(0x655e6e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655e73:L655e73:{c.instructions+=5;NFSU2_TR(0x655e73);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655e75:{NFSU2_TR(0x655e75);
w4(R+28,u32(0x7b3d6cull));
}
B655e7a:{NFSU2_TR(0x655e7a);
__builtin_memmove((R+24),(R+0),4);
}
B655e7c:{NFSU2_TR(0x655e7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655e7d:{NFSU2_TR(0x655e7d);
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
B655e7f:L655e7f:{c.instructions+=1;NFSU2_TR(0x655e7f);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655e81;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655e7fu);}goto L655e7f;}}
}
B655e81:L655e81:{c.instructions+=1;NFSU2_TR(0x655e81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655e8d;}}
}
B655e83:L655e83:{c.instructions+=2;NFSU2_TR(0x655e83);
w4(R+0,u32(0x123ull));
}
B655e88:{NFSU2_TR(0x655e88);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655e8d:L655e8d:{c.instructions+=5;NFSU2_TR(0x655e8d);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655e8f:{NFSU2_TR(0x655e8f);
w4(R+28,u32(0x7b44d8ull));
}
B655e94:{NFSU2_TR(0x655e94);
__builtin_memmove((R+24),(R+0),4);
}
B655e96:{NFSU2_TR(0x655e96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655e97:{NFSU2_TR(0x655e97);
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
B655e99:L655e99:{c.instructions+=1;NFSU2_TR(0x655e99);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655e9b;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655e99u);}goto L655e99;}}
}
B655e9b:L655e9b:{c.instructions+=1;NFSU2_TR(0x655e9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655ea7;}}
}
B655e9d:L655e9d:{c.instructions+=2;NFSU2_TR(0x655e9d);
w4(R+0,u32(0x124ull));
}
B655ea2:{NFSU2_TR(0x655ea2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655ea7:L655ea7:{c.instructions+=6;NFSU2_TR(0x655ea7);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655ea9:{NFSU2_TR(0x655ea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B655eaa:{NFSU2_TR(0x655eaa);
w4(R+28,u32(0x7b44d0ull));
}
B655eaf:{NFSU2_TR(0x655eaf);
__builtin_memmove((R+24),(R+0),4);
}
B655eb1:{NFSU2_TR(0x655eb1);
__builtin_memmove((R+4),(R+8),4);
}
B655eb3:{NFSU2_TR(0x655eb3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655eb5:L655eb5:{c.instructions+=1;NFSU2_TR(0x655eb5);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655eb7;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655eb5u);}goto L655eb5;}}
}
B655eb7:L655eb7:{c.instructions+=1;NFSU2_TR(0x655eb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655ec3;}}
}
B655eb9:L655eb9:{c.instructions+=2;NFSU2_TR(0x655eb9);
w4(R+0,u32(0x125ull));
}
B655ebe:{NFSU2_TR(0x655ebe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655ec3:L655ec3:{c.instructions+=5;NFSU2_TR(0x655ec3);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655ec5:{NFSU2_TR(0x655ec5);
w4(R+28,u32(0x7b44c8ull));
}
B655eca:{NFSU2_TR(0x655eca);
__builtin_memmove((R+24),(R+0),4);
}
B655ecc:{NFSU2_TR(0x655ecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655ecd:{NFSU2_TR(0x655ecd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655ecf:L655ecf:{c.instructions+=1;NFSU2_TR(0x655ecf);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655ed1;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655ecfu);}goto L655ecf;}}
}
B655ed1:L655ed1:{c.instructions+=1;NFSU2_TR(0x655ed1);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655ed7:L655ed7:{c.instructions+=4;NFSU2_TR(0x655ed7);
w4(R+28,u32(0x7b44c0ull));
}
B655edc:{NFSU2_TR(0x655edc);
__builtin_memmove((R+24),(R+0),4);
}
B655ede:{NFSU2_TR(0x655ede);
__builtin_memmove((R+4),(R+8),4);
}
B655ee0:{NFSU2_TR(0x655ee0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655ee2:L655ee2:{c.instructions+=1;NFSU2_TR(0x655ee2);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655ee4;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655ee2u);}goto L655ee2;}}
}
B655ee4:L655ee4:{c.instructions+=1;NFSU2_TR(0x655ee4);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655eea:L655eea:{c.instructions+=4;NFSU2_TR(0x655eea);
w4(R+28,u32(0x7b44b8ull));
}
B655eef:{NFSU2_TR(0x655eef);
__builtin_memmove((R+24),(R+0),4);
}
B655ef1:{NFSU2_TR(0x655ef1);
__builtin_memmove((R+4),(R+8),4);
}
B655ef3:{NFSU2_TR(0x655ef3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655ef5:L655ef5:{c.instructions+=1;NFSU2_TR(0x655ef5);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655ef7;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655ef5u);}goto L655ef5;}}
}
B655ef7:L655ef7:{c.instructions+=1;NFSU2_TR(0x655ef7);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655efd:L655efd:{c.instructions+=5;NFSU2_TR(0x655efd);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655eff:{NFSU2_TR(0x655eff);
w4(R+28,u32(0x7b44a4ull));
}
B655f04:{NFSU2_TR(0x655f04);
__builtin_memmove((R+24),(R+0),4);
}
B655f06:{NFSU2_TR(0x655f06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655f07:{NFSU2_TR(0x655f07);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655f09:L655f09:{c.instructions+=1;NFSU2_TR(0x655f09);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655f0b;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655f09u);}goto L655f09;}}
}
B655f0b:L655f0b:{c.instructions+=1;NFSU2_TR(0x655f0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655f17;}}
}
B655f0d:L655f0d:{c.instructions+=2;NFSU2_TR(0x655f0d);
w4(R+0,u32(0x127ull));
}
B655f12:{NFSU2_TR(0x655f12);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655f17:L655f17:{c.instructions+=4;NFSU2_TR(0x655f17);
w4(R+28,u32(0x790ac8ull));
}
B655f1c:{NFSU2_TR(0x655f1c);
__builtin_memmove((R+24),(R+0),4);
}
B655f1e:{NFSU2_TR(0x655f1e);
__builtin_memmove((R+4),(R+8),4);
}
B655f20:{NFSU2_TR(0x655f20);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655f22:L655f22:{c.instructions+=1;NFSU2_TR(0x655f22);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655f24;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655f22u);}goto L655f22;}}
}
B655f24:L655f24:{c.instructions+=1;NFSU2_TR(0x655f24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655f30;}}
}
B655f26:L655f26:{c.instructions+=2;NFSU2_TR(0x655f26);
w4(R+0,u32(0x128ull));
}
B655f2b:{NFSU2_TR(0x655f2b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655f30:L655f30:{c.instructions+=5;NFSU2_TR(0x655f30);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655f32:{NFSU2_TR(0x655f32);
w4(R+28,u32(0x7b4498ull));
}
B655f37:{NFSU2_TR(0x655f37);
__builtin_memmove((R+24),(R+0),4);
}
B655f39:{NFSU2_TR(0x655f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655f3a:{NFSU2_TR(0x655f3a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655f3c:L655f3c:{c.instructions+=1;NFSU2_TR(0x655f3c);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655f3e;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655f3cu);}goto L655f3c;}}
}
B655f3e:L655f3e:{c.instructions+=1;NFSU2_TR(0x655f3e);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655f44:L655f44:{c.instructions+=4;NFSU2_TR(0x655f44);
w4(R+28,u32(0x7b3ddcull));
}
B655f49:{NFSU2_TR(0x655f49);
__builtin_memmove((R+24),(R+0),4);
}
B655f4b:{NFSU2_TR(0x655f4b);
__builtin_memmove((R+4),(R+8),4);
}
B655f4d:{NFSU2_TR(0x655f4d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655f4f:L655f4f:{c.instructions+=1;NFSU2_TR(0x655f4f);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655f51;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655f4fu);}goto L655f4f;}}
}
B655f51:L655f51:{c.instructions+=1;NFSU2_TR(0x655f51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655f5d;}}
}
B655f53:L655f53:{c.instructions+=2;NFSU2_TR(0x655f53);
w4(R+0,u32(0x129ull));
}
B655f58:{NFSU2_TR(0x655f58);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655f5d:L655f5d:{c.instructions+=4;NFSU2_TR(0x655f5d);
w4(R+28,u32(0x7b4490ull));
}
B655f62:{NFSU2_TR(0x655f62);
__builtin_memmove((R+24),(R+0),4);
}
B655f64:{NFSU2_TR(0x655f64);
__builtin_memmove((R+4),(R+8),4);
}
B655f66:{NFSU2_TR(0x655f66);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B655f68:L655f68:{c.instructions+=1;NFSU2_TR(0x655f68);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655f6a;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655f68u);}goto L655f68;}}
}
B655f6a:L655f6a:{c.instructions+=1;NFSU2_TR(0x655f6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655f76;}}
}
B655f6c:L655f6c:{c.instructions+=2;NFSU2_TR(0x655f6c);
w4(R+0,u32(0x12aull));
}
B655f71:{NFSU2_TR(0x655f71);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655f76:L655f76:{c.instructions+=4;NFSU2_TR(0x655f76);
__builtin_memmove((R+4),(R+8),4);
}
B655f78:{NFSU2_TR(0x655f78);
w4(R+28,u32(0x7b4488ull));
}
B655f7d:{NFSU2_TR(0x655f7d);
__builtin_memmove((R+24),(R+0),4);
}
B655f7f:{NFSU2_TR(0x655f7f);
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
B655f81:L655f81:{c.instructions+=1;NFSU2_TR(0x655f81);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655f83;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655f81u);}goto L655f81;}}
}
B655f83:L655f83:{c.instructions+=1;NFSU2_TR(0x655f83);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655f89:L655f89:{c.instructions+=3;NFSU2_TR(0x655f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B655f8c:{NFSU2_TR(0x655f8c);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B655f8f:{NFSU2_TR(0x655f8f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655b14u);}goto L655b14;}}
}
B655f95:L655f95:{c.instructions+=5;NFSU2_TR(0x655f95);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655f97:{NFSU2_TR(0x655f97);
w4(R+28,u32(0x7b3d9cull));
}
B655f9c:{NFSU2_TR(0x655f9c);
__builtin_memmove((R+24),(R+0),4);
}
B655f9e:{NFSU2_TR(0x655f9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655f9f:{NFSU2_TR(0x655f9f);
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
B655fa1:L655fa1:{c.instructions+=1;NFSU2_TR(0x655fa1);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655fa3;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655fa1u);}goto L655fa1;}}
}
B655fa3:L655fa3:{c.instructions+=1;NFSU2_TR(0x655fa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655faf;}}
}
B655fa5:L655fa5:{c.instructions+=2;NFSU2_TR(0x655fa5);
w4(R+0,u32(0x11full));
}
B655faa:{NFSU2_TR(0x655faa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655faf:L655faf:{c.instructions+=5;NFSU2_TR(0x655faf);
__builtin_memmove((R+24),(R+0),4);
}
B655fb1:{NFSU2_TR(0x655fb1);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655fb3:{NFSU2_TR(0x655fb3);
w4(R+28,u32(0x7b3d24ull));
}
B655fb8:{NFSU2_TR(0x655fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655fb9:{NFSU2_TR(0x655fb9);
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
B655fbb:L655fbb:{c.instructions+=1;NFSU2_TR(0x655fbb);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655fbd;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655fbbu);}goto L655fbb;}}
}
B655fbd:L655fbd:{c.instructions+=1;NFSU2_TR(0x655fbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655b14u);}goto L655b14;}}
}
B655fc3:L655fc3:{c.instructions+=2;NFSU2_TR(0x655fc3);
w4(R+0,u32(0x126ull));
}
B655fc8:{NFSU2_TR(0x655fc8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655fcd:L655fcd:{c.instructions+=5;NFSU2_TR(0x655fcd);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655fcf:{NFSU2_TR(0x655fcf);
w4(R+28,u32(0x7b447cull));
}
B655fd4:{NFSU2_TR(0x655fd4);
__builtin_memmove((R+24),(R+0),4);
}
B655fd6:{NFSU2_TR(0x655fd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655fd7:{NFSU2_TR(0x655fd7);
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
B655fd9:L655fd9:{c.instructions+=1;NFSU2_TR(0x655fd9);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655fdb;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655fd9u);}goto L655fd9;}}
}
B655fdb:L655fdb:{c.instructions+=1;NFSU2_TR(0x655fdb);
if(r1(R+518)){TAIL_STATIC(0x65617cu,656);}
}
B655fe1:L655fe1:{c.instructions+=5;NFSU2_TR(0x655fe1);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655fe3:{NFSU2_TR(0x655fe3);
w4(R+28,u32(0x7b3dc8ull));
}
B655fe8:{NFSU2_TR(0x655fe8);
__builtin_memmove((R+24),(R+0),4);
}
B655fea:{NFSU2_TR(0x655fea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B655feb:{NFSU2_TR(0x655feb);
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
B655fed:L655fed:{c.instructions+=1;NFSU2_TR(0x655fed);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L655fef;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x655fedu);}goto L655fed;}}
}
B655fef:L655fef:{c.instructions+=1;NFSU2_TR(0x655fef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L655ffb;}}
}
B655ff1:L655ff1:{c.instructions+=2;NFSU2_TR(0x655ff1);
w4(R+0,u32(0x12dull));
}
B655ff6:{NFSU2_TR(0x655ff6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6557e9u);}goto L6557e9;}
}
B655ffb:L655ffb:{c.instructions+=2;NFSU2_TR(0x655ffb);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B655ffd:{NFSU2_TR(0x655ffd);
w4(R+28,u32(0x7b3dbcull));
TAIL_STATIC(0x656002u,656);
}
XIT:NFSU2_TR_EXIT(0x655,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
