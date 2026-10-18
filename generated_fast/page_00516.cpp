#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x516,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x516,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_516(u8* __restrict R,Cpu& c);
u32 page_516(Cpu& c){return body_516(c.regs.data(),c);}
__attribute__((noinline)) u32 body_516(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x516004:goto L516004;
case 0x51600a:goto L51600a;
case 0x51600c:goto L51600c;
case 0x516011:c.instructions+=1;goto B516011;
case 0x516017:goto L516017;
case 0x516019:goto L516019;
case 0x51601e:c.instructions+=3;goto B51601e;
case 0x516020:c.instructions+=2;goto B516020;
case 0x516022:c.instructions+=1;goto B516022;
case 0x516024:goto L516024;
case 0x51602a:c.instructions+=1;goto B51602a;
case 0x51602c:goto L51602c;
case 0x516032:c.instructions+=2;goto B516032;
case 0x516034:c.instructions+=1;goto B516034;
case 0x516036:goto L516036;
case 0x516038:c.instructions+=4;goto B516038;
case 0x51603b:c.instructions+=3;goto B51603b;
case 0x516041:c.instructions+=2;goto B516041;
case 0x516044:c.instructions+=1;goto B516044;
case 0x516049:goto L516049;
case 0x51604f:c.instructions+=2;goto B51604f;
case 0x516052:c.instructions+=1;goto B516052;
case 0x516058:goto L516058;
case 0x51605b:c.instructions+=1;goto B51605b;
case 0x516060:goto L516060;
case 0x516063:c.instructions+=5;goto B516063;
case 0x516065:c.instructions+=4;goto B516065;
case 0x51606b:c.instructions+=3;goto B51606b;
case 0x51606e:c.instructions+=2;goto B51606e;
case 0x51606f:c.instructions+=1;goto B51606f;
case 0x516071:goto L516071;
case 0x516077:c.instructions+=4;goto B516077;
case 0x51607c:c.instructions+=3;goto B51607c;
case 0x51607e:c.instructions+=2;goto B51607e;
case 0x516082:c.instructions+=1;goto B516082;
case 0x516084:goto L516084;
case 0x516087:c.instructions+=2;goto B516087;
case 0x51608d:c.instructions+=1;goto B51608d;
case 0x516090:goto L516090;
case 0x516095:c.instructions+=1;goto B516095;
case 0x516097:goto L516097;
case 0x51609a:c.instructions+=6;goto B51609a;
case 0x51609d:c.instructions+=5;goto B51609d;
case 0x51609f:c.instructions+=4;goto B51609f;
case 0x5160a1:c.instructions+=3;goto B5160a1;
case 0x5160a4:c.instructions+=2;goto B5160a4;
case 0x5160aa:c.instructions+=1;goto B5160aa;
case 0x5160af:goto L5160af;
case 0x5160b5:c.instructions+=11;goto B5160b5;
case 0x5160bb:c.instructions+=10;goto B5160bb;
case 0x5160bd:c.instructions+=9;goto B5160bd;
case 0x5160c1:c.instructions+=8;goto B5160c1;
case 0x5160c7:c.instructions+=7;goto B5160c7;
case 0x5160cd:c.instructions+=6;goto B5160cd;
case 0x5160ce:c.instructions+=5;goto B5160ce;
case 0x5160d1:c.instructions+=4;goto B5160d1;
case 0x5160d4:c.instructions+=3;goto B5160d4;
case 0x5160d6:c.instructions+=2;goto B5160d6;
case 0x5160da:c.instructions+=1;goto B5160da;
case 0x5160dc:goto L5160dc;
case 0x5160de:goto L5160de;
case 0x5160e3:c.instructions+=2;goto B5160e3;
case 0x5160e5:c.instructions+=1;goto B5160e5;
case 0x5160e7:goto L5160e7;
case 0x5160ed:c.instructions+=1;goto B5160ed;
case 0x5160ef:goto L5160ef;
case 0x5160f2:c.instructions+=3;goto B5160f2;
case 0x5160f6:c.instructions+=2;goto B5160f6;
case 0x5160f7:c.instructions+=1;goto B5160f7;
case 0x5160fc:goto L5160fc;
case 0x5160ff:c.instructions+=1;goto B5160ff;
case 0x516101:goto L516101;
case 0x516104:c.instructions+=2;goto B516104;
case 0x516107:c.instructions+=1;goto B516107;
case 0x516109:goto L516109;
case 0x51610c:goto L51610c;
case 0x51610f:c.instructions+=1;goto B51610f;
case 0x516115:goto L516115;
case 0x51611b:c.instructions+=4;goto B51611b;
case 0x516121:c.instructions+=3;goto B516121;
case 0x516123:c.instructions+=2;goto B516123;
case 0x516126:c.instructions+=1;goto B516126;
case 0x516128:goto L516128;
case 0x51612e:c.instructions+=2;goto B51612e;
case 0x516130:c.instructions+=1;goto B516130;
case 0x516132:goto L516132;
case 0x516137:c.instructions+=1;goto B516137;
case 0x516139:goto L516139;
case 0x51613c:c.instructions+=4;goto B51613c;
case 0x51613f:c.instructions+=3;goto B51613f;
case 0x516144:c.instructions+=2;goto B516144;
case 0x516147:c.instructions+=1;goto B516147;
case 0x51614c:goto L51614c;
case 0x516152:c.instructions+=6;goto B516152;
case 0x516157:c.instructions+=5;goto B516157;
case 0x51615a:c.instructions+=4;goto B51615a;
case 0x516160:c.instructions+=3;goto B516160;
case 0x516163:c.instructions+=2;goto B516163;
case 0x516169:c.instructions+=1;goto B516169;
case 0x51616e:goto L51616e;
case 0x516174:c.instructions+=7;goto B516174;
case 0x516177:c.instructions+=6;goto B516177;
case 0x516179:c.instructions+=5;goto B516179;
case 0x51617f:c.instructions+=4;goto B51617f;
case 0x516181:c.instructions+=3;goto B516181;
case 0x516187:c.instructions+=2;goto B516187;
case 0x51618d:c.instructions+=1;goto B51618d;
case 0x516192:goto L516192;
case 0x516198:goto L516198;
case 0x51619e:c.instructions+=2;goto B51619e;
case 0x5161a0:c.instructions+=1;goto B5161a0;
case 0x5161a2:goto L5161a2;
case 0x5161a7:c.instructions+=1;goto B5161a7;
case 0x5161a9:goto L5161a9;
case 0x5161ac:c.instructions+=5;goto B5161ac;
case 0x5161af:c.instructions+=4;goto B5161af;
case 0x5161b2:c.instructions+=3;goto B5161b2;
case 0x5161b7:c.instructions+=2;goto B5161b7;
case 0x5161bb:c.instructions+=1;goto B5161bb;
case 0x5161c0:goto L5161c0;
case 0x5161c6:c.instructions+=7;goto B5161c6;
case 0x5161c9:c.instructions+=6;goto B5161c9;
case 0x5161cd:c.instructions+=5;goto B5161cd;
case 0x5161d3:c.instructions+=4;goto B5161d3;
case 0x5161d7:c.instructions+=3;goto B5161d7;
case 0x5161dd:c.instructions+=2;goto B5161dd;
case 0x5161e3:c.instructions+=1;goto B5161e3;
case 0x5161e8:goto L5161e8;
case 0x5161ee:goto L5161ee;
case 0x5161f4:c.instructions+=2;goto B5161f4;
case 0x5161f6:c.instructions+=1;goto B5161f6;
case 0x5161f8:goto L5161f8;
case 0x5161fd:c.instructions+=2;goto B5161fd;
case 0x5161ff:c.instructions+=1;goto B5161ff;
case 0x516201:goto L516201;
case 0x516207:c.instructions+=1;goto B516207;
case 0x516209:goto L516209;
case 0x51620c:c.instructions+=3;goto B51620c;
case 0x51620f:c.instructions+=2;goto B51620f;
case 0x516212:c.instructions+=1;goto B516212;
case 0x516217:goto L516217;
case 0x51621b:c.instructions+=2;goto B51621b;
case 0x516220:c.instructions+=1;goto B516220;
case 0x516225:goto L516225;
case 0x516229:c.instructions+=4;goto B516229;
case 0x51622c:c.instructions+=3;goto B51622c;
case 0x516232:c.instructions+=2;goto B516232;
case 0x516236:c.instructions+=1;goto B516236;
case 0x51623c:goto L51623c;
case 0x516241:c.instructions+=2;goto B516241;
case 0x516246:c.instructions+=1;goto B516246;
case 0x516248:goto L516248;
case 0x51624b:c.instructions+=1;goto B51624b;
case 0x51624d:goto L51624d;
case 0x516254:c.instructions+=1;goto B516254;
case 0x516256:goto L516256;
case 0x516259:c.instructions+=5;goto B516259;
case 0x516260:c.instructions+=4;goto B516260;
case 0x516263:c.instructions+=3;goto B516263;
case 0x516266:c.instructions+=2;goto B516266;
case 0x51626d:c.instructions+=1;goto B51626d;
case 0x516270:goto L516270;
case 0x516271:c.instructions+=4;goto B516271;
case 0x516272:c.instructions+=3;goto B516272;
case 0x516273:c.instructions+=2;goto B516273;
case 0x516274:c.instructions+=1;goto B516274;
case 0x516280:goto L516280;
case 0x516284:c.instructions+=2;goto B516284;
case 0x516285:c.instructions+=1;goto B516285;
case 0x51628a:goto L51628a;
case 0x51628d:c.instructions+=2;goto B51628d;
case 0x51628f:c.instructions+=1;goto B51628f;
case 0x516291:goto L516291;
case 0x516292:goto L516292;
case 0x516296:c.instructions+=2;goto B516296;
case 0x516298:c.instructions+=1;goto B516298;
case 0x51629a:goto L51629a;
case 0x5162a1:c.instructions+=3;goto B5162a1;
case 0x5162a5:c.instructions+=2;goto B5162a5;
case 0x5162ad:c.instructions+=1;goto B5162ad;
case 0x5162b2:goto L5162b2;
case 0x5162b9:c.instructions+=3;goto B5162b9;
case 0x5162bd:c.instructions+=2;goto B5162bd;
case 0x5162c5:c.instructions+=1;goto B5162c5;
case 0x5162d0:goto L5162d0;
case 0x5162d1:c.instructions+=6;goto B5162d1;
case 0x5162d2:c.instructions+=5;goto B5162d2;
case 0x5162d3:c.instructions+=4;goto B5162d3;
case 0x5162d7:c.instructions+=3;goto B5162d7;
case 0x5162d9:c.instructions+=2;goto B5162d9;
case 0x5162df:c.instructions+=1;goto B5162df;
case 0x5162e0:goto L5162e0;
case 0x5162e2:c.instructions+=2;goto B5162e2;
case 0x5162e4:c.instructions+=1;goto B5162e4;
case 0x5162e6:goto L5162e6;
case 0x5162e8:c.instructions+=1;goto B5162e8;
case 0x5162ea:goto L5162ea;
case 0x5162eb:c.instructions+=3;goto B5162eb;
case 0x5162ee:c.instructions+=2;goto B5162ee;
case 0x5162f1:c.instructions+=1;goto B5162f1;
case 0x5162f3:goto L5162f3;
case 0x5162f6:goto L5162f6;
case 0x5162f7:c.instructions+=2;goto B5162f7;
case 0x5162fa:c.instructions+=1;goto B5162fa;
case 0x5162fc:goto L5162fc;
case 0x516300:c.instructions+=1;goto B516300;
case 0x516307:goto L516307;
case 0x516309:c.instructions+=3;goto B516309;
case 0x51630c:c.instructions+=2;goto B51630c;
case 0x51630e:c.instructions+=1;goto B51630e;
case 0x516310:goto L516310;
case 0x516313:c.instructions+=1;goto B516313;
case 0x516315:goto L516315;
case 0x516316:c.instructions+=3;goto B516316;
case 0x516319:c.instructions+=2;goto B516319;
case 0x51631c:c.instructions+=1;goto B51631c;
case 0x51631e:goto L51631e;
case 0x51631f:c.instructions+=4;goto B51631f;
case 0x516320:c.instructions+=3;goto B516320;
case 0x516322:c.instructions+=2;goto B516322;
case 0x516323:c.instructions+=1;goto B516323;
case 0x516326:goto L516326;
case 0x51632d:c.instructions+=4;goto B51632d;
case 0x51632e:c.instructions+=3;goto B51632e;
case 0x51632f:c.instructions+=2;goto B51632f;
case 0x516330:c.instructions+=1;goto B516330;
case 0x516340:goto L516340;
case 0x516344:c.instructions+=2;goto B516344;
case 0x516345:c.instructions+=1;goto B516345;
case 0x51634a:goto L51634a;
case 0x51634c:c.instructions+=2;goto B51634c;
case 0x51634f:c.instructions+=1;goto B51634f;
case 0x516360:goto L516360;
case 0x516361:c.instructions+=5;goto B516361;
case 0x516367:c.instructions+=4;goto B516367;
case 0x516369:c.instructions+=3;goto B516369;
case 0x51636b:c.instructions+=2;goto B51636b;
case 0x51636c:c.instructions+=1;goto B51636c;
case 0x51636e:goto L51636e;
case 0x516372:c.instructions+=1;goto B516372;
case 0x516375:goto L516375;
case 0x516377:c.instructions+=1;goto B516377;
case 0x516379:goto L516379;
case 0x51637a:c.instructions+=3;goto B51637a;
case 0x51637d:c.instructions+=2;goto B51637d;
case 0x51637f:c.instructions+=1;goto B51637f;
case 0x516381:goto L516381;
case 0x516382:c.instructions+=3;goto B516382;
case 0x516383:c.instructions+=2;goto B516383;
case 0x516385:c.instructions+=1;goto B516385;
case 0x516388:goto L516388;
case 0x51638b:c.instructions+=3;goto B51638b;
case 0x51638d:c.instructions+=2;goto B51638d;
case 0x51638f:c.instructions+=1;goto B51638f;
case 0x516391:goto L516391;
case 0x516392:c.instructions+=3;goto B516392;
case 0x516393:c.instructions+=2;goto B516393;
case 0x516395:c.instructions+=1;goto B516395;
case 0x5163a0:goto L5163a0;
case 0x5163a4:c.instructions+=2;goto B5163a4;
case 0x5163a5:c.instructions+=1;goto B5163a5;
case 0x5163aa:goto L5163aa;
case 0x5163ac:c.instructions+=2;goto B5163ac;
case 0x5163af:c.instructions+=1;goto B5163af;
case 0x5163c0:goto L5163c0;
case 0x5163c1:c.instructions+=9;goto B5163c1;
case 0x5163c2:c.instructions+=8;goto B5163c2;
case 0x5163c3:c.instructions+=7;goto B5163c3;
case 0x5163c5:c.instructions+=6;goto B5163c5;
case 0x5163c7:c.instructions+=5;goto B5163c7;
case 0x5163c8:c.instructions+=4;goto B5163c8;
case 0x5163ce:c.instructions+=3;goto B5163ce;
case 0x5163d4:c.instructions+=2;goto B5163d4;
case 0x5163d9:c.instructions+=1;goto B5163d9;
case 0x5163e0:goto L5163e0;
case 0x5163e3:c.instructions+=7;goto B5163e3;
case 0x5163e5:c.instructions+=6;goto B5163e5;
case 0x5163e8:c.instructions+=5;goto B5163e8;
case 0x5163eb:c.instructions+=4;goto B5163eb;
case 0x5163f2:c.instructions+=3;goto B5163f2;
case 0x5163f5:c.instructions+=2;goto B5163f5;
case 0x5163f6:c.instructions+=1;goto B5163f6;
case 0x5163f8:goto L5163f8;
case 0x5163fd:c.instructions+=1;goto B5163fd;
case 0x516400:goto L516400;
case 0x516402:c.instructions+=2;goto B516402;
case 0x516403:c.instructions+=1;goto B516403;
case 0x516408:goto L516408;
case 0x51640a:c.instructions+=4;goto B51640a;
case 0x51640b:c.instructions+=3;goto B51640b;
case 0x516410:c.instructions+=2;goto B516410;
case 0x516412:c.instructions+=1;goto B516412;
case 0x516417:goto L516417;
case 0x51641d:c.instructions+=20;goto B51641d;
case 0x516420:c.instructions+=19;goto B516420;
case 0x516427:c.instructions+=18;goto B516427;
case 0x51642a:c.instructions+=17;goto B51642a;
case 0x51642d:c.instructions+=16;goto B51642d;
case 0x516430:c.instructions+=15;goto B516430;
case 0x516433:c.instructions+=14;goto B516433;
case 0x51643a:c.instructions+=13;goto B51643a;
case 0x516440:c.instructions+=12;goto B516440;
case 0x516443:c.instructions+=11;goto B516443;
case 0x51644a:c.instructions+=10;goto B51644a;
case 0x516450:c.instructions+=9;goto B516450;
case 0x516453:c.instructions+=8;goto B516453;
case 0x51645e:c.instructions+=7;goto B51645e;
case 0x516464:c.instructions+=6;goto B516464;
case 0x516467:c.instructions+=5;goto B516467;
case 0x516468:c.instructions+=4;goto B516468;
case 0x51646b:c.instructions+=3;goto B51646b;
case 0x516471:c.instructions+=2;goto B516471;
case 0x516477:c.instructions+=1;goto B516477;
case 0x516479:goto L516479;
case 0x51647a:c.instructions+=4;goto B51647a;
case 0x51647b:c.instructions+=3;goto B51647b;
case 0x51647c:c.instructions+=2;goto B51647c;
case 0x51647d:c.instructions+=1;goto B51647d;
case 0x516480:goto L516480;
case 0x516481:c.instructions+=9;goto B516481;
case 0x516482:c.instructions+=8;goto B516482;
case 0x516483:c.instructions+=7;goto B516483;
case 0x516485:c.instructions+=6;goto B516485;
case 0x516487:c.instructions+=5;goto B516487;
case 0x516488:c.instructions+=4;goto B516488;
case 0x51648e:c.instructions+=3;goto B51648e;
case 0x516490:c.instructions+=2;goto B516490;
case 0x516496:c.instructions+=1;goto B516496;
case 0x5164a0:goto L5164a0;
case 0x5164a6:c.instructions+=1;goto B5164a6;
case 0x5164ab:goto L5164ab;
case 0x5164ac:c.instructions+=2;goto B5164ac;
case 0x5164b1:c.instructions+=1;goto B5164b1;
case 0x5164b6:goto L5164b6;
case 0x5164b8:c.instructions+=15;goto B5164b8;
case 0x5164bb:c.instructions+=14;goto B5164bb;
case 0x5164be:c.instructions+=13;goto B5164be;
case 0x5164c1:c.instructions+=12;goto B5164c1;
case 0x5164c8:c.instructions+=11;goto B5164c8;
case 0x5164cf:c.instructions+=10;goto B5164cf;
case 0x5164d6:c.instructions+=9;goto B5164d6;
case 0x5164dc:c.instructions+=8;goto B5164dc;
case 0x5164e2:c.instructions+=7;goto B5164e2;
case 0x5164e5:c.instructions+=6;goto B5164e5;
case 0x5164e6:c.instructions+=5;goto B5164e6;
case 0x5164e7:c.instructions+=4;goto B5164e7;
case 0x5164ed:c.instructions+=3;goto B5164ed;
case 0x5164f0:c.instructions+=2;goto B5164f0;
case 0x5164f6:c.instructions+=1;goto B5164f6;
case 0x5164f8:goto L5164f8;
case 0x5164f9:c.instructions+=4;goto B5164f9;
case 0x5164fa:c.instructions+=3;goto B5164fa;
case 0x5164fb:c.instructions+=2;goto B5164fb;
case 0x5164fc:c.instructions+=1;goto B5164fc;
case 0x516500:goto L516500;
case 0x516501:c.instructions+=9;goto B516501;
case 0x516502:c.instructions+=8;goto B516502;
case 0x516503:c.instructions+=7;goto B516503;
case 0x516504:c.instructions+=6;goto B516504;
case 0x516505:c.instructions+=5;goto B516505;
case 0x516507:c.instructions+=4;goto B516507;
case 0x516509:c.instructions+=3;goto B516509;
case 0x51650f:c.instructions+=2;goto B51650f;
case 0x516512:c.instructions+=1;goto B516512;
case 0x516517:goto L516517;
case 0x51651a:c.instructions+=7;goto B51651a;
case 0x51651c:c.instructions+=6;goto B51651c;
case 0x51651f:c.instructions+=5;goto B51651f;
case 0x516522:c.instructions+=4;goto B516522;
case 0x516529:c.instructions+=3;goto B516529;
case 0x51652c:c.instructions+=2;goto B51652c;
case 0x51652d:c.instructions+=1;goto B51652d;
case 0x51652f:goto L51652f;
case 0x516531:c.instructions+=2;goto B516531;
case 0x516533:c.instructions+=1;goto B516533;
case 0x516537:goto L516537;
case 0x51653c:c.instructions+=3;goto B51653c;
case 0x51653e:c.instructions+=2;goto B51653e;
case 0x516540:c.instructions+=1;goto B516540;
case 0x516542:goto L516542;
case 0x516545:c.instructions+=1;goto B516545;
case 0x516547:goto L516547;
case 0x516549:c.instructions+=4;goto B516549;
case 0x51654f:c.instructions+=3;goto B51654f;
case 0x516551:c.instructions+=2;goto B516551;
case 0x516554:c.instructions+=1;goto B516554;
case 0x516556:goto L516556;
case 0x51655c:c.instructions+=2;goto B51655c;
case 0x51655f:c.instructions+=1;goto B51655f;
case 0x516561:goto L516561;
case 0x516567:c.instructions+=2;goto B516567;
case 0x516569:c.instructions+=1;goto B516569;
case 0x51656b:goto L51656b;
case 0x51656e:c.instructions+=1;goto B51656e;
case 0x516570:goto L516570;
case 0x516576:c.instructions+=1;goto B516576;
case 0x516578:goto L516578;
case 0x51657b:c.instructions+=4;goto B51657b;
case 0x51657c:c.instructions+=3;goto B51657c;
case 0x516581:c.instructions+=2;goto B516581;
case 0x516583:c.instructions+=1;goto B516583;
case 0x516588:goto L516588;
case 0x51658c:c.instructions+=11;goto B51658c;
case 0x51658f:c.instructions+=10;goto B51658f;
case 0x516594:c.instructions+=9;goto B516594;
case 0x516597:c.instructions+=8;goto B516597;
case 0x51659a:c.instructions+=7;goto B51659a;
case 0x51659d:c.instructions+=6;goto B51659d;
case 0x5165a0:c.instructions+=5;goto B5165a0;
case 0x5165a3:c.instructions+=4;goto B5165a3;
case 0x5165a9:c.instructions+=3;goto B5165a9;
case 0x5165ac:c.instructions+=2;goto B5165ac;
case 0x5165ad:c.instructions+=1;goto B5165ad;
case 0x5165b3:goto L5165b3;
case 0x5165b9:c.instructions+=4;goto B5165b9;
case 0x5165ba:c.instructions+=3;goto B5165ba;
case 0x5165c0:c.instructions+=2;goto B5165c0;
case 0x5165c4:c.instructions+=1;goto B5165c4;
case 0x5165ca:goto L5165ca;
case 0x5165cb:c.instructions+=5;goto B5165cb;
case 0x5165cc:c.instructions+=4;goto B5165cc;
case 0x5165cd:c.instructions+=3;goto B5165cd;
case 0x5165ce:c.instructions+=2;goto B5165ce;
case 0x5165cf:c.instructions+=1;goto B5165cf;
case 0x5165e0:goto L5165e0;
case 0x5165e2:c.instructions+=1;goto B5165e2;
case 0x5165e8:goto L5165e8;
case 0x5165eb:c.instructions+=1;goto B5165eb;
case 0x5165ed:goto L5165ed;
case 0x5165ee:c.instructions+=3;goto B5165ee;
case 0x5165f4:c.instructions+=2;goto B5165f4;
case 0x5165f7:c.instructions+=1;goto B5165f7;
case 0x5165f9:goto L5165f9;
case 0x5165fb:c.instructions+=1;goto B5165fb;
case 0x5165fc:goto L5165fc;
case 0x516602:c.instructions+=3;goto B516602;
case 0x516609:c.instructions+=2;goto B516609;
case 0x51660b:c.instructions+=1;goto B51660b;
case 0x51660d:goto L51660d;
case 0x51660f:c.instructions+=1;goto B51660f;
case 0x516610:goto L516610;
case 0x516612:c.instructions+=1;goto B516612;
case 0x516620:goto L516620;
case 0x516624:c.instructions+=9;goto B516624;
case 0x516625:c.instructions+=8;goto B516625;
case 0x516629:c.instructions+=7;goto B516629;
case 0x51662a:c.instructions+=6;goto B51662a;
case 0x51662b:c.instructions+=5;goto B51662b;
case 0x51662c:c.instructions+=4;goto B51662c;
case 0x51662d:c.instructions+=3;goto B51662d;
case 0x51662e:c.instructions+=2;goto B51662e;
case 0x516630:c.instructions+=1;goto B516630;
case 0x516635:goto L516635;
case 0x516637:c.instructions+=2;goto B516637;
case 0x51663c:c.instructions+=1;goto B51663c;
case 0x51663f:goto L51663f;
case 0x516641:goto L516641;
case 0x516647:c.instructions+=24;goto B516647;
case 0x51664d:c.instructions+=23;goto B51664d;
case 0x516653:c.instructions+=22;goto B516653;
case 0x516655:c.instructions+=21;goto B516655;
case 0x51665a:c.instructions+=20;goto B51665a;
case 0x516660:c.instructions+=19;goto B516660;
case 0x516663:c.instructions+=18;goto B516663;
case 0x516665:c.instructions+=17;goto B516665;
case 0x51666b:c.instructions+=16;goto B51666b;
case 0x51666e:c.instructions+=15;goto B51666e;
case 0x516671:c.instructions+=14;goto B516671;
case 0x516677:c.instructions+=13;goto B516677;
case 0x516679:c.instructions+=12;goto B516679;
case 0x51667f:c.instructions+=11;goto B51667f;
case 0x516680:c.instructions+=10;goto B516680;
case 0x516686:c.instructions+=9;goto B516686;
case 0x516688:c.instructions+=8;goto B516688;
case 0x51668a:c.instructions+=7;goto B51668a;
case 0x51668b:c.instructions+=6;goto B51668b;
case 0x51668c:c.instructions+=5;goto B51668c;
case 0x51668d:c.instructions+=4;goto B51668d;
case 0x51668e:c.instructions+=3;goto B51668e;
case 0x516694:c.instructions+=2;goto B516694;
case 0x516696:c.instructions+=1;goto B516696;
case 0x51669b:goto L51669b;
case 0x51669c:c.instructions+=4;goto B51669c;
case 0x51669d:c.instructions+=3;goto B51669d;
case 0x51669e:c.instructions+=2;goto B51669e;
case 0x51669f:c.instructions+=1;goto B51669f;
case 0x5166b0:goto L5166b0;
case 0x5166b4:c.instructions+=10;goto B5166b4;
case 0x5166b5:c.instructions+=9;goto B5166b5;
case 0x5166b6:c.instructions+=8;goto B5166b6;
case 0x5166b7:c.instructions+=7;goto B5166b7;
case 0x5166bb:c.instructions+=6;goto B5166bb;
case 0x5166bd:c.instructions+=5;goto B5166bd;
case 0x5166be:c.instructions+=4;goto B5166be;
case 0x5166c1:c.instructions+=3;goto B5166c1;
case 0x5166c6:c.instructions+=2;goto B5166c6;
case 0x5166cc:c.instructions+=1;goto B5166cc;
case 0x5166d0:goto L5166d0;
case 0x5166d3:c.instructions+=25;goto B5166d3;
case 0x5166d5:c.instructions+=24;goto B5166d5;
case 0x5166d7:c.instructions+=23;goto B5166d7;
case 0x5166d9:c.instructions+=22;goto B5166d9;
case 0x5166dc:c.instructions+=21;goto B5166dc;
case 0x5166df:c.instructions+=20;goto B5166df;
case 0x5166e2:c.instructions+=19;goto B5166e2;
case 0x5166e5:c.instructions+=18;goto B5166e5;
case 0x5166e7:c.instructions+=17;goto B5166e7;
case 0x5166e9:c.instructions+=16;goto B5166e9;
case 0x5166ec:c.instructions+=15;goto B5166ec;
case 0x5166ef:c.instructions+=14;goto B5166ef;
case 0x5166f1:c.instructions+=13;goto B5166f1;
case 0x5166f3:c.instructions+=12;goto B5166f3;
case 0x5166f6:c.instructions+=11;goto B5166f6;
case 0x5166f8:c.instructions+=10;goto B5166f8;
case 0x5166fb:c.instructions+=9;goto B5166fb;
case 0x5166fd:c.instructions+=8;goto B5166fd;
case 0x516700:c.instructions+=7;goto B516700;
case 0x516702:c.instructions+=6;goto B516702;
case 0x516705:c.instructions+=5;goto B516705;
case 0x516707:c.instructions+=4;goto B516707;
case 0x51670a:c.instructions+=3;goto B51670a;
case 0x51670d:c.instructions+=2;goto B51670d;
case 0x51670e:c.instructions+=1;goto B51670e;
case 0x516710:goto L516710;
case 0x516716:c.instructions+=9;goto B516716;
case 0x51671c:c.instructions+=8;goto B51671c;
case 0x51671e:c.instructions+=7;goto B51671e;
case 0x516721:c.instructions+=6;goto B516721;
case 0x516724:c.instructions+=5;goto B516724;
case 0x51672a:c.instructions+=4;goto B51672a;
case 0x516730:c.instructions+=3;goto B516730;
case 0x516735:c.instructions+=2;goto B516735;
case 0x516739:c.instructions+=1;goto B516739;
case 0x516740:goto L516740;
case 0x516743:c.instructions+=21;goto B516743;
case 0x516745:c.instructions+=20;goto B516745;
case 0x516747:c.instructions+=19;goto B516747;
case 0x516749:c.instructions+=18;goto B516749;
case 0x51674c:c.instructions+=17;goto B51674c;
case 0x51674f:c.instructions+=16;goto B51674f;
case 0x516752:c.instructions+=15;goto B516752;
case 0x516755:c.instructions+=14;goto B516755;
case 0x516757:c.instructions+=13;goto B516757;
case 0x516759:c.instructions+=12;goto B516759;
case 0x51675c:c.instructions+=11;goto B51675c;
case 0x51675f:c.instructions+=10;goto B51675f;
case 0x516761:c.instructions+=9;goto B516761;
case 0x516763:c.instructions+=8;goto B516763;
case 0x516766:c.instructions+=7;goto B516766;
case 0x516769:c.instructions+=6;goto B516769;
case 0x51676b:c.instructions+=5;goto B51676b;
case 0x51676d:c.instructions+=4;goto B51676d;
case 0x516770:c.instructions+=3;goto B516770;
case 0x516772:c.instructions+=2;goto B516772;
case 0x516775:c.instructions+=1;goto B516775;
case 0x51677a:goto L51677a;
case 0x51677c:goto L51677c;
case 0x516782:c.instructions+=7;goto B516782;
case 0x516784:c.instructions+=6;goto B516784;
case 0x516789:c.instructions+=5;goto B516789;
case 0x51678b:c.instructions+=4;goto B51678b;
case 0x51678e:c.instructions+=3;goto B51678e;
case 0x516794:c.instructions+=2;goto B516794;
case 0x516795:c.instructions+=1;goto B516795;
case 0x516797:goto L516797;
case 0x51679d:c.instructions+=1;goto B51679d;
case 0x5167a2:goto L5167a2;
case 0x5167a6:c.instructions+=4;goto B5167a6;
case 0x5167a7:c.instructions+=3;goto B5167a7;
case 0x5167a8:c.instructions+=2;goto B5167a8;
case 0x5167aa:c.instructions+=1;goto B5167aa;
case 0x5167af:goto L5167af;
case 0x5167b5:c.instructions+=2;goto B5167b5;
case 0x5167b6:c.instructions+=1;goto B5167b6;
case 0x5167b8:goto L5167b8;
case 0x5167be:c.instructions+=5;goto B5167be;
case 0x5167c4:c.instructions+=4;goto B5167c4;
case 0x5167c6:c.instructions+=3;goto B5167c6;
case 0x5167c9:c.instructions+=2;goto B5167c9;
case 0x5167cf:c.instructions+=1;goto B5167cf;
case 0x5167d4:goto L5167d4;
case 0x5167d7:c.instructions+=21;goto B5167d7;
case 0x5167da:c.instructions+=20;goto B5167da;
case 0x5167dc:c.instructions+=19;goto B5167dc;
case 0x5167df:c.instructions+=18;goto B5167df;
case 0x5167e1:c.instructions+=17;goto B5167e1;
case 0x5167e3:c.instructions+=16;goto B5167e3;
case 0x5167e6:c.instructions+=15;goto B5167e6;
case 0x5167e9:c.instructions+=14;goto B5167e9;
case 0x5167eb:c.instructions+=13;goto B5167eb;
case 0x5167ed:c.instructions+=12;goto B5167ed;
case 0x5167f0:c.instructions+=11;goto B5167f0;
case 0x5167f3:c.instructions+=10;goto B5167f3;
case 0x5167f5:c.instructions+=9;goto B5167f5;
case 0x5167f7:c.instructions+=8;goto B5167f7;
case 0x5167fa:c.instructions+=7;goto B5167fa;
case 0x5167fd:c.instructions+=6;goto B5167fd;
case 0x5167ff:c.instructions+=5;goto B5167ff;
case 0x516801:c.instructions+=4;goto B516801;
case 0x516804:c.instructions+=3;goto B516804;
case 0x516806:c.instructions+=2;goto B516806;
case 0x516809:c.instructions+=1;goto B516809;
case 0x51680e:goto L51680e;
case 0x516810:goto L516810;
case 0x516816:c.instructions+=11;goto B516816;
case 0x516818:c.instructions+=10;goto B516818;
case 0x51681d:c.instructions+=9;goto B51681d;
case 0x51681f:c.instructions+=8;goto B51681f;
case 0x516825:c.instructions+=7;goto B516825;
case 0x516827:c.instructions+=6;goto B516827;
case 0x51682a:c.instructions+=5;goto B51682a;
case 0x51682c:c.instructions+=4;goto B51682c;
case 0x51682f:c.instructions+=3;goto B51682f;
case 0x516835:c.instructions+=2;goto B516835;
case 0x516836:c.instructions+=1;goto B516836;
case 0x516838:goto L516838;
case 0x51683e:c.instructions+=8;goto B51683e;
case 0x51683f:c.instructions+=7;goto B51683f;
case 0x516845:c.instructions+=6;goto B516845;
case 0x516846:c.instructions+=5;goto B516846;
case 0x516847:c.instructions+=4;goto B516847;
case 0x516849:c.instructions+=3;goto B516849;
case 0x51684c:c.instructions+=2;goto B51684c;
case 0x51684d:c.instructions+=1;goto B51684d;
case 0x516850:goto L516850;
case 0x516854:c.instructions+=8;goto B516854;
case 0x516855:c.instructions+=7;goto B516855;
case 0x516856:c.instructions+=6;goto B516856;
case 0x516858:c.instructions+=5;goto B516858;
case 0x516859:c.instructions+=4;goto B516859;
case 0x51685a:c.instructions+=3;goto B51685a;
case 0x51685e:c.instructions+=2;goto B51685e;
case 0x516861:c.instructions+=1;goto B516861;
case 0x516866:goto L516866;
case 0x516868:c.instructions+=25;goto B516868;
case 0x51686b:c.instructions+=24;goto B51686b;
case 0x51686e:c.instructions+=23;goto B51686e;
case 0x516871:c.instructions+=22;goto B516871;
case 0x516873:c.instructions+=21;goto B516873;
case 0x516875:c.instructions+=20;goto B516875;
case 0x516878:c.instructions+=19;goto B516878;
case 0x51687b:c.instructions+=18;goto B51687b;
case 0x51687e:c.instructions+=17;goto B51687e;
case 0x516881:c.instructions+=16;goto B516881;
case 0x516884:c.instructions+=15;goto B516884;
case 0x516887:c.instructions+=14;goto B516887;
case 0x51688a:c.instructions+=13;goto B51688a;
case 0x51688d:c.instructions+=12;goto B51688d;
case 0x516890:c.instructions+=11;goto B516890;
case 0x516893:c.instructions+=10;goto B516893;
case 0x516896:c.instructions+=9;goto B516896;
case 0x516899:c.instructions+=8;goto B516899;
case 0x51689b:c.instructions+=7;goto B51689b;
case 0x51689d:c.instructions+=6;goto B51689d;
case 0x5168a0:c.instructions+=5;goto B5168a0;
case 0x5168a3:c.instructions+=4;goto B5168a3;
case 0x5168a6:c.instructions+=3;goto B5168a6;
case 0x5168a7:c.instructions+=2;goto B5168a7;
case 0x5168a9:c.instructions+=1;goto B5168a9;
case 0x5168ab:goto L5168ab;
case 0x5168ad:c.instructions+=5;goto B5168ad;
case 0x5168b3:c.instructions+=4;goto B5168b3;
case 0x5168b5:c.instructions+=3;goto B5168b5;
case 0x5168b8:c.instructions+=2;goto B5168b8;
case 0x5168be:c.instructions+=1;goto B5168be;
case 0x5168c3:goto L5168c3;
case 0x5168c5:c.instructions+=22;goto B5168c5;
case 0x5168c8:c.instructions+=21;goto B5168c8;
case 0x5168cb:c.instructions+=20;goto B5168cb;
case 0x5168ce:c.instructions+=19;goto B5168ce;
case 0x5168d0:c.instructions+=18;goto B5168d0;
case 0x5168d2:c.instructions+=17;goto B5168d2;
case 0x5168d5:c.instructions+=16;goto B5168d5;
case 0x5168d8:c.instructions+=15;goto B5168d8;
case 0x5168db:c.instructions+=14;goto B5168db;
case 0x5168de:c.instructions+=13;goto B5168de;
case 0x5168e1:c.instructions+=12;goto B5168e1;
case 0x5168e4:c.instructions+=11;goto B5168e4;
case 0x5168e7:c.instructions+=10;goto B5168e7;
case 0x5168ea:c.instructions+=9;goto B5168ea;
case 0x5168ed:c.instructions+=8;goto B5168ed;
case 0x5168f0:c.instructions+=7;goto B5168f0;
case 0x5168f3:c.instructions+=6;goto B5168f3;
case 0x5168f6:c.instructions+=5;goto B5168f6;
case 0x5168f9:c.instructions+=4;goto B5168f9;
case 0x5168fb:c.instructions+=3;goto B5168fb;
case 0x5168fe:c.instructions+=2;goto B5168fe;
case 0x516903:c.instructions+=1;goto B516903;
case 0x516908:goto L516908;
case 0x51690a:goto L51690a;
case 0x51690c:c.instructions+=6;goto B51690c;
case 0x516912:c.instructions+=5;goto B516912;
case 0x516915:c.instructions+=4;goto B516915;
case 0x51691b:c.instructions+=3;goto B51691b;
case 0x51691c:c.instructions+=2;goto B51691c;
case 0x51691e:c.instructions+=1;goto B51691e;
case 0x516920:goto L516920;
case 0x516926:c.instructions+=2;goto B516926;
case 0x51692b:c.instructions+=1;goto B51692b;
case 0x516930:goto L516930;
case 0x516932:c.instructions+=22;goto B516932;
case 0x516935:c.instructions+=21;goto B516935;
case 0x516938:c.instructions+=20;goto B516938;
case 0x51693b:c.instructions+=19;goto B51693b;
case 0x51693e:c.instructions+=18;goto B51693e;
case 0x516941:c.instructions+=17;goto B516941;
case 0x516943:c.instructions+=16;goto B516943;
case 0x516945:c.instructions+=15;goto B516945;
case 0x516948:c.instructions+=14;goto B516948;
case 0x51694b:c.instructions+=13;goto B51694b;
case 0x51694e:c.instructions+=12;goto B51694e;
case 0x516951:c.instructions+=11;goto B516951;
case 0x516954:c.instructions+=10;goto B516954;
case 0x516957:c.instructions+=9;goto B516957;
case 0x51695a:c.instructions+=8;goto B51695a;
case 0x51695d:c.instructions+=7;goto B51695d;
case 0x516960:c.instructions+=6;goto B516960;
case 0x516963:c.instructions+=5;goto B516963;
case 0x516965:c.instructions+=4;goto B516965;
case 0x516968:c.instructions+=3;goto B516968;
case 0x51696d:c.instructions+=2;goto B51696d;
case 0x516972:c.instructions+=1;goto B516972;
case 0x516975:goto L516975;
case 0x516977:goto L516977;
case 0x516979:c.instructions+=16;goto B516979;
case 0x51697f:c.instructions+=15;goto B51697f;
case 0x516982:c.instructions+=14;goto B516982;
case 0x516985:c.instructions+=13;goto B516985;
case 0x51698b:c.instructions+=12;goto B51698b;
case 0x516991:c.instructions+=11;goto B516991;
case 0x516994:c.instructions+=10;goto B516994;
case 0x51699a:c.instructions+=9;goto B51699a;
case 0x51699b:c.instructions+=8;goto B51699b;
case 0x5169a1:c.instructions+=7;goto B5169a1;
case 0x5169a3:c.instructions+=6;goto B5169a3;
case 0x5169a7:c.instructions+=5;goto B5169a7;
case 0x5169a8:c.instructions+=4;goto B5169a8;
case 0x5169a9:c.instructions+=3;goto B5169a9;
case 0x5169aa:c.instructions+=2;goto B5169aa;
case 0x5169b0:c.instructions+=1;goto B5169b0;
case 0x5169b5:goto L5169b5;
case 0x5169bb:c.instructions+=2;goto B5169bb;
case 0x5169bc:c.instructions+=1;goto B5169bc;
case 0x5169c2:goto L5169c2;
case 0x5169c6:c.instructions+=7;goto B5169c6;
case 0x5169c8:c.instructions+=6;goto B5169c8;
case 0x5169ce:c.instructions+=5;goto B5169ce;
case 0x5169d0:c.instructions+=4;goto B5169d0;
case 0x5169d3:c.instructions+=3;goto B5169d3;
case 0x5169d9:c.instructions+=2;goto B5169d9;
case 0x5169de:c.instructions+=1;goto B5169de;
case 0x5169e0:goto L5169e0;
case 0x5169e2:c.instructions+=22;goto B5169e2;
case 0x5169e5:c.instructions+=21;goto B5169e5;
case 0x5169e8:c.instructions+=20;goto B5169e8;
case 0x5169eb:c.instructions+=19;goto B5169eb;
case 0x5169ee:c.instructions+=18;goto B5169ee;
case 0x5169f1:c.instructions+=17;goto B5169f1;
case 0x5169f3:c.instructions+=16;goto B5169f3;
case 0x5169f5:c.instructions+=15;goto B5169f5;
case 0x5169f8:c.instructions+=14;goto B5169f8;
case 0x5169fb:c.instructions+=13;goto B5169fb;
case 0x5169fe:c.instructions+=12;goto B5169fe;
case 0x516a01:c.instructions+=11;goto B516a01;
case 0x516a04:c.instructions+=10;goto B516a04;
case 0x516a07:c.instructions+=9;goto B516a07;
case 0x516a0a:c.instructions+=8;goto B516a0a;
case 0x516a0d:c.instructions+=7;goto B516a0d;
case 0x516a10:c.instructions+=6;goto B516a10;
case 0x516a13:c.instructions+=5;goto B516a13;
case 0x516a16:c.instructions+=4;goto B516a16;
case 0x516a18:c.instructions+=3;goto B516a18;
case 0x516a1d:c.instructions+=2;goto B516a1d;
case 0x516a20:c.instructions+=1;goto B516a20;
case 0x516a25:goto L516a25;
case 0x516a27:goto L516a27;
case 0x516a29:c.instructions+=10;goto B516a29;
case 0x516a2f:c.instructions+=9;goto B516a2f;
case 0x516a32:c.instructions+=8;goto B516a32;
case 0x516a34:c.instructions+=7;goto B516a34;
case 0x516a36:c.instructions+=6;goto B516a36;
case 0x516a3c:c.instructions+=5;goto B516a3c;
case 0x516a3f:c.instructions+=4;goto B516a3f;
case 0x516a45:c.instructions+=3;goto B516a45;
case 0x516a46:c.instructions+=2;goto B516a46;
case 0x516a48:c.instructions+=1;goto B516a48;
case 0x516a4a:goto L516a4a;
case 0x516a4c:c.instructions+=8;goto B516a4c;
case 0x516a4d:c.instructions+=7;goto B516a4d;
case 0x516a53:c.instructions+=6;goto B516a53;
case 0x516a54:c.instructions+=5;goto B516a54;
case 0x516a57:c.instructions+=4;goto B516a57;
case 0x516a58:c.instructions+=3;goto B516a58;
case 0x516a5b:c.instructions+=2;goto B516a5b;
case 0x516a5c:c.instructions+=1;goto B516a5c;
case 0x516a60:goto L516a60;
case 0x516a61:c.instructions+=7;goto B516a61;
case 0x516a62:c.instructions+=6;goto B516a62;
case 0x516a63:c.instructions+=5;goto B516a63;
case 0x516a65:c.instructions+=4;goto B516a65;
case 0x516a66:c.instructions+=3;goto B516a66;
case 0x516a68:c.instructions+=2;goto B516a68;
case 0x516a6a:c.instructions+=1;goto B516a6a;
case 0x516a70:goto L516a70;
case 0x516a77:c.instructions+=4;goto B516a77;
case 0x516a7e:c.instructions+=3;goto B516a7e;
case 0x516a7f:c.instructions+=2;goto B516a7f;
case 0x516a82:c.instructions+=1;goto B516a82;
case 0x516a84:goto L516a84;
case 0x516a8a:c.instructions+=2;goto B516a8a;
case 0x516a8f:c.instructions+=1;goto B516a8f;
case 0x516a91:goto L516a91;
case 0x516a93:goto L516a93;
case 0x516a99:c.instructions+=2;goto B516a99;
case 0x516a9e:c.instructions+=1;goto B516a9e;
case 0x516aa0:goto L516aa0;
case 0x516aa2:c.instructions+=1;goto B516aa2;
case 0x516aa7:goto L516aa7;
case 0x516aaa:c.instructions+=2;goto B516aaa;
case 0x516aab:c.instructions+=1;goto B516aab;
case 0x516aad:goto L516aad;
case 0x516aae:c.instructions+=6;goto B516aae;
case 0x516ab0:c.instructions+=5;goto B516ab0;
case 0x516ab2:c.instructions+=4;goto B516ab2;
case 0x516ab3:c.instructions+=3;goto B516ab3;
case 0x516ab4:c.instructions+=2;goto B516ab4;
case 0x516ab5:c.instructions+=1;goto B516ab5;
case 0x516ac0:goto L516ac0;
case 0x516ac4:c.instructions+=9;goto B516ac4;
case 0x516ac7:c.instructions+=8;goto B516ac7;
case 0x516ac8:c.instructions+=7;goto B516ac8;
case 0x516acc:c.instructions+=6;goto B516acc;
case 0x516acd:c.instructions+=5;goto B516acd;
case 0x516ace:c.instructions+=4;goto B516ace;
case 0x516acf:c.instructions+=3;goto B516acf;
case 0x516ad0:c.instructions+=2;goto B516ad0;
case 0x516ad2:c.instructions+=1;goto B516ad2;
case 0x516ad7:goto L516ad7;
case 0x516adb:c.instructions+=1;goto B516adb;
case 0x516ae0:goto L516ae0;
case 0x516ae4:c.instructions+=4;goto B516ae4;
case 0x516ae7:c.instructions+=3;goto B516ae7;
case 0x516aee:c.instructions+=2;goto B516aee;
case 0x516af3:c.instructions+=1;goto B516af3;
case 0x516af7:goto L516af7;
case 0x516af9:goto L516af9;
case 0x516afa:c.instructions+=3;goto B516afa;
case 0x516b00:c.instructions+=2;goto B516b00;
case 0x516b05:c.instructions+=1;goto B516b05;
case 0x516b09:goto L516b09;
case 0x516b0b:goto L516b0b;
case 0x516b0d:c.instructions+=6;goto B516b0d;
case 0x516b0f:c.instructions+=5;goto B516b0f;
case 0x516b11:c.instructions+=4;goto B516b11;
case 0x516b13:c.instructions+=3;goto B516b13;
case 0x516b15:c.instructions+=2;goto B516b15;
case 0x516b16:c.instructions+=1;goto B516b16;
case 0x516b1b:goto L516b1b;
case 0x516b1c:c.instructions+=4;goto B516b1c;
case 0x516b1d:c.instructions+=3;goto B516b1d;
case 0x516b1e:c.instructions+=2;goto B516b1e;
case 0x516b21:c.instructions+=1;goto B516b21;
case 0x516b30:goto L516b30;
case 0x516b32:c.instructions+=19;goto B516b32;
case 0x516b37:c.instructions+=18;goto B516b37;
case 0x516b3d:c.instructions+=17;goto B516b3d;
case 0x516b3e:c.instructions+=16;goto B516b3e;
case 0x516b45:c.instructions+=15;goto B516b45;
case 0x516b46:c.instructions+=14;goto B516b46;
case 0x516b47:c.instructions+=13;goto B516b47;
case 0x516b49:c.instructions+=12;goto B516b49;
case 0x516b4a:c.instructions+=11;goto B516b4a;
case 0x516b4c:c.instructions+=10;goto B516b4c;
case 0x516b50:c.instructions+=9;goto B516b50;
case 0x516b53:c.instructions+=8;goto B516b53;
case 0x516b56:c.instructions+=7;goto B516b56;
case 0x516b59:c.instructions+=6;goto B516b59;
case 0x516b5c:c.instructions+=5;goto B516b5c;
case 0x516b5f:c.instructions+=4;goto B516b5f;
case 0x516b62:c.instructions+=3;goto B516b62;
case 0x516b66:c.instructions+=2;goto B516b66;
case 0x516b6c:c.instructions+=1;goto B516b6c;
case 0x516b71:goto L516b71;
case 0x516b75:c.instructions+=7;goto B516b75;
case 0x516b7b:c.instructions+=6;goto B516b7b;
case 0x516b7c:c.instructions+=5;goto B516b7c;
case 0x516b7e:c.instructions+=4;goto B516b7e;
case 0x516b7f:c.instructions+=3;goto B516b7f;
case 0x516b86:c.instructions+=2;goto B516b86;
case 0x516b89:c.instructions+=1;goto B516b89;
case 0x516b90:goto L516b90;
case 0x516b91:c.instructions+=14;goto B516b91;
case 0x516b93:c.instructions+=13;goto B516b93;
case 0x516b96:c.instructions+=12;goto B516b96;
case 0x516b98:c.instructions+=11;goto B516b98;
case 0x516b9d:c.instructions+=10;goto B516b9d;
case 0x516ba3:c.instructions+=9;goto B516ba3;
case 0x516ba4:c.instructions+=8;goto B516ba4;
case 0x516bab:c.instructions+=7;goto B516bab;
case 0x516bb1:c.instructions+=6;goto B516bb1;
case 0x516bb2:c.instructions+=5;goto B516bb2;
case 0x516bb4:c.instructions+=4;goto B516bb4;
case 0x516bb7:c.instructions+=3;goto B516bb7;
case 0x516bb9:c.instructions+=2;goto B516bb9;
case 0x516bba:c.instructions+=1;goto B516bba;
case 0x516bbd:goto L516bbd;
case 0x516bc0:c.instructions+=8;goto B516bc0;
case 0x516bc3:c.instructions+=7;goto B516bc3;
case 0x516bc7:c.instructions+=6;goto B516bc7;
case 0x516bc9:c.instructions+=5;goto B516bc9;
case 0x516bd0:c.instructions+=4;goto B516bd0;
case 0x516bd7:c.instructions+=3;goto B516bd7;
case 0x516bde:c.instructions+=2;goto B516bde;
case 0x516be5:c.instructions+=1;goto B516be5;
case 0x516bea:goto L516bea;
case 0x516bec:c.instructions+=6;goto B516bec;
case 0x516bee:c.instructions+=5;goto B516bee;
case 0x516bf0:c.instructions+=4;goto B516bf0;
case 0x516bf2:c.instructions+=3;goto B516bf2;
case 0x516bf6:c.instructions+=2;goto B516bf6;
case 0x516c01:c.instructions+=1;goto B516c01;
case 0x516c06:goto L516c06;
case 0x516c08:c.instructions+=6;goto B516c08;
case 0x516c0a:c.instructions+=5;goto B516c0a;
case 0x516c0c:c.instructions+=4;goto B516c0c;
case 0x516c0d:c.instructions+=3;goto B516c0d;
case 0x516c11:c.instructions+=2;goto B516c11;
case 0x516c1c:c.instructions+=1;goto B516c1c;
case 0x516c21:goto L516c21;
case 0x516c23:c.instructions+=2;goto B516c23;
case 0x516c27:c.instructions+=1;goto B516c27;
case 0x516c2c:goto L516c2c;
case 0x516c2e:c.instructions+=2;goto B516c2e;
case 0x516c32:c.instructions+=1;goto B516c32;
case 0x516c37:goto L516c37;
case 0x516c3c:c.instructions+=3;goto B516c3c;
case 0x516c3e:c.instructions+=2;goto B516c3e;
case 0x516c42:c.instructions+=1;goto B516c42;
case 0x516c47:goto L516c47;
case 0x516c4a:c.instructions+=4;goto B516c4a;
case 0x516c4e:c.instructions+=3;goto B516c4e;
case 0x516c4f:c.instructions+=2;goto B516c4f;
case 0x516c52:c.instructions+=1;goto B516c52;
case 0x516c57:goto L516c57;
case 0x516c5d:c.instructions+=1;goto B516c5d;
case 0x516c62:goto L516c62;
case 0x516c64:c.instructions+=2;goto B516c64;
case 0x516c66:c.instructions+=1;goto B516c66;
case 0x516c6b:goto L516c6b;
case 0x516c6e:c.instructions+=2;goto B516c6e;
case 0x516c6f:c.instructions+=1;goto B516c6f;
case 0x516c71:goto L516c71;
case 0x516c78:c.instructions+=2;goto B516c78;
case 0x516c83:c.instructions+=1;goto B516c83;
case 0x516c88:goto L516c88;
case 0x516c8f:c.instructions+=6;goto B516c8f;
case 0x516c90:c.instructions+=5;goto B516c90;
case 0x516c97:c.instructions+=4;goto B516c97;
case 0x516c98:c.instructions+=3;goto B516c98;
case 0x516c9a:c.instructions+=2;goto B516c9a;
case 0x516c9b:c.instructions+=1;goto B516c9b;
case 0x516ca0:goto L516ca0;
case 0x516ca1:c.instructions+=3;goto B516ca1;
case 0x516ca3:c.instructions+=2;goto B516ca3;
case 0x516ca5:c.instructions+=1;goto B516ca5;
case 0x516ca8:goto L516ca8;
case 0x516cac:c.instructions+=7;goto B516cac;
case 0x516cb0:c.instructions+=6;goto B516cb0;
case 0x516cb4:c.instructions+=5;goto B516cb4;
case 0x516cb5:c.instructions+=4;goto B516cb5;
case 0x516cb6:c.instructions+=3;goto B516cb6;
case 0x516cb7:c.instructions+=2;goto B516cb7;
case 0x516cba:c.instructions+=1;goto B516cba;
case 0x516cbf:goto L516cbf;
case 0x516cc0:c.instructions+=1;goto B516cc0;
case 0x516cd0:goto L516cd0;
case 0x516cd1:c.instructions+=3;goto B516cd1;
case 0x516cd3:c.instructions+=2;goto B516cd3;
case 0x516cd7:c.instructions+=1;goto B516cd7;
case 0x516cdc:goto L516cdc;
case 0x516ce2:c.instructions+=8;goto B516ce2;
case 0x516ce6:c.instructions+=7;goto B516ce6;
case 0x516cec:c.instructions+=6;goto B516cec;
case 0x516cf2:c.instructions+=5;goto B516cf2;
case 0x516cf5:c.instructions+=4;goto B516cf5;
case 0x516cf8:c.instructions+=3;goto B516cf8;
case 0x516cfb:c.instructions+=2;goto B516cfb;
case 0x516cfc:c.instructions+=1;goto B516cfc;
case 0x516d00:goto L516d00;
case 0x516d06:c.instructions+=13;goto B516d06;
case 0x516d0a:c.instructions+=12;goto B516d0a;
case 0x516d10:c.instructions+=11;goto B516d10;
case 0x516d16:c.instructions+=10;goto B516d16;
case 0x516d18:c.instructions+=9;goto B516d18;
case 0x516d1b:c.instructions+=8;goto B516d1b;
case 0x516d1e:c.instructions+=7;goto B516d1e;
case 0x516d22:c.instructions+=6;goto B516d22;
case 0x516d26:c.instructions+=5;goto B516d26;
case 0x516d28:c.instructions+=4;goto B516d28;
case 0x516d2a:c.instructions+=3;goto B516d2a;
case 0x516d2d:c.instructions+=2;goto B516d2d;
case 0x516d30:c.instructions+=1;goto B516d30;
case 0x516d40:goto L516d40;
case 0x516d46:c.instructions+=14;goto B516d46;
case 0x516d4a:c.instructions+=13;goto B516d4a;
case 0x516d50:c.instructions+=12;goto B516d50;
case 0x516d56:c.instructions+=11;goto B516d56;
case 0x516d58:c.instructions+=10;goto B516d58;
case 0x516d5c:c.instructions+=9;goto B516d5c;
case 0x516d5f:c.instructions+=8;goto B516d5f;
case 0x516d62:c.instructions+=7;goto B516d62;
case 0x516d66:c.instructions+=6;goto B516d66;
case 0x516d6a:c.instructions+=5;goto B516d6a;
case 0x516d6c:c.instructions+=4;goto B516d6c;
case 0x516d70:c.instructions+=3;goto B516d70;
case 0x516d73:c.instructions+=2;goto B516d73;
case 0x516d76:c.instructions+=1;goto B516d76;
case 0x516d80:goto L516d80;
case 0x516d86:c.instructions+=17;goto B516d86;
case 0x516d8a:c.instructions+=16;goto B516d8a;
case 0x516d90:c.instructions+=15;goto B516d90;
case 0x516d96:c.instructions+=14;goto B516d96;
case 0x516d98:c.instructions+=13;goto B516d98;
case 0x516d9b:c.instructions+=12;goto B516d9b;
case 0x516d9e:c.instructions+=11;goto B516d9e;
case 0x516da2:c.instructions+=10;goto B516da2;
case 0x516da6:c.instructions+=9;goto B516da6;
case 0x516da8:c.instructions+=8;goto B516da8;
case 0x516daa:c.instructions+=7;goto B516daa;
case 0x516dad:c.instructions+=6;goto B516dad;
case 0x516db0:c.instructions+=5;goto B516db0;
case 0x516db3:c.instructions+=4;goto B516db3;
case 0x516db6:c.instructions+=3;goto B516db6;
case 0x516db9:c.instructions+=2;goto B516db9;
case 0x516dbc:c.instructions+=1;goto B516dbc;
case 0x516dc0:goto L516dc0;
case 0x516dc1:c.instructions+=4;goto B516dc1;
case 0x516dc3:c.instructions+=3;goto B516dc3;
case 0x516dc6:c.instructions+=2;goto B516dc6;
case 0x516dc8:c.instructions+=1;goto B516dc8;
case 0x516dca:goto L516dca;
case 0x516dcd:c.instructions+=6;goto B516dcd;
case 0x516dce:c.instructions+=5;goto B516dce;
case 0x516dd1:c.instructions+=4;goto B516dd1;
case 0x516dd4:c.instructions+=3;goto B516dd4;
case 0x516dd6:c.instructions+=2;goto B516dd6;
case 0x516dd8:c.instructions+=1;goto B516dd8;
case 0x516dda:goto L516dda;
case 0x516ddd:c.instructions+=2;goto B516ddd;
case 0x516dde:c.instructions+=1;goto B516dde;
case 0x516de3:goto L516de3;
case 0x516de6:c.instructions+=2;goto B516de6;
case 0x516de9:c.instructions+=1;goto B516de9;
case 0x516dec:goto L516dec;
case 0x516def:c.instructions+=1;goto B516def;
case 0x516df1:goto L516df1;
case 0x516df4:c.instructions+=2;goto B516df4;
case 0x516df5:c.instructions+=1;goto B516df5;
case 0x516dfa:goto L516dfa;
case 0x516dfd:c.instructions+=2;goto B516dfd;
case 0x516e00:c.instructions+=1;goto B516e00;
case 0x516e03:goto L516e03;
case 0x516e04:c.instructions+=3;goto B516e04;
case 0x516e06:c.instructions+=2;goto B516e06;
case 0x516e07:c.instructions+=1;goto B516e07;
case 0x516e0c:goto L516e0c;
case 0x516e0d:c.instructions+=1;goto B516e0d;
case 0x516e10:goto L516e10;
case 0x516e16:c.instructions+=12;goto B516e16;
case 0x516e1a:c.instructions+=11;goto B516e1a;
case 0x516e20:c.instructions+=10;goto B516e20;
case 0x516e21:c.instructions+=9;goto B516e21;
case 0x516e22:c.instructions+=8;goto B516e22;
case 0x516e23:c.instructions+=7;goto B516e23;
case 0x516e29:c.instructions+=6;goto B516e29;
case 0x516e2c:c.instructions+=5;goto B516e2c;
case 0x516e2f:c.instructions+=4;goto B516e2f;
case 0x516e33:c.instructions+=3;goto B516e33;
case 0x516e35:c.instructions+=2;goto B516e35;
case 0x516e37:c.instructions+=1;goto B516e37;
case 0x516e39:goto L516e39;
case 0x516e3a:c.instructions+=1;goto B516e3a;
case 0x516e3f:goto L516e3f;
case 0x516e42:c.instructions+=1;goto B516e42;
case 0x516e49:goto L516e49;
case 0x516e4d:c.instructions+=2;goto B516e4d;
case 0x516e4f:c.instructions+=1;goto B516e4f;
case 0x516e51:goto L516e51;
case 0x516e53:c.instructions+=2;goto B516e53;
case 0x516e56:c.instructions+=1;goto B516e56;
case 0x516e58:goto L516e58;
case 0x516e59:c.instructions+=2;goto B516e59;
case 0x516e5e:c.instructions+=1;goto B516e5e;
case 0x516e60:goto L516e60;
case 0x516e61:c.instructions+=3;goto B516e61;
case 0x516e65:c.instructions+=2;goto B516e65;
case 0x516e66:c.instructions+=1;goto B516e66;
case 0x516e6b:goto L516e6b;
case 0x516e6e:c.instructions+=4;goto B516e6e;
case 0x516e70:c.instructions+=3;goto B516e70;
case 0x516e72:c.instructions+=2;goto B516e72;
case 0x516e74:c.instructions+=1;goto B516e74;
case 0x516e77:goto L516e77;
case 0x516e79:goto L516e79;
case 0x516e7c:c.instructions+=2;goto B516e7c;
case 0x516e7e:c.instructions+=1;goto B516e7e;
case 0x516e81:goto L516e81;
case 0x516e83:goto L516e83;
case 0x516e84:goto L516e84;
case 0x516e85:c.instructions+=3;goto B516e85;
case 0x516e86:c.instructions+=2;goto B516e86;
case 0x516e87:c.instructions+=1;goto B516e87;
case 0x516e90:goto L516e90;
case 0x516e91:c.instructions+=6;goto B516e91;
case 0x516e94:c.instructions+=5;goto B516e94;
case 0x516e96:c.instructions+=4;goto B516e96;
case 0x516e99:c.instructions+=3;goto B516e99;
case 0x516e9b:c.instructions+=2;goto B516e9b;
case 0x516e9f:c.instructions+=1;goto B516e9f;
case 0x516ea5:goto L516ea5;
case 0x516ea6:c.instructions+=6;goto B516ea6;
case 0x516ea7:c.instructions+=5;goto B516ea7;
case 0x516ea8:c.instructions+=4;goto B516ea8;
case 0x516eaa:c.instructions+=3;goto B516eaa;
case 0x516ead:c.instructions+=2;goto B516ead;
case 0x516eae:c.instructions+=1;goto B516eae;
case 0x516eb0:goto L516eb0;
case 0x516eb2:c.instructions+=1;goto B516eb2;
case 0x516eb4:goto L516eb4;
case 0x516eb8:goto L516eb8;
case 0x516ebb:c.instructions+=1;goto B516ebb;
case 0x516ebd:goto L516ebd;
case 0x516ebf:c.instructions+=2;goto B516ebf;
case 0x516ec3:c.instructions+=1;goto B516ec3;
case 0x516ec5:goto L516ec5;
case 0x516ec9:goto L516ec9;
case 0x516ecb:c.instructions+=1;goto B516ecb;
case 0x516ecd:goto L516ecd;
case 0x516ecf:c.instructions+=1;goto B516ecf;
case 0x516ed5:goto L516ed5;
case 0x516eda:goto L516eda;
case 0x516edc:c.instructions+=1;goto B516edc;
case 0x516ee2:goto L516ee2;
case 0x516ee8:c.instructions+=4;goto B516ee8;
case 0x516eeb:c.instructions+=3;goto B516eeb;
case 0x516eed:c.instructions+=2;goto B516eed;
case 0x516ef0:c.instructions+=1;goto B516ef0;
case 0x516ef6:goto L516ef6;
case 0x516ef8:c.instructions+=1;goto B516ef8;
case 0x516efa:goto L516efa;
case 0x516efd:goto L516efd;
case 0x516eff:c.instructions+=1;goto B516eff;
case 0x516f01:goto L516f01;
case 0x516f03:goto L516f03;
case 0x516f06:c.instructions+=8;goto B516f06;
case 0x516f09:c.instructions+=7;goto B516f09;
case 0x516f0f:c.instructions+=6;goto B516f0f;
case 0x516f13:c.instructions+=5;goto B516f13;
case 0x516f19:c.instructions+=4;goto B516f19;
case 0x516f1f:c.instructions+=3;goto B516f1f;
case 0x516f25:c.instructions+=2;goto B516f25;
case 0x516f27:c.instructions+=1;goto B516f27;
case 0x516f29:goto L516f29;
case 0x516f2c:c.instructions+=3;goto B516f2c;
case 0x516f30:c.instructions+=2;goto B516f30;
case 0x516f33:c.instructions+=1;goto B516f33;
case 0x516f35:goto L516f35;
case 0x516f38:c.instructions+=3;goto B516f38;
case 0x516f3b:c.instructions+=2;goto B516f3b;
case 0x516f3c:c.instructions+=1;goto B516f3c;
case 0x516f3e:goto L516f3e;
case 0x516f41:c.instructions+=2;goto B516f41;
case 0x516f44:c.instructions+=1;goto B516f44;
case 0x516f4a:goto L516f4a;
case 0x516f4d:c.instructions+=3;goto B516f4d;
case 0x516f4f:c.instructions+=2;goto B516f4f;
case 0x516f52:c.instructions+=1;goto B516f52;
case 0x516f54:goto L516f54;
case 0x516f57:c.instructions+=3;goto B516f57;
case 0x516f59:c.instructions+=2;goto B516f59;
case 0x516f5f:c.instructions+=1;goto B516f5f;
case 0x516f65:goto L516f65;
case 0x516f67:c.instructions+=4;goto B516f67;
case 0x516f6a:c.instructions+=3;goto B516f6a;
case 0x516f6e:c.instructions+=2;goto B516f6e;
case 0x516f71:c.instructions+=1;goto B516f71;
case 0x516f74:goto L516f74;
case 0x516f76:c.instructions+=1;goto B516f76;
case 0x516f7c:goto L516f7c;
case 0x516f7f:c.instructions+=3;goto B516f7f;
case 0x516f81:c.instructions+=2;goto B516f81;
case 0x516f85:c.instructions+=1;goto B516f85;
case 0x516f8b:goto L516f8b;
case 0x516f91:c.instructions+=4;goto B516f91;
case 0x516f93:c.instructions+=3;goto B516f93;
case 0x516f95:c.instructions+=2;goto B516f95;
case 0x516f98:c.instructions+=1;goto B516f98;
case 0x516f9e:goto L516f9e;
case 0x516fa0:c.instructions+=1;goto B516fa0;
case 0x516fa2:goto L516fa2;
case 0x516fa5:goto L516fa5;
case 0x516fa7:c.instructions+=1;goto B516fa7;
case 0x516fa9:goto L516fa9;
case 0x516fab:goto L516fab;
case 0x516fae:c.instructions+=8;goto B516fae;
case 0x516fb1:c.instructions+=7;goto B516fb1;
case 0x516fb7:c.instructions+=6;goto B516fb7;
case 0x516fbb:c.instructions+=5;goto B516fbb;
case 0x516fc1:c.instructions+=4;goto B516fc1;
case 0x516fc7:c.instructions+=3;goto B516fc7;
case 0x516fcd:c.instructions+=2;goto B516fcd;
case 0x516fcf:c.instructions+=1;goto B516fcf;
case 0x516fd1:goto L516fd1;
case 0x516fd4:c.instructions+=4;goto B516fd4;
case 0x516fd8:c.instructions+=3;goto B516fd8;
case 0x516fdb:c.instructions+=2;goto B516fdb;
case 0x516fdd:c.instructions+=1;goto B516fdd;
case 0x516fe0:goto L516fe0;
case 0x516fe3:c.instructions+=3;goto B516fe3;
case 0x516fe6:c.instructions+=2;goto B516fe6;
case 0x516fe7:c.instructions+=1;goto B516fe7;
case 0x516fe9:goto L516fe9;
case 0x516fec:c.instructions+=2;goto B516fec;
case 0x516fef:c.instructions+=1;goto B516fef;
case 0x516ff5:goto L516ff5;
case 0x516ff8:c.instructions+=3;goto B516ff8;
case 0x516ffa:c.instructions+=2;goto B516ffa;
case 0x516ffd:c.instructions+=1;goto B516ffd;
case 0x516fff:goto L516fff;
default:missing_instruction(c.pc);}
B516004:L516004:{c.instructions+=1;NFSU2_TR(0x516004);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((R+28),(U+0),4);
}
B51600a:L51600a:{c.instructions+=1;NFSU2_TR(0x51600a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L51600c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51600au);}goto L51600a;}
}
B51600c:L51600c:{c.instructions+=2;NFSU2_TR(0x51600c);
w4(R+4,u32(0x15ull));
}
B516011:{NFSU2_TR(0x516011);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516017:L516017:{c.instructions+=1;NFSU2_TR(0x516017);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L516019;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516017u);}goto L516017;}
}
B516019:L516019:{c.instructions+=4;NFSU2_TR(0x516019);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B51601e:{NFSU2_TR(0x51601e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B516020:{NFSU2_TR(0x516020);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B516022:{NFSU2_TR(0x516022);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51602c;}}
}
B516024:L516024:{c.instructions+=2;NFSU2_TR(0x516024);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51602a:{NFSU2_TR(0x51602a);
if(r1(R+518)){{goto L516058;}}
}
B51602c:L51602c:{c.instructions+=3;NFSU2_TR(0x51602c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516032:{NFSU2_TR(0x516032);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B516034:{NFSU2_TR(0x516034);
if(r1(R+518)){{goto L516058;}}
}
B516036:L516036:{c.instructions+=5;NFSU2_TR(0x516036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B516038:{NFSU2_TR(0x516038);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51603b:{NFSU2_TR(0x51603b);
{u32 ea_=u32(r4(R+24)+u32(540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B516041:{NFSU2_TR(0x516041);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B516044:{NFSU2_TR(0x516044);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516049ull));
TAIL_STATIC(0x75bed4u,75b);
}
B516049:L516049:{c.instructions+=3;NFSU2_TR(0x516049);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51604f:{NFSU2_TR(0x51604f);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B516052:{NFSU2_TR(0x516052);
{u32 ea_=u32(r4(R+24)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B516058:L516058:{c.instructions+=2;NFSU2_TR(0x516058);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51605b:{NFSU2_TR(0x51605b);
w4(R+4,u32(0x15ull));
}
B516060:L516060:{c.instructions+=6;NFSU2_TR(0x516060);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516063:{NFSU2_TR(0x516063);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B516065:{NFSU2_TR(0x516065);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51606b:{NFSU2_TR(0x51606b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51606e:{NFSU2_TR(0x51606e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B51606f:{NFSU2_TR(0x51606f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516060u);}goto L516060;}}
}
B516071:L516071:{c.instructions+=5;NFSU2_TR(0x516071);
__builtin_memmove((R+4),gp(0x89e7bc),4);
}
B516077:{NFSU2_TR(0x516077);
w4(R+0,u32(0x1ull));
}
B51607c:{NFSU2_TR(0x51607c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51607e:{NFSU2_TR(0x51607e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516082:{NFSU2_TR(0x516082);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5160de;}}
}
B516084:L516084:{c.instructions+=3;NFSU2_TR(0x516084);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516087:{NFSU2_TR(0x516087);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xecull))));
__builtin_memmove((R+12),(U+0),4);
}
B51608d:{NFSU2_TR(0x51608d);
__builtin_memmove((R+4),(R+4),4);
}
B516090:L516090:{c.instructions+=2;NFSU2_TR(0x516090);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x15ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B516095:{NFSU2_TR(0x516095);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5160dc;}}
}
B516097:L516097:{c.instructions+=7;NFSU2_TR(0x516097);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51609a:{NFSU2_TR(0x51609a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51609d:{NFSU2_TR(0x51609d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51609f:{NFSU2_TR(0x51609f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5160a1:{NFSU2_TR(0x5160a1);
{u32 ea_=u32(r4(R+12)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5160a4:{NFSU2_TR(0x5160a4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5160aa:{NFSU2_TR(0x5160aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5160afull));
TAIL_STATIC(0x75bed4u,75b);
}
B5160af:L5160af:{c.instructions+=12;NFSU2_TR(0x5160af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5160b5:{NFSU2_TR(0x5160b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5160bb:{NFSU2_TR(0x5160bb);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5160bd:{NFSU2_TR(0x5160bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5160c1:{NFSU2_TR(0x5160c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5160c7:{NFSU2_TR(0x5160c7);
__builtin_memmove((R+4),gp(0x89e7bc),4);
}
B5160cd:{NFSU2_TR(0x5160cd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5160ce:{NFSU2_TR(0x5160ce);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5160d1:{NFSU2_TR(0x5160d1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5160d4:{NFSU2_TR(0x5160d4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5160d6:{NFSU2_TR(0x5160d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5160da:{NFSU2_TR(0x5160da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516090u);}goto L516090;}}
}
B5160dc:L5160dc:{c.instructions+=1;NFSU2_TR(0x5160dc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5160de:L5160de:{c.instructions+=3;NFSU2_TR(0x5160de);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5160e3:{NFSU2_TR(0x5160e3);
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
B5160e5:{NFSU2_TR(0x5160e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5160ef;}}
}
B5160e7:L5160e7:{c.instructions+=2;NFSU2_TR(0x5160e7);
u8 U[14];
__builtin_memmove((U+6),gp(0x890104),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5160ed:{NFSU2_TR(0x5160ed);
if(r1(R+518)){{goto L516101;}}
}
B5160ef:L5160ef:{c.instructions+=4;NFSU2_TR(0x5160ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5160f2:{NFSU2_TR(0x5160f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5160f6:{NFSU2_TR(0x5160f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5160f7:{NFSU2_TR(0x5160f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5160fcull));
TAIL_STATIC(0x56dd90u,56d);
}
B5160fc:L5160fc:{c.instructions+=2;NFSU2_TR(0x5160fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5160ff:{NFSU2_TR(0x5160ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B516101:L516101:{c.instructions+=3;NFSU2_TR(0x516101);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516104:{NFSU2_TR(0x516104);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B516107:{NFSU2_TR(0x516107);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51610c;}}
}
B516109:L516109:{c.instructions+=1;NFSU2_TR(0x516109);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51610c:L51610c:{c.instructions+=2;NFSU2_TR(0x51610c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51610f:{NFSU2_TR(0x51610f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51623c;}}
}
B516115:L516115:{c.instructions+=5;NFSU2_TR(0x516115);
{u32 ea_=u32(r4(R+24)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51611b:{NFSU2_TR(0x51611b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B516121:{NFSU2_TR(0x516121);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B516123:{NFSU2_TR(0x516123);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B516126:{NFSU2_TR(0x516126);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L516139;}}
}
B516128:L516128:{c.instructions+=3;NFSU2_TR(0x516128);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51612e:{NFSU2_TR(0x51612e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B516130:{NFSU2_TR(0x516130);
if(r1(R+518)){{goto L516139;}}
}
B516132:L516132:{c.instructions+=2;NFSU2_TR(0x516132);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B516137:{NFSU2_TR(0x516137);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L516198;}}
}
B516139:L516139:{c.instructions+=5;NFSU2_TR(0x516139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51613c:{NFSU2_TR(0x51613c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51613f:{NFSU2_TR(0x51613f);
u8 U[4];
w4(U+0,u32(0x40000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516144:{NFSU2_TR(0x516144);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2cull))));
}
B516147:{NFSU2_TR(0x516147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51614cull));
TAIL_STATIC(0x43c1f0u,43c);
}
B51614c:L51614c:{c.instructions+=7;NFSU2_TR(0x51614c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B516152:{NFSU2_TR(0x516152);
u8 U[4];
w4(U+0,u32(0x40000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516157:{NFSU2_TR(0x516157);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51615a:{NFSU2_TR(0x51615a);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B516160:{NFSU2_TR(0x516160);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B516163:{NFSU2_TR(0x516163);
{u32 ea_=u32(r4(R+24)+u32(284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B516169:{NFSU2_TR(0x516169);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51616eull));
TAIL_STATIC(0x43c1f0u,43c);
}
B51616e:L51616e:{c.instructions+=8;NFSU2_TR(0x51616e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B516174:{NFSU2_TR(0x516174);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B516177:{NFSU2_TR(0x516177);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B516179:{NFSU2_TR(0x516179);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51617f:{NFSU2_TR(0x51617f);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B516181:{NFSU2_TR(0x516181);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B516187:{NFSU2_TR(0x516187);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51618d:{NFSU2_TR(0x51618d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516192ull));
TAIL_STATIC(0x75bed4u,75b);
}
B516192:L516192:{c.instructions+=1;NFSU2_TR(0x516192);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516198:L516198:{c.instructions+=3;NFSU2_TR(0x516198);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51619e:{NFSU2_TR(0x51619e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5161a0:{NFSU2_TR(0x5161a0);
if(r1(R+518)){{goto L5161a9;}}
}
B5161a2:L5161a2:{c.instructions+=2;NFSU2_TR(0x5161a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5161a7:{NFSU2_TR(0x5161a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5161ee;}}
}
B5161a9:L5161a9:{c.instructions+=6;NFSU2_TR(0x5161a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5161ac:{NFSU2_TR(0x5161ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5161af:{NFSU2_TR(0x5161af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5161b2:{NFSU2_TR(0x5161b2);
u8 U[4];
w4(U+0,u32(0x40000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5161b7:{NFSU2_TR(0x5161b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5161bb:{NFSU2_TR(0x5161bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5161c0ull));
TAIL_STATIC(0x43c1f0u,43c);
}
B5161c0:L5161c0:{c.instructions+=8;NFSU2_TR(0x5161c0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5161c6:{NFSU2_TR(0x5161c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5161c9:{NFSU2_TR(0x5161c9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5161cd:{NFSU2_TR(0x5161cd);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5161d3:{NFSU2_TR(0x5161d3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5161d7:{NFSU2_TR(0x5161d7);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5161dd:{NFSU2_TR(0x5161dd);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5161e3:{NFSU2_TR(0x5161e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5161e8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5161e8:L5161e8:{c.instructions+=1;NFSU2_TR(0x5161e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5161ee:L5161ee:{c.instructions+=3;NFSU2_TR(0x5161ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5161f4:{NFSU2_TR(0x5161f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5161f6:{NFSU2_TR(0x5161f6);
if(r1(R+518)){{goto L51623c;}}
}
B5161f8:L5161f8:{c.instructions+=3;NFSU2_TR(0x5161f8);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5161fd:{NFSU2_TR(0x5161fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5161ff:{NFSU2_TR(0x5161ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L516209;}}
}
B516201:L516201:{c.instructions+=2;NFSU2_TR(0x516201);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B516207:{NFSU2_TR(0x516207);
if(r1(R+518)){{goto L51623c;}}
}
B516209:L516209:{c.instructions+=4;NFSU2_TR(0x516209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51620c:{NFSU2_TR(0x51620c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51620f:{NFSU2_TR(0x51620f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516212:{NFSU2_TR(0x516212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516217ull));
TAIL_STATIC(0x5b5930u,5b5);
}
B516217:L516217:{c.instructions+=3;NFSU2_TR(0x516217);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51621b:{NFSU2_TR(0x51621b);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516220:{NFSU2_TR(0x516220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516225ull));
TAIL_STATIC(0x43c1f0u,43c);
}
B516225:L516225:{c.instructions+=5;NFSU2_TR(0x516225);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B516229:{NFSU2_TR(0x516229);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51622c:{NFSU2_TR(0x51622c);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B516232:{NFSU2_TR(0x516232);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B516236:{NFSU2_TR(0x516236);
{u32 ea_=u32(r4(R+24)+u32(268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51623c:L51623c:{c.instructions+=3;NFSU2_TR(0x51623c);
__builtin_memmove((R+0),gp(0x850078),4);
}
B516241:{NFSU2_TR(0x516241);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B516246:{NFSU2_TR(0x516246);
if(r1(R+518)){{goto L51624d;}}
}
B516248:L516248:{c.instructions+=2;NFSU2_TR(0x516248);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51624b:{NFSU2_TR(0x51624b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L516270;}}
}
B51624d:L51624d:{c.instructions+=2;NFSU2_TR(0x51624d);
u8 U[14];
__builtin_memmove((U+6),gp(0x850088),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B516254:{NFSU2_TR(0x516254);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L516270;}}
}
B516256:L516256:{c.instructions+=6;NFSU2_TR(0x516256);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516259:{NFSU2_TR(0x516259);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89d040ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B516260:{NFSU2_TR(0x516260);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516263:{NFSU2_TR(0x516263);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516266:{NFSU2_TR(0x516266);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89d028ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B51626d:{NFSU2_TR(0x51626d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516270:L516270:{c.instructions+=5;NFSU2_TR(0x516270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516271:{NFSU2_TR(0x516271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516272:{NFSU2_TR(0x516272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B516273:{NFSU2_TR(0x516273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B516274:{NFSU2_TR(0x516274);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516280:L516280:{c.instructions+=3;NFSU2_TR(0x516280);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516284:{NFSU2_TR(0x516284);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516285:{NFSU2_TR(0x516285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51628aull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B51628a:L51628a:{c.instructions+=3;NFSU2_TR(0x51628a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51628d:{NFSU2_TR(0x51628d);
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
B51628f:{NFSU2_TR(0x51628f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L516292;}}
}
B516291:L516291:{c.instructions+=1;NFSU2_TR(0x516291);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516292:L516292:{c.instructions+=3;NFSU2_TR(0x516292);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516296:{NFSU2_TR(0x516296);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B516298:{NFSU2_TR(0x516298);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5162b2;}}
}
B51629a:L51629a:{c.instructions+=4;NFSU2_TR(0x51629a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5162a1:{NFSU2_TR(0x5162a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5162a5:{NFSU2_TR(0x5162a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x79b110ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5162ad:{NFSU2_TR(0x5162ad);
TAIL_STATIC(0x50b990u,50b);
}
B5162b2:L5162b2:{c.instructions+=4;NFSU2_TR(0x5162b2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5162b9:{NFSU2_TR(0x5162b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5162bd:{NFSU2_TR(0x5162bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x79b0f8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5162c5:{NFSU2_TR(0x5162c5);
TAIL_STATIC(0x50b990u,50b);
}
B5162d0:L5162d0:{c.instructions+=7;NFSU2_TR(0x5162d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5162d1:{NFSU2_TR(0x5162d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5162d2:{NFSU2_TR(0x5162d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5162d3:{NFSU2_TR(0x5162d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5162d7:{NFSU2_TR(0x5162d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5162d9:{NFSU2_TR(0x5162d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9bd8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5162df:{NFSU2_TR(0x5162df);
}
B5162e0:L5162e0:{c.instructions+=3;NFSU2_TR(0x5162e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5162e2:{NFSU2_TR(0x5162e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5162e4:{NFSU2_TR(0x5162e4);
if(r1(R+518)){{goto L5162ea;}}
}
B5162e6:L5162e6:{c.instructions+=2;NFSU2_TR(0x5162e6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5162e8:{NFSU2_TR(0x5162e8);
if(r1(R+518)){{goto L5162f6;}}
}
B5162ea:L5162ea:{c.instructions+=4;NFSU2_TR(0x5162ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5162eb:{NFSU2_TR(0x5162eb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5162ee:{NFSU2_TR(0x5162ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5162f1:{NFSU2_TR(0x5162f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5162e0u);}goto L5162e0;}}
}
B5162f3:L5162f3:{c.instructions+=1;NFSU2_TR(0x5162f3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5162f6:L5162f6:{c.instructions+=3;NFSU2_TR(0x5162f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5162f7:{NFSU2_TR(0x5162f7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5162fa:{NFSU2_TR(0x5162fa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L51631e;}}
}
B5162fc:L5162fc:{c.instructions+=2;NFSU2_TR(0x5162fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B516300:{NFSU2_TR(0x516300);
u8 U[12];
w4(U+0,u32(u32(u32(0x9bd8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B516307:L516307:{c.instructions+=4;NFSU2_TR(0x516307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B516309:{NFSU2_TR(0x516309);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51630c:{NFSU2_TR(0x51630c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51630e:{NFSU2_TR(0x51630e);
if(r1(R+518)){{goto L516315;}}
}
B516310:L516310:{c.instructions+=2;NFSU2_TR(0x516310);
u8 U[18];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B516313:{NFSU2_TR(0x516313);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L516326;}}
}
B516315:L516315:{c.instructions+=4;NFSU2_TR(0x516315);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B516316:{NFSU2_TR(0x516316);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B516319:{NFSU2_TR(0x516319);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51631c:{NFSU2_TR(0x51631c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516307u);}goto L516307;}}
}
B51631e:L51631e:{c.instructions+=5;NFSU2_TR(0x51631e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51631f:{NFSU2_TR(0x51631f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516320:{NFSU2_TR(0x516320);
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
B516322:{NFSU2_TR(0x516322);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B516323:{NFSU2_TR(0x516323);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516326:L516326:{c.instructions+=5;NFSU2_TR(0x516326);
u8 U[16];
w4(U+0,u32(u32(u32(0x9bd8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B51632d:{NFSU2_TR(0x51632d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51632e:{NFSU2_TR(0x51632e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51632f:{NFSU2_TR(0x51632f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B516330:{NFSU2_TR(0x516330);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516340:L516340:{c.instructions+=3;NFSU2_TR(0x516340);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516344:{NFSU2_TR(0x516344);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516345:{NFSU2_TR(0x516345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51634aull));
TAIL_STATIC(0x503680u,503);
}
B51634a:L51634a:{c.instructions+=3;NFSU2_TR(0x51634a);
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
B51634c:{NFSU2_TR(0x51634c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B51634f:{NFSU2_TR(0x51634f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516360:L516360:{c.instructions+=6;NFSU2_TR(0x516360);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516361:{NFSU2_TR(0x516361);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B516367:{NFSU2_TR(0x516367);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B516369:{NFSU2_TR(0x516369);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51636b:{NFSU2_TR(0x51636b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51636c:{NFSU2_TR(0x51636c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L516381;}}
}
B51636e:L51636e:{c.instructions+=2;NFSU2_TR(0x51636e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B516372:{NFSU2_TR(0x516372);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B516375:L516375:{c.instructions+=2;NFSU2_TR(0x516375);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B516377:{NFSU2_TR(0x516377);
if(r1(R+518)){{goto L516388;}}
}
B516379:L516379:{c.instructions+=4;NFSU2_TR(0x516379);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51637a:{NFSU2_TR(0x51637a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1cull))));
}
B51637d:{NFSU2_TR(0x51637d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51637f:{NFSU2_TR(0x51637f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516375u);}goto L516375;}}
}
B516381:L516381:{c.instructions+=4;NFSU2_TR(0x516381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516382:{NFSU2_TR(0x516382);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516383:{NFSU2_TR(0x516383);
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
B516385:{NFSU2_TR(0x516385);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516388:L516388:{c.instructions+=4;NFSU2_TR(0x516388);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B51638b:{NFSU2_TR(0x51638b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B51638d:{NFSU2_TR(0x51638d);
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
B51638f:{NFSU2_TR(0x51638f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516381u);}goto L516381;}}
}
B516391:L516391:{c.instructions+=4;NFSU2_TR(0x516391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516392:{NFSU2_TR(0x516392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516393:{NFSU2_TR(0x516393);
w1(R+0,u8(0x1ull));
}
B516395:{NFSU2_TR(0x516395);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5163a0:L5163a0:{c.instructions+=3;NFSU2_TR(0x5163a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5163a4:{NFSU2_TR(0x5163a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5163a5:{NFSU2_TR(0x5163a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5163aaull));
TAIL_STATIC(0x5035c0u,503);
}
B5163aa:L5163aa:{c.instructions+=3;NFSU2_TR(0x5163aa);
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
B5163ac:{NFSU2_TR(0x5163ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5163af:{NFSU2_TR(0x5163af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5163c0:L5163c0:{c.instructions+=10;NFSU2_TR(0x5163c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5163c1:{NFSU2_TR(0x5163c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5163c2:{NFSU2_TR(0x5163c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5163c3:{NFSU2_TR(0x5163c3);
__builtin_memmove((R+24),(R+4),4);
}
B5163c5:{NFSU2_TR(0x5163c5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5163c7:{NFSU2_TR(0x5163c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5163c8:{NFSU2_TR(0x5163c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9bd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5163ce:{NFSU2_TR(0x5163ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5163d4:{NFSU2_TR(0x5163d4);
w4(R+4,u32(0xcull));
}
B5163d9:{NFSU2_TR(0x5163d9);
__builtin_memmove((R+16),(R+16),4);
}
B5163e0:L5163e0:{c.instructions+=8;NFSU2_TR(0x5163e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5163e3:{NFSU2_TR(0x5163e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5163e5:{NFSU2_TR(0x5163e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5163e8:{NFSU2_TR(0x5163e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5163eb:{NFSU2_TR(0x5163eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5163f2:{NFSU2_TR(0x5163f2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B5163f5:{NFSU2_TR(0x5163f5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5163f6:{NFSU2_TR(0x5163f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5163e0u);}goto L5163e0;}}
}
B5163f8:L5163f8:{c.instructions+=2;NFSU2_TR(0x5163f8);
w4(R+28,u32(0x7f7c6cull));
}
B5163fd:{NFSU2_TR(0x5163fd);
__builtin_memmove((R+4),(R+4),4);
}
B516400:L516400:{c.instructions+=3;NFSU2_TR(0x516400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B516402:{NFSU2_TR(0x516402);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516403:{NFSU2_TR(0x516403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516408ull));
TAIL_STATIC(0x50b990u,50b);
}
B516408:L516408:{c.instructions+=5;NFSU2_TR(0x516408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51640a:{NFSU2_TR(0x51640a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51640b:{NFSU2_TR(0x51640b);
u8 U[4];
w4(U+0,u32(0x79afd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516410:{NFSU2_TR(0x516410);
__builtin_memmove((R+20),(R+0),4);
}
B516412:{NFSU2_TR(0x516412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516417ull));
TAIL_STATIC(0x50b990u,50b);
}
B516417:L516417:{c.instructions+=21;NFSU2_TR(0x516417);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9bd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51641d:{NFSU2_TR(0x51641d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B516420:{NFSU2_TR(0x516420);
u8 U[12];
w4(U+0,u32(u32(u32(0x9a84ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B516427:{NFSU2_TR(0x516427);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51642a:{NFSU2_TR(0x51642a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51642d:{NFSU2_TR(0x51642d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516430:{NFSU2_TR(0x516430);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516433:{NFSU2_TR(0x516433);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51643a:{NFSU2_TR(0x51643a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9bd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516440:{NFSU2_TR(0x516440);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B516443:{NFSU2_TR(0x516443);
u8 U[16];
w4(U+0,u32(u32(u32(0x9a9cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B51644a:{NFSU2_TR(0x51644a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9bd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516450:{NFSU2_TR(0x516450);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B516453:{NFSU2_TR(0x516453);
u8 U[16];
w4(U+0,u32(u32(u32(0x9a94ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B51645e:{NFSU2_TR(0x51645e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9bd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516464:{NFSU2_TR(0x516464);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B516467:{NFSU2_TR(0x516467);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B516468:{NFSU2_TR(0x516468);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B51646b:{NFSU2_TR(0x51646b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x7f7c8cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7f7c8cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7f7c8cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B516471:{NFSU2_TR(0x516471);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9bd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516477:{NFSU2_TR(0x516477);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516400u);}goto L516400;}}
}
B516479:L516479:{c.instructions+=5;NFSU2_TR(0x516479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51647a:{NFSU2_TR(0x51647a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51647b:{NFSU2_TR(0x51647b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51647c:{NFSU2_TR(0x51647c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51647d:{NFSU2_TR(0x51647d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516480:L516480:{c.instructions+=10;NFSU2_TR(0x516480);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516481:{NFSU2_TR(0x516481);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516482:{NFSU2_TR(0x516482);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516483:{NFSU2_TR(0x516483);
__builtin_memmove((R+20),(R+4),4);
}
B516485:{NFSU2_TR(0x516485);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B516487:{NFSU2_TR(0x516487);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516488:{NFSU2_TR(0x516488);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x812cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51648e:{NFSU2_TR(0x51648e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B516490:{NFSU2_TR(0x516490);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x595cull))));
__builtin_memmove((R+24),(U+0),4);
}
B516496:{NFSU2_TR(0x516496);
{goto L5164a0;}
}
B5164a0:L5164a0:{c.instructions+=2;NFSU2_TR(0x5164a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5164a6:{NFSU2_TR(0x5164a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5164abull));
TAIL_STATIC(0x503e70u,503);
}
B5164ab:L5164ab:{c.instructions+=3;NFSU2_TR(0x5164ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5164ac:{NFSU2_TR(0x5164ac);
u8 U[4];
w4(U+0,u32(0x797e74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5164b1:{NFSU2_TR(0x5164b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5164b6ull));
TAIL_STATIC(0x50b990u,50b);
}
B5164b6:L5164b6:{c.instructions+=16;NFSU2_TR(0x5164b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5164b8:{NFSU2_TR(0x5164b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5164bb:{NFSU2_TR(0x5164bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5164be:{NFSU2_TR(0x5164be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5164c1:{NFSU2_TR(0x5164c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5164c8:{NFSU2_TR(0x5164c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5164cf:{NFSU2_TR(0x5164cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ecull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5164d6:{NFSU2_TR(0x5164d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7edull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5164dc:{NFSU2_TR(0x5164dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x812cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5164e2:{NFSU2_TR(0x5164e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5164e5:{NFSU2_TR(0x5164e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5164e6:{NFSU2_TR(0x5164e6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5164e7:{NFSU2_TR(0x5164e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7f8ull))));
}
B5164ed:{NFSU2_TR(0x5164ed);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5164f0:{NFSU2_TR(0x5164f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x812cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5164f6:{NFSU2_TR(0x5164f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5164a0u);}goto L5164a0;}}
}
B5164f8:L5164f8:{c.instructions+=5;NFSU2_TR(0x5164f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5164f9:{NFSU2_TR(0x5164f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5164fa:{NFSU2_TR(0x5164fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5164fb:{NFSU2_TR(0x5164fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5164fc:{NFSU2_TR(0x5164fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516500:L516500:{c.instructions+=10;NFSU2_TR(0x516500);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516501:{NFSU2_TR(0x516501);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516502:{NFSU2_TR(0x516502);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516503:{NFSU2_TR(0x516503);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516504:{NFSU2_TR(0x516504);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516505:{NFSU2_TR(0x516505);
__builtin_memmove((R+28),(R+4),4);
}
B516507:{NFSU2_TR(0x516507);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B516509:{NFSU2_TR(0x516509);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x540ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51650f:{NFSU2_TR(0x51650f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B516512:{NFSU2_TR(0x516512);
w4(R+4,u32(0x30ull));
}
B516517:L516517:{c.instructions+=8;NFSU2_TR(0x516517);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51651a:{NFSU2_TR(0x51651a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51651c:{NFSU2_TR(0x51651c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51651f:{NFSU2_TR(0x51651f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516522:{NFSU2_TR(0x516522);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B516529:{NFSU2_TR(0x516529);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B51652c:{NFSU2_TR(0x51652c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B51652d:{NFSU2_TR(0x51652d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516517u);}goto L516517;}}
}
B51652f:L51652f:{c.instructions+=3;NFSU2_TR(0x51652f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B516531:{NFSU2_TR(0x516531);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B516533:{NFSU2_TR(0x516533);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516537:L516537:{c.instructions+=4;NFSU2_TR(0x516537);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B51653c:{NFSU2_TR(0x51653c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B51653e:{NFSU2_TR(0x51653e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B516540:{NFSU2_TR(0x516540);
if(r1(R+518)){{goto L5165b3;}}
}
B516542:L516542:{c.instructions+=2;NFSU2_TR(0x516542);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B516545:{NFSU2_TR(0x516545);
if(r1(R+518)){{goto L5165b3;}}
}
B516547:L516547:{c.instructions+=5;NFSU2_TR(0x516547);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B516549:{NFSU2_TR(0x516549);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51654f:{NFSU2_TR(0x51654f);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B516551:{NFSU2_TR(0x516551);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B516554:{NFSU2_TR(0x516554);
if(r1(R+518)){{goto L5165b3;}}
}
B516556:L516556:{c.instructions+=3;NFSU2_TR(0x516556);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51655c:{NFSU2_TR(0x51655c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x30ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51655f:{NFSU2_TR(0x51655f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5165b3;}}
}
B516561:L516561:{c.instructions+=3;NFSU2_TR(0x516561);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516567:{NFSU2_TR(0x516567);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B516569:{NFSU2_TR(0x516569);
if(r1(R+518)){{goto L516578;}}
}
B51656b:L51656b:{c.instructions+=2;NFSU2_TR(0x51656b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51656e:{NFSU2_TR(0x51656e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5165b3;}}
}
B516570:L516570:{c.instructions+=2;NFSU2_TR(0x516570);
u8 U[2];
__builtin_memmove((U+0),gp(0x838470),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B516576:{NFSU2_TR(0x516576);
if(r1(R+518)){{goto L5165b3;}}
}
B516578:L516578:{c.instructions+=5;NFSU2_TR(0x516578);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B51657b:{NFSU2_TR(0x51657b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51657c:{NFSU2_TR(0x51657c);
u8 U[4];
w4(U+0,u32(0x79b120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516581:{NFSU2_TR(0x516581);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B516583:{NFSU2_TR(0x516583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516588ull));
TAIL_STATIC(0x50b990u,50b);
}
B516588:L516588:{c.instructions+=12;NFSU2_TR(0x516588);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51658c:{NFSU2_TR(0x51658c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51658f:{NFSU2_TR(0x51658f);
w4(R+0,u32(0x1ull));
}
B516594:{NFSU2_TR(0x516594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516597:{NFSU2_TR(0x516597);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51659a:{NFSU2_TR(0x51659a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51659d:{NFSU2_TR(0x51659d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5165a0:{NFSU2_TR(0x5165a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5165a3:{NFSU2_TR(0x5165a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5165a9:{NFSU2_TR(0x5165a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5165ac:{NFSU2_TR(0x5165ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5165ad:{NFSU2_TR(0x5165ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x540ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5165b3:L5165b3:{c.instructions+=5;NFSU2_TR(0x5165b3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x890ull))));
}
B5165b9:{NFSU2_TR(0x5165b9);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5165ba:{NFSU2_TR(0x5165ba);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x189e0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x189e0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x189e0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5165c0:{NFSU2_TR(0x5165c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5165c4:{NFSU2_TR(0x5165c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516537u);}goto L516537;}}
}
B5165ca:L5165ca:{c.instructions+=6;NFSU2_TR(0x5165ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5165cb:{NFSU2_TR(0x5165cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5165cc:{NFSU2_TR(0x5165cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5165cd:{NFSU2_TR(0x5165cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5165ce:{NFSU2_TR(0x5165ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5165cf:{NFSU2_TR(0x5165cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5165e0:L5165e0:{c.instructions+=2;NFSU2_TR(0x5165e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5165e2:{NFSU2_TR(0x5165e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5165e8:L5165e8:{c.instructions+=2;NFSU2_TR(0x5165e8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5165eb:{NFSU2_TR(0x5165eb);
if(r1(R+518)){{goto L5165fc;}}
}
B5165ed:L5165ed:{c.instructions+=4;NFSU2_TR(0x5165ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5165ee:{NFSU2_TR(0x5165ee);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x434ull))));
}
B5165f4:{NFSU2_TR(0x5165f4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5165f7:{NFSU2_TR(0x5165f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5165e8u);}goto L5165e8;}}
}
B5165f9:L5165f9:{c.instructions+=2;NFSU2_TR(0x5165f9);
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
B5165fb:{NFSU2_TR(0x5165fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5165fc:L5165fc:{c.instructions+=4;NFSU2_TR(0x5165fc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x434ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B516602:{NFSU2_TR(0x516602);
u8 U[12];
w4(U+0,u32(u32(u32(0x544ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B516609:{NFSU2_TR(0x516609);
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
B51660b:{NFSU2_TR(0x51660b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L516610;}}
}
B51660d:L51660d:{c.instructions+=2;NFSU2_TR(0x51660d);
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
B51660f:{NFSU2_TR(0x51660f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516610:L516610:{c.instructions+=2;NFSU2_TR(0x516610);
w1(R+0,u8(0x1ull));
}
B516612:{NFSU2_TR(0x516612);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516620:L516620:{c.instructions+=10;NFSU2_TR(0x516620);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516624:{NFSU2_TR(0x516624);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516625:{NFSU2_TR(0x516625);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B516629:{NFSU2_TR(0x516629);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51662a:{NFSU2_TR(0x51662a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51662b:{NFSU2_TR(0x51662b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51662c:{NFSU2_TR(0x51662c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51662d:{NFSU2_TR(0x51662d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51662e:{NFSU2_TR(0x51662e);
__builtin_memmove((R+20),(R+4),4);
}
B516630:{NFSU2_TR(0x516630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516635ull));
TAIL_STATIC(0x503820u,503);
}
B516635:L516635:{c.instructions+=3;NFSU2_TR(0x516635);
__builtin_memmove((R+28),(R+0),4);
}
B516637:{NFSU2_TR(0x516637);
w4(R+4,u32(0x106ull));
}
B51663c:{NFSU2_TR(0x51663c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51663f:L51663f:{c.instructions+=1;NFSU2_TR(0x51663f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L516641;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51663fu);}goto L51663f;}
}
B516641:L516641:{c.instructions+=25;NFSU2_TR(0x516641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfffffbe8ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B516647:{NFSU2_TR(0x516647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51664d:{NFSU2_TR(0x51664d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x418ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516653:{NFSU2_TR(0x516653);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B516655:{NFSU2_TR(0x516655);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x418ull))));
}
B51665a:{NFSU2_TR(0x51665a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x430ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516660:{NFSU2_TR(0x516660);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B516663:{NFSU2_TR(0x516663);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B516665:{NFSU2_TR(0x516665);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B51666b:{NFSU2_TR(0x51666b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51666e:{NFSU2_TR(0x51666e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516671:{NFSU2_TR(0x516671);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7f4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516677:{NFSU2_TR(0x516677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B516679:{NFSU2_TR(0x516679);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7f5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B51667f:{NFSU2_TR(0x51667f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B516680:{NFSU2_TR(0x516680);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7f5ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516686:{NFSU2_TR(0x516686);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B516688:{NFSU2_TR(0x516688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B51668a:{NFSU2_TR(0x51668a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B51668b:{NFSU2_TR(0x51668b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51668c:{NFSU2_TR(0x51668c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51668d:{NFSU2_TR(0x51668d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51668e:{NFSU2_TR(0x51668e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516694:{NFSU2_TR(0x516694);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B516696:{NFSU2_TR(0x516696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51669bull));
TAIL_STATIC(0x503f00u,503);
}
B51669b:L51669b:{c.instructions+=5;NFSU2_TR(0x51669b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51669c:{NFSU2_TR(0x51669c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51669d:{NFSU2_TR(0x51669d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51669e:{NFSU2_TR(0x51669e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51669f:{NFSU2_TR(0x51669f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5166b0:L5166b0:{c.instructions+=11;NFSU2_TR(0x5166b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5166b4:{NFSU2_TR(0x5166b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5166b5:{NFSU2_TR(0x5166b5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5166b6:{NFSU2_TR(0x5166b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5166b7:{NFSU2_TR(0x5166b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5166bb:{NFSU2_TR(0x5166bb);
__builtin_memmove((R+20),(R+4),4);
}
B5166bd:{NFSU2_TR(0x5166bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5166be:{NFSU2_TR(0x5166be);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5166c1:{NFSU2_TR(0x5166c1);
w4(R+8,u32(0x30ull));
}
B5166c6:{NFSU2_TR(0x5166c6);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x480ull))));
}
B5166cc:{NFSU2_TR(0x5166cc);
__builtin_memmove((R+16),(R+16),4);
}
B5166d0:L5166d0:{c.instructions+=26;NFSU2_TR(0x5166d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5166d3:{NFSU2_TR(0x5166d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5166d5:{NFSU2_TR(0x5166d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5166d7:{NFSU2_TR(0x5166d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5166d9:{NFSU2_TR(0x5166d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5166dc:{NFSU2_TR(0x5166dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5166df:{NFSU2_TR(0x5166df);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5166e2:{NFSU2_TR(0x5166e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5166e5:{NFSU2_TR(0x5166e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5166e7:{NFSU2_TR(0x5166e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5166e9:{NFSU2_TR(0x5166e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5166ec:{NFSU2_TR(0x5166ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5166ef:{NFSU2_TR(0x5166ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5166f1:{NFSU2_TR(0x5166f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5166f3:{NFSU2_TR(0x5166f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5166f6:{NFSU2_TR(0x5166f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5166f8:{NFSU2_TR(0x5166f8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5166fb:{NFSU2_TR(0x5166fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5166fd:{NFSU2_TR(0x5166fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516700:{NFSU2_TR(0x516700);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B516702:{NFSU2_TR(0x516702);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516705:{NFSU2_TR(0x516705);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B516707:{NFSU2_TR(0x516707);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51670a:{NFSU2_TR(0x51670a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B51670d:{NFSU2_TR(0x51670d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B51670e:{NFSU2_TR(0x51670e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5166d0u);}goto L5166d0;}}
}
B516710:L516710:{c.instructions+=10;NFSU2_TR(0x516710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516716:{NFSU2_TR(0x516716);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x540ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51671c:{NFSU2_TR(0x51671c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51671e:{NFSU2_TR(0x51671e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B516721:{NFSU2_TR(0x516721);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516724:{NFSU2_TR(0x516724);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x53c0ull))));
}
B51672a:{NFSU2_TR(0x51672a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54cull))));
__builtin_memmove((R+8),(U+0),4);
}
B516730:{NFSU2_TR(0x516730);
w4(R+12,u32(0x14ull));
}
B516735:{NFSU2_TR(0x516735);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516739:{NFSU2_TR(0x516739);
__builtin_memmove((R+16),(R+16),4);
}
B516740:L516740:{c.instructions+=22;NFSU2_TR(0x516740);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B516743:{NFSU2_TR(0x516743);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B516745:{NFSU2_TR(0x516745);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B516747:{NFSU2_TR(0x516747);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B516749:{NFSU2_TR(0x516749);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51674c:{NFSU2_TR(0x51674c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51674f:{NFSU2_TR(0x51674f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516752:{NFSU2_TR(0x516752);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516755:{NFSU2_TR(0x516755);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B516757:{NFSU2_TR(0x516757);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B516759:{NFSU2_TR(0x516759);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51675c:{NFSU2_TR(0x51675c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51675f:{NFSU2_TR(0x51675f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B516761:{NFSU2_TR(0x516761);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B516763:{NFSU2_TR(0x516763);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516766:{NFSU2_TR(0x516766);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B516769:{NFSU2_TR(0x516769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51676b:{NFSU2_TR(0x51676b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51676d:{NFSU2_TR(0x51676d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516770:{NFSU2_TR(0x516770);
__builtin_memmove((R+28),(R+0),4);
}
B516772:{NFSU2_TR(0x516772);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516775:{NFSU2_TR(0x516775);
w4(R+4,u32(0x106ull));
}
B51677a:L51677a:{c.instructions+=1;NFSU2_TR(0x51677a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L51677c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51677au);}goto L51677a;}
}
B51677c:L51677c:{c.instructions+=8;NFSU2_TR(0x51677c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x428ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516782:{NFSU2_TR(0x516782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B516784:{NFSU2_TR(0x516784);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x418ull))));
}
B516789:{NFSU2_TR(0x516789);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51678b:{NFSU2_TR(0x51678b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51678e:{NFSU2_TR(0x51678e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x434ull))));
}
B516794:{NFSU2_TR(0x516794);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B516795:{NFSU2_TR(0x516795);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516740u);}goto L516740;}}
}
B516797:L516797:{c.instructions+=2;NFSU2_TR(0x516797);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5954ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51679d:{NFSU2_TR(0x51679d);
w4(R+28,u32(0x5ull));
}
B5167a2:L5167a2:{c.instructions+=5;NFSU2_TR(0x5167a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5167a6:{NFSU2_TR(0x5167a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5167a7:{NFSU2_TR(0x5167a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5167a8:{NFSU2_TR(0x5167a8);
__builtin_memmove((R+4),(R+24),4);
}
B5167aa:{NFSU2_TR(0x5167aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5167afull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516620u);}goto L516620;}
}
B5167af:L5167af:{c.instructions+=3;NFSU2_TR(0x5167af);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7f8ull))));
}
B5167b5:{NFSU2_TR(0x5167b5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5167b6:{NFSU2_TR(0x5167b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5167a2u);}goto L5167a2;}}
}
B5167b8:L5167b8:{c.instructions+=6;NFSU2_TR(0x5167b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x812cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5167be:{NFSU2_TR(0x5167be);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x812cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5167c4:{NFSU2_TR(0x5167c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5167c6:{NFSU2_TR(0x5167c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5167c9:{NFSU2_TR(0x5167c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8138ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5167cf:{NFSU2_TR(0x5167cf);
w4(R+12,u32(0x6ull));
}
B5167d4:L5167d4:{c.instructions+=22;NFSU2_TR(0x5167d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5167d7:{NFSU2_TR(0x5167d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5167da:{NFSU2_TR(0x5167da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5167dc:{NFSU2_TR(0x5167dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5167df:{NFSU2_TR(0x5167df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5167e1:{NFSU2_TR(0x5167e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5167e3:{NFSU2_TR(0x5167e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5167e6:{NFSU2_TR(0x5167e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5167e9:{NFSU2_TR(0x5167e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5167eb:{NFSU2_TR(0x5167eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5167ed:{NFSU2_TR(0x5167ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5167f0:{NFSU2_TR(0x5167f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5167f3:{NFSU2_TR(0x5167f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5167f5:{NFSU2_TR(0x5167f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5167f7:{NFSU2_TR(0x5167f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5167fa:{NFSU2_TR(0x5167fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5167fd:{NFSU2_TR(0x5167fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5167ff:{NFSU2_TR(0x5167ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B516801:{NFSU2_TR(0x516801);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516804:{NFSU2_TR(0x516804);
__builtin_memmove((R+28),(R+0),4);
}
B516806:{NFSU2_TR(0x516806);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516809:{NFSU2_TR(0x516809);
w4(R+4,u32(0x106ull));
}
B51680e:L51680e:{c.instructions+=1;NFSU2_TR(0x51680e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L516810;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51680eu);}goto L51680e;}
}
B516810:L516810:{c.instructions+=12;NFSU2_TR(0x516810);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x428ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516816:{NFSU2_TR(0x516816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B516818:{NFSU2_TR(0x516818);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x418ull))));
}
B51681d:{NFSU2_TR(0x51681d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51681f:{NFSU2_TR(0x51681f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x42cull))));
__builtin_memmove((R+4),(U+0),4);
}
B516825:{NFSU2_TR(0x516825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B516827:{NFSU2_TR(0x516827);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51682a:{NFSU2_TR(0x51682a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51682c:{NFSU2_TR(0x51682c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51682f:{NFSU2_TR(0x51682f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x438ull))));
}
B516835:{NFSU2_TR(0x516835);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B516836:{NFSU2_TR(0x516836);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5167d4u);}goto L5167d4;}}
}
B516838:L516838:{c.instructions+=9;NFSU2_TR(0x516838);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9a80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51683e:{NFSU2_TR(0x51683e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51683f:{NFSU2_TR(0x51683f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x9a80ull))));
}
B516845:{NFSU2_TR(0x516845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516846:{NFSU2_TR(0x516846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B516847:{NFSU2_TR(0x516847);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B516849:{NFSU2_TR(0x516849);
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
B51684c:{NFSU2_TR(0x51684c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51684d:{NFSU2_TR(0x51684d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516850:L516850:{c.instructions+=9;NFSU2_TR(0x516850);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516854:{NFSU2_TR(0x516854);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516855:{NFSU2_TR(0x516855);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516856:{NFSU2_TR(0x516856);
__builtin_memmove((R+12),(R+4),4);
}
B516858:{NFSU2_TR(0x516858);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516859:{NFSU2_TR(0x516859);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51685a:{NFSU2_TR(0x51685a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51685e:{NFSU2_TR(0x51685e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516861:{NFSU2_TR(0x516861);
w4(R+8,u32(0x30ull));
}
B516866:L516866:{c.instructions+=26;NFSU2_TR(0x516866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B516868:{NFSU2_TR(0x516868);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51686b:{NFSU2_TR(0x51686b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51686e:{NFSU2_TR(0x51686e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B516871:{NFSU2_TR(0x516871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B516873:{NFSU2_TR(0x516873);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B516875:{NFSU2_TR(0x516875);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B516878:{NFSU2_TR(0x516878);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51687b:{NFSU2_TR(0x51687b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51687e:{NFSU2_TR(0x51687e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B516881:{NFSU2_TR(0x516881);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516884:{NFSU2_TR(0x516884);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516887:{NFSU2_TR(0x516887);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51688a:{NFSU2_TR(0x51688a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51688d:{NFSU2_TR(0x51688d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516890:{NFSU2_TR(0x516890);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516893:{NFSU2_TR(0x516893);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B516896:{NFSU2_TR(0x516896);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516899:{NFSU2_TR(0x516899);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B51689b:{NFSU2_TR(0x51689b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B51689d:{NFSU2_TR(0x51689d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5168a0:{NFSU2_TR(0x5168a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5168a3:{NFSU2_TR(0x5168a3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B5168a6:{NFSU2_TR(0x5168a6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5168a7:{NFSU2_TR(0x5168a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5168a9:{NFSU2_TR(0x5168a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516866u);}goto L516866;}}
}
B5168ab:L5168ab:{c.instructions+=6;NFSU2_TR(0x5168ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5168ad:{NFSU2_TR(0x5168ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x540ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5168b3:{NFSU2_TR(0x5168b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5168b5:{NFSU2_TR(0x5168b5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5168b8:{NFSU2_TR(0x5168b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5168be:{NFSU2_TR(0x5168be);
w4(R+20,u32(0x14ull));
}
B5168c3:L5168c3:{c.instructions+=23;NFSU2_TR(0x5168c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5168c5:{NFSU2_TR(0x5168c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5168c8:{NFSU2_TR(0x5168c8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5168cb:{NFSU2_TR(0x5168cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5168ce:{NFSU2_TR(0x5168ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5168d0:{NFSU2_TR(0x5168d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5168d2:{NFSU2_TR(0x5168d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5168d5:{NFSU2_TR(0x5168d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5168d8:{NFSU2_TR(0x5168d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5168db:{NFSU2_TR(0x5168db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5168de:{NFSU2_TR(0x5168de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5168e1:{NFSU2_TR(0x5168e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5168e4:{NFSU2_TR(0x5168e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5168e7:{NFSU2_TR(0x5168e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5168ea:{NFSU2_TR(0x5168ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5168ed:{NFSU2_TR(0x5168ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5168f0:{NFSU2_TR(0x5168f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5168f3:{NFSU2_TR(0x5168f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5168f6:{NFSU2_TR(0x5168f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5168f9:{NFSU2_TR(0x5168f9);
__builtin_memmove((R+24),(R+0),4);
}
B5168fb:{NFSU2_TR(0x5168fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5168fe:{NFSU2_TR(0x5168fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x418ull))));
}
B516903:{NFSU2_TR(0x516903);
w4(R+4,u32(0x106ull));
}
B516908:L516908:{c.instructions+=1;NFSU2_TR(0x516908);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L51690a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516908u);}goto L516908;}
}
B51690a:L51690a:{c.instructions+=7;NFSU2_TR(0x51690a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B51690c:{NFSU2_TR(0x51690c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x428ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516912:{NFSU2_TR(0x516912);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516915:{NFSU2_TR(0x516915);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x434ull))));
}
B51691b:{NFSU2_TR(0x51691b);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B51691c:{NFSU2_TR(0x51691c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B51691e:{NFSU2_TR(0x51691e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5168c3u);}goto L5168c3;}}
}
B516920:L516920:{c.instructions+=3;NFSU2_TR(0x516920);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x595cull))));
}
B516926:{NFSU2_TR(0x516926);
w4(R+20,u32(0x5ull));
}
B51692b:{NFSU2_TR(0x51692b);
{goto L516930;}
}
B516930:L516930:{c.instructions+=23;NFSU2_TR(0x516930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B516932:{NFSU2_TR(0x516932);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516935:{NFSU2_TR(0x516935);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516938:{NFSU2_TR(0x516938);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51693b:{NFSU2_TR(0x51693b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B51693e:{NFSU2_TR(0x51693e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516941:{NFSU2_TR(0x516941);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B516943:{NFSU2_TR(0x516943);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B516945:{NFSU2_TR(0x516945);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516948:{NFSU2_TR(0x516948);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51694b:{NFSU2_TR(0x51694b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51694e:{NFSU2_TR(0x51694e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516951:{NFSU2_TR(0x516951);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516954:{NFSU2_TR(0x516954);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516957:{NFSU2_TR(0x516957);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51695a:{NFSU2_TR(0x51695a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51695d:{NFSU2_TR(0x51695d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516960:{NFSU2_TR(0x516960);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516963:{NFSU2_TR(0x516963);
__builtin_memmove((R+24),(R+0),4);
}
B516965:{NFSU2_TR(0x516965);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B516968:{NFSU2_TR(0x516968);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x418ull))));
}
B51696d:{NFSU2_TR(0x51696d);
w4(R+4,u32(0x106ull));
}
B516972:{NFSU2_TR(0x516972);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516975:L516975:{c.instructions+=1;NFSU2_TR(0x516975);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L516977;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516975u);}goto L516975;}
}
B516977:L516977:{c.instructions+=17;NFSU2_TR(0x516977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B516979:{NFSU2_TR(0x516979);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x428ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51697f:{NFSU2_TR(0x51697f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B516982:{NFSU2_TR(0x516982);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516985:{NFSU2_TR(0x516985);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x428ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51698b:{NFSU2_TR(0x51698b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7ecull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B516991:{NFSU2_TR(0x516991);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B516994:{NFSU2_TR(0x516994);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7ecull))));
__builtin_memmove((R+4),(U+0),4);
}
B51699a:{NFSU2_TR(0x51699a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51699b:{NFSU2_TR(0x51699b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7edull))));
__builtin_memmove((R+4),(U+0),4);
}
B5169a1:{NFSU2_TR(0x5169a1);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B5169a3:{NFSU2_TR(0x5169a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5169a7:{NFSU2_TR(0x5169a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5169a8:{NFSU2_TR(0x5169a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5169a9:{NFSU2_TR(0x5169a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5169aa:{NFSU2_TR(0x5169aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x42cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5169b0:{NFSU2_TR(0x5169b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5169b5ull));
TAIL_STATIC(0x504040u,504);
}
B5169b5:L5169b5:{c.instructions+=3;NFSU2_TR(0x5169b5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x7f8ull))));
}
B5169bb:{NFSU2_TR(0x5169bb);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5169bc:{NFSU2_TR(0x5169bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516930u);}goto L516930;}}
}
B5169c2:L5169c2:{c.instructions+=8;NFSU2_TR(0x5169c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5169c6:{NFSU2_TR(0x5169c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5169c8:{NFSU2_TR(0x5169c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x812cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5169ce:{NFSU2_TR(0x5169ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5169d0:{NFSU2_TR(0x5169d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5169d3:{NFSU2_TR(0x5169d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8138ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5169d9:{NFSU2_TR(0x5169d9);
w4(R+12,u32(0x6ull));
}
B5169de:{NFSU2_TR(0x5169de);
__builtin_memmove((R+28),(R+28),4);
}
B5169e0:L5169e0:{c.instructions+=23;NFSU2_TR(0x5169e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5169e2:{NFSU2_TR(0x5169e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5169e5:{NFSU2_TR(0x5169e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5169e8:{NFSU2_TR(0x5169e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5169eb:{NFSU2_TR(0x5169eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5169ee:{NFSU2_TR(0x5169ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5169f1:{NFSU2_TR(0x5169f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5169f3:{NFSU2_TR(0x5169f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5169f5:{NFSU2_TR(0x5169f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5169f8:{NFSU2_TR(0x5169f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5169fb:{NFSU2_TR(0x5169fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5169fe:{NFSU2_TR(0x5169fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516a01:{NFSU2_TR(0x516a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B516a04:{NFSU2_TR(0x516a04);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516a07:{NFSU2_TR(0x516a07);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516a0a:{NFSU2_TR(0x516a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516a0d:{NFSU2_TR(0x516a0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516a10:{NFSU2_TR(0x516a10);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516a13:{NFSU2_TR(0x516a13);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B516a16:{NFSU2_TR(0x516a16);
__builtin_memmove((R+24),(R+0),4);
}
B516a18:{NFSU2_TR(0x516a18);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x418ull))));
}
B516a1d:{NFSU2_TR(0x516a1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516a20:{NFSU2_TR(0x516a20);
w4(R+4,u32(0x106ull));
}
B516a25:L516a25:{c.instructions+=1;NFSU2_TR(0x516a25);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L516a27;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516a25u);}goto L516a25;}
}
B516a27:L516a27:{c.instructions+=11;NFSU2_TR(0x516a27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B516a29:{NFSU2_TR(0x516a29);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x428ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516a2f:{NFSU2_TR(0x516a2f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516a32:{NFSU2_TR(0x516a32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B516a34:{NFSU2_TR(0x516a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B516a36:{NFSU2_TR(0x516a36);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x42cull))));
__builtin_memmove((R+4),(U+0),4);
}
B516a3c:{NFSU2_TR(0x516a3c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B516a3f:{NFSU2_TR(0x516a3f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x438ull))));
}
B516a45:{NFSU2_TR(0x516a45);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B516a46:{NFSU2_TR(0x516a46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B516a48:{NFSU2_TR(0x516a48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5169e0u);}goto L5169e0;}}
}
B516a4a:L516a4a:{c.instructions+=9;NFSU2_TR(0x516a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B516a4c:{NFSU2_TR(0x516a4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516a4d:{NFSU2_TR(0x516a4d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x9a80ull))));
}
B516a53:{NFSU2_TR(0x516a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516a54:{NFSU2_TR(0x516a54);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B516a57:{NFSU2_TR(0x516a57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B516a58:{NFSU2_TR(0x516a58);
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
B516a5b:{NFSU2_TR(0x516a5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B516a5c:{NFSU2_TR(0x516a5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516a60:L516a60:{c.instructions+=8;NFSU2_TR(0x516a60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516a61:{NFSU2_TR(0x516a61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516a62:{NFSU2_TR(0x516a62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516a63:{NFSU2_TR(0x516a63);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B516a65:{NFSU2_TR(0x516a65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516a66:{NFSU2_TR(0x516a66);
__builtin_memmove((R+24),(R+4),4);
}
B516a68:{NFSU2_TR(0x516a68);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B516a6a:{NFSU2_TR(0x516a6a);
__builtin_memmove((R+12),(R+12),4);
}
B516a70:L516a70:{c.instructions+=5;NFSU2_TR(0x516a70);
u8 U[16];
w4(U+0,u32(u32(u32(0x2b4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B516a77:{NFSU2_TR(0x516a77);
u8 U[16];
w4(U+0,u32(u32(u32(0x2dcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B516a7e:{NFSU2_TR(0x516a7e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B516a7f:{NFSU2_TR(0x516a7f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B516a82:{NFSU2_TR(0x516a82);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516a70u);}goto L516a70;}}
}
B516a84:L516a84:{c.instructions+=3;NFSU2_TR(0x516a84);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x304ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516a8a:{NFSU2_TR(0x516a8a);
w4(R+4,u32(0x11ull));
}
B516a8f:{NFSU2_TR(0x516a8f);
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
B516a91:L516a91:{c.instructions+=1;NFSU2_TR(0x516a91);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L516a93;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516a91u);}goto L516a91;}
}
B516a93:L516a93:{c.instructions+=3;NFSU2_TR(0x516a93);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x348ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516a99:{NFSU2_TR(0x516a99);
w4(R+12,u32(0x5ull));
}
B516a9e:{NFSU2_TR(0x516a9e);
__builtin_memmove((R+28),(R+28),4);
}
B516aa0:L516aa0:{c.instructions+=2;NFSU2_TR(0x516aa0);
__builtin_memmove((R+4),(R+28),4);
}
B516aa2:{NFSU2_TR(0x516aa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516aa7ull));
TAIL_STATIC(0x5a7930u,5a7);
}
B516aa7:L516aa7:{c.instructions+=3;NFSU2_TR(0x516aa7);
w1(R+512,carry<u32>(r4(R+28),u32(0x29ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x29ull))));
}
B516aaa:{NFSU2_TR(0x516aaa);
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
B516aab:{NFSU2_TR(0x516aab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516aa0u);}goto L516aa0;}}
}
B516aad:L516aad:{c.instructions+=7;NFSU2_TR(0x516aad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516aae:{NFSU2_TR(0x516aae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B516ab0:{NFSU2_TR(0x516ab0);
__builtin_memmove((R+0),(R+24),4);
}
B516ab2:{NFSU2_TR(0x516ab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516ab3:{NFSU2_TR(0x516ab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B516ab4:{NFSU2_TR(0x516ab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B516ab5:{NFSU2_TR(0x516ab5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516ac0:L516ac0:{c.instructions+=10;NFSU2_TR(0x516ac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516ac4:{NFSU2_TR(0x516ac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B516ac7:{NFSU2_TR(0x516ac7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516ac8:{NFSU2_TR(0x516ac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B516acc:{NFSU2_TR(0x516acc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516acd:{NFSU2_TR(0x516acd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516ace:{NFSU2_TR(0x516ace);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516acf:{NFSU2_TR(0x516acf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516ad0:{NFSU2_TR(0x516ad0);
__builtin_memmove((R+24),(R+4),4);
}
B516ad2:{NFSU2_TR(0x516ad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516ad7ull));
TAIL_STATIC(0x503880u,503);
}
B516ad7:L516ad7:{c.instructions+=2;NFSU2_TR(0x516ad7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B516adb:{NFSU2_TR(0x516adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516ae0ull));
TAIL_STATIC(0x5a7930u,5a7);
}
B516ae0:L516ae0:{c.instructions+=5;NFSU2_TR(0x516ae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516ae4:{NFSU2_TR(0x516ae4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x29ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B516ae7:{NFSU2_TR(0x516ae7);
u8 U[12];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B516aee:{NFSU2_TR(0x516aee);
w4(R+4,u32(0xaull));
}
B516af3:{NFSU2_TR(0x516af3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B516af7:L516af7:{c.instructions+=1;NFSU2_TR(0x516af7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L516af9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516af7u);}goto L516af7;}
}
B516af9:L516af9:{c.instructions+=4;NFSU2_TR(0x516af9);
u8 U[34];
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
}
B516afa:{NFSU2_TR(0x516afa);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x398ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516b00:{NFSU2_TR(0x516b00);
w4(R+4,u32(0xaull));
}
B516b05:{NFSU2_TR(0x516b05);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B516b09:L516b09:{c.instructions+=1;NFSU2_TR(0x516b09);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L516b0b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516b09u);}goto L516b09;}
}
B516b0b:L516b0b:{c.instructions+=7;NFSU2_TR(0x516b0b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b0d:{NFSU2_TR(0x516b0d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b0f:{NFSU2_TR(0x516b0f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b11:{NFSU2_TR(0x516b11);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b13:{NFSU2_TR(0x516b13);
__builtin_memmove((R+4),(R+12),4);
}
B516b15:{NFSU2_TR(0x516b15);
u8 U[34];
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
}
B516b16:{NFSU2_TR(0x516b16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516b1bull));
TAIL_STATIC(0x639ce0u,639);
}
B516b1b:L516b1b:{c.instructions+=5;NFSU2_TR(0x516b1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516b1c:{NFSU2_TR(0x516b1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516b1d:{NFSU2_TR(0x516b1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B516b1e:{NFSU2_TR(0x516b1e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B516b21:{NFSU2_TR(0x516b21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516b30:L516b30:{c.instructions+=20;NFSU2_TR(0x516b30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b32:{NFSU2_TR(0x516b32);
u8 U[4];
w4(U+0,u32(0x777048ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b37:{NFSU2_TR(0x516b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516b3d:{NFSU2_TR(0x516b3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b3e:{NFSU2_TR(0x516b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516b45:{NFSU2_TR(0x516b45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b46:{NFSU2_TR(0x516b46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b47:{NFSU2_TR(0x516b47);
__builtin_memmove((R+24),(R+4),4);
}
B516b49:{NFSU2_TR(0x516b49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b4a:{NFSU2_TR(0x516b4a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B516b4c:{NFSU2_TR(0x516b4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516b50:{NFSU2_TR(0x516b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516b53:{NFSU2_TR(0x516b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516b56:{NFSU2_TR(0x516b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516b59:{NFSU2_TR(0x516b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516b5c:{NFSU2_TR(0x516b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516b5f:{NFSU2_TR(0x516b5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516b62:{NFSU2_TR(0x516b62);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516b66:{NFSU2_TR(0x516b66);
u8 U[4];
w4(U+0,u32(0x79b12cull));
s4(u32(r4(R+24)),r4(U+0));
}
B516b6c:{NFSU2_TR(0x516b6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516b71ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516a60u);}goto L516a60;}
}
B516b71:L516b71:{c.instructions+=8;NFSU2_TR(0x516b71);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516b75:{NFSU2_TR(0x516b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516b7b:{NFSU2_TR(0x516b7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516b7c:{NFSU2_TR(0x516b7c);
__builtin_memmove((R+0),(R+24),4);
}
B516b7e:{NFSU2_TR(0x516b7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516b7f:{NFSU2_TR(0x516b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516b86:{NFSU2_TR(0x516b86);
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
B516b89:{NFSU2_TR(0x516b89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516b90:L516b90:{c.instructions+=15;NFSU2_TR(0x516b90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b91:{NFSU2_TR(0x516b91);
__builtin_memmove((R+20),(R+16),4);
}
B516b93:{NFSU2_TR(0x516b93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B516b96:{NFSU2_TR(0x516b96);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b98:{NFSU2_TR(0x516b98);
u8 U[4];
w4(U+0,u32(0x777076ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516b9d:{NFSU2_TR(0x516b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516ba3:{NFSU2_TR(0x516ba3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516ba4:{NFSU2_TR(0x516ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516bab:{NFSU2_TR(0x516bab);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8fcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8fcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8fcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B516bb1:{NFSU2_TR(0x516bb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516bb2:{NFSU2_TR(0x516bb2);
__builtin_memmove((R+24),(R+4),4);
}
B516bb4:{NFSU2_TR(0x516bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516bb7:{NFSU2_TR(0x516bb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B516bb9:{NFSU2_TR(0x516bb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516bba:{NFSU2_TR(0x516bba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516bbdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B516bbd:L516bbd:{c.instructions+=9;NFSU2_TR(0x516bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516bc0:{NFSU2_TR(0x516bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516bc3:{NFSU2_TR(0x516bc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B516bc7:{NFSU2_TR(0x516bc7);
__builtin_memmove((R+28),(R+0),4);
}
B516bc9:{NFSU2_TR(0x516bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B516bd0:{NFSU2_TR(0x516bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B516bd7:{NFSU2_TR(0x516bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B516bde:{NFSU2_TR(0x516bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B516be5:{NFSU2_TR(0x516be5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516beaull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B516bea:L516bea:{c.instructions+=7;NFSU2_TR(0x516bea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516bec:{NFSU2_TR(0x516bec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516bee:{NFSU2_TR(0x516bee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516bf0:{NFSU2_TR(0x516bf0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516bf2:{NFSU2_TR(0x516bf2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B516bf6:{NFSU2_TR(0x516bf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B516c01:{NFSU2_TR(0x516c01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516c06ull));
TAIL_STATIC(0x610270u,610);
}
B516c06:L516c06:{c.instructions+=7;NFSU2_TR(0x516c06);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516c08:{NFSU2_TR(0x516c08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516c0a:{NFSU2_TR(0x516c0a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516c0c:{NFSU2_TR(0x516c0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516c0d:{NFSU2_TR(0x516c0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B516c11:{NFSU2_TR(0x516c11);
u8 U[8];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B516c1c:{NFSU2_TR(0x516c1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516c21ull));
TAIL_STATIC(0x610270u,610);
}
B516c21:L516c21:{c.instructions+=3;NFSU2_TR(0x516c21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516c23:{NFSU2_TR(0x516c23);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B516c27:{NFSU2_TR(0x516c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516c2cull));
TAIL_STATIC(0x61c280u,61c);
}
B516c2c:L516c2c:{c.instructions+=3;NFSU2_TR(0x516c2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516c2e:{NFSU2_TR(0x516c2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B516c32:{NFSU2_TR(0x516c32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516c37ull));
TAIL_STATIC(0x637040u,637);
}
B516c37:L516c37:{c.instructions+=4;NFSU2_TR(0x516c37);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516c3c:{NFSU2_TR(0x516c3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516c3e:{NFSU2_TR(0x516c3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B516c42:{NFSU2_TR(0x516c42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516c47ull));
TAIL_STATIC(0x5b6990u,5b6);
}
B516c47:L516c47:{c.instructions+=5;NFSU2_TR(0x516c47);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B516c4a:{NFSU2_TR(0x516c4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B516c4e:{NFSU2_TR(0x516c4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516c4f:{NFSU2_TR(0x516c4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516c52:{NFSU2_TR(0x516c52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516c57ull));
TAIL_STATIC(0x503950u,503);
}
B516c57:L516c57:{c.instructions+=2;NFSU2_TR(0x516c57);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x360ull))));
}
B516c5d:{NFSU2_TR(0x516c5d);
w4(R+28,u32(0x5ull));
}
B516c62:L516c62:{c.instructions+=3;NFSU2_TR(0x516c62);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516c64:{NFSU2_TR(0x516c64);
__builtin_memmove((R+4),(R+24),4);
}
B516c66:{NFSU2_TR(0x516c66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516c6bull));
TAIL_STATIC(0x59afe0u,59a);
}
B516c6b:L516c6b:{c.instructions+=3;NFSU2_TR(0x516c6b);
w1(R+512,carry<u32>(r4(R+24),u32(0x29ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x29ull))));
}
B516c6e:{NFSU2_TR(0x516c6e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B516c6f:{NFSU2_TR(0x516c6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516c62u);}goto L516c62;}}
}
B516c71:L516c71:{c.instructions+=3;NFSU2_TR(0x516c71);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B516c78:{NFSU2_TR(0x516c78);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B516c83:{NFSU2_TR(0x516c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516c88ull));
TAIL_STATIC(0x4022c0u,402);
}
B516c88:L516c88:{c.instructions+=7;NFSU2_TR(0x516c88);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516c8f:{NFSU2_TR(0x516c8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516c90:{NFSU2_TR(0x516c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516c97:{NFSU2_TR(0x516c97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516c98:{NFSU2_TR(0x516c98);
__builtin_memmove((R+16),(R+20),4);
}
B516c9a:{NFSU2_TR(0x516c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B516c9b:{NFSU2_TR(0x516c9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516ca0:L516ca0:{c.instructions+=4;NFSU2_TR(0x516ca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516ca1:{NFSU2_TR(0x516ca1);
__builtin_memmove((R+24),(R+4),4);
}
B516ca3:{NFSU2_TR(0x516ca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B516ca5:{NFSU2_TR(0x516ca5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516ca8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B516ca8:L516ca8:{c.instructions+=8;NFSU2_TR(0x516ca8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516cac:{NFSU2_TR(0x516cac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516cb0:{NFSU2_TR(0x516cb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516cb4:{NFSU2_TR(0x516cb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516cb5:{NFSU2_TR(0x516cb5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516cb6:{NFSU2_TR(0x516cb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516cb7:{NFSU2_TR(0x516cb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B516cba:{NFSU2_TR(0x516cba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516cbfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516ac0u);}goto L516ac0;}
}
B516cbf:L516cbf:{c.instructions+=2;NFSU2_TR(0x516cbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516cc0:{NFSU2_TR(0x516cc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516cd0:L516cd0:{c.instructions+=4;NFSU2_TR(0x516cd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516cd1:{NFSU2_TR(0x516cd1);
__builtin_memmove((R+24),(R+4),4);
}
B516cd3:{NFSU2_TR(0x516cd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516cd7:{NFSU2_TR(0x516cd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516cdcull));
TAIL_STATIC(0x5054d0u,505);
}
B516cdc:L516cdc:{c.instructions+=9;NFSU2_TR(0x516cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516ce2:{NFSU2_TR(0x516ce2);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B516ce6:{NFSU2_TR(0x516ce6);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B516cec:{NFSU2_TR(0x516cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516cf2:{NFSU2_TR(0x516cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B516cf5:{NFSU2_TR(0x516cf5);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B516cf8:{NFSU2_TR(0x516cf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B516cfb:{NFSU2_TR(0x516cfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516cfc:{NFSU2_TR(0x516cfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516d00:L516d00:{c.instructions+=14;NFSU2_TR(0x516d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516d06:{NFSU2_TR(0x516d06);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B516d0a:{NFSU2_TR(0x516d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516d10:{NFSU2_TR(0x516d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516d16:{NFSU2_TR(0x516d16);
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
B516d18:{NFSU2_TR(0x516d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B516d1b:{NFSU2_TR(0x516d1b);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
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
B516d1e:{NFSU2_TR(0x516d1e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B516d22:{NFSU2_TR(0x516d22);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516d26:{NFSU2_TR(0x516d26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B516d28:{NFSU2_TR(0x516d28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B516d2a:{NFSU2_TR(0x516d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516d2d:{NFSU2_TR(0x516d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516d30:{NFSU2_TR(0x516d30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516d40:L516d40:{c.instructions+=15;NFSU2_TR(0x516d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516d46:{NFSU2_TR(0x516d46);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B516d4a:{NFSU2_TR(0x516d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516d50:{NFSU2_TR(0x516d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516d56:{NFSU2_TR(0x516d56);
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
B516d58:{NFSU2_TR(0x516d58);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516d5c:{NFSU2_TR(0x516d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B516d5f:{NFSU2_TR(0x516d5f);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
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
B516d62:{NFSU2_TR(0x516d62);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B516d66:{NFSU2_TR(0x516d66);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516d6a:{NFSU2_TR(0x516d6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B516d6c:{NFSU2_TR(0x516d6c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516d70:{NFSU2_TR(0x516d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516d73:{NFSU2_TR(0x516d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516d76:{NFSU2_TR(0x516d76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516d80:L516d80:{c.instructions+=18;NFSU2_TR(0x516d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516d86:{NFSU2_TR(0x516d86);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B516d8a:{NFSU2_TR(0x516d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516d90:{NFSU2_TR(0x516d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516d96:{NFSU2_TR(0x516d96);
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
B516d98:{NFSU2_TR(0x516d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B516d9b:{NFSU2_TR(0x516d9b);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
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
B516d9e:{NFSU2_TR(0x516d9e);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B516da2:{NFSU2_TR(0x516da2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516da6:{NFSU2_TR(0x516da6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B516da8:{NFSU2_TR(0x516da8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B516daa:{NFSU2_TR(0x516daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516dad:{NFSU2_TR(0x516dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516db0:{NFSU2_TR(0x516db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516db3:{NFSU2_TR(0x516db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516db6:{NFSU2_TR(0x516db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516db9:{NFSU2_TR(0x516db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516dbc:{NFSU2_TR(0x516dbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516dc0:L516dc0:{c.instructions+=5;NFSU2_TR(0x516dc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516dc1:{NFSU2_TR(0x516dc1);
__builtin_memmove((R+24),(R+4),4);
}
B516dc3:{NFSU2_TR(0x516dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516dc6:{NFSU2_TR(0x516dc6);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B516dc8:{NFSU2_TR(0x516dc8);
if(r1(R+518)){{goto L516e0c;}}
}
B516dca:L516dca:{c.instructions+=7;NFSU2_TR(0x516dca);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B516dcd:{NFSU2_TR(0x516dcd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516dce:{NFSU2_TR(0x516dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516dd1:{NFSU2_TR(0x516dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516dd4:{NFSU2_TR(0x516dd4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B516dd6:{NFSU2_TR(0x516dd6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B516dd8:{NFSU2_TR(0x516dd8);
if(r1(R+518)){{goto L516dec;}}
}
B516dda:L516dda:{c.instructions+=3;NFSU2_TR(0x516dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516ddd:{NFSU2_TR(0x516ddd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516dde:{NFSU2_TR(0x516dde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516de3ull));
TAIL_STATIC(0x575630u,575);
}
B516de3:L516de3:{c.instructions+=3;NFSU2_TR(0x516de3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B516de6:{NFSU2_TR(0x516de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516de9:{NFSU2_TR(0x516de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516dec:L516dec:{c.instructions+=2;NFSU2_TR(0x516dec);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B516def:{NFSU2_TR(0x516def);
if(r1(R+518)){{goto L516e03;}}
}
B516df1:L516df1:{c.instructions+=3;NFSU2_TR(0x516df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B516df4:{NFSU2_TR(0x516df4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516df5:{NFSU2_TR(0x516df5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516dfaull));
TAIL_STATIC(0x575630u,575);
}
B516dfa:L516dfa:{c.instructions+=3;NFSU2_TR(0x516dfa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B516dfd:{NFSU2_TR(0x516dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516e00:{NFSU2_TR(0x516e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516e03:L516e03:{c.instructions+=4;NFSU2_TR(0x516e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516e04:{NFSU2_TR(0x516e04);
__builtin_memmove((R+4),(R+24),4);
}
B516e06:{NFSU2_TR(0x516e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516e07:{NFSU2_TR(0x516e07);
TAIL_STATIC(0x5042e0u,504);
}
B516e0c:L516e0c:{c.instructions+=2;NFSU2_TR(0x516e0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516e0d:{NFSU2_TR(0x516e0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516e10:L516e10:{c.instructions+=13;NFSU2_TR(0x516e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516e16:{NFSU2_TR(0x516e16);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B516e1a:{NFSU2_TR(0x516e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516e20:{NFSU2_TR(0x516e20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516e21:{NFSU2_TR(0x516e21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516e22:{NFSU2_TR(0x516e22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516e23:{NFSU2_TR(0x516e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B516e29:{NFSU2_TR(0x516e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B516e2c:{NFSU2_TR(0x516e2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B516e2f:{NFSU2_TR(0x516e2f);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B516e33:{NFSU2_TR(0x516e33);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B516e35:{NFSU2_TR(0x516e35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B516e37:{NFSU2_TR(0x516e37);
if(r1(R+518)){{goto L516e49;}}
}
B516e39:L516e39:{c.instructions+=2;NFSU2_TR(0x516e39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516e3a:{NFSU2_TR(0x516e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516e3full));
TAIL_STATIC(0x575630u,575);
}
B516e3f:L516e3f:{c.instructions+=2;NFSU2_TR(0x516e3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B516e42:{NFSU2_TR(0x516e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B516e49:L516e49:{c.instructions+=3;NFSU2_TR(0x516e49);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B516e4d:{NFSU2_TR(0x516e4d);
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
B516e4f:{NFSU2_TR(0x516e4f);
if(r1(R+518)){{goto L516e84;}}
}
B516e51:L516e51:{c.instructions+=3;NFSU2_TR(0x516e51);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B516e53:{NFSU2_TR(0x516e53);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+0))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B516e56:{NFSU2_TR(0x516e56);
if(r1(R+518)){{goto L516e60;}}
}
B516e58:L516e58:{c.instructions+=3;NFSU2_TR(0x516e58);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B516e59:{NFSU2_TR(0x516e59);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B516e5e:{NFSU2_TR(0x516e5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516e58u);}goto L516e58;}}
}
B516e60:L516e60:{c.instructions+=4;NFSU2_TR(0x516e60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516e61:{NFSU2_TR(0x516e61);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B516e65:{NFSU2_TR(0x516e65);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516e66:{NFSU2_TR(0x516e66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x516e6bull));
TAIL_STATIC(0x575620u,575);
}
B516e6b:L516e6b:{c.instructions+=5;NFSU2_TR(0x516e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516e6e:{NFSU2_TR(0x516e6e);
__builtin_memmove((R+4),(R+20),4);
}
B516e70:{NFSU2_TR(0x516e70);
__builtin_memmove((R+28),(R+0),4);
}
B516e72:{NFSU2_TR(0x516e72);
__builtin_memmove((R+0),(R+4),4);
}
B516e74:{NFSU2_TR(0x516e74);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B516e77:L516e77:{c.instructions+=1;NFSU2_TR(0x516e77);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L516e79;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516e77u);}goto L516e77;}
}
B516e79:L516e79:{c.instructions+=3;NFSU2_TR(0x516e79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B516e7c:{NFSU2_TR(0x516e7c);
__builtin_memmove((R+4),(R+0),4);
}
B516e7e:{NFSU2_TR(0x516e7e);
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
B516e81:L516e81:{c.instructions+=1;NFSU2_TR(0x516e81);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L516e83;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516e81u);}goto L516e81;}
}
B516e83:L516e83:{c.instructions+=1;NFSU2_TR(0x516e83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B516e84:L516e84:{c.instructions+=4;NFSU2_TR(0x516e84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B516e85:{NFSU2_TR(0x516e85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B516e86:{NFSU2_TR(0x516e86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B516e87:{NFSU2_TR(0x516e87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B516e90:L516e90:{c.instructions+=7;NFSU2_TR(0x516e90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516e91:{NFSU2_TR(0x516e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516e94:{NFSU2_TR(0x516e94);
__builtin_memmove((R+0),(R+8),4);
}
B516e96:{NFSU2_TR(0x516e96);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x60ull))));
}
B516e99:{NFSU2_TR(0x516e99);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x60ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x60ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x60ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B516e9b:{NFSU2_TR(0x516e9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B516e9f:{NFSU2_TR(0x516e9f);
if(r1(R+518)){TAIL_STATIC(0x51722bu,517);}
}
B516ea5:L516ea5:{c.instructions+=7;NFSU2_TR(0x516ea5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516ea6:{NFSU2_TR(0x516ea6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516ea7:{NFSU2_TR(0x516ea7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516ea8:{NFSU2_TR(0x516ea8);
__builtin_memmove((R+24),(R+8),4);
}
B516eaa:{NFSU2_TR(0x516eaa);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x20ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B516ead:{NFSU2_TR(0x516ead);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B516eae:{NFSU2_TR(0x516eae);
if(r1(R+518)){{goto L516eb4;}}
}
B516eb0:L516eb0:{c.instructions+=2;NFSU2_TR(0x516eb0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B516eb2:{NFSU2_TR(0x516eb2);
{goto L516eb8;}
}
B516eb4:L516eb4:{c.instructions+=1;NFSU2_TR(0x516eb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516eb8:L516eb8:{c.instructions+=2;NFSU2_TR(0x516eb8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B516ebb:{NFSU2_TR(0x516ebb);
if(r1(R+518)){{goto L516ec5;}}
}
B516ebd:L516ebd:{c.instructions+=3;NFSU2_TR(0x516ebd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B516ebf:{NFSU2_TR(0x516ebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516ec3:{NFSU2_TR(0x516ec3);
{goto L516ec9;}
}
B516ec5:L516ec5:{c.instructions+=1;NFSU2_TR(0x516ec5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B516ec9:L516ec9:{c.instructions+=2;NFSU2_TR(0x516ec9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B516ecb:{NFSU2_TR(0x516ecb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L516eda;}}
}
B516ecd:L516ecd:{c.instructions+=2;NFSU2_TR(0x516ecd);
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
B516ecf:{NFSU2_TR(0x516ecf);
if(r1(R+518)){TAIL_STATIC(0x517227u,517);}
}
B516ed5:L516ed5:{c.instructions+=1;NFSU2_TR(0x516ed5);
{goto L516f7c;}
}
B516eda:L516eda:{c.instructions+=2;NFSU2_TR(0x516eda);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B516edc:{NFSU2_TR(0x516edc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L516f74;}}
}
B516ee2:L516ee2:{c.instructions+=5;NFSU2_TR(0x516ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B516ee8:{NFSU2_TR(0x516ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B516eeb:{NFSU2_TR(0x516eeb);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B516eed:{NFSU2_TR(0x516eed);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B516ef0:{NFSU2_TR(0x516ef0);
if(r1(R+518)){TAIL_STATIC(0x5170b4u,517);}
}
B516ef6:L516ef6:{c.instructions+=2;NFSU2_TR(0x516ef6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B516ef8:{NFSU2_TR(0x516ef8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L516efd;}}
}
B516efa:L516efa:{c.instructions+=1;NFSU2_TR(0x516efa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B516efd:L516efd:{c.instructions+=2;NFSU2_TR(0x516efd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B516eff:{NFSU2_TR(0x516eff);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L516f03;}}
}
B516f01:L516f01:{c.instructions+=1;NFSU2_TR(0x516f01);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B516f03:L516f03:{c.instructions+=9;NFSU2_TR(0x516f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B516f06:{NFSU2_TR(0x516f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B516f09:{NFSU2_TR(0x516f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516f0f:{NFSU2_TR(0x516f0f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B516f13:{NFSU2_TR(0x516f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516f19:{NFSU2_TR(0x516f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516f1f:{NFSU2_TR(0x516f1f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B516f25:{NFSU2_TR(0x516f25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B516f27:{NFSU2_TR(0x516f27);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L516f3e;}}
}
B516f29:L516f29:{c.instructions+=4;NFSU2_TR(0x516f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B516f2c:{NFSU2_TR(0x516f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B516f30:{NFSU2_TR(0x516f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516f33:{NFSU2_TR(0x516f33);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B516f35:L516f35:{c.instructions+=4;NFSU2_TR(0x516f35);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B516f38:{NFSU2_TR(0x516f38);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xcull))));
}
B516f3b:{NFSU2_TR(0x516f3b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B516f3c:{NFSU2_TR(0x516f3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516f35u);}goto L516f35;}}
}
B516f3e:L516f3e:{c.instructions+=3;NFSU2_TR(0x516f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516f41:{NFSU2_TR(0x516f41);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B516f44:{NFSU2_TR(0x516f44);
if(r1(R+518)){TAIL_STATIC(0x517141u,517);}
}
B516f4a:L516f4a:{c.instructions+=4;NFSU2_TR(0x516f4a);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B516f4d:{NFSU2_TR(0x516f4d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B516f4f:{NFSU2_TR(0x516f4f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B516f52:{NFSU2_TR(0x516f52);
if(r1(R+514)){{goto L516f65;}}
}
B516f54:L516f54:{c.instructions+=4;NFSU2_TR(0x516f54);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B516f57:{NFSU2_TR(0x516f57);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B516f59:{NFSU2_TR(0x516f59);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B516f5f:{NFSU2_TR(0x516f5f);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B516f65:L516f65:{c.instructions+=5;NFSU2_TR(0x516f65);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B516f67:{NFSU2_TR(0x516f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516f6a:{NFSU2_TR(0x516f6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B516f6e:{NFSU2_TR(0x516f6e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20ull))));
}
B516f71:{NFSU2_TR(0x516f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516f74:L516f74:{c.instructions+=2;NFSU2_TR(0x516f74);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B516f76:{NFSU2_TR(0x516f76);
if(r1(R+518)){TAIL_STATIC(0x517016u,517);}
}
B516f7c:L516f7c:{c.instructions+=4;NFSU2_TR(0x516f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516f7f:{NFSU2_TR(0x516f7f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B516f81:{NFSU2_TR(0x516f81);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516f85:{NFSU2_TR(0x516f85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x517016u,517);}
}
B516f8b:L516f8b:{c.instructions+=5;NFSU2_TR(0x516f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B516f91:{NFSU2_TR(0x516f91);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B516f93:{NFSU2_TR(0x516f93);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B516f95:{NFSU2_TR(0x516f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B516f98:{NFSU2_TR(0x516f98);
if(r1(R+518)){TAIL_STATIC(0x51715au,517);}
}
B516f9e:L516f9e:{c.instructions+=2;NFSU2_TR(0x516f9e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B516fa0:{NFSU2_TR(0x516fa0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L516fa5;}}
}
B516fa2:L516fa2:{c.instructions+=1;NFSU2_TR(0x516fa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B516fa5:L516fa5:{c.instructions+=2;NFSU2_TR(0x516fa5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B516fa7:{NFSU2_TR(0x516fa7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L516fab;}}
}
B516fa9:L516fa9:{c.instructions+=1;NFSU2_TR(0x516fa9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B516fab:L516fab:{c.instructions+=9;NFSU2_TR(0x516fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B516fae:{NFSU2_TR(0x516fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B516fb1:{NFSU2_TR(0x516fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516fb7:{NFSU2_TR(0x516fb7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B516fbb:{NFSU2_TR(0x516fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B516fc1:{NFSU2_TR(0x516fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516fc7:{NFSU2_TR(0x516fc7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B516fcd:{NFSU2_TR(0x516fcd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B516fcf:{NFSU2_TR(0x516fcf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L516fe9;}}
}
B516fd1:L516fd1:{c.instructions+=5;NFSU2_TR(0x516fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B516fd4:{NFSU2_TR(0x516fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B516fd8:{NFSU2_TR(0x516fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B516fdb:{NFSU2_TR(0x516fdb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B516fdd:{NFSU2_TR(0x516fdd);
__builtin_memmove((R+4),(R+4),4);
}
B516fe0:L516fe0:{c.instructions+=4;NFSU2_TR(0x516fe0);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B516fe3:{NFSU2_TR(0x516fe3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xcull))));
}
B516fe6:{NFSU2_TR(0x516fe6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B516fe7:{NFSU2_TR(0x516fe7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x516fe0u);}goto L516fe0;}}
}
B516fe9:L516fe9:{c.instructions+=3;NFSU2_TR(0x516fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B516fec:{NFSU2_TR(0x516fec);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B516fef:{NFSU2_TR(0x516fef);
if(r1(R+518)){TAIL_STATIC(0x5171f0u,517);}
}
B516ff5:L516ff5:{c.instructions+=4;NFSU2_TR(0x516ff5);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B516ff8:{NFSU2_TR(0x516ff8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B516ffa:{NFSU2_TR(0x516ffa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B516ffd:{NFSU2_TR(0x516ffd);
if(r1(R+514)){TAIL_STATIC(0x517010u,517);}
}
B516fff:L516fff:{c.instructions+=1;NFSU2_TR(0x516fff);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x517002u,517);
}
XIT:NFSU2_TR_EXIT(0x516,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
