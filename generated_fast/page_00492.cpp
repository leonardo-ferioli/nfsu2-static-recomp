#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_487(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x492,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x492,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_492(u8* __restrict R,Cpu& c);
u32 page_492(Cpu& c){return body_492(c.regs.data(),c);}
__attribute__((noinline)) u32 body_492(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x492001:goto L492001;
case 0x492003:c.instructions+=2;goto B492003;
case 0x49200e:c.instructions+=1;goto B49200e;
case 0x492010:goto L492010;
case 0x492013:c.instructions+=4;goto B492013;
case 0x492014:c.instructions+=3;goto B492014;
case 0x492015:c.instructions+=2;goto B492015;
case 0x492017:c.instructions+=1;goto B492017;
case 0x49201c:goto L49201c;
case 0x49201e:goto L49201e;
case 0x492020:goto L492020;
case 0x492024:c.instructions+=11;goto B492024;
case 0x492027:c.instructions+=10;goto B492027;
case 0x492029:c.instructions+=9;goto B492029;
case 0x49202c:c.instructions+=8;goto B49202c;
case 0x492037:c.instructions+=7;goto B492037;
case 0x49203b:c.instructions+=6;goto B49203b;
case 0x49203e:c.instructions+=5;goto B49203e;
case 0x492040:c.instructions+=4;goto B492040;
case 0x492042:c.instructions+=3;goto B492042;
case 0x492046:c.instructions+=2;goto B492046;
case 0x492048:c.instructions+=1;goto B492048;
case 0x49204e:goto L49204e;
case 0x492051:c.instructions+=17;goto B492051;
case 0x492053:c.instructions+=16;goto B492053;
case 0x492056:c.instructions+=15;goto B492056;
case 0x492059:c.instructions+=14;goto B492059;
case 0x492060:c.instructions+=13;goto B492060;
case 0x492063:c.instructions+=12;goto B492063;
case 0x49206a:c.instructions+=11;goto B49206a;
case 0x49206d:c.instructions+=10;goto B49206d;
case 0x492074:c.instructions+=9;goto B492074;
case 0x492077:c.instructions+=8;goto B492077;
case 0x49207e:c.instructions+=7;goto B49207e;
case 0x492085:c.instructions+=6;goto B492085;
case 0x492088:c.instructions+=5;goto B492088;
case 0x492089:c.instructions+=4;goto B492089;
case 0x492090:c.instructions+=3;goto B492090;
case 0x492091:c.instructions+=2;goto B492091;
case 0x492098:c.instructions+=1;goto B492098;
case 0x49209d:goto L49209d;
case 0x4920a4:c.instructions+=4;goto B4920a4;
case 0x4920a5:c.instructions+=3;goto B4920a5;
case 0x4920ac:c.instructions+=2;goto B4920ac;
case 0x4920ad:c.instructions+=1;goto B4920ad;
case 0x4920b2:goto L4920b2;
case 0x4920b5:c.instructions+=4;goto B4920b5;
case 0x4920b8:c.instructions+=3;goto B4920b8;
case 0x4920ba:c.instructions+=2;goto B4920ba;
case 0x4920c5:c.instructions+=1;goto B4920c5;
case 0x4920c7:goto L4920c7;
case 0x4920ca:c.instructions+=9;goto B4920ca;
case 0x4920cf:c.instructions+=8;goto B4920cf;
case 0x4920d1:c.instructions+=7;goto B4920d1;
case 0x4920d4:c.instructions+=6;goto B4920d4;
case 0x4920d9:c.instructions+=5;goto B4920d9;
case 0x4920db:c.instructions+=4;goto B4920db;
case 0x4920de:c.instructions+=3;goto B4920de;
case 0x4920e2:c.instructions+=2;goto B4920e2;
case 0x4920e6:c.instructions+=1;goto B4920e6;
case 0x4920ed:goto L4920ed;
case 0x4920f0:c.instructions+=49;goto B4920f0;
case 0x4920f3:c.instructions+=48;goto B4920f3;
case 0x4920f9:c.instructions+=47;goto B4920f9;
case 0x4920fc:c.instructions+=46;goto B4920fc;
case 0x4920ff:c.instructions+=45;goto B4920ff;
case 0x492103:c.instructions+=44;goto B492103;
case 0x49210a:c.instructions+=43;goto B49210a;
case 0x49210e:c.instructions+=42;goto B49210e;
case 0x492114:c.instructions+=41;goto B492114;
case 0x492118:c.instructions+=40;goto B492118;
case 0x49211c:c.instructions+=39;goto B49211c;
case 0x492120:c.instructions+=38;goto B492120;
case 0x492127:c.instructions+=37;goto B492127;
case 0x49212a:c.instructions+=36;goto B49212a;
case 0x49212d:c.instructions+=35;goto B49212d;
case 0x492134:c.instructions+=34;goto B492134;
case 0x492138:c.instructions+=33;goto B492138;
case 0x49213b:c.instructions+=32;goto B49213b;
case 0x492141:c.instructions+=31;goto B492141;
case 0x492148:c.instructions+=30;goto B492148;
case 0x49214c:c.instructions+=29;goto B49214c;
case 0x49214f:c.instructions+=28;goto B49214f;
case 0x492151:c.instructions+=27;goto B492151;
case 0x492155:c.instructions+=26;goto B492155;
case 0x492158:c.instructions+=25;goto B492158;
case 0x49215a:c.instructions+=24;goto B49215a;
case 0x492161:c.instructions+=23;goto B492161;
case 0x492164:c.instructions+=22;goto B492164;
case 0x492168:c.instructions+=21;goto B492168;
case 0x49216f:c.instructions+=20;goto B49216f;
case 0x492172:c.instructions+=19;goto B492172;
case 0x492176:c.instructions+=18;goto B492176;
case 0x49217d:c.instructions+=17;goto B49217d;
case 0x49217f:c.instructions+=16;goto B49217f;
case 0x492183:c.instructions+=15;goto B492183;
case 0x492187:c.instructions+=14;goto B492187;
case 0x49218e:c.instructions+=13;goto B49218e;
case 0x492195:c.instructions+=12;goto B492195;
case 0x492199:c.instructions+=11;goto B492199;
case 0x4921a0:c.instructions+=10;goto B4921a0;
case 0x4921a4:c.instructions+=9;goto B4921a4;
case 0x4921a8:c.instructions+=8;goto B4921a8;
case 0x4921af:c.instructions+=7;goto B4921af;
case 0x4921b3:c.instructions+=6;goto B4921b3;
case 0x4921b7:c.instructions+=5;goto B4921b7;
case 0x4921bb:c.instructions+=4;goto B4921bb;
case 0x4921bd:c.instructions+=3;goto B4921bd;
case 0x4921bf:c.instructions+=2;goto B4921bf;
case 0x4921c2:c.instructions+=1;goto B4921c2;
case 0x4921c8:goto L4921c8;
case 0x4921cf:c.instructions+=9;goto B4921cf;
case 0x4921d5:c.instructions+=8;goto B4921d5;
case 0x4921dc:c.instructions+=7;goto B4921dc;
case 0x4921e3:c.instructions+=6;goto B4921e3;
case 0x4921e9:c.instructions+=5;goto B4921e9;
case 0x4921f0:c.instructions+=4;goto B4921f0;
case 0x4921f7:c.instructions+=3;goto B4921f7;
case 0x4921fd:c.instructions+=2;goto B4921fd;
case 0x492204:c.instructions+=1;goto B492204;
case 0x492210:goto L492210;
case 0x492214:c.instructions+=6;goto B492214;
case 0x49221b:c.instructions+=5;goto B49221b;
case 0x49221d:c.instructions+=4;goto B49221d;
case 0x49221f:c.instructions+=3;goto B49221f;
case 0x492223:c.instructions+=2;goto B492223;
case 0x492225:c.instructions+=1;goto B492225;
case 0x49222b:goto L49222b;
case 0x49222d:c.instructions+=23;goto B49222d;
case 0x492230:c.instructions+=22;goto B492230;
case 0x492232:c.instructions+=21;goto B492232;
case 0x492234:c.instructions+=20;goto B492234;
case 0x492237:c.instructions+=19;goto B492237;
case 0x492239:c.instructions+=18;goto B492239;
case 0x49223b:c.instructions+=17;goto B49223b;
case 0x49223e:c.instructions+=16;goto B49223e;
case 0x492240:c.instructions+=15;goto B492240;
case 0x492242:c.instructions+=14;goto B492242;
case 0x492245:c.instructions+=13;goto B492245;
case 0x492247:c.instructions+=12;goto B492247;
case 0x492249:c.instructions+=11;goto B492249;
case 0x49224c:c.instructions+=10;goto B49224c;
case 0x49224e:c.instructions+=9;goto B49224e;
case 0x492250:c.instructions+=8;goto B492250;
case 0x492253:c.instructions+=7;goto B492253;
case 0x492255:c.instructions+=6;goto B492255;
case 0x492257:c.instructions+=5;goto B492257;
case 0x49225c:c.instructions+=4;goto B49225c;
case 0x49225e:c.instructions+=3;goto B49225e;
case 0x492262:c.instructions+=2;goto B492262;
case 0x492266:c.instructions+=1;goto B492266;
case 0x492268:goto L492268;
case 0x49226e:goto L49226e;
case 0x492274:c.instructions+=4;goto B492274;
case 0x49227a:c.instructions+=3;goto B49227a;
case 0x492280:c.instructions+=2;goto B492280;
case 0x492286:c.instructions+=1;goto B492286;
case 0x49228b:goto L49228b;
case 0x49228d:c.instructions+=10;goto B49228d;
case 0x492292:c.instructions+=9;goto B492292;
case 0x492294:c.instructions+=8;goto B492294;
case 0x492296:c.instructions+=7;goto B492296;
case 0x492299:c.instructions+=6;goto B492299;
case 0x49229b:c.instructions+=5;goto B49229b;
case 0x49229e:c.instructions+=4;goto B49229e;
case 0x4922a0:c.instructions+=3;goto B4922a0;
case 0x4922a2:c.instructions+=2;goto B4922a2;
case 0x4922a3:c.instructions+=1;goto B4922a3;
case 0x4922a8:goto L4922a8;
case 0x4922a9:c.instructions+=2;goto B4922a9;
case 0x4922ad:c.instructions+=1;goto B4922ad;
case 0x4922b2:goto L4922b2;
case 0x4922b8:c.instructions+=5;goto B4922b8;
case 0x4922bc:c.instructions+=4;goto B4922bc;
case 0x4922be:c.instructions+=3;goto B4922be;
case 0x4922c2:c.instructions+=2;goto B4922c2;
case 0x4922c6:c.instructions+=1;goto B4922c6;
case 0x4922c8:goto L4922c8;
case 0x4922ce:goto L4922ce;
case 0x4922d4:c.instructions+=4;goto B4922d4;
case 0x4922d8:c.instructions+=3;goto B4922d8;
case 0x4922dc:c.instructions+=2;goto B4922dc;
case 0x4922e2:c.instructions+=1;goto B4922e2;
case 0x4922e7:goto L4922e7;
case 0x4922e9:c.instructions+=12;goto B4922e9;
case 0x4922ee:c.instructions+=11;goto B4922ee;
case 0x4922f0:c.instructions+=10;goto B4922f0;
case 0x4922f2:c.instructions+=9;goto B4922f2;
case 0x4922f5:c.instructions+=8;goto B4922f5;
case 0x4922f7:c.instructions+=7;goto B4922f7;
case 0x4922fa:c.instructions+=6;goto B4922fa;
case 0x4922fc:c.instructions+=5;goto B4922fc;
case 0x4922fd:c.instructions+=4;goto B4922fd;
case 0x492304:c.instructions+=3;goto B492304;
case 0x492309:c.instructions+=2;goto B492309;
case 0x49230a:c.instructions+=1;goto B49230a;
case 0x49230f:goto L49230f;
case 0x492312:c.instructions+=101;goto B492312;
case 0x492319:c.instructions+=100;goto B492319;
case 0x49231d:c.instructions+=99;goto B49231d;
case 0x492321:c.instructions+=98;goto B492321;
case 0x492328:c.instructions+=97;goto B492328;
case 0x49232a:c.instructions+=96;goto B49232a;
case 0x492331:c.instructions+=95;goto B492331;
case 0x492335:c.instructions+=94;goto B492335;
case 0x492337:c.instructions+=93;goto B492337;
case 0x49233e:c.instructions+=92;goto B49233e;
case 0x492344:c.instructions+=91;goto B492344;
case 0x492346:c.instructions+=90;goto B492346;
case 0x49234d:c.instructions+=89;goto B49234d;
case 0x492351:c.instructions+=88;goto B492351;
case 0x492358:c.instructions+=87;goto B492358;
case 0x49235c:c.instructions+=86;goto B49235c;
case 0x49235e:c.instructions+=85;goto B49235e;
case 0x492365:c.instructions+=84;goto B492365;
case 0x492369:c.instructions+=83;goto B492369;
case 0x49236b:c.instructions+=82;goto B49236b;
case 0x492372:c.instructions+=81;goto B492372;
case 0x492378:c.instructions+=80;goto B492378;
case 0x49237a:c.instructions+=79;goto B49237a;
case 0x492381:c.instructions+=78;goto B492381;
case 0x492385:c.instructions+=77;goto B492385;
case 0x49238c:c.instructions+=76;goto B49238c;
case 0x492390:c.instructions+=75;goto B492390;
case 0x492392:c.instructions+=74;goto B492392;
case 0x492399:c.instructions+=73;goto B492399;
case 0x49239d:c.instructions+=72;goto B49239d;
case 0x49239f:c.instructions+=71;goto B49239f;
case 0x4923a6:c.instructions+=70;goto B4923a6;
case 0x4923ac:c.instructions+=69;goto B4923ac;
case 0x4923ae:c.instructions+=68;goto B4923ae;
case 0x4923b5:c.instructions+=67;goto B4923b5;
case 0x4923bc:c.instructions+=66;goto B4923bc;
case 0x4923c3:c.instructions+=65;goto B4923c3;
case 0x4923c7:c.instructions+=64;goto B4923c7;
case 0x4923cb:c.instructions+=63;goto B4923cb;
case 0x4923d2:c.instructions+=62;goto B4923d2;
case 0x4923d6:c.instructions+=61;goto B4923d6;
case 0x4923d8:c.instructions+=60;goto B4923d8;
case 0x4923df:c.instructions+=59;goto B4923df;
case 0x4923e3:c.instructions+=58;goto B4923e3;
case 0x4923e5:c.instructions+=57;goto B4923e5;
case 0x4923ec:c.instructions+=56;goto B4923ec;
case 0x4923f2:c.instructions+=55;goto B4923f2;
case 0x4923f4:c.instructions+=54;goto B4923f4;
case 0x4923fb:c.instructions+=53;goto B4923fb;
case 0x492402:c.instructions+=52;goto B492402;
case 0x492404:c.instructions+=51;goto B492404;
case 0x492408:c.instructions+=50;goto B492408;
case 0x49240c:c.instructions+=49;goto B49240c;
case 0x492410:c.instructions+=48;goto B492410;
case 0x492416:c.instructions+=47;goto B492416;
case 0x49241a:c.instructions+=46;goto B49241a;
case 0x492421:c.instructions+=45;goto B492421;
case 0x492425:c.instructions+=44;goto B492425;
case 0x49242c:c.instructions+=43;goto B49242c;
case 0x49242e:c.instructions+=42;goto B49242e;
case 0x492430:c.instructions+=41;goto B492430;
case 0x492437:c.instructions+=40;goto B492437;
case 0x49243b:c.instructions+=39;goto B49243b;
case 0x49243d:c.instructions+=38;goto B49243d;
case 0x492441:c.instructions+=37;goto B492441;
case 0x492448:c.instructions+=36;goto B492448;
case 0x49244c:c.instructions+=35;goto B49244c;
case 0x492453:c.instructions+=34;goto B492453;
case 0x492455:c.instructions+=33;goto B492455;
case 0x492457:c.instructions+=32;goto B492457;
case 0x49245e:c.instructions+=31;goto B49245e;
case 0x492462:c.instructions+=30;goto B492462;
case 0x492464:c.instructions+=29;goto B492464;
case 0x492468:c.instructions+=28;goto B492468;
case 0x49246f:c.instructions+=27;goto B49246f;
case 0x492473:c.instructions+=26;goto B492473;
case 0x49247a:c.instructions+=25;goto B49247a;
case 0x49247c:c.instructions+=24;goto B49247c;
case 0x49247e:c.instructions+=23;goto B49247e;
case 0x492485:c.instructions+=22;goto B492485;
case 0x492489:c.instructions+=21;goto B492489;
case 0x49248b:c.instructions+=20;goto B49248b;
case 0x49248f:c.instructions+=19;goto B49248f;
case 0x492496:c.instructions+=18;goto B492496;
case 0x49249d:c.instructions+=17;goto B49249d;
case 0x4924a1:c.instructions+=16;goto B4924a1;
case 0x4924a8:c.instructions+=15;goto B4924a8;
case 0x4924aa:c.instructions+=14;goto B4924aa;
case 0x4924ac:c.instructions+=13;goto B4924ac;
case 0x4924b3:c.instructions+=12;goto B4924b3;
case 0x4924b7:c.instructions+=11;goto B4924b7;
case 0x4924b9:c.instructions+=10;goto B4924b9;
case 0x4924bd:c.instructions+=9;goto B4924bd;
case 0x4924c4:c.instructions+=8;goto B4924c4;
case 0x4924cb:c.instructions+=7;goto B4924cb;
case 0x4924cd:c.instructions+=6;goto B4924cd;
case 0x4924d1:c.instructions+=5;goto B4924d1;
case 0x4924d5:c.instructions+=4;goto B4924d5;
case 0x4924d9:c.instructions+=3;goto B4924d9;
case 0x4924db:c.instructions+=2;goto B4924db;
case 0x4924e2:c.instructions+=1;goto B4924e2;
case 0x4924e7:goto L4924e7;
case 0x4924e9:c.instructions+=32;goto B4924e9;
case 0x4924ec:c.instructions+=31;goto B4924ec;
case 0x4924ee:c.instructions+=30;goto B4924ee;
case 0x4924f0:c.instructions+=29;goto B4924f0;
case 0x4924f3:c.instructions+=28;goto B4924f3;
case 0x4924f5:c.instructions+=27;goto B4924f5;
case 0x4924f7:c.instructions+=26;goto B4924f7;
case 0x4924fa:c.instructions+=25;goto B4924fa;
case 0x4924fc:c.instructions+=24;goto B4924fc;
case 0x4924fe:c.instructions+=23;goto B4924fe;
case 0x492501:c.instructions+=22;goto B492501;
case 0x492503:c.instructions+=21;goto B492503;
case 0x492505:c.instructions+=20;goto B492505;
case 0x492508:c.instructions+=19;goto B492508;
case 0x49250a:c.instructions+=18;goto B49250a;
case 0x49250c:c.instructions+=17;goto B49250c;
case 0x49250f:c.instructions+=16;goto B49250f;
case 0x492511:c.instructions+=15;goto B492511;
case 0x492513:c.instructions+=14;goto B492513;
case 0x492516:c.instructions+=13;goto B492516;
case 0x492518:c.instructions+=12;goto B492518;
case 0x49251a:c.instructions+=11;goto B49251a;
case 0x49251d:c.instructions+=10;goto B49251d;
case 0x49251f:c.instructions+=9;goto B49251f;
case 0x492521:c.instructions+=8;goto B492521;
case 0x492524:c.instructions+=7;goto B492524;
case 0x492529:c.instructions+=6;goto B492529;
case 0x49252b:c.instructions+=5;goto B49252b;
case 0x49252d:c.instructions+=4;goto B49252d;
case 0x492531:c.instructions+=3;goto B492531;
case 0x492535:c.instructions+=2;goto B492535;
case 0x492537:c.instructions+=1;goto B492537;
case 0x492539:goto L492539;
case 0x49253f:goto L49253f;
case 0x492545:c.instructions+=4;goto B492545;
case 0x492549:c.instructions+=3;goto B492549;
case 0x49254d:c.instructions+=2;goto B49254d;
case 0x492553:c.instructions+=1;goto B492553;
case 0x492558:goto L492558;
case 0x49255a:c.instructions+=12;goto B49255a;
case 0x49255f:c.instructions+=11;goto B49255f;
case 0x492561:c.instructions+=10;goto B492561;
case 0x492563:c.instructions+=9;goto B492563;
case 0x492566:c.instructions+=8;goto B492566;
case 0x492568:c.instructions+=7;goto B492568;
case 0x49256b:c.instructions+=6;goto B49256b;
case 0x49256d:c.instructions+=5;goto B49256d;
case 0x49256e:c.instructions+=4;goto B49256e;
case 0x492575:c.instructions+=3;goto B492575;
case 0x49257a:c.instructions+=2;goto B49257a;
case 0x49257b:c.instructions+=1;goto B49257b;
case 0x492580:goto L492580;
case 0x492586:c.instructions+=4;goto B492586;
case 0x492588:c.instructions+=3;goto B492588;
case 0x49258c:c.instructions+=2;goto B49258c;
case 0x492590:c.instructions+=1;goto B492590;
case 0x492592:goto L492592;
case 0x492598:goto L492598;
case 0x49259e:c.instructions+=4;goto B49259e;
case 0x4925a2:c.instructions+=3;goto B4925a2;
case 0x4925a6:c.instructions+=2;goto B4925a6;
case 0x4925ac:c.instructions+=1;goto B4925ac;
case 0x4925b1:goto L4925b1;
case 0x4925b3:c.instructions+=13;goto B4925b3;
case 0x4925b8:c.instructions+=12;goto B4925b8;
case 0x4925ba:c.instructions+=11;goto B4925ba;
case 0x4925bc:c.instructions+=10;goto B4925bc;
case 0x4925bf:c.instructions+=9;goto B4925bf;
case 0x4925c1:c.instructions+=8;goto B4925c1;
case 0x4925c4:c.instructions+=7;goto B4925c4;
case 0x4925c6:c.instructions+=6;goto B4925c6;
case 0x4925c7:c.instructions+=5;goto B4925c7;
case 0x4925ce:c.instructions+=4;goto B4925ce;
case 0x4925cf:c.instructions+=3;goto B4925cf;
case 0x4925d6:c.instructions+=2;goto B4925d6;
case 0x4925d7:c.instructions+=1;goto B4925d7;
case 0x4925dc:goto L4925dc;
case 0x4925e2:c.instructions+=4;goto B4925e2;
case 0x4925e4:c.instructions+=3;goto B4925e4;
case 0x4925e8:c.instructions+=2;goto B4925e8;
case 0x4925ec:c.instructions+=1;goto B4925ec;
case 0x4925ee:goto L4925ee;
case 0x4925f4:goto L4925f4;
case 0x4925fa:c.instructions+=4;goto B4925fa;
case 0x4925fe:c.instructions+=3;goto B4925fe;
case 0x492602:c.instructions+=2;goto B492602;
case 0x492608:c.instructions+=1;goto B492608;
case 0x49260d:goto L49260d;
case 0x49260f:c.instructions+=13;goto B49260f;
case 0x492614:c.instructions+=12;goto B492614;
case 0x492616:c.instructions+=11;goto B492616;
case 0x492618:c.instructions+=10;goto B492618;
case 0x49261b:c.instructions+=9;goto B49261b;
case 0x49261d:c.instructions+=8;goto B49261d;
case 0x492620:c.instructions+=7;goto B492620;
case 0x492622:c.instructions+=6;goto B492622;
case 0x492623:c.instructions+=5;goto B492623;
case 0x49262a:c.instructions+=4;goto B49262a;
case 0x49262b:c.instructions+=3;goto B49262b;
case 0x492632:c.instructions+=2;goto B492632;
case 0x492633:c.instructions+=1;goto B492633;
case 0x492638:goto L492638;
case 0x49263b:c.instructions+=38;goto B49263b;
case 0x492642:c.instructions+=37;goto B492642;
case 0x492649:c.instructions+=36;goto B492649;
case 0x492650:c.instructions+=35;goto B492650;
case 0x492657:c.instructions+=34;goto B492657;
case 0x492659:c.instructions+=33;goto B492659;
case 0x492660:c.instructions+=32;goto B492660;
case 0x492667:c.instructions+=31;goto B492667;
case 0x492669:c.instructions+=30;goto B492669;
case 0x492670:c.instructions+=29;goto B492670;
case 0x492677:c.instructions+=28;goto B492677;
case 0x492679:c.instructions+=27;goto B492679;
case 0x492680:c.instructions+=26;goto B492680;
case 0x492687:c.instructions+=25;goto B492687;
case 0x49268e:c.instructions+=24;goto B49268e;
case 0x492695:c.instructions+=23;goto B492695;
case 0x492697:c.instructions+=22;goto B492697;
case 0x49269e:c.instructions+=21;goto B49269e;
case 0x4926a5:c.instructions+=20;goto B4926a5;
case 0x4926a7:c.instructions+=19;goto B4926a7;
case 0x4926ae:c.instructions+=18;goto B4926ae;
case 0x4926b5:c.instructions+=17;goto B4926b5;
case 0x4926b7:c.instructions+=16;goto B4926b7;
case 0x4926be:c.instructions+=15;goto B4926be;
case 0x4926c5:c.instructions+=14;goto B4926c5;
case 0x4926cc:c.instructions+=13;goto B4926cc;
case 0x4926d3:c.instructions+=12;goto B4926d3;
case 0x4926d5:c.instructions+=11;goto B4926d5;
case 0x4926dc:c.instructions+=10;goto B4926dc;
case 0x4926e3:c.instructions+=9;goto B4926e3;
case 0x4926e5:c.instructions+=8;goto B4926e5;
case 0x4926ec:c.instructions+=7;goto B4926ec;
case 0x4926f3:c.instructions+=6;goto B4926f3;
case 0x4926f5:c.instructions+=5;goto B4926f5;
case 0x4926fc:c.instructions+=4;goto B4926fc;
case 0x4926fe:c.instructions+=3;goto B4926fe;
case 0x492705:c.instructions+=2;goto B492705;
case 0x49270c:c.instructions+=1;goto B49270c;
case 0x492713:goto L492713;
case 0x492717:c.instructions+=18;goto B492717;
case 0x492719:c.instructions+=17;goto B492719;
case 0x49271b:c.instructions+=16;goto B49271b;
case 0x49271f:c.instructions+=15;goto B49271f;
case 0x492722:c.instructions+=14;goto B492722;
case 0x492724:c.instructions+=13;goto B492724;
case 0x492728:c.instructions+=12;goto B492728;
case 0x49272a:c.instructions+=11;goto B49272a;
case 0x49272d:c.instructions+=10;goto B49272d;
case 0x49272f:c.instructions+=9;goto B49272f;
case 0x492731:c.instructions+=8;goto B492731;
case 0x492734:c.instructions+=7;goto B492734;
case 0x492736:c.instructions+=6;goto B492736;
case 0x492738:c.instructions+=5;goto B492738;
case 0x49273e:c.instructions+=4;goto B49273e;
case 0x492740:c.instructions+=3;goto B492740;
case 0x492744:c.instructions+=2;goto B492744;
case 0x492748:c.instructions+=1;goto B492748;
case 0x49274a:goto L49274a;
case 0x492750:goto L492750;
case 0x492756:c.instructions+=18;goto B492756;
case 0x492758:c.instructions+=17;goto B492758;
case 0x49275b:c.instructions+=16;goto B49275b;
case 0x49275d:c.instructions+=15;goto B49275d;
case 0x49275f:c.instructions+=14;goto B49275f;
case 0x492762:c.instructions+=13;goto B492762;
case 0x492764:c.instructions+=12;goto B492764;
case 0x492766:c.instructions+=11;goto B492766;
case 0x49276d:c.instructions+=10;goto B49276d;
case 0x492770:c.instructions+=9;goto B492770;
case 0x492772:c.instructions+=8;goto B492772;
case 0x492779:c.instructions+=7;goto B492779;
case 0x49277b:c.instructions+=6;goto B49277b;
case 0x492781:c.instructions+=5;goto B492781;
case 0x492783:c.instructions+=4;goto B492783;
case 0x49278a:c.instructions+=3;goto B49278a;
case 0x49278e:c.instructions+=2;goto B49278e;
case 0x492792:c.instructions+=1;goto B492792;
case 0x492794:goto L492794;
case 0x49279a:goto L49279a;
case 0x4927a0:c.instructions+=19;goto B4927a0;
case 0x4927a2:c.instructions+=18;goto B4927a2;
case 0x4927a5:c.instructions+=17;goto B4927a5;
case 0x4927a7:c.instructions+=16;goto B4927a7;
case 0x4927a9:c.instructions+=15;goto B4927a9;
case 0x4927ac:c.instructions+=14;goto B4927ac;
case 0x4927ae:c.instructions+=13;goto B4927ae;
case 0x4927b5:c.instructions+=12;goto B4927b5;
case 0x4927b7:c.instructions+=11;goto B4927b7;
case 0x4927ba:c.instructions+=10;goto B4927ba;
case 0x4927c1:c.instructions+=9;goto B4927c1;
case 0x4927c3:c.instructions+=8;goto B4927c3;
case 0x4927c5:c.instructions+=7;goto B4927c5;
case 0x4927cb:c.instructions+=6;goto B4927cb;
case 0x4927cd:c.instructions+=5;goto B4927cd;
case 0x4927d4:c.instructions+=4;goto B4927d4;
case 0x4927d8:c.instructions+=3;goto B4927d8;
case 0x4927df:c.instructions+=2;goto B4927df;
case 0x4927e3:c.instructions+=1;goto B4927e3;
case 0x4927e5:goto L4927e5;
case 0x4927eb:goto L4927eb;
case 0x4927f1:c.instructions+=53;goto B4927f1;
case 0x4927f3:c.instructions+=52;goto B4927f3;
case 0x4927f6:c.instructions+=51;goto B4927f6;
case 0x4927f8:c.instructions+=50;goto B4927f8;
case 0x4927ff:c.instructions+=49;goto B4927ff;
case 0x492801:c.instructions+=48;goto B492801;
case 0x492804:c.instructions+=47;goto B492804;
case 0x49280b:c.instructions+=46;goto B49280b;
case 0x49280d:c.instructions+=45;goto B49280d;
case 0x49280f:c.instructions+=44;goto B49280f;
case 0x492812:c.instructions+=43;goto B492812;
case 0x492819:c.instructions+=42;goto B492819;
case 0x49281b:c.instructions+=41;goto B49281b;
case 0x492822:c.instructions+=40;goto B492822;
case 0x492829:c.instructions+=39;goto B492829;
case 0x492830:c.instructions+=38;goto B492830;
case 0x492837:c.instructions+=37;goto B492837;
case 0x49283e:c.instructions+=36;goto B49283e;
case 0x492840:c.instructions+=35;goto B492840;
case 0x492847:c.instructions+=34;goto B492847;
case 0x492849:c.instructions+=33;goto B492849;
case 0x49284b:c.instructions+=32;goto B49284b;
case 0x492852:c.instructions+=31;goto B492852;
case 0x492859:c.instructions+=30;goto B492859;
case 0x492860:c.instructions+=29;goto B492860;
case 0x492867:c.instructions+=28;goto B492867;
case 0x49286e:c.instructions+=27;goto B49286e;
case 0x492870:c.instructions+=26;goto B492870;
case 0x492877:c.instructions+=25;goto B492877;
case 0x492879:c.instructions+=24;goto B492879;
case 0x49287b:c.instructions+=23;goto B49287b;
case 0x492882:c.instructions+=22;goto B492882;
case 0x492889:c.instructions+=21;goto B492889;
case 0x492890:c.instructions+=20;goto B492890;
case 0x492897:c.instructions+=19;goto B492897;
case 0x49289e:c.instructions+=18;goto B49289e;
case 0x4928a0:c.instructions+=17;goto B4928a0;
case 0x4928a7:c.instructions+=16;goto B4928a7;
case 0x4928a9:c.instructions+=15;goto B4928a9;
case 0x4928ab:c.instructions+=14;goto B4928ab;
case 0x4928b2:c.instructions+=13;goto B4928b2;
case 0x4928b9:c.instructions+=12;goto B4928b9;
case 0x4928c0:c.instructions+=11;goto B4928c0;
case 0x4928c2:c.instructions+=10;goto B4928c2;
case 0x4928c9:c.instructions+=9;goto B4928c9;
case 0x4928d0:c.instructions+=8;goto B4928d0;
case 0x4928d2:c.instructions+=7;goto B4928d2;
case 0x4928d8:c.instructions+=6;goto B4928d8;
case 0x4928da:c.instructions+=5;goto B4928da;
case 0x4928e1:c.instructions+=4;goto B4928e1;
case 0x4928e5:c.instructions+=3;goto B4928e5;
case 0x4928e7:c.instructions+=2;goto B4928e7;
case 0x4928eb:c.instructions+=1;goto B4928eb;
case 0x4928ed:goto L4928ed;
case 0x4928f3:goto L4928f3;
case 0x4928f9:c.instructions+=2;goto B4928f9;
case 0x492900:c.instructions+=1;goto B492900;
case 0x492905:goto L492905;
case 0x492909:c.instructions+=15;goto B492909;
case 0x49290b:c.instructions+=14;goto B49290b;
case 0x49290e:c.instructions+=13;goto B49290e;
case 0x492910:c.instructions+=12;goto B492910;
case 0x492912:c.instructions+=11;goto B492912;
case 0x492915:c.instructions+=10;goto B492915;
case 0x492917:c.instructions+=9;goto B492917;
case 0x492919:c.instructions+=8;goto B492919;
case 0x49291c:c.instructions+=7;goto B49291c;
case 0x49291e:c.instructions+=6;goto B49291e;
case 0x492920:c.instructions+=5;goto B492920;
case 0x492926:c.instructions+=4;goto B492926;
case 0x492928:c.instructions+=3;goto B492928;
case 0x49292c:c.instructions+=2;goto B49292c;
case 0x492930:c.instructions+=1;goto B492930;
case 0x492932:goto L492932;
case 0x492938:goto L492938;
case 0x49293e:c.instructions+=18;goto B49293e;
case 0x492940:c.instructions+=17;goto B492940;
case 0x492943:c.instructions+=16;goto B492943;
case 0x492945:c.instructions+=15;goto B492945;
case 0x492947:c.instructions+=14;goto B492947;
case 0x49294a:c.instructions+=13;goto B49294a;
case 0x49294c:c.instructions+=12;goto B49294c;
case 0x49294e:c.instructions+=11;goto B49294e;
case 0x492951:c.instructions+=10;goto B492951;
case 0x492958:c.instructions+=9;goto B492958;
case 0x49295a:c.instructions+=8;goto B49295a;
case 0x49295c:c.instructions+=7;goto B49295c;
case 0x492960:c.instructions+=6;goto B492960;
case 0x492966:c.instructions+=5;goto B492966;
case 0x492968:c.instructions+=4;goto B492968;
case 0x49296c:c.instructions+=3;goto B49296c;
case 0x492970:c.instructions+=2;goto B492970;
case 0x492974:c.instructions+=1;goto B492974;
case 0x492976:goto L492976;
case 0x49297c:goto L49297c;
case 0x492982:c.instructions+=19;goto B492982;
case 0x492984:c.instructions+=18;goto B492984;
case 0x492987:c.instructions+=17;goto B492987;
case 0x492989:c.instructions+=16;goto B492989;
case 0x49298b:c.instructions+=15;goto B49298b;
case 0x49298e:c.instructions+=14;goto B49298e;
case 0x492990:c.instructions+=13;goto B492990;
case 0x492992:c.instructions+=12;goto B492992;
case 0x492995:c.instructions+=11;goto B492995;
case 0x49299c:c.instructions+=10;goto B49299c;
case 0x49299e:c.instructions+=9;goto B49299e;
case 0x4929a0:c.instructions+=8;goto B4929a0;
case 0x4929a7:c.instructions+=7;goto B4929a7;
case 0x4929ac:c.instructions+=6;goto B4929ac;
case 0x4929ae:c.instructions+=5;goto B4929ae;
case 0x4929b2:c.instructions+=4;goto B4929b2;
case 0x4929b6:c.instructions+=3;goto B4929b6;
case 0x4929ba:c.instructions+=2;goto B4929ba;
case 0x4929be:c.instructions+=1;goto B4929be;
case 0x4929c0:goto L4929c0;
case 0x4929c6:goto L4929c6;
case 0x4929cc:c.instructions+=9;goto B4929cc;
case 0x4929d4:c.instructions+=8;goto B4929d4;
case 0x4929db:c.instructions+=7;goto B4929db;
case 0x4929e2:c.instructions+=6;goto B4929e2;
case 0x4929e6:c.instructions+=5;goto B4929e6;
case 0x4929ea:c.instructions+=4;goto B4929ea;
case 0x4929f0:c.instructions+=3;goto B4929f0;
case 0x4929f2:c.instructions+=2;goto B4929f2;
case 0x4929f5:c.instructions+=1;goto B4929f5;
case 0x4929fb:goto L4929fb;
case 0x4929fd:c.instructions+=14;goto B4929fd;
case 0x492a00:c.instructions+=13;goto B492a00;
case 0x492a02:c.instructions+=12;goto B492a02;
case 0x492a04:c.instructions+=11;goto B492a04;
case 0x492a07:c.instructions+=10;goto B492a07;
case 0x492a09:c.instructions+=9;goto B492a09;
case 0x492a0b:c.instructions+=8;goto B492a0b;
case 0x492a0e:c.instructions+=7;goto B492a0e;
case 0x492a10:c.instructions+=6;goto B492a10;
case 0x492a14:c.instructions+=5;goto B492a14;
case 0x492a19:c.instructions+=4;goto B492a19;
case 0x492a1b:c.instructions+=3;goto B492a1b;
case 0x492a1f:c.instructions+=2;goto B492a1f;
case 0x492a23:c.instructions+=1;goto B492a23;
case 0x492a25:goto L492a25;
case 0x492a2b:goto L492a2b;
case 0x492a31:c.instructions+=7;goto B492a31;
case 0x492a38:c.instructions+=6;goto B492a38;
case 0x492a3c:c.instructions+=5;goto B492a3c;
case 0x492a40:c.instructions+=4;goto B492a40;
case 0x492a46:c.instructions+=3;goto B492a46;
case 0x492a48:c.instructions+=2;goto B492a48;
case 0x492a4b:c.instructions+=1;goto B492a4b;
case 0x492a51:goto L492a51;
case 0x492a55:c.instructions+=5;goto B492a55;
case 0x492a5b:c.instructions+=4;goto B492a5b;
case 0x492a5f:c.instructions+=3;goto B492a5f;
case 0x492a61:c.instructions+=2;goto B492a61;
case 0x492a64:c.instructions+=1;goto B492a64;
case 0x492a66:goto L492a66;
case 0x492a68:c.instructions+=1;goto B492a68;
case 0x492a6e:goto L492a6e;
case 0x492a75:c.instructions+=5;goto B492a75;
case 0x492a79:c.instructions+=4;goto B492a79;
case 0x492a7c:c.instructions+=3;goto B492a7c;
case 0x492a7e:c.instructions+=2;goto B492a7e;
case 0x492a81:c.instructions+=1;goto B492a81;
case 0x492a87:goto L492a87;
case 0x492a89:c.instructions+=30;goto B492a89;
case 0x492a8d:c.instructions+=29;goto B492a8d;
case 0x492a93:c.instructions+=28;goto B492a93;
case 0x492a94:c.instructions+=27;goto B492a94;
case 0x492a98:c.instructions+=26;goto B492a98;
case 0x492a9c:c.instructions+=25;goto B492a9c;
case 0x492aa0:c.instructions+=24;goto B492aa0;
case 0x492aa1:c.instructions+=23;goto B492aa1;
case 0x492aa3:c.instructions+=22;goto B492aa3;
case 0x492aa7:c.instructions+=21;goto B492aa7;
case 0x492aa9:c.instructions+=20;goto B492aa9;
case 0x492aaf:c.instructions+=19;goto B492aaf;
case 0x492ab3:c.instructions+=18;goto B492ab3;
case 0x492ab7:c.instructions+=17;goto B492ab7;
case 0x492ab9:c.instructions+=16;goto B492ab9;
case 0x492abd:c.instructions+=15;goto B492abd;
case 0x492ac3:c.instructions+=14;goto B492ac3;
case 0x492ac7:c.instructions+=13;goto B492ac7;
case 0x492acb:c.instructions+=12;goto B492acb;
case 0x492acd:c.instructions+=11;goto B492acd;
case 0x492ad4:c.instructions+=10;goto B492ad4;
case 0x492adb:c.instructions+=9;goto B492adb;
case 0x492adf:c.instructions+=8;goto B492adf;
case 0x492ae3:c.instructions+=7;goto B492ae3;
case 0x492ae5:c.instructions+=6;goto B492ae5;
case 0x492ae9:c.instructions+=5;goto B492ae9;
case 0x492aed:c.instructions+=4;goto B492aed;
case 0x492aef:c.instructions+=3;goto B492aef;
case 0x492af1:c.instructions+=2;goto B492af1;
case 0x492af5:c.instructions+=1;goto B492af5;
case 0x492afa:goto L492afa;
case 0x492afe:c.instructions+=7;goto B492afe;
case 0x492b02:c.instructions+=6;goto B492b02;
case 0x492b09:c.instructions+=5;goto B492b09;
case 0x492b0c:c.instructions+=4;goto B492b0c;
case 0x492b10:c.instructions+=3;goto B492b10;
case 0x492b14:c.instructions+=2;goto B492b14;
case 0x492b18:c.instructions+=1;goto B492b18;
case 0x492b1a:goto L492b1a;
case 0x492b20:c.instructions+=1;goto B492b20;
case 0x492b25:goto L492b25;
case 0x492b28:c.instructions+=2;goto B492b28;
case 0x492b2f:c.instructions+=1;goto B492b2f;
case 0x492b31:goto L492b31;
case 0x492b33:goto L492b33;
case 0x492b37:c.instructions+=1;goto B492b37;
case 0x492b3c:goto L492b3c;
case 0x492b43:c.instructions+=4;goto B492b43;
case 0x492b48:c.instructions+=3;goto B492b48;
case 0x492b4a:c.instructions+=2;goto B492b4a;
case 0x492b4e:c.instructions+=1;goto B492b4e;
case 0x492b50:goto L492b50;
case 0x492b52:c.instructions+=4;goto B492b52;
case 0x492b56:c.instructions+=3;goto B492b56;
case 0x492b59:c.instructions+=2;goto B492b59;
case 0x492b5b:c.instructions+=1;goto B492b5b;
case 0x492b5f:goto L492b5f;
case 0x492b63:c.instructions+=4;goto B492b63;
case 0x492b69:c.instructions+=3;goto B492b69;
case 0x492b6b:c.instructions+=2;goto B492b6b;
case 0x492b6e:c.instructions+=1;goto B492b6e;
case 0x492b70:goto L492b70;
case 0x492b78:goto L492b78;
case 0x492b7d:c.instructions+=1;goto B492b7d;
case 0x492b83:goto L492b83;
case 0x492b88:c.instructions+=3;goto B492b88;
case 0x492b8a:c.instructions+=2;goto B492b8a;
case 0x492b8c:c.instructions+=1;goto B492b8c;
case 0x492b8e:goto L492b8e;
case 0x492b91:c.instructions+=2;goto B492b91;
case 0x492b93:c.instructions+=1;goto B492b93;
case 0x492b95:goto L492b95;
case 0x492b9a:goto L492b9a;
case 0x492b9f:c.instructions+=2;goto B492b9f;
case 0x492ba0:c.instructions+=1;goto B492ba0;
case 0x492ba5:goto L492ba5;
case 0x492ba8:c.instructions+=2;goto B492ba8;
case 0x492baa:c.instructions+=1;goto B492baa;
case 0x492bb0:goto L492bb0;
case 0x492bb2:c.instructions+=1;goto B492bb2;
case 0x492bb8:goto L492bb8;
case 0x492bbc:c.instructions+=2;goto B492bbc;
case 0x492bbe:c.instructions+=1;goto B492bbe;
case 0x492bc0:goto L492bc0;
case 0x492bc3:c.instructions+=1;goto B492bc3;
case 0x492bc5:goto L492bc5;
case 0x492bc7:goto L492bc7;
case 0x492bcd:c.instructions+=2;goto B492bcd;
case 0x492bce:c.instructions+=1;goto B492bce;
case 0x492bd3:goto L492bd3;
case 0x492bd7:c.instructions+=4;goto B492bd7;
case 0x492bdd:c.instructions+=3;goto B492bdd;
case 0x492be0:c.instructions+=2;goto B492be0;
case 0x492be2:c.instructions+=1;goto B492be2;
case 0x492be7:goto L492be7;
case 0x492beb:c.instructions+=9;goto B492beb;
case 0x492bf1:c.instructions+=8;goto B492bf1;
case 0x492bf6:c.instructions+=7;goto B492bf6;
case 0x492bfc:c.instructions+=6;goto B492bfc;
case 0x492c00:c.instructions+=5;goto B492c00;
case 0x492c04:c.instructions+=4;goto B492c04;
case 0x492c06:c.instructions+=3;goto B492c06;
case 0x492c08:c.instructions+=2;goto B492c08;
case 0x492c0b:c.instructions+=1;goto B492c0b;
case 0x492c0d:goto L492c0d;
case 0x492c0f:c.instructions+=1;goto B492c0f;
case 0x492c15:goto L492c15;
case 0x492c1a:goto L492c1a;
case 0x492c1e:c.instructions+=3;goto B492c1e;
case 0x492c24:c.instructions+=2;goto B492c24;
case 0x492c28:c.instructions+=1;goto B492c28;
case 0x492c2d:goto L492c2d;
case 0x492c31:c.instructions+=14;goto B492c31;
case 0x492c38:c.instructions+=13;goto B492c38;
case 0x492c3e:c.instructions+=12;goto B492c3e;
case 0x492c45:c.instructions+=11;goto B492c45;
case 0x492c48:c.instructions+=10;goto B492c48;
case 0x492c4b:c.instructions+=9;goto B492c4b;
case 0x492c4d:c.instructions+=8;goto B492c4d;
case 0x492c50:c.instructions+=7;goto B492c50;
case 0x492c52:c.instructions+=6;goto B492c52;
case 0x492c55:c.instructions+=5;goto B492c55;
case 0x492c5c:c.instructions+=4;goto B492c5c;
case 0x492c5f:c.instructions+=3;goto B492c5f;
case 0x492c62:c.instructions+=2;goto B492c62;
case 0x492c65:c.instructions+=1;goto B492c65;
case 0x492c6a:goto L492c6a;
case 0x492c6e:c.instructions+=3;goto B492c6e;
case 0x492c74:c.instructions+=2;goto B492c74;
case 0x492c77:c.instructions+=1;goto B492c77;
case 0x492c7c:goto L492c7c;
case 0x492c80:c.instructions+=3;goto B492c80;
case 0x492c86:c.instructions+=2;goto B492c86;
case 0x492c89:c.instructions+=1;goto B492c89;
case 0x492c8e:goto L492c8e;
case 0x492c92:c.instructions+=14;goto B492c92;
case 0x492c95:c.instructions+=13;goto B492c95;
case 0x492c98:c.instructions+=12;goto B492c98;
case 0x492c9b:c.instructions+=11;goto B492c9b;
case 0x492c9f:c.instructions+=10;goto B492c9f;
case 0x492ca1:c.instructions+=9;goto B492ca1;
case 0x492ca3:c.instructions+=8;goto B492ca3;
case 0x492ca6:c.instructions+=7;goto B492ca6;
case 0x492caa:c.instructions+=6;goto B492caa;
case 0x492cac:c.instructions+=5;goto B492cac;
case 0x492cb0:c.instructions+=4;goto B492cb0;
case 0x492cb3:c.instructions+=3;goto B492cb3;
case 0x492cb7:c.instructions+=2;goto B492cb7;
case 0x492cb9:c.instructions+=1;goto B492cb9;
case 0x492cbd:goto L492cbd;
case 0x492cc1:c.instructions+=15;goto B492cc1;
case 0x492cc3:c.instructions+=14;goto B492cc3;
case 0x492cc6:c.instructions+=13;goto B492cc6;
case 0x492cc8:c.instructions+=12;goto B492cc8;
case 0x492cca:c.instructions+=11;goto B492cca;
case 0x492ccd:c.instructions+=10;goto B492ccd;
case 0x492ccf:c.instructions+=9;goto B492ccf;
case 0x492cd1:c.instructions+=8;goto B492cd1;
case 0x492cd4:c.instructions+=7;goto B492cd4;
case 0x492cd6:c.instructions+=6;goto B492cd6;
case 0x492cd8:c.instructions+=5;goto B492cd8;
case 0x492cdd:c.instructions+=4;goto B492cdd;
case 0x492cdf:c.instructions+=3;goto B492cdf;
case 0x492ce3:c.instructions+=2;goto B492ce3;
case 0x492ce7:c.instructions+=1;goto B492ce7;
case 0x492ce9:goto L492ce9;
case 0x492cef:goto L492cef;
case 0x492cf5:c.instructions+=6;goto B492cf5;
case 0x492cf9:c.instructions+=5;goto B492cf9;
case 0x492cfd:c.instructions+=4;goto B492cfd;
case 0x492d03:c.instructions+=3;goto B492d03;
case 0x492d05:c.instructions+=2;goto B492d05;
case 0x492d08:c.instructions+=1;goto B492d08;
case 0x492d0a:goto L492d0a;
case 0x492d10:c.instructions+=4;goto B492d10;
case 0x492d16:c.instructions+=3;goto B492d16;
case 0x492d18:c.instructions+=2;goto B492d18;
case 0x492d1b:c.instructions+=1;goto B492d1b;
case 0x492d1d:goto L492d1d;
case 0x492d1f:c.instructions+=2;goto B492d1f;
case 0x492d25:c.instructions+=1;goto B492d25;
case 0x492d27:goto L492d27;
case 0x492d29:c.instructions+=2;goto B492d29;
case 0x492d2f:c.instructions+=1;goto B492d2f;
case 0x492d31:goto L492d31;
case 0x492d37:c.instructions+=3;goto B492d37;
case 0x492d39:c.instructions+=2;goto B492d39;
case 0x492d3c:c.instructions+=1;goto B492d3c;
case 0x492d3e:goto L492d3e;
case 0x492d40:c.instructions+=1;goto B492d40;
case 0x492d46:goto L492d46;
case 0x492d4a:c.instructions+=4;goto B492d4a;
case 0x492d4c:c.instructions+=3;goto B492d4c;
case 0x492d4e:c.instructions+=2;goto B492d4e;
case 0x492d51:c.instructions+=1;goto B492d51;
case 0x492d57:goto L492d57;
case 0x492d5a:c.instructions+=2;goto B492d5a;
case 0x492d5e:c.instructions+=1;goto B492d5e;
case 0x492d62:goto L492d62;
case 0x492d65:c.instructions+=4;goto B492d65;
case 0x492d68:c.instructions+=3;goto B492d68;
case 0x492d6a:c.instructions+=2;goto B492d6a;
case 0x492d6c:c.instructions+=1;goto B492d6c;
case 0x492d74:goto L492d74;
case 0x492d76:c.instructions+=6;goto B492d76;
case 0x492d78:c.instructions+=5;goto B492d78;
case 0x492d7b:c.instructions+=4;goto B492d7b;
case 0x492d7e:c.instructions+=3;goto B492d7e;
case 0x492d80:c.instructions+=2;goto B492d80;
case 0x492d84:c.instructions+=1;goto B492d84;
case 0x492d86:goto L492d86;
case 0x492d88:c.instructions+=2;goto B492d88;
case 0x492d8a:c.instructions+=1;goto B492d8a;
case 0x492d8c:goto L492d8c;
case 0x492d8e:c.instructions+=11;goto B492d8e;
case 0x492d90:c.instructions+=10;goto B492d90;
case 0x492d93:c.instructions+=9;goto B492d93;
case 0x492d98:c.instructions+=8;goto B492d98;
case 0x492d9a:c.instructions+=7;goto B492d9a;
case 0x492d9c:c.instructions+=6;goto B492d9c;
case 0x492d9e:c.instructions+=5;goto B492d9e;
case 0x492da1:c.instructions+=4;goto B492da1;
case 0x492da2:c.instructions+=3;goto B492da2;
case 0x492da5:c.instructions+=2;goto B492da5;
case 0x492da8:c.instructions+=1;goto B492da8;
case 0x492dad:goto L492dad;
case 0x492db2:c.instructions+=3;goto B492db2;
case 0x492db3:c.instructions+=2;goto B492db3;
case 0x492db4:c.instructions+=1;goto B492db4;
case 0x492db9:goto L492db9;
case 0x492dbd:c.instructions+=1;goto B492dbd;
case 0x492dc0:goto L492dc0;
case 0x492dc3:c.instructions+=4;goto B492dc3;
case 0x492dc9:c.instructions+=3;goto B492dc9;
case 0x492dcb:c.instructions+=2;goto B492dcb;
case 0x492dce:c.instructions+=1;goto B492dce;
case 0x492dd0:goto L492dd0;
case 0x492dd4:c.instructions+=9;goto B492dd4;
case 0x492dd7:c.instructions+=8;goto B492dd7;
case 0x492dde:c.instructions+=7;goto B492dde;
case 0x492de5:c.instructions+=6;goto B492de5;
case 0x492de6:c.instructions+=5;goto B492de6;
case 0x492de7:c.instructions+=4;goto B492de7;
case 0x492de8:c.instructions+=3;goto B492de8;
case 0x492dea:c.instructions+=2;goto B492dea;
case 0x492deb:c.instructions+=1;goto B492deb;
case 0x492dee:goto L492dee;
case 0x492df0:c.instructions+=9;goto B492df0;
case 0x492df7:c.instructions+=8;goto B492df7;
case 0x492dfe:c.instructions+=7;goto B492dfe;
case 0x492dff:c.instructions+=6;goto B492dff;
case 0x492e00:c.instructions+=5;goto B492e00;
case 0x492e07:c.instructions+=4;goto B492e07;
case 0x492e08:c.instructions+=3;goto B492e08;
case 0x492e0a:c.instructions+=2;goto B492e0a;
case 0x492e0b:c.instructions+=1;goto B492e0b;
case 0x492e10:goto L492e10;
case 0x492e11:c.instructions+=8;goto B492e11;
case 0x492e13:c.instructions+=7;goto B492e13;
case 0x492e16:c.instructions+=6;goto B492e16;
case 0x492e19:c.instructions+=5;goto B492e19;
case 0x492e1a:c.instructions+=4;goto B492e1a;
case 0x492e1b:c.instructions+=3;goto B492e1b;
case 0x492e1c:c.instructions+=2;goto B492e1c;
case 0x492e1e:c.instructions+=1;goto B492e1e;
case 0x492e23:goto L492e23;
case 0x492e26:c.instructions+=2;goto B492e26;
case 0x492e2c:c.instructions+=1;goto B492e2c;
case 0x492e31:goto L492e31;
case 0x492e33:c.instructions+=2;goto B492e33;
case 0x492e37:c.instructions+=1;goto B492e37;
case 0x492e3c:goto L492e3c;
case 0x492e3f:c.instructions+=2;goto B492e3f;
case 0x492e47:c.instructions+=1;goto B492e47;
case 0x492e50:goto L492e50;
case 0x492e53:c.instructions+=2;goto B492e53;
case 0x492e55:c.instructions+=1;goto B492e55;
case 0x492e5b:goto L492e5b;
case 0x492e5d:c.instructions+=4;goto B492e5d;
case 0x492e61:c.instructions+=3;goto B492e61;
case 0x492e64:c.instructions+=2;goto B492e64;
case 0x492e66:c.instructions+=1;goto B492e66;
case 0x492e68:goto L492e68;
case 0x492e69:c.instructions+=2;goto B492e69;
case 0x492e6e:c.instructions+=1;goto B492e6e;
case 0x492e73:goto L492e73;
case 0x492e75:c.instructions+=1;goto B492e75;
case 0x492e7b:goto L492e7b;
case 0x492e7e:c.instructions+=2;goto B492e7e;
case 0x492e81:c.instructions+=1;goto B492e81;
case 0x492e83:goto L492e83;
case 0x492e86:c.instructions+=5;goto B492e86;
case 0x492e88:c.instructions+=4;goto B492e88;
case 0x492e89:c.instructions+=3;goto B492e89;
case 0x492e8a:c.instructions+=2;goto B492e8a;
case 0x492e8c:c.instructions+=1;goto B492e8c;
case 0x492e91:goto L492e91;
case 0x492e93:goto L492e93;
case 0x492e95:c.instructions+=1;goto B492e95;
case 0x492e97:goto L492e97;
case 0x492e9f:goto L492e9f;
case 0x492ea2:c.instructions+=6;goto B492ea2;
case 0x492ea6:c.instructions+=5;goto B492ea6;
case 0x492eaa:c.instructions+=4;goto B492eaa;
case 0x492eb0:c.instructions+=3;goto B492eb0;
case 0x492eb2:c.instructions+=2;goto B492eb2;
case 0x492eb5:c.instructions+=1;goto B492eb5;
case 0x492ebb:goto L492ebb;
case 0x492ebe:c.instructions+=1;goto B492ebe;
case 0x492ec0:goto L492ec0;
case 0x492ec2:c.instructions+=1;goto B492ec2;
case 0x492ec8:goto L492ec8;
case 0x492ecc:c.instructions+=6;goto B492ecc;
case 0x492ecf:c.instructions+=5;goto B492ecf;
case 0x492ed3:c.instructions+=4;goto B492ed3;
case 0x492ed9:c.instructions+=3;goto B492ed9;
case 0x492edb:c.instructions+=2;goto B492edb;
case 0x492ede:c.instructions+=1;goto B492ede;
case 0x492ee0:goto L492ee0;
case 0x492ee2:c.instructions+=2;goto B492ee2;
case 0x492ee5:c.instructions+=1;goto B492ee5;
case 0x492ee7:goto L492ee7;
case 0x492eea:c.instructions+=4;goto B492eea;
case 0x492eef:c.instructions+=3;goto B492eef;
case 0x492ef3:c.instructions+=2;goto B492ef3;
case 0x492ef6:c.instructions+=1;goto B492ef6;
case 0x492ef8:goto L492ef8;
case 0x492efb:c.instructions+=3;goto B492efb;
case 0x492efd:c.instructions+=2;goto B492efd;
case 0x492f01:c.instructions+=1;goto B492f01;
case 0x492f04:goto L492f04;
case 0x492f06:c.instructions+=4;goto B492f06;
case 0x492f0c:c.instructions+=3;goto B492f0c;
case 0x492f0e:c.instructions+=2;goto B492f0e;
case 0x492f11:c.instructions+=1;goto B492f11;
case 0x492f13:goto L492f13;
case 0x492f15:c.instructions+=7;goto B492f15;
case 0x492f18:c.instructions+=6;goto B492f18;
case 0x492f19:c.instructions+=5;goto B492f19;
case 0x492f1d:c.instructions+=4;goto B492f1d;
case 0x492f21:c.instructions+=3;goto B492f21;
case 0x492f22:c.instructions+=2;goto B492f22;
case 0x492f24:c.instructions+=1;goto B492f24;
case 0x492f29:goto L492f29;
case 0x492f2d:c.instructions+=8;goto B492f2d;
case 0x492f31:c.instructions+=7;goto B492f31;
case 0x492f34:c.instructions+=6;goto B492f34;
case 0x492f37:c.instructions+=5;goto B492f37;
case 0x492f3e:c.instructions+=4;goto B492f3e;
case 0x492f40:c.instructions+=3;goto B492f40;
case 0x492f44:c.instructions+=2;goto B492f44;
case 0x492f47:c.instructions+=1;goto B492f47;
case 0x492f49:goto L492f49;
case 0x492f4b:c.instructions+=4;goto B492f4b;
case 0x492f4e:c.instructions+=3;goto B492f4e;
case 0x492f51:c.instructions+=2;goto B492f51;
case 0x492f58:c.instructions+=1;goto B492f58;
case 0x492f5a:goto L492f5a;
case 0x492f5e:c.instructions+=1;goto B492f5e;
case 0x492f61:goto L492f61;
case 0x492f65:c.instructions+=3;goto B492f65;
case 0x492f67:c.instructions+=2;goto B492f67;
case 0x492f6b:c.instructions+=1;goto B492f6b;
case 0x492f71:goto L492f71;
case 0x492f73:c.instructions+=3;goto B492f73;
case 0x492f75:c.instructions+=2;goto B492f75;
case 0x492f79:c.instructions+=1;goto B492f79;
case 0x492f7e:goto L492f7e;
case 0x492f80:c.instructions+=2;goto B492f80;
case 0x492f84:c.instructions+=1;goto B492f84;
case 0x492f8a:goto L492f8a;
case 0x492f8c:goto L492f8c;
case 0x492f90:goto L492f90;
case 0x492f92:c.instructions+=22;goto B492f92;
case 0x492f96:c.instructions+=21;goto B492f96;
case 0x492f99:c.instructions+=20;goto B492f99;
case 0x492f9c:c.instructions+=19;goto B492f9c;
case 0x492f9e:c.instructions+=18;goto B492f9e;
case 0x492fa2:c.instructions+=17;goto B492fa2;
case 0x492fa6:c.instructions+=16;goto B492fa6;
case 0x492fae:c.instructions+=15;goto B492fae;
case 0x492fb0:c.instructions+=14;goto B492fb0;
case 0x492fb3:c.instructions+=13;goto B492fb3;
case 0x492fb6:c.instructions+=12;goto B492fb6;
case 0x492fbb:c.instructions+=11;goto B492fbb;
case 0x492fbd:c.instructions+=10;goto B492fbd;
case 0x492fc0:c.instructions+=9;goto B492fc0;
case 0x492fc5:c.instructions+=8;goto B492fc5;
case 0x492fc7:c.instructions+=7;goto B492fc7;
case 0x492fcb:c.instructions+=6;goto B492fcb;
case 0x492fce:c.instructions+=5;goto B492fce;
case 0x492fcf:c.instructions+=4;goto B492fcf;
case 0x492fd3:c.instructions+=3;goto B492fd3;
case 0x492fd6:c.instructions+=2;goto B492fd6;
case 0x492fd8:c.instructions+=1;goto B492fd8;
case 0x492fda:goto L492fda;
case 0x492fdd:c.instructions+=4;goto B492fdd;
case 0x492fe1:c.instructions+=3;goto B492fe1;
case 0x492fe5:c.instructions+=2;goto B492fe5;
case 0x492feb:c.instructions+=1;goto B492feb;
case 0x492ff0:goto L492ff0;
case 0x492ff4:c.instructions+=1;goto B492ff4;
case 0x492ff6:goto L492ff6;
case 0x492ffe:goto L492ffe;
default:missing_instruction(c.pc);}
B492001:L492001:{c.instructions+=3;NFSU2_TR(0x492001);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B492003:{NFSU2_TR(0x492003);
u8 U[8];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49200e:{NFSU2_TR(0x49200e);
if(r1(R+518)){{goto L49201e;}}
}
B492010:L492010:{c.instructions+=5;NFSU2_TR(0x492010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B492013:{NFSU2_TR(0x492013);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492014:{NFSU2_TR(0x492014);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492015:{NFSU2_TR(0x492015);
__builtin_memmove((R+4),(R+0),4);
}
B492017:{NFSU2_TR(0x492017);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49201cull));
TAIL_STATIC(0x491c00u,491);
}
B49201c:L49201c:{c.instructions+=1;NFSU2_TR(0x49201c);
{goto L492020;}
}
B49201e:L49201e:{c.instructions+=1;NFSU2_TR(0x49201e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B492020:L492020:{c.instructions+=12;NFSU2_TR(0x492020);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B492024:{NFSU2_TR(0x492024);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B492027:{NFSU2_TR(0x492027);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B492029:{NFSU2_TR(0x492029);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49202c:{NFSU2_TR(0x49202c);
u8 U[8];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B492037:{NFSU2_TR(0x492037);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49203b:{NFSU2_TR(0x49203b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49203e:{NFSU2_TR(0x49203e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B492040:{NFSU2_TR(0x492040);
__builtin_memmove((R+28),(R+0),4);
}
B492042:{NFSU2_TR(0x492042);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492046:{NFSU2_TR(0x492046);
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
B492048:{NFSU2_TR(0x492048);
if(r1(R+518)){{goto L492dc0;}}
}
B49204e:L49204e:{c.instructions+=18;NFSU2_TR(0x49204e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B492051:{NFSU2_TR(0x492051);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B492053:{NFSU2_TR(0x492053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B492056:{NFSU2_TR(0x492056);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B492059:{NFSU2_TR(0x492059);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492060:{NFSU2_TR(0x492060);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B492063:{NFSU2_TR(0x492063);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49206a:{NFSU2_TR(0x49206a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49206d:{NFSU2_TR(0x49206d);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492074:{NFSU2_TR(0x492074);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B492077:{NFSU2_TR(0x492077);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49207e:{NFSU2_TR(0x49207e);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492085:{NFSU2_TR(0x492085);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B492088:{NFSU2_TR(0x492088);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492089:{NFSU2_TR(0x492089);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B492090:{NFSU2_TR(0x492090);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492091:{NFSU2_TR(0x492091);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492098:{NFSU2_TR(0x492098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49209dull));
TAIL_STATIC(0x4012b0u,401);
}
B49209d:L49209d:{c.instructions+=5;NFSU2_TR(0x49209d);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4920a4:{NFSU2_TR(0x4920a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4920a5:{NFSU2_TR(0x4920a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1ccull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4920ac:{NFSU2_TR(0x4920ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4920ad:{NFSU2_TR(0x4920ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4920b2ull));
TAIL_STATIC(0x4012b0u,401);
}
B4920b2:L4920b2:{c.instructions+=5;NFSU2_TR(0x4920b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4920b5:{NFSU2_TR(0x4920b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4920b8:{NFSU2_TR(0x4920b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4920ba:{NFSU2_TR(0x4920ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4920c5:{NFSU2_TR(0x4920c5);
if(r1(R+518)){{goto L4920ed;}}
}
B4920c7:L4920c7:{c.instructions+=10;NFSU2_TR(0x4920c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4920ca:{NFSU2_TR(0x4920ca);
w4(R+8,u32(0x1ull));
}
B4920cf:{NFSU2_TR(0x4920cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B4920d1:{NFSU2_TR(0x4920d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4920d4:{NFSU2_TR(0x4920d4);
w4(R+0,u32(0x1ull));
}
B4920d9:{NFSU2_TR(0x4920d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B4920db:{NFSU2_TR(0x4920db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4920de:{NFSU2_TR(0x4920de);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4920e2:{NFSU2_TR(0x4920e2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4920e6:{NFSU2_TR(0x4920e6);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4920ed:L4920ed:{c.instructions+=50;NFSU2_TR(0x4920ed);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4920f0:{NFSU2_TR(0x4920f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4920f3:{NFSU2_TR(0x4920f3);
{u32 ea_=u32(u32(7896460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4920f9:{NFSU2_TR(0x4920f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4920fc:{NFSU2_TR(0x4920fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4920ff:{NFSU2_TR(0x4920ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492103:{NFSU2_TR(0x492103);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B49210a:{NFSU2_TR(0x49210a);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49210e:{NFSU2_TR(0x49210e);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492114:{NFSU2_TR(0x492114);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492118:{NFSU2_TR(0x492118);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B49211c:{NFSU2_TR(0x49211c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B492120:{NFSU2_TR(0x492120);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492127:{NFSU2_TR(0x492127);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49212a:{NFSU2_TR(0x49212a);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49212d:{NFSU2_TR(0x49212d);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492134:{NFSU2_TR(0x492134);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492138:{NFSU2_TR(0x492138);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49213b:{NFSU2_TR(0x49213b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492141:{NFSU2_TR(0x492141);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492148:{NFSU2_TR(0x492148);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49214c:{NFSU2_TR(0x49214c);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49214f:{NFSU2_TR(0x49214f);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B492151:{NFSU2_TR(0x492151);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492155:{NFSU2_TR(0x492155);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492158:{NFSU2_TR(0x492158);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B49215a:{NFSU2_TR(0x49215a);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492161:{NFSU2_TR(0x492161);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492164:{NFSU2_TR(0x492164);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492168:{NFSU2_TR(0x492168);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49216f:{NFSU2_TR(0x49216f);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492172:{NFSU2_TR(0x492172);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492176:{NFSU2_TR(0x492176);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49217d:{NFSU2_TR(0x49217d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B49217f:{NFSU2_TR(0x49217f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B492183:{NFSU2_TR(0x492183);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492187:{NFSU2_TR(0x492187);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B49218e:{NFSU2_TR(0x49218e);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492195:{NFSU2_TR(0x492195);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492199:{NFSU2_TR(0x492199);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4921a0:{NFSU2_TR(0x4921a0);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4921a4:{NFSU2_TR(0x4921a4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4921a8:{NFSU2_TR(0x4921a8);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4921af:{NFSU2_TR(0x4921af);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4921b3:{NFSU2_TR(0x4921b3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4921b7:{NFSU2_TR(0x4921b7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4921bb:{NFSU2_TR(0x4921bb);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4921bd:{NFSU2_TR(0x4921bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4921bf:{NFSU2_TR(0x4921bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4921c2:{NFSU2_TR(0x4921c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492d62;}}
}
B4921c8:L4921c8:{c.instructions+=10;NFSU2_TR(0x4921c8);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4921cf:{NFSU2_TR(0x4921cf);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4921d5:{NFSU2_TR(0x4921d5);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4921dc:{NFSU2_TR(0x4921dc);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4921e3:{NFSU2_TR(0x4921e3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4921e9:{NFSU2_TR(0x4921e9);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4921f0:{NFSU2_TR(0x4921f0);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4921f7:{NFSU2_TR(0x4921f7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4921fd:{NFSU2_TR(0x4921fd);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492204:{NFSU2_TR(0x492204);
{goto L492210;}
}
B492210:L492210:{c.instructions+=7;NFSU2_TR(0x492210);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492214:{NFSU2_TR(0x492214);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49221b:{NFSU2_TR(0x49221b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49221d:{NFSU2_TR(0x49221d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B49221f:{NFSU2_TR(0x49221f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492223:{NFSU2_TR(0x492223);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B492225:{NFSU2_TR(0x492225);
if(r1(R+518)){{goto L4924e7;}}
}
B49222b:L49222b:{c.instructions+=24;NFSU2_TR(0x49222b);
__builtin_memmove((R+24),(R+4),4);
}
B49222d:{NFSU2_TR(0x49222d);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B492230:{NFSU2_TR(0x492230);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+4))));
}
B492232:{NFSU2_TR(0x492232);
__builtin_memmove((R+0),(R+24),4);
}
B492234:{NFSU2_TR(0x492234);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B492237:{NFSU2_TR(0x492237);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
}
B492239:{NFSU2_TR(0x492239);
__builtin_memmove((R+4),(R+24),4);
}
B49223b:{NFSU2_TR(0x49223b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B49223e:{NFSU2_TR(0x49223e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+4))));
}
B492240:{NFSU2_TR(0x492240);
__builtin_memmove((R+0),(R+24),4);
}
B492242:{NFSU2_TR(0x492242);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B492245:{NFSU2_TR(0x492245);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+24))));
}
B492247:{NFSU2_TR(0x492247);
__builtin_memmove((R+8),(R+0),4);
}
B492249:{NFSU2_TR(0x492249);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B49224c:{NFSU2_TR(0x49224c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B49224e:{NFSU2_TR(0x49224e);
__builtin_memmove((R+4),(R+0),4);
}
B492250:{NFSU2_TR(0x492250);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B492253:{NFSU2_TR(0x492253);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B492255:{NFSU2_TR(0x492255);
__builtin_memmove((R+12),(R+0),4);
}
B492257:{NFSU2_TR(0x492257);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B49225c:{NFSU2_TR(0x49225c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B49225e:{NFSU2_TR(0x49225e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492262:{NFSU2_TR(0x492262);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B492266:{NFSU2_TR(0x492266);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L49226e;}}
}
B492268:L492268:{c.instructions+=1;NFSU2_TR(0x492268);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B49226e:L49226e:{c.instructions+=5;NFSU2_TR(0x49226e);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492274:{NFSU2_TR(0x492274);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49227a:{NFSU2_TR(0x49227a);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B492280:{NFSU2_TR(0x492280);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492286:{NFSU2_TR(0x492286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49228bull));
TAIL_STATIC(0x75bed4u,75b);
}
B49228b:L49228b:{c.instructions+=11;NFSU2_TR(0x49228b);
__builtin_memmove((R+4),(R+0),4);
}
B49228d:{NFSU2_TR(0x49228d);
w4(R+0,u32(0xb60b60b7ull));
}
B492292:{NFSU2_TR(0x492292);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B492294:{NFSU2_TR(0x492294);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B492296:{NFSU2_TR(0x492296);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B492299:{NFSU2_TR(0x492299);
__builtin_memmove((R+0),(R+8),4);
}
B49229b:{NFSU2_TR(0x49229b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B49229e:{NFSU2_TR(0x49229e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4922a0:{NFSU2_TR(0x4922a0);
__builtin_memmove((R+28),(R+8),4);
}
B4922a2:{NFSU2_TR(0x4922a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4922a3:{NFSU2_TR(0x4922a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4922a8ull));
TAIL_STATIC(0x43c370u,43c);
}
B4922a8:L4922a8:{c.instructions+=3;NFSU2_TR(0x4922a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4922a9:{NFSU2_TR(0x4922a9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4922ad:{NFSU2_TR(0x4922ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4922b2ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B4922b2:L4922b2:{c.instructions+=6;NFSU2_TR(0x4922b2);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffffffull))));
}
B4922b8:{NFSU2_TR(0x4922b8);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4922bc:{NFSU2_TR(0x4922bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4922be:{NFSU2_TR(0x4922be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4922c2:{NFSU2_TR(0x4922c2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4922c6:{NFSU2_TR(0x4922c6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4922ce;}}
}
B4922c8:L4922c8:{c.instructions+=1;NFSU2_TR(0x4922c8);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4922ce:L4922ce:{c.instructions+=5;NFSU2_TR(0x4922ce);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4922d4:{NFSU2_TR(0x4922d4);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4922d8:{NFSU2_TR(0x4922d8);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4922dc:{NFSU2_TR(0x4922dc);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4922e2:{NFSU2_TR(0x4922e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4922e7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4922e7:L4922e7:{c.instructions+=13;NFSU2_TR(0x4922e7);
__builtin_memmove((R+4),(R+0),4);
}
B4922e9:{NFSU2_TR(0x4922e9);
w4(R+0,u32(0xb60b60b7ull));
}
B4922ee:{NFSU2_TR(0x4922ee);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B4922f0:{NFSU2_TR(0x4922f0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4922f2:{NFSU2_TR(0x4922f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4922f5:{NFSU2_TR(0x4922f5);
__builtin_memmove((R+4),(R+8),4);
}
B4922f7:{NFSU2_TR(0x4922f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4922fa:{NFSU2_TR(0x4922fa);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4922fc:{NFSU2_TR(0x4922fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4922fd:{NFSU2_TR(0x4922fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B492304:{NFSU2_TR(0x492304);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492309:{NFSU2_TR(0x492309);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49230a:{NFSU2_TR(0x49230a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49230full));
TAIL_STATIC(0x5bada0u,5ba);
}
B49230f:L49230f:{c.instructions+=102;NFSU2_TR(0x49230f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B492312:{NFSU2_TR(0x492312);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492319:{NFSU2_TR(0x492319);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49231d:{NFSU2_TR(0x49231d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492321:{NFSU2_TR(0x492321);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492328:{NFSU2_TR(0x492328);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49232a:{NFSU2_TR(0x49232a);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492331:{NFSU2_TR(0x492331);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492335:{NFSU2_TR(0x492335);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492337:{NFSU2_TR(0x492337);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49233e:{NFSU2_TR(0x49233e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492344:{NFSU2_TR(0x492344);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492346:{NFSU2_TR(0x492346);
{u32 ea_=u32(r4(R+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49234d:{NFSU2_TR(0x49234d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492351:{NFSU2_TR(0x492351);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492358:{NFSU2_TR(0x492358);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49235c:{NFSU2_TR(0x49235c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49235e:{NFSU2_TR(0x49235e);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492365:{NFSU2_TR(0x492365);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492369:{NFSU2_TR(0x492369);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49236b:{NFSU2_TR(0x49236b);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492372:{NFSU2_TR(0x492372);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492378:{NFSU2_TR(0x492378);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49237a:{NFSU2_TR(0x49237a);
{u32 ea_=u32(r4(R+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492381:{NFSU2_TR(0x492381);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492385:{NFSU2_TR(0x492385);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49238c:{NFSU2_TR(0x49238c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492390:{NFSU2_TR(0x492390);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492392:{NFSU2_TR(0x492392);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492399:{NFSU2_TR(0x492399);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49239d:{NFSU2_TR(0x49239d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49239f:{NFSU2_TR(0x49239f);
{u32 ea_=u32(r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4923a6:{NFSU2_TR(0x4923a6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4923ac:{NFSU2_TR(0x4923ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4923ae:{NFSU2_TR(0x4923ae);
{u32 ea_=u32(r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4923b5:{NFSU2_TR(0x4923b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4923bc:{NFSU2_TR(0x4923bc);
{u32 ea_=u32(r4(R+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4923c3:{NFSU2_TR(0x4923c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4923c7:{NFSU2_TR(0x4923c7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4923cb:{NFSU2_TR(0x4923cb);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4923d2:{NFSU2_TR(0x4923d2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4923d6:{NFSU2_TR(0x4923d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4923d8:{NFSU2_TR(0x4923d8);
{u32 ea_=u32(r4(R+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4923df:{NFSU2_TR(0x4923df);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4923e3:{NFSU2_TR(0x4923e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4923e5:{NFSU2_TR(0x4923e5);
{u32 ea_=u32(r4(R+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4923ec:{NFSU2_TR(0x4923ec);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4923f2:{NFSU2_TR(0x4923f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4923f4:{NFSU2_TR(0x4923f4);
{u32 ea_=u32(r4(R+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4923fb:{NFSU2_TR(0x4923fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B492402:{NFSU2_TR(0x492402);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B492404:{NFSU2_TR(0x492404);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492408:{NFSU2_TR(0x492408);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49240c:{NFSU2_TR(0x49240c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492410:{NFSU2_TR(0x492410);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492416:{NFSU2_TR(0x492416);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49241a:{NFSU2_TR(0x49241a);
{u32 ea_=u32(r4(R+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492421:{NFSU2_TR(0x492421);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492425:{NFSU2_TR(0x492425);
{u32 ea_=u32(r4(R+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49242c:{NFSU2_TR(0x49242c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B49242e:{NFSU2_TR(0x49242e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492430:{NFSU2_TR(0x492430);
{u32 ea_=u32(r4(R+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492437:{NFSU2_TR(0x492437);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49243b:{NFSU2_TR(0x49243b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49243d:{NFSU2_TR(0x49243d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492441:{NFSU2_TR(0x492441);
{u32 ea_=u32(r4(R+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492448:{NFSU2_TR(0x492448);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49244c:{NFSU2_TR(0x49244c);
{u32 ea_=u32(r4(R+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492453:{NFSU2_TR(0x492453);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B492455:{NFSU2_TR(0x492455);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492457:{NFSU2_TR(0x492457);
{u32 ea_=u32(r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49245e:{NFSU2_TR(0x49245e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492462:{NFSU2_TR(0x492462);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492464:{NFSU2_TR(0x492464);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492468:{NFSU2_TR(0x492468);
{u32 ea_=u32(r4(R+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49246f:{NFSU2_TR(0x49246f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492473:{NFSU2_TR(0x492473);
{u32 ea_=u32(r4(R+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49247a:{NFSU2_TR(0x49247a);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B49247c:{NFSU2_TR(0x49247c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49247e:{NFSU2_TR(0x49247e);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492485:{NFSU2_TR(0x492485);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492489:{NFSU2_TR(0x492489);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49248b:{NFSU2_TR(0x49248b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B49248f:{NFSU2_TR(0x49248f);
{u32 ea_=u32(r4(R+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492496:{NFSU2_TR(0x492496);
{u32 ea_=u32(r4(R+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49249d:{NFSU2_TR(0x49249d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4924a1:{NFSU2_TR(0x4924a1);
{u32 ea_=u32(r4(R+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4924a8:{NFSU2_TR(0x4924a8);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B4924aa:{NFSU2_TR(0x4924aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4924ac:{NFSU2_TR(0x4924ac);
{u32 ea_=u32(r4(R+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4924b3:{NFSU2_TR(0x4924b3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4924b7:{NFSU2_TR(0x4924b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4924b9:{NFSU2_TR(0x4924b9);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4924bd:{NFSU2_TR(0x4924bd);
{u32 ea_=u32(r4(R+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4924c4:{NFSU2_TR(0x4924c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1bcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4924cb:{NFSU2_TR(0x4924cb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4924cd:{NFSU2_TR(0x4924cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4924d1:{NFSU2_TR(0x4924d1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4924d5:{NFSU2_TR(0x4924d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4924d9:{NFSU2_TR(0x4924d9);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B4924db:{NFSU2_TR(0x4924db);
{u32 ea_=u32(r4(R+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4924e2:{NFSU2_TR(0x4924e2);
{goto L492713;}
}
B4924e7:L4924e7:{c.instructions+=33;NFSU2_TR(0x4924e7);
__builtin_memmove((R+0),(R+4),4);
}
B4924e9:{NFSU2_TR(0x4924e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4924ec:{NFSU2_TR(0x4924ec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B4924ee:{NFSU2_TR(0x4924ee);
__builtin_memmove((R+4),(R+0),4);
}
B4924f0:{NFSU2_TR(0x4924f0);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4924f3:{NFSU2_TR(0x4924f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B4924f5:{NFSU2_TR(0x4924f5);
__builtin_memmove((R+8),(R+0),4);
}
B4924f7:{NFSU2_TR(0x4924f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4924fa:{NFSU2_TR(0x4924fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B4924fc:{NFSU2_TR(0x4924fc);
__builtin_memmove((R+24),(R+0),4);
}
B4924fe:{NFSU2_TR(0x4924fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B492501:{NFSU2_TR(0x492501);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
}
B492503:{NFSU2_TR(0x492503);
__builtin_memmove((R+4),(R+24),4);
}
B492505:{NFSU2_TR(0x492505);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B492508:{NFSU2_TR(0x492508);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+4))));
}
B49250a:{NFSU2_TR(0x49250a);
__builtin_memmove((R+8),(R+24),4);
}
B49250c:{NFSU2_TR(0x49250c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B49250f:{NFSU2_TR(0x49250f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+8))));
}
B492511:{NFSU2_TR(0x492511);
__builtin_memmove((R+28),(R+24),4);
}
B492513:{NFSU2_TR(0x492513);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B492516:{NFSU2_TR(0x492516);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B492518:{NFSU2_TR(0x492518);
__builtin_memmove((R+4),(R+28),4);
}
B49251a:{NFSU2_TR(0x49251a);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B49251d:{NFSU2_TR(0x49251d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B49251f:{NFSU2_TR(0x49251f);
__builtin_memmove((R+8),(R+28),4);
}
B492521:{NFSU2_TR(0x492521);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B492524:{NFSU2_TR(0x492524);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B492529:{NFSU2_TR(0x492529);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B49252b:{NFSU2_TR(0x49252b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B49252d:{NFSU2_TR(0x49252d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492531:{NFSU2_TR(0x492531);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B492535:{NFSU2_TR(0x492535);
__builtin_memmove((R+12),(R+28),4);
}
B492537:{NFSU2_TR(0x492537);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L49253f;}}
}
B492539:L492539:{c.instructions+=1;NFSU2_TR(0x492539);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B49253f:L49253f:{c.instructions+=5;NFSU2_TR(0x49253f);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492545:{NFSU2_TR(0x492545);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492549:{NFSU2_TR(0x492549);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B49254d:{NFSU2_TR(0x49254d);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492553:{NFSU2_TR(0x492553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492558ull));
TAIL_STATIC(0x75bed4u,75b);
}
B492558:L492558:{c.instructions+=13;NFSU2_TR(0x492558);
__builtin_memmove((R+4),(R+0),4);
}
B49255a:{NFSU2_TR(0x49255a);
w4(R+0,u32(0xb60b60b7ull));
}
B49255f:{NFSU2_TR(0x49255f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B492561:{NFSU2_TR(0x492561);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B492563:{NFSU2_TR(0x492563);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B492566:{NFSU2_TR(0x492566);
__builtin_memmove((R+0),(R+8),4);
}
B492568:{NFSU2_TR(0x492568);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B49256b:{NFSU2_TR(0x49256b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B49256d:{NFSU2_TR(0x49256d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49256e:{NFSU2_TR(0x49256e);
u8 U[4];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B492575:{NFSU2_TR(0x492575);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49257a:{NFSU2_TR(0x49257a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49257b:{NFSU2_TR(0x49257b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492580ull));
TAIL_STATIC(0x5bacf0u,5ba);
}
B492580:L492580:{c.instructions+=5;NFSU2_TR(0x492580);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffffffull))));
}
B492586:{NFSU2_TR(0x492586);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B492588:{NFSU2_TR(0x492588);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49258c:{NFSU2_TR(0x49258c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B492590:{NFSU2_TR(0x492590);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L492598;}}
}
B492592:L492592:{c.instructions+=1;NFSU2_TR(0x492592);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492598:L492598:{c.instructions+=5;NFSU2_TR(0x492598);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49259e:{NFSU2_TR(0x49259e);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4925a2:{NFSU2_TR(0x4925a2);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4925a6:{NFSU2_TR(0x4925a6);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4925ac:{NFSU2_TR(0x4925ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4925b1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4925b1:L4925b1:{c.instructions+=14;NFSU2_TR(0x4925b1);
__builtin_memmove((R+4),(R+0),4);
}
B4925b3:{NFSU2_TR(0x4925b3);
w4(R+0,u32(0xb60b60b7ull));
}
B4925b8:{NFSU2_TR(0x4925b8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B4925ba:{NFSU2_TR(0x4925ba);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4925bc:{NFSU2_TR(0x4925bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4925bf:{NFSU2_TR(0x4925bf);
__builtin_memmove((R+0),(R+8),4);
}
B4925c1:{NFSU2_TR(0x4925c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B4925c4:{NFSU2_TR(0x4925c4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4925c6:{NFSU2_TR(0x4925c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4925c7:{NFSU2_TR(0x4925c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4925ce:{NFSU2_TR(0x4925ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4925cf:{NFSU2_TR(0x4925cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4925d6:{NFSU2_TR(0x4925d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4925d7:{NFSU2_TR(0x4925d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4925dcull));
TAIL_STATIC(0x5bada0u,5ba);
}
B4925dc:L4925dc:{c.instructions+=5;NFSU2_TR(0x4925dc);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7fffffffull))));
}
B4925e2:{NFSU2_TR(0x4925e2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4925e4:{NFSU2_TR(0x4925e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4925e8:{NFSU2_TR(0x4925e8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4925ec:{NFSU2_TR(0x4925ec);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4925f4;}}
}
B4925ee:L4925ee:{c.instructions+=1;NFSU2_TR(0x4925ee);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4925f4:L4925f4:{c.instructions+=5;NFSU2_TR(0x4925f4);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4925fa:{NFSU2_TR(0x4925fa);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4925fe:{NFSU2_TR(0x4925fe);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B492602:{NFSU2_TR(0x492602);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492608:{NFSU2_TR(0x492608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49260dull));
TAIL_STATIC(0x75bed4u,75b);
}
B49260d:L49260d:{c.instructions+=14;NFSU2_TR(0x49260d);
__builtin_memmove((R+4),(R+0),4);
}
B49260f:{NFSU2_TR(0x49260f);
w4(R+0,u32(0xb60b60b7ull));
}
B492614:{NFSU2_TR(0x492614);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B492616:{NFSU2_TR(0x492616);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B492618:{NFSU2_TR(0x492618);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B49261b:{NFSU2_TR(0x49261b);
__builtin_memmove((R+0),(R+8),4);
}
B49261d:{NFSU2_TR(0x49261d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B492620:{NFSU2_TR(0x492620);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B492622:{NFSU2_TR(0x492622);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492623:{NFSU2_TR(0x492623);
u8 U[4];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49262a:{NFSU2_TR(0x49262a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49262b:{NFSU2_TR(0x49262b);
u8 U[4];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B492632:{NFSU2_TR(0x492632);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492633:{NFSU2_TR(0x492633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492638ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B492638:L492638:{c.instructions+=39;NFSU2_TR(0x492638);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B49263b:{NFSU2_TR(0x49263b);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492642:{NFSU2_TR(0x492642);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492649:{NFSU2_TR(0x492649);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492650:{NFSU2_TR(0x492650);
{u32 ea_=u32(r4(R+16)+u32(320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492657:{NFSU2_TR(0x492657);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492659:{NFSU2_TR(0x492659);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492660:{NFSU2_TR(0x492660);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492667:{NFSU2_TR(0x492667);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492669:{NFSU2_TR(0x492669);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492670:{NFSU2_TR(0x492670);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492677:{NFSU2_TR(0x492677);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492679:{NFSU2_TR(0x492679);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492680:{NFSU2_TR(0x492680);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492687:{NFSU2_TR(0x492687);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49268e:{NFSU2_TR(0x49268e);
{u32 ea_=u32(r4(R+16)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492695:{NFSU2_TR(0x492695);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492697:{NFSU2_TR(0x492697);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49269e:{NFSU2_TR(0x49269e);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4926a5:{NFSU2_TR(0x4926a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4926a7:{NFSU2_TR(0x4926a7);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4926ae:{NFSU2_TR(0x4926ae);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4926b5:{NFSU2_TR(0x4926b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4926b7:{NFSU2_TR(0x4926b7);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4926be:{NFSU2_TR(0x4926be);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4926c5:{NFSU2_TR(0x4926c5);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4926cc:{NFSU2_TR(0x4926cc);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4926d3:{NFSU2_TR(0x4926d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4926d5:{NFSU2_TR(0x4926d5);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4926dc:{NFSU2_TR(0x4926dc);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4926e3:{NFSU2_TR(0x4926e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4926e5:{NFSU2_TR(0x4926e5);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4926ec:{NFSU2_TR(0x4926ec);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4926f3:{NFSU2_TR(0x4926f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4926f5:{NFSU2_TR(0x4926f5);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4926fc:{NFSU2_TR(0x4926fc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4926fe:{NFSU2_TR(0x4926fe);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492705:{NFSU2_TR(0x492705);
u8 U[8];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49270c:{NFSU2_TR(0x49270c);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492713:L492713:{c.instructions+=19;NFSU2_TR(0x492713);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492717:{NFSU2_TR(0x492717);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B492719:{NFSU2_TR(0x492719);
__builtin_memmove((R+0),(R+12),4);
}
B49271b:{NFSU2_TR(0x49271b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49271f:{NFSU2_TR(0x49271f);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B492722:{NFSU2_TR(0x492722);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+12))));
}
B492724:{NFSU2_TR(0x492724);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492728:{NFSU2_TR(0x492728);
__builtin_memmove((R+4),(R+0),4);
}
B49272a:{NFSU2_TR(0x49272a);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B49272d:{NFSU2_TR(0x49272d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B49272f:{NFSU2_TR(0x49272f);
__builtin_memmove((R+8),(R+0),4);
}
B492731:{NFSU2_TR(0x492731);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B492734:{NFSU2_TR(0x492734);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B492736:{NFSU2_TR(0x492736);
__builtin_memmove((R+4),(R+0),4);
}
B492738:{NFSU2_TR(0x492738);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffffffull))));
}
B49273e:{NFSU2_TR(0x49273e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B492740:{NFSU2_TR(0x492740);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492744:{NFSU2_TR(0x492744);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B492748:{NFSU2_TR(0x492748);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L492750;}}
}
B49274a:L49274a:{c.instructions+=1;NFSU2_TR(0x49274a);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492750:L492750:{c.instructions+=19;NFSU2_TR(0x492750);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492756:{NFSU2_TR(0x492756);
__builtin_memmove((R+4),(R+0),4);
}
B492758:{NFSU2_TR(0x492758);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B49275b:{NFSU2_TR(0x49275b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B49275d:{NFSU2_TR(0x49275d);
__builtin_memmove((R+8),(R+4),4);
}
B49275f:{NFSU2_TR(0x49275f);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B492762:{NFSU2_TR(0x492762);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+8))));
}
B492764:{NFSU2_TR(0x492764);
__builtin_memmove((R+0),(R+4),4);
}
B492766:{NFSU2_TR(0x492766);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49276d:{NFSU2_TR(0x49276d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B492770:{NFSU2_TR(0x492770);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B492772:{NFSU2_TR(0x492772);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B492779:{NFSU2_TR(0x492779);
__builtin_memmove((R+8),(R+4),4);
}
B49277b:{NFSU2_TR(0x49277b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffffffull))));
}
B492781:{NFSU2_TR(0x492781);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B492783:{NFSU2_TR(0x492783);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B49278a:{NFSU2_TR(0x49278a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49278e:{NFSU2_TR(0x49278e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B492792:{NFSU2_TR(0x492792);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L49279a;}}
}
B492794:L492794:{c.instructions+=1;NFSU2_TR(0x492794);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B49279a:L49279a:{c.instructions+=20;NFSU2_TR(0x49279a);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4927a0:{NFSU2_TR(0x4927a0);
__builtin_memmove((R+0),(R+4),4);
}
B4927a2:{NFSU2_TR(0x4927a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4927a5:{NFSU2_TR(0x4927a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B4927a7:{NFSU2_TR(0x4927a7);
__builtin_memmove((R+4),(R+0),4);
}
B4927a9:{NFSU2_TR(0x4927a9);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4927ac:{NFSU2_TR(0x4927ac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B4927ae:{NFSU2_TR(0x4927ae);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4927b5:{NFSU2_TR(0x4927b5);
__builtin_memmove((R+8),(R+0),4);
}
B4927b7:{NFSU2_TR(0x4927b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4927ba:{NFSU2_TR(0x4927ba);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4927c1:{NFSU2_TR(0x4927c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B4927c3:{NFSU2_TR(0x4927c3);
__builtin_memmove((R+4),(R+0),4);
}
B4927c5:{NFSU2_TR(0x4927c5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffffffull))));
}
B4927cb:{NFSU2_TR(0x4927cb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4927cd:{NFSU2_TR(0x4927cd);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4927d4:{NFSU2_TR(0x4927d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4927d8:{NFSU2_TR(0x4927d8);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4927df:{NFSU2_TR(0x4927df);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4927e3:{NFSU2_TR(0x4927e3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4927eb;}}
}
B4927e5:L4927e5:{c.instructions+=1;NFSU2_TR(0x4927e5);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4927eb:L4927eb:{c.instructions+=54;NFSU2_TR(0x4927eb);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4927f1:{NFSU2_TR(0x4927f1);
__builtin_memmove((R+24),(R+0),4);
}
B4927f3:{NFSU2_TR(0x4927f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B4927f6:{NFSU2_TR(0x4927f6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
}
B4927f8:{NFSU2_TR(0x4927f8);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4927ff:{NFSU2_TR(0x4927ff);
__builtin_memmove((R+0),(R+24),4);
}
B492801:{NFSU2_TR(0x492801);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B492804:{NFSU2_TR(0x492804);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B49280b:{NFSU2_TR(0x49280b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
}
B49280d:{NFSU2_TR(0x49280d);
__builtin_memmove((R+4),(R+24),4);
}
B49280f:{NFSU2_TR(0x49280f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B492812:{NFSU2_TR(0x492812);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492819:{NFSU2_TR(0x492819);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+4))));
}
B49281b:{NFSU2_TR(0x49281b);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492822:{NFSU2_TR(0x492822);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492829:{NFSU2_TR(0x492829);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492830:{NFSU2_TR(0x492830);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492837:{NFSU2_TR(0x492837);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49283e:{NFSU2_TR(0x49283e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492840:{NFSU2_TR(0x492840);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492847:{NFSU2_TR(0x492847);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B492849:{NFSU2_TR(0x492849);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49284b:{NFSU2_TR(0x49284b);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492852:{NFSU2_TR(0x492852);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492859:{NFSU2_TR(0x492859);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492860:{NFSU2_TR(0x492860);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492867:{NFSU2_TR(0x492867);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49286e:{NFSU2_TR(0x49286e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492870:{NFSU2_TR(0x492870);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492877:{NFSU2_TR(0x492877);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B492879:{NFSU2_TR(0x492879);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49287b:{NFSU2_TR(0x49287b);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492882:{NFSU2_TR(0x492882);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492889:{NFSU2_TR(0x492889);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492890:{NFSU2_TR(0x492890);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492897:{NFSU2_TR(0x492897);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49289e:{NFSU2_TR(0x49289e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4928a0:{NFSU2_TR(0x4928a0);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4928a7:{NFSU2_TR(0x4928a7);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B4928a9:{NFSU2_TR(0x4928a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4928ab:{NFSU2_TR(0x4928ab);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4928b2:{NFSU2_TR(0x4928b2);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4928b9:{NFSU2_TR(0x4928b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4928c0:{NFSU2_TR(0x4928c0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4928c2:{NFSU2_TR(0x4928c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4928c9:{NFSU2_TR(0x4928c9);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4928d0:{NFSU2_TR(0x4928d0);
__builtin_memmove((R+8),(R+24),4);
}
B4928d2:{NFSU2_TR(0x4928d2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffffffull))));
}
B4928d8:{NFSU2_TR(0x4928d8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4928da:{NFSU2_TR(0x4928da);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4928e1:{NFSU2_TR(0x4928e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4928e5:{NFSU2_TR(0x4928e5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4928e7:{NFSU2_TR(0x4928e7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4928eb:{NFSU2_TR(0x4928eb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4928f3;}}
}
B4928ed:L4928ed:{c.instructions+=1;NFSU2_TR(0x4928ed);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4928f3:L4928f3:{c.instructions+=3;NFSU2_TR(0x4928f3);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4928f9:{NFSU2_TR(0x4928f9);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492900:{NFSU2_TR(0x492900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492905ull));
TAIL_STATIC(0x75bed4u,75b);
}
B492905:L492905:{c.instructions+=16;NFSU2_TR(0x492905);
u8 U[5];
w4(U+0,u32(u32(u32(0x2bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B492909:{NFSU2_TR(0x492909);
__builtin_memmove((R+0),(R+24),4);
}
B49290b:{NFSU2_TR(0x49290b);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B49290e:{NFSU2_TR(0x49290e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+24))));
}
B492910:{NFSU2_TR(0x492910);
__builtin_memmove((R+4),(R+0),4);
}
B492912:{NFSU2_TR(0x492912);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B492915:{NFSU2_TR(0x492915);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B492917:{NFSU2_TR(0x492917);
__builtin_memmove((R+8),(R+0),4);
}
B492919:{NFSU2_TR(0x492919);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B49291c:{NFSU2_TR(0x49291c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B49291e:{NFSU2_TR(0x49291e);
__builtin_memmove((R+4),(R+0),4);
}
B492920:{NFSU2_TR(0x492920);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffffffull))));
}
B492926:{NFSU2_TR(0x492926);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B492928:{NFSU2_TR(0x492928);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49292c:{NFSU2_TR(0x49292c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B492930:{NFSU2_TR(0x492930);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L492938;}}
}
B492932:L492932:{c.instructions+=1;NFSU2_TR(0x492932);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492938:L492938:{c.instructions+=19;NFSU2_TR(0x492938);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49293e:{NFSU2_TR(0x49293e);
__builtin_memmove((R+4),(R+0),4);
}
B492940:{NFSU2_TR(0x492940);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B492943:{NFSU2_TR(0x492943);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B492945:{NFSU2_TR(0x492945);
__builtin_memmove((R+8),(R+4),4);
}
B492947:{NFSU2_TR(0x492947);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B49294a:{NFSU2_TR(0x49294a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+8))));
}
B49294c:{NFSU2_TR(0x49294c);
__builtin_memmove((R+0),(R+4),4);
}
B49294e:{NFSU2_TR(0x49294e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B492951:{NFSU2_TR(0x492951);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492958:{NFSU2_TR(0x492958);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B49295a:{NFSU2_TR(0x49295a);
__builtin_memmove((R+8),(R+4),4);
}
B49295c:{NFSU2_TR(0x49295c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492960:{NFSU2_TR(0x492960);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffffffull))));
}
B492966:{NFSU2_TR(0x492966);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B492968:{NFSU2_TR(0x492968);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49296c:{NFSU2_TR(0x49296c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492970:{NFSU2_TR(0x492970);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B492974:{NFSU2_TR(0x492974);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L49297c;}}
}
B492976:L492976:{c.instructions+=1;NFSU2_TR(0x492976);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B49297c:L49297c:{c.instructions+=20;NFSU2_TR(0x49297c);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492982:{NFSU2_TR(0x492982);
__builtin_memmove((R+8),(R+4),4);
}
B492984:{NFSU2_TR(0x492984);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B492987:{NFSU2_TR(0x492987);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B492989:{NFSU2_TR(0x492989);
__builtin_memmove((R+0),(R+8),4);
}
B49298b:{NFSU2_TR(0x49298b);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B49298e:{NFSU2_TR(0x49298e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B492990:{NFSU2_TR(0x492990);
__builtin_memmove((R+4),(R+8),4);
}
B492992:{NFSU2_TR(0x492992);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B492995:{NFSU2_TR(0x492995);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49299c:{NFSU2_TR(0x49299c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B49299e:{NFSU2_TR(0x49299e);
__builtin_memmove((R+0),(R+8),4);
}
B4929a0:{NFSU2_TR(0x4929a0);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4929a7:{NFSU2_TR(0x4929a7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B4929ac:{NFSU2_TR(0x4929ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4929ae:{NFSU2_TR(0x4929ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4929b2:{NFSU2_TR(0x4929b2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4929b6:{NFSU2_TR(0x4929b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4929ba:{NFSU2_TR(0x4929ba);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4929be:{NFSU2_TR(0x4929be);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4929c6;}}
}
B4929c0:L4929c0:{c.instructions+=1;NFSU2_TR(0x4929c0);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4929c6:L4929c6:{c.instructions+=10;NFSU2_TR(0x4929c6);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4929cc:{NFSU2_TR(0x4929cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4929d4:{NFSU2_TR(0x4929d4);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4929db:{NFSU2_TR(0x4929db);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4929e2:{NFSU2_TR(0x4929e2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4929e6:{NFSU2_TR(0x4929e6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4929ea:{NFSU2_TR(0x4929ea);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4929f0:{NFSU2_TR(0x4929f0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4929f2:{NFSU2_TR(0x4929f2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4929f5:{NFSU2_TR(0x4929f5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L492b25;}}
}
B4929fb:L4929fb:{c.instructions+=15;NFSU2_TR(0x4929fb);
__builtin_memmove((R+0),(R+8),4);
}
B4929fd:{NFSU2_TR(0x4929fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B492a00:{NFSU2_TR(0x492a00);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B492a02:{NFSU2_TR(0x492a02);
__builtin_memmove((R+4),(R+0),4);
}
B492a04:{NFSU2_TR(0x492a04);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B492a07:{NFSU2_TR(0x492a07);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B492a09:{NFSU2_TR(0x492a09);
__builtin_memmove((R+8),(R+0),4);
}
B492a0b:{NFSU2_TR(0x492a0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B492a0e:{NFSU2_TR(0x492a0e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B492a10:{NFSU2_TR(0x492a10);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492a14:{NFSU2_TR(0x492a14);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B492a19:{NFSU2_TR(0x492a19);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B492a1b:{NFSU2_TR(0x492a1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492a1f:{NFSU2_TR(0x492a1f);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B492a23:{NFSU2_TR(0x492a23);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L492a2b;}}
}
B492a25:L492a25:{c.instructions+=1;NFSU2_TR(0x492a25);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492a2b:L492a2b:{c.instructions+=8;NFSU2_TR(0x492a2b);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492a31:{NFSU2_TR(0x492a31);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492a38:{NFSU2_TR(0x492a38);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492a3c:{NFSU2_TR(0x492a3c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B492a40:{NFSU2_TR(0x492a40);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B492a46:{NFSU2_TR(0x492a46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B492a48:{NFSU2_TR(0x492a48);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B492a4b:{NFSU2_TR(0x492a4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492b1a;}}
}
B492a51:L492a51:{c.instructions+=6;NFSU2_TR(0x492a51);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492a55:{NFSU2_TR(0x492a55);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492a5b:{NFSU2_TR(0x492a5b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B492a5f:{NFSU2_TR(0x492a5f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B492a61:{NFSU2_TR(0x492a61);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B492a64:{NFSU2_TR(0x492a64);
if(r1(R+514)){{goto L492a6e;}}
}
B492a66:L492a66:{c.instructions+=2;NFSU2_TR(0x492a66);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B492a68:{NFSU2_TR(0x492a68);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492a6e:L492a6e:{c.instructions+=6;NFSU2_TR(0x492a6e);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B492a75:{NFSU2_TR(0x492a75);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B492a79:{NFSU2_TR(0x492a79);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B492a7c:{NFSU2_TR(0x492a7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B492a7e:{NFSU2_TR(0x492a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B492a81:{NFSU2_TR(0x492a81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492b31;}}
}
B492a87:L492a87:{c.instructions+=31;NFSU2_TR(0x492a87);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B492a89:{NFSU2_TR(0x492a89);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B492a8d:{NFSU2_TR(0x492a8d);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492a93:{NFSU2_TR(0x492a93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492a94:{NFSU2_TR(0x492a94);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492a98:{NFSU2_TR(0x492a98);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B492a9c:{NFSU2_TR(0x492a9c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492aa0:{NFSU2_TR(0x492aa0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492aa1:{NFSU2_TR(0x492aa1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492aa3:{NFSU2_TR(0x492aa3);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492aa7:{NFSU2_TR(0x492aa7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B492aa9:{NFSU2_TR(0x492aa9);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492aaf:{NFSU2_TR(0x492aaf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492ab3:{NFSU2_TR(0x492ab3);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492ab7:{NFSU2_TR(0x492ab7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492ab9:{NFSU2_TR(0x492ab9);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492abd:{NFSU2_TR(0x492abd);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492ac3:{NFSU2_TR(0x492ac3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492ac7:{NFSU2_TR(0x492ac7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492acb:{NFSU2_TR(0x492acb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492acd:{NFSU2_TR(0x492acd);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B492ad4:{NFSU2_TR(0x492ad4);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492adb:{NFSU2_TR(0x492adb);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492adf:{NFSU2_TR(0x492adf);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492ae3:{NFSU2_TR(0x492ae3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492ae5:{NFSU2_TR(0x492ae5);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492ae9:{NFSU2_TR(0x492ae9);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492aed:{NFSU2_TR(0x492aed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492aef:{NFSU2_TR(0x492aef);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B492af1:{NFSU2_TR(0x492af1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492af5:{NFSU2_TR(0x492af5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492afaull));
TAIL_STATIC(0x43cf10u,43c);
}
B492afa:L492afa:{c.instructions+=8;NFSU2_TR(0x492afa);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B492afe:{NFSU2_TR(0x492afe);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B492b02:{NFSU2_TR(0x492b02);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B492b09:{NFSU2_TR(0x492b09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B492b0c:{NFSU2_TR(0x492b0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492b10:{NFSU2_TR(0x492b10);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492b14:{NFSU2_TR(0x492b14);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492b18:{NFSU2_TR(0x492b18);
{goto L492b33;}
}
B492b1a:L492b1a:{c.instructions+=2;NFSU2_TR(0x492b1a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492b20:{NFSU2_TR(0x492b20);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x492a6eu);}goto L492a6e;}
}
B492b25:L492b25:{c.instructions+=3;NFSU2_TR(0x492b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B492b28:{NFSU2_TR(0x492b28);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B492b2f:{NFSU2_TR(0x492b2f);
{goto L492b33;}
}
B492b31:L492b31:{c.instructions+=1;NFSU2_TR(0x492b31);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B492b33:L492b33:{c.instructions+=2;NFSU2_TR(0x492b33);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492b37:{NFSU2_TR(0x492b37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492b3cull));
TAIL_STATIC(0x75bed4u,75b);
}
B492b3c:L492b3c:{c.instructions+=5;NFSU2_TR(0x492b3c);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B492b43:{NFSU2_TR(0x492b43);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffeull))));
}
B492b48:{NFSU2_TR(0x492b48);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B492b4a:{NFSU2_TR(0x492b4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492b4e:{NFSU2_TR(0x492b4e);
if(r1(R+518)){{goto L492b5f;}}
}
B492b50:L492b50:{c.instructions+=5;NFSU2_TR(0x492b50);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B492b52:{NFSU2_TR(0x492b52);
u8 U[5];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B492b56:{NFSU2_TR(0x492b56);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B492b59:{NFSU2_TR(0x492b59);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B492b5b:{NFSU2_TR(0x492b5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492b5f:L492b5f:{c.instructions+=5;NFSU2_TR(0x492b5f);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492b63:{NFSU2_TR(0x492b63);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B492b69:{NFSU2_TR(0x492b69);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B492b6b:{NFSU2_TR(0x492b6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B492b6e:{NFSU2_TR(0x492b6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492b78;}}
}
B492b70:L492b70:{c.instructions+=1;NFSU2_TR(0x492b70);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x42700000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B492b78:L492b78:{c.instructions+=2;NFSU2_TR(0x492b78);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B492b7d:{NFSU2_TR(0x492b7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492cbd;}}
}
B492b83:L492b83:{c.instructions+=4;NFSU2_TR(0x492b83);
__builtin_memmove((R+0),gp(0x870cec),4);
}
B492b88:{NFSU2_TR(0x492b88);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B492b8a:{NFSU2_TR(0x492b8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B492b8c:{NFSU2_TR(0x492b8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492b9a;}}
}
B492b8e:L492b8e:{c.instructions+=3;NFSU2_TR(0x492b8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B492b91:{NFSU2_TR(0x492b91);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B492b93:{NFSU2_TR(0x492b93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492b9a;}}
}
B492b95:L492b95:{c.instructions+=1;NFSU2_TR(0x492b95);
w4(R+24,u32(0x1ull));
}
B492b9a:L492b9a:{c.instructions+=3;NFSU2_TR(0x492b9a);
__builtin_memmove((R+0),gp(0x82da38),4);
}
B492b9f:{NFSU2_TR(0x492b9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492ba0:{NFSU2_TR(0x492ba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492ba5ull));
TAIL_STATIC(0x43cd10u,43c);
}
B492ba5:L492ba5:{c.instructions+=3;NFSU2_TR(0x492ba5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B492ba8:{NFSU2_TR(0x492ba8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B492baa:{NFSU2_TR(0x492baa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492cbd;}}
}
B492bb0:L492bb0:{c.instructions+=2;NFSU2_TR(0x492bb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B492bb2:{NFSU2_TR(0x492bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492cbd;}}
}
B492bb8:L492bb8:{c.instructions+=3;NFSU2_TR(0x492bb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B492bbc:{NFSU2_TR(0x492bbc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B492bbe:{NFSU2_TR(0x492bbe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L492bc5;}}
}
B492bc0:L492bc0:{c.instructions+=2;NFSU2_TR(0x492bc0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B492bc3:{NFSU2_TR(0x492bc3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L492bc7;}}
}
B492bc5:L492bc5:{c.instructions+=1;NFSU2_TR(0x492bc5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B492bc7:L492bc7:{c.instructions+=3;NFSU2_TR(0x492bc7);
__builtin_memmove((R+4),gp(0x82da38),4);
}
B492bcd:{NFSU2_TR(0x492bcd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492bce:{NFSU2_TR(0x492bce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492bd3ull));
TAIL_STATIC(0x43f8f0u,43f);
}
B492bd3:L492bd3:{c.instructions+=5;NFSU2_TR(0x492bd3);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492bd7:{NFSU2_TR(0x492bd7);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492bdd:{NFSU2_TR(0x492bdd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B492be0:{NFSU2_TR(0x492be0);
__builtin_memmove((R+24),(R+0),4);
}
B492be2:{NFSU2_TR(0x492be2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492be7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B492be7:L492be7:{c.instructions+=10;NFSU2_TR(0x492be7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492beb:{NFSU2_TR(0x492beb);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492bf1:{NFSU2_TR(0x492bf1);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B492bf6:{NFSU2_TR(0x492bf6);
{u32 ea_=u32(u32(7920180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492bfc:{NFSU2_TR(0x492bfc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B492c00:{NFSU2_TR(0x492c00);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B492c04:{NFSU2_TR(0x492c04);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B492c06:{NFSU2_TR(0x492c06);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B492c08:{NFSU2_TR(0x492c08);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B492c0b:{NFSU2_TR(0x492c0b);
if(r1(R+514)){{goto L492c15;}}
}
B492c0d:L492c0d:{c.instructions+=2;NFSU2_TR(0x492c0d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B492c0f:{NFSU2_TR(0x492c0f);
{u32 ea_=u32(u32(7920180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492c15:L492c15:{c.instructions+=1;NFSU2_TR(0x492c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492c1aull));
TAIL_STATIC(0x75bed4u,75b);
}
B492c1a:L492c1a:{c.instructions+=4;NFSU2_TR(0x492c1a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492c1e:{NFSU2_TR(0x492c1e);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492c24:{NFSU2_TR(0x492c24);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B492c28:{NFSU2_TR(0x492c28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492c2dull));
TAIL_STATIC(0x75bed4u,75b);
}
B492c2d:L492c2d:{c.instructions+=15;NFSU2_TR(0x492c2d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492c31:{NFSU2_TR(0x492c31);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B492c38:{NFSU2_TR(0x492c38);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492c3e:{NFSU2_TR(0x492c3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B492c45:{NFSU2_TR(0x492c45);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B492c48:{NFSU2_TR(0x492c48);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B492c4b:{NFSU2_TR(0x492c4b);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B492c4d:{NFSU2_TR(0x492c4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+12,shl<u8>(r1(R+12),u64(r4(U+0))));
}
B492c50:{NFSU2_TR(0x492c50);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+12))));
}
B492c52:{NFSU2_TR(0x492c52);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B492c55:{NFSU2_TR(0x492c55);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B492c5c:{NFSU2_TR(0x492c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492c5f:{NFSU2_TR(0x492c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492c62:{NFSU2_TR(0x492c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492c65:{NFSU2_TR(0x492c65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492c6aull));
TAIL_STATIC(0x75bed4u,75b);
}
B492c6a:L492c6a:{c.instructions+=4;NFSU2_TR(0x492c6a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492c6e:{NFSU2_TR(0x492c6e);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492c74:{NFSU2_TR(0x492c74);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B492c77:{NFSU2_TR(0x492c77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492c7cull));
TAIL_STATIC(0x75bed4u,75b);
}
B492c7c:L492c7c:{c.instructions+=4;NFSU2_TR(0x492c7c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492c80:{NFSU2_TR(0x492c80);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492c86:{NFSU2_TR(0x492c86);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B492c89:{NFSU2_TR(0x492c89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492c8eull));
TAIL_STATIC(0x75bed4u,75b);
}
B492c8e:L492c8e:{c.instructions+=15;NFSU2_TR(0x492c8e);
u8 U[5];
w4(U+0,u32(u32(u32(0x2bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B492c92:{NFSU2_TR(0x492c92);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B492c95:{NFSU2_TR(0x492c95);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1full))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B492c98:{NFSU2_TR(0x492c98);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B492c9b:{NFSU2_TR(0x492c9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B492c9f:{NFSU2_TR(0x492c9f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B492ca1:{NFSU2_TR(0x492ca1);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B492ca3:{NFSU2_TR(0x492ca3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B492ca6:{NFSU2_TR(0x492ca6);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B492caa:{NFSU2_TR(0x492caa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B492cac:{NFSU2_TR(0x492cac);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B492cb0:{NFSU2_TR(0x492cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492cb3:{NFSU2_TR(0x492cb3);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B492cb7:{NFSU2_TR(0x492cb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B492cb9:{NFSU2_TR(0x492cb9);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))+u32(u32(0x1ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B492cbd:L492cbd:{c.instructions+=16;NFSU2_TR(0x492cbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B492cc1:{NFSU2_TR(0x492cc1);
__builtin_memmove((R+0),(R+4),4);
}
B492cc3:{NFSU2_TR(0x492cc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B492cc6:{NFSU2_TR(0x492cc6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B492cc8:{NFSU2_TR(0x492cc8);
__builtin_memmove((R+8),(R+0),4);
}
B492cca:{NFSU2_TR(0x492cca);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B492ccd:{NFSU2_TR(0x492ccd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B492ccf:{NFSU2_TR(0x492ccf);
__builtin_memmove((R+4),(R+0),4);
}
B492cd1:{NFSU2_TR(0x492cd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B492cd4:{NFSU2_TR(0x492cd4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B492cd6:{NFSU2_TR(0x492cd6);
__builtin_memmove((R+4),(R+0),4);
}
B492cd8:{NFSU2_TR(0x492cd8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B492cdd:{NFSU2_TR(0x492cdd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B492cdf:{NFSU2_TR(0x492cdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492ce3:{NFSU2_TR(0x492ce3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B492ce7:{NFSU2_TR(0x492ce7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L492cef;}}
}
B492ce9:L492ce9:{c.instructions+=1;NFSU2_TR(0x492ce9);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492cef:L492cef:{c.instructions+=7;NFSU2_TR(0x492cef);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492cf5:{NFSU2_TR(0x492cf5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492cf9:{NFSU2_TR(0x492cf9);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492cfd:{NFSU2_TR(0x492cfd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B492d03:{NFSU2_TR(0x492d03);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B492d05:{NFSU2_TR(0x492d05);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B492d08:{NFSU2_TR(0x492d08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492d27;}}
}
B492d0a:L492d0a:{c.instructions+=5;NFSU2_TR(0x492d0a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B492d10:{NFSU2_TR(0x492d10);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B492d16:{NFSU2_TR(0x492d16);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B492d18:{NFSU2_TR(0x492d18);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B492d1b:{NFSU2_TR(0x492d1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492d31;}}
}
B492d1d:L492d1d:{c.instructions+=3;NFSU2_TR(0x492d1d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B492d1f:{NFSU2_TR(0x492d1f);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492d25:{NFSU2_TR(0x492d25);
{goto L492d46;}
}
B492d27:L492d27:{c.instructions+=3;NFSU2_TR(0x492d27);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B492d29:{NFSU2_TR(0x492d29);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492d2f:{NFSU2_TR(0x492d2f);
{goto L492d46;}
}
B492d31:L492d31:{c.instructions+=4;NFSU2_TR(0x492d31);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B492d37:{NFSU2_TR(0x492d37);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B492d39:{NFSU2_TR(0x492d39);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B492d3c:{NFSU2_TR(0x492d3c);
if(r1(R+514)){{goto L492d46;}}
}
B492d3e:L492d3e:{c.instructions+=2;NFSU2_TR(0x492d3e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B492d40:{NFSU2_TR(0x492d40);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492d46:L492d46:{c.instructions+=5;NFSU2_TR(0x492d46);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492d4a:{NFSU2_TR(0x492d4a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B492d4c:{NFSU2_TR(0x492d4c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B492d4e:{NFSU2_TR(0x492d4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B492d51:{NFSU2_TR(0x492d51);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x492210u);}goto L492210;}}
}
B492d57:L492d57:{c.instructions+=3;NFSU2_TR(0x492d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B492d5a:{NFSU2_TR(0x492d5a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B492d5e:{NFSU2_TR(0x492d5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B492d62:L492d62:{c.instructions+=5;NFSU2_TR(0x492d62);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B492d65:{NFSU2_TR(0x492d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492d68:{NFSU2_TR(0x492d68);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B492d6a:{NFSU2_TR(0x492d6a);
__builtin_memmove((R+0),(R+24),4);
}
B492d6c:{NFSU2_TR(0x492d6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B492d74:L492d74:{c.instructions+=7;NFSU2_TR(0x492d74);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B492d76:{NFSU2_TR(0x492d76);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B492d78:{NFSU2_TR(0x492d78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B492d7b:{NFSU2_TR(0x492d7b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B492d7e:{NFSU2_TR(0x492d7e);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B492d80:{NFSU2_TR(0x492d80);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B492d84:{NFSU2_TR(0x492d84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x492d74u);}goto L492d74;}}
}
B492d86:L492d86:{c.instructions+=3;NFSU2_TR(0x492d86);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B492d88:{NFSU2_TR(0x492d88);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B492d8a:{NFSU2_TR(0x492d8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492dc0;}}
}
B492d8c:L492d8c:{c.instructions+=12;NFSU2_TR(0x492d8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B492d8e:{NFSU2_TR(0x492d8e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B492d90:{NFSU2_TR(0x492d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B492d93:{NFSU2_TR(0x492d93);
u8 U[4];
w4(U+0,u32(0x491ac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492d98:{NFSU2_TR(0x492d98);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492d9a:{NFSU2_TR(0x492d9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B492d9c:{NFSU2_TR(0x492d9c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492d9e:{NFSU2_TR(0x492d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492da1:{NFSU2_TR(0x492da1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492da2:{NFSU2_TR(0x492da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492da5:{NFSU2_TR(0x492da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492da8:{NFSU2_TR(0x492da8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492dadull));
TAIL_STATIC(0x75c401u,75c);
}
B492dad:L492dad:{c.instructions+=4;NFSU2_TR(0x492dad);
__builtin_memmove((R+0),gp(0x82da3c),4);
}
B492db2:{NFSU2_TR(0x492db2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492db3:{NFSU2_TR(0x492db3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492db4:{NFSU2_TR(0x492db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492db9ull));
TAIL_STATIC(0x43f920u,43f);
}
B492db9:L492db9:{c.instructions+=2;NFSU2_TR(0x492db9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492dbd:{NFSU2_TR(0x492dbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B492dc0:L492dc0:{c.instructions+=5;NFSU2_TR(0x492dc0);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492dc3:{NFSU2_TR(0x492dc3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B492dc9:{NFSU2_TR(0x492dc9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B492dcb:{NFSU2_TR(0x492dcb);
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
B492dce:{NFSU2_TR(0x492dce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492dee;}}
}
B492dd0:L492dd0:{c.instructions+=10;NFSU2_TR(0x492dd0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B492dd4:{NFSU2_TR(0x492dd4);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492dd7:{NFSU2_TR(0x492dd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B492dde:{NFSU2_TR(0x492dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492de5:{NFSU2_TR(0x492de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B492de6:{NFSU2_TR(0x492de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B492de7:{NFSU2_TR(0x492de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B492de8:{NFSU2_TR(0x492de8);
__builtin_memmove((R+16),(R+20),4);
}
B492dea:{NFSU2_TR(0x492dea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B492deb:{NFSU2_TR(0x492deb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B492dee:L492dee:{c.instructions+=10;NFSU2_TR(0x492dee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B492df0:{NFSU2_TR(0x492df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B492df7:{NFSU2_TR(0x492df7);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B492dfe:{NFSU2_TR(0x492dfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B492dff:{NFSU2_TR(0x492dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B492e00:{NFSU2_TR(0x492e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492e07:{NFSU2_TR(0x492e07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B492e08:{NFSU2_TR(0x492e08);
__builtin_memmove((R+16),(R+20),4);
}
B492e0a:{NFSU2_TR(0x492e0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B492e0b:{NFSU2_TR(0x492e0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B492e10:L492e10:{c.instructions+=9;NFSU2_TR(0x492e10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492e11:{NFSU2_TR(0x492e11);
__builtin_memmove((R+20),(R+16),4);
}
B492e13:{NFSU2_TR(0x492e13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B492e16:{NFSU2_TR(0x492e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B492e19:{NFSU2_TR(0x492e19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492e1a:{NFSU2_TR(0x492e1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492e1b:{NFSU2_TR(0x492e1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492e1c:{NFSU2_TR(0x492e1c);
__builtin_memmove((R+28),(R+4),4);
}
B492e1e:{NFSU2_TR(0x492e1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492e23ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B492e23:L492e23:{c.instructions+=3;NFSU2_TR(0x492e23);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492e26:{NFSU2_TR(0x492e26);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B492e2c:{NFSU2_TR(0x492e2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492e31ull));
TAIL_STATIC(0x75bed4u,75b);
}
B492e31:L492e31:{c.instructions+=3;NFSU2_TR(0x492e31);
__builtin_memmove((R+4),(R+28),4);
}
B492e33:{NFSU2_TR(0x492e33);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492e37:{NFSU2_TR(0x492e37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492e3cull));
TAIL_STATIC(0x48bd90u,48b);
}
B492e3c:L492e3c:{c.instructions+=3;NFSU2_TR(0x492e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B492e3f:{NFSU2_TR(0x492e3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B492e47:{NFSU2_TR(0x492e47);
{goto L492e50;}
}
B492e50:L492e50:{c.instructions+=3;NFSU2_TR(0x492e50);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B492e53:{NFSU2_TR(0x492e53);
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
B492e55:{NFSU2_TR(0x492e55);
if(r1(R+518)){{goto L492f71;}}
}
B492e5b:L492e5b:{c.instructions+=5;NFSU2_TR(0x492e5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B492e5d:{NFSU2_TR(0x492e5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492e61:{NFSU2_TR(0x492e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B492e64:{NFSU2_TR(0x492e64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B492e66:{NFSU2_TR(0x492e66);
if(r1(R+518)){{goto L492e7b;}}
}
B492e68:L492e68:{c.instructions+=3;NFSU2_TR(0x492e68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492e69:{NFSU2_TR(0x492e69);
w4(R+4,u32(0x883e70ull));
}
B492e6e:{NFSU2_TR(0x492e6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492e73ull));
TAIL_STATIC(0x5d7440u,5d7);
}
B492e73:L492e73:{c.instructions+=2;NFSU2_TR(0x492e73);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B492e75:{NFSU2_TR(0x492e75);
if(r1(R+518)){{goto L492f61;}}
}
B492e7b:L492e7b:{c.instructions+=3;NFSU2_TR(0x492e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B492e7e:{NFSU2_TR(0x492e7e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B492e81:{NFSU2_TR(0x492e81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492e93;}}
}
B492e83:L492e83:{c.instructions+=6;NFSU2_TR(0x492e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B492e86:{NFSU2_TR(0x492e86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492e88:{NFSU2_TR(0x492e88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492e89:{NFSU2_TR(0x492e89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492e8a:{NFSU2_TR(0x492e8a);
__builtin_memmove((R+4),(R+28),4);
}
B492e8c:{NFSU2_TR(0x492e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492e91ull));
TAIL_STATIC(0x491e50u,491);
}
B492e91:L492e91:{c.instructions+=1;NFSU2_TR(0x492e91);
{goto L492e9f;}
}
B492e93:L492e93:{c.instructions+=2;NFSU2_TR(0x492e93);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B492e95:{NFSU2_TR(0x492e95);
if(r1(R+518)){{goto L492e9f;}}
}
B492e97:L492e97:{c.instructions+=1;NFSU2_TR(0x492e97);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B492e9f:L492e9f:{c.instructions+=7;NFSU2_TR(0x492e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B492ea2:{NFSU2_TR(0x492ea2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492ea6:{NFSU2_TR(0x492ea6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492eaa:{NFSU2_TR(0x492eaa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B492eb0:{NFSU2_TR(0x492eb0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B492eb2:{NFSU2_TR(0x492eb2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B492eb5:{NFSU2_TR(0x492eb5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L492f61;}}
}
B492ebb:L492ebb:{c.instructions+=2;NFSU2_TR(0x492ebb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B492ebe:{NFSU2_TR(0x492ebe);
if(r1(R+518)){{goto L492ec8;}}
}
B492ec0:L492ec0:{c.instructions+=2;NFSU2_TR(0x492ec0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B492ec2:{NFSU2_TR(0x492ec2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492f61;}}
}
B492ec8:L492ec8:{c.instructions+=7;NFSU2_TR(0x492ec8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492ecc:{NFSU2_TR(0x492ecc);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B492ecf:{NFSU2_TR(0x492ecf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B492ed3:{NFSU2_TR(0x492ed3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B492ed9:{NFSU2_TR(0x492ed9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B492edb:{NFSU2_TR(0x492edb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B492ede:{NFSU2_TR(0x492ede);
if(r1(R+514)){{goto L492f5a;}}
}
B492ee0:L492ee0:{c.instructions+=3;NFSU2_TR(0x492ee0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B492ee2:{NFSU2_TR(0x492ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B492ee5:{NFSU2_TR(0x492ee5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L492ef8;}}
}
B492ee7:L492ee7:{c.instructions+=5;NFSU2_TR(0x492ee7);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492eea:{NFSU2_TR(0x492eea);
w4(R+12,u32(0x1ull));
}
B492eef:{NFSU2_TR(0x492eef);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B492ef3:{NFSU2_TR(0x492ef3);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492ef6:{NFSU2_TR(0x492ef6);
{goto L492f04;}
}
B492ef8:L492ef8:{c.instructions+=4;NFSU2_TR(0x492ef8);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492efb:{NFSU2_TR(0x492efb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B492efd:{NFSU2_TR(0x492efd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B492f01:{NFSU2_TR(0x492f01);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492f04:L492f04:{c.instructions+=5;NFSU2_TR(0x492f04);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B492f06:{NFSU2_TR(0x492f06);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B492f0c:{NFSU2_TR(0x492f0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B492f0e:{NFSU2_TR(0x492f0e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B492f11:{NFSU2_TR(0x492f11);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L492f49;}}
}
B492f13:L492f13:{c.instructions+=8;NFSU2_TR(0x492f13);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B492f15:{NFSU2_TR(0x492f15);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B492f18:{NFSU2_TR(0x492f18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492f19:{NFSU2_TR(0x492f19);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492f1d:{NFSU2_TR(0x492f1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B492f21:{NFSU2_TR(0x492f21);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B492f22:{NFSU2_TR(0x492f22);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B492f24:{NFSU2_TR(0x492f24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492f29ull));
TAIL_STATIC(0x487360u,487);
}
B492f29:L492f29:{c.instructions+=9;NFSU2_TR(0x492f29);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B492f2d:{NFSU2_TR(0x492f2d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B492f31:{NFSU2_TR(0x492f31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B492f34:{NFSU2_TR(0x492f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492f37:{NFSU2_TR(0x492f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B492f3e:{NFSU2_TR(0x492f3e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B492f40:{NFSU2_TR(0x492f40);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B492f44:{NFSU2_TR(0x492f44);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492f47:{NFSU2_TR(0x492f47);
{goto L492f61;}
}
B492f49:L492f49:{c.instructions+=5;NFSU2_TR(0x492f49);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B492f4b:{NFSU2_TR(0x492f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492f4e:{NFSU2_TR(0x492f4e);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B492f51:{NFSU2_TR(0x492f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B492f58:{NFSU2_TR(0x492f58);
{goto L492f61;}
}
B492f5a:L492f5a:{c.instructions+=2;NFSU2_TR(0x492f5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B492f5e:{NFSU2_TR(0x492f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492f61:L492f61:{c.instructions+=4;NFSU2_TR(0x492f61);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B492f65:{NFSU2_TR(0x492f65);
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
B492f67:{NFSU2_TR(0x492f67);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B492f6b:{NFSU2_TR(0x492f6b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x492e50u);}goto L492e50;}}
}
B492f71:L492f71:{c.instructions+=4;NFSU2_TR(0x492f71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B492f73:{NFSU2_TR(0x492f73);
__builtin_memmove((R+4),(R+28),4);
}
B492f75:{NFSU2_TR(0x492f75);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492f79:{NFSU2_TR(0x492f79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492f7eull));
TAIL_STATIC(0x502fd0u,502);
}
B492f7e:L492f7e:{c.instructions+=3;NFSU2_TR(0x492f7e);
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
B492f80:{NFSU2_TR(0x492f80);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492f84:{NFSU2_TR(0x492f84);
if(r1(R+518)){TAIL_STATIC(0x49337bu,493);}
}
B492f8a:L492f8a:{c.instructions+=1;NFSU2_TR(0x492f8a);
{goto L492f90;}
}
B492f8c:L492f8c:{c.instructions+=1;NFSU2_TR(0x492f8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B492f90:L492f90:{c.instructions+=23;NFSU2_TR(0x492f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B492f92:{NFSU2_TR(0x492f92);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492f96:{NFSU2_TR(0x492f96);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B492f99:{NFSU2_TR(0x492f99);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B492f9c:{NFSU2_TR(0x492f9c);
__builtin_memmove((R+28),(R+0),4);
}
B492f9e:{NFSU2_TR(0x492f9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492fa2:{NFSU2_TR(0x492fa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492fa6:{NFSU2_TR(0x492fa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B492fae:{NFSU2_TR(0x492fae);
__builtin_memmove((R+28),(R+28),4);
}
B492fb0:{NFSU2_TR(0x492fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B492fb3:{NFSU2_TR(0x492fb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B492fb6:{NFSU2_TR(0x492fb6);
w4(R+0,u32(0x1ull));
}
B492fbb:{NFSU2_TR(0x492fbb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B492fbd:{NFSU2_TR(0x492fbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B492fc0:{NFSU2_TR(0x492fc0);
w4(R+8,u32(0x1ull));
}
B492fc5:{NFSU2_TR(0x492fc5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B492fc7:{NFSU2_TR(0x492fc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492fcb:{NFSU2_TR(0x492fcb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B492fce:{NFSU2_TR(0x492fce);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B492fcf:{NFSU2_TR(0x492fcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492fd3:{NFSU2_TR(0x492fd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B492fd6:{NFSU2_TR(0x492fd6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B492fd8:{NFSU2_TR(0x492fd8);
if(r1(R+518)){{goto L492ff6;}}
}
B492fda:L492fda:{c.instructions+=5;NFSU2_TR(0x492fda);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B492fdd:{NFSU2_TR(0x492fdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492fe1:{NFSU2_TR(0x492fe1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B492fe5:{NFSU2_TR(0x492fe5);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B492feb:{NFSU2_TR(0x492feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x492ff0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B492ff0:L492ff0:{c.instructions+=2;NFSU2_TR(0x492ff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B492ff4:{NFSU2_TR(0x492ff4);
{goto L492ffe;}
}
B492ff6:L492ff6:{c.instructions+=1;NFSU2_TR(0x492ff6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B492ffe:L492ffe:{c.instructions+=1;NFSU2_TR(0x492ffe);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x493004u,493);
}
XIT:NFSU2_TR_EXIT(0x492,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
