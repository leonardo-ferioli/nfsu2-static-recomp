#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x593,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x593,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_593(u8* __restrict R,Cpu& c);
u32 page_593(Cpu& c){return body_593(c.regs.data(),c);}
__attribute__((noinline)) u32 body_593(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x593005:goto L593005;
case 0x593006:c.instructions+=5;goto B593006;
case 0x593007:c.instructions+=4;goto B593007;
case 0x593008:c.instructions+=3;goto B593008;
case 0x59300a:c.instructions+=2;goto B59300a;
case 0x59300b:c.instructions+=1;goto B59300b;
case 0x593010:goto L593010;
case 0x593016:c.instructions+=6;goto B593016;
case 0x593017:c.instructions+=5;goto B593017;
case 0x59301a:c.instructions+=4;goto B59301a;
case 0x59301c:c.instructions+=3;goto B59301c;
case 0x59301e:c.instructions+=2;goto B59301e;
case 0x59301f:c.instructions+=1;goto B59301f;
case 0x593021:goto L593021;
case 0x593023:c.instructions+=3;goto B593023;
case 0x593025:c.instructions+=2;goto B593025;
case 0x593027:c.instructions+=1;goto B593027;
case 0x59302a:goto L59302a;
case 0x593031:c.instructions+=1;goto B593031;
case 0x593032:goto L593032;
case 0x593038:c.instructions+=2;goto B593038;
case 0x59303b:c.instructions+=1;goto B59303b;
case 0x59303d:goto L59303d;
case 0x59303f:c.instructions+=2;goto B59303f;
case 0x593041:c.instructions+=1;goto B593041;
case 0x593044:goto L593044;
case 0x59304b:goto L59304b;
case 0x593050:goto L593050;
case 0x593054:c.instructions+=3;goto B593054;
case 0x593058:c.instructions+=2;goto B593058;
case 0x59305b:c.instructions+=1;goto B59305b;
case 0x59305d:goto L59305d;
case 0x593061:c.instructions+=3;goto B593061;
case 0x593065:c.instructions+=2;goto B593065;
case 0x593068:c.instructions+=1;goto B593068;
case 0x59306a:goto L59306a;
case 0x59306d:c.instructions+=12;goto B59306d;
case 0x593073:c.instructions+=11;goto B593073;
case 0x593076:c.instructions+=10;goto B593076;
case 0x593078:c.instructions+=9;goto B593078;
case 0x59307a:c.instructions+=8;goto B59307a;
case 0x59307d:c.instructions+=7;goto B59307d;
case 0x593082:c.instructions+=6;goto B593082;
case 0x593084:c.instructions+=5;goto B593084;
case 0x59308a:c.instructions+=4;goto B59308a;
case 0x59308d:c.instructions+=3;goto B59308d;
case 0x593091:c.instructions+=2;goto B593091;
case 0x593093:c.instructions+=1;goto B593093;
case 0x593094:goto L593094;
case 0x593096:c.instructions+=1;goto B593096;
case 0x5930a0:goto L5930a0;
case 0x5930a5:c.instructions+=2;goto B5930a5;
case 0x5930a9:c.instructions+=1;goto B5930a9;
case 0x5930b0:goto L5930b0;
case 0x5930b1:c.instructions+=5;goto B5930b1;
case 0x5930b5:c.instructions+=4;goto B5930b5;
case 0x5930ba:c.instructions+=3;goto B5930ba;
case 0x5930bc:c.instructions+=2;goto B5930bc;
case 0x5930be:c.instructions+=1;goto B5930be;
case 0x5930c3:goto L5930c3;
case 0x5930c5:c.instructions+=2;goto B5930c5;
case 0x5930c6:c.instructions+=1;goto B5930c6;
case 0x5930d0:goto L5930d0;
case 0x5930d4:c.instructions+=2;goto B5930d4;
case 0x5930d6:c.instructions+=1;goto B5930d6;
case 0x5930d8:goto L5930d8;
case 0x5930da:c.instructions+=1;goto B5930da;
case 0x5930db:goto L5930db;
case 0x5930e1:c.instructions+=2;goto B5930e1;
case 0x5930e4:c.instructions+=1;goto B5930e4;
case 0x5930f0:goto L5930f0;
case 0x5930f3:c.instructions+=1;goto B5930f3;
case 0x593100:goto L593100;
case 0x593104:c.instructions+=2;goto B593104;
case 0x593106:c.instructions+=1;goto B593106;
case 0x593108:goto L593108;
case 0x59310c:c.instructions+=1;goto B59310c;
case 0x59310f:goto L59310f;
case 0x593112:c.instructions+=2;goto B593112;
case 0x593114:c.instructions+=1;goto B593114;
case 0x593116:goto L593116;
case 0x593118:c.instructions+=1;goto B593118;
case 0x59311b:goto L59311b;
case 0x593120:goto L593120;
case 0x593121:c.instructions+=7;goto B593121;
case 0x593125:c.instructions+=6;goto B593125;
case 0x593126:c.instructions+=5;goto B593126;
case 0x593128:c.instructions+=4;goto B593128;
case 0x59312d:c.instructions+=3;goto B59312d;
case 0x59312e:c.instructions+=2;goto B59312e;
case 0x593130:c.instructions+=1;goto B593130;
case 0x593135:goto L593135;
case 0x593138:c.instructions+=3;goto B593138;
case 0x59313a:c.instructions+=2;goto B59313a;
case 0x59313c:c.instructions+=1;goto B59313c;
case 0x59313e:goto L59313e;
case 0x593142:c.instructions+=2;goto B593142;
case 0x593143:c.instructions+=1;goto B593143;
case 0x593148:goto L593148;
case 0x59314c:c.instructions+=6;goto B59314c;
case 0x59314e:c.instructions+=5;goto B59314e;
case 0x593151:c.instructions+=4;goto B593151;
case 0x593153:c.instructions+=3;goto B593153;
case 0x593156:c.instructions+=2;goto B593156;
case 0x593159:c.instructions+=1;goto B593159;
case 0x59315b:goto L59315b;
case 0x59315e:c.instructions+=7;goto B59315e;
case 0x593161:c.instructions+=6;goto B593161;
case 0x593164:c.instructions+=5;goto B593164;
case 0x593166:c.instructions+=4;goto B593166;
case 0x59316a:c.instructions+=3;goto B59316a;
case 0x59316b:c.instructions+=2;goto B59316b;
case 0x59316f:c.instructions+=1;goto B59316f;
case 0x593174:goto L593174;
case 0x593176:c.instructions+=6;goto B593176;
case 0x593178:c.instructions+=5;goto B593178;
case 0x59317a:c.instructions+=4;goto B59317a;
case 0x59317d:c.instructions+=3;goto B59317d;
case 0x59317e:c.instructions+=2;goto B59317e;
case 0x593180:c.instructions+=1;goto B593180;
case 0x593185:goto L593185;
case 0x593188:c.instructions+=2;goto B593188;
case 0x59318b:c.instructions+=1;goto B59318b;
case 0x59318d:goto L59318d;
case 0x593190:c.instructions+=1;goto B593190;
case 0x593195:goto L593195;
case 0x593198:c.instructions+=2;goto B593198;
case 0x59319b:c.instructions+=1;goto B59319b;
case 0x59319d:goto L59319d;
case 0x5931a4:c.instructions+=5;goto B5931a4;
case 0x5931a7:c.instructions+=4;goto B5931a7;
case 0x5931a9:c.instructions+=3;goto B5931a9;
case 0x5931aa:c.instructions+=2;goto B5931aa;
case 0x5931ad:c.instructions+=1;goto B5931ad;
case 0x5931b2:goto L5931b2;
case 0x5931b4:goto L5931b4;
case 0x5931ba:c.instructions+=12;goto B5931ba;
case 0x5931bc:c.instructions+=11;goto B5931bc;
case 0x5931be:c.instructions+=10;goto B5931be;
case 0x5931c1:c.instructions+=9;goto B5931c1;
case 0x5931c4:c.instructions+=8;goto B5931c4;
case 0x5931c6:c.instructions+=7;goto B5931c6;
case 0x5931c9:c.instructions+=6;goto B5931c9;
case 0x5931cf:c.instructions+=5;goto B5931cf;
case 0x5931d1:c.instructions+=4;goto B5931d1;
case 0x5931d4:c.instructions+=3;goto B5931d4;
case 0x5931d7:c.instructions+=2;goto B5931d7;
case 0x5931da:c.instructions+=1;goto B5931da;
case 0x5931db:goto L5931db;
case 0x5931dd:c.instructions+=1;goto B5931dd;
case 0x5931e2:goto L5931e2;
case 0x5931e3:c.instructions+=2;goto B5931e3;
case 0x5931e4:c.instructions+=1;goto B5931e4;
case 0x5931f0:goto L5931f0;
case 0x5931f3:c.instructions+=2;goto B5931f3;
case 0x5931f5:c.instructions+=1;goto B5931f5;
case 0x5931f7:goto L5931f7;
case 0x5931fa:c.instructions+=3;goto B5931fa;
case 0x5931fd:c.instructions+=2;goto B5931fd;
case 0x5931ff:c.instructions+=1;goto B5931ff;
case 0x593201:goto L593201;
case 0x593206:c.instructions+=1;goto B593206;
case 0x593209:goto L593209;
case 0x59320b:c.instructions+=1;goto B59320b;
case 0x593210:goto L593210;
case 0x593211:c.instructions+=3;goto B593211;
case 0x593213:c.instructions+=2;goto B593213;
case 0x593215:c.instructions+=1;goto B593215;
case 0x593218:goto L593218;
case 0x593219:c.instructions+=3;goto B593219;
case 0x59321c:c.instructions+=2;goto B59321c;
case 0x59321d:c.instructions+=1;goto B59321d;
case 0x593222:goto L593222;
case 0x593224:c.instructions+=3;goto B593224;
case 0x593227:c.instructions+=2;goto B593227;
case 0x593229:c.instructions+=1;goto B593229;
case 0x59322c:goto L59322c;
case 0x59322f:c.instructions+=9;goto B59322f;
case 0x593232:c.instructions+=8;goto B593232;
case 0x593234:c.instructions+=7;goto B593234;
case 0x593236:c.instructions+=6;goto B593236;
case 0x59323c:c.instructions+=5;goto B59323c;
case 0x593242:c.instructions+=4;goto B593242;
case 0x593244:c.instructions+=3;goto B593244;
case 0x59324a:c.instructions+=2;goto B59324a;
case 0x59324c:c.instructions+=1;goto B59324c;
case 0x59324f:goto L59324f;
case 0x593252:c.instructions+=10;goto B593252;
case 0x593255:c.instructions+=9;goto B593255;
case 0x593257:c.instructions+=8;goto B593257;
case 0x59325b:c.instructions+=7;goto B59325b;
case 0x59325d:c.instructions+=6;goto B59325d;
case 0x593263:c.instructions+=5;goto B593263;
case 0x593269:c.instructions+=4;goto B593269;
case 0x59326f:c.instructions+=3;goto B59326f;
case 0x593272:c.instructions+=2;goto B593272;
case 0x593273:c.instructions+=1;goto B593273;
case 0x593280:goto L593280;
case 0x593281:c.instructions+=8;goto B593281;
case 0x593283:c.instructions+=7;goto B593283;
case 0x593286:c.instructions+=6;goto B593286;
case 0x593289:c.instructions+=5;goto B593289;
case 0x59328a:c.instructions+=4;goto B59328a;
case 0x59328c:c.instructions+=3;goto B59328c;
case 0x59328e:c.instructions+=2;goto B59328e;
case 0x59328f:c.instructions+=1;goto B59328f;
case 0x593292:goto L593292;
case 0x593294:c.instructions+=3;goto B593294;
case 0x593296:c.instructions+=2;goto B593296;
case 0x593298:c.instructions+=1;goto B593298;
case 0x59329b:goto L59329b;
case 0x59329e:c.instructions+=5;goto B59329e;
case 0x5932a4:c.instructions+=4;goto B5932a4;
case 0x5932a6:c.instructions+=3;goto B5932a6;
case 0x5932a8:c.instructions+=2;goto B5932a8;
case 0x5932ab:c.instructions+=1;goto B5932ab;
case 0x5932ad:goto L5932ad;
case 0x5932b0:c.instructions+=11;goto B5932b0;
case 0x5932b3:c.instructions+=10;goto B5932b3;
case 0x5932b6:c.instructions+=9;goto B5932b6;
case 0x5932b8:c.instructions+=8;goto B5932b8;
case 0x5932ba:c.instructions+=7;goto B5932ba;
case 0x5932bc:c.instructions+=6;goto B5932bc;
case 0x5932bf:c.instructions+=5;goto B5932bf;
case 0x5932c0:c.instructions+=4;goto B5932c0;
case 0x5932c3:c.instructions+=3;goto B5932c3;
case 0x5932c6:c.instructions+=2;goto B5932c6;
case 0x5932c7:c.instructions+=1;goto B5932c7;
case 0x5932cc:goto L5932cc;
case 0x5932cf:c.instructions+=5;goto B5932cf;
case 0x5932d0:c.instructions+=4;goto B5932d0;
case 0x5932d1:c.instructions+=3;goto B5932d1;
case 0x5932d3:c.instructions+=2;goto B5932d3;
case 0x5932d4:c.instructions+=1;goto B5932d4;
case 0x5932d7:goto L5932d7;
case 0x5932da:c.instructions+=69;goto B5932da;
case 0x5932e0:c.instructions+=68;goto B5932e0;
case 0x5932e3:c.instructions+=67;goto B5932e3;
case 0x5932e6:c.instructions+=66;goto B5932e6;
case 0x5932ea:c.instructions+=65;goto B5932ea;
case 0x5932ec:c.instructions+=64;goto B5932ec;
case 0x5932ee:c.instructions+=63;goto B5932ee;
case 0x5932f2:c.instructions+=62;goto B5932f2;
case 0x5932f5:c.instructions+=61;goto B5932f5;
case 0x5932f8:c.instructions+=60;goto B5932f8;
case 0x5932fc:c.instructions+=59;goto B5932fc;
case 0x5932ff:c.instructions+=58;goto B5932ff;
case 0x593302:c.instructions+=57;goto B593302;
case 0x593306:c.instructions+=56;goto B593306;
case 0x593308:c.instructions+=55;goto B593308;
case 0x59330b:c.instructions+=54;goto B59330b;
case 0x59330f:c.instructions+=53;goto B59330f;
case 0x593312:c.instructions+=52;goto B593312;
case 0x593315:c.instructions+=51;goto B593315;
case 0x593319:c.instructions+=50;goto B593319;
case 0x59331c:c.instructions+=49;goto B59331c;
case 0x59331f:c.instructions+=48;goto B59331f;
case 0x593323:c.instructions+=47;goto B593323;
case 0x593326:c.instructions+=46;goto B593326;
case 0x593329:c.instructions+=45;goto B593329;
case 0x59332d:c.instructions+=44;goto B59332d;
case 0x593330:c.instructions+=43;goto B593330;
case 0x593336:c.instructions+=42;goto B593336;
case 0x59333a:c.instructions+=41;goto B59333a;
case 0x59333d:c.instructions+=40;goto B59333d;
case 0x593343:c.instructions+=39;goto B593343;
case 0x593347:c.instructions+=38;goto B593347;
case 0x59334a:c.instructions+=37;goto B59334a;
case 0x593350:c.instructions+=36;goto B593350;
case 0x593354:c.instructions+=35;goto B593354;
case 0x593357:c.instructions+=34;goto B593357;
case 0x59335d:c.instructions+=33;goto B59335d;
case 0x593361:c.instructions+=32;goto B593361;
case 0x593364:c.instructions+=31;goto B593364;
case 0x59336a:c.instructions+=30;goto B59336a;
case 0x59336e:c.instructions+=29;goto B59336e;
case 0x593371:c.instructions+=28;goto B593371;
case 0x593377:c.instructions+=27;goto B593377;
case 0x59337b:c.instructions+=26;goto B59337b;
case 0x59337e:c.instructions+=25;goto B59337e;
case 0x593384:c.instructions+=24;goto B593384;
case 0x593388:c.instructions+=23;goto B593388;
case 0x59338c:c.instructions+=22;goto B59338c;
case 0x59338f:c.instructions+=21;goto B59338f;
case 0x593395:c.instructions+=20;goto B593395;
case 0x593399:c.instructions+=19;goto B593399;
case 0x59339c:c.instructions+=18;goto B59339c;
case 0x5933a2:c.instructions+=17;goto B5933a2;
case 0x5933a6:c.instructions+=16;goto B5933a6;
case 0x5933a9:c.instructions+=15;goto B5933a9;
case 0x5933af:c.instructions+=14;goto B5933af;
case 0x5933b3:c.instructions+=13;goto B5933b3;
case 0x5933b6:c.instructions+=12;goto B5933b6;
case 0x5933bc:c.instructions+=11;goto B5933bc;
case 0x5933c0:c.instructions+=10;goto B5933c0;
case 0x5933c3:c.instructions+=9;goto B5933c3;
case 0x5933c7:c.instructions+=8;goto B5933c7;
case 0x5933c8:c.instructions+=7;goto B5933c8;
case 0x5933c9:c.instructions+=6;goto B5933c9;
case 0x5933cf:c.instructions+=5;goto B5933cf;
case 0x5933d0:c.instructions+=4;goto B5933d0;
case 0x5933d3:c.instructions+=3;goto B5933d3;
case 0x5933d7:c.instructions+=2;goto B5933d7;
case 0x5933d8:c.instructions+=1;goto B5933d8;
case 0x5933dd:goto L5933dd;
case 0x5933e1:c.instructions+=114;goto B5933e1;
case 0x5933e5:c.instructions+=113;goto B5933e5;
case 0x5933e8:c.instructions+=112;goto B5933e8;
case 0x5933ec:c.instructions+=111;goto B5933ec;
case 0x5933ef:c.instructions+=110;goto B5933ef;
case 0x5933f3:c.instructions+=109;goto B5933f3;
case 0x5933f6:c.instructions+=108;goto B5933f6;
case 0x5933fa:c.instructions+=107;goto B5933fa;
case 0x5933fe:c.instructions+=106;goto B5933fe;
case 0x593402:c.instructions+=105;goto B593402;
case 0x593406:c.instructions+=104;goto B593406;
case 0x593409:c.instructions+=103;goto B593409;
case 0x59340d:c.instructions+=102;goto B59340d;
case 0x593411:c.instructions+=101;goto B593411;
case 0x593415:c.instructions+=100;goto B593415;
case 0x593419:c.instructions+=99;goto B593419;
case 0x59341c:c.instructions+=98;goto B59341c;
case 0x59341e:c.instructions+=97;goto B59341e;
case 0x593421:c.instructions+=96;goto B593421;
case 0x593423:c.instructions+=95;goto B593423;
case 0x593425:c.instructions+=94;goto B593425;
case 0x593428:c.instructions+=93;goto B593428;
case 0x59342a:c.instructions+=92;goto B59342a;
case 0x59342e:c.instructions+=91;goto B59342e;
case 0x593432:c.instructions+=90;goto B593432;
case 0x593435:c.instructions+=89;goto B593435;
case 0x593439:c.instructions+=88;goto B593439;
case 0x59343d:c.instructions+=87;goto B59343d;
case 0x593440:c.instructions+=86;goto B593440;
case 0x593446:c.instructions+=85;goto B593446;
case 0x59344a:c.instructions+=84;goto B59344a;
case 0x593450:c.instructions+=83;goto B593450;
case 0x593454:c.instructions+=82;goto B593454;
case 0x593458:c.instructions+=81;goto B593458;
case 0x59345c:c.instructions+=80;goto B59345c;
case 0x593460:c.instructions+=79;goto B593460;
case 0x593464:c.instructions+=78;goto B593464;
case 0x593468:c.instructions+=77;goto B593468;
case 0x59346c:c.instructions+=76;goto B59346c;
case 0x593470:c.instructions+=75;goto B593470;
case 0x593474:c.instructions+=74;goto B593474;
case 0x593478:c.instructions+=73;goto B593478;
case 0x59347c:c.instructions+=72;goto B59347c;
case 0x593482:c.instructions+=71;goto B593482;
case 0x593484:c.instructions+=70;goto B593484;
case 0x593485:c.instructions+=69;goto B593485;
case 0x59348b:c.instructions+=68;goto B59348b;
case 0x59348e:c.instructions+=67;goto B59348e;
case 0x593490:c.instructions+=66;goto B593490;
case 0x593493:c.instructions+=65;goto B593493;
case 0x593495:c.instructions+=64;goto B593495;
case 0x593499:c.instructions+=63;goto B593499;
case 0x59349d:c.instructions+=62;goto B59349d;
case 0x5934a0:c.instructions+=61;goto B5934a0;
case 0x5934a4:c.instructions+=60;goto B5934a4;
case 0x5934a8:c.instructions+=59;goto B5934a8;
case 0x5934ab:c.instructions+=58;goto B5934ab;
case 0x5934b1:c.instructions+=57;goto B5934b1;
case 0x5934b5:c.instructions+=56;goto B5934b5;
case 0x5934bb:c.instructions+=55;goto B5934bb;
case 0x5934bf:c.instructions+=54;goto B5934bf;
case 0x5934c3:c.instructions+=53;goto B5934c3;
case 0x5934c7:c.instructions+=52;goto B5934c7;
case 0x5934cb:c.instructions+=51;goto B5934cb;
case 0x5934cf:c.instructions+=50;goto B5934cf;
case 0x5934d3:c.instructions+=49;goto B5934d3;
case 0x5934d7:c.instructions+=48;goto B5934d7;
case 0x5934db:c.instructions+=47;goto B5934db;
case 0x5934df:c.instructions+=46;goto B5934df;
case 0x5934e3:c.instructions+=45;goto B5934e3;
case 0x5934e7:c.instructions+=44;goto B5934e7;
case 0x5934ed:c.instructions+=43;goto B5934ed;
case 0x5934ef:c.instructions+=42;goto B5934ef;
case 0x5934f5:c.instructions+=41;goto B5934f5;
case 0x5934f8:c.instructions+=40;goto B5934f8;
case 0x5934fa:c.instructions+=39;goto B5934fa;
case 0x5934fd:c.instructions+=38;goto B5934fd;
case 0x5934ff:c.instructions+=37;goto B5934ff;
case 0x593503:c.instructions+=36;goto B593503;
case 0x593507:c.instructions+=35;goto B593507;
case 0x59350a:c.instructions+=34;goto B59350a;
case 0x59350e:c.instructions+=33;goto B59350e;
case 0x593512:c.instructions+=32;goto B593512;
case 0x593515:c.instructions+=31;goto B593515;
case 0x59351b:c.instructions+=30;goto B59351b;
case 0x59351f:c.instructions+=29;goto B59351f;
case 0x593525:c.instructions+=28;goto B593525;
case 0x593529:c.instructions+=27;goto B593529;
case 0x59352d:c.instructions+=26;goto B59352d;
case 0x593531:c.instructions+=25;goto B593531;
case 0x593535:c.instructions+=24;goto B593535;
case 0x593539:c.instructions+=23;goto B593539;
case 0x59353d:c.instructions+=22;goto B59353d;
case 0x593541:c.instructions+=21;goto B593541;
case 0x593545:c.instructions+=20;goto B593545;
case 0x593549:c.instructions+=19;goto B593549;
case 0x59354d:c.instructions+=18;goto B59354d;
case 0x593551:c.instructions+=17;goto B593551;
case 0x593557:c.instructions+=16;goto B593557;
case 0x593559:c.instructions+=15;goto B593559;
case 0x59355f:c.instructions+=14;goto B59355f;
case 0x593560:c.instructions+=13;goto B593560;
case 0x593563:c.instructions+=12;goto B593563;
case 0x593565:c.instructions+=11;goto B593565;
case 0x593568:c.instructions+=10;goto B593568;
case 0x59356a:c.instructions+=9;goto B59356a;
case 0x59356e:c.instructions+=8;goto B59356e;
case 0x593572:c.instructions+=7;goto B593572;
case 0x593575:c.instructions+=6;goto B593575;
case 0x593579:c.instructions+=5;goto B593579;
case 0x59357d:c.instructions+=4;goto B59357d;
case 0x593580:c.instructions+=3;goto B593580;
case 0x593582:c.instructions+=2;goto B593582;
case 0x593583:c.instructions+=1;goto B593583;
case 0x593590:goto L593590;
case 0x593591:c.instructions+=10;goto B593591;
case 0x593593:c.instructions+=9;goto B593593;
case 0x593596:c.instructions+=8;goto B593596;
case 0x593599:c.instructions+=7;goto B593599;
case 0x59359a:c.instructions+=6;goto B59359a;
case 0x59359c:c.instructions+=5;goto B59359c;
case 0x59359f:c.instructions+=4;goto B59359f;
case 0x5935a5:c.instructions+=3;goto B5935a5;
case 0x5935a7:c.instructions+=2;goto B5935a7;
case 0x5935aa:c.instructions+=1;goto B5935aa;
case 0x5935ac:goto L5935ac;
case 0x5935ae:c.instructions+=1;goto B5935ae;
case 0x5935b1:goto L5935b1;
case 0x5935b4:c.instructions+=11;goto B5935b4;
case 0x5935b7:c.instructions+=10;goto B5935b7;
case 0x5935b9:c.instructions+=9;goto B5935b9;
case 0x5935bc:c.instructions+=8;goto B5935bc;
case 0x5935be:c.instructions+=7;goto B5935be;
case 0x5935c1:c.instructions+=6;goto B5935c1;
case 0x5935c3:c.instructions+=5;goto B5935c3;
case 0x5935c6:c.instructions+=4;goto B5935c6;
case 0x5935c7:c.instructions+=3;goto B5935c7;
case 0x5935c9:c.instructions+=2;goto B5935c9;
case 0x5935ca:c.instructions+=1;goto B5935ca;
case 0x5935cd:goto L5935cd;
case 0x5935d0:c.instructions+=5;goto B5935d0;
case 0x5935d2:c.instructions+=4;goto B5935d2;
case 0x5935d5:c.instructions+=3;goto B5935d5;
case 0x5935d8:c.instructions+=2;goto B5935d8;
case 0x5935dc:c.instructions+=1;goto B5935dc;
case 0x5935df:goto L5935df;
case 0x5935e2:c.instructions+=18;goto B5935e2;
case 0x5935e8:c.instructions+=17;goto B5935e8;
case 0x5935eb:c.instructions+=16;goto B5935eb;
case 0x5935ee:c.instructions+=15;goto B5935ee;
case 0x5935f2:c.instructions+=14;goto B5935f2;
case 0x5935f5:c.instructions+=13;goto B5935f5;
case 0x5935f7:c.instructions+=12;goto B5935f7;
case 0x5935fb:c.instructions+=11;goto B5935fb;
case 0x5935fd:c.instructions+=10;goto B5935fd;
case 0x5935fe:c.instructions+=9;goto B5935fe;
case 0x593601:c.instructions+=8;goto B593601;
case 0x593602:c.instructions+=7;goto B593602;
case 0x593606:c.instructions+=6;goto B593606;
case 0x593608:c.instructions+=5;goto B593608;
case 0x593609:c.instructions+=4;goto B593609;
case 0x59360d:c.instructions+=3;goto B59360d;
case 0x59360e:c.instructions+=2;goto B59360e;
case 0x593612:c.instructions+=1;goto B593612;
case 0x593617:goto L593617;
case 0x59361a:c.instructions+=4;goto B59361a;
case 0x59361b:c.instructions+=3;goto B59361b;
case 0x59361d:c.instructions+=2;goto B59361d;
case 0x59361e:c.instructions+=1;goto B59361e;
case 0x593630:goto L593630;
case 0x593631:c.instructions+=15;goto B593631;
case 0x593633:c.instructions+=14;goto B593633;
case 0x593636:c.instructions+=13;goto B593636;
case 0x593639:c.instructions+=12;goto B593639;
case 0x59363a:c.instructions+=11;goto B59363a;
case 0x59363b:c.instructions+=10;goto B59363b;
case 0x59363e:c.instructions+=9;goto B59363e;
case 0x593640:c.instructions+=8;goto B593640;
case 0x593642:c.instructions+=7;goto B593642;
case 0x593643:c.instructions+=6;goto B593643;
case 0x593647:c.instructions+=5;goto B593647;
case 0x593648:c.instructions+=4;goto B593648;
case 0x59364c:c.instructions+=3;goto B59364c;
case 0x59364d:c.instructions+=2;goto B59364d;
case 0x59364f:c.instructions+=1;goto B59364f;
case 0x593652:goto L593652;
case 0x593653:c.instructions+=4;goto B593653;
case 0x593657:c.instructions+=3;goto B593657;
case 0x593658:c.instructions+=2;goto B593658;
case 0x59365a:c.instructions+=1;goto B59365a;
case 0x59365f:goto L59365f;
case 0x593662:c.instructions+=2;goto B593662;
case 0x593664:c.instructions+=1;goto B593664;
case 0x593666:goto L593666;
case 0x59366c:c.instructions+=23;goto B59366c;
case 0x593670:c.instructions+=22;goto B593670;
case 0x593674:c.instructions+=21;goto B593674;
case 0x593678:c.instructions+=20;goto B593678;
case 0x59367a:c.instructions+=19;goto B59367a;
case 0x59367b:c.instructions+=18;goto B59367b;
case 0x59367f:c.instructions+=17;goto B59367f;
case 0x593683:c.instructions+=16;goto B593683;
case 0x593685:c.instructions+=15;goto B593685;
case 0x593689:c.instructions+=14;goto B593689;
case 0x59368d:c.instructions+=13;goto B59368d;
case 0x59368f:c.instructions+=12;goto B59368f;
case 0x593693:c.instructions+=11;goto B593693;
case 0x593695:c.instructions+=10;goto B593695;
case 0x593699:c.instructions+=9;goto B593699;
case 0x59369d:c.instructions+=8;goto B59369d;
case 0x5936a0:c.instructions+=7;goto B5936a0;
case 0x5936a2:c.instructions+=6;goto B5936a2;
case 0x5936a5:c.instructions+=5;goto B5936a5;
case 0x5936a8:c.instructions+=4;goto B5936a8;
case 0x5936ab:c.instructions+=3;goto B5936ab;
case 0x5936ae:c.instructions+=2;goto B5936ae;
case 0x5936af:c.instructions+=1;goto B5936af;
case 0x5936b4:goto L5936b4;
case 0x5936b8:c.instructions+=14;goto B5936b8;
case 0x5936bb:c.instructions+=13;goto B5936bb;
case 0x5936bf:c.instructions+=12;goto B5936bf;
case 0x5936c3:c.instructions+=11;goto B5936c3;
case 0x5936c5:c.instructions+=10;goto B5936c5;
case 0x5936c8:c.instructions+=9;goto B5936c8;
case 0x5936cb:c.instructions+=8;goto B5936cb;
case 0x5936ce:c.instructions+=7;goto B5936ce;
case 0x5936d1:c.instructions+=6;goto B5936d1;
case 0x5936d3:c.instructions+=5;goto B5936d3;
case 0x5936d4:c.instructions+=4;goto B5936d4;
case 0x5936d5:c.instructions+=3;goto B5936d5;
case 0x5936d7:c.instructions+=2;goto B5936d7;
case 0x5936d8:c.instructions+=1;goto B5936d8;
case 0x5936db:goto L5936db;
case 0x5936dd:c.instructions+=9;goto B5936dd;
case 0x5936e1:c.instructions+=8;goto B5936e1;
case 0x5936e2:c.instructions+=7;goto B5936e2;
case 0x5936e6:c.instructions+=6;goto B5936e6;
case 0x5936e7:c.instructions+=5;goto B5936e7;
case 0x5936eb:c.instructions+=4;goto B5936eb;
case 0x5936ec:c.instructions+=3;goto B5936ec;
case 0x5936ed:c.instructions+=2;goto B5936ed;
case 0x5936ef:c.instructions+=1;goto B5936ef;
case 0x5936f2:goto L5936f2;
case 0x5936f3:c.instructions+=4;goto B5936f3;
case 0x5936f4:c.instructions+=3;goto B5936f4;
case 0x5936f6:c.instructions+=2;goto B5936f6;
case 0x5936f7:c.instructions+=1;goto B5936f7;
case 0x593700:goto L593700;
case 0x593703:c.instructions+=2;goto B593703;
case 0x593705:c.instructions+=1;goto B593705;
case 0x593707:goto L593707;
case 0x59370a:c.instructions+=2;goto B59370a;
case 0x59370c:c.instructions+=1;goto B59370c;
case 0x59370f:goto L59370f;
case 0x593710:goto L593710;
case 0x593711:c.instructions+=4;goto B593711;
case 0x593713:c.instructions+=3;goto B593713;
case 0x593716:c.instructions+=2;goto B593716;
case 0x593718:c.instructions+=1;goto B593718;
case 0x59371a:goto L59371a;
case 0x59371d:c.instructions+=21;goto B59371d;
case 0x593723:c.instructions+=20;goto B593723;
case 0x593729:c.instructions+=19;goto B593729;
case 0x59372f:c.instructions+=18;goto B59372f;
case 0x593734:c.instructions+=17;goto B593734;
case 0x593738:c.instructions+=16;goto B593738;
case 0x59373a:c.instructions+=15;goto B59373a;
case 0x59373d:c.instructions+=14;goto B59373d;
case 0x59373f:c.instructions+=13;goto B59373f;
case 0x593742:c.instructions+=12;goto B593742;
case 0x593745:c.instructions+=11;goto B593745;
case 0x59374b:c.instructions+=10;goto B59374b;
case 0x593751:c.instructions+=9;goto B593751;
case 0x593757:c.instructions+=8;goto B593757;
case 0x59375b:c.instructions+=7;goto B59375b;
case 0x593761:c.instructions+=6;goto B593761;
case 0x593763:c.instructions+=5;goto B593763;
case 0x593766:c.instructions+=4;goto B593766;
case 0x593768:c.instructions+=3;goto B593768;
case 0x593769:c.instructions+=2;goto B593769;
case 0x59376c:c.instructions+=1;goto B59376c;
case 0x59376f:goto L59376f;
case 0x593771:c.instructions+=2;goto B593771;
case 0x593773:c.instructions+=1;goto B593773;
case 0x593776:goto L593776;
case 0x593779:c.instructions+=10;goto B593779;
case 0x59377c:c.instructions+=9;goto B59377c;
case 0x59377e:c.instructions+=8;goto B59377e;
case 0x593782:c.instructions+=7;goto B593782;
case 0x593784:c.instructions+=6;goto B593784;
case 0x593787:c.instructions+=5;goto B593787;
case 0x593789:c.instructions+=4;goto B593789;
case 0x59378b:c.instructions+=3;goto B59378b;
case 0x59378e:c.instructions+=2;goto B59378e;
case 0x593790:c.instructions+=1;goto B593790;
case 0x593793:goto L593793;
case 0x593796:c.instructions+=9;goto B593796;
case 0x593799:c.instructions+=8;goto B593799;
case 0x59379b:c.instructions+=7;goto B59379b;
case 0x59379f:c.instructions+=6;goto B59379f;
case 0x5937a1:c.instructions+=5;goto B5937a1;
case 0x5937a4:c.instructions+=4;goto B5937a4;
case 0x5937a6:c.instructions+=3;goto B5937a6;
case 0x5937a7:c.instructions+=2;goto B5937a7;
case 0x5937aa:c.instructions+=1;goto B5937aa;
case 0x5937b0:goto L5937b0;
case 0x5937b3:c.instructions+=11;goto B5937b3;
case 0x5937b4:c.instructions+=10;goto B5937b4;
case 0x5937b6:c.instructions+=9;goto B5937b6;
case 0x5937bc:c.instructions+=8;goto B5937bc;
case 0x5937bf:c.instructions+=7;goto B5937bf;
case 0x5937c1:c.instructions+=6;goto B5937c1;
case 0x5937c5:c.instructions+=5;goto B5937c5;
case 0x5937c6:c.instructions+=4;goto B5937c6;
case 0x5937ca:c.instructions+=3;goto B5937ca;
case 0x5937cc:c.instructions+=2;goto B5937cc;
case 0x5937d0:c.instructions+=1;goto B5937d0;
case 0x5937d3:goto L5937d3;
case 0x5937d6:c.instructions+=13;goto B5937d6;
case 0x5937d9:c.instructions+=12;goto B5937d9;
case 0x5937dc:c.instructions+=11;goto B5937dc;
case 0x5937df:c.instructions+=10;goto B5937df;
case 0x5937e2:c.instructions+=9;goto B5937e2;
case 0x5937e4:c.instructions+=8;goto B5937e4;
case 0x5937e6:c.instructions+=7;goto B5937e6;
case 0x5937e9:c.instructions+=6;goto B5937e9;
case 0x5937eb:c.instructions+=5;goto B5937eb;
case 0x5937ef:c.instructions+=4;goto B5937ef;
case 0x5937f5:c.instructions+=3;goto B5937f5;
case 0x5937f7:c.instructions+=2;goto B5937f7;
case 0x5937fa:c.instructions+=1;goto B5937fa;
case 0x5937fc:goto L5937fc;
case 0x593804:goto L593804;
case 0x593808:c.instructions+=7;goto B593808;
case 0x59380a:c.instructions+=6;goto B59380a;
case 0x59380e:c.instructions+=5;goto B59380e;
case 0x593810:c.instructions+=4;goto B593810;
case 0x593816:c.instructions+=3;goto B593816;
case 0x593818:c.instructions+=2;goto B593818;
case 0x59381c:c.instructions+=1;goto B59381c;
case 0x59381f:goto L59381f;
case 0x593822:c.instructions+=14;goto B593822;
case 0x593825:c.instructions+=13;goto B593825;
case 0x593828:c.instructions+=12;goto B593828;
case 0x59382b:c.instructions+=11;goto B59382b;
case 0x59382d:c.instructions+=10;goto B59382d;
case 0x59382f:c.instructions+=9;goto B59382f;
case 0x593832:c.instructions+=8;goto B593832;
case 0x593834:c.instructions+=7;goto B593834;
case 0x593837:c.instructions+=6;goto B593837;
case 0x59383b:c.instructions+=5;goto B59383b;
case 0x59383d:c.instructions+=4;goto B59383d;
case 0x593843:c.instructions+=3;goto B593843;
case 0x593845:c.instructions+=2;goto B593845;
case 0x593848:c.instructions+=1;goto B593848;
case 0x59384a:goto L59384a;
case 0x593850:c.instructions+=1;goto B593850;
case 0x593852:goto L593852;
case 0x593856:goto L593856;
case 0x59385a:c.instructions+=15;goto B59385a;
case 0x59385c:c.instructions+=14;goto B59385c;
case 0x59385e:c.instructions+=13;goto B59385e;
case 0x593862:c.instructions+=12;goto B593862;
case 0x593866:c.instructions+=11;goto B593866;
case 0x593868:c.instructions+=10;goto B593868;
case 0x59386a:c.instructions+=9;goto B59386a;
case 0x59386c:c.instructions+=8;goto B59386c;
case 0x59386e:c.instructions+=7;goto B59386e;
case 0x593870:c.instructions+=6;goto B593870;
case 0x593872:c.instructions+=5;goto B593872;
case 0x593874:c.instructions+=4;goto B593874;
case 0x593876:c.instructions+=3;goto B593876;
case 0x593878:c.instructions+=2;goto B593878;
case 0x59387b:c.instructions+=1;goto B59387b;
case 0x59387d:goto L59387d;
case 0x593880:c.instructions+=6;goto B593880;
case 0x593882:c.instructions+=5;goto B593882;
case 0x593888:c.instructions+=4;goto B593888;
case 0x593889:c.instructions+=3;goto B593889;
case 0x59388b:c.instructions+=2;goto B59388b;
case 0x59388e:c.instructions+=1;goto B59388e;
case 0x593891:goto L593891;
case 0x593892:c.instructions+=2;goto B593892;
case 0x593894:c.instructions+=1;goto B593894;
case 0x593899:goto L593899;
case 0x59389c:c.instructions+=3;goto B59389c;
case 0x59389e:c.instructions+=2;goto B59389e;
case 0x5938a1:c.instructions+=1;goto B5938a1;
case 0x5938a3:goto L5938a3;
case 0x5938a4:c.instructions+=4;goto B5938a4;
case 0x5938a6:c.instructions+=3;goto B5938a6;
case 0x5938a7:c.instructions+=2;goto B5938a7;
case 0x5938aa:c.instructions+=1;goto B5938aa;
case 0x5938ad:goto L5938ad;
case 0x5938ae:c.instructions+=4;goto B5938ae;
case 0x5938b3:c.instructions+=3;goto B5938b3;
case 0x5938b4:c.instructions+=2;goto B5938b4;
case 0x5938b7:c.instructions+=1;goto B5938b7;
case 0x5938c0:goto L5938c0;
case 0x5938c3:c.instructions+=4;goto B5938c3;
case 0x5938c5:c.instructions+=3;goto B5938c5;
case 0x5938cc:c.instructions+=2;goto B5938cc;
case 0x5938d3:c.instructions+=1;goto B5938d3;
case 0x5938d5:goto L5938d5;
case 0x5938db:c.instructions+=3;goto B5938db;
case 0x5938de:c.instructions+=2;goto B5938de;
case 0x5938df:c.instructions+=1;goto B5938df;
case 0x5938e1:goto L5938e1;
case 0x5938e4:c.instructions+=1;goto B5938e4;
case 0x5938e6:goto L5938e6;
case 0x5938e9:c.instructions+=2;goto B5938e9;
case 0x5938eb:c.instructions+=1;goto B5938eb;
case 0x5938ed:goto L5938ed;
case 0x5938f0:c.instructions+=1;goto B5938f0;
case 0x5938f2:goto L5938f2;
case 0x5938f4:goto L5938f4;
case 0x5938f6:c.instructions+=2;goto B5938f6;
case 0x5938f9:c.instructions+=1;goto B5938f9;
case 0x5938fb:goto L5938fb;
case 0x5938fe:c.instructions+=3;goto B5938fe;
case 0x593901:c.instructions+=2;goto B593901;
case 0x593904:c.instructions+=1;goto B593904;
case 0x593905:goto L593905;
case 0x593907:c.instructions+=3;goto B593907;
case 0x59390a:c.instructions+=2;goto B59390a;
case 0x59390d:c.instructions+=1;goto B59390d;
case 0x59390e:goto L59390e;
case 0x593911:c.instructions+=2;goto B593911;
case 0x593913:c.instructions+=1;goto B593913;
case 0x593915:goto L593915;
case 0x593918:c.instructions+=1;goto B593918;
case 0x59391a:goto L59391a;
case 0x59391c:goto L59391c;
case 0x59391e:c.instructions+=2;goto B59391e;
case 0x593921:c.instructions+=1;goto B593921;
case 0x593923:goto L593923;
case 0x593926:c.instructions+=3;goto B593926;
case 0x593929:c.instructions+=2;goto B593929;
case 0x59392c:c.instructions+=1;goto B59392c;
case 0x59392d:goto L59392d;
case 0x59392f:c.instructions+=2;goto B59392f;
case 0x593932:c.instructions+=1;goto B593932;
case 0x593935:goto L593935;
case 0x593940:goto L593940;
case 0x593944:c.instructions+=4;goto B593944;
case 0x593946:c.instructions+=3;goto B593946;
case 0x593947:c.instructions+=2;goto B593947;
case 0x593949:c.instructions+=1;goto B593949;
case 0x59394b:goto L59394b;
case 0x59394e:c.instructions+=2;goto B59394e;
case 0x593950:c.instructions+=1;goto B593950;
case 0x593952:goto L593952;
case 0x593958:c.instructions+=1;goto B593958;
case 0x59395a:goto L59395a;
case 0x59395c:goto L59395c;
case 0x593962:c.instructions+=2;goto B593962;
case 0x593963:c.instructions+=1;goto B593963;
case 0x593968:goto L593968;
case 0x59396a:c.instructions+=1;goto B59396a;
case 0x59396f:goto L59396f;
case 0x593973:c.instructions+=2;goto B593973;
case 0x593974:c.instructions+=1;goto B593974;
case 0x593980:goto L593980;
case 0x593981:c.instructions+=7;goto B593981;
case 0x593985:c.instructions+=6;goto B593985;
case 0x593986:c.instructions+=5;goto B593986;
case 0x593988:c.instructions+=4;goto B593988;
case 0x59398e:c.instructions+=3;goto B59398e;
case 0x593990:c.instructions+=2;goto B593990;
case 0x593992:c.instructions+=1;goto B593992;
case 0x593994:goto L593994;
case 0x593996:c.instructions+=1;goto B593996;
case 0x593998:goto L593998;
case 0x59399c:c.instructions+=1;goto B59399c;
case 0x59399e:goto L59399e;
case 0x5939a0:c.instructions+=2;goto B5939a0;
case 0x5939a2:c.instructions+=1;goto B5939a2;
case 0x5939a8:goto L5939a8;
case 0x5939ab:c.instructions+=1;goto B5939ab;
case 0x5939ad:goto L5939ad;
case 0x5939af:c.instructions+=3;goto B5939af;
case 0x5939b0:c.instructions+=2;goto B5939b0;
case 0x5939b2:c.instructions+=1;goto B5939b2;
case 0x5939b5:goto L5939b5;
case 0x5939b7:c.instructions+=1;goto B5939b7;
case 0x5939b9:goto L5939b9;
case 0x5939ba:c.instructions+=2;goto B5939ba;
case 0x5939bc:c.instructions+=1;goto B5939bc;
case 0x5939c1:goto L5939c1;
case 0x5939c3:c.instructions+=1;goto B5939c3;
case 0x5939c5:goto L5939c5;
case 0x5939c8:c.instructions+=2;goto B5939c8;
case 0x5939ca:c.instructions+=1;goto B5939ca;
case 0x5939cc:goto L5939cc;
case 0x5939cf:c.instructions+=2;goto B5939cf;
case 0x5939d2:c.instructions+=1;goto B5939d2;
case 0x5939d4:goto L5939d4;
case 0x5939d6:goto L5939d6;
case 0x5939db:c.instructions+=1;goto B5939db;
case 0x5939dd:goto L5939dd;
case 0x5939df:goto L5939df;
case 0x5939e5:c.instructions+=2;goto B5939e5;
case 0x5939e7:c.instructions+=1;goto B5939e7;
case 0x5939e9:goto L5939e9;
case 0x5939eb:c.instructions+=1;goto B5939eb;
case 0x5939ed:goto L5939ed;
case 0x5939f0:c.instructions+=2;goto B5939f0;
case 0x5939f2:c.instructions+=1;goto B5939f2;
case 0x5939f4:goto L5939f4;
case 0x5939f6:goto L5939f6;
case 0x5939f7:c.instructions+=2;goto B5939f7;
case 0x5939f8:c.instructions+=1;goto B5939f8;
case 0x593a00:goto L593a00;
case 0x593a01:c.instructions+=3;goto B593a01;
case 0x593a04:c.instructions+=2;goto B593a04;
case 0x593a06:c.instructions+=1;goto B593a06;
case 0x593a08:goto L593a08;
case 0x593a0e:c.instructions+=2;goto B593a0e;
case 0x593a0f:c.instructions+=1;goto B593a0f;
case 0x593a10:goto L593a10;
case 0x593a16:c.instructions+=7;goto B593a16;
case 0x593a1c:c.instructions+=6;goto B593a1c;
case 0x593a20:c.instructions+=5;goto B593a20;
case 0x593a26:c.instructions+=4;goto B593a26;
case 0x593a2a:c.instructions+=3;goto B593a2a;
case 0x593a2c:c.instructions+=2;goto B593a2c;
case 0x593a2f:c.instructions+=1;goto B593a2f;
case 0x593a31:goto L593a31;
case 0x593a33:c.instructions+=1;goto B593a33;
case 0x593a37:goto L593a37;
case 0x593a38:c.instructions+=1;goto B593a38;
case 0x593a40:goto L593a40;
case 0x593a41:c.instructions+=3;goto B593a41;
case 0x593a47:c.instructions+=2;goto B593a47;
case 0x593a4b:c.instructions+=1;goto B593a4b;
case 0x593a4d:goto L593a4d;
case 0x593a53:c.instructions+=1;goto B593a53;
case 0x593a55:goto L593a55;
case 0x593a5b:goto L593a5b;
case 0x593a5e:c.instructions+=4;goto B593a5e;
case 0x593a64:c.instructions+=3;goto B593a64;
case 0x593a66:c.instructions+=2;goto B593a66;
case 0x593a6c:c.instructions+=1;goto B593a6c;
case 0x593a6e:goto L593a6e;
case 0x593a74:goto L593a74;
case 0x593a77:c.instructions+=61;goto B593a77;
case 0x593a78:c.instructions+=60;goto B593a78;
case 0x593a7b:c.instructions+=59;goto B593a7b;
case 0x593a7e:c.instructions+=58;goto B593a7e;
case 0x593a80:c.instructions+=57;goto B593a80;
case 0x593a86:c.instructions+=56;goto B593a86;
case 0x593a88:c.instructions+=55;goto B593a88;
case 0x593a8c:c.instructions+=54;goto B593a8c;
case 0x593a8e:c.instructions+=53;goto B593a8e;
case 0x593a90:c.instructions+=52;goto B593a90;
case 0x593a92:c.instructions+=51;goto B593a92;
case 0x593a95:c.instructions+=50;goto B593a95;
case 0x593a97:c.instructions+=49;goto B593a97;
case 0x593a9a:c.instructions+=48;goto B593a9a;
case 0x593a9e:c.instructions+=47;goto B593a9e;
case 0x593aa0:c.instructions+=46;goto B593aa0;
case 0x593aa3:c.instructions+=45;goto B593aa3;
case 0x593aa6:c.instructions+=44;goto B593aa6;
case 0x593aa9:c.instructions+=43;goto B593aa9;
case 0x593aad:c.instructions+=42;goto B593aad;
case 0x593ab0:c.instructions+=41;goto B593ab0;
case 0x593ab2:c.instructions+=40;goto B593ab2;
case 0x593ab5:c.instructions+=39;goto B593ab5;
case 0x593abb:c.instructions+=38;goto B593abb;
case 0x593abd:c.instructions+=37;goto B593abd;
case 0x593abf:c.instructions+=36;goto B593abf;
case 0x593ac5:c.instructions+=35;goto B593ac5;
case 0x593ac7:c.instructions+=34;goto B593ac7;
case 0x593acd:c.instructions+=33;goto B593acd;
case 0x593ad1:c.instructions+=32;goto B593ad1;
case 0x593ad3:c.instructions+=31;goto B593ad3;
case 0x593ad9:c.instructions+=30;goto B593ad9;
case 0x593adc:c.instructions+=29;goto B593adc;
case 0x593adf:c.instructions+=28;goto B593adf;
case 0x593ae3:c.instructions+=27;goto B593ae3;
case 0x593ae6:c.instructions+=26;goto B593ae6;
case 0x593ae8:c.instructions+=25;goto B593ae8;
case 0x593aeb:c.instructions+=24;goto B593aeb;
case 0x593af1:c.instructions+=23;goto B593af1;
case 0x593af3:c.instructions+=22;goto B593af3;
case 0x593af5:c.instructions+=21;goto B593af5;
case 0x593afb:c.instructions+=20;goto B593afb;
case 0x593afd:c.instructions+=19;goto B593afd;
case 0x593b03:c.instructions+=18;goto B593b03;
case 0x593b07:c.instructions+=17;goto B593b07;
case 0x593b09:c.instructions+=16;goto B593b09;
case 0x593b0f:c.instructions+=15;goto B593b0f;
case 0x593b12:c.instructions+=14;goto B593b12;
case 0x593b16:c.instructions+=13;goto B593b16;
case 0x593b18:c.instructions+=12;goto B593b18;
case 0x593b1b:c.instructions+=11;goto B593b1b;
case 0x593b1e:c.instructions+=10;goto B593b1e;
case 0x593b21:c.instructions+=9;goto B593b21;
case 0x593b23:c.instructions+=8;goto B593b23;
case 0x593b29:c.instructions+=7;goto B593b29;
case 0x593b2f:c.instructions+=6;goto B593b2f;
case 0x593b31:c.instructions+=5;goto B593b31;
case 0x593b37:c.instructions+=4;goto B593b37;
case 0x593b3d:c.instructions+=3;goto B593b3d;
case 0x593b3e:c.instructions+=2;goto B593b3e;
case 0x593b3f:c.instructions+=1;goto B593b3f;
case 0x593b40:goto L593b40;
case 0x593b43:c.instructions+=2;goto B593b43;
case 0x593b45:c.instructions+=1;goto B593b45;
case 0x593b47:goto L593b47;
case 0x593b4a:c.instructions+=2;goto B593b4a;
case 0x593b4d:c.instructions+=1;goto B593b4d;
case 0x593b4e:goto L593b4e;
case 0x593b54:c.instructions+=2;goto B593b54;
case 0x593b57:c.instructions+=1;goto B593b57;
case 0x593b60:goto L593b60;
case 0x593b66:c.instructions+=1;goto B593b66;
case 0x593b70:goto L593b70;
case 0x593b73:c.instructions+=2;goto B593b73;
case 0x593b75:c.instructions+=1;goto B593b75;
case 0x593b77:goto L593b77;
case 0x593b7a:c.instructions+=2;goto B593b7a;
case 0x593b7f:c.instructions+=1;goto B593b7f;
case 0x593b80:goto L593b80;
case 0x593b86:c.instructions+=2;goto B593b86;
case 0x593b89:c.instructions+=1;goto B593b89;
case 0x593b90:goto L593b90;
case 0x593b93:c.instructions+=2;goto B593b93;
case 0x593b95:c.instructions+=1;goto B593b95;
case 0x593b97:goto L593b97;
case 0x593b9a:c.instructions+=2;goto B593b9a;
case 0x593b9f:c.instructions+=1;goto B593b9f;
case 0x593ba0:goto L593ba0;
case 0x593ba6:c.instructions+=2;goto B593ba6;
case 0x593bab:c.instructions+=1;goto B593bab;
case 0x593bb0:goto L593bb0;
case 0x593bb3:c.instructions+=2;goto B593bb3;
case 0x593bb5:c.instructions+=1;goto B593bb5;
case 0x593bb7:goto L593bb7;
case 0x593bba:c.instructions+=2;goto B593bba;
case 0x593bbd:c.instructions+=1;goto B593bbd;
case 0x593bbe:goto L593bbe;
case 0x593bc4:c.instructions+=2;goto B593bc4;
case 0x593bc9:c.instructions+=1;goto B593bc9;
case 0x593bd0:goto L593bd0;
case 0x593bd3:c.instructions+=2;goto B593bd3;
case 0x593bd5:c.instructions+=1;goto B593bd5;
case 0x593bd7:goto L593bd7;
case 0x593bda:c.instructions+=2;goto B593bda;
case 0x593bdf:c.instructions+=1;goto B593bdf;
case 0x593be0:goto L593be0;
case 0x593be6:c.instructions+=2;goto B593be6;
case 0x593beb:c.instructions+=1;goto B593beb;
case 0x593bf0:goto L593bf0;
case 0x593bf1:c.instructions+=8;goto B593bf1;
case 0x593bf3:c.instructions+=7;goto B593bf3;
case 0x593bf6:c.instructions+=6;goto B593bf6;
case 0x593bf9:c.instructions+=5;goto B593bf9;
case 0x593bff:c.instructions+=4;goto B593bff;
case 0x593c00:c.instructions+=3;goto B593c00;
case 0x593c06:c.instructions+=2;goto B593c06;
case 0x593c08:c.instructions+=1;goto B593c08;
case 0x593c0a:goto L593c0a;
case 0x593c0d:c.instructions+=5;goto B593c0d;
case 0x593c10:c.instructions+=4;goto B593c10;
case 0x593c11:c.instructions+=3;goto B593c11;
case 0x593c15:c.instructions+=2;goto B593c15;
case 0x593c16:c.instructions+=1;goto B593c16;
case 0x593c1b:goto L593c1b;
case 0x593c1e:c.instructions+=6;goto B593c1e;
case 0x593c1f:c.instructions+=5;goto B593c1f;
case 0x593c23:c.instructions+=4;goto B593c23;
case 0x593c24:c.instructions+=3;goto B593c24;
case 0x593c28:c.instructions+=2;goto B593c28;
case 0x593c29:c.instructions+=1;goto B593c29;
case 0x593c2e:goto L593c2e;
case 0x593c34:c.instructions+=7;goto B593c34;
case 0x593c37:c.instructions+=6;goto B593c37;
case 0x593c3a:c.instructions+=5;goto B593c3a;
case 0x593c3e:c.instructions+=4;goto B593c3e;
case 0x593c40:c.instructions+=3;goto B593c40;
case 0x593c43:c.instructions+=2;goto B593c43;
case 0x593c44:c.instructions+=1;goto B593c44;
case 0x593c49:goto L593c49;
case 0x593c4a:c.instructions+=3;goto B593c4a;
case 0x593c4c:c.instructions+=2;goto B593c4c;
case 0x593c4d:c.instructions+=1;goto B593c4d;
case 0x593c50:goto L593c50;
case 0x593c51:c.instructions+=9;goto B593c51;
case 0x593c53:c.instructions+=8;goto B593c53;
case 0x593c56:c.instructions+=7;goto B593c56;
case 0x593c59:c.instructions+=6;goto B593c59;
case 0x593c5a:c.instructions+=5;goto B593c5a;
case 0x593c5c:c.instructions+=4;goto B593c5c;
case 0x593c62:c.instructions+=3;goto B593c62;
case 0x593c65:c.instructions+=2;goto B593c65;
case 0x593c67:c.instructions+=1;goto B593c67;
case 0x593c69:goto L593c69;
case 0x593c6c:c.instructions+=4;goto B593c6c;
case 0x593c72:c.instructions+=3;goto B593c72;
case 0x593c74:c.instructions+=2;goto B593c74;
case 0x593c77:c.instructions+=1;goto B593c77;
case 0x593c79:goto L593c79;
case 0x593c7c:c.instructions+=5;goto B593c7c;
case 0x593c7f:c.instructions+=4;goto B593c7f;
case 0x593c80:c.instructions+=3;goto B593c80;
case 0x593c84:c.instructions+=2;goto B593c84;
case 0x593c85:c.instructions+=1;goto B593c85;
case 0x593c8a:goto L593c8a;
case 0x593c8d:c.instructions+=6;goto B593c8d;
case 0x593c8e:c.instructions+=5;goto B593c8e;
case 0x593c92:c.instructions+=4;goto B593c92;
case 0x593c93:c.instructions+=3;goto B593c93;
case 0x593c97:c.instructions+=2;goto B593c97;
case 0x593c98:c.instructions+=1;goto B593c98;
case 0x593c9d:goto L593c9d;
case 0x593ca0:c.instructions+=6;goto B593ca0;
case 0x593ca3:c.instructions+=5;goto B593ca3;
case 0x593ca4:c.instructions+=4;goto B593ca4;
case 0x593ca8:c.instructions+=3;goto B593ca8;
case 0x593ca9:c.instructions+=2;goto B593ca9;
case 0x593caf:c.instructions+=1;goto B593caf;
case 0x593cb4:goto L593cb4;
case 0x593cb5:c.instructions+=3;goto B593cb5;
case 0x593cb7:c.instructions+=2;goto B593cb7;
case 0x593cb8:c.instructions+=1;goto B593cb8;
case 0x593cc0:goto L593cc0;
case 0x593cc1:c.instructions+=5;goto B593cc1;
case 0x593cc3:c.instructions+=4;goto B593cc3;
case 0x593cc7:c.instructions+=3;goto B593cc7;
case 0x593cca:c.instructions+=2;goto B593cca;
case 0x593ccc:c.instructions+=1;goto B593ccc;
case 0x593cce:goto L593cce;
case 0x593cd2:c.instructions+=2;goto B593cd2;
case 0x593cd3:c.instructions+=1;goto B593cd3;
case 0x593cd8:goto L593cd8;
case 0x593cdc:c.instructions+=7;goto B593cdc;
case 0x593cde:c.instructions+=6;goto B593cde;
case 0x593ce1:c.instructions+=5;goto B593ce1;
case 0x593ce3:c.instructions+=4;goto B593ce3;
case 0x593ce6:c.instructions+=3;goto B593ce6;
case 0x593ce9:c.instructions+=2;goto B593ce9;
case 0x593cea:c.instructions+=1;goto B593cea;
case 0x593ced:goto L593ced;
case 0x593cf0:c.instructions+=7;goto B593cf0;
case 0x593cf3:c.instructions+=6;goto B593cf3;
case 0x593cf6:c.instructions+=5;goto B593cf6;
case 0x593cf8:c.instructions+=4;goto B593cf8;
case 0x593cfc:c.instructions+=3;goto B593cfc;
case 0x593cfd:c.instructions+=2;goto B593cfd;
case 0x593d01:c.instructions+=1;goto B593d01;
case 0x593d06:goto L593d06;
case 0x593d07:c.instructions+=1;goto B593d07;
case 0x593d10:goto L593d10;
case 0x593d11:c.instructions+=7;goto B593d11;
case 0x593d12:c.instructions+=6;goto B593d12;
case 0x593d16:c.instructions+=5;goto B593d16;
case 0x593d18:c.instructions+=4;goto B593d18;
case 0x593d1d:c.instructions+=3;goto B593d1d;
case 0x593d1e:c.instructions+=2;goto B593d1e;
case 0x593d20:c.instructions+=1;goto B593d20;
case 0x593d25:goto L593d25;
case 0x593d28:c.instructions+=3;goto B593d28;
case 0x593d2a:c.instructions+=2;goto B593d2a;
case 0x593d2c:c.instructions+=1;goto B593d2c;
case 0x593d2e:goto L593d2e;
case 0x593d32:c.instructions+=2;goto B593d32;
case 0x593d33:c.instructions+=1;goto B593d33;
case 0x593d38:goto L593d38;
case 0x593d3c:c.instructions+=7;goto B593d3c;
case 0x593d3e:c.instructions+=6;goto B593d3e;
case 0x593d41:c.instructions+=5;goto B593d41;
case 0x593d44:c.instructions+=4;goto B593d44;
case 0x593d46:c.instructions+=3;goto B593d46;
case 0x593d48:c.instructions+=2;goto B593d48;
case 0x593d4b:c.instructions+=1;goto B593d4b;
case 0x593d50:goto L593d50;
case 0x593d51:c.instructions+=2;goto B593d51;
case 0x593d52:c.instructions+=1;goto B593d52;
case 0x593d55:goto L593d55;
case 0x593d58:c.instructions+=7;goto B593d58;
case 0x593d5b:c.instructions+=6;goto B593d5b;
case 0x593d5e:c.instructions+=5;goto B593d5e;
case 0x593d60:c.instructions+=4;goto B593d60;
case 0x593d64:c.instructions+=3;goto B593d64;
case 0x593d65:c.instructions+=2;goto B593d65;
case 0x593d69:c.instructions+=1;goto B593d69;
case 0x593d6e:goto L593d6e;
case 0x593d70:c.instructions+=1;goto B593d70;
case 0x593d75:goto L593d75;
case 0x593d76:c.instructions+=2;goto B593d76;
case 0x593d77:c.instructions+=1;goto B593d77;
case 0x593d80:goto L593d80;
case 0x593d85:c.instructions+=1;goto B593d85;
case 0x593d90:goto L593d90;
case 0x593d93:c.instructions+=2;goto B593d93;
case 0x593d97:c.instructions+=1;goto B593d97;
case 0x593da0:goto L593da0;
case 0x593da4:c.instructions+=2;goto B593da4;
case 0x593da6:c.instructions+=1;goto B593da6;
case 0x593da8:goto L593da8;
case 0x593daa:c.instructions+=2;goto B593daa;
case 0x593dac:c.instructions+=1;goto B593dac;
case 0x593dae:goto L593dae;
case 0x593db0:goto L593db0;
case 0x593db2:c.instructions+=4;goto B593db2;
case 0x593db7:c.instructions+=3;goto B593db7;
case 0x593db9:c.instructions+=2;goto B593db9;
case 0x593dbb:c.instructions+=1;goto B593dbb;
case 0x593dc0:goto L593dc0;
case 0x593dc3:c.instructions+=2;goto B593dc3;
case 0x593dc8:c.instructions+=1;goto B593dc8;
case 0x593dd0:goto L593dd0;
case 0x593dd5:c.instructions+=2;goto B593dd5;
case 0x593dd6:c.instructions+=1;goto B593dd6;
case 0x593ddb:goto L593ddb;
case 0x593dde:c.instructions+=2;goto B593dde;
case 0x593de8:c.instructions+=1;goto B593de8;
case 0x593df0:goto L593df0;
case 0x593df1:c.instructions+=18;goto B593df1;
case 0x593df3:c.instructions+=17;goto B593df3;
case 0x593df6:c.instructions+=16;goto B593df6;
case 0x593df9:c.instructions+=15;goto B593df9;
case 0x593dfa:c.instructions+=14;goto B593dfa;
case 0x593dfb:c.instructions+=13;goto B593dfb;
case 0x593dfd:c.instructions+=12;goto B593dfd;
case 0x593e00:c.instructions+=11;goto B593e00;
case 0x593e03:c.instructions+=10;goto B593e03;
case 0x593e06:c.instructions+=9;goto B593e06;
case 0x593e09:c.instructions+=8;goto B593e09;
case 0x593e0c:c.instructions+=7;goto B593e0c;
case 0x593e10:c.instructions+=6;goto B593e10;
case 0x593e13:c.instructions+=5;goto B593e13;
case 0x593e18:c.instructions+=4;goto B593e18;
case 0x593e1a:c.instructions+=3;goto B593e1a;
case 0x593e1e:c.instructions+=2;goto B593e1e;
case 0x593e22:c.instructions+=1;goto B593e22;
case 0x593e24:goto L593e24;
case 0x593e27:c.instructions+=2;goto B593e27;
case 0x593e29:c.instructions+=1;goto B593e29;
case 0x593e2b:goto L593e2b;
case 0x593e2f:c.instructions+=1;goto B593e2f;
case 0x593e32:goto L593e32;
case 0x593e36:c.instructions+=9;goto B593e36;
case 0x593e38:c.instructions+=8;goto B593e38;
case 0x593e3c:c.instructions+=7;goto B593e3c;
case 0x593e3f:c.instructions+=6;goto B593e3f;
case 0x593e42:c.instructions+=5;goto B593e42;
case 0x593e43:c.instructions+=4;goto B593e43;
case 0x593e44:c.instructions+=3;goto B593e44;
case 0x593e46:c.instructions+=2;goto B593e46;
case 0x593e47:c.instructions+=1;goto B593e47;
case 0x593e4a:goto L593e4a;
case 0x593e4c:c.instructions+=2;goto B593e4c;
case 0x593e4e:c.instructions+=1;goto B593e4e;
case 0x593e51:goto L593e51;
case 0x593e53:c.instructions+=3;goto B593e53;
case 0x593e59:c.instructions+=2;goto B593e59;
case 0x593e5b:c.instructions+=1;goto B593e5b;
case 0x593e5d:goto L593e5d;
case 0x593e63:c.instructions+=5;goto B593e63;
case 0x593e69:c.instructions+=4;goto B593e69;
case 0x593e6f:c.instructions+=3;goto B593e6f;
case 0x593e71:c.instructions+=2;goto B593e71;
case 0x593e74:c.instructions+=1;goto B593e74;
case 0x593e76:goto L593e76;
case 0x593e7c:goto L593e7c;
case 0x593e7f:c.instructions+=3;goto B593e7f;
case 0x593e81:c.instructions+=2;goto B593e81;
case 0x593e84:c.instructions+=1;goto B593e84;
case 0x593e86:goto L593e86;
case 0x593e89:c.instructions+=2;goto B593e89;
case 0x593e8b:c.instructions+=1;goto B593e8b;
case 0x593e8d:goto L593e8d;
case 0x593e93:goto L593e93;
case 0x593e99:c.instructions+=2;goto B593e99;
case 0x593e9b:c.instructions+=1;goto B593e9b;
case 0x593e9d:goto L593e9d;
case 0x593e9f:c.instructions+=20;goto B593e9f;
case 0x593ea1:c.instructions+=19;goto B593ea1;
case 0x593ea4:c.instructions+=18;goto B593ea4;
case 0x593ea7:c.instructions+=17;goto B593ea7;
case 0x593eaa:c.instructions+=16;goto B593eaa;
case 0x593ead:c.instructions+=15;goto B593ead;
case 0x593eb1:c.instructions+=14;goto B593eb1;
case 0x593eb3:c.instructions+=13;goto B593eb3;
case 0x593eb5:c.instructions+=12;goto B593eb5;
case 0x593eb9:c.instructions+=11;goto B593eb9;
case 0x593ebb:c.instructions+=10;goto B593ebb;
case 0x593ebd:c.instructions+=9;goto B593ebd;
case 0x593ec1:c.instructions+=8;goto B593ec1;
case 0x593ec3:c.instructions+=7;goto B593ec3;
case 0x593ec9:c.instructions+=6;goto B593ec9;
case 0x593ecb:c.instructions+=5;goto B593ecb;
case 0x593ecd:c.instructions+=4;goto B593ecd;
case 0x593ed1:c.instructions+=3;goto B593ed1;
case 0x593ed4:c.instructions+=2;goto B593ed4;
case 0x593ed7:c.instructions+=1;goto B593ed7;
case 0x593edd:goto L593edd;
case 0x593edf:c.instructions+=13;goto B593edf;
case 0x593ee3:c.instructions+=12;goto B593ee3;
case 0x593ee5:c.instructions+=11;goto B593ee5;
case 0x593ee9:c.instructions+=10;goto B593ee9;
case 0x593eeb:c.instructions+=9;goto B593eeb;
case 0x593eed:c.instructions+=8;goto B593eed;
case 0x593eef:c.instructions+=7;goto B593eef;
case 0x593ef2:c.instructions+=6;goto B593ef2;
case 0x593ef5:c.instructions+=5;goto B593ef5;
case 0x593ef6:c.instructions+=4;goto B593ef6;
case 0x593ef7:c.instructions+=3;goto B593ef7;
case 0x593ef9:c.instructions+=2;goto B593ef9;
case 0x593efa:c.instructions+=1;goto B593efa;
case 0x593efd:goto L593efd;
case 0x593f01:c.instructions+=1;goto B593f01;
case 0x593f03:goto L593f03;
case 0x593f06:c.instructions+=2;goto B593f06;
case 0x593f0c:c.instructions+=1;goto B593f0c;
case 0x593f0e:goto L593f0e;
case 0x593f10:goto L593f10;
case 0x593f13:c.instructions+=1;goto B593f13;
case 0x593f15:goto L593f15;
case 0x593f16:c.instructions+=1;goto B593f16;
case 0x593f18:goto L593f18;
case 0x593f19:c.instructions+=1;goto B593f19;
case 0x593f1f:goto L593f1f;
case 0x593f23:c.instructions+=15;goto B593f23;
case 0x593f26:c.instructions+=14;goto B593f26;
case 0x593f28:c.instructions+=13;goto B593f28;
case 0x593f2c:c.instructions+=12;goto B593f2c;
case 0x593f2e:c.instructions+=11;goto B593f2e;
case 0x593f32:c.instructions+=10;goto B593f32;
case 0x593f34:c.instructions+=9;goto B593f34;
case 0x593f36:c.instructions+=8;goto B593f36;
case 0x593f38:c.instructions+=7;goto B593f38;
case 0x593f3b:c.instructions+=6;goto B593f3b;
case 0x593f3e:c.instructions+=5;goto B593f3e;
case 0x593f3f:c.instructions+=4;goto B593f3f;
case 0x593f40:c.instructions+=3;goto B593f40;
case 0x593f42:c.instructions+=2;goto B593f42;
case 0x593f43:c.instructions+=1;goto B593f43;
case 0x593f46:goto L593f46;
case 0x593f49:c.instructions+=11;goto B593f49;
case 0x593f4d:c.instructions+=10;goto B593f4d;
case 0x593f51:c.instructions+=9;goto B593f51;
case 0x593f53:c.instructions+=8;goto B593f53;
case 0x593f57:c.instructions+=7;goto B593f57;
case 0x593f5a:c.instructions+=6;goto B593f5a;
case 0x593f5d:c.instructions+=5;goto B593f5d;
case 0x593f5e:c.instructions+=4;goto B593f5e;
case 0x593f5f:c.instructions+=3;goto B593f5f;
case 0x593f61:c.instructions+=2;goto B593f61;
case 0x593f62:c.instructions+=1;goto B593f62;
case 0x593f65:goto L593f65;
case 0x593f67:c.instructions+=20;goto B593f67;
case 0x593f69:c.instructions+=19;goto B593f69;
case 0x593f6c:c.instructions+=18;goto B593f6c;
case 0x593f6f:c.instructions+=17;goto B593f6f;
case 0x593f72:c.instructions+=16;goto B593f72;
case 0x593f75:c.instructions+=15;goto B593f75;
case 0x593f79:c.instructions+=14;goto B593f79;
case 0x593f7b:c.instructions+=13;goto B593f7b;
case 0x593f7d:c.instructions+=12;goto B593f7d;
case 0x593f81:c.instructions+=11;goto B593f81;
case 0x593f83:c.instructions+=10;goto B593f83;
case 0x593f85:c.instructions+=9;goto B593f85;
case 0x593f89:c.instructions+=8;goto B593f89;
case 0x593f8b:c.instructions+=7;goto B593f8b;
case 0x593f91:c.instructions+=6;goto B593f91;
case 0x593f93:c.instructions+=5;goto B593f93;
case 0x593f95:c.instructions+=4;goto B593f95;
case 0x593f99:c.instructions+=3;goto B593f99;
case 0x593f9c:c.instructions+=2;goto B593f9c;
case 0x593f9f:c.instructions+=1;goto B593f9f;
case 0x593fa1:goto L593fa1;
case 0x593fa3:c.instructions+=15;goto B593fa3;
case 0x593fa7:c.instructions+=14;goto B593fa7;
case 0x593fa9:c.instructions+=13;goto B593fa9;
case 0x593fad:c.instructions+=12;goto B593fad;
case 0x593faf:c.instructions+=11;goto B593faf;
case 0x593fb1:c.instructions+=10;goto B593fb1;
case 0x593fb3:c.instructions+=9;goto B593fb3;
case 0x593fb6:c.instructions+=8;goto B593fb6;
case 0x593fb9:c.instructions+=7;goto B593fb9;
case 0x593fbc:c.instructions+=6;goto B593fbc;
case 0x593fc6:c.instructions+=5;goto B593fc6;
case 0x593fc7:c.instructions+=4;goto B593fc7;
case 0x593fc8:c.instructions+=3;goto B593fc8;
case 0x593fca:c.instructions+=2;goto B593fca;
case 0x593fcb:c.instructions+=1;goto B593fcb;
case 0x593fce:goto L593fce;
case 0x593fd2:c.instructions+=6;goto B593fd2;
case 0x593fd4:c.instructions+=5;goto B593fd4;
case 0x593fd8:c.instructions+=4;goto B593fd8;
case 0x593fdb:c.instructions+=3;goto B593fdb;
case 0x593fde:c.instructions+=2;goto B593fde;
case 0x593fe1:c.instructions+=1;goto B593fe1;
case 0x593feb:goto L593feb;
case 0x593fec:c.instructions+=4;goto B593fec;
case 0x593fed:c.instructions+=3;goto B593fed;
case 0x593fef:c.instructions+=2;goto B593fef;
case 0x593ff0:c.instructions+=1;goto B593ff0;
default:missing_instruction(c.pc);}
B593005:L593005:{c.instructions+=6;NFSU2_TR(0x593005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B593006:{NFSU2_TR(0x593006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593007:{NFSU2_TR(0x593007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B593008:{NFSU2_TR(0x593008);
__builtin_memmove((R+16),(R+20),4);
}
B59300a:{NFSU2_TR(0x59300a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59300b:{NFSU2_TR(0x59300b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593010:L593010:{c.instructions+=7;NFSU2_TR(0x593010);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593016:{NFSU2_TR(0x593016);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593017:{NFSU2_TR(0x593017);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B59301a:{NFSU2_TR(0x59301a);
w1(R+8,u8(0x3ull));
}
B59301c:{NFSU2_TR(0x59301c);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(R+12))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+12),r1(U+3)));
w1(U+4,u8(u32(r1(R+12))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59301e:{NFSU2_TR(0x59301e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59301f:{NFSU2_TR(0x59301f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593032;}}
}
B593021:L593021:{c.instructions+=4;NFSU2_TR(0x593021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B593023:{NFSU2_TR(0x593023);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593025:{NFSU2_TR(0x593025);
__builtin_memmove((R+4),(R+0),4);
}
B593027:{NFSU2_TR(0x593027);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59302aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59302a:L59302a:{c.instructions+=2;NFSU2_TR(0x59302a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B593031:{NFSU2_TR(0x593031);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593032:L593032:{c.instructions+=3;NFSU2_TR(0x593032);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593038:{NFSU2_TR(0x593038);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+8)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B59303b:{NFSU2_TR(0x59303b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59304b;}}
}
B59303d:L59303d:{c.instructions+=3;NFSU2_TR(0x59303d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59303f:{NFSU2_TR(0x59303f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593041:{NFSU2_TR(0x593041);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593044ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B593044:L593044:{c.instructions+=1;NFSU2_TR(0x593044);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B59304b:L59304b:{c.instructions+=1;NFSU2_TR(0x59304b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593050:L593050:{c.instructions+=4;NFSU2_TR(0x593050);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593054:{NFSU2_TR(0x593054);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B593058:{NFSU2_TR(0x593058);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B59305b:{NFSU2_TR(0x59305b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L593094;}}
}
B59305d:L59305d:{c.instructions+=4;NFSU2_TR(0x59305d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593061:{NFSU2_TR(0x593061);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B593065:{NFSU2_TR(0x593065);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B593068:{NFSU2_TR(0x593068);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L593094;}}
}
B59306a:L59306a:{c.instructions+=13;NFSU2_TR(0x59306a);
w4(R+8,u32(s32(s16(r2(R+4)))));
}
B59306d:{NFSU2_TR(0x59306d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xd6ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B593073:{NFSU2_TR(0x593073);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B593076:{NFSU2_TR(0x593076);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B593078:{NFSU2_TR(0x593078);
__builtin_memmove((R+4),(R+8),4);
}
B59307a:{NFSU2_TR(0x59307a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B59307d:{NFSU2_TR(0x59307d);
w4(R+0,u32(0x1ull));
}
B593082:{NFSU2_TR(0x593082);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B593084:{NFSU2_TR(0x593084);
__builtin_memmove((R+4),gp(0x86b0b0),4);
}
B59308a:{NFSU2_TR(0x59308a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B59308d:{NFSU2_TR(0x59308d);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B593091:{NFSU2_TR(0x593091);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593093:{NFSU2_TR(0x593093);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593094:L593094:{c.instructions+=2;NFSU2_TR(0x593094);
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
B593096:{NFSU2_TR(0x593096);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5930a0:L5930a0:{c.instructions+=3;NFSU2_TR(0x5930a0);
__builtin_memmove((R+0),gp(0x86b2bc),4);
}
B5930a5:{NFSU2_TR(0x5930a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5930a9:{NFSU2_TR(0x5930a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5930b0:L5930b0:{c.instructions+=6;NFSU2_TR(0x5930b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5930b1:{NFSU2_TR(0x5930b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5930b5:{NFSU2_TR(0x5930b5);
u8 U[4];
w4(U+0,u32(0x7a1cc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5930ba:{NFSU2_TR(0x5930ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5930bc:{NFSU2_TR(0x5930bc);
__builtin_memmove((R+4),(R+24),4);
}
B5930be:{NFSU2_TR(0x5930be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5930c3ull));
TAIL_STATIC(0x578ce0u,578);
}
B5930c3:L5930c3:{c.instructions+=3;NFSU2_TR(0x5930c3);
__builtin_memmove((R+4),(R+24),4);
}
B5930c5:{NFSU2_TR(0x5930c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5930c6:{NFSU2_TR(0x5930c6);
TAIL_STATIC(0x578d90u,578);
}
B5930d0:L5930d0:{c.instructions+=3;NFSU2_TR(0x5930d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5930d4:{NFSU2_TR(0x5930d4);
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
B5930d6:{NFSU2_TR(0x5930d6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5930db;}}
}
B5930d8:L5930d8:{c.instructions+=2;NFSU2_TR(0x5930d8);
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
B5930da:{NFSU2_TR(0x5930da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5930db:L5930db:{c.instructions+=3;NFSU2_TR(0x5930db);
__builtin_memmove((R+4),gp(0x86b298),4);
}
B5930e1:{NFSU2_TR(0x5930e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5930e4:{NFSU2_TR(0x5930e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5930f0:L5930f0:{c.instructions+=2;NFSU2_TR(0x5930f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+523,scarry<u8>(r1(U+4),u8(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5930f3:{NFSU2_TR(0x5930f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593100:L593100:{c.instructions+=3;NFSU2_TR(0x593100);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593104:{NFSU2_TR(0x593104);
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
B593106:{NFSU2_TR(0x593106);
if(r1(R+518)){{goto L59310f;}}
}
B593108:L593108:{c.instructions+=2;NFSU2_TR(0x593108);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B59310c:{NFSU2_TR(0x59310c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59310f:L59310f:{c.instructions+=3;NFSU2_TR(0x59310f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593112:{NFSU2_TR(0x593112);
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
B593114:{NFSU2_TR(0x593114);
if(r1(R+518)){{goto L59311b;}}
}
B593116:L593116:{c.instructions+=2;NFSU2_TR(0x593116);
u8 U[3];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B593118:{NFSU2_TR(0x593118);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59311b:L59311b:{c.instructions+=1;NFSU2_TR(0x59311b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593120:L593120:{c.instructions+=8;NFSU2_TR(0x593120);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593121:{NFSU2_TR(0x593121);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B593125:{NFSU2_TR(0x593125);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593126:{NFSU2_TR(0x593126);
__builtin_memmove((R+24),(R+4),4);
}
B593128:{NFSU2_TR(0x593128);
u8 U[4];
w4(U+0,u32(0x7a1cdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59312d:{NFSU2_TR(0x59312d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59312e:{NFSU2_TR(0x59312e);
__builtin_memmove((R+4),(R+12),4);
}
B593130:{NFSU2_TR(0x593130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593135ull));
TAIL_STATIC(0x578ce0u,578);
}
B593135:L593135:{c.instructions+=4;NFSU2_TR(0x593135);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593138:{NFSU2_TR(0x593138);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59313a:{NFSU2_TR(0x59313a);
__builtin_memmove((R+4),(R+12),4);
}
B59313c:{NFSU2_TR(0x59313c);
if(r1(R+518)){{goto L59315b;}}
}
B59313e:L59313e:{c.instructions+=3;NFSU2_TR(0x59313e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B593142:{NFSU2_TR(0x593142);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593143:{NFSU2_TR(0x593143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593148ull));
TAIL_STATIC(0x5716c0u,571);
}
B593148:L593148:{c.instructions+=7;NFSU2_TR(0x593148);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59314c:{NFSU2_TR(0x59314c);
__builtin_memmove((R+4),(R+0),1);
}
B59314e:{NFSU2_TR(0x59314e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B593151:{NFSU2_TR(0x593151);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B593153:{NFSU2_TR(0x593153);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B593156:{NFSU2_TR(0x593156);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B593159:{NFSU2_TR(0x593159);
{goto L593174;}
}
B59315b:L59315b:{c.instructions+=8;NFSU2_TR(0x59315b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59315e:{NFSU2_TR(0x59315e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593161:{NFSU2_TR(0x593161);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r4(U+0))));
}
B593164:{NFSU2_TR(0x593164);
w1(R+8,u8(u32(r1(R+8))+u32(r1(R+0))));
}
B593166:{NFSU2_TR(0x593166);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59316a:{NFSU2_TR(0x59316a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59316b:{NFSU2_TR(0x59316b);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59316f:{NFSU2_TR(0x59316f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593174ull));
TAIL_STATIC(0x5716c0u,571);
}
B593174:L593174:{c.instructions+=7;NFSU2_TR(0x593174);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593176:{NFSU2_TR(0x593176);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593178:{NFSU2_TR(0x593178);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59317a:{NFSU2_TR(0x59317a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B59317d:{NFSU2_TR(0x59317d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59317e:{NFSU2_TR(0x59317e);
__builtin_memmove((R+4),(R+12),4);
}
B593180:{NFSU2_TR(0x593180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593185ull));
TAIL_STATIC(0x571640u,571);
}
B593185:L593185:{c.instructions+=3;NFSU2_TR(0x593185);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B593188:{NFSU2_TR(0x593188);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))|u32(r1(U+4))));
w1(R+519,u8(s8(r1(R+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(R+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B59318b:{NFSU2_TR(0x59318b);
if(r1(R+518)){{goto L593195;}}
}
B59318d:L59318d:{c.instructions+=2;NFSU2_TR(0x59318d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593190:{NFSU2_TR(0x593190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593195ull));
TAIL_STATIC(0x5dca30u,5dc);
}
B593195:L593195:{c.instructions+=3;NFSU2_TR(0x593195);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593198:{NFSU2_TR(0x593198);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))|u32(r1(U+4))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B59319b:{NFSU2_TR(0x59319b);
if(r1(R+518)){{goto L5931db;}}
}
B59319d:L59319d:{c.instructions+=6;NFSU2_TR(0x59319d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5931a4:{NFSU2_TR(0x5931a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5931a7:{NFSU2_TR(0x5931a7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5931a9:{NFSU2_TR(0x5931a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5931aa:{NFSU2_TR(0x5931aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5931ad:{NFSU2_TR(0x5931ad);
w4(R+4,u32(0x10ull));
}
B5931b2:L5931b2:{c.instructions+=1;NFSU2_TR(0x5931b2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5931b4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5931b2u);}goto L5931b2;}
}
B5931b4:L5931b4:{c.instructions+=13;NFSU2_TR(0x5931b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5931ba:{NFSU2_TR(0x5931ba);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5931bc:{NFSU2_TR(0x5931bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5931be:{NFSU2_TR(0x5931be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5931c1:{NFSU2_TR(0x5931c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5931c4:{NFSU2_TR(0x5931c4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5931c6:{NFSU2_TR(0x5931c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5931c9:{NFSU2_TR(0x5931c9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
}
B5931cf:{NFSU2_TR(0x5931cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5931d1:{NFSU2_TR(0x5931d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5931d4:{NFSU2_TR(0x5931d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5931d7:{NFSU2_TR(0x5931d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5931da:{NFSU2_TR(0x5931da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5931db:L5931db:{c.instructions+=2;NFSU2_TR(0x5931db);
__builtin_memmove((R+4),(R+12),4);
}
B5931dd:{NFSU2_TR(0x5931dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5931e2ull));
TAIL_STATIC(0x578d90u,578);
}
B5931e2:L5931e2:{c.instructions+=3;NFSU2_TR(0x5931e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5931e3:{NFSU2_TR(0x5931e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5931e4:{NFSU2_TR(0x5931e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5931f0:L5931f0:{c.instructions+=3;NFSU2_TR(0x5931f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5931f3:{NFSU2_TR(0x5931f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5931f5:{NFSU2_TR(0x5931f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593209;}}
}
B5931f7:L5931f7:{c.instructions+=4;NFSU2_TR(0x5931f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5931fa:{NFSU2_TR(0x5931fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5931fd:{NFSU2_TR(0x5931fd);
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
B5931ff:{NFSU2_TR(0x5931ff);
if(r1(R+518)){{goto L593209;}}
}
B593201:L593201:{c.instructions+=2;NFSU2_TR(0x593201);
w4(R+0,u32(0x1ull));
}
B593206:{NFSU2_TR(0x593206);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593209:L593209:{c.instructions+=2;NFSU2_TR(0x593209);
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
B59320b:{NFSU2_TR(0x59320b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593210:L593210:{c.instructions+=4;NFSU2_TR(0x593210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593211:{NFSU2_TR(0x593211);
__builtin_memmove((R+24),(R+4),4);
}
B593213:{NFSU2_TR(0x593213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B593215:{NFSU2_TR(0x593215);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593218ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B593218:L593218:{c.instructions+=4;NFSU2_TR(0x593218);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593219:{NFSU2_TR(0x593219);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59321c:{NFSU2_TR(0x59321c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59321d:{NFSU2_TR(0x59321d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593222ull));
TAIL_STATIC(0x4012b0u,401);
}
B593222:L593222:{c.instructions+=4;NFSU2_TR(0x593222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B593224:{NFSU2_TR(0x593224);
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
B593227:{NFSU2_TR(0x593227);
__builtin_memmove((R+4),(R+24),4);
}
B593229:{NFSU2_TR(0x593229);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59322cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59322c:L59322c:{c.instructions+=10;NFSU2_TR(0x59322c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59322f:{NFSU2_TR(0x59322f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593232:{NFSU2_TR(0x593232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B593234:{NFSU2_TR(0x593234);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B593236:{NFSU2_TR(0x593236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59323c:{NFSU2_TR(0x59323c);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593242:{NFSU2_TR(0x593242);
__builtin_memmove((R+4),(R+24),4);
}
B593244:{NFSU2_TR(0x593244);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59324a:{NFSU2_TR(0x59324a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59324c:{NFSU2_TR(0x59324c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59324full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59324f:L59324f:{c.instructions+=11;NFSU2_TR(0x59324f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593252:{NFSU2_TR(0x593252);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593255:{NFSU2_TR(0x593255);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B593257:{NFSU2_TR(0x593257);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59325b:{NFSU2_TR(0x59325b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59325d:{NFSU2_TR(0x59325d);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593263:{NFSU2_TR(0x593263);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593269:{NFSU2_TR(0x593269);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59326f:{NFSU2_TR(0x59326f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593272:{NFSU2_TR(0x593272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593273:{NFSU2_TR(0x593273);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593280:L593280:{c.instructions+=9;NFSU2_TR(0x593280);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593281:{NFSU2_TR(0x593281);
__builtin_memmove((R+20),(R+16),4);
}
B593283:{NFSU2_TR(0x593283);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B593286:{NFSU2_TR(0x593286);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x68ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x68ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593289:{NFSU2_TR(0x593289);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59328a:{NFSU2_TR(0x59328a);
__builtin_memmove((R+24),(R+4),4);
}
B59328c:{NFSU2_TR(0x59328c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59328e:{NFSU2_TR(0x59328e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59328f:{NFSU2_TR(0x59328f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593292ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B593292:L593292:{c.instructions+=4;NFSU2_TR(0x593292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B593294:{NFSU2_TR(0x593294);
__builtin_memmove((R+4),(R+24),4);
}
B593296:{NFSU2_TR(0x593296);
__builtin_memmove((R+28),(R+0),4);
}
B593298:{NFSU2_TR(0x593298);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59329bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59329b:L59329b:{c.instructions+=6;NFSU2_TR(0x59329b);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59329e:{NFSU2_TR(0x59329e);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5932a4:{NFSU2_TR(0x5932a4);
__builtin_memmove((R+4),(R+0),4);
}
B5932a6:{NFSU2_TR(0x5932a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5932a8:{NFSU2_TR(0x5932a8);
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
B5932ab:{NFSU2_TR(0x5932ab);
if(r1(R+514)){{goto L5932d7;}}
}
B5932ad:L5932ad:{c.instructions+=12;NFSU2_TR(0x5932ad);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5932b0:{NFSU2_TR(0x5932b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5932b3:{NFSU2_TR(0x5932b3);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5932b6:{NFSU2_TR(0x5932b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5932b8:{NFSU2_TR(0x5932b8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5932ba:{NFSU2_TR(0x5932ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5932bc:{NFSU2_TR(0x5932bc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5932bf:{NFSU2_TR(0x5932bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5932c0:{NFSU2_TR(0x5932c0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5932c3:{NFSU2_TR(0x5932c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5932c6:{NFSU2_TR(0x5932c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5932c7:{NFSU2_TR(0x5932c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5932ccull));
TAIL_STATIC(0x4012b0u,401);
}
B5932cc:L5932cc:{c.instructions+=6;NFSU2_TR(0x5932cc);
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
B5932cf:{NFSU2_TR(0x5932cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5932d0:{NFSU2_TR(0x5932d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5932d1:{NFSU2_TR(0x5932d1);
__builtin_memmove((R+16),(R+20),4);
}
B5932d3:{NFSU2_TR(0x5932d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5932d4:{NFSU2_TR(0x5932d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5932d7:L5932d7:{c.instructions+=70;NFSU2_TR(0x5932d7);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5932da:{NFSU2_TR(0x5932da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5932e0:{NFSU2_TR(0x5932e0);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5932e3:{NFSU2_TR(0x5932e3);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5932e6:{NFSU2_TR(0x5932e6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5932ea:{NFSU2_TR(0x5932ea);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5932ec:{NFSU2_TR(0x5932ec);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5932ee:{NFSU2_TR(0x5932ee);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5932f2:{NFSU2_TR(0x5932f2);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5932f5:{NFSU2_TR(0x5932f5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5932f8:{NFSU2_TR(0x5932f8);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5932fc:{NFSU2_TR(0x5932fc);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5932ff:{NFSU2_TR(0x5932ff);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593302:{NFSU2_TR(0x593302);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593306:{NFSU2_TR(0x593306);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593308:{NFSU2_TR(0x593308);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59330b:{NFSU2_TR(0x59330b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59330f:{NFSU2_TR(0x59330f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593312:{NFSU2_TR(0x593312);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593315:{NFSU2_TR(0x593315);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593319:{NFSU2_TR(0x593319);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59331c:{NFSU2_TR(0x59331c);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59331f:{NFSU2_TR(0x59331f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593323:{NFSU2_TR(0x593323);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593326:{NFSU2_TR(0x593326);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593329:{NFSU2_TR(0x593329);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59332d:{NFSU2_TR(0x59332d);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593330:{NFSU2_TR(0x593330);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593336:{NFSU2_TR(0x593336);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59333a:{NFSU2_TR(0x59333a);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59333d:{NFSU2_TR(0x59333d);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593343:{NFSU2_TR(0x593343);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593347:{NFSU2_TR(0x593347);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59334a:{NFSU2_TR(0x59334a);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593350:{NFSU2_TR(0x593350);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593354:{NFSU2_TR(0x593354);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593357:{NFSU2_TR(0x593357);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59335d:{NFSU2_TR(0x59335d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593361:{NFSU2_TR(0x593361);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593364:{NFSU2_TR(0x593364);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59336a:{NFSU2_TR(0x59336a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59336e:{NFSU2_TR(0x59336e);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593371:{NFSU2_TR(0x593371);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593377:{NFSU2_TR(0x593377);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59337b:{NFSU2_TR(0x59337b);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59337e:{NFSU2_TR(0x59337e);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593384:{NFSU2_TR(0x593384);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593388:{NFSU2_TR(0x593388);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59338c:{NFSU2_TR(0x59338c);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59338f:{NFSU2_TR(0x59338f);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593395:{NFSU2_TR(0x593395);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593399:{NFSU2_TR(0x593399);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59339c:{NFSU2_TR(0x59339c);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5933a2:{NFSU2_TR(0x5933a2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5933a6:{NFSU2_TR(0x5933a6);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5933a9:{NFSU2_TR(0x5933a9);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5933af:{NFSU2_TR(0x5933af);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5933b3:{NFSU2_TR(0x5933b3);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5933b6:{NFSU2_TR(0x5933b6);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5933bc:{NFSU2_TR(0x5933bc);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5933c0:{NFSU2_TR(0x5933c0);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5933c3:{NFSU2_TR(0x5933c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5933c7:{NFSU2_TR(0x5933c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5933c8:{NFSU2_TR(0x5933c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5933c9:{NFSU2_TR(0x5933c9);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5933cf:{NFSU2_TR(0x5933cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5933d0:{NFSU2_TR(0x5933d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5933d3:{NFSU2_TR(0x5933d3);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5933d7:{NFSU2_TR(0x5933d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5933d8:{NFSU2_TR(0x5933d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5933ddull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5933dd:L5933dd:{c.instructions+=115;NFSU2_TR(0x5933dd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5933e1:{NFSU2_TR(0x5933e1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5933e5:{NFSU2_TR(0x5933e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5933e8:{NFSU2_TR(0x5933e8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5933ec:{NFSU2_TR(0x5933ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5933ef:{NFSU2_TR(0x5933ef);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5933f3:{NFSU2_TR(0x5933f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5933f6:{NFSU2_TR(0x5933f6);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5933fa:{NFSU2_TR(0x5933fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5933fe:{NFSU2_TR(0x5933fe);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593402:{NFSU2_TR(0x593402);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593406:{NFSU2_TR(0x593406);
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
B593409:{NFSU2_TR(0x593409);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59340d:{NFSU2_TR(0x59340d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593411:{NFSU2_TR(0x593411);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593415:{NFSU2_TR(0x593415);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593419:{NFSU2_TR(0x593419);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59341c:{NFSU2_TR(0x59341c);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59341e:{NFSU2_TR(0x59341e);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B593421:{NFSU2_TR(0x593421);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593423:{NFSU2_TR(0x593423);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B593425:{NFSU2_TR(0x593425);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593428:{NFSU2_TR(0x593428);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59342a:{NFSU2_TR(0x59342a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59342e:{NFSU2_TR(0x59342e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B593432:{NFSU2_TR(0x593432);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593435:{NFSU2_TR(0x593435);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593439:{NFSU2_TR(0x593439);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59343d:{NFSU2_TR(0x59343d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593440:{NFSU2_TR(0x593440);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593446:{NFSU2_TR(0x593446);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59344a:{NFSU2_TR(0x59344a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593450:{NFSU2_TR(0x593450);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593454:{NFSU2_TR(0x593454);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593458:{NFSU2_TR(0x593458);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59345c:{NFSU2_TR(0x59345c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593460:{NFSU2_TR(0x593460);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593464:{NFSU2_TR(0x593464);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593468:{NFSU2_TR(0x593468);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59346c:{NFSU2_TR(0x59346c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593470:{NFSU2_TR(0x593470);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593474:{NFSU2_TR(0x593474);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593478:{NFSU2_TR(0x593478);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59347c:{NFSU2_TR(0x59347c);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593482:{NFSU2_TR(0x593482);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B593484:{NFSU2_TR(0x593484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B593485:{NFSU2_TR(0x593485);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59348b:{NFSU2_TR(0x59348b);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59348e:{NFSU2_TR(0x59348e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B593490:{NFSU2_TR(0x593490);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593493:{NFSU2_TR(0x593493);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B593495:{NFSU2_TR(0x593495);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593499:{NFSU2_TR(0x593499);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59349d:{NFSU2_TR(0x59349d);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5934a0:{NFSU2_TR(0x5934a0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5934a4:{NFSU2_TR(0x5934a4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5934a8:{NFSU2_TR(0x5934a8);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5934ab:{NFSU2_TR(0x5934ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5934b1:{NFSU2_TR(0x5934b1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5934b5:{NFSU2_TR(0x5934b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5934bb:{NFSU2_TR(0x5934bb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5934bf:{NFSU2_TR(0x5934bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5934c3:{NFSU2_TR(0x5934c3);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5934c7:{NFSU2_TR(0x5934c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5934cb:{NFSU2_TR(0x5934cb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5934cf:{NFSU2_TR(0x5934cf);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5934d3:{NFSU2_TR(0x5934d3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5934d7:{NFSU2_TR(0x5934d7);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5934db:{NFSU2_TR(0x5934db);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5934df:{NFSU2_TR(0x5934df);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5934e3:{NFSU2_TR(0x5934e3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5934e7:{NFSU2_TR(0x5934e7);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5934ed:{NFSU2_TR(0x5934ed);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5934ef:{NFSU2_TR(0x5934ef);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5934f5:{NFSU2_TR(0x5934f5);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5934f8:{NFSU2_TR(0x5934f8);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5934fa:{NFSU2_TR(0x5934fa);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5934fd:{NFSU2_TR(0x5934fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5934ff:{NFSU2_TR(0x5934ff);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593503:{NFSU2_TR(0x593503);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B593507:{NFSU2_TR(0x593507);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59350a:{NFSU2_TR(0x59350a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59350e:{NFSU2_TR(0x59350e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B593512:{NFSU2_TR(0x593512);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593515:{NFSU2_TR(0x593515);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59351b:{NFSU2_TR(0x59351b);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59351f:{NFSU2_TR(0x59351f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593525:{NFSU2_TR(0x593525);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593529:{NFSU2_TR(0x593529);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59352d:{NFSU2_TR(0x59352d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593531:{NFSU2_TR(0x593531);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593535:{NFSU2_TR(0x593535);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593539:{NFSU2_TR(0x593539);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59353d:{NFSU2_TR(0x59353d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593541:{NFSU2_TR(0x593541);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593545:{NFSU2_TR(0x593545);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593549:{NFSU2_TR(0x593549);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59354d:{NFSU2_TR(0x59354d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593551:{NFSU2_TR(0x593551);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593557:{NFSU2_TR(0x593557);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B593559:{NFSU2_TR(0x593559);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59355f:{NFSU2_TR(0x59355f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593560:{NFSU2_TR(0x593560);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593563:{NFSU2_TR(0x593563);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B593565:{NFSU2_TR(0x593565);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593568:{NFSU2_TR(0x593568);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59356a:{NFSU2_TR(0x59356a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59356e:{NFSU2_TR(0x59356e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B593572:{NFSU2_TR(0x593572);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593575:{NFSU2_TR(0x593575);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593579:{NFSU2_TR(0x593579);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59357d:{NFSU2_TR(0x59357d);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593580:{NFSU2_TR(0x593580);
__builtin_memmove((R+16),(R+20),4);
}
B593582:{NFSU2_TR(0x593582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B593583:{NFSU2_TR(0x593583);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593590:L593590:{c.instructions+=11;NFSU2_TR(0x593590);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593591:{NFSU2_TR(0x593591);
__builtin_memmove((R+20),(R+16),4);
}
B593593:{NFSU2_TR(0x593593);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B593596:{NFSU2_TR(0x593596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B593599:{NFSU2_TR(0x593599);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59359a:{NFSU2_TR(0x59359a);
__builtin_memmove((R+24),(R+4),4);
}
B59359c:{NFSU2_TR(0x59359c);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59359f:{NFSU2_TR(0x59359f);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5935a5:{NFSU2_TR(0x5935a5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5935a7:{NFSU2_TR(0x5935a7);
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
B5935aa:{NFSU2_TR(0x5935aa);
if(r1(R+514)){{goto L5935cd;}}
}
B5935ac:L5935ac:{c.instructions+=2;NFSU2_TR(0x5935ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5935ae:{NFSU2_TR(0x5935ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5935b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5935b1:L5935b1:{c.instructions+=12;NFSU2_TR(0x5935b1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5935b4:{NFSU2_TR(0x5935b4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5935b7:{NFSU2_TR(0x5935b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5935b9:{NFSU2_TR(0x5935b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5935bc:{NFSU2_TR(0x5935bc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5935be:{NFSU2_TR(0x5935be);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5935c1:{NFSU2_TR(0x5935c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5935c3:{NFSU2_TR(0x5935c3);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5935c6:{NFSU2_TR(0x5935c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5935c7:{NFSU2_TR(0x5935c7);
__builtin_memmove((R+16),(R+20),4);
}
B5935c9:{NFSU2_TR(0x5935c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5935ca:{NFSU2_TR(0x5935ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5935cd:L5935cd:{c.instructions+=6;NFSU2_TR(0x5935cd);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5935d0:{NFSU2_TR(0x5935d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5935d2:{NFSU2_TR(0x5935d2);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5935d5:{NFSU2_TR(0x5935d5);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5935d8:{NFSU2_TR(0x5935d8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5935dc:{NFSU2_TR(0x5935dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5935dfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5935df:L5935df:{c.instructions+=19;NFSU2_TR(0x5935df);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5935e2:{NFSU2_TR(0x5935e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5935e8:{NFSU2_TR(0x5935e8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5935eb:{NFSU2_TR(0x5935eb);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5935ee:{NFSU2_TR(0x5935ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5935f2:{NFSU2_TR(0x5935f2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5935f5:{NFSU2_TR(0x5935f5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5935f7:{NFSU2_TR(0x5935f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5935fb:{NFSU2_TR(0x5935fb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5935fd:{NFSU2_TR(0x5935fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5935fe:{NFSU2_TR(0x5935fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593601:{NFSU2_TR(0x593601);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593602:{NFSU2_TR(0x593602);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593606:{NFSU2_TR(0x593606);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B593608:{NFSU2_TR(0x593608);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593609:{NFSU2_TR(0x593609);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59360d:{NFSU2_TR(0x59360d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59360e:{NFSU2_TR(0x59360e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593612:{NFSU2_TR(0x593612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593617ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B593617:L593617:{c.instructions+=5;NFSU2_TR(0x593617);
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
B59361a:{NFSU2_TR(0x59361a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59361b:{NFSU2_TR(0x59361b);
__builtin_memmove((R+16),(R+20),4);
}
B59361d:{NFSU2_TR(0x59361d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59361e:{NFSU2_TR(0x59361e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593630:L593630:{c.instructions+=16;NFSU2_TR(0x593630);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593631:{NFSU2_TR(0x593631);
__builtin_memmove((R+20),(R+16),4);
}
B593633:{NFSU2_TR(0x593633);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B593636:{NFSU2_TR(0x593636);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x68ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x68ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593639:{NFSU2_TR(0x593639);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59363a:{NFSU2_TR(0x59363a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59363b:{NFSU2_TR(0x59363b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59363e:{NFSU2_TR(0x59363e);
__builtin_memmove((R+24),(R+4),4);
}
B593640:{NFSU2_TR(0x593640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B593642:{NFSU2_TR(0x593642);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593643:{NFSU2_TR(0x593643);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B593647:{NFSU2_TR(0x593647);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593648:{NFSU2_TR(0x593648);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59364c:{NFSU2_TR(0x59364c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59364d:{NFSU2_TR(0x59364d);
__builtin_memmove((R+4),(R+24),4);
}
B59364f:{NFSU2_TR(0x59364f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593652ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B593652:L593652:{c.instructions+=5;NFSU2_TR(0x593652);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593653:{NFSU2_TR(0x593653);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B593657:{NFSU2_TR(0x593657);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593658:{NFSU2_TR(0x593658);
__builtin_memmove((R+4),(R+24),4);
}
B59365a:{NFSU2_TR(0x59365a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59365full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x593590u);}goto L593590;}
}
B59365f:L59365f:{c.instructions+=3;NFSU2_TR(0x59365f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593662:{NFSU2_TR(0x593662);
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
B593664:{NFSU2_TR(0x593664);
if(r1(R+518)){{goto L5936db;}}
}
B593666:L593666:{c.instructions+=24;NFSU2_TR(0x593666);
{u32 ea_=u32(r4(R+0)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59366c:{NFSU2_TR(0x59366c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593670:{NFSU2_TR(0x593670);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593674:{NFSU2_TR(0x593674);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B593678:{NFSU2_TR(0x593678);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59367a:{NFSU2_TR(0x59367a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59367b:{NFSU2_TR(0x59367b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59367f:{NFSU2_TR(0x59367f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593683:{NFSU2_TR(0x593683);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B593685:{NFSU2_TR(0x593685);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593689:{NFSU2_TR(0x593689);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59368d:{NFSU2_TR(0x59368d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59368f:{NFSU2_TR(0x59368f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593693:{NFSU2_TR(0x593693);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B593695:{NFSU2_TR(0x593695);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593699:{NFSU2_TR(0x593699);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59369d:{NFSU2_TR(0x59369d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5936a0:{NFSU2_TR(0x5936a0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5936a2:{NFSU2_TR(0x5936a2);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5936a5:{NFSU2_TR(0x5936a5);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5936a8:{NFSU2_TR(0x5936a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5936ab:{NFSU2_TR(0x5936ab);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x30ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5936ae:{NFSU2_TR(0x5936ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5936af:{NFSU2_TR(0x5936af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5936b4ull));
TAIL_STATIC(0x4012b0u,401);
}
B5936b4:L5936b4:{c.instructions+=15;NFSU2_TR(0x5936b4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5936b8:{NFSU2_TR(0x5936b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5936bb:{NFSU2_TR(0x5936bb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5936bf:{NFSU2_TR(0x5936bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5936c3:{NFSU2_TR(0x5936c3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5936c5:{NFSU2_TR(0x5936c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5936c8:{NFSU2_TR(0x5936c8);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5936cb:{NFSU2_TR(0x5936cb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x70ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5936ce:{NFSU2_TR(0x5936ce);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5936d1:{NFSU2_TR(0x5936d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5936d3:{NFSU2_TR(0x5936d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5936d4:{NFSU2_TR(0x5936d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5936d5:{NFSU2_TR(0x5936d5);
__builtin_memmove((R+16),(R+20),4);
}
B5936d7:{NFSU2_TR(0x5936d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5936d8:{NFSU2_TR(0x5936d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5936db:L5936db:{c.instructions+=10;NFSU2_TR(0x5936db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5936dd:{NFSU2_TR(0x5936dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5936e1:{NFSU2_TR(0x5936e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5936e2:{NFSU2_TR(0x5936e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5936e6:{NFSU2_TR(0x5936e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5936e7:{NFSU2_TR(0x5936e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5936eb:{NFSU2_TR(0x5936eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5936ec:{NFSU2_TR(0x5936ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5936ed:{NFSU2_TR(0x5936ed);
__builtin_memmove((R+4),(R+24),4);
}
B5936ef:{NFSU2_TR(0x5936ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5936f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5936f2:L5936f2:{c.instructions+=5;NFSU2_TR(0x5936f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5936f3:{NFSU2_TR(0x5936f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5936f4:{NFSU2_TR(0x5936f4);
__builtin_memmove((R+16),(R+20),4);
}
B5936f6:{NFSU2_TR(0x5936f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5936f7:{NFSU2_TR(0x5936f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593700:L593700:{c.instructions+=3;NFSU2_TR(0x593700);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593703:{NFSU2_TR(0x593703);
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
B593705:{NFSU2_TR(0x593705);
if(r1(R+518)){{goto L59370f;}}
}
B593707:L593707:{c.instructions+=3;NFSU2_TR(0x593707);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59370a:{NFSU2_TR(0x59370a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59370c:{NFSU2_TR(0x59370c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B59370f:L59370f:{c.instructions+=1;NFSU2_TR(0x59370f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593710:L593710:{c.instructions+=5;NFSU2_TR(0x593710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593711:{NFSU2_TR(0x593711);
__builtin_memmove((R+24),(R+4),4);
}
B593713:{NFSU2_TR(0x593713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593716:{NFSU2_TR(0x593716);
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
B593718:{NFSU2_TR(0x593718);
if(r1(R+518)){{goto L59376f;}}
}
B59371a:L59371a:{c.instructions+=22;NFSU2_TR(0x59371a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59371d:{NFSU2_TR(0x59371d);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593723:{NFSU2_TR(0x593723);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593729:{NFSU2_TR(0x593729);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59372f:{NFSU2_TR(0x59372f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B593734:{NFSU2_TR(0x593734);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593738:{NFSU2_TR(0x593738);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59373a:{NFSU2_TR(0x59373a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59373d:{NFSU2_TR(0x59373d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B59373f:{NFSU2_TR(0x59373f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593742:{NFSU2_TR(0x593742);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B593745:{NFSU2_TR(0x593745);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59374b:{NFSU2_TR(0x59374b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593751:{NFSU2_TR(0x593751);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593757:{NFSU2_TR(0x593757);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59375b:{NFSU2_TR(0x59375b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xc0ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xc0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593761:{NFSU2_TR(0x593761);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B593763:{NFSU2_TR(0x593763);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593766:{NFSU2_TR(0x593766);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B593768:{NFSU2_TR(0x593768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593769:{NFSU2_TR(0x593769);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59376c:{NFSU2_TR(0x59376c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59376f:L59376f:{c.instructions+=3;NFSU2_TR(0x59376f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B593771:{NFSU2_TR(0x593771);
__builtin_memmove((R+4),(R+24),4);
}
B593773:{NFSU2_TR(0x593773);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593776ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B593776:L593776:{c.instructions+=11;NFSU2_TR(0x593776);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593779:{NFSU2_TR(0x593779);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59377c:{NFSU2_TR(0x59377c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59377e:{NFSU2_TR(0x59377e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593782:{NFSU2_TR(0x593782);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B593784:{NFSU2_TR(0x593784);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593787:{NFSU2_TR(0x593787);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B593789:{NFSU2_TR(0x593789);
__builtin_memmove((R+4),(R+24),4);
}
B59378b:{NFSU2_TR(0x59378b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59378e:{NFSU2_TR(0x59378e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B593790:{NFSU2_TR(0x593790);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593793ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B593793:L593793:{c.instructions+=10;NFSU2_TR(0x593793);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593796:{NFSU2_TR(0x593796);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593799:{NFSU2_TR(0x593799);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59379b:{NFSU2_TR(0x59379b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59379f:{NFSU2_TR(0x59379f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5937a1:{NFSU2_TR(0x5937a1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5937a4:{NFSU2_TR(0x5937a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5937a6:{NFSU2_TR(0x5937a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5937a7:{NFSU2_TR(0x5937a7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5937aa:{NFSU2_TR(0x5937aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5937b0:L5937b0:{c.instructions+=12;NFSU2_TR(0x5937b0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5937b3:{NFSU2_TR(0x5937b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5937b4:{NFSU2_TR(0x5937b4);
__builtin_memmove((R+24),(R+4),4);
}
B5937b6:{NFSU2_TR(0x5937b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5937bc:{NFSU2_TR(0x5937bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5937bf:{NFSU2_TR(0x5937bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5937c1:{NFSU2_TR(0x5937c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5937c5:{NFSU2_TR(0x5937c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5937c6:{NFSU2_TR(0x5937c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5937ca:{NFSU2_TR(0x5937ca);
__builtin_memmove((R+4),(R+24),4);
}
B5937cc:{NFSU2_TR(0x5937cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5937d0:{NFSU2_TR(0x5937d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5937d3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5937d3:L5937d3:{c.instructions+=14;NFSU2_TR(0x5937d3);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5937d6:{NFSU2_TR(0x5937d6);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5937d9:{NFSU2_TR(0x5937d9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5937dc:{NFSU2_TR(0x5937dc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5937df:{NFSU2_TR(0x5937df);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5937e2:{NFSU2_TR(0x5937e2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5937e4:{NFSU2_TR(0x5937e4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5937e6:{NFSU2_TR(0x5937e6);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5937e9:{NFSU2_TR(0x5937e9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5937eb:{NFSU2_TR(0x5937eb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5937ef:{NFSU2_TR(0x5937ef);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5937f5:{NFSU2_TR(0x5937f5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5937f7:{NFSU2_TR(0x5937f7);
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
B5937fa:{NFSU2_TR(0x5937fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593804;}}
}
B5937fc:L5937fc:{c.instructions+=1;NFSU2_TR(0x5937fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B593804:L593804:{c.instructions+=8;NFSU2_TR(0x593804);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593808:{NFSU2_TR(0x593808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59380a:{NFSU2_TR(0x59380a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59380e:{NFSU2_TR(0x59380e);
__builtin_memmove((R+4),(R+24),4);
}
B593810:{NFSU2_TR(0x593810);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B593816:{NFSU2_TR(0x593816);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B593818:{NFSU2_TR(0x593818);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59381c:{NFSU2_TR(0x59381c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59381full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59381f:L59381f:{c.instructions+=15;NFSU2_TR(0x59381f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593822:{NFSU2_TR(0x593822);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593825:{NFSU2_TR(0x593825);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593828:{NFSU2_TR(0x593828);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59382b:{NFSU2_TR(0x59382b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59382d:{NFSU2_TR(0x59382d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59382f:{NFSU2_TR(0x59382f);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593832:{NFSU2_TR(0x593832);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B593834:{NFSU2_TR(0x593834);
{u32 ea_=u32(r4(R+28)+u32(124u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593837:{NFSU2_TR(0x593837);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59383b:{NFSU2_TR(0x59383b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59383d:{NFSU2_TR(0x59383d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B593843:{NFSU2_TR(0x593843);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B593845:{NFSU2_TR(0x593845);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B593848:{NFSU2_TR(0x593848);
if(r1(R+514)){{goto L593852;}}
}
B59384a:L59384a:{c.instructions+=2;NFSU2_TR(0x59384a);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593850:{NFSU2_TR(0x593850);
{goto L593856;}
}
B593852:L593852:{c.instructions+=1;NFSU2_TR(0x593852);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593856:L593856:{c.instructions+=16;NFSU2_TR(0x593856);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59385a:{NFSU2_TR(0x59385a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59385c:{NFSU2_TR(0x59385c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59385e:{NFSU2_TR(0x59385e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593862:{NFSU2_TR(0x593862);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593866:{NFSU2_TR(0x593866);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B593868:{NFSU2_TR(0x593868);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59386a:{NFSU2_TR(0x59386a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59386c:{NFSU2_TR(0x59386c);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59386e:{NFSU2_TR(0x59386e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B593870:{NFSU2_TR(0x593870);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B593872:{NFSU2_TR(0x593872);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B593874:{NFSU2_TR(0x593874);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B593876:{NFSU2_TR(0x593876);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B593878:{NFSU2_TR(0x593878);
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
B59387b:{NFSU2_TR(0x59387b);
if(r1(R+514)){{goto L5938a3;}}
}
B59387d:L59387d:{c.instructions+=7;NFSU2_TR(0x59387d);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593880:{NFSU2_TR(0x593880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B593882:{NFSU2_TR(0x593882);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B593888:{NFSU2_TR(0x593888);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593889:{NFSU2_TR(0x593889);
__builtin_memmove((R+4),(R+24),4);
}
B59388b:{NFSU2_TR(0x59388b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59388e:{NFSU2_TR(0x59388e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593891ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B593891:L593891:{c.instructions+=3;NFSU2_TR(0x593891);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593892:{NFSU2_TR(0x593892);
__builtin_memmove((R+4),(R+28),4);
}
B593894:{NFSU2_TR(0x593894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593899ull));
TAIL_STATIC(0x5d3450u,5d3);
}
B593899:L593899:{c.instructions+=4;NFSU2_TR(0x593899);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59389c:{NFSU2_TR(0x59389c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59389e:{NFSU2_TR(0x59389e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5938a1:{NFSU2_TR(0x5938a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5938ad;}}
}
B5938a3:L5938a3:{c.instructions+=5;NFSU2_TR(0x5938a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5938a4:{NFSU2_TR(0x5938a4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5938a6:{NFSU2_TR(0x5938a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5938a7:{NFSU2_TR(0x5938a7);
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
B5938aa:{NFSU2_TR(0x5938aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5938ad:L5938ad:{c.instructions+=5;NFSU2_TR(0x5938ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5938ae:{NFSU2_TR(0x5938ae);
w4(R+0,u32(0x1ull));
}
B5938b3:{NFSU2_TR(0x5938b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5938b4:{NFSU2_TR(0x5938b4);
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
B5938b7:{NFSU2_TR(0x5938b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5938c0:L5938c0:{c.instructions+=5;NFSU2_TR(0x5938c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5938c3:{NFSU2_TR(0x5938c3);
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
B5938c5:{NFSU2_TR(0x5938c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5938cc:{NFSU2_TR(0x5938cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5938d3:{NFSU2_TR(0x5938d3);
if(r1(R+518)){{goto L593935;}}
}
B5938d5:L5938d5:{c.instructions+=4;NFSU2_TR(0x5938d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5938db:{NFSU2_TR(0x5938db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5938de:{NFSU2_TR(0x5938de);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5938df:{NFSU2_TR(0x5938df);
if(r1(R+518)){{goto L59390e;}}
}
B5938e1:L5938e1:{c.instructions+=2;NFSU2_TR(0x5938e1);
u8 U[6];
w1(R+512,u8((r4(R+8))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x2ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5938e4:{NFSU2_TR(0x5938e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593935;}}
}
B5938e6:L5938e6:{c.instructions+=3;NFSU2_TR(0x5938e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5938e9:{NFSU2_TR(0x5938e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5938eb:{NFSU2_TR(0x5938eb);
if(r1(R+518)){{goto L5938f2;}}
}
B5938ed:L5938ed:{c.instructions+=2;NFSU2_TR(0x5938ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5938f0:{NFSU2_TR(0x5938f0);
{goto L5938f4;}
}
B5938f2:L5938f2:{c.instructions+=1;NFSU2_TR(0x5938f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5938f4:L5938f4:{c.instructions+=3;NFSU2_TR(0x5938f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5938f6:{NFSU2_TR(0x5938f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5938f9:{NFSU2_TR(0x5938f9);
if(r1(R+518)){{goto L593905;}}
}
B5938fb:L5938fb:{c.instructions+=4;NFSU2_TR(0x5938fb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5938fe:{NFSU2_TR(0x5938fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593901:{NFSU2_TR(0x593901);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593904:{NFSU2_TR(0x593904);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593905:L593905:{c.instructions+=4;NFSU2_TR(0x593905);
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
B593907:{NFSU2_TR(0x593907);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59390a:{NFSU2_TR(0x59390a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59390d:{NFSU2_TR(0x59390d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59390e:L59390e:{c.instructions+=3;NFSU2_TR(0x59390e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593911:{NFSU2_TR(0x593911);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B593913:{NFSU2_TR(0x593913);
if(r1(R+518)){{goto L59391a;}}
}
B593915:L593915:{c.instructions+=2;NFSU2_TR(0x593915);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B593918:{NFSU2_TR(0x593918);
{goto L59391c;}
}
B59391a:L59391a:{c.instructions+=1;NFSU2_TR(0x59391a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59391c:L59391c:{c.instructions+=3;NFSU2_TR(0x59391c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59391e:{NFSU2_TR(0x59391e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593921:{NFSU2_TR(0x593921);
if(r1(R+518)){{goto L59392d;}}
}
B593923:L593923:{c.instructions+=4;NFSU2_TR(0x593923);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593926:{NFSU2_TR(0x593926);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593929:{NFSU2_TR(0x593929);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59392c:{NFSU2_TR(0x59392c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59392d:L59392d:{c.instructions+=3;NFSU2_TR(0x59392d);
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
B59392f:{NFSU2_TR(0x59392f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593932:{NFSU2_TR(0x593932);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593935:L593935:{c.instructions+=1;NFSU2_TR(0x593935);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593940:L593940:{c.instructions+=5;NFSU2_TR(0x593940);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593944:{NFSU2_TR(0x593944);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B593946:{NFSU2_TR(0x593946);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593947:{NFSU2_TR(0x593947);
__builtin_memmove((R+24),(R+4),4);
}
B593949:{NFSU2_TR(0x593949);
if(r1(R+518)){{goto L59395a;}}
}
B59394b:L59394b:{c.instructions+=3;NFSU2_TR(0x59394b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B59394e:{NFSU2_TR(0x59394e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B593950:{NFSU2_TR(0x593950);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59395a;}}
}
B593952:L593952:{c.instructions+=2;NFSU2_TR(0x593952);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593958:{NFSU2_TR(0x593958);
{goto L59395c;}
}
B59395a:L59395a:{c.instructions+=1;NFSU2_TR(0x59395a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59395c:L59395c:{c.instructions+=3;NFSU2_TR(0x59395c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593962:{NFSU2_TR(0x593962);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593963:{NFSU2_TR(0x593963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593968ull));
TAIL_STATIC(0x5f4960u,5f4);
}
B593968:L593968:{c.instructions+=2;NFSU2_TR(0x593968);
__builtin_memmove((R+4),(R+24),4);
}
B59396a:{NFSU2_TR(0x59396a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59396full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5938c0u);}goto L5938c0;}
}
B59396f:L59396f:{c.instructions+=3;NFSU2_TR(0x59396f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B593973:{NFSU2_TR(0x593973);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593974:{NFSU2_TR(0x593974);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593980:L593980:{c.instructions+=8;NFSU2_TR(0x593980);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593981:{NFSU2_TR(0x593981);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B593985:{NFSU2_TR(0x593985);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593986:{NFSU2_TR(0x593986);
__builtin_memmove((R+28),(R+4),4);
}
B593988:{NFSU2_TR(0x593988);
__builtin_memmove((R+4),gp(0x81cb88),4);
}
B59398e:{NFSU2_TR(0x59398e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B593990:{NFSU2_TR(0x593990);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B593992:{NFSU2_TR(0x593992);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5939df;}}
}
B593994:L593994:{c.instructions+=2;NFSU2_TR(0x593994);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B593996:{NFSU2_TR(0x593996);
if(r1(R+518)){{goto L5939c5;}}
}
B593998:L593998:{c.instructions+=2;NFSU2_TR(0x593998);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B59399c:{NFSU2_TR(0x59399c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5939c5;}}
}
B59399e:L59399e:{c.instructions+=3;NFSU2_TR(0x59399e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5939a0:{NFSU2_TR(0x5939a0);
__builtin_memmove((R+4),(R+24),4);
}
B5939a2:{NFSU2_TR(0x5939a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5939a8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5939a8:L5939a8:{c.instructions+=2;NFSU2_TR(0x5939a8);
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
B5939ab:{NFSU2_TR(0x5939ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5939c5;}}
}
B5939ad:L5939ad:{c.instructions+=4;NFSU2_TR(0x5939ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5939af:{NFSU2_TR(0x5939af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5939b0:{NFSU2_TR(0x5939b0);
__builtin_memmove((R+4),(R+24),4);
}
B5939b2:{NFSU2_TR(0x5939b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5939b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5939b5:L5939b5:{c.instructions+=2;NFSU2_TR(0x5939b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5939b7:{NFSU2_TR(0x5939b7);
if(r1(R+518)){{goto L5939dd;}}
}
B5939b9:L5939b9:{c.instructions+=3;NFSU2_TR(0x5939b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5939ba:{NFSU2_TR(0x5939ba);
__builtin_memmove((R+4),(R+28),4);
}
B5939bc:{NFSU2_TR(0x5939bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5939c1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5931f0u);}goto L5931f0;}
}
B5939c1:L5939c1:{c.instructions+=2;NFSU2_TR(0x5939c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5939c3:{NFSU2_TR(0x5939c3);
{goto L5939d4;}
}
B5939c5:L5939c5:{c.instructions+=3;NFSU2_TR(0x5939c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5939c8:{NFSU2_TR(0x5939c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5939ca:{NFSU2_TR(0x5939ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5939dd;}}
}
B5939cc:L5939cc:{c.instructions+=3;NFSU2_TR(0x5939cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5939cf:{NFSU2_TR(0x5939cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5939d2:{NFSU2_TR(0x5939d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5939d4:L5939d4:{c.instructions+=1;NFSU2_TR(0x5939d4);
if(r1(R+518)){{goto L5939dd;}}
}
B5939d6:L5939d6:{c.instructions+=2;NFSU2_TR(0x5939d6);
w4(R+0,u32(0x1ull));
}
B5939db:{NFSU2_TR(0x5939db);
{goto L5939df;}
}
B5939dd:L5939dd:{c.instructions+=1;NFSU2_TR(0x5939dd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5939df:L5939df:{c.instructions+=3;NFSU2_TR(0x5939df);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5939e5:{NFSU2_TR(0x5939e5);
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
B5939e7:{NFSU2_TR(0x5939e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5939f6;}}
}
B5939e9:L5939e9:{c.instructions+=2;NFSU2_TR(0x5939e9);
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
B5939eb:{NFSU2_TR(0x5939eb);
if(r1(R+518)){{goto L5939f6;}}
}
B5939ed:L5939ed:{c.instructions+=3;NFSU2_TR(0x5939ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5939f0:{NFSU2_TR(0x5939f0);
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
B5939f2:{NFSU2_TR(0x5939f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5939f6;}}
}
B5939f4:L5939f4:{c.instructions+=1;NFSU2_TR(0x5939f4);
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
B5939f6:L5939f6:{c.instructions+=3;NFSU2_TR(0x5939f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5939f7:{NFSU2_TR(0x5939f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5939f8:{NFSU2_TR(0x5939f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593a00:L593a00:{c.instructions+=4;NFSU2_TR(0x593a00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593a01:{NFSU2_TR(0x593a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593a04:{NFSU2_TR(0x593a04);
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
B593a06:{NFSU2_TR(0x593a06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593a10;}}
}
B593a08:L593a08:{c.instructions+=3;NFSU2_TR(0x593a08);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593a0e:{NFSU2_TR(0x593a0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B593a0f:{NFSU2_TR(0x593a0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593a10:L593a10:{c.instructions+=8;NFSU2_TR(0x593a10);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593a16:{NFSU2_TR(0x593a16);
{u32 ea_=u32(u32(8001668u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B593a1c:{NFSU2_TR(0x593a1c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593a20:{NFSU2_TR(0x593a20);
{u32 ea_=u32(r4(R+0)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593a26:{NFSU2_TR(0x593a26);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B593a2a:{NFSU2_TR(0x593a2a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B593a2c:{NFSU2_TR(0x593a2c);
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
B593a2f:{NFSU2_TR(0x593a2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593a37;}}
}
B593a31:L593a31:{c.instructions+=2;NFSU2_TR(0x593a31);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B593a33:{NFSU2_TR(0x593a33);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593a37:L593a37:{c.instructions+=2;NFSU2_TR(0x593a37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B593a38:{NFSU2_TR(0x593a38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593a40:L593a40:{c.instructions+=4;NFSU2_TR(0x593a40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593a41:{NFSU2_TR(0x593a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593a47:{NFSU2_TR(0x593a47);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B593a4b:{NFSU2_TR(0x593a4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593a55;}}
}
B593a4d:L593a4d:{c.instructions+=2;NFSU2_TR(0x593a4d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593a53:{NFSU2_TR(0x593a53);
{goto L593a5b;}
}
B593a55:L593a55:{c.instructions+=1;NFSU2_TR(0x593a55);
{u32 ea_=u32(u32(8001672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593a5b:L593a5b:{c.instructions+=5;NFSU2_TR(0x593a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593a5e:{NFSU2_TR(0x593a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593a64:{NFSU2_TR(0x593a64);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593a66:{NFSU2_TR(0x593a66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B593a6c:{NFSU2_TR(0x593a6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593a74;}}
}
B593a6e:L593a6e:{c.instructions+=1;NFSU2_TR(0x593a6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x170ull))));
__builtin_memmove((R+8),(U+0),4);
}
B593a74:L593a74:{c.instructions+=62;NFSU2_TR(0x593a74);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593a77:{NFSU2_TR(0x593a77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593a78:{NFSU2_TR(0x593a78);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593a7b:{NFSU2_TR(0x593a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B593a7e:{NFSU2_TR(0x593a7e);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B593a80:{NFSU2_TR(0x593a80);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B593a86:{NFSU2_TR(0x593a86);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593a88:{NFSU2_TR(0x593a88);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593a8c:{NFSU2_TR(0x593a8c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593a8e:{NFSU2_TR(0x593a8e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B593a90:{NFSU2_TR(0x593a90);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B593a92:{NFSU2_TR(0x593a92);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593a95:{NFSU2_TR(0x593a95);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B593a97:{NFSU2_TR(0x593a97);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593a9a:{NFSU2_TR(0x593a9a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593a9e:{NFSU2_TR(0x593a9e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B593aa0:{NFSU2_TR(0x593aa0);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593aa3:{NFSU2_TR(0x593aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B593aa6:{NFSU2_TR(0x593aa6);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593aa9:{NFSU2_TR(0x593aa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593aad:{NFSU2_TR(0x593aad);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593ab0:{NFSU2_TR(0x593ab0);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B593ab2:{NFSU2_TR(0x593ab2);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593ab5:{NFSU2_TR(0x593ab5);
{u32 ea_=u32(r4(R+4)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593abb:{NFSU2_TR(0x593abb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B593abd:{NFSU2_TR(0x593abd);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B593abf:{NFSU2_TR(0x593abf);
{u32 ea_=u32(r4(R+4)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593ac5:{NFSU2_TR(0x593ac5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B593ac7:{NFSU2_TR(0x593ac7);
{u32 ea_=u32(r4(R+4)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593acd:{NFSU2_TR(0x593acd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593ad1:{NFSU2_TR(0x593ad1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B593ad3:{NFSU2_TR(0x593ad3);
{u32 ea_=u32(r4(R+4)+u32(364u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593ad9:{NFSU2_TR(0x593ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B593adc:{NFSU2_TR(0x593adc);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593adf:{NFSU2_TR(0x593adf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593ae3:{NFSU2_TR(0x593ae3);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593ae6:{NFSU2_TR(0x593ae6);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B593ae8:{NFSU2_TR(0x593ae8);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593aeb:{NFSU2_TR(0x593aeb);
{u32 ea_=u32(r4(R+4)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593af1:{NFSU2_TR(0x593af1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B593af3:{NFSU2_TR(0x593af3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B593af5:{NFSU2_TR(0x593af5);
{u32 ea_=u32(r4(R+4)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593afb:{NFSU2_TR(0x593afb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B593afd:{NFSU2_TR(0x593afd);
{u32 ea_=u32(r4(R+4)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593b03:{NFSU2_TR(0x593b03);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593b07:{NFSU2_TR(0x593b07);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B593b09:{NFSU2_TR(0x593b09);
{u32 ea_=u32(r4(R+4)+u32(380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593b0f:{NFSU2_TR(0x593b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B593b12:{NFSU2_TR(0x593b12);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593b16:{NFSU2_TR(0x593b16);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B593b18:{NFSU2_TR(0x593b18);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593b1b:{NFSU2_TR(0x593b1b);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593b1e:{NFSU2_TR(0x593b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593b21:{NFSU2_TR(0x593b21);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B593b23:{NFSU2_TR(0x593b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593b29:{NFSU2_TR(0x593b29);
{u32 ea_=u32(r4(R+4)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593b2f:{NFSU2_TR(0x593b2f);
__builtin_memmove((R+8),(R+24),4);
}
B593b31:{NFSU2_TR(0x593b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593b37:{NFSU2_TR(0x593b37);
{u32 ea_=u32(r4(R+4)+u32(392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593b3d:{NFSU2_TR(0x593b3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593b3e:{NFSU2_TR(0x593b3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B593b3f:{NFSU2_TR(0x593b3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593b40:L593b40:{c.instructions+=3;NFSU2_TR(0x593b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593b43:{NFSU2_TR(0x593b43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B593b45:{NFSU2_TR(0x593b45);
if(r1(R+518)){{goto L593b4e;}}
}
B593b47:L593b47:{c.instructions+=3;NFSU2_TR(0x593b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593b4a:{NFSU2_TR(0x593b4a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593b4d:{NFSU2_TR(0x593b4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593b4e:L593b4e:{c.instructions+=3;NFSU2_TR(0x593b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593b54:{NFSU2_TR(0x593b54);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593b57:{NFSU2_TR(0x593b57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593b60:L593b60:{c.instructions+=2;NFSU2_TR(0x593b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593b66:{NFSU2_TR(0x593b66);
TAIL_STATIC(0x5ed400u,5ed);
}
B593b70:L593b70:{c.instructions+=3;NFSU2_TR(0x593b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593b73:{NFSU2_TR(0x593b73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B593b75:{NFSU2_TR(0x593b75);
if(r1(R+518)){{goto L593b80;}}
}
B593b77:L593b77:{c.instructions+=3;NFSU2_TR(0x593b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593b7a:{NFSU2_TR(0x593b7a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xa0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593b7f:{NFSU2_TR(0x593b7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593b80:L593b80:{c.instructions+=3;NFSU2_TR(0x593b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593b86:{NFSU2_TR(0x593b86);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x70ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593b89:{NFSU2_TR(0x593b89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593b90:L593b90:{c.instructions+=3;NFSU2_TR(0x593b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593b93:{NFSU2_TR(0x593b93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B593b95:{NFSU2_TR(0x593b95);
if(r1(R+518)){{goto L593ba0;}}
}
B593b97:L593b97:{c.instructions+=3;NFSU2_TR(0x593b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593b9a:{NFSU2_TR(0x593b9a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xb0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xb0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593b9f:{NFSU2_TR(0x593b9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593ba0:L593ba0:{c.instructions+=3;NFSU2_TR(0x593ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593ba6:{NFSU2_TR(0x593ba6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x80ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593bab:{NFSU2_TR(0x593bab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593bb0:L593bb0:{c.instructions+=3;NFSU2_TR(0x593bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593bb3:{NFSU2_TR(0x593bb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B593bb5:{NFSU2_TR(0x593bb5);
if(r1(R+518)){{goto L593bbe;}}
}
B593bb7:L593bb7:{c.instructions+=3;NFSU2_TR(0x593bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593bba:{NFSU2_TR(0x593bba);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x30ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593bbd:{NFSU2_TR(0x593bbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593bbe:L593bbe:{c.instructions+=3;NFSU2_TR(0x593bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593bc4:{NFSU2_TR(0x593bc4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593bc9:{NFSU2_TR(0x593bc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593bd0:L593bd0:{c.instructions+=3;NFSU2_TR(0x593bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593bd3:{NFSU2_TR(0x593bd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B593bd5:{NFSU2_TR(0x593bd5);
if(r1(R+518)){{goto L593be0;}}
}
B593bd7:L593bd7:{c.instructions+=3;NFSU2_TR(0x593bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593bda:{NFSU2_TR(0x593bda);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xc0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xc0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593bdf:{NFSU2_TR(0x593bdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593be0:L593be0:{c.instructions+=3;NFSU2_TR(0x593be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593be6:{NFSU2_TR(0x593be6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x110ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x110ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B593beb:{NFSU2_TR(0x593beb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593bf0:L593bf0:{c.instructions+=9;NFSU2_TR(0x593bf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593bf1:{NFSU2_TR(0x593bf1);
__builtin_memmove((R+20),(R+16),4);
}
B593bf3:{NFSU2_TR(0x593bf3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B593bf6:{NFSU2_TR(0x593bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x5cull))));
}
B593bf9:{NFSU2_TR(0x593bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593bff:{NFSU2_TR(0x593bff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c00:{NFSU2_TR(0x593c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B593c06:{NFSU2_TR(0x593c06);
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
B593c08:{NFSU2_TR(0x593c08);
if(r1(R+518)){{goto L593c49;}}
}
B593c0a:L593c0a:{c.instructions+=6;NFSU2_TR(0x593c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593c0d:{NFSU2_TR(0x593c0d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B593c10:{NFSU2_TR(0x593c10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c11:{NFSU2_TR(0x593c11);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B593c15:{NFSU2_TR(0x593c15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c16:{NFSU2_TR(0x593c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593c1bull));
TAIL_STATIC(0x43c9d0u,43c);
}
B593c1b:L593c1b:{c.instructions+=7;NFSU2_TR(0x593c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593c1e:{NFSU2_TR(0x593c1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c1f:{NFSU2_TR(0x593c1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B593c23:{NFSU2_TR(0x593c23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c24:{NFSU2_TR(0x593c24);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B593c28:{NFSU2_TR(0x593c28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c29:{NFSU2_TR(0x593c29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593c2eull));
TAIL_STATIC(0x43c9c0u,43c);
}
B593c2e:L593c2e:{c.instructions+=8;NFSU2_TR(0x593c2e);
{u32 ea_=u32(u32(8371948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593c34:{NFSU2_TR(0x593c34);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593c37:{NFSU2_TR(0x593c37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B593c3a:{NFSU2_TR(0x593c3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B593c3e:{NFSU2_TR(0x593c3e);
__builtin_memmove((R+4),(R+24),4);
}
B593c40:{NFSU2_TR(0x593c40);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593c43:{NFSU2_TR(0x593c43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c44:{NFSU2_TR(0x593c44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593c49ull));
TAIL_STATIC(0x637c70u,637);
}
B593c49:L593c49:{c.instructions+=4;NFSU2_TR(0x593c49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593c4a:{NFSU2_TR(0x593c4a);
__builtin_memmove((R+16),(R+20),4);
}
B593c4c:{NFSU2_TR(0x593c4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B593c4d:{NFSU2_TR(0x593c4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593c50:L593c50:{c.instructions+=10;NFSU2_TR(0x593c50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c51:{NFSU2_TR(0x593c51);
__builtin_memmove((R+20),(R+16),4);
}
B593c53:{NFSU2_TR(0x593c53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B593c56:{NFSU2_TR(0x593c56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x5cull))));
}
B593c59:{NFSU2_TR(0x593c59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c5a:{NFSU2_TR(0x593c5a);
__builtin_memmove((R+24),(R+4),4);
}
B593c5c:{NFSU2_TR(0x593c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593c62:{NFSU2_TR(0x593c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593c65:{NFSU2_TR(0x593c65);
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
B593c67:{NFSU2_TR(0x593c67);
if(r1(R+518)){{goto L593cb4;}}
}
B593c69:L593c69:{c.instructions+=5;NFSU2_TR(0x593c69);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593c6c:{NFSU2_TR(0x593c6c);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B593c72:{NFSU2_TR(0x593c72);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B593c74:{NFSU2_TR(0x593c74);
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
B593c77:{NFSU2_TR(0x593c77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593cb4;}}
}
B593c79:L593c79:{c.instructions+=6;NFSU2_TR(0x593c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593c7c:{NFSU2_TR(0x593c7c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B593c7f:{NFSU2_TR(0x593c7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c80:{NFSU2_TR(0x593c80);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B593c84:{NFSU2_TR(0x593c84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c85:{NFSU2_TR(0x593c85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593c8aull));
TAIL_STATIC(0x43c9d0u,43c);
}
B593c8a:L593c8a:{c.instructions+=7;NFSU2_TR(0x593c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593c8d:{NFSU2_TR(0x593c8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c8e:{NFSU2_TR(0x593c8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B593c92:{NFSU2_TR(0x593c92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c93:{NFSU2_TR(0x593c93);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B593c97:{NFSU2_TR(0x593c97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593c98:{NFSU2_TR(0x593c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593c9dull));
TAIL_STATIC(0x43c9c0u,43c);
}
B593c9d:L593c9d:{c.instructions+=7;NFSU2_TR(0x593c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593ca0:{NFSU2_TR(0x593ca0);
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
B593ca3:{NFSU2_TR(0x593ca3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593ca4:{NFSU2_TR(0x593ca4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B593ca8:{NFSU2_TR(0x593ca8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593ca9:{NFSU2_TR(0x593ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593caf:{NFSU2_TR(0x593caf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593cb4ull));
TAIL_STATIC(0x402350u,402);
}
B593cb4:L593cb4:{c.instructions+=4;NFSU2_TR(0x593cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593cb5:{NFSU2_TR(0x593cb5);
__builtin_memmove((R+16),(R+20),4);
}
B593cb7:{NFSU2_TR(0x593cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B593cb8:{NFSU2_TR(0x593cb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593cc0:L593cc0:{c.instructions+=6;NFSU2_TR(0x593cc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593cc1:{NFSU2_TR(0x593cc1);
__builtin_memmove((R+24),(R+4),4);
}
B593cc3:{NFSU2_TR(0x593cc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593cc7:{NFSU2_TR(0x593cc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593cca:{NFSU2_TR(0x593cca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B593ccc:{NFSU2_TR(0x593ccc);
if(r1(R+518)){{goto L593ced;}}
}
B593cce:L593cce:{c.instructions+=3;NFSU2_TR(0x593cce);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B593cd2:{NFSU2_TR(0x593cd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593cd3:{NFSU2_TR(0x593cd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593cd8ull));
TAIL_STATIC(0x5716c0u,571);
}
B593cd8:L593cd8:{c.instructions+=8;NFSU2_TR(0x593cd8);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593cdc:{NFSU2_TR(0x593cdc);
__builtin_memmove((R+4),(R+0),1);
}
B593cde:{NFSU2_TR(0x593cde);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B593ce1:{NFSU2_TR(0x593ce1);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B593ce3:{NFSU2_TR(0x593ce3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B593ce6:{NFSU2_TR(0x593ce6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B593ce9:{NFSU2_TR(0x593ce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593cea:{NFSU2_TR(0x593cea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593ced:L593ced:{c.instructions+=8;NFSU2_TR(0x593ced);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B593cf0:{NFSU2_TR(0x593cf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593cf3:{NFSU2_TR(0x593cf3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r4(U+0))));
}
B593cf6:{NFSU2_TR(0x593cf6);
w1(R+8,u8(u32(r1(R+8))+u32(r1(R+0))));
}
B593cf8:{NFSU2_TR(0x593cf8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B593cfc:{NFSU2_TR(0x593cfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593cfd:{NFSU2_TR(0x593cfd);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B593d01:{NFSU2_TR(0x593d01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593d06ull));
TAIL_STATIC(0x5716c0u,571);
}
B593d06:L593d06:{c.instructions+=2;NFSU2_TR(0x593d06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593d07:{NFSU2_TR(0x593d07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593d10:L593d10:{c.instructions+=8;NFSU2_TR(0x593d10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593d11:{NFSU2_TR(0x593d11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593d12:{NFSU2_TR(0x593d12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B593d16:{NFSU2_TR(0x593d16);
__builtin_memmove((R+24),(R+4),4);
}
B593d18:{NFSU2_TR(0x593d18);
u8 U[4];
w4(U+0,u32(0x7a1cf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593d1d:{NFSU2_TR(0x593d1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593d1e:{NFSU2_TR(0x593d1e);
__builtin_memmove((R+4),(R+28),4);
}
B593d20:{NFSU2_TR(0x593d20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593d25ull));
TAIL_STATIC(0x578ce0u,578);
}
B593d25:L593d25:{c.instructions+=4;NFSU2_TR(0x593d25);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593d28:{NFSU2_TR(0x593d28);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B593d2a:{NFSU2_TR(0x593d2a);
__builtin_memmove((R+4),(R+28),4);
}
B593d2c:{NFSU2_TR(0x593d2c);
if(r1(R+518)){{goto L593d55;}}
}
B593d2e:L593d2e:{c.instructions+=3;NFSU2_TR(0x593d2e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B593d32:{NFSU2_TR(0x593d32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593d33:{NFSU2_TR(0x593d33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593d38ull));
TAIL_STATIC(0x5716c0u,571);
}
B593d38:L593d38:{c.instructions+=8;NFSU2_TR(0x593d38);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593d3c:{NFSU2_TR(0x593d3c);
__builtin_memmove((R+4),(R+0),1);
}
B593d3e:{NFSU2_TR(0x593d3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B593d41:{NFSU2_TR(0x593d41);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B593d44:{NFSU2_TR(0x593d44);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B593d46:{NFSU2_TR(0x593d46);
__builtin_memmove((R+4),(R+28),4);
}
B593d48:{NFSU2_TR(0x593d48);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B593d4b:{NFSU2_TR(0x593d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593d50ull));
TAIL_STATIC(0x578d90u,578);
}
B593d50:L593d50:{c.instructions+=3;NFSU2_TR(0x593d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B593d51:{NFSU2_TR(0x593d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593d52:{NFSU2_TR(0x593d52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593d55:L593d55:{c.instructions+=8;NFSU2_TR(0x593d55);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B593d58:{NFSU2_TR(0x593d58);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593d5b:{NFSU2_TR(0x593d5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r4(U+0))));
}
B593d5e:{NFSU2_TR(0x593d5e);
w1(R+8,u8(u32(r1(R+8))+u32(r1(R+0))));
}
B593d60:{NFSU2_TR(0x593d60);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B593d64:{NFSU2_TR(0x593d64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593d65:{NFSU2_TR(0x593d65);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B593d69:{NFSU2_TR(0x593d69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593d6eull));
TAIL_STATIC(0x5716c0u,571);
}
B593d6e:L593d6e:{c.instructions+=2;NFSU2_TR(0x593d6e);
__builtin_memmove((R+4),(R+28),4);
}
B593d70:{NFSU2_TR(0x593d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593d75ull));
TAIL_STATIC(0x578d90u,578);
}
B593d75:L593d75:{c.instructions+=3;NFSU2_TR(0x593d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B593d76:{NFSU2_TR(0x593d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593d77:{NFSU2_TR(0x593d77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593d80:L593d80:{c.instructions+=2;NFSU2_TR(0x593d80);
w4(R+0,u32(0x86b390ull));
}
B593d85:{NFSU2_TR(0x593d85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593d90:L593d90:{c.instructions+=3;NFSU2_TR(0x593d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593d93:{NFSU2_TR(0x593d93);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B593d97:{NFSU2_TR(0x593d97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593da0:L593da0:{c.instructions+=3;NFSU2_TR(0x593da0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593da4:{NFSU2_TR(0x593da4);
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
B593da6:{NFSU2_TR(0x593da6);
if(r1(R+518)){{goto L593dae;}}
}
B593da8:L593da8:{c.instructions+=3;NFSU2_TR(0x593da8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B593daa:{NFSU2_TR(0x593daa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593dac:{NFSU2_TR(0x593dac);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593daeull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B593dae:L593dae:{c.instructions+=1;NFSU2_TR(0x593dae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593db0:L593db0:{c.instructions+=5;NFSU2_TR(0x593db0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593db2:{NFSU2_TR(0x593db2);
u8 U[4];
w4(U+0,u32(0x7a1d10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593db7:{NFSU2_TR(0x593db7);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593db9:{NFSU2_TR(0x593db9);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593dbb:{NFSU2_TR(0x593dbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593dc0ull));
TAIL_STATIC(0x440df0u,440);
}
B593dc0:L593dc0:{c.instructions+=3;NFSU2_TR(0x593dc0);
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
B593dc3:{NFSU2_TR(0x593dc3);
__builtin_memmove(gp(0x86b2cc),(R+0),4);
}
B593dc8:{NFSU2_TR(0x593dc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593dd0:L593dd0:{c.instructions+=3;NFSU2_TR(0x593dd0);
__builtin_memmove((R+0),gp(0x86b2cc),4);
}
B593dd5:{NFSU2_TR(0x593dd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593dd6:{NFSU2_TR(0x593dd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593ddbull));
TAIL_STATIC(0x440e40u,440);
}
B593ddb:L593ddb:{c.instructions+=3;NFSU2_TR(0x593ddb);
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
B593dde:{NFSU2_TR(0x593dde);
s4(0x86b2cc,u32(0x0ull));
}
B593de8:{NFSU2_TR(0x593de8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593df0:L593df0:{c.instructions+=19;NFSU2_TR(0x593df0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593df1:{NFSU2_TR(0x593df1);
__builtin_memmove((R+20),(R+16),4);
}
B593df3:{NFSU2_TR(0x593df3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B593df6:{NFSU2_TR(0x593df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B593df9:{NFSU2_TR(0x593df9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593dfa:{NFSU2_TR(0x593dfa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593dfb:{NFSU2_TR(0x593dfb);
__builtin_memmove((R+24),(R+4),4);
}
B593dfd:{NFSU2_TR(0x593dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593e00:{NFSU2_TR(0x593e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593e03:{NFSU2_TR(0x593e03);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593e06:{NFSU2_TR(0x593e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593e09:{NFSU2_TR(0x593e09);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B593e0c:{NFSU2_TR(0x593e0c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593e10:{NFSU2_TR(0x593e10);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593e13:{NFSU2_TR(0x593e13);
__builtin_memmove((R+0),gp(0x7fbf18),4);
}
B593e18:{NFSU2_TR(0x593e18);
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
B593e1a:{NFSU2_TR(0x593e1a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593e1e:{NFSU2_TR(0x593e1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593e22:{NFSU2_TR(0x593e22);
if(r1(R+518)){{goto L593e4a;}}
}
B593e24:L593e24:{c.instructions+=3;NFSU2_TR(0x593e24);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593e27:{NFSU2_TR(0x593e27);
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
B593e29:{NFSU2_TR(0x593e29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593e4a;}}
}
B593e2b:L593e2b:{c.instructions+=2;NFSU2_TR(0x593e2b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593e2f:{NFSU2_TR(0x593e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593e32:L593e32:{c.instructions+=10;NFSU2_TR(0x593e32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593e36:{NFSU2_TR(0x593e36);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593e38:{NFSU2_TR(0x593e38);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593e3c:{NFSU2_TR(0x593e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593e3f:{NFSU2_TR(0x593e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593e42:{NFSU2_TR(0x593e42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593e43:{NFSU2_TR(0x593e43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B593e44:{NFSU2_TR(0x593e44);
__builtin_memmove((R+16),(R+20),4);
}
B593e46:{NFSU2_TR(0x593e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B593e47:{NFSU2_TR(0x593e47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593e4a:L593e4a:{c.instructions+=3;NFSU2_TR(0x593e4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B593e4c:{NFSU2_TR(0x593e4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B593e4e:{NFSU2_TR(0x593e4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x593e51ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B593e51:L593e51:{c.instructions+=4;NFSU2_TR(0x593e51);
__builtin_memmove((R+4),(R+0),4);
}
B593e53:{NFSU2_TR(0x593e53);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B593e59:{NFSU2_TR(0x593e59);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B593e5b:{NFSU2_TR(0x593e5b);
if(r1(R+518)){{goto L593e76;}}
}
B593e5d:L593e5d:{c.instructions+=6;NFSU2_TR(0x593e5d);
{u32 ea_=u32(r4(R+4)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593e63:{NFSU2_TR(0x593e63);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1f0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B593e69:{NFSU2_TR(0x593e69);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B593e6f:{NFSU2_TR(0x593e6f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B593e71:{NFSU2_TR(0x593e71);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B593e74:{NFSU2_TR(0x593e74);
if(r1(R+518)){{goto L593e7c;}}
}
B593e76:L593e76:{c.instructions+=1;NFSU2_TR(0x593e76);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B593e7c:L593e7c:{c.instructions+=4;NFSU2_TR(0x593e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593e7f:{NFSU2_TR(0x593e7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B593e81:{NFSU2_TR(0x593e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593e84:{NFSU2_TR(0x593e84);
if(r1(R+518)){{goto L593e8d;}}
}
B593e86:L593e86:{c.instructions+=3;NFSU2_TR(0x593e86);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B593e89:{NFSU2_TR(0x593e89);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B593e8b:{NFSU2_TR(0x593e8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593e93;}}
}
B593e8d:L593e8d:{c.instructions+=1;NFSU2_TR(0x593e8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((R+0),(U+0),4);
}
B593e93:L593e93:{c.instructions+=3;NFSU2_TR(0x593e93);
__builtin_memmove((R+12),gp(0x7fbf14),4);
}
B593e99:{NFSU2_TR(0x593e99);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B593e9b:{NFSU2_TR(0x593e9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593efd;}}
}
B593e9d:L593e9d:{c.instructions+=21;NFSU2_TR(0x593e9d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593e9f:{NFSU2_TR(0x593e9f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593ea1:{NFSU2_TR(0x593ea1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593ea4:{NFSU2_TR(0x593ea4);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593ea7:{NFSU2_TR(0x593ea7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593eaa:{NFSU2_TR(0x593eaa);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593ead:{NFSU2_TR(0x593ead);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593eb1:{NFSU2_TR(0x593eb1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B593eb3:{NFSU2_TR(0x593eb3);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B593eb5:{NFSU2_TR(0x593eb5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593eb9:{NFSU2_TR(0x593eb9);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B593ebb:{NFSU2_TR(0x593ebb);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B593ebd:{NFSU2_TR(0x593ebd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593ec1:{NFSU2_TR(0x593ec1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B593ec3:{NFSU2_TR(0x593ec3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B593ec9:{NFSU2_TR(0x593ec9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B593ecb:{NFSU2_TR(0x593ecb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B593ecd:{NFSU2_TR(0x593ecd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593ed1:{NFSU2_TR(0x593ed1);
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
B593ed4:{NFSU2_TR(0x593ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593ed7:{NFSU2_TR(0x593ed7);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x593e32u);}goto L593e32;}}
}
B593edd:L593edd:{c.instructions+=14;NFSU2_TR(0x593edd);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B593edf:{NFSU2_TR(0x593edf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593ee3:{NFSU2_TR(0x593ee3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B593ee5:{NFSU2_TR(0x593ee5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593ee9:{NFSU2_TR(0x593ee9);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B593eeb:{NFSU2_TR(0x593eeb);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B593eed:{NFSU2_TR(0x593eed);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593eef:{NFSU2_TR(0x593eef);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593ef2:{NFSU2_TR(0x593ef2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593ef5:{NFSU2_TR(0x593ef5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593ef6:{NFSU2_TR(0x593ef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B593ef7:{NFSU2_TR(0x593ef7);
__builtin_memmove((R+16),(R+20),4);
}
B593ef9:{NFSU2_TR(0x593ef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B593efa:{NFSU2_TR(0x593efa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593efd:L593efd:{c.instructions+=2;NFSU2_TR(0x593efd);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B593f01:{NFSU2_TR(0x593f01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593f0e;}}
}
B593f03:L593f03:{c.instructions+=3;NFSU2_TR(0x593f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593f06:{NFSU2_TR(0x593f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593f0c:{NFSU2_TR(0x593f0c);
{goto L593f10;}
}
B593f0e:L593f0e:{c.instructions+=1;NFSU2_TR(0x593f0e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B593f10:L593f10:{c.instructions+=2;NFSU2_TR(0x593f10);
w1(R+512,u8((r4(R+4))<(u32(0x0ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B593f13:{NFSU2_TR(0x593f13);
if(r1(R+518)){{goto L593f65;}}
}
B593f15:L593f15:{c.instructions+=2;NFSU2_TR(0x593f15);
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
B593f16:{NFSU2_TR(0x593f16);
if(r1(R+518)){{goto L593f46;}}
}
B593f18:L593f18:{c.instructions+=2;NFSU2_TR(0x593f18);
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
B593f19:{NFSU2_TR(0x593f19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L593feb;}}
}
B593f1f:L593f1f:{c.instructions+=16;NFSU2_TR(0x593f1f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593f23:{NFSU2_TR(0x593f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593f26:{NFSU2_TR(0x593f26);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B593f28:{NFSU2_TR(0x593f28);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593f2c:{NFSU2_TR(0x593f2c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B593f2e:{NFSU2_TR(0x593f2e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593f32:{NFSU2_TR(0x593f32);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B593f34:{NFSU2_TR(0x593f34);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B593f36:{NFSU2_TR(0x593f36);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593f38:{NFSU2_TR(0x593f38);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593f3b:{NFSU2_TR(0x593f3b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593f3e:{NFSU2_TR(0x593f3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593f3f:{NFSU2_TR(0x593f3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B593f40:{NFSU2_TR(0x593f40);
__builtin_memmove((R+16),(R+20),4);
}
B593f42:{NFSU2_TR(0x593f42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B593f43:{NFSU2_TR(0x593f43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593f46:L593f46:{c.instructions+=12;NFSU2_TR(0x593f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593f49:{NFSU2_TR(0x593f49);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593f4d:{NFSU2_TR(0x593f4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593f51:{NFSU2_TR(0x593f51);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593f53:{NFSU2_TR(0x593f53);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593f57:{NFSU2_TR(0x593f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593f5a:{NFSU2_TR(0x593f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593f5d:{NFSU2_TR(0x593f5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593f5e:{NFSU2_TR(0x593f5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B593f5f:{NFSU2_TR(0x593f5f);
__builtin_memmove((R+16),(R+20),4);
}
B593f61:{NFSU2_TR(0x593f61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B593f62:{NFSU2_TR(0x593f62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593f65:L593f65:{c.instructions+=21;NFSU2_TR(0x593f65);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593f67:{NFSU2_TR(0x593f67);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593f69:{NFSU2_TR(0x593f69);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593f6c:{NFSU2_TR(0x593f6c);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593f6f:{NFSU2_TR(0x593f6f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593f72:{NFSU2_TR(0x593f72);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B593f75:{NFSU2_TR(0x593f75);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593f79:{NFSU2_TR(0x593f79);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B593f7b:{NFSU2_TR(0x593f7b);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B593f7d:{NFSU2_TR(0x593f7d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593f81:{NFSU2_TR(0x593f81);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B593f83:{NFSU2_TR(0x593f83);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B593f85:{NFSU2_TR(0x593f85);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B593f89:{NFSU2_TR(0x593f89);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B593f8b:{NFSU2_TR(0x593f8b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B593f91:{NFSU2_TR(0x593f91);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B593f93:{NFSU2_TR(0x593f93);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B593f95:{NFSU2_TR(0x593f95);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593f99:{NFSU2_TR(0x593f99);
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
B593f9c:{NFSU2_TR(0x593f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593f9f:{NFSU2_TR(0x593f9f);
if(r1(R+514)){{goto L593fce;}}
}
B593fa1:L593fa1:{c.instructions+=16;NFSU2_TR(0x593fa1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B593fa3:{NFSU2_TR(0x593fa3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593fa7:{NFSU2_TR(0x593fa7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B593fa9:{NFSU2_TR(0x593fa9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B593fad:{NFSU2_TR(0x593fad);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B593faf:{NFSU2_TR(0x593faf);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B593fb1:{NFSU2_TR(0x593fb1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593fb3:{NFSU2_TR(0x593fb3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593fb6:{NFSU2_TR(0x593fb6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593fb9:{NFSU2_TR(0x593fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593fbc:{NFSU2_TR(0x593fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x248ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B593fc6:{NFSU2_TR(0x593fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593fc7:{NFSU2_TR(0x593fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B593fc8:{NFSU2_TR(0x593fc8);
__builtin_memmove((R+16),(R+20),4);
}
B593fca:{NFSU2_TR(0x593fca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B593fcb:{NFSU2_TR(0x593fcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B593fce:L593fce:{c.instructions+=7;NFSU2_TR(0x593fce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B593fd2:{NFSU2_TR(0x593fd2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B593fd4:{NFSU2_TR(0x593fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B593fd8:{NFSU2_TR(0x593fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593fdb:{NFSU2_TR(0x593fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B593fde:{NFSU2_TR(0x593fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B593fe1:{NFSU2_TR(0x593fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x248ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B593feb:L593feb:{c.instructions+=5;NFSU2_TR(0x593feb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B593fec:{NFSU2_TR(0x593fec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B593fed:{NFSU2_TR(0x593fed);
__builtin_memmove((R+16),(R+20),4);
}
B593fef:{NFSU2_TR(0x593fef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B593ff0:{NFSU2_TR(0x593ff0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x593,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
