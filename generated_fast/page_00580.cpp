#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_480(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_53f(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_573(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_57f(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5e1(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_603(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x580,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x580,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_580(u8* __restrict R,Cpu& c);
u32 page_580(Cpu& c){return body_580(c.regs.data(),c);}
__attribute__((noinline)) u32 body_580(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x580004:goto L580004;
case 0x580006:c.instructions+=8;goto B580006;
case 0x580008:c.instructions+=7;goto B580008;
case 0x58000a:c.instructions+=6;goto B58000a;
case 0x58000c:c.instructions+=5;goto B58000c;
case 0x580011:c.instructions+=4;goto B580011;
case 0x580018:c.instructions+=3;goto B580018;
case 0x580022:c.instructions+=2;goto B580022;
case 0x58002c:c.instructions+=1;goto B58002c;
case 0x580031:goto L580031;
case 0x580034:c.instructions+=5;goto B580034;
case 0x580036:c.instructions+=4;goto B580036;
case 0x580038:c.instructions+=3;goto B580038;
case 0x58003d:c.instructions+=2;goto B58003d;
case 0x58003f:c.instructions+=1;goto B58003f;
case 0x580044:goto L580044;
case 0x580046:c.instructions+=4;goto B580046;
case 0x58004b:c.instructions+=3;goto B58004b;
case 0x58004e:c.instructions+=2;goto B58004e;
case 0x58004f:c.instructions+=1;goto B58004f;
case 0x580054:goto L580054;
case 0x580059:goto L580059;
case 0x58005a:c.instructions+=1;goto B58005a;
case 0x58005f:goto L58005f;
case 0x580062:c.instructions+=4;goto B580062;
case 0x580064:c.instructions+=3;goto B580064;
case 0x580065:c.instructions+=2;goto B580065;
case 0x580066:c.instructions+=1;goto B580066;
case 0x580068:goto L580068;
case 0x58006d:goto L58006d;
case 0x58006f:c.instructions+=4;goto B58006f;
case 0x580074:c.instructions+=3;goto B580074;
case 0x580076:c.instructions+=2;goto B580076;
case 0x580077:c.instructions+=1;goto B580077;
case 0x58007c:goto L58007c;
case 0x58007f:goto L58007f;
case 0x580084:c.instructions+=1;goto B580084;
case 0x580090:goto L580090;
case 0x580095:goto L580095;
case 0x58009a:goto L58009a;
case 0x5800a4:c.instructions+=1;goto B5800a4;
case 0x5800a9:goto L5800a9;
case 0x5800ae:goto L5800ae;
case 0x5800b3:goto L5800b3;
case 0x5800b8:c.instructions+=3;goto B5800b8;
case 0x5800ba:c.instructions+=2;goto B5800ba;
case 0x5800c4:c.instructions+=1;goto B5800c4;
case 0x5800c6:goto L5800c6;
case 0x5800cc:c.instructions+=2;goto B5800cc;
case 0x5800ce:c.instructions+=1;goto B5800ce;
case 0x5800d3:goto L5800d3;
case 0x5800d8:goto L5800d8;
case 0x5800da:c.instructions+=1;goto B5800da;
case 0x5800dc:goto L5800dc;
case 0x5800de:c.instructions+=1;goto B5800de;
case 0x5800e3:goto L5800e3;
case 0x5800e6:goto L5800e6;
case 0x5800eb:c.instructions+=2;goto B5800eb;
case 0x5800ed:c.instructions+=1;goto B5800ed;
case 0x5800ef:goto L5800ef;
case 0x5800f9:c.instructions+=1;goto B5800f9;
case 0x5800fb:goto L5800fb;
case 0x580100:goto L580100;
case 0x580102:goto L580102;
case 0x580107:c.instructions+=3;goto B580107;
case 0x580109:c.instructions+=2;goto B580109;
case 0x58010b:c.instructions+=1;goto B58010b;
case 0x58010d:goto L58010d;
case 0x58010f:c.instructions+=5;goto B58010f;
case 0x580112:c.instructions+=4;goto B580112;
case 0x580114:c.instructions+=3;goto B580114;
case 0x580115:c.instructions+=2;goto B580115;
case 0x580118:c.instructions+=1;goto B580118;
case 0x58011d:goto L58011d;
case 0x580120:goto L580120;
case 0x58012a:c.instructions+=1;goto B58012a;
case 0x580130:goto L580130;
case 0x580135:c.instructions+=5;goto B580135;
case 0x58013b:c.instructions+=4;goto B58013b;
case 0x58013c:c.instructions+=3;goto B58013c;
case 0x58013e:c.instructions+=2;goto B58013e;
case 0x580140:c.instructions+=1;goto B580140;
case 0x580142:goto L580142;
case 0x580144:c.instructions+=1;goto B580144;
case 0x580146:goto L580146;
case 0x580148:c.instructions+=2;goto B580148;
case 0x58014a:c.instructions+=1;goto B58014a;
case 0x58014f:goto L58014f;
case 0x580155:c.instructions+=3;goto B580155;
case 0x580157:c.instructions+=2;goto B580157;
case 0x58015a:c.instructions+=1;goto B58015a;
case 0x58015c:goto L58015c;
case 0x580162:c.instructions+=1;goto B580162;
case 0x580164:goto L580164;
case 0x580166:c.instructions+=2;goto B580166;
case 0x58016c:c.instructions+=1;goto B58016c;
case 0x580172:goto L580172;
case 0x580177:c.instructions+=2;goto B580177;
case 0x58017d:c.instructions+=1;goto B58017d;
case 0x58017f:goto L58017f;
case 0x580181:c.instructions+=1;goto B580181;
case 0x580183:goto L580183;
case 0x580185:c.instructions+=2;goto B580185;
case 0x580187:c.instructions+=1;goto B580187;
case 0x58018c:goto L58018c;
case 0x580192:c.instructions+=3;goto B580192;
case 0x580194:c.instructions+=2;goto B580194;
case 0x580197:c.instructions+=1;goto B580197;
case 0x580199:goto L580199;
case 0x58019f:c.instructions+=1;goto B58019f;
case 0x5801a1:goto L5801a1;
case 0x5801a3:c.instructions+=2;goto B5801a3;
case 0x5801a9:c.instructions+=1;goto B5801a9;
case 0x5801af:goto L5801af;
case 0x5801b4:c.instructions+=2;goto B5801b4;
case 0x5801ba:c.instructions+=1;goto B5801ba;
case 0x5801bc:goto L5801bc;
case 0x5801be:c.instructions+=1;goto B5801be;
case 0x5801c0:goto L5801c0;
case 0x5801c2:c.instructions+=2;goto B5801c2;
case 0x5801c4:c.instructions+=1;goto B5801c4;
case 0x5801c9:goto L5801c9;
case 0x5801cf:c.instructions+=3;goto B5801cf;
case 0x5801d1:c.instructions+=2;goto B5801d1;
case 0x5801d4:c.instructions+=1;goto B5801d4;
case 0x5801d6:goto L5801d6;
case 0x5801dc:c.instructions+=1;goto B5801dc;
case 0x5801de:goto L5801de;
case 0x5801e0:c.instructions+=2;goto B5801e0;
case 0x5801e6:c.instructions+=1;goto B5801e6;
case 0x5801ec:goto L5801ec;
case 0x5801f1:c.instructions+=2;goto B5801f1;
case 0x5801f7:c.instructions+=1;goto B5801f7;
case 0x5801f9:goto L5801f9;
case 0x5801fb:c.instructions+=1;goto B5801fb;
case 0x5801fd:goto L5801fd;
case 0x5801ff:c.instructions+=2;goto B5801ff;
case 0x580201:c.instructions+=1;goto B580201;
case 0x580206:goto L580206;
case 0x58020c:c.instructions+=3;goto B58020c;
case 0x58020e:c.instructions+=2;goto B58020e;
case 0x580211:c.instructions+=1;goto B580211;
case 0x580213:goto L580213;
case 0x580219:c.instructions+=1;goto B580219;
case 0x58021b:goto L58021b;
case 0x58021d:c.instructions+=2;goto B58021d;
case 0x580223:c.instructions+=1;goto B580223;
case 0x580229:goto L580229;
case 0x58022e:c.instructions+=2;goto B58022e;
case 0x580234:c.instructions+=1;goto B580234;
case 0x580236:goto L580236;
case 0x580238:c.instructions+=1;goto B580238;
case 0x58023a:goto L58023a;
case 0x58023c:c.instructions+=2;goto B58023c;
case 0x58023e:c.instructions+=1;goto B58023e;
case 0x580243:goto L580243;
case 0x580249:c.instructions+=3;goto B580249;
case 0x58024b:c.instructions+=2;goto B58024b;
case 0x58024e:c.instructions+=1;goto B58024e;
case 0x580250:goto L580250;
case 0x580256:c.instructions+=1;goto B580256;
case 0x580258:goto L580258;
case 0x58025a:c.instructions+=2;goto B58025a;
case 0x580260:c.instructions+=1;goto B580260;
case 0x580266:goto L580266;
case 0x58026b:c.instructions+=2;goto B58026b;
case 0x580271:c.instructions+=1;goto B580271;
case 0x580273:goto L580273;
case 0x580275:c.instructions+=1;goto B580275;
case 0x580277:goto L580277;
case 0x580279:c.instructions+=2;goto B580279;
case 0x58027b:c.instructions+=1;goto B58027b;
case 0x580280:goto L580280;
case 0x580286:c.instructions+=3;goto B580286;
case 0x580288:c.instructions+=2;goto B580288;
case 0x58028b:c.instructions+=1;goto B58028b;
case 0x58028d:goto L58028d;
case 0x580293:c.instructions+=1;goto B580293;
case 0x580295:goto L580295;
case 0x580297:c.instructions+=2;goto B580297;
case 0x58029d:c.instructions+=1;goto B58029d;
case 0x5802a3:goto L5802a3;
case 0x5802a8:c.instructions+=2;goto B5802a8;
case 0x5802ae:c.instructions+=1;goto B5802ae;
case 0x5802b0:goto L5802b0;
case 0x5802b2:c.instructions+=1;goto B5802b2;
case 0x5802b4:goto L5802b4;
case 0x5802b6:c.instructions+=2;goto B5802b6;
case 0x5802b8:c.instructions+=1;goto B5802b8;
case 0x5802bd:goto L5802bd;
case 0x5802c3:c.instructions+=3;goto B5802c3;
case 0x5802c5:c.instructions+=2;goto B5802c5;
case 0x5802c8:c.instructions+=1;goto B5802c8;
case 0x5802ca:goto L5802ca;
case 0x5802d0:c.instructions+=1;goto B5802d0;
case 0x5802d2:goto L5802d2;
case 0x5802d4:c.instructions+=2;goto B5802d4;
case 0x5802da:c.instructions+=1;goto B5802da;
case 0x5802e0:goto L5802e0;
case 0x5802e5:c.instructions+=2;goto B5802e5;
case 0x5802eb:c.instructions+=1;goto B5802eb;
case 0x5802ed:goto L5802ed;
case 0x5802ef:c.instructions+=1;goto B5802ef;
case 0x5802f1:goto L5802f1;
case 0x5802f3:c.instructions+=2;goto B5802f3;
case 0x5802f5:c.instructions+=1;goto B5802f5;
case 0x5802fa:goto L5802fa;
case 0x580300:c.instructions+=3;goto B580300;
case 0x580302:c.instructions+=2;goto B580302;
case 0x580305:c.instructions+=1;goto B580305;
case 0x580307:goto L580307;
case 0x58030d:c.instructions+=1;goto B58030d;
case 0x58030f:goto L58030f;
case 0x580311:c.instructions+=2;goto B580311;
case 0x580317:c.instructions+=1;goto B580317;
case 0x58031d:goto L58031d;
case 0x580322:c.instructions+=2;goto B580322;
case 0x580328:c.instructions+=1;goto B580328;
case 0x58032a:goto L58032a;
case 0x58032c:c.instructions+=1;goto B58032c;
case 0x58032e:goto L58032e;
case 0x580330:c.instructions+=2;goto B580330;
case 0x580332:c.instructions+=1;goto B580332;
case 0x580337:goto L580337;
case 0x58033d:c.instructions+=3;goto B58033d;
case 0x58033f:c.instructions+=2;goto B58033f;
case 0x580342:c.instructions+=1;goto B580342;
case 0x580344:goto L580344;
case 0x58034a:c.instructions+=1;goto B58034a;
case 0x58034c:goto L58034c;
case 0x58034e:c.instructions+=2;goto B58034e;
case 0x580354:c.instructions+=1;goto B580354;
case 0x58035a:goto L58035a;
case 0x58035f:c.instructions+=2;goto B58035f;
case 0x580365:c.instructions+=1;goto B580365;
case 0x580367:goto L580367;
case 0x580369:c.instructions+=1;goto B580369;
case 0x58036b:goto L58036b;
case 0x58036d:c.instructions+=2;goto B58036d;
case 0x58036f:c.instructions+=1;goto B58036f;
case 0x580374:goto L580374;
case 0x58037a:c.instructions+=3;goto B58037a;
case 0x58037c:c.instructions+=2;goto B58037c;
case 0x58037f:c.instructions+=1;goto B58037f;
case 0x580381:goto L580381;
case 0x580387:c.instructions+=1;goto B580387;
case 0x580389:goto L580389;
case 0x58038b:c.instructions+=2;goto B58038b;
case 0x580391:c.instructions+=1;goto B580391;
case 0x580397:goto L580397;
case 0x58039c:c.instructions+=2;goto B58039c;
case 0x5803a2:c.instructions+=1;goto B5803a2;
case 0x5803a4:goto L5803a4;
case 0x5803a6:c.instructions+=1;goto B5803a6;
case 0x5803a8:goto L5803a8;
case 0x5803aa:c.instructions+=2;goto B5803aa;
case 0x5803ac:c.instructions+=1;goto B5803ac;
case 0x5803b1:goto L5803b1;
case 0x5803b7:c.instructions+=3;goto B5803b7;
case 0x5803b9:c.instructions+=2;goto B5803b9;
case 0x5803bc:c.instructions+=1;goto B5803bc;
case 0x5803be:goto L5803be;
case 0x5803c4:c.instructions+=1;goto B5803c4;
case 0x5803c6:goto L5803c6;
case 0x5803c8:c.instructions+=2;goto B5803c8;
case 0x5803ce:c.instructions+=1;goto B5803ce;
case 0x5803d4:goto L5803d4;
case 0x5803d9:c.instructions+=2;goto B5803d9;
case 0x5803df:c.instructions+=1;goto B5803df;
case 0x5803e1:goto L5803e1;
case 0x5803e3:c.instructions+=1;goto B5803e3;
case 0x5803e5:goto L5803e5;
case 0x5803e7:c.instructions+=2;goto B5803e7;
case 0x5803e9:c.instructions+=1;goto B5803e9;
case 0x5803ee:goto L5803ee;
case 0x5803f4:c.instructions+=3;goto B5803f4;
case 0x5803f6:c.instructions+=2;goto B5803f6;
case 0x5803f9:c.instructions+=1;goto B5803f9;
case 0x5803fb:goto L5803fb;
case 0x580401:c.instructions+=1;goto B580401;
case 0x580403:goto L580403;
case 0x580405:c.instructions+=2;goto B580405;
case 0x58040b:c.instructions+=1;goto B58040b;
case 0x580411:goto L580411;
case 0x580416:c.instructions+=2;goto B580416;
case 0x58041c:c.instructions+=1;goto B58041c;
case 0x58041e:goto L58041e;
case 0x580420:c.instructions+=1;goto B580420;
case 0x580422:goto L580422;
case 0x580424:c.instructions+=2;goto B580424;
case 0x580426:c.instructions+=1;goto B580426;
case 0x58042b:goto L58042b;
case 0x580431:c.instructions+=3;goto B580431;
case 0x580433:c.instructions+=2;goto B580433;
case 0x580436:c.instructions+=1;goto B580436;
case 0x580438:goto L580438;
case 0x58043e:c.instructions+=1;goto B58043e;
case 0x580440:goto L580440;
case 0x580442:c.instructions+=2;goto B580442;
case 0x580448:c.instructions+=1;goto B580448;
case 0x58044e:goto L58044e;
case 0x580453:c.instructions+=2;goto B580453;
case 0x580459:c.instructions+=1;goto B580459;
case 0x58045b:goto L58045b;
case 0x58045d:c.instructions+=1;goto B58045d;
case 0x58045f:goto L58045f;
case 0x580461:c.instructions+=2;goto B580461;
case 0x580463:c.instructions+=1;goto B580463;
case 0x580468:goto L580468;
case 0x58046e:c.instructions+=3;goto B58046e;
case 0x580470:c.instructions+=2;goto B580470;
case 0x580473:c.instructions+=1;goto B580473;
case 0x580475:goto L580475;
case 0x58047b:c.instructions+=1;goto B58047b;
case 0x58047d:goto L58047d;
case 0x58047f:c.instructions+=2;goto B58047f;
case 0x580485:c.instructions+=1;goto B580485;
case 0x58048b:goto L58048b;
case 0x580490:c.instructions+=2;goto B580490;
case 0x580496:c.instructions+=1;goto B580496;
case 0x580498:goto L580498;
case 0x58049a:c.instructions+=1;goto B58049a;
case 0x58049c:goto L58049c;
case 0x58049e:c.instructions+=2;goto B58049e;
case 0x5804a0:c.instructions+=1;goto B5804a0;
case 0x5804a5:goto L5804a5;
case 0x5804ab:c.instructions+=3;goto B5804ab;
case 0x5804ad:c.instructions+=2;goto B5804ad;
case 0x5804b0:c.instructions+=1;goto B5804b0;
case 0x5804b2:goto L5804b2;
case 0x5804b8:c.instructions+=1;goto B5804b8;
case 0x5804ba:goto L5804ba;
case 0x5804bc:c.instructions+=2;goto B5804bc;
case 0x5804c2:c.instructions+=1;goto B5804c2;
case 0x5804c8:goto L5804c8;
case 0x5804cd:c.instructions+=2;goto B5804cd;
case 0x5804d3:c.instructions+=1;goto B5804d3;
case 0x5804d5:goto L5804d5;
case 0x5804d7:c.instructions+=1;goto B5804d7;
case 0x5804d9:goto L5804d9;
case 0x5804db:c.instructions+=2;goto B5804db;
case 0x5804dd:c.instructions+=1;goto B5804dd;
case 0x5804e2:goto L5804e2;
case 0x5804e8:c.instructions+=3;goto B5804e8;
case 0x5804ea:c.instructions+=2;goto B5804ea;
case 0x5804ed:c.instructions+=1;goto B5804ed;
case 0x5804ef:goto L5804ef;
case 0x5804f5:c.instructions+=1;goto B5804f5;
case 0x5804f7:goto L5804f7;
case 0x5804f9:c.instructions+=2;goto B5804f9;
case 0x5804ff:c.instructions+=1;goto B5804ff;
case 0x580505:goto L580505;
case 0x58050a:c.instructions+=2;goto B58050a;
case 0x580510:c.instructions+=1;goto B580510;
case 0x580512:goto L580512;
case 0x580514:c.instructions+=1;goto B580514;
case 0x580516:goto L580516;
case 0x580518:c.instructions+=2;goto B580518;
case 0x58051a:c.instructions+=1;goto B58051a;
case 0x58051f:goto L58051f;
case 0x580525:c.instructions+=3;goto B580525;
case 0x580527:c.instructions+=2;goto B580527;
case 0x58052a:c.instructions+=1;goto B58052a;
case 0x58052c:goto L58052c;
case 0x580532:c.instructions+=1;goto B580532;
case 0x580534:goto L580534;
case 0x580536:c.instructions+=2;goto B580536;
case 0x58053c:c.instructions+=1;goto B58053c;
case 0x580542:goto L580542;
case 0x580547:c.instructions+=2;goto B580547;
case 0x58054d:c.instructions+=1;goto B58054d;
case 0x58054f:goto L58054f;
case 0x580551:c.instructions+=1;goto B580551;
case 0x580553:goto L580553;
case 0x580555:c.instructions+=2;goto B580555;
case 0x580557:c.instructions+=1;goto B580557;
case 0x58055c:goto L58055c;
case 0x580562:c.instructions+=3;goto B580562;
case 0x580564:c.instructions+=2;goto B580564;
case 0x580567:c.instructions+=1;goto B580567;
case 0x580569:goto L580569;
case 0x58056f:c.instructions+=1;goto B58056f;
case 0x580571:goto L580571;
case 0x580573:c.instructions+=2;goto B580573;
case 0x580579:c.instructions+=1;goto B580579;
case 0x58057f:goto L58057f;
case 0x580584:c.instructions+=2;goto B580584;
case 0x58058a:c.instructions+=1;goto B58058a;
case 0x58058c:goto L58058c;
case 0x58058e:c.instructions+=1;goto B58058e;
case 0x580590:goto L580590;
case 0x580592:c.instructions+=2;goto B580592;
case 0x580594:c.instructions+=1;goto B580594;
case 0x580599:goto L580599;
case 0x58059f:c.instructions+=3;goto B58059f;
case 0x5805a1:c.instructions+=2;goto B5805a1;
case 0x5805a4:c.instructions+=1;goto B5805a4;
case 0x5805a6:goto L5805a6;
case 0x5805ac:c.instructions+=1;goto B5805ac;
case 0x5805ae:goto L5805ae;
case 0x5805b0:c.instructions+=2;goto B5805b0;
case 0x5805b6:c.instructions+=1;goto B5805b6;
case 0x5805bc:goto L5805bc;
case 0x5805c1:c.instructions+=2;goto B5805c1;
case 0x5805c7:c.instructions+=1;goto B5805c7;
case 0x5805c9:goto L5805c9;
case 0x5805cb:c.instructions+=1;goto B5805cb;
case 0x5805cd:goto L5805cd;
case 0x5805cf:c.instructions+=2;goto B5805cf;
case 0x5805d1:c.instructions+=1;goto B5805d1;
case 0x5805d6:goto L5805d6;
case 0x5805dc:c.instructions+=3;goto B5805dc;
case 0x5805de:c.instructions+=2;goto B5805de;
case 0x5805e1:c.instructions+=1;goto B5805e1;
case 0x5805e3:goto L5805e3;
case 0x5805e9:c.instructions+=1;goto B5805e9;
case 0x5805eb:goto L5805eb;
case 0x5805ed:c.instructions+=2;goto B5805ed;
case 0x5805f3:c.instructions+=1;goto B5805f3;
case 0x5805f9:goto L5805f9;
case 0x5805fe:c.instructions+=2;goto B5805fe;
case 0x580604:c.instructions+=1;goto B580604;
case 0x580606:goto L580606;
case 0x580608:c.instructions+=1;goto B580608;
case 0x58060a:goto L58060a;
case 0x58060c:c.instructions+=2;goto B58060c;
case 0x58060e:c.instructions+=1;goto B58060e;
case 0x580613:goto L580613;
case 0x580619:c.instructions+=3;goto B580619;
case 0x58061b:c.instructions+=2;goto B58061b;
case 0x58061e:c.instructions+=1;goto B58061e;
case 0x580620:goto L580620;
case 0x580626:c.instructions+=1;goto B580626;
case 0x580628:goto L580628;
case 0x58062a:c.instructions+=2;goto B58062a;
case 0x580630:c.instructions+=1;goto B580630;
case 0x580636:goto L580636;
case 0x58063b:c.instructions+=2;goto B58063b;
case 0x580641:c.instructions+=1;goto B580641;
case 0x580643:goto L580643;
case 0x580645:c.instructions+=1;goto B580645;
case 0x580647:goto L580647;
case 0x580649:c.instructions+=2;goto B580649;
case 0x58064b:c.instructions+=1;goto B58064b;
case 0x580650:goto L580650;
case 0x580656:c.instructions+=3;goto B580656;
case 0x580658:c.instructions+=2;goto B580658;
case 0x58065b:c.instructions+=1;goto B58065b;
case 0x58065d:goto L58065d;
case 0x580663:c.instructions+=1;goto B580663;
case 0x580665:goto L580665;
case 0x580667:c.instructions+=2;goto B580667;
case 0x58066d:c.instructions+=1;goto B58066d;
case 0x580673:goto L580673;
case 0x580678:c.instructions+=2;goto B580678;
case 0x58067e:c.instructions+=1;goto B58067e;
case 0x580680:goto L580680;
case 0x580682:c.instructions+=2;goto B580682;
case 0x580684:c.instructions+=1;goto B580684;
case 0x580689:goto L580689;
case 0x58068e:c.instructions+=3;goto B58068e;
case 0x580690:c.instructions+=2;goto B580690;
case 0x580693:c.instructions+=1;goto B580693;
case 0x580695:goto L580695;
case 0x58069b:c.instructions+=1;goto B58069b;
case 0x58069d:goto L58069d;
case 0x5806a3:c.instructions+=1;goto B5806a3;
case 0x5806a9:goto L5806a9;
case 0x5806aa:c.instructions+=1;goto B5806aa;
case 0x5806b0:goto L5806b0;
case 0x5806b5:c.instructions+=4;goto B5806b5;
case 0x5806b6:c.instructions+=3;goto B5806b6;
case 0x5806b8:c.instructions+=2;goto B5806b8;
case 0x5806bb:c.instructions+=1;goto B5806bb;
case 0x5806c1:goto L5806c1;
case 0x5806c6:c.instructions+=4;goto B5806c6;
case 0x5806c9:c.instructions+=3;goto B5806c9;
case 0x5806cf:c.instructions+=2;goto B5806cf;
case 0x5806d1:c.instructions+=1;goto B5806d1;
case 0x5806d7:goto L5806d7;
case 0x5806dd:c.instructions+=1;goto B5806dd;
case 0x5806e3:goto L5806e3;
case 0x5806e4:c.instructions+=6;goto B5806e4;
case 0x5806e5:c.instructions+=5;goto B5806e5;
case 0x5806e6:c.instructions+=4;goto B5806e6;
case 0x5806e8:c.instructions+=3;goto B5806e8;
case 0x5806ed:c.instructions+=2;goto B5806ed;
case 0x5806ef:c.instructions+=1;goto B5806ef;
case 0x5806f4:goto L5806f4;
case 0x5806f6:c.instructions+=5;goto B5806f6;
case 0x5806fc:c.instructions+=4;goto B5806fc;
case 0x5806fe:c.instructions+=3;goto B5806fe;
case 0x580700:c.instructions+=2;goto B580700;
case 0x580702:c.instructions+=1;goto B580702;
case 0x580704:goto L580704;
case 0x58070a:c.instructions+=1;goto B58070a;
case 0x58070c:goto L58070c;
case 0x58070d:c.instructions+=3;goto B58070d;
case 0x580712:c.instructions+=2;goto B580712;
case 0x580714:c.instructions+=1;goto B580714;
case 0x580719:goto L580719;
case 0x58071c:c.instructions+=4;goto B58071c;
case 0x58071e:c.instructions+=3;goto B58071e;
case 0x580721:c.instructions+=2;goto B580721;
case 0x580723:c.instructions+=1;goto B580723;
case 0x580725:goto L580725;
case 0x580727:c.instructions+=1;goto B580727;
case 0x580729:goto L580729;
case 0x58072f:c.instructions+=5;goto B58072f;
case 0x580735:c.instructions+=4;goto B580735;
case 0x580737:c.instructions+=3;goto B580737;
case 0x580739:c.instructions+=2;goto B580739;
case 0x58073c:c.instructions+=1;goto B58073c;
case 0x58073e:goto L58073e;
case 0x580740:c.instructions+=1;goto B580740;
case 0x580742:goto L580742;
case 0x580744:goto L580744;
case 0x58074a:c.instructions+=3;goto B58074a;
case 0x58074b:c.instructions+=2;goto B58074b;
case 0x58074d:c.instructions+=1;goto B58074d;
case 0x58074f:goto L58074f;
case 0x580751:goto L580751;
case 0x580753:goto L580753;
case 0x580759:c.instructions+=4;goto B580759;
case 0x58075f:c.instructions+=3;goto B58075f;
case 0x580761:c.instructions+=2;goto B580761;
case 0x580764:c.instructions+=1;goto B580764;
case 0x58076a:goto L58076a;
case 0x580770:c.instructions+=2;goto B580770;
case 0x580772:c.instructions+=1;goto B580772;
case 0x580778:goto L580778;
case 0x58077a:c.instructions+=1;goto B58077a;
case 0x58077c:goto L58077c;
case 0x580782:c.instructions+=4;goto B580782;
case 0x580788:c.instructions+=3;goto B580788;
case 0x58078a:c.instructions+=2;goto B58078a;
case 0x58078d:c.instructions+=1;goto B58078d;
case 0x580793:goto L580793;
case 0x580799:c.instructions+=1;goto B580799;
case 0x58079b:goto L58079b;
case 0x58079d:c.instructions+=10;goto B58079d;
case 0x5807a0:c.instructions+=9;goto B5807a0;
case 0x5807a2:c.instructions+=8;goto B5807a2;
case 0x5807a5:c.instructions+=7;goto B5807a5;
case 0x5807ab:c.instructions+=6;goto B5807ab;
case 0x5807b1:c.instructions+=5;goto B5807b1;
case 0x5807b3:c.instructions+=4;goto B5807b3;
case 0x5807b6:c.instructions+=3;goto B5807b6;
case 0x5807b9:c.instructions+=2;goto B5807b9;
case 0x5807bb:c.instructions+=1;goto B5807bb;
case 0x5807bd:goto L5807bd;
case 0x5807bf:c.instructions+=1;goto B5807bf;
case 0x5807c1:goto L5807c1;
case 0x5807c4:c.instructions+=2;goto B5807c4;
case 0x5807c7:c.instructions+=1;goto B5807c7;
case 0x5807c9:goto L5807c9;
case 0x5807ca:c.instructions+=2;goto B5807ca;
case 0x5807cc:c.instructions+=1;goto B5807cc;
case 0x5807d1:goto L5807d1;
case 0x5807d7:goto L5807d7;
case 0x5807da:c.instructions+=3;goto B5807da;
case 0x5807df:c.instructions+=2;goto B5807df;
case 0x5807e0:c.instructions+=1;goto B5807e0;
case 0x5807e5:goto L5807e5;
case 0x5807eb:c.instructions+=11;goto B5807eb;
case 0x5807f0:c.instructions+=10;goto B5807f0;
case 0x5807f3:c.instructions+=9;goto B5807f3;
case 0x5807f6:c.instructions+=8;goto B5807f6;
case 0x5807fc:c.instructions+=7;goto B5807fc;
case 0x580802:c.instructions+=6;goto B580802;
case 0x580805:c.instructions+=5;goto B580805;
case 0x580806:c.instructions+=4;goto B580806;
case 0x580807:c.instructions+=3;goto B580807;
case 0x58080d:c.instructions+=2;goto B58080d;
case 0x580813:c.instructions+=1;goto B580813;
case 0x580815:goto L580815;
case 0x580817:c.instructions+=3;goto B580817;
case 0x58081c:c.instructions+=2;goto B58081c;
case 0x58081e:c.instructions+=1;goto B58081e;
case 0x580823:goto L580823;
case 0x580825:c.instructions+=1;goto B580825;
case 0x580827:goto L580827;
case 0x580829:c.instructions+=9;goto B580829;
case 0x58082c:c.instructions+=8;goto B58082c;
case 0x58082e:c.instructions+=7;goto B58082e;
case 0x580831:c.instructions+=6;goto B580831;
case 0x580837:c.instructions+=5;goto B580837;
case 0x58083d:c.instructions+=4;goto B58083d;
case 0x58083f:c.instructions+=3;goto B58083f;
case 0x580842:c.instructions+=2;goto B580842;
case 0x580845:c.instructions+=1;goto B580845;
case 0x580847:goto L580847;
case 0x58084d:goto L58084d;
case 0x58084e:c.instructions+=2;goto B58084e;
case 0x58084f:c.instructions+=1;goto B58084f;
case 0x580850:goto L580850;
case 0x580856:c.instructions+=2;goto B580856;
case 0x58085c:c.instructions+=1;goto B58085c;
case 0x58085e:goto L58085e;
case 0x580863:c.instructions+=2;goto B580863;
case 0x580865:c.instructions+=1;goto B580865;
case 0x58086a:goto L58086a;
case 0x58086c:c.instructions+=1;goto B58086c;
case 0x58086e:goto L58086e;
case 0x580874:goto L580874;
case 0x580875:c.instructions+=1;goto B580875;
case 0x580880:goto L580880;
case 0x580885:c.instructions+=5;goto B580885;
case 0x580888:c.instructions+=4;goto B580888;
case 0x580889:c.instructions+=3;goto B580889;
case 0x58088b:c.instructions+=2;goto B58088b;
case 0x58088d:c.instructions+=1;goto B58088d;
case 0x58088f:goto L58088f;
case 0x580895:c.instructions+=1;goto B580895;
case 0x580897:goto L580897;
case 0x580899:c.instructions+=3;goto B580899;
case 0x58089a:c.instructions+=2;goto B58089a;
case 0x58089d:c.instructions+=1;goto B58089d;
case 0x58089e:goto L58089e;
case 0x5808a3:c.instructions+=8;goto B5808a3;
case 0x5808a4:c.instructions+=7;goto B5808a4;
case 0x5808a5:c.instructions+=6;goto B5808a5;
case 0x5808a7:c.instructions+=5;goto B5808a7;
case 0x5808aa:c.instructions+=4;goto B5808aa;
case 0x5808af:c.instructions+=3;goto B5808af;
case 0x5808b0:c.instructions+=2;goto B5808b0;
case 0x5808b2:c.instructions+=1;goto B5808b2;
case 0x5808b7:goto L5808b7;
case 0x5808b9:c.instructions+=6;goto B5808b9;
case 0x5808bd:c.instructions+=5;goto B5808bd;
case 0x5808bf:c.instructions+=4;goto B5808bf;
case 0x5808c1:c.instructions+=3;goto B5808c1;
case 0x5808c2:c.instructions+=2;goto B5808c2;
case 0x5808c8:c.instructions+=1;goto B5808c8;
case 0x5808cd:goto L5808cd;
case 0x5808d0:c.instructions+=2;goto B5808d0;
case 0x5808d2:c.instructions+=1;goto B5808d2;
case 0x5808d4:goto L5808d4;
case 0x5808d6:c.instructions+=5;goto B5808d6;
case 0x5808da:c.instructions+=4;goto B5808da;
case 0x5808dc:c.instructions+=3;goto B5808dc;
case 0x5808dd:c.instructions+=2;goto B5808dd;
case 0x5808de:c.instructions+=1;goto B5808de;
case 0x5808e3:goto L5808e3;
case 0x5808e6:c.instructions+=2;goto B5808e6;
case 0x5808e8:c.instructions+=1;goto B5808e8;
case 0x5808ea:goto L5808ea;
case 0x5808ec:c.instructions+=1;goto B5808ec;
case 0x5808ee:goto L5808ee;
case 0x5808ef:c.instructions+=1;goto B5808ef;
case 0x5808f4:goto L5808f4;
case 0x5808f7:c.instructions+=8;goto B5808f7;
case 0x5808f8:c.instructions+=7;goto B5808f8;
case 0x5808f9:c.instructions+=6;goto B5808f9;
case 0x5808ff:c.instructions+=5;goto B5808ff;
case 0x580905:c.instructions+=4;goto B580905;
case 0x580907:c.instructions+=3;goto B580907;
case 0x580908:c.instructions+=2;goto B580908;
case 0x58090b:c.instructions+=1;goto B58090b;
case 0x58090c:goto L58090c;
case 0x58090e:c.instructions+=2;goto B58090e;
case 0x580914:c.instructions+=1;goto B580914;
case 0x580916:goto L580916;
case 0x580918:c.instructions+=4;goto B580918;
case 0x58091c:c.instructions+=3;goto B58091c;
case 0x58091e:c.instructions+=2;goto B58091e;
case 0x58091f:c.instructions+=1;goto B58091f;
case 0x580924:goto L580924;
case 0x580927:c.instructions+=2;goto B580927;
case 0x580928:c.instructions+=1;goto B580928;
case 0x58092a:goto L58092a;
case 0x58092e:c.instructions+=4;goto B58092e;
case 0x58092f:c.instructions+=3;goto B58092f;
case 0x580930:c.instructions+=2;goto B580930;
case 0x580931:c.instructions+=1;goto B580931;
case 0x580936:goto L580936;
case 0x580938:c.instructions+=3;goto B580938;
case 0x580939:c.instructions+=2;goto B580939;
case 0x58093a:c.instructions+=1;goto B58093a;
case 0x58093f:goto L58093f;
case 0x580943:c.instructions+=3;goto B580943;
case 0x580944:c.instructions+=2;goto B580944;
case 0x580945:c.instructions+=1;goto B580945;
case 0x58094a:goto L58094a;
case 0x58094c:c.instructions+=3;goto B58094c;
case 0x58094d:c.instructions+=2;goto B58094d;
case 0x58094e:c.instructions+=1;goto B58094e;
case 0x580953:goto L580953;
case 0x580956:c.instructions+=3;goto B580956;
case 0x58095b:c.instructions+=2;goto B58095b;
case 0x58095c:c.instructions+=1;goto B58095c;
case 0x580961:goto L580961;
case 0x580966:c.instructions+=12;goto B580966;
case 0x580968:c.instructions+=11;goto B580968;
case 0x58096e:c.instructions+=10;goto B58096e;
case 0x580971:c.instructions+=9;goto B580971;
case 0x580977:c.instructions+=8;goto B580977;
case 0x58097c:c.instructions+=7;goto B58097c;
case 0x58097e:c.instructions+=6;goto B58097e;
case 0x580984:c.instructions+=5;goto B580984;
case 0x580987:c.instructions+=4;goto B580987;
case 0x58098d:c.instructions+=3;goto B58098d;
case 0x580993:c.instructions+=2;goto B580993;
case 0x580994:c.instructions+=1;goto B580994;
case 0x580999:goto L580999;
case 0x58099c:c.instructions+=10;goto B58099c;
case 0x58099d:c.instructions+=9;goto B58099d;
case 0x58099e:c.instructions+=8;goto B58099e;
case 0x58099f:c.instructions+=7;goto B58099f;
case 0x5809a5:c.instructions+=6;goto B5809a5;
case 0x5809ab:c.instructions+=5;goto B5809ab;
case 0x5809b1:c.instructions+=4;goto B5809b1;
case 0x5809b3:c.instructions+=3;goto B5809b3;
case 0x5809b4:c.instructions+=2;goto B5809b4;
case 0x5809b7:c.instructions+=1;goto B5809b7;
case 0x5809c0:goto L5809c0;
case 0x5809c5:c.instructions+=9;goto B5809c5;
case 0x5809c8:c.instructions+=8;goto B5809c8;
case 0x5809c9:c.instructions+=7;goto B5809c9;
case 0x5809ca:c.instructions+=6;goto B5809ca;
case 0x5809cc:c.instructions+=5;goto B5809cc;
case 0x5809ce:c.instructions+=4;goto B5809ce;
case 0x5809cf:c.instructions+=3;goto B5809cf;
case 0x5809d0:c.instructions+=2;goto B5809d0;
case 0x5809d6:c.instructions+=1;goto B5809d6;
case 0x5809dc:goto L5809dc;
case 0x5809de:c.instructions+=2;goto B5809de;
case 0x5809e0:c.instructions+=1;goto B5809e0;
case 0x5809e5:goto L5809e5;
case 0x5809e8:c.instructions+=2;goto B5809e8;
case 0x5809ea:c.instructions+=1;goto B5809ea;
case 0x5809f0:goto L5809f0;
case 0x5809f2:goto L5809f2;
case 0x5809f8:c.instructions+=1;goto B5809f8;
case 0x5809fa:goto L5809fa;
case 0x5809fc:c.instructions+=1;goto B5809fc;
case 0x5809fe:goto L5809fe;
case 0x580a04:c.instructions+=3;goto B580a04;
case 0x580a06:c.instructions+=2;goto B580a06;
case 0x580a08:c.instructions+=1;goto B580a08;
case 0x580a0d:goto L580a0d;
case 0x580a13:c.instructions+=3;goto B580a13;
case 0x580a15:c.instructions+=2;goto B580a15;
case 0x580a18:c.instructions+=1;goto B580a18;
case 0x580a1a:goto L580a1a;
case 0x580a20:c.instructions+=1;goto B580a20;
case 0x580a22:goto L580a22;
case 0x580a28:c.instructions+=1;goto B580a28;
case 0x580a2e:goto L580a2e;
case 0x580a30:c.instructions+=3;goto B580a30;
case 0x580a35:c.instructions+=2;goto B580a35;
case 0x580a36:c.instructions+=1;goto B580a36;
case 0x580a3b:goto L580a3b;
case 0x580a40:c.instructions+=4;goto B580a40;
case 0x580a46:c.instructions+=3;goto B580a46;
case 0x580a49:c.instructions+=2;goto B580a49;
case 0x580a4b:c.instructions+=1;goto B580a4b;
case 0x580a4d:goto L580a4d;
case 0x580a52:goto L580a52;
case 0x580a53:c.instructions+=1;goto B580a53;
case 0x580a55:goto L580a55;
case 0x580a5a:goto L580a5a;
case 0x580a5f:c.instructions+=2;goto B580a5f;
case 0x580a61:c.instructions+=1;goto B580a61;
case 0x580a63:goto L580a63;
case 0x580a66:c.instructions+=1;goto B580a66;
case 0x580a6c:goto L580a6c;
case 0x580a71:goto L580a71;
case 0x580a76:goto L580a76;
case 0x580a78:c.instructions+=1;goto B580a78;
case 0x580a7a:goto L580a7a;
case 0x580a80:goto L580a80;
case 0x580a82:c.instructions+=1;goto B580a82;
case 0x580a87:goto L580a87;
case 0x580a8b:c.instructions+=6;goto B580a8b;
case 0x580a8c:c.instructions+=5;goto B580a8c;
case 0x580a90:c.instructions+=4;goto B580a90;
case 0x580a91:c.instructions+=3;goto B580a91;
case 0x580a92:c.instructions+=2;goto B580a92;
case 0x580a96:c.instructions+=1;goto B580a96;
case 0x580a9b:goto L580a9b;
case 0x580a9f:c.instructions+=8;goto B580a9f;
case 0x580aa2:c.instructions+=7;goto B580aa2;
case 0x580aa7:c.instructions+=6;goto B580aa7;
case 0x580aa8:c.instructions+=5;goto B580aa8;
case 0x580aa9:c.instructions+=4;goto B580aa9;
case 0x580aad:c.instructions+=3;goto B580aad;
case 0x580aae:c.instructions+=2;goto B580aae;
case 0x580ab0:c.instructions+=1;goto B580ab0;
case 0x580ab5:goto L580ab5;
case 0x580ab7:c.instructions+=1;goto B580ab7;
case 0x580ab9:goto L580ab9;
case 0x580abe:c.instructions+=2;goto B580abe;
case 0x580ac4:c.instructions+=1;goto B580ac4;
case 0x580ac6:goto L580ac6;
case 0x580acb:goto L580acb;
case 0x580ad1:c.instructions+=3;goto B580ad1;
case 0x580ad2:c.instructions+=2;goto B580ad2;
case 0x580ad8:c.instructions+=1;goto B580ad8;
case 0x580ada:goto L580ada;
case 0x580adf:goto L580adf;
case 0x580ae4:goto L580ae4;
case 0x580ae6:c.instructions+=1;goto B580ae6;
case 0x580ae8:goto L580ae8;
case 0x580aee:c.instructions+=2;goto B580aee;
case 0x580af4:c.instructions+=1;goto B580af4;
case 0x580af6:goto L580af6;
case 0x580afc:c.instructions+=4;goto B580afc;
case 0x580afe:c.instructions+=3;goto B580afe;
case 0x580b00:c.instructions+=2;goto B580b00;
case 0x580b01:c.instructions+=1;goto B580b01;
case 0x580b06:goto L580b06;
case 0x580b08:c.instructions+=1;goto B580b08;
case 0x580b0a:goto L580b0a;
case 0x580b0f:c.instructions+=1;goto B580b0f;
case 0x580b10:goto L580b10;
case 0x580b16:c.instructions+=1;goto B580b16;
case 0x580b18:goto L580b18;
case 0x580b1c:c.instructions+=8;goto B580b1c;
case 0x580b1f:c.instructions+=7;goto B580b1f;
case 0x580b21:c.instructions+=6;goto B580b21;
case 0x580b24:c.instructions+=5;goto B580b24;
case 0x580b26:c.instructions+=4;goto B580b26;
case 0x580b28:c.instructions+=3;goto B580b28;
case 0x580b29:c.instructions+=2;goto B580b29;
case 0x580b2f:c.instructions+=1;goto B580b2f;
case 0x580b34:goto L580b34;
case 0x580b37:c.instructions+=2;goto B580b37;
case 0x580b38:c.instructions+=1;goto B580b38;
case 0x580b3a:goto L580b3a;
case 0x580b3f:goto L580b3f;
case 0x580b41:c.instructions+=1;goto B580b41;
case 0x580b47:goto L580b47;
case 0x580b4a:c.instructions+=2;goto B580b4a;
case 0x580b4d:c.instructions+=1;goto B580b4d;
case 0x580b4f:goto L580b4f;
case 0x580b52:c.instructions+=3;goto B580b52;
case 0x580b54:c.instructions+=2;goto B580b54;
case 0x580b57:c.instructions+=1;goto B580b57;
case 0x580b59:goto L580b59;
case 0x580b5a:c.instructions+=4;goto B580b5a;
case 0x580b5c:c.instructions+=3;goto B580b5c;
case 0x580b5e:c.instructions+=2;goto B580b5e;
case 0x580b60:c.instructions+=1;goto B580b60;
case 0x580b62:goto L580b62;
case 0x580b65:c.instructions+=7;goto B580b65;
case 0x580b69:c.instructions+=6;goto B580b69;
case 0x580b6d:c.instructions+=5;goto B580b6d;
case 0x580b6e:c.instructions+=4;goto B580b6e;
case 0x580b71:c.instructions+=3;goto B580b71;
case 0x580b77:c.instructions+=2;goto B580b77;
case 0x580b79:c.instructions+=1;goto B580b79;
case 0x580b7b:goto L580b7b;
case 0x580b7e:c.instructions+=2;goto B580b7e;
case 0x580b80:c.instructions+=1;goto B580b80;
case 0x580b82:goto L580b82;
case 0x580b85:c.instructions+=6;goto B580b85;
case 0x580b87:c.instructions+=5;goto B580b87;
case 0x580b8a:c.instructions+=4;goto B580b8a;
case 0x580b8c:c.instructions+=3;goto B580b8c;
case 0x580b91:c.instructions+=2;goto B580b91;
case 0x580b92:c.instructions+=1;goto B580b92;
case 0x580b97:goto L580b97;
case 0x580b9a:goto L580b9a;
case 0x580b9f:goto L580b9f;
case 0x580ba1:c.instructions+=1;goto B580ba1;
case 0x580ba7:goto L580ba7;
case 0x580baa:c.instructions+=1;goto B580baa;
case 0x580bb0:goto L580bb0;
case 0x580bb2:c.instructions+=1;goto B580bb2;
case 0x580bb4:goto L580bb4;
case 0x580bb7:c.instructions+=3;goto B580bb7;
case 0x580bb9:c.instructions+=2;goto B580bb9;
case 0x580bbc:c.instructions+=1;goto B580bbc;
case 0x580bbe:goto L580bbe;
case 0x580bc4:c.instructions+=4;goto B580bc4;
case 0x580bca:c.instructions+=3;goto B580bca;
case 0x580bcb:c.instructions+=2;goto B580bcb;
case 0x580bcd:c.instructions+=1;goto B580bcd;
case 0x580bd2:goto L580bd2;
case 0x580bd4:c.instructions+=2;goto B580bd4;
case 0x580bd7:c.instructions+=1;goto B580bd7;
case 0x580bd9:goto L580bd9;
case 0x580bdf:goto L580bdf;
case 0x580be1:c.instructions+=2;goto B580be1;
case 0x580be6:c.instructions+=1;goto B580be6;
case 0x580be8:goto L580be8;
case 0x580bea:goto L580bea;
case 0x580bec:c.instructions+=1;goto B580bec;
case 0x580bf2:goto L580bf2;
case 0x580bf4:c.instructions+=1;goto B580bf4;
case 0x580bf6:goto L580bf6;
case 0x580bfb:c.instructions+=1;goto B580bfb;
case 0x580c00:goto L580c00;
case 0x580c02:c.instructions+=1;goto B580c02;
case 0x580c04:goto L580c04;
case 0x580c07:c.instructions+=3;goto B580c07;
case 0x580c09:c.instructions+=2;goto B580c09;
case 0x580c0c:c.instructions+=1;goto B580c0c;
case 0x580c0e:goto L580c0e;
case 0x580c14:c.instructions+=4;goto B580c14;
case 0x580c1a:c.instructions+=3;goto B580c1a;
case 0x580c1b:c.instructions+=2;goto B580c1b;
case 0x580c1d:c.instructions+=1;goto B580c1d;
case 0x580c22:goto L580c22;
case 0x580c24:c.instructions+=2;goto B580c24;
case 0x580c27:c.instructions+=1;goto B580c27;
case 0x580c29:goto L580c29;
case 0x580c2f:c.instructions+=1;goto B580c2f;
case 0x580c31:goto L580c31;
case 0x580c33:goto L580c33;
case 0x580c34:c.instructions+=3;goto B580c34;
case 0x580c39:c.instructions+=2;goto B580c39;
case 0x580c3a:c.instructions+=1;goto B580c3a;
case 0x580c3f:goto L580c3f;
case 0x580c42:c.instructions+=2;goto B580c42;
case 0x580c43:c.instructions+=1;goto B580c43;
case 0x580c45:goto L580c45;
case 0x580c4a:goto L580c4a;
case 0x580c4d:c.instructions+=5;goto B580c4d;
case 0x580c4f:c.instructions+=4;goto B580c4f;
case 0x580c55:c.instructions+=3;goto B580c55;
case 0x580c58:c.instructions+=2;goto B580c58;
case 0x580c5a:c.instructions+=1;goto B580c5a;
case 0x580c5c:goto L580c5c;
case 0x580c62:c.instructions+=5;goto B580c62;
case 0x580c64:c.instructions+=4;goto B580c64;
case 0x580c6a:c.instructions+=3;goto B580c6a;
case 0x580c6c:c.instructions+=2;goto B580c6c;
case 0x580c6d:c.instructions+=1;goto B580c6d;
case 0x580c72:goto L580c72;
case 0x580c74:c.instructions+=4;goto B580c74;
case 0x580c77:c.instructions+=3;goto B580c77;
case 0x580c7e:c.instructions+=2;goto B580c7e;
case 0x580c81:c.instructions+=1;goto B580c81;
case 0x580c83:goto L580c83;
case 0x580c89:c.instructions+=3;goto B580c89;
case 0x580c8b:c.instructions+=2;goto B580c8b;
case 0x580c91:c.instructions+=1;goto B580c91;
case 0x580c93:goto L580c93;
case 0x580c9d:goto L580c9d;
case 0x580ca2:goto L580ca2;
case 0x580ca4:c.instructions+=1;goto B580ca4;
case 0x580ca6:goto L580ca6;
case 0x580cab:c.instructions+=2;goto B580cab;
case 0x580caf:c.instructions+=1;goto B580caf;
case 0x580cb0:goto L580cb0;
case 0x580cb3:c.instructions+=4;goto B580cb3;
case 0x580cb5:c.instructions+=3;goto B580cb5;
case 0x580cb8:c.instructions+=2;goto B580cb8;
case 0x580cba:c.instructions+=1;goto B580cba;
case 0x580cbc:goto L580cbc;
case 0x580cc0:c.instructions+=9;goto B580cc0;
case 0x580cc6:c.instructions+=8;goto B580cc6;
case 0x580ccc:c.instructions+=7;goto B580ccc;
case 0x580ccf:c.instructions+=6;goto B580ccf;
case 0x580cd1:c.instructions+=5;goto B580cd1;
case 0x580cd4:c.instructions+=4;goto B580cd4;
case 0x580cd6:c.instructions+=3;goto B580cd6;
case 0x580cd8:c.instructions+=2;goto B580cd8;
case 0x580cd9:c.instructions+=1;goto B580cd9;
case 0x580cde:goto L580cde;
case 0x580ce0:c.instructions+=5;goto B580ce0;
case 0x580ce3:c.instructions+=4;goto B580ce3;
case 0x580ce6:c.instructions+=3;goto B580ce6;
case 0x580ced:c.instructions+=2;goto B580ced;
case 0x580cef:c.instructions+=1;goto B580cef;
case 0x580cf1:goto L580cf1;
case 0x580cf7:c.instructions+=3;goto B580cf7;
case 0x580cf9:c.instructions+=2;goto B580cf9;
case 0x580cff:c.instructions+=1;goto B580cff;
case 0x580d01:goto L580d01;
case 0x580d0b:goto L580d0b;
case 0x580d10:goto L580d10;
case 0x580d14:c.instructions+=4;goto B580d14;
case 0x580d17:c.instructions+=3;goto B580d17;
case 0x580d18:c.instructions+=2;goto B580d18;
case 0x580d1c:c.instructions+=1;goto B580d1c;
case 0x580d1e:goto L580d1e;
case 0x580d20:goto L580d20;
case 0x580d25:c.instructions+=3;goto B580d25;
case 0x580d27:c.instructions+=2;goto B580d27;
case 0x580d29:c.instructions+=1;goto B580d29;
case 0x580d2b:goto L580d2b;
case 0x580d30:goto L580d30;
case 0x580d34:c.instructions+=5;goto B580d34;
case 0x580d36:c.instructions+=4;goto B580d36;
case 0x580d3a:c.instructions+=3;goto B580d3a;
case 0x580d3c:c.instructions+=2;goto B580d3c;
case 0x580d41:c.instructions+=1;goto B580d41;
case 0x580d43:goto L580d43;
case 0x580d45:c.instructions+=7;goto B580d45;
case 0x580d4b:c.instructions+=6;goto B580d4b;
case 0x580d4d:c.instructions+=5;goto B580d4d;
case 0x580d51:c.instructions+=4;goto B580d51;
case 0x580d58:c.instructions+=3;goto B580d58;
case 0x580d5a:c.instructions+=2;goto B580d5a;
case 0x580d5c:c.instructions+=1;goto B580d5c;
case 0x580d5e:goto L580d5e;
case 0x580d61:c.instructions+=6;goto B580d61;
case 0x580d62:c.instructions+=5;goto B580d62;
case 0x580d66:c.instructions+=4;goto B580d66;
case 0x580d67:c.instructions+=3;goto B580d67;
case 0x580d68:c.instructions+=2;goto B580d68;
case 0x580d69:c.instructions+=1;goto B580d69;
case 0x580d6b:goto L580d6b;
case 0x580d6e:goto L580d6e;
case 0x580d73:c.instructions+=4;goto B580d73;
case 0x580d74:c.instructions+=3;goto B580d74;
case 0x580d77:c.instructions+=2;goto B580d77;
case 0x580d79:c.instructions+=1;goto B580d79;
case 0x580d7b:goto L580d7b;
case 0x580d7c:c.instructions+=5;goto B580d7c;
case 0x580d7d:c.instructions+=4;goto B580d7d;
case 0x580d7e:c.instructions+=3;goto B580d7e;
case 0x580d7f:c.instructions+=2;goto B580d7f;
case 0x580d82:c.instructions+=1;goto B580d82;
case 0x580d90:goto L580d90;
case 0x580d96:c.instructions+=1;goto B580d96;
case 0x580d9b:goto L580d9b;
case 0x580da0:c.instructions+=2;goto B580da0;
case 0x580da2:c.instructions+=1;goto B580da2;
case 0x580da4:goto L580da4;
case 0x580da9:c.instructions+=1;goto B580da9;
case 0x580dae:goto L580dae;
case 0x580db1:c.instructions+=1;goto B580db1;
case 0x580db3:goto L580db3;
case 0x580db8:c.instructions+=2;goto B580db8;
case 0x580dba:c.instructions+=1;goto B580dba;
case 0x580dbc:goto L580dbc;
case 0x580dc1:goto L580dc1;
case 0x580dc6:c.instructions+=4;goto B580dc6;
case 0x580dc7:c.instructions+=3;goto B580dc7;
case 0x580dcb:c.instructions+=2;goto B580dcb;
case 0x580dcc:c.instructions+=1;goto B580dcc;
case 0x580dd1:goto L580dd1;
case 0x580dd5:c.instructions+=3;goto B580dd5;
case 0x580dd7:c.instructions+=2;goto B580dd7;
case 0x580dd8:c.instructions+=1;goto B580dd8;
case 0x580ddd:goto L580ddd;
case 0x580de2:c.instructions+=3;goto B580de2;
case 0x580de5:c.instructions+=2;goto B580de5;
case 0x580de7:c.instructions+=1;goto B580de7;
case 0x580de9:goto L580de9;
case 0x580dee:goto L580dee;
case 0x580df4:c.instructions+=1;goto B580df4;
case 0x580e00:goto L580e00;
case 0x580e02:c.instructions+=2;goto B580e02;
case 0x580e07:c.instructions+=1;goto B580e07;
case 0x580e0c:goto L580e0c;
case 0x580e0f:c.instructions+=2;goto B580e0f;
case 0x580e11:c.instructions+=1;goto B580e11;
case 0x580e13:goto L580e13;
case 0x580e15:c.instructions+=1;goto B580e15;
case 0x580e1a:goto L580e1a;
case 0x580e1e:c.instructions+=4;goto B580e1e;
case 0x580e22:c.instructions+=3;goto B580e22;
case 0x580e23:c.instructions+=2;goto B580e23;
case 0x580e24:c.instructions+=1;goto B580e24;
case 0x580e29:goto L580e29;
case 0x580e2c:c.instructions+=1;goto B580e2c;
case 0x580e31:goto L580e31;
case 0x580e33:c.instructions+=1;goto B580e33;
case 0x580e35:goto L580e35;
case 0x580e3a:goto L580e3a;
case 0x580e3c:goto L580e3c;
case 0x580e41:c.instructions+=2;goto B580e41;
case 0x580e43:c.instructions+=1;goto B580e43;
case 0x580e45:goto L580e45;
case 0x580e4a:goto L580e4a;
case 0x580e4c:goto L580e4c;
case 0x580e51:c.instructions+=2;goto B580e51;
case 0x580e53:c.instructions+=1;goto B580e53;
case 0x580e55:goto L580e55;
case 0x580e5c:goto L580e5c;
case 0x580e66:c.instructions+=1;goto B580e66;
case 0x580e70:goto L580e70;
case 0x580e75:goto L580e75;
case 0x580e7a:goto L580e7a;
case 0x580e7c:c.instructions+=1;goto B580e7c;
case 0x580e81:goto L580e81;
case 0x580e90:goto L580e90;
case 0x580e91:c.instructions+=3;goto B580e91;
case 0x580e95:c.instructions+=2;goto B580e95;
case 0x580e97:c.instructions+=1;goto B580e97;
case 0x580e99:goto L580e99;
case 0x580e9f:c.instructions+=2;goto B580e9f;
case 0x580ea1:c.instructions+=1;goto B580ea1;
case 0x580ea3:goto L580ea3;
case 0x580ea8:goto L580ea8;
case 0x580eae:c.instructions+=2;goto B580eae;
case 0x580eb0:c.instructions+=1;goto B580eb0;
case 0x580eb2:goto L580eb2;
case 0x580eb5:c.instructions+=5;goto B580eb5;
case 0x580eb7:c.instructions+=4;goto B580eb7;
case 0x580eb9:c.instructions+=3;goto B580eb9;
case 0x580ebc:c.instructions+=2;goto B580ebc;
case 0x580ebe:c.instructions+=1;goto B580ebe;
case 0x580ec3:goto L580ec3;
case 0x580ec8:c.instructions+=3;goto B580ec8;
case 0x580ec9:c.instructions+=2;goto B580ec9;
case 0x580eca:c.instructions+=1;goto B580eca;
case 0x580ecf:goto L580ecf;
case 0x580ed2:goto L580ed2;
case 0x580ed3:c.instructions+=1;goto B580ed3;
case 0x580ee0:goto L580ee0;
case 0x580ee5:c.instructions+=1;goto B580ee5;
case 0x580ef0:goto L580ef0;
case 0x580ef1:c.instructions+=4;goto B580ef1;
case 0x580ef3:c.instructions+=3;goto B580ef3;
case 0x580ef8:c.instructions+=2;goto B580ef8;
case 0x580f02:c.instructions+=1;goto B580f02;
case 0x580f07:goto L580f07;
case 0x580f0c:c.instructions+=1;goto B580f0c;
case 0x580f11:goto L580f11;
case 0x580f16:c.instructions+=1;goto B580f16;
case 0x580f1b:goto L580f1b;
case 0x580f20:c.instructions+=1;goto B580f20;
case 0x580f25:goto L580f25;
case 0x580f2a:goto L580f2a;
case 0x580f2f:c.instructions+=2;goto B580f2f;
case 0x580f30:c.instructions+=1;goto B580f30;
case 0x580f35:goto L580f35;
case 0x580f37:c.instructions+=4;goto B580f37;
case 0x580f3a:c.instructions+=3;goto B580f3a;
case 0x580f3c:c.instructions+=2;goto B580f3c;
case 0x580f3d:c.instructions+=1;goto B580f3d;
case 0x580f42:goto L580f42;
case 0x580f45:c.instructions+=2;goto B580f45;
case 0x580f46:c.instructions+=1;goto B580f46;
case 0x580f4b:goto L580f4b;
case 0x580f4e:c.instructions+=2;goto B580f4e;
case 0x580f4f:c.instructions+=1;goto B580f4f;
case 0x580f54:goto L580f54;
case 0x580f56:c.instructions+=6;goto B580f56;
case 0x580f58:c.instructions+=5;goto B580f58;
case 0x580f5a:c.instructions+=4;goto B580f5a;
case 0x580f5c:c.instructions+=3;goto B580f5c;
case 0x580f63:c.instructions+=2;goto B580f63;
case 0x580f6a:c.instructions+=1;goto B580f6a;
case 0x580f6f:goto L580f6f;
case 0x580f75:c.instructions+=4;goto B580f75;
case 0x580f78:c.instructions+=3;goto B580f78;
case 0x580f7a:c.instructions+=2;goto B580f7a;
case 0x580f7c:c.instructions+=1;goto B580f7c;
case 0x580f7e:goto L580f7e;
case 0x580f83:goto L580f83;
case 0x580f84:c.instructions+=1;goto B580f84;
case 0x580f89:goto L580f89;
case 0x580f8c:goto L580f8c;
case 0x580f8e:c.instructions+=2;goto B580f8e;
case 0x580f98:c.instructions+=1;goto B580f98;
case 0x580f9d:goto L580f9d;
case 0x580fa0:c.instructions+=3;goto B580fa0;
case 0x580fa5:c.instructions+=2;goto B580fa5;
case 0x580faa:c.instructions+=1;goto B580faa;
case 0x580faf:goto L580faf;
case 0x580fb4:goto L580fb4;
case 0x580fb5:c.instructions+=1;goto B580fb5;
case 0x580fc0:goto L580fc0;
case 0x580fc3:c.instructions+=6;goto B580fc3;
case 0x580fc4:c.instructions+=5;goto B580fc4;
case 0x580fc6:c.instructions+=4;goto B580fc6;
case 0x580fc9:c.instructions+=3;goto B580fc9;
case 0x580fcb:c.instructions+=2;goto B580fcb;
case 0x580fcc:c.instructions+=1;goto B580fcc;
case 0x580fce:goto L580fce;
case 0x580fcf:c.instructions+=1;goto B580fcf;
case 0x580fd4:goto L580fd4;
case 0x580fd7:c.instructions+=1;goto B580fd7;
case 0x580fde:goto L580fde;
case 0x580fe4:c.instructions+=3;goto B580fe4;
case 0x580fe6:c.instructions+=2;goto B580fe6;
case 0x580fe7:c.instructions+=1;goto B580fe7;
case 0x580fec:goto L580fec;
case 0x580fee:c.instructions+=1;goto B580fee;
case 0x580ff3:goto L580ff3;
case 0x580ff5:goto L580ff5;
case 0x580ff8:c.instructions+=3;goto B580ff8;
case 0x580ff9:c.instructions+=2;goto B580ff9;
case 0x580ffd:c.instructions+=1;goto B580ffd;
default:missing_instruction(c.pc);}
B580004:L580004:{c.instructions+=9;NFSU2_TR(0x580004);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580006:{NFSU2_TR(0x580006);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580008:{NFSU2_TR(0x580008);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58000a:{NFSU2_TR(0x58000a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58000c:{NFSU2_TR(0x58000c);
u8 U[4];
w4(U+0,u32(0x7a0db8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580011:{NFSU2_TR(0x580011);
s1(0x865498,u8(0x1ull));
}
B580018:{NFSU2_TR(0x580018);
s4(0x86549c,u32(0x7a0d98ull));
}
B580022:{NFSU2_TR(0x580022);
s4(0x8654a0,u32(0x0ull));
}
B58002c:{NFSU2_TR(0x58002c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580031ull));
TAIL_STATIC(0x57cef0u,57c);
}
B580031:L580031:{c.instructions+=6;NFSU2_TR(0x580031);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B580034:{NFSU2_TR(0x580034);
__builtin_memmove((R+24),(R+0),4);
}
B580036:{NFSU2_TR(0x580036);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580038:{NFSU2_TR(0x580038);
u8 U[4];
w4(U+0,u32(0x57fda0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58003d:{NFSU2_TR(0x58003d);
__builtin_memmove((R+4),(R+24),4);
}
B58003f:{NFSU2_TR(0x58003f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580044ull));
TAIL_STATIC(0x57bd70u,57b);
}
B580044:L580044:{c.instructions+=5;NFSU2_TR(0x580044);
u8 U[4];
w4(U+0,u32(0x3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580046:{NFSU2_TR(0x580046);
u8 U[4];
w4(U+0,u32(0x7a0d84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58004b:{NFSU2_TR(0x58004b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B58004e:{NFSU2_TR(0x58004e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58004f:{NFSU2_TR(0x58004f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580054ull));
TAIL_STATIC(0x43dc00u,43d);
}
B580054:L580054:{c.instructions+=1;NFSU2_TR(0x580054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580059ull));
TAIL_STATIC(0x50cea0u,50c);
}
B580059:L580059:{c.instructions+=2;NFSU2_TR(0x580059);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58005a:{NFSU2_TR(0x58005a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58005full));
TAIL_STATIC(0x52cf60u,52c);
}
B58005f:L58005f:{c.instructions+=5;NFSU2_TR(0x58005f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B580062:{NFSU2_TR(0x580062);
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
B580064:{NFSU2_TR(0x580064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B580065:{NFSU2_TR(0x580065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B580066:{NFSU2_TR(0x580066);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58007f;}}
}
B580068:L580068:{c.instructions+=1;NFSU2_TR(0x580068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58006dull));
TAIL_STATIC(0x50cea0u,50c);
}
B58006d:L58006d:{c.instructions+=5;NFSU2_TR(0x58006d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58006f:{NFSU2_TR(0x58006f);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580074:{NFSU2_TR(0x580074);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580076:{NFSU2_TR(0x580076);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580077:{NFSU2_TR(0x580077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58007cull));
TAIL_STATIC(0x555f10u,555);
}
B58007c:L58007c:{c.instructions+=1;NFSU2_TR(0x58007c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58007f:L58007f:{c.instructions+=2;NFSU2_TR(0x58007f);
w4(R+4,u32(0x81e810ull));
}
B580084:{NFSU2_TR(0x580084);
TAIL_STATIC(0x41aaf0u,41a);
}
B580090:L580090:{c.instructions+=1;NFSU2_TR(0x580090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580095ull));
TAIL_STATIC(0x4887c0u,488);
}
B580095:L580095:{c.instructions+=1;NFSU2_TR(0x580095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58009aull));
TAIL_STATIC(0x5b9910u,5b9);
}
B58009a:L58009a:{c.instructions+=2;NFSU2_TR(0x58009a);
s4(0x864f8c,u32(0x0ull));
}
B5800a4:{NFSU2_TR(0x5800a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5800a9ull));
TAIL_STATIC(0x60c6a0u,60c);
}
B5800a9:L5800a9:{c.instructions+=1;NFSU2_TR(0x5800a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5800aeull));
TAIL_STATIC(0x4a9310u,4a9);
}
B5800ae:L5800ae:{c.instructions+=1;NFSU2_TR(0x5800ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5800b3ull));
TAIL_STATIC(0x558e80u,558);
}
B5800b3:L5800b3:{c.instructions+=4;NFSU2_TR(0x5800b3);
__builtin_memmove((R+0),gp(0x865480),1);
}
B5800b8:{NFSU2_TR(0x5800b8);
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
B5800ba:{NFSU2_TR(0x5800ba);
s4(0x8654a4,u32(0x3ull));
}
B5800c4:{NFSU2_TR(0x5800c4);
if(r1(R+518)){{goto L5800d3;}}
}
B5800c6:L5800c6:{c.instructions+=3;NFSU2_TR(0x5800c6);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5800cc:{NFSU2_TR(0x5800cc);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5800ce:{NFSU2_TR(0x5800ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5800d3ull));
TAIL_STATIC(0x480c30u,480);
}
B5800d3:L5800d3:{c.instructions+=1;NFSU2_TR(0x5800d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5800d8ull));
TAIL_STATIC(0x5b7b10u,5b7);
}
B5800d8:L5800d8:{c.instructions+=2;NFSU2_TR(0x5800d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5800da:{NFSU2_TR(0x5800da);
if(r1(R+518)){{goto L5800e6;}}
}
B5800dc:L5800dc:{c.instructions+=2;NFSU2_TR(0x5800dc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5800de:{NFSU2_TR(0x5800de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5800e3ull));
TAIL_STATIC(0x5be1e0u,5be);
}
B5800e3:L5800e3:{c.instructions+=1;NFSU2_TR(0x5800e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5800e6:L5800e6:{c.instructions+=3;NFSU2_TR(0x5800e6);
__builtin_memmove((R+0),gp(0x8650f4),4);
}
B5800eb:{NFSU2_TR(0x5800eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5800ed:{NFSU2_TR(0x5800ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5800fb;}}
}
B5800ef:L5800ef:{c.instructions+=2;NFSU2_TR(0x5800ef);
u8 U[8];
__builtin_memmove((U+0),gp(0x865220),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x865220ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5800f9:{NFSU2_TR(0x5800f9);
if(r1(R+518)){{goto L580102;}}
}
B5800fb:L5800fb:{c.instructions+=1;NFSU2_TR(0x5800fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580100ull));
TAIL_STATIC(0x57e800u,57e);
}
B580100:L580100:{c.instructions+=1;NFSU2_TR(0x580100);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5800e6u);}goto L5800e6;}
}
B580102:L580102:{c.instructions+=4;NFSU2_TR(0x580102);
__builtin_memmove((R+0),gp(0x864f9c),4);
}
B580107:{NFSU2_TR(0x580107);
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
B580109:{NFSU2_TR(0x580109);
__builtin_memmove((R+8),(R+0),4);
}
B58010b:{NFSU2_TR(0x58010b);
if(r1(R+518)){{goto L580120;}}
}
B58010d:L58010d:{c.instructions+=6;NFSU2_TR(0x58010d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58010f:{NFSU2_TR(0x58010f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580112:{NFSU2_TR(0x580112);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B580114:{NFSU2_TR(0x580114);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580115:{NFSU2_TR(0x580115);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B580118:{NFSU2_TR(0x580118);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58011dull));
TAIL_STATIC(0x440540u,440);
}
B58011d:L58011d:{c.instructions+=1;NFSU2_TR(0x58011d);
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
B580120:L580120:{c.instructions+=2;NFSU2_TR(0x580120);
s4(0x864f9c,u32(0x0ull));
}
B58012a:{NFSU2_TR(0x58012a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B580130:L580130:{c.instructions+=6;NFSU2_TR(0x580130);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B580135:{NFSU2_TR(0x580135);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B58013b:{NFSU2_TR(0x58013b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58013c:{NFSU2_TR(0x58013c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58013e:{NFSU2_TR(0x58013e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580140:{NFSU2_TR(0x580140);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580146;}}
}
B580142:L580142:{c.instructions+=2;NFSU2_TR(0x580142);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B580144:{NFSU2_TR(0x580144);
{goto L580172;}
}
B580146:L580146:{c.instructions+=3;NFSU2_TR(0x580146);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580148:{NFSU2_TR(0x580148);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58014a:{NFSU2_TR(0x58014a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58014full));
TAIL_STATIC(0x57e2a0u,57e);
}
B58014f:L58014f:{c.instructions+=4;NFSU2_TR(0x58014f);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B580155:{NFSU2_TR(0x580155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B580157:{NFSU2_TR(0x580157);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58015a:{NFSU2_TR(0x58015a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580172;}}
}
B58015c:L58015c:{c.instructions+=2;NFSU2_TR(0x58015c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580162:{NFSU2_TR(0x580162);
if(r1(R+518)){{goto L580172;}}
}
B580164:L580164:{c.instructions+=3;NFSU2_TR(0x580164);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B580166:{NFSU2_TR(0x580166);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B58016c:{NFSU2_TR(0x58016c);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B580172:L580172:{c.instructions+=3;NFSU2_TR(0x580172);
__builtin_memmove(gp(0x864fac),(R+0),4);
}
B580177:{NFSU2_TR(0x580177);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58017d:{NFSU2_TR(0x58017d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580183;}}
}
B58017f:L58017f:{c.instructions+=2;NFSU2_TR(0x58017f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B580181:{NFSU2_TR(0x580181);
{goto L5801af;}
}
B580183:L580183:{c.instructions+=3;NFSU2_TR(0x580183);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580185:{NFSU2_TR(0x580185);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580187:{NFSU2_TR(0x580187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58018cull));
TAIL_STATIC(0x57e2a0u,57e);
}
B58018c:L58018c:{c.instructions+=4;NFSU2_TR(0x58018c);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B580192:{NFSU2_TR(0x580192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B580194:{NFSU2_TR(0x580194);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B580197:{NFSU2_TR(0x580197);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5801af;}}
}
B580199:L580199:{c.instructions+=2;NFSU2_TR(0x580199);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58019f:{NFSU2_TR(0x58019f);
if(r1(R+518)){{goto L5801af;}}
}
B5801a1:L5801a1:{c.instructions+=3;NFSU2_TR(0x5801a1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5801a3:{NFSU2_TR(0x5801a3);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B5801a9:{NFSU2_TR(0x5801a9);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B5801af:L5801af:{c.instructions+=3;NFSU2_TR(0x5801af);
__builtin_memmove(gp(0x7faa18),(R+0),4);
}
B5801b4:{NFSU2_TR(0x5801b4);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5801ba:{NFSU2_TR(0x5801ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5801c0;}}
}
B5801bc:L5801bc:{c.instructions+=2;NFSU2_TR(0x5801bc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5801be:{NFSU2_TR(0x5801be);
{goto L5801ec;}
}
B5801c0:L5801c0:{c.instructions+=3;NFSU2_TR(0x5801c0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5801c2:{NFSU2_TR(0x5801c2);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5801c4:{NFSU2_TR(0x5801c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5801c9ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B5801c9:L5801c9:{c.instructions+=4;NFSU2_TR(0x5801c9);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B5801cf:{NFSU2_TR(0x5801cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5801d1:{NFSU2_TR(0x5801d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5801d4:{NFSU2_TR(0x5801d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5801ec;}}
}
B5801d6:L5801d6:{c.instructions+=2;NFSU2_TR(0x5801d6);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5801dc:{NFSU2_TR(0x5801dc);
if(r1(R+518)){{goto L5801ec;}}
}
B5801de:L5801de:{c.instructions+=3;NFSU2_TR(0x5801de);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5801e0:{NFSU2_TR(0x5801e0);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B5801e6:{NFSU2_TR(0x5801e6);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B5801ec:L5801ec:{c.instructions+=3;NFSU2_TR(0x5801ec);
__builtin_memmove(gp(0x7faa1c),(R+0),4);
}
B5801f1:{NFSU2_TR(0x5801f1);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5801f7:{NFSU2_TR(0x5801f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5801fd;}}
}
B5801f9:L5801f9:{c.instructions+=2;NFSU2_TR(0x5801f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5801fb:{NFSU2_TR(0x5801fb);
{goto L580229;}
}
B5801fd:L5801fd:{c.instructions+=3;NFSU2_TR(0x5801fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5801ff:{NFSU2_TR(0x5801ff);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580201:{NFSU2_TR(0x580201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580206ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B580206:L580206:{c.instructions+=4;NFSU2_TR(0x580206);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B58020c:{NFSU2_TR(0x58020c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B58020e:{NFSU2_TR(0x58020e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B580211:{NFSU2_TR(0x580211);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580229;}}
}
B580213:L580213:{c.instructions+=2;NFSU2_TR(0x580213);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580219:{NFSU2_TR(0x580219);
if(r1(R+518)){{goto L580229;}}
}
B58021b:L58021b:{c.instructions+=3;NFSU2_TR(0x58021b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58021d:{NFSU2_TR(0x58021d);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B580223:{NFSU2_TR(0x580223);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B580229:L580229:{c.instructions+=3;NFSU2_TR(0x580229);
__builtin_memmove(gp(0x864fb0),(R+0),4);
}
B58022e:{NFSU2_TR(0x58022e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580234:{NFSU2_TR(0x580234);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58023a;}}
}
B580236:L580236:{c.instructions+=2;NFSU2_TR(0x580236);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B580238:{NFSU2_TR(0x580238);
{goto L580266;}
}
B58023a:L58023a:{c.instructions+=3;NFSU2_TR(0x58023a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58023c:{NFSU2_TR(0x58023c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58023e:{NFSU2_TR(0x58023e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580243ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B580243:L580243:{c.instructions+=4;NFSU2_TR(0x580243);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B580249:{NFSU2_TR(0x580249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B58024b:{NFSU2_TR(0x58024b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58024e:{NFSU2_TR(0x58024e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580266;}}
}
B580250:L580250:{c.instructions+=2;NFSU2_TR(0x580250);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580256:{NFSU2_TR(0x580256);
if(r1(R+518)){{goto L580266;}}
}
B580258:L580258:{c.instructions+=3;NFSU2_TR(0x580258);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58025a:{NFSU2_TR(0x58025a);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B580260:{NFSU2_TR(0x580260);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B580266:L580266:{c.instructions+=3;NFSU2_TR(0x580266);
__builtin_memmove(gp(0x7faa20),(R+0),4);
}
B58026b:{NFSU2_TR(0x58026b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580271:{NFSU2_TR(0x580271);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580277;}}
}
B580273:L580273:{c.instructions+=2;NFSU2_TR(0x580273);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B580275:{NFSU2_TR(0x580275);
{goto L5802a3;}
}
B580277:L580277:{c.instructions+=3;NFSU2_TR(0x580277);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580279:{NFSU2_TR(0x580279);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58027b:{NFSU2_TR(0x58027b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580280ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B580280:L580280:{c.instructions+=4;NFSU2_TR(0x580280);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B580286:{NFSU2_TR(0x580286);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B580288:{NFSU2_TR(0x580288);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58028b:{NFSU2_TR(0x58028b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5802a3;}}
}
B58028d:L58028d:{c.instructions+=2;NFSU2_TR(0x58028d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580293:{NFSU2_TR(0x580293);
if(r1(R+518)){{goto L5802a3;}}
}
B580295:L580295:{c.instructions+=3;NFSU2_TR(0x580295);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B580297:{NFSU2_TR(0x580297);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B58029d:{NFSU2_TR(0x58029d);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B5802a3:L5802a3:{c.instructions+=3;NFSU2_TR(0x5802a3);
__builtin_memmove(gp(0x864fb4),(R+0),4);
}
B5802a8:{NFSU2_TR(0x5802a8);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5802ae:{NFSU2_TR(0x5802ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5802b4;}}
}
B5802b0:L5802b0:{c.instructions+=2;NFSU2_TR(0x5802b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5802b2:{NFSU2_TR(0x5802b2);
{goto L5802e0;}
}
B5802b4:L5802b4:{c.instructions+=3;NFSU2_TR(0x5802b4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5802b6:{NFSU2_TR(0x5802b6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5802b8:{NFSU2_TR(0x5802b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5802bdull));
TAIL_STATIC(0x57e2a0u,57e);
}
B5802bd:L5802bd:{c.instructions+=4;NFSU2_TR(0x5802bd);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B5802c3:{NFSU2_TR(0x5802c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5802c5:{NFSU2_TR(0x5802c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5802c8:{NFSU2_TR(0x5802c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5802e0;}}
}
B5802ca:L5802ca:{c.instructions+=2;NFSU2_TR(0x5802ca);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5802d0:{NFSU2_TR(0x5802d0);
if(r1(R+518)){{goto L5802e0;}}
}
B5802d2:L5802d2:{c.instructions+=3;NFSU2_TR(0x5802d2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5802d4:{NFSU2_TR(0x5802d4);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B5802da:{NFSU2_TR(0x5802da);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B5802e0:L5802e0:{c.instructions+=3;NFSU2_TR(0x5802e0);
__builtin_memmove(gp(0x7faa28),(R+0),4);
}
B5802e5:{NFSU2_TR(0x5802e5);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5802eb:{NFSU2_TR(0x5802eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5802f1;}}
}
B5802ed:L5802ed:{c.instructions+=2;NFSU2_TR(0x5802ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5802ef:{NFSU2_TR(0x5802ef);
{goto L58031d;}
}
B5802f1:L5802f1:{c.instructions+=3;NFSU2_TR(0x5802f1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5802f3:{NFSU2_TR(0x5802f3);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5802f5:{NFSU2_TR(0x5802f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5802faull));
TAIL_STATIC(0x57e2a0u,57e);
}
B5802fa:L5802fa:{c.instructions+=4;NFSU2_TR(0x5802fa);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B580300:{NFSU2_TR(0x580300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B580302:{NFSU2_TR(0x580302);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B580305:{NFSU2_TR(0x580305);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58031d;}}
}
B580307:L580307:{c.instructions+=2;NFSU2_TR(0x580307);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58030d:{NFSU2_TR(0x58030d);
if(r1(R+518)){{goto L58031d;}}
}
B58030f:L58030f:{c.instructions+=3;NFSU2_TR(0x58030f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B580311:{NFSU2_TR(0x580311);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B580317:{NFSU2_TR(0x580317);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B58031d:L58031d:{c.instructions+=3;NFSU2_TR(0x58031d);
__builtin_memmove(gp(0x864fbc),(R+0),4);
}
B580322:{NFSU2_TR(0x580322);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580328:{NFSU2_TR(0x580328);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58032e;}}
}
B58032a:L58032a:{c.instructions+=2;NFSU2_TR(0x58032a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58032c:{NFSU2_TR(0x58032c);
{goto L58035a;}
}
B58032e:L58032e:{c.instructions+=3;NFSU2_TR(0x58032e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580330:{NFSU2_TR(0x580330);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580332:{NFSU2_TR(0x580332);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580337ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B580337:L580337:{c.instructions+=4;NFSU2_TR(0x580337);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B58033d:{NFSU2_TR(0x58033d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B58033f:{NFSU2_TR(0x58033f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B580342:{NFSU2_TR(0x580342);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58035a;}}
}
B580344:L580344:{c.instructions+=2;NFSU2_TR(0x580344);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58034a:{NFSU2_TR(0x58034a);
if(r1(R+518)){{goto L58035a;}}
}
B58034c:L58034c:{c.instructions+=3;NFSU2_TR(0x58034c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58034e:{NFSU2_TR(0x58034e);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B580354:{NFSU2_TR(0x580354);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B58035a:L58035a:{c.instructions+=3;NFSU2_TR(0x58035a);
__builtin_memmove(gp(0x7faa30),(R+0),4);
}
B58035f:{NFSU2_TR(0x58035f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580365:{NFSU2_TR(0x580365);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58036b;}}
}
B580367:L580367:{c.instructions+=2;NFSU2_TR(0x580367);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B580369:{NFSU2_TR(0x580369);
{goto L580397;}
}
B58036b:L58036b:{c.instructions+=3;NFSU2_TR(0x58036b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58036d:{NFSU2_TR(0x58036d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58036f:{NFSU2_TR(0x58036f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580374ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B580374:L580374:{c.instructions+=4;NFSU2_TR(0x580374);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B58037a:{NFSU2_TR(0x58037a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B58037c:{NFSU2_TR(0x58037c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58037f:{NFSU2_TR(0x58037f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580397;}}
}
B580381:L580381:{c.instructions+=2;NFSU2_TR(0x580381);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580387:{NFSU2_TR(0x580387);
if(r1(R+518)){{goto L580397;}}
}
B580389:L580389:{c.instructions+=3;NFSU2_TR(0x580389);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58038b:{NFSU2_TR(0x58038b);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B580391:{NFSU2_TR(0x580391);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B580397:L580397:{c.instructions+=3;NFSU2_TR(0x580397);
__builtin_memmove(gp(0x7faa34),(R+0),4);
}
B58039c:{NFSU2_TR(0x58039c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5803a2:{NFSU2_TR(0x5803a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5803a8;}}
}
B5803a4:L5803a4:{c.instructions+=2;NFSU2_TR(0x5803a4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5803a6:{NFSU2_TR(0x5803a6);
{goto L5803d4;}
}
B5803a8:L5803a8:{c.instructions+=3;NFSU2_TR(0x5803a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5803aa:{NFSU2_TR(0x5803aa);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5803ac:{NFSU2_TR(0x5803ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5803b1ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B5803b1:L5803b1:{c.instructions+=4;NFSU2_TR(0x5803b1);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B5803b7:{NFSU2_TR(0x5803b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5803b9:{NFSU2_TR(0x5803b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5803bc:{NFSU2_TR(0x5803bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5803d4;}}
}
B5803be:L5803be:{c.instructions+=2;NFSU2_TR(0x5803be);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5803c4:{NFSU2_TR(0x5803c4);
if(r1(R+518)){{goto L5803d4;}}
}
B5803c6:L5803c6:{c.instructions+=3;NFSU2_TR(0x5803c6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5803c8:{NFSU2_TR(0x5803c8);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B5803ce:{NFSU2_TR(0x5803ce);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B5803d4:L5803d4:{c.instructions+=3;NFSU2_TR(0x5803d4);
__builtin_memmove(gp(0x7faa38),(R+0),4);
}
B5803d9:{NFSU2_TR(0x5803d9);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5803df:{NFSU2_TR(0x5803df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5803e5;}}
}
B5803e1:L5803e1:{c.instructions+=2;NFSU2_TR(0x5803e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5803e3:{NFSU2_TR(0x5803e3);
{goto L580411;}
}
B5803e5:L5803e5:{c.instructions+=3;NFSU2_TR(0x5803e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5803e7:{NFSU2_TR(0x5803e7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5803e9:{NFSU2_TR(0x5803e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5803eeull));
TAIL_STATIC(0x57e2a0u,57e);
}
B5803ee:L5803ee:{c.instructions+=4;NFSU2_TR(0x5803ee);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B5803f4:{NFSU2_TR(0x5803f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5803f6:{NFSU2_TR(0x5803f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5803f9:{NFSU2_TR(0x5803f9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580411;}}
}
B5803fb:L5803fb:{c.instructions+=2;NFSU2_TR(0x5803fb);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580401:{NFSU2_TR(0x580401);
if(r1(R+518)){{goto L580411;}}
}
B580403:L580403:{c.instructions+=3;NFSU2_TR(0x580403);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B580405:{NFSU2_TR(0x580405);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B58040b:{NFSU2_TR(0x58040b);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B580411:L580411:{c.instructions+=3;NFSU2_TR(0x580411);
__builtin_memmove(gp(0x7faa48),(R+0),4);
}
B580416:{NFSU2_TR(0x580416);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58041c:{NFSU2_TR(0x58041c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580422;}}
}
B58041e:L58041e:{c.instructions+=2;NFSU2_TR(0x58041e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B580420:{NFSU2_TR(0x580420);
{goto L58044e;}
}
B580422:L580422:{c.instructions+=3;NFSU2_TR(0x580422);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580424:{NFSU2_TR(0x580424);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580426:{NFSU2_TR(0x580426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58042bull));
TAIL_STATIC(0x57e2a0u,57e);
}
B58042b:L58042b:{c.instructions+=4;NFSU2_TR(0x58042b);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B580431:{NFSU2_TR(0x580431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B580433:{NFSU2_TR(0x580433);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B580436:{NFSU2_TR(0x580436);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58044e;}}
}
B580438:L580438:{c.instructions+=2;NFSU2_TR(0x580438);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58043e:{NFSU2_TR(0x58043e);
if(r1(R+518)){{goto L58044e;}}
}
B580440:L580440:{c.instructions+=3;NFSU2_TR(0x580440);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B580442:{NFSU2_TR(0x580442);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B580448:{NFSU2_TR(0x580448);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B58044e:L58044e:{c.instructions+=3;NFSU2_TR(0x58044e);
__builtin_memmove(gp(0x7faa4c),(R+0),4);
}
B580453:{NFSU2_TR(0x580453);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580459:{NFSU2_TR(0x580459);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58045f;}}
}
B58045b:L58045b:{c.instructions+=2;NFSU2_TR(0x58045b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58045d:{NFSU2_TR(0x58045d);
{goto L58048b;}
}
B58045f:L58045f:{c.instructions+=3;NFSU2_TR(0x58045f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580461:{NFSU2_TR(0x580461);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580463:{NFSU2_TR(0x580463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580468ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B580468:L580468:{c.instructions+=4;NFSU2_TR(0x580468);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B58046e:{NFSU2_TR(0x58046e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B580470:{NFSU2_TR(0x580470);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B580473:{NFSU2_TR(0x580473);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58048b;}}
}
B580475:L580475:{c.instructions+=2;NFSU2_TR(0x580475);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58047b:{NFSU2_TR(0x58047b);
if(r1(R+518)){{goto L58048b;}}
}
B58047d:L58047d:{c.instructions+=3;NFSU2_TR(0x58047d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58047f:{NFSU2_TR(0x58047f);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B580485:{NFSU2_TR(0x580485);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B58048b:L58048b:{c.instructions+=3;NFSU2_TR(0x58048b);
__builtin_memmove(gp(0x7faa54),(R+0),4);
}
B580490:{NFSU2_TR(0x580490);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580496:{NFSU2_TR(0x580496);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58049c;}}
}
B580498:L580498:{c.instructions+=2;NFSU2_TR(0x580498);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58049a:{NFSU2_TR(0x58049a);
{goto L5804c8;}
}
B58049c:L58049c:{c.instructions+=3;NFSU2_TR(0x58049c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58049e:{NFSU2_TR(0x58049e);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5804a0:{NFSU2_TR(0x5804a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5804a5ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B5804a5:L5804a5:{c.instructions+=4;NFSU2_TR(0x5804a5);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B5804ab:{NFSU2_TR(0x5804ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5804ad:{NFSU2_TR(0x5804ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5804b0:{NFSU2_TR(0x5804b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5804c8;}}
}
B5804b2:L5804b2:{c.instructions+=2;NFSU2_TR(0x5804b2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5804b8:{NFSU2_TR(0x5804b8);
if(r1(R+518)){{goto L5804c8;}}
}
B5804ba:L5804ba:{c.instructions+=3;NFSU2_TR(0x5804ba);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5804bc:{NFSU2_TR(0x5804bc);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B5804c2:{NFSU2_TR(0x5804c2);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B5804c8:L5804c8:{c.instructions+=3;NFSU2_TR(0x5804c8);
__builtin_memmove(gp(0x7faa58),(R+0),4);
}
B5804cd:{NFSU2_TR(0x5804cd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5804d3:{NFSU2_TR(0x5804d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5804d9;}}
}
B5804d5:L5804d5:{c.instructions+=2;NFSU2_TR(0x5804d5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5804d7:{NFSU2_TR(0x5804d7);
{goto L580505;}
}
B5804d9:L5804d9:{c.instructions+=3;NFSU2_TR(0x5804d9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5804db:{NFSU2_TR(0x5804db);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5804dd:{NFSU2_TR(0x5804dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5804e2ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B5804e2:L5804e2:{c.instructions+=4;NFSU2_TR(0x5804e2);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B5804e8:{NFSU2_TR(0x5804e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5804ea:{NFSU2_TR(0x5804ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5804ed:{NFSU2_TR(0x5804ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580505;}}
}
B5804ef:L5804ef:{c.instructions+=2;NFSU2_TR(0x5804ef);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5804f5:{NFSU2_TR(0x5804f5);
if(r1(R+518)){{goto L580505;}}
}
B5804f7:L5804f7:{c.instructions+=3;NFSU2_TR(0x5804f7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5804f9:{NFSU2_TR(0x5804f9);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B5804ff:{NFSU2_TR(0x5804ff);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B580505:L580505:{c.instructions+=3;NFSU2_TR(0x580505);
__builtin_memmove(gp(0x864ff4),(R+0),4);
}
B58050a:{NFSU2_TR(0x58050a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580510:{NFSU2_TR(0x580510);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580516;}}
}
B580512:L580512:{c.instructions+=2;NFSU2_TR(0x580512);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B580514:{NFSU2_TR(0x580514);
{goto L580542;}
}
B580516:L580516:{c.instructions+=3;NFSU2_TR(0x580516);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580518:{NFSU2_TR(0x580518);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58051a:{NFSU2_TR(0x58051a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58051full));
TAIL_STATIC(0x57e2a0u,57e);
}
B58051f:L58051f:{c.instructions+=4;NFSU2_TR(0x58051f);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B580525:{NFSU2_TR(0x580525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B580527:{NFSU2_TR(0x580527);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58052a:{NFSU2_TR(0x58052a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580542;}}
}
B58052c:L58052c:{c.instructions+=2;NFSU2_TR(0x58052c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580532:{NFSU2_TR(0x580532);
if(r1(R+518)){{goto L580542;}}
}
B580534:L580534:{c.instructions+=3;NFSU2_TR(0x580534);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B580536:{NFSU2_TR(0x580536);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B58053c:{NFSU2_TR(0x58053c);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B580542:L580542:{c.instructions+=3;NFSU2_TR(0x580542);
__builtin_memmove(gp(0x7faa5c),(R+0),4);
}
B580547:{NFSU2_TR(0x580547);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58054d:{NFSU2_TR(0x58054d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580553;}}
}
B58054f:L58054f:{c.instructions+=2;NFSU2_TR(0x58054f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B580551:{NFSU2_TR(0x580551);
{goto L58057f;}
}
B580553:L580553:{c.instructions+=3;NFSU2_TR(0x580553);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580555:{NFSU2_TR(0x580555);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580557:{NFSU2_TR(0x580557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58055cull));
TAIL_STATIC(0x57e2a0u,57e);
}
B58055c:L58055c:{c.instructions+=4;NFSU2_TR(0x58055c);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B580562:{NFSU2_TR(0x580562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B580564:{NFSU2_TR(0x580564);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B580567:{NFSU2_TR(0x580567);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58057f;}}
}
B580569:L580569:{c.instructions+=2;NFSU2_TR(0x580569);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58056f:{NFSU2_TR(0x58056f);
if(r1(R+518)){{goto L58057f;}}
}
B580571:L580571:{c.instructions+=3;NFSU2_TR(0x580571);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B580573:{NFSU2_TR(0x580573);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B580579:{NFSU2_TR(0x580579);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B58057f:L58057f:{c.instructions+=3;NFSU2_TR(0x58057f);
__builtin_memmove(gp(0x865050),(R+0),4);
}
B580584:{NFSU2_TR(0x580584);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58058a:{NFSU2_TR(0x58058a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580590;}}
}
B58058c:L58058c:{c.instructions+=2;NFSU2_TR(0x58058c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58058e:{NFSU2_TR(0x58058e);
{goto L5805bc;}
}
B580590:L580590:{c.instructions+=3;NFSU2_TR(0x580590);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580592:{NFSU2_TR(0x580592);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580594:{NFSU2_TR(0x580594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580599ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B580599:L580599:{c.instructions+=4;NFSU2_TR(0x580599);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B58059f:{NFSU2_TR(0x58059f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5805a1:{NFSU2_TR(0x5805a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5805a4:{NFSU2_TR(0x5805a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5805bc;}}
}
B5805a6:L5805a6:{c.instructions+=2;NFSU2_TR(0x5805a6);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5805ac:{NFSU2_TR(0x5805ac);
if(r1(R+518)){{goto L5805bc;}}
}
B5805ae:L5805ae:{c.instructions+=3;NFSU2_TR(0x5805ae);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5805b0:{NFSU2_TR(0x5805b0);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B5805b6:{NFSU2_TR(0x5805b6);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B5805bc:L5805bc:{c.instructions+=3;NFSU2_TR(0x5805bc);
__builtin_memmove(gp(0x865098),(R+0),4);
}
B5805c1:{NFSU2_TR(0x5805c1);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5805c7:{NFSU2_TR(0x5805c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5805cd;}}
}
B5805c9:L5805c9:{c.instructions+=2;NFSU2_TR(0x5805c9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5805cb:{NFSU2_TR(0x5805cb);
{goto L5805f9;}
}
B5805cd:L5805cd:{c.instructions+=3;NFSU2_TR(0x5805cd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5805cf:{NFSU2_TR(0x5805cf);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5805d1:{NFSU2_TR(0x5805d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5805d6ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B5805d6:L5805d6:{c.instructions+=4;NFSU2_TR(0x5805d6);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B5805dc:{NFSU2_TR(0x5805dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5805de:{NFSU2_TR(0x5805de);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5805e1:{NFSU2_TR(0x5805e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5805f9;}}
}
B5805e3:L5805e3:{c.instructions+=2;NFSU2_TR(0x5805e3);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5805e9:{NFSU2_TR(0x5805e9);
if(r1(R+518)){{goto L5805f9;}}
}
B5805eb:L5805eb:{c.instructions+=3;NFSU2_TR(0x5805eb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5805ed:{NFSU2_TR(0x5805ed);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B5805f3:{NFSU2_TR(0x5805f3);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B5805f9:L5805f9:{c.instructions+=3;NFSU2_TR(0x5805f9);
__builtin_memmove(gp(0x7faaa8),(R+0),4);
}
B5805fe:{NFSU2_TR(0x5805fe);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580604:{NFSU2_TR(0x580604);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58060a;}}
}
B580606:L580606:{c.instructions+=2;NFSU2_TR(0x580606);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B580608:{NFSU2_TR(0x580608);
{goto L580636;}
}
B58060a:L58060a:{c.instructions+=3;NFSU2_TR(0x58060a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58060c:{NFSU2_TR(0x58060c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58060e:{NFSU2_TR(0x58060e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580613ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B580613:L580613:{c.instructions+=4;NFSU2_TR(0x580613);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B580619:{NFSU2_TR(0x580619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B58061b:{NFSU2_TR(0x58061b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58061e:{NFSU2_TR(0x58061e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580636;}}
}
B580620:L580620:{c.instructions+=2;NFSU2_TR(0x580620);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580626:{NFSU2_TR(0x580626);
if(r1(R+518)){{goto L580636;}}
}
B580628:L580628:{c.instructions+=3;NFSU2_TR(0x580628);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58062a:{NFSU2_TR(0x58062a);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B580630:{NFSU2_TR(0x580630);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B580636:L580636:{c.instructions+=3;NFSU2_TR(0x580636);
__builtin_memmove(gp(0x7faab0),(R+0),4);
}
B58063b:{NFSU2_TR(0x58063b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580641:{NFSU2_TR(0x580641);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580647;}}
}
B580643:L580643:{c.instructions+=2;NFSU2_TR(0x580643);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B580645:{NFSU2_TR(0x580645);
{goto L580673;}
}
B580647:L580647:{c.instructions+=3;NFSU2_TR(0x580647);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580649:{NFSU2_TR(0x580649);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58064b:{NFSU2_TR(0x58064b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580650ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B580650:L580650:{c.instructions+=4;NFSU2_TR(0x580650);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B580656:{NFSU2_TR(0x580656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B580658:{NFSU2_TR(0x580658);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58065b:{NFSU2_TR(0x58065b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580673;}}
}
B58065d:L58065d:{c.instructions+=2;NFSU2_TR(0x58065d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580663:{NFSU2_TR(0x580663);
if(r1(R+518)){{goto L580673;}}
}
B580665:L580665:{c.instructions+=3;NFSU2_TR(0x580665);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B580667:{NFSU2_TR(0x580667);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B58066d:{NFSU2_TR(0x58066d);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B580673:L580673:{c.instructions+=3;NFSU2_TR(0x580673);
__builtin_memmove(gp(0x8650a8),(R+0),4);
}
B580678:{NFSU2_TR(0x580678);
u8 U[14];
__builtin_memmove((U+6),gp(0x8650d0),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58067e:{NFSU2_TR(0x58067e);
if(r1(R+518)){{goto L5806a9;}}
}
B580680:L580680:{c.instructions+=3;NFSU2_TR(0x580680);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580682:{NFSU2_TR(0x580682);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580684:{NFSU2_TR(0x580684);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580689ull));
TAIL_STATIC(0x57e2a0u,57e);
}
B580689:L580689:{c.instructions+=4;NFSU2_TR(0x580689);
__builtin_memmove((R+0),gp(0x8650d8),4);
}
B58068e:{NFSU2_TR(0x58068e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B580690:{NFSU2_TR(0x580690);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B580693:{NFSU2_TR(0x580693);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5806a9;}}
}
B580695:L580695:{c.instructions+=2;NFSU2_TR(0x580695);
u8 U[14];
__builtin_memmove((U+6),gp(0x8650d0),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58069b:{NFSU2_TR(0x58069b);
if(r1(R+518)){{goto L5806a9;}}
}
B58069d:L58069d:{c.instructions+=2;NFSU2_TR(0x58069d);
__builtin_memmove(gp(0x8650d8),(R+24),4);
}
B5806a3:{NFSU2_TR(0x5806a3);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B5806a9:L5806a9:{c.instructions+=2;NFSU2_TR(0x5806a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5806aa:{NFSU2_TR(0x5806aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5806b0:L5806b0:{c.instructions+=5;NFSU2_TR(0x5806b0);
__builtin_memmove((R+0),gp(0x7fb720),4);
}
B5806b5:{NFSU2_TR(0x5806b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5806b6:{NFSU2_TR(0x5806b6);
__builtin_memmove((R+24),(R+4),4);
}
B5806b8:{NFSU2_TR(0x5806b8);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5806bb:{NFSU2_TR(0x5806bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580874;}}
}
B5806c1:L5806c1:{c.instructions+=5;NFSU2_TR(0x5806c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x12cull))));
}
B5806c6:{NFSU2_TR(0x5806c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5806c9:{NFSU2_TR(0x5806c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5806cf:{NFSU2_TR(0x5806cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5806d1:{NFSU2_TR(0x5806d1);
if(r1(R+518)){{goto L580850;}}
}
B5806d7:L5806d7:{c.instructions+=2;NFSU2_TR(0x5806d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5806dd:{NFSU2_TR(0x5806dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580850;}}
}
B5806e3:L5806e3:{c.instructions+=7;NFSU2_TR(0x5806e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5806e4:{NFSU2_TR(0x5806e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5806e5:{NFSU2_TR(0x5806e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5806e6:{NFSU2_TR(0x5806e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5806e8:{NFSU2_TR(0x5806e8);
u8 U[4];
w4(U+0,u32(0x79545cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5806ed:{NFSU2_TR(0x5806ed);
__builtin_memmove((R+4),(R+24),4);
}
B5806ef:{NFSU2_TR(0x5806ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5806f4ull));
TAIL_STATIC(0x578fd0u,578);
}
B5806f4:L5806f4:{c.instructions+=6;NFSU2_TR(0x5806f4);
__builtin_memmove((R+20),(R+0),4);
}
B5806f6:{NFSU2_TR(0x5806f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5806fc:{NFSU2_TR(0x5806fc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5806fe:{NFSU2_TR(0x5806fe);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B580700:{NFSU2_TR(0x580700);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580702:{NFSU2_TR(0x580702);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L580753;}}
}
B580704:L580704:{c.instructions+=2;NFSU2_TR(0x580704);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58070a:{NFSU2_TR(0x58070a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L580742;}}
}
B58070c:L58070c:{c.instructions+=4;NFSU2_TR(0x58070c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58070d:{NFSU2_TR(0x58070d);
u8 U[4];
w4(U+0,u32(0x7a097cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580712:{NFSU2_TR(0x580712);
__builtin_memmove((R+4),(R+24),4);
}
B580714:{NFSU2_TR(0x580714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580719ull));
TAIL_STATIC(0x578fd0u,578);
}
B580719:L580719:{c.instructions+=5;NFSU2_TR(0x580719);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58071c:{NFSU2_TR(0x58071c);
__builtin_memmove((R+4),(R+0),4);
}
B58071e:{NFSU2_TR(0x58071e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580721:{NFSU2_TR(0x580721);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580723:{NFSU2_TR(0x580723);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L580751;}}
}
B580725:L580725:{c.instructions+=2;NFSU2_TR(0x580725);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580727:{NFSU2_TR(0x580727);
if(r1(R+518)){{goto L58073e;}}
}
B580729:L580729:{c.instructions+=6;NFSU2_TR(0x580729);
{u32 ea_=u32(r4(R+4)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58072f:{NFSU2_TR(0x58072f);
{u32 ea_=u32(r4(R+28)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B580735:{NFSU2_TR(0x580735);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B580737:{NFSU2_TR(0x580737);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B580739:{NFSU2_TR(0x580739);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58073c:{NFSU2_TR(0x58073c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580744;}}
}
B58073e:L58073e:{c.instructions+=2;NFSU2_TR(0x58073e);
__builtin_memmove((R+28),(R+4),4);
}
B580740:{NFSU2_TR(0x580740);
{goto L580744;}
}
B580742:L580742:{c.instructions+=1;NFSU2_TR(0x580742);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B580744:L580744:{c.instructions+=4;NFSU2_TR(0x580744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58074a:{NFSU2_TR(0x58074a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B58074b:{NFSU2_TR(0x58074b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58074d:{NFSU2_TR(0x58074d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580704u);}goto L580704;}}
}
B58074f:L58074f:{c.instructions+=1;NFSU2_TR(0x58074f);
{goto L580753;}
}
B580751:L580751:{c.instructions+=1;NFSU2_TR(0x580751);
__builtin_memmove((R+28),(R+4),4);
}
B580753:L580753:{c.instructions+=5;NFSU2_TR(0x580753);
{u32 ea_=u32(r4(R+20)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B580759:{NFSU2_TR(0x580759);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B58075f:{NFSU2_TR(0x58075f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B580761:{NFSU2_TR(0x580761);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B580764:{NFSU2_TR(0x580764);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580815;}}
}
B58076a:L58076a:{c.instructions+=3;NFSU2_TR(0x58076a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580770:{NFSU2_TR(0x580770);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580772:{NFSU2_TR(0x580772);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L580815;}}
}
B580778:L580778:{c.instructions+=2;NFSU2_TR(0x580778);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58077a:{NFSU2_TR(0x58077a);
if(r1(R+518)){{goto L580793;}}
}
B58077c:L58077c:{c.instructions+=5;NFSU2_TR(0x58077c);
{u32 ea_=u32(r4(R+28)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B580782:{NFSU2_TR(0x580782);
{u32 ea_=u32(r4(R+20)+u32(472u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B580788:{NFSU2_TR(0x580788);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58078a:{NFSU2_TR(0x58078a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B58078d:{NFSU2_TR(0x58078d);
if(r1(R+514)){{goto L580815;}}
}
B580793:L580793:{c.instructions+=2;NFSU2_TR(0x580793);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B580799:{NFSU2_TR(0x580799);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5807bd;}}
}
B58079b:L58079b:{c.instructions+=11;NFSU2_TR(0x58079b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58079d:{NFSU2_TR(0x58079d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5807a0:{NFSU2_TR(0x5807a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5807a2:{NFSU2_TR(0x5807a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5807a5:{NFSU2_TR(0x5807a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5807ab:{NFSU2_TR(0x5807ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5807b1:{NFSU2_TR(0x5807b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5807b3:{NFSU2_TR(0x5807b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5807b6:{NFSU2_TR(0x5807b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5807b9:{NFSU2_TR(0x5807b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5807bb:{NFSU2_TR(0x5807bb);
{goto L5807d1;}
}
B5807bd:L5807bd:{c.instructions+=2;NFSU2_TR(0x5807bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5807bf:{NFSU2_TR(0x5807bf);
if(r1(R+518)){{goto L5807d7;}}
}
B5807c1:L5807c1:{c.instructions+=3;NFSU2_TR(0x5807c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5807c4:{NFSU2_TR(0x5807c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5807c7:{NFSU2_TR(0x5807c7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5807d7;}}
}
B5807c9:L5807c9:{c.instructions+=3;NFSU2_TR(0x5807c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5807ca:{NFSU2_TR(0x5807ca);
__builtin_memmove((R+4),(R+24),4);
}
B5807cc:{NFSU2_TR(0x5807cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5807d1ull));
TAIL_STATIC(0x579050u,579);
}
B5807d1:L5807d1:{c.instructions+=1;NFSU2_TR(0x5807d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5807d7:L5807d7:{c.instructions+=4;NFSU2_TR(0x5807d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5807da:{NFSU2_TR(0x5807da);
u8 U[4];
w4(U+0,u32(0x7a097cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5807df:{NFSU2_TR(0x5807df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5807e0:{NFSU2_TR(0x5807e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5807e5ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5807e5:L5807e5:{c.instructions+=12;NFSU2_TR(0x5807e5);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5807eb:{NFSU2_TR(0x5807eb);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B5807f0:{NFSU2_TR(0x5807f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5807f3:{NFSU2_TR(0x5807f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5807f6:{NFSU2_TR(0x5807f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5807fc:{NFSU2_TR(0x5807fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580802:{NFSU2_TR(0x580802);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B580805:{NFSU2_TR(0x580805);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B580806:{NFSU2_TR(0x580806);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B580807:{NFSU2_TR(0x580807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58080d:{NFSU2_TR(0x58080d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B580813:{NFSU2_TR(0x580813);
{goto L58084d;}
}
B580815:L580815:{c.instructions+=4;NFSU2_TR(0x580815);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580817:{NFSU2_TR(0x580817);
u8 U[4];
w4(U+0,u32(0x79545cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58081c:{NFSU2_TR(0x58081c);
__builtin_memmove((R+4),(R+24),4);
}
B58081e:{NFSU2_TR(0x58081e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580823ull));
TAIL_STATIC(0x578fd0u,578);
}
B580823:L580823:{c.instructions+=2;NFSU2_TR(0x580823);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580825:{NFSU2_TR(0x580825);
if(r1(R+518)){{goto L580847;}}
}
B580827:L580827:{c.instructions+=10;NFSU2_TR(0x580827);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B580829:{NFSU2_TR(0x580829);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58082c:{NFSU2_TR(0x58082c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B58082e:{NFSU2_TR(0x58082e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B580831:{NFSU2_TR(0x580831);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B580837:{NFSU2_TR(0x580837);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58083d:{NFSU2_TR(0x58083d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B58083f:{NFSU2_TR(0x58083f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B580842:{NFSU2_TR(0x580842);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B580845:{NFSU2_TR(0x580845);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B580847:L580847:{c.instructions+=1;NFSU2_TR(0x580847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B58084d:L58084d:{c.instructions+=3;NFSU2_TR(0x58084d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58084e:{NFSU2_TR(0x58084e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58084f:{NFSU2_TR(0x58084f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B580850:L580850:{c.instructions+=3;NFSU2_TR(0x580850);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B580856:{NFSU2_TR(0x580856);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B58085c:{NFSU2_TR(0x58085c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L580874;}}
}
B58085e:L58085e:{c.instructions+=3;NFSU2_TR(0x58085e);
u8 U[4];
w4(U+0,u32(0x79545cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580863:{NFSU2_TR(0x580863);
__builtin_memmove((R+4),(R+24),4);
}
B580865:{NFSU2_TR(0x580865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58086aull));
TAIL_STATIC(0x57c080u,57c);
}
B58086a:L58086a:{c.instructions+=2;NFSU2_TR(0x58086a);
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
B58086c:{NFSU2_TR(0x58086c);
if(r1(R+518)){{goto L580874;}}
}
B58086e:L58086e:{c.instructions+=1;NFSU2_TR(0x58086e);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
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
B580874:L580874:{c.instructions+=2;NFSU2_TR(0x580874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B580875:{NFSU2_TR(0x580875);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B580880:L580880:{c.instructions+=6;NFSU2_TR(0x580880);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B580885:{NFSU2_TR(0x580885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B580888:{NFSU2_TR(0x580888);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580889:{NFSU2_TR(0x580889);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B58088b:{NFSU2_TR(0x58088b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58088d:{NFSU2_TR(0x58088d);
if(r1(R+518)){{goto L580897;}}
}
B58088f:L58088f:{c.instructions+=2;NFSU2_TR(0x58088f);
u8 U[8];
__builtin_memmove((U+0),gp(0x864fec),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580895:{NFSU2_TR(0x580895);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58089e;}}
}
B580897:L580897:{c.instructions+=4;NFSU2_TR(0x580897);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B580899:{NFSU2_TR(0x580899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58089a:{NFSU2_TR(0x58089a);
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
B58089d:{NFSU2_TR(0x58089d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58089e:L58089e:{c.instructions+=9;NFSU2_TR(0x58089e);
__builtin_memmove((R+0),gp(0x8650d8),4);
}
B5808a3:{NFSU2_TR(0x5808a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5808a4:{NFSU2_TR(0x5808a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5808a5:{NFSU2_TR(0x5808a5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5808a7:{NFSU2_TR(0x5808a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B5808aa:{NFSU2_TR(0x5808aa);
u8 U[4];
w4(U+0,u32(0x8650e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5808af:{NFSU2_TR(0x5808af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5808b0:{NFSU2_TR(0x5808b0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5808b2:{NFSU2_TR(0x5808b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5808b7ull));
TAIL_STATIC(0x57da10u,57d);
}
B5808b7:L5808b7:{c.instructions+=7;NFSU2_TR(0x5808b7);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5808b9:{NFSU2_TR(0x5808b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5808bd:{NFSU2_TR(0x5808bd);
__builtin_memmove((R+28),(R+0),4);
}
B5808bf:{NFSU2_TR(0x5808bf);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5808c1:{NFSU2_TR(0x5808c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5808c2:{NFSU2_TR(0x5808c2);
__builtin_memmove(gp(0x8650e8),(R+28),4);
}
B5808c8:{NFSU2_TR(0x5808c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5808cdull));
TAIL_STATIC(0x573090u,573);
}
B5808cd:L5808cd:{c.instructions+=3;NFSU2_TR(0x5808cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5808d0:{NFSU2_TR(0x5808d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5808d2:{NFSU2_TR(0x5808d2);
if(r1(R+518)){{goto L5808ee;}}
}
B5808d4:L5808d4:{c.instructions+=6;NFSU2_TR(0x5808d4);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5808d6:{NFSU2_TR(0x5808d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5808da:{NFSU2_TR(0x5808da);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5808dc:{NFSU2_TR(0x5808dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5808dd:{NFSU2_TR(0x5808dd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5808de:{NFSU2_TR(0x5808de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5808e3ull));
TAIL_STATIC(0x573090u,573);
}
B5808e3:L5808e3:{c.instructions+=3;NFSU2_TR(0x5808e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5808e6:{NFSU2_TR(0x5808e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5808e8:{NFSU2_TR(0x5808e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5808d4u);}goto L5808d4;}}
}
B5808ea:L5808ea:{c.instructions+=2;NFSU2_TR(0x5808ea);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5808ec:{NFSU2_TR(0x5808ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58090c;}}
}
B5808ee:L5808ee:{c.instructions+=2;NFSU2_TR(0x5808ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5808ef:{NFSU2_TR(0x5808ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5808f4ull));
TAIL_STATIC(0x440540u,440);
}
B5808f4:L5808f4:{c.instructions+=9;NFSU2_TR(0x5808f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5808f7:{NFSU2_TR(0x5808f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5808f8:{NFSU2_TR(0x5808f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5808f9:{NFSU2_TR(0x5808f9);
__builtin_memmove(gp(0x8650e8),(R+20),4);
}
B5808ff:{NFSU2_TR(0x5808ff);
__builtin_memmove(gp(0x8650e0),(R+20),4);
}
B580905:{NFSU2_TR(0x580905);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B580907:{NFSU2_TR(0x580907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B580908:{NFSU2_TR(0x580908);
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
B58090b:{NFSU2_TR(0x58090b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58090c:L58090c:{c.instructions+=3;NFSU2_TR(0x58090c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58090e:{NFSU2_TR(0x58090e);
__builtin_memmove(gp(0x8650e4),(R+20),4);
}
B580914:{NFSU2_TR(0x580914);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58092a;}}
}
B580916:L580916:{c.instructions+=5;NFSU2_TR(0x580916);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580918:{NFSU2_TR(0x580918);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58091c:{NFSU2_TR(0x58091c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58091e:{NFSU2_TR(0x58091e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58091f:{NFSU2_TR(0x58091f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580924ull));
TAIL_STATIC(0x573090u,573);
}
B580924:L580924:{c.instructions+=3;NFSU2_TR(0x580924);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B580927:{NFSU2_TR(0x580927);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B580928:{NFSU2_TR(0x580928);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580916u);}goto L580916;}}
}
B58092a:L58092a:{c.instructions+=5;NFSU2_TR(0x58092a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58092e:{NFSU2_TR(0x58092e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58092f:{NFSU2_TR(0x58092f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580930:{NFSU2_TR(0x580930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580931:{NFSU2_TR(0x580931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580936ull));
TAIL_STATIC(0x440820u,440);
}
B580936:L580936:{c.instructions+=4;NFSU2_TR(0x580936);
__builtin_memmove((R+28),(R+0),4);
}
B580938:{NFSU2_TR(0x580938);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580939:{NFSU2_TR(0x580939);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58093a:{NFSU2_TR(0x58093a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58093full));
TAIL_STATIC(0x579200u,579);
}
B58093f:L58093f:{c.instructions+=4;NFSU2_TR(0x58093f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B580943:{NFSU2_TR(0x580943);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580944:{NFSU2_TR(0x580944);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580945:{NFSU2_TR(0x580945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58094aull));
TAIL_STATIC(0x440820u,440);
}
B58094a:L58094a:{c.instructions+=4;NFSU2_TR(0x58094a);
__builtin_memmove((R+24),(R+0),4);
}
B58094c:{NFSU2_TR(0x58094c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58094d:{NFSU2_TR(0x58094d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58094e:{NFSU2_TR(0x58094e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580953ull));
TAIL_STATIC(0x579200u,579);
}
B580953:L580953:{c.instructions+=4;NFSU2_TR(0x580953);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B580956:{NFSU2_TR(0x580956);
u8 U[4];
w4(U+0,u32(0x7a082cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58095b:{NFSU2_TR(0x58095b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58095c:{NFSU2_TR(0x58095c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580961ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B580961:L580961:{c.instructions+=13;NFSU2_TR(0x580961);
__builtin_memmove((R+0),gp(0x8651a0),4);
}
B580966:{NFSU2_TR(0x580966);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B580968:{NFSU2_TR(0x580968);
__builtin_memmove(gp(0x8651a0),(R+24),4);
}
B58096e:{NFSU2_TR(0x58096e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B580971:{NFSU2_TR(0x580971);
u8 U[4];
w4(U+0,u32(0x86519cull));
s4(u32(r4(R+24)),r4(U+0));
}
B580977:{NFSU2_TR(0x580977);
__builtin_memmove((R+0),gp(0x8651a0),4);
}
B58097c:{NFSU2_TR(0x58097c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B58097e:{NFSU2_TR(0x58097e);
__builtin_memmove(gp(0x8651a0),(R+28),4);
}
B580984:{NFSU2_TR(0x580984);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B580987:{NFSU2_TR(0x580987);
u8 U[4];
w4(U+0,u32(0x86519cull));
s4(u32(r4(R+28)),r4(U+0));
}
B58098d:{NFSU2_TR(0x58098d);
__builtin_memmove((R+8),gp(0x8650e8),4);
}
B580993:{NFSU2_TR(0x580993);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580994:{NFSU2_TR(0x580994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580999ull));
TAIL_STATIC(0x440540u,440);
}
B580999:L580999:{c.instructions+=11;NFSU2_TR(0x580999);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B58099c:{NFSU2_TR(0x58099c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58099d:{NFSU2_TR(0x58099d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58099e:{NFSU2_TR(0x58099e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58099f:{NFSU2_TR(0x58099f);
__builtin_memmove(gp(0x8650d0),(R+20),4);
}
B5809a5:{NFSU2_TR(0x5809a5);
__builtin_memmove(gp(0x8650e8),(R+20),4);
}
B5809ab:{NFSU2_TR(0x5809ab);
__builtin_memmove(gp(0x8650e0),(R+20),4);
}
B5809b1:{NFSU2_TR(0x5809b1);
w1(R+0,u8(0x1ull));
}
B5809b3:{NFSU2_TR(0x5809b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5809b4:{NFSU2_TR(0x5809b4);
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
B5809b7:{NFSU2_TR(0x5809b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5809c0:L5809c0:{c.instructions+=10;NFSU2_TR(0x5809c0);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B5809c5:{NFSU2_TR(0x5809c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5809c8:{NFSU2_TR(0x5809c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5809c9:{NFSU2_TR(0x5809c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5809ca:{NFSU2_TR(0x5809ca);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5809cc:{NFSU2_TR(0x5809cc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5809ce:{NFSU2_TR(0x5809ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5809cf:{NFSU2_TR(0x5809cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5809d0:{NFSU2_TR(0x5809d0);
__builtin_memmove(gp(0x865980),(R+20),4);
}
B5809d6:{NFSU2_TR(0x5809d6);
if(r1(R+518)){{goto L580a5a;}}
}
B5809dc:L5809dc:{c.instructions+=3;NFSU2_TR(0x5809dc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5809de:{NFSU2_TR(0x5809de);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5809e0:{NFSU2_TR(0x5809e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5809e5ull));
TAIL_STATIC(0x57e3b0u,57e);
}
B5809e5:L5809e5:{c.instructions+=3;NFSU2_TR(0x5809e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5809e8:{NFSU2_TR(0x5809e8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5809ea:{NFSU2_TR(0x5809ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L580b3a;}}
}
B5809f0:L5809f0:{c.instructions+=1;NFSU2_TR(0x5809f0);
__builtin_memmove((R+24),(R+0),4);
}
B5809f2:L5809f2:{c.instructions+=2;NFSU2_TR(0x5809f2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5809f8:{NFSU2_TR(0x5809f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5809fe;}}
}
B5809fa:L5809fa:{c.instructions+=2;NFSU2_TR(0x5809fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5809fc:{NFSU2_TR(0x5809fc);
{goto L580a2e;}
}
B5809fe:L5809fe:{c.instructions+=4;NFSU2_TR(0x5809fe);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B580a04:{NFSU2_TR(0x580a04);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580a06:{NFSU2_TR(0x580a06);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580a08:{NFSU2_TR(0x580a08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580a0dull));
TAIL_STATIC(0x57e2a0u,57e);
}
B580a0d:L580a0d:{c.instructions+=4;NFSU2_TR(0x580a0d);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B580a13:{NFSU2_TR(0x580a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B580a15:{NFSU2_TR(0x580a15);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B580a18:{NFSU2_TR(0x580a18);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580a2e;}}
}
B580a1a:L580a1a:{c.instructions+=2;NFSU2_TR(0x580a1a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580a20:{NFSU2_TR(0x580a20);
if(r1(R+518)){{goto L580a2e;}}
}
B580a22:L580a22:{c.instructions+=2;NFSU2_TR(0x580a22);
__builtin_memmove(gp(0x8650d8),(R+20),4);
}
B580a28:{NFSU2_TR(0x580a28);
__builtin_memmove(gp(0x8650d0),(R+20),4);
}
B580a2e:L580a2e:{c.instructions+=4;NFSU2_TR(0x580a2e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580a30:{NFSU2_TR(0x580a30);
u8 U[4];
w4(U+0,u32(0x865980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580a35:{NFSU2_TR(0x580a35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580a36:{NFSU2_TR(0x580a36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580a3bull));
TAIL_STATIC(0x579390u,579);
}
B580a3b:L580a3b:{c.instructions+=5;NFSU2_TR(0x580a3b);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B580a40:{NFSU2_TR(0x580a40);
__builtin_memmove((R+4),gp(0x8709fc),4);
}
B580a46:{NFSU2_TR(0x580a46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B580a49:{NFSU2_TR(0x580a49);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580a4b:{NFSU2_TR(0x580a4b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L580a52;}}
}
B580a4d:L580a4d:{c.instructions+=1;NFSU2_TR(0x580a4d);
__builtin_memmove(gp(0x8709fc),(R+0),4);
}
B580a52:L580a52:{c.instructions+=2;NFSU2_TR(0x580a52);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B580a53:{NFSU2_TR(0x580a53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5809f2u);}goto L5809f2;}}
}
B580a55:L580a55:{c.instructions+=1;NFSU2_TR(0x580a55);
{goto L580b3a;}
}
B580a5a:L580a5a:{c.instructions+=3;NFSU2_TR(0x580a5a);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B580a5f:{NFSU2_TR(0x580a5f);
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
B580a61:{NFSU2_TR(0x580a61);
if(r1(R+518)){{goto L580a6c;}}
}
B580a63:L580a63:{c.instructions+=2;NFSU2_TR(0x580a63);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+20)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B580a66:{NFSU2_TR(0x580a66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580b3f;}}
}
B580a6c:L580a6c:{c.instructions+=1;NFSU2_TR(0x580a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580a71ull));
TAIL_STATIC(0x4022c0u,402);
}
B580a71:L580a71:{c.instructions+=1;NFSU2_TR(0x580a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580a76ull));
TAIL_STATIC(0x5b7ff0u,5b7);
}
B580a76:L580a76:{c.instructions+=2;NFSU2_TR(0x580a76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580a78:{NFSU2_TR(0x580a78);
if(r1(R+518)){{goto L580ae8;}}
}
B580a7a:L580a7a:{c.instructions+=1;NFSU2_TR(0x580a7a);
__builtin_memmove((R+12),(R+12),4);
}
B580a80:L580a80:{c.instructions+=2;NFSU2_TR(0x580a80);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B580a82:{NFSU2_TR(0x580a82);
w4(R+24,u32(0x8655a0ull));
}
B580a87:L580a87:{c.instructions+=7;NFSU2_TR(0x580a87);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B580a8b:{NFSU2_TR(0x580a8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580a8c:{NFSU2_TR(0x580a8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B580a90:{NFSU2_TR(0x580a90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580a91:{NFSU2_TR(0x580a91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580a92:{NFSU2_TR(0x580a92);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B580a96:{NFSU2_TR(0x580a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580a9bull));
TAIL_STATIC(0x5cfd60u,5cf);
}
B580a9b:L580a9b:{c.instructions+=9;NFSU2_TR(0x580a9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B580a9f:{NFSU2_TR(0x580a9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B580aa2:{NFSU2_TR(0x580aa2);
u8 U[4];
w4(U+0,u32(0x865980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580aa7:{NFSU2_TR(0x580aa7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580aa8:{NFSU2_TR(0x580aa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580aa9:{NFSU2_TR(0x580aa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580aad:{NFSU2_TR(0x580aad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580aae:{NFSU2_TR(0x580aae);
__builtin_memmove((R+4),(R+24),4);
}
B580ab0:{NFSU2_TR(0x580ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580ab5ull));
TAIL_STATIC(0x57b0b0u,57b);
}
B580ab5:L580ab5:{c.instructions+=2;NFSU2_TR(0x580ab5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580ab7:{NFSU2_TR(0x580ab7);
if(r1(R+518)){{goto L580acb;}}
}
B580ab9:L580ab9:{c.instructions+=3;NFSU2_TR(0x580ab9);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B580abe:{NFSU2_TR(0x580abe);
u8 U[8];
__builtin_memmove((U+0),gp(0x8709fc),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580ac4:{NFSU2_TR(0x580ac4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L580acb;}}
}
B580ac6:L580ac6:{c.instructions+=1;NFSU2_TR(0x580ac6);
__builtin_memmove(gp(0x8709fc),(R+0),4);
}
B580acb:L580acb:{c.instructions+=4;NFSU2_TR(0x580acb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
}
B580ad1:{NFSU2_TR(0x580ad1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B580ad2:{NFSU2_TR(0x580ad2);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x865930ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x865930ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x865930ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B580ad8:{NFSU2_TR(0x580ad8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580a87u);}goto L580a87;}}
}
B580ada:L580ada:{c.instructions+=1;NFSU2_TR(0x580ada);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580adfull));
TAIL_STATIC(0x4022c0u,402);
}
B580adf:L580adf:{c.instructions+=1;NFSU2_TR(0x580adf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580ae4ull));
TAIL_STATIC(0x5b7ff0u,5b7);
}
B580ae4:L580ae4:{c.instructions+=2;NFSU2_TR(0x580ae4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580ae6:{NFSU2_TR(0x580ae6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580a80u);}goto L580a80;}}
}
B580ae8:L580ae8:{c.instructions+=3;NFSU2_TR(0x580ae8);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580aee:{NFSU2_TR(0x580aee);
__builtin_memmove((R+28),gp(0x865980),4);
}
B580af4:{NFSU2_TR(0x580af4);
if(r1(R+518)){{goto L580b06;}}
}
B580af6:L580af6:{c.instructions+=5;NFSU2_TR(0x580af6);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B580afc:{NFSU2_TR(0x580afc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580afe:{NFSU2_TR(0x580afe);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580b00:{NFSU2_TR(0x580b00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580b01:{NFSU2_TR(0x580b01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580b06ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B580b06:L580b06:{c.instructions+=2;NFSU2_TR(0x580b06);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580b08:{NFSU2_TR(0x580b08);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L580b3a;}}
}
B580b0a:L580b0a:{c.instructions+=2;NFSU2_TR(0x580b0a);
w4(R+24,u32(0x865984ull));
}
B580b0f:{NFSU2_TR(0x580b0f);
}
B580b10:L580b10:{c.instructions+=2;NFSU2_TR(0x580b10);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580b16:{NFSU2_TR(0x580b16);
if(r1(R+518)){{goto L580b34;}}
}
B580b18:L580b18:{c.instructions+=9;NFSU2_TR(0x580b18);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B580b1c:{NFSU2_TR(0x580b1c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B580b1f:{NFSU2_TR(0x580b1f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580b21:{NFSU2_TR(0x580b21);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B580b24:{NFSU2_TR(0x580b24);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B580b26:{NFSU2_TR(0x580b26);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580b28:{NFSU2_TR(0x580b28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580b29:{NFSU2_TR(0x580b29);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B580b2f:{NFSU2_TR(0x580b2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580b34ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B580b34:L580b34:{c.instructions+=3;NFSU2_TR(0x580b34);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B580b37:{NFSU2_TR(0x580b37);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B580b38:{NFSU2_TR(0x580b38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580b10u);}goto L580b10;}}
}
B580b3a:L580b3a:{c.instructions+=1;NFSU2_TR(0x580b3a);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B580b3f:L580b3f:{c.instructions+=2;NFSU2_TR(0x580b3f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580b41:{NFSU2_TR(0x580b41);
if(r1(R+518)){{goto L580d20;}}
}
B580b47:L580b47:{c.instructions+=3;NFSU2_TR(0x580b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580b4a:{NFSU2_TR(0x580b4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B580b4d:{NFSU2_TR(0x580b4d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L580b9f;}}
}
B580b4f:L580b4f:{c.instructions+=4;NFSU2_TR(0x580b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580b52:{NFSU2_TR(0x580b52);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580b54:{NFSU2_TR(0x580b54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((R+24),(U+0),4);
}
B580b57:{NFSU2_TR(0x580b57);
if(r1(R+518)){{goto L580b62;}}
}
B580b59:L580b59:{c.instructions+=5;NFSU2_TR(0x580b59);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B580b5a:{NFSU2_TR(0x580b5a);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B580b5c:{NFSU2_TR(0x580b5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B580b5e:{NFSU2_TR(0x580b5e);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B580b60:{NFSU2_TR(0x580b60);
{goto L580b7b;}
}
B580b62:L580b62:{c.instructions+=8;NFSU2_TR(0x580b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580b65:{NFSU2_TR(0x580b65);
u8 U[13];
w4(U+0,u32(u32(u32(0x35ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B580b69:{NFSU2_TR(0x580b69);
u8 U[13];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B580b6d:{NFSU2_TR(0x580b6d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B580b6e:{NFSU2_TR(0x580b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B580b71:{NFSU2_TR(0x580b71);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+24)),r4(U+0));
}
B580b77:{NFSU2_TR(0x580b77);
__builtin_memmove((R+0),(R+12),1);
}
B580b79:{NFSU2_TR(0x580b79);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B580b7b:L580b7b:{c.instructions+=3;NFSU2_TR(0x580b7b);
w4(R+0,u32(r1(R+0)));
}
B580b7e:{NFSU2_TR(0x580b7e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580b80:{NFSU2_TR(0x580b80);
if(r1(R+518)){{goto L580b9a;}}
}
B580b82:L580b82:{c.instructions+=7;NFSU2_TR(0x580b82);
w4(R+8,u32(r1(R+8)));
}
B580b85:{NFSU2_TR(0x580b85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580b87:{NFSU2_TR(0x580b87);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B580b8a:{NFSU2_TR(0x580b8a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B580b8c:{NFSU2_TR(0x580b8c);
u8 U[4];
w4(U+0,u32(0x865980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580b91:{NFSU2_TR(0x580b91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580b92:{NFSU2_TR(0x580b92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580b97ull));
TAIL_STATIC(0x579390u,579);
}
B580b97:L580b97:{c.instructions+=1;NFSU2_TR(0x580b97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B580b9a:L580b9a:{c.instructions+=1;NFSU2_TR(0x580b9a);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B580b9f:L580b9f:{c.instructions+=2;NFSU2_TR(0x580b9f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B580ba1:{NFSU2_TR(0x580ba1);
if(r1(R+518)){{goto L580c4a;}}
}
B580ba7:L580ba7:{c.instructions+=2;NFSU2_TR(0x580ba7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B580baa:{NFSU2_TR(0x580baa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580c4a;}}
}
B580bb0:L580bb0:{c.instructions+=2;NFSU2_TR(0x580bb0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B580bb2:{NFSU2_TR(0x580bb2);
if(r1(R+518)){{goto L580be8;}}
}
B580bb4:L580bb4:{c.instructions+=4;NFSU2_TR(0x580bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580bb7:{NFSU2_TR(0x580bb7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580bb9:{NFSU2_TR(0x580bb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B580bbc:{NFSU2_TR(0x580bbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580be8;}}
}
B580bbe:L580bbe:{c.instructions+=5;NFSU2_TR(0x580bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580bc4:{NFSU2_TR(0x580bc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B580bca:{NFSU2_TR(0x580bca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580bcb:{NFSU2_TR(0x580bcb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580bcd:{NFSU2_TR(0x580bcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580bd2ull));
TAIL_STATIC(0x575270u,575);
}
B580bd2:L580bd2:{c.instructions+=3;NFSU2_TR(0x580bd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B580bd4:{NFSU2_TR(0x580bd4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B580bd7:{NFSU2_TR(0x580bd7);
if(r1(R+518)){{goto L580bdf;}}
}
B580bd9:L580bd9:{c.instructions+=1;NFSU2_TR(0x580bd9);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+28)),r4(U+0));
}
B580bdf:L580bdf:{c.instructions+=3;NFSU2_TR(0x580bdf);
__builtin_memmove((R+4),(R+0),4);
}
B580be1:{NFSU2_TR(0x580be1);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B580be6:{NFSU2_TR(0x580be6);
{goto L580bea;}
}
B580be8:L580be8:{c.instructions+=1;NFSU2_TR(0x580be8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B580bea:L580bea:{c.instructions+=2;NFSU2_TR(0x580bea);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580bec:{NFSU2_TR(0x580bec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L580d20;}}
}
B580bf2:L580bf2:{c.instructions+=2;NFSU2_TR(0x580bf2);
__builtin_memmove((R+12),(R+4),4);
}
B580bf4:{NFSU2_TR(0x580bf4);
{goto L580c00;}
}
B580bf6:L580bf6:{c.instructions+=2;NFSU2_TR(0x580bf6);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B580bfb:{NFSU2_TR(0x580bfb);
{goto L580c00;}
}
B580c00:L580c00:{c.instructions+=2;NFSU2_TR(0x580c00);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B580c02:{NFSU2_TR(0x580c02);
if(r1(R+518)){{goto L580c31;}}
}
B580c04:L580c04:{c.instructions+=4;NFSU2_TR(0x580c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580c07:{NFSU2_TR(0x580c07);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580c09:{NFSU2_TR(0x580c09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B580c0c:{NFSU2_TR(0x580c0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580c31;}}
}
B580c0e:L580c0e:{c.instructions+=5;NFSU2_TR(0x580c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580c14:{NFSU2_TR(0x580c14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B580c1a:{NFSU2_TR(0x580c1a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580c1b:{NFSU2_TR(0x580c1b);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580c1d:{NFSU2_TR(0x580c1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580c22ull));
TAIL_STATIC(0x575270u,575);
}
B580c22:L580c22:{c.instructions+=3;NFSU2_TR(0x580c22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B580c24:{NFSU2_TR(0x580c24);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B580c27:{NFSU2_TR(0x580c27);
if(r1(R+518)){{goto L580c33;}}
}
B580c29:L580c29:{c.instructions+=2;NFSU2_TR(0x580c29);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+28)),r4(U+0));
}
B580c2f:{NFSU2_TR(0x580c2f);
{goto L580c33;}
}
B580c31:L580c31:{c.instructions+=1;NFSU2_TR(0x580c31);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B580c33:L580c33:{c.instructions+=4;NFSU2_TR(0x580c33);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580c34:{NFSU2_TR(0x580c34);
u8 U[4];
w4(U+0,u32(0x865980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580c39:{NFSU2_TR(0x580c39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580c3a:{NFSU2_TR(0x580c3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580c3full));
TAIL_STATIC(0x579390u,579);
}
B580c3f:L580c3f:{c.instructions+=3;NFSU2_TR(0x580c3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B580c42:{NFSU2_TR(0x580c42);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B580c43:{NFSU2_TR(0x580c43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580bf6u);}goto L580bf6;}}
}
B580c45:L580c45:{c.instructions+=1;NFSU2_TR(0x580c45);
{goto L580d20;}
}
B580c4a:L580c4a:{c.instructions+=6;NFSU2_TR(0x580c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580c4d:{NFSU2_TR(0x580c4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580c4f:{NFSU2_TR(0x580c4f);
__builtin_memmove((R+12),gp(0x865980),4);
}
B580c55:{NFSU2_TR(0x580c55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B580c58:{NFSU2_TR(0x580c58);
__builtin_memmove((R+20),(R+0),4);
}
B580c5a:{NFSU2_TR(0x580c5a);
if(r1(R+518)){{goto L580ca2;}}
}
B580c5c:L580c5c:{c.instructions+=6;NFSU2_TR(0x580c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580c62:{NFSU2_TR(0x580c62);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580c64:{NFSU2_TR(0x580c64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B580c6a:{NFSU2_TR(0x580c6a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580c6c:{NFSU2_TR(0x580c6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580c6d:{NFSU2_TR(0x580c6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580c72ull));
TAIL_STATIC(0x575140u,575);
}
B580c72:L580c72:{c.instructions+=5;NFSU2_TR(0x580c72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B580c74:{NFSU2_TR(0x580c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580c77:{NFSU2_TR(0x580c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0xffffffbcull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B580c7e:{NFSU2_TR(0x580c7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B580c81:{NFSU2_TR(0x580c81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580c9d;}}
}
B580c83:L580c83:{c.instructions+=4;NFSU2_TR(0x580c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580c89:{NFSU2_TR(0x580c89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580c8b:{NFSU2_TR(0x580c8b);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B580c91:{NFSU2_TR(0x580c91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580c9d;}}
}
B580c93:L580c93:{c.instructions+=1;NFSU2_TR(0x580c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x80ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B580c9d:L580c9d:{c.instructions+=1;NFSU2_TR(0x580c9d);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B580ca2:L580ca2:{c.instructions+=2;NFSU2_TR(0x580ca2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580ca4:{NFSU2_TR(0x580ca4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L580d1e;}}
}
B580ca6:L580ca6:{c.instructions+=3;NFSU2_TR(0x580ca6);
w4(R+28,u32(0x865984ull));
}
B580cab:{NFSU2_TR(0x580cab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B580caf:{NFSU2_TR(0x580caf);
}
B580cb0:L580cb0:{c.instructions+=5;NFSU2_TR(0x580cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580cb3:{NFSU2_TR(0x580cb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580cb5:{NFSU2_TR(0x580cb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B580cb8:{NFSU2_TR(0x580cb8);
__builtin_memmove((R+20),(R+0),4);
}
B580cba:{NFSU2_TR(0x580cba);
if(r1(R+518)){{goto L580d10;}}
}
B580cbc:L580cbc:{c.instructions+=10;NFSU2_TR(0x580cbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B580cc0:{NFSU2_TR(0x580cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580cc6:{NFSU2_TR(0x580cc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B580ccc:{NFSU2_TR(0x580ccc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(r2(U+0)));
}
B580ccf:{NFSU2_TR(0x580ccf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580cd1:{NFSU2_TR(0x580cd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B580cd4:{NFSU2_TR(0x580cd4);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580cd6:{NFSU2_TR(0x580cd6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B580cd8:{NFSU2_TR(0x580cd8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580cd9:{NFSU2_TR(0x580cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580cdeull));
TAIL_STATIC(0x575140u,575);
}
B580cde:L580cde:{c.instructions+=6;NFSU2_TR(0x580cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B580ce0:{NFSU2_TR(0x580ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580ce3:{NFSU2_TR(0x580ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580ce6:{NFSU2_TR(0x580ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0xffffffbcull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B580ced:{NFSU2_TR(0x580ced);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B580cef:{NFSU2_TR(0x580cef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L580d0b;}}
}
B580cf1:L580cf1:{c.instructions+=4;NFSU2_TR(0x580cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580cf7:{NFSU2_TR(0x580cf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580cf9:{NFSU2_TR(0x580cf9);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B580cff:{NFSU2_TR(0x580cff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580d0b;}}
}
B580d01:L580d01:{c.instructions+=1;NFSU2_TR(0x580d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x80ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B580d0b:L580d0b:{c.instructions+=1;NFSU2_TR(0x580d0b);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B580d10:L580d10:{c.instructions+=5;NFSU2_TR(0x580d10);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580d14:{NFSU2_TR(0x580d14);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B580d17:{NFSU2_TR(0x580d17);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B580d18:{NFSU2_TR(0x580d18);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B580d1c:{NFSU2_TR(0x580d1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580cb0u);}goto L580cb0;}}
}
B580d1e:L580d1e:{c.instructions+=1;NFSU2_TR(0x580d1e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B580d20:L580d20:{c.instructions+=4;NFSU2_TR(0x580d20);
__builtin_memmove((R+0),gp(0x865980),4);
}
B580d25:{NFSU2_TR(0x580d25);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B580d27:{NFSU2_TR(0x580d27);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B580d29:{NFSU2_TR(0x580d29);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L580d7b;}}
}
B580d2b:L580d2b:{c.instructions+=1;NFSU2_TR(0x580d2b);
w4(R+24,u32(0x865988ull));
}
B580d30:L580d30:{c.instructions+=6;NFSU2_TR(0x580d30);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B580d34:{NFSU2_TR(0x580d34);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B580d36:{NFSU2_TR(0x580d36);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B580d3a:{NFSU2_TR(0x580d3a);
__builtin_memmove((R+0),(R+4),4);
}
B580d3c:{NFSU2_TR(0x580d3c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B580d41:{NFSU2_TR(0x580d41);
if(r1(R+518)){{goto L580d6e;}}
}
B580d43:L580d43:{c.instructions+=8;NFSU2_TR(0x580d43);
__builtin_memmove((R+12),(R+8),4);
}
B580d45:{NFSU2_TR(0x580d45);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x1c8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B580d4b:{NFSU2_TR(0x580d4b);
__builtin_memmove((R+4),(R+5),1);
}
B580d4d:{NFSU2_TR(0x580d4d);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B580d51:{NFSU2_TR(0x580d51);
u8 U[13];
w4(U+0,u32(u32(u32(0x865658ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B580d58:{NFSU2_TR(0x580d58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B580d5a:{NFSU2_TR(0x580d5a);
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
B580d5c:{NFSU2_TR(0x580d5c);
if(r1(R+518)){{goto L580d6e;}}
}
B580d5e:L580d5e:{c.instructions+=7;NFSU2_TR(0x580d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B580d61:{NFSU2_TR(0x580d61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580d62:{NFSU2_TR(0x580d62);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B580d66:{NFSU2_TR(0x580d66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580d67:{NFSU2_TR(0x580d67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580d68:{NFSU2_TR(0x580d68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580d69:{NFSU2_TR(0x580d69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580d6bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B580d6b:L580d6b:{c.instructions+=1;NFSU2_TR(0x580d6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B580d6e:L580d6e:{c.instructions+=5;NFSU2_TR(0x580d6e);
__builtin_memmove((R+0),gp(0x865980),4);
}
B580d73:{NFSU2_TR(0x580d73);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B580d74:{NFSU2_TR(0x580d74);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B580d77:{NFSU2_TR(0x580d77);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B580d79:{NFSU2_TR(0x580d79);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580d30u);}goto L580d30;}}
}
B580d7b:L580d7b:{c.instructions+=6;NFSU2_TR(0x580d7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B580d7c:{NFSU2_TR(0x580d7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B580d7d:{NFSU2_TR(0x580d7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B580d7e:{NFSU2_TR(0x580d7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B580d7f:{NFSU2_TR(0x580d7f);
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
B580d82:{NFSU2_TR(0x580d82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B580d90:L580d90:{c.instructions+=2;NFSU2_TR(0x580d90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B580d96:{NFSU2_TR(0x580d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580d9bull));
TAIL_STATIC(0x57d6e0u,57d);
}
B580d9b:L580d9b:{c.instructions+=3;NFSU2_TR(0x580d9b);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B580da0:{NFSU2_TR(0x580da0);
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
B580da2:{NFSU2_TR(0x580da2);
if(r1(R+518)){{goto L580db3;}}
}
B580da4:L580da4:{c.instructions+=2;NFSU2_TR(0x580da4);
u8 U[4];
w4(U+0,u32(0x57d820ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580da9:{NFSU2_TR(0x580da9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580daeull));
TAIL_STATIC(0x43bd40u,43b);
}
B580dae:L580dae:{c.instructions+=2;NFSU2_TR(0x580dae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B580db1:{NFSU2_TR(0x580db1);
{goto L580dc1;}
}
B580db3:L580db3:{c.instructions+=3;NFSU2_TR(0x580db3);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B580db8:{NFSU2_TR(0x580db8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580dba:{NFSU2_TR(0x580dba);
if(r1(R+518)){{goto L580dc1;}}
}
B580dbc:L580dbc:{c.instructions+=1;NFSU2_TR(0x580dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580dc1ull));
TAIL_STATIC(0x57e690u,57e);
}
B580dc1:L580dc1:{c.instructions+=5;NFSU2_TR(0x580dc1);
__builtin_memmove((R+0),gp(0x7fa734),4);
}
B580dc6:{NFSU2_TR(0x580dc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580dc7:{NFSU2_TR(0x580dc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B580dcb:{NFSU2_TR(0x580dcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580dcc:{NFSU2_TR(0x580dcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580dd1ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B580dd1:L580dd1:{c.instructions+=4;NFSU2_TR(0x580dd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B580dd5:{NFSU2_TR(0x580dd5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580dd7:{NFSU2_TR(0x580dd7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580dd8:{NFSU2_TR(0x580dd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580dddull));
TAIL_STATIC(0x57e4d0u,57e);
}
B580ddd:L580ddd:{c.instructions+=4;NFSU2_TR(0x580ddd);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B580de2:{NFSU2_TR(0x580de2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B580de5:{NFSU2_TR(0x580de5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580de7:{NFSU2_TR(0x580de7);
if(r1(R+518)){{goto L580dee;}}
}
B580de9:L580de9:{c.instructions+=1;NFSU2_TR(0x580de9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580deeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580130u);}goto L580130;}
}
B580dee:L580dee:{c.instructions+=2;NFSU2_TR(0x580dee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x200ull))));
}
B580df4:{NFSU2_TR(0x580df4);
TAIL_STATIC(0x57ddf0u,57d);
}
B580e00:L580e00:{c.instructions+=3;NFSU2_TR(0x580e00);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580e02:{NFSU2_TR(0x580e02);
u8 U[4];
w4(U+0,u32(0x7a0df4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580e07:{NFSU2_TR(0x580e07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580e0cull));
TAIL_STATIC(0x5b7b20u,5b7);
}
B580e0c:L580e0c:{c.instructions+=3;NFSU2_TR(0x580e0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B580e0f:{NFSU2_TR(0x580e0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B580e11:{NFSU2_TR(0x580e11);
if(r1(R+518)){{goto L580e1a;}}
}
B580e13:L580e13:{c.instructions+=2;NFSU2_TR(0x580e13);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580e15:{NFSU2_TR(0x580e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580e1aull));
TAIL_STATIC(0x75d5a4u,75d);
}
B580e1a:L580e1a:{c.instructions+=5;NFSU2_TR(0x580e1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580e1e:{NFSU2_TR(0x580e1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580e22:{NFSU2_TR(0x580e22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580e23:{NFSU2_TR(0x580e23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580e24:{NFSU2_TR(0x580e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580e29ull));
TAIL_STATIC(0x57ed10u,57e);
}
B580e29:L580e29:{c.instructions+=2;NFSU2_TR(0x580e29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B580e2c:{NFSU2_TR(0x580e2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580e31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580880u);}goto L580880;}
}
B580e31:L580e31:{c.instructions+=2;NFSU2_TR(0x580e31);
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
B580e33:{NFSU2_TR(0x580e33);
if(r1(R+518)){{goto L580e3c;}}
}
B580e35:L580e35:{c.instructions+=1;NFSU2_TR(0x580e35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580e3aull));
TAIL_STATIC(0x4fef60u,4fe);
}
B580e3a:L580e3a:{c.instructions+=1;NFSU2_TR(0x580e3a);
{goto L580e70;}
}
B580e3c:L580e3c:{c.instructions+=3;NFSU2_TR(0x580e3c);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B580e41:{NFSU2_TR(0x580e41);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580e43:{NFSU2_TR(0x580e43);
if(r1(R+518)){{goto L580e4c;}}
}
B580e45:L580e45:{c.instructions+=1;NFSU2_TR(0x580e45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580e4aull));
TAIL_STATIC(0x53feb0u,53f);
}
B580e4a:L580e4a:{c.instructions+=1;NFSU2_TR(0x580e4a);
{goto L580e70;}
}
B580e4c:L580e4c:{c.instructions+=3;NFSU2_TR(0x580e4c);
__builtin_memmove((R+0),gp(0x865498),1);
}
B580e51:{NFSU2_TR(0x580e51);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B580e53:{NFSU2_TR(0x580e53);
if(r1(R+518)){{goto L580e5c;}}
}
B580e55:L580e55:{c.instructions+=1;NFSU2_TR(0x580e55);
s1(0x865498,u8(0x0ull));
}
B580e5c:L580e5c:{c.instructions+=2;NFSU2_TR(0x580e5c);
s4(0x865484,u32(0x57ff10ull));
}
B580e66:{NFSU2_TR(0x580e66);
s4(0x86548c,u32(0x7a07a0ull));
}
B580e70:L580e70:{c.instructions+=1;NFSU2_TR(0x580e70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580e75ull));
TAIL_STATIC(0x5811c0u,581);
}
B580e75:L580e75:{c.instructions+=1;NFSU2_TR(0x580e75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580e7aull));
TAIL_STATIC(0x5cf960u,5cf);
}
B580e7a:L580e7a:{c.instructions+=2;NFSU2_TR(0x580e7a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580e7c:{NFSU2_TR(0x580e7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580e81ull));
TAIL_STATIC(0x75d5a4u,75d);
}
B580e81:L580e81:{c.instructions+=1;NFSU2_TR(0x580e81);
u8 U[4];
{SPILL();c.pc=0x580e81u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B580e90:L580e90:{c.instructions+=4;NFSU2_TR(0x580e90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580e91:{NFSU2_TR(0x580e91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B580e95:{NFSU2_TR(0x580e95);
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
B580e97:{NFSU2_TR(0x580e97);
if(r1(R+518)){{goto L580ed2;}}
}
B580e99:L580e99:{c.instructions+=3;NFSU2_TR(0x580e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580e9f:{NFSU2_TR(0x580e9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580ea1:{NFSU2_TR(0x580ea1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L580eb2;}}
}
B580ea3:L580ea3:{c.instructions+=1;NFSU2_TR(0x580ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580ea8ull));
TAIL_STATIC(0x57ef60u,57e);
}
B580ea8:L580ea8:{c.instructions+=3;NFSU2_TR(0x580ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580eae:{NFSU2_TR(0x580eae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580eb0:{NFSU2_TR(0x580eb0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580ea3u);}goto L580ea3;}}
}
B580eb2:L580eb2:{c.instructions+=6;NFSU2_TR(0x580eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B580eb5:{NFSU2_TR(0x580eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B580eb7:{NFSU2_TR(0x580eb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B580eb9:{NFSU2_TR(0x580eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B580ebc:{NFSU2_TR(0x580ebc);
__builtin_memmove((R+4),(R+24),4);
}
B580ebe:{NFSU2_TR(0x580ebe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580ec3ull));
TAIL_STATIC(0x577d80u,577);
}
B580ec3:L580ec3:{c.instructions+=4;NFSU2_TR(0x580ec3);
__builtin_memmove((R+0),gp(0x864f78),4);
}
B580ec8:{NFSU2_TR(0x580ec8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580ec9:{NFSU2_TR(0x580ec9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580eca:{NFSU2_TR(0x580eca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580ecfull));
TAIL_STATIC(0x43f920u,43f);
}
B580ecf:L580ecf:{c.instructions+=1;NFSU2_TR(0x580ecf);
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
B580ed2:L580ed2:{c.instructions+=2;NFSU2_TR(0x580ed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B580ed3:{NFSU2_TR(0x580ed3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B580ee0:L580ee0:{c.instructions+=2;NFSU2_TR(0x580ee0);
w4(R+4,u32(0x86515cull));
}
B580ee5:{NFSU2_TR(0x580ee5);
TAIL_STATIC(0x57f210u,57f);
}
B580ef0:L580ef0:{c.instructions+=5;NFSU2_TR(0x580ef0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580ef1:{NFSU2_TR(0x580ef1);
__builtin_memmove((R+24),(R+4),4);
}
B580ef3:{NFSU2_TR(0x580ef3);
w4(R+4,u32(0x88eb00ull));
}
B580ef8:{NFSU2_TR(0x580ef8);
s4(0x8654a4,u32(0x8ull));
}
B580f02:{NFSU2_TR(0x580f02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f07ull));
TAIL_STATIC(0x5db080u,5db);
}
B580f07:L580f07:{c.instructions+=2;NFSU2_TR(0x580f07);
w4(R+4,u32(0x88eb00ull));
}
B580f0c:{NFSU2_TR(0x580f0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f11ull));
TAIL_STATIC(0x5e6160u,5e6);
}
B580f11:L580f11:{c.instructions+=2;NFSU2_TR(0x580f11);
w4(R+4,u32(0x88f768ull));
}
B580f16:{NFSU2_TR(0x580f16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f1bull));
TAIL_STATIC(0x5e1180u,5e1);
}
B580f1b:L580f1b:{c.instructions+=2;NFSU2_TR(0x580f1b);
w4(R+4,u32(0x8a3288ull));
}
B580f20:{NFSU2_TR(0x580f20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f25ull));
TAIL_STATIC(0x63a6f0u,63a);
}
B580f25:L580f25:{c.instructions+=1;NFSU2_TR(0x580f25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f2aull));
TAIL_STATIC(0x4814a0u,481);
}
B580f2a:L580f2a:{c.instructions+=3;NFSU2_TR(0x580f2a);
__builtin_memmove((R+0),gp(0x7fa9b8),4);
}
B580f2f:{NFSU2_TR(0x580f2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580f30:{NFSU2_TR(0x580f30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f35ull));
TAIL_STATIC(0x4901a0u,490);
}
B580f35:L580f35:{c.instructions+=5;NFSU2_TR(0x580f35);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580f37:{NFSU2_TR(0x580f37);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B580f3a:{NFSU2_TR(0x580f3a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580f3c:{NFSU2_TR(0x580f3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580f3d:{NFSU2_TR(0x580f3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f42ull));
TAIL_STATIC(0x494550u,494);
}
B580f42:L580f42:{c.instructions+=3;NFSU2_TR(0x580f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B580f45:{NFSU2_TR(0x580f45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580f46:{NFSU2_TR(0x580f46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f4bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580e90u);}goto L580e90;}
}
B580f4b:L580f4b:{c.instructions+=3;NFSU2_TR(0x580f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580f4e:{NFSU2_TR(0x580f4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580f4f:{NFSU2_TR(0x580f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f54ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580e90u);}goto L580e90;}
}
B580f54:L580f54:{c.instructions+=7;NFSU2_TR(0x580f54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580f56:{NFSU2_TR(0x580f56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580f58:{NFSU2_TR(0x580f58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580f5a:{NFSU2_TR(0x580f5a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580f5c:{NFSU2_TR(0x580f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B580f63:{NFSU2_TR(0x580f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B580f6a:{NFSU2_TR(0x580f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f6full));
TAIL_STATIC(0x4ff780u,4ff);
}
B580f6f:L580f6f:{c.instructions+=5;NFSU2_TR(0x580f6f);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B580f75:{NFSU2_TR(0x580f75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B580f78:{NFSU2_TR(0x580f78);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580f7a:{NFSU2_TR(0x580f7a);
__builtin_memmove((R+24),(R+4),4);
}
B580f7c:{NFSU2_TR(0x580f7c);
if(r1(R+518)){{goto L580f8c;}}
}
B580f7e:L580f7e:{c.instructions+=1;NFSU2_TR(0x580f7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f83ull));
TAIL_STATIC(0x603660u,603);
}
B580f83:L580f83:{c.instructions+=2;NFSU2_TR(0x580f83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580f84:{NFSU2_TR(0x580f84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f89ull));
TAIL_STATIC(0x75c6dau,75c);
}
B580f89:L580f89:{c.instructions+=1;NFSU2_TR(0x580f89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B580f8c:L580f8c:{c.instructions+=3;NFSU2_TR(0x580f8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580f8e:{NFSU2_TR(0x580f8e);
s4(0x8900d8,u32(0x0ull));
}
B580f98:{NFSU2_TR(0x580f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580f9dull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B580f9d:L580f9d:{c.instructions+=4;NFSU2_TR(0x580f9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B580fa0:{NFSU2_TR(0x580fa0);
w4(R+4,u32(0x828530ull));
}
B580fa5:{NFSU2_TR(0x580fa5);
__builtin_memmove(gp(0x883dac),(R+0),4);
}
B580faa:{NFSU2_TR(0x580faa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580fafull));
TAIL_STATIC(0x440800u,440);
}
B580faf:L580faf:{c.instructions+=1;NFSU2_TR(0x580faf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580fb4ull));
TAIL_STATIC(0x488780u,488);
}
B580fb4:L580fb4:{c.instructions+=2;NFSU2_TR(0x580fb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B580fb5:{NFSU2_TR(0x580fb5);
TAIL_STATIC(0x4022c0u,402);
}
B580fc0:L580fc0:{c.instructions+=7;NFSU2_TR(0x580fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B580fc3:{NFSU2_TR(0x580fc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580fc4:{NFSU2_TR(0x580fc4);
__builtin_memmove((R+24),(R+4),4);
}
B580fc6:{NFSU2_TR(0x580fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580fc9:{NFSU2_TR(0x580fc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B580fcb:{NFSU2_TR(0x580fcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580fcc:{NFSU2_TR(0x580fcc);
if(r1(R+518)){{goto L580fde;}}
}
B580fce:L580fce:{c.instructions+=2;NFSU2_TR(0x580fce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580fcf:{NFSU2_TR(0x580fcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580fd4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580e90u);}goto L580e90;}
}
B580fd4:L580fd4:{c.instructions+=2;NFSU2_TR(0x580fd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B580fd7:{NFSU2_TR(0x580fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B580fde:L580fde:{c.instructions+=4;NFSU2_TR(0x580fde);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B580fe4:{NFSU2_TR(0x580fe4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580fe6:{NFSU2_TR(0x580fe6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580fe7:{NFSU2_TR(0x580fe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x580fecull));
TAIL_STATIC(0x490150u,490);
}
B580fec:L580fec:{c.instructions+=2;NFSU2_TR(0x580fec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B580fee:{NFSU2_TR(0x580fee);
w4(R+4,u32(0x8ull));
}
B580ff3:L580ff3:{c.instructions+=1;NFSU2_TR(0x580ff3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L580ff5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x580ff3u);}goto L580ff3;}
}
B580ff5:L580ff5:{c.instructions+=4;NFSU2_TR(0x580ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B580ff8:{NFSU2_TR(0x580ff8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B580ff9:{NFSU2_TR(0x580ff9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B580ffd:{NFSU2_TR(0x580ffd);
u8 U[4];
w4(U+0,u32(0x7a0714ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x581002u,581);
}
XIT:NFSU2_TR_EXIT(0x580,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
