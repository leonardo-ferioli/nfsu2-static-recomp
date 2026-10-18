#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_499(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x630,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x630,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_630(u8* __restrict R,Cpu& c);
u32 page_630(Cpu& c){return body_630(c.regs.data(),c);}
__attribute__((noinline)) u32 body_630(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x630003:goto L630003;
case 0x630005:c.instructions+=69;goto B630005;
case 0x63000c:c.instructions+=68;goto B63000c;
case 0x630010:c.instructions+=67;goto B630010;
case 0x630012:c.instructions+=66;goto B630012;
case 0x630019:c.instructions+=65;goto B630019;
case 0x630020:c.instructions+=64;goto B630020;
case 0x630024:c.instructions+=63;goto B630024;
case 0x63002b:c.instructions+=62;goto B63002b;
case 0x63002f:c.instructions+=61;goto B63002f;
case 0x630031:c.instructions+=60;goto B630031;
case 0x630038:c.instructions+=59;goto B630038;
case 0x63003c:c.instructions+=58;goto B63003c;
case 0x63003e:c.instructions+=57;goto B63003e;
case 0x630045:c.instructions+=56;goto B630045;
case 0x630049:c.instructions+=55;goto B630049;
case 0x63004b:c.instructions+=54;goto B63004b;
case 0x630052:c.instructions+=53;goto B630052;
case 0x630059:c.instructions+=52;goto B630059;
case 0x63005d:c.instructions+=51;goto B63005d;
case 0x630064:c.instructions+=50;goto B630064;
case 0x630068:c.instructions+=49;goto B630068;
case 0x63006a:c.instructions+=48;goto B63006a;
case 0x630071:c.instructions+=47;goto B630071;
case 0x630075:c.instructions+=46;goto B630075;
case 0x630077:c.instructions+=45;goto B630077;
case 0x63007e:c.instructions+=44;goto B63007e;
case 0x630082:c.instructions+=43;goto B630082;
case 0x630084:c.instructions+=42;goto B630084;
case 0x63008b:c.instructions+=41;goto B63008b;
case 0x630092:c.instructions+=40;goto B630092;
case 0x630096:c.instructions+=39;goto B630096;
case 0x63009d:c.instructions+=38;goto B63009d;
case 0x6300a1:c.instructions+=37;goto B6300a1;
case 0x6300a3:c.instructions+=36;goto B6300a3;
case 0x6300aa:c.instructions+=35;goto B6300aa;
case 0x6300ae:c.instructions+=34;goto B6300ae;
case 0x6300b0:c.instructions+=33;goto B6300b0;
case 0x6300b7:c.instructions+=32;goto B6300b7;
case 0x6300bb:c.instructions+=31;goto B6300bb;
case 0x6300bd:c.instructions+=30;goto B6300bd;
case 0x6300c4:c.instructions+=29;goto B6300c4;
case 0x6300cb:c.instructions+=28;goto B6300cb;
case 0x6300cf:c.instructions+=27;goto B6300cf;
case 0x6300d6:c.instructions+=26;goto B6300d6;
case 0x6300da:c.instructions+=25;goto B6300da;
case 0x6300dc:c.instructions+=24;goto B6300dc;
case 0x6300e3:c.instructions+=23;goto B6300e3;
case 0x6300e7:c.instructions+=22;goto B6300e7;
case 0x6300e9:c.instructions+=21;goto B6300e9;
case 0x6300f0:c.instructions+=20;goto B6300f0;
case 0x6300f4:c.instructions+=19;goto B6300f4;
case 0x6300f6:c.instructions+=18;goto B6300f6;
case 0x6300fd:c.instructions+=17;goto B6300fd;
case 0x630104:c.instructions+=16;goto B630104;
case 0x630108:c.instructions+=15;goto B630108;
case 0x63010f:c.instructions+=14;goto B63010f;
case 0x630113:c.instructions+=13;goto B630113;
case 0x630117:c.instructions+=12;goto B630117;
case 0x630118:c.instructions+=11;goto B630118;
case 0x63011c:c.instructions+=10;goto B63011c;
case 0x63011e:c.instructions+=9;goto B63011e;
case 0x630125:c.instructions+=8;goto B630125;
case 0x630126:c.instructions+=7;goto B630126;
case 0x63012a:c.instructions+=6;goto B63012a;
case 0x63012c:c.instructions+=5;goto B63012c;
case 0x630133:c.instructions+=4;goto B630133;
case 0x630137:c.instructions+=3;goto B630137;
case 0x630139:c.instructions+=2;goto B630139;
case 0x630140:c.instructions+=1;goto B630140;
case 0x630145:goto L630145;
case 0x630149:c.instructions+=197;goto B630149;
case 0x63014c:c.instructions+=196;goto B63014c;
case 0x630150:c.instructions+=195;goto B630150;
case 0x630152:c.instructions+=194;goto B630152;
case 0x630154:c.instructions+=193;goto B630154;
case 0x630158:c.instructions+=192;goto B630158;
case 0x63015b:c.instructions+=191;goto B63015b;
case 0x63015d:c.instructions+=190;goto B63015d;
case 0x630161:c.instructions+=189;goto B630161;
case 0x630164:c.instructions+=188;goto B630164;
case 0x630166:c.instructions+=187;goto B630166;
case 0x63016d:c.instructions+=186;goto B63016d;
case 0x630171:c.instructions+=185;goto B630171;
case 0x630174:c.instructions+=184;goto B630174;
case 0x630178:c.instructions+=183;goto B630178;
case 0x63017b:c.instructions+=182;goto B63017b;
case 0x63017d:c.instructions+=181;goto B63017d;
case 0x630181:c.instructions+=180;goto B630181;
case 0x630184:c.instructions+=179;goto B630184;
case 0x630186:c.instructions+=178;goto B630186;
case 0x63018a:c.instructions+=177;goto B63018a;
case 0x63018d:c.instructions+=176;goto B63018d;
case 0x63018f:c.instructions+=175;goto B63018f;
case 0x630196:c.instructions+=174;goto B630196;
case 0x63019a:c.instructions+=173;goto B63019a;
case 0x63019d:c.instructions+=172;goto B63019d;
case 0x6301a1:c.instructions+=171;goto B6301a1;
case 0x6301a4:c.instructions+=170;goto B6301a4;
case 0x6301a6:c.instructions+=169;goto B6301a6;
case 0x6301aa:c.instructions+=168;goto B6301aa;
case 0x6301ad:c.instructions+=167;goto B6301ad;
case 0x6301af:c.instructions+=166;goto B6301af;
case 0x6301b3:c.instructions+=165;goto B6301b3;
case 0x6301b6:c.instructions+=164;goto B6301b6;
case 0x6301b8:c.instructions+=163;goto B6301b8;
case 0x6301bf:c.instructions+=162;goto B6301bf;
case 0x6301c3:c.instructions+=161;goto B6301c3;
case 0x6301c6:c.instructions+=160;goto B6301c6;
case 0x6301ca:c.instructions+=159;goto B6301ca;
case 0x6301cd:c.instructions+=158;goto B6301cd;
case 0x6301cf:c.instructions+=157;goto B6301cf;
case 0x6301d3:c.instructions+=156;goto B6301d3;
case 0x6301d6:c.instructions+=155;goto B6301d6;
case 0x6301d8:c.instructions+=154;goto B6301d8;
case 0x6301dc:c.instructions+=153;goto B6301dc;
case 0x6301df:c.instructions+=152;goto B6301df;
case 0x6301e1:c.instructions+=151;goto B6301e1;
case 0x6301e8:c.instructions+=150;goto B6301e8;
case 0x6301ec:c.instructions+=149;goto B6301ec;
case 0x6301ef:c.instructions+=148;goto B6301ef;
case 0x6301f3:c.instructions+=147;goto B6301f3;
case 0x6301f5:c.instructions+=146;goto B6301f5;
case 0x6301f7:c.instructions+=145;goto B6301f7;
case 0x6301fb:c.instructions+=144;goto B6301fb;
case 0x6301fe:c.instructions+=143;goto B6301fe;
case 0x630200:c.instructions+=142;goto B630200;
case 0x630204:c.instructions+=141;goto B630204;
case 0x630207:c.instructions+=140;goto B630207;
case 0x630209:c.instructions+=139;goto B630209;
case 0x630210:c.instructions+=138;goto B630210;
case 0x630214:c.instructions+=137;goto B630214;
case 0x630217:c.instructions+=136;goto B630217;
case 0x63021b:c.instructions+=135;goto B63021b;
case 0x63021e:c.instructions+=134;goto B63021e;
case 0x630220:c.instructions+=133;goto B630220;
case 0x630224:c.instructions+=132;goto B630224;
case 0x630227:c.instructions+=131;goto B630227;
case 0x630229:c.instructions+=130;goto B630229;
case 0x63022d:c.instructions+=129;goto B63022d;
case 0x630230:c.instructions+=128;goto B630230;
case 0x630232:c.instructions+=127;goto B630232;
case 0x630239:c.instructions+=126;goto B630239;
case 0x63023d:c.instructions+=125;goto B63023d;
case 0x630240:c.instructions+=124;goto B630240;
case 0x630244:c.instructions+=123;goto B630244;
case 0x630247:c.instructions+=122;goto B630247;
case 0x630249:c.instructions+=121;goto B630249;
case 0x63024d:c.instructions+=120;goto B63024d;
case 0x630250:c.instructions+=119;goto B630250;
case 0x630252:c.instructions+=118;goto B630252;
case 0x630256:c.instructions+=117;goto B630256;
case 0x630259:c.instructions+=116;goto B630259;
case 0x63025b:c.instructions+=115;goto B63025b;
case 0x630262:c.instructions+=114;goto B630262;
case 0x630266:c.instructions+=113;goto B630266;
case 0x630269:c.instructions+=112;goto B630269;
case 0x63026d:c.instructions+=111;goto B63026d;
case 0x630270:c.instructions+=110;goto B630270;
case 0x630272:c.instructions+=109;goto B630272;
case 0x630276:c.instructions+=108;goto B630276;
case 0x630279:c.instructions+=107;goto B630279;
case 0x63027b:c.instructions+=106;goto B63027b;
case 0x63027f:c.instructions+=105;goto B63027f;
case 0x630282:c.instructions+=104;goto B630282;
case 0x630284:c.instructions+=103;goto B630284;
case 0x63028b:c.instructions+=102;goto B63028b;
case 0x63028f:c.instructions+=101;goto B63028f;
case 0x630292:c.instructions+=100;goto B630292;
case 0x630296:c.instructions+=99;goto B630296;
case 0x630298:c.instructions+=98;goto B630298;
case 0x63029a:c.instructions+=97;goto B63029a;
case 0x63029e:c.instructions+=96;goto B63029e;
case 0x6302a1:c.instructions+=95;goto B6302a1;
case 0x6302a3:c.instructions+=94;goto B6302a3;
case 0x6302a7:c.instructions+=93;goto B6302a7;
case 0x6302aa:c.instructions+=92;goto B6302aa;
case 0x6302ac:c.instructions+=91;goto B6302ac;
case 0x6302b3:c.instructions+=90;goto B6302b3;
case 0x6302b7:c.instructions+=89;goto B6302b7;
case 0x6302ba:c.instructions+=88;goto B6302ba;
case 0x6302be:c.instructions+=87;goto B6302be;
case 0x6302c1:c.instructions+=86;goto B6302c1;
case 0x6302c3:c.instructions+=85;goto B6302c3;
case 0x6302c7:c.instructions+=84;goto B6302c7;
case 0x6302ca:c.instructions+=83;goto B6302ca;
case 0x6302cc:c.instructions+=82;goto B6302cc;
case 0x6302d0:c.instructions+=81;goto B6302d0;
case 0x6302d3:c.instructions+=80;goto B6302d3;
case 0x6302d5:c.instructions+=79;goto B6302d5;
case 0x6302dc:c.instructions+=78;goto B6302dc;
case 0x6302e0:c.instructions+=77;goto B6302e0;
case 0x6302e3:c.instructions+=76;goto B6302e3;
case 0x6302e7:c.instructions+=75;goto B6302e7;
case 0x6302ea:c.instructions+=74;goto B6302ea;
case 0x6302ec:c.instructions+=73;goto B6302ec;
case 0x6302f0:c.instructions+=72;goto B6302f0;
case 0x6302f3:c.instructions+=71;goto B6302f3;
case 0x6302f5:c.instructions+=70;goto B6302f5;
case 0x6302f9:c.instructions+=69;goto B6302f9;
case 0x6302fc:c.instructions+=68;goto B6302fc;
case 0x6302fe:c.instructions+=67;goto B6302fe;
case 0x630305:c.instructions+=66;goto B630305;
case 0x630309:c.instructions+=65;goto B630309;
case 0x63030c:c.instructions+=64;goto B63030c;
case 0x630310:c.instructions+=63;goto B630310;
case 0x630313:c.instructions+=62;goto B630313;
case 0x630315:c.instructions+=61;goto B630315;
case 0x630319:c.instructions+=60;goto B630319;
case 0x63031c:c.instructions+=59;goto B63031c;
case 0x63031e:c.instructions+=58;goto B63031e;
case 0x630322:c.instructions+=57;goto B630322;
case 0x630325:c.instructions+=56;goto B630325;
case 0x630327:c.instructions+=55;goto B630327;
case 0x63032e:c.instructions+=54;goto B63032e;
case 0x630332:c.instructions+=53;goto B630332;
case 0x630335:c.instructions+=52;goto B630335;
case 0x630339:c.instructions+=51;goto B630339;
case 0x63033b:c.instructions+=50;goto B63033b;
case 0x63033d:c.instructions+=49;goto B63033d;
case 0x630341:c.instructions+=48;goto B630341;
case 0x630344:c.instructions+=47;goto B630344;
case 0x630346:c.instructions+=46;goto B630346;
case 0x63034a:c.instructions+=45;goto B63034a;
case 0x63034d:c.instructions+=44;goto B63034d;
case 0x63034f:c.instructions+=43;goto B63034f;
case 0x630356:c.instructions+=42;goto B630356;
case 0x63035a:c.instructions+=41;goto B63035a;
case 0x63035d:c.instructions+=40;goto B63035d;
case 0x630361:c.instructions+=39;goto B630361;
case 0x630364:c.instructions+=38;goto B630364;
case 0x630366:c.instructions+=37;goto B630366;
case 0x63036a:c.instructions+=36;goto B63036a;
case 0x63036d:c.instructions+=35;goto B63036d;
case 0x63036f:c.instructions+=34;goto B63036f;
case 0x630373:c.instructions+=33;goto B630373;
case 0x630376:c.instructions+=32;goto B630376;
case 0x630378:c.instructions+=31;goto B630378;
case 0x63037f:c.instructions+=30;goto B63037f;
case 0x630383:c.instructions+=29;goto B630383;
case 0x630386:c.instructions+=28;goto B630386;
case 0x63038a:c.instructions+=27;goto B63038a;
case 0x63038d:c.instructions+=26;goto B63038d;
case 0x630394:c.instructions+=25;goto B630394;
case 0x63039b:c.instructions+=24;goto B63039b;
case 0x63039c:c.instructions+=23;goto B63039c;
case 0x63039e:c.instructions+=22;goto B63039e;
case 0x6303a2:c.instructions+=21;goto B6303a2;
case 0x6303a8:c.instructions+=20;goto B6303a8;
case 0x6303ab:c.instructions+=19;goto B6303ab;
case 0x6303ac:c.instructions+=18;goto B6303ac;
case 0x6303ae:c.instructions+=17;goto B6303ae;
case 0x6303b2:c.instructions+=16;goto B6303b2;
case 0x6303b5:c.instructions+=15;goto B6303b5;
case 0x6303b7:c.instructions+=14;goto B6303b7;
case 0x6303be:c.instructions+=13;goto B6303be;
case 0x6303c2:c.instructions+=12;goto B6303c2;
case 0x6303c5:c.instructions+=11;goto B6303c5;
case 0x6303c9:c.instructions+=10;goto B6303c9;
case 0x6303cc:c.instructions+=9;goto B6303cc;
case 0x6303ce:c.instructions+=8;goto B6303ce;
case 0x6303d2:c.instructions+=7;goto B6303d2;
case 0x6303d5:c.instructions+=6;goto B6303d5;
case 0x6303d7:c.instructions+=5;goto B6303d7;
case 0x6303db:c.instructions+=4;goto B6303db;
case 0x6303de:c.instructions+=3;goto B6303de;
case 0x6303e0:c.instructions+=2;goto B6303e0;
case 0x6303e7:c.instructions+=1;goto B6303e7;
case 0x6303ec:goto L6303ec;
case 0x6303f3:c.instructions+=3;goto B6303f3;
case 0x6303f6:c.instructions+=2;goto B6303f6;
case 0x6303f8:c.instructions+=1;goto B6303f8;
case 0x6303fa:goto L6303fa;
case 0x630401:c.instructions+=1;goto B630401;
case 0x630403:goto L630403;
case 0x63040a:c.instructions+=2;goto B63040a;
case 0x63040c:c.instructions+=1;goto B63040c;
case 0x630412:goto L630412;
case 0x630416:c.instructions+=6;goto B630416;
case 0x630418:c.instructions+=5;goto B630418;
case 0x63041e:c.instructions+=4;goto B63041e;
case 0x630420:c.instructions+=3;goto B630420;
case 0x630421:c.instructions+=2;goto B630421;
case 0x630423:c.instructions+=1;goto B630423;
case 0x630428:goto L630428;
case 0x63042b:c.instructions+=11;goto B63042b;
case 0x630432:c.instructions+=10;goto B630432;
case 0x630439:c.instructions+=9;goto B630439;
case 0x63043b:c.instructions+=8;goto B63043b;
case 0x63043d:c.instructions+=7;goto B63043d;
case 0x630444:c.instructions+=6;goto B630444;
case 0x630445:c.instructions+=5;goto B630445;
case 0x63044a:c.instructions+=4;goto B63044a;
case 0x63044b:c.instructions+=3;goto B63044b;
case 0x63044c:c.instructions+=2;goto B63044c;
case 0x63044d:c.instructions+=1;goto B63044d;
case 0x63044f:goto L63044f;
case 0x630456:c.instructions+=2;goto B630456;
case 0x630458:c.instructions+=1;goto B630458;
case 0x63045a:goto L63045a;
case 0x63045e:c.instructions+=6;goto B63045e;
case 0x630460:c.instructions+=5;goto B630460;
case 0x630462:c.instructions+=4;goto B630462;
case 0x630468:c.instructions+=3;goto B630468;
case 0x630469:c.instructions+=2;goto B630469;
case 0x63046b:c.instructions+=1;goto B63046b;
case 0x630470:goto L630470;
case 0x630477:c.instructions+=11;goto B630477;
case 0x63047e:c.instructions+=10;goto B63047e;
case 0x63047f:c.instructions+=9;goto B63047f;
case 0x630480:c.instructions+=8;goto B630480;
case 0x630487:c.instructions+=7;goto B630487;
case 0x630488:c.instructions+=6;goto B630488;
case 0x63048d:c.instructions+=5;goto B63048d;
case 0x630492:c.instructions+=4;goto B630492;
case 0x630493:c.instructions+=3;goto B630493;
case 0x630494:c.instructions+=2;goto B630494;
case 0x630498:c.instructions+=1;goto B630498;
case 0x63049d:goto L63049d;
case 0x6304a0:c.instructions+=10;goto B6304a0;
case 0x6304a7:c.instructions+=9;goto B6304a7;
case 0x6304ab:c.instructions+=8;goto B6304ab;
case 0x6304ae:c.instructions+=7;goto B6304ae;
case 0x6304b0:c.instructions+=6;goto B6304b0;
case 0x6304b2:c.instructions+=5;goto B6304b2;
case 0x6304b9:c.instructions+=4;goto B6304b9;
case 0x6304ba:c.instructions+=3;goto B6304ba;
case 0x6304bb:c.instructions+=2;goto B6304bb;
case 0x6304bc:c.instructions+=1;goto B6304bc;
case 0x6304bd:goto L6304bd;
case 0x6304bf:c.instructions+=1;goto B6304bf;
case 0x6304c4:goto L6304c4;
case 0x6304cb:c.instructions+=2;goto B6304cb;
case 0x6304cd:c.instructions+=1;goto B6304cd;
case 0x6304d3:goto L6304d3;
case 0x6304d8:c.instructions+=1;goto B6304d8;
case 0x6304dd:goto L6304dd;
case 0x6304e3:c.instructions+=6;goto B6304e3;
case 0x6304ea:c.instructions+=5;goto B6304ea;
case 0x6304f1:c.instructions+=4;goto B6304f1;
case 0x6304f7:c.instructions+=3;goto B6304f7;
case 0x6304f9:c.instructions+=2;goto B6304f9;
case 0x630500:c.instructions+=1;goto B630500;
case 0x630505:goto L630505;
case 0x630507:goto L630507;
case 0x63050e:c.instructions+=5;goto B63050e;
case 0x630514:c.instructions+=4;goto B630514;
case 0x63051b:c.instructions+=3;goto B63051b;
case 0x63051e:c.instructions+=2;goto B63051e;
case 0x630520:c.instructions+=1;goto B630520;
case 0x630525:goto L630525;
case 0x630527:c.instructions+=14;goto B630527;
case 0x63052a:c.instructions+=13;goto B63052a;
case 0x63052b:c.instructions+=12;goto B63052b;
case 0x63052e:c.instructions+=11;goto B63052e;
case 0x630531:c.instructions+=10;goto B630531;
case 0x630533:c.instructions+=9;goto B630533;
case 0x630536:c.instructions+=8;goto B630536;
case 0x630539:c.instructions+=7;goto B630539;
case 0x63053b:c.instructions+=6;goto B63053b;
case 0x63053e:c.instructions+=5;goto B63053e;
case 0x630541:c.instructions+=4;goto B630541;
case 0x630543:c.instructions+=3;goto B630543;
case 0x630546:c.instructions+=2;goto B630546;
case 0x630549:c.instructions+=1;goto B630549;
case 0x63054b:goto L63054b;
case 0x63054f:c.instructions+=5;goto B63054f;
case 0x630551:c.instructions+=4;goto B630551;
case 0x630554:c.instructions+=3;goto B630554;
case 0x63055a:c.instructions+=2;goto B63055a;
case 0x63055c:c.instructions+=1;goto B63055c;
case 0x630562:goto L630562;
case 0x630565:c.instructions+=3;goto B630565;
case 0x630568:c.instructions+=2;goto B630568;
case 0x63056b:c.instructions+=1;goto B63056b;
case 0x630571:goto L630571;
case 0x630577:c.instructions+=5;goto B630577;
case 0x63057d:c.instructions+=4;goto B63057d;
case 0x63057f:c.instructions+=3;goto B63057f;
case 0x630583:c.instructions+=2;goto B630583;
case 0x630587:c.instructions+=1;goto B630587;
case 0x630589:goto L630589;
case 0x63058f:goto L63058f;
case 0x630595:c.instructions+=31;goto B630595;
case 0x63059c:c.instructions+=30;goto B63059c;
case 0x6305a0:c.instructions+=29;goto B6305a0;
case 0x6305a7:c.instructions+=28;goto B6305a7;
case 0x6305ab:c.instructions+=27;goto B6305ab;
case 0x6305af:c.instructions+=26;goto B6305af;
case 0x6305b6:c.instructions+=25;goto B6305b6;
case 0x6305bc:c.instructions+=24;goto B6305bc;
case 0x6305c0:c.instructions+=23;goto B6305c0;
case 0x6305c4:c.instructions+=22;goto B6305c4;
case 0x6305cb:c.instructions+=21;goto B6305cb;
case 0x6305d1:c.instructions+=20;goto B6305d1;
case 0x6305d8:c.instructions+=19;goto B6305d8;
case 0x6305dc:c.instructions+=18;goto B6305dc;
case 0x6305e2:c.instructions+=17;goto B6305e2;
case 0x6305e9:c.instructions+=16;goto B6305e9;
case 0x6305eb:c.instructions+=15;goto B6305eb;
case 0x6305f2:c.instructions+=14;goto B6305f2;
case 0x6305f8:c.instructions+=13;goto B6305f8;
case 0x6305fe:c.instructions+=12;goto B6305fe;
case 0x630605:c.instructions+=11;goto B630605;
case 0x630607:c.instructions+=10;goto B630607;
case 0x63060e:c.instructions+=9;goto B63060e;
case 0x630610:c.instructions+=8;goto B630610;
case 0x630612:c.instructions+=7;goto B630612;
case 0x630614:c.instructions+=6;goto B630614;
case 0x630616:c.instructions+=5;goto B630616;
case 0x63061d:c.instructions+=4;goto B63061d;
case 0x630624:c.instructions+=3;goto B630624;
case 0x63062b:c.instructions+=2;goto B63062b;
case 0x630631:c.instructions+=1;goto B630631;
case 0x630637:goto L630637;
case 0x63063e:c.instructions+=3;goto B63063e;
case 0x630640:c.instructions+=2;goto B630640;
case 0x630647:c.instructions+=1;goto B630647;
case 0x630650:goto L630650;
case 0x630653:c.instructions+=3;goto B630653;
case 0x63065a:c.instructions+=2;goto B63065a;
case 0x63065c:c.instructions+=1;goto B63065c;
case 0x63065e:goto L63065e;
case 0x630662:c.instructions+=5;goto B630662;
case 0x630668:c.instructions+=4;goto B630668;
case 0x630669:c.instructions+=3;goto B630669;
case 0x63066e:c.instructions+=2;goto B63066e;
case 0x630670:c.instructions+=1;goto B630670;
case 0x630675:goto L630675;
case 0x63067c:c.instructions+=3;goto B63067c;
case 0x63067e:c.instructions+=2;goto B63067e;
case 0x630680:c.instructions+=1;goto B630680;
case 0x630682:goto L630682;
case 0x630685:c.instructions+=6;goto B630685;
case 0x63068c:c.instructions+=5;goto B63068c;
case 0x63068e:c.instructions+=4;goto B63068e;
case 0x630690:c.instructions+=3;goto B630690;
case 0x630691:c.instructions+=2;goto B630691;
case 0x630692:c.instructions+=1;goto B630692;
case 0x630694:goto L630694;
case 0x630697:c.instructions+=5;goto B630697;
case 0x63069e:c.instructions+=4;goto B63069e;
case 0x6306a0:c.instructions+=3;goto B6306a0;
case 0x6306a2:c.instructions+=2;goto B6306a2;
case 0x6306a3:c.instructions+=1;goto B6306a3;
case 0x6306a4:goto L6306a4;
case 0x6306a7:c.instructions+=3;goto B6306a7;
case 0x6306a8:c.instructions+=2;goto B6306a8;
case 0x6306a9:c.instructions+=1;goto B6306a9;
case 0x6306ae:goto L6306ae;
case 0x6306b2:goto L6306b2;
case 0x6306b9:c.instructions+=4;goto B6306b9;
case 0x6306ba:c.instructions+=3;goto B6306ba;
case 0x6306bd:c.instructions+=2;goto B6306bd;
case 0x6306c4:c.instructions+=1;goto B6306c4;
case 0x6306c6:goto L6306c6;
case 0x6306cd:c.instructions+=2;goto B6306cd;
case 0x6306cf:c.instructions+=1;goto B6306cf;
case 0x6306d1:goto L6306d1;
case 0x6306d4:c.instructions+=5;goto B6306d4;
case 0x6306d8:c.instructions+=4;goto B6306d8;
case 0x6306db:c.instructions+=3;goto B6306db;
case 0x6306de:c.instructions+=2;goto B6306de;
case 0x6306e0:c.instructions+=1;goto B6306e0;
case 0x6306e6:goto L6306e6;
case 0x6306eb:c.instructions+=1;goto B6306eb;
case 0x6306f0:goto L6306f0;
case 0x6306f3:c.instructions+=3;goto B6306f3;
case 0x6306f5:c.instructions+=2;goto B6306f5;
case 0x6306fc:c.instructions+=1;goto B6306fc;
case 0x630702:goto L630702;
case 0x630708:c.instructions+=7;goto B630708;
case 0x63070f:c.instructions+=6;goto B63070f;
case 0x630716:c.instructions+=5;goto B630716;
case 0x630718:c.instructions+=4;goto B630718;
case 0x63071e:c.instructions+=3;goto B63071e;
case 0x630723:c.instructions+=2;goto B630723;
case 0x63072a:c.instructions+=1;goto B63072a;
case 0x63072c:goto L63072c;
case 0x63072e:goto L63072e;
case 0x630735:c.instructions+=3;goto B630735;
case 0x63073b:c.instructions+=2;goto B63073b;
case 0x63073d:c.instructions+=1;goto B63073d;
case 0x630742:goto L630742;
case 0x630744:c.instructions+=14;goto B630744;
case 0x630747:c.instructions+=13;goto B630747;
case 0x630748:c.instructions+=12;goto B630748;
case 0x63074b:c.instructions+=11;goto B63074b;
case 0x63074e:c.instructions+=10;goto B63074e;
case 0x630750:c.instructions+=9;goto B630750;
case 0x630753:c.instructions+=8;goto B630753;
case 0x630756:c.instructions+=7;goto B630756;
case 0x630758:c.instructions+=6;goto B630758;
case 0x63075b:c.instructions+=5;goto B63075b;
case 0x63075e:c.instructions+=4;goto B63075e;
case 0x630760:c.instructions+=3;goto B630760;
case 0x630763:c.instructions+=2;goto B630763;
case 0x630766:c.instructions+=1;goto B630766;
case 0x630768:goto L630768;
case 0x63076c:c.instructions+=6;goto B63076c;
case 0x63076e:c.instructions+=5;goto B63076e;
case 0x630771:c.instructions+=4;goto B630771;
case 0x630777:c.instructions+=3;goto B630777;
case 0x630779:c.instructions+=2;goto B630779;
case 0x630780:c.instructions+=1;goto B630780;
case 0x630786:goto L630786;
case 0x630789:c.instructions+=3;goto B630789;
case 0x63078b:c.instructions+=2;goto B63078b;
case 0x63078d:c.instructions+=1;goto B63078d;
case 0x630793:goto L630793;
case 0x630799:c.instructions+=5;goto B630799;
case 0x63079e:c.instructions+=4;goto B63079e;
case 0x6307a0:c.instructions+=3;goto B6307a0;
case 0x6307a4:c.instructions+=2;goto B6307a4;
case 0x6307a8:c.instructions+=1;goto B6307a8;
case 0x6307aa:goto L6307aa;
case 0x6307b0:goto L6307b0;
case 0x6307b6:c.instructions+=30;goto B6307b6;
case 0x6307bd:c.instructions+=29;goto B6307bd;
case 0x6307c1:c.instructions+=28;goto B6307c1;
case 0x6307c8:c.instructions+=27;goto B6307c8;
case 0x6307cc:c.instructions+=26;goto B6307cc;
case 0x6307d0:c.instructions+=25;goto B6307d0;
case 0x6307d7:c.instructions+=24;goto B6307d7;
case 0x6307dd:c.instructions+=23;goto B6307dd;
case 0x6307e1:c.instructions+=22;goto B6307e1;
case 0x6307e5:c.instructions+=21;goto B6307e5;
case 0x6307eb:c.instructions+=20;goto B6307eb;
case 0x6307f2:c.instructions+=19;goto B6307f2;
case 0x6307f6:c.instructions+=18;goto B6307f6;
case 0x6307fc:c.instructions+=17;goto B6307fc;
case 0x630803:c.instructions+=16;goto B630803;
case 0x630805:c.instructions+=15;goto B630805;
case 0x63080c:c.instructions+=14;goto B63080c;
case 0x630812:c.instructions+=13;goto B630812;
case 0x630818:c.instructions+=12;goto B630818;
case 0x63081f:c.instructions+=11;goto B63081f;
case 0x630821:c.instructions+=10;goto B630821;
case 0x630828:c.instructions+=9;goto B630828;
case 0x63082a:c.instructions+=8;goto B63082a;
case 0x63082c:c.instructions+=7;goto B63082c;
case 0x63082e:c.instructions+=6;goto B63082e;
case 0x630830:c.instructions+=5;goto B630830;
case 0x630837:c.instructions+=4;goto B630837;
case 0x63083e:c.instructions+=3;goto B63083e;
case 0x630845:c.instructions+=2;goto B630845;
case 0x63084b:c.instructions+=1;goto B63084b;
case 0x630851:goto L630851;
case 0x630853:c.instructions+=3;goto B630853;
case 0x630855:c.instructions+=2;goto B630855;
case 0x63085c:c.instructions+=1;goto B63085c;
case 0x63085e:goto L63085e;
case 0x630861:c.instructions+=5;goto B630861;
case 0x630863:c.instructions+=4;goto B630863;
case 0x630866:c.instructions+=3;goto B630866;
case 0x630869:c.instructions+=2;goto B630869;
case 0x63086c:c.instructions+=1;goto B63086c;
case 0x630873:goto L630873;
case 0x63087a:c.instructions+=2;goto B63087a;
case 0x630881:c.instructions+=1;goto B630881;
case 0x630883:goto L630883;
case 0x630888:goto L630888;
case 0x63088a:c.instructions+=1;goto B63088a;
case 0x63088c:goto L63088c;
case 0x630897:goto L630897;
case 0x630899:c.instructions+=2;goto B630899;
case 0x63089d:c.instructions+=1;goto B63089d;
case 0x63089f:goto L63089f;
case 0x6308a3:goto L6308a3;
case 0x6308a7:c.instructions+=6;goto B6308a7;
case 0x6308aa:c.instructions+=5;goto B6308aa;
case 0x6308ad:c.instructions+=4;goto B6308ad;
case 0x6308b4:c.instructions+=3;goto B6308b4;
case 0x6308b7:c.instructions+=2;goto B6308b7;
case 0x6308b9:c.instructions+=1;goto B6308b9;
case 0x6308bf:goto L6308bf;
case 0x6308c1:c.instructions+=5;goto B6308c1;
case 0x6308c7:c.instructions+=4;goto B6308c7;
case 0x6308c8:c.instructions+=3;goto B6308c8;
case 0x6308cd:c.instructions+=2;goto B6308cd;
case 0x6308cf:c.instructions+=1;goto B6308cf;
case 0x6308d4:goto L6308d4;
case 0x6308db:c.instructions+=5;goto B6308db;
case 0x6308de:c.instructions+=4;goto B6308de;
case 0x6308e1:c.instructions+=3;goto B6308e1;
case 0x6308e4:c.instructions+=2;goto B6308e4;
case 0x6308e6:c.instructions+=1;goto B6308e6;
case 0x6308e8:goto L6308e8;
case 0x6308ee:c.instructions+=2;goto B6308ee;
case 0x6308ef:c.instructions+=1;goto B6308ef;
case 0x6308f1:goto L6308f1;
case 0x6308f7:c.instructions+=1;goto B6308f7;
case 0x6308f8:goto L6308f8;
case 0x6308fd:c.instructions+=1;goto B6308fd;
case 0x630902:goto L630902;
case 0x630906:c.instructions+=3;goto B630906;
case 0x630908:c.instructions+=2;goto B630908;
case 0x63090a:c.instructions+=1;goto B63090a;
case 0x63090c:goto L63090c;
case 0x630913:c.instructions+=8;goto B630913;
case 0x63091a:c.instructions+=7;goto B63091a;
case 0x63091d:c.instructions+=6;goto B63091d;
case 0x63091f:c.instructions+=5;goto B63091f;
case 0x630921:c.instructions+=4;goto B630921;
case 0x630928:c.instructions+=3;goto B630928;
case 0x630929:c.instructions+=2;goto B630929;
case 0x63092a:c.instructions+=1;goto B63092a;
case 0x63092c:goto L63092c;
case 0x630933:c.instructions+=7;goto B630933;
case 0x63093a:c.instructions+=6;goto B63093a;
case 0x63093d:c.instructions+=5;goto B63093d;
case 0x63093f:c.instructions+=4;goto B63093f;
case 0x630941:c.instructions+=3;goto B630941;
case 0x630948:c.instructions+=2;goto B630948;
case 0x630949:c.instructions+=1;goto B630949;
case 0x63094a:goto L63094a;
case 0x63094d:c.instructions+=3;goto B63094d;
case 0x63094e:c.instructions+=2;goto B63094e;
case 0x63094f:c.instructions+=1;goto B63094f;
case 0x630954:goto L630954;
case 0x630958:c.instructions+=4;goto B630958;
case 0x630959:c.instructions+=3;goto B630959;
case 0x63095c:c.instructions+=2;goto B63095c;
case 0x630960:c.instructions+=1;goto B630960;
case 0x630966:goto L630966;
case 0x630969:c.instructions+=3;goto B630969;
case 0x63096b:c.instructions+=2;goto B63096b;
case 0x630972:c.instructions+=1;goto B630972;
case 0x630977:goto L630977;
case 0x63097b:c.instructions+=11;goto B63097b;
case 0x63097f:c.instructions+=10;goto B63097f;
case 0x630983:c.instructions+=9;goto B630983;
case 0x630989:c.instructions+=8;goto B630989;
case 0x630990:c.instructions+=7;goto B630990;
case 0x630997:c.instructions+=6;goto B630997;
case 0x63099a:c.instructions+=5;goto B63099a;
case 0x63099d:c.instructions+=4;goto B63099d;
case 0x63099f:c.instructions+=3;goto B63099f;
case 0x6309a2:c.instructions+=2;goto B6309a2;
case 0x6309a9:c.instructions+=1;goto B6309a9;
case 0x6309b0:goto L6309b0;
case 0x6309b7:c.instructions+=3;goto B6309b7;
case 0x6309b9:c.instructions+=2;goto B6309b9;
case 0x6309bb:c.instructions+=1;goto B6309bb;
case 0x6309c1:goto L6309c1;
case 0x6309c5:c.instructions+=2;goto B6309c5;
case 0x6309c7:c.instructions+=1;goto B6309c7;
case 0x6309cd:goto L6309cd;
case 0x6309d0:c.instructions+=196;goto B6309d0;
case 0x6309d3:c.instructions+=195;goto B6309d3;
case 0x6309d6:c.instructions+=194;goto B6309d6;
case 0x6309d9:c.instructions+=193;goto B6309d9;
case 0x6309db:c.instructions+=192;goto B6309db;
case 0x6309de:c.instructions+=191;goto B6309de;
case 0x6309e0:c.instructions+=190;goto B6309e0;
case 0x6309e2:c.instructions+=189;goto B6309e2;
case 0x6309e5:c.instructions+=188;goto B6309e5;
case 0x6309e8:c.instructions+=187;goto B6309e8;
case 0x6309ea:c.instructions+=186;goto B6309ea;
case 0x6309ee:c.instructions+=185;goto B6309ee;
case 0x6309f1:c.instructions+=184;goto B6309f1;
case 0x6309f4:c.instructions+=183;goto B6309f4;
case 0x6309f7:c.instructions+=182;goto B6309f7;
case 0x6309fa:c.instructions+=181;goto B6309fa;
case 0x6309fc:c.instructions+=180;goto B6309fc;
case 0x6309ff:c.instructions+=179;goto B6309ff;
case 0x630a02:c.instructions+=178;goto B630a02;
case 0x630a04:c.instructions+=177;goto B630a04;
case 0x630a07:c.instructions+=176;goto B630a07;
case 0x630a0a:c.instructions+=175;goto B630a0a;
case 0x630a0c:c.instructions+=174;goto B630a0c;
case 0x630a10:c.instructions+=173;goto B630a10;
case 0x630a13:c.instructions+=172;goto B630a13;
case 0x630a16:c.instructions+=171;goto B630a16;
case 0x630a19:c.instructions+=170;goto B630a19;
case 0x630a1c:c.instructions+=169;goto B630a1c;
case 0x630a1e:c.instructions+=168;goto B630a1e;
case 0x630a21:c.instructions+=167;goto B630a21;
case 0x630a24:c.instructions+=166;goto B630a24;
case 0x630a26:c.instructions+=165;goto B630a26;
case 0x630a29:c.instructions+=164;goto B630a29;
case 0x630a2c:c.instructions+=163;goto B630a2c;
case 0x630a2e:c.instructions+=162;goto B630a2e;
case 0x630a32:c.instructions+=161;goto B630a32;
case 0x630a35:c.instructions+=160;goto B630a35;
case 0x630a38:c.instructions+=159;goto B630a38;
case 0x630a3b:c.instructions+=158;goto B630a3b;
case 0x630a3e:c.instructions+=157;goto B630a3e;
case 0x630a40:c.instructions+=156;goto B630a40;
case 0x630a43:c.instructions+=155;goto B630a43;
case 0x630a46:c.instructions+=154;goto B630a46;
case 0x630a48:c.instructions+=153;goto B630a48;
case 0x630a4b:c.instructions+=152;goto B630a4b;
case 0x630a4e:c.instructions+=151;goto B630a4e;
case 0x630a50:c.instructions+=150;goto B630a50;
case 0x630a54:c.instructions+=149;goto B630a54;
case 0x630a57:c.instructions+=148;goto B630a57;
case 0x630a5a:c.instructions+=147;goto B630a5a;
case 0x630a5c:c.instructions+=146;goto B630a5c;
case 0x630a5f:c.instructions+=145;goto B630a5f;
case 0x630a61:c.instructions+=144;goto B630a61;
case 0x630a64:c.instructions+=143;goto B630a64;
case 0x630a67:c.instructions+=142;goto B630a67;
case 0x630a69:c.instructions+=141;goto B630a69;
case 0x630a6c:c.instructions+=140;goto B630a6c;
case 0x630a6f:c.instructions+=139;goto B630a6f;
case 0x630a71:c.instructions+=138;goto B630a71;
case 0x630a78:c.instructions+=137;goto B630a78;
case 0x630a7b:c.instructions+=136;goto B630a7b;
case 0x630a7e:c.instructions+=135;goto B630a7e;
case 0x630a81:c.instructions+=134;goto B630a81;
case 0x630a84:c.instructions+=133;goto B630a84;
case 0x630a86:c.instructions+=132;goto B630a86;
case 0x630a89:c.instructions+=131;goto B630a89;
case 0x630a8c:c.instructions+=130;goto B630a8c;
case 0x630a8e:c.instructions+=129;goto B630a8e;
case 0x630a91:c.instructions+=128;goto B630a91;
case 0x630a94:c.instructions+=127;goto B630a94;
case 0x630a96:c.instructions+=126;goto B630a96;
case 0x630a9d:c.instructions+=125;goto B630a9d;
case 0x630aa0:c.instructions+=124;goto B630aa0;
case 0x630aa3:c.instructions+=123;goto B630aa3;
case 0x630aa6:c.instructions+=122;goto B630aa6;
case 0x630aa9:c.instructions+=121;goto B630aa9;
case 0x630aab:c.instructions+=120;goto B630aab;
case 0x630aae:c.instructions+=119;goto B630aae;
case 0x630ab1:c.instructions+=118;goto B630ab1;
case 0x630ab3:c.instructions+=117;goto B630ab3;
case 0x630ab6:c.instructions+=116;goto B630ab6;
case 0x630ab9:c.instructions+=115;goto B630ab9;
case 0x630abb:c.instructions+=114;goto B630abb;
case 0x630ac2:c.instructions+=113;goto B630ac2;
case 0x630ac5:c.instructions+=112;goto B630ac5;
case 0x630ac8:c.instructions+=111;goto B630ac8;
case 0x630acb:c.instructions+=110;goto B630acb;
case 0x630ace:c.instructions+=109;goto B630ace;
case 0x630ad0:c.instructions+=108;goto B630ad0;
case 0x630ad3:c.instructions+=107;goto B630ad3;
case 0x630ad6:c.instructions+=106;goto B630ad6;
case 0x630ad8:c.instructions+=105;goto B630ad8;
case 0x630adb:c.instructions+=104;goto B630adb;
case 0x630ade:c.instructions+=103;goto B630ade;
case 0x630ae0:c.instructions+=102;goto B630ae0;
case 0x630ae7:c.instructions+=101;goto B630ae7;
case 0x630aea:c.instructions+=100;goto B630aea;
case 0x630aed:c.instructions+=99;goto B630aed;
case 0x630aef:c.instructions+=98;goto B630aef;
case 0x630af2:c.instructions+=97;goto B630af2;
case 0x630af4:c.instructions+=96;goto B630af4;
case 0x630af7:c.instructions+=95;goto B630af7;
case 0x630afa:c.instructions+=94;goto B630afa;
case 0x630afc:c.instructions+=93;goto B630afc;
case 0x630aff:c.instructions+=92;goto B630aff;
case 0x630b02:c.instructions+=91;goto B630b02;
case 0x630b04:c.instructions+=90;goto B630b04;
case 0x630b0b:c.instructions+=89;goto B630b0b;
case 0x630b0e:c.instructions+=88;goto B630b0e;
case 0x630b11:c.instructions+=87;goto B630b11;
case 0x630b14:c.instructions+=86;goto B630b14;
case 0x630b17:c.instructions+=85;goto B630b17;
case 0x630b19:c.instructions+=84;goto B630b19;
case 0x630b1c:c.instructions+=83;goto B630b1c;
case 0x630b1f:c.instructions+=82;goto B630b1f;
case 0x630b21:c.instructions+=81;goto B630b21;
case 0x630b24:c.instructions+=80;goto B630b24;
case 0x630b27:c.instructions+=79;goto B630b27;
case 0x630b29:c.instructions+=78;goto B630b29;
case 0x630b30:c.instructions+=77;goto B630b30;
case 0x630b33:c.instructions+=76;goto B630b33;
case 0x630b36:c.instructions+=75;goto B630b36;
case 0x630b39:c.instructions+=74;goto B630b39;
case 0x630b3c:c.instructions+=73;goto B630b3c;
case 0x630b3e:c.instructions+=72;goto B630b3e;
case 0x630b41:c.instructions+=71;goto B630b41;
case 0x630b44:c.instructions+=70;goto B630b44;
case 0x630b46:c.instructions+=69;goto B630b46;
case 0x630b49:c.instructions+=68;goto B630b49;
case 0x630b4c:c.instructions+=67;goto B630b4c;
case 0x630b4e:c.instructions+=66;goto B630b4e;
case 0x630b55:c.instructions+=65;goto B630b55;
case 0x630b58:c.instructions+=64;goto B630b58;
case 0x630b5b:c.instructions+=63;goto B630b5b;
case 0x630b5e:c.instructions+=62;goto B630b5e;
case 0x630b61:c.instructions+=61;goto B630b61;
case 0x630b63:c.instructions+=60;goto B630b63;
case 0x630b66:c.instructions+=59;goto B630b66;
case 0x630b69:c.instructions+=58;goto B630b69;
case 0x630b6b:c.instructions+=57;goto B630b6b;
case 0x630b6e:c.instructions+=56;goto B630b6e;
case 0x630b71:c.instructions+=55;goto B630b71;
case 0x630b73:c.instructions+=54;goto B630b73;
case 0x630b7a:c.instructions+=53;goto B630b7a;
case 0x630b7d:c.instructions+=52;goto B630b7d;
case 0x630b80:c.instructions+=51;goto B630b80;
case 0x630b82:c.instructions+=50;goto B630b82;
case 0x630b85:c.instructions+=49;goto B630b85;
case 0x630b87:c.instructions+=48;goto B630b87;
case 0x630b8a:c.instructions+=47;goto B630b8a;
case 0x630b8d:c.instructions+=46;goto B630b8d;
case 0x630b8f:c.instructions+=45;goto B630b8f;
case 0x630b92:c.instructions+=44;goto B630b92;
case 0x630b95:c.instructions+=43;goto B630b95;
case 0x630b97:c.instructions+=42;goto B630b97;
case 0x630b9e:c.instructions+=41;goto B630b9e;
case 0x630ba1:c.instructions+=40;goto B630ba1;
case 0x630ba4:c.instructions+=39;goto B630ba4;
case 0x630ba7:c.instructions+=38;goto B630ba7;
case 0x630baa:c.instructions+=37;goto B630baa;
case 0x630bac:c.instructions+=36;goto B630bac;
case 0x630baf:c.instructions+=35;goto B630baf;
case 0x630bb2:c.instructions+=34;goto B630bb2;
case 0x630bb4:c.instructions+=33;goto B630bb4;
case 0x630bb7:c.instructions+=32;goto B630bb7;
case 0x630bba:c.instructions+=31;goto B630bba;
case 0x630bbc:c.instructions+=30;goto B630bbc;
case 0x630bc3:c.instructions+=29;goto B630bc3;
case 0x630bc6:c.instructions+=28;goto B630bc6;
case 0x630bc9:c.instructions+=27;goto B630bc9;
case 0x630bcc:c.instructions+=26;goto B630bcc;
case 0x630bcf:c.instructions+=25;goto B630bcf;
case 0x630bd1:c.instructions+=24;goto B630bd1;
case 0x630bd4:c.instructions+=23;goto B630bd4;
case 0x630bd7:c.instructions+=22;goto B630bd7;
case 0x630bd9:c.instructions+=21;goto B630bd9;
case 0x630bdc:c.instructions+=20;goto B630bdc;
case 0x630bdf:c.instructions+=19;goto B630bdf;
case 0x630be1:c.instructions+=18;goto B630be1;
case 0x630be8:c.instructions+=17;goto B630be8;
case 0x630beb:c.instructions+=16;goto B630beb;
case 0x630bee:c.instructions+=15;goto B630bee;
case 0x630bf1:c.instructions+=14;goto B630bf1;
case 0x630bf5:c.instructions+=13;goto B630bf5;
case 0x630bf8:c.instructions+=12;goto B630bf8;
case 0x630bf9:c.instructions+=11;goto B630bf9;
case 0x630bfb:c.instructions+=10;goto B630bfb;
case 0x630bfe:c.instructions+=9;goto B630bfe;
case 0x630c01:c.instructions+=8;goto B630c01;
case 0x630c03:c.instructions+=7;goto B630c03;
case 0x630c06:c.instructions+=6;goto B630c06;
case 0x630c09:c.instructions+=5;goto B630c09;
case 0x630c0d:c.instructions+=4;goto B630c0d;
case 0x630c0e:c.instructions+=3;goto B630c0e;
case 0x630c10:c.instructions+=2;goto B630c10;
case 0x630c17:c.instructions+=1;goto B630c17;
case 0x630c1c:goto L630c1c;
case 0x630c21:c.instructions+=3;goto B630c21;
case 0x630c24:c.instructions+=2;goto B630c24;
case 0x630c27:c.instructions+=1;goto B630c27;
case 0x630c29:goto L630c29;
case 0x630c2e:goto L630c2e;
case 0x630c30:c.instructions+=1;goto B630c30;
case 0x630c32:goto L630c32;
case 0x630c39:c.instructions+=22;goto B630c39;
case 0x630c3b:c.instructions+=21;goto B630c3b;
case 0x630c40:c.instructions+=20;goto B630c40;
case 0x630c45:c.instructions+=19;goto B630c45;
case 0x630c49:c.instructions+=18;goto B630c49;
case 0x630c4d:c.instructions+=17;goto B630c4d;
case 0x630c51:c.instructions+=16;goto B630c51;
case 0x630c55:c.instructions+=15;goto B630c55;
case 0x630c59:c.instructions+=14;goto B630c59;
case 0x630c5d:c.instructions+=13;goto B630c5d;
case 0x630c61:c.instructions+=12;goto B630c61;
case 0x630c65:c.instructions+=11;goto B630c65;
case 0x630c69:c.instructions+=10;goto B630c69;
case 0x630c6d:c.instructions+=9;goto B630c6d;
case 0x630c71:c.instructions+=8;goto B630c71;
case 0x630c75:c.instructions+=7;goto B630c75;
case 0x630c79:c.instructions+=6;goto B630c79;
case 0x630c7c:c.instructions+=5;goto B630c7c;
case 0x630c80:c.instructions+=4;goto B630c80;
case 0x630c83:c.instructions+=3;goto B630c83;
case 0x630c8a:c.instructions+=2;goto B630c8a;
case 0x630c91:c.instructions+=1;goto B630c91;
case 0x630c93:goto L630c93;
case 0x630c9a:c.instructions+=1;goto B630c9a;
case 0x630c9c:goto L630c9c;
case 0x630c9f:c.instructions+=1;goto B630c9f;
case 0x630ca1:goto L630ca1;
case 0x630ca5:c.instructions+=5;goto B630ca5;
case 0x630cab:c.instructions+=4;goto B630cab;
case 0x630cac:c.instructions+=3;goto B630cac;
case 0x630cb1:c.instructions+=2;goto B630cb1;
case 0x630cb3:c.instructions+=1;goto B630cb3;
case 0x630cb8:goto L630cb8;
case 0x630cbf:c.instructions+=11;goto B630cbf;
case 0x630cc6:c.instructions+=10;goto B630cc6;
case 0x630ccd:c.instructions+=9;goto B630ccd;
case 0x630ccf:c.instructions+=8;goto B630ccf;
case 0x630cd1:c.instructions+=7;goto B630cd1;
case 0x630cd5:c.instructions+=6;goto B630cd5;
case 0x630cd6:c.instructions+=5;goto B630cd6;
case 0x630cd7:c.instructions+=4;goto B630cd7;
case 0x630cda:c.instructions+=3;goto B630cda;
case 0x630cdb:c.instructions+=2;goto B630cdb;
case 0x630cdc:c.instructions+=1;goto B630cdc;
case 0x630ce1:goto L630ce1;
case 0x630ce8:c.instructions+=11;goto B630ce8;
case 0x630cef:c.instructions+=10;goto B630cef;
case 0x630cf3:c.instructions+=9;goto B630cf3;
case 0x630cf4:c.instructions+=8;goto B630cf4;
case 0x630cf7:c.instructions+=7;goto B630cf7;
case 0x630cfd:c.instructions+=6;goto B630cfd;
case 0x630d00:c.instructions+=5;goto B630d00;
case 0x630d03:c.instructions+=4;goto B630d03;
case 0x630d0a:c.instructions+=3;goto B630d0a;
case 0x630d11:c.instructions+=2;goto B630d11;
case 0x630d15:c.instructions+=1;goto B630d15;
case 0x630d1b:goto L630d1b;
case 0x630d1c:c.instructions+=5;goto B630d1c;
case 0x630d1d:c.instructions+=4;goto B630d1d;
case 0x630d1e:c.instructions+=3;goto B630d1e;
case 0x630d20:c.instructions+=2;goto B630d20;
case 0x630d21:c.instructions+=1;goto B630d21;
case 0x630de0:goto L630de0;
case 0x630de1:c.instructions+=8;goto B630de1;
case 0x630de3:c.instructions+=7;goto B630de3;
case 0x630de6:c.instructions+=6;goto B630de6;
case 0x630dec:c.instructions+=5;goto B630dec;
case 0x630df3:c.instructions+=4;goto B630df3;
case 0x630df4:c.instructions+=3;goto B630df4;
case 0x630df5:c.instructions+=2;goto B630df5;
case 0x630df6:c.instructions+=1;goto B630df6;
case 0x630dfc:goto L630dfc;
case 0x630e01:c.instructions+=2;goto B630e01;
case 0x630e03:c.instructions+=1;goto B630e03;
case 0x630e09:goto L630e09;
case 0x630e0e:goto L630e0e;
case 0x630e14:c.instructions+=4;goto B630e14;
case 0x630e19:c.instructions+=3;goto B630e19;
case 0x630e1d:c.instructions+=2;goto B630e1d;
case 0x630e21:c.instructions+=1;goto B630e21;
case 0x630e26:goto L630e26;
case 0x630e28:c.instructions+=2;goto B630e28;
case 0x630e2c:c.instructions+=1;goto B630e2c;
case 0x630e32:goto L630e32;
case 0x630e34:goto L630e34;
case 0x630e38:c.instructions+=1;goto B630e38;
case 0x630e40:goto L630e40;
case 0x630e43:c.instructions+=3;goto B630e43;
case 0x630e45:c.instructions+=2;goto B630e45;
case 0x630e49:c.instructions+=1;goto B630e49;
case 0x630e4f:goto L630e4f;
case 0x630e55:c.instructions+=2;goto B630e55;
case 0x630e57:c.instructions+=1;goto B630e57;
case 0x630e5d:goto L630e5d;
case 0x630e60:c.instructions+=2;goto B630e60;
case 0x630e62:c.instructions+=1;goto B630e62;
case 0x630e64:goto L630e64;
case 0x630e67:c.instructions+=2;goto B630e67;
case 0x630e6b:c.instructions+=1;goto B630e6b;
case 0x630e71:goto L630e71;
case 0x630e76:c.instructions+=1;goto B630e76;
case 0x630e7c:goto L630e7c;
case 0x630e83:c.instructions+=8;goto B630e83;
case 0x630e8a:c.instructions+=7;goto B630e8a;
case 0x630e90:c.instructions+=6;goto B630e90;
case 0x630e94:c.instructions+=5;goto B630e94;
case 0x630e95:c.instructions+=4;goto B630e95;
case 0x630e9c:c.instructions+=3;goto B630e9c;
case 0x630e9d:c.instructions+=2;goto B630e9d;
case 0x630ea1:c.instructions+=1;goto B630ea1;
case 0x630ea6:goto L630ea6;
case 0x630eac:c.instructions+=8;goto B630eac;
case 0x630eb2:c.instructions+=7;goto B630eb2;
case 0x630eb6:c.instructions+=6;goto B630eb6;
case 0x630ebc:c.instructions+=5;goto B630ebc;
case 0x630ebf:c.instructions+=4;goto B630ebf;
case 0x630ec1:c.instructions+=3;goto B630ec1;
case 0x630ec5:c.instructions+=2;goto B630ec5;
case 0x630ec9:c.instructions+=1;goto B630ec9;
case 0x630ecb:goto L630ecb;
case 0x630ed2:c.instructions+=12;goto B630ed2;
case 0x630ed4:c.instructions+=11;goto B630ed4;
case 0x630edb:c.instructions+=10;goto B630edb;
case 0x630ee2:c.instructions+=9;goto B630ee2;
case 0x630ee4:c.instructions+=8;goto B630ee4;
case 0x630eeb:c.instructions+=7;goto B630eeb;
case 0x630ef2:c.instructions+=6;goto B630ef2;
case 0x630ef4:c.instructions+=5;goto B630ef4;
case 0x630efb:c.instructions+=4;goto B630efb;
case 0x630f01:c.instructions+=3;goto B630f01;
case 0x630f03:c.instructions+=2;goto B630f03;
case 0x630f07:c.instructions+=1;goto B630f07;
case 0x630f0b:goto L630f0b;
case 0x630f0d:c.instructions+=1;goto B630f0d;
case 0x630f12:goto L630f12;
case 0x630f15:c.instructions+=8;goto B630f15;
case 0x630f19:c.instructions+=7;goto B630f19;
case 0x630f1c:c.instructions+=6;goto B630f1c;
case 0x630f22:c.instructions+=5;goto B630f22;
case 0x630f2a:c.instructions+=4;goto B630f2a;
case 0x630f30:c.instructions+=3;goto B630f30;
case 0x630f33:c.instructions+=2;goto B630f33;
case 0x630f34:c.instructions+=1;goto B630f34;
case 0x630f39:goto L630f39;
case 0x630f3f:c.instructions+=2;goto B630f3f;
case 0x630f45:c.instructions+=1;goto B630f45;
case 0x630f4a:goto L630f4a;
case 0x630f4c:c.instructions+=11;goto B630f4c;
case 0x630f51:c.instructions+=10;goto B630f51;
case 0x630f53:c.instructions+=9;goto B630f53;
case 0x630f55:c.instructions+=8;goto B630f55;
case 0x630f58:c.instructions+=7;goto B630f58;
case 0x630f5a:c.instructions+=6;goto B630f5a;
case 0x630f5d:c.instructions+=5;goto B630f5d;
case 0x630f5f:c.instructions+=4;goto B630f5f;
case 0x630f60:c.instructions+=3;goto B630f60;
case 0x630f61:c.instructions+=2;goto B630f61;
case 0x630f62:c.instructions+=1;goto B630f62;
case 0x630f67:goto L630f67;
case 0x630f6a:c.instructions+=57;goto B630f6a;
case 0x630f6d:c.instructions+=56;goto B630f6d;
case 0x630f70:c.instructions+=55;goto B630f70;
case 0x630f73:c.instructions+=54;goto B630f73;
case 0x630f75:c.instructions+=53;goto B630f75;
case 0x630f77:c.instructions+=52;goto B630f77;
case 0x630f7a:c.instructions+=51;goto B630f7a;
case 0x630f7c:c.instructions+=50;goto B630f7c;
case 0x630f7e:c.instructions+=49;goto B630f7e;
case 0x630f80:c.instructions+=48;goto B630f80;
case 0x630f82:c.instructions+=47;goto B630f82;
case 0x630f86:c.instructions+=46;goto B630f86;
case 0x630f89:c.instructions+=45;goto B630f89;
case 0x630f8c:c.instructions+=44;goto B630f8c;
case 0x630f8f:c.instructions+=43;goto B630f8f;
case 0x630f92:c.instructions+=42;goto B630f92;
case 0x630f94:c.instructions+=41;goto B630f94;
case 0x630f97:c.instructions+=40;goto B630f97;
case 0x630f99:c.instructions+=39;goto B630f99;
case 0x630f9b:c.instructions+=38;goto B630f9b;
case 0x630f9e:c.instructions+=37;goto B630f9e;
case 0x630fa0:c.instructions+=36;goto B630fa0;
case 0x630fa2:c.instructions+=35;goto B630fa2;
case 0x630fa6:c.instructions+=34;goto B630fa6;
case 0x630fa9:c.instructions+=33;goto B630fa9;
case 0x630fac:c.instructions+=32;goto B630fac;
case 0x630faf:c.instructions+=31;goto B630faf;
case 0x630fb2:c.instructions+=30;goto B630fb2;
case 0x630fb4:c.instructions+=29;goto B630fb4;
case 0x630fb7:c.instructions+=28;goto B630fb7;
case 0x630fb9:c.instructions+=27;goto B630fb9;
case 0x630fbb:c.instructions+=26;goto B630fbb;
case 0x630fbe:c.instructions+=25;goto B630fbe;
case 0x630fc0:c.instructions+=24;goto B630fc0;
case 0x630fc2:c.instructions+=23;goto B630fc2;
case 0x630fc6:c.instructions+=22;goto B630fc6;
case 0x630fc9:c.instructions+=21;goto B630fc9;
case 0x630fcc:c.instructions+=20;goto B630fcc;
case 0x630fcf:c.instructions+=19;goto B630fcf;
case 0x630fd2:c.instructions+=18;goto B630fd2;
case 0x630fd4:c.instructions+=17;goto B630fd4;
case 0x630fd7:c.instructions+=16;goto B630fd7;
case 0x630fd9:c.instructions+=15;goto B630fd9;
case 0x630fdb:c.instructions+=14;goto B630fdb;
case 0x630fde:c.instructions+=13;goto B630fde;
case 0x630fe0:c.instructions+=12;goto B630fe0;
case 0x630fe2:c.instructions+=11;goto B630fe2;
case 0x630fe6:c.instructions+=10;goto B630fe6;
case 0x630fe9:c.instructions+=9;goto B630fe9;
case 0x630fec:c.instructions+=8;goto B630fec;
case 0x630fef:c.instructions+=7;goto B630fef;
case 0x630ff2:c.instructions+=6;goto B630ff2;
case 0x630ff4:c.instructions+=5;goto B630ff4;
case 0x630ff7:c.instructions+=4;goto B630ff7;
case 0x630ffa:c.instructions+=3;goto B630ffa;
case 0x630ffc:c.instructions+=2;goto B630ffc;
case 0x630fff:c.instructions+=1;goto B630fff;
default:missing_instruction(c.pc);}
B630003:L630003:{c.instructions+=70;NFSU2_TR(0x630003);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630005:{NFSU2_TR(0x630005);
{u32 ea_=u32(r4(R+16)+u32(1440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63000c:{NFSU2_TR(0x63000c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630010:{NFSU2_TR(0x630010);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630012:{NFSU2_TR(0x630012);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630019:{NFSU2_TR(0x630019);
{u32 ea_=u32(r4(R+16)+u32(1492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630020:{NFSU2_TR(0x630020);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630024:{NFSU2_TR(0x630024);
{u32 ea_=u32(r4(R+16)+u32(1476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63002b:{NFSU2_TR(0x63002b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63002f:{NFSU2_TR(0x63002f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630031:{NFSU2_TR(0x630031);
{u32 ea_=u32(r4(R+16)+u32(1460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630038:{NFSU2_TR(0x630038);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63003c:{NFSU2_TR(0x63003c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63003e:{NFSU2_TR(0x63003e);
{u32 ea_=u32(r4(R+16)+u32(1444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630045:{NFSU2_TR(0x630045);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630049:{NFSU2_TR(0x630049);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63004b:{NFSU2_TR(0x63004b);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630052:{NFSU2_TR(0x630052);
{u32 ea_=u32(r4(R+16)+u32(1480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630059:{NFSU2_TR(0x630059);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63005d:{NFSU2_TR(0x63005d);
{u32 ea_=u32(r4(R+16)+u32(1448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630064:{NFSU2_TR(0x630064);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630068:{NFSU2_TR(0x630068);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63006a:{NFSU2_TR(0x63006a);
{u32 ea_=u32(r4(R+16)+u32(1464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630071:{NFSU2_TR(0x630071);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630075:{NFSU2_TR(0x630075);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630077:{NFSU2_TR(0x630077);
{u32 ea_=u32(r4(R+16)+u32(1432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63007e:{NFSU2_TR(0x63007e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630082:{NFSU2_TR(0x630082);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630084:{NFSU2_TR(0x630084);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63008b:{NFSU2_TR(0x63008b);
{u32 ea_=u32(r4(R+16)+u32(1484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630092:{NFSU2_TR(0x630092);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630096:{NFSU2_TR(0x630096);
{u32 ea_=u32(r4(R+16)+u32(1468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63009d:{NFSU2_TR(0x63009d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6300a1:{NFSU2_TR(0x6300a1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6300a3:{NFSU2_TR(0x6300a3);
{u32 ea_=u32(r4(R+16)+u32(1452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6300aa:{NFSU2_TR(0x6300aa);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6300ae:{NFSU2_TR(0x6300ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6300b0:{NFSU2_TR(0x6300b0);
{u32 ea_=u32(r4(R+16)+u32(1436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6300b7:{NFSU2_TR(0x6300b7);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6300bb:{NFSU2_TR(0x6300bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6300bd:{NFSU2_TR(0x6300bd);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6300c4:{NFSU2_TR(0x6300c4);
{u32 ea_=u32(r4(R+16)+u32(1488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6300cb:{NFSU2_TR(0x6300cb);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6300cf:{NFSU2_TR(0x6300cf);
{u32 ea_=u32(r4(R+16)+u32(1472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6300d6:{NFSU2_TR(0x6300d6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6300da:{NFSU2_TR(0x6300da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6300dc:{NFSU2_TR(0x6300dc);
{u32 ea_=u32(r4(R+16)+u32(1456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6300e3:{NFSU2_TR(0x6300e3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6300e7:{NFSU2_TR(0x6300e7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6300e9:{NFSU2_TR(0x6300e9);
{u32 ea_=u32(r4(R+16)+u32(1440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6300f0:{NFSU2_TR(0x6300f0);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6300f4:{NFSU2_TR(0x6300f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6300f6:{NFSU2_TR(0x6300f6);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6300fd:{NFSU2_TR(0x6300fd);
{u32 ea_=u32(r4(R+16)+u32(1492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630104:{NFSU2_TR(0x630104);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630108:{NFSU2_TR(0x630108);
{u32 ea_=u32(r4(R+16)+u32(1476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63010f:{NFSU2_TR(0x63010f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630113:{NFSU2_TR(0x630113);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B630117:{NFSU2_TR(0x630117);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630118:{NFSU2_TR(0x630118);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63011c:{NFSU2_TR(0x63011c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63011e:{NFSU2_TR(0x63011e);
{u32 ea_=u32(r4(R+16)+u32(1464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630125:{NFSU2_TR(0x630125);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630126:{NFSU2_TR(0x630126);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63012a:{NFSU2_TR(0x63012a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63012c:{NFSU2_TR(0x63012c);
{u32 ea_=u32(r4(R+16)+u32(1452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630133:{NFSU2_TR(0x630133);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630137:{NFSU2_TR(0x630137);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630139:{NFSU2_TR(0x630139);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630140:{NFSU2_TR(0x630140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630145ull));
TAIL_STATIC(0x4012b0u,401);
}
B630145:L630145:{c.instructions+=198;NFSU2_TR(0x630145);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630149:{NFSU2_TR(0x630149);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63014c:{NFSU2_TR(0x63014c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630150:{NFSU2_TR(0x630150);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630152:{NFSU2_TR(0x630152);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630154:{NFSU2_TR(0x630154);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630158:{NFSU2_TR(0x630158);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63015b:{NFSU2_TR(0x63015b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63015d:{NFSU2_TR(0x63015d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630161:{NFSU2_TR(0x630161);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630164:{NFSU2_TR(0x630164);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630166:{NFSU2_TR(0x630166);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63016d:{NFSU2_TR(0x63016d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630171:{NFSU2_TR(0x630171);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630174:{NFSU2_TR(0x630174);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630178:{NFSU2_TR(0x630178);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63017b:{NFSU2_TR(0x63017b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63017d:{NFSU2_TR(0x63017d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630181:{NFSU2_TR(0x630181);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630184:{NFSU2_TR(0x630184);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630186:{NFSU2_TR(0x630186);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63018a:{NFSU2_TR(0x63018a);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63018d:{NFSU2_TR(0x63018d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63018f:{NFSU2_TR(0x63018f);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630196:{NFSU2_TR(0x630196);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63019a:{NFSU2_TR(0x63019a);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63019d:{NFSU2_TR(0x63019d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6301a1:{NFSU2_TR(0x6301a1);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6301a4:{NFSU2_TR(0x6301a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6301a6:{NFSU2_TR(0x6301a6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6301aa:{NFSU2_TR(0x6301aa);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6301ad:{NFSU2_TR(0x6301ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6301af:{NFSU2_TR(0x6301af);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6301b3:{NFSU2_TR(0x6301b3);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6301b6:{NFSU2_TR(0x6301b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6301b8:{NFSU2_TR(0x6301b8);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6301bf:{NFSU2_TR(0x6301bf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6301c3:{NFSU2_TR(0x6301c3);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6301c6:{NFSU2_TR(0x6301c6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6301ca:{NFSU2_TR(0x6301ca);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6301cd:{NFSU2_TR(0x6301cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6301cf:{NFSU2_TR(0x6301cf);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6301d3:{NFSU2_TR(0x6301d3);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6301d6:{NFSU2_TR(0x6301d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6301d8:{NFSU2_TR(0x6301d8);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6301dc:{NFSU2_TR(0x6301dc);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6301df:{NFSU2_TR(0x6301df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6301e1:{NFSU2_TR(0x6301e1);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6301e8:{NFSU2_TR(0x6301e8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6301ec:{NFSU2_TR(0x6301ec);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6301ef:{NFSU2_TR(0x6301ef);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6301f3:{NFSU2_TR(0x6301f3);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6301f5:{NFSU2_TR(0x6301f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6301f7:{NFSU2_TR(0x6301f7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6301fb:{NFSU2_TR(0x6301fb);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6301fe:{NFSU2_TR(0x6301fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630200:{NFSU2_TR(0x630200);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630204:{NFSU2_TR(0x630204);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630207:{NFSU2_TR(0x630207);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630209:{NFSU2_TR(0x630209);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630210:{NFSU2_TR(0x630210);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630214:{NFSU2_TR(0x630214);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630217:{NFSU2_TR(0x630217);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63021b:{NFSU2_TR(0x63021b);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63021e:{NFSU2_TR(0x63021e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630220:{NFSU2_TR(0x630220);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630224:{NFSU2_TR(0x630224);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630227:{NFSU2_TR(0x630227);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630229:{NFSU2_TR(0x630229);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63022d:{NFSU2_TR(0x63022d);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630230:{NFSU2_TR(0x630230);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630232:{NFSU2_TR(0x630232);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630239:{NFSU2_TR(0x630239);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63023d:{NFSU2_TR(0x63023d);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630240:{NFSU2_TR(0x630240);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630244:{NFSU2_TR(0x630244);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630247:{NFSU2_TR(0x630247);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630249:{NFSU2_TR(0x630249);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63024d:{NFSU2_TR(0x63024d);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630250:{NFSU2_TR(0x630250);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630252:{NFSU2_TR(0x630252);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630256:{NFSU2_TR(0x630256);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630259:{NFSU2_TR(0x630259);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63025b:{NFSU2_TR(0x63025b);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630262:{NFSU2_TR(0x630262);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630266:{NFSU2_TR(0x630266);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630269:{NFSU2_TR(0x630269);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63026d:{NFSU2_TR(0x63026d);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630270:{NFSU2_TR(0x630270);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630272:{NFSU2_TR(0x630272);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630276:{NFSU2_TR(0x630276);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630279:{NFSU2_TR(0x630279);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63027b:{NFSU2_TR(0x63027b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63027f:{NFSU2_TR(0x63027f);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630282:{NFSU2_TR(0x630282);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630284:{NFSU2_TR(0x630284);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63028b:{NFSU2_TR(0x63028b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63028f:{NFSU2_TR(0x63028f);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630292:{NFSU2_TR(0x630292);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630296:{NFSU2_TR(0x630296);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630298:{NFSU2_TR(0x630298);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63029a:{NFSU2_TR(0x63029a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63029e:{NFSU2_TR(0x63029e);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6302a1:{NFSU2_TR(0x6302a1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6302a3:{NFSU2_TR(0x6302a3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6302a7:{NFSU2_TR(0x6302a7);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6302aa:{NFSU2_TR(0x6302aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6302ac:{NFSU2_TR(0x6302ac);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6302b3:{NFSU2_TR(0x6302b3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6302b7:{NFSU2_TR(0x6302b7);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6302ba:{NFSU2_TR(0x6302ba);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6302be:{NFSU2_TR(0x6302be);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6302c1:{NFSU2_TR(0x6302c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6302c3:{NFSU2_TR(0x6302c3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6302c7:{NFSU2_TR(0x6302c7);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6302ca:{NFSU2_TR(0x6302ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6302cc:{NFSU2_TR(0x6302cc);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6302d0:{NFSU2_TR(0x6302d0);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6302d3:{NFSU2_TR(0x6302d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6302d5:{NFSU2_TR(0x6302d5);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6302dc:{NFSU2_TR(0x6302dc);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6302e0:{NFSU2_TR(0x6302e0);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6302e3:{NFSU2_TR(0x6302e3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6302e7:{NFSU2_TR(0x6302e7);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6302ea:{NFSU2_TR(0x6302ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6302ec:{NFSU2_TR(0x6302ec);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6302f0:{NFSU2_TR(0x6302f0);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6302f3:{NFSU2_TR(0x6302f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6302f5:{NFSU2_TR(0x6302f5);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6302f9:{NFSU2_TR(0x6302f9);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6302fc:{NFSU2_TR(0x6302fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6302fe:{NFSU2_TR(0x6302fe);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630305:{NFSU2_TR(0x630305);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630309:{NFSU2_TR(0x630309);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63030c:{NFSU2_TR(0x63030c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630310:{NFSU2_TR(0x630310);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630313:{NFSU2_TR(0x630313);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630315:{NFSU2_TR(0x630315);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630319:{NFSU2_TR(0x630319);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63031c:{NFSU2_TR(0x63031c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63031e:{NFSU2_TR(0x63031e);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630322:{NFSU2_TR(0x630322);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630325:{NFSU2_TR(0x630325);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630327:{NFSU2_TR(0x630327);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63032e:{NFSU2_TR(0x63032e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630332:{NFSU2_TR(0x630332);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630335:{NFSU2_TR(0x630335);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630339:{NFSU2_TR(0x630339);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63033b:{NFSU2_TR(0x63033b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63033d:{NFSU2_TR(0x63033d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630341:{NFSU2_TR(0x630341);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630344:{NFSU2_TR(0x630344);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630346:{NFSU2_TR(0x630346);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63034a:{NFSU2_TR(0x63034a);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63034d:{NFSU2_TR(0x63034d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63034f:{NFSU2_TR(0x63034f);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630356:{NFSU2_TR(0x630356);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63035a:{NFSU2_TR(0x63035a);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63035d:{NFSU2_TR(0x63035d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630361:{NFSU2_TR(0x630361);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630364:{NFSU2_TR(0x630364);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630366:{NFSU2_TR(0x630366);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63036a:{NFSU2_TR(0x63036a);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63036d:{NFSU2_TR(0x63036d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63036f:{NFSU2_TR(0x63036f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630373:{NFSU2_TR(0x630373);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630376:{NFSU2_TR(0x630376);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630378:{NFSU2_TR(0x630378);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63037f:{NFSU2_TR(0x63037f);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630383:{NFSU2_TR(0x630383);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630386:{NFSU2_TR(0x630386);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63038a:{NFSU2_TR(0x63038a);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63038d:{NFSU2_TR(0x63038d);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B630394:{NFSU2_TR(0x630394);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63039b:{NFSU2_TR(0x63039b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63039c:{NFSU2_TR(0x63039c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63039e:{NFSU2_TR(0x63039e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6303a2:{NFSU2_TR(0x6303a2);
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
B6303a8:{NFSU2_TR(0x6303a8);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6303ab:{NFSU2_TR(0x6303ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6303ac:{NFSU2_TR(0x6303ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6303ae:{NFSU2_TR(0x6303ae);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6303b2:{NFSU2_TR(0x6303b2);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6303b5:{NFSU2_TR(0x6303b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6303b7:{NFSU2_TR(0x6303b7);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6303be:{NFSU2_TR(0x6303be);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6303c2:{NFSU2_TR(0x6303c2);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6303c5:{NFSU2_TR(0x6303c5);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6303c9:{NFSU2_TR(0x6303c9);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6303cc:{NFSU2_TR(0x6303cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6303ce:{NFSU2_TR(0x6303ce);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6303d2:{NFSU2_TR(0x6303d2);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6303d5:{NFSU2_TR(0x6303d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6303d7:{NFSU2_TR(0x6303d7);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6303db:{NFSU2_TR(0x6303db);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6303de:{NFSU2_TR(0x6303de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6303e0:{NFSU2_TR(0x6303e0);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6303e7:{NFSU2_TR(0x6303e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6303ecull));
TAIL_STATIC(0x4012b0u,401);
}
B6303ec:L6303ec:{c.instructions+=4;NFSU2_TR(0x6303ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6303f3:{NFSU2_TR(0x6303f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6303f6:{NFSU2_TR(0x6303f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6303f8:{NFSU2_TR(0x6303f8);
if(r1(R+518)){{goto L63044f;}}
}
B6303fa:L6303fa:{c.instructions+=2;NFSU2_TR(0x6303fa);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B630401:{NFSU2_TR(0x630401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63044f;}}
}
B630403:L630403:{c.instructions+=3;NFSU2_TR(0x630403);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63040a:{NFSU2_TR(0x63040a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63040c:{NFSU2_TR(0x63040c);
if(r1(R+518)){{goto L6304c4;}}
}
B630412:L630412:{c.instructions+=7;NFSU2_TR(0x630412);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630416:{NFSU2_TR(0x630416);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630418:{NFSU2_TR(0x630418);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1768ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1768ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1768ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63041e:{NFSU2_TR(0x63041e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630420:{NFSU2_TR(0x630420);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630421:{NFSU2_TR(0x630421);
__builtin_memmove((R+4),(R+0),4);
}
B630423:{NFSU2_TR(0x630423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630428ull));
TAIL_STATIC(0x488e20u,488);
}
B630428:L630428:{c.instructions+=12;NFSU2_TR(0x630428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63042b:{NFSU2_TR(0x63042b);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B630432:{NFSU2_TR(0x630432);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630439:{NFSU2_TR(0x630439);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63043b:{NFSU2_TR(0x63043b);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B63043d:{NFSU2_TR(0x63043d);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630444:{NFSU2_TR(0x630444);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630445:{NFSU2_TR(0x630445);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x540ull))));
}
B63044a:{NFSU2_TR(0x63044a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63044b:{NFSU2_TR(0x63044b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63044c:{NFSU2_TR(0x63044c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63044d:{NFSU2_TR(0x63044d);
{goto L6304bd;}
}
B63044f:L63044f:{c.instructions+=3;NFSU2_TR(0x63044f);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630456:{NFSU2_TR(0x630456);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B630458:{NFSU2_TR(0x630458);
if(r1(R+518)){{goto L6304c4;}}
}
B63045a:L63045a:{c.instructions+=7;NFSU2_TR(0x63045a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63045e:{NFSU2_TR(0x63045e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630460:{NFSU2_TR(0x630460);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630462:{NFSU2_TR(0x630462);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x1768ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x1768ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1768ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B630468:{NFSU2_TR(0x630468);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630469:{NFSU2_TR(0x630469);
__builtin_memmove((R+4),(R+0),4);
}
B63046b:{NFSU2_TR(0x63046b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630470ull));
TAIL_STATIC(0x488e20u,488);
}
B630470:L630470:{c.instructions+=12;NFSU2_TR(0x630470);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630477:{NFSU2_TR(0x630477);
u8 U[4];
w4(U+0,u32(u32(u32(0xb20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63047e:{NFSU2_TR(0x63047e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63047f:{NFSU2_TR(0x63047f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630480:{NFSU2_TR(0x630480);
u8 U[4];
w4(U+0,u32(u32(u32(0x798ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B630487:{NFSU2_TR(0x630487);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630488:{NFSU2_TR(0x630488);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63048d:{NFSU2_TR(0x63048d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x540ull))));
}
B630492:{NFSU2_TR(0x630492);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630493:{NFSU2_TR(0x630493);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630494:{NFSU2_TR(0x630494);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630498:{NFSU2_TR(0x630498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63049dull));
TAIL_STATIC(0x48f660u,48f);
}
B63049d:L63049d:{c.instructions+=11;NFSU2_TR(0x63049d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6304a0:{NFSU2_TR(0x6304a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6304a7:{NFSU2_TR(0x6304a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6304ab:{NFSU2_TR(0x6304ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6304ae:{NFSU2_TR(0x6304ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6304b0:{NFSU2_TR(0x6304b0);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6304b2:{NFSU2_TR(0x6304b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6304b9:{NFSU2_TR(0x6304b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6304ba:{NFSU2_TR(0x6304ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6304bb:{NFSU2_TR(0x6304bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6304bc:{NFSU2_TR(0x6304bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6304bd:L6304bd:{c.instructions+=2;NFSU2_TR(0x6304bd);
__builtin_memmove((R+4),(R+28),4);
}
B6304bf:{NFSU2_TR(0x6304bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6304c4ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B6304c4:L6304c4:{c.instructions+=3;NFSU2_TR(0x6304c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6304cb:{NFSU2_TR(0x6304cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6304cd:{NFSU2_TR(0x6304cd);
if(r1(R+518)){{goto L6306c6;}}
}
B6304d3:L6304d3:{c.instructions+=2;NFSU2_TR(0x6304d3);
u8 U[4];
w4(U+0,u32(0x1c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6304d8:{NFSU2_TR(0x6304d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6304ddull));
TAIL_STATIC(0x401e30u,401);
}
B6304dd:L6304dd:{c.instructions+=7;NFSU2_TR(0x6304dd);
{u32 ea_=u32(u32(8021488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6304e3:{NFSU2_TR(0x6304e3);
{u32 ea_=u32(r4(R+16)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6304ea:{NFSU2_TR(0x6304ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6304f1:{NFSU2_TR(0x6304f1);
{u32 ea_=u32(u32(8021492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6304f7:{NFSU2_TR(0x6304f7);
__builtin_memmove((R+28),(R+0),4);
}
B6304f9:{NFSU2_TR(0x6304f9);
{u32 ea_=u32(r4(R+16)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630500:{NFSU2_TR(0x630500);
w4(R+4,u32(0x70ull));
}
B630505:L630505:{c.instructions+=1;NFSU2_TR(0x630505);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L630507;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x630505u);}goto L630505;}
}
B630507:L630507:{c.instructions+=6;NFSU2_TR(0x630507);
{u32 ea_=u32(r4(R+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63050e:{NFSU2_TR(0x63050e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B630514:{NFSU2_TR(0x630514);
u8 U[8];
w4(U+0,u32(u32(u32(0x310ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63051b:{NFSU2_TR(0x63051b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63051e:{NFSU2_TR(0x63051e);
__builtin_memmove((R+0),(R+4),4);
}
B630520:{NFSU2_TR(0x630520);
w4(R+8,u32(0xaull));
}
B630525:L630525:{c.instructions+=15;NFSU2_TR(0x630525);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B630527:{NFSU2_TR(0x630527);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B63052a:{NFSU2_TR(0x63052a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B63052b:{NFSU2_TR(0x63052b);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63052e:{NFSU2_TR(0x63052e);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630531:{NFSU2_TR(0x630531);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B630533:{NFSU2_TR(0x630533);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630536:{NFSU2_TR(0x630536);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630539:{NFSU2_TR(0x630539);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63053b:{NFSU2_TR(0x63053b);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63053e:{NFSU2_TR(0x63053e);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630541:{NFSU2_TR(0x630541);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B630543:{NFSU2_TR(0x630543);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630546:{NFSU2_TR(0x630546);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630549:{NFSU2_TR(0x630549);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x630525u);}goto L630525;}}
}
B63054b:L63054b:{c.instructions+=6;NFSU2_TR(0x63054b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63054f:{NFSU2_TR(0x63054f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B630551:{NFSU2_TR(0x630551);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B630554:{NFSU2_TR(0x630554);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63055a:{NFSU2_TR(0x63055a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63055c:{NFSU2_TR(0x63055c);
if(r1(R+518)){{goto L630637;}}
}
B630562:L630562:{c.instructions+=4;NFSU2_TR(0x630562);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B630565:{NFSU2_TR(0x630565);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xe0ull))));
}
B630568:{NFSU2_TR(0x630568);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x60ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B63056b:{NFSU2_TR(0x63056b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L630637;}}
}
B630571:L630571:{c.instructions+=6;NFSU2_TR(0x630571);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x364ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B630577:{NFSU2_TR(0x630577);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B63057d:{NFSU2_TR(0x63057d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63057f:{NFSU2_TR(0x63057f);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630583:{NFSU2_TR(0x630583);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B630587:{NFSU2_TR(0x630587);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63058f;}}
}
B630589:L630589:{c.instructions+=1;NFSU2_TR(0x630589);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63058f:L63058f:{c.instructions+=32;NFSU2_TR(0x63058f);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630595:{NFSU2_TR(0x630595);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x365ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B63059c:{NFSU2_TR(0x63059c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6305a0:{NFSU2_TR(0x6305a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x366ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6305a7:{NFSU2_TR(0x6305a7);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6305ab:{NFSU2_TR(0x6305ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6305af:{NFSU2_TR(0x6305af);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x367ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6305b6:{NFSU2_TR(0x6305b6);
{u32 ea_=u32(u32(8030384u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B6305bc:{NFSU2_TR(0x6305bc);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6305c0:{NFSU2_TR(0x6305c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6305c4:{NFSU2_TR(0x6305c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6305cb:{NFSU2_TR(0x6305cb);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6305d1:{NFSU2_TR(0x6305d1);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6305d8:{NFSU2_TR(0x6305d8);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6305dc:{NFSU2_TR(0x6305dc);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6305e2:{NFSU2_TR(0x6305e2);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6305e9:{NFSU2_TR(0x6305e9);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6305eb:{NFSU2_TR(0x6305eb);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6305f2:{NFSU2_TR(0x6305f2);
{u32 ea_=u32(r4(R+8)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6305f8:{NFSU2_TR(0x6305f8);
{u32 ea_=u32(r4(R+8)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6305fe:{NFSU2_TR(0x6305fe);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630605:{NFSU2_TR(0x630605);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B630607:{NFSU2_TR(0x630607);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63060e:{NFSU2_TR(0x63060e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B630610:{NFSU2_TR(0x630610);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630612:{NFSU2_TR(0x630612);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B630614:{NFSU2_TR(0x630614);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B630616:{NFSU2_TR(0x630616);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63061d:{NFSU2_TR(0x63061d);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630624:{NFSU2_TR(0x630624);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63062b:{NFSU2_TR(0x63062b);
{u32 ea_=u32(r4(R+8)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B630631:{NFSU2_TR(0x630631);
{u32 ea_=u32(r4(R+8)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630637:L630637:{c.instructions+=4;NFSU2_TR(0x630637);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63063e:{NFSU2_TR(0x63063e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B630640:{NFSU2_TR(0x630640);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630647:{NFSU2_TR(0x630647);
{goto L630650;}
}
B630650:L630650:{c.instructions+=4;NFSU2_TR(0x630650);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B630653:{NFSU2_TR(0x630653);
u8 U[16];
w4(U+0,u32(u32(u32(0x1948ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B63065a:{NFSU2_TR(0x63065a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63065c:{NFSU2_TR(0x63065c);
if(r1(R+518)){{goto L6306b2;}}
}
B63065e:L63065e:{c.instructions+=6;NFSU2_TR(0x63065e);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630662:{NFSU2_TR(0x630662);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x384ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630668:{NFSU2_TR(0x630668);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630669:{NFSU2_TR(0x630669);
u8 U[4];
w4(U+0,u32(0xd6d6080aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63066e:{NFSU2_TR(0x63066e);
__builtin_memmove((R+4),(R+24),4);
}
B630670:{NFSU2_TR(0x630670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630675ull));
TAIL_STATIC(0x48d860u,48d);
}
B630675:L630675:{c.instructions+=4;NFSU2_TR(0x630675);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63067c:{NFSU2_TR(0x63067c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63067e:{NFSU2_TR(0x63067e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630680:{NFSU2_TR(0x630680);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L630694;}}
}
B630682:L630682:{c.instructions+=7;NFSU2_TR(0x630682);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630685:{NFSU2_TR(0x630685);
u8 U[8];
w4(U+0,u32(u32(u32(0x310ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63068c:{NFSU2_TR(0x63068c);
__builtin_memmove((R+8),(R+28),4);
}
B63068e:{NFSU2_TR(0x63068e);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B630690:{NFSU2_TR(0x630690);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630691:{NFSU2_TR(0x630691);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630692:{NFSU2_TR(0x630692);
{goto L6306a4;}
}
B630694:L630694:{c.instructions+=6;NFSU2_TR(0x630694);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630697:{NFSU2_TR(0x630697);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63069e:{NFSU2_TR(0x63069e);
__builtin_memmove((R+4),(R+28),4);
}
B6306a0:{NFSU2_TR(0x6306a0);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6306a2:{NFSU2_TR(0x6306a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6306a3:{NFSU2_TR(0x6306a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6306a4:L6306a4:{c.instructions+=4;NFSU2_TR(0x6306a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6306a7:{NFSU2_TR(0x6306a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6306a8:{NFSU2_TR(0x6306a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6306a9:{NFSU2_TR(0x6306a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6306aeull));
TAIL_STATIC(0x5c5930u,5c5);
}
B6306ae:L6306ae:{c.instructions+=1;NFSU2_TR(0x6306ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6306b2:L6306b2:{c.instructions+=5;NFSU2_TR(0x6306b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6306b9:{NFSU2_TR(0x6306b9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6306ba:{NFSU2_TR(0x6306ba);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6306bd:{NFSU2_TR(0x6306bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6306c4:{NFSU2_TR(0x6306c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x630650u);}goto L630650;}}
}
B6306c6:L6306c6:{c.instructions+=3;NFSU2_TR(0x6306c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6306cd:{NFSU2_TR(0x6306cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6306cf:{NFSU2_TR(0x6306cf);
if(r1(R+518)){{goto L6306e6;}}
}
B6306d1:L6306d1:{c.instructions+=6;NFSU2_TR(0x6306d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6306d4:{NFSU2_TR(0x6306d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6306d8:{NFSU2_TR(0x6306d8);
__builtin_memmove((R+4),(R+518),1);
}
B6306db:{NFSU2_TR(0x6306db);
w4(R+0,u32(r1(R+4)));
}
B6306de:{NFSU2_TR(0x6306de);
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
B6306e0:{NFSU2_TR(0x6306e0);
if(r1(R+518)){{goto L630d1b;}}
}
B6306e6:L6306e6:{c.instructions+=2;NFSU2_TR(0x6306e6);
u8 U[4];
w4(U+0,u32(0x1c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6306eb:{NFSU2_TR(0x6306eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6306f0ull));
TAIL_STATIC(0x401e30u,401);
}
B6306f0:L6306f0:{c.instructions+=4;NFSU2_TR(0x6306f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6306f3:{NFSU2_TR(0x6306f3);
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
B6306f5:{NFSU2_TR(0x6306f5);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6306fc:{NFSU2_TR(0x6306fc);
if(r1(R+518)){{goto L630d1b;}}
}
B630702:L630702:{c.instructions+=8;NFSU2_TR(0x630702);
{u32 ea_=u32(u32(8021472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630708:{NFSU2_TR(0x630708);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63070f:{NFSU2_TR(0x63070f);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630716:{NFSU2_TR(0x630716);
__builtin_memmove((R+8),(R+0),4);
}
B630718:{NFSU2_TR(0x630718);
{u32 ea_=u32(u32(8021476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63071e:{NFSU2_TR(0x63071e);
w4(R+4,u32(0x70ull));
}
B630723:{NFSU2_TR(0x630723);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63072a:{NFSU2_TR(0x63072a);
__builtin_memmove((R+28),(R+8),4);
}
B63072c:L63072c:{c.instructions+=1;NFSU2_TR(0x63072c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L63072e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63072cu);}goto L63072c;}
}
B63072e:L63072e:{c.instructions+=4;NFSU2_TR(0x63072e);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630735:{NFSU2_TR(0x630735);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63073b:{NFSU2_TR(0x63073b);
__builtin_memmove((R+0),(R+4),4);
}
B63073d:{NFSU2_TR(0x63073d);
w4(R+24,u32(0xaull));
}
B630742:L630742:{c.instructions+=15;NFSU2_TR(0x630742);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B630744:{NFSU2_TR(0x630744);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B630747:{NFSU2_TR(0x630747);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B630748:{NFSU2_TR(0x630748);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63074b:{NFSU2_TR(0x63074b);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63074e:{NFSU2_TR(0x63074e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B630750:{NFSU2_TR(0x630750);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630753:{NFSU2_TR(0x630753);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630756:{NFSU2_TR(0x630756);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B630758:{NFSU2_TR(0x630758);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63075b:{NFSU2_TR(0x63075b);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63075e:{NFSU2_TR(0x63075e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B630760:{NFSU2_TR(0x630760);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630763:{NFSU2_TR(0x630763);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630766:{NFSU2_TR(0x630766);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x630742u);}goto L630742;}}
}
B630768:L630768:{c.instructions+=7;NFSU2_TR(0x630768);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63076c:{NFSU2_TR(0x63076c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63076e:{NFSU2_TR(0x63076e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630771:{NFSU2_TR(0x630771);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B630777:{NFSU2_TR(0x630777);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B630779:{NFSU2_TR(0x630779);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630780:{NFSU2_TR(0x630780);
if(r1(R+518)){{goto L630851;}}
}
B630786:L630786:{c.instructions+=4;NFSU2_TR(0x630786);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B630789:{NFSU2_TR(0x630789);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xe0ull))));
}
B63078b:{NFSU2_TR(0x63078b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x60ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63078d:{NFSU2_TR(0x63078d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L630851;}}
}
B630793:L630793:{c.instructions+=6;NFSU2_TR(0x630793);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630799:{NFSU2_TR(0x630799);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B63079e:{NFSU2_TR(0x63079e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6307a0:{NFSU2_TR(0x6307a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6307a4:{NFSU2_TR(0x6307a4);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6307a8:{NFSU2_TR(0x6307a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6307b0;}}
}
B6307aa:L6307aa:{c.instructions+=1;NFSU2_TR(0x6307aa);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6307b0:L6307b0:{c.instructions+=31;NFSU2_TR(0x6307b0);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6307b6:{NFSU2_TR(0x6307b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6307bd:{NFSU2_TR(0x6307bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6307c1:{NFSU2_TR(0x6307c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6307c8:{NFSU2_TR(0x6307c8);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6307cc:{NFSU2_TR(0x6307cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6307d0:{NFSU2_TR(0x6307d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6307d7:{NFSU2_TR(0x6307d7);
{u32 ea_=u32(u32(8030384u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B6307dd:{NFSU2_TR(0x6307dd);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6307e1:{NFSU2_TR(0x6307e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6307e5:{NFSU2_TR(0x6307e5);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6307eb:{NFSU2_TR(0x6307eb);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6307f2:{NFSU2_TR(0x6307f2);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6307f6:{NFSU2_TR(0x6307f6);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6307fc:{NFSU2_TR(0x6307fc);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B630803:{NFSU2_TR(0x630803);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B630805:{NFSU2_TR(0x630805);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63080c:{NFSU2_TR(0x63080c);
{u32 ea_=u32(r4(R+8)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B630812:{NFSU2_TR(0x630812);
{u32 ea_=u32(r4(R+8)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630818:{NFSU2_TR(0x630818);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63081f:{NFSU2_TR(0x63081f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B630821:{NFSU2_TR(0x630821);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630828:{NFSU2_TR(0x630828);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63082a:{NFSU2_TR(0x63082a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63082c:{NFSU2_TR(0x63082c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63082e:{NFSU2_TR(0x63082e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B630830:{NFSU2_TR(0x630830);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630837:{NFSU2_TR(0x630837);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63083e:{NFSU2_TR(0x63083e);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630845:{NFSU2_TR(0x630845);
{u32 ea_=u32(r4(R+8)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63084b:{NFSU2_TR(0x63084b);
{u32 ea_=u32(r4(R+8)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630851:L630851:{c.instructions+=4;NFSU2_TR(0x630851);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B630853:{NFSU2_TR(0x630853);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B630855:{NFSU2_TR(0x630855);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63085c:{NFSU2_TR(0x63085c);
if(r1(R+518)){{goto L630873;}}
}
B63085e:L63085e:{c.instructions+=6;NFSU2_TR(0x63085e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B630861:{NFSU2_TR(0x630861);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B630863:{NFSU2_TR(0x630863);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B630866:{NFSU2_TR(0x630866);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x1ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B630869:{NFSU2_TR(0x630869);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+8),(U+2),1);
}
B63086c:{NFSU2_TR(0x63086c);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630873:L630873:{c.instructions+=3;NFSU2_TR(0x630873);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63087a:{NFSU2_TR(0x63087a);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630881:{NFSU2_TR(0x630881);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L630897;}}
}
B630883:L630883:{c.instructions+=1;NFSU2_TR(0x630883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630888ull));
TAIL_STATIC(0x499db0u,499);
}
B630888:L630888:{c.instructions+=2;NFSU2_TR(0x630888);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63088a:{NFSU2_TR(0x63088a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L630897;}}
}
B63088c:L63088c:{c.instructions+=1;NFSU2_TR(0x63088c);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B630897:L630897:{c.instructions+=3;NFSU2_TR(0x630897);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B630899:{NFSU2_TR(0x630899);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63089d:{NFSU2_TR(0x63089d);
{goto L6308a3;}
}
B63089f:L63089f:{c.instructions+=1;NFSU2_TR(0x63089f);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6308a3:L6308a3:{c.instructions+=7;NFSU2_TR(0x6308a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6308a7:{NFSU2_TR(0x6308a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6308aa:{NFSU2_TR(0x6308aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6308ad:{NFSU2_TR(0x6308ad);
u8 U[12];
w4(U+0,u32(u32(u32(0x21b4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6308b4:{NFSU2_TR(0x6308b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6308b7:{NFSU2_TR(0x6308b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6308b9:{NFSU2_TR(0x6308b9);
if(r1(R+518)){{goto L630954;}}
}
B6308bf:L6308bf:{c.instructions+=6;NFSU2_TR(0x6308bf);
__builtin_memmove((R+28),(R+4),4);
}
B6308c1:{NFSU2_TR(0x6308c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x384ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6308c7:{NFSU2_TR(0x6308c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6308c8:{NFSU2_TR(0x6308c8);
u8 U[4];
w4(U+0,u32(0xd6d6080aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6308cd:{NFSU2_TR(0x6308cd);
__builtin_memmove((R+4),(R+24),4);
}
B6308cf:{NFSU2_TR(0x6308cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6308d4ull));
TAIL_STATIC(0x48d860u,48d);
}
B6308d4:L6308d4:{c.instructions+=6;NFSU2_TR(0x6308d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6308db:{NFSU2_TR(0x6308db);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6308de:{NFSU2_TR(0x6308de);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xe0ull))));
}
B6308e1:{NFSU2_TR(0x6308e1);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x60ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6308e4:{NFSU2_TR(0x6308e4);
__builtin_memmove((R+4),(R+24),4);
}
B6308e6:{NFSU2_TR(0x6308e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6308f1;}}
}
B6308e8:L6308e8:{c.instructions+=3;NFSU2_TR(0x6308e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x39cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6308ee:{NFSU2_TR(0x6308ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6308ef:{NFSU2_TR(0x6308ef);
{goto L6308f8;}
}
B6308f1:L6308f1:{c.instructions+=2;NFSU2_TR(0x6308f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x384ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6308f7:{NFSU2_TR(0x6308f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6308f8:L6308f8:{c.instructions+=2;NFSU2_TR(0x6308f8);
u8 U[4];
w4(U+0,u32(0x5be72f1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6308fd:{NFSU2_TR(0x6308fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630902ull));
TAIL_STATIC(0x48d860u,48d);
}
B630902:L630902:{c.instructions+=4;NFSU2_TR(0x630902);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630906:{NFSU2_TR(0x630906);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B630908:{NFSU2_TR(0x630908);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63090a:{NFSU2_TR(0x63090a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63092c;}}
}
B63090c:L63090c:{c.instructions+=9;NFSU2_TR(0x63090c);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630913:{NFSU2_TR(0x630913);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63091a:{NFSU2_TR(0x63091a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63091d:{NFSU2_TR(0x63091d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B63091f:{NFSU2_TR(0x63091f);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B630921:{NFSU2_TR(0x630921);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B630928:{NFSU2_TR(0x630928);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630929:{NFSU2_TR(0x630929);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63092a:{NFSU2_TR(0x63092a);
{goto L63094a;}
}
B63092c:L63092c:{c.instructions+=8;NFSU2_TR(0x63092c);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630933:{NFSU2_TR(0x630933);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63093a:{NFSU2_TR(0x63093a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63093d:{NFSU2_TR(0x63093d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B63093f:{NFSU2_TR(0x63093f);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B630941:{NFSU2_TR(0x630941);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630948:{NFSU2_TR(0x630948);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630949:{NFSU2_TR(0x630949);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63094a:L63094a:{c.instructions+=4;NFSU2_TR(0x63094a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63094d:{NFSU2_TR(0x63094d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63094e:{NFSU2_TR(0x63094e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63094f:{NFSU2_TR(0x63094f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630954ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B630954:L630954:{c.instructions+=5;NFSU2_TR(0x630954);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630958:{NFSU2_TR(0x630958);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B630959:{NFSU2_TR(0x630959);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63095c:{NFSU2_TR(0x63095c);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630960:{NFSU2_TR(0x630960);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63089fu);}goto L63089f;}}
}
B630966:L630966:{c.instructions+=4;NFSU2_TR(0x630966);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B630969:{NFSU2_TR(0x630969);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63096b:{NFSU2_TR(0x63096b);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630972:{NFSU2_TR(0x630972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630977ull));
TAIL_STATIC(0x401e80u,401);
}
B630977:L630977:{c.instructions+=12;NFSU2_TR(0x630977);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63097b:{NFSU2_TR(0x63097b);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63097f:{NFSU2_TR(0x63097f);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630983:{NFSU2_TR(0x630983);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2184ull))));
__builtin_memmove((R+0),(U+0),4);
}
B630989:{NFSU2_TR(0x630989);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630990:{NFSU2_TR(0x630990);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630997:{NFSU2_TR(0x630997);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B63099a:{NFSU2_TR(0x63099a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63099d:{NFSU2_TR(0x63099d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B63099f:{NFSU2_TR(0x63099f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6309a2:{NFSU2_TR(0x6309a2);
u8 U[12];
w4(U+0,u32(u32(u32(0x2274ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6309a9:{NFSU2_TR(0x6309a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6309b0:L6309b0:{c.instructions+=4;NFSU2_TR(0x6309b0);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6309b7:{NFSU2_TR(0x6309b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6309b9:{NFSU2_TR(0x6309b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6309bb:{NFSU2_TR(0x6309bb);
if(r1(R+518)){{goto L630ce1;}}
}
B6309c1:L6309c1:{c.instructions+=3;NFSU2_TR(0x6309c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6309c5:{NFSU2_TR(0x6309c5);
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
B6309c7:{NFSU2_TR(0x6309c7);
if(r1(R+518)){{goto L630ce1;}}
}
B6309cd:L6309cd:{c.instructions+=197;NFSU2_TR(0x6309cd);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6309d0:{NFSU2_TR(0x6309d0);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6309d3:{NFSU2_TR(0x6309d3);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6309d6:{NFSU2_TR(0x6309d6);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6309d9:{NFSU2_TR(0x6309d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6309db:{NFSU2_TR(0x6309db);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6309de:{NFSU2_TR(0x6309de);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6309e0:{NFSU2_TR(0x6309e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6309e2:{NFSU2_TR(0x6309e2);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6309e5:{NFSU2_TR(0x6309e5);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6309e8:{NFSU2_TR(0x6309e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6309ea:{NFSU2_TR(0x6309ea);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6309ee:{NFSU2_TR(0x6309ee);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6309f1:{NFSU2_TR(0x6309f1);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6309f4:{NFSU2_TR(0x6309f4);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6309f7:{NFSU2_TR(0x6309f7);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6309fa:{NFSU2_TR(0x6309fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6309fc:{NFSU2_TR(0x6309fc);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6309ff:{NFSU2_TR(0x6309ff);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a02:{NFSU2_TR(0x630a02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a04:{NFSU2_TR(0x630a04);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a07:{NFSU2_TR(0x630a07);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a0a:{NFSU2_TR(0x630a0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a0c:{NFSU2_TR(0x630a0c);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630a10:{NFSU2_TR(0x630a10);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a13:{NFSU2_TR(0x630a13);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a16:{NFSU2_TR(0x630a16);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a19:{NFSU2_TR(0x630a19);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a1c:{NFSU2_TR(0x630a1c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a1e:{NFSU2_TR(0x630a1e);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a21:{NFSU2_TR(0x630a21);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a24:{NFSU2_TR(0x630a24);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a26:{NFSU2_TR(0x630a26);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a29:{NFSU2_TR(0x630a29);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a2c:{NFSU2_TR(0x630a2c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a2e:{NFSU2_TR(0x630a2e);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630a32:{NFSU2_TR(0x630a32);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a35:{NFSU2_TR(0x630a35);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a38:{NFSU2_TR(0x630a38);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a3b:{NFSU2_TR(0x630a3b);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a3e:{NFSU2_TR(0x630a3e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a40:{NFSU2_TR(0x630a40);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a43:{NFSU2_TR(0x630a43);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a46:{NFSU2_TR(0x630a46);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a48:{NFSU2_TR(0x630a48);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a4b:{NFSU2_TR(0x630a4b);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a4e:{NFSU2_TR(0x630a4e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a50:{NFSU2_TR(0x630a50);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630a54:{NFSU2_TR(0x630a54);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a57:{NFSU2_TR(0x630a57);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a5a:{NFSU2_TR(0x630a5a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a5c:{NFSU2_TR(0x630a5c);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a5f:{NFSU2_TR(0x630a5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a61:{NFSU2_TR(0x630a61);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a64:{NFSU2_TR(0x630a64);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a67:{NFSU2_TR(0x630a67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a69:{NFSU2_TR(0x630a69);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a6c:{NFSU2_TR(0x630a6c);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a6f:{NFSU2_TR(0x630a6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a71:{NFSU2_TR(0x630a71);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630a78:{NFSU2_TR(0x630a78);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a7b:{NFSU2_TR(0x630a7b);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a7e:{NFSU2_TR(0x630a7e);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a81:{NFSU2_TR(0x630a81);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a84:{NFSU2_TR(0x630a84);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a86:{NFSU2_TR(0x630a86);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a89:{NFSU2_TR(0x630a89);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a8c:{NFSU2_TR(0x630a8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a8e:{NFSU2_TR(0x630a8e);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630a91:{NFSU2_TR(0x630a91);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630a94:{NFSU2_TR(0x630a94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630a96:{NFSU2_TR(0x630a96);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630a9d:{NFSU2_TR(0x630a9d);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630aa0:{NFSU2_TR(0x630aa0);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630aa3:{NFSU2_TR(0x630aa3);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630aa6:{NFSU2_TR(0x630aa6);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630aa9:{NFSU2_TR(0x630aa9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630aab:{NFSU2_TR(0x630aab);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630aae:{NFSU2_TR(0x630aae);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630ab1:{NFSU2_TR(0x630ab1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630ab3:{NFSU2_TR(0x630ab3);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630ab6:{NFSU2_TR(0x630ab6);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630ab9:{NFSU2_TR(0x630ab9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630abb:{NFSU2_TR(0x630abb);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630ac2:{NFSU2_TR(0x630ac2);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630ac5:{NFSU2_TR(0x630ac5);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630ac8:{NFSU2_TR(0x630ac8);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630acb:{NFSU2_TR(0x630acb);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630ace:{NFSU2_TR(0x630ace);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630ad0:{NFSU2_TR(0x630ad0);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630ad3:{NFSU2_TR(0x630ad3);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630ad6:{NFSU2_TR(0x630ad6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630ad8:{NFSU2_TR(0x630ad8);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630adb:{NFSU2_TR(0x630adb);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630ade:{NFSU2_TR(0x630ade);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630ae0:{NFSU2_TR(0x630ae0);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630ae7:{NFSU2_TR(0x630ae7);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630aea:{NFSU2_TR(0x630aea);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630aed:{NFSU2_TR(0x630aed);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630aef:{NFSU2_TR(0x630aef);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630af2:{NFSU2_TR(0x630af2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630af4:{NFSU2_TR(0x630af4);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630af7:{NFSU2_TR(0x630af7);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630afa:{NFSU2_TR(0x630afa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630afc:{NFSU2_TR(0x630afc);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630aff:{NFSU2_TR(0x630aff);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b02:{NFSU2_TR(0x630b02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b04:{NFSU2_TR(0x630b04);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630b0b:{NFSU2_TR(0x630b0b);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b0e:{NFSU2_TR(0x630b0e);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b11:{NFSU2_TR(0x630b11);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b14:{NFSU2_TR(0x630b14);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b17:{NFSU2_TR(0x630b17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b19:{NFSU2_TR(0x630b19);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b1c:{NFSU2_TR(0x630b1c);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b1f:{NFSU2_TR(0x630b1f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b21:{NFSU2_TR(0x630b21);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b24:{NFSU2_TR(0x630b24);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b27:{NFSU2_TR(0x630b27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b29:{NFSU2_TR(0x630b29);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630b30:{NFSU2_TR(0x630b30);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b33:{NFSU2_TR(0x630b33);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b36:{NFSU2_TR(0x630b36);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b39:{NFSU2_TR(0x630b39);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b3c:{NFSU2_TR(0x630b3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b3e:{NFSU2_TR(0x630b3e);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b41:{NFSU2_TR(0x630b41);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b44:{NFSU2_TR(0x630b44);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b46:{NFSU2_TR(0x630b46);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b49:{NFSU2_TR(0x630b49);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b4c:{NFSU2_TR(0x630b4c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b4e:{NFSU2_TR(0x630b4e);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630b55:{NFSU2_TR(0x630b55);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b58:{NFSU2_TR(0x630b58);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b5b:{NFSU2_TR(0x630b5b);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b5e:{NFSU2_TR(0x630b5e);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b61:{NFSU2_TR(0x630b61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b63:{NFSU2_TR(0x630b63);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b66:{NFSU2_TR(0x630b66);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b69:{NFSU2_TR(0x630b69);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b6b:{NFSU2_TR(0x630b6b);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b6e:{NFSU2_TR(0x630b6e);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b71:{NFSU2_TR(0x630b71);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b73:{NFSU2_TR(0x630b73);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630b7a:{NFSU2_TR(0x630b7a);
{u32 ea_=u32(r4(R+0)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b7d:{NFSU2_TR(0x630b7d);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b80:{NFSU2_TR(0x630b80);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b82:{NFSU2_TR(0x630b82);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b85:{NFSU2_TR(0x630b85);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b87:{NFSU2_TR(0x630b87);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b8a:{NFSU2_TR(0x630b8a);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b8d:{NFSU2_TR(0x630b8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b8f:{NFSU2_TR(0x630b8f);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630b92:{NFSU2_TR(0x630b92);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630b95:{NFSU2_TR(0x630b95);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630b97:{NFSU2_TR(0x630b97);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630b9e:{NFSU2_TR(0x630b9e);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630ba1:{NFSU2_TR(0x630ba1);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630ba4:{NFSU2_TR(0x630ba4);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630ba7:{NFSU2_TR(0x630ba7);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630baa:{NFSU2_TR(0x630baa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630bac:{NFSU2_TR(0x630bac);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630baf:{NFSU2_TR(0x630baf);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630bb2:{NFSU2_TR(0x630bb2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630bb4:{NFSU2_TR(0x630bb4);
{u32 ea_=u32(r4(R+0)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630bb7:{NFSU2_TR(0x630bb7);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630bba:{NFSU2_TR(0x630bba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630bbc:{NFSU2_TR(0x630bbc);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630bc3:{NFSU2_TR(0x630bc3);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630bc6:{NFSU2_TR(0x630bc6);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630bc9:{NFSU2_TR(0x630bc9);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630bcc:{NFSU2_TR(0x630bcc);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630bcf:{NFSU2_TR(0x630bcf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630bd1:{NFSU2_TR(0x630bd1);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630bd4:{NFSU2_TR(0x630bd4);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630bd7:{NFSU2_TR(0x630bd7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630bd9:{NFSU2_TR(0x630bd9);
{u32 ea_=u32(r4(R+0)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630bdc:{NFSU2_TR(0x630bdc);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630bdf:{NFSU2_TR(0x630bdf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630be1:{NFSU2_TR(0x630be1);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630be8:{NFSU2_TR(0x630be8);
{u32 ea_=u32(r4(R+0)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630beb:{NFSU2_TR(0x630beb);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630bee:{NFSU2_TR(0x630bee);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630bf1:{NFSU2_TR(0x630bf1);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B630bf5:{NFSU2_TR(0x630bf5);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630bf8:{NFSU2_TR(0x630bf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630bf9:{NFSU2_TR(0x630bf9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630bfb:{NFSU2_TR(0x630bfb);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630bfe:{NFSU2_TR(0x630bfe);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630c01:{NFSU2_TR(0x630c01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630c03:{NFSU2_TR(0x630c03);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630c06:{NFSU2_TR(0x630c06);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630c09:{NFSU2_TR(0x630c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630c0d:{NFSU2_TR(0x630c0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630c0e:{NFSU2_TR(0x630c0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630c10:{NFSU2_TR(0x630c10);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630c17:{NFSU2_TR(0x630c17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630c1cull));
TAIL_STATIC(0x4012b0u,401);
}
B630c1c:L630c1c:{c.instructions+=4;NFSU2_TR(0x630c1c);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B630c21:{NFSU2_TR(0x630c21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B630c24:{NFSU2_TR(0x630c24);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B630c27:{NFSU2_TR(0x630c27);
if(r1(R+518)){{goto L630c93;}}
}
B630c29:L630c29:{c.instructions+=1;NFSU2_TR(0x630c29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630c2eull));
TAIL_STATIC(0x499db0u,499);
}
B630c2e:L630c2e:{c.instructions+=2;NFSU2_TR(0x630c2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B630c30:{NFSU2_TR(0x630c30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L630c93;}}
}
B630c32:L630c32:{c.instructions+=23;NFSU2_TR(0x630c32);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B630c39:{NFSU2_TR(0x630c39);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B630c3b:{NFSU2_TR(0x630c3b);
w4(R+8,u32(0x1ull));
}
B630c40:{NFSU2_TR(0x630c40);
w4(R+0,u32(0x2ull));
}
B630c45:{NFSU2_TR(0x630c45);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630c49:{NFSU2_TR(0x630c49);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630c4d:{NFSU2_TR(0x630c4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630c51:{NFSU2_TR(0x630c51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630c55:{NFSU2_TR(0x630c55);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630c59:{NFSU2_TR(0x630c59);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630c5d:{NFSU2_TR(0x630c5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630c61:{NFSU2_TR(0x630c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630c65:{NFSU2_TR(0x630c65);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630c69:{NFSU2_TR(0x630c69);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630c6d:{NFSU2_TR(0x630c6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630c71:{NFSU2_TR(0x630c71);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630c75:{NFSU2_TR(0x630c75);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B630c79:{NFSU2_TR(0x630c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B630c7c:{NFSU2_TR(0x630c7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B630c80:{NFSU2_TR(0x630c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B630c83:{NFSU2_TR(0x630c83);
u8 U[12];
w4(U+0,u32(u32(u32(0x2b74ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B630c8a:{NFSU2_TR(0x630c8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B630c91:{NFSU2_TR(0x630c91);
{goto L630c9c;}
}
B630c93:L630c93:{c.instructions+=2;NFSU2_TR(0x630c93);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B630c9a:{NFSU2_TR(0x630c9a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B630c9c:L630c9c:{c.instructions+=2;NFSU2_TR(0x630c9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B630c9f:{NFSU2_TR(0x630c9f);
if(r1(R+518)){{goto L630ce1;}}
}
B630ca1:L630ca1:{c.instructions+=6;NFSU2_TR(0x630ca1);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630ca5:{NFSU2_TR(0x630ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x39cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B630cab:{NFSU2_TR(0x630cab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630cac:{NFSU2_TR(0x630cac);
u8 U[4];
w4(U+0,u32(0xd6d6080aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630cb1:{NFSU2_TR(0x630cb1);
__builtin_memmove((R+4),(R+24),4);
}
B630cb3:{NFSU2_TR(0x630cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630cb8ull));
TAIL_STATIC(0x48d860u,48d);
}
B630cb8:L630cb8:{c.instructions+=12;NFSU2_TR(0x630cb8);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B630cbf:{NFSU2_TR(0x630cbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630cc6:{NFSU2_TR(0x630cc6);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630ccd:{NFSU2_TR(0x630ccd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630ccf:{NFSU2_TR(0x630ccf);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B630cd1:{NFSU2_TR(0x630cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B630cd5:{NFSU2_TR(0x630cd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630cd6:{NFSU2_TR(0x630cd6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630cd7:{NFSU2_TR(0x630cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630cda:{NFSU2_TR(0x630cda);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630cdb:{NFSU2_TR(0x630cdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630cdc:{NFSU2_TR(0x630cdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630ce1ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B630ce1:L630ce1:{c.instructions+=12;NFSU2_TR(0x630ce1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B630ce8:{NFSU2_TR(0x630ce8);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B630cef:{NFSU2_TR(0x630cef);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630cf3:{NFSU2_TR(0x630cf3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B630cf4:{NFSU2_TR(0x630cf4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B630cf7:{NFSU2_TR(0x630cf7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
}
B630cfd:{NFSU2_TR(0x630cfd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B630d00:{NFSU2_TR(0x630d00);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B630d03:{NFSU2_TR(0x630d03);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630d0a:{NFSU2_TR(0x630d0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630d11:{NFSU2_TR(0x630d11);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630d15:{NFSU2_TR(0x630d15);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6309b0u);}goto L6309b0;}}
}
B630d1b:L630d1b:{c.instructions+=6;NFSU2_TR(0x630d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B630d1c:{NFSU2_TR(0x630d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B630d1d:{NFSU2_TR(0x630d1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B630d1e:{NFSU2_TR(0x630d1e);
__builtin_memmove((R+16),(R+20),4);
}
B630d20:{NFSU2_TR(0x630d20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B630d21:{NFSU2_TR(0x630d21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B630de0:L630de0:{c.instructions+=9;NFSU2_TR(0x630de0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630de1:{NFSU2_TR(0x630de1);
__builtin_memmove((R+20),(R+16),4);
}
B630de3:{NFSU2_TR(0x630de3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B630de6:{NFSU2_TR(0x630de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb4ull))));
}
B630dec:{NFSU2_TR(0x630dec);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B630df3:{NFSU2_TR(0x630df3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630df4:{NFSU2_TR(0x630df4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630df5:{NFSU2_TR(0x630df5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630df6:{NFSU2_TR(0x630df6);
if(r1(R+518)){TAIL_STATIC(0x631244u,631);}
}
B630dfc:L630dfc:{c.instructions+=3;NFSU2_TR(0x630dfc);
__builtin_memmove((R+0),gp(0x8026c8),4);
}
B630e01:{NFSU2_TR(0x630e01);
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
B630e03:{NFSU2_TR(0x630e03);
if(r1(R+518)){TAIL_STATIC(0x631244u,631);}
}
B630e09:L630e09:{c.instructions+=1;NFSU2_TR(0x630e09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630e0eull));
TAIL_STATIC(0x5b98a0u,5b9);
}
B630e0e:L630e0e:{c.instructions+=5;NFSU2_TR(0x630e0e);
__builtin_memmove((R+24),gp(0x8a30f0),4);
}
B630e14:{NFSU2_TR(0x630e14);
w4(R+4,u32(0x8a30f0ull));
}
B630e19:{NFSU2_TR(0x630e19);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630e1d:{NFSU2_TR(0x630e1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630e21:{NFSU2_TR(0x630e21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630e26ull));
TAIL_STATIC(0x502fd0u,502);
}
B630e26:L630e26:{c.instructions+=3;NFSU2_TR(0x630e26);
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
B630e28:{NFSU2_TR(0x630e28);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630e2c:{NFSU2_TR(0x630e2c);
if(r1(R+518)){TAIL_STATIC(0x631244u,631);}
}
B630e32:L630e32:{c.instructions+=1;NFSU2_TR(0x630e32);
{goto L630e40;}
}
B630e34:L630e34:{c.instructions+=2;NFSU2_TR(0x630e34);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B630e38:{NFSU2_TR(0x630e38);
{goto L630e40;}
}
B630e40:L630e40:{c.instructions+=4;NFSU2_TR(0x630e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630e43:{NFSU2_TR(0x630e43);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B630e45:{NFSU2_TR(0x630e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630e49:{NFSU2_TR(0x630e49);
if(r1(R+518)){TAIL_STATIC(0x631236u,631);}
}
B630e4f:L630e4f:{c.instructions+=3;NFSU2_TR(0x630e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630e55:{NFSU2_TR(0x630e55);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B630e57:{NFSU2_TR(0x630e57);
if(r1(R+518)){TAIL_STATIC(0x631236u,631);}
}
B630e5d:L630e5d:{c.instructions+=3;NFSU2_TR(0x630e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B630e60:{NFSU2_TR(0x630e60);
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
B630e62:{NFSU2_TR(0x630e62);
if(r1(R+518)){{goto L630e7c;}}
}
B630e64:L630e64:{c.instructions+=3;NFSU2_TR(0x630e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B630e67:{NFSU2_TR(0x630e67);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B630e6b:{NFSU2_TR(0x630e6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x631236u,631);}
}
B630e71:L630e71:{c.instructions+=2;NFSU2_TR(0x630e71);
u8 U[22];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B630e76:{NFSU2_TR(0x630e76);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x631236u,631);}
}
B630e7c:L630e7c:{c.instructions+=9;NFSU2_TR(0x630e7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802730ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B630e83:{NFSU2_TR(0x630e83);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802738ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B630e8a:{NFSU2_TR(0x630e8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((R+4),(U+0),4);
}
B630e90:{NFSU2_TR(0x630e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630e94:{NFSU2_TR(0x630e94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630e95:{NFSU2_TR(0x630e95);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B630e9c:{NFSU2_TR(0x630e9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630e9d:{NFSU2_TR(0x630e9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630ea1:{NFSU2_TR(0x630ea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630ea6ull));
TAIL_STATIC(0x4012b0u,401);
}
B630ea6:L630ea6:{c.instructions+=9;NFSU2_TR(0x630ea6);
{u32 ea_=u32(r4(R+24)+u32(2324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630eac:{NFSU2_TR(0x630eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B630eb2:{NFSU2_TR(0x630eb2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630eb6:{NFSU2_TR(0x630eb6);
{u32 ea_=u32(r4(R+24)+u32(2328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630ebc:{NFSU2_TR(0x630ebc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B630ebf:{NFSU2_TR(0x630ebf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B630ec1:{NFSU2_TR(0x630ec1);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630ec5:{NFSU2_TR(0x630ec5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630ec9:{NFSU2_TR(0x630ec9);
if(r1(R+518)){{goto L630f0b;}}
}
B630ecb:L630ecb:{c.instructions+=13;NFSU2_TR(0x630ecb);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630ed2:{NFSU2_TR(0x630ed2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B630ed4:{NFSU2_TR(0x630ed4);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630edb:{NFSU2_TR(0x630edb);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630ee2:{NFSU2_TR(0x630ee2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B630ee4:{NFSU2_TR(0x630ee4);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630eeb:{NFSU2_TR(0x630eeb);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630ef2:{NFSU2_TR(0x630ef2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B630ef4:{NFSU2_TR(0x630ef4);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630efb:{NFSU2_TR(0x630efb);
{u32 ea_=u32(u32(8340904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630f01:{NFSU2_TR(0x630f01);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B630f03:{NFSU2_TR(0x630f03);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B630f07:{NFSU2_TR(0x630f07);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630f0b:L630f0b:{c.instructions+=2;NFSU2_TR(0x630f0b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630f0d:{NFSU2_TR(0x630f0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630f12ull));
TAIL_STATIC(0x401e80u,401);
}
B630f12:L630f12:{c.instructions+=9;NFSU2_TR(0x630f12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B630f15:{NFSU2_TR(0x630f15);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B630f19:{NFSU2_TR(0x630f19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B630f1c:{NFSU2_TR(0x630f1c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x980ull))));
}
B630f22:{NFSU2_TR(0x630f22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B630f2a:{NFSU2_TR(0x630f2a);
__builtin_memmove((R+12),(R+12),4);
}
B630f30:{NFSU2_TR(0x630f30);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B630f33:{NFSU2_TR(0x630f33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630f34:{NFSU2_TR(0x630f34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630f39ull));
TAIL_STATIC(0x43c780u,43c);
}
B630f39:L630f39:{c.instructions+=3;NFSU2_TR(0x630f39);
{u32 ea_=u32(u32(9061624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630f3f:{NFSU2_TR(0x630f3f);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630f45:{NFSU2_TR(0x630f45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630f4aull));
TAIL_STATIC(0x75bed4u,75b);
}
B630f4a:L630f4a:{c.instructions+=12;NFSU2_TR(0x630f4a);
__builtin_memmove((R+4),(R+0),4);
}
B630f4c:{NFSU2_TR(0x630f4c);
w4(R+0,u32(0xb60b60b7ull));
}
B630f51:{NFSU2_TR(0x630f51);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B630f53:{NFSU2_TR(0x630f53);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B630f55:{NFSU2_TR(0x630f55);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B630f58:{NFSU2_TR(0x630f58);
__builtin_memmove((R+4),(R+8),4);
}
B630f5a:{NFSU2_TR(0x630f5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B630f5d:{NFSU2_TR(0x630f5d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B630f5f:{NFSU2_TR(0x630f5f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630f60:{NFSU2_TR(0x630f60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630f61:{NFSU2_TR(0x630f61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B630f62:{NFSU2_TR(0x630f62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x630f67ull));
TAIL_STATIC(0x5bada0u,5ba);
}
B630f67:L630f67:{c.instructions+=58;NFSU2_TR(0x630f67);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630f6a:{NFSU2_TR(0x630f6a);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630f6d:{NFSU2_TR(0x630f6d);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630f70:{NFSU2_TR(0x630f70);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630f73:{NFSU2_TR(0x630f73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630f75:{NFSU2_TR(0x630f75);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630f77:{NFSU2_TR(0x630f77);
{u32 ea_=u32(r4(R+24)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630f7a:{NFSU2_TR(0x630f7a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630f7c:{NFSU2_TR(0x630f7c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630f7e:{NFSU2_TR(0x630f7e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630f80:{NFSU2_TR(0x630f80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630f82:{NFSU2_TR(0x630f82);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630f86:{NFSU2_TR(0x630f86);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630f89:{NFSU2_TR(0x630f89);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630f8c:{NFSU2_TR(0x630f8c);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630f8f:{NFSU2_TR(0x630f8f);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630f92:{NFSU2_TR(0x630f92);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630f94:{NFSU2_TR(0x630f94);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630f97:{NFSU2_TR(0x630f97);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630f99:{NFSU2_TR(0x630f99);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630f9b:{NFSU2_TR(0x630f9b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630f9e:{NFSU2_TR(0x630f9e);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630fa0:{NFSU2_TR(0x630fa0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630fa2:{NFSU2_TR(0x630fa2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630fa6:{NFSU2_TR(0x630fa6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630fa9:{NFSU2_TR(0x630fa9);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630fac:{NFSU2_TR(0x630fac);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630faf:{NFSU2_TR(0x630faf);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630fb2:{NFSU2_TR(0x630fb2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630fb4:{NFSU2_TR(0x630fb4);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630fb7:{NFSU2_TR(0x630fb7);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630fb9:{NFSU2_TR(0x630fb9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630fbb:{NFSU2_TR(0x630fbb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630fbe:{NFSU2_TR(0x630fbe);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630fc0:{NFSU2_TR(0x630fc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630fc2:{NFSU2_TR(0x630fc2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630fc6:{NFSU2_TR(0x630fc6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630fc9:{NFSU2_TR(0x630fc9);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630fcc:{NFSU2_TR(0x630fcc);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630fcf:{NFSU2_TR(0x630fcf);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630fd2:{NFSU2_TR(0x630fd2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630fd4:{NFSU2_TR(0x630fd4);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630fd7:{NFSU2_TR(0x630fd7);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630fd9:{NFSU2_TR(0x630fd9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630fdb:{NFSU2_TR(0x630fdb);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630fde:{NFSU2_TR(0x630fde);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630fe0:{NFSU2_TR(0x630fe0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630fe2:{NFSU2_TR(0x630fe2);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B630fe6:{NFSU2_TR(0x630fe6);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630fe9:{NFSU2_TR(0x630fe9);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630fec:{NFSU2_TR(0x630fec);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630fef:{NFSU2_TR(0x630fef);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630ff2:{NFSU2_TR(0x630ff2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630ff4:{NFSU2_TR(0x630ff4);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630ff7:{NFSU2_TR(0x630ff7);
{u32 ea_=u32(r4(R+24)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B630ffa:{NFSU2_TR(0x630ffa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B630ffc:{NFSU2_TR(0x630ffc);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B630fff:{NFSU2_TR(0x630fff);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x631001u,631);
}
XIT:NFSU2_TR_EXIT(0x630,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
