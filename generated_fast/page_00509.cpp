#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_508(u8* __restrict R,Cpu& c);
u32 body_50a(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x509,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x509,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_509(u8* __restrict R,Cpu& c);
u32 page_509(Cpu& c){return body_509(c.regs.data(),c);}
__attribute__((noinline)) u32 body_509(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x509000:goto L509000;
case 0x509003:c.instructions+=65;goto B509003;
case 0x509007:c.instructions+=64;goto B509007;
case 0x50900a:c.instructions+=63;goto B50900a;
case 0x50900e:c.instructions+=62;goto B50900e;
case 0x509011:c.instructions+=61;goto B509011;
case 0x509014:c.instructions+=60;goto B509014;
case 0x509018:c.instructions+=59;goto B509018;
case 0x50901a:c.instructions+=58;goto B50901a;
case 0x50901c:c.instructions+=57;goto B50901c;
case 0x509020:c.instructions+=56;goto B509020;
case 0x509022:c.instructions+=55;goto B509022;
case 0x509026:c.instructions+=54;goto B509026;
case 0x50902a:c.instructions+=53;goto B50902a;
case 0x50902d:c.instructions+=52;goto B50902d;
case 0x509031:c.instructions+=51;goto B509031;
case 0x509034:c.instructions+=50;goto B509034;
case 0x509038:c.instructions+=49;goto B509038;
case 0x50903c:c.instructions+=48;goto B50903c;
case 0x50903e:c.instructions+=47;goto B50903e;
case 0x509041:c.instructions+=46;goto B509041;
case 0x509045:c.instructions+=45;goto B509045;
case 0x509049:c.instructions+=44;goto B509049;
case 0x50904c:c.instructions+=43;goto B50904c;
case 0x50904f:c.instructions+=42;goto B50904f;
case 0x509052:c.instructions+=41;goto B509052;
case 0x509055:c.instructions+=40;goto B509055;
case 0x509058:c.instructions+=39;goto B509058;
case 0x50905c:c.instructions+=38;goto B50905c;
case 0x50905f:c.instructions+=37;goto B50905f;
case 0x509063:c.instructions+=36;goto B509063;
case 0x509067:c.instructions+=35;goto B509067;
case 0x50906a:c.instructions+=34;goto B50906a;
case 0x50906e:c.instructions+=33;goto B50906e;
case 0x509073:c.instructions+=32;goto B509073;
case 0x509077:c.instructions+=31;goto B509077;
case 0x509079:c.instructions+=30;goto B509079;
case 0x50907b:c.instructions+=29;goto B50907b;
case 0x50907f:c.instructions+=28;goto B50907f;
case 0x509081:c.instructions+=27;goto B509081;
case 0x509085:c.instructions+=26;goto B509085;
case 0x509089:c.instructions+=25;goto B509089;
case 0x50908b:c.instructions+=24;goto B50908b;
case 0x50908f:c.instructions+=23;goto B50908f;
case 0x509093:c.instructions+=22;goto B509093;
case 0x509097:c.instructions+=21;goto B509097;
case 0x50909a:c.instructions+=20;goto B50909a;
case 0x50909e:c.instructions+=19;goto B50909e;
case 0x5090a2:c.instructions+=18;goto B5090a2;
case 0x5090a6:c.instructions+=17;goto B5090a6;
case 0x5090aa:c.instructions+=16;goto B5090aa;
case 0x5090ae:c.instructions+=15;goto B5090ae;
case 0x5090b2:c.instructions+=14;goto B5090b2;
case 0x5090b6:c.instructions+=13;goto B5090b6;
case 0x5090ba:c.instructions+=12;goto B5090ba;
case 0x5090bc:c.instructions+=11;goto B5090bc;
case 0x5090bf:c.instructions+=10;goto B5090bf;
case 0x5090c0:c.instructions+=9;goto B5090c0;
case 0x5090c4:c.instructions+=8;goto B5090c4;
case 0x5090c8:c.instructions+=7;goto B5090c8;
case 0x5090ca:c.instructions+=6;goto B5090ca;
case 0x5090cc:c.instructions+=5;goto B5090cc;
case 0x5090cf:c.instructions+=4;goto B5090cf;
case 0x5090d2:c.instructions+=3;goto B5090d2;
case 0x5090d5:c.instructions+=2;goto B5090d5;
case 0x5090d7:c.instructions+=1;goto B5090d7;
case 0x5090d9:goto L5090d9;
case 0x5090dd:goto L5090dd;
case 0x5090e0:c.instructions+=27;goto B5090e0;
case 0x5090e3:c.instructions+=26;goto B5090e3;
case 0x5090e6:c.instructions+=25;goto B5090e6;
case 0x5090e8:c.instructions+=24;goto B5090e8;
case 0x5090ec:c.instructions+=23;goto B5090ec;
case 0x5090ee:c.instructions+=22;goto B5090ee;
case 0x5090f1:c.instructions+=21;goto B5090f1;
case 0x5090f2:c.instructions+=20;goto B5090f2;
case 0x5090f5:c.instructions+=19;goto B5090f5;
case 0x5090f8:c.instructions+=18;goto B5090f8;
case 0x5090fc:c.instructions+=17;goto B5090fc;
case 0x5090ff:c.instructions+=16;goto B5090ff;
case 0x509102:c.instructions+=15;goto B509102;
case 0x509105:c.instructions+=14;goto B509105;
case 0x509108:c.instructions+=13;goto B509108;
case 0x50910c:c.instructions+=12;goto B50910c;
case 0x509110:c.instructions+=11;goto B509110;
case 0x509113:c.instructions+=10;goto B509113;
case 0x509116:c.instructions+=9;goto B509116;
case 0x50911a:c.instructions+=8;goto B50911a;
case 0x50911d:c.instructions+=7;goto B50911d;
case 0x509120:c.instructions+=6;goto B509120;
case 0x509123:c.instructions+=5;goto B509123;
case 0x509126:c.instructions+=4;goto B509126;
case 0x509128:c.instructions+=3;goto B509128;
case 0x50912b:c.instructions+=2;goto B50912b;
case 0x50912e:c.instructions+=1;goto B50912e;
case 0x509133:goto L509133;
case 0x509135:c.instructions+=1;goto B509135;
case 0x50913b:goto L50913b;
case 0x50913e:c.instructions+=105;goto B50913e;
case 0x509142:c.instructions+=104;goto B509142;
case 0x509145:c.instructions+=103;goto B509145;
case 0x509148:c.instructions+=102;goto B509148;
case 0x50914b:c.instructions+=101;goto B50914b;
case 0x50914f:c.instructions+=100;goto B50914f;
case 0x509152:c.instructions+=99;goto B509152;
case 0x509156:c.instructions+=98;goto B509156;
case 0x50915d:c.instructions+=97;goto B50915d;
case 0x509164:c.instructions+=96;goto B509164;
case 0x509166:c.instructions+=95;goto B509166;
case 0x509168:c.instructions+=94;goto B509168;
case 0x50916b:c.instructions+=93;goto B50916b;
case 0x50916e:c.instructions+=92;goto B50916e;
case 0x509171:c.instructions+=91;goto B509171;
case 0x509174:c.instructions+=90;goto B509174;
case 0x509177:c.instructions+=89;goto B509177;
case 0x509179:c.instructions+=88;goto B509179;
case 0x50917b:c.instructions+=87;goto B50917b;
case 0x50917d:c.instructions+=86;goto B50917d;
case 0x50917f:c.instructions+=85;goto B50917f;
case 0x509181:c.instructions+=84;goto B509181;
case 0x509184:c.instructions+=83;goto B509184;
case 0x509187:c.instructions+=82;goto B509187;
case 0x509189:c.instructions+=81;goto B509189;
case 0x50918c:c.instructions+=80;goto B50918c;
case 0x50918f:c.instructions+=79;goto B50918f;
case 0x509193:c.instructions+=78;goto B509193;
case 0x509197:c.instructions+=77;goto B509197;
case 0x50919a:c.instructions+=76;goto B50919a;
case 0x50919e:c.instructions+=75;goto B50919e;
case 0x5091a0:c.instructions+=74;goto B5091a0;
case 0x5091a3:c.instructions+=73;goto B5091a3;
case 0x5091a5:c.instructions+=72;goto B5091a5;
case 0x5091a7:c.instructions+=71;goto B5091a7;
case 0x5091aa:c.instructions+=70;goto B5091aa;
case 0x5091ad:c.instructions+=69;goto B5091ad;
case 0x5091b0:c.instructions+=68;goto B5091b0;
case 0x5091b3:c.instructions+=67;goto B5091b3;
case 0x5091b6:c.instructions+=66;goto B5091b6;
case 0x5091ba:c.instructions+=65;goto B5091ba;
case 0x5091bd:c.instructions+=64;goto B5091bd;
case 0x5091c1:c.instructions+=63;goto B5091c1;
case 0x5091c4:c.instructions+=62;goto B5091c4;
case 0x5091c7:c.instructions+=61;goto B5091c7;
case 0x5091cb:c.instructions+=60;goto B5091cb;
case 0x5091cd:c.instructions+=59;goto B5091cd;
case 0x5091cf:c.instructions+=58;goto B5091cf;
case 0x5091d3:c.instructions+=57;goto B5091d3;
case 0x5091d5:c.instructions+=56;goto B5091d5;
case 0x5091d9:c.instructions+=55;goto B5091d9;
case 0x5091dd:c.instructions+=54;goto B5091dd;
case 0x5091e0:c.instructions+=53;goto B5091e0;
case 0x5091e4:c.instructions+=52;goto B5091e4;
case 0x5091e7:c.instructions+=51;goto B5091e7;
case 0x5091eb:c.instructions+=50;goto B5091eb;
case 0x5091ef:c.instructions+=49;goto B5091ef;
case 0x5091f1:c.instructions+=48;goto B5091f1;
case 0x5091f4:c.instructions+=47;goto B5091f4;
case 0x5091f8:c.instructions+=46;goto B5091f8;
case 0x5091fc:c.instructions+=45;goto B5091fc;
case 0x5091ff:c.instructions+=44;goto B5091ff;
case 0x509202:c.instructions+=43;goto B509202;
case 0x509205:c.instructions+=42;goto B509205;
case 0x509208:c.instructions+=41;goto B509208;
case 0x50920b:c.instructions+=40;goto B50920b;
case 0x50920f:c.instructions+=39;goto B50920f;
case 0x509212:c.instructions+=38;goto B509212;
case 0x509216:c.instructions+=37;goto B509216;
case 0x50921d:c.instructions+=36;goto B50921d;
case 0x509220:c.instructions+=35;goto B509220;
case 0x509224:c.instructions+=34;goto B509224;
case 0x509229:c.instructions+=33;goto B509229;
case 0x509230:c.instructions+=32;goto B509230;
case 0x509232:c.instructions+=31;goto B509232;
case 0x509234:c.instructions+=30;goto B509234;
case 0x509238:c.instructions+=29;goto B509238;
case 0x50923a:c.instructions+=28;goto B50923a;
case 0x50923e:c.instructions+=27;goto B50923e;
case 0x509245:c.instructions+=26;goto B509245;
case 0x509247:c.instructions+=25;goto B509247;
case 0x50924b:c.instructions+=24;goto B50924b;
case 0x509252:c.instructions+=23;goto B509252;
case 0x509256:c.instructions+=22;goto B509256;
case 0x509259:c.instructions+=21;goto B509259;
case 0x50925d:c.instructions+=20;goto B50925d;
case 0x509261:c.instructions+=19;goto B509261;
case 0x509265:c.instructions+=18;goto B509265;
case 0x509269:c.instructions+=17;goto B509269;
case 0x509270:c.instructions+=16;goto B509270;
case 0x509274:c.instructions+=15;goto B509274;
case 0x50927b:c.instructions+=14;goto B50927b;
case 0x50927f:c.instructions+=13;goto B50927f;
case 0x509281:c.instructions+=12;goto B509281;
case 0x509284:c.instructions+=11;goto B509284;
case 0x509285:c.instructions+=10;goto B509285;
case 0x50928c:c.instructions+=9;goto B50928c;
case 0x509293:c.instructions+=8;goto B509293;
case 0x509295:c.instructions+=7;goto B509295;
case 0x509297:c.instructions+=6;goto B509297;
case 0x50929a:c.instructions+=5;goto B50929a;
case 0x50929e:c.instructions+=4;goto B50929e;
case 0x5092a1:c.instructions+=3;goto B5092a1;
case 0x5092a4:c.instructions+=2;goto B5092a4;
case 0x5092a6:c.instructions+=1;goto B5092a6;
case 0x5092a8:goto L5092a8;
case 0x5092ac:goto L5092ac;
case 0x5092af:c.instructions+=5;goto B5092af;
case 0x5092b2:c.instructions+=4;goto B5092b2;
case 0x5092b4:c.instructions+=3;goto B5092b4;
case 0x5092b8:c.instructions+=2;goto B5092b8;
case 0x5092bb:c.instructions+=1;goto B5092bb;
case 0x5092c1:goto L5092c1;
case 0x5092c3:c.instructions+=1;goto B5092c3;
case 0x5092c9:goto L5092c9;
case 0x5092cc:c.instructions+=91;goto B5092cc;
case 0x5092cf:c.instructions+=90;goto B5092cf;
case 0x5092d2:c.instructions+=89;goto B5092d2;
case 0x5092d5:c.instructions+=88;goto B5092d5;
case 0x5092d7:c.instructions+=87;goto B5092d7;
case 0x5092da:c.instructions+=86;goto B5092da;
case 0x5092e1:c.instructions+=85;goto B5092e1;
case 0x5092e8:c.instructions+=84;goto B5092e8;
case 0x5092ea:c.instructions+=83;goto B5092ea;
case 0x5092ec:c.instructions+=82;goto B5092ec;
case 0x5092ef:c.instructions+=81;goto B5092ef;
case 0x5092f3:c.instructions+=80;goto B5092f3;
case 0x5092f6:c.instructions+=79;goto B5092f6;
case 0x5092f9:c.instructions+=78;goto B5092f9;
case 0x5092fc:c.instructions+=77;goto B5092fc;
case 0x5092fe:c.instructions+=76;goto B5092fe;
case 0x509300:c.instructions+=75;goto B509300;
case 0x509302:c.instructions+=74;goto B509302;
case 0x509304:c.instructions+=73;goto B509304;
case 0x509306:c.instructions+=72;goto B509306;
case 0x509309:c.instructions+=71;goto B509309;
case 0x50930c:c.instructions+=70;goto B50930c;
case 0x50930e:c.instructions+=69;goto B50930e;
case 0x509311:c.instructions+=68;goto B509311;
case 0x509314:c.instructions+=67;goto B509314;
case 0x509317:c.instructions+=66;goto B509317;
case 0x50931a:c.instructions+=65;goto B50931a;
case 0x50931d:c.instructions+=64;goto B50931d;
case 0x50931f:c.instructions+=63;goto B50931f;
case 0x509321:c.instructions+=62;goto B509321;
case 0x509323:c.instructions+=61;goto B509323;
case 0x509326:c.instructions+=60;goto B509326;
case 0x509329:c.instructions+=59;goto B509329;
case 0x50932c:c.instructions+=58;goto B50932c;
case 0x50932f:c.instructions+=57;goto B50932f;
case 0x509332:c.instructions+=56;goto B509332;
case 0x509335:c.instructions+=55;goto B509335;
case 0x509337:c.instructions+=54;goto B509337;
case 0x50933a:c.instructions+=53;goto B50933a;
case 0x50933c:c.instructions+=52;goto B50933c;
case 0x50933e:c.instructions+=51;goto B50933e;
case 0x509342:c.instructions+=50;goto B509342;
case 0x509344:c.instructions+=49;goto B509344;
case 0x509348:c.instructions+=48;goto B509348;
case 0x50934c:c.instructions+=47;goto B50934c;
case 0x50934f:c.instructions+=46;goto B50934f;
case 0x509353:c.instructions+=45;goto B509353;
case 0x509356:c.instructions+=44;goto B509356;
case 0x509359:c.instructions+=43;goto B509359;
case 0x50935b:c.instructions+=42;goto B50935b;
case 0x50935e:c.instructions+=41;goto B50935e;
case 0x509362:c.instructions+=40;goto B509362;
case 0x509366:c.instructions+=39;goto B509366;
case 0x509369:c.instructions+=38;goto B509369;
case 0x50936c:c.instructions+=37;goto B50936c;
case 0x50936f:c.instructions+=36;goto B50936f;
case 0x509372:c.instructions+=35;goto B509372;
case 0x509375:c.instructions+=34;goto B509375;
case 0x509378:c.instructions+=33;goto B509378;
case 0x50937c:c.instructions+=32;goto B50937c;
case 0x50937e:c.instructions+=31;goto B50937e;
case 0x509381:c.instructions+=30;goto B509381;
case 0x509385:c.instructions+=29;goto B509385;
case 0x509387:c.instructions+=28;goto B509387;
case 0x509389:c.instructions+=27;goto B509389;
case 0x50938a:c.instructions+=26;goto B50938a;
case 0x50938d:c.instructions+=25;goto B50938d;
case 0x509390:c.instructions+=24;goto B509390;
case 0x509394:c.instructions+=23;goto B509394;
case 0x509399:c.instructions+=22;goto B509399;
case 0x50939b:c.instructions+=21;goto B50939b;
case 0x50939f:c.instructions+=20;goto B50939f;
case 0x5093a3:c.instructions+=19;goto B5093a3;
case 0x5093a5:c.instructions+=18;goto B5093a5;
case 0x5093a9:c.instructions+=17;goto B5093a9;
case 0x5093ad:c.instructions+=16;goto B5093ad;
case 0x5093b1:c.instructions+=15;goto B5093b1;
case 0x5093b4:c.instructions+=14;goto B5093b4;
case 0x5093b8:c.instructions+=13;goto B5093b8;
case 0x5093bb:c.instructions+=12;goto B5093bb;
case 0x5093bf:c.instructions+=11;goto B5093bf;
case 0x5093c2:c.instructions+=10;goto B5093c2;
case 0x5093c6:c.instructions+=9;goto B5093c6;
case 0x5093ca:c.instructions+=8;goto B5093ca;
case 0x5093cc:c.instructions+=7;goto B5093cc;
case 0x5093cf:c.instructions+=6;goto B5093cf;
case 0x5093d2:c.instructions+=5;goto B5093d2;
case 0x5093d6:c.instructions+=4;goto B5093d6;
case 0x5093da:c.instructions+=3;goto B5093da;
case 0x5093dd:c.instructions+=2;goto B5093dd;
case 0x5093e0:c.instructions+=1;goto B5093e0;
case 0x5093e3:goto L5093e3;
case 0x5093e6:c.instructions+=23;goto B5093e6;
case 0x5093e9:c.instructions+=22;goto B5093e9;
case 0x5093eb:c.instructions+=21;goto B5093eb;
case 0x5093ed:c.instructions+=20;goto B5093ed;
case 0x5093f1:c.instructions+=19;goto B5093f1;
case 0x5093f3:c.instructions+=18;goto B5093f3;
case 0x5093f6:c.instructions+=17;goto B5093f6;
case 0x5093f9:c.instructions+=16;goto B5093f9;
case 0x5093fb:c.instructions+=15;goto B5093fb;
case 0x5093fe:c.instructions+=14;goto B5093fe;
case 0x509401:c.instructions+=13;goto B509401;
case 0x509404:c.instructions+=12;goto B509404;
case 0x509408:c.instructions+=11;goto B509408;
case 0x50940c:c.instructions+=10;goto B50940c;
case 0x50940f:c.instructions+=9;goto B50940f;
case 0x509412:c.instructions+=8;goto B509412;
case 0x509414:c.instructions+=7;goto B509414;
case 0x509417:c.instructions+=6;goto B509417;
case 0x50941b:c.instructions+=5;goto B50941b;
case 0x50941d:c.instructions+=4;goto B50941d;
case 0x50941f:c.instructions+=3;goto B50941f;
case 0x509422:c.instructions+=2;goto B509422;
case 0x509425:c.instructions+=1;goto B509425;
case 0x50942a:goto L50942a;
case 0x50942c:c.instructions+=1;goto B50942c;
case 0x509432:goto L509432;
case 0x509435:c.instructions+=87;goto B509435;
case 0x509438:c.instructions+=86;goto B509438;
case 0x50943b:c.instructions+=85;goto B50943b;
case 0x50943e:c.instructions+=84;goto B50943e;
case 0x509440:c.instructions+=83;goto B509440;
case 0x509443:c.instructions+=82;goto B509443;
case 0x50944a:c.instructions+=81;goto B50944a;
case 0x509451:c.instructions+=80;goto B509451;
case 0x509453:c.instructions+=79;goto B509453;
case 0x509455:c.instructions+=78;goto B509455;
case 0x509458:c.instructions+=77;goto B509458;
case 0x50945c:c.instructions+=76;goto B50945c;
case 0x50945f:c.instructions+=75;goto B50945f;
case 0x509462:c.instructions+=74;goto B509462;
case 0x509465:c.instructions+=73;goto B509465;
case 0x509467:c.instructions+=72;goto B509467;
case 0x509469:c.instructions+=71;goto B509469;
case 0x50946b:c.instructions+=70;goto B50946b;
case 0x50946d:c.instructions+=69;goto B50946d;
case 0x50946f:c.instructions+=68;goto B50946f;
case 0x509472:c.instructions+=67;goto B509472;
case 0x509475:c.instructions+=66;goto B509475;
case 0x509477:c.instructions+=65;goto B509477;
case 0x50947a:c.instructions+=64;goto B50947a;
case 0x50947d:c.instructions+=63;goto B50947d;
case 0x509480:c.instructions+=62;goto B509480;
case 0x509483:c.instructions+=61;goto B509483;
case 0x509486:c.instructions+=60;goto B509486;
case 0x509488:c.instructions+=59;goto B509488;
case 0x50948a:c.instructions+=58;goto B50948a;
case 0x50948c:c.instructions+=57;goto B50948c;
case 0x50948f:c.instructions+=56;goto B50948f;
case 0x509492:c.instructions+=55;goto B509492;
case 0x509495:c.instructions+=54;goto B509495;
case 0x509498:c.instructions+=53;goto B509498;
case 0x50949b:c.instructions+=52;goto B50949b;
case 0x50949e:c.instructions+=51;goto B50949e;
case 0x5094a0:c.instructions+=50;goto B5094a0;
case 0x5094a3:c.instructions+=49;goto B5094a3;
case 0x5094a5:c.instructions+=48;goto B5094a5;
case 0x5094a7:c.instructions+=47;goto B5094a7;
case 0x5094ab:c.instructions+=46;goto B5094ab;
case 0x5094ad:c.instructions+=45;goto B5094ad;
case 0x5094b1:c.instructions+=44;goto B5094b1;
case 0x5094b5:c.instructions+=43;goto B5094b5;
case 0x5094b8:c.instructions+=42;goto B5094b8;
case 0x5094bc:c.instructions+=41;goto B5094bc;
case 0x5094bf:c.instructions+=40;goto B5094bf;
case 0x5094c2:c.instructions+=39;goto B5094c2;
case 0x5094c4:c.instructions+=38;goto B5094c4;
case 0x5094c7:c.instructions+=37;goto B5094c7;
case 0x5094cb:c.instructions+=36;goto B5094cb;
case 0x5094cf:c.instructions+=35;goto B5094cf;
case 0x5094d2:c.instructions+=34;goto B5094d2;
case 0x5094d5:c.instructions+=33;goto B5094d5;
case 0x5094d8:c.instructions+=32;goto B5094d8;
case 0x5094db:c.instructions+=31;goto B5094db;
case 0x5094de:c.instructions+=30;goto B5094de;
case 0x5094e1:c.instructions+=29;goto B5094e1;
case 0x5094e8:c.instructions+=28;goto B5094e8;
case 0x5094ea:c.instructions+=27;goto B5094ea;
case 0x5094ed:c.instructions+=26;goto B5094ed;
case 0x5094f4:c.instructions+=25;goto B5094f4;
case 0x5094f6:c.instructions+=24;goto B5094f6;
case 0x5094f8:c.instructions+=23;goto B5094f8;
case 0x5094fd:c.instructions+=22;goto B5094fd;
case 0x509501:c.instructions+=21;goto B509501;
case 0x509503:c.instructions+=20;goto B509503;
case 0x509507:c.instructions+=19;goto B509507;
case 0x50950e:c.instructions+=18;goto B50950e;
case 0x509510:c.instructions+=17;goto B509510;
case 0x509514:c.instructions+=16;goto B509514;
case 0x50951b:c.instructions+=15;goto B50951b;
case 0x50951f:c.instructions+=14;goto B50951f;
case 0x509522:c.instructions+=13;goto B509522;
case 0x509526:c.instructions+=12;goto B509526;
case 0x509529:c.instructions+=11;goto B509529;
case 0x50952d:c.instructions+=10;goto B50952d;
case 0x509530:c.instructions+=9;goto B509530;
case 0x509537:c.instructions+=8;goto B509537;
case 0x50953e:c.instructions+=7;goto B50953e;
case 0x509540:c.instructions+=6;goto B509540;
case 0x509543:c.instructions+=5;goto B509543;
case 0x509546:c.instructions+=4;goto B509546;
case 0x50954d:c.instructions+=3;goto B50954d;
case 0x509554:c.instructions+=2;goto B509554;
case 0x509556:c.instructions+=1;goto B509556;
case 0x509559:goto L509559;
case 0x50955a:c.instructions+=4;goto B50955a;
case 0x50955d:c.instructions+=3;goto B50955d;
case 0x509560:c.instructions+=2;goto B509560;
case 0x509564:c.instructions+=1;goto B509564;
case 0x509567:goto L509567;
case 0x50956a:c.instructions+=5;goto B50956a;
case 0x50956d:c.instructions+=4;goto B50956d;
case 0x50956f:c.instructions+=3;goto B50956f;
case 0x509573:c.instructions+=2;goto B509573;
case 0x509576:c.instructions+=1;goto B509576;
case 0x50957c:goto L50957c;
case 0x50957e:c.instructions+=1;goto B50957e;
case 0x509584:goto L509584;
case 0x509587:c.instructions+=91;goto B509587;
case 0x50958a:c.instructions+=90;goto B50958a;
case 0x50958d:c.instructions+=89;goto B50958d;
case 0x509590:c.instructions+=88;goto B509590;
case 0x509593:c.instructions+=87;goto B509593;
case 0x509595:c.instructions+=86;goto B509595;
case 0x50959c:c.instructions+=85;goto B50959c;
case 0x5095a3:c.instructions+=84;goto B5095a3;
case 0x5095a5:c.instructions+=83;goto B5095a5;
case 0x5095a7:c.instructions+=82;goto B5095a7;
case 0x5095aa:c.instructions+=81;goto B5095aa;
case 0x5095ae:c.instructions+=80;goto B5095ae;
case 0x5095b1:c.instructions+=79;goto B5095b1;
case 0x5095b4:c.instructions+=78;goto B5095b4;
case 0x5095b7:c.instructions+=77;goto B5095b7;
case 0x5095b9:c.instructions+=76;goto B5095b9;
case 0x5095bb:c.instructions+=75;goto B5095bb;
case 0x5095bd:c.instructions+=74;goto B5095bd;
case 0x5095bf:c.instructions+=73;goto B5095bf;
case 0x5095c1:c.instructions+=72;goto B5095c1;
case 0x5095c4:c.instructions+=71;goto B5095c4;
case 0x5095c7:c.instructions+=70;goto B5095c7;
case 0x5095c9:c.instructions+=69;goto B5095c9;
case 0x5095cc:c.instructions+=68;goto B5095cc;
case 0x5095cf:c.instructions+=67;goto B5095cf;
case 0x5095d2:c.instructions+=66;goto B5095d2;
case 0x5095d4:c.instructions+=65;goto B5095d4;
case 0x5095d6:c.instructions+=64;goto B5095d6;
case 0x5095d9:c.instructions+=63;goto B5095d9;
case 0x5095db:c.instructions+=62;goto B5095db;
case 0x5095dd:c.instructions+=61;goto B5095dd;
case 0x5095e0:c.instructions+=60;goto B5095e0;
case 0x5095e3:c.instructions+=59;goto B5095e3;
case 0x5095e6:c.instructions+=58;goto B5095e6;
case 0x5095e9:c.instructions+=57;goto B5095e9;
case 0x5095ec:c.instructions+=56;goto B5095ec;
case 0x5095ef:c.instructions+=55;goto B5095ef;
case 0x5095f2:c.instructions+=54;goto B5095f2;
case 0x5095f4:c.instructions+=53;goto B5095f4;
case 0x5095f6:c.instructions+=52;goto B5095f6;
case 0x5095f8:c.instructions+=51;goto B5095f8;
case 0x5095fc:c.instructions+=50;goto B5095fc;
case 0x5095fe:c.instructions+=49;goto B5095fe;
case 0x509602:c.instructions+=48;goto B509602;
case 0x509606:c.instructions+=47;goto B509606;
case 0x509609:c.instructions+=46;goto B509609;
case 0x50960d:c.instructions+=45;goto B50960d;
case 0x50960f:c.instructions+=44;goto B50960f;
case 0x509612:c.instructions+=43;goto B509612;
case 0x509614:c.instructions+=42;goto B509614;
case 0x509617:c.instructions+=41;goto B509617;
case 0x50961b:c.instructions+=40;goto B50961b;
case 0x50961f:c.instructions+=39;goto B50961f;
case 0x509622:c.instructions+=38;goto B509622;
case 0x509625:c.instructions+=37;goto B509625;
case 0x509628:c.instructions+=36;goto B509628;
case 0x50962b:c.instructions+=35;goto B50962b;
case 0x50962e:c.instructions+=34;goto B50962e;
case 0x509631:c.instructions+=33;goto B509631;
case 0x509635:c.instructions+=32;goto B509635;
case 0x509638:c.instructions+=31;goto B509638;
case 0x50963a:c.instructions+=30;goto B50963a;
case 0x50963e:c.instructions+=29;goto B50963e;
case 0x509640:c.instructions+=28;goto B509640;
case 0x509641:c.instructions+=27;goto B509641;
case 0x509643:c.instructions+=26;goto B509643;
case 0x509646:c.instructions+=25;goto B509646;
case 0x509649:c.instructions+=24;goto B509649;
case 0x50964e:c.instructions+=23;goto B50964e;
case 0x509652:c.instructions+=22;goto B509652;
case 0x509654:c.instructions+=21;goto B509654;
case 0x509658:c.instructions+=20;goto B509658;
case 0x50965c:c.instructions+=19;goto B50965c;
case 0x50965e:c.instructions+=18;goto B50965e;
case 0x509662:c.instructions+=17;goto B509662;
case 0x509666:c.instructions+=16;goto B509666;
case 0x50966a:c.instructions+=15;goto B50966a;
case 0x50966d:c.instructions+=14;goto B50966d;
case 0x509671:c.instructions+=13;goto B509671;
case 0x509674:c.instructions+=12;goto B509674;
case 0x509678:c.instructions+=11;goto B509678;
case 0x50967b:c.instructions+=10;goto B50967b;
case 0x50967f:c.instructions+=9;goto B50967f;
case 0x509683:c.instructions+=8;goto B509683;
case 0x509685:c.instructions+=7;goto B509685;
case 0x509687:c.instructions+=6;goto B509687;
case 0x50968a:c.instructions+=5;goto B50968a;
case 0x50968e:c.instructions+=4;goto B50968e;
case 0x509692:c.instructions+=3;goto B509692;
case 0x509695:c.instructions+=2;goto B509695;
case 0x509698:c.instructions+=1;goto B509698;
case 0x50969b:goto L50969b;
case 0x50969e:c.instructions+=22;goto B50969e;
case 0x5096a1:c.instructions+=21;goto B5096a1;
case 0x5096a4:c.instructions+=20;goto B5096a4;
case 0x5096a6:c.instructions+=19;goto B5096a6;
case 0x5096aa:c.instructions+=18;goto B5096aa;
case 0x5096ac:c.instructions+=17;goto B5096ac;
case 0x5096af:c.instructions+=16;goto B5096af;
case 0x5096b2:c.instructions+=15;goto B5096b2;
case 0x5096b5:c.instructions+=14;goto B5096b5;
case 0x5096b8:c.instructions+=13;goto B5096b8;
case 0x5096bb:c.instructions+=12;goto B5096bb;
case 0x5096be:c.instructions+=11;goto B5096be;
case 0x5096c2:c.instructions+=10;goto B5096c2;
case 0x5096c5:c.instructions+=9;goto B5096c5;
case 0x5096c8:c.instructions+=8;goto B5096c8;
case 0x5096cc:c.instructions+=7;goto B5096cc;
case 0x5096cf:c.instructions+=6;goto B5096cf;
case 0x5096d2:c.instructions+=5;goto B5096d2;
case 0x5096d4:c.instructions+=4;goto B5096d4;
case 0x5096d6:c.instructions+=3;goto B5096d6;
case 0x5096d9:c.instructions+=2;goto B5096d9;
case 0x5096dc:c.instructions+=1;goto B5096dc;
case 0x5096e1:goto L5096e1;
case 0x5096e3:c.instructions+=1;goto B5096e3;
case 0x5096e9:goto L5096e9;
case 0x5096ec:c.instructions+=87;goto B5096ec;
case 0x5096ef:c.instructions+=86;goto B5096ef;
case 0x5096f2:c.instructions+=85;goto B5096f2;
case 0x5096f5:c.instructions+=84;goto B5096f5;
case 0x5096f8:c.instructions+=83;goto B5096f8;
case 0x5096fa:c.instructions+=82;goto B5096fa;
case 0x509701:c.instructions+=81;goto B509701;
case 0x509708:c.instructions+=80;goto B509708;
case 0x50970a:c.instructions+=79;goto B50970a;
case 0x50970c:c.instructions+=78;goto B50970c;
case 0x50970f:c.instructions+=77;goto B50970f;
case 0x509713:c.instructions+=76;goto B509713;
case 0x509716:c.instructions+=75;goto B509716;
case 0x509719:c.instructions+=74;goto B509719;
case 0x50971c:c.instructions+=73;goto B50971c;
case 0x50971e:c.instructions+=72;goto B50971e;
case 0x509720:c.instructions+=71;goto B509720;
case 0x509722:c.instructions+=70;goto B509722;
case 0x509724:c.instructions+=69;goto B509724;
case 0x509726:c.instructions+=68;goto B509726;
case 0x509729:c.instructions+=67;goto B509729;
case 0x50972c:c.instructions+=66;goto B50972c;
case 0x50972e:c.instructions+=65;goto B50972e;
case 0x509731:c.instructions+=64;goto B509731;
case 0x509734:c.instructions+=63;goto B509734;
case 0x509737:c.instructions+=62;goto B509737;
case 0x509739:c.instructions+=61;goto B509739;
case 0x50973b:c.instructions+=60;goto B50973b;
case 0x50973e:c.instructions+=59;goto B50973e;
case 0x509740:c.instructions+=58;goto B509740;
case 0x509742:c.instructions+=57;goto B509742;
case 0x509745:c.instructions+=56;goto B509745;
case 0x509748:c.instructions+=55;goto B509748;
case 0x50974b:c.instructions+=54;goto B50974b;
case 0x50974e:c.instructions+=53;goto B50974e;
case 0x509751:c.instructions+=52;goto B509751;
case 0x509754:c.instructions+=51;goto B509754;
case 0x509757:c.instructions+=50;goto B509757;
case 0x509759:c.instructions+=49;goto B509759;
case 0x50975b:c.instructions+=48;goto B50975b;
case 0x50975d:c.instructions+=47;goto B50975d;
case 0x509761:c.instructions+=46;goto B509761;
case 0x509763:c.instructions+=45;goto B509763;
case 0x509767:c.instructions+=44;goto B509767;
case 0x50976b:c.instructions+=43;goto B50976b;
case 0x50976e:c.instructions+=42;goto B50976e;
case 0x509772:c.instructions+=41;goto B509772;
case 0x509774:c.instructions+=40;goto B509774;
case 0x509777:c.instructions+=39;goto B509777;
case 0x509779:c.instructions+=38;goto B509779;
case 0x50977c:c.instructions+=37;goto B50977c;
case 0x509780:c.instructions+=36;goto B509780;
case 0x509784:c.instructions+=35;goto B509784;
case 0x509787:c.instructions+=34;goto B509787;
case 0x50978a:c.instructions+=33;goto B50978a;
case 0x50978d:c.instructions+=32;goto B50978d;
case 0x509790:c.instructions+=31;goto B509790;
case 0x509793:c.instructions+=30;goto B509793;
case 0x509796:c.instructions+=29;goto B509796;
case 0x50979d:c.instructions+=28;goto B50979d;
case 0x5097a0:c.instructions+=27;goto B5097a0;
case 0x5097a2:c.instructions+=26;goto B5097a2;
case 0x5097a9:c.instructions+=25;goto B5097a9;
case 0x5097ab:c.instructions+=24;goto B5097ab;
case 0x5097b0:c.instructions+=23;goto B5097b0;
case 0x5097b2:c.instructions+=22;goto B5097b2;
case 0x5097b6:c.instructions+=21;goto B5097b6;
case 0x5097b8:c.instructions+=20;goto B5097b8;
case 0x5097bc:c.instructions+=19;goto B5097bc;
case 0x5097c3:c.instructions+=18;goto B5097c3;
case 0x5097c5:c.instructions+=17;goto B5097c5;
case 0x5097c9:c.instructions+=16;goto B5097c9;
case 0x5097d0:c.instructions+=15;goto B5097d0;
case 0x5097d4:c.instructions+=14;goto B5097d4;
case 0x5097d7:c.instructions+=13;goto B5097d7;
case 0x5097db:c.instructions+=12;goto B5097db;
case 0x5097de:c.instructions+=11;goto B5097de;
case 0x5097e2:c.instructions+=10;goto B5097e2;
case 0x5097e5:c.instructions+=9;goto B5097e5;
case 0x5097ec:c.instructions+=8;goto B5097ec;
case 0x5097f3:c.instructions+=7;goto B5097f3;
case 0x5097f5:c.instructions+=6;goto B5097f5;
case 0x5097f7:c.instructions+=5;goto B5097f7;
case 0x5097fa:c.instructions+=4;goto B5097fa;
case 0x509801:c.instructions+=3;goto B509801;
case 0x509808:c.instructions+=2;goto B509808;
case 0x50980a:c.instructions+=1;goto B50980a;
case 0x50980d:goto L50980d;
case 0x50980e:c.instructions+=4;goto B50980e;
case 0x509811:c.instructions+=3;goto B509811;
case 0x509814:c.instructions+=2;goto B509814;
case 0x509818:c.instructions+=1;goto B509818;
case 0x50981b:goto L50981b;
case 0x50981e:c.instructions+=5;goto B50981e;
case 0x509821:c.instructions+=4;goto B509821;
case 0x509823:c.instructions+=3;goto B509823;
case 0x509827:c.instructions+=2;goto B509827;
case 0x50982a:c.instructions+=1;goto B50982a;
case 0x509830:goto L509830;
case 0x509832:c.instructions+=1;goto B509832;
case 0x509838:goto L509838;
case 0x50983b:c.instructions+=90;goto B50983b;
case 0x50983e:c.instructions+=89;goto B50983e;
case 0x509841:c.instructions+=88;goto B509841;
case 0x509844:c.instructions+=87;goto B509844;
case 0x509847:c.instructions+=86;goto B509847;
case 0x50984a:c.instructions+=85;goto B50984a;
case 0x509851:c.instructions+=84;goto B509851;
case 0x509858:c.instructions+=83;goto B509858;
case 0x50985a:c.instructions+=82;goto B50985a;
case 0x50985c:c.instructions+=81;goto B50985c;
case 0x50985f:c.instructions+=80;goto B50985f;
case 0x509863:c.instructions+=79;goto B509863;
case 0x509866:c.instructions+=78;goto B509866;
case 0x509869:c.instructions+=77;goto B509869;
case 0x50986c:c.instructions+=76;goto B50986c;
case 0x50986e:c.instructions+=75;goto B50986e;
case 0x509870:c.instructions+=74;goto B509870;
case 0x509872:c.instructions+=73;goto B509872;
case 0x509874:c.instructions+=72;goto B509874;
case 0x509876:c.instructions+=71;goto B509876;
case 0x509879:c.instructions+=70;goto B509879;
case 0x50987c:c.instructions+=69;goto B50987c;
case 0x50987e:c.instructions+=68;goto B50987e;
case 0x509881:c.instructions+=67;goto B509881;
case 0x509884:c.instructions+=66;goto B509884;
case 0x509887:c.instructions+=65;goto B509887;
case 0x50988a:c.instructions+=64;goto B50988a;
case 0x50988d:c.instructions+=63;goto B50988d;
case 0x50988f:c.instructions+=62;goto B50988f;
case 0x509891:c.instructions+=61;goto B509891;
case 0x509893:c.instructions+=60;goto B509893;
case 0x509896:c.instructions+=59;goto B509896;
case 0x509899:c.instructions+=58;goto B509899;
case 0x50989c:c.instructions+=57;goto B50989c;
case 0x50989f:c.instructions+=56;goto B50989f;
case 0x5098a2:c.instructions+=55;goto B5098a2;
case 0x5098a5:c.instructions+=54;goto B5098a5;
case 0x5098a8:c.instructions+=53;goto B5098a8;
case 0x5098ab:c.instructions+=52;goto B5098ab;
case 0x5098ad:c.instructions+=51;goto B5098ad;
case 0x5098af:c.instructions+=50;goto B5098af;
case 0x5098b3:c.instructions+=49;goto B5098b3;
case 0x5098b5:c.instructions+=48;goto B5098b5;
case 0x5098b9:c.instructions+=47;goto B5098b9;
case 0x5098bd:c.instructions+=46;goto B5098bd;
case 0x5098c0:c.instructions+=45;goto B5098c0;
case 0x5098c4:c.instructions+=44;goto B5098c4;
case 0x5098c7:c.instructions+=43;goto B5098c7;
case 0x5098ca:c.instructions+=42;goto B5098ca;
case 0x5098cc:c.instructions+=41;goto B5098cc;
case 0x5098cf:c.instructions+=40;goto B5098cf;
case 0x5098d3:c.instructions+=39;goto B5098d3;
case 0x5098d6:c.instructions+=38;goto B5098d6;
case 0x5098d9:c.instructions+=37;goto B5098d9;
case 0x5098dc:c.instructions+=36;goto B5098dc;
case 0x5098df:c.instructions+=35;goto B5098df;
case 0x5098e2:c.instructions+=34;goto B5098e2;
case 0x5098e5:c.instructions+=33;goto B5098e5;
case 0x5098e9:c.instructions+=32;goto B5098e9;
case 0x5098ec:c.instructions+=31;goto B5098ec;
case 0x5098ef:c.instructions+=30;goto B5098ef;
case 0x5098f3:c.instructions+=29;goto B5098f3;
case 0x5098f4:c.instructions+=28;goto B5098f4;
case 0x5098f6:c.instructions+=27;goto B5098f6;
case 0x5098f9:c.instructions+=26;goto B5098f9;
case 0x5098fb:c.instructions+=25;goto B5098fb;
case 0x5098fe:c.instructions+=24;goto B5098fe;
case 0x509903:c.instructions+=23;goto B509903;
case 0x509907:c.instructions+=22;goto B509907;
case 0x509909:c.instructions+=21;goto B509909;
case 0x50990d:c.instructions+=20;goto B50990d;
case 0x509911:c.instructions+=19;goto B509911;
case 0x509913:c.instructions+=18;goto B509913;
case 0x509917:c.instructions+=17;goto B509917;
case 0x50991b:c.instructions+=16;goto B50991b;
case 0x50991f:c.instructions+=15;goto B50991f;
case 0x509922:c.instructions+=14;goto B509922;
case 0x509926:c.instructions+=13;goto B509926;
case 0x509929:c.instructions+=12;goto B509929;
case 0x50992d:c.instructions+=11;goto B50992d;
case 0x509930:c.instructions+=10;goto B509930;
case 0x509934:c.instructions+=9;goto B509934;
case 0x509938:c.instructions+=8;goto B509938;
case 0x50993a:c.instructions+=7;goto B50993a;
case 0x50993d:c.instructions+=6;goto B50993d;
case 0x509940:c.instructions+=5;goto B509940;
case 0x509944:c.instructions+=4;goto B509944;
case 0x509948:c.instructions+=3;goto B509948;
case 0x50994b:c.instructions+=2;goto B50994b;
case 0x50994e:c.instructions+=1;goto B50994e;
case 0x509951:goto L509951;
case 0x509954:c.instructions+=22;goto B509954;
case 0x509957:c.instructions+=21;goto B509957;
case 0x50995a:c.instructions+=20;goto B50995a;
case 0x50995c:c.instructions+=19;goto B50995c;
case 0x509960:c.instructions+=18;goto B509960;
case 0x509962:c.instructions+=17;goto B509962;
case 0x509965:c.instructions+=16;goto B509965;
case 0x509968:c.instructions+=15;goto B509968;
case 0x50996b:c.instructions+=14;goto B50996b;
case 0x50996e:c.instructions+=13;goto B50996e;
case 0x509971:c.instructions+=12;goto B509971;
case 0x509974:c.instructions+=11;goto B509974;
case 0x509978:c.instructions+=10;goto B509978;
case 0x50997b:c.instructions+=9;goto B50997b;
case 0x50997e:c.instructions+=8;goto B50997e;
case 0x509982:c.instructions+=7;goto B509982;
case 0x509985:c.instructions+=6;goto B509985;
case 0x509988:c.instructions+=5;goto B509988;
case 0x50998a:c.instructions+=4;goto B50998a;
case 0x50998c:c.instructions+=3;goto B50998c;
case 0x50998f:c.instructions+=2;goto B50998f;
case 0x509992:c.instructions+=1;goto B509992;
case 0x509997:goto L509997;
case 0x509999:c.instructions+=1;goto B509999;
case 0x50999f:goto L50999f;
case 0x5099a2:c.instructions+=86;goto B5099a2;
case 0x5099a5:c.instructions+=85;goto B5099a5;
case 0x5099a8:c.instructions+=84;goto B5099a8;
case 0x5099ab:c.instructions+=83;goto B5099ab;
case 0x5099ae:c.instructions+=82;goto B5099ae;
case 0x5099b1:c.instructions+=81;goto B5099b1;
case 0x5099b8:c.instructions+=80;goto B5099b8;
case 0x5099bf:c.instructions+=79;goto B5099bf;
case 0x5099c1:c.instructions+=78;goto B5099c1;
case 0x5099c3:c.instructions+=77;goto B5099c3;
case 0x5099c6:c.instructions+=76;goto B5099c6;
case 0x5099ca:c.instructions+=75;goto B5099ca;
case 0x5099cd:c.instructions+=74;goto B5099cd;
case 0x5099d0:c.instructions+=73;goto B5099d0;
case 0x5099d3:c.instructions+=72;goto B5099d3;
case 0x5099d5:c.instructions+=71;goto B5099d5;
case 0x5099d7:c.instructions+=70;goto B5099d7;
case 0x5099d9:c.instructions+=69;goto B5099d9;
case 0x5099db:c.instructions+=68;goto B5099db;
case 0x5099dd:c.instructions+=67;goto B5099dd;
case 0x5099e0:c.instructions+=66;goto B5099e0;
case 0x5099e3:c.instructions+=65;goto B5099e3;
case 0x5099e5:c.instructions+=64;goto B5099e5;
case 0x5099e8:c.instructions+=63;goto B5099e8;
case 0x5099eb:c.instructions+=62;goto B5099eb;
case 0x5099ee:c.instructions+=61;goto B5099ee;
case 0x5099f1:c.instructions+=60;goto B5099f1;
case 0x5099f4:c.instructions+=59;goto B5099f4;
case 0x5099f6:c.instructions+=58;goto B5099f6;
case 0x5099f8:c.instructions+=57;goto B5099f8;
case 0x5099fa:c.instructions+=56;goto B5099fa;
case 0x5099fd:c.instructions+=55;goto B5099fd;
case 0x509a00:c.instructions+=54;goto B509a00;
case 0x509a03:c.instructions+=53;goto B509a03;
case 0x509a06:c.instructions+=52;goto B509a06;
case 0x509a09:c.instructions+=51;goto B509a09;
case 0x509a0c:c.instructions+=50;goto B509a0c;
case 0x509a0f:c.instructions+=49;goto B509a0f;
case 0x509a12:c.instructions+=48;goto B509a12;
case 0x509a14:c.instructions+=47;goto B509a14;
case 0x509a16:c.instructions+=46;goto B509a16;
case 0x509a1a:c.instructions+=45;goto B509a1a;
case 0x509a1c:c.instructions+=44;goto B509a1c;
case 0x509a20:c.instructions+=43;goto B509a20;
case 0x509a24:c.instructions+=42;goto B509a24;
case 0x509a27:c.instructions+=41;goto B509a27;
case 0x509a2b:c.instructions+=40;goto B509a2b;
case 0x509a2e:c.instructions+=39;goto B509a2e;
case 0x509a31:c.instructions+=38;goto B509a31;
case 0x509a33:c.instructions+=37;goto B509a33;
case 0x509a36:c.instructions+=36;goto B509a36;
case 0x509a3a:c.instructions+=35;goto B509a3a;
case 0x509a3d:c.instructions+=34;goto B509a3d;
case 0x509a40:c.instructions+=33;goto B509a40;
case 0x509a43:c.instructions+=32;goto B509a43;
case 0x509a46:c.instructions+=31;goto B509a46;
case 0x509a49:c.instructions+=30;goto B509a49;
case 0x509a4c:c.instructions+=29;goto B509a4c;
case 0x509a53:c.instructions+=28;goto B509a53;
case 0x509a56:c.instructions+=27;goto B509a56;
case 0x509a59:c.instructions+=26;goto B509a59;
case 0x509a60:c.instructions+=25;goto B509a60;
case 0x509a65:c.instructions+=24;goto B509a65;
case 0x509a67:c.instructions+=23;goto B509a67;
case 0x509a69:c.instructions+=22;goto B509a69;
case 0x509a6d:c.instructions+=21;goto B509a6d;
case 0x509a6f:c.instructions+=20;goto B509a6f;
case 0x509a73:c.instructions+=19;goto B509a73;
case 0x509a7a:c.instructions+=18;goto B509a7a;
case 0x509a7c:c.instructions+=17;goto B509a7c;
case 0x509a80:c.instructions+=16;goto B509a80;
case 0x509a87:c.instructions+=15;goto B509a87;
case 0x509a8b:c.instructions+=14;goto B509a8b;
case 0x509a8e:c.instructions+=13;goto B509a8e;
case 0x509a92:c.instructions+=12;goto B509a92;
case 0x509a95:c.instructions+=11;goto B509a95;
case 0x509a99:c.instructions+=10;goto B509a99;
case 0x509a9c:c.instructions+=9;goto B509a9c;
case 0x509aa3:c.instructions+=8;goto B509aa3;
case 0x509aaa:c.instructions+=7;goto B509aaa;
case 0x509aac:c.instructions+=6;goto B509aac;
case 0x509aaf:c.instructions+=5;goto B509aaf;
case 0x509ab2:c.instructions+=4;goto B509ab2;
case 0x509ab9:c.instructions+=3;goto B509ab9;
case 0x509ac0:c.instructions+=2;goto B509ac0;
case 0x509ac2:c.instructions+=1;goto B509ac2;
case 0x509ac5:goto L509ac5;
case 0x509ac6:c.instructions+=4;goto B509ac6;
case 0x509ac9:c.instructions+=3;goto B509ac9;
case 0x509acc:c.instructions+=2;goto B509acc;
case 0x509ad0:c.instructions+=1;goto B509ad0;
case 0x509ad3:goto L509ad3;
case 0x509ad7:c.instructions+=21;goto B509ad7;
case 0x509ade:c.instructions+=20;goto B509ade;
case 0x509ae5:c.instructions+=19;goto B509ae5;
case 0x509ae9:c.instructions+=18;goto B509ae9;
case 0x509aeb:c.instructions+=17;goto B509aeb;
case 0x509aef:c.instructions+=16;goto B509aef;
case 0x509af6:c.instructions+=15;goto B509af6;
case 0x509af8:c.instructions+=14;goto B509af8;
case 0x509afc:c.instructions+=13;goto B509afc;
case 0x509b00:c.instructions+=12;goto B509b00;
case 0x509b03:c.instructions+=11;goto B509b03;
case 0x509b06:c.instructions+=10;goto B509b06;
case 0x509b0a:c.instructions+=9;goto B509b0a;
case 0x509b0e:c.instructions+=8;goto B509b0e;
case 0x509b12:c.instructions+=7;goto B509b12;
case 0x509b15:c.instructions+=6;goto B509b15;
case 0x509b18:c.instructions+=5;goto B509b18;
case 0x509b1b:c.instructions+=4;goto B509b1b;
case 0x509b1e:c.instructions+=3;goto B509b1e;
case 0x509b20:c.instructions+=2;goto B509b20;
case 0x509b24:c.instructions+=1;goto B509b24;
case 0x509b2a:goto L509b2a;
case 0x509b31:c.instructions+=6;goto B509b31;
case 0x509b34:c.instructions+=5;goto B509b34;
case 0x509b37:c.instructions+=4;goto B509b37;
case 0x509b3a:c.instructions+=3;goto B509b3a;
case 0x509b3e:c.instructions+=2;goto B509b3e;
case 0x509b41:c.instructions+=1;goto B509b41;
case 0x509b47:goto L509b47;
case 0x509b4e:c.instructions+=24;goto B509b4e;
case 0x509b52:c.instructions+=23;goto B509b52;
case 0x509b56:c.instructions+=22;goto B509b56;
case 0x509b59:c.instructions+=21;goto B509b59;
case 0x509b5b:c.instructions+=20;goto B509b5b;
case 0x509b5f:c.instructions+=19;goto B509b5f;
case 0x509b62:c.instructions+=18;goto B509b62;
case 0x509b64:c.instructions+=17;goto B509b64;
case 0x509b68:c.instructions+=16;goto B509b68;
case 0x509b6b:c.instructions+=15;goto B509b6b;
case 0x509b6d:c.instructions+=14;goto B509b6d;
case 0x509b71:c.instructions+=13;goto B509b71;
case 0x509b75:c.instructions+=12;goto B509b75;
case 0x509b78:c.instructions+=11;goto B509b78;
case 0x509b7c:c.instructions+=10;goto B509b7c;
case 0x509b80:c.instructions+=9;goto B509b80;
case 0x509b82:c.instructions+=8;goto B509b82;
case 0x509b84:c.instructions+=7;goto B509b84;
case 0x509b88:c.instructions+=6;goto B509b88;
case 0x509b8d:c.instructions+=5;goto B509b8d;
case 0x509b90:c.instructions+=4;goto B509b90;
case 0x509b92:c.instructions+=3;goto B509b92;
case 0x509b96:c.instructions+=2;goto B509b96;
case 0x509b9d:c.instructions+=1;goto B509b9d;
case 0x509ba0:goto L509ba0;
case 0x509ba4:c.instructions+=6;goto B509ba4;
case 0x509ba7:c.instructions+=5;goto B509ba7;
case 0x509baa:c.instructions+=4;goto B509baa;
case 0x509bac:c.instructions+=3;goto B509bac;
case 0x509bb0:c.instructions+=2;goto B509bb0;
case 0x509bb3:c.instructions+=1;goto B509bb3;
case 0x509bb9:goto L509bb9;
case 0x509bbb:c.instructions+=1;goto B509bbb;
case 0x509bc1:goto L509bc1;
case 0x509bc4:c.instructions+=104;goto B509bc4;
case 0x509bc8:c.instructions+=103;goto B509bc8;
case 0x509bcb:c.instructions+=102;goto B509bcb;
case 0x509bce:c.instructions+=101;goto B509bce;
case 0x509bd1:c.instructions+=100;goto B509bd1;
case 0x509bd5:c.instructions+=99;goto B509bd5;
case 0x509bd9:c.instructions+=98;goto B509bd9;
case 0x509bdb:c.instructions+=97;goto B509bdb;
case 0x509be2:c.instructions+=96;goto B509be2;
case 0x509be9:c.instructions+=95;goto B509be9;
case 0x509beb:c.instructions+=94;goto B509beb;
case 0x509bed:c.instructions+=93;goto B509bed;
case 0x509bf0:c.instructions+=92;goto B509bf0;
case 0x509bf4:c.instructions+=91;goto B509bf4;
case 0x509bf7:c.instructions+=90;goto B509bf7;
case 0x509bfa:c.instructions+=89;goto B509bfa;
case 0x509bfd:c.instructions+=88;goto B509bfd;
case 0x509bff:c.instructions+=87;goto B509bff;
case 0x509c01:c.instructions+=86;goto B509c01;
case 0x509c03:c.instructions+=85;goto B509c03;
case 0x509c05:c.instructions+=84;goto B509c05;
case 0x509c07:c.instructions+=83;goto B509c07;
case 0x509c0a:c.instructions+=82;goto B509c0a;
case 0x509c0d:c.instructions+=81;goto B509c0d;
case 0x509c0f:c.instructions+=80;goto B509c0f;
case 0x509c12:c.instructions+=79;goto B509c12;
case 0x509c15:c.instructions+=78;goto B509c15;
case 0x509c19:c.instructions+=77;goto B509c19;
case 0x509c1d:c.instructions+=76;goto B509c1d;
case 0x509c1f:c.instructions+=75;goto B509c1f;
case 0x509c22:c.instructions+=74;goto B509c22;
case 0x509c26:c.instructions+=73;goto B509c26;
case 0x509c28:c.instructions+=72;goto B509c28;
case 0x509c2a:c.instructions+=71;goto B509c2a;
case 0x509c2d:c.instructions+=70;goto B509c2d;
case 0x509c30:c.instructions+=69;goto B509c30;
case 0x509c33:c.instructions+=68;goto B509c33;
case 0x509c36:c.instructions+=67;goto B509c36;
case 0x509c39:c.instructions+=66;goto B509c39;
case 0x509c3c:c.instructions+=65;goto B509c3c;
case 0x509c40:c.instructions+=64;goto B509c40;
case 0x509c43:c.instructions+=63;goto B509c43;
case 0x509c47:c.instructions+=62;goto B509c47;
case 0x509c49:c.instructions+=61;goto B509c49;
case 0x509c4b:c.instructions+=60;goto B509c4b;
case 0x509c4f:c.instructions+=59;goto B509c4f;
case 0x509c51:c.instructions+=58;goto B509c51;
case 0x509c55:c.instructions+=57;goto B509c55;
case 0x509c59:c.instructions+=56;goto B509c59;
case 0x509c5c:c.instructions+=55;goto B509c5c;
case 0x509c60:c.instructions+=54;goto B509c60;
case 0x509c64:c.instructions+=53;goto B509c64;
case 0x509c68:c.instructions+=52;goto B509c68;
case 0x509c6a:c.instructions+=51;goto B509c6a;
case 0x509c6d:c.instructions+=50;goto B509c6d;
case 0x509c71:c.instructions+=49;goto B509c71;
case 0x509c75:c.instructions+=48;goto B509c75;
case 0x509c78:c.instructions+=47;goto B509c78;
case 0x509c7b:c.instructions+=46;goto B509c7b;
case 0x509c7e:c.instructions+=45;goto B509c7e;
case 0x509c82:c.instructions+=44;goto B509c82;
case 0x509c86:c.instructions+=43;goto B509c86;
case 0x509c8a:c.instructions+=42;goto B509c8a;
case 0x509c8d:c.instructions+=41;goto B509c8d;
case 0x509c91:c.instructions+=40;goto B509c91;
case 0x509c95:c.instructions+=39;goto B509c95;
case 0x509c98:c.instructions+=38;goto B509c98;
case 0x509c9c:c.instructions+=37;goto B509c9c;
case 0x509ca0:c.instructions+=36;goto B509ca0;
case 0x509ca5:c.instructions+=35;goto B509ca5;
case 0x509ca7:c.instructions+=34;goto B509ca7;
case 0x509cab:c.instructions+=33;goto B509cab;
case 0x509caf:c.instructions+=32;goto B509caf;
case 0x509cb1:c.instructions+=31;goto B509cb1;
case 0x509cb3:c.instructions+=30;goto B509cb3;
case 0x509cb7:c.instructions+=29;goto B509cb7;
case 0x509cb9:c.instructions+=28;goto B509cb9;
case 0x509cbd:c.instructions+=27;goto B509cbd;
case 0x509cc1:c.instructions+=26;goto B509cc1;
case 0x509cc3:c.instructions+=25;goto B509cc3;
case 0x509cc7:c.instructions+=24;goto B509cc7;
case 0x509ccb:c.instructions+=23;goto B509ccb;
case 0x509ccf:c.instructions+=22;goto B509ccf;
case 0x509cd2:c.instructions+=21;goto B509cd2;
case 0x509cd6:c.instructions+=20;goto B509cd6;
case 0x509cda:c.instructions+=19;goto B509cda;
case 0x509cde:c.instructions+=18;goto B509cde;
case 0x509ce2:c.instructions+=17;goto B509ce2;
case 0x509ce6:c.instructions+=16;goto B509ce6;
case 0x509cea:c.instructions+=15;goto B509cea;
case 0x509cee:c.instructions+=14;goto B509cee;
case 0x509cf0:c.instructions+=13;goto B509cf0;
case 0x509cf3:c.instructions+=12;goto B509cf3;
case 0x509cf7:c.instructions+=11;goto B509cf7;
case 0x509cfb:c.instructions+=10;goto B509cfb;
case 0x509cfd:c.instructions+=9;goto B509cfd;
case 0x509cff:c.instructions+=8;goto B509cff;
case 0x509d02:c.instructions+=7;goto B509d02;
case 0x509d06:c.instructions+=6;goto B509d06;
case 0x509d09:c.instructions+=5;goto B509d09;
case 0x509d0a:c.instructions+=4;goto B509d0a;
case 0x509d0e:c.instructions+=3;goto B509d0e;
case 0x509d10:c.instructions+=2;goto B509d10;
case 0x509d13:c.instructions+=1;goto B509d13;
case 0x509d15:goto L509d15;
case 0x509d19:goto L509d19;
case 0x509d1c:c.instructions+=28;goto B509d1c;
case 0x509d1f:c.instructions+=27;goto B509d1f;
case 0x509d21:c.instructions+=26;goto B509d21;
case 0x509d24:c.instructions+=25;goto B509d24;
case 0x509d26:c.instructions+=24;goto B509d26;
case 0x509d28:c.instructions+=23;goto B509d28;
case 0x509d2c:c.instructions+=22;goto B509d2c;
case 0x509d2f:c.instructions+=21;goto B509d2f;
case 0x509d32:c.instructions+=20;goto B509d32;
case 0x509d36:c.instructions+=19;goto B509d36;
case 0x509d39:c.instructions+=18;goto B509d39;
case 0x509d3d:c.instructions+=17;goto B509d3d;
case 0x509d40:c.instructions+=16;goto B509d40;
case 0x509d44:c.instructions+=15;goto B509d44;
case 0x509d48:c.instructions+=14;goto B509d48;
case 0x509d4b:c.instructions+=13;goto B509d4b;
case 0x509d4f:c.instructions+=12;goto B509d4f;
case 0x509d53:c.instructions+=11;goto B509d53;
case 0x509d56:c.instructions+=10;goto B509d56;
case 0x509d5a:c.instructions+=9;goto B509d5a;
case 0x509d5d:c.instructions+=8;goto B509d5d;
case 0x509d5f:c.instructions+=7;goto B509d5f;
case 0x509d61:c.instructions+=6;goto B509d61;
case 0x509d63:c.instructions+=5;goto B509d63;
case 0x509d67:c.instructions+=4;goto B509d67;
case 0x509d6a:c.instructions+=3;goto B509d6a;
case 0x509d6c:c.instructions+=2;goto B509d6c;
case 0x509d6f:c.instructions+=1;goto B509d6f;
case 0x509d74:goto L509d74;
case 0x509d76:c.instructions+=1;goto B509d76;
case 0x509d7c:goto L509d7c;
case 0x509d7f:c.instructions+=97;goto B509d7f;
case 0x509d83:c.instructions+=96;goto B509d83;
case 0x509d86:c.instructions+=95;goto B509d86;
case 0x509d89:c.instructions+=94;goto B509d89;
case 0x509d8c:c.instructions+=93;goto B509d8c;
case 0x509d90:c.instructions+=92;goto B509d90;
case 0x509d94:c.instructions+=91;goto B509d94;
case 0x509d96:c.instructions+=90;goto B509d96;
case 0x509d9d:c.instructions+=89;goto B509d9d;
case 0x509da4:c.instructions+=88;goto B509da4;
case 0x509da6:c.instructions+=87;goto B509da6;
case 0x509da8:c.instructions+=86;goto B509da8;
case 0x509dab:c.instructions+=85;goto B509dab;
case 0x509daf:c.instructions+=84;goto B509daf;
case 0x509db2:c.instructions+=83;goto B509db2;
case 0x509db5:c.instructions+=82;goto B509db5;
case 0x509db8:c.instructions+=81;goto B509db8;
case 0x509dba:c.instructions+=80;goto B509dba;
case 0x509dbc:c.instructions+=79;goto B509dbc;
case 0x509dbe:c.instructions+=78;goto B509dbe;
case 0x509dc0:c.instructions+=77;goto B509dc0;
case 0x509dc2:c.instructions+=76;goto B509dc2;
case 0x509dc5:c.instructions+=75;goto B509dc5;
case 0x509dc8:c.instructions+=74;goto B509dc8;
case 0x509dca:c.instructions+=73;goto B509dca;
case 0x509dcd:c.instructions+=72;goto B509dcd;
case 0x509dd0:c.instructions+=71;goto B509dd0;
case 0x509dd4:c.instructions+=70;goto B509dd4;
case 0x509dd8:c.instructions+=69;goto B509dd8;
case 0x509ddb:c.instructions+=68;goto B509ddb;
case 0x509ddf:c.instructions+=67;goto B509ddf;
case 0x509de1:c.instructions+=66;goto B509de1;
case 0x509de3:c.instructions+=65;goto B509de3;
case 0x509de5:c.instructions+=64;goto B509de5;
case 0x509de8:c.instructions+=63;goto B509de8;
case 0x509deb:c.instructions+=62;goto B509deb;
case 0x509dee:c.instructions+=61;goto B509dee;
case 0x509df1:c.instructions+=60;goto B509df1;
case 0x509df4:c.instructions+=59;goto B509df4;
case 0x509df7:c.instructions+=58;goto B509df7;
case 0x509dfb:c.instructions+=57;goto B509dfb;
case 0x509dfe:c.instructions+=56;goto B509dfe;
case 0x509e02:c.instructions+=55;goto B509e02;
case 0x509e04:c.instructions+=54;goto B509e04;
case 0x509e06:c.instructions+=53;goto B509e06;
case 0x509e0a:c.instructions+=52;goto B509e0a;
case 0x509e0c:c.instructions+=51;goto B509e0c;
case 0x509e10:c.instructions+=50;goto B509e10;
case 0x509e14:c.instructions+=49;goto B509e14;
case 0x509e17:c.instructions+=48;goto B509e17;
case 0x509e1b:c.instructions+=47;goto B509e1b;
case 0x509e1f:c.instructions+=46;goto B509e1f;
case 0x509e23:c.instructions+=45;goto B509e23;
case 0x509e25:c.instructions+=44;goto B509e25;
case 0x509e28:c.instructions+=43;goto B509e28;
case 0x509e2c:c.instructions+=42;goto B509e2c;
case 0x509e30:c.instructions+=41;goto B509e30;
case 0x509e33:c.instructions+=40;goto B509e33;
case 0x509e36:c.instructions+=39;goto B509e36;
case 0x509e39:c.instructions+=38;goto B509e39;
case 0x509e3d:c.instructions+=37;goto B509e3d;
case 0x509e41:c.instructions+=36;goto B509e41;
case 0x509e45:c.instructions+=35;goto B509e45;
case 0x509e48:c.instructions+=34;goto B509e48;
case 0x509e4c:c.instructions+=33;goto B509e4c;
case 0x509e50:c.instructions+=32;goto B509e50;
case 0x509e54:c.instructions+=31;goto B509e54;
case 0x509e5b:c.instructions+=30;goto B509e5b;
case 0x509e5f:c.instructions+=29;goto B509e5f;
case 0x509e64:c.instructions+=28;goto B509e64;
case 0x509e66:c.instructions+=27;goto B509e66;
case 0x509e6d:c.instructions+=26;goto B509e6d;
case 0x509e6f:c.instructions+=25;goto B509e6f;
case 0x509e71:c.instructions+=24;goto B509e71;
case 0x509e75:c.instructions+=23;goto B509e75;
case 0x509e77:c.instructions+=22;goto B509e77;
case 0x509e7b:c.instructions+=21;goto B509e7b;
case 0x509e82:c.instructions+=20;goto B509e82;
case 0x509e84:c.instructions+=19;goto B509e84;
case 0x509e88:c.instructions+=18;goto B509e88;
case 0x509e8f:c.instructions+=17;goto B509e8f;
case 0x509e93:c.instructions+=16;goto B509e93;
case 0x509e96:c.instructions+=15;goto B509e96;
case 0x509e9a:c.instructions+=14;goto B509e9a;
case 0x509e9e:c.instructions+=13;goto B509e9e;
case 0x509ea2:c.instructions+=12;goto B509ea2;
case 0x509ea6:c.instructions+=11;goto B509ea6;
case 0x509ead:c.instructions+=10;goto B509ead;
case 0x509eb1:c.instructions+=9;goto B509eb1;
case 0x509eb8:c.instructions+=8;goto B509eb8;
case 0x509eba:c.instructions+=7;goto B509eba;
case 0x509ebd:c.instructions+=6;goto B509ebd;
case 0x509ec4:c.instructions+=5;goto B509ec4;
case 0x509ecb:c.instructions+=4;goto B509ecb;
case 0x509ecd:c.instructions+=3;goto B509ecd;
case 0x509ecf:c.instructions+=2;goto B509ecf;
case 0x509ed2:c.instructions+=1;goto B509ed2;
case 0x509ed4:goto L509ed4;
case 0x509ed7:c.instructions+=6;goto B509ed7;
case 0x509edb:c.instructions+=5;goto B509edb;
case 0x509ede:c.instructions+=4;goto B509ede;
case 0x509edf:c.instructions+=3;goto B509edf;
case 0x509ee2:c.instructions+=2;goto B509ee2;
case 0x509ee6:c.instructions+=1;goto B509ee6;
case 0x509eea:goto L509eea;
case 0x509eee:c.instructions+=11;goto B509eee;
case 0x509ef5:c.instructions+=10;goto B509ef5;
case 0x509efc:c.instructions+=9;goto B509efc;
case 0x509f00:c.instructions+=8;goto B509f00;
case 0x509f04:c.instructions+=7;goto B509f04;
case 0x509f06:c.instructions+=6;goto B509f06;
case 0x509f0a:c.instructions+=5;goto B509f0a;
case 0x509f0f:c.instructions+=4;goto B509f0f;
case 0x509f14:c.instructions+=3;goto B509f14;
case 0x509f18:c.instructions+=2;goto B509f18;
case 0x509f1b:c.instructions+=1;goto B509f1b;
case 0x509f21:goto L509f21;
case 0x509f25:c.instructions+=6;goto B509f25;
case 0x509f26:c.instructions+=5;goto B509f26;
case 0x509f27:c.instructions+=4;goto B509f27;
case 0x509f28:c.instructions+=3;goto B509f28;
case 0x509f2a:c.instructions+=2;goto B509f2a;
case 0x509f2b:c.instructions+=1;goto B509f2b;
case 0x509f30:goto L509f30;
case 0x509f31:c.instructions+=19;goto B509f31;
case 0x509f33:c.instructions+=18;goto B509f33;
case 0x509f36:c.instructions+=17;goto B509f36;
case 0x509f3c:c.instructions+=16;goto B509f3c;
case 0x509f3f:c.instructions+=15;goto B509f3f;
case 0x509f40:c.instructions+=14;goto B509f40;
case 0x509f43:c.instructions+=13;goto B509f43;
case 0x509f44:c.instructions+=12;goto B509f44;
case 0x509f47:c.instructions+=11;goto B509f47;
case 0x509f48:c.instructions+=10;goto B509f48;
case 0x509f4b:c.instructions+=9;goto B509f4b;
case 0x509f4c:c.instructions+=8;goto B509f4c;
case 0x509f4e:c.instructions+=7;goto B509f4e;
case 0x509f51:c.instructions+=6;goto B509f51;
case 0x509f55:c.instructions+=5;goto B509f55;
case 0x509f58:c.instructions+=4;goto B509f58;
case 0x509f5a:c.instructions+=3;goto B509f5a;
case 0x509f5d:c.instructions+=2;goto B509f5d;
case 0x509f60:c.instructions+=1;goto B509f60;
case 0x509f62:goto L509f62;
case 0x509f66:c.instructions+=27;goto B509f66;
case 0x509f69:c.instructions+=26;goto B509f69;
case 0x509f6d:c.instructions+=25;goto B509f6d;
case 0x509f70:c.instructions+=24;goto B509f70;
case 0x509f72:c.instructions+=23;goto B509f72;
case 0x509f74:c.instructions+=22;goto B509f74;
case 0x509f77:c.instructions+=21;goto B509f77;
case 0x509f7f:c.instructions+=20;goto B509f7f;
case 0x509f84:c.instructions+=19;goto B509f84;
case 0x509f87:c.instructions+=18;goto B509f87;
case 0x509f8a:c.instructions+=17;goto B509f8a;
case 0x509f8e:c.instructions+=16;goto B509f8e;
case 0x509f91:c.instructions+=15;goto B509f91;
case 0x509f94:c.instructions+=14;goto B509f94;
case 0x509f96:c.instructions+=13;goto B509f96;
case 0x509f9a:c.instructions+=12;goto B509f9a;
case 0x509f9d:c.instructions+=11;goto B509f9d;
case 0x509fa1:c.instructions+=10;goto B509fa1;
case 0x509fa4:c.instructions+=9;goto B509fa4;
case 0x509fa8:c.instructions+=8;goto B509fa8;
case 0x509faa:c.instructions+=7;goto B509faa;
case 0x509fae:c.instructions+=6;goto B509fae;
case 0x509fb2:c.instructions+=5;goto B509fb2;
case 0x509fb4:c.instructions+=4;goto B509fb4;
case 0x509fb7:c.instructions+=3;goto B509fb7;
case 0x509fba:c.instructions+=2;goto B509fba;
case 0x509fbd:c.instructions+=1;goto B509fbd;
case 0x509fbf:goto L509fbf;
case 0x509fc7:c.instructions+=1;goto B509fc7;
case 0x509fcc:goto L509fcc;
case 0x509fd0:c.instructions+=2;goto B509fd0;
case 0x509fd8:c.instructions+=1;goto B509fd8;
case 0x509fde:goto L509fde;
case 0x509fe1:c.instructions+=9;goto B509fe1;
case 0x509fe5:c.instructions+=8;goto B509fe5;
case 0x509fec:c.instructions+=7;goto B509fec;
case 0x509ff0:c.instructions+=6;goto B509ff0;
case 0x509ff4:c.instructions+=5;goto B509ff4;
case 0x509ff7:c.instructions+=4;goto B509ff7;
case 0x509ffa:c.instructions+=3;goto B509ffa;
case 0x509ffd:c.instructions+=2;goto B509ffd;
case 0x509fff:c.instructions+=1;goto B509fff;
default:missing_instruction(c.pc);}
B509000:L509000:{c.instructions+=66;NFSU2_TR(0x509000);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509003:{NFSU2_TR(0x509003);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509007:{NFSU2_TR(0x509007);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50900a:{NFSU2_TR(0x50900a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50900e:{NFSU2_TR(0x50900e);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509011:{NFSU2_TR(0x509011);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B509014:{NFSU2_TR(0x509014);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509018:{NFSU2_TR(0x509018);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50901a:{NFSU2_TR(0x50901a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50901c:{NFSU2_TR(0x50901c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509020:{NFSU2_TR(0x509020);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509022:{NFSU2_TR(0x509022);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509026:{NFSU2_TR(0x509026);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50902a:{NFSU2_TR(0x50902a);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50902d:{NFSU2_TR(0x50902d);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509031:{NFSU2_TR(0x509031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B509034:{NFSU2_TR(0x509034);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509038:{NFSU2_TR(0x509038);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50903c:{NFSU2_TR(0x50903c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50903e:{NFSU2_TR(0x50903e);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509041:{NFSU2_TR(0x509041);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509045:{NFSU2_TR(0x509045);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509049:{NFSU2_TR(0x509049);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50904c:{NFSU2_TR(0x50904c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50904f:{NFSU2_TR(0x50904f);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509052:{NFSU2_TR(0x509052);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509055:{NFSU2_TR(0x509055);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B509058:{NFSU2_TR(0x509058);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50905c:{NFSU2_TR(0x50905c);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50905f:{NFSU2_TR(0x50905f);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509063:{NFSU2_TR(0x509063);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509067:{NFSU2_TR(0x509067);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50906a:{NFSU2_TR(0x50906a);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50906e:{NFSU2_TR(0x50906e);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B509073:{NFSU2_TR(0x509073);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509077:{NFSU2_TR(0x509077);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509079:{NFSU2_TR(0x509079);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50907b:{NFSU2_TR(0x50907b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50907f:{NFSU2_TR(0x50907f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509081:{NFSU2_TR(0x509081);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509085:{NFSU2_TR(0x509085);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509089:{NFSU2_TR(0x509089);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50908b:{NFSU2_TR(0x50908b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50908f:{NFSU2_TR(0x50908f);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509093:{NFSU2_TR(0x509093);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509097:{NFSU2_TR(0x509097);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50909a:{NFSU2_TR(0x50909a);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50909e:{NFSU2_TR(0x50909e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5090a2:{NFSU2_TR(0x5090a2);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5090a6:{NFSU2_TR(0x5090a6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5090aa:{NFSU2_TR(0x5090aa);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5090ae:{NFSU2_TR(0x5090ae);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5090b2:{NFSU2_TR(0x5090b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5090b6:{NFSU2_TR(0x5090b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5090ba:{NFSU2_TR(0x5090ba);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B5090bc:{NFSU2_TR(0x5090bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5090bf:{NFSU2_TR(0x5090bf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5090c0:{NFSU2_TR(0x5090c0);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5090c4:{NFSU2_TR(0x5090c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5090c8:{NFSU2_TR(0x5090c8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5090ca:{NFSU2_TR(0x5090ca);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5090cc:{NFSU2_TR(0x5090cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5090cf:{NFSU2_TR(0x5090cf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5090d2:{NFSU2_TR(0x5090d2);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5090d5:{NFSU2_TR(0x5090d5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5090d7:{NFSU2_TR(0x5090d7);
{goto L5090dd;}
}
B5090d9:L5090d9:{c.instructions+=1;NFSU2_TR(0x5090d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5090dd:L5090dd:{c.instructions+=28;NFSU2_TR(0x5090dd);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5090e0:{NFSU2_TR(0x5090e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5090e3:{NFSU2_TR(0x5090e3);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5090e6:{NFSU2_TR(0x5090e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5090e8:{NFSU2_TR(0x5090e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5090ec:{NFSU2_TR(0x5090ec);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5090ee:{NFSU2_TR(0x5090ee);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5090f1:{NFSU2_TR(0x5090f1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5090f2:{NFSU2_TR(0x5090f2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5090f5:{NFSU2_TR(0x5090f5);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5090f8:{NFSU2_TR(0x5090f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5090fc:{NFSU2_TR(0x5090fc);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5090ff:{NFSU2_TR(0x5090ff);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B509102:{NFSU2_TR(0x509102);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509105:{NFSU2_TR(0x509105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509108:{NFSU2_TR(0x509108);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50910c:{NFSU2_TR(0x50910c);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509110:{NFSU2_TR(0x509110);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509113:{NFSU2_TR(0x509113);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509116:{NFSU2_TR(0x509116);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50911a:{NFSU2_TR(0x50911a);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50911d:{NFSU2_TR(0x50911d);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509120:{NFSU2_TR(0x509120);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509123:{NFSU2_TR(0x509123);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509126:{NFSU2_TR(0x509126);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509128:{NFSU2_TR(0x509128);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50912b:{NFSU2_TR(0x50912b);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50912e:{NFSU2_TR(0x50912e);
{goto L5092ac;}
}
B509133:L509133:{c.instructions+=2;NFSU2_TR(0x509133);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B509135:{NFSU2_TR(0x509135);
if(r1(R+518)){{goto L5092a8;}}
}
B50913b:L50913b:{c.instructions+=106;NFSU2_TR(0x50913b);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50913e:{NFSU2_TR(0x50913e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509142:{NFSU2_TR(0x509142);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B509145:{NFSU2_TR(0x509145);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509148:{NFSU2_TR(0x509148);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50914b:{NFSU2_TR(0x50914b);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50914f:{NFSU2_TR(0x50914f);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509152:{NFSU2_TR(0x509152);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509156:{NFSU2_TR(0x509156);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50915d:{NFSU2_TR(0x50915d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B509164:{NFSU2_TR(0x509164);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509166:{NFSU2_TR(0x509166);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509168:{NFSU2_TR(0x509168);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50916b:{NFSU2_TR(0x50916b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50916e:{NFSU2_TR(0x50916e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509171:{NFSU2_TR(0x509171);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509174:{NFSU2_TR(0x509174);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509177:{NFSU2_TR(0x509177);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B509179:{NFSU2_TR(0x509179);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50917b:{NFSU2_TR(0x50917b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50917d:{NFSU2_TR(0x50917d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50917f:{NFSU2_TR(0x50917f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509181:{NFSU2_TR(0x509181);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509184:{NFSU2_TR(0x509184);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509187:{NFSU2_TR(0x509187);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509189:{NFSU2_TR(0x509189);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50918c:{NFSU2_TR(0x50918c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50918f:{NFSU2_TR(0x50918f);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509193:{NFSU2_TR(0x509193);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509197:{NFSU2_TR(0x509197);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50919a:{NFSU2_TR(0x50919a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50919e:{NFSU2_TR(0x50919e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5091a0:{NFSU2_TR(0x5091a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5091a3:{NFSU2_TR(0x5091a3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5091a5:{NFSU2_TR(0x5091a5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5091a7:{NFSU2_TR(0x5091a7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5091aa:{NFSU2_TR(0x5091aa);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5091ad:{NFSU2_TR(0x5091ad);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5091b0:{NFSU2_TR(0x5091b0);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5091b3:{NFSU2_TR(0x5091b3);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5091b6:{NFSU2_TR(0x5091b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5091ba:{NFSU2_TR(0x5091ba);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5091bd:{NFSU2_TR(0x5091bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5091c1:{NFSU2_TR(0x5091c1);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5091c4:{NFSU2_TR(0x5091c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5091c7:{NFSU2_TR(0x5091c7);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5091cb:{NFSU2_TR(0x5091cb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5091cd:{NFSU2_TR(0x5091cd);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5091cf:{NFSU2_TR(0x5091cf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5091d3:{NFSU2_TR(0x5091d3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5091d5:{NFSU2_TR(0x5091d5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5091d9:{NFSU2_TR(0x5091d9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5091dd:{NFSU2_TR(0x5091dd);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5091e0:{NFSU2_TR(0x5091e0);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5091e4:{NFSU2_TR(0x5091e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5091e7:{NFSU2_TR(0x5091e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5091eb:{NFSU2_TR(0x5091eb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5091ef:{NFSU2_TR(0x5091ef);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5091f1:{NFSU2_TR(0x5091f1);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5091f4:{NFSU2_TR(0x5091f4);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5091f8:{NFSU2_TR(0x5091f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5091fc:{NFSU2_TR(0x5091fc);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5091ff:{NFSU2_TR(0x5091ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B509202:{NFSU2_TR(0x509202);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509205:{NFSU2_TR(0x509205);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509208:{NFSU2_TR(0x509208);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50920b:{NFSU2_TR(0x50920b);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50920f:{NFSU2_TR(0x50920f);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509212:{NFSU2_TR(0x509212);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509216:{NFSU2_TR(0x509216);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50921d:{NFSU2_TR(0x50921d);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509220:{NFSU2_TR(0x509220);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509224:{NFSU2_TR(0x509224);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B509229:{NFSU2_TR(0x509229);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509230:{NFSU2_TR(0x509230);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509232:{NFSU2_TR(0x509232);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B509234:{NFSU2_TR(0x509234);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509238:{NFSU2_TR(0x509238);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50923a:{NFSU2_TR(0x50923a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50923e:{NFSU2_TR(0x50923e);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509245:{NFSU2_TR(0x509245);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509247:{NFSU2_TR(0x509247);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50924b:{NFSU2_TR(0x50924b);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509252:{NFSU2_TR(0x509252);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509256:{NFSU2_TR(0x509256);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509259:{NFSU2_TR(0x509259);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50925d:{NFSU2_TR(0x50925d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509261:{NFSU2_TR(0x509261);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509265:{NFSU2_TR(0x509265);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509269:{NFSU2_TR(0x509269);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509270:{NFSU2_TR(0x509270);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509274:{NFSU2_TR(0x509274);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50927b:{NFSU2_TR(0x50927b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50927f:{NFSU2_TR(0x50927f);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B509281:{NFSU2_TR(0x509281);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509284:{NFSU2_TR(0x509284);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B509285:{NFSU2_TR(0x509285);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50928c:{NFSU2_TR(0x50928c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509293:{NFSU2_TR(0x509293);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509295:{NFSU2_TR(0x509295);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509297:{NFSU2_TR(0x509297);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50929a:{NFSU2_TR(0x50929a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50929e:{NFSU2_TR(0x50929e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5092a1:{NFSU2_TR(0x5092a1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5092a4:{NFSU2_TR(0x5092a4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5092a6:{NFSU2_TR(0x5092a6);
{goto L5092ac;}
}
B5092a8:L5092a8:{c.instructions+=1;NFSU2_TR(0x5092a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5092ac:L5092ac:{c.instructions+=6;NFSU2_TR(0x5092ac);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5092af:{NFSU2_TR(0x5092af);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5092b2:{NFSU2_TR(0x5092b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5092b4:{NFSU2_TR(0x5092b4);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5092b8:{NFSU2_TR(0x5092b8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5092bb:{NFSU2_TR(0x5092bb);
if(r1(R+514)){{goto L50942a;}}
}
B5092c1:L5092c1:{c.instructions+=2;NFSU2_TR(0x5092c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5092c3:{NFSU2_TR(0x5092c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5093e3;}}
}
B5092c9:L5092c9:{c.instructions+=92;NFSU2_TR(0x5092c9);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5092cc:{NFSU2_TR(0x5092cc);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5092cf:{NFSU2_TR(0x5092cf);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5092d2:{NFSU2_TR(0x5092d2);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5092d5:{NFSU2_TR(0x5092d5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5092d7:{NFSU2_TR(0x5092d7);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5092da:{NFSU2_TR(0x5092da);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5092e1:{NFSU2_TR(0x5092e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5092e8:{NFSU2_TR(0x5092e8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5092ea:{NFSU2_TR(0x5092ea);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5092ec:{NFSU2_TR(0x5092ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5092ef:{NFSU2_TR(0x5092ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5092f3:{NFSU2_TR(0x5092f3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5092f6:{NFSU2_TR(0x5092f6);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5092f9:{NFSU2_TR(0x5092f9);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5092fc:{NFSU2_TR(0x5092fc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5092fe:{NFSU2_TR(0x5092fe);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509300:{NFSU2_TR(0x509300);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509302:{NFSU2_TR(0x509302);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509304:{NFSU2_TR(0x509304);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509306:{NFSU2_TR(0x509306);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509309:{NFSU2_TR(0x509309);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50930c:{NFSU2_TR(0x50930c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50930e:{NFSU2_TR(0x50930e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509311:{NFSU2_TR(0x509311);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509314:{NFSU2_TR(0x509314);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509317:{NFSU2_TR(0x509317);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50931a:{NFSU2_TR(0x50931a);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50931d:{NFSU2_TR(0x50931d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50931f:{NFSU2_TR(0x50931f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509321:{NFSU2_TR(0x509321);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509323:{NFSU2_TR(0x509323);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509326:{NFSU2_TR(0x509326);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509329:{NFSU2_TR(0x509329);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50932c:{NFSU2_TR(0x50932c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50932f:{NFSU2_TR(0x50932f);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509332:{NFSU2_TR(0x509332);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509335:{NFSU2_TR(0x509335);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509337:{NFSU2_TR(0x509337);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50933a:{NFSU2_TR(0x50933a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50933c:{NFSU2_TR(0x50933c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50933e:{NFSU2_TR(0x50933e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509342:{NFSU2_TR(0x509342);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509344:{NFSU2_TR(0x509344);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509348:{NFSU2_TR(0x509348);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50934c:{NFSU2_TR(0x50934c);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50934f:{NFSU2_TR(0x50934f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509353:{NFSU2_TR(0x509353);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509356:{NFSU2_TR(0x509356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509359:{NFSU2_TR(0x509359);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50935b:{NFSU2_TR(0x50935b);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50935e:{NFSU2_TR(0x50935e);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509362:{NFSU2_TR(0x509362);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509366:{NFSU2_TR(0x509366);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509369:{NFSU2_TR(0x509369);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50936c:{NFSU2_TR(0x50936c);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50936f:{NFSU2_TR(0x50936f);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509372:{NFSU2_TR(0x509372);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509375:{NFSU2_TR(0x509375);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509378:{NFSU2_TR(0x509378);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50937c:{NFSU2_TR(0x50937c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50937e:{NFSU2_TR(0x50937e);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509381:{NFSU2_TR(0x509381);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509385:{NFSU2_TR(0x509385);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509387:{NFSU2_TR(0x509387);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B509389:{NFSU2_TR(0x509389);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50938a:{NFSU2_TR(0x50938a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50938d:{NFSU2_TR(0x50938d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B509390:{NFSU2_TR(0x509390);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509394:{NFSU2_TR(0x509394);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B509399:{NFSU2_TR(0x509399);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50939b:{NFSU2_TR(0x50939b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50939f:{NFSU2_TR(0x50939f);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5093a3:{NFSU2_TR(0x5093a3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5093a5:{NFSU2_TR(0x5093a5);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5093a9:{NFSU2_TR(0x5093a9);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5093ad:{NFSU2_TR(0x5093ad);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5093b1:{NFSU2_TR(0x5093b1);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5093b4:{NFSU2_TR(0x5093b4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5093b8:{NFSU2_TR(0x5093b8);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5093bb:{NFSU2_TR(0x5093bb);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5093bf:{NFSU2_TR(0x5093bf);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5093c2:{NFSU2_TR(0x5093c2);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5093c6:{NFSU2_TR(0x5093c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5093ca:{NFSU2_TR(0x5093ca);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5093cc:{NFSU2_TR(0x5093cc);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5093cf:{NFSU2_TR(0x5093cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5093d2:{NFSU2_TR(0x5093d2);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5093d6:{NFSU2_TR(0x5093d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5093da:{NFSU2_TR(0x5093da);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5093dd:{NFSU2_TR(0x5093dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5093e0:{NFSU2_TR(0x5093e0);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5093e3:L5093e3:{c.instructions+=24;NFSU2_TR(0x5093e3);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5093e6:{NFSU2_TR(0x5093e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5093e9:{NFSU2_TR(0x5093e9);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5093eb:{NFSU2_TR(0x5093eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5093ed:{NFSU2_TR(0x5093ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5093f1:{NFSU2_TR(0x5093f1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5093f3:{NFSU2_TR(0x5093f3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5093f6:{NFSU2_TR(0x5093f6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5093f9:{NFSU2_TR(0x5093f9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5093fb:{NFSU2_TR(0x5093fb);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5093fe:{NFSU2_TR(0x5093fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509401:{NFSU2_TR(0x509401);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509404:{NFSU2_TR(0x509404);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509408:{NFSU2_TR(0x509408);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50940c:{NFSU2_TR(0x50940c);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50940f:{NFSU2_TR(0x50940f);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509412:{NFSU2_TR(0x509412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B509414:{NFSU2_TR(0x509414);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509417:{NFSU2_TR(0x509417);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50941b:{NFSU2_TR(0x50941b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50941d:{NFSU2_TR(0x50941d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50941f:{NFSU2_TR(0x50941f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509422:{NFSU2_TR(0x509422);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509425:{NFSU2_TR(0x509425);
{goto L509559;}
}
B50942a:L50942a:{c.instructions+=2;NFSU2_TR(0x50942a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50942c:{NFSU2_TR(0x50942c);
if(r1(R+518)){{goto L509567;}}
}
B509432:L509432:{c.instructions+=88;NFSU2_TR(0x509432);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509435:{NFSU2_TR(0x509435);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509438:{NFSU2_TR(0x509438);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50943b:{NFSU2_TR(0x50943b);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50943e:{NFSU2_TR(0x50943e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509440:{NFSU2_TR(0x509440);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509443:{NFSU2_TR(0x509443);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50944a:{NFSU2_TR(0x50944a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509451:{NFSU2_TR(0x509451);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509453:{NFSU2_TR(0x509453);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509455:{NFSU2_TR(0x509455);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509458:{NFSU2_TR(0x509458);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50945c:{NFSU2_TR(0x50945c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50945f:{NFSU2_TR(0x50945f);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509462:{NFSU2_TR(0x509462);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509465:{NFSU2_TR(0x509465);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B509467:{NFSU2_TR(0x509467);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509469:{NFSU2_TR(0x509469);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50946b:{NFSU2_TR(0x50946b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50946d:{NFSU2_TR(0x50946d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50946f:{NFSU2_TR(0x50946f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509472:{NFSU2_TR(0x509472);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509475:{NFSU2_TR(0x509475);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509477:{NFSU2_TR(0x509477);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50947a:{NFSU2_TR(0x50947a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50947d:{NFSU2_TR(0x50947d);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509480:{NFSU2_TR(0x509480);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509483:{NFSU2_TR(0x509483);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509486:{NFSU2_TR(0x509486);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509488:{NFSU2_TR(0x509488);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50948a:{NFSU2_TR(0x50948a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50948c:{NFSU2_TR(0x50948c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50948f:{NFSU2_TR(0x50948f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509492:{NFSU2_TR(0x509492);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509495:{NFSU2_TR(0x509495);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509498:{NFSU2_TR(0x509498);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50949b:{NFSU2_TR(0x50949b);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50949e:{NFSU2_TR(0x50949e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5094a0:{NFSU2_TR(0x5094a0);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5094a3:{NFSU2_TR(0x5094a3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5094a5:{NFSU2_TR(0x5094a5);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5094a7:{NFSU2_TR(0x5094a7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5094ab:{NFSU2_TR(0x5094ab);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5094ad:{NFSU2_TR(0x5094ad);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5094b1:{NFSU2_TR(0x5094b1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5094b5:{NFSU2_TR(0x5094b5);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5094b8:{NFSU2_TR(0x5094b8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5094bc:{NFSU2_TR(0x5094bc);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5094bf:{NFSU2_TR(0x5094bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5094c2:{NFSU2_TR(0x5094c2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5094c4:{NFSU2_TR(0x5094c4);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5094c7:{NFSU2_TR(0x5094c7);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5094cb:{NFSU2_TR(0x5094cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5094cf:{NFSU2_TR(0x5094cf);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5094d2:{NFSU2_TR(0x5094d2);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5094d5:{NFSU2_TR(0x5094d5);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5094d8:{NFSU2_TR(0x5094d8);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5094db:{NFSU2_TR(0x5094db);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5094de:{NFSU2_TR(0x5094de);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5094e1:{NFSU2_TR(0x5094e1);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5094e8:{NFSU2_TR(0x5094e8);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5094ea:{NFSU2_TR(0x5094ea);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5094ed:{NFSU2_TR(0x5094ed);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5094f4:{NFSU2_TR(0x5094f4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5094f6:{NFSU2_TR(0x5094f6);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5094f8:{NFSU2_TR(0x5094f8);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5094fd:{NFSU2_TR(0x5094fd);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509501:{NFSU2_TR(0x509501);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509503:{NFSU2_TR(0x509503);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509507:{NFSU2_TR(0x509507);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50950e:{NFSU2_TR(0x50950e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509510:{NFSU2_TR(0x509510);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509514:{NFSU2_TR(0x509514);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50951b:{NFSU2_TR(0x50951b);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50951f:{NFSU2_TR(0x50951f);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509522:{NFSU2_TR(0x509522);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509526:{NFSU2_TR(0x509526);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509529:{NFSU2_TR(0x509529);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50952d:{NFSU2_TR(0x50952d);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509530:{NFSU2_TR(0x509530);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509537:{NFSU2_TR(0x509537);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50953e:{NFSU2_TR(0x50953e);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B509540:{NFSU2_TR(0x509540);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509543:{NFSU2_TR(0x509543);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509546:{NFSU2_TR(0x509546);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50954d:{NFSU2_TR(0x50954d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509554:{NFSU2_TR(0x509554);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509556:{NFSU2_TR(0x509556);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509559:L509559:{c.instructions+=5;NFSU2_TR(0x509559);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50955a:{NFSU2_TR(0x50955a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50955d:{NFSU2_TR(0x50955d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B509560:{NFSU2_TR(0x509560);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509564:{NFSU2_TR(0x509564);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B509567:L509567:{c.instructions+=6;NFSU2_TR(0x509567);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50956a:{NFSU2_TR(0x50956a);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50956d:{NFSU2_TR(0x50956d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50956f:{NFSU2_TR(0x50956f);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B509573:{NFSU2_TR(0x509573);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B509576:{NFSU2_TR(0x509576);
if(r1(R+514)){{goto L5096e1;}}
}
B50957c:L50957c:{c.instructions+=2;NFSU2_TR(0x50957c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50957e:{NFSU2_TR(0x50957e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50969b;}}
}
B509584:L509584:{c.instructions+=92;NFSU2_TR(0x509584);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509587:{NFSU2_TR(0x509587);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50958a:{NFSU2_TR(0x50958a);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50958d:{NFSU2_TR(0x50958d);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509590:{NFSU2_TR(0x509590);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509593:{NFSU2_TR(0x509593);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509595:{NFSU2_TR(0x509595);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50959c:{NFSU2_TR(0x50959c);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5095a3:{NFSU2_TR(0x5095a3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5095a5:{NFSU2_TR(0x5095a5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5095a7:{NFSU2_TR(0x5095a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5095aa:{NFSU2_TR(0x5095aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5095ae:{NFSU2_TR(0x5095ae);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5095b1:{NFSU2_TR(0x5095b1);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5095b4:{NFSU2_TR(0x5095b4);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5095b7:{NFSU2_TR(0x5095b7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5095b9:{NFSU2_TR(0x5095b9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5095bb:{NFSU2_TR(0x5095bb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5095bd:{NFSU2_TR(0x5095bd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5095bf:{NFSU2_TR(0x5095bf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5095c1:{NFSU2_TR(0x5095c1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5095c4:{NFSU2_TR(0x5095c4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5095c7:{NFSU2_TR(0x5095c7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5095c9:{NFSU2_TR(0x5095c9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5095cc:{NFSU2_TR(0x5095cc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5095cf:{NFSU2_TR(0x5095cf);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5095d2:{NFSU2_TR(0x5095d2);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5095d4:{NFSU2_TR(0x5095d4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5095d6:{NFSU2_TR(0x5095d6);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5095d9:{NFSU2_TR(0x5095d9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5095db:{NFSU2_TR(0x5095db);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5095dd:{NFSU2_TR(0x5095dd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5095e0:{NFSU2_TR(0x5095e0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5095e3:{NFSU2_TR(0x5095e3);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5095e6:{NFSU2_TR(0x5095e6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5095e9:{NFSU2_TR(0x5095e9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5095ec:{NFSU2_TR(0x5095ec);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5095ef:{NFSU2_TR(0x5095ef);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5095f2:{NFSU2_TR(0x5095f2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5095f4:{NFSU2_TR(0x5095f4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5095f6:{NFSU2_TR(0x5095f6);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5095f8:{NFSU2_TR(0x5095f8);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5095fc:{NFSU2_TR(0x5095fc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5095fe:{NFSU2_TR(0x5095fe);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509602:{NFSU2_TR(0x509602);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509606:{NFSU2_TR(0x509606);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509609:{NFSU2_TR(0x509609);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50960d:{NFSU2_TR(0x50960d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50960f:{NFSU2_TR(0x50960f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509612:{NFSU2_TR(0x509612);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509614:{NFSU2_TR(0x509614);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509617:{NFSU2_TR(0x509617);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50961b:{NFSU2_TR(0x50961b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50961f:{NFSU2_TR(0x50961f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509622:{NFSU2_TR(0x509622);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509625:{NFSU2_TR(0x509625);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509628:{NFSU2_TR(0x509628);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50962b:{NFSU2_TR(0x50962b);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50962e:{NFSU2_TR(0x50962e);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509631:{NFSU2_TR(0x509631);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509635:{NFSU2_TR(0x509635);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509638:{NFSU2_TR(0x509638);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50963a:{NFSU2_TR(0x50963a);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50963e:{NFSU2_TR(0x50963e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509640:{NFSU2_TR(0x509640);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B509641:{NFSU2_TR(0x509641);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B509643:{NFSU2_TR(0x509643);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B509646:{NFSU2_TR(0x509646);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B509649:{NFSU2_TR(0x509649);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50964e:{NFSU2_TR(0x50964e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509652:{NFSU2_TR(0x509652);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509654:{NFSU2_TR(0x509654);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509658:{NFSU2_TR(0x509658);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50965c:{NFSU2_TR(0x50965c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50965e:{NFSU2_TR(0x50965e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509662:{NFSU2_TR(0x509662);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509666:{NFSU2_TR(0x509666);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50966a:{NFSU2_TR(0x50966a);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50966d:{NFSU2_TR(0x50966d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509671:{NFSU2_TR(0x509671);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509674:{NFSU2_TR(0x509674);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509678:{NFSU2_TR(0x509678);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50967b:{NFSU2_TR(0x50967b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50967f:{NFSU2_TR(0x50967f);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509683:{NFSU2_TR(0x509683);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B509685:{NFSU2_TR(0x509685);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509687:{NFSU2_TR(0x509687);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50968a:{NFSU2_TR(0x50968a);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50968e:{NFSU2_TR(0x50968e);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509692:{NFSU2_TR(0x509692);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509695:{NFSU2_TR(0x509695);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509698:{NFSU2_TR(0x509698);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50969b:L50969b:{c.instructions+=23;NFSU2_TR(0x50969b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50969e:{NFSU2_TR(0x50969e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5096a1:{NFSU2_TR(0x5096a1);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5096a4:{NFSU2_TR(0x5096a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5096a6:{NFSU2_TR(0x5096a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5096aa:{NFSU2_TR(0x5096aa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5096ac:{NFSU2_TR(0x5096ac);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5096af:{NFSU2_TR(0x5096af);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5096b2:{NFSU2_TR(0x5096b2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5096b5:{NFSU2_TR(0x5096b5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5096b8:{NFSU2_TR(0x5096b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5096bb:{NFSU2_TR(0x5096bb);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5096be:{NFSU2_TR(0x5096be);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5096c2:{NFSU2_TR(0x5096c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5096c5:{NFSU2_TR(0x5096c5);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5096c8:{NFSU2_TR(0x5096c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5096cc:{NFSU2_TR(0x5096cc);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5096cf:{NFSU2_TR(0x5096cf);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5096d2:{NFSU2_TR(0x5096d2);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5096d4:{NFSU2_TR(0x5096d4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5096d6:{NFSU2_TR(0x5096d6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5096d9:{NFSU2_TR(0x5096d9);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5096dc:{NFSU2_TR(0x5096dc);
{goto L50980d;}
}
B5096e1:L5096e1:{c.instructions+=2;NFSU2_TR(0x5096e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5096e3:{NFSU2_TR(0x5096e3);
if(r1(R+518)){{goto L50981b;}}
}
B5096e9:L5096e9:{c.instructions+=88;NFSU2_TR(0x5096e9);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5096ec:{NFSU2_TR(0x5096ec);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5096ef:{NFSU2_TR(0x5096ef);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5096f2:{NFSU2_TR(0x5096f2);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5096f5:{NFSU2_TR(0x5096f5);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5096f8:{NFSU2_TR(0x5096f8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5096fa:{NFSU2_TR(0x5096fa);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509701:{NFSU2_TR(0x509701);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509708:{NFSU2_TR(0x509708);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50970a:{NFSU2_TR(0x50970a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50970c:{NFSU2_TR(0x50970c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50970f:{NFSU2_TR(0x50970f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509713:{NFSU2_TR(0x509713);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509716:{NFSU2_TR(0x509716);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509719:{NFSU2_TR(0x509719);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50971c:{NFSU2_TR(0x50971c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50971e:{NFSU2_TR(0x50971e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509720:{NFSU2_TR(0x509720);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509722:{NFSU2_TR(0x509722);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509724:{NFSU2_TR(0x509724);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509726:{NFSU2_TR(0x509726);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509729:{NFSU2_TR(0x509729);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50972c:{NFSU2_TR(0x50972c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50972e:{NFSU2_TR(0x50972e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509731:{NFSU2_TR(0x509731);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509734:{NFSU2_TR(0x509734);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509737:{NFSU2_TR(0x509737);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509739:{NFSU2_TR(0x509739);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50973b:{NFSU2_TR(0x50973b);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50973e:{NFSU2_TR(0x50973e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509740:{NFSU2_TR(0x509740);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509742:{NFSU2_TR(0x509742);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509745:{NFSU2_TR(0x509745);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509748:{NFSU2_TR(0x509748);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50974b:{NFSU2_TR(0x50974b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50974e:{NFSU2_TR(0x50974e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509751:{NFSU2_TR(0x509751);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509754:{NFSU2_TR(0x509754);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509757:{NFSU2_TR(0x509757);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509759:{NFSU2_TR(0x509759);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50975b:{NFSU2_TR(0x50975b);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50975d:{NFSU2_TR(0x50975d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509761:{NFSU2_TR(0x509761);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509763:{NFSU2_TR(0x509763);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509767:{NFSU2_TR(0x509767);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50976b:{NFSU2_TR(0x50976b);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50976e:{NFSU2_TR(0x50976e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509772:{NFSU2_TR(0x509772);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509774:{NFSU2_TR(0x509774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509777:{NFSU2_TR(0x509777);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509779:{NFSU2_TR(0x509779);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50977c:{NFSU2_TR(0x50977c);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509780:{NFSU2_TR(0x509780);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509784:{NFSU2_TR(0x509784);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509787:{NFSU2_TR(0x509787);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50978a:{NFSU2_TR(0x50978a);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50978d:{NFSU2_TR(0x50978d);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509790:{NFSU2_TR(0x509790);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509793:{NFSU2_TR(0x509793);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509796:{NFSU2_TR(0x509796);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50979d:{NFSU2_TR(0x50979d);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5097a0:{NFSU2_TR(0x5097a0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5097a2:{NFSU2_TR(0x5097a2);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5097a9:{NFSU2_TR(0x5097a9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5097ab:{NFSU2_TR(0x5097ab);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5097b0:{NFSU2_TR(0x5097b0);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5097b2:{NFSU2_TR(0x5097b2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5097b6:{NFSU2_TR(0x5097b6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5097b8:{NFSU2_TR(0x5097b8);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5097bc:{NFSU2_TR(0x5097bc);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5097c3:{NFSU2_TR(0x5097c3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5097c5:{NFSU2_TR(0x5097c5);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5097c9:{NFSU2_TR(0x5097c9);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5097d0:{NFSU2_TR(0x5097d0);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5097d4:{NFSU2_TR(0x5097d4);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5097d7:{NFSU2_TR(0x5097d7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5097db:{NFSU2_TR(0x5097db);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5097de:{NFSU2_TR(0x5097de);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5097e2:{NFSU2_TR(0x5097e2);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5097e5:{NFSU2_TR(0x5097e5);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5097ec:{NFSU2_TR(0x5097ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5097f3:{NFSU2_TR(0x5097f3);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5097f5:{NFSU2_TR(0x5097f5);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5097f7:{NFSU2_TR(0x5097f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5097fa:{NFSU2_TR(0x5097fa);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509801:{NFSU2_TR(0x509801);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509808:{NFSU2_TR(0x509808);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50980a:{NFSU2_TR(0x50980a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50980d:L50980d:{c.instructions+=5;NFSU2_TR(0x50980d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50980e:{NFSU2_TR(0x50980e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509811:{NFSU2_TR(0x509811);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B509814:{NFSU2_TR(0x509814);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509818:{NFSU2_TR(0x509818);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50981b:L50981b:{c.instructions+=6;NFSU2_TR(0x50981b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50981e:{NFSU2_TR(0x50981e);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B509821:{NFSU2_TR(0x509821);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B509823:{NFSU2_TR(0x509823);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B509827:{NFSU2_TR(0x509827);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50982a:{NFSU2_TR(0x50982a);
if(r1(R+514)){{goto L509997;}}
}
B509830:L509830:{c.instructions+=2;NFSU2_TR(0x509830);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B509832:{NFSU2_TR(0x509832);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L509951;}}
}
B509838:L509838:{c.instructions+=91;NFSU2_TR(0x509838);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50983b:{NFSU2_TR(0x50983b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50983e:{NFSU2_TR(0x50983e);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509841:{NFSU2_TR(0x509841);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509844:{NFSU2_TR(0x509844);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509847:{NFSU2_TR(0x509847);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50984a:{NFSU2_TR(0x50984a);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509851:{NFSU2_TR(0x509851);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509858:{NFSU2_TR(0x509858);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50985a:{NFSU2_TR(0x50985a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50985c:{NFSU2_TR(0x50985c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50985f:{NFSU2_TR(0x50985f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509863:{NFSU2_TR(0x509863);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509866:{NFSU2_TR(0x509866);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509869:{NFSU2_TR(0x509869);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50986c:{NFSU2_TR(0x50986c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50986e:{NFSU2_TR(0x50986e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509870:{NFSU2_TR(0x509870);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509872:{NFSU2_TR(0x509872);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509874:{NFSU2_TR(0x509874);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509876:{NFSU2_TR(0x509876);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509879:{NFSU2_TR(0x509879);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50987c:{NFSU2_TR(0x50987c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50987e:{NFSU2_TR(0x50987e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509881:{NFSU2_TR(0x509881);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509884:{NFSU2_TR(0x509884);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509887:{NFSU2_TR(0x509887);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50988a:{NFSU2_TR(0x50988a);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50988d:{NFSU2_TR(0x50988d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50988f:{NFSU2_TR(0x50988f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509891:{NFSU2_TR(0x509891);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509893:{NFSU2_TR(0x509893);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509896:{NFSU2_TR(0x509896);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509899:{NFSU2_TR(0x509899);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50989c:{NFSU2_TR(0x50989c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50989f:{NFSU2_TR(0x50989f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5098a2:{NFSU2_TR(0x5098a2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5098a5:{NFSU2_TR(0x5098a5);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5098a8:{NFSU2_TR(0x5098a8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5098ab:{NFSU2_TR(0x5098ab);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5098ad:{NFSU2_TR(0x5098ad);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5098af:{NFSU2_TR(0x5098af);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5098b3:{NFSU2_TR(0x5098b3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5098b5:{NFSU2_TR(0x5098b5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5098b9:{NFSU2_TR(0x5098b9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5098bd:{NFSU2_TR(0x5098bd);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5098c0:{NFSU2_TR(0x5098c0);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5098c4:{NFSU2_TR(0x5098c4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5098c7:{NFSU2_TR(0x5098c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5098ca:{NFSU2_TR(0x5098ca);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5098cc:{NFSU2_TR(0x5098cc);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5098cf:{NFSU2_TR(0x5098cf);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5098d3:{NFSU2_TR(0x5098d3);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5098d6:{NFSU2_TR(0x5098d6);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5098d9:{NFSU2_TR(0x5098d9);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5098dc:{NFSU2_TR(0x5098dc);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5098df:{NFSU2_TR(0x5098df);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5098e2:{NFSU2_TR(0x5098e2);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5098e5:{NFSU2_TR(0x5098e5);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5098e9:{NFSU2_TR(0x5098e9);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5098ec:{NFSU2_TR(0x5098ec);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5098ef:{NFSU2_TR(0x5098ef);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5098f3:{NFSU2_TR(0x5098f3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5098f4:{NFSU2_TR(0x5098f4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5098f6:{NFSU2_TR(0x5098f6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5098f9:{NFSU2_TR(0x5098f9);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5098fb:{NFSU2_TR(0x5098fb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5098fe:{NFSU2_TR(0x5098fe);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B509903:{NFSU2_TR(0x509903);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509907:{NFSU2_TR(0x509907);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509909:{NFSU2_TR(0x509909);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50990d:{NFSU2_TR(0x50990d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509911:{NFSU2_TR(0x509911);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509913:{NFSU2_TR(0x509913);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509917:{NFSU2_TR(0x509917);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50991b:{NFSU2_TR(0x50991b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50991f:{NFSU2_TR(0x50991f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509922:{NFSU2_TR(0x509922);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509926:{NFSU2_TR(0x509926);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509929:{NFSU2_TR(0x509929);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50992d:{NFSU2_TR(0x50992d);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509930:{NFSU2_TR(0x509930);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509934:{NFSU2_TR(0x509934);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509938:{NFSU2_TR(0x509938);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50993a:{NFSU2_TR(0x50993a);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50993d:{NFSU2_TR(0x50993d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509940:{NFSU2_TR(0x509940);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509944:{NFSU2_TR(0x509944);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509948:{NFSU2_TR(0x509948);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50994b:{NFSU2_TR(0x50994b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50994e:{NFSU2_TR(0x50994e);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509951:L509951:{c.instructions+=23;NFSU2_TR(0x509951);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509954:{NFSU2_TR(0x509954);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509957:{NFSU2_TR(0x509957);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50995a:{NFSU2_TR(0x50995a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B50995c:{NFSU2_TR(0x50995c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509960:{NFSU2_TR(0x509960);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509962:{NFSU2_TR(0x509962);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509965:{NFSU2_TR(0x509965);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509968:{NFSU2_TR(0x509968);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50996b:{NFSU2_TR(0x50996b);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50996e:{NFSU2_TR(0x50996e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509971:{NFSU2_TR(0x509971);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509974:{NFSU2_TR(0x509974);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509978:{NFSU2_TR(0x509978);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50997b:{NFSU2_TR(0x50997b);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50997e:{NFSU2_TR(0x50997e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509982:{NFSU2_TR(0x509982);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509985:{NFSU2_TR(0x509985);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509988:{NFSU2_TR(0x509988);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50998a:{NFSU2_TR(0x50998a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50998c:{NFSU2_TR(0x50998c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50998f:{NFSU2_TR(0x50998f);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509992:{NFSU2_TR(0x509992);
{goto L509ac5;}
}
B509997:L509997:{c.instructions+=2;NFSU2_TR(0x509997);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B509999:{NFSU2_TR(0x509999);
if(r1(R+518)){{goto L509ad3;}}
}
B50999f:L50999f:{c.instructions+=87;NFSU2_TR(0x50999f);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5099a2:{NFSU2_TR(0x5099a2);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5099a5:{NFSU2_TR(0x5099a5);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5099a8:{NFSU2_TR(0x5099a8);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5099ab:{NFSU2_TR(0x5099ab);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5099ae:{NFSU2_TR(0x5099ae);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5099b1:{NFSU2_TR(0x5099b1);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5099b8:{NFSU2_TR(0x5099b8);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5099bf:{NFSU2_TR(0x5099bf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5099c1:{NFSU2_TR(0x5099c1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5099c3:{NFSU2_TR(0x5099c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5099c6:{NFSU2_TR(0x5099c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5099ca:{NFSU2_TR(0x5099ca);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5099cd:{NFSU2_TR(0x5099cd);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5099d0:{NFSU2_TR(0x5099d0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5099d3:{NFSU2_TR(0x5099d3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5099d5:{NFSU2_TR(0x5099d5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5099d7:{NFSU2_TR(0x5099d7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5099d9:{NFSU2_TR(0x5099d9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5099db:{NFSU2_TR(0x5099db);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5099dd:{NFSU2_TR(0x5099dd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5099e0:{NFSU2_TR(0x5099e0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5099e3:{NFSU2_TR(0x5099e3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5099e5:{NFSU2_TR(0x5099e5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5099e8:{NFSU2_TR(0x5099e8);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5099eb:{NFSU2_TR(0x5099eb);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5099ee:{NFSU2_TR(0x5099ee);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5099f1:{NFSU2_TR(0x5099f1);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5099f4:{NFSU2_TR(0x5099f4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5099f6:{NFSU2_TR(0x5099f6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5099f8:{NFSU2_TR(0x5099f8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5099fa:{NFSU2_TR(0x5099fa);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5099fd:{NFSU2_TR(0x5099fd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509a00:{NFSU2_TR(0x509a00);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509a03:{NFSU2_TR(0x509a03);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509a06:{NFSU2_TR(0x509a06);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509a09:{NFSU2_TR(0x509a09);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509a0c:{NFSU2_TR(0x509a0c);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509a0f:{NFSU2_TR(0x509a0f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509a12:{NFSU2_TR(0x509a12);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509a14:{NFSU2_TR(0x509a14);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B509a16:{NFSU2_TR(0x509a16);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509a1a:{NFSU2_TR(0x509a1a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509a1c:{NFSU2_TR(0x509a1c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509a20:{NFSU2_TR(0x509a20);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509a24:{NFSU2_TR(0x509a24);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509a27:{NFSU2_TR(0x509a27);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509a2b:{NFSU2_TR(0x509a2b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509a2e:{NFSU2_TR(0x509a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509a31:{NFSU2_TR(0x509a31);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509a33:{NFSU2_TR(0x509a33);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509a36:{NFSU2_TR(0x509a36);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509a3a:{NFSU2_TR(0x509a3a);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509a3d:{NFSU2_TR(0x509a3d);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509a40:{NFSU2_TR(0x509a40);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509a43:{NFSU2_TR(0x509a43);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509a46:{NFSU2_TR(0x509a46);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509a49:{NFSU2_TR(0x509a49);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509a4c:{NFSU2_TR(0x509a4c);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509a53:{NFSU2_TR(0x509a53);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509a56:{NFSU2_TR(0x509a56);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509a59:{NFSU2_TR(0x509a59);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509a60:{NFSU2_TR(0x509a60);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B509a65:{NFSU2_TR(0x509a65);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509a67:{NFSU2_TR(0x509a67);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B509a69:{NFSU2_TR(0x509a69);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509a6d:{NFSU2_TR(0x509a6d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509a6f:{NFSU2_TR(0x509a6f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509a73:{NFSU2_TR(0x509a73);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509a7a:{NFSU2_TR(0x509a7a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509a7c:{NFSU2_TR(0x509a7c);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509a80:{NFSU2_TR(0x509a80);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509a87:{NFSU2_TR(0x509a87);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509a8b:{NFSU2_TR(0x509a8b);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509a8e:{NFSU2_TR(0x509a8e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509a92:{NFSU2_TR(0x509a92);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509a95:{NFSU2_TR(0x509a95);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509a99:{NFSU2_TR(0x509a99);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509a9c:{NFSU2_TR(0x509a9c);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509aa3:{NFSU2_TR(0x509aa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509aaa:{NFSU2_TR(0x509aaa);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B509aac:{NFSU2_TR(0x509aac);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509aaf:{NFSU2_TR(0x509aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509ab2:{NFSU2_TR(0x509ab2);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509ab9:{NFSU2_TR(0x509ab9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509ac0:{NFSU2_TR(0x509ac0);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509ac2:{NFSU2_TR(0x509ac2);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509ac5:L509ac5:{c.instructions+=5;NFSU2_TR(0x509ac5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B509ac6:{NFSU2_TR(0x509ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509ac9:{NFSU2_TR(0x509ac9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B509acc:{NFSU2_TR(0x509acc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509ad0:{NFSU2_TR(0x509ad0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B509ad3:L509ad3:{c.instructions+=22;NFSU2_TR(0x509ad3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509ad7:{NFSU2_TR(0x509ad7);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B509ade:{NFSU2_TR(0x509ade);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509ae5:{NFSU2_TR(0x509ae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509ae9:{NFSU2_TR(0x509ae9);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B509aeb:{NFSU2_TR(0x509aeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509aef:{NFSU2_TR(0x509aef);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B509af6:{NFSU2_TR(0x509af6);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B509af8:{NFSU2_TR(0x509af8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509afc:{NFSU2_TR(0x509afc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B509b00:{NFSU2_TR(0x509b00);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B509b03:{NFSU2_TR(0x509b03);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B509b06:{NFSU2_TR(0x509b06);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509b0a:{NFSU2_TR(0x509b0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509b0e:{NFSU2_TR(0x509b0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509b12:{NFSU2_TR(0x509b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B509b15:{NFSU2_TR(0x509b15);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B509b18:{NFSU2_TR(0x509b18);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B509b1b:{NFSU2_TR(0x509b1b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B509b1e:{NFSU2_TR(0x509b1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B509b20:{NFSU2_TR(0x509b20);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509b24:{NFSU2_TR(0x509b24);
if(r1(R+512)){TAIL_STATIC(0x508f6bu,508);}
}
B509b2a:L509b2a:{c.instructions+=7;NFSU2_TR(0x509b2a);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509b31:{NFSU2_TR(0x509b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509b34:{NFSU2_TR(0x509b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B509b37:{NFSU2_TR(0x509b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B509b3a:{NFSU2_TR(0x509b3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B509b3e:{NFSU2_TR(0x509b3e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
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
B509b41:{NFSU2_TR(0x509b41);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L509f21;}}
}
B509b47:L509b47:{c.instructions+=25;NFSU2_TR(0x509b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B509b4e:{NFSU2_TR(0x509b4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509b52:{NFSU2_TR(0x509b52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B509b56:{NFSU2_TR(0x509b56);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B509b59:{NFSU2_TR(0x509b59);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B509b5b:{NFSU2_TR(0x509b5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509b5f:{NFSU2_TR(0x509b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509b62:{NFSU2_TR(0x509b62);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B509b64:{NFSU2_TR(0x509b64);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509b68:{NFSU2_TR(0x509b68);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B509b6b:{NFSU2_TR(0x509b6b);
__builtin_memmove((R+8),(R+28),4);
}
B509b6d:{NFSU2_TR(0x509b6d);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B509b71:{NFSU2_TR(0x509b71);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509b75:{NFSU2_TR(0x509b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509b78:{NFSU2_TR(0x509b78);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B509b7c:{NFSU2_TR(0x509b7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509b80:{NFSU2_TR(0x509b80);
__builtin_memmove((R+0),(R+12),4);
}
B509b82:{NFSU2_TR(0x509b82);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B509b84:{NFSU2_TR(0x509b84);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509b88:{NFSU2_TR(0x509b88);
w4(R+0,u32(0xfffffff8ull));
}
B509b8d:{NFSU2_TR(0x509b8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B509b90:{NFSU2_TR(0x509b90);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B509b92:{NFSU2_TR(0x509b92);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509b96:{NFSU2_TR(0x509b96);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509b9d:{NFSU2_TR(0x509b9d);
__builtin_memmove((R+4),(R+4),4);
}
B509ba0:L509ba0:{c.instructions+=7;NFSU2_TR(0x509ba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509ba4:{NFSU2_TR(0x509ba4);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509ba7:{NFSU2_TR(0x509ba7);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B509baa:{NFSU2_TR(0x509baa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B509bac:{NFSU2_TR(0x509bac);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B509bb0:{NFSU2_TR(0x509bb0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B509bb3:{NFSU2_TR(0x509bb3);
if(r1(R+514)){{goto L509d74;}}
}
B509bb9:L509bb9:{c.instructions+=2;NFSU2_TR(0x509bb9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B509bbb:{NFSU2_TR(0x509bbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L509d15;}}
}
B509bc1:L509bc1:{c.instructions+=105;NFSU2_TR(0x509bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509bc4:{NFSU2_TR(0x509bc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509bc8:{NFSU2_TR(0x509bc8);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509bcb:{NFSU2_TR(0x509bcb);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509bce:{NFSU2_TR(0x509bce);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509bd1:{NFSU2_TR(0x509bd1);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509bd5:{NFSU2_TR(0x509bd5);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509bd9:{NFSU2_TR(0x509bd9);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B509bdb:{NFSU2_TR(0x509bdb);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509be2:{NFSU2_TR(0x509be2);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509be9:{NFSU2_TR(0x509be9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509beb:{NFSU2_TR(0x509beb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509bed:{NFSU2_TR(0x509bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509bf0:{NFSU2_TR(0x509bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509bf4:{NFSU2_TR(0x509bf4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509bf7:{NFSU2_TR(0x509bf7);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509bfa:{NFSU2_TR(0x509bfa);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509bfd:{NFSU2_TR(0x509bfd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B509bff:{NFSU2_TR(0x509bff);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509c01:{NFSU2_TR(0x509c01);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509c03:{NFSU2_TR(0x509c03);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509c05:{NFSU2_TR(0x509c05);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509c07:{NFSU2_TR(0x509c07);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509c0a:{NFSU2_TR(0x509c0a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509c0d:{NFSU2_TR(0x509c0d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509c0f:{NFSU2_TR(0x509c0f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509c12:{NFSU2_TR(0x509c12);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509c15:{NFSU2_TR(0x509c15);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509c19:{NFSU2_TR(0x509c19);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509c1d:{NFSU2_TR(0x509c1d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509c1f:{NFSU2_TR(0x509c1f);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509c22:{NFSU2_TR(0x509c22);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509c26:{NFSU2_TR(0x509c26);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509c28:{NFSU2_TR(0x509c28);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509c2a:{NFSU2_TR(0x509c2a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509c2d:{NFSU2_TR(0x509c2d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509c30:{NFSU2_TR(0x509c30);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509c33:{NFSU2_TR(0x509c33);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509c36:{NFSU2_TR(0x509c36);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509c39:{NFSU2_TR(0x509c39);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509c3c:{NFSU2_TR(0x509c3c);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509c40:{NFSU2_TR(0x509c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509c43:{NFSU2_TR(0x509c43);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509c47:{NFSU2_TR(0x509c47);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509c49:{NFSU2_TR(0x509c49);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B509c4b:{NFSU2_TR(0x509c4b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509c4f:{NFSU2_TR(0x509c4f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509c51:{NFSU2_TR(0x509c51);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509c55:{NFSU2_TR(0x509c55);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509c59:{NFSU2_TR(0x509c59);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509c5c:{NFSU2_TR(0x509c5c);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509c60:{NFSU2_TR(0x509c60);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509c64:{NFSU2_TR(0x509c64);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509c68:{NFSU2_TR(0x509c68);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509c6a:{NFSU2_TR(0x509c6a);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509c6d:{NFSU2_TR(0x509c6d);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509c71:{NFSU2_TR(0x509c71);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509c75:{NFSU2_TR(0x509c75);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509c78:{NFSU2_TR(0x509c78);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509c7b:{NFSU2_TR(0x509c7b);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509c7e:{NFSU2_TR(0x509c7e);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509c82:{NFSU2_TR(0x509c82);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509c86:{NFSU2_TR(0x509c86);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509c8a:{NFSU2_TR(0x509c8a);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509c8d:{NFSU2_TR(0x509c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509c91:{NFSU2_TR(0x509c91);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509c95:{NFSU2_TR(0x509c95);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B509c98:{NFSU2_TR(0x509c98);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509c9c:{NFSU2_TR(0x509c9c);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509ca0:{NFSU2_TR(0x509ca0);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B509ca5:{NFSU2_TR(0x509ca5);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B509ca7:{NFSU2_TR(0x509ca7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509cab:{NFSU2_TR(0x509cab);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509caf:{NFSU2_TR(0x509caf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509cb1:{NFSU2_TR(0x509cb1);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B509cb3:{NFSU2_TR(0x509cb3);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509cb7:{NFSU2_TR(0x509cb7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509cb9:{NFSU2_TR(0x509cb9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509cbd:{NFSU2_TR(0x509cbd);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509cc1:{NFSU2_TR(0x509cc1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509cc3:{NFSU2_TR(0x509cc3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509cc7:{NFSU2_TR(0x509cc7);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509ccb:{NFSU2_TR(0x509ccb);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509ccf:{NFSU2_TR(0x509ccf);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509cd2:{NFSU2_TR(0x509cd2);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509cd6:{NFSU2_TR(0x509cd6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509cda:{NFSU2_TR(0x509cda);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509cde:{NFSU2_TR(0x509cde);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509ce2:{NFSU2_TR(0x509ce2);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509ce6:{NFSU2_TR(0x509ce6);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509cea:{NFSU2_TR(0x509cea);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B509cee:{NFSU2_TR(0x509cee);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B509cf0:{NFSU2_TR(0x509cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509cf3:{NFSU2_TR(0x509cf3);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509cf7:{NFSU2_TR(0x509cf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B509cfb:{NFSU2_TR(0x509cfb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509cfd:{NFSU2_TR(0x509cfd);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509cff:{NFSU2_TR(0x509cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509d02:{NFSU2_TR(0x509d02);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B509d06:{NFSU2_TR(0x509d06);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509d09:{NFSU2_TR(0x509d09);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B509d0a:{NFSU2_TR(0x509d0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509d0e:{NFSU2_TR(0x509d0e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B509d10:{NFSU2_TR(0x509d10);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B509d13:{NFSU2_TR(0x509d13);
{goto L509d19;}
}
B509d15:L509d15:{c.instructions+=1;NFSU2_TR(0x509d15);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509d19:L509d19:{c.instructions+=29;NFSU2_TR(0x509d19);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509d1c:{NFSU2_TR(0x509d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B509d1f:{NFSU2_TR(0x509d1f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509d21:{NFSU2_TR(0x509d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509d24:{NFSU2_TR(0x509d24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B509d26:{NFSU2_TR(0x509d26);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509d28:{NFSU2_TR(0x509d28);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509d2c:{NFSU2_TR(0x509d2c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509d2f:{NFSU2_TR(0x509d2f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509d32:{NFSU2_TR(0x509d32);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509d36:{NFSU2_TR(0x509d36);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509d39:{NFSU2_TR(0x509d39);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509d3d:{NFSU2_TR(0x509d3d);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509d40:{NFSU2_TR(0x509d40);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509d44:{NFSU2_TR(0x509d44);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B509d48:{NFSU2_TR(0x509d48);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509d4b:{NFSU2_TR(0x509d4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509d4f:{NFSU2_TR(0x509d4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B509d53:{NFSU2_TR(0x509d53);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509d56:{NFSU2_TR(0x509d56);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509d5a:{NFSU2_TR(0x509d5a);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509d5d:{NFSU2_TR(0x509d5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B509d5f:{NFSU2_TR(0x509d5f);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509d61:{NFSU2_TR(0x509d61);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509d63:{NFSU2_TR(0x509d63);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509d67:{NFSU2_TR(0x509d67);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509d6a:{NFSU2_TR(0x509d6a);
__builtin_memmove((R+0),(R+8),4);
}
B509d6c:{NFSU2_TR(0x509d6c);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509d6f:{NFSU2_TR(0x509d6f);
{goto L509ed4;}
}
B509d74:L509d74:{c.instructions+=2;NFSU2_TR(0x509d74);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B509d76:{NFSU2_TR(0x509d76);
if(r1(R+518)){{goto L509eea;}}
}
B509d7c:L509d7c:{c.instructions+=98;NFSU2_TR(0x509d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509d7f:{NFSU2_TR(0x509d7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509d83:{NFSU2_TR(0x509d83);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509d86:{NFSU2_TR(0x509d86);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509d89:{NFSU2_TR(0x509d89);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509d8c:{NFSU2_TR(0x509d8c);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509d90:{NFSU2_TR(0x509d90);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509d94:{NFSU2_TR(0x509d94);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B509d96:{NFSU2_TR(0x509d96);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509d9d:{NFSU2_TR(0x509d9d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509da4:{NFSU2_TR(0x509da4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509da6:{NFSU2_TR(0x509da6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509da8:{NFSU2_TR(0x509da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509dab:{NFSU2_TR(0x509dab);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509daf:{NFSU2_TR(0x509daf);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509db2:{NFSU2_TR(0x509db2);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509db5:{NFSU2_TR(0x509db5);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509db8:{NFSU2_TR(0x509db8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B509dba:{NFSU2_TR(0x509dba);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509dbc:{NFSU2_TR(0x509dbc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509dbe:{NFSU2_TR(0x509dbe);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509dc0:{NFSU2_TR(0x509dc0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509dc2:{NFSU2_TR(0x509dc2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509dc5:{NFSU2_TR(0x509dc5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509dc8:{NFSU2_TR(0x509dc8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B509dca:{NFSU2_TR(0x509dca);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509dcd:{NFSU2_TR(0x509dcd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509dd0:{NFSU2_TR(0x509dd0);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509dd4:{NFSU2_TR(0x509dd4);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509dd8:{NFSU2_TR(0x509dd8);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509ddb:{NFSU2_TR(0x509ddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509ddf:{NFSU2_TR(0x509ddf);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509de1:{NFSU2_TR(0x509de1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509de3:{NFSU2_TR(0x509de3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509de5:{NFSU2_TR(0x509de5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509de8:{NFSU2_TR(0x509de8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509deb:{NFSU2_TR(0x509deb);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509dee:{NFSU2_TR(0x509dee);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509df1:{NFSU2_TR(0x509df1);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509df4:{NFSU2_TR(0x509df4);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509df7:{NFSU2_TR(0x509df7);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509dfb:{NFSU2_TR(0x509dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509dfe:{NFSU2_TR(0x509dfe);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509e02:{NFSU2_TR(0x509e02);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509e04:{NFSU2_TR(0x509e04);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B509e06:{NFSU2_TR(0x509e06);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509e0a:{NFSU2_TR(0x509e0a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509e0c:{NFSU2_TR(0x509e0c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509e10:{NFSU2_TR(0x509e10);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509e14:{NFSU2_TR(0x509e14);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509e17:{NFSU2_TR(0x509e17);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509e1b:{NFSU2_TR(0x509e1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509e1f:{NFSU2_TR(0x509e1f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509e23:{NFSU2_TR(0x509e23);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509e25:{NFSU2_TR(0x509e25);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509e28:{NFSU2_TR(0x509e28);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509e2c:{NFSU2_TR(0x509e2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509e30:{NFSU2_TR(0x509e30);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509e33:{NFSU2_TR(0x509e33);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509e36:{NFSU2_TR(0x509e36);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509e39:{NFSU2_TR(0x509e39);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509e3d:{NFSU2_TR(0x509e3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509e41:{NFSU2_TR(0x509e41);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509e45:{NFSU2_TR(0x509e45);
{u32 ea_=u32(r4(R+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509e48:{NFSU2_TR(0x509e48);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509e4c:{NFSU2_TR(0x509e4c);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B509e50:{NFSU2_TR(0x509e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509e54:{NFSU2_TR(0x509e54);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509e5b:{NFSU2_TR(0x509e5b);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509e5f:{NFSU2_TR(0x509e5f);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B509e64:{NFSU2_TR(0x509e64);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B509e66:{NFSU2_TR(0x509e66);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509e6d:{NFSU2_TR(0x509e6d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509e6f:{NFSU2_TR(0x509e6f);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B509e71:{NFSU2_TR(0x509e71);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509e75:{NFSU2_TR(0x509e75);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509e77:{NFSU2_TR(0x509e77);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509e7b:{NFSU2_TR(0x509e7b);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509e82:{NFSU2_TR(0x509e82);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B509e84:{NFSU2_TR(0x509e84);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509e88:{NFSU2_TR(0x509e88);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B509e8f:{NFSU2_TR(0x509e8f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509e93:{NFSU2_TR(0x509e93);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509e96:{NFSU2_TR(0x509e96);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509e9a:{NFSU2_TR(0x509e9a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509e9e:{NFSU2_TR(0x509e9e);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509ea2:{NFSU2_TR(0x509ea2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B509ea6:{NFSU2_TR(0x509ea6);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509ead:{NFSU2_TR(0x509ead);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509eb1:{NFSU2_TR(0x509eb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B509eb8:{NFSU2_TR(0x509eb8);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B509eba:{NFSU2_TR(0x509eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509ebd:{NFSU2_TR(0x509ebd);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509ec4:{NFSU2_TR(0x509ec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509ecb:{NFSU2_TR(0x509ecb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509ecd:{NFSU2_TR(0x509ecd);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509ecf:{NFSU2_TR(0x509ecf);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509ed2:{NFSU2_TR(0x509ed2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B509ed4:L509ed4:{c.instructions+=7;NFSU2_TR(0x509ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509ed7:{NFSU2_TR(0x509ed7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509edb:{NFSU2_TR(0x509edb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B509ede:{NFSU2_TR(0x509ede);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B509edf:{NFSU2_TR(0x509edf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B509ee2:{NFSU2_TR(0x509ee2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509ee6:{NFSU2_TR(0x509ee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509eea:L509eea:{c.instructions+=12;NFSU2_TR(0x509eea);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B509eee:{NFSU2_TR(0x509eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B509ef5:{NFSU2_TR(0x509ef5);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B509efc:{NFSU2_TR(0x509efc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509f00:{NFSU2_TR(0x509f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509f04:{NFSU2_TR(0x509f04);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B509f06:{NFSU2_TR(0x509f06);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B509f0a:{NFSU2_TR(0x509f0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B509f0f:{NFSU2_TR(0x509f0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B509f14:{NFSU2_TR(0x509f14);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509f18:{NFSU2_TR(0x509f18);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
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
B509f1b:{NFSU2_TR(0x509f1b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x509ba0u);}goto L509ba0;}}
}
B509f21:L509f21:{c.instructions+=7;NFSU2_TR(0x509f21);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509f25:{NFSU2_TR(0x509f25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B509f26:{NFSU2_TR(0x509f26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B509f27:{NFSU2_TR(0x509f27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B509f28:{NFSU2_TR(0x509f28);
__builtin_memmove((R+16),(R+20),4);
}
B509f2a:{NFSU2_TR(0x509f2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B509f2b:{NFSU2_TR(0x509f2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B509f30:L509f30:{c.instructions+=20;NFSU2_TR(0x509f30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B509f31:{NFSU2_TR(0x509f31);
__builtin_memmove((R+20),(R+16),4);
}
B509f33:{NFSU2_TR(0x509f33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B509f36:{NFSU2_TR(0x509f36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd4ull))));
}
B509f3c:{NFSU2_TR(0x509f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B509f3f:{NFSU2_TR(0x509f3f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B509f40:{NFSU2_TR(0x509f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B509f43:{NFSU2_TR(0x509f43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B509f44:{NFSU2_TR(0x509f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B509f47:{NFSU2_TR(0x509f47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B509f48:{NFSU2_TR(0x509f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B509f4b:{NFSU2_TR(0x509f4b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B509f4c:{NFSU2_TR(0x509f4c);
__builtin_memmove((R+4),(R+28),4);
}
B509f4e:{NFSU2_TR(0x509f4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B509f51:{NFSU2_TR(0x509f51);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509f55:{NFSU2_TR(0x509f55);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B509f58:{NFSU2_TR(0x509f58);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B509f5a:{NFSU2_TR(0x509f5a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B509f5d:{NFSU2_TR(0x509f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509f60:{NFSU2_TR(0x509f60);
if(r1(R+514)){{goto L509fbf;}}
}
B509f62:L509f62:{c.instructions+=28;NFSU2_TR(0x509f62);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509f66:{NFSU2_TR(0x509f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509f69:{NFSU2_TR(0x509f69);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509f6d:{NFSU2_TR(0x509f6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B509f70:{NFSU2_TR(0x509f70);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B509f72:{NFSU2_TR(0x509f72);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509f74:{NFSU2_TR(0x509f74);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509f77:{NFSU2_TR(0x509f77);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B509f7f:{NFSU2_TR(0x509f7f);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B509f84:{NFSU2_TR(0x509f84);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509f87:{NFSU2_TR(0x509f87);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B509f8a:{NFSU2_TR(0x509f8a);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509f8e:{NFSU2_TR(0x509f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509f91:{NFSU2_TR(0x509f91);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509f94:{NFSU2_TR(0x509f94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B509f96:{NFSU2_TR(0x509f96);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509f9a:{NFSU2_TR(0x509f9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B509f9d:{NFSU2_TR(0x509f9d);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509fa1:{NFSU2_TR(0x509fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509fa4:{NFSU2_TR(0x509fa4);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B509fa8:{NFSU2_TR(0x509fa8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B509faa:{NFSU2_TR(0x509faa);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509fae:{NFSU2_TR(0x509fae);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B509fb2:{NFSU2_TR(0x509fb2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B509fb4:{NFSU2_TR(0x509fb4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509fb7:{NFSU2_TR(0x509fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509fba:{NFSU2_TR(0x509fba);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B509fbd:{NFSU2_TR(0x509fbd);
{goto L509fcc;}
}
B509fbf:L509fbf:{c.instructions+=2;NFSU2_TR(0x509fbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B509fc7:{NFSU2_TR(0x509fc7);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B509fcc:L509fcc:{c.instructions+=3;NFSU2_TR(0x509fcc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B509fd0:{NFSU2_TR(0x509fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B509fd8:{NFSU2_TR(0x509fd8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x50ac16u,50a);}
}
B509fde:L509fde:{c.instructions+=10;NFSU2_TR(0x509fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B509fe1:{NFSU2_TR(0x509fe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509fe5:{NFSU2_TR(0x509fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B509fec:{NFSU2_TR(0x509fec);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B509ff0:{NFSU2_TR(0x509ff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B509ff4:{NFSU2_TR(0x509ff4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B509ff7:{NFSU2_TR(0x509ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B509ffa:{NFSU2_TR(0x509ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B509ffd:{NFSU2_TR(0x509ffd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B509fff:{NFSU2_TR(0x509fff);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
TAIL_STATIC(0x50a002u,50a);
}
XIT:NFSU2_TR_EXIT(0x509,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
