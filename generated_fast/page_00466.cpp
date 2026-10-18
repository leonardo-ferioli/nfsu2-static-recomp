#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_467(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x466,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x466,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_466(u8* __restrict R,Cpu& c);
u32 page_466(Cpu& c){return body_466(c.regs.data(),c);}
__attribute__((noinline)) u32 body_466(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x466000:goto L466000;
case 0x466005:c.instructions+=9;goto B466005;
case 0x466006:c.instructions+=8;goto B466006;
case 0x466007:c.instructions+=7;goto B466007;
case 0x466008:c.instructions+=6;goto B466008;
case 0x46600a:c.instructions+=5;goto B46600a;
case 0x46600d:c.instructions+=4;goto B46600d;
case 0x46600f:c.instructions+=3;goto B46600f;
case 0x466013:c.instructions+=2;goto B466013;
case 0x466014:c.instructions+=1;goto B466014;
case 0x46601a:goto L46601a;
case 0x466021:c.instructions+=1;goto B466021;
case 0x466023:goto L466023;
case 0x46602a:c.instructions+=1;goto B46602a;
case 0x466030:goto L466030;
case 0x466032:c.instructions+=35;goto B466032;
case 0x466035:c.instructions+=34;goto B466035;
case 0x46603f:c.instructions+=33;goto B46603f;
case 0x466041:c.instructions+=32;goto B466041;
case 0x466044:c.instructions+=31;goto B466044;
case 0x46604e:c.instructions+=30;goto B46604e;
case 0x466050:c.instructions+=29;goto B466050;
case 0x466056:c.instructions+=28;goto B466056;
case 0x466059:c.instructions+=27;goto B466059;
case 0x46605f:c.instructions+=26;goto B46605f;
case 0x466061:c.instructions+=25;goto B466061;
case 0x466067:c.instructions+=24;goto B466067;
case 0x46606a:c.instructions+=23;goto B46606a;
case 0x466070:c.instructions+=22;goto B466070;
case 0x466072:c.instructions+=21;goto B466072;
case 0x466075:c.instructions+=20;goto B466075;
case 0x46607b:c.instructions+=19;goto B46607b;
case 0x46607d:c.instructions+=18;goto B46607d;
case 0x466080:c.instructions+=17;goto B466080;
case 0x466086:c.instructions+=16;goto B466086;
case 0x466088:c.instructions+=15;goto B466088;
case 0x46608b:c.instructions+=14;goto B46608b;
case 0x466091:c.instructions+=13;goto B466091;
case 0x466093:c.instructions+=12;goto B466093;
case 0x466096:c.instructions+=11;goto B466096;
case 0x46609c:c.instructions+=10;goto B46609c;
case 0x46609e:c.instructions+=9;goto B46609e;
case 0x4660a1:c.instructions+=8;goto B4660a1;
case 0x4660a7:c.instructions+=7;goto B4660a7;
case 0x4660a9:c.instructions+=6;goto B4660a9;
case 0x4660ac:c.instructions+=5;goto B4660ac;
case 0x4660b2:c.instructions+=4;goto B4660b2;
case 0x4660b4:c.instructions+=3;goto B4660b4;
case 0x4660b7:c.instructions+=2;goto B4660b7;
case 0x4660bd:c.instructions+=1;goto B4660bd;
case 0x4660bf:goto L4660bf;
case 0x4660c1:c.instructions+=233;goto B4660c1;
case 0x4660c4:c.instructions+=232;goto B4660c4;
case 0x4660ca:c.instructions+=231;goto B4660ca;
case 0x4660cc:c.instructions+=230;goto B4660cc;
case 0x4660cf:c.instructions+=229;goto B4660cf;
case 0x4660d5:c.instructions+=228;goto B4660d5;
case 0x4660da:c.instructions+=227;goto B4660da;
case 0x4660e0:c.instructions+=226;goto B4660e0;
case 0x4660e2:c.instructions+=225;goto B4660e2;
case 0x4660e5:c.instructions+=224;goto B4660e5;
case 0x4660eb:c.instructions+=223;goto B4660eb;
case 0x4660ed:c.instructions+=222;goto B4660ed;
case 0x4660f0:c.instructions+=221;goto B4660f0;
case 0x4660f6:c.instructions+=220;goto B4660f6;
case 0x4660fc:c.instructions+=219;goto B4660fc;
case 0x4660fe:c.instructions+=218;goto B4660fe;
case 0x466101:c.instructions+=217;goto B466101;
case 0x466107:c.instructions+=216;goto B466107;
case 0x466109:c.instructions+=215;goto B466109;
case 0x46610c:c.instructions+=214;goto B46610c;
case 0x466112:c.instructions+=213;goto B466112;
case 0x466114:c.instructions+=212;goto B466114;
case 0x466117:c.instructions+=211;goto B466117;
case 0x46611d:c.instructions+=210;goto B46611d;
case 0x46611f:c.instructions+=209;goto B46611f;
case 0x466122:c.instructions+=208;goto B466122;
case 0x466128:c.instructions+=207;goto B466128;
case 0x46612a:c.instructions+=206;goto B46612a;
case 0x46612d:c.instructions+=205;goto B46612d;
case 0x466133:c.instructions+=204;goto B466133;
case 0x466135:c.instructions+=203;goto B466135;
case 0x466138:c.instructions+=202;goto B466138;
case 0x46613e:c.instructions+=201;goto B46613e;
case 0x466140:c.instructions+=200;goto B466140;
case 0x466143:c.instructions+=199;goto B466143;
case 0x466149:c.instructions+=198;goto B466149;
case 0x46614b:c.instructions+=197;goto B46614b;
case 0x46614c:c.instructions+=196;goto B46614c;
case 0x46614e:c.instructions+=195;goto B46614e;
case 0x466150:c.instructions+=194;goto B466150;
case 0x466153:c.instructions+=193;goto B466153;
case 0x466159:c.instructions+=192;goto B466159;
case 0x46615e:c.instructions+=191;goto B46615e;
case 0x466164:c.instructions+=190;goto B466164;
case 0x466166:c.instructions+=189;goto B466166;
case 0x466169:c.instructions+=188;goto B466169;
case 0x46616f:c.instructions+=187;goto B46616f;
case 0x466171:c.instructions+=186;goto B466171;
case 0x466174:c.instructions+=185;goto B466174;
case 0x46617a:c.instructions+=184;goto B46617a;
case 0x46617c:c.instructions+=183;goto B46617c;
case 0x466182:c.instructions+=182;goto B466182;
case 0x466185:c.instructions+=181;goto B466185;
case 0x46618b:c.instructions+=180;goto B46618b;
case 0x46618d:c.instructions+=179;goto B46618d;
case 0x466190:c.instructions+=178;goto B466190;
case 0x466196:c.instructions+=177;goto B466196;
case 0x466198:c.instructions+=176;goto B466198;
case 0x46619b:c.instructions+=175;goto B46619b;
case 0x4661a1:c.instructions+=174;goto B4661a1;
case 0x4661a3:c.instructions+=173;goto B4661a3;
case 0x4661a6:c.instructions+=172;goto B4661a6;
case 0x4661ac:c.instructions+=171;goto B4661ac;
case 0x4661ae:c.instructions+=170;goto B4661ae;
case 0x4661b1:c.instructions+=169;goto B4661b1;
case 0x4661b7:c.instructions+=168;goto B4661b7;
case 0x4661b9:c.instructions+=167;goto B4661b9;
case 0x4661bc:c.instructions+=166;goto B4661bc;
case 0x4661c2:c.instructions+=165;goto B4661c2;
case 0x4661c4:c.instructions+=164;goto B4661c4;
case 0x4661c7:c.instructions+=163;goto B4661c7;
case 0x4661cd:c.instructions+=162;goto B4661cd;
case 0x4661cf:c.instructions+=161;goto B4661cf;
case 0x4661d2:c.instructions+=160;goto B4661d2;
case 0x4661d8:c.instructions+=159;goto B4661d8;
case 0x4661da:c.instructions+=158;goto B4661da;
case 0x4661db:c.instructions+=157;goto B4661db;
case 0x4661dd:c.instructions+=156;goto B4661dd;
case 0x4661e0:c.instructions+=155;goto B4661e0;
case 0x4661e6:c.instructions+=154;goto B4661e6;
case 0x4661e8:c.instructions+=153;goto B4661e8;
case 0x4661eb:c.instructions+=152;goto B4661eb;
case 0x4661f1:c.instructions+=151;goto B4661f1;
case 0x4661f3:c.instructions+=150;goto B4661f3;
case 0x4661f6:c.instructions+=149;goto B4661f6;
case 0x4661fc:c.instructions+=148;goto B4661fc;
case 0x466202:c.instructions+=147;goto B466202;
case 0x466204:c.instructions+=146;goto B466204;
case 0x466207:c.instructions+=145;goto B466207;
case 0x46620d:c.instructions+=144;goto B46620d;
case 0x466213:c.instructions+=143;goto B466213;
case 0x466215:c.instructions+=142;goto B466215;
case 0x466218:c.instructions+=141;goto B466218;
case 0x46621e:c.instructions+=140;goto B46621e;
case 0x466220:c.instructions+=139;goto B466220;
case 0x466223:c.instructions+=138;goto B466223;
case 0x466229:c.instructions+=137;goto B466229;
case 0x46622b:c.instructions+=136;goto B46622b;
case 0x46622e:c.instructions+=135;goto B46622e;
case 0x466234:c.instructions+=134;goto B466234;
case 0x466236:c.instructions+=133;goto B466236;
case 0x466239:c.instructions+=132;goto B466239;
case 0x46623f:c.instructions+=131;goto B46623f;
case 0x466241:c.instructions+=130;goto B466241;
case 0x466244:c.instructions+=129;goto B466244;
case 0x46624a:c.instructions+=128;goto B46624a;
case 0x46624c:c.instructions+=127;goto B46624c;
case 0x46624f:c.instructions+=126;goto B46624f;
case 0x466255:c.instructions+=125;goto B466255;
case 0x466257:c.instructions+=124;goto B466257;
case 0x46625a:c.instructions+=123;goto B46625a;
case 0x466260:c.instructions+=122;goto B466260;
case 0x466262:c.instructions+=121;goto B466262;
case 0x466263:c.instructions+=120;goto B466263;
case 0x466265:c.instructions+=119;goto B466265;
case 0x466267:c.instructions+=118;goto B466267;
case 0x46626a:c.instructions+=117;goto B46626a;
case 0x466274:c.instructions+=116;goto B466274;
case 0x466276:c.instructions+=115;goto B466276;
case 0x466279:c.instructions+=114;goto B466279;
case 0x46627f:c.instructions+=113;goto B46627f;
case 0x466281:c.instructions+=112;goto B466281;
case 0x466287:c.instructions+=111;goto B466287;
case 0x46628a:c.instructions+=110;goto B46628a;
case 0x466290:c.instructions+=109;goto B466290;
case 0x466292:c.instructions+=108;goto B466292;
case 0x466298:c.instructions+=107;goto B466298;
case 0x46629b:c.instructions+=106;goto B46629b;
case 0x4662a1:c.instructions+=105;goto B4662a1;
case 0x4662a3:c.instructions+=104;goto B4662a3;
case 0x4662a6:c.instructions+=103;goto B4662a6;
case 0x4662ac:c.instructions+=102;goto B4662ac;
case 0x4662ae:c.instructions+=101;goto B4662ae;
case 0x4662b1:c.instructions+=100;goto B4662b1;
case 0x4662b7:c.instructions+=99;goto B4662b7;
case 0x4662b9:c.instructions+=98;goto B4662b9;
case 0x4662bc:c.instructions+=97;goto B4662bc;
case 0x4662c2:c.instructions+=96;goto B4662c2;
case 0x4662c4:c.instructions+=95;goto B4662c4;
case 0x4662c7:c.instructions+=94;goto B4662c7;
case 0x4662cd:c.instructions+=93;goto B4662cd;
case 0x4662cf:c.instructions+=92;goto B4662cf;
case 0x4662d2:c.instructions+=91;goto B4662d2;
case 0x4662d8:c.instructions+=90;goto B4662d8;
case 0x4662da:c.instructions+=89;goto B4662da;
case 0x4662dd:c.instructions+=88;goto B4662dd;
case 0x4662e3:c.instructions+=87;goto B4662e3;
case 0x4662e5:c.instructions+=86;goto B4662e5;
case 0x4662e8:c.instructions+=85;goto B4662e8;
case 0x4662ee:c.instructions+=84;goto B4662ee;
case 0x4662f0:c.instructions+=83;goto B4662f0;
case 0x4662f1:c.instructions+=82;goto B4662f1;
case 0x4662f3:c.instructions+=81;goto B4662f3;
case 0x4662f6:c.instructions+=80;goto B4662f6;
case 0x4662f8:c.instructions+=79;goto B4662f8;
case 0x4662fd:c.instructions+=78;goto B4662fd;
case 0x466303:c.instructions+=77;goto B466303;
case 0x466305:c.instructions+=76;goto B466305;
case 0x466308:c.instructions+=75;goto B466308;
case 0x46630e:c.instructions+=74;goto B46630e;
case 0x466310:c.instructions+=73;goto B466310;
case 0x466313:c.instructions+=72;goto B466313;
case 0x466319:c.instructions+=71;goto B466319;
case 0x46631f:c.instructions+=70;goto B46631f;
case 0x466321:c.instructions+=69;goto B466321;
case 0x466324:c.instructions+=68;goto B466324;
case 0x46632a:c.instructions+=67;goto B46632a;
case 0x466330:c.instructions+=66;goto B466330;
case 0x466332:c.instructions+=65;goto B466332;
case 0x466335:c.instructions+=64;goto B466335;
case 0x46633b:c.instructions+=63;goto B46633b;
case 0x46633d:c.instructions+=62;goto B46633d;
case 0x466340:c.instructions+=61;goto B466340;
case 0x466346:c.instructions+=60;goto B466346;
case 0x466348:c.instructions+=59;goto B466348;
case 0x46634b:c.instructions+=58;goto B46634b;
case 0x466351:c.instructions+=57;goto B466351;
case 0x466353:c.instructions+=56;goto B466353;
case 0x466356:c.instructions+=55;goto B466356;
case 0x46635c:c.instructions+=54;goto B46635c;
case 0x46635e:c.instructions+=53;goto B46635e;
case 0x466361:c.instructions+=52;goto B466361;
case 0x466367:c.instructions+=51;goto B466367;
case 0x466369:c.instructions+=50;goto B466369;
case 0x46636c:c.instructions+=49;goto B46636c;
case 0x466372:c.instructions+=48;goto B466372;
case 0x466374:c.instructions+=47;goto B466374;
case 0x466377:c.instructions+=46;goto B466377;
case 0x46637d:c.instructions+=45;goto B46637d;
case 0x46637f:c.instructions+=44;goto B46637f;
case 0x466380:c.instructions+=43;goto B466380;
case 0x466382:c.instructions+=42;goto B466382;
case 0x466385:c.instructions+=41;goto B466385;
case 0x46638b:c.instructions+=40;goto B46638b;
case 0x46638d:c.instructions+=39;goto B46638d;
case 0x466390:c.instructions+=38;goto B466390;
case 0x466396:c.instructions+=37;goto B466396;
case 0x466398:c.instructions+=36;goto B466398;
case 0x46639e:c.instructions+=35;goto B46639e;
case 0x4663a1:c.instructions+=34;goto B4663a1;
case 0x4663a7:c.instructions+=33;goto B4663a7;
case 0x4663a9:c.instructions+=32;goto B4663a9;
case 0x4663af:c.instructions+=31;goto B4663af;
case 0x4663b2:c.instructions+=30;goto B4663b2;
case 0x4663b8:c.instructions+=29;goto B4663b8;
case 0x4663ba:c.instructions+=28;goto B4663ba;
case 0x4663bd:c.instructions+=27;goto B4663bd;
case 0x4663c3:c.instructions+=26;goto B4663c3;
case 0x4663c5:c.instructions+=25;goto B4663c5;
case 0x4663c8:c.instructions+=24;goto B4663c8;
case 0x4663ce:c.instructions+=23;goto B4663ce;
case 0x4663d0:c.instructions+=22;goto B4663d0;
case 0x4663d3:c.instructions+=21;goto B4663d3;
case 0x4663d9:c.instructions+=20;goto B4663d9;
case 0x4663db:c.instructions+=19;goto B4663db;
case 0x4663de:c.instructions+=18;goto B4663de;
case 0x4663e4:c.instructions+=17;goto B4663e4;
case 0x4663e6:c.instructions+=16;goto B4663e6;
case 0x4663e9:c.instructions+=15;goto B4663e9;
case 0x4663ef:c.instructions+=14;goto B4663ef;
case 0x4663f1:c.instructions+=13;goto B4663f1;
case 0x4663f4:c.instructions+=12;goto B4663f4;
case 0x4663fa:c.instructions+=11;goto B4663fa;
case 0x4663fc:c.instructions+=10;goto B4663fc;
case 0x4663ff:c.instructions+=9;goto B4663ff;
case 0x466405:c.instructions+=8;goto B466405;
case 0x466407:c.instructions+=7;goto B466407;
case 0x466408:c.instructions+=6;goto B466408;
case 0x466409:c.instructions+=5;goto B466409;
case 0x46640a:c.instructions+=4;goto B46640a;
case 0x46640b:c.instructions+=3;goto B46640b;
case 0x46640d:c.instructions+=2;goto B46640d;
case 0x46640e:c.instructions+=1;goto B46640e;
case 0x466420:goto L466420;
case 0x466424:c.instructions+=38;goto B466424;
case 0x466426:c.instructions+=37;goto B466426;
case 0x466429:c.instructions+=36;goto B466429;
case 0x466433:c.instructions+=35;goto B466433;
case 0x466435:c.instructions+=34;goto B466435;
case 0x466438:c.instructions+=33;goto B466438;
case 0x466442:c.instructions+=32;goto B466442;
case 0x466444:c.instructions+=31;goto B466444;
case 0x46644a:c.instructions+=30;goto B46644a;
case 0x46644d:c.instructions+=29;goto B46644d;
case 0x466453:c.instructions+=28;goto B466453;
case 0x466455:c.instructions+=27;goto B466455;
case 0x46645b:c.instructions+=26;goto B46645b;
case 0x46645e:c.instructions+=25;goto B46645e;
case 0x466464:c.instructions+=24;goto B466464;
case 0x466466:c.instructions+=23;goto B466466;
case 0x466469:c.instructions+=22;goto B466469;
case 0x46646b:c.instructions+=21;goto B46646b;
case 0x466471:c.instructions+=20;goto B466471;
case 0x466473:c.instructions+=19;goto B466473;
case 0x466476:c.instructions+=18;goto B466476;
case 0x46647c:c.instructions+=17;goto B46647c;
case 0x46647e:c.instructions+=16;goto B46647e;
case 0x466481:c.instructions+=15;goto B466481;
case 0x466487:c.instructions+=14;goto B466487;
case 0x466489:c.instructions+=13;goto B466489;
case 0x46648c:c.instructions+=12;goto B46648c;
case 0x466492:c.instructions+=11;goto B466492;
case 0x466494:c.instructions+=10;goto B466494;
case 0x466497:c.instructions+=9;goto B466497;
case 0x46649d:c.instructions+=8;goto B46649d;
case 0x46649f:c.instructions+=7;goto B46649f;
case 0x4664a2:c.instructions+=6;goto B4664a2;
case 0x4664a8:c.instructions+=5;goto B4664a8;
case 0x4664aa:c.instructions+=4;goto B4664aa;
case 0x4664ad:c.instructions+=3;goto B4664ad;
case 0x4664b7:c.instructions+=2;goto B4664b7;
case 0x4664b9:c.instructions+=1;goto B4664b9;
case 0x4664c0:goto L4664c0;
case 0x4664c4:c.instructions+=38;goto B4664c4;
case 0x4664c6:c.instructions+=37;goto B4664c6;
case 0x4664c9:c.instructions+=36;goto B4664c9;
case 0x4664d3:c.instructions+=35;goto B4664d3;
case 0x4664d5:c.instructions+=34;goto B4664d5;
case 0x4664d8:c.instructions+=33;goto B4664d8;
case 0x4664e2:c.instructions+=32;goto B4664e2;
case 0x4664e4:c.instructions+=31;goto B4664e4;
case 0x4664ea:c.instructions+=30;goto B4664ea;
case 0x4664ed:c.instructions+=29;goto B4664ed;
case 0x4664f3:c.instructions+=28;goto B4664f3;
case 0x4664f5:c.instructions+=27;goto B4664f5;
case 0x4664fb:c.instructions+=26;goto B4664fb;
case 0x4664fe:c.instructions+=25;goto B4664fe;
case 0x466504:c.instructions+=24;goto B466504;
case 0x466506:c.instructions+=23;goto B466506;
case 0x466509:c.instructions+=22;goto B466509;
case 0x46650b:c.instructions+=21;goto B46650b;
case 0x466511:c.instructions+=20;goto B466511;
case 0x466513:c.instructions+=19;goto B466513;
case 0x466516:c.instructions+=18;goto B466516;
case 0x46651c:c.instructions+=17;goto B46651c;
case 0x46651e:c.instructions+=16;goto B46651e;
case 0x466521:c.instructions+=15;goto B466521;
case 0x466527:c.instructions+=14;goto B466527;
case 0x466529:c.instructions+=13;goto B466529;
case 0x46652c:c.instructions+=12;goto B46652c;
case 0x466532:c.instructions+=11;goto B466532;
case 0x466534:c.instructions+=10;goto B466534;
case 0x466537:c.instructions+=9;goto B466537;
case 0x46653d:c.instructions+=8;goto B46653d;
case 0x46653f:c.instructions+=7;goto B46653f;
case 0x466542:c.instructions+=6;goto B466542;
case 0x466548:c.instructions+=5;goto B466548;
case 0x46654a:c.instructions+=4;goto B46654a;
case 0x46654d:c.instructions+=3;goto B46654d;
case 0x466557:c.instructions+=2;goto B466557;
case 0x466559:c.instructions+=1;goto B466559;
case 0x466560:goto L466560;
case 0x466563:c.instructions+=11;goto B466563;
case 0x466567:c.instructions+=10;goto B466567;
case 0x46656b:c.instructions+=9;goto B46656b;
case 0x46656f:c.instructions+=8;goto B46656f;
case 0x466573:c.instructions+=7;goto B466573;
case 0x466577:c.instructions+=6;goto B466577;
case 0x46657b:c.instructions+=5;goto B46657b;
case 0x46657e:c.instructions+=4;goto B46657e;
case 0x466580:c.instructions+=3;goto B466580;
case 0x466582:c.instructions+=2;goto B466582;
case 0x466585:c.instructions+=1;goto B466585;
case 0x466590:goto L466590;
case 0x466594:c.instructions+=39;goto B466594;
case 0x466597:c.instructions+=38;goto B466597;
case 0x46659d:c.instructions+=37;goto B46659d;
case 0x4665a0:c.instructions+=36;goto B4665a0;
case 0x4665a2:c.instructions+=35;goto B4665a2;
case 0x4665a4:c.instructions+=34;goto B4665a4;
case 0x4665a6:c.instructions+=33;goto B4665a6;
case 0x4665a7:c.instructions+=32;goto B4665a7;
case 0x4665a8:c.instructions+=31;goto B4665a8;
case 0x4665ac:c.instructions+=30;goto B4665ac;
case 0x4665af:c.instructions+=29;goto B4665af;
case 0x4665b4:c.instructions+=28;goto B4665b4;
case 0x4665b6:c.instructions+=27;goto B4665b6;
case 0x4665ba:c.instructions+=26;goto B4665ba;
case 0x4665bc:c.instructions+=25;goto B4665bc;
case 0x4665bf:c.instructions+=24;goto B4665bf;
case 0x4665c3:c.instructions+=23;goto B4665c3;
case 0x4665c4:c.instructions+=22;goto B4665c4;
case 0x4665c7:c.instructions+=21;goto B4665c7;
case 0x4665ca:c.instructions+=20;goto B4665ca;
case 0x4665ce:c.instructions+=19;goto B4665ce;
case 0x4665d1:c.instructions+=18;goto B4665d1;
case 0x4665d7:c.instructions+=17;goto B4665d7;
case 0x4665d9:c.instructions+=16;goto B4665d9;
case 0x4665dd:c.instructions+=15;goto B4665dd;
case 0x4665e1:c.instructions+=14;goto B4665e1;
case 0x4665e4:c.instructions+=13;goto B4665e4;
case 0x4665e9:c.instructions+=12;goto B4665e9;
case 0x4665ec:c.instructions+=11;goto B4665ec;
case 0x4665ee:c.instructions+=10;goto B4665ee;
case 0x4665f1:c.instructions+=9;goto B4665f1;
case 0x4665f4:c.instructions+=8;goto B4665f4;
case 0x4665fb:c.instructions+=7;goto B4665fb;
case 0x466602:c.instructions+=6;goto B466602;
case 0x466604:c.instructions+=5;goto B466604;
case 0x466607:c.instructions+=4;goto B466607;
case 0x46660a:c.instructions+=3;goto B46660a;
case 0x46660d:c.instructions+=2;goto B46660d;
case 0x46660e:c.instructions+=1;goto B46660e;
case 0x466610:goto L466610;
case 0x466612:c.instructions+=100;goto B466612;
case 0x466616:c.instructions+=99;goto B466616;
case 0x466619:c.instructions+=98;goto B466619;
case 0x46661b:c.instructions+=97;goto B46661b;
case 0x46661e:c.instructions+=96;goto B46661e;
case 0x466620:c.instructions+=95;goto B466620;
case 0x466623:c.instructions+=94;goto B466623;
case 0x46662a:c.instructions+=93;goto B46662a;
case 0x46662d:c.instructions+=92;goto B46662d;
case 0x46662f:c.instructions+=91;goto B46662f;
case 0x466632:c.instructions+=90;goto B466632;
case 0x466634:c.instructions+=89;goto B466634;
case 0x466636:c.instructions+=88;goto B466636;
case 0x466638:c.instructions+=87;goto B466638;
case 0x46663b:c.instructions+=86;goto B46663b;
case 0x466642:c.instructions+=85;goto B466642;
case 0x466644:c.instructions+=84;goto B466644;
case 0x466646:c.instructions+=83;goto B466646;
case 0x466648:c.instructions+=82;goto B466648;
case 0x46664b:c.instructions+=81;goto B46664b;
case 0x46664e:c.instructions+=80;goto B46664e;
case 0x466650:c.instructions+=79;goto B466650;
case 0x466652:c.instructions+=78;goto B466652;
case 0x466655:c.instructions+=77;goto B466655;
case 0x466658:c.instructions+=76;goto B466658;
case 0x46665a:c.instructions+=75;goto B46665a;
case 0x46665d:c.instructions+=74;goto B46665d;
case 0x466664:c.instructions+=73;goto B466664;
case 0x466667:c.instructions+=72;goto B466667;
case 0x466669:c.instructions+=71;goto B466669;
case 0x46666b:c.instructions+=70;goto B46666b;
case 0x46666d:c.instructions+=69;goto B46666d;
case 0x466670:c.instructions+=68;goto B466670;
case 0x466672:c.instructions+=67;goto B466672;
case 0x466675:c.instructions+=66;goto B466675;
case 0x46667c:c.instructions+=65;goto B46667c;
case 0x46667e:c.instructions+=64;goto B46667e;
case 0x466680:c.instructions+=63;goto B466680;
case 0x466682:c.instructions+=62;goto B466682;
case 0x466685:c.instructions+=61;goto B466685;
case 0x466689:c.instructions+=60;goto B466689;
case 0x46668b:c.instructions+=59;goto B46668b;
case 0x46668d:c.instructions+=58;goto B46668d;
case 0x466690:c.instructions+=57;goto B466690;
case 0x466693:c.instructions+=56;goto B466693;
case 0x466695:c.instructions+=55;goto B466695;
case 0x466698:c.instructions+=54;goto B466698;
case 0x46669f:c.instructions+=53;goto B46669f;
case 0x4666a2:c.instructions+=52;goto B4666a2;
case 0x4666a4:c.instructions+=51;goto B4666a4;
case 0x4666a7:c.instructions+=50;goto B4666a7;
case 0x4666a9:c.instructions+=49;goto B4666a9;
case 0x4666ac:c.instructions+=48;goto B4666ac;
case 0x4666ae:c.instructions+=47;goto B4666ae;
case 0x4666b5:c.instructions+=46;goto B4666b5;
case 0x4666b7:c.instructions+=45;goto B4666b7;
case 0x4666ba:c.instructions+=44;goto B4666ba;
case 0x4666bc:c.instructions+=43;goto B4666bc;
case 0x4666bf:c.instructions+=42;goto B4666bf;
case 0x4666c3:c.instructions+=41;goto B4666c3;
case 0x4666c5:c.instructions+=40;goto B4666c5;
case 0x4666c7:c.instructions+=39;goto B4666c7;
case 0x4666ca:c.instructions+=38;goto B4666ca;
case 0x4666cd:c.instructions+=37;goto B4666cd;
case 0x4666cf:c.instructions+=36;goto B4666cf;
case 0x4666d2:c.instructions+=35;goto B4666d2;
case 0x4666d9:c.instructions+=34;goto B4666d9;
case 0x4666dc:c.instructions+=33;goto B4666dc;
case 0x4666de:c.instructions+=32;goto B4666de;
case 0x4666e1:c.instructions+=31;goto B4666e1;
case 0x4666e3:c.instructions+=30;goto B4666e3;
case 0x4666e6:c.instructions+=29;goto B4666e6;
case 0x4666e8:c.instructions+=28;goto B4666e8;
case 0x4666ef:c.instructions+=27;goto B4666ef;
case 0x4666f1:c.instructions+=26;goto B4666f1;
case 0x4666f4:c.instructions+=25;goto B4666f4;
case 0x4666f6:c.instructions+=24;goto B4666f6;
case 0x4666f9:c.instructions+=23;goto B4666f9;
case 0x4666fd:c.instructions+=22;goto B4666fd;
case 0x4666ff:c.instructions+=21;goto B4666ff;
case 0x466702:c.instructions+=20;goto B466702;
case 0x466704:c.instructions+=19;goto B466704;
case 0x466707:c.instructions+=18;goto B466707;
case 0x46670a:c.instructions+=17;goto B46670a;
case 0x46670c:c.instructions+=16;goto B46670c;
case 0x46670f:c.instructions+=15;goto B46670f;
case 0x466712:c.instructions+=14;goto B466712;
case 0x466713:c.instructions+=13;goto B466713;
case 0x46671a:c.instructions+=12;goto B46671a;
case 0x46671c:c.instructions+=11;goto B46671c;
case 0x46671f:c.instructions+=10;goto B46671f;
case 0x466722:c.instructions+=9;goto B466722;
case 0x466724:c.instructions+=8;goto B466724;
case 0x466727:c.instructions+=7;goto B466727;
case 0x466729:c.instructions+=6;goto B466729;
case 0x466730:c.instructions+=5;goto B466730;
case 0x466732:c.instructions+=4;goto B466732;
case 0x466735:c.instructions+=3;goto B466735;
case 0x466737:c.instructions+=2;goto B466737;
case 0x46673a:c.instructions+=1;goto B46673a;
case 0x466740:goto L466740;
case 0x466741:c.instructions+=5;goto B466741;
case 0x466743:c.instructions+=4;goto B466743;
case 0x466744:c.instructions+=3;goto B466744;
case 0x466746:c.instructions+=2;goto B466746;
case 0x466747:c.instructions+=1;goto B466747;
case 0x466750:goto L466750;
case 0x466752:c.instructions+=9;goto B466752;
case 0x466754:c.instructions+=8;goto B466754;
case 0x46675a:c.instructions+=7;goto B46675a;
case 0x46675d:c.instructions+=6;goto B46675d;
case 0x466760:c.instructions+=5;goto B466760;
case 0x466763:c.instructions+=4;goto B466763;
case 0x466766:c.instructions+=3;goto B466766;
case 0x466769:c.instructions+=2;goto B466769;
case 0x46676c:c.instructions+=1;goto B46676c;
case 0x466770:goto L466770;
case 0x466774:c.instructions+=10;goto B466774;
case 0x466775:c.instructions+=9;goto B466775;
case 0x466777:c.instructions+=8;goto B466777;
case 0x46677a:c.instructions+=7;goto B46677a;
case 0x46677d:c.instructions+=6;goto B46677d;
case 0x466780:c.instructions+=5;goto B466780;
case 0x466783:c.instructions+=4;goto B466783;
case 0x466786:c.instructions+=3;goto B466786;
case 0x466789:c.instructions+=2;goto B466789;
case 0x46678c:c.instructions+=1;goto B46678c;
case 0x466792:goto L466792;
case 0x466796:c.instructions+=1;goto B466796;
case 0x46679c:goto L46679c;
case 0x4667a0:c.instructions+=1;goto B4667a0;
case 0x4667a6:goto L4667a6;
case 0x4667aa:c.instructions+=1;goto B4667aa;
case 0x4667b0:goto L4667b0;
case 0x4667b4:c.instructions+=1;goto B4667b4;
case 0x4667b6:goto L4667b6;
case 0x4667b9:c.instructions+=25;goto B4667b9;
case 0x4667bc:c.instructions+=24;goto B4667bc;
case 0x4667bf:c.instructions+=23;goto B4667bf;
case 0x4667c2:c.instructions+=22;goto B4667c2;
case 0x4667c5:c.instructions+=21;goto B4667c5;
case 0x4667c8:c.instructions+=20;goto B4667c8;
case 0x4667cb:c.instructions+=19;goto B4667cb;
case 0x4667ce:c.instructions+=18;goto B4667ce;
case 0x4667d1:c.instructions+=17;goto B4667d1;
case 0x4667d4:c.instructions+=16;goto B4667d4;
case 0x4667d7:c.instructions+=15;goto B4667d7;
case 0x4667da:c.instructions+=14;goto B4667da;
case 0x4667dd:c.instructions+=13;goto B4667dd;
case 0x4667e0:c.instructions+=12;goto B4667e0;
case 0x4667e3:c.instructions+=11;goto B4667e3;
case 0x4667e7:c.instructions+=10;goto B4667e7;
case 0x4667ea:c.instructions+=9;goto B4667ea;
case 0x4667ec:c.instructions+=8;goto B4667ec;
case 0x4667ed:c.instructions+=7;goto B4667ed;
case 0x4667f1:c.instructions+=6;goto B4667f1;
case 0x4667f4:c.instructions+=5;goto B4667f4;
case 0x4667f7:c.instructions+=4;goto B4667f7;
case 0x4667fa:c.instructions+=3;goto B4667fa;
case 0x466804:c.instructions+=2;goto B466804;
case 0x466808:c.instructions+=1;goto B466808;
case 0x46680a:goto L46680a;
case 0x46680d:c.instructions+=2;goto B46680d;
case 0x46680f:c.instructions+=1;goto B46680f;
case 0x466810:goto L466810;
case 0x466813:c.instructions+=3;goto B466813;
case 0x466815:c.instructions+=2;goto B466815;
case 0x466817:c.instructions+=1;goto B466817;
case 0x466819:goto L466819;
case 0x46681b:goto L46681b;
case 0x46681e:c.instructions+=2;goto B46681e;
case 0x46681f:c.instructions+=1;goto B46681f;
case 0x466821:goto L466821;
case 0x466825:goto L466825;
case 0x466829:c.instructions+=5;goto B466829;
case 0x46682a:c.instructions+=4;goto B46682a;
case 0x46682c:c.instructions+=3;goto B46682c;
case 0x46682d:c.instructions+=2;goto B46682d;
case 0x466830:c.instructions+=1;goto B466830;
case 0x466833:goto L466833;
case 0x466835:c.instructions+=2;goto B466835;
case 0x466836:c.instructions+=1;goto B466836;
case 0x466840:goto L466840;
case 0x466843:c.instructions+=5;goto B466843;
case 0x466847:c.instructions+=4;goto B466847;
case 0x46684a:c.instructions+=3;goto B46684a;
case 0x46684d:c.instructions+=2;goto B46684d;
case 0x466851:c.instructions+=1;goto B466851;
case 0x466853:goto L466853;
case 0x466855:c.instructions+=2;goto B466855;
case 0x466858:c.instructions+=1;goto B466858;
case 0x46685b:goto L46685b;
case 0x46685f:c.instructions+=4;goto B46685f;
case 0x466862:c.instructions+=3;goto B466862;
case 0x466864:c.instructions+=2;goto B466864;
case 0x466867:c.instructions+=1;goto B466867;
case 0x466869:goto L466869;
case 0x46686c:c.instructions+=3;goto B46686c;
case 0x46686e:c.instructions+=2;goto B46686e;
case 0x466871:c.instructions+=1;goto B466871;
case 0x466874:goto L466874;
case 0x466878:c.instructions+=4;goto B466878;
case 0x46687b:c.instructions+=3;goto B46687b;
case 0x46687d:c.instructions+=2;goto B46687d;
case 0x466880:c.instructions+=1;goto B466880;
case 0x466882:goto L466882;
case 0x466885:c.instructions+=3;goto B466885;
case 0x466888:c.instructions+=2;goto B466888;
case 0x46688b:c.instructions+=1;goto B46688b;
case 0x46688e:goto L46688e;
case 0x466892:c.instructions+=34;goto B466892;
case 0x466895:c.instructions+=33;goto B466895;
case 0x466899:c.instructions+=32;goto B466899;
case 0x46689c:c.instructions+=31;goto B46689c;
case 0x46689f:c.instructions+=30;goto B46689f;
case 0x4668a1:c.instructions+=29;goto B4668a1;
case 0x4668a5:c.instructions+=28;goto B4668a5;
case 0x4668a9:c.instructions+=27;goto B4668a9;
case 0x4668ad:c.instructions+=26;goto B4668ad;
case 0x4668b1:c.instructions+=25;goto B4668b1;
case 0x4668b5:c.instructions+=24;goto B4668b5;
case 0x4668b9:c.instructions+=23;goto B4668b9;
case 0x4668bd:c.instructions+=22;goto B4668bd;
case 0x4668c1:c.instructions+=21;goto B4668c1;
case 0x4668c4:c.instructions+=20;goto B4668c4;
case 0x4668c6:c.instructions+=19;goto B4668c6;
case 0x4668c9:c.instructions+=18;goto B4668c9;
case 0x4668cd:c.instructions+=17;goto B4668cd;
case 0x4668d1:c.instructions+=16;goto B4668d1;
case 0x4668d4:c.instructions+=15;goto B4668d4;
case 0x4668d6:c.instructions+=14;goto B4668d6;
case 0x4668d8:c.instructions+=13;goto B4668d8;
case 0x4668dc:c.instructions+=12;goto B4668dc;
case 0x4668e0:c.instructions+=11;goto B4668e0;
case 0x4668e4:c.instructions+=10;goto B4668e4;
case 0x4668e8:c.instructions+=9;goto B4668e8;
case 0x4668ec:c.instructions+=8;goto B4668ec;
case 0x4668ee:c.instructions+=7;goto B4668ee;
case 0x4668f2:c.instructions+=6;goto B4668f2;
case 0x4668f6:c.instructions+=5;goto B4668f6;
case 0x4668fa:c.instructions+=4;goto B4668fa;
case 0x4668fe:c.instructions+=3;goto B4668fe;
case 0x466902:c.instructions+=2;goto B466902;
case 0x466905:c.instructions+=1;goto B466905;
case 0x466910:goto L466910;
case 0x466913:c.instructions+=5;goto B466913;
case 0x466917:c.instructions+=4;goto B466917;
case 0x46691a:c.instructions+=3;goto B46691a;
case 0x46691d:c.instructions+=2;goto B46691d;
case 0x466921:c.instructions+=1;goto B466921;
case 0x466923:goto L466923;
case 0x466925:c.instructions+=2;goto B466925;
case 0x466928:c.instructions+=1;goto B466928;
case 0x46692b:goto L46692b;
case 0x46692f:c.instructions+=4;goto B46692f;
case 0x466935:c.instructions+=3;goto B466935;
case 0x466937:c.instructions+=2;goto B466937;
case 0x46693a:c.instructions+=1;goto B46693a;
case 0x46693c:goto L46693c;
case 0x46693f:c.instructions+=3;goto B46693f;
case 0x466941:c.instructions+=2;goto B466941;
case 0x466944:c.instructions+=1;goto B466944;
case 0x466947:goto L466947;
case 0x46694b:c.instructions+=4;goto B46694b;
case 0x46694f:c.instructions+=3;goto B46694f;
case 0x466951:c.instructions+=2;goto B466951;
case 0x466954:c.instructions+=1;goto B466954;
case 0x466956:goto L466956;
case 0x466959:c.instructions+=3;goto B466959;
case 0x46695c:c.instructions+=2;goto B46695c;
case 0x46695f:c.instructions+=1;goto B46695f;
case 0x466962:goto L466962;
case 0x466966:c.instructions+=27;goto B466966;
case 0x46696a:c.instructions+=26;goto B46696a;
case 0x46696e:c.instructions+=25;goto B46696e;
case 0x466972:c.instructions+=24;goto B466972;
case 0x466976:c.instructions+=23;goto B466976;
case 0x46697a:c.instructions+=22;goto B46697a;
case 0x46697e:c.instructions+=21;goto B46697e;
case 0x466981:c.instructions+=20;goto B466981;
case 0x466983:c.instructions+=19;goto B466983;
case 0x466986:c.instructions+=18;goto B466986;
case 0x46698a:c.instructions+=17;goto B46698a;
case 0x46698e:c.instructions+=16;goto B46698e;
case 0x466991:c.instructions+=15;goto B466991;
case 0x466993:c.instructions+=14;goto B466993;
case 0x466995:c.instructions+=13;goto B466995;
case 0x466999:c.instructions+=12;goto B466999;
case 0x46699d:c.instructions+=11;goto B46699d;
case 0x4669a1:c.instructions+=10;goto B4669a1;
case 0x4669a5:c.instructions+=9;goto B4669a5;
case 0x4669a9:c.instructions+=8;goto B4669a9;
case 0x4669ab:c.instructions+=7;goto B4669ab;
case 0x4669af:c.instructions+=6;goto B4669af;
case 0x4669b3:c.instructions+=5;goto B4669b3;
case 0x4669b7:c.instructions+=4;goto B4669b7;
case 0x4669bb:c.instructions+=3;goto B4669bb;
case 0x4669bf:c.instructions+=2;goto B4669bf;
case 0x4669c2:c.instructions+=1;goto B4669c2;
case 0x4669d0:goto L4669d0;
case 0x4669d3:c.instructions+=3;goto B4669d3;
case 0x4669d7:c.instructions+=2;goto B4669d7;
case 0x4669db:c.instructions+=1;goto B4669db;
case 0x4669dd:goto L4669dd;
case 0x4669e3:c.instructions+=2;goto B4669e3;
case 0x4669e6:c.instructions+=1;goto B4669e6;
case 0x4669e9:goto L4669e9;
case 0x4669ed:c.instructions+=10;goto B4669ed;
case 0x4669f1:c.instructions+=9;goto B4669f1;
case 0x4669f5:c.instructions+=8;goto B4669f5;
case 0x4669f9:c.instructions+=7;goto B4669f9;
case 0x4669fd:c.instructions+=6;goto B4669fd;
case 0x466a01:c.instructions+=5;goto B466a01;
case 0x466a04:c.instructions+=4;goto B466a04;
case 0x466a06:c.instructions+=3;goto B466a06;
case 0x466a09:c.instructions+=2;goto B466a09;
case 0x466a0d:c.instructions+=1;goto B466a0d;
case 0x466a0f:goto L466a0f;
case 0x466a11:c.instructions+=1;goto B466a11;
case 0x466a13:goto L466a13;
case 0x466a1b:c.instructions+=1;goto B466a1b;
case 0x466a23:goto L466a23;
case 0x466a27:c.instructions+=12;goto B466a27;
case 0x466a2a:c.instructions+=11;goto B466a2a;
case 0x466a2c:c.instructions+=10;goto B466a2c;
case 0x466a2f:c.instructions+=9;goto B466a2f;
case 0x466a32:c.instructions+=8;goto B466a32;
case 0x466a34:c.instructions+=7;goto B466a34;
case 0x466a38:c.instructions+=6;goto B466a38;
case 0x466a3c:c.instructions+=5;goto B466a3c;
case 0x466a3e:c.instructions+=4;goto B466a3e;
case 0x466a42:c.instructions+=3;goto B466a42;
case 0x466a46:c.instructions+=2;goto B466a46;
case 0x466a4c:c.instructions+=1;goto B466a4c;
case 0x466a51:goto L466a51;
case 0x466a55:c.instructions+=7;goto B466a55;
case 0x466a58:c.instructions+=6;goto B466a58;
case 0x466a59:c.instructions+=5;goto B466a59;
case 0x466a5c:c.instructions+=4;goto B466a5c;
case 0x466a5e:c.instructions+=3;goto B466a5e;
case 0x466a5f:c.instructions+=2;goto B466a5f;
case 0x466a63:c.instructions+=1;goto B466a63;
case 0x466a65:goto L466a65;
case 0x466a67:c.instructions+=1;goto B466a67;
case 0x466a69:goto L466a69;
case 0x466a6d:c.instructions+=4;goto B466a6d;
case 0x466a71:c.instructions+=3;goto B466a71;
case 0x466a74:c.instructions+=2;goto B466a74;
case 0x466a77:c.instructions+=1;goto B466a77;
case 0x466a7b:goto L466a7b;
case 0x466a7e:c.instructions+=11;goto B466a7e;
case 0x466a81:c.instructions+=10;goto B466a81;
case 0x466a85:c.instructions+=9;goto B466a85;
case 0x466a87:c.instructions+=8;goto B466a87;
case 0x466a89:c.instructions+=7;goto B466a89;
case 0x466a8d:c.instructions+=6;goto B466a8d;
case 0x466a91:c.instructions+=5;goto B466a91;
case 0x466a95:c.instructions+=4;goto B466a95;
case 0x466a9b:c.instructions+=3;goto B466a9b;
case 0x466a9f:c.instructions+=2;goto B466a9f;
case 0x466aa3:c.instructions+=1;goto B466aa3;
case 0x466aa5:goto L466aa5;
case 0x466aa8:c.instructions+=12;goto B466aa8;
case 0x466aac:c.instructions+=11;goto B466aac;
case 0x466ab0:c.instructions+=10;goto B466ab0;
case 0x466ab3:c.instructions+=9;goto B466ab3;
case 0x466ab5:c.instructions+=8;goto B466ab5;
case 0x466ab9:c.instructions+=7;goto B466ab9;
case 0x466abd:c.instructions+=6;goto B466abd;
case 0x466ac1:c.instructions+=5;goto B466ac1;
case 0x466ac3:c.instructions+=4;goto B466ac3;
case 0x466ac9:c.instructions+=3;goto B466ac9;
case 0x466acd:c.instructions+=2;goto B466acd;
case 0x466ad1:c.instructions+=1;goto B466ad1;
case 0x466ad7:goto L466ad7;
case 0x466ad8:c.instructions+=1;goto B466ad8;
case 0x466ad9:goto L466ad9;
case 0x466add:c.instructions+=7;goto B466add;
case 0x466ae1:c.instructions+=6;goto B466ae1;
case 0x466ae3:c.instructions+=5;goto B466ae3;
case 0x466ae5:c.instructions+=4;goto B466ae5;
case 0x466ae7:c.instructions+=3;goto B466ae7;
case 0x466ae9:c.instructions+=2;goto B466ae9;
case 0x466aec:c.instructions+=1;goto B466aec;
case 0x466af0:goto L466af0;
case 0x466af3:c.instructions+=6;goto B466af3;
case 0x466af4:c.instructions+=5;goto B466af4;
case 0x466af8:c.instructions+=4;goto B466af8;
case 0x466afb:c.instructions+=3;goto B466afb;
case 0x466afe:c.instructions+=2;goto B466afe;
case 0x466b02:c.instructions+=1;goto B466b02;
case 0x466b04:goto L466b04;
case 0x466b07:c.instructions+=3;goto B466b07;
case 0x466b0b:c.instructions+=2;goto B466b0b;
case 0x466b0d:c.instructions+=1;goto B466b0d;
case 0x466b0f:goto L466b0f;
case 0x466b15:c.instructions+=3;goto B466b15;
case 0x466b16:c.instructions+=2;goto B466b16;
case 0x466b19:c.instructions+=1;goto B466b19;
case 0x466b1c:goto L466b1c;
case 0x466b1f:c.instructions+=1;goto B466b1f;
case 0x466b21:goto L466b21;
case 0x466b25:c.instructions+=3;goto B466b25;
case 0x466b26:c.instructions+=2;goto B466b26;
case 0x466b29:c.instructions+=1;goto B466b29;
case 0x466b2c:goto L466b2c;
case 0x466b2d:c.instructions+=4;goto B466b2d;
case 0x466b2e:c.instructions+=3;goto B466b2e;
case 0x466b2f:c.instructions+=2;goto B466b2f;
case 0x466b31:c.instructions+=1;goto B466b31;
case 0x466b33:goto L466b33;
case 0x466b35:goto L466b35;
case 0x466b39:c.instructions+=1;goto B466b39;
case 0x466b40:goto L466b40;
case 0x466b44:c.instructions+=31;goto B466b44;
case 0x466b47:c.instructions+=30;goto B466b47;
case 0x466b4a:c.instructions+=29;goto B466b4a;
case 0x466b4c:c.instructions+=28;goto B466b4c;
case 0x466b50:c.instructions+=27;goto B466b50;
case 0x466b54:c.instructions+=26;goto B466b54;
case 0x466b57:c.instructions+=25;goto B466b57;
case 0x466b59:c.instructions+=24;goto B466b59;
case 0x466b5d:c.instructions+=23;goto B466b5d;
case 0x466b61:c.instructions+=22;goto B466b61;
case 0x466b63:c.instructions+=21;goto B466b63;
case 0x466b65:c.instructions+=20;goto B466b65;
case 0x466b69:c.instructions+=19;goto B466b69;
case 0x466b6d:c.instructions+=18;goto B466b6d;
case 0x466b71:c.instructions+=17;goto B466b71;
case 0x466b75:c.instructions+=16;goto B466b75;
case 0x466b79:c.instructions+=15;goto B466b79;
case 0x466b7d:c.instructions+=14;goto B466b7d;
case 0x466b81:c.instructions+=13;goto B466b81;
case 0x466b85:c.instructions+=12;goto B466b85;
case 0x466b89:c.instructions+=11;goto B466b89;
case 0x466b8d:c.instructions+=10;goto B466b8d;
case 0x466b90:c.instructions+=9;goto B466b90;
case 0x466b93:c.instructions+=8;goto B466b93;
case 0x466b95:c.instructions+=7;goto B466b95;
case 0x466b99:c.instructions+=6;goto B466b99;
case 0x466b9b:c.instructions+=5;goto B466b9b;
case 0x466b9e:c.instructions+=4;goto B466b9e;
case 0x466ba1:c.instructions+=3;goto B466ba1;
case 0x466ba3:c.instructions+=2;goto B466ba3;
case 0x466ba7:c.instructions+=1;goto B466ba7;
case 0x466ba9:goto L466ba9;
case 0x466bab:c.instructions+=15;goto B466bab;
case 0x466baf:c.instructions+=14;goto B466baf;
case 0x466bb3:c.instructions+=13;goto B466bb3;
case 0x466bb6:c.instructions+=12;goto B466bb6;
case 0x466bba:c.instructions+=11;goto B466bba;
case 0x466bbe:c.instructions+=10;goto B466bbe;
case 0x466bc2:c.instructions+=9;goto B466bc2;
case 0x466bc6:c.instructions+=8;goto B466bc6;
case 0x466bca:c.instructions+=7;goto B466bca;
case 0x466bce:c.instructions+=6;goto B466bce;
case 0x466bd2:c.instructions+=5;goto B466bd2;
case 0x466bd5:c.instructions+=4;goto B466bd5;
case 0x466bd7:c.instructions+=3;goto B466bd7;
case 0x466bd9:c.instructions+=2;goto B466bd9;
case 0x466bdb:c.instructions+=1;goto B466bdb;
case 0x466be1:goto L466be1;
case 0x466be3:c.instructions+=1;goto B466be3;
case 0x466be8:goto L466be8;
case 0x466beb:c.instructions+=1;goto B466beb;
case 0x466bed:goto L466bed;
case 0x466bef:c.instructions+=16;goto B466bef;
case 0x466bf3:c.instructions+=15;goto B466bf3;
case 0x466bf7:c.instructions+=14;goto B466bf7;
case 0x466bfa:c.instructions+=13;goto B466bfa;
case 0x466bfd:c.instructions+=12;goto B466bfd;
case 0x466c01:c.instructions+=11;goto B466c01;
case 0x466c05:c.instructions+=10;goto B466c05;
case 0x466c09:c.instructions+=9;goto B466c09;
case 0x466c0d:c.instructions+=8;goto B466c0d;
case 0x466c11:c.instructions+=7;goto B466c11;
case 0x466c15:c.instructions+=6;goto B466c15;
case 0x466c19:c.instructions+=5;goto B466c19;
case 0x466c1c:c.instructions+=4;goto B466c1c;
case 0x466c1e:c.instructions+=3;goto B466c1e;
case 0x466c22:c.instructions+=2;goto B466c22;
case 0x466c24:c.instructions+=1;goto B466c24;
case 0x466c2a:goto L466c2a;
case 0x466c2f:goto L466c2f;
case 0x466c32:c.instructions+=15;goto B466c32;
case 0x466c35:c.instructions+=14;goto B466c35;
case 0x466c38:c.instructions+=13;goto B466c38;
case 0x466c3c:c.instructions+=12;goto B466c3c;
case 0x466c3d:c.instructions+=11;goto B466c3d;
case 0x466c3e:c.instructions+=10;goto B466c3e;
case 0x466c3f:c.instructions+=9;goto B466c3f;
case 0x466c41:c.instructions+=8;goto B466c41;
case 0x466c42:c.instructions+=7;goto B466c42;
case 0x466c45:c.instructions+=6;goto B466c45;
case 0x466c47:c.instructions+=5;goto B466c47;
case 0x466c49:c.instructions+=4;goto B466c49;
case 0x466c4d:c.instructions+=3;goto B466c4d;
case 0x466c4f:c.instructions+=2;goto B466c4f;
case 0x466c52:c.instructions+=1;goto B466c52;
case 0x466c60:goto L466c60;
case 0x466c63:c.instructions+=5;goto B466c63;
case 0x466c67:c.instructions+=4;goto B466c67;
case 0x466c69:c.instructions+=3;goto B466c69;
case 0x466c6a:c.instructions+=2;goto B466c6a;
case 0x466c6e:c.instructions+=1;goto B466c6e;
case 0x466c74:goto L466c74;
case 0x466c78:c.instructions+=4;goto B466c78;
case 0x466c7b:c.instructions+=3;goto B466c7b;
case 0x466c7f:c.instructions+=2;goto B466c7f;
case 0x466c81:c.instructions+=1;goto B466c81;
case 0x466c87:goto L466c87;
case 0x466c8d:c.instructions+=4;goto B466c8d;
case 0x466c8f:c.instructions+=3;goto B466c8f;
case 0x466c92:c.instructions+=2;goto B466c92;
case 0x466c94:c.instructions+=1;goto B466c94;
case 0x466c96:goto L466c96;
case 0x466c97:c.instructions+=1;goto B466c97;
case 0x466c9c:goto L466c9c;
case 0x466ca0:c.instructions+=1;goto B466ca0;
case 0x466ca4:goto L466ca4;
case 0x466ca8:c.instructions+=4;goto B466ca8;
case 0x466cab:c.instructions+=3;goto B466cab;
case 0x466cad:c.instructions+=2;goto B466cad;
case 0x466caf:c.instructions+=1;goto B466caf;
case 0x466cb1:goto L466cb1;
case 0x466cb3:goto L466cb3;
case 0x466cb7:c.instructions+=1;goto B466cb7;
case 0x466cc0:goto L466cc0;
case 0x466cc4:c.instructions+=6;goto B466cc4;
case 0x466cc8:c.instructions+=5;goto B466cc8;
case 0x466ccc:c.instructions+=4;goto B466ccc;
case 0x466cd0:c.instructions+=3;goto B466cd0;
case 0x466cd4:c.instructions+=2;goto B466cd4;
case 0x466cd8:c.instructions+=1;goto B466cd8;
case 0x466cda:goto L466cda;
case 0x466cde:c.instructions+=2;goto B466cde;
case 0x466ce1:c.instructions+=1;goto B466ce1;
case 0x466ce6:goto L466ce6;
case 0x466cea:c.instructions+=4;goto B466cea;
case 0x466ceb:c.instructions+=3;goto B466ceb;
case 0x466cee:c.instructions+=2;goto B466cee;
case 0x466cf2:c.instructions+=1;goto B466cf2;
case 0x466cf4:goto L466cf4;
case 0x466cf8:c.instructions+=4;goto B466cf8;
case 0x466cfe:c.instructions+=3;goto B466cfe;
case 0x466cff:c.instructions+=2;goto B466cff;
case 0x466d00:c.instructions+=1;goto B466d00;
case 0x466d05:goto L466d05;
case 0x466d07:goto L466d07;
case 0x466d0b:c.instructions+=3;goto B466d0b;
case 0x466d0c:c.instructions+=2;goto B466d0c;
case 0x466d0e:c.instructions+=1;goto B466d0e;
case 0x466d10:goto L466d10;
case 0x466d12:c.instructions+=3;goto B466d12;
case 0x466d13:c.instructions+=2;goto B466d13;
case 0x466d16:c.instructions+=1;goto B466d16;
case 0x466d19:goto L466d19;
case 0x466d1b:c.instructions+=3;goto B466d1b;
case 0x466d1c:c.instructions+=2;goto B466d1c;
case 0x466d1f:c.instructions+=1;goto B466d1f;
case 0x466d30:goto L466d30;
case 0x466d36:c.instructions+=8;goto B466d36;
case 0x466d37:c.instructions+=7;goto B466d37;
case 0x466d38:c.instructions+=6;goto B466d38;
case 0x466d3c:c.instructions+=5;goto B466d3c;
case 0x466d3f:c.instructions+=4;goto B466d3f;
case 0x466d42:c.instructions+=3;goto B466d42;
case 0x466d43:c.instructions+=2;goto B466d43;
case 0x466d44:c.instructions+=1;goto B466d44;
case 0x466d49:goto L466d49;
case 0x466d4d:c.instructions+=14;goto B466d4d;
case 0x466d50:c.instructions+=13;goto B466d50;
case 0x466d54:c.instructions+=12;goto B466d54;
case 0x466d57:c.instructions+=11;goto B466d57;
case 0x466d5a:c.instructions+=10;goto B466d5a;
case 0x466d5e:c.instructions+=9;goto B466d5e;
case 0x466d62:c.instructions+=8;goto B466d62;
case 0x466d65:c.instructions+=7;goto B466d65;
case 0x466d68:c.instructions+=6;goto B466d68;
case 0x466d6a:c.instructions+=5;goto B466d6a;
case 0x466d6c:c.instructions+=4;goto B466d6c;
case 0x466d6f:c.instructions+=3;goto B466d6f;
case 0x466d73:c.instructions+=2;goto B466d73;
case 0x466d77:c.instructions+=1;goto B466d77;
case 0x466d7d:goto L466d7d;
case 0x466d80:c.instructions+=3;goto B466d80;
case 0x466d83:c.instructions+=2;goto B466d83;
case 0x466d84:c.instructions+=1;goto B466d84;
case 0x466d89:goto L466d89;
case 0x466d8d:c.instructions+=7;goto B466d8d;
case 0x466d91:c.instructions+=6;goto B466d91;
case 0x466d94:c.instructions+=5;goto B466d94;
case 0x466d98:c.instructions+=4;goto B466d98;
case 0x466d99:c.instructions+=3;goto B466d99;
case 0x466d9c:c.instructions+=2;goto B466d9c;
case 0x466da0:c.instructions+=1;goto B466da0;
case 0x466da5:goto L466da5;
case 0x466da9:c.instructions+=6;goto B466da9;
case 0x466dad:c.instructions+=5;goto B466dad;
case 0x466db0:c.instructions+=4;goto B466db0;
case 0x466db3:c.instructions+=3;goto B466db3;
case 0x466db4:c.instructions+=2;goto B466db4;
case 0x466db8:c.instructions+=1;goto B466db8;
case 0x466dbd:goto L466dbd;
case 0x466dc1:c.instructions+=33;goto B466dc1;
case 0x466dc5:c.instructions+=32;goto B466dc5;
case 0x466dc8:c.instructions+=31;goto B466dc8;
case 0x466dcc:c.instructions+=30;goto B466dcc;
case 0x466dd0:c.instructions+=29;goto B466dd0;
case 0x466dd4:c.instructions+=28;goto B466dd4;
case 0x466dd8:c.instructions+=27;goto B466dd8;
case 0x466ddb:c.instructions+=26;goto B466ddb;
case 0x466dde:c.instructions+=25;goto B466dde;
case 0x466de2:c.instructions+=24;goto B466de2;
case 0x466de6:c.instructions+=23;goto B466de6;
case 0x466dea:c.instructions+=22;goto B466dea;
case 0x466dee:c.instructions+=21;goto B466dee;
case 0x466df2:c.instructions+=20;goto B466df2;
case 0x466df6:c.instructions+=19;goto B466df6;
case 0x466dfa:c.instructions+=18;goto B466dfa;
case 0x466dfe:c.instructions+=17;goto B466dfe;
case 0x466e02:c.instructions+=16;goto B466e02;
case 0x466e06:c.instructions+=15;goto B466e06;
case 0x466e0a:c.instructions+=14;goto B466e0a;
case 0x466e0e:c.instructions+=13;goto B466e0e;
case 0x466e12:c.instructions+=12;goto B466e12;
case 0x466e16:c.instructions+=11;goto B466e16;
case 0x466e1a:c.instructions+=10;goto B466e1a;
case 0x466e1e:c.instructions+=9;goto B466e1e;
case 0x466e22:c.instructions+=8;goto B466e22;
case 0x466e26:c.instructions+=7;goto B466e26;
case 0x466e29:c.instructions+=6;goto B466e29;
case 0x466e2b:c.instructions+=5;goto B466e2b;
case 0x466e2f:c.instructions+=4;goto B466e2f;
case 0x466e32:c.instructions+=3;goto B466e32;
case 0x466e34:c.instructions+=2;goto B466e34;
case 0x466e36:c.instructions+=1;goto B466e36;
case 0x466e38:goto L466e38;
case 0x466e3c:c.instructions+=4;goto B466e3c;
case 0x466e40:c.instructions+=3;goto B466e40;
case 0x466e42:c.instructions+=2;goto B466e42;
case 0x466e45:c.instructions+=1;goto B466e45;
case 0x466e47:goto L466e47;
case 0x466e4b:c.instructions+=8;goto B466e4b;
case 0x466e4f:c.instructions+=7;goto B466e4f;
case 0x466e53:c.instructions+=6;goto B466e53;
case 0x466e57:c.instructions+=5;goto B466e57;
case 0x466e5b:c.instructions+=4;goto B466e5b;
case 0x466e5f:c.instructions+=3;goto B466e5f;
case 0x466e62:c.instructions+=2;goto B466e62;
case 0x466e64:c.instructions+=1;goto B466e64;
case 0x466e66:goto L466e66;
case 0x466e6a:c.instructions+=7;goto B466e6a;
case 0x466e6e:c.instructions+=6;goto B466e6e;
case 0x466e72:c.instructions+=5;goto B466e72;
case 0x466e76:c.instructions+=4;goto B466e76;
case 0x466e7a:c.instructions+=3;goto B466e7a;
case 0x466e7e:c.instructions+=2;goto B466e7e;
case 0x466e81:c.instructions+=1;goto B466e81;
case 0x466e83:goto L466e83;
case 0x466e87:c.instructions+=4;goto B466e87;
case 0x466e8b:c.instructions+=3;goto B466e8b;
case 0x466e8f:c.instructions+=2;goto B466e8f;
case 0x466e93:c.instructions+=1;goto B466e93;
case 0x466e98:goto L466e98;
case 0x466e9e:c.instructions+=20;goto B466e9e;
case 0x466ea4:c.instructions+=19;goto B466ea4;
case 0x466ea8:c.instructions+=18;goto B466ea8;
case 0x466eaa:c.instructions+=17;goto B466eaa;
case 0x466eae:c.instructions+=16;goto B466eae;
case 0x466eb2:c.instructions+=15;goto B466eb2;
case 0x466eb6:c.instructions+=14;goto B466eb6;
case 0x466eba:c.instructions+=13;goto B466eba;
case 0x466ebe:c.instructions+=12;goto B466ebe;
case 0x466ec2:c.instructions+=11;goto B466ec2;
case 0x466ec6:c.instructions+=10;goto B466ec6;
case 0x466ec8:c.instructions+=9;goto B466ec8;
case 0x466ecc:c.instructions+=8;goto B466ecc;
case 0x466ecf:c.instructions+=7;goto B466ecf;
case 0x466ed1:c.instructions+=6;goto B466ed1;
case 0x466ed5:c.instructions+=5;goto B466ed5;
case 0x466ed9:c.instructions+=4;goto B466ed9;
case 0x466edb:c.instructions+=3;goto B466edb;
case 0x466edd:c.instructions+=2;goto B466edd;
case 0x466ee0:c.instructions+=1;goto B466ee0;
case 0x466ee2:goto L466ee2;
case 0x466ee6:c.instructions+=6;goto B466ee6;
case 0x466eea:c.instructions+=5;goto B466eea;
case 0x466ef0:c.instructions+=4;goto B466ef0;
case 0x466ef4:c.instructions+=3;goto B466ef4;
case 0x466ef6:c.instructions+=2;goto B466ef6;
case 0x466ef9:c.instructions+=1;goto B466ef9;
case 0x466efb:goto L466efb;
case 0x466eff:c.instructions+=2;goto B466eff;
case 0x466f00:c.instructions+=1;goto B466f00;
case 0x466f05:goto L466f05;
case 0x466f08:c.instructions+=2;goto B466f08;
case 0x466f0a:c.instructions+=1;goto B466f0a;
case 0x466f0c:goto L466f0c;
case 0x466f10:c.instructions+=7;goto B466f10;
case 0x466f14:c.instructions+=6;goto B466f14;
case 0x466f18:c.instructions+=5;goto B466f18;
case 0x466f1c:c.instructions+=4;goto B466f1c;
case 0x466f20:c.instructions+=3;goto B466f20;
case 0x466f24:c.instructions+=2;goto B466f24;
case 0x466f27:c.instructions+=1;goto B466f27;
case 0x466f29:goto L466f29;
case 0x466f2d:c.instructions+=1;goto B466f2d;
case 0x466f31:goto L466f31;
case 0x466f33:c.instructions+=1;goto B466f33;
case 0x466f35:goto L466f35;
case 0x466f37:goto L466f37;
case 0x466f3b:goto L466f3b;
case 0x466f41:c.instructions+=1;goto B466f41;
case 0x466f43:goto L466f43;
case 0x466f47:goto L466f47;
case 0x466f4a:c.instructions+=15;goto B466f4a;
case 0x466f4c:c.instructions+=14;goto B466f4c;
case 0x466f50:c.instructions+=13;goto B466f50;
case 0x466f52:c.instructions+=12;goto B466f52;
case 0x466f56:c.instructions+=11;goto B466f56;
case 0x466f5a:c.instructions+=10;goto B466f5a;
case 0x466f61:c.instructions+=9;goto B466f61;
case 0x466f65:c.instructions+=8;goto B466f65;
case 0x466f69:c.instructions+=7;goto B466f69;
case 0x466f6c:c.instructions+=6;goto B466f6c;
case 0x466f6d:c.instructions+=5;goto B466f6d;
case 0x466f70:c.instructions+=4;goto B466f70;
case 0x466f71:c.instructions+=3;goto B466f71;
case 0x466f72:c.instructions+=2;goto B466f72;
case 0x466f74:c.instructions+=1;goto B466f74;
case 0x466f79:goto L466f79;
case 0x466f7d:c.instructions+=7;goto B466f7d;
case 0x466f80:c.instructions+=6;goto B466f80;
case 0x466f84:c.instructions+=5;goto B466f84;
case 0x466f87:c.instructions+=4;goto B466f87;
case 0x466f8b:c.instructions+=3;goto B466f8b;
case 0x466f8e:c.instructions+=2;goto B466f8e;
case 0x466f90:c.instructions+=1;goto B466f90;
case 0x466f92:goto L466f92;
case 0x466f99:c.instructions+=1;goto B466f99;
case 0x466f9d:goto L466f9d;
case 0x466f9f:c.instructions+=1;goto B466f9f;
case 0x466fa5:goto L466fa5;
case 0x466fac:c.instructions+=8;goto B466fac;
case 0x466faf:c.instructions+=7;goto B466faf;
case 0x466fb2:c.instructions+=6;goto B466fb2;
case 0x466fb5:c.instructions+=5;goto B466fb5;
case 0x466fb6:c.instructions+=4;goto B466fb6;
case 0x466fb7:c.instructions+=3;goto B466fb7;
case 0x466fb8:c.instructions+=2;goto B466fb8;
case 0x466fbb:c.instructions+=1;goto B466fbb;
case 0x466fc0:goto L466fc0;
case 0x466fc4:c.instructions+=4;goto B466fc4;
case 0x466fc7:c.instructions+=3;goto B466fc7;
case 0x466fca:c.instructions+=2;goto B466fca;
case 0x466fcb:c.instructions+=1;goto B466fcb;
case 0x466fd0:goto L466fd0;
case 0x466fd4:c.instructions+=7;goto B466fd4;
case 0x466fd8:c.instructions+=6;goto B466fd8;
case 0x466fd9:c.instructions+=5;goto B466fd9;
case 0x466fdc:c.instructions+=4;goto B466fdc;
case 0x466fde:c.instructions+=3;goto B466fde;
case 0x466fe1:c.instructions+=2;goto B466fe1;
case 0x466fe3:c.instructions+=1;goto B466fe3;
case 0x466fe8:goto L466fe8;
case 0x466fec:c.instructions+=8;goto B466fec;
case 0x466fef:c.instructions+=7;goto B466fef;
case 0x466ff3:c.instructions+=6;goto B466ff3;
case 0x466ff6:c.instructions+=5;goto B466ff6;
case 0x466ffa:c.instructions+=4;goto B466ffa;
case 0x466ffb:c.instructions+=3;goto B466ffb;
case 0x466ffe:c.instructions+=2;goto B466ffe;
case 0x466fff:c.instructions+=1;goto B466fff;
default:missing_instruction(c.pc);}
B466000:L466000:{c.instructions+=10;NFSU2_TR(0x466000);
__builtin_memmove((R+0),gp(0x89e7e1),1);
}
B466005:{NFSU2_TR(0x466005);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466006:{NFSU2_TR(0x466006);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466007:{NFSU2_TR(0x466007);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466008:{NFSU2_TR(0x466008);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46600a:{NFSU2_TR(0x46600a);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B46600d:{NFSU2_TR(0x46600d);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B46600f:{NFSU2_TR(0x46600f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466013:{NFSU2_TR(0x466013);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466014:{NFSU2_TR(0x466014);
if(r1(R+518)){{goto L4660bf;}}
}
B46601a:L46601a:{c.instructions+=2;NFSU2_TR(0x46601a);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B466021:{NFSU2_TR(0x466021);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L466030;}}
}
B466023:L466023:{c.instructions+=2;NFSU2_TR(0x466023);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46602a:{NFSU2_TR(0x46602a);
if(r1(R+518)){{goto L4660bf;}}
}
B466030:L466030:{c.instructions+=36;NFSU2_TR(0x466030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466032:{NFSU2_TR(0x466032);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466035:{NFSU2_TR(0x466035);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b098ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46603f:{NFSU2_TR(0x46603f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466041:{NFSU2_TR(0x466041);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466044:{NFSU2_TR(0x466044);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46604e:{NFSU2_TR(0x46604e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466050:{NFSU2_TR(0x466050);
__builtin_memmove((R+28),gp(0x7ed218),4);
}
B466056:{NFSU2_TR(0x466056);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466059:{NFSU2_TR(0x466059);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46605f:{NFSU2_TR(0x46605f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466061:{NFSU2_TR(0x466061);
__builtin_memmove((R+28),gp(0x7ed174),4);
}
B466067:{NFSU2_TR(0x466067);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46606a:{NFSU2_TR(0x46606a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466070:{NFSU2_TR(0x466070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466072:{NFSU2_TR(0x466072);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466075:{NFSU2_TR(0x466075);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46607b:{NFSU2_TR(0x46607b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46607d:{NFSU2_TR(0x46607d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466080:{NFSU2_TR(0x466080);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466086:{NFSU2_TR(0x466086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466088:{NFSU2_TR(0x466088);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46608b:{NFSU2_TR(0x46608b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466091:{NFSU2_TR(0x466091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466093:{NFSU2_TR(0x466093);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466096:{NFSU2_TR(0x466096);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46609c:{NFSU2_TR(0x46609c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46609e:{NFSU2_TR(0x46609e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4660a1:{NFSU2_TR(0x4660a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4660a7:{NFSU2_TR(0x4660a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4660a9:{NFSU2_TR(0x4660a9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4660ac:{NFSU2_TR(0x4660ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4660b2:{NFSU2_TR(0x4660b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4660b4:{NFSU2_TR(0x4660b4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4660b7:{NFSU2_TR(0x4660b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0c0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4660bd:{NFSU2_TR(0x4660bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B4660bf:L4660bf:{c.instructions+=234;NFSU2_TR(0x4660bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4660c1:{NFSU2_TR(0x4660c1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4660c4:{NFSU2_TR(0x4660c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b098ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4660ca:{NFSU2_TR(0x4660ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4660cc:{NFSU2_TR(0x4660cc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4660cf:{NFSU2_TR(0x4660cf);
__builtin_memmove((R+12),gp(0x7ed194),4);
}
B4660d5:{NFSU2_TR(0x4660d5);
w4(R+28,u32(0x1ull));
}
B4660da:{NFSU2_TR(0x4660da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4660e0:{NFSU2_TR(0x4660e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4660e2:{NFSU2_TR(0x4660e2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4660e5:{NFSU2_TR(0x4660e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4660eb:{NFSU2_TR(0x4660eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4660ed:{NFSU2_TR(0x4660ed);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4660f0:{NFSU2_TR(0x4660f0);
__builtin_memmove((R+12),gp(0x7ed170),4);
}
B4660f6:{NFSU2_TR(0x4660f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4660fc:{NFSU2_TR(0x4660fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4660fe:{NFSU2_TR(0x4660fe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466101:{NFSU2_TR(0x466101);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466107:{NFSU2_TR(0x466107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466109:{NFSU2_TR(0x466109);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46610c:{NFSU2_TR(0x46610c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466112:{NFSU2_TR(0x466112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466114:{NFSU2_TR(0x466114);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466117:{NFSU2_TR(0x466117);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46611d:{NFSU2_TR(0x46611d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46611f:{NFSU2_TR(0x46611f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466122:{NFSU2_TR(0x466122);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466128:{NFSU2_TR(0x466128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46612a:{NFSU2_TR(0x46612a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46612d:{NFSU2_TR(0x46612d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466133:{NFSU2_TR(0x466133);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466135:{NFSU2_TR(0x466135);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466138:{NFSU2_TR(0x466138);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46613e:{NFSU2_TR(0x46613e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466140:{NFSU2_TR(0x466140);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466143:{NFSU2_TR(0x466143);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0c0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466149:{NFSU2_TR(0x466149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B46614b:{NFSU2_TR(0x46614b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B46614c:{NFSU2_TR(0x46614c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B46614e:{NFSU2_TR(0x46614e);
__builtin_memmove((R+8),(R+12),4);
}
B466150:{NFSU2_TR(0x466150);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466153:{NFSU2_TR(0x466153);
__builtin_memmove((R+20),gp(0x7ed208),4);
}
B466159:{NFSU2_TR(0x466159);
w4(R+12,u32(0x7ull));
}
B46615e:{NFSU2_TR(0x46615e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b098ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466164:{NFSU2_TR(0x466164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466166:{NFSU2_TR(0x466166);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466169:{NFSU2_TR(0x466169);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46616f:{NFSU2_TR(0x46616f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466171:{NFSU2_TR(0x466171);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466174:{NFSU2_TR(0x466174);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46617a:{NFSU2_TR(0x46617a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46617c:{NFSU2_TR(0x46617c);
__builtin_memmove((R+20),gp(0x7ed174),4);
}
B466182:{NFSU2_TR(0x466182);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466185:{NFSU2_TR(0x466185);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46618b:{NFSU2_TR(0x46618b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46618d:{NFSU2_TR(0x46618d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466190:{NFSU2_TR(0x466190);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466196:{NFSU2_TR(0x466196);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466198:{NFSU2_TR(0x466198);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46619b:{NFSU2_TR(0x46619b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4661a1:{NFSU2_TR(0x4661a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4661a3:{NFSU2_TR(0x4661a3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4661a6:{NFSU2_TR(0x4661a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4661ac:{NFSU2_TR(0x4661ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4661ae:{NFSU2_TR(0x4661ae);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4661b1:{NFSU2_TR(0x4661b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4661b7:{NFSU2_TR(0x4661b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4661b9:{NFSU2_TR(0x4661b9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4661bc:{NFSU2_TR(0x4661bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4661c2:{NFSU2_TR(0x4661c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4661c4:{NFSU2_TR(0x4661c4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4661c7:{NFSU2_TR(0x4661c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4661cd:{NFSU2_TR(0x4661cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4661cf:{NFSU2_TR(0x4661cf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4661d2:{NFSU2_TR(0x4661d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0c0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4661d8:{NFSU2_TR(0x4661d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4661da:{NFSU2_TR(0x4661da);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4661db:{NFSU2_TR(0x4661db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4661dd:{NFSU2_TR(0x4661dd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4661e0:{NFSU2_TR(0x4661e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b098ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4661e6:{NFSU2_TR(0x4661e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4661e8:{NFSU2_TR(0x4661e8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4661eb:{NFSU2_TR(0x4661eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4661f1:{NFSU2_TR(0x4661f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4661f3:{NFSU2_TR(0x4661f3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4661f6:{NFSU2_TR(0x4661f6);
__builtin_memmove((R+12),gp(0x7ed20c),4);
}
B4661fc:{NFSU2_TR(0x4661fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466202:{NFSU2_TR(0x466202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466204:{NFSU2_TR(0x466204);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466207:{NFSU2_TR(0x466207);
__builtin_memmove((R+12),gp(0x7ed174),4);
}
B46620d:{NFSU2_TR(0x46620d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466213:{NFSU2_TR(0x466213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466215:{NFSU2_TR(0x466215);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466218:{NFSU2_TR(0x466218);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46621e:{NFSU2_TR(0x46621e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466220:{NFSU2_TR(0x466220);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466223:{NFSU2_TR(0x466223);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466229:{NFSU2_TR(0x466229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46622b:{NFSU2_TR(0x46622b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46622e:{NFSU2_TR(0x46622e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466234:{NFSU2_TR(0x466234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466236:{NFSU2_TR(0x466236);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466239:{NFSU2_TR(0x466239);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46623f:{NFSU2_TR(0x46623f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466241:{NFSU2_TR(0x466241);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466244:{NFSU2_TR(0x466244);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46624a:{NFSU2_TR(0x46624a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46624c:{NFSU2_TR(0x46624c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46624f:{NFSU2_TR(0x46624f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466255:{NFSU2_TR(0x466255);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466257:{NFSU2_TR(0x466257);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46625a:{NFSU2_TR(0x46625a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0c0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466260:{NFSU2_TR(0x466260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B466262:{NFSU2_TR(0x466262);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B466263:{NFSU2_TR(0x466263);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B466265:{NFSU2_TR(0x466265);
__builtin_memmove((R+8),(R+20),4);
}
B466267:{NFSU2_TR(0x466267);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46626a:{NFSU2_TR(0x46626a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b098ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B466274:{NFSU2_TR(0x466274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466276:{NFSU2_TR(0x466276);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466279:{NFSU2_TR(0x466279);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46627f:{NFSU2_TR(0x46627f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466281:{NFSU2_TR(0x466281);
__builtin_memmove((R+12),gp(0x7ed214),4);
}
B466287:{NFSU2_TR(0x466287);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46628a:{NFSU2_TR(0x46628a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466290:{NFSU2_TR(0x466290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466292:{NFSU2_TR(0x466292);
__builtin_memmove((R+12),gp(0x7ed174),4);
}
B466298:{NFSU2_TR(0x466298);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46629b:{NFSU2_TR(0x46629b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4662a1:{NFSU2_TR(0x4662a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4662a3:{NFSU2_TR(0x4662a3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4662a6:{NFSU2_TR(0x4662a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4662ac:{NFSU2_TR(0x4662ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4662ae:{NFSU2_TR(0x4662ae);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4662b1:{NFSU2_TR(0x4662b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4662b7:{NFSU2_TR(0x4662b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4662b9:{NFSU2_TR(0x4662b9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4662bc:{NFSU2_TR(0x4662bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4662c2:{NFSU2_TR(0x4662c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4662c4:{NFSU2_TR(0x4662c4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4662c7:{NFSU2_TR(0x4662c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4662cd:{NFSU2_TR(0x4662cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4662cf:{NFSU2_TR(0x4662cf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4662d2:{NFSU2_TR(0x4662d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4662d8:{NFSU2_TR(0x4662d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4662da:{NFSU2_TR(0x4662da);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4662dd:{NFSU2_TR(0x4662dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4662e3:{NFSU2_TR(0x4662e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4662e5:{NFSU2_TR(0x4662e5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4662e8:{NFSU2_TR(0x4662e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0c0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4662ee:{NFSU2_TR(0x4662ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4662f0:{NFSU2_TR(0x4662f0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4662f1:{NFSU2_TR(0x4662f1);
__builtin_memmove((R+8),(R+12),4);
}
B4662f3:{NFSU2_TR(0x4662f3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4662f6:{NFSU2_TR(0x4662f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4662f8:{NFSU2_TR(0x4662f8);
w4(R+12,u32(0xbull));
}
B4662fd:{NFSU2_TR(0x4662fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b098ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466303:{NFSU2_TR(0x466303);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466305:{NFSU2_TR(0x466305);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466308:{NFSU2_TR(0x466308);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46630e:{NFSU2_TR(0x46630e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466310:{NFSU2_TR(0x466310);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466313:{NFSU2_TR(0x466313);
__builtin_memmove((R+20),gp(0x7ed228),4);
}
B466319:{NFSU2_TR(0x466319);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46631f:{NFSU2_TR(0x46631f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466321:{NFSU2_TR(0x466321);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466324:{NFSU2_TR(0x466324);
__builtin_memmove((R+20),gp(0x7ed174),4);
}
B46632a:{NFSU2_TR(0x46632a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466330:{NFSU2_TR(0x466330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466332:{NFSU2_TR(0x466332);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466335:{NFSU2_TR(0x466335);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46633b:{NFSU2_TR(0x46633b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46633d:{NFSU2_TR(0x46633d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466340:{NFSU2_TR(0x466340);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466346:{NFSU2_TR(0x466346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466348:{NFSU2_TR(0x466348);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46634b:{NFSU2_TR(0x46634b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466351:{NFSU2_TR(0x466351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466353:{NFSU2_TR(0x466353);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466356:{NFSU2_TR(0x466356);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46635c:{NFSU2_TR(0x46635c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46635e:{NFSU2_TR(0x46635e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466361:{NFSU2_TR(0x466361);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466367:{NFSU2_TR(0x466367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466369:{NFSU2_TR(0x466369);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46636c:{NFSU2_TR(0x46636c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466372:{NFSU2_TR(0x466372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466374:{NFSU2_TR(0x466374);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466377:{NFSU2_TR(0x466377);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0c0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46637d:{NFSU2_TR(0x46637d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46637f:{NFSU2_TR(0x46637f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B466380:{NFSU2_TR(0x466380);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B466382:{NFSU2_TR(0x466382);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466385:{NFSU2_TR(0x466385);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b098ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46638b:{NFSU2_TR(0x46638b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46638d:{NFSU2_TR(0x46638d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466390:{NFSU2_TR(0x466390);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466396:{NFSU2_TR(0x466396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466398:{NFSU2_TR(0x466398);
__builtin_memmove((R+28),gp(0x7ed224),4);
}
B46639e:{NFSU2_TR(0x46639e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4663a1:{NFSU2_TR(0x4663a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4663a7:{NFSU2_TR(0x4663a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4663a9:{NFSU2_TR(0x4663a9);
__builtin_memmove((R+28),gp(0x7ed174),4);
}
B4663af:{NFSU2_TR(0x4663af);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4663b2:{NFSU2_TR(0x4663b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4663b8:{NFSU2_TR(0x4663b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4663ba:{NFSU2_TR(0x4663ba);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4663bd:{NFSU2_TR(0x4663bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4663c3:{NFSU2_TR(0x4663c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4663c5:{NFSU2_TR(0x4663c5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4663c8:{NFSU2_TR(0x4663c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4663ce:{NFSU2_TR(0x4663ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4663d0:{NFSU2_TR(0x4663d0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4663d3:{NFSU2_TR(0x4663d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4663d9:{NFSU2_TR(0x4663d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4663db:{NFSU2_TR(0x4663db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4663de:{NFSU2_TR(0x4663de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4663e4:{NFSU2_TR(0x4663e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4663e6:{NFSU2_TR(0x4663e6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4663e9:{NFSU2_TR(0x4663e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4663ef:{NFSU2_TR(0x4663ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4663f1:{NFSU2_TR(0x4663f1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4663f4:{NFSU2_TR(0x4663f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4663fa:{NFSU2_TR(0x4663fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4663fc:{NFSU2_TR(0x4663fc);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x2cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B4663ff:{NFSU2_TR(0x4663ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0c0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466405:{NFSU2_TR(0x466405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B466407:{NFSU2_TR(0x466407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B466408:{NFSU2_TR(0x466408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B466409:{NFSU2_TR(0x466409);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46640a:{NFSU2_TR(0x46640a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46640b:{NFSU2_TR(0x46640b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B46640d:{NFSU2_TR(0x46640d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46640e:{NFSU2_TR(0x46640e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466420:L466420:{c.instructions+=39;NFSU2_TR(0x466420);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466424:{NFSU2_TR(0x466424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B466426:{NFSU2_TR(0x466426);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B466429:{NFSU2_TR(0x466429);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b098ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B466433:{NFSU2_TR(0x466433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466435:{NFSU2_TR(0x466435);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466438:{NFSU2_TR(0x466438);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B466442:{NFSU2_TR(0x466442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B466444:{NFSU2_TR(0x466444);
__builtin_memmove((R+8),gp(0x7ed220),4);
}
B46644a:{NFSU2_TR(0x46644a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B46644d:{NFSU2_TR(0x46644d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466453:{NFSU2_TR(0x466453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B466455:{NFSU2_TR(0x466455);
__builtin_memmove((R+8),gp(0x7ed174),4);
}
B46645b:{NFSU2_TR(0x46645b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B46645e:{NFSU2_TR(0x46645e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466464:{NFSU2_TR(0x466464);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466466:{NFSU2_TR(0x466466);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466469:{NFSU2_TR(0x466469);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46646b:{NFSU2_TR(0x46646b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466471:{NFSU2_TR(0x466471);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466473:{NFSU2_TR(0x466473);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466476:{NFSU2_TR(0x466476);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46647c:{NFSU2_TR(0x46647c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46647e:{NFSU2_TR(0x46647e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466481:{NFSU2_TR(0x466481);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466487:{NFSU2_TR(0x466487);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466489:{NFSU2_TR(0x466489);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46648c:{NFSU2_TR(0x46648c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466492:{NFSU2_TR(0x466492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466494:{NFSU2_TR(0x466494);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466497:{NFSU2_TR(0x466497);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46649d:{NFSU2_TR(0x46649d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46649f:{NFSU2_TR(0x46649f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4664a2:{NFSU2_TR(0x4664a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4664a8:{NFSU2_TR(0x4664a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4664aa:{NFSU2_TR(0x4664aa);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x2cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B4664ad:{NFSU2_TR(0x4664ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4664b7:{NFSU2_TR(0x4664b7);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4664b9:{NFSU2_TR(0x4664b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4664c0:L4664c0:{c.instructions+=39;NFSU2_TR(0x4664c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4664c4:{NFSU2_TR(0x4664c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4664c6:{NFSU2_TR(0x4664c6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4664c9:{NFSU2_TR(0x4664c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b098ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B4664d3:{NFSU2_TR(0x4664d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4664d5:{NFSU2_TR(0x4664d5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4664d8:{NFSU2_TR(0x4664d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4664e2:{NFSU2_TR(0x4664e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4664e4:{NFSU2_TR(0x4664e4);
__builtin_memmove((R+8),gp(0x7ed21c),4);
}
B4664ea:{NFSU2_TR(0x4664ea);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4664ed:{NFSU2_TR(0x4664ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4664f3:{NFSU2_TR(0x4664f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4664f5:{NFSU2_TR(0x4664f5);
__builtin_memmove((R+8),gp(0x7ed174),4);
}
B4664fb:{NFSU2_TR(0x4664fb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4664fe:{NFSU2_TR(0x4664fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466504:{NFSU2_TR(0x466504);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466506:{NFSU2_TR(0x466506);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466509:{NFSU2_TR(0x466509);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46650b:{NFSU2_TR(0x46650b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466511:{NFSU2_TR(0x466511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466513:{NFSU2_TR(0x466513);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466516:{NFSU2_TR(0x466516);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46651c:{NFSU2_TR(0x46651c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46651e:{NFSU2_TR(0x46651e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466521:{NFSU2_TR(0x466521);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466527:{NFSU2_TR(0x466527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466529:{NFSU2_TR(0x466529);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46652c:{NFSU2_TR(0x46652c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466532:{NFSU2_TR(0x466532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466534:{NFSU2_TR(0x466534);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466537:{NFSU2_TR(0x466537);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46653d:{NFSU2_TR(0x46653d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46653f:{NFSU2_TR(0x46653f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B466542:{NFSU2_TR(0x466542);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466548:{NFSU2_TR(0x466548);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46654a:{NFSU2_TR(0x46654a);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x2cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B46654d:{NFSU2_TR(0x46654d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B466557:{NFSU2_TR(0x466557);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B466559:{NFSU2_TR(0x466559);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466560:L466560:{c.instructions+=12;NFSU2_TR(0x466560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B466563:{NFSU2_TR(0x466563);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466567:{NFSU2_TR(0x466567);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B46656b:{NFSU2_TR(0x46656b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xda,0x28"::"a"(ea_):"memory");}
}
B46656f:{NFSU2_TR(0x46656f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466573:{NFSU2_TR(0x466573);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466577:{NFSU2_TR(0x466577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46657b:{NFSU2_TR(0x46657b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B46657e:{NFSU2_TR(0x46657e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B466580:{NFSU2_TR(0x466580);
__builtin_memmove((R+0),(R+4),4);
}
B466582:{NFSU2_TR(0x466582);
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
B466585:{NFSU2_TR(0x466585);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466590:L466590:{c.instructions+=40;NFSU2_TR(0x466590);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466594:{NFSU2_TR(0x466594);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466597:{NFSU2_TR(0x466597);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46659d:{NFSU2_TR(0x46659d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x13ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4665a0:{NFSU2_TR(0x4665a0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4665a2:{NFSU2_TR(0x4665a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4665a4:{NFSU2_TR(0x4665a4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B4665a6:{NFSU2_TR(0x4665a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4665a7:{NFSU2_TR(0x4665a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4665a8:{NFSU2_TR(0x4665a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B4665ac:{NFSU2_TR(0x4665ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B4665af:{NFSU2_TR(0x4665af);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0ull))));
}
B4665b4:{NFSU2_TR(0x4665b4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B4665b6:{NFSU2_TR(0x4665b6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4665ba:{NFSU2_TR(0x4665ba);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4665bc:{NFSU2_TR(0x4665bc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4665bf:{NFSU2_TR(0x4665bf);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4665c3:{NFSU2_TR(0x4665c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4665c4:{NFSU2_TR(0x4665c4);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4665c7:{NFSU2_TR(0x4665c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4665ca:{NFSU2_TR(0x4665ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4665ce:{NFSU2_TR(0x4665ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4665d1:{NFSU2_TR(0x4665d1);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xf0ull))));
}
B4665d7:{NFSU2_TR(0x4665d7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B4665d9:{NFSU2_TR(0x4665d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4665dd:{NFSU2_TR(0x4665dd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4665e1:{NFSU2_TR(0x4665e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4665e4:{NFSU2_TR(0x4665e4);
w4(R+12,u32(0x3ull));
}
B4665e9:{NFSU2_TR(0x4665e9);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4665ec:{NFSU2_TR(0x4665ec);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4665ee:{NFSU2_TR(0x4665ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4665f1:{NFSU2_TR(0x4665f1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B4665f4:{NFSU2_TR(0x4665f4);
{u32 ea_=u32((r4(R+4)*4u)+u32(8313132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4665fb:{NFSU2_TR(0x4665fb);
{u32 ea_=u32((r4(R+4)*4u)+u32(8313148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466602:{NFSU2_TR(0x466602);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B466604:{NFSU2_TR(0x466604);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B466607:{NFSU2_TR(0x466607);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B46660a:{NFSU2_TR(0x46660a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B46660d:{NFSU2_TR(0x46660d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B46660e:{NFSU2_TR(0x46660e);
__builtin_memmove((R+28),(R+28),4);
}
B466610:L466610:{c.instructions+=101;NFSU2_TR(0x466610);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B466612:{NFSU2_TR(0x466612);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B466616:{NFSU2_TR(0x466616);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466619:{NFSU2_TR(0x466619);
__builtin_memmove((R+28),(R+24),4);
}
B46661b:{NFSU2_TR(0x46661b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B46661e:{NFSU2_TR(0x46661e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B466620:{NFSU2_TR(0x466620);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B466623:{NFSU2_TR(0x466623);
{u32 ea_=u32((r4(R+24)*4u)+u32(8313168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46662a:{NFSU2_TR(0x46662a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B46662d:{NFSU2_TR(0x46662d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B46662f:{NFSU2_TR(0x46662f);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466632:{NFSU2_TR(0x466632);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B466634:{NFSU2_TR(0x466634);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B466636:{NFSU2_TR(0x466636);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B466638:{NFSU2_TR(0x466638);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46663b:{NFSU2_TR(0x46663b);
{u32 ea_=u32((r4(R+24)*4u)+u32(8313168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B466642:{NFSU2_TR(0x466642);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B466644:{NFSU2_TR(0x466644);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B466646:{NFSU2_TR(0x466646);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B466648:{NFSU2_TR(0x466648);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46664b:{NFSU2_TR(0x46664b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+24,u32(r1(U+0)));
}
B46664e:{NFSU2_TR(0x46664e);
__builtin_memmove((R+28),(R+24),4);
}
B466650:{NFSU2_TR(0x466650);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B466652:{NFSU2_TR(0x466652);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466655:{NFSU2_TR(0x466655);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B466658:{NFSU2_TR(0x466658);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B46665a:{NFSU2_TR(0x46665a);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B46665d:{NFSU2_TR(0x46665d);
{u32 ea_=u32((r4(R+24)*4u)+u32(8313168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B466664:{NFSU2_TR(0x466664);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B466667:{NFSU2_TR(0x466667);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B466669:{NFSU2_TR(0x466669);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46666b:{NFSU2_TR(0x46666b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46666d:{NFSU2_TR(0x46666d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B466670:{NFSU2_TR(0x466670);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B466672:{NFSU2_TR(0x466672);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466675:{NFSU2_TR(0x466675);
{u32 ea_=u32((r4(R+24)*4u)+u32(8313168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46667c:{NFSU2_TR(0x46667c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46667e:{NFSU2_TR(0x46667e);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B466680:{NFSU2_TR(0x466680);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B466682:{NFSU2_TR(0x466682);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466685:{NFSU2_TR(0x466685);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B466689:{NFSU2_TR(0x466689);
__builtin_memmove((R+28),(R+24),4);
}
B46668b:{NFSU2_TR(0x46668b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B46668d:{NFSU2_TR(0x46668d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B466690:{NFSU2_TR(0x466690);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466693:{NFSU2_TR(0x466693);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B466695:{NFSU2_TR(0x466695);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B466698:{NFSU2_TR(0x466698);
{u32 ea_=u32((r4(R+24)*4u)+u32(8313168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46669f:{NFSU2_TR(0x46669f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B4666a2:{NFSU2_TR(0x4666a2);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4666a4:{NFSU2_TR(0x4666a4);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4666a7:{NFSU2_TR(0x4666a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4666a9:{NFSU2_TR(0x4666a9);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4666ac:{NFSU2_TR(0x4666ac);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B4666ae:{NFSU2_TR(0x4666ae);
{u32 ea_=u32((r4(R+24)*4u)+u32(8313168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4666b5:{NFSU2_TR(0x4666b5);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4666b7:{NFSU2_TR(0x4666b7);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4666ba:{NFSU2_TR(0x4666ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4666bc:{NFSU2_TR(0x4666bc);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4666bf:{NFSU2_TR(0x4666bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B4666c3:{NFSU2_TR(0x4666c3);
__builtin_memmove((R+28),(R+24),4);
}
B4666c5:{NFSU2_TR(0x4666c5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4666c7:{NFSU2_TR(0x4666c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B4666ca:{NFSU2_TR(0x4666ca);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4666cd:{NFSU2_TR(0x4666cd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B4666cf:{NFSU2_TR(0x4666cf);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B4666d2:{NFSU2_TR(0x4666d2);
{u32 ea_=u32((r4(R+24)*4u)+u32(8313168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4666d9:{NFSU2_TR(0x4666d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B4666dc:{NFSU2_TR(0x4666dc);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4666de:{NFSU2_TR(0x4666de);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4666e1:{NFSU2_TR(0x4666e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4666e3:{NFSU2_TR(0x4666e3);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4666e6:{NFSU2_TR(0x4666e6);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B4666e8:{NFSU2_TR(0x4666e8);
{u32 ea_=u32((r4(R+24)*4u)+u32(8313168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4666ef:{NFSU2_TR(0x4666ef);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4666f1:{NFSU2_TR(0x4666f1);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4666f4:{NFSU2_TR(0x4666f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4666f6:{NFSU2_TR(0x4666f6);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4666f9:{NFSU2_TR(0x4666f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B4666fd:{NFSU2_TR(0x4666fd);
__builtin_memmove((R+28),(R+24),4);
}
B4666ff:{NFSU2_TR(0x4666ff);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B466702:{NFSU2_TR(0x466702);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B466704:{NFSU2_TR(0x466704);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B466707:{NFSU2_TR(0x466707);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46670a:{NFSU2_TR(0x46670a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B46670c:{NFSU2_TR(0x46670c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x5ull))));
}
B46670f:{NFSU2_TR(0x46670f);
w1(R+512,carry<u32>(r4(R+0),u32(0x28ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B466712:{NFSU2_TR(0x466712);
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
B466713:{NFSU2_TR(0x466713);
{u32 ea_=u32((r4(R+24)*4u)+u32(8313168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46671a:{NFSU2_TR(0x46671a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B46671c:{NFSU2_TR(0x46671c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B46671f:{NFSU2_TR(0x46671f);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466722:{NFSU2_TR(0x466722);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B466724:{NFSU2_TR(0x466724);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B466727:{NFSU2_TR(0x466727);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B466729:{NFSU2_TR(0x466729);
{u32 ea_=u32((r4(R+24)*4u)+u32(8313168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B466730:{NFSU2_TR(0x466730);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B466732:{NFSU2_TR(0x466732);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466735:{NFSU2_TR(0x466735);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B466737:{NFSU2_TR(0x466737);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46673a:{NFSU2_TR(0x46673a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466610u);}goto L466610;}}
}
B466740:L466740:{c.instructions+=6;NFSU2_TR(0x466740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B466741:{NFSU2_TR(0x466741);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B466743:{NFSU2_TR(0x466743);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B466744:{NFSU2_TR(0x466744);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B466746:{NFSU2_TR(0x466746);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B466747:{NFSU2_TR(0x466747);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466750:L466750:{c.instructions+=10;NFSU2_TR(0x466750);
__builtin_memmove((R+0),(R+4),4);
}
B466752:{NFSU2_TR(0x466752);
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
B466754:{NFSU2_TR(0x466754);
u8 U[4];
w4(U+0,u32(0x789ec8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B46675a:{NFSU2_TR(0x46675a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46675d:{NFSU2_TR(0x46675d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466760:{NFSU2_TR(0x466760);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466763:{NFSU2_TR(0x466763);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466766:{NFSU2_TR(0x466766);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466769:{NFSU2_TR(0x466769);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46676c:{NFSU2_TR(0x46676c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466770:L466770:{c.instructions+=11;NFSU2_TR(0x466770);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466774:{NFSU2_TR(0x466774);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466775:{NFSU2_TR(0x466775);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B466777:{NFSU2_TR(0x466777);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46677a:{NFSU2_TR(0x46677a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46677d:{NFSU2_TR(0x46677d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466780:{NFSU2_TR(0x466780);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466783:{NFSU2_TR(0x466783);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466786:{NFSU2_TR(0x466786);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466789:{NFSU2_TR(0x466789);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x47ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B46678c:{NFSU2_TR(0x46678c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L466833;}}
}
B466792:L466792:{c.instructions+=2;NFSU2_TR(0x466792);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x6eull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B466796:{NFSU2_TR(0x466796);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L466833;}}
}
B46679c:L46679c:{c.instructions+=2;NFSU2_TR(0x46679c);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x73ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4667a0:{NFSU2_TR(0x4667a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L466833;}}
}
B4667a6:L4667a6:{c.instructions+=2;NFSU2_TR(0x4667a6);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x75ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4667aa:{NFSU2_TR(0x4667aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L466833;}}
}
B4667b0:L4667b0:{c.instructions+=2;NFSU2_TR(0x4667b0);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x32ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4667b4:{NFSU2_TR(0x4667b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L466833;}}
}
B4667b6:L4667b6:{c.instructions+=26;NFSU2_TR(0x4667b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4667b9:{NFSU2_TR(0x4667b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4667bc:{NFSU2_TR(0x4667bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4667bf:{NFSU2_TR(0x4667bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4667c2:{NFSU2_TR(0x4667c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4667c5:{NFSU2_TR(0x4667c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4667c8:{NFSU2_TR(0x4667c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4667cb:{NFSU2_TR(0x4667cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4667ce:{NFSU2_TR(0x4667ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4667d1:{NFSU2_TR(0x4667d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4667d4:{NFSU2_TR(0x4667d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4667d7:{NFSU2_TR(0x4667d7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B4667da:{NFSU2_TR(0x4667da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4667dd:{NFSU2_TR(0x4667dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4667e0:{NFSU2_TR(0x4667e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4667e3:{NFSU2_TR(0x4667e3);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4667e7:{NFSU2_TR(0x4667e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4667ea:{NFSU2_TR(0x4667ea);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4667ec:{NFSU2_TR(0x4667ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4667ed:{NFSU2_TR(0x4667ed);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B4667f1:{NFSU2_TR(0x4667f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4667f4:{NFSU2_TR(0x4667f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4667f7:{NFSU2_TR(0x4667f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4667fa:{NFSU2_TR(0x4667fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B466804:{NFSU2_TR(0x466804);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466808:{NFSU2_TR(0x466808);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L466825;}}
}
B46680a:L46680a:{c.instructions+=3;NFSU2_TR(0x46680a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46680d:{NFSU2_TR(0x46680d);
__builtin_memmove((R+8),(R+0),4);
}
B46680f:{NFSU2_TR(0x46680f);
}
B466810:L466810:{c.instructions+=4;NFSU2_TR(0x466810);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466813:{NFSU2_TR(0x466813);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B466815:{NFSU2_TR(0x466815);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B466817:{NFSU2_TR(0x466817);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46681b;}}
}
B466819:L466819:{c.instructions+=1;NFSU2_TR(0x466819);
__builtin_memmove((R+24),(R+0),4);
}
B46681b:L46681b:{c.instructions+=3;NFSU2_TR(0x46681b);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B46681e:{NFSU2_TR(0x46681e);
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
B46681f:{NFSU2_TR(0x46681f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466810u);}goto L466810;}}
}
B466821:L466821:{c.instructions+=1;NFSU2_TR(0x466821);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466825:L466825:{c.instructions+=6;NFSU2_TR(0x466825);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466829:{NFSU2_TR(0x466829);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46682a:{NFSU2_TR(0x46682a);
w1(R+0,u8(0x1ull));
}
B46682c:{NFSU2_TR(0x46682c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46682d:{NFSU2_TR(0x46682d);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466830:{NFSU2_TR(0x466830);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466833:L466833:{c.instructions+=3;NFSU2_TR(0x466833);
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
B466835:{NFSU2_TR(0x466835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B466836:{NFSU2_TR(0x466836);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466840:L466840:{c.instructions+=6;NFSU2_TR(0x466840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B466843:{NFSU2_TR(0x466843);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B466847:{NFSU2_TR(0x466847);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46684a:{NFSU2_TR(0x46684a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46684d:{NFSU2_TR(0x46684d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466851:{NFSU2_TR(0x466851);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46685b;}}
}
B466853:L466853:{c.instructions+=3;NFSU2_TR(0x466853);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B466855:{NFSU2_TR(0x466855);
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
B466858:{NFSU2_TR(0x466858);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46685b:L46685b:{c.instructions+=5;NFSU2_TR(0x46685b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46685f:{NFSU2_TR(0x46685f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B466862:{NFSU2_TR(0x466862);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B466864:{NFSU2_TR(0x466864);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B466867:{NFSU2_TR(0x466867);
if(r1(R+514)){{goto L466874;}}
}
B466869:L466869:{c.instructions+=4;NFSU2_TR(0x466869);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46686c:{NFSU2_TR(0x46686c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46686e:{NFSU2_TR(0x46686e);
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
B466871:{NFSU2_TR(0x466871);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466874:L466874:{c.instructions+=5;NFSU2_TR(0x466874);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466878:{NFSU2_TR(0x466878);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46687b:{NFSU2_TR(0x46687b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46687d:{NFSU2_TR(0x46687d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B466880:{NFSU2_TR(0x466880);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46688e;}}
}
B466882:L466882:{c.instructions+=4;NFSU2_TR(0x466882);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466885:{NFSU2_TR(0x466885);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B466888:{NFSU2_TR(0x466888);
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
B46688b:{NFSU2_TR(0x46688b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46688e:L46688e:{c.instructions+=35;NFSU2_TR(0x46688e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466892:{NFSU2_TR(0x466892);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B466895:{NFSU2_TR(0x466895);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B466899:{NFSU2_TR(0x466899);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46689c:{NFSU2_TR(0x46689c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46689f:{NFSU2_TR(0x46689f);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4668a1:{NFSU2_TR(0x4668a1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4668a5:{NFSU2_TR(0x4668a5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4668a9:{NFSU2_TR(0x4668a9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B4668ad:{NFSU2_TR(0x4668ad);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B4668b1:{NFSU2_TR(0x4668b1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4668b5:{NFSU2_TR(0x4668b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4668b9:{NFSU2_TR(0x4668b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4668bd:{NFSU2_TR(0x4668bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4668c1:{NFSU2_TR(0x4668c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4668c4:{NFSU2_TR(0x4668c4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4668c6:{NFSU2_TR(0x4668c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4668c9:{NFSU2_TR(0x4668c9);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4668cd:{NFSU2_TR(0x4668cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4668d1:{NFSU2_TR(0x4668d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4668d4:{NFSU2_TR(0x4668d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4668d6:{NFSU2_TR(0x4668d6);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B4668d8:{NFSU2_TR(0x4668d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4668dc:{NFSU2_TR(0x4668dc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4668e0:{NFSU2_TR(0x4668e0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4668e4:{NFSU2_TR(0x4668e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4668e8:{NFSU2_TR(0x4668e8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4668ec:{NFSU2_TR(0x4668ec);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B4668ee:{NFSU2_TR(0x4668ee);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B4668f2:{NFSU2_TR(0x4668f2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4668f6:{NFSU2_TR(0x4668f6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4668fa:{NFSU2_TR(0x4668fa);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B4668fe:{NFSU2_TR(0x4668fe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466902:{NFSU2_TR(0x466902);
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
B466905:{NFSU2_TR(0x466905);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466910:L466910:{c.instructions+=6;NFSU2_TR(0x466910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B466913:{NFSU2_TR(0x466913);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B466917:{NFSU2_TR(0x466917);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46691a:{NFSU2_TR(0x46691a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46691d:{NFSU2_TR(0x46691d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466921:{NFSU2_TR(0x466921);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46692b;}}
}
B466923:L466923:{c.instructions+=3;NFSU2_TR(0x466923);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B466925:{NFSU2_TR(0x466925);
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
B466928:{NFSU2_TR(0x466928);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46692b:L46692b:{c.instructions+=5;NFSU2_TR(0x46692b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46692f:{NFSU2_TR(0x46692f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B466935:{NFSU2_TR(0x466935);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B466937:{NFSU2_TR(0x466937);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46693a:{NFSU2_TR(0x46693a);
if(r1(R+514)){{goto L466947;}}
}
B46693c:L46693c:{c.instructions+=4;NFSU2_TR(0x46693c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46693f:{NFSU2_TR(0x46693f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B466941:{NFSU2_TR(0x466941);
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
B466944:{NFSU2_TR(0x466944);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466947:L466947:{c.instructions+=5;NFSU2_TR(0x466947);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46694b:{NFSU2_TR(0x46694b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46694f:{NFSU2_TR(0x46694f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B466951:{NFSU2_TR(0x466951);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B466954:{NFSU2_TR(0x466954);
if(r1(R+514)){{goto L466962;}}
}
B466956:L466956:{c.instructions+=4;NFSU2_TR(0x466956);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466959:{NFSU2_TR(0x466959);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B46695c:{NFSU2_TR(0x46695c);
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
B46695f:{NFSU2_TR(0x46695f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466962:L466962:{c.instructions+=28;NFSU2_TR(0x466962);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466966:{NFSU2_TR(0x466966);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B46696a:{NFSU2_TR(0x46696a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B46696e:{NFSU2_TR(0x46696e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466972:{NFSU2_TR(0x466972);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466976:{NFSU2_TR(0x466976);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46697a:{NFSU2_TR(0x46697a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46697e:{NFSU2_TR(0x46697e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B466981:{NFSU2_TR(0x466981);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B466983:{NFSU2_TR(0x466983);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466986:{NFSU2_TR(0x466986);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B46698a:{NFSU2_TR(0x46698a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46698e:{NFSU2_TR(0x46698e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B466991:{NFSU2_TR(0x466991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B466993:{NFSU2_TR(0x466993);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B466995:{NFSU2_TR(0x466995);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466999:{NFSU2_TR(0x466999);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46699d:{NFSU2_TR(0x46699d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4669a1:{NFSU2_TR(0x4669a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4669a5:{NFSU2_TR(0x4669a5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4669a9:{NFSU2_TR(0x4669a9);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B4669ab:{NFSU2_TR(0x4669ab);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B4669af:{NFSU2_TR(0x4669af);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4669b3:{NFSU2_TR(0x4669b3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4669b7:{NFSU2_TR(0x4669b7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B4669bb:{NFSU2_TR(0x4669bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4669bf:{NFSU2_TR(0x4669bf);
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
B4669c2:{NFSU2_TR(0x4669c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4669d0:L4669d0:{c.instructions+=4;NFSU2_TR(0x4669d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4669d3:{NFSU2_TR(0x4669d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4669d7:{NFSU2_TR(0x4669d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4669db:{NFSU2_TR(0x4669db);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4669e9;}}
}
B4669dd:L4669dd:{c.instructions+=3;NFSU2_TR(0x4669dd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4669e3:{NFSU2_TR(0x4669e3);
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
B4669e6:{NFSU2_TR(0x4669e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4669e9:L4669e9:{c.instructions+=11;NFSU2_TR(0x4669e9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4669ed:{NFSU2_TR(0x4669ed);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B4669f1:{NFSU2_TR(0x4669f1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B4669f5:{NFSU2_TR(0x4669f5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4669f9:{NFSU2_TR(0x4669f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4669fd:{NFSU2_TR(0x4669fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466a01:{NFSU2_TR(0x466a01);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B466a04:{NFSU2_TR(0x466a04);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B466a06:{NFSU2_TR(0x466a06);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B466a09:{NFSU2_TR(0x466a09);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466a0d:{NFSU2_TR(0x466a0d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L466a51;}}
}
B466a0f:L466a0f:{c.instructions+=2;NFSU2_TR(0x466a0f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B466a11:{NFSU2_TR(0x466a11);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L466a23;}}
}
B466a13:L466a13:{c.instructions+=2;NFSU2_TR(0x466a13);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B466a1b:{NFSU2_TR(0x466a1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B466a23:L466a23:{c.instructions+=13;NFSU2_TR(0x466a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B466a27:{NFSU2_TR(0x466a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466a2a:{NFSU2_TR(0x466a2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B466a2c:{NFSU2_TR(0x466a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466a2f:{NFSU2_TR(0x466a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466a32:{NFSU2_TR(0x466a32);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B466a34:{NFSU2_TR(0x466a34);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466a38:{NFSU2_TR(0x466a38);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466a3c:{NFSU2_TR(0x466a3c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B466a3e:{NFSU2_TR(0x466a3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466a42:{NFSU2_TR(0x466a42);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466a46:{NFSU2_TR(0x466a46);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466a4c:{NFSU2_TR(0x466a4c);
{goto L466ad9;}
}
B466a51:L466a51:{c.instructions+=8;NFSU2_TR(0x466a51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B466a55:{NFSU2_TR(0x466a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466a58:{NFSU2_TR(0x466a58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466a59:{NFSU2_TR(0x466a59);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B466a5c:{NFSU2_TR(0x466a5c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B466a5e:{NFSU2_TR(0x466a5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466a5f:{NFSU2_TR(0x466a5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466a63:{NFSU2_TR(0x466a63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L466aa5;}}
}
B466a65:L466a65:{c.instructions+=2;NFSU2_TR(0x466a65);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B466a67:{NFSU2_TR(0x466a67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L466a7b;}}
}
B466a69:L466a69:{c.instructions+=5;NFSU2_TR(0x466a69);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466a6d:{NFSU2_TR(0x466a6d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466a71:{NFSU2_TR(0x466a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466a74:{NFSU2_TR(0x466a74);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B466a77:{NFSU2_TR(0x466a77);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466a7b:L466a7b:{c.instructions+=12;NFSU2_TR(0x466a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466a7e:{NFSU2_TR(0x466a7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B466a81:{NFSU2_TR(0x466a81);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B466a85:{NFSU2_TR(0x466a85);
__builtin_memmove((R+24),(R+0),4);
}
B466a87:{NFSU2_TR(0x466a87);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B466a89:{NFSU2_TR(0x466a89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466a8d:{NFSU2_TR(0x466a8d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466a91:{NFSU2_TR(0x466a91);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+12))));
}
B466a95:{NFSU2_TR(0x466a95);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466a9b:{NFSU2_TR(0x466a9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466a9f:{NFSU2_TR(0x466a9f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466aa3:{NFSU2_TR(0x466aa3);
{goto L466ad7;}
}
B466aa5:L466aa5:{c.instructions+=13;NFSU2_TR(0x466aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466aa8:{NFSU2_TR(0x466aa8);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B466aac:{NFSU2_TR(0x466aac);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B466ab0:{NFSU2_TR(0x466ab0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B466ab3:{NFSU2_TR(0x466ab3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B466ab5:{NFSU2_TR(0x466ab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466ab9:{NFSU2_TR(0x466ab9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466abd:{NFSU2_TR(0x466abd);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B466ac1:{NFSU2_TR(0x466ac1);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B466ac3:{NFSU2_TR(0x466ac3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466ac9:{NFSU2_TR(0x466ac9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466acd:{NFSU2_TR(0x466acd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466ad1:{NFSU2_TR(0x466ad1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466ad7:L466ad7:{c.instructions+=2;NFSU2_TR(0x466ad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B466ad8:{NFSU2_TR(0x466ad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B466ad9:L466ad9:{c.instructions+=8;NFSU2_TR(0x466ad9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466add:{NFSU2_TR(0x466add);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B466ae1:{NFSU2_TR(0x466ae1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B466ae3:{NFSU2_TR(0x466ae3);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B466ae5:{NFSU2_TR(0x466ae5);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B466ae7:{NFSU2_TR(0x466ae7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B466ae9:{NFSU2_TR(0x466ae9);
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
B466aec:{NFSU2_TR(0x466aec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466af0:L466af0:{c.instructions+=7;NFSU2_TR(0x466af0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B466af3:{NFSU2_TR(0x466af3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466af4:{NFSU2_TR(0x466af4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466af8:{NFSU2_TR(0x466af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B466afb:{NFSU2_TR(0x466afb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B466afe:{NFSU2_TR(0x466afe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466b02:{NFSU2_TR(0x466b02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L466b0f;}}
}
B466b04:L466b04:{c.instructions+=4;NFSU2_TR(0x466b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466b07:{NFSU2_TR(0x466b07);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466b0b:{NFSU2_TR(0x466b0b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B466b0d:{NFSU2_TR(0x466b0d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L466b1c;}}
}
B466b0f:L466b0f:{c.instructions+=4;NFSU2_TR(0x466b0f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466b15:{NFSU2_TR(0x466b15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B466b16:{NFSU2_TR(0x466b16);
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
B466b19:{NFSU2_TR(0x466b19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466b1c:L466b1c:{c.instructions+=2;NFSU2_TR(0x466b1c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+12)));
w4(U+16,u32(u32(r4(R+0))-u32(r4(U+12))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
}
B466b1f:{NFSU2_TR(0x466b1f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L466b2c;}}
}
B466b21:L466b21:{c.instructions+=4;NFSU2_TR(0x466b21);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466b25:{NFSU2_TR(0x466b25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B466b26:{NFSU2_TR(0x466b26);
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
B466b29:{NFSU2_TR(0x466b29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466b2c:L466b2c:{c.instructions+=5;NFSU2_TR(0x466b2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466b2d:{NFSU2_TR(0x466b2d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466b2e:{NFSU2_TR(0x466b2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466b2f:{NFSU2_TR(0x466b2f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B466b31:{NFSU2_TR(0x466b31);
{goto L466b40;}
}
B466b33:L466b33:{c.instructions+=1;NFSU2_TR(0x466b33);
__builtin_memmove((R+28),(R+0),4);
}
B466b35:L466b35:{c.instructions+=2;NFSU2_TR(0x466b35);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466b39:{NFSU2_TR(0x466b39);
__builtin_memmove((R+16),(R+16),4);
}
B466b40:L466b40:{c.instructions+=32;NFSU2_TR(0x466b40);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466b44:{NFSU2_TR(0x466b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466b47:{NFSU2_TR(0x466b47);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B466b4a:{NFSU2_TR(0x466b4a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B466b4c:{NFSU2_TR(0x466b4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466b50:{NFSU2_TR(0x466b50);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466b54:{NFSU2_TR(0x466b54);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B466b57:{NFSU2_TR(0x466b57);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B466b59:{NFSU2_TR(0x466b59);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466b5d:{NFSU2_TR(0x466b5d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B466b61:{NFSU2_TR(0x466b61);
__builtin_memmove((R+4),(R+28),4);
}
B466b63:{NFSU2_TR(0x466b63);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B466b65:{NFSU2_TR(0x466b65);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466b69:{NFSU2_TR(0x466b69);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B466b6d:{NFSU2_TR(0x466b6d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466b71:{NFSU2_TR(0x466b71);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466b75:{NFSU2_TR(0x466b75);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B466b79:{NFSU2_TR(0x466b79);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B466b7d:{NFSU2_TR(0x466b7d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466b81:{NFSU2_TR(0x466b81);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466b85:{NFSU2_TR(0x466b85);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B466b89:{NFSU2_TR(0x466b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B466b8d:{NFSU2_TR(0x466b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466b90:{NFSU2_TR(0x466b90);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B466b93:{NFSU2_TR(0x466b93);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B466b95:{NFSU2_TR(0x466b95);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B466b99:{NFSU2_TR(0x466b99);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B466b9b:{NFSU2_TR(0x466b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B466b9e:{NFSU2_TR(0x466b9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B466ba1:{NFSU2_TR(0x466ba1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B466ba3:{NFSU2_TR(0x466ba3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466ba7:{NFSU2_TR(0x466ba7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L466be8;}}
}
B466ba9:L466ba9:{c.instructions+=16;NFSU2_TR(0x466ba9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B466bab:{NFSU2_TR(0x466bab);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466baf:{NFSU2_TR(0x466baf);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466bb3:{NFSU2_TR(0x466bb3);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B466bb6:{NFSU2_TR(0x466bb6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466bba:{NFSU2_TR(0x466bba);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466bbe:{NFSU2_TR(0x466bbe);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B466bc2:{NFSU2_TR(0x466bc2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xda,0x28"::"a"(ea_):"memory");}
}
B466bc6:{NFSU2_TR(0x466bc6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466bca:{NFSU2_TR(0x466bca);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466bce:{NFSU2_TR(0x466bce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B466bd2:{NFSU2_TR(0x466bd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B466bd5:{NFSU2_TR(0x466bd5);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B466bd7:{NFSU2_TR(0x466bd7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B466bd9:{NFSU2_TR(0x466bd9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B466bdb:{NFSU2_TR(0x466bdb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466b33u);}goto L466b33;}}
}
B466be1:L466be1:{c.instructions+=2;NFSU2_TR(0x466be1);
__builtin_memmove((R+8),(R+4),4);
}
B466be3:{NFSU2_TR(0x466be3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466b33u);}goto L466b33;}
}
B466be8:L466be8:{c.instructions+=2;NFSU2_TR(0x466be8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B466beb:{NFSU2_TR(0x466beb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L466c2f;}}
}
B466bed:L466bed:{c.instructions+=17;NFSU2_TR(0x466bed);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B466bef:{NFSU2_TR(0x466bef);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466bf3:{NFSU2_TR(0x466bf3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466bf7:{NFSU2_TR(0x466bf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B466bfa:{NFSU2_TR(0x466bfa);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B466bfd:{NFSU2_TR(0x466bfd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466c01:{NFSU2_TR(0x466c01);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466c05:{NFSU2_TR(0x466c05);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B466c09:{NFSU2_TR(0x466c09);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xda,0x28"::"a"(ea_):"memory");}
}
B466c0d:{NFSU2_TR(0x466c0d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466c11:{NFSU2_TR(0x466c11);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466c15:{NFSU2_TR(0x466c15);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B466c19:{NFSU2_TR(0x466c19);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B466c1c:{NFSU2_TR(0x466c1c);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B466c1e:{NFSU2_TR(0x466c1e);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B466c22:{NFSU2_TR(0x466c22);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B466c24:{NFSU2_TR(0x466c24);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466b35u);}goto L466b35;}}
}
B466c2a:L466c2a:{c.instructions+=1;NFSU2_TR(0x466c2a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466b33u);}goto L466b33;}
}
B466c2f:L466c2f:{c.instructions+=16;NFSU2_TR(0x466c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466c32:{NFSU2_TR(0x466c32);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466c35:{NFSU2_TR(0x466c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B466c38:{NFSU2_TR(0x466c38);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466c3c:{NFSU2_TR(0x466c3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B466c3d:{NFSU2_TR(0x466c3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B466c3e:{NFSU2_TR(0x466c3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B466c3f:{NFSU2_TR(0x466c3f);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B466c41:{NFSU2_TR(0x466c41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B466c42:{NFSU2_TR(0x466c42);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466c45:{NFSU2_TR(0x466c45);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B466c47:{NFSU2_TR(0x466c47);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B466c49:{NFSU2_TR(0x466c49);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B466c4d:{NFSU2_TR(0x466c4d);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B466c4f:{NFSU2_TR(0x466c4f);
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
B466c52:{NFSU2_TR(0x466c52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466c60:L466c60:{c.instructions+=6;NFSU2_TR(0x466c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B466c63:{NFSU2_TR(0x466c63);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466c67:{NFSU2_TR(0x466c67);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B466c69:{NFSU2_TR(0x466c69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466c6a:{NFSU2_TR(0x466c6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466c6e:{NFSU2_TR(0x466c6e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L466d19;}}
}
B466c74:L466c74:{c.instructions+=5;NFSU2_TR(0x466c74);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466c78:{NFSU2_TR(0x466c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B466c7b:{NFSU2_TR(0x466c7b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B466c7f:{NFSU2_TR(0x466c7f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B466c81:{NFSU2_TR(0x466c81);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L466d19;}}
}
B466c87:L466c87:{c.instructions+=5;NFSU2_TR(0x466c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B466c8d:{NFSU2_TR(0x466c8d);
__builtin_memmove((R+0),(R+8),4);
}
B466c8f:{NFSU2_TR(0x466c8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B466c92:{NFSU2_TR(0x466c92);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B466c94:{NFSU2_TR(0x466c94);
if(r1(R+518)){{goto L466ca4;}}
}
B466c96:L466c96:{c.instructions+=2;NFSU2_TR(0x466c96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466c97:{NFSU2_TR(0x466c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x466c9cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466590u);}goto L466590;}
}
B466c9c:L466c9c:{c.instructions+=2;NFSU2_TR(0x466c9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466ca0:{NFSU2_TR(0x466ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466ca4:L466ca4:{c.instructions+=5;NFSU2_TR(0x466ca4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466ca8:{NFSU2_TR(0x466ca8);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1full))));
}
B466cab:{NFSU2_TR(0x466cab);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B466cad:{NFSU2_TR(0x466cad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B466caf:{NFSU2_TR(0x466caf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L466d10;}}
}
B466cb1:L466cb1:{c.instructions+=1;NFSU2_TR(0x466cb1);
{goto L466cc0;}
}
B466cb3:L466cb3:{c.instructions+=2;NFSU2_TR(0x466cb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466cb7:{NFSU2_TR(0x466cb7);
{goto L466cc0;}
}
B466cc0:L466cc0:{c.instructions+=7;NFSU2_TR(0x466cc0);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466cc4:{NFSU2_TR(0x466cc4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466cc8:{NFSU2_TR(0x466cc8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466ccc:{NFSU2_TR(0x466ccc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdf,0x18"::"a"(ea_):"memory");}
}
B466cd0:{NFSU2_TR(0x466cd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466cd4:{NFSU2_TR(0x466cd4);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x8000ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B466cd8:{NFSU2_TR(0x466cd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L466ce6;}}
}
B466cda:L466cda:{c.instructions+=3;NFSU2_TR(0x466cda);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466cde:{NFSU2_TR(0x466cde);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B466ce1:{NFSU2_TR(0x466ce1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7fffull))));
}
B466ce6:L466ce6:{c.instructions+=5;NFSU2_TR(0x466ce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466cea:{NFSU2_TR(0x466cea);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B466ceb:{NFSU2_TR(0x466ceb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B466cee:{NFSU2_TR(0x466cee);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B466cf2:{NFSU2_TR(0x466cf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L466d07;}}
}
B466cf4:L466cf4:{c.instructions+=5;NFSU2_TR(0x466cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466cf8:{NFSU2_TR(0x466cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466cfe:{NFSU2_TR(0x466cfe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B466cff:{NFSU2_TR(0x466cff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466d00:{NFSU2_TR(0x466d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x466d05ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466590u);}goto L466590;}
}
B466d05:L466d05:{c.instructions+=1;NFSU2_TR(0x466d05);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B466d07:L466d07:{c.instructions+=4;NFSU2_TR(0x466d07);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466d0b:{NFSU2_TR(0x466d0b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B466d0c:{NFSU2_TR(0x466d0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B466d0e:{NFSU2_TR(0x466d0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466cb3u);}goto L466cb3;}}
}
B466d10:L466d10:{c.instructions+=4;NFSU2_TR(0x466d10);
w1(R+0,u8(0x1ull));
}
B466d12:{NFSU2_TR(0x466d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B466d13:{NFSU2_TR(0x466d13);
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
B466d16:{NFSU2_TR(0x466d16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466d19:L466d19:{c.instructions+=4;NFSU2_TR(0x466d19);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B466d1b:{NFSU2_TR(0x466d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B466d1c:{NFSU2_TR(0x466d1c);
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
B466d1f:{NFSU2_TR(0x466d1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B466d30:L466d30:{c.instructions+=9;NFSU2_TR(0x466d30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x254ull))));
}
B466d36:{NFSU2_TR(0x466d36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466d37:{NFSU2_TR(0x466d37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466d38:{NFSU2_TR(0x466d38);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466d3c:{NFSU2_TR(0x466d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466d3f:{NFSU2_TR(0x466d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466d42:{NFSU2_TR(0x466d42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466d43:{NFSU2_TR(0x466d43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466d44:{NFSU2_TR(0x466d44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x466d49ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466af0u);}goto L466af0;}
}
B466d49:L466d49:{c.instructions+=15;NFSU2_TR(0x466d49);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466d4d:{NFSU2_TR(0x466d4d);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466d50:{NFSU2_TR(0x466d50);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466d54:{NFSU2_TR(0x466d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466d57:{NFSU2_TR(0x466d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B466d5a:{NFSU2_TR(0x466d5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466d5e:{NFSU2_TR(0x466d5e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466d62:{NFSU2_TR(0x466d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466d65:{NFSU2_TR(0x466d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466d68:{NFSU2_TR(0x466d68);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B466d6a:{NFSU2_TR(0x466d6a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B466d6c:{NFSU2_TR(0x466d6c);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B466d6f:{NFSU2_TR(0x466d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466d73:{NFSU2_TR(0x466d73);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466d77:{NFSU2_TR(0x466d77);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L466f3b;}}
}
B466d7d:L466d7d:{c.instructions+=4;NFSU2_TR(0x466d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466d80:{NFSU2_TR(0x466d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466d83:{NFSU2_TR(0x466d83);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466d84:{NFSU2_TR(0x466d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x466d89ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466af0u);}goto L466af0;}
}
B466d89:L466d89:{c.instructions+=8;NFSU2_TR(0x466d89);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466d8d:{NFSU2_TR(0x466d8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466d91:{NFSU2_TR(0x466d91);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466d94:{NFSU2_TR(0x466d94);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466d98:{NFSU2_TR(0x466d98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466d99:{NFSU2_TR(0x466d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466d9c:{NFSU2_TR(0x466d9c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466da0:{NFSU2_TR(0x466da0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x466da5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4669d0u);}goto L4669d0;}
}
B466da5:L466da5:{c.instructions+=7;NFSU2_TR(0x466da5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B466da9:{NFSU2_TR(0x466da9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466dad:{NFSU2_TR(0x466dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466db0:{NFSU2_TR(0x466db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466db3:{NFSU2_TR(0x466db3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466db4:{NFSU2_TR(0x466db4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466db8:{NFSU2_TR(0x466db8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x466dbdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4669d0u);}goto L4669d0;}
}
B466dbd:L466dbd:{c.instructions+=34;NFSU2_TR(0x466dbd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B466dc1:{NFSU2_TR(0x466dc1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466dc5:{NFSU2_TR(0x466dc5);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466dc8:{NFSU2_TR(0x466dc8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B466dcc:{NFSU2_TR(0x466dcc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466dd0:{NFSU2_TR(0x466dd0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B466dd4:{NFSU2_TR(0x466dd4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466dd8:{NFSU2_TR(0x466dd8);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466ddb:{NFSU2_TR(0x466ddb);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B466dde:{NFSU2_TR(0x466dde);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B466de2:{NFSU2_TR(0x466de2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466de6:{NFSU2_TR(0x466de6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B466dea:{NFSU2_TR(0x466dea);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466dee:{NFSU2_TR(0x466dee);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466df2:{NFSU2_TR(0x466df2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B466df6:{NFSU2_TR(0x466df6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466dfa:{NFSU2_TR(0x466dfa);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466dfe:{NFSU2_TR(0x466dfe);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B466e02:{NFSU2_TR(0x466e02);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B466e06:{NFSU2_TR(0x466e06);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466e0a:{NFSU2_TR(0x466e0a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466e0e:{NFSU2_TR(0x466e0e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B466e12:{NFSU2_TR(0x466e12);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B466e16:{NFSU2_TR(0x466e16);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466e1a:{NFSU2_TR(0x466e1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466e1e:{NFSU2_TR(0x466e1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466e22:{NFSU2_TR(0x466e22);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B466e26:{NFSU2_TR(0x466e26);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B466e29:{NFSU2_TR(0x466e29);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B466e2b:{NFSU2_TR(0x466e2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466e2f:{NFSU2_TR(0x466e2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B466e32:{NFSU2_TR(0x466e32);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B466e34:{NFSU2_TR(0x466e34);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B466e36:{NFSU2_TR(0x466e36);
if(r1(R+518)){{goto L466e98;}}
}
B466e38:L466e38:{c.instructions+=5;NFSU2_TR(0x466e38);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466e3c:{NFSU2_TR(0x466e3c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B466e40:{NFSU2_TR(0x466e40);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B466e42:{NFSU2_TR(0x466e42);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B466e45:{NFSU2_TR(0x466e45);
if(r1(R+514)){{goto L466e66;}}
}
B466e47:L466e47:{c.instructions+=9;NFSU2_TR(0x466e47);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466e4b:{NFSU2_TR(0x466e4b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B466e4f:{NFSU2_TR(0x466e4f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xda,0x28"::"a"(ea_):"memory");}
}
B466e53:{NFSU2_TR(0x466e53);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466e57:{NFSU2_TR(0x466e57);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466e5b:{NFSU2_TR(0x466e5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B466e5f:{NFSU2_TR(0x466e5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B466e62:{NFSU2_TR(0x466e62);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B466e64:{NFSU2_TR(0x466e64);
{goto L466e83;}
}
B466e66:L466e66:{c.instructions+=8;NFSU2_TR(0x466e66);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466e6a:{NFSU2_TR(0x466e6a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B466e6e:{NFSU2_TR(0x466e6e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B466e72:{NFSU2_TR(0x466e72);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466e76:{NFSU2_TR(0x466e76);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B466e7a:{NFSU2_TR(0x466e7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466e7e:{NFSU2_TR(0x466e7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B466e81:{NFSU2_TR(0x466e81);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B466e83:L466e83:{c.instructions+=5;NFSU2_TR(0x466e83);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466e87:{NFSU2_TR(0x466e87);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466e8b:{NFSU2_TR(0x466e8b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B466e8f:{NFSU2_TR(0x466e8f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B466e93:{NFSU2_TR(0x466e93);
{goto L466f31;}
}
B466e98:L466e98:{c.instructions+=21;NFSU2_TR(0x466e98);
{u32 ea_=u32(u32(7899280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466e9e:{NFSU2_TR(0x466e9e);
{u32 ea_=u32(u32(7899284u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B466ea4:{NFSU2_TR(0x466ea4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B466ea8:{NFSU2_TR(0x466ea8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B466eaa:{NFSU2_TR(0x466eaa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466eae:{NFSU2_TR(0x466eae);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466eb2:{NFSU2_TR(0x466eb2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B466eb6:{NFSU2_TR(0x466eb6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xda,0x28"::"a"(ea_):"memory");}
}
B466eba:{NFSU2_TR(0x466eba);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466ebe:{NFSU2_TR(0x466ebe);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466ec2:{NFSU2_TR(0x466ec2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466ec6:{NFSU2_TR(0x466ec6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B466ec8:{NFSU2_TR(0x466ec8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466ecc:{NFSU2_TR(0x466ecc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B466ecf:{NFSU2_TR(0x466ecf);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B466ed1:{NFSU2_TR(0x466ed1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466ed5:{NFSU2_TR(0x466ed5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466ed9:{NFSU2_TR(0x466ed9);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B466edb:{NFSU2_TR(0x466edb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B466edd:{NFSU2_TR(0x466edd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B466ee0:{NFSU2_TR(0x466ee0);
if(r1(R+514)){{goto L466f37;}}
}
B466ee2:L466ee2:{c.instructions+=7;NFSU2_TR(0x466ee2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466ee6:{NFSU2_TR(0x466ee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466eea:{NFSU2_TR(0x466eea);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B466ef0:{NFSU2_TR(0x466ef0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466ef4:{NFSU2_TR(0x466ef4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B466ef6:{NFSU2_TR(0x466ef6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B466ef9:{NFSU2_TR(0x466ef9);
if(r1(R+514)){{goto L466f0c;}}
}
B466efb:L466efb:{c.instructions+=3;NFSU2_TR(0x466efb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466eff:{NFSU2_TR(0x466eff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466f00:{NFSU2_TR(0x466f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x466f05ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466560u);}goto L466560;}
}
B466f05:L466f05:{c.instructions+=3;NFSU2_TR(0x466f05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B466f08:{NFSU2_TR(0x466f08);
__builtin_memmove((R+12),(R+0),4);
}
B466f0a:{NFSU2_TR(0x466f0a);
{goto L466f29;}
}
B466f0c:L466f0c:{c.instructions+=8;NFSU2_TR(0x466f0c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466f10:{NFSU2_TR(0x466f10);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B466f14:{NFSU2_TR(0x466f14);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B466f18:{NFSU2_TR(0x466f18);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466f1c:{NFSU2_TR(0x466f1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B466f20:{NFSU2_TR(0x466f20);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466f24:{NFSU2_TR(0x466f24);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B466f27:{NFSU2_TR(0x466f27);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B466f29:L466f29:{c.instructions+=2;NFSU2_TR(0x466f29);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466f2d:{NFSU2_TR(0x466f2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466f31:L466f31:{c.instructions+=2;NFSU2_TR(0x466f31);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B466f33:{NFSU2_TR(0x466f33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L466f43;}}
}
B466f35:L466f35:{c.instructions+=1;NFSU2_TR(0x466f35);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B466f37:L466f37:{c.instructions+=1;NFSU2_TR(0x466f37);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466f3b:L466f3b:{c.instructions+=2;NFSU2_TR(0x466f3b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466f41:{NFSU2_TR(0x466f41);
{goto L466f47;}
}
B466f43:L466f43:{c.instructions+=1;NFSU2_TR(0x466f43);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466f47:L466f47:{c.instructions+=16;NFSU2_TR(0x466f47);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466f4a:{NFSU2_TR(0x466f4a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B466f4c:{NFSU2_TR(0x466f4c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466f50:{NFSU2_TR(0x466f50);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B466f52:{NFSU2_TR(0x466f52);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B466f56:{NFSU2_TR(0x466f56);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B466f5a:{NFSU2_TR(0x466f5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x264ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466f61:{NFSU2_TR(0x466f61);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466f65:{NFSU2_TR(0x466f65);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B466f69:{NFSU2_TR(0x466f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466f6c:{NFSU2_TR(0x466f6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466f6d:{NFSU2_TR(0x466f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466f70:{NFSU2_TR(0x466f70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466f71:{NFSU2_TR(0x466f71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466f72:{NFSU2_TR(0x466f72);
__builtin_memmove((R+28),(R+24),4);
}
B466f74:{NFSU2_TR(0x466f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x466f79ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466c60u);}goto L466c60;}
}
B466f79:L466f79:{c.instructions+=8;NFSU2_TR(0x466f79);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466f7d:{NFSU2_TR(0x466f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B466f80:{NFSU2_TR(0x466f80);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466f84:{NFSU2_TR(0x466f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B466f87:{NFSU2_TR(0x466f87);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466f8b:{NFSU2_TR(0x466f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466f8e:{NFSU2_TR(0x466f8e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B466f90:{NFSU2_TR(0x466f90);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L466f9d;}}
}
B466f92:L466f92:{c.instructions+=2;NFSU2_TR(0x466f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B466f99:{NFSU2_TR(0x466f99);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466f9d:L466f9d:{c.instructions+=2;NFSU2_TR(0x466f9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B466f9f:{NFSU2_TR(0x466f9f);
if(r1(R+518)){TAIL_STATIC(0x4670dau,467);}
}
B466fa5:L466fa5:{c.instructions+=9;NFSU2_TR(0x466fa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x264ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466fac:{NFSU2_TR(0x466fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466faf:{NFSU2_TR(0x466faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B466fb2:{NFSU2_TR(0x466fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466fb5:{NFSU2_TR(0x466fb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466fb6:{NFSU2_TR(0x466fb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466fb7:{NFSU2_TR(0x466fb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466fb8:{NFSU2_TR(0x466fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466fbb:{NFSU2_TR(0x466fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x466fc0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466c60u);}goto L466c60;}
}
B466fc0:L466fc0:{c.instructions+=5;NFSU2_TR(0x466fc0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466fc4:{NFSU2_TR(0x466fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466fc7:{NFSU2_TR(0x466fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466fca:{NFSU2_TR(0x466fca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466fcb:{NFSU2_TR(0x466fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x466fd0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466af0u);}goto L466af0;}
}
B466fd0:L466fd0:{c.instructions+=8;NFSU2_TR(0x466fd0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B466fd4:{NFSU2_TR(0x466fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466fd8:{NFSU2_TR(0x466fd8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466fd9:{NFSU2_TR(0x466fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466fdc:{NFSU2_TR(0x466fdc);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B466fde:{NFSU2_TR(0x466fde);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B466fe1:{NFSU2_TR(0x466fe1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B466fe3:{NFSU2_TR(0x466fe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x466fe8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x466910u);}goto L466910;}
}
B466fe8:L466fe8:{c.instructions+=9;NFSU2_TR(0x466fe8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466fec:{NFSU2_TR(0x466fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B466fef:{NFSU2_TR(0x466fef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B466ff3:{NFSU2_TR(0x466ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B466ff6:{NFSU2_TR(0x466ff6);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B466ffa:{NFSU2_TR(0x466ffa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466ffb:{NFSU2_TR(0x466ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B466ffe:{NFSU2_TR(0x466ffe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B466fff:{NFSU2_TR(0x466fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x467002u,467);
}
XIT:NFSU2_TR_EXIT(0x466,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
