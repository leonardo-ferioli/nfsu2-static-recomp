#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_717(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x716,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x716,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_716(u8* __restrict R,Cpu& c);
u32 page_716(Cpu& c){return body_716(c.regs.data(),c);}
__attribute__((noinline)) u32 body_716(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x716002:goto L716002;
case 0x716005:c.instructions+=36;goto B716005;
case 0x716008:c.instructions+=35;goto B716008;
case 0x71600e:c.instructions+=34;goto B71600e;
case 0x716011:c.instructions+=33;goto B716011;
case 0x716014:c.instructions+=32;goto B716014;
case 0x716015:c.instructions+=31;goto B716015;
case 0x716016:c.instructions+=30;goto B716016;
case 0x716019:c.instructions+=29;goto B716019;
case 0x71601c:c.instructions+=28;goto B71601c;
case 0x71601d:c.instructions+=27;goto B71601d;
case 0x71601e:c.instructions+=26;goto B71601e;
case 0x716021:c.instructions+=25;goto B716021;
case 0x716023:c.instructions+=24;goto B716023;
case 0x716024:c.instructions+=23;goto B716024;
case 0x716025:c.instructions+=22;goto B716025;
case 0x716028:c.instructions+=21;goto B716028;
case 0x71602b:c.instructions+=20;goto B71602b;
case 0x71602e:c.instructions+=19;goto B71602e;
case 0x716031:c.instructions+=18;goto B716031;
case 0x716034:c.instructions+=17;goto B716034;
case 0x716036:c.instructions+=16;goto B716036;
case 0x716039:c.instructions+=15;goto B716039;
case 0x71603c:c.instructions+=14;goto B71603c;
case 0x71603f:c.instructions+=13;goto B71603f;
case 0x716042:c.instructions+=12;goto B716042;
case 0x716045:c.instructions+=11;goto B716045;
case 0x716048:c.instructions+=10;goto B716048;
case 0x71604b:c.instructions+=9;goto B71604b;
case 0x71604e:c.instructions+=8;goto B71604e;
case 0x716051:c.instructions+=7;goto B716051;
case 0x716054:c.instructions+=6;goto B716054;
case 0x716057:c.instructions+=5;goto B716057;
case 0x71605e:c.instructions+=4;goto B71605e;
case 0x716065:c.instructions+=3;goto B716065;
case 0x71606c:c.instructions+=2;goto B71606c;
case 0x716073:c.instructions+=1;goto B716073;
case 0x716076:goto L716076;
case 0x716079:c.instructions+=82;goto B716079;
case 0x71607d:c.instructions+=81;goto B71607d;
case 0x716080:c.instructions+=80;goto B716080;
case 0x716083:c.instructions+=79;goto B716083;
case 0x716086:c.instructions+=78;goto B716086;
case 0x716089:c.instructions+=77;goto B716089;
case 0x71608c:c.instructions+=76;goto B71608c;
case 0x71608f:c.instructions+=75;goto B71608f;
case 0x716092:c.instructions+=74;goto B716092;
case 0x716099:c.instructions+=73;goto B716099;
case 0x7160a0:c.instructions+=72;goto B7160a0;
case 0x7160a3:c.instructions+=71;goto B7160a3;
case 0x7160a6:c.instructions+=70;goto B7160a6;
case 0x7160a9:c.instructions+=69;goto B7160a9;
case 0x7160ac:c.instructions+=68;goto B7160ac;
case 0x7160af:c.instructions+=67;goto B7160af;
case 0x7160b2:c.instructions+=66;goto B7160b2;
case 0x7160b5:c.instructions+=65;goto B7160b5;
case 0x7160b8:c.instructions+=64;goto B7160b8;
case 0x7160bb:c.instructions+=63;goto B7160bb;
case 0x7160be:c.instructions+=62;goto B7160be;
case 0x7160c2:c.instructions+=61;goto B7160c2;
case 0x7160c5:c.instructions+=60;goto B7160c5;
case 0x7160c8:c.instructions+=59;goto B7160c8;
case 0x7160cc:c.instructions+=58;goto B7160cc;
case 0x7160d0:c.instructions+=57;goto B7160d0;
case 0x7160d3:c.instructions+=56;goto B7160d3;
case 0x7160d7:c.instructions+=55;goto B7160d7;
case 0x7160da:c.instructions+=54;goto B7160da;
case 0x7160dd:c.instructions+=53;goto B7160dd;
case 0x7160e0:c.instructions+=52;goto B7160e0;
case 0x7160e3:c.instructions+=51;goto B7160e3;
case 0x7160e6:c.instructions+=50;goto B7160e6;
case 0x7160e9:c.instructions+=49;goto B7160e9;
case 0x7160ec:c.instructions+=48;goto B7160ec;
case 0x7160f3:c.instructions+=47;goto B7160f3;
case 0x7160fa:c.instructions+=46;goto B7160fa;
case 0x7160fd:c.instructions+=45;goto B7160fd;
case 0x716100:c.instructions+=44;goto B716100;
case 0x716103:c.instructions+=43;goto B716103;
case 0x716106:c.instructions+=42;goto B716106;
case 0x716109:c.instructions+=41;goto B716109;
case 0x71610c:c.instructions+=40;goto B71610c;
case 0x71610f:c.instructions+=39;goto B71610f;
case 0x716112:c.instructions+=38;goto B716112;
case 0x716115:c.instructions+=37;goto B716115;
case 0x716118:c.instructions+=36;goto B716118;
case 0x71611c:c.instructions+=35;goto B71611c;
case 0x71611f:c.instructions+=34;goto B71611f;
case 0x716122:c.instructions+=33;goto B716122;
case 0x716126:c.instructions+=32;goto B716126;
case 0x71612a:c.instructions+=31;goto B71612a;
case 0x71612d:c.instructions+=30;goto B71612d;
case 0x716131:c.instructions+=29;goto B716131;
case 0x716134:c.instructions+=28;goto B716134;
case 0x716137:c.instructions+=27;goto B716137;
case 0x71613a:c.instructions+=26;goto B71613a;
case 0x71613d:c.instructions+=25;goto B71613d;
case 0x716140:c.instructions+=24;goto B716140;
case 0x716143:c.instructions+=23;goto B716143;
case 0x716146:c.instructions+=22;goto B716146;
case 0x71614d:c.instructions+=21;goto B71614d;
case 0x716154:c.instructions+=20;goto B716154;
case 0x716157:c.instructions+=19;goto B716157;
case 0x71615a:c.instructions+=18;goto B71615a;
case 0x71615d:c.instructions+=17;goto B71615d;
case 0x716160:c.instructions+=16;goto B716160;
case 0x716163:c.instructions+=15;goto B716163;
case 0x716166:c.instructions+=14;goto B716166;
case 0x716169:c.instructions+=13;goto B716169;
case 0x71616c:c.instructions+=12;goto B71616c;
case 0x71616f:c.instructions+=11;goto B71616f;
case 0x716172:c.instructions+=10;goto B716172;
case 0x716176:c.instructions+=9;goto B716176;
case 0x71617d:c.instructions+=8;goto B71617d;
case 0x716180:c.instructions+=7;goto B716180;
case 0x716184:c.instructions+=6;goto B716184;
case 0x71618b:c.instructions+=5;goto B71618b;
case 0x71618d:c.instructions+=4;goto B71618d;
case 0x716190:c.instructions+=3;goto B716190;
case 0x716193:c.instructions+=2;goto B716193;
case 0x716195:c.instructions+=1;goto B716195;
case 0x71619b:goto L71619b;
case 0x71619e:c.instructions+=631;goto B71619e;
case 0x7161a2:c.instructions+=630;goto B7161a2;
case 0x7161a5:c.instructions+=629;goto B7161a5;
case 0x7161a8:c.instructions+=628;goto B7161a8;
case 0x7161ab:c.instructions+=627;goto B7161ab;
case 0x7161ae:c.instructions+=626;goto B7161ae;
case 0x7161b1:c.instructions+=625;goto B7161b1;
case 0x7161b4:c.instructions+=624;goto B7161b4;
case 0x7161b7:c.instructions+=623;goto B7161b7;
case 0x7161be:c.instructions+=622;goto B7161be;
case 0x7161c5:c.instructions+=621;goto B7161c5;
case 0x7161c8:c.instructions+=620;goto B7161c8;
case 0x7161cb:c.instructions+=619;goto B7161cb;
case 0x7161ce:c.instructions+=618;goto B7161ce;
case 0x7161d1:c.instructions+=617;goto B7161d1;
case 0x7161d4:c.instructions+=616;goto B7161d4;
case 0x7161d7:c.instructions+=615;goto B7161d7;
case 0x7161da:c.instructions+=614;goto B7161da;
case 0x7161dd:c.instructions+=613;goto B7161dd;
case 0x7161e0:c.instructions+=612;goto B7161e0;
case 0x7161e3:c.instructions+=611;goto B7161e3;
case 0x7161e7:c.instructions+=610;goto B7161e7;
case 0x7161ea:c.instructions+=609;goto B7161ea;
case 0x7161ed:c.instructions+=608;goto B7161ed;
case 0x7161f1:c.instructions+=607;goto B7161f1;
case 0x7161f5:c.instructions+=606;goto B7161f5;
case 0x7161f8:c.instructions+=605;goto B7161f8;
case 0x7161fb:c.instructions+=604;goto B7161fb;
case 0x7161fe:c.instructions+=603;goto B7161fe;
case 0x716201:c.instructions+=602;goto B716201;
case 0x716205:c.instructions+=601;goto B716205;
case 0x716208:c.instructions+=600;goto B716208;
case 0x71620b:c.instructions+=599;goto B71620b;
case 0x71620e:c.instructions+=598;goto B71620e;
case 0x716211:c.instructions+=597;goto B716211;
case 0x716214:c.instructions+=596;goto B716214;
case 0x716218:c.instructions+=595;goto B716218;
case 0x71621b:c.instructions+=594;goto B71621b;
case 0x71621f:c.instructions+=593;goto B71621f;
case 0x716222:c.instructions+=592;goto B716222;
case 0x716225:c.instructions+=591;goto B716225;
case 0x716228:c.instructions+=590;goto B716228;
case 0x71622c:c.instructions+=589;goto B71622c;
case 0x71622f:c.instructions+=588;goto B71622f;
case 0x716232:c.instructions+=587;goto B716232;
case 0x716235:c.instructions+=586;goto B716235;
case 0x716239:c.instructions+=585;goto B716239;
case 0x71623c:c.instructions+=584;goto B71623c;
case 0x71623f:c.instructions+=583;goto B71623f;
case 0x716242:c.instructions+=582;goto B716242;
case 0x716246:c.instructions+=581;goto B716246;
case 0x716249:c.instructions+=580;goto B716249;
case 0x71624c:c.instructions+=579;goto B71624c;
case 0x71624f:c.instructions+=578;goto B71624f;
case 0x716252:c.instructions+=577;goto B716252;
case 0x716255:c.instructions+=576;goto B716255;
case 0x716258:c.instructions+=575;goto B716258;
case 0x71625b:c.instructions+=574;goto B71625b;
case 0x71625f:c.instructions+=573;goto B71625f;
case 0x716262:c.instructions+=572;goto B716262;
case 0x716265:c.instructions+=571;goto B716265;
case 0x716268:c.instructions+=570;goto B716268;
case 0x71626c:c.instructions+=569;goto B71626c;
case 0x71626f:c.instructions+=568;goto B71626f;
case 0x716272:c.instructions+=567;goto B716272;
case 0x716275:c.instructions+=566;goto B716275;
case 0x71627c:c.instructions+=565;goto B71627c;
case 0x71627f:c.instructions+=564;goto B71627f;
case 0x716282:c.instructions+=563;goto B716282;
case 0x716285:c.instructions+=562;goto B716285;
case 0x71628c:c.instructions+=561;goto B71628c;
case 0x71628f:c.instructions+=560;goto B71628f;
case 0x716292:c.instructions+=559;goto B716292;
case 0x716295:c.instructions+=558;goto B716295;
case 0x716298:c.instructions+=557;goto B716298;
case 0x71629b:c.instructions+=556;goto B71629b;
case 0x71629e:c.instructions+=555;goto B71629e;
case 0x7162a1:c.instructions+=554;goto B7162a1;
case 0x7162a8:c.instructions+=553;goto B7162a8;
case 0x7162ab:c.instructions+=552;goto B7162ab;
case 0x7162ae:c.instructions+=551;goto B7162ae;
case 0x7162b1:c.instructions+=550;goto B7162b1;
case 0x7162b8:c.instructions+=549;goto B7162b8;
case 0x7162bb:c.instructions+=548;goto B7162bb;
case 0x7162be:c.instructions+=547;goto B7162be;
case 0x7162c1:c.instructions+=546;goto B7162c1;
case 0x7162c8:c.instructions+=545;goto B7162c8;
case 0x7162cb:c.instructions+=544;goto B7162cb;
case 0x7162ce:c.instructions+=543;goto B7162ce;
case 0x7162d1:c.instructions+=542;goto B7162d1;
case 0x7162d5:c.instructions+=541;goto B7162d5;
case 0x7162d8:c.instructions+=540;goto B7162d8;
case 0x7162db:c.instructions+=539;goto B7162db;
case 0x7162de:c.instructions+=538;goto B7162de;
case 0x7162e1:c.instructions+=537;goto B7162e1;
case 0x7162e4:c.instructions+=536;goto B7162e4;
case 0x7162e8:c.instructions+=535;goto B7162e8;
case 0x7162ec:c.instructions+=534;goto B7162ec;
case 0x7162ef:c.instructions+=533;goto B7162ef;
case 0x7162f2:c.instructions+=532;goto B7162f2;
case 0x7162f4:c.instructions+=531;goto B7162f4;
case 0x7162f6:c.instructions+=530;goto B7162f6;
case 0x7162f9:c.instructions+=529;goto B7162f9;
case 0x7162fc:c.instructions+=528;goto B7162fc;
case 0x716300:c.instructions+=527;goto B716300;
case 0x716303:c.instructions+=526;goto B716303;
case 0x716306:c.instructions+=525;goto B716306;
case 0x716309:c.instructions+=524;goto B716309;
case 0x71630c:c.instructions+=523;goto B71630c;
case 0x71630f:c.instructions+=522;goto B71630f;
case 0x716313:c.instructions+=521;goto B716313;
case 0x716316:c.instructions+=520;goto B716316;
case 0x71631a:c.instructions+=519;goto B71631a;
case 0x71631d:c.instructions+=518;goto B71631d;
case 0x716320:c.instructions+=517;goto B716320;
case 0x716323:c.instructions+=516;goto B716323;
case 0x716327:c.instructions+=515;goto B716327;
case 0x71632a:c.instructions+=514;goto B71632a;
case 0x71632d:c.instructions+=513;goto B71632d;
case 0x716330:c.instructions+=512;goto B716330;
case 0x716334:c.instructions+=511;goto B716334;
case 0x716337:c.instructions+=510;goto B716337;
case 0x71633a:c.instructions+=509;goto B71633a;
case 0x71633d:c.instructions+=508;goto B71633d;
case 0x716341:c.instructions+=507;goto B716341;
case 0x716344:c.instructions+=506;goto B716344;
case 0x716347:c.instructions+=505;goto B716347;
case 0x71634a:c.instructions+=504;goto B71634a;
case 0x71634d:c.instructions+=503;goto B71634d;
case 0x716350:c.instructions+=502;goto B716350;
case 0x716353:c.instructions+=501;goto B716353;
case 0x716356:c.instructions+=500;goto B716356;
case 0x71635a:c.instructions+=499;goto B71635a;
case 0x71635d:c.instructions+=498;goto B71635d;
case 0x716360:c.instructions+=497;goto B716360;
case 0x716363:c.instructions+=496;goto B716363;
case 0x716367:c.instructions+=495;goto B716367;
case 0x71636a:c.instructions+=494;goto B71636a;
case 0x71636d:c.instructions+=493;goto B71636d;
case 0x716370:c.instructions+=492;goto B716370;
case 0x716377:c.instructions+=491;goto B716377;
case 0x71637a:c.instructions+=490;goto B71637a;
case 0x71637d:c.instructions+=489;goto B71637d;
case 0x716380:c.instructions+=488;goto B716380;
case 0x716387:c.instructions+=487;goto B716387;
case 0x71638a:c.instructions+=486;goto B71638a;
case 0x71638d:c.instructions+=485;goto B71638d;
case 0x716390:c.instructions+=484;goto B716390;
case 0x716393:c.instructions+=483;goto B716393;
case 0x716396:c.instructions+=482;goto B716396;
case 0x716399:c.instructions+=481;goto B716399;
case 0x71639c:c.instructions+=480;goto B71639c;
case 0x7163a3:c.instructions+=479;goto B7163a3;
case 0x7163a6:c.instructions+=478;goto B7163a6;
case 0x7163a9:c.instructions+=477;goto B7163a9;
case 0x7163ac:c.instructions+=476;goto B7163ac;
case 0x7163b3:c.instructions+=475;goto B7163b3;
case 0x7163b6:c.instructions+=474;goto B7163b6;
case 0x7163b9:c.instructions+=473;goto B7163b9;
case 0x7163bc:c.instructions+=472;goto B7163bc;
case 0x7163c3:c.instructions+=471;goto B7163c3;
case 0x7163c6:c.instructions+=470;goto B7163c6;
case 0x7163c9:c.instructions+=469;goto B7163c9;
case 0x7163cc:c.instructions+=468;goto B7163cc;
case 0x7163d0:c.instructions+=467;goto B7163d0;
case 0x7163d3:c.instructions+=466;goto B7163d3;
case 0x7163d6:c.instructions+=465;goto B7163d6;
case 0x7163d9:c.instructions+=464;goto B7163d9;
case 0x7163dc:c.instructions+=463;goto B7163dc;
case 0x7163df:c.instructions+=462;goto B7163df;
case 0x7163e3:c.instructions+=461;goto B7163e3;
case 0x7163e7:c.instructions+=460;goto B7163e7;
case 0x7163ea:c.instructions+=459;goto B7163ea;
case 0x7163ed:c.instructions+=458;goto B7163ed;
case 0x7163ef:c.instructions+=457;goto B7163ef;
case 0x7163f1:c.instructions+=456;goto B7163f1;
case 0x7163f4:c.instructions+=455;goto B7163f4;
case 0x7163f7:c.instructions+=454;goto B7163f7;
case 0x7163fb:c.instructions+=453;goto B7163fb;
case 0x7163fe:c.instructions+=452;goto B7163fe;
case 0x716401:c.instructions+=451;goto B716401;
case 0x716404:c.instructions+=450;goto B716404;
case 0x716407:c.instructions+=449;goto B716407;
case 0x71640a:c.instructions+=448;goto B71640a;
case 0x71640e:c.instructions+=447;goto B71640e;
case 0x716411:c.instructions+=446;goto B716411;
case 0x716415:c.instructions+=445;goto B716415;
case 0x716418:c.instructions+=444;goto B716418;
case 0x71641b:c.instructions+=443;goto B71641b;
case 0x71641e:c.instructions+=442;goto B71641e;
case 0x716422:c.instructions+=441;goto B716422;
case 0x716425:c.instructions+=440;goto B716425;
case 0x716428:c.instructions+=439;goto B716428;
case 0x71642b:c.instructions+=438;goto B71642b;
case 0x71642f:c.instructions+=437;goto B71642f;
case 0x716432:c.instructions+=436;goto B716432;
case 0x716435:c.instructions+=435;goto B716435;
case 0x716438:c.instructions+=434;goto B716438;
case 0x71643c:c.instructions+=433;goto B71643c;
case 0x71643f:c.instructions+=432;goto B71643f;
case 0x716442:c.instructions+=431;goto B716442;
case 0x716445:c.instructions+=430;goto B716445;
case 0x716448:c.instructions+=429;goto B716448;
case 0x71644b:c.instructions+=428;goto B71644b;
case 0x71644e:c.instructions+=427;goto B71644e;
case 0x716451:c.instructions+=426;goto B716451;
case 0x716455:c.instructions+=425;goto B716455;
case 0x716458:c.instructions+=424;goto B716458;
case 0x71645b:c.instructions+=423;goto B71645b;
case 0x71645e:c.instructions+=422;goto B71645e;
case 0x716462:c.instructions+=421;goto B716462;
case 0x716465:c.instructions+=420;goto B716465;
case 0x716468:c.instructions+=419;goto B716468;
case 0x71646b:c.instructions+=418;goto B71646b;
case 0x716472:c.instructions+=417;goto B716472;
case 0x716475:c.instructions+=416;goto B716475;
case 0x716478:c.instructions+=415;goto B716478;
case 0x71647b:c.instructions+=414;goto B71647b;
case 0x716482:c.instructions+=413;goto B716482;
case 0x716485:c.instructions+=412;goto B716485;
case 0x716488:c.instructions+=411;goto B716488;
case 0x71648b:c.instructions+=410;goto B71648b;
case 0x71648e:c.instructions+=409;goto B71648e;
case 0x716491:c.instructions+=408;goto B716491;
case 0x716494:c.instructions+=407;goto B716494;
case 0x716497:c.instructions+=406;goto B716497;
case 0x71649e:c.instructions+=405;goto B71649e;
case 0x7164a1:c.instructions+=404;goto B7164a1;
case 0x7164a4:c.instructions+=403;goto B7164a4;
case 0x7164a7:c.instructions+=402;goto B7164a7;
case 0x7164ae:c.instructions+=401;goto B7164ae;
case 0x7164b1:c.instructions+=400;goto B7164b1;
case 0x7164b4:c.instructions+=399;goto B7164b4;
case 0x7164b7:c.instructions+=398;goto B7164b7;
case 0x7164be:c.instructions+=397;goto B7164be;
case 0x7164c1:c.instructions+=396;goto B7164c1;
case 0x7164c4:c.instructions+=395;goto B7164c4;
case 0x7164c7:c.instructions+=394;goto B7164c7;
case 0x7164cb:c.instructions+=393;goto B7164cb;
case 0x7164ce:c.instructions+=392;goto B7164ce;
case 0x7164d1:c.instructions+=391;goto B7164d1;
case 0x7164d4:c.instructions+=390;goto B7164d4;
case 0x7164d7:c.instructions+=389;goto B7164d7;
case 0x7164da:c.instructions+=388;goto B7164da;
case 0x7164de:c.instructions+=387;goto B7164de;
case 0x7164e2:c.instructions+=386;goto B7164e2;
case 0x7164e5:c.instructions+=385;goto B7164e5;
case 0x7164e8:c.instructions+=384;goto B7164e8;
case 0x7164ea:c.instructions+=383;goto B7164ea;
case 0x7164ec:c.instructions+=382;goto B7164ec;
case 0x7164ef:c.instructions+=381;goto B7164ef;
case 0x7164f2:c.instructions+=380;goto B7164f2;
case 0x7164f6:c.instructions+=379;goto B7164f6;
case 0x7164f9:c.instructions+=378;goto B7164f9;
case 0x7164fc:c.instructions+=377;goto B7164fc;
case 0x7164ff:c.instructions+=376;goto B7164ff;
case 0x716502:c.instructions+=375;goto B716502;
case 0x716505:c.instructions+=374;goto B716505;
case 0x716509:c.instructions+=373;goto B716509;
case 0x71650c:c.instructions+=372;goto B71650c;
case 0x716510:c.instructions+=371;goto B716510;
case 0x716513:c.instructions+=370;goto B716513;
case 0x716516:c.instructions+=369;goto B716516;
case 0x716519:c.instructions+=368;goto B716519;
case 0x71651d:c.instructions+=367;goto B71651d;
case 0x716520:c.instructions+=366;goto B716520;
case 0x716523:c.instructions+=365;goto B716523;
case 0x716526:c.instructions+=364;goto B716526;
case 0x71652a:c.instructions+=363;goto B71652a;
case 0x71652d:c.instructions+=362;goto B71652d;
case 0x716530:c.instructions+=361;goto B716530;
case 0x716533:c.instructions+=360;goto B716533;
case 0x716537:c.instructions+=359;goto B716537;
case 0x71653a:c.instructions+=358;goto B71653a;
case 0x71653d:c.instructions+=357;goto B71653d;
case 0x716540:c.instructions+=356;goto B716540;
case 0x716543:c.instructions+=355;goto B716543;
case 0x716546:c.instructions+=354;goto B716546;
case 0x716549:c.instructions+=353;goto B716549;
case 0x71654c:c.instructions+=352;goto B71654c;
case 0x716550:c.instructions+=351;goto B716550;
case 0x716553:c.instructions+=350;goto B716553;
case 0x716556:c.instructions+=349;goto B716556;
case 0x716559:c.instructions+=348;goto B716559;
case 0x71655d:c.instructions+=347;goto B71655d;
case 0x716560:c.instructions+=346;goto B716560;
case 0x716563:c.instructions+=345;goto B716563;
case 0x716566:c.instructions+=344;goto B716566;
case 0x71656d:c.instructions+=343;goto B71656d;
case 0x716570:c.instructions+=342;goto B716570;
case 0x716573:c.instructions+=341;goto B716573;
case 0x716576:c.instructions+=340;goto B716576;
case 0x71657d:c.instructions+=339;goto B71657d;
case 0x716580:c.instructions+=338;goto B716580;
case 0x716583:c.instructions+=337;goto B716583;
case 0x716586:c.instructions+=336;goto B716586;
case 0x716589:c.instructions+=335;goto B716589;
case 0x71658c:c.instructions+=334;goto B71658c;
case 0x71658f:c.instructions+=333;goto B71658f;
case 0x716592:c.instructions+=332;goto B716592;
case 0x716599:c.instructions+=331;goto B716599;
case 0x71659c:c.instructions+=330;goto B71659c;
case 0x71659f:c.instructions+=329;goto B71659f;
case 0x7165a2:c.instructions+=328;goto B7165a2;
case 0x7165a9:c.instructions+=327;goto B7165a9;
case 0x7165ac:c.instructions+=326;goto B7165ac;
case 0x7165af:c.instructions+=325;goto B7165af;
case 0x7165b2:c.instructions+=324;goto B7165b2;
case 0x7165b9:c.instructions+=323;goto B7165b9;
case 0x7165bc:c.instructions+=322;goto B7165bc;
case 0x7165bf:c.instructions+=321;goto B7165bf;
case 0x7165c2:c.instructions+=320;goto B7165c2;
case 0x7165c6:c.instructions+=319;goto B7165c6;
case 0x7165c9:c.instructions+=318;goto B7165c9;
case 0x7165cc:c.instructions+=317;goto B7165cc;
case 0x7165cf:c.instructions+=316;goto B7165cf;
case 0x7165d2:c.instructions+=315;goto B7165d2;
case 0x7165d5:c.instructions+=314;goto B7165d5;
case 0x7165d9:c.instructions+=313;goto B7165d9;
case 0x7165dd:c.instructions+=312;goto B7165dd;
case 0x7165e0:c.instructions+=311;goto B7165e0;
case 0x7165e3:c.instructions+=310;goto B7165e3;
case 0x7165e5:c.instructions+=309;goto B7165e5;
case 0x7165e7:c.instructions+=308;goto B7165e7;
case 0x7165ea:c.instructions+=307;goto B7165ea;
case 0x7165ed:c.instructions+=306;goto B7165ed;
case 0x7165f1:c.instructions+=305;goto B7165f1;
case 0x7165f4:c.instructions+=304;goto B7165f4;
case 0x7165f7:c.instructions+=303;goto B7165f7;
case 0x7165fa:c.instructions+=302;goto B7165fa;
case 0x7165fd:c.instructions+=301;goto B7165fd;
case 0x716600:c.instructions+=300;goto B716600;
case 0x716604:c.instructions+=299;goto B716604;
case 0x716607:c.instructions+=298;goto B716607;
case 0x71660b:c.instructions+=297;goto B71660b;
case 0x71660e:c.instructions+=296;goto B71660e;
case 0x716611:c.instructions+=295;goto B716611;
case 0x716614:c.instructions+=294;goto B716614;
case 0x716618:c.instructions+=293;goto B716618;
case 0x71661b:c.instructions+=292;goto B71661b;
case 0x71661e:c.instructions+=291;goto B71661e;
case 0x716621:c.instructions+=290;goto B716621;
case 0x716625:c.instructions+=289;goto B716625;
case 0x716628:c.instructions+=288;goto B716628;
case 0x71662b:c.instructions+=287;goto B71662b;
case 0x71662e:c.instructions+=286;goto B71662e;
case 0x716632:c.instructions+=285;goto B716632;
case 0x716635:c.instructions+=284;goto B716635;
case 0x716638:c.instructions+=283;goto B716638;
case 0x71663b:c.instructions+=282;goto B71663b;
case 0x71663e:c.instructions+=281;goto B71663e;
case 0x716641:c.instructions+=280;goto B716641;
case 0x716644:c.instructions+=279;goto B716644;
case 0x716647:c.instructions+=278;goto B716647;
case 0x71664b:c.instructions+=277;goto B71664b;
case 0x71664e:c.instructions+=276;goto B71664e;
case 0x716651:c.instructions+=275;goto B716651;
case 0x716654:c.instructions+=274;goto B716654;
case 0x716658:c.instructions+=273;goto B716658;
case 0x71665b:c.instructions+=272;goto B71665b;
case 0x71665e:c.instructions+=271;goto B71665e;
case 0x716661:c.instructions+=270;goto B716661;
case 0x716668:c.instructions+=269;goto B716668;
case 0x71666b:c.instructions+=268;goto B71666b;
case 0x71666e:c.instructions+=267;goto B71666e;
case 0x716671:c.instructions+=266;goto B716671;
case 0x716678:c.instructions+=265;goto B716678;
case 0x71667b:c.instructions+=264;goto B71667b;
case 0x71667e:c.instructions+=263;goto B71667e;
case 0x716681:c.instructions+=262;goto B716681;
case 0x716684:c.instructions+=261;goto B716684;
case 0x716687:c.instructions+=260;goto B716687;
case 0x71668a:c.instructions+=259;goto B71668a;
case 0x71668d:c.instructions+=258;goto B71668d;
case 0x716694:c.instructions+=257;goto B716694;
case 0x716697:c.instructions+=256;goto B716697;
case 0x71669a:c.instructions+=255;goto B71669a;
case 0x71669d:c.instructions+=254;goto B71669d;
case 0x7166a4:c.instructions+=253;goto B7166a4;
case 0x7166a7:c.instructions+=252;goto B7166a7;
case 0x7166aa:c.instructions+=251;goto B7166aa;
case 0x7166ad:c.instructions+=250;goto B7166ad;
case 0x7166b4:c.instructions+=249;goto B7166b4;
case 0x7166b7:c.instructions+=248;goto B7166b7;
case 0x7166ba:c.instructions+=247;goto B7166ba;
case 0x7166bd:c.instructions+=246;goto B7166bd;
case 0x7166c1:c.instructions+=245;goto B7166c1;
case 0x7166c4:c.instructions+=244;goto B7166c4;
case 0x7166c7:c.instructions+=243;goto B7166c7;
case 0x7166ca:c.instructions+=242;goto B7166ca;
case 0x7166cd:c.instructions+=241;goto B7166cd;
case 0x7166d0:c.instructions+=240;goto B7166d0;
case 0x7166d4:c.instructions+=239;goto B7166d4;
case 0x7166d8:c.instructions+=238;goto B7166d8;
case 0x7166db:c.instructions+=237;goto B7166db;
case 0x7166de:c.instructions+=236;goto B7166de;
case 0x7166e0:c.instructions+=235;goto B7166e0;
case 0x7166e2:c.instructions+=234;goto B7166e2;
case 0x7166e5:c.instructions+=233;goto B7166e5;
case 0x7166e8:c.instructions+=232;goto B7166e8;
case 0x7166ec:c.instructions+=231;goto B7166ec;
case 0x7166ef:c.instructions+=230;goto B7166ef;
case 0x7166f2:c.instructions+=229;goto B7166f2;
case 0x7166f5:c.instructions+=228;goto B7166f5;
case 0x7166f8:c.instructions+=227;goto B7166f8;
case 0x7166fb:c.instructions+=226;goto B7166fb;
case 0x7166ff:c.instructions+=225;goto B7166ff;
case 0x716702:c.instructions+=224;goto B716702;
case 0x716706:c.instructions+=223;goto B716706;
case 0x716709:c.instructions+=222;goto B716709;
case 0x71670c:c.instructions+=221;goto B71670c;
case 0x71670f:c.instructions+=220;goto B71670f;
case 0x716713:c.instructions+=219;goto B716713;
case 0x716716:c.instructions+=218;goto B716716;
case 0x716719:c.instructions+=217;goto B716719;
case 0x71671c:c.instructions+=216;goto B71671c;
case 0x716720:c.instructions+=215;goto B716720;
case 0x716723:c.instructions+=214;goto B716723;
case 0x716726:c.instructions+=213;goto B716726;
case 0x716729:c.instructions+=212;goto B716729;
case 0x71672d:c.instructions+=211;goto B71672d;
case 0x716730:c.instructions+=210;goto B716730;
case 0x716733:c.instructions+=209;goto B716733;
case 0x716736:c.instructions+=208;goto B716736;
case 0x716739:c.instructions+=207;goto B716739;
case 0x71673c:c.instructions+=206;goto B71673c;
case 0x71673f:c.instructions+=205;goto B71673f;
case 0x716742:c.instructions+=204;goto B716742;
case 0x716746:c.instructions+=203;goto B716746;
case 0x716749:c.instructions+=202;goto B716749;
case 0x71674c:c.instructions+=201;goto B71674c;
case 0x71674f:c.instructions+=200;goto B71674f;
case 0x716753:c.instructions+=199;goto B716753;
case 0x716756:c.instructions+=198;goto B716756;
case 0x716759:c.instructions+=197;goto B716759;
case 0x71675c:c.instructions+=196;goto B71675c;
case 0x716763:c.instructions+=195;goto B716763;
case 0x716766:c.instructions+=194;goto B716766;
case 0x716769:c.instructions+=193;goto B716769;
case 0x71676c:c.instructions+=192;goto B71676c;
case 0x716773:c.instructions+=191;goto B716773;
case 0x716776:c.instructions+=190;goto B716776;
case 0x716779:c.instructions+=189;goto B716779;
case 0x71677c:c.instructions+=188;goto B71677c;
case 0x71677f:c.instructions+=187;goto B71677f;
case 0x716782:c.instructions+=186;goto B716782;
case 0x716785:c.instructions+=185;goto B716785;
case 0x716788:c.instructions+=184;goto B716788;
case 0x71678f:c.instructions+=183;goto B71678f;
case 0x716792:c.instructions+=182;goto B716792;
case 0x716795:c.instructions+=181;goto B716795;
case 0x716798:c.instructions+=180;goto B716798;
case 0x71679f:c.instructions+=179;goto B71679f;
case 0x7167a2:c.instructions+=178;goto B7167a2;
case 0x7167a5:c.instructions+=177;goto B7167a5;
case 0x7167a8:c.instructions+=176;goto B7167a8;
case 0x7167af:c.instructions+=175;goto B7167af;
case 0x7167b2:c.instructions+=174;goto B7167b2;
case 0x7167b5:c.instructions+=173;goto B7167b5;
case 0x7167b8:c.instructions+=172;goto B7167b8;
case 0x7167bc:c.instructions+=171;goto B7167bc;
case 0x7167bf:c.instructions+=170;goto B7167bf;
case 0x7167c2:c.instructions+=169;goto B7167c2;
case 0x7167c5:c.instructions+=168;goto B7167c5;
case 0x7167c8:c.instructions+=167;goto B7167c8;
case 0x7167cb:c.instructions+=166;goto B7167cb;
case 0x7167cf:c.instructions+=165;goto B7167cf;
case 0x7167d3:c.instructions+=164;goto B7167d3;
case 0x7167d6:c.instructions+=163;goto B7167d6;
case 0x7167d9:c.instructions+=162;goto B7167d9;
case 0x7167db:c.instructions+=161;goto B7167db;
case 0x7167dd:c.instructions+=160;goto B7167dd;
case 0x7167e0:c.instructions+=159;goto B7167e0;
case 0x7167e3:c.instructions+=158;goto B7167e3;
case 0x7167e7:c.instructions+=157;goto B7167e7;
case 0x7167ea:c.instructions+=156;goto B7167ea;
case 0x7167ed:c.instructions+=155;goto B7167ed;
case 0x7167f0:c.instructions+=154;goto B7167f0;
case 0x7167f3:c.instructions+=153;goto B7167f3;
case 0x7167f6:c.instructions+=152;goto B7167f6;
case 0x7167fa:c.instructions+=151;goto B7167fa;
case 0x7167fd:c.instructions+=150;goto B7167fd;
case 0x716801:c.instructions+=149;goto B716801;
case 0x716804:c.instructions+=148;goto B716804;
case 0x716807:c.instructions+=147;goto B716807;
case 0x71680a:c.instructions+=146;goto B71680a;
case 0x71680e:c.instructions+=145;goto B71680e;
case 0x716811:c.instructions+=144;goto B716811;
case 0x716814:c.instructions+=143;goto B716814;
case 0x716817:c.instructions+=142;goto B716817;
case 0x71681b:c.instructions+=141;goto B71681b;
case 0x71681e:c.instructions+=140;goto B71681e;
case 0x716821:c.instructions+=139;goto B716821;
case 0x716824:c.instructions+=138;goto B716824;
case 0x716828:c.instructions+=137;goto B716828;
case 0x71682b:c.instructions+=136;goto B71682b;
case 0x71682e:c.instructions+=135;goto B71682e;
case 0x716831:c.instructions+=134;goto B716831;
case 0x716834:c.instructions+=133;goto B716834;
case 0x716837:c.instructions+=132;goto B716837;
case 0x71683a:c.instructions+=131;goto B71683a;
case 0x71683d:c.instructions+=130;goto B71683d;
case 0x716841:c.instructions+=129;goto B716841;
case 0x716844:c.instructions+=128;goto B716844;
case 0x716847:c.instructions+=127;goto B716847;
case 0x71684a:c.instructions+=126;goto B71684a;
case 0x71684e:c.instructions+=125;goto B71684e;
case 0x716851:c.instructions+=124;goto B716851;
case 0x716854:c.instructions+=123;goto B716854;
case 0x716857:c.instructions+=122;goto B716857;
case 0x71685e:c.instructions+=121;goto B71685e;
case 0x716861:c.instructions+=120;goto B716861;
case 0x716864:c.instructions+=119;goto B716864;
case 0x716867:c.instructions+=118;goto B716867;
case 0x71686e:c.instructions+=117;goto B71686e;
case 0x716871:c.instructions+=116;goto B716871;
case 0x716874:c.instructions+=115;goto B716874;
case 0x716877:c.instructions+=114;goto B716877;
case 0x71687a:c.instructions+=113;goto B71687a;
case 0x71687d:c.instructions+=112;goto B71687d;
case 0x716880:c.instructions+=111;goto B716880;
case 0x716883:c.instructions+=110;goto B716883;
case 0x71688a:c.instructions+=109;goto B71688a;
case 0x71688d:c.instructions+=108;goto B71688d;
case 0x716890:c.instructions+=107;goto B716890;
case 0x716893:c.instructions+=106;goto B716893;
case 0x71689a:c.instructions+=105;goto B71689a;
case 0x71689d:c.instructions+=104;goto B71689d;
case 0x7168a0:c.instructions+=103;goto B7168a0;
case 0x7168a3:c.instructions+=102;goto B7168a3;
case 0x7168aa:c.instructions+=101;goto B7168aa;
case 0x7168ad:c.instructions+=100;goto B7168ad;
case 0x7168b0:c.instructions+=99;goto B7168b0;
case 0x7168b3:c.instructions+=98;goto B7168b3;
case 0x7168b7:c.instructions+=97;goto B7168b7;
case 0x7168ba:c.instructions+=96;goto B7168ba;
case 0x7168bd:c.instructions+=95;goto B7168bd;
case 0x7168c0:c.instructions+=94;goto B7168c0;
case 0x7168c3:c.instructions+=93;goto B7168c3;
case 0x7168c6:c.instructions+=92;goto B7168c6;
case 0x7168ca:c.instructions+=91;goto B7168ca;
case 0x7168ce:c.instructions+=90;goto B7168ce;
case 0x7168d1:c.instructions+=89;goto B7168d1;
case 0x7168d4:c.instructions+=88;goto B7168d4;
case 0x7168d6:c.instructions+=87;goto B7168d6;
case 0x7168d8:c.instructions+=86;goto B7168d8;
case 0x7168db:c.instructions+=85;goto B7168db;
case 0x7168de:c.instructions+=84;goto B7168de;
case 0x7168e2:c.instructions+=83;goto B7168e2;
case 0x7168e5:c.instructions+=82;goto B7168e5;
case 0x7168e8:c.instructions+=81;goto B7168e8;
case 0x7168eb:c.instructions+=80;goto B7168eb;
case 0x7168ee:c.instructions+=79;goto B7168ee;
case 0x7168f1:c.instructions+=78;goto B7168f1;
case 0x7168f5:c.instructions+=77;goto B7168f5;
case 0x7168f8:c.instructions+=76;goto B7168f8;
case 0x7168fc:c.instructions+=75;goto B7168fc;
case 0x7168ff:c.instructions+=74;goto B7168ff;
case 0x716902:c.instructions+=73;goto B716902;
case 0x716905:c.instructions+=72;goto B716905;
case 0x716909:c.instructions+=71;goto B716909;
case 0x71690c:c.instructions+=70;goto B71690c;
case 0x71690f:c.instructions+=69;goto B71690f;
case 0x716912:c.instructions+=68;goto B716912;
case 0x716916:c.instructions+=67;goto B716916;
case 0x716919:c.instructions+=66;goto B716919;
case 0x71691c:c.instructions+=65;goto B71691c;
case 0x71691f:c.instructions+=64;goto B71691f;
case 0x716923:c.instructions+=63;goto B716923;
case 0x716926:c.instructions+=62;goto B716926;
case 0x716929:c.instructions+=61;goto B716929;
case 0x71692c:c.instructions+=60;goto B71692c;
case 0x71692f:c.instructions+=59;goto B71692f;
case 0x716932:c.instructions+=58;goto B716932;
case 0x716935:c.instructions+=57;goto B716935;
case 0x716938:c.instructions+=56;goto B716938;
case 0x71693c:c.instructions+=55;goto B71693c;
case 0x71693f:c.instructions+=54;goto B71693f;
case 0x716942:c.instructions+=53;goto B716942;
case 0x716945:c.instructions+=52;goto B716945;
case 0x716949:c.instructions+=51;goto B716949;
case 0x71694c:c.instructions+=50;goto B71694c;
case 0x71694f:c.instructions+=49;goto B71694f;
case 0x716952:c.instructions+=48;goto B716952;
case 0x716959:c.instructions+=47;goto B716959;
case 0x71695c:c.instructions+=46;goto B71695c;
case 0x71695f:c.instructions+=45;goto B71695f;
case 0x716962:c.instructions+=44;goto B716962;
case 0x716969:c.instructions+=43;goto B716969;
case 0x71696c:c.instructions+=42;goto B71696c;
case 0x71696f:c.instructions+=41;goto B71696f;
case 0x716972:c.instructions+=40;goto B716972;
case 0x716975:c.instructions+=39;goto B716975;
case 0x716978:c.instructions+=38;goto B716978;
case 0x71697b:c.instructions+=37;goto B71697b;
case 0x71697e:c.instructions+=36;goto B71697e;
case 0x716985:c.instructions+=35;goto B716985;
case 0x716988:c.instructions+=34;goto B716988;
case 0x71698b:c.instructions+=33;goto B71698b;
case 0x71698e:c.instructions+=32;goto B71698e;
case 0x716995:c.instructions+=31;goto B716995;
case 0x716998:c.instructions+=30;goto B716998;
case 0x71699b:c.instructions+=29;goto B71699b;
case 0x71699e:c.instructions+=28;goto B71699e;
case 0x7169a5:c.instructions+=27;goto B7169a5;
case 0x7169a8:c.instructions+=26;goto B7169a8;
case 0x7169ab:c.instructions+=25;goto B7169ab;
case 0x7169ae:c.instructions+=24;goto B7169ae;
case 0x7169b2:c.instructions+=23;goto B7169b2;
case 0x7169b5:c.instructions+=22;goto B7169b5;
case 0x7169b8:c.instructions+=21;goto B7169b8;
case 0x7169bb:c.instructions+=20;goto B7169bb;
case 0x7169be:c.instructions+=19;goto B7169be;
case 0x7169c1:c.instructions+=18;goto B7169c1;
case 0x7169c5:c.instructions+=17;goto B7169c5;
case 0x7169c9:c.instructions+=16;goto B7169c9;
case 0x7169cc:c.instructions+=15;goto B7169cc;
case 0x7169cf:c.instructions+=14;goto B7169cf;
case 0x7169d0:c.instructions+=13;goto B7169d0;
case 0x7169d1:c.instructions+=12;goto B7169d1;
case 0x7169d2:c.instructions+=11;goto B7169d2;
case 0x7169d3:c.instructions+=10;goto B7169d3;
case 0x7169d4:c.instructions+=9;goto B7169d4;
case 0x7169d5:c.instructions+=8;goto B7169d5;
case 0x7169d6:c.instructions+=7;goto B7169d6;
case 0x7169d7:c.instructions+=6;goto B7169d7;
case 0x7169d8:c.instructions+=5;goto B7169d8;
case 0x7169da:c.instructions+=4;goto B7169da;
case 0x7169db:c.instructions+=3;goto B7169db;
case 0x7169dd:c.instructions+=2;goto B7169dd;
case 0x7169de:c.instructions+=1;goto B7169de;
case 0x7169df:goto L7169df;
case 0x7169e0:c.instructions+=62;goto B7169e0;
case 0x7169e2:c.instructions+=61;goto B7169e2;
case 0x7169e3:c.instructions+=60;goto B7169e3;
case 0x7169e4:c.instructions+=59;goto B7169e4;
case 0x7169e7:c.instructions+=58;goto B7169e7;
case 0x7169ea:c.instructions+=57;goto B7169ea;
case 0x7169eb:c.instructions+=56;goto B7169eb;
case 0x7169ee:c.instructions+=55;goto B7169ee;
case 0x7169f2:c.instructions+=54;goto B7169f2;
case 0x7169f4:c.instructions+=53;goto B7169f4;
case 0x7169fa:c.instructions+=52;goto B7169fa;
case 0x7169fb:c.instructions+=51;goto B7169fb;
case 0x7169fc:c.instructions+=50;goto B7169fc;
case 0x7169fd:c.instructions+=49;goto B7169fd;
case 0x716a00:c.instructions+=48;goto B716a00;
case 0x716a03:c.instructions+=47;goto B716a03;
case 0x716a06:c.instructions+=46;goto B716a06;
case 0x716a09:c.instructions+=45;goto B716a09;
case 0x716a0c:c.instructions+=44;goto B716a0c;
case 0x716a0f:c.instructions+=43;goto B716a0f;
case 0x716a12:c.instructions+=42;goto B716a12;
case 0x716a18:c.instructions+=41;goto B716a18;
case 0x716a1b:c.instructions+=40;goto B716a1b;
case 0x716a21:c.instructions+=39;goto B716a21;
case 0x716a24:c.instructions+=38;goto B716a24;
case 0x716a27:c.instructions+=37;goto B716a27;
case 0x716a2a:c.instructions+=36;goto B716a2a;
case 0x716a2d:c.instructions+=35;goto B716a2d;
case 0x716a33:c.instructions+=34;goto B716a33;
case 0x716a36:c.instructions+=33;goto B716a36;
case 0x716a39:c.instructions+=32;goto B716a39;
case 0x716a3a:c.instructions+=31;goto B716a3a;
case 0x716a3b:c.instructions+=30;goto B716a3b;
case 0x716a3e:c.instructions+=29;goto B716a3e;
case 0x716a41:c.instructions+=28;goto B716a41;
case 0x716a42:c.instructions+=27;goto B716a42;
case 0x716a43:c.instructions+=26;goto B716a43;
case 0x716a46:c.instructions+=25;goto B716a46;
case 0x716a48:c.instructions+=24;goto B716a48;
case 0x716a49:c.instructions+=23;goto B716a49;
case 0x716a4a:c.instructions+=22;goto B716a4a;
case 0x716a4d:c.instructions+=21;goto B716a4d;
case 0x716a50:c.instructions+=20;goto B716a50;
case 0x716a53:c.instructions+=19;goto B716a53;
case 0x716a56:c.instructions+=18;goto B716a56;
case 0x716a59:c.instructions+=17;goto B716a59;
case 0x716a5b:c.instructions+=16;goto B716a5b;
case 0x716a5e:c.instructions+=15;goto B716a5e;
case 0x716a61:c.instructions+=14;goto B716a61;
case 0x716a64:c.instructions+=13;goto B716a64;
case 0x716a67:c.instructions+=12;goto B716a67;
case 0x716a6a:c.instructions+=11;goto B716a6a;
case 0x716a6d:c.instructions+=10;goto B716a6d;
case 0x716a70:c.instructions+=9;goto B716a70;
case 0x716a73:c.instructions+=8;goto B716a73;
case 0x716a76:c.instructions+=7;goto B716a76;
case 0x716a79:c.instructions+=6;goto B716a79;
case 0x716a7c:c.instructions+=5;goto B716a7c;
case 0x716a83:c.instructions+=4;goto B716a83;
case 0x716a8a:c.instructions+=3;goto B716a8a;
case 0x716a91:c.instructions+=2;goto B716a91;
case 0x716a98:c.instructions+=1;goto B716a98;
case 0x716a9b:goto L716a9b;
case 0x716a9e:c.instructions+=85;goto B716a9e;
case 0x716aa2:c.instructions+=84;goto B716aa2;
case 0x716aa5:c.instructions+=83;goto B716aa5;
case 0x716aa8:c.instructions+=82;goto B716aa8;
case 0x716aab:c.instructions+=81;goto B716aab;
case 0x716aae:c.instructions+=80;goto B716aae;
case 0x716ab1:c.instructions+=79;goto B716ab1;
case 0x716ab4:c.instructions+=78;goto B716ab4;
case 0x716ab7:c.instructions+=77;goto B716ab7;
case 0x716aba:c.instructions+=76;goto B716aba;
case 0x716ac1:c.instructions+=75;goto B716ac1;
case 0x716ac8:c.instructions+=74;goto B716ac8;
case 0x716acb:c.instructions+=73;goto B716acb;
case 0x716ace:c.instructions+=72;goto B716ace;
case 0x716ad1:c.instructions+=71;goto B716ad1;
case 0x716ad4:c.instructions+=70;goto B716ad4;
case 0x716ad7:c.instructions+=69;goto B716ad7;
case 0x716ada:c.instructions+=68;goto B716ada;
case 0x716add:c.instructions+=67;goto B716add;
case 0x716ae0:c.instructions+=66;goto B716ae0;
case 0x716ae3:c.instructions+=65;goto B716ae3;
case 0x716ae6:c.instructions+=64;goto B716ae6;
case 0x716aea:c.instructions+=63;goto B716aea;
case 0x716aed:c.instructions+=62;goto B716aed;
case 0x716af0:c.instructions+=61;goto B716af0;
case 0x716af4:c.instructions+=60;goto B716af4;
case 0x716af8:c.instructions+=59;goto B716af8;
case 0x716afb:c.instructions+=58;goto B716afb;
case 0x716aff:c.instructions+=57;goto B716aff;
case 0x716b02:c.instructions+=56;goto B716b02;
case 0x716b05:c.instructions+=55;goto B716b05;
case 0x716b08:c.instructions+=54;goto B716b08;
case 0x716b0b:c.instructions+=53;goto B716b0b;
case 0x716b0e:c.instructions+=52;goto B716b0e;
case 0x716b11:c.instructions+=51;goto B716b11;
case 0x716b14:c.instructions+=50;goto B716b14;
case 0x716b17:c.instructions+=49;goto B716b17;
case 0x716b1e:c.instructions+=48;goto B716b1e;
case 0x716b25:c.instructions+=47;goto B716b25;
case 0x716b28:c.instructions+=46;goto B716b28;
case 0x716b2b:c.instructions+=45;goto B716b2b;
case 0x716b2e:c.instructions+=44;goto B716b2e;
case 0x716b31:c.instructions+=43;goto B716b31;
case 0x716b34:c.instructions+=42;goto B716b34;
case 0x716b37:c.instructions+=41;goto B716b37;
case 0x716b3a:c.instructions+=40;goto B716b3a;
case 0x716b3d:c.instructions+=39;goto B716b3d;
case 0x716b40:c.instructions+=38;goto B716b40;
case 0x716b43:c.instructions+=37;goto B716b43;
case 0x716b47:c.instructions+=36;goto B716b47;
case 0x716b4a:c.instructions+=35;goto B716b4a;
case 0x716b4d:c.instructions+=34;goto B716b4d;
case 0x716b51:c.instructions+=33;goto B716b51;
case 0x716b55:c.instructions+=32;goto B716b55;
case 0x716b58:c.instructions+=31;goto B716b58;
case 0x716b5c:c.instructions+=30;goto B716b5c;
case 0x716b5f:c.instructions+=29;goto B716b5f;
case 0x716b62:c.instructions+=28;goto B716b62;
case 0x716b65:c.instructions+=27;goto B716b65;
case 0x716b68:c.instructions+=26;goto B716b68;
case 0x716b6b:c.instructions+=25;goto B716b6b;
case 0x716b6e:c.instructions+=24;goto B716b6e;
case 0x716b71:c.instructions+=23;goto B716b71;
case 0x716b74:c.instructions+=22;goto B716b74;
case 0x716b7b:c.instructions+=21;goto B716b7b;
case 0x716b82:c.instructions+=20;goto B716b82;
case 0x716b85:c.instructions+=19;goto B716b85;
case 0x716b88:c.instructions+=18;goto B716b88;
case 0x716b8b:c.instructions+=17;goto B716b8b;
case 0x716b8e:c.instructions+=16;goto B716b8e;
case 0x716b91:c.instructions+=15;goto B716b91;
case 0x716b94:c.instructions+=14;goto B716b94;
case 0x716b97:c.instructions+=13;goto B716b97;
case 0x716b9a:c.instructions+=12;goto B716b9a;
case 0x716b9d:c.instructions+=11;goto B716b9d;
case 0x716ba0:c.instructions+=10;goto B716ba0;
case 0x716ba4:c.instructions+=9;goto B716ba4;
case 0x716bab:c.instructions+=8;goto B716bab;
case 0x716bae:c.instructions+=7;goto B716bae;
case 0x716bb2:c.instructions+=6;goto B716bb2;
case 0x716bb9:c.instructions+=5;goto B716bb9;
case 0x716bbb:c.instructions+=4;goto B716bbb;
case 0x716bbe:c.instructions+=3;goto B716bbe;
case 0x716bc1:c.instructions+=2;goto B716bc1;
case 0x716bc3:c.instructions+=1;goto B716bc3;
case 0x716bc9:goto L716bc9;
case 0x716bcc:c.instructions+=316;goto B716bcc;
case 0x716bd0:c.instructions+=315;goto B716bd0;
case 0x716bd3:c.instructions+=314;goto B716bd3;
case 0x716bd6:c.instructions+=313;goto B716bd6;
case 0x716bd9:c.instructions+=312;goto B716bd9;
case 0x716bdc:c.instructions+=311;goto B716bdc;
case 0x716bdf:c.instructions+=310;goto B716bdf;
case 0x716be2:c.instructions+=309;goto B716be2;
case 0x716be5:c.instructions+=308;goto B716be5;
case 0x716be8:c.instructions+=307;goto B716be8;
case 0x716bef:c.instructions+=306;goto B716bef;
case 0x716bf6:c.instructions+=305;goto B716bf6;
case 0x716bf9:c.instructions+=304;goto B716bf9;
case 0x716bfc:c.instructions+=303;goto B716bfc;
case 0x716bff:c.instructions+=302;goto B716bff;
case 0x716c02:c.instructions+=301;goto B716c02;
case 0x716c05:c.instructions+=300;goto B716c05;
case 0x716c08:c.instructions+=299;goto B716c08;
case 0x716c0b:c.instructions+=298;goto B716c0b;
case 0x716c0e:c.instructions+=297;goto B716c0e;
case 0x716c11:c.instructions+=296;goto B716c11;
case 0x716c14:c.instructions+=295;goto B716c14;
case 0x716c18:c.instructions+=294;goto B716c18;
case 0x716c1b:c.instructions+=293;goto B716c1b;
case 0x716c1e:c.instructions+=292;goto B716c1e;
case 0x716c22:c.instructions+=291;goto B716c22;
case 0x716c26:c.instructions+=290;goto B716c26;
case 0x716c29:c.instructions+=289;goto B716c29;
case 0x716c2c:c.instructions+=288;goto B716c2c;
case 0x716c2f:c.instructions+=287;goto B716c2f;
case 0x716c32:c.instructions+=286;goto B716c32;
case 0x716c36:c.instructions+=285;goto B716c36;
case 0x716c39:c.instructions+=284;goto B716c39;
case 0x716c3c:c.instructions+=283;goto B716c3c;
case 0x716c3f:c.instructions+=282;goto B716c3f;
case 0x716c42:c.instructions+=281;goto B716c42;
case 0x716c45:c.instructions+=280;goto B716c45;
case 0x716c49:c.instructions+=279;goto B716c49;
case 0x716c4c:c.instructions+=278;goto B716c4c;
case 0x716c50:c.instructions+=277;goto B716c50;
case 0x716c53:c.instructions+=276;goto B716c53;
case 0x716c56:c.instructions+=275;goto B716c56;
case 0x716c59:c.instructions+=274;goto B716c59;
case 0x716c5d:c.instructions+=273;goto B716c5d;
case 0x716c60:c.instructions+=272;goto B716c60;
case 0x716c63:c.instructions+=271;goto B716c63;
case 0x716c66:c.instructions+=270;goto B716c66;
case 0x716c6a:c.instructions+=269;goto B716c6a;
case 0x716c6d:c.instructions+=268;goto B716c6d;
case 0x716c70:c.instructions+=267;goto B716c70;
case 0x716c73:c.instructions+=266;goto B716c73;
case 0x716c77:c.instructions+=265;goto B716c77;
case 0x716c7a:c.instructions+=264;goto B716c7a;
case 0x716c7d:c.instructions+=263;goto B716c7d;
case 0x716c80:c.instructions+=262;goto B716c80;
case 0x716c83:c.instructions+=261;goto B716c83;
case 0x716c86:c.instructions+=260;goto B716c86;
case 0x716c89:c.instructions+=259;goto B716c89;
case 0x716c8c:c.instructions+=258;goto B716c8c;
case 0x716c90:c.instructions+=257;goto B716c90;
case 0x716c93:c.instructions+=256;goto B716c93;
case 0x716c96:c.instructions+=255;goto B716c96;
case 0x716c99:c.instructions+=254;goto B716c99;
case 0x716c9d:c.instructions+=253;goto B716c9d;
case 0x716ca0:c.instructions+=252;goto B716ca0;
case 0x716ca3:c.instructions+=251;goto B716ca3;
case 0x716ca6:c.instructions+=250;goto B716ca6;
case 0x716cad:c.instructions+=249;goto B716cad;
case 0x716cb0:c.instructions+=248;goto B716cb0;
case 0x716cb3:c.instructions+=247;goto B716cb3;
case 0x716cb6:c.instructions+=246;goto B716cb6;
case 0x716cbd:c.instructions+=245;goto B716cbd;
case 0x716cc0:c.instructions+=244;goto B716cc0;
case 0x716cc3:c.instructions+=243;goto B716cc3;
case 0x716cc6:c.instructions+=242;goto B716cc6;
case 0x716cc9:c.instructions+=241;goto B716cc9;
case 0x716ccc:c.instructions+=240;goto B716ccc;
case 0x716ccf:c.instructions+=239;goto B716ccf;
case 0x716cd2:c.instructions+=238;goto B716cd2;
case 0x716cd9:c.instructions+=237;goto B716cd9;
case 0x716cdc:c.instructions+=236;goto B716cdc;
case 0x716cdf:c.instructions+=235;goto B716cdf;
case 0x716ce2:c.instructions+=234;goto B716ce2;
case 0x716ce9:c.instructions+=233;goto B716ce9;
case 0x716cec:c.instructions+=232;goto B716cec;
case 0x716cef:c.instructions+=231;goto B716cef;
case 0x716cf2:c.instructions+=230;goto B716cf2;
case 0x716cf9:c.instructions+=229;goto B716cf9;
case 0x716cfc:c.instructions+=228;goto B716cfc;
case 0x716cff:c.instructions+=227;goto B716cff;
case 0x716d02:c.instructions+=226;goto B716d02;
case 0x716d06:c.instructions+=225;goto B716d06;
case 0x716d09:c.instructions+=224;goto B716d09;
case 0x716d0c:c.instructions+=223;goto B716d0c;
case 0x716d0f:c.instructions+=222;goto B716d0f;
case 0x716d12:c.instructions+=221;goto B716d12;
case 0x716d15:c.instructions+=220;goto B716d15;
case 0x716d19:c.instructions+=219;goto B716d19;
case 0x716d1d:c.instructions+=218;goto B716d1d;
case 0x716d20:c.instructions+=217;goto B716d20;
case 0x716d23:c.instructions+=216;goto B716d23;
case 0x716d25:c.instructions+=215;goto B716d25;
case 0x716d27:c.instructions+=214;goto B716d27;
case 0x716d2a:c.instructions+=213;goto B716d2a;
case 0x716d2d:c.instructions+=212;goto B716d2d;
case 0x716d31:c.instructions+=211;goto B716d31;
case 0x716d34:c.instructions+=210;goto B716d34;
case 0x716d37:c.instructions+=209;goto B716d37;
case 0x716d3a:c.instructions+=208;goto B716d3a;
case 0x716d3d:c.instructions+=207;goto B716d3d;
case 0x716d40:c.instructions+=206;goto B716d40;
case 0x716d44:c.instructions+=205;goto B716d44;
case 0x716d47:c.instructions+=204;goto B716d47;
case 0x716d4b:c.instructions+=203;goto B716d4b;
case 0x716d4e:c.instructions+=202;goto B716d4e;
case 0x716d51:c.instructions+=201;goto B716d51;
case 0x716d54:c.instructions+=200;goto B716d54;
case 0x716d58:c.instructions+=199;goto B716d58;
case 0x716d5b:c.instructions+=198;goto B716d5b;
case 0x716d5e:c.instructions+=197;goto B716d5e;
case 0x716d61:c.instructions+=196;goto B716d61;
case 0x716d65:c.instructions+=195;goto B716d65;
case 0x716d68:c.instructions+=194;goto B716d68;
case 0x716d6b:c.instructions+=193;goto B716d6b;
case 0x716d6e:c.instructions+=192;goto B716d6e;
case 0x716d72:c.instructions+=191;goto B716d72;
case 0x716d75:c.instructions+=190;goto B716d75;
case 0x716d78:c.instructions+=189;goto B716d78;
case 0x716d7b:c.instructions+=188;goto B716d7b;
case 0x716d7e:c.instructions+=187;goto B716d7e;
case 0x716d81:c.instructions+=186;goto B716d81;
case 0x716d84:c.instructions+=185;goto B716d84;
case 0x716d87:c.instructions+=184;goto B716d87;
case 0x716d8b:c.instructions+=183;goto B716d8b;
case 0x716d8e:c.instructions+=182;goto B716d8e;
case 0x716d91:c.instructions+=181;goto B716d91;
case 0x716d94:c.instructions+=180;goto B716d94;
case 0x716d98:c.instructions+=179;goto B716d98;
case 0x716d9b:c.instructions+=178;goto B716d9b;
case 0x716d9e:c.instructions+=177;goto B716d9e;
case 0x716da1:c.instructions+=176;goto B716da1;
case 0x716da8:c.instructions+=175;goto B716da8;
case 0x716dab:c.instructions+=174;goto B716dab;
case 0x716dae:c.instructions+=173;goto B716dae;
case 0x716db1:c.instructions+=172;goto B716db1;
case 0x716db8:c.instructions+=171;goto B716db8;
case 0x716dbb:c.instructions+=170;goto B716dbb;
case 0x716dbe:c.instructions+=169;goto B716dbe;
case 0x716dc1:c.instructions+=168;goto B716dc1;
case 0x716dc4:c.instructions+=167;goto B716dc4;
case 0x716dc7:c.instructions+=166;goto B716dc7;
case 0x716dca:c.instructions+=165;goto B716dca;
case 0x716dcd:c.instructions+=164;goto B716dcd;
case 0x716dd4:c.instructions+=163;goto B716dd4;
case 0x716dd7:c.instructions+=162;goto B716dd7;
case 0x716dda:c.instructions+=161;goto B716dda;
case 0x716ddd:c.instructions+=160;goto B716ddd;
case 0x716de4:c.instructions+=159;goto B716de4;
case 0x716de7:c.instructions+=158;goto B716de7;
case 0x716dea:c.instructions+=157;goto B716dea;
case 0x716ded:c.instructions+=156;goto B716ded;
case 0x716df4:c.instructions+=155;goto B716df4;
case 0x716df7:c.instructions+=154;goto B716df7;
case 0x716dfa:c.instructions+=153;goto B716dfa;
case 0x716dfd:c.instructions+=152;goto B716dfd;
case 0x716e01:c.instructions+=151;goto B716e01;
case 0x716e04:c.instructions+=150;goto B716e04;
case 0x716e07:c.instructions+=149;goto B716e07;
case 0x716e0a:c.instructions+=148;goto B716e0a;
case 0x716e0d:c.instructions+=147;goto B716e0d;
case 0x716e10:c.instructions+=146;goto B716e10;
case 0x716e14:c.instructions+=145;goto B716e14;
case 0x716e18:c.instructions+=144;goto B716e18;
case 0x716e1b:c.instructions+=143;goto B716e1b;
case 0x716e1e:c.instructions+=142;goto B716e1e;
case 0x716e20:c.instructions+=141;goto B716e20;
case 0x716e22:c.instructions+=140;goto B716e22;
case 0x716e25:c.instructions+=139;goto B716e25;
case 0x716e28:c.instructions+=138;goto B716e28;
case 0x716e2c:c.instructions+=137;goto B716e2c;
case 0x716e2f:c.instructions+=136;goto B716e2f;
case 0x716e32:c.instructions+=135;goto B716e32;
case 0x716e35:c.instructions+=134;goto B716e35;
case 0x716e38:c.instructions+=133;goto B716e38;
case 0x716e3b:c.instructions+=132;goto B716e3b;
case 0x716e3f:c.instructions+=131;goto B716e3f;
case 0x716e42:c.instructions+=130;goto B716e42;
case 0x716e46:c.instructions+=129;goto B716e46;
case 0x716e49:c.instructions+=128;goto B716e49;
case 0x716e4c:c.instructions+=127;goto B716e4c;
case 0x716e4f:c.instructions+=126;goto B716e4f;
case 0x716e53:c.instructions+=125;goto B716e53;
case 0x716e56:c.instructions+=124;goto B716e56;
case 0x716e59:c.instructions+=123;goto B716e59;
case 0x716e5c:c.instructions+=122;goto B716e5c;
case 0x716e60:c.instructions+=121;goto B716e60;
case 0x716e63:c.instructions+=120;goto B716e63;
case 0x716e66:c.instructions+=119;goto B716e66;
case 0x716e69:c.instructions+=118;goto B716e69;
case 0x716e6d:c.instructions+=117;goto B716e6d;
case 0x716e70:c.instructions+=116;goto B716e70;
case 0x716e73:c.instructions+=115;goto B716e73;
case 0x716e76:c.instructions+=114;goto B716e76;
case 0x716e79:c.instructions+=113;goto B716e79;
case 0x716e7c:c.instructions+=112;goto B716e7c;
case 0x716e7f:c.instructions+=111;goto B716e7f;
case 0x716e82:c.instructions+=110;goto B716e82;
case 0x716e86:c.instructions+=109;goto B716e86;
case 0x716e89:c.instructions+=108;goto B716e89;
case 0x716e8c:c.instructions+=107;goto B716e8c;
case 0x716e8f:c.instructions+=106;goto B716e8f;
case 0x716e93:c.instructions+=105;goto B716e93;
case 0x716e96:c.instructions+=104;goto B716e96;
case 0x716e99:c.instructions+=103;goto B716e99;
case 0x716e9c:c.instructions+=102;goto B716e9c;
case 0x716ea3:c.instructions+=101;goto B716ea3;
case 0x716ea6:c.instructions+=100;goto B716ea6;
case 0x716ea9:c.instructions+=99;goto B716ea9;
case 0x716eac:c.instructions+=98;goto B716eac;
case 0x716eb3:c.instructions+=97;goto B716eb3;
case 0x716eb6:c.instructions+=96;goto B716eb6;
case 0x716eb9:c.instructions+=95;goto B716eb9;
case 0x716ebc:c.instructions+=94;goto B716ebc;
case 0x716ebf:c.instructions+=93;goto B716ebf;
case 0x716ec2:c.instructions+=92;goto B716ec2;
case 0x716ec5:c.instructions+=91;goto B716ec5;
case 0x716ec8:c.instructions+=90;goto B716ec8;
case 0x716ecf:c.instructions+=89;goto B716ecf;
case 0x716ed2:c.instructions+=88;goto B716ed2;
case 0x716ed5:c.instructions+=87;goto B716ed5;
case 0x716ed8:c.instructions+=86;goto B716ed8;
case 0x716edf:c.instructions+=85;goto B716edf;
case 0x716ee2:c.instructions+=84;goto B716ee2;
case 0x716ee5:c.instructions+=83;goto B716ee5;
case 0x716ee8:c.instructions+=82;goto B716ee8;
case 0x716eef:c.instructions+=81;goto B716eef;
case 0x716ef2:c.instructions+=80;goto B716ef2;
case 0x716ef5:c.instructions+=79;goto B716ef5;
case 0x716ef8:c.instructions+=78;goto B716ef8;
case 0x716efc:c.instructions+=77;goto B716efc;
case 0x716eff:c.instructions+=76;goto B716eff;
case 0x716f02:c.instructions+=75;goto B716f02;
case 0x716f05:c.instructions+=74;goto B716f05;
case 0x716f08:c.instructions+=73;goto B716f08;
case 0x716f0b:c.instructions+=72;goto B716f0b;
case 0x716f0f:c.instructions+=71;goto B716f0f;
case 0x716f13:c.instructions+=70;goto B716f13;
case 0x716f16:c.instructions+=69;goto B716f16;
case 0x716f19:c.instructions+=68;goto B716f19;
case 0x716f1b:c.instructions+=67;goto B716f1b;
case 0x716f1d:c.instructions+=66;goto B716f1d;
case 0x716f20:c.instructions+=65;goto B716f20;
case 0x716f23:c.instructions+=64;goto B716f23;
case 0x716f27:c.instructions+=63;goto B716f27;
case 0x716f2a:c.instructions+=62;goto B716f2a;
case 0x716f2d:c.instructions+=61;goto B716f2d;
case 0x716f30:c.instructions+=60;goto B716f30;
case 0x716f33:c.instructions+=59;goto B716f33;
case 0x716f36:c.instructions+=58;goto B716f36;
case 0x716f3a:c.instructions+=57;goto B716f3a;
case 0x716f3d:c.instructions+=56;goto B716f3d;
case 0x716f41:c.instructions+=55;goto B716f41;
case 0x716f44:c.instructions+=54;goto B716f44;
case 0x716f47:c.instructions+=53;goto B716f47;
case 0x716f4a:c.instructions+=52;goto B716f4a;
case 0x716f4e:c.instructions+=51;goto B716f4e;
case 0x716f51:c.instructions+=50;goto B716f51;
case 0x716f54:c.instructions+=49;goto B716f54;
case 0x716f57:c.instructions+=48;goto B716f57;
case 0x716f5b:c.instructions+=47;goto B716f5b;
case 0x716f5e:c.instructions+=46;goto B716f5e;
case 0x716f61:c.instructions+=45;goto B716f61;
case 0x716f64:c.instructions+=44;goto B716f64;
case 0x716f68:c.instructions+=43;goto B716f68;
case 0x716f6b:c.instructions+=42;goto B716f6b;
case 0x716f6e:c.instructions+=41;goto B716f6e;
case 0x716f71:c.instructions+=40;goto B716f71;
case 0x716f74:c.instructions+=39;goto B716f74;
case 0x716f77:c.instructions+=38;goto B716f77;
case 0x716f7a:c.instructions+=37;goto B716f7a;
case 0x716f7d:c.instructions+=36;goto B716f7d;
case 0x716f81:c.instructions+=35;goto B716f81;
case 0x716f84:c.instructions+=34;goto B716f84;
case 0x716f87:c.instructions+=33;goto B716f87;
case 0x716f8a:c.instructions+=32;goto B716f8a;
case 0x716f8e:c.instructions+=31;goto B716f8e;
case 0x716f91:c.instructions+=30;goto B716f91;
case 0x716f94:c.instructions+=29;goto B716f94;
case 0x716f97:c.instructions+=28;goto B716f97;
case 0x716f9e:c.instructions+=27;goto B716f9e;
case 0x716fa1:c.instructions+=26;goto B716fa1;
case 0x716fa4:c.instructions+=25;goto B716fa4;
case 0x716fa7:c.instructions+=24;goto B716fa7;
case 0x716fae:c.instructions+=23;goto B716fae;
case 0x716fb1:c.instructions+=22;goto B716fb1;
case 0x716fb4:c.instructions+=21;goto B716fb4;
case 0x716fb7:c.instructions+=20;goto B716fb7;
case 0x716fba:c.instructions+=19;goto B716fba;
case 0x716fbd:c.instructions+=18;goto B716fbd;
case 0x716fc0:c.instructions+=17;goto B716fc0;
case 0x716fc3:c.instructions+=16;goto B716fc3;
case 0x716fca:c.instructions+=15;goto B716fca;
case 0x716fcd:c.instructions+=14;goto B716fcd;
case 0x716fd0:c.instructions+=13;goto B716fd0;
case 0x716fd3:c.instructions+=12;goto B716fd3;
case 0x716fda:c.instructions+=11;goto B716fda;
case 0x716fdd:c.instructions+=10;goto B716fdd;
case 0x716fe0:c.instructions+=9;goto B716fe0;
case 0x716fe3:c.instructions+=8;goto B716fe3;
case 0x716fea:c.instructions+=7;goto B716fea;
case 0x716fed:c.instructions+=6;goto B716fed;
case 0x716ff0:c.instructions+=5;goto B716ff0;
case 0x716ff3:c.instructions+=4;goto B716ff3;
case 0x716ff7:c.instructions+=3;goto B716ff7;
case 0x716ffa:c.instructions+=2;goto B716ffa;
case 0x716ffd:c.instructions+=1;goto B716ffd;
default:missing_instruction(c.pc);}
B716002:L716002:{c.instructions+=37;NFSU2_TR(0x716002);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B716005:{NFSU2_TR(0x716005);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B716008:{NFSU2_TR(0x716008);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x817048ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71600e:{NFSU2_TR(0x71600e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B716011:{NFSU2_TR(0x716011);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B716014:{NFSU2_TR(0x716014);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B716015:{NFSU2_TR(0x716015);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B716016:{NFSU2_TR(0x716016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B716019:{NFSU2_TR(0x716019);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71601c:{NFSU2_TR(0x71601c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71601d:{NFSU2_TR(0x71601d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71601e:{NFSU2_TR(0x71601e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B716021:{NFSU2_TR(0x716021);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B716023:{NFSU2_TR(0x716023);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B716024:{NFSU2_TR(0x716024);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B716025:{NFSU2_TR(0x716025);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B716028:{NFSU2_TR(0x716028);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71602b:{NFSU2_TR(0x71602b);
w8(R+4352,u64(r4(R+0)));
}
B71602e:{NFSU2_TR(0x71602e);
w8(R+4384,u64(r4(R+12)));
}
B716031:{NFSU2_TR(0x716031);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B716034:{NFSU2_TR(0x716034);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B716036:{NFSU2_TR(0x716036);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B716039:{NFSU2_TR(0x716039);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71603c:{NFSU2_TR(0x71603c);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71603f:{NFSU2_TR(0x71603f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B716042:{NFSU2_TR(0x716042);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B716045:{NFSU2_TR(0x716045);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B716048:{NFSU2_TR(0x716048);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71604b:{NFSU2_TR(0x71604b);
__builtin_memmove((R+4368),(R+4352),8);
}
B71604e:{NFSU2_TR(0x71604e);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B716051:{NFSU2_TR(0x716051);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4352))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4353))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4354))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4355))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4356))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4357))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4358))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4359))));
}
B716054:{NFSU2_TR(0x716054);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4352))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4353))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4354))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4355))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4356))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4357))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4358))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4359))));
}
B716057:{NFSU2_TR(0x716057);
{wv<8>((R+4368),uo::paddusb<8>(rv<8>((R+4368)),rv<8>(gp(0x817670))));}
}
B71605e:{NFSU2_TR(0x71605e);
u8 U[8];
__builtin_memmove((U+0),gp(0x817640),8);
w1(R+4352,u8(u32(r1(R+4352))+u32(r1(U+0))));
w1(R+4353,u8(u32(r1(R+4353))+u32(r1(U+1))));
w1(R+4354,u8(u32(r1(R+4354))+u32(r1(U+2))));
w1(R+4355,u8(u32(r1(R+4355))+u32(r1(U+3))));
w1(R+4356,u8(u32(r1(R+4356))+u32(r1(U+4))));
w1(R+4357,u8(u32(r1(R+4357))+u32(r1(U+5))));
w1(R+4358,u8(u32(r1(R+4358))+u32(r1(U+6))));
w1(R+4359,u8(u32(r1(R+4359))+u32(r1(U+7))));
}
B716065:{NFSU2_TR(0x716065);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>(gp(0x817670))));}
}
B71606c:{NFSU2_TR(0x71606c);
__builtin_memmove((R+4400),gp(0x817650),8);
}
B716073:{NFSU2_TR(0x716073);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B716076:L716076:{c.instructions+=83;NFSU2_TR(0x716076);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B716079:{NFSU2_TR(0x716079);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71607d:{NFSU2_TR(0x71607d);
__builtin_memmove((R+4432),(R+4400),8);
}
B716080:{NFSU2_TR(0x716080);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B716083:{NFSU2_TR(0x716083);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B716086:{NFSU2_TR(0x716086);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B716089:{NFSU2_TR(0x716089);
__builtin_memmove((R+4448),(R+4352),8);
}
B71608c:{NFSU2_TR(0x71608c);
__builtin_memmove((R+4416),(R+4352),8);
}
B71608f:{NFSU2_TR(0x71608f);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B716092:{NFSU2_TR(0x716092);
__builtin_memmove((R+4432),gp(0x817660),8);
}
B716099:{NFSU2_TR(0x716099);
u8 U[8];
__builtin_memmove((U+0),gp(0x817630),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B7160a0:{NFSU2_TR(0x7160a0);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B7160a3:{NFSU2_TR(0x7160a3);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B7160a6:{NFSU2_TR(0x7160a6);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B7160a9:{NFSU2_TR(0x7160a9);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B7160ac:{NFSU2_TR(0x7160ac);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B7160af:{NFSU2_TR(0x7160af);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B7160b2:{NFSU2_TR(0x7160b2);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B7160b5:{NFSU2_TR(0x7160b5);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B7160b8:{NFSU2_TR(0x7160b8);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B7160bb:{NFSU2_TR(0x7160bb);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B7160be:{NFSU2_TR(0x7160be);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x8ull)));}
}
B7160c2:{NFSU2_TR(0x7160c2);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B7160c5:{NFSU2_TR(0x7160c5);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4452),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4453),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4454),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4455),1);
}
B7160c8:{NFSU2_TR(0x7160c8);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x8ull)));}
}
B7160cc:{NFSU2_TR(0x7160cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7160d0:{NFSU2_TR(0x7160d0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B7160d3:{NFSU2_TR(0x7160d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7160d7:{NFSU2_TR(0x7160d7);
__builtin_memmove((R+4432),(R+4400),8);
}
B7160da:{NFSU2_TR(0x7160da);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B7160dd:{NFSU2_TR(0x7160dd);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B7160e0:{NFSU2_TR(0x7160e0);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B7160e3:{NFSU2_TR(0x7160e3);
__builtin_memmove((R+4448),(R+4352),8);
}
B7160e6:{NFSU2_TR(0x7160e6);
__builtin_memmove((R+4416),(R+4352),8);
}
B7160e9:{NFSU2_TR(0x7160e9);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B7160ec:{NFSU2_TR(0x7160ec);
__builtin_memmove((R+4432),gp(0x817660),8);
}
B7160f3:{NFSU2_TR(0x7160f3);
u8 U[8];
__builtin_memmove((U+0),gp(0x817630),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B7160fa:{NFSU2_TR(0x7160fa);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B7160fd:{NFSU2_TR(0x7160fd);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B716100:{NFSU2_TR(0x716100);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B716103:{NFSU2_TR(0x716103);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B716106:{NFSU2_TR(0x716106);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B716109:{NFSU2_TR(0x716109);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71610c:{NFSU2_TR(0x71610c);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71610f:{NFSU2_TR(0x71610f);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B716112:{NFSU2_TR(0x716112);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B716115:{NFSU2_TR(0x716115);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B716118:{NFSU2_TR(0x716118);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x8ull)));}
}
B71611c:{NFSU2_TR(0x71611c);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B71611f:{NFSU2_TR(0x71611f);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4452),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4453),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4454),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4455),1);
}
B716122:{NFSU2_TR(0x716122);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x8ull)));}
}
B716126:{NFSU2_TR(0x716126);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71612a:{NFSU2_TR(0x71612a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71612d:{NFSU2_TR(0x71612d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B716131:{NFSU2_TR(0x716131);
__builtin_memmove((R+4432),(R+4400),8);
}
B716134:{NFSU2_TR(0x716134);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B716137:{NFSU2_TR(0x716137);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71613a:{NFSU2_TR(0x71613a);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71613d:{NFSU2_TR(0x71613d);
__builtin_memmove((R+4448),(R+4352),8);
}
B716140:{NFSU2_TR(0x716140);
__builtin_memmove((R+4416),(R+4352),8);
}
B716143:{NFSU2_TR(0x716143);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B716146:{NFSU2_TR(0x716146);
__builtin_memmove((R+4432),gp(0x817660),8);
}
B71614d:{NFSU2_TR(0x71614d);
u8 U[8];
__builtin_memmove((U+0),gp(0x817630),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B716154:{NFSU2_TR(0x716154);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B716157:{NFSU2_TR(0x716157);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71615a:{NFSU2_TR(0x71615a);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71615d:{NFSU2_TR(0x71615d);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B716160:{NFSU2_TR(0x716160);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B716163:{NFSU2_TR(0x716163);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B716166:{NFSU2_TR(0x716166);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B716169:{NFSU2_TR(0x716169);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B71616c:{NFSU2_TR(0x71616c);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B71616f:{NFSU2_TR(0x71616f);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B716172:{NFSU2_TR(0x716172);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x8ull)));}
}
B716176:{NFSU2_TR(0x716176);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71617d:{NFSU2_TR(0x71617d);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4452),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4453),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4454),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4455),1);
}
B716180:{NFSU2_TR(0x716180);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x8ull)));}
}
B716184:{NFSU2_TR(0x716184);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71618b:{NFSU2_TR(0x71618b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B71618d:{NFSU2_TR(0x71618d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B716190:{NFSU2_TR(0x716190);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B716193:{NFSU2_TR(0x716193);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B716195:{NFSU2_TR(0x716195);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x716076u);}goto L716076;}}
}
B71619b:L71619b:{c.instructions+=632;NFSU2_TR(0x71619b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71619e:{NFSU2_TR(0x71619e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B7161a2:{NFSU2_TR(0x7161a2);
__builtin_memmove((R+4432),(R+4400),8);
}
B7161a5:{NFSU2_TR(0x7161a5);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B7161a8:{NFSU2_TR(0x7161a8);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B7161ab:{NFSU2_TR(0x7161ab);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B7161ae:{NFSU2_TR(0x7161ae);
__builtin_memmove((R+4448),(R+4352),8);
}
B7161b1:{NFSU2_TR(0x7161b1);
__builtin_memmove((R+4416),(R+4352),8);
}
B7161b4:{NFSU2_TR(0x7161b4);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B7161b7:{NFSU2_TR(0x7161b7);
__builtin_memmove((R+4432),gp(0x817660),8);
}
B7161be:{NFSU2_TR(0x7161be);
u8 U[8];
__builtin_memmove((U+0),gp(0x817630),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B7161c5:{NFSU2_TR(0x7161c5);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B7161c8:{NFSU2_TR(0x7161c8);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B7161cb:{NFSU2_TR(0x7161cb);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B7161ce:{NFSU2_TR(0x7161ce);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B7161d1:{NFSU2_TR(0x7161d1);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B7161d4:{NFSU2_TR(0x7161d4);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B7161d7:{NFSU2_TR(0x7161d7);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B7161da:{NFSU2_TR(0x7161da);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B7161dd:{NFSU2_TR(0x7161dd);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B7161e0:{NFSU2_TR(0x7161e0);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B7161e3:{NFSU2_TR(0x7161e3);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x8ull)));}
}
B7161e7:{NFSU2_TR(0x7161e7);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B7161ea:{NFSU2_TR(0x7161ea);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4452),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4453),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4454),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4455),1);
}
B7161ed:{NFSU2_TR(0x7161ed);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x8ull)));}
}
B7161f1:{NFSU2_TR(0x7161f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7161f5:{NFSU2_TR(0x7161f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7161f8:{NFSU2_TR(0x7161f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7161fb:{NFSU2_TR(0x7161fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7161fe:{NFSU2_TR(0x7161fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B716201:{NFSU2_TR(0x716201);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B716205:{NFSU2_TR(0x716205);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B716208:{NFSU2_TR(0x716208);
__builtin_memmove((R+4368),(R+4352),8);
}
B71620b:{NFSU2_TR(0x71620b);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71620e:{NFSU2_TR(0x71620e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B716211:{NFSU2_TR(0x716211);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B716214:{NFSU2_TR(0x716214);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B716218:{NFSU2_TR(0x716218);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B71621b:{NFSU2_TR(0x71621b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B71621f:{NFSU2_TR(0x71621f);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B716222:{NFSU2_TR(0x716222);
__builtin_memmove((R+4400),(R+4384),8);
}
B716225:{NFSU2_TR(0x716225);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716228:{NFSU2_TR(0x716228);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71622c:{NFSU2_TR(0x71622c);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71622f:{NFSU2_TR(0x71622f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716232:{NFSU2_TR(0x716232);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716235:{NFSU2_TR(0x716235);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716239:{NFSU2_TR(0x716239);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71623c:{NFSU2_TR(0x71623c);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71623f:{NFSU2_TR(0x71623f);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716242:{NFSU2_TR(0x716242);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716246:{NFSU2_TR(0x716246);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716249:{NFSU2_TR(0x716249);
__builtin_memmove((R+4400),(R+4384),8);
}
B71624c:{NFSU2_TR(0x71624c);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71624f:{NFSU2_TR(0x71624f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B716252:{NFSU2_TR(0x716252);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716255:{NFSU2_TR(0x716255);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716258:{NFSU2_TR(0x716258);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71625b:{NFSU2_TR(0x71625b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71625f:{NFSU2_TR(0x71625f);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716262:{NFSU2_TR(0x716262);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716265:{NFSU2_TR(0x716265);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716268:{NFSU2_TR(0x716268);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71626c:{NFSU2_TR(0x71626c);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71626f:{NFSU2_TR(0x71626f);
__builtin_memmove((R+4400),(R+4384),8);
}
B716272:{NFSU2_TR(0x716272);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716275:{NFSU2_TR(0x716275);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71627c:{NFSU2_TR(0x71627c);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71627f:{NFSU2_TR(0x71627f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716282:{NFSU2_TR(0x716282);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716285:{NFSU2_TR(0x716285);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71628c:{NFSU2_TR(0x71628c);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71628f:{NFSU2_TR(0x71628f);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716292:{NFSU2_TR(0x716292);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716295:{NFSU2_TR(0x716295);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B716298:{NFSU2_TR(0x716298);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71629b:{NFSU2_TR(0x71629b);
__builtin_memmove((R+4400),(R+4384),8);
}
B71629e:{NFSU2_TR(0x71629e);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7162a1:{NFSU2_TR(0x7162a1);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7162a8:{NFSU2_TR(0x7162a8);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B7162ab:{NFSU2_TR(0x7162ab);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B7162ae:{NFSU2_TR(0x7162ae);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B7162b1:{NFSU2_TR(0x7162b1);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7162b8:{NFSU2_TR(0x7162b8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7162bb:{NFSU2_TR(0x7162bb);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B7162be:{NFSU2_TR(0x7162be);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7162c1:{NFSU2_TR(0x7162c1);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B7162c8:{NFSU2_TR(0x7162c8);
__builtin_memmove((R+4464),(R+4448),8);
}
B7162cb:{NFSU2_TR(0x7162cb);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B7162ce:{NFSU2_TR(0x7162ce);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7162d1:{NFSU2_TR(0x7162d1);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B7162d5:{NFSU2_TR(0x7162d5);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B7162d8:{NFSU2_TR(0x7162d8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B7162db:{NFSU2_TR(0x7162db);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B7162de:{NFSU2_TR(0x7162de);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B7162e1:{NFSU2_TR(0x7162e1);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B7162e4:{NFSU2_TR(0x7162e4);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B7162e8:{NFSU2_TR(0x7162e8);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B7162ec:{NFSU2_TR(0x7162ec);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B7162ef:{NFSU2_TR(0x7162ef);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B7162f2:{NFSU2_TR(0x7162f2);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B7162f4:{NFSU2_TR(0x7162f4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B7162f6:{NFSU2_TR(0x7162f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B7162f9:{NFSU2_TR(0x7162f9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B7162fc:{NFSU2_TR(0x7162fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B716300:{NFSU2_TR(0x716300);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B716303:{NFSU2_TR(0x716303);
__builtin_memmove((R+4368),(R+4352),8);
}
B716306:{NFSU2_TR(0x716306);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B716309:{NFSU2_TR(0x716309);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B71630c:{NFSU2_TR(0x71630c);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B71630f:{NFSU2_TR(0x71630f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B716313:{NFSU2_TR(0x716313);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B716316:{NFSU2_TR(0x716316);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B71631a:{NFSU2_TR(0x71631a);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B71631d:{NFSU2_TR(0x71631d);
__builtin_memmove((R+4400),(R+4384),8);
}
B716320:{NFSU2_TR(0x716320);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716323:{NFSU2_TR(0x716323);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716327:{NFSU2_TR(0x716327);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71632a:{NFSU2_TR(0x71632a);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71632d:{NFSU2_TR(0x71632d);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716330:{NFSU2_TR(0x716330);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716334:{NFSU2_TR(0x716334);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716337:{NFSU2_TR(0x716337);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71633a:{NFSU2_TR(0x71633a);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71633d:{NFSU2_TR(0x71633d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716341:{NFSU2_TR(0x716341);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716344:{NFSU2_TR(0x716344);
__builtin_memmove((R+4400),(R+4384),8);
}
B716347:{NFSU2_TR(0x716347);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71634a:{NFSU2_TR(0x71634a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71634d:{NFSU2_TR(0x71634d);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716350:{NFSU2_TR(0x716350);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716353:{NFSU2_TR(0x716353);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716356:{NFSU2_TR(0x716356);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71635a:{NFSU2_TR(0x71635a);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71635d:{NFSU2_TR(0x71635d);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716360:{NFSU2_TR(0x716360);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716363:{NFSU2_TR(0x716363);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716367:{NFSU2_TR(0x716367);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71636a:{NFSU2_TR(0x71636a);
__builtin_memmove((R+4400),(R+4384),8);
}
B71636d:{NFSU2_TR(0x71636d);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716370:{NFSU2_TR(0x716370);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716377:{NFSU2_TR(0x716377);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71637a:{NFSU2_TR(0x71637a);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71637d:{NFSU2_TR(0x71637d);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716380:{NFSU2_TR(0x716380);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716387:{NFSU2_TR(0x716387);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71638a:{NFSU2_TR(0x71638a);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71638d:{NFSU2_TR(0x71638d);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716390:{NFSU2_TR(0x716390);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B716393:{NFSU2_TR(0x716393);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716396:{NFSU2_TR(0x716396);
__builtin_memmove((R+4400),(R+4384),8);
}
B716399:{NFSU2_TR(0x716399);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71639c:{NFSU2_TR(0x71639c);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7163a3:{NFSU2_TR(0x7163a3);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B7163a6:{NFSU2_TR(0x7163a6);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B7163a9:{NFSU2_TR(0x7163a9);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B7163ac:{NFSU2_TR(0x7163ac);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7163b3:{NFSU2_TR(0x7163b3);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7163b6:{NFSU2_TR(0x7163b6);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B7163b9:{NFSU2_TR(0x7163b9);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7163bc:{NFSU2_TR(0x7163bc);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B7163c3:{NFSU2_TR(0x7163c3);
__builtin_memmove((R+4464),(R+4448),8);
}
B7163c6:{NFSU2_TR(0x7163c6);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B7163c9:{NFSU2_TR(0x7163c9);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7163cc:{NFSU2_TR(0x7163cc);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B7163d0:{NFSU2_TR(0x7163d0);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B7163d3:{NFSU2_TR(0x7163d3);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B7163d6:{NFSU2_TR(0x7163d6);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B7163d9:{NFSU2_TR(0x7163d9);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B7163dc:{NFSU2_TR(0x7163dc);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B7163df:{NFSU2_TR(0x7163df);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B7163e3:{NFSU2_TR(0x7163e3);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B7163e7:{NFSU2_TR(0x7163e7);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B7163ea:{NFSU2_TR(0x7163ea);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B7163ed:{NFSU2_TR(0x7163ed);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B7163ef:{NFSU2_TR(0x7163ef);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B7163f1:{NFSU2_TR(0x7163f1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B7163f4:{NFSU2_TR(0x7163f4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B7163f7:{NFSU2_TR(0x7163f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B7163fb:{NFSU2_TR(0x7163fb);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B7163fe:{NFSU2_TR(0x7163fe);
__builtin_memmove((R+4368),(R+4352),8);
}
B716401:{NFSU2_TR(0x716401);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B716404:{NFSU2_TR(0x716404);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B716407:{NFSU2_TR(0x716407);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B71640a:{NFSU2_TR(0x71640a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71640e:{NFSU2_TR(0x71640e);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B716411:{NFSU2_TR(0x716411);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B716415:{NFSU2_TR(0x716415);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B716418:{NFSU2_TR(0x716418);
__builtin_memmove((R+4400),(R+4384),8);
}
B71641b:{NFSU2_TR(0x71641b);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71641e:{NFSU2_TR(0x71641e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716422:{NFSU2_TR(0x716422);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716425:{NFSU2_TR(0x716425);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716428:{NFSU2_TR(0x716428);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71642b:{NFSU2_TR(0x71642b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71642f:{NFSU2_TR(0x71642f);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716432:{NFSU2_TR(0x716432);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716435:{NFSU2_TR(0x716435);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716438:{NFSU2_TR(0x716438);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71643c:{NFSU2_TR(0x71643c);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71643f:{NFSU2_TR(0x71643f);
__builtin_memmove((R+4400),(R+4384),8);
}
B716442:{NFSU2_TR(0x716442);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716445:{NFSU2_TR(0x716445);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B716448:{NFSU2_TR(0x716448);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71644b:{NFSU2_TR(0x71644b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71644e:{NFSU2_TR(0x71644e);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716451:{NFSU2_TR(0x716451);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716455:{NFSU2_TR(0x716455);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716458:{NFSU2_TR(0x716458);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71645b:{NFSU2_TR(0x71645b);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71645e:{NFSU2_TR(0x71645e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716462:{NFSU2_TR(0x716462);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716465:{NFSU2_TR(0x716465);
__builtin_memmove((R+4400),(R+4384),8);
}
B716468:{NFSU2_TR(0x716468);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71646b:{NFSU2_TR(0x71646b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716472:{NFSU2_TR(0x716472);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716475:{NFSU2_TR(0x716475);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716478:{NFSU2_TR(0x716478);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71647b:{NFSU2_TR(0x71647b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716482:{NFSU2_TR(0x716482);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716485:{NFSU2_TR(0x716485);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716488:{NFSU2_TR(0x716488);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71648b:{NFSU2_TR(0x71648b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71648e:{NFSU2_TR(0x71648e);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716491:{NFSU2_TR(0x716491);
__builtin_memmove((R+4400),(R+4384),8);
}
B716494:{NFSU2_TR(0x716494);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716497:{NFSU2_TR(0x716497);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B71649e:{NFSU2_TR(0x71649e);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B7164a1:{NFSU2_TR(0x7164a1);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B7164a4:{NFSU2_TR(0x7164a4);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B7164a7:{NFSU2_TR(0x7164a7);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7164ae:{NFSU2_TR(0x7164ae);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7164b1:{NFSU2_TR(0x7164b1);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B7164b4:{NFSU2_TR(0x7164b4);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7164b7:{NFSU2_TR(0x7164b7);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B7164be:{NFSU2_TR(0x7164be);
__builtin_memmove((R+4464),(R+4448),8);
}
B7164c1:{NFSU2_TR(0x7164c1);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B7164c4:{NFSU2_TR(0x7164c4);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7164c7:{NFSU2_TR(0x7164c7);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B7164cb:{NFSU2_TR(0x7164cb);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B7164ce:{NFSU2_TR(0x7164ce);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B7164d1:{NFSU2_TR(0x7164d1);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B7164d4:{NFSU2_TR(0x7164d4);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B7164d7:{NFSU2_TR(0x7164d7);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B7164da:{NFSU2_TR(0x7164da);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B7164de:{NFSU2_TR(0x7164de);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B7164e2:{NFSU2_TR(0x7164e2);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B7164e5:{NFSU2_TR(0x7164e5);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B7164e8:{NFSU2_TR(0x7164e8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B7164ea:{NFSU2_TR(0x7164ea);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B7164ec:{NFSU2_TR(0x7164ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B7164ef:{NFSU2_TR(0x7164ef);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B7164f2:{NFSU2_TR(0x7164f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B7164f6:{NFSU2_TR(0x7164f6);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B7164f9:{NFSU2_TR(0x7164f9);
__builtin_memmove((R+4368),(R+4352),8);
}
B7164fc:{NFSU2_TR(0x7164fc);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B7164ff:{NFSU2_TR(0x7164ff);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B716502:{NFSU2_TR(0x716502);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B716505:{NFSU2_TR(0x716505);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B716509:{NFSU2_TR(0x716509);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B71650c:{NFSU2_TR(0x71650c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B716510:{NFSU2_TR(0x716510);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B716513:{NFSU2_TR(0x716513);
__builtin_memmove((R+4400),(R+4384),8);
}
B716516:{NFSU2_TR(0x716516);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716519:{NFSU2_TR(0x716519);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71651d:{NFSU2_TR(0x71651d);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716520:{NFSU2_TR(0x716520);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716523:{NFSU2_TR(0x716523);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716526:{NFSU2_TR(0x716526);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71652a:{NFSU2_TR(0x71652a);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71652d:{NFSU2_TR(0x71652d);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716530:{NFSU2_TR(0x716530);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716533:{NFSU2_TR(0x716533);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716537:{NFSU2_TR(0x716537);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71653a:{NFSU2_TR(0x71653a);
__builtin_memmove((R+4400),(R+4384),8);
}
B71653d:{NFSU2_TR(0x71653d);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716540:{NFSU2_TR(0x716540);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B716543:{NFSU2_TR(0x716543);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716546:{NFSU2_TR(0x716546);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716549:{NFSU2_TR(0x716549);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71654c:{NFSU2_TR(0x71654c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716550:{NFSU2_TR(0x716550);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716553:{NFSU2_TR(0x716553);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716556:{NFSU2_TR(0x716556);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716559:{NFSU2_TR(0x716559);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71655d:{NFSU2_TR(0x71655d);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716560:{NFSU2_TR(0x716560);
__builtin_memmove((R+4400),(R+4384),8);
}
B716563:{NFSU2_TR(0x716563);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716566:{NFSU2_TR(0x716566);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71656d:{NFSU2_TR(0x71656d);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716570:{NFSU2_TR(0x716570);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716573:{NFSU2_TR(0x716573);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716576:{NFSU2_TR(0x716576);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71657d:{NFSU2_TR(0x71657d);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716580:{NFSU2_TR(0x716580);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716583:{NFSU2_TR(0x716583);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716586:{NFSU2_TR(0x716586);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B716589:{NFSU2_TR(0x716589);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71658c:{NFSU2_TR(0x71658c);
__builtin_memmove((R+4400),(R+4384),8);
}
B71658f:{NFSU2_TR(0x71658f);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716592:{NFSU2_TR(0x716592);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B716599:{NFSU2_TR(0x716599);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71659c:{NFSU2_TR(0x71659c);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B71659f:{NFSU2_TR(0x71659f);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B7165a2:{NFSU2_TR(0x7165a2);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7165a9:{NFSU2_TR(0x7165a9);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7165ac:{NFSU2_TR(0x7165ac);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B7165af:{NFSU2_TR(0x7165af);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7165b2:{NFSU2_TR(0x7165b2);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B7165b9:{NFSU2_TR(0x7165b9);
__builtin_memmove((R+4464),(R+4448),8);
}
B7165bc:{NFSU2_TR(0x7165bc);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B7165bf:{NFSU2_TR(0x7165bf);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7165c2:{NFSU2_TR(0x7165c2);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B7165c6:{NFSU2_TR(0x7165c6);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B7165c9:{NFSU2_TR(0x7165c9);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B7165cc:{NFSU2_TR(0x7165cc);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B7165cf:{NFSU2_TR(0x7165cf);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B7165d2:{NFSU2_TR(0x7165d2);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B7165d5:{NFSU2_TR(0x7165d5);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B7165d9:{NFSU2_TR(0x7165d9);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B7165dd:{NFSU2_TR(0x7165dd);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B7165e0:{NFSU2_TR(0x7165e0);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B7165e3:{NFSU2_TR(0x7165e3);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B7165e5:{NFSU2_TR(0x7165e5);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B7165e7:{NFSU2_TR(0x7165e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B7165ea:{NFSU2_TR(0x7165ea);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B7165ed:{NFSU2_TR(0x7165ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B7165f1:{NFSU2_TR(0x7165f1);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B7165f4:{NFSU2_TR(0x7165f4);
__builtin_memmove((R+4368),(R+4352),8);
}
B7165f7:{NFSU2_TR(0x7165f7);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B7165fa:{NFSU2_TR(0x7165fa);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B7165fd:{NFSU2_TR(0x7165fd);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B716600:{NFSU2_TR(0x716600);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B716604:{NFSU2_TR(0x716604);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B716607:{NFSU2_TR(0x716607);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B71660b:{NFSU2_TR(0x71660b);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B71660e:{NFSU2_TR(0x71660e);
__builtin_memmove((R+4400),(R+4384),8);
}
B716611:{NFSU2_TR(0x716611);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716614:{NFSU2_TR(0x716614);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716618:{NFSU2_TR(0x716618);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71661b:{NFSU2_TR(0x71661b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71661e:{NFSU2_TR(0x71661e);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716621:{NFSU2_TR(0x716621);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716625:{NFSU2_TR(0x716625);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716628:{NFSU2_TR(0x716628);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71662b:{NFSU2_TR(0x71662b);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71662e:{NFSU2_TR(0x71662e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716632:{NFSU2_TR(0x716632);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716635:{NFSU2_TR(0x716635);
__builtin_memmove((R+4400),(R+4384),8);
}
B716638:{NFSU2_TR(0x716638);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71663b:{NFSU2_TR(0x71663b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71663e:{NFSU2_TR(0x71663e);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716641:{NFSU2_TR(0x716641);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716644:{NFSU2_TR(0x716644);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716647:{NFSU2_TR(0x716647);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71664b:{NFSU2_TR(0x71664b);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71664e:{NFSU2_TR(0x71664e);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716651:{NFSU2_TR(0x716651);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716654:{NFSU2_TR(0x716654);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716658:{NFSU2_TR(0x716658);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71665b:{NFSU2_TR(0x71665b);
__builtin_memmove((R+4400),(R+4384),8);
}
B71665e:{NFSU2_TR(0x71665e);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716661:{NFSU2_TR(0x716661);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716668:{NFSU2_TR(0x716668);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71666b:{NFSU2_TR(0x71666b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71666e:{NFSU2_TR(0x71666e);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716671:{NFSU2_TR(0x716671);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716678:{NFSU2_TR(0x716678);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71667b:{NFSU2_TR(0x71667b);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71667e:{NFSU2_TR(0x71667e);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716681:{NFSU2_TR(0x716681);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B716684:{NFSU2_TR(0x716684);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716687:{NFSU2_TR(0x716687);
__builtin_memmove((R+4400),(R+4384),8);
}
B71668a:{NFSU2_TR(0x71668a);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71668d:{NFSU2_TR(0x71668d);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B716694:{NFSU2_TR(0x716694);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716697:{NFSU2_TR(0x716697);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B71669a:{NFSU2_TR(0x71669a);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71669d:{NFSU2_TR(0x71669d);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7166a4:{NFSU2_TR(0x7166a4);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7166a7:{NFSU2_TR(0x7166a7);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B7166aa:{NFSU2_TR(0x7166aa);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7166ad:{NFSU2_TR(0x7166ad);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B7166b4:{NFSU2_TR(0x7166b4);
__builtin_memmove((R+4464),(R+4448),8);
}
B7166b7:{NFSU2_TR(0x7166b7);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B7166ba:{NFSU2_TR(0x7166ba);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7166bd:{NFSU2_TR(0x7166bd);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B7166c1:{NFSU2_TR(0x7166c1);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B7166c4:{NFSU2_TR(0x7166c4);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B7166c7:{NFSU2_TR(0x7166c7);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B7166ca:{NFSU2_TR(0x7166ca);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B7166cd:{NFSU2_TR(0x7166cd);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B7166d0:{NFSU2_TR(0x7166d0);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B7166d4:{NFSU2_TR(0x7166d4);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B7166d8:{NFSU2_TR(0x7166d8);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B7166db:{NFSU2_TR(0x7166db);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B7166de:{NFSU2_TR(0x7166de);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B7166e0:{NFSU2_TR(0x7166e0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B7166e2:{NFSU2_TR(0x7166e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B7166e5:{NFSU2_TR(0x7166e5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B7166e8:{NFSU2_TR(0x7166e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B7166ec:{NFSU2_TR(0x7166ec);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B7166ef:{NFSU2_TR(0x7166ef);
__builtin_memmove((R+4368),(R+4352),8);
}
B7166f2:{NFSU2_TR(0x7166f2);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B7166f5:{NFSU2_TR(0x7166f5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B7166f8:{NFSU2_TR(0x7166f8);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B7166fb:{NFSU2_TR(0x7166fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7166ff:{NFSU2_TR(0x7166ff);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B716702:{NFSU2_TR(0x716702);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B716706:{NFSU2_TR(0x716706);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B716709:{NFSU2_TR(0x716709);
__builtin_memmove((R+4400),(R+4384),8);
}
B71670c:{NFSU2_TR(0x71670c);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71670f:{NFSU2_TR(0x71670f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716713:{NFSU2_TR(0x716713);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716716:{NFSU2_TR(0x716716);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716719:{NFSU2_TR(0x716719);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71671c:{NFSU2_TR(0x71671c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716720:{NFSU2_TR(0x716720);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716723:{NFSU2_TR(0x716723);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716726:{NFSU2_TR(0x716726);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716729:{NFSU2_TR(0x716729);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71672d:{NFSU2_TR(0x71672d);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716730:{NFSU2_TR(0x716730);
__builtin_memmove((R+4400),(R+4384),8);
}
B716733:{NFSU2_TR(0x716733);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716736:{NFSU2_TR(0x716736);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B716739:{NFSU2_TR(0x716739);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71673c:{NFSU2_TR(0x71673c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71673f:{NFSU2_TR(0x71673f);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716742:{NFSU2_TR(0x716742);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716746:{NFSU2_TR(0x716746);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716749:{NFSU2_TR(0x716749);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71674c:{NFSU2_TR(0x71674c);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71674f:{NFSU2_TR(0x71674f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716753:{NFSU2_TR(0x716753);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716756:{NFSU2_TR(0x716756);
__builtin_memmove((R+4400),(R+4384),8);
}
B716759:{NFSU2_TR(0x716759);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71675c:{NFSU2_TR(0x71675c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716763:{NFSU2_TR(0x716763);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716766:{NFSU2_TR(0x716766);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716769:{NFSU2_TR(0x716769);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71676c:{NFSU2_TR(0x71676c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716773:{NFSU2_TR(0x716773);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716776:{NFSU2_TR(0x716776);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716779:{NFSU2_TR(0x716779);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71677c:{NFSU2_TR(0x71677c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71677f:{NFSU2_TR(0x71677f);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716782:{NFSU2_TR(0x716782);
__builtin_memmove((R+4400),(R+4384),8);
}
B716785:{NFSU2_TR(0x716785);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716788:{NFSU2_TR(0x716788);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B71678f:{NFSU2_TR(0x71678f);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716792:{NFSU2_TR(0x716792);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B716795:{NFSU2_TR(0x716795);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716798:{NFSU2_TR(0x716798);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B71679f:{NFSU2_TR(0x71679f);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7167a2:{NFSU2_TR(0x7167a2);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B7167a5:{NFSU2_TR(0x7167a5);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7167a8:{NFSU2_TR(0x7167a8);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B7167af:{NFSU2_TR(0x7167af);
__builtin_memmove((R+4464),(R+4448),8);
}
B7167b2:{NFSU2_TR(0x7167b2);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B7167b5:{NFSU2_TR(0x7167b5);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7167b8:{NFSU2_TR(0x7167b8);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B7167bc:{NFSU2_TR(0x7167bc);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B7167bf:{NFSU2_TR(0x7167bf);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B7167c2:{NFSU2_TR(0x7167c2);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B7167c5:{NFSU2_TR(0x7167c5);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B7167c8:{NFSU2_TR(0x7167c8);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B7167cb:{NFSU2_TR(0x7167cb);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B7167cf:{NFSU2_TR(0x7167cf);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B7167d3:{NFSU2_TR(0x7167d3);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B7167d6:{NFSU2_TR(0x7167d6);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B7167d9:{NFSU2_TR(0x7167d9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B7167db:{NFSU2_TR(0x7167db);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B7167dd:{NFSU2_TR(0x7167dd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B7167e0:{NFSU2_TR(0x7167e0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B7167e3:{NFSU2_TR(0x7167e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B7167e7:{NFSU2_TR(0x7167e7);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B7167ea:{NFSU2_TR(0x7167ea);
__builtin_memmove((R+4368),(R+4352),8);
}
B7167ed:{NFSU2_TR(0x7167ed);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B7167f0:{NFSU2_TR(0x7167f0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B7167f3:{NFSU2_TR(0x7167f3);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B7167f6:{NFSU2_TR(0x7167f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7167fa:{NFSU2_TR(0x7167fa);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B7167fd:{NFSU2_TR(0x7167fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B716801:{NFSU2_TR(0x716801);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B716804:{NFSU2_TR(0x716804);
__builtin_memmove((R+4400),(R+4384),8);
}
B716807:{NFSU2_TR(0x716807);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71680a:{NFSU2_TR(0x71680a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71680e:{NFSU2_TR(0x71680e);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716811:{NFSU2_TR(0x716811);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716814:{NFSU2_TR(0x716814);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716817:{NFSU2_TR(0x716817);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71681b:{NFSU2_TR(0x71681b);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71681e:{NFSU2_TR(0x71681e);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716821:{NFSU2_TR(0x716821);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716824:{NFSU2_TR(0x716824);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716828:{NFSU2_TR(0x716828);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71682b:{NFSU2_TR(0x71682b);
__builtin_memmove((R+4400),(R+4384),8);
}
B71682e:{NFSU2_TR(0x71682e);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716831:{NFSU2_TR(0x716831);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B716834:{NFSU2_TR(0x716834);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716837:{NFSU2_TR(0x716837);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71683a:{NFSU2_TR(0x71683a);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71683d:{NFSU2_TR(0x71683d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716841:{NFSU2_TR(0x716841);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716844:{NFSU2_TR(0x716844);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716847:{NFSU2_TR(0x716847);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71684a:{NFSU2_TR(0x71684a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71684e:{NFSU2_TR(0x71684e);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716851:{NFSU2_TR(0x716851);
__builtin_memmove((R+4400),(R+4384),8);
}
B716854:{NFSU2_TR(0x716854);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716857:{NFSU2_TR(0x716857);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71685e:{NFSU2_TR(0x71685e);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716861:{NFSU2_TR(0x716861);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716864:{NFSU2_TR(0x716864);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716867:{NFSU2_TR(0x716867);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71686e:{NFSU2_TR(0x71686e);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716871:{NFSU2_TR(0x716871);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716874:{NFSU2_TR(0x716874);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716877:{NFSU2_TR(0x716877);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71687a:{NFSU2_TR(0x71687a);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71687d:{NFSU2_TR(0x71687d);
__builtin_memmove((R+4400),(R+4384),8);
}
B716880:{NFSU2_TR(0x716880);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716883:{NFSU2_TR(0x716883);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B71688a:{NFSU2_TR(0x71688a);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71688d:{NFSU2_TR(0x71688d);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B716890:{NFSU2_TR(0x716890);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716893:{NFSU2_TR(0x716893);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B71689a:{NFSU2_TR(0x71689a);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71689d:{NFSU2_TR(0x71689d);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B7168a0:{NFSU2_TR(0x7168a0);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7168a3:{NFSU2_TR(0x7168a3);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B7168aa:{NFSU2_TR(0x7168aa);
__builtin_memmove((R+4464),(R+4448),8);
}
B7168ad:{NFSU2_TR(0x7168ad);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B7168b0:{NFSU2_TR(0x7168b0);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7168b3:{NFSU2_TR(0x7168b3);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B7168b7:{NFSU2_TR(0x7168b7);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B7168ba:{NFSU2_TR(0x7168ba);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B7168bd:{NFSU2_TR(0x7168bd);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B7168c0:{NFSU2_TR(0x7168c0);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B7168c3:{NFSU2_TR(0x7168c3);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B7168c6:{NFSU2_TR(0x7168c6);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B7168ca:{NFSU2_TR(0x7168ca);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B7168ce:{NFSU2_TR(0x7168ce);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B7168d1:{NFSU2_TR(0x7168d1);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B7168d4:{NFSU2_TR(0x7168d4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B7168d6:{NFSU2_TR(0x7168d6);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B7168d8:{NFSU2_TR(0x7168d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B7168db:{NFSU2_TR(0x7168db);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x10ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7168de:{NFSU2_TR(0x7168de);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B7168e2:{NFSU2_TR(0x7168e2);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B7168e5:{NFSU2_TR(0x7168e5);
__builtin_memmove((R+4368),(R+4352),8);
}
B7168e8:{NFSU2_TR(0x7168e8);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B7168eb:{NFSU2_TR(0x7168eb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B7168ee:{NFSU2_TR(0x7168ee);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B7168f1:{NFSU2_TR(0x7168f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7168f5:{NFSU2_TR(0x7168f5);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B7168f8:{NFSU2_TR(0x7168f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B7168fc:{NFSU2_TR(0x7168fc);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B7168ff:{NFSU2_TR(0x7168ff);
__builtin_memmove((R+4400),(R+4384),8);
}
B716902:{NFSU2_TR(0x716902);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716905:{NFSU2_TR(0x716905);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716909:{NFSU2_TR(0x716909);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71690c:{NFSU2_TR(0x71690c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71690f:{NFSU2_TR(0x71690f);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716912:{NFSU2_TR(0x716912);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716916:{NFSU2_TR(0x716916);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716919:{NFSU2_TR(0x716919);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71691c:{NFSU2_TR(0x71691c);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71691f:{NFSU2_TR(0x71691f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716923:{NFSU2_TR(0x716923);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716926:{NFSU2_TR(0x716926);
__builtin_memmove((R+4400),(R+4384),8);
}
B716929:{NFSU2_TR(0x716929);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71692c:{NFSU2_TR(0x71692c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71692f:{NFSU2_TR(0x71692f);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716932:{NFSU2_TR(0x716932);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716935:{NFSU2_TR(0x716935);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716938:{NFSU2_TR(0x716938);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71693c:{NFSU2_TR(0x71693c);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71693f:{NFSU2_TR(0x71693f);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716942:{NFSU2_TR(0x716942);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716945:{NFSU2_TR(0x716945);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716949:{NFSU2_TR(0x716949);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71694c:{NFSU2_TR(0x71694c);
__builtin_memmove((R+4400),(R+4384),8);
}
B71694f:{NFSU2_TR(0x71694f);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716952:{NFSU2_TR(0x716952);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716959:{NFSU2_TR(0x716959);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71695c:{NFSU2_TR(0x71695c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71695f:{NFSU2_TR(0x71695f);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716962:{NFSU2_TR(0x716962);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716969:{NFSU2_TR(0x716969);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71696c:{NFSU2_TR(0x71696c);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71696f:{NFSU2_TR(0x71696f);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716972:{NFSU2_TR(0x716972);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B716975:{NFSU2_TR(0x716975);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716978:{NFSU2_TR(0x716978);
__builtin_memmove((R+4400),(R+4384),8);
}
B71697b:{NFSU2_TR(0x71697b);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71697e:{NFSU2_TR(0x71697e);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B716985:{NFSU2_TR(0x716985);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716988:{NFSU2_TR(0x716988);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B71698b:{NFSU2_TR(0x71698b);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71698e:{NFSU2_TR(0x71698e);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B716995:{NFSU2_TR(0x716995);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716998:{NFSU2_TR(0x716998);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B71699b:{NFSU2_TR(0x71699b);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71699e:{NFSU2_TR(0x71699e);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B7169a5:{NFSU2_TR(0x7169a5);
__builtin_memmove((R+4464),(R+4448),8);
}
B7169a8:{NFSU2_TR(0x7169a8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B7169ab:{NFSU2_TR(0x7169ab);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7169ae:{NFSU2_TR(0x7169ae);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B7169b2:{NFSU2_TR(0x7169b2);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B7169b5:{NFSU2_TR(0x7169b5);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B7169b8:{NFSU2_TR(0x7169b8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B7169bb:{NFSU2_TR(0x7169bb);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B7169be:{NFSU2_TR(0x7169be);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B7169c1:{NFSU2_TR(0x7169c1);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B7169c5:{NFSU2_TR(0x7169c5);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B7169c9:{NFSU2_TR(0x7169c9);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B7169cc:{NFSU2_TR(0x7169cc);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B7169cf:{NFSU2_TR(0x7169cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7169d0:{NFSU2_TR(0x7169d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7169d1:{NFSU2_TR(0x7169d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7169d2:{NFSU2_TR(0x7169d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7169d3:{NFSU2_TR(0x7169d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7169d4:{NFSU2_TR(0x7169d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7169d5:{NFSU2_TR(0x7169d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7169d6:{NFSU2_TR(0x7169d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7169d7:{NFSU2_TR(0x7169d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7169d8:{NFSU2_TR(0x7169d8);
__builtin_memmove((R+16),(R+20),4);
}
B7169da:{NFSU2_TR(0x7169da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7169db:{NFSU2_TR(0x7169db);
__builtin_memmove((R+16),(R+12),4);
}
B7169dd:{NFSU2_TR(0x7169dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7169de:{NFSU2_TR(0x7169de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7169df:L7169df:{c.instructions+=63;NFSU2_TR(0x7169df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7169e0:{NFSU2_TR(0x7169e0);
__builtin_memmove((R+12),(R+16),4);
}
B7169e2:{NFSU2_TR(0x7169e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7169e3:{NFSU2_TR(0x7169e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7169e4:{NFSU2_TR(0x7169e4);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B7169e7:{NFSU2_TR(0x7169e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7169ea:{NFSU2_TR(0x7169ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7169eb:{NFSU2_TR(0x7169eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7169ee:{NFSU2_TR(0x7169ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7169f2:{NFSU2_TR(0x7169f2);
__builtin_memmove((R+20),(R+16),4);
}
B7169f4:{NFSU2_TR(0x7169f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1b4ull))));
}
B7169fa:{NFSU2_TR(0x7169fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7169fb:{NFSU2_TR(0x7169fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7169fc:{NFSU2_TR(0x7169fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7169fd:{NFSU2_TR(0x7169fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B716a00:{NFSU2_TR(0x716a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B716a03:{NFSU2_TR(0x716a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B716a06:{NFSU2_TR(0x716a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B716a09:{NFSU2_TR(0x716a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B716a0c:{NFSU2_TR(0x716a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B716a0f:{NFSU2_TR(0x716a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B716a12:{NFSU2_TR(0x716a12);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B716a18:{NFSU2_TR(0x716a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B716a1b:{NFSU2_TR(0x716a1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B716a21:{NFSU2_TR(0x716a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B716a24:{NFSU2_TR(0x716a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B716a27:{NFSU2_TR(0x716a27);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B716a2a:{NFSU2_TR(0x716a2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B716a2d:{NFSU2_TR(0x716a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x817048ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B716a33:{NFSU2_TR(0x716a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B716a36:{NFSU2_TR(0x716a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B716a39:{NFSU2_TR(0x716a39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B716a3a:{NFSU2_TR(0x716a3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B716a3b:{NFSU2_TR(0x716a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B716a3e:{NFSU2_TR(0x716a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B716a41:{NFSU2_TR(0x716a41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B716a42:{NFSU2_TR(0x716a42);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B716a43:{NFSU2_TR(0x716a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B716a46:{NFSU2_TR(0x716a46);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B716a48:{NFSU2_TR(0x716a48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B716a49:{NFSU2_TR(0x716a49);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B716a4a:{NFSU2_TR(0x716a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B716a4d:{NFSU2_TR(0x716a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B716a50:{NFSU2_TR(0x716a50);
w8(R+4352,u64(r4(R+0)));
}
B716a53:{NFSU2_TR(0x716a53);
w8(R+4384,u64(r4(R+12)));
}
B716a56:{NFSU2_TR(0x716a56);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B716a59:{NFSU2_TR(0x716a59);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B716a5b:{NFSU2_TR(0x716a5b);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B716a5e:{NFSU2_TR(0x716a5e);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B716a61:{NFSU2_TR(0x716a61);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B716a64:{NFSU2_TR(0x716a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B716a67:{NFSU2_TR(0x716a67);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B716a6a:{NFSU2_TR(0x716a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B716a6d:{NFSU2_TR(0x716a6d);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B716a70:{NFSU2_TR(0x716a70);
__builtin_memmove((R+4368),(R+4352),8);
}
B716a73:{NFSU2_TR(0x716a73);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B716a76:{NFSU2_TR(0x716a76);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4352))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4353))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4354))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4355))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4356))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4357))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4358))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4359))));
}
B716a79:{NFSU2_TR(0x716a79);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4352))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4353))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4354))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4355))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4356))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4357))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4358))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4359))));
}
B716a7c:{NFSU2_TR(0x716a7c);
{wv<8>((R+4368),uo::paddusb<8>(rv<8>((R+4368)),rv<8>(gp(0x817680))));}
}
B716a83:{NFSU2_TR(0x716a83);
u8 U[8];
__builtin_memmove((U+0),gp(0x817640),8);
w1(R+4352,u8(u32(r1(R+4352))+u32(r1(U+0))));
w1(R+4353,u8(u32(r1(R+4353))+u32(r1(U+1))));
w1(R+4354,u8(u32(r1(R+4354))+u32(r1(U+2))));
w1(R+4355,u8(u32(r1(R+4355))+u32(r1(U+3))));
w1(R+4356,u8(u32(r1(R+4356))+u32(r1(U+4))));
w1(R+4357,u8(u32(r1(R+4357))+u32(r1(U+5))));
w1(R+4358,u8(u32(r1(R+4358))+u32(r1(U+6))));
w1(R+4359,u8(u32(r1(R+4359))+u32(r1(U+7))));
}
B716a8a:{NFSU2_TR(0x716a8a);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>(gp(0x817680))));}
}
B716a91:{NFSU2_TR(0x716a91);
__builtin_memmove((R+4400),gp(0x817650),8);
}
B716a98:{NFSU2_TR(0x716a98);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B716a9b:L716a9b:{c.instructions+=86;NFSU2_TR(0x716a9b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B716a9e:{NFSU2_TR(0x716a9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B716aa2:{NFSU2_TR(0x716aa2);
__builtin_memmove((R+4432),(R+4400),8);
}
B716aa5:{NFSU2_TR(0x716aa5);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B716aa8:{NFSU2_TR(0x716aa8);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B716aab:{NFSU2_TR(0x716aab);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B716aae:{NFSU2_TR(0x716aae);
__builtin_memmove((R+4448),(R+4352),8);
}
B716ab1:{NFSU2_TR(0x716ab1);
{wv<8>((R+4400),uo::paddusb<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B716ab4:{NFSU2_TR(0x716ab4);
__builtin_memmove((R+4416),(R+4352),8);
}
B716ab7:{NFSU2_TR(0x716ab7);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B716aba:{NFSU2_TR(0x716aba);
__builtin_memmove((R+4432),gp(0x817660),8);
}
B716ac1:{NFSU2_TR(0x716ac1);
u8 U[8];
__builtin_memmove((U+0),gp(0x817630),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B716ac8:{NFSU2_TR(0x716ac8);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B716acb:{NFSU2_TR(0x716acb);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B716ace:{NFSU2_TR(0x716ace);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B716ad1:{NFSU2_TR(0x716ad1);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B716ad4:{NFSU2_TR(0x716ad4);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B716ad7:{NFSU2_TR(0x716ad7);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B716ada:{NFSU2_TR(0x716ada);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B716add:{NFSU2_TR(0x716add);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B716ae0:{NFSU2_TR(0x716ae0);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B716ae3:{NFSU2_TR(0x716ae3);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B716ae6:{NFSU2_TR(0x716ae6);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x8ull)));}
}
B716aea:{NFSU2_TR(0x716aea);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B716aed:{NFSU2_TR(0x716aed);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4452),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4453),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4454),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4455),1);
}
B716af0:{NFSU2_TR(0x716af0);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x8ull)));}
}
B716af4:{NFSU2_TR(0x716af4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B716af8:{NFSU2_TR(0x716af8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B716afb:{NFSU2_TR(0x716afb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B716aff:{NFSU2_TR(0x716aff);
__builtin_memmove((R+4432),(R+4400),8);
}
B716b02:{NFSU2_TR(0x716b02);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B716b05:{NFSU2_TR(0x716b05);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B716b08:{NFSU2_TR(0x716b08);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B716b0b:{NFSU2_TR(0x716b0b);
__builtin_memmove((R+4448),(R+4352),8);
}
B716b0e:{NFSU2_TR(0x716b0e);
{wv<8>((R+4400),uo::paddusb<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B716b11:{NFSU2_TR(0x716b11);
__builtin_memmove((R+4416),(R+4352),8);
}
B716b14:{NFSU2_TR(0x716b14);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B716b17:{NFSU2_TR(0x716b17);
__builtin_memmove((R+4432),gp(0x817660),8);
}
B716b1e:{NFSU2_TR(0x716b1e);
u8 U[8];
__builtin_memmove((U+0),gp(0x817630),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B716b25:{NFSU2_TR(0x716b25);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B716b28:{NFSU2_TR(0x716b28);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B716b2b:{NFSU2_TR(0x716b2b);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B716b2e:{NFSU2_TR(0x716b2e);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B716b31:{NFSU2_TR(0x716b31);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B716b34:{NFSU2_TR(0x716b34);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B716b37:{NFSU2_TR(0x716b37);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B716b3a:{NFSU2_TR(0x716b3a);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B716b3d:{NFSU2_TR(0x716b3d);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B716b40:{NFSU2_TR(0x716b40);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B716b43:{NFSU2_TR(0x716b43);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x8ull)));}
}
B716b47:{NFSU2_TR(0x716b47);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B716b4a:{NFSU2_TR(0x716b4a);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4452),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4453),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4454),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4455),1);
}
B716b4d:{NFSU2_TR(0x716b4d);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x8ull)));}
}
B716b51:{NFSU2_TR(0x716b51);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B716b55:{NFSU2_TR(0x716b55);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B716b58:{NFSU2_TR(0x716b58);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B716b5c:{NFSU2_TR(0x716b5c);
__builtin_memmove((R+4432),(R+4400),8);
}
B716b5f:{NFSU2_TR(0x716b5f);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B716b62:{NFSU2_TR(0x716b62);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B716b65:{NFSU2_TR(0x716b65);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B716b68:{NFSU2_TR(0x716b68);
__builtin_memmove((R+4448),(R+4352),8);
}
B716b6b:{NFSU2_TR(0x716b6b);
{wv<8>((R+4400),uo::paddusb<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B716b6e:{NFSU2_TR(0x716b6e);
__builtin_memmove((R+4416),(R+4352),8);
}
B716b71:{NFSU2_TR(0x716b71);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B716b74:{NFSU2_TR(0x716b74);
__builtin_memmove((R+4432),gp(0x817660),8);
}
B716b7b:{NFSU2_TR(0x716b7b);
u8 U[8];
__builtin_memmove((U+0),gp(0x817630),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B716b82:{NFSU2_TR(0x716b82);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B716b85:{NFSU2_TR(0x716b85);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B716b88:{NFSU2_TR(0x716b88);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B716b8b:{NFSU2_TR(0x716b8b);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B716b8e:{NFSU2_TR(0x716b8e);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B716b91:{NFSU2_TR(0x716b91);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B716b94:{NFSU2_TR(0x716b94);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B716b97:{NFSU2_TR(0x716b97);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B716b9a:{NFSU2_TR(0x716b9a);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B716b9d:{NFSU2_TR(0x716b9d);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B716ba0:{NFSU2_TR(0x716ba0);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x8ull)));}
}
B716ba4:{NFSU2_TR(0x716ba4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B716bab:{NFSU2_TR(0x716bab);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4452),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4453),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4454),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4455),1);
}
B716bae:{NFSU2_TR(0x716bae);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x8ull)));}
}
B716bb2:{NFSU2_TR(0x716bb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B716bb9:{NFSU2_TR(0x716bb9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B716bbb:{NFSU2_TR(0x716bbb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B716bbe:{NFSU2_TR(0x716bbe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B716bc1:{NFSU2_TR(0x716bc1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B716bc3:{NFSU2_TR(0x716bc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x716a9bu);}goto L716a9b;}}
}
B716bc9:L716bc9:{c.instructions+=317;NFSU2_TR(0x716bc9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B716bcc:{NFSU2_TR(0x716bcc);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B716bd0:{NFSU2_TR(0x716bd0);
__builtin_memmove((R+4432),(R+4400),8);
}
B716bd3:{NFSU2_TR(0x716bd3);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B716bd6:{NFSU2_TR(0x716bd6);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B716bd9:{NFSU2_TR(0x716bd9);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B716bdc:{NFSU2_TR(0x716bdc);
__builtin_memmove((R+4448),(R+4352),8);
}
B716bdf:{NFSU2_TR(0x716bdf);
{wv<8>((R+4400),uo::paddusb<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B716be2:{NFSU2_TR(0x716be2);
__builtin_memmove((R+4416),(R+4352),8);
}
B716be5:{NFSU2_TR(0x716be5);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B716be8:{NFSU2_TR(0x716be8);
__builtin_memmove((R+4432),gp(0x817660),8);
}
B716bef:{NFSU2_TR(0x716bef);
u8 U[8];
__builtin_memmove((U+0),gp(0x817630),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B716bf6:{NFSU2_TR(0x716bf6);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B716bf9:{NFSU2_TR(0x716bf9);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B716bfc:{NFSU2_TR(0x716bfc);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B716bff:{NFSU2_TR(0x716bff);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B716c02:{NFSU2_TR(0x716c02);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B716c05:{NFSU2_TR(0x716c05);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B716c08:{NFSU2_TR(0x716c08);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B716c0b:{NFSU2_TR(0x716c0b);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B716c0e:{NFSU2_TR(0x716c0e);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B716c11:{NFSU2_TR(0x716c11);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B716c14:{NFSU2_TR(0x716c14);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x8ull)));}
}
B716c18:{NFSU2_TR(0x716c18);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B716c1b:{NFSU2_TR(0x716c1b);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4452),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4453),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4454),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4455),1);
}
B716c1e:{NFSU2_TR(0x716c1e);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x8ull)));}
}
B716c22:{NFSU2_TR(0x716c22);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B716c26:{NFSU2_TR(0x716c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B716c29:{NFSU2_TR(0x716c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B716c2c:{NFSU2_TR(0x716c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B716c2f:{NFSU2_TR(0x716c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B716c32:{NFSU2_TR(0x716c32);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B716c36:{NFSU2_TR(0x716c36);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B716c39:{NFSU2_TR(0x716c39);
__builtin_memmove((R+4368),(R+4352),8);
}
B716c3c:{NFSU2_TR(0x716c3c);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B716c3f:{NFSU2_TR(0x716c3f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B716c42:{NFSU2_TR(0x716c42);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B716c45:{NFSU2_TR(0x716c45);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B716c49:{NFSU2_TR(0x716c49);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B716c4c:{NFSU2_TR(0x716c4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B716c50:{NFSU2_TR(0x716c50);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B716c53:{NFSU2_TR(0x716c53);
__builtin_memmove((R+4400),(R+4384),8);
}
B716c56:{NFSU2_TR(0x716c56);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716c59:{NFSU2_TR(0x716c59);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716c5d:{NFSU2_TR(0x716c5d);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716c60:{NFSU2_TR(0x716c60);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716c63:{NFSU2_TR(0x716c63);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716c66:{NFSU2_TR(0x716c66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716c6a:{NFSU2_TR(0x716c6a);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716c6d:{NFSU2_TR(0x716c6d);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716c70:{NFSU2_TR(0x716c70);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716c73:{NFSU2_TR(0x716c73);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716c77:{NFSU2_TR(0x716c77);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716c7a:{NFSU2_TR(0x716c7a);
__builtin_memmove((R+4400),(R+4384),8);
}
B716c7d:{NFSU2_TR(0x716c7d);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716c80:{NFSU2_TR(0x716c80);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B716c83:{NFSU2_TR(0x716c83);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716c86:{NFSU2_TR(0x716c86);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716c89:{NFSU2_TR(0x716c89);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716c8c:{NFSU2_TR(0x716c8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716c90:{NFSU2_TR(0x716c90);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716c93:{NFSU2_TR(0x716c93);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716c96:{NFSU2_TR(0x716c96);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716c99:{NFSU2_TR(0x716c99);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716c9d:{NFSU2_TR(0x716c9d);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716ca0:{NFSU2_TR(0x716ca0);
__builtin_memmove((R+4400),(R+4384),8);
}
B716ca3:{NFSU2_TR(0x716ca3);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716ca6:{NFSU2_TR(0x716ca6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716cad:{NFSU2_TR(0x716cad);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716cb0:{NFSU2_TR(0x716cb0);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716cb3:{NFSU2_TR(0x716cb3);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716cb6:{NFSU2_TR(0x716cb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716cbd:{NFSU2_TR(0x716cbd);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716cc0:{NFSU2_TR(0x716cc0);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716cc3:{NFSU2_TR(0x716cc3);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716cc6:{NFSU2_TR(0x716cc6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B716cc9:{NFSU2_TR(0x716cc9);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716ccc:{NFSU2_TR(0x716ccc);
__builtin_memmove((R+4400),(R+4384),8);
}
B716ccf:{NFSU2_TR(0x716ccf);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716cd2:{NFSU2_TR(0x716cd2);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B716cd9:{NFSU2_TR(0x716cd9);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716cdc:{NFSU2_TR(0x716cdc);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B716cdf:{NFSU2_TR(0x716cdf);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716ce2:{NFSU2_TR(0x716ce2);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B716ce9:{NFSU2_TR(0x716ce9);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716cec:{NFSU2_TR(0x716cec);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B716cef:{NFSU2_TR(0x716cef);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716cf2:{NFSU2_TR(0x716cf2);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B716cf9:{NFSU2_TR(0x716cf9);
__builtin_memmove((R+4464),(R+4448),8);
}
B716cfc:{NFSU2_TR(0x716cfc);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B716cff:{NFSU2_TR(0x716cff);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716d02:{NFSU2_TR(0x716d02);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B716d06:{NFSU2_TR(0x716d06);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B716d09:{NFSU2_TR(0x716d09);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B716d0c:{NFSU2_TR(0x716d0c);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B716d0f:{NFSU2_TR(0x716d0f);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B716d12:{NFSU2_TR(0x716d12);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B716d15:{NFSU2_TR(0x716d15);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B716d19:{NFSU2_TR(0x716d19);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B716d1d:{NFSU2_TR(0x716d1d);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B716d20:{NFSU2_TR(0x716d20);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B716d23:{NFSU2_TR(0x716d23);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B716d25:{NFSU2_TR(0x716d25);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B716d27:{NFSU2_TR(0x716d27);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B716d2a:{NFSU2_TR(0x716d2a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B716d2d:{NFSU2_TR(0x716d2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B716d31:{NFSU2_TR(0x716d31);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B716d34:{NFSU2_TR(0x716d34);
__builtin_memmove((R+4368),(R+4352),8);
}
B716d37:{NFSU2_TR(0x716d37);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B716d3a:{NFSU2_TR(0x716d3a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B716d3d:{NFSU2_TR(0x716d3d);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B716d40:{NFSU2_TR(0x716d40);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B716d44:{NFSU2_TR(0x716d44);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B716d47:{NFSU2_TR(0x716d47);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B716d4b:{NFSU2_TR(0x716d4b);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B716d4e:{NFSU2_TR(0x716d4e);
__builtin_memmove((R+4400),(R+4384),8);
}
B716d51:{NFSU2_TR(0x716d51);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716d54:{NFSU2_TR(0x716d54);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716d58:{NFSU2_TR(0x716d58);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716d5b:{NFSU2_TR(0x716d5b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716d5e:{NFSU2_TR(0x716d5e);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716d61:{NFSU2_TR(0x716d61);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716d65:{NFSU2_TR(0x716d65);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716d68:{NFSU2_TR(0x716d68);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716d6b:{NFSU2_TR(0x716d6b);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716d6e:{NFSU2_TR(0x716d6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716d72:{NFSU2_TR(0x716d72);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716d75:{NFSU2_TR(0x716d75);
__builtin_memmove((R+4400),(R+4384),8);
}
B716d78:{NFSU2_TR(0x716d78);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716d7b:{NFSU2_TR(0x716d7b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B716d7e:{NFSU2_TR(0x716d7e);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716d81:{NFSU2_TR(0x716d81);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716d84:{NFSU2_TR(0x716d84);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716d87:{NFSU2_TR(0x716d87);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716d8b:{NFSU2_TR(0x716d8b);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716d8e:{NFSU2_TR(0x716d8e);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716d91:{NFSU2_TR(0x716d91);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716d94:{NFSU2_TR(0x716d94);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716d98:{NFSU2_TR(0x716d98);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716d9b:{NFSU2_TR(0x716d9b);
__builtin_memmove((R+4400),(R+4384),8);
}
B716d9e:{NFSU2_TR(0x716d9e);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716da1:{NFSU2_TR(0x716da1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716da8:{NFSU2_TR(0x716da8);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716dab:{NFSU2_TR(0x716dab);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716dae:{NFSU2_TR(0x716dae);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716db1:{NFSU2_TR(0x716db1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716db8:{NFSU2_TR(0x716db8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716dbb:{NFSU2_TR(0x716dbb);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716dbe:{NFSU2_TR(0x716dbe);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716dc1:{NFSU2_TR(0x716dc1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B716dc4:{NFSU2_TR(0x716dc4);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716dc7:{NFSU2_TR(0x716dc7);
__builtin_memmove((R+4400),(R+4384),8);
}
B716dca:{NFSU2_TR(0x716dca);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716dcd:{NFSU2_TR(0x716dcd);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B716dd4:{NFSU2_TR(0x716dd4);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716dd7:{NFSU2_TR(0x716dd7);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B716dda:{NFSU2_TR(0x716dda);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716ddd:{NFSU2_TR(0x716ddd);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B716de4:{NFSU2_TR(0x716de4);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716de7:{NFSU2_TR(0x716de7);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B716dea:{NFSU2_TR(0x716dea);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716ded:{NFSU2_TR(0x716ded);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B716df4:{NFSU2_TR(0x716df4);
__builtin_memmove((R+4464),(R+4448),8);
}
B716df7:{NFSU2_TR(0x716df7);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B716dfa:{NFSU2_TR(0x716dfa);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716dfd:{NFSU2_TR(0x716dfd);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B716e01:{NFSU2_TR(0x716e01);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B716e04:{NFSU2_TR(0x716e04);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B716e07:{NFSU2_TR(0x716e07);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B716e0a:{NFSU2_TR(0x716e0a);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B716e0d:{NFSU2_TR(0x716e0d);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B716e10:{NFSU2_TR(0x716e10);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B716e14:{NFSU2_TR(0x716e14);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B716e18:{NFSU2_TR(0x716e18);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B716e1b:{NFSU2_TR(0x716e1b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B716e1e:{NFSU2_TR(0x716e1e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B716e20:{NFSU2_TR(0x716e20);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B716e22:{NFSU2_TR(0x716e22);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B716e25:{NFSU2_TR(0x716e25);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B716e28:{NFSU2_TR(0x716e28);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B716e2c:{NFSU2_TR(0x716e2c);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B716e2f:{NFSU2_TR(0x716e2f);
__builtin_memmove((R+4368),(R+4352),8);
}
B716e32:{NFSU2_TR(0x716e32);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B716e35:{NFSU2_TR(0x716e35);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B716e38:{NFSU2_TR(0x716e38);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B716e3b:{NFSU2_TR(0x716e3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B716e3f:{NFSU2_TR(0x716e3f);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B716e42:{NFSU2_TR(0x716e42);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B716e46:{NFSU2_TR(0x716e46);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B716e49:{NFSU2_TR(0x716e49);
__builtin_memmove((R+4400),(R+4384),8);
}
B716e4c:{NFSU2_TR(0x716e4c);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716e4f:{NFSU2_TR(0x716e4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716e53:{NFSU2_TR(0x716e53);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716e56:{NFSU2_TR(0x716e56);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716e59:{NFSU2_TR(0x716e59);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716e5c:{NFSU2_TR(0x716e5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716e60:{NFSU2_TR(0x716e60);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716e63:{NFSU2_TR(0x716e63);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716e66:{NFSU2_TR(0x716e66);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716e69:{NFSU2_TR(0x716e69);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716e6d:{NFSU2_TR(0x716e6d);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716e70:{NFSU2_TR(0x716e70);
__builtin_memmove((R+4400),(R+4384),8);
}
B716e73:{NFSU2_TR(0x716e73);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716e76:{NFSU2_TR(0x716e76);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B716e79:{NFSU2_TR(0x716e79);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716e7c:{NFSU2_TR(0x716e7c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716e7f:{NFSU2_TR(0x716e7f);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716e82:{NFSU2_TR(0x716e82);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716e86:{NFSU2_TR(0x716e86);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716e89:{NFSU2_TR(0x716e89);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716e8c:{NFSU2_TR(0x716e8c);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716e8f:{NFSU2_TR(0x716e8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716e93:{NFSU2_TR(0x716e93);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716e96:{NFSU2_TR(0x716e96);
__builtin_memmove((R+4400),(R+4384),8);
}
B716e99:{NFSU2_TR(0x716e99);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716e9c:{NFSU2_TR(0x716e9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716ea3:{NFSU2_TR(0x716ea3);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716ea6:{NFSU2_TR(0x716ea6);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716ea9:{NFSU2_TR(0x716ea9);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716eac:{NFSU2_TR(0x716eac);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716eb3:{NFSU2_TR(0x716eb3);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716eb6:{NFSU2_TR(0x716eb6);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716eb9:{NFSU2_TR(0x716eb9);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716ebc:{NFSU2_TR(0x716ebc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B716ebf:{NFSU2_TR(0x716ebf);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716ec2:{NFSU2_TR(0x716ec2);
__builtin_memmove((R+4400),(R+4384),8);
}
B716ec5:{NFSU2_TR(0x716ec5);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716ec8:{NFSU2_TR(0x716ec8);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B716ecf:{NFSU2_TR(0x716ecf);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716ed2:{NFSU2_TR(0x716ed2);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B716ed5:{NFSU2_TR(0x716ed5);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716ed8:{NFSU2_TR(0x716ed8);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B716edf:{NFSU2_TR(0x716edf);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716ee2:{NFSU2_TR(0x716ee2);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B716ee5:{NFSU2_TR(0x716ee5);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716ee8:{NFSU2_TR(0x716ee8);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B716eef:{NFSU2_TR(0x716eef);
__builtin_memmove((R+4464),(R+4448),8);
}
B716ef2:{NFSU2_TR(0x716ef2);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B716ef5:{NFSU2_TR(0x716ef5);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716ef8:{NFSU2_TR(0x716ef8);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B716efc:{NFSU2_TR(0x716efc);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B716eff:{NFSU2_TR(0x716eff);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B716f02:{NFSU2_TR(0x716f02);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B716f05:{NFSU2_TR(0x716f05);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B716f08:{NFSU2_TR(0x716f08);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B716f0b:{NFSU2_TR(0x716f0b);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B716f0f:{NFSU2_TR(0x716f0f);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B716f13:{NFSU2_TR(0x716f13);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B716f16:{NFSU2_TR(0x716f16);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B716f19:{NFSU2_TR(0x716f19);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B716f1b:{NFSU2_TR(0x716f1b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B716f1d:{NFSU2_TR(0x716f1d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B716f20:{NFSU2_TR(0x716f20);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B716f23:{NFSU2_TR(0x716f23);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B716f27:{NFSU2_TR(0x716f27);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B716f2a:{NFSU2_TR(0x716f2a);
__builtin_memmove((R+4368),(R+4352),8);
}
B716f2d:{NFSU2_TR(0x716f2d);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B716f30:{NFSU2_TR(0x716f30);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B716f33:{NFSU2_TR(0x716f33);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B716f36:{NFSU2_TR(0x716f36);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B716f3a:{NFSU2_TR(0x716f3a);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B716f3d:{NFSU2_TR(0x716f3d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B716f41:{NFSU2_TR(0x716f41);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B716f44:{NFSU2_TR(0x716f44);
__builtin_memmove((R+4400),(R+4384),8);
}
B716f47:{NFSU2_TR(0x716f47);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716f4a:{NFSU2_TR(0x716f4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716f4e:{NFSU2_TR(0x716f4e);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716f51:{NFSU2_TR(0x716f51);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716f54:{NFSU2_TR(0x716f54);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716f57:{NFSU2_TR(0x716f57);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716f5b:{NFSU2_TR(0x716f5b);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716f5e:{NFSU2_TR(0x716f5e);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716f61:{NFSU2_TR(0x716f61);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716f64:{NFSU2_TR(0x716f64);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716f68:{NFSU2_TR(0x716f68);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716f6b:{NFSU2_TR(0x716f6b);
__builtin_memmove((R+4400),(R+4384),8);
}
B716f6e:{NFSU2_TR(0x716f6e);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716f71:{NFSU2_TR(0x716f71);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B716f74:{NFSU2_TR(0x716f74);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716f77:{NFSU2_TR(0x716f77);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716f7a:{NFSU2_TR(0x716f7a);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716f7d:{NFSU2_TR(0x716f7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716f81:{NFSU2_TR(0x716f81);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716f84:{NFSU2_TR(0x716f84);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716f87:{NFSU2_TR(0x716f87);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716f8a:{NFSU2_TR(0x716f8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B716f8e:{NFSU2_TR(0x716f8e);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716f91:{NFSU2_TR(0x716f91);
__builtin_memmove((R+4400),(R+4384),8);
}
B716f94:{NFSU2_TR(0x716f94);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716f97:{NFSU2_TR(0x716f97);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716f9e:{NFSU2_TR(0x716f9e);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716fa1:{NFSU2_TR(0x716fa1);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B716fa4:{NFSU2_TR(0x716fa4);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716fa7:{NFSU2_TR(0x716fa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B716fae:{NFSU2_TR(0x716fae);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716fb1:{NFSU2_TR(0x716fb1);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B716fb4:{NFSU2_TR(0x716fb4);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716fb7:{NFSU2_TR(0x716fb7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B716fba:{NFSU2_TR(0x716fba);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716fbd:{NFSU2_TR(0x716fbd);
__builtin_memmove((R+4400),(R+4384),8);
}
B716fc0:{NFSU2_TR(0x716fc0);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B716fc3:{NFSU2_TR(0x716fc3);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B716fca:{NFSU2_TR(0x716fca);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B716fcd:{NFSU2_TR(0x716fcd);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B716fd0:{NFSU2_TR(0x716fd0);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B716fd3:{NFSU2_TR(0x716fd3);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B716fda:{NFSU2_TR(0x716fda);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B716fdd:{NFSU2_TR(0x716fdd);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B716fe0:{NFSU2_TR(0x716fe0);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B716fe3:{NFSU2_TR(0x716fe3);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B716fea:{NFSU2_TR(0x716fea);
__builtin_memmove((R+4464),(R+4448),8);
}
B716fed:{NFSU2_TR(0x716fed);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B716ff0:{NFSU2_TR(0x716ff0);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B716ff3:{NFSU2_TR(0x716ff3);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B716ff7:{NFSU2_TR(0x716ff7);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B716ffa:{NFSU2_TR(0x716ffa);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B716ffd:{NFSU2_TR(0x716ffd);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
TAIL_STATIC(0x717000u,717);
}
XIT:NFSU2_TR_EXIT(0x716,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
