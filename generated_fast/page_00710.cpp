#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_70f(u8* __restrict R,Cpu& c);
u32 body_711(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x710,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x710,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_710(u8* __restrict R,Cpu& c);
u32 page_710(Cpu& c){return body_710(c.regs.data(),c);}
__attribute__((noinline)) u32 body_710(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x710002:goto L710002;
case 0x710006:c.instructions+=55;goto B710006;
case 0x71000b:c.instructions+=54;goto B71000b;
case 0x71000f:c.instructions+=53;goto B71000f;
case 0x710013:c.instructions+=52;goto B710013;
case 0x710018:c.instructions+=51;goto B710018;
case 0x71001c:c.instructions+=50;goto B71001c;
case 0x710020:c.instructions+=49;goto B710020;
case 0x710024:c.instructions+=48;goto B710024;
case 0x710029:c.instructions+=47;goto B710029;
case 0x71002a:c.instructions+=46;goto B71002a;
case 0x71002b:c.instructions+=45;goto B71002b;
case 0x71002c:c.instructions+=44;goto B71002c;
case 0x71002d:c.instructions+=43;goto B71002d;
case 0x71002e:c.instructions+=42;goto B71002e;
case 0x71002f:c.instructions+=41;goto B71002f;
case 0x710032:c.instructions+=40;goto B710032;
case 0x710035:c.instructions+=39;goto B710035;
case 0x710038:c.instructions+=38;goto B710038;
case 0x71003c:c.instructions+=37;goto B71003c;
case 0x71003f:c.instructions+=36;goto B71003f;
case 0x710043:c.instructions+=35;goto B710043;
case 0x710045:c.instructions+=34;goto B710045;
case 0x710049:c.instructions+=33;goto B710049;
case 0x71004b:c.instructions+=32;goto B71004b;
case 0x71004f:c.instructions+=31;goto B71004f;
case 0x710051:c.instructions+=30;goto B710051;
case 0x710055:c.instructions+=29;goto B710055;
case 0x710057:c.instructions+=28;goto B710057;
case 0x71005b:c.instructions+=27;goto B71005b;
case 0x71005d:c.instructions+=26;goto B71005d;
case 0x710061:c.instructions+=25;goto B710061;
case 0x710063:c.instructions+=24;goto B710063;
case 0x710067:c.instructions+=23;goto B710067;
case 0x710069:c.instructions+=22;goto B710069;
case 0x71006b:c.instructions+=21;goto B71006b;
case 0x71006e:c.instructions+=20;goto B71006e;
case 0x710071:c.instructions+=19;goto B710071;
case 0x710075:c.instructions+=18;goto B710075;
case 0x710077:c.instructions+=17;goto B710077;
case 0x71007b:c.instructions+=16;goto B71007b;
case 0x71007d:c.instructions+=15;goto B71007d;
case 0x710081:c.instructions+=14;goto B710081;
case 0x710083:c.instructions+=13;goto B710083;
case 0x710087:c.instructions+=12;goto B710087;
case 0x710089:c.instructions+=11;goto B710089;
case 0x71008d:c.instructions+=10;goto B71008d;
case 0x71008f:c.instructions+=9;goto B71008f;
case 0x710093:c.instructions+=8;goto B710093;
case 0x710095:c.instructions+=7;goto B710095;
case 0x710099:c.instructions+=6;goto B710099;
case 0x71009b:c.instructions+=5;goto B71009b;
case 0x71009f:c.instructions+=4;goto B71009f;
case 0x7100a1:c.instructions+=3;goto B7100a1;
case 0x7100a3:c.instructions+=2;goto B7100a3;
case 0x7100a6:c.instructions+=1;goto B7100a6;
case 0x7100a8:goto L7100a8;
case 0x7100a9:c.instructions+=34;goto B7100a9;
case 0x7100aa:c.instructions+=33;goto B7100aa;
case 0x7100ab:c.instructions+=32;goto B7100ab;
case 0x7100ae:c.instructions+=31;goto B7100ae;
case 0x7100b1:c.instructions+=30;goto B7100b1;
case 0x7100b2:c.instructions+=29;goto B7100b2;
case 0x7100b5:c.instructions+=28;goto B7100b5;
case 0x7100b7:c.instructions+=27;goto B7100b7;
case 0x7100b9:c.instructions+=26;goto B7100b9;
case 0x7100bc:c.instructions+=25;goto B7100bc;
case 0x7100bf:c.instructions+=24;goto B7100bf;
case 0x7100c3:c.instructions+=23;goto B7100c3;
case 0x7100c6:c.instructions+=22;goto B7100c6;
case 0x7100ca:c.instructions+=21;goto B7100ca;
case 0x7100ce:c.instructions+=20;goto B7100ce;
case 0x7100d2:c.instructions+=19;goto B7100d2;
case 0x7100d5:c.instructions+=18;goto B7100d5;
case 0x7100d9:c.instructions+=17;goto B7100d9;
case 0x7100dc:c.instructions+=16;goto B7100dc;
case 0x7100e0:c.instructions+=15;goto B7100e0;
case 0x7100e4:c.instructions+=14;goto B7100e4;
case 0x7100e7:c.instructions+=13;goto B7100e7;
case 0x7100eb:c.instructions+=12;goto B7100eb;
case 0x7100ee:c.instructions+=11;goto B7100ee;
case 0x7100f2:c.instructions+=10;goto B7100f2;
case 0x7100f5:c.instructions+=9;goto B7100f5;
case 0x7100f9:c.instructions+=8;goto B7100f9;
case 0x7100fd:c.instructions+=7;goto B7100fd;
case 0x710101:c.instructions+=6;goto B710101;
case 0x710104:c.instructions+=5;goto B710104;
case 0x710108:c.instructions+=4;goto B710108;
case 0x710109:c.instructions+=3;goto B710109;
case 0x71010a:c.instructions+=2;goto B71010a;
case 0x71010b:c.instructions+=1;goto B71010b;
case 0x71010c:goto L71010c;
case 0x710110:c.instructions+=5;goto B710110;
case 0x710114:c.instructions+=4;goto B710114;
case 0x710117:c.instructions+=3;goto B710117;
case 0x71011b:c.instructions+=2;goto B71011b;
case 0x71011e:c.instructions+=1;goto B71011e;
case 0x710124:goto L710124;
case 0x710127:c.instructions+=16;goto B710127;
case 0x71012a:c.instructions+=15;goto B71012a;
case 0x71012d:c.instructions+=14;goto B71012d;
case 0x71012f:c.instructions+=13;goto B71012f;
case 0x710130:c.instructions+=12;goto B710130;
case 0x710132:c.instructions+=11;goto B710132;
case 0x710135:c.instructions+=10;goto B710135;
case 0x710138:c.instructions+=9;goto B710138;
case 0x71013a:c.instructions+=8;goto B71013a;
case 0x71013d:c.instructions+=7;goto B71013d;
case 0x710140:c.instructions+=6;goto B710140;
case 0x710141:c.instructions+=5;goto B710141;
case 0x710144:c.instructions+=4;goto B710144;
case 0x710146:c.instructions+=3;goto B710146;
case 0x710149:c.instructions+=2;goto B710149;
case 0x71014b:c.instructions+=1;goto B71014b;
case 0x710150:goto L710150;
case 0x710153:c.instructions+=9;goto B710153;
case 0x710156:c.instructions+=8;goto B710156;
case 0x710158:c.instructions+=7;goto B710158;
case 0x71015b:c.instructions+=6;goto B71015b;
case 0x71015e:c.instructions+=5;goto B71015e;
case 0x710162:c.instructions+=4;goto B710162;
case 0x710165:c.instructions+=3;goto B710165;
case 0x710168:c.instructions+=2;goto B710168;
case 0x71016b:c.instructions+=1;goto B71016b;
case 0x710171:goto L710171;
case 0x710175:c.instructions+=6;goto B710175;
case 0x710179:c.instructions+=5;goto B710179;
case 0x71017d:c.instructions+=4;goto B71017d;
case 0x710181:c.instructions+=3;goto B710181;
case 0x710184:c.instructions+=2;goto B710184;
case 0x710186:c.instructions+=1;goto B710186;
case 0x710189:goto L710189;
case 0x71018e:c.instructions+=7;goto B71018e;
case 0x710196:c.instructions+=6;goto B710196;
case 0x71019a:c.instructions+=5;goto B71019a;
case 0x71019d:c.instructions+=4;goto B71019d;
case 0x7101a5:c.instructions+=3;goto B7101a5;
case 0x7101a6:c.instructions+=2;goto B7101a6;
case 0x7101a9:c.instructions+=1;goto B7101a9;
case 0x7101ab:goto L7101ab;
case 0x7101ac:c.instructions+=675;goto B7101ac;
case 0x7101ad:c.instructions+=674;goto B7101ad;
case 0x7101ae:c.instructions+=673;goto B7101ae;
case 0x7101af:c.instructions+=672;goto B7101af;
case 0x7101b0:c.instructions+=671;goto B7101b0;
case 0x7101b1:c.instructions+=670;goto B7101b1;
case 0x7101b5:c.instructions+=669;goto B7101b5;
case 0x7101bc:c.instructions+=668;goto B7101bc;
case 0x7101bf:c.instructions+=667;goto B7101bf;
case 0x7101c2:c.instructions+=666;goto B7101c2;
case 0x7101c6:c.instructions+=665;goto B7101c6;
case 0x7101ca:c.instructions+=664;goto B7101ca;
case 0x7101cd:c.instructions+=663;goto B7101cd;
case 0x7101cf:c.instructions+=662;goto B7101cf;
case 0x7101d2:c.instructions+=661;goto B7101d2;
case 0x7101d8:c.instructions+=660;goto B7101d8;
case 0x7101de:c.instructions+=659;goto B7101de;
case 0x7101e1:c.instructions+=658;goto B7101e1;
case 0x7101e3:c.instructions+=657;goto B7101e3;
case 0x7101e6:c.instructions+=656;goto B7101e6;
case 0x7101ea:c.instructions+=655;goto B7101ea;
case 0x7101ee:c.instructions+=654;goto B7101ee;
case 0x7101f1:c.instructions+=653;goto B7101f1;
case 0x7101f5:c.instructions+=652;goto B7101f5;
case 0x7101f8:c.instructions+=651;goto B7101f8;
case 0x7101fb:c.instructions+=650;goto B7101fb;
case 0x7101fe:c.instructions+=649;goto B7101fe;
case 0x710201:c.instructions+=648;goto B710201;
case 0x710204:c.instructions+=647;goto B710204;
case 0x710207:c.instructions+=646;goto B710207;
case 0x71020a:c.instructions+=645;goto B71020a;
case 0x71020d:c.instructions+=644;goto B71020d;
case 0x710210:c.instructions+=643;goto B710210;
case 0x710213:c.instructions+=642;goto B710213;
case 0x710216:c.instructions+=641;goto B710216;
case 0x710219:c.instructions+=640;goto B710219;
case 0x71021c:c.instructions+=639;goto B71021c;
case 0x71021f:c.instructions+=638;goto B71021f;
case 0x710222:c.instructions+=637;goto B710222;
case 0x710226:c.instructions+=636;goto B710226;
case 0x710229:c.instructions+=635;goto B710229;
case 0x71022c:c.instructions+=634;goto B71022c;
case 0x710230:c.instructions+=633;goto B710230;
case 0x710233:c.instructions+=632;goto B710233;
case 0x710236:c.instructions+=631;goto B710236;
case 0x71023a:c.instructions+=630;goto B71023a;
case 0x71023d:c.instructions+=629;goto B71023d;
case 0x710240:c.instructions+=628;goto B710240;
case 0x710244:c.instructions+=627;goto B710244;
case 0x710247:c.instructions+=626;goto B710247;
case 0x71024a:c.instructions+=625;goto B71024a;
case 0x71024e:c.instructions+=624;goto B71024e;
case 0x710251:c.instructions+=623;goto B710251;
case 0x710254:c.instructions+=622;goto B710254;
case 0x710258:c.instructions+=621;goto B710258;
case 0x71025b:c.instructions+=620;goto B71025b;
case 0x71025f:c.instructions+=619;goto B71025f;
case 0x710263:c.instructions+=618;goto B710263;
case 0x710267:c.instructions+=617;goto B710267;
case 0x71026a:c.instructions+=616;goto B71026a;
case 0x710271:c.instructions+=615;goto B710271;
case 0x710274:c.instructions+=614;goto B710274;
case 0x710278:c.instructions+=613;goto B710278;
case 0x71027b:c.instructions+=612;goto B71027b;
case 0x71027e:c.instructions+=611;goto B71027e;
case 0x710281:c.instructions+=610;goto B710281;
case 0x710284:c.instructions+=609;goto B710284;
case 0x710287:c.instructions+=608;goto B710287;
case 0x71028a:c.instructions+=607;goto B71028a;
case 0x71028d:c.instructions+=606;goto B71028d;
case 0x710290:c.instructions+=605;goto B710290;
case 0x710293:c.instructions+=604;goto B710293;
case 0x710296:c.instructions+=603;goto B710296;
case 0x710299:c.instructions+=602;goto B710299;
case 0x71029c:c.instructions+=601;goto B71029c;
case 0x71029f:c.instructions+=600;goto B71029f;
case 0x7102a3:c.instructions+=599;goto B7102a3;
case 0x7102a6:c.instructions+=598;goto B7102a6;
case 0x7102a9:c.instructions+=597;goto B7102a9;
case 0x7102ad:c.instructions+=596;goto B7102ad;
case 0x7102b0:c.instructions+=595;goto B7102b0;
case 0x7102b3:c.instructions+=594;goto B7102b3;
case 0x7102b7:c.instructions+=593;goto B7102b7;
case 0x7102ba:c.instructions+=592;goto B7102ba;
case 0x7102bd:c.instructions+=591;goto B7102bd;
case 0x7102c1:c.instructions+=590;goto B7102c1;
case 0x7102c4:c.instructions+=589;goto B7102c4;
case 0x7102c7:c.instructions+=588;goto B7102c7;
case 0x7102cb:c.instructions+=587;goto B7102cb;
case 0x7102ce:c.instructions+=586;goto B7102ce;
case 0x7102d1:c.instructions+=585;goto B7102d1;
case 0x7102d5:c.instructions+=584;goto B7102d5;
case 0x7102d9:c.instructions+=583;goto B7102d9;
case 0x7102e0:c.instructions+=582;goto B7102e0;
case 0x7102e3:c.instructions+=581;goto B7102e3;
case 0x7102e7:c.instructions+=580;goto B7102e7;
case 0x7102eb:c.instructions+=579;goto B7102eb;
case 0x7102ef:c.instructions+=578;goto B7102ef;
case 0x7102f3:c.instructions+=577;goto B7102f3;
case 0x7102f6:c.instructions+=576;goto B7102f6;
case 0x7102f9:c.instructions+=575;goto B7102f9;
case 0x7102fc:c.instructions+=574;goto B7102fc;
case 0x7102ff:c.instructions+=573;goto B7102ff;
case 0x710302:c.instructions+=572;goto B710302;
case 0x710305:c.instructions+=571;goto B710305;
case 0x710308:c.instructions+=570;goto B710308;
case 0x71030b:c.instructions+=569;goto B71030b;
case 0x71030f:c.instructions+=568;goto B71030f;
case 0x710313:c.instructions+=567;goto B710313;
case 0x710316:c.instructions+=566;goto B710316;
case 0x710319:c.instructions+=565;goto B710319;
case 0x71031c:c.instructions+=564;goto B71031c;
case 0x71031f:c.instructions+=563;goto B71031f;
case 0x710322:c.instructions+=562;goto B710322;
case 0x710325:c.instructions+=561;goto B710325;
case 0x710328:c.instructions+=560;goto B710328;
case 0x71032b:c.instructions+=559;goto B71032b;
case 0x71032f:c.instructions+=558;goto B71032f;
case 0x710333:c.instructions+=557;goto B710333;
case 0x710336:c.instructions+=556;goto B710336;
case 0x710339:c.instructions+=555;goto B710339;
case 0x71033c:c.instructions+=554;goto B71033c;
case 0x71033f:c.instructions+=553;goto B71033f;
case 0x710342:c.instructions+=552;goto B710342;
case 0x710345:c.instructions+=551;goto B710345;
case 0x710348:c.instructions+=550;goto B710348;
case 0x71034b:c.instructions+=549;goto B71034b;
case 0x71034f:c.instructions+=548;goto B71034f;
case 0x710356:c.instructions+=547;goto B710356;
case 0x710359:c.instructions+=546;goto B710359;
case 0x71035c:c.instructions+=545;goto B71035c;
case 0x71035f:c.instructions+=544;goto B71035f;
case 0x710362:c.instructions+=543;goto B710362;
case 0x710365:c.instructions+=542;goto B710365;
case 0x710368:c.instructions+=541;goto B710368;
case 0x71036b:c.instructions+=540;goto B71036b;
case 0x71036e:c.instructions+=539;goto B71036e;
case 0x710371:c.instructions+=538;goto B710371;
case 0x710375:c.instructions+=537;goto B710375;
case 0x710378:c.instructions+=536;goto B710378;
case 0x71037b:c.instructions+=535;goto B71037b;
case 0x71037e:c.instructions+=534;goto B71037e;
case 0x710381:c.instructions+=533;goto B710381;
case 0x710385:c.instructions+=532;goto B710385;
case 0x710389:c.instructions+=531;goto B710389;
case 0x71038d:c.instructions+=530;goto B71038d;
case 0x710391:c.instructions+=529;goto B710391;
case 0x710394:c.instructions+=528;goto B710394;
case 0x710397:c.instructions+=527;goto B710397;
case 0x71039a:c.instructions+=526;goto B71039a;
case 0x71039d:c.instructions+=525;goto B71039d;
case 0x7103a1:c.instructions+=524;goto B7103a1;
case 0x7103a5:c.instructions+=523;goto B7103a5;
case 0x7103a9:c.instructions+=522;goto B7103a9;
case 0x7103ac:c.instructions+=521;goto B7103ac;
case 0x7103af:c.instructions+=520;goto B7103af;
case 0x7103b2:c.instructions+=519;goto B7103b2;
case 0x7103b5:c.instructions+=518;goto B7103b5;
case 0x7103b9:c.instructions+=517;goto B7103b9;
case 0x7103bd:c.instructions+=516;goto B7103bd;
case 0x7103c1:c.instructions+=515;goto B7103c1;
case 0x7103c5:c.instructions+=514;goto B7103c5;
case 0x7103c9:c.instructions+=513;goto B7103c9;
case 0x7103cc:c.instructions+=512;goto B7103cc;
case 0x7103cf:c.instructions+=511;goto B7103cf;
case 0x7103d3:c.instructions+=510;goto B7103d3;
case 0x7103d6:c.instructions+=509;goto B7103d6;
case 0x7103d9:c.instructions+=508;goto B7103d9;
case 0x7103dc:c.instructions+=507;goto B7103dc;
case 0x7103df:c.instructions+=506;goto B7103df;
case 0x7103e2:c.instructions+=505;goto B7103e2;
case 0x7103e6:c.instructions+=504;goto B7103e6;
case 0x7103ea:c.instructions+=503;goto B7103ea;
case 0x7103ed:c.instructions+=502;goto B7103ed;
case 0x7103f0:c.instructions+=501;goto B7103f0;
case 0x7103f4:c.instructions+=500;goto B7103f4;
case 0x7103f8:c.instructions+=499;goto B7103f8;
case 0x7103fb:c.instructions+=498;goto B7103fb;
case 0x7103fe:c.instructions+=497;goto B7103fe;
case 0x710401:c.instructions+=496;goto B710401;
case 0x710404:c.instructions+=495;goto B710404;
case 0x710407:c.instructions+=494;goto B710407;
case 0x71040a:c.instructions+=493;goto B71040a;
case 0x71040d:c.instructions+=492;goto B71040d;
case 0x710410:c.instructions+=491;goto B710410;
case 0x710414:c.instructions+=490;goto B710414;
case 0x710418:c.instructions+=489;goto B710418;
case 0x71041b:c.instructions+=488;goto B71041b;
case 0x71041e:c.instructions+=487;goto B71041e;
case 0x710421:c.instructions+=486;goto B710421;
case 0x710424:c.instructions+=485;goto B710424;
case 0x710427:c.instructions+=484;goto B710427;
case 0x71042a:c.instructions+=483;goto B71042a;
case 0x71042d:c.instructions+=482;goto B71042d;
case 0x710430:c.instructions+=481;goto B710430;
case 0x710434:c.instructions+=480;goto B710434;
case 0x710438:c.instructions+=479;goto B710438;
case 0x71043b:c.instructions+=478;goto B71043b;
case 0x71043e:c.instructions+=477;goto B71043e;
case 0x710441:c.instructions+=476;goto B710441;
case 0x710444:c.instructions+=475;goto B710444;
case 0x710447:c.instructions+=474;goto B710447;
case 0x71044a:c.instructions+=473;goto B71044a;
case 0x71044d:c.instructions+=472;goto B71044d;
case 0x710450:c.instructions+=471;goto B710450;
case 0x710454:c.instructions+=470;goto B710454;
case 0x71045b:c.instructions+=469;goto B71045b;
case 0x71045e:c.instructions+=468;goto B71045e;
case 0x710461:c.instructions+=467;goto B710461;
case 0x710464:c.instructions+=466;goto B710464;
case 0x710467:c.instructions+=465;goto B710467;
case 0x71046a:c.instructions+=464;goto B71046a;
case 0x71046d:c.instructions+=463;goto B71046d;
case 0x710470:c.instructions+=462;goto B710470;
case 0x710473:c.instructions+=461;goto B710473;
case 0x710477:c.instructions+=460;goto B710477;
case 0x71047a:c.instructions+=459;goto B71047a;
case 0x71047d:c.instructions+=458;goto B71047d;
case 0x710480:c.instructions+=457;goto B710480;
case 0x710483:c.instructions+=456;goto B710483;
case 0x710487:c.instructions+=455;goto B710487;
case 0x71048b:c.instructions+=454;goto B71048b;
case 0x71048f:c.instructions+=453;goto B71048f;
case 0x710493:c.instructions+=452;goto B710493;
case 0x710496:c.instructions+=451;goto B710496;
case 0x710499:c.instructions+=450;goto B710499;
case 0x71049c:c.instructions+=449;goto B71049c;
case 0x71049f:c.instructions+=448;goto B71049f;
case 0x7104a3:c.instructions+=447;goto B7104a3;
case 0x7104a7:c.instructions+=446;goto B7104a7;
case 0x7104ab:c.instructions+=445;goto B7104ab;
case 0x7104ae:c.instructions+=444;goto B7104ae;
case 0x7104b1:c.instructions+=443;goto B7104b1;
case 0x7104b4:c.instructions+=442;goto B7104b4;
case 0x7104b7:c.instructions+=441;goto B7104b7;
case 0x7104bb:c.instructions+=440;goto B7104bb;
case 0x7104bf:c.instructions+=439;goto B7104bf;
case 0x7104c3:c.instructions+=438;goto B7104c3;
case 0x7104c7:c.instructions+=437;goto B7104c7;
case 0x7104cb:c.instructions+=436;goto B7104cb;
case 0x7104ce:c.instructions+=435;goto B7104ce;
case 0x7104d1:c.instructions+=434;goto B7104d1;
case 0x7104d5:c.instructions+=433;goto B7104d5;
case 0x7104d8:c.instructions+=432;goto B7104d8;
case 0x7104db:c.instructions+=431;goto B7104db;
case 0x7104de:c.instructions+=430;goto B7104de;
case 0x7104e1:c.instructions+=429;goto B7104e1;
case 0x7104e4:c.instructions+=428;goto B7104e4;
case 0x7104e8:c.instructions+=427;goto B7104e8;
case 0x7104ec:c.instructions+=426;goto B7104ec;
case 0x7104ef:c.instructions+=425;goto B7104ef;
case 0x7104f2:c.instructions+=424;goto B7104f2;
case 0x7104f5:c.instructions+=423;goto B7104f5;
case 0x7104f9:c.instructions+=422;goto B7104f9;
case 0x7104fc:c.instructions+=421;goto B7104fc;
case 0x7104ff:c.instructions+=420;goto B7104ff;
case 0x710502:c.instructions+=419;goto B710502;
case 0x710505:c.instructions+=418;goto B710505;
case 0x710508:c.instructions+=417;goto B710508;
case 0x71050c:c.instructions+=416;goto B71050c;
case 0x710510:c.instructions+=415;goto B710510;
case 0x710513:c.instructions+=414;goto B710513;
case 0x710516:c.instructions+=413;goto B710516;
case 0x710519:c.instructions+=412;goto B710519;
case 0x71051c:c.instructions+=411;goto B71051c;
case 0x710523:c.instructions+=410;goto B710523;
case 0x71052a:c.instructions+=409;goto B71052a;
case 0x71052d:c.instructions+=408;goto B71052d;
case 0x710530:c.instructions+=407;goto B710530;
case 0x710533:c.instructions+=406;goto B710533;
case 0x710536:c.instructions+=405;goto B710536;
case 0x710539:c.instructions+=404;goto B710539;
case 0x71053d:c.instructions+=403;goto B71053d;
case 0x710541:c.instructions+=402;goto B710541;
case 0x710544:c.instructions+=401;goto B710544;
case 0x710547:c.instructions+=400;goto B710547;
case 0x71054a:c.instructions+=399;goto B71054a;
case 0x71054d:c.instructions+=398;goto B71054d;
case 0x710550:c.instructions+=397;goto B710550;
case 0x710553:c.instructions+=396;goto B710553;
case 0x710556:c.instructions+=395;goto B710556;
case 0x71055a:c.instructions+=394;goto B71055a;
case 0x71055e:c.instructions+=393;goto B71055e;
case 0x710562:c.instructions+=392;goto B710562;
case 0x710566:c.instructions+=391;goto B710566;
case 0x71056d:c.instructions+=390;goto B71056d;
case 0x710570:c.instructions+=389;goto B710570;
case 0x710573:c.instructions+=388;goto B710573;
case 0x710577:c.instructions+=387;goto B710577;
case 0x71057a:c.instructions+=386;goto B71057a;
case 0x71057e:c.instructions+=385;goto B71057e;
case 0x710582:c.instructions+=384;goto B710582;
case 0x710586:c.instructions+=383;goto B710586;
case 0x71058a:c.instructions+=382;goto B71058a;
case 0x71058d:c.instructions+=381;goto B71058d;
case 0x710590:c.instructions+=380;goto B710590;
case 0x710593:c.instructions+=379;goto B710593;
case 0x710596:c.instructions+=378;goto B710596;
case 0x71059a:c.instructions+=377;goto B71059a;
case 0x71059d:c.instructions+=376;goto B71059d;
case 0x7105a1:c.instructions+=375;goto B7105a1;
case 0x7105a4:c.instructions+=374;goto B7105a4;
case 0x7105a7:c.instructions+=373;goto B7105a7;
case 0x7105aa:c.instructions+=372;goto B7105aa;
case 0x7105ae:c.instructions+=371;goto B7105ae;
case 0x7105b2:c.instructions+=370;goto B7105b2;
case 0x7105b6:c.instructions+=369;goto B7105b6;
case 0x7105b9:c.instructions+=368;goto B7105b9;
case 0x7105bc:c.instructions+=367;goto B7105bc;
case 0x7105bf:c.instructions+=366;goto B7105bf;
case 0x7105c3:c.instructions+=365;goto B7105c3;
case 0x7105c7:c.instructions+=364;goto B7105c7;
case 0x7105ca:c.instructions+=363;goto B7105ca;
case 0x7105ce:c.instructions+=362;goto B7105ce;
case 0x7105d1:c.instructions+=361;goto B7105d1;
case 0x7105d4:c.instructions+=360;goto B7105d4;
case 0x7105d7:c.instructions+=359;goto B7105d7;
case 0x7105db:c.instructions+=358;goto B7105db;
case 0x7105df:c.instructions+=357;goto B7105df;
case 0x7105e3:c.instructions+=356;goto B7105e3;
case 0x7105e6:c.instructions+=355;goto B7105e6;
case 0x7105e9:c.instructions+=354;goto B7105e9;
case 0x7105ec:c.instructions+=353;goto B7105ec;
case 0x7105f0:c.instructions+=352;goto B7105f0;
case 0x7105f4:c.instructions+=351;goto B7105f4;
case 0x7105f7:c.instructions+=350;goto B7105f7;
case 0x7105fb:c.instructions+=349;goto B7105fb;
case 0x7105fe:c.instructions+=348;goto B7105fe;
case 0x710601:c.instructions+=347;goto B710601;
case 0x710604:c.instructions+=346;goto B710604;
case 0x710607:c.instructions+=345;goto B710607;
case 0x71060b:c.instructions+=344;goto B71060b;
case 0x71060f:c.instructions+=343;goto B71060f;
case 0x710616:c.instructions+=342;goto B710616;
case 0x71061a:c.instructions+=341;goto B71061a;
case 0x71061d:c.instructions+=340;goto B71061d;
case 0x710620:c.instructions+=339;goto B710620;
case 0x710623:c.instructions+=338;goto B710623;
case 0x710627:c.instructions+=337;goto B710627;
case 0x71062b:c.instructions+=336;goto B71062b;
case 0x71062f:c.instructions+=335;goto B71062f;
case 0x710636:c.instructions+=334;goto B710636;
case 0x710639:c.instructions+=333;goto B710639;
case 0x71063c:c.instructions+=332;goto B71063c;
case 0x71063f:c.instructions+=331;goto B71063f;
case 0x710643:c.instructions+=330;goto B710643;
case 0x710647:c.instructions+=329;goto B710647;
case 0x71064e:c.instructions+=328;goto B71064e;
case 0x710651:c.instructions+=327;goto B710651;
case 0x710655:c.instructions+=326;goto B710655;
case 0x710658:c.instructions+=325;goto B710658;
case 0x71065b:c.instructions+=324;goto B71065b;
case 0x71065e:c.instructions+=323;goto B71065e;
case 0x710662:c.instructions+=322;goto B710662;
case 0x710666:c.instructions+=321;goto B710666;
case 0x71066a:c.instructions+=320;goto B71066a;
case 0x71066d:c.instructions+=319;goto B71066d;
case 0x710670:c.instructions+=318;goto B710670;
case 0x710673:c.instructions+=317;goto B710673;
case 0x710676:c.instructions+=316;goto B710676;
case 0x71067a:c.instructions+=315;goto B71067a;
case 0x71067e:c.instructions+=314;goto B71067e;
case 0x710682:c.instructions+=313;goto B710682;
case 0x710685:c.instructions+=312;goto B710685;
case 0x710688:c.instructions+=311;goto B710688;
case 0x71068b:c.instructions+=310;goto B71068b;
case 0x71068f:c.instructions+=309;goto B71068f;
case 0x710693:c.instructions+=308;goto B710693;
case 0x710697:c.instructions+=307;goto B710697;
case 0x71069a:c.instructions+=306;goto B71069a;
case 0x71069d:c.instructions+=305;goto B71069d;
case 0x7106a0:c.instructions+=304;goto B7106a0;
case 0x7106a3:c.instructions+=303;goto B7106a3;
case 0x7106a7:c.instructions+=302;goto B7106a7;
case 0x7106ab:c.instructions+=301;goto B7106ab;
case 0x7106af:c.instructions+=300;goto B7106af;
case 0x7106b2:c.instructions+=299;goto B7106b2;
case 0x7106b5:c.instructions+=298;goto B7106b5;
case 0x7106b8:c.instructions+=297;goto B7106b8;
case 0x7106bc:c.instructions+=296;goto B7106bc;
case 0x7106c3:c.instructions+=295;goto B7106c3;
case 0x7106c7:c.instructions+=294;goto B7106c7;
case 0x7106ca:c.instructions+=293;goto B7106ca;
case 0x7106cd:c.instructions+=292;goto B7106cd;
case 0x7106d0:c.instructions+=291;goto B7106d0;
case 0x7106d3:c.instructions+=290;goto B7106d3;
case 0x7106d7:c.instructions+=289;goto B7106d7;
case 0x7106db:c.instructions+=288;goto B7106db;
case 0x7106df:c.instructions+=287;goto B7106df;
case 0x7106e2:c.instructions+=286;goto B7106e2;
case 0x7106e5:c.instructions+=285;goto B7106e5;
case 0x7106e8:c.instructions+=284;goto B7106e8;
case 0x7106ec:c.instructions+=283;goto B7106ec;
case 0x7106ef:c.instructions+=282;goto B7106ef;
case 0x7106f2:c.instructions+=281;goto B7106f2;
case 0x7106f5:c.instructions+=280;goto B7106f5;
case 0x7106f9:c.instructions+=279;goto B7106f9;
case 0x7106fc:c.instructions+=278;goto B7106fc;
case 0x7106ff:c.instructions+=277;goto B7106ff;
case 0x710702:c.instructions+=276;goto B710702;
case 0x710705:c.instructions+=275;goto B710705;
case 0x710708:c.instructions+=274;goto B710708;
case 0x71070c:c.instructions+=273;goto B71070c;
case 0x710710:c.instructions+=272;goto B710710;
case 0x710713:c.instructions+=271;goto B710713;
case 0x710716:c.instructions+=270;goto B710716;
case 0x710719:c.instructions+=269;goto B710719;
case 0x71071c:c.instructions+=268;goto B71071c;
case 0x710723:c.instructions+=267;goto B710723;
case 0x71072a:c.instructions+=266;goto B71072a;
case 0x71072d:c.instructions+=265;goto B71072d;
case 0x710730:c.instructions+=264;goto B710730;
case 0x710733:c.instructions+=263;goto B710733;
case 0x710736:c.instructions+=262;goto B710736;
case 0x710739:c.instructions+=261;goto B710739;
case 0x71073d:c.instructions+=260;goto B71073d;
case 0x710741:c.instructions+=259;goto B710741;
case 0x710744:c.instructions+=258;goto B710744;
case 0x710747:c.instructions+=257;goto B710747;
case 0x71074a:c.instructions+=256;goto B71074a;
case 0x71074d:c.instructions+=255;goto B71074d;
case 0x710750:c.instructions+=254;goto B710750;
case 0x710753:c.instructions+=253;goto B710753;
case 0x710756:c.instructions+=252;goto B710756;
case 0x71075a:c.instructions+=251;goto B71075a;
case 0x71075e:c.instructions+=250;goto B71075e;
case 0x710762:c.instructions+=249;goto B710762;
case 0x710766:c.instructions+=248;goto B710766;
case 0x71076d:c.instructions+=247;goto B71076d;
case 0x710770:c.instructions+=246;goto B710770;
case 0x710773:c.instructions+=245;goto B710773;
case 0x710777:c.instructions+=244;goto B710777;
case 0x71077a:c.instructions+=243;goto B71077a;
case 0x71077e:c.instructions+=242;goto B71077e;
case 0x710782:c.instructions+=241;goto B710782;
case 0x710786:c.instructions+=240;goto B710786;
case 0x71078a:c.instructions+=239;goto B71078a;
case 0x71078d:c.instructions+=238;goto B71078d;
case 0x710790:c.instructions+=237;goto B710790;
case 0x710793:c.instructions+=236;goto B710793;
case 0x710796:c.instructions+=235;goto B710796;
case 0x71079a:c.instructions+=234;goto B71079a;
case 0x71079d:c.instructions+=233;goto B71079d;
case 0x7107a1:c.instructions+=232;goto B7107a1;
case 0x7107a4:c.instructions+=231;goto B7107a4;
case 0x7107a7:c.instructions+=230;goto B7107a7;
case 0x7107aa:c.instructions+=229;goto B7107aa;
case 0x7107ae:c.instructions+=228;goto B7107ae;
case 0x7107b2:c.instructions+=227;goto B7107b2;
case 0x7107b6:c.instructions+=226;goto B7107b6;
case 0x7107b9:c.instructions+=225;goto B7107b9;
case 0x7107bc:c.instructions+=224;goto B7107bc;
case 0x7107bf:c.instructions+=223;goto B7107bf;
case 0x7107c3:c.instructions+=222;goto B7107c3;
case 0x7107c7:c.instructions+=221;goto B7107c7;
case 0x7107ca:c.instructions+=220;goto B7107ca;
case 0x7107ce:c.instructions+=219;goto B7107ce;
case 0x7107d1:c.instructions+=218;goto B7107d1;
case 0x7107d4:c.instructions+=217;goto B7107d4;
case 0x7107d7:c.instructions+=216;goto B7107d7;
case 0x7107db:c.instructions+=215;goto B7107db;
case 0x7107df:c.instructions+=214;goto B7107df;
case 0x7107e3:c.instructions+=213;goto B7107e3;
case 0x7107e6:c.instructions+=212;goto B7107e6;
case 0x7107e9:c.instructions+=211;goto B7107e9;
case 0x7107ec:c.instructions+=210;goto B7107ec;
case 0x7107f0:c.instructions+=209;goto B7107f0;
case 0x7107f4:c.instructions+=208;goto B7107f4;
case 0x7107f7:c.instructions+=207;goto B7107f7;
case 0x7107fb:c.instructions+=206;goto B7107fb;
case 0x7107fe:c.instructions+=205;goto B7107fe;
case 0x710801:c.instructions+=204;goto B710801;
case 0x710804:c.instructions+=203;goto B710804;
case 0x710807:c.instructions+=202;goto B710807;
case 0x71080b:c.instructions+=201;goto B71080b;
case 0x71080f:c.instructions+=200;goto B71080f;
case 0x710816:c.instructions+=199;goto B710816;
case 0x71081a:c.instructions+=198;goto B71081a;
case 0x71081d:c.instructions+=197;goto B71081d;
case 0x710820:c.instructions+=196;goto B710820;
case 0x710823:c.instructions+=195;goto B710823;
case 0x710827:c.instructions+=194;goto B710827;
case 0x71082b:c.instructions+=193;goto B71082b;
case 0x71082f:c.instructions+=192;goto B71082f;
case 0x710836:c.instructions+=191;goto B710836;
case 0x710839:c.instructions+=190;goto B710839;
case 0x71083c:c.instructions+=189;goto B71083c;
case 0x71083f:c.instructions+=188;goto B71083f;
case 0x710843:c.instructions+=187;goto B710843;
case 0x710847:c.instructions+=186;goto B710847;
case 0x71084e:c.instructions+=185;goto B71084e;
case 0x710851:c.instructions+=184;goto B710851;
case 0x710855:c.instructions+=183;goto B710855;
case 0x710858:c.instructions+=182;goto B710858;
case 0x71085b:c.instructions+=181;goto B71085b;
case 0x71085e:c.instructions+=180;goto B71085e;
case 0x710862:c.instructions+=179;goto B710862;
case 0x710866:c.instructions+=178;goto B710866;
case 0x71086a:c.instructions+=177;goto B71086a;
case 0x71086d:c.instructions+=176;goto B71086d;
case 0x710870:c.instructions+=175;goto B710870;
case 0x710873:c.instructions+=174;goto B710873;
case 0x710876:c.instructions+=173;goto B710876;
case 0x71087a:c.instructions+=172;goto B71087a;
case 0x71087e:c.instructions+=171;goto B71087e;
case 0x710882:c.instructions+=170;goto B710882;
case 0x710885:c.instructions+=169;goto B710885;
case 0x710888:c.instructions+=168;goto B710888;
case 0x71088b:c.instructions+=167;goto B71088b;
case 0x71088f:c.instructions+=166;goto B71088f;
case 0x710893:c.instructions+=165;goto B710893;
case 0x710897:c.instructions+=164;goto B710897;
case 0x71089a:c.instructions+=163;goto B71089a;
case 0x71089d:c.instructions+=162;goto B71089d;
case 0x7108a0:c.instructions+=161;goto B7108a0;
case 0x7108a3:c.instructions+=160;goto B7108a3;
case 0x7108a7:c.instructions+=159;goto B7108a7;
case 0x7108ab:c.instructions+=158;goto B7108ab;
case 0x7108af:c.instructions+=157;goto B7108af;
case 0x7108b2:c.instructions+=156;goto B7108b2;
case 0x7108b5:c.instructions+=155;goto B7108b5;
case 0x7108b8:c.instructions+=154;goto B7108b8;
case 0x7108bc:c.instructions+=153;goto B7108bc;
case 0x7108c3:c.instructions+=152;goto B7108c3;
case 0x7108c7:c.instructions+=151;goto B7108c7;
case 0x7108ca:c.instructions+=150;goto B7108ca;
case 0x7108cd:c.instructions+=149;goto B7108cd;
case 0x7108d0:c.instructions+=148;goto B7108d0;
case 0x7108d3:c.instructions+=147;goto B7108d3;
case 0x7108d7:c.instructions+=146;goto B7108d7;
case 0x7108db:c.instructions+=145;goto B7108db;
case 0x7108df:c.instructions+=144;goto B7108df;
case 0x7108e2:c.instructions+=143;goto B7108e2;
case 0x7108e5:c.instructions+=142;goto B7108e5;
case 0x7108e8:c.instructions+=141;goto B7108e8;
case 0x7108ec:c.instructions+=140;goto B7108ec;
case 0x7108ef:c.instructions+=139;goto B7108ef;
case 0x7108f2:c.instructions+=138;goto B7108f2;
case 0x7108f5:c.instructions+=137;goto B7108f5;
case 0x7108f8:c.instructions+=136;goto B7108f8;
case 0x7108fb:c.instructions+=135;goto B7108fb;
case 0x7108ff:c.instructions+=134;goto B7108ff;
case 0x710902:c.instructions+=133;goto B710902;
case 0x710905:c.instructions+=132;goto B710905;
case 0x710908:c.instructions+=131;goto B710908;
case 0x71090c:c.instructions+=130;goto B71090c;
case 0x710910:c.instructions+=129;goto B710910;
case 0x710913:c.instructions+=128;goto B710913;
case 0x710916:c.instructions+=127;goto B710916;
case 0x710919:c.instructions+=126;goto B710919;
case 0x71091c:c.instructions+=125;goto B71091c;
case 0x71091f:c.instructions+=124;goto B71091f;
case 0x710922:c.instructions+=123;goto B710922;
case 0x710925:c.instructions+=122;goto B710925;
case 0x710928:c.instructions+=121;goto B710928;
case 0x71092c:c.instructions+=120;goto B71092c;
case 0x71092f:c.instructions+=119;goto B71092f;
case 0x710932:c.instructions+=118;goto B710932;
case 0x710936:c.instructions+=117;goto B710936;
case 0x71093a:c.instructions+=116;goto B71093a;
case 0x71093e:c.instructions+=115;goto B71093e;
case 0x710942:c.instructions+=114;goto B710942;
case 0x710945:c.instructions+=113;goto B710945;
case 0x710948:c.instructions+=112;goto B710948;
case 0x71094b:c.instructions+=111;goto B71094b;
case 0x71094e:c.instructions+=110;goto B71094e;
case 0x710951:c.instructions+=109;goto B710951;
case 0x710954:c.instructions+=108;goto B710954;
case 0x710957:c.instructions+=107;goto B710957;
case 0x71095a:c.instructions+=106;goto B71095a;
case 0x71095d:c.instructions+=105;goto B71095d;
case 0x710960:c.instructions+=104;goto B710960;
case 0x710963:c.instructions+=103;goto B710963;
case 0x710966:c.instructions+=102;goto B710966;
case 0x710969:c.instructions+=101;goto B710969;
case 0x71096c:c.instructions+=100;goto B71096c;
case 0x71096f:c.instructions+=99;goto B71096f;
case 0x710973:c.instructions+=98;goto B710973;
case 0x710976:c.instructions+=97;goto B710976;
case 0x71097a:c.instructions+=96;goto B71097a;
case 0x71097d:c.instructions+=95;goto B71097d;
case 0x710980:c.instructions+=94;goto B710980;
case 0x710984:c.instructions+=93;goto B710984;
case 0x710987:c.instructions+=92;goto B710987;
case 0x71098b:c.instructions+=91;goto B71098b;
case 0x71098e:c.instructions+=90;goto B71098e;
case 0x710991:c.instructions+=89;goto B710991;
case 0x710994:c.instructions+=88;goto B710994;
case 0x710998:c.instructions+=87;goto B710998;
case 0x71099b:c.instructions+=86;goto B71099b;
case 0x71099e:c.instructions+=85;goto B71099e;
case 0x7109a1:c.instructions+=84;goto B7109a1;
case 0x7109a5:c.instructions+=83;goto B7109a5;
case 0x7109a9:c.instructions+=82;goto B7109a9;
case 0x7109ac:c.instructions+=81;goto B7109ac;
case 0x7109af:c.instructions+=80;goto B7109af;
case 0x7109b2:c.instructions+=79;goto B7109b2;
case 0x7109b5:c.instructions+=78;goto B7109b5;
case 0x7109b8:c.instructions+=77;goto B7109b8;
case 0x7109bb:c.instructions+=76;goto B7109bb;
case 0x7109be:c.instructions+=75;goto B7109be;
case 0x7109c1:c.instructions+=74;goto B7109c1;
case 0x7109c5:c.instructions+=73;goto B7109c5;
case 0x7109c8:c.instructions+=72;goto B7109c8;
case 0x7109cb:c.instructions+=71;goto B7109cb;
case 0x7109cf:c.instructions+=70;goto B7109cf;
case 0x7109d3:c.instructions+=69;goto B7109d3;
case 0x7109d7:c.instructions+=68;goto B7109d7;
case 0x7109db:c.instructions+=67;goto B7109db;
case 0x7109de:c.instructions+=66;goto B7109de;
case 0x7109e1:c.instructions+=65;goto B7109e1;
case 0x7109e4:c.instructions+=64;goto B7109e4;
case 0x7109e7:c.instructions+=63;goto B7109e7;
case 0x7109ea:c.instructions+=62;goto B7109ea;
case 0x7109ed:c.instructions+=61;goto B7109ed;
case 0x7109f0:c.instructions+=60;goto B7109f0;
case 0x7109f3:c.instructions+=59;goto B7109f3;
case 0x7109f6:c.instructions+=58;goto B7109f6;
case 0x7109f9:c.instructions+=57;goto B7109f9;
case 0x7109fc:c.instructions+=56;goto B7109fc;
case 0x7109ff:c.instructions+=55;goto B7109ff;
case 0x710a02:c.instructions+=54;goto B710a02;
case 0x710a05:c.instructions+=53;goto B710a05;
case 0x710a08:c.instructions+=52;goto B710a08;
case 0x710a0c:c.instructions+=51;goto B710a0c;
case 0x710a0f:c.instructions+=50;goto B710a0f;
case 0x710a13:c.instructions+=49;goto B710a13;
case 0x710a16:c.instructions+=48;goto B710a16;
case 0x710a19:c.instructions+=47;goto B710a19;
case 0x710a1d:c.instructions+=46;goto B710a1d;
case 0x710a20:c.instructions+=45;goto B710a20;
case 0x710a24:c.instructions+=44;goto B710a24;
case 0x710a25:c.instructions+=43;goto B710a25;
case 0x710a26:c.instructions+=42;goto B710a26;
case 0x710a27:c.instructions+=41;goto B710a27;
case 0x710a28:c.instructions+=40;goto B710a28;
case 0x710a29:c.instructions+=39;goto B710a29;
case 0x710a2a:c.instructions+=38;goto B710a2a;
case 0x710a2e:c.instructions+=37;goto B710a2e;
case 0x710a32:c.instructions+=36;goto B710a32;
case 0x710a34:c.instructions+=35;goto B710a34;
case 0x710a38:c.instructions+=34;goto B710a38;
case 0x710a3b:c.instructions+=33;goto B710a3b;
case 0x710a3e:c.instructions+=32;goto B710a3e;
case 0x710a41:c.instructions+=31;goto B710a41;
case 0x710a43:c.instructions+=30;goto B710a43;
case 0x710a47:c.instructions+=29;goto B710a47;
case 0x710a49:c.instructions+=28;goto B710a49;
case 0x710a4d:c.instructions+=27;goto B710a4d;
case 0x710a4f:c.instructions+=26;goto B710a4f;
case 0x710a53:c.instructions+=25;goto B710a53;
case 0x710a55:c.instructions+=24;goto B710a55;
case 0x710a59:c.instructions+=23;goto B710a59;
case 0x710a5b:c.instructions+=22;goto B710a5b;
case 0x710a5d:c.instructions+=21;goto B710a5d;
case 0x710a61:c.instructions+=20;goto B710a61;
case 0x710a63:c.instructions+=19;goto B710a63;
case 0x710a65:c.instructions+=18;goto B710a65;
case 0x710a68:c.instructions+=17;goto B710a68;
case 0x710a6c:c.instructions+=16;goto B710a6c;
case 0x710a70:c.instructions+=15;goto B710a70;
case 0x710a74:c.instructions+=14;goto B710a74;
case 0x710a76:c.instructions+=13;goto B710a76;
case 0x710a7a:c.instructions+=12;goto B710a7a;
case 0x710a7c:c.instructions+=11;goto B710a7c;
case 0x710a80:c.instructions+=10;goto B710a80;
case 0x710a82:c.instructions+=9;goto B710a82;
case 0x710a86:c.instructions+=8;goto B710a86;
case 0x710a88:c.instructions+=7;goto B710a88;
case 0x710a8c:c.instructions+=6;goto B710a8c;
case 0x710a8e:c.instructions+=5;goto B710a8e;
case 0x710a92:c.instructions+=4;goto B710a92;
case 0x710a94:c.instructions+=3;goto B710a94;
case 0x710a98:c.instructions+=2;goto B710a98;
case 0x710a9a:c.instructions+=1;goto B710a9a;
case 0x710a9c:goto L710a9c;
case 0x710a9f:c.instructions+=4;goto B710a9f;
case 0x710aa3:c.instructions+=3;goto B710aa3;
case 0x710aa7:c.instructions+=2;goto B710aa7;
case 0x710aa8:c.instructions+=1;goto B710aa8;
case 0x710aab:goto L710aab;
case 0x710aae:c.instructions+=1;goto B710aae;
case 0x710ab4:goto L710ab4;
case 0x710ab5:c.instructions+=6;goto B710ab5;
case 0x710ab6:c.instructions+=5;goto B710ab6;
case 0x710ab8:c.instructions+=4;goto B710ab8;
case 0x710ab9:c.instructions+=3;goto B710ab9;
case 0x710abb:c.instructions+=2;goto B710abb;
case 0x710abc:c.instructions+=1;goto B710abc;
case 0x710abd:goto L710abd;
case 0x710abe:c.instructions+=27;goto B710abe;
case 0x710ac0:c.instructions+=26;goto B710ac0;
case 0x710ac1:c.instructions+=25;goto B710ac1;
case 0x710ac2:c.instructions+=24;goto B710ac2;
case 0x710ac5:c.instructions+=23;goto B710ac5;
case 0x710ac8:c.instructions+=22;goto B710ac8;
case 0x710ac9:c.instructions+=21;goto B710ac9;
case 0x710acc:c.instructions+=20;goto B710acc;
case 0x710ad0:c.instructions+=19;goto B710ad0;
case 0x710ad2:c.instructions+=18;goto B710ad2;
case 0x710ad8:c.instructions+=17;goto B710ad8;
case 0x710adb:c.instructions+=16;goto B710adb;
case 0x710ade:c.instructions+=15;goto B710ade;
case 0x710ae4:c.instructions+=14;goto B710ae4;
case 0x710ae7:c.instructions+=13;goto B710ae7;
case 0x710aea:c.instructions+=12;goto B710aea;
case 0x710aee:c.instructions+=11;goto B710aee;
case 0x710af2:c.instructions+=10;goto B710af2;
case 0x710af6:c.instructions+=9;goto B710af6;
case 0x710afa:c.instructions+=8;goto B710afa;
case 0x710afd:c.instructions+=7;goto B710afd;
case 0x710aff:c.instructions+=6;goto B710aff;
case 0x710b01:c.instructions+=5;goto B710b01;
case 0x710b02:c.instructions+=4;goto B710b02;
case 0x710b03:c.instructions+=3;goto B710b03;
case 0x710b06:c.instructions+=2;goto B710b06;
case 0x710b0c:c.instructions+=1;goto B710b0c;
case 0x710b12:goto L710b12;
case 0x710b15:c.instructions+=363;goto B710b15;
case 0x710b18:c.instructions+=362;goto B710b18;
case 0x710b1b:c.instructions+=361;goto B710b1b;
case 0x710b1e:c.instructions+=360;goto B710b1e;
case 0x710b21:c.instructions+=359;goto B710b21;
case 0x710b24:c.instructions+=358;goto B710b24;
case 0x710b27:c.instructions+=357;goto B710b27;
case 0x710b2a:c.instructions+=356;goto B710b2a;
case 0x710b2c:c.instructions+=355;goto B710b2c;
case 0x710b2f:c.instructions+=354;goto B710b2f;
case 0x710b32:c.instructions+=353;goto B710b32;
case 0x710b35:c.instructions+=352;goto B710b35;
case 0x710b38:c.instructions+=351;goto B710b38;
case 0x710b3b:c.instructions+=350;goto B710b3b;
case 0x710b3e:c.instructions+=349;goto B710b3e;
case 0x710b41:c.instructions+=348;goto B710b41;
case 0x710b44:c.instructions+=347;goto B710b44;
case 0x710b47:c.instructions+=346;goto B710b47;
case 0x710b4a:c.instructions+=345;goto B710b4a;
case 0x710b4d:c.instructions+=344;goto B710b4d;
case 0x710b50:c.instructions+=343;goto B710b50;
case 0x710b53:c.instructions+=342;goto B710b53;
case 0x710b56:c.instructions+=341;goto B710b56;
case 0x710b57:c.instructions+=340;goto B710b57;
case 0x710b58:c.instructions+=339;goto B710b58;
case 0x710b59:c.instructions+=338;goto B710b59;
case 0x710b5a:c.instructions+=337;goto B710b5a;
case 0x710b5b:c.instructions+=336;goto B710b5b;
case 0x710b5c:c.instructions+=335;goto B710b5c;
case 0x710b5f:c.instructions+=334;goto B710b5f;
case 0x710b61:c.instructions+=333;goto B710b61;
case 0x710b64:c.instructions+=332;goto B710b64;
case 0x710b67:c.instructions+=331;goto B710b67;
case 0x710b6a:c.instructions+=330;goto B710b6a;
case 0x710b6d:c.instructions+=329;goto B710b6d;
case 0x710b71:c.instructions+=328;goto B710b71;
case 0x710b74:c.instructions+=327;goto B710b74;
case 0x710b7a:c.instructions+=326;goto B710b7a;
case 0x710b7d:c.instructions+=325;goto B710b7d;
case 0x710b7f:c.instructions+=324;goto B710b7f;
case 0x710b82:c.instructions+=323;goto B710b82;
case 0x710b89:c.instructions+=322;goto B710b89;
case 0x710b8f:c.instructions+=321;goto B710b8f;
case 0x710b92:c.instructions+=320;goto B710b92;
case 0x710b95:c.instructions+=319;goto B710b95;
case 0x710b98:c.instructions+=318;goto B710b98;
case 0x710b9c:c.instructions+=317;goto B710b9c;
case 0x710b9f:c.instructions+=316;goto B710b9f;
case 0x710ba2:c.instructions+=315;goto B710ba2;
case 0x710ba6:c.instructions+=314;goto B710ba6;
case 0x710bad:c.instructions+=313;goto B710bad;
case 0x710bb0:c.instructions+=312;goto B710bb0;
case 0x710bb3:c.instructions+=311;goto B710bb3;
case 0x710bb6:c.instructions+=310;goto B710bb6;
case 0x710bb9:c.instructions+=309;goto B710bb9;
case 0x710bbc:c.instructions+=308;goto B710bbc;
case 0x710bbf:c.instructions+=307;goto B710bbf;
case 0x710bc3:c.instructions+=306;goto B710bc3;
case 0x710bc7:c.instructions+=305;goto B710bc7;
case 0x710bcb:c.instructions+=304;goto B710bcb;
case 0x710bcf:c.instructions+=303;goto B710bcf;
case 0x710bd2:c.instructions+=302;goto B710bd2;
case 0x710bd5:c.instructions+=301;goto B710bd5;
case 0x710bd9:c.instructions+=300;goto B710bd9;
case 0x710bdc:c.instructions+=299;goto B710bdc;
case 0x710bdf:c.instructions+=298;goto B710bdf;
case 0x710be3:c.instructions+=297;goto B710be3;
case 0x710be6:c.instructions+=296;goto B710be6;
case 0x710be9:c.instructions+=295;goto B710be9;
case 0x710bed:c.instructions+=294;goto B710bed;
case 0x710bf0:c.instructions+=293;goto B710bf0;
case 0x710bf4:c.instructions+=292;goto B710bf4;
case 0x710bf8:c.instructions+=291;goto B710bf8;
case 0x710bfb:c.instructions+=290;goto B710bfb;
case 0x710bfe:c.instructions+=289;goto B710bfe;
case 0x710c02:c.instructions+=288;goto B710c02;
case 0x710c05:c.instructions+=287;goto B710c05;
case 0x710c08:c.instructions+=286;goto B710c08;
case 0x710c0c:c.instructions+=285;goto B710c0c;
case 0x710c0f:c.instructions+=284;goto B710c0f;
case 0x710c13:c.instructions+=283;goto B710c13;
case 0x710c16:c.instructions+=282;goto B710c16;
case 0x710c19:c.instructions+=281;goto B710c19;
case 0x710c1d:c.instructions+=280;goto B710c1d;
case 0x710c21:c.instructions+=279;goto B710c21;
case 0x710c24:c.instructions+=278;goto B710c24;
case 0x710c28:c.instructions+=277;goto B710c28;
case 0x710c2b:c.instructions+=276;goto B710c2b;
case 0x710c2e:c.instructions+=275;goto B710c2e;
case 0x710c32:c.instructions+=274;goto B710c32;
case 0x710c35:c.instructions+=273;goto B710c35;
case 0x710c38:c.instructions+=272;goto B710c38;
case 0x710c3c:c.instructions+=271;goto B710c3c;
case 0x710c3f:c.instructions+=270;goto B710c3f;
case 0x710c42:c.instructions+=269;goto B710c42;
case 0x710c46:c.instructions+=268;goto B710c46;
case 0x710c4a:c.instructions+=267;goto B710c4a;
case 0x710c4d:c.instructions+=266;goto B710c4d;
case 0x710c50:c.instructions+=265;goto B710c50;
case 0x710c54:c.instructions+=264;goto B710c54;
case 0x710c58:c.instructions+=263;goto B710c58;
case 0x710c5b:c.instructions+=262;goto B710c5b;
case 0x710c5e:c.instructions+=261;goto B710c5e;
case 0x710c61:c.instructions+=260;goto B710c61;
case 0x710c68:c.instructions+=259;goto B710c68;
case 0x710c6b:c.instructions+=258;goto B710c6b;
case 0x710c6e:c.instructions+=257;goto B710c6e;
case 0x710c75:c.instructions+=256;goto B710c75;
case 0x710c7c:c.instructions+=255;goto B710c7c;
case 0x710c83:c.instructions+=254;goto B710c83;
case 0x710c86:c.instructions+=253;goto B710c86;
case 0x710c8a:c.instructions+=252;goto B710c8a;
case 0x710c8e:c.instructions+=251;goto B710c8e;
case 0x710c92:c.instructions+=250;goto B710c92;
case 0x710c96:c.instructions+=249;goto B710c96;
case 0x710c99:c.instructions+=248;goto B710c99;
case 0x710c9c:c.instructions+=247;goto B710c9c;
case 0x710c9f:c.instructions+=246;goto B710c9f;
case 0x710ca2:c.instructions+=245;goto B710ca2;
case 0x710ca5:c.instructions+=244;goto B710ca5;
case 0x710ca8:c.instructions+=243;goto B710ca8;
case 0x710cab:c.instructions+=242;goto B710cab;
case 0x710cae:c.instructions+=241;goto B710cae;
case 0x710cb2:c.instructions+=240;goto B710cb2;
case 0x710cb6:c.instructions+=239;goto B710cb6;
case 0x710cb9:c.instructions+=238;goto B710cb9;
case 0x710cbc:c.instructions+=237;goto B710cbc;
case 0x710cbf:c.instructions+=236;goto B710cbf;
case 0x710cc2:c.instructions+=235;goto B710cc2;
case 0x710cc5:c.instructions+=234;goto B710cc5;
case 0x710cc8:c.instructions+=233;goto B710cc8;
case 0x710ccb:c.instructions+=232;goto B710ccb;
case 0x710cce:c.instructions+=231;goto B710cce;
case 0x710cd2:c.instructions+=230;goto B710cd2;
case 0x710cd6:c.instructions+=229;goto B710cd6;
case 0x710cd9:c.instructions+=228;goto B710cd9;
case 0x710cdc:c.instructions+=227;goto B710cdc;
case 0x710cdf:c.instructions+=226;goto B710cdf;
case 0x710ce2:c.instructions+=225;goto B710ce2;
case 0x710ce5:c.instructions+=224;goto B710ce5;
case 0x710ce8:c.instructions+=223;goto B710ce8;
case 0x710ceb:c.instructions+=222;goto B710ceb;
case 0x710cee:c.instructions+=221;goto B710cee;
case 0x710cf2:c.instructions+=220;goto B710cf2;
case 0x710cf9:c.instructions+=219;goto B710cf9;
case 0x710cfc:c.instructions+=218;goto B710cfc;
case 0x710cff:c.instructions+=217;goto B710cff;
case 0x710d02:c.instructions+=216;goto B710d02;
case 0x710d05:c.instructions+=215;goto B710d05;
case 0x710d08:c.instructions+=214;goto B710d08;
case 0x710d0b:c.instructions+=213;goto B710d0b;
case 0x710d0e:c.instructions+=212;goto B710d0e;
case 0x710d11:c.instructions+=211;goto B710d11;
case 0x710d14:c.instructions+=210;goto B710d14;
case 0x710d18:c.instructions+=209;goto B710d18;
case 0x710d1b:c.instructions+=208;goto B710d1b;
case 0x710d1e:c.instructions+=207;goto B710d1e;
case 0x710d21:c.instructions+=206;goto B710d21;
case 0x710d24:c.instructions+=205;goto B710d24;
case 0x710d28:c.instructions+=204;goto B710d28;
case 0x710d2c:c.instructions+=203;goto B710d2c;
case 0x710d30:c.instructions+=202;goto B710d30;
case 0x710d34:c.instructions+=201;goto B710d34;
case 0x710d37:c.instructions+=200;goto B710d37;
case 0x710d3a:c.instructions+=199;goto B710d3a;
case 0x710d3d:c.instructions+=198;goto B710d3d;
case 0x710d40:c.instructions+=197;goto B710d40;
case 0x710d47:c.instructions+=196;goto B710d47;
case 0x710d4a:c.instructions+=195;goto B710d4a;
case 0x710d4d:c.instructions+=194;goto B710d4d;
case 0x710d51:c.instructions+=193;goto B710d51;
case 0x710d55:c.instructions+=192;goto B710d55;
case 0x710d58:c.instructions+=191;goto B710d58;
case 0x710d5b:c.instructions+=190;goto B710d5b;
case 0x710d5f:c.instructions+=189;goto B710d5f;
case 0x710d63:c.instructions+=188;goto B710d63;
case 0x710d67:c.instructions+=187;goto B710d67;
case 0x710d6b:c.instructions+=186;goto B710d6b;
case 0x710d6f:c.instructions+=185;goto B710d6f;
case 0x710d72:c.instructions+=184;goto B710d72;
case 0x710d75:c.instructions+=183;goto B710d75;
case 0x710d79:c.instructions+=182;goto B710d79;
case 0x710d7c:c.instructions+=181;goto B710d7c;
case 0x710d7f:c.instructions+=180;goto B710d7f;
case 0x710d82:c.instructions+=179;goto B710d82;
case 0x710d85:c.instructions+=178;goto B710d85;
case 0x710d88:c.instructions+=177;goto B710d88;
case 0x710d8f:c.instructions+=176;goto B710d8f;
case 0x710d93:c.instructions+=175;goto B710d93;
case 0x710d96:c.instructions+=174;goto B710d96;
case 0x710d99:c.instructions+=173;goto B710d99;
case 0x710d9d:c.instructions+=172;goto B710d9d;
case 0x710da1:c.instructions+=171;goto B710da1;
case 0x710da4:c.instructions+=170;goto B710da4;
case 0x710da7:c.instructions+=169;goto B710da7;
case 0x710daa:c.instructions+=168;goto B710daa;
case 0x710dad:c.instructions+=167;goto B710dad;
case 0x710db0:c.instructions+=166;goto B710db0;
case 0x710db3:c.instructions+=165;goto B710db3;
case 0x710db6:c.instructions+=164;goto B710db6;
case 0x710db9:c.instructions+=163;goto B710db9;
case 0x710dbd:c.instructions+=162;goto B710dbd;
case 0x710dc1:c.instructions+=161;goto B710dc1;
case 0x710dc4:c.instructions+=160;goto B710dc4;
case 0x710dc7:c.instructions+=159;goto B710dc7;
case 0x710dca:c.instructions+=158;goto B710dca;
case 0x710dcd:c.instructions+=157;goto B710dcd;
case 0x710dd0:c.instructions+=156;goto B710dd0;
case 0x710dd3:c.instructions+=155;goto B710dd3;
case 0x710dd6:c.instructions+=154;goto B710dd6;
case 0x710dd9:c.instructions+=153;goto B710dd9;
case 0x710ddd:c.instructions+=152;goto B710ddd;
case 0x710de1:c.instructions+=151;goto B710de1;
case 0x710de4:c.instructions+=150;goto B710de4;
case 0x710de7:c.instructions+=149;goto B710de7;
case 0x710dea:c.instructions+=148;goto B710dea;
case 0x710ded:c.instructions+=147;goto B710ded;
case 0x710df0:c.instructions+=146;goto B710df0;
case 0x710df3:c.instructions+=145;goto B710df3;
case 0x710df6:c.instructions+=144;goto B710df6;
case 0x710df9:c.instructions+=143;goto B710df9;
case 0x710dfd:c.instructions+=142;goto B710dfd;
case 0x710e04:c.instructions+=141;goto B710e04;
case 0x710e07:c.instructions+=140;goto B710e07;
case 0x710e0a:c.instructions+=139;goto B710e0a;
case 0x710e0d:c.instructions+=138;goto B710e0d;
case 0x710e10:c.instructions+=137;goto B710e10;
case 0x710e13:c.instructions+=136;goto B710e13;
case 0x710e16:c.instructions+=135;goto B710e16;
case 0x710e19:c.instructions+=134;goto B710e19;
case 0x710e1c:c.instructions+=133;goto B710e1c;
case 0x710e20:c.instructions+=132;goto B710e20;
case 0x710e23:c.instructions+=131;goto B710e23;
case 0x710e26:c.instructions+=130;goto B710e26;
case 0x710e29:c.instructions+=129;goto B710e29;
case 0x710e2c:c.instructions+=128;goto B710e2c;
case 0x710e30:c.instructions+=127;goto B710e30;
case 0x710e34:c.instructions+=126;goto B710e34;
case 0x710e38:c.instructions+=125;goto B710e38;
case 0x710e3c:c.instructions+=124;goto B710e3c;
case 0x710e3f:c.instructions+=123;goto B710e3f;
case 0x710e42:c.instructions+=122;goto B710e42;
case 0x710e45:c.instructions+=121;goto B710e45;
case 0x710e48:c.instructions+=120;goto B710e48;
case 0x710e4c:c.instructions+=119;goto B710e4c;
case 0x710e50:c.instructions+=118;goto B710e50;
case 0x710e57:c.instructions+=117;goto B710e57;
case 0x710e5a:c.instructions+=116;goto B710e5a;
case 0x710e5d:c.instructions+=115;goto B710e5d;
case 0x710e60:c.instructions+=114;goto B710e60;
case 0x710e63:c.instructions+=113;goto B710e63;
case 0x710e67:c.instructions+=112;goto B710e67;
case 0x710e6b:c.instructions+=111;goto B710e6b;
case 0x710e6f:c.instructions+=110;goto B710e6f;
case 0x710e73:c.instructions+=109;goto B710e73;
case 0x710e77:c.instructions+=108;goto B710e77;
case 0x710e7a:c.instructions+=107;goto B710e7a;
case 0x710e7d:c.instructions+=106;goto B710e7d;
case 0x710e81:c.instructions+=105;goto B710e81;
case 0x710e84:c.instructions+=104;goto B710e84;
case 0x710e87:c.instructions+=103;goto B710e87;
case 0x710e8a:c.instructions+=102;goto B710e8a;
case 0x710e8d:c.instructions+=101;goto B710e8d;
case 0x710e90:c.instructions+=100;goto B710e90;
case 0x710e97:c.instructions+=99;goto B710e97;
case 0x710e9b:c.instructions+=98;goto B710e9b;
case 0x710e9e:c.instructions+=97;goto B710e9e;
case 0x710ea1:c.instructions+=96;goto B710ea1;
case 0x710ea5:c.instructions+=95;goto B710ea5;
case 0x710ea9:c.instructions+=94;goto B710ea9;
case 0x710ead:c.instructions+=93;goto B710ead;
case 0x710eb1:c.instructions+=92;goto B710eb1;
case 0x710eb5:c.instructions+=91;goto B710eb5;
case 0x710eb8:c.instructions+=90;goto B710eb8;
case 0x710ebb:c.instructions+=89;goto B710ebb;
case 0x710ebe:c.instructions+=88;goto B710ebe;
case 0x710ec1:c.instructions+=87;goto B710ec1;
case 0x710ec8:c.instructions+=86;goto B710ec8;
case 0x710ecb:c.instructions+=85;goto B710ecb;
case 0x710ece:c.instructions+=84;goto B710ece;
case 0x710ed2:c.instructions+=83;goto B710ed2;
case 0x710ed5:c.instructions+=82;goto B710ed5;
case 0x710ed9:c.instructions+=81;goto B710ed9;
case 0x710edc:c.instructions+=80;goto B710edc;
case 0x710edf:c.instructions+=79;goto B710edf;
case 0x710ee6:c.instructions+=78;goto B710ee6;
case 0x710ee9:c.instructions+=77;goto B710ee9;
case 0x710eec:c.instructions+=76;goto B710eec;
case 0x710eef:c.instructions+=75;goto B710eef;
case 0x710ef3:c.instructions+=74;goto B710ef3;
case 0x710ef6:c.instructions+=73;goto B710ef6;
case 0x710ef9:c.instructions+=72;goto B710ef9;
case 0x710efc:c.instructions+=71;goto B710efc;
case 0x710eff:c.instructions+=70;goto B710eff;
case 0x710f03:c.instructions+=69;goto B710f03;
case 0x710f07:c.instructions+=68;goto B710f07;
case 0x710f0a:c.instructions+=67;goto B710f0a;
case 0x710f0d:c.instructions+=66;goto B710f0d;
case 0x710f10:c.instructions+=65;goto B710f10;
case 0x710f13:c.instructions+=64;goto B710f13;
case 0x710f16:c.instructions+=63;goto B710f16;
case 0x710f19:c.instructions+=62;goto B710f19;
case 0x710f20:c.instructions+=61;goto B710f20;
case 0x710f23:c.instructions+=60;goto B710f23;
case 0x710f2a:c.instructions+=59;goto B710f2a;
case 0x710f2d:c.instructions+=58;goto B710f2d;
case 0x710f31:c.instructions+=57;goto B710f31;
case 0x710f34:c.instructions+=56;goto B710f34;
case 0x710f37:c.instructions+=55;goto B710f37;
case 0x710f3a:c.instructions+=54;goto B710f3a;
case 0x710f3d:c.instructions+=53;goto B710f3d;
case 0x710f40:c.instructions+=52;goto B710f40;
case 0x710f47:c.instructions+=51;goto B710f47;
case 0x710f4b:c.instructions+=50;goto B710f4b;
case 0x710f4e:c.instructions+=49;goto B710f4e;
case 0x710f51:c.instructions+=48;goto B710f51;
case 0x710f54:c.instructions+=47;goto B710f54;
case 0x710f57:c.instructions+=46;goto B710f57;
case 0x710f5e:c.instructions+=45;goto B710f5e;
case 0x710f65:c.instructions+=44;goto B710f65;
case 0x710f68:c.instructions+=43;goto B710f68;
case 0x710f6b:c.instructions+=42;goto B710f6b;
case 0x710f6e:c.instructions+=41;goto B710f6e;
case 0x710f71:c.instructions+=40;goto B710f71;
case 0x710f74:c.instructions+=39;goto B710f74;
case 0x710f7b:c.instructions+=38;goto B710f7b;
case 0x710f7f:c.instructions+=37;goto B710f7f;
case 0x710f82:c.instructions+=36;goto B710f82;
case 0x710f85:c.instructions+=35;goto B710f85;
case 0x710f88:c.instructions+=34;goto B710f88;
case 0x710f8b:c.instructions+=33;goto B710f8b;
case 0x710f8e:c.instructions+=32;goto B710f8e;
case 0x710f91:c.instructions+=31;goto B710f91;
case 0x710f94:c.instructions+=30;goto B710f94;
case 0x710f98:c.instructions+=29;goto B710f98;
case 0x710f9c:c.instructions+=28;goto B710f9c;
case 0x710fa0:c.instructions+=27;goto B710fa0;
case 0x710fa4:c.instructions+=26;goto B710fa4;
case 0x710fab:c.instructions+=25;goto B710fab;
case 0x710fae:c.instructions+=24;goto B710fae;
case 0x710fb1:c.instructions+=23;goto B710fb1;
case 0x710fb5:c.instructions+=22;goto B710fb5;
case 0x710fb8:c.instructions+=21;goto B710fb8;
case 0x710fbc:c.instructions+=20;goto B710fbc;
case 0x710fc0:c.instructions+=19;goto B710fc0;
case 0x710fc4:c.instructions+=18;goto B710fc4;
case 0x710fc8:c.instructions+=17;goto B710fc8;
case 0x710fcb:c.instructions+=16;goto B710fcb;
case 0x710fce:c.instructions+=15;goto B710fce;
case 0x710fd1:c.instructions+=14;goto B710fd1;
case 0x710fd4:c.instructions+=13;goto B710fd4;
case 0x710fd8:c.instructions+=12;goto B710fd8;
case 0x710fdb:c.instructions+=11;goto B710fdb;
case 0x710fdf:c.instructions+=10;goto B710fdf;
case 0x710fe2:c.instructions+=9;goto B710fe2;
case 0x710fe5:c.instructions+=8;goto B710fe5;
case 0x710fe8:c.instructions+=7;goto B710fe8;
case 0x710fec:c.instructions+=6;goto B710fec;
case 0x710ff0:c.instructions+=5;goto B710ff0;
case 0x710ff4:c.instructions+=4;goto B710ff4;
case 0x710ff7:c.instructions+=3;goto B710ff7;
case 0x710ffa:c.instructions+=2;goto B710ffa;
case 0x710ffd:c.instructions+=1;goto B710ffd;
default:missing_instruction(c.pc);}
B710002:L710002:{c.instructions+=56;NFSU2_TR(0x710002);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+17),(R+4368),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4368),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4369),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4370),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4371),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4372),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4373),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4374),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4375),(U+33),1);
}
B710006:{NFSU2_TR(0x710006);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71000b:{NFSU2_TR(0x71000b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71000f:{NFSU2_TR(0x71000f);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+17),(R+4384),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4384),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4385),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4386),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4387),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4388),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4389),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4390),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4391),(U+33),1);
}
B710013:{NFSU2_TR(0x710013);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4384),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B710018:{NFSU2_TR(0x710018);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71001c:{NFSU2_TR(0x71001c);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+17),(R+4400),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4400),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4401),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4402),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4403),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4404),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4405),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4406),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4407),(U+33),1);
}
B710020:{NFSU2_TR(0x710020);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B710024:{NFSU2_TR(0x710024);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4400),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B710029:{NFSU2_TR(0x710029);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71002a:{NFSU2_TR(0x71002a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71002b:{NFSU2_TR(0x71002b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71002c:{NFSU2_TR(0x71002c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71002d:{NFSU2_TR(0x71002d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71002e:{NFSU2_TR(0x71002e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71002f:{NFSU2_TR(0x71002f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710032:{NFSU2_TR(0x710032);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710035:{NFSU2_TR(0x710035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B710038:{NFSU2_TR(0x710038);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B71003c:{NFSU2_TR(0x71003c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B71003f:{NFSU2_TR(0x71003f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710043:{NFSU2_TR(0x710043);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B710045:{NFSU2_TR(0x710045);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B710049:{NFSU2_TR(0x710049);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B71004b:{NFSU2_TR(0x71004b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B71004f:{NFSU2_TR(0x71004f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B710051:{NFSU2_TR(0x710051);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B710055:{NFSU2_TR(0x710055);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B710057:{NFSU2_TR(0x710057);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B71005b:{NFSU2_TR(0x71005b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B71005d:{NFSU2_TR(0x71005d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B710061:{NFSU2_TR(0x710061);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B710063:{NFSU2_TR(0x710063);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B710067:{NFSU2_TR(0x710067);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B710069:{NFSU2_TR(0x710069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+4)),r4(U+0));
}
B71006b:{NFSU2_TR(0x71006b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71006e:{NFSU2_TR(0x71006e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710071:{NFSU2_TR(0x710071);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710075:{NFSU2_TR(0x710075);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B710077:{NFSU2_TR(0x710077);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B71007b:{NFSU2_TR(0x71007b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B71007d:{NFSU2_TR(0x71007d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710081:{NFSU2_TR(0x710081);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B710083:{NFSU2_TR(0x710083);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710087:{NFSU2_TR(0x710087);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B710089:{NFSU2_TR(0x710089);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B71008d:{NFSU2_TR(0x71008d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B71008f:{NFSU2_TR(0x71008f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710093:{NFSU2_TR(0x710093);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B710095:{NFSU2_TR(0x710095);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710099:{NFSU2_TR(0x710099);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B71009b:{NFSU2_TR(0x71009b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B71009f:{NFSU2_TR(0x71009f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7100a1:{NFSU2_TR(0x7100a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B7100a3:{NFSU2_TR(0x7100a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7100a6:{NFSU2_TR(0x7100a6);
{goto L71010c;}
}
B7100a8:L7100a8:{c.instructions+=35;NFSU2_TR(0x7100a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7100a9:{NFSU2_TR(0x7100a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7100aa:{NFSU2_TR(0x7100aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7100ab:{NFSU2_TR(0x7100ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7100ae:{NFSU2_TR(0x7100ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7100b1:{NFSU2_TR(0x7100b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7100b2:{NFSU2_TR(0x7100b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7100b5:{NFSU2_TR(0x7100b5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7100b7:{NFSU2_TR(0x7100b7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B7100b9:{NFSU2_TR(0x7100b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7100bc:{NFSU2_TR(0x7100bc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B7100bf:{NFSU2_TR(0x7100bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7100c3:{NFSU2_TR(0x7100c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B7100c6:{NFSU2_TR(0x7100c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B7100ca:{NFSU2_TR(0x7100ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7100ce:{NFSU2_TR(0x7100ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B7100d2:{NFSU2_TR(0x7100d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7100d5:{NFSU2_TR(0x7100d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4384),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7100d9:{NFSU2_TR(0x7100d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B7100dc:{NFSU2_TR(0x7100dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B7100e0:{NFSU2_TR(0x7100e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4400),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7100e4:{NFSU2_TR(0x7100e4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B7100e7:{NFSU2_TR(0x7100e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4432),(U+8),8);
}
B7100eb:{NFSU2_TR(0x7100eb);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B7100ee:{NFSU2_TR(0x7100ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4448),(U+8),8);
}
B7100f2:{NFSU2_TR(0x7100f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7100f5:{NFSU2_TR(0x7100f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4432),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7100f9:{NFSU2_TR(0x7100f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4448),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7100fd:{NFSU2_TR(0x7100fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4464),(U+8),8);
}
B710101:{NFSU2_TR(0x710101);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B710104:{NFSU2_TR(0x710104);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4464),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B710108:{NFSU2_TR(0x710108);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B710109:{NFSU2_TR(0x710109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71010a:{NFSU2_TR(0x71010a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71010b:{NFSU2_TR(0x71010b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71010c:L71010c:{c.instructions+=6;NFSU2_TR(0x71010c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B710110:{NFSU2_TR(0x710110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B710114:{NFSU2_TR(0x710114);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B710117:{NFSU2_TR(0x710117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71011b:{NFSU2_TR(0x71011b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B71011e:{NFSU2_TR(0x71011e);
if(r1(R+512)){TAIL_STATIC(0x70f85du,70f);}
}
B710124:L710124:{c.instructions+=17;NFSU2_TR(0x710124);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710127:{NFSU2_TR(0x710127);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71012a:{NFSU2_TR(0x71012a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B71012d:{NFSU2_TR(0x71012d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71012f:{NFSU2_TR(0x71012f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B710130:{NFSU2_TR(0x710130);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B710132:{NFSU2_TR(0x710132);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B710135:{NFSU2_TR(0x710135);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B710138:{NFSU2_TR(0x710138);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B71013a:{NFSU2_TR(0x71013a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B71013d:{NFSU2_TR(0x71013d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B710140:{NFSU2_TR(0x710140);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B710141:{NFSU2_TR(0x710141);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710144:{NFSU2_TR(0x710144);
__builtin_memmove((R+8),(R+4),4);
}
B710146:{NFSU2_TR(0x710146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710149:{NFSU2_TR(0x710149);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71014b:{NFSU2_TR(0x71014b);
{goto L710aab;}
}
B710150:L710150:{c.instructions+=10;NFSU2_TR(0x710150);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710153:{NFSU2_TR(0x710153);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710156:{NFSU2_TR(0x710156);
__builtin_memmove((R+0),(R+8),4);
}
B710158:{NFSU2_TR(0x710158);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71015b:{NFSU2_TR(0x71015b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71015e:{NFSU2_TR(0x71015e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B710162:{NFSU2_TR(0x710162);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710165:{NFSU2_TR(0x710165);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B710168:{NFSU2_TR(0x710168);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71016b:{NFSU2_TR(0x71016b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L710a9c;}}
}
B710171:L710171:{c.instructions+=7;NFSU2_TR(0x710171);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B710175:{NFSU2_TR(0x710175);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B710179:{NFSU2_TR(0x710179);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71017d:{NFSU2_TR(0x71017d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B710181:{NFSU2_TR(0x710181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710184:{NFSU2_TR(0x710184);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B710186:{NFSU2_TR(0x710186);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B710189:L710189:{c.instructions+=8;NFSU2_TR(0x710189);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+8,u16(r1(U+4)));
}
B71018e:{NFSU2_TR(0x71018e);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffe60ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B710196:{NFSU2_TR(0x710196);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w2(R+8,u16(r1(U+0)));
}
B71019a:{NFSU2_TR(0x71019a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B71019d:{NFSU2_TR(0x71019d);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffef0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7101a5:{NFSU2_TR(0x7101a5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7101a6:{NFSU2_TR(0x7101a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B7101a9:{NFSU2_TR(0x7101a9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x710189u);}goto L710189;}}
}
B7101ab:L7101ab:{c.instructions+=676;NFSU2_TR(0x7101ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7101ac:{NFSU2_TR(0x7101ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7101ad:{NFSU2_TR(0x7101ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7101ae:{NFSU2_TR(0x7101ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7101af:{NFSU2_TR(0x7101af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7101b0:{NFSU2_TR(0x7101b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7101b1:{NFSU2_TR(0x7101b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B7101b5:{NFSU2_TR(0x7101b5);
__builtin_memmove((R+4368),gp(0x8175b0),8);
}
B7101bc:{NFSU2_TR(0x7101bc);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4358))));
}
B7101bf:{NFSU2_TR(0x7101bf);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4358))));
}
B7101c2:{NFSU2_TR(0x7101c2);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x5ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x5ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x5ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x5ull))));
}
B7101c6:{NFSU2_TR(0x7101c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7101ca:{NFSU2_TR(0x7101ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7101cd:{NFSU2_TR(0x7101cd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7101cf:{NFSU2_TR(0x7101cf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B7101d2:{NFSU2_TR(0x7101d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7101d8:{NFSU2_TR(0x7101d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7101de:{NFSU2_TR(0x7101de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7101e1:{NFSU2_TR(0x7101e1);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B7101e3:{NFSU2_TR(0x7101e3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B7101e6:{NFSU2_TR(0x7101e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B7101ea:{NFSU2_TR(0x7101ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B7101ee:{NFSU2_TR(0x7101ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7101f1:{NFSU2_TR(0x7101f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B7101f5:{NFSU2_TR(0x7101f5);
__builtin_memmove((R+4416),(R+4352),8);
}
B7101f8:{NFSU2_TR(0x7101f8);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B7101fb:{NFSU2_TR(0x7101fb);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B7101fe:{NFSU2_TR(0x7101fe);
__builtin_memmove((R+4432),(R+4384),8);
}
B710201:{NFSU2_TR(0x710201);
__builtin_memmove((R+4391),(R+4403),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4402),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4401),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4400),1);
}
B710204:{NFSU2_TR(0x710204);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4404),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4405),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4406),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4407),1);
}
B710207:{NFSU2_TR(0x710207);
__builtin_memmove((R+4368),(R+4352),8);
}
B71020a:{NFSU2_TR(0x71020a);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B71020d:{NFSU2_TR(0x71020d);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B710210:{NFSU2_TR(0x710210);
__builtin_memmove((R+4384),(R+4416),8);
}
B710213:{NFSU2_TR(0x710213);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B710216:{NFSU2_TR(0x710216);
__builtin_memmove((R+4390),(R+4434),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4432),2);
}
B710219:{NFSU2_TR(0x710219);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71021c:{NFSU2_TR(0x71021c);
__builtin_memmove((R+4432),(R+4352),8);
}
B71021f:{NFSU2_TR(0x71021f);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B710222:{NFSU2_TR(0x710222);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710226:{NFSU2_TR(0x710226);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B710229:{NFSU2_TR(0x710229);
__builtin_memmove((R+4352),(R+4368),8);
}
B71022c:{NFSU2_TR(0x71022c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710230:{NFSU2_TR(0x710230);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B710233:{NFSU2_TR(0x710233);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4468),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4469),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4470),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4471),1);
}
B710236:{NFSU2_TR(0x710236);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71023a:{NFSU2_TR(0x71023a);
__builtin_memmove((R+4400),(R+4384),8);
}
B71023d:{NFSU2_TR(0x71023d);
__builtin_memmove((R+4432),(R+4416),8);
}
B710240:{NFSU2_TR(0x710240);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710244:{NFSU2_TR(0x710244);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B710247:{NFSU2_TR(0x710247);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71024a:{NFSU2_TR(0x71024a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71024e:{NFSU2_TR(0x71024e);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B710251:{NFSU2_TR(0x710251);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B710254:{NFSU2_TR(0x710254);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710258:{NFSU2_TR(0x710258);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71025b:{NFSU2_TR(0x71025b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71025f:{NFSU2_TR(0x71025f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710263:{NFSU2_TR(0x710263);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B710267:{NFSU2_TR(0x710267);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B71026a:{NFSU2_TR(0x71026a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710271:{NFSU2_TR(0x710271);
__builtin_memmove((R+4416),(R+4352),8);
}
B710274:{NFSU2_TR(0x710274);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B710278:{NFSU2_TR(0x710278);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B71027b:{NFSU2_TR(0x71027b);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B71027e:{NFSU2_TR(0x71027e);
__builtin_memmove((R+4432),(R+4384),8);
}
B710281:{NFSU2_TR(0x710281);
__builtin_memmove((R+4391),(R+4403),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4402),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4401),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4400),1);
}
B710284:{NFSU2_TR(0x710284);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4404),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4405),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4406),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4407),1);
}
B710287:{NFSU2_TR(0x710287);
__builtin_memmove((R+4368),(R+4352),8);
}
B71028a:{NFSU2_TR(0x71028a);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B71028d:{NFSU2_TR(0x71028d);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B710290:{NFSU2_TR(0x710290);
__builtin_memmove((R+4384),(R+4416),8);
}
B710293:{NFSU2_TR(0x710293);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B710296:{NFSU2_TR(0x710296);
__builtin_memmove((R+4390),(R+4434),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4432),2);
}
B710299:{NFSU2_TR(0x710299);
__builtin_memmove((R+4432),(R+4352),8);
}
B71029c:{NFSU2_TR(0x71029c);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71029f:{NFSU2_TR(0x71029f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7102a3:{NFSU2_TR(0x7102a3);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B7102a6:{NFSU2_TR(0x7102a6);
__builtin_memmove((R+4352),(R+4368),8);
}
B7102a9:{NFSU2_TR(0x7102a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7102ad:{NFSU2_TR(0x7102ad);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B7102b0:{NFSU2_TR(0x7102b0);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4468),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4469),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4470),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4471),1);
}
B7102b3:{NFSU2_TR(0x7102b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7102b7:{NFSU2_TR(0x7102b7);
__builtin_memmove((R+4400),(R+4384),8);
}
B7102ba:{NFSU2_TR(0x7102ba);
__builtin_memmove((R+4432),(R+4416),8);
}
B7102bd:{NFSU2_TR(0x7102bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7102c1:{NFSU2_TR(0x7102c1);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7102c4:{NFSU2_TR(0x7102c4);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B7102c7:{NFSU2_TR(0x7102c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7102cb:{NFSU2_TR(0x7102cb);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B7102ce:{NFSU2_TR(0x7102ce);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B7102d1:{NFSU2_TR(0x7102d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7102d5:{NFSU2_TR(0x7102d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7102d9:{NFSU2_TR(0x7102d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7102e0:{NFSU2_TR(0x7102e0);
u8 U[12];
w1(U+0,u8((r2(R+4400))==(r2(R+4400))));
w2(U+1,u16(r1(U+0)));
w2(R+4400,u16(u32(r2(U+1))*u32(u16(0xffffull))));
w1(U+3,u8((r2(R+4402))==(r2(R+4402))));
w2(U+4,u16(r1(U+3)));
w2(R+4402,u16(u32(r2(U+4))*u32(u16(0xffffull))));
w1(U+6,u8((r2(R+4404))==(r2(R+4404))));
w2(U+7,u16(r1(U+6)));
w2(R+4404,u16(u32(r2(U+7))*u32(u16(0xffffull))));
w1(U+9,u8((r2(R+4406))==(r2(R+4406))));
w2(U+10,u16(r1(U+9)));
w2(R+4406,u16(u32(r2(U+10))*u32(u16(0xffffull))));
}
B7102e3:{NFSU2_TR(0x7102e3);
{wv<8>((R+4400),uo::psllw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B7102e7:{NFSU2_TR(0x7102e7);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B7102eb:{NFSU2_TR(0x7102eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7102ef:{NFSU2_TR(0x7102ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7102f3:{NFSU2_TR(0x7102f3);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B7102f6:{NFSU2_TR(0x7102f6);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B7102f9:{NFSU2_TR(0x7102f9);
__builtin_memmove((R+4352),(R+4384),8);
}
B7102fc:{NFSU2_TR(0x7102fc);
__builtin_memmove((R+4416),(R+4448),8);
}
B7102ff:{NFSU2_TR(0x7102ff);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710302:{NFSU2_TR(0x710302);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B710305:{NFSU2_TR(0x710305);
__builtin_memmove((R+4368),(R+4384),8);
}
B710308:{NFSU2_TR(0x710308);
__builtin_memmove((R+4432),(R+4448),8);
}
B71030b:{NFSU2_TR(0x71030b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71030f:{NFSU2_TR(0x71030f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710313:{NFSU2_TR(0x710313);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B710316:{NFSU2_TR(0x710316);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B710319:{NFSU2_TR(0x710319);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71031c:{NFSU2_TR(0x71031c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71031f:{NFSU2_TR(0x71031f);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710322:{NFSU2_TR(0x710322);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B710325:{NFSU2_TR(0x710325);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B710328:{NFSU2_TR(0x710328);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71032b:{NFSU2_TR(0x71032b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71032f:{NFSU2_TR(0x71032f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710333:{NFSU2_TR(0x710333);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B710336:{NFSU2_TR(0x710336);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B710339:{NFSU2_TR(0x710339);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71033c:{NFSU2_TR(0x71033c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71033f:{NFSU2_TR(0x71033f);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710342:{NFSU2_TR(0x710342);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B710345:{NFSU2_TR(0x710345);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B710348:{NFSU2_TR(0x710348);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71034b:{NFSU2_TR(0x71034b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71034f:{NFSU2_TR(0x71034f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710356:{NFSU2_TR(0x710356);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B710359:{NFSU2_TR(0x710359);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B71035c:{NFSU2_TR(0x71035c);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71035f:{NFSU2_TR(0x71035f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B710362:{NFSU2_TR(0x710362);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710365:{NFSU2_TR(0x710365);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B710368:{NFSU2_TR(0x710368);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B71036b:{NFSU2_TR(0x71036b);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71036e:{NFSU2_TR(0x71036e);
__builtin_memmove((R+4464),(R+4400),8);
}
B710371:{NFSU2_TR(0x710371);
w2(R+4464,shr<u16>(r2(R+4464),u64(u32(0x7ull))));
w2(R+4466,shr<u16>(r2(R+4466),u64(u32(0x7ull))));
w2(R+4468,shr<u16>(r2(R+4468),u64(u32(0x7ull))));
w2(R+4470,shr<u16>(r2(R+4470),u64(u32(0x7ull))));
}
B710375:{NFSU2_TR(0x710375);
__builtin_memmove((R+4384),(R+4352),8);
}
B710378:{NFSU2_TR(0x710378);
__builtin_memmove((R+4448),(R+4416),8);
}
B71037b:{NFSU2_TR(0x71037b);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B71037e:{NFSU2_TR(0x71037e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4464))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4466))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4468))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4470))));
}
B710381:{NFSU2_TR(0x710381);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B710385:{NFSU2_TR(0x710385);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x1ull)));}
}
B710389:{NFSU2_TR(0x710389);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B71038d:{NFSU2_TR(0x71038d);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B710391:{NFSU2_TR(0x710391);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4358))));
}
B710394:{NFSU2_TR(0x710394);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4422))));
}
B710397:{NFSU2_TR(0x710397);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B71039a:{NFSU2_TR(0x71039a);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4454))));
}
B71039d:{NFSU2_TR(0x71039d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7103a1:{NFSU2_TR(0x7103a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7103a5:{NFSU2_TR(0x7103a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7103a9:{NFSU2_TR(0x7103a9);
__builtin_memmove((R+4384),(R+4368),8);
}
B7103ac:{NFSU2_TR(0x7103ac);
__builtin_memmove((R+4448),(R+4432),8);
}
B7103af:{NFSU2_TR(0x7103af);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4470))));
}
B7103b2:{NFSU2_TR(0x7103b2);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4470))));
}
B7103b5:{NFSU2_TR(0x7103b5);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B7103b9:{NFSU2_TR(0x7103b9);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B7103bd:{NFSU2_TR(0x7103bd);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0xfull)));}
}
B7103c1:{NFSU2_TR(0x7103c1);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B7103c5:{NFSU2_TR(0x7103c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7103c9:{NFSU2_TR(0x7103c9);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4368))));
}
B7103cc:{NFSU2_TR(0x7103cc);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4448))));
w8(R+4448,u64(u64(r8(U+0))&u64(r8(R+4432))));
}
B7103cf:{NFSU2_TR(0x7103cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7103d3:{NFSU2_TR(0x7103d3);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4384))));
}
B7103d6:{NFSU2_TR(0x7103d6);
__builtin_memmove((R+4384),(R+4464),8);
}
B7103d9:{NFSU2_TR(0x7103d9);
{wv<8>((R+4464),uo::psubusw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B7103dc:{NFSU2_TR(0x7103dc);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B7103df:{NFSU2_TR(0x7103df);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4416))));
}
B7103e2:{NFSU2_TR(0x7103e2);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(U+12))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(U+14))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(U+16))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(U+18))));
}
B7103e6:{NFSU2_TR(0x7103e6);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0xfull)));}
}
B7103ea:{NFSU2_TR(0x7103ea);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4448))));
}
B7103ed:{NFSU2_TR(0x7103ed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B7103f0:{NFSU2_TR(0x7103f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7103f4:{NFSU2_TR(0x7103f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7103f8:{NFSU2_TR(0x7103f8);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B7103fb:{NFSU2_TR(0x7103fb);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B7103fe:{NFSU2_TR(0x7103fe);
__builtin_memmove((R+4352),(R+4384),8);
}
B710401:{NFSU2_TR(0x710401);
__builtin_memmove((R+4416),(R+4448),8);
}
B710404:{NFSU2_TR(0x710404);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710407:{NFSU2_TR(0x710407);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B71040a:{NFSU2_TR(0x71040a);
__builtin_memmove((R+4368),(R+4384),8);
}
B71040d:{NFSU2_TR(0x71040d);
__builtin_memmove((R+4432),(R+4448),8);
}
B710410:{NFSU2_TR(0x710410);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B710414:{NFSU2_TR(0x710414);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710418:{NFSU2_TR(0x710418);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B71041b:{NFSU2_TR(0x71041b);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B71041e:{NFSU2_TR(0x71041e);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B710421:{NFSU2_TR(0x710421);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B710424:{NFSU2_TR(0x710424);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710427:{NFSU2_TR(0x710427);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B71042a:{NFSU2_TR(0x71042a);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B71042d:{NFSU2_TR(0x71042d);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B710430:{NFSU2_TR(0x710430);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B710434:{NFSU2_TR(0x710434);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710438:{NFSU2_TR(0x710438);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B71043b:{NFSU2_TR(0x71043b);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B71043e:{NFSU2_TR(0x71043e);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B710441:{NFSU2_TR(0x710441);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B710444:{NFSU2_TR(0x710444);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710447:{NFSU2_TR(0x710447);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B71044a:{NFSU2_TR(0x71044a);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B71044d:{NFSU2_TR(0x71044d);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B710450:{NFSU2_TR(0x710450);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B710454:{NFSU2_TR(0x710454);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71045b:{NFSU2_TR(0x71045b);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B71045e:{NFSU2_TR(0x71045e);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B710461:{NFSU2_TR(0x710461);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B710464:{NFSU2_TR(0x710464);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B710467:{NFSU2_TR(0x710467);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B71046a:{NFSU2_TR(0x71046a);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B71046d:{NFSU2_TR(0x71046d);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B710470:{NFSU2_TR(0x710470);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B710473:{NFSU2_TR(0x710473);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x7ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x7ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x7ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x7ull))));
}
B710477:{NFSU2_TR(0x710477);
__builtin_memmove((R+4384),(R+4352),8);
}
B71047a:{NFSU2_TR(0x71047a);
__builtin_memmove((R+4448),(R+4416),8);
}
B71047d:{NFSU2_TR(0x71047d);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B710480:{NFSU2_TR(0x710480);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B710483:{NFSU2_TR(0x710483);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B710487:{NFSU2_TR(0x710487);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x1ull)));}
}
B71048b:{NFSU2_TR(0x71048b);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B71048f:{NFSU2_TR(0x71048f);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B710493:{NFSU2_TR(0x710493);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4358))));
}
B710496:{NFSU2_TR(0x710496);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4422))));
}
B710499:{NFSU2_TR(0x710499);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B71049c:{NFSU2_TR(0x71049c);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4454))));
}
B71049f:{NFSU2_TR(0x71049f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7104a3:{NFSU2_TR(0x7104a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7104a7:{NFSU2_TR(0x7104a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B7104ab:{NFSU2_TR(0x7104ab);
__builtin_memmove((R+4384),(R+4368),8);
}
B7104ae:{NFSU2_TR(0x7104ae);
__builtin_memmove((R+4448),(R+4432),8);
}
B7104b1:{NFSU2_TR(0x7104b1);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4406))));
}
B7104b4:{NFSU2_TR(0x7104b4);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4406))));
}
B7104b7:{NFSU2_TR(0x7104b7);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B7104bb:{NFSU2_TR(0x7104bb);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0xfull)));}
}
B7104bf:{NFSU2_TR(0x7104bf);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B7104c3:{NFSU2_TR(0x7104c3);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B7104c7:{NFSU2_TR(0x7104c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B7104cb:{NFSU2_TR(0x7104cb);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4368))));
}
B7104ce:{NFSU2_TR(0x7104ce);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4448))));
w8(R+4448,u64(u64(r8(U+0))&u64(r8(R+4432))));
}
B7104d1:{NFSU2_TR(0x7104d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7104d5:{NFSU2_TR(0x7104d5);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4384))));
}
B7104d8:{NFSU2_TR(0x7104d8);
__builtin_memmove((R+4384),(R+4352),8);
}
B7104db:{NFSU2_TR(0x7104db);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B7104de:{NFSU2_TR(0x7104de);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B7104e1:{NFSU2_TR(0x7104e1);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4416))));
}
B7104e4:{NFSU2_TR(0x7104e4);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(U+12))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(U+14))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(U+16))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(U+18))));
}
B7104e8:{NFSU2_TR(0x7104e8);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B7104ec:{NFSU2_TR(0x7104ec);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4448))));
}
B7104ef:{NFSU2_TR(0x7104ef);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x8ull))));
}
B7104f2:{NFSU2_TR(0x7104f2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B7104f5:{NFSU2_TR(0x7104f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7104f9:{NFSU2_TR(0x7104f9);
__builtin_memmove((R+4400),(R+4416),8);
}
B7104fc:{NFSU2_TR(0x7104fc);
__builtin_memmove((R+4448),(R+4432),8);
}
B7104ff:{NFSU2_TR(0x7104ff);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B710502:{NFSU2_TR(0x710502);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B710505:{NFSU2_TR(0x710505);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B710508:{NFSU2_TR(0x710508);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71050c:{NFSU2_TR(0x71050c);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B710510:{NFSU2_TR(0x710510);
__builtin_memmove((R+4368),(R+4416),8);
}
B710513:{NFSU2_TR(0x710513);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B710516:{NFSU2_TR(0x710516);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B710519:{NFSU2_TR(0x710519);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4416))));
}
B71051c:{NFSU2_TR(0x71051c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B710523:{NFSU2_TR(0x710523);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71052a:{NFSU2_TR(0x71052a);
__builtin_memmove((R+4400),(R+4416),8);
}
B71052d:{NFSU2_TR(0x71052d);
__builtin_memmove((R+4448),(R+4432),8);
}
B710530:{NFSU2_TR(0x710530);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B710533:{NFSU2_TR(0x710533);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B710536:{NFSU2_TR(0x710536);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B710539:{NFSU2_TR(0x710539);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71053d:{NFSU2_TR(0x71053d);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B710541:{NFSU2_TR(0x710541);
__builtin_memmove((R+4384),(R+4416),8);
}
B710544:{NFSU2_TR(0x710544);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B710547:{NFSU2_TR(0x710547);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B71054a:{NFSU2_TR(0x71054a);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4416))));
}
B71054d:{NFSU2_TR(0x71054d);
__builtin_memmove((R+4400),(R+4368),8);
}
B710550:{NFSU2_TR(0x710550);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B710553:{NFSU2_TR(0x710553);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B710556:{NFSU2_TR(0x710556);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71055a:{NFSU2_TR(0x71055a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B71055e:{NFSU2_TR(0x71055e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B710562:{NFSU2_TR(0x710562);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B710566:{NFSU2_TR(0x710566);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71056d:{NFSU2_TR(0x71056d);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B710570:{NFSU2_TR(0x710570);
__builtin_memmove((R+4416),(R+4400),8);
}
B710573:{NFSU2_TR(0x710573);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B710577:{NFSU2_TR(0x710577);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71057a:{NFSU2_TR(0x71057a);
{wv<8>((R+4416),uo::psllw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B71057e:{NFSU2_TR(0x71057e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B710582:{NFSU2_TR(0x710582);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B710586:{NFSU2_TR(0x710586);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71058a:{NFSU2_TR(0x71058a);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71058d:{NFSU2_TR(0x71058d);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B710590:{NFSU2_TR(0x710590);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B710593:{NFSU2_TR(0x710593);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B710596:{NFSU2_TR(0x710596);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71059a:{NFSU2_TR(0x71059a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B71059d:{NFSU2_TR(0x71059d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7105a1:{NFSU2_TR(0x7105a1);
__builtin_memmove((R+4416),(R+4432),8);
}
B7105a4:{NFSU2_TR(0x7105a4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7105a7:{NFSU2_TR(0x7105a7);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7105aa:{NFSU2_TR(0x7105aa);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7105ae:{NFSU2_TR(0x7105ae);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7105b2:{NFSU2_TR(0x7105b2);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7105b6:{NFSU2_TR(0x7105b6);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7105b9:{NFSU2_TR(0x7105b9);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B7105bc:{NFSU2_TR(0x7105bc);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7105bf:{NFSU2_TR(0x7105bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7105c3:{NFSU2_TR(0x7105c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7105c7:{NFSU2_TR(0x7105c7);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B7105ca:{NFSU2_TR(0x7105ca);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7105ce:{NFSU2_TR(0x7105ce);
__builtin_memmove((R+4416),(R+4432),8);
}
B7105d1:{NFSU2_TR(0x7105d1);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7105d4:{NFSU2_TR(0x7105d4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7105d7:{NFSU2_TR(0x7105d7);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7105db:{NFSU2_TR(0x7105db);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7105df:{NFSU2_TR(0x7105df);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7105e3:{NFSU2_TR(0x7105e3);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7105e6:{NFSU2_TR(0x7105e6);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B7105e9:{NFSU2_TR(0x7105e9);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7105ec:{NFSU2_TR(0x7105ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7105f0:{NFSU2_TR(0x7105f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7105f4:{NFSU2_TR(0x7105f4);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B7105f7:{NFSU2_TR(0x7105f7);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7105fb:{NFSU2_TR(0x7105fb);
__builtin_memmove((R+4416),(R+4432),8);
}
B7105fe:{NFSU2_TR(0x7105fe);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B710601:{NFSU2_TR(0x710601);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B710604:{NFSU2_TR(0x710604);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4368))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4370))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4372))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4374))));
}
B710607:{NFSU2_TR(0x710607);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71060b:{NFSU2_TR(0x71060b);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71060f:{NFSU2_TR(0x71060f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B710616:{NFSU2_TR(0x710616);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71061a:{NFSU2_TR(0x71061a);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71061d:{NFSU2_TR(0x71061d);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B710620:{NFSU2_TR(0x710620);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B710623:{NFSU2_TR(0x710623);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710627:{NFSU2_TR(0x710627);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71062b:{NFSU2_TR(0x71062b);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B71062f:{NFSU2_TR(0x71062f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B710636:{NFSU2_TR(0x710636);
__builtin_memmove((R+4416),(R+4432),8);
}
B710639:{NFSU2_TR(0x710639);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71063c:{NFSU2_TR(0x71063c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B71063f:{NFSU2_TR(0x71063f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B710643:{NFSU2_TR(0x710643);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B710647:{NFSU2_TR(0x710647);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71064e:{NFSU2_TR(0x71064e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B710651:{NFSU2_TR(0x710651);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B710655:{NFSU2_TR(0x710655);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B710658:{NFSU2_TR(0x710658);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B71065b:{NFSU2_TR(0x71065b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71065e:{NFSU2_TR(0x71065e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710662:{NFSU2_TR(0x710662);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B710666:{NFSU2_TR(0x710666);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B71066a:{NFSU2_TR(0x71066a);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B71066d:{NFSU2_TR(0x71066d);
__builtin_memmove((R+4416),(R+4432),8);
}
B710670:{NFSU2_TR(0x710670);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B710673:{NFSU2_TR(0x710673);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B710676:{NFSU2_TR(0x710676);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B71067a:{NFSU2_TR(0x71067a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71067e:{NFSU2_TR(0x71067e);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B710682:{NFSU2_TR(0x710682);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B710685:{NFSU2_TR(0x710685);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B710688:{NFSU2_TR(0x710688);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71068b:{NFSU2_TR(0x71068b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71068f:{NFSU2_TR(0x71068f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B710693:{NFSU2_TR(0x710693);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B710697:{NFSU2_TR(0x710697);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B71069a:{NFSU2_TR(0x71069a);
__builtin_memmove((R+4416),(R+4432),8);
}
B71069d:{NFSU2_TR(0x71069d);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7106a0:{NFSU2_TR(0x7106a0);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7106a3:{NFSU2_TR(0x7106a3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7106a7:{NFSU2_TR(0x7106a7);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7106ab:{NFSU2_TR(0x7106ab);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7106af:{NFSU2_TR(0x7106af);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7106b2:{NFSU2_TR(0x7106b2);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B7106b5:{NFSU2_TR(0x7106b5);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7106b8:{NFSU2_TR(0x7106b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7106bc:{NFSU2_TR(0x7106bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7106c3:{NFSU2_TR(0x7106c3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B7106c7:{NFSU2_TR(0x7106c7);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7106ca:{NFSU2_TR(0x7106ca);
__builtin_memmove((R+4416),(R+4432),8);
}
B7106cd:{NFSU2_TR(0x7106cd);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7106d0:{NFSU2_TR(0x7106d0);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7106d3:{NFSU2_TR(0x7106d3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7106d7:{NFSU2_TR(0x7106d7);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7106db:{NFSU2_TR(0x7106db);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7106df:{NFSU2_TR(0x7106df);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7106e2:{NFSU2_TR(0x7106e2);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B7106e5:{NFSU2_TR(0x7106e5);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7106e8:{NFSU2_TR(0x7106e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7106ec:{NFSU2_TR(0x7106ec);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B7106ef:{NFSU2_TR(0x7106ef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B7106f2:{NFSU2_TR(0x7106f2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B7106f5:{NFSU2_TR(0x7106f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7106f9:{NFSU2_TR(0x7106f9);
__builtin_memmove((R+4400),(R+4416),8);
}
B7106fc:{NFSU2_TR(0x7106fc);
__builtin_memmove((R+4448),(R+4432),8);
}
B7106ff:{NFSU2_TR(0x7106ff);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B710702:{NFSU2_TR(0x710702);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B710705:{NFSU2_TR(0x710705);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B710708:{NFSU2_TR(0x710708);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71070c:{NFSU2_TR(0x71070c);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B710710:{NFSU2_TR(0x710710);
__builtin_memmove((R+4368),(R+4416),8);
}
B710713:{NFSU2_TR(0x710713);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B710716:{NFSU2_TR(0x710716);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B710719:{NFSU2_TR(0x710719);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4416))));
}
B71071c:{NFSU2_TR(0x71071c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B710723:{NFSU2_TR(0x710723);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71072a:{NFSU2_TR(0x71072a);
__builtin_memmove((R+4400),(R+4416),8);
}
B71072d:{NFSU2_TR(0x71072d);
__builtin_memmove((R+4448),(R+4432),8);
}
B710730:{NFSU2_TR(0x710730);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B710733:{NFSU2_TR(0x710733);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B710736:{NFSU2_TR(0x710736);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B710739:{NFSU2_TR(0x710739);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71073d:{NFSU2_TR(0x71073d);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B710741:{NFSU2_TR(0x710741);
__builtin_memmove((R+4384),(R+4416),8);
}
B710744:{NFSU2_TR(0x710744);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B710747:{NFSU2_TR(0x710747);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B71074a:{NFSU2_TR(0x71074a);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4416))));
}
B71074d:{NFSU2_TR(0x71074d);
__builtin_memmove((R+4400),(R+4368),8);
}
B710750:{NFSU2_TR(0x710750);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B710753:{NFSU2_TR(0x710753);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B710756:{NFSU2_TR(0x710756);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71075a:{NFSU2_TR(0x71075a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B71075e:{NFSU2_TR(0x71075e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B710762:{NFSU2_TR(0x710762);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B710766:{NFSU2_TR(0x710766);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71076d:{NFSU2_TR(0x71076d);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B710770:{NFSU2_TR(0x710770);
__builtin_memmove((R+4416),(R+4400),8);
}
B710773:{NFSU2_TR(0x710773);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B710777:{NFSU2_TR(0x710777);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71077a:{NFSU2_TR(0x71077a);
{wv<8>((R+4416),uo::psllw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B71077e:{NFSU2_TR(0x71077e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B710782:{NFSU2_TR(0x710782);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B710786:{NFSU2_TR(0x710786);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71078a:{NFSU2_TR(0x71078a);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71078d:{NFSU2_TR(0x71078d);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B710790:{NFSU2_TR(0x710790);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B710793:{NFSU2_TR(0x710793);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B710796:{NFSU2_TR(0x710796);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71079a:{NFSU2_TR(0x71079a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B71079d:{NFSU2_TR(0x71079d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7107a1:{NFSU2_TR(0x7107a1);
__builtin_memmove((R+4416),(R+4432),8);
}
B7107a4:{NFSU2_TR(0x7107a4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7107a7:{NFSU2_TR(0x7107a7);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7107aa:{NFSU2_TR(0x7107aa);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7107ae:{NFSU2_TR(0x7107ae);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7107b2:{NFSU2_TR(0x7107b2);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7107b6:{NFSU2_TR(0x7107b6);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7107b9:{NFSU2_TR(0x7107b9);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B7107bc:{NFSU2_TR(0x7107bc);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7107bf:{NFSU2_TR(0x7107bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7107c3:{NFSU2_TR(0x7107c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7107c7:{NFSU2_TR(0x7107c7);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B7107ca:{NFSU2_TR(0x7107ca);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7107ce:{NFSU2_TR(0x7107ce);
__builtin_memmove((R+4416),(R+4432),8);
}
B7107d1:{NFSU2_TR(0x7107d1);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7107d4:{NFSU2_TR(0x7107d4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7107d7:{NFSU2_TR(0x7107d7);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7107db:{NFSU2_TR(0x7107db);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7107df:{NFSU2_TR(0x7107df);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7107e3:{NFSU2_TR(0x7107e3);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7107e6:{NFSU2_TR(0x7107e6);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B7107e9:{NFSU2_TR(0x7107e9);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7107ec:{NFSU2_TR(0x7107ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7107f0:{NFSU2_TR(0x7107f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7107f4:{NFSU2_TR(0x7107f4);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B7107f7:{NFSU2_TR(0x7107f7);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7107fb:{NFSU2_TR(0x7107fb);
__builtin_memmove((R+4416),(R+4432),8);
}
B7107fe:{NFSU2_TR(0x7107fe);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B710801:{NFSU2_TR(0x710801);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B710804:{NFSU2_TR(0x710804);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4368))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4370))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4372))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4374))));
}
B710807:{NFSU2_TR(0x710807);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71080b:{NFSU2_TR(0x71080b);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71080f:{NFSU2_TR(0x71080f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B710816:{NFSU2_TR(0x710816);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71081a:{NFSU2_TR(0x71081a);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71081d:{NFSU2_TR(0x71081d);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B710820:{NFSU2_TR(0x710820);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B710823:{NFSU2_TR(0x710823);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710827:{NFSU2_TR(0x710827);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71082b:{NFSU2_TR(0x71082b);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B71082f:{NFSU2_TR(0x71082f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B710836:{NFSU2_TR(0x710836);
__builtin_memmove((R+4416),(R+4432),8);
}
B710839:{NFSU2_TR(0x710839);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71083c:{NFSU2_TR(0x71083c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B71083f:{NFSU2_TR(0x71083f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B710843:{NFSU2_TR(0x710843);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B710847:{NFSU2_TR(0x710847);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71084e:{NFSU2_TR(0x71084e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B710851:{NFSU2_TR(0x710851);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B710855:{NFSU2_TR(0x710855);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B710858:{NFSU2_TR(0x710858);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B71085b:{NFSU2_TR(0x71085b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71085e:{NFSU2_TR(0x71085e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710862:{NFSU2_TR(0x710862);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B710866:{NFSU2_TR(0x710866);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B71086a:{NFSU2_TR(0x71086a);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B71086d:{NFSU2_TR(0x71086d);
__builtin_memmove((R+4416),(R+4432),8);
}
B710870:{NFSU2_TR(0x710870);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B710873:{NFSU2_TR(0x710873);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B710876:{NFSU2_TR(0x710876);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B71087a:{NFSU2_TR(0x71087a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71087e:{NFSU2_TR(0x71087e);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B710882:{NFSU2_TR(0x710882);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B710885:{NFSU2_TR(0x710885);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B710888:{NFSU2_TR(0x710888);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71088b:{NFSU2_TR(0x71088b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71088f:{NFSU2_TR(0x71088f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B710893:{NFSU2_TR(0x710893);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B710897:{NFSU2_TR(0x710897);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B71089a:{NFSU2_TR(0x71089a);
__builtin_memmove((R+4416),(R+4432),8);
}
B71089d:{NFSU2_TR(0x71089d);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7108a0:{NFSU2_TR(0x7108a0);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7108a3:{NFSU2_TR(0x7108a3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7108a7:{NFSU2_TR(0x7108a7);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7108ab:{NFSU2_TR(0x7108ab);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7108af:{NFSU2_TR(0x7108af);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7108b2:{NFSU2_TR(0x7108b2);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B7108b5:{NFSU2_TR(0x7108b5);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7108b8:{NFSU2_TR(0x7108b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7108bc:{NFSU2_TR(0x7108bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7108c3:{NFSU2_TR(0x7108c3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B7108c7:{NFSU2_TR(0x7108c7);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7108ca:{NFSU2_TR(0x7108ca);
__builtin_memmove((R+4416),(R+4432),8);
}
B7108cd:{NFSU2_TR(0x7108cd);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7108d0:{NFSU2_TR(0x7108d0);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7108d3:{NFSU2_TR(0x7108d3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7108d7:{NFSU2_TR(0x7108d7);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7108db:{NFSU2_TR(0x7108db);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7108df:{NFSU2_TR(0x7108df);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7108e2:{NFSU2_TR(0x7108e2);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B7108e5:{NFSU2_TR(0x7108e5);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7108e8:{NFSU2_TR(0x7108e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7108ec:{NFSU2_TR(0x7108ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7108ef:{NFSU2_TR(0x7108ef);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B7108f2:{NFSU2_TR(0x7108f2);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8ull))));
}
B7108f5:{NFSU2_TR(0x7108f5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B7108f8:{NFSU2_TR(0x7108f8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B7108fb:{NFSU2_TR(0x7108fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B7108ff:{NFSU2_TR(0x7108ff);
__builtin_memmove((R+4416),(R+4352),8);
}
B710902:{NFSU2_TR(0x710902);
__builtin_memmove((R+4358),(R+4370),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4368),2);
}
B710905:{NFSU2_TR(0x710905);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4372),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4374),2);
}
B710908:{NFSU2_TR(0x710908);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71090c:{NFSU2_TR(0x71090c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B710910:{NFSU2_TR(0x710910);
__builtin_memmove((R+4432),(R+4384),8);
}
B710913:{NFSU2_TR(0x710913);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B710916:{NFSU2_TR(0x710916);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4404),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4406),2);
}
B710919:{NFSU2_TR(0x710919);
__builtin_memmove((R+4368),(R+4352),8);
}
B71091c:{NFSU2_TR(0x71091c);
__builtin_memmove((R+4356),(R+4384),4);
}
B71091f:{NFSU2_TR(0x71091f);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B710922:{NFSU2_TR(0x710922);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B710925:{NFSU2_TR(0x710925);
__builtin_memmove((R+4352),(R+4416),8);
}
B710928:{NFSU2_TR(0x710928);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71092c:{NFSU2_TR(0x71092c);
__builtin_memmove((R+4356),(R+4432),4);
}
B71092f:{NFSU2_TR(0x71092f);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B710932:{NFSU2_TR(0x710932);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B710936:{NFSU2_TR(0x710936);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71093a:{NFSU2_TR(0x71093a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71093e:{NFSU2_TR(0x71093e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710942:{NFSU2_TR(0x710942);
__builtin_memmove((R+4400),(R+4368),8);
}
B710945:{NFSU2_TR(0x710945);
__builtin_memmove((R+4464),(R+4432),8);
}
B710948:{NFSU2_TR(0x710948);
__builtin_memmove((R+4374),(R+4386),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4384),2);
}
B71094b:{NFSU2_TR(0x71094b);
__builtin_memmove((R+4400),(R+4404),2);
__builtin_memmove((R+4402),(R+4388),2);
__builtin_memmove((R+4404),(R+4406),2);
__builtin_memmove((R+4406),(R+4390),2);
}
B71094e:{NFSU2_TR(0x71094e);
__builtin_memmove((R+4438),(R+4450),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4448),2);
}
B710951:{NFSU2_TR(0x710951);
__builtin_memmove((R+4464),(R+4468),2);
__builtin_memmove((R+4466),(R+4452),2);
__builtin_memmove((R+4468),(R+4470),2);
__builtin_memmove((R+4470),(R+4454),2);
}
B710954:{NFSU2_TR(0x710954);
__builtin_memmove((R+4384),(R+4368),8);
}
B710957:{NFSU2_TR(0x710957);
__builtin_memmove((R+4448),(R+4400),8);
}
B71095a:{NFSU2_TR(0x71095a);
__builtin_memmove((R+4372),(R+4432),4);
}
B71095d:{NFSU2_TR(0x71095d);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4436),4);
}
B710960:{NFSU2_TR(0x710960);
__builtin_memmove((R+4404),(R+4464),4);
}
B710963:{NFSU2_TR(0x710963);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4468),4);
}
B710966:{NFSU2_TR(0x710966);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B710969:{NFSU2_TR(0x710969);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B71096c:{NFSU2_TR(0x71096c);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B71096f:{NFSU2_TR(0x71096f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B710973:{NFSU2_TR(0x710973);
u8 U[30];
__builtin_memmove((U+5),(R+4464),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4464),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4465),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4466),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4467),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4468),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4469),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4470),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4471),(U+21),1);
}
B710976:{NFSU2_TR(0x710976);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4464),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71097a:{NFSU2_TR(0x71097a);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4400),8);
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
B71097d:{NFSU2_TR(0x71097d);
u8 U[30];
__builtin_memmove((U+5),(R+4416),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4416),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4417),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4418),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4419),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4420),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4421),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4422),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4423),(U+21),1);
}
B710980:{NFSU2_TR(0x710980);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B710984:{NFSU2_TR(0x710984);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B710987:{NFSU2_TR(0x710987);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4416),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71098b:{NFSU2_TR(0x71098b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B71098e:{NFSU2_TR(0x71098e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B710991:{NFSU2_TR(0x710991);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B710994:{NFSU2_TR(0x710994);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B710998:{NFSU2_TR(0x710998);
__builtin_memmove((R+4416),(R+4352),8);
}
B71099b:{NFSU2_TR(0x71099b);
__builtin_memmove((R+4358),(R+4370),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4368),2);
}
B71099e:{NFSU2_TR(0x71099e);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4372),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4374),2);
}
B7109a1:{NFSU2_TR(0x7109a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7109a5:{NFSU2_TR(0x7109a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B7109a9:{NFSU2_TR(0x7109a9);
__builtin_memmove((R+4432),(R+4384),8);
}
B7109ac:{NFSU2_TR(0x7109ac);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B7109af:{NFSU2_TR(0x7109af);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4404),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4406),2);
}
B7109b2:{NFSU2_TR(0x7109b2);
__builtin_memmove((R+4368),(R+4352),8);
}
B7109b5:{NFSU2_TR(0x7109b5);
__builtin_memmove((R+4356),(R+4384),4);
}
B7109b8:{NFSU2_TR(0x7109b8);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B7109bb:{NFSU2_TR(0x7109bb);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B7109be:{NFSU2_TR(0x7109be);
__builtin_memmove((R+4352),(R+4416),8);
}
B7109c1:{NFSU2_TR(0x7109c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7109c5:{NFSU2_TR(0x7109c5);
__builtin_memmove((R+4356),(R+4432),4);
}
B7109c8:{NFSU2_TR(0x7109c8);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B7109cb:{NFSU2_TR(0x7109cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B7109cf:{NFSU2_TR(0x7109cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7109d3:{NFSU2_TR(0x7109d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7109d7:{NFSU2_TR(0x7109d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7109db:{NFSU2_TR(0x7109db);
__builtin_memmove((R+4400),(R+4368),8);
}
B7109de:{NFSU2_TR(0x7109de);
__builtin_memmove((R+4464),(R+4432),8);
}
B7109e1:{NFSU2_TR(0x7109e1);
__builtin_memmove((R+4374),(R+4386),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4384),2);
}
B7109e4:{NFSU2_TR(0x7109e4);
__builtin_memmove((R+4400),(R+4404),2);
__builtin_memmove((R+4402),(R+4388),2);
__builtin_memmove((R+4404),(R+4406),2);
__builtin_memmove((R+4406),(R+4390),2);
}
B7109e7:{NFSU2_TR(0x7109e7);
__builtin_memmove((R+4438),(R+4450),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4448),2);
}
B7109ea:{NFSU2_TR(0x7109ea);
__builtin_memmove((R+4464),(R+4468),2);
__builtin_memmove((R+4466),(R+4452),2);
__builtin_memmove((R+4468),(R+4470),2);
__builtin_memmove((R+4470),(R+4454),2);
}
B7109ed:{NFSU2_TR(0x7109ed);
__builtin_memmove((R+4384),(R+4368),8);
}
B7109f0:{NFSU2_TR(0x7109f0);
__builtin_memmove((R+4448),(R+4400),8);
}
B7109f3:{NFSU2_TR(0x7109f3);
__builtin_memmove((R+4372),(R+4432),4);
}
B7109f6:{NFSU2_TR(0x7109f6);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4436),4);
}
B7109f9:{NFSU2_TR(0x7109f9);
__builtin_memmove((R+4404),(R+4464),4);
}
B7109fc:{NFSU2_TR(0x7109fc);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4468),4);
}
B7109ff:{NFSU2_TR(0x7109ff);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B710a02:{NFSU2_TR(0x710a02);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B710a05:{NFSU2_TR(0x710a05);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B710a08:{NFSU2_TR(0x710a08);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B710a0c:{NFSU2_TR(0x710a0c);
u8 U[30];
__builtin_memmove((U+5),(R+4464),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4464),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4465),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4466),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4467),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4468),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4469),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4470),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4471),(U+21),1);
}
B710a0f:{NFSU2_TR(0x710a0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4464),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B710a13:{NFSU2_TR(0x710a13);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4400),8);
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
B710a16:{NFSU2_TR(0x710a16);
u8 U[30];
__builtin_memmove((U+5),(R+4416),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4416),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4417),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4418),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4419),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4420),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4421),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4422),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4423),(U+21),1);
}
B710a19:{NFSU2_TR(0x710a19);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B710a1d:{NFSU2_TR(0x710a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B710a20:{NFSU2_TR(0x710a20);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4416),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B710a24:{NFSU2_TR(0x710a24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B710a25:{NFSU2_TR(0x710a25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B710a26:{NFSU2_TR(0x710a26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B710a27:{NFSU2_TR(0x710a27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B710a28:{NFSU2_TR(0x710a28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B710a29:{NFSU2_TR(0x710a29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B710a2a:{NFSU2_TR(0x710a2a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B710a2e:{NFSU2_TR(0x710a2e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B710a32:{NFSU2_TR(0x710a32);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B710a34:{NFSU2_TR(0x710a34);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B710a38:{NFSU2_TR(0x710a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710a3b:{NFSU2_TR(0x710a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B710a3e:{NFSU2_TR(0x710a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710a41:{NFSU2_TR(0x710a41);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B710a43:{NFSU2_TR(0x710a43);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B710a47:{NFSU2_TR(0x710a47);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B710a49:{NFSU2_TR(0x710a49);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B710a4d:{NFSU2_TR(0x710a4d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B710a4f:{NFSU2_TR(0x710a4f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B710a53:{NFSU2_TR(0x710a53);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B710a55:{NFSU2_TR(0x710a55);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B710a59:{NFSU2_TR(0x710a59);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B710a5b:{NFSU2_TR(0x710a5b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B710a5d:{NFSU2_TR(0x710a5d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B710a61:{NFSU2_TR(0x710a61);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B710a63:{NFSU2_TR(0x710a63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+24))));
s4(u32(r4(R+8)),r4(U+0));
}
B710a65:{NFSU2_TR(0x710a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710a68:{NFSU2_TR(0x710a68);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710a6c:{NFSU2_TR(0x710a6c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B710a70:{NFSU2_TR(0x710a70);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B710a74:{NFSU2_TR(0x710a74);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B710a76:{NFSU2_TR(0x710a76);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710a7a:{NFSU2_TR(0x710a7a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B710a7c:{NFSU2_TR(0x710a7c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710a80:{NFSU2_TR(0x710a80);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B710a82:{NFSU2_TR(0x710a82);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710a86:{NFSU2_TR(0x710a86);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B710a88:{NFSU2_TR(0x710a88);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710a8c:{NFSU2_TR(0x710a8c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B710a8e:{NFSU2_TR(0x710a8e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710a92:{NFSU2_TR(0x710a92);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B710a94:{NFSU2_TR(0x710a94);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B710a98:{NFSU2_TR(0x710a98);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B710a9a:{NFSU2_TR(0x710a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B710a9c:L710a9c:{c.instructions+=5;NFSU2_TR(0x710a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B710a9f:{NFSU2_TR(0x710a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B710aa3:{NFSU2_TR(0x710aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B710aa7:{NFSU2_TR(0x710aa7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B710aa8:{NFSU2_TR(0x710aa8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B710aab:L710aab:{c.instructions+=2;NFSU2_TR(0x710aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710aae:{NFSU2_TR(0x710aae);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x710150u);}goto L710150;}}
}
B710ab4:L710ab4:{c.instructions+=7;NFSU2_TR(0x710ab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B710ab5:{NFSU2_TR(0x710ab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B710ab6:{NFSU2_TR(0x710ab6);
__builtin_memmove((R+16),(R+20),4);
}
B710ab8:{NFSU2_TR(0x710ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B710ab9:{NFSU2_TR(0x710ab9);
__builtin_memmove((R+16),(R+12),4);
}
B710abb:{NFSU2_TR(0x710abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B710abc:{NFSU2_TR(0x710abc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B710abd:L710abd:{c.instructions+=28;NFSU2_TR(0x710abd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B710abe:{NFSU2_TR(0x710abe);
__builtin_memmove((R+12),(R+16),4);
}
B710ac0:{NFSU2_TR(0x710ac0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B710ac1:{NFSU2_TR(0x710ac1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B710ac2:{NFSU2_TR(0x710ac2);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B710ac5:{NFSU2_TR(0x710ac5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B710ac8:{NFSU2_TR(0x710ac8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B710ac9:{NFSU2_TR(0x710ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B710acc:{NFSU2_TR(0x710acc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710ad0:{NFSU2_TR(0x710ad0);
__builtin_memmove((R+20),(R+16),4);
}
B710ad2:{NFSU2_TR(0x710ad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x208ull))));
}
B710ad8:{NFSU2_TR(0x710ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710adb:{NFSU2_TR(0x710adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710ade:{NFSU2_TR(0x710ade);
__builtin_memmove((R+8),gp(0x8b9c4c),4);
}
B710ae4:{NFSU2_TR(0x710ae4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B710ae7:{NFSU2_TR(0x710ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710aea:{NFSU2_TR(0x710aea);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B710aee:{NFSU2_TR(0x710aee);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff82ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B710af2:{NFSU2_TR(0x710af2);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B710af6:{NFSU2_TR(0x710af6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff86ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B710afa:{NFSU2_TR(0x710afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710afd:{NFSU2_TR(0x710afd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B710aff:{NFSU2_TR(0x710aff);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B710b01:{NFSU2_TR(0x710b01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B710b02:{NFSU2_TR(0x710b02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B710b03:{NFSU2_TR(0x710b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710b06:{NFSU2_TR(0x710b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710b0c:{NFSU2_TR(0x710b0c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x711f8du,711);}
}
B710b12:L710b12:{c.instructions+=364;NFSU2_TR(0x710b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710b15:{NFSU2_TR(0x710b15);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B710b18:{NFSU2_TR(0x710b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710b1b:{NFSU2_TR(0x710b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710b1e:{NFSU2_TR(0x710b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710b21:{NFSU2_TR(0x710b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710b24:{NFSU2_TR(0x710b24);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B710b27:{NFSU2_TR(0x710b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710b2a:{NFSU2_TR(0x710b2a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B710b2c:{NFSU2_TR(0x710b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710b2f:{NFSU2_TR(0x710b2f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B710b32:{NFSU2_TR(0x710b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710b35:{NFSU2_TR(0x710b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710b38:{NFSU2_TR(0x710b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710b3b:{NFSU2_TR(0x710b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710b3e:{NFSU2_TR(0x710b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710b41:{NFSU2_TR(0x710b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710b44:{NFSU2_TR(0x710b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710b47:{NFSU2_TR(0x710b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710b4a:{NFSU2_TR(0x710b4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B710b4d:{NFSU2_TR(0x710b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710b50:{NFSU2_TR(0x710b50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B710b53:{NFSU2_TR(0x710b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B710b56:{NFSU2_TR(0x710b56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B710b57:{NFSU2_TR(0x710b57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B710b58:{NFSU2_TR(0x710b58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B710b59:{NFSU2_TR(0x710b59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B710b5a:{NFSU2_TR(0x710b5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B710b5b:{NFSU2_TR(0x710b5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B710b5c:{NFSU2_TR(0x710b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710b5f:{NFSU2_TR(0x710b5f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B710b61:{NFSU2_TR(0x710b61);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B710b64:{NFSU2_TR(0x710b64);
u8 U[12];
w1(U+0,u8((r2(R+4448))==(r2(R+4448))));
w2(U+1,u16(r1(U+0)));
w2(R+4448,u16(u32(r2(U+1))*u32(u16(0xffffull))));
w1(U+3,u8((r2(R+4450))==(r2(R+4450))));
w2(U+4,u16(r1(U+3)));
w2(R+4450,u16(u32(r2(U+4))*u32(u16(0xffffull))));
w1(U+6,u8((r2(R+4452))==(r2(R+4452))));
w2(U+7,u16(r1(U+6)));
w2(R+4452,u16(u32(r2(U+7))*u32(u16(0xffffull))));
w1(U+9,u8((r2(R+4454))==(r2(R+4454))));
w2(U+10,u16(r1(U+9)));
w2(R+4454,u16(u32(r2(U+10))*u32(u16(0xffffull))));
}
B710b67:{NFSU2_TR(0x710b67);
w8(R+4432,u64(r4(R+0)));
}
B710b6a:{NFSU2_TR(0x710b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B710b6d:{NFSU2_TR(0x710b6d);
w2(R+4448,shr<u16>(r2(R+4448),u64(u32(0xeull))));
w2(R+4450,shr<u16>(r2(R+4450),u64(u32(0xeull))));
w2(R+4452,shr<u16>(r2(R+4452),u64(u32(0xeull))));
w2(R+4454,shr<u16>(r2(R+4454),u64(u32(0xeull))));
}
B710b71:{NFSU2_TR(0x710b71);
__builtin_memmove((R+4438),(R+4434),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4432),2);
}
B710b74:{NFSU2_TR(0x710b74);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe00ull))));
__builtin_memmove((R+24),(U+0),4);
}
B710b7a:{NFSU2_TR(0x710b7a);
__builtin_memmove((R+4436),(R+4432),4);
}
B710b7d:{NFSU2_TR(0x710b7d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B710b7f:{NFSU2_TR(0x710b7f);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4438))));
}
B710b82:{NFSU2_TR(0x710b82);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710b89:{NFSU2_TR(0x710b89);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B710b8f:{NFSU2_TR(0x710b8f);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B710b92:{NFSU2_TR(0x710b92);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4438))));
}
B710b95:{NFSU2_TR(0x710b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B710b98:{NFSU2_TR(0x710b98);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B710b9c:{NFSU2_TR(0x710b9c);
__builtin_memmove((R+4368),(R+4352),8);
}
B710b9f:{NFSU2_TR(0x710b9f);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B710ba2:{NFSU2_TR(0x710ba2);
w2(R+4448,shr<u16>(r2(R+4448),u64(u32(0x5ull))));
w2(R+4450,shr<u16>(r2(R+4450),u64(u32(0x5ull))));
w2(R+4452,shr<u16>(r2(R+4452),u64(u32(0x5ull))));
w2(R+4454,shr<u16>(r2(R+4454),u64(u32(0x5ull))));
}
B710ba6:{NFSU2_TR(0x710ba6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710bad:{NFSU2_TR(0x710bad);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B710bb0:{NFSU2_TR(0x710bb0);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B710bb3:{NFSU2_TR(0x710bb3);
__builtin_memmove((R+4400),(R+4384),8);
}
B710bb6:{NFSU2_TR(0x710bb6);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B710bb9:{NFSU2_TR(0x710bb9);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B710bbc:{NFSU2_TR(0x710bbc);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B710bbf:{NFSU2_TR(0x710bbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710bc3:{NFSU2_TR(0x710bc3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B710bc7:{NFSU2_TR(0x710bc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710bcb:{NFSU2_TR(0x710bcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710bcf:{NFSU2_TR(0x710bcf);
__builtin_memmove((R+4432),(R+4416),8);
}
B710bd2:{NFSU2_TR(0x710bd2);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B710bd5:{NFSU2_TR(0x710bd5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B710bd9:{NFSU2_TR(0x710bd9);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B710bdc:{NFSU2_TR(0x710bdc);
__builtin_memmove((R+4368),(R+4352),8);
}
B710bdf:{NFSU2_TR(0x710bdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710be3:{NFSU2_TR(0x710be3);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B710be6:{NFSU2_TR(0x710be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B710be9:{NFSU2_TR(0x710be9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710bed:{NFSU2_TR(0x710bed);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B710bf0:{NFSU2_TR(0x710bf0);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B710bf4:{NFSU2_TR(0x710bf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710bf8:{NFSU2_TR(0x710bf8);
__builtin_memmove((R+4400),(R+4384),8);
}
B710bfb:{NFSU2_TR(0x710bfb);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B710bfe:{NFSU2_TR(0x710bfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c02:{NFSU2_TR(0x710c02);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B710c05:{NFSU2_TR(0x710c05);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B710c08:{NFSU2_TR(0x710c08);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c0c:{NFSU2_TR(0x710c0c);
__builtin_memmove((R+4432),(R+4416),8);
}
B710c0f:{NFSU2_TR(0x710c0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c13:{NFSU2_TR(0x710c13);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B710c16:{NFSU2_TR(0x710c16);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B710c19:{NFSU2_TR(0x710c19);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B710c1d:{NFSU2_TR(0x710c1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c21:{NFSU2_TR(0x710c21);
__builtin_memmove((R+4368),(R+4352),8);
}
B710c24:{NFSU2_TR(0x710c24);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c28:{NFSU2_TR(0x710c28);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B710c2b:{NFSU2_TR(0x710c2b);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B710c2e:{NFSU2_TR(0x710c2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B710c32:{NFSU2_TR(0x710c32);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B710c35:{NFSU2_TR(0x710c35);
__builtin_memmove((R+4400),(R+4384),8);
}
B710c38:{NFSU2_TR(0x710c38);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c3c:{NFSU2_TR(0x710c3c);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B710c3f:{NFSU2_TR(0x710c3f);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B710c42:{NFSU2_TR(0x710c42);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B710c46:{NFSU2_TR(0x710c46);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c4a:{NFSU2_TR(0x710c4a);
__builtin_memmove((R+4432),(R+4416),8);
}
B710c4d:{NFSU2_TR(0x710c4d);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B710c50:{NFSU2_TR(0x710c50);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c54:{NFSU2_TR(0x710c54);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c58:{NFSU2_TR(0x710c58);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B710c5b:{NFSU2_TR(0x710c5b);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B710c5e:{NFSU2_TR(0x710c5e);
__builtin_memmove((R+4368),(R+4352),8);
}
B710c61:{NFSU2_TR(0x710c61);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c68:{NFSU2_TR(0x710c68);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B710c6b:{NFSU2_TR(0x710c6b);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B710c6e:{NFSU2_TR(0x710c6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c75:{NFSU2_TR(0x710c75);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c7c:{NFSU2_TR(0x710c7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710c83:{NFSU2_TR(0x710c83);
u8 U[12];
w1(U+0,u8((r2(R+4400))==(r2(R+4400))));
w2(U+1,u16(r1(U+0)));
w2(R+4400,u16(u32(r2(U+1))*u32(u16(0xffffull))));
w1(U+3,u8((r2(R+4402))==(r2(R+4402))));
w2(U+4,u16(r1(U+3)));
w2(R+4402,u16(u32(r2(U+4))*u32(u16(0xffffull))));
w1(U+6,u8((r2(R+4404))==(r2(R+4404))));
w2(U+7,u16(r1(U+6)));
w2(R+4404,u16(u32(r2(U+7))*u32(u16(0xffffull))));
w1(U+9,u8((r2(R+4406))==(r2(R+4406))));
w2(U+10,u16(r1(U+9)));
w2(R+4406,u16(u32(r2(U+10))*u32(u16(0xffffull))));
}
B710c86:{NFSU2_TR(0x710c86);
{wv<8>((R+4400),uo::psllw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B710c8a:{NFSU2_TR(0x710c8a);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B710c8e:{NFSU2_TR(0x710c8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B710c92:{NFSU2_TR(0x710c92);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710c96:{NFSU2_TR(0x710c96);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B710c99:{NFSU2_TR(0x710c99);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B710c9c:{NFSU2_TR(0x710c9c);
__builtin_memmove((R+4352),(R+4384),8);
}
B710c9f:{NFSU2_TR(0x710c9f);
__builtin_memmove((R+4416),(R+4448),8);
}
B710ca2:{NFSU2_TR(0x710ca2);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710ca5:{NFSU2_TR(0x710ca5);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B710ca8:{NFSU2_TR(0x710ca8);
__builtin_memmove((R+4368),(R+4384),8);
}
B710cab:{NFSU2_TR(0x710cab);
__builtin_memmove((R+4432),(R+4448),8);
}
B710cae:{NFSU2_TR(0x710cae);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B710cb2:{NFSU2_TR(0x710cb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710cb6:{NFSU2_TR(0x710cb6);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B710cb9:{NFSU2_TR(0x710cb9);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B710cbc:{NFSU2_TR(0x710cbc);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B710cbf:{NFSU2_TR(0x710cbf);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B710cc2:{NFSU2_TR(0x710cc2);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710cc5:{NFSU2_TR(0x710cc5);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B710cc8:{NFSU2_TR(0x710cc8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B710ccb:{NFSU2_TR(0x710ccb);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B710cce:{NFSU2_TR(0x710cce);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B710cd2:{NFSU2_TR(0x710cd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710cd6:{NFSU2_TR(0x710cd6);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B710cd9:{NFSU2_TR(0x710cd9);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B710cdc:{NFSU2_TR(0x710cdc);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B710cdf:{NFSU2_TR(0x710cdf);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B710ce2:{NFSU2_TR(0x710ce2);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710ce5:{NFSU2_TR(0x710ce5);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B710ce8:{NFSU2_TR(0x710ce8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B710ceb:{NFSU2_TR(0x710ceb);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B710cee:{NFSU2_TR(0x710cee);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B710cf2:{NFSU2_TR(0x710cf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710cf9:{NFSU2_TR(0x710cf9);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B710cfc:{NFSU2_TR(0x710cfc);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B710cff:{NFSU2_TR(0x710cff);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B710d02:{NFSU2_TR(0x710d02);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B710d05:{NFSU2_TR(0x710d05);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710d08:{NFSU2_TR(0x710d08);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B710d0b:{NFSU2_TR(0x710d0b);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B710d0e:{NFSU2_TR(0x710d0e);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B710d11:{NFSU2_TR(0x710d11);
__builtin_memmove((R+4464),(R+4400),8);
}
B710d14:{NFSU2_TR(0x710d14);
w2(R+4464,shr<u16>(r2(R+4464),u64(u32(0x7ull))));
w2(R+4466,shr<u16>(r2(R+4466),u64(u32(0x7ull))));
w2(R+4468,shr<u16>(r2(R+4468),u64(u32(0x7ull))));
w2(R+4470,shr<u16>(r2(R+4470),u64(u32(0x7ull))));
}
B710d18:{NFSU2_TR(0x710d18);
__builtin_memmove((R+4384),(R+4352),8);
}
B710d1b:{NFSU2_TR(0x710d1b);
__builtin_memmove((R+4448),(R+4416),8);
}
B710d1e:{NFSU2_TR(0x710d1e);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B710d21:{NFSU2_TR(0x710d21);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4464))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4466))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4468))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4470))));
}
B710d24:{NFSU2_TR(0x710d24);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B710d28:{NFSU2_TR(0x710d28);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x1ull)));}
}
B710d2c:{NFSU2_TR(0x710d2c);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B710d30:{NFSU2_TR(0x710d30);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B710d34:{NFSU2_TR(0x710d34);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4358))));
}
B710d37:{NFSU2_TR(0x710d37);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4422))));
}
B710d3a:{NFSU2_TR(0x710d3a);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B710d3d:{NFSU2_TR(0x710d3d);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4454))));
}
B710d40:{NFSU2_TR(0x710d40);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B710d47:{NFSU2_TR(0x710d47);
__builtin_memmove((R+4384),(R+4368),8);
}
B710d4a:{NFSU2_TR(0x710d4a);
__builtin_memmove((R+4448),(R+4432),8);
}
B710d4d:{NFSU2_TR(0x710d4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710d51:{NFSU2_TR(0x710d51);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710d55:{NFSU2_TR(0x710d55);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4470))));
}
B710d58:{NFSU2_TR(0x710d58);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4470))));
}
B710d5b:{NFSU2_TR(0x710d5b);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0xfull)));}
}
B710d5f:{NFSU2_TR(0x710d5f);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B710d63:{NFSU2_TR(0x710d63);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B710d67:{NFSU2_TR(0x710d67);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B710d6b:{NFSU2_TR(0x710d6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B710d6f:{NFSU2_TR(0x710d6f);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4368))));
}
B710d72:{NFSU2_TR(0x710d72);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4448))));
w8(R+4448,u64(u64(r8(U+0))&u64(r8(R+4432))));
}
B710d75:{NFSU2_TR(0x710d75);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B710d79:{NFSU2_TR(0x710d79);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4384))));
}
B710d7c:{NFSU2_TR(0x710d7c);
__builtin_memmove((R+4384),(R+4464),8);
}
B710d7f:{NFSU2_TR(0x710d7f);
{wv<8>((R+4464),uo::psubusw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B710d82:{NFSU2_TR(0x710d82);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B710d85:{NFSU2_TR(0x710d85);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4416))));
}
B710d88:{NFSU2_TR(0x710d88);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(U+12))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(U+14))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(U+16))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(U+18))));
}
B710d8f:{NFSU2_TR(0x710d8f);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0xfull)));}
}
B710d93:{NFSU2_TR(0x710d93);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4448))));
}
B710d96:{NFSU2_TR(0x710d96);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B710d99:{NFSU2_TR(0x710d99);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B710d9d:{NFSU2_TR(0x710d9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710da1:{NFSU2_TR(0x710da1);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B710da4:{NFSU2_TR(0x710da4);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B710da7:{NFSU2_TR(0x710da7);
__builtin_memmove((R+4352),(R+4384),8);
}
B710daa:{NFSU2_TR(0x710daa);
__builtin_memmove((R+4416),(R+4448),8);
}
B710dad:{NFSU2_TR(0x710dad);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710db0:{NFSU2_TR(0x710db0);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B710db3:{NFSU2_TR(0x710db3);
__builtin_memmove((R+4368),(R+4384),8);
}
B710db6:{NFSU2_TR(0x710db6);
__builtin_memmove((R+4432),(R+4448),8);
}
B710db9:{NFSU2_TR(0x710db9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B710dbd:{NFSU2_TR(0x710dbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710dc1:{NFSU2_TR(0x710dc1);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B710dc4:{NFSU2_TR(0x710dc4);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B710dc7:{NFSU2_TR(0x710dc7);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B710dca:{NFSU2_TR(0x710dca);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B710dcd:{NFSU2_TR(0x710dcd);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710dd0:{NFSU2_TR(0x710dd0);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B710dd3:{NFSU2_TR(0x710dd3);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B710dd6:{NFSU2_TR(0x710dd6);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B710dd9:{NFSU2_TR(0x710dd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B710ddd:{NFSU2_TR(0x710ddd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710de1:{NFSU2_TR(0x710de1);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B710de4:{NFSU2_TR(0x710de4);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B710de7:{NFSU2_TR(0x710de7);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B710dea:{NFSU2_TR(0x710dea);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B710ded:{NFSU2_TR(0x710ded);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710df0:{NFSU2_TR(0x710df0);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B710df3:{NFSU2_TR(0x710df3);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B710df6:{NFSU2_TR(0x710df6);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B710df9:{NFSU2_TR(0x710df9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B710dfd:{NFSU2_TR(0x710dfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710e04:{NFSU2_TR(0x710e04);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B710e07:{NFSU2_TR(0x710e07);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B710e0a:{NFSU2_TR(0x710e0a);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B710e0d:{NFSU2_TR(0x710e0d);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B710e10:{NFSU2_TR(0x710e10);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B710e13:{NFSU2_TR(0x710e13);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B710e16:{NFSU2_TR(0x710e16);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B710e19:{NFSU2_TR(0x710e19);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B710e1c:{NFSU2_TR(0x710e1c);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x7ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x7ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x7ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x7ull))));
}
B710e20:{NFSU2_TR(0x710e20);
__builtin_memmove((R+4384),(R+4352),8);
}
B710e23:{NFSU2_TR(0x710e23);
__builtin_memmove((R+4448),(R+4416),8);
}
B710e26:{NFSU2_TR(0x710e26);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B710e29:{NFSU2_TR(0x710e29);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B710e2c:{NFSU2_TR(0x710e2c);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B710e30:{NFSU2_TR(0x710e30);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x1ull)));}
}
B710e34:{NFSU2_TR(0x710e34);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B710e38:{NFSU2_TR(0x710e38);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B710e3c:{NFSU2_TR(0x710e3c);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4358))));
}
B710e3f:{NFSU2_TR(0x710e3f);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4422))));
}
B710e42:{NFSU2_TR(0x710e42);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B710e45:{NFSU2_TR(0x710e45);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4454))));
}
B710e48:{NFSU2_TR(0x710e48);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710e4c:{NFSU2_TR(0x710e4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710e50:{NFSU2_TR(0x710e50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B710e57:{NFSU2_TR(0x710e57);
__builtin_memmove((R+4384),(R+4368),8);
}
B710e5a:{NFSU2_TR(0x710e5a);
__builtin_memmove((R+4448),(R+4432),8);
}
B710e5d:{NFSU2_TR(0x710e5d);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4406))));
}
B710e60:{NFSU2_TR(0x710e60);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4406))));
}
B710e63:{NFSU2_TR(0x710e63);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0xfull)));}
}
B710e67:{NFSU2_TR(0x710e67);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B710e6b:{NFSU2_TR(0x710e6b);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B710e6f:{NFSU2_TR(0x710e6f);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B710e73:{NFSU2_TR(0x710e73);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B710e77:{NFSU2_TR(0x710e77);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4368))));
}
B710e7a:{NFSU2_TR(0x710e7a);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4448))));
w8(R+4448,u64(u64(r8(U+0))&u64(r8(R+4432))));
}
B710e7d:{NFSU2_TR(0x710e7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B710e81:{NFSU2_TR(0x710e81);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4384))));
}
B710e84:{NFSU2_TR(0x710e84);
__builtin_memmove((R+4384),(R+4352),8);
}
B710e87:{NFSU2_TR(0x710e87);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B710e8a:{NFSU2_TR(0x710e8a);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B710e8d:{NFSU2_TR(0x710e8d);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4416))));
}
B710e90:{NFSU2_TR(0x710e90);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(U+12))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(U+14))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(U+16))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(U+18))));
}
B710e97:{NFSU2_TR(0x710e97);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B710e9b:{NFSU2_TR(0x710e9b);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4448))));
}
B710e9e:{NFSU2_TR(0x710e9e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x8ull))));
}
B710ea1:{NFSU2_TR(0x710ea1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B710ea5:{NFSU2_TR(0x710ea5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B710ea9:{NFSU2_TR(0x710ea9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B710ead:{NFSU2_TR(0x710ead);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B710eb1:{NFSU2_TR(0x710eb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B710eb5:{NFSU2_TR(0x710eb5);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4422))));
}
B710eb8:{NFSU2_TR(0x710eb8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4454))));
}
B710ebb:{NFSU2_TR(0x710ebb);
__builtin_memmove((R+4416),(R+4432),8);
}
B710ebe:{NFSU2_TR(0x710ebe);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B710ec1:{NFSU2_TR(0x710ec1);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B710ec8:{NFSU2_TR(0x710ec8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4422))));
}
B710ecb:{NFSU2_TR(0x710ecb);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B710ece:{NFSU2_TR(0x710ece);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B710ed2:{NFSU2_TR(0x710ed2);
__builtin_memmove((R+4384),(R+4400),8);
}
B710ed5:{NFSU2_TR(0x710ed5);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B710ed9:{NFSU2_TR(0x710ed9);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4400))));
}
B710edc:{NFSU2_TR(0x710edc);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B710edf:{NFSU2_TR(0x710edf);
w8(R+4400,u64(u64(r8(R+4400))|u64(m8(0x8175d0))));
}
B710ee6:{NFSU2_TR(0x710ee6);
__builtin_memmove((R+4416),(R+4368),8);
}
B710ee9:{NFSU2_TR(0x710ee9);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B710eec:{NFSU2_TR(0x710eec);
__builtin_memmove((R+4432),(R+4368),8);
}
B710eef:{NFSU2_TR(0x710eef);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B710ef3:{NFSU2_TR(0x710ef3);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4368))));
}
B710ef6:{NFSU2_TR(0x710ef6);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B710ef9:{NFSU2_TR(0x710ef9);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B710efc:{NFSU2_TR(0x710efc);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4406))));
}
B710eff:{NFSU2_TR(0x710eff);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B710f03:{NFSU2_TR(0x710f03);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B710f07:{NFSU2_TR(0x710f07);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4416))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4418))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4420))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4422))));
}
B710f0a:{NFSU2_TR(0x710f0a);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4422))));
}
B710f0d:{NFSU2_TR(0x710f0d);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B710f10:{NFSU2_TR(0x710f10);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4368),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4369),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4370),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4371),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4372),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4373),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4374),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4375),(U+21),1);
}
B710f13:{NFSU2_TR(0x710f13);
u8 U[30];
__builtin_memmove((U+5),(R+4384),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4384),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4385),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4386),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4387),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4388),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4389),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4390),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4391),(U+21),1);
}
B710f16:{NFSU2_TR(0x710f16);
__builtin_memmove((R+4375),(R+4451),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4450),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4449),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4448),1);
}
B710f19:{NFSU2_TR(0x710f19);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710f20:{NFSU2_TR(0x710f20);
__builtin_memmove((R+4391),(R+4451),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4450),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4449),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4448),1);
}
B710f23:{NFSU2_TR(0x710f23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B710f2a:{NFSU2_TR(0x710f2a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B710f2d:{NFSU2_TR(0x710f2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B710f31:{NFSU2_TR(0x710f31);
__builtin_memmove((R+4400),(R+4416),8);
}
B710f34:{NFSU2_TR(0x710f34);
__builtin_memmove((R+4448),(R+4432),8);
}
B710f37:{NFSU2_TR(0x710f37);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B710f3a:{NFSU2_TR(0x710f3a);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B710f3d:{NFSU2_TR(0x710f3d);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B710f40:{NFSU2_TR(0x710f40);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B710f47:{NFSU2_TR(0x710f47);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B710f4b:{NFSU2_TR(0x710f4b);
__builtin_memmove((R+4368),(R+4416),8);
}
B710f4e:{NFSU2_TR(0x710f4e);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B710f51:{NFSU2_TR(0x710f51);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B710f54:{NFSU2_TR(0x710f54);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4416))));
}
B710f57:{NFSU2_TR(0x710f57);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B710f5e:{NFSU2_TR(0x710f5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B710f65:{NFSU2_TR(0x710f65);
__builtin_memmove((R+4400),(R+4416),8);
}
B710f68:{NFSU2_TR(0x710f68);
__builtin_memmove((R+4448),(R+4432),8);
}
B710f6b:{NFSU2_TR(0x710f6b);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B710f6e:{NFSU2_TR(0x710f6e);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B710f71:{NFSU2_TR(0x710f71);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B710f74:{NFSU2_TR(0x710f74);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B710f7b:{NFSU2_TR(0x710f7b);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B710f7f:{NFSU2_TR(0x710f7f);
__builtin_memmove((R+4384),(R+4416),8);
}
B710f82:{NFSU2_TR(0x710f82);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B710f85:{NFSU2_TR(0x710f85);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B710f88:{NFSU2_TR(0x710f88);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4416))));
}
B710f8b:{NFSU2_TR(0x710f8b);
__builtin_memmove((R+4400),(R+4368),8);
}
B710f8e:{NFSU2_TR(0x710f8e);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B710f91:{NFSU2_TR(0x710f91);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B710f94:{NFSU2_TR(0x710f94);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B710f98:{NFSU2_TR(0x710f98);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B710f9c:{NFSU2_TR(0x710f9c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B710fa0:{NFSU2_TR(0x710fa0);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B710fa4:{NFSU2_TR(0x710fa4);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B710fab:{NFSU2_TR(0x710fab);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B710fae:{NFSU2_TR(0x710fae);
__builtin_memmove((R+4416),(R+4400),8);
}
B710fb1:{NFSU2_TR(0x710fb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B710fb5:{NFSU2_TR(0x710fb5);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B710fb8:{NFSU2_TR(0x710fb8);
{wv<8>((R+4416),uo::psllw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B710fbc:{NFSU2_TR(0x710fbc);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B710fc0:{NFSU2_TR(0x710fc0);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B710fc4:{NFSU2_TR(0x710fc4);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B710fc8:{NFSU2_TR(0x710fc8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B710fcb:{NFSU2_TR(0x710fcb);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B710fce:{NFSU2_TR(0x710fce);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B710fd1:{NFSU2_TR(0x710fd1);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B710fd4:{NFSU2_TR(0x710fd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B710fd8:{NFSU2_TR(0x710fd8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B710fdb:{NFSU2_TR(0x710fdb);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B710fdf:{NFSU2_TR(0x710fdf);
__builtin_memmove((R+4416),(R+4432),8);
}
B710fe2:{NFSU2_TR(0x710fe2);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B710fe5:{NFSU2_TR(0x710fe5);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B710fe8:{NFSU2_TR(0x710fe8);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B710fec:{NFSU2_TR(0x710fec);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B710ff0:{NFSU2_TR(0x710ff0);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B710ff4:{NFSU2_TR(0x710ff4);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B710ff7:{NFSU2_TR(0x710ff7);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B710ffa:{NFSU2_TR(0x710ffa);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B710ffd:{NFSU2_TR(0x710ffd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
TAIL_STATIC(0x711001u,711);
}
XIT:NFSU2_TR_EXIT(0x710,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
