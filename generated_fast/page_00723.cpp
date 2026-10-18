#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_71f(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_725(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x723,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x723,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_723(u8* __restrict R,Cpu& c);
u32 page_723(Cpu& c){return body_723(c.regs.data(),c);}
__attribute__((noinline)) u32 body_723(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x723000:goto L723000;
case 0x723003:c.instructions+=4;goto B723003;
case 0x723009:c.instructions+=3;goto B723009;
case 0x72300c:c.instructions+=2;goto B72300c;
case 0x72300f:c.instructions+=1;goto B72300f;
case 0x723014:goto L723014;
case 0x723016:c.instructions+=2;goto B723016;
case 0x723017:c.instructions+=1;goto B723017;
case 0x723019:goto L723019;
case 0x72301a:c.instructions+=3;goto B72301a;
case 0x72301c:c.instructions+=2;goto B72301c;
case 0x723020:c.instructions+=1;goto B723020;
case 0x723022:goto L723022;
case 0x723025:c.instructions+=2;goto B723025;
case 0x723028:c.instructions+=1;goto B723028;
case 0x72302b:goto L72302b;
case 0x723030:c.instructions+=15;goto B723030;
case 0x723034:c.instructions+=14;goto B723034;
case 0x72303a:c.instructions+=13;goto B72303a;
case 0x72303d:c.instructions+=12;goto B72303d;
case 0x723040:c.instructions+=11;goto B723040;
case 0x723044:c.instructions+=10;goto B723044;
case 0x723047:c.instructions+=9;goto B723047;
case 0x723048:c.instructions+=8;goto B723048;
case 0x723049:c.instructions+=7;goto B723049;
case 0x72304c:c.instructions+=6;goto B72304c;
case 0x72304e:c.instructions+=5;goto B72304e;
case 0x72304f:c.instructions+=4;goto B72304f;
case 0x723052:c.instructions+=3;goto B723052;
case 0x723056:c.instructions+=2;goto B723056;
case 0x723058:c.instructions+=1;goto B723058;
case 0x72305a:goto L72305a;
case 0x72305d:c.instructions+=3;goto B72305d;
case 0x72305e:c.instructions+=2;goto B72305e;
case 0x723061:c.instructions+=1;goto B723061;
case 0x723066:goto L723066;
case 0x723069:c.instructions+=1;goto B723069;
case 0x72306a:goto L72306a;
case 0x72306c:c.instructions+=4;goto B72306c;
case 0x72306d:c.instructions+=3;goto B72306d;
case 0x72306e:c.instructions+=2;goto B72306e;
case 0x72306f:c.instructions+=1;goto B72306f;
case 0x723070:goto L723070;
case 0x723077:c.instructions+=1;goto B723077;
case 0x723079:goto L723079;
case 0x72307b:c.instructions+=1;goto B72307b;
case 0x72307d:goto L72307d;
case 0x723081:c.instructions+=1;goto B723081;
case 0x723086:goto L723086;
case 0x723088:c.instructions+=2;goto B723088;
case 0x723089:c.instructions+=1;goto B723089;
case 0x72308b:goto L72308b;
case 0x72308d:goto L72308d;
case 0x72308e:c.instructions+=1;goto B72308e;
case 0x72308f:goto L72308f;
case 0x723093:c.instructions+=4;goto B723093;
case 0x723094:c.instructions+=3;goto B723094;
case 0x723097:c.instructions+=2;goto B723097;
case 0x72309d:c.instructions+=1;goto B72309d;
case 0x7230a2:goto L7230a2;
case 0x7230a3:c.instructions+=3;goto B7230a3;
case 0x7230a4:c.instructions+=2;goto B7230a4;
case 0x7230a6:c.instructions+=1;goto B7230a6;
case 0x7230a7:goto L7230a7;
case 0x7230ae:c.instructions+=1;goto B7230ae;
case 0x7230b0:goto L7230b0;
case 0x7230b2:c.instructions+=1;goto B7230b2;
case 0x7230b4:goto L7230b4;
case 0x7230b8:c.instructions+=1;goto B7230b8;
case 0x7230bd:goto L7230bd;
case 0x7230bf:c.instructions+=2;goto B7230bf;
case 0x7230c0:c.instructions+=1;goto B7230c0;
case 0x7230c2:goto L7230c2;
case 0x7230c4:goto L7230c4;
case 0x7230c5:c.instructions+=1;goto B7230c5;
case 0x7230c6:goto L7230c6;
case 0x7230ca:c.instructions+=3;goto B7230ca;
case 0x7230cf:c.instructions+=2;goto B7230cf;
case 0x7230d1:c.instructions+=1;goto B7230d1;
case 0x7230d3:goto L7230d3;
case 0x7230d5:goto L7230d5;
case 0x7230d6:c.instructions+=3;goto B7230d6;
case 0x7230d9:c.instructions+=2;goto B7230d9;
case 0x7230e0:c.instructions+=1;goto B7230e0;
case 0x7230e5:goto L7230e5;
case 0x7230e6:c.instructions+=3;goto B7230e6;
case 0x7230e7:c.instructions+=2;goto B7230e7;
case 0x7230e9:c.instructions+=1;goto B7230e9;
case 0x7230ea:goto L7230ea;
case 0x7230eb:c.instructions+=6;goto B7230eb;
case 0x7230ee:c.instructions+=5;goto B7230ee;
case 0x7230f0:c.instructions+=4;goto B7230f0;
case 0x7230f4:c.instructions+=3;goto B7230f4;
case 0x7230f5:c.instructions+=2;goto B7230f5;
case 0x7230f7:c.instructions+=1;goto B7230f7;
case 0x7230f9:goto L7230f9;
case 0x7230fd:c.instructions+=4;goto B7230fd;
case 0x723103:c.instructions+=3;goto B723103;
case 0x723106:c.instructions+=2;goto B723106;
case 0x723109:c.instructions+=1;goto B723109;
case 0x72310d:goto L72310d;
case 0x723110:c.instructions+=2;goto B723110;
case 0x723112:c.instructions+=1;goto B723112;
case 0x723114:goto L723114;
case 0x723116:c.instructions+=1;goto B723116;
case 0x723118:goto L723118;
case 0x723119:c.instructions+=4;goto B723119;
case 0x72311a:c.instructions+=3;goto B72311a;
case 0x72311b:c.instructions+=2;goto B72311b;
case 0x72311f:c.instructions+=1;goto B72311f;
case 0x723121:goto L723121;
case 0x723122:c.instructions+=2;goto B723122;
case 0x723123:c.instructions+=1;goto B723123;
case 0x723124:goto L723124;
case 0x723129:goto L723129;
case 0x72312d:c.instructions+=3;goto B72312d;
case 0x723130:c.instructions+=2;goto B723130;
case 0x723137:c.instructions+=1;goto B723137;
case 0x723138:goto L723138;
case 0x723139:c.instructions+=3;goto B723139;
case 0x72313b:c.instructions+=2;goto B72313b;
case 0x723142:c.instructions+=1;goto B723142;
case 0x723144:goto L723144;
case 0x723146:c.instructions+=3;goto B723146;
case 0x723147:c.instructions+=2;goto B723147;
case 0x723148:c.instructions+=1;goto B723148;
case 0x723149:goto L723149;
case 0x72314a:c.instructions+=2;goto B72314a;
case 0x72314b:c.instructions+=1;goto B72314b;
case 0x723150:goto L723150;
case 0x723157:c.instructions+=3;goto B723157;
case 0x723159:c.instructions+=2;goto B723159;
case 0x72315b:c.instructions+=1;goto B72315b;
case 0x72315d:goto L72315d;
case 0x723165:c.instructions+=1;goto B723165;
case 0x723167:goto L723167;
case 0x723168:c.instructions+=2;goto B723168;
case 0x72316a:c.instructions+=1;goto B72316a;
case 0x72316c:goto L72316c;
case 0x72316e:goto L72316e;
case 0x72316f:goto L72316f;
case 0x723174:goto L723174;
case 0x723176:c.instructions+=4;goto B723176;
case 0x723177:c.instructions+=3;goto B723177;
case 0x723178:c.instructions+=2;goto B723178;
case 0x723179:c.instructions+=1;goto B723179;
case 0x72317a:goto L72317a;
case 0x72317d:c.instructions+=3;goto B72317d;
case 0x72317e:c.instructions+=2;goto B72317e;
case 0x72317f:c.instructions+=1;goto B72317f;
case 0x723184:goto L723184;
case 0x723186:c.instructions+=3;goto B723186;
case 0x723187:c.instructions+=2;goto B723187;
case 0x723188:c.instructions+=1;goto B723188;
case 0x72318a:goto L72318a;
case 0x72318c:c.instructions+=1;goto B72318c;
case 0x72318e:goto L72318e;
case 0x72318f:c.instructions+=2;goto B72318f;
case 0x723191:c.instructions+=1;goto B723191;
case 0x723196:goto L723196;
case 0x723198:c.instructions+=1;goto B723198;
case 0x72319d:goto L72319d;
case 0x7231a0:c.instructions+=15;goto B7231a0;
case 0x7231a2:c.instructions+=14;goto B7231a2;
case 0x7231a5:c.instructions+=13;goto B7231a5;
case 0x7231a8:c.instructions+=12;goto B7231a8;
case 0x7231ab:c.instructions+=11;goto B7231ab;
case 0x7231b1:c.instructions+=10;goto B7231b1;
case 0x7231b4:c.instructions+=9;goto B7231b4;
case 0x7231b7:c.instructions+=8;goto B7231b7;
case 0x7231ba:c.instructions+=7;goto B7231ba;
case 0x7231be:c.instructions+=6;goto B7231be;
case 0x7231c1:c.instructions+=5;goto B7231c1;
case 0x7231c4:c.instructions+=4;goto B7231c4;
case 0x7231ca:c.instructions+=3;goto B7231ca;
case 0x7231d1:c.instructions+=2;goto B7231d1;
case 0x7231d2:c.instructions+=1;goto B7231d2;
case 0x7231d4:goto L7231d4;
case 0x7231d5:c.instructions+=7;goto B7231d5;
case 0x7231d7:c.instructions+=6;goto B7231d7;
case 0x7231dd:c.instructions+=5;goto B7231dd;
case 0x7231de:c.instructions+=4;goto B7231de;
case 0x7231e0:c.instructions+=3;goto B7231e0;
case 0x7231e7:c.instructions+=2;goto B7231e7;
case 0x7231ea:c.instructions+=1;goto B7231ea;
case 0x7231ec:goto L7231ec;
case 0x7231ee:c.instructions+=2;goto B7231ee;
case 0x7231ef:c.instructions+=1;goto B7231ef;
case 0x7231f4:goto L7231f4;
case 0x7231f5:c.instructions+=3;goto B7231f5;
case 0x7231f6:c.instructions+=2;goto B7231f6;
case 0x7231f9:c.instructions+=1;goto B7231f9;
case 0x7231fe:goto L7231fe;
case 0x723201:c.instructions+=23;goto B723201;
case 0x723204:c.instructions+=22;goto B723204;
case 0x72320a:c.instructions+=21;goto B72320a;
case 0x72320b:c.instructions+=20;goto B72320b;
case 0x72320e:c.instructions+=19;goto B72320e;
case 0x723211:c.instructions+=18;goto B723211;
case 0x723214:c.instructions+=17;goto B723214;
case 0x723217:c.instructions+=16;goto B723217;
case 0x72321e:c.instructions+=15;goto B72321e;
case 0x723222:c.instructions+=14;goto B723222;
case 0x723229:c.instructions+=13;goto B723229;
case 0x72322b:c.instructions+=12;goto B72322b;
case 0x72322e:c.instructions+=11;goto B72322e;
case 0x723231:c.instructions+=10;goto B723231;
case 0x723234:c.instructions+=9;goto B723234;
case 0x723237:c.instructions+=8;goto B723237;
case 0x72323a:c.instructions+=7;goto B72323a;
case 0x72323d:c.instructions+=6;goto B72323d;
case 0x723241:c.instructions+=5;goto B723241;
case 0x723244:c.instructions+=4;goto B723244;
case 0x723248:c.instructions+=3;goto B723248;
case 0x72324c:c.instructions+=2;goto B72324c;
case 0x72324f:c.instructions+=1;goto B72324f;
case 0x723251:goto L723251;
case 0x723254:c.instructions+=4;goto B723254;
case 0x723257:c.instructions+=3;goto B723257;
case 0x72325a:c.instructions+=2;goto B72325a;
case 0x72325d:c.instructions+=1;goto B72325d;
case 0x72325f:goto L72325f;
case 0x723262:goto L723262;
case 0x723265:c.instructions+=14;goto B723265;
case 0x723268:c.instructions+=13;goto B723268;
case 0x72326c:c.instructions+=12;goto B72326c;
case 0x72326f:c.instructions+=11;goto B72326f;
case 0x723273:c.instructions+=10;goto B723273;
case 0x723276:c.instructions+=9;goto B723276;
case 0x723278:c.instructions+=8;goto B723278;
case 0x72327a:c.instructions+=7;goto B72327a;
case 0x72327d:c.instructions+=6;goto B72327d;
case 0x723280:c.instructions+=5;goto B723280;
case 0x723284:c.instructions+=4;goto B723284;
case 0x723285:c.instructions+=3;goto B723285;
case 0x723286:c.instructions+=2;goto B723286;
case 0x723289:c.instructions+=1;goto B723289;
case 0x72328b:goto L72328b;
case 0x723291:c.instructions+=4;goto B723291;
case 0x723292:c.instructions+=3;goto B723292;
case 0x723295:c.instructions+=2;goto B723295;
case 0x723296:c.instructions+=1;goto B723296;
case 0x72329b:goto L72329b;
case 0x72329d:c.instructions+=4;goto B72329d;
case 0x72329e:c.instructions+=3;goto B72329e;
case 0x72329f:c.instructions+=2;goto B72329f;
case 0x7232a2:c.instructions+=1;goto B7232a2;
case 0x7232a8:goto L7232a8;
case 0x7232ab:c.instructions+=5;goto B7232ab;
case 0x7232ac:c.instructions+=4;goto B7232ac;
case 0x7232af:c.instructions+=3;goto B7232af;
case 0x7232b0:c.instructions+=2;goto B7232b0;
case 0x7232b1:c.instructions+=1;goto B7232b1;
case 0x7232b6:goto L7232b6;
case 0x7232b9:c.instructions+=6;goto B7232b9;
case 0x7232bc:c.instructions+=5;goto B7232bc;
case 0x7232bf:c.instructions+=4;goto B7232bf;
case 0x7232c0:c.instructions+=3;goto B7232c0;
case 0x7232c2:c.instructions+=2;goto B7232c2;
case 0x7232c5:c.instructions+=1;goto B7232c5;
case 0x7232ca:goto L7232ca;
case 0x7232cd:c.instructions+=3;goto B7232cd;
case 0x7232cf:c.instructions+=2;goto B7232cf;
case 0x7232d2:c.instructions+=1;goto B7232d2;
case 0x7232d4:goto L7232d4;
case 0x7232da:c.instructions+=1;goto B7232da;
case 0x7232dc:goto L7232dc;
case 0x7232df:c.instructions+=5;goto B7232df;
case 0x7232e1:c.instructions+=4;goto B7232e1;
case 0x7232e5:c.instructions+=3;goto B7232e5;
case 0x7232e6:c.instructions+=2;goto B7232e6;
case 0x7232e7:c.instructions+=1;goto B7232e7;
case 0x7232ec:goto L7232ec;
case 0x7232ef:c.instructions+=18;goto B7232ef;
case 0x7232f2:c.instructions+=17;goto B7232f2;
case 0x7232f7:c.instructions+=16;goto B7232f7;
case 0x7232fa:c.instructions+=15;goto B7232fa;
case 0x7232fd:c.instructions+=14;goto B7232fd;
case 0x723300:c.instructions+=13;goto B723300;
case 0x723302:c.instructions+=12;goto B723302;
case 0x723306:c.instructions+=11;goto B723306;
case 0x72330a:c.instructions+=10;goto B72330a;
case 0x72330d:c.instructions+=9;goto B72330d;
case 0x723311:c.instructions+=8;goto B723311;
case 0x723314:c.instructions+=7;goto B723314;
case 0x723317:c.instructions+=6;goto B723317;
case 0x72331a:c.instructions+=5;goto B72331a;
case 0x72331b:c.instructions+=4;goto B72331b;
case 0x72331e:c.instructions+=3;goto B72331e;
case 0x723322:c.instructions+=2;goto B723322;
case 0x723323:c.instructions+=1;goto B723323;
case 0x723325:goto L723325;
case 0x723328:c.instructions+=3;goto B723328;
case 0x72332c:c.instructions+=2;goto B72332c;
case 0x723330:c.instructions+=1;goto B723330;
case 0x723332:goto L723332;
case 0x723333:c.instructions+=1;goto B723333;
case 0x723338:goto L723338;
case 0x72333b:c.instructions+=1;goto B72333b;
case 0x72333c:goto L72333c;
case 0x723341:c.instructions+=34;goto B723341;
case 0x723347:c.instructions+=33;goto B723347;
case 0x72334c:c.instructions+=32;goto B72334c;
case 0x72334f:c.instructions+=31;goto B72334f;
case 0x723352:c.instructions+=30;goto B723352;
case 0x723359:c.instructions+=29;goto B723359;
case 0x72335d:c.instructions+=28;goto B72335d;
case 0x723364:c.instructions+=27;goto B723364;
case 0x723367:c.instructions+=26;goto B723367;
case 0x72336a:c.instructions+=25;goto B72336a;
case 0x72336d:c.instructions+=24;goto B72336d;
case 0x723370:c.instructions+=23;goto B723370;
case 0x723374:c.instructions+=22;goto B723374;
case 0x723377:c.instructions+=21;goto B723377;
case 0x72337a:c.instructions+=20;goto B72337a;
case 0x72337d:c.instructions+=19;goto B72337d;
case 0x72337f:c.instructions+=18;goto B72337f;
case 0x723381:c.instructions+=17;goto B723381;
case 0x723386:c.instructions+=16;goto B723386;
case 0x723388:c.instructions+=15;goto B723388;
case 0x72338c:c.instructions+=14;goto B72338c;
case 0x723390:c.instructions+=13;goto B723390;
case 0x723393:c.instructions+=12;goto B723393;
case 0x723399:c.instructions+=11;goto B723399;
case 0x72339c:c.instructions+=10;goto B72339c;
case 0x7233a3:c.instructions+=9;goto B7233a3;
case 0x7233a6:c.instructions+=8;goto B7233a6;
case 0x7233a9:c.instructions+=7;goto B7233a9;
case 0x7233ac:c.instructions+=6;goto B7233ac;
case 0x7233ae:c.instructions+=5;goto B7233ae;
case 0x7233b1:c.instructions+=4;goto B7233b1;
case 0x7233b5:c.instructions+=3;goto B7233b5;
case 0x7233b7:c.instructions+=2;goto B7233b7;
case 0x7233b9:c.instructions+=1;goto B7233b9;
case 0x7233bf:goto L7233bf;
case 0x7233c2:c.instructions+=42;goto B7233c2;
case 0x7233c4:c.instructions+=41;goto B7233c4;
case 0x7233c9:c.instructions+=40;goto B7233c9;
case 0x7233cc:c.instructions+=39;goto B7233cc;
case 0x7233cf:c.instructions+=38;goto B7233cf;
case 0x7233d7:c.instructions+=37;goto B7233d7;
case 0x7233dc:c.instructions+=36;goto B7233dc;
case 0x7233e1:c.instructions+=35;goto B7233e1;
case 0x7233e5:c.instructions+=34;goto B7233e5;
case 0x7233e8:c.instructions+=33;goto B7233e8;
case 0x7233eb:c.instructions+=32;goto B7233eb;
case 0x7233f1:c.instructions+=31;goto B7233f1;
case 0x7233f5:c.instructions+=30;goto B7233f5;
case 0x7233f8:c.instructions+=29;goto B7233f8;
case 0x7233fb:c.instructions+=28;goto B7233fb;
case 0x7233fe:c.instructions+=27;goto B7233fe;
case 0x723401:c.instructions+=26;goto B723401;
case 0x723404:c.instructions+=25;goto B723404;
case 0x723407:c.instructions+=24;goto B723407;
case 0x72340a:c.instructions+=23;goto B72340a;
case 0x72340d:c.instructions+=22;goto B72340d;
case 0x723410:c.instructions+=21;goto B723410;
case 0x723412:c.instructions+=20;goto B723412;
case 0x723415:c.instructions+=19;goto B723415;
case 0x723418:c.instructions+=18;goto B723418;
case 0x72341b:c.instructions+=17;goto B72341b;
case 0x72341e:c.instructions+=16;goto B72341e;
case 0x723421:c.instructions+=15;goto B723421;
case 0x723424:c.instructions+=14;goto B723424;
case 0x723428:c.instructions+=13;goto B723428;
case 0x72342f:c.instructions+=12;goto B72342f;
case 0x723436:c.instructions+=11;goto B723436;
case 0x72343c:c.instructions+=10;goto B72343c;
case 0x72343f:c.instructions+=9;goto B72343f;
case 0x723442:c.instructions+=8;goto B723442;
case 0x723445:c.instructions+=7;goto B723445;
case 0x72344a:c.instructions+=6;goto B72344a;
case 0x72344d:c.instructions+=5;goto B72344d;
case 0x723450:c.instructions+=4;goto B723450;
case 0x723454:c.instructions+=3;goto B723454;
case 0x723455:c.instructions+=2;goto B723455;
case 0x723457:c.instructions+=1;goto B723457;
case 0x72345d:goto L72345d;
case 0x723460:goto L723460;
case 0x723464:c.instructions+=1;goto B723464;
case 0x723466:goto L723466;
case 0x72346a:c.instructions+=1;goto B72346a;
case 0x72346e:goto L72346e;
case 0x723472:c.instructions+=2;goto B723472;
case 0x723476:c.instructions+=1;goto B723476;
case 0x723478:goto L723478;
case 0x72347b:goto L72347b;
case 0x72347f:c.instructions+=11;goto B72347f;
case 0x723482:c.instructions+=10;goto B723482;
case 0x723485:c.instructions+=9;goto B723485;
case 0x723488:c.instructions+=8;goto B723488;
case 0x72348e:c.instructions+=7;goto B72348e;
case 0x723492:c.instructions+=6;goto B723492;
case 0x723495:c.instructions+=5;goto B723495;
case 0x723499:c.instructions+=4;goto B723499;
case 0x72349a:c.instructions+=3;goto B72349a;
case 0x72349b:c.instructions+=2;goto B72349b;
case 0x72349e:c.instructions+=1;goto B72349e;
case 0x7234a0:goto L7234a0;
case 0x7234a3:c.instructions+=2;goto B7234a3;
case 0x7234ab:c.instructions+=1;goto B7234ab;
case 0x7234b0:goto L7234b0;
case 0x7234b3:c.instructions+=11;goto B7234b3;
case 0x7234b6:c.instructions+=10;goto B7234b6;
case 0x7234ba:c.instructions+=9;goto B7234ba;
case 0x7234bb:c.instructions+=8;goto B7234bb;
case 0x7234bc:c.instructions+=7;goto B7234bc;
case 0x7234c0:c.instructions+=6;goto B7234c0;
case 0x7234c4:c.instructions+=5;goto B7234c4;
case 0x7234c5:c.instructions+=4;goto B7234c5;
case 0x7234c6:c.instructions+=3;goto B7234c6;
case 0x7234c9:c.instructions+=2;goto B7234c9;
case 0x7234cc:c.instructions+=1;goto B7234cc;
case 0x7234d1:goto L7234d1;
case 0x7234d4:c.instructions+=3;goto B7234d4;
case 0x7234d6:c.instructions+=2;goto B7234d6;
case 0x7234d9:c.instructions+=1;goto B7234d9;
case 0x7234db:goto L7234db;
case 0x7234de:c.instructions+=2;goto B7234de;
case 0x7234e0:c.instructions+=1;goto B7234e0;
case 0x7234e2:goto L7234e2;
case 0x7234e5:c.instructions+=2;goto B7234e5;
case 0x7234e8:c.instructions+=1;goto B7234e8;
case 0x7234eb:goto L7234eb;
case 0x7234f0:c.instructions+=3;goto B7234f0;
case 0x7234f4:c.instructions+=2;goto B7234f4;
case 0x7234f5:c.instructions+=1;goto B7234f5;
case 0x7234fa:goto L7234fa;
case 0x7234fb:c.instructions+=4;goto B7234fb;
case 0x7234fc:c.instructions+=3;goto B7234fc;
case 0x7234ff:c.instructions+=2;goto B7234ff;
case 0x723500:c.instructions+=1;goto B723500;
case 0x723502:goto L723502;
case 0x723505:c.instructions+=3;goto B723505;
case 0x723507:c.instructions+=2;goto B723507;
case 0x723509:c.instructions+=1;goto B723509;
case 0x72350e:goto L72350e;
case 0x723510:c.instructions+=2;goto B723510;
case 0x723511:c.instructions+=1;goto B723511;
case 0x723512:goto L723512;
case 0x723513:c.instructions+=2;goto B723513;
case 0x723514:c.instructions+=1;goto B723514;
case 0x723515:goto L723515;
case 0x723516:c.instructions+=5;goto B723516;
case 0x723518:c.instructions+=4;goto B723518;
case 0x72351b:c.instructions+=3;goto B72351b;
case 0x72351d:c.instructions+=2;goto B72351d;
case 0x723523:c.instructions+=1;goto B723523;
case 0x723525:goto L723525;
case 0x723527:c.instructions+=3;goto B723527;
case 0x723528:c.instructions+=2;goto B723528;
case 0x723529:c.instructions+=1;goto B723529;
case 0x72352a:goto L72352a;
case 0x72352d:c.instructions+=5;goto B72352d;
case 0x723534:c.instructions+=4;goto B723534;
case 0x723537:c.instructions+=3;goto B723537;
case 0x723538:c.instructions+=2;goto B723538;
case 0x723539:c.instructions+=1;goto B723539;
case 0x72353b:goto L72353b;
case 0x72353e:goto L72353e;
case 0x723542:c.instructions+=4;goto B723542;
case 0x723545:c.instructions+=3;goto B723545;
case 0x723546:c.instructions+=2;goto B723546;
case 0x723548:c.instructions+=1;goto B723548;
case 0x72354a:goto L72354a;
case 0x72354e:c.instructions+=5;goto B72354e;
case 0x72354f:c.instructions+=4;goto B72354f;
case 0x723550:c.instructions+=3;goto B723550;
case 0x723551:c.instructions+=2;goto B723551;
case 0x723553:c.instructions+=1;goto B723553;
case 0x723555:goto L723555;
case 0x723559:c.instructions+=21;goto B723559;
case 0x72355c:c.instructions+=20;goto B72355c;
case 0x723560:c.instructions+=19;goto B723560;
case 0x723563:c.instructions+=18;goto B723563;
case 0x723567:c.instructions+=17;goto B723567;
case 0x72356a:c.instructions+=16;goto B72356a;
case 0x72356d:c.instructions+=15;goto B72356d;
case 0x723572:c.instructions+=14;goto B723572;
case 0x723574:c.instructions+=13;goto B723574;
case 0x723577:c.instructions+=12;goto B723577;
case 0x72357a:c.instructions+=11;goto B72357a;
case 0x72357b:c.instructions+=10;goto B72357b;
case 0x72357e:c.instructions+=9;goto B72357e;
case 0x723581:c.instructions+=8;goto B723581;
case 0x723583:c.instructions+=7;goto B723583;
case 0x723586:c.instructions+=6;goto B723586;
case 0x723588:c.instructions+=5;goto B723588;
case 0x72358b:c.instructions+=4;goto B72358b;
case 0x72358e:c.instructions+=3;goto B72358e;
case 0x723590:c.instructions+=2;goto B723590;
case 0x723594:c.instructions+=1;goto B723594;
case 0x723596:goto L723596;
case 0x723599:c.instructions+=4;goto B723599;
case 0x72359c:c.instructions+=3;goto B72359c;
case 0x72359f:c.instructions+=2;goto B72359f;
case 0x7235a2:c.instructions+=1;goto B7235a2;
case 0x7235a4:goto L7235a4;
case 0x7235a6:c.instructions+=2;goto B7235a6;
case 0x7235a7:c.instructions+=1;goto B7235a7;
case 0x7235a9:goto L7235a9;
case 0x7235ac:goto L7235ac;
case 0x7235af:c.instructions+=15;goto B7235af;
case 0x7235b1:c.instructions+=14;goto B7235b1;
case 0x7235b5:c.instructions+=13;goto B7235b5;
case 0x7235b7:c.instructions+=12;goto B7235b7;
case 0x7235b9:c.instructions+=11;goto B7235b9;
case 0x7235bc:c.instructions+=10;goto B7235bc;
case 0x7235bf:c.instructions+=9;goto B7235bf;
case 0x7235c2:c.instructions+=8;goto B7235c2;
case 0x7235c3:c.instructions+=7;goto B7235c3;
case 0x7235c6:c.instructions+=6;goto B7235c6;
case 0x7235c9:c.instructions+=5;goto B7235c9;
case 0x7235cd:c.instructions+=4;goto B7235cd;
case 0x7235ce:c.instructions+=3;goto B7235ce;
case 0x7235cf:c.instructions+=2;goto B7235cf;
case 0x7235d2:c.instructions+=1;goto B7235d2;
case 0x7235d4:goto L7235d4;
case 0x7235d7:c.instructions+=14;goto B7235d7;
case 0x7235da:c.instructions+=13;goto B7235da;
case 0x7235dc:c.instructions+=12;goto B7235dc;
case 0x7235de:c.instructions+=11;goto B7235de;
case 0x7235e0:c.instructions+=10;goto B7235e0;
case 0x7235e3:c.instructions+=9;goto B7235e3;
case 0x7235e6:c.instructions+=8;goto B7235e6;
case 0x7235ea:c.instructions+=7;goto B7235ea;
case 0x7235ee:c.instructions+=6;goto B7235ee;
case 0x7235ef:c.instructions+=5;goto B7235ef;
case 0x7235f0:c.instructions+=4;goto B7235f0;
case 0x7235f4:c.instructions+=3;goto B7235f4;
case 0x7235f8:c.instructions+=2;goto B7235f8;
case 0x7235fc:c.instructions+=1;goto B7235fc;
case 0x7235fe:goto L7235fe;
case 0x723604:goto L723604;
case 0x723605:c.instructions+=3;goto B723605;
case 0x723606:c.instructions+=2;goto B723606;
case 0x723607:c.instructions+=1;goto B723607;
case 0x723608:goto L723608;
case 0x723609:c.instructions+=3;goto B723609;
case 0x72360b:c.instructions+=2;goto B72360b;
case 0x723612:c.instructions+=1;goto B723612;
case 0x723614:goto L723614;
case 0x723616:c.instructions+=3;goto B723616;
case 0x723617:c.instructions+=2;goto B723617;
case 0x723618:c.instructions+=1;goto B723618;
case 0x723619:goto L723619;
case 0x72361d:c.instructions+=4;goto B72361d;
case 0x723624:c.instructions+=3;goto B723624;
case 0x723628:c.instructions+=2;goto B723628;
case 0x72362a:c.instructions+=1;goto B72362a;
case 0x72362c:goto L72362c;
case 0x72362f:c.instructions+=1;goto B72362f;
case 0x723630:goto L723630;
case 0x723633:c.instructions+=2;goto B723633;
case 0x723635:c.instructions+=1;goto B723635;
case 0x723637:goto L723637;
case 0x72363a:goto L72363a;
case 0x72363b:c.instructions+=3;goto B72363b;
case 0x72363c:c.instructions+=2;goto B72363c;
case 0x72363d:c.instructions+=1;goto B72363d;
case 0x72363f:goto L72363f;
case 0x723640:goto L723640;
case 0x723644:c.instructions+=4;goto B723644;
case 0x723646:c.instructions+=3;goto B723646;
case 0x723647:c.instructions+=2;goto B723647;
case 0x723648:c.instructions+=1;goto B723648;
case 0x723649:goto L723649;
case 0x723650:c.instructions+=1;goto B723650;
case 0x723652:goto L723652;
case 0x723654:c.instructions+=2;goto B723654;
case 0x723655:c.instructions+=1;goto B723655;
case 0x723656:goto L723656;
case 0x72365a:c.instructions+=5;goto B72365a;
case 0x723661:c.instructions+=4;goto B723661;
case 0x723664:c.instructions+=3;goto B723664;
case 0x723667:c.instructions+=2;goto B723667;
case 0x723669:c.instructions+=1;goto B723669;
case 0x72366a:goto L72366a;
case 0x723671:c.instructions+=1;goto B723671;
case 0x723673:goto L723673;
case 0x723675:c.instructions+=2;goto B723675;
case 0x723676:c.instructions+=1;goto B723676;
case 0x723677:goto L723677;
case 0x723678:c.instructions+=1;goto B723678;
case 0x72367d:goto L72367d;
case 0x723681:c.instructions+=2;goto B723681;
case 0x723682:c.instructions+=1;goto B723682;
case 0x723687:goto L723687;
case 0x72368f:c.instructions+=2;goto B72368f;
case 0x723690:c.instructions+=1;goto B723690;
case 0x723695:goto L723695;
case 0x723697:c.instructions+=2;goto B723697;
case 0x723698:c.instructions+=1;goto B723698;
case 0x723699:goto L723699;
case 0x72369a:c.instructions+=15;goto B72369a;
case 0x72369c:c.instructions+=14;goto B72369c;
case 0x72369d:c.instructions+=13;goto B72369d;
case 0x72369e:c.instructions+=12;goto B72369e;
case 0x72369f:c.instructions+=11;goto B72369f;
case 0x7236a0:c.instructions+=10;goto B7236a0;
case 0x7236a3:c.instructions+=9;goto B7236a3;
case 0x7236aa:c.instructions+=8;goto B7236aa;
case 0x7236ab:c.instructions+=7;goto B7236ab;
case 0x7236ad:c.instructions+=6;goto B7236ad;
case 0x7236ae:c.instructions+=5;goto B7236ae;
case 0x7236b0:c.instructions+=4;goto B7236b0;
case 0x7236b3:c.instructions+=3;goto B7236b3;
case 0x7236b6:c.instructions+=2;goto B7236b6;
case 0x7236b9:c.instructions+=1;goto B7236b9;
case 0x7236bb:goto L7236bb;
case 0x7236bf:c.instructions+=1;goto B7236bf;
case 0x7236c2:goto L7236c2;
case 0x7236c4:c.instructions+=2;goto B7236c4;
case 0x7236c7:c.instructions+=1;goto B7236c7;
case 0x7236c9:goto L7236c9;
case 0x7236cd:goto L7236cd;
case 0x7236d0:c.instructions+=2;goto B7236d0;
case 0x7236d1:c.instructions+=1;goto B7236d1;
case 0x7236d3:goto L7236d3;
case 0x7236d5:c.instructions+=2;goto B7236d5;
case 0x7236d8:c.instructions+=1;goto B7236d8;
case 0x7236da:goto L7236da;
case 0x7236de:c.instructions+=4;goto B7236de;
case 0x7236e1:c.instructions+=3;goto B7236e1;
case 0x7236e4:c.instructions+=2;goto B7236e4;
case 0x7236e8:c.instructions+=1;goto B7236e8;
case 0x7236ea:goto L7236ea;
case 0x7236f0:c.instructions+=6;goto B7236f0;
case 0x7236f7:c.instructions+=5;goto B7236f7;
case 0x7236fa:c.instructions+=4;goto B7236fa;
case 0x7236fe:c.instructions+=3;goto B7236fe;
case 0x723701:c.instructions+=2;goto B723701;
case 0x723704:c.instructions+=1;goto B723704;
case 0x72370a:goto L72370a;
case 0x72370c:c.instructions+=7;goto B72370c;
case 0x723710:c.instructions+=6;goto B723710;
case 0x723711:c.instructions+=5;goto B723711;
case 0x723715:c.instructions+=4;goto B723715;
case 0x723718:c.instructions+=3;goto B723718;
case 0x72371c:c.instructions+=2;goto B72371c;
case 0x723720:c.instructions+=1;goto B723720;
case 0x723722:goto L723722;
case 0x723726:goto L723726;
case 0x723729:c.instructions+=4;goto B723729;
case 0x72372d:c.instructions+=3;goto B72372d;
case 0x723730:c.instructions+=2;goto B723730;
case 0x723733:c.instructions+=1;goto B723733;
case 0x723735:goto L723735;
case 0x723737:c.instructions+=1;goto B723737;
case 0x72373c:goto L72373c;
case 0x72373f:c.instructions+=20;goto B72373f;
case 0x723743:c.instructions+=19;goto B723743;
case 0x723746:c.instructions+=18;goto B723746;
case 0x723749:c.instructions+=17;goto B723749;
case 0x72374d:c.instructions+=16;goto B72374d;
case 0x723750:c.instructions+=15;goto B723750;
case 0x723752:c.instructions+=14;goto B723752;
case 0x723754:c.instructions+=13;goto B723754;
case 0x723756:c.instructions+=12;goto B723756;
case 0x723759:c.instructions+=11;goto B723759;
case 0x72375c:c.instructions+=10;goto B72375c;
case 0x72375f:c.instructions+=9;goto B72375f;
case 0x723761:c.instructions+=8;goto B723761;
case 0x723763:c.instructions+=7;goto B723763;
case 0x723766:c.instructions+=6;goto B723766;
case 0x723767:c.instructions+=5;goto B723767;
case 0x72376a:c.instructions+=4;goto B72376a;
case 0x72376f:c.instructions+=3;goto B72376f;
case 0x723773:c.instructions+=2;goto B723773;
case 0x723776:c.instructions+=1;goto B723776;
case 0x723778:goto L723778;
case 0x72377b:goto L72377b;
case 0x72377d:c.instructions+=2;goto B72377d;
case 0x723780:c.instructions+=1;goto B723780;
case 0x723782:goto L723782;
case 0x723786:goto L723786;
case 0x723789:c.instructions+=4;goto B723789;
case 0x72378c:c.instructions+=3;goto B72378c;
case 0x723790:c.instructions+=2;goto B723790;
case 0x723793:c.instructions+=1;goto B723793;
case 0x723795:goto L723795;
case 0x723799:c.instructions+=2;goto B723799;
case 0x72379c:c.instructions+=1;goto B72379c;
case 0x72379e:goto L72379e;
case 0x7237a2:c.instructions+=1;goto B7237a2;
case 0x7237a4:goto L7237a4;
case 0x7237a8:c.instructions+=10;goto B7237a8;
case 0x7237ab:c.instructions+=9;goto B7237ab;
case 0x7237ad:c.instructions+=8;goto B7237ad;
case 0x7237af:c.instructions+=7;goto B7237af;
case 0x7237b2:c.instructions+=6;goto B7237b2;
case 0x7237b5:c.instructions+=5;goto B7237b5;
case 0x7237b8:c.instructions+=4;goto B7237b8;
case 0x7237ba:c.instructions+=3;goto B7237ba;
case 0x7237bc:c.instructions+=2;goto B7237bc;
case 0x7237be:c.instructions+=1;goto B7237be;
case 0x7237c1:goto L7237c1;
case 0x7237c5:c.instructions+=2;goto B7237c5;
case 0x7237c8:c.instructions+=1;goto B7237c8;
case 0x7237ca:goto L7237ca;
case 0x7237cf:goto L7237cf;
case 0x7237d2:c.instructions+=7;goto B7237d2;
case 0x7237d4:c.instructions+=6;goto B7237d4;
case 0x7237d7:c.instructions+=5;goto B7237d7;
case 0x7237d8:c.instructions+=4;goto B7237d8;
case 0x7237db:c.instructions+=3;goto B7237db;
case 0x7237df:c.instructions+=2;goto B7237df;
case 0x7237e1:c.instructions+=1;goto B7237e1;
case 0x7237e3:goto L7237e3;
case 0x7237e6:c.instructions+=1;goto B7237e6;
case 0x7237e8:goto L7237e8;
case 0x7237ea:goto L7237ea;
case 0x7237eb:c.instructions+=4;goto B7237eb;
case 0x7237ec:c.instructions+=3;goto B7237ec;
case 0x7237ed:c.instructions+=2;goto B7237ed;
case 0x7237ee:c.instructions+=1;goto B7237ee;
case 0x7237ef:goto L7237ef;
case 0x7237f3:c.instructions+=4;goto B7237f3;
case 0x7237fa:c.instructions+=3;goto B7237fa;
case 0x7237fe:c.instructions+=2;goto B7237fe;
case 0x723802:c.instructions+=1;goto B723802;
case 0x723804:goto L723804;
case 0x723808:c.instructions+=3;goto B723808;
case 0x72380b:c.instructions+=2;goto B72380b;
case 0x72380f:c.instructions+=1;goto B72380f;
case 0x723811:goto L723811;
case 0x723816:c.instructions+=5;goto B723816;
case 0x72381d:c.instructions+=4;goto B72381d;
case 0x723821:c.instructions+=3;goto B723821;
case 0x723825:c.instructions+=2;goto B723825;
case 0x723828:c.instructions+=1;goto B723828;
case 0x72382e:goto L72382e;
case 0x72382f:goto L72382f;
case 0x723830:c.instructions+=3;goto B723830;
case 0x723832:c.instructions+=2;goto B723832;
case 0x723838:c.instructions+=1;goto B723838;
case 0x72383a:goto L72383a;
case 0x72383b:c.instructions+=1;goto B72383b;
case 0x723840:goto L723840;
case 0x723845:c.instructions+=5;goto B723845;
case 0x723849:c.instructions+=4;goto B723849;
case 0x723850:c.instructions+=3;goto B723850;
case 0x723853:c.instructions+=2;goto B723853;
case 0x723855:c.instructions+=1;goto B723855;
case 0x723857:goto L723857;
case 0x723858:c.instructions+=1;goto B723858;
case 0x72385b:goto L72385b;
case 0x72385e:c.instructions+=1;goto B72385e;
case 0x723860:goto L723860;
case 0x723863:goto L723863;
case 0x723864:c.instructions+=1;goto B723864;
case 0x723865:goto L723865;
case 0x723866:c.instructions+=3;goto B723866;
case 0x723869:c.instructions+=2;goto B723869;
case 0x72386f:c.instructions+=1;goto B72386f;
case 0x723871:goto L723871;
case 0x723872:goto L723872;
case 0x723879:c.instructions+=2;goto B723879;
case 0x72387a:c.instructions+=1;goto B72387a;
case 0x72387b:goto L72387b;
case 0x723882:c.instructions+=1;goto B723882;
case 0x723884:goto L723884;
case 0x723886:c.instructions+=2;goto B723886;
case 0x723887:c.instructions+=1;goto B723887;
case 0x723888:goto L723888;
case 0x72388c:c.instructions+=5;goto B72388c;
case 0x72388d:c.instructions+=4;goto B72388d;
case 0x72388e:c.instructions+=3;goto B72388e;
case 0x723895:c.instructions+=2;goto B723895;
case 0x723897:c.instructions+=1;goto B723897;
case 0x72389c:goto L72389c;
case 0x72389d:c.instructions+=1;goto B72389d;
case 0x7238a2:goto L7238a2;
case 0x7238a4:c.instructions+=3;goto B7238a4;
case 0x7238a7:c.instructions+=2;goto B7238a7;
case 0x7238ad:c.instructions+=1;goto B7238ad;
case 0x7238af:goto L7238af;
case 0x7238b0:c.instructions+=1;goto B7238b0;
case 0x7238b3:goto L7238b3;
case 0x7238b5:c.instructions+=2;goto B7238b5;
case 0x7238b7:c.instructions+=1;goto B7238b7;
case 0x7238b9:goto L7238b9;
case 0x7238ba:c.instructions+=1;goto B7238ba;
case 0x7238bf:goto L7238bf;
case 0x7238c0:goto L7238c0;
case 0x7238c4:c.instructions+=4;goto B7238c4;
case 0x7238c5:c.instructions+=3;goto B7238c5;
case 0x7238c8:c.instructions+=2;goto B7238c8;
case 0x7238ca:c.instructions+=1;goto B7238ca;
case 0x7238cc:goto L7238cc;
case 0x7238cd:goto L7238cd;
case 0x7238ce:c.instructions+=3;goto B7238ce;
case 0x7238d0:c.instructions+=2;goto B7238d0;
case 0x7238d1:c.instructions+=1;goto B7238d1;
case 0x7238d2:goto L7238d2;
case 0x7238d3:c.instructions+=6;goto B7238d3;
case 0x7238d5:c.instructions+=5;goto B7238d5;
case 0x7238d8:c.instructions+=4;goto B7238d8;
case 0x7238dc:c.instructions+=3;goto B7238dc;
case 0x7238e0:c.instructions+=2;goto B7238e0;
case 0x7238e7:c.instructions+=1;goto B7238e7;
case 0x7238e9:goto L7238e9;
case 0x7238eb:c.instructions+=3;goto B7238eb;
case 0x7238ec:c.instructions+=2;goto B7238ec;
case 0x7238ed:c.instructions+=1;goto B7238ed;
case 0x7238ee:goto L7238ee;
case 0x7238f3:c.instructions+=5;goto B7238f3;
case 0x7238f5:c.instructions+=4;goto B7238f5;
case 0x7238f6:c.instructions+=3;goto B7238f6;
case 0x7238f9:c.instructions+=2;goto B7238f9;
case 0x7238fc:c.instructions+=1;goto B7238fc;
case 0x7238fe:goto L7238fe;
case 0x723900:goto L723900;
case 0x723901:c.instructions+=2;goto B723901;
case 0x723902:c.instructions+=1;goto B723902;
case 0x723907:goto L723907;
case 0x72390a:c.instructions+=3;goto B72390a;
case 0x72390d:c.instructions+=2;goto B72390d;
case 0x72390f:c.instructions+=1;goto B72390f;
case 0x723911:goto L723911;
case 0x723913:c.instructions+=4;goto B723913;
case 0x723914:c.instructions+=3;goto B723914;
case 0x723917:c.instructions+=2;goto B723917;
case 0x723918:c.instructions+=1;goto B723918;
case 0x72391d:goto L72391d;
case 0x72391f:c.instructions+=4;goto B72391f;
case 0x723920:c.instructions+=3;goto B723920;
case 0x723921:c.instructions+=2;goto B723921;
case 0x723924:c.instructions+=1;goto B723924;
case 0x723926:goto L723926;
case 0x723928:c.instructions+=1;goto B723928;
case 0x72392a:goto L72392a;
case 0x72392d:c.instructions+=2;goto B72392d;
case 0x72392f:c.instructions+=1;goto B72392f;
case 0x723931:goto L723931;
case 0x723933:c.instructions+=4;goto B723933;
case 0x723934:c.instructions+=3;goto B723934;
case 0x723937:c.instructions+=2;goto B723937;
case 0x723938:c.instructions+=1;goto B723938;
case 0x72393d:goto L72393d;
case 0x72393f:c.instructions+=4;goto B72393f;
case 0x723940:c.instructions+=3;goto B723940;
case 0x723941:c.instructions+=2;goto B723941;
case 0x723944:c.instructions+=1;goto B723944;
case 0x723946:goto L723946;
case 0x723948:c.instructions+=1;goto B723948;
case 0x72394a:goto L72394a;
case 0x72394e:c.instructions+=2;goto B72394e;
case 0x723951:c.instructions+=1;goto B723951;
case 0x723953:goto L723953;
case 0x723956:c.instructions+=1;goto B723956;
case 0x72395b:goto L72395b;
case 0x72395c:c.instructions+=2;goto B72395c;
case 0x72395e:c.instructions+=1;goto B72395e;
case 0x723960:goto L723960;
case 0x723963:goto L723963;
case 0x723967:c.instructions+=1;goto B723967;
case 0x723969:goto L723969;
case 0x72396c:c.instructions+=1;goto B72396c;
case 0x723971:goto L723971;
case 0x723972:c.instructions+=1;goto B723972;
case 0x723974:goto L723974;
case 0x723977:goto L723977;
case 0x72397a:c.instructions+=4;goto B72397a;
case 0x72397c:c.instructions+=3;goto B72397c;
case 0x72397d:c.instructions+=2;goto B72397d;
case 0x72397e:c.instructions+=1;goto B72397e;
case 0x723981:goto L723981;
case 0x723983:c.instructions+=3;goto B723983;
case 0x723986:c.instructions+=2;goto B723986;
case 0x723988:c.instructions+=1;goto B723988;
case 0x72398a:goto L72398a;
case 0x72398c:c.instructions+=1;goto B72398c;
case 0x72398d:goto L72398d;
case 0x723991:c.instructions+=1;goto B723991;
case 0x723993:goto L723993;
case 0x723996:c.instructions+=1;goto B723996;
case 0x72399b:goto L72399b;
case 0x72399c:goto L72399c;
case 0x7239a0:c.instructions+=1;goto B7239a0;
case 0x7239a2:goto L7239a2;
case 0x7239a5:c.instructions+=1;goto B7239a5;
case 0x7239aa:goto L7239aa;
case 0x7239ab:goto L7239ab;
case 0x7239ad:c.instructions+=1;goto B7239ad;
case 0x7239af:goto L7239af;
case 0x7239b1:c.instructions+=1;goto B7239b1;
case 0x7239b3:goto L7239b3;
case 0x7239b6:c.instructions+=3;goto B7239b6;
case 0x7239b7:c.instructions+=2;goto B7239b7;
case 0x7239b8:c.instructions+=1;goto B7239b8;
case 0x7239bd:goto L7239bd;
case 0x7239c0:c.instructions+=3;goto B7239c0;
case 0x7239c4:c.instructions+=2;goto B7239c4;
case 0x7239c7:c.instructions+=1;goto B7239c7;
case 0x7239c9:goto L7239c9;
case 0x7239cc:c.instructions+=4;goto B7239cc;
case 0x7239cf:c.instructions+=3;goto B7239cf;
case 0x7239d1:c.instructions+=2;goto B7239d1;
case 0x7239d2:c.instructions+=1;goto B7239d2;
case 0x7239d7:goto L7239d7;
case 0x7239d8:c.instructions+=1;goto B7239d8;
case 0x7239d9:goto L7239d9;
case 0x7239dd:c.instructions+=1;goto B7239dd;
case 0x7239df:goto L7239df;
case 0x7239e1:c.instructions+=1;goto B7239e1;
case 0x7239e3:goto L7239e3;
case 0x7239e7:c.instructions+=1;goto B7239e7;
case 0x7239e9:goto L7239e9;
case 0x7239ec:c.instructions+=4;goto B7239ec;
case 0x7239ef:c.instructions+=3;goto B7239ef;
case 0x7239f1:c.instructions+=2;goto B7239f1;
case 0x7239f2:c.instructions+=1;goto B7239f2;
case 0x7239f7:goto L7239f7;
case 0x7239f8:c.instructions+=1;goto B7239f8;
case 0x7239f9:goto L7239f9;
case 0x7239fc:c.instructions+=7;goto B7239fc;
case 0x7239ff:c.instructions+=6;goto B7239ff;
case 0x723a02:c.instructions+=5;goto B723a02;
case 0x723a05:c.instructions+=4;goto B723a05;
case 0x723a07:c.instructions+=3;goto B723a07;
case 0x723a08:c.instructions+=2;goto B723a08;
case 0x723a09:c.instructions+=1;goto B723a09;
case 0x723a0e:goto L723a0e;
case 0x723a11:c.instructions+=2;goto B723a11;
case 0x723a14:c.instructions+=1;goto B723a14;
case 0x723a17:goto L723a17;
case 0x723a18:c.instructions+=4;goto B723a18;
case 0x723a19:c.instructions+=3;goto B723a19;
case 0x723a1a:c.instructions+=2;goto B723a1a;
case 0x723a1b:c.instructions+=1;goto B723a1b;
case 0x723a1c:goto L723a1c;
case 0x723a1d:c.instructions+=5;goto B723a1d;
case 0x723a1f:c.instructions+=4;goto B723a1f;
case 0x723a20:c.instructions+=3;goto B723a20;
case 0x723a21:c.instructions+=2;goto B723a21;
case 0x723a28:c.instructions+=1;goto B723a28;
case 0x723a2a:goto L723a2a;
case 0x723a2c:c.instructions+=1;goto B723a2c;
case 0x723a2e:goto L723a2e;
case 0x723a31:c.instructions+=1;goto B723a31;
case 0x723a36:goto L723a36;
case 0x723a38:c.instructions+=2;goto B723a38;
case 0x723a39:c.instructions+=1;goto B723a39;
case 0x723a3b:goto L723a3b;
case 0x723a3d:goto L723a3d;
case 0x723a3e:c.instructions+=2;goto B723a3e;
case 0x723a3f:c.instructions+=1;goto B723a3f;
case 0x723a40:goto L723a40;
case 0x723a46:c.instructions+=10;goto B723a46;
case 0x723a49:c.instructions+=9;goto B723a49;
case 0x723a4c:c.instructions+=8;goto B723a4c;
case 0x723a50:c.instructions+=7;goto B723a50;
case 0x723a56:c.instructions+=6;goto B723a56;
case 0x723a59:c.instructions+=5;goto B723a59;
case 0x723a5c:c.instructions+=4;goto B723a5c;
case 0x723a5f:c.instructions+=3;goto B723a5f;
case 0x723a62:c.instructions+=2;goto B723a62;
case 0x723a63:c.instructions+=1;goto B723a63;
case 0x723a64:goto L723a64;
case 0x723a65:c.instructions+=8;goto B723a65;
case 0x723a67:c.instructions+=7;goto B723a67;
case 0x723a68:c.instructions+=6;goto B723a68;
case 0x723a69:c.instructions+=5;goto B723a69;
case 0x723a70:c.instructions+=4;goto B723a70;
case 0x723a71:c.instructions+=3;goto B723a71;
case 0x723a73:c.instructions+=2;goto B723a73;
case 0x723a74:c.instructions+=1;goto B723a74;
case 0x723a76:goto L723a76;
case 0x723a78:c.instructions+=2;goto B723a78;
case 0x723a79:c.instructions+=1;goto B723a79;
case 0x723a7e:goto L723a7e;
case 0x723a81:c.instructions+=1;goto B723a81;
case 0x723a86:goto L723a86;
case 0x723a88:c.instructions+=3;goto B723a88;
case 0x723a89:c.instructions+=2;goto B723a89;
case 0x723a8c:c.instructions+=1;goto B723a8c;
case 0x723a92:goto L723a92;
case 0x723a96:c.instructions+=4;goto B723a96;
case 0x723a99:c.instructions+=3;goto B723a99;
case 0x723a9a:c.instructions+=2;goto B723a9a;
case 0x723a9b:c.instructions+=1;goto B723a9b;
case 0x723aa0:goto L723aa0;
case 0x723aa2:c.instructions+=3;goto B723aa2;
case 0x723aa3:c.instructions+=2;goto B723aa3;
case 0x723aa4:c.instructions+=1;goto B723aa4;
case 0x723aa6:goto L723aa6;
case 0x723aa7:c.instructions+=1;goto B723aa7;
case 0x723aa8:goto L723aa8;
case 0x723aab:c.instructions+=5;goto B723aab;
case 0x723aae:c.instructions+=4;goto B723aae;
case 0x723ab1:c.instructions+=3;goto B723ab1;
case 0x723ab7:c.instructions+=2;goto B723ab7;
case 0x723abb:c.instructions+=1;goto B723abb;
case 0x723abd:goto L723abd;
case 0x723abe:c.instructions+=1;goto B723abe;
case 0x723ac3:goto L723ac3;
case 0x723ac5:c.instructions+=3;goto B723ac5;
case 0x723ac7:c.instructions+=2;goto B723ac7;
case 0x723ac8:c.instructions+=1;goto B723ac8;
case 0x723aca:goto L723aca;
case 0x723ad1:c.instructions+=2;goto B723ad1;
case 0x723ad5:c.instructions+=1;goto B723ad5;
case 0x723ad7:goto L723ad7;
case 0x723ada:c.instructions+=14;goto B723ada;
case 0x723ade:c.instructions+=13;goto B723ade;
case 0x723ae0:c.instructions+=12;goto B723ae0;
case 0x723ae3:c.instructions+=11;goto B723ae3;
case 0x723ae4:c.instructions+=10;goto B723ae4;
case 0x723ae6:c.instructions+=9;goto B723ae6;
case 0x723ae9:c.instructions+=8;goto B723ae9;
case 0x723aec:c.instructions+=7;goto B723aec;
case 0x723aed:c.instructions+=6;goto B723aed;
case 0x723aef:c.instructions+=5;goto B723aef;
case 0x723af3:c.instructions+=4;goto B723af3;
case 0x723af6:c.instructions+=3;goto B723af6;
case 0x723af7:c.instructions+=2;goto B723af7;
case 0x723af9:c.instructions+=1;goto B723af9;
case 0x723afb:goto L723afb;
case 0x723b00:goto L723b00;
case 0x723b02:c.instructions+=1;goto B723b02;
case 0x723b04:goto L723b04;
case 0x723b06:goto L723b06;
case 0x723b09:c.instructions+=3;goto B723b09;
case 0x723b0a:c.instructions+=2;goto B723b0a;
case 0x723b0d:c.instructions+=1;goto B723b0d;
case 0x723b12:goto L723b12;
case 0x723b14:c.instructions+=3;goto B723b14;
case 0x723b15:c.instructions+=2;goto B723b15;
case 0x723b16:c.instructions+=1;goto B723b16;
case 0x723b18:goto L723b18;
case 0x723b19:c.instructions+=1;goto B723b19;
case 0x723b1a:goto L723b1a;
case 0x723b1c:goto L723b1c;
case 0x723b1d:c.instructions+=2;goto B723b1d;
case 0x723b1e:c.instructions+=1;goto B723b1e;
case 0x723b1f:goto L723b1f;
case 0x723b20:c.instructions+=3;goto B723b20;
case 0x723b22:c.instructions+=2;goto B723b22;
case 0x723b29:c.instructions+=1;goto B723b29;
case 0x723b2b:goto L723b2b;
case 0x723b2d:c.instructions+=3;goto B723b2d;
case 0x723b2e:c.instructions+=2;goto B723b2e;
case 0x723b2f:c.instructions+=1;goto B723b2f;
case 0x723b30:goto L723b30;
case 0x723b31:c.instructions+=3;goto B723b31;
case 0x723b34:c.instructions+=2;goto B723b34;
case 0x723b35:c.instructions+=1;goto B723b35;
case 0x723b3a:goto L723b3a;
case 0x723b3c:c.instructions+=2;goto B723b3c;
case 0x723b3d:c.instructions+=1;goto B723b3d;
case 0x723b3f:goto L723b3f;
case 0x723b41:c.instructions+=2;goto B723b41;
case 0x723b42:c.instructions+=1;goto B723b42;
case 0x723b44:goto L723b44;
case 0x723b49:c.instructions+=5;goto B723b49;
case 0x723b4a:c.instructions+=4;goto B723b4a;
case 0x723b4d:c.instructions+=3;goto B723b4d;
case 0x723b50:c.instructions+=2;goto B723b50;
case 0x723b53:c.instructions+=1;goto B723b53;
case 0x723b58:goto L723b58;
case 0x723b5a:c.instructions+=4;goto B723b5a;
case 0x723b5c:c.instructions+=3;goto B723b5c;
case 0x723b5d:c.instructions+=2;goto B723b5d;
case 0x723b5e:c.instructions+=1;goto B723b5e;
case 0x723b60:goto L723b60;
case 0x723b62:c.instructions+=2;goto B723b62;
case 0x723b63:c.instructions+=1;goto B723b63;
case 0x723b65:goto L723b65;
case 0x723b66:c.instructions+=1;goto B723b66;
case 0x723b6b:goto L723b6b;
case 0x723b6e:c.instructions+=8;goto B723b6e;
case 0x723b73:c.instructions+=7;goto B723b73;
case 0x723b75:c.instructions+=6;goto B723b75;
case 0x723b78:c.instructions+=5;goto B723b78;
case 0x723b7b:c.instructions+=4;goto B723b7b;
case 0x723b7c:c.instructions+=3;goto B723b7c;
case 0x723b7d:c.instructions+=2;goto B723b7d;
case 0x723b80:c.instructions+=1;goto B723b80;
case 0x723b85:goto L723b85;
case 0x723b87:c.instructions+=3;goto B723b87;
case 0x723b8a:c.instructions+=2;goto B723b8a;
case 0x723b8d:c.instructions+=1;goto B723b8d;
case 0x723b8f:goto L723b8f;
case 0x723b92:c.instructions+=1;goto B723b92;
case 0x723b95:goto L723b95;
case 0x723b97:c.instructions+=2;goto B723b97;
case 0x723b99:c.instructions+=1;goto B723b99;
case 0x723b9b:goto L723b9b;
case 0x723b9c:c.instructions+=1;goto B723b9c;
case 0x723ba1:goto L723ba1;
case 0x723ba4:c.instructions+=2;goto B723ba4;
case 0x723ba8:c.instructions+=1;goto B723ba8;
case 0x723ba9:goto L723ba9;
case 0x723bad:c.instructions+=4;goto B723bad;
case 0x723bae:c.instructions+=3;goto B723bae;
case 0x723bb1:c.instructions+=2;goto B723bb1;
case 0x723bb3:c.instructions+=1;goto B723bb3;
case 0x723bb5:goto L723bb5;
case 0x723bba:goto L723bba;
case 0x723bbc:c.instructions+=1;goto B723bbc;
case 0x723bbd:goto L723bbd;
case 0x723bbe:goto L723bbe;
case 0x723bbf:c.instructions+=2;goto B723bbf;
case 0x723bc0:c.instructions+=1;goto B723bc0;
case 0x723bc1:goto L723bc1;
case 0x723bc2:c.instructions+=5;goto B723bc2;
case 0x723bc4:c.instructions+=4;goto B723bc4;
case 0x723bc5:c.instructions+=3;goto B723bc5;
case 0x723bc6:c.instructions+=2;goto B723bc6;
case 0x723bcd:c.instructions+=1;goto B723bcd;
case 0x723bcf:goto L723bcf;
case 0x723bd1:c.instructions+=3;goto B723bd1;
case 0x723bd2:c.instructions+=2;goto B723bd2;
case 0x723bd3:c.instructions+=1;goto B723bd3;
case 0x723bd4:goto L723bd4;
case 0x723bd5:c.instructions+=2;goto B723bd5;
case 0x723bd8:c.instructions+=1;goto B723bd8;
case 0x723bdd:goto L723bdd;
case 0x723bdf:c.instructions+=3;goto B723bdf;
case 0x723be1:c.instructions+=2;goto B723be1;
case 0x723be2:c.instructions+=1;goto B723be2;
case 0x723be4:goto L723be4;
case 0x723be8:c.instructions+=4;goto B723be8;
case 0x723beb:c.instructions+=3;goto B723beb;
case 0x723bec:c.instructions+=2;goto B723bec;
case 0x723bed:c.instructions+=1;goto B723bed;
case 0x723bf2:goto L723bf2;
case 0x723bf4:c.instructions+=3;goto B723bf4;
case 0x723bf5:c.instructions+=2;goto B723bf5;
case 0x723bf6:c.instructions+=1;goto B723bf6;
case 0x723bf8:goto L723bf8;
case 0x723bfb:c.instructions+=4;goto B723bfb;
case 0x723bfc:c.instructions+=3;goto B723bfc;
case 0x723bff:c.instructions+=2;goto B723bff;
case 0x723c05:c.instructions+=1;goto B723c05;
case 0x723c08:goto L723c08;
case 0x723c0b:c.instructions+=9;goto B723c0b;
case 0x723c0e:c.instructions+=8;goto B723c0e;
case 0x723c14:c.instructions+=7;goto B723c14;
case 0x723c17:c.instructions+=6;goto B723c17;
case 0x723c1a:c.instructions+=5;goto B723c1a;
case 0x723c1e:c.instructions+=4;goto B723c1e;
case 0x723c21:c.instructions+=3;goto B723c21;
case 0x723c22:c.instructions+=2;goto B723c22;
case 0x723c25:c.instructions+=1;goto B723c25;
case 0x723c2a:goto L723c2a;
case 0x723c2d:c.instructions+=3;goto B723c2d;
case 0x723c2e:c.instructions+=2;goto B723c2e;
case 0x723c2f:c.instructions+=1;goto B723c2f;
case 0x723c34:goto L723c34;
case 0x723c37:c.instructions+=2;goto B723c37;
case 0x723c39:c.instructions+=1;goto B723c39;
case 0x723c3b:goto L723c3b;
case 0x723c3c:goto L723c3c;
case 0x723c3e:c.instructions+=3;goto B723c3e;
case 0x723c3f:c.instructions+=2;goto B723c3f;
case 0x723c40:c.instructions+=1;goto B723c40;
case 0x723c41:goto L723c41;
case 0x723c42:c.instructions+=4;goto B723c42;
case 0x723c44:c.instructions+=3;goto B723c44;
case 0x723c47:c.instructions+=2;goto B723c47;
case 0x723c4e:c.instructions+=1;goto B723c4e;
case 0x723c50:goto L723c50;
case 0x723c52:c.instructions+=3;goto B723c52;
case 0x723c53:c.instructions+=2;goto B723c53;
case 0x723c54:c.instructions+=1;goto B723c54;
case 0x723c55:goto L723c55;
case 0x723c58:c.instructions+=1;goto B723c58;
case 0x723c5d:goto L723c5d;
case 0x723c5f:c.instructions+=3;goto B723c5f;
case 0x723c60:c.instructions+=2;goto B723c60;
case 0x723c63:c.instructions+=1;goto B723c63;
case 0x723c65:goto L723c65;
case 0x723c69:c.instructions+=4;goto B723c69;
case 0x723c6c:c.instructions+=3;goto B723c6c;
case 0x723c6d:c.instructions+=2;goto B723c6d;
case 0x723c70:c.instructions+=1;goto B723c70;
case 0x723c75:goto L723c75;
case 0x723c77:c.instructions+=3;goto B723c77;
case 0x723c78:c.instructions+=2;goto B723c78;
case 0x723c79:c.instructions+=1;goto B723c79;
case 0x723c7b:goto L723c7b;
case 0x723c7c:c.instructions+=2;goto B723c7c;
case 0x723c7d:c.instructions+=1;goto B723c7d;
case 0x723c7e:goto L723c7e;
case 0x723c81:c.instructions+=6;goto B723c81;
case 0x723c85:c.instructions+=5;goto B723c85;
case 0x723c88:c.instructions+=4;goto B723c88;
case 0x723c8b:c.instructions+=3;goto B723c8b;
case 0x723c91:c.instructions+=2;goto B723c91;
case 0x723c95:c.instructions+=1;goto B723c95;
case 0x723c97:goto L723c97;
case 0x723c9a:goto L723c9a;
case 0x723c9d:c.instructions+=7;goto B723c9d;
case 0x723ca0:c.instructions+=6;goto B723ca0;
case 0x723ca6:c.instructions+=5;goto B723ca6;
case 0x723ca9:c.instructions+=4;goto B723ca9;
case 0x723cac:c.instructions+=3;goto B723cac;
case 0x723cad:c.instructions+=2;goto B723cad;
case 0x723cb1:c.instructions+=1;goto B723cb1;
case 0x723cb6:goto L723cb6;
case 0x723cb9:c.instructions+=6;goto B723cb9;
case 0x723cbd:c.instructions+=5;goto B723cbd;
case 0x723cbe:c.instructions+=4;goto B723cbe;
case 0x723cbf:c.instructions+=3;goto B723cbf;
case 0x723cc2:c.instructions+=2;goto B723cc2;
case 0x723cc3:c.instructions+=1;goto B723cc3;
case 0x723cc5:goto L723cc5;
case 0x723cc8:c.instructions+=3;goto B723cc8;
case 0x723cc9:c.instructions+=2;goto B723cc9;
case 0x723ccc:c.instructions+=1;goto B723ccc;
case 0x723cd1:goto L723cd1;
case 0x723cd3:c.instructions+=3;goto B723cd3;
case 0x723cd4:c.instructions+=2;goto B723cd4;
case 0x723cd5:c.instructions+=1;goto B723cd5;
case 0x723cd7:goto L723cd7;
case 0x723cd8:c.instructions+=2;goto B723cd8;
case 0x723cd9:c.instructions+=1;goto B723cd9;
case 0x723cda:goto L723cda;
case 0x723cdd:c.instructions+=2;goto B723cdd;
case 0x723cde:c.instructions+=1;goto B723cde;
case 0x723cdf:goto L723cdf;
case 0x723ce0:c.instructions+=4;goto B723ce0;
case 0x723ce2:c.instructions+=3;goto B723ce2;
case 0x723ce5:c.instructions+=2;goto B723ce5;
case 0x723cec:c.instructions+=1;goto B723cec;
case 0x723cee:goto L723cee;
case 0x723cf0:c.instructions+=3;goto B723cf0;
case 0x723cf1:c.instructions+=2;goto B723cf1;
case 0x723cf2:c.instructions+=1;goto B723cf2;
case 0x723cf3:goto L723cf3;
case 0x723cf6:c.instructions+=1;goto B723cf6;
case 0x723cfb:goto L723cfb;
case 0x723cfd:c.instructions+=3;goto B723cfd;
case 0x723cfe:c.instructions+=2;goto B723cfe;
case 0x723d01:c.instructions+=1;goto B723d01;
case 0x723d07:goto L723d07;
case 0x723d0b:c.instructions+=4;goto B723d0b;
case 0x723d0e:c.instructions+=3;goto B723d0e;
case 0x723d14:c.instructions+=2;goto B723d14;
case 0x723d17:c.instructions+=1;goto B723d17;
case 0x723d19:goto L723d19;
case 0x723d20:goto L723d20;
case 0x723d24:c.instructions+=4;goto B723d24;
case 0x723d27:c.instructions+=3;goto B723d27;
case 0x723d28:c.instructions+=2;goto B723d28;
case 0x723d2b:c.instructions+=1;goto B723d2b;
case 0x723d30:goto L723d30;
case 0x723d32:c.instructions+=3;goto B723d32;
case 0x723d33:c.instructions+=2;goto B723d33;
case 0x723d34:c.instructions+=1;goto B723d34;
case 0x723d36:goto L723d36;
case 0x723d37:c.instructions+=1;goto B723d37;
case 0x723d38:goto L723d38;
case 0x723d3b:c.instructions+=6;goto B723d3b;
case 0x723d3e:c.instructions+=5;goto B723d3e;
case 0x723d41:c.instructions+=4;goto B723d41;
case 0x723d47:c.instructions+=3;goto B723d47;
case 0x723d49:c.instructions+=2;goto B723d49;
case 0x723d4d:c.instructions+=1;goto B723d4d;
case 0x723d4f:goto L723d4f;
case 0x723d52:c.instructions+=1;goto B723d52;
case 0x723d55:goto L723d55;
case 0x723d58:c.instructions+=15;goto B723d58;
case 0x723d5b:c.instructions+=14;goto B723d5b;
case 0x723d5e:c.instructions+=13;goto B723d5e;
case 0x723d61:c.instructions+=12;goto B723d61;
case 0x723d67:c.instructions+=11;goto B723d67;
case 0x723d6a:c.instructions+=10;goto B723d6a;
case 0x723d6d:c.instructions+=9;goto B723d6d;
case 0x723d6e:c.instructions+=8;goto B723d6e;
case 0x723d71:c.instructions+=7;goto B723d71;
case 0x723d72:c.instructions+=6;goto B723d72;
case 0x723d73:c.instructions+=5;goto B723d73;
case 0x723d75:c.instructions+=4;goto B723d75;
case 0x723d78:c.instructions+=3;goto B723d78;
case 0x723d7c:c.instructions+=2;goto B723d7c;
case 0x723d7e:c.instructions+=1;goto B723d7e;
case 0x723d80:goto L723d80;
case 0x723d82:goto L723d82;
case 0x723d85:c.instructions+=3;goto B723d85;
case 0x723d86:c.instructions+=2;goto B723d86;
case 0x723d89:c.instructions+=1;goto B723d89;
case 0x723d8e:goto L723d8e;
case 0x723d90:c.instructions+=3;goto B723d90;
case 0x723d91:c.instructions+=2;goto B723d91;
case 0x723d92:c.instructions+=1;goto B723d92;
case 0x723d94:goto L723d94;
case 0x723d95:c.instructions+=1;goto B723d95;
case 0x723d96:goto L723d96;
case 0x723d99:c.instructions+=2;goto B723d99;
case 0x723d9a:c.instructions+=1;goto B723d9a;
case 0x723d9b:goto L723d9b;
case 0x723d9c:c.instructions+=4;goto B723d9c;
case 0x723d9e:c.instructions+=3;goto B723d9e;
case 0x723d9f:c.instructions+=2;goto B723d9f;
case 0x723da6:c.instructions+=1;goto B723da6;
case 0x723da8:goto L723da8;
case 0x723daa:c.instructions+=3;goto B723daa;
case 0x723dab:c.instructions+=2;goto B723dab;
case 0x723dac:c.instructions+=1;goto B723dac;
case 0x723dad:goto L723dad;
case 0x723dae:c.instructions+=3;goto B723dae;
case 0x723daf:c.instructions+=2;goto B723daf;
case 0x723db2:c.instructions+=1;goto B723db2;
case 0x723db7:goto L723db7;
case 0x723db9:c.instructions+=3;goto B723db9;
case 0x723dbb:c.instructions+=2;goto B723dbb;
case 0x723dbc:c.instructions+=1;goto B723dbc;
case 0x723dbe:goto L723dbe;
case 0x723dc2:c.instructions+=4;goto B723dc2;
case 0x723dc5:c.instructions+=3;goto B723dc5;
case 0x723dc6:c.instructions+=2;goto B723dc6;
case 0x723dc7:c.instructions+=1;goto B723dc7;
case 0x723dcc:goto L723dcc;
case 0x723dce:c.instructions+=3;goto B723dce;
case 0x723dcf:c.instructions+=2;goto B723dcf;
case 0x723dd0:c.instructions+=1;goto B723dd0;
case 0x723dd2:goto L723dd2;
case 0x723dd5:goto L723dd5;
case 0x723dd8:c.instructions+=7;goto B723dd8;
case 0x723ddb:c.instructions+=6;goto B723ddb;
case 0x723dde:c.instructions+=5;goto B723dde;
case 0x723de4:c.instructions+=4;goto B723de4;
case 0x723de9:c.instructions+=3;goto B723de9;
case 0x723dec:c.instructions+=2;goto B723dec;
case 0x723dee:c.instructions+=1;goto B723dee;
case 0x723df0:goto L723df0;
case 0x723df3:c.instructions+=2;goto B723df3;
case 0x723df6:c.instructions+=1;goto B723df6;
case 0x723dfb:goto L723dfb;
case 0x723dfe:c.instructions+=1;goto B723dfe;
case 0x723e03:goto L723e03;
case 0x723e06:c.instructions+=3;goto B723e06;
case 0x723e07:c.instructions+=2;goto B723e07;
case 0x723e08:c.instructions+=1;goto B723e08;
case 0x723e0d:goto L723e0d;
case 0x723e10:c.instructions+=2;goto B723e10;
case 0x723e12:c.instructions+=1;goto B723e12;
case 0x723e14:goto L723e14;
case 0x723e16:goto L723e16;
case 0x723e17:c.instructions+=3;goto B723e17;
case 0x723e18:c.instructions+=2;goto B723e18;
case 0x723e19:c.instructions+=1;goto B723e19;
case 0x723e1a:goto L723e1a;
case 0x723e1c:c.instructions+=1;goto B723e1c;
case 0x723e1e:goto L723e1e;
case 0x723e1f:c.instructions+=4;goto B723e1f;
case 0x723e21:c.instructions+=3;goto B723e21;
case 0x723e22:c.instructions+=2;goto B723e22;
case 0x723e29:c.instructions+=1;goto B723e29;
case 0x723e2b:goto L723e2b;
case 0x723e2d:c.instructions+=3;goto B723e2d;
case 0x723e2e:c.instructions+=2;goto B723e2e;
case 0x723e2f:c.instructions+=1;goto B723e2f;
case 0x723e30:goto L723e30;
case 0x723e31:c.instructions+=2;goto B723e31;
case 0x723e34:c.instructions+=1;goto B723e34;
case 0x723e39:goto L723e39;
case 0x723e3b:c.instructions+=3;goto B723e3b;
case 0x723e3d:c.instructions+=2;goto B723e3d;
case 0x723e3e:c.instructions+=1;goto B723e3e;
case 0x723e40:goto L723e40;
case 0x723e44:c.instructions+=4;goto B723e44;
case 0x723e47:c.instructions+=3;goto B723e47;
case 0x723e48:c.instructions+=2;goto B723e48;
case 0x723e49:c.instructions+=1;goto B723e49;
case 0x723e4e:goto L723e4e;
case 0x723e4f:c.instructions+=2;goto B723e4f;
case 0x723e50:c.instructions+=1;goto B723e50;
case 0x723e52:goto L723e52;
case 0x723e55:c.instructions+=1;goto B723e55;
case 0x723e5a:goto L723e5a;
case 0x723e5d:c.instructions+=3;goto B723e5d;
case 0x723e5e:c.instructions+=2;goto B723e5e;
case 0x723e5f:c.instructions+=1;goto B723e5f;
case 0x723e64:goto L723e64;
case 0x723e67:goto L723e67;
case 0x723e69:c.instructions+=1;goto B723e69;
case 0x723e6b:goto L723e6b;
case 0x723e6d:c.instructions+=3;goto B723e6d;
case 0x723e6e:c.instructions+=2;goto B723e6e;
case 0x723e6f:c.instructions+=1;goto B723e6f;
case 0x723e70:goto L723e70;
case 0x723e76:c.instructions+=7;goto B723e76;
case 0x723e7a:c.instructions+=6;goto B723e7a;
case 0x723e7d:c.instructions+=5;goto B723e7d;
case 0x723e80:c.instructions+=4;goto B723e80;
case 0x723e82:c.instructions+=3;goto B723e82;
case 0x723e84:c.instructions+=2;goto B723e84;
case 0x723e87:c.instructions+=1;goto B723e87;
case 0x723e89:goto L723e89;
case 0x723e8c:c.instructions+=3;goto B723e8c;
case 0x723e8d:c.instructions+=2;goto B723e8d;
case 0x723e92:c.instructions+=1;goto B723e92;
case 0x723e97:goto L723e97;
case 0x723e99:c.instructions+=1;goto B723e99;
case 0x723e9c:goto L723e9c;
case 0x723e9d:goto L723e9d;
case 0x723e9e:c.instructions+=5;goto B723e9e;
case 0x723ea0:c.instructions+=4;goto B723ea0;
case 0x723ea1:c.instructions+=3;goto B723ea1;
case 0x723ea2:c.instructions+=2;goto B723ea2;
case 0x723ea9:c.instructions+=1;goto B723ea9;
case 0x723eab:goto L723eab;
case 0x723ead:c.instructions+=3;goto B723ead;
case 0x723eae:c.instructions+=2;goto B723eae;
case 0x723eaf:c.instructions+=1;goto B723eaf;
case 0x723eb0:goto L723eb0;
case 0x723eb1:c.instructions+=2;goto B723eb1;
case 0x723eb4:c.instructions+=1;goto B723eb4;
case 0x723eb9:goto L723eb9;
case 0x723ebb:c.instructions+=3;goto B723ebb;
case 0x723ebd:c.instructions+=2;goto B723ebd;
case 0x723ebe:c.instructions+=1;goto B723ebe;
case 0x723ec0:goto L723ec0;
case 0x723ec2:c.instructions+=2;goto B723ec2;
case 0x723ec3:c.instructions+=1;goto B723ec3;
case 0x723ec8:goto L723ec8;
case 0x723ec9:c.instructions+=4;goto B723ec9;
case 0x723ecc:c.instructions+=3;goto B723ecc;
case 0x723ecf:c.instructions+=2;goto B723ecf;
case 0x723ed0:c.instructions+=1;goto B723ed0;
case 0x723ed2:goto L723ed2;
case 0x723ed8:c.instructions+=1;goto B723ed8;
case 0x723edf:goto L723edf;
case 0x723ee2:c.instructions+=3;goto B723ee2;
case 0x723ee3:c.instructions+=2;goto B723ee3;
case 0x723ee6:c.instructions+=1;goto B723ee6;
case 0x723eeb:goto L723eeb;
case 0x723eee:c.instructions+=3;goto B723eee;
case 0x723ef1:c.instructions+=2;goto B723ef1;
case 0x723ef2:c.instructions+=1;goto B723ef2;
case 0x723ef4:goto L723ef4;
case 0x723ef6:goto L723ef6;
case 0x723ef9:c.instructions+=5;goto B723ef9;
case 0x723efc:c.instructions+=4;goto B723efc;
case 0x723efd:c.instructions+=3;goto B723efd;
case 0x723f04:c.instructions+=2;goto B723f04;
case 0x723f07:c.instructions+=1;goto B723f07;
case 0x723f0c:goto L723f0c;
case 0x723f0d:goto L723f0d;
case 0x723f10:c.instructions+=1;goto B723f10;
case 0x723f15:goto L723f15;
case 0x723f17:c.instructions+=3;goto B723f17;
case 0x723f19:c.instructions+=2;goto B723f19;
case 0x723f1a:c.instructions+=1;goto B723f1a;
case 0x723f20:goto L723f20;
case 0x723f23:c.instructions+=1;goto B723f23;
case 0x723f29:goto L723f29;
case 0x723f2d:c.instructions+=6;goto B723f2d;
case 0x723f30:c.instructions+=5;goto B723f30;
case 0x723f33:c.instructions+=4;goto B723f33;
case 0x723f39:c.instructions+=3;goto B723f39;
case 0x723f3d:c.instructions+=2;goto B723f3d;
case 0x723f41:c.instructions+=1;goto B723f41;
case 0x723f47:goto L723f47;
case 0x723f4a:goto L723f4a;
case 0x723f4d:c.instructions+=9;goto B723f4d;
case 0x723f50:c.instructions+=8;goto B723f50;
case 0x723f53:c.instructions+=7;goto B723f53;
case 0x723f56:c.instructions+=6;goto B723f56;
case 0x723f5c:c.instructions+=5;goto B723f5c;
case 0x723f5f:c.instructions+=4;goto B723f5f;
case 0x723f61:c.instructions+=3;goto B723f61;
case 0x723f63:c.instructions+=2;goto B723f63;
case 0x723f66:c.instructions+=1;goto B723f66;
case 0x723f68:goto L723f68;
case 0x723f6b:c.instructions+=7;goto B723f6b;
case 0x723f6e:c.instructions+=6;goto B723f6e;
case 0x723f74:c.instructions+=5;goto B723f74;
case 0x723f77:c.instructions+=4;goto B723f77;
case 0x723f78:c.instructions+=3;goto B723f78;
case 0x723f7c:c.instructions+=2;goto B723f7c;
case 0x723f7f:c.instructions+=1;goto B723f7f;
case 0x723f84:goto L723f84;
case 0x723f85:goto L723f85;
case 0x723f88:c.instructions+=5;goto B723f88;
case 0x723f8c:c.instructions+=4;goto B723f8c;
case 0x723f8d:c.instructions+=3;goto B723f8d;
case 0x723f8e:c.instructions+=2;goto B723f8e;
case 0x723f91:c.instructions+=1;goto B723f91;
case 0x723f93:goto L723f93;
case 0x723f97:c.instructions+=1;goto B723f97;
case 0x723f9d:goto L723f9d;
case 0x723f9f:c.instructions+=2;goto B723f9f;
case 0x723fa5:c.instructions+=1;goto B723fa5;
case 0x723fab:goto L723fab;
case 0x723fac:c.instructions+=2;goto B723fac;
case 0x723fad:c.instructions+=1;goto B723fad;
case 0x723fb2:goto L723fb2;
case 0x723fb3:c.instructions+=4;goto B723fb3;
case 0x723fb9:c.instructions+=3;goto B723fb9;
case 0x723fba:c.instructions+=2;goto B723fba;
case 0x723fbb:c.instructions+=1;goto B723fbb;
case 0x723fbd:goto L723fbd;
case 0x723fbf:goto L723fbf;
case 0x723fc5:c.instructions+=8;goto B723fc5;
case 0x723fc8:c.instructions+=7;goto B723fc8;
case 0x723fcb:c.instructions+=6;goto B723fcb;
case 0x723fcd:c.instructions+=5;goto B723fcd;
case 0x723fd1:c.instructions+=4;goto B723fd1;
case 0x723fd4:c.instructions+=3;goto B723fd4;
case 0x723fdc:c.instructions+=2;goto B723fdc;
case 0x723fdf:c.instructions+=1;goto B723fdf;
case 0x723fe1:goto L723fe1;
case 0x723fe6:c.instructions+=10;goto B723fe6;
case 0x723fe8:c.instructions+=9;goto B723fe8;
case 0x723feb:c.instructions+=8;goto B723feb;
case 0x723fee:c.instructions+=7;goto B723fee;
case 0x723ff0:c.instructions+=6;goto B723ff0;
case 0x723ff3:c.instructions+=5;goto B723ff3;
case 0x723ff6:c.instructions+=4;goto B723ff6;
case 0x723ff9:c.instructions+=3;goto B723ff9;
case 0x723ffb:c.instructions+=2;goto B723ffb;
case 0x723ffd:c.instructions+=1;goto B723ffd;
default:missing_instruction(c.pc);}
B723000:L723000:{c.instructions+=5;NFSU2_TR(0x723000);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B723003:{NFSU2_TR(0x723003);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B723009:{NFSU2_TR(0x723009);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72300c:{NFSU2_TR(0x72300c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72300f:{NFSU2_TR(0x72300f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723014ull));
TAIL_STATIC(0x725480u,725);
}
B723014:L723014:{c.instructions+=3;NFSU2_TR(0x723014);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B723016:{NFSU2_TR(0x723016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723017:{NFSU2_TR(0x723017);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72306a;}}
}
B723019:L723019:{c.instructions+=4;NFSU2_TR(0x723019);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72301a:{NFSU2_TR(0x72301a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B72301c:{NFSU2_TR(0x72301c);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B723020:{NFSU2_TR(0x723020);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72305a;}}
}
B723022:L723022:{c.instructions+=3;NFSU2_TR(0x723022);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B723025:{NFSU2_TR(0x723025);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B723028:{NFSU2_TR(0x723028);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B72302b:L72302b:{c.instructions+=16;NFSU2_TR(0x72302b);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B723030:{NFSU2_TR(0x723030);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B723034:{NFSU2_TR(0x723034);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72303a:{NFSU2_TR(0x72303a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72303d:{NFSU2_TR(0x72303d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B723040:{NFSU2_TR(0x723040);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B723044:{NFSU2_TR(0x723044);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B723047:{NFSU2_TR(0x723047);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B723048:{NFSU2_TR(0x723048);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B723049:{NFSU2_TR(0x723049);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72304c:{NFSU2_TR(0x72304c);
__builtin_memmove((R+12),(R+4),4);
}
B72304e:{NFSU2_TR(0x72304e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72304f:{NFSU2_TR(0x72304f);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B723052:{NFSU2_TR(0x723052);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B723056:{NFSU2_TR(0x723056);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B723058:{NFSU2_TR(0x723058);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72302bu);}goto L72302b;}}
}
B72305a:L72305a:{c.instructions+=4;NFSU2_TR(0x72305a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72305d:{NFSU2_TR(0x72305d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72305e:{NFSU2_TR(0x72305e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723061:{NFSU2_TR(0x723061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723066ull));
{goto L723bc1;}
}
B723066:L723066:{c.instructions+=2;NFSU2_TR(0x723066);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B723069:{NFSU2_TR(0x723069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72306a:L72306a:{c.instructions+=5;NFSU2_TR(0x72306a);
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
B72306c:{NFSU2_TR(0x72306c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72306d:{NFSU2_TR(0x72306d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72306e:{NFSU2_TR(0x72306e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72306f:{NFSU2_TR(0x72306f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723070:L723070:{c.instructions+=2;NFSU2_TR(0x723070);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723077:{NFSU2_TR(0x723077);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72307d;}}
}
B723079:L723079:{c.instructions+=2;NFSU2_TR(0x723079);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72307b:{NFSU2_TR(0x72307b);
{goto L72308d;}
}
B72307d:L72307d:{c.instructions+=2;NFSU2_TR(0x72307d);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723081:{NFSU2_TR(0x723081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723086ull));
TAIL_STATIC(0x722424u,722);
}
B723086:L723086:{c.instructions+=3;NFSU2_TR(0x723086);
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
B723088:{NFSU2_TR(0x723088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723089:{NFSU2_TR(0x723089);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72308f;}}
}
B72308b:L72308b:{c.instructions+=1;NFSU2_TR(0x72308b);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72308d:L72308d:{c.instructions+=2;NFSU2_TR(0x72308d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72308e:{NFSU2_TR(0x72308e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72308f:L72308f:{c.instructions+=5;NFSU2_TR(0x72308f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B723093:{NFSU2_TR(0x723093);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723094:{NFSU2_TR(0x723094);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723097:{NFSU2_TR(0x723097);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72309d:{NFSU2_TR(0x72309d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7230a2ull));
{goto L723c41;}
}
B7230a2:L7230a2:{c.instructions+=4;NFSU2_TR(0x7230a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7230a3:{NFSU2_TR(0x7230a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7230a4:{NFSU2_TR(0x7230a4);
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
B7230a6:{NFSU2_TR(0x7230a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7230a7:L7230a7:{c.instructions+=2;NFSU2_TR(0x7230a7);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7230ae:{NFSU2_TR(0x7230ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7230b4;}}
}
B7230b0:L7230b0:{c.instructions+=2;NFSU2_TR(0x7230b0);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7230b2:{NFSU2_TR(0x7230b2);
{goto L7230c4;}
}
B7230b4:L7230b4:{c.instructions+=2;NFSU2_TR(0x7230b4);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7230b8:{NFSU2_TR(0x7230b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7230bdull));
TAIL_STATIC(0x722424u,722);
}
B7230bd:L7230bd:{c.instructions+=3;NFSU2_TR(0x7230bd);
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
B7230bf:{NFSU2_TR(0x7230bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7230c0:{NFSU2_TR(0x7230c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7230c6;}}
}
B7230c2:L7230c2:{c.instructions+=1;NFSU2_TR(0x7230c2);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7230c4:L7230c4:{c.instructions+=2;NFSU2_TR(0x7230c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7230c5:{NFSU2_TR(0x7230c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7230c6:L7230c6:{c.instructions+=4;NFSU2_TR(0x7230c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7230ca:{NFSU2_TR(0x7230ca);
w4(R+4,u32(0x4000ull));
}
B7230cf:{NFSU2_TR(0x7230cf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7230d1:{NFSU2_TR(0x7230d1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7230d5;}}
}
B7230d3:L7230d3:{c.instructions+=1;NFSU2_TR(0x7230d3);
__builtin_memmove((R+8),(R+4),4);
}
B7230d5:L7230d5:{c.instructions+=4;NFSU2_TR(0x7230d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7230d6:{NFSU2_TR(0x7230d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7230d9:{NFSU2_TR(0x7230d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7230e0:{NFSU2_TR(0x7230e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7230e5ull));
{goto L723d9b;}
}
B7230e5:L7230e5:{c.instructions+=4;NFSU2_TR(0x7230e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7230e6:{NFSU2_TR(0x7230e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7230e7:{NFSU2_TR(0x7230e7);
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
B7230e9:{NFSU2_TR(0x7230e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7230ea:L7230ea:{c.instructions+=7;NFSU2_TR(0x7230ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7230eb:{NFSU2_TR(0x7230eb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B7230ee:{NFSU2_TR(0x7230ee);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7230f0:{NFSU2_TR(0x7230f0);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7230f4:{NFSU2_TR(0x7230f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7230f5:{NFSU2_TR(0x7230f5);
__builtin_memmove((R+28),(R+0),4);
}
B7230f7:{NFSU2_TR(0x7230f7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L723121;}}
}
B7230f9:L7230f9:{c.instructions+=5;NFSU2_TR(0x7230f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7230fd:{NFSU2_TR(0x7230fd);
__builtin_memmove((R+8),gp(0x8b466c),4);
}
B723103:{NFSU2_TR(0x723103);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B723106:{NFSU2_TR(0x723106);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B723109:{NFSU2_TR(0x723109);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B72310d:L72310d:{c.instructions+=3;NFSU2_TR(0x72310d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B723110:{NFSU2_TR(0x723110);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B723112:{NFSU2_TR(0x723112);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L723118;}}
}
B723114:L723114:{c.instructions+=2;NFSU2_TR(0x723114);
__builtin_memmove((R+28),(R+8),4);
}
B723116:{NFSU2_TR(0x723116);
__builtin_memmove((R+0),(R+24),4);
}
B723118:L723118:{c.instructions+=5;NFSU2_TR(0x723118);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B723119:{NFSU2_TR(0x723119);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72311a:{NFSU2_TR(0x72311a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72311b:{NFSU2_TR(0x72311b);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72311f:{NFSU2_TR(0x72311f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72310du);}goto L72310d;}}
}
B723121:L723121:{c.instructions+=3;NFSU2_TR(0x723121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723122:{NFSU2_TR(0x723122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723123:{NFSU2_TR(0x723123);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723124:L723124:{c.instructions+=1;NFSU2_TR(0x723124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723129ull));
TAIL_STATIC(0x727e6bu,727);
}
B723129:L723129:{c.instructions+=4;NFSU2_TR(0x723129);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72312d:{NFSU2_TR(0x72312d);
u8 U[45];
w4(U+37,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
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
B723130:{NFSU2_TR(0x723130);
u8 U[12];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B723137:{NFSU2_TR(0x723137);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723138:L723138:{c.instructions+=4;NFSU2_TR(0x723138);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723139:{NFSU2_TR(0x723139);
__builtin_memmove((R+20),(R+16),4);
}
B72313b:{NFSU2_TR(0x72313b);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723142:{NFSU2_TR(0x723142);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723149;}}
}
B723144:L723144:{c.instructions+=4;NFSU2_TR(0x723144);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723146:{NFSU2_TR(0x723146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723147:{NFSU2_TR(0x723147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B723148:{NFSU2_TR(0x723148);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723149:L723149:{c.instructions+=3;NFSU2_TR(0x723149);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72314a:{NFSU2_TR(0x72314a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72314b:{NFSU2_TR(0x72314b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723150ull));
TAIL_STATIC(0x721f99u,721);
}
B723150:L723150:{c.instructions+=4;NFSU2_TR(0x723150);
w4(R+0,u32(m1(0x8b44de)));
}
B723157:{NFSU2_TR(0x723157);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B723159:{NFSU2_TR(0x723159);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72315b:{NFSU2_TR(0x72315b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72316c;}}
}
B72315d:L72315d:{c.instructions+=2;NFSU2_TR(0x72315d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b43ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B723165:{NFSU2_TR(0x723165);
if(r1(R+518)){{goto L72317a;}}
}
B723167:L723167:{c.instructions+=3;NFSU2_TR(0x723167);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B723168:{NFSU2_TR(0x723168);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72316a:{NFSU2_TR(0x72316a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72315du);}goto L72315d;}}
}
B72316c:L72316c:{c.instructions+=1;NFSU2_TR(0x72316c);
u8 U[4];
w4(U+0,u32(0xfffffff7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72316e:L72316e:{c.instructions+=1;NFSU2_TR(0x72316e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72316f:L72316f:{c.instructions+=1;NFSU2_TR(0x72316f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723174ull));
TAIL_STATIC(0x721fa7u,721);
}
B723174:L723174:{c.instructions+=5;NFSU2_TR(0x723174);
__builtin_memmove((R+0),(R+28),4);
}
B723176:{NFSU2_TR(0x723176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723177:{NFSU2_TR(0x723177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723178:{NFSU2_TR(0x723178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B723179:{NFSU2_TR(0x723179);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72317a:L72317a:{c.instructions+=4;NFSU2_TR(0x72317a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72317d:{NFSU2_TR(0x72317d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72317e:{NFSU2_TR(0x72317e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72317f:{NFSU2_TR(0x72317f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723184ull));
TAIL_STATIC(0x727e6bu,727);
}
B723184:L723184:{c.instructions+=4;NFSU2_TR(0x723184);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B723186:{NFSU2_TR(0x723186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723187:{NFSU2_TR(0x723187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723188:{NFSU2_TR(0x723188);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72318e;}}
}
B72318a:L72318a:{c.instructions+=2;NFSU2_TR(0x72318a);
u8 U[4];
w4(U+0,u32(0xfffffffaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72318c:{NFSU2_TR(0x72318c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72316eu);}goto L72316e;}
}
B72318e:L72318e:{c.instructions+=3;NFSU2_TR(0x72318e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72318f:{NFSU2_TR(0x72318f);
__builtin_memmove((R+12),(R+24),4);
}
B723191:{NFSU2_TR(0x723191);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723196ull));
TAIL_STATIC(0x727e6bu,727);
}
B723196:L723196:{c.instructions+=2;NFSU2_TR(0x723196);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B723198:{NFSU2_TR(0x723198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72319dull));
TAIL_STATIC(0x727e6bu,727);
}
B72319d:L72319d:{c.instructions+=16;NFSU2_TR(0x72319d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7231a0:{NFSU2_TR(0x7231a0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B7231a2:{NFSU2_TR(0x7231a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7231a5:{NFSU2_TR(0x7231a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7231a8:{NFSU2_TR(0x7231a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7231ab:{NFSU2_TR(0x7231ab);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x9cull))));
}
B7231b1:{NFSU2_TR(0x7231b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7231b4:{NFSU2_TR(0x7231b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7231b7:{NFSU2_TR(0x7231b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7231ba:{NFSU2_TR(0x7231ba);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7231be:{NFSU2_TR(0x7231be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7231c1:{NFSU2_TR(0x7231c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7231c4:{NFSU2_TR(0x7231c4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+24)),r4(U+0));
}
B7231ca:{NFSU2_TR(0x7231ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b43ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B7231d1:{NFSU2_TR(0x7231d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7231d2:{NFSU2_TR(0x7231d2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72316fu);}goto L72316f;}
}
B7231d4:L7231d4:{c.instructions+=8;NFSU2_TR(0x7231d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7231d5:{NFSU2_TR(0x7231d5);
__builtin_memmove((R+20),(R+16),4);
}
B7231d7:{NFSU2_TR(0x7231d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf0ull))));
}
B7231dd:{NFSU2_TR(0x7231dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7231de:{NFSU2_TR(0x7231de);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7231e0:{NFSU2_TR(0x7231e0);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7231e7:{NFSU2_TR(0x7231e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7231ea:{NFSU2_TR(0x7231ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7231f4;}}
}
B7231ec:L7231ec:{c.instructions+=3;NFSU2_TR(0x7231ec);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7231ee:{NFSU2_TR(0x7231ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7231ef:{NFSU2_TR(0x7231ef);
{goto L723512;}
}
B7231f4:L7231f4:{c.instructions+=4;NFSU2_TR(0x7231f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7231f5:{NFSU2_TR(0x7231f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7231f6:{NFSU2_TR(0x7231f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7231f9:{NFSU2_TR(0x7231f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7231feull));
TAIL_STATIC(0x727f4du,727);
}
B7231fe:L7231fe:{c.instructions+=24;NFSU2_TR(0x7231fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B723201:{NFSU2_TR(0x723201);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B723204:{NFSU2_TR(0x723204);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff13ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72320a:{NFSU2_TR(0x72320a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72320b:{NFSU2_TR(0x72320b);
w4(R+4,u32(r1(R+0)));
}
B72320e:{NFSU2_TR(0x72320e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723211:{NFSU2_TR(0x723211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723214:{NFSU2_TR(0x723214);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B723217:{NFSU2_TR(0x723217);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b43ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B72321e:{NFSU2_TR(0x72321e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B723222:{NFSU2_TR(0x723222);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B723229:{NFSU2_TR(0x723229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72322b:{NFSU2_TR(0x72322b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72322e:{NFSU2_TR(0x72322e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723231:{NFSU2_TR(0x723231);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723234:{NFSU2_TR(0x723234);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723237:{NFSU2_TR(0x723237);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72323a:{NFSU2_TR(0x72323a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72323d:{NFSU2_TR(0x72323d);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B723241:{NFSU2_TR(0x723241);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723244:{NFSU2_TR(0x723244);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B723248:{NFSU2_TR(0x723248);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72324c:{NFSU2_TR(0x72324c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72324f:{NFSU2_TR(0x72324f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72328b;}}
}
B723251:L723251:{c.instructions+=5;NFSU2_TR(0x723251);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B723254:{NFSU2_TR(0x723254);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723257:{NFSU2_TR(0x723257);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72325a:{NFSU2_TR(0x72325a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72325d:{NFSU2_TR(0x72325d);
{goto L723262;}
}
B72325f:L72325f:{c.instructions+=1;NFSU2_TR(0x72325f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B723262:L723262:{c.instructions+=15;NFSU2_TR(0x723262);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B723265:{NFSU2_TR(0x723265);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723268:{NFSU2_TR(0x723268);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72326c:{NFSU2_TR(0x72326c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72326f:{NFSU2_TR(0x72326f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B723273:{NFSU2_TR(0x723273);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B723276:{NFSU2_TR(0x723276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B723278:{NFSU2_TR(0x723278);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72327a:{NFSU2_TR(0x72327a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72327d:{NFSU2_TR(0x72327d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723280:{NFSU2_TR(0x723280);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B723284:{NFSU2_TR(0x723284);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B723285:{NFSU2_TR(0x723285);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B723286:{NFSU2_TR(0x723286);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B723289:{NFSU2_TR(0x723289);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72325fu);}goto L72325f;}}
}
B72328b:L72328b:{c.instructions+=5;NFSU2_TR(0x72328b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723291:{NFSU2_TR(0x723291);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723292:{NFSU2_TR(0x723292);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B723295:{NFSU2_TR(0x723295);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723296:{NFSU2_TR(0x723296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72329bull));
TAIL_STATIC(0x727ed8u,727);
}
B72329b:L72329b:{c.instructions+=5;NFSU2_TR(0x72329b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B72329d:{NFSU2_TR(0x72329d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72329e:{NFSU2_TR(0x72329e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72329f:{NFSU2_TR(0x72329f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7232a2:{NFSU2_TR(0x7232a2);
if(r1(R+518)){{goto L72350e;}}
}
B7232a8:L7232a8:{c.instructions+=6;NFSU2_TR(0x7232a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B7232ab:{NFSU2_TR(0x7232ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7232ac:{NFSU2_TR(0x7232ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7232af:{NFSU2_TR(0x7232af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7232b0:{NFSU2_TR(0x7232b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7232b1:{NFSU2_TR(0x7232b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7232b6ull));
TAIL_STATIC(0x7249a4u,724);
}
B7232b6:L7232b6:{c.instructions+=7;NFSU2_TR(0x7232b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7232b9:{NFSU2_TR(0x7232b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7232bc:{NFSU2_TR(0x7232bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7232bf:{NFSU2_TR(0x7232bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7232c0:{NFSU2_TR(0x7232c0);
u8 U[4];
w4(U+0,u32(0x65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7232c2:{NFSU2_TR(0x7232c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7232c5:{NFSU2_TR(0x7232c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7232caull));
TAIL_STATIC(0x7250c8u,725);
}
B7232ca:L7232ca:{c.instructions+=4;NFSU2_TR(0x7232ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B7232cd:{NFSU2_TR(0x7232cd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7232cf:{NFSU2_TR(0x7232cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7232d2:{NFSU2_TR(0x7232d2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7232dc;}}
}
B7232d4:L7232d4:{c.instructions+=2;NFSU2_TR(0x7232d4);
u8 U[4];
w4(U+0,u32(0xfffffff7ull));
s4(u32(r4(R+28)),r4(U+0));
}
B7232da:{NFSU2_TR(0x7232da);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72328bu);}goto L72328b;}
}
B7232dc:L7232dc:{c.instructions+=6;NFSU2_TR(0x7232dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7232df:{NFSU2_TR(0x7232df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B7232e1:{NFSU2_TR(0x7232e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7232e5:{NFSU2_TR(0x7232e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7232e6:{NFSU2_TR(0x7232e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7232e7:{NFSU2_TR(0x7232e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7232ecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7230eau);}goto L7230ea;}
}
B7232ec:L7232ec:{c.instructions+=19;NFSU2_TR(0x7232ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7232ef:{NFSU2_TR(0x7232ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7232f2:{NFSU2_TR(0x7232f2);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B7232f7:{NFSU2_TR(0x7232f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7232fa:{NFSU2_TR(0x7232fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7232fd:{NFSU2_TR(0x7232fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723300:{NFSU2_TR(0x723300);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B723302:{NFSU2_TR(0x723302);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723306:{NFSU2_TR(0x723306);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72330a:{NFSU2_TR(0x72330a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+0),(U+0),2);
}
B72330d:{NFSU2_TR(0x72330d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B723311:{NFSU2_TR(0x723311);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B723314:{NFSU2_TR(0x723314);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B723317:{NFSU2_TR(0x723317);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72331a:{NFSU2_TR(0x72331a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72331b:{NFSU2_TR(0x72331b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72331e:{NFSU2_TR(0x72331e);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B723322:{NFSU2_TR(0x723322);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723323:{NFSU2_TR(0x723323);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723332;}}
}
B723325:L723325:{c.instructions+=4;NFSU2_TR(0x723325);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B723328:{NFSU2_TR(0x723328);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B72332c:{NFSU2_TR(0x72332c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B723330:{NFSU2_TR(0x723330);
{goto L72333c;}
}
B723332:L723332:{c.instructions+=2;NFSU2_TR(0x723332);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723333:{NFSU2_TR(0x723333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723338ull));
TAIL_STATIC(0x72790bu,727);
}
B723338:L723338:{c.instructions+=2;NFSU2_TR(0x723338);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72333b:{NFSU2_TR(0x72333b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72333c:L72333c:{c.instructions+=35;NFSU2_TR(0x72333c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B723341:{NFSU2_TR(0x723341);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723347:{NFSU2_TR(0x723347);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B72334c:{NFSU2_TR(0x72334c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72334f:{NFSU2_TR(0x72334f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+4),(U+0),2);
}
B723352:{NFSU2_TR(0x723352);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B723359:{NFSU2_TR(0x723359);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B72335d:{NFSU2_TR(0x72335d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B723364:{NFSU2_TR(0x723364);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B723367:{NFSU2_TR(0x723367);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72336a:{NFSU2_TR(0x72336a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B72336d:{NFSU2_TR(0x72336d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B723370:{NFSU2_TR(0x723370);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B723374:{NFSU2_TR(0x723374);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723377:{NFSU2_TR(0x723377);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72337a:{NFSU2_TR(0x72337a);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72337d:{NFSU2_TR(0x72337d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72337f:{NFSU2_TR(0x72337f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B723381:{NFSU2_TR(0x723381);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+0,u16(s16(s8(r1(U+4)))));
}
B723386:{NFSU2_TR(0x723386);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B723388:{NFSU2_TR(0x723388);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72338c:{NFSU2_TR(0x72338c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B723390:{NFSU2_TR(0x723390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723393:{NFSU2_TR(0x723393);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723399:{NFSU2_TR(0x723399);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72339c:{NFSU2_TR(0x72339c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7233a3:{NFSU2_TR(0x7233a3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B7233a6:{NFSU2_TR(0x7233a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7233a9:{NFSU2_TR(0x7233a9);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7233ac:{NFSU2_TR(0x7233ac);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7233ae:{NFSU2_TR(0x7233ae);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7233b1:{NFSU2_TR(0x7233b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7233b5:{NFSU2_TR(0x7233b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7233b7:{NFSU2_TR(0x7233b7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7233b9:{NFSU2_TR(0x7233b9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L723460;}}
}
B7233bf:L7233bf:{c.instructions+=43;NFSU2_TR(0x7233bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7233c2:{NFSU2_TR(0x7233c2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B7233c4:{NFSU2_TR(0x7233c4);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B7233c9:{NFSU2_TR(0x7233c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7233cc:{NFSU2_TR(0x7233cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7233cf:{NFSU2_TR(0x7233cf);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b466cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w2(R+8,u16(u32(r2(R+8))-u32(r2(U+8))));
}
B7233d7:{NFSU2_TR(0x7233d7);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B7233dc:{NFSU2_TR(0x7233dc);
u8 U[14];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7233e1:{NFSU2_TR(0x7233e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7233e5:{NFSU2_TR(0x7233e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7233e8:{NFSU2_TR(0x7233e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7233eb:{NFSU2_TR(0x7233eb);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B7233f1:{NFSU2_TR(0x7233f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7233f5:{NFSU2_TR(0x7233f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7233f8:{NFSU2_TR(0x7233f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7233fb:{NFSU2_TR(0x7233fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7233fe:{NFSU2_TR(0x7233fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B723401:{NFSU2_TR(0x723401);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B723404:{NFSU2_TR(0x723404);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B723407:{NFSU2_TR(0x723407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72340a:{NFSU2_TR(0x72340a);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72340d:{NFSU2_TR(0x72340d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723410:{NFSU2_TR(0x723410);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B723412:{NFSU2_TR(0x723412);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723415:{NFSU2_TR(0x723415);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B723418:{NFSU2_TR(0x723418);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72341b:{NFSU2_TR(0x72341b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72341e:{NFSU2_TR(0x72341e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723421:{NFSU2_TR(0x723421);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723424:{NFSU2_TR(0x723424);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B723428:{NFSU2_TR(0x723428);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w4(U+4,u32(0x7f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72342f:{NFSU2_TR(0x72342f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w4(U+4,u32(0x7fffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B723436:{NFSU2_TR(0x723436);
{u32 ea_=u32(u32(8487092u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72343c:{NFSU2_TR(0x72343c);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72343f:{NFSU2_TR(0x72343f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B723442:{NFSU2_TR(0x723442);
__builtin_memmove((R+8),(R+518),1);
}
B723445:{NFSU2_TR(0x723445);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B72344a:{NFSU2_TR(0x72344a);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72344d:{NFSU2_TR(0x72344d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B723450:{NFSU2_TR(0x723450);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B723454:{NFSU2_TR(0x723454);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B723455:{NFSU2_TR(0x723455);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B723457:{NFSU2_TR(0x723457);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7233bfu);}goto L7233bf;}}
}
B72345d:L72345d:{c.instructions+=1;NFSU2_TR(0x72345d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B723460:L723460:{c.instructions+=2;NFSU2_TR(0x723460);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B723464:{NFSU2_TR(0x723464);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72346e;}}
}
B723466:L723466:{c.instructions+=2;NFSU2_TR(0x723466);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B72346a:{NFSU2_TR(0x72346a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72346e:L72346e:{c.instructions+=3;NFSU2_TR(0x72346e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723472:{NFSU2_TR(0x723472);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B723476:{NFSU2_TR(0x723476);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7234a0;}}
}
B723478:L723478:{c.instructions+=1;NFSU2_TR(0x723478);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72347b:L72347b:{c.instructions+=12;NFSU2_TR(0x72347b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B72347f:{NFSU2_TR(0x72347f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+8),(U+0),2);
}
B723482:{NFSU2_TR(0x723482);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B723485:{NFSU2_TR(0x723485);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B723488:{NFSU2_TR(0x723488);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B72348e:{NFSU2_TR(0x72348e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B723492:{NFSU2_TR(0x723492);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723495:{NFSU2_TR(0x723495);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B723499:{NFSU2_TR(0x723499);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72349a:{NFSU2_TR(0x72349a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72349b:{NFSU2_TR(0x72349b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72349e:{NFSU2_TR(0x72349e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72347bu);}goto L72347b;}}
}
B7234a0:L7234a0:{c.instructions+=3;NFSU2_TR(0x7234a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7234a3:{NFSU2_TR(0x7234a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B7234ab:{NFSU2_TR(0x7234ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7234b0ull));
TAIL_STATIC(0x7277dau,727);
}
B7234b0:L7234b0:{c.instructions+=12;NFSU2_TR(0x7234b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7234b3:{NFSU2_TR(0x7234b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7234b6:{NFSU2_TR(0x7234b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B7234ba:{NFSU2_TR(0x7234ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7234bb:{NFSU2_TR(0x7234bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7234bc:{NFSU2_TR(0x7234bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B7234c0:{NFSU2_TR(0x7234c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B7234c4:{NFSU2_TR(0x7234c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7234c5:{NFSU2_TR(0x7234c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7234c6:{NFSU2_TR(0x7234c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7234c9:{NFSU2_TR(0x7234c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7234cc:{NFSU2_TR(0x7234cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7234d1ull));
TAIL_STATIC(0x727e6eu,727);
}
B7234d1:L7234d1:{c.instructions+=4;NFSU2_TR(0x7234d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B7234d4:{NFSU2_TR(0x7234d4);
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
B7234d6:{NFSU2_TR(0x7234d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7234d9:{NFSU2_TR(0x7234d9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72350e;}}
}
B7234db:L7234db:{c.instructions+=3;NFSU2_TR(0x7234db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7234de:{NFSU2_TR(0x7234de);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7234e0:{NFSU2_TR(0x7234e0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L723502;}}
}
B7234e2:L7234e2:{c.instructions+=3;NFSU2_TR(0x7234e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7234e5:{NFSU2_TR(0x7234e5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B7234e8:{NFSU2_TR(0x7234e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7234eb:L7234eb:{c.instructions+=4;NFSU2_TR(0x7234eb);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B7234f0:{NFSU2_TR(0x7234f0);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B7234f4:{NFSU2_TR(0x7234f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7234f5:{NFSU2_TR(0x7234f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7234faull));
TAIL_STATIC(0x725378u,725);
}
B7234fa:L7234fa:{c.instructions+=5;NFSU2_TR(0x7234fa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7234fb:{NFSU2_TR(0x7234fb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7234fc:{NFSU2_TR(0x7234fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7234ff:{NFSU2_TR(0x7234ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723500:{NFSU2_TR(0x723500);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7234ebu);}goto L7234eb;}}
}
B723502:L723502:{c.instructions+=4;NFSU2_TR(0x723502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723505:{NFSU2_TR(0x723505);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B723507:{NFSU2_TR(0x723507);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B723509:{NFSU2_TR(0x723509);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72328bu);}goto L72328b;}
}
B72350e:L72350e:{c.instructions+=3;NFSU2_TR(0x72350e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B723510:{NFSU2_TR(0x723510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723511:{NFSU2_TR(0x723511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B723512:L723512:{c.instructions+=3;NFSU2_TR(0x723512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723513:{NFSU2_TR(0x723513);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723514:{NFSU2_TR(0x723514);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723515:L723515:{c.instructions+=6;NFSU2_TR(0x723515);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723516:{NFSU2_TR(0x723516);
__builtin_memmove((R+20),(R+16),4);
}
B723518:{NFSU2_TR(0x723518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B72351b:{NFSU2_TR(0x72351b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72351d:{NFSU2_TR(0x72351d);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+8)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723523:{NFSU2_TR(0x723523);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72352a;}}
}
B723525:L723525:{c.instructions+=4;NFSU2_TR(0x723525);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723527:{NFSU2_TR(0x723527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723528:{NFSU2_TR(0x723528);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723529:{NFSU2_TR(0x723529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72352a:L72352a:{c.instructions+=6;NFSU2_TR(0x72352a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72352d:{NFSU2_TR(0x72352d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b43ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B723534:{NFSU2_TR(0x723534);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+8))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B723537:{NFSU2_TR(0x723537);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723538:{NFSU2_TR(0x723538);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723539:{NFSU2_TR(0x723539);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L723555;}}
}
B72353b:L72353b:{c.instructions+=1;NFSU2_TR(0x72353b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72353e:L72353e:{c.instructions+=5;NFSU2_TR(0x72353e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B723542:{NFSU2_TR(0x723542);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B723545:{NFSU2_TR(0x723545);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B723546:{NFSU2_TR(0x723546);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B723548:{NFSU2_TR(0x723548);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7235a4;}}
}
B72354a:L72354a:{c.instructions+=6;NFSU2_TR(0x72354a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B72354e:{NFSU2_TR(0x72354e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72354f:{NFSU2_TR(0x72354f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B723550:{NFSU2_TR(0x723550);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B723551:{NFSU2_TR(0x723551);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B723553:{NFSU2_TR(0x723553);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72353eu);}goto L72353e;}}
}
B723555:L723555:{c.instructions+=22;NFSU2_TR(0x723555);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B723559:{NFSU2_TR(0x723559);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72355c:{NFSU2_TR(0x72355c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723560:{NFSU2_TR(0x723560);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B723563:{NFSU2_TR(0x723563);
u8 U[12];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B723567:{NFSU2_TR(0x723567);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72356a:{NFSU2_TR(0x72356a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(U+4))));
}
B72356d:{NFSU2_TR(0x72356d);
w4(R+28,u32(0x7fffffffull));
}
B723572:{NFSU2_TR(0x723572);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+28))));
}
B723574:{NFSU2_TR(0x723574);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B723577:{NFSU2_TR(0x723577);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72357a:{NFSU2_TR(0x72357a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72357b:{NFSU2_TR(0x72357b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72357e:{NFSU2_TR(0x72357e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B723581:{NFSU2_TR(0x723581);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+28))));
}
B723583:{NFSU2_TR(0x723583);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B723586:{NFSU2_TR(0x723586);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B723588:{NFSU2_TR(0x723588);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72358b:{NFSU2_TR(0x72358b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72358e:{NFSU2_TR(0x72358e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B723590:{NFSU2_TR(0x723590);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B723594:{NFSU2_TR(0x723594);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7235d4;}}
}
B723596:L723596:{c.instructions+=5;NFSU2_TR(0x723596);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B723599:{NFSU2_TR(0x723599);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72359c:{NFSU2_TR(0x72359c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B72359f:{NFSU2_TR(0x72359f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7235a2:{NFSU2_TR(0x7235a2);
{goto L7235ac;}
}
B7235a4:L7235a4:{c.instructions+=3;NFSU2_TR(0x7235a4);
u8 U[4];
w4(U+0,u32(0xfffffff3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7235a6:{NFSU2_TR(0x7235a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7235a7:{NFSU2_TR(0x7235a7);
{goto L723604;}
}
B7235a9:L7235a9:{c.instructions+=1;NFSU2_TR(0x7235a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7235ac:L7235ac:{c.instructions+=16;NFSU2_TR(0x7235ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7235af:{NFSU2_TR(0x7235af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B7235b1:{NFSU2_TR(0x7235b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7235b5:{NFSU2_TR(0x7235b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7235b7:{NFSU2_TR(0x7235b7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7235b9:{NFSU2_TR(0x7235b9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B7235bc:{NFSU2_TR(0x7235bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B7235bf:{NFSU2_TR(0x7235bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7235c2:{NFSU2_TR(0x7235c2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7235c3:{NFSU2_TR(0x7235c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7235c6:{NFSU2_TR(0x7235c6);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+8)),r2(U+0));
}
B7235c9:{NFSU2_TR(0x7235c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7235cd:{NFSU2_TR(0x7235cd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7235ce:{NFSU2_TR(0x7235ce);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7235cf:{NFSU2_TR(0x7235cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7235d2:{NFSU2_TR(0x7235d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7235a9u);}goto L7235a9;}}
}
B7235d4:L7235d4:{c.instructions+=15;NFSU2_TR(0x7235d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7235d7:{NFSU2_TR(0x7235d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7235da:{NFSU2_TR(0x7235da);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B7235dc:{NFSU2_TR(0x7235dc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7235de:{NFSU2_TR(0x7235de);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7235e0:{NFSU2_TR(0x7235e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7235e3:{NFSU2_TR(0x7235e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7235e6:{NFSU2_TR(0x7235e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7235ea:{NFSU2_TR(0x7235ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7235ee:{NFSU2_TR(0x7235ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7235ef:{NFSU2_TR(0x7235ef);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7235f0:{NFSU2_TR(0x7235f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7235f4:{NFSU2_TR(0x7235f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7235f8:{NFSU2_TR(0x7235f8);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+8))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+8)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B7235fc:{NFSU2_TR(0x7235fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L723604;}}
}
B7235fe:L7235fe:{c.instructions+=1;NFSU2_TR(0x7235fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B723604:L723604:{c.instructions+=4;NFSU2_TR(0x723604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723605:{NFSU2_TR(0x723605);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723606:{NFSU2_TR(0x723606);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723607:{NFSU2_TR(0x723607);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723608:L723608:{c.instructions+=4;NFSU2_TR(0x723608);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723609:{NFSU2_TR(0x723609);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B72360b:{NFSU2_TR(0x72360b);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723612:{NFSU2_TR(0x723612);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723619;}}
}
B723614:L723614:{c.instructions+=4;NFSU2_TR(0x723614);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723616:{NFSU2_TR(0x723616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723617:{NFSU2_TR(0x723617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723618:{NFSU2_TR(0x723618);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723619:L723619:{c.instructions+=5;NFSU2_TR(0x723619);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72361d:{NFSU2_TR(0x72361d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b43ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B723624:{NFSU2_TR(0x723624);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B723628:{NFSU2_TR(0x723628);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72362a:{NFSU2_TR(0x72362a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L723640;}}
}
B72362c:L72362c:{c.instructions+=2;NFSU2_TR(0x72362c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72362f:{NFSU2_TR(0x72362f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723630:L723630:{c.instructions+=3;NFSU2_TR(0x723630);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B723633:{NFSU2_TR(0x723633);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B723635:{NFSU2_TR(0x723635);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72363a;}}
}
B723637:L723637:{c.instructions+=1;NFSU2_TR(0x723637);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(s32(s16(r2(U+0)))));
}
B72363a:L72363a:{c.instructions+=4;NFSU2_TR(0x72363a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72363b:{NFSU2_TR(0x72363b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72363c:{NFSU2_TR(0x72363c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B72363d:{NFSU2_TR(0x72363d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723630u);}goto L723630;}}
}
B72363f:L72363f:{c.instructions+=1;NFSU2_TR(0x72363f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723640:L723640:{c.instructions+=5;NFSU2_TR(0x723640);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B723644:{NFSU2_TR(0x723644);
w1(R+512,u8((r4(R+0))<(r4(R+24))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B723646:{NFSU2_TR(0x723646);
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
B723647:{NFSU2_TR(0x723647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723648:{NFSU2_TR(0x723648);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723649:L723649:{c.instructions+=2;NFSU2_TR(0x723649);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723650:{NFSU2_TR(0x723650);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723656;}}
}
B723652:L723652:{c.instructions+=3;NFSU2_TR(0x723652);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723654:{NFSU2_TR(0x723654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723655:{NFSU2_TR(0x723655);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723656:L723656:{c.instructions+=6;NFSU2_TR(0x723656);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72365a:{NFSU2_TR(0x72365a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b43ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B723661:{NFSU2_TR(0x723661);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723664:{NFSU2_TR(0x723664);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B723667:{NFSU2_TR(0x723667);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B723669:{NFSU2_TR(0x723669);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72366a:L72366a:{c.instructions+=2;NFSU2_TR(0x72366a);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723671:{NFSU2_TR(0x723671);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723677;}}
}
B723673:L723673:{c.instructions+=3;NFSU2_TR(0x723673);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723675:{NFSU2_TR(0x723675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723676:{NFSU2_TR(0x723676);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723677:L723677:{c.instructions+=2;NFSU2_TR(0x723677);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723678:{NFSU2_TR(0x723678);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72367dull));
TAIL_STATIC(0x721f99u,721);
}
B72367d:L72367d:{c.instructions+=3;NFSU2_TR(0x72367d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B723681:{NFSU2_TR(0x723681);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723682:{NFSU2_TR(0x723682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723687ull));
TAIL_STATIC(0x727e6bu,727);
}
B723687:L723687:{c.instructions+=3;NFSU2_TR(0x723687);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b43ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B72368f:{NFSU2_TR(0x72368f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723690:{NFSU2_TR(0x723690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723695ull));
TAIL_STATIC(0x721fa7u,721);
}
B723695:L723695:{c.instructions+=3;NFSU2_TR(0x723695);
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
B723697:{NFSU2_TR(0x723697);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723698:{NFSU2_TR(0x723698);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723699:L723699:{c.instructions+=16;NFSU2_TR(0x723699);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72369a:{NFSU2_TR(0x72369a);
__builtin_memmove((R+20),(R+16),4);
}
B72369c:{NFSU2_TR(0x72369c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72369d:{NFSU2_TR(0x72369d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72369e:{NFSU2_TR(0x72369e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72369f:{NFSU2_TR(0x72369f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7236a0:{NFSU2_TR(0x7236a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7236a3:{NFSU2_TR(0x7236a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b43ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7236aa:{NFSU2_TR(0x7236aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7236ab:{NFSU2_TR(0x7236ab);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7236ad:{NFSU2_TR(0x7236ad);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7236ae:{NFSU2_TR(0x7236ae);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7236b0:{NFSU2_TR(0x7236b0);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7236b3:{NFSU2_TR(0x7236b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7236b6:{NFSU2_TR(0x7236b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7236b9:{NFSU2_TR(0x7236b9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7236da;}}
}
B7236bb:L7236bb:{c.instructions+=2;NFSU2_TR(0x7236bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7236bf:{NFSU2_TR(0x7236bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7236c2:L7236c2:{c.instructions+=3;NFSU2_TR(0x7236c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B7236c4:{NFSU2_TR(0x7236c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7236c7:{NFSU2_TR(0x7236c7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L7236cd;}}
}
B7236c9:L7236c9:{c.instructions+=1;NFSU2_TR(0x7236c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7236cd:L7236cd:{c.instructions+=3;NFSU2_TR(0x7236cd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7236d0:{NFSU2_TR(0x7236d0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B7236d1:{NFSU2_TR(0x7236d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7236c2u);}goto L7236c2;}}
}
B7236d3:L7236d3:{c.instructions+=3;NFSU2_TR(0x7236d3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7236d5:{NFSU2_TR(0x7236d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7236d8:{NFSU2_TR(0x7236d8);
if(r1(R+518)){{goto L723726;}}
}
B7236da:L7236da:{c.instructions+=5;NFSU2_TR(0x7236da);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B7236de:{NFSU2_TR(0x7236de);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7236e1:{NFSU2_TR(0x7236e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7236e4:{NFSU2_TR(0x7236e4);
u8 U[12];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7236e8:{NFSU2_TR(0x7236e8);
if(r1(R+518)){{goto L72370a;}}
}
B7236ea:L7236ea:{c.instructions+=7;NFSU2_TR(0x7236ea);
__builtin_memmove((R+4),gp(0x8b40e8),4);
}
B7236f0:{NFSU2_TR(0x7236f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b40ecull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7236f7:{NFSU2_TR(0x7236f7);
u8 U[2];
__builtin_memmove((U+0),(R+28),2);
s2(u32(r4(R+4)),r2(U+0));
}
B7236fa:{NFSU2_TR(0x7236fa);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7236fe:{NFSU2_TR(0x7236fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B723701:{NFSU2_TR(0x723701);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723704:{NFSU2_TR(0x723704);
s4(0x8b40e8,u32(u32(m4(0x8b40e8))+u32(u32(0x1ull))));
}
B72370a:L72370a:{c.instructions+=8;NFSU2_TR(0x72370a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72370c:{NFSU2_TR(0x72370c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B723710:{NFSU2_TR(0x723710);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B723711:{NFSU2_TR(0x723711);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B723715:{NFSU2_TR(0x723715);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B723718:{NFSU2_TR(0x723718);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B72371c:{NFSU2_TR(0x72371c);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+4)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
}
B723720:{NFSU2_TR(0x723720);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L723726;}}
}
B723722:L723722:{c.instructions+=1;NFSU2_TR(0x723722);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B723726:L723726:{c.instructions+=5;NFSU2_TR(0x723726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B723729:{NFSU2_TR(0x723729);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B72372d:{NFSU2_TR(0x72372d);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+12))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B723730:{NFSU2_TR(0x723730);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723733:{NFSU2_TR(0x723733);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72373c;}}
}
B723735:L723735:{c.instructions+=2;NFSU2_TR(0x723735);
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
B723737:{NFSU2_TR(0x723737);
{goto L7237ea;}
}
B72373c:L72373c:{c.instructions+=21;NFSU2_TR(0x72373c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72373f:{NFSU2_TR(0x72373f);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B723743:{NFSU2_TR(0x723743);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B723746:{NFSU2_TR(0x723746);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B723749:{NFSU2_TR(0x723749);
u8 U[12];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B72374d:{NFSU2_TR(0x72374d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B723750:{NFSU2_TR(0x723750);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B723752:{NFSU2_TR(0x723752);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B723754:{NFSU2_TR(0x723754);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B723756:{NFSU2_TR(0x723756);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B723759:{NFSU2_TR(0x723759);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72375c:{NFSU2_TR(0x72375c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B72375f:{NFSU2_TR(0x72375f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B723761:{NFSU2_TR(0x723761);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B723763:{NFSU2_TR(0x723763);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+28),(U+0),2);
}
B723766:{NFSU2_TR(0x723766);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B723767:{NFSU2_TR(0x723767);
u8 U[2];
__builtin_memmove((U+0),(R+28),2);
s2(u32(r4(R+4)),r2(U+0));
}
B72376a:{NFSU2_TR(0x72376a);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))+u32(u32(0x1ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B72376f:{NFSU2_TR(0x72376f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723773:{NFSU2_TR(0x723773);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723776:{NFSU2_TR(0x723776);
{goto L72377b;}
}
B723778:L723778:{c.instructions+=1;NFSU2_TR(0x723778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72377b:L72377b:{c.instructions+=3;NFSU2_TR(0x72377b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B72377d:{NFSU2_TR(0x72377d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B723780:{NFSU2_TR(0x723780);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L723786;}}
}
B723782:L723782:{c.instructions+=1;NFSU2_TR(0x723782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723786:L723786:{c.instructions+=5;NFSU2_TR(0x723786);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723789:{NFSU2_TR(0x723789);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B72378c:{NFSU2_TR(0x72378c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B723790:{NFSU2_TR(0x723790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723793:{NFSU2_TR(0x723793);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72379e;}}
}
B723795:L723795:{c.instructions+=3;NFSU2_TR(0x723795);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B723799:{NFSU2_TR(0x723799);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72379c:{NFSU2_TR(0x72379c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723778u);}goto L723778;}}
}
B72379e:L72379e:{c.instructions+=2;NFSU2_TR(0x72379e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7237a2:{NFSU2_TR(0x7237a2);
if(r1(R+518)){{goto L7237c1;}}
}
B7237a4:L7237a4:{c.instructions+=11;NFSU2_TR(0x7237a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7237a8:{NFSU2_TR(0x7237a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7237ab:{NFSU2_TR(0x7237ab);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B7237ad:{NFSU2_TR(0x7237ad);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B7237af:{NFSU2_TR(0x7237af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B7237b2:{NFSU2_TR(0x7237b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7237b5:{NFSU2_TR(0x7237b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7237b8:{NFSU2_TR(0x7237b8);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B7237ba:{NFSU2_TR(0x7237ba);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B7237bc:{NFSU2_TR(0x7237bc);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B7237be:{NFSU2_TR(0x7237be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7237c1:L7237c1:{c.instructions+=3;NFSU2_TR(0x7237c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7237c5:{NFSU2_TR(0x7237c5);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w1(R+523,sborrow<u16>(r2(U+2),r2(R+0)));
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
}
B7237c8:{NFSU2_TR(0x7237c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7237cf;}}
}
B7237ca:L7237ca:{c.instructions+=1;NFSU2_TR(0x7237ca);
u8 U[2];
w2(U+0,u16(0x0ull));
s2(u32(r4(R+4)),r2(U+0));
}
B7237cf:L7237cf:{c.instructions+=8;NFSU2_TR(0x7237cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7237d2:{NFSU2_TR(0x7237d2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7237d4:{NFSU2_TR(0x7237d4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+4),(U+0),2);
}
B7237d7:{NFSU2_TR(0x7237d7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7237d8:{NFSU2_TR(0x7237d8);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B7237db:{NFSU2_TR(0x7237db);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B7237df:{NFSU2_TR(0x7237df);
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
B7237e1:{NFSU2_TR(0x7237e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7237e8;}}
}
B7237e3:L7237e3:{c.instructions+=2;NFSU2_TR(0x7237e3);
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
B7237e6:{NFSU2_TR(0x7237e6);
{goto L7237ea;}
}
B7237e8:L7237e8:{c.instructions+=1;NFSU2_TR(0x7237e8);
__builtin_memmove((R+0),(R+8),4);
}
B7237ea:L7237ea:{c.instructions+=5;NFSU2_TR(0x7237ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7237eb:{NFSU2_TR(0x7237eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7237ec:{NFSU2_TR(0x7237ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7237ed:{NFSU2_TR(0x7237ed);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7237ee:{NFSU2_TR(0x7237ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7237ef:L7237ef:{c.instructions+=5;NFSU2_TR(0x7237ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7237f3:{NFSU2_TR(0x7237f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b43ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7237fa:{NFSU2_TR(0x7237fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B7237fe:{NFSU2_TR(0x7237fe);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B723802:{NFSU2_TR(0x723802);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72382e;}}
}
B723804:L723804:{c.instructions+=4;NFSU2_TR(0x723804);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B723808:{NFSU2_TR(0x723808);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B72380b:{NFSU2_TR(0x72380b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72380f:{NFSU2_TR(0x72380f);
if(r1(R+518)){{goto L72382e;}}
}
B723811:L723811:{c.instructions+=6;NFSU2_TR(0x723811);
__builtin_memmove((R+0),gp(0x8b40e8),4);
}
B723816:{NFSU2_TR(0x723816);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b40ecull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72381d:{NFSU2_TR(0x72381d);
u8 U[2];
w1(R+512,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))&u32(u16(0x0ull))));
s2(u32(r4(R+0)),r2(U+0));
}
B723821:{NFSU2_TR(0x723821);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B723825:{NFSU2_TR(0x723825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723828:{NFSU2_TR(0x723828);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8b40e8),u32(0x1ull)));
s4(0x8b40e8,u32(u32(m4(0x8b40e8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8b40e8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b40e8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b40e8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72382e:L72382e:{c.instructions+=1;NFSU2_TR(0x72382e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72382f:L72382f:{c.instructions+=4;NFSU2_TR(0x72382f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723830:{NFSU2_TR(0x723830);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B723832:{NFSU2_TR(0x723832);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b40e8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+28)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B723838:{NFSU2_TR(0x723838);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L723872;}}
}
B72383a:L72383a:{c.instructions+=2;NFSU2_TR(0x72383a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72383b:{NFSU2_TR(0x72383b);
w4(R+24,u32(0x8b40f0ull));
}
B723840:L723840:{c.instructions+=6;NFSU2_TR(0x723840);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B723845:{NFSU2_TR(0x723845);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B723849:{NFSU2_TR(0x723849);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b43ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B723850:{NFSU2_TR(0x723850);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723853:{NFSU2_TR(0x723853);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B723855:{NFSU2_TR(0x723855);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723860;}}
}
B723857:L723857:{c.instructions+=2;NFSU2_TR(0x723857);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723858:{NFSU2_TR(0x723858);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72385bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72385b:L72385b:{c.instructions+=2;NFSU2_TR(0x72385b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72385e:{NFSU2_TR(0x72385e);
{goto L723865;}
}
B723860:L723860:{c.instructions+=1;NFSU2_TR(0x723860);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723863ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B723863:L723863:{c.instructions+=2;NFSU2_TR(0x723863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723864:{NFSU2_TR(0x723864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723865:L723865:{c.instructions+=4;NFSU2_TR(0x723865);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B723866:{NFSU2_TR(0x723866);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B723869:{NFSU2_TR(0x723869);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b40e8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72386f:{NFSU2_TR(0x72386f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723840u);}goto L723840;}}
}
B723871:L723871:{c.instructions+=1;NFSU2_TR(0x723871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723872:L723872:{c.instructions+=3;NFSU2_TR(0x723872);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8b40e8,u32(u32(m4(0x8b40e8))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8b40e8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b40e8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b40e8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B723879:{NFSU2_TR(0x723879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72387a:{NFSU2_TR(0x72387a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72387b:L72387b:{c.instructions+=2;NFSU2_TR(0x72387b);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723882:{NFSU2_TR(0x723882);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723888;}}
}
B723884:L723884:{c.instructions+=3;NFSU2_TR(0x723884);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723886:{NFSU2_TR(0x723886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723887:{NFSU2_TR(0x723887);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723888:L723888:{c.instructions+=6;NFSU2_TR(0x723888);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72388c:{NFSU2_TR(0x72388c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72388d:{NFSU2_TR(0x72388d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72388e:{NFSU2_TR(0x72388e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b43ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B723895:{NFSU2_TR(0x723895);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B723897:{NFSU2_TR(0x723897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72389cull));
{goto L723e1e;}
}
B72389c:L72389c:{c.instructions+=2;NFSU2_TR(0x72389c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72389d:{NFSU2_TR(0x72389d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7238a2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72382fu);}goto L72382f;}
}
B7238a2:L7238a2:{c.instructions+=4;NFSU2_TR(0x7238a2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7238a4:{NFSU2_TR(0x7238a4);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7238a7:{NFSU2_TR(0x7238a7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+24)),r4(U+0));
}
B7238ad:{NFSU2_TR(0x7238ad);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7238cd;}}
}
B7238af:L7238af:{c.instructions+=2;NFSU2_TR(0x7238af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7238b0:{NFSU2_TR(0x7238b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7238b3:L7238b3:{c.instructions+=3;NFSU2_TR(0x7238b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7238b5:{NFSU2_TR(0x7238b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7238b7:{NFSU2_TR(0x7238b7);
if(r1(R+518)){{goto L7238c0;}}
}
B7238b9:L7238b9:{c.instructions+=2;NFSU2_TR(0x7238b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7238ba:{NFSU2_TR(0x7238ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7238bfull));
TAIL_STATIC(0x724894u,724);
}
B7238bf:L7238bf:{c.instructions+=1;NFSU2_TR(0x7238bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7238c0:L7238c0:{c.instructions+=5;NFSU2_TR(0x7238c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7238c4:{NFSU2_TR(0x7238c4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7238c5:{NFSU2_TR(0x7238c5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7238c8:{NFSU2_TR(0x7238c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7238ca:{NFSU2_TR(0x7238ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7238b3u);}goto L7238b3;}}
}
B7238cc:L7238cc:{c.instructions+=1;NFSU2_TR(0x7238cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7238cd:L7238cd:{c.instructions+=4;NFSU2_TR(0x7238cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7238ce:{NFSU2_TR(0x7238ce);
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
B7238d0:{NFSU2_TR(0x7238d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7238d1:{NFSU2_TR(0x7238d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7238d2:L7238d2:{c.instructions+=7;NFSU2_TR(0x7238d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7238d3:{NFSU2_TR(0x7238d3);
__builtin_memmove((R+20),(R+16),4);
}
B7238d5:{NFSU2_TR(0x7238d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B7238d8:{NFSU2_TR(0x7238d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7238dc:{NFSU2_TR(0x7238dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7238e0:{NFSU2_TR(0x7238e0);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7238e7:{NFSU2_TR(0x7238e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7238ee;}}
}
B7238e9:L7238e9:{c.instructions+=4;NFSU2_TR(0x7238e9);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7238eb:{NFSU2_TR(0x7238eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7238ec:{NFSU2_TR(0x7238ec);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7238ed:{NFSU2_TR(0x7238ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7238ee:L7238ee:{c.instructions+=6;NFSU2_TR(0x7238ee);
__builtin_memmove((R+0),gp(0x8b4494),4);
}
B7238f3:{NFSU2_TR(0x7238f3);
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
B7238f5:{NFSU2_TR(0x7238f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7238f6:{NFSU2_TR(0x7238f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7238f9:{NFSU2_TR(0x7238f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7238fc:{NFSU2_TR(0x7238fc);
if(r1(R+518)){{goto L723900;}}
}
B7238fe:L7238fe:{c.instructions+=1;NFSU2_TR(0x7238fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723900ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B723900:L723900:{c.instructions+=3;NFSU2_TR(0x723900);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723901:{NFSU2_TR(0x723901);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723902:{NFSU2_TR(0x723902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723907ull));
TAIL_STATIC(0x7212afu,721);
}
B723907:L723907:{c.instructions+=4;NFSU2_TR(0x723907);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72390a:{NFSU2_TR(0x72390a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72390d:{NFSU2_TR(0x72390d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72390f:{NFSU2_TR(0x72390f);
if(r1(R+518)){{goto L72392a;}}
}
B723911:L723911:{c.instructions+=5;NFSU2_TR(0x723911);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B723913:{NFSU2_TR(0x723913);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723914:{NFSU2_TR(0x723914);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723917:{NFSU2_TR(0x723917);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723918:{NFSU2_TR(0x723918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72391dull));
TAIL_STATIC(0x721ba3u,721);
}
B72391d:L72391d:{c.instructions+=5;NFSU2_TR(0x72391d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72391f:{NFSU2_TR(0x72391f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723920:{NFSU2_TR(0x723920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723921:{NFSU2_TR(0x723921);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723924:{NFSU2_TR(0x723924);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72392a;}}
}
B723926:L723926:{c.instructions+=2;NFSU2_TR(0x723926);
__builtin_memmove((R+28),(R+0),4);
}
B723928:{NFSU2_TR(0x723928);
{goto L72398d;}
}
B72392a:L72392a:{c.instructions+=3;NFSU2_TR(0x72392a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72392d:{NFSU2_TR(0x72392d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72392f:{NFSU2_TR(0x72392f);
if(r1(R+518)){{goto L72394a;}}
}
B723931:L723931:{c.instructions+=5;NFSU2_TR(0x723931);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B723933:{NFSU2_TR(0x723933);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723934:{NFSU2_TR(0x723934);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723937:{NFSU2_TR(0x723937);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723938:{NFSU2_TR(0x723938);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72393dull));
TAIL_STATIC(0x721ba3u,721);
}
B72393d:L72393d:{c.instructions+=5;NFSU2_TR(0x72393d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72393f:{NFSU2_TR(0x72393f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723940:{NFSU2_TR(0x723940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723941:{NFSU2_TR(0x723941);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723944:{NFSU2_TR(0x723944);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72394a;}}
}
B723946:L723946:{c.instructions+=2;NFSU2_TR(0x723946);
__builtin_memmove((R+28),(R+0),4);
}
B723948:{NFSU2_TR(0x723948);
{goto L72398d;}
}
B72394a:L72394a:{c.instructions+=3;NFSU2_TR(0x72394a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72394e:{NFSU2_TR(0x72394e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B723951:{NFSU2_TR(0x723951);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723960;}}
}
B723953:L723953:{c.instructions+=2;NFSU2_TR(0x723953);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723956:{NFSU2_TR(0x723956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72395bull));
TAIL_STATIC(0x721b27u,721);
}
B72395b:L72395b:{c.instructions+=3;NFSU2_TR(0x72395b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72395c:{NFSU2_TR(0x72395c);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B72395e:{NFSU2_TR(0x72395e);
{goto L723963;}
}
B723960:L723960:{c.instructions+=1;NFSU2_TR(0x723960);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B723963:L723963:{c.instructions+=2;NFSU2_TR(0x723963);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B723967:{NFSU2_TR(0x723967);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723974;}}
}
B723969:L723969:{c.instructions+=2;NFSU2_TR(0x723969);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72396c:{NFSU2_TR(0x72396c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723971ull));
TAIL_STATIC(0x721b27u,721);
}
B723971:L723971:{c.instructions+=2;NFSU2_TR(0x723971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723972:{NFSU2_TR(0x723972);
{goto L723977;}
}
B723974:L723974:{c.instructions+=1;NFSU2_TR(0x723974);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723977:L723977:{c.instructions+=5;NFSU2_TR(0x723977);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72397a:{NFSU2_TR(0x72397a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72397c:{NFSU2_TR(0x72397c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72397d:{NFSU2_TR(0x72397d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72397e:{NFSU2_TR(0x72397e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723981ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B723981:L723981:{c.instructions+=4;NFSU2_TR(0x723981);
__builtin_memmove((R+28),(R+0),4);
}
B723983:{NFSU2_TR(0x723983);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B723986:{NFSU2_TR(0x723986);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B723988:{NFSU2_TR(0x723988);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7239af;}}
}
B72398a:L72398a:{c.instructions+=2;NFSU2_TR(0x72398a);
u8 U[4];
w4(U+0,u32(0xfffffffaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72398c:{NFSU2_TR(0x72398c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72398d:L72398d:{c.instructions+=2;NFSU2_TR(0x72398d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B723991:{NFSU2_TR(0x723991);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72399c;}}
}
B723993:L723993:{c.instructions+=2;NFSU2_TR(0x723993);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723996:{NFSU2_TR(0x723996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72399bull));
TAIL_STATIC(0x721c4du,721);
}
B72399b:L72399b:{c.instructions+=1;NFSU2_TR(0x72399b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72399c:L72399c:{c.instructions+=2;NFSU2_TR(0x72399c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7239a0:{NFSU2_TR(0x7239a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7239ab;}}
}
B7239a2:L7239a2:{c.instructions+=2;NFSU2_TR(0x7239a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7239a5:{NFSU2_TR(0x7239a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7239aaull));
TAIL_STATIC(0x721c4du,721);
}
B7239aa:L7239aa:{c.instructions+=1;NFSU2_TR(0x7239aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7239ab:L7239ab:{c.instructions+=2;NFSU2_TR(0x7239ab);
__builtin_memmove((R+0),(R+28),4);
}
B7239ad:{NFSU2_TR(0x7239ad);
{goto L723a17;}
}
B7239af:L7239af:{c.instructions+=2;NFSU2_TR(0x7239af);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7239b1:{NFSU2_TR(0x7239b1);
if(r1(R+518)){{goto L7239d9;}}
}
B7239b3:L7239b3:{c.instructions+=4;NFSU2_TR(0x7239b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7239b6:{NFSU2_TR(0x7239b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7239b7:{NFSU2_TR(0x7239b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7239b8:{NFSU2_TR(0x7239b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7239bdull));
TAIL_STATIC(0x71feccu,71f);
}
B7239bd:L7239bd:{c.instructions+=4;NFSU2_TR(0x7239bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7239c0:{NFSU2_TR(0x7239c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7239c4:{NFSU2_TR(0x7239c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7239c7:{NFSU2_TR(0x7239c7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7239d9;}}
}
B7239c9:L7239c9:{c.instructions+=5;NFSU2_TR(0x7239c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7239cc:{NFSU2_TR(0x7239cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7239cf:{NFSU2_TR(0x7239cf);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B7239d1:{NFSU2_TR(0x7239d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7239d2:{NFSU2_TR(0x7239d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7239d7ull));
TAIL_STATIC(0x727f71u,727);
}
B7239d7:L7239d7:{c.instructions+=2;NFSU2_TR(0x7239d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7239d8:{NFSU2_TR(0x7239d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7239d9:L7239d9:{c.instructions+=2;NFSU2_TR(0x7239d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7239dd:{NFSU2_TR(0x7239dd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7239f9;}}
}
B7239df:L7239df:{c.instructions+=2;NFSU2_TR(0x7239df);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7239e1:{NFSU2_TR(0x7239e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7239e9;}}
}
B7239e3:L7239e3:{c.instructions+=2;NFSU2_TR(0x7239e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7239e7:{NFSU2_TR(0x7239e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7239f9;}}
}
B7239e9:L7239e9:{c.instructions+=5;NFSU2_TR(0x7239e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7239ec:{NFSU2_TR(0x7239ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7239ef:{NFSU2_TR(0x7239ef);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B7239f1:{NFSU2_TR(0x7239f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7239f2:{NFSU2_TR(0x7239f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7239f7ull));
TAIL_STATIC(0x727f71u,727);
}
B7239f7:L7239f7:{c.instructions+=2;NFSU2_TR(0x7239f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7239f8:{NFSU2_TR(0x7239f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7239f9:L7239f9:{c.instructions+=8;NFSU2_TR(0x7239f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7239fc:{NFSU2_TR(0x7239fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7239ff:{NFSU2_TR(0x7239ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B723a02:{NFSU2_TR(0x723a02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723a05:{NFSU2_TR(0x723a05);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B723a07:{NFSU2_TR(0x723a07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a08:{NFSU2_TR(0x723a08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a09:{NFSU2_TR(0x723a09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723a0eull));
TAIL_STATIC(0x7212e5u,721);
}
B723a0e:L723a0e:{c.instructions+=3;NFSU2_TR(0x723a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723a11:{NFSU2_TR(0x723a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723a14:{NFSU2_TR(0x723a14);
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
B723a17:L723a17:{c.instructions+=5;NFSU2_TR(0x723a17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723a18:{NFSU2_TR(0x723a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B723a19:{NFSU2_TR(0x723a19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723a1a:{NFSU2_TR(0x723a1a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723a1b:{NFSU2_TR(0x723a1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723a1c:L723a1c:{c.instructions+=6;NFSU2_TR(0x723a1c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a1d:{NFSU2_TR(0x723a1d);
__builtin_memmove((R+20),(R+16),4);
}
B723a1f:{NFSU2_TR(0x723a1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a20:{NFSU2_TR(0x723a20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a21:{NFSU2_TR(0x723a21);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723a28:{NFSU2_TR(0x723a28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723a2e;}}
}
B723a2a:L723a2a:{c.instructions+=2;NFSU2_TR(0x723a2a);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a2c:{NFSU2_TR(0x723a2c);
{goto L723a3d;}
}
B723a2e:L723a2e:{c.instructions+=2;NFSU2_TR(0x723a2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723a31:{NFSU2_TR(0x723a31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723a36ull));
TAIL_STATIC(0x725480u,725);
}
B723a36:L723a36:{c.instructions+=3;NFSU2_TR(0x723a36);
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
B723a38:{NFSU2_TR(0x723a38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723a39:{NFSU2_TR(0x723a39);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L723a40;}}
}
B723a3b:L723a3b:{c.instructions+=1;NFSU2_TR(0x723a3b);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a3d:L723a3d:{c.instructions+=3;NFSU2_TR(0x723a3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723a3e:{NFSU2_TR(0x723a3e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723a3f:{NFSU2_TR(0x723a3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723a40:L723a40:{c.instructions+=11;NFSU2_TR(0x723a40);
__builtin_memmove((R+4),gp(0x8b466c),4);
}
B723a46:{NFSU2_TR(0x723a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B723a49:{NFSU2_TR(0x723a49);
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
B723a4c:{NFSU2_TR(0x723a4c);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723a50:{NFSU2_TR(0x723a50);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B723a56:{NFSU2_TR(0x723a56);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B723a59:{NFSU2_TR(0x723a59);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723a5c:{NFSU2_TR(0x723a5c);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B723a5f:{NFSU2_TR(0x723a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723a62:{NFSU2_TR(0x723a62);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723a63:{NFSU2_TR(0x723a63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723a64:L723a64:{c.instructions+=9;NFSU2_TR(0x723a64);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a65:{NFSU2_TR(0x723a65);
__builtin_memmove((R+20),(R+16),4);
}
B723a67:{NFSU2_TR(0x723a67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a68:{NFSU2_TR(0x723a68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a69:{NFSU2_TR(0x723a69);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723a70:{NFSU2_TR(0x723a70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a71:{NFSU2_TR(0x723a71);
u8 U[4];
w4(U+0,u32(0xfffffff9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a73:{NFSU2_TR(0x723a73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723a74:{NFSU2_TR(0x723a74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723a7e;}}
}
B723a76:L723a76:{c.instructions+=3;NFSU2_TR(0x723a76);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a78:{NFSU2_TR(0x723a78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723a79:{NFSU2_TR(0x723a79);
{goto L723b1c;}
}
B723a7e:L723a7e:{c.instructions+=2;NFSU2_TR(0x723a7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723a81:{NFSU2_TR(0x723a81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723a86ull));
TAIL_STATIC(0x725480u,725);
}
B723a86:L723a86:{c.instructions+=4;NFSU2_TR(0x723a86);
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
B723a88:{NFSU2_TR(0x723a88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723a89:{NFSU2_TR(0x723a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723a8c:{NFSU2_TR(0x723a8c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L723b1a;}}
}
B723a92:L723a92:{c.instructions+=5;NFSU2_TR(0x723a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723a96:{NFSU2_TR(0x723a96);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B723a99:{NFSU2_TR(0x723a99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a9a:{NFSU2_TR(0x723a9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723a9b:{NFSU2_TR(0x723a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723aa0ull));
TAIL_STATIC(0x727fbdu,727);
}
B723aa0:L723aa0:{c.instructions+=4;NFSU2_TR(0x723aa0);
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
B723aa2:{NFSU2_TR(0x723aa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723aa3:{NFSU2_TR(0x723aa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723aa4:{NFSU2_TR(0x723aa4);
if(r1(R+518)){{goto L723b1a;}}
}
B723aa6:L723aa6:{c.instructions+=2;NFSU2_TR(0x723aa6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723aa7:{NFSU2_TR(0x723aa7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723aa8:L723aa8:{c.instructions+=6;NFSU2_TR(0x723aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723aab:{NFSU2_TR(0x723aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B723aae:{NFSU2_TR(0x723aae);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B723ab1:{NFSU2_TR(0x723ab1);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b466c))));
}
B723ab7:{NFSU2_TR(0x723ab7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B723abb:{NFSU2_TR(0x723abb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L723b06;}}
}
B723abd:L723abd:{c.instructions+=2;NFSU2_TR(0x723abd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723abe:{NFSU2_TR(0x723abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723ac3ull));
TAIL_STATIC(0x7254b4u,725);
}
B723ac3:L723ac3:{c.instructions+=4;NFSU2_TR(0x723ac3);
__builtin_memmove((R+8),(R+0),4);
}
B723ac5:{NFSU2_TR(0x723ac5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B723ac7:{NFSU2_TR(0x723ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723ac8:{NFSU2_TR(0x723ac8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L723b06;}}
}
B723aca:L723aca:{c.instructions+=3;NFSU2_TR(0x723aca);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B723ad1:{NFSU2_TR(0x723ad1);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(U+0))<(u16(0x10ull))));
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x10ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B723ad5:{NFSU2_TR(0x723ad5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L723afb;}}
}
B723ad7:L723ad7:{c.instructions+=15;NFSU2_TR(0x723ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723ada:{NFSU2_TR(0x723ada);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B723ade:{NFSU2_TR(0x723ade);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B723ae0:{NFSU2_TR(0x723ae0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B723ae3:{NFSU2_TR(0x723ae3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B723ae4:{NFSU2_TR(0x723ae4);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x723ae4);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x723ae4);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B723ae6:{NFSU2_TR(0x723ae6);
w4(R+4,u32(r2(R+4)));
}
B723ae9:{NFSU2_TR(0x723ae9);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B723aec:{NFSU2_TR(0x723aec);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B723aed:{NFSU2_TR(0x723aed);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x723aed);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x723aed);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B723aef:{NFSU2_TR(0x723aef);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B723af3:{NFSU2_TR(0x723af3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B723af6:{NFSU2_TR(0x723af6);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B723af7:{NFSU2_TR(0x723af7);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x723af7);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x723af7);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B723af9:{NFSU2_TR(0x723af9);
{goto L723b00;}
}
B723afb:L723afb:{c.instructions+=1;NFSU2_TR(0x723afb);
w4(R+0,u32(0x7fffffffull));
}
B723b00:L723b00:{c.instructions+=2;NFSU2_TR(0x723b00);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B723b02:{NFSU2_TR(0x723b02);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L723b06;}}
}
B723b04:L723b04:{c.instructions+=1;NFSU2_TR(0x723b04);
__builtin_memmove((R+28),(R+0),4);
}
B723b06:L723b06:{c.instructions+=4;NFSU2_TR(0x723b06);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B723b09:{NFSU2_TR(0x723b09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b0a:{NFSU2_TR(0x723b0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723b0d:{NFSU2_TR(0x723b0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723b12ull));
TAIL_STATIC(0x727fbdu,727);
}
B723b12:L723b12:{c.instructions+=4;NFSU2_TR(0x723b12);
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
B723b14:{NFSU2_TR(0x723b14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723b15:{NFSU2_TR(0x723b15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723b16:{NFSU2_TR(0x723b16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723aa8u);}goto L723aa8;}}
}
B723b18:L723b18:{c.instructions+=2;NFSU2_TR(0x723b18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723b19:{NFSU2_TR(0x723b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B723b1a:L723b1a:{c.instructions+=1;NFSU2_TR(0x723b1a);
__builtin_memmove((R+0),(R+28),4);
}
B723b1c:L723b1c:{c.instructions+=3;NFSU2_TR(0x723b1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723b1d:{NFSU2_TR(0x723b1d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723b1e:{NFSU2_TR(0x723b1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723b1f:L723b1f:{c.instructions+=4;NFSU2_TR(0x723b1f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b20:{NFSU2_TR(0x723b20);
__builtin_memmove((R+20),(R+16),4);
}
B723b22:{NFSU2_TR(0x723b22);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723b29:{NFSU2_TR(0x723b29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723b30;}}
}
B723b2b:L723b2b:{c.instructions+=4;NFSU2_TR(0x723b2b);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b2d:{NFSU2_TR(0x723b2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723b2e:{NFSU2_TR(0x723b2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B723b2f:{NFSU2_TR(0x723b2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723b30:L723b30:{c.instructions+=4;NFSU2_TR(0x723b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b31:{NFSU2_TR(0x723b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B723b34:{NFSU2_TR(0x723b34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b35:{NFSU2_TR(0x723b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723b3aull));
TAIL_STATIC(0x72768fu,727);
}
B723b3a:L723b3a:{c.instructions+=3;NFSU2_TR(0x723b3a);
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
B723b3c:{NFSU2_TR(0x723b3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723b3d:{NFSU2_TR(0x723b3d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L723b44;}}
}
B723b3f:L723b3f:{c.instructions+=3;NFSU2_TR(0x723b3f);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b41:{NFSU2_TR(0x723b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723b42:{NFSU2_TR(0x723b42);
{goto L723bbe;}
}
B723b44:L723b44:{c.instructions+=6;NFSU2_TR(0x723b44);
__builtin_memmove((R+0),gp(0x8b4670),4);
}
B723b49:{NFSU2_TR(0x723b49);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b4a:{NFSU2_TR(0x723b4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723b4d:{NFSU2_TR(0x723b4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B723b50:{NFSU2_TR(0x723b50);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B723b53:{NFSU2_TR(0x723b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723b58ull));
TAIL_STATIC(0x727669u,727);
}
B723b58:L723b58:{c.instructions+=5;NFSU2_TR(0x723b58);
__builtin_memmove((R+12),(R+0),4);
}
B723b5a:{NFSU2_TR(0x723b5a);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B723b5c:{NFSU2_TR(0x723b5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723b5d:{NFSU2_TR(0x723b5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723b5e:{NFSU2_TR(0x723b5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723b65;}}
}
B723b60:L723b60:{c.instructions+=3;NFSU2_TR(0x723b60);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b62:{NFSU2_TR(0x723b62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723b63:{NFSU2_TR(0x723b63);
{goto L723bbd;}
}
B723b65:L723b65:{c.instructions+=2;NFSU2_TR(0x723b65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b66:{NFSU2_TR(0x723b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723b6bull));
TAIL_STATIC(0x721f99u,721);
}
B723b6b:L723b6b:{c.instructions+=9;NFSU2_TR(0x723b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B723b6e:{NFSU2_TR(0x723b6e);
__builtin_memmove((R+0),gp(0x8b4670),4);
}
B723b73:{NFSU2_TR(0x723b73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b75:{NFSU2_TR(0x723b75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723b78:{NFSU2_TR(0x723b78);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723b7b:{NFSU2_TR(0x723b7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b7c:{NFSU2_TR(0x723b7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b7d:{NFSU2_TR(0x723b7d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B723b80:{NFSU2_TR(0x723b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723b85ull));
TAIL_STATIC(0x727a46u,727);
}
B723b85:L723b85:{c.instructions+=4;NFSU2_TR(0x723b85);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B723b87:{NFSU2_TR(0x723b87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B723b8a:{NFSU2_TR(0x723b8a);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B723b8d:{NFSU2_TR(0x723b8d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L723bb5;}}
}
B723b8f:L723b8f:{c.instructions+=2;NFSU2_TR(0x723b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B723b92:{NFSU2_TR(0x723b92);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B723b95:L723b95:{c.instructions+=3;NFSU2_TR(0x723b95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B723b97:{NFSU2_TR(0x723b97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B723b99:{NFSU2_TR(0x723b99);
if(r1(R+518)){{goto L723ba9;}}
}
B723b9b:L723b9b:{c.instructions+=2;NFSU2_TR(0x723b9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723b9c:{NFSU2_TR(0x723b9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723ba1ull));
TAIL_STATIC(0x724894u,724);
}
B723ba1:L723ba1:{c.instructions+=3;NFSU2_TR(0x723ba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B723ba4:{NFSU2_TR(0x723ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723ba8:{NFSU2_TR(0x723ba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723ba9:L723ba9:{c.instructions+=5;NFSU2_TR(0x723ba9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B723bad:{NFSU2_TR(0x723bad);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B723bae:{NFSU2_TR(0x723bae);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B723bb1:{NFSU2_TR(0x723bb1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B723bb3:{NFSU2_TR(0x723bb3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723b95u);}goto L723b95;}}
}
B723bb5:L723bb5:{c.instructions+=1;NFSU2_TR(0x723bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723bbaull));
TAIL_STATIC(0x721fa7u,721);
}
B723bba:L723bba:{c.instructions+=2;NFSU2_TR(0x723bba);
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
B723bbc:{NFSU2_TR(0x723bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723bbd:L723bbd:{c.instructions+=1;NFSU2_TR(0x723bbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B723bbe:L723bbe:{c.instructions+=3;NFSU2_TR(0x723bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723bbf:{NFSU2_TR(0x723bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B723bc0:{NFSU2_TR(0x723bc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723bc1:L723bc1:{c.instructions+=6;NFSU2_TR(0x723bc1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723bc2:{NFSU2_TR(0x723bc2);
__builtin_memmove((R+20),(R+16),4);
}
B723bc4:{NFSU2_TR(0x723bc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723bc5:{NFSU2_TR(0x723bc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723bc6:{NFSU2_TR(0x723bc6);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723bcd:{NFSU2_TR(0x723bcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723bd4;}}
}
B723bcf:L723bcf:{c.instructions+=4;NFSU2_TR(0x723bcf);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723bd1:{NFSU2_TR(0x723bd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723bd2:{NFSU2_TR(0x723bd2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723bd3:{NFSU2_TR(0x723bd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723bd4:L723bd4:{c.instructions+=3;NFSU2_TR(0x723bd4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723bd5:{NFSU2_TR(0x723bd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723bd8:{NFSU2_TR(0x723bd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723bddull));
TAIL_STATIC(0x725480u,725);
}
B723bdd:L723bdd:{c.instructions+=4;NFSU2_TR(0x723bdd);
__builtin_memmove((R+28),(R+0),4);
}
B723bdf:{NFSU2_TR(0x723bdf);
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
B723be1:{NFSU2_TR(0x723be1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723be2:{NFSU2_TR(0x723be2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L723c3c;}}
}
B723be4:L723be4:{c.instructions+=5;NFSU2_TR(0x723be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723be8:{NFSU2_TR(0x723be8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B723beb:{NFSU2_TR(0x723beb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723bec:{NFSU2_TR(0x723bec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723bed:{NFSU2_TR(0x723bed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723bf2ull));
TAIL_STATIC(0x727fbdu,727);
}
B723bf2:L723bf2:{c.instructions+=4;NFSU2_TR(0x723bf2);
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
B723bf4:{NFSU2_TR(0x723bf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723bf5:{NFSU2_TR(0x723bf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723bf6:{NFSU2_TR(0x723bf6);
if(r1(R+518)){{goto L723c3c;}}
}
B723bf8:L723bf8:{c.instructions+=5;NFSU2_TR(0x723bf8);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B723bfb:{NFSU2_TR(0x723bfb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723bfc:{NFSU2_TR(0x723bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B723bff:{NFSU2_TR(0x723bff);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B723c05:{NFSU2_TR(0x723c05);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B723c08:L723c08:{c.instructions+=10;NFSU2_TR(0x723c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723c0b:{NFSU2_TR(0x723c0b);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723c0e:{NFSU2_TR(0x723c0e);
__builtin_memmove((R+4),gp(0x8b466c),4);
}
B723c14:{NFSU2_TR(0x723c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B723c17:{NFSU2_TR(0x723c17);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B723c1a:{NFSU2_TR(0x723c1a);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B723c1e:{NFSU2_TR(0x723c1e);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B723c21:{NFSU2_TR(0x723c21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723c22:{NFSU2_TR(0x723c22);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723c25:{NFSU2_TR(0x723c25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723c2aull));
TAIL_STATIC(0x725022u,725);
}
B723c2a:L723c2a:{c.instructions+=4;NFSU2_TR(0x723c2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B723c2d:{NFSU2_TR(0x723c2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723c2e:{NFSU2_TR(0x723c2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723c2f:{NFSU2_TR(0x723c2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723c34ull));
TAIL_STATIC(0x727fbdu,727);
}
B723c34:L723c34:{c.instructions+=3;NFSU2_TR(0x723c34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B723c37:{NFSU2_TR(0x723c37);
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
B723c39:{NFSU2_TR(0x723c39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723c08u);}goto L723c08;}}
}
B723c3b:L723c3b:{c.instructions+=1;NFSU2_TR(0x723c3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723c3c:L723c3c:{c.instructions+=4;NFSU2_TR(0x723c3c);
__builtin_memmove((R+0),(R+28),4);
}
B723c3e:{NFSU2_TR(0x723c3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723c3f:{NFSU2_TR(0x723c3f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723c40:{NFSU2_TR(0x723c40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723c41:L723c41:{c.instructions+=5;NFSU2_TR(0x723c41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723c42:{NFSU2_TR(0x723c42);
__builtin_memmove((R+20),(R+16),4);
}
B723c44:{NFSU2_TR(0x723c44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B723c47:{NFSU2_TR(0x723c47);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723c4e:{NFSU2_TR(0x723c4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723c55;}}
}
B723c50:L723c50:{c.instructions+=4;NFSU2_TR(0x723c50);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723c52:{NFSU2_TR(0x723c52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723c53:{NFSU2_TR(0x723c53);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723c54:{NFSU2_TR(0x723c54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723c55:L723c55:{c.instructions+=2;NFSU2_TR(0x723c55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723c58:{NFSU2_TR(0x723c58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723c5dull));
TAIL_STATIC(0x725480u,725);
}
B723c5d:L723c5d:{c.instructions+=4;NFSU2_TR(0x723c5d);
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
B723c5f:{NFSU2_TR(0x723c5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723c60:{NFSU2_TR(0x723c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723c63:{NFSU2_TR(0x723c63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L723cda;}}
}
B723c65:L723c65:{c.instructions+=5;NFSU2_TR(0x723c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723c69:{NFSU2_TR(0x723c69);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723c6c:{NFSU2_TR(0x723c6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723c6d:{NFSU2_TR(0x723c6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723c70:{NFSU2_TR(0x723c70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723c75ull));
TAIL_STATIC(0x727fbdu,727);
}
B723c75:L723c75:{c.instructions+=4;NFSU2_TR(0x723c75);
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
B723c77:{NFSU2_TR(0x723c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723c78:{NFSU2_TR(0x723c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723c79:{NFSU2_TR(0x723c79);
if(r1(R+518)){{goto L723cda;}}
}
B723c7b:L723c7b:{c.instructions+=3;NFSU2_TR(0x723c7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723c7c:{NFSU2_TR(0x723c7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723c7d:{NFSU2_TR(0x723c7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723c7e:L723c7e:{c.instructions+=7;NFSU2_TR(0x723c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723c81:{NFSU2_TR(0x723c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723c85:{NFSU2_TR(0x723c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B723c88:{NFSU2_TR(0x723c88);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B723c8b:{NFSU2_TR(0x723c8b);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b466c))));
}
B723c91:{NFSU2_TR(0x723c91);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B723c95:{NFSU2_TR(0x723c95);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L723cc5;}}
}
B723c97:L723c97:{c.instructions+=1;NFSU2_TR(0x723c97);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723c9a:L723c9a:{c.instructions+=8;NFSU2_TR(0x723c9a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B723c9d:{NFSU2_TR(0x723c9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B723ca0:{NFSU2_TR(0x723ca0);
__builtin_memmove((R+12),gp(0x8b466c),4);
}
B723ca6:{NFSU2_TR(0x723ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B723ca9:{NFSU2_TR(0x723ca9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B723cac:{NFSU2_TR(0x723cac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723cad:{NFSU2_TR(0x723cad);
u8 U[13];
w4(U+0,u32(u32(u32(0x5full))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B723cb1:{NFSU2_TR(0x723cb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723cb6ull));
TAIL_STATIC(0x724ccbu,724);
}
B723cb6:L723cb6:{c.instructions+=7;NFSU2_TR(0x723cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723cb9:{NFSU2_TR(0x723cb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B723cbd:{NFSU2_TR(0x723cbd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B723cbe:{NFSU2_TR(0x723cbe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B723cbf:{NFSU2_TR(0x723cbf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B723cc2:{NFSU2_TR(0x723cc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723cc3:{NFSU2_TR(0x723cc3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723c9au);}goto L723c9a;}}
}
B723cc5:L723cc5:{c.instructions+=4;NFSU2_TR(0x723cc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723cc8:{NFSU2_TR(0x723cc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723cc9:{NFSU2_TR(0x723cc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723ccc:{NFSU2_TR(0x723ccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723cd1ull));
TAIL_STATIC(0x727fbdu,727);
}
B723cd1:L723cd1:{c.instructions+=4;NFSU2_TR(0x723cd1);
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
B723cd3:{NFSU2_TR(0x723cd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723cd4:{NFSU2_TR(0x723cd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723cd5:{NFSU2_TR(0x723cd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723c7eu);}goto L723c7e;}}
}
B723cd7:L723cd7:{c.instructions+=3;NFSU2_TR(0x723cd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723cd8:{NFSU2_TR(0x723cd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723cd9:{NFSU2_TR(0x723cd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B723cda:L723cda:{c.instructions+=3;NFSU2_TR(0x723cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723cdd:{NFSU2_TR(0x723cdd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723cde:{NFSU2_TR(0x723cde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723cdf:L723cdf:{c.instructions+=5;NFSU2_TR(0x723cdf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723ce0:{NFSU2_TR(0x723ce0);
__builtin_memmove((R+20),(R+16),4);
}
B723ce2:{NFSU2_TR(0x723ce2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B723ce5:{NFSU2_TR(0x723ce5);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723cec:{NFSU2_TR(0x723cec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723cf3;}}
}
B723cee:L723cee:{c.instructions+=4;NFSU2_TR(0x723cee);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723cf0:{NFSU2_TR(0x723cf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723cf1:{NFSU2_TR(0x723cf1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723cf2:{NFSU2_TR(0x723cf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723cf3:L723cf3:{c.instructions+=2;NFSU2_TR(0x723cf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723cf6:{NFSU2_TR(0x723cf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723cfbull));
TAIL_STATIC(0x725480u,725);
}
B723cfb:L723cfb:{c.instructions+=4;NFSU2_TR(0x723cfb);
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
B723cfd:{NFSU2_TR(0x723cfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723cfe:{NFSU2_TR(0x723cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723d01:{NFSU2_TR(0x723d01);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L723d96;}}
}
B723d07:L723d07:{c.instructions+=5;NFSU2_TR(0x723d07);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B723d0b:{NFSU2_TR(0x723d0b);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B723d0e:{NFSU2_TR(0x723d0e);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B723d14:{NFSU2_TR(0x723d14);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B723d17:{NFSU2_TR(0x723d17);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L723d20;}}
}
B723d19:L723d19:{c.instructions+=1;NFSU2_TR(0x723d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B723d20:L723d20:{c.instructions+=5;NFSU2_TR(0x723d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723d24:{NFSU2_TR(0x723d24);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B723d27:{NFSU2_TR(0x723d27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723d28:{NFSU2_TR(0x723d28);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723d2b:{NFSU2_TR(0x723d2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723d30ull));
TAIL_STATIC(0x727fbdu,727);
}
B723d30:L723d30:{c.instructions+=4;NFSU2_TR(0x723d30);
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
B723d32:{NFSU2_TR(0x723d32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723d33:{NFSU2_TR(0x723d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723d34:{NFSU2_TR(0x723d34);
if(r1(R+518)){{goto L723d96;}}
}
B723d36:L723d36:{c.instructions+=2;NFSU2_TR(0x723d36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723d37:{NFSU2_TR(0x723d37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723d38:L723d38:{c.instructions+=7;NFSU2_TR(0x723d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723d3b:{NFSU2_TR(0x723d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B723d3e:{NFSU2_TR(0x723d3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B723d41:{NFSU2_TR(0x723d41);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x8b466c))));
}
B723d47:{NFSU2_TR(0x723d47);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B723d49:{NFSU2_TR(0x723d49);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B723d4d:{NFSU2_TR(0x723d4d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L723d82;}}
}
B723d4f:L723d4f:{c.instructions+=2;NFSU2_TR(0x723d4f);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B723d52:{NFSU2_TR(0x723d52);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B723d55:L723d55:{c.instructions+=16;NFSU2_TR(0x723d55);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B723d58:{NFSU2_TR(0x723d58);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723d5b:{NFSU2_TR(0x723d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B723d5e:{NFSU2_TR(0x723d5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B723d61:{NFSU2_TR(0x723d61);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B723d67:{NFSU2_TR(0x723d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B723d6a:{NFSU2_TR(0x723d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723d6d:{NFSU2_TR(0x723d6d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B723d6e:{NFSU2_TR(0x723d6e);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B723d71:{NFSU2_TR(0x723d71);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B723d72:{NFSU2_TR(0x723d72);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B723d73:{NFSU2_TR(0x723d73);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B723d75:{NFSU2_TR(0x723d75);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B723d78:{NFSU2_TR(0x723d78);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B723d7c:{NFSU2_TR(0x723d7c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B723d7e:{NFSU2_TR(0x723d7e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723d55u);}goto L723d55;}}
}
B723d80:L723d80:{c.instructions+=1;NFSU2_TR(0x723d80);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B723d82:L723d82:{c.instructions+=4;NFSU2_TR(0x723d82);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B723d85:{NFSU2_TR(0x723d85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723d86:{NFSU2_TR(0x723d86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723d89:{NFSU2_TR(0x723d89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723d8eull));
TAIL_STATIC(0x727fbdu,727);
}
B723d8e:L723d8e:{c.instructions+=4;NFSU2_TR(0x723d8e);
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
B723d90:{NFSU2_TR(0x723d90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723d91:{NFSU2_TR(0x723d91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723d92:{NFSU2_TR(0x723d92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723d38u);}goto L723d38;}}
}
B723d94:L723d94:{c.instructions+=2;NFSU2_TR(0x723d94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723d95:{NFSU2_TR(0x723d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723d96:L723d96:{c.instructions+=3;NFSU2_TR(0x723d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723d99:{NFSU2_TR(0x723d99);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723d9a:{NFSU2_TR(0x723d9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723d9b:L723d9b:{c.instructions+=5;NFSU2_TR(0x723d9b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723d9c:{NFSU2_TR(0x723d9c);
__builtin_memmove((R+20),(R+16),4);
}
B723d9e:{NFSU2_TR(0x723d9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723d9f:{NFSU2_TR(0x723d9f);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723da6:{NFSU2_TR(0x723da6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723dad;}}
}
B723da8:L723da8:{c.instructions+=4;NFSU2_TR(0x723da8);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723daa:{NFSU2_TR(0x723daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723dab:{NFSU2_TR(0x723dab);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723dac:{NFSU2_TR(0x723dac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723dad:L723dad:{c.instructions+=4;NFSU2_TR(0x723dad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723dae:{NFSU2_TR(0x723dae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723daf:{NFSU2_TR(0x723daf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723db2:{NFSU2_TR(0x723db2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723db7ull));
TAIL_STATIC(0x725480u,725);
}
B723db7:L723db7:{c.instructions+=4;NFSU2_TR(0x723db7);
__builtin_memmove((R+28),(R+0),4);
}
B723db9:{NFSU2_TR(0x723db9);
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
B723dbb:{NFSU2_TR(0x723dbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723dbc:{NFSU2_TR(0x723dbc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L723e14;}}
}
B723dbe:L723dbe:{c.instructions+=5;NFSU2_TR(0x723dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723dc2:{NFSU2_TR(0x723dc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B723dc5:{NFSU2_TR(0x723dc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723dc6:{NFSU2_TR(0x723dc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723dc7:{NFSU2_TR(0x723dc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723dccull));
TAIL_STATIC(0x727fbdu,727);
}
B723dcc:L723dcc:{c.instructions+=4;NFSU2_TR(0x723dcc);
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
B723dce:{NFSU2_TR(0x723dce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723dcf:{NFSU2_TR(0x723dcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723dd0:{NFSU2_TR(0x723dd0);
if(r1(R+518)){{goto L723e14;}}
}
B723dd2:L723dd2:{c.instructions+=1;NFSU2_TR(0x723dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B723dd5:L723dd5:{c.instructions+=8;NFSU2_TR(0x723dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723dd8:{NFSU2_TR(0x723dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B723ddb:{NFSU2_TR(0x723ddb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B723dde:{NFSU2_TR(0x723dde);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B723de4:{NFSU2_TR(0x723de4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
}
B723de9:{NFSU2_TR(0x723de9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B723dec:{NFSU2_TR(0x723dec);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B723dee:{NFSU2_TR(0x723dee);
if(r1(R+518)){{goto L723e1a;}}
}
B723df0:L723df0:{c.instructions+=3;NFSU2_TR(0x723df0);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B723df3:{NFSU2_TR(0x723df3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723df6:{NFSU2_TR(0x723df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723dfbull));
TAIL_STATIC(0x7277dau,727);
}
B723dfb:L723dfb:{c.instructions+=2;NFSU2_TR(0x723dfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723dfe:{NFSU2_TR(0x723dfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723e03ull));
TAIL_STATIC(0x724d0eu,724);
}
B723e03:L723e03:{c.instructions+=4;NFSU2_TR(0x723e03);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B723e06:{NFSU2_TR(0x723e06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723e07:{NFSU2_TR(0x723e07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723e08:{NFSU2_TR(0x723e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723e0dull));
TAIL_STATIC(0x727fbdu,727);
}
B723e0d:L723e0d:{c.instructions+=3;NFSU2_TR(0x723e0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B723e10:{NFSU2_TR(0x723e10);
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
B723e12:{NFSU2_TR(0x723e12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723dd5u);}goto L723dd5;}}
}
B723e14:L723e14:{c.instructions+=1;NFSU2_TR(0x723e14);
__builtin_memmove((R+0),(R+28),4);
}
B723e16:L723e16:{c.instructions+=4;NFSU2_TR(0x723e16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B723e17:{NFSU2_TR(0x723e17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723e18:{NFSU2_TR(0x723e18);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723e19:{NFSU2_TR(0x723e19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723e1a:L723e1a:{c.instructions+=2;NFSU2_TR(0x723e1a);
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
B723e1c:{NFSU2_TR(0x723e1c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723e16u);}goto L723e16;}
}
B723e1e:L723e1e:{c.instructions+=5;NFSU2_TR(0x723e1e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723e1f:{NFSU2_TR(0x723e1f);
__builtin_memmove((R+20),(R+16),4);
}
B723e21:{NFSU2_TR(0x723e21);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723e22:{NFSU2_TR(0x723e22);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723e29:{NFSU2_TR(0x723e29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723e30;}}
}
B723e2b:L723e2b:{c.instructions+=4;NFSU2_TR(0x723e2b);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723e2d:{NFSU2_TR(0x723e2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723e2e:{NFSU2_TR(0x723e2e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723e2f:{NFSU2_TR(0x723e2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723e30:L723e30:{c.instructions+=3;NFSU2_TR(0x723e30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723e31:{NFSU2_TR(0x723e31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723e34:{NFSU2_TR(0x723e34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723e39ull));
TAIL_STATIC(0x725480u,725);
}
B723e39:L723e39:{c.instructions+=4;NFSU2_TR(0x723e39);
__builtin_memmove((R+24),(R+0),4);
}
B723e3b:{NFSU2_TR(0x723e3b);
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
B723e3d:{NFSU2_TR(0x723e3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723e3e:{NFSU2_TR(0x723e3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L723e6b;}}
}
B723e40:L723e40:{c.instructions+=5;NFSU2_TR(0x723e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723e44:{NFSU2_TR(0x723e44);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B723e47:{NFSU2_TR(0x723e47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723e48:{NFSU2_TR(0x723e48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723e49:{NFSU2_TR(0x723e49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723e4eull));
TAIL_STATIC(0x727fbdu,727);
}
B723e4e:L723e4e:{c.instructions+=3;NFSU2_TR(0x723e4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723e4f:{NFSU2_TR(0x723e4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723e50:{NFSU2_TR(0x723e50);
{goto L723e67;}
}
B723e52:L723e52:{c.instructions+=2;NFSU2_TR(0x723e52);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723e55:{NFSU2_TR(0x723e55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723e5aull));
TAIL_STATIC(0x724cb0u,724);
}
B723e5a:L723e5a:{c.instructions+=4;NFSU2_TR(0x723e5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B723e5d:{NFSU2_TR(0x723e5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723e5e:{NFSU2_TR(0x723e5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723e5f:{NFSU2_TR(0x723e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723e64ull));
TAIL_STATIC(0x727fbdu,727);
}
B723e64:L723e64:{c.instructions+=1;NFSU2_TR(0x723e64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B723e67:L723e67:{c.instructions+=2;NFSU2_TR(0x723e67);
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
B723e69:{NFSU2_TR(0x723e69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723e52u);}goto L723e52;}}
}
B723e6b:L723e6b:{c.instructions+=4;NFSU2_TR(0x723e6b);
__builtin_memmove((R+0),(R+24),4);
}
B723e6d:{NFSU2_TR(0x723e6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723e6e:{NFSU2_TR(0x723e6e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723e6f:{NFSU2_TR(0x723e6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723e70:L723e70:{c.instructions+=8;NFSU2_TR(0x723e70);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723e76:{NFSU2_TR(0x723e76);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723e7a:{NFSU2_TR(0x723e7a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723e7d:{NFSU2_TR(0x723e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723e80:{NFSU2_TR(0x723e80);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B723e82:{NFSU2_TR(0x723e82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B723e84:{NFSU2_TR(0x723e84);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723e87:{NFSU2_TR(0x723e87);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L723e9c;}}
}
B723e89:L723e89:{c.instructions+=4;NFSU2_TR(0x723e89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B723e8c:{NFSU2_TR(0x723e8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723e8d:{NFSU2_TR(0x723e8d);
w4(R+4,u32(0x8b405cull));
}
B723e92:{NFSU2_TR(0x723e92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723e97ull));
TAIL_STATIC(0x71fea4u,71f);
}
B723e97:L723e97:{c.instructions+=2;NFSU2_TR(0x723e97);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B723e99:{NFSU2_TR(0x723e99);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B723e9c:L723e9c:{c.instructions+=1;NFSU2_TR(0x723e9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723e9d:L723e9d:{c.instructions+=6;NFSU2_TR(0x723e9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723e9e:{NFSU2_TR(0x723e9e);
__builtin_memmove((R+20),(R+16),4);
}
B723ea0:{NFSU2_TR(0x723ea0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723ea1:{NFSU2_TR(0x723ea1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723ea2:{NFSU2_TR(0x723ea2);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723ea9:{NFSU2_TR(0x723ea9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723eb0;}}
}
B723eab:L723eab:{c.instructions+=4;NFSU2_TR(0x723eab);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723ead:{NFSU2_TR(0x723ead);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723eae:{NFSU2_TR(0x723eae);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B723eaf:{NFSU2_TR(0x723eaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B723eb0:L723eb0:{c.instructions+=3;NFSU2_TR(0x723eb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723eb1:{NFSU2_TR(0x723eb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723eb4:{NFSU2_TR(0x723eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723eb9ull));
TAIL_STATIC(0x722424u,722);
}
B723eb9:L723eb9:{c.instructions+=4;NFSU2_TR(0x723eb9);
__builtin_memmove((R+28),(R+0),4);
}
B723ebb:{NFSU2_TR(0x723ebb);
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
B723ebd:{NFSU2_TR(0x723ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723ebe:{NFSU2_TR(0x723ebe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723ec8;}}
}
B723ec0:L723ec0:{c.instructions+=3;NFSU2_TR(0x723ec0);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723ec2:{NFSU2_TR(0x723ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B723ec3:{NFSU2_TR(0x723ec3);
TAIL_STATIC(0x72403bu,724);
}
B723ec8:L723ec8:{c.instructions+=5;NFSU2_TR(0x723ec8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723ec9:{NFSU2_TR(0x723ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B723ecc:{NFSU2_TR(0x723ecc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B723ecf:{NFSU2_TR(0x723ecf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723ed0:{NFSU2_TR(0x723ed0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723ef6;}}
}
B723ed2:L723ed2:{c.instructions+=2;NFSU2_TR(0x723ed2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
__builtin_memmove((R+24),(U+0),4);
}
B723ed8:{NFSU2_TR(0x723ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B723edf:L723edf:{c.instructions+=4;NFSU2_TR(0x723edf);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723ee2:{NFSU2_TR(0x723ee2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723ee3:{NFSU2_TR(0x723ee3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B723ee6:{NFSU2_TR(0x723ee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723eebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723e70u);}goto L723e70;}
}
B723eeb:L723eeb:{c.instructions+=4;NFSU2_TR(0x723eeb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B723eee:{NFSU2_TR(0x723eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B723ef1:{NFSU2_TR(0x723ef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723ef2:{NFSU2_TR(0x723ef2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723edfu);}goto L723edf;}}
}
B723ef4:L723ef4:{c.instructions+=1;NFSU2_TR(0x723ef4);
{goto L723f0d;}
}
B723ef6:L723ef6:{c.instructions+=6;NFSU2_TR(0x723ef6);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723ef9:{NFSU2_TR(0x723ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B723efc:{NFSU2_TR(0x723efc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723efd:{NFSU2_TR(0x723efd);
u8 U[12];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B723f04:{NFSU2_TR(0x723f04);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B723f07:{NFSU2_TR(0x723f07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723f0cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723e70u);}goto L723e70;}
}
B723f0c:L723f0c:{c.instructions+=1;NFSU2_TR(0x723f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723f0d:L723f0d:{c.instructions+=2;NFSU2_TR(0x723f0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B723f10:{NFSU2_TR(0x723f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723f15ull));
TAIL_STATIC(0x725480u,725);
}
B723f15:L723f15:{c.instructions+=4;NFSU2_TR(0x723f15);
__builtin_memmove((R+28),(R+0),4);
}
B723f17:{NFSU2_TR(0x723f17);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B723f19:{NFSU2_TR(0x723f19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723f1a:{NFSU2_TR(0x723f1a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x724037u,724);}
}
B723f20:L723f20:{c.instructions+=2;NFSU2_TR(0x723f20);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B723f23:{NFSU2_TR(0x723f23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L723fbf;}}
}
B723f29:L723f29:{c.instructions+=7;NFSU2_TR(0x723f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723f2d:{NFSU2_TR(0x723f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B723f30:{NFSU2_TR(0x723f30);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B723f33:{NFSU2_TR(0x723f33);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b466c))));
}
B723f39:{NFSU2_TR(0x723f39);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B723f3d:{NFSU2_TR(0x723f3d);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B723f41:{NFSU2_TR(0x723f41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x724037u,724);}
}
B723f47:L723f47:{c.instructions+=1;NFSU2_TR(0x723f47);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B723f4a:L723f4a:{c.instructions+=10;NFSU2_TR(0x723f4a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B723f4d:{NFSU2_TR(0x723f4d);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723f50:{NFSU2_TR(0x723f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B723f53:{NFSU2_TR(0x723f53);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B723f56:{NFSU2_TR(0x723f56);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x8b466c))));
}
B723f5c:{NFSU2_TR(0x723f5c);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723f5f:{NFSU2_TR(0x723f5f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B723f61:{NFSU2_TR(0x723f61);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B723f63:{NFSU2_TR(0x723f63);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B723f66:{NFSU2_TR(0x723f66);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L723f85;}}
}
B723f68:L723f68:{c.instructions+=8;NFSU2_TR(0x723f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B723f6b:{NFSU2_TR(0x723f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B723f6e:{NFSU2_TR(0x723f6e);
{u32 ea_=u32(u32(8487092u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723f74:{NFSU2_TR(0x723f74);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B723f77:{NFSU2_TR(0x723f77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723f78:{NFSU2_TR(0x723f78);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B723f7c:{NFSU2_TR(0x723f7c);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B723f7f:{NFSU2_TR(0x723f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723f84ull));
TAIL_STATIC(0x724f5du,724);
}
B723f84:L723f84:{c.instructions+=1;NFSU2_TR(0x723f84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723f85:L723f85:{c.instructions+=6;NFSU2_TR(0x723f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B723f88:{NFSU2_TR(0x723f88);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B723f8c:{NFSU2_TR(0x723f8c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B723f8d:{NFSU2_TR(0x723f8d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B723f8e:{NFSU2_TR(0x723f8e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B723f91:{NFSU2_TR(0x723f91);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723f4au);}goto L723f4a;}}
}
B723f93:L723f93:{c.instructions+=2;NFSU2_TR(0x723f93);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B723f97:{NFSU2_TR(0x723f97);
if(r1(R+518)){TAIL_STATIC(0x724037u,724);}
}
B723f9d:L723f9d:{c.instructions+=3;NFSU2_TR(0x723f9d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B723f9f:{NFSU2_TR(0x723f9f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+24)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B723fa5:{NFSU2_TR(0x723fa5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x724037u,724);}
}
B723fab:L723fab:{c.instructions+=3;NFSU2_TR(0x723fab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723fac:{NFSU2_TR(0x723fac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B723fad:{NFSU2_TR(0x723fad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x723fb2ull));
TAIL_STATIC(0x725022u,725);
}
B723fb2:L723fb2:{c.instructions+=5;NFSU2_TR(0x723fb2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B723fb3:{NFSU2_TR(0x723fb3);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B723fb9:{NFSU2_TR(0x723fb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723fba:{NFSU2_TR(0x723fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B723fbb:{NFSU2_TR(0x723fbb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x723fabu);}goto L723fab;}}
}
B723fbd:L723fbd:{c.instructions+=1;NFSU2_TR(0x723fbd);
TAIL_STATIC(0x724037u,724);
}
B723fbf:L723fbf:{c.instructions+=9;NFSU2_TR(0x723fbf);
__builtin_memmove((R+24),gp(0x8b466c),4);
}
B723fc5:{NFSU2_TR(0x723fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B723fc8:{NFSU2_TR(0x723fc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B723fcb:{NFSU2_TR(0x723fcb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B723fcd:{NFSU2_TR(0x723fcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B723fd1:{NFSU2_TR(0x723fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B723fd4:{NFSU2_TR(0x723fd4);
u8 U[13];
w4(U+0,u32(u32(u32(0x7c68e6ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(s32(s8(r1(U+12)))));
}
B723fdc:{NFSU2_TR(0x723fdc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffff80ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B723fdf:{NFSU2_TR(0x723fdf);
if(r1(R+518)){TAIL_STATIC(0x724037u,724);}
}
B723fe1:L723fe1:{c.instructions+=11;NFSU2_TR(0x723fe1);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B723fe6:{NFSU2_TR(0x723fe6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B723fe8:{NFSU2_TR(0x723fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B723feb:{NFSU2_TR(0x723feb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B723fee:{NFSU2_TR(0x723fee);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B723ff0:{NFSU2_TR(0x723ff0);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B723ff3:{NFSU2_TR(0x723ff3);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723ff6:{NFSU2_TR(0x723ff6);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B723ff9:{NFSU2_TR(0x723ff9);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B723ffb:{NFSU2_TR(0x723ffb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B723ffd:{NFSU2_TR(0x723ffd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
TAIL_STATIC(0x724000u,724);
}
XIT:NFSU2_TR_EXIT(0x723,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
