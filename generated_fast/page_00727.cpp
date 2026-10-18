#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_71f(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_725(u8* __restrict R,Cpu& c);
u32 body_726(u8* __restrict R,Cpu& c);
u32 body_728(u8* __restrict R,Cpu& c);
u32 body_72a(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x727,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x727,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_727(u8* __restrict R,Cpu& c);
u32 page_727(Cpu& c){return body_727(c.regs.data(),c);}
__attribute__((noinline)) u32 body_727(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x727000:goto L727000;
case 0x727001:c.instructions+=2;goto B727001;
case 0x727002:c.instructions+=1;goto B727002;
case 0x727003:goto L727003;
case 0x727004:c.instructions+=4;goto B727004;
case 0x727008:c.instructions+=3;goto B727008;
case 0x72700a:c.instructions+=2;goto B72700a;
case 0x72700b:c.instructions+=1;goto B72700b;
case 0x727010:goto L727010;
case 0x727012:c.instructions+=1;goto B727012;
case 0x727017:goto L727017;
case 0x72701a:c.instructions+=4;goto B72701a;
case 0x72701d:c.instructions+=3;goto B72701d;
case 0x727020:c.instructions+=2;goto B727020;
case 0x727021:c.instructions+=1;goto B727021;
case 0x727030:goto L727030;
case 0x727031:c.instructions+=9;goto B727031;
case 0x727033:c.instructions+=8;goto B727033;
case 0x727034:c.instructions+=7;goto B727034;
case 0x727035:c.instructions+=6;goto B727035;
case 0x727036:c.instructions+=5;goto B727036;
case 0x727039:c.instructions+=4;goto B727039;
case 0x72703c:c.instructions+=3;goto B72703c;
case 0x72703e:c.instructions+=2;goto B72703e;
case 0x727043:c.instructions+=1;goto B727043;
case 0x727049:goto L727049;
case 0x72704c:c.instructions+=1;goto B72704c;
case 0x72704e:goto L72704e;
case 0x72704f:c.instructions+=4;goto B72704f;
case 0x727050:c.instructions+=3;goto B727050;
case 0x727053:c.instructions+=2;goto B727053;
case 0x727056:c.instructions+=1;goto B727056;
case 0x727058:goto L727058;
case 0x72705a:c.instructions+=6;goto B72705a;
case 0x72705d:c.instructions+=5;goto B72705d;
case 0x727060:c.instructions+=4;goto B727060;
case 0x727063:c.instructions+=3;goto B727063;
case 0x727066:c.instructions+=2;goto B727066;
case 0x727069:c.instructions+=1;goto B727069;
case 0x72706b:goto L72706b;
case 0x72706e:c.instructions+=1;goto B72706e;
case 0x727070:goto L727070;
case 0x727072:c.instructions+=3;goto B727072;
case 0x727075:c.instructions+=2;goto B727075;
case 0x727078:c.instructions+=1;goto B727078;
case 0x72707a:goto L72707a;
case 0x72707c:c.instructions+=3;goto B72707c;
case 0x72707f:c.instructions+=2;goto B72707f;
case 0x727082:c.instructions+=1;goto B727082;
case 0x727084:goto L727084;
case 0x727085:c.instructions+=4;goto B727085;
case 0x727086:c.instructions+=3;goto B727086;
case 0x727087:c.instructions+=2;goto B727087;
case 0x727088:c.instructions+=1;goto B727088;
case 0x7270c9:goto L7270c9;
case 0x7270cf:c.instructions+=1;goto B7270cf;
case 0x7270d1:goto L7270d1;
case 0x7270d3:c.instructions+=1;goto B7270d3;
case 0x7270d6:goto L7270d6;
case 0x7270dc:c.instructions+=1;goto B7270dc;
case 0x7270de:goto L7270de;
case 0x7270e1:c.instructions+=1;goto B7270e1;
case 0x7270e4:goto L7270e4;
case 0x7270ea:c.instructions+=1;goto B7270ea;
case 0x7270ec:goto L7270ec;
case 0x7270ee:goto L7270ee;
case 0x7270ef:c.instructions+=4;goto B7270ef;
case 0x7270f0:c.instructions+=3;goto B7270f0;
case 0x7270f1:c.instructions+=2;goto B7270f1;
case 0x7270f2:c.instructions+=1;goto B7270f2;
case 0x7270f3:goto L7270f3;
case 0x7270f8:c.instructions+=1;goto B7270f8;
case 0x7270fa:goto L7270fa;
case 0x7270fd:c.instructions+=1;goto B7270fd;
case 0x7270ff:goto L7270ff;
case 0x727101:c.instructions+=2;goto B727101;
case 0x727104:c.instructions+=1;goto B727104;
case 0x727105:goto L727105;
case 0x72710a:c.instructions+=1;goto B72710a;
case 0x72710c:goto L72710c;
case 0x72710f:c.instructions+=1;goto B72710f;
case 0x727111:goto L727111;
case 0x727114:c.instructions+=2;goto B727114;
case 0x727117:c.instructions+=1;goto B727117;
case 0x72711a:goto L72711a;
case 0x72711f:c.instructions+=1;goto B72711f;
case 0x727121:goto L727121;
case 0x727124:c.instructions+=1;goto B727124;
case 0x727126:goto L727126;
case 0x727128:c.instructions+=2;goto B727128;
case 0x72712b:c.instructions+=1;goto B72712b;
case 0x72712e:goto L72712e;
case 0x727133:goto L727133;
case 0x727134:c.instructions+=1;goto B727134;
case 0x727139:goto L727139;
case 0x72713d:c.instructions+=5;goto B72713d;
case 0x727141:c.instructions+=4;goto B727141;
case 0x727144:c.instructions+=3;goto B727144;
case 0x72714b:c.instructions+=2;goto B72714b;
case 0x72714c:c.instructions+=1;goto B72714c;
case 0x727151:goto L727151;
case 0x727154:c.instructions+=2;goto B727154;
case 0x727156:c.instructions+=1;goto B727156;
case 0x72715b:goto L72715b;
case 0x72715d:c.instructions+=2;goto B72715d;
case 0x72715e:c.instructions+=1;goto B72715e;
case 0x72715f:goto L72715f;
case 0x727160:c.instructions+=1;goto B727160;
case 0x727165:goto L727165;
case 0x727169:c.instructions+=3;goto B727169;
case 0x72716c:c.instructions+=2;goto B72716c;
case 0x72716f:c.instructions+=1;goto B72716f;
case 0x727174:goto L727174;
case 0x727175:c.instructions+=3;goto B727175;
case 0x727176:c.instructions+=2;goto B727176;
case 0x727178:c.instructions+=1;goto B727178;
case 0x72717d:goto L72717d;
case 0x72717f:c.instructions+=2;goto B72717f;
case 0x727180:c.instructions+=1;goto B727180;
case 0x727181:goto L727181;
case 0x727182:c.instructions+=22;goto B727182;
case 0x727186:c.instructions+=21;goto B727186;
case 0x72718c:c.instructions+=20;goto B72718c;
case 0x72718d:c.instructions+=19;goto B72718d;
case 0x72718e:c.instructions+=18;goto B72718e;
case 0x72718f:c.instructions+=17;goto B72718f;
case 0x727192:c.instructions+=16;goto B727192;
case 0x727194:c.instructions+=15;goto B727194;
case 0x727197:c.instructions+=14;goto B727197;
case 0x727198:c.instructions+=13;goto B727198;
case 0x727199:c.instructions+=12;goto B727199;
case 0x72719a:c.instructions+=11;goto B72719a;
case 0x72719b:c.instructions+=10;goto B72719b;
case 0x72719c:c.instructions+=9;goto B72719c;
case 0x72719f:c.instructions+=8;goto B72719f;
case 0x7271a1:c.instructions+=7;goto B7271a1;
case 0x7271a3:c.instructions+=6;goto B7271a3;
case 0x7271a4:c.instructions+=5;goto B7271a4;
case 0x7271a7:c.instructions+=4;goto B7271a7;
case 0x7271ad:c.instructions+=3;goto B7271ad;
case 0x7271af:c.instructions+=2;goto B7271af;
case 0x7271b1:c.instructions+=1;goto B7271b1;
case 0x7271b7:goto L7271b7;
case 0x7271b9:goto L7271b9;
case 0x7271ba:c.instructions+=1;goto B7271ba;
case 0x7271c0:goto L7271c0;
case 0x7271c2:goto L7271c2;
case 0x7271c4:c.instructions+=4;goto B7271c4;
case 0x7271ca:c.instructions+=3;goto B7271ca;
case 0x7271d0:c.instructions+=2;goto B7271d0;
case 0x7271d1:c.instructions+=1;goto B7271d1;
case 0x7271d3:goto L7271d3;
case 0x7271d5:c.instructions+=6;goto B7271d5;
case 0x7271d8:c.instructions+=5;goto B7271d8;
case 0x7271db:c.instructions+=4;goto B7271db;
case 0x7271dc:c.instructions+=3;goto B7271dc;
case 0x7271dd:c.instructions+=2;goto B7271dd;
case 0x7271de:c.instructions+=1;goto B7271de;
case 0x7271e0:goto L7271e0;
case 0x7271e4:c.instructions+=61;goto B7271e4;
case 0x7271eb:c.instructions+=60;goto B7271eb;
case 0x7271ed:c.instructions+=59;goto B7271ed;
case 0x7271ee:c.instructions+=58;goto B7271ee;
case 0x7271f5:c.instructions+=57;goto B7271f5;
case 0x7271f7:c.instructions+=56;goto B7271f7;
case 0x7271f8:c.instructions+=55;goto B7271f8;
case 0x7271fb:c.instructions+=54;goto B7271fb;
case 0x7271fe:c.instructions+=53;goto B7271fe;
case 0x727201:c.instructions+=52;goto B727201;
case 0x727204:c.instructions+=51;goto B727204;
case 0x727207:c.instructions+=50;goto B727207;
case 0x72720e:c.instructions+=49;goto B72720e;
case 0x727211:c.instructions+=48;goto B727211;
case 0x727214:c.instructions+=47;goto B727214;
case 0x72721b:c.instructions+=46;goto B72721b;
case 0x72721e:c.instructions+=45;goto B72721e;
case 0x727221:c.instructions+=44;goto B727221;
case 0x727224:c.instructions+=43;goto B727224;
case 0x727227:c.instructions+=42;goto B727227;
case 0x72722a:c.instructions+=41;goto B72722a;
case 0x72722d:c.instructions+=40;goto B72722d;
case 0x727230:c.instructions+=39;goto B727230;
case 0x727233:c.instructions+=38;goto B727233;
case 0x727236:c.instructions+=37;goto B727236;
case 0x72723d:c.instructions+=36;goto B72723d;
case 0x727240:c.instructions+=35;goto B727240;
case 0x727243:c.instructions+=34;goto B727243;
case 0x727246:c.instructions+=33;goto B727246;
case 0x727249:c.instructions+=32;goto B727249;
case 0x72724c:c.instructions+=31;goto B72724c;
case 0x72724f:c.instructions+=30;goto B72724f;
case 0x727252:c.instructions+=29;goto B727252;
case 0x727255:c.instructions+=28;goto B727255;
case 0x727258:c.instructions+=27;goto B727258;
case 0x72725b:c.instructions+=26;goto B72725b;
case 0x72725e:c.instructions+=25;goto B72725e;
case 0x727261:c.instructions+=24;goto B727261;
case 0x727264:c.instructions+=23;goto B727264;
case 0x727267:c.instructions+=22;goto B727267;
case 0x72726a:c.instructions+=21;goto B72726a;
case 0x72726d:c.instructions+=20;goto B72726d;
case 0x727273:c.instructions+=19;goto B727273;
case 0x727279:c.instructions+=18;goto B727279;
case 0x727283:c.instructions+=17;goto B727283;
case 0x727289:c.instructions+=16;goto B727289;
case 0x72728f:c.instructions+=15;goto B72728f;
case 0x727295:c.instructions+=14;goto B727295;
case 0x72729b:c.instructions+=13;goto B72729b;
case 0x7272a1:c.instructions+=12;goto B7272a1;
case 0x7272a7:c.instructions+=11;goto B7272a7;
case 0x7272ad:c.instructions+=10;goto B7272ad;
case 0x7272b3:c.instructions+=9;goto B7272b3;
case 0x7272b9:c.instructions+=8;goto B7272b9;
case 0x7272bf:c.instructions+=7;goto B7272bf;
case 0x7272c5:c.instructions+=6;goto B7272c5;
case 0x7272cb:c.instructions+=5;goto B7272cb;
case 0x7272d1:c.instructions+=4;goto B7272d1;
case 0x7272db:c.instructions+=3;goto B7272db;
case 0x7272e1:c.instructions+=2;goto B7272e1;
case 0x7272e4:c.instructions+=1;goto B7272e4;
case 0x7272e9:goto L7272e9;
case 0x7272ec:c.instructions+=2;goto B7272ec;
case 0x7272ef:c.instructions+=1;goto B7272ef;
case 0x7272f1:goto L7272f1;
case 0x7272f4:c.instructions+=5;goto B7272f4;
case 0x7272f7:c.instructions+=4;goto B7272f7;
case 0x7272fb:c.instructions+=3;goto B7272fb;
case 0x7272fe:c.instructions+=2;goto B7272fe;
case 0x727305:c.instructions+=1;goto B727305;
case 0x72730b:goto L72730b;
case 0x72730f:c.instructions+=6;goto B72730f;
case 0x727313:c.instructions+=5;goto B727313;
case 0x727317:c.instructions+=4;goto B727317;
case 0x72731a:c.instructions+=3;goto B72731a;
case 0x72731e:c.instructions+=2;goto B72731e;
case 0x727321:c.instructions+=1;goto B727321;
case 0x727326:goto L727326;
case 0x72732c:c.instructions+=1;goto B72732c;
case 0x727332:goto L727332;
case 0x727338:c.instructions+=1;goto B727338;
case 0x72733e:goto L72733e;
case 0x727344:c.instructions+=6;goto B727344;
case 0x727347:c.instructions+=5;goto B727347;
case 0x72734e:c.instructions+=4;goto B72734e;
case 0x727355:c.instructions+=3;goto B727355;
case 0x727358:c.instructions+=2;goto B727358;
case 0x72735f:c.instructions+=1;goto B72735f;
case 0x727361:goto L727361;
case 0x727367:c.instructions+=3;goto B727367;
case 0x72736b:c.instructions+=2;goto B72736b;
case 0x727372:c.instructions+=1;goto B727372;
case 0x727377:goto L727377;
case 0x72737d:c.instructions+=1;goto B72737d;
case 0x72737f:goto L72737f;
case 0x727385:c.instructions+=3;goto B727385;
case 0x727389:c.instructions+=2;goto B727389;
case 0x727390:c.instructions+=1;goto B727390;
case 0x727392:goto L727392;
case 0x727398:c.instructions+=1;goto B727398;
case 0x72739a:goto L72739a;
case 0x7273a0:c.instructions+=3;goto B7273a0;
case 0x7273a4:c.instructions+=2;goto B7273a4;
case 0x7273ab:c.instructions+=1;goto B7273ab;
case 0x7273ad:goto L7273ad;
case 0x7273b3:c.instructions+=1;goto B7273b3;
case 0x7273b5:goto L7273b5;
case 0x7273bb:c.instructions+=3;goto B7273bb;
case 0x7273bf:c.instructions+=2;goto B7273bf;
case 0x7273c6:c.instructions+=1;goto B7273c6;
case 0x7273c8:goto L7273c8;
case 0x7273ce:c.instructions+=1;goto B7273ce;
case 0x7273d0:goto L7273d0;
case 0x7273d6:c.instructions+=3;goto B7273d6;
case 0x7273da:c.instructions+=2;goto B7273da;
case 0x7273e1:c.instructions+=1;goto B7273e1;
case 0x7273e3:goto L7273e3;
case 0x7273e9:c.instructions+=1;goto B7273e9;
case 0x7273eb:goto L7273eb;
case 0x7273f1:c.instructions+=3;goto B7273f1;
case 0x7273f5:c.instructions+=2;goto B7273f5;
case 0x7273fc:c.instructions+=1;goto B7273fc;
case 0x7273fe:goto L7273fe;
case 0x727404:c.instructions+=1;goto B727404;
case 0x727406:goto L727406;
case 0x727409:c.instructions+=2;goto B727409;
case 0x72740a:c.instructions+=1;goto B72740a;
case 0x72740f:goto L72740f;
case 0x727411:c.instructions+=2;goto B727411;
case 0x727412:c.instructions+=1;goto B727412;
case 0x727418:goto L727418;
case 0x72741a:goto L72741a;
case 0x72741d:goto L72741d;
case 0x727420:c.instructions+=124;goto B727420;
case 0x727423:c.instructions+=123;goto B727423;
case 0x727426:c.instructions+=122;goto B727426;
case 0x727429:c.instructions+=121;goto B727429;
case 0x72742c:c.instructions+=120;goto B72742c;
case 0x72742f:c.instructions+=119;goto B72742f;
case 0x727432:c.instructions+=118;goto B727432;
case 0x727435:c.instructions+=117;goto B727435;
case 0x727438:c.instructions+=116;goto B727438;
case 0x72743b:c.instructions+=115;goto B72743b;
case 0x72743e:c.instructions+=114;goto B72743e;
case 0x727441:c.instructions+=113;goto B727441;
case 0x727444:c.instructions+=112;goto B727444;
case 0x727447:c.instructions+=111;goto B727447;
case 0x72744a:c.instructions+=110;goto B72744a;
case 0x72744d:c.instructions+=109;goto B72744d;
case 0x727450:c.instructions+=108;goto B727450;
case 0x727453:c.instructions+=107;goto B727453;
case 0x727456:c.instructions+=106;goto B727456;
case 0x727459:c.instructions+=105;goto B727459;
case 0x72745c:c.instructions+=104;goto B72745c;
case 0x72745f:c.instructions+=103;goto B72745f;
case 0x727462:c.instructions+=102;goto B727462;
case 0x727465:c.instructions+=101;goto B727465;
case 0x727468:c.instructions+=100;goto B727468;
case 0x72746b:c.instructions+=99;goto B72746b;
case 0x72746f:c.instructions+=98;goto B72746f;
case 0x727472:c.instructions+=97;goto B727472;
case 0x727476:c.instructions+=96;goto B727476;
case 0x72747a:c.instructions+=95;goto B72747a;
case 0x72747e:c.instructions+=94;goto B72747e;
case 0x727484:c.instructions+=93;goto B727484;
case 0x727486:c.instructions+=92;goto B727486;
case 0x727489:c.instructions+=91;goto B727489;
case 0x72748c:c.instructions+=90;goto B72748c;
case 0x72748f:c.instructions+=89;goto B72748f;
case 0x727492:c.instructions+=88;goto B727492;
case 0x727498:c.instructions+=87;goto B727498;
case 0x72749a:c.instructions+=86;goto B72749a;
case 0x72749d:c.instructions+=85;goto B72749d;
case 0x7274a0:c.instructions+=84;goto B7274a0;
case 0x7274a6:c.instructions+=83;goto B7274a6;
case 0x7274a8:c.instructions+=82;goto B7274a8;
case 0x7274ab:c.instructions+=81;goto B7274ab;
case 0x7274ae:c.instructions+=80;goto B7274ae;
case 0x7274b4:c.instructions+=79;goto B7274b4;
case 0x7274b7:c.instructions+=78;goto B7274b7;
case 0x7274ba:c.instructions+=77;goto B7274ba;
case 0x7274c0:c.instructions+=76;goto B7274c0;
case 0x7274c3:c.instructions+=75;goto B7274c3;
case 0x7274c9:c.instructions+=74;goto B7274c9;
case 0x7274cc:c.instructions+=73;goto B7274cc;
case 0x7274d2:c.instructions+=72;goto B7274d2;
case 0x7274d5:c.instructions+=71;goto B7274d5;
case 0x7274db:c.instructions+=70;goto B7274db;
case 0x7274de:c.instructions+=69;goto B7274de;
case 0x7274e4:c.instructions+=68;goto B7274e4;
case 0x7274e7:c.instructions+=67;goto B7274e7;
case 0x7274ea:c.instructions+=66;goto B7274ea;
case 0x7274f0:c.instructions+=65;goto B7274f0;
case 0x7274f2:c.instructions+=64;goto B7274f2;
case 0x7274f5:c.instructions+=63;goto B7274f5;
case 0x7274f8:c.instructions+=62;goto B7274f8;
case 0x7274fb:c.instructions+=61;goto B7274fb;
case 0x7274fe:c.instructions+=60;goto B7274fe;
case 0x727501:c.instructions+=59;goto B727501;
case 0x727504:c.instructions+=58;goto B727504;
case 0x72750a:c.instructions+=57;goto B72750a;
case 0x72750c:c.instructions+=56;goto B72750c;
case 0x72750f:c.instructions+=55;goto B72750f;
case 0x727512:c.instructions+=54;goto B727512;
case 0x727515:c.instructions+=53;goto B727515;
case 0x727519:c.instructions+=52;goto B727519;
case 0x72751d:c.instructions+=51;goto B72751d;
case 0x727520:c.instructions+=50;goto B727520;
case 0x727523:c.instructions+=49;goto B727523;
case 0x727527:c.instructions+=48;goto B727527;
case 0x72752a:c.instructions+=47;goto B72752a;
case 0x72752d:c.instructions+=46;goto B72752d;
case 0x727530:c.instructions+=45;goto B727530;
case 0x727536:c.instructions+=44;goto B727536;
case 0x727539:c.instructions+=43;goto B727539;
case 0x72753f:c.instructions+=42;goto B72753f;
case 0x727542:c.instructions+=41;goto B727542;
case 0x727549:c.instructions+=40;goto B727549;
case 0x72754d:c.instructions+=39;goto B72754d;
case 0x727553:c.instructions+=38;goto B727553;
case 0x727556:c.instructions+=37;goto B727556;
case 0x72755c:c.instructions+=36;goto B72755c;
case 0x72755f:c.instructions+=35;goto B72755f;
case 0x727565:c.instructions+=34;goto B727565;
case 0x727568:c.instructions+=33;goto B727568;
case 0x72756f:c.instructions+=32;goto B72756f;
case 0x727573:c.instructions+=31;goto B727573;
case 0x727579:c.instructions+=30;goto B727579;
case 0x72757c:c.instructions+=29;goto B72757c;
case 0x727582:c.instructions+=28;goto B727582;
case 0x727585:c.instructions+=27;goto B727585;
case 0x72758b:c.instructions+=26;goto B72758b;
case 0x72758e:c.instructions+=25;goto B72758e;
case 0x727594:c.instructions+=24;goto B727594;
case 0x727597:c.instructions+=23;goto B727597;
case 0x72759d:c.instructions+=22;goto B72759d;
case 0x7275a3:c.instructions+=21;goto B7275a3;
case 0x7275a6:c.instructions+=20;goto B7275a6;
case 0x7275ac:c.instructions+=19;goto B7275ac;
case 0x7275af:c.instructions+=18;goto B7275af;
case 0x7275b5:c.instructions+=17;goto B7275b5;
case 0x7275b8:c.instructions+=16;goto B7275b8;
case 0x7275be:c.instructions+=15;goto B7275be;
case 0x7275c1:c.instructions+=14;goto B7275c1;
case 0x7275c7:c.instructions+=13;goto B7275c7;
case 0x7275ca:c.instructions+=12;goto B7275ca;
case 0x7275d0:c.instructions+=11;goto B7275d0;
case 0x7275d3:c.instructions+=10;goto B7275d3;
case 0x7275d9:c.instructions+=9;goto B7275d9;
case 0x7275dc:c.instructions+=8;goto B7275dc;
case 0x7275e2:c.instructions+=7;goto B7275e2;
case 0x7275e5:c.instructions+=6;goto B7275e5;
case 0x7275eb:c.instructions+=5;goto B7275eb;
case 0x7275ee:c.instructions+=4;goto B7275ee;
case 0x7275f0:c.instructions+=3;goto B7275f0;
case 0x7275f2:c.instructions+=2;goto B7275f2;
case 0x7275f5:c.instructions+=1;goto B7275f5;
case 0x7275f7:goto L7275f7;
case 0x7275fd:goto L7275fd;
case 0x727603:c.instructions+=1;goto B727603;
case 0x727605:goto L727605;
case 0x727609:c.instructions+=1;goto B727609;
case 0x72760b:goto L72760b;
case 0x72760f:goto L72760f;
case 0x727613:c.instructions+=11;goto B727613;
case 0x727616:c.instructions+=10;goto B727616;
case 0x727619:c.instructions+=9;goto B727619;
case 0x727621:c.instructions+=8;goto B727621;
case 0x727626:c.instructions+=7;goto B727626;
case 0x727627:c.instructions+=6;goto B727627;
case 0x72762a:c.instructions+=5;goto B72762a;
case 0x72762e:c.instructions+=4;goto B72762e;
case 0x72762f:c.instructions+=3;goto B72762f;
case 0x727630:c.instructions+=2;goto B727630;
case 0x727632:c.instructions+=1;goto B727632;
case 0x727634:goto L727634;
case 0x727637:c.instructions+=9;goto B727637;
case 0x72763a:c.instructions+=8;goto B72763a;
case 0x72763b:c.instructions+=7;goto B72763b;
case 0x72763c:c.instructions+=6;goto B72763c;
case 0x72763e:c.instructions+=5;goto B72763e;
case 0x727641:c.instructions+=4;goto B727641;
case 0x727642:c.instructions+=3;goto B727642;
case 0x727645:c.instructions+=2;goto B727645;
case 0x727646:c.instructions+=1;goto B727646;
case 0x727647:goto L727647;
case 0x72764e:c.instructions+=3;goto B72764e;
case 0x727650:c.instructions+=2;goto B727650;
case 0x727652:c.instructions+=1;goto B727652;
case 0x727654:goto L727654;
case 0x72765a:c.instructions+=2;goto B72765a;
case 0x72765e:c.instructions+=1;goto B72765e;
case 0x727660:goto L727660;
case 0x727661:c.instructions+=2;goto B727661;
case 0x727663:c.instructions+=1;goto B727663;
case 0x727665:goto L727665;
case 0x727667:c.instructions+=1;goto B727667;
case 0x727668:goto L727668;
case 0x727669:goto L727669;
case 0x72766d:c.instructions+=4;goto B72766d;
case 0x727671:c.instructions+=3;goto B727671;
case 0x727675:c.instructions+=2;goto B727675;
case 0x727677:c.instructions+=1;goto B727677;
case 0x727679:goto L727679;
case 0x727680:c.instructions+=3;goto B727680;
case 0x727683:c.instructions+=2;goto B727683;
case 0x727685:c.instructions+=1;goto B727685;
case 0x727687:goto L727687;
case 0x727689:c.instructions+=1;goto B727689;
case 0x72768a:goto L72768a;
case 0x72768c:c.instructions+=2;goto B72768c;
case 0x72768e:c.instructions+=1;goto B72768e;
case 0x72768f:goto L72768f;
case 0x727693:c.instructions+=2;goto B727693;
case 0x727695:c.instructions+=1;goto B727695;
case 0x727697:goto L727697;
case 0x72769e:c.instructions+=2;goto B72769e;
case 0x7276a0:c.instructions+=1;goto B7276a0;
case 0x7276a2:goto L7276a2;
case 0x7276a8:c.instructions+=3;goto B7276a8;
case 0x7276ab:c.instructions+=2;goto B7276ab;
case 0x7276ae:c.instructions+=1;goto B7276ae;
case 0x7276b0:goto L7276b0;
case 0x7276b3:c.instructions+=4;goto B7276b3;
case 0x7276b5:c.instructions+=3;goto B7276b5;
case 0x7276b7:c.instructions+=2;goto B7276b7;
case 0x7276ba:c.instructions+=1;goto B7276ba;
case 0x7276bb:goto L7276bb;
case 0x7276bd:c.instructions+=2;goto B7276bd;
case 0x7276be:c.instructions+=1;goto B7276be;
case 0x7276bf:goto L7276bf;
case 0x7276c0:c.instructions+=18;goto B7276c0;
case 0x7276c2:c.instructions+=17;goto B7276c2;
case 0x7276c3:c.instructions+=16;goto B7276c3;
case 0x7276c6:c.instructions+=15;goto B7276c6;
case 0x7276c9:c.instructions+=14;goto B7276c9;
case 0x7276cc:c.instructions+=13;goto B7276cc;
case 0x7276d2:c.instructions+=12;goto B7276d2;
case 0x7276d6:c.instructions+=11;goto B7276d6;
case 0x7276d9:c.instructions+=10;goto B7276d9;
case 0x7276dd:c.instructions+=9;goto B7276dd;
case 0x7276e0:c.instructions+=8;goto B7276e0;
case 0x7276e3:c.instructions+=7;goto B7276e3;
case 0x7276e6:c.instructions+=6;goto B7276e6;
case 0x7276e8:c.instructions+=5;goto B7276e8;
case 0x7276eb:c.instructions+=4;goto B7276eb;
case 0x7276ee:c.instructions+=3;goto B7276ee;
case 0x7276f4:c.instructions+=2;goto B7276f4;
case 0x7276f7:c.instructions+=1;goto B7276f7;
case 0x7276f9:goto L7276f9;
case 0x7276fd:c.instructions+=6;goto B7276fd;
case 0x727701:c.instructions+=5;goto B727701;
case 0x727704:c.instructions+=4;goto B727704;
case 0x727707:c.instructions+=3;goto B727707;
case 0x727709:c.instructions+=2;goto B727709;
case 0x72770f:c.instructions+=1;goto B72770f;
case 0x727712:goto L727712;
case 0x727716:c.instructions+=2;goto B727716;
case 0x727718:c.instructions+=1;goto B727718;
case 0x72771a:goto L72771a;
case 0x72771d:c.instructions+=10;goto B72771d;
case 0x727723:c.instructions+=9;goto B727723;
case 0x727726:c.instructions+=8;goto B727726;
case 0x727729:c.instructions+=7;goto B727729;
case 0x72772c:c.instructions+=6;goto B72772c;
case 0x72772f:c.instructions+=5;goto B72772f;
case 0x727732:c.instructions+=4;goto B727732;
case 0x727736:c.instructions+=3;goto B727736;
case 0x727739:c.instructions+=2;goto B727739;
case 0x72773c:c.instructions+=1;goto B72773c;
case 0x72773f:goto L72773f;
case 0x727745:c.instructions+=4;goto B727745;
case 0x727748:c.instructions+=3;goto B727748;
case 0x72774b:c.instructions+=2;goto B72774b;
case 0x72774c:c.instructions+=1;goto B72774c;
case 0x72774d:goto L72774d;
case 0x727751:c.instructions+=6;goto B727751;
case 0x727752:c.instructions+=5;goto B727752;
case 0x727757:c.instructions+=4;goto B727757;
case 0x727759:c.instructions+=3;goto B727759;
case 0x72775a:c.instructions+=2;goto B72775a;
case 0x72775f:c.instructions+=1;goto B72775f;
case 0x727761:goto L727761;
case 0x727763:c.instructions+=8;goto B727763;
case 0x727764:c.instructions+=7;goto B727764;
case 0x727766:c.instructions+=6;goto B727766;
case 0x727768:c.instructions+=5;goto B727768;
case 0x72776a:c.instructions+=4;goto B72776a;
case 0x72776b:c.instructions+=3;goto B72776b;
case 0x72776d:c.instructions+=2;goto B72776d;
case 0x727773:c.instructions+=1;goto B727773;
case 0x727775:goto L727775;
case 0x727777:c.instructions+=2;goto B727777;
case 0x727778:c.instructions+=1;goto B727778;
case 0x72777a:goto L72777a;
case 0x72777f:c.instructions+=2;goto B72777f;
case 0x727781:c.instructions+=1;goto B727781;
case 0x727783:goto L727783;
case 0x727785:c.instructions+=6;goto B727785;
case 0x727787:c.instructions+=5;goto B727787;
case 0x727789:c.instructions+=4;goto B727789;
case 0x72778a:c.instructions+=3;goto B72778a;
case 0x72778c:c.instructions+=2;goto B72778c;
case 0x727792:c.instructions+=1;goto B727792;
case 0x727794:goto L727794;
case 0x727796:c.instructions+=2;goto B727796;
case 0x727797:c.instructions+=1;goto B727797;
case 0x727799:goto L727799;
case 0x72779f:c.instructions+=4;goto B72779f;
case 0x7277a2:c.instructions+=3;goto B7277a2;
case 0x7277a7:c.instructions+=2;goto B7277a7;
case 0x7277a9:c.instructions+=1;goto B7277a9;
case 0x7277ab:goto L7277ab;
case 0x7277ad:goto L7277ad;
case 0x7277af:c.instructions+=1;goto B7277af;
case 0x7277b1:goto L7277b1;
case 0x7277b8:c.instructions+=4;goto B7277b8;
case 0x7277bd:c.instructions+=3;goto B7277bd;
case 0x7277c0:c.instructions+=2;goto B7277c0;
case 0x7277c3:c.instructions+=1;goto B7277c3;
case 0x7277c5:goto L7277c5;
case 0x7277cc:c.instructions+=3;goto B7277cc;
case 0x7277d1:c.instructions+=2;goto B7277d1;
case 0x7277d4:c.instructions+=1;goto B7277d4;
case 0x7277d7:goto L7277d7;
case 0x7277d8:c.instructions+=2;goto B7277d8;
case 0x7277d9:c.instructions+=1;goto B7277d9;
case 0x7277da:goto L7277da;
case 0x7277de:c.instructions+=6;goto B7277de;
case 0x7277df:c.instructions+=5;goto B7277df;
case 0x7277e2:c.instructions+=4;goto B7277e2;
case 0x7277e5:c.instructions+=3;goto B7277e5;
case 0x7277eb:c.instructions+=2;goto B7277eb;
case 0x7277f3:c.instructions+=1;goto B7277f3;
case 0x7277f5:goto L7277f5;
case 0x7277fc:c.instructions+=3;goto B7277fc;
case 0x7277ff:c.instructions+=2;goto B7277ff;
case 0x727806:c.instructions+=1;goto B727806;
case 0x727808:goto L727808;
case 0x72780b:c.instructions+=2;goto B72780b;
case 0x72780d:c.instructions+=1;goto B72780d;
case 0x72780f:goto L72780f;
case 0x727810:c.instructions+=4;goto B727810;
case 0x727814:c.instructions+=3;goto B727814;
case 0x727818:c.instructions+=2;goto B727818;
case 0x727819:c.instructions+=1;goto B727819;
case 0x72781b:goto L72781b;
case 0x72781f:goto L72781f;
case 0x727822:c.instructions+=4;goto B727822;
case 0x727825:c.instructions+=3;goto B727825;
case 0x727828:c.instructions+=2;goto B727828;
case 0x72782b:c.instructions+=1;goto B72782b;
case 0x72782d:goto L72782d;
case 0x727833:c.instructions+=2;goto B727833;
case 0x727835:c.instructions+=1;goto B727835;
case 0x727837:goto L727837;
case 0x72783b:c.instructions+=6;goto B72783b;
case 0x72783f:c.instructions+=5;goto B72783f;
case 0x727846:c.instructions+=4;goto B727846;
case 0x727849:c.instructions+=3;goto B727849;
case 0x72784c:c.instructions+=2;goto B72784c;
case 0x72784f:c.instructions+=1;goto B72784f;
case 0x727851:goto L727851;
case 0x727852:c.instructions+=1;goto B727852;
case 0x727857:goto L727857;
case 0x727858:c.instructions+=1;goto B727858;
case 0x72785f:goto L72785f;
case 0x727866:c.instructions+=6;goto B727866;
case 0x72786d:c.instructions+=5;goto B72786d;
case 0x727870:c.instructions+=4;goto B727870;
case 0x727873:c.instructions+=3;goto B727873;
case 0x72787a:c.instructions+=2;goto B72787a;
case 0x72787b:c.instructions+=1;goto B72787b;
case 0x72787c:goto L72787c;
case 0x72787e:c.instructions+=4;goto B72787e;
case 0x72787f:c.instructions+=3;goto B72787f;
case 0x727880:c.instructions+=2;goto B727880;
case 0x727881:c.instructions+=1;goto B727881;
case 0x727887:goto L727887;
case 0x72788c:c.instructions+=1;goto B72788c;
case 0x72788d:goto L72788d;
case 0x727893:c.instructions+=1;goto B727893;
case 0x727899:goto L727899;
case 0x72789a:goto L72789a;
case 0x72789c:c.instructions+=2;goto B72789c;
case 0x7278a2:c.instructions+=1;goto B7278a2;
case 0x7278a8:goto L7278a8;
case 0x7278a9:goto L7278a9;
case 0x7278af:c.instructions+=1;goto B7278af;
case 0x7278b5:goto L7278b5;
case 0x7278b6:goto L7278b6;
case 0x7278b7:c.instructions+=4;goto B7278b7;
case 0x7278b9:c.instructions+=3;goto B7278b9;
case 0x7278ba:c.instructions+=2;goto B7278ba;
case 0x7278c1:c.instructions+=1;goto B7278c1;
case 0x7278c3:goto L7278c3;
case 0x7278c5:c.instructions+=3;goto B7278c5;
case 0x7278c6:c.instructions+=2;goto B7278c6;
case 0x7278c7:c.instructions+=1;goto B7278c7;
case 0x7278c8:goto L7278c8;
case 0x7278c9:c.instructions+=2;goto B7278c9;
case 0x7278cc:c.instructions+=1;goto B7278cc;
case 0x7278d1:goto L7278d1;
case 0x7278d3:c.instructions+=3;goto B7278d3;
case 0x7278d5:c.instructions+=2;goto B7278d5;
case 0x7278d6:c.instructions+=1;goto B7278d6;
case 0x7278d8:goto L7278d8;
case 0x7278dc:c.instructions+=4;goto B7278dc;
case 0x7278df:c.instructions+=3;goto B7278df;
case 0x7278e0:c.instructions+=2;goto B7278e0;
case 0x7278e1:c.instructions+=1;goto B7278e1;
case 0x7278e6:goto L7278e6;
case 0x7278e7:c.instructions+=2;goto B7278e7;
case 0x7278e8:c.instructions+=1;goto B7278e8;
case 0x7278ea:goto L7278ea;
case 0x7278ed:c.instructions+=2;goto B7278ed;
case 0x7278f0:c.instructions+=1;goto B7278f0;
case 0x7278f5:goto L7278f5;
case 0x7278f8:c.instructions+=3;goto B7278f8;
case 0x7278f9:c.instructions+=2;goto B7278f9;
case 0x7278fa:c.instructions+=1;goto B7278fa;
case 0x7278ff:goto L7278ff;
case 0x727902:goto L727902;
case 0x727904:c.instructions+=1;goto B727904;
case 0x727906:goto L727906;
case 0x727908:c.instructions+=3;goto B727908;
case 0x727909:c.instructions+=2;goto B727909;
case 0x72790a:c.instructions+=1;goto B72790a;
case 0x72790b:goto L72790b;
case 0x72790f:c.instructions+=11;goto B72790f;
case 0x727913:c.instructions+=10;goto B727913;
case 0x727918:c.instructions+=9;goto B727918;
case 0x727919:c.instructions+=8;goto B727919;
case 0x72791c:c.instructions+=7;goto B72791c;
case 0x72791d:c.instructions+=6;goto B72791d;
case 0x727920:c.instructions+=5;goto B727920;
case 0x727923:c.instructions+=4;goto B727923;
case 0x727925:c.instructions+=3;goto B727925;
case 0x727927:c.instructions+=2;goto B727927;
case 0x72792e:c.instructions+=1;goto B72792e;
case 0x727930:goto L727930;
case 0x727931:c.instructions+=2;goto B727931;
case 0x727932:c.instructions+=1;goto B727932;
case 0x727935:goto L727935;
case 0x727939:c.instructions+=12;goto B727939;
case 0x72793f:c.instructions+=11;goto B72793f;
case 0x727941:c.instructions+=10;goto B727941;
case 0x727944:c.instructions+=9;goto B727944;
case 0x727947:c.instructions+=8;goto B727947;
case 0x72794a:c.instructions+=7;goto B72794a;
case 0x72794b:c.instructions+=6;goto B72794b;
case 0x72794c:c.instructions+=5;goto B72794c;
case 0x72794d:c.instructions+=4;goto B72794d;
case 0x727952:c.instructions+=3;goto B727952;
case 0x727956:c.instructions+=2;goto B727956;
case 0x727958:c.instructions+=1;goto B727958;
case 0x72795a:goto L72795a;
case 0x72795b:c.instructions+=1;goto B72795b;
case 0x72795c:goto L72795c;
case 0x72795d:c.instructions+=2;goto B72795d;
case 0x72795e:c.instructions+=1;goto B72795e;
case 0x72795f:goto L72795f;
case 0x727963:c.instructions+=5;goto B727963;
case 0x727965:c.instructions+=4;goto B727965;
case 0x727967:c.instructions+=3;goto B727967;
case 0x72796a:c.instructions+=2;goto B72796a;
case 0x72796d:c.instructions+=1;goto B72796d;
case 0x72796e:goto L72796e;
case 0x727972:c.instructions+=7;goto B727972;
case 0x727974:c.instructions+=6;goto B727974;
case 0x727978:c.instructions+=5;goto B727978;
case 0x72797c:c.instructions+=4;goto B72797c;
case 0x72797e:c.instructions+=3;goto B72797e;
case 0x727980:c.instructions+=2;goto B727980;
case 0x727982:c.instructions+=1;goto B727982;
case 0x727984:goto L727984;
case 0x727987:c.instructions+=1;goto B727987;
case 0x727989:goto L727989;
case 0x72798c:goto L72798c;
case 0x72798f:c.instructions+=2;goto B72798f;
case 0x727991:c.instructions+=1;goto B727991;
case 0x727992:goto L727992;
case 0x727996:c.instructions+=7;goto B727996;
case 0x727999:c.instructions+=6;goto B727999;
case 0x72799d:c.instructions+=5;goto B72799d;
case 0x7279a0:c.instructions+=4;goto B7279a0;
case 0x7279a3:c.instructions+=3;goto B7279a3;
case 0x7279a6:c.instructions+=2;goto B7279a6;
case 0x7279a8:c.instructions+=1;goto B7279a8;
case 0x7279aa:goto L7279aa;
case 0x7279ac:c.instructions+=1;goto B7279ac;
case 0x7279ae:goto L7279ae;
case 0x7279b0:goto L7279b0;
case 0x7279b3:c.instructions+=2;goto B7279b3;
case 0x7279b6:c.instructions+=1;goto B7279b6;
case 0x7279b7:goto L7279b7;
case 0x7279bb:c.instructions+=3;goto B7279bb;
case 0x7279bd:c.instructions+=2;goto B7279bd;
case 0x7279bf:c.instructions+=1;goto B7279bf;
case 0x7279c1:goto L7279c1;
case 0x7279c3:c.instructions+=3;goto B7279c3;
case 0x7279c5:c.instructions+=2;goto B7279c5;
case 0x7279c7:c.instructions+=1;goto B7279c7;
case 0x7279c9:goto L7279c9;
case 0x7279cc:c.instructions+=1;goto B7279cc;
case 0x7279ce:goto L7279ce;
case 0x7279d2:goto L7279d2;
case 0x7279d5:goto L7279d5;
case 0x7279d6:goto L7279d6;
case 0x7279da:c.instructions+=4;goto B7279da;
case 0x7279dc:c.instructions+=3;goto B7279dc;
case 0x7279e0:c.instructions+=2;goto B7279e0;
case 0x7279e2:c.instructions+=1;goto B7279e2;
case 0x7279e4:goto L7279e4;
case 0x7279e6:c.instructions+=1;goto B7279e6;
case 0x7279e8:goto L7279e8;
case 0x7279eb:c.instructions+=2;goto B7279eb;
case 0x7279ed:c.instructions+=1;goto B7279ed;
case 0x7279ef:goto L7279ef;
case 0x7279f2:c.instructions+=1;goto B7279f2;
case 0x7279f5:goto L7279f5;
case 0x7279f8:c.instructions+=2;goto B7279f8;
case 0x7279fa:c.instructions+=1;goto B7279fa;
case 0x7279fc:goto L7279fc;
case 0x7279fd:c.instructions+=3;goto B7279fd;
case 0x7279ff:c.instructions+=2;goto B7279ff;
case 0x727a01:c.instructions+=1;goto B727a01;
case 0x727a02:goto L727a02;
case 0x727a04:c.instructions+=2;goto B727a04;
case 0x727a06:c.instructions+=1;goto B727a06;
case 0x727a08:goto L727a08;
case 0x727a0b:c.instructions+=1;goto B727a0b;
case 0x727a0e:goto L727a0e;
case 0x727a11:c.instructions+=1;goto B727a11;
case 0x727a12:goto L727a12;
case 0x727a13:c.instructions+=3;goto B727a13;
case 0x727a17:c.instructions+=2;goto B727a17;
case 0x727a19:c.instructions+=1;goto B727a19;
case 0x727a1b:goto L727a1b;
case 0x727a1d:c.instructions+=3;goto B727a1d;
case 0x727a22:c.instructions+=2;goto B727a22;
case 0x727a23:c.instructions+=1;goto B727a23;
case 0x727a28:goto L727a28;
case 0x727a2a:c.instructions+=2;goto B727a2a;
case 0x727a2b:c.instructions+=1;goto B727a2b;
case 0x727a2d:goto L727a2d;
case 0x727a2f:c.instructions+=2;goto B727a2f;
case 0x727a30:c.instructions+=1;goto B727a30;
case 0x727a31:goto L727a31;
case 0x727a37:c.instructions+=1;goto B727a37;
case 0x727a39:goto L727a39;
case 0x727a3c:c.instructions+=1;goto B727a3c;
case 0x727a3e:goto L727a3e;
case 0x727a40:goto L727a40;
case 0x727a42:c.instructions+=1;goto B727a42;
case 0x727a44:goto L727a44;
case 0x727a45:c.instructions+=1;goto B727a45;
case 0x727a46:goto L727a46;
case 0x727a47:c.instructions+=10;goto B727a47;
case 0x727a49:c.instructions+=9;goto B727a49;
case 0x727a4c:c.instructions+=8;goto B727a4c;
case 0x727a50:c.instructions+=7;goto B727a50;
case 0x727a51:c.instructions+=6;goto B727a51;
case 0x727a54:c.instructions+=5;goto B727a54;
case 0x727a55:c.instructions+=4;goto B727a55;
case 0x727a56:c.instructions+=3;goto B727a56;
case 0x727a58:c.instructions+=2;goto B727a58;
case 0x727a59:c.instructions+=1;goto B727a59;
case 0x727a5e:goto L727a5e;
case 0x727a61:c.instructions+=3;goto B727a61;
case 0x727a63:c.instructions+=2;goto B727a63;
case 0x727a64:c.instructions+=1;goto B727a64;
case 0x727a69:goto L727a69;
case 0x727a6b:c.instructions+=2;goto B727a6b;
case 0x727a6e:c.instructions+=1;goto B727a6e;
case 0x727a73:goto L727a73;
case 0x727a76:c.instructions+=4;goto B727a76;
case 0x727a78:c.instructions+=3;goto B727a78;
case 0x727a7b:c.instructions+=2;goto B727a7b;
case 0x727a7d:c.instructions+=1;goto B727a7d;
case 0x727a7f:goto L727a7f;
case 0x727a83:c.instructions+=1;goto B727a83;
case 0x727a85:goto L727a85;
case 0x727a87:c.instructions+=1;goto B727a87;
case 0x727a89:goto L727a89;
case 0x727a8d:c.instructions+=1;goto B727a8d;
case 0x727a8f:goto L727a8f;
case 0x727a93:c.instructions+=1;goto B727a93;
case 0x727a95:goto L727a95;
case 0x727a99:c.instructions+=1;goto B727a99;
case 0x727a9b:goto L727a9b;
case 0x727a9e:c.instructions+=5;goto B727a9e;
case 0x727a9f:c.instructions+=4;goto B727a9f;
case 0x727aa0:c.instructions+=3;goto B727aa0;
case 0x727aa1:c.instructions+=2;goto B727aa1;
case 0x727aa3:c.instructions+=1;goto B727aa3;
case 0x727aa8:goto L727aa8;
case 0x727aab:c.instructions+=3;goto B727aab;
case 0x727aae:c.instructions+=2;goto B727aae;
case 0x727ab0:c.instructions+=1;goto B727ab0;
case 0x727ab6:goto L727ab6;
case 0x727ab9:c.instructions+=1;goto B727ab9;
case 0x727abe:goto L727abe;
case 0x727ac1:c.instructions+=2;goto B727ac1;
case 0x727ac3:c.instructions+=1;goto B727ac3;
case 0x727ac5:goto L727ac5;
case 0x727ac8:goto L727ac8;
case 0x727ac9:c.instructions+=1;goto B727ac9;
case 0x727ace:goto L727ace;
case 0x727ad1:c.instructions+=9;goto B727ad1;
case 0x727ad4:c.instructions+=8;goto B727ad4;
case 0x727ad7:c.instructions+=7;goto B727ad7;
case 0x727ada:c.instructions+=6;goto B727ada;
case 0x727adf:c.instructions+=5;goto B727adf;
case 0x727ae3:c.instructions+=4;goto B727ae3;
case 0x727ae7:c.instructions+=3;goto B727ae7;
case 0x727aea:c.instructions+=2;goto B727aea;
case 0x727aeb:c.instructions+=1;goto B727aeb;
case 0x727af0:goto L727af0;
case 0x727af2:c.instructions+=3;goto B727af2;
case 0x727af3:c.instructions+=2;goto B727af3;
case 0x727af4:c.instructions+=1;goto B727af4;
case 0x727afa:goto L727afa;
case 0x727afd:c.instructions+=2;goto B727afd;
case 0x727b00:c.instructions+=1;goto B727b00;
case 0x727b02:goto L727b02;
case 0x727b05:goto L727b05;
case 0x727b08:c.instructions+=2;goto B727b08;
case 0x727b0d:c.instructions+=1;goto B727b0d;
case 0x727b0f:goto L727b0f;
case 0x727b12:c.instructions+=2;goto B727b12;
case 0x727b15:c.instructions+=1;goto B727b15;
case 0x727b1a:goto L727b1a;
case 0x727b1f:c.instructions+=1;goto B727b1f;
case 0x727b21:goto L727b21;
case 0x727b25:c.instructions+=2;goto B727b25;
case 0x727b29:c.instructions+=1;goto B727b29;
case 0x727b2e:goto L727b2e;
case 0x727b33:c.instructions+=1;goto B727b33;
case 0x727b35:goto L727b35;
case 0x727b39:c.instructions+=2;goto B727b39;
case 0x727b3d:c.instructions+=1;goto B727b3d;
case 0x727b42:goto L727b42;
case 0x727b47:c.instructions+=1;goto B727b47;
case 0x727b49:goto L727b49;
case 0x727b4d:c.instructions+=2;goto B727b4d;
case 0x727b51:c.instructions+=1;goto B727b51;
case 0x727b56:goto L727b56;
case 0x727b5b:c.instructions+=1;goto B727b5b;
case 0x727b5d:goto L727b5d;
case 0x727b61:c.instructions+=2;goto B727b61;
case 0x727b65:c.instructions+=1;goto B727b65;
case 0x727b6a:goto L727b6a;
case 0x727b6f:c.instructions+=1;goto B727b6f;
case 0x727b71:goto L727b71;
case 0x727b75:c.instructions+=2;goto B727b75;
case 0x727b79:c.instructions+=1;goto B727b79;
case 0x727b7e:goto L727b7e;
case 0x727b83:c.instructions+=1;goto B727b83;
case 0x727b85:goto L727b85;
case 0x727b89:c.instructions+=2;goto B727b89;
case 0x727b8d:c.instructions+=1;goto B727b8d;
case 0x727b92:goto L727b92;
case 0x727b97:c.instructions+=1;goto B727b97;
case 0x727b99:goto L727b99;
case 0x727b9c:c.instructions+=1;goto B727b9c;
case 0x727ba1:goto L727ba1;
case 0x727ba4:c.instructions+=4;goto B727ba4;
case 0x727ba7:c.instructions+=3;goto B727ba7;
case 0x727baa:c.instructions+=2;goto B727baa;
case 0x727bab:c.instructions+=1;goto B727bab;
case 0x727bb0:goto L727bb0;
case 0x727bb3:c.instructions+=3;goto B727bb3;
case 0x727bb6:c.instructions+=2;goto B727bb6;
case 0x727bb9:c.instructions+=1;goto B727bb9;
case 0x727bbe:goto L727bbe;
case 0x727bc3:c.instructions+=1;goto B727bc3;
case 0x727bc5:goto L727bc5;
case 0x727bc8:c.instructions+=1;goto B727bc8;
case 0x727bcd:goto L727bcd;
case 0x727bd0:c.instructions+=4;goto B727bd0;
case 0x727bd3:c.instructions+=3;goto B727bd3;
case 0x727bd6:c.instructions+=2;goto B727bd6;
case 0x727bd7:c.instructions+=1;goto B727bd7;
case 0x727bdc:goto L727bdc;
case 0x727bdf:c.instructions+=3;goto B727bdf;
case 0x727be2:c.instructions+=2;goto B727be2;
case 0x727be5:c.instructions+=1;goto B727be5;
case 0x727bea:goto L727bea;
case 0x727bef:c.instructions+=1;goto B727bef;
case 0x727bf1:goto L727bf1;
case 0x727bf4:c.instructions+=1;goto B727bf4;
case 0x727bf9:goto L727bf9;
case 0x727bfc:c.instructions+=4;goto B727bfc;
case 0x727bff:c.instructions+=3;goto B727bff;
case 0x727c02:c.instructions+=2;goto B727c02;
case 0x727c03:c.instructions+=1;goto B727c03;
case 0x727c08:goto L727c08;
case 0x727c0b:c.instructions+=3;goto B727c0b;
case 0x727c0e:c.instructions+=2;goto B727c0e;
case 0x727c11:c.instructions+=1;goto B727c11;
case 0x727c16:goto L727c16;
case 0x727c1b:c.instructions+=1;goto B727c1b;
case 0x727c1d:goto L727c1d;
case 0x727c20:c.instructions+=1;goto B727c20;
case 0x727c25:goto L727c25;
case 0x727c28:c.instructions+=4;goto B727c28;
case 0x727c2b:c.instructions+=3;goto B727c2b;
case 0x727c2e:c.instructions+=2;goto B727c2e;
case 0x727c2f:c.instructions+=1;goto B727c2f;
case 0x727c34:goto L727c34;
case 0x727c37:c.instructions+=3;goto B727c37;
case 0x727c3a:c.instructions+=2;goto B727c3a;
case 0x727c3d:c.instructions+=1;goto B727c3d;
case 0x727c42:goto L727c42;
case 0x727c47:c.instructions+=1;goto B727c47;
case 0x727c49:goto L727c49;
case 0x727c4c:c.instructions+=1;goto B727c4c;
case 0x727c51:goto L727c51;
case 0x727c54:c.instructions+=4;goto B727c54;
case 0x727c57:c.instructions+=3;goto B727c57;
case 0x727c5a:c.instructions+=2;goto B727c5a;
case 0x727c5b:c.instructions+=1;goto B727c5b;
case 0x727c60:goto L727c60;
case 0x727c63:c.instructions+=3;goto B727c63;
case 0x727c66:c.instructions+=2;goto B727c66;
case 0x727c69:c.instructions+=1;goto B727c69;
case 0x727c6e:goto L727c6e;
case 0x727c73:c.instructions+=1;goto B727c73;
case 0x727c75:goto L727c75;
case 0x727c78:c.instructions+=1;goto B727c78;
case 0x727c7d:goto L727c7d;
case 0x727c80:c.instructions+=4;goto B727c80;
case 0x727c83:c.instructions+=3;goto B727c83;
case 0x727c86:c.instructions+=2;goto B727c86;
case 0x727c87:c.instructions+=1;goto B727c87;
case 0x727c8c:goto L727c8c;
case 0x727c8f:c.instructions+=3;goto B727c8f;
case 0x727c92:c.instructions+=2;goto B727c92;
case 0x727c95:c.instructions+=1;goto B727c95;
case 0x727c9a:goto L727c9a;
case 0x727c9f:c.instructions+=1;goto B727c9f;
case 0x727ca1:goto L727ca1;
case 0x727ca4:c.instructions+=2;goto B727ca4;
case 0x727ca7:c.instructions+=1;goto B727ca7;
case 0x727cac:goto L727cac;
case 0x727cb1:c.instructions+=1;goto B727cb1;
case 0x727cb3:goto L727cb3;
case 0x727cb6:c.instructions+=2;goto B727cb6;
case 0x727cb9:c.instructions+=1;goto B727cb9;
case 0x727cbe:goto L727cbe;
case 0x727cc3:c.instructions+=1;goto B727cc3;
case 0x727cc5:goto L727cc5;
case 0x727cc9:c.instructions+=2;goto B727cc9;
case 0x727ccc:c.instructions+=1;goto B727ccc;
case 0x727cd1:goto L727cd1;
case 0x727cd6:c.instructions+=1;goto B727cd6;
case 0x727cd8:goto L727cd8;
case 0x727cdb:c.instructions+=2;goto B727cdb;
case 0x727cdd:c.instructions+=1;goto B727cdd;
case 0x727ce2:goto L727ce2;
case 0x727ce7:c.instructions+=1;goto B727ce7;
case 0x727ced:goto L727ced;
case 0x727cf0:c.instructions+=1;goto B727cf0;
case 0x727cf2:goto L727cf2;
case 0x727cf5:c.instructions+=2;goto B727cf5;
case 0x727cf8:c.instructions+=1;goto B727cf8;
case 0x727cfd:goto L727cfd;
case 0x727d00:c.instructions+=1;goto B727d00;
case 0x727d02:goto L727d02;
case 0x727d05:c.instructions+=2;goto B727d05;
case 0x727d08:c.instructions+=1;goto B727d08;
case 0x727d0d:goto L727d0d;
case 0x727d10:c.instructions+=1;goto B727d10;
case 0x727d12:goto L727d12;
case 0x727d15:c.instructions+=2;goto B727d15;
case 0x727d18:c.instructions+=1;goto B727d18;
case 0x727d1a:goto L727d1a;
case 0x727d1f:c.instructions+=1;goto B727d1f;
case 0x727d21:goto L727d21;
case 0x727d24:c.instructions+=2;goto B727d24;
case 0x727d27:c.instructions+=1;goto B727d27;
case 0x727d29:goto L727d29;
case 0x727d2e:c.instructions+=1;goto B727d2e;
case 0x727d30:goto L727d30;
case 0x727d33:c.instructions+=2;goto B727d33;
case 0x727d36:c.instructions+=1;goto B727d36;
case 0x727d38:goto L727d38;
case 0x727d3d:c.instructions+=1;goto B727d3d;
case 0x727d3f:goto L727d3f;
case 0x727d42:c.instructions+=2;goto B727d42;
case 0x727d45:c.instructions+=1;goto B727d45;
case 0x727d47:goto L727d47;
case 0x727d4c:c.instructions+=1;goto B727d4c;
case 0x727d4e:goto L727d4e;
case 0x727d51:c.instructions+=2;goto B727d51;
case 0x727d54:c.instructions+=1;goto B727d54;
case 0x727d56:goto L727d56;
case 0x727d5b:c.instructions+=1;goto B727d5b;
case 0x727d5d:goto L727d5d;
case 0x727d60:c.instructions+=2;goto B727d60;
case 0x727d63:c.instructions+=1;goto B727d63;
case 0x727d65:goto L727d65;
case 0x727d6a:c.instructions+=1;goto B727d6a;
case 0x727d6c:goto L727d6c;
case 0x727d6f:c.instructions+=2;goto B727d6f;
case 0x727d72:c.instructions+=1;goto B727d72;
case 0x727d74:goto L727d74;
case 0x727d79:c.instructions+=1;goto B727d79;
case 0x727d7b:goto L727d7b;
case 0x727d7e:c.instructions+=2;goto B727d7e;
case 0x727d81:c.instructions+=1;goto B727d81;
case 0x727d83:goto L727d83;
case 0x727d86:c.instructions+=1;goto B727d86;
case 0x727d88:goto L727d88;
case 0x727d8b:c.instructions+=5;goto B727d8b;
case 0x727d8e:c.instructions+=4;goto B727d8e;
case 0x727d91:c.instructions+=3;goto B727d91;
case 0x727d93:c.instructions+=2;goto B727d93;
case 0x727d96:c.instructions+=1;goto B727d96;
case 0x727d99:goto L727d99;
case 0x727d9c:c.instructions+=2;goto B727d9c;
case 0x727d9d:c.instructions+=1;goto B727d9d;
case 0x727da2:goto L727da2;
case 0x727da4:c.instructions+=2;goto B727da4;
case 0x727da5:c.instructions+=1;goto B727da5;
case 0x727dab:goto L727dab;
case 0x727daf:c.instructions+=4;goto B727daf;
case 0x727db3:c.instructions+=3;goto B727db3;
case 0x727db7:c.instructions+=2;goto B727db7;
case 0x727db8:c.instructions+=1;goto B727db8;
case 0x727dba:goto L727dba;
case 0x727dbe:c.instructions+=1;goto B727dbe;
case 0x727dc2:goto L727dc2;
case 0x727dc9:c.instructions+=1;goto B727dc9;
case 0x727dcb:goto L727dcb;
case 0x727dcf:c.instructions+=1;goto B727dcf;
case 0x727dd1:goto L727dd1;
case 0x727dd5:goto L727dd5;
case 0x727dd9:c.instructions+=7;goto B727dd9;
case 0x727ddc:c.instructions+=6;goto B727ddc;
case 0x727ddf:c.instructions+=5;goto B727ddf;
case 0x727de7:c.instructions+=4;goto B727de7;
case 0x727dea:c.instructions+=3;goto B727dea;
case 0x727dee:c.instructions+=2;goto B727dee;
case 0x727df1:c.instructions+=1;goto B727df1;
case 0x727df3:goto L727df3;
case 0x727df6:c.instructions+=1;goto B727df6;
case 0x727df8:goto L727df8;
case 0x727dfb:c.instructions+=1;goto B727dfb;
case 0x727dfd:goto L727dfd;
case 0x727dfe:c.instructions+=5;goto B727dfe;
case 0x727dff:c.instructions+=4;goto B727dff;
case 0x727e00:c.instructions+=3;goto B727e00;
case 0x727e03:c.instructions+=2;goto B727e03;
case 0x727e05:c.instructions+=1;goto B727e05;
case 0x727e07:goto L727e07;
case 0x727e08:c.instructions+=4;goto B727e08;
case 0x727e09:c.instructions+=3;goto B727e09;
case 0x727e0a:c.instructions+=2;goto B727e0a;
case 0x727e0b:c.instructions+=1;goto B727e0b;
case 0x727e0c:goto L727e0c;
case 0x727e10:c.instructions+=6;goto B727e10;
case 0x727e13:c.instructions+=5;goto B727e13;
case 0x727e16:c.instructions+=4;goto B727e16;
case 0x727e1c:c.instructions+=3;goto B727e1c;
case 0x727e20:c.instructions+=2;goto B727e20;
case 0x727e24:c.instructions+=1;goto B727e24;
case 0x727e26:goto L727e26;
case 0x727e29:goto L727e29;
case 0x727e2a:goto L727e2a;
case 0x727e30:c.instructions+=8;goto B727e30;
case 0x727e31:c.instructions+=7;goto B727e31;
case 0x727e35:c.instructions+=6;goto B727e35;
case 0x727e38:c.instructions+=5;goto B727e38;
case 0x727e3b:c.instructions+=4;goto B727e3b;
case 0x727e3d:c.instructions+=3;goto B727e3d;
case 0x727e41:c.instructions+=2;goto B727e41;
case 0x727e45:c.instructions+=1;goto B727e45;
case 0x727e47:goto L727e47;
case 0x727e4a:c.instructions+=6;goto B727e4a;
case 0x727e4d:c.instructions+=5;goto B727e4d;
case 0x727e50:c.instructions+=4;goto B727e50;
case 0x727e52:c.instructions+=3;goto B727e52;
case 0x727e54:c.instructions+=2;goto B727e54;
case 0x727e55:c.instructions+=1;goto B727e55;
case 0x727e58:goto L727e58;
case 0x727e5b:c.instructions+=2;goto B727e5b;
case 0x727e5d:c.instructions+=1;goto B727e5d;
case 0x727e5f:goto L727e5f;
case 0x727e60:c.instructions+=4;goto B727e60;
case 0x727e61:c.instructions+=3;goto B727e61;
case 0x727e62:c.instructions+=2;goto B727e62;
case 0x727e65:c.instructions+=1;goto B727e65;
case 0x727e67:goto L727e67;
case 0x727e69:goto L727e69;
case 0x727e6a:c.instructions+=1;goto B727e6a;
case 0x727e6b:goto L727e6b;
case 0x727e6d:c.instructions+=1;goto B727e6d;
case 0x727e6e:goto L727e6e;
case 0x727e6f:c.instructions+=45;goto B727e6f;
case 0x727e71:c.instructions+=44;goto B727e71;
case 0x727e74:c.instructions+=43;goto B727e74;
case 0x727e75:c.instructions+=42;goto B727e75;
case 0x727e76:c.instructions+=41;goto B727e76;
case 0x727e78:c.instructions+=40;goto B727e78;
case 0x727e7a:c.instructions+=39;goto B727e7a;
case 0x727e7d:c.instructions+=38;goto B727e7d;
case 0x727e80:c.instructions+=37;goto B727e80;
case 0x727e81:c.instructions+=36;goto B727e81;
case 0x727e82:c.instructions+=35;goto B727e82;
case 0x727e83:c.instructions+=34;goto B727e83;
case 0x727e84:c.instructions+=33;goto B727e84;
case 0x727e85:c.instructions+=32;goto B727e85;
case 0x727e89:c.instructions+=31;goto B727e89;
case 0x727e8c:c.instructions+=30;goto B727e8c;
case 0x727e8e:c.instructions+=29;goto B727e8e;
case 0x727e91:c.instructions+=28;goto B727e91;
case 0x727e92:c.instructions+=27;goto B727e92;
case 0x727e93:c.instructions+=26;goto B727e93;
case 0x727e94:c.instructions+=25;goto B727e94;
case 0x727e95:c.instructions+=24;goto B727e95;
case 0x727e96:c.instructions+=23;goto B727e96;
case 0x727e99:c.instructions+=22;goto B727e99;
case 0x727e9f:c.instructions+=21;goto B727e9f;
case 0x727ea2:c.instructions+=20;goto B727ea2;
case 0x727ea5:c.instructions+=19;goto B727ea5;
case 0x727eaa:c.instructions+=18;goto B727eaa;
case 0x727ead:c.instructions+=17;goto B727ead;
case 0x727eb1:c.instructions+=16;goto B727eb1;
case 0x727eb2:c.instructions+=15;goto B727eb2;
case 0x727eb3:c.instructions+=14;goto B727eb3;
case 0x727eb6:c.instructions+=13;goto B727eb6;
case 0x727eb7:c.instructions+=12;goto B727eb7;
case 0x727eba:c.instructions+=11;goto B727eba;
case 0x727ebb:c.instructions+=10;goto B727ebb;
case 0x727ebe:c.instructions+=9;goto B727ebe;
case 0x727ebf:c.instructions+=8;goto B727ebf;
case 0x727ec2:c.instructions+=7;goto B727ec2;
case 0x727ec5:c.instructions+=6;goto B727ec5;
case 0x727ec6:c.instructions+=5;goto B727ec6;
case 0x727ec7:c.instructions+=4;goto B727ec7;
case 0x727ec9:c.instructions+=3;goto B727ec9;
case 0x727ecb:c.instructions+=2;goto B727ecb;
case 0x727ecc:c.instructions+=1;goto B727ecc;
case 0x727ed1:goto L727ed1;
case 0x727ed4:c.instructions+=4;goto B727ed4;
case 0x727ed5:c.instructions+=3;goto B727ed5;
case 0x727ed6:c.instructions+=2;goto B727ed6;
case 0x727ed7:c.instructions+=1;goto B727ed7;
case 0x727ed8:goto L727ed8;
case 0x727edf:c.instructions+=5;goto B727edf;
case 0x727ee0:c.instructions+=4;goto B727ee0;
case 0x727ee4:c.instructions+=3;goto B727ee4;
case 0x727ee6:c.instructions+=2;goto B727ee6;
case 0x727ee8:c.instructions+=1;goto B727ee8;
case 0x727eea:goto L727eea;
case 0x727eeb:c.instructions+=2;goto B727eeb;
case 0x727eef:c.instructions+=1;goto B727eef;
case 0x727ef0:goto L727ef0;
case 0x727ef2:c.instructions+=6;goto B727ef2;
case 0x727efa:c.instructions+=5;goto B727efa;
case 0x727efe:c.instructions+=4;goto B727efe;
case 0x727f00:c.instructions+=3;goto B727f00;
case 0x727f05:c.instructions+=2;goto B727f05;
case 0x727f0a:c.instructions+=1;goto B727f0a;
case 0x727f0c:goto L727f0c;
case 0x727f0f:c.instructions+=4;goto B727f0f;
case 0x727f11:c.instructions+=3;goto B727f11;
case 0x727f13:c.instructions+=2;goto B727f13;
case 0x727f17:c.instructions+=1;goto B727f17;
case 0x727f19:goto L727f19;
case 0x727f1c:c.instructions+=2;goto B727f1c;
case 0x727f1f:c.instructions+=1;goto B727f1f;
case 0x727f21:goto L727f21;
case 0x727f23:goto L727f23;
case 0x727f25:c.instructions+=1;goto B727f25;
case 0x727f27:goto L727f27;
case 0x727f28:c.instructions+=4;goto B727f28;
case 0x727f2a:c.instructions+=3;goto B727f2a;
case 0x727f31:c.instructions+=2;goto B727f31;
case 0x727f33:c.instructions+=1;goto B727f33;
case 0x727f35:goto L727f35;
case 0x727f37:goto L727f37;
case 0x727f3b:c.instructions+=4;goto B727f3b;
case 0x727f3d:c.instructions+=3;goto B727f3d;
case 0x727f3f:c.instructions+=2;goto B727f3f;
case 0x727f41:c.instructions+=1;goto B727f41;
case 0x727f43:goto L727f43;
case 0x727f45:c.instructions+=1;goto B727f45;
case 0x727f47:goto L727f47;
case 0x727f49:goto L727f49;
case 0x727f4a:c.instructions+=1;goto B727f4a;
case 0x727f4b:goto L727f4b;
case 0x727f4c:c.instructions+=1;goto B727f4c;
case 0x727f4d:goto L727f4d;
case 0x727f51:c.instructions+=3;goto B727f51;
case 0x727f55:c.instructions+=2;goto B727f55;
case 0x727f5a:c.instructions+=1;goto B727f5a;
case 0x727f5c:goto L727f5c;
case 0x727f62:c.instructions+=1;goto B727f62;
case 0x727f63:goto L727f63;
case 0x727f68:c.instructions+=1;goto B727f68;
case 0x727f6a:goto L727f6a;
case 0x727f70:goto L727f70;
case 0x727f71:goto L727f71;
case 0x727f72:c.instructions+=3;goto B727f72;
case 0x727f74:c.instructions+=2;goto B727f74;
case 0x727f7a:c.instructions+=1;goto B727f7a;
case 0x727f7c:goto L727f7c;
case 0x727f7e:c.instructions+=3;goto B727f7e;
case 0x727f7f:c.instructions+=2;goto B727f7f;
case 0x727f80:c.instructions+=1;goto B727f80;
case 0x727f81:goto L727f81;
case 0x727f82:c.instructions+=3;goto B727f82;
case 0x727f86:c.instructions+=2;goto B727f86;
case 0x727f87:c.instructions+=1;goto B727f87;
case 0x727f8c:goto L727f8c;
case 0x727f8e:c.instructions+=2;goto B727f8e;
case 0x727f8f:c.instructions+=1;goto B727f8f;
case 0x727f91:goto L727f91;
case 0x727f93:c.instructions+=1;goto B727f93;
case 0x727f95:goto L727f95;
case 0x727f96:c.instructions+=7;goto B727f96;
case 0x727f9a:c.instructions+=6;goto B727f9a;
case 0x727f9b:c.instructions+=5;goto B727f9b;
case 0x727fa0:c.instructions+=4;goto B727fa0;
case 0x727fa3:c.instructions+=3;goto B727fa3;
case 0x727fa6:c.instructions+=2;goto B727fa6;
case 0x727fa7:c.instructions+=1;goto B727fa7;
case 0x727fac:goto L727fac;
case 0x727fb1:c.instructions+=3;goto B727fb1;
case 0x727fb4:c.instructions+=2;goto B727fb4;
case 0x727fb7:c.instructions+=1;goto B727fb7;
case 0x727fb8:goto L727fb8;
case 0x727fb9:c.instructions+=3;goto B727fb9;
case 0x727fbb:c.instructions+=2;goto B727fbb;
case 0x727fbc:c.instructions+=1;goto B727fbc;
case 0x727fbd:goto L727fbd;
case 0x727fc1:c.instructions+=8;goto B727fc1;
case 0x727fc7:c.instructions+=7;goto B727fc7;
case 0x727fca:c.instructions+=6;goto B727fca;
case 0x727fcd:c.instructions+=5;goto B727fcd;
case 0x727fd2:c.instructions+=4;goto B727fd2;
case 0x727fd4:c.instructions+=3;goto B727fd4;
case 0x727fd8:c.instructions+=2;goto B727fd8;
case 0x727fd9:c.instructions+=1;goto B727fd9;
case 0x727fdb:goto L727fdb;
case 0x727fdd:c.instructions+=1;goto B727fdd;
case 0x727fdf:goto L727fdf;
case 0x727fe1:c.instructions+=4;goto B727fe1;
case 0x727fe3:c.instructions+=3;goto B727fe3;
case 0x727fe4:c.instructions+=2;goto B727fe4;
case 0x727fe5:c.instructions+=1;goto B727fe5;
case 0x727fe6:goto L727fe6;
case 0x727fe8:c.instructions+=6;goto B727fe8;
case 0x727feb:c.instructions+=5;goto B727feb;
case 0x727fee:c.instructions+=4;goto B727fee;
case 0x727ff4:c.instructions+=3;goto B727ff4;
case 0x727ff8:c.instructions+=2;goto B727ff8;
case 0x727ffa:c.instructions+=1;goto B727ffa;
case 0x727ffc:goto L727ffc;
default:missing_instruction(c.pc);}
B727000:L727000:{c.instructions+=3;NFSU2_TR(0x727000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727001:{NFSU2_TR(0x727001);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B727002:{NFSU2_TR(0x727002);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727003:L727003:{c.instructions+=5;NFSU2_TR(0x727003);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727004:{NFSU2_TR(0x727004);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B727008:{NFSU2_TR(0x727008);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72700a:{NFSU2_TR(0x72700a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72700b:{NFSU2_TR(0x72700b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727010ull));
{goto L727030;}
}
B727010:L727010:{c.instructions+=2;NFSU2_TR(0x727010);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727012:{NFSU2_TR(0x727012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727017ull));
TAIL_STATIC(0x726fb8u,726);
}
B727017:L727017:{c.instructions+=5;NFSU2_TR(0x727017);
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
B72701a:{NFSU2_TR(0x72701a);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B72701d:{NFSU2_TR(0x72701d);
w4(R+0,u32(r2(R+0)));
}
B727020:{NFSU2_TR(0x727020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727021:{NFSU2_TR(0x727021);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727030:L727030:{c.instructions+=10;NFSU2_TR(0x727030);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727031:{NFSU2_TR(0x727031);
__builtin_memmove((R+20),(R+16),4);
}
B727033:{NFSU2_TR(0x727033);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727034:{NFSU2_TR(0x727034);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727035:{NFSU2_TR(0x727035);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727036:{NFSU2_TR(0x727036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727039:{NFSU2_TR(0x727039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72703c:{NFSU2_TR(0x72703c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72703e:{NFSU2_TR(0x72703e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727043:{NFSU2_TR(0x727043);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7270f3;}}
}
B727049:L727049:{c.instructions+=2;NFSU2_TR(0x727049);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72704c:{NFSU2_TR(0x72704c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L727084;}}
}
B72704e:L72704e:{c.instructions+=5;NFSU2_TR(0x72704e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72704f:{NFSU2_TR(0x72704f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727050:{NFSU2_TR(0x727050);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B727053:{NFSU2_TR(0x727053);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B727056:{NFSU2_TR(0x727056);
if(r1(R+519)){{goto L72706b;}}
}
B727058:L727058:{c.instructions+=7;NFSU2_TR(0x727058);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B72705a:{NFSU2_TR(0x72705a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B72705d:{NFSU2_TR(0x72705d);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B727060:{NFSU2_TR(0x727060);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B727063:{NFSU2_TR(0x727063);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B727066:{NFSU2_TR(0x727066);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B727069:{NFSU2_TR(0x727069);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727058u);}goto L727058;}}
}
B72706b:L72706b:{c.instructions+=2;NFSU2_TR(0x72706b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B72706e:{NFSU2_TR(0x72706e);
if(r1(R+519)){{goto L72707a;}}
}
B727070:L727070:{c.instructions+=4;NFSU2_TR(0x727070);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B727072:{NFSU2_TR(0x727072);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B727075:{NFSU2_TR(0x727075);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B727078:{NFSU2_TR(0x727078);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727070u);}goto L727070;}}
}
B72707a:L72707a:{c.instructions+=4;NFSU2_TR(0x72707a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72707c:{NFSU2_TR(0x72707c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B72707f:{NFSU2_TR(0x72707f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B727082:{NFSU2_TR(0x727082);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7270c9;}}
}
B727084:L727084:{c.instructions+=5;NFSU2_TR(0x727084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B727085:{NFSU2_TR(0x727085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B727086:{NFSU2_TR(0x727086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B727087:{NFSU2_TR(0x727087);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B727088:{NFSU2_TR(0x727088);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7270c9:L7270c9:{c.instructions+=2;NFSU2_TR(0x7270c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7270cf:{NFSU2_TR(0x7270cf);
if(r1(R+518)){{goto L7270d6;}}
}
B7270d1:L7270d1:{c.instructions+=2;NFSU2_TR(0x7270d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7270d3:{NFSU2_TR(0x7270d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7270d6:L7270d6:{c.instructions+=2;NFSU2_TR(0x7270d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7270dc:{NFSU2_TR(0x7270dc);
if(r1(R+518)){{goto L7270e4;}}
}
B7270de:L7270de:{c.instructions+=2;NFSU2_TR(0x7270de);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B7270e1:{NFSU2_TR(0x7270e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7270e4:L7270e4:{c.instructions+=2;NFSU2_TR(0x7270e4);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7270ea:{NFSU2_TR(0x7270ea);
if(r1(R+518)){{goto L7270ee;}}
}
B7270ec:L7270ec:{c.instructions+=1;NFSU2_TR(0x7270ec);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7270ee:L7270ee:{c.instructions+=5;NFSU2_TR(0x7270ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7270ef:{NFSU2_TR(0x7270ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7270f0:{NFSU2_TR(0x7270f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7270f1:{NFSU2_TR(0x7270f1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7270f2:{NFSU2_TR(0x7270f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7270f3:L7270f3:{c.instructions+=2;NFSU2_TR(0x7270f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7270f8:{NFSU2_TR(0x7270f8);
if(r1(R+518)){{goto L727105;}}
}
B7270fa:L7270fa:{c.instructions+=2;NFSU2_TR(0x7270fa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7270fd:{NFSU2_TR(0x7270fd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L727105;}}
}
B7270ff:L7270ff:{c.instructions+=3;NFSU2_TR(0x7270ff);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B727101:{NFSU2_TR(0x727101);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B727104:{NFSU2_TR(0x727104);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B727105:L727105:{c.instructions+=2;NFSU2_TR(0x727105);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72710a:{NFSU2_TR(0x72710a);
if(r1(R+518)){{goto L72711a;}}
}
B72710c:L72710c:{c.instructions+=2;NFSU2_TR(0x72710c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72710f:{NFSU2_TR(0x72710f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72711a;}}
}
B727111:L727111:{c.instructions+=3;NFSU2_TR(0x727111);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B727114:{NFSU2_TR(0x727114);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B727117:{NFSU2_TR(0x727117);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B72711a:L72711a:{c.instructions+=2;NFSU2_TR(0x72711a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72711f:{NFSU2_TR(0x72711f);
if(r1(R+518)){{goto L72712e;}}
}
B727121:L727121:{c.instructions+=2;NFSU2_TR(0x727121);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B727124:{NFSU2_TR(0x727124);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72712e;}}
}
B727126:L727126:{c.instructions+=3;NFSU2_TR(0x727126);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B727128:{NFSU2_TR(0x727128);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72712b:{NFSU2_TR(0x72712b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B72712e:L72712e:{c.instructions+=1;NFSU2_TR(0x72712e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727049u);}goto L727049;}
}
B727133:L727133:{c.instructions+=2;NFSU2_TR(0x727133);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727134:{NFSU2_TR(0x727134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727139ull));
TAIL_STATIC(0x721f99u,721);
}
B727139:L727139:{c.instructions+=6;NFSU2_TR(0x727139);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72713d:{NFSU2_TR(0x72713d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727141:{NFSU2_TR(0x727141);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727144:{NFSU2_TR(0x727144);
w4(R+0,u32(m2(0x8b44c6)));
}
B72714b:{NFSU2_TR(0x72714b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72714c:{NFSU2_TR(0x72714c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727151ull));
TAIL_STATIC(0x726db3u,726);
}
B727151:L727151:{c.instructions+=3;NFSU2_TR(0x727151);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B727154:{NFSU2_TR(0x727154);
__builtin_memmove((R+24),(R+0),4);
}
B727156:{NFSU2_TR(0x727156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72715bull));
TAIL_STATIC(0x721fa7u,721);
}
B72715b:L72715b:{c.instructions+=3;NFSU2_TR(0x72715b);
__builtin_memmove((R+0),(R+24),4);
}
B72715d:{NFSU2_TR(0x72715d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72715e:{NFSU2_TR(0x72715e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72715f:L72715f:{c.instructions+=2;NFSU2_TR(0x72715f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727160:{NFSU2_TR(0x727160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727165ull));
TAIL_STATIC(0x721f99u,721);
}
B727165:L727165:{c.instructions+=4;NFSU2_TR(0x727165);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727169:{NFSU2_TR(0x727169);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72716c:{NFSU2_TR(0x72716c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72716f:{NFSU2_TR(0x72716f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727174ull));
TAIL_STATIC(0x726f16u,726);
}
B727174:L727174:{c.instructions+=4;NFSU2_TR(0x727174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B727175:{NFSU2_TR(0x727175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B727176:{NFSU2_TR(0x727176);
__builtin_memmove((R+24),(R+0),4);
}
B727178:{NFSU2_TR(0x727178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72717dull));
TAIL_STATIC(0x721fa7u,721);
}
B72717d:L72717d:{c.instructions+=3;NFSU2_TR(0x72717d);
__builtin_memmove((R+0),(R+24),4);
}
B72717f:{NFSU2_TR(0x72717f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727180:{NFSU2_TR(0x727180);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727181:L727181:{c.instructions+=23;NFSU2_TR(0x727181);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727182:{NFSU2_TR(0x727182);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B727186:{NFSU2_TR(0x727186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2f4ull))));
}
B72718c:{NFSU2_TR(0x72718c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72718d:{NFSU2_TR(0x72718d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72718e:{NFSU2_TR(0x72718e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72718f:{NFSU2_TR(0x72718f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B727192:{NFSU2_TR(0x727192);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B727194:{NFSU2_TR(0x727194);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B727197:{NFSU2_TR(0x727197);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B727198:{NFSU2_TR(0x727198);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B727199:{NFSU2_TR(0x727199);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72719a:{NFSU2_TR(0x72719a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72719b:{NFSU2_TR(0x72719b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72719c:{NFSU2_TR(0x72719c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72719f:{NFSU2_TR(0x72719f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7271a1:{NFSU2_TR(0x7271a1);
u8 U[4];
w4(U+0,u32(0x2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7271a3:{NFSU2_TR(0x7271a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7271a4:{NFSU2_TR(0x7271a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7271a7:{NFSU2_TR(0x7271a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7271ad:{NFSU2_TR(0x7271ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7271af:{NFSU2_TR(0x7271af);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7271b1:{NFSU2_TR(0x7271b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7271b7:L7271b7:{c.instructions+=1;NFSU2_TR(0x7271b7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7271b9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7271b7u);}goto L7271b7;}
}
B7271b9:L7271b9:{c.instructions+=2;NFSU2_TR(0x7271b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7271ba:{NFSU2_TR(0x7271ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7cull))));
__builtin_memmove((R+28),(U+0),4);
}
B7271c0:L7271c0:{c.instructions+=1;NFSU2_TR(0x7271c0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7271c2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7271c0u);}goto L7271c0;}
}
B7271c2:L7271c2:{c.instructions+=5;NFSU2_TR(0x7271c2);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7271c4:{NFSU2_TR(0x7271c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7271ca:{NFSU2_TR(0x7271ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7271d0:{NFSU2_TR(0x7271d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7271d1:{NFSU2_TR(0x7271d1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7271d3:L7271d3:{c.instructions+=7;NFSU2_TR(0x7271d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7271d5:{NFSU2_TR(0x7271d5);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+4)),r2(U+0));
}
B7271d8:{NFSU2_TR(0x7271d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B7271db:{NFSU2_TR(0x7271db);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7271dc:{NFSU2_TR(0x7271dc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7271dd:{NFSU2_TR(0x7271dd);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B7271de:{NFSU2_TR(0x7271de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7271d3u);}goto L7271d3;}}
}
B7271e0:L7271e0:{c.instructions+=62;NFSU2_TR(0x7271e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7271e4:{NFSU2_TR(0x7271e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7271eb:{NFSU2_TR(0x7271eb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7271ed:{NFSU2_TR(0x7271ed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7271ee:{NFSU2_TR(0x7271ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7271f5:{NFSU2_TR(0x7271f5);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7271f7:{NFSU2_TR(0x7271f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7271f8:{NFSU2_TR(0x7271f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7271fb:{NFSU2_TR(0x7271fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7271fe:{NFSU2_TR(0x7271fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727201:{NFSU2_TR(0x727201);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727204:{NFSU2_TR(0x727204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727207:{NFSU2_TR(0x727207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x3cull));
s4(u32(r4(U+0)),r4(U+4));
}
B72720e:{NFSU2_TR(0x72720e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727211:{NFSU2_TR(0x727211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727214:{NFSU2_TR(0x727214);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72721b:{NFSU2_TR(0x72721b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72721e:{NFSU2_TR(0x72721e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727221:{NFSU2_TR(0x727221);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727224:{NFSU2_TR(0x727224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727227:{NFSU2_TR(0x727227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72722a:{NFSU2_TR(0x72722a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72722d:{NFSU2_TR(0x72722d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727230:{NFSU2_TR(0x727230);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727233:{NFSU2_TR(0x727233);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727236:{NFSU2_TR(0x727236);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x818a30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72723d:{NFSU2_TR(0x72723d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727240:{NFSU2_TR(0x727240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727243:{NFSU2_TR(0x727243);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727246:{NFSU2_TR(0x727246);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727249:{NFSU2_TR(0x727249);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72724c:{NFSU2_TR(0x72724c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72724f:{NFSU2_TR(0x72724f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727252:{NFSU2_TR(0x727252);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727255:{NFSU2_TR(0x727255);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727258:{NFSU2_TR(0x727258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72725b:{NFSU2_TR(0x72725b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72725e:{NFSU2_TR(0x72725e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727261:{NFSU2_TR(0x727261);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727264:{NFSU2_TR(0x727264);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727267:{NFSU2_TR(0x727267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72726a:{NFSU2_TR(0x72726a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72726d:{NFSU2_TR(0x72726d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727273:{NFSU2_TR(0x727273);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727279:{NFSU2_TR(0x727279);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
w4(U+4,u32(0x5622ull));
s4(u32(r4(U+0)),r4(U+4));
}
B727283:{NFSU2_TR(0x727283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727289:{NFSU2_TR(0x727289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72728f:{NFSU2_TR(0x72728f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727295:{NFSU2_TR(0x727295);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72729b:{NFSU2_TR(0x72729b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7272a1:{NFSU2_TR(0x7272a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7272a7:{NFSU2_TR(0x7272a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7272ad:{NFSU2_TR(0x7272ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7272b3:{NFSU2_TR(0x7272b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7272b9:{NFSU2_TR(0x7272b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7272bf:{NFSU2_TR(0x7272bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7272c5:{NFSU2_TR(0x7272c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7272cb:{NFSU2_TR(0x7272cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7272d1:{NFSU2_TR(0x7272d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B7272db:{NFSU2_TR(0x7272db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7272e1:{NFSU2_TR(0x7272e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7272e4:{NFSU2_TR(0x7272e4);
{goto L727406;}
}
B7272e9:L7272e9:{c.instructions+=3;NFSU2_TR(0x7272e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7272ec:{NFSU2_TR(0x7272ec);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7272ef:{NFSU2_TR(0x7272ef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L727326;}}
}
B7272f1:L7272f1:{c.instructions+=6;NFSU2_TR(0x7272f1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7272f4:{NFSU2_TR(0x7272f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7272f7:{NFSU2_TR(0x7272f7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7272fb:{NFSU2_TR(0x7272fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7272fe:{NFSU2_TR(0x7272fe);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B727305:{NFSU2_TR(0x727305);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727406;}}
}
B72730b:L72730b:{c.instructions+=7;NFSU2_TR(0x72730b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B72730f:{NFSU2_TR(0x72730f);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B727313:{NFSU2_TR(0x727313);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B727317:{NFSU2_TR(0x727317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72731a:{NFSU2_TR(0x72731a);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72731e:{NFSU2_TR(0x72731e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B727321:{NFSU2_TR(0x727321);
{goto L727406;}
}
B727326:L727326:{c.instructions+=2;NFSU2_TR(0x727326);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72732c:{NFSU2_TR(0x72732c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7273fe;}}
}
B727332:L727332:{c.instructions+=2;NFSU2_TR(0x727332);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B727338:{NFSU2_TR(0x727338);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7273fe;}}
}
B72733e:L72733e:{c.instructions+=7;NFSU2_TR(0x72733e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x98ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B727344:{NFSU2_TR(0x727344);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727347:{NFSU2_TR(0x727347);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffe00ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72734e:{NFSU2_TR(0x72734e);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffee0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B727355:{NFSU2_TR(0x727355);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727358:{NFSU2_TR(0x727358);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffd7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72735f:{NFSU2_TR(0x72735f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727377;}}
}
B727361:L727361:{c.instructions+=4;NFSU2_TR(0x727361);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727367:{NFSU2_TR(0x727367);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B72736b:{NFSU2_TR(0x72736b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B727372:{NFSU2_TR(0x727372);
{goto L727406;}
}
B727377:L727377:{c.instructions+=2;NFSU2_TR(0x727377);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x99ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72737d:{NFSU2_TR(0x72737d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727392;}}
}
B72737f:L72737f:{c.instructions+=4;NFSU2_TR(0x72737f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727385:{NFSU2_TR(0x727385);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727389:{NFSU2_TR(0x727389);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B727390:{NFSU2_TR(0x727390);
{goto L727406;}
}
B727392:L727392:{c.instructions+=2;NFSU2_TR(0x727392);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B727398:{NFSU2_TR(0x727398);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7273ad;}}
}
B72739a:L72739a:{c.instructions+=4;NFSU2_TR(0x72739a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7273a0:{NFSU2_TR(0x7273a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7273a4:{NFSU2_TR(0x7273a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7273ab:{NFSU2_TR(0x7273ab);
{goto L727406;}
}
B7273ad:L7273ad:{c.instructions+=2;NFSU2_TR(0x7273ad);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7273b3:{NFSU2_TR(0x7273b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7273c8;}}
}
B7273b5:L7273b5:{c.instructions+=4;NFSU2_TR(0x7273b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7273bb:{NFSU2_TR(0x7273bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7273bf:{NFSU2_TR(0x7273bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7273c6:{NFSU2_TR(0x7273c6);
{goto L727406;}
}
B7273c8:L7273c8:{c.instructions+=2;NFSU2_TR(0x7273c8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7273ce:{NFSU2_TR(0x7273ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7273e3;}}
}
B7273d0:L7273d0:{c.instructions+=4;NFSU2_TR(0x7273d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7273d6:{NFSU2_TR(0x7273d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7273da:{NFSU2_TR(0x7273da);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7273e1:{NFSU2_TR(0x7273e1);
{goto L727406;}
}
B7273e3:L7273e3:{c.instructions+=2;NFSU2_TR(0x7273e3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7273e9:{NFSU2_TR(0x7273e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727406;}}
}
B7273eb:L7273eb:{c.instructions+=4;NFSU2_TR(0x7273eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7273f1:{NFSU2_TR(0x7273f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7273f5:{NFSU2_TR(0x7273f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7273fc:{NFSU2_TR(0x7273fc);
{goto L727406;}
}
B7273fe:L7273fe:{c.instructions+=2;NFSU2_TR(0x7273fe);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B727404:{NFSU2_TR(0x727404);
if(r1(R+518)){{goto L72741a;}}
}
B727406:L727406:{c.instructions+=3;NFSU2_TR(0x727406);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B727409:{NFSU2_TR(0x727409);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72740a:{NFSU2_TR(0x72740a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72740full));
TAIL_STATIC(0x72aaf8u,72a);
}
B72740f:L72740f:{c.instructions+=3;NFSU2_TR(0x72740f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727411:{NFSU2_TR(0x727411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B727412:{NFSU2_TR(0x727412);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7272e9u);}goto L7272e9;}}
}
B727418:L727418:{c.instructions+=1;NFSU2_TR(0x727418);
{goto L72741d;}
}
B72741a:L72741a:{c.instructions+=1;NFSU2_TR(0x72741a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72741d:L72741d:{c.instructions+=125;NFSU2_TR(0x72741d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727420:{NFSU2_TR(0x727420);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727423:{NFSU2_TR(0x727423);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727426:{NFSU2_TR(0x727426);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727429:{NFSU2_TR(0x727429);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72742c:{NFSU2_TR(0x72742c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72742f:{NFSU2_TR(0x72742f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727432:{NFSU2_TR(0x727432);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727435:{NFSU2_TR(0x727435);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727438:{NFSU2_TR(0x727438);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72743b:{NFSU2_TR(0x72743b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72743e:{NFSU2_TR(0x72743e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727441:{NFSU2_TR(0x727441);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727444:{NFSU2_TR(0x727444);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727447:{NFSU2_TR(0x727447);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72744a:{NFSU2_TR(0x72744a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72744d:{NFSU2_TR(0x72744d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727450:{NFSU2_TR(0x727450);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727453:{NFSU2_TR(0x727453);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727456:{NFSU2_TR(0x727456);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727459:{NFSU2_TR(0x727459);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72745c:{NFSU2_TR(0x72745c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72745f:{NFSU2_TR(0x72745f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727462:{NFSU2_TR(0x727462);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727465:{NFSU2_TR(0x727465);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727468:{NFSU2_TR(0x727468);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72746b:{NFSU2_TR(0x72746b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B72746f:{NFSU2_TR(0x72746f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B727472:{NFSU2_TR(0x727472);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B727476:{NFSU2_TR(0x727476);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B72747a:{NFSU2_TR(0x72747a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72747e:{NFSU2_TR(0x72747e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727484:{NFSU2_TR(0x727484);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B727486:{NFSU2_TR(0x727486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B727489:{NFSU2_TR(0x727489);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72748c:{NFSU2_TR(0x72748c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72748f:{NFSU2_TR(0x72748f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727492:{NFSU2_TR(0x727492);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727498:{NFSU2_TR(0x727498);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B72749a:{NFSU2_TR(0x72749a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72749d:{NFSU2_TR(0x72749d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7274a0:{NFSU2_TR(0x7274a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7274a6:{NFSU2_TR(0x7274a6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7274a8:{NFSU2_TR(0x7274a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7274ab:{NFSU2_TR(0x7274ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7274ae:{NFSU2_TR(0x7274ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7274b4:{NFSU2_TR(0x7274b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7274b7:{NFSU2_TR(0x7274b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7274ba:{NFSU2_TR(0x7274ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7274c0:{NFSU2_TR(0x7274c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7274c3:{NFSU2_TR(0x7274c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7274c9:{NFSU2_TR(0x7274c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7274cc:{NFSU2_TR(0x7274cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7274d2:{NFSU2_TR(0x7274d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7274d5:{NFSU2_TR(0x7274d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7274db:{NFSU2_TR(0x7274db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7274de:{NFSU2_TR(0x7274de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7274e4:{NFSU2_TR(0x7274e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7274e7:{NFSU2_TR(0x7274e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7274ea:{NFSU2_TR(0x7274ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7274f0:{NFSU2_TR(0x7274f0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7274f2:{NFSU2_TR(0x7274f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7274f5:{NFSU2_TR(0x7274f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7274f8:{NFSU2_TR(0x7274f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7274fb:{NFSU2_TR(0x7274fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7274fe:{NFSU2_TR(0x7274fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727501:{NFSU2_TR(0x727501);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727504:{NFSU2_TR(0x727504);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72750a:{NFSU2_TR(0x72750a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B72750c:{NFSU2_TR(0x72750c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72750f:{NFSU2_TR(0x72750f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727512:{NFSU2_TR(0x727512);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727515:{NFSU2_TR(0x727515);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727519:{NFSU2_TR(0x727519);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72751d:{NFSU2_TR(0x72751d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727520:{NFSU2_TR(0x727520);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727523:{NFSU2_TR(0x727523);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727527:{NFSU2_TR(0x727527);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B72752a:{NFSU2_TR(0x72752a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72752d:{NFSU2_TR(0x72752d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727530:{NFSU2_TR(0x727530);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727536:{NFSU2_TR(0x727536);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727539:{NFSU2_TR(0x727539);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72753f:{NFSU2_TR(0x72753f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727542:{NFSU2_TR(0x727542);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727549:{NFSU2_TR(0x727549);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72754d:{NFSU2_TR(0x72754d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727553:{NFSU2_TR(0x727553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727556:{NFSU2_TR(0x727556);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72755c:{NFSU2_TR(0x72755c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72755f:{NFSU2_TR(0x72755f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727565:{NFSU2_TR(0x727565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727568:{NFSU2_TR(0x727568);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B72756f:{NFSU2_TR(0x72756f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B727573:{NFSU2_TR(0x727573);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727579:{NFSU2_TR(0x727579);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72757c:{NFSU2_TR(0x72757c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727582:{NFSU2_TR(0x727582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727585:{NFSU2_TR(0x727585);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72758b:{NFSU2_TR(0x72758b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72758e:{NFSU2_TR(0x72758e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727594:{NFSU2_TR(0x727594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727597:{NFSU2_TR(0x727597);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72759d:{NFSU2_TR(0x72759d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7275a3:{NFSU2_TR(0x7275a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7275a6:{NFSU2_TR(0x7275a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7275ac:{NFSU2_TR(0x7275ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7275af:{NFSU2_TR(0x7275af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7275b5:{NFSU2_TR(0x7275b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7275b8:{NFSU2_TR(0x7275b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7275be:{NFSU2_TR(0x7275be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7275c1:{NFSU2_TR(0x7275c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7275c7:{NFSU2_TR(0x7275c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7275ca:{NFSU2_TR(0x7275ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7275d0:{NFSU2_TR(0x7275d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7275d3:{NFSU2_TR(0x7275d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7275d9:{NFSU2_TR(0x7275d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7275dc:{NFSU2_TR(0x7275dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7275e2:{NFSU2_TR(0x7275e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7275e5:{NFSU2_TR(0x7275e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7275eb:{NFSU2_TR(0x7275eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7275ee:{NFSU2_TR(0x7275ee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7275f0:{NFSU2_TR(0x7275f0);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(R+4),r1(U+0)));
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7275f2:{NFSU2_TR(0x7275f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7275f5:{NFSU2_TR(0x7275f5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L727634;}}
}
B7275f7:L7275f7:{c.instructions+=1;NFSU2_TR(0x7275f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((R+8),(U+0),4);
}
B7275fd:L7275fd:{c.instructions+=2;NFSU2_TR(0x7275fd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b46ec),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B727603:{NFSU2_TR(0x727603);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72760f;}}
}
B727605:L727605:{c.instructions+=2;NFSU2_TR(0x727605);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B727609:{NFSU2_TR(0x727609);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72760f;}}
}
B72760b:L72760b:{c.instructions+=1;NFSU2_TR(0x72760b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72760f:L72760f:{c.instructions+=12;NFSU2_TR(0x72760f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B727613:{NFSU2_TR(0x727613);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B727616:{NFSU2_TR(0x727616);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B727619:{NFSU2_TR(0x727619);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b466cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+4),(U+8),2);
}
B727621:{NFSU2_TR(0x727621);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(R+4,u16(u32(r2(R+4))+u32(r2(U+12))));
}
B727626:{NFSU2_TR(0x727626);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B727627:{NFSU2_TR(0x727627);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+8)),r2(U+0));
}
B72762a:{NFSU2_TR(0x72762a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B72762e:{NFSU2_TR(0x72762e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72762f:{NFSU2_TR(0x72762f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B727630:{NFSU2_TR(0x727630);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B727632:{NFSU2_TR(0x727632);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7275fdu);}goto L7275fd;}}
}
B727634:L727634:{c.instructions+=10;NFSU2_TR(0x727634);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727637:{NFSU2_TR(0x727637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72763a:{NFSU2_TR(0x72763a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72763b:{NFSU2_TR(0x72763b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72763c:{NFSU2_TR(0x72763c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72763e:{NFSU2_TR(0x72763e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727641:{NFSU2_TR(0x727641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B727642:{NFSU2_TR(0x727642);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x70ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B727645:{NFSU2_TR(0x727645);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B727646:{NFSU2_TR(0x727646);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727647:L727647:{c.instructions+=4;NFSU2_TR(0x727647);
w4(R+4,u32(m2(0x8b44c4)));
}
B72764e:{NFSU2_TR(0x72764e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B727650:{NFSU2_TR(0x727650);
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
B727652:{NFSU2_TR(0x727652);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L727665;}}
}
B727654:L727654:{c.instructions+=3;NFSU2_TR(0x727654);
__builtin_memmove((R+8),gp(0x8b4670),4);
}
B72765a:{NFSU2_TR(0x72765a);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0x0ull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B72765e:{NFSU2_TR(0x72765e);
if(r1(R+518)){{goto L727668;}}
}
B727660:L727660:{c.instructions+=3;NFSU2_TR(0x727660);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B727661:{NFSU2_TR(0x727661);
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
B727663:{NFSU2_TR(0x727663);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727654u);}goto L727654;}}
}
B727665:L727665:{c.instructions+=2;NFSU2_TR(0x727665);
u8 U[4];
w4(U+0,u32(0xfffffff7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727667:{NFSU2_TR(0x727667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B727668:L727668:{c.instructions+=1;NFSU2_TR(0x727668);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727669:L727669:{c.instructions+=5;NFSU2_TR(0x727669);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72766d:{NFSU2_TR(0x72766d);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B727671:{NFSU2_TR(0x727671);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727675:{NFSU2_TR(0x727675);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B727677:{NFSU2_TR(0x727677);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L727687;}}
}
B727679:L727679:{c.instructions+=4;NFSU2_TR(0x727679);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x14ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B727680:{NFSU2_TR(0x727680);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B727683:{NFSU2_TR(0x727683);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727685:{NFSU2_TR(0x727685);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72768a;}}
}
B727687:L727687:{c.instructions+=2;NFSU2_TR(0x727687);
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
B727689:{NFSU2_TR(0x727689);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72768a:L72768a:{c.instructions+=3;NFSU2_TR(0x72768a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B72768c:{NFSU2_TR(0x72768c);
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
B72768e:{NFSU2_TR(0x72768e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72768f:L72768f:{c.instructions+=3;NFSU2_TR(0x72768f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727693:{NFSU2_TR(0x727693);
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
B727695:{NFSU2_TR(0x727695);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7276bb;}}
}
B727697:L727697:{c.instructions+=3;NFSU2_TR(0x727697);
w4(R+4,u32(m2(0x8b44c4)));
}
B72769e:{NFSU2_TR(0x72769e);
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
B7276a0:{NFSU2_TR(0x7276a0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7276bb;}}
}
B7276a2:L7276a2:{c.instructions+=4;NFSU2_TR(0x7276a2);
__builtin_memmove((R+4),gp(0x8b4670),4);
}
B7276a8:{NFSU2_TR(0x7276a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7276ab:{NFSU2_TR(0x7276ab);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B7276ae:{NFSU2_TR(0x7276ae);
if(r1(R+518)){{goto L7276bb;}}
}
B7276b0:L7276b0:{c.instructions+=5;NFSU2_TR(0x7276b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7276b3:{NFSU2_TR(0x7276b3);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B7276b5:{NFSU2_TR(0x7276b5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B7276b7:{NFSU2_TR(0x7276b7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffeeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7276ba:{NFSU2_TR(0x7276ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7276bb:L7276bb:{c.instructions+=3;NFSU2_TR(0x7276bb);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7276bd:{NFSU2_TR(0x7276bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7276be:{NFSU2_TR(0x7276be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7276bf:L7276bf:{c.instructions+=19;NFSU2_TR(0x7276bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7276c0:{NFSU2_TR(0x7276c0);
__builtin_memmove((R+20),(R+16),4);
}
B7276c2:{NFSU2_TR(0x7276c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7276c3:{NFSU2_TR(0x7276c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7276c6:{NFSU2_TR(0x7276c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7276c9:{NFSU2_TR(0x7276c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7276cc:{NFSU2_TR(0x7276cc);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B7276d2:{NFSU2_TR(0x7276d2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B7276d6:{NFSU2_TR(0x7276d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7276d9:{NFSU2_TR(0x7276d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B7276dd:{NFSU2_TR(0x7276dd);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7276e0:{NFSU2_TR(0x7276e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7276e3:{NFSU2_TR(0x7276e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7276e6:{NFSU2_TR(0x7276e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7276e8:{NFSU2_TR(0x7276e8);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B7276eb:{NFSU2_TR(0x7276eb);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7276ee:{NFSU2_TR(0x7276ee);
{u32 ea_=u32(u32(8153388u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7276f4:{NFSU2_TR(0x7276f4);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7276f7:{NFSU2_TR(0x7276f7);
if(r1(R+518)){{goto L727712;}}
}
B7276f9:L7276f9:{c.instructions+=7;NFSU2_TR(0x7276f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7276fd:{NFSU2_TR(0x7276fd);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(s32(s8(r1(U+8)))));
}
B727701:{NFSU2_TR(0x727701);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727704:{NFSU2_TR(0x727704);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B727707:{NFSU2_TR(0x727707);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B727709:{NFSU2_TR(0x727709);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72770f:{NFSU2_TR(0x72770f);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B727712:L727712:{c.instructions+=3;NFSU2_TR(0x727712);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
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
B727716:{NFSU2_TR(0x727716);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B727718:{NFSU2_TR(0x727718);
if(r1(R+518)){{goto L72773f;}}
}
B72771a:L72771a:{c.instructions+=11;NFSU2_TR(0x72771a);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72771d:{NFSU2_TR(0x72771d);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B727723:{NFSU2_TR(0x727723);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B727726:{NFSU2_TR(0x727726);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B727729:{NFSU2_TR(0x727729);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72772c:{NFSU2_TR(0x72772c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72772f:{NFSU2_TR(0x72772f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B727732:{NFSU2_TR(0x727732);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(s32(s8(r1(U+8)))));
}
B727736:{NFSU2_TR(0x727736);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727739:{NFSU2_TR(0x727739);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72773c:{NFSU2_TR(0x72773c);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72773f:L72773f:{c.instructions+=5;NFSU2_TR(0x72773f);
{u32 ea_=u32(u32(8487092u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B727745:{NFSU2_TR(0x727745);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B727748:{NFSU2_TR(0x727748);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72774b:{NFSU2_TR(0x72774b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72774c:{NFSU2_TR(0x72774c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72774d:L72774d:{c.instructions+=7;NFSU2_TR(0x72774d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B727751:{NFSU2_TR(0x727751);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727752:{NFSU2_TR(0x727752);
w4(R+24,u32(0x4b0ull));
}
B727757:{NFSU2_TR(0x727757);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B727759:{NFSU2_TR(0x727759);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72775a:{NFSU2_TR(0x72775a);
w4(R+28,u32(0x1000ull));
}
B72775f:{NFSU2_TR(0x72775f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72777a;}}
}
B727761:L727761:{c.instructions+=9;NFSU2_TR(0x727761);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B727763:{NFSU2_TR(0x727763);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727764:{NFSU2_TR(0x727764);
__builtin_memmove((R+0),(R+4),4);
}
B727766:{NFSU2_TR(0x727766);
__builtin_memmove((R+12),(R+24),4);
}
B727768:{NFSU2_TR(0x727768);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x727768);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x727768);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B72776a:{NFSU2_TR(0x72776a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72776b:{NFSU2_TR(0x72776b);
__builtin_memmove((R+8),(R+0),4);
}
B72776d:{NFSU2_TR(0x72776d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xfffffb50ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B727773:{NFSU2_TR(0x727773);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B727775:L727775:{c.instructions+=3;NFSU2_TR(0x727775);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B727777:{NFSU2_TR(0x727777);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B727778:{NFSU2_TR(0x727778);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727775u);}goto L727775;}}
}
B72777a:L72777a:{c.instructions+=3;NFSU2_TR(0x72777a);
w4(R+0,u32(0xfffffb50ull));
}
B72777f:{NFSU2_TR(0x72777f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B727781:{NFSU2_TR(0x727781);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L727799;}}
}
B727783:L727783:{c.instructions+=7;NFSU2_TR(0x727783);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B727785:{NFSU2_TR(0x727785);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B727787:{NFSU2_TR(0x727787);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x727787);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x727787);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B727789:{NFSU2_TR(0x727789);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72778a:{NFSU2_TR(0x72778a);
__builtin_memmove((R+8),(R+0),4);
}
B72778c:{NFSU2_TR(0x72778c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x4b0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B727792:{NFSU2_TR(0x727792);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B727794:L727794:{c.instructions+=3;NFSU2_TR(0x727794);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B727796:{NFSU2_TR(0x727796);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B727797:{NFSU2_TR(0x727797);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727794u);}goto L727794;}}
}
B727799:L727799:{c.instructions+=5;NFSU2_TR(0x727799);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x369dull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B72779f:{NFSU2_TR(0x72779f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B7277a2:{NFSU2_TR(0x7277a2);
w4(R+0,u32(0xffffff01ull));
}
B7277a7:{NFSU2_TR(0x7277a7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7277a9:{NFSU2_TR(0x7277a9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7277ad;}}
}
B7277ab:L7277ab:{c.instructions+=1;NFSU2_TR(0x7277ab);
__builtin_memmove((R+4),(R+0),4);
}
B7277ad:L7277ad:{c.instructions+=2;NFSU2_TR(0x7277ad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7277af:{NFSU2_TR(0x7277af);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7277c5;}}
}
B7277b1:L7277b1:{c.instructions+=5;NFSU2_TR(0x7277b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x818b38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7277b8:{NFSU2_TR(0x7277b8);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7277bd:{NFSU2_TR(0x7277bd);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+28)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B7277c0:{NFSU2_TR(0x7277c0);
u8 U[47];
w4(U+39,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B7277c3:{NFSU2_TR(0x7277c3);
{goto L7277d7;}
}
B7277c5:L7277c5:{c.instructions+=4;NFSU2_TR(0x7277c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x818a38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7277cc:{NFSU2_TR(0x7277cc);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7277d1:{NFSU2_TR(0x7277d1);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+28)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B7277d4:{NFSU2_TR(0x7277d4);
u8 U[47];
w4(U+39,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B7277d7:L7277d7:{c.instructions+=3;NFSU2_TR(0x7277d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7277d8:{NFSU2_TR(0x7277d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7277d9:{NFSU2_TR(0x7277d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7277da:L7277da:{c.instructions+=7;NFSU2_TR(0x7277da);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7277de:{NFSU2_TR(0x7277de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7277df:{NFSU2_TR(0x7277df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7277e2:{NFSU2_TR(0x7277e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7277e5:{NFSU2_TR(0x7277e5);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b466c))));
}
B7277eb:{NFSU2_TR(0x7277eb);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B7277f3:{NFSU2_TR(0x7277f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72785f;}}
}
B7277f5:L7277f5:{c.instructions+=4;NFSU2_TR(0x7277f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B7277fc:{NFSU2_TR(0x7277fc);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B7277ff:{NFSU2_TR(0x7277ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B727806:{NFSU2_TR(0x727806);
if(r1(R+518)){{goto L72782d;}}
}
B727808:L727808:{c.instructions+=3;NFSU2_TR(0x727808);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72780b:{NFSU2_TR(0x72780b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72780d:{NFSU2_TR(0x72780d);
if(r1(R+518)){{goto L72781b;}}
}
B72780f:L72780f:{c.instructions+=5;NFSU2_TR(0x72780f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727810:{NFSU2_TR(0x727810);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B727814:{NFSU2_TR(0x727814);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(s32(s8(r1(U+8)))));
}
B727818:{NFSU2_TR(0x727818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B727819:{NFSU2_TR(0x727819);
{goto L72781f;}
}
B72781b:L72781b:{c.instructions+=1;NFSU2_TR(0x72781b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B72781f:L72781f:{c.instructions+=5;NFSU2_TR(0x72781f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffc0ull))));
}
B727822:{NFSU2_TR(0x727822);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B727825:{NFSU2_TR(0x727825);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B727828:{NFSU2_TR(0x727828);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B72782b:{NFSU2_TR(0x72782b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B72782d:L72782d:{c.instructions+=3;NFSU2_TR(0x72782d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727833:{NFSU2_TR(0x727833);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727835:{NFSU2_TR(0x727835);
if(r1(R+518)){{goto L727851;}}
}
B727837:L727837:{c.instructions+=7;NFSU2_TR(0x727837);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72783b:{NFSU2_TR(0x72783b);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(s32(s8(r1(U+8)))));
}
B72783f:{NFSU2_TR(0x72783f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B727846:{NFSU2_TR(0x727846);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x40ull))));
}
B727849:{NFSU2_TR(0x727849);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72784c:{NFSU2_TR(0x72784c);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B72784f:{NFSU2_TR(0x72784f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B727851:L727851:{c.instructions+=2;NFSU2_TR(0x727851);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727852:{NFSU2_TR(0x727852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727857ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72774du);}goto L72774d;}
}
B727857:L727857:{c.instructions+=2;NFSU2_TR(0x727857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B727858:{NFSU2_TR(0x727858);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72785f:L72785f:{c.instructions+=7;NFSU2_TR(0x72785f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B727866:{NFSU2_TR(0x727866);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B72786d:{NFSU2_TR(0x72786d);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B727870:{NFSU2_TR(0x727870);
u8 U[47];
w4(U+39,u32(u32(u32(0xcull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B727873:{NFSU2_TR(0x727873);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72787a:{NFSU2_TR(0x72787a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72787b:{NFSU2_TR(0x72787b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72787c:L72787c:{c.instructions+=5;NFSU2_TR(0x72787c);
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
B72787e:{NFSU2_TR(0x72787e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72787f:{NFSU2_TR(0x72787f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727880:{NFSU2_TR(0x727880);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727881:{NFSU2_TR(0x727881);
u8 U[4];
__builtin_memmove((U+0),gp(0x78324c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727887ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B727887:L727887:{c.instructions+=2;NFSU2_TR(0x727887);
__builtin_memmove(gp(0x8b47dc),(R+0),4);
}
B72788c:{NFSU2_TR(0x72788c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72788d:L72788d:{c.instructions+=2;NFSU2_TR(0x72788d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b47dc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727893:{NFSU2_TR(0x727893);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727899ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B727899:L727899:{c.instructions+=1;NFSU2_TR(0x727899);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72789a:L72789a:{c.instructions+=3;NFSU2_TR(0x72789a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72789c:{NFSU2_TR(0x72789c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b47dc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7278a2:{NFSU2_TR(0x7278a2);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7278a8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7278a8:L7278a8:{c.instructions+=1;NFSU2_TR(0x7278a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7278a9:L7278a9:{c.instructions+=2;NFSU2_TR(0x7278a9);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b47dc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7278af:{NFSU2_TR(0x7278af);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7278b5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7278b5:L7278b5:{c.instructions+=1;NFSU2_TR(0x7278b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7278b6:L7278b6:{c.instructions+=5;NFSU2_TR(0x7278b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7278b7:{NFSU2_TR(0x7278b7);
__builtin_memmove((R+20),(R+16),4);
}
B7278b9:{NFSU2_TR(0x7278b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7278ba:{NFSU2_TR(0x7278ba);
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
B7278c1:{NFSU2_TR(0x7278c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7278c8;}}
}
B7278c3:L7278c3:{c.instructions+=4;NFSU2_TR(0x7278c3);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7278c5:{NFSU2_TR(0x7278c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7278c6:{NFSU2_TR(0x7278c6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7278c7:{NFSU2_TR(0x7278c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7278c8:L7278c8:{c.instructions+=3;NFSU2_TR(0x7278c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7278c9:{NFSU2_TR(0x7278c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7278cc:{NFSU2_TR(0x7278cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7278d1ull));
TAIL_STATIC(0x725480u,725);
}
B7278d1:L7278d1:{c.instructions+=4;NFSU2_TR(0x7278d1);
__builtin_memmove((R+24),(R+0),4);
}
B7278d3:{NFSU2_TR(0x7278d3);
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
B7278d5:{NFSU2_TR(0x7278d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7278d6:{NFSU2_TR(0x7278d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L727906;}}
}
B7278d8:L7278d8:{c.instructions+=5;NFSU2_TR(0x7278d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7278dc:{NFSU2_TR(0x7278dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7278df:{NFSU2_TR(0x7278df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7278e0:{NFSU2_TR(0x7278e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7278e1:{NFSU2_TR(0x7278e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7278e6ull));
{goto L727fbd;}
}
B7278e6:L7278e6:{c.instructions+=3;NFSU2_TR(0x7278e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7278e7:{NFSU2_TR(0x7278e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7278e8:{NFSU2_TR(0x7278e8);
{goto L727902;}
}
B7278ea:L7278ea:{c.instructions+=3;NFSU2_TR(0x7278ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7278ed:{NFSU2_TR(0x7278ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7278f0:{NFSU2_TR(0x7278f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7278f5ull));
TAIL_STATIC(0x72ab71u,72a);
}
B7278f5:L7278f5:{c.instructions+=4;NFSU2_TR(0x7278f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7278f8:{NFSU2_TR(0x7278f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7278f9:{NFSU2_TR(0x7278f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7278fa:{NFSU2_TR(0x7278fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7278ffull));
{goto L727fbd;}
}
B7278ff:L7278ff:{c.instructions+=1;NFSU2_TR(0x7278ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B727902:L727902:{c.instructions+=2;NFSU2_TR(0x727902);
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
B727904:{NFSU2_TR(0x727904);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7278eau);}goto L7278ea;}}
}
B727906:L727906:{c.instructions+=4;NFSU2_TR(0x727906);
__builtin_memmove((R+0),(R+24),4);
}
B727908:{NFSU2_TR(0x727908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727909:{NFSU2_TR(0x727909);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72790a:{NFSU2_TR(0x72790a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72790b:L72790b:{c.instructions+=12;NFSU2_TR(0x72790b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72790f:{NFSU2_TR(0x72790f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B727913:{NFSU2_TR(0x727913);
__builtin_memmove((R+0),gp(0x8b46ec),4);
}
B727918:{NFSU2_TR(0x727918);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727919:{NFSU2_TR(0x727919);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72791c:{NFSU2_TR(0x72791c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72791d:{NFSU2_TR(0x72791d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B727920:{NFSU2_TR(0x727920);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B727923:{NFSU2_TR(0x727923);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B727925:{NFSU2_TR(0x727925);
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
B727927:{NFSU2_TR(0x727927);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7c692aull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B72792e:{NFSU2_TR(0x72792e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72795c;}}
}
B727930:L727930:{c.instructions+=3;NFSU2_TR(0x727930);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727931:{NFSU2_TR(0x727931);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727932:{NFSU2_TR(0x727932);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B727935:L727935:{c.instructions+=13;NFSU2_TR(0x727935);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B727939:{NFSU2_TR(0x727939);
__builtin_memmove((R+12),gp(0x8b466c),4);
}
B72793f:{NFSU2_TR(0x72793f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B727941:{NFSU2_TR(0x727941);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+5),(U+8),1);
}
B727944:{NFSU2_TR(0x727944);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B727947:{NFSU2_TR(0x727947);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72794a:{NFSU2_TR(0x72794a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B72794b:{NFSU2_TR(0x72794b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B72794c:{NFSU2_TR(0x72794c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B72794d:{NFSU2_TR(0x72794d);
u8 U[14];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B727952:{NFSU2_TR(0x727952);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B727956:{NFSU2_TR(0x727956);
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
B727958:{NFSU2_TR(0x727958);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727935u);}goto L727935;}}
}
B72795a:L72795a:{c.instructions+=2;NFSU2_TR(0x72795a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72795b:{NFSU2_TR(0x72795b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72795c:L72795c:{c.instructions+=3;NFSU2_TR(0x72795c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72795d:{NFSU2_TR(0x72795d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72795e:{NFSU2_TR(0x72795e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72795f:L72795f:{c.instructions+=6;NFSU2_TR(0x72795f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727963:{NFSU2_TR(0x727963);
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
B727965:{NFSU2_TR(0x727965);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B727967:{NFSU2_TR(0x727967);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72796a:{NFSU2_TR(0x72796a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72796d:{NFSU2_TR(0x72796d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72796e:L72796e:{c.instructions+=8;NFSU2_TR(0x72796e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727972:{NFSU2_TR(0x727972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B727974:{NFSU2_TR(0x727974);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B727978:{NFSU2_TR(0x727978);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72797c:{NFSU2_TR(0x72797c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72797e:{NFSU2_TR(0x72797e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B727980:{NFSU2_TR(0x727980);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727982:{NFSU2_TR(0x727982);
if(r1(R+518)){{goto L727989;}}
}
B727984:L727984:{c.instructions+=2;NFSU2_TR(0x727984);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727987:{NFSU2_TR(0x727987);
{goto L72798c;}
}
B727989:L727989:{c.instructions+=1;NFSU2_TR(0x727989);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72798c:L72798c:{c.instructions+=3;NFSU2_TR(0x72798c);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B72798f:{NFSU2_TR(0x72798f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B727991:{NFSU2_TR(0x727991);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727992:L727992:{c.instructions+=8;NFSU2_TR(0x727992);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B727996:{NFSU2_TR(0x727996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B727999:{NFSU2_TR(0x727999);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72799d:{NFSU2_TR(0x72799d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7279a0:{NFSU2_TR(0x7279a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7279a3:{NFSU2_TR(0x7279a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7279a6:{NFSU2_TR(0x7279a6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7279a8:{NFSU2_TR(0x7279a8);
if(r1(R+518)){{goto L7279ae;}}
}
B7279aa:L7279aa:{c.instructions+=2;NFSU2_TR(0x7279aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7279ac:{NFSU2_TR(0x7279ac);
{goto L7279b0;}
}
B7279ae:L7279ae:{c.instructions+=1;NFSU2_TR(0x7279ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7279b0:L7279b0:{c.instructions+=3;NFSU2_TR(0x7279b0);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B7279b3:{NFSU2_TR(0x7279b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7279b6:{NFSU2_TR(0x7279b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7279b7:L7279b7:{c.instructions+=4;NFSU2_TR(0x7279b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7279bb:{NFSU2_TR(0x7279bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7279bd:{NFSU2_TR(0x7279bd);
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
B7279bf:{NFSU2_TR(0x7279bf);
if(r1(R+518)){{goto L7279d5;}}
}
B7279c1:L7279c1:{c.instructions+=4;NFSU2_TR(0x7279c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7279c3:{NFSU2_TR(0x7279c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7279c5:{NFSU2_TR(0x7279c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7279c7:{NFSU2_TR(0x7279c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7279ce;}}
}
B7279c9:L7279c9:{c.instructions+=2;NFSU2_TR(0x7279c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B7279cc:{NFSU2_TR(0x7279cc);
{goto L7279d2;}
}
B7279ce:L7279ce:{c.instructions+=1;NFSU2_TR(0x7279ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7279d2:L7279d2:{c.instructions+=1;NFSU2_TR(0x7279d2);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
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
B7279d5:L7279d5:{c.instructions+=1;NFSU2_TR(0x7279d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7279d6:L7279d6:{c.instructions+=5;NFSU2_TR(0x7279d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7279da:{NFSU2_TR(0x7279da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7279dc:{NFSU2_TR(0x7279dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7279e0:{NFSU2_TR(0x7279e0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7279e2:{NFSU2_TR(0x7279e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7279e8;}}
}
B7279e4:L7279e4:{c.instructions+=2;NFSU2_TR(0x7279e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7279e6:{NFSU2_TR(0x7279e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7279e8:L7279e8:{c.instructions+=3;NFSU2_TR(0x7279e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7279eb:{NFSU2_TR(0x7279eb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7279ed:{NFSU2_TR(0x7279ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7279f5;}}
}
B7279ef:L7279ef:{c.instructions+=2;NFSU2_TR(0x7279ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7279f2:{NFSU2_TR(0x7279f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7279f5:L7279f5:{c.instructions+=3;NFSU2_TR(0x7279f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7279f8:{NFSU2_TR(0x7279f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7279fa:{NFSU2_TR(0x7279fa);
if(r1(R+518)){{goto L727a02;}}
}
B7279fc:L7279fc:{c.instructions+=4;NFSU2_TR(0x7279fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7279fd:{NFSU2_TR(0x7279fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B7279ff:{NFSU2_TR(0x7279ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B727a01:{NFSU2_TR(0x727a01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727a02:L727a02:{c.instructions+=3;NFSU2_TR(0x727a02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B727a04:{NFSU2_TR(0x727a04);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727a06:{NFSU2_TR(0x727a06);
if(r1(R+518)){{goto L727a0e;}}
}
B727a08:L727a08:{c.instructions+=2;NFSU2_TR(0x727a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727a0b:{NFSU2_TR(0x727a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727a0e:L727a0e:{c.instructions+=2;NFSU2_TR(0x727a0e);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
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
B727a11:{NFSU2_TR(0x727a11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727a12:L727a12:{c.instructions+=4;NFSU2_TR(0x727a12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727a13:{NFSU2_TR(0x727a13);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B727a17:{NFSU2_TR(0x727a17);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B727a19:{NFSU2_TR(0x727a19);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L727a2d;}}
}
B727a1b:L727a1b:{c.instructions+=4;NFSU2_TR(0x727a1b);
__builtin_memmove((R+0),(R+24),4);
}
B727a1d:{NFSU2_TR(0x727a1d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B727a22:{NFSU2_TR(0x727a22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727a23:{NFSU2_TR(0x727a23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727a28ull));
TAIL_STATIC(0x722424u,722);
}
B727a28:L727a28:{c.instructions+=3;NFSU2_TR(0x727a28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727a2a:{NFSU2_TR(0x727a2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B727a2b:{NFSU2_TR(0x727a2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727a31;}}
}
B727a2d:L727a2d:{c.instructions+=3;NFSU2_TR(0x727a2d);
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
B727a2f:{NFSU2_TR(0x727a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727a30:{NFSU2_TR(0x727a30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727a31:L727a31:{c.instructions+=2;NFSU2_TR(0x727a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727a37:{NFSU2_TR(0x727a37);
{goto L727a40;}
}
B727a39:L727a39:{c.instructions+=2;NFSU2_TR(0x727a39);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B727a3c:{NFSU2_TR(0x727a3c);
if(r1(R+518)){{goto L727a44;}}
}
B727a3e:L727a3e:{c.instructions+=1;NFSU2_TR(0x727a3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B727a40:L727a40:{c.instructions+=2;NFSU2_TR(0x727a40);
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
B727a42:{NFSU2_TR(0x727a42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727a39u);}goto L727a39;}}
}
B727a44:L727a44:{c.instructions+=2;NFSU2_TR(0x727a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727a45:{NFSU2_TR(0x727a45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727a46:L727a46:{c.instructions+=11;NFSU2_TR(0x727a46);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727a47:{NFSU2_TR(0x727a47);
__builtin_memmove((R+20),(R+16),4);
}
B727a49:{NFSU2_TR(0x727a49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B727a4c:{NFSU2_TR(0x727a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B727a50:{NFSU2_TR(0x727a50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727a51:{NFSU2_TR(0x727a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B727a54:{NFSU2_TR(0x727a54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727a55:{NFSU2_TR(0x727a55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727a56:{NFSU2_TR(0x727a56);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727a58:{NFSU2_TR(0x727a58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727a59:{NFSU2_TR(0x727a59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727a5eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727030u);}goto L727030;}
}
B727a5e:L727a5e:{c.instructions+=4;NFSU2_TR(0x727a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B727a61:{NFSU2_TR(0x727a61);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727a63:{NFSU2_TR(0x727a63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727a64:{NFSU2_TR(0x727a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727a69ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727030u);}goto L727030;}
}
B727a69:L727a69:{c.instructions+=3;NFSU2_TR(0x727a69);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727a6b:{NFSU2_TR(0x727a6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727a6e:{NFSU2_TR(0x727a6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727a73ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727030u);}goto L727030;}
}
B727a73:L727a73:{c.instructions+=5;NFSU2_TR(0x727a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B727a76:{NFSU2_TR(0x727a76);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B727a78:{NFSU2_TR(0x727a78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B727a7b:{NFSU2_TR(0x727a7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x50ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B727a7d:{NFSU2_TR(0x727a7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727a85;}}
}
B727a7f:L727a7f:{c.instructions+=2;NFSU2_TR(0x727a7f);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x54ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B727a83:{NFSU2_TR(0x727a83);
if(r1(R+518)){{goto L727abe;}}
}
B727a85:L727a85:{c.instructions+=2;NFSU2_TR(0x727a85);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x47ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B727a87:{NFSU2_TR(0x727a87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727abe;}}
}
B727a89:L727a89:{c.instructions+=2;NFSU2_TR(0x727a89);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x53ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B727a8d:{NFSU2_TR(0x727a8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727abe;}}
}
B727a8f:L727a8f:{c.instructions+=2;NFSU2_TR(0x727a8f);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x54ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B727a93:{NFSU2_TR(0x727a93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727abe;}}
}
B727a95:L727a95:{c.instructions+=2;NFSU2_TR(0x727a95);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x52ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B727a99:{NFSU2_TR(0x727a99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727abe;}}
}
B727a9b:L727a9b:{c.instructions+=6;NFSU2_TR(0x727a9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727a9e:{NFSU2_TR(0x727a9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727a9f:{NFSU2_TR(0x727a9f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727aa0:{NFSU2_TR(0x727aa0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727aa1:{NFSU2_TR(0x727aa1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727aa3:{NFSU2_TR(0x727aa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727aa8ull));
TAIL_STATIC(0x72abb0u,72a);
}
B727aa8:L727aa8:{c.instructions+=4;NFSU2_TR(0x727aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727aab:{NFSU2_TR(0x727aab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B727aae:{NFSU2_TR(0x727aae);
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
B727ab0:{NFSU2_TR(0x727ab0);
if(r1(R+518)){{goto L727e07;}}
}
B727ab6:L727ab6:{c.instructions+=2;NFSU2_TR(0x727ab6);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+0)),r1(U+0));
}
B727ab9:{NFSU2_TR(0x727ab9);
{goto L727e07;}
}
B727abe:L727abe:{c.instructions+=3;NFSU2_TR(0x727abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727ac1:{NFSU2_TR(0x727ac1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727ac3:{NFSU2_TR(0x727ac3);
if(r1(R+518)){{goto L727ac8;}}
}
B727ac5:L727ac5:{c.instructions+=1;NFSU2_TR(0x727ac5);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B727ac8:L727ac8:{c.instructions+=2;NFSU2_TR(0x727ac8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727ac9:{NFSU2_TR(0x727ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727aceull));
TAIL_STATIC(0x72423eu,724);
}
B727ace:L727ace:{c.instructions+=10;NFSU2_TR(0x727ace);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B727ad1:{NFSU2_TR(0x727ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727ad4:{NFSU2_TR(0x727ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B727ad7:{NFSU2_TR(0x727ad7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B727ada:{NFSU2_TR(0x727ada);
u8 U[2];
w2(U+0,u16(0x5622ull));
s2(u32(r4(R+12)),r2(U+0));
}
B727adf:{NFSU2_TR(0x727adf);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B727ae3:{NFSU2_TR(0x727ae3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B727ae7:{NFSU2_TR(0x727ae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B727aea:{NFSU2_TR(0x727aea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727aeb:{NFSU2_TR(0x727aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727af0ull));
TAIL_STATIC(0x72aaf8u,72a);
}
B727af0:L727af0:{c.instructions+=4;NFSU2_TR(0x727af0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727af2:{NFSU2_TR(0x727af2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B727af3:{NFSU2_TR(0x727af3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B727af4:{NFSU2_TR(0x727af4);
if(r1(R+518)){{goto L727dab;}}
}
B727afa:L727afa:{c.instructions+=3;NFSU2_TR(0x727afa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B727afd:{NFSU2_TR(0x727afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727b00:{NFSU2_TR(0x727b00);
{goto L727b05;}
}
B727b02:L727b02:{c.instructions+=1;NFSU2_TR(0x727b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B727b05:L727b05:{c.instructions+=3;NFSU2_TR(0x727b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727b08:{NFSU2_TR(0x727b08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727b0d:{NFSU2_TR(0x727b0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727b1a;}}
}
B727b0f:L727b0f:{c.instructions+=3;NFSU2_TR(0x727b0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727b12:{NFSU2_TR(0x727b12);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727b15:{NFSU2_TR(0x727b15);
{goto L727d99;}
}
B727b1a:L727b1a:{c.instructions+=2;NFSU2_TR(0x727b1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727b1f:{NFSU2_TR(0x727b1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727b2e;}}
}
B727b21:L727b21:{c.instructions+=3;NFSU2_TR(0x727b21);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727b25:{NFSU2_TR(0x727b25);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B727b29:{NFSU2_TR(0x727b29);
{goto L727d99;}
}
B727b2e:L727b2e:{c.instructions+=2;NFSU2_TR(0x727b2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727b33:{NFSU2_TR(0x727b33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727b42;}}
}
B727b35:L727b35:{c.instructions+=3;NFSU2_TR(0x727b35);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727b39:{NFSU2_TR(0x727b39);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B727b3d:{NFSU2_TR(0x727b3d);
{goto L727d99;}
}
B727b42:L727b42:{c.instructions+=2;NFSU2_TR(0x727b42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727b47:{NFSU2_TR(0x727b47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727b56;}}
}
B727b49:L727b49:{c.instructions+=3;NFSU2_TR(0x727b49);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727b4d:{NFSU2_TR(0x727b4d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B727b51:{NFSU2_TR(0x727b51);
{goto L727d99;}
}
B727b56:L727b56:{c.instructions+=2;NFSU2_TR(0x727b56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727b5b:{NFSU2_TR(0x727b5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727b6a;}}
}
B727b5d:L727b5d:{c.instructions+=3;NFSU2_TR(0x727b5d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727b61:{NFSU2_TR(0x727b61);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B727b65:{NFSU2_TR(0x727b65);
{goto L727d99;}
}
B727b6a:L727b6a:{c.instructions+=2;NFSU2_TR(0x727b6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa6ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727b6f:{NFSU2_TR(0x727b6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727b7e;}}
}
B727b71:L727b71:{c.instructions+=3;NFSU2_TR(0x727b71);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727b75:{NFSU2_TR(0x727b75);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B727b79:{NFSU2_TR(0x727b79);
{goto L727d99;}
}
B727b7e:L727b7e:{c.instructions+=2;NFSU2_TR(0x727b7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa7ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727b83:{NFSU2_TR(0x727b83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727b92;}}
}
B727b85:L727b85:{c.instructions+=3;NFSU2_TR(0x727b85);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727b89:{NFSU2_TR(0x727b89);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B727b8d:{NFSU2_TR(0x727b8d);
{goto L727d99;}
}
B727b92:L727b92:{c.instructions+=2;NFSU2_TR(0x727b92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x98ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727b97:{NFSU2_TR(0x727b97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727bbe;}}
}
B727b99:L727b99:{c.instructions+=2;NFSU2_TR(0x727b99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727b9c:{NFSU2_TR(0x727b9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727ba1ull));
TAIL_STATIC(0x724792u,724);
}
B727ba1:L727ba1:{c.instructions+=5;NFSU2_TR(0x727ba1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727ba4:{NFSU2_TR(0x727ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727ba7:{NFSU2_TR(0x727ba7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727baa:{NFSU2_TR(0x727baa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727bab:{NFSU2_TR(0x727bab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727bb0ull));
TAIL_STATIC(0x71feccu,71f);
}
B727bb0:L727bb0:{c.instructions+=4;NFSU2_TR(0x727bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727bb3:{NFSU2_TR(0x727bb3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B727bb6:{NFSU2_TR(0x727bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727bb9:{NFSU2_TR(0x727bb9);
{goto L727d99;}
}
B727bbe:L727bbe:{c.instructions+=2;NFSU2_TR(0x727bbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x99ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727bc3:{NFSU2_TR(0x727bc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727bea;}}
}
B727bc5:L727bc5:{c.instructions+=2;NFSU2_TR(0x727bc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727bc8:{NFSU2_TR(0x727bc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727bcdull));
TAIL_STATIC(0x724792u,724);
}
B727bcd:L727bcd:{c.instructions+=5;NFSU2_TR(0x727bcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727bd0:{NFSU2_TR(0x727bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727bd3:{NFSU2_TR(0x727bd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727bd6:{NFSU2_TR(0x727bd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727bd7:{NFSU2_TR(0x727bd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727bdcull));
TAIL_STATIC(0x71feccu,71f);
}
B727bdc:L727bdc:{c.instructions+=4;NFSU2_TR(0x727bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727bdf:{NFSU2_TR(0x727bdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B727be2:{NFSU2_TR(0x727be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727be5:{NFSU2_TR(0x727be5);
{goto L727d99;}
}
B727bea:L727bea:{c.instructions+=2;NFSU2_TR(0x727bea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727bef:{NFSU2_TR(0x727bef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727c16;}}
}
B727bf1:L727bf1:{c.instructions+=2;NFSU2_TR(0x727bf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727bf4:{NFSU2_TR(0x727bf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727bf9ull));
TAIL_STATIC(0x724792u,724);
}
B727bf9:L727bf9:{c.instructions+=5;NFSU2_TR(0x727bf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727bfc:{NFSU2_TR(0x727bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727bff:{NFSU2_TR(0x727bff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727c02:{NFSU2_TR(0x727c02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727c03:{NFSU2_TR(0x727c03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727c08ull));
TAIL_STATIC(0x71feccu,71f);
}
B727c08:L727c08:{c.instructions+=4;NFSU2_TR(0x727c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727c0b:{NFSU2_TR(0x727c0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B727c0e:{NFSU2_TR(0x727c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727c11:{NFSU2_TR(0x727c11);
{goto L727d99;}
}
B727c16:L727c16:{c.instructions+=2;NFSU2_TR(0x727c16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727c1b:{NFSU2_TR(0x727c1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727c42;}}
}
B727c1d:L727c1d:{c.instructions+=2;NFSU2_TR(0x727c1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727c20:{NFSU2_TR(0x727c20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727c25ull));
TAIL_STATIC(0x724792u,724);
}
B727c25:L727c25:{c.instructions+=5;NFSU2_TR(0x727c25);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727c28:{NFSU2_TR(0x727c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727c2b:{NFSU2_TR(0x727c2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727c2e:{NFSU2_TR(0x727c2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727c2f:{NFSU2_TR(0x727c2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727c34ull));
TAIL_STATIC(0x71feccu,71f);
}
B727c34:L727c34:{c.instructions+=4;NFSU2_TR(0x727c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727c37:{NFSU2_TR(0x727c37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B727c3a:{NFSU2_TR(0x727c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727c3d:{NFSU2_TR(0x727c3d);
{goto L727d99;}
}
B727c42:L727c42:{c.instructions+=2;NFSU2_TR(0x727c42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727c47:{NFSU2_TR(0x727c47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727c6e;}}
}
B727c49:L727c49:{c.instructions+=2;NFSU2_TR(0x727c49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727c4c:{NFSU2_TR(0x727c4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727c51ull));
TAIL_STATIC(0x724792u,724);
}
B727c51:L727c51:{c.instructions+=5;NFSU2_TR(0x727c51);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727c54:{NFSU2_TR(0x727c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727c57:{NFSU2_TR(0x727c57);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727c5a:{NFSU2_TR(0x727c5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727c5b:{NFSU2_TR(0x727c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727c60ull));
TAIL_STATIC(0x71feccu,71f);
}
B727c60:L727c60:{c.instructions+=4;NFSU2_TR(0x727c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727c63:{NFSU2_TR(0x727c63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B727c66:{NFSU2_TR(0x727c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727c69:{NFSU2_TR(0x727c69);
{goto L727d99;}
}
B727c6e:L727c6e:{c.instructions+=2;NFSU2_TR(0x727c6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa5ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727c73:{NFSU2_TR(0x727c73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727c9a;}}
}
B727c75:L727c75:{c.instructions+=2;NFSU2_TR(0x727c75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727c78:{NFSU2_TR(0x727c78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727c7dull));
TAIL_STATIC(0x724792u,724);
}
B727c7d:L727c7d:{c.instructions+=5;NFSU2_TR(0x727c7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727c80:{NFSU2_TR(0x727c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727c83:{NFSU2_TR(0x727c83);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727c86:{NFSU2_TR(0x727c86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727c87:{NFSU2_TR(0x727c87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727c8cull));
TAIL_STATIC(0x71feccu,71f);
}
B727c8c:L727c8c:{c.instructions+=4;NFSU2_TR(0x727c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727c8f:{NFSU2_TR(0x727c8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B727c92:{NFSU2_TR(0x727c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727c95:{NFSU2_TR(0x727c95);
{goto L727d99;}
}
B727c9a:L727c9a:{c.instructions+=2;NFSU2_TR(0x727c9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727c9f:{NFSU2_TR(0x727c9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727cac;}}
}
B727ca1:L727ca1:{c.instructions+=3;NFSU2_TR(0x727ca1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727ca4:{NFSU2_TR(0x727ca4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727ca7:{NFSU2_TR(0x727ca7);
{goto L727d99;}
}
B727cac:L727cac:{c.instructions+=2;NFSU2_TR(0x727cac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x82ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727cb1:{NFSU2_TR(0x727cb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727cbe;}}
}
B727cb3:L727cb3:{c.instructions+=3;NFSU2_TR(0x727cb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727cb6:{NFSU2_TR(0x727cb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727cb9:{NFSU2_TR(0x727cb9);
{goto L727d99;}
}
B727cbe:L727cbe:{c.instructions+=2;NFSU2_TR(0x727cbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x84ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727cc3:{NFSU2_TR(0x727cc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727cd1;}}
}
B727cc5:L727cc5:{c.instructions+=3;NFSU2_TR(0x727cc5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727cc9:{NFSU2_TR(0x727cc9);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+12)),r2(U+0));
}
B727ccc:{NFSU2_TR(0x727ccc);
{goto L727d99;}
}
B727cd1:L727cd1:{c.instructions+=2;NFSU2_TR(0x727cd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x85ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727cd6:{NFSU2_TR(0x727cd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727ce2;}}
}
B727cd8:L727cd8:{c.instructions+=3;NFSU2_TR(0x727cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727cdb:{NFSU2_TR(0x727cdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B727cdd:{NFSU2_TR(0x727cdd);
{goto L727d99;}
}
B727ce2:L727ce2:{c.instructions+=2;NFSU2_TR(0x727ce2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727ce7:{NFSU2_TR(0x727ce7);
if(r1(R+518)){{goto L727d99;}}
}
B727ced:L727ced:{c.instructions+=2;NFSU2_TR(0x727ced);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B727cf0:{NFSU2_TR(0x727cf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727cfd;}}
}
B727cf2:L727cf2:{c.instructions+=3;NFSU2_TR(0x727cf2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727cf5:{NFSU2_TR(0x727cf5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727cf8:{NFSU2_TR(0x727cf8);
{goto L727d99;}
}
B727cfd:L727cfd:{c.instructions+=2;NFSU2_TR(0x727cfd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B727d00:{NFSU2_TR(0x727d00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727d0d;}}
}
B727d02:L727d02:{c.instructions+=3;NFSU2_TR(0x727d02);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727d05:{NFSU2_TR(0x727d05);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727d08:{NFSU2_TR(0x727d08);
{goto L727d99;}
}
B727d0d:L727d0d:{c.instructions+=2;NFSU2_TR(0x727d0d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B727d10:{NFSU2_TR(0x727d10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727d1a;}}
}
B727d12:L727d12:{c.instructions+=3;NFSU2_TR(0x727d12);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B727d15:{NFSU2_TR(0x727d15);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B727d18:{NFSU2_TR(0x727d18);
{goto L727d99;}
}
B727d1a:L727d1a:{c.instructions+=2;NFSU2_TR(0x727d1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727d1f:{NFSU2_TR(0x727d1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727d29;}}
}
B727d21:L727d21:{c.instructions+=3;NFSU2_TR(0x727d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727d24:{NFSU2_TR(0x727d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727d27:{NFSU2_TR(0x727d27);
{goto L727d99;}
}
B727d29:L727d29:{c.instructions+=2;NFSU2_TR(0x727d29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727d2e:{NFSU2_TR(0x727d2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727d38;}}
}
B727d30:L727d30:{c.instructions+=3;NFSU2_TR(0x727d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727d33:{NFSU2_TR(0x727d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727d36:{NFSU2_TR(0x727d36);
{goto L727d99;}
}
B727d38:L727d38:{c.instructions+=2;NFSU2_TR(0x727d38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x89ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727d3d:{NFSU2_TR(0x727d3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727d47;}}
}
B727d3f:L727d3f:{c.instructions+=3;NFSU2_TR(0x727d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727d42:{NFSU2_TR(0x727d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727d45:{NFSU2_TR(0x727d45);
{goto L727d99;}
}
B727d47:L727d47:{c.instructions+=2;NFSU2_TR(0x727d47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x94ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727d4c:{NFSU2_TR(0x727d4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727d56;}}
}
B727d4e:L727d4e:{c.instructions+=3;NFSU2_TR(0x727d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727d51:{NFSU2_TR(0x727d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727d54:{NFSU2_TR(0x727d54);
{goto L727d99;}
}
B727d56:L727d56:{c.instructions+=2;NFSU2_TR(0x727d56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x95ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727d5b:{NFSU2_TR(0x727d5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727d65;}}
}
B727d5d:L727d5d:{c.instructions+=3;NFSU2_TR(0x727d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727d60:{NFSU2_TR(0x727d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727d63:{NFSU2_TR(0x727d63);
{goto L727d99;}
}
B727d65:L727d65:{c.instructions+=2;NFSU2_TR(0x727d65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727d6a:{NFSU2_TR(0x727d6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727d74;}}
}
B727d6c:L727d6c:{c.instructions+=3;NFSU2_TR(0x727d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727d6f:{NFSU2_TR(0x727d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727d72:{NFSU2_TR(0x727d72);
{goto L727d99;}
}
B727d74:L727d74:{c.instructions+=2;NFSU2_TR(0x727d74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727d79:{NFSU2_TR(0x727d79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727d83;}}
}
B727d7b:L727d7b:{c.instructions+=3;NFSU2_TR(0x727d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727d7e:{NFSU2_TR(0x727d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727d81:{NFSU2_TR(0x727d81);
{goto L727d99;}
}
B727d83:L727d83:{c.instructions+=2;NFSU2_TR(0x727d83);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B727d86:{NFSU2_TR(0x727d86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727d99;}}
}
B727d88:L727d88:{c.instructions+=6;NFSU2_TR(0x727d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727d8b:{NFSU2_TR(0x727d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727d8e:{NFSU2_TR(0x727d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727d91:{NFSU2_TR(0x727d91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B727d93:{NFSU2_TR(0x727d93);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B727d96:{NFSU2_TR(0x727d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727d99:L727d99:{c.instructions+=3;NFSU2_TR(0x727d99);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B727d9c:{NFSU2_TR(0x727d9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727d9d:{NFSU2_TR(0x727d9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727da2ull));
TAIL_STATIC(0x72aaf8u,72a);
}
B727da2:L727da2:{c.instructions+=3;NFSU2_TR(0x727da2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727da4:{NFSU2_TR(0x727da4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B727da5:{NFSU2_TR(0x727da5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727b02u);}goto L727b02;}}
}
B727dab:L727dab:{c.instructions+=5;NFSU2_TR(0x727dab);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727daf:{NFSU2_TR(0x727daf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B727db3:{NFSU2_TR(0x727db3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B727db7:{NFSU2_TR(0x727db7);
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
B727db8:{NFSU2_TR(0x727db8);
if(r1(R+519)){{goto L727e07;}}
}
B727dba:L727dba:{c.instructions+=2;NFSU2_TR(0x727dba);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B727dbe:{NFSU2_TR(0x727dbe);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B727dc2:L727dc2:{c.instructions+=2;NFSU2_TR(0x727dc2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b46ec),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B727dc9:{NFSU2_TR(0x727dc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727dd5;}}
}
B727dcb:L727dcb:{c.instructions+=2;NFSU2_TR(0x727dcb);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B727dcf:{NFSU2_TR(0x727dcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727dd5;}}
}
B727dd1:L727dd1:{c.instructions+=1;NFSU2_TR(0x727dd1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w2(U+0,u16(u32(r2(U+0))&u32(u16(0x0ull))));
s2(u32(r4(R+8)),r2(U+0));
}
B727dd5:L727dd5:{c.instructions+=8;NFSU2_TR(0x727dd5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B727dd9:{NFSU2_TR(0x727dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B727ddc:{NFSU2_TR(0x727ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B727ddf:{NFSU2_TR(0x727ddf);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b466cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+4),(U+8),2);
}
B727de7:{NFSU2_TR(0x727de7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w2(U+0,u16(u32(r2(U+0))+u32(r2(R+4))));
s2(u32(r4(R+8)),r2(U+0));
}
B727dea:{NFSU2_TR(0x727dea);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B727dee:{NFSU2_TR(0x727dee);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B727df1:{NFSU2_TR(0x727df1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727df8;}}
}
B727df3:L727df3:{c.instructions+=2;NFSU2_TR(0x727df3);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B727df6:{NFSU2_TR(0x727df6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727dfd;}}
}
B727df8:L727df8:{c.instructions+=2;NFSU2_TR(0x727df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B727dfb:{NFSU2_TR(0x727dfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+28)),r4(U+0));
}
B727dfd:L727dfd:{c.instructions+=6;NFSU2_TR(0x727dfd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B727dfe:{NFSU2_TR(0x727dfe);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B727dff:{NFSU2_TR(0x727dff);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B727e00:{NFSU2_TR(0x727e00);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B727e03:{NFSU2_TR(0x727e03);
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
B727e05:{NFSU2_TR(0x727e05);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727dc2u);}goto L727dc2;}}
}
B727e07:L727e07:{c.instructions+=5;NFSU2_TR(0x727e07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B727e08:{NFSU2_TR(0x727e08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727e09:{NFSU2_TR(0x727e09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B727e0a:{NFSU2_TR(0x727e0a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B727e0b:{NFSU2_TR(0x727e0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727e0c:L727e0c:{c.instructions+=7;NFSU2_TR(0x727e0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727e10:{NFSU2_TR(0x727e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B727e13:{NFSU2_TR(0x727e13);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B727e16:{NFSU2_TR(0x727e16);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x8b466c))));
}
B727e1c:{NFSU2_TR(0x727e1c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B727e20:{NFSU2_TR(0x727e20);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B727e24:{NFSU2_TR(0x727e24);
if(r1(R+518)){{goto L727e29;}}
}
B727e26:L727e26:{c.instructions+=1;NFSU2_TR(0x727e26);
w4(R+0,u32(s32(s16(r2(R+4)))));
}
B727e29:L727e29:{c.instructions+=1;NFSU2_TR(0x727e29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727e2a:L727e2a:{c.instructions+=9;NFSU2_TR(0x727e2a);
__builtin_memmove((R+8),gp(0x8b466c),4);
}
B727e30:{NFSU2_TR(0x727e30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727e31:{NFSU2_TR(0x727e31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B727e35:{NFSU2_TR(0x727e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B727e38:{NFSU2_TR(0x727e38);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B727e3b:{NFSU2_TR(0x727e3b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B727e3d:{NFSU2_TR(0x727e3d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B727e41:{NFSU2_TR(0x727e41);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B727e45:{NFSU2_TR(0x727e45);
if(r1(R+518)){{goto L727e67;}}
}
B727e47:L727e47:{c.instructions+=7;NFSU2_TR(0x727e47);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B727e4a:{NFSU2_TR(0x727e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B727e4d:{NFSU2_TR(0x727e4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B727e50:{NFSU2_TR(0x727e50);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B727e52:{NFSU2_TR(0x727e52);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B727e54:{NFSU2_TR(0x727e54);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B727e55:{NFSU2_TR(0x727e55);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x6ull))));
}
B727e58:L727e58:{c.instructions+=3;NFSU2_TR(0x727e58);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B727e5b:{NFSU2_TR(0x727e5b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B727e5d:{NFSU2_TR(0x727e5d);
if(r1(R+518)){{goto L727e69;}}
}
B727e5f:L727e5f:{c.instructions+=5;NFSU2_TR(0x727e5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B727e60:{NFSU2_TR(0x727e60);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B727e61:{NFSU2_TR(0x727e61);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B727e62:{NFSU2_TR(0x727e62);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B727e65:{NFSU2_TR(0x727e65);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727e58u);}goto L727e58;}}
}
B727e67:L727e67:{c.instructions+=1;NFSU2_TR(0x727e67);
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
B727e69:L727e69:{c.instructions+=2;NFSU2_TR(0x727e69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727e6a:{NFSU2_TR(0x727e6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727e6b:L727e6b:{c.instructions+=2;NFSU2_TR(0x727e6b);
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
B727e6d:{NFSU2_TR(0x727e6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727e6e:L727e6e:{c.instructions+=46;NFSU2_TR(0x727e6e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727e6f:{NFSU2_TR(0x727e6f);
__builtin_memmove((R+20),(R+16),4);
}
B727e71:{NFSU2_TR(0x727e71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B727e74:{NFSU2_TR(0x727e74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727e75:{NFSU2_TR(0x727e75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727e76:{NFSU2_TR(0x727e76);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B727e78:{NFSU2_TR(0x727e78);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B727e7a:{NFSU2_TR(0x727e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727e7d:{NFSU2_TR(0x727e7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B727e80:{NFSU2_TR(0x727e80);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B727e81:{NFSU2_TR(0x727e81);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B727e82:{NFSU2_TR(0x727e82);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B727e83:{NFSU2_TR(0x727e83);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B727e84:{NFSU2_TR(0x727e84);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B727e85:{NFSU2_TR(0x727e85);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B727e89:{NFSU2_TR(0x727e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B727e8c:{NFSU2_TR(0x727e8c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B727e8e:{NFSU2_TR(0x727e8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+28),(U+0),4);
}
B727e91:{NFSU2_TR(0x727e91);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B727e92:{NFSU2_TR(0x727e92);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B727e93:{NFSU2_TR(0x727e93);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B727e94:{NFSU2_TR(0x727e94);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B727e95:{NFSU2_TR(0x727e95);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B727e96:{NFSU2_TR(0x727e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727e99:{NFSU2_TR(0x727e99);
__builtin_memmove((R+28),gp(0x8b466c),4);
}
B727e9f:{NFSU2_TR(0x727e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B727ea2:{NFSU2_TR(0x727ea2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B727ea5:{NFSU2_TR(0x727ea5);
u8 U[14];
w4(U+0,u32(u32(u32(0x6eull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),2);
s2(u32(r4(U+8)),r2(U+12));
}
B727eaa:{NFSU2_TR(0x727eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B727ead:{NFSU2_TR(0x727ead);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B727eb1:{NFSU2_TR(0x727eb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727eb2:{NFSU2_TR(0x727eb2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727eb3:{NFSU2_TR(0x727eb3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B727eb6:{NFSU2_TR(0x727eb6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727eb7:{NFSU2_TR(0x727eb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B727eba:{NFSU2_TR(0x727eba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727ebb:{NFSU2_TR(0x727ebb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B727ebe:{NFSU2_TR(0x727ebe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727ebf:{NFSU2_TR(0x727ebf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727ec2:{NFSU2_TR(0x727ec2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B727ec5:{NFSU2_TR(0x727ec5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727ec6:{NFSU2_TR(0x727ec6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727ec7:{NFSU2_TR(0x727ec7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727ec9:{NFSU2_TR(0x727ec9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727ecb:{NFSU2_TR(0x727ecb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727ecc:{NFSU2_TR(0x727ecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727ed1ull));
TAIL_STATIC(0x724d81u,724);
}
B727ed1:L727ed1:{c.instructions+=5;NFSU2_TR(0x727ed1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B727ed4:{NFSU2_TR(0x727ed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B727ed5:{NFSU2_TR(0x727ed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727ed6:{NFSU2_TR(0x727ed6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B727ed7:{NFSU2_TR(0x727ed7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727ed8:L727ed8:{c.instructions+=6;NFSU2_TR(0x727ed8);
w4(R+4,u32(m1(0x8b44e4)));
}
B727edf:{NFSU2_TR(0x727edf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727ee0:{NFSU2_TR(0x727ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B727ee4:{NFSU2_TR(0x727ee4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B727ee6:{NFSU2_TR(0x727ee6);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+4)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B727ee8:{NFSU2_TR(0x727ee8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L727f4b;}}
}
B727eea:L727eea:{c.instructions+=3;NFSU2_TR(0x727eea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727eeb:{NFSU2_TR(0x727eeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B727eef:{NFSU2_TR(0x727eef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727ef0:L727ef0:{c.instructions+=7;NFSU2_TR(0x727ef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B727ef2:{NFSU2_TR(0x727ef2);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b44e6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B727efa:{NFSU2_TR(0x727efa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B727efe:{NFSU2_TR(0x727efe);
__builtin_memmove((R+0),(R+4),4);
}
B727f00:{NFSU2_TR(0x727f00);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x70cull))));
}
B727f05:{NFSU2_TR(0x727f05);
u8 U[2];
w2(U+0,u16(u32(r2(R+8))&u32(u16(0x70cull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B727f0a:{NFSU2_TR(0x727f0a);
if(r1(R+518)){{goto L727f19;}}
}
B727f0c:L727f0c:{c.instructions+=5;NFSU2_TR(0x727f0c);
w4(R+12,u32(r2(R+8)));
}
B727f0f:{NFSU2_TR(0x727f0f);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+0))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B727f11:{NFSU2_TR(0x727f11);
__builtin_memmove((R+0),(R+12),4);
}
B727f13:{NFSU2_TR(0x727f13);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B727f17:{NFSU2_TR(0x727f17);
if(r1(R+518)){{goto L727f43;}}
}
B727f19:L727f19:{c.instructions+=3;NFSU2_TR(0x727f19);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x60ull))));
}
B727f1c:{NFSU2_TR(0x727f1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x60ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B727f1f:{NFSU2_TR(0x727f1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727f37;}}
}
B727f21:L727f21:{c.instructions+=1;NFSU2_TR(0x727f21);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B727f23:L727f23:{c.instructions+=2;NFSU2_TR(0x727f23);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727f25:{NFSU2_TR(0x727f25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727f47;}}
}
B727f27:L727f27:{c.instructions+=5;NFSU2_TR(0x727f27);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B727f28:{NFSU2_TR(0x727f28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B727f2a:{NFSU2_TR(0x727f2a);
w4(R+4,u32(m1(0x8b44e4)));
}
B727f31:{NFSU2_TR(0x727f31);
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
B727f33:{NFSU2_TR(0x727f33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727ef0u);}goto L727ef0;}}
}
B727f35:L727f35:{c.instructions+=1;NFSU2_TR(0x727f35);
{goto L727f49;}
}
B727f37:L727f37:{c.instructions+=5;NFSU2_TR(0x727f37);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B727f3b:{NFSU2_TR(0x727f3b);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B727f3d:{NFSU2_TR(0x727f3d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B727f3f:{NFSU2_TR(0x727f3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727f41:{NFSU2_TR(0x727f41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727f23u);}goto L727f23;}}
}
B727f43:L727f43:{c.instructions+=2;NFSU2_TR(0x727f43);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B727f45:{NFSU2_TR(0x727f45);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x727f27u);}goto L727f27;}
}
B727f47:L727f47:{c.instructions+=1;NFSU2_TR(0x727f47);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B727f49:L727f49:{c.instructions+=2;NFSU2_TR(0x727f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B727f4a:{NFSU2_TR(0x727f4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727f4b:L727f4b:{c.instructions+=2;NFSU2_TR(0x727f4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B727f4c:{NFSU2_TR(0x727f4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727f4d:L727f4d:{c.instructions+=4;NFSU2_TR(0x727f4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727f51:{NFSU2_TR(0x727f51);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B727f55:{NFSU2_TR(0x727f55);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0x2000ull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0x2000ull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0x2000ull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B727f5a:{NFSU2_TR(0x727f5a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L727f63;}}
}
B727f5c:L727f5c:{c.instructions+=2;NFSU2_TR(0x727f5c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
w2(U+4,u16(0x2000ull));
s2(u32(r4(U+0)),r2(U+4));
}
B727f62:{NFSU2_TR(0x727f62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727f63:L727f63:{c.instructions+=2;NFSU2_TR(0x727f63);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0x800ull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0x800ull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0x800ull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B727f68:{NFSU2_TR(0x727f68);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L727f70;}}
}
B727f6a:L727f6a:{c.instructions+=1;NFSU2_TR(0x727f6a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
w2(U+4,u16(0x800ull));
s2(u32(r4(U+0)),r2(U+4));
}
B727f70:L727f70:{c.instructions+=1;NFSU2_TR(0x727f70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727f71:L727f71:{c.instructions+=4;NFSU2_TR(0x727f71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727f72:{NFSU2_TR(0x727f72);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B727f74:{NFSU2_TR(0x727f74);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B727f7a:{NFSU2_TR(0x727f7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L727f81;}}
}
B727f7c:L727f7c:{c.instructions+=4;NFSU2_TR(0x727f7c);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727f7e:{NFSU2_TR(0x727f7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B727f7f:{NFSU2_TR(0x727f7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B727f80:{NFSU2_TR(0x727f80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727f81:L727f81:{c.instructions+=4;NFSU2_TR(0x727f81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727f82:{NFSU2_TR(0x727f82);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B727f86:{NFSU2_TR(0x727f86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727f87:{NFSU2_TR(0x727f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727f8cull));
TAIL_STATIC(0x721b27u,721);
}
B727f8c:L727f8c:{c.instructions+=3;NFSU2_TR(0x727f8c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B727f8e:{NFSU2_TR(0x727f8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B727f8f:{NFSU2_TR(0x727f8f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L727f95;}}
}
B727f91:L727f91:{c.instructions+=2;NFSU2_TR(0x727f91);
__builtin_memmove((R+12),(R+0),4);
}
B727f93:{NFSU2_TR(0x727f93);
{goto L727fb8;}
}
B727f95:L727f95:{c.instructions+=8;NFSU2_TR(0x727f95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727f96:{NFSU2_TR(0x727f96);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B727f9a:{NFSU2_TR(0x727f9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727f9b:{NFSU2_TR(0x727f9b);
__builtin_memmove((R+0),gp(0x8b4670),4);
}
B727fa0:{NFSU2_TR(0x727fa0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B727fa3:{NFSU2_TR(0x727fa3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B727fa6:{NFSU2_TR(0x727fa6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727fa7:{NFSU2_TR(0x727fa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x727facull));
TAIL_STATIC(0x75cfd0u,75c);
}
B727fac:L727fac:{c.instructions+=4;NFSU2_TR(0x727fac);
__builtin_memmove((R+0),gp(0x8b4670),4);
}
B727fb1:{NFSU2_TR(0x727fb1);
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
B727fb4:{NFSU2_TR(0x727fb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B727fb7:{NFSU2_TR(0x727fb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B727fb8:L727fb8:{c.instructions+=4;NFSU2_TR(0x727fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727fb9:{NFSU2_TR(0x727fb9);
__builtin_memmove((R+0),(R+12),4);
}
B727fbb:{NFSU2_TR(0x727fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B727fbc:{NFSU2_TR(0x727fbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727fbd:L727fbd:{c.instructions+=9;NFSU2_TR(0x727fbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B727fc1:{NFSU2_TR(0x727fc1);
__builtin_memmove((R+8),gp(0x8b466c),4);
}
B727fc7:{NFSU2_TR(0x727fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B727fca:{NFSU2_TR(0x727fca);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B727fcd:{NFSU2_TR(0x727fcd);
u8 U[13];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B727fd2:{NFSU2_TR(0x727fd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B727fd4:{NFSU2_TR(0x727fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B727fd8:{NFSU2_TR(0x727fd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B727fd9:{NFSU2_TR(0x727fd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x728007u,728);}
}
B727fdb:L727fdb:{c.instructions+=2;NFSU2_TR(0x727fdb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+8)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B727fdd:{NFSU2_TR(0x727fdd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x728016u,728);}
}
B727fdf:L727fdf:{c.instructions+=5;NFSU2_TR(0x727fdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B727fe1:{NFSU2_TR(0x727fe1);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B727fe3:{NFSU2_TR(0x727fe3);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B727fe4:{NFSU2_TR(0x727fe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B727fe5:{NFSU2_TR(0x727fe5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B727fe6:L727fe6:{c.instructions+=7;NFSU2_TR(0x727fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B727fe8:{NFSU2_TR(0x727fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B727feb:{NFSU2_TR(0x727feb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B727fee:{NFSU2_TR(0x727fee);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B727ff4:{NFSU2_TR(0x727ff4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B727ff8:{NFSU2_TR(0x727ff8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B727ffa:{NFSU2_TR(0x727ffa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x728007u,728);}
}
B727ffc:L727ffc:{c.instructions+=1;NFSU2_TR(0x727ffc);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
TAIL_STATIC(0x728000u,728);
}
XIT:NFSU2_TR_EXIT(0x727,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
