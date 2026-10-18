#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_691(u8* __restrict R,Cpu& c);
u32 body_6d4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x690,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x690,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_690(u8* __restrict R,Cpu& c);
u32 page_690(Cpu& c){return body_690(c.regs.data(),c);}
__attribute__((noinline)) u32 body_690(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x690002:goto L690002;
case 0x69000a:c.instructions+=27;goto B69000a;
case 0x69000d:c.instructions+=26;goto B69000d;
case 0x690011:c.instructions+=25;goto B690011;
case 0x690015:c.instructions+=24;goto B690015;
case 0x690019:c.instructions+=23;goto B690019;
case 0x69001c:c.instructions+=22;goto B69001c;
case 0x69001f:c.instructions+=21;goto B69001f;
case 0x690022:c.instructions+=20;goto B690022;
case 0x690025:c.instructions+=19;goto B690025;
case 0x690028:c.instructions+=18;goto B690028;
case 0x69002b:c.instructions+=17;goto B69002b;
case 0x69002f:c.instructions+=16;goto B69002f;
case 0x690033:c.instructions+=15;goto B690033;
case 0x690037:c.instructions+=14;goto B690037;
case 0x69003b:c.instructions+=13;goto B69003b;
case 0x69003f:c.instructions+=12;goto B69003f;
case 0x690043:c.instructions+=11;goto B690043;
case 0x69004b:c.instructions+=10;goto B69004b;
case 0x690053:c.instructions+=9;goto B690053;
case 0x690057:c.instructions+=8;goto B690057;
case 0x69005b:c.instructions+=7;goto B69005b;
case 0x69005f:c.instructions+=6;goto B69005f;
case 0x690063:c.instructions+=5;goto B690063;
case 0x690065:c.instructions+=4;goto B690065;
case 0x690069:c.instructions+=3;goto B690069;
case 0x69006c:c.instructions+=2;goto B69006c;
case 0x69006e:c.instructions+=1;goto B69006e;
case 0x690071:goto L690071;
case 0x690073:c.instructions+=5;goto B690073;
case 0x690074:c.instructions+=4;goto B690074;
case 0x690075:c.instructions+=3;goto B690075;
case 0x690077:c.instructions+=2;goto B690077;
case 0x69007c:c.instructions+=1;goto B69007c;
case 0x690081:goto L690081;
case 0x690085:c.instructions+=21;goto B690085;
case 0x690088:c.instructions+=20;goto B690088;
case 0x69008b:c.instructions+=19;goto B69008b;
case 0x690092:c.instructions+=18;goto B690092;
case 0x690099:c.instructions+=17;goto B690099;
case 0x69009d:c.instructions+=16;goto B69009d;
case 0x6900a0:c.instructions+=15;goto B6900a0;
case 0x6900a4:c.instructions+=14;goto B6900a4;
case 0x6900a8:c.instructions+=13;goto B6900a8;
case 0x6900ac:c.instructions+=12;goto B6900ac;
case 0x6900b0:c.instructions+=11;goto B6900b0;
case 0x6900b7:c.instructions+=10;goto B6900b7;
case 0x6900bb:c.instructions+=9;goto B6900bb;
case 0x6900bf:c.instructions+=8;goto B6900bf;
case 0x6900c3:c.instructions+=7;goto B6900c3;
case 0x6900c7:c.instructions+=6;goto B6900c7;
case 0x6900cb:c.instructions+=5;goto B6900cb;
case 0x6900cf:c.instructions+=4;goto B6900cf;
case 0x6900d1:c.instructions+=3;goto B6900d1;
case 0x6900d2:c.instructions+=2;goto B6900d2;
case 0x6900d3:c.instructions+=1;goto B6900d3;
case 0x6900d6:goto L6900d6;
case 0x6900d8:c.instructions+=5;goto B6900d8;
case 0x6900d9:c.instructions+=4;goto B6900d9;
case 0x6900da:c.instructions+=3;goto B6900da;
case 0x6900dc:c.instructions+=2;goto B6900dc;
case 0x6900e1:c.instructions+=1;goto B6900e1;
case 0x6900e6:goto L6900e6;
case 0x6900ea:c.instructions+=19;goto B6900ea;
case 0x6900ed:c.instructions+=18;goto B6900ed;
case 0x6900f4:c.instructions+=17;goto B6900f4;
case 0x6900f7:c.instructions+=16;goto B6900f7;
case 0x6900fe:c.instructions+=15;goto B6900fe;
case 0x690105:c.instructions+=14;goto B690105;
case 0x690109:c.instructions+=13;goto B690109;
case 0x69010d:c.instructions+=12;goto B69010d;
case 0x690111:c.instructions+=11;goto B690111;
case 0x690115:c.instructions+=10;goto B690115;
case 0x690119:c.instructions+=9;goto B690119;
case 0x69011d:c.instructions+=8;goto B69011d;
case 0x690124:c.instructions+=7;goto B690124;
case 0x690127:c.instructions+=6;goto B690127;
case 0x69012b:c.instructions+=5;goto B69012b;
case 0x69012f:c.instructions+=4;goto B69012f;
case 0x690131:c.instructions+=3;goto B690131;
case 0x690132:c.instructions+=2;goto B690132;
case 0x690133:c.instructions+=1;goto B690133;
case 0x690136:goto L690136;
case 0x690138:c.instructions+=5;goto B690138;
case 0x690139:c.instructions+=4;goto B690139;
case 0x69013a:c.instructions+=3;goto B69013a;
case 0x69013c:c.instructions+=2;goto B69013c;
case 0x690141:c.instructions+=1;goto B690141;
case 0x690146:goto L690146;
case 0x69014a:c.instructions+=19;goto B69014a;
case 0x69014d:c.instructions+=18;goto B69014d;
case 0x690150:c.instructions+=17;goto B690150;
case 0x690153:c.instructions+=16;goto B690153;
case 0x69015a:c.instructions+=15;goto B69015a;
case 0x690161:c.instructions+=14;goto B690161;
case 0x690164:c.instructions+=13;goto B690164;
case 0x69016b:c.instructions+=12;goto B69016b;
case 0x69016e:c.instructions+=11;goto B69016e;
case 0x690172:c.instructions+=10;goto B690172;
case 0x690176:c.instructions+=9;goto B690176;
case 0x69017a:c.instructions+=8;goto B69017a;
case 0x69017e:c.instructions+=7;goto B69017e;
case 0x690182:c.instructions+=6;goto B690182;
case 0x690186:c.instructions+=5;goto B690186;
case 0x69018a:c.instructions+=4;goto B69018a;
case 0x69018c:c.instructions+=3;goto B69018c;
case 0x69018d:c.instructions+=2;goto B69018d;
case 0x69018e:c.instructions+=1;goto B69018e;
case 0x690191:goto L690191;
case 0x690193:c.instructions+=17;goto B690193;
case 0x690197:c.instructions+=16;goto B690197;
case 0x69019c:c.instructions+=15;goto B69019c;
case 0x6901a3:c.instructions+=14;goto B6901a3;
case 0x6901a8:c.instructions+=13;goto B6901a8;
case 0x6901ab:c.instructions+=12;goto B6901ab;
case 0x6901af:c.instructions+=11;goto B6901af;
case 0x6901b4:c.instructions+=10;goto B6901b4;
case 0x6901b7:c.instructions+=9;goto B6901b7;
case 0x6901bb:c.instructions+=8;goto B6901bb;
case 0x6901bf:c.instructions+=7;goto B6901bf;
case 0x6901c3:c.instructions+=6;goto B6901c3;
case 0x6901c7:c.instructions+=5;goto B6901c7;
case 0x6901cb:c.instructions+=4;goto B6901cb;
case 0x6901cf:c.instructions+=3;goto B6901cf;
case 0x6901d3:c.instructions+=2;goto B6901d3;
case 0x6901d5:c.instructions+=1;goto B6901d5;
case 0x6901d8:goto L6901d8;
case 0x6901dc:c.instructions+=31;goto B6901dc;
case 0x6901df:c.instructions+=30;goto B6901df;
case 0x6901e3:c.instructions+=29;goto B6901e3;
case 0x6901e7:c.instructions+=28;goto B6901e7;
case 0x6901eb:c.instructions+=27;goto B6901eb;
case 0x6901ee:c.instructions+=26;goto B6901ee;
case 0x6901f2:c.instructions+=25;goto B6901f2;
case 0x6901f5:c.instructions+=24;goto B6901f5;
case 0x6901f8:c.instructions+=23;goto B6901f8;
case 0x6901fb:c.instructions+=22;goto B6901fb;
case 0x6901fe:c.instructions+=21;goto B6901fe;
case 0x690202:c.instructions+=20;goto B690202;
case 0x690206:c.instructions+=19;goto B690206;
case 0x690209:c.instructions+=18;goto B690209;
case 0x69020d:c.instructions+=17;goto B69020d;
case 0x690211:c.instructions+=16;goto B690211;
case 0x690214:c.instructions+=15;goto B690214;
case 0x690217:c.instructions+=14;goto B690217;
case 0x69021b:c.instructions+=13;goto B69021b;
case 0x69021f:c.instructions+=12;goto B69021f;
case 0x690222:c.instructions+=11;goto B690222;
case 0x690226:c.instructions+=10;goto B690226;
case 0x690229:c.instructions+=9;goto B690229;
case 0x69022c:c.instructions+=8;goto B69022c;
case 0x690230:c.instructions+=7;goto B690230;
case 0x690233:c.instructions+=6;goto B690233;
case 0x690236:c.instructions+=5;goto B690236;
case 0x69023a:c.instructions+=4;goto B69023a;
case 0x69023e:c.instructions+=3;goto B69023e;
case 0x690242:c.instructions+=2;goto B690242;
case 0x690244:c.instructions+=1;goto B690244;
case 0x690247:goto L690247;
case 0x69024b:c.instructions+=57;goto B69024b;
case 0x69024f:c.instructions+=56;goto B69024f;
case 0x690252:c.instructions+=55;goto B690252;
case 0x690256:c.instructions+=54;goto B690256;
case 0x690259:c.instructions+=53;goto B690259;
case 0x69025c:c.instructions+=52;goto B69025c;
case 0x690260:c.instructions+=51;goto B690260;
case 0x690263:c.instructions+=50;goto B690263;
case 0x690266:c.instructions+=49;goto B690266;
case 0x69026a:c.instructions+=48;goto B69026a;
case 0x69026d:c.instructions+=47;goto B69026d;
case 0x690270:c.instructions+=46;goto B690270;
case 0x690273:c.instructions+=45;goto B690273;
case 0x690277:c.instructions+=44;goto B690277;
case 0x69027a:c.instructions+=43;goto B69027a;
case 0x69027d:c.instructions+=42;goto B69027d;
case 0x690281:c.instructions+=41;goto B690281;
case 0x690284:c.instructions+=40;goto B690284;
case 0x690288:c.instructions+=39;goto B690288;
case 0x69028c:c.instructions+=38;goto B69028c;
case 0x69028f:c.instructions+=37;goto B69028f;
case 0x690293:c.instructions+=36;goto B690293;
case 0x690296:c.instructions+=35;goto B690296;
case 0x690299:c.instructions+=34;goto B690299;
case 0x69029c:c.instructions+=33;goto B69029c;
case 0x69029f:c.instructions+=32;goto B69029f;
case 0x6902a3:c.instructions+=31;goto B6902a3;
case 0x6902a7:c.instructions+=30;goto B6902a7;
case 0x6902ab:c.instructions+=29;goto B6902ab;
case 0x6902ae:c.instructions+=28;goto B6902ae;
case 0x6902b1:c.instructions+=27;goto B6902b1;
case 0x6902b9:c.instructions+=26;goto B6902b9;
case 0x6902c1:c.instructions+=25;goto B6902c1;
case 0x6902c4:c.instructions+=24;goto B6902c4;
case 0x6902c8:c.instructions+=23;goto B6902c8;
case 0x6902cc:c.instructions+=22;goto B6902cc;
case 0x6902d0:c.instructions+=21;goto B6902d0;
case 0x6902d3:c.instructions+=20;goto B6902d3;
case 0x6902d7:c.instructions+=19;goto B6902d7;
case 0x6902db:c.instructions+=18;goto B6902db;
case 0x6902de:c.instructions+=17;goto B6902de;
case 0x6902e1:c.instructions+=16;goto B6902e1;
case 0x6902e4:c.instructions+=15;goto B6902e4;
case 0x6902e7:c.instructions+=14;goto B6902e7;
case 0x6902ea:c.instructions+=13;goto B6902ea;
case 0x6902ee:c.instructions+=12;goto B6902ee;
case 0x6902f1:c.instructions+=11;goto B6902f1;
case 0x6902f8:c.instructions+=10;goto B6902f8;
case 0x6902fc:c.instructions+=9;goto B6902fc;
case 0x6902ff:c.instructions+=8;goto B6902ff;
case 0x690303:c.instructions+=7;goto B690303;
case 0x690306:c.instructions+=6;goto B690306;
case 0x690309:c.instructions+=5;goto B690309;
case 0x69030c:c.instructions+=4;goto B69030c;
case 0x690310:c.instructions+=3;goto B690310;
case 0x690314:c.instructions+=2;goto B690314;
case 0x690316:c.instructions+=1;goto B690316;
case 0x690319:goto L690319;
case 0x69031d:c.instructions+=47;goto B69031d;
case 0x690321:c.instructions+=46;goto B690321;
case 0x690324:c.instructions+=45;goto B690324;
case 0x690328:c.instructions+=44;goto B690328;
case 0x69032c:c.instructions+=43;goto B69032c;
case 0x69032f:c.instructions+=42;goto B69032f;
case 0x690332:c.instructions+=41;goto B690332;
case 0x690336:c.instructions+=40;goto B690336;
case 0x690339:c.instructions+=39;goto B690339;
case 0x69033c:c.instructions+=38;goto B69033c;
case 0x690340:c.instructions+=37;goto B690340;
case 0x690343:c.instructions+=36;goto B690343;
case 0x690347:c.instructions+=35;goto B690347;
case 0x69034a:c.instructions+=34;goto B69034a;
case 0x69034e:c.instructions+=33;goto B69034e;
case 0x690352:c.instructions+=32;goto B690352;
case 0x690356:c.instructions+=31;goto B690356;
case 0x69035a:c.instructions+=30;goto B69035a;
case 0x69035d:c.instructions+=29;goto B69035d;
case 0x690365:c.instructions+=28;goto B690365;
case 0x690368:c.instructions+=27;goto B690368;
case 0x69036b:c.instructions+=26;goto B69036b;
case 0x69036f:c.instructions+=25;goto B69036f;
case 0x690373:c.instructions+=24;goto B690373;
case 0x690377:c.instructions+=23;goto B690377;
case 0x69037b:c.instructions+=22;goto B69037b;
case 0x69037f:c.instructions+=21;goto B69037f;
case 0x690383:c.instructions+=20;goto B690383;
case 0x69038b:c.instructions+=19;goto B69038b;
case 0x69038e:c.instructions+=18;goto B69038e;
case 0x690391:c.instructions+=17;goto B690391;
case 0x690395:c.instructions+=16;goto B690395;
case 0x690398:c.instructions+=15;goto B690398;
case 0x69039b:c.instructions+=14;goto B69039b;
case 0x69039e:c.instructions+=13;goto B69039e;
case 0x6903a1:c.instructions+=12;goto B6903a1;
case 0x6903a5:c.instructions+=11;goto B6903a5;
case 0x6903a8:c.instructions+=10;goto B6903a8;
case 0x6903ac:c.instructions+=9;goto B6903ac;
case 0x6903af:c.instructions+=8;goto B6903af;
case 0x6903b3:c.instructions+=7;goto B6903b3;
case 0x6903ba:c.instructions+=6;goto B6903ba;
case 0x6903bd:c.instructions+=5;goto B6903bd;
case 0x6903c1:c.instructions+=4;goto B6903c1;
case 0x6903c5:c.instructions+=3;goto B6903c5;
case 0x6903c9:c.instructions+=2;goto B6903c9;
case 0x6903cb:c.instructions+=1;goto B6903cb;
case 0x6903ce:goto L6903ce;
case 0x6903d0:c.instructions+=9;goto B6903d0;
case 0x6903d1:c.instructions+=8;goto B6903d1;
case 0x6903d3:c.instructions+=7;goto B6903d3;
case 0x6903d9:c.instructions+=6;goto B6903d9;
case 0x6903dc:c.instructions+=5;goto B6903dc;
case 0x6903df:c.instructions+=4;goto B6903df;
case 0x6903e2:c.instructions+=3;goto B6903e2;
case 0x6903e4:c.instructions+=2;goto B6903e4;
case 0x6903e7:c.instructions+=1;goto B6903e7;
case 0x6903ed:goto L6903ed;
case 0x6903ef:c.instructions+=1;goto B6903ef;
case 0x6903f5:goto L6903f5;
case 0x6903fc:c.instructions+=73;goto B6903fc;
case 0x6903ff:c.instructions+=72;goto B6903ff;
case 0x690403:c.instructions+=71;goto B690403;
case 0x690406:c.instructions+=70;goto B690406;
case 0x690409:c.instructions+=69;goto B690409;
case 0x69040c:c.instructions+=68;goto B69040c;
case 0x69040f:c.instructions+=67;goto B69040f;
case 0x690412:c.instructions+=66;goto B690412;
case 0x690416:c.instructions+=65;goto B690416;
case 0x69041b:c.instructions+=64;goto B69041b;
case 0x690420:c.instructions+=63;goto B690420;
case 0x690425:c.instructions+=62;goto B690425;
case 0x69042a:c.instructions+=61;goto B69042a;
case 0x69042f:c.instructions+=60;goto B69042f;
case 0x690434:c.instructions+=59;goto B690434;
case 0x690439:c.instructions+=58;goto B690439;
case 0x69043d:c.instructions+=57;goto B69043d;
case 0x690440:c.instructions+=56;goto B690440;
case 0x690444:c.instructions+=55;goto B690444;
case 0x690447:c.instructions+=54;goto B690447;
case 0x69044a:c.instructions+=53;goto B69044a;
case 0x69044e:c.instructions+=52;goto B69044e;
case 0x690451:c.instructions+=51;goto B690451;
case 0x690454:c.instructions+=50;goto B690454;
case 0x690458:c.instructions+=49;goto B690458;
case 0x69045b:c.instructions+=48;goto B69045b;
case 0x69045e:c.instructions+=47;goto B69045e;
case 0x690461:c.instructions+=46;goto B690461;
case 0x690465:c.instructions+=45;goto B690465;
case 0x690468:c.instructions+=44;goto B690468;
case 0x69046b:c.instructions+=43;goto B69046b;
case 0x69046f:c.instructions+=42;goto B69046f;
case 0x690472:c.instructions+=41;goto B690472;
case 0x690476:c.instructions+=40;goto B690476;
case 0x69047a:c.instructions+=39;goto B69047a;
case 0x69047d:c.instructions+=38;goto B69047d;
case 0x690481:c.instructions+=37;goto B690481;
case 0x690484:c.instructions+=36;goto B690484;
case 0x690487:c.instructions+=35;goto B690487;
case 0x69048a:c.instructions+=34;goto B69048a;
case 0x69048d:c.instructions+=33;goto B69048d;
case 0x690491:c.instructions+=32;goto B690491;
case 0x690495:c.instructions+=31;goto B690495;
case 0x690499:c.instructions+=30;goto B690499;
case 0x69049c:c.instructions+=29;goto B69049c;
case 0x69049f:c.instructions+=28;goto B69049f;
case 0x6904a7:c.instructions+=27;goto B6904a7;
case 0x6904af:c.instructions+=26;goto B6904af;
case 0x6904b2:c.instructions+=25;goto B6904b2;
case 0x6904b6:c.instructions+=24;goto B6904b6;
case 0x6904ba:c.instructions+=23;goto B6904ba;
case 0x6904be:c.instructions+=22;goto B6904be;
case 0x6904c1:c.instructions+=21;goto B6904c1;
case 0x6904c5:c.instructions+=20;goto B6904c5;
case 0x6904c9:c.instructions+=19;goto B6904c9;
case 0x6904cc:c.instructions+=18;goto B6904cc;
case 0x6904cf:c.instructions+=17;goto B6904cf;
case 0x6904d2:c.instructions+=16;goto B6904d2;
case 0x6904d5:c.instructions+=15;goto B6904d5;
case 0x6904d8:c.instructions+=14;goto B6904d8;
case 0x6904dc:c.instructions+=13;goto B6904dc;
case 0x6904df:c.instructions+=12;goto B6904df;
case 0x6904e6:c.instructions+=11;goto B6904e6;
case 0x6904ea:c.instructions+=10;goto B6904ea;
case 0x6904ed:c.instructions+=9;goto B6904ed;
case 0x6904f1:c.instructions+=8;goto B6904f1;
case 0x6904f4:c.instructions+=7;goto B6904f4;
case 0x6904f7:c.instructions+=6;goto B6904f7;
case 0x6904fa:c.instructions+=5;goto B6904fa;
case 0x6904fe:c.instructions+=4;goto B6904fe;
case 0x690502:c.instructions+=3;goto B690502;
case 0x690505:c.instructions+=2;goto B690505;
case 0x690507:c.instructions+=1;goto B690507;
case 0x69050d:goto L69050d;
case 0x690512:c.instructions+=390;goto B690512;
case 0x690517:c.instructions+=389;goto B690517;
case 0x69051c:c.instructions+=388;goto B69051c;
case 0x690521:c.instructions+=387;goto B690521;
case 0x690524:c.instructions+=386;goto B690524;
case 0x690527:c.instructions+=385;goto B690527;
case 0x69052a:c.instructions+=384;goto B69052a;
case 0x69052d:c.instructions+=383;goto B69052d;
case 0x690535:c.instructions+=382;goto B690535;
case 0x69053d:c.instructions+=381;goto B69053d;
case 0x690542:c.instructions+=380;goto B690542;
case 0x690545:c.instructions+=379;goto B690545;
case 0x69054a:c.instructions+=378;goto B69054a;
case 0x69054f:c.instructions+=377;goto B69054f;
case 0x690552:c.instructions+=376;goto B690552;
case 0x690555:c.instructions+=375;goto B690555;
case 0x69055d:c.instructions+=374;goto B69055d;
case 0x690565:c.instructions+=373;goto B690565;
case 0x690568:c.instructions+=372;goto B690568;
case 0x69056d:c.instructions+=371;goto B69056d;
case 0x690570:c.instructions+=370;goto B690570;
case 0x690573:c.instructions+=369;goto B690573;
case 0x69057b:c.instructions+=368;goto B69057b;
case 0x69057e:c.instructions+=367;goto B69057e;
case 0x690581:c.instructions+=366;goto B690581;
case 0x690589:c.instructions+=365;goto B690589;
case 0x690591:c.instructions+=364;goto B690591;
case 0x690599:c.instructions+=363;goto B690599;
case 0x69059c:c.instructions+=362;goto B69059c;
case 0x69059f:c.instructions+=361;goto B69059f;
case 0x6905a3:c.instructions+=360;goto B6905a3;
case 0x6905aa:c.instructions+=359;goto B6905aa;
case 0x6905ad:c.instructions+=358;goto B6905ad;
case 0x6905b0:c.instructions+=357;goto B6905b0;
case 0x6905b3:c.instructions+=356;goto B6905b3;
case 0x6905b6:c.instructions+=355;goto B6905b6;
case 0x6905b9:c.instructions+=354;goto B6905b9;
case 0x6905bd:c.instructions+=353;goto B6905bd;
case 0x6905c1:c.instructions+=352;goto B6905c1;
case 0x6905c5:c.instructions+=351;goto B6905c5;
case 0x6905c9:c.instructions+=350;goto B6905c9;
case 0x6905cd:c.instructions+=349;goto B6905cd;
case 0x6905d1:c.instructions+=348;goto B6905d1;
case 0x6905d5:c.instructions+=347;goto B6905d5;
case 0x6905d9:c.instructions+=346;goto B6905d9;
case 0x6905dd:c.instructions+=345;goto B6905dd;
case 0x6905e0:c.instructions+=344;goto B6905e0;
case 0x6905e4:c.instructions+=343;goto B6905e4;
case 0x6905ec:c.instructions+=342;goto B6905ec;
case 0x6905ef:c.instructions+=341;goto B6905ef;
case 0x6905f7:c.instructions+=340;goto B6905f7;
case 0x6905fa:c.instructions+=339;goto B6905fa;
case 0x690602:c.instructions+=338;goto B690602;
case 0x690605:c.instructions+=337;goto B690605;
case 0x690608:c.instructions+=336;goto B690608;
case 0x69060c:c.instructions+=335;goto B69060c;
case 0x69060f:c.instructions+=334;goto B69060f;
case 0x690618:c.instructions+=333;goto B690618;
case 0x690620:c.instructions+=332;goto B690620;
case 0x690624:c.instructions+=331;goto B690624;
case 0x690627:c.instructions+=330;goto B690627;
case 0x690630:c.instructions+=329;goto B690630;
case 0x690634:c.instructions+=328;goto B690634;
case 0x690638:c.instructions+=327;goto B690638;
case 0x69063c:c.instructions+=326;goto B69063c;
case 0x690645:c.instructions+=325;goto B690645;
case 0x690649:c.instructions+=324;goto B690649;
case 0x69064d:c.instructions+=323;goto B69064d;
case 0x690651:c.instructions+=322;goto B690651;
case 0x69065a:c.instructions+=321;goto B69065a;
case 0x69065e:c.instructions+=320;goto B69065e;
case 0x690662:c.instructions+=319;goto B690662;
case 0x690666:c.instructions+=318;goto B690666;
case 0x69066a:c.instructions+=317;goto B69066a;
case 0x69066d:c.instructions+=316;goto B69066d;
case 0x690675:c.instructions+=315;goto B690675;
case 0x690679:c.instructions+=314;goto B690679;
case 0x69067c:c.instructions+=313;goto B69067c;
case 0x690684:c.instructions+=312;goto B690684;
case 0x690687:c.instructions+=311;goto B690687;
case 0x69068f:c.instructions+=310;goto B69068f;
case 0x690692:c.instructions+=309;goto B690692;
case 0x690695:c.instructions+=308;goto B690695;
case 0x690699:c.instructions+=307;goto B690699;
case 0x69069c:c.instructions+=306;goto B69069c;
case 0x6906a5:c.instructions+=305;goto B6906a5;
case 0x6906ad:c.instructions+=304;goto B6906ad;
case 0x6906b1:c.instructions+=303;goto B6906b1;
case 0x6906b4:c.instructions+=302;goto B6906b4;
case 0x6906bd:c.instructions+=301;goto B6906bd;
case 0x6906c1:c.instructions+=300;goto B6906c1;
case 0x6906c5:c.instructions+=299;goto B6906c5;
case 0x6906c9:c.instructions+=298;goto B6906c9;
case 0x6906d2:c.instructions+=297;goto B6906d2;
case 0x6906d6:c.instructions+=296;goto B6906d6;
case 0x6906da:c.instructions+=295;goto B6906da;
case 0x6906de:c.instructions+=294;goto B6906de;
case 0x6906e7:c.instructions+=293;goto B6906e7;
case 0x6906eb:c.instructions+=292;goto B6906eb;
case 0x6906ef:c.instructions+=291;goto B6906ef;
case 0x6906f3:c.instructions+=290;goto B6906f3;
case 0x6906f7:c.instructions+=289;goto B6906f7;
case 0x6906fb:c.instructions+=288;goto B6906fb;
case 0x690703:c.instructions+=287;goto B690703;
case 0x690707:c.instructions+=286;goto B690707;
case 0x69070a:c.instructions+=285;goto B69070a;
case 0x690712:c.instructions+=284;goto B690712;
case 0x690715:c.instructions+=283;goto B690715;
case 0x69071d:c.instructions+=282;goto B69071d;
case 0x690720:c.instructions+=281;goto B690720;
case 0x690723:c.instructions+=280;goto B690723;
case 0x690727:c.instructions+=279;goto B690727;
case 0x69072a:c.instructions+=278;goto B69072a;
case 0x690733:c.instructions+=277;goto B690733;
case 0x69073b:c.instructions+=276;goto B69073b;
case 0x69073f:c.instructions+=275;goto B69073f;
case 0x690742:c.instructions+=274;goto B690742;
case 0x69074b:c.instructions+=273;goto B69074b;
case 0x69074f:c.instructions+=272;goto B69074f;
case 0x690753:c.instructions+=271;goto B690753;
case 0x690757:c.instructions+=270;goto B690757;
case 0x690760:c.instructions+=269;goto B690760;
case 0x690764:c.instructions+=268;goto B690764;
case 0x690768:c.instructions+=267;goto B690768;
case 0x69076c:c.instructions+=266;goto B69076c;
case 0x690775:c.instructions+=265;goto B690775;
case 0x690779:c.instructions+=264;goto B690779;
case 0x69077d:c.instructions+=263;goto B69077d;
case 0x690781:c.instructions+=262;goto B690781;
case 0x690785:c.instructions+=261;goto B690785;
case 0x690789:c.instructions+=260;goto B690789;
case 0x690791:c.instructions+=259;goto B690791;
case 0x690795:c.instructions+=258;goto B690795;
case 0x690798:c.instructions+=257;goto B690798;
case 0x6907a0:c.instructions+=256;goto B6907a0;
case 0x6907a3:c.instructions+=255;goto B6907a3;
case 0x6907ab:c.instructions+=254;goto B6907ab;
case 0x6907ae:c.instructions+=253;goto B6907ae;
case 0x6907b1:c.instructions+=252;goto B6907b1;
case 0x6907b5:c.instructions+=251;goto B6907b5;
case 0x6907b8:c.instructions+=250;goto B6907b8;
case 0x6907c1:c.instructions+=249;goto B6907c1;
case 0x6907c9:c.instructions+=248;goto B6907c9;
case 0x6907cd:c.instructions+=247;goto B6907cd;
case 0x6907d0:c.instructions+=246;goto B6907d0;
case 0x6907d9:c.instructions+=245;goto B6907d9;
case 0x6907dd:c.instructions+=244;goto B6907dd;
case 0x6907e1:c.instructions+=243;goto B6907e1;
case 0x6907e5:c.instructions+=242;goto B6907e5;
case 0x6907ee:c.instructions+=241;goto B6907ee;
case 0x6907f2:c.instructions+=240;goto B6907f2;
case 0x6907f6:c.instructions+=239;goto B6907f6;
case 0x6907fa:c.instructions+=238;goto B6907fa;
case 0x690803:c.instructions+=237;goto B690803;
case 0x690807:c.instructions+=236;goto B690807;
case 0x69080b:c.instructions+=235;goto B69080b;
case 0x69080f:c.instructions+=234;goto B69080f;
case 0x690813:c.instructions+=233;goto B690813;
case 0x690816:c.instructions+=232;goto B690816;
case 0x69081a:c.instructions+=231;goto B69081a;
case 0x69081e:c.instructions+=230;goto B69081e;
case 0x690821:c.instructions+=229;goto B690821;
case 0x690826:c.instructions+=228;goto B690826;
case 0x690829:c.instructions+=227;goto B690829;
case 0x69082e:c.instructions+=226;goto B69082e;
case 0x690831:c.instructions+=225;goto B690831;
case 0x690834:c.instructions+=224;goto B690834;
case 0x690838:c.instructions+=223;goto B690838;
case 0x69083b:c.instructions+=222;goto B69083b;
case 0x690841:c.instructions+=221;goto B690841;
case 0x690846:c.instructions+=220;goto B690846;
case 0x69084a:c.instructions+=219;goto B69084a;
case 0x69084d:c.instructions+=218;goto B69084d;
case 0x690853:c.instructions+=217;goto B690853;
case 0x690857:c.instructions+=216;goto B690857;
case 0x69085b:c.instructions+=215;goto B69085b;
case 0x69085f:c.instructions+=214;goto B69085f;
case 0x690865:c.instructions+=213;goto B690865;
case 0x690869:c.instructions+=212;goto B690869;
case 0x69086d:c.instructions+=211;goto B69086d;
case 0x690871:c.instructions+=210;goto B690871;
case 0x690877:c.instructions+=209;goto B690877;
case 0x69087b:c.instructions+=208;goto B69087b;
case 0x69087f:c.instructions+=207;goto B69087f;
case 0x690883:c.instructions+=206;goto B690883;
case 0x690887:c.instructions+=205;goto B690887;
case 0x69088a:c.instructions+=204;goto B69088a;
case 0x69088e:c.instructions+=203;goto B69088e;
case 0x690892:c.instructions+=202;goto B690892;
case 0x690895:c.instructions+=201;goto B690895;
case 0x69089a:c.instructions+=200;goto B69089a;
case 0x69089d:c.instructions+=199;goto B69089d;
case 0x6908a2:c.instructions+=198;goto B6908a2;
case 0x6908a5:c.instructions+=197;goto B6908a5;
case 0x6908a8:c.instructions+=196;goto B6908a8;
case 0x6908ac:c.instructions+=195;goto B6908ac;
case 0x6908af:c.instructions+=194;goto B6908af;
case 0x6908b5:c.instructions+=193;goto B6908b5;
case 0x6908ba:c.instructions+=192;goto B6908ba;
case 0x6908be:c.instructions+=191;goto B6908be;
case 0x6908c1:c.instructions+=190;goto B6908c1;
case 0x6908c7:c.instructions+=189;goto B6908c7;
case 0x6908cb:c.instructions+=188;goto B6908cb;
case 0x6908cf:c.instructions+=187;goto B6908cf;
case 0x6908d3:c.instructions+=186;goto B6908d3;
case 0x6908d9:c.instructions+=185;goto B6908d9;
case 0x6908dd:c.instructions+=184;goto B6908dd;
case 0x6908e1:c.instructions+=183;goto B6908e1;
case 0x6908e5:c.instructions+=182;goto B6908e5;
case 0x6908eb:c.instructions+=181;goto B6908eb;
case 0x6908ef:c.instructions+=180;goto B6908ef;
case 0x6908f3:c.instructions+=179;goto B6908f3;
case 0x6908f7:c.instructions+=178;goto B6908f7;
case 0x6908fb:c.instructions+=177;goto B6908fb;
case 0x6908ff:c.instructions+=176;goto B6908ff;
case 0x690903:c.instructions+=175;goto B690903;
case 0x690907:c.instructions+=174;goto B690907;
case 0x69090a:c.instructions+=173;goto B69090a;
case 0x69090f:c.instructions+=172;goto B69090f;
case 0x690912:c.instructions+=171;goto B690912;
case 0x690917:c.instructions+=170;goto B690917;
case 0x69091a:c.instructions+=169;goto B69091a;
case 0x69091d:c.instructions+=168;goto B69091d;
case 0x690921:c.instructions+=167;goto B690921;
case 0x690924:c.instructions+=166;goto B690924;
case 0x69092a:c.instructions+=165;goto B69092a;
case 0x69092f:c.instructions+=164;goto B69092f;
case 0x690933:c.instructions+=163;goto B690933;
case 0x690936:c.instructions+=162;goto B690936;
case 0x69093c:c.instructions+=161;goto B69093c;
case 0x690940:c.instructions+=160;goto B690940;
case 0x690944:c.instructions+=159;goto B690944;
case 0x690948:c.instructions+=158;goto B690948;
case 0x69094e:c.instructions+=157;goto B69094e;
case 0x690952:c.instructions+=156;goto B690952;
case 0x690956:c.instructions+=155;goto B690956;
case 0x69095a:c.instructions+=154;goto B69095a;
case 0x690960:c.instructions+=153;goto B690960;
case 0x690964:c.instructions+=152;goto B690964;
case 0x690968:c.instructions+=151;goto B690968;
case 0x69096c:c.instructions+=150;goto B69096c;
case 0x690970:c.instructions+=149;goto B690970;
case 0x690974:c.instructions+=148;goto B690974;
case 0x690978:c.instructions+=147;goto B690978;
case 0x69097c:c.instructions+=146;goto B69097c;
case 0x69097f:c.instructions+=145;goto B69097f;
case 0x690984:c.instructions+=144;goto B690984;
case 0x690987:c.instructions+=143;goto B690987;
case 0x69098c:c.instructions+=142;goto B69098c;
case 0x69098f:c.instructions+=141;goto B69098f;
case 0x690992:c.instructions+=140;goto B690992;
case 0x690996:c.instructions+=139;goto B690996;
case 0x690999:c.instructions+=138;goto B690999;
case 0x69099f:c.instructions+=137;goto B69099f;
case 0x6909a4:c.instructions+=136;goto B6909a4;
case 0x6909a8:c.instructions+=135;goto B6909a8;
case 0x6909ab:c.instructions+=134;goto B6909ab;
case 0x6909b1:c.instructions+=133;goto B6909b1;
case 0x6909b5:c.instructions+=132;goto B6909b5;
case 0x6909b9:c.instructions+=131;goto B6909b9;
case 0x6909bd:c.instructions+=130;goto B6909bd;
case 0x6909c3:c.instructions+=129;goto B6909c3;
case 0x6909c7:c.instructions+=128;goto B6909c7;
case 0x6909cb:c.instructions+=127;goto B6909cb;
case 0x6909cf:c.instructions+=126;goto B6909cf;
case 0x6909d5:c.instructions+=125;goto B6909d5;
case 0x6909d9:c.instructions+=124;goto B6909d9;
case 0x6909dd:c.instructions+=123;goto B6909dd;
case 0x6909e1:c.instructions+=122;goto B6909e1;
case 0x6909e5:c.instructions+=121;goto B6909e5;
case 0x6909e8:c.instructions+=120;goto B6909e8;
case 0x6909ec:c.instructions+=119;goto B6909ec;
case 0x6909f1:c.instructions+=118;goto B6909f1;
case 0x6909f4:c.instructions+=117;goto B6909f4;
case 0x6909f9:c.instructions+=116;goto B6909f9;
case 0x6909fc:c.instructions+=115;goto B6909fc;
case 0x690a01:c.instructions+=114;goto B690a01;
case 0x690a04:c.instructions+=113;goto B690a04;
case 0x690a07:c.instructions+=112;goto B690a07;
case 0x690a0b:c.instructions+=111;goto B690a0b;
case 0x690a0e:c.instructions+=110;goto B690a0e;
case 0x690a14:c.instructions+=109;goto B690a14;
case 0x690a19:c.instructions+=108;goto B690a19;
case 0x690a1d:c.instructions+=107;goto B690a1d;
case 0x690a20:c.instructions+=106;goto B690a20;
case 0x690a26:c.instructions+=105;goto B690a26;
case 0x690a2a:c.instructions+=104;goto B690a2a;
case 0x690a2e:c.instructions+=103;goto B690a2e;
case 0x690a32:c.instructions+=102;goto B690a32;
case 0x690a38:c.instructions+=101;goto B690a38;
case 0x690a3c:c.instructions+=100;goto B690a3c;
case 0x690a40:c.instructions+=99;goto B690a40;
case 0x690a44:c.instructions+=98;goto B690a44;
case 0x690a4a:c.instructions+=97;goto B690a4a;
case 0x690a4e:c.instructions+=96;goto B690a4e;
case 0x690a52:c.instructions+=95;goto B690a52;
case 0x690a56:c.instructions+=94;goto B690a56;
case 0x690a5a:c.instructions+=93;goto B690a5a;
case 0x690a5d:c.instructions+=92;goto B690a5d;
case 0x690a62:c.instructions+=91;goto B690a62;
case 0x690a66:c.instructions+=90;goto B690a66;
case 0x690a69:c.instructions+=89;goto B690a69;
case 0x690a6e:c.instructions+=88;goto B690a6e;
case 0x690a71:c.instructions+=87;goto B690a71;
case 0x690a76:c.instructions+=86;goto B690a76;
case 0x690a79:c.instructions+=85;goto B690a79;
case 0x690a7c:c.instructions+=84;goto B690a7c;
case 0x690a80:c.instructions+=83;goto B690a80;
case 0x690a83:c.instructions+=82;goto B690a83;
case 0x690a89:c.instructions+=81;goto B690a89;
case 0x690a8e:c.instructions+=80;goto B690a8e;
case 0x690a92:c.instructions+=79;goto B690a92;
case 0x690a95:c.instructions+=78;goto B690a95;
case 0x690a9b:c.instructions+=77;goto B690a9b;
case 0x690a9f:c.instructions+=76;goto B690a9f;
case 0x690aa3:c.instructions+=75;goto B690aa3;
case 0x690aa7:c.instructions+=74;goto B690aa7;
case 0x690aad:c.instructions+=73;goto B690aad;
case 0x690ab1:c.instructions+=72;goto B690ab1;
case 0x690ab5:c.instructions+=71;goto B690ab5;
case 0x690ab9:c.instructions+=70;goto B690ab9;
case 0x690abf:c.instructions+=69;goto B690abf;
case 0x690ac3:c.instructions+=68;goto B690ac3;
case 0x690ac7:c.instructions+=67;goto B690ac7;
case 0x690acb:c.instructions+=66;goto B690acb;
case 0x690acf:c.instructions+=65;goto B690acf;
case 0x690ad3:c.instructions+=64;goto B690ad3;
case 0x690ad8:c.instructions+=63;goto B690ad8;
case 0x690adc:c.instructions+=62;goto B690adc;
case 0x690adf:c.instructions+=61;goto B690adf;
case 0x690ae4:c.instructions+=60;goto B690ae4;
case 0x690ae7:c.instructions+=59;goto B690ae7;
case 0x690aec:c.instructions+=58;goto B690aec;
case 0x690aef:c.instructions+=57;goto B690aef;
case 0x690af2:c.instructions+=56;goto B690af2;
case 0x690af6:c.instructions+=55;goto B690af6;
case 0x690af9:c.instructions+=54;goto B690af9;
case 0x690aff:c.instructions+=53;goto B690aff;
case 0x690b04:c.instructions+=52;goto B690b04;
case 0x690b08:c.instructions+=51;goto B690b08;
case 0x690b0b:c.instructions+=50;goto B690b0b;
case 0x690b11:c.instructions+=49;goto B690b11;
case 0x690b15:c.instructions+=48;goto B690b15;
case 0x690b19:c.instructions+=47;goto B690b19;
case 0x690b1d:c.instructions+=46;goto B690b1d;
case 0x690b23:c.instructions+=45;goto B690b23;
case 0x690b27:c.instructions+=44;goto B690b27;
case 0x690b2b:c.instructions+=43;goto B690b2b;
case 0x690b2f:c.instructions+=42;goto B690b2f;
case 0x690b35:c.instructions+=41;goto B690b35;
case 0x690b39:c.instructions+=40;goto B690b39;
case 0x690b3d:c.instructions+=39;goto B690b3d;
case 0x690b41:c.instructions+=38;goto B690b41;
case 0x690b45:c.instructions+=37;goto B690b45;
case 0x690b49:c.instructions+=36;goto B690b49;
case 0x690b4e:c.instructions+=35;goto B690b4e;
case 0x690b52:c.instructions+=34;goto B690b52;
case 0x690b55:c.instructions+=33;goto B690b55;
case 0x690b5a:c.instructions+=32;goto B690b5a;
case 0x690b5d:c.instructions+=31;goto B690b5d;
case 0x690b62:c.instructions+=30;goto B690b62;
case 0x690b65:c.instructions+=29;goto B690b65;
case 0x690b68:c.instructions+=28;goto B690b68;
case 0x690b6c:c.instructions+=27;goto B690b6c;
case 0x690b6f:c.instructions+=26;goto B690b6f;
case 0x690b75:c.instructions+=25;goto B690b75;
case 0x690b7a:c.instructions+=24;goto B690b7a;
case 0x690b7e:c.instructions+=23;goto B690b7e;
case 0x690b81:c.instructions+=22;goto B690b81;
case 0x690b87:c.instructions+=21;goto B690b87;
case 0x690b8b:c.instructions+=20;goto B690b8b;
case 0x690b8f:c.instructions+=19;goto B690b8f;
case 0x690b93:c.instructions+=18;goto B690b93;
case 0x690b99:c.instructions+=17;goto B690b99;
case 0x690b9d:c.instructions+=16;goto B690b9d;
case 0x690ba1:c.instructions+=15;goto B690ba1;
case 0x690ba5:c.instructions+=14;goto B690ba5;
case 0x690bab:c.instructions+=13;goto B690bab;
case 0x690baf:c.instructions+=12;goto B690baf;
case 0x690bb3:c.instructions+=11;goto B690bb3;
case 0x690bb7:c.instructions+=10;goto B690bb7;
case 0x690bbb:c.instructions+=9;goto B690bbb;
case 0x690bbe:c.instructions+=8;goto B690bbe;
case 0x690bc2:c.instructions+=7;goto B690bc2;
case 0x690bc6:c.instructions+=6;goto B690bc6;
case 0x690bca:c.instructions+=5;goto B690bca;
case 0x690bce:c.instructions+=4;goto B690bce;
case 0x690bd2:c.instructions+=3;goto B690bd2;
case 0x690bd6:c.instructions+=2;goto B690bd6;
case 0x690bda:c.instructions+=1;goto B690bda;
case 0x690bdf:goto L690bdf;
case 0x690be2:c.instructions+=253;goto B690be2;
case 0x690be7:c.instructions+=252;goto B690be7;
case 0x690bec:c.instructions+=251;goto B690bec;
case 0x690bf1:c.instructions+=250;goto B690bf1;
case 0x690bf6:c.instructions+=249;goto B690bf6;
case 0x690bf9:c.instructions+=248;goto B690bf9;
case 0x690bfc:c.instructions+=247;goto B690bfc;
case 0x690bff:c.instructions+=246;goto B690bff;
case 0x690c02:c.instructions+=245;goto B690c02;
case 0x690c05:c.instructions+=244;goto B690c05;
case 0x690c09:c.instructions+=243;goto B690c09;
case 0x690c0e:c.instructions+=242;goto B690c0e;
case 0x690c11:c.instructions+=241;goto B690c11;
case 0x690c16:c.instructions+=240;goto B690c16;
case 0x690c1b:c.instructions+=239;goto B690c1b;
case 0x690c1e:c.instructions+=238;goto B690c1e;
case 0x690c21:c.instructions+=237;goto B690c21;
case 0x690c25:c.instructions+=236;goto B690c25;
case 0x690c29:c.instructions+=235;goto B690c29;
case 0x690c2c:c.instructions+=234;goto B690c2c;
case 0x690c31:c.instructions+=233;goto B690c31;
case 0x690c34:c.instructions+=232;goto B690c34;
case 0x690c37:c.instructions+=231;goto B690c37;
case 0x690c3b:c.instructions+=230;goto B690c3b;
case 0x690c3e:c.instructions+=229;goto B690c3e;
case 0x690c41:c.instructions+=228;goto B690c41;
case 0x690c45:c.instructions+=227;goto B690c45;
case 0x690c49:c.instructions+=226;goto B690c49;
case 0x690c4d:c.instructions+=225;goto B690c4d;
case 0x690c50:c.instructions+=224;goto B690c50;
case 0x690c54:c.instructions+=223;goto B690c54;
case 0x690c58:c.instructions+=222;goto B690c58;
case 0x690c5b:c.instructions+=221;goto B690c5b;
case 0x690c60:c.instructions+=220;goto B690c60;
case 0x690c63:c.instructions+=219;goto B690c63;
case 0x690c68:c.instructions+=218;goto B690c68;
case 0x690c6b:c.instructions+=217;goto B690c6b;
case 0x690c6e:c.instructions+=216;goto B690c6e;
case 0x690c72:c.instructions+=215;goto B690c72;
case 0x690c75:c.instructions+=214;goto B690c75;
case 0x690c7b:c.instructions+=213;goto B690c7b;
case 0x690c80:c.instructions+=212;goto B690c80;
case 0x690c84:c.instructions+=211;goto B690c84;
case 0x690c87:c.instructions+=210;goto B690c87;
case 0x690c8d:c.instructions+=209;goto B690c8d;
case 0x690c91:c.instructions+=208;goto B690c91;
case 0x690c95:c.instructions+=207;goto B690c95;
case 0x690c99:c.instructions+=206;goto B690c99;
case 0x690c9f:c.instructions+=205;goto B690c9f;
case 0x690ca3:c.instructions+=204;goto B690ca3;
case 0x690ca7:c.instructions+=203;goto B690ca7;
case 0x690cab:c.instructions+=202;goto B690cab;
case 0x690cb1:c.instructions+=201;goto B690cb1;
case 0x690cb5:c.instructions+=200;goto B690cb5;
case 0x690cb9:c.instructions+=199;goto B690cb9;
case 0x690cbd:c.instructions+=198;goto B690cbd;
case 0x690cc1:c.instructions+=197;goto B690cc1;
case 0x690cc4:c.instructions+=196;goto B690cc4;
case 0x690cc8:c.instructions+=195;goto B690cc8;
case 0x690ccc:c.instructions+=194;goto B690ccc;
case 0x690ccf:c.instructions+=193;goto B690ccf;
case 0x690cd4:c.instructions+=192;goto B690cd4;
case 0x690cd7:c.instructions+=191;goto B690cd7;
case 0x690cdc:c.instructions+=190;goto B690cdc;
case 0x690cdf:c.instructions+=189;goto B690cdf;
case 0x690ce2:c.instructions+=188;goto B690ce2;
case 0x690ce6:c.instructions+=187;goto B690ce6;
case 0x690ce9:c.instructions+=186;goto B690ce9;
case 0x690cef:c.instructions+=185;goto B690cef;
case 0x690cf4:c.instructions+=184;goto B690cf4;
case 0x690cf8:c.instructions+=183;goto B690cf8;
case 0x690cfb:c.instructions+=182;goto B690cfb;
case 0x690d01:c.instructions+=181;goto B690d01;
case 0x690d05:c.instructions+=180;goto B690d05;
case 0x690d09:c.instructions+=179;goto B690d09;
case 0x690d0d:c.instructions+=178;goto B690d0d;
case 0x690d13:c.instructions+=177;goto B690d13;
case 0x690d17:c.instructions+=176;goto B690d17;
case 0x690d1b:c.instructions+=175;goto B690d1b;
case 0x690d1f:c.instructions+=174;goto B690d1f;
case 0x690d25:c.instructions+=173;goto B690d25;
case 0x690d29:c.instructions+=172;goto B690d29;
case 0x690d2d:c.instructions+=171;goto B690d2d;
case 0x690d31:c.instructions+=170;goto B690d31;
case 0x690d35:c.instructions+=169;goto B690d35;
case 0x690d39:c.instructions+=168;goto B690d39;
case 0x690d3d:c.instructions+=167;goto B690d3d;
case 0x690d41:c.instructions+=166;goto B690d41;
case 0x690d44:c.instructions+=165;goto B690d44;
case 0x690d49:c.instructions+=164;goto B690d49;
case 0x690d4c:c.instructions+=163;goto B690d4c;
case 0x690d51:c.instructions+=162;goto B690d51;
case 0x690d54:c.instructions+=161;goto B690d54;
case 0x690d57:c.instructions+=160;goto B690d57;
case 0x690d5b:c.instructions+=159;goto B690d5b;
case 0x690d5e:c.instructions+=158;goto B690d5e;
case 0x690d64:c.instructions+=157;goto B690d64;
case 0x690d69:c.instructions+=156;goto B690d69;
case 0x690d6d:c.instructions+=155;goto B690d6d;
case 0x690d70:c.instructions+=154;goto B690d70;
case 0x690d76:c.instructions+=153;goto B690d76;
case 0x690d7a:c.instructions+=152;goto B690d7a;
case 0x690d7e:c.instructions+=151;goto B690d7e;
case 0x690d82:c.instructions+=150;goto B690d82;
case 0x690d88:c.instructions+=149;goto B690d88;
case 0x690d8c:c.instructions+=148;goto B690d8c;
case 0x690d90:c.instructions+=147;goto B690d90;
case 0x690d94:c.instructions+=146;goto B690d94;
case 0x690d9a:c.instructions+=145;goto B690d9a;
case 0x690d9e:c.instructions+=144;goto B690d9e;
case 0x690da2:c.instructions+=143;goto B690da2;
case 0x690da6:c.instructions+=142;goto B690da6;
case 0x690daa:c.instructions+=141;goto B690daa;
case 0x690dae:c.instructions+=140;goto B690dae;
case 0x690db2:c.instructions+=139;goto B690db2;
case 0x690db6:c.instructions+=138;goto B690db6;
case 0x690db9:c.instructions+=137;goto B690db9;
case 0x690dbe:c.instructions+=136;goto B690dbe;
case 0x690dc1:c.instructions+=135;goto B690dc1;
case 0x690dc6:c.instructions+=134;goto B690dc6;
case 0x690dc9:c.instructions+=133;goto B690dc9;
case 0x690dcc:c.instructions+=132;goto B690dcc;
case 0x690dd0:c.instructions+=131;goto B690dd0;
case 0x690dd3:c.instructions+=130;goto B690dd3;
case 0x690dd9:c.instructions+=129;goto B690dd9;
case 0x690dde:c.instructions+=128;goto B690dde;
case 0x690de2:c.instructions+=127;goto B690de2;
case 0x690de5:c.instructions+=126;goto B690de5;
case 0x690deb:c.instructions+=125;goto B690deb;
case 0x690def:c.instructions+=124;goto B690def;
case 0x690df3:c.instructions+=123;goto B690df3;
case 0x690df7:c.instructions+=122;goto B690df7;
case 0x690dfd:c.instructions+=121;goto B690dfd;
case 0x690e01:c.instructions+=120;goto B690e01;
case 0x690e05:c.instructions+=119;goto B690e05;
case 0x690e09:c.instructions+=118;goto B690e09;
case 0x690e0f:c.instructions+=117;goto B690e0f;
case 0x690e13:c.instructions+=116;goto B690e13;
case 0x690e17:c.instructions+=115;goto B690e17;
case 0x690e1b:c.instructions+=114;goto B690e1b;
case 0x690e1f:c.instructions+=113;goto B690e1f;
case 0x690e22:c.instructions+=112;goto B690e22;
case 0x690e26:c.instructions+=111;goto B690e26;
case 0x690e2b:c.instructions+=110;goto B690e2b;
case 0x690e2e:c.instructions+=109;goto B690e2e;
case 0x690e33:c.instructions+=108;goto B690e33;
case 0x690e36:c.instructions+=107;goto B690e36;
case 0x690e3b:c.instructions+=106;goto B690e3b;
case 0x690e3e:c.instructions+=105;goto B690e3e;
case 0x690e41:c.instructions+=104;goto B690e41;
case 0x690e45:c.instructions+=103;goto B690e45;
case 0x690e48:c.instructions+=102;goto B690e48;
case 0x690e4e:c.instructions+=101;goto B690e4e;
case 0x690e53:c.instructions+=100;goto B690e53;
case 0x690e57:c.instructions+=99;goto B690e57;
case 0x690e5a:c.instructions+=98;goto B690e5a;
case 0x690e60:c.instructions+=97;goto B690e60;
case 0x690e64:c.instructions+=96;goto B690e64;
case 0x690e68:c.instructions+=95;goto B690e68;
case 0x690e6c:c.instructions+=94;goto B690e6c;
case 0x690e72:c.instructions+=93;goto B690e72;
case 0x690e76:c.instructions+=92;goto B690e76;
case 0x690e7a:c.instructions+=91;goto B690e7a;
case 0x690e7e:c.instructions+=90;goto B690e7e;
case 0x690e84:c.instructions+=89;goto B690e84;
case 0x690e88:c.instructions+=88;goto B690e88;
case 0x690e8c:c.instructions+=87;goto B690e8c;
case 0x690e90:c.instructions+=86;goto B690e90;
case 0x690e94:c.instructions+=85;goto B690e94;
case 0x690e97:c.instructions+=84;goto B690e97;
case 0x690e9c:c.instructions+=83;goto B690e9c;
case 0x690ea0:c.instructions+=82;goto B690ea0;
case 0x690ea3:c.instructions+=81;goto B690ea3;
case 0x690ea8:c.instructions+=80;goto B690ea8;
case 0x690eab:c.instructions+=79;goto B690eab;
case 0x690eb0:c.instructions+=78;goto B690eb0;
case 0x690eb3:c.instructions+=77;goto B690eb3;
case 0x690eb6:c.instructions+=76;goto B690eb6;
case 0x690eba:c.instructions+=75;goto B690eba;
case 0x690ebd:c.instructions+=74;goto B690ebd;
case 0x690ec3:c.instructions+=73;goto B690ec3;
case 0x690ec8:c.instructions+=72;goto B690ec8;
case 0x690ecc:c.instructions+=71;goto B690ecc;
case 0x690ecf:c.instructions+=70;goto B690ecf;
case 0x690ed5:c.instructions+=69;goto B690ed5;
case 0x690ed9:c.instructions+=68;goto B690ed9;
case 0x690edd:c.instructions+=67;goto B690edd;
case 0x690ee1:c.instructions+=66;goto B690ee1;
case 0x690ee7:c.instructions+=65;goto B690ee7;
case 0x690eeb:c.instructions+=64;goto B690eeb;
case 0x690eef:c.instructions+=63;goto B690eef;
case 0x690ef3:c.instructions+=62;goto B690ef3;
case 0x690ef9:c.instructions+=61;goto B690ef9;
case 0x690efd:c.instructions+=60;goto B690efd;
case 0x690f01:c.instructions+=59;goto B690f01;
case 0x690f05:c.instructions+=58;goto B690f05;
case 0x690f09:c.instructions+=57;goto B690f09;
case 0x690f0d:c.instructions+=56;goto B690f0d;
case 0x690f12:c.instructions+=55;goto B690f12;
case 0x690f16:c.instructions+=54;goto B690f16;
case 0x690f19:c.instructions+=53;goto B690f19;
case 0x690f1e:c.instructions+=52;goto B690f1e;
case 0x690f21:c.instructions+=51;goto B690f21;
case 0x690f26:c.instructions+=50;goto B690f26;
case 0x690f29:c.instructions+=49;goto B690f29;
case 0x690f2c:c.instructions+=48;goto B690f2c;
case 0x690f30:c.instructions+=47;goto B690f30;
case 0x690f33:c.instructions+=46;goto B690f33;
case 0x690f39:c.instructions+=45;goto B690f39;
case 0x690f3e:c.instructions+=44;goto B690f3e;
case 0x690f42:c.instructions+=43;goto B690f42;
case 0x690f45:c.instructions+=42;goto B690f45;
case 0x690f4b:c.instructions+=41;goto B690f4b;
case 0x690f4f:c.instructions+=40;goto B690f4f;
case 0x690f53:c.instructions+=39;goto B690f53;
case 0x690f57:c.instructions+=38;goto B690f57;
case 0x690f5d:c.instructions+=37;goto B690f5d;
case 0x690f61:c.instructions+=36;goto B690f61;
case 0x690f65:c.instructions+=35;goto B690f65;
case 0x690f69:c.instructions+=34;goto B690f69;
case 0x690f6f:c.instructions+=33;goto B690f6f;
case 0x690f73:c.instructions+=32;goto B690f73;
case 0x690f77:c.instructions+=31;goto B690f77;
case 0x690f7b:c.instructions+=30;goto B690f7b;
case 0x690f7f:c.instructions+=29;goto B690f7f;
case 0x690f83:c.instructions+=28;goto B690f83;
case 0x690f88:c.instructions+=27;goto B690f88;
case 0x690f8c:c.instructions+=26;goto B690f8c;
case 0x690f8f:c.instructions+=25;goto B690f8f;
case 0x690f94:c.instructions+=24;goto B690f94;
case 0x690f97:c.instructions+=23;goto B690f97;
case 0x690f9c:c.instructions+=22;goto B690f9c;
case 0x690f9f:c.instructions+=21;goto B690f9f;
case 0x690fa2:c.instructions+=20;goto B690fa2;
case 0x690fa6:c.instructions+=19;goto B690fa6;
case 0x690fa9:c.instructions+=18;goto B690fa9;
case 0x690faf:c.instructions+=17;goto B690faf;
case 0x690fb4:c.instructions+=16;goto B690fb4;
case 0x690fb8:c.instructions+=15;goto B690fb8;
case 0x690fbb:c.instructions+=14;goto B690fbb;
case 0x690fc1:c.instructions+=13;goto B690fc1;
case 0x690fc5:c.instructions+=12;goto B690fc5;
case 0x690fc9:c.instructions+=11;goto B690fc9;
case 0x690fcd:c.instructions+=10;goto B690fcd;
case 0x690fd3:c.instructions+=9;goto B690fd3;
case 0x690fd7:c.instructions+=8;goto B690fd7;
case 0x690fdb:c.instructions+=7;goto B690fdb;
case 0x690fdf:c.instructions+=6;goto B690fdf;
case 0x690fe5:c.instructions+=5;goto B690fe5;
case 0x690fe9:c.instructions+=4;goto B690fe9;
case 0x690fed:c.instructions+=3;goto B690fed;
case 0x690ff1:c.instructions+=2;goto B690ff1;
case 0x690ff5:c.instructions+=1;goto B690ff5;
case 0x690ffa:goto L690ffa;
case 0x690ffd:c.instructions+=2;goto B690ffd;
case 0x690fff:c.instructions+=1;goto B690fff;
default:missing_instruction(c.pc);}
B690002:L690002:{c.instructions+=28;NFSU2_TR(0x690002);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>(gp(0x7b7218))));}
}
B69000a:{NFSU2_TR(0x69000a);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69000d:{NFSU2_TR(0x69000d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690011:{NFSU2_TR(0x690011);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690015:{NFSU2_TR(0x690015);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690019:{NFSU2_TR(0x690019);
__builtin_memmove((R+4416),(R+4400),8);
}
B69001c:{NFSU2_TR(0x69001c);
__builtin_memmove((R+4448),(R+4400),8);
}
B69001f:{NFSU2_TR(0x69001f);
__builtin_memmove((R+4420),(R+4416),4);
}
B690022:{NFSU2_TR(0x690022);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B690025:{NFSU2_TR(0x690025);
__builtin_memmove((R+4432),(R+4416),8);
}
B690028:{NFSU2_TR(0x690028);
__builtin_memmove((R+4464),(R+4448),8);
}
B69002b:{NFSU2_TR(0x69002b);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x20ull))));
}
B69002f:{NFSU2_TR(0x69002f);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B690033:{NFSU2_TR(0x690033);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690037:{NFSU2_TR(0x690037);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B69003b:{NFSU2_TR(0x69003b);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B69003f:{NFSU2_TR(0x69003f);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B690043:{NFSU2_TR(0x690043);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>(gp(0x7b7220))));}
}
B69004b:{NFSU2_TR(0x69004b);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7218))));}
}
B690053:{NFSU2_TR(0x690053);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690057:{NFSU2_TR(0x690057);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69005b:{NFSU2_TR(0x69005b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69005f:{NFSU2_TR(0x69005f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690063:{NFSU2_TR(0x690063);
__builtin_memmove((R+16),(R+20),4);
}
B690065:{NFSU2_TR(0x690065);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B690069:{NFSU2_TR(0x690069);
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
B69006c:{NFSU2_TR(0x69006c);
w2(R+4260,0xffffu);
}
B69006e:{NFSU2_TR(0x69006e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B690071:L690071:{c.instructions+=6;NFSU2_TR(0x690071);
__builtin_memmove((R+28),(R+28),4);
}
B690073:{NFSU2_TR(0x690073);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B690074:{NFSU2_TR(0x690074);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B690075:{NFSU2_TR(0x690075);
w2(R+4260,0xffffu);
}
B690077:{NFSU2_TR(0x690077);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B69007c:{NFSU2_TR(0x69007c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x690081ull));
TAIL_STATIC(0x6d4460u,6d4);
}
B690081:L690081:{c.instructions+=22;NFSU2_TR(0x690081);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B690085:{NFSU2_TR(0x690085);
__builtin_memmove((R+4416),(R+4352),8);
}
B690088:{NFSU2_TR(0x690088);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4368))));
}
B69008b:{NFSU2_TR(0x69008b);
__builtin_memmove((R+4384),gp(0x7b7220),8);
}
B690092:{NFSU2_TR(0x690092);
__builtin_memmove((R+4400),gp(0x7b7218),8);
}
B690099:{NFSU2_TR(0x690099);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x20ull))));
}
B69009d:{NFSU2_TR(0x69009d);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6900a0:{NFSU2_TR(0x6900a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6900a4:{NFSU2_TR(0x6900a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6900a8:{NFSU2_TR(0x6900a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B6900ac:{NFSU2_TR(0x6900ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6900b0:{NFSU2_TR(0x6900b0);
w8(R+4416,u64(u64(r8(R+4416))^u64(m8(0x7b71d0))));
}
B6900b7:{NFSU2_TR(0x6900b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6900bb:{NFSU2_TR(0x6900bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6900bf:{NFSU2_TR(0x6900bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6900c3:{NFSU2_TR(0x6900c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(r8(R+4416)));
s4(u32(r4(U+0)),r4(U+4));
}
B6900c7:{NFSU2_TR(0x6900c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B6900cb:{NFSU2_TR(0x6900cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6900cf:{NFSU2_TR(0x6900cf);
w2(R+4260,0xffffu);
}
B6900d1:{NFSU2_TR(0x6900d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6900d2:{NFSU2_TR(0x6900d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6900d3:{NFSU2_TR(0x6900d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6900d6:L6900d6:{c.instructions+=6;NFSU2_TR(0x6900d6);
__builtin_memmove((R+28),(R+28),4);
}
B6900d8:{NFSU2_TR(0x6900d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6900d9:{NFSU2_TR(0x6900d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6900da:{NFSU2_TR(0x6900da);
w2(R+4260,0xffffu);
}
B6900dc:{NFSU2_TR(0x6900dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B6900e1:{NFSU2_TR(0x6900e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6900e6ull));
TAIL_STATIC(0x6d4460u,6d4);
}
B6900e6:L6900e6:{c.instructions+=20;NFSU2_TR(0x6900e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6900ea:{NFSU2_TR(0x6900ea);
__builtin_memmove((R+4416),(R+4352),8);
}
B6900ed:{NFSU2_TR(0x6900ed);
w8(R+4352,u64(u64(r8(R+4352))&u64(m8(0x7b71a8))));
}
B6900f4:{NFSU2_TR(0x6900f4);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4368))));
}
B6900f7:{NFSU2_TR(0x6900f7);
__builtin_memmove((R+4384),gp(0x7b7220),8);
}
B6900fe:{NFSU2_TR(0x6900fe);
__builtin_memmove((R+4400),gp(0x7b7218),8);
}
B690105:{NFSU2_TR(0x690105);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x20ull))));
}
B690109:{NFSU2_TR(0x690109);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69010d:{NFSU2_TR(0x69010d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690111:{NFSU2_TR(0x690111);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690115:{NFSU2_TR(0x690115);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690119:{NFSU2_TR(0x690119);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69011d:{NFSU2_TR(0x69011d);
w8(R+4416,u64(u64(r8(R+4416))^u64(m8(0x7b71d0))));
}
B690124:{NFSU2_TR(0x690124);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B690127:{NFSU2_TR(0x690127);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69012b:{NFSU2_TR(0x69012b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69012f:{NFSU2_TR(0x69012f);
w2(R+4260,0xffffu);
}
B690131:{NFSU2_TR(0x690131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B690132:{NFSU2_TR(0x690132);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B690133:{NFSU2_TR(0x690133);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B690136:L690136:{c.instructions+=6;NFSU2_TR(0x690136);
__builtin_memmove((R+28),(R+28),4);
}
B690138:{NFSU2_TR(0x690138);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B690139:{NFSU2_TR(0x690139);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69013a:{NFSU2_TR(0x69013a);
w2(R+4260,0xffffu);
}
B69013c:{NFSU2_TR(0x69013c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B690141:{NFSU2_TR(0x690141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x690146ull));
TAIL_STATIC(0x6d4460u,6d4);
}
B690146:L690146:{c.instructions+=20;NFSU2_TR(0x690146);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69014a:{NFSU2_TR(0x69014a);
__builtin_memmove((R+4416),(R+4352),8);
}
B69014d:{NFSU2_TR(0x69014d);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B690150:{NFSU2_TR(0x690150);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4368))));
}
B690153:{NFSU2_TR(0x690153);
__builtin_memmove((R+4384),gp(0x7b7220),8);
}
B69015a:{NFSU2_TR(0x69015a);
__builtin_memmove((R+4400),gp(0x7b7218),8);
}
B690161:{NFSU2_TR(0x690161);
__builtin_memmove((R+4420),(R+4352),4);
}
B690164:{NFSU2_TR(0x690164);
w8(R+4416,u64(u64(r8(R+4416))^u64(m8(0x7b71d0))));
}
B69016b:{NFSU2_TR(0x69016b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69016e:{NFSU2_TR(0x69016e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690172:{NFSU2_TR(0x690172);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690176:{NFSU2_TR(0x690176);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69017a:{NFSU2_TR(0x69017a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69017e:{NFSU2_TR(0x69017e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690182:{NFSU2_TR(0x690182);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690186:{NFSU2_TR(0x690186);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69018a:{NFSU2_TR(0x69018a);
w2(R+4260,0xffffu);
}
B69018c:{NFSU2_TR(0x69018c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69018d:{NFSU2_TR(0x69018d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69018e:{NFSU2_TR(0x69018e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B690191:L690191:{c.instructions+=18;NFSU2_TR(0x690191);
w2(R+4260,0xffffu);
}
B690193:{NFSU2_TR(0x690193);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B690197:{NFSU2_TR(0x690197);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B69019c:{NFSU2_TR(0x69019c);
__builtin_memmove((R+4368),gp(0x7b7218),8);
}
B6901a3:{NFSU2_TR(0x6901a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B6901a8:{NFSU2_TR(0x6901a8);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B6901ab:{NFSU2_TR(0x6901ab);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x20ull))));
}
B6901af:{NFSU2_TR(0x6901af);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B6901b4:{NFSU2_TR(0x6901b4);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6901b7:{NFSU2_TR(0x6901b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901bb:{NFSU2_TR(0x6901bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901bf:{NFSU2_TR(0x6901bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901c3:{NFSU2_TR(0x6901c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901c7:{NFSU2_TR(0x6901c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901cb:{NFSU2_TR(0x6901cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901cf:{NFSU2_TR(0x6901cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901d3:{NFSU2_TR(0x6901d3);
w2(R+4260,0xffffu);
}
B6901d5:{NFSU2_TR(0x6901d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6901d8:L6901d8:{c.instructions+=32;NFSU2_TR(0x6901d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6901dc:{NFSU2_TR(0x6901dc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6901df:{NFSU2_TR(0x6901df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6901e3:{NFSU2_TR(0x6901e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6901e7:{NFSU2_TR(0x6901e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6901eb:{NFSU2_TR(0x6901eb);
__builtin_memmove((R+4384),(R+4352),8);
}
B6901ee:{NFSU2_TR(0x6901ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6901f2:{NFSU2_TR(0x6901f2);
__builtin_memmove((R+4356),(R+4368),4);
}
B6901f5:{NFSU2_TR(0x6901f5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B6901f8:{NFSU2_TR(0x6901f8);
__builtin_memmove((R+4432),(R+4400),8);
}
B6901fb:{NFSU2_TR(0x6901fb);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6901fe:{NFSU2_TR(0x6901fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690202:{NFSU2_TR(0x690202);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690206:{NFSU2_TR(0x690206);
__builtin_memmove((R+4404),(R+4416),4);
}
B690209:{NFSU2_TR(0x690209);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69020d:{NFSU2_TR(0x69020d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690211:{NFSU2_TR(0x690211);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B690214:{NFSU2_TR(0x690214);
__builtin_memmove((R+4368),(R+4448),8);
}
B690217:{NFSU2_TR(0x690217);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69021b:{NFSU2_TR(0x69021b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69021f:{NFSU2_TR(0x69021f);
__builtin_memmove((R+4452),(R+4464),4);
}
B690222:{NFSU2_TR(0x690222);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690226:{NFSU2_TR(0x690226);
__builtin_memmove((R+4384),(R+4352),8);
}
B690229:{NFSU2_TR(0x690229);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B69022c:{NFSU2_TR(0x69022c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690230:{NFSU2_TR(0x690230);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B690233:{NFSU2_TR(0x690233);
__builtin_memmove((R+4388),(R+4416),4);
}
B690236:{NFSU2_TR(0x690236);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69023a:{NFSU2_TR(0x69023a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69023e:{NFSU2_TR(0x69023e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690242:{NFSU2_TR(0x690242);
w2(R+4260,0xffffu);
}
B690244:{NFSU2_TR(0x690244);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B690247:L690247:{c.instructions+=58;NFSU2_TR(0x690247);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69024b:{NFSU2_TR(0x69024b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69024f:{NFSU2_TR(0x69024f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690252:{NFSU2_TR(0x690252);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690256:{NFSU2_TR(0x690256);
__builtin_memmove((R+4384),(R+4352),8);
}
B690259:{NFSU2_TR(0x690259);
__builtin_memmove((R+4400),(R+4352),8);
}
B69025c:{NFSU2_TR(0x69025c);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B690260:{NFSU2_TR(0x690260);
__builtin_memmove((R+4416),(R+4368),8);
}
B690263:{NFSU2_TR(0x690263);
__builtin_memmove((R+4464),(R+4368),8);
}
B690266:{NFSU2_TR(0x690266);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B69026a:{NFSU2_TR(0x69026a);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69026d:{NFSU2_TR(0x69026d);
__builtin_memmove((R+4432),(R+4352),8);
}
B690270:{NFSU2_TR(0x690270);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B690273:{NFSU2_TR(0x690273);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B690277:{NFSU2_TR(0x690277);
__builtin_memmove((R+4372),(R+4352),4);
}
B69027a:{NFSU2_TR(0x69027a);
__builtin_memmove((R+4468),(R+4464),4);
}
B69027d:{NFSU2_TR(0x69027d);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690281:{NFSU2_TR(0x690281);
__builtin_memmove((R+4448),(R+4368),8);
}
B690284:{NFSU2_TR(0x690284);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B690288:{NFSU2_TR(0x690288);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B69028c:{NFSU2_TR(0x69028c);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B69028f:{NFSU2_TR(0x69028f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B690293:{NFSU2_TR(0x690293);
__builtin_memmove((R+4384),(R+4368),8);
}
B690296:{NFSU2_TR(0x690296);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B690299:{NFSU2_TR(0x690299);
__builtin_memmove((R+4468),(R+4464),4);
}
B69029c:{NFSU2_TR(0x69029c);
__builtin_memmove((R+4452),(R+4448),4);
}
B69029f:{NFSU2_TR(0x69029f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6902a3:{NFSU2_TR(0x6902a3);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6902a7:{NFSU2_TR(0x6902a7);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B6902ab:{NFSU2_TR(0x6902ab);
__builtin_memmove((R+4416),(R+4368),8);
}
B6902ae:{NFSU2_TR(0x6902ae);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4436),4);
}
B6902b1:{NFSU2_TR(0x6902b1);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7158))));}
}
B6902b9:{NFSU2_TR(0x6902b9);
{wv<8>((R+4464),uo::pfsubr<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7158))));}
}
B6902c1:{NFSU2_TR(0x6902c1);
__builtin_memmove((R+4404),(R+4352),4);
}
B6902c4:{NFSU2_TR(0x6902c4);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B6902c8:{NFSU2_TR(0x6902c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6902cc:{NFSU2_TR(0x6902cc);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6902d0:{NFSU2_TR(0x6902d0);
__builtin_memmove((R+4400),(R+4384),8);
}
B6902d3:{NFSU2_TR(0x6902d3);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B6902d7:{NFSU2_TR(0x6902d7);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B6902db:{NFSU2_TR(0x6902db);
__builtin_memmove((R+4432),(R+4416),8);
}
B6902de:{NFSU2_TR(0x6902de);
__builtin_memmove((R+4388),(R+4352),4);
}
B6902e1:{NFSU2_TR(0x6902e1);
__builtin_memmove((R+4448),(R+4368),8);
}
B6902e4:{NFSU2_TR(0x6902e4);
__builtin_memmove((R+4420),(R+4464),4);
}
B6902e7:{NFSU2_TR(0x6902e7);
__builtin_memmove((R+4372),(R+4368),4);
}
B6902ea:{NFSU2_TR(0x6902ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6902ee:{NFSU2_TR(0x6902ee);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4356),4);
}
B6902f1:{NFSU2_TR(0x6902f1);
__builtin_memmove((R+4356),gp(0x7b7158),4);
}
B6902f8:{NFSU2_TR(0x6902f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6902fc:{NFSU2_TR(0x6902fc);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B6902ff:{NFSU2_TR(0x6902ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690303:{NFSU2_TR(0x690303);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B690306:{NFSU2_TR(0x690306);
__builtin_memmove((R+4452),(R+4400),4);
}
B690309:{NFSU2_TR(0x690309);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69030c:{NFSU2_TR(0x69030c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690310:{NFSU2_TR(0x690310);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690314:{NFSU2_TR(0x690314);
w2(R+4260,0xffffu);
}
B690316:{NFSU2_TR(0x690316);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B690319:L690319:{c.instructions+=48;NFSU2_TR(0x690319);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69031d:{NFSU2_TR(0x69031d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B690321:{NFSU2_TR(0x690321);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690324:{NFSU2_TR(0x690324);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690328:{NFSU2_TR(0x690328);
{wv<8>((R+4400),uo::pswapd<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B69032c:{NFSU2_TR(0x69032c);
__builtin_memmove((R+4448),(R+4352),8);
}
B69032f:{NFSU2_TR(0x69032f);
__builtin_memmove((R+4384),(R+4352),8);
}
B690332:{NFSU2_TR(0x690332);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B690336:{NFSU2_TR(0x690336);
__builtin_memmove((R+4416),(R+4368),8);
}
B690339:{NFSU2_TR(0x690339);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4372),4);
}
B69033c:{NFSU2_TR(0x69033c);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B690340:{NFSU2_TR(0x690340);
__builtin_memmove((R+4432),(R+4352),8);
}
B690343:{NFSU2_TR(0x690343);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B690347:{NFSU2_TR(0x690347);
__builtin_memmove((R+4436),(R+4368),4);
}
B69034a:{NFSU2_TR(0x69034a);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69034e:{NFSU2_TR(0x69034e);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B690352:{NFSU2_TR(0x690352);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B690356:{NFSU2_TR(0x690356);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69035a:{NFSU2_TR(0x69035a);
__builtin_memmove((R+4416),(R+4352),8);
}
B69035d:{NFSU2_TR(0x69035d);
{wv<8>((R+4352),uo::pfsubr<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7158))));}
}
B690365:{NFSU2_TR(0x690365);
__builtin_memmove((R+4432),(R+4368),8);
}
B690368:{NFSU2_TR(0x690368);
__builtin_memmove((R+4372),(R+4368),4);
}
B69036b:{NFSU2_TR(0x69036b);
{wv<8>((R+4400),uo::pfpnacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B69036f:{NFSU2_TR(0x69036f);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B690373:{NFSU2_TR(0x690373);
{wv<8>((R+4448),uo::pfpnacc<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B690377:{NFSU2_TR(0x690377);
{wv<8>((R+4384),uo::pfpnacc<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B69037b:{NFSU2_TR(0x69037b);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69037f:{NFSU2_TR(0x69037f);
{wv<8>((R+4432),uo::pswapd<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690383:{NFSU2_TR(0x690383);
{wv<8>((R+4416),uo::pfsubr<8>(rv<8>((R+4416)),rv<8>(gp(0x7b7158))));}
}
B69038b:{NFSU2_TR(0x69038b);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B69038e:{NFSU2_TR(0x69038e);
__builtin_memmove((R+4368),(R+4352),8);
}
B690391:{NFSU2_TR(0x690391);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690395:{NFSU2_TR(0x690395);
__builtin_memmove((R+4436),(R+4400),4);
}
B690398:{NFSU2_TR(0x690398);
__builtin_memmove((R+4388),(R+4464),4);
}
B69039b:{NFSU2_TR(0x69039b);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4468),4);
}
B69039e:{NFSU2_TR(0x69039e);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4452),4);
}
B6903a1:{NFSU2_TR(0x6903a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6903a5:{NFSU2_TR(0x6903a5);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4468),4);
}
B6903a8:{NFSU2_TR(0x6903a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6903ac:{NFSU2_TR(0x6903ac);
__builtin_memmove((R+4452),(R+4368),4);
}
B6903af:{NFSU2_TR(0x6903af);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6903b3:{NFSU2_TR(0x6903b3);
__builtin_memmove((R+4468),gp(0x7b7158),4);
}
B6903ba:{NFSU2_TR(0x6903ba);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6903bd:{NFSU2_TR(0x6903bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6903c1:{NFSU2_TR(0x6903c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6903c5:{NFSU2_TR(0x6903c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6903c9:{NFSU2_TR(0x6903c9);
w2(R+4260,0xffffu);
}
B6903cb:{NFSU2_TR(0x6903cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6903ce:L6903ce:{c.instructions+=10;NFSU2_TR(0x6903ce);
__builtin_memmove((R+28),(R+28),4);
}
B6903d0:{NFSU2_TR(0x6903d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6903d1:{NFSU2_TR(0x6903d1);
__builtin_memmove((R+20),(R+16),4);
}
B6903d3:{NFSU2_TR(0x6903d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc0ull))));
}
B6903d9:{NFSU2_TR(0x6903d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6903dc:{NFSU2_TR(0x6903dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6903df:{NFSU2_TR(0x6903df);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B6903e2:{NFSU2_TR(0x6903e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6903e4:{NFSU2_TR(0x6903e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6903e7:{NFSU2_TR(0x6903e7);
if(r1(R+518)){TAIL_STATIC(0x691097u,691);}
}
B6903ed:L6903ed:{c.instructions+=2;NFSU2_TR(0x6903ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6903ef:{NFSU2_TR(0x6903ef);
if(r1(R+518)){{goto L690ffa;}}
}
B6903f5:L6903f5:{c.instructions+=74;NFSU2_TR(0x6903f5);
__builtin_memmove((R+4368),gp(0x7b7138),8);
}
B6903fc:{NFSU2_TR(0x6903fc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B6903ff:{NFSU2_TR(0x6903ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B690403:{NFSU2_TR(0x690403);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B690406:{NFSU2_TR(0x690406);
__builtin_memmove((R+4400),(R+4384),8);
}
B690409:{NFSU2_TR(0x690409);
__builtin_memmove((R+4388),(R+4432),4);
}
B69040c:{NFSU2_TR(0x69040c);
__builtin_memmove((R+4352),(R+4432),8);
}
B69040f:{NFSU2_TR(0x69040f);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B690412:{NFSU2_TR(0x690412);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B690416:{NFSU2_TR(0x690416);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69041b:{NFSU2_TR(0x69041b);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690420:{NFSU2_TR(0x690420);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690425:{NFSU2_TR(0x690425);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69042a:{NFSU2_TR(0x69042a);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69042f:{NFSU2_TR(0x69042f);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690434:{NFSU2_TR(0x690434);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690439:{NFSU2_TR(0x690439);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B69043d:{NFSU2_TR(0x69043d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690440:{NFSU2_TR(0x690440);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690444:{NFSU2_TR(0x690444);
__builtin_memmove((R+4384),(R+4352),8);
}
B690447:{NFSU2_TR(0x690447);
__builtin_memmove((R+4400),(R+4352),8);
}
B69044a:{NFSU2_TR(0x69044a);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B69044e:{NFSU2_TR(0x69044e);
__builtin_memmove((R+4416),(R+4368),8);
}
B690451:{NFSU2_TR(0x690451);
__builtin_memmove((R+4464),(R+4368),8);
}
B690454:{NFSU2_TR(0x690454);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B690458:{NFSU2_TR(0x690458);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69045b:{NFSU2_TR(0x69045b);
__builtin_memmove((R+4432),(R+4352),8);
}
B69045e:{NFSU2_TR(0x69045e);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B690461:{NFSU2_TR(0x690461);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B690465:{NFSU2_TR(0x690465);
__builtin_memmove((R+4372),(R+4352),4);
}
B690468:{NFSU2_TR(0x690468);
__builtin_memmove((R+4468),(R+4464),4);
}
B69046b:{NFSU2_TR(0x69046b);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69046f:{NFSU2_TR(0x69046f);
__builtin_memmove((R+4448),(R+4368),8);
}
B690472:{NFSU2_TR(0x690472);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B690476:{NFSU2_TR(0x690476);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B69047a:{NFSU2_TR(0x69047a);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B69047d:{NFSU2_TR(0x69047d);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B690481:{NFSU2_TR(0x690481);
__builtin_memmove((R+4384),(R+4368),8);
}
B690484:{NFSU2_TR(0x690484);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B690487:{NFSU2_TR(0x690487);
__builtin_memmove((R+4468),(R+4464),4);
}
B69048a:{NFSU2_TR(0x69048a);
__builtin_memmove((R+4452),(R+4448),4);
}
B69048d:{NFSU2_TR(0x69048d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690491:{NFSU2_TR(0x690491);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690495:{NFSU2_TR(0x690495);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B690499:{NFSU2_TR(0x690499);
__builtin_memmove((R+4416),(R+4368),8);
}
B69049c:{NFSU2_TR(0x69049c);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4436),4);
}
B69049f:{NFSU2_TR(0x69049f);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7158))));}
}
B6904a7:{NFSU2_TR(0x6904a7);
{wv<8>((R+4464),uo::pfsubr<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7158))));}
}
B6904af:{NFSU2_TR(0x6904af);
__builtin_memmove((R+4404),(R+4352),4);
}
B6904b2:{NFSU2_TR(0x6904b2);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B6904b6:{NFSU2_TR(0x6904b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6904ba:{NFSU2_TR(0x6904ba);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6904be:{NFSU2_TR(0x6904be);
__builtin_memmove((R+4400),(R+4384),8);
}
B6904c1:{NFSU2_TR(0x6904c1);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B6904c5:{NFSU2_TR(0x6904c5);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B6904c9:{NFSU2_TR(0x6904c9);
__builtin_memmove((R+4432),(R+4416),8);
}
B6904cc:{NFSU2_TR(0x6904cc);
__builtin_memmove((R+4388),(R+4352),4);
}
B6904cf:{NFSU2_TR(0x6904cf);
__builtin_memmove((R+4448),(R+4368),8);
}
B6904d2:{NFSU2_TR(0x6904d2);
__builtin_memmove((R+4420),(R+4464),4);
}
B6904d5:{NFSU2_TR(0x6904d5);
__builtin_memmove((R+4372),(R+4368),4);
}
B6904d8:{NFSU2_TR(0x6904d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6904dc:{NFSU2_TR(0x6904dc);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4356),4);
}
B6904df:{NFSU2_TR(0x6904df);
__builtin_memmove((R+4356),gp(0x7b7158),4);
}
B6904e6:{NFSU2_TR(0x6904e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6904ea:{NFSU2_TR(0x6904ea);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B6904ed:{NFSU2_TR(0x6904ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6904f1:{NFSU2_TR(0x6904f1);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B6904f4:{NFSU2_TR(0x6904f4);
__builtin_memmove((R+4452),(R+4400),4);
}
B6904f7:{NFSU2_TR(0x6904f7);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6904fa:{NFSU2_TR(0x6904fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6904fe:{NFSU2_TR(0x6904fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690502:{NFSU2_TR(0x690502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B690505:{NFSU2_TR(0x690505);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B690507:{NFSU2_TR(0x690507);
if(r1(R+518)){{goto L690bdf;}}
}
B69050d:L69050d:{c.instructions+=391;NFSU2_TR(0x69050d);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690512:{NFSU2_TR(0x690512);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690517:{NFSU2_TR(0x690517);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B69051c:{NFSU2_TR(0x69051c);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690521:{NFSU2_TR(0x690521);
__builtin_memmove((R+4384),(R+4352),8);
}
B690524:{NFSU2_TR(0x690524);
__builtin_memmove((R+4356),(R+4368),4);
}
B690527:{NFSU2_TR(0x690527);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B69052a:{NFSU2_TR(0x69052a);
__builtin_memmove((R+4432),(R+4400),8);
}
B69052d:{NFSU2_TR(0x69052d);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690535:{NFSU2_TR(0x690535);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69053d:{NFSU2_TR(0x69053d);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690542:{NFSU2_TR(0x690542);
__builtin_memmove((R+4404),(R+4416),4);
}
B690545:{NFSU2_TR(0x690545);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69054a:{NFSU2_TR(0x69054a);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69054f:{NFSU2_TR(0x69054f);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B690552:{NFSU2_TR(0x690552);
__builtin_memmove((R+4368),(R+4448),8);
}
B690555:{NFSU2_TR(0x690555);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69055d:{NFSU2_TR(0x69055d);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690565:{NFSU2_TR(0x690565);
__builtin_memmove((R+4452),(R+4464),4);
}
B690568:{NFSU2_TR(0x690568);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B69056d:{NFSU2_TR(0x69056d);
__builtin_memmove((R+4384),(R+4352),8);
}
B690570:{NFSU2_TR(0x690570);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B690573:{NFSU2_TR(0x690573);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69057b:{NFSU2_TR(0x69057b);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B69057e:{NFSU2_TR(0x69057e);
__builtin_memmove((R+4388),(R+4416),4);
}
B690581:{NFSU2_TR(0x690581);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690589:{NFSU2_TR(0x690589);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690591:{NFSU2_TR(0x690591);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690599:{NFSU2_TR(0x690599);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69059c:{NFSU2_TR(0x69059c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B69059f:{NFSU2_TR(0x69059f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B6905a3:{NFSU2_TR(0x6905a3);
w8(R+4368,u64(m4(0x7b7148)));
}
B6905aa:{NFSU2_TR(0x6905aa);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B6905ad:{NFSU2_TR(0x6905ad);
__builtin_memmove((R+4384),(R+4368),8);
}
B6905b0:{NFSU2_TR(0x6905b0);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6905b3:{NFSU2_TR(0x6905b3);
__builtin_memmove((R+4388),(R+4368),4);
}
B6905b6:{NFSU2_TR(0x6905b6);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6905b9:{NFSU2_TR(0x6905b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905bd:{NFSU2_TR(0x6905bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905c1:{NFSU2_TR(0x6905c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905c5:{NFSU2_TR(0x6905c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905c9:{NFSU2_TR(0x6905c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905cd:{NFSU2_TR(0x6905cd);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B6905d1:{NFSU2_TR(0x6905d1);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6905d5:{NFSU2_TR(0x6905d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905d9:{NFSU2_TR(0x6905d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905dd:{NFSU2_TR(0x6905dd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6905e0:{NFSU2_TR(0x6905e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6905e4:{NFSU2_TR(0x6905e4);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6905ec:{NFSU2_TR(0x6905ec);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6905ef:{NFSU2_TR(0x6905ef);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6905f7:{NFSU2_TR(0x6905f7);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6905fa:{NFSU2_TR(0x6905fa);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690602:{NFSU2_TR(0x690602);
__builtin_memmove((R+4356),(R+4352),4);
}
B690605:{NFSU2_TR(0x690605);
__builtin_memmove((R+4372),(R+4368),4);
}
B690608:{NFSU2_TR(0x690608);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B69060c:{NFSU2_TR(0x69060c);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69060f:{NFSU2_TR(0x69060f);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690618:{NFSU2_TR(0x690618);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690620:{NFSU2_TR(0x690620);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690624:{NFSU2_TR(0x690624);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690627:{NFSU2_TR(0x690627);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690630:{NFSU2_TR(0x690630);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690634:{NFSU2_TR(0x690634);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690638:{NFSU2_TR(0x690638);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69063c:{NFSU2_TR(0x69063c);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690645:{NFSU2_TR(0x690645);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690649:{NFSU2_TR(0x690649);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69064d:{NFSU2_TR(0x69064d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690651:{NFSU2_TR(0x690651);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69065a:{NFSU2_TR(0x69065a);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69065e:{NFSU2_TR(0x69065e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690662:{NFSU2_TR(0x690662);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690666:{NFSU2_TR(0x690666);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69066a:{NFSU2_TR(0x69066a);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69066d:{NFSU2_TR(0x69066d);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690675:{NFSU2_TR(0x690675);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690679:{NFSU2_TR(0x690679);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69067c:{NFSU2_TR(0x69067c);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690684:{NFSU2_TR(0x690684);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690687:{NFSU2_TR(0x690687);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69068f:{NFSU2_TR(0x69068f);
__builtin_memmove((R+4356),(R+4352),4);
}
B690692:{NFSU2_TR(0x690692);
__builtin_memmove((R+4372),(R+4368),4);
}
B690695:{NFSU2_TR(0x690695);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690699:{NFSU2_TR(0x690699);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69069c:{NFSU2_TR(0x69069c);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6906a5:{NFSU2_TR(0x6906a5);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6906ad:{NFSU2_TR(0x6906ad);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6906b1:{NFSU2_TR(0x6906b1);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6906b4:{NFSU2_TR(0x6906b4);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6906bd:{NFSU2_TR(0x6906bd);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6906c1:{NFSU2_TR(0x6906c1);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6906c5:{NFSU2_TR(0x6906c5);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6906c9:{NFSU2_TR(0x6906c9);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6906d2:{NFSU2_TR(0x6906d2);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6906d6:{NFSU2_TR(0x6906d6);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6906da:{NFSU2_TR(0x6906da);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6906de:{NFSU2_TR(0x6906de);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6906e7:{NFSU2_TR(0x6906e7);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6906eb:{NFSU2_TR(0x6906eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6906ef:{NFSU2_TR(0x6906ef);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6906f3:{NFSU2_TR(0x6906f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6906f7:{NFSU2_TR(0x6906f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6906fb:{NFSU2_TR(0x6906fb);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690703:{NFSU2_TR(0x690703);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690707:{NFSU2_TR(0x690707);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69070a:{NFSU2_TR(0x69070a);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690712:{NFSU2_TR(0x690712);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690715:{NFSU2_TR(0x690715);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69071d:{NFSU2_TR(0x69071d);
__builtin_memmove((R+4356),(R+4352),4);
}
B690720:{NFSU2_TR(0x690720);
__builtin_memmove((R+4372),(R+4368),4);
}
B690723:{NFSU2_TR(0x690723);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690727:{NFSU2_TR(0x690727);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69072a:{NFSU2_TR(0x69072a);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690733:{NFSU2_TR(0x690733);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69073b:{NFSU2_TR(0x69073b);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69073f:{NFSU2_TR(0x69073f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690742:{NFSU2_TR(0x690742);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69074b:{NFSU2_TR(0x69074b);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69074f:{NFSU2_TR(0x69074f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690753:{NFSU2_TR(0x690753);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690757:{NFSU2_TR(0x690757);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690760:{NFSU2_TR(0x690760);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690764:{NFSU2_TR(0x690764);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690768:{NFSU2_TR(0x690768);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69076c:{NFSU2_TR(0x69076c);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690775:{NFSU2_TR(0x690775);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690779:{NFSU2_TR(0x690779);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69077d:{NFSU2_TR(0x69077d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690781:{NFSU2_TR(0x690781);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690785:{NFSU2_TR(0x690785);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690789:{NFSU2_TR(0x690789);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690791:{NFSU2_TR(0x690791);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690795:{NFSU2_TR(0x690795);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690798:{NFSU2_TR(0x690798);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6907a0:{NFSU2_TR(0x6907a0);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6907a3:{NFSU2_TR(0x6907a3);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6907ab:{NFSU2_TR(0x6907ab);
__builtin_memmove((R+4356),(R+4352),4);
}
B6907ae:{NFSU2_TR(0x6907ae);
__builtin_memmove((R+4372),(R+4368),4);
}
B6907b1:{NFSU2_TR(0x6907b1);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6907b5:{NFSU2_TR(0x6907b5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6907b8:{NFSU2_TR(0x6907b8);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6907c1:{NFSU2_TR(0x6907c1);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6907c9:{NFSU2_TR(0x6907c9);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6907cd:{NFSU2_TR(0x6907cd);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6907d0:{NFSU2_TR(0x6907d0);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6907d9:{NFSU2_TR(0x6907d9);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6907dd:{NFSU2_TR(0x6907dd);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6907e1:{NFSU2_TR(0x6907e1);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6907e5:{NFSU2_TR(0x6907e5);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6907ee:{NFSU2_TR(0x6907ee);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6907f2:{NFSU2_TR(0x6907f2);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6907f6:{NFSU2_TR(0x6907f6);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6907fa:{NFSU2_TR(0x6907fa);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690803:{NFSU2_TR(0x690803);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690807:{NFSU2_TR(0x690807);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69080b:{NFSU2_TR(0x69080b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69080f:{NFSU2_TR(0x69080f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690813:{NFSU2_TR(0x690813);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690816:{NFSU2_TR(0x690816);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69081a:{NFSU2_TR(0x69081a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B69081e:{NFSU2_TR(0x69081e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690821:{NFSU2_TR(0x690821);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690826:{NFSU2_TR(0x690826);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690829:{NFSU2_TR(0x690829);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69082e:{NFSU2_TR(0x69082e);
__builtin_memmove((R+4356),(R+4352),4);
}
B690831:{NFSU2_TR(0x690831);
__builtin_memmove((R+4372),(R+4368),4);
}
B690834:{NFSU2_TR(0x690834);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690838:{NFSU2_TR(0x690838);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69083b:{NFSU2_TR(0x69083b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690841:{NFSU2_TR(0x690841);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690846:{NFSU2_TR(0x690846);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69084a:{NFSU2_TR(0x69084a);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69084d:{NFSU2_TR(0x69084d);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690853:{NFSU2_TR(0x690853);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690857:{NFSU2_TR(0x690857);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B69085b:{NFSU2_TR(0x69085b);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69085f:{NFSU2_TR(0x69085f);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690865:{NFSU2_TR(0x690865);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690869:{NFSU2_TR(0x690869);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69086d:{NFSU2_TR(0x69086d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690871:{NFSU2_TR(0x690871);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690877:{NFSU2_TR(0x690877);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69087b:{NFSU2_TR(0x69087b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69087f:{NFSU2_TR(0x69087f);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690883:{NFSU2_TR(0x690883);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690887:{NFSU2_TR(0x690887);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69088a:{NFSU2_TR(0x69088a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B69088e:{NFSU2_TR(0x69088e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690892:{NFSU2_TR(0x690892);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690895:{NFSU2_TR(0x690895);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69089a:{NFSU2_TR(0x69089a);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69089d:{NFSU2_TR(0x69089d);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6908a2:{NFSU2_TR(0x6908a2);
__builtin_memmove((R+4356),(R+4352),4);
}
B6908a5:{NFSU2_TR(0x6908a5);
__builtin_memmove((R+4372),(R+4368),4);
}
B6908a8:{NFSU2_TR(0x6908a8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6908ac:{NFSU2_TR(0x6908ac);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6908af:{NFSU2_TR(0x6908af);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6908b5:{NFSU2_TR(0x6908b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6908ba:{NFSU2_TR(0x6908ba);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6908be:{NFSU2_TR(0x6908be);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6908c1:{NFSU2_TR(0x6908c1);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6908c7:{NFSU2_TR(0x6908c7);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6908cb:{NFSU2_TR(0x6908cb);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6908cf:{NFSU2_TR(0x6908cf);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6908d3:{NFSU2_TR(0x6908d3);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6908d9:{NFSU2_TR(0x6908d9);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6908dd:{NFSU2_TR(0x6908dd);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6908e1:{NFSU2_TR(0x6908e1);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6908e5:{NFSU2_TR(0x6908e5);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6908eb:{NFSU2_TR(0x6908eb);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6908ef:{NFSU2_TR(0x6908ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6908f3:{NFSU2_TR(0x6908f3);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6908f7:{NFSU2_TR(0x6908f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6908fb:{NFSU2_TR(0x6908fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6908ff:{NFSU2_TR(0x6908ff);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B690903:{NFSU2_TR(0x690903);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690907:{NFSU2_TR(0x690907);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69090a:{NFSU2_TR(0x69090a);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69090f:{NFSU2_TR(0x69090f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690912:{NFSU2_TR(0x690912);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690917:{NFSU2_TR(0x690917);
__builtin_memmove((R+4356),(R+4352),4);
}
B69091a:{NFSU2_TR(0x69091a);
__builtin_memmove((R+4372),(R+4368),4);
}
B69091d:{NFSU2_TR(0x69091d);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690921:{NFSU2_TR(0x690921);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690924:{NFSU2_TR(0x690924);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69092a:{NFSU2_TR(0x69092a);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69092f:{NFSU2_TR(0x69092f);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690933:{NFSU2_TR(0x690933);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690936:{NFSU2_TR(0x690936);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69093c:{NFSU2_TR(0x69093c);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690940:{NFSU2_TR(0x690940);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690944:{NFSU2_TR(0x690944);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690948:{NFSU2_TR(0x690948);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69094e:{NFSU2_TR(0x69094e);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690952:{NFSU2_TR(0x690952);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690956:{NFSU2_TR(0x690956);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69095a:{NFSU2_TR(0x69095a);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690960:{NFSU2_TR(0x690960);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690964:{NFSU2_TR(0x690964);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690968:{NFSU2_TR(0x690968);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69096c:{NFSU2_TR(0x69096c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690970:{NFSU2_TR(0x690970);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690974:{NFSU2_TR(0x690974);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B690978:{NFSU2_TR(0x690978);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69097c:{NFSU2_TR(0x69097c);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69097f:{NFSU2_TR(0x69097f);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690984:{NFSU2_TR(0x690984);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690987:{NFSU2_TR(0x690987);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69098c:{NFSU2_TR(0x69098c);
__builtin_memmove((R+4356),(R+4352),4);
}
B69098f:{NFSU2_TR(0x69098f);
__builtin_memmove((R+4372),(R+4368),4);
}
B690992:{NFSU2_TR(0x690992);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690996:{NFSU2_TR(0x690996);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690999:{NFSU2_TR(0x690999);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69099f:{NFSU2_TR(0x69099f);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6909a4:{NFSU2_TR(0x6909a4);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6909a8:{NFSU2_TR(0x6909a8);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6909ab:{NFSU2_TR(0x6909ab);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6909b1:{NFSU2_TR(0x6909b1);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6909b5:{NFSU2_TR(0x6909b5);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6909b9:{NFSU2_TR(0x6909b9);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6909bd:{NFSU2_TR(0x6909bd);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6909c3:{NFSU2_TR(0x6909c3);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6909c7:{NFSU2_TR(0x6909c7);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6909cb:{NFSU2_TR(0x6909cb);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6909cf:{NFSU2_TR(0x6909cf);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6909d5:{NFSU2_TR(0x6909d5);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6909d9:{NFSU2_TR(0x6909d9);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6909dd:{NFSU2_TR(0x6909dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6909e1:{NFSU2_TR(0x6909e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6909e5:{NFSU2_TR(0x6909e5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6909e8:{NFSU2_TR(0x6909e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6909ec:{NFSU2_TR(0x6909ec);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6909f1:{NFSU2_TR(0x6909f1);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6909f4:{NFSU2_TR(0x6909f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6909f9:{NFSU2_TR(0x6909f9);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6909fc:{NFSU2_TR(0x6909fc);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690a01:{NFSU2_TR(0x690a01);
__builtin_memmove((R+4356),(R+4352),4);
}
B690a04:{NFSU2_TR(0x690a04);
__builtin_memmove((R+4372),(R+4368),4);
}
B690a07:{NFSU2_TR(0x690a07);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690a0b:{NFSU2_TR(0x690a0b);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690a0e:{NFSU2_TR(0x690a0e);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690a14:{NFSU2_TR(0x690a14);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690a19:{NFSU2_TR(0x690a19);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690a1d:{NFSU2_TR(0x690a1d);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690a20:{NFSU2_TR(0x690a20);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690a26:{NFSU2_TR(0x690a26);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690a2a:{NFSU2_TR(0x690a2a);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690a2e:{NFSU2_TR(0x690a2e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690a32:{NFSU2_TR(0x690a32);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690a38:{NFSU2_TR(0x690a38);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690a3c:{NFSU2_TR(0x690a3c);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690a40:{NFSU2_TR(0x690a40);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690a44:{NFSU2_TR(0x690a44);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690a4a:{NFSU2_TR(0x690a4a);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690a4e:{NFSU2_TR(0x690a4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690a52:{NFSU2_TR(0x690a52);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690a56:{NFSU2_TR(0x690a56);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690a5a:{NFSU2_TR(0x690a5a);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B690a5d:{NFSU2_TR(0x690a5d);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690a62:{NFSU2_TR(0x690a62);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690a66:{NFSU2_TR(0x690a66);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690a69:{NFSU2_TR(0x690a69);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690a6e:{NFSU2_TR(0x690a6e);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690a71:{NFSU2_TR(0x690a71);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690a76:{NFSU2_TR(0x690a76);
__builtin_memmove((R+4356),(R+4352),4);
}
B690a79:{NFSU2_TR(0x690a79);
__builtin_memmove((R+4372),(R+4368),4);
}
B690a7c:{NFSU2_TR(0x690a7c);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690a80:{NFSU2_TR(0x690a80);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690a83:{NFSU2_TR(0x690a83);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690a89:{NFSU2_TR(0x690a89);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690a8e:{NFSU2_TR(0x690a8e);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690a92:{NFSU2_TR(0x690a92);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690a95:{NFSU2_TR(0x690a95);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690a9b:{NFSU2_TR(0x690a9b);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690a9f:{NFSU2_TR(0x690a9f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690aa3:{NFSU2_TR(0x690aa3);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690aa7:{NFSU2_TR(0x690aa7);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690aad:{NFSU2_TR(0x690aad);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690ab1:{NFSU2_TR(0x690ab1);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690ab5:{NFSU2_TR(0x690ab5);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690ab9:{NFSU2_TR(0x690ab9);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690abf:{NFSU2_TR(0x690abf);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690ac3:{NFSU2_TR(0x690ac3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690ac7:{NFSU2_TR(0x690ac7);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690acb:{NFSU2_TR(0x690acb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690acf:{NFSU2_TR(0x690acf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690ad3:{NFSU2_TR(0x690ad3);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690ad8:{NFSU2_TR(0x690ad8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690adc:{NFSU2_TR(0x690adc);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690adf:{NFSU2_TR(0x690adf);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690ae4:{NFSU2_TR(0x690ae4);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690ae7:{NFSU2_TR(0x690ae7);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690aec:{NFSU2_TR(0x690aec);
__builtin_memmove((R+4356),(R+4352),4);
}
B690aef:{NFSU2_TR(0x690aef);
__builtin_memmove((R+4372),(R+4368),4);
}
B690af2:{NFSU2_TR(0x690af2);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690af6:{NFSU2_TR(0x690af6);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690af9:{NFSU2_TR(0x690af9);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690aff:{NFSU2_TR(0x690aff);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690b04:{NFSU2_TR(0x690b04);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690b08:{NFSU2_TR(0x690b08);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690b0b:{NFSU2_TR(0x690b0b);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690b11:{NFSU2_TR(0x690b11);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690b15:{NFSU2_TR(0x690b15);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690b19:{NFSU2_TR(0x690b19);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690b1d:{NFSU2_TR(0x690b1d);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690b23:{NFSU2_TR(0x690b23);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690b27:{NFSU2_TR(0x690b27);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690b2b:{NFSU2_TR(0x690b2b);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690b2f:{NFSU2_TR(0x690b2f);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690b35:{NFSU2_TR(0x690b35);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690b39:{NFSU2_TR(0x690b39);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690b3d:{NFSU2_TR(0x690b3d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690b41:{NFSU2_TR(0x690b41);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690b45:{NFSU2_TR(0x690b45);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690b49:{NFSU2_TR(0x690b49);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690b4e:{NFSU2_TR(0x690b4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690b52:{NFSU2_TR(0x690b52);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690b55:{NFSU2_TR(0x690b55);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690b5a:{NFSU2_TR(0x690b5a);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690b5d:{NFSU2_TR(0x690b5d);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690b62:{NFSU2_TR(0x690b62);
__builtin_memmove((R+4356),(R+4352),4);
}
B690b65:{NFSU2_TR(0x690b65);
__builtin_memmove((R+4372),(R+4368),4);
}
B690b68:{NFSU2_TR(0x690b68);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690b6c:{NFSU2_TR(0x690b6c);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690b6f:{NFSU2_TR(0x690b6f);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690b75:{NFSU2_TR(0x690b75);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690b7a:{NFSU2_TR(0x690b7a);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690b7e:{NFSU2_TR(0x690b7e);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690b81:{NFSU2_TR(0x690b81);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690b87:{NFSU2_TR(0x690b87);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690b8b:{NFSU2_TR(0x690b8b);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690b8f:{NFSU2_TR(0x690b8f);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690b93:{NFSU2_TR(0x690b93);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690b99:{NFSU2_TR(0x690b99);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690b9d:{NFSU2_TR(0x690b9d);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690ba1:{NFSU2_TR(0x690ba1);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690ba5:{NFSU2_TR(0x690ba5);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690bab:{NFSU2_TR(0x690bab);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690baf:{NFSU2_TR(0x690baf);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690bb3:{NFSU2_TR(0x690bb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690bb7:{NFSU2_TR(0x690bb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690bbb:{NFSU2_TR(0x690bbb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690bbe:{NFSU2_TR(0x690bbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690bc2:{NFSU2_TR(0x690bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B690bc6:{NFSU2_TR(0x690bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B690bca:{NFSU2_TR(0x690bca);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B690bce:{NFSU2_TR(0x690bce);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B690bd2:{NFSU2_TR(0x690bd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690bd6:{NFSU2_TR(0x690bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B690bda:{NFSU2_TR(0x690bda);
TAIL_STATIC(0x6910c9u,691);
}
B690bdf:L690bdf:{c.instructions+=254;NFSU2_TR(0x690bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B690be2:{NFSU2_TR(0x690be2);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690be7:{NFSU2_TR(0x690be7);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690bec:{NFSU2_TR(0x690bec);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B690bf1:{NFSU2_TR(0x690bf1);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690bf6:{NFSU2_TR(0x690bf6);
__builtin_memmove((R+4384),(R+4352),8);
}
B690bf9:{NFSU2_TR(0x690bf9);
__builtin_memmove((R+4356),(R+4368),4);
}
B690bfc:{NFSU2_TR(0x690bfc);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B690bff:{NFSU2_TR(0x690bff);
__builtin_memmove((R+4432),(R+4400),8);
}
B690c02:{NFSU2_TR(0x690c02);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B690c05:{NFSU2_TR(0x690c05);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c09:{NFSU2_TR(0x690c09);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690c0e:{NFSU2_TR(0x690c0e);
__builtin_memmove((R+4404),(R+4416),4);
}
B690c11:{NFSU2_TR(0x690c11);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690c16:{NFSU2_TR(0x690c16);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690c1b:{NFSU2_TR(0x690c1b);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B690c1e:{NFSU2_TR(0x690c1e);
__builtin_memmove((R+4368),(R+4448),8);
}
B690c21:{NFSU2_TR(0x690c21);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c25:{NFSU2_TR(0x690c25);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c29:{NFSU2_TR(0x690c29);
__builtin_memmove((R+4452),(R+4464),4);
}
B690c2c:{NFSU2_TR(0x690c2c);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690c31:{NFSU2_TR(0x690c31);
__builtin_memmove((R+4384),(R+4352),8);
}
B690c34:{NFSU2_TR(0x690c34);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B690c37:{NFSU2_TR(0x690c37);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c3b:{NFSU2_TR(0x690c3b);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B690c3e:{NFSU2_TR(0x690c3e);
__builtin_memmove((R+4388),(R+4416),4);
}
B690c41:{NFSU2_TR(0x690c41);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c45:{NFSU2_TR(0x690c45);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c49:{NFSU2_TR(0x690c49);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c4d:{NFSU2_TR(0x690c4d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690c50:{NFSU2_TR(0x690c50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690c54:{NFSU2_TR(0x690c54);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B690c58:{NFSU2_TR(0x690c58);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690c5b:{NFSU2_TR(0x690c5b);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690c60:{NFSU2_TR(0x690c60);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690c63:{NFSU2_TR(0x690c63);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690c68:{NFSU2_TR(0x690c68);
__builtin_memmove((R+4356),(R+4352),4);
}
B690c6b:{NFSU2_TR(0x690c6b);
__builtin_memmove((R+4372),(R+4368),4);
}
B690c6e:{NFSU2_TR(0x690c6e);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690c72:{NFSU2_TR(0x690c72);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690c75:{NFSU2_TR(0x690c75);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690c7b:{NFSU2_TR(0x690c7b);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690c80:{NFSU2_TR(0x690c80);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690c84:{NFSU2_TR(0x690c84);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690c87:{NFSU2_TR(0x690c87);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690c8d:{NFSU2_TR(0x690c8d);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690c91:{NFSU2_TR(0x690c91);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690c95:{NFSU2_TR(0x690c95);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690c99:{NFSU2_TR(0x690c99);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690c9f:{NFSU2_TR(0x690c9f);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690ca3:{NFSU2_TR(0x690ca3);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690ca7:{NFSU2_TR(0x690ca7);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690cab:{NFSU2_TR(0x690cab);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690cb1:{NFSU2_TR(0x690cb1);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690cb5:{NFSU2_TR(0x690cb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690cb9:{NFSU2_TR(0x690cb9);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690cbd:{NFSU2_TR(0x690cbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690cc1:{NFSU2_TR(0x690cc1);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B690cc4:{NFSU2_TR(0x690cc4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B690cc8:{NFSU2_TR(0x690cc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690ccc:{NFSU2_TR(0x690ccc);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690ccf:{NFSU2_TR(0x690ccf);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690cd4:{NFSU2_TR(0x690cd4);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690cd7:{NFSU2_TR(0x690cd7);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690cdc:{NFSU2_TR(0x690cdc);
__builtin_memmove((R+4356),(R+4352),4);
}
B690cdf:{NFSU2_TR(0x690cdf);
__builtin_memmove((R+4372),(R+4368),4);
}
B690ce2:{NFSU2_TR(0x690ce2);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690ce6:{NFSU2_TR(0x690ce6);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690ce9:{NFSU2_TR(0x690ce9);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690cef:{NFSU2_TR(0x690cef);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690cf4:{NFSU2_TR(0x690cf4);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690cf8:{NFSU2_TR(0x690cf8);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690cfb:{NFSU2_TR(0x690cfb);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690d01:{NFSU2_TR(0x690d01);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690d05:{NFSU2_TR(0x690d05);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690d09:{NFSU2_TR(0x690d09);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690d0d:{NFSU2_TR(0x690d0d);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690d13:{NFSU2_TR(0x690d13);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690d17:{NFSU2_TR(0x690d17);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690d1b:{NFSU2_TR(0x690d1b);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690d1f:{NFSU2_TR(0x690d1f);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690d25:{NFSU2_TR(0x690d25);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690d29:{NFSU2_TR(0x690d29);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690d2d:{NFSU2_TR(0x690d2d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690d31:{NFSU2_TR(0x690d31);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690d35:{NFSU2_TR(0x690d35);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690d39:{NFSU2_TR(0x690d39);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B690d3d:{NFSU2_TR(0x690d3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690d41:{NFSU2_TR(0x690d41);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690d44:{NFSU2_TR(0x690d44);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690d49:{NFSU2_TR(0x690d49);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690d4c:{NFSU2_TR(0x690d4c);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690d51:{NFSU2_TR(0x690d51);
__builtin_memmove((R+4356),(R+4352),4);
}
B690d54:{NFSU2_TR(0x690d54);
__builtin_memmove((R+4372),(R+4368),4);
}
B690d57:{NFSU2_TR(0x690d57);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690d5b:{NFSU2_TR(0x690d5b);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690d5e:{NFSU2_TR(0x690d5e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690d64:{NFSU2_TR(0x690d64);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690d69:{NFSU2_TR(0x690d69);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690d6d:{NFSU2_TR(0x690d6d);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690d70:{NFSU2_TR(0x690d70);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690d76:{NFSU2_TR(0x690d76);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690d7a:{NFSU2_TR(0x690d7a);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690d7e:{NFSU2_TR(0x690d7e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690d82:{NFSU2_TR(0x690d82);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690d88:{NFSU2_TR(0x690d88);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690d8c:{NFSU2_TR(0x690d8c);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690d90:{NFSU2_TR(0x690d90);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690d94:{NFSU2_TR(0x690d94);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690d9a:{NFSU2_TR(0x690d9a);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690d9e:{NFSU2_TR(0x690d9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690da2:{NFSU2_TR(0x690da2);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690da6:{NFSU2_TR(0x690da6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690daa:{NFSU2_TR(0x690daa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690dae:{NFSU2_TR(0x690dae);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B690db2:{NFSU2_TR(0x690db2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690db6:{NFSU2_TR(0x690db6);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690db9:{NFSU2_TR(0x690db9);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690dbe:{NFSU2_TR(0x690dbe);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690dc1:{NFSU2_TR(0x690dc1);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690dc6:{NFSU2_TR(0x690dc6);
__builtin_memmove((R+4356),(R+4352),4);
}
B690dc9:{NFSU2_TR(0x690dc9);
__builtin_memmove((R+4372),(R+4368),4);
}
B690dcc:{NFSU2_TR(0x690dcc);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690dd0:{NFSU2_TR(0x690dd0);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690dd3:{NFSU2_TR(0x690dd3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690dd9:{NFSU2_TR(0x690dd9);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690dde:{NFSU2_TR(0x690dde);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690de2:{NFSU2_TR(0x690de2);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690de5:{NFSU2_TR(0x690de5);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690deb:{NFSU2_TR(0x690deb);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690def:{NFSU2_TR(0x690def);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690df3:{NFSU2_TR(0x690df3);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690df7:{NFSU2_TR(0x690df7);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690dfd:{NFSU2_TR(0x690dfd);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690e01:{NFSU2_TR(0x690e01);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690e05:{NFSU2_TR(0x690e05);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690e09:{NFSU2_TR(0x690e09);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690e0f:{NFSU2_TR(0x690e0f);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690e13:{NFSU2_TR(0x690e13);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690e17:{NFSU2_TR(0x690e17);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690e1b:{NFSU2_TR(0x690e1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690e1f:{NFSU2_TR(0x690e1f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690e22:{NFSU2_TR(0x690e22);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690e26:{NFSU2_TR(0x690e26);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690e2b:{NFSU2_TR(0x690e2b);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690e2e:{NFSU2_TR(0x690e2e);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690e33:{NFSU2_TR(0x690e33);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690e36:{NFSU2_TR(0x690e36);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690e3b:{NFSU2_TR(0x690e3b);
__builtin_memmove((R+4356),(R+4352),4);
}
B690e3e:{NFSU2_TR(0x690e3e);
__builtin_memmove((R+4372),(R+4368),4);
}
B690e41:{NFSU2_TR(0x690e41);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690e45:{NFSU2_TR(0x690e45);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690e48:{NFSU2_TR(0x690e48);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690e4e:{NFSU2_TR(0x690e4e);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690e53:{NFSU2_TR(0x690e53);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690e57:{NFSU2_TR(0x690e57);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690e5a:{NFSU2_TR(0x690e5a);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690e60:{NFSU2_TR(0x690e60);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690e64:{NFSU2_TR(0x690e64);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690e68:{NFSU2_TR(0x690e68);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690e6c:{NFSU2_TR(0x690e6c);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690e72:{NFSU2_TR(0x690e72);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690e76:{NFSU2_TR(0x690e76);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690e7a:{NFSU2_TR(0x690e7a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690e7e:{NFSU2_TR(0x690e7e);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690e84:{NFSU2_TR(0x690e84);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690e88:{NFSU2_TR(0x690e88);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690e8c:{NFSU2_TR(0x690e8c);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690e90:{NFSU2_TR(0x690e90);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690e94:{NFSU2_TR(0x690e94);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B690e97:{NFSU2_TR(0x690e97);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690e9c:{NFSU2_TR(0x690e9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690ea0:{NFSU2_TR(0x690ea0);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690ea3:{NFSU2_TR(0x690ea3);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690ea8:{NFSU2_TR(0x690ea8);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690eab:{NFSU2_TR(0x690eab);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690eb0:{NFSU2_TR(0x690eb0);
__builtin_memmove((R+4356),(R+4352),4);
}
B690eb3:{NFSU2_TR(0x690eb3);
__builtin_memmove((R+4372),(R+4368),4);
}
B690eb6:{NFSU2_TR(0x690eb6);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690eba:{NFSU2_TR(0x690eba);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690ebd:{NFSU2_TR(0x690ebd);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690ec3:{NFSU2_TR(0x690ec3);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690ec8:{NFSU2_TR(0x690ec8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690ecc:{NFSU2_TR(0x690ecc);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690ecf:{NFSU2_TR(0x690ecf);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690ed5:{NFSU2_TR(0x690ed5);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690ed9:{NFSU2_TR(0x690ed9);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690edd:{NFSU2_TR(0x690edd);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690ee1:{NFSU2_TR(0x690ee1);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690ee7:{NFSU2_TR(0x690ee7);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690eeb:{NFSU2_TR(0x690eeb);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690eef:{NFSU2_TR(0x690eef);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690ef3:{NFSU2_TR(0x690ef3);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690ef9:{NFSU2_TR(0x690ef9);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690efd:{NFSU2_TR(0x690efd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690f01:{NFSU2_TR(0x690f01);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690f05:{NFSU2_TR(0x690f05);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690f09:{NFSU2_TR(0x690f09);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690f0d:{NFSU2_TR(0x690f0d);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690f12:{NFSU2_TR(0x690f12);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690f16:{NFSU2_TR(0x690f16);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690f19:{NFSU2_TR(0x690f19);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690f1e:{NFSU2_TR(0x690f1e);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690f21:{NFSU2_TR(0x690f21);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690f26:{NFSU2_TR(0x690f26);
__builtin_memmove((R+4356),(R+4352),4);
}
B690f29:{NFSU2_TR(0x690f29);
__builtin_memmove((R+4372),(R+4368),4);
}
B690f2c:{NFSU2_TR(0x690f2c);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690f30:{NFSU2_TR(0x690f30);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690f33:{NFSU2_TR(0x690f33);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690f39:{NFSU2_TR(0x690f39);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690f3e:{NFSU2_TR(0x690f3e);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690f42:{NFSU2_TR(0x690f42);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690f45:{NFSU2_TR(0x690f45);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690f4b:{NFSU2_TR(0x690f4b);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690f4f:{NFSU2_TR(0x690f4f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690f53:{NFSU2_TR(0x690f53);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690f57:{NFSU2_TR(0x690f57);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690f5d:{NFSU2_TR(0x690f5d);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690f61:{NFSU2_TR(0x690f61);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690f65:{NFSU2_TR(0x690f65);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690f69:{NFSU2_TR(0x690f69);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690f6f:{NFSU2_TR(0x690f6f);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690f73:{NFSU2_TR(0x690f73);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690f77:{NFSU2_TR(0x690f77);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690f7b:{NFSU2_TR(0x690f7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690f7f:{NFSU2_TR(0x690f7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690f83:{NFSU2_TR(0x690f83);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690f88:{NFSU2_TR(0x690f88);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690f8c:{NFSU2_TR(0x690f8c);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690f8f:{NFSU2_TR(0x690f8f);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690f94:{NFSU2_TR(0x690f94);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690f97:{NFSU2_TR(0x690f97);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690f9c:{NFSU2_TR(0x690f9c);
__builtin_memmove((R+4356),(R+4352),4);
}
B690f9f:{NFSU2_TR(0x690f9f);
__builtin_memmove((R+4372),(R+4368),4);
}
B690fa2:{NFSU2_TR(0x690fa2);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690fa6:{NFSU2_TR(0x690fa6);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690fa9:{NFSU2_TR(0x690fa9);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690faf:{NFSU2_TR(0x690faf);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690fb4:{NFSU2_TR(0x690fb4);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690fb8:{NFSU2_TR(0x690fb8);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690fbb:{NFSU2_TR(0x690fbb);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690fc1:{NFSU2_TR(0x690fc1);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690fc5:{NFSU2_TR(0x690fc5);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690fc9:{NFSU2_TR(0x690fc9);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690fcd:{NFSU2_TR(0x690fcd);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690fd3:{NFSU2_TR(0x690fd3);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690fd7:{NFSU2_TR(0x690fd7);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690fdb:{NFSU2_TR(0x690fdb);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690fdf:{NFSU2_TR(0x690fdf);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690fe5:{NFSU2_TR(0x690fe5);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690fe9:{NFSU2_TR(0x690fe9);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690fed:{NFSU2_TR(0x690fed);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690ff1:{NFSU2_TR(0x690ff1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690ff5:{NFSU2_TR(0x690ff5);
TAIL_STATIC(0x6910c9u,691);
}
B690ffa:L690ffa:{c.instructions+=3;NFSU2_TR(0x690ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B690ffd:{NFSU2_TR(0x690ffd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B690fff:{NFSU2_TR(0x690fff);
if(r1(R+518)){TAIL_STATIC(0x691059u,691);}
TAIL_STATIC(0x691001u,691);
}
XIT:NFSU2_TR_EXIT(0x690,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
