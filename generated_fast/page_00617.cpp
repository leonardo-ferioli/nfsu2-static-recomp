#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_618(u8* __restrict R,Cpu& c);
u32 body_61a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x617,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x617,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_617(u8* __restrict R,Cpu& c);
u32 page_617(Cpu& c){return body_617(c.regs.data(),c);}
__attribute__((noinline)) u32 body_617(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x617000:goto L617000;
case 0x617001:c.instructions+=1;goto B617001;
case 0x617006:goto L617006;
case 0x61700a:c.instructions+=2;goto B61700a;
case 0x61700e:c.instructions+=1;goto B61700e;
case 0x617012:goto L617012;
case 0x617016:c.instructions+=4;goto B617016;
case 0x617019:c.instructions+=3;goto B617019;
case 0x61701b:c.instructions+=2;goto B61701b;
case 0x61701e:c.instructions+=1;goto B61701e;
case 0x617023:goto L617023;
case 0x617027:c.instructions+=46;goto B617027;
case 0x61702b:c.instructions+=45;goto B61702b;
case 0x61702f:c.instructions+=44;goto B61702f;
case 0x617031:c.instructions+=43;goto B617031;
case 0x617035:c.instructions+=42;goto B617035;
case 0x617038:c.instructions+=41;goto B617038;
case 0x61703c:c.instructions+=40;goto B61703c;
case 0x61703f:c.instructions+=39;goto B61703f;
case 0x617046:c.instructions+=38;goto B617046;
case 0x617048:c.instructions+=37;goto B617048;
case 0x61704b:c.instructions+=36;goto B61704b;
case 0x61704e:c.instructions+=35;goto B61704e;
case 0x617050:c.instructions+=34;goto B617050;
case 0x617053:c.instructions+=33;goto B617053;
case 0x617056:c.instructions+=32;goto B617056;
case 0x617059:c.instructions+=31;goto B617059;
case 0x61705b:c.instructions+=30;goto B61705b;
case 0x61705e:c.instructions+=29;goto B61705e;
case 0x617060:c.instructions+=28;goto B617060;
case 0x617063:c.instructions+=27;goto B617063;
case 0x617066:c.instructions+=26;goto B617066;
case 0x617068:c.instructions+=25;goto B617068;
case 0x61706b:c.instructions+=24;goto B61706b;
case 0x61706e:c.instructions+=23;goto B61706e;
case 0x617071:c.instructions+=22;goto B617071;
case 0x617073:c.instructions+=21;goto B617073;
case 0x617076:c.instructions+=20;goto B617076;
case 0x617078:c.instructions+=19;goto B617078;
case 0x61707b:c.instructions+=18;goto B61707b;
case 0x61707f:c.instructions+=17;goto B61707f;
case 0x617082:c.instructions+=16;goto B617082;
case 0x617086:c.instructions+=15;goto B617086;
case 0x617088:c.instructions+=14;goto B617088;
case 0x61708b:c.instructions+=13;goto B61708b;
case 0x617092:c.instructions+=12;goto B617092;
case 0x617099:c.instructions+=11;goto B617099;
case 0x61709c:c.instructions+=10;goto B61709c;
case 0x61709e:c.instructions+=9;goto B61709e;
case 0x6170a5:c.instructions+=8;goto B6170a5;
case 0x6170a7:c.instructions+=7;goto B6170a7;
case 0x6170ab:c.instructions+=6;goto B6170ab;
case 0x6170ac:c.instructions+=5;goto B6170ac;
case 0x6170af:c.instructions+=4;goto B6170af;
case 0x6170b0:c.instructions+=3;goto B6170b0;
case 0x6170b2:c.instructions+=2;goto B6170b2;
case 0x6170b3:c.instructions+=1;goto B6170b3;
case 0x6170b8:goto L6170b8;
case 0x6170bb:c.instructions+=9;goto B6170bb;
case 0x6170bf:c.instructions+=8;goto B6170bf;
case 0x6170c5:c.instructions+=7;goto B6170c5;
case 0x6170c9:c.instructions+=6;goto B6170c9;
case 0x6170ca:c.instructions+=5;goto B6170ca;
case 0x6170ce:c.instructions+=4;goto B6170ce;
case 0x6170d1:c.instructions+=3;goto B6170d1;
case 0x6170d2:c.instructions+=2;goto B6170d2;
case 0x6170d3:c.instructions+=1;goto B6170d3;
case 0x6170d8:goto L6170d8;
case 0x6170dc:c.instructions+=10;goto B6170dc;
case 0x6170e0:c.instructions+=9;goto B6170e0;
case 0x6170e3:c.instructions+=8;goto B6170e3;
case 0x6170e6:c.instructions+=7;goto B6170e6;
case 0x6170e7:c.instructions+=6;goto B6170e7;
case 0x6170ea:c.instructions+=5;goto B6170ea;
case 0x6170ef:c.instructions+=4;goto B6170ef;
case 0x6170f3:c.instructions+=3;goto B6170f3;
case 0x6170f7:c.instructions+=2;goto B6170f7;
case 0x6170fb:c.instructions+=1;goto B6170fb;
case 0x617101:goto L617101;
case 0x617109:c.instructions+=1;goto B617109;
case 0x617110:goto L617110;
case 0x617117:c.instructions+=7;goto B617117;
case 0x617118:c.instructions+=6;goto B617118;
case 0x61711c:c.instructions+=5;goto B61711c;
case 0x61711e:c.instructions+=4;goto B61711e;
case 0x617121:c.instructions+=3;goto B617121;
case 0x617123:c.instructions+=2;goto B617123;
case 0x617124:c.instructions+=1;goto B617124;
case 0x617129:goto L617129;
case 0x61712b:c.instructions+=4;goto B61712b;
case 0x617132:c.instructions+=3;goto B617132;
case 0x617134:c.instructions+=2;goto B617134;
case 0x617138:c.instructions+=1;goto B617138;
case 0x61713a:goto L61713a;
case 0x61713e:c.instructions+=2;goto B61713e;
case 0x617145:c.instructions+=1;goto B617145;
case 0x617147:goto L617147;
case 0x61714a:c.instructions+=11;goto B61714a;
case 0x61714d:c.instructions+=10;goto B61714d;
case 0x617154:c.instructions+=9;goto B617154;
case 0x617156:c.instructions+=8;goto B617156;
case 0x61715d:c.instructions+=7;goto B61715d;
case 0x617161:c.instructions+=6;goto B617161;
case 0x617164:c.instructions+=5;goto B617164;
case 0x61716b:c.instructions+=4;goto B61716b;
case 0x61716f:c.instructions+=3;goto B61716f;
case 0x617171:c.instructions+=2;goto B617171;
case 0x617178:c.instructions+=1;goto B617178;
case 0x61717a:goto L61717a;
case 0x61717c:c.instructions+=5;goto B61717c;
case 0x61717e:c.instructions+=4;goto B61717e;
case 0x617180:c.instructions+=3;goto B617180;
case 0x617183:c.instructions+=2;goto B617183;
case 0x617185:c.instructions+=1;goto B617185;
case 0x617187:goto L617187;
case 0x61718b:c.instructions+=2;goto B61718b;
case 0x61718d:c.instructions+=1;goto B61718d;
case 0x61718f:goto L61718f;
case 0x617191:c.instructions+=1;goto B617191;
case 0x617193:goto L617193;
case 0x617199:c.instructions+=4;goto B617199;
case 0x61719b:c.instructions+=3;goto B61719b;
case 0x61719c:c.instructions+=2;goto B61719c;
case 0x61719d:c.instructions+=1;goto B61719d;
case 0x6171a2:goto L6171a2;
case 0x6171a5:c.instructions+=2;goto B6171a5;
case 0x6171a7:c.instructions+=1;goto B6171a7;
case 0x6171a9:goto L6171a9;
case 0x6171ac:c.instructions+=2;goto B6171ac;
case 0x6171ad:c.instructions+=1;goto B6171ad;
case 0x6171b2:goto L6171b2;
case 0x6171b5:c.instructions+=2;goto B6171b5;
case 0x6171b7:c.instructions+=1;goto B6171b7;
case 0x6171b9:goto L6171b9;
case 0x6171bb:c.instructions+=4;goto B6171bb;
case 0x6171c1:c.instructions+=3;goto B6171c1;
case 0x6171c3:c.instructions+=2;goto B6171c3;
case 0x6171ca:c.instructions+=1;goto B6171ca;
case 0x6171cc:goto L6171cc;
case 0x6171d0:goto L6171d0;
case 0x6171d7:c.instructions+=10;goto B6171d7;
case 0x6171d9:c.instructions+=9;goto B6171d9;
case 0x6171df:c.instructions+=8;goto B6171df;
case 0x6171e0:c.instructions+=7;goto B6171e0;
case 0x6171e3:c.instructions+=6;goto B6171e3;
case 0x6171e5:c.instructions+=5;goto B6171e5;
case 0x6171e8:c.instructions+=4;goto B6171e8;
case 0x6171ef:c.instructions+=3;goto B6171ef;
case 0x6171f6:c.instructions+=2;goto B6171f6;
case 0x6171f7:c.instructions+=1;goto B6171f7;
case 0x6171f9:goto L6171f9;
case 0x6171fd:c.instructions+=6;goto B6171fd;
case 0x6171ff:c.instructions+=5;goto B6171ff;
case 0x617200:c.instructions+=4;goto B617200;
case 0x617203:c.instructions+=3;goto B617203;
case 0x617206:c.instructions+=2;goto B617206;
case 0x61720a:c.instructions+=1;goto B61720a;
case 0x617210:goto L617210;
case 0x617217:c.instructions+=1;goto B617217;
case 0x617219:goto L617219;
case 0x61721b:c.instructions+=1;goto B61721b;
case 0x617222:goto L617222;
case 0x617228:c.instructions+=7;goto B617228;
case 0x61722a:c.instructions+=6;goto B61722a;
case 0x61722c:c.instructions+=5;goto B61722c;
case 0x61722e:c.instructions+=4;goto B61722e;
case 0x617230:c.instructions+=3;goto B617230;
case 0x617233:c.instructions+=2;goto B617233;
case 0x617236:c.instructions+=1;goto B617236;
case 0x617238:goto L617238;
case 0x61723e:c.instructions+=2;goto B61723e;
case 0x617242:c.instructions+=1;goto B617242;
case 0x617244:goto L617244;
case 0x617245:c.instructions+=3;goto B617245;
case 0x617248:c.instructions+=2;goto B617248;
case 0x61724b:c.instructions+=1;goto B61724b;
case 0x61724d:goto L61724d;
case 0x61724f:c.instructions+=21;goto B61724f;
case 0x617251:c.instructions+=20;goto B617251;
case 0x617253:c.instructions+=19;goto B617253;
case 0x617259:c.instructions+=18;goto B617259;
case 0x617260:c.instructions+=17;goto B617260;
case 0x617267:c.instructions+=16;goto B617267;
case 0x61726a:c.instructions+=15;goto B61726a;
case 0x61726c:c.instructions+=14;goto B61726c;
case 0x61726e:c.instructions+=13;goto B61726e;
case 0x617270:c.instructions+=12;goto B617270;
case 0x617276:c.instructions+=11;goto B617276;
case 0x61727a:c.instructions+=10;goto B61727a;
case 0x61727d:c.instructions+=9;goto B61727d;
case 0x617280:c.instructions+=8;goto B617280;
case 0x617282:c.instructions+=7;goto B617282;
case 0x617289:c.instructions+=6;goto B617289;
case 0x617290:c.instructions+=5;goto B617290;
case 0x617292:c.instructions+=4;goto B617292;
case 0x617294:c.instructions+=3;goto B617294;
case 0x617296:c.instructions+=2;goto B617296;
case 0x617298:c.instructions+=1;goto B617298;
case 0x61729d:goto L61729d;
case 0x61729f:c.instructions+=2;goto B61729f;
case 0x6172a1:c.instructions+=1;goto B6172a1;
case 0x6172a3:goto L6172a3;
case 0x6172a5:c.instructions+=1;goto B6172a5;
case 0x6172a7:goto L6172a7;
case 0x6172ac:c.instructions+=1;goto B6172ac;
case 0x6172ae:goto L6172ae;
case 0x6172b3:goto L6172b3;
case 0x6172b7:c.instructions+=7;goto B6172b7;
case 0x6172bd:c.instructions+=6;goto B6172bd;
case 0x6172c0:c.instructions+=5;goto B6172c0;
case 0x6172c5:c.instructions+=4;goto B6172c5;
case 0x6172c7:c.instructions+=3;goto B6172c7;
case 0x6172ce:c.instructions+=2;goto B6172ce;
case 0x6172d2:c.instructions+=1;goto B6172d2;
case 0x6172d8:goto L6172d8;
case 0x6172dd:c.instructions+=1;goto B6172dd;
case 0x6172e3:goto L6172e3;
case 0x6172ea:c.instructions+=8;goto B6172ea;
case 0x6172ee:c.instructions+=7;goto B6172ee;
case 0x6172f5:c.instructions+=6;goto B6172f5;
case 0x6172f7:c.instructions+=5;goto B6172f7;
case 0x6172fb:c.instructions+=4;goto B6172fb;
case 0x617302:c.instructions+=3;goto B617302;
case 0x617309:c.instructions+=2;goto B617309;
case 0x61730d:c.instructions+=1;goto B61730d;
case 0x61730f:goto L61730f;
case 0x617313:goto L617313;
case 0x61731a:c.instructions+=4;goto B61731a;
case 0x617321:c.instructions+=3;goto B617321;
case 0x617326:c.instructions+=2;goto B617326;
case 0x617329:c.instructions+=1;goto B617329;
case 0x61732f:goto L61732f;
case 0x617336:c.instructions+=5;goto B617336;
case 0x61733d:c.instructions+=4;goto B61733d;
case 0x61733e:c.instructions+=3;goto B61733e;
case 0x617340:c.instructions+=2;goto B617340;
case 0x617341:c.instructions+=1;goto B617341;
case 0x617346:goto L617346;
case 0x617349:c.instructions+=2;goto B617349;
case 0x61734b:c.instructions+=1;goto B61734b;
case 0x617351:goto L617351;
case 0x617359:c.instructions+=1;goto B617359;
case 0x617360:goto L617360;
case 0x617364:c.instructions+=2;goto B617364;
case 0x617365:c.instructions+=1;goto B617365;
case 0x61736a:goto L61736a;
case 0x61736e:c.instructions+=2;goto B61736e;
case 0x61736f:c.instructions+=1;goto B61736f;
case 0x617374:goto L617374;
case 0x617377:c.instructions+=4;goto B617377;
case 0x617379:c.instructions+=3;goto B617379;
case 0x61737a:c.instructions+=2;goto B61737a;
case 0x61737b:c.instructions+=1;goto B61737b;
case 0x617380:goto L617380;
case 0x617384:c.instructions+=2;goto B617384;
case 0x617385:c.instructions+=1;goto B617385;
case 0x61738a:goto L61738a;
case 0x61738e:c.instructions+=2;goto B61738e;
case 0x61738f:c.instructions+=1;goto B61738f;
case 0x617394:goto L617394;
case 0x617397:c.instructions+=4;goto B617397;
case 0x617399:c.instructions+=3;goto B617399;
case 0x61739a:c.instructions+=2;goto B61739a;
case 0x61739b:c.instructions+=1;goto B61739b;
case 0x6173a0:goto L6173a0;
case 0x6173a4:c.instructions+=13;goto B6173a4;
case 0x6173a8:c.instructions+=12;goto B6173a8;
case 0x6173ad:c.instructions+=11;goto B6173ad;
case 0x6173af:c.instructions+=10;goto B6173af;
case 0x6173b1:c.instructions+=9;goto B6173b1;
case 0x6173b5:c.instructions+=8;goto B6173b5;
case 0x6173b8:c.instructions+=7;goto B6173b8;
case 0x6173bb:c.instructions+=6;goto B6173bb;
case 0x6173be:c.instructions+=5;goto B6173be;
case 0x6173bf:c.instructions+=4;goto B6173bf;
case 0x6173c3:c.instructions+=3;goto B6173c3;
case 0x6173c7:c.instructions+=2;goto B6173c7;
case 0x6173cb:c.instructions+=1;goto B6173cb;
case 0x6173cd:goto L6173cd;
case 0x6173d0:c.instructions+=2;goto B6173d0;
case 0x6173d1:c.instructions+=1;goto B6173d1;
case 0x6173d6:goto L6173d6;
case 0x6173d9:c.instructions+=1;goto B6173d9;
case 0x6173db:goto L6173db;
case 0x6173df:c.instructions+=7;goto B6173df;
case 0x6173e3:c.instructions+=6;goto B6173e3;
case 0x6173e5:c.instructions+=5;goto B6173e5;
case 0x6173e7:c.instructions+=4;goto B6173e7;
case 0x6173ea:c.instructions+=3;goto B6173ea;
case 0x6173ee:c.instructions+=2;goto B6173ee;
case 0x6173f2:c.instructions+=1;goto B6173f2;
case 0x6173f5:goto L6173f5;
case 0x6173f9:c.instructions+=4;goto B6173f9;
case 0x6173fa:c.instructions+=3;goto B6173fa;
case 0x6173fd:c.instructions+=2;goto B6173fd;
case 0x617401:c.instructions+=1;goto B617401;
case 0x617407:goto L617407;
case 0x61740b:c.instructions+=11;goto B61740b;
case 0x617411:c.instructions+=10;goto B617411;
case 0x617417:c.instructions+=9;goto B617417;
case 0x61741e:c.instructions+=8;goto B61741e;
case 0x617425:c.instructions+=7;goto B617425;
case 0x617427:c.instructions+=6;goto B617427;
case 0x617429:c.instructions+=5;goto B617429;
case 0x61742f:c.instructions+=4;goto B61742f;
case 0x617436:c.instructions+=3;goto B617436;
case 0x61743a:c.instructions+=2;goto B61743a;
case 0x61743e:c.instructions+=1;goto B61743e;
case 0x617440:goto L617440;
case 0x617442:goto L617442;
case 0x617444:c.instructions+=1;goto B617444;
case 0x617446:goto L617446;
case 0x617449:c.instructions+=1;goto B617449;
case 0x61744b:goto L61744b;
case 0x61744c:c.instructions+=3;goto B61744c;
case 0x61744f:c.instructions+=2;goto B61744f;
case 0x617452:c.instructions+=1;goto B617452;
case 0x617454:goto L617454;
case 0x617459:goto L617459;
case 0x61745d:c.instructions+=5;goto B61745d;
case 0x617460:c.instructions+=4;goto B617460;
case 0x617468:c.instructions+=3;goto B617468;
case 0x61746b:c.instructions+=2;goto B61746b;
case 0x61746e:c.instructions+=1;goto B61746e;
case 0x617470:goto L617470;
case 0x617474:c.instructions+=2;goto B617474;
case 0x61747b:c.instructions+=1;goto B61747b;
case 0x617482:goto L617482;
case 0x617485:c.instructions+=2;goto B617485;
case 0x617487:c.instructions+=1;goto B617487;
case 0x617489:goto L617489;
case 0x617490:c.instructions+=4;goto B617490;
case 0x617493:c.instructions+=3;goto B617493;
case 0x617494:c.instructions+=2;goto B617494;
case 0x617499:c.instructions+=1;goto B617499;
case 0x61749e:goto L61749e;
case 0x6174a5:c.instructions+=4;goto B6174a5;
case 0x6174a8:c.instructions+=3;goto B6174a8;
case 0x6174a9:c.instructions+=2;goto B6174a9;
case 0x6174ae:c.instructions+=1;goto B6174ae;
case 0x6174b3:goto L6174b3;
case 0x6174ba:c.instructions+=4;goto B6174ba;
case 0x6174bb:c.instructions+=3;goto B6174bb;
case 0x6174be:c.instructions+=2;goto B6174be;
case 0x6174c3:c.instructions+=1;goto B6174c3;
case 0x6174c8:goto L6174c8;
case 0x6174cb:c.instructions+=12;goto B6174cb;
case 0x6174d2:c.instructions+=11;goto B6174d2;
case 0x6174d5:c.instructions+=10;goto B6174d5;
case 0x6174d7:c.instructions+=9;goto B6174d7;
case 0x6174d9:c.instructions+=8;goto B6174d9;
case 0x6174e0:c.instructions+=7;goto B6174e0;
case 0x6174e6:c.instructions+=6;goto B6174e6;
case 0x6174e7:c.instructions+=5;goto B6174e7;
case 0x6174e8:c.instructions+=4;goto B6174e8;
case 0x6174e9:c.instructions+=3;goto B6174e9;
case 0x6174ea:c.instructions+=2;goto B6174ea;
case 0x6174ed:c.instructions+=1;goto B6174ed;
case 0x6174f2:goto L6174f2;
case 0x6174f4:goto L6174f4;
case 0x6174f8:c.instructions+=7;goto B6174f8;
case 0x6174fc:c.instructions+=6;goto B6174fc;
case 0x6174fd:c.instructions+=5;goto B6174fd;
case 0x617500:c.instructions+=4;goto B617500;
case 0x617503:c.instructions+=3;goto B617503;
case 0x617507:c.instructions+=2;goto B617507;
case 0x61750b:c.instructions+=1;goto B61750b;
case 0x617511:goto L617511;
case 0x617514:c.instructions+=6;goto B617514;
case 0x61751a:c.instructions+=5;goto B61751a;
case 0x61751f:c.instructions+=4;goto B61751f;
case 0x617525:c.instructions+=3;goto B617525;
case 0x61752c:c.instructions+=2;goto B61752c;
case 0x617533:c.instructions+=1;goto B617533;
case 0x617535:goto L617535;
case 0x617537:c.instructions+=5;goto B617537;
case 0x61753d:c.instructions+=4;goto B61753d;
case 0x617543:c.instructions+=3;goto B617543;
case 0x617545:c.instructions+=2;goto B617545;
case 0x617548:c.instructions+=1;goto B617548;
case 0x61754a:goto L61754a;
case 0x61754e:c.instructions+=3;goto B61754e;
case 0x617551:c.instructions+=2;goto B617551;
case 0x617554:c.instructions+=1;goto B617554;
case 0x617559:goto L617559;
case 0x61755b:c.instructions+=1;goto B61755b;
case 0x61755d:goto L61755d;
case 0x617563:c.instructions+=1;goto B617563;
case 0x617569:goto L617569;
case 0x61756c:c.instructions+=11;goto B61756c;
case 0x617572:c.instructions+=10;goto B617572;
case 0x617579:c.instructions+=9;goto B617579;
case 0x61757c:c.instructions+=8;goto B61757c;
case 0x617580:c.instructions+=7;goto B617580;
case 0x617584:c.instructions+=6;goto B617584;
case 0x61758a:c.instructions+=5;goto B61758a;
case 0x61758f:c.instructions+=4;goto B61758f;
case 0x617593:c.instructions+=3;goto B617593;
case 0x61759a:c.instructions+=2;goto B61759a;
case 0x61759c:c.instructions+=1;goto B61759c;
case 0x6175a0:goto L6175a0;
case 0x6175a4:c.instructions+=11;goto B6175a4;
case 0x6175a6:c.instructions+=10;goto B6175a6;
case 0x6175ad:c.instructions+=9;goto B6175ad;
case 0x6175b4:c.instructions+=8;goto B6175b4;
case 0x6175b6:c.instructions+=7;goto B6175b6;
case 0x6175b8:c.instructions+=6;goto B6175b8;
case 0x6175bc:c.instructions+=5;goto B6175bc;
case 0x6175c0:c.instructions+=4;goto B6175c0;
case 0x6175c6:c.instructions+=3;goto B6175c6;
case 0x6175c8:c.instructions+=2;goto B6175c8;
case 0x6175cb:c.instructions+=1;goto B6175cb;
case 0x6175cd:goto L6175cd;
case 0x6175cf:c.instructions+=1;goto B6175cf;
case 0x6175d6:goto L6175d6;
case 0x6175db:c.instructions+=42;goto B6175db;
case 0x6175dd:c.instructions+=41;goto B6175dd;
case 0x6175e4:c.instructions+=40;goto B6175e4;
case 0x6175eb:c.instructions+=39;goto B6175eb;
case 0x6175f2:c.instructions+=38;goto B6175f2;
case 0x6175f9:c.instructions+=37;goto B6175f9;
case 0x617600:c.instructions+=36;goto B617600;
case 0x617607:c.instructions+=35;goto B617607;
case 0x61760e:c.instructions+=34;goto B61760e;
case 0x617615:c.instructions+=33;goto B617615;
case 0x61761c:c.instructions+=32;goto B61761c;
case 0x617623:c.instructions+=31;goto B617623;
case 0x61762a:c.instructions+=30;goto B61762a;
case 0x617631:c.instructions+=29;goto B617631;
case 0x617638:c.instructions+=28;goto B617638;
case 0x61763f:c.instructions+=27;goto B61763f;
case 0x617646:c.instructions+=26;goto B617646;
case 0x61764d:c.instructions+=25;goto B61764d;
case 0x617654:c.instructions+=24;goto B617654;
case 0x617658:c.instructions+=23;goto B617658;
case 0x61765f:c.instructions+=22;goto B61765f;
case 0x617661:c.instructions+=21;goto B617661;
case 0x617668:c.instructions+=20;goto B617668;
case 0x61766f:c.instructions+=19;goto B61766f;
case 0x617676:c.instructions+=18;goto B617676;
case 0x61767a:c.instructions+=17;goto B61767a;
case 0x617681:c.instructions+=16;goto B617681;
case 0x617687:c.instructions+=15;goto B617687;
case 0x61768e:c.instructions+=14;goto B61768e;
case 0x617695:c.instructions+=13;goto B617695;
case 0x61769c:c.instructions+=12;goto B61769c;
case 0x6176a3:c.instructions+=11;goto B6176a3;
case 0x6176a5:c.instructions+=10;goto B6176a5;
case 0x6176ac:c.instructions+=9;goto B6176ac;
case 0x6176b3:c.instructions+=8;goto B6176b3;
case 0x6176b6:c.instructions+=7;goto B6176b6;
case 0x6176bd:c.instructions+=6;goto B6176bd;
case 0x6176c4:c.instructions+=5;goto B6176c4;
case 0x6176cb:c.instructions+=4;goto B6176cb;
case 0x6176d2:c.instructions+=3;goto B6176d2;
case 0x6176d9:c.instructions+=2;goto B6176d9;
case 0x6176e0:c.instructions+=1;goto B6176e0;
case 0x6176e2:goto L6176e2;
case 0x6176e6:c.instructions+=2;goto B6176e6;
case 0x6176ea:c.instructions+=1;goto B6176ea;
case 0x6176ec:goto L6176ec;
case 0x6176f0:c.instructions+=1;goto B6176f0;
case 0x6176f4:goto L6176f4;
case 0x6176fa:c.instructions+=3;goto B6176fa;
case 0x6176fc:c.instructions+=2;goto B6176fc;
case 0x617703:c.instructions+=1;goto B617703;
case 0x617705:goto L617705;
case 0x61770c:c.instructions+=2;goto B61770c;
case 0x61770e:c.instructions+=1;goto B61770e;
case 0x617715:goto L617715;
case 0x617719:c.instructions+=9;goto B617719;
case 0x61771b:c.instructions+=8;goto B61771b;
case 0x617720:c.instructions+=7;goto B617720;
case 0x617728:c.instructions+=6;goto B617728;
case 0x61772c:c.instructions+=5;goto B61772c;
case 0x61772f:c.instructions+=4;goto B61772f;
case 0x617732:c.instructions+=3;goto B617732;
case 0x617738:c.instructions+=2;goto B617738;
case 0x61773c:c.instructions+=1;goto B61773c;
case 0x617742:goto L617742;
case 0x617746:c.instructions+=6;goto B617746;
case 0x617748:c.instructions+=5;goto B617748;
case 0x61774b:c.instructions+=4;goto B61774b;
case 0x61774d:c.instructions+=3;goto B61774d;
case 0x617753:c.instructions+=2;goto B617753;
case 0x617755:c.instructions+=1;goto B617755;
case 0x61775b:goto L61775b;
case 0x61775e:c.instructions+=1;goto B61775e;
case 0x617764:goto L617764;
case 0x617766:c.instructions+=1;goto B617766;
case 0x61776b:goto L61776b;
case 0x61776d:c.instructions+=3;goto B61776d;
case 0x617772:c.instructions+=2;goto B617772;
case 0x617776:c.instructions+=1;goto B617776;
case 0x61777b:goto L61777b;
case 0x61777d:c.instructions+=4;goto B61777d;
case 0x617780:c.instructions+=3;goto B617780;
case 0x617782:c.instructions+=2;goto B617782;
case 0x617786:c.instructions+=1;goto B617786;
case 0x61778c:goto L61778c;
case 0x61778e:c.instructions+=1;goto B61778e;
case 0x617794:goto L617794;
case 0x617798:c.instructions+=3;goto B617798;
case 0x61779e:c.instructions+=2;goto B61779e;
case 0x6177a0:c.instructions+=1;goto B6177a0;
case 0x6177a2:goto L6177a2;
case 0x6177a4:c.instructions+=2;goto B6177a4;
case 0x6177a6:c.instructions+=1;goto B6177a6;
case 0x6177a8:goto L6177a8;
case 0x6177ae:c.instructions+=2;goto B6177ae;
case 0x6177b0:c.instructions+=1;goto B6177b0;
case 0x6177b2:goto L6177b2;
case 0x6177b7:c.instructions+=2;goto B6177b7;
case 0x6177be:c.instructions+=1;goto B6177be;
case 0x6177c0:goto L6177c0;
case 0x6177c7:c.instructions+=1;goto B6177c7;
case 0x6177cc:goto L6177cc;
case 0x6177d2:c.instructions+=2;goto B6177d2;
case 0x6177d4:c.instructions+=1;goto B6177d4;
case 0x6177d6:goto L6177d6;
case 0x6177d8:c.instructions+=2;goto B6177d8;
case 0x6177da:c.instructions+=1;goto B6177da;
case 0x6177dc:goto L6177dc;
case 0x6177e3:c.instructions+=1;goto B6177e3;
case 0x6177e5:goto L6177e5;
case 0x6177e9:c.instructions+=1;goto B6177e9;
case 0x6177eb:goto L6177eb;
case 0x6177ef:goto L6177ef;
case 0x6177f5:c.instructions+=2;goto B6177f5;
case 0x6177f7:c.instructions+=1;goto B6177f7;
case 0x6177f9:goto L6177f9;
case 0x6177fb:c.instructions+=2;goto B6177fb;
case 0x6177fd:c.instructions+=1;goto B6177fd;
case 0x6177ff:goto L6177ff;
case 0x617806:c.instructions+=1;goto B617806;
case 0x617808:goto L617808;
case 0x61780c:c.instructions+=1;goto B61780c;
case 0x61780e:goto L61780e;
case 0x617812:goto L617812;
case 0x617818:c.instructions+=2;goto B617818;
case 0x61781a:c.instructions+=1;goto B61781a;
case 0x61781c:goto L61781c;
case 0x61781e:c.instructions+=2;goto B61781e;
case 0x617820:c.instructions+=1;goto B617820;
case 0x617822:goto L617822;
case 0x617829:c.instructions+=1;goto B617829;
case 0x61782b:goto L61782b;
case 0x61782f:c.instructions+=1;goto B61782f;
case 0x617831:goto L617831;
case 0x617835:goto L617835;
case 0x61783c:c.instructions+=3;goto B61783c;
case 0x61783f:c.instructions+=2;goto B61783f;
case 0x617846:c.instructions+=1;goto B617846;
case 0x617848:goto L617848;
case 0x617853:goto L617853;
case 0x617858:c.instructions+=21;goto B617858;
case 0x61785f:c.instructions+=20;goto B61785f;
case 0x617860:c.instructions+=19;goto B617860;
case 0x617867:c.instructions+=18;goto B617867;
case 0x617868:c.instructions+=17;goto B617868;
case 0x617873:c.instructions+=16;goto B617873;
case 0x61787e:c.instructions+=15;goto B61787e;
case 0x617889:c.instructions+=14;goto B617889;
case 0x617894:c.instructions+=13;goto B617894;
case 0x61789f:c.instructions+=12;goto B61789f;
case 0x6178aa:c.instructions+=11;goto B6178aa;
case 0x6178b5:c.instructions+=10;goto B6178b5;
case 0x6178c0:c.instructions+=9;goto B6178c0;
case 0x6178cb:c.instructions+=8;goto B6178cb;
case 0x6178d6:c.instructions+=7;goto B6178d6;
case 0x6178e1:c.instructions+=6;goto B6178e1;
case 0x6178ec:c.instructions+=5;goto B6178ec;
case 0x6178f7:c.instructions+=4;goto B6178f7;
case 0x617902:c.instructions+=3;goto B617902;
case 0x61790d:c.instructions+=2;goto B61790d;
case 0x617918:c.instructions+=1;goto B617918;
case 0x61791d:goto L61791d;
case 0x617923:c.instructions+=4;goto B617923;
case 0x617926:c.instructions+=3;goto B617926;
case 0x61792d:c.instructions+=2;goto B61792d;
case 0x617938:c.instructions+=1;goto B617938;
case 0x617940:goto L617940;
case 0x617944:c.instructions+=6;goto B617944;
case 0x61794b:c.instructions+=5;goto B61794b;
case 0x617952:c.instructions+=4;goto B617952;
case 0x617954:c.instructions+=3;goto B617954;
case 0x61795b:c.instructions+=2;goto B61795b;
case 0x617962:c.instructions+=1;goto B617962;
case 0x617964:goto L617964;
case 0x61796b:c.instructions+=2;goto B61796b;
case 0x61796d:c.instructions+=1;goto B61796d;
case 0x61796f:goto L61796f;
case 0x617971:c.instructions+=4;goto B617971;
case 0x617972:c.instructions+=3;goto B617972;
case 0x617977:c.instructions+=2;goto B617977;
case 0x617979:c.instructions+=1;goto B617979;
case 0x61797e:goto L61797e;
case 0x617985:c.instructions+=4;goto B617985;
case 0x617986:c.instructions+=3;goto B617986;
case 0x61798b:c.instructions+=2;goto B61798b;
case 0x61798d:c.instructions+=1;goto B61798d;
case 0x617992:goto L617992;
case 0x617999:c.instructions+=4;goto B617999;
case 0x61799a:c.instructions+=3;goto B61799a;
case 0x61799f:c.instructions+=2;goto B61799f;
case 0x6179a1:c.instructions+=1;goto B6179a1;
case 0x6179a6:goto L6179a6;
case 0x6179ad:c.instructions+=2;goto B6179ad;
case 0x6179af:c.instructions+=1;goto B6179af;
case 0x6179b1:goto L6179b1;
case 0x6179b8:c.instructions+=2;goto B6179b8;
case 0x6179ba:c.instructions+=1;goto B6179ba;
case 0x6179bc:goto L6179bc;
case 0x6179be:c.instructions+=4;goto B6179be;
case 0x6179bf:c.instructions+=3;goto B6179bf;
case 0x6179c4:c.instructions+=2;goto B6179c4;
case 0x6179c6:c.instructions+=1;goto B6179c6;
case 0x6179cb:goto L6179cb;
case 0x6179d2:c.instructions+=4;goto B6179d2;
case 0x6179d3:c.instructions+=3;goto B6179d3;
case 0x6179d8:c.instructions+=2;goto B6179d8;
case 0x6179da:c.instructions+=1;goto B6179da;
case 0x6179df:goto L6179df;
case 0x6179e6:c.instructions+=4;goto B6179e6;
case 0x6179e7:c.instructions+=3;goto B6179e7;
case 0x6179ec:c.instructions+=2;goto B6179ec;
case 0x6179ee:c.instructions+=1;goto B6179ee;
case 0x6179f3:goto L6179f3;
case 0x6179fa:c.instructions+=1;goto B6179fa;
case 0x617a00:goto L617a00;
case 0x617a07:c.instructions+=2;goto B617a07;
case 0x617a09:c.instructions+=1;goto B617a09;
case 0x617a0f:goto L617a0f;
case 0x617a16:c.instructions+=196;goto B617a16;
case 0x617a1d:c.instructions+=195;goto B617a1d;
case 0x617a24:c.instructions+=194;goto B617a24;
case 0x617a2b:c.instructions+=193;goto B617a2b;
case 0x617a2d:c.instructions+=192;goto B617a2d;
case 0x617a34:c.instructions+=191;goto B617a34;
case 0x617a3b:c.instructions+=190;goto B617a3b;
case 0x617a3d:c.instructions+=189;goto B617a3d;
case 0x617a44:c.instructions+=188;goto B617a44;
case 0x617a4b:c.instructions+=187;goto B617a4b;
case 0x617a4d:c.instructions+=186;goto B617a4d;
case 0x617a51:c.instructions+=185;goto B617a51;
case 0x617a58:c.instructions+=184;goto B617a58;
case 0x617a5f:c.instructions+=183;goto B617a5f;
case 0x617a66:c.instructions+=182;goto B617a66;
case 0x617a6d:c.instructions+=181;goto B617a6d;
case 0x617a6f:c.instructions+=180;goto B617a6f;
case 0x617a76:c.instructions+=179;goto B617a76;
case 0x617a7d:c.instructions+=178;goto B617a7d;
case 0x617a7f:c.instructions+=177;goto B617a7f;
case 0x617a86:c.instructions+=176;goto B617a86;
case 0x617a8d:c.instructions+=175;goto B617a8d;
case 0x617a8f:c.instructions+=174;goto B617a8f;
case 0x617a93:c.instructions+=173;goto B617a93;
case 0x617a9a:c.instructions+=172;goto B617a9a;
case 0x617aa1:c.instructions+=171;goto B617aa1;
case 0x617aa8:c.instructions+=170;goto B617aa8;
case 0x617aaf:c.instructions+=169;goto B617aaf;
case 0x617ab1:c.instructions+=168;goto B617ab1;
case 0x617ab8:c.instructions+=167;goto B617ab8;
case 0x617abf:c.instructions+=166;goto B617abf;
case 0x617ac1:c.instructions+=165;goto B617ac1;
case 0x617ac8:c.instructions+=164;goto B617ac8;
case 0x617acf:c.instructions+=163;goto B617acf;
case 0x617ad1:c.instructions+=162;goto B617ad1;
case 0x617ad5:c.instructions+=161;goto B617ad5;
case 0x617adc:c.instructions+=160;goto B617adc;
case 0x617ae3:c.instructions+=159;goto B617ae3;
case 0x617aea:c.instructions+=158;goto B617aea;
case 0x617af1:c.instructions+=157;goto B617af1;
case 0x617af3:c.instructions+=156;goto B617af3;
case 0x617afa:c.instructions+=155;goto B617afa;
case 0x617b01:c.instructions+=154;goto B617b01;
case 0x617b03:c.instructions+=153;goto B617b03;
case 0x617b0a:c.instructions+=152;goto B617b0a;
case 0x617b11:c.instructions+=151;goto B617b11;
case 0x617b13:c.instructions+=150;goto B617b13;
case 0x617b17:c.instructions+=149;goto B617b17;
case 0x617b1e:c.instructions+=148;goto B617b1e;
case 0x617b25:c.instructions+=147;goto B617b25;
case 0x617b2c:c.instructions+=146;goto B617b2c;
case 0x617b33:c.instructions+=145;goto B617b33;
case 0x617b35:c.instructions+=144;goto B617b35;
case 0x617b3c:c.instructions+=143;goto B617b3c;
case 0x617b43:c.instructions+=142;goto B617b43;
case 0x617b45:c.instructions+=141;goto B617b45;
case 0x617b4c:c.instructions+=140;goto B617b4c;
case 0x617b53:c.instructions+=139;goto B617b53;
case 0x617b55:c.instructions+=138;goto B617b55;
case 0x617b5c:c.instructions+=137;goto B617b5c;
case 0x617b63:c.instructions+=136;goto B617b63;
case 0x617b6a:c.instructions+=135;goto B617b6a;
case 0x617b71:c.instructions+=134;goto B617b71;
case 0x617b78:c.instructions+=133;goto B617b78;
case 0x617b7a:c.instructions+=132;goto B617b7a;
case 0x617b81:c.instructions+=131;goto B617b81;
case 0x617b88:c.instructions+=130;goto B617b88;
case 0x617b8a:c.instructions+=129;goto B617b8a;
case 0x617b91:c.instructions+=128;goto B617b91;
case 0x617b98:c.instructions+=127;goto B617b98;
case 0x617b9a:c.instructions+=126;goto B617b9a;
case 0x617ba1:c.instructions+=125;goto B617ba1;
case 0x617ba8:c.instructions+=124;goto B617ba8;
case 0x617baf:c.instructions+=123;goto B617baf;
case 0x617bb6:c.instructions+=122;goto B617bb6;
case 0x617bbd:c.instructions+=121;goto B617bbd;
case 0x617bbf:c.instructions+=120;goto B617bbf;
case 0x617bc6:c.instructions+=119;goto B617bc6;
case 0x617bcd:c.instructions+=118;goto B617bcd;
case 0x617bcf:c.instructions+=117;goto B617bcf;
case 0x617bd6:c.instructions+=116;goto B617bd6;
case 0x617bdd:c.instructions+=115;goto B617bdd;
case 0x617bdf:c.instructions+=114;goto B617bdf;
case 0x617be6:c.instructions+=113;goto B617be6;
case 0x617bed:c.instructions+=112;goto B617bed;
case 0x617bf4:c.instructions+=111;goto B617bf4;
case 0x617bfb:c.instructions+=110;goto B617bfb;
case 0x617c02:c.instructions+=109;goto B617c02;
case 0x617c04:c.instructions+=108;goto B617c04;
case 0x617c0b:c.instructions+=107;goto B617c0b;
case 0x617c12:c.instructions+=106;goto B617c12;
case 0x617c14:c.instructions+=105;goto B617c14;
case 0x617c1b:c.instructions+=104;goto B617c1b;
case 0x617c22:c.instructions+=103;goto B617c22;
case 0x617c24:c.instructions+=102;goto B617c24;
case 0x617c2b:c.instructions+=101;goto B617c2b;
case 0x617c32:c.instructions+=100;goto B617c32;
case 0x617c39:c.instructions+=99;goto B617c39;
case 0x617c40:c.instructions+=98;goto B617c40;
case 0x617c47:c.instructions+=97;goto B617c47;
case 0x617c49:c.instructions+=96;goto B617c49;
case 0x617c50:c.instructions+=95;goto B617c50;
case 0x617c57:c.instructions+=94;goto B617c57;
case 0x617c59:c.instructions+=93;goto B617c59;
case 0x617c60:c.instructions+=92;goto B617c60;
case 0x617c67:c.instructions+=91;goto B617c67;
case 0x617c69:c.instructions+=90;goto B617c69;
case 0x617c70:c.instructions+=89;goto B617c70;
case 0x617c77:c.instructions+=88;goto B617c77;
case 0x617c7e:c.instructions+=87;goto B617c7e;
case 0x617c85:c.instructions+=86;goto B617c85;
case 0x617c8c:c.instructions+=85;goto B617c8c;
case 0x617c8e:c.instructions+=84;goto B617c8e;
case 0x617c95:c.instructions+=83;goto B617c95;
case 0x617c9c:c.instructions+=82;goto B617c9c;
case 0x617c9e:c.instructions+=81;goto B617c9e;
case 0x617ca5:c.instructions+=80;goto B617ca5;
case 0x617cac:c.instructions+=79;goto B617cac;
case 0x617cae:c.instructions+=78;goto B617cae;
case 0x617cb5:c.instructions+=77;goto B617cb5;
case 0x617cbc:c.instructions+=76;goto B617cbc;
case 0x617cc3:c.instructions+=75;goto B617cc3;
case 0x617cca:c.instructions+=74;goto B617cca;
case 0x617cd1:c.instructions+=73;goto B617cd1;
case 0x617cd3:c.instructions+=72;goto B617cd3;
case 0x617cda:c.instructions+=71;goto B617cda;
case 0x617ce1:c.instructions+=70;goto B617ce1;
case 0x617ce3:c.instructions+=69;goto B617ce3;
case 0x617cea:c.instructions+=68;goto B617cea;
case 0x617cf1:c.instructions+=67;goto B617cf1;
case 0x617cf3:c.instructions+=66;goto B617cf3;
case 0x617cfa:c.instructions+=65;goto B617cfa;
case 0x617d01:c.instructions+=64;goto B617d01;
case 0x617d08:c.instructions+=63;goto B617d08;
case 0x617d0f:c.instructions+=62;goto B617d0f;
case 0x617d16:c.instructions+=61;goto B617d16;
case 0x617d18:c.instructions+=60;goto B617d18;
case 0x617d1f:c.instructions+=59;goto B617d1f;
case 0x617d26:c.instructions+=58;goto B617d26;
case 0x617d28:c.instructions+=57;goto B617d28;
case 0x617d2f:c.instructions+=56;goto B617d2f;
case 0x617d36:c.instructions+=55;goto B617d36;
case 0x617d38:c.instructions+=54;goto B617d38;
case 0x617d3f:c.instructions+=53;goto B617d3f;
case 0x617d46:c.instructions+=52;goto B617d46;
case 0x617d4d:c.instructions+=51;goto B617d4d;
case 0x617d54:c.instructions+=50;goto B617d54;
case 0x617d5b:c.instructions+=49;goto B617d5b;
case 0x617d5d:c.instructions+=48;goto B617d5d;
case 0x617d64:c.instructions+=47;goto B617d64;
case 0x617d6b:c.instructions+=46;goto B617d6b;
case 0x617d6d:c.instructions+=45;goto B617d6d;
case 0x617d74:c.instructions+=44;goto B617d74;
case 0x617d7b:c.instructions+=43;goto B617d7b;
case 0x617d7d:c.instructions+=42;goto B617d7d;
case 0x617d84:c.instructions+=41;goto B617d84;
case 0x617d8b:c.instructions+=40;goto B617d8b;
case 0x617d92:c.instructions+=39;goto B617d92;
case 0x617d99:c.instructions+=38;goto B617d99;
case 0x617da0:c.instructions+=37;goto B617da0;
case 0x617da2:c.instructions+=36;goto B617da2;
case 0x617da9:c.instructions+=35;goto B617da9;
case 0x617db0:c.instructions+=34;goto B617db0;
case 0x617db2:c.instructions+=33;goto B617db2;
case 0x617db9:c.instructions+=32;goto B617db9;
case 0x617dc0:c.instructions+=31;goto B617dc0;
case 0x617dc2:c.instructions+=30;goto B617dc2;
case 0x617dc9:c.instructions+=29;goto B617dc9;
case 0x617dd0:c.instructions+=28;goto B617dd0;
case 0x617dd7:c.instructions+=27;goto B617dd7;
case 0x617dde:c.instructions+=26;goto B617dde;
case 0x617de5:c.instructions+=25;goto B617de5;
case 0x617de7:c.instructions+=24;goto B617de7;
case 0x617dee:c.instructions+=23;goto B617dee;
case 0x617df5:c.instructions+=22;goto B617df5;
case 0x617df7:c.instructions+=21;goto B617df7;
case 0x617dfe:c.instructions+=20;goto B617dfe;
case 0x617e05:c.instructions+=19;goto B617e05;
case 0x617e07:c.instructions+=18;goto B617e07;
case 0x617e0e:c.instructions+=17;goto B617e0e;
case 0x617e15:c.instructions+=16;goto B617e15;
case 0x617e1c:c.instructions+=15;goto B617e1c;
case 0x617e23:c.instructions+=14;goto B617e23;
case 0x617e27:c.instructions+=13;goto B617e27;
case 0x617e2e:c.instructions+=12;goto B617e2e;
case 0x617e2f:c.instructions+=11;goto B617e2f;
case 0x617e33:c.instructions+=10;goto B617e33;
case 0x617e34:c.instructions+=9;goto B617e34;
case 0x617e36:c.instructions+=8;goto B617e36;
case 0x617e3d:c.instructions+=7;goto B617e3d;
case 0x617e44:c.instructions+=6;goto B617e44;
case 0x617e46:c.instructions+=5;goto B617e46;
case 0x617e4d:c.instructions+=4;goto B617e4d;
case 0x617e54:c.instructions+=3;goto B617e54;
case 0x617e56:c.instructions+=2;goto B617e56;
case 0x617e5d:c.instructions+=1;goto B617e5d;
case 0x617e62:goto L617e62;
case 0x617e66:c.instructions+=123;goto B617e66;
case 0x617e69:c.instructions+=122;goto B617e69;
case 0x617e6d:c.instructions+=121;goto B617e6d;
case 0x617e6f:c.instructions+=120;goto B617e6f;
case 0x617e71:c.instructions+=119;goto B617e71;
case 0x617e75:c.instructions+=118;goto B617e75;
case 0x617e78:c.instructions+=117;goto B617e78;
case 0x617e7a:c.instructions+=116;goto B617e7a;
case 0x617e7e:c.instructions+=115;goto B617e7e;
case 0x617e81:c.instructions+=114;goto B617e81;
case 0x617e83:c.instructions+=113;goto B617e83;
case 0x617e87:c.instructions+=112;goto B617e87;
case 0x617e8b:c.instructions+=111;goto B617e8b;
case 0x617e8e:c.instructions+=110;goto B617e8e;
case 0x617e92:c.instructions+=109;goto B617e92;
case 0x617e95:c.instructions+=108;goto B617e95;
case 0x617e97:c.instructions+=107;goto B617e97;
case 0x617e9b:c.instructions+=106;goto B617e9b;
case 0x617e9e:c.instructions+=105;goto B617e9e;
case 0x617ea0:c.instructions+=104;goto B617ea0;
case 0x617ea4:c.instructions+=103;goto B617ea4;
case 0x617ea7:c.instructions+=102;goto B617ea7;
case 0x617ea9:c.instructions+=101;goto B617ea9;
case 0x617ead:c.instructions+=100;goto B617ead;
case 0x617eb1:c.instructions+=99;goto B617eb1;
case 0x617eb4:c.instructions+=98;goto B617eb4;
case 0x617eb8:c.instructions+=97;goto B617eb8;
case 0x617ebb:c.instructions+=96;goto B617ebb;
case 0x617ebd:c.instructions+=95;goto B617ebd;
case 0x617ec1:c.instructions+=94;goto B617ec1;
case 0x617ec4:c.instructions+=93;goto B617ec4;
case 0x617ec6:c.instructions+=92;goto B617ec6;
case 0x617eca:c.instructions+=91;goto B617eca;
case 0x617ecd:c.instructions+=90;goto B617ecd;
case 0x617ecf:c.instructions+=89;goto B617ecf;
case 0x617ed6:c.instructions+=88;goto B617ed6;
case 0x617eda:c.instructions+=87;goto B617eda;
case 0x617edd:c.instructions+=86;goto B617edd;
case 0x617ee1:c.instructions+=85;goto B617ee1;
case 0x617ee4:c.instructions+=84;goto B617ee4;
case 0x617ee6:c.instructions+=83;goto B617ee6;
case 0x617eea:c.instructions+=82;goto B617eea;
case 0x617eed:c.instructions+=81;goto B617eed;
case 0x617eef:c.instructions+=80;goto B617eef;
case 0x617ef3:c.instructions+=79;goto B617ef3;
case 0x617ef6:c.instructions+=78;goto B617ef6;
case 0x617ef8:c.instructions+=77;goto B617ef8;
case 0x617eff:c.instructions+=76;goto B617eff;
case 0x617f03:c.instructions+=75;goto B617f03;
case 0x617f06:c.instructions+=74;goto B617f06;
case 0x617f0a:c.instructions+=73;goto B617f0a;
case 0x617f0d:c.instructions+=72;goto B617f0d;
case 0x617f0f:c.instructions+=71;goto B617f0f;
case 0x617f13:c.instructions+=70;goto B617f13;
case 0x617f15:c.instructions+=69;goto B617f15;
case 0x617f17:c.instructions+=68;goto B617f17;
case 0x617f1b:c.instructions+=67;goto B617f1b;
case 0x617f1e:c.instructions+=66;goto B617f1e;
case 0x617f20:c.instructions+=65;goto B617f20;
case 0x617f27:c.instructions+=64;goto B617f27;
case 0x617f2b:c.instructions+=63;goto B617f2b;
case 0x617f2e:c.instructions+=62;goto B617f2e;
case 0x617f32:c.instructions+=61;goto B617f32;
case 0x617f35:c.instructions+=60;goto B617f35;
case 0x617f37:c.instructions+=59;goto B617f37;
case 0x617f3b:c.instructions+=58;goto B617f3b;
case 0x617f3e:c.instructions+=57;goto B617f3e;
case 0x617f40:c.instructions+=56;goto B617f40;
case 0x617f44:c.instructions+=55;goto B617f44;
case 0x617f47:c.instructions+=54;goto B617f47;
case 0x617f49:c.instructions+=53;goto B617f49;
case 0x617f50:c.instructions+=52;goto B617f50;
case 0x617f54:c.instructions+=51;goto B617f54;
case 0x617f57:c.instructions+=50;goto B617f57;
case 0x617f5b:c.instructions+=49;goto B617f5b;
case 0x617f5e:c.instructions+=48;goto B617f5e;
case 0x617f60:c.instructions+=47;goto B617f60;
case 0x617f64:c.instructions+=46;goto B617f64;
case 0x617f67:c.instructions+=45;goto B617f67;
case 0x617f69:c.instructions+=44;goto B617f69;
case 0x617f6d:c.instructions+=43;goto B617f6d;
case 0x617f70:c.instructions+=42;goto B617f70;
case 0x617f72:c.instructions+=41;goto B617f72;
case 0x617f79:c.instructions+=40;goto B617f79;
case 0x617f7d:c.instructions+=39;goto B617f7d;
case 0x617f80:c.instructions+=38;goto B617f80;
case 0x617f84:c.instructions+=37;goto B617f84;
case 0x617f87:c.instructions+=36;goto B617f87;
case 0x617f89:c.instructions+=35;goto B617f89;
case 0x617f8d:c.instructions+=34;goto B617f8d;
case 0x617f90:c.instructions+=33;goto B617f90;
case 0x617f92:c.instructions+=32;goto B617f92;
case 0x617f96:c.instructions+=31;goto B617f96;
case 0x617f99:c.instructions+=30;goto B617f99;
case 0x617f9b:c.instructions+=29;goto B617f9b;
case 0x617fa2:c.instructions+=28;goto B617fa2;
case 0x617fa6:c.instructions+=27;goto B617fa6;
case 0x617fa9:c.instructions+=26;goto B617fa9;
case 0x617fad:c.instructions+=25;goto B617fad;
case 0x617fb0:c.instructions+=24;goto B617fb0;
case 0x617fb2:c.instructions+=23;goto B617fb2;
case 0x617fb6:c.instructions+=22;goto B617fb6;
case 0x617fb8:c.instructions+=21;goto B617fb8;
case 0x617fba:c.instructions+=20;goto B617fba;
case 0x617fbe:c.instructions+=19;goto B617fbe;
case 0x617fc1:c.instructions+=18;goto B617fc1;
case 0x617fc3:c.instructions+=17;goto B617fc3;
case 0x617fca:c.instructions+=16;goto B617fca;
case 0x617fce:c.instructions+=15;goto B617fce;
case 0x617fd1:c.instructions+=14;goto B617fd1;
case 0x617fd5:c.instructions+=13;goto B617fd5;
case 0x617fd8:c.instructions+=12;goto B617fd8;
case 0x617fda:c.instructions+=11;goto B617fda;
case 0x617fde:c.instructions+=10;goto B617fde;
case 0x617fe1:c.instructions+=9;goto B617fe1;
case 0x617fe3:c.instructions+=8;goto B617fe3;
case 0x617fe7:c.instructions+=7;goto B617fe7;
case 0x617fea:c.instructions+=6;goto B617fea;
case 0x617fec:c.instructions+=5;goto B617fec;
case 0x617ff3:c.instructions+=4;goto B617ff3;
case 0x617ff7:c.instructions+=3;goto B617ff7;
case 0x617ffa:c.instructions+=2;goto B617ffa;
case 0x617ffe:c.instructions+=1;goto B617ffe;
default:missing_instruction(c.pc);}
B617000:L617000:{c.instructions+=2;NFSU2_TR(0x617000);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617001:{NFSU2_TR(0x617001);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x617006ull));
TAIL_STATIC(0x401650u,401);
}
B617006:L617006:{c.instructions+=3;NFSU2_TR(0x617006);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61700a:{NFSU2_TR(0x61700a);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61700e:{NFSU2_TR(0x61700e);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617012:L617012:{c.instructions+=5;NFSU2_TR(0x617012);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617016:{NFSU2_TR(0x617016);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B617019:{NFSU2_TR(0x617019);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61701b:{NFSU2_TR(0x61701b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61701e:{NFSU2_TR(0x61701e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x617023ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B617023:L617023:{c.instructions+=47;NFSU2_TR(0x617023);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B617027:{NFSU2_TR(0x617027);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61702b:{NFSU2_TR(0x61702b);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B61702f:{NFSU2_TR(0x61702f);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617031:{NFSU2_TR(0x617031);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B617035:{NFSU2_TR(0x617035);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617038:{NFSU2_TR(0x617038);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61703c:{NFSU2_TR(0x61703c);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61703f:{NFSU2_TR(0x61703f);
u8 U[12];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B617046:{NFSU2_TR(0x617046);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617048:{NFSU2_TR(0x617048);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61704b:{NFSU2_TR(0x61704b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61704e:{NFSU2_TR(0x61704e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617050:{NFSU2_TR(0x617050);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B617053:{NFSU2_TR(0x617053);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617056:{NFSU2_TR(0x617056);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617059:{NFSU2_TR(0x617059);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61705b:{NFSU2_TR(0x61705b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61705e:{NFSU2_TR(0x61705e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617060:{NFSU2_TR(0x617060);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617063:{NFSU2_TR(0x617063);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617066:{NFSU2_TR(0x617066);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617068:{NFSU2_TR(0x617068);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61706b:{NFSU2_TR(0x61706b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61706e:{NFSU2_TR(0x61706e);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617071:{NFSU2_TR(0x617071);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617073:{NFSU2_TR(0x617073);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617076:{NFSU2_TR(0x617076);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617078:{NFSU2_TR(0x617078);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61707b:{NFSU2_TR(0x61707b);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61707f:{NFSU2_TR(0x61707f);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617082:{NFSU2_TR(0x617082);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B617086:{NFSU2_TR(0x617086);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617088:{NFSU2_TR(0x617088);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61708b:{NFSU2_TR(0x61708b);
{u32 ea_=u32(r4(R+16)+u32(856u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617092:{NFSU2_TR(0x617092);
u8 U[8];
w4(U+0,u32(u32(u32(0x358ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617099:{NFSU2_TR(0x617099);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61709c:{NFSU2_TR(0x61709c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61709e:{NFSU2_TR(0x61709e);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6170a5:{NFSU2_TR(0x6170a5);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6170a7:{NFSU2_TR(0x6170a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6170ab:{NFSU2_TR(0x6170ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6170ac:{NFSU2_TR(0x6170ac);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6170af:{NFSU2_TR(0x6170af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6170b0:{NFSU2_TR(0x6170b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6170b2:{NFSU2_TR(0x6170b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6170b3:{NFSU2_TR(0x6170b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6170b8ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B6170b8:L6170b8:{c.instructions+=10;NFSU2_TR(0x6170b8);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6170bb:{NFSU2_TR(0x6170bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6170bf:{NFSU2_TR(0x6170bf);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6170c5:{NFSU2_TR(0x6170c5);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6170c9:{NFSU2_TR(0x6170c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6170ca:{NFSU2_TR(0x6170ca);
u8 U[12];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6170ce:{NFSU2_TR(0x6170ce);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6170d1:{NFSU2_TR(0x6170d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6170d2:{NFSU2_TR(0x6170d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6170d3:{NFSU2_TR(0x6170d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6170d8ull));
TAIL_STATIC(0x4011f0u,401);
}
B6170d8:L6170d8:{c.instructions+=11;NFSU2_TR(0x6170d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6170dc:{NFSU2_TR(0x6170dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6170e0:{NFSU2_TR(0x6170e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6170e3:{NFSU2_TR(0x6170e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6170e6:{NFSU2_TR(0x6170e6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6170e7:{NFSU2_TR(0x6170e7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6170ea:{NFSU2_TR(0x6170ea);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6170ef:{NFSU2_TR(0x6170ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6170f3:{NFSU2_TR(0x6170f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6170f7:{NFSU2_TR(0x6170f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6170fb:{NFSU2_TR(0x6170fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x617012u);}goto L617012;}}
}
B617101:L617101:{c.instructions+=2;NFSU2_TR(0x617101);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617109:{NFSU2_TR(0x617109);
u8 U[4];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B617110:L617110:{c.instructions+=8;NFSU2_TR(0x617110);
u8 U[4];
w4(U+0,u32(u32(u32(0x10full))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B617117:{NFSU2_TR(0x617117);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617118:{NFSU2_TR(0x617118);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61711c:{NFSU2_TR(0x61711c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61711e:{NFSU2_TR(0x61711e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B617121:{NFSU2_TR(0x617121);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617123:{NFSU2_TR(0x617123);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617124:{NFSU2_TR(0x617124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x617129ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B617129:L617129:{c.instructions+=5;NFSU2_TR(0x617129);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61712b:{NFSU2_TR(0x61712b);
u8 U[5];
w4(U+0,u32(u32(u32(0x10full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B617132:{NFSU2_TR(0x617132);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B617134:{NFSU2_TR(0x617134);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617138:{NFSU2_TR(0x617138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61717a;}}
}
B61713a:L61713a:{c.instructions+=3;NFSU2_TR(0x61713a);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B61713e:{NFSU2_TR(0x61713e);
u8 U[15];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(r1(R+4))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B617145:{NFSU2_TR(0x617145);
if(r1(R+518)){{goto L61717a;}}
}
B617147:L617147:{c.instructions+=12;NFSU2_TR(0x617147);
{u32 ea_=u32(r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61714a:{NFSU2_TR(0x61714a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61714d:{NFSU2_TR(0x61714d);
{u32 ea_=u32(r4(R+0)+r4(R+16)+u32(916u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B617154:{NFSU2_TR(0x617154);
w1(R+4,u8(0x1ull));
}
B617156:{NFSU2_TR(0x617156);
u8 U[5];
w4(U+0,u32(u32(u32(0x10full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61715d:{NFSU2_TR(0x61715d);
{u32 ea_=u32(r4(R+0)+r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617161:{NFSU2_TR(0x617161);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617164:{NFSU2_TR(0x617164);
{u32 ea_=u32(r4(R+0)+r4(R+16)+u32(912u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61716b:{NFSU2_TR(0x61716b);
{u32 ea_=u32(r4(R+0)+r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61716f:{NFSU2_TR(0x61716f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617171:{NFSU2_TR(0x617171);
{u32 ea_=u32(r4(R+0)+r4(R+16)+u32(920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B617178:{NFSU2_TR(0x617178);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61717a:L61717a:{c.instructions+=6;NFSU2_TR(0x61717a);
__builtin_memmove((R+0),(R+8),4);
}
B61717c:{NFSU2_TR(0x61717c);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B61717e:{NFSU2_TR(0x61717e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B617180:{NFSU2_TR(0x617180);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x5ull))));
}
B617183:{NFSU2_TR(0x617183);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B617185:{NFSU2_TR(0x617185);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61718f;}}
}
B617187:L617187:{c.instructions+=3;NFSU2_TR(0x617187);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61718b:{NFSU2_TR(0x61718b);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61718d:{NFSU2_TR(0x61718d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61718f:L61718f:{c.instructions+=2;NFSU2_TR(0x61718f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B617191:{NFSU2_TR(0x617191);
if(r1(R+518)){{goto L6171d0;}}
}
B617193:L617193:{c.instructions+=5;NFSU2_TR(0x617193);
__builtin_memmove((R+4),gp(0x8a1f08),4);
}
B617199:{NFSU2_TR(0x617199);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61719b:{NFSU2_TR(0x61719b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61719c:{NFSU2_TR(0x61719c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61719d:{NFSU2_TR(0x61719d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6171a2ull));
TAIL_STATIC(0x60cf70u,60c);
}
B6171a2:L6171a2:{c.instructions+=3;NFSU2_TR(0x6171a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6171a5:{NFSU2_TR(0x6171a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6171a7:{NFSU2_TR(0x6171a7);
if(r1(R+518)){{goto L6171cc;}}
}
B6171a9:L6171a9:{c.instructions+=3;NFSU2_TR(0x6171a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6171ac:{NFSU2_TR(0x6171ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6171ad:{NFSU2_TR(0x6171ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6171b2ull));
TAIL_STATIC(0x60cf90u,60c);
}
B6171b2:L6171b2:{c.instructions+=3;NFSU2_TR(0x6171b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6171b5:{NFSU2_TR(0x6171b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6171b7:{NFSU2_TR(0x6171b7);
if(r1(R+518)){{goto L6171cc;}}
}
B6171b9:L6171b9:{c.instructions+=5;NFSU2_TR(0x6171b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6171bb:{NFSU2_TR(0x6171bb);
{u32 ea_=u32(u32(8021684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6171c1:{NFSU2_TR(0x6171c1);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6171c3:{NFSU2_TR(0x6171c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x338ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6171ca:{NFSU2_TR(0x6171ca);
{goto L6171f9;}
}
B6171cc:L6171cc:{c.instructions+=1;NFSU2_TR(0x6171cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6171d0:L6171d0:{c.instructions+=11;NFSU2_TR(0x6171d0);
{u32 ea_=u32(r4(R+16)+u32(824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6171d7:{NFSU2_TR(0x6171d7);
__builtin_memmove((R+0),(R+8),4);
}
B6171d9:{NFSU2_TR(0x6171d9);
{u32 ea_=u32(u32(8021684u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6171df:{NFSU2_TR(0x6171df);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6171e0:{NFSU2_TR(0x6171e0);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B6171e3:{NFSU2_TR(0x6171e3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6171e5:{NFSU2_TR(0x6171e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6171e8:{NFSU2_TR(0x6171e8);
u8 U[16];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6171ef:{NFSU2_TR(0x6171ef);
u8 U[12];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6171f6:{NFSU2_TR(0x6171f6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6171f7:{NFSU2_TR(0x6171f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6171f9:L6171f9:{c.instructions+=7;NFSU2_TR(0x6171f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6171fd:{NFSU2_TR(0x6171fd);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6171ff:{NFSU2_TR(0x6171ff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B617200:{NFSU2_TR(0x617200);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B617203:{NFSU2_TR(0x617203);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B617206:{NFSU2_TR(0x617206);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61720a:{NFSU2_TR(0x61720a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x617110u);}goto L617110;}}
}
B617210:L617210:{c.instructions+=2;NFSU2_TR(0x617210);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B617217:{NFSU2_TR(0x617217);
{goto L61724d;}
}
B617219:L617219:{c.instructions+=2;NFSU2_TR(0x617219);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61721b:{NFSU2_TR(0x61721b);
u8 U[4];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B617222:L617222:{c.instructions+=8;NFSU2_TR(0x617222);
__builtin_memmove((R+12),gp(0x7a66bc),4);
}
B617228:{NFSU2_TR(0x617228);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B61722a:{NFSU2_TR(0x61722a);
__builtin_memmove((R+12),(R+0),4);
}
B61722c:{NFSU2_TR(0x61722c);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B61722e:{NFSU2_TR(0x61722e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+0))));
}
B617230:{NFSU2_TR(0x617230);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x5ull))));
}
B617233:{NFSU2_TR(0x617233);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B617236:{NFSU2_TR(0x617236);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L617244;}}
}
B617238:L617238:{c.instructions+=3;NFSU2_TR(0x617238);
{u32 ea_=u32(u32(8021692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61723e:{NFSU2_TR(0x61723e);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B617242:{NFSU2_TR(0x617242);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617244:L617244:{c.instructions+=4;NFSU2_TR(0x617244);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B617245:{NFSU2_TR(0x617245);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B617248:{NFSU2_TR(0x617248);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61724b:{NFSU2_TR(0x61724b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x617222u);}goto L617222;}}
}
B61724d:L61724d:{c.instructions+=22;NFSU2_TR(0x61724d);
__builtin_memmove((R+8),(R+4),4);
}
B61724f:{NFSU2_TR(0x61724f);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B617251:{NFSU2_TR(0x617251);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B617253:{NFSU2_TR(0x617253);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80ull))));
}
B617259:{NFSU2_TR(0x617259);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617260:{NFSU2_TR(0x617260);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B617267:{NFSU2_TR(0x617267);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61726a:{NFSU2_TR(0x61726a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B61726c:{NFSU2_TR(0x61726c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B61726e:{NFSU2_TR(0x61726e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B617270:{NFSU2_TR(0x617270);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617276:{NFSU2_TR(0x617276);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61727a:{NFSU2_TR(0x61727a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xeull))));
}
B61727d:{NFSU2_TR(0x61727d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x72ull))));
}
B617280:{NFSU2_TR(0x617280);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B617282:{NFSU2_TR(0x617282);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617289:{NFSU2_TR(0x617289);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B617290:{NFSU2_TR(0x617290);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B617292:{NFSU2_TR(0x617292);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B617294:{NFSU2_TR(0x617294);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B617296:{NFSU2_TR(0x617296);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B617298:{NFSU2_TR(0x617298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61729dull));
TAIL_STATIC(0x75bed4u,75b);
}
B61729d:L61729d:{c.instructions+=3;NFSU2_TR(0x61729d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61729f:{NFSU2_TR(0x61729f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6172a1:{NFSU2_TR(0x6172a1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6172a7;}}
}
B6172a3:L6172a3:{c.instructions+=2;NFSU2_TR(0x6172a3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6172a5:{NFSU2_TR(0x6172a5);
{goto L6172b3;}
}
B6172a7:L6172a7:{c.instructions+=2;NFSU2_TR(0x6172a7);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6172ac:{NFSU2_TR(0x6172ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6172b3;}}
}
B6172ae:L6172ae:{c.instructions+=1;NFSU2_TR(0x6172ae);
w4(R+0,u32(0xfeull));
}
B6172b3:L6172b3:{c.instructions+=8;NFSU2_TR(0x6172b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6172b7:{NFSU2_TR(0x6172b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6172bd:{NFSU2_TR(0x6172bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6172c0:{NFSU2_TR(0x6172c0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x808080ull))));
}
B6172c5:{NFSU2_TR(0x6172c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6172c7:{NFSU2_TR(0x6172c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6172ce:{NFSU2_TR(0x6172ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6172d2:{NFSU2_TR(0x6172d2);
if(r1(R+518)){{goto L617407;}}
}
B6172d8:L6172d8:{c.instructions+=2;NFSU2_TR(0x6172d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xff000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6172dd:{NFSU2_TR(0x6172dd);
if(r1(R+518)){{goto L617407;}}
}
B6172e3:L6172e3:{c.instructions+=9;NFSU2_TR(0x6172e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6172ea:{NFSU2_TR(0x6172ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6172ee:{NFSU2_TR(0x6172ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6172f5:{NFSU2_TR(0x6172f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6172f7:{NFSU2_TR(0x6172f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6172fb:{NFSU2_TR(0x6172fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B617302:{NFSU2_TR(0x617302);
u8 U[4];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B617309:{NFSU2_TR(0x617309);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61730d:{NFSU2_TR(0x61730d);
{goto L617313;}
}
B61730f:L61730f:{c.instructions+=1;NFSU2_TR(0x61730f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B617313:L617313:{c.instructions+=5;NFSU2_TR(0x617313);
u8 U[16];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B61731a:{NFSU2_TR(0x61731a);
u8 U[16];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+12))));
}
B617321:{NFSU2_TR(0x617321);
w4(R+4,u32(0x40ull));
}
B617326:{NFSU2_TR(0x617326);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B617329:{NFSU2_TR(0x617329);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6173db;}}
}
B61732f:L61732f:{c.instructions+=6;NFSU2_TR(0x61732f);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B617336:{NFSU2_TR(0x617336);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61733d:{NFSU2_TR(0x61733d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61733e:{NFSU2_TR(0x61733e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617340:{NFSU2_TR(0x617340);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617341:{NFSU2_TR(0x617341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x617346ull));
TAIL_STATIC(0x5be180u,5be);
}
B617346:L617346:{c.instructions+=3;NFSU2_TR(0x617346);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B617349:{NFSU2_TR(0x617349);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61734b:{NFSU2_TR(0x61734b);
if(r1(R+518)){{goto L6173f5;}}
}
B617351:L617351:{c.instructions+=2;NFSU2_TR(0x617351);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617359:{NFSU2_TR(0x617359);
__builtin_memmove((R+16),(R+16),4);
}
B617360:L617360:{c.instructions+=3;NFSU2_TR(0x617360);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617364:{NFSU2_TR(0x617364);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617365:{NFSU2_TR(0x617365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61736aull));
TAIL_STATIC(0x5be130u,5be);
}
B61736a:L61736a:{c.instructions+=3;NFSU2_TR(0x61736a);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61736e:{NFSU2_TR(0x61736e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61736f:{NFSU2_TR(0x61736f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x617374ull));
TAIL_STATIC(0x5be0a0u,5be);
}
B617374:L617374:{c.instructions+=5;NFSU2_TR(0x617374);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B617377:{NFSU2_TR(0x617377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B617379:{NFSU2_TR(0x617379);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61737a:{NFSU2_TR(0x61737a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61737b:{NFSU2_TR(0x61737b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x617380ull));
TAIL_STATIC(0x5be0f0u,5be);
}
B617380:L617380:{c.instructions+=3;NFSU2_TR(0x617380);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B617384:{NFSU2_TR(0x617384);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617385:{NFSU2_TR(0x617385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61738aull));
TAIL_STATIC(0x5be130u,5be);
}
B61738a:L61738a:{c.instructions+=3;NFSU2_TR(0x61738a);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61738e:{NFSU2_TR(0x61738e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61738f:{NFSU2_TR(0x61738f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x617394ull));
TAIL_STATIC(0x5be0a0u,5be);
}
B617394:L617394:{c.instructions+=5;NFSU2_TR(0x617394);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617397:{NFSU2_TR(0x617397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B617399:{NFSU2_TR(0x617399);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61739a:{NFSU2_TR(0x61739a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61739b:{NFSU2_TR(0x61739b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6173a0ull));
TAIL_STATIC(0x5be0f0u,5be);
}
B6173a0:L6173a0:{c.instructions+=14;NFSU2_TR(0x6173a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6173a4:{NFSU2_TR(0x6173a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6173a8:{NFSU2_TR(0x6173a8);
w4(R+0,u32(0x10ull));
}
B6173ad:{NFSU2_TR(0x6173ad);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6173af:{NFSU2_TR(0x6173af);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6173b1:{NFSU2_TR(0x6173b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6173b5:{NFSU2_TR(0x6173b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B6173b8:{NFSU2_TR(0x6173b8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6173bb:{NFSU2_TR(0x6173bb);
w1(R+512,carry<u32>(r4(R+12),u32(0x8ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B6173be:{NFSU2_TR(0x6173be);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6173bf:{NFSU2_TR(0x6173bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6173c3:{NFSU2_TR(0x6173c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6173c7:{NFSU2_TR(0x6173c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6173cb:{NFSU2_TR(0x6173cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x617360u);}goto L617360;}}
}
B6173cd:L6173cd:{c.instructions+=3;NFSU2_TR(0x6173cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6173d0:{NFSU2_TR(0x6173d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6173d1:{NFSU2_TR(0x6173d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6173d6ull));
TAIL_STATIC(0x5cec40u,5ce);
}
B6173d6:L6173d6:{c.instructions+=2;NFSU2_TR(0x6173d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6173d9:{NFSU2_TR(0x6173d9);
{goto L6173f5;}
}
B6173db:L6173db:{c.instructions+=8;NFSU2_TR(0x6173db);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6173df:{NFSU2_TR(0x6173df);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6173e3:{NFSU2_TR(0x6173e3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6173e5:{NFSU2_TR(0x6173e5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6173e7:{NFSU2_TR(0x6173e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B6173ea:{NFSU2_TR(0x6173ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6173ee:{NFSU2_TR(0x6173ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6173f2:{NFSU2_TR(0x6173f2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B6173f5:L6173f5:{c.instructions+=5;NFSU2_TR(0x6173f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6173f9:{NFSU2_TR(0x6173f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6173fa:{NFSU2_TR(0x6173fa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6173fd:{NFSU2_TR(0x6173fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617401:{NFSU2_TR(0x617401);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61730fu);}goto L61730f;}}
}
B617407:L617407:{c.instructions+=12;NFSU2_TR(0x617407);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61740b:{NFSU2_TR(0x61740b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x384ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617411:{NFSU2_TR(0x617411);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B617417:{NFSU2_TR(0x617417);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61741e:{NFSU2_TR(0x61741e);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617425:{NFSU2_TR(0x617425);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B617427:{NFSU2_TR(0x617427);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B617429:{NFSU2_TR(0x617429);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x17a8ull))));
}
B61742f:{NFSU2_TR(0x61742f);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617436:{NFSU2_TR(0x617436);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61743a:{NFSU2_TR(0x61743a);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61743e:{NFSU2_TR(0x61743e);
__builtin_memmove((R+28),(R+28),4);
}
B617440:L617440:{c.instructions+=1;NFSU2_TR(0x617440);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B617442:L617442:{c.instructions+=2;NFSU2_TR(0x617442);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B617444:{NFSU2_TR(0x617444);
if(r1(R+518)){{goto L61744b;}}
}
B617446:L617446:{c.instructions+=2;NFSU2_TR(0x617446);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B617449:{NFSU2_TR(0x617449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L617459;}}
}
B61744b:L61744b:{c.instructions+=4;NFSU2_TR(0x61744b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61744c:{NFSU2_TR(0x61744c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B61744f:{NFSU2_TR(0x61744f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B617452:{NFSU2_TR(0x617452);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x617442u);}goto L617442;}}
}
B617454:L617454:{c.instructions+=1;NFSU2_TR(0x617454);
{goto L6174f4;}
}
B617459:L617459:{c.instructions+=6;NFSU2_TR(0x617459);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61745d:{NFSU2_TR(0x61745d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B617460:{NFSU2_TR(0x617460);
u8 U[13];
w4(U+0,u32(u32(u32(0x838ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B617468:{NFSU2_TR(0x617468);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff2ull))));
}
B61746b:{NFSU2_TR(0x61746b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x13ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x13ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61746e:{NFSU2_TR(0x61746e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L617482;}}
}
B617470:L617470:{c.instructions+=3;NFSU2_TR(0x617470);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B617474:{NFSU2_TR(0x617474);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x61ab2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B61747b:{NFSU2_TR(0x61747b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x61ab30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B617482:L617482:{c.instructions+=3;NFSU2_TR(0x617482);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B617485:{NFSU2_TR(0x617485);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B617487:{NFSU2_TR(0x617487);
if(r1(R+518)){{goto L6174f4;}}
}
B617489:L617489:{c.instructions+=5;NFSU2_TR(0x617489);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617490:{NFSU2_TR(0x617490);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B617493:{NFSU2_TR(0x617493);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617494:{NFSU2_TR(0x617494);
u8 U[4];
w4(U+0,u32(0xd6d6080aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617499:{NFSU2_TR(0x617499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61749eull));
TAIL_STATIC(0x48d860u,48d);
}
B61749e:L61749e:{c.instructions+=5;NFSU2_TR(0x61749e);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6174a5:{NFSU2_TR(0x6174a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6174a8:{NFSU2_TR(0x6174a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6174a9:{NFSU2_TR(0x6174a9);
u8 U[4];
w4(U+0,u32(0x471a1dcaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6174ae:{NFSU2_TR(0x6174ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6174b3ull));
TAIL_STATIC(0x48d860u,48d);
}
B6174b3:L6174b3:{c.instructions+=5;NFSU2_TR(0x6174b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6174ba:{NFSU2_TR(0x6174ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6174bb:{NFSU2_TR(0x6174bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6174be:{NFSU2_TR(0x6174be);
u8 U[4];
w4(U+0,u32(0xa7366ae6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6174c3:{NFSU2_TR(0x6174c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6174c8ull));
TAIL_STATIC(0x48d860u,48d);
}
B6174c8:L6174c8:{c.instructions+=13;NFSU2_TR(0x6174c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6174cb:{NFSU2_TR(0x6174cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6174d2:{NFSU2_TR(0x6174d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6174d5:{NFSU2_TR(0x6174d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6174d7:{NFSU2_TR(0x6174d7);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B6174d9:{NFSU2_TR(0x6174d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6174e0:{NFSU2_TR(0x6174e0);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8000ull))));
}
B6174e6:{NFSU2_TR(0x6174e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6174e7:{NFSU2_TR(0x6174e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6174e8:{NFSU2_TR(0x6174e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6174e9:{NFSU2_TR(0x6174e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6174ea:{NFSU2_TR(0x6174ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6174ed:{NFSU2_TR(0x6174ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6174f2ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B6174f2:L6174f2:{c.instructions+=1;NFSU2_TR(0x6174f2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6174f4:L6174f4:{c.instructions+=8;NFSU2_TR(0x6174f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6174f8:{NFSU2_TR(0x6174f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6174fc:{NFSU2_TR(0x6174fc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6174fd:{NFSU2_TR(0x6174fd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B617500:{NFSU2_TR(0x617500);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B617503:{NFSU2_TR(0x617503);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617507:{NFSU2_TR(0x617507);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61750b:{NFSU2_TR(0x61750b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x617440u);}goto L617440;}}
}
B617511:L617511:{c.instructions+=7;NFSU2_TR(0x617511);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B617514:{NFSU2_TR(0x617514);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61751a:{NFSU2_TR(0x61751a);
__builtin_memmove((R+0),gp(0x8026c0),4);
}
B61751f:{NFSU2_TR(0x61751f);
__builtin_memmove((R+4),gp(0x8026c4),4);
}
B617525:{NFSU2_TR(0x617525);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61752c:{NFSU2_TR(0x61752c);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617533:{NFSU2_TR(0x617533);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L617569;}}
}
B617535:L617535:{c.instructions+=6;NFSU2_TR(0x617535);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B617537:{NFSU2_TR(0x617537);
{u32 ea_=u32(u32(8021840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61753d:{NFSU2_TR(0x61753d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B617543:{NFSU2_TR(0x617543);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B617545:{NFSU2_TR(0x617545);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B617548:{NFSU2_TR(0x617548);
if(r1(R+514)){{goto L61755d;}}
}
B61754a:L61754a:{c.instructions+=4;NFSU2_TR(0x61754a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61754e:{NFSU2_TR(0x61754e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B617551:{NFSU2_TR(0x617551);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B617554:{NFSU2_TR(0x617554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x617559ull));
TAIL_STATIC(0x59a420u,59a);
}
B617559:L617559:{c.instructions+=2;NFSU2_TR(0x617559);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61755b:{NFSU2_TR(0x61755b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B61755d:L61755d:{c.instructions+=2;NFSU2_TR(0x61755d);
{u32 ea_=u32(u32(8021848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617563:{NFSU2_TR(0x617563);
{u32 ea_=u32(u32(8021840u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617569:L617569:{c.instructions+=12;NFSU2_TR(0x617569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61756c:{NFSU2_TR(0x61756c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617572:{NFSU2_TR(0x617572);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B617579:{NFSU2_TR(0x617579);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61757c:{NFSU2_TR(0x61757c);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617580:{NFSU2_TR(0x617580);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B617584:{NFSU2_TR(0x617584);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x420ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61758a:{NFSU2_TR(0x61758a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x400ull))));
}
B61758f:{NFSU2_TR(0x61758f);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617593:{NFSU2_TR(0x617593);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61759a:{NFSU2_TR(0x61759a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61759c:{NFSU2_TR(0x61759c);
__builtin_memmove((R+16),(R+16),4);
}
B6175a0:L6175a0:{c.instructions+=12;NFSU2_TR(0x6175a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6175a4:{NFSU2_TR(0x6175a4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6175a6:{NFSU2_TR(0x6175a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6175ad:{NFSU2_TR(0x6175ad);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6175b4:{NFSU2_TR(0x6175b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6175b6:{NFSU2_TR(0x6175b6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6175b8:{NFSU2_TR(0x6175b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6175bc:{NFSU2_TR(0x6175bc);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6175c0:{NFSU2_TR(0x6175c0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6175c6:{NFSU2_TR(0x6175c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6175c8:{NFSU2_TR(0x6175c8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6175cb:{NFSU2_TR(0x6175cb);
if(r1(R+514)){{goto L6175d6;}}
}
B6175cd:L6175cd:{c.instructions+=2;NFSU2_TR(0x6175cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6175cf:{NFSU2_TR(0x6175cf);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6175d6:L6175d6:{c.instructions+=43;NFSU2_TR(0x6175d6);
w4(R+0,u32(0x3f800000ull));
}
B6175db:{NFSU2_TR(0x6175db);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6175dd:{NFSU2_TR(0x6175dd);
u8 U[16];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6175e4:{NFSU2_TR(0x6175e4);
u8 U[16];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6175eb:{NFSU2_TR(0x6175eb);
u8 U[16];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6175f2:{NFSU2_TR(0x6175f2);
u8 U[16];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6175f9:{NFSU2_TR(0x6175f9);
u8 U[16];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617600:{NFSU2_TR(0x617600);
u8 U[16];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617607:{NFSU2_TR(0x617607);
u8 U[16];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61760e:{NFSU2_TR(0x61760e);
u8 U[16];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617615:{NFSU2_TR(0x617615);
u8 U[16];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61761c:{NFSU2_TR(0x61761c);
u8 U[16];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617623:{NFSU2_TR(0x617623);
u8 U[16];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61762a:{NFSU2_TR(0x61762a);
u8 U[16];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617631:{NFSU2_TR(0x617631);
u8 U[16];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617638:{NFSU2_TR(0x617638);
u8 U[16];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61763f:{NFSU2_TR(0x61763f);
u8 U[16];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617646:{NFSU2_TR(0x617646);
u8 U[16];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61764d:{NFSU2_TR(0x61764d);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617654:{NFSU2_TR(0x617654);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617658:{NFSU2_TR(0x617658);
u8 U[16];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61765f:{NFSU2_TR(0x61765f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B617661:{NFSU2_TR(0x617661);
u8 U[16];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617668:{NFSU2_TR(0x617668);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61766f:{NFSU2_TR(0x61766f);
u8 U[16];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617676:{NFSU2_TR(0x617676);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61767a:{NFSU2_TR(0x61767a);
u8 U[16];
w4(U+0,u32(u32(u32(0x25cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617681:{NFSU2_TR(0x617681);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B617687:{NFSU2_TR(0x617687);
u8 U[16];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61768e:{NFSU2_TR(0x61768e);
u8 U[16];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617695:{NFSU2_TR(0x617695);
u8 U[16];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61769c:{NFSU2_TR(0x61769c);
u8 U[16];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176a3:{NFSU2_TR(0x6176a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6176a5:{NFSU2_TR(0x6176a5);
u8 U[16];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176ac:{NFSU2_TR(0x6176ac);
u8 U[16];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176b3:{NFSU2_TR(0x6176b3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6176b6:{NFSU2_TR(0x6176b6);
u8 U[16];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176bd:{NFSU2_TR(0x6176bd);
u8 U[16];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176c4:{NFSU2_TR(0x6176c4);
u8 U[16];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176cb:{NFSU2_TR(0x6176cb);
u8 U[16];
w4(U+0,u32(u32(u32(0x250ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176d2:{NFSU2_TR(0x6176d2);
u8 U[16];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176d9:{NFSU2_TR(0x6176d9);
u8 U[16];
w4(U+0,u32(u32(u32(0x258ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176e0:{NFSU2_TR(0x6176e0);
if(r1(R+514)){{goto L6176ec;}}
}
B6176e2:L6176e2:{c.instructions+=3;NFSU2_TR(0x6176e2);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6176e6:{NFSU2_TR(0x6176e6);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6176ea:{NFSU2_TR(0x6176ea);
{goto L6176f4;}
}
B6176ec:L6176ec:{c.instructions+=2;NFSU2_TR(0x6176ec);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6176f0:{NFSU2_TR(0x6176f0);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6176f4:L6176f4:{c.instructions+=4;NFSU2_TR(0x6176f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6176fa:{NFSU2_TR(0x6176fa);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6176fc:{NFSU2_TR(0x6176fc);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617703:{NFSU2_TR(0x617703);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L617715;}}
}
B617705:L617705:{c.instructions+=3;NFSU2_TR(0x617705);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61770c:{NFSU2_TR(0x61770c);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B61770e:{NFSU2_TR(0x61770e);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617715:L617715:{c.instructions+=10;NFSU2_TR(0x617715);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B617719:{NFSU2_TR(0x617719);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B61771b:{NFSU2_TR(0x61771b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B617720:{NFSU2_TR(0x617720);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B617728:{NFSU2_TR(0x617728);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61772c:{NFSU2_TR(0x61772c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B61772f:{NFSU2_TR(0x61772f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B617732:{NFSU2_TR(0x617732);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B617738:{NFSU2_TR(0x617738);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61773c:{NFSU2_TR(0x61773c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6175a0u);}goto L6175a0;}}
}
B617742:L617742:{c.instructions+=7;NFSU2_TR(0x617742);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B617746:{NFSU2_TR(0x617746);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B617748:{NFSU2_TR(0x617748);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61774b:{NFSU2_TR(0x61774b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61774d:{NFSU2_TR(0x61774d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x855ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B617753:{NFSU2_TR(0x617753);
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
B617755:{NFSU2_TR(0x617755);
if(r1(R+518)){TAIL_STATIC(0x61ab25u,61a);}
}
B61775b:L61775b:{c.instructions+=2;NFSU2_TR(0x61775b);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B61775e:{NFSU2_TR(0x61775e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x61ab25u,61a);}
}
B617764:L617764:{c.instructions+=2;NFSU2_TR(0x617764);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617766:{NFSU2_TR(0x617766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61776bull));
TAIL_STATIC(0x401e80u,401);
}
B61776b:L61776b:{c.instructions+=4;NFSU2_TR(0x61776b);
__builtin_memmove((R+12),(R+0),4);
}
B61776d:{NFSU2_TR(0x61776d);
u8 U[4];
w4(U+0,u32(0x700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617772:{NFSU2_TR(0x617772);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617776:{NFSU2_TR(0x617776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61777bull));
TAIL_STATIC(0x401e30u,401);
}
B61777b:L61777b:{c.instructions+=5;NFSU2_TR(0x61777b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61777d:{NFSU2_TR(0x61777d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B617780:{NFSU2_TR(0x617780);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B617782:{NFSU2_TR(0x617782);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617786:{NFSU2_TR(0x617786);
if(r1(R+518)){TAIL_STATIC(0x61ab25u,61a);}
}
B61778c:L61778c:{c.instructions+=2;NFSU2_TR(0x61778c);
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
B61778e:{NFSU2_TR(0x61778e);
if(r1(R+518)){TAIL_STATIC(0x61ab25u,61a);}
}
B617794:L617794:{c.instructions+=4;NFSU2_TR(0x617794);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B617798:{NFSU2_TR(0x617798);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61779e:{NFSU2_TR(0x61779e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6177a0:{NFSU2_TR(0x6177a0);
if(r1(R+518)){{goto L6177c0;}}
}
B6177a2:L6177a2:{c.instructions+=3;NFSU2_TR(0x6177a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6177a4:{NFSU2_TR(0x6177a4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6177a6:{NFSU2_TR(0x6177a6);
if(r1(R+518)){{goto L6177b2;}}
}
B6177a8:L6177a8:{c.instructions+=3;NFSU2_TR(0x6177a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6177ae:{NFSU2_TR(0x6177ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6177b0:{NFSU2_TR(0x6177b0);
if(r1(R+518)){{goto L6177c0;}}
}
B6177b2:L6177b2:{c.instructions+=3;NFSU2_TR(0x6177b2);
w4(R+8,u32(0x1ull));
}
B6177b7:{NFSU2_TR(0x6177b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6177be:{NFSU2_TR(0x6177be);
{goto L6177cc;}
}
B6177c0:L6177c0:{c.instructions+=2;NFSU2_TR(0x6177c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6177c7:{NFSU2_TR(0x6177c7);
w4(R+8,u32(0x1ull));
}
B6177cc:L6177cc:{c.instructions+=3;NFSU2_TR(0x6177cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6177d2:{NFSU2_TR(0x6177d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6177d4:{NFSU2_TR(0x6177d4);
if(r1(R+518)){{goto L6177eb;}}
}
B6177d6:L6177d6:{c.instructions+=3;NFSU2_TR(0x6177d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6177d8:{NFSU2_TR(0x6177d8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6177da:{NFSU2_TR(0x6177da);
if(r1(R+518)){{goto L6177e5;}}
}
B6177dc:L6177dc:{c.instructions+=2;NFSU2_TR(0x6177dc);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3f5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6177e3:{NFSU2_TR(0x6177e3);
if(r1(R+518)){{goto L6177eb;}}
}
B6177e5:L6177e5:{c.instructions+=2;NFSU2_TR(0x6177e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6177e9:{NFSU2_TR(0x6177e9);
{goto L6177ef;}
}
B6177eb:L6177eb:{c.instructions+=1;NFSU2_TR(0x6177eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6177ef:L6177ef:{c.instructions+=3;NFSU2_TR(0x6177ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2db8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6177f5:{NFSU2_TR(0x6177f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6177f7:{NFSU2_TR(0x6177f7);
if(r1(R+518)){{goto L61780e;}}
}
B6177f9:L6177f9:{c.instructions+=3;NFSU2_TR(0x6177f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6177fb:{NFSU2_TR(0x6177fb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6177fd:{NFSU2_TR(0x6177fd);
if(r1(R+518)){{goto L617808;}}
}
B6177ff:L6177ff:{c.instructions+=2;NFSU2_TR(0x6177ff);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3f6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B617806:{NFSU2_TR(0x617806);
if(r1(R+518)){{goto L61780e;}}
}
B617808:L617808:{c.instructions+=2;NFSU2_TR(0x617808);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61780c:{NFSU2_TR(0x61780c);
{goto L617812;}
}
B61780e:L61780e:{c.instructions+=1;NFSU2_TR(0x61780e);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617812:L617812:{c.instructions+=3;NFSU2_TR(0x617812);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B617818:{NFSU2_TR(0x617818);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61781a:{NFSU2_TR(0x61781a);
if(r1(R+518)){{goto L617831;}}
}
B61781c:L61781c:{c.instructions+=3;NFSU2_TR(0x61781c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61781e:{NFSU2_TR(0x61781e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B617820:{NFSU2_TR(0x617820);
if(r1(R+518)){{goto L61782b;}}
}
B617822:L617822:{c.instructions+=2;NFSU2_TR(0x617822);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3f7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B617829:{NFSU2_TR(0x617829);
if(r1(R+518)){{goto L617831;}}
}
B61782b:L61782b:{c.instructions+=2;NFSU2_TR(0x61782b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61782f:{NFSU2_TR(0x61782f);
{goto L617835;}
}
B617831:L617831:{c.instructions+=1;NFSU2_TR(0x617831);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617835:L617835:{c.instructions+=4;NFSU2_TR(0x617835);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61783c:{NFSU2_TR(0x61783c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61783f:{NFSU2_TR(0x61783f);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617846:{NFSU2_TR(0x617846);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L617853;}}
}
B617848:L617848:{c.instructions+=1;NFSU2_TR(0x617848);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617853:L617853:{c.instructions+=22;NFSU2_TR(0x617853);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617858:{NFSU2_TR(0x617858);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61785f:{NFSU2_TR(0x61785f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617860:{NFSU2_TR(0x617860);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B617867:{NFSU2_TR(0x617867);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617868:{NFSU2_TR(0x617868);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617873:{NFSU2_TR(0x617873);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61787e:{NFSU2_TR(0x61787e);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617889:{NFSU2_TR(0x617889);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617894:{NFSU2_TR(0x617894);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61789f:{NFSU2_TR(0x61789f);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178aa:{NFSU2_TR(0x6178aa);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178b5:{NFSU2_TR(0x6178b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178c0:{NFSU2_TR(0x6178c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178cb:{NFSU2_TR(0x6178cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178d6:{NFSU2_TR(0x6178d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178e1:{NFSU2_TR(0x6178e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178ec:{NFSU2_TR(0x6178ec);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178f7:{NFSU2_TR(0x6178f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617902:{NFSU2_TR(0x617902);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61790d:{NFSU2_TR(0x61790d);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617918:{NFSU2_TR(0x617918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61791dull));
TAIL_STATIC(0x5bae60u,5ba);
}
B61791d:L61791d:{c.instructions+=5;NFSU2_TR(0x61791d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617923:{NFSU2_TR(0x617923);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B617926:{NFSU2_TR(0x617926);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61792d:{NFSU2_TR(0x61792d);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617938:{NFSU2_TR(0x617938);
{goto L617940;}
}
B617940:L617940:{c.instructions+=7;NFSU2_TR(0x617940);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B617944:{NFSU2_TR(0x617944);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61794b:{NFSU2_TR(0x61794b);
u8 U[16];
w4(U+0,u32(u32(u32(0x1b48ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B617952:{NFSU2_TR(0x617952);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B617954:{NFSU2_TR(0x617954);
u8 U[16];
w4(U+0,u32(u32(u32(0x1b68ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B61795b:{NFSU2_TR(0x61795b);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617962:{NFSU2_TR(0x617962);
if(r1(R+518)){{goto L6179a6;}}
}
B617964:L617964:{c.instructions+=3;NFSU2_TR(0x617964);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61796b:{NFSU2_TR(0x61796b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61796d:{NFSU2_TR(0x61796d);
if(r1(R+518)){{goto L6179a6;}}
}
B61796f:L61796f:{c.instructions+=5;NFSU2_TR(0x61796f);
__builtin_memmove((R+4),(R+0),4);
}
B617971:{NFSU2_TR(0x617971);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617972:{NFSU2_TR(0x617972);
u8 U[4];
w4(U+0,u32(0x22719fa9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617977:{NFSU2_TR(0x617977);
__builtin_memmove((R+4),(R+12),4);
}
B617979:{NFSU2_TR(0x617979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61797eull));
TAIL_STATIC(0x48d860u,48d);
}
B61797e:L61797e:{c.instructions+=5;NFSU2_TR(0x61797e);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617985:{NFSU2_TR(0x617985);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617986:{NFSU2_TR(0x617986);
u8 U[4];
w4(U+0,u32(0xfd102a92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61798b:{NFSU2_TR(0x61798b);
__builtin_memmove((R+4),(R+12),4);
}
B61798d:{NFSU2_TR(0x61798d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x617992ull));
TAIL_STATIC(0x48d860u,48d);
}
B617992:L617992:{c.instructions+=5;NFSU2_TR(0x617992);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B617999:{NFSU2_TR(0x617999);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61799a:{NFSU2_TR(0x61799a);
u8 U[4];
w4(U+0,u32(0x12049251ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61799f:{NFSU2_TR(0x61799f);
__builtin_memmove((R+4),(R+12),4);
}
B6179a1:{NFSU2_TR(0x6179a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6179a6ull));
TAIL_STATIC(0x48d860u,48d);
}
B6179a6:L6179a6:{c.instructions+=3;NFSU2_TR(0x6179a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6179ad:{NFSU2_TR(0x6179ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6179af:{NFSU2_TR(0x6179af);
if(r1(R+518)){{goto L6179f3;}}
}
B6179b1:L6179b1:{c.instructions+=3;NFSU2_TR(0x6179b1);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6179b8:{NFSU2_TR(0x6179b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6179ba:{NFSU2_TR(0x6179ba);
if(r1(R+518)){{goto L6179f3;}}
}
B6179bc:L6179bc:{c.instructions+=5;NFSU2_TR(0x6179bc);
__builtin_memmove((R+4),(R+0),4);
}
B6179be:{NFSU2_TR(0x6179be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6179bf:{NFSU2_TR(0x6179bf);
u8 U[4];
w4(U+0,u32(0x22719fa9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6179c4:{NFSU2_TR(0x6179c4);
__builtin_memmove((R+4),(R+12),4);
}
B6179c6:{NFSU2_TR(0x6179c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6179cbull));
TAIL_STATIC(0x48d860u,48d);
}
B6179cb:L6179cb:{c.instructions+=5;NFSU2_TR(0x6179cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6179d2:{NFSU2_TR(0x6179d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6179d3:{NFSU2_TR(0x6179d3);
u8 U[4];
w4(U+0,u32(0xfd102a92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6179d8:{NFSU2_TR(0x6179d8);
__builtin_memmove((R+4),(R+12),4);
}
B6179da:{NFSU2_TR(0x6179da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6179dfull));
TAIL_STATIC(0x48d860u,48d);
}
B6179df:L6179df:{c.instructions+=5;NFSU2_TR(0x6179df);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6179e6:{NFSU2_TR(0x6179e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6179e7:{NFSU2_TR(0x6179e7);
u8 U[4];
w4(U+0,u32(0x12049251ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6179ec:{NFSU2_TR(0x6179ec);
__builtin_memmove((R+4),(R+12),4);
}
B6179ee:{NFSU2_TR(0x6179ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6179f3ull));
TAIL_STATIC(0x48d860u,48d);
}
B6179f3:L6179f3:{c.instructions+=2;NFSU2_TR(0x6179f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6179fa:{NFSU2_TR(0x6179fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x617940u);}goto L617940;}}
}
B617a00:L617a00:{c.instructions+=3;NFSU2_TR(0x617a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B617a07:{NFSU2_TR(0x617a07);
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
B617a09:{NFSU2_TR(0x617a09);
if(r1(R+518)){TAIL_STATIC(0x618791u,618);}
}
B617a0f:L617a0f:{c.instructions+=197;NFSU2_TR(0x617a0f);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a16:{NFSU2_TR(0x617a16);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a1d:{NFSU2_TR(0x617a1d);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a24:{NFSU2_TR(0x617a24);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a2b:{NFSU2_TR(0x617a2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617a2d:{NFSU2_TR(0x617a2d);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a34:{NFSU2_TR(0x617a34);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a3b:{NFSU2_TR(0x617a3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617a3d:{NFSU2_TR(0x617a3d);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a44:{NFSU2_TR(0x617a44);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a4b:{NFSU2_TR(0x617a4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617a4d:{NFSU2_TR(0x617a4d);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617a51:{NFSU2_TR(0x617a51);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a58:{NFSU2_TR(0x617a58);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a5f:{NFSU2_TR(0x617a5f);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a66:{NFSU2_TR(0x617a66);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a6d:{NFSU2_TR(0x617a6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617a6f:{NFSU2_TR(0x617a6f);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a76:{NFSU2_TR(0x617a76);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a7d:{NFSU2_TR(0x617a7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617a7f:{NFSU2_TR(0x617a7f);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a86:{NFSU2_TR(0x617a86);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a8d:{NFSU2_TR(0x617a8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617a8f:{NFSU2_TR(0x617a8f);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617a93:{NFSU2_TR(0x617a93);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a9a:{NFSU2_TR(0x617a9a);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617aa1:{NFSU2_TR(0x617aa1);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617aa8:{NFSU2_TR(0x617aa8);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617aaf:{NFSU2_TR(0x617aaf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ab1:{NFSU2_TR(0x617ab1);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ab8:{NFSU2_TR(0x617ab8);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617abf:{NFSU2_TR(0x617abf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ac1:{NFSU2_TR(0x617ac1);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ac8:{NFSU2_TR(0x617ac8);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617acf:{NFSU2_TR(0x617acf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ad1:{NFSU2_TR(0x617ad1);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617ad5:{NFSU2_TR(0x617ad5);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617adc:{NFSU2_TR(0x617adc);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ae3:{NFSU2_TR(0x617ae3);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617aea:{NFSU2_TR(0x617aea);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617af1:{NFSU2_TR(0x617af1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617af3:{NFSU2_TR(0x617af3);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617afa:{NFSU2_TR(0x617afa);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b01:{NFSU2_TR(0x617b01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b03:{NFSU2_TR(0x617b03);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b0a:{NFSU2_TR(0x617b0a);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b11:{NFSU2_TR(0x617b11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b13:{NFSU2_TR(0x617b13);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617b17:{NFSU2_TR(0x617b17);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b1e:{NFSU2_TR(0x617b1e);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b25:{NFSU2_TR(0x617b25);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b2c:{NFSU2_TR(0x617b2c);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b33:{NFSU2_TR(0x617b33);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b35:{NFSU2_TR(0x617b35);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b3c:{NFSU2_TR(0x617b3c);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b43:{NFSU2_TR(0x617b43);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b45:{NFSU2_TR(0x617b45);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b4c:{NFSU2_TR(0x617b4c);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b53:{NFSU2_TR(0x617b53);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b55:{NFSU2_TR(0x617b55);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617b5c:{NFSU2_TR(0x617b5c);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b63:{NFSU2_TR(0x617b63);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b6a:{NFSU2_TR(0x617b6a);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b71:{NFSU2_TR(0x617b71);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b78:{NFSU2_TR(0x617b78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b7a:{NFSU2_TR(0x617b7a);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b81:{NFSU2_TR(0x617b81);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b88:{NFSU2_TR(0x617b88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b8a:{NFSU2_TR(0x617b8a);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b91:{NFSU2_TR(0x617b91);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b98:{NFSU2_TR(0x617b98);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b9a:{NFSU2_TR(0x617b9a);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617ba1:{NFSU2_TR(0x617ba1);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ba8:{NFSU2_TR(0x617ba8);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617baf:{NFSU2_TR(0x617baf);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617bb6:{NFSU2_TR(0x617bb6);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617bbd:{NFSU2_TR(0x617bbd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617bbf:{NFSU2_TR(0x617bbf);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617bc6:{NFSU2_TR(0x617bc6);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617bcd:{NFSU2_TR(0x617bcd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617bcf:{NFSU2_TR(0x617bcf);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617bd6:{NFSU2_TR(0x617bd6);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617bdd:{NFSU2_TR(0x617bdd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617bdf:{NFSU2_TR(0x617bdf);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617be6:{NFSU2_TR(0x617be6);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617bed:{NFSU2_TR(0x617bed);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617bf4:{NFSU2_TR(0x617bf4);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617bfb:{NFSU2_TR(0x617bfb);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c02:{NFSU2_TR(0x617c02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c04:{NFSU2_TR(0x617c04);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c0b:{NFSU2_TR(0x617c0b);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c12:{NFSU2_TR(0x617c12);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c14:{NFSU2_TR(0x617c14);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c1b:{NFSU2_TR(0x617c1b);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c22:{NFSU2_TR(0x617c22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c24:{NFSU2_TR(0x617c24);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617c2b:{NFSU2_TR(0x617c2b);
{u32 ea_=u32(r4(R+16)+u32(332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c32:{NFSU2_TR(0x617c32);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c39:{NFSU2_TR(0x617c39);
{u32 ea_=u32(r4(R+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c40:{NFSU2_TR(0x617c40);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c47:{NFSU2_TR(0x617c47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c49:{NFSU2_TR(0x617c49);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c50:{NFSU2_TR(0x617c50);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c57:{NFSU2_TR(0x617c57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c59:{NFSU2_TR(0x617c59);
{u32 ea_=u32(r4(R+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c60:{NFSU2_TR(0x617c60);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c67:{NFSU2_TR(0x617c67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c69:{NFSU2_TR(0x617c69);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617c70:{NFSU2_TR(0x617c70);
{u32 ea_=u32(r4(R+16)+u32(332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c77:{NFSU2_TR(0x617c77);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c7e:{NFSU2_TR(0x617c7e);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c85:{NFSU2_TR(0x617c85);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c8c:{NFSU2_TR(0x617c8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c8e:{NFSU2_TR(0x617c8e);
{u32 ea_=u32(r4(R+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c95:{NFSU2_TR(0x617c95);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c9c:{NFSU2_TR(0x617c9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c9e:{NFSU2_TR(0x617c9e);
{u32 ea_=u32(r4(R+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ca5:{NFSU2_TR(0x617ca5);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617cac:{NFSU2_TR(0x617cac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617cae:{NFSU2_TR(0x617cae);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617cb5:{NFSU2_TR(0x617cb5);
{u32 ea_=u32(r4(R+16)+u32(332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617cbc:{NFSU2_TR(0x617cbc);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617cc3:{NFSU2_TR(0x617cc3);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617cca:{NFSU2_TR(0x617cca);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617cd1:{NFSU2_TR(0x617cd1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617cd3:{NFSU2_TR(0x617cd3);
{u32 ea_=u32(r4(R+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617cda:{NFSU2_TR(0x617cda);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ce1:{NFSU2_TR(0x617ce1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ce3:{NFSU2_TR(0x617ce3);
{u32 ea_=u32(r4(R+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617cea:{NFSU2_TR(0x617cea);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617cf1:{NFSU2_TR(0x617cf1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617cf3:{NFSU2_TR(0x617cf3);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617cfa:{NFSU2_TR(0x617cfa);
{u32 ea_=u32(r4(R+16)+u32(332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d01:{NFSU2_TR(0x617d01);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d08:{NFSU2_TR(0x617d08);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d0f:{NFSU2_TR(0x617d0f);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d16:{NFSU2_TR(0x617d16);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617d18:{NFSU2_TR(0x617d18);
{u32 ea_=u32(r4(R+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d1f:{NFSU2_TR(0x617d1f);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d26:{NFSU2_TR(0x617d26);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617d28:{NFSU2_TR(0x617d28);
{u32 ea_=u32(r4(R+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d2f:{NFSU2_TR(0x617d2f);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d36:{NFSU2_TR(0x617d36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617d38:{NFSU2_TR(0x617d38);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617d3f:{NFSU2_TR(0x617d3f);
{u32 ea_=u32(r4(R+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d46:{NFSU2_TR(0x617d46);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d4d:{NFSU2_TR(0x617d4d);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d54:{NFSU2_TR(0x617d54);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d5b:{NFSU2_TR(0x617d5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617d5d:{NFSU2_TR(0x617d5d);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d64:{NFSU2_TR(0x617d64);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d6b:{NFSU2_TR(0x617d6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617d6d:{NFSU2_TR(0x617d6d);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d74:{NFSU2_TR(0x617d74);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d7b:{NFSU2_TR(0x617d7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617d7d:{NFSU2_TR(0x617d7d);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617d84:{NFSU2_TR(0x617d84);
{u32 ea_=u32(r4(R+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d8b:{NFSU2_TR(0x617d8b);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d92:{NFSU2_TR(0x617d92);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d99:{NFSU2_TR(0x617d99);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617da0:{NFSU2_TR(0x617da0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617da2:{NFSU2_TR(0x617da2);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617da9:{NFSU2_TR(0x617da9);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617db0:{NFSU2_TR(0x617db0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617db2:{NFSU2_TR(0x617db2);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617db9:{NFSU2_TR(0x617db9);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617dc0:{NFSU2_TR(0x617dc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617dc2:{NFSU2_TR(0x617dc2);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617dc9:{NFSU2_TR(0x617dc9);
{u32 ea_=u32(r4(R+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617dd0:{NFSU2_TR(0x617dd0);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617dd7:{NFSU2_TR(0x617dd7);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617dde:{NFSU2_TR(0x617dde);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617de5:{NFSU2_TR(0x617de5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617de7:{NFSU2_TR(0x617de7);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617dee:{NFSU2_TR(0x617dee);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617df5:{NFSU2_TR(0x617df5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617df7:{NFSU2_TR(0x617df7);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617dfe:{NFSU2_TR(0x617dfe);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e05:{NFSU2_TR(0x617e05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e07:{NFSU2_TR(0x617e07);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617e0e:{NFSU2_TR(0x617e0e);
{u32 ea_=u32(r4(R+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e15:{NFSU2_TR(0x617e15);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e1c:{NFSU2_TR(0x617e1c);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e23:{NFSU2_TR(0x617e23);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B617e27:{NFSU2_TR(0x617e27);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e2e:{NFSU2_TR(0x617e2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617e2f:{NFSU2_TR(0x617e2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B617e33:{NFSU2_TR(0x617e33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B617e34:{NFSU2_TR(0x617e34);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e36:{NFSU2_TR(0x617e36);
{u32 ea_=u32(r4(R+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e3d:{NFSU2_TR(0x617e3d);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e44:{NFSU2_TR(0x617e44);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e46:{NFSU2_TR(0x617e46);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e4d:{NFSU2_TR(0x617e4d);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e54:{NFSU2_TR(0x617e54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e56:{NFSU2_TR(0x617e56);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617e5d:{NFSU2_TR(0x617e5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x617e62ull));
TAIL_STATIC(0x4012b0u,401);
}
B617e62:L617e62:{c.instructions+=124;NFSU2_TR(0x617e62);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e66:{NFSU2_TR(0x617e66);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e69:{NFSU2_TR(0x617e69);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e6d:{NFSU2_TR(0x617e6d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e6f:{NFSU2_TR(0x617e6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e71:{NFSU2_TR(0x617e71);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e75:{NFSU2_TR(0x617e75);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e78:{NFSU2_TR(0x617e78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e7a:{NFSU2_TR(0x617e7a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e7e:{NFSU2_TR(0x617e7e);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e81:{NFSU2_TR(0x617e81);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e83:{NFSU2_TR(0x617e83);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617e87:{NFSU2_TR(0x617e87);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e8b:{NFSU2_TR(0x617e8b);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e8e:{NFSU2_TR(0x617e8e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e92:{NFSU2_TR(0x617e92);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e95:{NFSU2_TR(0x617e95);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e97:{NFSU2_TR(0x617e97);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e9b:{NFSU2_TR(0x617e9b);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e9e:{NFSU2_TR(0x617e9e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ea0:{NFSU2_TR(0x617ea0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ea4:{NFSU2_TR(0x617ea4);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ea7:{NFSU2_TR(0x617ea7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ea9:{NFSU2_TR(0x617ea9);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617ead:{NFSU2_TR(0x617ead);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617eb1:{NFSU2_TR(0x617eb1);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617eb4:{NFSU2_TR(0x617eb4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617eb8:{NFSU2_TR(0x617eb8);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ebb:{NFSU2_TR(0x617ebb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ebd:{NFSU2_TR(0x617ebd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ec1:{NFSU2_TR(0x617ec1);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ec4:{NFSU2_TR(0x617ec4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ec6:{NFSU2_TR(0x617ec6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617eca:{NFSU2_TR(0x617eca);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ecd:{NFSU2_TR(0x617ecd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ecf:{NFSU2_TR(0x617ecf);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617ed6:{NFSU2_TR(0x617ed6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617eda:{NFSU2_TR(0x617eda);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617edd:{NFSU2_TR(0x617edd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ee1:{NFSU2_TR(0x617ee1);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ee4:{NFSU2_TR(0x617ee4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ee6:{NFSU2_TR(0x617ee6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617eea:{NFSU2_TR(0x617eea);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617eed:{NFSU2_TR(0x617eed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617eef:{NFSU2_TR(0x617eef);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ef3:{NFSU2_TR(0x617ef3);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ef6:{NFSU2_TR(0x617ef6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ef8:{NFSU2_TR(0x617ef8);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617eff:{NFSU2_TR(0x617eff);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f03:{NFSU2_TR(0x617f03);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f06:{NFSU2_TR(0x617f06);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f0a:{NFSU2_TR(0x617f0a);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f0d:{NFSU2_TR(0x617f0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f0f:{NFSU2_TR(0x617f0f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f13:{NFSU2_TR(0x617f13);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f15:{NFSU2_TR(0x617f15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f17:{NFSU2_TR(0x617f17);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f1b:{NFSU2_TR(0x617f1b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f1e:{NFSU2_TR(0x617f1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f20:{NFSU2_TR(0x617f20);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617f27:{NFSU2_TR(0x617f27);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f2b:{NFSU2_TR(0x617f2b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f2e:{NFSU2_TR(0x617f2e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f32:{NFSU2_TR(0x617f32);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f35:{NFSU2_TR(0x617f35);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f37:{NFSU2_TR(0x617f37);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f3b:{NFSU2_TR(0x617f3b);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f3e:{NFSU2_TR(0x617f3e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f40:{NFSU2_TR(0x617f40);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f44:{NFSU2_TR(0x617f44);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f47:{NFSU2_TR(0x617f47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f49:{NFSU2_TR(0x617f49);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617f50:{NFSU2_TR(0x617f50);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f54:{NFSU2_TR(0x617f54);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f57:{NFSU2_TR(0x617f57);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f5b:{NFSU2_TR(0x617f5b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f5e:{NFSU2_TR(0x617f5e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f60:{NFSU2_TR(0x617f60);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f64:{NFSU2_TR(0x617f64);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f67:{NFSU2_TR(0x617f67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f69:{NFSU2_TR(0x617f69);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f6d:{NFSU2_TR(0x617f6d);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f70:{NFSU2_TR(0x617f70);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f72:{NFSU2_TR(0x617f72);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617f79:{NFSU2_TR(0x617f79);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f7d:{NFSU2_TR(0x617f7d);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f80:{NFSU2_TR(0x617f80);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f84:{NFSU2_TR(0x617f84);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f87:{NFSU2_TR(0x617f87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f89:{NFSU2_TR(0x617f89);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f8d:{NFSU2_TR(0x617f8d);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f90:{NFSU2_TR(0x617f90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f92:{NFSU2_TR(0x617f92);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f96:{NFSU2_TR(0x617f96);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f99:{NFSU2_TR(0x617f99);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f9b:{NFSU2_TR(0x617f9b);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617fa2:{NFSU2_TR(0x617fa2);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fa6:{NFSU2_TR(0x617fa6);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fa9:{NFSU2_TR(0x617fa9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fad:{NFSU2_TR(0x617fad);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fb0:{NFSU2_TR(0x617fb0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617fb2:{NFSU2_TR(0x617fb2);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fb6:{NFSU2_TR(0x617fb6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fb8:{NFSU2_TR(0x617fb8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617fba:{NFSU2_TR(0x617fba);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fbe:{NFSU2_TR(0x617fbe);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fc1:{NFSU2_TR(0x617fc1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617fc3:{NFSU2_TR(0x617fc3);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617fca:{NFSU2_TR(0x617fca);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fce:{NFSU2_TR(0x617fce);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fd1:{NFSU2_TR(0x617fd1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fd5:{NFSU2_TR(0x617fd5);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fd8:{NFSU2_TR(0x617fd8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617fda:{NFSU2_TR(0x617fda);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fde:{NFSU2_TR(0x617fde);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fe1:{NFSU2_TR(0x617fe1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617fe3:{NFSU2_TR(0x617fe3);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fe7:{NFSU2_TR(0x617fe7);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fea:{NFSU2_TR(0x617fea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617fec:{NFSU2_TR(0x617fec);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617ff3:{NFSU2_TR(0x617ff3);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ff7:{NFSU2_TR(0x617ff7);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ffa:{NFSU2_TR(0x617ffa);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ffe:{NFSU2_TR(0x617ffe);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x618001u,618);
}
XIT:NFSU2_TR_EXIT(0x617,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
