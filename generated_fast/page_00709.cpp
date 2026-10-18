#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_708(u8* __restrict R,Cpu& c);
u32 body_70a(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x709,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x709,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_709(u8* __restrict R,Cpu& c);
u32 page_709(Cpu& c){return body_709(c.regs.data(),c);}
__attribute__((noinline)) u32 body_709(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x709000:goto L709000;
case 0x709004:c.instructions+=17;goto B709004;
case 0x709007:c.instructions+=16;goto B709007;
case 0x70900b:c.instructions+=15;goto B70900b;
case 0x70900e:c.instructions+=14;goto B70900e;
case 0x709012:c.instructions+=13;goto B709012;
case 0x709015:c.instructions+=12;goto B709015;
case 0x709019:c.instructions+=11;goto B709019;
case 0x70901c:c.instructions+=10;goto B70901c;
case 0x709020:c.instructions+=9;goto B709020;
case 0x709023:c.instructions+=8;goto B709023;
case 0x709025:c.instructions+=7;goto B709025;
case 0x709028:c.instructions+=6;goto B709028;
case 0x70902b:c.instructions+=5;goto B70902b;
case 0x70902e:c.instructions+=4;goto B70902e;
case 0x709031:c.instructions+=3;goto B709031;
case 0x709034:c.instructions+=2;goto B709034;
case 0x709037:c.instructions+=1;goto B709037;
case 0x70903e:goto L70903e;
case 0x709041:c.instructions+=8;goto B709041;
case 0x709045:c.instructions+=7;goto B709045;
case 0x709048:c.instructions+=6;goto B709048;
case 0x70904a:c.instructions+=5;goto B70904a;
case 0x70904d:c.instructions+=4;goto B70904d;
case 0x709050:c.instructions+=3;goto B709050;
case 0x709053:c.instructions+=2;goto B709053;
case 0x709057:c.instructions+=1;goto B709057;
case 0x709059:goto L709059;
case 0x709060:goto L709060;
case 0x709063:c.instructions+=8;goto B709063;
case 0x709067:c.instructions+=7;goto B709067;
case 0x70906a:c.instructions+=6;goto B70906a;
case 0x70906c:c.instructions+=5;goto B70906c;
case 0x70906f:c.instructions+=4;goto B70906f;
case 0x709072:c.instructions+=3;goto B709072;
case 0x709075:c.instructions+=2;goto B709075;
case 0x709079:c.instructions+=1;goto B709079;
case 0x70907b:goto L70907b;
case 0x70907e:c.instructions+=26;goto B70907e;
case 0x709081:c.instructions+=25;goto B709081;
case 0x709083:c.instructions+=24;goto B709083;
case 0x709085:c.instructions+=23;goto B709085;
case 0x709088:c.instructions+=22;goto B709088;
case 0x70908b:c.instructions+=21;goto B70908b;
case 0x70908e:c.instructions+=20;goto B70908e;
case 0x709091:c.instructions+=19;goto B709091;
case 0x709093:c.instructions+=18;goto B709093;
case 0x709095:c.instructions+=17;goto B709095;
case 0x709098:c.instructions+=16;goto B709098;
case 0x70909b:c.instructions+=15;goto B70909b;
case 0x70909e:c.instructions+=14;goto B70909e;
case 0x7090a1:c.instructions+=13;goto B7090a1;
case 0x7090a4:c.instructions+=12;goto B7090a4;
case 0x7090a7:c.instructions+=11;goto B7090a7;
case 0x7090aa:c.instructions+=10;goto B7090aa;
case 0x7090ac:c.instructions+=9;goto B7090ac;
case 0x7090af:c.instructions+=8;goto B7090af;
case 0x7090b2:c.instructions+=7;goto B7090b2;
case 0x7090b5:c.instructions+=6;goto B7090b5;
case 0x7090b9:c.instructions+=5;goto B7090b9;
case 0x7090bc:c.instructions+=4;goto B7090bc;
case 0x7090be:c.instructions+=3;goto B7090be;
case 0x7090c1:c.instructions+=2;goto B7090c1;
case 0x7090c4:c.instructions+=1;goto B7090c4;
case 0x7090ca:goto L7090ca;
case 0x7090cc:c.instructions+=1;goto B7090cc;
case 0x7090d2:goto L7090d2;
case 0x7090d4:c.instructions+=3;goto B7090d4;
case 0x7090d7:c.instructions+=2;goto B7090d7;
case 0x7090da:c.instructions+=1;goto B7090da;
case 0x7090e0:goto L7090e0;
case 0x7090e3:c.instructions+=3;goto B7090e3;
case 0x7090e5:c.instructions+=2;goto B7090e5;
case 0x7090e8:c.instructions+=1;goto B7090e8;
case 0x7090ee:goto L7090ee;
case 0x7090f2:c.instructions+=4;goto B7090f2;
case 0x7090f6:c.instructions+=3;goto B7090f6;
case 0x7090f8:c.instructions+=2;goto B7090f8;
case 0x7090fa:c.instructions+=1;goto B7090fa;
case 0x7090fc:goto L7090fc;
case 0x7090fe:c.instructions+=1;goto B7090fe;
case 0x709100:goto L709100;
case 0x709104:c.instructions+=1;goto B709104;
case 0x709106:goto L709106;
case 0x709109:c.instructions+=1;goto B709109;
case 0x70910b:goto L70910b;
case 0x70910f:c.instructions+=1;goto B70910f;
case 0x709111:goto L709111;
case 0x709115:goto L709115;
case 0x709119:c.instructions+=5;goto B709119;
case 0x70911c:c.instructions+=4;goto B70911c;
case 0x709120:c.instructions+=3;goto B709120;
case 0x709122:c.instructions+=2;goto B709122;
case 0x709124:c.instructions+=1;goto B709124;
case 0x709126:goto L709126;
case 0x709128:c.instructions+=1;goto B709128;
case 0x70912a:goto L70912a;
case 0x70912e:c.instructions+=1;goto B70912e;
case 0x709130:goto L709130;
case 0x709133:c.instructions+=1;goto B709133;
case 0x709135:goto L709135;
case 0x709139:c.instructions+=1;goto B709139;
case 0x70913b:goto L70913b;
case 0x70913f:goto L70913f;
case 0x709142:c.instructions+=85;goto B709142;
case 0x709145:c.instructions+=84;goto B709145;
case 0x709148:c.instructions+=83;goto B709148;
case 0x70914b:c.instructions+=82;goto B70914b;
case 0x70914d:c.instructions+=81;goto B70914d;
case 0x709150:c.instructions+=80;goto B709150;
case 0x709153:c.instructions+=79;goto B709153;
case 0x709157:c.instructions+=78;goto B709157;
case 0x709159:c.instructions+=77;goto B709159;
case 0x70915b:c.instructions+=76;goto B70915b;
case 0x70915e:c.instructions+=75;goto B70915e;
case 0x709160:c.instructions+=74;goto B709160;
case 0x709163:c.instructions+=73;goto B709163;
case 0x709166:c.instructions+=72;goto B709166;
case 0x709168:c.instructions+=71;goto B709168;
case 0x70916a:c.instructions+=70;goto B70916a;
case 0x70916c:c.instructions+=69;goto B70916c;
case 0x70916f:c.instructions+=68;goto B70916f;
case 0x709171:c.instructions+=67;goto B709171;
case 0x709173:c.instructions+=66;goto B709173;
case 0x709175:c.instructions+=65;goto B709175;
case 0x709178:c.instructions+=64;goto B709178;
case 0x70917b:c.instructions+=63;goto B70917b;
case 0x70917d:c.instructions+=62;goto B70917d;
case 0x709180:c.instructions+=61;goto B709180;
case 0x709182:c.instructions+=60;goto B709182;
case 0x709184:c.instructions+=59;goto B709184;
case 0x709187:c.instructions+=58;goto B709187;
case 0x709189:c.instructions+=57;goto B709189;
case 0x70918b:c.instructions+=56;goto B70918b;
case 0x70918e:c.instructions+=55;goto B70918e;
case 0x709191:c.instructions+=54;goto B709191;
case 0x709194:c.instructions+=53;goto B709194;
case 0x709197:c.instructions+=52;goto B709197;
case 0x70919a:c.instructions+=51;goto B70919a;
case 0x70919c:c.instructions+=50;goto B70919c;
case 0x70919e:c.instructions+=49;goto B70919e;
case 0x7091a1:c.instructions+=48;goto B7091a1;
case 0x7091a3:c.instructions+=47;goto B7091a3;
case 0x7091a5:c.instructions+=46;goto B7091a5;
case 0x7091a8:c.instructions+=45;goto B7091a8;
case 0x7091ab:c.instructions+=44;goto B7091ab;
case 0x7091ad:c.instructions+=43;goto B7091ad;
case 0x7091b0:c.instructions+=42;goto B7091b0;
case 0x7091b3:c.instructions+=41;goto B7091b3;
case 0x7091b6:c.instructions+=40;goto B7091b6;
case 0x7091b9:c.instructions+=39;goto B7091b9;
case 0x7091bc:c.instructions+=38;goto B7091bc;
case 0x7091be:c.instructions+=37;goto B7091be;
case 0x7091c1:c.instructions+=36;goto B7091c1;
case 0x7091c3:c.instructions+=35;goto B7091c3;
case 0x7091c6:c.instructions+=34;goto B7091c6;
case 0x7091c9:c.instructions+=33;goto B7091c9;
case 0x7091cc:c.instructions+=32;goto B7091cc;
case 0x7091cf:c.instructions+=31;goto B7091cf;
case 0x7091d2:c.instructions+=30;goto B7091d2;
case 0x7091d5:c.instructions+=29;goto B7091d5;
case 0x7091d8:c.instructions+=28;goto B7091d8;
case 0x7091db:c.instructions+=27;goto B7091db;
case 0x7091dd:c.instructions+=26;goto B7091dd;
case 0x7091e0:c.instructions+=25;goto B7091e0;
case 0x7091e2:c.instructions+=24;goto B7091e2;
case 0x7091e4:c.instructions+=23;goto B7091e4;
case 0x7091e7:c.instructions+=22;goto B7091e7;
case 0x7091ea:c.instructions+=21;goto B7091ea;
case 0x7091ed:c.instructions+=20;goto B7091ed;
case 0x7091f0:c.instructions+=19;goto B7091f0;
case 0x7091f3:c.instructions+=18;goto B7091f3;
case 0x7091f6:c.instructions+=17;goto B7091f6;
case 0x7091f8:c.instructions+=16;goto B7091f8;
case 0x7091fb:c.instructions+=15;goto B7091fb;
case 0x7091fd:c.instructions+=14;goto B7091fd;
case 0x7091ff:c.instructions+=13;goto B7091ff;
case 0x709202:c.instructions+=12;goto B709202;
case 0x709205:c.instructions+=11;goto B709205;
case 0x709208:c.instructions+=10;goto B709208;
case 0x70920b:c.instructions+=9;goto B70920b;
case 0x70920e:c.instructions+=8;goto B70920e;
case 0x709210:c.instructions+=7;goto B709210;
case 0x709213:c.instructions+=6;goto B709213;
case 0x709215:c.instructions+=5;goto B709215;
case 0x709217:c.instructions+=4;goto B709217;
case 0x70921a:c.instructions+=3;goto B70921a;
case 0x70921d:c.instructions+=2;goto B70921d;
case 0x709220:c.instructions+=1;goto B709220;
case 0x709222:goto L709222;
case 0x709225:c.instructions+=15;goto B709225;
case 0x709228:c.instructions+=14;goto B709228;
case 0x70922a:c.instructions+=13;goto B70922a;
case 0x70922c:c.instructions+=12;goto B70922c;
case 0x70922f:c.instructions+=11;goto B70922f;
case 0x709232:c.instructions+=10;goto B709232;
case 0x709236:c.instructions+=9;goto B709236;
case 0x709239:c.instructions+=8;goto B709239;
case 0x70923c:c.instructions+=7;goto B70923c;
case 0x70923f:c.instructions+=6;goto B70923f;
case 0x709242:c.instructions+=5;goto B709242;
case 0x709249:c.instructions+=4;goto B709249;
case 0x70924b:c.instructions+=3;goto B70924b;
case 0x70924e:c.instructions+=2;goto B70924e;
case 0x709254:c.instructions+=1;goto B709254;
case 0x709257:goto L709257;
case 0x70925a:c.instructions+=3;goto B70925a;
case 0x70925d:c.instructions+=2;goto B70925d;
case 0x709260:c.instructions+=1;goto B709260;
case 0x709266:goto L709266;
case 0x709269:c.instructions+=5;goto B709269;
case 0x70926c:c.instructions+=4;goto B70926c;
case 0x709270:c.instructions+=3;goto B709270;
case 0x709274:c.instructions+=2;goto B709274;
case 0x709277:c.instructions+=1;goto B709277;
case 0x70927d:goto L70927d;
case 0x70927e:c.instructions+=4;goto B70927e;
case 0x70927f:c.instructions+=3;goto B70927f;
case 0x709280:c.instructions+=2;goto B709280;
case 0x709281:c.instructions+=1;goto B709281;
case 0x709282:goto L709282;
case 0x709283:c.instructions+=13;goto B709283;
case 0x709285:c.instructions+=12;goto B709285;
case 0x709288:c.instructions+=11;goto B709288;
case 0x70928b:c.instructions+=10;goto B70928b;
case 0x70928e:c.instructions+=9;goto B70928e;
case 0x709291:c.instructions+=8;goto B709291;
case 0x709294:c.instructions+=7;goto B709294;
case 0x709297:c.instructions+=6;goto B709297;
case 0x709298:c.instructions+=5;goto B709298;
case 0x70929b:c.instructions+=4;goto B70929b;
case 0x70929f:c.instructions+=3;goto B70929f;
case 0x7092a1:c.instructions+=2;goto B7092a1;
case 0x7092a4:c.instructions+=1;goto B7092a4;
case 0x7092aa:goto L7092aa;
case 0x7092ad:c.instructions+=18;goto B7092ad;
case 0x7092b0:c.instructions+=17;goto B7092b0;
case 0x7092b3:c.instructions+=16;goto B7092b3;
case 0x7092b6:c.instructions+=15;goto B7092b6;
case 0x7092b9:c.instructions+=14;goto B7092b9;
case 0x7092bc:c.instructions+=13;goto B7092bc;
case 0x7092bd:c.instructions+=12;goto B7092bd;
case 0x7092be:c.instructions+=11;goto B7092be;
case 0x7092c1:c.instructions+=10;goto B7092c1;
case 0x7092c4:c.instructions+=9;goto B7092c4;
case 0x7092c7:c.instructions+=8;goto B7092c7;
case 0x7092ca:c.instructions+=7;goto B7092ca;
case 0x7092cd:c.instructions+=6;goto B7092cd;
case 0x7092d0:c.instructions+=5;goto B7092d0;
case 0x7092d2:c.instructions+=4;goto B7092d2;
case 0x7092d5:c.instructions+=3;goto B7092d5;
case 0x7092d8:c.instructions+=2;goto B7092d8;
case 0x7092db:c.instructions+=1;goto B7092db;
case 0x7092de:goto L7092de;
case 0x7092e1:c.instructions+=2;goto B7092e1;
case 0x7092e4:c.instructions+=1;goto B7092e4;
case 0x7092eb:goto L7092eb;
case 0x7092ef:c.instructions+=23;goto B7092ef;
case 0x7092f2:c.instructions+=22;goto B7092f2;
case 0x7092f5:c.instructions+=21;goto B7092f5;
case 0x7092f9:c.instructions+=20;goto B7092f9;
case 0x7092fd:c.instructions+=19;goto B7092fd;
case 0x709300:c.instructions+=18;goto B709300;
case 0x709303:c.instructions+=17;goto B709303;
case 0x709307:c.instructions+=16;goto B709307;
case 0x70930b:c.instructions+=15;goto B70930b;
case 0x70930f:c.instructions+=14;goto B70930f;
case 0x709312:c.instructions+=13;goto B709312;
case 0x709316:c.instructions+=12;goto B709316;
case 0x709319:c.instructions+=11;goto B709319;
case 0x70931d:c.instructions+=10;goto B70931d;
case 0x709320:c.instructions+=9;goto B709320;
case 0x709324:c.instructions+=8;goto B709324;
case 0x709327:c.instructions+=7;goto B709327;
case 0x70932b:c.instructions+=6;goto B70932b;
case 0x70932e:c.instructions+=5;goto B70932e;
case 0x709332:c.instructions+=4;goto B709332;
case 0x709335:c.instructions+=3;goto B709335;
case 0x709338:c.instructions+=2;goto B709338;
case 0x70933b:c.instructions+=1;goto B70933b;
case 0x709342:goto L709342;
case 0x709345:c.instructions+=9;goto B709345;
case 0x709348:c.instructions+=8;goto B709348;
case 0x70934c:c.instructions+=7;goto B70934c;
case 0x70934f:c.instructions+=6;goto B70934f;
case 0x709352:c.instructions+=5;goto B709352;
case 0x709355:c.instructions+=4;goto B709355;
case 0x709358:c.instructions+=3;goto B709358;
case 0x70935a:c.instructions+=2;goto B70935a;
case 0x70935c:c.instructions+=1;goto B70935c;
case 0x70935e:goto L70935e;
case 0x709360:c.instructions+=1;goto B709360;
case 0x709362:goto L709362;
case 0x709365:goto L709365;
case 0x709368:c.instructions+=3;goto B709368;
case 0x70936b:c.instructions+=2;goto B70936b;
case 0x70936f:c.instructions+=1;goto B70936f;
case 0x709371:goto L709371;
case 0x709378:goto L709378;
case 0x70937b:c.instructions+=7;goto B70937b;
case 0x70937e:c.instructions+=6;goto B70937e;
case 0x709382:c.instructions+=5;goto B709382;
case 0x709386:c.instructions+=4;goto B709386;
case 0x709389:c.instructions+=3;goto B709389;
case 0x70938b:c.instructions+=2;goto B70938b;
case 0x70938d:c.instructions+=1;goto B70938d;
case 0x70938f:goto L70938f;
case 0x709391:c.instructions+=1;goto B709391;
case 0x709393:goto L709393;
case 0x709396:goto L709396;
case 0x709399:c.instructions+=3;goto B709399;
case 0x70939c:c.instructions+=2;goto B70939c;
case 0x7093a0:c.instructions+=1;goto B7093a0;
case 0x7093a2:goto L7093a2;
case 0x7093a5:c.instructions+=2;goto B7093a5;
case 0x7093a8:c.instructions+=1;goto B7093a8;
case 0x7093ae:goto L7093ae;
case 0x7093b1:c.instructions+=1;goto B7093b1;
case 0x7093b7:goto L7093b7;
case 0x7093b9:c.instructions+=3;goto B7093b9;
case 0x7093bc:c.instructions+=2;goto B7093bc;
case 0x7093bf:c.instructions+=1;goto B7093bf;
case 0x7093c5:goto L7093c5;
case 0x7093c8:c.instructions+=3;goto B7093c8;
case 0x7093ca:c.instructions+=2;goto B7093ca;
case 0x7093cd:c.instructions+=1;goto B7093cd;
case 0x7093d3:goto L7093d3;
case 0x7093d6:c.instructions+=56;goto B7093d6;
case 0x7093d9:c.instructions+=55;goto B7093d9;
case 0x7093dc:c.instructions+=54;goto B7093dc;
case 0x7093de:c.instructions+=53;goto B7093de;
case 0x7093e1:c.instructions+=52;goto B7093e1;
case 0x7093e4:c.instructions+=51;goto B7093e4;
case 0x7093e8:c.instructions+=50;goto B7093e8;
case 0x7093ea:c.instructions+=49;goto B7093ea;
case 0x7093ed:c.instructions+=48;goto B7093ed;
case 0x7093f0:c.instructions+=47;goto B7093f0;
case 0x7093f2:c.instructions+=46;goto B7093f2;
case 0x7093f5:c.instructions+=45;goto B7093f5;
case 0x7093f7:c.instructions+=44;goto B7093f7;
case 0x7093fa:c.instructions+=43;goto B7093fa;
case 0x7093fc:c.instructions+=42;goto B7093fc;
case 0x7093ff:c.instructions+=41;goto B7093ff;
case 0x709401:c.instructions+=40;goto B709401;
case 0x709404:c.instructions+=39;goto B709404;
case 0x709407:c.instructions+=38;goto B709407;
case 0x709409:c.instructions+=37;goto B709409;
case 0x70940c:c.instructions+=36;goto B70940c;
case 0x70940e:c.instructions+=35;goto B70940e;
case 0x709411:c.instructions+=34;goto B709411;
case 0x709414:c.instructions+=33;goto B709414;
case 0x709417:c.instructions+=32;goto B709417;
case 0x70941a:c.instructions+=31;goto B70941a;
case 0x70941c:c.instructions+=30;goto B70941c;
case 0x70941f:c.instructions+=29;goto B70941f;
case 0x709421:c.instructions+=28;goto B709421;
case 0x709424:c.instructions+=27;goto B709424;
case 0x709427:c.instructions+=26;goto B709427;
case 0x70942a:c.instructions+=25;goto B70942a;
case 0x70942d:c.instructions+=24;goto B70942d;
case 0x70942f:c.instructions+=23;goto B70942f;
case 0x709432:c.instructions+=22;goto B709432;
case 0x709435:c.instructions+=21;goto B709435;
case 0x709438:c.instructions+=20;goto B709438;
case 0x70943b:c.instructions+=19;goto B70943b;
case 0x70943e:c.instructions+=18;goto B70943e;
case 0x709440:c.instructions+=17;goto B709440;
case 0x709443:c.instructions+=16;goto B709443;
case 0x709445:c.instructions+=15;goto B709445;
case 0x709448:c.instructions+=14;goto B709448;
case 0x70944b:c.instructions+=13;goto B70944b;
case 0x70944e:c.instructions+=12;goto B70944e;
case 0x709451:c.instructions+=11;goto B709451;
case 0x709453:c.instructions+=10;goto B709453;
case 0x709456:c.instructions+=9;goto B709456;
case 0x709458:c.instructions+=8;goto B709458;
case 0x70945b:c.instructions+=7;goto B70945b;
case 0x70945e:c.instructions+=6;goto B70945e;
case 0x709461:c.instructions+=5;goto B709461;
case 0x709464:c.instructions+=4;goto B709464;
case 0x709467:c.instructions+=3;goto B709467;
case 0x70946a:c.instructions+=2;goto B70946a;
case 0x70946d:c.instructions+=1;goto B70946d;
case 0x70946f:goto L70946f;
case 0x709472:c.instructions+=15;goto B709472;
case 0x709475:c.instructions+=14;goto B709475;
case 0x709477:c.instructions+=13;goto B709477;
case 0x709479:c.instructions+=12;goto B709479;
case 0x70947c:c.instructions+=11;goto B70947c;
case 0x70947f:c.instructions+=10;goto B70947f;
case 0x709483:c.instructions+=9;goto B709483;
case 0x709486:c.instructions+=8;goto B709486;
case 0x709489:c.instructions+=7;goto B709489;
case 0x70948c:c.instructions+=6;goto B70948c;
case 0x70948f:c.instructions+=5;goto B70948f;
case 0x709496:c.instructions+=4;goto B709496;
case 0x709498:c.instructions+=3;goto B709498;
case 0x70949b:c.instructions+=2;goto B70949b;
case 0x7094a1:c.instructions+=1;goto B7094a1;
case 0x7094a4:goto L7094a4;
case 0x7094a7:c.instructions+=3;goto B7094a7;
case 0x7094aa:c.instructions+=2;goto B7094aa;
case 0x7094ad:c.instructions+=1;goto B7094ad;
case 0x7094b3:goto L7094b3;
case 0x7094b7:c.instructions+=3;goto B7094b7;
case 0x7094bb:c.instructions+=2;goto B7094bb;
case 0x7094be:c.instructions+=1;goto B7094be;
case 0x7094c4:goto L7094c4;
case 0x7094c5:c.instructions+=1;goto B7094c5;
case 0x7094c6:goto L7094c6;
case 0x7094c7:c.instructions+=2;goto B7094c7;
case 0x7094c8:c.instructions+=1;goto B7094c8;
case 0x7094c9:goto L7094c9;
case 0x7094ca:c.instructions+=19;goto B7094ca;
case 0x7094cc:c.instructions+=18;goto B7094cc;
case 0x7094d2:c.instructions+=17;goto B7094d2;
case 0x7094d5:c.instructions+=16;goto B7094d5;
case 0x7094d6:c.instructions+=15;goto B7094d6;
case 0x7094d7:c.instructions+=14;goto B7094d7;
case 0x7094da:c.instructions+=13;goto B7094da;
case 0x7094dd:c.instructions+=12;goto B7094dd;
case 0x7094e0:c.instructions+=11;goto B7094e0;
case 0x7094e1:c.instructions+=10;goto B7094e1;
case 0x7094e4:c.instructions+=9;goto B7094e4;
case 0x7094e6:c.instructions+=8;goto B7094e6;
case 0x7094e8:c.instructions+=7;goto B7094e8;
case 0x7094eb:c.instructions+=6;goto B7094eb;
case 0x7094ed:c.instructions+=5;goto B7094ed;
case 0x7094f0:c.instructions+=4;goto B7094f0;
case 0x7094f3:c.instructions+=3;goto B7094f3;
case 0x7094f6:c.instructions+=2;goto B7094f6;
case 0x7094fc:c.instructions+=1;goto B7094fc;
case 0x709502:goto L709502;
case 0x709505:c.instructions+=51;goto B709505;
case 0x709508:c.instructions+=50;goto B709508;
case 0x70950b:c.instructions+=49;goto B70950b;
case 0x70950e:c.instructions+=48;goto B70950e;
case 0x709511:c.instructions+=47;goto B709511;
case 0x709514:c.instructions+=46;goto B709514;
case 0x709517:c.instructions+=45;goto B709517;
case 0x70951a:c.instructions+=44;goto B70951a;
case 0x709520:c.instructions+=43;goto B709520;
case 0x709522:c.instructions+=42;goto B709522;
case 0x709525:c.instructions+=41;goto B709525;
case 0x709528:c.instructions+=40;goto B709528;
case 0x70952e:c.instructions+=39;goto B70952e;
case 0x709531:c.instructions+=38;goto B709531;
case 0x709534:c.instructions+=37;goto B709534;
case 0x709536:c.instructions+=36;goto B709536;
case 0x709539:c.instructions+=35;goto B709539;
case 0x70953c:c.instructions+=34;goto B70953c;
case 0x709542:c.instructions+=33;goto B709542;
case 0x709548:c.instructions+=32;goto B709548;
case 0x70954e:c.instructions+=31;goto B70954e;
case 0x709554:c.instructions+=30;goto B709554;
case 0x70955a:c.instructions+=29;goto B70955a;
case 0x709560:c.instructions+=28;goto B709560;
case 0x709566:c.instructions+=27;goto B709566;
case 0x709568:c.instructions+=26;goto B709568;
case 0x70956b:c.instructions+=25;goto B70956b;
case 0x70956e:c.instructions+=24;goto B70956e;
case 0x709570:c.instructions+=23;goto B709570;
case 0x709573:c.instructions+=22;goto B709573;
case 0x709579:c.instructions+=21;goto B709579;
case 0x70957c:c.instructions+=20;goto B70957c;
case 0x70957f:c.instructions+=19;goto B70957f;
case 0x709585:c.instructions+=18;goto B709585;
case 0x70958b:c.instructions+=17;goto B70958b;
case 0x70958e:c.instructions+=16;goto B70958e;
case 0x709591:c.instructions+=15;goto B709591;
case 0x709593:c.instructions+=14;goto B709593;
case 0x709596:c.instructions+=13;goto B709596;
case 0x709599:c.instructions+=12;goto B709599;
case 0x70959c:c.instructions+=11;goto B70959c;
case 0x70959f:c.instructions+=10;goto B70959f;
case 0x7095a1:c.instructions+=9;goto B7095a1;
case 0x7095a3:c.instructions+=8;goto B7095a3;
case 0x7095a5:c.instructions+=7;goto B7095a5;
case 0x7095a7:c.instructions+=6;goto B7095a7;
case 0x7095a9:c.instructions+=5;goto B7095a9;
case 0x7095ac:c.instructions+=4;goto B7095ac;
case 0x7095af:c.instructions+=3;goto B7095af;
case 0x7095b2:c.instructions+=2;goto B7095b2;
case 0x7095b5:c.instructions+=1;goto B7095b5;
case 0x7095b6:goto L7095b6;
case 0x7095b9:c.instructions+=18;goto B7095b9;
case 0x7095bc:c.instructions+=17;goto B7095bc;
case 0x7095c2:c.instructions+=16;goto B7095c2;
case 0x7095c5:c.instructions+=15;goto B7095c5;
case 0x7095c8:c.instructions+=14;goto B7095c8;
case 0x7095cb:c.instructions+=13;goto B7095cb;
case 0x7095ce:c.instructions+=12;goto B7095ce;
case 0x7095d1:c.instructions+=11;goto B7095d1;
case 0x7095d4:c.instructions+=10;goto B7095d4;
case 0x7095d7:c.instructions+=9;goto B7095d7;
case 0x7095da:c.instructions+=8;goto B7095da;
case 0x7095dd:c.instructions+=7;goto B7095dd;
case 0x7095e0:c.instructions+=6;goto B7095e0;
case 0x7095e3:c.instructions+=5;goto B7095e3;
case 0x7095e6:c.instructions+=4;goto B7095e6;
case 0x7095e9:c.instructions+=3;goto B7095e9;
case 0x7095ec:c.instructions+=2;goto B7095ec;
case 0x7095f2:c.instructions+=1;goto B7095f2;
case 0x7095f5:goto L7095f5;
case 0x7095fb:c.instructions+=41;goto B7095fb;
case 0x7095fd:c.instructions+=40;goto B7095fd;
case 0x709603:c.instructions+=39;goto B709603;
case 0x709606:c.instructions+=38;goto B709606;
case 0x709609:c.instructions+=37;goto B709609;
case 0x70960f:c.instructions+=36;goto B70960f;
case 0x709611:c.instructions+=35;goto B709611;
case 0x709617:c.instructions+=34;goto B709617;
case 0x70961a:c.instructions+=33;goto B70961a;
case 0x70961d:c.instructions+=32;goto B70961d;
case 0x709620:c.instructions+=31;goto B709620;
case 0x709626:c.instructions+=30;goto B709626;
case 0x709628:c.instructions+=29;goto B709628;
case 0x70962e:c.instructions+=28;goto B70962e;
case 0x709631:c.instructions+=27;goto B709631;
case 0x709634:c.instructions+=26;goto B709634;
case 0x70963a:c.instructions+=25;goto B70963a;
case 0x70963e:c.instructions+=24;goto B70963e;
case 0x709644:c.instructions+=23;goto B709644;
case 0x709647:c.instructions+=22;goto B709647;
case 0x70964a:c.instructions+=21;goto B70964a;
case 0x70964c:c.instructions+=20;goto B70964c;
case 0x709652:c.instructions+=19;goto B709652;
case 0x709658:c.instructions+=18;goto B709658;
case 0x70965a:c.instructions+=17;goto B70965a;
case 0x709660:c.instructions+=16;goto B709660;
case 0x709663:c.instructions+=15;goto B709663;
case 0x709666:c.instructions+=14;goto B709666;
case 0x70966c:c.instructions+=13;goto B70966c;
case 0x709670:c.instructions+=12;goto B709670;
case 0x709673:c.instructions+=11;goto B709673;
case 0x709676:c.instructions+=10;goto B709676;
case 0x709679:c.instructions+=9;goto B709679;
case 0x70967c:c.instructions+=8;goto B70967c;
case 0x70967e:c.instructions+=7;goto B70967e;
case 0x709681:c.instructions+=6;goto B709681;
case 0x709684:c.instructions+=5;goto B709684;
case 0x709687:c.instructions+=4;goto B709687;
case 0x70968a:c.instructions+=3;goto B70968a;
case 0x70968d:c.instructions+=2;goto B70968d;
case 0x709690:c.instructions+=1;goto B709690;
case 0x709697:goto L709697;
case 0x70969a:c.instructions+=8;goto B70969a;
case 0x70969e:c.instructions+=7;goto B70969e;
case 0x7096a1:c.instructions+=6;goto B7096a1;
case 0x7096a3:c.instructions+=5;goto B7096a3;
case 0x7096a6:c.instructions+=4;goto B7096a6;
case 0x7096a9:c.instructions+=3;goto B7096a9;
case 0x7096ac:c.instructions+=2;goto B7096ac;
case 0x7096b0:c.instructions+=1;goto B7096b0;
case 0x7096b2:goto L7096b2;
case 0x7096b9:goto L7096b9;
case 0x7096bc:c.instructions+=8;goto B7096bc;
case 0x7096c0:c.instructions+=7;goto B7096c0;
case 0x7096c3:c.instructions+=6;goto B7096c3;
case 0x7096c5:c.instructions+=5;goto B7096c5;
case 0x7096c8:c.instructions+=4;goto B7096c8;
case 0x7096cb:c.instructions+=3;goto B7096cb;
case 0x7096ce:c.instructions+=2;goto B7096ce;
case 0x7096d2:c.instructions+=1;goto B7096d2;
case 0x7096d4:goto L7096d4;
case 0x7096d7:c.instructions+=26;goto B7096d7;
case 0x7096da:c.instructions+=25;goto B7096da;
case 0x7096dc:c.instructions+=24;goto B7096dc;
case 0x7096de:c.instructions+=23;goto B7096de;
case 0x7096e1:c.instructions+=22;goto B7096e1;
case 0x7096e4:c.instructions+=21;goto B7096e4;
case 0x7096e7:c.instructions+=20;goto B7096e7;
case 0x7096ea:c.instructions+=19;goto B7096ea;
case 0x7096ec:c.instructions+=18;goto B7096ec;
case 0x7096ee:c.instructions+=17;goto B7096ee;
case 0x7096f1:c.instructions+=16;goto B7096f1;
case 0x7096f4:c.instructions+=15;goto B7096f4;
case 0x7096f7:c.instructions+=14;goto B7096f7;
case 0x7096fa:c.instructions+=13;goto B7096fa;
case 0x7096fd:c.instructions+=12;goto B7096fd;
case 0x7096ff:c.instructions+=11;goto B7096ff;
case 0x709702:c.instructions+=10;goto B709702;
case 0x709704:c.instructions+=9;goto B709704;
case 0x709707:c.instructions+=8;goto B709707;
case 0x70970a:c.instructions+=7;goto B70970a;
case 0x70970d:c.instructions+=6;goto B70970d;
case 0x70970f:c.instructions+=5;goto B70970f;
case 0x709712:c.instructions+=4;goto B709712;
case 0x709714:c.instructions+=3;goto B709714;
case 0x709717:c.instructions+=2;goto B709717;
case 0x70971a:c.instructions+=1;goto B70971a;
case 0x709720:goto L709720;
case 0x709722:c.instructions+=1;goto B709722;
case 0x709728:goto L709728;
case 0x70972a:c.instructions+=3;goto B70972a;
case 0x70972c:c.instructions+=2;goto B70972c;
case 0x70972f:c.instructions+=1;goto B70972f;
case 0x709735:goto L709735;
case 0x709737:c.instructions+=3;goto B709737;
case 0x709739:c.instructions+=2;goto B709739;
case 0x70973c:c.instructions+=1;goto B70973c;
case 0x709742:goto L709742;
case 0x709748:c.instructions+=8;goto B709748;
case 0x70974b:c.instructions+=7;goto B70974b;
case 0x709751:c.instructions+=6;goto B709751;
case 0x709754:c.instructions+=5;goto B709754;
case 0x709757:c.instructions+=4;goto B709757;
case 0x709759:c.instructions+=3;goto B709759;
case 0x70975b:c.instructions+=2;goto B70975b;
case 0x70975e:c.instructions+=1;goto B70975e;
case 0x709760:goto L709760;
case 0x709762:c.instructions+=1;goto B709762;
case 0x709765:goto L709765;
case 0x709768:c.instructions+=2;goto B709768;
case 0x70976b:c.instructions+=1;goto B70976b;
case 0x70976d:goto L70976d;
case 0x709770:goto L709770;
case 0x709773:c.instructions+=9;goto B709773;
case 0x709779:c.instructions+=8;goto B709779;
case 0x70977c:c.instructions+=7;goto B70977c;
case 0x70977f:c.instructions+=6;goto B70977f;
case 0x709782:c.instructions+=5;goto B709782;
case 0x709785:c.instructions+=4;goto B709785;
case 0x709787:c.instructions+=3;goto B709787;
case 0x709789:c.instructions+=2;goto B709789;
case 0x70978f:c.instructions+=1;goto B70978f;
case 0x709791:goto L709791;
case 0x709793:c.instructions+=1;goto B709793;
case 0x709796:goto L709796;
case 0x709799:c.instructions+=2;goto B709799;
case 0x70979f:c.instructions+=1;goto B70979f;
case 0x7097a1:goto L7097a1;
case 0x7097a4:goto L7097a4;
case 0x7097a7:c.instructions+=91;goto B7097a7;
case 0x7097aa:c.instructions+=90;goto B7097aa;
case 0x7097ad:c.instructions+=89;goto B7097ad;
case 0x7097b0:c.instructions+=88;goto B7097b0;
case 0x7097b3:c.instructions+=87;goto B7097b3;
case 0x7097b6:c.instructions+=86;goto B7097b6;
case 0x7097b9:c.instructions+=85;goto B7097b9;
case 0x7097bd:c.instructions+=84;goto B7097bd;
case 0x7097bf:c.instructions+=83;goto B7097bf;
case 0x7097c1:c.instructions+=82;goto B7097c1;
case 0x7097c3:c.instructions+=81;goto B7097c3;
case 0x7097c5:c.instructions+=80;goto B7097c5;
case 0x7097c8:c.instructions+=79;goto B7097c8;
case 0x7097ca:c.instructions+=78;goto B7097ca;
case 0x7097cc:c.instructions+=77;goto B7097cc;
case 0x7097cf:c.instructions+=76;goto B7097cf;
case 0x7097d1:c.instructions+=75;goto B7097d1;
case 0x7097d3:c.instructions+=74;goto B7097d3;
case 0x7097d5:c.instructions+=73;goto B7097d5;
case 0x7097d8:c.instructions+=72;goto B7097d8;
case 0x7097db:c.instructions+=71;goto B7097db;
case 0x7097de:c.instructions+=70;goto B7097de;
case 0x7097e0:c.instructions+=69;goto B7097e0;
case 0x7097e3:c.instructions+=68;goto B7097e3;
case 0x7097e6:c.instructions+=67;goto B7097e6;
case 0x7097e9:c.instructions+=66;goto B7097e9;
case 0x7097ec:c.instructions+=65;goto B7097ec;
case 0x7097ef:c.instructions+=64;goto B7097ef;
case 0x7097f1:c.instructions+=63;goto B7097f1;
case 0x7097f4:c.instructions+=62;goto B7097f4;
case 0x7097f6:c.instructions+=61;goto B7097f6;
case 0x7097f8:c.instructions+=60;goto B7097f8;
case 0x7097fb:c.instructions+=59;goto B7097fb;
case 0x7097fe:c.instructions+=58;goto B7097fe;
case 0x709801:c.instructions+=57;goto B709801;
case 0x709804:c.instructions+=56;goto B709804;
case 0x709807:c.instructions+=55;goto B709807;
case 0x70980a:c.instructions+=54;goto B70980a;
case 0x70980d:c.instructions+=53;goto B70980d;
case 0x70980f:c.instructions+=52;goto B70980f;
case 0x709812:c.instructions+=51;goto B709812;
case 0x709814:c.instructions+=50;goto B709814;
case 0x709816:c.instructions+=49;goto B709816;
case 0x709819:c.instructions+=48;goto B709819;
case 0x70981c:c.instructions+=47;goto B70981c;
case 0x70981f:c.instructions+=46;goto B70981f;
case 0x709822:c.instructions+=45;goto B709822;
case 0x709825:c.instructions+=44;goto B709825;
case 0x709828:c.instructions+=43;goto B709828;
case 0x70982b:c.instructions+=42;goto B70982b;
case 0x70982e:c.instructions+=41;goto B70982e;
case 0x709830:c.instructions+=40;goto B709830;
case 0x709833:c.instructions+=39;goto B709833;
case 0x709835:c.instructions+=38;goto B709835;
case 0x709837:c.instructions+=37;goto B709837;
case 0x70983a:c.instructions+=36;goto B70983a;
case 0x70983d:c.instructions+=35;goto B70983d;
case 0x709840:c.instructions+=34;goto B709840;
case 0x709843:c.instructions+=33;goto B709843;
case 0x709846:c.instructions+=32;goto B709846;
case 0x709849:c.instructions+=31;goto B709849;
case 0x70984c:c.instructions+=30;goto B70984c;
case 0x70984f:c.instructions+=29;goto B70984f;
case 0x709852:c.instructions+=28;goto B709852;
case 0x709855:c.instructions+=27;goto B709855;
case 0x709858:c.instructions+=26;goto B709858;
case 0x70985a:c.instructions+=25;goto B70985a;
case 0x70985d:c.instructions+=24;goto B70985d;
case 0x70985f:c.instructions+=23;goto B70985f;
case 0x709861:c.instructions+=22;goto B709861;
case 0x709864:c.instructions+=21;goto B709864;
case 0x709867:c.instructions+=20;goto B709867;
case 0x70986a:c.instructions+=19;goto B70986a;
case 0x70986d:c.instructions+=18;goto B70986d;
case 0x709870:c.instructions+=17;goto B709870;
case 0x709873:c.instructions+=16;goto B709873;
case 0x709875:c.instructions+=15;goto B709875;
case 0x709878:c.instructions+=14;goto B709878;
case 0x70987a:c.instructions+=13;goto B70987a;
case 0x70987c:c.instructions+=12;goto B70987c;
case 0x70987f:c.instructions+=11;goto B70987f;
case 0x709882:c.instructions+=10;goto B709882;
case 0x709885:c.instructions+=9;goto B709885;
case 0x709887:c.instructions+=8;goto B709887;
case 0x70988a:c.instructions+=7;goto B70988a;
case 0x70988c:c.instructions+=6;goto B70988c;
case 0x70988f:c.instructions+=5;goto B70988f;
case 0x709891:c.instructions+=4;goto B709891;
case 0x709893:c.instructions+=3;goto B709893;
case 0x709896:c.instructions+=2;goto B709896;
case 0x709899:c.instructions+=1;goto B709899;
case 0x70989b:goto L70989b;
case 0x70989e:c.instructions+=37;goto B70989e;
case 0x7098a0:c.instructions+=36;goto B7098a0;
case 0x7098a2:c.instructions+=35;goto B7098a2;
case 0x7098a5:c.instructions+=34;goto B7098a5;
case 0x7098a8:c.instructions+=33;goto B7098a8;
case 0x7098ac:c.instructions+=32;goto B7098ac;
case 0x7098af:c.instructions+=31;goto B7098af;
case 0x7098b2:c.instructions+=30;goto B7098b2;
case 0x7098b5:c.instructions+=29;goto B7098b5;
case 0x7098b8:c.instructions+=28;goto B7098b8;
case 0x7098bf:c.instructions+=27;goto B7098bf;
case 0x7098c2:c.instructions+=26;goto B7098c2;
case 0x7098c4:c.instructions+=25;goto B7098c4;
case 0x7098c7:c.instructions+=24;goto B7098c7;
case 0x7098ca:c.instructions+=23;goto B7098ca;
case 0x7098d0:c.instructions+=22;goto B7098d0;
case 0x7098d3:c.instructions+=21;goto B7098d3;
case 0x7098d6:c.instructions+=20;goto B7098d6;
case 0x7098dc:c.instructions+=19;goto B7098dc;
case 0x7098de:c.instructions+=18;goto B7098de;
case 0x7098e1:c.instructions+=17;goto B7098e1;
case 0x7098e3:c.instructions+=16;goto B7098e3;
case 0x7098e9:c.instructions+=15;goto B7098e9;
case 0x7098eb:c.instructions+=14;goto B7098eb;
case 0x7098ee:c.instructions+=13;goto B7098ee;
case 0x7098f4:c.instructions+=12;goto B7098f4;
case 0x7098f6:c.instructions+=11;goto B7098f6;
case 0x7098f9:c.instructions+=10;goto B7098f9;
case 0x7098fc:c.instructions+=9;goto B7098fc;
case 0x709902:c.instructions+=8;goto B709902;
case 0x709904:c.instructions+=7;goto B709904;
case 0x709907:c.instructions+=6;goto B709907;
case 0x70990a:c.instructions+=5;goto B70990a;
case 0x709910:c.instructions+=4;goto B709910;
case 0x709913:c.instructions+=3;goto B709913;
case 0x709915:c.instructions+=2;goto B709915;
case 0x709918:c.instructions+=1;goto B709918;
case 0x70991a:goto L70991a;
case 0x709920:c.instructions+=12;goto B709920;
case 0x709926:c.instructions+=11;goto B709926;
case 0x709929:c.instructions+=10;goto B709929;
case 0x70992f:c.instructions+=9;goto B70992f;
case 0x709930:c.instructions+=8;goto B709930;
case 0x709933:c.instructions+=7;goto B709933;
case 0x709934:c.instructions+=6;goto B709934;
case 0x709936:c.instructions+=5;goto B709936;
case 0x709937:c.instructions+=4;goto B709937;
case 0x70993a:c.instructions+=3;goto B70993a;
case 0x70993b:c.instructions+=2;goto B70993b;
case 0x709941:c.instructions+=1;goto B709941;
case 0x709947:goto L709947;
case 0x70994a:c.instructions+=2;goto B70994a;
case 0x70994d:c.instructions+=1;goto B70994d;
case 0x70994f:goto L70994f;
case 0x709952:c.instructions+=10;goto B709952;
case 0x709955:c.instructions+=9;goto B709955;
case 0x709958:c.instructions+=8;goto B709958;
case 0x70995b:c.instructions+=7;goto B70995b;
case 0x70995e:c.instructions+=6;goto B70995e;
case 0x709961:c.instructions+=5;goto B709961;
case 0x709964:c.instructions+=4;goto B709964;
case 0x709967:c.instructions+=3;goto B709967;
case 0x70996b:c.instructions+=2;goto B70996b;
case 0x70996f:c.instructions+=1;goto B70996f;
case 0x709974:goto L709974;
case 0x709977:c.instructions+=14;goto B709977;
case 0x70997a:c.instructions+=13;goto B70997a;
case 0x70997d:c.instructions+=12;goto B70997d;
case 0x709980:c.instructions+=11;goto B709980;
case 0x709983:c.instructions+=10;goto B709983;
case 0x709986:c.instructions+=9;goto B709986;
case 0x709989:c.instructions+=8;goto B709989;
case 0x70998c:c.instructions+=7;goto B70998c;
case 0x70998f:c.instructions+=6;goto B70998f;
case 0x709992:c.instructions+=5;goto B709992;
case 0x709995:c.instructions+=4;goto B709995;
case 0x709998:c.instructions+=3;goto B709998;
case 0x70999b:c.instructions+=2;goto B70999b;
case 0x70999e:c.instructions+=1;goto B70999e;
case 0x7099a1:goto L7099a1;
case 0x7099a5:c.instructions+=21;goto B7099a5;
case 0x7099a9:c.instructions+=20;goto B7099a9;
case 0x7099ad:c.instructions+=19;goto B7099ad;
case 0x7099b1:c.instructions+=18;goto B7099b1;
case 0x7099b4:c.instructions+=17;goto B7099b4;
case 0x7099b7:c.instructions+=16;goto B7099b7;
case 0x7099ba:c.instructions+=15;goto B7099ba;
case 0x7099be:c.instructions+=14;goto B7099be;
case 0x7099c1:c.instructions+=13;goto B7099c1;
case 0x7099c5:c.instructions+=12;goto B7099c5;
case 0x7099c8:c.instructions+=11;goto B7099c8;
case 0x7099cc:c.instructions+=10;goto B7099cc;
case 0x7099cf:c.instructions+=9;goto B7099cf;
case 0x7099d1:c.instructions+=8;goto B7099d1;
case 0x7099d4:c.instructions+=7;goto B7099d4;
case 0x7099d7:c.instructions+=6;goto B7099d7;
case 0x7099da:c.instructions+=5;goto B7099da;
case 0x7099dd:c.instructions+=4;goto B7099dd;
case 0x7099e0:c.instructions+=3;goto B7099e0;
case 0x7099e3:c.instructions+=2;goto B7099e3;
case 0x7099e6:c.instructions+=1;goto B7099e6;
case 0x7099ed:goto L7099ed;
case 0x7099f0:c.instructions+=8;goto B7099f0;
case 0x7099f4:c.instructions+=7;goto B7099f4;
case 0x7099f7:c.instructions+=6;goto B7099f7;
case 0x7099f9:c.instructions+=5;goto B7099f9;
case 0x7099fc:c.instructions+=4;goto B7099fc;
case 0x7099ff:c.instructions+=3;goto B7099ff;
case 0x709a02:c.instructions+=2;goto B709a02;
case 0x709a06:c.instructions+=1;goto B709a06;
case 0x709a08:goto L709a08;
case 0x709a0f:goto L709a0f;
case 0x709a12:c.instructions+=8;goto B709a12;
case 0x709a16:c.instructions+=7;goto B709a16;
case 0x709a19:c.instructions+=6;goto B709a19;
case 0x709a1b:c.instructions+=5;goto B709a1b;
case 0x709a1e:c.instructions+=4;goto B709a1e;
case 0x709a21:c.instructions+=3;goto B709a21;
case 0x709a24:c.instructions+=2;goto B709a24;
case 0x709a28:c.instructions+=1;goto B709a28;
case 0x709a2a:goto L709a2a;
case 0x709a2d:c.instructions+=26;goto B709a2d;
case 0x709a30:c.instructions+=25;goto B709a30;
case 0x709a32:c.instructions+=24;goto B709a32;
case 0x709a34:c.instructions+=23;goto B709a34;
case 0x709a37:c.instructions+=22;goto B709a37;
case 0x709a3a:c.instructions+=21;goto B709a3a;
case 0x709a3d:c.instructions+=20;goto B709a3d;
case 0x709a40:c.instructions+=19;goto B709a40;
case 0x709a42:c.instructions+=18;goto B709a42;
case 0x709a44:c.instructions+=17;goto B709a44;
case 0x709a47:c.instructions+=16;goto B709a47;
case 0x709a4a:c.instructions+=15;goto B709a4a;
case 0x709a4d:c.instructions+=14;goto B709a4d;
case 0x709a50:c.instructions+=13;goto B709a50;
case 0x709a53:c.instructions+=12;goto B709a53;
case 0x709a57:c.instructions+=11;goto B709a57;
case 0x709a5a:c.instructions+=10;goto B709a5a;
case 0x709a5c:c.instructions+=9;goto B709a5c;
case 0x709a5f:c.instructions+=8;goto B709a5f;
case 0x709a62:c.instructions+=7;goto B709a62;
case 0x709a65:c.instructions+=6;goto B709a65;
case 0x709a67:c.instructions+=5;goto B709a67;
case 0x709a6a:c.instructions+=4;goto B709a6a;
case 0x709a6c:c.instructions+=3;goto B709a6c;
case 0x709a6f:c.instructions+=2;goto B709a6f;
case 0x709a72:c.instructions+=1;goto B709a72;
case 0x709a78:goto L709a78;
case 0x709a7a:c.instructions+=1;goto B709a7a;
case 0x709a80:goto L709a80;
case 0x709a82:c.instructions+=3;goto B709a82;
case 0x709a84:c.instructions+=2;goto B709a84;
case 0x709a87:c.instructions+=1;goto B709a87;
case 0x709a8d:goto L709a8d;
case 0x709a8f:c.instructions+=3;goto B709a8f;
case 0x709a91:c.instructions+=2;goto B709a91;
case 0x709a94:c.instructions+=1;goto B709a94;
case 0x709a9a:goto L709a9a;
case 0x709a9e:c.instructions+=4;goto B709a9e;
case 0x709aa2:c.instructions+=3;goto B709aa2;
case 0x709aa4:c.instructions+=2;goto B709aa4;
case 0x709aa6:c.instructions+=1;goto B709aa6;
case 0x709aa8:goto L709aa8;
case 0x709aaa:c.instructions+=1;goto B709aaa;
case 0x709aac:goto L709aac;
case 0x709ab0:c.instructions+=1;goto B709ab0;
case 0x709ab2:goto L709ab2;
case 0x709ab5:c.instructions+=1;goto B709ab5;
case 0x709ab7:goto L709ab7;
case 0x709abb:c.instructions+=1;goto B709abb;
case 0x709abd:goto L709abd;
case 0x709ac1:goto L709ac1;
case 0x709ac5:c.instructions+=5;goto B709ac5;
case 0x709ac8:c.instructions+=4;goto B709ac8;
case 0x709acc:c.instructions+=3;goto B709acc;
case 0x709ace:c.instructions+=2;goto B709ace;
case 0x709ad0:c.instructions+=1;goto B709ad0;
case 0x709ad2:goto L709ad2;
case 0x709ad4:c.instructions+=1;goto B709ad4;
case 0x709ad6:goto L709ad6;
case 0x709ada:c.instructions+=1;goto B709ada;
case 0x709adc:goto L709adc;
case 0x709adf:c.instructions+=1;goto B709adf;
case 0x709ae1:goto L709ae1;
case 0x709ae5:c.instructions+=1;goto B709ae5;
case 0x709ae7:goto L709ae7;
case 0x709aeb:goto L709aeb;
case 0x709aee:c.instructions+=84;goto B709aee;
case 0x709af1:c.instructions+=83;goto B709af1;
case 0x709af4:c.instructions+=82;goto B709af4;
case 0x709af6:c.instructions+=81;goto B709af6;
case 0x709af9:c.instructions+=80;goto B709af9;
case 0x709afc:c.instructions+=79;goto B709afc;
case 0x709b00:c.instructions+=78;goto B709b00;
case 0x709b02:c.instructions+=77;goto B709b02;
case 0x709b04:c.instructions+=76;goto B709b04;
case 0x709b06:c.instructions+=75;goto B709b06;
case 0x709b08:c.instructions+=74;goto B709b08;
case 0x709b0b:c.instructions+=73;goto B709b0b;
case 0x709b0e:c.instructions+=72;goto B709b0e;
case 0x709b10:c.instructions+=71;goto B709b10;
case 0x709b13:c.instructions+=70;goto B709b13;
case 0x709b16:c.instructions+=69;goto B709b16;
case 0x709b18:c.instructions+=68;goto B709b18;
case 0x709b1b:c.instructions+=67;goto B709b1b;
case 0x709b1d:c.instructions+=66;goto B709b1d;
case 0x709b1f:c.instructions+=65;goto B709b1f;
case 0x709b21:c.instructions+=64;goto B709b21;
case 0x709b24:c.instructions+=63;goto B709b24;
case 0x709b27:c.instructions+=62;goto B709b27;
case 0x709b2a:c.instructions+=61;goto B709b2a;
case 0x709b2d:c.instructions+=60;goto B709b2d;
case 0x709b30:c.instructions+=59;goto B709b30;
case 0x709b32:c.instructions+=58;goto B709b32;
case 0x709b35:c.instructions+=57;goto B709b35;
case 0x709b37:c.instructions+=56;goto B709b37;
case 0x709b39:c.instructions+=55;goto B709b39;
case 0x709b3c:c.instructions+=54;goto B709b3c;
case 0x709b3f:c.instructions+=53;goto B709b3f;
case 0x709b42:c.instructions+=52;goto B709b42;
case 0x709b44:c.instructions+=51;goto B709b44;
case 0x709b47:c.instructions+=50;goto B709b47;
case 0x709b4a:c.instructions+=49;goto B709b4a;
case 0x709b4c:c.instructions+=48;goto B709b4c;
case 0x709b4f:c.instructions+=47;goto B709b4f;
case 0x709b51:c.instructions+=46;goto B709b51;
case 0x709b54:c.instructions+=45;goto B709b54;
case 0x709b57:c.instructions+=44;goto B709b57;
case 0x709b5a:c.instructions+=43;goto B709b5a;
case 0x709b5d:c.instructions+=42;goto B709b5d;
case 0x709b60:c.instructions+=41;goto B709b60;
case 0x709b63:c.instructions+=40;goto B709b63;
case 0x709b66:c.instructions+=39;goto B709b66;
case 0x709b69:c.instructions+=38;goto B709b69;
case 0x709b6b:c.instructions+=37;goto B709b6b;
case 0x709b6e:c.instructions+=36;goto B709b6e;
case 0x709b70:c.instructions+=35;goto B709b70;
case 0x709b73:c.instructions+=34;goto B709b73;
case 0x709b76:c.instructions+=33;goto B709b76;
case 0x709b79:c.instructions+=32;goto B709b79;
case 0x709b7c:c.instructions+=31;goto B709b7c;
case 0x709b7f:c.instructions+=30;goto B709b7f;
case 0x709b81:c.instructions+=29;goto B709b81;
case 0x709b84:c.instructions+=28;goto B709b84;
case 0x709b87:c.instructions+=27;goto B709b87;
case 0x709b89:c.instructions+=26;goto B709b89;
case 0x709b8c:c.instructions+=25;goto B709b8c;
case 0x709b8e:c.instructions+=24;goto B709b8e;
case 0x709b90:c.instructions+=23;goto B709b90;
case 0x709b93:c.instructions+=22;goto B709b93;
case 0x709b96:c.instructions+=21;goto B709b96;
case 0x709b99:c.instructions+=20;goto B709b99;
case 0x709b9c:c.instructions+=19;goto B709b9c;
case 0x709b9f:c.instructions+=18;goto B709b9f;
case 0x709ba2:c.instructions+=17;goto B709ba2;
case 0x709ba4:c.instructions+=16;goto B709ba4;
case 0x709ba7:c.instructions+=15;goto B709ba7;
case 0x709ba9:c.instructions+=14;goto B709ba9;
case 0x709bab:c.instructions+=13;goto B709bab;
case 0x709bad:c.instructions+=12;goto B709bad;
case 0x709bb0:c.instructions+=11;goto B709bb0;
case 0x709bb3:c.instructions+=10;goto B709bb3;
case 0x709bb6:c.instructions+=9;goto B709bb6;
case 0x709bb9:c.instructions+=8;goto B709bb9;
case 0x709bbb:c.instructions+=7;goto B709bbb;
case 0x709bbe:c.instructions+=6;goto B709bbe;
case 0x709bc0:c.instructions+=5;goto B709bc0;
case 0x709bc2:c.instructions+=4;goto B709bc2;
case 0x709bc4:c.instructions+=3;goto B709bc4;
case 0x709bc7:c.instructions+=2;goto B709bc7;
case 0x709bca:c.instructions+=1;goto B709bca;
case 0x709bcc:goto L709bcc;
case 0x709bcf:c.instructions+=15;goto B709bcf;
case 0x709bd1:c.instructions+=14;goto B709bd1;
case 0x709bd3:c.instructions+=13;goto B709bd3;
case 0x709bd6:c.instructions+=12;goto B709bd6;
case 0x709bd9:c.instructions+=11;goto B709bd9;
case 0x709bdd:c.instructions+=10;goto B709bdd;
case 0x709be0:c.instructions+=9;goto B709be0;
case 0x709be3:c.instructions+=8;goto B709be3;
case 0x709be6:c.instructions+=7;goto B709be6;
case 0x709be9:c.instructions+=6;goto B709be9;
case 0x709bf0:c.instructions+=5;goto B709bf0;
case 0x709bf3:c.instructions+=4;goto B709bf3;
case 0x709bf6:c.instructions+=3;goto B709bf6;
case 0x709bf8:c.instructions+=2;goto B709bf8;
case 0x709bfe:c.instructions+=1;goto B709bfe;
case 0x709c00:goto L709c00;
case 0x709c03:c.instructions+=6;goto B709c03;
case 0x709c06:c.instructions+=5;goto B709c06;
case 0x709c08:c.instructions+=4;goto B709c08;
case 0x709c0a:c.instructions+=3;goto B709c0a;
case 0x709c0d:c.instructions+=2;goto B709c0d;
case 0x709c0e:c.instructions+=1;goto B709c0e;
case 0x709c14:goto L709c14;
case 0x709c17:c.instructions+=14;goto B709c17;
case 0x709c1a:c.instructions+=13;goto B709c1a;
case 0x709c1d:c.instructions+=12;goto B709c1d;
case 0x709c20:c.instructions+=11;goto B709c20;
case 0x709c23:c.instructions+=10;goto B709c23;
case 0x709c26:c.instructions+=9;goto B709c26;
case 0x709c29:c.instructions+=8;goto B709c29;
case 0x709c2c:c.instructions+=7;goto B709c2c;
case 0x709c2f:c.instructions+=6;goto B709c2f;
case 0x709c33:c.instructions+=5;goto B709c33;
case 0x709c37:c.instructions+=4;goto B709c37;
case 0x709c39:c.instructions+=3;goto B709c39;
case 0x709c3f:c.instructions+=2;goto B709c3f;
case 0x709c42:c.instructions+=1;goto B709c42;
case 0x709c48:goto L709c48;
case 0x709c49:c.instructions+=4;goto B709c49;
case 0x709c4a:c.instructions+=3;goto B709c4a;
case 0x709c4b:c.instructions+=2;goto B709c4b;
case 0x709c4c:c.instructions+=1;goto B709c4c;
case 0x709c4d:goto L709c4d;
case 0x709c4e:c.instructions+=21;goto B709c4e;
case 0x709c50:c.instructions+=20;goto B709c50;
case 0x709c56:c.instructions+=19;goto B709c56;
case 0x709c59:c.instructions+=18;goto B709c59;
case 0x709c5c:c.instructions+=17;goto B709c5c;
case 0x709c5f:c.instructions+=16;goto B709c5f;
case 0x709c60:c.instructions+=15;goto B709c60;
case 0x709c63:c.instructions+=14;goto B709c63;
case 0x709c66:c.instructions+=13;goto B709c66;
case 0x709c69:c.instructions+=12;goto B709c69;
case 0x709c6a:c.instructions+=11;goto B709c6a;
case 0x709c6b:c.instructions+=10;goto B709c6b;
case 0x709c6e:c.instructions+=9;goto B709c6e;
case 0x709c70:c.instructions+=8;goto B709c70;
case 0x709c72:c.instructions+=7;goto B709c72;
case 0x709c75:c.instructions+=6;goto B709c75;
case 0x709c77:c.instructions+=5;goto B709c77;
case 0x709c7a:c.instructions+=4;goto B709c7a;
case 0x709c7d:c.instructions+=3;goto B709c7d;
case 0x709c80:c.instructions+=2;goto B709c80;
case 0x709c86:c.instructions+=1;goto B709c86;
case 0x709c8c:goto L709c8c;
case 0x709c8f:c.instructions+=104;goto B709c8f;
case 0x709c92:c.instructions+=103;goto B709c92;
case 0x709c98:c.instructions+=102;goto B709c98;
case 0x709c9b:c.instructions+=101;goto B709c9b;
case 0x709c9e:c.instructions+=100;goto B709c9e;
case 0x709ca1:c.instructions+=99;goto B709ca1;
case 0x709ca4:c.instructions+=98;goto B709ca4;
case 0x709ca7:c.instructions+=97;goto B709ca7;
case 0x709ca9:c.instructions+=96;goto B709ca9;
case 0x709cac:c.instructions+=95;goto B709cac;
case 0x709caf:c.instructions+=94;goto B709caf;
case 0x709cb2:c.instructions+=93;goto B709cb2;
case 0x709cb5:c.instructions+=92;goto B709cb5;
case 0x709cb8:c.instructions+=91;goto B709cb8;
case 0x709cbe:c.instructions+=90;goto B709cbe;
case 0x709cc1:c.instructions+=89;goto B709cc1;
case 0x709cc4:c.instructions+=88;goto B709cc4;
case 0x709cc7:c.instructions+=87;goto B709cc7;
case 0x709ccd:c.instructions+=86;goto B709ccd;
case 0x709cd3:c.instructions+=85;goto B709cd3;
case 0x709cd6:c.instructions+=84;goto B709cd6;
case 0x709cd8:c.instructions+=83;goto B709cd8;
case 0x709cdb:c.instructions+=82;goto B709cdb;
case 0x709cdd:c.instructions+=81;goto B709cdd;
case 0x709ce0:c.instructions+=80;goto B709ce0;
case 0x709ce3:c.instructions+=79;goto B709ce3;
case 0x709ce6:c.instructions+=78;goto B709ce6;
case 0x709ce9:c.instructions+=77;goto B709ce9;
case 0x709cec:c.instructions+=76;goto B709cec;
case 0x709cef:c.instructions+=75;goto B709cef;
case 0x709cf2:c.instructions+=74;goto B709cf2;
case 0x709cf5:c.instructions+=73;goto B709cf5;
case 0x709cf8:c.instructions+=72;goto B709cf8;
case 0x709cfb:c.instructions+=71;goto B709cfb;
case 0x709cfe:c.instructions+=70;goto B709cfe;
case 0x709d00:c.instructions+=69;goto B709d00;
case 0x709d03:c.instructions+=68;goto B709d03;
case 0x709d05:c.instructions+=67;goto B709d05;
case 0x709d07:c.instructions+=66;goto B709d07;
case 0x709d0a:c.instructions+=65;goto B709d0a;
case 0x709d0d:c.instructions+=64;goto B709d0d;
case 0x709d0f:c.instructions+=63;goto B709d0f;
case 0x709d12:c.instructions+=62;goto B709d12;
case 0x709d15:c.instructions+=61;goto B709d15;
case 0x709d17:c.instructions+=60;goto B709d17;
case 0x709d1a:c.instructions+=59;goto B709d1a;
case 0x709d1d:c.instructions+=58;goto B709d1d;
case 0x709d1f:c.instructions+=57;goto B709d1f;
case 0x709d22:c.instructions+=56;goto B709d22;
case 0x709d25:c.instructions+=55;goto B709d25;
case 0x709d28:c.instructions+=54;goto B709d28;
case 0x709d2a:c.instructions+=53;goto B709d2a;
case 0x709d2c:c.instructions+=52;goto B709d2c;
case 0x709d2e:c.instructions+=51;goto B709d2e;
case 0x709d30:c.instructions+=50;goto B709d30;
case 0x709d33:c.instructions+=49;goto B709d33;
case 0x709d36:c.instructions+=48;goto B709d36;
case 0x709d39:c.instructions+=47;goto B709d39;
case 0x709d3a:c.instructions+=46;goto B709d3a;
case 0x709d3d:c.instructions+=45;goto B709d3d;
case 0x709d40:c.instructions+=44;goto B709d40;
case 0x709d43:c.instructions+=43;goto B709d43;
case 0x709d49:c.instructions+=42;goto B709d49;
case 0x709d4c:c.instructions+=41;goto B709d4c;
case 0x709d4f:c.instructions+=40;goto B709d4f;
case 0x709d52:c.instructions+=39;goto B709d52;
case 0x709d58:c.instructions+=38;goto B709d58;
case 0x709d5b:c.instructions+=37;goto B709d5b;
case 0x709d5e:c.instructions+=36;goto B709d5e;
case 0x709d64:c.instructions+=35;goto B709d64;
case 0x709d66:c.instructions+=34;goto B709d66;
case 0x709d6a:c.instructions+=33;goto B709d6a;
case 0x709d6d:c.instructions+=32;goto B709d6d;
case 0x709d70:c.instructions+=31;goto B709d70;
case 0x709d73:c.instructions+=30;goto B709d73;
case 0x709d77:c.instructions+=29;goto B709d77;
case 0x709d7a:c.instructions+=28;goto B709d7a;
case 0x709d7d:c.instructions+=27;goto B709d7d;
case 0x709d80:c.instructions+=26;goto B709d80;
case 0x709d83:c.instructions+=25;goto B709d83;
case 0x709d85:c.instructions+=24;goto B709d85;
case 0x709d88:c.instructions+=23;goto B709d88;
case 0x709d8b:c.instructions+=22;goto B709d8b;
case 0x709d91:c.instructions+=21;goto B709d91;
case 0x709d97:c.instructions+=20;goto B709d97;
case 0x709d9a:c.instructions+=19;goto B709d9a;
case 0x709d9e:c.instructions+=18;goto B709d9e;
case 0x709da1:c.instructions+=17;goto B709da1;
case 0x709da4:c.instructions+=16;goto B709da4;
case 0x709da7:c.instructions+=15;goto B709da7;
case 0x709daa:c.instructions+=14;goto B709daa;
case 0x709dad:c.instructions+=13;goto B709dad;
case 0x709db1:c.instructions+=12;goto B709db1;
case 0x709db4:c.instructions+=11;goto B709db4;
case 0x709db7:c.instructions+=10;goto B709db7;
case 0x709db9:c.instructions+=9;goto B709db9;
case 0x709dbd:c.instructions+=8;goto B709dbd;
case 0x709dc3:c.instructions+=7;goto B709dc3;
case 0x709dc6:c.instructions+=6;goto B709dc6;
case 0x709dc9:c.instructions+=5;goto B709dc9;
case 0x709dcc:c.instructions+=4;goto B709dcc;
case 0x709dd0:c.instructions+=3;goto B709dd0;
case 0x709dd3:c.instructions+=2;goto B709dd3;
case 0x709dd6:c.instructions+=1;goto B709dd6;
case 0x709ddd:goto L709ddd;
case 0x709de0:c.instructions+=9;goto B709de0;
case 0x709de3:c.instructions+=8;goto B709de3;
case 0x709de7:c.instructions+=7;goto B709de7;
case 0x709dea:c.instructions+=6;goto B709dea;
case 0x709df0:c.instructions+=5;goto B709df0;
case 0x709df3:c.instructions+=4;goto B709df3;
case 0x709df6:c.instructions+=3;goto B709df6;
case 0x709df8:c.instructions+=2;goto B709df8;
case 0x709dfa:c.instructions+=1;goto B709dfa;
case 0x709dfc:goto L709dfc;
case 0x709dfe:c.instructions+=1;goto B709dfe;
case 0x709e00:goto L709e00;
case 0x709e03:goto L709e03;
case 0x709e06:c.instructions+=3;goto B709e06;
case 0x709e09:c.instructions+=2;goto B709e09;
case 0x709e0d:c.instructions+=1;goto B709e0d;
case 0x709e0f:goto L709e0f;
case 0x709e16:goto L709e16;
case 0x709e19:c.instructions+=7;goto B709e19;
case 0x709e1c:c.instructions+=6;goto B709e1c;
case 0x709e20:c.instructions+=5;goto B709e20;
case 0x709e24:c.instructions+=4;goto B709e24;
case 0x709e27:c.instructions+=3;goto B709e27;
case 0x709e29:c.instructions+=2;goto B709e29;
case 0x709e2b:c.instructions+=1;goto B709e2b;
case 0x709e2d:goto L709e2d;
case 0x709e2f:c.instructions+=1;goto B709e2f;
case 0x709e31:goto L709e31;
case 0x709e34:goto L709e34;
case 0x709e37:c.instructions+=3;goto B709e37;
case 0x709e3a:c.instructions+=2;goto B709e3a;
case 0x709e3e:c.instructions+=1;goto B709e3e;
case 0x709e40:goto L709e40;
case 0x709e43:c.instructions+=4;goto B709e43;
case 0x709e48:c.instructions+=3;goto B709e48;
case 0x709e4a:c.instructions+=2;goto B709e4a;
case 0x709e4d:c.instructions+=1;goto B709e4d;
case 0x709e4f:goto L709e4f;
case 0x709e52:goto L709e52;
case 0x709e55:c.instructions+=10;goto B709e55;
case 0x709e58:c.instructions+=9;goto B709e58;
case 0x709e5b:c.instructions+=8;goto B709e5b;
case 0x709e5d:c.instructions+=7;goto B709e5d;
case 0x709e60:c.instructions+=6;goto B709e60;
case 0x709e62:c.instructions+=5;goto B709e62;
case 0x709e65:c.instructions+=4;goto B709e65;
case 0x709e6a:c.instructions+=3;goto B709e6a;
case 0x709e6c:c.instructions+=2;goto B709e6c;
case 0x709e6f:c.instructions+=1;goto B709e6f;
case 0x709e71:goto L709e71;
case 0x709e74:goto L709e74;
case 0x709e77:c.instructions+=8;goto B709e77;
case 0x709e7a:c.instructions+=7;goto B709e7a;
case 0x709e7d:c.instructions+=6;goto B709e7d;
case 0x709e7f:c.instructions+=5;goto B709e7f;
case 0x709e82:c.instructions+=4;goto B709e82;
case 0x709e84:c.instructions+=3;goto B709e84;
case 0x709e8a:c.instructions+=2;goto B709e8a;
case 0x709e8d:c.instructions+=1;goto B709e8d;
case 0x709e93:goto L709e93;
case 0x709e96:c.instructions+=1;goto B709e96;
case 0x709e9c:goto L709e9c;
case 0x709e9e:c.instructions+=3;goto B709e9e;
case 0x709ea1:c.instructions+=2;goto B709ea1;
case 0x709ea4:c.instructions+=1;goto B709ea4;
case 0x709eaa:goto L709eaa;
case 0x709ead:c.instructions+=3;goto B709ead;
case 0x709eaf:c.instructions+=2;goto B709eaf;
case 0x709eb2:c.instructions+=1;goto B709eb2;
case 0x709eb8:goto L709eb8;
case 0x709ebb:c.instructions+=64;goto B709ebb;
case 0x709ebe:c.instructions+=63;goto B709ebe;
case 0x709ec1:c.instructions+=62;goto B709ec1;
case 0x709ec4:c.instructions+=61;goto B709ec4;
case 0x709ec6:c.instructions+=60;goto B709ec6;
case 0x709ec9:c.instructions+=59;goto B709ec9;
case 0x709ecc:c.instructions+=58;goto B709ecc;
case 0x709ed0:c.instructions+=57;goto B709ed0;
case 0x709ed2:c.instructions+=56;goto B709ed2;
case 0x709ed5:c.instructions+=55;goto B709ed5;
case 0x709ed8:c.instructions+=54;goto B709ed8;
case 0x709eda:c.instructions+=53;goto B709eda;
case 0x709edc:c.instructions+=52;goto B709edc;
case 0x709edf:c.instructions+=51;goto B709edf;
case 0x709ee1:c.instructions+=50;goto B709ee1;
case 0x709ee4:c.instructions+=49;goto B709ee4;
case 0x709ee6:c.instructions+=48;goto B709ee6;
case 0x709ee9:c.instructions+=47;goto B709ee9;
case 0x709eec:c.instructions+=46;goto B709eec;
case 0x709eef:c.instructions+=45;goto B709eef;
case 0x709ef2:c.instructions+=44;goto B709ef2;
case 0x709ef5:c.instructions+=43;goto B709ef5;
case 0x709ef7:c.instructions+=42;goto B709ef7;
case 0x709efa:c.instructions+=41;goto B709efa;
case 0x709efc:c.instructions+=40;goto B709efc;
case 0x709eff:c.instructions+=39;goto B709eff;
case 0x709f02:c.instructions+=38;goto B709f02;
case 0x709f05:c.instructions+=37;goto B709f05;
case 0x709f08:c.instructions+=36;goto B709f08;
case 0x709f0b:c.instructions+=35;goto B709f0b;
case 0x709f0d:c.instructions+=34;goto B709f0d;
case 0x709f10:c.instructions+=33;goto B709f10;
case 0x709f12:c.instructions+=32;goto B709f12;
case 0x709f15:c.instructions+=31;goto B709f15;
case 0x709f18:c.instructions+=30;goto B709f18;
case 0x709f1b:c.instructions+=29;goto B709f1b;
case 0x709f1e:c.instructions+=28;goto B709f1e;
case 0x709f20:c.instructions+=27;goto B709f20;
case 0x709f23:c.instructions+=26;goto B709f23;
case 0x709f26:c.instructions+=25;goto B709f26;
case 0x709f29:c.instructions+=24;goto B709f29;
case 0x709f2c:c.instructions+=23;goto B709f2c;
case 0x709f2f:c.instructions+=22;goto B709f2f;
case 0x709f31:c.instructions+=21;goto B709f31;
case 0x709f34:c.instructions+=20;goto B709f34;
case 0x709f37:c.instructions+=19;goto B709f37;
case 0x709f3a:c.instructions+=18;goto B709f3a;
case 0x709f3d:c.instructions+=17;goto B709f3d;
case 0x709f40:c.instructions+=16;goto B709f40;
case 0x709f43:c.instructions+=15;goto B709f43;
case 0x709f46:c.instructions+=14;goto B709f46;
case 0x709f49:c.instructions+=13;goto B709f49;
case 0x709f4b:c.instructions+=12;goto B709f4b;
case 0x709f4e:c.instructions+=11;goto B709f4e;
case 0x709f51:c.instructions+=10;goto B709f51;
case 0x709f54:c.instructions+=9;goto B709f54;
case 0x709f57:c.instructions+=8;goto B709f57;
case 0x709f5a:c.instructions+=7;goto B709f5a;
case 0x709f5d:c.instructions+=6;goto B709f5d;
case 0x709f60:c.instructions+=5;goto B709f60;
case 0x709f62:c.instructions+=4;goto B709f62;
case 0x709f65:c.instructions+=3;goto B709f65;
case 0x709f68:c.instructions+=2;goto B709f68;
case 0x709f6e:c.instructions+=1;goto B709f6e;
case 0x709f73:goto L709f73;
case 0x709f76:c.instructions+=39;goto B709f76;
case 0x709f78:c.instructions+=38;goto B709f78;
case 0x709f7b:c.instructions+=37;goto B709f7b;
case 0x709f7e:c.instructions+=36;goto B709f7e;
case 0x709f81:c.instructions+=35;goto B709f81;
case 0x709f85:c.instructions+=34;goto B709f85;
case 0x709f88:c.instructions+=33;goto B709f88;
case 0x709f8b:c.instructions+=32;goto B709f8b;
case 0x709f8e:c.instructions+=31;goto B709f8e;
case 0x709f91:c.instructions+=30;goto B709f91;
case 0x709f94:c.instructions+=29;goto B709f94;
case 0x709f97:c.instructions+=28;goto B709f97;
case 0x709f9e:c.instructions+=27;goto B709f9e;
case 0x709fa1:c.instructions+=26;goto B709fa1;
case 0x709fa4:c.instructions+=25;goto B709fa4;
case 0x709fa7:c.instructions+=24;goto B709fa7;
case 0x709fad:c.instructions+=23;goto B709fad;
case 0x709fb3:c.instructions+=22;goto B709fb3;
case 0x709fb6:c.instructions+=21;goto B709fb6;
case 0x709fb9:c.instructions+=20;goto B709fb9;
case 0x709fbc:c.instructions+=19;goto B709fbc;
case 0x709fbf:c.instructions+=18;goto B709fbf;
case 0x709fc1:c.instructions+=17;goto B709fc1;
case 0x709fc3:c.instructions+=16;goto B709fc3;
case 0x709fc6:c.instructions+=15;goto B709fc6;
case 0x709fcc:c.instructions+=14;goto B709fcc;
case 0x709fce:c.instructions+=13;goto B709fce;
case 0x709fd1:c.instructions+=12;goto B709fd1;
case 0x709fd4:c.instructions+=11;goto B709fd4;
case 0x709fd7:c.instructions+=10;goto B709fd7;
case 0x709fd9:c.instructions+=9;goto B709fd9;
case 0x709fdc:c.instructions+=8;goto B709fdc;
case 0x709fdf:c.instructions+=7;goto B709fdf;
case 0x709fe2:c.instructions+=6;goto B709fe2;
case 0x709fe5:c.instructions+=5;goto B709fe5;
case 0x709fe8:c.instructions+=4;goto B709fe8;
case 0x709fea:c.instructions+=3;goto B709fea;
case 0x709ff0:c.instructions+=2;goto B709ff0;
case 0x709ff2:c.instructions+=1;goto B709ff2;
case 0x709ff5:goto L709ff5;
case 0x709ffb:c.instructions+=3;goto B709ffb;
case 0x709ffc:c.instructions+=2;goto B709ffc;
case 0x709fff:c.instructions+=1;goto B709fff;
default:missing_instruction(c.pc);}
B709000:L709000:{c.instructions+=18;NFSU2_TR(0x709000);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B709004:{NFSU2_TR(0x709004);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709007:{NFSU2_TR(0x709007);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70900b:{NFSU2_TR(0x70900b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70900e:{NFSU2_TR(0x70900e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B709012:{NFSU2_TR(0x709012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709015:{NFSU2_TR(0x709015);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B709019:{NFSU2_TR(0x709019);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70901c:{NFSU2_TR(0x70901c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B709020:{NFSU2_TR(0x709020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709023:{NFSU2_TR(0x709023);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B709025:{NFSU2_TR(0x709025);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709028:{NFSU2_TR(0x709028);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70902b:{NFSU2_TR(0x70902b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70902e:{NFSU2_TR(0x70902e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709031:{NFSU2_TR(0x709031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709034:{NFSU2_TR(0x709034);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709037:{NFSU2_TR(0x709037);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70903e:L70903e:{c.instructions+=9;NFSU2_TR(0x70903e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B709041:{NFSU2_TR(0x709041);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B709045:{NFSU2_TR(0x709045);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B709048:{NFSU2_TR(0x709048);
__builtin_memmove((R+12),(R+0),4);
}
B70904a:{NFSU2_TR(0x70904a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B70904d:{NFSU2_TR(0x70904d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B709050:{NFSU2_TR(0x709050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709053:{NFSU2_TR(0x709053);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B709057:{NFSU2_TR(0x709057);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70903eu);}goto L70903e;}}
}
B709059:L709059:{c.instructions+=1;NFSU2_TR(0x709059);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B709060:L709060:{c.instructions+=9;NFSU2_TR(0x709060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B709063:{NFSU2_TR(0x709063);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B709067:{NFSU2_TR(0x709067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70906a:{NFSU2_TR(0x70906a);
__builtin_memmove((R+12),(R+0),4);
}
B70906c:{NFSU2_TR(0x70906c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B70906f:{NFSU2_TR(0x70906f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B709072:{NFSU2_TR(0x709072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709075:{NFSU2_TR(0x709075);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B709079:{NFSU2_TR(0x709079);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x709060u);}goto L709060;}}
}
B70907b:L70907b:{c.instructions+=27;NFSU2_TR(0x70907b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70907e:{NFSU2_TR(0x70907e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B709081:{NFSU2_TR(0x709081);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B709083:{NFSU2_TR(0x709083);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B709085:{NFSU2_TR(0x709085);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B709088:{NFSU2_TR(0x709088);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B70908b:{NFSU2_TR(0x70908b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70908e:{NFSU2_TR(0x70908e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B709091:{NFSU2_TR(0x709091);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B709093:{NFSU2_TR(0x709093);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B709095:{NFSU2_TR(0x709095);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B709098:{NFSU2_TR(0x709098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B70909b:{NFSU2_TR(0x70909b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70909e:{NFSU2_TR(0x70909e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7090a1:{NFSU2_TR(0x7090a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7090a4:{NFSU2_TR(0x7090a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7090a7:{NFSU2_TR(0x7090a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7090aa:{NFSU2_TR(0x7090aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+0)),r4(U+0));
}
B7090ac:{NFSU2_TR(0x7090ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7090af:{NFSU2_TR(0x7090af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7090b2:{NFSU2_TR(0x7090b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7090b5:{NFSU2_TR(0x7090b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7090b9:{NFSU2_TR(0x7090b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7090bc:{NFSU2_TR(0x7090bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+0)),r4(U+0));
}
B7090be:{NFSU2_TR(0x7090be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7090c1:{NFSU2_TR(0x7090c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7090c4:{NFSU2_TR(0x7090c4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709222;}}
}
B7090ca:L7090ca:{c.instructions+=2;NFSU2_TR(0x7090ca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7090cc:{NFSU2_TR(0x7090cc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709222;}}
}
B7090d2:L7090d2:{c.instructions+=4;NFSU2_TR(0x7090d2);
__builtin_memmove((R+0),(R+28),4);
}
B7090d4:{NFSU2_TR(0x7090d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B7090d7:{NFSU2_TR(0x7090d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7090da:{NFSU2_TR(0x7090da);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709222;}}
}
B7090e0:L7090e0:{c.instructions+=4;NFSU2_TR(0x7090e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7090e3:{NFSU2_TR(0x7090e3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B7090e5:{NFSU2_TR(0x7090e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7090e8:{NFSU2_TR(0x7090e8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709222;}}
}
B7090ee:L7090ee:{c.instructions+=5;NFSU2_TR(0x7090ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7090f2:{NFSU2_TR(0x7090f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B7090f6:{NFSU2_TR(0x7090f6);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B7090f8:{NFSU2_TR(0x7090f8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7090fa:{NFSU2_TR(0x7090fa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L709100;}}
}
B7090fc:L7090fc:{c.instructions+=2;NFSU2_TR(0x7090fc);
__builtin_memmove((R+0),(R+12),4);
}
B7090fe:{NFSU2_TR(0x7090fe);
{goto L709106;}
}
B709100:L709100:{c.instructions+=2;NFSU2_TR(0x709100);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B709104:{NFSU2_TR(0x709104);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B709106:L709106:{c.instructions+=2;NFSU2_TR(0x709106);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709109:{NFSU2_TR(0x709109);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709111;}}
}
B70910b:L70910b:{c.instructions+=2;NFSU2_TR(0x70910b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70910f:{NFSU2_TR(0x70910f);
{goto L709115;}
}
B709111:L709111:{c.instructions+=1;NFSU2_TR(0x709111);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B709115:L709115:{c.instructions+=6;NFSU2_TR(0x709115);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B709119:{NFSU2_TR(0x709119);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70911c:{NFSU2_TR(0x70911c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B709120:{NFSU2_TR(0x709120);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B709122:{NFSU2_TR(0x709122);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B709124:{NFSU2_TR(0x709124);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70912a;}}
}
B709126:L709126:{c.instructions+=2;NFSU2_TR(0x709126);
__builtin_memmove((R+0),(R+12),4);
}
B709128:{NFSU2_TR(0x709128);
{goto L709130;}
}
B70912a:L70912a:{c.instructions+=2;NFSU2_TR(0x70912a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70912e:{NFSU2_TR(0x70912e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B709130:L709130:{c.instructions+=2;NFSU2_TR(0x709130);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709133:{NFSU2_TR(0x709133);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70913b;}}
}
B709135:L709135:{c.instructions+=2;NFSU2_TR(0x709135);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B709139:{NFSU2_TR(0x709139);
{goto L70913f;}
}
B70913b:L70913b:{c.instructions+=1;NFSU2_TR(0x70913b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70913f:L70913f:{c.instructions+=86;NFSU2_TR(0x70913f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709142:{NFSU2_TR(0x709142);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709145:{NFSU2_TR(0x709145);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B709148:{NFSU2_TR(0x709148);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70914b:{NFSU2_TR(0x70914b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70914d:{NFSU2_TR(0x70914d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B709150:{NFSU2_TR(0x709150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B709153:{NFSU2_TR(0x709153);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B709157:{NFSU2_TR(0x709157);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B709159:{NFSU2_TR(0x709159);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70915b:{NFSU2_TR(0x70915b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70915e:{NFSU2_TR(0x70915e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B709160:{NFSU2_TR(0x709160);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709163:{NFSU2_TR(0x709163);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709166:{NFSU2_TR(0x709166);
__builtin_memmove((R+8),(R+28),4);
}
B709168:{NFSU2_TR(0x709168);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B70916a:{NFSU2_TR(0x70916a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70916c:{NFSU2_TR(0x70916c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70916f:{NFSU2_TR(0x70916f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B709171:{NFSU2_TR(0x709171);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709173:{NFSU2_TR(0x709173);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B709175:{NFSU2_TR(0x709175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709178:{NFSU2_TR(0x709178);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B70917b:{NFSU2_TR(0x70917b);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B70917d:{NFSU2_TR(0x70917d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709180:{NFSU2_TR(0x709180);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B709182:{NFSU2_TR(0x709182);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B709184:{NFSU2_TR(0x709184);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709187:{NFSU2_TR(0x709187);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B709189:{NFSU2_TR(0x709189);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70918b:{NFSU2_TR(0x70918b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70918e:{NFSU2_TR(0x70918e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709191:{NFSU2_TR(0x709191);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709194:{NFSU2_TR(0x709194);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709197:{NFSU2_TR(0x709197);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70919a:{NFSU2_TR(0x70919a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B70919c:{NFSU2_TR(0x70919c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70919e:{NFSU2_TR(0x70919e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7091a1:{NFSU2_TR(0x7091a1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B7091a3:{NFSU2_TR(0x7091a3);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7091a5:{NFSU2_TR(0x7091a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091a8:{NFSU2_TR(0x7091a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091ab:{NFSU2_TR(0x7091ab);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B7091ad:{NFSU2_TR(0x7091ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7091b0:{NFSU2_TR(0x7091b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7091b3:{NFSU2_TR(0x7091b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7091b6:{NFSU2_TR(0x7091b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7091b9:{NFSU2_TR(0x7091b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091bc:{NFSU2_TR(0x7091bc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7091be:{NFSU2_TR(0x7091be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7091c1:{NFSU2_TR(0x7091c1);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7091c3:{NFSU2_TR(0x7091c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091c6:{NFSU2_TR(0x7091c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091c9:{NFSU2_TR(0x7091c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7091cc:{NFSU2_TR(0x7091cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7091cf:{NFSU2_TR(0x7091cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7091d2:{NFSU2_TR(0x7091d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7091d5:{NFSU2_TR(0x7091d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7091d8:{NFSU2_TR(0x7091d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091db:{NFSU2_TR(0x7091db);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7091dd:{NFSU2_TR(0x7091dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7091e0:{NFSU2_TR(0x7091e0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B7091e2:{NFSU2_TR(0x7091e2);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7091e4:{NFSU2_TR(0x7091e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091e7:{NFSU2_TR(0x7091e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7091ea:{NFSU2_TR(0x7091ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7091ed:{NFSU2_TR(0x7091ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7091f0:{NFSU2_TR(0x7091f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7091f3:{NFSU2_TR(0x7091f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091f6:{NFSU2_TR(0x7091f6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7091f8:{NFSU2_TR(0x7091f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7091fb:{NFSU2_TR(0x7091fb);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B7091fd:{NFSU2_TR(0x7091fd);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7091ff:{NFSU2_TR(0x7091ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709202:{NFSU2_TR(0x709202);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709205:{NFSU2_TR(0x709205);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709208:{NFSU2_TR(0x709208);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70920b:{NFSU2_TR(0x70920b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70920e:{NFSU2_TR(0x70920e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B709210:{NFSU2_TR(0x709210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B709213:{NFSU2_TR(0x709213);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B709215:{NFSU2_TR(0x709215);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B709217:{NFSU2_TR(0x709217);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B70921a:{NFSU2_TR(0x70921a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70921d:{NFSU2_TR(0x70921d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709220:{NFSU2_TR(0x709220);
{goto L709257;}
}
B709222:L709222:{c.instructions+=16;NFSU2_TR(0x709222);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709225:{NFSU2_TR(0x709225);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709228:{NFSU2_TR(0x709228);
__builtin_memmove((R+0),(R+28),4);
}
B70922a:{NFSU2_TR(0x70922a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70922c:{NFSU2_TR(0x70922c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70922f:{NFSU2_TR(0x70922f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B709232:{NFSU2_TR(0x709232);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B709236:{NFSU2_TR(0x709236);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709239:{NFSU2_TR(0x709239);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70923c:{NFSU2_TR(0x70923c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70923f:{NFSU2_TR(0x70923f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B709242:{NFSU2_TR(0x709242);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B709249:{NFSU2_TR(0x709249);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B70924b:{NFSU2_TR(0x70924b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70924e:{NFSU2_TR(0x70924e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B709254:{NFSU2_TR(0x709254);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709257:L709257:{c.instructions+=4;NFSU2_TR(0x709257);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B70925a:{NFSU2_TR(0x70925a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B70925d:{NFSU2_TR(0x70925d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B709260:{NFSU2_TR(0x709260);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x708fefu,708);}
}
B709266:L709266:{c.instructions+=6;NFSU2_TR(0x709266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709269:{NFSU2_TR(0x709269);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70926c:{NFSU2_TR(0x70926c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709270:{NFSU2_TR(0x709270);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709274:{NFSU2_TR(0x709274);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B709277:{NFSU2_TR(0x709277);
if(r1(R+512)){TAIL_STATIC(0x708fc0u,708);}
}
B70927d:L70927d:{c.instructions+=5;NFSU2_TR(0x70927d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70927e:{NFSU2_TR(0x70927e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70927f:{NFSU2_TR(0x70927f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B709280:{NFSU2_TR(0x709280);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B709281:{NFSU2_TR(0x709281);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B709282:L709282:{c.instructions+=14;NFSU2_TR(0x709282);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B709283:{NFSU2_TR(0x709283);
__builtin_memmove((R+20),(R+16),4);
}
B709285:{NFSU2_TR(0x709285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B709288:{NFSU2_TR(0x709288);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70928b:{NFSU2_TR(0x70928b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70928e:{NFSU2_TR(0x70928e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B709291:{NFSU2_TR(0x709291);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B709294:{NFSU2_TR(0x709294);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709297:{NFSU2_TR(0x709297);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B709298:{NFSU2_TR(0x709298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70929b:{NFSU2_TR(0x70929b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70929f:{NFSU2_TR(0x70929f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B7092a1:{NFSU2_TR(0x7092a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092a4:{NFSU2_TR(0x7092a4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7094c6;}}
}
B7092aa:L7092aa:{c.instructions+=19;NFSU2_TR(0x7092aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7092ad:{NFSU2_TR(0x7092ad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7092b0:{NFSU2_TR(0x7092b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7092b3:{NFSU2_TR(0x7092b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B7092b6:{NFSU2_TR(0x7092b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092b9:{NFSU2_TR(0x7092b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7092bc:{NFSU2_TR(0x7092bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7092bd:{NFSU2_TR(0x7092bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7092be:{NFSU2_TR(0x7092be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092c1:{NFSU2_TR(0x7092c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B7092c4:{NFSU2_TR(0x7092c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7092c7:{NFSU2_TR(0x7092c7);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B7092ca:{NFSU2_TR(0x7092ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B7092cd:{NFSU2_TR(0x7092cd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x5ull))));
}
B7092d0:{NFSU2_TR(0x7092d0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B7092d2:{NFSU2_TR(0x7092d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092d5:{NFSU2_TR(0x7092d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092d8:{NFSU2_TR(0x7092d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092db:{NFSU2_TR(0x7092db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092de:L7092de:{c.instructions+=3;NFSU2_TR(0x7092de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7092e1:{NFSU2_TR(0x7092e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7092e4:{NFSU2_TR(0x7092e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7092eb:L7092eb:{c.instructions+=24;NFSU2_TR(0x7092eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7092ef:{NFSU2_TR(0x7092ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092f2:{NFSU2_TR(0x7092f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7092f5:{NFSU2_TR(0x7092f5);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B7092f9:{NFSU2_TR(0x7092f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7092fd:{NFSU2_TR(0x7092fd);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B709300:{NFSU2_TR(0x709300);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709303:{NFSU2_TR(0x709303);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B709307:{NFSU2_TR(0x709307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70930b:{NFSU2_TR(0x70930b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70930f:{NFSU2_TR(0x70930f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709312:{NFSU2_TR(0x709312);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B709316:{NFSU2_TR(0x709316);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709319:{NFSU2_TR(0x709319);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70931d:{NFSU2_TR(0x70931d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709320:{NFSU2_TR(0x709320);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B709324:{NFSU2_TR(0x709324);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709327:{NFSU2_TR(0x709327);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70932b:{NFSU2_TR(0x70932b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70932e:{NFSU2_TR(0x70932e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B709332:{NFSU2_TR(0x709332);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709335:{NFSU2_TR(0x709335);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709338:{NFSU2_TR(0x709338);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70933b:{NFSU2_TR(0x70933b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B709342:L709342:{c.instructions+=10;NFSU2_TR(0x709342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709345:{NFSU2_TR(0x709345);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B709348:{NFSU2_TR(0x709348);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B70934c:{NFSU2_TR(0x70934c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70934f:{NFSU2_TR(0x70934f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709352:{NFSU2_TR(0x709352);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B709355:{NFSU2_TR(0x709355);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709358:{NFSU2_TR(0x709358);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B70935a:{NFSU2_TR(0x70935a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70935c:{NFSU2_TR(0x70935c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L709362;}}
}
B70935e:L70935e:{c.instructions+=2;NFSU2_TR(0x70935e);
__builtin_memmove((R+4),(R+12),4);
}
B709360:{NFSU2_TR(0x709360);
{goto L709365;}
}
B709362:L709362:{c.instructions+=1;NFSU2_TR(0x709362);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B709365:L709365:{c.instructions+=4;NFSU2_TR(0x709365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709368:{NFSU2_TR(0x709368);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70936b:{NFSU2_TR(0x70936b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70936f:{NFSU2_TR(0x70936f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x709342u);}goto L709342;}}
}
B709371:L709371:{c.instructions+=1;NFSU2_TR(0x709371);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B709378:L709378:{c.instructions+=8;NFSU2_TR(0x709378);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70937b:{NFSU2_TR(0x70937b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70937e:{NFSU2_TR(0x70937e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B709382:{NFSU2_TR(0x709382);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B709386:{NFSU2_TR(0x709386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709389:{NFSU2_TR(0x709389);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B70938b:{NFSU2_TR(0x70938b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70938d:{NFSU2_TR(0x70938d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L709393;}}
}
B70938f:L70938f:{c.instructions+=2;NFSU2_TR(0x70938f);
__builtin_memmove((R+4),(R+12),4);
}
B709391:{NFSU2_TR(0x709391);
{goto L709396;}
}
B709393:L709393:{c.instructions+=1;NFSU2_TR(0x709393);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B709396:L709396:{c.instructions+=4;NFSU2_TR(0x709396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709399:{NFSU2_TR(0x709399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70939c:{NFSU2_TR(0x70939c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7093a0:{NFSU2_TR(0x7093a0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x709378u);}goto L709378;}}
}
B7093a2:L7093a2:{c.instructions+=3;NFSU2_TR(0x7093a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7093a5:{NFSU2_TR(0x7093a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7093a8:{NFSU2_TR(0x7093a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70946f;}}
}
B7093ae:L7093ae:{c.instructions+=2;NFSU2_TR(0x7093ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7093b1:{NFSU2_TR(0x7093b1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70946f;}}
}
B7093b7:L7093b7:{c.instructions+=4;NFSU2_TR(0x7093b7);
__builtin_memmove((R+4),(R+28),4);
}
B7093b9:{NFSU2_TR(0x7093b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B7093bc:{NFSU2_TR(0x7093bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7093bf:{NFSU2_TR(0x7093bf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70946f;}}
}
B7093c5:L7093c5:{c.instructions+=4;NFSU2_TR(0x7093c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7093c8:{NFSU2_TR(0x7093c8);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B7093ca:{NFSU2_TR(0x7093ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7093cd:{NFSU2_TR(0x7093cd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70946f;}}
}
B7093d3:L7093d3:{c.instructions+=57;NFSU2_TR(0x7093d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7093d6:{NFSU2_TR(0x7093d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7093d9:{NFSU2_TR(0x7093d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B7093dc:{NFSU2_TR(0x7093dc);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B7093de:{NFSU2_TR(0x7093de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B7093e1:{NFSU2_TR(0x7093e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B7093e4:{NFSU2_TR(0x7093e4);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7093e8:{NFSU2_TR(0x7093e8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B7093ea:{NFSU2_TR(0x7093ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7093ed:{NFSU2_TR(0x7093ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7093f0:{NFSU2_TR(0x7093f0);
__builtin_memmove((R+8),(R+28),4);
}
B7093f2:{NFSU2_TR(0x7093f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7093f5:{NFSU2_TR(0x7093f5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7093f7:{NFSU2_TR(0x7093f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7093fa:{NFSU2_TR(0x7093fa);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B7093fc:{NFSU2_TR(0x7093fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7093ff:{NFSU2_TR(0x7093ff);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B709401:{NFSU2_TR(0x709401);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709404:{NFSU2_TR(0x709404);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709407:{NFSU2_TR(0x709407);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709409:{NFSU2_TR(0x709409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70940c:{NFSU2_TR(0x70940c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B70940e:{NFSU2_TR(0x70940e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709411:{NFSU2_TR(0x709411);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709414:{NFSU2_TR(0x709414);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709417:{NFSU2_TR(0x709417);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70941a:{NFSU2_TR(0x70941a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70941c:{NFSU2_TR(0x70941c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70941f:{NFSU2_TR(0x70941f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709421:{NFSU2_TR(0x709421);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709424:{NFSU2_TR(0x709424);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709427:{NFSU2_TR(0x709427);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70942a:{NFSU2_TR(0x70942a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70942d:{NFSU2_TR(0x70942d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70942f:{NFSU2_TR(0x70942f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B709432:{NFSU2_TR(0x709432);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709435:{NFSU2_TR(0x709435);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709438:{NFSU2_TR(0x709438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70943b:{NFSU2_TR(0x70943b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70943e:{NFSU2_TR(0x70943e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709440:{NFSU2_TR(0x709440);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709443:{NFSU2_TR(0x709443);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709445:{NFSU2_TR(0x709445);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709448:{NFSU2_TR(0x709448);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70944b:{NFSU2_TR(0x70944b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70944e:{NFSU2_TR(0x70944e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709451:{NFSU2_TR(0x709451);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709453:{NFSU2_TR(0x709453);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709456:{NFSU2_TR(0x709456);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709458:{NFSU2_TR(0x709458);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B70945b:{NFSU2_TR(0x70945b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B70945e:{NFSU2_TR(0x70945e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B709461:{NFSU2_TR(0x709461);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709464:{NFSU2_TR(0x709464);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B709467:{NFSU2_TR(0x709467);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B70946a:{NFSU2_TR(0x70946a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70946d:{NFSU2_TR(0x70946d);
{goto L7094a4;}
}
B70946f:L70946f:{c.instructions+=16;NFSU2_TR(0x70946f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709472:{NFSU2_TR(0x709472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709475:{NFSU2_TR(0x709475);
__builtin_memmove((R+4),(R+28),4);
}
B709477:{NFSU2_TR(0x709477);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B709479:{NFSU2_TR(0x709479);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70947c:{NFSU2_TR(0x70947c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B70947f:{NFSU2_TR(0x70947f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B709483:{NFSU2_TR(0x709483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709486:{NFSU2_TR(0x709486);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709489:{NFSU2_TR(0x709489);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B70948c:{NFSU2_TR(0x70948c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70948f:{NFSU2_TR(0x70948f);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B709496:{NFSU2_TR(0x709496);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B709498:{NFSU2_TR(0x709498);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70949b:{NFSU2_TR(0x70949b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7094a1:{NFSU2_TR(0x7094a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7094a4:L7094a4:{c.instructions+=4;NFSU2_TR(0x7094a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7094a7:{NFSU2_TR(0x7094a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B7094aa:{NFSU2_TR(0x7094aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7094ad:{NFSU2_TR(0x7094ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7092ebu);}goto L7092eb;}}
}
B7094b3:L7094b3:{c.instructions+=4;NFSU2_TR(0x7094b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7094b7:{NFSU2_TR(0x7094b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x8ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7094bb:{NFSU2_TR(0x7094bb);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B7094be:{NFSU2_TR(0x7094be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7092deu);}goto L7092de;}}
}
B7094c4:L7094c4:{c.instructions+=2;NFSU2_TR(0x7094c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7094c5:{NFSU2_TR(0x7094c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7094c6:L7094c6:{c.instructions+=3;NFSU2_TR(0x7094c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7094c7:{NFSU2_TR(0x7094c7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7094c8:{NFSU2_TR(0x7094c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7094c9:L7094c9:{c.instructions+=20;NFSU2_TR(0x7094c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7094ca:{NFSU2_TR(0x7094ca);
__builtin_memmove((R+20),(R+16),4);
}
B7094cc:{NFSU2_TR(0x7094cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb8ull))));
}
B7094d2:{NFSU2_TR(0x7094d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7094d5:{NFSU2_TR(0x7094d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7094d6:{NFSU2_TR(0x7094d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7094d7:{NFSU2_TR(0x7094d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B7094da:{NFSU2_TR(0x7094da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7094dd:{NFSU2_TR(0x7094dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7094e0:{NFSU2_TR(0x7094e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7094e1:{NFSU2_TR(0x7094e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7094e4:{NFSU2_TR(0x7094e4);
__builtin_memmove((R+24),(R+0),4);
}
B7094e6:{NFSU2_TR(0x7094e6);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B7094e8:{NFSU2_TR(0x7094e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7094eb:{NFSU2_TR(0x7094eb);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B7094ed:{NFSU2_TR(0x7094ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7094f0:{NFSU2_TR(0x7094f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7094f3:{NFSU2_TR(0x7094f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7094f6:{NFSU2_TR(0x7094f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7094fc:{NFSU2_TR(0x7094fc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L709c48;}}
}
B709502:L709502:{c.instructions+=52;NFSU2_TR(0x709502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709505:{NFSU2_TR(0x709505);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B709508:{NFSU2_TR(0x709508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70950b:{NFSU2_TR(0x70950b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70950e:{NFSU2_TR(0x70950e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709511:{NFSU2_TR(0x709511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B709514:{NFSU2_TR(0x709514);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709517:{NFSU2_TR(0x709517);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70951a:{NFSU2_TR(0x70951a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709520:{NFSU2_TR(0x709520);
__builtin_memmove((R+28),(R+24),4);
}
B709522:{NFSU2_TR(0x709522);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B709525:{NFSU2_TR(0x709525);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B709528:{NFSU2_TR(0x709528);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70952e:{NFSU2_TR(0x70952e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709531:{NFSU2_TR(0x709531);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709534:{NFSU2_TR(0x709534);
__builtin_memmove((R+12),(R+0),4);
}
B709536:{NFSU2_TR(0x709536);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709539:{NFSU2_TR(0x709539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70953c:{NFSU2_TR(0x70953c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709542:{NFSU2_TR(0x709542);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B709548:{NFSU2_TR(0x709548);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70954e:{NFSU2_TR(0x70954e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709554:{NFSU2_TR(0x709554);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B70955a:{NFSU2_TR(0x70955a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709560:{NFSU2_TR(0x709560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709566:{NFSU2_TR(0x709566);
__builtin_memmove((R+28),(R+0),4);
}
B709568:{NFSU2_TR(0x709568);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70956b:{NFSU2_TR(0x70956b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B70956e:{NFSU2_TR(0x70956e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B709570:{NFSU2_TR(0x709570);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B709573:{NFSU2_TR(0x709573);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B709579:{NFSU2_TR(0x709579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70957c:{NFSU2_TR(0x70957c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B70957f:{NFSU2_TR(0x70957f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709585:{NFSU2_TR(0x709585);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70958b:{NFSU2_TR(0x70958b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70958e:{NFSU2_TR(0x70958e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B709591:{NFSU2_TR(0x709591);
__builtin_memmove((R+12),(R+24),4);
}
B709593:{NFSU2_TR(0x709593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B709596:{NFSU2_TR(0x709596);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709599:{NFSU2_TR(0x709599);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70959c:{NFSU2_TR(0x70959c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70959f:{NFSU2_TR(0x70959f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B7095a1:{NFSU2_TR(0x7095a1);
__builtin_memmove((R+8),(R+0),4);
}
B7095a3:{NFSU2_TR(0x7095a3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B7095a5:{NFSU2_TR(0x7095a5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7095a7:{NFSU2_TR(0x7095a7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7095a9:{NFSU2_TR(0x7095a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095ac:{NFSU2_TR(0x7095ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095af:{NFSU2_TR(0x7095af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095b2:{NFSU2_TR(0x7095b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095b5:{NFSU2_TR(0x7095b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7095b6:L7095b6:{c.instructions+=19;NFSU2_TR(0x7095b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7095b9:{NFSU2_TR(0x7095b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7095bc:{NFSU2_TR(0x7095bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095c2:{NFSU2_TR(0x7095c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7095c5:{NFSU2_TR(0x7095c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7095c8:{NFSU2_TR(0x7095c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7095cb:{NFSU2_TR(0x7095cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7095ce:{NFSU2_TR(0x7095ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7095d1:{NFSU2_TR(0x7095d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7095d4:{NFSU2_TR(0x7095d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095d7:{NFSU2_TR(0x7095d7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7095da:{NFSU2_TR(0x7095da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7095dd:{NFSU2_TR(0x7095dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B7095e0:{NFSU2_TR(0x7095e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095e3:{NFSU2_TR(0x7095e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7095e6:{NFSU2_TR(0x7095e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095e9:{NFSU2_TR(0x7095e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7095ec:{NFSU2_TR(0x7095ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095f2:{NFSU2_TR(0x7095f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095f5:L7095f5:{c.instructions+=42;NFSU2_TR(0x7095f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7095fb:{NFSU2_TR(0x7095fb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7095fd:{NFSU2_TR(0x7095fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709603:{NFSU2_TR(0x709603);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B709606:{NFSU2_TR(0x709606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709609:{NFSU2_TR(0x709609);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70960f:{NFSU2_TR(0x70960f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709611:{NFSU2_TR(0x709611);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709617:{NFSU2_TR(0x709617);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B70961a:{NFSU2_TR(0x70961a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70961d:{NFSU2_TR(0x70961d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709620:{NFSU2_TR(0x709620);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709626:{NFSU2_TR(0x709626);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709628:{NFSU2_TR(0x709628);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70962e:{NFSU2_TR(0x70962e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B709631:{NFSU2_TR(0x709631);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709634:{NFSU2_TR(0x709634);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70963a:{NFSU2_TR(0x70963a);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B70963e:{NFSU2_TR(0x70963e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709644:{NFSU2_TR(0x709644);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+28,u32(r1(U+0)));
}
B709647:{NFSU2_TR(0x709647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70964a:{NFSU2_TR(0x70964a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B70964c:{NFSU2_TR(0x70964c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709652:{NFSU2_TR(0x709652);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709658:{NFSU2_TR(0x709658);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B70965a:{NFSU2_TR(0x70965a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709660:{NFSU2_TR(0x709660);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B709663:{NFSU2_TR(0x709663);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709666:{NFSU2_TR(0x709666);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70966c:{NFSU2_TR(0x70966c);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B709670:{NFSU2_TR(0x709670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709673:{NFSU2_TR(0x709673);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709676:{NFSU2_TR(0x709676);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B709679:{NFSU2_TR(0x709679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70967c:{NFSU2_TR(0x70967c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70967e:{NFSU2_TR(0x70967e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709681:{NFSU2_TR(0x709681);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709684:{NFSU2_TR(0x709684);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709687:{NFSU2_TR(0x709687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70968a:{NFSU2_TR(0x70968a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70968d:{NFSU2_TR(0x70968d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709690:{NFSU2_TR(0x709690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B709697:L709697:{c.instructions+=9;NFSU2_TR(0x709697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70969a:{NFSU2_TR(0x70969a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B70969e:{NFSU2_TR(0x70969e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096a1:{NFSU2_TR(0x7096a1);
__builtin_memmove((R+12),(R+4),4);
}
B7096a3:{NFSU2_TR(0x7096a3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7096a6:{NFSU2_TR(0x7096a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096a9:{NFSU2_TR(0x7096a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096ac:{NFSU2_TR(0x7096ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7096b0:{NFSU2_TR(0x7096b0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x709697u);}goto L709697;}}
}
B7096b2:L7096b2:{c.instructions+=1;NFSU2_TR(0x7096b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7096b9:L7096b9:{c.instructions+=9;NFSU2_TR(0x7096b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7096bc:{NFSU2_TR(0x7096bc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B7096c0:{NFSU2_TR(0x7096c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096c3:{NFSU2_TR(0x7096c3);
__builtin_memmove((R+12),(R+4),4);
}
B7096c5:{NFSU2_TR(0x7096c5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7096c8:{NFSU2_TR(0x7096c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096cb:{NFSU2_TR(0x7096cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096ce:{NFSU2_TR(0x7096ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7096d2:{NFSU2_TR(0x7096d2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7096b9u);}goto L7096b9;}}
}
B7096d4:L7096d4:{c.instructions+=27;NFSU2_TR(0x7096d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7096d7:{NFSU2_TR(0x7096d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7096da:{NFSU2_TR(0x7096da);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B7096dc:{NFSU2_TR(0x7096dc);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7096de:{NFSU2_TR(0x7096de);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7096e1:{NFSU2_TR(0x7096e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096e4:{NFSU2_TR(0x7096e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7096e7:{NFSU2_TR(0x7096e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7096ea:{NFSU2_TR(0x7096ea);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B7096ec:{NFSU2_TR(0x7096ec);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7096ee:{NFSU2_TR(0x7096ee);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7096f1:{NFSU2_TR(0x7096f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096f4:{NFSU2_TR(0x7096f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7096f7:{NFSU2_TR(0x7096f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7096fa:{NFSU2_TR(0x7096fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7096fd:{NFSU2_TR(0x7096fd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B7096ff:{NFSU2_TR(0x7096ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709702:{NFSU2_TR(0x709702);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B709704:{NFSU2_TR(0x709704);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709707:{NFSU2_TR(0x709707);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70970a:{NFSU2_TR(0x70970a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70970d:{NFSU2_TR(0x70970d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B70970f:{NFSU2_TR(0x70970f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709712:{NFSU2_TR(0x709712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B709714:{NFSU2_TR(0x709714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709717:{NFSU2_TR(0x709717);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70971a:{NFSU2_TR(0x70971a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70989b;}}
}
B709720:L709720:{c.instructions+=2;NFSU2_TR(0x709720);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B709722:{NFSU2_TR(0x709722);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70989b;}}
}
B709728:L709728:{c.instructions+=4;NFSU2_TR(0x709728);
__builtin_memmove((R+4),(R+28),4);
}
B70972a:{NFSU2_TR(0x70972a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B70972c:{NFSU2_TR(0x70972c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70972f:{NFSU2_TR(0x70972f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70989b;}}
}
B709735:L709735:{c.instructions+=4;NFSU2_TR(0x709735);
__builtin_memmove((R+4),(R+8),4);
}
B709737:{NFSU2_TR(0x709737);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B709739:{NFSU2_TR(0x709739);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70973c:{NFSU2_TR(0x70973c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70989b;}}
}
B709742:L709742:{c.instructions+=9;NFSU2_TR(0x709742);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709748:{NFSU2_TR(0x709748);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B70974b:{NFSU2_TR(0x70974b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709751:{NFSU2_TR(0x709751);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B709754:{NFSU2_TR(0x709754);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709757:{NFSU2_TR(0x709757);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B709759:{NFSU2_TR(0x709759);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70975b:{NFSU2_TR(0x70975b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70975e:{NFSU2_TR(0x70975e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L709765;}}
}
B709760:L709760:{c.instructions+=2;NFSU2_TR(0x709760);
__builtin_memmove((R+4),(R+12),4);
}
B709762:{NFSU2_TR(0x709762);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B709765:L709765:{c.instructions+=3;NFSU2_TR(0x709765);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709768:{NFSU2_TR(0x709768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70976b:{NFSU2_TR(0x70976b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L709770;}}
}
B70976d:L70976d:{c.instructions+=1;NFSU2_TR(0x70976d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709770:L709770:{c.instructions+=10;NFSU2_TR(0x709770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709773:{NFSU2_TR(0x709773);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709779:{NFSU2_TR(0x709779);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B70977c:{NFSU2_TR(0x70977c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70977f:{NFSU2_TR(0x70977f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B709782:{NFSU2_TR(0x709782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709785:{NFSU2_TR(0x709785);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B709787:{NFSU2_TR(0x709787);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B709789:{NFSU2_TR(0x709789);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70978f:{NFSU2_TR(0x70978f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L709796;}}
}
B709791:L709791:{c.instructions+=2;NFSU2_TR(0x709791);
__builtin_memmove((R+4),(R+12),4);
}
B709793:{NFSU2_TR(0x709793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B709796:L709796:{c.instructions+=3;NFSU2_TR(0x709796);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709799:{NFSU2_TR(0x709799);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70979f:{NFSU2_TR(0x70979f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7097a4;}}
}
B7097a1:L7097a1:{c.instructions+=1;NFSU2_TR(0x7097a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7097a4:L7097a4:{c.instructions+=92;NFSU2_TR(0x7097a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7097a7:{NFSU2_TR(0x7097a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7097aa:{NFSU2_TR(0x7097aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7097ad:{NFSU2_TR(0x7097ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7097b0:{NFSU2_TR(0x7097b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B7097b3:{NFSU2_TR(0x7097b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B7097b6:{NFSU2_TR(0x7097b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B7097b9:{NFSU2_TR(0x7097b9);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7097bd:{NFSU2_TR(0x7097bd);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B7097bf:{NFSU2_TR(0x7097bf);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7097c1:{NFSU2_TR(0x7097c1);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B7097c3:{NFSU2_TR(0x7097c3);
__builtin_memmove((R+8),(R+28),4);
}
B7097c5:{NFSU2_TR(0x7097c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7097c8:{NFSU2_TR(0x7097c8);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B7097ca:{NFSU2_TR(0x7097ca);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7097cc:{NFSU2_TR(0x7097cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7097cf:{NFSU2_TR(0x7097cf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B7097d1:{NFSU2_TR(0x7097d1);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7097d3:{NFSU2_TR(0x7097d3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B7097d5:{NFSU2_TR(0x7097d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7097d8:{NFSU2_TR(0x7097d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B7097db:{NFSU2_TR(0x7097db);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7097de:{NFSU2_TR(0x7097de);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7097e0:{NFSU2_TR(0x7097e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7097e3:{NFSU2_TR(0x7097e3);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7097e6:{NFSU2_TR(0x7097e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7097e9:{NFSU2_TR(0x7097e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7097ec:{NFSU2_TR(0x7097ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7097ef:{NFSU2_TR(0x7097ef);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7097f1:{NFSU2_TR(0x7097f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7097f4:{NFSU2_TR(0x7097f4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B7097f6:{NFSU2_TR(0x7097f6);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7097f8:{NFSU2_TR(0x7097f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7097fb:{NFSU2_TR(0x7097fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7097fe:{NFSU2_TR(0x7097fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709801:{NFSU2_TR(0x709801);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709804:{NFSU2_TR(0x709804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709807:{NFSU2_TR(0x709807);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70980a:{NFSU2_TR(0x70980a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70980d:{NFSU2_TR(0x70980d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70980f:{NFSU2_TR(0x70980f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709812:{NFSU2_TR(0x709812);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709814:{NFSU2_TR(0x709814);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709816:{NFSU2_TR(0x709816);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709819:{NFSU2_TR(0x709819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70981c:{NFSU2_TR(0x70981c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B70981f:{NFSU2_TR(0x70981f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709822:{NFSU2_TR(0x709822);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709825:{NFSU2_TR(0x709825);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709828:{NFSU2_TR(0x709828);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70982b:{NFSU2_TR(0x70982b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70982e:{NFSU2_TR(0x70982e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709830:{NFSU2_TR(0x709830);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B709833:{NFSU2_TR(0x709833);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709835:{NFSU2_TR(0x709835);
__builtin_memmove((R+12),(R+8),4);
}
B709837:{NFSU2_TR(0x709837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B70983a:{NFSU2_TR(0x70983a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70983d:{NFSU2_TR(0x70983d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B709840:{NFSU2_TR(0x709840);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B709843:{NFSU2_TR(0x709843);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B709846:{NFSU2_TR(0x709846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B709849:{NFSU2_TR(0x709849);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B70984c:{NFSU2_TR(0x70984c);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70984f:{NFSU2_TR(0x70984f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709852:{NFSU2_TR(0x709852);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709855:{NFSU2_TR(0x709855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709858:{NFSU2_TR(0x709858);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70985a:{NFSU2_TR(0x70985a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70985d:{NFSU2_TR(0x70985d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B70985f:{NFSU2_TR(0x70985f);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709861:{NFSU2_TR(0x709861);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709864:{NFSU2_TR(0x709864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709867:{NFSU2_TR(0x709867);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B70986a:{NFSU2_TR(0x70986a);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70986d:{NFSU2_TR(0x70986d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709870:{NFSU2_TR(0x709870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709873:{NFSU2_TR(0x709873);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709875:{NFSU2_TR(0x709875);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709878:{NFSU2_TR(0x709878);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B70987a:{NFSU2_TR(0x70987a);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70987c:{NFSU2_TR(0x70987c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70987f:{NFSU2_TR(0x70987f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709882:{NFSU2_TR(0x709882);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709885:{NFSU2_TR(0x709885);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B709887:{NFSU2_TR(0x709887);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70988a:{NFSU2_TR(0x70988a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70988c:{NFSU2_TR(0x70988c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B70988f:{NFSU2_TR(0x70988f);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B709891:{NFSU2_TR(0x709891);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B709893:{NFSU2_TR(0x709893);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B709896:{NFSU2_TR(0x709896);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B709899:{NFSU2_TR(0x709899);
{goto L70991a;}
}
B70989b:L70989b:{c.instructions+=38;NFSU2_TR(0x70989b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70989e:{NFSU2_TR(0x70989e);
__builtin_memmove((R+4),(R+28),4);
}
B7098a0:{NFSU2_TR(0x7098a0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B7098a2:{NFSU2_TR(0x7098a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7098a5:{NFSU2_TR(0x7098a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B7098a8:{NFSU2_TR(0x7098a8);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7098ac:{NFSU2_TR(0x7098ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7098af:{NFSU2_TR(0x7098af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7098b2:{NFSU2_TR(0x7098b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B7098b5:{NFSU2_TR(0x7098b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B7098b8:{NFSU2_TR(0x7098b8);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B7098bf:{NFSU2_TR(0x7098bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7098c2:{NFSU2_TR(0x7098c2);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B7098c4:{NFSU2_TR(0x7098c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7098c7:{NFSU2_TR(0x7098c7);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7098ca:{NFSU2_TR(0x7098ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7098d0:{NFSU2_TR(0x7098d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7098d3:{NFSU2_TR(0x7098d3);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7098d6:{NFSU2_TR(0x7098d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7098dc:{NFSU2_TR(0x7098dc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7098de:{NFSU2_TR(0x7098de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7098e1:{NFSU2_TR(0x7098e1);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7098e3:{NFSU2_TR(0x7098e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7098e9:{NFSU2_TR(0x7098e9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7098eb:{NFSU2_TR(0x7098eb);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7098ee:{NFSU2_TR(0x7098ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7098f4:{NFSU2_TR(0x7098f4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7098f6:{NFSU2_TR(0x7098f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7098f9:{NFSU2_TR(0x7098f9);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7098fc:{NFSU2_TR(0x7098fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709902:{NFSU2_TR(0x709902);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B709904:{NFSU2_TR(0x709904);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709907:{NFSU2_TR(0x709907);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70990a:{NFSU2_TR(0x70990a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709910:{NFSU2_TR(0x709910);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B709913:{NFSU2_TR(0x709913);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B709915:{NFSU2_TR(0x709915);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709918:{NFSU2_TR(0x709918);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B70991a:L70991a:{c.instructions+=13;NFSU2_TR(0x70991a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709920:{NFSU2_TR(0x709920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709926:{NFSU2_TR(0x709926);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709929:{NFSU2_TR(0x709929);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70992f:{NFSU2_TR(0x70992f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B709930:{NFSU2_TR(0x709930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709933:{NFSU2_TR(0x709933);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B709934:{NFSU2_TR(0x709934);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B709936:{NFSU2_TR(0x709936);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B709937:{NFSU2_TR(0x709937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70993a:{NFSU2_TR(0x70993a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70993b:{NFSU2_TR(0x70993b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709941:{NFSU2_TR(0x709941);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7095f5u);}goto L7095f5;}}
}
B709947:L709947:{c.instructions+=3;NFSU2_TR(0x709947);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70994a:{NFSU2_TR(0x70994a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70994d:{NFSU2_TR(0x70994d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L709974;}}
}
B70994f:L70994f:{c.instructions+=11;NFSU2_TR(0x70994f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709952:{NFSU2_TR(0x709952);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709955:{NFSU2_TR(0x709955);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709958:{NFSU2_TR(0x709958);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70995b:{NFSU2_TR(0x70995b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70995e:{NFSU2_TR(0x70995e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709961:{NFSU2_TR(0x709961);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709964:{NFSU2_TR(0x709964);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709967:{NFSU2_TR(0x709967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70996b:{NFSU2_TR(0x70996b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70996f:{NFSU2_TR(0x70996f);
{goto L709c14;}
}
B709974:L709974:{c.instructions+=15;NFSU2_TR(0x709974);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B709977:{NFSU2_TR(0x709977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70997a:{NFSU2_TR(0x70997a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70997d:{NFSU2_TR(0x70997d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B709980:{NFSU2_TR(0x709980);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B709983:{NFSU2_TR(0x709983);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B709986:{NFSU2_TR(0x709986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709989:{NFSU2_TR(0x709989);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70998c:{NFSU2_TR(0x70998c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70998f:{NFSU2_TR(0x70998f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B709992:{NFSU2_TR(0x709992);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B709995:{NFSU2_TR(0x709995);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B709998:{NFSU2_TR(0x709998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70999b:{NFSU2_TR(0x70999b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70999e:{NFSU2_TR(0x70999e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099a1:L7099a1:{c.instructions+=22;NFSU2_TR(0x7099a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7099a5:{NFSU2_TR(0x7099a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7099a9:{NFSU2_TR(0x7099a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7099ad:{NFSU2_TR(0x7099ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7099b1:{NFSU2_TR(0x7099b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099b4:{NFSU2_TR(0x7099b4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B7099b7:{NFSU2_TR(0x7099b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099ba:{NFSU2_TR(0x7099ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7099be:{NFSU2_TR(0x7099be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099c1:{NFSU2_TR(0x7099c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7099c5:{NFSU2_TR(0x7099c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099c8:{NFSU2_TR(0x7099c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7099cc:{NFSU2_TR(0x7099cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099cf:{NFSU2_TR(0x7099cf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7099d1:{NFSU2_TR(0x7099d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099d4:{NFSU2_TR(0x7099d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099d7:{NFSU2_TR(0x7099d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099da:{NFSU2_TR(0x7099da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099dd:{NFSU2_TR(0x7099dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099e0:{NFSU2_TR(0x7099e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099e3:{NFSU2_TR(0x7099e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099e6:{NFSU2_TR(0x7099e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7099ed:L7099ed:{c.instructions+=9;NFSU2_TR(0x7099ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7099f0:{NFSU2_TR(0x7099f0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B7099f4:{NFSU2_TR(0x7099f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B7099f7:{NFSU2_TR(0x7099f7);
__builtin_memmove((R+12),(R+4),4);
}
B7099f9:{NFSU2_TR(0x7099f9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7099fc:{NFSU2_TR(0x7099fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7099ff:{NFSU2_TR(0x7099ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709a02:{NFSU2_TR(0x709a02);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B709a06:{NFSU2_TR(0x709a06);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7099edu);}goto L7099ed;}}
}
B709a08:L709a08:{c.instructions+=1;NFSU2_TR(0x709a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B709a0f:L709a0f:{c.instructions+=9;NFSU2_TR(0x709a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709a12:{NFSU2_TR(0x709a12);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B709a16:{NFSU2_TR(0x709a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709a19:{NFSU2_TR(0x709a19);
__builtin_memmove((R+12),(R+4),4);
}
B709a1b:{NFSU2_TR(0x709a1b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B709a1e:{NFSU2_TR(0x709a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B709a21:{NFSU2_TR(0x709a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709a24:{NFSU2_TR(0x709a24);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B709a28:{NFSU2_TR(0x709a28);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x709a0fu);}goto L709a0f;}}
}
B709a2a:L709a2a:{c.instructions+=27;NFSU2_TR(0x709a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709a2d:{NFSU2_TR(0x709a2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B709a30:{NFSU2_TR(0x709a30);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B709a32:{NFSU2_TR(0x709a32);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B709a34:{NFSU2_TR(0x709a34);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B709a37:{NFSU2_TR(0x709a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B709a3a:{NFSU2_TR(0x709a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709a3d:{NFSU2_TR(0x709a3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B709a40:{NFSU2_TR(0x709a40);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B709a42:{NFSU2_TR(0x709a42);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B709a44:{NFSU2_TR(0x709a44);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B709a47:{NFSU2_TR(0x709a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B709a4a:{NFSU2_TR(0x709a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709a4d:{NFSU2_TR(0x709a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709a50:{NFSU2_TR(0x709a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709a53:{NFSU2_TR(0x709a53);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B709a57:{NFSU2_TR(0x709a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709a5a:{NFSU2_TR(0x709a5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B709a5c:{NFSU2_TR(0x709a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709a5f:{NFSU2_TR(0x709a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709a62:{NFSU2_TR(0x709a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709a65:{NFSU2_TR(0x709a65);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B709a67:{NFSU2_TR(0x709a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709a6a:{NFSU2_TR(0x709a6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B709a6c:{NFSU2_TR(0x709a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709a6f:{NFSU2_TR(0x709a6f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709a72:{NFSU2_TR(0x709a72);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709bcc;}}
}
B709a78:L709a78:{c.instructions+=2;NFSU2_TR(0x709a78);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B709a7a:{NFSU2_TR(0x709a7a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709bcc;}}
}
B709a80:L709a80:{c.instructions+=4;NFSU2_TR(0x709a80);
__builtin_memmove((R+4),(R+24),4);
}
B709a82:{NFSU2_TR(0x709a82);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B709a84:{NFSU2_TR(0x709a84);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709a87:{NFSU2_TR(0x709a87);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709bcc;}}
}
B709a8d:L709a8d:{c.instructions+=4;NFSU2_TR(0x709a8d);
__builtin_memmove((R+4),(R+28),4);
}
B709a8f:{NFSU2_TR(0x709a8f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B709a91:{NFSU2_TR(0x709a91);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709a94:{NFSU2_TR(0x709a94);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709bcc;}}
}
B709a9a:L709a9a:{c.instructions+=5;NFSU2_TR(0x709a9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B709a9e:{NFSU2_TR(0x709a9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B709aa2:{NFSU2_TR(0x709aa2);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B709aa4:{NFSU2_TR(0x709aa4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B709aa6:{NFSU2_TR(0x709aa6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L709aac;}}
}
B709aa8:L709aa8:{c.instructions+=2;NFSU2_TR(0x709aa8);
__builtin_memmove((R+4),(R+12),4);
}
B709aaa:{NFSU2_TR(0x709aaa);
{goto L709ab2;}
}
B709aac:L709aac:{c.instructions+=2;NFSU2_TR(0x709aac);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B709ab0:{NFSU2_TR(0x709ab0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B709ab2:L709ab2:{c.instructions+=2;NFSU2_TR(0x709ab2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709ab5:{NFSU2_TR(0x709ab5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709abd;}}
}
B709ab7:L709ab7:{c.instructions+=2;NFSU2_TR(0x709ab7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B709abb:{NFSU2_TR(0x709abb);
{goto L709ac1;}
}
B709abd:L709abd:{c.instructions+=1;NFSU2_TR(0x709abd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B709ac1:L709ac1:{c.instructions+=6;NFSU2_TR(0x709ac1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B709ac5:{NFSU2_TR(0x709ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709ac8:{NFSU2_TR(0x709ac8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B709acc:{NFSU2_TR(0x709acc);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B709ace:{NFSU2_TR(0x709ace);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B709ad0:{NFSU2_TR(0x709ad0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L709ad6;}}
}
B709ad2:L709ad2:{c.instructions+=2;NFSU2_TR(0x709ad2);
__builtin_memmove((R+4),(R+12),4);
}
B709ad4:{NFSU2_TR(0x709ad4);
{goto L709adc;}
}
B709ad6:L709ad6:{c.instructions+=2;NFSU2_TR(0x709ad6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B709ada:{NFSU2_TR(0x709ada);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B709adc:L709adc:{c.instructions+=2;NFSU2_TR(0x709adc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709adf:{NFSU2_TR(0x709adf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709ae7;}}
}
B709ae1:L709ae1:{c.instructions+=2;NFSU2_TR(0x709ae1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B709ae5:{NFSU2_TR(0x709ae5);
{goto L709aeb;}
}
B709ae7:L709ae7:{c.instructions+=1;NFSU2_TR(0x709ae7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B709aeb:L709aeb:{c.instructions+=85;NFSU2_TR(0x709aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709aee:{NFSU2_TR(0x709aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709af1:{NFSU2_TR(0x709af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B709af4:{NFSU2_TR(0x709af4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B709af6:{NFSU2_TR(0x709af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B709af9:{NFSU2_TR(0x709af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B709afc:{NFSU2_TR(0x709afc);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B709b00:{NFSU2_TR(0x709b00);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709b02:{NFSU2_TR(0x709b02);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709b04:{NFSU2_TR(0x709b04);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B709b06:{NFSU2_TR(0x709b06);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B709b08:{NFSU2_TR(0x709b08);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709b0b:{NFSU2_TR(0x709b0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709b0e:{NFSU2_TR(0x709b0e);
__builtin_memmove((R+8),(R+24),4);
}
B709b10:{NFSU2_TR(0x709b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b13:{NFSU2_TR(0x709b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709b16:{NFSU2_TR(0x709b16);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709b18:{NFSU2_TR(0x709b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b1b:{NFSU2_TR(0x709b1b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709b1d:{NFSU2_TR(0x709b1d);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709b1f:{NFSU2_TR(0x709b1f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B709b21:{NFSU2_TR(0x709b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b24:{NFSU2_TR(0x709b24);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709b27:{NFSU2_TR(0x709b27);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709b2a:{NFSU2_TR(0x709b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b2d:{NFSU2_TR(0x709b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b30:{NFSU2_TR(0x709b30);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709b32:{NFSU2_TR(0x709b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b35:{NFSU2_TR(0x709b35);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709b37:{NFSU2_TR(0x709b37);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709b39:{NFSU2_TR(0x709b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b3c:{NFSU2_TR(0x709b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b3f:{NFSU2_TR(0x709b3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709b42:{NFSU2_TR(0x709b42);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B709b44:{NFSU2_TR(0x709b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b47:{NFSU2_TR(0x709b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b4a:{NFSU2_TR(0x709b4a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709b4c:{NFSU2_TR(0x709b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B709b4f:{NFSU2_TR(0x709b4f);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709b51:{NFSU2_TR(0x709b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b54:{NFSU2_TR(0x709b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b57:{NFSU2_TR(0x709b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b5a:{NFSU2_TR(0x709b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b5d:{NFSU2_TR(0x709b5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709b60:{NFSU2_TR(0x709b60);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709b63:{NFSU2_TR(0x709b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b66:{NFSU2_TR(0x709b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b69:{NFSU2_TR(0x709b69);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709b6b:{NFSU2_TR(0x709b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B709b6e:{NFSU2_TR(0x709b6e);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709b70:{NFSU2_TR(0x709b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b73:{NFSU2_TR(0x709b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b76:{NFSU2_TR(0x709b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b79:{NFSU2_TR(0x709b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b7c:{NFSU2_TR(0x709b7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709b7f:{NFSU2_TR(0x709b7f);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+12)),r1(U+0));
}
B709b81:{NFSU2_TR(0x709b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b84:{NFSU2_TR(0x709b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b87:{NFSU2_TR(0x709b87);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709b89:{NFSU2_TR(0x709b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b8c:{NFSU2_TR(0x709b8c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709b8e:{NFSU2_TR(0x709b8e);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709b90:{NFSU2_TR(0x709b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b93:{NFSU2_TR(0x709b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b96:{NFSU2_TR(0x709b96);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709b99:{NFSU2_TR(0x709b99);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709b9c:{NFSU2_TR(0x709b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b9f:{NFSU2_TR(0x709b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709ba2:{NFSU2_TR(0x709ba2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709ba4:{NFSU2_TR(0x709ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709ba7:{NFSU2_TR(0x709ba7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709ba9:{NFSU2_TR(0x709ba9);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709bab:{NFSU2_TR(0x709bab);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B709bad:{NFSU2_TR(0x709bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709bb0:{NFSU2_TR(0x709bb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709bb3:{NFSU2_TR(0x709bb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709bb6:{NFSU2_TR(0x709bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709bb9:{NFSU2_TR(0x709bb9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709bbb:{NFSU2_TR(0x709bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B709bbe:{NFSU2_TR(0x709bbe);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B709bc0:{NFSU2_TR(0x709bc0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B709bc2:{NFSU2_TR(0x709bc2);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B709bc4:{NFSU2_TR(0x709bc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B709bc7:{NFSU2_TR(0x709bc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709bca:{NFSU2_TR(0x709bca);
{goto L709c00;}
}
B709bcc:L709bcc:{c.instructions+=16;NFSU2_TR(0x709bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709bcf:{NFSU2_TR(0x709bcf);
__builtin_memmove((R+4),(R+24),4);
}
B709bd1:{NFSU2_TR(0x709bd1);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B709bd3:{NFSU2_TR(0x709bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B709bd6:{NFSU2_TR(0x709bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B709bd9:{NFSU2_TR(0x709bd9);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B709bdd:{NFSU2_TR(0x709bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709be0:{NFSU2_TR(0x709be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709be3:{NFSU2_TR(0x709be3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B709be6:{NFSU2_TR(0x709be6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B709be9:{NFSU2_TR(0x709be9);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B709bf0:{NFSU2_TR(0x709bf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709bf3:{NFSU2_TR(0x709bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709bf6:{NFSU2_TR(0x709bf6);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B709bf8:{NFSU2_TR(0x709bf8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B709bfe:{NFSU2_TR(0x709bfe);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B709c00:L709c00:{c.instructions+=7;NFSU2_TR(0x709c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709c03:{NFSU2_TR(0x709c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c06:{NFSU2_TR(0x709c06);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B709c08:{NFSU2_TR(0x709c08);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B709c0a:{NFSU2_TR(0x709c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B709c0d:{NFSU2_TR(0x709c0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B709c0e:{NFSU2_TR(0x709c0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7099a1u);}goto L7099a1;}}
}
B709c14:L709c14:{c.instructions+=15;NFSU2_TR(0x709c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c17:{NFSU2_TR(0x709c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B709c1a:{NFSU2_TR(0x709c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B709c1d:{NFSU2_TR(0x709c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c20:{NFSU2_TR(0x709c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c23:{NFSU2_TR(0x709c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c26:{NFSU2_TR(0x709c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c29:{NFSU2_TR(0x709c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c2c:{NFSU2_TR(0x709c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c2f:{NFSU2_TR(0x709c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c33:{NFSU2_TR(0x709c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c37:{NFSU2_TR(0x709c37);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B709c39:{NFSU2_TR(0x709c39);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
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
B709c3f:{NFSU2_TR(0x709c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c42:{NFSU2_TR(0x709c42);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7095b6u);}goto L7095b6;}}
}
B709c48:L709c48:{c.instructions+=5;NFSU2_TR(0x709c48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B709c49:{NFSU2_TR(0x709c49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B709c4a:{NFSU2_TR(0x709c4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B709c4b:{NFSU2_TR(0x709c4b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B709c4c:{NFSU2_TR(0x709c4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B709c4d:L709c4d:{c.instructions+=22;NFSU2_TR(0x709c4d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B709c4e:{NFSU2_TR(0x709c4e);
__builtin_memmove((R+20),(R+16),4);
}
B709c50:{NFSU2_TR(0x709c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa0ull))));
}
B709c56:{NFSU2_TR(0x709c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709c59:{NFSU2_TR(0x709c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709c5c:{NFSU2_TR(0x709c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709c5f:{NFSU2_TR(0x709c5f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B709c60:{NFSU2_TR(0x709c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709c63:{NFSU2_TR(0x709c63);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B709c66:{NFSU2_TR(0x709c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709c69:{NFSU2_TR(0x709c69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B709c6a:{NFSU2_TR(0x709c6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B709c6b:{NFSU2_TR(0x709c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709c6e:{NFSU2_TR(0x709c6e);
__builtin_memmove((R+24),(R+8),4);
}
B709c70:{NFSU2_TR(0x709c70);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B709c72:{NFSU2_TR(0x709c72);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B709c75:{NFSU2_TR(0x709c75);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B709c77:{NFSU2_TR(0x709c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c7a:{NFSU2_TR(0x709c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B709c7d:{NFSU2_TR(0x709c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c80:{NFSU2_TR(0x709c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c86:{NFSU2_TR(0x709c86);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x70a275u,70a);}
}
B709c8c:L709c8c:{c.instructions+=105;NFSU2_TR(0x709c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B709c8f:{NFSU2_TR(0x709c8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B709c92:{NFSU2_TR(0x709c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c98:{NFSU2_TR(0x709c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c9b:{NFSU2_TR(0x709c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c9e:{NFSU2_TR(0x709c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B709ca1:{NFSU2_TR(0x709ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B709ca4:{NFSU2_TR(0x709ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B709ca7:{NFSU2_TR(0x709ca7);
__builtin_memmove((R+28),(R+24),4);
}
B709ca9:{NFSU2_TR(0x709ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B709cac:{NFSU2_TR(0x709cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B709caf:{NFSU2_TR(0x709caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cb2:{NFSU2_TR(0x709cb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B709cb5:{NFSU2_TR(0x709cb5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B709cb8:{NFSU2_TR(0x709cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cbe:{NFSU2_TR(0x709cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709cc1:{NFSU2_TR(0x709cc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B709cc4:{NFSU2_TR(0x709cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B709cc7:{NFSU2_TR(0x709cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709ccd:{NFSU2_TR(0x709ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B709cd3:{NFSU2_TR(0x709cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cd6:{NFSU2_TR(0x709cd6);
__builtin_memmove((R+28),(R+8),4);
}
B709cd8:{NFSU2_TR(0x709cd8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B709cdb:{NFSU2_TR(0x709cdb);
__builtin_memmove((R+4),(R+12),4);
}
B709cdd:{NFSU2_TR(0x709cdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B709ce0:{NFSU2_TR(0x709ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709ce3:{NFSU2_TR(0x709ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B709ce6:{NFSU2_TR(0x709ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B709ce9:{NFSU2_TR(0x709ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cec:{NFSU2_TR(0x709cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cef:{NFSU2_TR(0x709cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cf2:{NFSU2_TR(0x709cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B709cf5:{NFSU2_TR(0x709cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cf8:{NFSU2_TR(0x709cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709cfb:{NFSU2_TR(0x709cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B709cfe:{NFSU2_TR(0x709cfe);
__builtin_memmove((R+12),(R+8),4);
}
B709d00:{NFSU2_TR(0x709d00);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B709d03:{NFSU2_TR(0x709d03);
__builtin_memmove((R+4),(R+28),4);
}
B709d05:{NFSU2_TR(0x709d05);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B709d07:{NFSU2_TR(0x709d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d0a:{NFSU2_TR(0x709d0a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B709d0d:{NFSU2_TR(0x709d0d);
__builtin_memmove((R+12),(R+24),4);
}
B709d0f:{NFSU2_TR(0x709d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B709d12:{NFSU2_TR(0x709d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d15:{NFSU2_TR(0x709d15);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B709d17:{NFSU2_TR(0x709d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d1a:{NFSU2_TR(0x709d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d1d:{NFSU2_TR(0x709d1d);
__builtin_memmove((R+4),(R+8),4);
}
B709d1f:{NFSU2_TR(0x709d1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B709d22:{NFSU2_TR(0x709d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d25:{NFSU2_TR(0x709d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B709d28:{NFSU2_TR(0x709d28);
__builtin_memmove((R+24),(R+28),4);
}
B709d2a:{NFSU2_TR(0x709d2a);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B709d2c:{NFSU2_TR(0x709d2c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B709d2e:{NFSU2_TR(0x709d2e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B709d30:{NFSU2_TR(0x709d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d33:{NFSU2_TR(0x709d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d36:{NFSU2_TR(0x709d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d39:{NFSU2_TR(0x709d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B709d3a:{NFSU2_TR(0x709d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B709d3d:{NFSU2_TR(0x709d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709d40:{NFSU2_TR(0x709d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B709d43:{NFSU2_TR(0x709d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d49:{NFSU2_TR(0x709d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B709d4c:{NFSU2_TR(0x709d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d4f:{NFSU2_TR(0x709d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B709d52:{NFSU2_TR(0x709d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d58:{NFSU2_TR(0x709d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d5b:{NFSU2_TR(0x709d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709d5e:{NFSU2_TR(0x709d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709d64:{NFSU2_TR(0x709d64);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B709d66:{NFSU2_TR(0x709d66);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(r1(U+8)));
}
B709d6a:{NFSU2_TR(0x709d6a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B709d6d:{NFSU2_TR(0x709d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d70:{NFSU2_TR(0x709d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709d73:{NFSU2_TR(0x709d73);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(r1(U+8)));
}
B709d77:{NFSU2_TR(0x709d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d7a:{NFSU2_TR(0x709d7a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+12,u32(r1(U+0)));
}
B709d7d:{NFSU2_TR(0x709d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d80:{NFSU2_TR(0x709d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709d83:{NFSU2_TR(0x709d83);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B709d85:{NFSU2_TR(0x709d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709d88:{NFSU2_TR(0x709d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d8b:{NFSU2_TR(0x709d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709d91:{NFSU2_TR(0x709d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d97:{NFSU2_TR(0x709d97);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+28,u32(r1(U+0)));
}
B709d9a:{NFSU2_TR(0x709d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709d9e:{NFSU2_TR(0x709d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709da1:{NFSU2_TR(0x709da1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+28,u32(r1(U+0)));
}
B709da4:{NFSU2_TR(0x709da4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+4,u32(r1(U+0)));
}
B709da7:{NFSU2_TR(0x709da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709daa:{NFSU2_TR(0x709daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709dad:{NFSU2_TR(0x709dad);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B709db1:{NFSU2_TR(0x709db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709db4:{NFSU2_TR(0x709db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709db7:{NFSU2_TR(0x709db7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B709db9:{NFSU2_TR(0x709db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709dbd:{NFSU2_TR(0x709dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709dc3:{NFSU2_TR(0x709dc3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B709dc6:{NFSU2_TR(0x709dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709dc9:{NFSU2_TR(0x709dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709dcc:{NFSU2_TR(0x709dcc);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B709dd0:{NFSU2_TR(0x709dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709dd3:{NFSU2_TR(0x709dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709dd6:{NFSU2_TR(0x709dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B709ddd:L709ddd:{c.instructions+=10;NFSU2_TR(0x709ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709de0:{NFSU2_TR(0x709de0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B709de3:{NFSU2_TR(0x709de3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B709de7:{NFSU2_TR(0x709de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709dea:{NFSU2_TR(0x709dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709df0:{NFSU2_TR(0x709df0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B709df3:{NFSU2_TR(0x709df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709df6:{NFSU2_TR(0x709df6);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B709df8:{NFSU2_TR(0x709df8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B709dfa:{NFSU2_TR(0x709dfa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L709e00;}}
}
B709dfc:L709dfc:{c.instructions+=2;NFSU2_TR(0x709dfc);
__builtin_memmove((R+4),(R+12),4);
}
B709dfe:{NFSU2_TR(0x709dfe);
{goto L709e03;}
}
B709e00:L709e00:{c.instructions+=1;NFSU2_TR(0x709e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B709e03:L709e03:{c.instructions+=4;NFSU2_TR(0x709e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709e06:{NFSU2_TR(0x709e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709e09:{NFSU2_TR(0x709e09);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B709e0d:{NFSU2_TR(0x709e0d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x709dddu);}goto L709ddd;}}
}
B709e0f:L709e0f:{c.instructions+=1;NFSU2_TR(0x709e0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B709e16:L709e16:{c.instructions+=8;NFSU2_TR(0x709e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709e19:{NFSU2_TR(0x709e19);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B709e1c:{NFSU2_TR(0x709e1c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B709e20:{NFSU2_TR(0x709e20);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B709e24:{NFSU2_TR(0x709e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709e27:{NFSU2_TR(0x709e27);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B709e29:{NFSU2_TR(0x709e29);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B709e2b:{NFSU2_TR(0x709e2b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L709e31;}}
}
B709e2d:L709e2d:{c.instructions+=2;NFSU2_TR(0x709e2d);
__builtin_memmove((R+4),(R+12),4);
}
B709e2f:{NFSU2_TR(0x709e2f);
{goto L709e34;}
}
B709e31:L709e31:{c.instructions+=1;NFSU2_TR(0x709e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B709e34:L709e34:{c.instructions+=4;NFSU2_TR(0x709e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709e37:{NFSU2_TR(0x709e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709e3a:{NFSU2_TR(0x709e3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B709e3e:{NFSU2_TR(0x709e3e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x709e16u);}goto L709e16;}}
}
B709e40:L709e40:{c.instructions+=5;NFSU2_TR(0x709e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709e43:{NFSU2_TR(0x709e43);
w4(R+4,u32(0xffull));
}
B709e48:{NFSU2_TR(0x709e48);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B709e4a:{NFSU2_TR(0x709e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709e4d:{NFSU2_TR(0x709e4d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L709e52;}}
}
B709e4f:L709e4f:{c.instructions+=1;NFSU2_TR(0x709e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709e52:L709e52:{c.instructions+=11;NFSU2_TR(0x709e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709e55:{NFSU2_TR(0x709e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709e58:{NFSU2_TR(0x709e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709e5b:{NFSU2_TR(0x709e5b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B709e5d:{NFSU2_TR(0x709e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709e60:{NFSU2_TR(0x709e60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B709e62:{NFSU2_TR(0x709e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709e65:{NFSU2_TR(0x709e65);
w4(R+4,u32(0xffull));
}
B709e6a:{NFSU2_TR(0x709e6a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B709e6c:{NFSU2_TR(0x709e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709e6f:{NFSU2_TR(0x709e6f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L709e74;}}
}
B709e71:L709e71:{c.instructions+=1;NFSU2_TR(0x709e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709e74:L709e74:{c.instructions+=9;NFSU2_TR(0x709e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709e77:{NFSU2_TR(0x709e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709e7a:{NFSU2_TR(0x709e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709e7d:{NFSU2_TR(0x709e7d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B709e7f:{NFSU2_TR(0x709e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709e82:{NFSU2_TR(0x709e82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B709e84:{NFSU2_TR(0x709e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709e8a:{NFSU2_TR(0x709e8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709e8d:{NFSU2_TR(0x709e8d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709f73;}}
}
B709e93:L709e93:{c.instructions+=2;NFSU2_TR(0x709e93);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709e96:{NFSU2_TR(0x709e96);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709f73;}}
}
B709e9c:L709e9c:{c.instructions+=4;NFSU2_TR(0x709e9c);
__builtin_memmove((R+4),(R+28),4);
}
B709e9e:{NFSU2_TR(0x709e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B709ea1:{NFSU2_TR(0x709ea1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709ea4:{NFSU2_TR(0x709ea4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709f73;}}
}
B709eaa:L709eaa:{c.instructions+=4;NFSU2_TR(0x709eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709ead:{NFSU2_TR(0x709ead);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B709eaf:{NFSU2_TR(0x709eaf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709eb2:{NFSU2_TR(0x709eb2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L709f73;}}
}
B709eb8:L709eb8:{c.instructions+=65;NFSU2_TR(0x709eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709ebb:{NFSU2_TR(0x709ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709ebe:{NFSU2_TR(0x709ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B709ec1:{NFSU2_TR(0x709ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709ec4:{NFSU2_TR(0x709ec4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B709ec6:{NFSU2_TR(0x709ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B709ec9:{NFSU2_TR(0x709ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B709ecc:{NFSU2_TR(0x709ecc);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B709ed0:{NFSU2_TR(0x709ed0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709ed2:{NFSU2_TR(0x709ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709ed5:{NFSU2_TR(0x709ed5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709ed8:{NFSU2_TR(0x709ed8);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B709eda:{NFSU2_TR(0x709eda);
__builtin_memmove((R+8),(R+28),4);
}
B709edc:{NFSU2_TR(0x709edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709edf:{NFSU2_TR(0x709edf);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709ee1:{NFSU2_TR(0x709ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709ee4:{NFSU2_TR(0x709ee4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709ee6:{NFSU2_TR(0x709ee6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709ee9:{NFSU2_TR(0x709ee9);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709eec:{NFSU2_TR(0x709eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709eef:{NFSU2_TR(0x709eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709ef2:{NFSU2_TR(0x709ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709ef5:{NFSU2_TR(0x709ef5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709ef7:{NFSU2_TR(0x709ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709efa:{NFSU2_TR(0x709efa);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709efc:{NFSU2_TR(0x709efc);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709eff:{NFSU2_TR(0x709eff);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709f02:{NFSU2_TR(0x709f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709f05:{NFSU2_TR(0x709f05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709f08:{NFSU2_TR(0x709f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709f0b:{NFSU2_TR(0x709f0b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709f0d:{NFSU2_TR(0x709f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709f10:{NFSU2_TR(0x709f10);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B709f12:{NFSU2_TR(0x709f12);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709f15:{NFSU2_TR(0x709f15);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709f18:{NFSU2_TR(0x709f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709f1b:{NFSU2_TR(0x709f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709f1e:{NFSU2_TR(0x709f1e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B709f20:{NFSU2_TR(0x709f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709f23:{NFSU2_TR(0x709f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B709f26:{NFSU2_TR(0x709f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f29:{NFSU2_TR(0x709f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B709f2c:{NFSU2_TR(0x709f2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B709f2f:{NFSU2_TR(0x709f2f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B709f31:{NFSU2_TR(0x709f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f34:{NFSU2_TR(0x709f34);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709f37:{NFSU2_TR(0x709f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B709f3a:{NFSU2_TR(0x709f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f3d:{NFSU2_TR(0x709f3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B709f40:{NFSU2_TR(0x709f40);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709f43:{NFSU2_TR(0x709f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f46:{NFSU2_TR(0x709f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B709f49:{NFSU2_TR(0x709f49);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B709f4b:{NFSU2_TR(0x709f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f4e:{NFSU2_TR(0x709f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B709f51:{NFSU2_TR(0x709f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B709f54:{NFSU2_TR(0x709f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f57:{NFSU2_TR(0x709f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B709f5a:{NFSU2_TR(0x709f5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B709f5d:{NFSU2_TR(0x709f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B709f60:{NFSU2_TR(0x709f60);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B709f62:{NFSU2_TR(0x709f62);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B709f65:{NFSU2_TR(0x709f65);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709f68:{NFSU2_TR(0x709f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f6e:{NFSU2_TR(0x709f6e);
{goto L709ff5;}
}
B709f73:L709f73:{c.instructions+=40;NFSU2_TR(0x709f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709f76:{NFSU2_TR(0x709f76);
__builtin_memmove((R+4),(R+28),4);
}
B709f78:{NFSU2_TR(0x709f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B709f7b:{NFSU2_TR(0x709f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B709f7e:{NFSU2_TR(0x709f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B709f81:{NFSU2_TR(0x709f81);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B709f85:{NFSU2_TR(0x709f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709f88:{NFSU2_TR(0x709f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709f8b:{NFSU2_TR(0x709f8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B709f8e:{NFSU2_TR(0x709f8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B709f91:{NFSU2_TR(0x709f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709f94:{NFSU2_TR(0x709f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709f97:{NFSU2_TR(0x709f97);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B709f9e:{NFSU2_TR(0x709f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709fa1:{NFSU2_TR(0x709fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B709fa4:{NFSU2_TR(0x709fa4);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709fa7:{NFSU2_TR(0x709fa7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B709fad:{NFSU2_TR(0x709fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709fb3:{NFSU2_TR(0x709fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709fb6:{NFSU2_TR(0x709fb6);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709fb9:{NFSU2_TR(0x709fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709fbc:{NFSU2_TR(0x709fbc);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B709fbf:{NFSU2_TR(0x709fbf);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B709fc1:{NFSU2_TR(0x709fc1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B709fc3:{NFSU2_TR(0x709fc3);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709fc6:{NFSU2_TR(0x709fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709fcc:{NFSU2_TR(0x709fcc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B709fce:{NFSU2_TR(0x709fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709fd1:{NFSU2_TR(0x709fd1);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709fd4:{NFSU2_TR(0x709fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709fd7:{NFSU2_TR(0x709fd7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B709fd9:{NFSU2_TR(0x709fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709fdc:{NFSU2_TR(0x709fdc);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709fdf:{NFSU2_TR(0x709fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709fe2:{NFSU2_TR(0x709fe2);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B709fe5:{NFSU2_TR(0x709fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709fe8:{NFSU2_TR(0x709fe8);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B709fea:{NFSU2_TR(0x709fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B709ff0:{NFSU2_TR(0x709ff0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B709ff2:{NFSU2_TR(0x709ff2);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709ff5:L709ff5:{c.instructions+=4;NFSU2_TR(0x709ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709ffb:{NFSU2_TR(0x709ffb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B709ffc:{NFSU2_TR(0x709ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709fff:{NFSU2_TR(0x709fff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
TAIL_STATIC(0x70a000u,70a);
}
XIT:NFSU2_TR_EXIT(0x709,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
